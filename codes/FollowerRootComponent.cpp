void __fastcall FollowerRootComponent___cctor(const MethodInfo *method)
{
  FollowerRootComponent_c *v1; // x8

  if ( (byte_42AEA38 & 1) == 0 )
  {
    sub_B52984(&FollowerRootComponent_TypeInfo);
    byte_42AEA38 = 1;
  }
  FollowerRootComponent_TypeInfo->static_fields->LIST_UPDATE_MESSAGE_FONT_SIZE = 26;
  v1 = FollowerRootComponent_TypeInfo;
  FollowerRootComponent_TypeInfo->static_fields->RETURN_TERMINAL_MESSAGE_FONT_SIZE = 27;
  v1->static_fields->RETURN_TERMINAL_MESSAGE_POSITION_Y = 10;
  v1->static_fields->RETURN_TERMINAL_MESSAGE_SPACING_Y = 5;
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

  if ( (byte_42AEA37 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42AEA37 = 1;
  }
  v9 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.backupBgmName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.backupBgmName, v9, v2, v3, v4, v5, v6, v7);
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0LL);
}


void __fastcall FollowerRootComponent__CallbackFollowerList(
        FollowerRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_42AEA1E & 1) == 0 )
  {
    sub_B52984(&StringLiteral_11166/*"REQUEST_OK"*/);
    byte_42AEA1E = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_B52A5C(0LL, result);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_11166/*"REQUEST_OK"*/, 0LL);
}


void __fastcall FollowerRootComponent__CallbackRefresh(
        FollowerRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v4; // x1
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x0
  FollowerSelectItemListViewManager_o *v6; // x20
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  FollowerSelectItemListViewManager_o *v8; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v9; // x21

  if ( (byte_42AEA2E & 1) == 0 )
  {
    sub_B52984(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    sub_B52984(&Method_FollowerRootComponent_OnSelectFollowerItem__);
    sub_B52984(&RandomLimitCountManager_TypeInfo);
    byte_42AEA2E = 1;
  }
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  RandomLimitCountManager__set_EnableRandomLimitCount(0, 0LL);
  RandomLimitCountManager__set_EnableRandomLimitCount(1, 0LL);
  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    goto LABEL_13;
  FollowerSelectItemListViewManager__SaveSortFilter(operationItemListViewManager, 0LL);
  operationItemListViewManager = (FollowerSelectItemListViewManager_o *)this->fields.battleSetupInfo;
  if ( !operationItemListViewManager )
    goto LABEL_13;
  v6 = this->fields.operationItemListViewManager;
  operationItemListViewManager = (FollowerSelectItemListViewManager_o *)BattleSetupInfo__TargetQuestId(
                                                                          (BattleSetupInfo_o *)operationItemListViewManager,
                                                                          0LL);
  battleSetupInfo = this->fields.battleSetupInfo;
  if ( !battleSetupInfo
    || !v6
    || (FollowerSelectItemListViewManager__CreateList(
          v6,
          (int32_t)operationItemListViewManager,
          battleSetupInfo->fields.questPhase,
          this->fields.friendPointUpVal,
          this->fields.friendPointUpMaxVal,
          this->fields.friendPointCampaignEntityList,
          battleSetupInfo->fields.questRestrictionInfo,
          0LL),
        v8 = this->fields.operationItemListViewManager,
        v9 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_B52A54(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo),
        FollowerSelectItemListViewManager_CallbackFunc___ctor(
          v9,
          (Il2CppObject *)this,
          Method_FollowerRootComponent_OnSelectFollowerItem__,
          0LL),
        !v8)
    || (FollowerSelectItemListViewManager__SetMode(v8, 2, v9, 0LL),
        (operationItemListViewManager = (FollowerSelectItemListViewManager_o *)this->fields.commonConfirmDialog) == 0LL) )
  {
LABEL_13:
    sub_B52A5C(operationItemListViewManager, v4);
  }
  CommonConfirmDialog__Close((CommonConfirmDialog_o *)operationItemListViewManager, 0LL);
}


void __fastcall FollowerRootComponent__EndCloseShowServant(FollowerRootComponent_o *this, const MethodInfo *method)
{
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_42AEA23 & 1) == 0 )
  {
    sub_B52984(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    sub_B52984(&Method_FollowerRootComponent_OnSelectFollowerItem__);
    byte_42AEA23 = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v4 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_B52A54(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    Method_FollowerRootComponent_OnSelectFollowerItem__,
    0LL);
  if ( !operationItemListViewManager )
    sub_B52A5C(v5, v6);
  FollowerSelectItemListViewManager__SetMode(operationItemListViewManager, 2, v4, 0LL);
}


void __fastcall FollowerRootComponent__EndCloseShowServantEquip(
        FollowerRootComponent_o *this,
        const MethodInfo *method)
{
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_42AEA26 & 1) == 0 )
  {
    sub_B52984(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    sub_B52984(&Method_FollowerRootComponent_OnSelectFollowerItem__);
    byte_42AEA26 = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v4 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_B52A54(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    Method_FollowerRootComponent_OnSelectFollowerItem__,
    0LL);
  if ( !operationItemListViewManager )
    sub_B52A5C(v5, v6);
  FollowerSelectItemListViewManager__SetMode(operationItemListViewManager, 2, v4, 0LL);
}


void __fastcall FollowerRootComponent__EndCloseTutorialArrow(FollowerRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *tutorialMaskBase2; // x0

  if ( (byte_42AEA30 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_8782/*"MENU_SELECT_ITEM"*/);
    byte_42AEA30 = 1;
  }
  tutorialMaskBase2 = this->fields.tutorialMaskBase2;
  if ( !tutorialMaskBase2
    || (UnityEngine_GameObject__SetActive(tutorialMaskBase2, 0, 0LL),
        tutorialMaskBase2 = (UnityEngine_GameObject_o *)this->fields.myFSM,
        this->fields.state = 3,
        !tutorialMaskBase2) )
  {
    sub_B52A5C(tutorialMaskBase2, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)tutorialMaskBase2, (System_String_o *)StringLiteral_8782/*"MENU_SELECT_ITEM"*/, 0LL);
}


void __fastcall FollowerRootComponent__EndLoadCommonBg(FollowerRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *backSkinSprite; // x0
  System_Action_o *v4; // x20

  if ( (byte_42AEA16 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&Method_FollowerRootComponent_EndLoadOutGameAtlas__);
    byte_42AEA16 = 1;
  }
  backSkinSprite = (UnityEngine_Component_o *)this->fields.backSkinSprite;
  if ( !backSkinSprite
    || (backSkinSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(backSkinSprite, 0LL)) == 0LL )
  {
    sub_B52A5C(backSkinSprite, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)backSkinSprite, 1, 0LL);
  v4 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_FollowerRootComponent_EndLoadOutGameAtlas__, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadOutGameAtlas(v4, 0LL);
}


void __fastcall FollowerRootComponent__EndLoadEventAtlas(FollowerRootComponent_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_42AEA18 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&Method_FollowerRootComponent_EndLoadPartyOrganizationAtlas__);
    byte_42AEA18 = 1;
  }
  v3 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_FollowerRootComponent_EndLoadPartyOrganizationAtlas__, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadPartyOrganizationAtlas(v3, 1, 0LL);
}


void __fastcall FollowerRootComponent__EndLoadOutGameAtlas(FollowerRootComponent_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_42AEA17 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&Method_FollowerRootComponent_EndLoadEventAtlas__);
    byte_42AEA17 = 1;
  }
  v3 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_FollowerRootComponent_EndLoadEventAtlas__, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventAtlas(v3, 1, 0LL);
}


void __fastcall FollowerRootComponent__EndLoadPartyOrganizationAtlas(
        FollowerRootComponent_o *this,
        const MethodInfo *method)
{
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x0
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1

  if ( (byte_42AEA19 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_B52984(&SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    byte_42AEA19 = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    goto LABEL_18;
  FollowerSelectItemListViewManager__AdjustButton(operationItemListViewManager, 0LL);
  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    goto LABEL_18;
  FollowerSelectItemListViewManager__SetClassBoardInfo(operationItemListViewManager, 0LL);
  SceneRootComponent__beginStartUp_17470260((SceneRootComponent_o *)this, 0LL);
  if ( this->fields.isForceFadeOut )
  {
    this->fields.isForceFadeOut = 0;
    operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !operationItemListViewManager )
      goto LABEL_18;
    CommonUI__maskFadeInit((CommonUI_o *)operationItemListViewManager, 0LL);
    operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !operationItemListViewManager )
      goto LABEL_18;
    CommonUI__maskFadeout((CommonUI_o *)operationItemListViewManager, 1, 0.0, 0LL, 0LL);
    FollowerRootComponent__StartBattleSetupMenu(this, v4);
  }
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !operationItemListViewManager )
LABEL_18:
    sub_B52A5C(operationItemListViewManager, method);
  if ( PartyOrganizationUtility__ExistsTemporaryPartyInfo(
         (PartyOrganizationUtility_o *)operationItemListViewManager,
         0LL) )
  {
    operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( operationItemListViewManager )
    {
      CommonUI__maskFadeInit((CommonUI_o *)operationItemListViewManager, 0LL);
      operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( operationItemListViewManager )
      {
        CommonUI__maskFadeout((CommonUI_o *)operationItemListViewManager, 1, 0.0, 0LL, 0LL);
        this->fields.state = 0;
        FollowerRootComponent__Init(this, v5);
        return;
      }
    }
    goto LABEL_18;
  }
}


void __fastcall FollowerRootComponent__EndOpenTutorialArrow(FollowerRootComponent_o *this, const MethodInfo *method)
{
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_42AEA35 & 1) == 0 )
  {
    sub_B52984(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    sub_B52984(&Method_FollowerRootComponent_OnSelectFollowerItem__);
    byte_42AEA35 = 1;
  }
  this->fields.state = 3;
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v4 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_B52A54(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    Method_FollowerRootComponent_OnSelectFollowerItem__,
    0LL);
  if ( !operationItemListViewManager )
    sub_B52A5C(v5, v6);
  FollowerSelectItemListViewManager__SetMode(operationItemListViewManager, 4, v4, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerRootComponent__EndRefreshConfirm(
        FollowerRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  FollowerRootComponent_o *v4; // x19
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  NetworkManager_ResultCallbackFunc_o *v6; // x20
  FollowerListRequest_o *v7; // x20
  const MethodInfo *v8; // x4
  struct BattleSetupInfo_o *v9; // x8
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v11; // x21

  v4 = this;
  if ( (byte_42AEA2D & 1) == 0 )
  {
    sub_B52984(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    sub_B52984(&Method_FollowerRootComponent_CallbackRefresh__);
    sub_B52984(&Method_FollowerRootComponent_OnSelectFollowerItem__);
    sub_B52984(&Method_NetworkManager_getRequest_FollowerListRequest___);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_B52984(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    this = (FollowerRootComponent_o *)sub_B52984(&SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    byte_42AEA2D = 1;
  }
  if ( isDecide )
  {
    battleSetupInfo = v4->fields.battleSetupInfo;
    if ( !battleSetupInfo )
      goto LABEL_22;
    if ( battleSetupInfo->fields.isChildFollower )
    {
      this = (FollowerRootComponent_o *)v4->fields.titleInfo;
      if ( !this )
        goto LABEL_22;
      TitleInfoControl__setBackBtnEnable((TitleInfoControl_o *)this, 0, 0LL);
      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
      }
      this = (FollowerRootComponent_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !this )
        goto LABEL_22;
      LOBYTE(this->fields.operationItemListViewManager) = 1;
    }
    v6 = (NetworkManager_ResultCallbackFunc_o *)sub_B52A54(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v6,
      (Il2CppObject *)v4,
      Method_FollowerRootComponent_CallbackRefresh__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    this = (FollowerRootComponent_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                        v6,
                                        (const MethodInfo_1F705CC *)Method_NetworkManager_getRequest_FollowerListRequest___);
    if ( v4->fields.battleSetupInfo )
    {
      v7 = (FollowerListRequest_o *)this;
      this = (FollowerRootComponent_o *)BattleSetupInfo__TargetQuestId(v4->fields.battleSetupInfo, 0LL);
      v9 = v4->fields.battleSetupInfo;
      if ( v9 )
      {
        if ( v7 )
        {
          FollowerListRequest__beginRequest(v7, 1, (int32_t)this, v9->fields.questPhase, v8);
          return;
        }
      }
    }
LABEL_22:
    sub_B52A5C(this, isDecide);
  }
  operationItemListViewManager = v4->fields.operationItemListViewManager;
  v11 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_B52A54(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v11,
    (Il2CppObject *)v4,
    Method_FollowerRootComponent_OnSelectFollowerItem__,
    0LL);
  if ( !operationItemListViewManager )
    goto LABEL_22;
  FollowerSelectItemListViewManager__SetMode(operationItemListViewManager, 2, v11, 0LL);
  this = (FollowerRootComponent_o *)v4->fields.commonConfirmDialog;
  if ( !this )
    goto LABEL_22;
  CommonConfirmDialog__Close((CommonConfirmDialog_o *)this, 0LL);
}


void __fastcall FollowerRootComponent__EndRefreshRest(FollowerRootComponent_o *this, const MethodInfo *method)
{
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_42AEA2F & 1) == 0 )
  {
    sub_B52984(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    sub_B52984(&Method_FollowerRootComponent_OnSelectFollowerItem__);
    byte_42AEA2F = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v4 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_B52A54(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    Method_FollowerRootComponent_OnSelectFollowerItem__,
    0LL);
  if ( !operationItemListViewManager )
    sub_B52A5C(v5, v6);
  FollowerSelectItemListViewManager__SetMode(operationItemListViewManager, 2, v4, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerRootComponent__EndShowServant(
        FollowerRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ListViewManager_o *operationItemListViewManager; // x0
  CommonUI_o *Instance; // x20
  System_Action_o *v6; // x21

  if ( (byte_42AEA22 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_FollowerRootComponent_EndCloseShowServant__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42AEA22 = 1;
  }
  operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager
    || (ListViewManager__SetScrollView(
          operationItemListViewManager,
          this->fields.openScroll,
          this->fields.openOffset,
          0LL),
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v6 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo),
        System_Action___ctor(v6, (Il2CppObject *)this, Method_FollowerRootComponent_EndCloseShowServant__, 0LL),
        !Instance) )
  {
    sub_B52A5C(operationItemListViewManager, isDecide);
  }
  CommonUI__CloseServantStatusDialog(Instance, v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerRootComponent__EndShowServantEquip(
        FollowerRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ListViewManager_o *operationItemListViewManager; // x0
  CommonUI_o *Instance; // x20
  System_Action_o *v6; // x21

  if ( (byte_42AEA25 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_FollowerRootComponent_EndCloseShowServantEquip__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42AEA25 = 1;
  }
  operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager
    || (ListViewManager__SetScrollView(
          operationItemListViewManager,
          this->fields.openScroll,
          this->fields.openOffset,
          0LL),
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v6 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo),
        System_Action___ctor(v6, (Il2CppObject *)this, Method_FollowerRootComponent_EndCloseShowServantEquip__, 0LL),
        !Instance) )
  {
    sub_B52A5C(operationItemListViewManager, isDecide);
  }
  CommonUI__CloseServantEquipStatusDialog(Instance, v6, 0LL);
}


void __fastcall FollowerRootComponent__EndTutorialFollowerCommonGuide(
        FollowerRootComponent_o *this,
        const MethodInfo *method)
{
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_42AEA36 & 1) == 0 )
  {
    sub_B52984(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    sub_B52984(&Method_FollowerRootComponent_OnSelectFollowerItem__);
    byte_42AEA36 = 1;
  }
  this->fields.state = 3;
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v4 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_B52A54(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    Method_FollowerRootComponent_OnSelectFollowerItem__,
    0LL);
  if ( !operationItemListViewManager )
    sub_B52A5C(v5, v6);
  FollowerSelectItemListViewManager__SetMode(operationItemListViewManager, 2, v4, 0LL);
}


void __fastcall FollowerRootComponent__EndTutorialFollowerGuideNotification1(
        FollowerRootComponent_o *this,
        const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v5; // x21

  if ( (byte_42AEA33 & 1) == 0 )
  {
    sub_B52984(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    sub_B52984(&Method_FollowerRootComponent_OnSelectFollowerItem__);
    byte_42AEA33 = 1;
  }
  titleInfo = this->fields.titleInfo;
  this->fields.state = 3;
  if ( !titleInfo
    || (TitleInfoControl__setBackBtnEnable(titleInfo, 0, 0LL),
        operationItemListViewManager = this->fields.operationItemListViewManager,
        v5 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_B52A54(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo),
        FollowerSelectItemListViewManager_CallbackFunc___ctor(
          v5,
          (Il2CppObject *)this,
          Method_FollowerRootComponent_OnSelectFollowerItem__,
          0LL),
        !operationItemListViewManager) )
  {
    sub_B52A5C(titleInfo, method);
  }
  FollowerSelectItemListViewManager__SetMode(operationItemListViewManager, 2, v5, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerRootComponent__EndTutorialFollowerGuideNotification2(
        FollowerRootComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *tutorialMaskBase2; // x0
  float v4; // s4
  float v5; // s5
  float v6; // s6
  float v7; // s7
  int v8; // s0
  float v12; // s8
  float x; // s0
  float v14; // s4
  WebViewManager_o *Instance; // x0
  Il2CppMethodPointer methodPointer; // kr00_8
  void *invoker_method; // kr08_8
  CommonUI_o *v18; // x20
  System_Action_o *v19; // x21
  MethodInfo v20; // [xsp+0h] [xbp-50h] BYREF
  UnityEngine_Vector2_o v21; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v23; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v24; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_42AEA34 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&FSUtility_TypeInfo);
    sub_B52984(&Method_FollowerRootComponent_EndOpenTutorialArrow__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42AEA34 = 1;
  }
  v20.methodPointer = 0LL;
  v20.invoker_method = 0LL;
  tutorialMaskBase2 = this->fields.tutorialMaskBase2;
  if ( !tutorialMaskBase2 )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(tutorialMaskBase2, 1, 0LL);
  v22.fields.m_XMin = -500.0;
  v22.fields.m_Width = 1000.0;
  v22.fields.m_Height = 150.0;
  v22.fields.m_YMin = -14.0;
  UnityEngine_Rect___ctor(v22, v4, v5, v6, v7, &v20);
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  if ( FSUtility__IsUnderVista(0LL) )
  {
    v12 = -20.0;
  }
  else
  {
    x = UnityEngine_Rect__get_x(*(UnityEngine_Rect_o *)&v8, &v20);
    v23.fields.m_YMin = 8.0;
    v23.fields.m_XMin = x + 8.0;
    UnityEngine_Rect__set_x(v23, v14, &v20);
    v12 = -12.0;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  methodPointer = v20.methodPointer;
  invoker_method = v20.invoker_method;
  v18 = (CommonUI_o *)Instance;
  v19 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v19, (Il2CppObject *)this, Method_FollowerRootComponent_EndOpenTutorialArrow__, 0LL);
  if ( !v18 )
LABEL_12:
    sub_B52A5C(tutorialMaskBase2, method);
  v21.fields.y = 100.0;
  v21.fields.x = v12;
  *(_QWORD *)&v24.fields.m_XMin = methodPointer;
  *(_QWORD *)&v24.fields.m_Width = invoker_method;
  CommonUI__OpenTutorialArrowMark(v18, v21, 0.0, v24, v19, 0LL);
}


BattleSetupInfo_o *__fastcall FollowerRootComponent__GetBattleSetupInfo(
        FollowerRootComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.battleSetupInfo;
}


void __fastcall FollowerRootComponent__Init(FollowerRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *operationItemListViewManager; // x0
  FollowerSelectItemListViewManager_o *v4; // x20
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  PartyOrganizationUtility_c *v6; // x0
  CommonUI_o *Instance; // x20
  System_String_o *v8; // x21
  FollowerRootComponent___c_c *v9; // x8
  struct FollowerRootComponent___c_StaticFields *static_fields; // x9
  System_Action_o *_9__47_0; // x23
  System_String_o *v12; // x22
  Il2CppObject *v13; // x24
  struct FollowerRootComponent___c_StaticFields *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  FollowerSelectItemListViewManager_o *v21; // x20
  System_Action_o *v22; // x21

  if ( (byte_42AEA1F & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_FollowerRootComponent_OnMoveEnd__);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&PartyOrganizationUtility_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_B52984(&SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    sub_B52984(&Method_FollowerRootComponent___c__Init_b__47_0__);
    sub_B52984(&FollowerRootComponent___c_TypeInfo);
    sub_B52984(&StringLiteral_8782/*"MENU_SELECT_ITEM"*/);
    sub_B52984(&StringLiteral_10414/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_EXPIRED"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42AEA1F = 1;
  }
  if ( !this->fields.state )
  {
    operationItemListViewManager = (UnityEngine_Component_o *)this->fields.operationItemListViewManager;
    if ( !operationItemListViewManager )
      goto LABEL_41;
    operationItemListViewManager = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                operationItemListViewManager,
                                                                0LL);
    if ( !operationItemListViewManager )
      goto LABEL_41;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)operationItemListViewManager, 1, 0LL);
    operationItemListViewManager = (UnityEngine_Component_o *)this->fields.battleSetupInfo;
    if ( !operationItemListViewManager )
      goto LABEL_41;
    v4 = this->fields.operationItemListViewManager;
    operationItemListViewManager = (UnityEngine_Component_o *)BattleSetupInfo__TargetQuestId(
                                                                (BattleSetupInfo_o *)operationItemListViewManager,
                                                                0LL);
    battleSetupInfo = this->fields.battleSetupInfo;
    if ( !battleSetupInfo )
      goto LABEL_41;
    if ( !v4 )
      goto LABEL_41;
    FollowerSelectItemListViewManager__CreateList(
      v4,
      (int32_t)operationItemListViewManager,
      battleSetupInfo->fields.questPhase,
      this->fields.friendPointUpVal,
      this->fields.friendPointUpMaxVal,
      this->fields.friendPointCampaignEntityList,
      battleSetupInfo->fields.questRestrictionInfo,
      0LL);
    operationItemListViewManager = (UnityEngine_Component_o *)this->fields.operationItemListViewManager;
    if ( !operationItemListViewManager )
      goto LABEL_41;
    if ( ListViewManager__get_ItemSum((ListViewManager_o *)operationItemListViewManager, 0LL) > 0 )
      goto LABEL_13;
    operationItemListViewManager = (UnityEngine_Component_o *)this->fields.operationItemListViewManager;
    if ( !operationItemListViewManager )
      goto LABEL_41;
    if ( FollowerSelectItemListViewManager__GetItemCount(
           (FollowerSelectItemListViewManager_o *)operationItemListViewManager,
           0LL) >= 1 )
    {
LABEL_13:
      operationItemListViewManager = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
      if ( !operationItemListViewManager )
        goto LABEL_41;
      if ( *((_BYTE *)&operationItemListViewManager[5].fields + 4) )
      {
        v6 = PartyOrganizationUtility_TypeInfo;
        if ( (BYTE3(PartyOrganizationUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
          v6 = PartyOrganizationUtility_TypeInfo;
        }
        if ( UnityEngine_PlayerPrefs__GetInt(v6->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0, 0LL) )
        {
          if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
          }
          operationItemListViewManager = (UnityEngine_Component_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( !operationItemListViewManager )
            goto LABEL_41;
          if ( !PartyOrganizationUtility__IsAvailableFriendshipUpItem(
                  (PartyOrganizationUtility_o *)operationItemListViewManager,
                  0LL) )
          {
            Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            operationItemListViewManager = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                                        (System_String_o *)StringLiteral_10414/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_EXPIRED"*/,
                                                                        0LL);
            v8 = (System_String_o *)operationItemListViewManager;
            v9 = FollowerRootComponent___c_TypeInfo;
            if ( (BYTE3(FollowerRootComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !FollowerRootComponent___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(FollowerRootComponent___c_TypeInfo);
              v9 = FollowerRootComponent___c_TypeInfo;
            }
            static_fields = v9->static_fields;
            _9__47_0 = static_fields->__9__47_0;
            v12 = (System_String_o *)StringLiteral_1/*""*/;
            if ( !_9__47_0 )
            {
              if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v9);
                static_fields = FollowerRootComponent___c_TypeInfo->static_fields;
              }
              v13 = (Il2CppObject *)static_fields->__9;
              _9__47_0 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
              System_Action___ctor(_9__47_0, v13, Method_FollowerRootComponent___c__Init_b__47_0__, 0LL);
              v14 = FollowerRootComponent___c_TypeInfo->static_fields;
              v14->__9__47_0 = _9__47_0;
              sub_B52920(
                (BattleServantConfConponent_o *)&v14->__9__47_0,
                (System_Int32_array **)_9__47_0,
                v15,
                v16,
                v17,
                v18,
                v19,
                v20);
            }
            if ( !Instance )
              goto LABEL_41;
            CommonUI__OpenNotificationDialog(Instance, v12, v8, _9__47_0, -1, 0, 0, 0, 0, 0, 0, 0, 0LL, 0LL);
          }
        }
      }
      this->fields.state = 2;
      v21 = this->fields.operationItemListViewManager;
      v22 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
      System_Action___ctor(v22, (Il2CppObject *)this, Method_FollowerRootComponent_OnMoveEnd__, 0LL);
      if ( v21 )
      {
        FollowerSelectItemListViewManager__SetMode_30721132(v21, 1, v22, 0LL);
        return;
      }
LABEL_41:
      sub_B52A5C(operationItemListViewManager, method);
    }
    operationItemListViewManager = (UnityEngine_Component_o *)this->fields.myFSM;
    this->fields.selectItemNum = -1;
    if ( !operationItemListViewManager )
      goto LABEL_41;
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)operationItemListViewManager, (System_String_o *)StringLiteral_8782/*"MENU_SELECT_ITEM"*/, 0LL);
  }
}


void __fastcall FollowerRootComponent__OnClickBack(FollowerRootComponent_o *this, const MethodInfo *method)
{
  void *Instance; // x0
  const MethodInfo *v4; // x1
  SceneRootComponent_o *StackedRootComponent; // x0
  __int64 v6; // x10
  UnityEngine_Component_o *v7; // x20
  FollowerRootComponent_o *v8; // x0
  const MethodInfo *v9; // x1
  UnityEngine_Component_c *klass; // x8
  int v11; // w8
  void *v12; // x19
  unsigned int v13; // w20
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  __int64 *v15; // x8
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0
  TerminalPramsManager_c *v18; // x0
  __int64 *v19; // x8
  System_String_o *v20; // x20
  System_String_o *v21; // x21
  CommonUI_o *v22; // x22
  System_String_o *v23; // x23
  System_String_o *v24; // x24
  CommonConfirmDialog_ClickDelegate_o *v25; // x25
  __int64 v26; // x0

  if ( (byte_42AEA31 & 1) == 0 )
  {
    sub_B52984(&BattleRootComponent_TypeInfo);
    sub_B52984(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_B52984(&Method_UnityEngine_Component_GetComponentsInChildren_Camera___);
    sub_B52984(&Method_FollowerRootComponent_OnClickBack__);
    sub_B52984(&Method_FollowerRootComponent__OnClickBack_b__67_0__);
    sub_B52984(&FollowerRootComponent_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_B52984(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_B52984(&SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    sub_B52984(&SoundManager_TypeInfo);
    sub_B52984(&TerminalPramsManager_TypeInfo);
    sub_B52984(&StringLiteral_6418/*"FOLLOWER_SELECT_BACK_TO_QUEST_NO_AP_CONSUME_AP0"*/);
    sub_B52984(&StringLiteral_3075/*"CLICK_BACK"*/);
    sub_B52984(&StringLiteral_6417/*"FOLLOWER_SELECT_BACK_TO_QUEST_NO_AP_CONSUME"*/);
    sub_B52984(&StringLiteral_6416/*"FOLLOWER_SELECT_BACK_TITLE"*/);
    sub_B52984(&StringLiteral_3297/*"COMMON_CONFIRM_NO"*/);
    sub_B52984(&StringLiteral_3300/*"COMMON_CONFIRM_YES"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    sub_B52984(&StringLiteral_3076/*"CLICK_BACK_BATTLE_SETUP"*/);
    byte_42AEA31 = 1;
  }
  if ( this->fields.state == 3 && !this->fields.tutorialState )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( !Instance )
      goto LABEL_80;
    if ( !*((_BYTE *)Instance + 140) )
      goto LABEL_36;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_80;
    StackedRootComponent = AvalonSceneManager__GetStackedRootComponent((AvalonSceneManager_o *)Instance, 0LL);
    if ( StackedRootComponent
      && (v6 = *(&BattleRootComponent_TypeInfo->_2.bitflags2 + 1),
          *(&StackedRootComponent->klass->_2.bitflags2 + 1) >= (unsigned int)v6) )
    {
      if ( (BattleRootComponent_c *)StackedRootComponent->klass->_2.typeHierarchy[v6 - 1] == BattleRootComponent_TypeInfo )
        v7 = (UnityEngine_Component_o *)StackedRootComponent;
      else
        v7 = 0LL;
    }
    else
    {
      v7 = 0LL;
    }
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v7, 0LL, 0LL) )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(1, 0LL);
      this->fields.state = 4;
      FollowerRootComponent__QuestHintDialogResetTemporarilyId(v8, v9);
      if ( v7 )
      {
        Instance = UnityEngine_Component__get_gameObject(v7, 0LL);
        if ( Instance )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
          klass = v7[3].klass;
          if ( klass )
          {
            Instance = klass[1]._1.parent;
            if ( Instance )
            {
              BattleResultComponent__EndResult((BattleResultComponent_o *)Instance, 0LL);
              Instance = this->fields.myFSM;
              if ( Instance )
              {
                PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3075/*"CLICK_BACK"*/, 0LL);
                Instance = UnityEngine_Component__get_transform(v7, 0LL);
                if ( Instance )
                {
                  Instance = UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                               (UnityEngine_Component_o *)Instance,
                               (const MethodInfo_1A495E0 *)Method_UnityEngine_Component_GetComponentsInChildren_Camera___);
                  if ( Instance )
                  {
                    v11 = *((_DWORD *)Instance + 6);
                    v12 = Instance;
                    if ( v11 < 1 )
                      return;
                    v13 = 0;
                    while ( 1 )
                    {
                      if ( v13 >= v11 )
                      {
                        v26 = sub_B52A88(Instance);
                        sub_B52A28(v26, 0LL);
                      }
                      Instance = (void *)*((_QWORD *)v12 + (int)v13 + 4);
                      if ( !Instance )
                        break;
                      Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
                      if ( !Instance )
                        break;
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
                      v11 = *((_DWORD *)v12 + 6);
                      if ( (int)++v13 >= v11 )
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
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( !Instance )
        goto LABEL_80;
      if ( AvalonSceneManager__IsStackScene((AvalonSceneManager_o *)Instance, 0LL) )
        goto LABEL_84;
      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
      }
      Instance = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_80;
      if ( *((int *)Instance + 12) > 0 )
        goto LABEL_84;
      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
      }
      Instance = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_80;
      if ( *((_BYTE *)Instance + 112) )
      {
LABEL_84:
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
            Instance = this->fields.myFSM;
            if ( !Instance )
              goto LABEL_80;
            v15 = &StringLiteral_3076/*"CLICK_BACK_BATTLE_SETUP"*/;
          }
          else
          {
            FollowerRootComponent__QuestHintDialogResetTemporarilyId((FollowerRootComponent_o *)Instance, v4);
            Instance = this->fields.myFSM;
            if ( !Instance )
              goto LABEL_80;
            v15 = &StringLiteral_3075/*"CLICK_BACK"*/;
          }
          PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v15, 0LL);
          return;
        }
      }
      else
      {
        v16 = Method_FollowerRootComponent_OnClickBack__;
        if ( (*((_BYTE *)Method_FollowerRootComponent_OnClickBack__ + 75) & 2) != 0 )
          v16 = (_QWORD *)sub_B5298C(Method_FollowerRootComponent_OnClickBack__);
        v17 = (System_Reflection_MethodBase_o *)sub_B52968(v16, v16[3]);
        OverwriteAssetSoundName__PlaySystemSe(v17, 1, 0LL);
        v18 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v18 = TerminalPramsManager_TypeInfo;
        }
        if ( v18->static_fields->lastPlayQuestConsumeAp <= 0 )
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v19 = &StringLiteral_6418/*"FOLLOWER_SELECT_BACK_TO_QUEST_NO_AP_CONSUME_AP0"*/;
        }
        else
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v19 = &StringLiteral_6417/*"FOLLOWER_SELECT_BACK_TO_QUEST_NO_AP_CONSUME"*/;
        }
        v20 = LocalizationManager__Get((System_String_o *)*v19, 0LL);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v21 = LocalizationManager__Get((System_String_o *)StringLiteral_6416/*"FOLLOWER_SELECT_BACK_TITLE"*/, 0LL);
        v22 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v23 = LocalizationManager__Get((System_String_o *)StringLiteral_3300/*"COMMON_CONFIRM_YES"*/, 0LL);
        v24 = LocalizationManager__Get((System_String_o *)StringLiteral_3297/*"COMMON_CONFIRM_NO"*/, 0LL);
        v25 = (CommonConfirmDialog_ClickDelegate_o *)sub_B52A54(CommonConfirmDialog_ClickDelegate_TypeInfo);
        CommonConfirmDialog_ClickDelegate___ctor(
          v25,
          (Il2CppObject *)this,
          Method_FollowerRootComponent__OnClickBack_b__67_0__,
          0LL);
        Instance = FollowerRootComponent_TypeInfo;
        if ( (BYTE3(FollowerRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !FollowerRootComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FollowerRootComponent_TypeInfo);
          Instance = FollowerRootComponent_TypeInfo;
        }
        if ( v22 )
        {
          CommonUI__OpenConfirmDecideDlg(
            v22,
            v21,
            v20,
            v23,
            v24,
            v25,
            *(_DWORD *)(*((_QWORD *)Instance + 23) + 16LL),
            (float)*(int *)(*((_QWORD *)Instance + 23) + 20LL),
            (float)*(int *)(*((_QWORD *)Instance + 23) + 24LL),
            0,
            0,
            0,
            240,
            0,
            1,
            0LL);
          return;
        }
      }
    }
LABEL_80:
    sub_B52A5C(Instance, v4);
  }
}


void __fastcall FollowerRootComponent__OnMoveEnd(FollowerRootComponent_o *this, const MethodInfo *method)
{
  int32_t tutorialMode; // w8
  CommonUI_o *Instance; // x20
  System_String_o *v5; // x21
  System_Action_o *v6; // x0
  __int64 *v7; // x8
  BattleSetupInfo_o *battleSetupInfo; // x0
  int32_t eventId; // w20
  struct BattleSetupInfo_o *v10; // x8
  struct BattleSetupInfo_o *v11; // x8
  int32_t v12; // w20
  System_Action_o *v13; // x21
  struct BattleSetupInfo_o *v14; // x8
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v16; // x21
  const MethodInfo *v17; // x1
  System_Action_o *v18; // x22

  if ( (byte_42AEA2B & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    sub_B52984(&Method_FollowerRootComponent_EndTutorialFollowerCommonGuide__);
    sub_B52984(&Method_FollowerRootComponent_EndTutorialFollowerGuideNotification1__);
    sub_B52984(&Method_FollowerRootComponent_EndTutorialFollowerGuideNotification2__);
    sub_B52984(&Method_FollowerRootComponent_OnSelectFollowerItem__);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_B52984(&SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    sub_B52984(&StringLiteral_13607/*"TUTORIAL_MESSAGE_FOLLOWER2"*/);
    sub_B52984(&StringLiteral_13606/*"TUTORIAL_MESSAGE_FOLLOWER1"*/);
    byte_42AEA2B = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( this->fields.tutorialState == 1 )
    {
      tutorialMode = this->fields.tutorialMode;
      *(_QWORD *)&this->fields.tutorialState = 0x200000002LL;
      if ( tutorialMode == 3 )
      {
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v5 = LocalizationManager__Get((System_String_o *)StringLiteral_13607/*"TUTORIAL_MESSAGE_FOLLOWER2"*/, 0LL);
        v6 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
        v7 = &Method_FollowerRootComponent_EndTutorialFollowerGuideNotification2__;
LABEL_30:
        v18 = v6;
        System_Action___ctor(v6, (Il2CppObject *)this, *v7, 0LL);
        if ( Instance )
        {
          CommonUI__OpenTutorialNotificationDialog(Instance, v5, -1, v18, 0LL);
          return;
        }
LABEL_32:
        sub_B52A5C(battleSetupInfo, method);
      }
      if ( tutorialMode == 2 )
      {
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v5 = LocalizationManager__Get((System_String_o *)StringLiteral_13606/*"TUTORIAL_MESSAGE_FOLLOWER1"*/, 0LL);
        v6 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
        v7 = &Method_FollowerRootComponent_EndTutorialFollowerGuideNotification1__;
        goto LABEL_30;
      }
    }
    else
    {
      battleSetupInfo = this->fields.battleSetupInfo;
      if ( !battleSetupInfo )
        goto LABEL_32;
      eventId = battleSetupInfo->fields.eventId;
      battleSetupInfo = (BattleSetupInfo_o *)BattleSetupInfo__TargetQuestId(battleSetupInfo, 0LL);
      v10 = this->fields.battleSetupInfo;
      if ( !v10 )
        goto LABEL_32;
      battleSetupInfo = (BattleSetupInfo_o *)EventTutorialMaster__IsTutorialAvailable(
                                               eventId,
                                               15,
                                               (int32_t)battleSetupInfo,
                                               v10->fields.questPhase,
                                               0,
                                               0,
                                               0LL);
      if ( ((unsigned __int8)battleSetupInfo & 1) != 0 )
      {
        v11 = this->fields.battleSetupInfo;
        this->fields.state = 2;
        if ( v11 )
        {
          v12 = v11->fields.eventId;
          v13 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
          System_Action___ctor(
            v13,
            (Il2CppObject *)this,
            Method_FollowerRootComponent_EndTutorialFollowerCommonGuide__,
            0LL);
          battleSetupInfo = this->fields.battleSetupInfo;
          if ( battleSetupInfo )
          {
            battleSetupInfo = (BattleSetupInfo_o *)BattleSetupInfo__TargetQuestId(battleSetupInfo, 0LL);
            v14 = this->fields.battleSetupInfo;
            if ( v14 )
            {
              EventTutorialMaster__CheckTutorial(
                v12,
                15,
                v13,
                (int32_t)battleSetupInfo,
                v14->fields.questPhase,
                0,
                0,
                0LL);
              return;
            }
          }
        }
        goto LABEL_32;
      }
      this->fields.state = 3;
      operationItemListViewManager = this->fields.operationItemListViewManager;
      v16 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_B52A54(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
      FollowerSelectItemListViewManager_CallbackFunc___ctor(
        v16,
        (Il2CppObject *)this,
        Method_FollowerRootComponent_OnSelectFollowerItem__,
        0LL);
      if ( !operationItemListViewManager )
        goto LABEL_32;
      FollowerSelectItemListViewManager__SetMode(operationItemListViewManager, 2, v16, 0LL);
      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
      }
      battleSetupInfo = (BattleSetupInfo_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !battleSetupInfo )
        goto LABEL_32;
      if ( PartyOrganizationUtility__ExistsTemporaryPartyInfo((PartyOrganizationUtility_o *)battleSetupInfo, 0LL) )
        FollowerRootComponent__StartBattleSetupMenu(this, v17);
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
  void *operationItemListViewManager; // x0
  __int64 v8; // x8
  __int64 v9; // x20
  SkillInfo_o *v10; // x22
  SkillEntity_o *v11; // x20
  System_String_o *v12; // x20
  System_String_o *v13; // x21
  Il2CppObject *v14; // x0
  System_String_o *v15; // x0
  int32_t v16; // w20
  System_String_o *v17; // x1
  System_String_o *v18; // x3
  System_String_o *v19; // x2
  __int64 v20; // x20
  SkillInfo_o *v21; // x23
  SkillEntity_o *Entity; // x21
  _DWORD *v23; // x20
  System_String_o *v24; // x21
  System_String_o *v25; // x22
  Il2CppObject *v26; // x0
  System_String_o *v27; // x0
  System_String_o *v28; // x21
  Il2CppObject *v29; // x0
  System_String_o *v30; // x0
  int32_t tutorialMode; // w21
  System_String_o *v32; // x20
  FollowerListRequest_c *v33; // x0
  CommonConfirmDialog_o *commonConfirmDialog; // x20
  System_String_o *v35; // x21
  System_String_o *v36; // x22
  CommonConfirmDialog_ClickDelegate_o *v37; // x23
  FollowerSelectItemListViewItem_o *v38; // x20
  __int64 v39; // x21
  __int64 v40; // x22
  __int64 v41; // x8
  __int64 v42; // x21
  __int64 v43; // x22
  EquipTargetInfo_o *EquipInfo; // x21
  int32_t v45; // w8
  int32_t v46; // w8
  SoundManager_c *v47; // x0
  _BYTE *v48; // x20
  PartyOrganizationUtility_c *v49; // x0
  int32_t v50; // w8
  __int64 *v51; // x8
  CommonUI_o *Instance; // x20
  System_String_o *v53; // x21
  System_String_o *v54; // x22
  System_Action_o *v55; // x23
  FollowerSelectItemListViewItem_o *v56; // x20
  const MethodInfo *v57; // x2
  _BYTE *v58; // x8
  __int64 v59; // x22
  __int64 v60; // x23
  const MethodInfo *v61; // x3
  int32_t v62; // w2
  FollowerSelectItemListViewManager_o *v63; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v64; // x21
  int32_t v65; // w1
  CommonUI_o *v66; // x20
  System_String_o *v67; // x21
  FollowerRootComponent___c_c *v68; // x8
  struct FollowerRootComponent___c_StaticFields *static_fields; // x9
  System_Action_o *_9__62_0; // x23
  System_String_o *v71; // x22
  Il2CppObject *v72; // x24
  struct FollowerRootComponent___c_StaticFields *v73; // x0
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  CommonUI_o *v80; // x20
  System_Action_o *v81; // x21
  __int64 v82; // x0
  int v83; // [xsp+30h] [xbp-70h] BYREF
  int32_t lv; // [xsp+34h] [xbp-6Ch] BYREF
  System_String_o *detail; // [xsp+38h] [xbp-68h] BYREF
  System_String_o *name; // [xsp+40h] [xbp-60h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+48h] [xbp-58h] BYREF
  System_String_o *v88; // [xsp+50h] [xbp-50h] BYREF
  System_String_o *v89; // [xsp+58h] [xbp-48h] BYREF
  SkillInfo_array *v90; // [xsp+68h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v91; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v92; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v93; // 0:x0.16

  if ( (byte_42AEA2C & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    sub_B52984(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_B52984(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_B52984(&Method_DataManager_GetMaster_SkillMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_B52984(&FollowerListRequest_TypeInfo);
    sub_B52984(&Method_FollowerRootComponent_EndCloseTutorialArrow__);
    sub_B52984(&Method_FollowerRootComponent_EndRefreshConfirm__);
    sub_B52984(&Method_FollowerRootComponent_EndRefreshRest__);
    sub_B52984(&Method_FollowerRootComponent_OnSelectFollowerItem__);
    sub_B52984(&FollowerRootComponent_TypeInfo);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&PartyOrganizationUtility_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_B52984(&SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    sub_B52984(&SoundManager_TypeInfo);
    sub_B52984(&Method_FollowerRootComponent___c__OnSelectFollowerItem_b__62_0__);
    sub_B52984(&FollowerRootComponent___c_TypeInfo);
    sub_B52984(&StringLiteral_6441/*"FOLLOWER_SELECT_REFRESH_TITLE"*/);
    sub_B52984(&StringLiteral_8782/*"MENU_SELECT_ITEM"*/);
    sub_B52984(&StringLiteral_8791/*"MENU_SHOW_SUPPORT"*/);
    sub_B52984(&StringLiteral_6438/*"FOLLOWER_SELECT_REFRESH_MESSAGE"*/);
    sub_B52984(&StringLiteral_81/*" "*/);
    sub_B52984(&StringLiteral_6439/*"FOLLOWER_SELECT_REFRESH_REST_MESSAGE"*/);
    sub_B52984(&StringLiteral_10414/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_EXPIRED"*/);
    sub_B52984(&StringLiteral_8682/*"MASTER_EQSKILL_LV_TXT"*/);
    sub_B52984(&StringLiteral_2550/*"BATTLE_SKILLCHARGETURN"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    sub_B52984(&StringLiteral_6440/*"FOLLOWER_SELECT_REFRESH_REST_TITLE"*/);
    byte_42AEA2C = 1;
  }
  v90 = 0LL;
  v89 = 0LL;
  skillInfoList = 0LL;
  v88 = 0LL;
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
          goto LABEL_202;
        operationItemListViewManager = FollowerSelectItemListViewManager__GetItem(
                                         (FollowerSelectItemListViewManager_o *)operationItemListViewManager,
                                         n,
                                         0LL);
        if ( !operationItemListViewManager )
          goto LABEL_202;
        v56 = (FollowerSelectItemListViewItem_o *)operationItemListViewManager;
        if ( *((_BYTE *)operationItemListViewManager + 168)
          || FollowerSelectItemListViewItem__get_SvtId(
               (FollowerSelectItemListViewItem_o *)operationItemListViewManager,
               0LL) <= 0 )
        {
          goto LABEL_161;
        }
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(0, 0LL);
        FollowerRootComponent__SelectShowServant(this, v56, v57);
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
        operationItemListViewManager = this->fields.operationItemListViewManager;
        if ( !operationItemListViewManager )
          goto LABEL_202;
        operationItemListViewManager = FollowerSelectItemListViewManager__GetItem(
                                         (FollowerSelectItemListViewManager_o *)operationItemListViewManager,
                                         this->fields.selectItemNum,
                                         0LL);
        v20 = kind == 3 ? 1LL : 2LL * (kind == 4);
        if ( !operationItemListViewManager )
          goto LABEL_202;
        operationItemListViewManager = (void *)FollowerSelectItemListViewItem__GetSkillInfo(
                                                 (FollowerSelectItemListViewItem_o *)operationItemListViewManager,
                                                 &v90,
                                                 0LL);
        if ( !v90 )
          goto LABEL_202;
        if ( (unsigned int)v20 >= v90->max_length )
          goto LABEL_203;
        v21 = v90->m_Items[v20];
        if ( !v21 || v21->fields.id < 1 || v21->fields.lv < 1 )
          goto LABEL_165;
        operationItemListViewManager = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !operationItemListViewManager )
          goto LABEL_202;
        operationItemListViewManager = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)operationItemListViewManager,
                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_SkillMaster___);
        if ( !operationItemListViewManager )
          goto LABEL_202;
        Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)operationItemListViewManager,
                                    v21->fields.id,
                                    (const MethodInfo_23E22D8 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        operationItemListViewManager = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !operationItemListViewManager )
          goto LABEL_202;
        operationItemListViewManager = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)operationItemListViewManager,
                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_SkillLvMaster___);
        if ( !operationItemListViewManager )
          goto LABEL_202;
        operationItemListViewManager = SkillLvMaster__GetEntity(
                                         (SkillLvMaster_o *)operationItemListViewManager,
                                         v21->fields.id,
                                         v21->fields.lv,
                                         0LL);
        if ( !Entity )
          goto LABEL_202;
        v23 = operationItemListViewManager;
        SkillEntity__getSkillMessageInfo(Entity, &v89, &v88, v21->fields.lv, 0LL);
        v24 = v89;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v25 = LocalizationManager__Get((System_String_o *)StringLiteral_8682/*"MASTER_EQSKILL_LV_TXT"*/, 0LL);
        lv = v21->fields.lv;
        v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv);
        v27 = System_String__Format(v25, v26, 0LL);
        v89 = System_String__Concat_44570600(v24, (System_String_o *)StringLiteral_81/*" "*/, v27, 0LL);
        operationItemListViewManager = LocalizationManager__Get((System_String_o *)StringLiteral_2550/*"BATTLE_SKILLCHARGETURN"*/, 0LL);
        if ( !v23 )
          goto LABEL_202;
        v28 = (System_String_o *)operationItemListViewManager;
        v83 = v23[6];
        v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v83);
        v30 = System_String__Format(v28, v29, 0LL);
        tutorialMode = this->fields.tutorialMode;
        v32 = v30;
        operationItemListViewManager = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !operationItemListViewManager )
          goto LABEL_202;
        v17 = v89;
        v18 = v88;
        if ( tutorialMode == 3 )
        {
          v19 = v32;
LABEL_55:
          CommonUI__OpenDetailLongInfoDialogOnFade((CommonUI_o *)operationItemListViewManager, v17, v19, v18, 0LL);
        }
        else
        {
          v19 = v32;
LABEL_150:
          CommonUI__OpenDetailLongInfoDialog((CommonUI_o *)operationItemListViewManager, v17, v19, v18, 1, 0, 0LL);
        }
        goto LABEL_165;
      case 5:
        if ( !this->fields.tutorialState )
        {
          operationItemListViewManager = this->fields.operationItemListViewManager;
          if ( !operationItemListViewManager )
            goto LABEL_202;
          operationItemListViewManager = FollowerSelectItemListViewManager__GetItem(
                                           (FollowerSelectItemListViewManager_o *)operationItemListViewManager,
                                           n,
                                           0LL);
          if ( !operationItemListViewManager )
            goto LABEL_202;
          v58 = operationItemListViewManager;
          v47 = SoundManager_TypeInfo;
          if ( !v58[168] )
          {
            if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) == 0 )
              goto LABEL_178;
LABEL_176:
            if ( !v47->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(v47);
LABEL_178:
            SoundManager__playSystemSe(0, 0LL);
            operationItemListViewManager = this->fields.myFSM;
            if ( operationItemListViewManager )
            {
              v51 = &StringLiteral_8791/*"MENU_SHOW_SUPPORT"*/;
              goto LABEL_180;
            }
            goto LABEL_202;
          }
          if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 )
          {
LABEL_162:
            if ( !v47->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(v47);
          }
LABEL_164:
          SoundManager__playSystemSe(2, 0LL);
          goto LABEL_165;
        }
        v46 = this->fields.tutorialMode;
        if ( v46 == 3 )
        {
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(2, 0LL);
LABEL_173:
          v63 = this->fields.operationItemListViewManager;
          v64 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_B52A54(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
          FollowerSelectItemListViewManager_CallbackFunc___ctor(
            v64,
            (Il2CppObject *)this,
            Method_FollowerRootComponent_OnSelectFollowerItem__,
            0LL);
          if ( !v63 )
            goto LABEL_202;
          v65 = 4;
          goto LABEL_167;
        }
        if ( v46 == 2 )
        {
          v47 = SoundManager_TypeInfo;
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
            goto LABEL_178;
          goto LABEL_176;
        }
        return;
      case 6:
        if ( !this->fields.tutorialState )
        {
          operationItemListViewManager = this->fields.operationItemListViewManager;
          if ( !operationItemListViewManager )
            goto LABEL_202;
          operationItemListViewManager = FollowerSelectItemListViewManager__GetItem(
                                           (FollowerSelectItemListViewManager_o *)operationItemListViewManager,
                                           n,
                                           0LL);
          if ( !operationItemListViewManager )
            goto LABEL_202;
          v38 = (FollowerSelectItemListViewItem_o *)operationItemListViewManager;
          if ( !FollowerSelectItemListViewItem__get_ServantLeader(
                  (FollowerSelectItemListViewItem_o *)operationItemListViewManager,
                  0LL) )
            goto LABEL_151;
          operationItemListViewManager = FollowerSelectItemListViewItem__get_ServantLeader(v38, 0LL);
          if ( !operationItemListViewManager )
            goto LABEL_202;
          v40 = *((_QWORD *)operationItemListViewManager + 6);
          v39 = *((_QWORD *)operationItemListViewManager + 7);
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v91.fields.currentCryptoKey = v40;
          *(_QWORD *)&v91.fields.fakeValue = v39;
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v91, 0LL) >= 1 )
          {
            operationItemListViewManager = FollowerSelectItemListViewItem__get_ServantLeader(v38, 0LL);
            if ( !operationItemListViewManager )
              goto LABEL_202;
            if ( !*((_QWORD *)operationItemListViewManager + 18) )
              goto LABEL_161;
            operationItemListViewManager = FollowerSelectItemListViewItem__get_ServantLeader(v38, 0LL);
            if ( !operationItemListViewManager )
              goto LABEL_202;
            v41 = *((_QWORD *)operationItemListViewManager + 18);
            if ( !v41 )
              goto LABEL_202;
            v43 = *(_QWORD *)(v41 + 56);
            v42 = *(_QWORD *)(v41 + 64);
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v92.fields.currentCryptoKey = v43;
            *(_QWORD *)&v92.fields.fakeValue = v42;
            if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v92, 0LL) < 1 )
              goto LABEL_161;
            operationItemListViewManager = FollowerSelectItemListViewItem__get_ServantLeader(v38, 0LL);
            if ( !operationItemListViewManager )
              goto LABEL_202;
            if ( ServantLeaderInfo__IsHideEquip((ServantLeaderInfo_o *)operationItemListViewManager, 0LL) )
              goto LABEL_161;
            operationItemListViewManager = FollowerSelectItemListViewItem__get_ServantLeader(v38, 0LL);
            if ( !operationItemListViewManager )
              goto LABEL_202;
            EquipInfo = (EquipTargetInfo_o *)*((_QWORD *)operationItemListViewManager + 18);
            if ( !EquipInfo )
            {
LABEL_161:
              v47 = SoundManager_TypeInfo;
              if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
                goto LABEL_164;
              goto LABEL_162;
            }
          }
          else
          {
LABEL_151:
            EquipInfo = FollowerSelectItemListViewItem__get_EquipInfo(v38, 0LL);
            if ( !EquipInfo )
              goto LABEL_161;
          }
          v60 = *(_QWORD *)&EquipInfo->fields.svtId.fields.currentCryptoKey;
          v59 = *(_QWORD *)&EquipInfo->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v93.fields.currentCryptoKey = v60;
          *(_QWORD *)&v93.fields.fakeValue = v59;
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v93, 0LL) >= 1 )
          {
            if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !SoundManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
            }
            SoundManager__playSystemSe(0, 0LL);
            if ( FollowerSelectItemListViewItem__get_FollowerType(v38, 0LL) == 1 )
            {
              v62 = 13;
            }
            else if ( FollowerSelectItemListViewItem__get_FollowerType(v38, 0LL) == 5 )
            {
              v62 = 14;
            }
            else if ( v38->fields.isNpc )
            {
              v62 = 19;
            }
            else
            {
              v62 = 16;
            }
            FollowerRootComponent__SelectShowServantEquip(this, EquipInfo, v62, v61);
            return;
          }
          goto LABEL_161;
        }
LABEL_94:
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(2, 0LL);
        v45 = this->fields.tutorialMode;
        if ( v45 == 3 )
          goto LABEL_173;
        if ( v45 == 2 )
          goto LABEL_165;
        return;
      case 7:
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(0, 0LL);
        v33 = FollowerListRequest_TypeInfo;
        if ( (BYTE3(FollowerListRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !FollowerListRequest_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FollowerListRequest_TypeInfo);
        }
        if ( FollowerListRequest__checkRefreshRate((const MethodInfo *)v33) )
        {
          commonConfirmDialog = this->fields.commonConfirmDialog;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v35 = LocalizationManager__Get((System_String_o *)StringLiteral_6441/*"FOLLOWER_SELECT_REFRESH_TITLE"*/, 0LL);
          v36 = LocalizationManager__Get((System_String_o *)StringLiteral_6438/*"FOLLOWER_SELECT_REFRESH_MESSAGE"*/, 0LL);
          v37 = (CommonConfirmDialog_ClickDelegate_o *)sub_B52A54(CommonConfirmDialog_ClickDelegate_TypeInfo);
          CommonConfirmDialog_ClickDelegate___ctor(
            v37,
            (Il2CppObject *)this,
            Method_FollowerRootComponent_EndRefreshConfirm__,
            0LL);
          operationItemListViewManager = FollowerRootComponent_TypeInfo;
          if ( (BYTE3(FollowerRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !FollowerRootComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(FollowerRootComponent_TypeInfo);
          }
          if ( commonConfirmDialog )
          {
            CommonConfirmDialog__Open_18076100(
              commonConfirmDialog,
              v35,
              v36,
              1,
              v37,
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
          Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v53 = LocalizationManager__Get((System_String_o *)StringLiteral_6440/*"FOLLOWER_SELECT_REFRESH_REST_TITLE"*/, 0LL);
          v54 = LocalizationManager__Get((System_String_o *)StringLiteral_6439/*"FOLLOWER_SELECT_REFRESH_REST_MESSAGE"*/, 0LL);
          v55 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
          System_Action___ctor(v55, (Il2CppObject *)this, Method_FollowerRootComponent_EndRefreshRest__, 0LL);
          if ( Instance )
          {
            CommonUI__OpenNotificationDialog(Instance, v53, v54, v55, -1, 0, 0, 0, 0, 0, 1, 0, 0LL, 0LL);
            return;
          }
        }
        goto LABEL_202;
      case 8:
      case 9:
      case 10:
      case 11:
      case 12:
        operationItemListViewManager = this->fields.operationItemListViewManager;
        if ( !operationItemListViewManager )
          goto LABEL_202;
        operationItemListViewManager = FollowerSelectItemListViewManager__GetItem(
                                         (FollowerSelectItemListViewManager_o *)operationItemListViewManager,
                                         n,
                                         0LL);
        v8 = (unsigned int)(kind - 9);
        v9 = (unsigned int)v8 < 4 ? v8 + 1 : 0LL;
        if ( !operationItemListViewManager )
          goto LABEL_202;
        operationItemListViewManager = (void *)FollowerSelectItemListViewItem__GetAppendSkillInfo(
                                                 (FollowerSelectItemListViewItem_o *)operationItemListViewManager,
                                                 &skillInfoList,
                                                 *((_BYTE *)operationItemListViewManager + 168),
                                                 0LL);
        if ( !skillInfoList )
          goto LABEL_202;
        if ( (unsigned int)v9 >= skillInfoList->max_length )
        {
LABEL_203:
          v82 = sub_B52A88(operationItemListViewManager);
          sub_B52A28(v82, 0LL);
        }
        v10 = skillInfoList->m_Items[v9];
        if ( !v10 || v10->fields.id < 1 || v10->fields.lv < 1 )
          goto LABEL_161;
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
        operationItemListViewManager = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_SkillMaster___);
        if ( !operationItemListViewManager )
          goto LABEL_202;
        v11 = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                 (DataMasterBase_WarMaster__WarEntity__int__o *)operationItemListViewManager,
                                 v10->fields.id,
                                 (const MethodInfo_23E22D8 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        operationItemListViewManager = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_SkillLvMaster___);
        if ( !operationItemListViewManager )
          goto LABEL_202;
        operationItemListViewManager = SkillLvMaster__GetEntity(
                                         (SkillLvMaster_o *)operationItemListViewManager,
                                         v10->fields.id,
                                         v10->fields.lv,
                                         0LL);
        if ( !v11 )
          goto LABEL_202;
        SkillEntity__getSkillMessageInfo(v11, &name, &detail, v10->fields.lv, 0LL);
        v12 = name;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v13 = LocalizationManager__Get((System_String_o *)StringLiteral_8682/*"MASTER_EQSKILL_LV_TXT"*/, 0LL);
        lv = v10->fields.lv;
        v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv);
        v15 = System_String__Format(v13, v14, 0LL);
        name = System_String__Concat_44570600(v12, (System_String_o *)StringLiteral_81/*" "*/, v15, 0LL);
        v16 = this->fields.tutorialMode;
        operationItemListViewManager = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !operationItemListViewManager )
          goto LABEL_202;
        v18 = detail;
        v17 = name;
        v19 = (System_String_o *)StringLiteral_1/*""*/;
        if ( v16 != 3 )
          goto LABEL_150;
        goto LABEL_55;
      default:
        operationItemListViewManager = this->fields.operationItemListViewManager;
        if ( !operationItemListViewManager )
          goto LABEL_202;
        operationItemListViewManager = FollowerSelectItemListViewManager__GetItem(
                                         (FollowerSelectItemListViewManager_o *)operationItemListViewManager,
                                         n,
                                         0LL);
        if ( !operationItemListViewManager )
          goto LABEL_202;
        v48 = operationItemListViewManager;
        if ( FollowerSelectItemListViewItem__get_SvtId(
               (FollowerSelectItemListViewItem_o *)operationItemListViewManager,
               0LL) < 1
          || v48[203]
          || v48[254] )
        {
          goto LABEL_161;
        }
        operationItemListViewManager = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
        if ( !operationItemListViewManager )
          goto LABEL_202;
        if ( !*((_BYTE *)operationItemListViewManager + 140) )
          goto LABEL_121;
        v49 = PartyOrganizationUtility_TypeInfo;
        if ( (BYTE3(PartyOrganizationUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
          v49 = PartyOrganizationUtility_TypeInfo;
        }
        if ( !UnityEngine_PlayerPrefs__GetInt(v49->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0, 0LL) )
          goto LABEL_121;
        if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
        }
        operationItemListViewManager = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !operationItemListViewManager )
          goto LABEL_202;
        if ( PartyOrganizationUtility__IsAvailableFriendshipUpItem(
               (PartyOrganizationUtility_o *)operationItemListViewManager,
               0LL) )
        {
LABEL_121:
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(0, 0LL);
          if ( !this->fields.tutorialState )
          {
LABEL_129:
            operationItemListViewManager = this->fields.myFSM;
            if ( operationItemListViewManager )
            {
              v51 = &StringLiteral_8782/*"MENU_SELECT_ITEM"*/;
LABEL_180:
              PlayMakerFSM__SendEvent((PlayMakerFSM_o *)operationItemListViewManager, (System_String_o *)*v51, 0LL);
              return;
            }
LABEL_202:
            sub_B52A5C(operationItemListViewManager, *(_QWORD *)&kind);
          }
          v50 = this->fields.tutorialMode;
          if ( v50 == 3 )
          {
            this->fields.state = 4;
            v80 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v81 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
            System_Action___ctor(v81, (Il2CppObject *)this, Method_FollowerRootComponent_EndCloseTutorialArrow__, 0LL);
            if ( !v80 )
              goto LABEL_202;
            CommonUI__CloseTutorialArrowMark(v80, v81, 0LL);
          }
          else if ( v50 == 2 )
          {
            operationItemListViewManager = this->fields.titleInfo;
            if ( !operationItemListViewManager )
              goto LABEL_202;
            TitleInfoControl__setBackBtnEnable((TitleInfoControl_o *)operationItemListViewManager, 1, 0LL);
            goto LABEL_129;
          }
        }
        else
        {
          v66 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          operationItemListViewManager = LocalizationManager__Get((System_String_o *)StringLiteral_10414/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_EXPIRED"*/, 0LL);
          v67 = (System_String_o *)operationItemListViewManager;
          v68 = FollowerRootComponent___c_TypeInfo;
          if ( (BYTE3(FollowerRootComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !FollowerRootComponent___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(FollowerRootComponent___c_TypeInfo);
            v68 = FollowerRootComponent___c_TypeInfo;
          }
          static_fields = v68->static_fields;
          _9__62_0 = static_fields->__9__62_0;
          v71 = (System_String_o *)StringLiteral_1/*""*/;
          if ( !_9__62_0 )
          {
            if ( (BYTE3(v68->vtable._0_Equals.methodPtr) & 4) != 0 && !v68->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v68);
              static_fields = FollowerRootComponent___c_TypeInfo->static_fields;
            }
            v72 = (Il2CppObject *)static_fields->__9;
            _9__62_0 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
            System_Action___ctor(_9__62_0, v72, Method_FollowerRootComponent___c__OnSelectFollowerItem_b__62_0__, 0LL);
            v73 = FollowerRootComponent___c_TypeInfo->static_fields;
            v73->__9__62_0 = _9__62_0;
            sub_B52920(
              (BattleServantConfConponent_o *)&v73->__9__62_0,
              (System_Int32_array **)_9__62_0,
              v74,
              v75,
              v76,
              v77,
              v78,
              v79);
          }
          if ( !v66 )
            goto LABEL_202;
          CommonUI__OpenNotificationDialog(v66, v71, v67, _9__62_0, -1, 0, 0, 0, 0, 0, 0, 0, 0LL, 0LL);
LABEL_165:
          v63 = this->fields.operationItemListViewManager;
          v64 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_B52A54(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
          FollowerSelectItemListViewManager_CallbackFunc___ctor(
            v64,
            (Il2CppObject *)this,
            Method_FollowerRootComponent_OnSelectFollowerItem__,
            0LL);
          if ( !v63 )
            goto LABEL_202;
          v65 = 2;
LABEL_167:
          FollowerSelectItemListViewManager__SetMode(v63, v65, v64, 0LL);
        }
        break;
    }
  }
}


void __fastcall FollowerRootComponent__PlayBGM(FollowerRootComponent_o *this, const MethodInfo *method)
{
  FollowerRootComponent_o *v2; // x19
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  int32_t questId; // w20
  BalanceConfig_c *v5; // x0
  QuestPhaseMaster_o *v6; // x20
  struct BattleSetupInfo_o *v7; // x8
  int32_t FormationBgmId; // w0
  int32_t v9; // w20
  System_String_o *BgmFileName; // x20
  bool IsNonStopEndBgm; // w21
  const MethodInfo *v12; // x2
  struct UnityEngine_GameObject_o *refreshButtonBase; // x8
  System_String_o *BgmName; // x19
  SoundManager_c *v15; // x0
  struct BattleSetupInfo_o *v16; // x8
  const MethodInfo *v17; // x2
  QuestMaster_o *v18; // x20
  struct BattleSetupInfo_o *v19; // x8
  System_String_o *v20; // x0
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  v2 = this;
  if ( (byte_42AEA14 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&BgmManager_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_B52984(&Method_DataManager_GetMaster_BgmMaster___);
    sub_B52984(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_B52984(&SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    sub_B52984(&SoundManager_TypeInfo);
    this = (FollowerRootComponent_o *)sub_B52984(&StringLiteral_1/*""*/);
    byte_42AEA14 = 1;
  }
  entity = 0LL;
  battleSetupInfo = v2->fields.battleSetupInfo;
  if ( !battleSetupInfo )
    goto LABEL_72;
  questId = battleSetupInfo->fields.questId;
  v5 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  if ( questId != v5->static_fields->PrologueQuestId )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (FollowerRootComponent_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( !v2->fields.battleSetupInfo )
      goto LABEL_72;
    v6 = (QuestPhaseMaster_o *)this;
    this = (FollowerRootComponent_o *)BattleSetupInfo__TargetQuestId(v2->fields.battleSetupInfo, 0LL);
    v7 = v2->fields.battleSetupInfo;
    if ( !v7 || !v6 )
      goto LABEL_72;
    if ( QuestPhaseMaster__TryGetEntity(v6, &entity, (int32_t)this, v7->fields.questPhase, 0LL) )
    {
      this = (FollowerRootComponent_o *)entity;
      if ( !entity )
        goto LABEL_72;
      FormationBgmId = QuestPhaseEntity__GetFormationBgmId(entity, 0LL);
      if ( (FormationBgmId & 0x80000000) != 0 )
      {
        BgmFileName = 0LL;
      }
      else
      {
        v9 = FormationBgmId;
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        this = (FollowerRootComponent_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_BgmMaster___);
        if ( !this )
          goto LABEL_72;
        BgmFileName = BgmMaster__GetBgmFileName((BgmMaster_o *)this, v9, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      }
      this = (FollowerRootComponent_o *)entity;
      if ( !entity )
        goto LABEL_72;
      IsNonStopEndBgm = QuestPhaseEntity__IsNonStopEndBgm(entity, 0LL);
    }
    else
    {
      IsNonStopEndBgm = 0;
      BgmFileName = 0LL;
    }
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    this = (FollowerRootComponent_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !this )
      goto LABEL_72;
    this = (FollowerRootComponent_o *)PartyOrganizationUtility__ExistsTemporaryPartyInfo(
                                        (PartyOrganizationUtility_o *)this,
                                        0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !System_String__IsNullOrEmpty(BgmFileName, 0LL) )
        FollowerRootComponent__SetBackupBgmName(v2, IsNonStopEndBgm, v12);
      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
      }
      this = (FollowerRootComponent_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( this )
      {
        refreshButtonBase = this->fields.refreshButtonBase;
        if ( refreshButtonBase )
        {
          BgmName = *(System_String_o **)&refreshButtonBase[1].fields.m_CachedPtr;
          v15 = SoundManager_TypeInfo;
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
          {
LABEL_65:
            v20 = BgmName;
LABEL_70:
            SoundManager__playBgm(v20, 0LL);
            return;
          }
LABEL_63:
          if ( !v15->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v15);
          goto LABEL_65;
        }
      }
      goto LABEL_72;
    }
    v16 = v2->fields.battleSetupInfo;
    if ( !v16 )
      goto LABEL_72;
    if ( !v16->fields.isScriptBeforePartySelect )
      goto LABEL_51;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    if ( !SoundManager__isPlayBgm(0LL, 0LL) )
      goto LABEL_51;
    if ( !System_String__IsNullOrEmpty(BgmFileName, 0LL) )
    {
      if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
      if ( !BgmManager__IsPlayBgm(BgmFileName, 0LL) )
      {
LABEL_51:
        if ( !System_String__IsNullOrEmpty(BgmFileName, 0LL) )
        {
          FollowerRootComponent__SetBackupBgmName(v2, IsNonStopEndBgm, v17);
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          v20 = BgmFileName;
          goto LABEL_70;
        }
        this = (FollowerRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( this )
        {
          this = (FollowerRootComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_QuestMaster___);
          if ( v2->fields.battleSetupInfo )
          {
            v18 = (QuestMaster_o *)this;
            this = (FollowerRootComponent_o *)BattleSetupInfo__TargetQuestId(v2->fields.battleSetupInfo, 0LL);
            if ( v18 )
            {
              this = (FollowerRootComponent_o *)QuestMaster__getQuestEntity(v18, (int32_t)this, 0LL);
              v19 = v2->fields.battleSetupInfo;
              if ( v19 )
              {
                if ( this )
                {
                  BgmName = QuestEntity__GetBgmName((QuestEntity_o *)this, v19->fields.warId, 0LL);
                  if ( System_String__IsNullOrEmpty(BgmName, 0LL) )
                  {
                    if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !BgmManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
                    }
                    BgmName = BgmManager__GetMainBgmName(0LL);
                  }
                  v15 = SoundManager_TypeInfo;
                  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
                    goto LABEL_65;
                  goto LABEL_63;
                }
              }
            }
          }
        }
LABEL_72:
        sub_B52A5C(this, method);
      }
    }
  }
}


void __fastcall FollowerRootComponent__QuestHintDialogResetTemporarilyId(
        FollowerRootComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_42AEA32 & 1) == 0 )
  {
    sub_B52984(&QuestHintDialogOpenManager_TypeInfo);
    byte_42AEA32 = 1;
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

  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager
    || (FollowerSelectItemListViewManager__DestroyList(operationItemListViewManager, 0LL),
        (operationItemListViewManager = this->fields.operationItemListViewManager) == 0LL)
    || (operationItemListViewManager = (FollowerSelectItemListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                                (UnityEngine_Component_o *)operationItemListViewManager,
                                                                                0LL)) == 0LL )
  {
    sub_B52A5C(operationItemListViewManager, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)operationItemListViewManager, 0, 0LL);
  this->fields.state = 0;
}


void __fastcall FollowerRootComponent__RequestFollowerList(FollowerRootComponent_o *this, const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v3; // x20
  FollowerListRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v5; // x1
  FollowerListRequest_o *v6; // x20
  const MethodInfo *v7; // x4
  struct BattleSetupInfo_o *battleSetupInfo; // x8

  if ( (byte_42AEA1D & 1) == 0 )
  {
    sub_B52984(&Method_FollowerRootComponent_CallbackFollowerList__);
    sub_B52984(&Method_NetworkManager_getRequest_FollowerListRequest___);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_B52984(&StringLiteral_11166/*"REQUEST_OK"*/);
    byte_42AEA1D = 1;
  }
  v3 = (NetworkManager_ResultCallbackFunc_o *)sub_B52A54(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v3,
    (Il2CppObject *)this,
    Method_FollowerRootComponent_CallbackFollowerList__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (FollowerListRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                 v3,
                                                                 (const MethodInfo_1F705CC *)Method_NetworkManager_getRequest_FollowerListRequest___);
  if ( !Request_WarBoardWallAttackRequest )
    goto LABEL_13;
  v6 = Request_WarBoardWallAttackRequest;
  if ( (((__int64 (__fastcall *)(FollowerListRequest_o *, Il2CppMethodPointer))Request_WarBoardWallAttackRequest->klass->vtable._7_checkExpirationDate.method)(
          Request_WarBoardWallAttackRequest,
          Request_WarBoardWallAttackRequest->klass->vtable._8_isBackgroundRequest.methodPtr) & 1) != 0 )
  {
    Request_WarBoardWallAttackRequest = (FollowerListRequest_o *)this->fields.myFSM;
    if ( Request_WarBoardWallAttackRequest )
    {
      PlayMakerFSM__SendEvent(
        (PlayMakerFSM_o *)Request_WarBoardWallAttackRequest,
        (System_String_o *)StringLiteral_11166/*"REQUEST_OK"*/,
        0LL);
      return;
    }
LABEL_13:
    sub_B52A5C(Request_WarBoardWallAttackRequest, v5);
  }
  Request_WarBoardWallAttackRequest = (FollowerListRequest_o *)this->fields.battleSetupInfo;
  if ( !Request_WarBoardWallAttackRequest )
    goto LABEL_13;
  Request_WarBoardWallAttackRequest = (FollowerListRequest_o *)BattleSetupInfo__TargetQuestId(
                                                                 (BattleSetupInfo_o *)Request_WarBoardWallAttackRequest,
                                                                 0LL);
  battleSetupInfo = this->fields.battleSetupInfo;
  if ( !battleSetupInfo )
    goto LABEL_13;
  FollowerListRequest__beginRequest(
    v6,
    0,
    (int32_t)Request_WarBoardWallAttackRequest,
    battleSetupInfo->fields.questPhase,
    v7);
}


bool __fastcall FollowerRootComponent__ReturnBattleSetupMenu(FollowerRootComponent_o *this, const MethodInfo *method)
{
  FollowerRootComponent_o *v2; // x20
  struct BattleSetupInfo_o *battleSetupInfo; // x19

  v2 = this;
  if ( (byte_42AEA28 & 1) == 0 )
  {
    this = (FollowerRootComponent_o *)sub_B52984(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_42AEA28 = 1;
  }
  battleSetupInfo = v2->fields.battleSetupInfo;
  v2->fields.state = 5;
  if ( !battleSetupInfo )
    goto LABEL_8;
  if ( battleSetupInfo->fields.isChildFollower )
  {
    battleSetupInfo->fields.followerId = 0LL;
    battleSetupInfo = v2->fields.battleSetupInfo;
  }
  this = (FollowerRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !this )
LABEL_8:
    sub_B52A5C(this, method);
  AvalonSceneManager__pushScene((AvalonSceneManager_o *)this, 40, 1, (Il2CppObject *)battleSetupInfo, 0LL);
  return 1;
}


bool __fastcall FollowerRootComponent__ReturnQuestMenu(FollowerRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *battleSetupInfo; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  System_String_o *backupBgmName; // x22
  AvalonSceneManager_o *Instance; // x0
  __int64 v12; // x1
  TerminalPramsManager_c *v13; // x0

  if ( (byte_42AEA27 & 1) == 0 )
  {
    sub_B52984(&Method_AvalonSceneManager_UnloadScene_PartyOrganizationRootComponent___);
    sub_B52984(&RandomLimitCountManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B52984(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_B52984(&SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    sub_B52984(&SoundManager_TypeInfo);
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AEA27 = 1;
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
  sub_B52920((BattleServantConfConponent_o *)&this->fields.battleSetupInfo, 0LL, v4, v5, v6, v7, v8, v9);
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  Instance = (AvalonSceneManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  if ( LOBYTE(Instance[1].fields.scenestack) )
  {
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    Instance = (AvalonSceneManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_37;
    LOBYTE(Instance[1].fields.scenestack) = 0;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42AC2AB )
    {
      sub_B52984(&TerminalPramsManager_TypeInfo);
      byte_42AC2AB = 1;
    }
    v13 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v13 = TerminalPramsManager_TypeInfo;
    }
    v13->static_fields->_IsAutoResume_k__BackingField = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  if ( AvalonSceneManager__IsStackScene(Instance, 0LL) )
  {
    this->fields.state = 0;
    Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_37;
    AvalonSceneManager__popSceneRefresh(Instance, 1, battleSetupInfo, 0LL);
  }
  else
  {
    Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_37;
    AvalonSceneManager__transitionSceneRefresh(Instance, 34, 1, 0LL, 0, 0LL);
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
LABEL_37:
    sub_B52A5C(Instance, v12);
  AvalonSceneManager__UnloadScene_PartyOrganizationRootComponent_(
    Instance,
    (const MethodInfo_1A408C8 *)Method_AvalonSceneManager_UnloadScene_PartyOrganizationRootComponent___);
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
  int32_t state; // w8
  void *operationItemListViewManager; // x0
  FollowerSelectItemListViewManager_o *v5; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v6; // x21
  FollowerSelectItemListViewManager_o *v7; // x20
  FollowerSelectItemListViewManager_c *v8; // x0
  FollowerSelectItemListViewManager_o *v9; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v10; // x21
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  FollowerQuestInfomationDraw_o *followerQuestInfomationDraw; // x20
  QuestRestrictionInfo_o *questRestrictionInfo; // x21
  const MethodInfo *v14; // x4
  CommonUI_o *v15; // x20

  if ( (byte_42AEA1B & 1) == 0 )
  {
    sub_B52984(&AvalonSceneManager_TypeInfo);
    sub_B52984(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    sub_B52984(&Method_FollowerRootComponent_OnSelectFollowerItem__);
    sub_B52984(&RandomLimitCountManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_B52984(&SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    byte_42AEA1B = 1;
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
      (FollowerSelectItemListViewManager_o *)operationItemListViewManager,
      this->fields.friendPointUpVal,
      this->fields.friendPointUpMaxVal,
      0LL);
    v5 = this->fields.operationItemListViewManager;
    v6 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_B52A54(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    FollowerSelectItemListViewManager_CallbackFunc___ctor(
      v6,
      (Il2CppObject *)this,
      Method_FollowerRootComponent_OnSelectFollowerItem__,
      0LL);
    if ( !v5 )
      goto LABEL_33;
    FollowerSelectItemListViewManager__SetMode(v5, 3, v6, 0LL);
    v7 = this->fields.operationItemListViewManager;
    if ( !v7 )
      goto LABEL_33;
    if ( !byte_42AEA3A )
    {
      sub_B52984(&FollowerSelectItemListViewManager_TypeInfo);
      byte_42AEA3A = 1;
    }
    v8 = FollowerSelectItemListViewManager_TypeInfo;
    if ( (BYTE3(FollowerSelectItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
      v8 = FollowerSelectItemListViewManager_TypeInfo;
    }
    FollowerSelectItemListViewManager__ChangeClass(v7, v8->static_fields->followerClassId, 0LL);
    operationItemListViewManager = this->fields.operationItemListViewManager;
    if ( !operationItemListViewManager )
LABEL_33:
      sub_B52A5C(operationItemListViewManager, method);
    operationItemListViewManager = (void *)FollowerSelectItemListViewManager__GetDisplayItemNum(
                                             (FollowerSelectItemListViewManager_o *)operationItemListViewManager,
                                             0LL);
    if ( (int)operationItemListViewManager >= 3 )
    {
      operationItemListViewManager = this->fields.operationItemListViewManager;
      if ( !operationItemListViewManager )
        goto LABEL_33;
      ListViewManager__JumpItem((ListViewManager_o *)operationItemListViewManager, this->fields.selectItemNum, 0LL);
    }
  }
  else
  {
    operationItemListViewManager = this->fields.operationItemListViewManager;
    if ( !operationItemListViewManager )
      goto LABEL_33;
    FollowerSelectItemListViewManager__ModifyList(
      (FollowerSelectItemListViewManager_o *)operationItemListViewManager,
      this->fields.friendPointUpVal,
      this->fields.friendPointUpMaxVal,
      0LL);
    v9 = this->fields.operationItemListViewManager;
    v10 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_B52A54(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    FollowerSelectItemListViewManager_CallbackFunc___ctor(
      v10,
      (Il2CppObject *)this,
      Method_FollowerRootComponent_OnSelectFollowerItem__,
      0LL);
    if ( !v9 )
      goto LABEL_33;
    FollowerSelectItemListViewManager__SetMode(v9, 2, v10, 0LL);
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
  operationItemListViewManager = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !operationItemListViewManager || !followerQuestInfomationDraw )
    goto LABEL_33;
  FollowerQuestInfomationDraw__SetInfomation(
    followerQuestInfomationDraw,
    questRestrictionInfo,
    *((_DWORD *)operationItemListViewManager + 14),
    0LL,
    v14);
  operationItemListViewManager = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v15 = (CommonUI_o *)operationItemListViewManager;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !v15 )
    goto LABEL_33;
  CommonUI__maskFadein(v15, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
  SceneRootComponent__sendMessageResume((SceneRootComponent_o *)this, 0LL);
}


void __fastcall FollowerRootComponent__SelectShowServant(
        FollowerRootComponent_o *this,
        FollowerSelectItemListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewManager_o *operationItemListViewManager; // x0
  CommonUI_o *v6; // x21
  ServantLeaderInfo_o *ServantLeader; // x20
  ServantStatusDialog_EndDelegate_o *v8; // x22

  if ( (byte_42AEA21 & 1) == 0 )
  {
    sub_B52984(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_B52984(&Method_FollowerRootComponent_EndShowServant__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42AEA21 = 1;
  }
  operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager
    || (ListViewManager__GetScrollView(
          operationItemListViewManager,
          &this->fields.openScroll,
          &this->fields.openOffset,
          0LL),
        operationItemListViewManager = (ListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        !item)
    || (v6 = (CommonUI_o *)operationItemListViewManager,
        ServantLeader = FollowerSelectItemListViewItem__get_ServantLeader(item, 0LL),
        v8 = (ServantStatusDialog_EndDelegate_o *)sub_B52A54(ServantStatusDialog_EndDelegate_TypeInfo),
        ServantStatusDialog_EndDelegate___ctor(
          v8,
          (Il2CppObject *)this,
          Method_FollowerRootComponent_EndShowServant__,
          0LL),
        !v6) )
  {
    sub_B52A5C(operationItemListViewManager, item);
  }
  CommonUI__OpenServantStatusDialog_18171020(v6, 5, ServantLeader, v8, 0LL);
}


void __fastcall FollowerRootComponent__SelectShowServantEquip(
        FollowerRootComponent_o *this,
        EquipTargetInfo_o *equipInfo,
        int32_t statusKind,
        const MethodInfo *method)
{
  ListViewManager_o *operationItemListViewManager; // x0
  CommonUI_o *Instance; // x22
  ServantStatusDialog_EndDelegate_o *v9; // x23

  if ( (byte_42AEA24 & 1) == 0 )
  {
    sub_B52984(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_B52984(&Method_FollowerRootComponent_EndShowServantEquip__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42AEA24 = 1;
  }
  operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager
    || (ListViewManager__GetScrollView(
          operationItemListViewManager,
          &this->fields.openScroll,
          &this->fields.openOffset,
          0LL),
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v9 = (ServantStatusDialog_EndDelegate_o *)sub_B52A54(ServantStatusDialog_EndDelegate_TypeInfo),
        ServantStatusDialog_EndDelegate___ctor(
          v9,
          (Il2CppObject *)this,
          Method_FollowerRootComponent_EndShowServantEquip__,
          0LL),
        !Instance) )
  {
    sub_B52A5C(operationItemListViewManager, equipInfo);
  }
  CommonUI__OpenServantEquipStatusDialog_18173384(Instance, statusKind, equipInfo, v9, 0LL, 0LL);
}


void __fastcall FollowerRootComponent__SetBackupBgmName(
        FollowerRootComponent_o *this,
        bool isNonStopEndBgm,
        const MethodInfo *method)
{
  struct System_String_o *BgmName; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42AEA15 & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42AEA15 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  if ( SoundManager__isPlayBgm(0LL, 0LL) && !isNonStopEndBgm )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    BgmName = SoundManager__getBgmName(0LL);
    this->fields.backupBgmName = BgmName;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.backupBgmName,
      (System_Int32_array **)BgmName,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
  }
}


bool __fastcall FollowerRootComponent__SetFollowerBase(
        UISprite_o *sprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  if ( (byte_42AEA11 & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&FollowerRootComponent_TypeInfo);
    byte_42AEA11 = 1;
  }
  if ( (BYTE3(FollowerRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FollowerRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerRootComponent_TypeInfo);
  }
  JUMPOUT(0x159CC34LL);
}


bool __fastcall FollowerRootComponent__StartBattleSetupMenu(FollowerRootComponent_o *this, const MethodInfo *method)
{
  int64_t exists; // x0
  __int64 followerId; // x1
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  int32_t ItemIndex_30728208; // w0
  FollowerSelectItemListViewItem_o *Item; // x0
  struct BattleSetupInfo_o *v8; // x21
  FollowerSelectItemListViewItem_o *v9; // x20
  struct BattleSetupInfo_o *v10; // x21
  struct BattleSetupInfo_o *v11; // x8
  int32_t FollowerType; // w0
  const MethodInfo *v13; // x2
  Il2CppObject *v14; // x20

  if ( (byte_42AEA29 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B52984(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_B52984(&SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    byte_42AEA29 = 1;
  }
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  exists = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !exists )
    goto LABEL_21;
  exists = PartyOrganizationUtility__ExistsTemporaryPartyInfo((PartyOrganizationUtility_o *)exists, 0LL);
  battleSetupInfo = this->fields.battleSetupInfo;
  if ( !battleSetupInfo )
    goto LABEL_21;
  if ( (exists & 1) != 0 )
  {
    followerId = battleSetupInfo->fields.followerId;
    if ( followerId >= 1 )
    {
      exists = (int64_t)this->fields.operationItemListViewManager;
      if ( !exists )
        goto LABEL_21;
      ItemIndex_30728208 = FollowerSelectItemListViewManager__GetItemIndex_30728208(
                             (FollowerSelectItemListViewManager_o *)exists,
                             followerId,
                             battleSetupInfo->fields.followerClassId,
                             battleSetupInfo->fields.followerSupportDeckId,
                             0LL);
      this->fields.selectItemNum = ItemIndex_30728208 & ~(ItemIndex_30728208 >> 31);
    }
    goto LABEL_19;
  }
  battleSetupInfo->fields.followerId = 0LL;
  followerId = (unsigned int)this->fields.selectItemNum;
  if ( (followerId & 0x80000000) == 0 )
  {
    exists = (int64_t)this->fields.operationItemListViewManager;
    if ( !exists )
      goto LABEL_21;
    Item = FollowerSelectItemListViewManager__GetItem((FollowerSelectItemListViewManager_o *)exists, followerId, 0LL);
    if ( Item )
    {
      v8 = this->fields.battleSetupInfo;
      v9 = Item;
      exists = FollowerSelectItemListViewItem__get_FollowerId(Item, 0LL);
      if ( v8 )
      {
        v8->fields.followerId = exists;
        v10 = this->fields.battleSetupInfo;
        exists = FollowerSelectItemListViewItem__get_SelectClassId(v9, 0LL);
        if ( v10 )
        {
          v10->fields.followerClassId = exists;
          v11 = this->fields.battleSetupInfo;
          if ( v11 )
          {
            v11->fields.followerSupportDeckId = v9->fields.supportDeckId;
            FollowerType = FollowerSelectItemListViewItem__get_FollowerType(v9, 0LL);
            FollowerRootComponent__setBattleSetupFollowType(this, FollowerType, v13);
            goto LABEL_19;
          }
        }
      }
LABEL_21:
      sub_B52A5C(exists, followerId);
    }
  }
LABEL_19:
  this->fields.state = 5;
  v14 = (Il2CppObject *)this->fields.battleSetupInfo;
  exists = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !exists )
    goto LABEL_21;
  AvalonSceneManager__pushScene((AvalonSceneManager_o *)exists, 40, 1, v14, 0LL);
  return 1;
}


bool __fastcall FollowerRootComponent__StartSupportInfoMenu(FollowerRootComponent_o *this, const MethodInfo *method)
{
  __int64 selectItemNum; // x1
  int64_t operationItemListViewManager; // x0
  FollowerSelectItemListViewItem_o *Item; // x0
  FollowerSelectItemListViewItem_o *v6; // x20
  int64_t userId; // x22
  int v8; // w8
  unsigned int v9; // w23
  int64_t v10; // x24
  __int64 v11; // x8
  FollowerInfo_o **v12; // x24
  __int64 v13; // t1
  __int64 v14; // x25
  int64_t v15; // x22
  __int64 v16; // x8
  __int64 v17; // x23
  __int64 v18; // x8
  __int64 v19; // x21
  bool v20; // w21
  FollowerInfo_o *v22; // x21
  SupportInfoJump_c *v23; // x0
  SupportInfoJump_o *v24; // x20
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  __int64 v26; // x0
  UserGameEntity_o *v27; // [xsp+8h] [xbp-48h] BYREF
  UserGameEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_42AEA2A & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_PickupUserFollowerMaster___);
    sub_B52984(&Method_DataManager_GetMaster_UserFollowerMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long__TryGetSingleEntity__);
    sub_B52984(&Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long__TryGetSingleEntity__);
    sub_B52984(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B52984(&SupportInfoJump_TypeInfo);
    byte_42AEA2A = 1;
  }
  entity = 0LL;
  v27 = 0LL;
  selectItemNum = (unsigned int)this->fields.selectItemNum;
  if ( (selectItemNum & 0x80000000) == 0 )
  {
    operationItemListViewManager = (int64_t)this->fields.operationItemListViewManager;
    if ( !operationItemListViewManager )
      goto LABEL_44;
    Item = FollowerSelectItemListViewManager__GetItem(
             (FollowerSelectItemListViewManager_o *)operationItemListViewManager,
             selectItemNum,
             0LL);
    if ( Item )
    {
      v6 = Item;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      operationItemListViewManager = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_UserFollowerMaster___);
      if ( !operationItemListViewManager )
        goto LABEL_44;
      operationItemListViewManager = DataMasterBase_UserGameMaster__UserGameEntity__long___TryGetSingleEntity(
                                       (DataMasterBase_UserGameMaster__UserGameEntity__long__o *)operationItemListViewManager,
                                       &entity,
                                       (const MethodInfo_23E25E8 *)Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long__TryGetSingleEntity__);
      if ( (operationItemListViewManager & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_44;
        userId = entity->fields.userId;
        if ( !userId )
          goto LABEL_44;
        v8 = *(_DWORD *)(userId + 24);
        if ( v8 >= 1 )
        {
          v9 = 0;
          while ( 1 )
          {
            if ( v9 >= v8 )
              goto LABEL_45;
            v10 = userId + 8LL * (int)v9;
            v13 = *(_QWORD *)(v10 + 32);
            v12 = (FollowerInfo_o **)(v10 + 32);
            v11 = v13;
            if ( !v13 )
              goto LABEL_44;
            v14 = *(_QWORD *)(v11 + 16);
            operationItemListViewManager = FollowerSelectItemListViewItem__get_FollowerId(v6, 0LL);
            if ( v14 == operationItemListViewManager )
              break;
            v8 = *(_DWORD *)(userId + 24);
            if ( (int)++v9 >= v8 )
              goto LABEL_19;
          }
          this->fields.state = 6;
          if ( v9 < *(_DWORD *)(userId + 24) )
          {
            v22 = *v12;
            v23 = SupportInfoJump_TypeInfo;
LABEL_40:
            v24 = (SupportInfoJump_o *)sub_B52A54(v23);
            SupportInfoJump___ctor_32550408(v24, v22, 0, 1, 0LL);
            battleSetupInfo = this->fields.battleSetupInfo;
            if ( battleSetupInfo )
            {
              if ( v24 )
              {
                SupportInfoJump__SetSetupInfo(
                  v24,
                  battleSetupInfo->fields.eventUpValSetupInfo,
                  battleSetupInfo->fields.questRestrictionInfo,
                  0LL);
                operationItemListViewManager = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
                if ( operationItemListViewManager )
                {
                  v20 = 1;
                  AvalonSceneManager__pushScene(
                    (AvalonSceneManager_o *)operationItemListViewManager,
                    60,
                    1,
                    (Il2CppObject *)v24,
                    0LL);
                  return v20;
                }
              }
            }
LABEL_44:
            sub_B52A5C(operationItemListViewManager, selectItemNum);
          }
          goto LABEL_45;
        }
      }
LABEL_19:
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      operationItemListViewManager = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_PickupUserFollowerMaster___);
      if ( !operationItemListViewManager )
        goto LABEL_44;
      operationItemListViewManager = DataMasterBase_UserGameMaster__UserGameEntity__long___TryGetSingleEntity(
                                       (DataMasterBase_UserGameMaster__UserGameEntity__long__o *)operationItemListViewManager,
                                       &v27,
                                       (const MethodInfo_23E25E8 *)Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long__TryGetSingleEntity__);
      if ( (operationItemListViewManager & 1) != 0 )
      {
        if ( !v27 )
          goto LABEL_44;
        v15 = v27->fields.userId;
        if ( v15 )
        {
          v16 = *(_QWORD *)(v15 + 24);
          if ( v16 )
          {
            if ( (int)v16 >= 1 )
            {
              v17 = 0LL;
              while ( 1 )
              {
                if ( (unsigned int)v17 >= (unsigned int)v16 )
                  goto LABEL_45;
                v18 = *(_QWORD *)(v15 + 32 + 8 * v17);
                if ( !v18 )
                  goto LABEL_44;
                v19 = *(_QWORD *)(v18 + 16);
                operationItemListViewManager = FollowerSelectItemListViewItem__get_FollowerId(v6, 0LL);
                if ( v19 == operationItemListViewManager )
                  break;
                LODWORD(v16) = *(_DWORD *)(v15 + 24);
                ++v17;
                v20 = 0;
                if ( (int)v17 >= (int)v16 )
                  return v20;
              }
              this->fields.state = 6;
              if ( (unsigned int)v17 < *(_DWORD *)(v15 + 24) )
              {
                v22 = *(FollowerInfo_o **)(v15 + 32 + 8 * v17);
                v23 = SupportInfoJump_TypeInfo;
                goto LABEL_40;
              }
LABEL_45:
              v26 = sub_B52A88(operationItemListViewManager);
              sub_B52A28(v26, 0LL);
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
  int64_t Instance; // x0
  __int64 v4; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x20
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  struct BattleSetupInfo_o *v13; // x8
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  int32_t *p_friendPointUpVal; // x25
  EventCampaignMaster_o *v16; // x21
  EventQuestMaster_o *v17; // x22
  struct BattleSetupInfo_o *v18; // x8
  struct EventCampaignEntity_array *Data_29622896; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct BattleSetupInfo_o *v26; // x8
  int32_t i; // w20
  PartyOrganizationListViewItem_o *Member; // x0
  PartyOrganizationListViewItem_o *v29; // x21
  System_Int64_array *v30; // x22
  UserServantEntity_o *userServantEntity; // x8
  int32_t v32; // w21
  BalanceConfig_c *v33; // x0
  int32_t j; // w19
  PartyOrganizationListViewItem_o *v35; // x0
  PartyOrganizationListViewItem_o *v36; // x20
  System_Int64_array *v37; // x21
  UserServantEntity_o *v38; // x8
  int v39; // w20
  struct BattleSetupInfo_o *v40; // x8
  struct BattleSetupInfo_o *v41; // x8
  struct BattleSetupInfo_o *v42; // x8
  UserEventDeckMaster_o *v43; // x20
  struct BattleSetupInfo_o *v44; // x8
  int32_t eventId; // w22
  int64_t v46; // x21
  struct BattleSetupInfo_o *v47; // x8
  UserEventDeckEntity_o *v48; // x20
  int64_t v49; // x21
  int v50; // w8
  unsigned __int64 v51; // x22
  int64_t v52; // x26
  System_Int64_array *v53; // x23
  int32_t v54; // w24
  unsigned __int64 v55; // x22
  int64_t v56; // x26
  System_Int64_array *v57; // x23
  int v58; // w24
  struct BattleSetupInfo_o *v59; // x8
  int32_t k; // w20
  UserServantEntity_o *UserServant; // x0
  UserServantEntity_o *v62; // x21
  System_Int64_array *EquipList; // x23
  int32_t FriendPointUpVal; // w22
  BalanceConfig_c *v65; // x0
  int32_t m; // w19
  UserServantEntity_o *v67; // x0
  UserServantEntity_o *v68; // x20
  System_Int64_array *v69; // x22
  int32_t v70; // w21
  int32_t v71; // w21
  int32_t v72; // w21
  struct BattleSetupInfo_o *v73; // x8
  __int64 v74; // x0
  UserServantEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42AEA20 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_EventQuestMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserDeckMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserEventDeckMaster___);
    sub_B52984(&Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__TryGetEntity__);
    sub_B52984(&LastUsedDeckNumberManager_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&OptionManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_B52984(&SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    byte_42AEA20 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_152;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  Instance = OptionManager__GetAutoSelectParty(0LL);
  if ( (Instance & 1) == 0 )
    goto LABEL_10;
  Instance = (int64_t)this->fields.battleSetupInfo;
  if ( !Instance )
    goto LABEL_152;
  if ( *(_BYTE *)(Instance + 74) )
    goto LABEL_10;
  v71 = BattleSetupInfo__TargetQuestId((BattleSetupInfo_o *)Instance, 0LL);
  if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
  }
  Instance = LastUsedDeckNumberManager__GetDeckNumber(v71, 0LL);
  if ( (int)Instance < 1 )
  {
LABEL_10:
    battleSetupInfo = this->fields.battleSetupInfo;
    if ( !battleSetupInfo || !MasterData_WarQuestSelectionMaster )
      goto LABEL_152;
    Instance = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                 MasterData_WarQuestSelectionMaster,
                 &entity,
                 battleSetupInfo->fields.deckId,
                 (const MethodInfo_23E255C *)Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__TryGetEntity__);
  }
  else
  {
    v72 = Instance;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Instance = NetworkManager__get_UserId(0LL);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_152;
    Instance = (int64_t)UserDeckMaster__getDeck(
                          (UserDeckMaster_o *)MasterData_WarQuestSelectionMaster,
                          Instance,
                          v72,
                          0LL);
    entity = (UserServantEntity_o *)Instance;
  }
  v13 = this->fields.battleSetupInfo;
  if ( !v13 )
    goto LABEL_152;
  questRestrictionInfo = v13->fields.questRestrictionInfo;
  if ( questRestrictionInfo )
    QuestRestrictionInfo__SetDeckInfo(questRestrictionInfo, (UserDeckEntity_o *)entity, 0LL);
  *(_QWORD *)&this->fields.friendPointUpVal = 0LL;
  p_friendPointUpVal = &this->fields.friendPointUpVal;
  this->fields.friendPointCampaignEntityList = 0LL;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.friendPointCampaignEntityList,
    0LL,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_152;
  v16 = (EventCampaignMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_152;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventQuestMaster___);
  if ( !this->fields.battleSetupInfo )
    goto LABEL_152;
  v17 = (EventQuestMaster_o *)Instance;
  Instance = BattleSetupInfo__TargetQuestId(this->fields.battleSetupInfo, 0LL);
  v18 = this->fields.battleSetupInfo;
  if ( !v18 )
    goto LABEL_152;
  if ( !v17 )
    goto LABEL_152;
  Instance = (int64_t)EventQuestMaster__GetEnabledEventCampaignForQuest(
                        v17,
                        Instance,
                        v18->fields.questPhase,
                        0LL,
                        7,
                        0LL);
  if ( !v16 )
    goto LABEL_152;
  Data_29622896 = EventCampaignMaster__getData_29622896(v16, 24, (EventEntity_array *)Instance, 0LL);
  this->fields.friendPointCampaignEntityList = Data_29622896;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.friendPointCampaignEntityList,
    (System_Int32_array **)Data_29622896,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  if ( this->fields.tutorialMode == 4 )
  {
    v26 = this->fields.battleSetupInfo;
    if ( !v26 )
      goto LABEL_152;
    if ( v26->fields.isChildFollower )
    {
      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
      }
      Instance = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_152;
      if ( *(_QWORD *)(Instance + 72) )
      {
        for ( i = 0; ; ++i )
        {
          v33 = BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v33 = BalanceConfig_TypeInfo;
          }
          if ( i >= v33->static_fields->DeckMemberMax )
            break;
          if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
          }
          Instance = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( !Instance )
            goto LABEL_152;
          Instance = *(_QWORD *)(Instance + 72);
          if ( !Instance )
            goto LABEL_152;
          Member = PartyListViewItem__GetMember((PartyListViewItem_o *)Instance, i, 0LL);
          if ( Member )
          {
            v29 = Member;
            if ( Member->fields.userServantEntity )
            {
              Instance = (int64_t)PartyOrganizationListViewItem__GetEquipList(Member, 0LL);
              if ( !v29->fields.userServantEntity )
                goto LABEL_152;
              v30 = (System_Int64_array *)Instance;
              Instance = UserServantEntity__getFriendPointUpVal(
                           v29->fields.userServantEntity,
                           (System_Int64_array *)Instance,
                           0LL);
              userServantEntity = v29->fields.userServantEntity;
              if ( !userServantEntity )
                goto LABEL_152;
              v32 = Instance;
              if ( UserServantEntity__getFriendPointUpType(userServantEntity, v30, 0LL) == 104
                && v32 > *p_friendPointUpVal )
              {
                this->fields.friendPointUpVal = v32;
                this->fields.friendPointUpMaxVal = v32;
              }
            }
          }
        }
        for ( j = 0; ; ++j )
        {
          if ( (BYTE3(v33->vtable._0_Equals.methodPtr) & 4) != 0 && !v33->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v33);
            v33 = BalanceConfig_TypeInfo;
          }
          if ( j >= v33->static_fields->DeckMemberMax )
            break;
          if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
          }
          Instance = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( !Instance )
            goto LABEL_152;
          Instance = *(_QWORD *)(Instance + 72);
          if ( !Instance )
            goto LABEL_152;
          v35 = PartyListViewItem__GetMember((PartyListViewItem_o *)Instance, j, 0LL);
          if ( v35 )
          {
            v36 = v35;
            if ( v35->fields.userServantEntity )
            {
              Instance = (int64_t)PartyOrganizationListViewItem__GetEquipList(v35, 0LL);
              if ( !v36->fields.userServantEntity )
                goto LABEL_152;
              v37 = (System_Int64_array *)Instance;
              Instance = UserServantEntity__getFriendPointUpVal(
                           v36->fields.userServantEntity,
                           (System_Int64_array *)Instance,
                           0LL);
              v38 = v36->fields.userServantEntity;
              if ( !v38 )
                goto LABEL_152;
              v39 = Instance;
              if ( UserServantEntity__getFriendPointUpType(v38, v37, 0LL) == 123 )
                *p_friendPointUpVal += v39;
            }
          }
          v33 = BalanceConfig_TypeInfo;
        }
        return;
      }
    }
  }
  v40 = this->fields.battleSetupInfo;
  if ( !v40 )
    goto LABEL_152;
  Instance = (int64_t)v40->fields.questRestrictionInfo;
  if ( Instance )
  {
    Instance = QuestRestrictionInfo__IsServantNum((QuestRestrictionInfo_o *)Instance, 0LL);
    if ( (Instance & 1) != 0 )
      goto LABEL_75;
    v41 = this->fields.battleSetupInfo;
    if ( !v41 )
      goto LABEL_152;
    Instance = (int64_t)v41->fields.questRestrictionInfo;
    if ( !Instance )
      goto LABEL_152;
    Instance = QuestRestrictionInfo__IsNpcMulitipleOrOnly((QuestRestrictionInfo_o *)Instance, 0LL);
    if ( (Instance & 1) != 0 )
      goto LABEL_75;
    v42 = this->fields.battleSetupInfo;
    if ( !v42 )
      goto LABEL_152;
    Instance = (int64_t)v42->fields.questRestrictionInfo;
    if ( !Instance )
      goto LABEL_152;
    if ( *(int *)(Instance + 396) >= 1 )
    {
LABEL_75:
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        v43 = (UserEventDeckMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserEventDeckMaster___);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        Instance = NetworkManager__get_UserId(0LL);
        v44 = this->fields.battleSetupInfo;
        if ( v44 )
        {
          eventId = v44->fields.eventId;
          v46 = Instance;
          Instance = BattleSetupInfo__TargetQuestId(this->fields.battleSetupInfo, 0LL);
          v47 = this->fields.battleSetupInfo;
          if ( v47 )
          {
            if ( v43 )
            {
              Instance = (int64_t)UserEventDeckMaster__getDeckList(
                                    v43,
                                    v46,
                                    eventId,
                                    Instance,
                                    v47->fields.questPhase,
                                    0LL);
              if ( Instance )
              {
                if ( !*(_DWORD *)(Instance + 24) )
                  goto LABEL_153;
                v48 = *(UserEventDeckEntity_o **)(Instance + 32);
                if ( v48 )
                {
                  Instance = (int64_t)UserEventDeckEntity__GetUserServantList(
                                        *(UserEventDeckEntity_o **)(Instance + 32),
                                        0,
                                        0LL);
                  if ( Instance )
                  {
                    v49 = Instance;
                    v50 = *(_QWORD *)(Instance + 24);
                    if ( v50 >= 1 )
                    {
                      v51 = 0LL;
                      v52 = Instance + 32;
                      while ( v51 < (unsigned int)v50 )
                      {
                        if ( *(_QWORD *)(v52 + 8 * v51) )
                        {
                          Instance = (int64_t)UserEventDeckEntity__GetEquipList(v48, v51, 0LL);
                          if ( v51 >= *(unsigned int *)(v49 + 24) )
                            break;
                          v53 = (System_Int64_array *)Instance;
                          Instance = *(_QWORD *)(v52 + 8 * v51);
                          if ( !Instance )
                            goto LABEL_152;
                          Instance = UserServantEntity__getFriendPointUpVal((UserServantEntity_o *)Instance, v53, 0LL);
                          if ( v51 >= *(unsigned int *)(v49 + 24) )
                            break;
                          v54 = Instance;
                          Instance = *(_QWORD *)(v52 + 8 * v51);
                          if ( !Instance )
                            goto LABEL_152;
                          Instance = UserServantEntity__getFriendPointUpType((UserServantEntity_o *)Instance, v53, 0LL);
                          if ( (_DWORD)Instance == 104 && v54 > *p_friendPointUpVal )
                          {
                            this->fields.friendPointUpVal = v54;
                            this->fields.friendPointUpMaxVal = v54;
                          }
                        }
                        v50 = *(_DWORD *)(v49 + 24);
                        if ( (__int64)++v51 >= v50 )
                          goto LABEL_98;
                      }
LABEL_153:
                      v74 = sub_B52A88(Instance);
                      sub_B52A28(v74, 0LL);
                    }
LABEL_98:
                    if ( v50 >= 1 )
                    {
                      v55 = 0LL;
                      v56 = v49 + 32;
                      while ( v55 < (unsigned int)v50 )
                      {
                        if ( *(_QWORD *)(v56 + 8 * v55) )
                        {
                          Instance = (int64_t)UserEventDeckEntity__GetEquipList(v48, v55, 0LL);
                          if ( v55 >= *(unsigned int *)(v49 + 24) )
                            goto LABEL_153;
                          v57 = (System_Int64_array *)Instance;
                          Instance = *(_QWORD *)(v56 + 8 * v55);
                          if ( !Instance )
                            goto LABEL_152;
                          Instance = UserServantEntity__getFriendPointUpVal((UserServantEntity_o *)Instance, v57, 0LL);
                          if ( v55 >= *(unsigned int *)(v49 + 24) )
                            goto LABEL_153;
                          v58 = Instance;
                          Instance = *(_QWORD *)(v56 + 8 * v55);
                          if ( !Instance )
                            goto LABEL_152;
                          Instance = UserServantEntity__getFriendPointUpType((UserServantEntity_o *)Instance, v57, 0LL);
                          if ( (_DWORD)Instance == 123 )
                            *p_friendPointUpVal += v58;
                        }
                        v50 = *(_DWORD *)(v49 + 24);
                        if ( (__int64)++v55 >= v50 )
                          goto LABEL_109;
                      }
                      goto LABEL_153;
                    }
LABEL_109:
                    v59 = this->fields.battleSetupInfo;
                    if ( v59 )
                    {
                      Instance = (int64_t)v59->fields.questRestrictionInfo;
                      if ( Instance )
                      {
                        QuestRestrictionInfo__SetDeckInfo_34146292((QuestRestrictionInfo_o *)Instance, v48, 0LL);
                        return;
                      }
                    }
                  }
                }
                else
                {
                  v73 = this->fields.battleSetupInfo;
                  if ( v73 )
                  {
                    Instance = (int64_t)v73->fields.questRestrictionInfo;
                    if ( Instance )
                    {
                      QuestRestrictionInfo__ResetDeckInfo((QuestRestrictionInfo_o *)Instance, 0LL);
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
      sub_B52A5C(Instance, v4);
    }
  }
  if ( entity && (!Instance || !QuestRestrictionInfo__IsSupportOnly((QuestRestrictionInfo_o *)Instance, 0LL)) )
  {
    for ( k = 0; ; ++k )
    {
      v65 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v65 = BalanceConfig_TypeInfo;
      }
      if ( k >= v65->static_fields->DeckMemberMax )
        break;
      Instance = (int64_t)entity;
      if ( !entity )
        goto LABEL_152;
      UserServant = UserDeckEntity__GetUserServant((UserDeckEntity_o *)entity, k, 0LL);
      if ( UserServant )
      {
        v62 = UserServant;
        Instance = (int64_t)entity;
        if ( !entity )
          goto LABEL_152;
        EquipList = UserDeckEntity__GetEquipList((UserDeckEntity_o *)entity, k, 0LL);
        FriendPointUpVal = UserServantEntity__getFriendPointUpVal(v62, EquipList, 0LL);
        if ( UserServantEntity__getFriendPointUpType(v62, EquipList, 0LL) == 104
          && FriendPointUpVal > *p_friendPointUpVal )
        {
          this->fields.friendPointUpVal = FriendPointUpVal;
          this->fields.friendPointUpMaxVal = FriendPointUpVal;
        }
      }
    }
    for ( m = 0; ; ++m )
    {
      if ( (BYTE3(v65->vtable._0_Equals.methodPtr) & 4) != 0 && !v65->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v65);
        v65 = BalanceConfig_TypeInfo;
      }
      if ( m >= v65->static_fields->DeckMemberMax )
        break;
      Instance = (int64_t)entity;
      if ( !entity )
        goto LABEL_152;
      v67 = UserDeckEntity__GetUserServant((UserDeckEntity_o *)entity, m, 0LL);
      if ( v67 )
      {
        v68 = v67;
        Instance = (int64_t)entity;
        if ( !entity )
          goto LABEL_152;
        v69 = UserDeckEntity__GetEquipList((UserDeckEntity_o *)entity, m, 0LL);
        v70 = UserServantEntity__getFriendPointUpVal(v68, v69, 0LL);
        if ( UserServantEntity__getFriendPointUpType(v68, v69, 0LL) == 123 )
          *p_friendPointUpVal += v70;
      }
      v65 = BalanceConfig_TypeInfo;
    }
  }
}


void __fastcall FollowerRootComponent___OnClickBack_b__67_0(
        FollowerRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  FollowerRootComponent_o *v7; // x0
  const MethodInfo *v8; // x1
  TerminalPramsManager_c *v9; // x0

  if ( (byte_42AEA39 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&TerminalPramsManager_TypeInfo);
    sub_B52984(&StringLiteral_3075/*"CLICK_BACK"*/);
    byte_42AEA39 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  CommonUI__CloseConfirmDialog(Instance, 0LL);
  if ( isDecide )
  {
    FollowerRootComponent__QuestHintDialogResetTemporarilyId(v7, v8);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42AC2AB )
    {
      sub_B52984(&TerminalPramsManager_TypeInfo);
      byte_42AC2AB = 1;
    }
    v9 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v9 = TerminalPramsManager_TypeInfo;
    }
    v9->static_fields->_IsAutoResume_k__BackingField = 1;
    Instance = (CommonUI_o *)this->fields.myFSM;
    if ( Instance )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3075/*"CLICK_BACK"*/, 0LL);
      return;
    }
LABEL_16:
    sub_B52A5C(Instance, v6);
  }
  this->fields.state = 3;
}


void __fastcall FollowerRootComponent__beginFinish(FollowerRootComponent_o *this, const MethodInfo *method)
{
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  FollowerRootComponent_c *v10; // x0
  struct FollowerRootComponent_StaticFields *static_fields; // x0

  if ( (byte_42AEA1C & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&FollowerRootComponent_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    byte_42AEA1C = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  this->fields.state = 0;
  if ( !operationItemListViewManager )
    goto LABEL_16;
  FollowerSelectItemListViewManager__DestroyList(operationItemListViewManager, 0LL);
  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    goto LABEL_16;
  operationItemListViewManager = (FollowerSelectItemListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                          (UnityEngine_Component_o *)operationItemListViewManager,
                                                                          0LL);
  if ( !operationItemListViewManager )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)operationItemListViewManager, 0, 0LL);
  v10 = FollowerRootComponent_TypeInfo;
  if ( (BYTE3(FollowerRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FollowerRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerRootComponent_TypeInfo);
    v10 = FollowerRootComponent_TypeInfo;
  }
  static_fields = v10->static_fields;
  static_fields->partyOrganizationAtlasCache = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&static_fields->partyOrganizationAtlasCache, 0LL, v4, v5, v6, v7, v8, v9);
  operationItemListViewManager = (FollowerSelectItemListViewManager_o *)this->fields.backSkinSprite;
  if ( !operationItemListViewManager
    || (operationItemListViewManager = (FollowerSelectItemListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                                (UnityEngine_Component_o *)operationItemListViewManager,
                                                                                0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)operationItemListViewManager, 0, 0LL),
        (operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__)) == 0LL) )
  {
LABEL_16:
    sub_B52A5C(operationItemListViewManager, method);
  }
  AtlasManager__ReleaseUISkin((AtlasManager_o *)operationItemListViewManager, 2, 0, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleasePartyOrganizationAtlas(0LL);
}


void __fastcall FollowerRootComponent__beginInitialize(FollowerRootComponent_o *this, const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_42AEA12 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_42AEA12 = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v4);
  AvalonSceneManager__endInitialize(Instance, (SceneRootComponent_o *)this, 0LL);
}


void __fastcall FollowerRootComponent__beginPause(FollowerRootComponent_o *this, const MethodInfo *method)
{
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x0

  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    sub_B52A5C(0LL, method);
  FollowerSelectItemListViewManager__SaveSortFilter(operationItemListViewManager, 0LL);
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
  System_Int32_array **partyOrganizationAtlas; // x21
  FollowerRootComponent_c *v11; // x0
  struct FollowerRootComponent_StaticFields *static_fields; // x0
  TitleInfoControl_o *titleInfo; // x21
  int64_t operationItemListViewManager; // x0
  unsigned __int64 selectItemNum; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  __int64 v22; // x10
  FollowerSelectItemListViewItem_o *Item; // x0
  struct BattleSetupInfo_o *battleSetupInfo; // x22
  FollowerSelectItemListViewItem_o *v25; // x21
  struct BattleSetupInfo_o *v26; // x8
  int klass_high; // w9
  struct BattleSetupInfo_o *v28; // x8
  int32_t FollowerType; // w0
  const MethodInfo *v30; // x2
  struct BattleSetupInfo_o *v31; // x8
  Il2CppObject *v32; // x19
  __int64 v33; // x10
  Il2CppObject *v34; // x1
  struct BattleSetupInfo_o **p_battleSetupInfo; // x20
  struct BattleSetupInfo_o *v36; // x8
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x21
  int32_t tutorialMode; // w8
  struct BattleSetupInfo_o *v39; // x8
  FollowerSelectItemListViewManager_o *v40; // x20
  struct BattleSetupInfo_o *v41; // x8
  const MethodInfo *v42; // x4
  struct BattleSetupInfo_o *v43; // x8
  const MethodInfo *v44; // x1
  CommonUI_o *v45; // x20
  struct BattleSetupInfo_o *v46; // x8
  PartyListViewItem_o *v47; // x20
  UnityEngine_Component_o *v48; // x8
  int32_t i; // w21
  FollowerSelectItemListViewManager_o *v50; // x22
  struct BattleSetupInfo_o *v51; // x8
  const MethodInfo *v52; // x4
  struct BattleSetupInfo_o *v53; // x8
  FollowerSelectItemListViewManager_o *v54; // x22
  FollowerSelectItemListViewManager_CallbackFunc_o *v55; // x23
  PartyOrganizationListViewItem_o *Member; // x0
  struct FollowerInfo_o *followerInfo; // x8
  FollowerSelectItemListViewManager_o *v58; // x20
  int64_t userId; // x21
  struct QuestRestrictionInfo_o *v60; // x8
  PartyOrganizationListViewItem_o *v61; // x0
  struct FollowerInfo_o *v62; // x8
  unsigned int type; // w8
  BalanceConfig_c *v64; // x0
  int32_t v65; // w22

  if ( (byte_42AEA1A & 1) == 0 )
  {
    sub_B52984(&AvalonSceneManager_TypeInfo);
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&BattleSetupInfo_TypeInfo);
    sub_B52984(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    sub_B52984(&Method_FollowerRootComponent_OnSelectFollowerItem__);
    sub_B52984(&FollowerRootComponent_TypeInfo);
    sub_B52984(&RandomLimitCountManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_B52984(&SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    sub_B52984(&SupportInfoJump_TypeInfo);
    sub_B52984(&TutorialFlag_TypeInfo);
    byte_42AEA1A = 1;
  }
  partyOrganizationAtlas = (System_Int32_array **)this->fields.partyOrganizationAtlas;
  v11 = FollowerRootComponent_TypeInfo;
  if ( (BYTE3(FollowerRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FollowerRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerRootComponent_TypeInfo);
    v11 = FollowerRootComponent_TypeInfo;
  }
  static_fields = v11->static_fields;
  static_fields->partyOrganizationAtlasCache = (struct UIAtlas_o *)partyOrganizationAtlas;
  sub_B52920(
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
  operationItemListViewManager = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !operationItemListViewManager )
    goto LABEL_123;
  if ( *(_BYTE *)(operationItemListViewManager + 80) )
  {
    selectItemNum = 0LL;
    if ( !titleInfo )
      goto LABEL_123;
  }
  else
  {
    selectItemNum = this->fields.tutorialMode != 2;
    if ( !titleInfo )
      goto LABEL_123;
  }
  TitleInfoControl__setBackBtnEnable(titleInfo, selectItemNum, 0LL);
  if ( this->fields.state == 6 )
  {
    if ( data )
    {
      v22 = *(&SupportInfoJump_TypeInfo->_2.bitflags2 + 1);
      if ( *(&data->klass->_2.bitflags2 + 1) >= (unsigned int)v22
        && (SupportInfoJump_c *)data->klass->_2.typeHierarchy[v22 - 1] == SupportInfoJump_TypeInfo
        && ((__int64)data[3].klass & 0x80000000) == 0 )
      {
        selectItemNum = (unsigned int)this->fields.selectItemNum;
        if ( (selectItemNum & 0x80000000) == 0 )
        {
          operationItemListViewManager = (int64_t)this->fields.operationItemListViewManager;
          if ( !operationItemListViewManager )
            goto LABEL_123;
          Item = FollowerSelectItemListViewManager__GetItem(
                   (FollowerSelectItemListViewManager_o *)operationItemListViewManager,
                   selectItemNum,
                   0LL);
          if ( Item )
          {
            battleSetupInfo = this->fields.battleSetupInfo;
            v25 = Item;
            this->fields.state = 5;
            operationItemListViewManager = FollowerSelectItemListViewItem__get_FollowerId(Item, 0LL);
            if ( battleSetupInfo )
            {
              battleSetupInfo->fields.followerId = operationItemListViewManager;
              v26 = this->fields.battleSetupInfo;
              if ( v26 )
              {
                v26->fields.followerClassId = (int32_t)data[3].klass;
                klass_high = HIDWORD(data[3].klass);
                v28 = this->fields.battleSetupInfo;
                if ( klass_high <= 0 )
                  klass_high = v25->fields.supportDeckId;
                if ( v28 )
                {
                  v28->fields.followerSupportDeckId = klass_high;
                  FollowerType = FollowerSelectItemListViewItem__get_FollowerType(v25, 0LL);
                  FollowerRootComponent__setBattleSetupFollowType(this, FollowerType, v30);
                  if ( this->fields.operationItemListViewManager )
                  {
                    if ( !byte_42AEA3A )
                    {
                      sub_B52984(&FollowerSelectItemListViewManager_TypeInfo);
                      byte_42AEA3A = 1;
                    }
                    operationItemListViewManager = (int64_t)FollowerSelectItemListViewManager_TypeInfo;
                    if ( (BYTE3(FollowerSelectItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
                      operationItemListViewManager = (int64_t)FollowerSelectItemListViewManager_TypeInfo;
                    }
                    v31 = this->fields.battleSetupInfo;
                    if ( v31 )
                    {
                      selectItemNum = (unsigned int)v31->fields.followerClassId;
                      if ( *(_DWORD *)(*(_QWORD *)(operationItemListViewManager + 184) + 8LL) != (_DWORD)selectItemNum )
                      {
                        operationItemListViewManager = (int64_t)this->fields.operationItemListViewManager;
                        if ( !operationItemListViewManager )
                          goto LABEL_123;
                        if ( FollowerSelectItemListViewManager__ChangeClass(
                               (FollowerSelectItemListViewManager_o *)operationItemListViewManager,
                               selectItemNum,
                               0LL) )
                        {
                          operationItemListViewManager = (int64_t)this->fields.operationItemListViewManager;
                          if ( !operationItemListViewManager )
                            goto LABEL_123;
                          ListViewManager__JumpItem(
                            (ListViewManager_o *)operationItemListViewManager,
                            this->fields.selectItemNum,
                            0LL);
                        }
                      }
                      v32 = (Il2CppObject *)this->fields.battleSetupInfo;
                      operationItemListViewManager = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
                      if ( operationItemListViewManager )
                      {
                        AvalonSceneManager__pushScene(
                          (AvalonSceneManager_o *)operationItemListViewManager,
                          40,
                          1,
                          v32,
                          0LL);
                        return;
                      }
                    }
                  }
                }
              }
            }
LABEL_123:
            sub_B52A5C(operationItemListViewManager, selectItemNum);
          }
        }
      }
    }
  }
  else
  {
    if ( data
      && (v33 = *(&BattleSetupInfo_TypeInfo->_2.bitflags2 + 1), *(&data->klass->_2.bitflags2 + 1) >= (unsigned int)v33) )
    {
      if ( (BattleSetupInfo_c *)data->klass->_2.typeHierarchy[v33 - 1] == BattleSetupInfo_TypeInfo )
        v34 = data;
      else
        v34 = 0LL;
    }
    else
    {
      v34 = 0LL;
    }
    this->fields.battleSetupInfo = (struct BattleSetupInfo_o *)v34;
    p_battleSetupInfo = &this->fields.battleSetupInfo;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.battleSetupInfo,
      (System_Int32_array **)v34,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
    v36 = this->fields.battleSetupInfo;
    if ( !v36 )
      return;
    questRestrictionInfo = v36->fields.questRestrictionInfo;
    if ( !questRestrictionInfo )
      goto LABEL_123;
    if ( !QuestRestrictionInfo__IsMyServantOrNpcRestriction(v36->fields.questRestrictionInfo, 0LL)
      && (questRestrictionInfo->fields.isNoSupportBattle
       || questRestrictionInfo->fields.isFixedMyServantSingle
       || questRestrictionInfo->fields.isSupportOnlyForceBattle) )
    {
      goto LABEL_111;
    }
    if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TutorialFlag_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    }
    operationItemListViewManager = TutorialFlag__Get_29217932(102, 0LL);
    if ( (operationItemListViewManager & 1) == 0 )
    {
      v39 = *p_battleSetupInfo;
      if ( !*p_battleSetupInfo )
        goto LABEL_123;
      goto LABEL_78;
    }
  }
  FollowerRootComponent__UpdateDeckInfomation(this, (const MethodInfo *)selectItemNum);
  tutorialMode = this->fields.tutorialMode;
  if ( tutorialMode != 4 )
  {
    if ( tutorialMode != 3 )
    {
      if ( tutorialMode == 1 )
      {
        v39 = this->fields.battleSetupInfo;
        if ( !v39 )
          goto LABEL_123;
LABEL_78:
        if ( v39->fields.isChildFollower )
        {
          FollowerRootComponent__ReturnBattleSetupMenu(this, (const MethodInfo *)selectItemNum);
          return;
        }
        goto LABEL_111;
      }
LABEL_76:
      FollowerRootComponent__ReturnSupportList(this, (const MethodInfo *)selectItemNum);
      return;
    }
    operationItemListViewManager = (int64_t)this->fields.battleSetupInfo;
    this->fields.selectItemNum = -1;
    *(_QWORD *)&this->fields.tutorialMode = 0x100000003LL;
    if ( !operationItemListViewManager )
      goto LABEL_123;
    v40 = this->fields.operationItemListViewManager;
    operationItemListViewManager = BattleSetupInfo__TargetQuestId(
                                     (BattleSetupInfo_o *)operationItemListViewManager,
                                     0LL);
    v41 = this->fields.battleSetupInfo;
    if ( !v41 )
      goto LABEL_123;
    if ( !v40 )
      goto LABEL_123;
    FollowerSelectItemListViewManager__CreateList(
      v40,
      operationItemListViewManager,
      v41->fields.questPhase,
      this->fields.friendPointUpVal,
      this->fields.friendPointUpMaxVal,
      this->fields.friendPointCampaignEntityList,
      v41->fields.questRestrictionInfo,
      0LL);
    v43 = this->fields.battleSetupInfo;
    if ( !v43 )
      goto LABEL_123;
    operationItemListViewManager = (int64_t)this->fields.followerQuestInfomationDraw;
    if ( !operationItemListViewManager )
      goto LABEL_123;
    FollowerQuestInfomationDraw__SetInfomation(
      (FollowerQuestInfomationDraw_o *)operationItemListViewManager,
      v43->fields.questRestrictionInfo,
      0,
      0LL,
      v42);
    this->fields.state = 2;
    FollowerRootComponent__OnMoveEnd(this, v44);
    goto LABEL_70;
  }
  if ( this->fields.state == 6 )
    goto LABEL_76;
  v46 = this->fields.battleSetupInfo;
  if ( !v46 )
    goto LABEL_123;
  if ( !v46->fields.isChildFollower )
  {
    v60 = v46->fields.questRestrictionInfo;
    if ( !v60 )
      goto LABEL_123;
    if ( v60->fields.isNotTransitionSupportList )
    {
LABEL_111:
      FollowerRootComponent__ReturnQuestMenu(this, (const MethodInfo *)selectItemNum);
      return;
    }
  }
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
  operationItemListViewManager = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !operationItemListViewManager )
    goto LABEL_123;
  v47 = *(PartyListViewItem_o **)(operationItemListViewManager + 72);
  operationItemListViewManager = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !operationItemListViewManager )
    goto LABEL_123;
  v48 = (UnityEngine_Component_o *)this->fields.operationItemListViewManager;
  i = *(_DWORD *)(operationItemListViewManager + 56);
  this->fields.tutorialState = 0;
  this->fields.selectItemNum = -1;
  if ( !v48 )
    goto LABEL_123;
  operationItemListViewManager = (int64_t)UnityEngine_Component__get_gameObject(v48, 0LL);
  if ( !operationItemListViewManager )
    goto LABEL_123;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)operationItemListViewManager, 1, 0LL);
  operationItemListViewManager = (int64_t)this->fields.battleSetupInfo;
  if ( !operationItemListViewManager )
    goto LABEL_123;
  v50 = this->fields.operationItemListViewManager;
  operationItemListViewManager = BattleSetupInfo__TargetQuestId((BattleSetupInfo_o *)operationItemListViewManager, 0LL);
  v51 = this->fields.battleSetupInfo;
  if ( !v51 )
    goto LABEL_123;
  if ( !v50 )
    goto LABEL_123;
  FollowerSelectItemListViewManager__CreateList(
    v50,
    operationItemListViewManager,
    v51->fields.questPhase,
    this->fields.friendPointUpVal,
    this->fields.friendPointUpMaxVal,
    this->fields.friendPointCampaignEntityList,
    v51->fields.questRestrictionInfo,
    0LL);
  v53 = this->fields.battleSetupInfo;
  if ( !v53 )
    goto LABEL_123;
  operationItemListViewManager = (int64_t)this->fields.followerQuestInfomationDraw;
  if ( !operationItemListViewManager )
    goto LABEL_123;
  FollowerQuestInfomationDraw__SetInfomation(
    (FollowerQuestInfomationDraw_o *)operationItemListViewManager,
    v53->fields.questRestrictionInfo,
    i,
    0LL,
    v52);
  this->fields.state = 3;
  v54 = this->fields.operationItemListViewManager;
  v55 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_B52A54(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v55,
    (Il2CppObject *)this,
    Method_FollowerRootComponent_OnSelectFollowerItem__,
    0LL);
  if ( !v54 )
    goto LABEL_123;
  FollowerSelectItemListViewManager__SetMode(v54, 2, v55, 0LL);
  if ( v47 )
  {
    operationItemListViewManager = (int64_t)this->fields.operationItemListViewManager;
    if ( !operationItemListViewManager )
      goto LABEL_123;
    if ( ListViewManager__get_ItemSum((ListViewManager_o *)operationItemListViewManager, 0LL) >= 3 )
    {
      if ( i )
      {
LABEL_102:
        if ( i >= 1 )
        {
          Member = PartyListViewItem__GetMember(v47, i - 1, 0LL);
          if ( Member )
          {
            followerInfo = Member->fields.followerInfo;
            if ( followerInfo )
            {
              v58 = this->fields.operationItemListViewManager;
              userId = followerInfo->fields.userId;
              operationItemListViewManager = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(Member, 0LL);
              if ( !operationItemListViewManager )
                goto LABEL_123;
              if ( !v58 )
                goto LABEL_123;
              operationItemListViewManager = FollowerSelectItemListViewManager__GetItemIndex(
                                               v58,
                                               userId,
                                               *(_QWORD *)(operationItemListViewManager + 40),
                                               0LL);
              if ( !this->fields.operationItemListViewManager )
                goto LABEL_123;
              ListViewManager__JumpItem(
                (ListViewManager_o *)this->fields.operationItemListViewManager,
                operationItemListViewManager,
                0LL);
            }
          }
        }
      }
      else
      {
        for ( i = 1; ; ++i )
        {
          v64 = BalanceConfig_TypeInfo;
          v65 = i - 1;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v64 = BalanceConfig_TypeInfo;
          }
          if ( v65 >= v64->static_fields->DeckMemberMax )
            break;
          v61 = PartyListViewItem__GetMember(v47, v65, 0LL);
          if ( v61 )
          {
            v62 = v61->fields.followerInfo;
            if ( v62 )
            {
              type = v62->fields.type;
              if ( type > 4 || ((1 << type) & 0x19) == 0 )
                goto LABEL_102;
            }
          }
        }
      }
    }
  }
LABEL_70:
  operationItemListViewManager = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v45 = (CommonUI_o *)operationItemListViewManager;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !v45 )
    goto LABEL_123;
  CommonUI__maskFadein(v45, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
  SceneRootComponent__sendMessageResume((SceneRootComponent_o *)this, 0LL);
}


void __fastcall FollowerRootComponent__beginStartUp(
        FollowerRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  MissionNotifyManager_o *titleInfo; // x0
  const MethodInfo *v6; // x1
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
  struct System_Collections_Generic_List_MissionNotifyDispInfo__o *mDispInfos; // x8
  struct BattleSetupInfo_o *monitor; // x1
  BattleSetupInfo_o **p_battleSetupInfo; // x20
  const MethodInfo *v22; // x1
  __int64 v23; // x10
  struct BattleSetupInfo_o *v24; // x1
  const MethodInfo *v25; // x1
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Int32_array **partyOrganizationAtlas; // x21
  FollowerRootComponent_c *v33; // x0
  struct FollowerRootComponent_StaticFields *static_fields; // x0
  UILabel_o *infomationLabel; // x21
  UnityEngine_GameObject_o *refreshButtonBase; // x21
  bool v37; // w8
  _BYTE *v38; // x8
  ConstantMaster_o *v39; // x21
  BattleSetupInfo_o *v40; // x8
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x9
  System_Action_o *v42; // x20
  System_Action_o *v43; // x20
  QuestPhaseMaster_o *v44; // x21
  NpcFollowerMaster_o *v45; // x21
  const MethodInfo *v46; // x1
  const MethodInfo *v47; // x4
  struct BattleSetupInfo_o *battleSetupInfo; // x8

  if ( (byte_42AEA13 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&BattleSetupInfo_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_ConstantMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_NpcFollowerMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_B52984(&Method_FollowerRootComponent_EndLoadCommonBg__);
    sub_B52984(&Method_FollowerRootComponent_EndLoadPartyOrganizationAtlasSimple__);
    sub_B52984(&FollowerRootComponent_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&RandomLimitCountManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_B52984(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_B52984(&SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    sub_B52984(&SingletonTemplate_MissionNotifyManager__TypeInfo);
    sub_B52984(&TutorialFlag_TypeInfo);
    sub_B52984(&StringLiteral_13631/*"TUTORIAL_SUPPORT_QUEST_ID"*/);
    sub_B52984(&StringLiteral_13632/*"TUTORIAL_SUPPORT_QUEST_PHASE"*/);
    sub_B52984(&StringLiteral_6419/*"FOLLOWER_SELECT_EXPLANATION2"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42AEA13 = 1;
  }
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  titleInfo = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !titleInfo )
    goto LABEL_114;
  if ( PartyOrganizationUtility__ExistsTemporaryPartyInfo((PartyOrganizationUtility_o *)titleInfo, 0LL) )
  {
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    titleInfo = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !titleInfo )
      goto LABEL_114;
    mDispInfos = titleInfo[1].fields.mDispInfos;
    if ( !mDispInfos )
      goto LABEL_114;
    monitor = (struct BattleSetupInfo_o *)mDispInfos[1].monitor;
    this->fields.battleSetupInfo = monitor;
    p_battleSetupInfo = &this->fields.battleSetupInfo;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.battleSetupInfo,
      (System_Int32_array **)monitor,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
    }
    titleInfo = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !titleInfo )
      goto LABEL_114;
    if ( !MissionNotifyManager__IsPause(titleInfo, 0LL) )
    {
      if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
      }
      titleInfo = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
      if ( !titleInfo )
        goto LABEL_114;
      MissionNotifyManager__StartPause(titleInfo, 0LL);
    }
  }
  else
  {
    if ( data
      && (v23 = *(&BattleSetupInfo_TypeInfo->_2.bitflags2 + 1), *(&data->klass->_2.bitflags2 + 1) >= (unsigned int)v23) )
    {
      v24 = (BattleSetupInfo_c *)data->klass->_2.typeHierarchy[v23 - 1] == BattleSetupInfo_TypeInfo
          ? (struct BattleSetupInfo_o *)data
          : 0LL;
    }
    else
    {
      v24 = 0LL;
    }
    this->fields.battleSetupInfo = v24;
    p_battleSetupInfo = &this->fields.battleSetupInfo;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.battleSetupInfo,
      (System_Int32_array **)v24,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
  }
  if ( !*p_battleSetupInfo )
  {
    FollowerRootComponent__ReturnQuestMenu(this, v22);
    return;
  }
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  RandomLimitCountManager__set_EnableRandomLimitCount(1, 0LL);
  FollowerRootComponent__PlayBGM(this, v25);
  partyOrganizationAtlas = (System_Int32_array **)this->fields.partyOrganizationAtlas;
  v33 = FollowerRootComponent_TypeInfo;
  if ( (BYTE3(FollowerRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FollowerRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerRootComponent_TypeInfo);
    v33 = FollowerRootComponent_TypeInfo;
  }
  static_fields = v33->static_fields;
  static_fields->partyOrganizationAtlasCache = (struct UIAtlas_o *)partyOrganizationAtlas;
  sub_B52920(
    (BattleServantConfConponent_o *)&static_fields->partyOrganizationAtlasCache,
    partyOrganizationAtlas,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  titleInfo = (MissionNotifyManager_o *)this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_114;
  TitleInfoControl__setTitleInfo_18337368((TitleInfoControl_o *)titleInfo, this->fields.myFSM, 3, 63, 0LL);
  titleInfo = (MissionNotifyManager_o *)this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_114;
  TitleInfoControl__setBackBtnEnable((TitleInfoControl_o *)titleInfo, 1, 0LL);
  titleInfo = (MissionNotifyManager_o *)this->fields.operationItemListViewManager;
  if ( !titleInfo )
    goto LABEL_114;
  FollowerSelectItemListViewManager__DestroyList_30717344(
    (FollowerSelectItemListViewManager_o *)titleInfo,
    this->fields.battleSetupInfo,
    0LL);
  infomationLabel = this->fields.infomationLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  titleInfo = (MissionNotifyManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6419/*"FOLLOWER_SELECT_EXPLANATION2"*/, 0LL);
  if ( !infomationLabel )
    goto LABEL_114;
  UILabel__set_text(infomationLabel, (System_String_o *)titleInfo, 0LL);
  refreshButtonBase = this->fields.refreshButtonBase;
  titleInfo = (MissionNotifyManager_o *)BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  }
  if ( !refreshButtonBase )
    goto LABEL_114;
  UnityEngine_GameObject__SetActive(
    refreshButtonBase,
    BalanceConfig_TypeInfo->static_fields->FollowerRefreshRestTime >= 0,
    0LL);
  titleInfo = (MissionNotifyManager_o *)this->fields.battleSetupInfo;
  *(_QWORD *)&this->fields.tutorialMode = 0LL;
  this->fields.selectItemNum = -1;
  this->fields.isForceFadeOut = 0;
  if ( !titleInfo )
    goto LABEL_114;
  v37 = titleInfo[1].fields.mMissionNotifyComps || LODWORD(titleInfo[1].fields.mNoticeNumberComp) != 0;
  if ( (v37 & BYTE1(titleInfo->fields.noDisplayMissionCondTypeHashSet)) != 0
    && (BattleSetupInfo__SetRestriction((BattleSetupInfo_o *)titleInfo, 1, 0LL),
        (titleInfo = (MissionNotifyManager_o *)*p_battleSetupInfo) == 0LL)
    || (v38 = titleInfo[1].monitor) == 0LL )
  {
LABEL_114:
    sub_B52A5C(titleInfo, v6);
  }
  if ( v38[378] )
  {
LABEL_57:
    FollowerRootComponent__StartBattleSetupMenu(this, v6);
    return;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_29217932(102, 0LL) )
  {
    titleInfo = (MissionNotifyManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !titleInfo )
      goto LABEL_114;
    titleInfo = (MissionNotifyManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            (DataManager_o *)titleInfo,
                                            (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ConstantMaster___);
    if ( !titleInfo )
      goto LABEL_114;
    v39 = (ConstantMaster_o *)titleInfo;
    titleInfo = (MissionNotifyManager_o *)ConstantMaster__GetValue(
                                            (ConstantMaster_o *)titleInfo,
                                            (System_String_o *)StringLiteral_13631/*"TUTORIAL_SUPPORT_QUEST_ID"*/,
                                            0LL);
    v40 = *p_battleSetupInfo;
    if ( !*p_battleSetupInfo )
      goto LABEL_114;
    if ( v40->fields.questId == (_DWORD)titleInfo )
    {
      titleInfo = (MissionNotifyManager_o *)ConstantMaster__GetValue(v39, (System_String_o *)StringLiteral_13632/*"TUTORIAL_SUPPORT_QUEST_PHASE"*/, 0LL);
      v40 = *p_battleSetupInfo;
      if ( !*p_battleSetupInfo )
        goto LABEL_114;
      if ( v40->fields.questPhase == (_DWORD)titleInfo )
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
      goto LABEL_57;
    titleInfo = (MissionNotifyManager_o *)this->fields.infomationLabel;
    *(_QWORD *)&this->fields.tutorialMode = 0x100000002LL;
    if ( !titleInfo )
      goto LABEL_114;
    UILabel__set_text((UILabel_o *)titleInfo, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    v40 = *p_battleSetupInfo;
    if ( !*p_battleSetupInfo )
      goto LABEL_114;
  }
  questRestrictionInfo = v40->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    goto LABEL_114;
  if ( !questRestrictionInfo->fields.isNotTransitionSupportList
    && !questRestrictionInfo->fields.isNpcOnlyBattle
    && !questRestrictionInfo->fields.isFixedMyServantSingle
    && !questRestrictionInfo->fields.isNoSupportBattle )
  {
    titleInfo = (MissionNotifyManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( titleInfo )
    {
      titleInfo = (MissionNotifyManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)titleInfo,
                                              (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
      if ( *p_battleSetupInfo )
      {
        v44 = (QuestPhaseMaster_o *)titleInfo;
        titleInfo = (MissionNotifyManager_o *)BattleSetupInfo__TargetQuestId(*p_battleSetupInfo, 0LL);
        if ( *p_battleSetupInfo )
        {
          if ( v44 )
          {
            titleInfo = (MissionNotifyManager_o *)QuestPhaseMaster__GetEntity(
                                                    v44,
                                                    (int32_t)titleInfo,
                                                    (*p_battleSetupInfo)->fields.questPhase,
                                                    0LL);
            if ( titleInfo && LOBYTE(titleInfo->fields.mNoDispInfos) )
            {
              titleInfo = (MissionNotifyManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !titleInfo )
                goto LABEL_114;
              titleInfo = (MissionNotifyManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                      (DataManager_o *)titleInfo,
                                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
              if ( !*p_battleSetupInfo )
                goto LABEL_114;
              v45 = (NpcFollowerMaster_o *)titleInfo;
              titleInfo = (MissionNotifyManager_o *)BattleSetupInfo__TargetQuestId(*p_battleSetupInfo, 0LL);
              if ( !*p_battleSetupInfo )
                goto LABEL_114;
              if ( !v45 )
                goto LABEL_114;
              titleInfo = (MissionNotifyManager_o *)NpcFollowerMaster__GetQuestFollowerList(
                                                      v45,
                                                      (int32_t)titleInfo,
                                                      (*p_battleSetupInfo)->fields.questPhase,
                                                      0LL);
              if ( !titleInfo )
                goto LABEL_114;
              if ( !titleInfo->fields.mNoDispInfos )
              {
                *(_QWORD *)&this->fields.tutorialMode = 0x100000001LL;
                goto LABEL_88;
              }
            }
            if ( *p_battleSetupInfo )
            {
              titleInfo = (MissionNotifyManager_o *)(*p_battleSetupInfo)->fields.questRestrictionInfo;
              if ( titleInfo )
              {
                if ( QuestRestrictionInfo__IsMyServantOrNpcRestriction((QuestRestrictionInfo_o *)titleInfo, 0LL) )
                  this->fields.tutorialMode = 4;
                FollowerRootComponent__UpdateDeckInfomation(this, v46);
                battleSetupInfo = this->fields.battleSetupInfo;
                if ( battleSetupInfo )
                {
                  titleInfo = (MissionNotifyManager_o *)this->fields.followerQuestInfomationDraw;
                  if ( titleInfo )
                  {
                    FollowerQuestInfomationDraw__SetInfomation(
                      (FollowerQuestInfomationDraw_o *)titleInfo,
                      battleSetupInfo->fields.questRestrictionInfo,
                      0,
                      0LL,
                      v47);
                    titleInfo = (MissionNotifyManager_o *)this->fields.backSkinSprite;
                    if ( titleInfo )
                    {
                      titleInfo = (MissionNotifyManager_o *)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)titleInfo,
                                                              0LL);
                      if ( titleInfo )
                      {
                        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 0, 0LL);
                        goto LABEL_83;
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
    goto LABEL_114;
  }
  this->fields.tutorialState = 1;
  titleInfo = (MissionNotifyManager_o *)v40->fields.questRestrictionInfo;
  if ( !titleInfo )
    goto LABEL_114;
  if ( QuestRestrictionInfo__IsMyServantOrNpcRestriction((QuestRestrictionInfo_o *)titleInfo, 0LL) )
  {
    this->fields.isForceFadeOut = 1;
    this->fields.tutorialMode = 4;
LABEL_83:
    v42 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(v42, (Il2CppObject *)this, Method_FollowerRootComponent_EndLoadCommonBg__, 0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__LoadUISkin(v42, 2, 1, 0LL);
    return;
  }
  this->fields.tutorialMode = 1;
LABEL_88:
  v43 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(
    v43,
    (Il2CppObject *)this,
    Method_FollowerRootComponent_EndLoadPartyOrganizationAtlasSimple__,
    0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadPartyOrganizationAtlas(v43, 1, 0LL);
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
    sub_B52A5C(this, type);
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
  Il2CppObject *v1; // x19
  struct FollowerRootComponent___c_StaticFields *static_fields; // x0

  if ( (byte_42ACE19 & 1) == 0 )
  {
    sub_B52984(&FollowerRootComponent___c_TypeInfo);
    byte_42ACE19 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(FollowerRootComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = FollowerRootComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct FollowerRootComponent___c_o *)v1;
  sub_B52920(static_fields);
}


void __fastcall FollowerRootComponent___c___ctor(FollowerRootComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall FollowerRootComponent___c___Init_b__47_0(FollowerRootComponent___c_o *this, const MethodInfo *method)
{
  PartyOrganizationUtility_c *v2; // x0
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_42ACE1A & 1) == 0 )
  {
    sub_B52984(&PartyOrganizationUtility_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42ACE1A = 1;
  }
  v2 = PartyOrganizationUtility_TypeInfo;
  if ( (BYTE3(PartyOrganizationUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
    v2 = PartyOrganizationUtility_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(v2->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v4);
  CommonUI__CloseNotificationDialog(Instance, 0LL);
}


void __fastcall FollowerRootComponent___c___OnSelectFollowerItem_b__62_0(
        FollowerRootComponent___c_o *this,
        const MethodInfo *method)
{
  PartyOrganizationUtility_c *v2; // x0
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_42ACE1B & 1) == 0 )
  {
    sub_B52984(&PartyOrganizationUtility_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42ACE1B = 1;
  }
  v2 = PartyOrganizationUtility_TypeInfo;
  if ( (BYTE3(PartyOrganizationUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
    v2 = PartyOrganizationUtility_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(v2->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v4);
  CommonUI__CloseNotificationDialog(Instance, 0LL);
}