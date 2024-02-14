void __fastcall FollowerRootComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  FollowerRootComponent_c *v2; // x8

  if ( (byte_42132BC & 1) == 0 )
  {
    sub_B0D8A4(&FollowerRootComponent_TypeInfo, v1);
    byte_42132BC = 1;
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

  if ( (byte_42132BB & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_1/*""*/, method);
    byte_42132BB = 1;
  }
  v9 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.backupBgmName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.backupBgmName, v9, v2, v3, v4, v5, v6, v7);
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0LL);
}


void __fastcall FollowerRootComponent__CallbackFollowerList(
        FollowerRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_42132A2 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_11106/*"REQUEST_OK"*/, result);
    byte_42132A2 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_B0D97C(0LL);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_11106/*"REQUEST_OK"*/, 0LL);
}


void __fastcall FollowerRootComponent__CallbackRefresh(
        FollowerRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x0
  FollowerSelectItemListViewManager_o *v7; // x20
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  FollowerSelectItemListViewManager_o *v9; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  FollowerSelectItemListViewManager_CallbackFunc_o *v12; // x21

  if ( (byte_42132B2 & 1) == 0 )
  {
    sub_B0D8A4(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, result);
    sub_B0D8A4(&Method_FollowerRootComponent_OnSelectFollowerItem__, v4);
    sub_B0D8A4(&RandomLimitCountManager_TypeInfo, v5);
    byte_42132B2 = 1;
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
  v7 = this->fields.operationItemListViewManager;
  operationItemListViewManager = (FollowerSelectItemListViewManager_o *)BattleSetupInfo__TargetQuestId(
                                                                          (BattleSetupInfo_o *)operationItemListViewManager,
                                                                          0LL);
  battleSetupInfo = this->fields.battleSetupInfo;
  if ( !battleSetupInfo
    || !v7
    || (FollowerSelectItemListViewManager__CreateList(
          v7,
          (int32_t)operationItemListViewManager,
          battleSetupInfo->fields.questPhase,
          this->fields.friendPointUpVal,
          this->fields.friendPointUpMaxVal,
          this->fields.friendPointCampaignEntityList,
          battleSetupInfo->fields.questRestrictionInfo,
          0LL),
        v9 = this->fields.operationItemListViewManager,
        v12 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_B0D974(
                                                                    FollowerSelectItemListViewManager_CallbackFunc_TypeInfo,
                                                                    v10,
                                                                    v11),
        FollowerSelectItemListViewManager_CallbackFunc___ctor(
          v12,
          (Il2CppObject *)this,
          Method_FollowerRootComponent_OnSelectFollowerItem__,
          0LL),
        !v9)
    || (FollowerSelectItemListViewManager__SetMode(v9, 2, v12, 0LL),
        (operationItemListViewManager = (FollowerSelectItemListViewManager_o *)this->fields.commonConfirmDialog) == 0LL) )
  {
LABEL_13:
    sub_B0D97C(operationItemListViewManager);
  }
  CommonConfirmDialog__Close((CommonConfirmDialog_o *)operationItemListViewManager, 0LL);
}


void __fastcall FollowerRootComponent__EndCloseShowServant(FollowerRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v6; // x21
  __int64 v7; // x0

  if ( (byte_42132A7 & 1) == 0 )
  {
    sub_B0D8A4(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_B0D8A4(&Method_FollowerRootComponent_OnSelectFollowerItem__, v4);
    byte_42132A7 = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v6 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_B0D974(
                                                             FollowerSelectItemListViewManager_CallbackFunc_TypeInfo,
                                                             method,
                                                             v2);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    Method_FollowerRootComponent_OnSelectFollowerItem__,
    0LL);
  if ( !operationItemListViewManager )
    sub_B0D97C(v7);
  FollowerSelectItemListViewManager__SetMode(operationItemListViewManager, 2, v6, 0LL);
}


void __fastcall FollowerRootComponent__EndCloseShowServantEquip(
        FollowerRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v6; // x21
  __int64 v7; // x0

  if ( (byte_42132AA & 1) == 0 )
  {
    sub_B0D8A4(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_B0D8A4(&Method_FollowerRootComponent_OnSelectFollowerItem__, v4);
    byte_42132AA = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v6 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_B0D974(
                                                             FollowerSelectItemListViewManager_CallbackFunc_TypeInfo,
                                                             method,
                                                             v2);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    Method_FollowerRootComponent_OnSelectFollowerItem__,
    0LL);
  if ( !operationItemListViewManager )
    sub_B0D97C(v7);
  FollowerSelectItemListViewManager__SetMode(operationItemListViewManager, 2, v6, 0LL);
}


void __fastcall FollowerRootComponent__EndCloseTutorialArrow(FollowerRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *tutorialMaskBase2; // x0

  if ( (byte_42132B4 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_8751/*"MENU_SELECT_ITEM"*/, method);
    byte_42132B4 = 1;
  }
  tutorialMaskBase2 = this->fields.tutorialMaskBase2;
  if ( !tutorialMaskBase2
    || (UnityEngine_GameObject__SetActive(tutorialMaskBase2, 0, 0LL),
        tutorialMaskBase2 = (UnityEngine_GameObject_o *)this->fields.myFSM,
        this->fields.state = 3,
        !tutorialMaskBase2) )
  {
    sub_B0D97C(tutorialMaskBase2);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)tutorialMaskBase2, (System_String_o *)StringLiteral_8751/*"MENU_SELECT_ITEM"*/, 0LL);
}


void __fastcall FollowerRootComponent__EndLoadCommonBg(FollowerRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Component_o *backSkinSprite; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  System_Action_o *v8; // x20

  if ( (byte_421329A & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&AtlasManager_TypeInfo, v3);
    sub_B0D8A4(&Method_FollowerRootComponent_EndLoadOutGameAtlas__, v4);
    byte_421329A = 1;
  }
  backSkinSprite = (UnityEngine_Component_o *)this->fields.backSkinSprite;
  if ( !backSkinSprite
    || (backSkinSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(backSkinSprite, 0LL)) == 0LL )
  {
    sub_B0D97C(backSkinSprite);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)backSkinSprite, 1, 0LL);
  v8 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v6, v7);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_FollowerRootComponent_EndLoadOutGameAtlas__, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadOutGameAtlas(v8, 0LL);
}


void __fastcall FollowerRootComponent__EndLoadEventAtlas(FollowerRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  System_Action_o *v6; // x20

  if ( (byte_421329C & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&AtlasManager_TypeInfo, v4);
    sub_B0D8A4(&Method_FollowerRootComponent_EndLoadPartyOrganizationAtlas__, v5);
    byte_421329C = 1;
  }
  v6 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, method, v2);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_FollowerRootComponent_EndLoadPartyOrganizationAtlas__, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadPartyOrganizationAtlas(v6, 1, 0LL);
}


void __fastcall FollowerRootComponent__EndLoadOutGameAtlas(FollowerRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  System_Action_o *v6; // x20

  if ( (byte_421329B & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&AtlasManager_TypeInfo, v4);
    sub_B0D8A4(&Method_FollowerRootComponent_EndLoadEventAtlas__, v5);
    byte_421329B = 1;
  }
  v6 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, method, v2);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_FollowerRootComponent_EndLoadEventAtlas__, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventAtlas(v6, 1, 0LL);
}


void __fastcall FollowerRootComponent__EndLoadPartyOrganizationAtlas(
        FollowerRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x0
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1

  if ( (byte_421329D & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_B0D8A4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v3);
    sub_B0D8A4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v4);
    byte_421329D = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    goto LABEL_18;
  FollowerSelectItemListViewManager__AdjustButton(operationItemListViewManager, 0LL);
  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    goto LABEL_18;
  FollowerSelectItemListViewManager__SetClassBoardInfo(operationItemListViewManager, 0LL);
  SceneRootComponent__beginStartUp_16655688((SceneRootComponent_o *)this, 0LL);
  if ( this->fields.isForceFadeOut )
  {
    this->fields.isForceFadeOut = 0;
    operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !operationItemListViewManager )
      goto LABEL_18;
    CommonUI__maskFadeInit((CommonUI_o *)operationItemListViewManager, 0LL);
    operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !operationItemListViewManager )
      goto LABEL_18;
    CommonUI__maskFadeout((CommonUI_o *)operationItemListViewManager, 1, 0.0, 0LL, 0LL);
    FollowerRootComponent__StartBattleSetupMenu(this, v6);
  }
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !operationItemListViewManager )
LABEL_18:
    sub_B0D97C(operationItemListViewManager);
  if ( PartyOrganizationUtility__ExistsTemporaryPartyInfo(
         (PartyOrganizationUtility_o *)operationItemListViewManager,
         0LL) )
  {
    operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( operationItemListViewManager )
    {
      CommonUI__maskFadeInit((CommonUI_o *)operationItemListViewManager, 0LL);
      operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( operationItemListViewManager )
      {
        CommonUI__maskFadeout((CommonUI_o *)operationItemListViewManager, 1, 0.0, 0LL, 0LL);
        this->fields.state = 0;
        FollowerRootComponent__Init(this, v7);
        return;
      }
    }
    goto LABEL_18;
  }
}


void __fastcall FollowerRootComponent__EndOpenTutorialArrow(FollowerRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v6; // x21
  __int64 v7; // x0

  if ( (byte_42132B9 & 1) == 0 )
  {
    sub_B0D8A4(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_B0D8A4(&Method_FollowerRootComponent_OnSelectFollowerItem__, v4);
    byte_42132B9 = 1;
  }
  this->fields.state = 3;
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v6 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_B0D974(
                                                             FollowerSelectItemListViewManager_CallbackFunc_TypeInfo,
                                                             method,
                                                             v2);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    Method_FollowerRootComponent_OnSelectFollowerItem__,
    0LL);
  if ( !operationItemListViewManager )
    sub_B0D97C(v7);
  FollowerSelectItemListViewManager__SetMode(operationItemListViewManager, 4, v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerRootComponent__EndRefreshConfirm(
        FollowerRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  FollowerRootComponent_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  NetworkManager_ResultCallbackFunc_o *v13; // x20
  FollowerListRequest_o *v14; // x20
  const MethodInfo *v15; // x4
  struct BattleSetupInfo_o *v16; // x8
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v18; // x21

  v4 = this;
  if ( (byte_42132B1 & 1) == 0 )
  {
    sub_B0D8A4(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, isDecide);
    sub_B0D8A4(&Method_FollowerRootComponent_CallbackRefresh__, v5);
    sub_B0D8A4(&Method_FollowerRootComponent_OnSelectFollowerItem__, v6);
    sub_B0D8A4(&Method_NetworkManager_getRequest_FollowerListRequest___, v7);
    sub_B0D8A4(&NetworkManager_TypeInfo, v8);
    sub_B0D8A4(&NetworkManager_ResultCallbackFunc_TypeInfo, v9);
    sub_B0D8A4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v10);
    this = (FollowerRootComponent_o *)sub_B0D8A4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v11);
    byte_42132B1 = 1;
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
      this = (FollowerRootComponent_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !this )
        goto LABEL_22;
      LOBYTE(this->fields.operationItemListViewManager) = 1;
    }
    v13 = (NetworkManager_ResultCallbackFunc_o *)sub_B0D974(
                                                   NetworkManager_ResultCallbackFunc_TypeInfo,
                                                   isDecide,
                                                   method);
    NetworkManager_ResultCallbackFunc___ctor(
      v13,
      (Il2CppObject *)v4,
      Method_FollowerRootComponent_CallbackRefresh__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    this = (FollowerRootComponent_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                        v13,
                                        (const MethodInfo_2049D98 *)Method_NetworkManager_getRequest_FollowerListRequest___);
    if ( v4->fields.battleSetupInfo )
    {
      v14 = (FollowerListRequest_o *)this;
      this = (FollowerRootComponent_o *)BattleSetupInfo__TargetQuestId(v4->fields.battleSetupInfo, 0LL);
      v16 = v4->fields.battleSetupInfo;
      if ( v16 )
      {
        if ( v14 )
        {
          FollowerListRequest__beginRequest(v14, 1, (int32_t)this, v16->fields.questPhase, v15);
          return;
        }
      }
    }
LABEL_22:
    sub_B0D97C(this);
  }
  operationItemListViewManager = v4->fields.operationItemListViewManager;
  v18 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_B0D974(
                                                              FollowerSelectItemListViewManager_CallbackFunc_TypeInfo,
                                                              isDecide,
                                                              method);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v18,
    (Il2CppObject *)v4,
    Method_FollowerRootComponent_OnSelectFollowerItem__,
    0LL);
  if ( !operationItemListViewManager )
    goto LABEL_22;
  FollowerSelectItemListViewManager__SetMode(operationItemListViewManager, 2, v18, 0LL);
  this = (FollowerRootComponent_o *)v4->fields.commonConfirmDialog;
  if ( !this )
    goto LABEL_22;
  CommonConfirmDialog__Close((CommonConfirmDialog_o *)this, 0LL);
}


void __fastcall FollowerRootComponent__EndRefreshRest(FollowerRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v6; // x21
  __int64 v7; // x0

  if ( (byte_42132B3 & 1) == 0 )
  {
    sub_B0D8A4(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_B0D8A4(&Method_FollowerRootComponent_OnSelectFollowerItem__, v4);
    byte_42132B3 = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v6 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_B0D974(
                                                             FollowerSelectItemListViewManager_CallbackFunc_TypeInfo,
                                                             method,
                                                             v2);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    Method_FollowerRootComponent_OnSelectFollowerItem__,
    0LL);
  if ( !operationItemListViewManager )
    sub_B0D97C(v7);
  FollowerSelectItemListViewManager__SetMode(operationItemListViewManager, 2, v6, 0LL);
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
  System_Action_o *v10; // x21

  if ( (byte_42132A6 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, isDecide);
    sub_B0D8A4(&Method_FollowerRootComponent_EndCloseShowServant__, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_42132A6 = 1;
  }
  operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager
    || (ListViewManager__SetScrollView(
          operationItemListViewManager,
          this->fields.openScroll,
          this->fields.openOffset,
          0LL),
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v10 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v8, v9),
        System_Action___ctor(v10, (Il2CppObject *)this, Method_FollowerRootComponent_EndCloseShowServant__, 0LL),
        !Instance) )
  {
    sub_B0D97C(operationItemListViewManager);
  }
  CommonUI__CloseServantStatusDialog(Instance, v10, 0LL);
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
  System_Action_o *v10; // x21

  if ( (byte_42132A9 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, isDecide);
    sub_B0D8A4(&Method_FollowerRootComponent_EndCloseShowServantEquip__, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_42132A9 = 1;
  }
  operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager
    || (ListViewManager__SetScrollView(
          operationItemListViewManager,
          this->fields.openScroll,
          this->fields.openOffset,
          0LL),
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v10 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v8, v9),
        System_Action___ctor(v10, (Il2CppObject *)this, Method_FollowerRootComponent_EndCloseShowServantEquip__, 0LL),
        !Instance) )
  {
    sub_B0D97C(operationItemListViewManager);
  }
  CommonUI__CloseServantEquipStatusDialog(Instance, v10, 0LL);
}


void __fastcall FollowerRootComponent__EndTutorialFollowerCommonGuide(
        FollowerRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v6; // x21
  __int64 v7; // x0

  if ( (byte_42132BA & 1) == 0 )
  {
    sub_B0D8A4(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_B0D8A4(&Method_FollowerRootComponent_OnSelectFollowerItem__, v4);
    byte_42132BA = 1;
  }
  this->fields.state = 3;
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v6 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_B0D974(
                                                             FollowerSelectItemListViewManager_CallbackFunc_TypeInfo,
                                                             method,
                                                             v2);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    Method_FollowerRootComponent_OnSelectFollowerItem__,
    0LL);
  if ( !operationItemListViewManager )
    sub_B0D97C(v7);
  FollowerSelectItemListViewManager__SetMode(operationItemListViewManager, 2, v6, 0LL);
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
  FollowerSelectItemListViewManager_CallbackFunc_o *v8; // x21

  if ( (byte_42132B7 & 1) == 0 )
  {
    sub_B0D8A4(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_B0D8A4(&Method_FollowerRootComponent_OnSelectFollowerItem__, v3);
    byte_42132B7 = 1;
  }
  titleInfo = this->fields.titleInfo;
  this->fields.state = 3;
  if ( !titleInfo
    || (TitleInfoControl__setBackBtnEnable(titleInfo, 0, 0LL),
        operationItemListViewManager = this->fields.operationItemListViewManager,
        v8 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_B0D974(
                                                                   FollowerSelectItemListViewManager_CallbackFunc_TypeInfo,
                                                                   v6,
                                                                   v7),
        FollowerSelectItemListViewManager_CallbackFunc___ctor(
          v8,
          (Il2CppObject *)this,
          Method_FollowerRootComponent_OnSelectFollowerItem__,
          0LL),
        !operationItemListViewManager) )
  {
    sub_B0D97C(titleInfo);
  }
  FollowerSelectItemListViewManager__SetMode(operationItemListViewManager, 2, v8, 0LL);
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
  System_Action_o *v24; // x21
  MethodInfo v25; // [xsp+0h] [xbp-50h] BYREF
  UnityEngine_Vector2_o v26; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v27; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v28; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v29; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_42132B8 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&FSUtility_TypeInfo, v3);
    sub_B0D8A4(&Method_FollowerRootComponent_EndOpenTutorialArrow__, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_42132B8 = 1;
  }
  v25.methodPointer = 0LL;
  v25.invoker_method = 0LL;
  tutorialMaskBase2 = this->fields.tutorialMaskBase2;
  if ( !tutorialMaskBase2 )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(tutorialMaskBase2, 1, 0LL);
  v27.fields.m_XMin = -500.0;
  v27.fields.m_Width = 1000.0;
  v27.fields.m_Height = 150.0;
  v27.fields.m_YMin = -14.0;
  UnityEngine_Rect___ctor(v27, v7, v8, v9, v10, &v25);
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  if ( FSUtility__IsUnderVista(0LL) )
  {
    v15 = -20.0;
  }
  else
  {
    x = UnityEngine_Rect__get_x(*(UnityEngine_Rect_o *)&v11, &v25);
    v28.fields.m_YMin = 8.0;
    v28.fields.m_XMin = x + 8.0;
    UnityEngine_Rect__set_x(v28, v17, &v25);
    v15 = -12.0;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  methodPointer = v25.methodPointer;
  invoker_method = v25.invoker_method;
  v21 = (CommonUI_o *)Instance;
  v24 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v22, v23);
  System_Action___ctor(v24, (Il2CppObject *)this, Method_FollowerRootComponent_EndOpenTutorialArrow__, 0LL);
  if ( !v21 )
LABEL_12:
    sub_B0D97C(tutorialMaskBase2);
  v26.fields.y = 100.0;
  v26.fields.x = v15;
  *(_QWORD *)&v29.fields.m_XMin = methodPointer;
  *(_QWORD *)&v29.fields.m_Width = invoker_method;
  CommonUI__OpenTutorialArrowMark(v21, v26, 0.0, v29, v24, 0LL);
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
  FollowerSelectItemListViewManager_o *v16; // x20
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  __int64 v18; // x1
  __int64 v19; // x2
  PartyOrganizationUtility_c *v20; // x0
  CommonUI_o *Instance; // x20
  __int64 v22; // x1
  __int64 v23; // x2
  System_String_o *v24; // x21
  FollowerRootComponent___c_c *v25; // x8
  struct FollowerRootComponent___c_StaticFields *static_fields; // x9
  System_Action_o *_9__47_0; // x23
  System_String_o *v28; // x22
  Il2CppObject *v29; // x24
  struct FollowerRootComponent___c_StaticFields *v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  FollowerSelectItemListViewManager_o *v37; // x20
  System_Action_o *v38; // x21

  if ( (byte_42132A3 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_FollowerRootComponent_OnMoveEnd__, v3);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v4);
    sub_B0D8A4(&PartyOrganizationUtility_TypeInfo, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B0D8A4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v8);
    sub_B0D8A4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v9);
    sub_B0D8A4(&Method_FollowerRootComponent___c__Init_b__47_0__, v10);
    sub_B0D8A4(&FollowerRootComponent___c_TypeInfo, v11);
    sub_B0D8A4(&StringLiteral_8751/*"MENU_SELECT_ITEM"*/, v12);
    sub_B0D8A4(&StringLiteral_10374/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_EXPIRED"*/, v13);
    sub_B0D8A4(&StringLiteral_1/*""*/, v14);
    byte_42132A3 = 1;
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
    v16 = this->fields.operationItemListViewManager;
    operationItemListViewManager = (UnityEngine_Component_o *)BattleSetupInfo__TargetQuestId(
                                                                (BattleSetupInfo_o *)operationItemListViewManager,
                                                                0LL);
    battleSetupInfo = this->fields.battleSetupInfo;
    if ( !battleSetupInfo )
      goto LABEL_41;
    if ( !v16 )
      goto LABEL_41;
    FollowerSelectItemListViewManager__CreateList(
      v16,
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
      operationItemListViewManager = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
      if ( !operationItemListViewManager )
        goto LABEL_41;
      if ( *((_BYTE *)&operationItemListViewManager[5].fields + 4) )
      {
        v20 = PartyOrganizationUtility_TypeInfo;
        if ( (BYTE3(PartyOrganizationUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
          v20 = PartyOrganizationUtility_TypeInfo;
        }
        if ( UnityEngine_PlayerPrefs__GetInt(v20->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0, 0LL) )
        {
          if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
          }
          operationItemListViewManager = (UnityEngine_Component_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( !operationItemListViewManager )
            goto LABEL_41;
          if ( !PartyOrganizationUtility__IsAvailableFriendshipUpItem(
                  (PartyOrganizationUtility_o *)operationItemListViewManager,
                  0LL) )
          {
            Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            operationItemListViewManager = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                                        (System_String_o *)StringLiteral_10374/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_EXPIRED"*/,
                                                                        0LL);
            v24 = (System_String_o *)operationItemListViewManager;
            v25 = FollowerRootComponent___c_TypeInfo;
            if ( (BYTE3(FollowerRootComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !FollowerRootComponent___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(FollowerRootComponent___c_TypeInfo);
              v25 = FollowerRootComponent___c_TypeInfo;
            }
            static_fields = v25->static_fields;
            _9__47_0 = static_fields->__9__47_0;
            v28 = (System_String_o *)StringLiteral_1/*""*/;
            if ( !_9__47_0 )
            {
              if ( (BYTE3(v25->vtable._0_Equals.methodPtr) & 4) != 0 && !v25->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v25);
                static_fields = FollowerRootComponent___c_TypeInfo->static_fields;
              }
              v29 = (Il2CppObject *)static_fields->__9;
              _9__47_0 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v22, v23);
              System_Action___ctor(_9__47_0, v29, Method_FollowerRootComponent___c__Init_b__47_0__, 0LL);
              v30 = FollowerRootComponent___c_TypeInfo->static_fields;
              v30->__9__47_0 = _9__47_0;
              sub_B0D840(
                (BattleServantConfConponent_o *)&v30->__9__47_0,
                (System_Int32_array **)_9__47_0,
                v31,
                v32,
                v33,
                v34,
                v35,
                v36);
            }
            if ( !Instance )
              goto LABEL_41;
            CommonUI__OpenNotificationDialog(Instance, v28, v24, _9__47_0, -1, 0, 0, 0, 0, 0, 0, 0, 0LL, 0LL);
          }
        }
      }
      this->fields.state = 2;
      v37 = this->fields.operationItemListViewManager;
      v38 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v18, v19);
      System_Action___ctor(v38, (Il2CppObject *)this, Method_FollowerRootComponent_OnMoveEnd__, 0LL);
      if ( v37 )
      {
        FollowerSelectItemListViewManager__SetMode_29690840(v37, 1, v38, 0LL);
        return;
      }
LABEL_41:
      sub_B0D97C(operationItemListViewManager);
    }
    operationItemListViewManager = (UnityEngine_Component_o *)this->fields.myFSM;
    this->fields.selectItemNum = -1;
    if ( !operationItemListViewManager )
      goto LABEL_41;
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)operationItemListViewManager, (System_String_o *)StringLiteral_8751/*"MENU_SELECT_ITEM"*/, 0LL);
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
  void *Instance; // x0
  SceneRootComponent_o *StackedRootComponent; // x0
  __int64 v27; // x10
  UnityEngine_Component_o *v28; // x20
  FollowerRootComponent_o *v29; // x0
  const MethodInfo *v30; // x1
  UnityEngine_Component_c *klass; // x8
  int v32; // w8
  void *v33; // x19
  unsigned int v34; // w20
  const MethodInfo *v35; // x1
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  __int64 *v37; // x8
  _QWORD *v38; // x0
  System_Reflection_MethodBase_o *v39; // x0
  TerminalPramsManager_c *v40; // x0
  __int64 *v41; // x8
  System_String_o *v42; // x20
  System_String_o *v43; // x21
  CommonUI_o *v44; // x22
  System_String_o *v45; // x23
  System_String_o *v46; // x24
  __int64 v47; // x1
  __int64 v48; // x2
  CommonConfirmDialog_ClickDelegate_o *v49; // x25
  __int64 v50; // x0

  if ( (byte_42132B5 & 1) == 0 )
  {
    sub_B0D8A4(&BattleRootComponent_TypeInfo, method);
    sub_B0D8A4(&CommonConfirmDialog_ClickDelegate_TypeInfo, v3);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponentsInChildren_Camera___, v4);
    sub_B0D8A4(&Method_FollowerRootComponent_OnClickBack__, v5);
    sub_B0D8A4(&Method_FollowerRootComponent__OnClickBack_b__67_0__, v6);
    sub_B0D8A4(&FollowerRootComponent_TypeInfo, v7);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v8);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v9);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v10);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v11);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    sub_B0D8A4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v13);
    sub_B0D8A4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v14);
    sub_B0D8A4(&SoundManager_TypeInfo, v15);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v16);
    sub_B0D8A4(&StringLiteral_6392/*"FOLLOWER_SELECT_BACK_TO_QUEST_NO_AP_CONSUME_AP0"*/, v17);
    sub_B0D8A4(&StringLiteral_3055/*"CLICK_BACK"*/, v18);
    sub_B0D8A4(&StringLiteral_6391/*"FOLLOWER_SELECT_BACK_TO_QUEST_NO_AP_CONSUME"*/, v19);
    sub_B0D8A4(&StringLiteral_6390/*"FOLLOWER_SELECT_BACK_TITLE"*/, v20);
    sub_B0D8A4(&StringLiteral_3277/*"COMMON_CONFIRM_NO"*/, v21);
    sub_B0D8A4(&StringLiteral_3280/*"COMMON_CONFIRM_YES"*/, v22);
    sub_B0D8A4(&StringLiteral_1/*""*/, v23);
    sub_B0D8A4(&StringLiteral_3056/*"CLICK_BACK_BATTLE_SETUP"*/, v24);
    byte_42132B5 = 1;
  }
  if ( this->fields.state == 3 && !this->fields.tutorialState )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( !Instance )
      goto LABEL_80;
    if ( !*((_BYTE *)Instance + 140) )
      goto LABEL_36;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_80;
    StackedRootComponent = AvalonSceneManager__GetStackedRootComponent((AvalonSceneManager_o *)Instance, 0LL);
    if ( StackedRootComponent
      && (v27 = *(&BattleRootComponent_TypeInfo->_2.bitflags2 + 1),
          *(&StackedRootComponent->klass->_2.bitflags2 + 1) >= (unsigned int)v27) )
    {
      if ( (BattleRootComponent_c *)StackedRootComponent->klass->_2.typeHierarchy[v27 - 1] == BattleRootComponent_TypeInfo )
        v28 = (UnityEngine_Component_o *)StackedRootComponent;
      else
        v28 = 0LL;
    }
    else
    {
      v28 = 0LL;
    }
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v28, 0LL, 0LL) )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(1, 0LL);
      this->fields.state = 4;
      FollowerRootComponent__QuestHintDialogResetTemporarilyId(v29, v30);
      if ( v28 )
      {
        Instance = UnityEngine_Component__get_gameObject(v28, 0LL);
        if ( Instance )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
          klass = v28[3].klass;
          if ( klass )
          {
            Instance = klass[1]._1.parent;
            if ( Instance )
            {
              BattleResultComponent__EndResult((BattleResultComponent_o *)Instance, 0LL);
              Instance = this->fields.myFSM;
              if ( Instance )
              {
                PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3055/*"CLICK_BACK"*/, 0LL);
                Instance = UnityEngine_Component__get_transform(v28, 0LL);
                if ( Instance )
                {
                  Instance = UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                               (UnityEngine_Component_o *)Instance,
                               (const MethodInfo_170EAAC *)Method_UnityEngine_Component_GetComponentsInChildren_Camera___);
                  if ( Instance )
                  {
                    v32 = *((_DWORD *)Instance + 6);
                    v33 = Instance;
                    if ( v32 < 1 )
                      return;
                    v34 = 0;
                    while ( 1 )
                    {
                      if ( v34 >= v32 )
                      {
                        v50 = sub_B0D9A8(Instance);
                        sub_B0D948(v50, 0LL);
                      }
                      Instance = (void *)*((_QWORD *)v33 + (int)v34 + 4);
                      if ( !Instance )
                        break;
                      Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
                      if ( !Instance )
                        break;
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
                      v32 = *((_DWORD *)v33 + 6);
                      if ( (int)++v34 >= v32 )
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
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( !Instance )
        goto LABEL_80;
      if ( AvalonSceneManager__IsStackScene((AvalonSceneManager_o *)Instance, 0LL) )
        goto LABEL_84;
      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
      }
      Instance = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_80;
      if ( *((int *)Instance + 12) > 0 )
        goto LABEL_84;
      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
      }
      Instance = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
            v37 = &StringLiteral_3056/*"CLICK_BACK_BATTLE_SETUP"*/;
          }
          else
          {
            FollowerRootComponent__QuestHintDialogResetTemporarilyId((FollowerRootComponent_o *)Instance, v35);
            Instance = this->fields.myFSM;
            if ( !Instance )
              goto LABEL_80;
            v37 = &StringLiteral_3055/*"CLICK_BACK"*/;
          }
          PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v37, 0LL);
          return;
        }
      }
      else
      {
        v38 = Method_FollowerRootComponent_OnClickBack__;
        if ( (*((_BYTE *)Method_FollowerRootComponent_OnClickBack__ + 75) & 2) != 0 )
          v38 = (_QWORD *)sub_B0D8AC(Method_FollowerRootComponent_OnClickBack__);
        v39 = (System_Reflection_MethodBase_o *)sub_B0D888(v38, v38[3]);
        OverwriteAssetSoundName__PlaySystemSe(v39, 1, 0LL);
        v40 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v40 = TerminalPramsManager_TypeInfo;
        }
        if ( v40->static_fields->lastPlayQuestConsumeAp <= 0 )
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v41 = &StringLiteral_6392/*"FOLLOWER_SELECT_BACK_TO_QUEST_NO_AP_CONSUME_AP0"*/;
        }
        else
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v41 = &StringLiteral_6391/*"FOLLOWER_SELECT_BACK_TO_QUEST_NO_AP_CONSUME"*/;
        }
        v42 = LocalizationManager__Get((System_String_o *)*v41, 0LL);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v43 = LocalizationManager__Get((System_String_o *)StringLiteral_6390/*"FOLLOWER_SELECT_BACK_TITLE"*/, 0LL);
        v44 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v45 = LocalizationManager__Get((System_String_o *)StringLiteral_3280/*"COMMON_CONFIRM_YES"*/, 0LL);
        v46 = LocalizationManager__Get((System_String_o *)StringLiteral_3277/*"COMMON_CONFIRM_NO"*/, 0LL);
        v49 = (CommonConfirmDialog_ClickDelegate_o *)sub_B0D974(CommonConfirmDialog_ClickDelegate_TypeInfo, v47, v48);
        CommonConfirmDialog_ClickDelegate___ctor(
          v49,
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
        if ( v44 )
        {
          CommonUI__OpenConfirmDecideDlg(
            v44,
            v43,
            v42,
            v45,
            v46,
            v49,
            *(_DWORD *)(*((_QWORD *)Instance + 23) + 16LL),
            (float)*(int *)(*((_QWORD *)Instance + 23) + 20LL),
            (float)*(int *)(*((_QWORD *)Instance + 23) + 24LL),
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
LABEL_80:
    sub_B0D97C(Instance);
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
  __int64 v12; // x1
  __int64 v13; // x1
  int32_t tutorialMode; // w8
  CommonUI_o *Instance; // x20
  System_String_o *v16; // x21
  __int64 v17; // x1
  __int64 v18; // x2
  System_Action_o *v19; // x0
  __int64 *v20; // x8
  BattleSetupInfo_o *battleSetupInfo; // x0
  int32_t eventId; // w20
  struct BattleSetupInfo_o *v23; // x8
  __int64 v24; // x1
  __int64 v25; // x2
  struct BattleSetupInfo_o *v26; // x8
  int32_t v27; // w20
  System_Action_o *v28; // x21
  struct BattleSetupInfo_o *v29; // x8
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v31; // x21
  const MethodInfo *v32; // x1
  __int64 v33; // x1
  __int64 v34; // x2
  System_Action_o *v35; // x22

  if ( (byte_42132AF & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, v3);
    sub_B0D8A4(&Method_FollowerRootComponent_EndTutorialFollowerCommonGuide__, v4);
    sub_B0D8A4(&Method_FollowerRootComponent_EndTutorialFollowerGuideNotification1__, v5);
    sub_B0D8A4(&Method_FollowerRootComponent_EndTutorialFollowerGuideNotification2__, v6);
    sub_B0D8A4(&Method_FollowerRootComponent_OnSelectFollowerItem__, v7);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v8);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_B0D8A4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v10);
    sub_B0D8A4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v11);
    sub_B0D8A4(&StringLiteral_13554/*"TUTORIAL_MESSAGE_FOLLOWER2"*/, v12);
    sub_B0D8A4(&StringLiteral_13553/*"TUTORIAL_MESSAGE_FOLLOWER1"*/, v13);
    byte_42132AF = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( this->fields.tutorialState == 1 )
    {
      tutorialMode = this->fields.tutorialMode;
      *(_QWORD *)&this->fields.tutorialState = 0x200000002LL;
      if ( tutorialMode == 3 )
      {
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v16 = LocalizationManager__Get((System_String_o *)StringLiteral_13554/*"TUTORIAL_MESSAGE_FOLLOWER2"*/, 0LL);
        v19 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v33, v34);
        v20 = &Method_FollowerRootComponent_EndTutorialFollowerGuideNotification2__;
LABEL_30:
        v35 = v19;
        System_Action___ctor(v19, (Il2CppObject *)this, *v20, 0LL);
        if ( Instance )
        {
          CommonUI__OpenTutorialNotificationDialog(Instance, v16, -1, v35, 0LL);
          return;
        }
LABEL_32:
        sub_B0D97C(battleSetupInfo);
      }
      if ( tutorialMode == 2 )
      {
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v16 = LocalizationManager__Get((System_String_o *)StringLiteral_13553/*"TUTORIAL_MESSAGE_FOLLOWER1"*/, 0LL);
        v19 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v17, v18);
        v20 = &Method_FollowerRootComponent_EndTutorialFollowerGuideNotification1__;
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
      v23 = this->fields.battleSetupInfo;
      if ( !v23 )
        goto LABEL_32;
      battleSetupInfo = (BattleSetupInfo_o *)EventTutorialMaster__IsTutorialAvailable(
                                               eventId,
                                               15,
                                               (int32_t)battleSetupInfo,
                                               v23->fields.questPhase,
                                               0,
                                               0,
                                               0LL);
      if ( ((unsigned __int8)battleSetupInfo & 1) != 0 )
      {
        v26 = this->fields.battleSetupInfo;
        this->fields.state = 2;
        if ( v26 )
        {
          v27 = v26->fields.eventId;
          v28 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v24, v25);
          System_Action___ctor(
            v28,
            (Il2CppObject *)this,
            Method_FollowerRootComponent_EndTutorialFollowerCommonGuide__,
            0LL);
          battleSetupInfo = this->fields.battleSetupInfo;
          if ( battleSetupInfo )
          {
            battleSetupInfo = (BattleSetupInfo_o *)BattleSetupInfo__TargetQuestId(battleSetupInfo, 0LL);
            v29 = this->fields.battleSetupInfo;
            if ( v29 )
            {
              EventTutorialMaster__CheckTutorial(
                v27,
                15,
                v28,
                (int32_t)battleSetupInfo,
                v29->fields.questPhase,
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
      v31 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_B0D974(
                                                                  FollowerSelectItemListViewManager_CallbackFunc_TypeInfo,
                                                                  v24,
                                                                  v25);
      FollowerSelectItemListViewManager_CallbackFunc___ctor(
        v31,
        (Il2CppObject *)this,
        Method_FollowerRootComponent_OnSelectFollowerItem__,
        0LL);
      if ( !operationItemListViewManager )
        goto LABEL_32;
      FollowerSelectItemListViewManager__SetMode(operationItemListViewManager, 2, v31, 0LL);
      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
      }
      battleSetupInfo = (BattleSetupInfo_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !battleSetupInfo )
        goto LABEL_32;
      if ( PartyOrganizationUtility__ExistsTemporaryPartyInfo((PartyOrganizationUtility_o *)battleSetupInfo, 0LL) )
        FollowerRootComponent__StartBattleSetupMenu(this, v32);
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
  void *operationItemListViewManager; // x0
  __int64 v45; // x8
  __int64 v46; // x20
  SkillInfo_o *v47; // x22
  SkillEntity_o *v48; // x20
  System_String_o *v49; // x20
  System_String_o *v50; // x21
  Il2CppObject *v51; // x0
  System_String_o *v52; // x0
  int32_t v53; // w20
  System_String_o *v54; // x1
  System_String_o *v55; // x3
  System_String_o *v56; // x2
  __int64 v57; // x20
  __int64 v58; // x1
  __int64 v59; // x2
  SkillInfo_o *v60; // x23
  SkillEntity_o *Entity; // x21
  _DWORD *v62; // x20
  System_String_o *v63; // x21
  System_String_o *v64; // x22
  Il2CppObject *v65; // x0
  System_String_o *v66; // x0
  System_String_o *v67; // x21
  Il2CppObject *v68; // x0
  System_String_o *v69; // x0
  int32_t tutorialMode; // w21
  System_String_o *v71; // x20
  FollowerListRequest_c *v72; // x0
  CommonConfirmDialog_o *commonConfirmDialog; // x20
  System_String_o *v74; // x21
  System_String_o *v75; // x22
  __int64 v76; // x1
  __int64 v77; // x2
  CommonConfirmDialog_ClickDelegate_o *v78; // x23
  FollowerSelectItemListViewItem_o *v79; // x20
  __int64 v80; // x21
  __int64 v81; // x22
  __int64 v82; // x8
  __int64 v83; // x21
  __int64 v84; // x22
  EquipTargetInfo_o *EquipInfo; // x21
  int32_t v86; // w8
  int32_t v87; // w8
  SoundManager_c *v88; // x0
  _BYTE *v89; // x20
  PartyOrganizationUtility_c *v90; // x0
  int32_t v91; // w8
  __int64 *v92; // x8
  CommonUI_o *Instance; // x20
  System_String_o *v94; // x21
  System_String_o *v95; // x22
  __int64 v96; // x1
  __int64 v97; // x2
  System_Action_o *v98; // x23
  FollowerSelectItemListViewItem_o *v99; // x20
  const MethodInfo *v100; // x2
  _BYTE *v101; // x8
  __int64 v102; // x22
  __int64 v103; // x23
  const MethodInfo *v104; // x3
  int32_t v105; // w2
  FollowerSelectItemListViewManager_o *v106; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v107; // x21
  int32_t v108; // w1
  CommonUI_o *v109; // x20
  __int64 v110; // x1
  __int64 v111; // x2
  System_String_o *v112; // x21
  FollowerRootComponent___c_c *v113; // x8
  struct FollowerRootComponent___c_StaticFields *static_fields; // x9
  System_Action_o *_9__62_0; // x23
  System_String_o *v116; // x22
  Il2CppObject *v117; // x24
  struct FollowerRootComponent___c_StaticFields *v118; // x0
  System_String_array **v119; // x2
  System_String_array **v120; // x3
  System_Boolean_array **v121; // x4
  System_Int32_array **v122; // x5
  System_Int32_array *v123; // x6
  System_Int32_array *v124; // x7
  CommonUI_o *v125; // x20
  __int64 v126; // x1
  __int64 v127; // x2
  System_Action_o *v128; // x21
  __int64 v129; // x0
  int v130; // [xsp+30h] [xbp-70h] BYREF
  int32_t lv; // [xsp+34h] [xbp-6Ch] BYREF
  System_String_o *detail; // [xsp+38h] [xbp-68h] BYREF
  System_String_o *name; // [xsp+40h] [xbp-60h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+48h] [xbp-58h] BYREF
  System_String_o *v135; // [xsp+50h] [xbp-50h] BYREF
  System_String_o *v136; // [xsp+58h] [xbp-48h] BYREF
  SkillInfo_array *v137; // [xsp+68h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v138; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v139; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v140; // 0:x0.16

  if ( (byte_42132B0 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_B0D8A4(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, v7);
    sub_B0D8A4(&CommonConfirmDialog_ClickDelegate_TypeInfo, v8);
    sub_B0D8A4(&Method_DataManager_GetMasterData_SkillLvMaster___, v9);
    sub_B0D8A4(&Method_DataManager_GetMasterData_SkillMaster___, v10);
    sub_B0D8A4(&Method_DataManager_GetMaster_SkillLvMaster___, v11);
    sub_B0D8A4(&Method_DataManager_GetMaster_SkillMaster___, v12);
    sub_B0D8A4(&DataManager_TypeInfo, v13);
    sub_B0D8A4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v14);
    sub_B0D8A4(&FollowerListRequest_TypeInfo, v15);
    sub_B0D8A4(&Method_FollowerRootComponent_EndCloseTutorialArrow__, v16);
    sub_B0D8A4(&Method_FollowerRootComponent_EndRefreshConfirm__, v17);
    sub_B0D8A4(&Method_FollowerRootComponent_EndRefreshRest__, v18);
    sub_B0D8A4(&Method_FollowerRootComponent_OnSelectFollowerItem__, v19);
    sub_B0D8A4(&FollowerRootComponent_TypeInfo, v20);
    sub_B0D8A4(&int_TypeInfo, v21);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v22);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v23);
    sub_B0D8A4(&PartyOrganizationUtility_TypeInfo, v24);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v25);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v27);
    sub_B0D8A4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v28);
    sub_B0D8A4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v29);
    sub_B0D8A4(&SoundManager_TypeInfo, v30);
    sub_B0D8A4(&Method_FollowerRootComponent___c__OnSelectFollowerItem_b__62_0__, v31);
    sub_B0D8A4(&FollowerRootComponent___c_TypeInfo, v32);
    sub_B0D8A4(&StringLiteral_6415/*"FOLLOWER_SELECT_REFRESH_TITLE"*/, v33);
    sub_B0D8A4(&StringLiteral_8751/*"MENU_SELECT_ITEM"*/, v34);
    sub_B0D8A4(&StringLiteral_8760/*"MENU_SHOW_SUPPORT"*/, v35);
    sub_B0D8A4(&StringLiteral_6412/*"FOLLOWER_SELECT_REFRESH_MESSAGE"*/, v36);
    sub_B0D8A4(&StringLiteral_80/*" "*/, v37);
    sub_B0D8A4(&StringLiteral_6413/*"FOLLOWER_SELECT_REFRESH_REST_MESSAGE"*/, v38);
    sub_B0D8A4(&StringLiteral_10374/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_EXPIRED"*/, v39);
    sub_B0D8A4(&StringLiteral_8654/*"MASTER_EQSKILL_LV_TXT"*/, v40);
    sub_B0D8A4(&StringLiteral_2529/*"BATTLE_SKILLCHARGETURN"*/, v41);
    sub_B0D8A4(&StringLiteral_1/*""*/, v42);
    sub_B0D8A4(&StringLiteral_6414/*"FOLLOWER_SELECT_REFRESH_REST_TITLE"*/, v43);
    byte_42132B0 = 1;
  }
  v137 = 0LL;
  v136 = 0LL;
  skillInfoList = 0LL;
  v135 = 0LL;
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
        v99 = (FollowerSelectItemListViewItem_o *)operationItemListViewManager;
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
        FollowerRootComponent__SelectShowServant(this, v99, v100);
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
        v57 = kind == 3 ? 1LL : 2LL * (kind == 4);
        if ( !operationItemListViewManager )
          goto LABEL_202;
        operationItemListViewManager = (void *)FollowerSelectItemListViewItem__GetSkillInfo(
                                                 (FollowerSelectItemListViewItem_o *)operationItemListViewManager,
                                                 &v137,
                                                 0LL);
        if ( !v137 )
          goto LABEL_202;
        if ( (unsigned int)v57 >= v137->max_length )
          goto LABEL_203;
        v60 = v137->m_Items[v57];
        if ( !v60 || v60->fields.id < 1 || v60->fields.lv < 1 )
          goto LABEL_165;
        operationItemListViewManager = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !operationItemListViewManager )
          goto LABEL_202;
        operationItemListViewManager = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)operationItemListViewManager,
                                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SkillMaster___);
        if ( !operationItemListViewManager )
          goto LABEL_202;
        Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)operationItemListViewManager,
                                    v60->fields.id,
                                    (const MethodInfo_2669BD4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        operationItemListViewManager = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !operationItemListViewManager )
          goto LABEL_202;
        operationItemListViewManager = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)operationItemListViewManager,
                                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SkillLvMaster___);
        if ( !operationItemListViewManager )
          goto LABEL_202;
        operationItemListViewManager = SkillLvMaster__GetEntity(
                                         (SkillLvMaster_o *)operationItemListViewManager,
                                         v60->fields.id,
                                         v60->fields.lv,
                                         0LL);
        if ( !Entity )
          goto LABEL_202;
        v62 = operationItemListViewManager;
        SkillEntity__getSkillMessageInfo(Entity, &v136, &v135, v60->fields.lv, 0LL);
        v63 = v136;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v64 = LocalizationManager__Get((System_String_o *)StringLiteral_8654/*"MASTER_EQSKILL_LV_TXT"*/, 0LL);
        lv = v60->fields.lv;
        v65 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv);
        v66 = System_String__Format(v64, v65, 0LL);
        v136 = System_String__Concat_43852188(v63, (System_String_o *)StringLiteral_80/*" "*/, v66, 0LL);
        operationItemListViewManager = LocalizationManager__Get((System_String_o *)StringLiteral_2529/*"BATTLE_SKILLCHARGETURN"*/, 0LL);
        if ( !v62 )
          goto LABEL_202;
        v67 = (System_String_o *)operationItemListViewManager;
        v130 = v62[6];
        v68 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v130);
        v69 = System_String__Format(v67, v68, 0LL);
        tutorialMode = this->fields.tutorialMode;
        v71 = v69;
        operationItemListViewManager = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !operationItemListViewManager )
          goto LABEL_202;
        v54 = v136;
        v55 = v135;
        if ( tutorialMode == 3 )
        {
          v56 = v71;
LABEL_55:
          CommonUI__OpenDetailLongInfoDialogOnFade((CommonUI_o *)operationItemListViewManager, v54, v56, v55, 0LL);
        }
        else
        {
          v56 = v71;
LABEL_150:
          CommonUI__OpenDetailLongInfoDialog((CommonUI_o *)operationItemListViewManager, v54, v56, v55, 1, 0, 0LL);
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
          v101 = operationItemListViewManager;
          v88 = SoundManager_TypeInfo;
          if ( !v101[168] )
          {
            if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) == 0 )
              goto LABEL_178;
LABEL_176:
            if ( !v88->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(v88);
LABEL_178:
            SoundManager__playSystemSe(0, 0LL);
            operationItemListViewManager = this->fields.myFSM;
            if ( operationItemListViewManager )
            {
              v92 = &StringLiteral_8760/*"MENU_SHOW_SUPPORT"*/;
              goto LABEL_180;
            }
            goto LABEL_202;
          }
          if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 )
          {
LABEL_162:
            if ( !v88->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(v88);
          }
LABEL_164:
          SoundManager__playSystemSe(2, 0LL);
          goto LABEL_165;
        }
        v87 = this->fields.tutorialMode;
        if ( v87 == 3 )
        {
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(2, 0LL);
LABEL_173:
          v106 = this->fields.operationItemListViewManager;
          v107 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_B0D974(
                                                                       FollowerSelectItemListViewManager_CallbackFunc_TypeInfo,
                                                                       v58,
                                                                       v59);
          FollowerSelectItemListViewManager_CallbackFunc___ctor(
            v107,
            (Il2CppObject *)this,
            Method_FollowerRootComponent_OnSelectFollowerItem__,
            0LL);
          if ( !v106 )
            goto LABEL_202;
          v108 = 4;
          goto LABEL_167;
        }
        if ( v87 == 2 )
        {
          v88 = SoundManager_TypeInfo;
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
          v79 = (FollowerSelectItemListViewItem_o *)operationItemListViewManager;
          if ( !FollowerSelectItemListViewItem__get_ServantLeader(
                  (FollowerSelectItemListViewItem_o *)operationItemListViewManager,
                  0LL) )
            goto LABEL_151;
          operationItemListViewManager = FollowerSelectItemListViewItem__get_ServantLeader(v79, 0LL);
          if ( !operationItemListViewManager )
            goto LABEL_202;
          v81 = *((_QWORD *)operationItemListViewManager + 6);
          v80 = *((_QWORD *)operationItemListViewManager + 7);
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v138.fields.currentCryptoKey = v81;
          *(_QWORD *)&v138.fields.fakeValue = v80;
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v138, 0LL) >= 1 )
          {
            operationItemListViewManager = FollowerSelectItemListViewItem__get_ServantLeader(v79, 0LL);
            if ( !operationItemListViewManager )
              goto LABEL_202;
            if ( !*((_QWORD *)operationItemListViewManager + 18) )
              goto LABEL_161;
            operationItemListViewManager = FollowerSelectItemListViewItem__get_ServantLeader(v79, 0LL);
            if ( !operationItemListViewManager )
              goto LABEL_202;
            v82 = *((_QWORD *)operationItemListViewManager + 18);
            if ( !v82 )
              goto LABEL_202;
            v84 = *(_QWORD *)(v82 + 56);
            v83 = *(_QWORD *)(v82 + 64);
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v139.fields.currentCryptoKey = v84;
            *(_QWORD *)&v139.fields.fakeValue = v83;
            if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v139, 0LL) < 1 )
              goto LABEL_161;
            operationItemListViewManager = FollowerSelectItemListViewItem__get_ServantLeader(v79, 0LL);
            if ( !operationItemListViewManager )
              goto LABEL_202;
            if ( ServantLeaderInfo__IsHideEquip((ServantLeaderInfo_o *)operationItemListViewManager, 0LL) )
              goto LABEL_161;
            operationItemListViewManager = FollowerSelectItemListViewItem__get_ServantLeader(v79, 0LL);
            if ( !operationItemListViewManager )
              goto LABEL_202;
            EquipInfo = (EquipTargetInfo_o *)*((_QWORD *)operationItemListViewManager + 18);
            if ( !EquipInfo )
            {
LABEL_161:
              v88 = SoundManager_TypeInfo;
              if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
                goto LABEL_164;
              goto LABEL_162;
            }
          }
          else
          {
LABEL_151:
            EquipInfo = FollowerSelectItemListViewItem__get_EquipInfo(v79, 0LL);
            if ( !EquipInfo )
              goto LABEL_161;
          }
          v103 = *(_QWORD *)&EquipInfo->fields.svtId.fields.currentCryptoKey;
          v102 = *(_QWORD *)&EquipInfo->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v140.fields.currentCryptoKey = v103;
          *(_QWORD *)&v140.fields.fakeValue = v102;
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v140, 0LL) >= 1 )
          {
            if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !SoundManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
            }
            SoundManager__playSystemSe(0, 0LL);
            if ( FollowerSelectItemListViewItem__get_FollowerType(v79, 0LL) == 1 )
            {
              v105 = 13;
            }
            else if ( FollowerSelectItemListViewItem__get_FollowerType(v79, 0LL) == 5 )
            {
              v105 = 14;
            }
            else if ( v79->fields.isNpc )
            {
              v105 = 19;
            }
            else
            {
              v105 = 16;
            }
            FollowerRootComponent__SelectShowServantEquip(this, EquipInfo, v105, v104);
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
        v86 = this->fields.tutorialMode;
        if ( v86 == 3 )
          goto LABEL_173;
        if ( v86 == 2 )
          goto LABEL_165;
        return;
      case 7:
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(0, 0LL);
        v72 = FollowerListRequest_TypeInfo;
        if ( (BYTE3(FollowerListRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !FollowerListRequest_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FollowerListRequest_TypeInfo);
        }
        if ( FollowerListRequest__checkRefreshRate((const MethodInfo *)v72) )
        {
          commonConfirmDialog = this->fields.commonConfirmDialog;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v74 = LocalizationManager__Get((System_String_o *)StringLiteral_6415/*"FOLLOWER_SELECT_REFRESH_TITLE"*/, 0LL);
          v75 = LocalizationManager__Get((System_String_o *)StringLiteral_6412/*"FOLLOWER_SELECT_REFRESH_MESSAGE"*/, 0LL);
          v78 = (CommonConfirmDialog_ClickDelegate_o *)sub_B0D974(CommonConfirmDialog_ClickDelegate_TypeInfo, v76, v77);
          CommonConfirmDialog_ClickDelegate___ctor(
            v78,
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
            CommonConfirmDialog__Open_16934892(
              commonConfirmDialog,
              v74,
              v75,
              1,
              v78,
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
          Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v94 = LocalizationManager__Get((System_String_o *)StringLiteral_6414/*"FOLLOWER_SELECT_REFRESH_REST_TITLE"*/, 0LL);
          v95 = LocalizationManager__Get((System_String_o *)StringLiteral_6413/*"FOLLOWER_SELECT_REFRESH_REST_MESSAGE"*/, 0LL);
          v98 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v96, v97);
          System_Action___ctor(v98, (Il2CppObject *)this, Method_FollowerRootComponent_EndRefreshRest__, 0LL);
          if ( Instance )
          {
            CommonUI__OpenNotificationDialog(Instance, v94, v95, v98, -1, 0, 0, 0, 0, 0, 1, 0, 0LL, 0LL);
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
        v45 = (unsigned int)(kind - 9);
        v46 = (unsigned int)v45 < 4 ? v45 + 1 : 0LL;
        if ( !operationItemListViewManager )
          goto LABEL_202;
        operationItemListViewManager = (void *)FollowerSelectItemListViewItem__GetAppendSkillInfo(
                                                 (FollowerSelectItemListViewItem_o *)operationItemListViewManager,
                                                 &skillInfoList,
                                                 *((_BYTE *)operationItemListViewManager + 168),
                                                 0LL);
        if ( !skillInfoList )
          goto LABEL_202;
        if ( (unsigned int)v46 >= skillInfoList->max_length )
        {
LABEL_203:
          v129 = sub_B0D9A8(operationItemListViewManager);
          sub_B0D948(v129, 0LL);
        }
        v47 = skillInfoList->m_Items[v46];
        if ( !v47 || v47->fields.id < 1 || v47->fields.lv < 1 )
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
        operationItemListViewManager = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_SkillMaster___);
        if ( !operationItemListViewManager )
          goto LABEL_202;
        v48 = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                 (DataMasterBase_WarMaster__WarEntity__int__o *)operationItemListViewManager,
                                 v47->fields.id,
                                 (const MethodInfo_2669BD4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        operationItemListViewManager = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_SkillLvMaster___);
        if ( !operationItemListViewManager )
          goto LABEL_202;
        operationItemListViewManager = SkillLvMaster__GetEntity(
                                         (SkillLvMaster_o *)operationItemListViewManager,
                                         v47->fields.id,
                                         v47->fields.lv,
                                         0LL);
        if ( !v48 )
          goto LABEL_202;
        SkillEntity__getSkillMessageInfo(v48, &name, &detail, v47->fields.lv, 0LL);
        v49 = name;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v50 = LocalizationManager__Get((System_String_o *)StringLiteral_8654/*"MASTER_EQSKILL_LV_TXT"*/, 0LL);
        lv = v47->fields.lv;
        v51 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv);
        v52 = System_String__Format(v50, v51, 0LL);
        name = System_String__Concat_43852188(v49, (System_String_o *)StringLiteral_80/*" "*/, v52, 0LL);
        v53 = this->fields.tutorialMode;
        operationItemListViewManager = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !operationItemListViewManager )
          goto LABEL_202;
        v55 = detail;
        v54 = name;
        v56 = (System_String_o *)StringLiteral_1/*""*/;
        if ( v53 != 3 )
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
        v89 = operationItemListViewManager;
        if ( FollowerSelectItemListViewItem__get_SvtId(
               (FollowerSelectItemListViewItem_o *)operationItemListViewManager,
               0LL) < 1
          || v89[203]
          || v89[254] )
        {
          goto LABEL_161;
        }
        operationItemListViewManager = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
        if ( !operationItemListViewManager )
          goto LABEL_202;
        if ( !*((_BYTE *)operationItemListViewManager + 140) )
          goto LABEL_121;
        v90 = PartyOrganizationUtility_TypeInfo;
        if ( (BYTE3(PartyOrganizationUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
          v90 = PartyOrganizationUtility_TypeInfo;
        }
        if ( !UnityEngine_PlayerPrefs__GetInt(v90->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0, 0LL) )
          goto LABEL_121;
        if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
        }
        operationItemListViewManager = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
              v92 = &StringLiteral_8751/*"MENU_SELECT_ITEM"*/;
LABEL_180:
              PlayMakerFSM__SendEvent((PlayMakerFSM_o *)operationItemListViewManager, (System_String_o *)*v92, 0LL);
              return;
            }
LABEL_202:
            sub_B0D97C(operationItemListViewManager);
          }
          v91 = this->fields.tutorialMode;
          if ( v91 == 3 )
          {
            this->fields.state = 4;
            v125 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v128 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v126, v127);
            System_Action___ctor(v128, (Il2CppObject *)this, Method_FollowerRootComponent_EndCloseTutorialArrow__, 0LL);
            if ( !v125 )
              goto LABEL_202;
            CommonUI__CloseTutorialArrowMark(v125, v128, 0LL);
          }
          else if ( v91 == 2 )
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
          v109 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          operationItemListViewManager = LocalizationManager__Get((System_String_o *)StringLiteral_10374/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_EXPIRED"*/, 0LL);
          v112 = (System_String_o *)operationItemListViewManager;
          v113 = FollowerRootComponent___c_TypeInfo;
          if ( (BYTE3(FollowerRootComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !FollowerRootComponent___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(FollowerRootComponent___c_TypeInfo);
            v113 = FollowerRootComponent___c_TypeInfo;
          }
          static_fields = v113->static_fields;
          _9__62_0 = static_fields->__9__62_0;
          v116 = (System_String_o *)StringLiteral_1/*""*/;
          if ( !_9__62_0 )
          {
            if ( (BYTE3(v113->vtable._0_Equals.methodPtr) & 4) != 0 && !v113->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v113);
              static_fields = FollowerRootComponent___c_TypeInfo->static_fields;
            }
            v117 = (Il2CppObject *)static_fields->__9;
            _9__62_0 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v110, v111);
            System_Action___ctor(_9__62_0, v117, Method_FollowerRootComponent___c__OnSelectFollowerItem_b__62_0__, 0LL);
            v118 = FollowerRootComponent___c_TypeInfo->static_fields;
            v118->__9__62_0 = _9__62_0;
            sub_B0D840(
              (BattleServantConfConponent_o *)&v118->__9__62_0,
              (System_Int32_array **)_9__62_0,
              v119,
              v120,
              v121,
              v122,
              v123,
              v124);
          }
          if ( !v109 )
            goto LABEL_202;
          CommonUI__OpenNotificationDialog(v109, v116, v112, _9__62_0, -1, 0, 0, 0, 0, 0, 0, 0, 0LL, 0LL);
LABEL_165:
          v106 = this->fields.operationItemListViewManager;
          v107 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_B0D974(
                                                                       FollowerSelectItemListViewManager_CallbackFunc_TypeInfo,
                                                                       v58,
                                                                       v59);
          FollowerSelectItemListViewManager_CallbackFunc___ctor(
            v107,
            (Il2CppObject *)this,
            Method_FollowerRootComponent_OnSelectFollowerItem__,
            0LL);
          if ( !v106 )
            goto LABEL_202;
          v108 = 2;
LABEL_167:
          FollowerSelectItemListViewManager__SetMode(v106, v108, v107, 0LL);
        }
        break;
    }
  }
}


void __fastcall FollowerRootComponent__PlayBGM(FollowerRootComponent_o *this, const MethodInfo *method)
{
  FollowerRootComponent_o *v2; // x19
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
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  int32_t questId; // w20
  BalanceConfig_c *v15; // x0
  QuestPhaseMaster_o *v16; // x20
  struct BattleSetupInfo_o *v17; // x8
  int32_t FormationBgmId; // w0
  int32_t v19; // w20
  System_String_o *BgmFileName; // x20
  bool IsNonStopEndBgm; // w21
  const MethodInfo *v22; // x2
  struct UnityEngine_GameObject_o *refreshButtonBase; // x8
  System_String_o *BgmName; // x19
  SoundManager_c *v25; // x0
  struct BattleSetupInfo_o *v26; // x8
  const MethodInfo *v27; // x2
  QuestMaster_o *v28; // x20
  struct BattleSetupInfo_o *v29; // x8
  System_String_o *v30; // x0
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  v2 = this;
  if ( (byte_4213298 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    sub_B0D8A4(&BgmManager_TypeInfo, v3);
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestMaster___, v4);
    sub_B0D8A4(&Method_DataManager_GetMaster_BgmMaster___, v5);
    sub_B0D8A4(&Method_DataManager_GetMaster_QuestPhaseMaster___, v6);
    sub_B0D8A4(&DataManager_TypeInfo, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_B0D8A4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v9);
    sub_B0D8A4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v10);
    sub_B0D8A4(&SoundManager_TypeInfo, v11);
    this = (FollowerRootComponent_o *)sub_B0D8A4(&StringLiteral_1/*""*/, v12);
    byte_4213298 = 1;
  }
  entity = 0LL;
  battleSetupInfo = v2->fields.battleSetupInfo;
  if ( !battleSetupInfo )
    goto LABEL_72;
  questId = battleSetupInfo->fields.questId;
  v15 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v15 = BalanceConfig_TypeInfo;
  }
  if ( questId != v15->static_fields->PrologueQuestId )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (FollowerRootComponent_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( !v2->fields.battleSetupInfo )
      goto LABEL_72;
    v16 = (QuestPhaseMaster_o *)this;
    this = (FollowerRootComponent_o *)BattleSetupInfo__TargetQuestId(v2->fields.battleSetupInfo, 0LL);
    v17 = v2->fields.battleSetupInfo;
    if ( !v17 || !v16 )
      goto LABEL_72;
    if ( QuestPhaseMaster__TryGetEntity(v16, &entity, (int32_t)this, v17->fields.questPhase, 0LL) )
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
        v19 = FormationBgmId;
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        this = (FollowerRootComponent_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_BgmMaster___);
        if ( !this )
          goto LABEL_72;
        BgmFileName = BgmMaster__GetBgmFileName((BgmMaster_o *)this, v19, (System_String_o *)StringLiteral_1/*""*/, 0LL);
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
    this = (FollowerRootComponent_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !this )
      goto LABEL_72;
    this = (FollowerRootComponent_o *)PartyOrganizationUtility__ExistsTemporaryPartyInfo(
                                        (PartyOrganizationUtility_o *)this,
                                        0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !System_String__IsNullOrEmpty(BgmFileName, 0LL) )
        FollowerRootComponent__SetBackupBgmName(v2, IsNonStopEndBgm, v22);
      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
      }
      this = (FollowerRootComponent_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( this )
      {
        refreshButtonBase = this->fields.refreshButtonBase;
        if ( refreshButtonBase )
        {
          BgmName = *(System_String_o **)&refreshButtonBase[1].fields.m_CachedPtr;
          v25 = SoundManager_TypeInfo;
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
          {
LABEL_65:
            v30 = BgmName;
LABEL_70:
            SoundManager__playBgm(v30, 0LL);
            return;
          }
LABEL_63:
          if ( !v25->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v25);
          goto LABEL_65;
        }
      }
      goto LABEL_72;
    }
    v26 = v2->fields.battleSetupInfo;
    if ( !v26 )
      goto LABEL_72;
    if ( !v26->fields.isScriptBeforePartySelect )
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
          FollowerRootComponent__SetBackupBgmName(v2, IsNonStopEndBgm, v27);
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          v30 = BgmFileName;
          goto LABEL_70;
        }
        this = (FollowerRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( this )
        {
          this = (FollowerRootComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestMaster___);
          if ( v2->fields.battleSetupInfo )
          {
            v28 = (QuestMaster_o *)this;
            this = (FollowerRootComponent_o *)BattleSetupInfo__TargetQuestId(v2->fields.battleSetupInfo, 0LL);
            if ( v28 )
            {
              this = (FollowerRootComponent_o *)QuestMaster__getQuestEntity(v28, (int32_t)this, 0LL);
              v29 = v2->fields.battleSetupInfo;
              if ( v29 )
              {
                if ( this )
                {
                  BgmName = QuestEntity__GetBgmName((QuestEntity_o *)this, v29->fields.warId, 0LL);
                  if ( System_String__IsNullOrEmpty(BgmName, 0LL) )
                  {
                    if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !BgmManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
                    }
                    BgmName = BgmManager__GetMainBgmName(0LL);
                  }
                  v25 = SoundManager_TypeInfo;
                  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
                    goto LABEL_65;
                  goto LABEL_63;
                }
              }
            }
          }
        }
LABEL_72:
        sub_B0D97C(this);
      }
    }
  }
}


void __fastcall FollowerRootComponent__QuestHintDialogResetTemporarilyId(
        FollowerRootComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_42132B6 & 1) == 0 )
  {
    sub_B0D8A4(&QuestHintDialogOpenManager_TypeInfo, method);
    byte_42132B6 = 1;
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
    sub_B0D97C(operationItemListViewManager);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)operationItemListViewManager, 0, 0LL);
  this->fields.state = 0;
}


void __fastcall FollowerRootComponent__RequestFollowerList(FollowerRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  NetworkManager_ResultCallbackFunc_o *v8; // x20
  FollowerListRequest_o *Request_WarBoardWallAttackRequest; // x0
  FollowerListRequest_o *v10; // x20
  const MethodInfo *v11; // x4
  struct BattleSetupInfo_o *battleSetupInfo; // x8

  if ( (byte_42132A1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_FollowerRootComponent_CallbackFollowerList__, method);
    sub_B0D8A4(&Method_NetworkManager_getRequest_FollowerListRequest___, v4);
    sub_B0D8A4(&NetworkManager_TypeInfo, v5);
    sub_B0D8A4(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_11106/*"REQUEST_OK"*/, v7);
    byte_42132A1 = 1;
  }
  v8 = (NetworkManager_ResultCallbackFunc_o *)sub_B0D974(NetworkManager_ResultCallbackFunc_TypeInfo, method, v2);
  NetworkManager_ResultCallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    Method_FollowerRootComponent_CallbackFollowerList__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (FollowerListRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                 v8,
                                                                 (const MethodInfo_2049D98 *)Method_NetworkManager_getRequest_FollowerListRequest___);
  if ( !Request_WarBoardWallAttackRequest )
    goto LABEL_13;
  v10 = Request_WarBoardWallAttackRequest;
  if ( (((__int64 (__fastcall *)(FollowerListRequest_o *, Il2CppMethodPointer))Request_WarBoardWallAttackRequest->klass->vtable._7_checkExpirationDate.method)(
          Request_WarBoardWallAttackRequest,
          Request_WarBoardWallAttackRequest->klass->vtable._8_isBackgroundRequest.methodPtr) & 1) != 0 )
  {
    Request_WarBoardWallAttackRequest = (FollowerListRequest_o *)this->fields.myFSM;
    if ( Request_WarBoardWallAttackRequest )
    {
      PlayMakerFSM__SendEvent(
        (PlayMakerFSM_o *)Request_WarBoardWallAttackRequest,
        (System_String_o *)StringLiteral_11106/*"REQUEST_OK"*/,
        0LL);
      return;
    }
LABEL_13:
    sub_B0D97C(Request_WarBoardWallAttackRequest);
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
    v10,
    0,
    (int32_t)Request_WarBoardWallAttackRequest,
    battleSetupInfo->fields.questPhase,
    v11);
}


bool __fastcall FollowerRootComponent__ReturnBattleSetupMenu(FollowerRootComponent_o *this, const MethodInfo *method)
{
  FollowerRootComponent_o *v2; // x20
  struct BattleSetupInfo_o *battleSetupInfo; // x19

  v2 = this;
  if ( (byte_42132AC & 1) == 0 )
  {
    this = (FollowerRootComponent_o *)sub_B0D8A4(
                                        &Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__,
                                        method);
    byte_42132AC = 1;
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
  this = (FollowerRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !this )
LABEL_8:
    sub_B0D97C(this);
  AvalonSceneManager__pushScene((AvalonSceneManager_o *)this, 40, 1, (Il2CppObject *)battleSetupInfo, 0LL);
  return 1;
}


bool __fastcall FollowerRootComponent__ReturnQuestMenu(FollowerRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *battleSetupInfo; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_o *backupBgmName; // x22
  AvalonSceneManager_o *Instance; // x0
  __int64 v18; // x1
  TerminalPramsManager_c *v19; // x0

  if ( (byte_42132AB & 1) == 0 )
  {
    sub_B0D8A4(&Method_AvalonSceneManager_UnloadScene_PartyOrganizationRootComponent___, method);
    sub_B0D8A4(&RandomLimitCountManager_TypeInfo, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4);
    sub_B0D8A4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v5);
    sub_B0D8A4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v6);
    sub_B0D8A4(&SoundManager_TypeInfo, v7);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v8);
    byte_42132AB = 1;
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
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.battleSetupInfo, 0LL, v10, v11, v12, v13, v14, v15);
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  Instance = (AvalonSceneManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  if ( LOBYTE(Instance[1].fields.scenestack) )
  {
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    Instance = (AvalonSceneManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_37;
    LOBYTE(Instance[1].fields.scenestack) = 0;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4210848 )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v18);
      byte_4210848 = 1;
    }
    v19 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v19 = TerminalPramsManager_TypeInfo;
    }
    v19->static_fields->_IsAutoResume_k__BackingField = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  if ( AvalonSceneManager__IsStackScene(Instance, 0LL) )
  {
    this->fields.state = 0;
    Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_37;
    AvalonSceneManager__popSceneRefresh(Instance, 1, battleSetupInfo, 0LL);
  }
  else
  {
    Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_37;
    AvalonSceneManager__transitionSceneRefresh(Instance, 34, 1, 0LL, 0, 0LL);
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
LABEL_37:
    sub_B0D97C(Instance);
  AvalonSceneManager__UnloadScene_PartyOrganizationRootComponent_(
    Instance,
    (const MethodInfo_1705D94 *)Method_AvalonSceneManager_UnloadScene_PartyOrganizationRootComponent___);
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
  void *operationItemListViewManager; // x0
  FollowerSelectItemListViewManager_o *v11; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  FollowerSelectItemListViewManager_CallbackFunc_o *v14; // x21
  __int64 v15; // x1
  FollowerSelectItemListViewManager_o *v16; // x20
  FollowerSelectItemListViewManager_c *v17; // x0
  FollowerSelectItemListViewManager_o *v18; // x20
  __int64 v19; // x1
  __int64 v20; // x2
  FollowerSelectItemListViewManager_CallbackFunc_o *v21; // x21
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  FollowerQuestInfomationDraw_o *followerQuestInfomationDraw; // x20
  QuestRestrictionInfo_o *questRestrictionInfo; // x21
  const MethodInfo *v25; // x4
  CommonUI_o *v26; // x20

  if ( (byte_421329F & 1) == 0 )
  {
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, method);
    sub_B0D8A4(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, v3);
    sub_B0D8A4(&Method_FollowerRootComponent_OnSelectFollowerItem__, v4);
    sub_B0D8A4(&RandomLimitCountManager_TypeInfo, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B0D8A4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v7);
    sub_B0D8A4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v8);
    byte_421329F = 1;
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
    v11 = this->fields.operationItemListViewManager;
    v14 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_B0D974(
                                                                FollowerSelectItemListViewManager_CallbackFunc_TypeInfo,
                                                                v12,
                                                                v13);
    FollowerSelectItemListViewManager_CallbackFunc___ctor(
      v14,
      (Il2CppObject *)this,
      Method_FollowerRootComponent_OnSelectFollowerItem__,
      0LL);
    if ( !v11 )
      goto LABEL_33;
    FollowerSelectItemListViewManager__SetMode(v11, 3, v14, 0LL);
    v16 = this->fields.operationItemListViewManager;
    if ( !v16 )
      goto LABEL_33;
    if ( !byte_42132BE )
    {
      sub_B0D8A4(&FollowerSelectItemListViewManager_TypeInfo, v15);
      byte_42132BE = 1;
    }
    v17 = FollowerSelectItemListViewManager_TypeInfo;
    if ( (BYTE3(FollowerSelectItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
      v17 = FollowerSelectItemListViewManager_TypeInfo;
    }
    FollowerSelectItemListViewManager__ChangeClass(v16, v17->static_fields->followerClassId, 0LL);
    operationItemListViewManager = this->fields.operationItemListViewManager;
    if ( !operationItemListViewManager )
LABEL_33:
      sub_B0D97C(operationItemListViewManager);
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
    v18 = this->fields.operationItemListViewManager;
    v21 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_B0D974(
                                                                FollowerSelectItemListViewManager_CallbackFunc_TypeInfo,
                                                                v19,
                                                                v20);
    FollowerSelectItemListViewManager_CallbackFunc___ctor(
      v21,
      (Il2CppObject *)this,
      Method_FollowerRootComponent_OnSelectFollowerItem__,
      0LL);
    if ( !v18 )
      goto LABEL_33;
    FollowerSelectItemListViewManager__SetMode(v18, 2, v21, 0LL);
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
  operationItemListViewManager = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !operationItemListViewManager || !followerQuestInfomationDraw )
    goto LABEL_33;
  FollowerQuestInfomationDraw__SetInfomation(
    followerQuestInfomationDraw,
    questRestrictionInfo,
    *((_DWORD *)operationItemListViewManager + 14),
    0LL,
    v25);
  operationItemListViewManager = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v26 = (CommonUI_o *)operationItemListViewManager;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !v26 )
    goto LABEL_33;
  CommonUI__maskFadein(v26, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
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
  CommonUI_o *v8; // x21
  ServantLeaderInfo_o *ServantLeader; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  ServantStatusDialog_EndDelegate_o *v12; // x22

  if ( (byte_42132A5 & 1) == 0 )
  {
    sub_B0D8A4(&ServantStatusDialog_EndDelegate_TypeInfo, item);
    sub_B0D8A4(&Method_FollowerRootComponent_EndShowServant__, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_42132A5 = 1;
  }
  operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager
    || (ListViewManager__GetScrollView(
          operationItemListViewManager,
          &this->fields.openScroll,
          &this->fields.openOffset,
          0LL),
        operationItemListViewManager = (ListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        !item)
    || (v8 = (CommonUI_o *)operationItemListViewManager,
        ServantLeader = FollowerSelectItemListViewItem__get_ServantLeader(item, 0LL),
        v12 = (ServantStatusDialog_EndDelegate_o *)sub_B0D974(ServantStatusDialog_EndDelegate_TypeInfo, v10, v11),
        ServantStatusDialog_EndDelegate___ctor(
          v12,
          (Il2CppObject *)this,
          Method_FollowerRootComponent_EndShowServant__,
          0LL),
        !v8) )
  {
    sub_B0D97C(operationItemListViewManager);
  }
  CommonUI__OpenServantStatusDialog_17029768(v8, 5, ServantLeader, v12, 0LL);
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
  ServantStatusDialog_EndDelegate_o *v13; // x23

  if ( (byte_42132A8 & 1) == 0 )
  {
    sub_B0D8A4(&ServantStatusDialog_EndDelegate_TypeInfo, equipInfo);
    sub_B0D8A4(&Method_FollowerRootComponent_EndShowServantEquip__, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    byte_42132A8 = 1;
  }
  operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager
    || (ListViewManager__GetScrollView(
          operationItemListViewManager,
          &this->fields.openScroll,
          &this->fields.openOffset,
          0LL),
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v13 = (ServantStatusDialog_EndDelegate_o *)sub_B0D974(ServantStatusDialog_EndDelegate_TypeInfo, v11, v12),
        ServantStatusDialog_EndDelegate___ctor(
          v13,
          (Il2CppObject *)this,
          Method_FollowerRootComponent_EndShowServantEquip__,
          0LL),
        !Instance) )
  {
    sub_B0D97C(operationItemListViewManager);
  }
  CommonUI__OpenServantEquipStatusDialog_17032132(Instance, statusKind, equipInfo, v13, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_4213299 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, isNonStopEndBgm);
    byte_4213299 = 1;
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
    sub_B0D840(
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
  __int64 v5; // x1
  FollowerRootComponent_c *v6; // x0
  UIAtlas_o *partyOrganizationAtlasCache; // x21

  if ( (byte_4213295 & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, spriteName);
    sub_B0D8A4(&FollowerRootComponent_TypeInfo, v5);
    byte_4213295 = 1;
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
  __int64 v3; // x1
  __int64 v4; // x1
  int64_t exists; // x0
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  int64_t followerId; // x1
  int32_t ItemIndex_29697916; // w0
  int32_t selectItemNum; // w1
  FollowerSelectItemListViewItem_o *Item; // x0
  struct BattleSetupInfo_o *v11; // x21
  FollowerSelectItemListViewItem_o *v12; // x20
  struct BattleSetupInfo_o *v13; // x21
  struct BattleSetupInfo_o *v14; // x8
  int32_t FollowerType; // w0
  const MethodInfo *v16; // x2
  Il2CppObject *v17; // x20

  if ( (byte_42132AD & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    sub_B0D8A4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v3);
    sub_B0D8A4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v4);
    byte_42132AD = 1;
  }
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  exists = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
      ItemIndex_29697916 = FollowerSelectItemListViewManager__GetItemIndex_29697916(
                             (FollowerSelectItemListViewManager_o *)exists,
                             followerId,
                             battleSetupInfo->fields.followerClassId,
                             battleSetupInfo->fields.followerSupportDeckId,
                             0LL);
      this->fields.selectItemNum = ItemIndex_29697916 & ~(ItemIndex_29697916 >> 31);
    }
    goto LABEL_19;
  }
  battleSetupInfo->fields.followerId = 0LL;
  selectItemNum = this->fields.selectItemNum;
  if ( (selectItemNum & 0x80000000) == 0 )
  {
    exists = (int64_t)this->fields.operationItemListViewManager;
    if ( !exists )
      goto LABEL_21;
    Item = FollowerSelectItemListViewManager__GetItem((FollowerSelectItemListViewManager_o *)exists, selectItemNum, 0LL);
    if ( Item )
    {
      v11 = this->fields.battleSetupInfo;
      v12 = Item;
      exists = FollowerSelectItemListViewItem__get_FollowerId(Item, 0LL);
      if ( v11 )
      {
        v11->fields.followerId = exists;
        v13 = this->fields.battleSetupInfo;
        exists = FollowerSelectItemListViewItem__get_SelectClassId(v12, 0LL);
        if ( v13 )
        {
          v13->fields.followerClassId = exists;
          v14 = this->fields.battleSetupInfo;
          if ( v14 )
          {
            v14->fields.followerSupportDeckId = v12->fields.supportDeckId;
            FollowerType = FollowerSelectItemListViewItem__get_FollowerType(v12, 0LL);
            FollowerRootComponent__setBattleSetupFollowType(this, FollowerType, v16);
            goto LABEL_19;
          }
        }
      }
LABEL_21:
      sub_B0D97C(exists);
    }
  }
LABEL_19:
  this->fields.state = 5;
  v17 = (Il2CppObject *)this->fields.battleSetupInfo;
  exists = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !exists )
    goto LABEL_21;
  AvalonSceneManager__pushScene((AvalonSceneManager_o *)exists, 40, 1, v17, 0LL);
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
  int64_t operationItemListViewManager; // x0
  FollowerSelectItemListViewItem_o *Item; // x0
  FollowerSelectItemListViewItem_o *v12; // x20
  int64_t userId; // x22
  int v14; // w8
  unsigned int v15; // w23
  int64_t v16; // x24
  __int64 v17; // x8
  FollowerInfo_o **v18; // x24
  __int64 v19; // t1
  __int64 v20; // x25
  __int64 v21; // x1
  __int64 v22; // x2
  int64_t v23; // x22
  __int64 v24; // x8
  __int64 v25; // x23
  __int64 v26; // x8
  __int64 v27; // x21
  bool v28; // w21
  FollowerInfo_o *v30; // x21
  SupportInfoJump_c *v31; // x0
  SupportInfoJump_o *v32; // x20
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  __int64 v34; // x0
  UserGameEntity_o *v35; // [xsp+8h] [xbp-48h] BYREF
  UserGameEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_42132AE & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_PickupUserFollowerMaster___, method);
    sub_B0D8A4(&Method_DataManager_GetMaster_UserFollowerMaster___, v3);
    sub_B0D8A4(&DataManager_TypeInfo, v4);
    sub_B0D8A4(&Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long__TryGetSingleEntity__, v5);
    sub_B0D8A4(
      &Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long__TryGetSingleEntity__,
      v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v7);
    sub_B0D8A4(&SupportInfoJump_TypeInfo, v8);
    byte_42132AE = 1;
  }
  entity = 0LL;
  v35 = 0LL;
  selectItemNum = this->fields.selectItemNum;
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
      v12 = Item;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      operationItemListViewManager = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserFollowerMaster___);
      if ( !operationItemListViewManager )
        goto LABEL_44;
      operationItemListViewManager = DataMasterBase_UserGameMaster__UserGameEntity__long___TryGetSingleEntity(
                                       (DataMasterBase_UserGameMaster__UserGameEntity__long__o *)operationItemListViewManager,
                                       &entity,
                                       (const MethodInfo_2669EE4 *)Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long__TryGetSingleEntity__);
      if ( (operationItemListViewManager & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_44;
        userId = entity->fields.userId;
        if ( !userId )
          goto LABEL_44;
        v14 = *(_DWORD *)(userId + 24);
        if ( v14 >= 1 )
        {
          v15 = 0;
          while ( 1 )
          {
            if ( v15 >= v14 )
              goto LABEL_45;
            v16 = userId + 8LL * (int)v15;
            v19 = *(_QWORD *)(v16 + 32);
            v18 = (FollowerInfo_o **)(v16 + 32);
            v17 = v19;
            if ( !v19 )
              goto LABEL_44;
            v20 = *(_QWORD *)(v17 + 16);
            operationItemListViewManager = FollowerSelectItemListViewItem__get_FollowerId(v12, 0LL);
            if ( v20 == operationItemListViewManager )
              break;
            v14 = *(_DWORD *)(userId + 24);
            if ( (int)++v15 >= v14 )
              goto LABEL_19;
          }
          this->fields.state = 6;
          if ( v15 < *(_DWORD *)(userId + 24) )
          {
            v30 = *v18;
            v31 = SupportInfoJump_TypeInfo;
LABEL_40:
            v32 = (SupportInfoJump_o *)sub_B0D974(v31, v21, v22);
            SupportInfoJump___ctor_31734952(v32, v30, 0, 1, 0LL);
            battleSetupInfo = this->fields.battleSetupInfo;
            if ( battleSetupInfo )
            {
              if ( v32 )
              {
                SupportInfoJump__SetSetupInfo(
                  v32,
                  battleSetupInfo->fields.eventUpValSetupInfo,
                  battleSetupInfo->fields.questRestrictionInfo,
                  0LL);
                operationItemListViewManager = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
                if ( operationItemListViewManager )
                {
                  v28 = 1;
                  AvalonSceneManager__pushScene(
                    (AvalonSceneManager_o *)operationItemListViewManager,
                    60,
                    1,
                    (Il2CppObject *)v32,
                    0LL);
                  return v28;
                }
              }
            }
LABEL_44:
            sub_B0D97C(operationItemListViewManager);
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
      operationItemListViewManager = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_PickupUserFollowerMaster___);
      if ( !operationItemListViewManager )
        goto LABEL_44;
      operationItemListViewManager = DataMasterBase_UserGameMaster__UserGameEntity__long___TryGetSingleEntity(
                                       (DataMasterBase_UserGameMaster__UserGameEntity__long__o *)operationItemListViewManager,
                                       &v35,
                                       (const MethodInfo_2669EE4 *)Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long__TryGetSingleEntity__);
      if ( (operationItemListViewManager & 1) != 0 )
      {
        if ( !v35 )
          goto LABEL_44;
        v23 = v35->fields.userId;
        if ( v23 )
        {
          v24 = *(_QWORD *)(v23 + 24);
          if ( v24 )
          {
            if ( (int)v24 >= 1 )
            {
              v25 = 0LL;
              while ( 1 )
              {
                if ( (unsigned int)v25 >= (unsigned int)v24 )
                  goto LABEL_45;
                v26 = *(_QWORD *)(v23 + 32 + 8 * v25);
                if ( !v26 )
                  goto LABEL_44;
                v27 = *(_QWORD *)(v26 + 16);
                operationItemListViewManager = FollowerSelectItemListViewItem__get_FollowerId(v12, 0LL);
                if ( v27 == operationItemListViewManager )
                  break;
                LODWORD(v24) = *(_DWORD *)(v23 + 24);
                ++v25;
                v28 = 0;
                if ( (int)v25 >= (int)v24 )
                  return v28;
              }
              this->fields.state = 6;
              if ( (unsigned int)v25 < *(_DWORD *)(v23 + 24) )
              {
                v30 = *(FollowerInfo_o **)(v23 + 32 + 8 * v25);
                v31 = SupportInfoJump_TypeInfo;
                goto LABEL_40;
              }
LABEL_45:
              v34 = sub_B0D9A8(operationItemListViewManager);
              sub_B0D948(v34, 0LL);
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
  int64_t Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x20
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  struct BattleSetupInfo_o *v23; // x8
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  int32_t *p_friendPointUpVal; // x25
  EventCampaignMaster_o *v26; // x21
  EventQuestMaster_o *v27; // x22
  struct BattleSetupInfo_o *v28; // x8
  struct EventCampaignEntity_array *Data_28862484; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  struct BattleSetupInfo_o *v36; // x8
  int32_t i; // w20
  PartyOrganizationListViewItem_o *Member; // x0
  PartyOrganizationListViewItem_o *v39; // x21
  System_Int64_array *v40; // x22
  UserServantEntity_o *userServantEntity; // x8
  int32_t v42; // w21
  BalanceConfig_c *v43; // x0
  int32_t j; // w19
  PartyOrganizationListViewItem_o *v45; // x0
  PartyOrganizationListViewItem_o *v46; // x20
  System_Int64_array *v47; // x21
  UserServantEntity_o *v48; // x8
  int v49; // w20
  struct BattleSetupInfo_o *v50; // x8
  struct BattleSetupInfo_o *v51; // x8
  struct BattleSetupInfo_o *v52; // x8
  UserEventDeckMaster_o *v53; // x20
  struct BattleSetupInfo_o *v54; // x8
  int32_t eventId; // w22
  int64_t v56; // x21
  struct BattleSetupInfo_o *v57; // x8
  UserEventDeckEntity_o *v58; // x20
  int64_t v59; // x21
  int v60; // w8
  unsigned __int64 v61; // x22
  int64_t v62; // x26
  System_Int64_array *v63; // x23
  int32_t v64; // w24
  unsigned __int64 v65; // x22
  int64_t v66; // x26
  System_Int64_array *v67; // x23
  int v68; // w24
  struct BattleSetupInfo_o *v69; // x8
  int32_t k; // w20
  UserServantEntity_o *UserServant; // x0
  UserServantEntity_o *v72; // x21
  System_Int64_array *EquipList; // x23
  int32_t FriendPointUpVal; // w22
  BalanceConfig_c *v75; // x0
  int32_t m; // w19
  UserServantEntity_o *v77; // x0
  UserServantEntity_o *v78; // x20
  System_Int64_array *v79; // x22
  int32_t v80; // w21
  int32_t v81; // w21
  int32_t v82; // w21
  struct BattleSetupInfo_o *v83; // x8
  __int64 v84; // x0
  UserServantEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42132A4 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventCampaignMaster___, v3);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventQuestMaster___, v4);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserDeckMaster___, v5);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserEventDeckMaster___, v6);
    sub_B0D8A4(&Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__TryGetEntity__, v7);
    sub_B0D8A4(&LastUsedDeckNumberManager_TypeInfo, v8);
    sub_B0D8A4(&NetworkManager_TypeInfo, v9);
    sub_B0D8A4(&OptionManager_TypeInfo, v10);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B0D8A4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v12);
    sub_B0D8A4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v13);
    byte_42132A4 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_152;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserDeckMaster___);
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
  v81 = BattleSetupInfo__TargetQuestId((BattleSetupInfo_o *)Instance, 0LL);
  if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
  }
  Instance = LastUsedDeckNumberManager__GetDeckNumber(v81, 0LL);
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
                 (const MethodInfo_2669E58 *)Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__TryGetEntity__);
  }
  else
  {
    v82 = Instance;
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
                          v82,
                          0LL);
    entity = (UserServantEntity_o *)Instance;
  }
  v23 = this->fields.battleSetupInfo;
  if ( !v23 )
    goto LABEL_152;
  questRestrictionInfo = v23->fields.questRestrictionInfo;
  if ( questRestrictionInfo )
    QuestRestrictionInfo__SetDeckInfo(questRestrictionInfo, (UserDeckEntity_o *)entity, 0LL);
  *(_QWORD *)&this->fields.friendPointUpVal = 0LL;
  p_friendPointUpVal = &this->fields.friendPointUpVal;
  this->fields.friendPointCampaignEntityList = 0LL;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.friendPointCampaignEntityList,
    0LL,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_152;
  v26 = (EventCampaignMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_152;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventQuestMaster___);
  if ( !this->fields.battleSetupInfo )
    goto LABEL_152;
  v27 = (EventQuestMaster_o *)Instance;
  Instance = BattleSetupInfo__TargetQuestId(this->fields.battleSetupInfo, 0LL);
  v28 = this->fields.battleSetupInfo;
  if ( !v28 )
    goto LABEL_152;
  if ( !v27 )
    goto LABEL_152;
  Instance = (int64_t)EventQuestMaster__GetEnabledEventCampaignForQuest(
                        v27,
                        Instance,
                        v28->fields.questPhase,
                        0LL,
                        7,
                        0LL);
  if ( !v26 )
    goto LABEL_152;
  Data_28862484 = EventCampaignMaster__getData_28862484(v26, 24, (EventEntity_array *)Instance, 0LL);
  this->fields.friendPointCampaignEntityList = Data_28862484;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.friendPointCampaignEntityList,
    (System_Int32_array **)Data_28862484,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  if ( this->fields.tutorialMode == 4 )
  {
    v36 = this->fields.battleSetupInfo;
    if ( !v36 )
      goto LABEL_152;
    if ( v36->fields.isChildFollower )
    {
      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
      }
      Instance = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_152;
      if ( *(_QWORD *)(Instance + 72) )
      {
        for ( i = 0; ; ++i )
        {
          v43 = BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v43 = BalanceConfig_TypeInfo;
          }
          if ( i >= v43->static_fields->DeckMemberMax )
            break;
          if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
          }
          Instance = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( !Instance )
            goto LABEL_152;
          Instance = *(_QWORD *)(Instance + 72);
          if ( !Instance )
            goto LABEL_152;
          Member = PartyListViewItem__GetMember((PartyListViewItem_o *)Instance, i, 0LL);
          if ( Member )
          {
            v39 = Member;
            if ( Member->fields.userServantEntity )
            {
              Instance = (int64_t)PartyOrganizationListViewItem__GetEquipList(Member, 0LL);
              if ( !v39->fields.userServantEntity )
                goto LABEL_152;
              v40 = (System_Int64_array *)Instance;
              Instance = UserServantEntity__getFriendPointUpVal(
                           v39->fields.userServantEntity,
                           (System_Int64_array *)Instance,
                           0LL);
              userServantEntity = v39->fields.userServantEntity;
              if ( !userServantEntity )
                goto LABEL_152;
              v42 = Instance;
              if ( UserServantEntity__getFriendPointUpType(userServantEntity, v40, 0LL) == 104
                && v42 > *p_friendPointUpVal )
              {
                this->fields.friendPointUpVal = v42;
                this->fields.friendPointUpMaxVal = v42;
              }
            }
          }
        }
        for ( j = 0; ; ++j )
        {
          if ( (BYTE3(v43->vtable._0_Equals.methodPtr) & 4) != 0 && !v43->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v43);
            v43 = BalanceConfig_TypeInfo;
          }
          if ( j >= v43->static_fields->DeckMemberMax )
            break;
          if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
          }
          Instance = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( !Instance )
            goto LABEL_152;
          Instance = *(_QWORD *)(Instance + 72);
          if ( !Instance )
            goto LABEL_152;
          v45 = PartyListViewItem__GetMember((PartyListViewItem_o *)Instance, j, 0LL);
          if ( v45 )
          {
            v46 = v45;
            if ( v45->fields.userServantEntity )
            {
              Instance = (int64_t)PartyOrganizationListViewItem__GetEquipList(v45, 0LL);
              if ( !v46->fields.userServantEntity )
                goto LABEL_152;
              v47 = (System_Int64_array *)Instance;
              Instance = UserServantEntity__getFriendPointUpVal(
                           v46->fields.userServantEntity,
                           (System_Int64_array *)Instance,
                           0LL);
              v48 = v46->fields.userServantEntity;
              if ( !v48 )
                goto LABEL_152;
              v49 = Instance;
              if ( UserServantEntity__getFriendPointUpType(v48, v47, 0LL) == 123 )
                *p_friendPointUpVal += v49;
            }
          }
          v43 = BalanceConfig_TypeInfo;
        }
        return;
      }
    }
  }
  v50 = this->fields.battleSetupInfo;
  if ( !v50 )
    goto LABEL_152;
  Instance = (int64_t)v50->fields.questRestrictionInfo;
  if ( Instance )
  {
    Instance = QuestRestrictionInfo__IsServantNum((QuestRestrictionInfo_o *)Instance, 0LL);
    if ( (Instance & 1) != 0 )
      goto LABEL_75;
    v51 = this->fields.battleSetupInfo;
    if ( !v51 )
      goto LABEL_152;
    Instance = (int64_t)v51->fields.questRestrictionInfo;
    if ( !Instance )
      goto LABEL_152;
    Instance = QuestRestrictionInfo__IsNpcMulitipleOrOnly((QuestRestrictionInfo_o *)Instance, 0LL);
    if ( (Instance & 1) != 0 )
      goto LABEL_75;
    v52 = this->fields.battleSetupInfo;
    if ( !v52 )
      goto LABEL_152;
    Instance = (int64_t)v52->fields.questRestrictionInfo;
    if ( !Instance )
      goto LABEL_152;
    if ( *(int *)(Instance + 396) >= 1 )
    {
LABEL_75:
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        v53 = (UserEventDeckMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserEventDeckMaster___);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        Instance = NetworkManager__get_UserId(0LL);
        v54 = this->fields.battleSetupInfo;
        if ( v54 )
        {
          eventId = v54->fields.eventId;
          v56 = Instance;
          Instance = BattleSetupInfo__TargetQuestId(this->fields.battleSetupInfo, 0LL);
          v57 = this->fields.battleSetupInfo;
          if ( v57 )
          {
            if ( v53 )
            {
              Instance = (int64_t)UserEventDeckMaster__getDeckList(
                                    v53,
                                    v56,
                                    eventId,
                                    Instance,
                                    v57->fields.questPhase,
                                    0LL);
              if ( Instance )
              {
                if ( !*(_DWORD *)(Instance + 24) )
                  goto LABEL_153;
                v58 = *(UserEventDeckEntity_o **)(Instance + 32);
                if ( v58 )
                {
                  Instance = (int64_t)UserEventDeckEntity__GetUserServantList(
                                        *(UserEventDeckEntity_o **)(Instance + 32),
                                        0,
                                        0LL);
                  if ( Instance )
                  {
                    v59 = Instance;
                    v60 = *(_QWORD *)(Instance + 24);
                    if ( v60 >= 1 )
                    {
                      v61 = 0LL;
                      v62 = Instance + 32;
                      while ( v61 < (unsigned int)v60 )
                      {
                        if ( *(_QWORD *)(v62 + 8 * v61) )
                        {
                          Instance = (int64_t)UserEventDeckEntity__GetEquipList(v58, v61, 0LL);
                          if ( v61 >= *(unsigned int *)(v59 + 24) )
                            break;
                          v63 = (System_Int64_array *)Instance;
                          Instance = *(_QWORD *)(v62 + 8 * v61);
                          if ( !Instance )
                            goto LABEL_152;
                          Instance = UserServantEntity__getFriendPointUpVal((UserServantEntity_o *)Instance, v63, 0LL);
                          if ( v61 >= *(unsigned int *)(v59 + 24) )
                            break;
                          v64 = Instance;
                          Instance = *(_QWORD *)(v62 + 8 * v61);
                          if ( !Instance )
                            goto LABEL_152;
                          Instance = UserServantEntity__getFriendPointUpType((UserServantEntity_o *)Instance, v63, 0LL);
                          if ( (_DWORD)Instance == 104 && v64 > *p_friendPointUpVal )
                          {
                            this->fields.friendPointUpVal = v64;
                            this->fields.friendPointUpMaxVal = v64;
                          }
                        }
                        v60 = *(_DWORD *)(v59 + 24);
                        if ( (__int64)++v61 >= v60 )
                          goto LABEL_98;
                      }
LABEL_153:
                      v84 = sub_B0D9A8(Instance);
                      sub_B0D948(v84, 0LL);
                    }
LABEL_98:
                    if ( v60 >= 1 )
                    {
                      v65 = 0LL;
                      v66 = v59 + 32;
                      while ( v65 < (unsigned int)v60 )
                      {
                        if ( *(_QWORD *)(v66 + 8 * v65) )
                        {
                          Instance = (int64_t)UserEventDeckEntity__GetEquipList(v58, v65, 0LL);
                          if ( v65 >= *(unsigned int *)(v59 + 24) )
                            goto LABEL_153;
                          v67 = (System_Int64_array *)Instance;
                          Instance = *(_QWORD *)(v66 + 8 * v65);
                          if ( !Instance )
                            goto LABEL_152;
                          Instance = UserServantEntity__getFriendPointUpVal((UserServantEntity_o *)Instance, v67, 0LL);
                          if ( v65 >= *(unsigned int *)(v59 + 24) )
                            goto LABEL_153;
                          v68 = Instance;
                          Instance = *(_QWORD *)(v66 + 8 * v65);
                          if ( !Instance )
                            goto LABEL_152;
                          Instance = UserServantEntity__getFriendPointUpType((UserServantEntity_o *)Instance, v67, 0LL);
                          if ( (_DWORD)Instance == 123 )
                            *p_friendPointUpVal += v68;
                        }
                        v60 = *(_DWORD *)(v59 + 24);
                        if ( (__int64)++v65 >= v60 )
                          goto LABEL_109;
                      }
                      goto LABEL_153;
                    }
LABEL_109:
                    v69 = this->fields.battleSetupInfo;
                    if ( v69 )
                    {
                      Instance = (int64_t)v69->fields.questRestrictionInfo;
                      if ( Instance )
                      {
                        QuestRestrictionInfo__SetDeckInfo_30604880((QuestRestrictionInfo_o *)Instance, v58, 0LL);
                        return;
                      }
                    }
                  }
                }
                else
                {
                  v83 = this->fields.battleSetupInfo;
                  if ( v83 )
                  {
                    Instance = (int64_t)v83->fields.questRestrictionInfo;
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
      sub_B0D97C(Instance);
    }
  }
  if ( entity && (!Instance || !QuestRestrictionInfo__IsSupportOnly((QuestRestrictionInfo_o *)Instance, 0LL)) )
  {
    for ( k = 0; ; ++k )
    {
      v75 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v75 = BalanceConfig_TypeInfo;
      }
      if ( k >= v75->static_fields->DeckMemberMax )
        break;
      Instance = (int64_t)entity;
      if ( !entity )
        goto LABEL_152;
      UserServant = UserDeckEntity__GetUserServant((UserDeckEntity_o *)entity, k, 0LL);
      if ( UserServant )
      {
        v72 = UserServant;
        Instance = (int64_t)entity;
        if ( !entity )
          goto LABEL_152;
        EquipList = UserDeckEntity__GetEquipList((UserDeckEntity_o *)entity, k, 0LL);
        FriendPointUpVal = UserServantEntity__getFriendPointUpVal(v72, EquipList, 0LL);
        if ( UserServantEntity__getFriendPointUpType(v72, EquipList, 0LL) == 104
          && FriendPointUpVal > *p_friendPointUpVal )
        {
          this->fields.friendPointUpVal = FriendPointUpVal;
          this->fields.friendPointUpMaxVal = FriendPointUpVal;
        }
      }
    }
    for ( m = 0; ; ++m )
    {
      if ( (BYTE3(v75->vtable._0_Equals.methodPtr) & 4) != 0 && !v75->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v75);
        v75 = BalanceConfig_TypeInfo;
      }
      if ( m >= v75->static_fields->DeckMemberMax )
        break;
      Instance = (int64_t)entity;
      if ( !entity )
        goto LABEL_152;
      v77 = UserDeckEntity__GetUserServant((UserDeckEntity_o *)entity, m, 0LL);
      if ( v77 )
      {
        v78 = v77;
        Instance = (int64_t)entity;
        if ( !entity )
          goto LABEL_152;
        v79 = UserDeckEntity__GetEquipList((UserDeckEntity_o *)entity, m, 0LL);
        v80 = UserServantEntity__getFriendPointUpVal(v78, v79, 0LL);
        if ( UserServantEntity__getFriendPointUpType(v78, v79, 0LL) == 123 )
          *p_friendPointUpVal += v80;
      }
      v75 = BalanceConfig_TypeInfo;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerRootComponent___OnClickBack_b__67_0(
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

  if ( (byte_42132BD & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_3055/*"CLICK_BACK"*/, v6);
    byte_42132BD = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    if ( !byte_4210848 )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v10);
      byte_4210848 = 1;
    }
    v11 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v11 = TerminalPramsManager_TypeInfo;
    }
    v11->static_fields->_IsAutoResume_k__BackingField = 1;
    Instance = (CommonUI_o *)this->fields.myFSM;
    if ( Instance )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3055/*"CLICK_BACK"*/, 0LL);
      return;
    }
LABEL_16:
    sub_B0D97C(Instance);
  }
  this->fields.state = 3;
}


void __fastcall FollowerRootComponent__beginFinish(FollowerRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  FollowerRootComponent_c *v12; // x0
  struct FollowerRootComponent_StaticFields *static_fields; // x0

  if ( (byte_42132A0 & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, method);
    sub_B0D8A4(&FollowerRootComponent_TypeInfo, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, v4);
    byte_42132A0 = 1;
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
  v12 = FollowerRootComponent_TypeInfo;
  if ( (BYTE3(FollowerRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FollowerRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerRootComponent_TypeInfo);
    v12 = FollowerRootComponent_TypeInfo;
  }
  static_fields = v12->static_fields;
  static_fields->partyOrganizationAtlasCache = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&static_fields->partyOrganizationAtlasCache, 0LL, v6, v7, v8, v9, v10, v11);
  operationItemListViewManager = (FollowerSelectItemListViewManager_o *)this->fields.backSkinSprite;
  if ( !operationItemListViewManager
    || (operationItemListViewManager = (FollowerSelectItemListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                                (UnityEngine_Component_o *)operationItemListViewManager,
                                                                                0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)operationItemListViewManager, 0, 0LL),
        (operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__)) == 0LL) )
  {
LABEL_16:
    sub_B0D97C(operationItemListViewManager);
  }
  AtlasManager__ReleaseUISkin((AtlasManager_o *)operationItemListViewManager, 2, 0, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleasePartyOrganizationAtlas(0LL);
}


void __fastcall FollowerRootComponent__beginInitialize(FollowerRootComponent_o *this, const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x0

  if ( (byte_4213296 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_4213296 = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  AvalonSceneManager__endInitialize(Instance, (SceneRootComponent_o *)this, 0LL);
}


void __fastcall FollowerRootComponent__beginPause(FollowerRootComponent_o *this, const MethodInfo *method)
{
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x0

  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    sub_B0D97C(0LL);
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
  int64_t operationItemListViewManager; // x0
  bool v27; // w1
  const MethodInfo *selectItemNum; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  __int64 v35; // x10
  FollowerSelectItemListViewItem_o *Item; // x0
  struct BattleSetupInfo_o *battleSetupInfo; // x22
  FollowerSelectItemListViewItem_o *v38; // x21
  struct BattleSetupInfo_o *v39; // x8
  int klass_high; // w9
  struct BattleSetupInfo_o *v41; // x8
  int32_t FollowerType; // w0
  const MethodInfo *v43; // x2
  __int64 v44; // x1
  struct BattleSetupInfo_o *v45; // x8
  int32_t followerClassId; // w1
  Il2CppObject *v47; // x19
  __int64 v48; // x10
  Il2CppObject *v49; // x1
  struct BattleSetupInfo_o **p_battleSetupInfo; // x20
  struct BattleSetupInfo_o *v51; // x8
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x21
  int32_t tutorialMode; // w8
  struct BattleSetupInfo_o *v54; // x8
  FollowerSelectItemListViewManager_o *v55; // x20
  struct BattleSetupInfo_o *v56; // x8
  const MethodInfo *v57; // x4
  struct BattleSetupInfo_o *v58; // x8
  const MethodInfo *v59; // x1
  CommonUI_o *v60; // x20
  struct BattleSetupInfo_o *v61; // x8
  PartyListViewItem_o *v62; // x20
  UnityEngine_Component_o *v63; // x8
  int32_t i; // w21
  FollowerSelectItemListViewManager_o *v65; // x22
  struct BattleSetupInfo_o *v66; // x8
  const MethodInfo *v67; // x4
  struct BattleSetupInfo_o *v68; // x8
  FollowerSelectItemListViewManager_o *v69; // x22
  __int64 v70; // x1
  __int64 v71; // x2
  FollowerSelectItemListViewManager_CallbackFunc_o *v72; // x23
  PartyOrganizationListViewItem_o *Member; // x0
  struct FollowerInfo_o *followerInfo; // x8
  FollowerSelectItemListViewManager_o *v75; // x20
  int64_t userId; // x21
  struct QuestRestrictionInfo_o *v77; // x8
  PartyOrganizationListViewItem_o *v78; // x0
  struct FollowerInfo_o *v79; // x8
  unsigned int type; // w8
  BalanceConfig_c *v81; // x0
  int32_t v82; // w22

  if ( (byte_421329E & 1) == 0 )
  {
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, data);
    sub_B0D8A4(&BalanceConfig_TypeInfo, v10);
    sub_B0D8A4(&BattleSetupInfo_TypeInfo, v11);
    sub_B0D8A4(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, v12);
    sub_B0D8A4(&Method_FollowerRootComponent_OnSelectFollowerItem__, v13);
    sub_B0D8A4(&FollowerRootComponent_TypeInfo, v14);
    sub_B0D8A4(&RandomLimitCountManager_TypeInfo, v15);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v16);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17);
    sub_B0D8A4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v18);
    sub_B0D8A4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v19);
    sub_B0D8A4(&SupportInfoJump_TypeInfo, v20);
    sub_B0D8A4(&TutorialFlag_TypeInfo, v21);
    byte_421329E = 1;
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
  sub_B0D840(
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
  operationItemListViewManager = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !operationItemListViewManager )
    goto LABEL_123;
  if ( *(_BYTE *)(operationItemListViewManager + 80) )
  {
    v27 = 0;
    if ( !titleInfo )
      goto LABEL_123;
  }
  else
  {
    v27 = this->fields.tutorialMode != 2;
    if ( !titleInfo )
      goto LABEL_123;
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
          operationItemListViewManager = (int64_t)this->fields.operationItemListViewManager;
          if ( !operationItemListViewManager )
            goto LABEL_123;
          Item = FollowerSelectItemListViewManager__GetItem(
                   (FollowerSelectItemListViewManager_o *)operationItemListViewManager,
                   (int32_t)selectItemNum,
                   0LL);
          if ( Item )
          {
            battleSetupInfo = this->fields.battleSetupInfo;
            v38 = Item;
            this->fields.state = 5;
            operationItemListViewManager = FollowerSelectItemListViewItem__get_FollowerId(Item, 0LL);
            if ( battleSetupInfo )
            {
              battleSetupInfo->fields.followerId = operationItemListViewManager;
              v39 = this->fields.battleSetupInfo;
              if ( v39 )
              {
                v39->fields.followerClassId = (int32_t)data[3].klass;
                klass_high = HIDWORD(data[3].klass);
                v41 = this->fields.battleSetupInfo;
                if ( klass_high <= 0 )
                  klass_high = v38->fields.supportDeckId;
                if ( v41 )
                {
                  v41->fields.followerSupportDeckId = klass_high;
                  FollowerType = FollowerSelectItemListViewItem__get_FollowerType(v38, 0LL);
                  FollowerRootComponent__setBattleSetupFollowType(this, FollowerType, v43);
                  if ( this->fields.operationItemListViewManager )
                  {
                    if ( !byte_42132BE )
                    {
                      sub_B0D8A4(&FollowerSelectItemListViewManager_TypeInfo, v44);
                      byte_42132BE = 1;
                    }
                    operationItemListViewManager = (int64_t)FollowerSelectItemListViewManager_TypeInfo;
                    if ( (BYTE3(FollowerSelectItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
                      operationItemListViewManager = (int64_t)FollowerSelectItemListViewManager_TypeInfo;
                    }
                    v45 = this->fields.battleSetupInfo;
                    if ( v45 )
                    {
                      followerClassId = v45->fields.followerClassId;
                      if ( *(_DWORD *)(*(_QWORD *)(operationItemListViewManager + 184) + 8LL) != followerClassId )
                      {
                        operationItemListViewManager = (int64_t)this->fields.operationItemListViewManager;
                        if ( !operationItemListViewManager )
                          goto LABEL_123;
                        if ( FollowerSelectItemListViewManager__ChangeClass(
                               (FollowerSelectItemListViewManager_o *)operationItemListViewManager,
                               followerClassId,
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
                      v47 = (Il2CppObject *)this->fields.battleSetupInfo;
                      operationItemListViewManager = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
                      if ( operationItemListViewManager )
                      {
                        AvalonSceneManager__pushScene(
                          (AvalonSceneManager_o *)operationItemListViewManager,
                          40,
                          1,
                          v47,
                          0LL);
                        return;
                      }
                    }
                  }
                }
              }
            }
LABEL_123:
            sub_B0D97C(operationItemListViewManager);
          }
        }
      }
    }
  }
  else
  {
    if ( data
      && (v48 = *(&BattleSetupInfo_TypeInfo->_2.bitflags2 + 1), *(&data->klass->_2.bitflags2 + 1) >= (unsigned int)v48) )
    {
      if ( (BattleSetupInfo_c *)data->klass->_2.typeHierarchy[v48 - 1] == BattleSetupInfo_TypeInfo )
        v49 = data;
      else
        v49 = 0LL;
    }
    else
    {
      v49 = 0LL;
    }
    this->fields.battleSetupInfo = (struct BattleSetupInfo_o *)v49;
    p_battleSetupInfo = &this->fields.battleSetupInfo;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.battleSetupInfo,
      (System_Int32_array **)v49,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
    v51 = this->fields.battleSetupInfo;
    if ( !v51 )
      return;
    questRestrictionInfo = v51->fields.questRestrictionInfo;
    if ( !questRestrictionInfo )
      goto LABEL_123;
    if ( !QuestRestrictionInfo__IsMyServantOrNpcRestriction(v51->fields.questRestrictionInfo, 0LL)
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
    operationItemListViewManager = TutorialFlag__Get_28088484(102, 0LL);
    if ( (operationItemListViewManager & 1) == 0 )
    {
      v54 = *p_battleSetupInfo;
      if ( !*p_battleSetupInfo )
        goto LABEL_123;
      goto LABEL_78;
    }
  }
  FollowerRootComponent__UpdateDeckInfomation(this, selectItemNum);
  tutorialMode = this->fields.tutorialMode;
  if ( tutorialMode != 4 )
  {
    if ( tutorialMode != 3 )
    {
      if ( tutorialMode == 1 )
      {
        v54 = this->fields.battleSetupInfo;
        if ( !v54 )
          goto LABEL_123;
LABEL_78:
        if ( v54->fields.isChildFollower )
        {
          FollowerRootComponent__ReturnBattleSetupMenu(this, selectItemNum);
          return;
        }
        goto LABEL_111;
      }
LABEL_76:
      FollowerRootComponent__ReturnSupportList(this, selectItemNum);
      return;
    }
    operationItemListViewManager = (int64_t)this->fields.battleSetupInfo;
    this->fields.selectItemNum = -1;
    *(_QWORD *)&this->fields.tutorialMode = 0x100000003LL;
    if ( !operationItemListViewManager )
      goto LABEL_123;
    v55 = this->fields.operationItemListViewManager;
    operationItemListViewManager = BattleSetupInfo__TargetQuestId(
                                     (BattleSetupInfo_o *)operationItemListViewManager,
                                     0LL);
    v56 = this->fields.battleSetupInfo;
    if ( !v56 )
      goto LABEL_123;
    if ( !v55 )
      goto LABEL_123;
    FollowerSelectItemListViewManager__CreateList(
      v55,
      operationItemListViewManager,
      v56->fields.questPhase,
      this->fields.friendPointUpVal,
      this->fields.friendPointUpMaxVal,
      this->fields.friendPointCampaignEntityList,
      v56->fields.questRestrictionInfo,
      0LL);
    v58 = this->fields.battleSetupInfo;
    if ( !v58 )
      goto LABEL_123;
    operationItemListViewManager = (int64_t)this->fields.followerQuestInfomationDraw;
    if ( !operationItemListViewManager )
      goto LABEL_123;
    FollowerQuestInfomationDraw__SetInfomation(
      (FollowerQuestInfomationDraw_o *)operationItemListViewManager,
      v58->fields.questRestrictionInfo,
      0,
      0LL,
      v57);
    this->fields.state = 2;
    FollowerRootComponent__OnMoveEnd(this, v59);
    goto LABEL_70;
  }
  if ( this->fields.state == 6 )
    goto LABEL_76;
  v61 = this->fields.battleSetupInfo;
  if ( !v61 )
    goto LABEL_123;
  if ( !v61->fields.isChildFollower )
  {
    v77 = v61->fields.questRestrictionInfo;
    if ( !v77 )
      goto LABEL_123;
    if ( v77->fields.isNotTransitionSupportList )
    {
LABEL_111:
      FollowerRootComponent__ReturnQuestMenu(this, selectItemNum);
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
  operationItemListViewManager = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !operationItemListViewManager )
    goto LABEL_123;
  v62 = *(PartyListViewItem_o **)(operationItemListViewManager + 72);
  operationItemListViewManager = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !operationItemListViewManager )
    goto LABEL_123;
  v63 = (UnityEngine_Component_o *)this->fields.operationItemListViewManager;
  i = *(_DWORD *)(operationItemListViewManager + 56);
  this->fields.tutorialState = 0;
  this->fields.selectItemNum = -1;
  if ( !v63 )
    goto LABEL_123;
  operationItemListViewManager = (int64_t)UnityEngine_Component__get_gameObject(v63, 0LL);
  if ( !operationItemListViewManager )
    goto LABEL_123;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)operationItemListViewManager, 1, 0LL);
  operationItemListViewManager = (int64_t)this->fields.battleSetupInfo;
  if ( !operationItemListViewManager )
    goto LABEL_123;
  v65 = this->fields.operationItemListViewManager;
  operationItemListViewManager = BattleSetupInfo__TargetQuestId((BattleSetupInfo_o *)operationItemListViewManager, 0LL);
  v66 = this->fields.battleSetupInfo;
  if ( !v66 )
    goto LABEL_123;
  if ( !v65 )
    goto LABEL_123;
  FollowerSelectItemListViewManager__CreateList(
    v65,
    operationItemListViewManager,
    v66->fields.questPhase,
    this->fields.friendPointUpVal,
    this->fields.friendPointUpMaxVal,
    this->fields.friendPointCampaignEntityList,
    v66->fields.questRestrictionInfo,
    0LL);
  v68 = this->fields.battleSetupInfo;
  if ( !v68 )
    goto LABEL_123;
  operationItemListViewManager = (int64_t)this->fields.followerQuestInfomationDraw;
  if ( !operationItemListViewManager )
    goto LABEL_123;
  FollowerQuestInfomationDraw__SetInfomation(
    (FollowerQuestInfomationDraw_o *)operationItemListViewManager,
    v68->fields.questRestrictionInfo,
    i,
    0LL,
    v67);
  this->fields.state = 3;
  v69 = this->fields.operationItemListViewManager;
  v72 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_B0D974(
                                                              FollowerSelectItemListViewManager_CallbackFunc_TypeInfo,
                                                              v70,
                                                              v71);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v72,
    (Il2CppObject *)this,
    Method_FollowerRootComponent_OnSelectFollowerItem__,
    0LL);
  if ( !v69 )
    goto LABEL_123;
  FollowerSelectItemListViewManager__SetMode(v69, 2, v72, 0LL);
  if ( v62 )
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
          Member = PartyListViewItem__GetMember(v62, i - 1, 0LL);
          if ( Member )
          {
            followerInfo = Member->fields.followerInfo;
            if ( followerInfo )
            {
              v75 = this->fields.operationItemListViewManager;
              userId = followerInfo->fields.userId;
              operationItemListViewManager = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(Member, 0LL);
              if ( !operationItemListViewManager )
                goto LABEL_123;
              if ( !v75 )
                goto LABEL_123;
              operationItemListViewManager = FollowerSelectItemListViewManager__GetItemIndex(
                                               v75,
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
          v81 = BalanceConfig_TypeInfo;
          v82 = i - 1;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v81 = BalanceConfig_TypeInfo;
          }
          if ( v82 >= v81->static_fields->DeckMemberMax )
            break;
          v78 = PartyListViewItem__GetMember(v62, v82, 0LL);
          if ( v78 )
          {
            v79 = v78->fields.followerInfo;
            if ( v79 )
            {
              type = v79->fields.type;
              if ( type > 4 || ((1 << type) & 0x19) == 0 )
                goto LABEL_102;
            }
          }
        }
      }
    }
  }
LABEL_70:
  operationItemListViewManager = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v60 = (CommonUI_o *)operationItemListViewManager;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !v60 )
    goto LABEL_123;
  CommonUI__maskFadein(v60, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
  SceneRootComponent__sendMessageResume((SceneRootComponent_o *)this, 0LL);
}


void __fastcall FollowerRootComponent__beginStartUp(
        FollowerRootComponent_o *this,
        Il2CppObject *data,
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
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  MissionNotifyManager_o *titleInfo; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  struct System_Collections_Generic_List_MissionNotifyDispInfo__o *mDispInfos; // x8
  struct BattleSetupInfo_o *monitor; // x1
  BattleSetupInfo_o **p_battleSetupInfo; // x20
  const MethodInfo *v42; // x1
  __int64 v43; // x10
  struct BattleSetupInfo_o *v44; // x1
  const MethodInfo *v45; // x1
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_Int32_array **partyOrganizationAtlas; // x21
  FollowerRootComponent_c *v53; // x0
  struct FollowerRootComponent_StaticFields *static_fields; // x0
  UILabel_o *infomationLabel; // x21
  UnityEngine_GameObject_o *refreshButtonBase; // x21
  const MethodInfo *v57; // x1
  bool v58; // w8
  _BYTE *v59; // x8
  ConstantMaster_o *v60; // x21
  BattleSetupInfo_o *v61; // x8
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x9
  __int64 v63; // x1
  __int64 v64; // x2
  System_Action_o *v65; // x20
  System_Action_o *v66; // x20
  QuestPhaseMaster_o *v67; // x21
  NpcFollowerMaster_o *v68; // x21
  const MethodInfo *v69; // x1
  const MethodInfo *v70; // x4
  struct BattleSetupInfo_o *battleSetupInfo; // x8

  if ( (byte_4213297 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, data);
    sub_B0D8A4(&AtlasManager_TypeInfo, v5);
    sub_B0D8A4(&BalanceConfig_TypeInfo, v6);
    sub_B0D8A4(&BattleSetupInfo_TypeInfo, v7);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ConstantMaster___, v8);
    sub_B0D8A4(&Method_DataManager_GetMasterData_NpcFollowerMaster___, v9);
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v10);
    sub_B0D8A4(&Method_FollowerRootComponent_EndLoadCommonBg__, v11);
    sub_B0D8A4(&Method_FollowerRootComponent_EndLoadPartyOrganizationAtlasSimple__, v12);
    sub_B0D8A4(&FollowerRootComponent_TypeInfo, v13);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v14);
    sub_B0D8A4(&RandomLimitCountManager_TypeInfo, v15);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_B0D8A4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v17);
    sub_B0D8A4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v18);
    sub_B0D8A4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v19);
    sub_B0D8A4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v20);
    sub_B0D8A4(&TutorialFlag_TypeInfo, v21);
    sub_B0D8A4(&StringLiteral_13578/*"TUTORIAL_SUPPORT_QUEST_ID"*/, v22);
    sub_B0D8A4(&StringLiteral_13579/*"TUTORIAL_SUPPORT_QUEST_PHASE"*/, v23);
    sub_B0D8A4(&StringLiteral_6393/*"FOLLOWER_SELECT_EXPLANATION2"*/, v24);
    sub_B0D8A4(&StringLiteral_1/*""*/, v25);
    byte_4213297 = 1;
  }
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  titleInfo = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !titleInfo )
    goto LABEL_114;
  if ( PartyOrganizationUtility__ExistsTemporaryPartyInfo((PartyOrganizationUtility_o *)titleInfo, 0LL) )
  {
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    titleInfo = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !titleInfo )
      goto LABEL_114;
    mDispInfos = titleInfo[1].fields.mDispInfos;
    if ( !mDispInfos )
      goto LABEL_114;
    monitor = (struct BattleSetupInfo_o *)mDispInfos[1].monitor;
    this->fields.battleSetupInfo = monitor;
    p_battleSetupInfo = &this->fields.battleSetupInfo;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.battleSetupInfo,
      (System_Int32_array **)monitor,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
    if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
    }
    titleInfo = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !titleInfo )
      goto LABEL_114;
    if ( !MissionNotifyManager__IsPause(titleInfo, 0LL) )
    {
      if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
      }
      titleInfo = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
      if ( !titleInfo )
        goto LABEL_114;
      MissionNotifyManager__StartPause(titleInfo, 0LL);
    }
  }
  else
  {
    if ( data
      && (v43 = *(&BattleSetupInfo_TypeInfo->_2.bitflags2 + 1), *(&data->klass->_2.bitflags2 + 1) >= (unsigned int)v43) )
    {
      v44 = (BattleSetupInfo_c *)data->klass->_2.typeHierarchy[v43 - 1] == BattleSetupInfo_TypeInfo
          ? (struct BattleSetupInfo_o *)data
          : 0LL;
    }
    else
    {
      v44 = 0LL;
    }
    this->fields.battleSetupInfo = v44;
    p_battleSetupInfo = &this->fields.battleSetupInfo;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.battleSetupInfo,
      (System_Int32_array **)v44,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
  }
  if ( !*p_battleSetupInfo )
  {
    FollowerRootComponent__ReturnQuestMenu(this, v42);
    return;
  }
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  RandomLimitCountManager__set_EnableRandomLimitCount(1, 0LL);
  FollowerRootComponent__PlayBGM(this, v45);
  partyOrganizationAtlas = (System_Int32_array **)this->fields.partyOrganizationAtlas;
  v53 = FollowerRootComponent_TypeInfo;
  if ( (BYTE3(FollowerRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FollowerRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerRootComponent_TypeInfo);
    v53 = FollowerRootComponent_TypeInfo;
  }
  static_fields = v53->static_fields;
  static_fields->partyOrganizationAtlasCache = (struct UIAtlas_o *)partyOrganizationAtlas;
  sub_B0D840(
    (BattleServantConfConponent_o *)&static_fields->partyOrganizationAtlasCache,
    partyOrganizationAtlas,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  titleInfo = (MissionNotifyManager_o *)this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_114;
  TitleInfoControl__setTitleInfo_17507952((TitleInfoControl_o *)titleInfo, this->fields.myFSM, 3, 63, 0LL);
  titleInfo = (MissionNotifyManager_o *)this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_114;
  TitleInfoControl__setBackBtnEnable((TitleInfoControl_o *)titleInfo, 1, 0LL);
  titleInfo = (MissionNotifyManager_o *)this->fields.operationItemListViewManager;
  if ( !titleInfo )
    goto LABEL_114;
  FollowerSelectItemListViewManager__DestroyList_29687052(
    (FollowerSelectItemListViewManager_o *)titleInfo,
    this->fields.battleSetupInfo,
    0LL);
  infomationLabel = this->fields.infomationLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  titleInfo = (MissionNotifyManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6393/*"FOLLOWER_SELECT_EXPLANATION2"*/, 0LL);
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
  v58 = titleInfo[1].fields.mMissionNotifyComps || LODWORD(titleInfo[1].fields.mNoticeNumberComp) != 0;
  if ( (v58 & BYTE1(titleInfo->fields.noDisplayMissionCondTypeHashSet)) != 0
    && (BattleSetupInfo__SetRestriction((BattleSetupInfo_o *)titleInfo, 1, 0LL),
        (titleInfo = (MissionNotifyManager_o *)*p_battleSetupInfo) == 0LL)
    || (v59 = titleInfo[1].monitor) == 0LL )
  {
LABEL_114:
    sub_B0D97C(titleInfo);
  }
  if ( v59[378] )
  {
LABEL_57:
    FollowerRootComponent__StartBattleSetupMenu(this, v57);
    return;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_28088484(102, 0LL) )
  {
    titleInfo = (MissionNotifyManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !titleInfo )
      goto LABEL_114;
    titleInfo = (MissionNotifyManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            (DataManager_o *)titleInfo,
                                            (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ConstantMaster___);
    if ( !titleInfo )
      goto LABEL_114;
    v60 = (ConstantMaster_o *)titleInfo;
    titleInfo = (MissionNotifyManager_o *)ConstantMaster__GetValue(
                                            (ConstantMaster_o *)titleInfo,
                                            (System_String_o *)StringLiteral_13578/*"TUTORIAL_SUPPORT_QUEST_ID"*/,
                                            0LL);
    v61 = *p_battleSetupInfo;
    if ( !*p_battleSetupInfo )
      goto LABEL_114;
    if ( v61->fields.questId == (_DWORD)titleInfo )
    {
      titleInfo = (MissionNotifyManager_o *)ConstantMaster__GetValue(v60, (System_String_o *)StringLiteral_13579/*"TUTORIAL_SUPPORT_QUEST_PHASE"*/, 0LL);
      v61 = *p_battleSetupInfo;
      if ( !*p_battleSetupInfo )
        goto LABEL_114;
      if ( v61->fields.questPhase == (_DWORD)titleInfo )
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
    v61 = *p_battleSetupInfo;
    if ( !*p_battleSetupInfo )
      goto LABEL_114;
  }
  questRestrictionInfo = v61->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    goto LABEL_114;
  if ( !questRestrictionInfo->fields.isNotTransitionSupportList
    && !questRestrictionInfo->fields.isNpcOnlyBattle
    && !questRestrictionInfo->fields.isFixedMyServantSingle
    && !questRestrictionInfo->fields.isNoSupportBattle )
  {
    titleInfo = (MissionNotifyManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( titleInfo )
    {
      titleInfo = (MissionNotifyManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)titleInfo,
                                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
      if ( *p_battleSetupInfo )
      {
        v67 = (QuestPhaseMaster_o *)titleInfo;
        titleInfo = (MissionNotifyManager_o *)BattleSetupInfo__TargetQuestId(*p_battleSetupInfo, 0LL);
        if ( *p_battleSetupInfo )
        {
          if ( v67 )
          {
            titleInfo = (MissionNotifyManager_o *)QuestPhaseMaster__GetEntity(
                                                    v67,
                                                    (int32_t)titleInfo,
                                                    (*p_battleSetupInfo)->fields.questPhase,
                                                    0LL);
            if ( titleInfo && LOBYTE(titleInfo->fields.mNoDispInfos) )
            {
              titleInfo = (MissionNotifyManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !titleInfo )
                goto LABEL_114;
              titleInfo = (MissionNotifyManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                      (DataManager_o *)titleInfo,
                                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
              if ( !*p_battleSetupInfo )
                goto LABEL_114;
              v68 = (NpcFollowerMaster_o *)titleInfo;
              titleInfo = (MissionNotifyManager_o *)BattleSetupInfo__TargetQuestId(*p_battleSetupInfo, 0LL);
              if ( !*p_battleSetupInfo )
                goto LABEL_114;
              if ( !v68 )
                goto LABEL_114;
              titleInfo = (MissionNotifyManager_o *)NpcFollowerMaster__GetQuestFollowerList(
                                                      v68,
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
                FollowerRootComponent__UpdateDeckInfomation(this, v69);
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
                      v70);
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
  titleInfo = (MissionNotifyManager_o *)v61->fields.questRestrictionInfo;
  if ( !titleInfo )
    goto LABEL_114;
  if ( QuestRestrictionInfo__IsMyServantOrNpcRestriction((QuestRestrictionInfo_o *)titleInfo, 0LL) )
  {
    this->fields.isForceFadeOut = 1;
    this->fields.tutorialMode = 4;
LABEL_83:
    v65 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v63, v64);
    System_Action___ctor(v65, (Il2CppObject *)this, Method_FollowerRootComponent_EndLoadCommonBg__, 0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__LoadUISkin(v65, 2, 1, 0LL);
    return;
  }
  this->fields.tutorialMode = 1;
LABEL_88:
  v66 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v63, v64);
  System_Action___ctor(
    v66,
    (Il2CppObject *)this,
    Method_FollowerRootComponent_EndLoadPartyOrganizationAtlasSimple__,
    0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadPartyOrganizationAtlas(v66, 1, 0LL);
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
    sub_B0D97C(this);
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
  Il2CppObject *v3; // x19
  struct FollowerRootComponent___c_StaticFields *static_fields; // x0

  if ( (byte_4210F4D & 1) == 0 )
  {
    sub_B0D8A4(&FollowerRootComponent___c_TypeInfo, v1);
    byte_4210F4D = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(FollowerRootComponent___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = FollowerRootComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct FollowerRootComponent___c_o *)v3;
  sub_B0D840(static_fields, v3);
}


void __fastcall FollowerRootComponent___c___ctor(FollowerRootComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall FollowerRootComponent___c___Init_b__47_0(FollowerRootComponent___c_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  PartyOrganizationUtility_c *v3; // x0
  CommonUI_o *Instance; // x0

  if ( (byte_4210F4E & 1) == 0 )
  {
    sub_B0D8A4(&PartyOrganizationUtility_TypeInfo, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v2);
    byte_4210F4E = 1;
  }
  v3 = PartyOrganizationUtility_TypeInfo;
  if ( (BYTE3(PartyOrganizationUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
    v3 = PartyOrganizationUtility_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(v3->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  CommonUI__CloseNotificationDialog(Instance, 0LL);
}


void __fastcall FollowerRootComponent___c___OnSelectFollowerItem_b__62_0(
        FollowerRootComponent___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  PartyOrganizationUtility_c *v3; // x0
  CommonUI_o *Instance; // x0

  if ( (byte_4210F4F & 1) == 0 )
  {
    sub_B0D8A4(&PartyOrganizationUtility_TypeInfo, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v2);
    byte_4210F4F = 1;
  }
  v3 = PartyOrganizationUtility_TypeInfo;
  if ( (BYTE3(PartyOrganizationUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
    v3 = PartyOrganizationUtility_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(v3->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  CommonUI__CloseNotificationDialog(Instance, 0LL);
}