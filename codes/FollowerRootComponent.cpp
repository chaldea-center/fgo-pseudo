void __fastcall FollowerRootComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct FollowerRootComponent_StaticFields *static_fields; // x8

  if ( (byte_4AFCB7B & 1) == 0 )
  {
    sub_1BC3008(&FollowerRootComponent_TypeInfo, v1);
    byte_4AFCB7B = 1;
  }
  static_fields = FollowerRootComponent_TypeInfo->static_fields;
  static_fields->LIST_UPDATE_MESSAGE_FONT_SIZE = 26;
  *(_QWORD *)&static_fields->RETURN_TERMINAL_MESSAGE_FONT_SIZE = 0xA0000001BLL;
  static_fields->RETURN_TERMINAL_MESSAGE_SPACING_Y = 5;
}


void __fastcall FollowerRootComponent___ctor(FollowerRootComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4AFCB7A & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_1/*""*/, method);
    byte_4AFCB7A = 1;
  }
  this->fields.backupBgmName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BC2FAC(&this->fields.backupBgmName);
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0LL);
}


void __fastcall FollowerRootComponent__CallbackFollowerList(
        FollowerRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_4AFCB5F & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_10976/*"REQUEST_OK"*/, result);
    byte_4AFCB5F = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1BC3264(0LL, result);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_10976/*"REQUEST_OK"*/, 0LL);
}


void __fastcall FollowerRootComponent__CallbackInitRecommendFollowerRequest(
        FollowerRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  ListViewManager_o *operationItemListViewManager; // x0
  const MethodInfo *v5; // x1

  operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
  this->fields.isInitRecommendRequest = 1;
  if ( !operationItemListViewManager )
    sub_1BC3264(0LL, result);
  ListViewManager__SetEmptyMessageBase(operationItemListViewManager, 1, 0LL);
  FollowerRootComponent__Init(this, v5);
}


void __fastcall FollowerRootComponent__CallbackRefresh(
        FollowerRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  const MethodInfo *v6; // x1
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x0
  FollowerSelectItemListViewManager_o *v8; // x20
  const MethodInfo *v9; // x7
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  struct FollowerSelectItemListViewManager_o *v11; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v12; // x21
  const MethodInfo *v13; // x2

  if ( (byte_4AFCB72 & 1) == 0 )
  {
    sub_1BC3008(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, result);
    sub_1BC3008(&Method_FollowerRootComponent_OnSelectFollowerItem__, v4);
    sub_1BC3008(&RandomLimitCountManager_TypeInfo, v5);
    byte_4AFCB72 = 1;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  RandomLimitCountManager__set_EnableRandomLimitCount(0, 0LL);
  RandomLimitCountManager__set_EnableRandomLimitCount(1, 0LL);
  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    goto LABEL_12;
  FollowerSelectItemListViewManager__SaveSortFilter(operationItemListViewManager, v6);
  operationItemListViewManager = (FollowerSelectItemListViewManager_o *)this->fields.battleSetupInfo;
  if ( !operationItemListViewManager )
    goto LABEL_12;
  v8 = this->fields.operationItemListViewManager;
  operationItemListViewManager = (FollowerSelectItemListViewManager_o *)BattleSetupInfo__TargetQuestId(
                                                                          (BattleSetupInfo_o *)operationItemListViewManager,
                                                                          0LL);
  battleSetupInfo = this->fields.battleSetupInfo;
  if ( !battleSetupInfo )
    goto LABEL_12;
  if ( !v8 )
    goto LABEL_12;
  FollowerSelectItemListViewManager__CreateList(
    v8,
    (int32_t)operationItemListViewManager,
    battleSetupInfo->fields.questPhase,
    this->fields.friendPointUpVal,
    this->fields.friendPointUpMaxVal,
    this->fields.friendPointCampaignEntityList,
    battleSetupInfo->fields.questRestrictionInfo,
    v9);
  v11 = this->fields.operationItemListViewManager;
  v12 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1BC3254(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v12,
    (Il2CppObject *)this,
    (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
    0LL);
  if ( !v11
    || (v11->fields.callbackFunc = v12,
        sub_1BC2FAC(&v11->fields.callbackFunc),
        FollowerSelectItemListViewManager__SetMode_31775360(v11, 2, v13),
        (operationItemListViewManager = (FollowerSelectItemListViewManager_o *)this->fields.commonConfirmDialog) == 0LL) )
  {
LABEL_12:
    sub_1BC3264(operationItemListViewManager, v6);
  }
  CommonConfirmDialog__Close((CommonConfirmDialog_o *)operationItemListViewManager, 0LL);
}


void __fastcall FollowerRootComponent__EndCloseShowServant(FollowerRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_4AFCB66 & 1) == 0 )
  {
    sub_1BC3008(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_1BC3008(&Method_FollowerRootComponent_OnSelectFollowerItem__, v3);
    byte_4AFCB66 = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v5 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1BC3254(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
    0LL);
  if ( !operationItemListViewManager )
    sub_1BC3264(v6, v7);
  operationItemListViewManager->fields.callbackFunc = v5;
  sub_1BC2FAC(&operationItemListViewManager->fields.callbackFunc);
  FollowerSelectItemListViewManager__SetMode_31775360(operationItemListViewManager, 2, v8);
}


void __fastcall FollowerRootComponent__EndCloseShowServantEquip(
        FollowerRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_4AFCB69 & 1) == 0 )
  {
    sub_1BC3008(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_1BC3008(&Method_FollowerRootComponent_OnSelectFollowerItem__, v3);
    byte_4AFCB69 = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v5 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1BC3254(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
    0LL);
  if ( !operationItemListViewManager )
    sub_1BC3264(v6, v7);
  operationItemListViewManager->fields.callbackFunc = v5;
  sub_1BC2FAC(&operationItemListViewManager->fields.callbackFunc);
  FollowerSelectItemListViewManager__SetMode_31775360(operationItemListViewManager, 2, v8);
}


void __fastcall FollowerRootComponent__EndCloseTutorialArrow(FollowerRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *tutorialMaskBase2; // x0

  if ( (byte_4AFCB74 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_8574/*"MENU_SELECT_ITEM"*/, method);
    byte_4AFCB74 = 1;
  }
  tutorialMaskBase2 = this->fields.tutorialMaskBase2;
  if ( !tutorialMaskBase2
    || (UnityEngine_GameObject__SetActive(tutorialMaskBase2, 0, 0LL),
        tutorialMaskBase2 = (UnityEngine_GameObject_o *)this->fields.myFSM,
        this->fields.state = 3,
        !tutorialMaskBase2) )
  {
    sub_1BC3264(tutorialMaskBase2, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)tutorialMaskBase2, (System_String_o *)StringLiteral_8574/*"MENU_SELECT_ITEM"*/, 0LL);
}


void __fastcall FollowerRootComponent__EndLoadCommonBg(FollowerRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Component_o *backSkinSprite; // x0
  System_Action_o *v6; // x20

  if ( (byte_4AFCB57 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    sub_1BC3008(&AtlasManager_TypeInfo, v3);
    sub_1BC3008(&Method_FollowerRootComponent_EndLoadOutGameAtlas__, v4);
    byte_4AFCB57 = 1;
  }
  backSkinSprite = (UnityEngine_Component_o *)this->fields.backSkinSprite;
  if ( !backSkinSprite
    || (backSkinSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(backSkinSprite, 0LL)) == 0LL )
  {
    sub_1BC3264(backSkinSprite, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)backSkinSprite, 1, 0LL);
  v6 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_FollowerRootComponent_EndLoadOutGameAtlas__, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadOutGameAtlas(v6, 0LL);
}


void __fastcall FollowerRootComponent__EndLoadEventAtlas(FollowerRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Action_o *v5; // x20

  if ( (byte_4AFCB59 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    sub_1BC3008(&AtlasManager_TypeInfo, v3);
    sub_1BC3008(&Method_FollowerRootComponent_EndLoadPartyOrganizationAtlas__, v4);
    byte_4AFCB59 = 1;
  }
  v5 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_FollowerRootComponent_EndLoadPartyOrganizationAtlas__, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadPartyOrganizationAtlas(v5, 1, 0LL);
}


void __fastcall FollowerRootComponent__EndLoadOutGameAtlas(FollowerRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Action_o *v5; // x20

  if ( (byte_4AFCB58 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    sub_1BC3008(&AtlasManager_TypeInfo, v3);
    sub_1BC3008(&Method_FollowerRootComponent_EndLoadEventAtlas__, v4);
    byte_4AFCB58 = 1;
  }
  v5 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_FollowerRootComponent_EndLoadEventAtlas__, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventAtlas(v5, 1, 0LL);
}


void __fastcall FollowerRootComponent__EndLoadPartyOrganizationAtlas(
        FollowerRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x0
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1

  if ( (byte_4AFCB5A & 1) == 0 )
  {
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_1BC3008(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v3);
    byte_4AFCB5A = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    goto LABEL_15;
  FollowerSelectItemListViewManager__AdjustButton(operationItemListViewManager, method);
  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    goto LABEL_15;
  FollowerSelectItemListViewManager__SetClassBoardInfo(operationItemListViewManager, method);
  SceneRootComponent__beginStartUp_40503008((SceneRootComponent_o *)this, 0LL);
  if ( this->fields.isForceFadeOut )
  {
    this->fields.isForceFadeOut = 0;
    operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !operationItemListViewManager )
      goto LABEL_15;
    CommonUI__maskFadeInit((CommonUI_o *)operationItemListViewManager, 0LL);
    operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !operationItemListViewManager )
      goto LABEL_15;
    CommonUI__maskFadeout((CommonUI_o *)operationItemListViewManager, 1, 0.0, 0LL, 0LL);
    FollowerRootComponent__StartBattleSetupMenu(this, v5);
  }
  operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !operationItemListViewManager )
    goto LABEL_15;
  if ( PartyOrganizationUtility__ExistsTemporaryPartyInfo(
         (PartyOrganizationUtility_o *)operationItemListViewManager,
         0LL) )
  {
    operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( operationItemListViewManager )
    {
      CommonUI__maskFadeInit((CommonUI_o *)operationItemListViewManager, 0LL);
      operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( operationItemListViewManager )
      {
        CommonUI__maskFadeout((CommonUI_o *)operationItemListViewManager, 1, 0.0, 0LL, 0LL);
        this->fields.state = 0;
        FollowerRootComponent__Init(this, v6);
        return;
      }
    }
LABEL_15:
    sub_1BC3264(operationItemListViewManager, method);
  }
}


void __fastcall FollowerRootComponent__EndOpenTutorialArrow(FollowerRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_4AFCB78 & 1) == 0 )
  {
    sub_1BC3008(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_1BC3008(&Method_FollowerRootComponent_OnSelectFollowerItem__, v3);
    byte_4AFCB78 = 1;
  }
  this->fields.state = 3;
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v5 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1BC3254(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
    0LL);
  if ( !operationItemListViewManager )
    sub_1BC3264(v6, v7);
  operationItemListViewManager->fields.callbackFunc = v5;
  sub_1BC2FAC(&operationItemListViewManager->fields.callbackFunc);
  FollowerSelectItemListViewManager__SetMode_31775360(operationItemListViewManager, 4, v8);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerRootComponent__EndRecommendRefreshConfirm(
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
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  NetworkManager_ResultCallbackFunc_o *v12; // x20
  FollowerRecommendSupportListRequest_o *v13; // x20
  struct BattleSetupInfo_o *v14; // x8
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v16; // x21
  const MethodInfo *v17; // x2

  v4 = this;
  if ( (byte_4AFCB71 & 1) == 0 )
  {
    sub_1BC3008(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, isDecide);
    sub_1BC3008(&Method_FollowerRootComponent_CallbackRefresh__, v5);
    sub_1BC3008(&Method_FollowerRootComponent_OnSelectFollowerItem__, v6);
    sub_1BC3008(&Method_NetworkManager_getRequest_FollowerRecommendSupportListRequest___, v7);
    sub_1BC3008(&NetworkManager_TypeInfo, v8);
    sub_1BC3008(&NetworkManager_ResultCallbackFunc_TypeInfo, v9);
    this = (FollowerRootComponent_o *)sub_1BC3008(
                                        &Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__,
                                        v10);
    byte_4AFCB71 = 1;
  }
  if ( isDecide )
  {
    battleSetupInfo = v4->fields.battleSetupInfo;
    if ( !battleSetupInfo )
      goto LABEL_18;
    if ( battleSetupInfo->fields.isChildFollower )
    {
      this = (FollowerRootComponent_o *)v4->fields.titleInfo;
      if ( !this )
        goto LABEL_18;
      TitleInfoControl__setBackBtnEnable((TitleInfoControl_o *)this, 0, 0LL);
      this = (FollowerRootComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !this )
        goto LABEL_18;
      LOBYTE(this->fields.operationItemListViewManager) = 1;
    }
    v12 = (NetworkManager_ResultCallbackFunc_o *)sub_1BC3254(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v12,
      (Il2CppObject *)v4,
      Method_FollowerRootComponent_CallbackRefresh__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    this = (FollowerRootComponent_o *)NetworkManager__getRequest_object_(
                                        v12,
                                        (const MethodInfo_3089B54 *)Method_NetworkManager_getRequest_FollowerRecommendSupportListRequest___);
    if ( v4->fields.battleSetupInfo )
    {
      v13 = (FollowerRecommendSupportListRequest_o *)this;
      this = (FollowerRootComponent_o *)BattleSetupInfo__TargetQuestId(v4->fields.battleSetupInfo, 0LL);
      v14 = v4->fields.battleSetupInfo;
      if ( v14 )
      {
        if ( v13 )
        {
          FollowerRecommendSupportListRequest__beginRequest(v13, 1, (int32_t)this, v14->fields.questPhase, 0LL);
          return;
        }
      }
    }
LABEL_18:
    sub_1BC3264(this, isDecide);
  }
  operationItemListViewManager = v4->fields.operationItemListViewManager;
  v16 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1BC3254(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v16,
    (Il2CppObject *)v4,
    (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
    0LL);
  if ( !operationItemListViewManager )
    goto LABEL_18;
  operationItemListViewManager->fields.callbackFunc = v16;
  sub_1BC2FAC(&operationItemListViewManager->fields.callbackFunc);
  FollowerSelectItemListViewManager__SetMode_31775360(operationItemListViewManager, 2, v17);
  this = (FollowerRootComponent_o *)v4->fields.commonConfirmDialog;
  if ( !this )
    goto LABEL_18;
  CommonConfirmDialog__Close((CommonConfirmDialog_o *)this, 0LL);
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
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  NetworkManager_ResultCallbackFunc_o *v12; // x20
  FollowerListRequest_o *v13; // x20
  struct BattleSetupInfo_o *v14; // x8
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v16; // x21
  const MethodInfo *v17; // x2

  v4 = this;
  if ( (byte_4AFCB70 & 1) == 0 )
  {
    sub_1BC3008(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, isDecide);
    sub_1BC3008(&Method_FollowerRootComponent_CallbackRefresh__, v5);
    sub_1BC3008(&Method_FollowerRootComponent_OnSelectFollowerItem__, v6);
    sub_1BC3008(&Method_NetworkManager_getRequest_FollowerListRequest___, v7);
    sub_1BC3008(&NetworkManager_TypeInfo, v8);
    sub_1BC3008(&NetworkManager_ResultCallbackFunc_TypeInfo, v9);
    this = (FollowerRootComponent_o *)sub_1BC3008(
                                        &Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__,
                                        v10);
    byte_4AFCB70 = 1;
  }
  if ( isDecide )
  {
    battleSetupInfo = v4->fields.battleSetupInfo;
    if ( !battleSetupInfo )
      goto LABEL_18;
    if ( battleSetupInfo->fields.isChildFollower )
    {
      this = (FollowerRootComponent_o *)v4->fields.titleInfo;
      if ( !this )
        goto LABEL_18;
      TitleInfoControl__setBackBtnEnable((TitleInfoControl_o *)this, 0, 0LL);
      this = (FollowerRootComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !this )
        goto LABEL_18;
      LOBYTE(this->fields.operationItemListViewManager) = 1;
    }
    v12 = (NetworkManager_ResultCallbackFunc_o *)sub_1BC3254(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v12,
      (Il2CppObject *)v4,
      Method_FollowerRootComponent_CallbackRefresh__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    this = (FollowerRootComponent_o *)NetworkManager__getRequest_object_(
                                        v12,
                                        (const MethodInfo_3089B54 *)Method_NetworkManager_getRequest_FollowerListRequest___);
    if ( v4->fields.battleSetupInfo )
    {
      v13 = (FollowerListRequest_o *)this;
      this = (FollowerRootComponent_o *)BattleSetupInfo__TargetQuestId(v4->fields.battleSetupInfo, 0LL);
      v14 = v4->fields.battleSetupInfo;
      if ( v14 )
      {
        if ( v13 )
        {
          FollowerListRequest__beginRequest(v13, 1, (int32_t)this, v14->fields.questPhase, 0LL);
          return;
        }
      }
    }
LABEL_18:
    sub_1BC3264(this, isDecide);
  }
  operationItemListViewManager = v4->fields.operationItemListViewManager;
  v16 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1BC3254(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v16,
    (Il2CppObject *)v4,
    (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
    0LL);
  if ( !operationItemListViewManager )
    goto LABEL_18;
  operationItemListViewManager->fields.callbackFunc = v16;
  sub_1BC2FAC(&operationItemListViewManager->fields.callbackFunc);
  FollowerSelectItemListViewManager__SetMode_31775360(operationItemListViewManager, 2, v17);
  this = (FollowerRootComponent_o *)v4->fields.commonConfirmDialog;
  if ( !this )
    goto LABEL_18;
  CommonConfirmDialog__Close((CommonConfirmDialog_o *)this, 0LL);
}


void __fastcall FollowerRootComponent__EndRefreshRest(FollowerRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_4AFCB73 & 1) == 0 )
  {
    sub_1BC3008(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_1BC3008(&Method_FollowerRootComponent_OnSelectFollowerItem__, v3);
    byte_4AFCB73 = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v5 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1BC3254(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
    0LL);
  if ( !operationItemListViewManager )
    sub_1BC3264(v6, v7);
  operationItemListViewManager->fields.callbackFunc = v5;
  sub_1BC2FAC(&operationItemListViewManager->fields.callbackFunc);
  FollowerSelectItemListViewManager__SetMode_31775360(operationItemListViewManager, 2, v8);
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
  Il2CppObject *Instance; // x20
  System_Action_o *v8; // x21

  if ( (byte_4AFCB65 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, isDecide);
    sub_1BC3008(&Method_FollowerRootComponent_EndCloseShowServant__, v4);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4AFCB65 = 1;
  }
  operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager
    || (ListViewManager__SetScrollView(
          operationItemListViewManager,
          this->fields.openScroll,
          this->fields.openOffset,
          0LL),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v8 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo),
        System_Action___ctor(v8, (Il2CppObject *)this, Method_FollowerRootComponent_EndCloseShowServant__, 0LL),
        !Instance) )
  {
    sub_1BC3264(operationItemListViewManager, isDecide);
  }
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v8, 0LL);
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
  Il2CppObject *Instance; // x20
  System_Action_o *v8; // x21

  if ( (byte_4AFCB68 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, isDecide);
    sub_1BC3008(&Method_FollowerRootComponent_EndCloseShowServantEquip__, v4);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4AFCB68 = 1;
  }
  operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager
    || (ListViewManager__SetScrollView(
          operationItemListViewManager,
          this->fields.openScroll,
          this->fields.openOffset,
          0LL),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v8 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo),
        System_Action___ctor(v8, (Il2CppObject *)this, Method_FollowerRootComponent_EndCloseShowServantEquip__, 0LL),
        !Instance) )
  {
    sub_1BC3264(operationItemListViewManager, isDecide);
  }
  CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)Instance, v8, 0LL);
}


void __fastcall FollowerRootComponent__EndTutorialFollowerCommonGuide(
        FollowerRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_4AFCB79 & 1) == 0 )
  {
    sub_1BC3008(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_1BC3008(&Method_FollowerRootComponent_OnSelectFollowerItem__, v3);
    byte_4AFCB79 = 1;
  }
  this->fields.state = 3;
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v5 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1BC3254(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
    0LL);
  if ( !operationItemListViewManager )
    sub_1BC3264(v6, v7);
  operationItemListViewManager->fields.callbackFunc = v5;
  sub_1BC2FAC(&operationItemListViewManager->fields.callbackFunc);
  FollowerSelectItemListViewManager__SetMode_31775360(operationItemListViewManager, 2, v8);
}


void __fastcall FollowerRootComponent__EndTutorialFollowerGuideNotification1(
        FollowerRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  TitleInfoControl_o *titleInfo; // x0
  struct FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v6; // x21
  const MethodInfo *v7; // x2

  if ( (byte_4AFCB76 & 1) == 0 )
  {
    sub_1BC3008(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_1BC3008(&Method_FollowerRootComponent_OnSelectFollowerItem__, v3);
    byte_4AFCB76 = 1;
  }
  titleInfo = this->fields.titleInfo;
  this->fields.state = 3;
  if ( !titleInfo
    || (TitleInfoControl__setBackBtnEnable(titleInfo, 0, 0LL),
        operationItemListViewManager = this->fields.operationItemListViewManager,
        v6 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1BC3254(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo),
        FollowerSelectItemListViewManager_CallbackFunc___ctor(
          v6,
          (Il2CppObject *)this,
          (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
          0LL),
        !operationItemListViewManager) )
  {
    sub_1BC3264(titleInfo, method);
  }
  operationItemListViewManager->fields.callbackFunc = v6;
  sub_1BC2FAC(&operationItemListViewManager->fields.callbackFunc);
  FollowerSelectItemListViewManager__SetMode_31775360(operationItemListViewManager, 2, v7);
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
  bool IsUnderVista; // w22
  Il2CppObject *Instance; // x20
  System_Action_o *v9; // x21
  float v10; // s0
  float v11; // s3
  float v12; // s4
  int v13; // s1
  int v14; // s5
  int v15; // s6

  if ( (byte_4AFCB77 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    sub_1BC3008(&FSUtility_TypeInfo, v3);
    sub_1BC3008(&Method_FollowerRootComponent_EndOpenTutorialArrow__, v4);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4AFCB77 = 1;
  }
  tutorialMaskBase2 = this->fields.tutorialMaskBase2;
  if ( !tutorialMaskBase2 )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(tutorialMaskBase2, 1, 0LL);
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  IsUnderVista = FSUtility__IsUnderVista(0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_FollowerRootComponent_EndOpenTutorialArrow__, 0LL);
  if ( !Instance )
LABEL_12:
    sub_1BC3264(tutorialMaskBase2, method);
  v10 = -12.0;
  v11 = -492.0;
  if ( IsUnderVista )
    v11 = -500.0;
  if ( IsUnderVista )
    v10 = -20.0;
  v12 = -14.0;
  v13 = 1120403456;
  v14 = 1148846080;
  v15 = 1125515264;
  CommonUI__OpenTutorialArrowMark(
    (CommonUI_o *)Instance,
    *(UnityEngine_Vector2_o *)&v10,
    0.0,
    *(UnityEngine_Rect_o *)&v11,
    v9,
    0LL);
}


BattleSetupInfo_o *__fastcall FollowerRootComponent__GetBattleSetupInfo(
        FollowerRootComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.battleSetupInfo;
}


// local variable allocation has failed, the output may be wrong!
System_Int64_array *__fastcall FollowerRootComponent__GetEquipIdsForGrandSvt(
        FollowerRootComponent_o *this,
        int32_t initPos,
        int64_t userSvtId,
        const MethodInfo *method)
{
  FollowerRootComponent_o *v6; // x21
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  System_Int64_array *result; // x0
  UserServantGrandEntity_o *FirstByUserSvtId; // x0
  BalanceConfig_c *v13; // x0

  v6 = this;
  if ( (byte_4AFCB62 & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, *(_QWORD *)&initPos);
    sub_1BC3008(&Method_DataManager_GetMaster_UserServantGrandMaster___, v7);
    sub_1BC3008(&DataManager_TypeInfo, v8);
    this = (FollowerRootComponent_o *)sub_1BC3008(&long___TypeInfo, v9);
    byte_4AFCB62 = 1;
  }
  battleSetupInfo = v6->fields.battleSetupInfo;
  if ( !battleSetupInfo )
    goto LABEL_15;
  this = (FollowerRootComponent_o *)battleSetupInfo->fields.questRestrictionInfo;
  if ( !this )
    goto LABEL_15;
  result = (System_Int64_array *)QuestRestrictionInfo__GetGrandServantRestrictionEntity(
                                   (QuestRestrictionInfo_o *)this,
                                   initPos,
                                   0LL);
  if ( !result )
    return result;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (FollowerRootComponent_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_UserServantGrandMaster___);
  if ( !this )
LABEL_15:
    sub_1BC3264(this, *(_QWORD *)&initPos);
  FirstByUserSvtId = UserServantGrandMaster__GetFirstByUserSvtId((UserServantGrandMaster_o *)this, userSvtId, 0LL);
  if ( FirstByUserSvtId )
    return UserServantGrandEntity__GetEquipUserServantIdList(FirstByUserSvtId, 0LL);
  v13 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v13 = BalanceConfig_TypeInfo;
  }
  return (System_Int64_array *)sub_1BC30B0(long___TypeInfo, (unsigned int)v13->static_fields->GrandSvtEquipMax);
}


void __fastcall FollowerRootComponent__GetFriendPointUpValSummary(
        FollowerRootComponent_o *this,
        int32_t *fpUpMax,
        int32_t *fpUpDuplicateSum,
        System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int___o *upTypeVals,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4AFCB61 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_FuncList_TYPE__int___Dispose__, fpUpMax);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_FuncList_TYPE__int___MoveNext__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_FuncList_TYPE__int___get_Current__, v9);
    this = (FollowerRootComponent_o *)sub_1BC3008(
                                        &Method_System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int___GetEnumerator__,
                                        v10);
    byte_4AFCB61 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  if ( !upTypeVals )
    sub_1BC3264(this, fpUpMax);
  System_Collections_Generic_List_ValueTuple_Int32Enum__int____GetEnumerator(
    &v11,
    (System_Collections_Generic_List_T__o *)upTypeVals,
    (const MethodInfo_364E814 *)Method_System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int___GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_ValueTuple_Int32Enum__int____MoveNext(
            &v11,
            (const MethodInfo_3416470 *)Method_System_Collections_Generic_List_Enumerator_ValueTuple_FuncList_TYPE__int___MoveNext__) )
  {
    if ( LODWORD(v11.fields._current) == 123 )
    {
      *fpUpDuplicateSum += HIDWORD(v11.fields._current);
    }
    else if ( LODWORD(v11.fields._current) == 104 && *fpUpMax < SHIDWORD(v11.fields._current) )
    {
      *fpUpMax = HIDWORD(v11.fields._current);
    }
  }
  System_Collections_Generic_List_Enumerator_ValueTuple_Int32Enum__int____Dispose(
    &v11,
    (const MethodInfo_341646C *)Method_System_Collections_Generic_List_Enumerator_ValueTuple_FuncList_TYPE__int___Dispose__);
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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 battleSetupInfo; // x0
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  const MethodInfo *v19; // x4
  struct BattleSetupInfo_o *v20; // x8
  int32_t InitialDisplayClass; // w20
  Il2CppObject *v22; // x20
  struct BattleSetupInfo_o *v23; // x8
  FollowerSelectItemListViewManager_o *v24; // x20
  const MethodInfo *v25; // x7
  struct BattleSetupInfo_o *v26; // x8
  PartyOrganizationUtility_o *v27; // x20
  FollowerRootComponent___c_c *v28; // x8
  System_Action_o *_9__50_0; // x21
  Il2CppObject *v30; // x22
  struct FollowerRootComponent___c_StaticFields *static_fields; // x0
  struct FollowerSelectItemListViewManager_o *v32; // x20
  System_Action_o *v33; // x21
  const MethodInfo *v34; // x2
  struct FollowerSelectItemListViewManager_o *v35; // x20
  struct System_Collections_Generic_List_ListViewItem__o *mixItemList; // x8
  NetworkManager_ResultCallbackFunc_o *v37; // x20
  FollowerRecommendSupportListRequest_o *v38; // x20
  struct BattleSetupInfo_o *v39; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4AFCB60 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    sub_1BC3008(&ClassButtonControlComponent_TypeInfo, v3);
    sub_1BC3008(&Method_DataManager_GetMaster_UserRecommendFollowerMaster___, v4);
    sub_1BC3008(&DataManager_TypeInfo, v5);
    sub_1BC3008(
      &Method_DataMasterBase_UserRecommendFollowerMaster__UserRecommendFollowerEntity__long__TryGetSingleEntity__,
      v6);
    sub_1BC3008(&Method_FollowerRootComponent_CallbackInitRecommendFollowerRequest__, v7);
    sub_1BC3008(&Method_FollowerRootComponent_OnMoveEnd__, v8);
    sub_1BC3008(&Method_NetworkManager_getRequest_FollowerRecommendSupportListRequest___, v9);
    sub_1BC3008(&NetworkManager_TypeInfo, v10);
    sub_1BC3008(&NetworkManager_ResultCallbackFunc_TypeInfo, v11);
    sub_1BC3008(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v12);
    sub_1BC3008(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v13);
    sub_1BC3008(&Method_FollowerRootComponent___c__Init_b__50_0__, v14);
    sub_1BC3008(&FollowerRootComponent___c_TypeInfo, v15);
    sub_1BC3008(&StringLiteral_8574/*"MENU_SELECT_ITEM"*/, v16);
    byte_4AFCB60 = 1;
  }
  entity = 0LL;
  if ( !this->fields.state )
  {
    if ( this->fields.isInitRecommendRequest )
      goto LABEL_19;
    battleSetupInfo = (__int64)this->fields.battleSetupInfo;
    if ( !battleSetupInfo )
      goto LABEL_53;
    operationItemListViewManager = this->fields.operationItemListViewManager;
    battleSetupInfo = BattleSetupInfo__TargetQuestId((BattleSetupInfo_o *)battleSetupInfo, 0LL);
    v20 = this->fields.battleSetupInfo;
    if ( !v20 || !operationItemListViewManager )
      goto LABEL_53;
    InitialDisplayClass = FollowerSelectItemListViewManager__GetInitialDisplayClass(
                            operationItemListViewManager,
                            battleSetupInfo,
                            v20->fields.questPhase,
                            1,
                            v19);
    if ( !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
    if ( !ClassButtonControlComponent__IsRecommendSupportGroupType(InitialDisplayClass, 0LL) )
      goto LABEL_19;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    battleSetupInfo = (__int64)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_UserRecommendFollowerMaster___);
    if ( !battleSetupInfo )
      goto LABEL_53;
    if ( DataMasterBase_object__object__long___TryGetSingleEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)battleSetupInfo,
           &entity,
           (const MethodInfo_32B16F8 *)Method_DataMasterBase_UserRecommendFollowerMaster__UserRecommendFollowerEntity__long__TryGetSingleEntity__) )
    {
      battleSetupInfo = (__int64)this->fields.battleSetupInfo;
      if ( !battleSetupInfo )
        goto LABEL_53;
      v22 = entity;
      battleSetupInfo = BattleSetupInfo__TargetQuestId((BattleSetupInfo_o *)battleSetupInfo, 0LL);
      v23 = this->fields.battleSetupInfo;
      if ( !v23 || !v22 )
        goto LABEL_53;
      if ( UserRecommendFollowerEntity__IsEnableSupport(
             (UserRecommendFollowerEntity_o *)v22,
             battleSetupInfo,
             v23->fields.questPhase,
             0LL) )
      {
LABEL_19:
        battleSetupInfo = (__int64)this->fields.operationItemListViewManager;
        if ( !battleSetupInfo )
          goto LABEL_53;
        battleSetupInfo = (__int64)UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)battleSetupInfo,
                                     0LL);
        if ( !battleSetupInfo )
          goto LABEL_53;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)battleSetupInfo, 1, 0LL);
        battleSetupInfo = (__int64)this->fields.battleSetupInfo;
        if ( !battleSetupInfo )
          goto LABEL_53;
        v24 = this->fields.operationItemListViewManager;
        battleSetupInfo = BattleSetupInfo__TargetQuestId((BattleSetupInfo_o *)battleSetupInfo, 0LL);
        v26 = this->fields.battleSetupInfo;
        if ( !v26 )
          goto LABEL_53;
        if ( !v24 )
          goto LABEL_53;
        FollowerSelectItemListViewManager__CreateList(
          v24,
          battleSetupInfo,
          v26->fields.questPhase,
          this->fields.friendPointUpVal,
          this->fields.friendPointUpMaxVal,
          this->fields.friendPointCampaignEntityList,
          v26->fields.questRestrictionInfo,
          v25);
        battleSetupInfo = (__int64)this->fields.operationItemListViewManager;
        if ( !battleSetupInfo )
          goto LABEL_53;
        battleSetupInfo = ListViewManager__get_ItemSum((ListViewManager_o *)battleSetupInfo, 0LL);
        if ( (int)battleSetupInfo > 0 )
          goto LABEL_26;
        v35 = this->fields.operationItemListViewManager;
        if ( !v35 )
          goto LABEL_53;
        if ( (byte_4AFCBD0 & 1) == 0 )
        {
          sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, method);
          byte_4AFCBD0 = 1;
        }
        mixItemList = v35->fields.mixItemList;
        if ( mixItemList && mixItemList->fields._size >= 1 )
        {
LABEL_26:
          battleSetupInfo = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
          if ( !battleSetupInfo )
            goto LABEL_53;
          if ( *(_BYTE *)(battleSetupInfo + 148) )
          {
            battleSetupInfo = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
            v27 = (PartyOrganizationUtility_o *)battleSetupInfo;
            v28 = FollowerRootComponent___c_TypeInfo;
            if ( !FollowerRootComponent___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(FollowerRootComponent___c_TypeInfo);
              v28 = FollowerRootComponent___c_TypeInfo;
            }
            _9__50_0 = v28->static_fields->__9__50_0;
            if ( !_9__50_0 )
            {
              if ( !v28->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v28);
                v28 = FollowerRootComponent___c_TypeInfo;
              }
              v30 = (Il2CppObject *)v28->static_fields->__9;
              _9__50_0 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
              System_Action___ctor(_9__50_0, v30, Method_FollowerRootComponent___c__Init_b__50_0__, 0LL);
              static_fields = FollowerRootComponent___c_TypeInfo->static_fields;
              static_fields->__9__50_0 = _9__50_0;
              battleSetupInfo = sub_1BC2FAC(&static_fields->__9__50_0);
            }
            if ( !v27 )
              goto LABEL_53;
            PartyOrganizationUtility__OpenQuestUseItemExpiredDialog(v27, _9__50_0, 0LL);
          }
          this->fields.state = 2;
          v32 = this->fields.operationItemListViewManager;
          v33 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
          System_Action___ctor(v33, (Il2CppObject *)this, Method_FollowerRootComponent_OnMoveEnd__, 0LL);
          if ( v32 )
          {
            v32->fields.callbackFunc2 = v33;
            sub_1BC2FAC(&v32->fields.callbackFunc2);
            FollowerSelectItemListViewManager__SetMode_31775360(v32, 1, v34);
            return;
          }
        }
        else
        {
          battleSetupInfo = (__int64)this->fields.myFSM;
          this->fields.selectItemNum = -1;
          if ( battleSetupInfo )
          {
            PlayMakerFSM__SendEvent((PlayMakerFSM_o *)battleSetupInfo, (System_String_o *)StringLiteral_8574/*"MENU_SELECT_ITEM"*/, 0LL);
            return;
          }
        }
LABEL_53:
        sub_1BC3264(battleSetupInfo, method);
      }
    }
    v37 = (NetworkManager_ResultCallbackFunc_o *)sub_1BC3254(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v37,
      (Il2CppObject *)this,
      Method_FollowerRootComponent_CallbackInitRecommendFollowerRequest__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    battleSetupInfo = (__int64)NetworkManager__getRequest_object_(
                                 v37,
                                 (const MethodInfo_3089B54 *)Method_NetworkManager_getRequest_FollowerRecommendSupportListRequest___);
    if ( !this->fields.battleSetupInfo )
      goto LABEL_53;
    v38 = (FollowerRecommendSupportListRequest_o *)battleSetupInfo;
    battleSetupInfo = BattleSetupInfo__TargetQuestId(this->fields.battleSetupInfo, 0LL);
    v39 = this->fields.battleSetupInfo;
    if ( !v39 )
      goto LABEL_53;
    if ( !v38 )
      goto LABEL_53;
    FollowerRecommendSupportListRequest__beginRequest(v38, 0, battleSetupInfo, v39->fields.questPhase, 0LL);
    battleSetupInfo = (__int64)this->fields.operationItemListViewManager;
    if ( !battleSetupInfo )
      goto LABEL_53;
    ListViewManager__SetEmptyMessageBase((ListViewManager_o *)battleSetupInfo, 0, 0LL);
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
  void *Instance; // x0
  __int64 v24; // x1
  SceneRootComponent_o *StackedRootComponent; // x0
  __int64 methodPtr_low; // x10
  UnityEngine_Component_o *v27; // x20
  _QWORD *v28; // x0
  System_Reflection_MethodBase_o *v29; // x0
  _QWORD *monitor; // x8
  __int64 v31; // x2
  int v32; // w8
  void *v33; // x19
  unsigned int v34; // w20
  _QWORD *v35; // x0
  System_Reflection_MethodBase_o *v36; // x0
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  __int64 *v38; // x8
  _QWORD *v39; // x0
  System_Reflection_MethodBase_o *v40; // x0
  TerminalPramsManager_c *v41; // x0
  int lastPlayQuestConsumeAp; // w21
  System_String_o **v43; // x8
  System_String_o *v44; // x20
  System_String_o *v45; // x21
  Il2CppObject *v46; // x22
  System_String_o *v47; // x23
  System_String_o *v48; // x24
  CommonConfirmDialog_ClickDelegate_o *v49; // x25

  if ( (byte_4AFCB75 & 1) == 0 )
  {
    sub_1BC3008(&BattleRootComponent_TypeInfo, method);
    sub_1BC3008(&CommonConfirmDialog_ClickDelegate_TypeInfo, v3);
    sub_1BC3008(&Method_UnityEngine_Component_GetComponentsInChildren_Camera___, v4);
    sub_1BC3008(&Method_FollowerRootComponent_OnClickBack__, v5);
    sub_1BC3008(&Method_FollowerRootComponent__OnClickBack_b__73_0__, v6);
    sub_1BC3008(&FollowerRootComponent_TypeInfo, v7);
    sub_1BC3008(&LocalizationManager_TypeInfo, v8);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v9);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_1BC3008(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v11);
    sub_1BC3008(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v12);
    sub_1BC3008(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v13);
    sub_1BC3008(&TerminalPramsManager_TypeInfo, v14);
    sub_1BC3008(&StringLiteral_6386/*"FOLLOWER_SELECT_BACK_TO_QUEST_NO_AP_CONSUME_AP0"*/, v15);
    sub_1BC3008(&StringLiteral_3402/*"CLICK_BACK"*/, v16);
    sub_1BC3008(&StringLiteral_6385/*"FOLLOWER_SELECT_BACK_TO_QUEST_NO_AP_CONSUME"*/, v17);
    sub_1BC3008(&StringLiteral_6384/*"FOLLOWER_SELECT_BACK_TITLE"*/, v18);
    sub_1BC3008(&StringLiteral_3651/*"COMMON_CONFIRM_NO"*/, v19);
    sub_1BC3008(&StringLiteral_3656/*"COMMON_CONFIRM_YES"*/, v20);
    sub_1BC3008(&StringLiteral_1/*""*/, v21);
    sub_1BC3008(&StringLiteral_3403/*"CLICK_BACK_BATTLE_SETUP"*/, v22);
    byte_4AFCB75 = 1;
  }
  if ( this->fields.state == 3 && !this->fields.tutorialState )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( !Instance )
      goto LABEL_62;
    if ( !*((_BYTE *)Instance + 148) )
      goto LABEL_34;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_62;
    StackedRootComponent = AvalonSceneManager__GetStackedRootComponent((AvalonSceneManager_o *)Instance, 0LL);
    if ( StackedRootComponent
      && (methodPtr_low = LOBYTE(BattleRootComponent_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(StackedRootComponent->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
    {
      if ( (BattleRootComponent_c *)StackedRootComponent->klass->_2.typeHierarchy[methodPtr_low - 1] == BattleRootComponent_TypeInfo )
        v27 = (UnityEngine_Component_o *)StackedRootComponent;
      else
        v27 = 0LL;
    }
    else
    {
      v27 = 0LL;
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v27, 0LL, 0LL) )
    {
      v28 = Method_FollowerRootComponent_OnClickBack__;
      if ( (*((_BYTE *)Method_FollowerRootComponent_OnClickBack__ + 83) & 2) != 0 )
        v28 = (_QWORD *)sub_1BC3020(Method_FollowerRootComponent_OnClickBack__);
      v29 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v28, v28[4]);
      OverwriteAssetSoundName__PlaySystemSe(v29, 1, 0, 0LL);
      this->fields.state = 4;
      if ( v27 )
      {
        Instance = UnityEngine_Component__get_gameObject(v27, 0LL);
        if ( Instance )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
          monitor = v27[3].monitor;
          if ( monitor )
          {
            Instance = (void *)monitor[67];
            if ( Instance )
            {
              BattleResultComponent__EndResult((BattleResultComponent_o *)Instance, 0LL);
              Instance = this->fields.myFSM;
              if ( Instance )
              {
                PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3402/*"CLICK_BACK"*/, 0LL);
                Instance = UnityEngine_Component__get_transform(v27, 0LL);
                if ( Instance )
                {
                  Instance = UnityEngine_Component__GetComponentsInChildren_object__50303708(
                               (UnityEngine_Component_o *)Instance,
                               (const MethodInfo_2FF92DC *)Method_UnityEngine_Component_GetComponentsInChildren_Camera___);
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
                        sub_1BC326C(Instance, v24, v31);
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
LABEL_34:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( !Instance )
        goto LABEL_62;
      if ( AvalonSceneManager__IsStackScene((AvalonSceneManager_o *)Instance, 0LL) )
        goto LABEL_40;
      Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_62;
      if ( *((int *)Instance + 14) > 0 )
        goto LABEL_40;
      Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_62;
      if ( *((_BYTE *)Instance + 174) )
      {
LABEL_40:
        v35 = Method_FollowerRootComponent_OnClickBack__;
        if ( (*((_BYTE *)Method_FollowerRootComponent_OnClickBack__ + 83) & 2) != 0 )
          v35 = (_QWORD *)sub_1BC3020(Method_FollowerRootComponent_OnClickBack__);
        v36 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v35, v35[4]);
        OverwriteAssetSoundName__PlaySystemSe(v36, 1, 0, 0LL);
        battleSetupInfo = this->fields.battleSetupInfo;
        this->fields.state = 4;
        if ( battleSetupInfo )
        {
          Instance = this->fields.myFSM;
          if ( Instance )
          {
            if ( battleSetupInfo->fields.isChildFollower )
              v38 = &StringLiteral_3403/*"CLICK_BACK_BATTLE_SETUP"*/;
            else
              v38 = &StringLiteral_3402/*"CLICK_BACK"*/;
            PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v38, 0LL);
            return;
          }
        }
      }
      else
      {
        v39 = Method_FollowerRootComponent_OnClickBack__;
        if ( (*((_BYTE *)Method_FollowerRootComponent_OnClickBack__ + 83) & 2) != 0 )
          v39 = (_QWORD *)sub_1BC3020(Method_FollowerRootComponent_OnClickBack__);
        v40 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v39, v39[4]);
        OverwriteAssetSoundName__PlaySystemSe(v40, 1, 0, 0LL);
        v41 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v41 = TerminalPramsManager_TypeInfo;
        }
        lastPlayQuestConsumeAp = v41->static_fields->lastPlayQuestConsumeAp;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v43 = (System_String_o **)&StringLiteral_6385/*"FOLLOWER_SELECT_BACK_TO_QUEST_NO_AP_CONSUME"*/;
        if ( lastPlayQuestConsumeAp <= 0 )
          v43 = (System_String_o **)&StringLiteral_6386/*"FOLLOWER_SELECT_BACK_TO_QUEST_NO_AP_CONSUME_AP0"*/;
        v44 = LocalizationManager__Get(*v43, 0LL);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v45 = LocalizationManager__Get((System_String_o *)StringLiteral_6384/*"FOLLOWER_SELECT_BACK_TITLE"*/, 0LL);
        v46 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v47 = LocalizationManager__Get((System_String_o *)StringLiteral_3656/*"COMMON_CONFIRM_YES"*/, 0LL);
        v48 = LocalizationManager__Get((System_String_o *)StringLiteral_3651/*"COMMON_CONFIRM_NO"*/, 0LL);
        v49 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BC3254(CommonConfirmDialog_ClickDelegate_TypeInfo);
        CommonConfirmDialog_ClickDelegate___ctor(
          v49,
          (Il2CppObject *)this,
          Method_FollowerRootComponent__OnClickBack_b__73_0__,
          0LL);
        Instance = FollowerRootComponent_TypeInfo;
        if ( !FollowerRootComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FollowerRootComponent_TypeInfo);
          Instance = FollowerRootComponent_TypeInfo;
        }
        if ( v46 )
        {
          CommonUI__OpenConfirmDecideDlg(
            (CommonUI_o *)v46,
            v45,
            v44,
            v47,
            v48,
            v49,
            *(_DWORD *)(*((_QWORD *)Instance + 23) + 16LL),
            (float)*(int *)(*((_QWORD *)Instance + 23) + 20LL),
            (float)*(int *)(*((_QWORD *)Instance + 23) + 24LL),
            0,
            0,
            0,
            240,
            0,
            1,
            0,
            0,
            0LL);
          return;
        }
      }
    }
LABEL_62:
    sub_1BC3264(Instance, v24);
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
  int32_t tutorialMode; // w8
  Il2CppObject *Instance; // x20
  System_String_o *v15; // x21
  System_Action_o *v16; // x0
  __int64 *v17; // x8
  BattleSetupInfo_o *battleSetupInfo; // x0
  int32_t eventId; // w20
  struct BattleSetupInfo_o *v20; // x8
  struct BattleSetupInfo_o *v21; // x8
  int32_t v22; // w20
  System_Action_o *v23; // x21
  struct BattleSetupInfo_o *v24; // x8
  struct FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v26; // x21
  const MethodInfo *v27; // x2
  const MethodInfo *v28; // x1
  System_Action_o *v29; // x22

  if ( (byte_4AFCB6E & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    sub_1BC3008(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, v3);
    sub_1BC3008(&Method_FollowerRootComponent_EndTutorialFollowerCommonGuide__, v4);
    sub_1BC3008(&Method_FollowerRootComponent_EndTutorialFollowerGuideNotification1__, v5);
    sub_1BC3008(&Method_FollowerRootComponent_EndTutorialFollowerGuideNotification2__, v6);
    sub_1BC3008(&Method_FollowerRootComponent_OnSelectFollowerItem__, v7);
    sub_1BC3008(&LocalizationManager_TypeInfo, v8);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_1BC3008(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v10);
    sub_1BC3008(&StringLiteral_13461/*"TUTORIAL_MESSAGE_FOLLOWER2"*/, v11);
    sub_1BC3008(&StringLiteral_13460/*"TUTORIAL_MESSAGE_FOLLOWER1"*/, v12);
    byte_4AFCB6E = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( this->fields.tutorialState == 1 )
    {
      tutorialMode = this->fields.tutorialMode;
      *(_QWORD *)&this->fields.tutorialState = 0x200000002LL;
      if ( tutorialMode == 3 )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v15 = LocalizationManager__Get((System_String_o *)StringLiteral_13461/*"TUTORIAL_MESSAGE_FOLLOWER2"*/, 0LL);
        v16 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
        v17 = &Method_FollowerRootComponent_EndTutorialFollowerGuideNotification2__;
LABEL_25:
        v29 = v16;
        System_Action___ctor(v16, (Il2CppObject *)this, *v17, 0LL);
        if ( Instance )
        {
          CommonUI__OpenTutorialNotificationDialog((CommonUI_o *)Instance, v15, -1, v29, 0LL);
          return;
        }
LABEL_27:
        sub_1BC3264(battleSetupInfo, method);
      }
      if ( tutorialMode == 2 )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v15 = LocalizationManager__Get((System_String_o *)StringLiteral_13460/*"TUTORIAL_MESSAGE_FOLLOWER1"*/, 0LL);
        v16 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
        v17 = &Method_FollowerRootComponent_EndTutorialFollowerGuideNotification1__;
        goto LABEL_25;
      }
    }
    else
    {
      battleSetupInfo = this->fields.battleSetupInfo;
      if ( !battleSetupInfo )
        goto LABEL_27;
      eventId = battleSetupInfo->fields.eventId;
      battleSetupInfo = (BattleSetupInfo_o *)BattleSetupInfo__TargetQuestId(battleSetupInfo, 0LL);
      v20 = this->fields.battleSetupInfo;
      if ( !v20 )
        goto LABEL_27;
      battleSetupInfo = (BattleSetupInfo_o *)EventTutorialMaster__IsTutorialAvailable(
                                               eventId,
                                               15,
                                               (int32_t)battleSetupInfo,
                                               v20->fields.questPhase,
                                               0,
                                               0,
                                               0LL);
      if ( ((unsigned __int8)battleSetupInfo & 1) != 0 )
      {
        v21 = this->fields.battleSetupInfo;
        this->fields.state = 2;
        if ( v21 )
        {
          v22 = v21->fields.eventId;
          v23 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
          System_Action___ctor(
            v23,
            (Il2CppObject *)this,
            Method_FollowerRootComponent_EndTutorialFollowerCommonGuide__,
            0LL);
          battleSetupInfo = this->fields.battleSetupInfo;
          if ( battleSetupInfo )
          {
            battleSetupInfo = (BattleSetupInfo_o *)BattleSetupInfo__TargetQuestId(battleSetupInfo, 0LL);
            v24 = this->fields.battleSetupInfo;
            if ( v24 )
            {
              EventTutorialMaster__CheckTutorial(
                v22,
                15,
                v23,
                (int32_t)battleSetupInfo,
                v24->fields.questPhase,
                0,
                0,
                0LL);
              return;
            }
          }
        }
        goto LABEL_27;
      }
      this->fields.state = 3;
      operationItemListViewManager = this->fields.operationItemListViewManager;
      v26 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1BC3254(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
      FollowerSelectItemListViewManager_CallbackFunc___ctor(
        v26,
        (Il2CppObject *)this,
        (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
        0LL);
      if ( !operationItemListViewManager )
        goto LABEL_27;
      operationItemListViewManager->fields.callbackFunc = v26;
      sub_1BC2FAC(&operationItemListViewManager->fields.callbackFunc);
      FollowerSelectItemListViewManager__SetMode_31775360(operationItemListViewManager, 2, v27);
      battleSetupInfo = (BattleSetupInfo_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !battleSetupInfo )
        goto LABEL_27;
      if ( PartyOrganizationUtility__ExistsTemporaryPartyInfo((PartyOrganizationUtility_o *)battleSetupInfo, 0LL) )
        FollowerRootComponent__StartBattleSetupMenu(this, v28);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerRootComponent__OnSelectFollowerItem(
        FollowerRootComponent_o *this,
        int32_t kind,
        int32_t n,
        int32_t param,
        const MethodInfo *method)
{
  FollowerRootComponent_o *v8; // x19
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
  __int64 v44; // x1
  __int64 v45; // x1
  __int64 v46; // x1
  __int64 v47; // x1
  const MethodInfo *v48; // x3
  __int64 v49; // x8
  __int64 v50; // x20
  __int64 v51; // x2
  SkillInfo_o *v52; // x22
  _QWORD *v53; // x0
  System_Reflection_MethodBase_o *v54; // x0
  Il2CppObject *v55; // x20
  System_String_o *v56; // x20
  System_String_o *v57; // x21
  __int64 v58; // x2
  __int64 v59; // x3
  __int64 v60; // x4
  Il2CppObject *v61; // x0
  System_String_o *v62; // x0
  int32_t v63; // w20
  _QWORD *v64; // x0
  System_Reflection_MethodBase_o *v65; // x0
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v67; // x0
  intptr_t v68; // w2
  _QWORD *v69; // x0
  System_Reflection_MethodBase_o *v70; // x0
  const MethodInfo *v71; // x2
  const MethodInfo *v72; // x2
  __int64 v73; // x20
  SkillInfo_o *v74; // x24
  Il2CppObject *Entity; // x21
  FollowerRootComponent_o *v76; // x20
  System_String_o *v77; // x21
  System_String_o *v78; // x22
  __int64 v79; // x2
  __int64 v80; // x3
  __int64 v81; // x4
  Il2CppObject *v82; // x0
  System_String_o *v83; // x0
  __int64 v84; // x2
  __int64 v85; // x3
  __int64 v86; // x4
  FollowerRootComponent_o *v87; // x21
  Il2CppObject *v88; // x0
  System_String_o *v89; // x0
  int32_t tutorialMode; // w21
  System_String_o *v91; // x20
  _QWORD *v92; // x0
  System_Reflection_MethodBase_o *v93; // x0
  bool v94; // w22
  CommonConfirmDialog_ClickDelegate_o *v95; // x21
  bool v96; // w20
  CommonConfirmDialog_o *commonConfirmDialog; // x19
  System_String_o *v98; // x20
  FollowerRootComponent_o *v99; // x22
  int32_t v100; // w8
  _QWORD *v101; // x0
  System_Reflection_MethodBase_o *v102; // x0
  FollowerRootComponent_o *v103; // x20
  FollowerRootComponent_o *v104; // x20
  FollowerRootComponent___c_c *v105; // x8
  System_Action_o *_9__67_0; // x21
  Il2CppObject *v107; // x22
  struct FollowerRootComponent___c_StaticFields *static_fields; // x0
  _QWORD *v109; // x0
  System_Reflection_MethodBase_o *v110; // x0
  int32_t v111; // w8
  __int64 *v112; // x8
  FollowerRootComponent_o *v113; // x20
  _QWORD *v114; // x0
  System_Reflection_MethodBase_o *v115; // x0
  const MethodInfo *v116; // x2
  _QWORD *v117; // x0
  System_Reflection_MethodBase_o *v118; // x0
  int32_t v119; // w8
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  NetworkManager_ResultCallbackFunc_o *v121; // x20
  FollowerRecommendSupportListRequest_o *v122; // x20
  struct BattleSetupInfo_o *v123; // x8
  Il2CppObject *Instance; // x20
  System_String_o *v125; // x21
  System_String_o *v126; // x22
  System_Action_o *v127; // x23
  int friendPointUpVal_low; // w20
  _QWORD *v129; // x0
  FollowerSelectItemListViewItem_o *v130; // x20
  const MethodInfo *v131; // x1
  __int64 v132; // x22
  __int64 v133; // x23
  EquipTargetInfo_o *EquipTargetInfoByEquipIdx; // x0
  EquipTargetInfo_o *EquipInfo; // x21
  __int64 v136; // x22
  __int64 v137; // x23
  const MethodInfo *v138; // x1
  __int64 v139; // x22
  __int64 v140; // x23
  _QWORD *v141; // x0
  System_Reflection_MethodBase_o *v142; // x0
  const MethodInfo *v143; // x3
  struct FollowerInfo_o *followerInfo; // x8
  int32_t type; // w8
  int32_t v146; // w2
  _QWORD *v147; // x0
  struct FollowerSelectItemListViewManager_CallbackFunc_o *v148; // x21
  const MethodInfo *v149; // x2
  int32_t v150; // w1
  _QWORD *v151; // x0
  System_Reflection_MethodBase_o *v152; // x0
  FollowerSelectItemListViewManager_CallbackFunc_o *v153; // x21
  Il2CppObject *v154; // x20
  System_Action_o *v155; // x21
  int m_CancellationTokenSource; // [xsp+40h] [xbp-70h] BYREF
  int32_t lv; // [xsp+44h] [xbp-6Ch] BYREF
  System_String_o *detail; // [xsp+48h] [xbp-68h] BYREF
  System_String_o *name; // [xsp+50h] [xbp-60h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+58h] [xbp-58h] BYREF
  System_String_o *v161; // [xsp+60h] [xbp-50h] BYREF
  System_String_o *v162; // [xsp+68h] [xbp-48h] BYREF
  SkillInfo_array *v163; // [xsp+78h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v164; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v165; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v166; // 0:x0.16

  v8 = this;
  if ( (byte_4AFCB6F & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_1BC3008(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, v9);
    sub_1BC3008(&CommonConfirmDialog_ClickDelegate_TypeInfo, v10);
    sub_1BC3008(&Method_DataManager_GetMasterData_SkillLvMaster___, v11);
    sub_1BC3008(&Method_DataManager_GetMasterData_SkillMaster___, v12);
    sub_1BC3008(&Method_DataManager_GetMaster_SkillLvMaster___, v13);
    sub_1BC3008(&Method_DataManager_GetMaster_SkillMaster___, v14);
    sub_1BC3008(&DataManager_TypeInfo, v15);
    sub_1BC3008(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v16);
    sub_1BC3008(&FollowerListRequest_TypeInfo, v17);
    sub_1BC3008(&FollowerRecommendSupportListRequest_TypeInfo, v18);
    sub_1BC3008(&Method_FollowerRootComponent_CallbackRefresh__, v19);
    sub_1BC3008(&Method_FollowerRootComponent_EndCloseTutorialArrow__, v20);
    sub_1BC3008(&Method_FollowerRootComponent_EndRecommendRefreshConfirm__, v21);
    sub_1BC3008(&Method_FollowerRootComponent_EndRefreshConfirm__, v22);
    sub_1BC3008(&Method_FollowerRootComponent_EndRefreshRest__, v23);
    sub_1BC3008(&Method_FollowerRootComponent_OnSelectFollowerItem__, v24);
    sub_1BC3008(&FollowerRootComponent_TypeInfo, v25);
    sub_1BC3008(&int_TypeInfo, v26);
    sub_1BC3008(&LocalizationManager_TypeInfo, v27);
    sub_1BC3008(&Method_NetworkManager_getRequest_FollowerRecommendSupportListRequest___, v28);
    sub_1BC3008(&NetworkManager_TypeInfo, v29);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v30);
    sub_1BC3008(&NetworkManager_ResultCallbackFunc_TypeInfo, v31);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v32);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v33);
    sub_1BC3008(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v34);
    sub_1BC3008(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v35);
    sub_1BC3008(&Method_FollowerRootComponent___c__OnSelectFollowerItem_b__67_0__, v36);
    sub_1BC3008(&FollowerRootComponent___c_TypeInfo, v37);
    sub_1BC3008(&StringLiteral_6409/*"FOLLOWER_SELECT_REFRESH_TITLE"*/, v38);
    sub_1BC3008(&StringLiteral_8574/*"MENU_SELECT_ITEM"*/, v39);
    sub_1BC3008(&StringLiteral_8583/*"MENU_SHOW_SUPPORT"*/, v40);
    sub_1BC3008(&StringLiteral_6406/*"FOLLOWER_SELECT_REFRESH_MESSAGE"*/, v41);
    sub_1BC3008(&StringLiteral_113/*" "*/, v42);
    sub_1BC3008(&StringLiteral_6407/*"FOLLOWER_SELECT_REFRESH_REST_MESSAGE"*/, v43);
    sub_1BC3008(&StringLiteral_8469/*"MASTER_EQSKILL_LV_TXT"*/, v44);
    sub_1BC3008(&StringLiteral_2853/*"BATTLE_SKILLCHARGETURN"*/, v45);
    sub_1BC3008(&StringLiteral_1/*""*/, v46);
    this = (FollowerRootComponent_o *)sub_1BC3008(&StringLiteral_6408/*"FOLLOWER_SELECT_REFRESH_REST_TITLE"*/, v47);
    byte_4AFCB6F = 1;
  }
  v163 = 0LL;
  v161 = 0LL;
  v162 = 0LL;
  name = 0LL;
  skillInfoList = 0LL;
  detail = 0LL;
  if ( v8->fields.state != 3 )
    return;
  v8->fields.selectItemNum = n;
  switch ( kind )
  {
    case 1:
      if ( v8->fields.tutorialState )
        goto LABEL_107;
      this = (FollowerRootComponent_o *)v8->fields.operationItemListViewManager;
      if ( !this )
        goto LABEL_185;
      this = (FollowerRootComponent_o *)FollowerSelectItemListViewManager__GetItem(
                                          (FollowerSelectItemListViewManager_o *)this,
                                          n,
                                          *(const MethodInfo **)&n);
      if ( !this )
        goto LABEL_185;
      v113 = this;
      if ( LOBYTE(this->fields.friendPointUpVal)
        || FollowerSelectItemListViewItem__get_SvtId(
             (FollowerSelectItemListViewItem_o *)this,
             *(const MethodInfo **)&kind) <= 0 )
      {
        goto LABEL_164;
      }
      v114 = Method_FollowerRootComponent_OnSelectFollowerItem__;
      if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
        v114 = (_QWORD *)sub_1BC3020(Method_FollowerRootComponent_OnSelectFollowerItem__);
      v115 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v114, v114[4]);
      OverwriteAssetSoundName__PlaySystemSe(v115, 0, 0, 0LL);
      FollowerRootComponent__SelectShowServant(v8, (FollowerSelectItemListViewItem_o *)v113, v116);
      return;
    case 2:
    case 3:
    case 4:
      v69 = Method_FollowerRootComponent_OnSelectFollowerItem__;
      if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
        v69 = (_QWORD *)sub_1BC3020(Method_FollowerRootComponent_OnSelectFollowerItem__);
      v70 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v69, v69[4]);
      OverwriteAssetSoundName__PlaySystemSe(v70, 0, 0, 0LL);
      this = (FollowerRootComponent_o *)v8->fields.operationItemListViewManager;
      if ( !this )
        goto LABEL_185;
      this = (FollowerRootComponent_o *)FollowerSelectItemListViewManager__GetItem(
                                          (FollowerSelectItemListViewManager_o *)this,
                                          v8->fields.selectItemNum,
                                          v71);
      v73 = kind == 3 ? 1LL : 2LL * (kind == 4);
      if ( !this )
        goto LABEL_185;
      this = (FollowerRootComponent_o *)FollowerSelectItemListViewItem__GetSkillInfo(
                                          (FollowerSelectItemListViewItem_o *)this,
                                          &v163,
                                          v72);
      if ( !v163 )
        goto LABEL_185;
      if ( (unsigned int)v73 >= v163->max_length )
        goto LABEL_186;
      v74 = v163->m_Items[v73];
      if ( !v74 || v74->fields.id < 1 || v74->fields.lv < 1 )
        goto LABEL_153;
      this = (FollowerRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_185;
      this = (FollowerRootComponent_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_SkillMaster___);
      if ( !this )
        goto LABEL_185;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                 v74->fields.id,
                 (const MethodInfo_32AF070 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      this = (FollowerRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_185;
      this = (FollowerRootComponent_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_SkillLvMaster___);
      if ( !this )
        goto LABEL_185;
      this = (FollowerRootComponent_o *)SkillLvMaster__GetEntity(
                                          (SkillLvMaster_o *)this,
                                          v74->fields.id,
                                          v74->fields.lv,
                                          0LL);
      if ( !Entity )
        goto LABEL_185;
      v76 = this;
      SkillEntity__getSkillMessageInfo((SkillEntity_o *)Entity, &v162, &v161, v74->fields.lv, 0LL);
      v77 = v162;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v78 = LocalizationManager__Get((System_String_o *)StringLiteral_8469/*"MASTER_EQSKILL_LV_TXT"*/, 0LL);
      lv = v74->fields.lv;
      v82 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv, v79, v80, v81);
      v83 = System_String__Format(v78, v82, 0LL);
      v162 = System_String__Concat_62386896(v77, (System_String_o *)StringLiteral_113/*" "*/, v83, 0LL);
      this = (FollowerRootComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2853/*"BATTLE_SKILLCHARGETURN"*/, 0LL);
      if ( !v76 )
        goto LABEL_185;
      v87 = this;
      m_CancellationTokenSource = (int)v76->fields.m_CancellationTokenSource;
      v88 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &m_CancellationTokenSource, v84, v85, v86);
      v89 = System_String__Format((System_String_o *)v87, v88, 0LL);
      tutorialMode = v8->fields.tutorialMode;
      v91 = v89;
      this = (FollowerRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_185;
      if ( tutorialMode == 3 )
        CommonUI__OpenDetailLongInfoDialogOnFade((CommonUI_o *)this, v162, v91, v161, 0LL);
      else
        CommonUI__OpenDetailLongInfoDialog((CommonUI_o *)this, v162, v91, v161, 1, 0, 0LL);
LABEL_153:
      operationItemListViewManager = v8->fields.operationItemListViewManager;
      v67 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1BC3254(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
      v68 = (int)Method_FollowerRootComponent_OnSelectFollowerItem__;
      goto LABEL_169;
    case 5:
      if ( !v8->fields.tutorialState )
      {
        this = (FollowerRootComponent_o *)v8->fields.operationItemListViewManager;
        if ( !this )
          goto LABEL_185;
        this = (FollowerRootComponent_o *)FollowerSelectItemListViewManager__GetItem(
                                            (FollowerSelectItemListViewManager_o *)this,
                                            n,
                                            *(const MethodInfo **)&n);
        if ( !this )
          goto LABEL_185;
        friendPointUpVal_low = LOBYTE(this->fields.friendPointUpVal);
        v129 = Method_FollowerRootComponent_OnSelectFollowerItem__;
        if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
          v129 = (_QWORD *)sub_1BC3020(Method_FollowerRootComponent_OnSelectFollowerItem__);
        v102 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v129, v129[4]);
        if ( !friendPointUpVal_low )
          goto LABEL_134;
        goto LABEL_167;
      }
      v100 = v8->fields.tutorialMode;
      if ( v100 == 3 )
      {
        v151 = Method_FollowerRootComponent_OnSelectFollowerItem__;
        if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
          v151 = (_QWORD *)sub_1BC3020(Method_FollowerRootComponent_OnSelectFollowerItem__);
        v152 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v151, v151[4]);
        OverwriteAssetSoundName__PlaySystemSe(v152, 2, 0, 0LL);
        goto LABEL_176;
      }
      if ( v100 == 2 )
      {
        v101 = Method_FollowerRootComponent_OnSelectFollowerItem__;
        if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
          v101 = (_QWORD *)sub_1BC3020(Method_FollowerRootComponent_OnSelectFollowerItem__);
        v102 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v101, v101[4]);
LABEL_134:
        OverwriteAssetSoundName__PlaySystemSe(v102, 0, 0, 0LL);
        this = (FollowerRootComponent_o *)v8->fields.myFSM;
        if ( this )
        {
          v112 = &StringLiteral_8583/*"MENU_SHOW_SUPPORT"*/;
          goto LABEL_136;
        }
        goto LABEL_185;
      }
      return;
    case 6:
      if ( !v8->fields.tutorialState )
      {
        this = (FollowerRootComponent_o *)v8->fields.operationItemListViewManager;
        if ( !this )
          goto LABEL_185;
        this = (FollowerRootComponent_o *)FollowerSelectItemListViewManager__GetItem(
                                            (FollowerSelectItemListViewManager_o *)this,
                                            n,
                                            *(const MethodInfo **)&n);
        if ( !this )
          goto LABEL_185;
        v130 = (FollowerSelectItemListViewItem_o *)this;
        if ( !FollowerSelectItemListViewItem__get_ServantLeader(
                (FollowerSelectItemListViewItem_o *)this,
                *(const MethodInfo **)&kind) )
          goto LABEL_154;
        this = (FollowerRootComponent_o *)FollowerSelectItemListViewItem__get_ServantLeader(v130, v131);
        if ( !this )
          goto LABEL_185;
        v133 = *(_QWORD *)&this->fields.manualWidth;
        v132 = *(_QWORD *)&this->fields.kind;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v164.fields.currentCryptoKey = v133;
        *(_QWORD *)&v164.fields.fakeValue = v132;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v164, 0LL) >= 1 )
        {
          this = (FollowerRootComponent_o *)FollowerSelectItemListViewItem__get_ServantLeader(v130, v131);
          if ( !this )
            goto LABEL_185;
          EquipTargetInfoByEquipIdx = ServantLeaderInfo__GetEquipTargetInfoByEquipIdx(
                                        (ServantLeaderInfo_o *)this,
                                        param,
                                        0LL);
          if ( !EquipTargetInfoByEquipIdx )
            goto LABEL_164;
          EquipInfo = EquipTargetInfoByEquipIdx;
          v137 = *(_QWORD *)&EquipTargetInfoByEquipIdx->fields.svtId.fields.currentCryptoKey;
          v136 = *(_QWORD *)&EquipTargetInfoByEquipIdx->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v165.fields.currentCryptoKey = v137;
          *(_QWORD *)&v165.fields.fakeValue = v136;
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v165, 0LL) < 1 )
            goto LABEL_164;
          this = (FollowerRootComponent_o *)FollowerSelectItemListViewItem__get_ServantLeader(v130, v138);
          if ( !this )
            goto LABEL_185;
          if ( ServantLeaderInfo__IsHideEquip((ServantLeaderInfo_o *)this, 0LL) )
          {
LABEL_164:
            v147 = Method_FollowerRootComponent_OnSelectFollowerItem__;
            if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
              v147 = (_QWORD *)sub_1BC3020(Method_FollowerRootComponent_OnSelectFollowerItem__);
            v102 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v147, v147[4]);
LABEL_167:
            OverwriteAssetSoundName__PlaySystemSe(v102, 2, 0, 0LL);
LABEL_168:
            operationItemListViewManager = v8->fields.operationItemListViewManager;
            v67 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1BC3254(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
            v68 = (int)Method_FollowerRootComponent_OnSelectFollowerItem__;
LABEL_169:
            v148 = v67;
            FollowerSelectItemListViewManager_CallbackFunc___ctor(v67, (Il2CppObject *)v8, v68, 0LL);
            if ( !operationItemListViewManager )
              goto LABEL_185;
            operationItemListViewManager->fields.callbackFunc = v148;
            sub_1BC2FAC(&operationItemListViewManager->fields.callbackFunc);
            v150 = 2;
            goto LABEL_171;
          }
        }
        else
        {
LABEL_154:
          EquipInfo = FollowerSelectItemListViewItem__get_EquipInfo(v130, v131);
          if ( !EquipInfo )
            goto LABEL_164;
        }
        v140 = *(_QWORD *)&EquipInfo->fields.svtId.fields.currentCryptoKey;
        v139 = *(_QWORD *)&EquipInfo->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v166.fields.currentCryptoKey = v140;
        *(_QWORD *)&v166.fields.fakeValue = v139;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v166, 0LL) < 1 )
          goto LABEL_164;
        v141 = Method_FollowerRootComponent_OnSelectFollowerItem__;
        if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
          v141 = (_QWORD *)sub_1BC3020(Method_FollowerRootComponent_OnSelectFollowerItem__);
        v142 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v141, v141[4]);
        OverwriteAssetSoundName__PlaySystemSe(v142, 0, 0, 0LL);
        followerInfo = v130->fields.followerInfo;
        if ( followerInfo )
        {
          type = followerInfo->fields.type;
          if ( type == 1 )
          {
            v146 = 13;
            goto LABEL_182;
          }
          if ( type == 5 )
          {
            v146 = 14;
LABEL_182:
            FollowerRootComponent__SelectShowServantEquip(v8, EquipInfo, v146, v143);
            return;
          }
        }
        if ( v130->fields.isNpc )
          v146 = 19;
        else
          v146 = 16;
        goto LABEL_182;
      }
LABEL_107:
      v117 = Method_FollowerRootComponent_OnSelectFollowerItem__;
      if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
        v117 = (_QWORD *)sub_1BC3020(Method_FollowerRootComponent_OnSelectFollowerItem__);
      v118 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v117, v117[4]);
      OverwriteAssetSoundName__PlaySystemSe(v118, 2, 0, 0LL);
      v119 = v8->fields.tutorialMode;
      if ( v119 == 3 )
      {
LABEL_176:
        operationItemListViewManager = v8->fields.operationItemListViewManager;
        v153 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1BC3254(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
        FollowerSelectItemListViewManager_CallbackFunc___ctor(
          v153,
          (Il2CppObject *)v8,
          (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
          0LL);
        if ( !operationItemListViewManager )
          goto LABEL_185;
        operationItemListViewManager->fields.callbackFunc = v153;
        sub_1BC2FAC(&operationItemListViewManager->fields.callbackFunc);
        v150 = 4;
LABEL_171:
        FollowerSelectItemListViewManager__SetMode_31775360(operationItemListViewManager, v150, v149);
        return;
      }
      if ( v119 == 2 )
        goto LABEL_168;
      return;
    case 7:
    case 13:
      v92 = Method_FollowerRootComponent_OnSelectFollowerItem__;
      if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
        v92 = (_QWORD *)sub_1BC3020(Method_FollowerRootComponent_OnSelectFollowerItem__);
      v93 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v92, v92[4]);
      OverwriteAssetSoundName__PlaySystemSe(v93, 0, 0, 0LL);
      if ( !FollowerListRequest_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FollowerListRequest_TypeInfo);
      v94 = FollowerListRequest__checkRefreshRate(0LL);
      v95 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BC3254(CommonConfirmDialog_ClickDelegate_TypeInfo);
      CommonConfirmDialog_ClickDelegate___ctor(
        v95,
        (Il2CppObject *)v8,
        Method_FollowerRootComponent_EndRefreshConfirm__,
        0LL);
      if ( kind == 13 )
      {
        if ( !FollowerRecommendSupportListRequest_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FollowerRecommendSupportListRequest_TypeInfo);
        v96 = FollowerRecommendSupportListRequest__CheckRefreshRate(0LL);
        v95 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BC3254(CommonConfirmDialog_ClickDelegate_TypeInfo);
        CommonConfirmDialog_ClickDelegate___ctor(
          v95,
          (Il2CppObject *)v8,
          Method_FollowerRootComponent_EndRecommendRefreshConfirm__,
          0LL);
        if ( v96 )
        {
LABEL_62:
          commonConfirmDialog = v8->fields.commonConfirmDialog;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v98 = LocalizationManager__Get((System_String_o *)StringLiteral_6409/*"FOLLOWER_SELECT_REFRESH_TITLE"*/, 0LL);
          this = (FollowerRootComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6406/*"FOLLOWER_SELECT_REFRESH_MESSAGE"*/, 0LL);
          v99 = this;
          if ( !FollowerRootComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(FollowerRootComponent_TypeInfo);
          if ( commonConfirmDialog )
          {
            CommonConfirmDialog__Open_30705388(
              commonConfirmDialog,
              v98,
              (System_String_o *)v99,
              1,
              v95,
              FollowerRootComponent_TypeInfo->static_fields->LIST_UPDATE_MESSAGE_FONT_SIZE,
              0,
              0,
              0,
              0LL);
            return;
          }
          goto LABEL_185;
        }
      }
      else if ( v94 )
      {
        goto LABEL_62;
      }
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v125 = LocalizationManager__Get((System_String_o *)StringLiteral_6408/*"FOLLOWER_SELECT_REFRESH_REST_TITLE"*/, 0LL);
      v126 = LocalizationManager__Get((System_String_o *)StringLiteral_6407/*"FOLLOWER_SELECT_REFRESH_REST_MESSAGE"*/, 0LL);
      v127 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
      System_Action___ctor(v127, (Il2CppObject *)v8, Method_FollowerRootComponent_EndRefreshRest__, 0LL);
      if ( Instance )
      {
        CommonUI__OpenNotificationDialog(
          (CommonUI_o *)Instance,
          v125,
          v126,
          v127,
          -1,
          0,
          0,
          0,
          0,
          0,
          1,
          0,
          0LL,
          0.0,
          0,
          0LL);
        return;
      }
      goto LABEL_185;
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
      this = (FollowerRootComponent_o *)v8->fields.operationItemListViewManager;
      if ( !this )
        goto LABEL_185;
      this = (FollowerRootComponent_o *)FollowerSelectItemListViewManager__GetItem(
                                          (FollowerSelectItemListViewManager_o *)this,
                                          n,
                                          *(const MethodInfo **)&n);
      v49 = (unsigned int)(kind - 9);
      v50 = (unsigned int)v49 < 4 ? v49 + 1 : 0LL;
      if ( !this )
        goto LABEL_185;
      this = (FollowerRootComponent_o *)FollowerSelectItemListViewItem__GetAppendSkillInfo(
                                          (FollowerSelectItemListViewItem_o *)this,
                                          &skillInfoList,
                                          this->fields.friendPointUpVal,
                                          v48);
      if ( !skillInfoList )
        goto LABEL_185;
      if ( (unsigned int)v50 >= skillInfoList->max_length )
LABEL_186:
        sub_1BC326C(this, *(_QWORD *)&kind, v51);
      v52 = skillInfoList->m_Items[v50];
      if ( v52 && v52->fields.id >= 1 && v52->fields.lv >= 1 )
      {
        v53 = Method_FollowerRootComponent_OnSelectFollowerItem__;
        if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
          v53 = (_QWORD *)sub_1BC3020(Method_FollowerRootComponent_OnSelectFollowerItem__);
        v54 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v53, v53[4]);
        OverwriteAssetSoundName__PlaySystemSe(v54, 0, 0, 0LL);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (FollowerRootComponent_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_SkillMaster___);
        if ( !this )
          goto LABEL_185;
        v55 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                v52->fields.id,
                (const MethodInfo_32AF070 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        this = (FollowerRootComponent_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_SkillLvMaster___);
        if ( !this )
          goto LABEL_185;
        this = (FollowerRootComponent_o *)SkillLvMaster__GetEntity(
                                            (SkillLvMaster_o *)this,
                                            v52->fields.id,
                                            v52->fields.lv,
                                            0LL);
        if ( !v55 )
          goto LABEL_185;
        SkillEntity__getSkillMessageInfo((SkillEntity_o *)v55, &name, &detail, v52->fields.lv, 0LL);
        v56 = name;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v57 = LocalizationManager__Get((System_String_o *)StringLiteral_8469/*"MASTER_EQSKILL_LV_TXT"*/, 0LL);
        lv = v52->fields.lv;
        v61 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv, v58, v59, v60);
        v62 = System_String__Format(v57, v61, 0LL);
        name = System_String__Concat_62386896(v56, (System_String_o *)StringLiteral_113/*" "*/, v62, 0LL);
        v63 = v8->fields.tutorialMode;
        this = (FollowerRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !this )
          goto LABEL_185;
        if ( v63 == 3 )
          CommonUI__OpenDetailLongInfoDialogOnFade(
            (CommonUI_o *)this,
            name,
            (System_String_o *)StringLiteral_1/*""*/,
            detail,
            0LL);
        else
          CommonUI__OpenDetailLongInfoDialog(
            (CommonUI_o *)this,
            name,
            (System_String_o *)StringLiteral_1/*""*/,
            detail,
            1,
            0,
            0LL);
      }
      else
      {
        v64 = Method_FollowerRootComponent_OnSelectFollowerItem__;
        if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
          v64 = (_QWORD *)sub_1BC3020(Method_FollowerRootComponent_OnSelectFollowerItem__);
        v65 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v64, v64[4]);
        OverwriteAssetSoundName__PlaySystemSe(v65, 2, 0, 0LL);
      }
LABEL_30:
      operationItemListViewManager = v8->fields.operationItemListViewManager;
      v67 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1BC3254(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
      v68 = (int)Method_FollowerRootComponent_OnSelectFollowerItem__;
      goto LABEL_169;
    case 14:
      battleSetupInfo = v8->fields.battleSetupInfo;
      if ( !battleSetupInfo )
        goto LABEL_185;
      if ( !battleSetupInfo->fields.isChildFollower )
        goto LABEL_117;
      this = (FollowerRootComponent_o *)v8->fields.titleInfo;
      if ( !this )
        goto LABEL_185;
      TitleInfoControl__setBackBtnEnable((TitleInfoControl_o *)this, 0, 0LL);
      this = (FollowerRootComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !this )
        goto LABEL_185;
      LOBYTE(this->fields.operationItemListViewManager) = 1;
LABEL_117:
      v121 = (NetworkManager_ResultCallbackFunc_o *)sub_1BC3254(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v121,
        (Il2CppObject *)v8,
        Method_FollowerRootComponent_CallbackRefresh__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      this = (FollowerRootComponent_o *)NetworkManager__getRequest_object_(
                                          v121,
                                          (const MethodInfo_3089B54 *)Method_NetworkManager_getRequest_FollowerRecommendSupportListRequest___);
      if ( !v8->fields.battleSetupInfo )
        goto LABEL_185;
      v122 = (FollowerRecommendSupportListRequest_o *)this;
      this = (FollowerRootComponent_o *)BattleSetupInfo__TargetQuestId(v8->fields.battleSetupInfo, 0LL);
      v123 = v8->fields.battleSetupInfo;
      if ( !v123 || !v122 )
        goto LABEL_185;
      FollowerRecommendSupportListRequest__beginRequest(v122, 0, (int32_t)this, v123->fields.questPhase, 0LL);
      return;
    default:
      this = (FollowerRootComponent_o *)v8->fields.operationItemListViewManager;
      if ( !this )
        goto LABEL_185;
      this = (FollowerRootComponent_o *)FollowerSelectItemListViewManager__GetItem(
                                          (FollowerSelectItemListViewManager_o *)this,
                                          n,
                                          *(const MethodInfo **)&n);
      if ( !this )
        goto LABEL_185;
      v103 = this;
      if ( FollowerSelectItemListViewItem__get_SvtId(
             (FollowerSelectItemListViewItem_o *)this,
             *(const MethodInfo **)&kind) < 1
        || LOBYTE(v103->fields.tutorialMode)
        || BYTE3(v103[1].klass) )
      {
        goto LABEL_164;
      }
      this = (FollowerRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
      if ( !this )
        goto LABEL_185;
      if ( !BYTE4(this->fields.battleSetupInfo) )
        goto LABEL_89;
      this = (FollowerRootComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      v104 = this;
      v105 = FollowerRootComponent___c_TypeInfo;
      if ( !FollowerRootComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FollowerRootComponent___c_TypeInfo);
        v105 = FollowerRootComponent___c_TypeInfo;
      }
      _9__67_0 = v105->static_fields->__9__67_0;
      if ( !_9__67_0 )
      {
        if ( !v105->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v105);
          v105 = FollowerRootComponent___c_TypeInfo;
        }
        v107 = (Il2CppObject *)v105->static_fields->__9;
        _9__67_0 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
        System_Action___ctor(_9__67_0, v107, Method_FollowerRootComponent___c__OnSelectFollowerItem_b__67_0__, 0LL);
        static_fields = FollowerRootComponent___c_TypeInfo->static_fields;
        static_fields->__9__67_0 = _9__67_0;
        this = (FollowerRootComponent_o *)sub_1BC2FAC(&static_fields->__9__67_0);
      }
      if ( !v104 )
        goto LABEL_185;
      if ( PartyOrganizationUtility__OpenQuestUseItemExpiredDialog((PartyOrganizationUtility_o *)v104, _9__67_0, 0LL) )
        goto LABEL_30;
LABEL_89:
      v109 = Method_FollowerRootComponent_OnSelectFollowerItem__;
      if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
        v109 = (_QWORD *)sub_1BC3020(Method_FollowerRootComponent_OnSelectFollowerItem__);
      v110 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v109, v109[4]);
      OverwriteAssetSoundName__PlaySystemSe(v110, 0, 0, 0LL);
      if ( !v8->fields.tutorialState )
        goto LABEL_96;
      v111 = v8->fields.tutorialMode;
      if ( v111 == 3 )
      {
        v8->fields.state = 4;
        v154 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v155 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
        System_Action___ctor(v155, (Il2CppObject *)v8, Method_FollowerRootComponent_EndCloseTutorialArrow__, 0LL);
        if ( !v154 )
          goto LABEL_185;
        CommonUI__CloseTutorialArrowMark((CommonUI_o *)v154, v155, 0LL);
      }
      else if ( v111 == 2 )
      {
        this = (FollowerRootComponent_o *)v8->fields.titleInfo;
        if ( this )
        {
          TitleInfoControl__setBackBtnEnable((TitleInfoControl_o *)this, 1, 0LL);
LABEL_96:
          this = (FollowerRootComponent_o *)v8->fields.myFSM;
          if ( this )
          {
            v112 = &StringLiteral_8574/*"MENU_SELECT_ITEM"*/;
LABEL_136:
            PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v112, 0LL);
            return;
          }
        }
LABEL_185:
        sub_1BC3264(this, *(_QWORD *)&kind);
      }
      return;
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
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  int32_t questId; // w20
  BalanceConfig_c *v14; // x0
  QuestPhaseMaster_o *v15; // x20
  struct BattleSetupInfo_o *v16; // x8
  float FormationSubBgmFadeInTime; // s8
  int FormationBgmId; // w20
  System_String_o *BgmFileName; // x22
  _BOOL4 v20; // w23
  char v21; // w21
  FollowerRootComponent_o *v22; // x20
  int32_t FormationSubBgmId; // w0
  int32_t v24; // w20
  const MethodInfo *v25; // x2
  __int64 v26; // x8
  System_String_o *v27; // x19
  System_String_o *v28; // x0
  struct BattleSetupInfo_o *v29; // x8
  const MethodInfo *v30; // x2
  FollowerRootComponent_o *v31; // x0
  const MethodInfo *v32; // x2
  QuestMaster_o *v33; // x22
  struct BattleSetupInfo_o *v34; // x8
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  v2 = this;
  if ( (byte_4AFCB55 & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, method);
    sub_1BC3008(&BgmManager_TypeInfo, v3);
    sub_1BC3008(&Method_DataManager_GetMasterData_QuestMaster___, v4);
    sub_1BC3008(&Method_DataManager_GetMaster_BgmMaster___, v5);
    sub_1BC3008(&Method_DataManager_GetMaster_QuestPhaseMaster___, v6);
    sub_1BC3008(&DataManager_TypeInfo, v7);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1BC3008(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v9);
    sub_1BC3008(&SoundManager_TypeInfo, v10);
    this = (FollowerRootComponent_o *)sub_1BC3008(&StringLiteral_1/*""*/, v11);
    byte_4AFCB55 = 1;
  }
  entity = 0LL;
  battleSetupInfo = v2->fields.battleSetupInfo;
  if ( !battleSetupInfo )
    goto LABEL_69;
  questId = battleSetupInfo->fields.questId;
  v14 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v14 = BalanceConfig_TypeInfo;
  }
  if ( questId != v14->static_fields->PrologueQuestId )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (FollowerRootComponent_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( !v2->fields.battleSetupInfo )
      goto LABEL_69;
    v15 = (QuestPhaseMaster_o *)this;
    this = (FollowerRootComponent_o *)BattleSetupInfo__TargetQuestId(v2->fields.battleSetupInfo, 0LL);
    v16 = v2->fields.battleSetupInfo;
    if ( !v16 || !v15 )
      goto LABEL_69;
    FormationSubBgmFadeInTime = 0.0;
    if ( QuestPhaseMaster__TryGetEntity(v15, &entity, (int32_t)this, v16->fields.questPhase, 0LL) )
    {
      this = (FollowerRootComponent_o *)entity;
      if ( !entity )
        goto LABEL_69;
      FormationBgmId = QuestPhaseEntity__GetFormationBgmId(entity, 0LL);
      if ( FormationBgmId < 1 )
      {
        BgmFileName = 0LL;
        v20 = FormationBgmId == 0;
      }
      else
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (FollowerRootComponent_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_BgmMaster___);
        if ( !this )
          goto LABEL_69;
        BgmFileName = BgmMaster__GetBgmFileName(
                        (BgmMaster_o *)this,
                        FormationBgmId,
                        (System_String_o *)StringLiteral_1/*""*/,
                        0LL);
        v20 = 0;
      }
      this = (FollowerRootComponent_o *)entity;
      if ( !entity )
        goto LABEL_69;
      this = (FollowerRootComponent_o *)QuestPhaseEntity__IsNonStopEndBgm(entity, 0LL);
      if ( !entity )
        goto LABEL_69;
      v21 = (char)this;
      FormationSubBgmId = QuestPhaseEntity__GetFormationSubBgmId(entity, 0LL);
      if ( (FormationSubBgmId & 0x80000000) != 0 )
      {
        v22 = 0LL;
      }
      else
      {
        v24 = FormationSubBgmId;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (FollowerRootComponent_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_BgmMaster___);
        if ( !this )
          goto LABEL_69;
        this = (FollowerRootComponent_o *)BgmMaster__GetBgmFileName(
                                            (BgmMaster_o *)this,
                                            v24,
                                            (System_String_o *)StringLiteral_1/*""*/,
                                            0LL);
        if ( !entity )
          goto LABEL_69;
        v22 = this;
        FormationSubBgmFadeInTime = QuestPhaseEntity__GetFormationSubBgmFadeInTime(entity, 0LL);
      }
    }
    else
    {
      v20 = 0;
      v21 = 0;
      v22 = 0LL;
      BgmFileName = 0LL;
    }
    this = (FollowerRootComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !this )
      goto LABEL_69;
    this = (FollowerRootComponent_o *)PartyOrganizationUtility__ExistsTemporaryPartyInfo(
                                        (PartyOrganizationUtility_o *)this,
                                        0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !System_String__IsNullOrEmpty(BgmFileName, 0LL) )
        FollowerRootComponent__SetBackupBgmName(v2, v21 & 1, v25);
      this = (FollowerRootComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( this )
      {
        v26 = *(_QWORD *)&this->fields.friendPointUpVal;
        if ( v26 )
        {
          v27 = *(System_String_o **)(v26 + 40);
          if ( !SoundManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          v28 = v27;
LABEL_66:
          SoundManager__playBgm(v28, 0LL);
LABEL_67:
          FollowerRootComponent__PlaySubBgm(v31, (System_String_o *)v22, FormationSubBgmFadeInTime, v32);
          return;
        }
      }
LABEL_69:
      sub_1BC3264(this, method);
    }
    v29 = v2->fields.battleSetupInfo;
    if ( !v29 )
      goto LABEL_69;
    if ( !v29->fields.isScriptBeforePartySelect )
      goto LABEL_48;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    if ( !SoundManager__isPlayBgm(0LL, 0LL) )
      goto LABEL_48;
    if ( !System_String__IsNullOrEmpty(BgmFileName, 0LL) )
    {
      if ( !BgmManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
      if ( !BgmManager__IsPlayBgm(BgmFileName, 0LL) )
      {
LABEL_48:
        if ( System_String__IsNullOrEmpty(BgmFileName, 0LL) )
        {
          if ( v20 )
          {
            FollowerRootComponent__SetBackupBgmName(v2, v21 & 1, v30);
            if ( !SoundManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
            SoundManager__stopBgm(0LL);
            goto LABEL_67;
          }
          this = (FollowerRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !this )
            goto LABEL_69;
          this = (FollowerRootComponent_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_QuestMaster___);
          if ( !v2->fields.battleSetupInfo )
            goto LABEL_69;
          v33 = (QuestMaster_o *)this;
          this = (FollowerRootComponent_o *)BattleSetupInfo__TargetQuestId(v2->fields.battleSetupInfo, 0LL);
          if ( !v33 )
            goto LABEL_69;
          this = (FollowerRootComponent_o *)QuestMaster__getQuestEntity(v33, (int32_t)this, 0LL);
          v34 = v2->fields.battleSetupInfo;
          if ( !v34 || !this )
            goto LABEL_69;
          BgmFileName = QuestEntity__GetBgmName((QuestEntity_o *)this, v34->fields.warId, 0LL);
          if ( !System_String__IsNullOrEmpty(BgmFileName, 0LL) )
          {
LABEL_63:
            if ( !SoundManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
            v28 = BgmFileName;
            goto LABEL_66;
          }
          if ( !BgmManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
          BgmFileName = BgmManager__GetMainBgmName(1, 0LL);
        }
        FollowerRootComponent__SetBackupBgmName(v2, v21 & 1, v30);
        goto LABEL_63;
      }
    }
  }
}


void __fastcall FollowerRootComponent__PlaySubBgm(
        FollowerRootComponent_o *this,
        System_String_o *subBgmName,
        float fadeTime,
        const MethodInfo *method)
{
  if ( (byte_4AFCB54 & 1) == 0 )
  {
    sub_1BC3008(&SoundManager_TypeInfo, subBgmName);
    byte_4AFCB54 = 1;
  }
  if ( !System_String__IsNullOrEmpty(subBgmName, 0LL) )
  {
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__PlaySubBgm(subBgmName, fadeTime, 0LL);
  }
}


void __fastcall FollowerRootComponent__Quit(FollowerRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x0

  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager
    || (FollowerSelectItemListViewManager__DestroyList_31704696(operationItemListViewManager, 0LL, v2),
        (operationItemListViewManager = this->fields.operationItemListViewManager) == 0LL)
    || (operationItemListViewManager = (FollowerSelectItemListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                                (UnityEngine_Component_o *)operationItemListViewManager,
                                                                                0LL)) == 0LL )
  {
    sub_1BC3264(operationItemListViewManager, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)operationItemListViewManager, 0, 0LL);
  this->fields.state = 0;
}


void __fastcall FollowerRootComponent__RequestFollowerList(FollowerRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  NetworkManager_ResultCallbackFunc_o *v7; // x20
  FollowerListRequest_o *Request_object; // x0
  __int64 v9; // x1
  FollowerListRequest_o *v10; // x20
  struct BattleSetupInfo_o *battleSetupInfo; // x8

  if ( (byte_4AFCB5E & 1) == 0 )
  {
    sub_1BC3008(&Method_FollowerRootComponent_CallbackFollowerList__, method);
    sub_1BC3008(&Method_NetworkManager_getRequest_FollowerListRequest___, v3);
    sub_1BC3008(&NetworkManager_TypeInfo, v4);
    sub_1BC3008(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    sub_1BC3008(&StringLiteral_10976/*"REQUEST_OK"*/, v6);
    byte_4AFCB5E = 1;
  }
  v7 = (NetworkManager_ResultCallbackFunc_o *)sub_1BC3254(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v7,
    (Il2CppObject *)this,
    Method_FollowerRootComponent_CallbackFollowerList__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = (FollowerListRequest_o *)NetworkManager__getRequest_object_(
                                              v7,
                                              (const MethodInfo_3089B54 *)Method_NetworkManager_getRequest_FollowerListRequest___);
  if ( !Request_object )
    goto LABEL_12;
  v10 = Request_object;
  if ( (((__int64 (__fastcall *)(FollowerListRequest_o *, Il2CppMethodPointer))Request_object->klass->vtable._7_checkExpirationDate.method)(
          Request_object,
          Request_object->klass->vtable._8_isBackgroundRequest.methodPtr) & 1) != 0 )
  {
    Request_object = (FollowerListRequest_o *)this->fields.myFSM;
    if ( Request_object )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Request_object, (System_String_o *)StringLiteral_10976/*"REQUEST_OK"*/, 0LL);
      return;
    }
LABEL_12:
    sub_1BC3264(Request_object, v9);
  }
  Request_object = (FollowerListRequest_o *)this->fields.battleSetupInfo;
  if ( !Request_object )
    goto LABEL_12;
  Request_object = (FollowerListRequest_o *)BattleSetupInfo__TargetQuestId((BattleSetupInfo_o *)Request_object, 0LL);
  battleSetupInfo = this->fields.battleSetupInfo;
  if ( !battleSetupInfo )
    goto LABEL_12;
  FollowerListRequest__beginRequest(v10, 0, (int32_t)Request_object, battleSetupInfo->fields.questPhase, 0LL);
}


bool __fastcall FollowerRootComponent__ReturnBattleSetupMenu(FollowerRootComponent_o *this, const MethodInfo *method)
{
  FollowerRootComponent_o *v2; // x20
  struct BattleSetupInfo_o *battleSetupInfo; // x19

  v2 = this;
  if ( (byte_4AFCB6B & 1) == 0 )
  {
    this = (FollowerRootComponent_o *)sub_1BC3008(
                                        &Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__,
                                        method);
    byte_4AFCB6B = 1;
  }
  battleSetupInfo = v2->fields.battleSetupInfo;
  v2->fields.state = 5;
  if ( !battleSetupInfo )
    goto LABEL_8;
  if ( battleSetupInfo->fields.isChildFollower )
    battleSetupInfo->fields.followerId = 0LL;
  this = (FollowerRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !this )
LABEL_8:
    sub_1BC3264(this, method);
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
  System_String_o *backupBgmName; // x22
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  TerminalPramsManager_c *v13; // x0

  if ( (byte_4AFCB6A & 1) == 0 )
  {
    sub_1BC3008(&Method_AvalonSceneManager_UnloadScene_PartyOrganizationRootComponent___, method);
    sub_1BC3008(&QuestHintDialogOpenManager_TypeInfo, v3);
    sub_1BC3008(&RandomLimitCountManager_TypeInfo, v4);
    sub_1BC3008(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5);
    sub_1BC3008(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v6);
    sub_1BC3008(&SoundManager_TypeInfo, v7);
    sub_1BC3008(&TerminalPramsManager_TypeInfo, v8);
    byte_4AFCB6A = 1;
  }
  battleSetupInfo = (Il2CppObject *)this->fields.battleSetupInfo;
  if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
  QuestHintDialogOpenManager__ResetTemporarilyId(0LL);
  if ( !System_String__IsNullOrEmpty(this->fields.backupBgmName, 0LL) )
  {
    backupBgmName = this->fields.backupBgmName;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__playBgm(backupBgmName, 0LL);
  }
  this->fields.battleSetupInfo = 0LL;
  sub_1BC2FAC(&this->fields.battleSetupInfo);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  if ( BYTE6(Instance[10].monitor) )
  {
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_29;
    BYTE6(Instance[10].monitor) = 0;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4AFC911 )
    {
      sub_1BC3008(&TerminalPramsManager_TypeInfo, v12);
      byte_4AFC911 = 1;
    }
    v13 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v13 = TerminalPramsManager_TypeInfo;
    }
    v13->static_fields->_IsAutoResume_k__BackingField = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  if ( AvalonSceneManager__IsStackScene((AvalonSceneManager_o *)Instance, 0LL) )
  {
    this->fields.state = 0;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_29;
    AvalonSceneManager__popSceneRefresh((AvalonSceneManager_o *)Instance, 1, battleSetupInfo, 0LL);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_29;
    AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0, 0LL);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
LABEL_29:
    sub_1BC3264(Instance, v12);
  AvalonSceneManager__UnloadScene_object_(
    (AvalonSceneManager_o *)Instance,
    (const MethodInfo_2FE9D04 *)Method_AvalonSceneManager_UnloadScene_PartyOrganizationRootComponent___);
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  RandomLimitCountManager__set_EnableRandomLimitCount(0, 0LL);
  return 1;
}


void __fastcall FollowerRootComponent__ReturnSupportList(FollowerRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t state; // w8
  const MethodInfo *v10; // x3
  __int64 operationItemListViewManager; // x0
  struct FollowerSelectItemListViewManager_o *v12; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v13; // x21
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x2
  FollowerSelectItemListViewManager_o *v16; // x20
  FollowerSelectItemListViewManager_c *v17; // x0
  struct FollowerSelectItemListViewManager_o *v18; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x8
  struct FollowerSelectItemListViewManager_o *v20; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v21; // x21
  const MethodInfo *v22; // x2
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  FollowerQuestInfomationDraw_o *followerQuestInfomationDraw; // x20
  QuestRestrictionInfo_o *questRestrictionInfo; // x21
  const MethodInfo *v26; // x4
  CommonUI_o *v27; // x20

  if ( (byte_4AFCB5C & 1) == 0 )
  {
    sub_1BC3008(&AvalonSceneManager_TypeInfo, method);
    sub_1BC3008(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, v4);
    sub_1BC3008(&Method_FollowerRootComponent_OnSelectFollowerItem__, v5);
    sub_1BC3008(&RandomLimitCountManager_TypeInfo, v6);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1BC3008(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v8);
    byte_4AFCB5C = 1;
  }
  state = this->fields.state;
  this->fields.state = 3;
  if ( state == 5 )
  {
    if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    RandomLimitCountManager__set_EnableRandomLimitCount(0, 0LL);
    RandomLimitCountManager__set_EnableRandomLimitCount(1, 0LL);
    operationItemListViewManager = (__int64)this->fields.operationItemListViewManager;
    if ( !operationItemListViewManager )
      goto LABEL_30;
    FollowerSelectItemListViewManager__ModifyList(
      (FollowerSelectItemListViewManager_o *)operationItemListViewManager,
      this->fields.friendPointUpVal,
      this->fields.friendPointUpMaxVal,
      v10);
    v12 = this->fields.operationItemListViewManager;
    v13 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1BC3254(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    FollowerSelectItemListViewManager_CallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
      0LL);
    if ( !v12 )
      goto LABEL_30;
    v12->fields.callbackFunc = v13;
    sub_1BC2FAC(&v12->fields.callbackFunc);
    FollowerSelectItemListViewManager__SetMode_31775360(v12, 3, v14);
    v16 = this->fields.operationItemListViewManager;
    if ( !v16 )
      goto LABEL_30;
    if ( !byte_4AFCBD7 )
    {
      sub_1BC3008(&FollowerSelectItemListViewManager_TypeInfo, method);
      byte_4AFCBD7 = 1;
    }
    v17 = FollowerSelectItemListViewManager_TypeInfo;
    if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
      v17 = FollowerSelectItemListViewManager_TypeInfo;
    }
    operationItemListViewManager = FollowerSelectItemListViewManager__ChangeClass(
                                     v16,
                                     v17->static_fields->followerClassId,
                                     v15);
    v18 = this->fields.operationItemListViewManager;
    if ( !v18 )
LABEL_30:
      sub_1BC3264(operationItemListViewManager, method);
    if ( (byte_4AFCBD5 & 1) == 0 )
    {
      operationItemListViewManager = sub_1BC3008(
                                       &Method_System_Collections_Generic_List_ListViewItem__get_Count__,
                                       method);
      byte_4AFCBD5 = 1;
    }
    itemSortList = v18->fields.itemSortList;
    if ( itemSortList && itemSortList->fields._size >= 3 )
    {
      operationItemListViewManager = (__int64)this->fields.operationItemListViewManager;
      if ( !operationItemListViewManager )
        goto LABEL_30;
      ListViewManager__JumpItem((ListViewManager_o *)operationItemListViewManager, this->fields.selectItemNum, 0LL);
    }
  }
  else
  {
    operationItemListViewManager = (__int64)this->fields.operationItemListViewManager;
    if ( !operationItemListViewManager )
      goto LABEL_30;
    FollowerSelectItemListViewManager__ModifyList(
      (FollowerSelectItemListViewManager_o *)operationItemListViewManager,
      this->fields.friendPointUpVal,
      this->fields.friendPointUpMaxVal,
      v2);
    v20 = this->fields.operationItemListViewManager;
    v21 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1BC3254(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    FollowerSelectItemListViewManager_CallbackFunc___ctor(
      v21,
      (Il2CppObject *)this,
      (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
      0LL);
    if ( !v20 )
      goto LABEL_30;
    v20->fields.callbackFunc = v21;
    sub_1BC2FAC(&v20->fields.callbackFunc);
    FollowerSelectItemListViewManager__SetMode_31775360(v20, 2, v22);
  }
  battleSetupInfo = this->fields.battleSetupInfo;
  if ( !battleSetupInfo )
    goto LABEL_30;
  followerQuestInfomationDraw = this->fields.followerQuestInfomationDraw;
  questRestrictionInfo = battleSetupInfo->fields.questRestrictionInfo;
  operationItemListViewManager = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !operationItemListViewManager || !followerQuestInfomationDraw )
    goto LABEL_30;
  FollowerQuestInfomationDraw__SetInfomation(
    followerQuestInfomationDraw,
    questRestrictionInfo,
    *(_DWORD *)(operationItemListViewManager + 64),
    0LL,
    v26);
  operationItemListViewManager = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v27 = (CommonUI_o *)operationItemListViewManager;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v27 )
    goto LABEL_30;
  CommonUI__maskFadein(v27, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
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
  ServantStatusDialog_EndDelegate_o *v10; // x22

  if ( (byte_4AFCB64 & 1) == 0 )
  {
    sub_1BC3008(&ServantStatusDialog_EndDelegate_TypeInfo, item);
    sub_1BC3008(&Method_FollowerRootComponent_EndShowServant__, v5);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4AFCB64 = 1;
  }
  operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager
    || (ListViewManager__GetScrollView(
          operationItemListViewManager,
          &this->fields.openScroll,
          &this->fields.openOffset,
          0LL),
        operationItemListViewManager = (ListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        !item)
    || (v8 = (CommonUI_o *)operationItemListViewManager,
        ServantLeader = FollowerSelectItemListViewItem__get_ServantLeader(item, (const MethodInfo *)item),
        v10 = (ServantStatusDialog_EndDelegate_o *)sub_1BC3254(ServantStatusDialog_EndDelegate_TypeInfo),
        ServantStatusDialog_EndDelegate___ctor(
          v10,
          (Il2CppObject *)this,
          Method_FollowerRootComponent_EndShowServant__,
          0LL),
        !v8) )
  {
    sub_1BC3264(operationItemListViewManager, item);
  }
  CommonUI__OpenServantStatusDialog_30743384(v8, 5, ServantLeader, v10, 0LL);
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
  Il2CppObject *Instance; // x22
  ServantStatusDialog_EndDelegate_o *v11; // x23

  if ( (byte_4AFCB67 & 1) == 0 )
  {
    sub_1BC3008(&ServantStatusDialog_EndDelegate_TypeInfo, equipInfo);
    sub_1BC3008(&Method_FollowerRootComponent_EndShowServantEquip__, v7);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    byte_4AFCB67 = 1;
  }
  operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager
    || (ListViewManager__GetScrollView(
          operationItemListViewManager,
          &this->fields.openScroll,
          &this->fields.openOffset,
          0LL),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v11 = (ServantStatusDialog_EndDelegate_o *)sub_1BC3254(ServantStatusDialog_EndDelegate_TypeInfo),
        ServantStatusDialog_EndDelegate___ctor(
          v11,
          (Il2CppObject *)this,
          Method_FollowerRootComponent_EndShowServantEquip__,
          0LL),
        !Instance) )
  {
    sub_1BC3264(operationItemListViewManager, equipInfo);
  }
  CommonUI__OpenServantEquipStatusDialog_30746480((CommonUI_o *)Instance, statusKind, equipInfo, v11, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerRootComponent__SetBackupBgmName(
        FollowerRootComponent_o *this,
        bool isNonStopEndBgm,
        const MethodInfo *method)
{
  if ( (byte_4AFCB56 & 1) == 0 )
  {
    sub_1BC3008(&SoundManager_TypeInfo, isNonStopEndBgm);
    byte_4AFCB56 = 1;
  }
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  if ( SoundManager__isPlayBgm(0LL, 0LL) && !isNonStopEndBgm )
  {
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    this->fields.backupBgmName = SoundManager__getBgmName(0LL);
    sub_1BC2FAC(&this->fields.backupBgmName);
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

  if ( (byte_4AFCB51 & 1) == 0 )
  {
    sub_1BC3008(&AtlasManager_TypeInfo, spriteName);
    sub_1BC3008(&FollowerRootComponent_TypeInfo, v5);
    byte_4AFCB51 = 1;
  }
  v6 = FollowerRootComponent_TypeInfo;
  if ( !FollowerRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerRootComponent_TypeInfo);
    v6 = FollowerRootComponent_TypeInfo;
  }
  partyOrganizationAtlasCache = v6->static_fields->partyOrganizationAtlasCache;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  return AtlasManager__SetGradeBase(sprite, spriteName, partyOrganizationAtlasCache, 0LL);
}


bool __fastcall FollowerRootComponent__StartBattleSetupMenu(FollowerRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  void *Instance; // x0
  __int64 followerId; // x1
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x5
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  int32_t ItemIndex_31729064; // w0
  __int64 v10; // x2
  __int64 v11; // x9
  struct BattleSetupInfo_o *v12; // x8
  int64_t v13; // x10
  int32_t v14; // w10
  __int64 v15; // x10
  __int64 v16; // x10
  int32_t v17; // w9
  Il2CppObject *v18; // x19

  if ( (byte_4AFCB6C & 1) == 0 )
  {
    sub_1BC3008(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    sub_1BC3008(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v3);
    byte_4AFCB6C = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  Instance = (void *)PartyOrganizationUtility__ExistsTemporaryPartyInfo((PartyOrganizationUtility_o *)Instance, 0LL);
  battleSetupInfo = this->fields.battleSetupInfo;
  if ( !battleSetupInfo )
    goto LABEL_31;
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    followerId = battleSetupInfo->fields.followerId;
    if ( followerId >= 1 )
    {
      Instance = this->fields.operationItemListViewManager;
      if ( !Instance )
        goto LABEL_31;
      ItemIndex_31729064 = FollowerSelectItemListViewManager__GetItemIndex_31729064(
                             (FollowerSelectItemListViewManager_o *)Instance,
                             followerId,
                             battleSetupInfo->fields.followerClassId,
                             battleSetupInfo->fields.followerSupportDeckId,
                             battleSetupInfo->fields.followerGrandGraphId,
                             v7);
      this->fields.selectItemNum = ItemIndex_31729064 & ~(ItemIndex_31729064 >> 31);
    }
    goto LABEL_28;
  }
  battleSetupInfo->fields.followerId = 0LL;
  followerId = (unsigned int)this->fields.selectItemNum;
  if ( (followerId & 0x80000000) == 0 )
  {
    Instance = this->fields.operationItemListViewManager;
    if ( !Instance )
      goto LABEL_31;
    Instance = FollowerSelectItemListViewManager__GetItem(
                 (FollowerSelectItemListViewManager_o *)Instance,
                 followerId,
                 v6);
    if ( Instance )
    {
      v11 = *((_QWORD *)Instance + 14);
      v12 = this->fields.battleSetupInfo;
      if ( v11 )
      {
        v13 = *(_QWORD *)(v11 + 16);
        if ( !v12 )
          goto LABEL_31;
      }
      else
      {
        v13 = 0LL;
        if ( !v12 )
          goto LABEL_31;
      }
      v12->fields.followerId = v13;
      v14 = *((_DWORD *)Instance + 31);
      if ( v14 )
        v14 = *((_DWORD *)Instance + 30);
      v12->fields.followerClassId = v14;
      v12->fields.followerGrandGraphId = *((_DWORD *)Instance + 60);
      v12->fields.followerSupportDeckId = *((_DWORD *)Instance + 66);
      if ( !*((_BYTE *)Instance + 236) )
      {
        v12->fields.recommendSupportIdx = 0;
        if ( !v11 )
        {
          v12->fields.followerType = 0;
          goto LABEL_28;
        }
        goto LABEL_25;
      }
      if ( v11 )
      {
        v15 = *(_QWORD *)(v11 + 56);
        if ( v15 )
        {
          if ( !*(_DWORD *)(v15 + 24) )
            sub_1BC326C(Instance, followerId, v10);
          v16 = *(_QWORD *)(v15 + 32);
          if ( v16 )
          {
            v12->fields.recommendSupportIdx = *(_DWORD *)(v16 + 24);
LABEL_25:
            v17 = *(_DWORD *)(v11 + 36);
            v12->fields.followerType = 0;
            if ( v17 == 5 || v17 == 1 )
              v12->fields.followerType = v17;
            goto LABEL_28;
          }
        }
      }
LABEL_31:
      sub_1BC3264(Instance, followerId);
    }
  }
LABEL_28:
  this->fields.state = 5;
  v18 = (Il2CppObject *)this->fields.battleSetupInfo;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  AvalonSceneManager__pushScene((AvalonSceneManager_o *)Instance, 40, 1, v18, 0LL);
  return 1;
}


bool __fastcall FollowerRootComponent__StartSupportInfoMenu(FollowerRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 selectItemNum; // x1
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x0
  FollowerSelectItemListViewItem_o *Item; // x0
  FollowerSelectItemListViewItem_o *v13; // x20
  __int64 v14; // x2
  Il2CppClass *klass; // x8
  int namespaze; // w9
  int v17; // w10
  FollowerInfo_o *v18; // x22
  struct FollowerInfo_o *followerInfo; // x11
  Il2CppClass *v20; // x8
  const char *v21; // x9
  int v22; // w10
  FollowerInfo_o *v23; // x21
  struct FollowerInfo_o *userId; // x11
  bool v25; // w22
  SupportInfoJump_o *v27; // x21
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  struct FollowerSelectItemListViewManager_FollowerSelectItemOption_o *Option_k__BackingField; // x8
  Il2CppObject *v30; // x3
  SupportInfoJump_o *v31; // x20
  struct BattleSetupInfo_o *v32; // x8
  Il2CppObject *v33; // [xsp+8h] [xbp-38h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4AFCB6D & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_PickupUserFollowerMaster___, method);
    sub_1BC3008(&Method_DataManager_GetMaster_UserFollowerMaster___, v4);
    sub_1BC3008(&DataManager_TypeInfo, v5);
    sub_1BC3008(&Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long__TryGetSingleEntity__, v6);
    sub_1BC3008(
      &Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long__TryGetSingleEntity__,
      v7);
    sub_1BC3008(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v8);
    sub_1BC3008(&SupportInfoJump_TypeInfo, v9);
    byte_4AFCB6D = 1;
  }
  entity = 0LL;
  v33 = 0LL;
  selectItemNum = (unsigned int)this->fields.selectItemNum;
  if ( (selectItemNum & 0x80000000) == 0 )
  {
    operationItemListViewManager = this->fields.operationItemListViewManager;
    if ( !operationItemListViewManager )
      goto LABEL_47;
    Item = FollowerSelectItemListViewManager__GetItem(operationItemListViewManager, selectItemNum, v2);
    if ( Item )
    {
      v13 = Item;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      operationItemListViewManager = (FollowerSelectItemListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_UserFollowerMaster___);
      if ( !operationItemListViewManager )
        goto LABEL_47;
      operationItemListViewManager = (FollowerSelectItemListViewManager_o *)DataMasterBase_object__object__long___TryGetSingleEntity(
                                                                              (DataMasterBase_TMaster__TEntity__PKType__o *)operationItemListViewManager,
                                                                              &entity,
                                                                              (const MethodInfo_32B16F8 *)Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long__TryGetSingleEntity__);
      if ( ((unsigned __int8)operationItemListViewManager & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_47;
        klass = entity[1].klass;
        if ( !klass )
          goto LABEL_47;
        namespaze = (int)klass->_1.namespaze;
        if ( namespaze >= 1 )
        {
          v17 = 0;
          while ( 1 )
          {
            if ( namespaze == v17 )
              sub_1BC326C(operationItemListViewManager, selectItemNum, v14);
            v18 = (FollowerInfo_o *)*((_QWORD *)&klass->_1.byval_arg.data + v17);
            if ( !v18 )
              goto LABEL_47;
            followerInfo = v13->fields.followerInfo;
            if ( followerInfo )
              followerInfo = (struct FollowerInfo_o *)followerInfo->fields.userId;
            if ( (struct FollowerInfo_o *)v18->fields.userId == followerInfo )
              break;
            if ( namespaze == ++v17 )
              goto LABEL_20;
          }
          this->fields.state = 6;
          v27 = (SupportInfoJump_o *)sub_1BC3254(SupportInfoJump_TypeInfo);
          SupportInfoJump___ctor_40547412(v27, v18, 0, 1, 0LL);
          battleSetupInfo = this->fields.battleSetupInfo;
          if ( battleSetupInfo )
          {
            if ( v27 )
            {
              SupportInfoJump__SetSetupInfo(
                v27,
                battleSetupInfo->fields.eventUpValSetupInfo,
                battleSetupInfo->fields.questRestrictionInfo,
                0LL);
              Option_k__BackingField = v13->fields._Option_k__BackingField;
              if ( Option_k__BackingField )
              {
                SupportInfoJump__SetIsUseGrandSupport(v27, Option_k__BackingField->fields.isUseGrandBoard, 0LL);
                operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
                if ( operationItemListViewManager )
                {
                  v25 = 1;
                  v30 = (Il2CppObject *)v27;
LABEL_46:
                  AvalonSceneManager__pushScene((AvalonSceneManager_o *)operationItemListViewManager, 60, 1, v30, 0LL);
                  return v25;
                }
              }
            }
          }
          goto LABEL_47;
        }
      }
LABEL_20:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      operationItemListViewManager = (FollowerSelectItemListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_PickupUserFollowerMaster___);
      if ( !operationItemListViewManager )
        goto LABEL_47;
      operationItemListViewManager = (FollowerSelectItemListViewManager_o *)DataMasterBase_object__object__long___TryGetSingleEntity(
                                                                              (DataMasterBase_TMaster__TEntity__PKType__o *)operationItemListViewManager,
                                                                              &v33,
                                                                              (const MethodInfo_32B16F8 *)Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long__TryGetSingleEntity__);
      if ( ((unsigned __int8)operationItemListViewManager & 1) != 0 )
      {
        if ( !v33 )
          goto LABEL_47;
        v20 = v33[1].klass;
        if ( v20 )
        {
          v21 = v20->_1.namespaze;
          if ( v21 )
          {
            if ( (int)v21 >= 1 )
            {
              v22 = 0;
              while ( 1 )
              {
                v23 = (FollowerInfo_o *)*((_QWORD *)&v20->_1.byval_arg.data + v22);
                if ( !v23 )
                  goto LABEL_47;
                userId = v13->fields.followerInfo;
                if ( userId )
                  userId = (struct FollowerInfo_o *)userId->fields.userId;
                if ( (struct FollowerInfo_o *)v23->fields.userId == userId )
                  break;
                ++v22;
                v25 = 0;
                if ( (_DWORD)v21 == v22 )
                  return v25;
              }
              this->fields.state = 6;
              v31 = (SupportInfoJump_o *)sub_1BC3254(SupportInfoJump_TypeInfo);
              SupportInfoJump___ctor_40547412(v31, v23, 0, 1, 0LL);
              v32 = this->fields.battleSetupInfo;
              if ( v32 )
              {
                if ( v31 )
                {
                  SupportInfoJump__SetSetupInfo(
                    v31,
                    v32->fields.eventUpValSetupInfo,
                    v32->fields.questRestrictionInfo,
                    0LL);
                  operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
                  if ( operationItemListViewManager )
                  {
                    v25 = 1;
                    v30 = (Il2CppObject *)v31;
                    goto LABEL_46;
                  }
                }
              }
LABEL_47:
              sub_1BC3264(operationItemListViewManager, selectItemNum);
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
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 Instance; // x0
  System_Int64_array *v19; // x1
  Il2CppObject *MasterData_object; // x20
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  struct BattleSetupInfo_o *v22; // x8
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  Il2CppObject *Master_object; // x21
  EventQuestMaster_o *v25; // x22
  struct BattleSetupInfo_o *v26; // x8
  struct BattleSetupInfo_o *v27; // x8
  int32_t i; // w20
  BalanceConfig_c *v29; // x0
  PartyOrganizationListViewItem_o *Member; // x0
  PartyOrganizationListViewItem_o *v31; // x21
  FollowerRootComponent_o *FriendPointUpTypeVals; // x0
  const MethodInfo *v33; // x4
  struct BattleSetupInfo_o *v34; // x8
  QuestRestrictionInfo_o *v35; // x0
  struct BattleSetupInfo_o *v36; // x8
  struct BattleSetupInfo_o *v37; // x8
  Il2CppObject *v38; // x20
  struct BattleSetupInfo_o *v39; // x8
  int32_t eventId; // w22
  int64_t v41; // x21
  struct BattleSetupInfo_o *v42; // x8
  __int64 v43; // x2
  UserEventDeckEntity_o *v44; // x20
  __int64 v45; // x8
  int64_t currentCryptoKey; // x8
  int32_t v47; // w1
  struct BattleSetupInfo_o *v48; // x9
  struct QuestRestrictionInfo_o *v49; // x9
  int32_t j; // w21
  PartyOrganizationListViewItem_o *v51; // x0
  PartyOrganizationListViewItem_o *v52; // x22
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v54; // q0
  System_Int64_array *v55; // x23
  int32_t InitPos_k__BackingField; // w24
  int64_t v57; // x0
  const MethodInfo *v58; // x3
  System_Int64_array *v59; // x1
  FollowerRootComponent_o *v60; // x0
  const MethodInfo *v61; // x4
  UserServantEntity_array *UserServantList; // x21
  unsigned __int64 v63; // x22
  UserServantEntity_o **m_Items; // x24
  struct DeckServant_o *deckInfo; // x8
  struct DeckServantData_array *svts; // x8
  DeckServantData_o *v67; // x26
  const MethodInfo *v68; // x3
  System_Int64_array *v69; // x23
  FollowerRootComponent_o *v70; // x0
  const MethodInfo *v71; // x4
  int32_t k; // w20
  BalanceConfig_c *v73; // x0
  UserServantEntity_o *UserServant; // x0
  UserServantEntity_o *v75; // x21
  System_Int64_array *EquipList; // x0
  FollowerRootComponent_o *v77; // x0
  const MethodInfo *v78; // x4
  int32_t v79; // w21
  int32_t v80; // w21
  struct BattleSetupInfo_o *v81; // x8
  struct BattleSetupInfo_o *v82; // x8
  int32_t v83; // w8
  int32_t v84; // w9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v85; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v86; // [xsp+20h] [xbp-80h] BYREF
  int32_t fpUpDuplicateSum[2]; // [xsp+40h] [xbp-60h] BYREF
  Il2CppObject *entity; // [xsp+48h] [xbp-58h] BYREF
  System_Nullable_int__o v89; // 0:x0.8

  if ( (byte_4AFCB63 & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, method);
    sub_1BC3008(&Method_DataManager_GetMasterData_UserDeckMaster___, v3);
    sub_1BC3008(&Method_DataManager_GetMasterData_UserEventDeckMaster___, v4);
    sub_1BC3008(&Method_DataManager_GetMaster_EventCampaignMaster___, v5);
    sub_1BC3008(&Method_DataManager_GetMaster_EventQuestMaster___, v6);
    sub_1BC3008(&DataManager_TypeInfo, v7);
    sub_1BC3008(&Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__TryGetEntity__, v8);
    sub_1BC3008(&LastUsedDeckNumberManager_TypeInfo, v9);
    sub_1BC3008(&NetworkManager_TypeInfo, v10);
    sub_1BC3008(&Method_System_Nullable_int__GetValueOrDefault__, v11);
    sub_1BC3008(&Method_System_Nullable_int___ctor__, v12);
    sub_1BC3008(&Method_System_Nullable_int__get_HasValue__, v13);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    sub_1BC3008(&OptionManager_TypeInfo, v15);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1BC3008(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v17);
    byte_4AFCB63 = 1;
  }
  *(_QWORD *)fpUpDuplicateSum = 0LL;
  entity = 0LL;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_136;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  Instance = OptionManager__GetAutoSelectParty(0LL);
  if ( (Instance & 1) == 0 )
    goto LABEL_9;
  Instance = (__int64)this->fields.battleSetupInfo;
  if ( !Instance )
    goto LABEL_136;
  if ( *(_BYTE *)(Instance + 74) )
    goto LABEL_9;
  v79 = BattleSetupInfo__TargetQuestId((BattleSetupInfo_o *)Instance, 0LL);
  if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
  Instance = LastUsedDeckNumberManager__GetDeckNumber(v79, 0LL);
  if ( (int)Instance < 1 )
  {
LABEL_9:
    battleSetupInfo = this->fields.battleSetupInfo;
    if ( !battleSetupInfo || !MasterData_object )
      goto LABEL_136;
    Instance = DataMasterBase_object__object__long___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                 &entity,
                 battleSetupInfo->fields.deckId,
                 (const MethodInfo_32B1618 *)Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__TryGetEntity__);
  }
  else
  {
    v80 = Instance;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4AFC1F1 )
    {
      sub_1BC3008(&NetworkManager_TypeInfo, v19);
      byte_4AFC1F1 = 1;
    }
    Instance = (__int64)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = (__int64)NetworkManager_TypeInfo;
    }
    if ( !MasterData_object )
      goto LABEL_136;
    Instance = (__int64)UserDeckMaster__getDeck(
                          (UserDeckMaster_o *)MasterData_object,
                          *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
                          v80,
                          0LL);
    entity = (Il2CppObject *)Instance;
  }
  v22 = this->fields.battleSetupInfo;
  if ( !v22 )
    goto LABEL_136;
  questRestrictionInfo = v22->fields.questRestrictionInfo;
  if ( questRestrictionInfo )
    QuestRestrictionInfo__SetDeckInfo(questRestrictionInfo, (UserDeckEntity_o *)entity, 0LL);
  this->fields.friendPointCampaignEntityList = 0LL;
  *(_QWORD *)&this->fields.friendPointUpVal = 0LL;
  sub_1BC2FAC(&this->fields.friendPointCampaignEntityList);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_EventQuestMaster___);
  if ( !this->fields.battleSetupInfo )
    goto LABEL_136;
  v25 = (EventQuestMaster_o *)Instance;
  Instance = BattleSetupInfo__TargetQuestId(this->fields.battleSetupInfo, 0LL);
  v26 = this->fields.battleSetupInfo;
  if ( !v26 )
    goto LABEL_136;
  if ( !v25 )
    goto LABEL_136;
  Instance = (__int64)EventQuestMaster__GetEnabledEventCampaignForQuest(
                        v25,
                        Instance,
                        v26->fields.questPhase,
                        0LL,
                        7,
                        0LL);
  if ( !Master_object )
    goto LABEL_136;
  this->fields.friendPointCampaignEntityList = EventCampaignMaster__getData_40946260(
                                                 (EventCampaignMaster_o *)Master_object,
                                                 24,
                                                 (EventEntity_array *)Instance,
                                                 0LL);
  Instance = sub_1BC2FAC(&this->fields.friendPointCampaignEntityList);
  *(_QWORD *)fpUpDuplicateSum = 0LL;
  if ( this->fields.tutorialMode == 4 )
  {
    v27 = this->fields.battleSetupInfo;
    if ( !v27 )
      goto LABEL_136;
    if ( v27->fields.isChildFollower )
    {
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_136;
      if ( *(_QWORD *)(Instance + 80) )
      {
        for ( i = 0; ; ++i )
        {
          v29 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v29 = BalanceConfig_TypeInfo;
          }
          if ( i >= v29->static_fields->DeckMemberMax )
            break;
          Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( !Instance )
            goto LABEL_136;
          Instance = *(_QWORD *)(Instance + 80);
          if ( !Instance )
            goto LABEL_136;
          Member = PartyListViewItem__GetMember((PartyListViewItem_o *)Instance, i, 0LL);
          if ( Member )
          {
            v31 = Member;
            if ( Member->fields.userServantEntity )
            {
              Instance = (__int64)PartyOrganizationListViewItem__GetEquipList(Member, 0LL);
              if ( !v31->fields.userServantEntity )
                goto LABEL_136;
              FriendPointUpTypeVals = (FollowerRootComponent_o *)UserServantEntity__GetFriendPointUpTypeVals(
                                                                   v31->fields.userServantEntity,
                                                                   (System_Int64_array *)Instance,
                                                                   0LL);
              FollowerRootComponent__GetFriendPointUpValSummary(
                FriendPointUpTypeVals,
                &fpUpDuplicateSum[1],
                fpUpDuplicateSum,
                (System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int___o *)FriendPointUpTypeVals,
                v33);
            }
          }
        }
        goto LABEL_132;
      }
    }
  }
  v34 = this->fields.battleSetupInfo;
  if ( !v34 )
LABEL_136:
    sub_1BC3264(Instance, v19);
  v35 = v34->fields.questRestrictionInfo;
  if ( v35 )
  {
    Instance = QuestRestrictionInfo__IsServantNum(v35, 0LL);
    if ( (Instance & 1) != 0 )
      goto LABEL_46;
    v36 = this->fields.battleSetupInfo;
    if ( !v36 )
      goto LABEL_136;
    Instance = (__int64)v36->fields.questRestrictionInfo;
    if ( !Instance )
      goto LABEL_136;
    Instance = QuestRestrictionInfo__IsNpcMulitipleOrOnly((QuestRestrictionInfo_o *)Instance, 0LL);
    if ( (Instance & 1) != 0 )
      goto LABEL_46;
    v37 = this->fields.battleSetupInfo;
    if ( !v37 )
      goto LABEL_136;
    Instance = (__int64)v37->fields.questRestrictionInfo;
    if ( !Instance )
      goto LABEL_136;
    if ( *(int *)(Instance + 412) >= 1 )
    {
LABEL_46:
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_136;
      v38 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserEventDeckMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4AFC1F1 )
      {
        sub_1BC3008(&NetworkManager_TypeInfo, v19);
        byte_4AFC1F1 = 1;
      }
      Instance = (__int64)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (__int64)NetworkManager_TypeInfo;
      }
      v39 = this->fields.battleSetupInfo;
      if ( !v39 )
        goto LABEL_136;
      eventId = v39->fields.eventId;
      v41 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL);
      Instance = BattleSetupInfo__TargetQuestId(this->fields.battleSetupInfo, 0LL);
      v42 = this->fields.battleSetupInfo;
      if ( !v42 )
        goto LABEL_136;
      if ( !v38 )
        goto LABEL_136;
      Instance = (__int64)UserEventDeckMaster__getDeckList(
                            (UserEventDeckMaster_o *)v38,
                            v41,
                            eventId,
                            Instance,
                            v42->fields.questPhase,
                            0,
                            0LL);
      if ( !Instance )
        goto LABEL_136;
      if ( !*(_DWORD *)(Instance + 24) )
LABEL_137:
        sub_1BC326C(Instance, v19, v43);
      v44 = *(UserEventDeckEntity_o **)(Instance + 32);
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_136;
      if ( !*(_QWORD *)(Instance + 80) )
        goto LABEL_85;
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_136;
      v45 = *(_QWORD *)(Instance + 80);
      if ( !v45 )
        goto LABEL_136;
      currentCryptoKey = *(_QWORD *)(v45 + 168);
      if ( currentCryptoKey )
      {
        v47 = *(_DWORD *)(currentCryptoKey + 412);
        v89 = (System_Nullable_int__o)&v86;
        v86.fields.currentCryptoKey = 0LL;
        System_Nullable_int____ctor(v89, v47, (const MethodInfo_37C0098 *)Method_System_Nullable_int___ctor__);
        currentCryptoKey = v86.fields.currentCryptoKey;
      }
      v48 = this->fields.battleSetupInfo;
      if ( !v48 )
        goto LABEL_136;
      v49 = v48->fields.questRestrictionInfo;
      if ( !v49 )
        goto LABEL_136;
      if ( (_BYTE)currentCryptoKey && v49->fields.eventDeckNum == HIDWORD(currentCryptoKey) )
      {
        for ( j = 0; ; ++j )
        {
          Instance = (__int64)BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            Instance = (__int64)BalanceConfig_TypeInfo;
          }
          if ( j >= *(_DWORD *)(*(_QWORD *)(Instance + 184) + 172LL) )
            break;
          Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( !Instance )
            goto LABEL_136;
          Instance = *(_QWORD *)(Instance + 80);
          if ( !Instance )
            goto LABEL_136;
          v51 = PartyListViewItem__GetMember((PartyListViewItem_o *)Instance, j, 0LL);
          if ( v51 )
          {
            v52 = v51;
            if ( v51->fields.userServantEntity )
            {
              Instance = (__int64)PartyOrganizationListViewItem__GetEquipList(v51, 0LL);
              userServantEntity = v52->fields.userServantEntity;
              if ( !userServantEntity )
                goto LABEL_136;
              v54 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
              v55 = (System_Int64_array *)Instance;
              InitPos_k__BackingField = v52->fields._InitPos_k__BackingField;
              *(_OWORD *)&v86.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
              *(_OWORD *)&v86.fields.fakeValue = v54;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
              v85 = v86;
              v57 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v85, 0LL);
              Instance = (__int64)FollowerRootComponent__GetEquipIdsForGrandSvt(this, InitPos_k__BackingField, v57, v58);
              if ( !v52->fields.userServantEntity )
                goto LABEL_136;
              if ( Instance )
                v59 = (System_Int64_array *)Instance;
              else
                v59 = v55;
              v60 = (FollowerRootComponent_o *)UserServantEntity__GetFriendPointUpTypeVals(
                                                 v52->fields.userServantEntity,
                                                 v59,
                                                 0LL);
              FollowerRootComponent__GetFriendPointUpValSummary(
                v60,
                &fpUpDuplicateSum[1],
                fpUpDuplicateSum,
                (System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int___o *)v60,
                v61);
            }
          }
        }
        if ( v44 )
          goto LABEL_126;
      }
      else
      {
LABEL_85:
        if ( v44 )
        {
          UserServantList = UserEventDeckEntity__GetUserServantList(v44, 0, 0, 0LL);
          v63 = 0LL;
          m_Items = UserServantList->m_Items;
          while ( 1 )
          {
            Instance = (__int64)BalanceConfig_TypeInfo;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              Instance = (__int64)BalanceConfig_TypeInfo;
            }
            if ( (__int64)v63 >= *(int *)(*(_QWORD *)(Instance + 184) + 172LL) )
              break;
            deckInfo = v44->fields.deckInfo;
            if ( !deckInfo )
              goto LABEL_136;
            svts = deckInfo->fields.svts;
            if ( !svts )
              goto LABEL_136;
            if ( v63 >= svts->max_length )
              goto LABEL_137;
            if ( !UserServantList )
              goto LABEL_136;
            if ( v63 >= UserServantList->max_length )
              goto LABEL_137;
            if ( m_Items[v63] )
            {
              v67 = svts->m_Items[v63];
              Instance = (__int64)UserEventDeckEntity__GetEquipList(v44, v63, 0LL);
              if ( !v67 )
                goto LABEL_136;
              v69 = (System_Int64_array *)Instance;
              Instance = (__int64)FollowerRootComponent__GetEquipIdsForGrandSvt(
                                    this,
                                    v67->fields.initPos,
                                    v67->fields.userSvtId,
                                    v68);
              if ( Instance )
                v19 = (System_Int64_array *)Instance;
              else
                v19 = v69;
              if ( v63 >= UserServantList->max_length )
                goto LABEL_137;
              Instance = (__int64)m_Items[v63];
              if ( !Instance )
                goto LABEL_136;
              v70 = (FollowerRootComponent_o *)UserServantEntity__GetFriendPointUpTypeVals(
                                                 (UserServantEntity_o *)Instance,
                                                 v19,
                                                 0LL);
              FollowerRootComponent__GetFriendPointUpValSummary(
                v70,
                &fpUpDuplicateSum[1],
                fpUpDuplicateSum,
                (System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int___o *)v70,
                v71);
            }
            ++v63;
          }
LABEL_126:
          v81 = this->fields.battleSetupInfo;
          if ( v81 )
          {
            Instance = (__int64)v81->fields.questRestrictionInfo;
            if ( Instance )
            {
              QuestRestrictionInfo__SetDeckInfo_42385684((QuestRestrictionInfo_o *)Instance, v44, 0LL);
              goto LABEL_132;
            }
          }
          goto LABEL_136;
        }
      }
      v82 = this->fields.battleSetupInfo;
      if ( v82 )
      {
        Instance = (__int64)v82->fields.questRestrictionInfo;
        if ( Instance )
        {
          QuestRestrictionInfo__ResetDeckInfo((QuestRestrictionInfo_o *)Instance, 0LL);
          goto LABEL_132;
        }
      }
      goto LABEL_136;
    }
    if ( !entity || QuestRestrictionInfo__IsSupportOnly((QuestRestrictionInfo_o *)Instance, 0LL) )
      goto LABEL_132;
  }
  else if ( !entity )
  {
    goto LABEL_132;
  }
  for ( k = 0; ; ++k )
  {
    v73 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v73 = BalanceConfig_TypeInfo;
    }
    if ( k >= v73->static_fields->DeckMemberMax )
      break;
    Instance = (__int64)entity;
    if ( !entity )
      goto LABEL_136;
    UserServant = UserDeckEntity__GetUserServant((UserDeckEntity_o *)entity, k, 0LL);
    if ( UserServant )
    {
      v75 = UserServant;
      Instance = (__int64)entity;
      if ( !entity )
        goto LABEL_136;
      EquipList = UserDeckEntity__GetEquipList((UserDeckEntity_o *)entity, k, 0LL);
      v77 = (FollowerRootComponent_o *)UserServantEntity__GetFriendPointUpTypeVals(v75, EquipList, 0LL);
      FollowerRootComponent__GetFriendPointUpValSummary(
        v77,
        &fpUpDuplicateSum[1],
        fpUpDuplicateSum,
        (System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int___o *)v77,
        v78);
    }
  }
LABEL_132:
  v84 = fpUpDuplicateSum[0];
  v83 = fpUpDuplicateSum[1];
  this->fields.friendPointUpMaxVal = fpUpDuplicateSum[1];
  this->fields.friendPointUpVal = v84 + v83;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerRootComponent___OnClickBack_b__73_0(
        FollowerRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  CommonUI_o *Instance; // x0
  __int64 v8; // x1
  TerminalPramsManager_c *v9; // x0

  if ( (byte_4AFCB7C & 1) == 0 )
  {
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    sub_1BC3008(&TerminalPramsManager_TypeInfo, v5);
    sub_1BC3008(&StringLiteral_3402/*"CLICK_BACK"*/, v6);
    byte_4AFCB7C = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  CommonUI__CloseConfirmDialog(Instance, 0LL);
  if ( isDecide )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4AFC911 )
    {
      sub_1BC3008(&TerminalPramsManager_TypeInfo, v8);
      byte_4AFC911 = 1;
    }
    v9 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v9 = TerminalPramsManager_TypeInfo;
    }
    v9->static_fields->_IsAutoResume_k__BackingField = 1;
    Instance = (CommonUI_o *)this->fields.myFSM;
    if ( Instance )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3402/*"CLICK_BACK"*/, 0LL);
      return;
    }
LABEL_14:
    sub_1BC3264(Instance, v8);
  }
  this->fields.state = 3;
}


void __fastcall FollowerRootComponent__beginFinish(FollowerRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x0
  FollowerRootComponent_c *v7; // x0
  struct FollowerRootComponent_StaticFields *static_fields; // x0

  if ( (byte_4AFCB5D & 1) == 0 )
  {
    sub_1BC3008(&AtlasManager_TypeInfo, method);
    sub_1BC3008(&FollowerRootComponent_TypeInfo, v4);
    sub_1BC3008(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, v5);
    byte_4AFCB5D = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  this->fields.state = 0;
  if ( !operationItemListViewManager )
    goto LABEL_14;
  FollowerSelectItemListViewManager__DestroyList_31704696(operationItemListViewManager, 0LL, v2);
  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    goto LABEL_14;
  operationItemListViewManager = (FollowerSelectItemListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                          (UnityEngine_Component_o *)operationItemListViewManager,
                                                                          0LL);
  if ( !operationItemListViewManager )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)operationItemListViewManager, 0, 0LL);
  v7 = FollowerRootComponent_TypeInfo;
  if ( !FollowerRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerRootComponent_TypeInfo);
    v7 = FollowerRootComponent_TypeInfo;
  }
  static_fields = v7->static_fields;
  static_fields->partyOrganizationAtlasCache = 0LL;
  sub_1BC2FAC(&static_fields->partyOrganizationAtlasCache);
  operationItemListViewManager = (FollowerSelectItemListViewManager_o *)this->fields.backSkinSprite;
  if ( !operationItemListViewManager
    || (operationItemListViewManager = (FollowerSelectItemListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                                (UnityEngine_Component_o *)operationItemListViewManager,
                                                                                0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)operationItemListViewManager, 0, 0LL),
        (operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__)) == 0LL) )
  {
LABEL_14:
    sub_1BC3264(operationItemListViewManager, method);
  }
  AtlasManager__ReleaseUISkin((AtlasManager_o *)operationItemListViewManager, 2, 0, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleasePartyOrganizationAtlas(0LL);
}


void __fastcall FollowerRootComponent__beginInitialize(FollowerRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4AFCB52 & 1) == 0 )
  {
    sub_1BC3008(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_4AFCB52 = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BC3264(0LL, v4);
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, (SceneRootComponent_o *)this, 0LL);
}


void __fastcall FollowerRootComponent__beginPause(FollowerRootComponent_o *this, const MethodInfo *method)
{
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x0

  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    sub_1BC3264(0LL, method);
  FollowerSelectItemListViewManager__SaveSortFilter(operationItemListViewManager, method);
}


void __fastcall FollowerRootComponent__beginResume(
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
  FollowerRootComponent_c *v16; // x0
  struct UIAtlas_o *partyOrganizationAtlas; // x21
  struct FollowerRootComponent_StaticFields *static_fields; // x0
  TitleInfoControl_o *titleInfo; // x21
  __int64 Instance; // x0
  unsigned __int64 selectItemNum; // x1
  struct FollowerSelectItemListViewManager_o *operationItemListViewManager; // x8
  const MethodInfo *v23; // x2
  __int64 methodPtr_low; // x10
  const MethodInfo *v25; // x2
  __int64 v26; // x9
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  int64_t v28; // x10
  __int64 v29; // x9
  Il2CppObject *v30; // x10
  struct BattleSetupInfo_o **p_battleSetupInfo; // x21
  struct BattleSetupInfo_o *v32; // x8
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x20
  int32_t tutorialMode; // w8
  struct BattleSetupInfo_o *v35; // x8
  FollowerSelectItemListViewManager_o *v36; // x20
  const MethodInfo *v37; // x7
  struct BattleSetupInfo_o *v38; // x8
  const MethodInfo *v39; // x4
  struct BattleSetupInfo_o *v40; // x8
  const MethodInfo *v41; // x1
  CommonUI_o *v42; // x20
  struct BattleSetupInfo_o *v43; // x8
  PartyListViewItem_o *v44; // x20
  UnityEngine_Component_o *v45; // x8
  int32_t i; // w21
  FollowerSelectItemListViewManager_o *v47; // x22
  const MethodInfo *v48; // x7
  struct BattleSetupInfo_o *v49; // x8
  const MethodInfo *v50; // x4
  struct BattleSetupInfo_o *v51; // x8
  struct FollowerSelectItemListViewManager_o *v52; // x22
  FollowerSelectItemListViewManager_CallbackFunc_o *v53; // x23
  const MethodInfo *v54; // x2
  PartyOrganizationListViewItem_o *Member; // x0
  struct FollowerInfo_o *followerInfo; // x8
  FollowerSelectItemListViewManager_o *v57; // x20
  int64_t userId; // x21
  const MethodInfo *v59; // x3
  struct QuestRestrictionInfo_o *v60; // x8
  BalanceConfig_c *v61; // x0
  int32_t v62; // w22
  PartyOrganizationListViewItem_o *v63; // x0
  struct FollowerInfo_o *v64; // x8
  int klass_high; // w10
  int32_t v66; // w9
  struct BattleSetupInfo_o *v67; // x8
  Il2CppObject *v68; // x19

  if ( (byte_4AFCB5B & 1) == 0 )
  {
    sub_1BC3008(&AvalonSceneManager_TypeInfo, data);
    sub_1BC3008(&BalanceConfig_TypeInfo, v5);
    sub_1BC3008(&BattleSetupInfo_TypeInfo, v6);
    sub_1BC3008(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, v7);
    sub_1BC3008(&Method_FollowerRootComponent_OnSelectFollowerItem__, v8);
    sub_1BC3008(&FollowerRootComponent_TypeInfo, v9);
    sub_1BC3008(&RandomLimitCountManager_TypeInfo, v10);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    sub_1BC3008(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v12);
    sub_1BC3008(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v13);
    sub_1BC3008(&SupportInfoJump_TypeInfo, v14);
    sub_1BC3008(&TutorialFlag_TypeInfo, v15);
    byte_4AFCB5B = 1;
  }
  v16 = FollowerRootComponent_TypeInfo;
  partyOrganizationAtlas = this->fields.partyOrganizationAtlas;
  if ( !FollowerRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerRootComponent_TypeInfo);
    v16 = FollowerRootComponent_TypeInfo;
  }
  static_fields = v16->static_fields;
  static_fields->partyOrganizationAtlasCache = partyOrganizationAtlas;
  sub_1BC2FAC(&static_fields->partyOrganizationAtlasCache);
  titleInfo = this->fields.titleInfo;
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_119;
  if ( *(_BYTE *)(Instance + 88) )
  {
    selectItemNum = 0LL;
    if ( !titleInfo )
      goto LABEL_119;
  }
  else
  {
    selectItemNum = this->fields.tutorialMode != 2;
    if ( !titleInfo )
      goto LABEL_119;
  }
  TitleInfoControl__setBackBtnEnable(titleInfo, selectItemNum, 0LL);
  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    goto LABEL_119;
  Instance = (__int64)operationItemListViewManager->fields.classButtonControl;
  if ( !Instance )
    goto LABEL_119;
  ClassButtonControlComponent__PlayRecommendEffect((ClassButtonControlComponent_o *)Instance, 0LL);
  if ( this->fields.state == 6 )
  {
    if ( data )
    {
      methodPtr_low = LOBYTE(SupportInfoJump_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(data->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (SupportInfoJump_c *)data->klass->_2.typeHierarchy[methodPtr_low - 1] == SupportInfoJump_TypeInfo
        && ((__int64)data[3].klass & 0x80000000) == 0 )
      {
        selectItemNum = (unsigned int)this->fields.selectItemNum;
        if ( (selectItemNum & 0x80000000) == 0 )
        {
          Instance = (__int64)this->fields.operationItemListViewManager;
          if ( !Instance )
            goto LABEL_119;
          Instance = (__int64)FollowerSelectItemListViewManager__GetItem(
                                (FollowerSelectItemListViewManager_o *)Instance,
                                selectItemNum,
                                v23);
          if ( Instance )
          {
            this->fields.state = 5;
            v26 = *(_QWORD *)(Instance + 112);
            battleSetupInfo = this->fields.battleSetupInfo;
            if ( v26 )
              v28 = *(_QWORD *)(v26 + 16);
            else
              v28 = 0LL;
            if ( battleSetupInfo )
            {
              battleSetupInfo->fields.followerId = v28;
              battleSetupInfo->fields.followerClassId = (int32_t)data[3].klass;
              battleSetupInfo->fields.followerGrandGraphId = (int32_t)data[4].monitor;
              klass_high = HIDWORD(data[3].klass);
              if ( klass_high <= 0 )
                klass_high = *(_DWORD *)(Instance + 264);
              battleSetupInfo->fields.followerSupportDeckId = klass_high;
              if ( v26 )
              {
                v66 = *(_DWORD *)(v26 + 36);
                battleSetupInfo->fields.followerType = 0;
                if ( v66 == 5 || v66 == 1 )
                  battleSetupInfo->fields.followerType = v66;
              }
              else
              {
                battleSetupInfo->fields.followerType = 0;
              }
              if ( this->fields.operationItemListViewManager )
              {
                if ( !byte_4AFCBD7 )
                {
                  sub_1BC3008(&FollowerSelectItemListViewManager_TypeInfo, selectItemNum);
                  byte_4AFCBD7 = 1;
                }
                Instance = (__int64)FollowerSelectItemListViewManager_TypeInfo;
                if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
                  Instance = (__int64)FollowerSelectItemListViewManager_TypeInfo;
                }
                v67 = this->fields.battleSetupInfo;
                if ( v67 )
                {
                  selectItemNum = (unsigned int)v67->fields.followerClassId;
                  if ( *(_DWORD *)(*(_QWORD *)(Instance + 184) + 8LL) != (_DWORD)selectItemNum )
                  {
                    Instance = (__int64)this->fields.operationItemListViewManager;
                    if ( !Instance )
                      goto LABEL_119;
                    if ( FollowerSelectItemListViewManager__ChangeClass(
                           (FollowerSelectItemListViewManager_o *)Instance,
                           selectItemNum,
                           v25) )
                    {
                      Instance = (__int64)this->fields.operationItemListViewManager;
                      if ( !Instance )
                        goto LABEL_119;
                      ListViewManager__JumpItem((ListViewManager_o *)Instance, this->fields.selectItemNum, 0LL);
                    }
                  }
                  v68 = (Il2CppObject *)this->fields.battleSetupInfo;
                  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
                  if ( Instance )
                  {
                    AvalonSceneManager__pushScene((AvalonSceneManager_o *)Instance, 40, 1, v68, 0LL);
                    return;
                  }
                }
              }
            }
LABEL_119:
            sub_1BC3264(Instance, selectItemNum);
          }
        }
      }
    }
    goto LABEL_36;
  }
  if ( data )
  {
    v29 = LOBYTE(BattleSetupInfo_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(data->klass->vtable[0].methodPtr) >= (unsigned int)v29 )
    {
      if ( (BattleSetupInfo_c *)data->klass->_2.typeHierarchy[v29 - 1] == BattleSetupInfo_TypeInfo )
        v30 = data;
      else
        v30 = 0LL;
    }
    else
    {
      v30 = 0LL;
    }
    this->fields.battleSetupInfo = (struct BattleSetupInfo_o *)v30;
    p_battleSetupInfo = &this->fields.battleSetupInfo;
  }
  else
  {
    this->fields.battleSetupInfo = 0LL;
    p_battleSetupInfo = &this->fields.battleSetupInfo;
  }
  Instance = sub_1BC2FAC(p_battleSetupInfo);
  v32 = *p_battleSetupInfo;
  if ( *p_battleSetupInfo )
  {
    questRestrictionInfo = v32->fields.questRestrictionInfo;
    if ( !questRestrictionInfo )
      goto LABEL_119;
    if ( !QuestRestrictionInfo__IsMyServantOrNpcRestriction(v32->fields.questRestrictionInfo, 0LL)
      && (questRestrictionInfo->fields.isNoSupportBattle
       || questRestrictionInfo->fields.isFixedMyServantSingle
       || questRestrictionInfo->fields.isSupportOnlyForceBattle) )
    {
      goto LABEL_88;
    }
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    Instance = TutorialFlag__Get_39466584(102, 0LL);
    if ( (Instance & 1) == 0 )
    {
      v35 = *p_battleSetupInfo;
      if ( !*p_battleSetupInfo )
        goto LABEL_119;
LABEL_59:
      if ( v35->fields.isChildFollower )
      {
        FollowerRootComponent__ReturnBattleSetupMenu(this, (const MethodInfo *)selectItemNum);
        return;
      }
      goto LABEL_88;
    }
LABEL_36:
    FollowerRootComponent__UpdateDeckInfomation(this, (const MethodInfo *)selectItemNum);
    tutorialMode = this->fields.tutorialMode;
    if ( tutorialMode != 4 )
    {
      if ( tutorialMode != 3 )
      {
        if ( tutorialMode == 1 )
        {
          v35 = this->fields.battleSetupInfo;
          if ( !v35 )
            goto LABEL_119;
          goto LABEL_59;
        }
LABEL_47:
        FollowerRootComponent__ReturnSupportList(this, (const MethodInfo *)selectItemNum);
        return;
      }
      Instance = (__int64)this->fields.battleSetupInfo;
      this->fields.selectItemNum = -1;
      *(_QWORD *)&this->fields.tutorialMode = 0x100000003LL;
      if ( !Instance )
        goto LABEL_119;
      v36 = this->fields.operationItemListViewManager;
      Instance = BattleSetupInfo__TargetQuestId((BattleSetupInfo_o *)Instance, 0LL);
      v38 = this->fields.battleSetupInfo;
      if ( !v38 )
        goto LABEL_119;
      if ( !v36 )
        goto LABEL_119;
      FollowerSelectItemListViewManager__CreateList(
        v36,
        Instance,
        v38->fields.questPhase,
        this->fields.friendPointUpVal,
        this->fields.friendPointUpMaxVal,
        this->fields.friendPointCampaignEntityList,
        v38->fields.questRestrictionInfo,
        v37);
      v40 = this->fields.battleSetupInfo;
      if ( !v40 )
        goto LABEL_119;
      Instance = (__int64)this->fields.followerQuestInfomationDraw;
      if ( !Instance )
        goto LABEL_119;
      FollowerQuestInfomationDraw__SetInfomation(
        (FollowerQuestInfomationDraw_o *)Instance,
        v40->fields.questRestrictionInfo,
        0,
        0LL,
        v39);
      this->fields.state = 2;
      FollowerRootComponent__OnMoveEnd(this, v41);
LABEL_54:
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v42 = (CommonUI_o *)Instance;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      if ( v42 )
      {
        CommonUI__maskFadein(v42, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
        SceneRootComponent__sendMessageResume((SceneRootComponent_o *)this, 0LL);
        return;
      }
      goto LABEL_119;
    }
    if ( this->fields.state == 6 )
      goto LABEL_47;
    v43 = this->fields.battleSetupInfo;
    if ( !v43 )
      goto LABEL_119;
    if ( v43->fields.isChildFollower )
      goto LABEL_122;
    v60 = v43->fields.questRestrictionInfo;
    if ( !v60 )
      goto LABEL_119;
    if ( !v60->fields.isNotTransitionSupportList )
    {
LABEL_122:
      if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
      RandomLimitCountManager__set_EnableRandomLimitCount(0, 0LL);
      RandomLimitCountManager__set_EnableRandomLimitCount(1, 0LL);
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_119;
      v44 = *(PartyListViewItem_o **)(Instance + 80);
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_119;
      v45 = (UnityEngine_Component_o *)this->fields.operationItemListViewManager;
      i = *(_DWORD *)(Instance + 64);
      this->fields.tutorialState = 0;
      this->fields.selectItemNum = -1;
      if ( !v45 )
        goto LABEL_119;
      Instance = (__int64)UnityEngine_Component__get_gameObject(v45, 0LL);
      if ( !Instance )
        goto LABEL_119;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
      Instance = (__int64)this->fields.battleSetupInfo;
      if ( !Instance )
        goto LABEL_119;
      v47 = this->fields.operationItemListViewManager;
      Instance = BattleSetupInfo__TargetQuestId((BattleSetupInfo_o *)Instance, 0LL);
      v49 = this->fields.battleSetupInfo;
      if ( !v49 )
        goto LABEL_119;
      if ( !v47 )
        goto LABEL_119;
      FollowerSelectItemListViewManager__CreateList(
        v47,
        Instance,
        v49->fields.questPhase,
        this->fields.friendPointUpVal,
        this->fields.friendPointUpMaxVal,
        this->fields.friendPointCampaignEntityList,
        v49->fields.questRestrictionInfo,
        v48);
      v51 = this->fields.battleSetupInfo;
      if ( !v51 )
        goto LABEL_119;
      Instance = (__int64)this->fields.followerQuestInfomationDraw;
      if ( !Instance )
        goto LABEL_119;
      FollowerQuestInfomationDraw__SetInfomation(
        (FollowerQuestInfomationDraw_o *)Instance,
        v51->fields.questRestrictionInfo,
        i,
        0LL,
        v50);
      this->fields.state = 3;
      v52 = this->fields.operationItemListViewManager;
      v53 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1BC3254(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
      FollowerSelectItemListViewManager_CallbackFunc___ctor(
        v53,
        (Il2CppObject *)this,
        (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
        0LL);
      if ( !v52 )
        goto LABEL_119;
      v52->fields.callbackFunc = v53;
      sub_1BC2FAC(&v52->fields.callbackFunc);
      FollowerSelectItemListViewManager__SetMode_31775360(v52, 2, v54);
      if ( v44 )
      {
        Instance = (__int64)this->fields.operationItemListViewManager;
        if ( !Instance )
          goto LABEL_119;
        if ( ListViewManager__get_ItemSum((ListViewManager_o *)Instance, 0LL) >= 3 )
        {
          if ( i )
          {
LABEL_79:
            if ( i >= 1 )
            {
              Member = PartyListViewItem__GetMember(v44, i - 1, 0LL);
              if ( Member )
              {
                followerInfo = Member->fields.followerInfo;
                if ( followerInfo )
                {
                  v57 = this->fields.operationItemListViewManager;
                  userId = followerInfo->fields.userId;
                  Instance = (__int64)PartyOrganizationListViewItem__get_ServantLeader(Member, 0LL);
                  if ( !Instance )
                    goto LABEL_119;
                  if ( !v57 )
                    goto LABEL_119;
                  Instance = FollowerSelectItemListViewManager__GetItemIndex(
                               v57,
                               userId,
                               *(_QWORD *)(Instance + 40),
                               v59);
                  if ( !this->fields.operationItemListViewManager )
                    goto LABEL_119;
                  ListViewManager__JumpItem(
                    (ListViewManager_o *)this->fields.operationItemListViewManager,
                    Instance,
                    0LL);
                }
              }
            }
          }
          else
          {
            for ( i = 1; ; ++i )
            {
              v61 = BalanceConfig_TypeInfo;
              v62 = i - 1;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v61 = BalanceConfig_TypeInfo;
              }
              if ( v62 >= v61->static_fields->DeckMemberMax )
                break;
              v63 = PartyListViewItem__GetMember(v44, v62, 0LL);
              if ( v63 )
              {
                v64 = v63->fields.followerInfo;
                if ( v64 )
                {
                  if ( Follower__IsNotNpc(v64->fields.type, 0LL) )
                    goto LABEL_79;
                }
              }
            }
          }
        }
      }
      goto LABEL_54;
    }
LABEL_88:
    FollowerRootComponent__ReturnQuestMenu(this, (const MethodInfo *)selectItemNum);
  }
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
  MissionNotifyManager_o *Instance; // x0
  const MethodInfo *v25; // x1
  void *monitor; // x8
  const MethodInfo *v27; // x1
  __int64 methodPtr_low; // x9
  struct BattleSetupInfo_o *v29; // x10
  struct BattleSetupInfo_o **p_battleSetupInfo; // x0
  const MethodInfo *v31; // x1
  FollowerRootComponent_c *v32; // x0
  struct UIAtlas_o *partyOrganizationAtlas; // x20
  struct FollowerRootComponent_StaticFields *static_fields; // x0
  const MethodInfo *v35; // x2
  UILabel_o *infomationLabel; // x20
  UnityEngine_GameObject_o *refreshButtonBase; // x20
  bool v38; // w8
  struct System_Collections_Generic_List_MissionNotifyDispInfo__o *mDispInfos; // x8
  ConstantMaster_o *v40; // x20
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  System_Action_o *v42; // x20
  System_Action_o *v43; // x20
  QuestPhaseMaster_o *v44; // x20
  struct BattleSetupInfo_o *v45; // x8
  NpcFollowerMaster_o *v46; // x20
  struct BattleSetupInfo_o *v47; // x8
  struct BattleSetupInfo_o *v48; // x8
  const MethodInfo *v49; // x1
  const MethodInfo *v50; // x4
  struct BattleSetupInfo_o *v51; // x8

  if ( (byte_4AFCB53 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, data);
    sub_1BC3008(&AtlasManager_TypeInfo, v5);
    sub_1BC3008(&BalanceConfig_TypeInfo, v6);
    sub_1BC3008(&BattleSetupInfo_TypeInfo, v7);
    sub_1BC3008(&Method_DataManager_GetMasterData_ConstantMaster___, v8);
    sub_1BC3008(&Method_DataManager_GetMasterData_NpcFollowerMaster___, v9);
    sub_1BC3008(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v10);
    sub_1BC3008(&Method_FollowerRootComponent_EndLoadCommonBg__, v11);
    sub_1BC3008(&Method_FollowerRootComponent_EndLoadPartyOrganizationAtlasSimple__, v12);
    sub_1BC3008(&FollowerRootComponent_TypeInfo, v13);
    sub_1BC3008(&LocalizationManager_TypeInfo, v14);
    sub_1BC3008(&RandomLimitCountManager_TypeInfo, v15);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1BC3008(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v17);
    sub_1BC3008(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v18);
    sub_1BC3008(&TutorialFlag_TypeInfo, v19);
    sub_1BC3008(&StringLiteral_13485/*"TUTORIAL_SUPPORT_QUEST_ID"*/, v20);
    sub_1BC3008(&StringLiteral_13486/*"TUTORIAL_SUPPORT_QUEST_PHASE"*/, v21);
    sub_1BC3008(&StringLiteral_6387/*"FOLLOWER_SELECT_EXPLANATION2"*/, v22);
    sub_1BC3008(&StringLiteral_1/*""*/, v23);
    byte_4AFCB53 = 1;
  }
  Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_95;
  if ( PartyOrganizationUtility__ExistsTemporaryPartyInfo((PartyOrganizationUtility_o *)Instance, 0LL) )
  {
    Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_95;
    monitor = Instance[2].monitor;
    if ( !monitor )
      goto LABEL_95;
    this->fields.battleSetupInfo = (struct BattleSetupInfo_o *)*((_QWORD *)monitor + 6);
    sub_1BC2FAC(&this->fields.battleSetupInfo);
    Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !Instance )
      goto LABEL_95;
    if ( !MissionNotifyManager__IsPause(Instance, 0LL) )
    {
      Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
      if ( !Instance )
        goto LABEL_95;
      MissionNotifyManager__StartPause(Instance, 0LL);
    }
  }
  else
  {
    if ( data )
    {
      methodPtr_low = LOBYTE(BattleSetupInfo_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(data->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
        v29 = (BattleSetupInfo_c *)data->klass->_2.typeHierarchy[methodPtr_low - 1] == BattleSetupInfo_TypeInfo
            ? (struct BattleSetupInfo_o *)data
            : 0LL;
      else
        v29 = 0LL;
      this->fields.battleSetupInfo = v29;
      p_battleSetupInfo = &this->fields.battleSetupInfo;
    }
    else
    {
      this->fields.battleSetupInfo = 0LL;
      p_battleSetupInfo = &this->fields.battleSetupInfo;
    }
    sub_1BC2FAC(p_battleSetupInfo);
  }
  if ( !this->fields.battleSetupInfo )
  {
    FollowerRootComponent__ReturnQuestMenu(this, v27);
    return;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  RandomLimitCountManager__set_EnableRandomLimitCount(1, 0LL);
  FollowerRootComponent__PlayBGM(this, v31);
  v32 = FollowerRootComponent_TypeInfo;
  partyOrganizationAtlas = this->fields.partyOrganizationAtlas;
  if ( !FollowerRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerRootComponent_TypeInfo);
    v32 = FollowerRootComponent_TypeInfo;
  }
  static_fields = v32->static_fields;
  static_fields->partyOrganizationAtlasCache = partyOrganizationAtlas;
  sub_1BC2FAC(&static_fields->partyOrganizationAtlasCache);
  Instance = (MissionNotifyManager_o *)this->fields.titleInfo;
  if ( !Instance )
    goto LABEL_95;
  TitleInfoControl__setTitleInfo_38909944((TitleInfoControl_o *)Instance, this->fields.myFSM, 3, 66, 1, 0LL);
  Instance = (MissionNotifyManager_o *)this->fields.titleInfo;
  if ( !Instance )
    goto LABEL_95;
  TitleInfoControl__setBackBtnEnable((TitleInfoControl_o *)Instance, 1, 0LL);
  Instance = (MissionNotifyManager_o *)this->fields.operationItemListViewManager;
  if ( !Instance )
    goto LABEL_95;
  FollowerSelectItemListViewManager__DestroyList_31704696(
    (FollowerSelectItemListViewManager_o *)Instance,
    this->fields.battleSetupInfo,
    v35);
  infomationLabel = this->fields.infomationLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (MissionNotifyManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6387/*"FOLLOWER_SELECT_EXPLANATION2"*/, 0LL);
  if ( !infomationLabel )
    goto LABEL_95;
  UILabel__set_text(infomationLabel, (System_String_o *)Instance, 0LL);
  Instance = (MissionNotifyManager_o *)BalanceConfig_TypeInfo;
  refreshButtonBase = this->fields.refreshButtonBase;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  if ( !refreshButtonBase )
    goto LABEL_95;
  UnityEngine_GameObject__SetActive(
    refreshButtonBase,
    BalanceConfig_TypeInfo->static_fields->FollowerRefreshRestTime >= 0,
    0LL);
  Instance = (MissionNotifyManager_o *)this->fields.battleSetupInfo;
  *(_QWORD *)&this->fields.tutorialMode = 0LL;
  this->fields.selectItemNum = -1;
  this->fields.isForceFadeOut = 0;
  this->fields.isInitRecommendRequest = 0;
  if ( !Instance )
    goto LABEL_95;
  v38 = Instance[1].fields.mNoticeNumberComp || LODWORD(Instance[1].fields.assetLoadedEventIdList) != 0;
  if ( (v38 & BYTE1(Instance[1].klass)) != 0
    && (BattleSetupInfo__SetRestriction((BattleSetupInfo_o *)Instance, 1, 0LL),
        (Instance = (MissionNotifyManager_o *)this->fields.battleSetupInfo) == 0LL)
    || (mDispInfos = Instance[1].fields.mDispInfos) == 0LL )
  {
LABEL_95:
    sub_1BC3264(Instance, v25);
  }
  if ( BYTE2(mDispInfos[9].fields._syncRoot) )
  {
LABEL_43:
    FollowerRootComponent__StartBattleSetupMenu(this, v25);
    return;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_39466584(102, 0LL) )
  {
    Instance = (MissionNotifyManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_95;
    Instance = (MissionNotifyManager_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ConstantMaster___);
    if ( !Instance )
      goto LABEL_95;
    v40 = (ConstantMaster_o *)Instance;
    Instance = (MissionNotifyManager_o *)ConstantMaster__GetValue(
                                           (ConstantMaster_o *)Instance,
                                           (System_String_o *)StringLiteral_13485/*"TUTORIAL_SUPPORT_QUEST_ID"*/,
                                           0LL);
    battleSetupInfo = this->fields.battleSetupInfo;
    if ( !battleSetupInfo )
      goto LABEL_95;
    if ( battleSetupInfo->fields.questId == (_DWORD)Instance )
    {
      Instance = (MissionNotifyManager_o *)ConstantMaster__GetValue(v40, (System_String_o *)StringLiteral_13486/*"TUTORIAL_SUPPORT_QUEST_PHASE"*/, 0LL);
      battleSetupInfo = this->fields.battleSetupInfo;
      if ( !battleSetupInfo )
        goto LABEL_95;
      if ( battleSetupInfo->fields.questPhase == (_DWORD)Instance )
        *(_QWORD *)&this->fields.tutorialMode = 0x100000003LL;
    }
  }
  else
  {
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( !TutorialFlag__IsProgressDone(3, 0LL) )
      goto LABEL_43;
    Instance = (MissionNotifyManager_o *)this->fields.infomationLabel;
    *(_QWORD *)&this->fields.tutorialMode = 0x100000002LL;
    if ( !Instance )
      goto LABEL_95;
    UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    battleSetupInfo = this->fields.battleSetupInfo;
    if ( !battleSetupInfo )
      goto LABEL_95;
  }
  Instance = (MissionNotifyManager_o *)battleSetupInfo->fields.questRestrictionInfo;
  if ( !Instance )
    goto LABEL_95;
  if ( !HIBYTE(Instance[5].fields.mPauseCount)
    && !BYTE1(Instance[5].fields.mPauseCount)
    && !LOBYTE(Instance[5].fields.mDispInfos)
    && !BYTE3(Instance[5].fields.mMissionNotifyComps) )
  {
    Instance = (MissionNotifyManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (MissionNotifyManager_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)Instance,
                                             (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
      if ( this->fields.battleSetupInfo )
      {
        v44 = (QuestPhaseMaster_o *)Instance;
        Instance = (MissionNotifyManager_o *)BattleSetupInfo__TargetQuestId(this->fields.battleSetupInfo, 0LL);
        v45 = this->fields.battleSetupInfo;
        if ( v45 )
        {
          if ( v44 )
          {
            Instance = (MissionNotifyManager_o *)QuestPhaseMaster__GetEntity(
                                                   v44,
                                                   (int32_t)Instance,
                                                   v45->fields.questPhase,
                                                   0LL);
            if ( Instance && LOBYTE(Instance->fields.mNoDispInfos) )
            {
              Instance = (MissionNotifyManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                goto LABEL_95;
              Instance = (MissionNotifyManager_o *)DataManager__GetMasterData_object_(
                                                     (DataManager_o *)Instance,
                                                     (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
              if ( !this->fields.battleSetupInfo )
                goto LABEL_95;
              v46 = (NpcFollowerMaster_o *)Instance;
              Instance = (MissionNotifyManager_o *)BattleSetupInfo__TargetQuestId(this->fields.battleSetupInfo, 0LL);
              v47 = this->fields.battleSetupInfo;
              if ( !v47 )
                goto LABEL_95;
              if ( !v46 )
                goto LABEL_95;
              Instance = (MissionNotifyManager_o *)NpcFollowerMaster__GetQuestFollowerList(
                                                     v46,
                                                     (int32_t)Instance,
                                                     v47->fields.questPhase,
                                                     0LL);
              if ( !Instance )
                goto LABEL_95;
              if ( !Instance->fields.mNoDispInfos )
              {
                *(_QWORD *)&this->fields.tutorialMode = 0x100000001LL;
                goto LABEL_70;
              }
            }
            v48 = this->fields.battleSetupInfo;
            if ( v48 )
            {
              Instance = (MissionNotifyManager_o *)v48->fields.questRestrictionInfo;
              if ( Instance )
              {
                if ( QuestRestrictionInfo__IsMyServantOrNpcRestriction((QuestRestrictionInfo_o *)Instance, 0LL) )
                  this->fields.tutorialMode = 4;
                FollowerRootComponent__UpdateDeckInfomation(this, v49);
                v51 = this->fields.battleSetupInfo;
                if ( v51 )
                {
                  Instance = (MissionNotifyManager_o *)this->fields.followerQuestInfomationDraw;
                  if ( Instance )
                  {
                    FollowerQuestInfomationDraw__SetInfomation(
                      (FollowerQuestInfomationDraw_o *)Instance,
                      v51->fields.questRestrictionInfo,
                      0,
                      0LL,
                      v50);
                    Instance = (MissionNotifyManager_o *)this->fields.backSkinSprite;
                    if ( Instance )
                    {
                      Instance = (MissionNotifyManager_o *)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)Instance,
                                                             0LL);
                      if ( Instance )
                      {
                        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
                        goto LABEL_66;
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
    goto LABEL_95;
  }
  this->fields.tutorialState = 1;
  if ( QuestRestrictionInfo__IsMyServantOrNpcRestriction((QuestRestrictionInfo_o *)Instance, 0LL) )
  {
    this->fields.isForceFadeOut = 1;
    this->fields.tutorialMode = 4;
LABEL_66:
    v42 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
    System_Action___ctor(v42, (Il2CppObject *)this, Method_FollowerRootComponent_EndLoadCommonBg__, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__LoadUISkin(v42, 2, 1, 0LL);
    return;
  }
  this->fields.tutorialMode = 1;
LABEL_70:
  v43 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(
    v43,
    (Il2CppObject *)this,
    Method_FollowerRootComponent_EndLoadPartyOrganizationAtlasSimple__,
    0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadPartyOrganizationAtlas(v43, 1, 0LL);
}


void __fastcall FollowerRootComponent__setBattleSetupFollowType(
        FollowerRootComponent_o *this,
        int32_t type,
        const MethodInfo *method)
{
  struct BattleSetupInfo_o *battleSetupInfo; // x8

  battleSetupInfo = this->fields.battleSetupInfo;
  if ( !battleSetupInfo )
    sub_1BC3264(this, type);
  battleSetupInfo->fields.followerType = 0;
  if ( (type | 4) == 5 )
    battleSetupInfo->fields.followerType = type;
}


void __fastcall FollowerRootComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19

  if ( (byte_4AFCB7D & 1) == 0 )
  {
    sub_1BC3008(&FollowerRootComponent___c_TypeInfo, v1);
    byte_4AFCB7D = 1;
  }
  v2 = (Il2CppObject *)sub_1BC3254(FollowerRootComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  FollowerRootComponent___c_TypeInfo->static_fields->__9 = (struct FollowerRootComponent___c_o *)v2;
  sub_1BC2FAC(FollowerRootComponent___c_TypeInfo->static_fields);
}


void __fastcall FollowerRootComponent___c___ctor(FollowerRootComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall FollowerRootComponent___c___Init_b__50_0(FollowerRootComponent___c_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall FollowerRootComponent___c___OnSelectFollowerItem_b__67_0(
        FollowerRootComponent___c_o *this,
        const MethodInfo *method)
{
  ;
}