void FollowerRootComponent___cctor(const MethodInfo *method)
{
  struct FollowerRootComponent_StaticFields *static_fields; // x8

  if ( (byte_4C3DABB & 1) == 0 )
  {
    sub_1C37058(&FollowerRootComponent_TypeInfo);
    byte_4C3DABB = 1;
  }
  static_fields = FollowerRootComponent_TypeInfo->static_fields;
  static_fields->LIST_UPDATE_MESSAGE_FONT_SIZE = 26;
  *(_QWORD *)&static_fields->RETURN_TERMINAL_MESSAGE_FONT_SIZE = 0xA0000001BLL;
  static_fields->RETURN_TERMINAL_MESSAGE_SPACING_Y = 5;
}


void FollowerRootComponent___ctor(FollowerRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1

  if ( (byte_4C3DABA & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C3DABA = 1;
  }
  v3 = StringLiteral_1/*""*/;
  this->fields.backupBgmName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C36FFC(&this->fields.backupBgmName, v3);
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0);
}


void FollowerRootComponent__CallbackFollowerList(
        FollowerRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_4C3DA9F & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_11084/*"REQUEST_OK"*/);
    byte_4C3DA9F = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1C372B4(0);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_11084/*"REQUEST_OK"*/, 0);
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
    sub_1C372B4(0);
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

  if ( (byte_4C3DAB2 & 1) == 0 )
  {
    sub_1C37058(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    sub_1C37058(&Method_FollowerRootComponent_OnSelectFollowerItem__);
    sub_1C37058(&RandomLimitCountManager_TypeInfo);
    byte_4C3DAB2 = 1;
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
  v10 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1C372A4(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v10,
    (Il2CppObject *)this,
    (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
    0);
  if ( !v9
    || (v9->fields.callbackFunc = v10,
        sub_1C36FFC(&v9->fields.callbackFunc, v10),
        FollowerSelectItemListViewManager__SetMode_32721392(v9, 2, v11),
        (operationItemListViewManager = (FollowerSelectItemListViewManager_o *)this->fields.commonConfirmDialog) == 0) )
  {
LABEL_12:
    sub_1C372B4(operationItemListViewManager);
  }
  CommonConfirmDialog__Close((CommonConfirmDialog_o *)operationItemListViewManager, 0);
}


void FollowerRootComponent__EndCloseShowServant(FollowerRootComponent_o *this, const MethodInfo *method)
{
  struct FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v4; // x21
  __int64 v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4C3DAA6 & 1) == 0 )
  {
    sub_1C37058(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    sub_1C37058(&Method_FollowerRootComponent_OnSelectFollowerItem__);
    byte_4C3DAA6 = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v4 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1C372A4(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
    0);
  if ( !operationItemListViewManager )
    sub_1C372B4(v5);
  operationItemListViewManager->fields.callbackFunc = v4;
  sub_1C36FFC(&operationItemListViewManager->fields.callbackFunc, v4);
  FollowerSelectItemListViewManager__SetMode_32721392(operationItemListViewManager, 2, v6);
}


void FollowerRootComponent__EndCloseShowServantEquip(FollowerRootComponent_o *this, const MethodInfo *method)
{
  struct FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v4; // x21
  __int64 v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4C3DAA9 & 1) == 0 )
  {
    sub_1C37058(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    sub_1C37058(&Method_FollowerRootComponent_OnSelectFollowerItem__);
    byte_4C3DAA9 = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v4 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1C372A4(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
    0);
  if ( !operationItemListViewManager )
    sub_1C372B4(v5);
  operationItemListViewManager->fields.callbackFunc = v4;
  sub_1C36FFC(&operationItemListViewManager->fields.callbackFunc, v4);
  FollowerSelectItemListViewManager__SetMode_32721392(operationItemListViewManager, 2, v6);
}


void FollowerRootComponent__EndCloseTutorialArrow(FollowerRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *tutorialMaskBase2; // x0

  if ( (byte_4C3DAB4 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_8655/*"MENU_SELECT_ITEM"*/);
    byte_4C3DAB4 = 1;
  }
  tutorialMaskBase2 = this->fields.tutorialMaskBase2;
  if ( !tutorialMaskBase2
    || (UnityEngine_GameObject__SetActive(tutorialMaskBase2, 0, 0),
        tutorialMaskBase2 = (UnityEngine_GameObject_o *)this->fields.myFSM,
        this->fields.state = 3,
        !tutorialMaskBase2) )
  {
    sub_1C372B4(tutorialMaskBase2);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)tutorialMaskBase2, (System_String_o *)StringLiteral_8655/*"MENU_SELECT_ITEM"*/, 0);
}


void FollowerRootComponent__EndLoadCommonBg(FollowerRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *backSkinSprite; // x0
  System_Action_o *v4; // x20

  if ( (byte_4C3DA97 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AtlasManager_TypeInfo);
    sub_1C37058(&Method_FollowerRootComponent_EndLoadOutGameAtlas__);
    byte_4C3DA97 = 1;
  }
  backSkinSprite = (UnityEngine_Component_o *)this->fields.backSkinSprite;
  if ( !backSkinSprite
    || (backSkinSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(backSkinSprite, 0)) == 0 )
  {
    sub_1C372B4(backSkinSprite);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)backSkinSprite, 1, 0);
  v4 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_FollowerRootComponent_EndLoadOutGameAtlas__, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadOutGameAtlas(v4, 0);
}


void FollowerRootComponent__EndLoadEventAtlas(FollowerRootComponent_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4C3DA99 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AtlasManager_TypeInfo);
    sub_1C37058(&Method_FollowerRootComponent_EndLoadPartyOrganizationAtlas__);
    byte_4C3DA99 = 1;
  }
  v3 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_FollowerRootComponent_EndLoadPartyOrganizationAtlas__, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadPartyOrganizationAtlas(v3, 1, 0);
}


void FollowerRootComponent__EndLoadOutGameAtlas(FollowerRootComponent_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4C3DA98 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AtlasManager_TypeInfo);
    sub_1C37058(&Method_FollowerRootComponent_EndLoadEventAtlas__);
    byte_4C3DA98 = 1;
  }
  v3 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
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

  if ( (byte_4C3DA9A & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4C3DA9A = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    goto LABEL_15;
  FollowerSelectItemListViewManager__AdjustButton(operationItemListViewManager, method);
  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    goto LABEL_15;
  FollowerSelectItemListViewManager__SetClassBoardInfo(operationItemListViewManager, v4);
  SceneRootComponent__beginStartUp_41481188((SceneRootComponent_o *)this, 0);
  if ( this->fields.isForceFadeOut )
  {
    this->fields.isForceFadeOut = 0;
    operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !operationItemListViewManager )
      goto LABEL_15;
    CommonUI__maskFadeInit((CommonUI_o *)operationItemListViewManager, 0);
    operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !operationItemListViewManager )
      goto LABEL_15;
    CommonUI__maskFadeout((CommonUI_o *)operationItemListViewManager, 1, 0.0, 0, 0);
    FollowerRootComponent__StartBattleSetupMenu(this, v5);
  }
  operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !operationItemListViewManager )
    goto LABEL_15;
  if ( PartyOrganizationUtility__ExistsTemporaryPartyInfo((PartyOrganizationUtility_o *)operationItemListViewManager, 0) )
  {
    operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( operationItemListViewManager )
    {
      CommonUI__maskFadeInit((CommonUI_o *)operationItemListViewManager, 0);
      operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( operationItemListViewManager )
      {
        CommonUI__maskFadeout((CommonUI_o *)operationItemListViewManager, 1, 0.0, 0, 0);
        return;
      }
    }
LABEL_15:
    sub_1C372B4(operationItemListViewManager);
  }
}


void FollowerRootComponent__EndOpenTutorialArrow(FollowerRootComponent_o *this, const MethodInfo *method)
{
  struct FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v4; // x21
  __int64 v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4C3DAB8 & 1) == 0 )
  {
    sub_1C37058(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    sub_1C37058(&Method_FollowerRootComponent_OnSelectFollowerItem__);
    byte_4C3DAB8 = 1;
  }
  this->fields.state = 3;
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v4 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1C372A4(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
    0);
  if ( !operationItemListViewManager )
    sub_1C372B4(v5);
  operationItemListViewManager->fields.callbackFunc = v4;
  sub_1C36FFC(&operationItemListViewManager->fields.callbackFunc, v4);
  FollowerSelectItemListViewManager__SetMode_32721392(operationItemListViewManager, 4, v6);
}


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
  if ( (byte_4C3DAB1 & 1) == 0 )
  {
    sub_1C37058(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    sub_1C37058(&Method_FollowerRootComponent_CallbackRefresh__);
    sub_1C37058(&Method_FollowerRootComponent_OnSelectFollowerItem__);
    sub_1C37058(&Method_NetworkManager_getRequest_FollowerRecommendSupportListRequest___);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&NetworkManager_ResultCallbackFunc_TypeInfo);
    this = (FollowerRootComponent_o *)sub_1C37058(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4C3DAB1 = 1;
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
      this = (FollowerRootComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !this )
        goto LABEL_18;
      LOBYTE(this->fields.operationItemListViewManager) = 1;
    }
    v6 = (NetworkManager_ResultCallbackFunc_o *)sub_1C372A4(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(v6, (Il2CppObject *)v4, Method_FollowerRootComponent_CallbackRefresh__, 0);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    this = (FollowerRootComponent_o *)NetworkManager__getRequest_object_(
                                        v6,
                                        (const MethodInfo_3172CF0 *)Method_NetworkManager_getRequest_FollowerRecommendSupportListRequest___);
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
    sub_1C372B4(this);
  }
  operationItemListViewManager = v4->fields.operationItemListViewManager;
  v10 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1C372A4(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v10,
    (Il2CppObject *)v4,
    (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
    0);
  if ( !operationItemListViewManager )
    goto LABEL_18;
  operationItemListViewManager->fields.callbackFunc = v10;
  sub_1C36FFC(&operationItemListViewManager->fields.callbackFunc, v10);
  FollowerSelectItemListViewManager__SetMode_32721392(operationItemListViewManager, 2, v11);
  this = (FollowerRootComponent_o *)v4->fields.commonConfirmDialog;
  if ( !this )
    goto LABEL_18;
  CommonConfirmDialog__Close((CommonConfirmDialog_o *)this, 0);
}


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
  if ( (byte_4C3DAB0 & 1) == 0 )
  {
    sub_1C37058(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    sub_1C37058(&Method_FollowerRootComponent_CallbackRefresh__);
    sub_1C37058(&Method_FollowerRootComponent_OnSelectFollowerItem__);
    sub_1C37058(&Method_NetworkManager_getRequest_FollowerListRequest___);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&NetworkManager_ResultCallbackFunc_TypeInfo);
    this = (FollowerRootComponent_o *)sub_1C37058(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4C3DAB0 = 1;
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
      this = (FollowerRootComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !this )
        goto LABEL_18;
      LOBYTE(this->fields.operationItemListViewManager) = 1;
    }
    v6 = (NetworkManager_ResultCallbackFunc_o *)sub_1C372A4(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(v6, (Il2CppObject *)v4, Method_FollowerRootComponent_CallbackRefresh__, 0);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    this = (FollowerRootComponent_o *)NetworkManager__getRequest_object_(
                                        v6,
                                        (const MethodInfo_3172CF0 *)Method_NetworkManager_getRequest_FollowerListRequest___);
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
    sub_1C372B4(this);
  }
  operationItemListViewManager = v4->fields.operationItemListViewManager;
  v10 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1C372A4(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v10,
    (Il2CppObject *)v4,
    (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
    0);
  if ( !operationItemListViewManager )
    goto LABEL_18;
  operationItemListViewManager->fields.callbackFunc = v10;
  sub_1C36FFC(&operationItemListViewManager->fields.callbackFunc, v10);
  FollowerSelectItemListViewManager__SetMode_32721392(operationItemListViewManager, 2, v11);
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
  const MethodInfo *v6; // x2

  if ( (byte_4C3DAB3 & 1) == 0 )
  {
    sub_1C37058(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    sub_1C37058(&Method_FollowerRootComponent_OnSelectFollowerItem__);
    byte_4C3DAB3 = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v4 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1C372A4(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
    0);
  if ( !operationItemListViewManager )
    sub_1C372B4(v5);
  operationItemListViewManager->fields.callbackFunc = v4;
  sub_1C36FFC(&operationItemListViewManager->fields.callbackFunc, v4);
  FollowerSelectItemListViewManager__SetMode_32721392(operationItemListViewManager, 2, v6);
}


void FollowerRootComponent__EndShowServant(FollowerRootComponent_o *this, bool isDecide, const MethodInfo *method)
{
  ListViewManager_o *operationItemListViewManager; // x0
  Il2CppObject *Instance; // x20
  System_Action_o *v6; // x21

  if ( (byte_4C3DAA5 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_FollowerRootComponent_EndCloseShowServant__);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C3DAA5 = 1;
  }
  operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager
    || (ListViewManager__SetScrollView(
          operationItemListViewManager,
          this->fields.openScroll,
          this->fields.openOffset,
          0),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v6 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo),
        System_Action___ctor(v6, (Il2CppObject *)this, Method_FollowerRootComponent_EndCloseShowServant__, 0),
        !Instance) )
  {
    sub_1C372B4(operationItemListViewManager);
  }
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v6, 0);
}


void FollowerRootComponent__EndShowServantEquip(FollowerRootComponent_o *this, bool isDecide, const MethodInfo *method)
{
  ListViewManager_o *operationItemListViewManager; // x0
  Il2CppObject *Instance; // x20
  System_Action_o *v6; // x21

  if ( (byte_4C3DAA8 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_FollowerRootComponent_EndCloseShowServantEquip__);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C3DAA8 = 1;
  }
  operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager
    || (ListViewManager__SetScrollView(
          operationItemListViewManager,
          this->fields.openScroll,
          this->fields.openOffset,
          0),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v6 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo),
        System_Action___ctor(v6, (Il2CppObject *)this, Method_FollowerRootComponent_EndCloseShowServantEquip__, 0),
        !Instance) )
  {
    sub_1C372B4(operationItemListViewManager);
  }
  CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)Instance, v6, 0);
}


void FollowerRootComponent__EndTutorialFollowerCommonGuide(FollowerRootComponent_o *this, const MethodInfo *method)
{
  struct FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v4; // x21
  __int64 v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4C3DAB9 & 1) == 0 )
  {
    sub_1C37058(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    sub_1C37058(&Method_FollowerRootComponent_OnSelectFollowerItem__);
    byte_4C3DAB9 = 1;
  }
  this->fields.state = 3;
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v4 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1C372A4(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
    0);
  if ( !operationItemListViewManager )
    sub_1C372B4(v5);
  operationItemListViewManager->fields.callbackFunc = v4;
  sub_1C36FFC(&operationItemListViewManager->fields.callbackFunc, v4);
  FollowerSelectItemListViewManager__SetMode_32721392(operationItemListViewManager, 2, v6);
}


void FollowerRootComponent__EndTutorialFollowerGuideNotification1(
        FollowerRootComponent_o *this,
        const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0
  struct FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v5; // x21
  const MethodInfo *v6; // x2

  if ( (byte_4C3DAB6 & 1) == 0 )
  {
    sub_1C37058(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    sub_1C37058(&Method_FollowerRootComponent_OnSelectFollowerItem__);
    byte_4C3DAB6 = 1;
  }
  titleInfo = this->fields.titleInfo;
  this->fields.state = 3;
  if ( !titleInfo
    || (TitleInfoControl__setBackBtnEnable(titleInfo, 0, 0),
        operationItemListViewManager = this->fields.operationItemListViewManager,
        v5 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1C372A4(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo),
        FollowerSelectItemListViewManager_CallbackFunc___ctor(
          v5,
          (Il2CppObject *)this,
          (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
          0),
        !operationItemListViewManager) )
  {
    sub_1C372B4(titleInfo);
  }
  operationItemListViewManager->fields.callbackFunc = v5;
  sub_1C36FFC(&operationItemListViewManager->fields.callbackFunc, v5);
  FollowerSelectItemListViewManager__SetMode_32721392(operationItemListViewManager, 2, v6);
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

  if ( (byte_4C3DAB7 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&FSUtility_TypeInfo);
    sub_1C37058(&Method_FollowerRootComponent_EndOpenTutorialArrow__);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C3DAB7 = 1;
  }
  tutorialMaskBase2 = this->fields.tutorialMaskBase2;
  if ( !tutorialMaskBase2 )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(tutorialMaskBase2, 1, 0);
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  IsUnderVista = FSUtility__IsUnderVista(0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_FollowerRootComponent_EndOpenTutorialArrow__, 0);
  if ( !Instance )
LABEL_10:
    sub_1C372B4(tutorialMaskBase2);
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
  if ( (byte_4C3DAA2 & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_UserServantGrandMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    this = (FollowerRootComponent_o *)sub_1C37058(&long___TypeInfo);
    byte_4C3DAA2 = 1;
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
  this = (FollowerRootComponent_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_UserServantGrandMaster___);
  if ( !this )
LABEL_15:
    sub_1C372B4(this);
  FirstByUserSvtId = UserServantGrandMaster__GetFirstByUserSvtId((UserServantGrandMaster_o *)this, userSvtId, 0);
  if ( FirstByUserSvtId )
    return UserServantGrandEntity__GetEquipUserServantIdList(FirstByUserSvtId, 0);
  v10 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v10 = BalanceConfig_TypeInfo;
  }
  return (System_Int64_array *)sub_1C37100(long___TypeInfo, (unsigned int)v10->static_fields->GrandSvtEquipMax);
}


void FollowerRootComponent__GetFriendPointUpValSummary(
        FollowerRootComponent_o *this,
        int32_t *fpUpMax,
        int32_t *fpUpDuplicateSum,
        System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int___o *upTypeVals,
        const MethodInfo *method)
{
  System_Collections_Generic_List_Enumerator_T__o v8; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C3DAA1 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_FuncList_TYPE__int___Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_FuncList_TYPE__int___MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_FuncList_TYPE__int___get_Current__);
    this = (FollowerRootComponent_o *)sub_1C37058(&Method_System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int___GetEnumerator__);
    byte_4C3DAA1 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  if ( !upTypeVals )
    sub_1C372B4(this);
  System_Collections_Generic_List_ValueTuple_Int32Enum__int____GetEnumerator(
    &v8,
    (System_Collections_Generic_List_T__o *)upTypeVals,
    (const MethodInfo_374DC94 *)Method_System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int___GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_ValueTuple_Int32Enum__int____MoveNext(
            &v8,
            (const MethodInfo_35244CC *)Method_System_Collections_Generic_List_Enumerator_ValueTuple_FuncList_TYPE__int___MoveNext__) )
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
    (const MethodInfo_35244C8 *)Method_System_Collections_Generic_List_Enumerator_ValueTuple_FuncList_TYPE__int___Dispose__);
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

  if ( (byte_4C3DAA0 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&ClassButtonControlComponent_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_UserRecommendFollowerMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_UserRecommendFollowerMaster__UserRecommendFollowerEntity__long__TryGetSingleEntity__);
    sub_1C37058(&Method_FollowerRootComponent_CallbackInitRecommendFollowerRequest__);
    sub_1C37058(&Method_FollowerRootComponent_OnMoveEnd__);
    sub_1C37058(&Method_NetworkManager_getRequest_FollowerRecommendSupportListRequest___);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1C37058(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C37058(&Method_FollowerRootComponent___c__Init_b__50_0__);
    sub_1C37058(&FollowerRootComponent___c_TypeInfo);
    sub_1C37058(&StringLiteral_8655/*"MENU_SELECT_ITEM"*/);
    byte_4C3DAA0 = 1;
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
    battleSetupInfo = (__int64)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_UserRecommendFollowerMaster___);
    if ( !battleSetupInfo )
      goto LABEL_53;
    if ( DataMasterBase_object__object__long___TryGetSingleEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)battleSetupInfo,
           &entity,
           (const MethodInfo_33A3728 *)Method_DataMasterBase_UserRecommendFollowerMaster__UserRecommendFollowerEntity__long__TryGetSingleEntity__) )
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
        if ( (byte_4C3DB10 & 1) == 0 )
        {
          sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
          byte_4C3DB10 = 1;
        }
        mixItemList = v21->fields.mixItemList;
        if ( mixItemList && mixItemList->fields._size >= 1 )
        {
LABEL_26:
          battleSetupInfo = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
          if ( !battleSetupInfo )
            goto LABEL_53;
          if ( *(_BYTE *)(battleSetupInfo + 148) )
          {
            battleSetupInfo = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
              _9__50_0 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
              System_Action___ctor(_9__50_0, v16, Method_FollowerRootComponent___c__Init_b__50_0__, 0);
              static_fields = FollowerRootComponent___c_TypeInfo->static_fields;
              static_fields->__9__50_0 = _9__50_0;
              battleSetupInfo = sub_1C36FFC(&static_fields->__9__50_0, _9__50_0);
            }
            if ( !v13 )
              goto LABEL_53;
            PartyOrganizationUtility__OpenQuestUseItemExpiredDialog(v13, _9__50_0, 0);
          }
          this->fields.state = 2;
          v18 = this->fields.operationItemListViewManager;
          v19 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
          System_Action___ctor(v19, (Il2CppObject *)this, Method_FollowerRootComponent_OnMoveEnd__, 0);
          if ( v18 )
          {
            v18->fields.callbackFunc2 = v19;
            sub_1C36FFC(&v18->fields.callbackFunc2, v19);
            FollowerSelectItemListViewManager__SetMode_32721392(v18, 1, v20);
            return;
          }
        }
        else
        {
          battleSetupInfo = (__int64)this->fields.myFSM;
          this->fields.selectItemNum = -1;
          if ( battleSetupInfo )
          {
            PlayMakerFSM__SendEvent((PlayMakerFSM_o *)battleSetupInfo, (System_String_o *)StringLiteral_8655/*"MENU_SELECT_ITEM"*/, 0);
            return;
          }
        }
LABEL_53:
        sub_1C372B4(battleSetupInfo);
      }
    }
    v23 = (NetworkManager_ResultCallbackFunc_o *)sub_1C372A4(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v23,
      (Il2CppObject *)this,
      Method_FollowerRootComponent_CallbackInitRecommendFollowerRequest__,
      0);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    battleSetupInfo = (__int64)NetworkManager__getRequest_object_(
                                 v23,
                                 (const MethodInfo_3172CF0 *)Method_NetworkManager_getRequest_FollowerRecommendSupportListRequest___);
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
  SceneRootComponent_o *StackedRootComponent; // x0
  __int64 naturalAligment; // x10
  UnityEngine_Component_o *v6; // x20
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  _QWORD *monitor; // x8
  int v10; // w8
  void *v11; // x19
  unsigned int v12; // w20
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  __int64 *v16; // x8
  _QWORD *v17; // x0
  System_Reflection_MethodBase_o *v18; // x0
  TerminalPramsManager_c *v19; // x0
  int lastPlayQuestConsumeAp; // w21
  System_String_o **v21; // x8
  System_String_o *v22; // x20
  System_String_o *v23; // x21
  Il2CppObject *v24; // x22
  System_String_o *v25; // x23
  System_String_o *v26; // x24
  CommonConfirmDialog_ClickDelegate_o *v27; // x25

  if ( (byte_4C3DAB5 & 1) == 0 )
  {
    sub_1C37058(&BattleRootComponent_TypeInfo);
    sub_1C37058(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C37058(&Method_UnityEngine_Component_GetComponentsInChildren_Camera___);
    sub_1C37058(&Method_FollowerRootComponent_OnClickBack__);
    sub_1C37058(&Method_FollowerRootComponent__OnClickBack_b__73_0__);
    sub_1C37058(&FollowerRootComponent_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1C37058(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&StringLiteral_6440/*"FOLLOWER_SELECT_BACK_TO_QUEST_NO_AP_CONSUME_AP0"*/);
    sub_1C37058(&StringLiteral_3437/*"CLICK_BACK"*/);
    sub_1C37058(&StringLiteral_6439/*"FOLLOWER_SELECT_BACK_TO_QUEST_NO_AP_CONSUME"*/);
    sub_1C37058(&StringLiteral_6438/*"FOLLOWER_SELECT_BACK_TITLE"*/);
    sub_1C37058(&StringLiteral_3688/*"COMMON_CONFIRM_NO"*/);
    sub_1C37058(&StringLiteral_3693/*"COMMON_CONFIRM_YES"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    sub_1C37058(&StringLiteral_3438/*"CLICK_BACK_BATTLE_SETUP"*/);
    byte_4C3DAB5 = 1;
  }
  if ( this->fields.state == 3 && !this->fields.tutorialState )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( !Instance )
      goto LABEL_62;
    if ( !*((_BYTE *)Instance + 148) )
      goto LABEL_34;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_62;
    StackedRootComponent = AvalonSceneManager__GetStackedRootComponent((AvalonSceneManager_o *)Instance, 0);
    if ( StackedRootComponent
      && (naturalAligment = BattleRootComponent_TypeInfo->_2.naturalAligment,
          StackedRootComponent->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
    {
      if ( (BattleRootComponent_c *)StackedRootComponent->klass->_2.typeHierarchy[naturalAligment - 1] == BattleRootComponent_TypeInfo )
        v6 = (UnityEngine_Component_o *)StackedRootComponent;
      else
        v6 = 0;
    }
    else
    {
      v6 = 0;
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v6, 0, 0) )
    {
      v7 = Method_FollowerRootComponent_OnClickBack__;
      if ( (*((_BYTE *)Method_FollowerRootComponent_OnClickBack__ + 83) & 2) != 0 )
        v7 = (_QWORD *)sub_1C37070(Method_FollowerRootComponent_OnClickBack__);
      v8 = (System_Reflection_MethodBase_o *)sub_1C3703C(v7, v7[4]);
      OverwriteAssetSoundName__PlaySystemSe(v8, 1, 0, 0);
      this->fields.state = 4;
      if ( v6 )
      {
        Instance = UnityEngine_Component__get_gameObject(v6, 0);
        if ( Instance )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
          monitor = v6[3].monitor;
          if ( monitor )
          {
            Instance = (void *)monitor[66];
            if ( Instance )
            {
              BattleResultComponent__EndResult((BattleResultComponent_o *)Instance, 0);
              Instance = this->fields.myFSM;
              if ( Instance )
              {
                PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3437/*"CLICK_BACK"*/, 0);
                Instance = UnityEngine_Component__get_transform(v6, 0);
                if ( Instance )
                {
                  Instance = UnityEngine_Component__GetComponentsInChildren_object__51245264(
                               (UnityEngine_Component_o *)Instance,
                               (const MethodInfo_30DF0D0 *)Method_UnityEngine_Component_GetComponentsInChildren_Camera___);
                  if ( Instance )
                  {
                    v10 = *((_DWORD *)Instance + 6);
                    v11 = Instance;
                    if ( v10 < 1 )
                      return;
                    v12 = 0;
                    while ( 1 )
                    {
                      if ( v12 >= v10 )
                        sub_1C372BC(Instance);
                      Instance = (void *)*((_QWORD *)v11 + (int)v12 + 4);
                      if ( !Instance )
                        break;
                      Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
                      if ( !Instance )
                        break;
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
                      v10 = *((_DWORD *)v11 + 6);
                      if ( (int)++v12 >= v10 )
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
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( !Instance )
        goto LABEL_62;
      if ( AvalonSceneManager__IsStackScene((AvalonSceneManager_o *)Instance, 0) )
        goto LABEL_40;
      Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_62;
      if ( *((int *)Instance + 14) > 0 )
        goto LABEL_40;
      Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_62;
      if ( *((_BYTE *)Instance + 182) )
      {
LABEL_40:
        v13 = Method_FollowerRootComponent_OnClickBack__;
        if ( (*((_BYTE *)Method_FollowerRootComponent_OnClickBack__ + 83) & 2) != 0 )
          v13 = (_QWORD *)sub_1C37070(Method_FollowerRootComponent_OnClickBack__);
        v14 = (System_Reflection_MethodBase_o *)sub_1C3703C(v13, v13[4]);
        OverwriteAssetSoundName__PlaySystemSe(v14, 1, 0, 0);
        battleSetupInfo = this->fields.battleSetupInfo;
        this->fields.state = 4;
        if ( battleSetupInfo )
        {
          Instance = this->fields.myFSM;
          if ( Instance )
          {
            if ( battleSetupInfo->fields.isChildFollower )
              v16 = &StringLiteral_3438/*"CLICK_BACK_BATTLE_SETUP"*/;
            else
              v16 = &StringLiteral_3437/*"CLICK_BACK"*/;
            PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v16, 0);
            return;
          }
        }
      }
      else
      {
        v17 = Method_FollowerRootComponent_OnClickBack__;
        if ( (*((_BYTE *)Method_FollowerRootComponent_OnClickBack__ + 83) & 2) != 0 )
          v17 = (_QWORD *)sub_1C37070(Method_FollowerRootComponent_OnClickBack__);
        v18 = (System_Reflection_MethodBase_o *)sub_1C3703C(v17, v17[4]);
        OverwriteAssetSoundName__PlaySystemSe(v18, 1, 0, 0);
        v19 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v19 = TerminalPramsManager_TypeInfo;
        }
        lastPlayQuestConsumeAp = v19->static_fields->lastPlayQuestConsumeAp;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v21 = (System_String_o **)&StringLiteral_6439/*"FOLLOWER_SELECT_BACK_TO_QUEST_NO_AP_CONSUME"*/;
        if ( lastPlayQuestConsumeAp <= 0 )
          v21 = (System_String_o **)&StringLiteral_6440/*"FOLLOWER_SELECT_BACK_TO_QUEST_NO_AP_CONSUME_AP0"*/;
        v22 = LocalizationManager__Get(*v21, 0);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v23 = LocalizationManager__Get((System_String_o *)StringLiteral_6438/*"FOLLOWER_SELECT_BACK_TITLE"*/, 0);
        v24 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v25 = LocalizationManager__Get((System_String_o *)StringLiteral_3693/*"COMMON_CONFIRM_YES"*/, 0);
        v26 = LocalizationManager__Get((System_String_o *)StringLiteral_3688/*"COMMON_CONFIRM_NO"*/, 0);
        v27 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C372A4(CommonConfirmDialog_ClickDelegate_TypeInfo);
        CommonConfirmDialog_ClickDelegate___ctor(
          v27,
          (Il2CppObject *)this,
          Method_FollowerRootComponent__OnClickBack_b__73_0__,
          0);
        Instance = FollowerRootComponent_TypeInfo;
        if ( !FollowerRootComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FollowerRootComponent_TypeInfo);
          Instance = FollowerRootComponent_TypeInfo;
        }
        if ( v24 )
        {
          CommonUI__OpenConfirmDecideDlg(
            (CommonUI_o *)v24,
            v23,
            v22,
            v25,
            v26,
            v27,
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
    sub_1C372B4(Instance);
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

  if ( (byte_4C3DAAE & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    sub_1C37058(&Method_FollowerRootComponent_EndTutorialFollowerCommonGuide__);
    sub_1C37058(&Method_FollowerRootComponent_EndTutorialFollowerGuideNotification1__);
    sub_1C37058(&Method_FollowerRootComponent_EndTutorialFollowerGuideNotification2__);
    sub_1C37058(&Method_FollowerRootComponent_OnSelectFollowerItem__);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C37058(&StringLiteral_13588/*"TUTORIAL_MESSAGE_FOLLOWER2"*/);
    sub_1C37058(&StringLiteral_13587/*"TUTORIAL_MESSAGE_FOLLOWER1"*/);
    byte_4C3DAAE = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( this->fields.tutorialState == 1 )
    {
      tutorialMode = this->fields.tutorialMode;
      *(_QWORD *)&this->fields.tutorialState = 0x200000002LL;
      if ( tutorialMode == 3 )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v5 = LocalizationManager__Get((System_String_o *)StringLiteral_13588/*"TUTORIAL_MESSAGE_FOLLOWER2"*/, 0);
        v6 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
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
        sub_1C372B4(battleSetupInfo);
      }
      if ( tutorialMode == 2 )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v5 = LocalizationManager__Get((System_String_o *)StringLiteral_13587/*"TUTORIAL_MESSAGE_FOLLOWER1"*/, 0);
        v6 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
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
          v13 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
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
      v16 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1C372A4(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
      FollowerSelectItemListViewManager_CallbackFunc___ctor(
        v16,
        (Il2CppObject *)this,
        (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
        0);
      if ( !operationItemListViewManager )
        goto LABEL_27;
      operationItemListViewManager->fields.callbackFunc = v16;
      sub_1C36FFC(&operationItemListViewManager->fields.callbackFunc, v16);
      FollowerSelectItemListViewManager__SetMode_32721392(operationItemListViewManager, 2, v17);
      battleSetupInfo = (BattleSetupInfo_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
  SkillInfo_o *v12; // x22
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0
  Il2CppObject *v15; // x20
  System_String_o *v16; // x20
  System_String_o *v17; // x21
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  __int64 v21; // x5
  __int64 v22; // x6
  __int64 v23; // x7
  Il2CppObject *v24; // x0
  System_String_o *v25; // x0
  int32_t v26; // w20
  _QWORD *v27; // x0
  System_Reflection_MethodBase_o *v28; // x0
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v30; // x0
  void *v31; // x2
  _QWORD *v32; // x0
  System_Reflection_MethodBase_o *v33; // x0
  const MethodInfo *v34; // x2
  const MethodInfo *v35; // x2
  __int64 v36; // x20
  FollowerRootComponent_o *v37; // x21
  SkillInfo_o *v38; // x26
  Il2CppObject *v39; // x22
  FollowerRootComponent_o *v40; // x20
  Il2CppObject *Master_object; // x22
  const MethodInfo *v42; // x1
  int32_t SvtId; // w23
  const MethodInfo *v44; // x1
  int32_t ServantImageLimitSealAfter; // w24
  Il2CppObject *v46; // x22
  const MethodInfo *v47; // x1
  int32_t v48; // w23
  const MethodInfo *v49; // x1
  int32_t LimitCount; // w21
  System_String_o *v51; // x21
  System_String_o *v52; // x22
  __int64 v53; // x2
  __int64 v54; // x3
  __int64 v55; // x4
  __int64 v56; // x5
  __int64 v57; // x6
  __int64 v58; // x7
  Il2CppObject *v59; // x0
  System_String_o *v60; // x0
  __int64 v61; // x2
  __int64 v62; // x3
  __int64 v63; // x4
  __int64 v64; // x5
  __int64 v65; // x6
  __int64 v66; // x7
  FollowerRootComponent_o *v67; // x21
  Il2CppObject *v68; // x0
  System_String_o *v69; // x0
  int32_t tutorialMode; // w21
  System_String_o *v71; // x20
  _QWORD *v72; // x0
  System_Reflection_MethodBase_o *v73; // x0
  bool v74; // w22
  CommonConfirmDialog_ClickDelegate_o *v75; // x21
  bool v76; // w20
  CommonConfirmDialog_o *commonConfirmDialog; // x19
  System_String_o *v78; // x20
  FollowerRootComponent_o *v79; // x22
  int32_t v80; // w8
  _QWORD *v81; // x0
  System_Reflection_MethodBase_o *v82; // x0
  const MethodInfo *v83; // x1
  FollowerRootComponent_o *v84; // x20
  FollowerRootComponent_o *v85; // x20
  FollowerRootComponent___c_c *v86; // x8
  System_Action_o *_9__67_0; // x21
  Il2CppObject *v88; // x22
  struct FollowerRootComponent___c_StaticFields *static_fields; // x0
  _QWORD *v90; // x0
  System_Reflection_MethodBase_o *v91; // x0
  int32_t v92; // w8
  __int64 *v93; // x8
  const MethodInfo *v94; // x1
  FollowerRootComponent_o *v95; // x20
  _QWORD *v96; // x0
  System_Reflection_MethodBase_o *v97; // x0
  const MethodInfo *v98; // x2
  _QWORD *v99; // x0
  System_Reflection_MethodBase_o *v100; // x0
  int32_t v101; // w8
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  NetworkManager_ResultCallbackFunc_o *v103; // x20
  FollowerRecommendSupportListRequest_o *v104; // x20
  struct BattleSetupInfo_o *v105; // x8
  Il2CppObject *Instance; // x20
  System_String_o *v107; // x21
  System_String_o *v108; // x22
  System_Action_o *v109; // x23
  int friendPointCampaignEntityList_low; // w20
  _QWORD *v111; // x0
  const MethodInfo *v112; // x1
  FollowerSelectItemListViewItem_o *v113; // x20
  const MethodInfo *v114; // x1
  const MethodInfo *v115; // x1
  __int64 v116; // x22
  __int64 v117; // x23
  EquipTargetInfo_o *EquipTargetInfoByEquipIdx; // x0
  EquipTargetInfo_o *EquipInfo; // x21
  __int64 v120; // x22
  __int64 v121; // x23
  const MethodInfo *v122; // x1
  __int64 v123; // x22
  __int64 v124; // x23
  _QWORD *v125; // x0
  System_Reflection_MethodBase_o *v126; // x0
  const MethodInfo *v127; // x3
  struct FollowerInfo_o *followerInfo; // x8
  int32_t type; // w8
  int32_t v130; // w2
  _QWORD *v131; // x0
  struct FollowerSelectItemListViewManager_CallbackFunc_o *v132; // x21
  const MethodInfo *v133; // x2
  int32_t v134; // w1
  _QWORD *v135; // x0
  System_Reflection_MethodBase_o *v136; // x0
  FollowerSelectItemListViewManager_CallbackFunc_o *v137; // x21
  Il2CppObject *v138; // x20
  System_Action_o *v139; // x21
  int m_CancellationTokenSource; // [xsp+38h] [xbp-88h] BYREF
  int32_t lv; // [xsp+3Ch] [xbp-84h] BYREF
  System_String_o *detail; // [xsp+40h] [xbp-80h] BYREF
  System_String_o *name; // [xsp+48h] [xbp-78h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+50h] [xbp-70h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+58h] [xbp-68h] BYREF
  System_String_o *v146; // [xsp+60h] [xbp-60h] BYREF
  System_String_o *defaultName; // [xsp+68h] [xbp-58h] BYREF
  SkillInfo_array *v148; // [xsp+78h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v149; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v150; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v151; // 0:x0.16

  v8 = this;
  if ( (byte_4C3DAAF & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    sub_1C37058(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C37058(&FollowerListRequest_TypeInfo);
    sub_1C37058(&FollowerRecommendSupportListRequest_TypeInfo);
    sub_1C37058(&Method_FollowerRootComponent_CallbackRefresh__);
    sub_1C37058(&Method_FollowerRootComponent_EndCloseTutorialArrow__);
    sub_1C37058(&Method_FollowerRootComponent_EndRecommendRefreshConfirm__);
    sub_1C37058(&Method_FollowerRootComponent_EndRefreshConfirm__);
    sub_1C37058(&Method_FollowerRootComponent_EndRefreshRest__);
    sub_1C37058(&Method_FollowerRootComponent_OnSelectFollowerItem__);
    sub_1C37058(&FollowerRootComponent_TypeInfo);
    sub_1C37058(&ImageLimitCount_TypeInfo);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&Method_NetworkManager_getRequest_FollowerRecommendSupportListRequest___);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1C37058(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C37058(&Method_FollowerRootComponent___c__OnSelectFollowerItem_b__67_0__);
    sub_1C37058(&FollowerRootComponent___c_TypeInfo);
    sub_1C37058(&StringLiteral_6463/*"FOLLOWER_SELECT_REFRESH_TITLE"*/);
    sub_1C37058(&StringLiteral_8655/*"MENU_SELECT_ITEM"*/);
    sub_1C37058(&StringLiteral_8664/*"MENU_SHOW_SUPPORT"*/);
    sub_1C37058(&StringLiteral_6460/*"FOLLOWER_SELECT_REFRESH_MESSAGE"*/);
    sub_1C37058(&StringLiteral_113/*" "*/);
    sub_1C37058(&StringLiteral_6461/*"FOLLOWER_SELECT_REFRESH_REST_MESSAGE"*/);
    sub_1C37058(&StringLiteral_8550/*"MASTER_EQSKILL_LV_TXT"*/);
    sub_1C37058(&StringLiteral_2872/*"BATTLE_SKILLCHARGETURN"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    this = (FollowerRootComponent_o *)sub_1C37058(&StringLiteral_6462/*"FOLLOWER_SELECT_REFRESH_REST_TITLE"*/);
    byte_4C3DAAF = 1;
  }
  v148 = 0;
  v146 = 0;
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
      v95 = this;
      if ( LOBYTE(this->fields.friendPointCampaignEntityList)
        || FollowerSelectItemListViewItem__get_SvtId((FollowerSelectItemListViewItem_o *)this, v94) <= 0 )
      {
        goto LABEL_175;
      }
      v96 = Method_FollowerRootComponent_OnSelectFollowerItem__;
      if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
        v96 = (_QWORD *)sub_1C37070(Method_FollowerRootComponent_OnSelectFollowerItem__);
      v97 = (System_Reflection_MethodBase_o *)sub_1C3703C(v96, v96[4]);
      OverwriteAssetSoundName__PlaySystemSe(v97, 0, 0, 0);
      FollowerRootComponent__SelectShowServant(v8, (FollowerSelectItemListViewItem_o *)v95, v98);
      return;
    case 2:
    case 3:
    case 4:
      v32 = Method_FollowerRootComponent_OnSelectFollowerItem__;
      if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
        v32 = (_QWORD *)sub_1C37070(Method_FollowerRootComponent_OnSelectFollowerItem__);
      v33 = (System_Reflection_MethodBase_o *)sub_1C3703C(v32, v32[4]);
      OverwriteAssetSoundName__PlaySystemSe(v33, 0, 0, 0);
      this = (FollowerRootComponent_o *)v8->fields.operationItemListViewManager;
      if ( !this )
        goto LABEL_196;
      this = (FollowerRootComponent_o *)FollowerSelectItemListViewManager__GetItem(
                                          (FollowerSelectItemListViewManager_o *)this,
                                          v8->fields.selectItemNum,
                                          v34);
      v36 = kind == 3 ? 1LL : 2LL * (kind == 4);
      if ( !this )
        goto LABEL_196;
      v37 = this;
      this = (FollowerRootComponent_o *)FollowerSelectItemListViewItem__GetSkillInfo(
                                          (FollowerSelectItemListViewItem_o *)this,
                                          &v148,
                                          v35);
      if ( !v148 )
        goto LABEL_196;
      if ( (unsigned int)v36 >= LODWORD(v148->max_length) )
        goto LABEL_197;
      v38 = v148->m_Items[v36];
      if ( !v38 || v38->fields.id < 1 || v38->fields.lv < 1 )
        goto LABEL_164;
      this = (FollowerRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_196;
      this = (FollowerRootComponent_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_SkillMaster___);
      if ( !this )
        goto LABEL_196;
      v39 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
              v38->fields.id,
              (const MethodInfo_33A10A0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      this = (FollowerRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_196;
      this = (FollowerRootComponent_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_SkillLvMaster___);
      if ( !this )
        goto LABEL_196;
      this = (FollowerRootComponent_o *)SkillLvMaster__GetEntity(
                                          (SkillLvMaster_o *)this,
                                          v38->fields.id,
                                          v38->fields.lv,
                                          0);
      if ( !v39 )
        goto LABEL_196;
      v40 = this;
      SkillEntity__getSkillMessageInfo((SkillEntity_o *)v39, &defaultName, &v146, v38->fields.lv, 0);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
      SvtId = FollowerSelectItemListViewItem__get_SvtId((FollowerSelectItemListViewItem_o *)v37, v42);
      this = (FollowerRootComponent_o *)FollowerSelectItemListViewItem__get_DispLimitCount(
                                          (FollowerSelectItemListViewItem_o *)v37,
                                          v44);
      if ( !Master_object )
        goto LABEL_196;
      ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                     (ServantLimitImageMaster_o *)Master_object,
                                     SvtId,
                                     (int32_t)this,
                                     0);
      v46 = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
      v48 = FollowerSelectItemListViewItem__get_SvtId((FollowerSelectItemListViewItem_o *)v37, v47);
      LimitCount = FollowerSelectItemListViewItem__get_LimitCount((FollowerSelectItemListViewItem_o *)v37, v49);
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      this = (FollowerRootComponent_o *)ImageLimitCount__GetLimitCountByDispLimit(
                                          ServantImageLimitSealAfter,
                                          LimitCount,
                                          0);
      if ( !v46 )
        goto LABEL_196;
      if ( !ServantLimitAddMaster__TryGetEntity((ServantLimitAddMaster_o *)v46, &entity, v48, (int32_t)this, 0) )
        goto LABEL_59;
      this = (FollowerRootComponent_o *)entity;
      if ( !entity )
        goto LABEL_196;
      if ( !ServantLimitAddEntity__HasKeyOverwriteSkillName(entity, 0) )
        goto LABEL_59;
      this = (FollowerRootComponent_o *)entity;
      if ( !entity )
        goto LABEL_196;
      defaultName = ServantLimitAddEntity__GetOverwriteSkillName(entity, v38->fields.id, defaultName, 0);
LABEL_59:
      v51 = defaultName;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v52 = LocalizationManager__Get((System_String_o *)StringLiteral_8550/*"MASTER_EQSKILL_LV_TXT"*/, 0);
      lv = v38->fields.lv;
      v59 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv, v53, v54, v55, v56, v57, v58);
      v60 = System_String__Format(v52, v59, 0);
      defaultName = System_String__Concat_63599904(v51, (System_String_o *)StringLiteral_113/*" "*/, v60, 0);
      this = (FollowerRootComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2872/*"BATTLE_SKILLCHARGETURN"*/, 0);
      if ( !v40 )
        goto LABEL_196;
      v67 = this;
      m_CancellationTokenSource = (int)v40->fields.m_CancellationTokenSource;
      v68 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &m_CancellationTokenSource, v61, v62, v63, v64, v65, v66);
      v69 = System_String__Format((System_String_o *)v67, v68, 0);
      tutorialMode = v8->fields.tutorialMode;
      v71 = v69;
      this = (FollowerRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_196;
      if ( tutorialMode == 3 )
        CommonUI__OpenDetailLongInfoDialogOnFade((CommonUI_o *)this, defaultName, v71, v146, 0);
      else
        CommonUI__OpenDetailLongInfoDialog((CommonUI_o *)this, defaultName, v71, v146, 1, 0, 0);
LABEL_164:
      operationItemListViewManager = v8->fields.operationItemListViewManager;
      v30 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1C372A4(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
      v31 = Method_FollowerRootComponent_OnSelectFollowerItem__;
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
        v111 = Method_FollowerRootComponent_OnSelectFollowerItem__;
        if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
          v111 = (_QWORD *)sub_1C37070(Method_FollowerRootComponent_OnSelectFollowerItem__);
        v82 = (System_Reflection_MethodBase_o *)sub_1C3703C(v111, v111[4]);
        if ( !friendPointCampaignEntityList_low )
          goto LABEL_145;
        goto LABEL_178;
      }
      v80 = v8->fields.tutorialMode;
      if ( v80 == 3 )
      {
        v135 = Method_FollowerRootComponent_OnSelectFollowerItem__;
        if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
          v135 = (_QWORD *)sub_1C37070(Method_FollowerRootComponent_OnSelectFollowerItem__);
        v136 = (System_Reflection_MethodBase_o *)sub_1C3703C(v135, v135[4]);
        OverwriteAssetSoundName__PlaySystemSe(v136, 2, 0, 0);
        goto LABEL_187;
      }
      if ( v80 == 2 )
      {
        v81 = Method_FollowerRootComponent_OnSelectFollowerItem__;
        if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
          v81 = (_QWORD *)sub_1C37070(Method_FollowerRootComponent_OnSelectFollowerItem__);
        v82 = (System_Reflection_MethodBase_o *)sub_1C3703C(v81, v81[4]);
LABEL_145:
        OverwriteAssetSoundName__PlaySystemSe(v82, 0, 0, 0);
        this = (FollowerRootComponent_o *)v8->fields.myFSM;
        if ( this )
        {
          v93 = &StringLiteral_8664/*"MENU_SHOW_SUPPORT"*/;
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
        v113 = (FollowerSelectItemListViewItem_o *)this;
        FollowerSelectItemListViewItem__SetSkillChangeInfo((FollowerSelectItemListViewItem_o *)this, v112);
        if ( !FollowerSelectItemListViewItem__get_ServantLeader(v113, v114) )
          goto LABEL_165;
        this = (FollowerRootComponent_o *)FollowerSelectItemListViewItem__get_ServantLeader(v113, v115);
        if ( !this )
          goto LABEL_196;
        v117 = *(_QWORD *)&this->fields.manualWidth;
        v116 = *(_QWORD *)&this->fields.kind;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v149.fields.currentCryptoKey = v117;
        *(_QWORD *)&v149.fields.fakeValue = v116;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v149, 0) >= 1 )
        {
          this = (FollowerRootComponent_o *)FollowerSelectItemListViewItem__get_ServantLeader(v113, v115);
          if ( !this )
            goto LABEL_196;
          EquipTargetInfoByEquipIdx = ServantLeaderInfo__GetEquipTargetInfoByEquipIdx(
                                        (ServantLeaderInfo_o *)this,
                                        param,
                                        0);
          if ( !EquipTargetInfoByEquipIdx )
            goto LABEL_175;
          EquipInfo = EquipTargetInfoByEquipIdx;
          v121 = *(_QWORD *)&EquipTargetInfoByEquipIdx->fields.svtId.fields.currentCryptoKey;
          v120 = *(_QWORD *)&EquipTargetInfoByEquipIdx->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v150.fields.currentCryptoKey = v121;
          *(_QWORD *)&v150.fields.fakeValue = v120;
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v150, 0) < 1 )
            goto LABEL_175;
          this = (FollowerRootComponent_o *)FollowerSelectItemListViewItem__get_ServantLeader(v113, v122);
          if ( !this )
            goto LABEL_196;
          if ( ServantLeaderInfo__IsHideEquip((ServantLeaderInfo_o *)this, 0) )
          {
LABEL_175:
            v131 = Method_FollowerRootComponent_OnSelectFollowerItem__;
            if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
              v131 = (_QWORD *)sub_1C37070(Method_FollowerRootComponent_OnSelectFollowerItem__);
            v82 = (System_Reflection_MethodBase_o *)sub_1C3703C(v131, v131[4]);
LABEL_178:
            OverwriteAssetSoundName__PlaySystemSe(v82, 2, 0, 0);
LABEL_179:
            operationItemListViewManager = v8->fields.operationItemListViewManager;
            v30 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1C372A4(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
            v31 = Method_FollowerRootComponent_OnSelectFollowerItem__;
LABEL_180:
            v132 = v30;
            FollowerSelectItemListViewManager_CallbackFunc___ctor(v30, (Il2CppObject *)v8, (intptr_t)v31, 0);
            if ( !operationItemListViewManager )
              goto LABEL_196;
            operationItemListViewManager->fields.callbackFunc = v132;
            sub_1C36FFC(&operationItemListViewManager->fields.callbackFunc, v132);
            v134 = 2;
            goto LABEL_182;
          }
        }
        else
        {
LABEL_165:
          EquipInfo = FollowerSelectItemListViewItem__get_EquipInfo(v113, v115);
          if ( !EquipInfo )
            goto LABEL_175;
        }
        v124 = *(_QWORD *)&EquipInfo->fields.svtId.fields.currentCryptoKey;
        v123 = *(_QWORD *)&EquipInfo->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v151.fields.currentCryptoKey = v124;
        *(_QWORD *)&v151.fields.fakeValue = v123;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v151, 0) < 1 )
          goto LABEL_175;
        v125 = Method_FollowerRootComponent_OnSelectFollowerItem__;
        if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
          v125 = (_QWORD *)sub_1C37070(Method_FollowerRootComponent_OnSelectFollowerItem__);
        v126 = (System_Reflection_MethodBase_o *)sub_1C3703C(v125, v125[4]);
        OverwriteAssetSoundName__PlaySystemSe(v126, 0, 0, 0);
        followerInfo = v113->fields.followerInfo;
        if ( followerInfo )
        {
          type = followerInfo->fields.type;
          if ( type == 1 )
          {
            v130 = 13;
            goto LABEL_193;
          }
          if ( type == 5 )
          {
            v130 = 14;
LABEL_193:
            FollowerRootComponent__SelectShowServantEquip(v8, EquipInfo, v130, v127);
            return;
          }
        }
        if ( v113->fields.isNpc )
          v130 = 19;
        else
          v130 = 16;
        goto LABEL_193;
      }
LABEL_118:
      v99 = Method_FollowerRootComponent_OnSelectFollowerItem__;
      if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
        v99 = (_QWORD *)sub_1C37070(Method_FollowerRootComponent_OnSelectFollowerItem__);
      v100 = (System_Reflection_MethodBase_o *)sub_1C3703C(v99, v99[4]);
      OverwriteAssetSoundName__PlaySystemSe(v100, 2, 0, 0);
      v101 = v8->fields.tutorialMode;
      if ( v101 == 3 )
      {
LABEL_187:
        operationItemListViewManager = v8->fields.operationItemListViewManager;
        v137 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1C372A4(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
        FollowerSelectItemListViewManager_CallbackFunc___ctor(
          v137,
          (Il2CppObject *)v8,
          (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
          0);
        if ( !operationItemListViewManager )
          goto LABEL_196;
        operationItemListViewManager->fields.callbackFunc = v137;
        sub_1C36FFC(&operationItemListViewManager->fields.callbackFunc, v137);
        v134 = 4;
LABEL_182:
        FollowerSelectItemListViewManager__SetMode_32721392(operationItemListViewManager, v134, v133);
        return;
      }
      if ( v101 == 2 )
        goto LABEL_179;
      return;
    case 7:
    case 13:
      v72 = Method_FollowerRootComponent_OnSelectFollowerItem__;
      if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
        v72 = (_QWORD *)sub_1C37070(Method_FollowerRootComponent_OnSelectFollowerItem__);
      v73 = (System_Reflection_MethodBase_o *)sub_1C3703C(v72, v72[4]);
      OverwriteAssetSoundName__PlaySystemSe(v73, 0, 0, 0);
      if ( !FollowerListRequest_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FollowerListRequest_TypeInfo);
      v74 = FollowerListRequest__checkRefreshRate(0);
      v75 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C372A4(CommonConfirmDialog_ClickDelegate_TypeInfo);
      CommonConfirmDialog_ClickDelegate___ctor(
        v75,
        (Il2CppObject *)v8,
        Method_FollowerRootComponent_EndRefreshConfirm__,
        0);
      if ( kind == 13 )
      {
        if ( !FollowerRecommendSupportListRequest_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FollowerRecommendSupportListRequest_TypeInfo);
        v76 = FollowerRecommendSupportListRequest__CheckRefreshRate(0);
        v75 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C372A4(CommonConfirmDialog_ClickDelegate_TypeInfo);
        CommonConfirmDialog_ClickDelegate___ctor(
          v75,
          (Il2CppObject *)v8,
          Method_FollowerRootComponent_EndRecommendRefreshConfirm__,
          0);
        if ( v76 )
        {
LABEL_73:
          commonConfirmDialog = v8->fields.commonConfirmDialog;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v78 = LocalizationManager__Get((System_String_o *)StringLiteral_6463/*"FOLLOWER_SELECT_REFRESH_TITLE"*/, 0);
          this = (FollowerRootComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6460/*"FOLLOWER_SELECT_REFRESH_MESSAGE"*/, 0);
          v79 = this;
          if ( !FollowerRootComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(FollowerRootComponent_TypeInfo);
          if ( commonConfirmDialog )
          {
            CommonConfirmDialog__Open_31182160(
              commonConfirmDialog,
              v78,
              (System_String_o *)v79,
              1,
              v75,
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
      else if ( v74 )
      {
        goto LABEL_73;
      }
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v107 = LocalizationManager__Get((System_String_o *)StringLiteral_6462/*"FOLLOWER_SELECT_REFRESH_REST_TITLE"*/, 0);
      v108 = LocalizationManager__Get((System_String_o *)StringLiteral_6461/*"FOLLOWER_SELECT_REFRESH_REST_MESSAGE"*/, 0);
      v109 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(v109, (Il2CppObject *)v8, Method_FollowerRootComponent_EndRefreshRest__, 0);
      if ( Instance )
      {
        CommonUI__OpenNotificationDialog(
          (CommonUI_o *)Instance,
          v107,
          v108,
          v109,
          -1,
          0,
          0,
          0,
          0,
          0,
          1,
          0,
          0,
          0.0,
          0,
          0);
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
        sub_1C372BC(this);
      v12 = skillInfoList->m_Items[v11];
      if ( v12 && v12->fields.id >= 1 && v12->fields.lv >= 1 )
      {
        v13 = Method_FollowerRootComponent_OnSelectFollowerItem__;
        if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
          v13 = (_QWORD *)sub_1C37070(Method_FollowerRootComponent_OnSelectFollowerItem__);
        v14 = (System_Reflection_MethodBase_o *)sub_1C3703C(v13, v13[4]);
        OverwriteAssetSoundName__PlaySystemSe(v14, 0, 0, 0);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (FollowerRootComponent_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_SkillMaster___);
        if ( !this )
          goto LABEL_196;
        v15 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                v12->fields.id,
                (const MethodInfo_33A10A0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        this = (FollowerRootComponent_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_SkillLvMaster___);
        if ( !this )
          goto LABEL_196;
        this = (FollowerRootComponent_o *)SkillLvMaster__GetEntity(
                                            (SkillLvMaster_o *)this,
                                            v12->fields.id,
                                            v12->fields.lv,
                                            0);
        if ( !v15 )
          goto LABEL_196;
        SkillEntity__getSkillMessageInfo((SkillEntity_o *)v15, &name, &detail, v12->fields.lv, 0);
        v16 = name;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v17 = LocalizationManager__Get((System_String_o *)StringLiteral_8550/*"MASTER_EQSKILL_LV_TXT"*/, 0);
        lv = v12->fields.lv;
        v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv, v18, v19, v20, v21, v22, v23);
        v25 = System_String__Format(v17, v24, 0);
        name = System_String__Concat_63599904(v16, (System_String_o *)StringLiteral_113/*" "*/, v25, 0);
        v26 = v8->fields.tutorialMode;
        this = (FollowerRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !this )
          goto LABEL_196;
        if ( v26 == 3 )
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
        v27 = Method_FollowerRootComponent_OnSelectFollowerItem__;
        if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
          v27 = (_QWORD *)sub_1C37070(Method_FollowerRootComponent_OnSelectFollowerItem__);
        v28 = (System_Reflection_MethodBase_o *)sub_1C3703C(v27, v27[4]);
        OverwriteAssetSoundName__PlaySystemSe(v28, 2, 0, 0);
      }
LABEL_30:
      operationItemListViewManager = v8->fields.operationItemListViewManager;
      v30 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1C372A4(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
      v31 = Method_FollowerRootComponent_OnSelectFollowerItem__;
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
      this = (FollowerRootComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !this )
        goto LABEL_196;
      LOBYTE(this->fields.operationItemListViewManager) = 1;
LABEL_128:
      v103 = (NetworkManager_ResultCallbackFunc_o *)sub_1C372A4(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v103,
        (Il2CppObject *)v8,
        Method_FollowerRootComponent_CallbackRefresh__,
        0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      this = (FollowerRootComponent_o *)NetworkManager__getRequest_object_(
                                          v103,
                                          (const MethodInfo_3172CF0 *)Method_NetworkManager_getRequest_FollowerRecommendSupportListRequest___);
      if ( !v8->fields.battleSetupInfo )
        goto LABEL_196;
      v104 = (FollowerRecommendSupportListRequest_o *)this;
      this = (FollowerRootComponent_o *)BattleSetupInfo__TargetQuestId(v8->fields.battleSetupInfo, 0);
      v105 = v8->fields.battleSetupInfo;
      if ( !v105 || !v104 )
        goto LABEL_196;
      FollowerRecommendSupportListRequest__beginRequest(v104, 0, (int32_t)this, v105->fields.questPhase, 0);
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
      v84 = this;
      if ( FollowerSelectItemListViewItem__get_SvtId((FollowerSelectItemListViewItem_o *)this, v83) < 1
        || LOBYTE(v84->fields.state)
        || BYTE3(v84[1].monitor) )
      {
        goto LABEL_175;
      }
      this = (FollowerRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
      if ( !this )
        goto LABEL_196;
      if ( !BYTE4(this->fields.battleSetupInfo) )
        goto LABEL_100;
      this = (FollowerRootComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      v85 = this;
      v86 = FollowerRootComponent___c_TypeInfo;
      if ( !FollowerRootComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FollowerRootComponent___c_TypeInfo);
        v86 = FollowerRootComponent___c_TypeInfo;
      }
      _9__67_0 = v86->static_fields->__9__67_0;
      if ( !_9__67_0 )
      {
        if ( !v86->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v86);
          v86 = FollowerRootComponent___c_TypeInfo;
        }
        v88 = (Il2CppObject *)v86->static_fields->__9;
        _9__67_0 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
        System_Action___ctor(_9__67_0, v88, Method_FollowerRootComponent___c__OnSelectFollowerItem_b__67_0__, 0);
        static_fields = FollowerRootComponent___c_TypeInfo->static_fields;
        static_fields->__9__67_0 = _9__67_0;
        this = (FollowerRootComponent_o *)sub_1C36FFC(&static_fields->__9__67_0, _9__67_0);
      }
      if ( !v85 )
        goto LABEL_196;
      if ( PartyOrganizationUtility__OpenQuestUseItemExpiredDialog((PartyOrganizationUtility_o *)v85, _9__67_0, 0) )
        goto LABEL_30;
LABEL_100:
      v90 = Method_FollowerRootComponent_OnSelectFollowerItem__;
      if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
        v90 = (_QWORD *)sub_1C37070(Method_FollowerRootComponent_OnSelectFollowerItem__);
      v91 = (System_Reflection_MethodBase_o *)sub_1C3703C(v90, v90[4]);
      OverwriteAssetSoundName__PlaySystemSe(v91, 0, 0, 0);
      if ( !v8->fields.tutorialState )
        goto LABEL_107;
      v92 = v8->fields.tutorialMode;
      if ( v92 == 3 )
      {
        v8->fields.state = 4;
        v138 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v139 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
        System_Action___ctor(v139, (Il2CppObject *)v8, Method_FollowerRootComponent_EndCloseTutorialArrow__, 0);
        if ( !v138 )
          goto LABEL_196;
        CommonUI__CloseTutorialArrowMark((CommonUI_o *)v138, v139, 0);
      }
      else if ( v92 == 2 )
      {
        this = (FollowerRootComponent_o *)v8->fields.titleInfo;
        if ( this )
        {
          TitleInfoControl__setBackBtnEnable((TitleInfoControl_o *)this, 1, 0);
LABEL_107:
          this = (FollowerRootComponent_o *)v8->fields.myFSM;
          if ( this )
          {
            v93 = &StringLiteral_8655/*"MENU_SELECT_ITEM"*/;
LABEL_147:
            PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v93, 0);
            return;
          }
        }
LABEL_196:
        sub_1C372B4(this);
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
  if ( (byte_4C3DA95 & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&BgmManager_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_BgmMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C37058(&SoundManager_TypeInfo);
    this = (FollowerRootComponent_o *)sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C3DA95 = 1;
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
    this = (FollowerRootComponent_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
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
        this = (FollowerRootComponent_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_BgmMaster___);
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
        this = (FollowerRootComponent_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_BgmMaster___);
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
    this = (FollowerRootComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !this )
      goto LABEL_70;
    this = (FollowerRootComponent_o *)PartyOrganizationUtility__ExistsTemporaryPartyInfo(
                                        (PartyOrganizationUtility_o *)this,
                                        0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !System_String__IsNullOrEmpty(BgmFileName, 0) )
        FollowerRootComponent__SetBackupBgmName(v2, v12 & 1, v16);
      this = (FollowerRootComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
        this = (FollowerRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( this )
        {
          this = (FollowerRootComponent_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_QuestMaster___);
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
        sub_1C372B4(this);
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
  if ( (byte_4C3DA94 & 1) == 0 )
  {
    sub_1C37058(&SoundManager_TypeInfo);
    byte_4C3DA94 = 1;
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
    || (FollowerSelectItemListViewManager__DestroyList_32649568(operationItemListViewManager, 0, v2),
        (operationItemListViewManager = this->fields.operationItemListViewManager) == 0)
    || (operationItemListViewManager = (FollowerSelectItemListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                                (UnityEngine_Component_o *)operationItemListViewManager,
                                                                                0)) == 0 )
  {
    sub_1C372B4(operationItemListViewManager);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)operationItemListViewManager, 0, 0);
  this->fields.state = 0;
}


void FollowerRootComponent__RequestFollowerList(FollowerRootComponent_o *this, const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v3; // x20
  FollowerListRequest_o *Request_object; // x0
  FollowerListRequest_o *v5; // x20
  struct BattleSetupInfo_o *battleSetupInfo; // x8

  if ( (byte_4C3DA9E & 1) == 0 )
  {
    sub_1C37058(&Method_FollowerRootComponent_CallbackFollowerList__);
    sub_1C37058(&Method_NetworkManager_getRequest_FollowerListRequest___);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C37058(&StringLiteral_11084/*"REQUEST_OK"*/);
    byte_4C3DA9E = 1;
  }
  v3 = (NetworkManager_ResultCallbackFunc_o *)sub_1C372A4(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v3,
    (Il2CppObject *)this,
    Method_FollowerRootComponent_CallbackFollowerList__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = (FollowerListRequest_o *)NetworkManager__getRequest_object_(
                                              v3,
                                              (const MethodInfo_3172CF0 *)Method_NetworkManager_getRequest_FollowerListRequest___);
  if ( !Request_object )
    goto LABEL_12;
  v5 = Request_object;
  if ( (((__int64 (__fastcall *)(FollowerListRequest_o *, const MethodInfo *))Request_object->klass->vtable._7_checkExpirationDate.methodPtr)(
          Request_object,
          Request_object->klass->vtable._7_checkExpirationDate.method)
      & 1) != 0 )
  {
    Request_object = (FollowerListRequest_o *)this->fields.myFSM;
    if ( Request_object )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Request_object, (System_String_o *)StringLiteral_11084/*"REQUEST_OK"*/, 0);
      return;
    }
LABEL_12:
    sub_1C372B4(Request_object);
  }
  Request_object = (FollowerListRequest_o *)this->fields.battleSetupInfo;
  if ( !Request_object )
    goto LABEL_12;
  Request_object = (FollowerListRequest_o *)BattleSetupInfo__TargetQuestId((BattleSetupInfo_o *)Request_object, 0);
  battleSetupInfo = this->fields.battleSetupInfo;
  if ( !battleSetupInfo )
    goto LABEL_12;
  FollowerListRequest__beginRequest(v5, 0, (int32_t)Request_object, battleSetupInfo->fields.questPhase, 0);
}


bool FollowerRootComponent__ReturnBattleSetupMenu(FollowerRootComponent_o *this, const MethodInfo *method)
{
  FollowerRootComponent_o *v2; // x20
  struct BattleSetupInfo_o *battleSetupInfo; // x19

  v2 = this;
  if ( (byte_4C3DAAB & 1) == 0 )
  {
    this = (FollowerRootComponent_o *)sub_1C37058(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C3DAAB = 1;
  }
  battleSetupInfo = v2->fields.battleSetupInfo;
  v2->fields.state = 5;
  if ( !battleSetupInfo )
    goto LABEL_8;
  if ( battleSetupInfo->fields.isChildFollower )
    battleSetupInfo->fields.followerId = 0;
  this = (FollowerRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !this )
LABEL_8:
    sub_1C372B4(this);
  AvalonSceneManager__pushScene((AvalonSceneManager_o *)this, 40, 1, (Il2CppObject *)battleSetupInfo, 0);
  return 1;
}


bool FollowerRootComponent__ReturnQuestMenu(FollowerRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *battleSetupInfo; // x20
  System_String_o *backupBgmName; // x22
  Il2CppObject *Instance; // x0
  TerminalPramsManager_c *v6; // x0

  if ( (byte_4C3DAAA & 1) == 0 )
  {
    sub_1C37058(&Method_AvalonSceneManager_UnloadScene_PartyOrganizationRootComponent___);
    sub_1C37058(&QuestHintDialogOpenManager_TypeInfo);
    sub_1C37058(&RandomLimitCountManager_TypeInfo);
    sub_1C37058(&ScriptManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C37058(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C37058(&SoundManager_TypeInfo);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3DAAA = 1;
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
  sub_1C36FFC(&this->fields.battleSetupInfo, 0);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__ClearSelectRouteArray(0);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  if ( BYTE6(Instance[11].klass) )
  {
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_31;
    BYTE6(Instance[11].klass) = 0;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C3D786 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C3D786 = 1;
    }
    v6 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v6 = TerminalPramsManager_TypeInfo;
    }
    v6->static_fields->_IsAutoResume_k__BackingField = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  if ( AvalonSceneManager__IsStackScene((AvalonSceneManager_o *)Instance, 0) )
  {
    this->fields.state = 0;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_31;
    AvalonSceneManager__popSceneRefresh((AvalonSceneManager_o *)Instance, 1, battleSetupInfo, 0);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_31;
    AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0, 0, 0);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
LABEL_31:
    sub_1C372B4(Instance);
  AvalonSceneManager__UnloadScene_object_(
    (AvalonSceneManager_o *)Instance,
    (const MethodInfo_30CFA20 *)Method_AvalonSceneManager_UnloadScene_PartyOrganizationRootComponent___);
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

  if ( (byte_4C3DA9C & 1) == 0 )
  {
    sub_1C37058(&AvalonSceneManager_TypeInfo);
    sub_1C37058(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    sub_1C37058(&Method_FollowerRootComponent_OnSelectFollowerItem__);
    sub_1C37058(&RandomLimitCountManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4C3DA9C = 1;
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
    v8 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1C372A4(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    FollowerSelectItemListViewManager_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
      0);
    if ( !v7 )
      goto LABEL_30;
    v7->fields.callbackFunc = v8;
    sub_1C36FFC(&v7->fields.callbackFunc, v8);
    FollowerSelectItemListViewManager__SetMode_32721392(v7, 3, v9);
    v11 = this->fields.operationItemListViewManager;
    if ( !v11 )
      goto LABEL_30;
    if ( !byte_4C3DB17 )
    {
      sub_1C37058(&FollowerSelectItemListViewManager_TypeInfo);
      byte_4C3DB17 = 1;
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
      sub_1C372B4(operationItemListViewManager);
    if ( (byte_4C3DB15 & 1) == 0 )
    {
      operationItemListViewManager = sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
      byte_4C3DB15 = 1;
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
    v16 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1C372A4(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    FollowerSelectItemListViewManager_CallbackFunc___ctor(
      v16,
      (Il2CppObject *)this,
      (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
      0);
    if ( !v15 )
      goto LABEL_30;
    v15->fields.callbackFunc = v16;
    sub_1C36FFC(&v15->fields.callbackFunc, v16);
    FollowerSelectItemListViewManager__SetMode_32721392(v15, 2, v17);
  }
  battleSetupInfo = this->fields.battleSetupInfo;
  if ( !battleSetupInfo )
    goto LABEL_30;
  followerQuestInfomationDraw = this->fields.followerQuestInfomationDraw;
  questRestrictionInfo = battleSetupInfo->fields.questRestrictionInfo;
  operationItemListViewManager = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !operationItemListViewManager || !followerQuestInfomationDraw )
    goto LABEL_30;
  FollowerQuestInfomationDraw__SetInfomation(
    followerQuestInfomationDraw,
    questRestrictionInfo,
    *(_DWORD *)(operationItemListViewManager + 64),
    0,
    v21);
  operationItemListViewManager = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  const MethodInfo *v6; // x1
  CommonUI_o *v7; // x21
  ServantLeaderInfo_o *ServantLeader; // x20
  ServantStatusDialog_EndDelegate_o *v9; // x22

  if ( (byte_4C3DAA4 & 1) == 0 )
  {
    sub_1C37058(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C37058(&Method_FollowerRootComponent_EndShowServant__);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C3DAA4 = 1;
  }
  operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager
    || (ListViewManager__GetScrollView(
          operationItemListViewManager,
          &this->fields.openScroll,
          &this->fields.openOffset,
          0),
        operationItemListViewManager = (ListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        !item)
    || (v7 = (CommonUI_o *)operationItemListViewManager,
        ServantLeader = FollowerSelectItemListViewItem__get_ServantLeader(item, v6),
        v9 = (ServantStatusDialog_EndDelegate_o *)sub_1C372A4(ServantStatusDialog_EndDelegate_TypeInfo),
        ServantStatusDialog_EndDelegate___ctor(
          v9,
          (Il2CppObject *)this,
          Method_FollowerRootComponent_EndShowServant__,
          0),
        !v7) )
  {
    sub_1C372B4(operationItemListViewManager);
  }
  CommonUI__OpenServantStatusDialog_31220608(v7, 5, ServantLeader, v9, 0);
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

  if ( (byte_4C3DAA7 & 1) == 0 )
  {
    sub_1C37058(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C37058(&Method_FollowerRootComponent_EndShowServantEquip__);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C3DAA7 = 1;
  }
  operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager
    || (ListViewManager__GetScrollView(
          operationItemListViewManager,
          &this->fields.openScroll,
          &this->fields.openOffset,
          0),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v9 = (ServantStatusDialog_EndDelegate_o *)sub_1C372A4(ServantStatusDialog_EndDelegate_TypeInfo),
        ServantStatusDialog_EndDelegate___ctor(
          v9,
          (Il2CppObject *)this,
          Method_FollowerRootComponent_EndShowServantEquip__,
          0),
        !Instance) )
  {
    sub_1C372B4(operationItemListViewManager);
  }
  CommonUI__OpenServantEquipStatusDialog_31223716((CommonUI_o *)Instance, statusKind, equipInfo, v9, 0, 0);
}


void FollowerRootComponent__SetBackupBgmName(
        FollowerRootComponent_o *this,
        bool isNonStopEndBgm,
        const MethodInfo *method)
{
  struct System_String_o *BgmName; // x0

  if ( (byte_4C3DA96 & 1) == 0 )
  {
    sub_1C37058(&SoundManager_TypeInfo);
    byte_4C3DA96 = 1;
  }
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  if ( SoundManager__isPlayBgm(0, 0) && !isNonStopEndBgm )
  {
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    BgmName = SoundManager__getBgmName(0);
    this->fields.backupBgmName = BgmName;
    sub_1C36FFC(&this->fields.backupBgmName, BgmName);
  }
}


bool FollowerRootComponent__SetFollowerBase(UISprite_o *sprite, System_String_o *spriteName, const MethodInfo *method)
{
  FollowerRootComponent_c *v5; // x0
  UIAtlas_o *partyOrganizationAtlasCache; // x21

  if ( (byte_4C3DA91 & 1) == 0 )
  {
    sub_1C37058(&AtlasManager_TypeInfo);
    sub_1C37058(&FollowerRootComponent_TypeInfo);
    byte_4C3DA91 = 1;
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
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x5
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  int64_t followerId; // x1
  int32_t ItemIndex_32658292; // w0
  int32_t selectItemNum; // w1
  __int64 v10; // x9
  struct BattleSetupInfo_o *v11; // x8
  int64_t v12; // x10
  int32_t v13; // w10
  __int64 v14; // x10
  __int64 v15; // x10
  int32_t v16; // w9
  Il2CppObject *v17; // x19

  if ( (byte_4C3DAAC & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C37058(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4C3DAAC = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
      ItemIndex_32658292 = FollowerSelectItemListViewManager__GetItemIndex_32658292(
                             (FollowerSelectItemListViewManager_o *)Instance,
                             followerId,
                             battleSetupInfo->fields.followerClassId,
                             battleSetupInfo->fields.followerSupportDeckId,
                             battleSetupInfo->fields.followerGrandGraphId,
                             v5);
      this->fields.selectItemNum = ItemIndex_32658292 & ~(ItemIndex_32658292 >> 31);
    }
    goto LABEL_28;
  }
  battleSetupInfo->fields.followerId = 0;
  selectItemNum = this->fields.selectItemNum;
  if ( (selectItemNum & 0x80000000) == 0 )
  {
    Instance = this->fields.operationItemListViewManager;
    if ( !Instance )
      goto LABEL_31;
    Instance = FollowerSelectItemListViewManager__GetItem(
                 (FollowerSelectItemListViewManager_o *)Instance,
                 selectItemNum,
                 v4);
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
            sub_1C372BC(Instance);
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
      sub_1C372B4(Instance);
    }
  }
LABEL_28:
  this->fields.state = 5;
  v17 = (Il2CppObject *)this->fields.battleSetupInfo;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  AvalonSceneManager__pushScene((AvalonSceneManager_o *)Instance, 40, 1, v17, 0);
  return 1;
}


bool FollowerRootComponent__StartSupportInfoMenu(FollowerRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t selectItemNum; // w1
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x0
  FollowerSelectItemListViewItem_o *Item; // x0
  FollowerSelectItemListViewItem_o *v7; // x20
  Il2CppClass *klass; // x8
  int namespaze; // w9
  int v10; // w10
  FollowerInfo_o *v11; // x22
  struct FollowerInfo_o *followerInfo; // x11
  Il2CppClass *v13; // x8
  const char *v14; // x9
  int v15; // w10
  FollowerInfo_o *v16; // x21
  struct FollowerInfo_o *userId; // x11
  bool v18; // w22
  SupportInfoJump_o *v20; // x21
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  struct FollowerSelectItemListViewManager_FollowerSelectItemOption_o *Option_k__BackingField; // x8
  _BOOL4 IsGrandSvt_k__BackingField; // w19
  int32_t v24; // w1
  Il2CppObject *v25; // x3
  SupportInfoJump_o *v26; // x20
  struct BattleSetupInfo_o *v27; // x8
  Il2CppObject *v28; // [xsp+8h] [xbp-38h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4C3DAAD & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_PickupUserFollowerMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_UserFollowerMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long__TryGetSingleEntity__);
    sub_1C37058(&Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long__TryGetSingleEntity__);
    sub_1C37058(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C37058(&SupportInfoJump_TypeInfo);
    byte_4C3DAAD = 1;
  }
  entity = 0;
  v28 = 0;
  selectItemNum = this->fields.selectItemNum;
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
      operationItemListViewManager = (FollowerSelectItemListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_UserFollowerMaster___);
      if ( !operationItemListViewManager )
        goto LABEL_50;
      operationItemListViewManager = (FollowerSelectItemListViewManager_o *)DataMasterBase_object__object__long___TryGetSingleEntity(
                                                                              (DataMasterBase_TMaster__TEntity__PKType__o *)operationItemListViewManager,
                                                                              &entity,
                                                                              (const MethodInfo_33A3728 *)Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long__TryGetSingleEntity__);
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
          v10 = 0;
          while ( 1 )
          {
            if ( namespaze == v10 )
              sub_1C372BC(operationItemListViewManager);
            v11 = (FollowerInfo_o *)*((_QWORD *)&klass->_1.byval_arg.data + v10);
            if ( !v11 )
              goto LABEL_50;
            followerInfo = v7->fields.followerInfo;
            if ( followerInfo )
              followerInfo = (struct FollowerInfo_o *)followerInfo->fields.userId;
            if ( (struct FollowerInfo_o *)v11->fields.userId == followerInfo )
              break;
            if ( namespaze == ++v10 )
              goto LABEL_20;
          }
          this->fields.state = 6;
          v20 = (SupportInfoJump_o *)sub_1C372A4(SupportInfoJump_TypeInfo);
          SupportInfoJump___ctor_41526596(v20, v11, 0, 1, 0);
          battleSetupInfo = this->fields.battleSetupInfo;
          if ( battleSetupInfo )
          {
            if ( v20 )
            {
              SupportInfoJump__SetSetupInfo(
                v20,
                battleSetupInfo->fields.eventUpValSetupInfo,
                battleSetupInfo->fields.questRestrictionInfo,
                0);
              Option_k__BackingField = v7->fields._Option_k__BackingField;
              if ( Option_k__BackingField )
              {
                SupportInfoJump__SetIsUseGrandSupport(v20, Option_k__BackingField->fields.isUseGrandBoard, 0);
                IsGrandSvt_k__BackingField = v7->fields._IsGrandSvt_k__BackingField;
                operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
                if ( operationItemListViewManager )
                {
                  if ( IsGrandSvt_k__BackingField )
                    v24 = 43;
                  else
                    v24 = 60;
                  v18 = 1;
                  v25 = (Il2CppObject *)v20;
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
      operationItemListViewManager = (FollowerSelectItemListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_PickupUserFollowerMaster___);
      if ( !operationItemListViewManager )
        goto LABEL_50;
      operationItemListViewManager = (FollowerSelectItemListViewManager_o *)DataMasterBase_object__object__long___TryGetSingleEntity(
                                                                              (DataMasterBase_TMaster__TEntity__PKType__o *)operationItemListViewManager,
                                                                              &v28,
                                                                              (const MethodInfo_33A3728 *)Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long__TryGetSingleEntity__);
      if ( ((unsigned __int8)operationItemListViewManager & 1) != 0 )
      {
        if ( !v28 )
          goto LABEL_50;
        v13 = v28[1].klass;
        if ( v13 )
        {
          v14 = v13->_1.namespaze;
          if ( v14 )
          {
            if ( (int)v14 >= 1 )
            {
              v15 = 0;
              while ( 1 )
              {
                v16 = (FollowerInfo_o *)*((_QWORD *)&v13->_1.byval_arg.data + v15);
                if ( !v16 )
                  goto LABEL_50;
                userId = v7->fields.followerInfo;
                if ( userId )
                  userId = (struct FollowerInfo_o *)userId->fields.userId;
                if ( (struct FollowerInfo_o *)v16->fields.userId == userId )
                  break;
                ++v15;
                v18 = 0;
                if ( (_DWORD)v14 == v15 )
                  return v18;
              }
              this->fields.state = 6;
              v26 = (SupportInfoJump_o *)sub_1C372A4(SupportInfoJump_TypeInfo);
              SupportInfoJump___ctor_41526596(v26, v16, 0, 1, 0);
              v27 = this->fields.battleSetupInfo;
              if ( v27 )
              {
                if ( v26 )
                {
                  SupportInfoJump__SetSetupInfo(
                    v26,
                    v27->fields.eventUpValSetupInfo,
                    v27->fields.questRestrictionInfo,
                    0);
                  operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
                  if ( operationItemListViewManager )
                  {
                    v24 = 60;
                    v18 = 1;
                    v25 = (Il2CppObject *)v26;
LABEL_49:
                    AvalonSceneManager__pushScene((AvalonSceneManager_o *)operationItemListViewManager, v24, 1, v25, 0);
                    return v18;
                  }
                }
              }
LABEL_50:
              sub_1C372B4(operationItemListViewManager);
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
  Il2CppObject *MasterData_object; // x20
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  struct BattleSetupInfo_o *v6; // x8
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  Il2CppObject *Master_object; // x21
  EventQuestMaster_o *v9; // x22
  struct BattleSetupInfo_o *v10; // x8
  struct EventCampaignEntity_array *Data_41941424; // x0
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
  UserEventDeckEntity_o *v28; // x20
  __int64 v29; // x8
  int64_t currentCryptoKey; // x8
  int32_t v31; // w1
  System_Nullable_int__o v32; // x0
  struct BattleSetupInfo_o *v33; // x9
  struct QuestRestrictionInfo_o *v34; // x9
  int32_t j; // w21
  PartyOrganizationListViewItem_o *v36; // x0
  PartyOrganizationListViewItem_o *v37; // x22
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v39; // q0
  System_Int64_array *v40; // x23
  int32_t InitPos_k__BackingField; // w24
  int64_t v42; // x0
  const MethodInfo *v43; // x3
  System_Int64_array *v44; // x1
  FollowerRootComponent_o *v45; // x0
  const MethodInfo *v46; // x4
  UserServantEntity_array *UserServantList; // x21
  unsigned __int64 v48; // x22
  UserServantEntity_o **m_Items; // x24
  struct DeckServant_o *deckInfo; // x8
  struct DeckServantData_array *svts; // x8
  DeckServantData_o *v52; // x26
  const MethodInfo *v53; // x3
  System_Int64_array *v54; // x23
  System_Int64_array *v55; // x1
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

  if ( (byte_4C3DAA3 & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_UserDeckMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_UserEventDeckMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_EventQuestMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__TryGetEntity__);
    sub_1C37058(&LastUsedDeckNumberManager_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_1C37058(&Method_System_Nullable_int___ctor__);
    sub_1C37058(&Method_System_Nullable_int__get_HasValue__);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C37058(&OptionManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4C3DAA3 = 1;
  }
  *(_QWORD *)fpUpDuplicateSum = 0;
  entity = 0;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_136;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserDeckMaster___);
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
                 (const MethodInfo_33A3648 *)Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__TryGetEntity__);
  }
  else
  {
    v66 = Instance;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C3CD62 )
    {
      sub_1C37058(&NetworkManager_TypeInfo);
      byte_4C3CD62 = 1;
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
  v6 = this->fields.battleSetupInfo;
  if ( !v6 )
    goto LABEL_136;
  questRestrictionInfo = v6->fields.questRestrictionInfo;
  if ( questRestrictionInfo )
    QuestRestrictionInfo__SetDeckInfo(questRestrictionInfo, (UserDeckEntity_o *)entity, 0);
  this->fields.friendPointCampaignEntityList = 0;
  *(_QWORD *)&this->fields.friendPointUpVal = 0;
  sub_1C36FFC(&this->fields.friendPointCampaignEntityList, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_EventQuestMaster___);
  if ( !this->fields.battleSetupInfo )
    goto LABEL_136;
  v9 = (EventQuestMaster_o *)Instance;
  Instance = BattleSetupInfo__TargetQuestId(this->fields.battleSetupInfo, 0);
  v10 = this->fields.battleSetupInfo;
  if ( !v10 )
    goto LABEL_136;
  if ( !v9 )
    goto LABEL_136;
  Instance = (__int64)EventQuestMaster__GetEnabledEventCampaignForQuest(v9, Instance, v10->fields.questPhase, 0, 7, 0);
  if ( !Master_object )
    goto LABEL_136;
  Data_41941424 = EventCampaignMaster__getData_41941424(
                    (EventCampaignMaster_o *)Master_object,
                    24,
                    (EventEntity_array *)Instance,
                    0);
  this->fields.friendPointCampaignEntityList = Data_41941424;
  Instance = sub_1C36FFC(&this->fields.friendPointCampaignEntityList, Data_41941424);
  *(_QWORD *)fpUpDuplicateSum = 0;
  if ( this->fields.tutorialMode == 4 )
  {
    v12 = this->fields.battleSetupInfo;
    if ( !v12 )
      goto LABEL_136;
    if ( v12->fields.isChildFollower )
    {
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
          Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
    sub_1C372B4(Instance);
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
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_136;
      v23 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserEventDeckMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C3CD62 )
      {
        sub_1C37058(&NetworkManager_TypeInfo);
        byte_4C3CD62 = 1;
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
        sub_1C372BC(Instance);
      v28 = *(UserEventDeckEntity_o **)(Instance + 32);
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_136;
      if ( !*(_QWORD *)(Instance + 80) )
        goto LABEL_85;
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_136;
      v29 = *(_QWORD *)(Instance + 80);
      if ( !v29 )
        goto LABEL_136;
      currentCryptoKey = *(_QWORD *)(v29 + 176);
      if ( currentCryptoKey )
      {
        v31 = *(_DWORD *)(currentCryptoKey + 412);
        v32 = (System_Nullable_int__o)&v72;
        v72.fields.currentCryptoKey = 0;
        System_Nullable_int____ctor(v32, v31, (const MethodInfo_38C87A4 *)Method_System_Nullable_int___ctor__);
        currentCryptoKey = v72.fields.currentCryptoKey;
      }
      v33 = this->fields.battleSetupInfo;
      if ( !v33 )
        goto LABEL_136;
      v34 = v33->fields.questRestrictionInfo;
      if ( !v34 )
        goto LABEL_136;
      if ( (_BYTE)currentCryptoKey && v34->fields.eventDeckNum == HIDWORD(currentCryptoKey) )
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
          Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( !Instance )
            goto LABEL_136;
          Instance = *(_QWORD *)(Instance + 80);
          if ( !Instance )
            goto LABEL_136;
          v36 = PartyListViewItem__GetMember((PartyListViewItem_o *)Instance, j, 0);
          if ( v36 )
          {
            v37 = v36;
            if ( v36->fields.userServantEntity )
            {
              Instance = (__int64)PartyOrganizationListViewItem__GetEquipList(v36, 0);
              userServantEntity = v37->fields.userServantEntity;
              if ( !userServantEntity )
                goto LABEL_136;
              v39 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
              v40 = (System_Int64_array *)Instance;
              InitPos_k__BackingField = v37->fields._InitPos_k__BackingField;
              *(_OWORD *)&v72.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
              *(_OWORD *)&v72.fields.fakeValue = v39;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
              v71 = v72;
              v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v71, 0);
              Instance = (__int64)FollowerRootComponent__GetEquipIdsForGrandSvt(this, InitPos_k__BackingField, v42, v43);
              if ( !v37->fields.userServantEntity )
                goto LABEL_136;
              if ( Instance )
                v44 = (System_Int64_array *)Instance;
              else
                v44 = v40;
              v45 = (FollowerRootComponent_o *)UserServantEntity__GetFriendPointUpTypeVals(
                                                 v37->fields.userServantEntity,
                                                 v44,
                                                 0);
              FollowerRootComponent__GetFriendPointUpValSummary(
                v45,
                &fpUpDuplicateSum[1],
                fpUpDuplicateSum,
                (System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int___o *)v45,
                v46);
            }
          }
        }
        if ( v28 )
          goto LABEL_126;
      }
      else
      {
LABEL_85:
        if ( v28 )
        {
          UserServantList = UserEventDeckEntity__GetUserServantList(v28, 0, 0, 0);
          v48 = 0;
          m_Items = UserServantList->m_Items;
          while ( 1 )
          {
            Instance = (__int64)BalanceConfig_TypeInfo;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              Instance = (__int64)BalanceConfig_TypeInfo;
            }
            if ( (__int64)v48 >= *(int *)(*(_QWORD *)(Instance + 184) + 172LL) )
              break;
            deckInfo = v28->fields.deckInfo;
            if ( !deckInfo )
              goto LABEL_136;
            svts = deckInfo->fields.svts;
            if ( !svts )
              goto LABEL_136;
            if ( v48 >= LODWORD(svts->max_length) )
              goto LABEL_137;
            if ( !UserServantList )
              goto LABEL_136;
            if ( v48 >= LODWORD(UserServantList->max_length) )
              goto LABEL_137;
            if ( m_Items[v48] )
            {
              v52 = svts->m_Items[v48];
              Instance = (__int64)UserEventDeckEntity__GetEquipList(v28, v48, 0);
              if ( !v52 )
                goto LABEL_136;
              v54 = (System_Int64_array *)Instance;
              Instance = (__int64)FollowerRootComponent__GetEquipIdsForGrandSvt(
                                    this,
                                    v52->fields.initPos,
                                    v52->fields.userSvtId,
                                    v53);
              if ( Instance )
                v55 = (System_Int64_array *)Instance;
              else
                v55 = v54;
              if ( v48 >= LODWORD(UserServantList->max_length) )
                goto LABEL_137;
              Instance = (__int64)m_Items[v48];
              if ( !Instance )
                goto LABEL_136;
              v56 = (FollowerRootComponent_o *)UserServantEntity__GetFriendPointUpTypeVals(
                                                 (UserServantEntity_o *)Instance,
                                                 v55,
                                                 0);
              FollowerRootComponent__GetFriendPointUpValSummary(
                v56,
                &fpUpDuplicateSum[1],
                fpUpDuplicateSum,
                (System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int___o *)v56,
                v57);
            }
            ++v48;
          }
LABEL_126:
          v67 = this->fields.battleSetupInfo;
          if ( v67 )
          {
            Instance = (__int64)v67->fields.questRestrictionInfo;
            if ( Instance )
            {
              QuestRestrictionInfo__SetDeckInfo_43414728((QuestRestrictionInfo_o *)Instance, v28, 0);
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
  TerminalPramsManager_c *v6; // x0

  if ( (byte_4C3DABC & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&StringLiteral_3437/*"CLICK_BACK"*/);
    byte_4C3DABC = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  CommonUI__CloseConfirmDialog(Instance, 0);
  if ( isDecide )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C3D786 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C3D786 = 1;
    }
    v6 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v6 = TerminalPramsManager_TypeInfo;
    }
    v6->static_fields->_IsAutoResume_k__BackingField = 1;
    Instance = (CommonUI_o *)this->fields.myFSM;
    if ( Instance )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3437/*"CLICK_BACK"*/, 0);
      return;
    }
LABEL_14:
    sub_1C372B4(Instance);
  }
  this->fields.state = 3;
}


void FollowerRootComponent__beginFinish(FollowerRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x0
  FollowerRootComponent_c *v5; // x0
  struct FollowerRootComponent_StaticFields *static_fields; // x0

  if ( (byte_4C3DA9D & 1) == 0 )
  {
    sub_1C37058(&AtlasManager_TypeInfo);
    sub_1C37058(&FollowerRootComponent_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    byte_4C3DA9D = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  this->fields.state = 0;
  if ( !operationItemListViewManager )
    goto LABEL_14;
  FollowerSelectItemListViewManager__DestroyList_32649568(operationItemListViewManager, 0, v2);
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
  sub_1C36FFC(&static_fields->partyOrganizationAtlasCache, 0);
  operationItemListViewManager = (FollowerSelectItemListViewManager_o *)this->fields.backSkinSprite;
  if ( !operationItemListViewManager
    || (operationItemListViewManager = (FollowerSelectItemListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                                (UnityEngine_Component_o *)operationItemListViewManager,
                                                                                0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)operationItemListViewManager, 0, 0),
        (operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__)) == 0) )
  {
LABEL_14:
    sub_1C372B4(operationItemListViewManager);
  }
  AtlasManager__ReleaseUISkin((AtlasManager_o *)operationItemListViewManager, 2, 0, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleasePartyOrganizationAtlas(0);
}


void FollowerRootComponent__beginInitialize(FollowerRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C3DA92 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C3DA92 = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, (SceneRootComponent_o *)this, 0);
}


void FollowerRootComponent__beginPause(FollowerRootComponent_o *this, const MethodInfo *method)
{
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x0

  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    sub_1C372B4(0);
  FollowerSelectItemListViewManager__SaveSortFilter(operationItemListViewManager, method);
}


void FollowerRootComponent__beginResume(FollowerRootComponent_o *this, Il2CppObject *data, const MethodInfo *method)
{
  FollowerRootComponent_c *v5; // x0
  struct UIAtlas_o *partyOrganizationAtlas; // x21
  struct FollowerRootComponent_StaticFields *static_fields; // x0
  TitleInfoControl_o *titleInfo; // x21
  __int64 Instance; // x0
  bool v10; // w1
  struct FollowerSelectItemListViewManager_o *operationItemListViewManager; // x8
  const MethodInfo *selectItemNum; // x1
  const MethodInfo *v13; // x2
  __int64 naturalAligment; // x10
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x5
  __int64 v17; // x8
  struct BattleSetupInfo_o *battleSetupInfo; // x9
  int64_t v19; // x10
  Il2CppClass *v20; // x8
  __int64 v21; // x9
  Il2CppObject *v22; // x10
  Il2CppObject *v23; // x1
  struct BattleSetupInfo_o **p_battleSetupInfo; // x21
  struct BattleSetupInfo_o *v25; // x8
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x20
  int32_t tutorialMode; // w8
  struct BattleSetupInfo_o *v28; // x8
  FollowerSelectItemListViewManager_o *v29; // x20
  const MethodInfo *v30; // x7
  struct BattleSetupInfo_o *v31; // x8
  const MethodInfo *v32; // x4
  struct BattleSetupInfo_o *v33; // x8
  const MethodInfo *v34; // x1
  CommonUI_o *v35; // x20
  struct BattleSetupInfo_o *v36; // x8
  PartyListViewItem_o *v37; // x20
  UnityEngine_Component_o *v38; // x8
  int32_t i; // w21
  FollowerSelectItemListViewManager_o *v40; // x22
  const MethodInfo *v41; // x7
  struct BattleSetupInfo_o *v42; // x8
  const MethodInfo *v43; // x4
  struct BattleSetupInfo_o *v44; // x8
  struct FollowerSelectItemListViewManager_o *v45; // x22
  FollowerSelectItemListViewManager_CallbackFunc_o *v46; // x23
  const MethodInfo *v47; // x2
  PartyOrganizationListViewItem_o *Member; // x0
  struct FollowerInfo_o *followerInfo; // x8
  FollowerSelectItemListViewManager_o *v50; // x20
  int64_t userId; // x21
  const MethodInfo *v52; // x3
  struct QuestRestrictionInfo_o *v53; // x8
  BalanceConfig_c *v54; // x0
  int32_t v55; // w22
  PartyOrganizationListViewItem_o *v56; // x0
  struct FollowerInfo_o *v57; // x8
  int32_t monitor; // w4
  int klass_high; // w10
  int32_t v60; // w10
  int64_t v61; // x1
  struct BattleSetupInfo_o *v62; // x8
  int32_t followerClassId; // w1

  if ( (byte_4C3DA9B & 1) == 0 )
  {
    sub_1C37058(&AvalonSceneManager_TypeInfo);
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&BattleSetupInfo_TypeInfo);
    sub_1C37058(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    sub_1C37058(&Method_FollowerRootComponent_OnSelectFollowerItem__);
    sub_1C37058(&FollowerRootComponent_TypeInfo);
    sub_1C37058(&RandomLimitCountManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C37058(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C37058(&SupportInfoJump_TypeInfo);
    sub_1C37058(&TutorialFlag_TypeInfo);
    byte_4C3DA9B = 1;
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
  sub_1C36FFC(&static_fields->partyOrganizationAtlasCache, partyOrganizationAtlas);
  titleInfo = this->fields.titleInfo;
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_127;
  if ( *(_BYTE *)(Instance + 88) )
  {
    v10 = 0;
    if ( !titleInfo )
      goto LABEL_127;
  }
  else
  {
    v10 = this->fields.tutorialMode != 2;
    if ( !titleInfo )
      goto LABEL_127;
  }
  TitleInfoControl__setBackBtnEnable(titleInfo, v10, 0);
  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    goto LABEL_127;
  Instance = (__int64)operationItemListViewManager->fields.classButtonControl;
  if ( !Instance )
    goto LABEL_127;
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
        selectItemNum = (const MethodInfo *)(unsigned int)this->fields.selectItemNum;
        if ( ((unsigned int)selectItemNum & 0x80000000) == 0 )
        {
          Instance = (__int64)this->fields.operationItemListViewManager;
          if ( !Instance )
            goto LABEL_127;
          Instance = (__int64)FollowerSelectItemListViewManager__GetItem(
                                (FollowerSelectItemListViewManager_o *)Instance,
                                (int32_t)selectItemNum,
                                v13);
          if ( Instance )
          {
            this->fields.state = 5;
            v17 = *(_QWORD *)(Instance + 120);
            battleSetupInfo = this->fields.battleSetupInfo;
            if ( v17 )
              v19 = *(_QWORD *)(v17 + 16);
            else
              v19 = 0;
            if ( !battleSetupInfo )
              goto LABEL_127;
            battleSetupInfo->fields.followerId = v19;
            battleSetupInfo->fields.followerClassId = (int32_t)data[3].klass;
            monitor = (int32_t)data[4].monitor;
            battleSetupInfo->fields.followerGrandGraphId = monitor;
            klass_high = HIDWORD(data[3].klass);
            if ( klass_high <= 0 )
              klass_high = *(_DWORD *)(Instance + 272);
            battleSetupInfo->fields.followerSupportDeckId = klass_high;
            if ( v17 )
            {
              v60 = *(_DWORD *)(v17 + 36);
              battleSetupInfo->fields.followerType = 0;
              if ( (v60 | 4) == 5 )
                battleSetupInfo->fields.followerType = v60;
              if ( monitor >= 1 )
              {
                v61 = *(_QWORD *)(v17 + 16);
LABEL_112:
                Instance = (__int64)this->fields.operationItemListViewManager;
                if ( !Instance )
                  goto LABEL_127;
                Instance = FollowerSelectItemListViewManager__GetItemIndex_32658292(
                             (FollowerSelectItemListViewManager_o *)Instance,
                             v61,
                             0,
                             0,
                             monitor,
                             v16);
                this->fields.selectItemNum = Instance;
              }
            }
            else
            {
              battleSetupInfo->fields.followerType = 0;
              if ( monitor >= 1 )
              {
                v61 = 0;
                goto LABEL_112;
              }
            }
            if ( this->fields.operationItemListViewManager )
            {
              if ( !byte_4C3DB17 )
              {
                sub_1C37058(&FollowerSelectItemListViewManager_TypeInfo);
                byte_4C3DB17 = 1;
              }
              Instance = (__int64)FollowerSelectItemListViewManager_TypeInfo;
              if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
                Instance = (__int64)FollowerSelectItemListViewManager_TypeInfo;
              }
              v62 = this->fields.battleSetupInfo;
              if ( v62 )
              {
                followerClassId = v62->fields.followerClassId;
                if ( *(_DWORD *)(*(_QWORD *)(Instance + 184) + 8LL) != followerClassId )
                {
                  Instance = (__int64)this->fields.operationItemListViewManager;
                  if ( !Instance )
                    goto LABEL_127;
                  if ( FollowerSelectItemListViewManager__ChangeClass(
                         (FollowerSelectItemListViewManager_o *)Instance,
                         followerClassId,
                         v15) )
                  {
                    Instance = (__int64)this->fields.operationItemListViewManager;
                    if ( !Instance )
                      goto LABEL_127;
                    ListViewManager__JumpItem((ListViewManager_o *)Instance, this->fields.selectItemNum, 0);
                  }
                }
                Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
LABEL_127:
            sub_1C372B4(Instance);
          }
        }
      }
    }
    goto LABEL_40;
  }
  if ( data )
  {
    v20 = (Il2CppClass *)BattleSetupInfo_TypeInfo;
    v21 = BattleSetupInfo_TypeInfo->_2.naturalAligment;
    if ( data->klass->_2.naturalAligment >= (unsigned int)v21 )
    {
      if ( (BattleSetupInfo_c *)data->klass->_2.typeHierarchy[v21 - 1] == BattleSetupInfo_TypeInfo )
        v22 = data;
      else
        v22 = 0;
    }
    else
    {
      v22 = 0;
    }
    this->fields.battleSetupInfo = (struct BattleSetupInfo_o *)v22;
    p_battleSetupInfo = &this->fields.battleSetupInfo;
    if ( data->klass->_2.naturalAligment >= (unsigned int)v21 )
    {
      if ( data->klass->_2.typeHierarchy[v21 - 1] == v20 )
        v23 = data;
      else
        v23 = 0;
    }
    else
    {
      v23 = 0;
    }
  }
  else
  {
    v23 = 0;
    this->fields.battleSetupInfo = 0;
    p_battleSetupInfo = &this->fields.battleSetupInfo;
  }
  Instance = sub_1C36FFC(p_battleSetupInfo, v23);
  v25 = *p_battleSetupInfo;
  if ( *p_battleSetupInfo )
  {
    questRestrictionInfo = v25->fields.questRestrictionInfo;
    if ( !questRestrictionInfo )
      goto LABEL_127;
    if ( !QuestRestrictionInfo__IsMyServantOrNpcRestriction(v25->fields.questRestrictionInfo, 0)
      && (questRestrictionInfo->fields.isNoSupportBattle
       || questRestrictionInfo->fields.isFixedMyServantSingle
       || questRestrictionInfo->fields.isSupportOnlyForceBattle) )
    {
      goto LABEL_92;
    }
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    Instance = TutorialFlag__Get_40427704(102, 0);
    if ( (Instance & 1) == 0 )
    {
      v28 = *p_battleSetupInfo;
      if ( !*p_battleSetupInfo )
        goto LABEL_127;
LABEL_63:
      if ( v28->fields.isChildFollower )
      {
        FollowerRootComponent__ReturnBattleSetupMenu(this, selectItemNum);
        return;
      }
      goto LABEL_92;
    }
LABEL_40:
    FollowerRootComponent__UpdateDeckInfomation(this, selectItemNum);
    tutorialMode = this->fields.tutorialMode;
    if ( tutorialMode != 4 )
    {
      if ( tutorialMode != 3 )
      {
        if ( tutorialMode == 1 )
        {
          v28 = this->fields.battleSetupInfo;
          if ( !v28 )
            goto LABEL_127;
          goto LABEL_63;
        }
LABEL_51:
        FollowerRootComponent__ReturnSupportList(this, selectItemNum);
        return;
      }
      Instance = (__int64)this->fields.battleSetupInfo;
      this->fields.selectItemNum = -1;
      *(_QWORD *)&this->fields.tutorialMode = 0x100000003LL;
      if ( !Instance )
        goto LABEL_127;
      v29 = this->fields.operationItemListViewManager;
      Instance = BattleSetupInfo__TargetQuestId((BattleSetupInfo_o *)Instance, 0);
      v31 = this->fields.battleSetupInfo;
      if ( !v31 )
        goto LABEL_127;
      if ( !v29 )
        goto LABEL_127;
      FollowerSelectItemListViewManager__CreateList(
        v29,
        Instance,
        v31->fields.questPhase,
        this->fields.friendPointUpVal,
        this->fields.friendPointUpMaxVal,
        this->fields.friendPointCampaignEntityList,
        v31->fields.questRestrictionInfo,
        v30);
      v33 = this->fields.battleSetupInfo;
      if ( !v33 )
        goto LABEL_127;
      Instance = (__int64)this->fields.followerQuestInfomationDraw;
      if ( !Instance )
        goto LABEL_127;
      FollowerQuestInfomationDraw__SetInfomation(
        (FollowerQuestInfomationDraw_o *)Instance,
        v33->fields.questRestrictionInfo,
        0,
        0,
        v32);
      this->fields.state = 2;
      FollowerRootComponent__OnMoveEnd(this, v34);
LABEL_58:
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v35 = (CommonUI_o *)Instance;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      if ( v35 )
      {
        CommonUI__maskFadein(v35, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0);
        SceneRootComponent__sendMessageResume((SceneRootComponent_o *)this, 0);
        return;
      }
      goto LABEL_127;
    }
    if ( this->fields.state == 6 )
      goto LABEL_51;
    v36 = this->fields.battleSetupInfo;
    if ( !v36 )
      goto LABEL_127;
    if ( v36->fields.isChildFollower )
      goto LABEL_130;
    v53 = v36->fields.questRestrictionInfo;
    if ( !v53 )
      goto LABEL_127;
    if ( !v53->fields.isNotTransitionSupportList )
    {
LABEL_130:
      if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
      RandomLimitCountManager__set_EnableRandomLimitCount(0, 0);
      RandomLimitCountManager__set_EnableRandomLimitCount(1, 0);
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_127;
      v37 = *(PartyListViewItem_o **)(Instance + 80);
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_127;
      v38 = (UnityEngine_Component_o *)this->fields.operationItemListViewManager;
      i = *(_DWORD *)(Instance + 64);
      this->fields.tutorialState = 0;
      this->fields.selectItemNum = -1;
      if ( !v38 )
        goto LABEL_127;
      Instance = (__int64)UnityEngine_Component__get_gameObject(v38, 0);
      if ( !Instance )
        goto LABEL_127;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
      Instance = (__int64)this->fields.battleSetupInfo;
      if ( !Instance )
        goto LABEL_127;
      v40 = this->fields.operationItemListViewManager;
      Instance = BattleSetupInfo__TargetQuestId((BattleSetupInfo_o *)Instance, 0);
      v42 = this->fields.battleSetupInfo;
      if ( !v42 )
        goto LABEL_127;
      if ( !v40 )
        goto LABEL_127;
      FollowerSelectItemListViewManager__CreateList(
        v40,
        Instance,
        v42->fields.questPhase,
        this->fields.friendPointUpVal,
        this->fields.friendPointUpMaxVal,
        this->fields.friendPointCampaignEntityList,
        v42->fields.questRestrictionInfo,
        v41);
      v44 = this->fields.battleSetupInfo;
      if ( !v44 )
        goto LABEL_127;
      Instance = (__int64)this->fields.followerQuestInfomationDraw;
      if ( !Instance )
        goto LABEL_127;
      FollowerQuestInfomationDraw__SetInfomation(
        (FollowerQuestInfomationDraw_o *)Instance,
        v44->fields.questRestrictionInfo,
        i,
        0,
        v43);
      this->fields.state = 3;
      v45 = this->fields.operationItemListViewManager;
      v46 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1C372A4(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
      FollowerSelectItemListViewManager_CallbackFunc___ctor(
        v46,
        (Il2CppObject *)this,
        (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
        0);
      if ( !v45 )
        goto LABEL_127;
      v45->fields.callbackFunc = v46;
      sub_1C36FFC(&v45->fields.callbackFunc, v46);
      FollowerSelectItemListViewManager__SetMode_32721392(v45, 2, v47);
      if ( v37 )
      {
        Instance = (__int64)this->fields.operationItemListViewManager;
        if ( !Instance )
          goto LABEL_127;
        if ( ListViewManager__get_ItemSum((ListViewManager_o *)Instance, 0) >= 3 )
        {
          if ( i )
          {
LABEL_83:
            if ( i >= 1 )
            {
              Member = PartyListViewItem__GetMember(v37, i - 1, 0);
              if ( Member )
              {
                followerInfo = Member->fields.followerInfo;
                if ( followerInfo )
                {
                  v50 = this->fields.operationItemListViewManager;
                  userId = followerInfo->fields.userId;
                  Instance = (__int64)PartyOrganizationListViewItem__get_ServantLeader(Member, 0);
                  if ( !Instance )
                    goto LABEL_127;
                  if ( !v50 )
                    goto LABEL_127;
                  Instance = FollowerSelectItemListViewManager__GetItemIndex(
                               v50,
                               userId,
                               *(_QWORD *)(Instance + 40),
                               v52);
                  if ( !this->fields.operationItemListViewManager )
                    goto LABEL_127;
                  ListViewManager__JumpItem((ListViewManager_o *)this->fields.operationItemListViewManager, Instance, 0);
                }
              }
            }
          }
          else
          {
            for ( i = 1; ; ++i )
            {
              v54 = BalanceConfig_TypeInfo;
              v55 = i - 1;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v54 = BalanceConfig_TypeInfo;
              }
              if ( v55 >= v54->static_fields->DeckMemberMax )
                break;
              v56 = PartyListViewItem__GetMember(v37, v55, 0);
              if ( v56 )
              {
                v57 = v56->fields.followerInfo;
                if ( v57 )
                {
                  if ( Follower__IsNotNpc(v57->fields.type, 0) )
                    goto LABEL_83;
                }
              }
            }
          }
        }
      }
      goto LABEL_58;
    }
LABEL_92:
    FollowerRootComponent__ReturnQuestMenu(this, selectItemNum);
  }
}


void FollowerRootComponent__beginStartUp(FollowerRootComponent_o *this, Il2CppObject *data, const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v6; // x8
  struct BattleSetupInfo_o *v7; // x1
  const MethodInfo *v8; // x1
  Il2CppClass *v9; // x8
  __int64 naturalAligment; // x9
  struct BattleSetupInfo_o *v11; // x10
  Il2CppObject *v12; // x1
  struct BattleSetupInfo_o **p_battleSetupInfo; // x0
  const MethodInfo *v14; // x1
  FollowerRootComponent_c *v15; // x0
  struct UIAtlas_o *partyOrganizationAtlas; // x20
  struct FollowerRootComponent_StaticFields *static_fields; // x0
  const MethodInfo *v18; // x2
  UILabel_o *infomationLabel; // x20
  UnityEngine_GameObject_o *refreshButtonBase; // x20
  const MethodInfo *v21; // x1
  bool v22; // w8
  __int64 v23; // x8
  ConstantMaster_o *v24; // x20
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  System_Action_o *v26; // x20
  System_Action_o *v27; // x20
  QuestPhaseMaster_o *v28; // x20
  struct BattleSetupInfo_o *v29; // x8
  NpcFollowerMaster_o *v30; // x20
  struct BattleSetupInfo_o *v31; // x8
  struct BattleSetupInfo_o *v32; // x8
  const MethodInfo *v33; // x1
  const MethodInfo *v34; // x4
  struct BattleSetupInfo_o *v35; // x8

  if ( (byte_4C3DA93 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AtlasManager_TypeInfo);
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&BattleSetupInfo_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_ConstantMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_NpcFollowerMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1C37058(&Method_FollowerRootComponent_EndLoadCommonBg__);
    sub_1C37058(&Method_FollowerRootComponent_EndLoadPartyOrganizationAtlasSimple__);
    sub_1C37058(&FollowerRootComponent_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&RandomLimitCountManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C37058(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C37058(&TutorialFlag_TypeInfo);
    sub_1C37058(&StringLiteral_13612/*"TUTORIAL_SUPPORT_QUEST_ID"*/);
    sub_1C37058(&StringLiteral_13613/*"TUTORIAL_SUPPORT_QUEST_PHASE"*/);
    sub_1C37058(&StringLiteral_6441/*"FOLLOWER_SELECT_EXPLANATION2"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C3DA93 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_100;
  if ( PartyOrganizationUtility__ExistsTemporaryPartyInfo((PartyOrganizationUtility_o *)Instance, 0) )
  {
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_100;
    v6 = *((_QWORD *)Instance + 20);
    if ( !v6 )
      goto LABEL_100;
    v7 = *(struct BattleSetupInfo_o **)(v6 + 48);
    this->fields.battleSetupInfo = v7;
    sub_1C36FFC(&this->fields.battleSetupInfo, v7);
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !Instance )
      goto LABEL_100;
    if ( !MissionNotifyManager__IsPause((MissionNotifyManager_o *)Instance, 0) )
    {
      Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
      if ( !Instance )
        goto LABEL_100;
      MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0);
    }
  }
  else
  {
    if ( data )
    {
      v9 = (Il2CppClass *)BattleSetupInfo_TypeInfo;
      naturalAligment = BattleSetupInfo_TypeInfo->_2.naturalAligment;
      if ( data->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
        v11 = (BattleSetupInfo_c *)data->klass->_2.typeHierarchy[naturalAligment - 1] == BattleSetupInfo_TypeInfo
            ? (struct BattleSetupInfo_o *)data
            : 0LL;
      else
        v11 = 0;
      this->fields.battleSetupInfo = v11;
      p_battleSetupInfo = &this->fields.battleSetupInfo;
      if ( data->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
        v12 = data->klass->_2.typeHierarchy[naturalAligment - 1] == v9 ? data : 0LL;
      else
        v12 = 0;
    }
    else
    {
      v12 = 0;
      this->fields.battleSetupInfo = 0;
      p_battleSetupInfo = &this->fields.battleSetupInfo;
    }
    sub_1C36FFC(p_battleSetupInfo, v12);
  }
  if ( !this->fields.battleSetupInfo )
  {
    FollowerRootComponent__ReturnQuestMenu(this, v8);
    return;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  RandomLimitCountManager__set_EnableRandomLimitCount(1, 0);
  FollowerRootComponent__PlayBGM(this, v14);
  v15 = FollowerRootComponent_TypeInfo;
  partyOrganizationAtlas = this->fields.partyOrganizationAtlas;
  if ( !FollowerRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerRootComponent_TypeInfo);
    v15 = FollowerRootComponent_TypeInfo;
  }
  static_fields = v15->static_fields;
  static_fields->partyOrganizationAtlasCache = partyOrganizationAtlas;
  sub_1C36FFC(&static_fields->partyOrganizationAtlasCache, partyOrganizationAtlas);
  Instance = this->fields.titleInfo;
  if ( !Instance )
    goto LABEL_100;
  TitleInfoControl__setTitleInfo_39844916((TitleInfoControl_o *)Instance, this->fields.myFSM, 3, 66, 1, 0);
  Instance = this->fields.titleInfo;
  if ( !Instance )
    goto LABEL_100;
  TitleInfoControl__setBackBtnEnable((TitleInfoControl_o *)Instance, 1, 0);
  Instance = this->fields.operationItemListViewManager;
  if ( !Instance )
    goto LABEL_100;
  FollowerSelectItemListViewManager__DestroyList_32649568(
    (FollowerSelectItemListViewManager_o *)Instance,
    this->fields.battleSetupInfo,
    v18);
  infomationLabel = this->fields.infomationLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_6441/*"FOLLOWER_SELECT_EXPLANATION2"*/, 0);
  if ( !infomationLabel )
    goto LABEL_100;
  UILabel__set_text(infomationLabel, (System_String_o *)Instance, 0);
  Instance = BalanceConfig_TypeInfo;
  refreshButtonBase = this->fields.refreshButtonBase;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  if ( !refreshButtonBase )
    goto LABEL_100;
  UnityEngine_GameObject__SetActive(
    refreshButtonBase,
    BalanceConfig_TypeInfo->static_fields->FollowerRefreshRestTime >= 0,
    0);
  Instance = this->fields.battleSetupInfo;
  *(_QWORD *)&this->fields.tutorialMode = 0;
  this->fields.selectItemNum = -1;
  this->fields.isForceFadeOut = 0;
  this->fields.isInitRecommendRequest = 0;
  if ( !Instance )
    goto LABEL_100;
  BattleSetupInfo__SetSelectableQuests((BattleSetupInfo_o *)Instance, *((_BYTE *)Instance + 73), 0);
  Instance = this->fields.battleSetupInfo;
  if ( !Instance )
    goto LABEL_100;
  v22 = *((_QWORD *)Instance + 14) || *((_DWORD *)Instance + 30) != 0;
  if ( (v22 & *((_BYTE *)Instance + 73)) != 0
    && (BattleSetupInfo__SetRestriction((BattleSetupInfo_o *)Instance, 1, 0),
        (Instance = this->fields.battleSetupInfo) == 0)
    || (v23 = *((_QWORD *)Instance + 11)) == 0 )
  {
LABEL_100:
    sub_1C372B4(Instance);
  }
  if ( *(_BYTE *)(v23 + 394) )
  {
LABEL_48:
    FollowerRootComponent__StartBattleSetupMenu(this, v21);
    return;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_40427704(102, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_100;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ConstantMaster___);
    if ( !Instance )
      goto LABEL_100;
    v24 = (ConstantMaster_o *)Instance;
    Instance = (void *)ConstantMaster__GetValue((ConstantMaster_o *)Instance, (System_String_o *)StringLiteral_13612/*"TUTORIAL_SUPPORT_QUEST_ID"*/, 0);
    battleSetupInfo = this->fields.battleSetupInfo;
    if ( !battleSetupInfo )
      goto LABEL_100;
    if ( battleSetupInfo->fields.questId == (_DWORD)Instance )
    {
      Instance = (void *)ConstantMaster__GetValue(v24, (System_String_o *)StringLiteral_13613/*"TUTORIAL_SUPPORT_QUEST_PHASE"*/, 0);
      battleSetupInfo = this->fields.battleSetupInfo;
      if ( !battleSetupInfo )
        goto LABEL_100;
      if ( battleSetupInfo->fields.questPhase == (_DWORD)Instance )
        *(_QWORD *)&this->fields.tutorialMode = 0x100000003LL;
    }
  }
  else
  {
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( !TutorialFlag__IsProgressDone(3, 0) )
      goto LABEL_48;
    Instance = this->fields.infomationLabel;
    *(_QWORD *)&this->fields.tutorialMode = 0x100000002LL;
    if ( !Instance )
      goto LABEL_100;
    UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0);
    battleSetupInfo = this->fields.battleSetupInfo;
    if ( !battleSetupInfo )
      goto LABEL_100;
  }
  Instance = battleSetupInfo->fields.questRestrictionInfo;
  if ( !Instance )
    goto LABEL_100;
  if ( !*((_BYTE *)Instance + 419)
    && !*((_BYTE *)Instance + 417)
    && !*((_BYTE *)Instance + 376)
    && !*((_BYTE *)Instance + 395) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
      if ( this->fields.battleSetupInfo )
      {
        v28 = (QuestPhaseMaster_o *)Instance;
        Instance = (void *)BattleSetupInfo__TargetQuestId(this->fields.battleSetupInfo, 0);
        v29 = this->fields.battleSetupInfo;
        if ( v29 )
        {
          if ( v28 )
          {
            Instance = QuestPhaseMaster__GetEntity(v28, (int32_t)Instance, v29->fields.questPhase, 0);
            if ( Instance && *((_BYTE *)Instance + 24) )
            {
              Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                goto LABEL_100;
              Instance = DataManager__GetMasterData_object_(
                           (DataManager_o *)Instance,
                           (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
              if ( !this->fields.battleSetupInfo )
                goto LABEL_100;
              v30 = (NpcFollowerMaster_o *)Instance;
              Instance = (void *)BattleSetupInfo__TargetQuestId(this->fields.battleSetupInfo, 0);
              v31 = this->fields.battleSetupInfo;
              if ( !v31 )
                goto LABEL_100;
              if ( !v30 )
                goto LABEL_100;
              Instance = NpcFollowerMaster__GetQuestFollowerList(v30, (int32_t)Instance, v31->fields.questPhase, 0);
              if ( !Instance )
                goto LABEL_100;
              if ( !*((_QWORD *)Instance + 3) )
              {
                *(_QWORD *)&this->fields.tutorialMode = 0x100000001LL;
                goto LABEL_75;
              }
            }
            v32 = this->fields.battleSetupInfo;
            if ( v32 )
            {
              Instance = v32->fields.questRestrictionInfo;
              if ( Instance )
              {
                if ( QuestRestrictionInfo__IsMyServantOrNpcRestriction((QuestRestrictionInfo_o *)Instance, 0) )
                  this->fields.tutorialMode = 4;
                FollowerRootComponent__UpdateDeckInfomation(this, v33);
                v35 = this->fields.battleSetupInfo;
                if ( v35 )
                {
                  Instance = this->fields.followerQuestInfomationDraw;
                  if ( Instance )
                  {
                    FollowerQuestInfomationDraw__SetInfomation(
                      (FollowerQuestInfomationDraw_o *)Instance,
                      v35->fields.questRestrictionInfo,
                      0,
                      0,
                      v34);
                    Instance = this->fields.backSkinSprite;
                    if ( Instance )
                    {
                      Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
                      if ( Instance )
                      {
                        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
                        goto LABEL_71;
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
    goto LABEL_100;
  }
  this->fields.tutorialState = 1;
  if ( QuestRestrictionInfo__IsMyServantOrNpcRestriction((QuestRestrictionInfo_o *)Instance, 0) )
  {
    this->fields.isForceFadeOut = 1;
    this->fields.tutorialMode = 4;
LABEL_71:
    v26 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(v26, (Il2CppObject *)this, Method_FollowerRootComponent_EndLoadCommonBg__, 0);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__LoadUISkin(v26, 2, 1, 0);
    return;
  }
  this->fields.tutorialMode = 1;
LABEL_75:
  v27 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v27, (Il2CppObject *)this, Method_FollowerRootComponent_EndLoadPartyOrganizationAtlasSimple__, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadPartyOrganizationAtlas(v27, 1, 0);
}


void FollowerRootComponent__setBattleSetupFollowType(
        FollowerRootComponent_o *this,
        int32_t type,
        const MethodInfo *method)
{
  struct BattleSetupInfo_o *battleSetupInfo; // x8

  battleSetupInfo = this->fields.battleSetupInfo;
  if ( !battleSetupInfo )
    sub_1C372B4(this);
  battleSetupInfo->fields.followerType = 0;
  if ( (type | 4) == 5 )
    battleSetupInfo->fields.followerType = type;
}


void FollowerRootComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19

  if ( (byte_4C3DABD & 1) == 0 )
  {
    sub_1C37058(&FollowerRootComponent___c_TypeInfo);
    byte_4C3DABD = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(FollowerRootComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  FollowerRootComponent___c_TypeInfo->static_fields->__9 = (struct FollowerRootComponent___c_o *)v1;
  sub_1C36FFC(FollowerRootComponent___c_TypeInfo->static_fields, v1);
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