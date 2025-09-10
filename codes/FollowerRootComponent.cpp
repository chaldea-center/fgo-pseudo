void FollowerRootComponent___cctor(const MethodInfo *method)
{
  struct FollowerRootComponent_StaticFields *static_fields; // x8

  if ( (byte_4C21E02 & 1) == 0 )
  {
    sub_1C2D490(&FollowerRootComponent_TypeInfo);
    byte_4C21E02 = 1;
  }
  static_fields = FollowerRootComponent_TypeInfo->static_fields;
  static_fields->LIST_UPDATE_MESSAGE_FONT_SIZE = 26;
  *(_QWORD *)&static_fields->RETURN_TERMINAL_MESSAGE_FONT_SIZE = 0xA0000001BLL;
  static_fields->RETURN_TERMINAL_MESSAGE_SPACING_Y = 5;
}


void FollowerRootComponent___ctor(FollowerRootComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4C21E01 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C21E01 = 1;
  }
  this->fields.backupBgmName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C2D434(&this->fields.backupBgmName);
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0);
}


void FollowerRootComponent__CallbackFollowerList(
        FollowerRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_4C21DE6 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_11077/*"REQUEST_OK"*/);
    byte_4C21DE6 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1C2D6EC(0, result);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_11077/*"REQUEST_OK"*/, 0);
}


void FollowerRootComponent__CallbackInitRecommendFollowerRequest(
        FollowerRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  ListViewManager_o *operationItemListViewManager; // x0
  const MethodInfo *v5; // x1

  operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
  this->fields.isInitRecommendRequest = 1;
  if ( !operationItemListViewManager )
    sub_1C2D6EC(0, result);
  ListViewManager__SetEmptyMessageBase(operationItemListViewManager, 1, 0);
  FollowerRootComponent__Init(this, v5);
}


void FollowerRootComponent__CallbackRefresh(
        FollowerRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x1
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x0
  FollowerSelectItemListViewManager_o *v6; // x20
  const MethodInfo *v7; // x7
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  struct FollowerSelectItemListViewManager_o *v9; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v10; // x21
  const MethodInfo *v11; // x2

  if ( (byte_4C21DF9 & 1) == 0 )
  {
    sub_1C2D490(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_FollowerRootComponent_OnSelectFollowerItem__);
    sub_1C2D490(&RandomLimitCountManager_TypeInfo);
    byte_4C21DF9 = 1;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  RandomLimitCountManager__set_EnableRandomLimitCount(0, 0);
  RandomLimitCountManager__set_EnableRandomLimitCount(1, 0);
  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    goto LABEL_12;
  FollowerSelectItemListViewManager__SaveSortFilter(operationItemListViewManager, v4);
  operationItemListViewManager = (FollowerSelectItemListViewManager_o *)this->fields.battleSetupInfo;
  if ( !operationItemListViewManager )
    goto LABEL_12;
  v6 = this->fields.operationItemListViewManager;
  operationItemListViewManager = (FollowerSelectItemListViewManager_o *)BattleSetupInfo__TargetQuestId(
                                                                          (BattleSetupInfo_o *)operationItemListViewManager,
                                                                          0);
  battleSetupInfo = this->fields.battleSetupInfo;
  if ( !battleSetupInfo )
    goto LABEL_12;
  if ( !v6 )
    goto LABEL_12;
  FollowerSelectItemListViewManager__CreateList(
    v6,
    (int32_t)operationItemListViewManager,
    battleSetupInfo->fields.questPhase,
    this->fields.friendPointUpVal,
    this->fields.friendPointUpMaxVal,
    this->fields.friendPointCampaignEntityList,
    battleSetupInfo->fields.questRestrictionInfo,
    v7);
  v9 = this->fields.operationItemListViewManager;
  v10 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1C2D6DC(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v10,
    (Il2CppObject *)this,
    (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
    0);
  if ( !v9
    || (v9->fields.callbackFunc = v10,
        sub_1C2D434(&v9->fields.callbackFunc),
        FollowerSelectItemListViewManager__SetMode_32512280(v9, 2, v11),
        (operationItemListViewManager = (FollowerSelectItemListViewManager_o *)this->fields.commonConfirmDialog) == 0) )
  {
LABEL_12:
    sub_1C2D6EC(operationItemListViewManager, v4);
  }
  CommonConfirmDialog__Close((CommonConfirmDialog_o *)operationItemListViewManager, 0);
}


void FollowerRootComponent__EndCloseShowServant(FollowerRootComponent_o *this, const MethodInfo *method)
{
  struct FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4C21DED & 1) == 0 )
  {
    sub_1C2D490(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_FollowerRootComponent_OnSelectFollowerItem__);
    byte_4C21DED = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v4 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1C2D6DC(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
    0);
  if ( !operationItemListViewManager )
    sub_1C2D6EC(v5, v6);
  operationItemListViewManager->fields.callbackFunc = v4;
  sub_1C2D434(&operationItemListViewManager->fields.callbackFunc);
  FollowerSelectItemListViewManager__SetMode_32512280(operationItemListViewManager, 2, v7);
}


void FollowerRootComponent__EndCloseShowServantEquip(FollowerRootComponent_o *this, const MethodInfo *method)
{
  struct FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4C21DF0 & 1) == 0 )
  {
    sub_1C2D490(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_FollowerRootComponent_OnSelectFollowerItem__);
    byte_4C21DF0 = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v4 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1C2D6DC(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
    0);
  if ( !operationItemListViewManager )
    sub_1C2D6EC(v5, v6);
  operationItemListViewManager->fields.callbackFunc = v4;
  sub_1C2D434(&operationItemListViewManager->fields.callbackFunc);
  FollowerSelectItemListViewManager__SetMode_32512280(operationItemListViewManager, 2, v7);
}


void FollowerRootComponent__EndCloseTutorialArrow(FollowerRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *tutorialMaskBase2; // x0

  if ( (byte_4C21DFB & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_8648/*"MENU_SELECT_ITEM"*/);
    byte_4C21DFB = 1;
  }
  tutorialMaskBase2 = this->fields.tutorialMaskBase2;
  if ( !tutorialMaskBase2
    || (UnityEngine_GameObject__SetActive(tutorialMaskBase2, 0, 0),
        tutorialMaskBase2 = (UnityEngine_GameObject_o *)this->fields.myFSM,
        this->fields.state = 3,
        !tutorialMaskBase2) )
  {
    sub_1C2D6EC(tutorialMaskBase2, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)tutorialMaskBase2, (System_String_o *)StringLiteral_8648/*"MENU_SELECT_ITEM"*/, 0);
}


void FollowerRootComponent__EndLoadCommonBg(FollowerRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *backSkinSprite; // x0
  System_Action_o *v4; // x20

  if ( (byte_4C21DDE & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&Method_FollowerRootComponent_EndLoadOutGameAtlas__);
    byte_4C21DDE = 1;
  }
  backSkinSprite = (UnityEngine_Component_o *)this->fields.backSkinSprite;
  if ( !backSkinSprite
    || (backSkinSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(backSkinSprite, 0)) == 0 )
  {
    sub_1C2D6EC(backSkinSprite, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)backSkinSprite, 1, 0);
  v4 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_FollowerRootComponent_EndLoadOutGameAtlas__, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadOutGameAtlas(v4, 0);
}


void FollowerRootComponent__EndLoadEventAtlas(FollowerRootComponent_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4C21DE0 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&Method_FollowerRootComponent_EndLoadPartyOrganizationAtlas__);
    byte_4C21DE0 = 1;
  }
  v3 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_FollowerRootComponent_EndLoadPartyOrganizationAtlas__, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadPartyOrganizationAtlas(v3, 1, 0);
}


void FollowerRootComponent__EndLoadOutGameAtlas(FollowerRootComponent_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4C21DDF & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&Method_FollowerRootComponent_EndLoadEventAtlas__);
    byte_4C21DDF = 1;
  }
  v3 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_FollowerRootComponent_EndLoadEventAtlas__, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventAtlas(v3, 1, 0);
}


void FollowerRootComponent__EndLoadPartyOrganizationAtlas(FollowerRootComponent_o *this, const MethodInfo *method)
{
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x0
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1

  if ( (byte_4C21DE1 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4C21DE1 = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    goto LABEL_15;
  FollowerSelectItemListViewManager__AdjustButton(operationItemListViewManager, method);
  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    goto LABEL_15;
  FollowerSelectItemListViewManager__SetClassBoardInfo(operationItemListViewManager, method);
  SceneRootComponent__beginStartUp_41259456((SceneRootComponent_o *)this, 0);
  if ( this->fields.isForceFadeOut )
  {
    this->fields.isForceFadeOut = 0;
    operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !operationItemListViewManager )
      goto LABEL_15;
    CommonUI__maskFadeInit((CommonUI_o *)operationItemListViewManager, 0);
    operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !operationItemListViewManager )
      goto LABEL_15;
    CommonUI__maskFadeout((CommonUI_o *)operationItemListViewManager, 1, 0.0, 0, 0);
    FollowerRootComponent__StartBattleSetupMenu(this, v4);
  }
  operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !operationItemListViewManager )
    goto LABEL_15;
  if ( PartyOrganizationUtility__ExistsTemporaryPartyInfo((PartyOrganizationUtility_o *)operationItemListViewManager, 0) )
  {
    operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( operationItemListViewManager )
    {
      CommonUI__maskFadeInit((CommonUI_o *)operationItemListViewManager, 0);
      operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( operationItemListViewManager )
      {
        CommonUI__maskFadeout((CommonUI_o *)operationItemListViewManager, 1, 0.0, 0, 0);
        this->fields.state = 0;
        FollowerRootComponent__Init(this, v5);
        return;
      }
    }
LABEL_15:
    sub_1C2D6EC(operationItemListViewManager, method);
  }
}


void FollowerRootComponent__EndOpenTutorialArrow(FollowerRootComponent_o *this, const MethodInfo *method)
{
  struct FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4C21DFF & 1) == 0 )
  {
    sub_1C2D490(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_FollowerRootComponent_OnSelectFollowerItem__);
    byte_4C21DFF = 1;
  }
  this->fields.state = 3;
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v4 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1C2D6DC(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
    0);
  if ( !operationItemListViewManager )
    sub_1C2D6EC(v5, v6);
  operationItemListViewManager->fields.callbackFunc = v4;
  sub_1C2D434(&operationItemListViewManager->fields.callbackFunc);
  FollowerSelectItemListViewManager__SetMode_32512280(operationItemListViewManager, 4, v7);
}


// local variable allocation has failed, the output may be wrong!
void FollowerRootComponent__EndRecommendRefreshConfirm(
        FollowerRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  FollowerRootComponent_o *v4; // x19
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  NetworkManager_ResultCallbackFunc_o *v6; // x20
  FollowerRecommendSupportListRequest_o *v7; // x20
  struct BattleSetupInfo_o *v8; // x8
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v10; // x21
  const MethodInfo *v11; // x2

  v4 = this;
  if ( (byte_4C21DF8 & 1) == 0 )
  {
    sub_1C2D490(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_FollowerRootComponent_CallbackRefresh__);
    sub_1C2D490(&Method_FollowerRootComponent_OnSelectFollowerItem__);
    sub_1C2D490(&Method_NetworkManager_getRequest_FollowerRecommendSupportListRequest___);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&NetworkManager_ResultCallbackFunc_TypeInfo);
    this = (FollowerRootComponent_o *)sub_1C2D490(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4C21DF8 = 1;
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
      TitleInfoControl__setBackBtnEnable((TitleInfoControl_o *)this, 0, 0);
      this = (FollowerRootComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !this )
        goto LABEL_18;
      LOBYTE(this->fields.operationItemListViewManager) = 1;
    }
    v6 = (NetworkManager_ResultCallbackFunc_o *)sub_1C2D6DC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(v6, (Il2CppObject *)v4, Method_FollowerRootComponent_CallbackRefresh__, 0);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    this = (FollowerRootComponent_o *)NetworkManager__getRequest_object_(
                                        v6,
                                        (const MethodInfo_31599E8 *)Method_NetworkManager_getRequest_FollowerRecommendSupportListRequest___);
    if ( v4->fields.battleSetupInfo )
    {
      v7 = (FollowerRecommendSupportListRequest_o *)this;
      this = (FollowerRootComponent_o *)BattleSetupInfo__TargetQuestId(v4->fields.battleSetupInfo, 0);
      v8 = v4->fields.battleSetupInfo;
      if ( v8 )
      {
        if ( v7 )
        {
          FollowerRecommendSupportListRequest__beginRequest(v7, 1, (int32_t)this, v8->fields.questPhase, 0);
          return;
        }
      }
    }
LABEL_18:
    sub_1C2D6EC(this, isDecide);
  }
  operationItemListViewManager = v4->fields.operationItemListViewManager;
  v10 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1C2D6DC(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v10,
    (Il2CppObject *)v4,
    (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
    0);
  if ( !operationItemListViewManager )
    goto LABEL_18;
  operationItemListViewManager->fields.callbackFunc = v10;
  sub_1C2D434(&operationItemListViewManager->fields.callbackFunc);
  FollowerSelectItemListViewManager__SetMode_32512280(operationItemListViewManager, 2, v11);
  this = (FollowerRootComponent_o *)v4->fields.commonConfirmDialog;
  if ( !this )
    goto LABEL_18;
  CommonConfirmDialog__Close((CommonConfirmDialog_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void FollowerRootComponent__EndRefreshConfirm(FollowerRootComponent_o *this, bool isDecide, const MethodInfo *method)
{
  FollowerRootComponent_o *v4; // x19
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  NetworkManager_ResultCallbackFunc_o *v6; // x20
  FollowerListRequest_o *v7; // x20
  struct BattleSetupInfo_o *v8; // x8
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v10; // x21
  const MethodInfo *v11; // x2

  v4 = this;
  if ( (byte_4C21DF7 & 1) == 0 )
  {
    sub_1C2D490(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_FollowerRootComponent_CallbackRefresh__);
    sub_1C2D490(&Method_FollowerRootComponent_OnSelectFollowerItem__);
    sub_1C2D490(&Method_NetworkManager_getRequest_FollowerListRequest___);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&NetworkManager_ResultCallbackFunc_TypeInfo);
    this = (FollowerRootComponent_o *)sub_1C2D490(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4C21DF7 = 1;
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
      TitleInfoControl__setBackBtnEnable((TitleInfoControl_o *)this, 0, 0);
      this = (FollowerRootComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !this )
        goto LABEL_18;
      LOBYTE(this->fields.operationItemListViewManager) = 1;
    }
    v6 = (NetworkManager_ResultCallbackFunc_o *)sub_1C2D6DC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(v6, (Il2CppObject *)v4, Method_FollowerRootComponent_CallbackRefresh__, 0);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    this = (FollowerRootComponent_o *)NetworkManager__getRequest_object_(
                                        v6,
                                        (const MethodInfo_31599E8 *)Method_NetworkManager_getRequest_FollowerListRequest___);
    if ( v4->fields.battleSetupInfo )
    {
      v7 = (FollowerListRequest_o *)this;
      this = (FollowerRootComponent_o *)BattleSetupInfo__TargetQuestId(v4->fields.battleSetupInfo, 0);
      v8 = v4->fields.battleSetupInfo;
      if ( v8 )
      {
        if ( v7 )
        {
          FollowerListRequest__beginRequest(v7, 1, (int32_t)this, v8->fields.questPhase, 0);
          return;
        }
      }
    }
LABEL_18:
    sub_1C2D6EC(this, isDecide);
  }
  operationItemListViewManager = v4->fields.operationItemListViewManager;
  v10 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1C2D6DC(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v10,
    (Il2CppObject *)v4,
    (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
    0);
  if ( !operationItemListViewManager )
    goto LABEL_18;
  operationItemListViewManager->fields.callbackFunc = v10;
  sub_1C2D434(&operationItemListViewManager->fields.callbackFunc);
  FollowerSelectItemListViewManager__SetMode_32512280(operationItemListViewManager, 2, v11);
  this = (FollowerRootComponent_o *)v4->fields.commonConfirmDialog;
  if ( !this )
    goto LABEL_18;
  CommonConfirmDialog__Close((CommonConfirmDialog_o *)this, 0);
}


void FollowerRootComponent__EndRefreshRest(FollowerRootComponent_o *this, const MethodInfo *method)
{
  struct FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4C21DFA & 1) == 0 )
  {
    sub_1C2D490(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_FollowerRootComponent_OnSelectFollowerItem__);
    byte_4C21DFA = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v4 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1C2D6DC(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
    0);
  if ( !operationItemListViewManager )
    sub_1C2D6EC(v5, v6);
  operationItemListViewManager->fields.callbackFunc = v4;
  sub_1C2D434(&operationItemListViewManager->fields.callbackFunc);
  FollowerSelectItemListViewManager__SetMode_32512280(operationItemListViewManager, 2, v7);
}


// local variable allocation has failed, the output may be wrong!
void FollowerRootComponent__EndShowServant(FollowerRootComponent_o *this, bool isDecide, const MethodInfo *method)
{
  ListViewManager_o *operationItemListViewManager; // x0
  Il2CppObject *Instance; // x20
  System_Action_o *v6; // x21

  if ( (byte_4C21DEC & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_FollowerRootComponent_EndCloseShowServant__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C21DEC = 1;
  }
  operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager
    || (ListViewManager__SetScrollView(
          operationItemListViewManager,
          this->fields.openScroll,
          this->fields.openOffset,
          0),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v6 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo),
        System_Action___ctor(v6, (Il2CppObject *)this, Method_FollowerRootComponent_EndCloseShowServant__, 0),
        !Instance) )
  {
    sub_1C2D6EC(operationItemListViewManager, isDecide);
  }
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v6, 0);
}


// local variable allocation has failed, the output may be wrong!
void FollowerRootComponent__EndShowServantEquip(FollowerRootComponent_o *this, bool isDecide, const MethodInfo *method)
{
  ListViewManager_o *operationItemListViewManager; // x0
  Il2CppObject *Instance; // x20
  System_Action_o *v6; // x21

  if ( (byte_4C21DEF & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_FollowerRootComponent_EndCloseShowServantEquip__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C21DEF = 1;
  }
  operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager
    || (ListViewManager__SetScrollView(
          operationItemListViewManager,
          this->fields.openScroll,
          this->fields.openOffset,
          0),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v6 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo),
        System_Action___ctor(v6, (Il2CppObject *)this, Method_FollowerRootComponent_EndCloseShowServantEquip__, 0),
        !Instance) )
  {
    sub_1C2D6EC(operationItemListViewManager, isDecide);
  }
  CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)Instance, v6, 0);
}


void FollowerRootComponent__EndTutorialFollowerCommonGuide(FollowerRootComponent_o *this, const MethodInfo *method)
{
  struct FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4C21E00 & 1) == 0 )
  {
    sub_1C2D490(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_FollowerRootComponent_OnSelectFollowerItem__);
    byte_4C21E00 = 1;
  }
  this->fields.state = 3;
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v4 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1C2D6DC(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
    0);
  if ( !operationItemListViewManager )
    sub_1C2D6EC(v5, v6);
  operationItemListViewManager->fields.callbackFunc = v4;
  sub_1C2D434(&operationItemListViewManager->fields.callbackFunc);
  FollowerSelectItemListViewManager__SetMode_32512280(operationItemListViewManager, 2, v7);
}


void FollowerRootComponent__EndTutorialFollowerGuideNotification1(
        FollowerRootComponent_o *this,
        const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0
  struct FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v5; // x21
  const MethodInfo *v6; // x2

  if ( (byte_4C21DFD & 1) == 0 )
  {
    sub_1C2D490(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_FollowerRootComponent_OnSelectFollowerItem__);
    byte_4C21DFD = 1;
  }
  titleInfo = this->fields.titleInfo;
  this->fields.state = 3;
  if ( !titleInfo
    || (TitleInfoControl__setBackBtnEnable(titleInfo, 0, 0),
        operationItemListViewManager = this->fields.operationItemListViewManager,
        v5 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1C2D6DC(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo),
        FollowerSelectItemListViewManager_CallbackFunc___ctor(
          v5,
          (Il2CppObject *)this,
          (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
          0),
        !operationItemListViewManager) )
  {
    sub_1C2D6EC(titleInfo, method);
  }
  operationItemListViewManager->fields.callbackFunc = v5;
  sub_1C2D434(&operationItemListViewManager->fields.callbackFunc);
  FollowerSelectItemListViewManager__SetMode_32512280(operationItemListViewManager, 2, v6);
}


// local variable allocation has failed, the output may be wrong!
void FollowerRootComponent__EndTutorialFollowerGuideNotification2(
        FollowerRootComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *tutorialMaskBase2; // x0
  bool IsUnderVista; // w22
  Il2CppObject *Instance; // x20
  System_Action_o *v6; // x21
  float v7; // s0 OVERLAPPED
  float v8; // s3 OVERLAPPED
  float v9; // s4
  int v10; // s1
  int v11; // s5
  int v12; // s6

  if ( (byte_4C21DFE & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&FSUtility_TypeInfo);
    sub_1C2D490(&Method_FollowerRootComponent_EndOpenTutorialArrow__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C21DFE = 1;
  }
  tutorialMaskBase2 = this->fields.tutorialMaskBase2;
  if ( !tutorialMaskBase2 )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(tutorialMaskBase2, 1, 0);
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  IsUnderVista = FSUtility__IsUnderVista(0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_FollowerRootComponent_EndOpenTutorialArrow__, 0);
  if ( !Instance )
LABEL_10:
    sub_1C2D6EC(tutorialMaskBase2, method);
  v7 = -12.0;
  v8 = -492.0;
  if ( IsUnderVista )
  {
    v8 = -500.0;
    v7 = -20.0;
  }
  v9 = -14.0;
  v10 = 1120403456;
  v11 = 1148846080;
  v12 = 1125515264;
  CommonUI__OpenTutorialArrowMark(
    (CommonUI_o *)Instance,
    *(UnityEngine_Vector2_o *)&v7,
    0.0,
    *(UnityEngine_Rect_o *)&v8,
    v6,
    0);
}


BattleSetupInfo_o *FollowerRootComponent__GetBattleSetupInfo(FollowerRootComponent_o *this, const MethodInfo *method)
{
  return this->fields.battleSetupInfo;
}


// local variable allocation has failed, the output may be wrong!
System_Int64_array *FollowerRootComponent__GetEquipIdsForGrandSvt(
        FollowerRootComponent_o *this,
        int32_t initPos,
        int64_t userSvtId,
        const MethodInfo *method)
{
  FollowerRootComponent_o *v6; // x21
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  System_Int64_array *result; // x0
  UserServantGrandEntity_o *FirstByUserSvtId; // x0
  BalanceConfig_c *v10; // x0

  v6 = this;
  if ( (byte_4C21DE9 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_UserServantGrandMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    this = (FollowerRootComponent_o *)sub_1C2D490(&long___TypeInfo);
    byte_4C21DE9 = 1;
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
                                   0);
  if ( !result )
    return result;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (FollowerRootComponent_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserServantGrandMaster___);
  if ( !this )
LABEL_15:
    sub_1C2D6EC(this, *(_QWORD *)&initPos);
  FirstByUserSvtId = UserServantGrandMaster__GetFirstByUserSvtId((UserServantGrandMaster_o *)this, userSvtId, 0);
  if ( FirstByUserSvtId )
    return UserServantGrandEntity__GetEquipUserServantIdList(FirstByUserSvtId, 0);
  v10 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v10 = BalanceConfig_TypeInfo;
  }
  return (System_Int64_array *)sub_1C2D538(long___TypeInfo, (unsigned int)v10->static_fields->GrandSvtEquipMax);
}


void FollowerRootComponent__GetFriendPointUpValSummary(
        FollowerRootComponent_o *this,
        int32_t *fpUpMax,
        int32_t *fpUpDuplicateSum,
        System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int___o *upTypeVals,
        const MethodInfo *method)
{
  System_Collections_Generic_List_Enumerator_T__o v8; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C21DE8 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_FuncList_TYPE__int___Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_FuncList_TYPE__int___MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_FuncList_TYPE__int___get_Current__);
    this = (FollowerRootComponent_o *)sub_1C2D490(&Method_System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int___GetEnumerator__);
    byte_4C21DE8 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  if ( !upTypeVals )
    sub_1C2D6EC(this, fpUpMax);
  System_Collections_Generic_List_ValueTuple_Int32Enum__int____GetEnumerator(
    &v8,
    (System_Collections_Generic_List_T__o *)upTypeVals,
    (const MethodInfo_37347F4 *)Method_System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int___GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_ValueTuple_Int32Enum__int____MoveNext(
            &v8,
            (const MethodInfo_350B1C4 *)Method_System_Collections_Generic_List_Enumerator_ValueTuple_FuncList_TYPE__int___MoveNext__) )
  {
    if ( LODWORD(v8.fields._current) == 123 )
    {
      *fpUpDuplicateSum += HIDWORD(v8.fields._current);
    }
    else if ( LODWORD(v8.fields._current) == 104 && *fpUpMax < SHIDWORD(v8.fields._current) )
    {
      *fpUpMax = HIDWORD(v8.fields._current);
    }
  }
  System_Collections_Generic_List_Enumerator_ValueTuple_Int32Enum__int____Dispose(
    &v8,
    (const MethodInfo_350B1C0 *)Method_System_Collections_Generic_List_Enumerator_ValueTuple_FuncList_TYPE__int___Dispose__);
}


void FollowerRootComponent__Init(FollowerRootComponent_o *this, const MethodInfo *method)
{
  __int64 battleSetupInfo; // x0
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  const MethodInfo *v5; // x4
  struct BattleSetupInfo_o *v6; // x8
  int32_t InitialDisplayClass; // w20
  Il2CppObject *v8; // x20
  struct BattleSetupInfo_o *v9; // x8
  FollowerSelectItemListViewManager_o *v10; // x20
  const MethodInfo *v11; // x7
  struct BattleSetupInfo_o *v12; // x8
  PartyOrganizationUtility_o *v13; // x20
  FollowerRootComponent___c_c *v14; // x8
  System_Action_o *_9__50_0; // x21
  Il2CppObject *v16; // x22
  struct FollowerRootComponent___c_StaticFields *static_fields; // x0
  struct FollowerSelectItemListViewManager_o *v18; // x20
  System_Action_o *v19; // x21
  const MethodInfo *v20; // x2
  struct FollowerSelectItemListViewManager_o *v21; // x20
  struct System_Collections_Generic_List_ListViewItem__o *mixItemList; // x8
  NetworkManager_ResultCallbackFunc_o *v23; // x20
  FollowerRecommendSupportListRequest_o *v24; // x20
  struct BattleSetupInfo_o *v25; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C21DE7 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&ClassButtonControlComponent_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_UserRecommendFollowerMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_UserRecommendFollowerMaster__UserRecommendFollowerEntity__long__TryGetSingleEntity__);
    sub_1C2D490(&Method_FollowerRootComponent_CallbackInitRecommendFollowerRequest__);
    sub_1C2D490(&Method_FollowerRootComponent_OnMoveEnd__);
    sub_1C2D490(&Method_NetworkManager_getRequest_FollowerRecommendSupportListRequest___);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1C2D490(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C2D490(&Method_FollowerRootComponent___c__Init_b__50_0__);
    sub_1C2D490(&FollowerRootComponent___c_TypeInfo);
    sub_1C2D490(&StringLiteral_8648/*"MENU_SELECT_ITEM"*/);
    byte_4C21DE7 = 1;
  }
  entity = 0;
  if ( !this->fields.state )
  {
    if ( this->fields.isInitRecommendRequest )
      goto LABEL_19;
    battleSetupInfo = (__int64)this->fields.battleSetupInfo;
    if ( !battleSetupInfo )
      goto LABEL_53;
    operationItemListViewManager = this->fields.operationItemListViewManager;
    battleSetupInfo = BattleSetupInfo__TargetQuestId((BattleSetupInfo_o *)battleSetupInfo, 0);
    v6 = this->fields.battleSetupInfo;
    if ( !v6 || !operationItemListViewManager )
      goto LABEL_53;
    InitialDisplayClass = FollowerSelectItemListViewManager__GetInitialDisplayClass(
                            operationItemListViewManager,
                            battleSetupInfo,
                            v6->fields.questPhase,
                            1,
                            v5);
    if ( !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
    if ( !ClassButtonControlComponent__IsRecommendSupportGroupType(InitialDisplayClass, 0) )
      goto LABEL_19;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    battleSetupInfo = (__int64)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserRecommendFollowerMaster___);
    if ( !battleSetupInfo )
      goto LABEL_53;
    if ( DataMasterBase_object__object__long___TryGetSingleEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)battleSetupInfo,
           &entity,
           (const MethodInfo_338A420 *)Method_DataMasterBase_UserRecommendFollowerMaster__UserRecommendFollowerEntity__long__TryGetSingleEntity__) )
    {
      battleSetupInfo = (__int64)this->fields.battleSetupInfo;
      if ( !battleSetupInfo )
        goto LABEL_53;
      v8 = entity;
      battleSetupInfo = BattleSetupInfo__TargetQuestId((BattleSetupInfo_o *)battleSetupInfo, 0);
      v9 = this->fields.battleSetupInfo;
      if ( !v9 || !v8 )
        goto LABEL_53;
      if ( UserRecommendFollowerEntity__IsEnableSupport(
             (UserRecommendFollowerEntity_o *)v8,
             battleSetupInfo,
             v9->fields.questPhase,
             0) )
      {
LABEL_19:
        battleSetupInfo = (__int64)this->fields.operationItemListViewManager;
        if ( !battleSetupInfo )
          goto LABEL_53;
        battleSetupInfo = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)battleSetupInfo, 0);
        if ( !battleSetupInfo )
          goto LABEL_53;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)battleSetupInfo, 1, 0);
        battleSetupInfo = (__int64)this->fields.battleSetupInfo;
        if ( !battleSetupInfo )
          goto LABEL_53;
        v10 = this->fields.operationItemListViewManager;
        battleSetupInfo = BattleSetupInfo__TargetQuestId((BattleSetupInfo_o *)battleSetupInfo, 0);
        v12 = this->fields.battleSetupInfo;
        if ( !v12 )
          goto LABEL_53;
        if ( !v10 )
          goto LABEL_53;
        FollowerSelectItemListViewManager__CreateList(
          v10,
          battleSetupInfo,
          v12->fields.questPhase,
          this->fields.friendPointUpVal,
          this->fields.friendPointUpMaxVal,
          this->fields.friendPointCampaignEntityList,
          v12->fields.questRestrictionInfo,
          v11);
        battleSetupInfo = (__int64)this->fields.operationItemListViewManager;
        if ( !battleSetupInfo )
          goto LABEL_53;
        battleSetupInfo = ListViewManager__get_ItemSum((ListViewManager_o *)battleSetupInfo, 0);
        if ( (int)battleSetupInfo > 0 )
          goto LABEL_26;
        v21 = this->fields.operationItemListViewManager;
        if ( !v21 )
          goto LABEL_53;
        if ( (byte_4C21E57 & 1) == 0 )
        {
          sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
          byte_4C21E57 = 1;
        }
        mixItemList = v21->fields.mixItemList;
        if ( mixItemList && mixItemList->fields._size >= 1 )
        {
LABEL_26:
          battleSetupInfo = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
          if ( !battleSetupInfo )
            goto LABEL_53;
          if ( *(_BYTE *)(battleSetupInfo + 148) )
          {
            battleSetupInfo = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
            v13 = (PartyOrganizationUtility_o *)battleSetupInfo;
            v14 = FollowerRootComponent___c_TypeInfo;
            if ( !FollowerRootComponent___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(FollowerRootComponent___c_TypeInfo);
              v14 = FollowerRootComponent___c_TypeInfo;
            }
            _9__50_0 = v14->static_fields->__9__50_0;
            if ( !_9__50_0 )
            {
              if ( !v14->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v14);
                v14 = FollowerRootComponent___c_TypeInfo;
              }
              v16 = (Il2CppObject *)v14->static_fields->__9;
              _9__50_0 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
              System_Action___ctor(_9__50_0, v16, Method_FollowerRootComponent___c__Init_b__50_0__, 0);
              static_fields = FollowerRootComponent___c_TypeInfo->static_fields;
              static_fields->__9__50_0 = _9__50_0;
              battleSetupInfo = sub_1C2D434(&static_fields->__9__50_0);
            }
            if ( !v13 )
              goto LABEL_53;
            PartyOrganizationUtility__OpenQuestUseItemExpiredDialog(v13, _9__50_0, 0);
          }
          this->fields.state = 2;
          v18 = this->fields.operationItemListViewManager;
          v19 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
          System_Action___ctor(v19, (Il2CppObject *)this, Method_FollowerRootComponent_OnMoveEnd__, 0);
          if ( v18 )
          {
            v18->fields.callbackFunc2 = v19;
            sub_1C2D434(&v18->fields.callbackFunc2);
            FollowerSelectItemListViewManager__SetMode_32512280(v18, 1, v20);
            return;
          }
        }
        else
        {
          battleSetupInfo = (__int64)this->fields.myFSM;
          this->fields.selectItemNum = -1;
          if ( battleSetupInfo )
          {
            PlayMakerFSM__SendEvent((PlayMakerFSM_o *)battleSetupInfo, (System_String_o *)StringLiteral_8648/*"MENU_SELECT_ITEM"*/, 0);
            return;
          }
        }
LABEL_53:
        sub_1C2D6EC(battleSetupInfo, method);
      }
    }
    v23 = (NetworkManager_ResultCallbackFunc_o *)sub_1C2D6DC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v23,
      (Il2CppObject *)this,
      Method_FollowerRootComponent_CallbackInitRecommendFollowerRequest__,
      0);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    battleSetupInfo = (__int64)NetworkManager__getRequest_object_(
                                 v23,
                                 (const MethodInfo_31599E8 *)Method_NetworkManager_getRequest_FollowerRecommendSupportListRequest___);
    if ( !this->fields.battleSetupInfo )
      goto LABEL_53;
    v24 = (FollowerRecommendSupportListRequest_o *)battleSetupInfo;
    battleSetupInfo = BattleSetupInfo__TargetQuestId(this->fields.battleSetupInfo, 0);
    v25 = this->fields.battleSetupInfo;
    if ( !v25 )
      goto LABEL_53;
    if ( !v24 )
      goto LABEL_53;
    FollowerRecommendSupportListRequest__beginRequest(v24, 0, battleSetupInfo, v25->fields.questPhase, 0);
    battleSetupInfo = (__int64)this->fields.operationItemListViewManager;
    if ( !battleSetupInfo )
      goto LABEL_53;
    ListViewManager__SetEmptyMessageBase((ListViewManager_o *)battleSetupInfo, 0, 0);
  }
}


void FollowerRootComponent__OnClickBack(FollowerRootComponent_o *this, const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v4; // x1
  SceneRootComponent_o *StackedRootComponent; // x0
  __int64 naturalAligment; // x10
  UnityEngine_Component_o *v7; // x20
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  _QWORD *monitor; // x8
  __int64 v11; // x2
  int v12; // w8
  void *v13; // x19
  unsigned int v14; // w20
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  __int64 *v18; // x8
  _QWORD *v19; // x0
  System_Reflection_MethodBase_o *v20; // x0
  TerminalPramsManager_c *v21; // x0
  int lastPlayQuestConsumeAp; // w21
  System_String_o **v23; // x8
  System_String_o *v24; // x20
  System_String_o *v25; // x21
  Il2CppObject *v26; // x22
  System_String_o *v27; // x23
  System_String_o *v28; // x24
  CommonConfirmDialog_ClickDelegate_o *v29; // x25

  if ( (byte_4C21DFC & 1) == 0 )
  {
    sub_1C2D490(&BattleRootComponent_TypeInfo);
    sub_1C2D490(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Component_GetComponentsInChildren_Camera___);
    sub_1C2D490(&Method_FollowerRootComponent_OnClickBack__);
    sub_1C2D490(&Method_FollowerRootComponent__OnClickBack_b__73_0__);
    sub_1C2D490(&FollowerRootComponent_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1C2D490(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&StringLiteral_6434/*"FOLLOWER_SELECT_BACK_TO_QUEST_NO_AP_CONSUME_AP0"*/);
    sub_1C2D490(&StringLiteral_3430/*"CLICK_BACK"*/);
    sub_1C2D490(&StringLiteral_6433/*"FOLLOWER_SELECT_BACK_TO_QUEST_NO_AP_CONSUME"*/);
    sub_1C2D490(&StringLiteral_6432/*"FOLLOWER_SELECT_BACK_TITLE"*/);
    sub_1C2D490(&StringLiteral_3681/*"COMMON_CONFIRM_NO"*/);
    sub_1C2D490(&StringLiteral_3686/*"COMMON_CONFIRM_YES"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    sub_1C2D490(&StringLiteral_3431/*"CLICK_BACK_BATTLE_SETUP"*/);
    byte_4C21DFC = 1;
  }
  if ( this->fields.state == 3 && !this->fields.tutorialState )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( !Instance )
      goto LABEL_62;
    if ( !*((_BYTE *)Instance + 148) )
      goto LABEL_34;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_62;
    StackedRootComponent = AvalonSceneManager__GetStackedRootComponent((AvalonSceneManager_o *)Instance, 0);
    if ( StackedRootComponent
      && (naturalAligment = BattleRootComponent_TypeInfo->_2.naturalAligment,
          StackedRootComponent->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
    {
      if ( (BattleRootComponent_c *)StackedRootComponent->klass->_2.typeHierarchy[naturalAligment - 1] == BattleRootComponent_TypeInfo )
        v7 = (UnityEngine_Component_o *)StackedRootComponent;
      else
        v7 = 0;
    }
    else
    {
      v7 = 0;
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v7, 0, 0) )
    {
      v8 = Method_FollowerRootComponent_OnClickBack__;
      if ( (*((_BYTE *)Method_FollowerRootComponent_OnClickBack__ + 83) & 2) != 0 )
        v8 = (_QWORD *)sub_1C2D4A8(Method_FollowerRootComponent_OnClickBack__);
      v9 = (System_Reflection_MethodBase_o *)sub_1C2D474(v8, v8[4]);
      OverwriteAssetSoundName__PlaySystemSe(v9, 1, 0, 0);
      this->fields.state = 4;
      if ( v7 )
      {
        Instance = UnityEngine_Component__get_gameObject(v7, 0);
        if ( Instance )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
          monitor = v7[3].monitor;
          if ( monitor )
          {
            Instance = (void *)monitor[66];
            if ( Instance )
            {
              BattleResultComponent__EndResult((BattleResultComponent_o *)Instance, 0);
              Instance = this->fields.myFSM;
              if ( Instance )
              {
                PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3430/*"CLICK_BACK"*/, 0);
                Instance = UnityEngine_Component__get_transform(v7, 0);
                if ( Instance )
                {
                  Instance = UnityEngine_Component__GetComponentsInChildren_object__51142088(
                               (UnityEngine_Component_o *)Instance,
                               (const MethodInfo_30C5DC8 *)Method_UnityEngine_Component_GetComponentsInChildren_Camera___);
                  if ( Instance )
                  {
                    v12 = *((_DWORD *)Instance + 6);
                    v13 = Instance;
                    if ( v12 < 1 )
                      return;
                    v14 = 0;
                    while ( 1 )
                    {
                      if ( v14 >= v12 )
                        sub_1C2D6F4(Instance, v4, v11);
                      Instance = (void *)*((_QWORD *)v13 + (int)v14 + 4);
                      if ( !Instance )
                        break;
                      Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
                      if ( !Instance )
                        break;
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
                      v12 = *((_DWORD *)v13 + 6);
                      if ( (int)++v14 >= v12 )
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
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( !Instance )
        goto LABEL_62;
      if ( AvalonSceneManager__IsStackScene((AvalonSceneManager_o *)Instance, 0) )
        goto LABEL_40;
      Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_62;
      if ( *((int *)Instance + 14) > 0 )
        goto LABEL_40;
      Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_62;
      if ( *((_BYTE *)Instance + 182) )
      {
LABEL_40:
        v15 = Method_FollowerRootComponent_OnClickBack__;
        if ( (*((_BYTE *)Method_FollowerRootComponent_OnClickBack__ + 83) & 2) != 0 )
          v15 = (_QWORD *)sub_1C2D4A8(Method_FollowerRootComponent_OnClickBack__);
        v16 = (System_Reflection_MethodBase_o *)sub_1C2D474(v15, v15[4]);
        OverwriteAssetSoundName__PlaySystemSe(v16, 1, 0, 0);
        battleSetupInfo = this->fields.battleSetupInfo;
        this->fields.state = 4;
        if ( battleSetupInfo )
        {
          Instance = this->fields.myFSM;
          if ( Instance )
          {
            if ( battleSetupInfo->fields.isChildFollower )
              v18 = &StringLiteral_3431/*"CLICK_BACK_BATTLE_SETUP"*/;
            else
              v18 = &StringLiteral_3430/*"CLICK_BACK"*/;
            PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v18, 0);
            return;
          }
        }
      }
      else
      {
        v19 = Method_FollowerRootComponent_OnClickBack__;
        if ( (*((_BYTE *)Method_FollowerRootComponent_OnClickBack__ + 83) & 2) != 0 )
          v19 = (_QWORD *)sub_1C2D4A8(Method_FollowerRootComponent_OnClickBack__);
        v20 = (System_Reflection_MethodBase_o *)sub_1C2D474(v19, v19[4]);
        OverwriteAssetSoundName__PlaySystemSe(v20, 1, 0, 0);
        v21 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v21 = TerminalPramsManager_TypeInfo;
        }
        lastPlayQuestConsumeAp = v21->static_fields->lastPlayQuestConsumeAp;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v23 = (System_String_o **)&StringLiteral_6433/*"FOLLOWER_SELECT_BACK_TO_QUEST_NO_AP_CONSUME"*/;
        if ( lastPlayQuestConsumeAp <= 0 )
          v23 = (System_String_o **)&StringLiteral_6434/*"FOLLOWER_SELECT_BACK_TO_QUEST_NO_AP_CONSUME_AP0"*/;
        v24 = LocalizationManager__Get(*v23, 0);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v25 = LocalizationManager__Get((System_String_o *)StringLiteral_6432/*"FOLLOWER_SELECT_BACK_TITLE"*/, 0);
        v26 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v27 = LocalizationManager__Get((System_String_o *)StringLiteral_3686/*"COMMON_CONFIRM_YES"*/, 0);
        v28 = LocalizationManager__Get((System_String_o *)StringLiteral_3681/*"COMMON_CONFIRM_NO"*/, 0);
        v29 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C2D6DC(CommonConfirmDialog_ClickDelegate_TypeInfo);
        CommonConfirmDialog_ClickDelegate___ctor(
          v29,
          (Il2CppObject *)this,
          Method_FollowerRootComponent__OnClickBack_b__73_0__,
          0);
        Instance = FollowerRootComponent_TypeInfo;
        if ( !FollowerRootComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FollowerRootComponent_TypeInfo);
          Instance = FollowerRootComponent_TypeInfo;
        }
        if ( v26 )
        {
          CommonUI__OpenConfirmDecideDlg(
            (CommonUI_o *)v26,
            v25,
            v24,
            v27,
            v28,
            v29,
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
            0);
          return;
        }
      }
    }
LABEL_62:
    sub_1C2D6EC(Instance, v4);
  }
}


void FollowerRootComponent__OnMoveEnd(FollowerRootComponent_o *this, const MethodInfo *method)
{
  int32_t tutorialMode; // w8
  Il2CppObject *Instance; // x20
  System_String_o *v5; // x21
  System_Action_o *v6; // x0
  intptr_t *v7; // x8
  BattleSetupInfo_o *battleSetupInfo; // x0
  int32_t eventId; // w20
  struct BattleSetupInfo_o *v10; // x8
  struct BattleSetupInfo_o *v11; // x8
  int32_t v12; // w20
  System_Action_o *v13; // x21
  struct BattleSetupInfo_o *v14; // x8
  struct FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v16; // x21
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x1
  System_Action_o *v19; // x22

  if ( (byte_4C21DF5 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_FollowerRootComponent_EndTutorialFollowerCommonGuide__);
    sub_1C2D490(&Method_FollowerRootComponent_EndTutorialFollowerGuideNotification1__);
    sub_1C2D490(&Method_FollowerRootComponent_EndTutorialFollowerGuideNotification2__);
    sub_1C2D490(&Method_FollowerRootComponent_OnSelectFollowerItem__);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C2D490(&StringLiteral_13584/*"TUTORIAL_MESSAGE_FOLLOWER2"*/);
    sub_1C2D490(&StringLiteral_13583/*"TUTORIAL_MESSAGE_FOLLOWER1"*/);
    byte_4C21DF5 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( this->fields.tutorialState == 1 )
    {
      tutorialMode = this->fields.tutorialMode;
      *(_QWORD *)&this->fields.tutorialState = 0x200000002LL;
      if ( tutorialMode == 3 )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v5 = LocalizationManager__Get((System_String_o *)StringLiteral_13584/*"TUTORIAL_MESSAGE_FOLLOWER2"*/, 0);
        v6 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
        v7 = &Method_FollowerRootComponent_EndTutorialFollowerGuideNotification2__;
LABEL_25:
        v19 = v6;
        System_Action___ctor(v6, (Il2CppObject *)this, *v7, 0);
        if ( Instance )
        {
          CommonUI__OpenTutorialNotificationDialog((CommonUI_o *)Instance, v5, -1, v19, 0);
          return;
        }
LABEL_27:
        sub_1C2D6EC(battleSetupInfo, method);
      }
      if ( tutorialMode == 2 )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v5 = LocalizationManager__Get((System_String_o *)StringLiteral_13583/*"TUTORIAL_MESSAGE_FOLLOWER1"*/, 0);
        v6 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
        v7 = &Method_FollowerRootComponent_EndTutorialFollowerGuideNotification1__;
        goto LABEL_25;
      }
    }
    else
    {
      battleSetupInfo = this->fields.battleSetupInfo;
      if ( !battleSetupInfo )
        goto LABEL_27;
      eventId = battleSetupInfo->fields.eventId;
      battleSetupInfo = (BattleSetupInfo_o *)BattleSetupInfo__TargetQuestId(battleSetupInfo, 0);
      v10 = this->fields.battleSetupInfo;
      if ( !v10 )
        goto LABEL_27;
      battleSetupInfo = (BattleSetupInfo_o *)EventTutorialMaster__IsTutorialAvailable(
                                               eventId,
                                               15,
                                               (int32_t)battleSetupInfo,
                                               v10->fields.questPhase,
                                               0,
                                               0,
                                               0);
      if ( ((unsigned __int8)battleSetupInfo & 1) != 0 )
      {
        v11 = this->fields.battleSetupInfo;
        this->fields.state = 2;
        if ( v11 )
        {
          v12 = v11->fields.eventId;
          v13 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
          System_Action___ctor(
            v13,
            (Il2CppObject *)this,
            Method_FollowerRootComponent_EndTutorialFollowerCommonGuide__,
            0);
          battleSetupInfo = this->fields.battleSetupInfo;
          if ( battleSetupInfo )
          {
            battleSetupInfo = (BattleSetupInfo_o *)BattleSetupInfo__TargetQuestId(battleSetupInfo, 0);
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
                0);
              return;
            }
          }
        }
        goto LABEL_27;
      }
      this->fields.state = 3;
      operationItemListViewManager = this->fields.operationItemListViewManager;
      v16 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1C2D6DC(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
      FollowerSelectItemListViewManager_CallbackFunc___ctor(
        v16,
        (Il2CppObject *)this,
        (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
        0);
      if ( !operationItemListViewManager )
        goto LABEL_27;
      operationItemListViewManager->fields.callbackFunc = v16;
      sub_1C2D434(&operationItemListViewManager->fields.callbackFunc);
      FollowerSelectItemListViewManager__SetMode_32512280(operationItemListViewManager, 2, v17);
      battleSetupInfo = (BattleSetupInfo_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !battleSetupInfo )
        goto LABEL_27;
      if ( PartyOrganizationUtility__ExistsTemporaryPartyInfo((PartyOrganizationUtility_o *)battleSetupInfo, 0) )
        FollowerRootComponent__StartBattleSetupMenu(this, v18);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void FollowerRootComponent__OnSelectFollowerItem(
        FollowerRootComponent_o *this,
        int32_t kind,
        int32_t n,
        int32_t param,
        const MethodInfo *method)
{
  FollowerRootComponent_o *v8; // x19
  const MethodInfo *v9; // x3
  __int64 v10; // x8
  __int64 v11; // x20
  __int64 v12; // x2
  SkillInfo_o *v13; // x22
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0
  Il2CppObject *v16; // x20
  System_String_o *v17; // x20
  System_String_o *v18; // x21
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  Il2CppObject *v22; // x0
  System_String_o *v23; // x0
  int32_t v24; // w20
  _QWORD *v25; // x0
  System_Reflection_MethodBase_o *v26; // x0
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v28; // x0
  void *v29; // x2
  _QWORD *v30; // x0
  System_Reflection_MethodBase_o *v31; // x0
  const MethodInfo *v32; // x2
  const MethodInfo *v33; // x2
  __int64 v34; // x20
  FollowerRootComponent_o *v35; // x21
  SkillInfo_o *v36; // x26
  Il2CppObject *v37; // x22
  FollowerRootComponent_o *v38; // x20
  Il2CppObject *Master_object; // x22
  const MethodInfo *v40; // x1
  int32_t SvtId; // w23
  const MethodInfo *v42; // x1
  int32_t ServantImageLimitSealAfter; // w24
  Il2CppObject *v44; // x22
  const MethodInfo *v45; // x1
  int32_t v46; // w23
  const MethodInfo *v47; // x1
  int32_t LimitCount; // w21
  System_String_o *v49; // x21
  System_String_o *v50; // x22
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  Il2CppObject *v54; // x0
  System_String_o *v55; // x0
  __int64 v56; // x2
  __int64 v57; // x3
  __int64 v58; // x4
  FollowerRootComponent_o *v59; // x21
  Il2CppObject *v60; // x0
  System_String_o *v61; // x0
  int32_t tutorialMode; // w21
  System_String_o *v63; // x20
  _QWORD *v64; // x0
  System_Reflection_MethodBase_o *v65; // x0
  bool v66; // w22
  CommonConfirmDialog_ClickDelegate_o *v67; // x21
  bool v68; // w20
  CommonConfirmDialog_o *commonConfirmDialog; // x19
  System_String_o *v70; // x20
  FollowerRootComponent_o *v71; // x22
  int32_t v72; // w8
  _QWORD *v73; // x0
  System_Reflection_MethodBase_o *v74; // x0
  FollowerRootComponent_o *v75; // x20
  FollowerRootComponent_o *v76; // x20
  FollowerRootComponent___c_c *v77; // x8
  System_Action_o *_9__67_0; // x21
  Il2CppObject *v79; // x22
  struct FollowerRootComponent___c_StaticFields *static_fields; // x0
  _QWORD *v81; // x0
  System_Reflection_MethodBase_o *v82; // x0
  int32_t v83; // w8
  __int64 *v84; // x8
  FollowerRootComponent_o *v85; // x20
  _QWORD *v86; // x0
  System_Reflection_MethodBase_o *v87; // x0
  const MethodInfo *v88; // x2
  _QWORD *v89; // x0
  System_Reflection_MethodBase_o *v90; // x0
  int32_t v91; // w8
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  NetworkManager_ResultCallbackFunc_o *v93; // x20
  FollowerRecommendSupportListRequest_o *v94; // x20
  struct BattleSetupInfo_o *v95; // x8
  Il2CppObject *Instance; // x20
  System_String_o *v97; // x21
  System_String_o *v98; // x22
  System_Action_o *v99; // x23
  int friendPointCampaignEntityList_low; // w20
  _QWORD *v101; // x0
  FollowerSelectItemListViewItem_o *v102; // x20
  const MethodInfo *v103; // x1
  const MethodInfo *v104; // x1
  __int64 v105; // x22
  __int64 v106; // x23
  EquipTargetInfo_o *EquipTargetInfoByEquipIdx; // x0
  EquipTargetInfo_o *EquipInfo; // x21
  __int64 v109; // x22
  __int64 v110; // x23
  const MethodInfo *v111; // x1
  __int64 v112; // x22
  __int64 v113; // x23
  _QWORD *v114; // x0
  System_Reflection_MethodBase_o *v115; // x0
  const MethodInfo *v116; // x3
  struct FollowerInfo_o *followerInfo; // x8
  int32_t type; // w8
  int32_t v119; // w2
  _QWORD *v120; // x0
  struct FollowerSelectItemListViewManager_CallbackFunc_o *v121; // x21
  const MethodInfo *v122; // x2
  int32_t v123; // w1
  _QWORD *v124; // x0
  System_Reflection_MethodBase_o *v125; // x0
  FollowerSelectItemListViewManager_CallbackFunc_o *v126; // x21
  Il2CppObject *v127; // x20
  System_Action_o *v128; // x21
  int m_CancellationTokenSource; // [xsp+38h] [xbp-88h] BYREF
  int32_t lv; // [xsp+3Ch] [xbp-84h] BYREF
  System_String_o *detail; // [xsp+40h] [xbp-80h] BYREF
  System_String_o *name; // [xsp+48h] [xbp-78h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+50h] [xbp-70h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+58h] [xbp-68h] BYREF
  System_String_o *v135; // [xsp+60h] [xbp-60h] BYREF
  System_String_o *defaultName; // [xsp+68h] [xbp-58h] BYREF
  SkillInfo_array *v137; // [xsp+78h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v138; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v139; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v140; // 0:x0.16

  v8 = this;
  if ( (byte_4C21DF6 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    sub_1C2D490(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C2D490(&FollowerListRequest_TypeInfo);
    sub_1C2D490(&FollowerRecommendSupportListRequest_TypeInfo);
    sub_1C2D490(&Method_FollowerRootComponent_CallbackRefresh__);
    sub_1C2D490(&Method_FollowerRootComponent_EndCloseTutorialArrow__);
    sub_1C2D490(&Method_FollowerRootComponent_EndRecommendRefreshConfirm__);
    sub_1C2D490(&Method_FollowerRootComponent_EndRefreshConfirm__);
    sub_1C2D490(&Method_FollowerRootComponent_EndRefreshRest__);
    sub_1C2D490(&Method_FollowerRootComponent_OnSelectFollowerItem__);
    sub_1C2D490(&FollowerRootComponent_TypeInfo);
    sub_1C2D490(&ImageLimitCount_TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_NetworkManager_getRequest_FollowerRecommendSupportListRequest___);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1C2D490(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C2D490(&Method_FollowerRootComponent___c__OnSelectFollowerItem_b__67_0__);
    sub_1C2D490(&FollowerRootComponent___c_TypeInfo);
    sub_1C2D490(&StringLiteral_6457/*"FOLLOWER_SELECT_REFRESH_TITLE"*/);
    sub_1C2D490(&StringLiteral_8648/*"MENU_SELECT_ITEM"*/);
    sub_1C2D490(&StringLiteral_8657/*"MENU_SHOW_SUPPORT"*/);
    sub_1C2D490(&StringLiteral_6454/*"FOLLOWER_SELECT_REFRESH_MESSAGE"*/);
    sub_1C2D490(&StringLiteral_113/*" "*/);
    sub_1C2D490(&StringLiteral_6455/*"FOLLOWER_SELECT_REFRESH_REST_MESSAGE"*/);
    sub_1C2D490(&StringLiteral_8543/*"MASTER_EQSKILL_LV_TXT"*/);
    sub_1C2D490(&StringLiteral_2869/*"BATTLE_SKILLCHARGETURN"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    this = (FollowerRootComponent_o *)sub_1C2D490(&StringLiteral_6456/*"FOLLOWER_SELECT_REFRESH_REST_TITLE"*/);
    byte_4C21DF6 = 1;
  }
  v137 = 0;
  v135 = 0;
  defaultName = 0;
  skillInfoList = 0;
  entity = 0;
  detail = 0;
  name = 0;
  if ( v8->fields.state != 3 )
    return;
  v8->fields.selectItemNum = n;
  switch ( kind )
  {
    case 1:
      if ( v8->fields.tutorialState )
        goto LABEL_118;
      this = (FollowerRootComponent_o *)v8->fields.operationItemListViewManager;
      if ( !this )
        goto LABEL_196;
      this = (FollowerRootComponent_o *)FollowerSelectItemListViewManager__GetItem(
                                          (FollowerSelectItemListViewManager_o *)this,
                                          n,
                                          *(const MethodInfo **)&n);
      if ( !this )
        goto LABEL_196;
      v85 = this;
      if ( LOBYTE(this->fields.friendPointCampaignEntityList)
        || FollowerSelectItemListViewItem__get_SvtId(
             (FollowerSelectItemListViewItem_o *)this,
             *(const MethodInfo **)&kind) <= 0 )
      {
        goto LABEL_175;
      }
      v86 = Method_FollowerRootComponent_OnSelectFollowerItem__;
      if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
        v86 = (_QWORD *)sub_1C2D4A8(Method_FollowerRootComponent_OnSelectFollowerItem__);
      v87 = (System_Reflection_MethodBase_o *)sub_1C2D474(v86, v86[4]);
      OverwriteAssetSoundName__PlaySystemSe(v87, 0, 0, 0);
      FollowerRootComponent__SelectShowServant(v8, (FollowerSelectItemListViewItem_o *)v85, v88);
      return;
    case 2:
    case 3:
    case 4:
      v30 = Method_FollowerRootComponent_OnSelectFollowerItem__;
      if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
        v30 = (_QWORD *)sub_1C2D4A8(Method_FollowerRootComponent_OnSelectFollowerItem__);
      v31 = (System_Reflection_MethodBase_o *)sub_1C2D474(v30, v30[4]);
      OverwriteAssetSoundName__PlaySystemSe(v31, 0, 0, 0);
      this = (FollowerRootComponent_o *)v8->fields.operationItemListViewManager;
      if ( !this )
        goto LABEL_196;
      this = (FollowerRootComponent_o *)FollowerSelectItemListViewManager__GetItem(
                                          (FollowerSelectItemListViewManager_o *)this,
                                          v8->fields.selectItemNum,
                                          v32);
      v34 = kind == 3 ? 1LL : 2LL * (kind == 4);
      if ( !this )
        goto LABEL_196;
      v35 = this;
      this = (FollowerRootComponent_o *)FollowerSelectItemListViewItem__GetSkillInfo(
                                          (FollowerSelectItemListViewItem_o *)this,
                                          &v137,
                                          v33);
      if ( !v137 )
        goto LABEL_196;
      if ( (unsigned int)v34 >= LODWORD(v137->max_length) )
        goto LABEL_197;
      v36 = v137->m_Items[v34];
      if ( !v36 || v36->fields.id < 1 || v36->fields.lv < 1 )
        goto LABEL_164;
      this = (FollowerRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_196;
      this = (FollowerRootComponent_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_SkillMaster___);
      if ( !this )
        goto LABEL_196;
      v37 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
              v36->fields.id,
              (const MethodInfo_3387D98 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      this = (FollowerRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_196;
      this = (FollowerRootComponent_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_SkillLvMaster___);
      if ( !this )
        goto LABEL_196;
      this = (FollowerRootComponent_o *)SkillLvMaster__GetEntity(
                                          (SkillLvMaster_o *)this,
                                          v36->fields.id,
                                          v36->fields.lv,
                                          0);
      if ( !v37 )
        goto LABEL_196;
      v38 = this;
      SkillEntity__getSkillMessageInfo((SkillEntity_o *)v37, &defaultName, &v135, v36->fields.lv, 0);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
      SvtId = FollowerSelectItemListViewItem__get_SvtId((FollowerSelectItemListViewItem_o *)v35, v40);
      this = (FollowerRootComponent_o *)FollowerSelectItemListViewItem__get_DispLimitCount(
                                          (FollowerSelectItemListViewItem_o *)v35,
                                          v42);
      if ( !Master_object )
        goto LABEL_196;
      ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                     (ServantLimitImageMaster_o *)Master_object,
                                     SvtId,
                                     (int32_t)this,
                                     0);
      v44 = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
      v46 = FollowerSelectItemListViewItem__get_SvtId((FollowerSelectItemListViewItem_o *)v35, v45);
      LimitCount = FollowerSelectItemListViewItem__get_LimitCount((FollowerSelectItemListViewItem_o *)v35, v47);
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      this = (FollowerRootComponent_o *)ImageLimitCount__GetLimitCountByDispLimit(
                                          ServantImageLimitSealAfter,
                                          LimitCount,
                                          0);
      if ( !v44 )
        goto LABEL_196;
      if ( !ServantLimitAddMaster__TryGetEntity((ServantLimitAddMaster_o *)v44, &entity, v46, (int32_t)this, 0) )
        goto LABEL_59;
      this = (FollowerRootComponent_o *)entity;
      if ( !entity )
        goto LABEL_196;
      if ( !ServantLimitAddEntity__HasKeyOverwriteSkillName(entity, 0) )
        goto LABEL_59;
      this = (FollowerRootComponent_o *)entity;
      if ( !entity )
        goto LABEL_196;
      defaultName = ServantLimitAddEntity__GetOverwriteSkillName(entity, v36->fields.id, defaultName, 0);
LABEL_59:
      v49 = defaultName;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v50 = LocalizationManager__Get((System_String_o *)StringLiteral_8543/*"MASTER_EQSKILL_LV_TXT"*/, 0);
      lv = v36->fields.lv;
      v54 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv, v51, v52, v53);
      v55 = System_String__Format(v50, v54, 0);
      defaultName = System_String__Concat_63496112(v49, (System_String_o *)StringLiteral_113/*" "*/, v55, 0);
      this = (FollowerRootComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2869/*"BATTLE_SKILLCHARGETURN"*/, 0);
      if ( !v38 )
        goto LABEL_196;
      v59 = this;
      m_CancellationTokenSource = (int)v38->fields.m_CancellationTokenSource;
      v60 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &m_CancellationTokenSource, v56, v57, v58);
      v61 = System_String__Format((System_String_o *)v59, v60, 0);
      tutorialMode = v8->fields.tutorialMode;
      v63 = v61;
      this = (FollowerRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_196;
      if ( tutorialMode == 3 )
        CommonUI__OpenDetailLongInfoDialogOnFade((CommonUI_o *)this, defaultName, v63, v135, 0);
      else
        CommonUI__OpenDetailLongInfoDialog((CommonUI_o *)this, defaultName, v63, v135, 1, 0, 0);
LABEL_164:
      operationItemListViewManager = v8->fields.operationItemListViewManager;
      v28 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1C2D6DC(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
      v29 = Method_FollowerRootComponent_OnSelectFollowerItem__;
      goto LABEL_180;
    case 5:
      if ( !v8->fields.tutorialState )
      {
        this = (FollowerRootComponent_o *)v8->fields.operationItemListViewManager;
        if ( !this )
          goto LABEL_196;
        this = (FollowerRootComponent_o *)FollowerSelectItemListViewManager__GetItem(
                                            (FollowerSelectItemListViewManager_o *)this,
                                            n,
                                            *(const MethodInfo **)&n);
        if ( !this )
          goto LABEL_196;
        friendPointCampaignEntityList_low = LOBYTE(this->fields.friendPointCampaignEntityList);
        v101 = Method_FollowerRootComponent_OnSelectFollowerItem__;
        if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
          v101 = (_QWORD *)sub_1C2D4A8(Method_FollowerRootComponent_OnSelectFollowerItem__);
        v74 = (System_Reflection_MethodBase_o *)sub_1C2D474(v101, v101[4]);
        if ( !friendPointCampaignEntityList_low )
          goto LABEL_145;
        goto LABEL_178;
      }
      v72 = v8->fields.tutorialMode;
      if ( v72 == 3 )
      {
        v124 = Method_FollowerRootComponent_OnSelectFollowerItem__;
        if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
          v124 = (_QWORD *)sub_1C2D4A8(Method_FollowerRootComponent_OnSelectFollowerItem__);
        v125 = (System_Reflection_MethodBase_o *)sub_1C2D474(v124, v124[4]);
        OverwriteAssetSoundName__PlaySystemSe(v125, 2, 0, 0);
        goto LABEL_187;
      }
      if ( v72 == 2 )
      {
        v73 = Method_FollowerRootComponent_OnSelectFollowerItem__;
        if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
          v73 = (_QWORD *)sub_1C2D4A8(Method_FollowerRootComponent_OnSelectFollowerItem__);
        v74 = (System_Reflection_MethodBase_o *)sub_1C2D474(v73, v73[4]);
LABEL_145:
        OverwriteAssetSoundName__PlaySystemSe(v74, 0, 0, 0);
        this = (FollowerRootComponent_o *)v8->fields.myFSM;
        if ( this )
        {
          v84 = &StringLiteral_8657/*"MENU_SHOW_SUPPORT"*/;
          goto LABEL_147;
        }
        goto LABEL_196;
      }
      return;
    case 6:
      if ( !v8->fields.tutorialState )
      {
        this = (FollowerRootComponent_o *)v8->fields.operationItemListViewManager;
        if ( !this )
          goto LABEL_196;
        this = (FollowerRootComponent_o *)FollowerSelectItemListViewManager__GetItem(
                                            (FollowerSelectItemListViewManager_o *)this,
                                            n,
                                            *(const MethodInfo **)&n);
        if ( !this )
          goto LABEL_196;
        v102 = (FollowerSelectItemListViewItem_o *)this;
        FollowerSelectItemListViewItem__SetSkillChangeInfo(
          (FollowerSelectItemListViewItem_o *)this,
          *(const MethodInfo **)&kind);
        if ( !FollowerSelectItemListViewItem__get_ServantLeader(v102, v103) )
          goto LABEL_165;
        this = (FollowerRootComponent_o *)FollowerSelectItemListViewItem__get_ServantLeader(v102, v104);
        if ( !this )
          goto LABEL_196;
        v106 = *(_QWORD *)&this->fields.manualWidth;
        v105 = *(_QWORD *)&this->fields.kind;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v138.fields.currentCryptoKey = v106;
        *(_QWORD *)&v138.fields.fakeValue = v105;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v138, 0) >= 1 )
        {
          this = (FollowerRootComponent_o *)FollowerSelectItemListViewItem__get_ServantLeader(v102, v104);
          if ( !this )
            goto LABEL_196;
          EquipTargetInfoByEquipIdx = ServantLeaderInfo__GetEquipTargetInfoByEquipIdx(
                                        (ServantLeaderInfo_o *)this,
                                        param,
                                        0);
          if ( !EquipTargetInfoByEquipIdx )
            goto LABEL_175;
          EquipInfo = EquipTargetInfoByEquipIdx;
          v110 = *(_QWORD *)&EquipTargetInfoByEquipIdx->fields.svtId.fields.currentCryptoKey;
          v109 = *(_QWORD *)&EquipTargetInfoByEquipIdx->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v139.fields.currentCryptoKey = v110;
          *(_QWORD *)&v139.fields.fakeValue = v109;
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v139, 0) < 1 )
            goto LABEL_175;
          this = (FollowerRootComponent_o *)FollowerSelectItemListViewItem__get_ServantLeader(v102, v111);
          if ( !this )
            goto LABEL_196;
          if ( ServantLeaderInfo__IsHideEquip((ServantLeaderInfo_o *)this, 0) )
          {
LABEL_175:
            v120 = Method_FollowerRootComponent_OnSelectFollowerItem__;
            if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
              v120 = (_QWORD *)sub_1C2D4A8(Method_FollowerRootComponent_OnSelectFollowerItem__);
            v74 = (System_Reflection_MethodBase_o *)sub_1C2D474(v120, v120[4]);
LABEL_178:
            OverwriteAssetSoundName__PlaySystemSe(v74, 2, 0, 0);
LABEL_179:
            operationItemListViewManager = v8->fields.operationItemListViewManager;
            v28 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1C2D6DC(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
            v29 = Method_FollowerRootComponent_OnSelectFollowerItem__;
LABEL_180:
            v121 = v28;
            FollowerSelectItemListViewManager_CallbackFunc___ctor(v28, (Il2CppObject *)v8, (intptr_t)v29, 0);
            if ( !operationItemListViewManager )
              goto LABEL_196;
            operationItemListViewManager->fields.callbackFunc = v121;
            sub_1C2D434(&operationItemListViewManager->fields.callbackFunc);
            v123 = 2;
            goto LABEL_182;
          }
        }
        else
        {
LABEL_165:
          EquipInfo = FollowerSelectItemListViewItem__get_EquipInfo(v102, v104);
          if ( !EquipInfo )
            goto LABEL_175;
        }
        v113 = *(_QWORD *)&EquipInfo->fields.svtId.fields.currentCryptoKey;
        v112 = *(_QWORD *)&EquipInfo->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v140.fields.currentCryptoKey = v113;
        *(_QWORD *)&v140.fields.fakeValue = v112;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v140, 0) < 1 )
          goto LABEL_175;
        v114 = Method_FollowerRootComponent_OnSelectFollowerItem__;
        if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
          v114 = (_QWORD *)sub_1C2D4A8(Method_FollowerRootComponent_OnSelectFollowerItem__);
        v115 = (System_Reflection_MethodBase_o *)sub_1C2D474(v114, v114[4]);
        OverwriteAssetSoundName__PlaySystemSe(v115, 0, 0, 0);
        followerInfo = v102->fields.followerInfo;
        if ( followerInfo )
        {
          type = followerInfo->fields.type;
          if ( type == 1 )
          {
            v119 = 13;
            goto LABEL_193;
          }
          if ( type == 5 )
          {
            v119 = 14;
LABEL_193:
            FollowerRootComponent__SelectShowServantEquip(v8, EquipInfo, v119, v116);
            return;
          }
        }
        if ( v102->fields.isNpc )
          v119 = 19;
        else
          v119 = 16;
        goto LABEL_193;
      }
LABEL_118:
      v89 = Method_FollowerRootComponent_OnSelectFollowerItem__;
      if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
        v89 = (_QWORD *)sub_1C2D4A8(Method_FollowerRootComponent_OnSelectFollowerItem__);
      v90 = (System_Reflection_MethodBase_o *)sub_1C2D474(v89, v89[4]);
      OverwriteAssetSoundName__PlaySystemSe(v90, 2, 0, 0);
      v91 = v8->fields.tutorialMode;
      if ( v91 == 3 )
      {
LABEL_187:
        operationItemListViewManager = v8->fields.operationItemListViewManager;
        v126 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1C2D6DC(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
        FollowerSelectItemListViewManager_CallbackFunc___ctor(
          v126,
          (Il2CppObject *)v8,
          (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
          0);
        if ( !operationItemListViewManager )
          goto LABEL_196;
        operationItemListViewManager->fields.callbackFunc = v126;
        sub_1C2D434(&operationItemListViewManager->fields.callbackFunc);
        v123 = 4;
LABEL_182:
        FollowerSelectItemListViewManager__SetMode_32512280(operationItemListViewManager, v123, v122);
        return;
      }
      if ( v91 == 2 )
        goto LABEL_179;
      return;
    case 7:
    case 13:
      v64 = Method_FollowerRootComponent_OnSelectFollowerItem__;
      if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
        v64 = (_QWORD *)sub_1C2D4A8(Method_FollowerRootComponent_OnSelectFollowerItem__);
      v65 = (System_Reflection_MethodBase_o *)sub_1C2D474(v64, v64[4]);
      OverwriteAssetSoundName__PlaySystemSe(v65, 0, 0, 0);
      if ( !FollowerListRequest_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FollowerListRequest_TypeInfo);
      v66 = FollowerListRequest__checkRefreshRate(0);
      v67 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C2D6DC(CommonConfirmDialog_ClickDelegate_TypeInfo);
      CommonConfirmDialog_ClickDelegate___ctor(
        v67,
        (Il2CppObject *)v8,
        Method_FollowerRootComponent_EndRefreshConfirm__,
        0);
      if ( kind == 13 )
      {
        if ( !FollowerRecommendSupportListRequest_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FollowerRecommendSupportListRequest_TypeInfo);
        v68 = FollowerRecommendSupportListRequest__CheckRefreshRate(0);
        v67 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C2D6DC(CommonConfirmDialog_ClickDelegate_TypeInfo);
        CommonConfirmDialog_ClickDelegate___ctor(
          v67,
          (Il2CppObject *)v8,
          Method_FollowerRootComponent_EndRecommendRefreshConfirm__,
          0);
        if ( v68 )
        {
LABEL_73:
          commonConfirmDialog = v8->fields.commonConfirmDialog;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v70 = LocalizationManager__Get((System_String_o *)StringLiteral_6457/*"FOLLOWER_SELECT_REFRESH_TITLE"*/, 0);
          this = (FollowerRootComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6454/*"FOLLOWER_SELECT_REFRESH_MESSAGE"*/, 0);
          v71 = this;
          if ( !FollowerRootComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(FollowerRootComponent_TypeInfo);
          if ( commonConfirmDialog )
          {
            CommonConfirmDialog__Open_31141740(
              commonConfirmDialog,
              v70,
              (System_String_o *)v71,
              1,
              v67,
              FollowerRootComponent_TypeInfo->static_fields->LIST_UPDATE_MESSAGE_FONT_SIZE,
              0,
              0,
              0,
              0);
            return;
          }
          goto LABEL_196;
        }
      }
      else if ( v66 )
      {
        goto LABEL_73;
      }
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v97 = LocalizationManager__Get((System_String_o *)StringLiteral_6456/*"FOLLOWER_SELECT_REFRESH_REST_TITLE"*/, 0);
      v98 = LocalizationManager__Get((System_String_o *)StringLiteral_6455/*"FOLLOWER_SELECT_REFRESH_REST_MESSAGE"*/, 0);
      v99 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(v99, (Il2CppObject *)v8, Method_FollowerRootComponent_EndRefreshRest__, 0);
      if ( Instance )
      {
        CommonUI__OpenNotificationDialog((CommonUI_o *)Instance, v97, v98, v99, -1, 0, 0, 0, 0, 0, 1, 0, 0, 0.0, 0, 0);
        return;
      }
      goto LABEL_196;
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
      this = (FollowerRootComponent_o *)v8->fields.operationItemListViewManager;
      if ( !this )
        goto LABEL_196;
      this = (FollowerRootComponent_o *)FollowerSelectItemListViewManager__GetItem(
                                          (FollowerSelectItemListViewManager_o *)this,
                                          n,
                                          *(const MethodInfo **)&n);
      v10 = (unsigned int)(kind - 9);
      v11 = (unsigned int)v10 < 4 ? v10 + 1 : 0LL;
      if ( !this )
        goto LABEL_196;
      this = (FollowerRootComponent_o *)FollowerSelectItemListViewItem__GetAppendSkillInfo(
                                          (FollowerSelectItemListViewItem_o *)this,
                                          &skillInfoList,
                                          (bool)this->fields.friendPointCampaignEntityList,
                                          v9);
      if ( !skillInfoList )
        goto LABEL_196;
      if ( (unsigned int)v11 >= LODWORD(skillInfoList->max_length) )
LABEL_197:
        sub_1C2D6F4(this, *(_QWORD *)&kind, v12);
      v13 = skillInfoList->m_Items[v11];
      if ( v13 && v13->fields.id >= 1 && v13->fields.lv >= 1 )
      {
        v14 = Method_FollowerRootComponent_OnSelectFollowerItem__;
        if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
          v14 = (_QWORD *)sub_1C2D4A8(Method_FollowerRootComponent_OnSelectFollowerItem__);
        v15 = (System_Reflection_MethodBase_o *)sub_1C2D474(v14, v14[4]);
        OverwriteAssetSoundName__PlaySystemSe(v15, 0, 0, 0);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (FollowerRootComponent_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_SkillMaster___);
        if ( !this )
          goto LABEL_196;
        v16 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                v13->fields.id,
                (const MethodInfo_3387D98 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        this = (FollowerRootComponent_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_SkillLvMaster___);
        if ( !this )
          goto LABEL_196;
        this = (FollowerRootComponent_o *)SkillLvMaster__GetEntity(
                                            (SkillLvMaster_o *)this,
                                            v13->fields.id,
                                            v13->fields.lv,
                                            0);
        if ( !v16 )
          goto LABEL_196;
        SkillEntity__getSkillMessageInfo((SkillEntity_o *)v16, &name, &detail, v13->fields.lv, 0);
        v17 = name;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v18 = LocalizationManager__Get((System_String_o *)StringLiteral_8543/*"MASTER_EQSKILL_LV_TXT"*/, 0);
        lv = v13->fields.lv;
        v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv, v19, v20, v21);
        v23 = System_String__Format(v18, v22, 0);
        name = System_String__Concat_63496112(v17, (System_String_o *)StringLiteral_113/*" "*/, v23, 0);
        v24 = v8->fields.tutorialMode;
        this = (FollowerRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !this )
          goto LABEL_196;
        if ( v24 == 3 )
          CommonUI__OpenDetailLongInfoDialogOnFade(
            (CommonUI_o *)this,
            name,
            (System_String_o *)StringLiteral_1/*""*/,
            detail,
            0);
        else
          CommonUI__OpenDetailLongInfoDialog(
            (CommonUI_o *)this,
            name,
            (System_String_o *)StringLiteral_1/*""*/,
            detail,
            1,
            0,
            0);
      }
      else
      {
        v25 = Method_FollowerRootComponent_OnSelectFollowerItem__;
        if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
          v25 = (_QWORD *)sub_1C2D4A8(Method_FollowerRootComponent_OnSelectFollowerItem__);
        v26 = (System_Reflection_MethodBase_o *)sub_1C2D474(v25, v25[4]);
        OverwriteAssetSoundName__PlaySystemSe(v26, 2, 0, 0);
      }
LABEL_30:
      operationItemListViewManager = v8->fields.operationItemListViewManager;
      v28 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1C2D6DC(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
      v29 = Method_FollowerRootComponent_OnSelectFollowerItem__;
      goto LABEL_180;
    case 14:
      battleSetupInfo = v8->fields.battleSetupInfo;
      if ( !battleSetupInfo )
        goto LABEL_196;
      if ( !battleSetupInfo->fields.isChildFollower )
        goto LABEL_128;
      this = (FollowerRootComponent_o *)v8->fields.titleInfo;
      if ( !this )
        goto LABEL_196;
      TitleInfoControl__setBackBtnEnable((TitleInfoControl_o *)this, 0, 0);
      this = (FollowerRootComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !this )
        goto LABEL_196;
      LOBYTE(this->fields.operationItemListViewManager) = 1;
LABEL_128:
      v93 = (NetworkManager_ResultCallbackFunc_o *)sub_1C2D6DC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v93,
        (Il2CppObject *)v8,
        Method_FollowerRootComponent_CallbackRefresh__,
        0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      this = (FollowerRootComponent_o *)NetworkManager__getRequest_object_(
                                          v93,
                                          (const MethodInfo_31599E8 *)Method_NetworkManager_getRequest_FollowerRecommendSupportListRequest___);
      if ( !v8->fields.battleSetupInfo )
        goto LABEL_196;
      v94 = (FollowerRecommendSupportListRequest_o *)this;
      this = (FollowerRootComponent_o *)BattleSetupInfo__TargetQuestId(v8->fields.battleSetupInfo, 0);
      v95 = v8->fields.battleSetupInfo;
      if ( !v95 || !v94 )
        goto LABEL_196;
      FollowerRecommendSupportListRequest__beginRequest(v94, 0, (int32_t)this, v95->fields.questPhase, 0);
      return;
    default:
      this = (FollowerRootComponent_o *)v8->fields.operationItemListViewManager;
      if ( !this )
        goto LABEL_196;
      this = (FollowerRootComponent_o *)FollowerSelectItemListViewManager__GetItem(
                                          (FollowerSelectItemListViewManager_o *)this,
                                          n,
                                          *(const MethodInfo **)&n);
      if ( !this )
        goto LABEL_196;
      v75 = this;
      if ( FollowerSelectItemListViewItem__get_SvtId(
             (FollowerSelectItemListViewItem_o *)this,
             *(const MethodInfo **)&kind) < 1
        || LOBYTE(v75->fields.state)
        || BYTE3(v75[1].monitor) )
      {
        goto LABEL_175;
      }
      this = (FollowerRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
      if ( !this )
        goto LABEL_196;
      if ( !BYTE4(this->fields.battleSetupInfo) )
        goto LABEL_100;
      this = (FollowerRootComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      v76 = this;
      v77 = FollowerRootComponent___c_TypeInfo;
      if ( !FollowerRootComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FollowerRootComponent___c_TypeInfo);
        v77 = FollowerRootComponent___c_TypeInfo;
      }
      _9__67_0 = v77->static_fields->__9__67_0;
      if ( !_9__67_0 )
      {
        if ( !v77->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v77);
          v77 = FollowerRootComponent___c_TypeInfo;
        }
        v79 = (Il2CppObject *)v77->static_fields->__9;
        _9__67_0 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
        System_Action___ctor(_9__67_0, v79, Method_FollowerRootComponent___c__OnSelectFollowerItem_b__67_0__, 0);
        static_fields = FollowerRootComponent___c_TypeInfo->static_fields;
        static_fields->__9__67_0 = _9__67_0;
        this = (FollowerRootComponent_o *)sub_1C2D434(&static_fields->__9__67_0);
      }
      if ( !v76 )
        goto LABEL_196;
      if ( PartyOrganizationUtility__OpenQuestUseItemExpiredDialog((PartyOrganizationUtility_o *)v76, _9__67_0, 0) )
        goto LABEL_30;
LABEL_100:
      v81 = Method_FollowerRootComponent_OnSelectFollowerItem__;
      if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
        v81 = (_QWORD *)sub_1C2D4A8(Method_FollowerRootComponent_OnSelectFollowerItem__);
      v82 = (System_Reflection_MethodBase_o *)sub_1C2D474(v81, v81[4]);
      OverwriteAssetSoundName__PlaySystemSe(v82, 0, 0, 0);
      if ( !v8->fields.tutorialState )
        goto LABEL_107;
      v83 = v8->fields.tutorialMode;
      if ( v83 == 3 )
      {
        v8->fields.state = 4;
        v127 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v128 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
        System_Action___ctor(v128, (Il2CppObject *)v8, Method_FollowerRootComponent_EndCloseTutorialArrow__, 0);
        if ( !v127 )
          goto LABEL_196;
        CommonUI__CloseTutorialArrowMark((CommonUI_o *)v127, v128, 0);
      }
      else if ( v83 == 2 )
      {
        this = (FollowerRootComponent_o *)v8->fields.titleInfo;
        if ( this )
        {
          TitleInfoControl__setBackBtnEnable((TitleInfoControl_o *)this, 1, 0);
LABEL_107:
          this = (FollowerRootComponent_o *)v8->fields.myFSM;
          if ( this )
          {
            v84 = &StringLiteral_8648/*"MENU_SELECT_ITEM"*/;
LABEL_147:
            PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v84, 0);
            return;
          }
        }
LABEL_196:
        sub_1C2D6EC(this, *(_QWORD *)&kind);
      }
      return;
  }
}


void FollowerRootComponent__PlayBGM(FollowerRootComponent_o *this, const MethodInfo *method)
{
  FollowerRootComponent_o *v2; // x19
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  int32_t questId; // w20
  BalanceConfig_c *v5; // x0
  QuestPhaseMaster_o *v6; // x20
  struct BattleSetupInfo_o *v7; // x8
  float FormationSubBgmFadeInTime; // s8
  int FormationBgmId; // w20
  System_String_o *BgmFileName; // x21
  _BOOL4 v11; // w23
  char v12; // w22
  FollowerRootComponent_o *v13; // x20
  int32_t FormationSubBgmId; // w0
  int32_t v15; // w20
  const MethodInfo *v16; // x2
  struct EventCampaignEntity_array *friendPointCampaignEntityList; // x8
  System_String_o *BgmName; // x19
  SoundManager_c *v19; // x0
  System_String_o *v20; // x0
  struct BattleSetupInfo_o *v21; // x8
  const MethodInfo *v22; // x2
  FollowerRootComponent_o *v23; // x0
  const MethodInfo *v24; // x2
  QuestMaster_o *v25; // x21
  struct BattleSetupInfo_o *v26; // x8
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  v2 = this;
  if ( (byte_4C21DDC & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&BgmManager_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_BgmMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C2D490(&SoundManager_TypeInfo);
    this = (FollowerRootComponent_o *)sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C21DDC = 1;
  }
  entity = 0;
  battleSetupInfo = v2->fields.battleSetupInfo;
  if ( !battleSetupInfo )
    goto LABEL_70;
  questId = battleSetupInfo->fields.questId;
  v5 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  if ( questId != v5->static_fields->PrologueQuestId )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (FollowerRootComponent_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( !v2->fields.battleSetupInfo )
      goto LABEL_70;
    v6 = (QuestPhaseMaster_o *)this;
    this = (FollowerRootComponent_o *)BattleSetupInfo__TargetQuestId(v2->fields.battleSetupInfo, 0);
    v7 = v2->fields.battleSetupInfo;
    if ( !v7 || !v6 )
      goto LABEL_70;
    FormationSubBgmFadeInTime = 0.0;
    if ( QuestPhaseMaster__TryGetEntity(v6, &entity, (int32_t)this, v7->fields.questPhase, 0) )
    {
      this = (FollowerRootComponent_o *)entity;
      if ( !entity )
        goto LABEL_70;
      FormationBgmId = QuestPhaseEntity__GetFormationBgmId(entity, 0);
      if ( FormationBgmId < 1 )
      {
        BgmFileName = 0;
        v11 = FormationBgmId == 0;
      }
      else
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (FollowerRootComponent_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_BgmMaster___);
        if ( !this )
          goto LABEL_70;
        BgmFileName = BgmMaster__GetBgmFileName(
                        (BgmMaster_o *)this,
                        FormationBgmId,
                        (System_String_o *)StringLiteral_1/*""*/,
                        0);
        v11 = 0;
      }
      this = (FollowerRootComponent_o *)entity;
      if ( !entity )
        goto LABEL_70;
      this = (FollowerRootComponent_o *)QuestPhaseEntity__IsNonStopEndBgm(entity, 0);
      if ( !entity )
        goto LABEL_70;
      v12 = (char)this;
      FormationSubBgmId = QuestPhaseEntity__GetFormationSubBgmId(entity, 0);
      if ( FormationSubBgmId < 0 )
      {
        v13 = 0;
      }
      else
      {
        v15 = FormationSubBgmId;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (FollowerRootComponent_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_BgmMaster___);
        if ( !this )
          goto LABEL_70;
        this = (FollowerRootComponent_o *)BgmMaster__GetBgmFileName(
                                            (BgmMaster_o *)this,
                                            v15,
                                            (System_String_o *)StringLiteral_1/*""*/,
                                            0);
        if ( !entity )
          goto LABEL_70;
        v13 = this;
        FormationSubBgmFadeInTime = QuestPhaseEntity__GetFormationSubBgmFadeInTime(entity, 0);
      }
    }
    else
    {
      v11 = 0;
      v12 = 0;
      v13 = 0;
      BgmFileName = 0;
    }
    this = (FollowerRootComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !this )
      goto LABEL_70;
    this = (FollowerRootComponent_o *)PartyOrganizationUtility__ExistsTemporaryPartyInfo(
                                        (PartyOrganizationUtility_o *)this,
                                        0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !System_String__IsNullOrEmpty(BgmFileName, 0) )
        FollowerRootComponent__SetBackupBgmName(v2, v12 & 1, v16);
      this = (FollowerRootComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( this )
      {
        friendPointCampaignEntityList = this->fields.friendPointCampaignEntityList;
        if ( friendPointCampaignEntityList )
        {
          BgmName = (System_String_o *)friendPointCampaignEntityList->m_Items[1];
          v19 = SoundManager_TypeInfo;
          if ( SoundManager_TypeInfo->_2.cctor_finished )
          {
LABEL_38:
            v20 = BgmName;
LABEL_56:
            SoundManager__playBgm(v20, 0);
LABEL_57:
            FollowerRootComponent__PlaySubBgm(v23, (System_String_o *)v13, FormationSubBgmFadeInTime, v24);
            return;
          }
LABEL_37:
          j_il2cpp_runtime_class_init_0(v19);
          goto LABEL_38;
        }
      }
      goto LABEL_70;
    }
    v21 = v2->fields.battleSetupInfo;
    if ( !v21 )
      goto LABEL_70;
    if ( !v21->fields.isScriptBeforePartySelect )
      goto LABEL_48;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    if ( !SoundManager__isPlayBgm(0, 0) )
      goto LABEL_48;
    if ( !System_String__IsNullOrEmpty(BgmFileName, 0) )
    {
      if ( !BgmManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
      if ( !BgmManager__IsPlayBgm(BgmFileName, 0) )
      {
LABEL_48:
        if ( !System_String__IsNullOrEmpty(BgmFileName, 0) )
        {
          FollowerRootComponent__SetBackupBgmName(v2, v12 & 1, v22);
          if ( !SoundManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          v20 = BgmFileName;
          goto LABEL_56;
        }
        if ( v11 )
        {
          FollowerRootComponent__SetBackupBgmName(v2, v12 & 1, v22);
          if ( !SoundManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          SoundManager__stopBgm(0);
          goto LABEL_57;
        }
        this = (FollowerRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( this )
        {
          this = (FollowerRootComponent_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestMaster___);
          if ( v2->fields.battleSetupInfo )
          {
            v25 = (QuestMaster_o *)this;
            this = (FollowerRootComponent_o *)BattleSetupInfo__TargetQuestId(v2->fields.battleSetupInfo, 0);
            if ( v25 )
            {
              this = (FollowerRootComponent_o *)QuestMaster__getQuestEntity(v25, (int32_t)this, 0);
              v26 = v2->fields.battleSetupInfo;
              if ( v26 )
              {
                if ( this )
                {
                  BgmName = QuestEntity__GetBgmName((QuestEntity_o *)this, v26->fields.warId, 0);
                  if ( System_String__IsNullOrEmpty(BgmName, 0) )
                  {
                    if ( !BgmManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
                    BgmName = BgmManager__GetMainBgmName(1, 0);
                  }
                  v19 = SoundManager_TypeInfo;
                  if ( SoundManager_TypeInfo->_2.cctor_finished )
                    goto LABEL_38;
                  goto LABEL_37;
                }
              }
            }
          }
        }
LABEL_70:
        sub_1C2D6EC(this, method);
      }
    }
  }
}


void FollowerRootComponent__PlaySubBgm(
        FollowerRootComponent_o *this,
        System_String_o *subBgmName,
        float fadeTime,
        const MethodInfo *method)
{
  if ( (byte_4C21DDB & 1) == 0 )
  {
    sub_1C2D490(&SoundManager_TypeInfo);
    byte_4C21DDB = 1;
  }
  if ( !System_String__IsNullOrEmpty(subBgmName, 0) )
  {
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__PlaySubBgm(subBgmName, fadeTime, 0);
  }
}


void FollowerRootComponent__Quit(FollowerRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x0

  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager
    || (FollowerSelectItemListViewManager__DestroyList_32440444(operationItemListViewManager, 0, v2),
        (operationItemListViewManager = this->fields.operationItemListViewManager) == 0)
    || (operationItemListViewManager = (FollowerSelectItemListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                                (UnityEngine_Component_o *)operationItemListViewManager,
                                                                                0)) == 0 )
  {
    sub_1C2D6EC(operationItemListViewManager, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)operationItemListViewManager, 0, 0);
  this->fields.state = 0;
}


void FollowerRootComponent__RequestFollowerList(FollowerRootComponent_o *this, const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v3; // x20
  FollowerListRequest_o *Request_object; // x0
  __int64 v5; // x1
  FollowerListRequest_o *v6; // x20
  struct BattleSetupInfo_o *battleSetupInfo; // x8

  if ( (byte_4C21DE5 & 1) == 0 )
  {
    sub_1C2D490(&Method_FollowerRootComponent_CallbackFollowerList__);
    sub_1C2D490(&Method_NetworkManager_getRequest_FollowerListRequest___);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C2D490(&StringLiteral_11077/*"REQUEST_OK"*/);
    byte_4C21DE5 = 1;
  }
  v3 = (NetworkManager_ResultCallbackFunc_o *)sub_1C2D6DC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v3,
    (Il2CppObject *)this,
    Method_FollowerRootComponent_CallbackFollowerList__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = (FollowerListRequest_o *)NetworkManager__getRequest_object_(
                                              v3,
                                              (const MethodInfo_31599E8 *)Method_NetworkManager_getRequest_FollowerListRequest___);
  if ( !Request_object )
    goto LABEL_12;
  v6 = Request_object;
  if ( (((__int64 (__fastcall *)(FollowerListRequest_o *, const MethodInfo *))Request_object->klass->vtable._7_checkExpirationDate.methodPtr)(
          Request_object,
          Request_object->klass->vtable._7_checkExpirationDate.method)
      & 1) != 0 )
  {
    Request_object = (FollowerListRequest_o *)this->fields.myFSM;
    if ( Request_object )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Request_object, (System_String_o *)StringLiteral_11077/*"REQUEST_OK"*/, 0);
      return;
    }
LABEL_12:
    sub_1C2D6EC(Request_object, v5);
  }
  Request_object = (FollowerListRequest_o *)this->fields.battleSetupInfo;
  if ( !Request_object )
    goto LABEL_12;
  Request_object = (FollowerListRequest_o *)BattleSetupInfo__TargetQuestId((BattleSetupInfo_o *)Request_object, 0);
  battleSetupInfo = this->fields.battleSetupInfo;
  if ( !battleSetupInfo )
    goto LABEL_12;
  FollowerListRequest__beginRequest(v6, 0, (int32_t)Request_object, battleSetupInfo->fields.questPhase, 0);
}


bool FollowerRootComponent__ReturnBattleSetupMenu(FollowerRootComponent_o *this, const MethodInfo *method)
{
  FollowerRootComponent_o *v2; // x20
  struct BattleSetupInfo_o *battleSetupInfo; // x19

  v2 = this;
  if ( (byte_4C21DF2 & 1) == 0 )
  {
    this = (FollowerRootComponent_o *)sub_1C2D490(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C21DF2 = 1;
  }
  battleSetupInfo = v2->fields.battleSetupInfo;
  v2->fields.state = 5;
  if ( !battleSetupInfo )
    goto LABEL_8;
  if ( battleSetupInfo->fields.isChildFollower )
    battleSetupInfo->fields.followerId = 0;
  this = (FollowerRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !this )
LABEL_8:
    sub_1C2D6EC(this, method);
  AvalonSceneManager__pushScene((AvalonSceneManager_o *)this, 40, 1, (Il2CppObject *)battleSetupInfo, 0);
  return 1;
}


bool FollowerRootComponent__ReturnQuestMenu(FollowerRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *battleSetupInfo; // x20
  System_String_o *backupBgmName; // x22
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  TerminalPramsManager_c *v7; // x0

  if ( (byte_4C21DF1 & 1) == 0 )
  {
    sub_1C2D490(&Method_AvalonSceneManager_UnloadScene_PartyOrganizationRootComponent___);
    sub_1C2D490(&QuestHintDialogOpenManager_TypeInfo);
    sub_1C2D490(&RandomLimitCountManager_TypeInfo);
    sub_1C2D490(&ScriptManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C2D490(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C2D490(&SoundManager_TypeInfo);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C21DF1 = 1;
  }
  battleSetupInfo = (Il2CppObject *)this->fields.battleSetupInfo;
  if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
  QuestHintDialogOpenManager__ResetTemporarilyId(0);
  if ( !System_String__IsNullOrEmpty(this->fields.backupBgmName, 0) )
  {
    backupBgmName = this->fields.backupBgmName;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__playBgm(backupBgmName, 0);
  }
  this->fields.battleSetupInfo = 0;
  sub_1C2D434(&this->fields.battleSetupInfo);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__ClearSelectRouteArray(0);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  if ( BYTE6(Instance[11].klass) )
  {
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_31;
    BYTE6(Instance[11].klass) = 0;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C21ACD )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C21ACD = 1;
    }
    v7 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v7 = TerminalPramsManager_TypeInfo;
    }
    v7->static_fields->_IsAutoResume_k__BackingField = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  if ( AvalonSceneManager__IsStackScene((AvalonSceneManager_o *)Instance, 0) )
  {
    this->fields.state = 0;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_31;
    AvalonSceneManager__popSceneRefresh((AvalonSceneManager_o *)Instance, 1, battleSetupInfo, 0);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_31;
    AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0, 0, 0);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
LABEL_31:
    sub_1C2D6EC(Instance, v6);
  AvalonSceneManager__UnloadScene_object_(
    (AvalonSceneManager_o *)Instance,
    (const MethodInfo_30B6718 *)Method_AvalonSceneManager_UnloadScene_PartyOrganizationRootComponent___);
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  RandomLimitCountManager__set_EnableRandomLimitCount(0, 0);
  return 1;
}


void FollowerRootComponent__ReturnSupportList(FollowerRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t state; // w8
  const MethodInfo *v5; // x3
  __int64 operationItemListViewManager; // x0
  struct FollowerSelectItemListViewManager_o *v7; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v8; // x21
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x2
  FollowerSelectItemListViewManager_o *v11; // x20
  FollowerSelectItemListViewManager_c *v12; // x0
  struct FollowerSelectItemListViewManager_o *v13; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x8
  struct FollowerSelectItemListViewManager_o *v15; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v16; // x21
  const MethodInfo *v17; // x2
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  FollowerQuestInfomationDraw_o *followerQuestInfomationDraw; // x20
  QuestRestrictionInfo_o *questRestrictionInfo; // x21
  const MethodInfo *v21; // x4
  CommonUI_o *v22; // x20

  if ( (byte_4C21DE3 & 1) == 0 )
  {
    sub_1C2D490(&AvalonSceneManager_TypeInfo);
    sub_1C2D490(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_FollowerRootComponent_OnSelectFollowerItem__);
    sub_1C2D490(&RandomLimitCountManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4C21DE3 = 1;
  }
  state = this->fields.state;
  this->fields.state = 3;
  if ( state == 5 )
  {
    if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    RandomLimitCountManager__set_EnableRandomLimitCount(0, 0);
    RandomLimitCountManager__set_EnableRandomLimitCount(1, 0);
    operationItemListViewManager = (__int64)this->fields.operationItemListViewManager;
    if ( !operationItemListViewManager )
      goto LABEL_30;
    FollowerSelectItemListViewManager__ModifyList(
      (FollowerSelectItemListViewManager_o *)operationItemListViewManager,
      this->fields.friendPointUpVal,
      this->fields.friendPointUpMaxVal,
      v5);
    v7 = this->fields.operationItemListViewManager;
    v8 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1C2D6DC(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    FollowerSelectItemListViewManager_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
      0);
    if ( !v7 )
      goto LABEL_30;
    v7->fields.callbackFunc = v8;
    sub_1C2D434(&v7->fields.callbackFunc);
    FollowerSelectItemListViewManager__SetMode_32512280(v7, 3, v9);
    v11 = this->fields.operationItemListViewManager;
    if ( !v11 )
      goto LABEL_30;
    if ( !byte_4C21E5E )
    {
      sub_1C2D490(&FollowerSelectItemListViewManager_TypeInfo);
      byte_4C21E5E = 1;
    }
    v12 = FollowerSelectItemListViewManager_TypeInfo;
    if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
      v12 = FollowerSelectItemListViewManager_TypeInfo;
    }
    operationItemListViewManager = FollowerSelectItemListViewManager__ChangeClass(
                                     v11,
                                     v12->static_fields->followerClassId,
                                     v10);
    v13 = this->fields.operationItemListViewManager;
    if ( !v13 )
LABEL_30:
      sub_1C2D6EC(operationItemListViewManager, method);
    if ( (byte_4C21E5C & 1) == 0 )
    {
      operationItemListViewManager = sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
      byte_4C21E5C = 1;
    }
    itemSortList = v13->fields.itemSortList;
    if ( itemSortList && itemSortList->fields._size >= 3 )
    {
      operationItemListViewManager = (__int64)this->fields.operationItemListViewManager;
      if ( !operationItemListViewManager )
        goto LABEL_30;
      ListViewManager__JumpItem((ListViewManager_o *)operationItemListViewManager, this->fields.selectItemNum, 0);
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
    v15 = this->fields.operationItemListViewManager;
    v16 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1C2D6DC(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    FollowerSelectItemListViewManager_CallbackFunc___ctor(
      v16,
      (Il2CppObject *)this,
      (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
      0);
    if ( !v15 )
      goto LABEL_30;
    v15->fields.callbackFunc = v16;
    sub_1C2D434(&v15->fields.callbackFunc);
    FollowerSelectItemListViewManager__SetMode_32512280(v15, 2, v17);
  }
  battleSetupInfo = this->fields.battleSetupInfo;
  if ( !battleSetupInfo )
    goto LABEL_30;
  followerQuestInfomationDraw = this->fields.followerQuestInfomationDraw;
  questRestrictionInfo = battleSetupInfo->fields.questRestrictionInfo;
  operationItemListViewManager = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !operationItemListViewManager || !followerQuestInfomationDraw )
    goto LABEL_30;
  FollowerQuestInfomationDraw__SetInfomation(
    followerQuestInfomationDraw,
    questRestrictionInfo,
    *(_DWORD *)(operationItemListViewManager + 64),
    0,
    v21);
  operationItemListViewManager = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v22 = (CommonUI_o *)operationItemListViewManager;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v22 )
    goto LABEL_30;
  CommonUI__maskFadein(v22, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0);
  SceneRootComponent__sendMessageResume((SceneRootComponent_o *)this, 0);
}


void FollowerRootComponent__SelectShowServant(
        FollowerRootComponent_o *this,
        FollowerSelectItemListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewManager_o *operationItemListViewManager; // x0
  CommonUI_o *v6; // x21
  ServantLeaderInfo_o *ServantLeader; // x20
  ServantStatusDialog_EndDelegate_o *v8; // x22

  if ( (byte_4C21DEB & 1) == 0 )
  {
    sub_1C2D490(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C2D490(&Method_FollowerRootComponent_EndShowServant__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C21DEB = 1;
  }
  operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager
    || (ListViewManager__GetScrollView(
          operationItemListViewManager,
          &this->fields.openScroll,
          &this->fields.openOffset,
          0),
        operationItemListViewManager = (ListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        !item)
    || (v6 = (CommonUI_o *)operationItemListViewManager,
        ServantLeader = FollowerSelectItemListViewItem__get_ServantLeader(item, (const MethodInfo *)item),
        v8 = (ServantStatusDialog_EndDelegate_o *)sub_1C2D6DC(ServantStatusDialog_EndDelegate_TypeInfo),
        ServantStatusDialog_EndDelegate___ctor(
          v8,
          (Il2CppObject *)this,
          Method_FollowerRootComponent_EndShowServant__,
          0),
        !v6) )
  {
    sub_1C2D6EC(operationItemListViewManager, item);
  }
  CommonUI__OpenServantStatusDialog_31180036(v6, 5, ServantLeader, v8, 0);
}


void FollowerRootComponent__SelectShowServantEquip(
        FollowerRootComponent_o *this,
        EquipTargetInfo_o *equipInfo,
        int32_t statusKind,
        const MethodInfo *method)
{
  ListViewManager_o *operationItemListViewManager; // x0
  Il2CppObject *Instance; // x22
  ServantStatusDialog_EndDelegate_o *v9; // x23

  if ( (byte_4C21DEE & 1) == 0 )
  {
    sub_1C2D490(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C2D490(&Method_FollowerRootComponent_EndShowServantEquip__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C21DEE = 1;
  }
  operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager
    || (ListViewManager__GetScrollView(
          operationItemListViewManager,
          &this->fields.openScroll,
          &this->fields.openOffset,
          0),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v9 = (ServantStatusDialog_EndDelegate_o *)sub_1C2D6DC(ServantStatusDialog_EndDelegate_TypeInfo),
        ServantStatusDialog_EndDelegate___ctor(
          v9,
          (Il2CppObject *)this,
          Method_FollowerRootComponent_EndShowServantEquip__,
          0),
        !Instance) )
  {
    sub_1C2D6EC(operationItemListViewManager, equipInfo);
  }
  CommonUI__OpenServantEquipStatusDialog_31183144((CommonUI_o *)Instance, statusKind, equipInfo, v9, 0, 0);
}


void FollowerRootComponent__SetBackupBgmName(
        FollowerRootComponent_o *this,
        bool isNonStopEndBgm,
        const MethodInfo *method)
{
  if ( (byte_4C21DDD & 1) == 0 )
  {
    sub_1C2D490(&SoundManager_TypeInfo);
    byte_4C21DDD = 1;
  }
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  if ( SoundManager__isPlayBgm(0, 0) && !isNonStopEndBgm )
  {
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    this->fields.backupBgmName = SoundManager__getBgmName(0);
    sub_1C2D434(&this->fields.backupBgmName);
  }
}


bool FollowerRootComponent__SetFollowerBase(UISprite_o *sprite, System_String_o *spriteName, const MethodInfo *method)
{
  FollowerRootComponent_c *v5; // x0
  UIAtlas_o *partyOrganizationAtlasCache; // x21

  if ( (byte_4C21DD8 & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&FollowerRootComponent_TypeInfo);
    byte_4C21DD8 = 1;
  }
  v5 = FollowerRootComponent_TypeInfo;
  if ( !FollowerRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerRootComponent_TypeInfo);
    v5 = FollowerRootComponent_TypeInfo;
  }
  partyOrganizationAtlasCache = v5->static_fields->partyOrganizationAtlasCache;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  return AtlasManager__SetGradeBase(sprite, spriteName, partyOrganizationAtlasCache, 0);
}


bool FollowerRootComponent__StartBattleSetupMenu(FollowerRootComponent_o *this, const MethodInfo *method)
{
  void *Instance; // x0
  __int64 followerId; // x1
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x5
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  int32_t ItemIndex_32450348; // w0
  __int64 v9; // x2
  __int64 v10; // x9
  struct BattleSetupInfo_o *v11; // x8
  int64_t v12; // x10
  int32_t v13; // w10
  __int64 v14; // x10
  __int64 v15; // x10
  int32_t v16; // w9
  Il2CppObject *v17; // x19

  if ( (byte_4C21DF3 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C2D490(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4C21DF3 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  Instance = (void *)PartyOrganizationUtility__ExistsTemporaryPartyInfo((PartyOrganizationUtility_o *)Instance, 0);
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
      ItemIndex_32450348 = FollowerSelectItemListViewManager__GetItemIndex_32450348(
                             (FollowerSelectItemListViewManager_o *)Instance,
                             followerId,
                             battleSetupInfo->fields.followerClassId,
                             battleSetupInfo->fields.followerSupportDeckId,
                             battleSetupInfo->fields.followerGrandGraphId,
                             v6);
      this->fields.selectItemNum = ItemIndex_32450348 & ~(ItemIndex_32450348 >> 31);
    }
    goto LABEL_28;
  }
  battleSetupInfo->fields.followerId = 0;
  followerId = (unsigned int)this->fields.selectItemNum;
  if ( (followerId & 0x80000000) == 0 )
  {
    Instance = this->fields.operationItemListViewManager;
    if ( !Instance )
      goto LABEL_31;
    Instance = FollowerSelectItemListViewManager__GetItem(
                 (FollowerSelectItemListViewManager_o *)Instance,
                 followerId,
                 v5);
    if ( Instance )
    {
      v10 = *((_QWORD *)Instance + 15);
      v11 = this->fields.battleSetupInfo;
      if ( v10 )
      {
        v12 = *(_QWORD *)(v10 + 16);
        if ( !v11 )
          goto LABEL_31;
      }
      else
      {
        v12 = 0;
        if ( !v11 )
          goto LABEL_31;
      }
      v11->fields.followerId = v12;
      v13 = *((_DWORD *)Instance + 33);
      if ( v13 )
        v13 = *((_DWORD *)Instance + 32);
      v11->fields.followerClassId = v13;
      v11->fields.followerGrandGraphId = *((_DWORD *)Instance + 62);
      v11->fields.followerSupportDeckId = *((_DWORD *)Instance + 68);
      if ( !*((_BYTE *)Instance + 244) )
      {
        v11->fields.recommendSupportIdx = 0;
        if ( !v10 )
        {
          v11->fields.followerType = 0;
          goto LABEL_28;
        }
        goto LABEL_25;
      }
      if ( v10 )
      {
        v14 = *(_QWORD *)(v10 + 56);
        if ( v14 )
        {
          if ( !*(_DWORD *)(v14 + 24) )
            sub_1C2D6F4(Instance, followerId, v9);
          v15 = *(_QWORD *)(v14 + 32);
          if ( v15 )
          {
            v11->fields.recommendSupportIdx = *(_DWORD *)(v15 + 24);
LABEL_25:
            v16 = *(_DWORD *)(v10 + 36);
            v11->fields.followerType = 0;
            if ( v16 == 5 || v16 == 1 )
              v11->fields.followerType = v16;
            goto LABEL_28;
          }
        }
      }
LABEL_31:
      sub_1C2D6EC(Instance, followerId);
    }
  }
LABEL_28:
  this->fields.state = 5;
  v17 = (Il2CppObject *)this->fields.battleSetupInfo;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  AvalonSceneManager__pushScene((AvalonSceneManager_o *)Instance, 40, 1, v17, 0);
  return 1;
}


bool FollowerRootComponent__StartSupportInfoMenu(FollowerRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 selectItemNum; // x1
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x0
  FollowerSelectItemListViewItem_o *Item; // x0
  FollowerSelectItemListViewItem_o *v7; // x20
  __int64 v8; // x2
  Il2CppClass *klass; // x8
  int namespaze; // w9
  int v11; // w10
  FollowerInfo_o *v12; // x22
  struct FollowerInfo_o *followerInfo; // x11
  Il2CppClass *v14; // x8
  const char *v15; // x9
  int v16; // w10
  FollowerInfo_o *v17; // x21
  struct FollowerInfo_o *userId; // x11
  bool v19; // w22
  SupportInfoJump_o *v21; // x21
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  struct FollowerSelectItemListViewManager_FollowerSelectItemOption_o *Option_k__BackingField; // x8
  _BOOL4 IsGrandSvt_k__BackingField; // w19
  int32_t v25; // w1
  Il2CppObject *v26; // x3
  SupportInfoJump_o *v27; // x20
  struct BattleSetupInfo_o *v28; // x8
  Il2CppObject *v29; // [xsp+8h] [xbp-38h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4C21DF4 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_PickupUserFollowerMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserFollowerMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long__TryGetSingleEntity__);
    sub_1C2D490(&Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long__TryGetSingleEntity__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C2D490(&SupportInfoJump_TypeInfo);
    byte_4C21DF4 = 1;
  }
  entity = 0;
  v29 = 0;
  selectItemNum = (unsigned int)this->fields.selectItemNum;
  if ( (selectItemNum & 0x80000000) == 0 )
  {
    operationItemListViewManager = this->fields.operationItemListViewManager;
    if ( !operationItemListViewManager )
      goto LABEL_50;
    Item = FollowerSelectItemListViewManager__GetItem(operationItemListViewManager, selectItemNum, v2);
    if ( Item )
    {
      v7 = Item;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      operationItemListViewManager = (FollowerSelectItemListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserFollowerMaster___);
      if ( !operationItemListViewManager )
        goto LABEL_50;
      operationItemListViewManager = (FollowerSelectItemListViewManager_o *)DataMasterBase_object__object__long___TryGetSingleEntity(
                                                                              (DataMasterBase_TMaster__TEntity__PKType__o *)operationItemListViewManager,
                                                                              &entity,
                                                                              (const MethodInfo_338A420 *)Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long__TryGetSingleEntity__);
      if ( ((unsigned __int8)operationItemListViewManager & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_50;
        klass = entity[1].klass;
        if ( !klass )
          goto LABEL_50;
        namespaze = (int)klass->_1.namespaze;
        if ( namespaze >= 1 )
        {
          v11 = 0;
          while ( 1 )
          {
            if ( namespaze == v11 )
              sub_1C2D6F4(operationItemListViewManager, selectItemNum, v8);
            v12 = (FollowerInfo_o *)*((_QWORD *)&klass->_1.byval_arg.data + v11);
            if ( !v12 )
              goto LABEL_50;
            followerInfo = v7->fields.followerInfo;
            if ( followerInfo )
              followerInfo = (struct FollowerInfo_o *)followerInfo->fields.userId;
            if ( (struct FollowerInfo_o *)v12->fields.userId == followerInfo )
              break;
            if ( namespaze == ++v11 )
              goto LABEL_20;
          }
          this->fields.state = 6;
          v21 = (SupportInfoJump_o *)sub_1C2D6DC(SupportInfoJump_TypeInfo);
          SupportInfoJump___ctor_41304864(v21, v12, 0, 1, 0);
          battleSetupInfo = this->fields.battleSetupInfo;
          if ( battleSetupInfo )
          {
            if ( v21 )
            {
              SupportInfoJump__SetSetupInfo(
                v21,
                battleSetupInfo->fields.eventUpValSetupInfo,
                battleSetupInfo->fields.questRestrictionInfo,
                0);
              Option_k__BackingField = v7->fields._Option_k__BackingField;
              if ( Option_k__BackingField )
              {
                SupportInfoJump__SetIsUseGrandSupport(v21, Option_k__BackingField->fields.isUseGrandBoard, 0);
                IsGrandSvt_k__BackingField = v7->fields._IsGrandSvt_k__BackingField;
                operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
                if ( operationItemListViewManager )
                {
                  if ( IsGrandSvt_k__BackingField )
                    v25 = 43;
                  else
                    v25 = 60;
                  v19 = 1;
                  v26 = (Il2CppObject *)v21;
                  goto LABEL_49;
                }
              }
            }
          }
          goto LABEL_50;
        }
      }
LABEL_20:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      operationItemListViewManager = (FollowerSelectItemListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_PickupUserFollowerMaster___);
      if ( !operationItemListViewManager )
        goto LABEL_50;
      operationItemListViewManager = (FollowerSelectItemListViewManager_o *)DataMasterBase_object__object__long___TryGetSingleEntity(
                                                                              (DataMasterBase_TMaster__TEntity__PKType__o *)operationItemListViewManager,
                                                                              &v29,
                                                                              (const MethodInfo_338A420 *)Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long__TryGetSingleEntity__);
      if ( ((unsigned __int8)operationItemListViewManager & 1) != 0 )
      {
        if ( !v29 )
          goto LABEL_50;
        v14 = v29[1].klass;
        if ( v14 )
        {
          v15 = v14->_1.namespaze;
          if ( v15 )
          {
            if ( (int)v15 >= 1 )
            {
              v16 = 0;
              while ( 1 )
              {
                v17 = (FollowerInfo_o *)*((_QWORD *)&v14->_1.byval_arg.data + v16);
                if ( !v17 )
                  goto LABEL_50;
                userId = v7->fields.followerInfo;
                if ( userId )
                  userId = (struct FollowerInfo_o *)userId->fields.userId;
                if ( (struct FollowerInfo_o *)v17->fields.userId == userId )
                  break;
                ++v16;
                v19 = 0;
                if ( (_DWORD)v15 == v16 )
                  return v19;
              }
              this->fields.state = 6;
              v27 = (SupportInfoJump_o *)sub_1C2D6DC(SupportInfoJump_TypeInfo);
              SupportInfoJump___ctor_41304864(v27, v17, 0, 1, 0);
              v28 = this->fields.battleSetupInfo;
              if ( v28 )
              {
                if ( v27 )
                {
                  SupportInfoJump__SetSetupInfo(
                    v27,
                    v28->fields.eventUpValSetupInfo,
                    v28->fields.questRestrictionInfo,
                    0);
                  operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
                  if ( operationItemListViewManager )
                  {
                    v25 = 60;
                    v19 = 1;
                    v26 = (Il2CppObject *)v27;
LABEL_49:
                    AvalonSceneManager__pushScene((AvalonSceneManager_o *)operationItemListViewManager, v25, 1, v26, 0);
                    return v19;
                  }
                }
              }
LABEL_50:
              sub_1C2D6EC(operationItemListViewManager, selectItemNum);
            }
          }
        }
      }
    }
  }
  return 0;
}


void FollowerRootComponent__UpdateDeckInfomation(FollowerRootComponent_o *this, const MethodInfo *method)
{
  __int64 Instance; // x0
  System_Int64_array *v4; // x1
  Il2CppObject *MasterData_object; // x20
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  struct BattleSetupInfo_o *v7; // x8
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  Il2CppObject *Master_object; // x21
  EventQuestMaster_o *v10; // x22
  struct BattleSetupInfo_o *v11; // x8
  struct BattleSetupInfo_o *v12; // x8
  int32_t i; // w20
  BalanceConfig_c *v14; // x0
  PartyOrganizationListViewItem_o *Member; // x0
  PartyOrganizationListViewItem_o *v16; // x21
  FollowerRootComponent_o *FriendPointUpTypeVals; // x0
  const MethodInfo *v18; // x4
  struct BattleSetupInfo_o *v19; // x8
  QuestRestrictionInfo_o *v20; // x0
  struct BattleSetupInfo_o *v21; // x8
  struct BattleSetupInfo_o *v22; // x8
  Il2CppObject *v23; // x20
  struct BattleSetupInfo_o *v24; // x8
  int32_t eventId; // w22
  int64_t v26; // x21
  struct BattleSetupInfo_o *v27; // x8
  __int64 v28; // x2
  UserEventDeckEntity_o *v29; // x20
  __int64 v30; // x8
  int64_t currentCryptoKey; // x8
  int32_t v32; // w1
  System_Nullable_int__o v33; // x0
  struct BattleSetupInfo_o *v34; // x9
  struct QuestRestrictionInfo_o *v35; // x9
  int32_t j; // w21
  PartyOrganizationListViewItem_o *v37; // x0
  PartyOrganizationListViewItem_o *v38; // x22
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v40; // q0
  System_Int64_array *v41; // x23
  int32_t InitPos_k__BackingField; // w24
  int64_t v43; // x0
  const MethodInfo *v44; // x3
  System_Int64_array *v45; // x1
  FollowerRootComponent_o *v46; // x0
  const MethodInfo *v47; // x4
  UserServantEntity_array *UserServantList; // x21
  unsigned __int64 v49; // x22
  UserServantEntity_o **m_Items; // x24
  struct DeckServant_o *deckInfo; // x8
  struct DeckServantData_array *svts; // x8
  DeckServantData_o *v53; // x26
  const MethodInfo *v54; // x3
  System_Int64_array *v55; // x23
  FollowerRootComponent_o *v56; // x0
  const MethodInfo *v57; // x4
  int32_t k; // w20
  BalanceConfig_c *v59; // x0
  UserServantEntity_o *UserServant; // x0
  UserServantEntity_o *v61; // x21
  System_Int64_array *EquipList; // x0
  FollowerRootComponent_o *v63; // x0
  const MethodInfo *v64; // x4
  int32_t v65; // w21
  int32_t v66; // w21
  struct BattleSetupInfo_o *v67; // x8
  struct BattleSetupInfo_o *v68; // x8
  int32_t v69; // w8
  int32_t v70; // w9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v71; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v72; // [xsp+20h] [xbp-80h] BYREF
  int32_t fpUpDuplicateSum[2]; // [xsp+40h] [xbp-60h] BYREF
  Il2CppObject *entity; // [xsp+48h] [xbp-58h] BYREF

  if ( (byte_4C21DEA & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserDeckMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserEventDeckMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_EventQuestMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__TryGetEntity__);
    sub_1C2D490(&LastUsedDeckNumberManager_TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_1C2D490(&Method_System_Nullable_int___ctor__);
    sub_1C2D490(&Method_System_Nullable_int__get_HasValue__);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&OptionManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4C21DEA = 1;
  }
  *(_QWORD *)fpUpDuplicateSum = 0;
  entity = 0;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_136;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  Instance = OptionManager__GetAutoSelectParty(0);
  if ( (Instance & 1) == 0 )
    goto LABEL_9;
  Instance = (__int64)this->fields.battleSetupInfo;
  if ( !Instance )
    goto LABEL_136;
  if ( *(_BYTE *)(Instance + 74) )
    goto LABEL_9;
  v65 = BattleSetupInfo__TargetQuestId((BattleSetupInfo_o *)Instance, 0);
  if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
  Instance = LastUsedDeckNumberManager__GetDeckNumber(v65, 0);
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
                 (const MethodInfo_338A340 *)Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__TryGetEntity__);
  }
  else
  {
    v66 = Instance;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C211E1 )
    {
      sub_1C2D490(&NetworkManager_TypeInfo);
      byte_4C211E1 = 1;
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
                          v66,
                          0);
    entity = (Il2CppObject *)Instance;
  }
  v7 = this->fields.battleSetupInfo;
  if ( !v7 )
    goto LABEL_136;
  questRestrictionInfo = v7->fields.questRestrictionInfo;
  if ( questRestrictionInfo )
    QuestRestrictionInfo__SetDeckInfo(questRestrictionInfo, (UserDeckEntity_o *)entity, 0);
  this->fields.friendPointCampaignEntityList = 0;
  *(_QWORD *)&this->fields.friendPointUpVal = 0;
  sub_1C2D434(&this->fields.friendPointCampaignEntityList);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventCampaignMaster___);
  Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventQuestMaster___);
  if ( !this->fields.battleSetupInfo )
    goto LABEL_136;
  v10 = (EventQuestMaster_o *)Instance;
  Instance = BattleSetupInfo__TargetQuestId(this->fields.battleSetupInfo, 0);
  v11 = this->fields.battleSetupInfo;
  if ( !v11 )
    goto LABEL_136;
  if ( !v10 )
    goto LABEL_136;
  Instance = (__int64)EventQuestMaster__GetEnabledEventCampaignForQuest(v10, Instance, v11->fields.questPhase, 0, 7, 0);
  if ( !Master_object )
    goto LABEL_136;
  this->fields.friendPointCampaignEntityList = EventCampaignMaster__getData_41710592(
                                                 (EventCampaignMaster_o *)Master_object,
                                                 24,
                                                 (EventEntity_array *)Instance,
                                                 0);
  Instance = sub_1C2D434(&this->fields.friendPointCampaignEntityList);
  *(_QWORD *)fpUpDuplicateSum = 0;
  if ( this->fields.tutorialMode == 4 )
  {
    v12 = this->fields.battleSetupInfo;
    if ( !v12 )
      goto LABEL_136;
    if ( v12->fields.isChildFollower )
    {
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_136;
      if ( *(_QWORD *)(Instance + 80) )
      {
        for ( i = 0; ; ++i )
        {
          v14 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v14 = BalanceConfig_TypeInfo;
          }
          if ( i >= v14->static_fields->DeckMemberMax )
            break;
          Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( !Instance )
            goto LABEL_136;
          Instance = *(_QWORD *)(Instance + 80);
          if ( !Instance )
            goto LABEL_136;
          Member = PartyListViewItem__GetMember((PartyListViewItem_o *)Instance, i, 0);
          if ( Member )
          {
            v16 = Member;
            if ( Member->fields.userServantEntity )
            {
              Instance = (__int64)PartyOrganizationListViewItem__GetEquipList(Member, 0);
              if ( !v16->fields.userServantEntity )
                goto LABEL_136;
              FriendPointUpTypeVals = (FollowerRootComponent_o *)UserServantEntity__GetFriendPointUpTypeVals(
                                                                   v16->fields.userServantEntity,
                                                                   (System_Int64_array *)Instance,
                                                                   0);
              FollowerRootComponent__GetFriendPointUpValSummary(
                FriendPointUpTypeVals,
                &fpUpDuplicateSum[1],
                fpUpDuplicateSum,
                (System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int___o *)FriendPointUpTypeVals,
                v18);
            }
          }
        }
        goto LABEL_132;
      }
    }
  }
  v19 = this->fields.battleSetupInfo;
  if ( !v19 )
LABEL_136:
    sub_1C2D6EC(Instance, v4);
  v20 = v19->fields.questRestrictionInfo;
  if ( v20 )
  {
    Instance = QuestRestrictionInfo__IsServantNum(v20, 0);
    if ( (Instance & 1) != 0 )
      goto LABEL_46;
    v21 = this->fields.battleSetupInfo;
    if ( !v21 )
      goto LABEL_136;
    Instance = (__int64)v21->fields.questRestrictionInfo;
    if ( !Instance )
      goto LABEL_136;
    Instance = QuestRestrictionInfo__IsNpcMulitipleOrOnly((QuestRestrictionInfo_o *)Instance, 0);
    if ( (Instance & 1) != 0 )
      goto LABEL_46;
    v22 = this->fields.battleSetupInfo;
    if ( !v22 )
      goto LABEL_136;
    Instance = (__int64)v22->fields.questRestrictionInfo;
    if ( !Instance )
      goto LABEL_136;
    if ( *(int *)(Instance + 412) >= 1 )
    {
LABEL_46:
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_136;
      v23 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserEventDeckMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C211E1 )
      {
        sub_1C2D490(&NetworkManager_TypeInfo);
        byte_4C211E1 = 1;
      }
      Instance = (__int64)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (__int64)NetworkManager_TypeInfo;
      }
      v24 = this->fields.battleSetupInfo;
      if ( !v24 )
        goto LABEL_136;
      eventId = v24->fields.eventId;
      v26 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL);
      Instance = BattleSetupInfo__TargetQuestId(this->fields.battleSetupInfo, 0);
      v27 = this->fields.battleSetupInfo;
      if ( !v27 )
        goto LABEL_136;
      if ( !v23 )
        goto LABEL_136;
      Instance = (__int64)UserEventDeckMaster__getDeckList(
                            (UserEventDeckMaster_o *)v23,
                            v26,
                            eventId,
                            Instance,
                            v27->fields.questPhase,
                            0,
                            0);
      if ( !Instance )
        goto LABEL_136;
      if ( !*(_DWORD *)(Instance + 24) )
LABEL_137:
        sub_1C2D6F4(Instance, v4, v28);
      v29 = *(UserEventDeckEntity_o **)(Instance + 32);
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_136;
      if ( !*(_QWORD *)(Instance + 80) )
        goto LABEL_85;
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_136;
      v30 = *(_QWORD *)(Instance + 80);
      if ( !v30 )
        goto LABEL_136;
      currentCryptoKey = *(_QWORD *)(v30 + 176);
      if ( currentCryptoKey )
      {
        v32 = *(_DWORD *)(currentCryptoKey + 412);
        v33 = (System_Nullable_int__o)&v72;
        v72.fields.currentCryptoKey = 0;
        System_Nullable_int____ctor(v33, v32, (const MethodInfo_38AF304 *)Method_System_Nullable_int___ctor__);
        currentCryptoKey = v72.fields.currentCryptoKey;
      }
      v34 = this->fields.battleSetupInfo;
      if ( !v34 )
        goto LABEL_136;
      v35 = v34->fields.questRestrictionInfo;
      if ( !v35 )
        goto LABEL_136;
      if ( (_BYTE)currentCryptoKey && v35->fields.eventDeckNum == HIDWORD(currentCryptoKey) )
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
          Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( !Instance )
            goto LABEL_136;
          Instance = *(_QWORD *)(Instance + 80);
          if ( !Instance )
            goto LABEL_136;
          v37 = PartyListViewItem__GetMember((PartyListViewItem_o *)Instance, j, 0);
          if ( v37 )
          {
            v38 = v37;
            if ( v37->fields.userServantEntity )
            {
              Instance = (__int64)PartyOrganizationListViewItem__GetEquipList(v37, 0);
              userServantEntity = v38->fields.userServantEntity;
              if ( !userServantEntity )
                goto LABEL_136;
              v40 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
              v41 = (System_Int64_array *)Instance;
              InitPos_k__BackingField = v38->fields._InitPos_k__BackingField;
              *(_OWORD *)&v72.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
              *(_OWORD *)&v72.fields.fakeValue = v40;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
              v71 = v72;
              v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v71, 0);
              Instance = (__int64)FollowerRootComponent__GetEquipIdsForGrandSvt(this, InitPos_k__BackingField, v43, v44);
              if ( !v38->fields.userServantEntity )
                goto LABEL_136;
              if ( Instance )
                v45 = (System_Int64_array *)Instance;
              else
                v45 = v41;
              v46 = (FollowerRootComponent_o *)UserServantEntity__GetFriendPointUpTypeVals(
                                                 v38->fields.userServantEntity,
                                                 v45,
                                                 0);
              FollowerRootComponent__GetFriendPointUpValSummary(
                v46,
                &fpUpDuplicateSum[1],
                fpUpDuplicateSum,
                (System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int___o *)v46,
                v47);
            }
          }
        }
        if ( v29 )
          goto LABEL_126;
      }
      else
      {
LABEL_85:
        if ( v29 )
        {
          UserServantList = UserEventDeckEntity__GetUserServantList(v29, 0, 0, 0);
          v49 = 0;
          m_Items = UserServantList->m_Items;
          while ( 1 )
          {
            Instance = (__int64)BalanceConfig_TypeInfo;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              Instance = (__int64)BalanceConfig_TypeInfo;
            }
            if ( (__int64)v49 >= *(int *)(*(_QWORD *)(Instance + 184) + 172LL) )
              break;
            deckInfo = v29->fields.deckInfo;
            if ( !deckInfo )
              goto LABEL_136;
            svts = deckInfo->fields.svts;
            if ( !svts )
              goto LABEL_136;
            if ( v49 >= LODWORD(svts->max_length) )
              goto LABEL_137;
            if ( !UserServantList )
              goto LABEL_136;
            if ( v49 >= LODWORD(UserServantList->max_length) )
              goto LABEL_137;
            if ( m_Items[v49] )
            {
              v53 = svts->m_Items[v49];
              Instance = (__int64)UserEventDeckEntity__GetEquipList(v29, v49, 0);
              if ( !v53 )
                goto LABEL_136;
              v55 = (System_Int64_array *)Instance;
              Instance = (__int64)FollowerRootComponent__GetEquipIdsForGrandSvt(
                                    this,
                                    v53->fields.initPos,
                                    v53->fields.userSvtId,
                                    v54);
              if ( Instance )
                v4 = (System_Int64_array *)Instance;
              else
                v4 = v55;
              if ( v49 >= LODWORD(UserServantList->max_length) )
                goto LABEL_137;
              Instance = (__int64)m_Items[v49];
              if ( !Instance )
                goto LABEL_136;
              v56 = (FollowerRootComponent_o *)UserServantEntity__GetFriendPointUpTypeVals(
                                                 (UserServantEntity_o *)Instance,
                                                 v4,
                                                 0);
              FollowerRootComponent__GetFriendPointUpValSummary(
                v56,
                &fpUpDuplicateSum[1],
                fpUpDuplicateSum,
                (System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int___o *)v56,
                v57);
            }
            ++v49;
          }
LABEL_126:
          v67 = this->fields.battleSetupInfo;
          if ( v67 )
          {
            Instance = (__int64)v67->fields.questRestrictionInfo;
            if ( Instance )
            {
              QuestRestrictionInfo__SetDeckInfo_43179292((QuestRestrictionInfo_o *)Instance, v29, 0);
              goto LABEL_132;
            }
          }
          goto LABEL_136;
        }
      }
      v68 = this->fields.battleSetupInfo;
      if ( v68 )
      {
        Instance = (__int64)v68->fields.questRestrictionInfo;
        if ( Instance )
        {
          QuestRestrictionInfo__ResetDeckInfo((QuestRestrictionInfo_o *)Instance, 0);
          goto LABEL_132;
        }
      }
      goto LABEL_136;
    }
    if ( !entity || QuestRestrictionInfo__IsSupportOnly((QuestRestrictionInfo_o *)Instance, 0) )
      goto LABEL_132;
  }
  else if ( !entity )
  {
    goto LABEL_132;
  }
  for ( k = 0; ; ++k )
  {
    v59 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v59 = BalanceConfig_TypeInfo;
    }
    if ( k >= v59->static_fields->DeckMemberMax )
      break;
    Instance = (__int64)entity;
    if ( !entity )
      goto LABEL_136;
    UserServant = UserDeckEntity__GetUserServant((UserDeckEntity_o *)entity, k, 0);
    if ( UserServant )
    {
      v61 = UserServant;
      Instance = (__int64)entity;
      if ( !entity )
        goto LABEL_136;
      EquipList = UserDeckEntity__GetEquipList((UserDeckEntity_o *)entity, k, 0);
      v63 = (FollowerRootComponent_o *)UserServantEntity__GetFriendPointUpTypeVals(v61, EquipList, 0);
      FollowerRootComponent__GetFriendPointUpValSummary(
        v63,
        &fpUpDuplicateSum[1],
        fpUpDuplicateSum,
        (System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int___o *)v63,
        v64);
    }
  }
LABEL_132:
  v70 = fpUpDuplicateSum[0];
  v69 = fpUpDuplicateSum[1];
  this->fields.friendPointUpMaxVal = fpUpDuplicateSum[1];
  this->fields.friendPointUpVal = v70 + v69;
}


void FollowerRootComponent___OnClickBack_b__73_0(
        FollowerRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  TerminalPramsManager_c *v7; // x0

  if ( (byte_4C21E03 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&StringLiteral_3430/*"CLICK_BACK"*/);
    byte_4C21E03 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  CommonUI__CloseConfirmDialog(Instance, 0);
  if ( isDecide )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C21ACD )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C21ACD = 1;
    }
    v7 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v7 = TerminalPramsManager_TypeInfo;
    }
    v7->static_fields->_IsAutoResume_k__BackingField = 1;
    Instance = (CommonUI_o *)this->fields.myFSM;
    if ( Instance )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3430/*"CLICK_BACK"*/, 0);
      return;
    }
LABEL_14:
    sub_1C2D6EC(Instance, v6);
  }
  this->fields.state = 3;
}


void FollowerRootComponent__beginFinish(FollowerRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x0
  FollowerRootComponent_c *v5; // x0
  struct FollowerRootComponent_StaticFields *static_fields; // x0

  if ( (byte_4C21DE4 & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&FollowerRootComponent_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    byte_4C21DE4 = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  this->fields.state = 0;
  if ( !operationItemListViewManager )
    goto LABEL_14;
  FollowerSelectItemListViewManager__DestroyList_32440444(operationItemListViewManager, 0, v2);
  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    goto LABEL_14;
  operationItemListViewManager = (FollowerSelectItemListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                          (UnityEngine_Component_o *)operationItemListViewManager,
                                                                          0);
  if ( !operationItemListViewManager )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)operationItemListViewManager, 0, 0);
  v5 = FollowerRootComponent_TypeInfo;
  if ( !FollowerRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerRootComponent_TypeInfo);
    v5 = FollowerRootComponent_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->partyOrganizationAtlasCache = 0;
  sub_1C2D434(&static_fields->partyOrganizationAtlasCache);
  operationItemListViewManager = (FollowerSelectItemListViewManager_o *)this->fields.backSkinSprite;
  if ( !operationItemListViewManager
    || (operationItemListViewManager = (FollowerSelectItemListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                                (UnityEngine_Component_o *)operationItemListViewManager,
                                                                                0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)operationItemListViewManager, 0, 0),
        (operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__)) == 0) )
  {
LABEL_14:
    sub_1C2D6EC(operationItemListViewManager, method);
  }
  AtlasManager__ReleaseUISkin((AtlasManager_o *)operationItemListViewManager, 2, 0, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleasePartyOrganizationAtlas(0);
}


void FollowerRootComponent__beginInitialize(FollowerRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4C21DD9 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C21DD9 = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v4);
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, (SceneRootComponent_o *)this, 0);
}


void FollowerRootComponent__beginPause(FollowerRootComponent_o *this, const MethodInfo *method)
{
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x0

  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    sub_1C2D6EC(0, method);
  FollowerSelectItemListViewManager__SaveSortFilter(operationItemListViewManager, method);
}


void FollowerRootComponent__beginResume(FollowerRootComponent_o *this, Il2CppObject *data, const MethodInfo *method)
{
  FollowerRootComponent_c *v5; // x0
  struct UIAtlas_o *partyOrganizationAtlas; // x21
  struct FollowerRootComponent_StaticFields *static_fields; // x0
  TitleInfoControl_o *titleInfo; // x21
  __int64 Instance; // x0
  int64_t selectItemNum; // x1
  struct FollowerSelectItemListViewManager_o *operationItemListViewManager; // x8
  const MethodInfo *v12; // x2
  __int64 naturalAligment; // x10
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x5
  __int64 v16; // x8
  struct BattleSetupInfo_o *battleSetupInfo; // x9
  int64_t v18; // x10
  __int64 v19; // x9
  Il2CppObject *v20; // x10
  struct BattleSetupInfo_o **p_battleSetupInfo; // x21
  struct BattleSetupInfo_o *v22; // x8
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x20
  int32_t tutorialMode; // w8
  struct BattleSetupInfo_o *v25; // x8
  FollowerSelectItemListViewManager_o *v26; // x20
  const MethodInfo *v27; // x7
  struct BattleSetupInfo_o *v28; // x8
  const MethodInfo *v29; // x4
  struct BattleSetupInfo_o *v30; // x8
  const MethodInfo *v31; // x1
  CommonUI_o *v32; // x20
  struct BattleSetupInfo_o *v33; // x8
  PartyListViewItem_o *v34; // x20
  UnityEngine_Component_o *v35; // x8
  int32_t i; // w21
  FollowerSelectItemListViewManager_o *v37; // x22
  const MethodInfo *v38; // x7
  struct BattleSetupInfo_o *v39; // x8
  const MethodInfo *v40; // x4
  struct BattleSetupInfo_o *v41; // x8
  struct FollowerSelectItemListViewManager_o *v42; // x22
  FollowerSelectItemListViewManager_CallbackFunc_o *v43; // x23
  const MethodInfo *v44; // x2
  PartyOrganizationListViewItem_o *Member; // x0
  struct FollowerInfo_o *followerInfo; // x8
  FollowerSelectItemListViewManager_o *v47; // x20
  int64_t userId; // x21
  const MethodInfo *v49; // x3
  struct QuestRestrictionInfo_o *v50; // x8
  BalanceConfig_c *v51; // x0
  int32_t v52; // w22
  PartyOrganizationListViewItem_o *v53; // x0
  struct FollowerInfo_o *v54; // x8
  int32_t monitor; // w4
  int klass_high; // w10
  int32_t v57; // w10
  struct BattleSetupInfo_o *v58; // x8

  if ( (byte_4C21DE2 & 1) == 0 )
  {
    sub_1C2D490(&AvalonSceneManager_TypeInfo);
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&BattleSetupInfo_TypeInfo);
    sub_1C2D490(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_FollowerRootComponent_OnSelectFollowerItem__);
    sub_1C2D490(&FollowerRootComponent_TypeInfo);
    sub_1C2D490(&RandomLimitCountManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C2D490(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C2D490(&SupportInfoJump_TypeInfo);
    sub_1C2D490(&TutorialFlag_TypeInfo);
    byte_4C21DE2 = 1;
  }
  v5 = FollowerRootComponent_TypeInfo;
  partyOrganizationAtlas = this->fields.partyOrganizationAtlas;
  if ( !FollowerRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerRootComponent_TypeInfo);
    v5 = FollowerRootComponent_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->partyOrganizationAtlasCache = partyOrganizationAtlas;
  sub_1C2D434(&static_fields->partyOrganizationAtlasCache);
  titleInfo = this->fields.titleInfo;
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_123;
  if ( *(_BYTE *)(Instance + 88) )
  {
    selectItemNum = 0;
    if ( !titleInfo )
      goto LABEL_123;
  }
  else
  {
    selectItemNum = this->fields.tutorialMode != 2;
    if ( !titleInfo )
      goto LABEL_123;
  }
  TitleInfoControl__setBackBtnEnable(titleInfo, selectItemNum, 0);
  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    goto LABEL_123;
  Instance = (__int64)operationItemListViewManager->fields.classButtonControl;
  if ( !Instance )
    goto LABEL_123;
  ClassButtonControlComponent__PlayRecommendEffect((ClassButtonControlComponent_o *)Instance, 0);
  if ( this->fields.state == 6 )
  {
    if ( data )
    {
      naturalAligment = SupportInfoJump_TypeInfo->_2.naturalAligment;
      if ( data->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (SupportInfoJump_c *)data->klass->_2.typeHierarchy[naturalAligment - 1] == SupportInfoJump_TypeInfo
        && ((__int64)data[3].klass & 0x80000000) == 0 )
      {
        selectItemNum = (unsigned int)this->fields.selectItemNum;
        if ( (selectItemNum & 0x80000000) == 0 )
        {
          Instance = (__int64)this->fields.operationItemListViewManager;
          if ( !Instance )
            goto LABEL_123;
          Instance = (__int64)FollowerSelectItemListViewManager__GetItem(
                                (FollowerSelectItemListViewManager_o *)Instance,
                                selectItemNum,
                                v12);
          if ( Instance )
          {
            this->fields.state = 5;
            v16 = *(_QWORD *)(Instance + 120);
            battleSetupInfo = this->fields.battleSetupInfo;
            if ( v16 )
              v18 = *(_QWORD *)(v16 + 16);
            else
              v18 = 0;
            if ( !battleSetupInfo )
              goto LABEL_123;
            battleSetupInfo->fields.followerId = v18;
            battleSetupInfo->fields.followerClassId = (int32_t)data[3].klass;
            monitor = (int32_t)data[4].monitor;
            battleSetupInfo->fields.followerGrandGraphId = monitor;
            klass_high = HIDWORD(data[3].klass);
            if ( klass_high <= 0 )
              klass_high = *(_DWORD *)(Instance + 272);
            battleSetupInfo->fields.followerSupportDeckId = klass_high;
            if ( v16 )
            {
              v57 = *(_DWORD *)(v16 + 36);
              battleSetupInfo->fields.followerType = 0;
              if ( (v57 | 4) == 5 )
                battleSetupInfo->fields.followerType = v57;
              if ( monitor >= 1 )
              {
                selectItemNum = *(_QWORD *)(v16 + 16);
LABEL_108:
                Instance = (__int64)this->fields.operationItemListViewManager;
                if ( !Instance )
                  goto LABEL_123;
                Instance = FollowerSelectItemListViewManager__GetItemIndex_32450348(
                             (FollowerSelectItemListViewManager_o *)Instance,
                             selectItemNum,
                             0,
                             0,
                             monitor,
                             v15);
                this->fields.selectItemNum = Instance;
              }
            }
            else
            {
              battleSetupInfo->fields.followerType = 0;
              if ( monitor >= 1 )
              {
                selectItemNum = 0;
                goto LABEL_108;
              }
            }
            if ( this->fields.operationItemListViewManager )
            {
              if ( !byte_4C21E5E )
              {
                sub_1C2D490(&FollowerSelectItemListViewManager_TypeInfo);
                byte_4C21E5E = 1;
              }
              Instance = (__int64)FollowerSelectItemListViewManager_TypeInfo;
              if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
                Instance = (__int64)FollowerSelectItemListViewManager_TypeInfo;
              }
              v58 = this->fields.battleSetupInfo;
              if ( v58 )
              {
                selectItemNum = (unsigned int)v58->fields.followerClassId;
                if ( *(_DWORD *)(*(_QWORD *)(Instance + 184) + 8LL) != (_DWORD)selectItemNum )
                {
                  Instance = (__int64)this->fields.operationItemListViewManager;
                  if ( !Instance )
                    goto LABEL_123;
                  if ( FollowerSelectItemListViewManager__ChangeClass(
                         (FollowerSelectItemListViewManager_o *)Instance,
                         selectItemNum,
                         v14) )
                  {
                    Instance = (__int64)this->fields.operationItemListViewManager;
                    if ( !Instance )
                      goto LABEL_123;
                    ListViewManager__JumpItem((ListViewManager_o *)Instance, this->fields.selectItemNum, 0);
                  }
                }
                Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
                if ( Instance )
                {
                  AvalonSceneManager__pushScene(
                    (AvalonSceneManager_o *)Instance,
                    40,
                    1,
                    (Il2CppObject *)this->fields.battleSetupInfo,
                    0);
                  return;
                }
              }
            }
LABEL_123:
            sub_1C2D6EC(Instance, selectItemNum);
          }
        }
      }
    }
    goto LABEL_36;
  }
  if ( data )
  {
    v19 = BattleSetupInfo_TypeInfo->_2.naturalAligment;
    if ( data->klass->_2.naturalAligment >= (unsigned int)v19 )
    {
      if ( (BattleSetupInfo_c *)data->klass->_2.typeHierarchy[v19 - 1] == BattleSetupInfo_TypeInfo )
        v20 = data;
      else
        v20 = 0;
    }
    else
    {
      v20 = 0;
    }
    this->fields.battleSetupInfo = (struct BattleSetupInfo_o *)v20;
    p_battleSetupInfo = &this->fields.battleSetupInfo;
  }
  else
  {
    this->fields.battleSetupInfo = 0;
    p_battleSetupInfo = &this->fields.battleSetupInfo;
  }
  Instance = sub_1C2D434(p_battleSetupInfo);
  v22 = *p_battleSetupInfo;
  if ( *p_battleSetupInfo )
  {
    questRestrictionInfo = v22->fields.questRestrictionInfo;
    if ( !questRestrictionInfo )
      goto LABEL_123;
    if ( !QuestRestrictionInfo__IsMyServantOrNpcRestriction(v22->fields.questRestrictionInfo, 0)
      && (questRestrictionInfo->fields.isNoSupportBattle
       || questRestrictionInfo->fields.isFixedMyServantSingle
       || questRestrictionInfo->fields.isSupportOnlyForceBattle) )
    {
      goto LABEL_88;
    }
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    Instance = TutorialFlag__Get_40206092(102, 0);
    if ( (Instance & 1) == 0 )
    {
      v25 = *p_battleSetupInfo;
      if ( !*p_battleSetupInfo )
        goto LABEL_123;
LABEL_59:
      if ( v25->fields.isChildFollower )
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
          v25 = this->fields.battleSetupInfo;
          if ( !v25 )
            goto LABEL_123;
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
        goto LABEL_123;
      v26 = this->fields.operationItemListViewManager;
      Instance = BattleSetupInfo__TargetQuestId((BattleSetupInfo_o *)Instance, 0);
      v28 = this->fields.battleSetupInfo;
      if ( !v28 )
        goto LABEL_123;
      if ( !v26 )
        goto LABEL_123;
      FollowerSelectItemListViewManager__CreateList(
        v26,
        Instance,
        v28->fields.questPhase,
        this->fields.friendPointUpVal,
        this->fields.friendPointUpMaxVal,
        this->fields.friendPointCampaignEntityList,
        v28->fields.questRestrictionInfo,
        v27);
      v30 = this->fields.battleSetupInfo;
      if ( !v30 )
        goto LABEL_123;
      Instance = (__int64)this->fields.followerQuestInfomationDraw;
      if ( !Instance )
        goto LABEL_123;
      FollowerQuestInfomationDraw__SetInfomation(
        (FollowerQuestInfomationDraw_o *)Instance,
        v30->fields.questRestrictionInfo,
        0,
        0,
        v29);
      this->fields.state = 2;
      FollowerRootComponent__OnMoveEnd(this, v31);
LABEL_54:
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v32 = (CommonUI_o *)Instance;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      if ( v32 )
      {
        CommonUI__maskFadein(v32, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0);
        SceneRootComponent__sendMessageResume((SceneRootComponent_o *)this, 0);
        return;
      }
      goto LABEL_123;
    }
    if ( this->fields.state == 6 )
      goto LABEL_47;
    v33 = this->fields.battleSetupInfo;
    if ( !v33 )
      goto LABEL_123;
    if ( v33->fields.isChildFollower )
      goto LABEL_126;
    v50 = v33->fields.questRestrictionInfo;
    if ( !v50 )
      goto LABEL_123;
    if ( !v50->fields.isNotTransitionSupportList )
    {
LABEL_126:
      if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
      RandomLimitCountManager__set_EnableRandomLimitCount(0, 0);
      RandomLimitCountManager__set_EnableRandomLimitCount(1, 0);
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_123;
      v34 = *(PartyListViewItem_o **)(Instance + 80);
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_123;
      v35 = (UnityEngine_Component_o *)this->fields.operationItemListViewManager;
      i = *(_DWORD *)(Instance + 64);
      this->fields.tutorialState = 0;
      this->fields.selectItemNum = -1;
      if ( !v35 )
        goto LABEL_123;
      Instance = (__int64)UnityEngine_Component__get_gameObject(v35, 0);
      if ( !Instance )
        goto LABEL_123;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
      Instance = (__int64)this->fields.battleSetupInfo;
      if ( !Instance )
        goto LABEL_123;
      v37 = this->fields.operationItemListViewManager;
      Instance = BattleSetupInfo__TargetQuestId((BattleSetupInfo_o *)Instance, 0);
      v39 = this->fields.battleSetupInfo;
      if ( !v39 )
        goto LABEL_123;
      if ( !v37 )
        goto LABEL_123;
      FollowerSelectItemListViewManager__CreateList(
        v37,
        Instance,
        v39->fields.questPhase,
        this->fields.friendPointUpVal,
        this->fields.friendPointUpMaxVal,
        this->fields.friendPointCampaignEntityList,
        v39->fields.questRestrictionInfo,
        v38);
      v41 = this->fields.battleSetupInfo;
      if ( !v41 )
        goto LABEL_123;
      Instance = (__int64)this->fields.followerQuestInfomationDraw;
      if ( !Instance )
        goto LABEL_123;
      FollowerQuestInfomationDraw__SetInfomation(
        (FollowerQuestInfomationDraw_o *)Instance,
        v41->fields.questRestrictionInfo,
        i,
        0,
        v40);
      this->fields.state = 3;
      v42 = this->fields.operationItemListViewManager;
      v43 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1C2D6DC(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
      FollowerSelectItemListViewManager_CallbackFunc___ctor(
        v43,
        (Il2CppObject *)this,
        (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
        0);
      if ( !v42 )
        goto LABEL_123;
      v42->fields.callbackFunc = v43;
      sub_1C2D434(&v42->fields.callbackFunc);
      FollowerSelectItemListViewManager__SetMode_32512280(v42, 2, v44);
      if ( v34 )
      {
        Instance = (__int64)this->fields.operationItemListViewManager;
        if ( !Instance )
          goto LABEL_123;
        if ( ListViewManager__get_ItemSum((ListViewManager_o *)Instance, 0) >= 3 )
        {
          if ( i )
          {
LABEL_79:
            if ( i >= 1 )
            {
              Member = PartyListViewItem__GetMember(v34, i - 1, 0);
              if ( Member )
              {
                followerInfo = Member->fields.followerInfo;
                if ( followerInfo )
                {
                  v47 = this->fields.operationItemListViewManager;
                  userId = followerInfo->fields.userId;
                  Instance = (__int64)PartyOrganizationListViewItem__get_ServantLeader(Member, 0);
                  if ( !Instance )
                    goto LABEL_123;
                  if ( !v47 )
                    goto LABEL_123;
                  Instance = FollowerSelectItemListViewManager__GetItemIndex(
                               v47,
                               userId,
                               *(_QWORD *)(Instance + 40),
                               v49);
                  if ( !this->fields.operationItemListViewManager )
                    goto LABEL_123;
                  ListViewManager__JumpItem((ListViewManager_o *)this->fields.operationItemListViewManager, Instance, 0);
                }
              }
            }
          }
          else
          {
            for ( i = 1; ; ++i )
            {
              v51 = BalanceConfig_TypeInfo;
              v52 = i - 1;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v51 = BalanceConfig_TypeInfo;
              }
              if ( v52 >= v51->static_fields->DeckMemberMax )
                break;
              v53 = PartyListViewItem__GetMember(v34, v52, 0);
              if ( v53 )
              {
                v54 = v53->fields.followerInfo;
                if ( v54 )
                {
                  if ( Follower__IsNotNpc(v54->fields.type, 0) )
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


void FollowerRootComponent__beginStartUp(FollowerRootComponent_o *this, Il2CppObject *data, const MethodInfo *method)
{
  MissionNotifyManager_o *Instance; // x0
  const MethodInfo *v6; // x1
  struct System_Collections_Generic_List_MissionNotifyDispInfo__o *mDispInfos; // x8
  const MethodInfo *v8; // x1
  __int64 naturalAligment; // x9
  struct BattleSetupInfo_o *v10; // x10
  struct BattleSetupInfo_o **p_battleSetupInfo; // x0
  const MethodInfo *v12; // x1
  FollowerRootComponent_c *v13; // x0
  struct UIAtlas_o *partyOrganizationAtlas; // x20
  struct FollowerRootComponent_StaticFields *static_fields; // x0
  const MethodInfo *v16; // x2
  UILabel_o *infomationLabel; // x20
  UnityEngine_GameObject_o *refreshButtonBase; // x20
  bool v19; // w8
  struct System_Collections_Generic_List_MissionNotifyDispInfo__o *v20; // x8
  ConstantMaster_o *v21; // x20
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  System_Action_o *v23; // x20
  System_Action_o *v24; // x20
  QuestPhaseMaster_o *v25; // x20
  struct BattleSetupInfo_o *v26; // x8
  NpcFollowerMaster_o *v27; // x20
  struct BattleSetupInfo_o *v28; // x8
  struct BattleSetupInfo_o *v29; // x8
  const MethodInfo *v30; // x1
  const MethodInfo *v31; // x4
  struct BattleSetupInfo_o *v32; // x8

  if ( (byte_4C21DDA & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&BattleSetupInfo_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_ConstantMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_NpcFollowerMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1C2D490(&Method_FollowerRootComponent_EndLoadCommonBg__);
    sub_1C2D490(&Method_FollowerRootComponent_EndLoadPartyOrganizationAtlasSimple__);
    sub_1C2D490(&FollowerRootComponent_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&RandomLimitCountManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C2D490(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C2D490(&TutorialFlag_TypeInfo);
    sub_1C2D490(&StringLiteral_13608/*"TUTORIAL_SUPPORT_QUEST_ID"*/);
    sub_1C2D490(&StringLiteral_13609/*"TUTORIAL_SUPPORT_QUEST_PHASE"*/);
    sub_1C2D490(&StringLiteral_6435/*"FOLLOWER_SELECT_EXPLANATION2"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C21DDA = 1;
  }
  Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_96;
  if ( PartyOrganizationUtility__ExistsTemporaryPartyInfo((PartyOrganizationUtility_o *)Instance, 0) )
  {
    Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_96;
    mDispInfos = Instance[2].fields.mDispInfos;
    if ( !mDispInfos )
      goto LABEL_96;
    this->fields.battleSetupInfo = (struct BattleSetupInfo_o *)mDispInfos[1].monitor;
    sub_1C2D434(&this->fields.battleSetupInfo);
    Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !Instance )
      goto LABEL_96;
    if ( !MissionNotifyManager__IsPause(Instance, 0) )
    {
      Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
      if ( !Instance )
        goto LABEL_96;
      MissionNotifyManager__StartPause(Instance, 0);
    }
  }
  else
  {
    if ( data )
    {
      naturalAligment = BattleSetupInfo_TypeInfo->_2.naturalAligment;
      if ( data->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
        v10 = (BattleSetupInfo_c *)data->klass->_2.typeHierarchy[naturalAligment - 1] == BattleSetupInfo_TypeInfo
            ? (struct BattleSetupInfo_o *)data
            : 0LL;
      else
        v10 = 0;
      this->fields.battleSetupInfo = v10;
      p_battleSetupInfo = &this->fields.battleSetupInfo;
    }
    else
    {
      this->fields.battleSetupInfo = 0;
      p_battleSetupInfo = &this->fields.battleSetupInfo;
    }
    sub_1C2D434(p_battleSetupInfo);
  }
  if ( !this->fields.battleSetupInfo )
  {
    FollowerRootComponent__ReturnQuestMenu(this, v8);
    return;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  RandomLimitCountManager__set_EnableRandomLimitCount(1, 0);
  FollowerRootComponent__PlayBGM(this, v12);
  v13 = FollowerRootComponent_TypeInfo;
  partyOrganizationAtlas = this->fields.partyOrganizationAtlas;
  if ( !FollowerRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerRootComponent_TypeInfo);
    v13 = FollowerRootComponent_TypeInfo;
  }
  static_fields = v13->static_fields;
  static_fields->partyOrganizationAtlasCache = partyOrganizationAtlas;
  sub_1C2D434(&static_fields->partyOrganizationAtlasCache);
  Instance = (MissionNotifyManager_o *)this->fields.titleInfo;
  if ( !Instance )
    goto LABEL_96;
  TitleInfoControl__setTitleInfo_39624304((TitleInfoControl_o *)Instance, this->fields.myFSM, 3, 66, 1, 0);
  Instance = (MissionNotifyManager_o *)this->fields.titleInfo;
  if ( !Instance )
    goto LABEL_96;
  TitleInfoControl__setBackBtnEnable((TitleInfoControl_o *)Instance, 1, 0);
  Instance = (MissionNotifyManager_o *)this->fields.operationItemListViewManager;
  if ( !Instance )
    goto LABEL_96;
  FollowerSelectItemListViewManager__DestroyList_32440444(
    (FollowerSelectItemListViewManager_o *)Instance,
    this->fields.battleSetupInfo,
    v16);
  infomationLabel = this->fields.infomationLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (MissionNotifyManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6435/*"FOLLOWER_SELECT_EXPLANATION2"*/, 0);
  if ( !infomationLabel )
    goto LABEL_96;
  UILabel__set_text(infomationLabel, (System_String_o *)Instance, 0);
  Instance = (MissionNotifyManager_o *)BalanceConfig_TypeInfo;
  refreshButtonBase = this->fields.refreshButtonBase;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  if ( !refreshButtonBase )
    goto LABEL_96;
  UnityEngine_GameObject__SetActive(
    refreshButtonBase,
    BalanceConfig_TypeInfo->static_fields->FollowerRefreshRestTime >= 0,
    0);
  Instance = (MissionNotifyManager_o *)this->fields.battleSetupInfo;
  *(_QWORD *)&this->fields.tutorialMode = 0;
  this->fields.selectItemNum = -1;
  this->fields.isForceFadeOut = 0;
  this->fields.isInitRecommendRequest = 0;
  if ( !Instance )
    goto LABEL_96;
  BattleSetupInfo__SetSelectableQuests((BattleSetupInfo_o *)Instance, 0);
  Instance = (MissionNotifyManager_o *)this->fields.battleSetupInfo;
  if ( !Instance )
    goto LABEL_96;
  v19 = Instance[1].fields.mNoticeNumberComp || LODWORD(Instance[1].fields.assetLoadedEventIdList) != 0;
  if ( (v19 & BYTE1(Instance[1].klass)) != 0
    && (BattleSetupInfo__SetRestriction((BattleSetupInfo_o *)Instance, 1, 0),
        (Instance = (MissionNotifyManager_o *)this->fields.battleSetupInfo) == 0)
    || (v20 = Instance[1].fields.mDispInfos) == 0 )
  {
LABEL_96:
    sub_1C2D6EC(Instance, v6);
  }
  if ( BYTE2(v20[9].fields._syncRoot) )
  {
LABEL_44:
    FollowerRootComponent__StartBattleSetupMenu(this, v6);
    return;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_40206092(102, 0) )
  {
    Instance = (MissionNotifyManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_96;
    Instance = (MissionNotifyManager_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ConstantMaster___);
    if ( !Instance )
      goto LABEL_96;
    v21 = (ConstantMaster_o *)Instance;
    Instance = (MissionNotifyManager_o *)ConstantMaster__GetValue(
                                           (ConstantMaster_o *)Instance,
                                           (System_String_o *)StringLiteral_13608/*"TUTORIAL_SUPPORT_QUEST_ID"*/,
                                           0);
    battleSetupInfo = this->fields.battleSetupInfo;
    if ( !battleSetupInfo )
      goto LABEL_96;
    if ( battleSetupInfo->fields.questId == (_DWORD)Instance )
    {
      Instance = (MissionNotifyManager_o *)ConstantMaster__GetValue(v21, (System_String_o *)StringLiteral_13609/*"TUTORIAL_SUPPORT_QUEST_PHASE"*/, 0);
      battleSetupInfo = this->fields.battleSetupInfo;
      if ( !battleSetupInfo )
        goto LABEL_96;
      if ( battleSetupInfo->fields.questPhase == (_DWORD)Instance )
        *(_QWORD *)&this->fields.tutorialMode = 0x100000003LL;
    }
  }
  else
  {
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( !TutorialFlag__IsProgressDone(3, 0) )
      goto LABEL_44;
    Instance = (MissionNotifyManager_o *)this->fields.infomationLabel;
    *(_QWORD *)&this->fields.tutorialMode = 0x100000002LL;
    if ( !Instance )
      goto LABEL_96;
    UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0);
    battleSetupInfo = this->fields.battleSetupInfo;
    if ( !battleSetupInfo )
      goto LABEL_96;
  }
  Instance = (MissionNotifyManager_o *)battleSetupInfo->fields.questRestrictionInfo;
  if ( !Instance )
    goto LABEL_96;
  if ( !HIBYTE(Instance[5].fields.mPauseCount)
    && !BYTE1(Instance[5].fields.mPauseCount)
    && !LOBYTE(Instance[5].fields.mDispInfos)
    && !BYTE3(Instance[5].fields.mMissionNotifyComps) )
  {
    Instance = (MissionNotifyManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (MissionNotifyManager_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)Instance,
                                             (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
      if ( this->fields.battleSetupInfo )
      {
        v25 = (QuestPhaseMaster_o *)Instance;
        Instance = (MissionNotifyManager_o *)BattleSetupInfo__TargetQuestId(this->fields.battleSetupInfo, 0);
        v26 = this->fields.battleSetupInfo;
        if ( v26 )
        {
          if ( v25 )
          {
            Instance = (MissionNotifyManager_o *)QuestPhaseMaster__GetEntity(
                                                   v25,
                                                   (int32_t)Instance,
                                                   v26->fields.questPhase,
                                                   0);
            if ( Instance && LOBYTE(Instance->fields.mNoDispInfos) )
            {
              Instance = (MissionNotifyManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                goto LABEL_96;
              Instance = (MissionNotifyManager_o *)DataManager__GetMasterData_object_(
                                                     (DataManager_o *)Instance,
                                                     (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
              if ( !this->fields.battleSetupInfo )
                goto LABEL_96;
              v27 = (NpcFollowerMaster_o *)Instance;
              Instance = (MissionNotifyManager_o *)BattleSetupInfo__TargetQuestId(this->fields.battleSetupInfo, 0);
              v28 = this->fields.battleSetupInfo;
              if ( !v28 )
                goto LABEL_96;
              if ( !v27 )
                goto LABEL_96;
              Instance = (MissionNotifyManager_o *)NpcFollowerMaster__GetQuestFollowerList(
                                                     v27,
                                                     (int32_t)Instance,
                                                     v28->fields.questPhase,
                                                     0);
              if ( !Instance )
                goto LABEL_96;
              if ( !Instance->fields.mNoDispInfos )
              {
                *(_QWORD *)&this->fields.tutorialMode = 0x100000001LL;
                goto LABEL_71;
              }
            }
            v29 = this->fields.battleSetupInfo;
            if ( v29 )
            {
              Instance = (MissionNotifyManager_o *)v29->fields.questRestrictionInfo;
              if ( Instance )
              {
                if ( QuestRestrictionInfo__IsMyServantOrNpcRestriction((QuestRestrictionInfo_o *)Instance, 0) )
                  this->fields.tutorialMode = 4;
                FollowerRootComponent__UpdateDeckInfomation(this, v30);
                v32 = this->fields.battleSetupInfo;
                if ( v32 )
                {
                  Instance = (MissionNotifyManager_o *)this->fields.followerQuestInfomationDraw;
                  if ( Instance )
                  {
                    FollowerQuestInfomationDraw__SetInfomation(
                      (FollowerQuestInfomationDraw_o *)Instance,
                      v32->fields.questRestrictionInfo,
                      0,
                      0,
                      v31);
                    Instance = (MissionNotifyManager_o *)this->fields.backSkinSprite;
                    if ( Instance )
                    {
                      Instance = (MissionNotifyManager_o *)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)Instance,
                                                             0);
                      if ( Instance )
                      {
                        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
                        goto LABEL_67;
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
    goto LABEL_96;
  }
  this->fields.tutorialState = 1;
  if ( QuestRestrictionInfo__IsMyServantOrNpcRestriction((QuestRestrictionInfo_o *)Instance, 0) )
  {
    this->fields.isForceFadeOut = 1;
    this->fields.tutorialMode = 4;
LABEL_67:
    v23 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(v23, (Il2CppObject *)this, Method_FollowerRootComponent_EndLoadCommonBg__, 0);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__LoadUISkin(v23, 2, 1, 0);
    return;
  }
  this->fields.tutorialMode = 1;
LABEL_71:
  v24 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v24, (Il2CppObject *)this, Method_FollowerRootComponent_EndLoadPartyOrganizationAtlasSimple__, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadPartyOrganizationAtlas(v24, 1, 0);
}


void FollowerRootComponent__setBattleSetupFollowType(
        FollowerRootComponent_o *this,
        int32_t type,
        const MethodInfo *method)
{
  struct BattleSetupInfo_o *battleSetupInfo; // x8

  battleSetupInfo = this->fields.battleSetupInfo;
  if ( !battleSetupInfo )
    sub_1C2D6EC(this, type);
  battleSetupInfo->fields.followerType = 0;
  if ( (type | 4) == 5 )
    battleSetupInfo->fields.followerType = type;
}


void FollowerRootComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19

  if ( (byte_4C21E04 & 1) == 0 )
  {
    sub_1C2D490(&FollowerRootComponent___c_TypeInfo);
    byte_4C21E04 = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(FollowerRootComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  FollowerRootComponent___c_TypeInfo->static_fields->__9 = (struct FollowerRootComponent___c_o *)v1;
  sub_1C2D434(FollowerRootComponent___c_TypeInfo->static_fields);
}


void FollowerRootComponent___c___ctor(FollowerRootComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void FollowerRootComponent___c___Init_b__50_0(FollowerRootComponent___c_o *this, const MethodInfo *method)
{
  ;
}


void FollowerRootComponent___c___OnSelectFollowerItem_b__67_0(
        FollowerRootComponent___c_o *this,
        const MethodInfo *method)
{
  ;
}