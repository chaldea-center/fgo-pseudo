void FollowerRootComponent___cctor(const MethodInfo *method)
{
  struct FollowerRootComponent_StaticFields *static_fields; // x8

  if ( (byte_4D2B32D & 1) == 0 )
  {
    sub_1C93AD4(&FollowerRootComponent_TypeInfo);
    byte_4D2B32D = 1;
  }
  static_fields = FollowerRootComponent_TypeInfo->static_fields;
  static_fields->LIST_UPDATE_MESSAGE_FONT_SIZE = 26;
  *(_QWORD *)&static_fields->RETURN_TERMINAL_MESSAGE_FONT_SIZE = 0xA0000001BLL;
  static_fields->RETURN_TERMINAL_MESSAGE_SPACING_Y = 5;
}


void FollowerRootComponent___ctor(FollowerRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1

  if ( (byte_4D2B32C & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2B32C = 1;
  }
  v3 = StringLiteral_1/*""*/;
  this->fields.backupBgmName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C93A78(&this->fields.backupBgmName, v3);
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0);
}


void FollowerRootComponent__CallbackFollowerList(
        FollowerRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_4D2B311 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_11163/*"REQUEST_OK"*/);
    byte_4D2B311 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1C93D2C(0, result);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_11163/*"REQUEST_OK"*/, 0);
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
    sub_1C93D2C(0, result);
  ListViewManager__SetEmptyMessageBase(operationItemListViewManager, 1, 0);
  FollowerRootComponent__Init(this, v5);
}


void FollowerRootComponent__CallbackRefresh(
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

  if ( (byte_4D2B324 & 1) == 0 )
  {
    sub_1C93AD4(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_FollowerRootComponent_OnSelectFollowerItem__);
    sub_1C93AD4(&RandomLimitCountManager_TypeInfo);
    byte_4D2B324 = 1;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  RandomLimitCountManager__set_EnableRandomLimitCount(0, 0);
  RandomLimitCountManager__set_EnableRandomLimitCount(1, 0);
  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    goto LABEL_12;
  FollowerSelectItemListViewManager__SaveSortFilter(operationItemListViewManager, 0);
  operationItemListViewManager = (FollowerSelectItemListViewManager_o *)this->fields.battleSetupInfo;
  if ( !operationItemListViewManager )
    goto LABEL_12;
  v6 = this->fields.operationItemListViewManager;
  operationItemListViewManager = (FollowerSelectItemListViewManager_o *)BattleSetupInfo__TargetQuestId(
                                                                          (BattleSetupInfo_o *)operationItemListViewManager,
                                                                          0);
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
          0),
        v8 = this->fields.operationItemListViewManager,
        v9 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1C93D20(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo),
        FollowerSelectItemListViewManager_CallbackFunc___ctor(
          v9,
          (Il2CppObject *)this,
          (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
          0),
        !v8)
    || (FollowerSelectItemListViewManager__SetMode(v8, 2, v9, 0),
        (operationItemListViewManager = (FollowerSelectItemListViewManager_o *)this->fields.commonConfirmDialog) == 0) )
  {
LABEL_12:
    sub_1C93D2C(operationItemListViewManager, v4);
  }
  CommonConfirmDialog__Close((CommonConfirmDialog_o *)operationItemListViewManager, 0);
}


void FollowerRootComponent__EndCloseShowServant(FollowerRootComponent_o *this, const MethodInfo *method)
{
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4D2B318 & 1) == 0 )
  {
    sub_1C93AD4(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_FollowerRootComponent_OnSelectFollowerItem__);
    byte_4D2B318 = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v4 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1C93D20(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
    0);
  if ( !operationItemListViewManager )
    sub_1C93D2C(v5, v6);
  FollowerSelectItemListViewManager__SetMode(operationItemListViewManager, 2, v4, 0);
}


void FollowerRootComponent__EndCloseShowServantEquip(FollowerRootComponent_o *this, const MethodInfo *method)
{
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4D2B31B & 1) == 0 )
  {
    sub_1C93AD4(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_FollowerRootComponent_OnSelectFollowerItem__);
    byte_4D2B31B = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v4 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1C93D20(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
    0);
  if ( !operationItemListViewManager )
    sub_1C93D2C(v5, v6);
  FollowerSelectItemListViewManager__SetMode(operationItemListViewManager, 2, v4, 0);
}


void FollowerRootComponent__EndCloseTutorialArrow(FollowerRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *tutorialMaskBase2; // x0

  if ( (byte_4D2B326 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_8706/*"MENU_SELECT_ITEM"*/);
    byte_4D2B326 = 1;
  }
  tutorialMaskBase2 = this->fields.tutorialMaskBase2;
  if ( !tutorialMaskBase2
    || (UnityEngine_GameObject__SetActive(tutorialMaskBase2, 0, 0),
        tutorialMaskBase2 = (UnityEngine_GameObject_o *)this->fields.myFSM,
        this->fields.state = 3,
        !tutorialMaskBase2) )
  {
    sub_1C93D2C(tutorialMaskBase2, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)tutorialMaskBase2, (System_String_o *)StringLiteral_8706/*"MENU_SELECT_ITEM"*/, 0);
}


void FollowerRootComponent__EndLoadCommonBg(FollowerRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *backSkinSprite; // x0
  System_Action_o *v4; // x20

  if ( (byte_4D2B309 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&AtlasManager_TypeInfo);
    sub_1C93AD4(&Method_FollowerRootComponent_EndLoadOutGameAtlas__);
    byte_4D2B309 = 1;
  }
  backSkinSprite = (UnityEngine_Component_o *)this->fields.backSkinSprite;
  if ( !backSkinSprite
    || (backSkinSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(backSkinSprite, 0)) == 0 )
  {
    sub_1C93D2C(backSkinSprite, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)backSkinSprite, 1, 0);
  v4 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_FollowerRootComponent_EndLoadOutGameAtlas__, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadOutGameAtlas(v4, 0);
}


void FollowerRootComponent__EndLoadEventAtlas(FollowerRootComponent_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4D2B30B & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&AtlasManager_TypeInfo);
    sub_1C93AD4(&Method_FollowerRootComponent_EndLoadPartyOrganizationAtlas__);
    byte_4D2B30B = 1;
  }
  v3 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_FollowerRootComponent_EndLoadPartyOrganizationAtlas__, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadPartyOrganizationAtlas(v3, 1, 0);
}


void FollowerRootComponent__EndLoadOutGameAtlas(FollowerRootComponent_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4D2B30A & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&AtlasManager_TypeInfo);
    sub_1C93AD4(&Method_FollowerRootComponent_EndLoadEventAtlas__);
    byte_4D2B30A = 1;
  }
  v3 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_FollowerRootComponent_EndLoadEventAtlas__, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventAtlas(v3, 1, 0);
}


void FollowerRootComponent__EndLoadPartyOrganizationAtlas(FollowerRootComponent_o *this, const MethodInfo *method)
{
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4D2B30C & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4D2B30C = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    goto LABEL_15;
  FollowerSelectItemListViewManager__AdjustButton(operationItemListViewManager, 0);
  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    goto LABEL_15;
  FollowerSelectItemListViewManager__SetClassBoardInfo(operationItemListViewManager, 0);
  SceneRootComponent__beginStartUp_42213664((SceneRootComponent_o *)this, 0);
  if ( this->fields.isForceFadeOut )
  {
    this->fields.isForceFadeOut = 0;
    operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !operationItemListViewManager )
      goto LABEL_15;
    CommonUI__maskFadeInit((CommonUI_o *)operationItemListViewManager, 0);
    operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !operationItemListViewManager )
      goto LABEL_15;
    CommonUI__maskFadeout((CommonUI_o *)operationItemListViewManager, 1, 0.0, 0, 0);
    FollowerRootComponent__StartBattleSetupMenu(this, v4);
  }
  operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !operationItemListViewManager )
    goto LABEL_15;
  if ( PartyOrganizationUtility__ExistsTemporaryPartyInfo((PartyOrganizationUtility_o *)operationItemListViewManager, 0) )
  {
    operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( operationItemListViewManager )
    {
      CommonUI__maskFadeInit((CommonUI_o *)operationItemListViewManager, 0);
      operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( operationItemListViewManager )
      {
        CommonUI__maskFadeout((CommonUI_o *)operationItemListViewManager, 1, 0.0, 0, 0);
        return;
      }
    }
LABEL_15:
    sub_1C93D2C(operationItemListViewManager, method);
  }
}


void FollowerRootComponent__EndOpenTutorialArrow(FollowerRootComponent_o *this, const MethodInfo *method)
{
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4D2B32A & 1) == 0 )
  {
    sub_1C93AD4(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_FollowerRootComponent_OnSelectFollowerItem__);
    byte_4D2B32A = 1;
  }
  this->fields.state = 3;
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v4 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1C93D20(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
    0);
  if ( !operationItemListViewManager )
    sub_1C93D2C(v5, v6);
  FollowerSelectItemListViewManager__SetMode(operationItemListViewManager, 4, v4, 0);
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

  v4 = this;
  if ( (byte_4D2B323 & 1) == 0 )
  {
    sub_1C93AD4(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_FollowerRootComponent_CallbackRefresh__);
    sub_1C93AD4(&Method_FollowerRootComponent_OnSelectFollowerItem__);
    sub_1C93AD4(&Method_NetworkManager_getRequest_FollowerRecommendSupportListRequest___);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    this = (FollowerRootComponent_o *)sub_1C93AD4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4D2B323 = 1;
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
      this = (FollowerRootComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !this )
        goto LABEL_18;
      LOBYTE(this->fields.titleInfo) = 1;
    }
    v6 = (NetworkManager_ResultCallbackFunc_o *)sub_1C93D20(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(v6, (Il2CppObject *)v4, Method_FollowerRootComponent_CallbackRefresh__, 0);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    this = (FollowerRootComponent_o *)NetworkManager__getRequest_object_(
                                        v6,
                                        (const MethodInfo_322FB9C *)Method_NetworkManager_getRequest_FollowerRecommendSupportListRequest___);
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
    sub_1C93D2C(this, isDecide);
  }
  operationItemListViewManager = v4->fields.operationItemListViewManager;
  v10 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1C93D20(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v10,
    (Il2CppObject *)v4,
    (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
    0);
  if ( !operationItemListViewManager )
    goto LABEL_18;
  FollowerSelectItemListViewManager__SetMode(operationItemListViewManager, 2, v10, 0);
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

  v4 = this;
  if ( (byte_4D2B322 & 1) == 0 )
  {
    sub_1C93AD4(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_FollowerRootComponent_CallbackRefresh__);
    sub_1C93AD4(&Method_FollowerRootComponent_OnSelectFollowerItem__);
    sub_1C93AD4(&Method_NetworkManager_getRequest_FollowerListRequest___);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    this = (FollowerRootComponent_o *)sub_1C93AD4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4D2B322 = 1;
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
      this = (FollowerRootComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !this )
        goto LABEL_18;
      LOBYTE(this->fields.titleInfo) = 1;
    }
    v6 = (NetworkManager_ResultCallbackFunc_o *)sub_1C93D20(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(v6, (Il2CppObject *)v4, Method_FollowerRootComponent_CallbackRefresh__, 0);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    this = (FollowerRootComponent_o *)NetworkManager__getRequest_object_(
                                        v6,
                                        (const MethodInfo_322FB9C *)Method_NetworkManager_getRequest_FollowerListRequest___);
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
    sub_1C93D2C(this, isDecide);
  }
  operationItemListViewManager = v4->fields.operationItemListViewManager;
  v10 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1C93D20(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v10,
    (Il2CppObject *)v4,
    (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
    0);
  if ( !operationItemListViewManager )
    goto LABEL_18;
  FollowerSelectItemListViewManager__SetMode(operationItemListViewManager, 2, v10, 0);
  this = (FollowerRootComponent_o *)v4->fields.commonConfirmDialog;
  if ( !this )
    goto LABEL_18;
  CommonConfirmDialog__Close((CommonConfirmDialog_o *)this, 0);
}


void FollowerRootComponent__EndRefreshRest(FollowerRootComponent_o *this, const MethodInfo *method)
{
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4D2B325 & 1) == 0 )
  {
    sub_1C93AD4(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_FollowerRootComponent_OnSelectFollowerItem__);
    byte_4D2B325 = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v4 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1C93D20(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
    0);
  if ( !operationItemListViewManager )
    sub_1C93D2C(v5, v6);
  FollowerSelectItemListViewManager__SetMode(operationItemListViewManager, 2, v4, 0);
}


// local variable allocation has failed, the output may be wrong!
void FollowerRootComponent__EndShowServant(FollowerRootComponent_o *this, bool isDecide, const MethodInfo *method)
{
  ListViewManager_o *operationItemListViewManager; // x0
  Il2CppObject *Instance; // x20
  System_Action_o *v6; // x21

  if ( (byte_4D2B317 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_FollowerRootComponent_EndCloseShowServant__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2B317 = 1;
  }
  operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager
    || (ListViewManager__SetScrollView(
          operationItemListViewManager,
          this->fields.openScroll,
          this->fields.openOffset,
          0),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v6 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo),
        System_Action___ctor(v6, (Il2CppObject *)this, Method_FollowerRootComponent_EndCloseShowServant__, 0),
        !Instance) )
  {
    sub_1C93D2C(operationItemListViewManager, isDecide);
  }
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v6, 0);
}


// local variable allocation has failed, the output may be wrong!
void FollowerRootComponent__EndShowServantEquip(FollowerRootComponent_o *this, bool isDecide, const MethodInfo *method)
{
  ListViewManager_o *operationItemListViewManager; // x0
  Il2CppObject *Instance; // x20
  System_Action_o *v6; // x21

  if ( (byte_4D2B31A & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_FollowerRootComponent_EndCloseShowServantEquip__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2B31A = 1;
  }
  operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager
    || (ListViewManager__SetScrollView(
          operationItemListViewManager,
          this->fields.openScroll,
          this->fields.openOffset,
          0),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v6 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo),
        System_Action___ctor(v6, (Il2CppObject *)this, Method_FollowerRootComponent_EndCloseShowServantEquip__, 0),
        !Instance) )
  {
    sub_1C93D2C(operationItemListViewManager, isDecide);
  }
  CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)Instance, v6, 0);
}


void FollowerRootComponent__EndTutorialFollowerCommonGuide(FollowerRootComponent_o *this, const MethodInfo *method)
{
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4D2B32B & 1) == 0 )
  {
    sub_1C93AD4(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_FollowerRootComponent_OnSelectFollowerItem__);
    byte_4D2B32B = 1;
  }
  this->fields.state = 3;
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v4 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1C93D20(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
    0);
  if ( !operationItemListViewManager )
    sub_1C93D2C(v5, v6);
  FollowerSelectItemListViewManager__SetMode(operationItemListViewManager, 2, v4, 0);
}


void FollowerRootComponent__EndTutorialFollowerGuideNotification1(
        FollowerRootComponent_o *this,
        const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v5; // x21

  if ( (byte_4D2B328 & 1) == 0 )
  {
    sub_1C93AD4(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_FollowerRootComponent_OnSelectFollowerItem__);
    byte_4D2B328 = 1;
  }
  titleInfo = this->fields.titleInfo;
  this->fields.state = 3;
  if ( !titleInfo
    || (TitleInfoControl__setBackBtnEnable(titleInfo, 0, 0),
        operationItemListViewManager = this->fields.operationItemListViewManager,
        v5 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1C93D20(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo),
        FollowerSelectItemListViewManager_CallbackFunc___ctor(
          v5,
          (Il2CppObject *)this,
          (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
          0),
        !operationItemListViewManager) )
  {
    sub_1C93D2C(titleInfo, method);
  }
  FollowerSelectItemListViewManager__SetMode(operationItemListViewManager, 2, v5, 0);
}


void FollowerRootComponent__EndTutorialFollowerGuideNotification2(
        FollowerRootComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *tutorialMaskBase2; // x0
  bool IsUnderVista; // w22
  Il2CppObject *Instance; // x20
  System_Action_o *v6; // x21
  UnityEngine_Vector2_o v7; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v8; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_4D2B329 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&FSUtility_TypeInfo);
    sub_1C93AD4(&Method_FollowerRootComponent_EndOpenTutorialArrow__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2B329 = 1;
  }
  tutorialMaskBase2 = this->fields.tutorialMaskBase2;
  if ( !tutorialMaskBase2 )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(tutorialMaskBase2, 1, 0);
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  IsUnderVista = FSUtility__IsUnderVista(0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_FollowerRootComponent_EndOpenTutorialArrow__, 0);
  if ( !Instance )
LABEL_10:
    sub_1C93D2C(tutorialMaskBase2, method);
  v7.fields.x = -12.0;
  v8.fields.m_XMin = -492.0;
  if ( IsUnderVista )
  {
    v8.fields.m_XMin = -500.0;
    v7.fields.x = -20.0;
  }
  v8.fields.m_YMin = -14.0;
  v7.fields.y = 100.0;
  v8.fields.m_Width = 1000.0;
  v8.fields.m_Height = 150.0;
  CommonUI__OpenTutorialArrowMark((CommonUI_o *)Instance, v7, 0.0, v8, v6, 0);
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
  if ( (byte_4D2B314 & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMaster_UserServantGrandMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    this = (FollowerRootComponent_o *)sub_1C93AD4(&long___TypeInfo);
    byte_4D2B314 = 1;
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
  this = (FollowerRootComponent_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserServantGrandMaster___);
  if ( !this )
LABEL_15:
    sub_1C93D2C(this, *(_QWORD *)&initPos);
  FirstByUserSvtId = UserServantGrandMaster__GetFirstByUserSvtId((UserServantGrandMaster_o *)this, userSvtId, 0);
  if ( FirstByUserSvtId )
    return UserServantGrandEntity__GetEquipUserServantIdList(FirstByUserSvtId, 0);
  v10 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v10 = BalanceConfig_TypeInfo;
  }
  return (System_Int64_array *)sub_1C93B7C(long___TypeInfo, (unsigned int)v10->static_fields->GrandSvtEquipMax);
}


void FollowerRootComponent__GetFriendPointUpValSummary(
        FollowerRootComponent_o *this,
        int32_t *fpUpMax,
        int32_t *fpUpDuplicateSum,
        System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int___o *upTypeVals,
        const MethodInfo *method)
{
  System_Collections_Generic_List_Enumerator_T__o v8; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4D2B313 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_FuncList_TYPE__int___Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_FuncList_TYPE__int___MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_FuncList_TYPE__int___get_Current__);
    this = (FollowerRootComponent_o *)sub_1C93AD4(&Method_System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int___GetEnumerator__);
    byte_4D2B313 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  if ( !upTypeVals )
    sub_1C93D2C(this, fpUpMax);
  System_Collections_Generic_List_ValueTuple_Int32Enum__int____GetEnumerator(
    &v8,
    (System_Collections_Generic_List_T__o *)upTypeVals,
    (const MethodInfo_382460C *)Method_System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int___GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_ValueTuple_Int32Enum__int____MoveNext(
            &v8,
            (const MethodInfo_35F0CD4 *)Method_System_Collections_Generic_List_Enumerator_ValueTuple_FuncList_TYPE__int___MoveNext__) )
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
    (const MethodInfo_35F0CD0 *)Method_System_Collections_Generic_List_Enumerator_ValueTuple_FuncList_TYPE__int___Dispose__);
}


void FollowerRootComponent__Init(FollowerRootComponent_o *this, const MethodInfo *method)
{
  __int64 battleSetupInfo; // x0
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  struct BattleSetupInfo_o *v5; // x8
  int32_t InitialDisplayClass; // w20
  Il2CppObject *v7; // x20
  struct BattleSetupInfo_o *v8; // x8
  FollowerSelectItemListViewManager_o *v9; // x20
  struct BattleSetupInfo_o *v10; // x8
  PartyOrganizationUtility_o *v11; // x20
  FollowerRootComponent___c_c *v12; // x8
  System_Action_o *_9__50_0; // x21
  Il2CppObject *v14; // x22
  struct FollowerRootComponent___c_StaticFields *static_fields; // x0
  FollowerSelectItemListViewManager_o *v16; // x20
  System_Action_o *v17; // x21
  NetworkManager_ResultCallbackFunc_o *v18; // x20
  FollowerRecommendSupportListRequest_o *v19; // x20
  struct BattleSetupInfo_o *v20; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4D2B312 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&ClassButtonControlComponent_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMaster_UserRecommendFollowerMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_UserRecommendFollowerMaster__UserRecommendFollowerEntity__long__TryGetSingleEntity__);
    sub_1C93AD4(&Method_FollowerRootComponent_CallbackInitRecommendFollowerRequest__);
    sub_1C93AD4(&Method_FollowerRootComponent_OnMoveEnd__);
    sub_1C93AD4(&Method_NetworkManager_getRequest_FollowerRecommendSupportListRequest___);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1C93AD4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C93AD4(&Method_FollowerRootComponent___c__Init_b__50_0__);
    sub_1C93AD4(&FollowerRootComponent___c_TypeInfo);
    sub_1C93AD4(&StringLiteral_8706/*"MENU_SELECT_ITEM"*/);
    byte_4D2B312 = 1;
  }
  entity = 0;
  if ( !this->fields.state )
  {
    if ( this->fields.isInitRecommendRequest )
      goto LABEL_19;
    battleSetupInfo = (__int64)this->fields.battleSetupInfo;
    if ( !battleSetupInfo )
      goto LABEL_50;
    operationItemListViewManager = this->fields.operationItemListViewManager;
    battleSetupInfo = BattleSetupInfo__TargetQuestId((BattleSetupInfo_o *)battleSetupInfo, 0);
    v5 = this->fields.battleSetupInfo;
    if ( !v5 || !operationItemListViewManager )
      goto LABEL_50;
    InitialDisplayClass = FollowerSelectItemListViewManager__GetInitialDisplayClass(
                            operationItemListViewManager,
                            battleSetupInfo,
                            v5->fields.questPhase,
                            1,
                            0);
    if ( !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
    if ( !ClassButtonControlComponent__IsRecommendSupportGroupType(InitialDisplayClass, 0) )
      goto LABEL_19;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    battleSetupInfo = (__int64)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserRecommendFollowerMaster___);
    if ( !battleSetupInfo )
      goto LABEL_50;
    if ( !DataMasterBase_object__object__long___TryGetSingleEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)battleSetupInfo,
            &entity,
            (const MethodInfo_3465B50 *)Method_DataMasterBase_UserRecommendFollowerMaster__UserRecommendFollowerEntity__long__TryGetSingleEntity__) )
      goto LABEL_41;
    battleSetupInfo = (__int64)this->fields.battleSetupInfo;
    if ( !battleSetupInfo )
      goto LABEL_50;
    v7 = entity;
    battleSetupInfo = BattleSetupInfo__TargetQuestId((BattleSetupInfo_o *)battleSetupInfo, 0);
    v8 = this->fields.battleSetupInfo;
    if ( !v8 || !v7 )
      goto LABEL_50;
    if ( UserRecommendFollowerEntity__IsEnableSupport(
           (UserRecommendFollowerEntity_o *)v7,
           battleSetupInfo,
           v8->fields.questPhase,
           0) )
    {
LABEL_19:
      battleSetupInfo = (__int64)this->fields.operationItemListViewManager;
      if ( !battleSetupInfo )
        goto LABEL_50;
      battleSetupInfo = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)battleSetupInfo, 0);
      if ( !battleSetupInfo )
        goto LABEL_50;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)battleSetupInfo, 1, 0);
      battleSetupInfo = (__int64)this->fields.battleSetupInfo;
      if ( !battleSetupInfo )
        goto LABEL_50;
      v9 = this->fields.operationItemListViewManager;
      battleSetupInfo = BattleSetupInfo__TargetQuestId((BattleSetupInfo_o *)battleSetupInfo, 0);
      v10 = this->fields.battleSetupInfo;
      if ( !v10 )
        goto LABEL_50;
      if ( !v9 )
        goto LABEL_50;
      FollowerSelectItemListViewManager__CreateList(
        v9,
        battleSetupInfo,
        v10->fields.questPhase,
        this->fields.friendPointUpVal,
        this->fields.friendPointUpMaxVal,
        this->fields.friendPointCampaignEntityList,
        v10->fields.questRestrictionInfo,
        0);
      battleSetupInfo = (__int64)this->fields.operationItemListViewManager;
      if ( !battleSetupInfo )
        goto LABEL_50;
      if ( ListViewManager__get_ItemSum((ListViewManager_o *)battleSetupInfo, 0) > 0 )
        goto LABEL_28;
      battleSetupInfo = (__int64)this->fields.operationItemListViewManager;
      if ( !battleSetupInfo )
        goto LABEL_50;
      if ( FollowerSelectItemListViewManager__GetItemCount((FollowerSelectItemListViewManager_o *)battleSetupInfo, 0) < 1 )
      {
        battleSetupInfo = (__int64)this->fields.myFSM;
        this->fields.selectItemNum = -1;
        if ( battleSetupInfo )
        {
          PlayMakerFSM__SendEvent((PlayMakerFSM_o *)battleSetupInfo, (System_String_o *)StringLiteral_8706/*"MENU_SELECT_ITEM"*/, 0);
          return;
        }
      }
      else
      {
LABEL_28:
        battleSetupInfo = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
        if ( !battleSetupInfo )
          goto LABEL_50;
        if ( *(_BYTE *)(battleSetupInfo + 148) )
        {
          battleSetupInfo = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          v11 = (PartyOrganizationUtility_o *)battleSetupInfo;
          v12 = FollowerRootComponent___c_TypeInfo;
          if ( !FollowerRootComponent___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(FollowerRootComponent___c_TypeInfo);
            v12 = FollowerRootComponent___c_TypeInfo;
          }
          _9__50_0 = v12->static_fields->__9__50_0;
          if ( !_9__50_0 )
          {
            if ( !v12->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v12);
              v12 = FollowerRootComponent___c_TypeInfo;
            }
            v14 = (Il2CppObject *)v12->static_fields->__9;
            _9__50_0 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
            System_Action___ctor(_9__50_0, v14, Method_FollowerRootComponent___c__Init_b__50_0__, 0);
            static_fields = FollowerRootComponent___c_TypeInfo->static_fields;
            static_fields->__9__50_0 = _9__50_0;
            battleSetupInfo = sub_1C93A78(&static_fields->__9__50_0, _9__50_0);
          }
          if ( !v11 )
            goto LABEL_50;
          PartyOrganizationUtility__OpenQuestUseItemExpiredDialog(v11, _9__50_0, 0);
        }
        this->fields.state = 2;
        v16 = this->fields.operationItemListViewManager;
        v17 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
        System_Action___ctor(v17, (Il2CppObject *)this, Method_FollowerRootComponent_OnMoveEnd__, 0);
        if ( v16 )
        {
          FollowerSelectItemListViewManager__SetMode_33219940(v16, 1, v17, 0);
          return;
        }
      }
    }
    else
    {
LABEL_41:
      v18 = (NetworkManager_ResultCallbackFunc_o *)sub_1C93D20(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v18,
        (Il2CppObject *)this,
        Method_FollowerRootComponent_CallbackInitRecommendFollowerRequest__,
        0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      battleSetupInfo = (__int64)NetworkManager__getRequest_object_(
                                   v18,
                                   (const MethodInfo_322FB9C *)Method_NetworkManager_getRequest_FollowerRecommendSupportListRequest___);
      if ( this->fields.battleSetupInfo )
      {
        v19 = (FollowerRecommendSupportListRequest_o *)battleSetupInfo;
        battleSetupInfo = BattleSetupInfo__TargetQuestId(this->fields.battleSetupInfo, 0);
        v20 = this->fields.battleSetupInfo;
        if ( v20 )
        {
          if ( v19 )
          {
            FollowerRecommendSupportListRequest__beginRequest(v19, 0, battleSetupInfo, v20->fields.questPhase, 0);
            battleSetupInfo = (__int64)this->fields.operationItemListViewManager;
            if ( battleSetupInfo )
            {
              ListViewManager__SetEmptyMessageBase((ListViewManager_o *)battleSetupInfo, 0, 0);
              return;
            }
          }
        }
      }
    }
LABEL_50:
    sub_1C93D2C(battleSetupInfo, method);
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
  int v11; // w8
  void *v12; // x19
  unsigned int v13; // w20
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0
  struct BattleSetupInfo_o *v17; // x8
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

  if ( (byte_4D2B327 & 1) == 0 )
  {
    sub_1C93AD4(&BattleRootComponent_TypeInfo);
    sub_1C93AD4(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponentsInChildren_Camera___);
    sub_1C93AD4(&Method_FollowerRootComponent_OnClickBack__);
    sub_1C93AD4(&Method_FollowerRootComponent__OnClickBack_b__73_0__);
    sub_1C93AD4(&FollowerRootComponent_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1C93AD4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_6470/*"FOLLOWER_SELECT_BACK_TO_QUEST_NO_AP_CONSUME_AP0"*/);
    sub_1C93AD4(&StringLiteral_3457/*"CLICK_BACK"*/);
    sub_1C93AD4(&StringLiteral_6469/*"FOLLOWER_SELECT_BACK_TO_QUEST_NO_AP_CONSUME"*/);
    sub_1C93AD4(&StringLiteral_6468/*"FOLLOWER_SELECT_BACK_TITLE"*/);
    sub_1C93AD4(&StringLiteral_3710/*"COMMON_CONFIRM_NO"*/);
    sub_1C93AD4(&StringLiteral_3715/*"COMMON_CONFIRM_YES"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    sub_1C93AD4(&StringLiteral_3458/*"CLICK_BACK_BATTLE_SETUP"*/);
    byte_4D2B327 = 1;
  }
  if ( this->fields.state == 3 && !this->fields.tutorialState )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( !Instance )
      goto LABEL_64;
    if ( !*((_BYTE *)Instance + 148) )
      goto LABEL_34;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_64;
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
        v8 = (_QWORD *)sub_1C93AEC(Method_FollowerRootComponent_OnClickBack__);
      v9 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v8, v8[4]);
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
            Instance = (void *)monitor[67];
            if ( Instance )
            {
              BattleResultComponent__EndResult((BattleResultComponent_o *)Instance, 0);
              Instance = this->fields.myFSM;
              if ( Instance )
              {
                PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3457/*"CLICK_BACK"*/, 0);
                Instance = UnityEngine_Component__get_transform(v7, 0);
                if ( Instance )
                {
                  Instance = UnityEngine_Component__GetComponentsInChildren_object__52018868(
                               (UnityEngine_Component_o *)Instance,
                               (const MethodInfo_319BEB4 *)Method_UnityEngine_Component_GetComponentsInChildren_Camera___);
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
                        sub_1C93D34(Instance);
                      Instance = (void *)*((_QWORD *)v12 + (int)v13 + 4);
                      if ( !Instance )
                        break;
                      Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
                      if ( !Instance )
                        break;
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
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
LABEL_34:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( !Instance )
        goto LABEL_64;
      if ( AvalonSceneManager__IsStackScene((AvalonSceneManager_o *)Instance, 0) )
        goto LABEL_42;
      Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_64;
      if ( *((int *)Instance + 20) > 0 )
        goto LABEL_42;
      Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_64;
      if ( *((_BYTE *)Instance + 206) )
        goto LABEL_42;
      battleSetupInfo = this->fields.battleSetupInfo;
      if ( !battleSetupInfo )
        goto LABEL_64;
      if ( battleSetupInfo->fields.isChildFollower )
      {
LABEL_42:
        v15 = Method_FollowerRootComponent_OnClickBack__;
        if ( (*((_BYTE *)Method_FollowerRootComponent_OnClickBack__ + 83) & 2) != 0 )
          v15 = (_QWORD *)sub_1C93AEC(Method_FollowerRootComponent_OnClickBack__);
        v16 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v15, v15[4]);
        OverwriteAssetSoundName__PlaySystemSe(v16, 1, 0, 0);
        v17 = this->fields.battleSetupInfo;
        this->fields.state = 4;
        if ( v17 )
        {
          Instance = this->fields.myFSM;
          if ( Instance )
          {
            if ( v17->fields.isChildFollower )
              v18 = &StringLiteral_3458/*"CLICK_BACK_BATTLE_SETUP"*/;
            else
              v18 = &StringLiteral_3457/*"CLICK_BACK"*/;
            PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v18, 0);
            return;
          }
        }
      }
      else
      {
        v19 = Method_FollowerRootComponent_OnClickBack__;
        if ( (*((_BYTE *)Method_FollowerRootComponent_OnClickBack__ + 83) & 2) != 0 )
          v19 = (_QWORD *)sub_1C93AEC(Method_FollowerRootComponent_OnClickBack__);
        v20 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v19, v19[4]);
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
        v23 = (System_String_o **)&StringLiteral_6469/*"FOLLOWER_SELECT_BACK_TO_QUEST_NO_AP_CONSUME"*/;
        if ( lastPlayQuestConsumeAp <= 0 )
          v23 = (System_String_o **)&StringLiteral_6470/*"FOLLOWER_SELECT_BACK_TO_QUEST_NO_AP_CONSUME_AP0"*/;
        v24 = LocalizationManager__Get(*v23, 0);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v25 = LocalizationManager__Get((System_String_o *)StringLiteral_6468/*"FOLLOWER_SELECT_BACK_TITLE"*/, 0);
        v26 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v27 = LocalizationManager__Get((System_String_o *)StringLiteral_3715/*"COMMON_CONFIRM_YES"*/, 0);
        v28 = LocalizationManager__Get((System_String_o *)StringLiteral_3710/*"COMMON_CONFIRM_NO"*/, 0);
        v29 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C93D20(CommonConfirmDialog_ClickDelegate_TypeInfo);
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
LABEL_64:
    sub_1C93D2C(Instance, v4);
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
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v16; // x21
  const MethodInfo *v17; // x1
  System_Action_o *v18; // x22

  if ( (byte_4D2B320 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_FollowerRootComponent_EndTutorialFollowerCommonGuide__);
    sub_1C93AD4(&Method_FollowerRootComponent_EndTutorialFollowerGuideNotification1__);
    sub_1C93AD4(&Method_FollowerRootComponent_EndTutorialFollowerGuideNotification2__);
    sub_1C93AD4(&Method_FollowerRootComponent_OnSelectFollowerItem__);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C93AD4(&StringLiteral_13687/*"TUTORIAL_MESSAGE_FOLLOWER2"*/);
    sub_1C93AD4(&StringLiteral_13686/*"TUTORIAL_MESSAGE_FOLLOWER1"*/);
    byte_4D2B320 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( this->fields.tutorialState == 1 )
    {
      tutorialMode = this->fields.tutorialMode;
      *(_QWORD *)&this->fields.tutorialState = 0x200000002LL;
      if ( tutorialMode == 3 )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v5 = LocalizationManager__Get((System_String_o *)StringLiteral_13687/*"TUTORIAL_MESSAGE_FOLLOWER2"*/, 0);
        v6 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
        v7 = &Method_FollowerRootComponent_EndTutorialFollowerGuideNotification2__;
LABEL_25:
        v18 = v6;
        System_Action___ctor(v6, (Il2CppObject *)this, *v7, 0);
        if ( Instance )
        {
          CommonUI__OpenTutorialNotificationDialog((CommonUI_o *)Instance, v5, -1, v18, 0);
          return;
        }
LABEL_27:
        sub_1C93D2C(battleSetupInfo, method);
      }
      if ( tutorialMode == 2 )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v5 = LocalizationManager__Get((System_String_o *)StringLiteral_13686/*"TUTORIAL_MESSAGE_FOLLOWER1"*/, 0);
        v6 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
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
          v13 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
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
      v16 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1C93D20(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
      FollowerSelectItemListViewManager_CallbackFunc___ctor(
        v16,
        (Il2CppObject *)this,
        (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
        0);
      if ( !operationItemListViewManager )
        goto LABEL_27;
      FollowerSelectItemListViewManager__SetMode(operationItemListViewManager, 2, v16, 0);
      battleSetupInfo = (BattleSetupInfo_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !battleSetupInfo )
        goto LABEL_27;
      if ( PartyOrganizationUtility__ExistsTemporaryPartyInfo((PartyOrganizationUtility_o *)battleSetupInfo, 0) )
        FollowerRootComponent__StartBattleSetupMenu(this, v17);
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
  Il2CppObject *v18; // x0
  System_String_o *v19; // x0
  int32_t v20; // w20
  _QWORD *v21; // x0
  System_Reflection_MethodBase_o *v22; // x0
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v24; // x0
  void *v25; // x2
  _QWORD *v26; // x0
  System_Reflection_MethodBase_o *v27; // x0
  const MethodInfo *v28; // x2
  __int64 v29; // x20
  FollowerRootComponent_o *v30; // x21
  SkillInfo_o *v31; // x26
  Il2CppObject *v32; // x22
  FollowerRootComponent_o *v33; // x20
  Il2CppObject *Master_object; // x22
  const MethodInfo *v35; // x1
  int32_t SvtId; // w23
  const MethodInfo *v37; // x1
  int32_t ServantImageLimitSealAfter; // w24
  Il2CppObject *v39; // x22
  const MethodInfo *v40; // x1
  int32_t v41; // w23
  const MethodInfo *v42; // x1
  int32_t LimitCount; // w21
  System_String_o *v44; // x21
  System_String_o *v45; // x22
  Il2CppObject *v46; // x0
  System_String_o *v47; // x0
  FollowerRootComponent_o *v48; // x21
  Il2CppObject *v49; // x0
  System_String_o *v50; // x0
  int32_t tutorialMode; // w21
  System_String_o *v52; // x20
  _QWORD *v53; // x0
  System_Reflection_MethodBase_o *v54; // x0
  bool v55; // w22
  CommonConfirmDialog_ClickDelegate_o *v56; // x21
  bool v57; // w20
  CommonConfirmDialog_o *commonConfirmDialog; // x19
  System_String_o *v59; // x20
  FollowerRootComponent_o *v60; // x22
  int32_t v61; // w8
  _QWORD *v62; // x0
  System_Reflection_MethodBase_o *v63; // x0
  FollowerRootComponent_o *v64; // x20
  FollowerRootComponent_o *v65; // x20
  FollowerRootComponent___c_c *v66; // x8
  System_Action_o *_9__67_0; // x21
  Il2CppObject *v68; // x22
  struct FollowerRootComponent___c_StaticFields *static_fields; // x0
  _QWORD *v70; // x0
  System_Reflection_MethodBase_o *v71; // x0
  int32_t v72; // w8
  __int64 *v73; // x8
  FollowerRootComponent_o *v74; // x20
  _QWORD *v75; // x0
  System_Reflection_MethodBase_o *v76; // x0
  const MethodInfo *v77; // x2
  _QWORD *v78; // x0
  System_Reflection_MethodBase_o *v79; // x0
  int32_t v80; // w8
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  NetworkManager_ResultCallbackFunc_o *v82; // x20
  FollowerRecommendSupportListRequest_o *v83; // x20
  struct BattleSetupInfo_o *v84; // x8
  Il2CppObject *Instance; // x20
  System_String_o *v86; // x21
  System_String_o *v87; // x22
  System_Action_o *v88; // x23
  int friendPointCampaignEntityList_low; // w20
  _QWORD *v90; // x0
  FollowerSelectItemListViewItem_o *v91; // x20
  const MethodInfo *v92; // x1
  const MethodInfo *v93; // x1
  __int64 v94; // x22
  __int64 v95; // x23
  EquipTargetInfo_o *EquipTargetInfoByEquipIdx; // x0
  EquipTargetInfo_o *EquipInfo; // x21
  __int64 v98; // x22
  __int64 v99; // x23
  const MethodInfo *v100; // x1
  __int64 v101; // x22
  __int64 v102; // x23
  _QWORD *v103; // x0
  System_Reflection_MethodBase_o *v104; // x0
  const MethodInfo *v105; // x3
  struct FollowerInfo_o *followerInfo; // x8
  int32_t type; // w8
  int32_t v108; // w2
  _QWORD *v109; // x0
  FollowerSelectItemListViewManager_CallbackFunc_o *v110; // x21
  int32_t v111; // w1
  _QWORD *v112; // x0
  System_Reflection_MethodBase_o *v113; // x0
  Il2CppObject *v114; // x20
  System_Action_o *v115; // x21
  int m_CancellationTokenSource; // [xsp+38h] [xbp-88h] BYREF
  int32_t lv; // [xsp+3Ch] [xbp-84h] BYREF
  System_String_o *detail; // [xsp+40h] [xbp-80h] BYREF
  System_String_o *name; // [xsp+48h] [xbp-78h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+50h] [xbp-70h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+58h] [xbp-68h] BYREF
  System_String_o *v122; // [xsp+60h] [xbp-60h] BYREF
  System_String_o *defaultName; // [xsp+68h] [xbp-58h] BYREF
  SkillInfo_array *v124; // [xsp+78h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v125; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v126; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v127; // 0:x0.16

  v8 = this;
  if ( (byte_4D2B321 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    sub_1C93AD4(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C93AD4(&FollowerListRequest_TypeInfo);
    sub_1C93AD4(&FollowerRecommendSupportListRequest_TypeInfo);
    sub_1C93AD4(&Method_FollowerRootComponent_CallbackRefresh__);
    sub_1C93AD4(&Method_FollowerRootComponent_EndCloseTutorialArrow__);
    sub_1C93AD4(&Method_FollowerRootComponent_EndRecommendRefreshConfirm__);
    sub_1C93AD4(&Method_FollowerRootComponent_EndRefreshConfirm__);
    sub_1C93AD4(&Method_FollowerRootComponent_EndRefreshRest__);
    sub_1C93AD4(&Method_FollowerRootComponent_OnSelectFollowerItem__);
    sub_1C93AD4(&FollowerRootComponent_TypeInfo);
    sub_1C93AD4(&ImageLimitCount_TypeInfo);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&Method_NetworkManager_getRequest_FollowerRecommendSupportListRequest___);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1C93AD4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C93AD4(&Method_FollowerRootComponent___c__OnSelectFollowerItem_b__67_0__);
    sub_1C93AD4(&FollowerRootComponent___c_TypeInfo);
    sub_1C93AD4(&StringLiteral_6493/*"FOLLOWER_SELECT_REFRESH_TITLE"*/);
    sub_1C93AD4(&StringLiteral_8706/*"MENU_SELECT_ITEM"*/);
    sub_1C93AD4(&StringLiteral_8715/*"MENU_SHOW_SUPPORT"*/);
    sub_1C93AD4(&StringLiteral_6490/*"FOLLOWER_SELECT_REFRESH_MESSAGE"*/);
    sub_1C93AD4(&StringLiteral_113/*" "*/);
    sub_1C93AD4(&StringLiteral_6491/*"FOLLOWER_SELECT_REFRESH_REST_MESSAGE"*/);
    sub_1C93AD4(&StringLiteral_8599/*"MASTER_EQSKILL_LV_TXT"*/);
    sub_1C93AD4(&StringLiteral_2881/*"BATTLE_SKILLCHARGETURN"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    this = (FollowerRootComponent_o *)sub_1C93AD4(&StringLiteral_6492/*"FOLLOWER_SELECT_REFRESH_REST_TITLE"*/);
    byte_4D2B321 = 1;
  }
  v124 = 0;
  v122 = 0;
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
                                          0);
      if ( !this )
        goto LABEL_196;
      v74 = this;
      if ( LOBYTE(this->fields.friendPointCampaignEntityList)
        || FollowerSelectItemListViewItem__get_SvtId(
             (FollowerSelectItemListViewItem_o *)this,
             *(const MethodInfo **)&kind) <= 0 )
      {
        goto LABEL_175;
      }
      v75 = Method_FollowerRootComponent_OnSelectFollowerItem__;
      if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
        v75 = (_QWORD *)sub_1C93AEC(Method_FollowerRootComponent_OnSelectFollowerItem__);
      v76 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v75, v75[4]);
      OverwriteAssetSoundName__PlaySystemSe(v76, 0, 0, 0);
      FollowerRootComponent__SelectShowServant(v8, (FollowerSelectItemListViewItem_o *)v74, v77);
      return;
    case 2:
    case 3:
    case 4:
      v26 = Method_FollowerRootComponent_OnSelectFollowerItem__;
      if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
        v26 = (_QWORD *)sub_1C93AEC(Method_FollowerRootComponent_OnSelectFollowerItem__);
      v27 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v26, v26[4]);
      OverwriteAssetSoundName__PlaySystemSe(v27, 0, 0, 0);
      this = (FollowerRootComponent_o *)v8->fields.operationItemListViewManager;
      if ( !this )
        goto LABEL_196;
      this = (FollowerRootComponent_o *)FollowerSelectItemListViewManager__GetItem(
                                          (FollowerSelectItemListViewManager_o *)this,
                                          v8->fields.selectItemNum,
                                          0);
      v29 = kind == 3 ? 1LL : 2LL * (kind == 4);
      if ( !this )
        goto LABEL_196;
      v30 = this;
      this = (FollowerRootComponent_o *)FollowerSelectItemListViewItem__GetSkillInfo(
                                          (FollowerSelectItemListViewItem_o *)this,
                                          &v124,
                                          v28);
      if ( !v124 )
        goto LABEL_196;
      if ( (unsigned int)v29 >= LODWORD(v124->max_length) )
        goto LABEL_197;
      v31 = v124->m_Items[v29];
      if ( !v31 || v31->fields.id < 1 || v31->fields.lv < 1 )
        goto LABEL_164;
      this = (FollowerRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_196;
      this = (FollowerRootComponent_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_SkillMaster___);
      if ( !this )
        goto LABEL_196;
      v32 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
              v31->fields.id,
              (const MethodInfo_3463274 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      this = (FollowerRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_196;
      this = (FollowerRootComponent_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_SkillLvMaster___);
      if ( !this )
        goto LABEL_196;
      this = (FollowerRootComponent_o *)SkillLvMaster__GetEntity(
                                          (SkillLvMaster_o *)this,
                                          v31->fields.id,
                                          v31->fields.lv,
                                          0);
      if ( !v32 )
        goto LABEL_196;
      v33 = this;
      SkillEntity__getSkillMessageInfo((SkillEntity_o *)v32, &defaultName, &v122, v31->fields.lv, 0);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
      SvtId = FollowerSelectItemListViewItem__get_SvtId((FollowerSelectItemListViewItem_o *)v30, v35);
      this = (FollowerRootComponent_o *)FollowerSelectItemListViewItem__get_DispLimitCount(
                                          (FollowerSelectItemListViewItem_o *)v30,
                                          v37);
      if ( !Master_object )
        goto LABEL_196;
      ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                     (ServantLimitImageMaster_o *)Master_object,
                                     SvtId,
                                     (int32_t)this,
                                     0);
      v39 = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
      v41 = FollowerSelectItemListViewItem__get_SvtId((FollowerSelectItemListViewItem_o *)v30, v40);
      LimitCount = FollowerSelectItemListViewItem__get_LimitCount((FollowerSelectItemListViewItem_o *)v30, v42);
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      this = (FollowerRootComponent_o *)ImageLimitCount__GetLimitCountByDispLimit(
                                          ServantImageLimitSealAfter,
                                          LimitCount,
                                          0);
      if ( !v39 )
        goto LABEL_196;
      if ( !ServantLimitAddMaster__TryGetEntity((ServantLimitAddMaster_o *)v39, &entity, v41, (int32_t)this, 0) )
        goto LABEL_59;
      this = (FollowerRootComponent_o *)entity;
      if ( !entity )
        goto LABEL_196;
      if ( !ServantLimitAddEntity__HasKeyOverwriteSkillName(entity, 0) )
        goto LABEL_59;
      this = (FollowerRootComponent_o *)entity;
      if ( !entity )
        goto LABEL_196;
      defaultName = ServantLimitAddEntity__GetOverwriteSkillName(entity, v31->fields.id, defaultName, 0);
LABEL_59:
      v44 = defaultName;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v45 = LocalizationManager__Get((System_String_o *)StringLiteral_8599/*"MASTER_EQSKILL_LV_TXT"*/, 0);
      lv = v31->fields.lv;
      v46 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv);
      v47 = System_String__Format(v45, v46, 0);
      defaultName = System_String__Concat_64463988(v44, (System_String_o *)StringLiteral_113/*" "*/, v47, 0);
      this = (FollowerRootComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2881/*"BATTLE_SKILLCHARGETURN"*/, 0);
      if ( !v33 )
        goto LABEL_196;
      v48 = this;
      m_CancellationTokenSource = (int)v33->fields.m_CancellationTokenSource;
      v49 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &m_CancellationTokenSource);
      v50 = System_String__Format((System_String_o *)v48, v49, 0);
      tutorialMode = v8->fields.tutorialMode;
      v52 = v50;
      this = (FollowerRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_196;
      if ( tutorialMode == 3 )
        CommonUI__OpenDetailLongInfoDialogOnFade((CommonUI_o *)this, defaultName, v52, v122, 0);
      else
        CommonUI__OpenDetailLongInfoDialog((CommonUI_o *)this, defaultName, v52, v122, 1, 0, 0);
LABEL_164:
      operationItemListViewManager = v8->fields.operationItemListViewManager;
      v24 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1C93D20(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
      v25 = Method_FollowerRootComponent_OnSelectFollowerItem__;
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
                                            0);
        if ( !this )
          goto LABEL_196;
        friendPointCampaignEntityList_low = LOBYTE(this->fields.friendPointCampaignEntityList);
        v90 = Method_FollowerRootComponent_OnSelectFollowerItem__;
        if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
          v90 = (_QWORD *)sub_1C93AEC(Method_FollowerRootComponent_OnSelectFollowerItem__);
        v63 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v90, v90[4]);
        if ( !friendPointCampaignEntityList_low )
          goto LABEL_145;
        goto LABEL_178;
      }
      v61 = v8->fields.tutorialMode;
      if ( v61 == 3 )
      {
        v112 = Method_FollowerRootComponent_OnSelectFollowerItem__;
        if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
          v112 = (_QWORD *)sub_1C93AEC(Method_FollowerRootComponent_OnSelectFollowerItem__);
        v113 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v112, v112[4]);
        OverwriteAssetSoundName__PlaySystemSe(v113, 2, 0, 0);
        goto LABEL_187;
      }
      if ( v61 == 2 )
      {
        v62 = Method_FollowerRootComponent_OnSelectFollowerItem__;
        if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
          v62 = (_QWORD *)sub_1C93AEC(Method_FollowerRootComponent_OnSelectFollowerItem__);
        v63 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v62, v62[4]);
LABEL_145:
        OverwriteAssetSoundName__PlaySystemSe(v63, 0, 0, 0);
        this = (FollowerRootComponent_o *)v8->fields.myFSM;
        if ( this )
        {
          v73 = &StringLiteral_8715/*"MENU_SHOW_SUPPORT"*/;
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
                                            0);
        if ( !this )
          goto LABEL_196;
        v91 = (FollowerSelectItemListViewItem_o *)this;
        FollowerSelectItemListViewItem__SetSkillChangeInfo(
          (FollowerSelectItemListViewItem_o *)this,
          *(const MethodInfo **)&kind);
        if ( !FollowerSelectItemListViewItem__get_ServantLeader(v91, v92) )
          goto LABEL_165;
        this = (FollowerRootComponent_o *)FollowerSelectItemListViewItem__get_ServantLeader(v91, v93);
        if ( !this )
          goto LABEL_196;
        v95 = *(_QWORD *)&this->fields.manualWidth;
        v94 = *(_QWORD *)&this->fields.kind;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v125.fields.currentCryptoKey = v95;
        *(_QWORD *)&v125.fields.fakeValue = v94;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v125, 0) >= 1 )
        {
          this = (FollowerRootComponent_o *)FollowerSelectItemListViewItem__get_ServantLeader(v91, v93);
          if ( !this )
            goto LABEL_196;
          EquipTargetInfoByEquipIdx = ServantLeaderInfo__GetEquipTargetInfoByEquipIdx(
                                        (ServantLeaderInfo_o *)this,
                                        param,
                                        0);
          if ( !EquipTargetInfoByEquipIdx )
            goto LABEL_175;
          EquipInfo = EquipTargetInfoByEquipIdx;
          v99 = *(_QWORD *)&EquipTargetInfoByEquipIdx->fields.svtId.fields.currentCryptoKey;
          v98 = *(_QWORD *)&EquipTargetInfoByEquipIdx->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v126.fields.currentCryptoKey = v99;
          *(_QWORD *)&v126.fields.fakeValue = v98;
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v126, 0) < 1 )
            goto LABEL_175;
          this = (FollowerRootComponent_o *)FollowerSelectItemListViewItem__get_ServantLeader(v91, v100);
          if ( !this )
            goto LABEL_196;
          if ( ServantLeaderInfo__IsHideEquip((ServantLeaderInfo_o *)this, 0) )
          {
LABEL_175:
            v109 = Method_FollowerRootComponent_OnSelectFollowerItem__;
            if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
              v109 = (_QWORD *)sub_1C93AEC(Method_FollowerRootComponent_OnSelectFollowerItem__);
            v63 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v109, v109[4]);
LABEL_178:
            OverwriteAssetSoundName__PlaySystemSe(v63, 2, 0, 0);
LABEL_179:
            operationItemListViewManager = v8->fields.operationItemListViewManager;
            v24 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1C93D20(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
            v25 = Method_FollowerRootComponent_OnSelectFollowerItem__;
LABEL_180:
            v110 = v24;
            FollowerSelectItemListViewManager_CallbackFunc___ctor(v24, (Il2CppObject *)v8, (intptr_t)v25, 0);
            if ( !operationItemListViewManager )
              goto LABEL_196;
            v111 = 2;
            goto LABEL_182;
          }
        }
        else
        {
LABEL_165:
          EquipInfo = FollowerSelectItemListViewItem__get_EquipInfo(v91, v93);
          if ( !EquipInfo )
            goto LABEL_175;
        }
        v102 = *(_QWORD *)&EquipInfo->fields.svtId.fields.currentCryptoKey;
        v101 = *(_QWORD *)&EquipInfo->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v127.fields.currentCryptoKey = v102;
        *(_QWORD *)&v127.fields.fakeValue = v101;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v127, 0) < 1 )
          goto LABEL_175;
        v103 = Method_FollowerRootComponent_OnSelectFollowerItem__;
        if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
          v103 = (_QWORD *)sub_1C93AEC(Method_FollowerRootComponent_OnSelectFollowerItem__);
        v104 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v103, v103[4]);
        OverwriteAssetSoundName__PlaySystemSe(v104, 0, 0, 0);
        followerInfo = v91->fields.followerInfo;
        if ( followerInfo )
        {
          type = followerInfo->fields.type;
          if ( type == 1 )
          {
            v108 = 13;
            goto LABEL_193;
          }
          if ( type == 5 )
          {
            v108 = 14;
LABEL_193:
            FollowerRootComponent__SelectShowServantEquip(v8, EquipInfo, v108, v105);
            return;
          }
        }
        if ( v91->fields.isNpc )
          v108 = 19;
        else
          v108 = 16;
        goto LABEL_193;
      }
LABEL_118:
      v78 = Method_FollowerRootComponent_OnSelectFollowerItem__;
      if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
        v78 = (_QWORD *)sub_1C93AEC(Method_FollowerRootComponent_OnSelectFollowerItem__);
      v79 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v78, v78[4]);
      OverwriteAssetSoundName__PlaySystemSe(v79, 2, 0, 0);
      v80 = v8->fields.tutorialMode;
      if ( v80 == 3 )
      {
LABEL_187:
        operationItemListViewManager = v8->fields.operationItemListViewManager;
        v110 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1C93D20(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
        FollowerSelectItemListViewManager_CallbackFunc___ctor(
          v110,
          (Il2CppObject *)v8,
          (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
          0);
        if ( !operationItemListViewManager )
          goto LABEL_196;
        v111 = 4;
LABEL_182:
        FollowerSelectItemListViewManager__SetMode(operationItemListViewManager, v111, v110, 0);
        return;
      }
      if ( v80 == 2 )
        goto LABEL_179;
      return;
    case 7:
    case 13:
      v53 = Method_FollowerRootComponent_OnSelectFollowerItem__;
      if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
        v53 = (_QWORD *)sub_1C93AEC(Method_FollowerRootComponent_OnSelectFollowerItem__);
      v54 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v53, v53[4]);
      OverwriteAssetSoundName__PlaySystemSe(v54, 0, 0, 0);
      if ( !FollowerListRequest_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FollowerListRequest_TypeInfo);
      v55 = FollowerListRequest__checkRefreshRate(0);
      v56 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C93D20(CommonConfirmDialog_ClickDelegate_TypeInfo);
      CommonConfirmDialog_ClickDelegate___ctor(
        v56,
        (Il2CppObject *)v8,
        Method_FollowerRootComponent_EndRefreshConfirm__,
        0);
      if ( kind == 13 )
      {
        if ( !FollowerRecommendSupportListRequest_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FollowerRecommendSupportListRequest_TypeInfo);
        v57 = FollowerRecommendSupportListRequest__CheckRefreshRate(0);
        v56 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C93D20(CommonConfirmDialog_ClickDelegate_TypeInfo);
        CommonConfirmDialog_ClickDelegate___ctor(
          v56,
          (Il2CppObject *)v8,
          Method_FollowerRootComponent_EndRecommendRefreshConfirm__,
          0);
        if ( v57 )
        {
LABEL_73:
          commonConfirmDialog = v8->fields.commonConfirmDialog;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v59 = LocalizationManager__Get((System_String_o *)StringLiteral_6493/*"FOLLOWER_SELECT_REFRESH_TITLE"*/, 0);
          this = (FollowerRootComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6490/*"FOLLOWER_SELECT_REFRESH_MESSAGE"*/, 0);
          v60 = this;
          if ( !FollowerRootComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(FollowerRootComponent_TypeInfo);
          if ( commonConfirmDialog )
          {
            CommonConfirmDialog__Open_31555888(
              commonConfirmDialog,
              v59,
              (System_String_o *)v60,
              1,
              v56,
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
      else if ( v55 )
      {
        goto LABEL_73;
      }
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v86 = LocalizationManager__Get((System_String_o *)StringLiteral_6492/*"FOLLOWER_SELECT_REFRESH_REST_TITLE"*/, 0);
      v87 = LocalizationManager__Get((System_String_o *)StringLiteral_6491/*"FOLLOWER_SELECT_REFRESH_REST_MESSAGE"*/, 0);
      v88 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
      System_Action___ctor(v88, (Il2CppObject *)v8, Method_FollowerRootComponent_EndRefreshRest__, 0);
      if ( Instance )
      {
        CommonUI__OpenNotificationDialog((CommonUI_o *)Instance, v86, v87, v88, -1, 0, 0, 0, 0, 0, 1, 0, 0, 0.0, 0, 0);
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
                                          0);
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
        sub_1C93D34(this);
      v12 = skillInfoList->m_Items[v11];
      if ( v12 && v12->fields.id >= 1 && v12->fields.lv >= 1 )
      {
        v13 = Method_FollowerRootComponent_OnSelectFollowerItem__;
        if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
          v13 = (_QWORD *)sub_1C93AEC(Method_FollowerRootComponent_OnSelectFollowerItem__);
        v14 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v13, v13[4]);
        OverwriteAssetSoundName__PlaySystemSe(v14, 0, 0, 0);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (FollowerRootComponent_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_SkillMaster___);
        if ( !this )
          goto LABEL_196;
        v15 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                v12->fields.id,
                (const MethodInfo_3463274 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        this = (FollowerRootComponent_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_SkillLvMaster___);
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
        v17 = LocalizationManager__Get((System_String_o *)StringLiteral_8599/*"MASTER_EQSKILL_LV_TXT"*/, 0);
        lv = v12->fields.lv;
        v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv);
        v19 = System_String__Format(v17, v18, 0);
        name = System_String__Concat_64463988(v16, (System_String_o *)StringLiteral_113/*" "*/, v19, 0);
        v20 = v8->fields.tutorialMode;
        this = (FollowerRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !this )
          goto LABEL_196;
        if ( v20 == 3 )
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
        v21 = Method_FollowerRootComponent_OnSelectFollowerItem__;
        if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
          v21 = (_QWORD *)sub_1C93AEC(Method_FollowerRootComponent_OnSelectFollowerItem__);
        v22 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v21, v21[4]);
        OverwriteAssetSoundName__PlaySystemSe(v22, 2, 0, 0);
      }
LABEL_30:
      operationItemListViewManager = v8->fields.operationItemListViewManager;
      v24 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1C93D20(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
      v25 = Method_FollowerRootComponent_OnSelectFollowerItem__;
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
      this = (FollowerRootComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !this )
        goto LABEL_196;
      LOBYTE(this->fields.titleInfo) = 1;
LABEL_128:
      v82 = (NetworkManager_ResultCallbackFunc_o *)sub_1C93D20(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v82,
        (Il2CppObject *)v8,
        Method_FollowerRootComponent_CallbackRefresh__,
        0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      this = (FollowerRootComponent_o *)NetworkManager__getRequest_object_(
                                          v82,
                                          (const MethodInfo_322FB9C *)Method_NetworkManager_getRequest_FollowerRecommendSupportListRequest___);
      if ( !v8->fields.battleSetupInfo )
        goto LABEL_196;
      v83 = (FollowerRecommendSupportListRequest_o *)this;
      this = (FollowerRootComponent_o *)BattleSetupInfo__TargetQuestId(v8->fields.battleSetupInfo, 0);
      v84 = v8->fields.battleSetupInfo;
      if ( !v84 || !v83 )
        goto LABEL_196;
      FollowerRecommendSupportListRequest__beginRequest(v83, 0, (int32_t)this, v84->fields.questPhase, 0);
      return;
    default:
      this = (FollowerRootComponent_o *)v8->fields.operationItemListViewManager;
      if ( !this )
        goto LABEL_196;
      this = (FollowerRootComponent_o *)FollowerSelectItemListViewManager__GetItem(
                                          (FollowerSelectItemListViewManager_o *)this,
                                          n,
                                          0);
      if ( !this )
        goto LABEL_196;
      v64 = this;
      if ( FollowerSelectItemListViewItem__get_SvtId(
             (FollowerSelectItemListViewItem_o *)this,
             *(const MethodInfo **)&kind) < 1
        || LOBYTE(v64->fields.state)
        || BYTE3(v64[1].monitor) )
      {
        goto LABEL_175;
      }
      this = (FollowerRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
      if ( !this )
        goto LABEL_196;
      if ( !BYTE4(this->fields.battleSetupInfo) )
        goto LABEL_100;
      this = (FollowerRootComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      v65 = this;
      v66 = FollowerRootComponent___c_TypeInfo;
      if ( !FollowerRootComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FollowerRootComponent___c_TypeInfo);
        v66 = FollowerRootComponent___c_TypeInfo;
      }
      _9__67_0 = v66->static_fields->__9__67_0;
      if ( !_9__67_0 )
      {
        if ( !v66->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v66);
          v66 = FollowerRootComponent___c_TypeInfo;
        }
        v68 = (Il2CppObject *)v66->static_fields->__9;
        _9__67_0 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
        System_Action___ctor(_9__67_0, v68, Method_FollowerRootComponent___c__OnSelectFollowerItem_b__67_0__, 0);
        static_fields = FollowerRootComponent___c_TypeInfo->static_fields;
        static_fields->__9__67_0 = _9__67_0;
        this = (FollowerRootComponent_o *)sub_1C93A78(&static_fields->__9__67_0, _9__67_0);
      }
      if ( !v65 )
        goto LABEL_196;
      if ( PartyOrganizationUtility__OpenQuestUseItemExpiredDialog((PartyOrganizationUtility_o *)v65, _9__67_0, 0) )
        goto LABEL_30;
LABEL_100:
      v70 = Method_FollowerRootComponent_OnSelectFollowerItem__;
      if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
        v70 = (_QWORD *)sub_1C93AEC(Method_FollowerRootComponent_OnSelectFollowerItem__);
      v71 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v70, v70[4]);
      OverwriteAssetSoundName__PlaySystemSe(v71, 0, 0, 0);
      if ( !v8->fields.tutorialState )
        goto LABEL_107;
      v72 = v8->fields.tutorialMode;
      if ( v72 == 3 )
      {
        v8->fields.state = 4;
        v114 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v115 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
        System_Action___ctor(v115, (Il2CppObject *)v8, Method_FollowerRootComponent_EndCloseTutorialArrow__, 0);
        if ( !v114 )
          goto LABEL_196;
        CommonUI__CloseTutorialArrowMark((CommonUI_o *)v114, v115, 0);
      }
      else if ( v72 == 2 )
      {
        this = (FollowerRootComponent_o *)v8->fields.titleInfo;
        if ( this )
        {
          TitleInfoControl__setBackBtnEnable((TitleInfoControl_o *)this, 1, 0);
LABEL_107:
          this = (FollowerRootComponent_o *)v8->fields.myFSM;
          if ( this )
          {
            v73 = &StringLiteral_8706/*"MENU_SELECT_ITEM"*/;
LABEL_147:
            PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v73, 0);
            return;
          }
        }
LABEL_196:
        sub_1C93D2C(this, *(_QWORD *)&kind);
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
  struct System_String_o *selectFriendCode; // x8
  System_String_o *fields; // x19
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
  if ( (byte_4D2B307 & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&BgmManager_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_BgmMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C93AD4(&SoundManager_TypeInfo);
    this = (FollowerRootComponent_o *)sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2B307 = 1;
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
    this = (FollowerRootComponent_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
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
        this = (FollowerRootComponent_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_BgmMaster___);
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
        this = (FollowerRootComponent_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_BgmMaster___);
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
    this = (FollowerRootComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !this )
      goto LABEL_70;
    this = (FollowerRootComponent_o *)PartyOrganizationUtility__ExistsTemporaryPartyInfo(
                                        (PartyOrganizationUtility_o *)this,
                                        0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !System_String__IsNullOrEmpty(BgmFileName, 0) )
        FollowerRootComponent__SetBackupBgmName(v2, v12 & 1, v16);
      this = (FollowerRootComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( this )
      {
        selectFriendCode = this->fields.selectFriendCode;
        if ( selectFriendCode )
        {
          fields = (System_String_o *)selectFriendCode[1].fields;
          v19 = SoundManager_TypeInfo;
          if ( SoundManager_TypeInfo->_2.cctor_finished )
          {
LABEL_38:
            v20 = fields;
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
        this = (FollowerRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( this )
        {
          this = (FollowerRootComponent_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_QuestMaster___);
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
                  fields = QuestEntity__GetBgmName((QuestEntity_o *)this, v26->fields.warId, 0);
                  if ( System_String__IsNullOrEmpty(fields, 0) )
                  {
                    if ( !BgmManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
                    fields = BgmManager__GetMainBgmName(1, 0);
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
        sub_1C93D2C(this, method);
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
  if ( (byte_4D2B306 & 1) == 0 )
  {
    sub_1C93AD4(&SoundManager_TypeInfo);
    byte_4D2B306 = 1;
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
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x0

  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager
    || (FollowerSelectItemListViewManager__DestroyList(operationItemListViewManager, 0),
        (operationItemListViewManager = this->fields.operationItemListViewManager) == 0)
    || (operationItemListViewManager = (FollowerSelectItemListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                                (UnityEngine_Component_o *)operationItemListViewManager,
                                                                                0)) == 0 )
  {
    sub_1C93D2C(operationItemListViewManager, method);
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

  if ( (byte_4D2B310 & 1) == 0 )
  {
    sub_1C93AD4(&Method_FollowerRootComponent_CallbackFollowerList__);
    sub_1C93AD4(&Method_NetworkManager_getRequest_FollowerListRequest___);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C93AD4(&StringLiteral_11163/*"REQUEST_OK"*/);
    byte_4D2B310 = 1;
  }
  v3 = (NetworkManager_ResultCallbackFunc_o *)sub_1C93D20(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v3,
    (Il2CppObject *)this,
    Method_FollowerRootComponent_CallbackFollowerList__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = (FollowerListRequest_o *)NetworkManager__getRequest_object_(
                                              v3,
                                              (const MethodInfo_322FB9C *)Method_NetworkManager_getRequest_FollowerListRequest___);
  if ( !this->fields.battleSetupInfo )
    goto LABEL_13;
  v6 = Request_object;
  Request_object = (FollowerListRequest_o *)BattleSetupInfo__TargetQuestId(this->fields.battleSetupInfo, 0);
  if ( !v6 )
    goto LABEL_13;
  if ( FollowerListRequest__IsNeedRequestList(v6, (int32_t)Request_object, 0) )
  {
    Request_object = (FollowerListRequest_o *)this->fields.battleSetupInfo;
    if ( Request_object )
    {
      Request_object = (FollowerListRequest_o *)BattleSetupInfo__TargetQuestId((BattleSetupInfo_o *)Request_object, 0);
      battleSetupInfo = this->fields.battleSetupInfo;
      if ( battleSetupInfo )
      {
        FollowerListRequest__beginRequest(v6, 0, (int32_t)Request_object, battleSetupInfo->fields.questPhase, 0);
        return;
      }
    }
LABEL_13:
    sub_1C93D2C(Request_object, v5);
  }
  Request_object = (FollowerListRequest_o *)this->fields.myFSM;
  if ( !Request_object )
    goto LABEL_13;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Request_object, (System_String_o *)StringLiteral_11163/*"REQUEST_OK"*/, 0);
}


bool FollowerRootComponent__ReturnBattleSetupMenu(FollowerRootComponent_o *this, const MethodInfo *method)
{
  FollowerRootComponent_o *v2; // x20
  struct BattleSetupInfo_o *battleSetupInfo; // x19

  v2 = this;
  if ( (byte_4D2B31D & 1) == 0 )
  {
    this = (FollowerRootComponent_o *)sub_1C93AD4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4D2B31D = 1;
  }
  battleSetupInfo = v2->fields.battleSetupInfo;
  v2->fields.state = 5;
  if ( !battleSetupInfo )
    goto LABEL_8;
  if ( battleSetupInfo->fields.isChildFollower )
    battleSetupInfo->fields.followerId = 0;
  this = (FollowerRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !this )
LABEL_8:
    sub_1C93D2C(this, method);
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

  if ( (byte_4D2B31C & 1) == 0 )
  {
    sub_1C93AD4(&Method_AvalonSceneManager_UnloadScene_PartyOrganizationRootComponent___);
    sub_1C93AD4(&QuestHintDialogOpenManager_TypeInfo);
    sub_1C93AD4(&RandomLimitCountManager_TypeInfo);
    sub_1C93AD4(&ScriptManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C93AD4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C93AD4(&SoundManager_TypeInfo);
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    byte_4D2B31C = 1;
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
  sub_1C93A78(&this->fields.battleSetupInfo, 0);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__ClearSelectRouteArray(0);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  if ( BYTE6(Instance[12].monitor) )
  {
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_31;
    BYTE6(Instance[12].monitor) = 0;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4D2AFE8 )
    {
      sub_1C93AD4(&TerminalPramsManager_TypeInfo);
      byte_4D2AFE8 = 1;
    }
    v7 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v7 = TerminalPramsManager_TypeInfo;
    }
    v7->static_fields->_IsAutoResume_k__BackingField = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  if ( AvalonSceneManager__IsStackScene((AvalonSceneManager_o *)Instance, 0) )
  {
    this->fields.state = 0;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_31;
    AvalonSceneManager__popSceneRefresh((AvalonSceneManager_o *)Instance, 1, battleSetupInfo, 0);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_31;
    AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0, 0, 0);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
LABEL_31:
    sub_1C93D2C(Instance, v6);
  AvalonSceneManager__UnloadScene_object_(
    (AvalonSceneManager_o *)Instance,
    (const MethodInfo_318C4F4 *)Method_AvalonSceneManager_UnloadScene_PartyOrganizationRootComponent___);
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  RandomLimitCountManager__set_EnableRandomLimitCount(0, 0);
  return 1;
}


void FollowerRootComponent__ReturnSupportList(FollowerRootComponent_o *this, const MethodInfo *method)
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

  if ( (byte_4D2B30E & 1) == 0 )
  {
    sub_1C93AD4(&AvalonSceneManager_TypeInfo);
    sub_1C93AD4(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_FollowerRootComponent_OnSelectFollowerItem__);
    sub_1C93AD4(&RandomLimitCountManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4D2B30E = 1;
  }
  state = this->fields.state;
  this->fields.state = 3;
  if ( state == 5 )
  {
    if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    RandomLimitCountManager__set_EnableRandomLimitCount(0, 0);
    RandomLimitCountManager__set_EnableRandomLimitCount(1, 0);
    operationItemListViewManager = this->fields.operationItemListViewManager;
    if ( !operationItemListViewManager )
      goto LABEL_27;
    FollowerSelectItemListViewManager__ModifyList(
      (FollowerSelectItemListViewManager_o *)operationItemListViewManager,
      this->fields.friendPointUpVal,
      this->fields.friendPointUpMaxVal,
      0);
    v5 = this->fields.operationItemListViewManager;
    v6 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1C93D20(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    FollowerSelectItemListViewManager_CallbackFunc___ctor(
      v6,
      (Il2CppObject *)this,
      (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
      0);
    if ( !v5 )
      goto LABEL_27;
    FollowerSelectItemListViewManager__SetMode(v5, 3, v6, 0);
    v7 = this->fields.operationItemListViewManager;
    if ( !v7 )
      goto LABEL_27;
    if ( !byte_4D2B34E )
    {
      sub_1C93AD4(&FollowerSelectItemListViewManager_TypeInfo);
      byte_4D2B34E = 1;
    }
    v8 = FollowerSelectItemListViewManager_TypeInfo;
    if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
      v8 = FollowerSelectItemListViewManager_TypeInfo;
    }
    FollowerSelectItemListViewManager__ChangeClass(v7, v8->static_fields->followerClassId, 0);
    operationItemListViewManager = this->fields.operationItemListViewManager;
    if ( !operationItemListViewManager )
LABEL_27:
      sub_1C93D2C(operationItemListViewManager, method);
    operationItemListViewManager = (void *)FollowerSelectItemListViewManager__GetDisplayItemNum(
                                             (FollowerSelectItemListViewManager_o *)operationItemListViewManager,
                                             0);
    if ( (int)operationItemListViewManager >= 3 )
    {
      operationItemListViewManager = this->fields.operationItemListViewManager;
      if ( !operationItemListViewManager )
        goto LABEL_27;
      ListViewManager__JumpItem((ListViewManager_o *)operationItemListViewManager, this->fields.selectItemNum, 0);
    }
  }
  else
  {
    operationItemListViewManager = this->fields.operationItemListViewManager;
    if ( !operationItemListViewManager )
      goto LABEL_27;
    FollowerSelectItemListViewManager__ModifyList(
      (FollowerSelectItemListViewManager_o *)operationItemListViewManager,
      this->fields.friendPointUpVal,
      this->fields.friendPointUpMaxVal,
      0);
    v9 = this->fields.operationItemListViewManager;
    v10 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1C93D20(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    FollowerSelectItemListViewManager_CallbackFunc___ctor(
      v10,
      (Il2CppObject *)this,
      (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
      0);
    if ( !v9 )
      goto LABEL_27;
    FollowerSelectItemListViewManager__SetMode(v9, 2, v10, 0);
  }
  battleSetupInfo = this->fields.battleSetupInfo;
  if ( !battleSetupInfo )
    goto LABEL_27;
  followerQuestInfomationDraw = this->fields.followerQuestInfomationDraw;
  questRestrictionInfo = battleSetupInfo->fields.questRestrictionInfo;
  operationItemListViewManager = SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !operationItemListViewManager || !followerQuestInfomationDraw )
    goto LABEL_27;
  FollowerQuestInfomationDraw__SetInfomation(
    followerQuestInfomationDraw,
    questRestrictionInfo,
    *((_DWORD *)operationItemListViewManager + 22),
    0,
    v14);
  operationItemListViewManager = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v15 = (CommonUI_o *)operationItemListViewManager;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v15 )
    goto LABEL_27;
  CommonUI__maskFadein(v15, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0);
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

  if ( (byte_4D2B316 & 1) == 0 )
  {
    sub_1C93AD4(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C93AD4(&Method_FollowerRootComponent_EndShowServant__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2B316 = 1;
  }
  operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager
    || (ListViewManager__GetScrollView(
          operationItemListViewManager,
          &this->fields.openScroll,
          &this->fields.openOffset,
          0),
        operationItemListViewManager = (ListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        !item)
    || (v6 = (CommonUI_o *)operationItemListViewManager,
        ServantLeader = FollowerSelectItemListViewItem__get_ServantLeader(item, (const MethodInfo *)item),
        v8 = (ServantStatusDialog_EndDelegate_o *)sub_1C93D20(ServantStatusDialog_EndDelegate_TypeInfo),
        ServantStatusDialog_EndDelegate___ctor(
          v8,
          (Il2CppObject *)this,
          Method_FollowerRootComponent_EndShowServant__,
          0),
        !v6) )
  {
    sub_1C93D2C(operationItemListViewManager, item);
  }
  CommonUI__OpenServantStatusDialog_31592948(v6, 5, ServantLeader, v8, 0);
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

  if ( (byte_4D2B319 & 1) == 0 )
  {
    sub_1C93AD4(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C93AD4(&Method_FollowerRootComponent_EndShowServantEquip__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2B319 = 1;
  }
  operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager
    || (ListViewManager__GetScrollView(
          operationItemListViewManager,
          &this->fields.openScroll,
          &this->fields.openOffset,
          0),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v9 = (ServantStatusDialog_EndDelegate_o *)sub_1C93D20(ServantStatusDialog_EndDelegate_TypeInfo),
        ServantStatusDialog_EndDelegate___ctor(
          v9,
          (Il2CppObject *)this,
          Method_FollowerRootComponent_EndShowServantEquip__,
          0),
        !Instance) )
  {
    sub_1C93D2C(operationItemListViewManager, equipInfo);
  }
  CommonUI__OpenServantEquipStatusDialog_31596056((CommonUI_o *)Instance, statusKind, equipInfo, v9, 0, 0);
}


void FollowerRootComponent__SetBackupBgmName(
        FollowerRootComponent_o *this,
        bool isNonStopEndBgm,
        const MethodInfo *method)
{
  struct System_String_o *BgmName; // x0

  if ( (byte_4D2B308 & 1) == 0 )
  {
    sub_1C93AD4(&SoundManager_TypeInfo);
    byte_4D2B308 = 1;
  }
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  if ( SoundManager__isPlayBgm(0, 0) && !isNonStopEndBgm )
  {
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    BgmName = SoundManager__getBgmName(0);
    this->fields.backupBgmName = BgmName;
    sub_1C93A78(&this->fields.backupBgmName, BgmName);
  }
}


bool FollowerRootComponent__SetFollowerBase(UISprite_o *sprite, System_String_o *spriteName, const MethodInfo *method)
{
  FollowerRootComponent_c *v5; // x0
  UIAtlas_o *partyOrganizationAtlasCache; // x21

  if ( (byte_4D2B303 & 1) == 0 )
  {
    sub_1C93AD4(&AtlasManager_TypeInfo);
    sub_1C93AD4(&FollowerRootComponent_TypeInfo);
    byte_4D2B303 = 1;
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
  PartyOrganizationUtility_o *Instance; // x0
  __int64 followerId; // x1
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  int32_t ItemIndex_33228056; // w0
  struct PartyListViewItem_o *PartyItemSmc_k__BackingField; // x9
  struct BattleSetupInfo_o *v8; // x8
  int64_t v9; // x10
  int32_t v10; // w10
  struct System_String_o *sortStr1; // x10
  _DWORD *monitor; // x10
  int32_t sortValue0_high; // w9
  Il2CppObject *v14; // x19

  if ( (byte_4D2B31E & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C93AD4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4D2B31E = 1;
  }
  Instance = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  Instance = (PartyOrganizationUtility_o *)PartyOrganizationUtility__ExistsTemporaryPartyInfo(Instance, 0);
  battleSetupInfo = this->fields.battleSetupInfo;
  if ( !battleSetupInfo )
    goto LABEL_31;
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    followerId = battleSetupInfo->fields.followerId;
    if ( followerId >= 1 )
    {
      Instance = (PartyOrganizationUtility_o *)this->fields.operationItemListViewManager;
      if ( !Instance )
        goto LABEL_31;
      ItemIndex_33228056 = FollowerSelectItemListViewManager__GetItemIndex_33228056(
                             (FollowerSelectItemListViewManager_o *)Instance,
                             followerId,
                             battleSetupInfo->fields.followerClassId,
                             battleSetupInfo->fields.followerSupportDeckId,
                             battleSetupInfo->fields.followerGrandGraphId,
                             0);
      this->fields.selectItemNum = ItemIndex_33228056 & ~(ItemIndex_33228056 >> 31);
    }
    goto LABEL_28;
  }
  battleSetupInfo->fields.followerId = 0;
  followerId = (unsigned int)this->fields.selectItemNum;
  if ( (followerId & 0x80000000) == 0 )
  {
    Instance = (PartyOrganizationUtility_o *)this->fields.operationItemListViewManager;
    if ( !Instance )
      goto LABEL_31;
    Instance = (PartyOrganizationUtility_o *)FollowerSelectItemListViewManager__GetItem(
                                               (FollowerSelectItemListViewManager_o *)Instance,
                                               followerId,
                                               0);
    if ( Instance )
    {
      PartyItemSmc_k__BackingField = Instance->fields._PartyItemSmc_k__BackingField;
      v8 = this->fields.battleSetupInfo;
      if ( PartyItemSmc_k__BackingField )
      {
        v9 = *(_QWORD *)&PartyItemSmc_k__BackingField->fields.selectNum;
        if ( !v8 )
          goto LABEL_31;
      }
      else
      {
        v9 = 0;
        if ( !v8 )
          goto LABEL_31;
      }
      v8->fields.followerId = v9;
      v10 = *((_DWORD *)&Instance->fields._IsWaveBattleRestart_k__BackingField + 1);
      if ( v10 )
        v10 = *(_DWORD *)&Instance->fields._IsWaveBattleRestart_k__BackingField;
      v8->fields.followerClassId = v10;
      v8->fields.followerGrandGraphId = Instance[1].fields._SelectedNormalFollowerDeckId_k__BackingField;
      v8->fields.followerSupportDeckId = Instance[1].fields._SelectedConfirmedNormalFollowerDeckId_k__BackingField;
      if ( !LOBYTE(Instance[1].fields._SelectedNormalFollowerGrandGraphId_k__BackingField) )
      {
        v8->fields.recommendSupportIdx = 0;
        if ( !PartyItemSmc_k__BackingField )
        {
          v8->fields.followerType = 0;
          goto LABEL_28;
        }
        goto LABEL_25;
      }
      if ( PartyItemSmc_k__BackingField )
      {
        sortStr1 = PartyItemSmc_k__BackingField->fields.sortStr1;
        if ( sortStr1 )
        {
          if ( !LODWORD(sortStr1[1].klass) )
            sub_1C93D34(Instance);
          monitor = sortStr1[1].monitor;
          if ( monitor )
          {
            v8->fields.recommendSupportIdx = monitor[6];
LABEL_25:
            sortValue0_high = HIDWORD(PartyItemSmc_k__BackingField->fields.sortValue0);
            v8->fields.followerType = 0;
            if ( sortValue0_high == 5 || sortValue0_high == 1 )
              v8->fields.followerType = sortValue0_high;
            goto LABEL_28;
          }
        }
      }
LABEL_31:
      sub_1C93D2C(Instance, followerId);
    }
  }
LABEL_28:
  this->fields.state = 5;
  v14 = (Il2CppObject *)this->fields.battleSetupInfo;
  Instance = (PartyOrganizationUtility_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  AvalonSceneManager__pushScene((AvalonSceneManager_o *)Instance, 40, 1, v14, 0);
  return 1;
}


bool FollowerRootComponent__StartSupportInfoMenu(FollowerRootComponent_o *this, const MethodInfo *method)
{
  __int64 selectItemNum; // x1
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x0
  FollowerSelectItemListViewItem_o *Item; // x0
  FollowerSelectItemListViewItem_o *v6; // x20
  Il2CppClass *klass; // x8
  int namespaze; // w9
  int v9; // w10
  FollowerInfo_o *v10; // x22
  struct FollowerInfo_o *followerInfo; // x11
  Il2CppClass *v12; // x8
  const char *v13; // x9
  int v14; // w10
  FollowerInfo_o *v15; // x21
  struct FollowerInfo_o *userId; // x11
  bool v17; // w22
  SupportInfoJump_o *v19; // x21
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  struct FollowerSelectItemListViewManager_FollowerSelectItemOption_o *Option_k__BackingField; // x8
  _BOOL4 IsGrandSvt_k__BackingField; // w19
  int32_t v23; // w1
  Il2CppObject *v24; // x3
  SupportInfoJump_o *v25; // x20
  struct BattleSetupInfo_o *v26; // x8
  Il2CppObject *v27; // [xsp+8h] [xbp-38h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4D2B31F & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_PickupUserFollowerMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_UserFollowerMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long__TryGetSingleEntity__);
    sub_1C93AD4(&Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long__TryGetSingleEntity__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C93AD4(&SupportInfoJump_TypeInfo);
    byte_4D2B31F = 1;
  }
  entity = 0;
  v27 = 0;
  selectItemNum = (unsigned int)this->fields.selectItemNum;
  if ( (selectItemNum & 0x80000000) == 0 )
  {
    operationItemListViewManager = this->fields.operationItemListViewManager;
    if ( !operationItemListViewManager )
      goto LABEL_50;
    Item = FollowerSelectItemListViewManager__GetItem(operationItemListViewManager, selectItemNum, 0);
    if ( Item )
    {
      v6 = Item;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      operationItemListViewManager = (FollowerSelectItemListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserFollowerMaster___);
      if ( !operationItemListViewManager )
        goto LABEL_50;
      operationItemListViewManager = (FollowerSelectItemListViewManager_o *)DataMasterBase_object__object__long___TryGetSingleEntity(
                                                                              (DataMasterBase_TMaster__TEntity__PKType__o *)operationItemListViewManager,
                                                                              &entity,
                                                                              (const MethodInfo_3465B50 *)Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long__TryGetSingleEntity__);
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
          v9 = 0;
          while ( 1 )
          {
            if ( namespaze == v9 )
              sub_1C93D34(operationItemListViewManager);
            v10 = (FollowerInfo_o *)*((_QWORD *)&klass->_1.byval_arg.data + v9);
            if ( !v10 )
              goto LABEL_50;
            followerInfo = v6->fields.followerInfo;
            if ( followerInfo )
              followerInfo = (struct FollowerInfo_o *)followerInfo->fields.userId;
            if ( (struct FollowerInfo_o *)v10->fields.userId == followerInfo )
              break;
            if ( namespaze == ++v9 )
              goto LABEL_20;
          }
          this->fields.state = 6;
          v19 = (SupportInfoJump_o *)sub_1C93D20(SupportInfoJump_TypeInfo);
          SupportInfoJump___ctor_42257744(v19, v10, 0, 1, 0);
          battleSetupInfo = this->fields.battleSetupInfo;
          if ( battleSetupInfo )
          {
            if ( v19 )
            {
              SupportInfoJump__SetSetupInfo(
                v19,
                battleSetupInfo->fields.eventUpValSetupInfo,
                battleSetupInfo->fields.questRestrictionInfo,
                0);
              Option_k__BackingField = v6->fields._Option_k__BackingField;
              if ( Option_k__BackingField )
              {
                SupportInfoJump__SetIsUseGrandSupport(v19, Option_k__BackingField->fields.isUseGrandBoard, 0);
                v19->fields._IsGrandRestriction_k__BackingField = v6->fields._IsGrandServantRestrictionSupport_k__BackingField;
                IsGrandSvt_k__BackingField = v6->fields._IsGrandSvt_k__BackingField;
                operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
                if ( operationItemListViewManager )
                {
                  if ( IsGrandSvt_k__BackingField )
                    v23 = 43;
                  else
                    v23 = 60;
                  v17 = 1;
                  v24 = (Il2CppObject *)v19;
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
      operationItemListViewManager = (FollowerSelectItemListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_PickupUserFollowerMaster___);
      if ( !operationItemListViewManager )
        goto LABEL_50;
      operationItemListViewManager = (FollowerSelectItemListViewManager_o *)DataMasterBase_object__object__long___TryGetSingleEntity(
                                                                              (DataMasterBase_TMaster__TEntity__PKType__o *)operationItemListViewManager,
                                                                              &v27,
                                                                              (const MethodInfo_3465B50 *)Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long__TryGetSingleEntity__);
      if ( ((unsigned __int8)operationItemListViewManager & 1) != 0 )
      {
        if ( !v27 )
          goto LABEL_50;
        v12 = v27[1].klass;
        if ( v12 )
        {
          v13 = v12->_1.namespaze;
          if ( v13 )
          {
            if ( (int)v13 >= 1 )
            {
              v14 = 0;
              while ( 1 )
              {
                v15 = (FollowerInfo_o *)*((_QWORD *)&v12->_1.byval_arg.data + v14);
                if ( !v15 )
                  goto LABEL_50;
                userId = v6->fields.followerInfo;
                if ( userId )
                  userId = (struct FollowerInfo_o *)userId->fields.userId;
                if ( (struct FollowerInfo_o *)v15->fields.userId == userId )
                  break;
                ++v14;
                v17 = 0;
                if ( (_DWORD)v13 == v14 )
                  return v17;
              }
              this->fields.state = 6;
              v25 = (SupportInfoJump_o *)sub_1C93D20(SupportInfoJump_TypeInfo);
              SupportInfoJump___ctor_42257744(v25, v15, 0, 1, 0);
              v26 = this->fields.battleSetupInfo;
              if ( v26 )
              {
                if ( v25 )
                {
                  SupportInfoJump__SetSetupInfo(
                    v25,
                    v26->fields.eventUpValSetupInfo,
                    v26->fields.questRestrictionInfo,
                    0);
                  operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
                  if ( operationItemListViewManager )
                  {
                    v23 = 60;
                    v17 = 1;
                    v24 = (Il2CppObject *)v25;
LABEL_49:
                    AvalonSceneManager__pushScene((AvalonSceneManager_o *)operationItemListViewManager, v23, 1, v24, 0);
                    return v17;
                  }
                }
              }
LABEL_50:
              sub_1C93D2C(operationItemListViewManager, selectItemNum);
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
  struct EventCampaignEntity_array *Data_42665408; // x0
  struct BattleSetupInfo_o *v13; // x8
  int32_t i; // w20
  BalanceConfig_c *v15; // x0
  PartyOrganizationListViewItem_o *Member; // x0
  PartyOrganizationListViewItem_o *v17; // x21
  FollowerRootComponent_o *FriendPointUpTypeVals; // x0
  const MethodInfo *v19; // x4
  struct BattleSetupInfo_o *v20; // x8
  QuestRestrictionInfo_o *v21; // x0
  struct BattleSetupInfo_o *v22; // x8
  struct BattleSetupInfo_o *v23; // x8
  Il2CppObject *v24; // x20
  struct BattleSetupInfo_o *v25; // x8
  int32_t eventId; // w22
  int64_t v27; // x21
  struct BattleSetupInfo_o *v28; // x8
  UserEventDeckEntity_o *v29; // x20
  __int64 v30; // x8
  int64_t currentCryptoKey; // x8
  int32_t v32; // w1
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
  FollowerRootComponent_o *v55; // x0
  const MethodInfo *v56; // x4
  int32_t k; // w20
  BalanceConfig_c *v58; // x0
  UserServantEntity_o *UserServant; // x0
  UserServantEntity_o *v60; // x21
  System_Int64_array *EquipList; // x0
  FollowerRootComponent_o *v62; // x0
  const MethodInfo *v63; // x4
  int32_t v64; // w21
  int32_t v65; // w21
  struct BattleSetupInfo_o *v66; // x8
  struct BattleSetupInfo_o *v67; // x8
  int32_t v68; // w8
  int32_t v69; // w9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v70; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v71; // [xsp+20h] [xbp-80h] BYREF
  int32_t fpUpDuplicateSum[2]; // [xsp+40h] [xbp-60h] BYREF
  Il2CppObject *entity; // [xsp+48h] [xbp-58h] BYREF

  if ( (byte_4D2B315 & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserDeckMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserEventDeckMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_EventQuestMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__TryGetEntity__);
    sub_1C93AD4(&LastUsedDeckNumberManager_TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_1C93AD4(&Method_System_Nullable_int___ctor__);
    sub_1C93AD4(&Method_System_Nullable_int__get_HasValue__);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C93AD4(&OptionManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4D2B315 = 1;
  }
  *(_QWORD *)fpUpDuplicateSum = 0;
  entity = 0;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_136;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserDeckMaster___);
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
  v64 = BattleSetupInfo__TargetQuestId((BattleSetupInfo_o *)Instance, 0);
  if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
  Instance = LastUsedDeckNumberManager__GetDeckNumber(v64, 0);
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
                 (const MethodInfo_3465A70 *)Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__TryGetEntity__);
  }
  else
  {
    v65 = Instance;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4D2A55B )
    {
      sub_1C93AD4(&NetworkManager_TypeInfo);
      byte_4D2A55B = 1;
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
                          v65,
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
  sub_1C93A78(&this->fields.friendPointCampaignEntityList, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_EventQuestMaster___);
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
  Data_42665408 = EventCampaignMaster__getData_42665408(
                    (EventCampaignMaster_o *)Master_object,
                    24,
                    (EventEntity_array *)Instance,
                    0);
  this->fields.friendPointCampaignEntityList = Data_42665408;
  Instance = sub_1C93A78(&this->fields.friendPointCampaignEntityList, Data_42665408);
  *(_QWORD *)fpUpDuplicateSum = 0;
  if ( this->fields.tutorialMode == 4 )
  {
    v13 = this->fields.battleSetupInfo;
    if ( !v13 )
      goto LABEL_136;
    if ( v13->fields.isChildFollower )
    {
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_136;
      if ( *(_QWORD *)(Instance + 104) )
      {
        for ( i = 0; ; ++i )
        {
          v15 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v15 = BalanceConfig_TypeInfo;
          }
          if ( i >= v15->static_fields->DeckMemberMax )
            break;
          Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( !Instance )
            goto LABEL_136;
          Instance = *(_QWORD *)(Instance + 104);
          if ( !Instance )
            goto LABEL_136;
          Member = PartyListViewItem__GetMember((PartyListViewItem_o *)Instance, i, 0);
          if ( Member )
          {
            v17 = Member;
            if ( Member->fields.userServantEntity )
            {
              Instance = (__int64)PartyOrganizationListViewItem__GetEquipList(Member, 0);
              if ( !v17->fields.userServantEntity )
                goto LABEL_136;
              FriendPointUpTypeVals = (FollowerRootComponent_o *)UserServantEntity__GetFriendPointUpTypeVals(
                                                                   v17->fields.userServantEntity,
                                                                   (System_Int64_array *)Instance,
                                                                   0);
              FollowerRootComponent__GetFriendPointUpValSummary(
                FriendPointUpTypeVals,
                &fpUpDuplicateSum[1],
                fpUpDuplicateSum,
                (System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int___o *)FriendPointUpTypeVals,
                v19);
            }
          }
        }
        goto LABEL_132;
      }
    }
  }
  v20 = this->fields.battleSetupInfo;
  if ( !v20 )
LABEL_136:
    sub_1C93D2C(Instance, v4);
  v21 = v20->fields.questRestrictionInfo;
  if ( v21 )
  {
    Instance = QuestRestrictionInfo__IsServantNum(v21, 0);
    if ( (Instance & 1) != 0 )
      goto LABEL_46;
    v22 = this->fields.battleSetupInfo;
    if ( !v22 )
      goto LABEL_136;
    Instance = (__int64)v22->fields.questRestrictionInfo;
    if ( !Instance )
      goto LABEL_136;
    Instance = QuestRestrictionInfo__IsNpcMulitipleOrOnly((QuestRestrictionInfo_o *)Instance, 0);
    if ( (Instance & 1) != 0 )
      goto LABEL_46;
    v23 = this->fields.battleSetupInfo;
    if ( !v23 )
      goto LABEL_136;
    Instance = (__int64)v23->fields.questRestrictionInfo;
    if ( !Instance )
      goto LABEL_136;
    if ( *(int *)(Instance + 396) >= 1 )
    {
LABEL_46:
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_136;
      v24 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserEventDeckMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4D2A55B )
      {
        sub_1C93AD4(&NetworkManager_TypeInfo);
        byte_4D2A55B = 1;
      }
      Instance = (__int64)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = (__int64)NetworkManager_TypeInfo;
      }
      v25 = this->fields.battleSetupInfo;
      if ( !v25 )
        goto LABEL_136;
      eventId = v25->fields.eventId;
      v27 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL);
      Instance = BattleSetupInfo__TargetQuestId(this->fields.battleSetupInfo, 0);
      v28 = this->fields.battleSetupInfo;
      if ( !v28 )
        goto LABEL_136;
      if ( !v24 )
        goto LABEL_136;
      Instance = (__int64)UserEventDeckMaster__getDeckList(
                            (UserEventDeckMaster_o *)v24,
                            v27,
                            eventId,
                            Instance,
                            v28->fields.questPhase,
                            0,
                            0);
      if ( !Instance )
        goto LABEL_136;
      if ( !*(_DWORD *)(Instance + 24) )
LABEL_137:
        sub_1C93D34(Instance);
      v29 = *(UserEventDeckEntity_o **)(Instance + 32);
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_136;
      if ( !*(_QWORD *)(Instance + 104) )
        goto LABEL_85;
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_136;
      v30 = *(_QWORD *)(Instance + 104);
      if ( !v30 )
        goto LABEL_136;
      currentCryptoKey = *(_QWORD *)(v30 + 176);
      if ( currentCryptoKey )
      {
        v32 = *(_DWORD *)(currentCryptoKey + 396);
        v71.fields.currentCryptoKey = 0;
        System_Nullable_int____ctor(
          (System_Nullable_int__o)&v71,
          v32,
          (const MethodInfo_399F80C *)Method_System_Nullable_int___ctor__);
        currentCryptoKey = v71.fields.currentCryptoKey;
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
          Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( !Instance )
            goto LABEL_136;
          Instance = *(_QWORD *)(Instance + 104);
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
              *(_OWORD *)&v71.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
              *(_OWORD *)&v71.fields.fakeValue = v39;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
              v70 = v71;
              v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v70, 0);
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
        if ( v29 )
          goto LABEL_126;
      }
      else
      {
LABEL_85:
        if ( v29 )
        {
          UserServantList = UserEventDeckEntity__GetUserServantList(v29, 0, 0, 0);
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
            deckInfo = v29->fields.deckInfo;
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
              Instance = (__int64)UserEventDeckEntity__GetEquipList(v29, v48, 0);
              if ( !v52 )
                goto LABEL_136;
              v54 = (System_Int64_array *)Instance;
              Instance = (__int64)FollowerRootComponent__GetEquipIdsForGrandSvt(
                                    this,
                                    v52->fields.initPos,
                                    v52->fields.userSvtId,
                                    v53);
              if ( Instance )
                v4 = (System_Int64_array *)Instance;
              else
                v4 = v54;
              if ( v48 >= LODWORD(UserServantList->max_length) )
                goto LABEL_137;
              Instance = (__int64)m_Items[v48];
              if ( !Instance )
                goto LABEL_136;
              v55 = (FollowerRootComponent_o *)UserServantEntity__GetFriendPointUpTypeVals(
                                                 (UserServantEntity_o *)Instance,
                                                 v4,
                                                 0);
              FollowerRootComponent__GetFriendPointUpValSummary(
                v55,
                &fpUpDuplicateSum[1],
                fpUpDuplicateSum,
                (System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int___o *)v55,
                v56);
            }
            ++v48;
          }
LABEL_126:
          v66 = this->fields.battleSetupInfo;
          if ( v66 )
          {
            Instance = (__int64)v66->fields.questRestrictionInfo;
            if ( Instance )
            {
              QuestRestrictionInfo__SetDeckInfo_44108968((QuestRestrictionInfo_o *)Instance, v29, 0);
              goto LABEL_132;
            }
          }
          goto LABEL_136;
        }
      }
      v67 = this->fields.battleSetupInfo;
      if ( v67 )
      {
        Instance = (__int64)v67->fields.questRestrictionInfo;
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
    v58 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v58 = BalanceConfig_TypeInfo;
    }
    if ( k >= v58->static_fields->DeckMemberMax )
      break;
    Instance = (__int64)entity;
    if ( !entity )
      goto LABEL_136;
    UserServant = UserDeckEntity__GetUserServant((UserDeckEntity_o *)entity, k, 0);
    if ( UserServant )
    {
      v60 = UserServant;
      Instance = (__int64)entity;
      if ( !entity )
        goto LABEL_136;
      EquipList = UserDeckEntity__GetEquipList((UserDeckEntity_o *)entity, k, 0);
      v62 = (FollowerRootComponent_o *)UserServantEntity__GetFriendPointUpTypeVals(v60, EquipList, 0);
      FollowerRootComponent__GetFriendPointUpValSummary(
        v62,
        &fpUpDuplicateSum[1],
        fpUpDuplicateSum,
        (System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int___o *)v62,
        v63);
    }
  }
LABEL_132:
  v69 = fpUpDuplicateSum[0];
  v68 = fpUpDuplicateSum[1];
  this->fields.friendPointUpMaxVal = fpUpDuplicateSum[1];
  this->fields.friendPointUpVal = v69 + v68;
}


void FollowerRootComponent___OnClickBack_b__73_0(
        FollowerRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  TerminalPramsManager_c *v7; // x0

  if ( (byte_4D2B32E & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_3457/*"CLICK_BACK"*/);
    byte_4D2B32E = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  CommonUI__CloseConfirmDialog(Instance, 0);
  if ( isDecide )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4D2AFE8 )
    {
      sub_1C93AD4(&TerminalPramsManager_TypeInfo);
      byte_4D2AFE8 = 1;
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
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3457/*"CLICK_BACK"*/, 0);
      return;
    }
LABEL_14:
    sub_1C93D2C(Instance, v6);
  }
  this->fields.state = 3;
}


void FollowerRootComponent__beginFinish(FollowerRootComponent_o *this, const MethodInfo *method)
{
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x0
  FollowerRootComponent_c *v4; // x0
  struct FollowerRootComponent_StaticFields *static_fields; // x0

  if ( (byte_4D2B30F & 1) == 0 )
  {
    sub_1C93AD4(&AtlasManager_TypeInfo);
    sub_1C93AD4(&FollowerRootComponent_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    byte_4D2B30F = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  this->fields.state = 0;
  if ( !operationItemListViewManager )
    goto LABEL_14;
  FollowerSelectItemListViewManager__DestroyList(operationItemListViewManager, 0);
  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    goto LABEL_14;
  operationItemListViewManager = (FollowerSelectItemListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                          (UnityEngine_Component_o *)operationItemListViewManager,
                                                                          0);
  if ( !operationItemListViewManager )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)operationItemListViewManager, 0, 0);
  v4 = FollowerRootComponent_TypeInfo;
  if ( !FollowerRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerRootComponent_TypeInfo);
    v4 = FollowerRootComponent_TypeInfo;
  }
  static_fields = v4->static_fields;
  static_fields->partyOrganizationAtlasCache = 0;
  sub_1C93A78(&static_fields->partyOrganizationAtlasCache, 0);
  operationItemListViewManager = (FollowerSelectItemListViewManager_o *)this->fields.backSkinSprite;
  if ( !operationItemListViewManager
    || (operationItemListViewManager = (FollowerSelectItemListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                                (UnityEngine_Component_o *)operationItemListViewManager,
                                                                                0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)operationItemListViewManager, 0, 0),
        (operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__)) == 0) )
  {
LABEL_14:
    sub_1C93D2C(operationItemListViewManager, method);
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

  if ( (byte_4D2B304 & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4D2B304 = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C93D2C(0, v4);
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, (SceneRootComponent_o *)this, 0);
}


void FollowerRootComponent__beginPause(FollowerRootComponent_o *this, const MethodInfo *method)
{
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x0

  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    sub_1C93D2C(0, method);
  FollowerSelectItemListViewManager__SaveSortFilter(operationItemListViewManager, 0);
}


void FollowerRootComponent__beginResume(FollowerRootComponent_o *this, Il2CppObject *data, const MethodInfo *method)
{
  FollowerRootComponent_c *v5; // x0
  struct UIAtlas_o *partyOrganizationAtlas; // x21
  struct FollowerRootComponent_StaticFields *static_fields; // x0
  TitleInfoControl_o *titleInfo; // x21
  __int64 Instance; // x0
  int64_t selectItemNum; // x1
  __int64 naturalAligment; // x10
  __int64 v12; // x8
  struct BattleSetupInfo_o *battleSetupInfo; // x9
  int64_t v14; // x10
  Il2CppClass *v15; // x8
  __int64 v16; // x9
  Il2CppObject *v17; // x10
  Il2CppObject *v18; // x1
  struct BattleSetupInfo_o **p_battleSetupInfo; // x21
  struct BattleSetupInfo_o *v20; // x8
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x20
  int32_t tutorialMode; // w8
  struct BattleSetupInfo_o *v23; // x8
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  struct BattleSetupInfo_o *v25; // x8
  const MethodInfo *v26; // x4
  struct BattleSetupInfo_o *v27; // x8
  const MethodInfo *v28; // x1
  CommonUI_o *v29; // x20
  struct BattleSetupInfo_o *v30; // x8
  PartyListViewItem_o *v31; // x20
  UnityEngine_Component_o *v32; // x8
  int32_t i; // w21
  FollowerSelectItemListViewManager_o *v34; // x22
  struct BattleSetupInfo_o *v35; // x8
  const MethodInfo *v36; // x4
  struct BattleSetupInfo_o *v37; // x8
  FollowerSelectItemListViewManager_o *v38; // x22
  FollowerSelectItemListViewManager_CallbackFunc_o *v39; // x23
  PartyOrganizationListViewItem_o *Member; // x0
  struct FollowerInfo_o *followerInfo; // x8
  FollowerSelectItemListViewManager_o *v42; // x20
  int64_t userId; // x21
  struct QuestRestrictionInfo_o *v44; // x8
  BalanceConfig_c *v45; // x0
  int32_t v46; // w22
  PartyOrganizationListViewItem_o *v47; // x0
  struct FollowerInfo_o *v48; // x8
  int32_t monitor; // w4
  int klass_high; // w10
  int32_t v51; // w10
  struct BattleSetupInfo_o *v52; // x8

  if ( (byte_4D2B30D & 1) == 0 )
  {
    sub_1C93AD4(&AvalonSceneManager_TypeInfo);
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&BattleSetupInfo_TypeInfo);
    sub_1C93AD4(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_FollowerRootComponent_OnSelectFollowerItem__);
    sub_1C93AD4(&FollowerRootComponent_TypeInfo);
    sub_1C93AD4(&RandomLimitCountManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C93AD4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C93AD4(&SupportInfoJump_TypeInfo);
    sub_1C93AD4(&TutorialFlag_TypeInfo);
    byte_4D2B30D = 1;
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
  sub_1C93A78(&static_fields->partyOrganizationAtlasCache, partyOrganizationAtlas);
  titleInfo = this->fields.titleInfo;
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_126;
  if ( *(_BYTE *)(Instance + 112) )
  {
    selectItemNum = 0;
    if ( !titleInfo )
      goto LABEL_126;
  }
  else
  {
    selectItemNum = this->fields.tutorialMode != 2;
    if ( !titleInfo )
      goto LABEL_126;
  }
  TitleInfoControl__setBackBtnEnable(titleInfo, selectItemNum, 0);
  Instance = (__int64)this->fields.operationItemListViewManager;
  if ( !Instance )
    goto LABEL_126;
  FollowerSelectItemListViewManager__PlayClassButtonEffect((FollowerSelectItemListViewManager_o *)Instance, 0);
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
            goto LABEL_126;
          Instance = (__int64)FollowerSelectItemListViewManager__GetItem(
                                (FollowerSelectItemListViewManager_o *)Instance,
                                selectItemNum,
                                0);
          if ( Instance )
          {
            this->fields.state = 5;
            v12 = *(_QWORD *)(Instance + 120);
            battleSetupInfo = this->fields.battleSetupInfo;
            if ( v12 )
              v14 = *(_QWORD *)(v12 + 16);
            else
              v14 = 0;
            if ( !battleSetupInfo )
              goto LABEL_126;
            battleSetupInfo->fields.followerId = v14;
            battleSetupInfo->fields.followerClassId = (int32_t)data[3].klass;
            monitor = (int32_t)data[4].monitor;
            battleSetupInfo->fields.followerGrandGraphId = monitor;
            klass_high = HIDWORD(data[3].klass);
            if ( klass_high <= 0 )
              klass_high = *(_DWORD *)(Instance + 272);
            battleSetupInfo->fields.followerSupportDeckId = klass_high;
            if ( v12 )
            {
              v51 = *(_DWORD *)(v12 + 36);
              battleSetupInfo->fields.followerType = 0;
              if ( (v51 | 4) == 5 )
                battleSetupInfo->fields.followerType = v51;
              if ( monitor >= 1 )
              {
                selectItemNum = *(_QWORD *)(v12 + 16);
LABEL_111:
                Instance = (__int64)this->fields.operationItemListViewManager;
                if ( !Instance )
                  goto LABEL_126;
                Instance = FollowerSelectItemListViewManager__GetItemIndex_33228056(
                             (FollowerSelectItemListViewManager_o *)Instance,
                             selectItemNum,
                             0,
                             0,
                             monitor,
                             0);
                this->fields.selectItemNum = Instance;
              }
            }
            else
            {
              battleSetupInfo->fields.followerType = 0;
              if ( monitor >= 1 )
              {
                selectItemNum = 0;
                goto LABEL_111;
              }
            }
            if ( this->fields.operationItemListViewManager )
            {
              if ( !byte_4D2B34E )
              {
                sub_1C93AD4(&FollowerSelectItemListViewManager_TypeInfo);
                byte_4D2B34E = 1;
              }
              Instance = (__int64)FollowerSelectItemListViewManager_TypeInfo;
              if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
                Instance = (__int64)FollowerSelectItemListViewManager_TypeInfo;
              }
              v52 = this->fields.battleSetupInfo;
              if ( v52 )
              {
                selectItemNum = (unsigned int)v52->fields.followerClassId;
                if ( *(_DWORD *)(*(_QWORD *)(Instance + 184) + 8LL) != (_DWORD)selectItemNum )
                {
                  Instance = (__int64)this->fields.operationItemListViewManager;
                  if ( !Instance )
                    goto LABEL_126;
                  if ( FollowerSelectItemListViewManager__ChangeClass(
                         (FollowerSelectItemListViewManager_o *)Instance,
                         selectItemNum,
                         0) )
                  {
                    Instance = (__int64)this->fields.operationItemListViewManager;
                    if ( !Instance )
                      goto LABEL_126;
                    ListViewManager__JumpItem((ListViewManager_o *)Instance, this->fields.selectItemNum, 0);
                  }
                }
                Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
LABEL_126:
            sub_1C93D2C(Instance, selectItemNum);
          }
        }
      }
    }
    goto LABEL_39;
  }
  if ( data )
  {
    v15 = (Il2CppClass *)BattleSetupInfo_TypeInfo;
    v16 = BattleSetupInfo_TypeInfo->_2.naturalAligment;
    if ( data->klass->_2.naturalAligment >= (unsigned int)v16 )
    {
      if ( (BattleSetupInfo_c *)data->klass->_2.typeHierarchy[v16 - 1] == BattleSetupInfo_TypeInfo )
        v17 = data;
      else
        v17 = 0;
    }
    else
    {
      v17 = 0;
    }
    this->fields.battleSetupInfo = (struct BattleSetupInfo_o *)v17;
    p_battleSetupInfo = &this->fields.battleSetupInfo;
    if ( data->klass->_2.naturalAligment >= (unsigned int)v16 )
    {
      if ( data->klass->_2.typeHierarchy[v16 - 1] == v15 )
        v18 = data;
      else
        v18 = 0;
    }
    else
    {
      v18 = 0;
    }
  }
  else
  {
    v18 = 0;
    this->fields.battleSetupInfo = 0;
    p_battleSetupInfo = &this->fields.battleSetupInfo;
  }
  Instance = sub_1C93A78(p_battleSetupInfo, v18);
  v20 = *p_battleSetupInfo;
  if ( *p_battleSetupInfo )
  {
    questRestrictionInfo = v20->fields.questRestrictionInfo;
    if ( !questRestrictionInfo )
      goto LABEL_126;
    if ( !QuestRestrictionInfo__IsMyServantOrNpcRestriction(v20->fields.questRestrictionInfo, 0)
      && (questRestrictionInfo->fields.isNoSupportBattle
       || questRestrictionInfo->fields.isFixedMyServantSingle
       || questRestrictionInfo->fields.isSupportOnlyForceBattle) )
    {
      goto LABEL_91;
    }
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    Instance = TutorialFlag__Get_41140656(102, 0);
    if ( (Instance & 1) == 0 )
    {
      v23 = *p_battleSetupInfo;
      if ( !*p_battleSetupInfo )
        goto LABEL_126;
LABEL_62:
      if ( v23->fields.isChildFollower )
      {
        FollowerRootComponent__ReturnBattleSetupMenu(this, (const MethodInfo *)selectItemNum);
        return;
      }
      goto LABEL_91;
    }
LABEL_39:
    FollowerRootComponent__UpdateDeckInfomation(this, (const MethodInfo *)selectItemNum);
    tutorialMode = this->fields.tutorialMode;
    if ( tutorialMode != 4 )
    {
      if ( tutorialMode != 3 )
      {
        if ( tutorialMode == 1 )
        {
          v23 = this->fields.battleSetupInfo;
          if ( !v23 )
            goto LABEL_126;
          goto LABEL_62;
        }
LABEL_50:
        FollowerRootComponent__ReturnSupportList(this, (const MethodInfo *)selectItemNum);
        return;
      }
      Instance = (__int64)this->fields.battleSetupInfo;
      this->fields.selectItemNum = -1;
      *(_QWORD *)&this->fields.tutorialMode = 0x100000003LL;
      if ( !Instance )
        goto LABEL_126;
      operationItemListViewManager = this->fields.operationItemListViewManager;
      Instance = BattleSetupInfo__TargetQuestId((BattleSetupInfo_o *)Instance, 0);
      v25 = this->fields.battleSetupInfo;
      if ( !v25 )
        goto LABEL_126;
      if ( !operationItemListViewManager )
        goto LABEL_126;
      FollowerSelectItemListViewManager__CreateList(
        operationItemListViewManager,
        Instance,
        v25->fields.questPhase,
        this->fields.friendPointUpVal,
        this->fields.friendPointUpMaxVal,
        this->fields.friendPointCampaignEntityList,
        v25->fields.questRestrictionInfo,
        0);
      v27 = this->fields.battleSetupInfo;
      if ( !v27 )
        goto LABEL_126;
      Instance = (__int64)this->fields.followerQuestInfomationDraw;
      if ( !Instance )
        goto LABEL_126;
      FollowerQuestInfomationDraw__SetInfomation(
        (FollowerQuestInfomationDraw_o *)Instance,
        v27->fields.questRestrictionInfo,
        0,
        0,
        v26);
      this->fields.state = 2;
      FollowerRootComponent__OnMoveEnd(this, v28);
LABEL_57:
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v29 = (CommonUI_o *)Instance;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      if ( v29 )
      {
        CommonUI__maskFadein(v29, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0);
        SceneRootComponent__sendMessageResume((SceneRootComponent_o *)this, 0);
        return;
      }
      goto LABEL_126;
    }
    if ( this->fields.state == 6 )
      goto LABEL_50;
    v30 = this->fields.battleSetupInfo;
    if ( !v30 )
      goto LABEL_126;
    if ( v30->fields.isChildFollower )
      goto LABEL_129;
    v44 = v30->fields.questRestrictionInfo;
    if ( !v44 )
      goto LABEL_126;
    if ( !v44->fields.isNotTransitionSupportList )
    {
LABEL_129:
      if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
      RandomLimitCountManager__set_EnableRandomLimitCount(0, 0);
      RandomLimitCountManager__set_EnableRandomLimitCount(1, 0);
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_126;
      v31 = *(PartyListViewItem_o **)(Instance + 104);
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_126;
      v32 = (UnityEngine_Component_o *)this->fields.operationItemListViewManager;
      i = *(_DWORD *)(Instance + 88);
      this->fields.tutorialState = 0;
      this->fields.selectItemNum = -1;
      if ( !v32 )
        goto LABEL_126;
      Instance = (__int64)UnityEngine_Component__get_gameObject(v32, 0);
      if ( !Instance )
        goto LABEL_126;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
      Instance = (__int64)this->fields.battleSetupInfo;
      if ( !Instance )
        goto LABEL_126;
      v34 = this->fields.operationItemListViewManager;
      Instance = BattleSetupInfo__TargetQuestId((BattleSetupInfo_o *)Instance, 0);
      v35 = this->fields.battleSetupInfo;
      if ( !v35 )
        goto LABEL_126;
      if ( !v34 )
        goto LABEL_126;
      FollowerSelectItemListViewManager__CreateList(
        v34,
        Instance,
        v35->fields.questPhase,
        this->fields.friendPointUpVal,
        this->fields.friendPointUpMaxVal,
        this->fields.friendPointCampaignEntityList,
        v35->fields.questRestrictionInfo,
        0);
      v37 = this->fields.battleSetupInfo;
      if ( !v37 )
        goto LABEL_126;
      Instance = (__int64)this->fields.followerQuestInfomationDraw;
      if ( !Instance )
        goto LABEL_126;
      FollowerQuestInfomationDraw__SetInfomation(
        (FollowerQuestInfomationDraw_o *)Instance,
        v37->fields.questRestrictionInfo,
        i,
        0,
        v36);
      this->fields.state = 3;
      v38 = this->fields.operationItemListViewManager;
      v39 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1C93D20(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
      FollowerSelectItemListViewManager_CallbackFunc___ctor(
        v39,
        (Il2CppObject *)this,
        (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
        0);
      if ( !v38 )
        goto LABEL_126;
      FollowerSelectItemListViewManager__SetMode(v38, 2, v39, 0);
      if ( v31 )
      {
        Instance = (__int64)this->fields.operationItemListViewManager;
        if ( !Instance )
          goto LABEL_126;
        if ( ListViewManager__get_ItemSum((ListViewManager_o *)Instance, 0) >= 3 )
        {
          if ( i )
          {
LABEL_82:
            if ( i >= 1 )
            {
              Member = PartyListViewItem__GetMember(v31, i - 1, 0);
              if ( Member )
              {
                followerInfo = Member->fields.followerInfo;
                if ( followerInfo )
                {
                  v42 = this->fields.operationItemListViewManager;
                  userId = followerInfo->fields.userId;
                  Instance = (__int64)PartyOrganizationListViewItem__get_ServantLeader(Member, 0);
                  if ( !Instance )
                    goto LABEL_126;
                  if ( !v42 )
                    goto LABEL_126;
                  Instance = FollowerSelectItemListViewManager__GetItemIndex(v42, userId, *(_QWORD *)(Instance + 40), 0);
                  if ( !this->fields.operationItemListViewManager )
                    goto LABEL_126;
                  ListViewManager__JumpItem((ListViewManager_o *)this->fields.operationItemListViewManager, Instance, 0);
                }
              }
            }
          }
          else
          {
            for ( i = 1; ; ++i )
            {
              v45 = BalanceConfig_TypeInfo;
              v46 = i - 1;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v45 = BalanceConfig_TypeInfo;
              }
              if ( v46 >= v45->static_fields->DeckMemberMax )
                break;
              v47 = PartyListViewItem__GetMember(v31, v46, 0);
              if ( v47 )
              {
                v48 = v47->fields.followerInfo;
                if ( v48 )
                {
                  if ( Follower__IsNotNpc(v48->fields.type, 0) )
                    goto LABEL_82;
                }
              }
            }
          }
        }
      }
      goto LABEL_57;
    }
LABEL_91:
    FollowerRootComponent__ReturnQuestMenu(this, (const MethodInfo *)selectItemNum);
  }
}


void FollowerRootComponent__beginStartUp(FollowerRootComponent_o *this, Il2CppObject *data, const MethodInfo *method)
{
  void *Instance; // x0
  const MethodInfo *v6; // x1
  __int64 v7; // x8
  struct BattleSetupInfo_o *v8; // x1
  const MethodInfo *v9; // x1
  Il2CppClass *v10; // x8
  __int64 naturalAligment; // x9
  struct BattleSetupInfo_o *v12; // x10
  Il2CppObject *v13; // x1
  struct BattleSetupInfo_o **p_battleSetupInfo; // x0
  const MethodInfo *v15; // x1
  FollowerRootComponent_c *v16; // x0
  struct UIAtlas_o *partyOrganizationAtlas; // x20
  struct FollowerRootComponent_StaticFields *static_fields; // x0
  UILabel_o *infomationLabel; // x20
  UnityEngine_GameObject_o *refreshButtonBase; // x20
  bool v21; // w8
  __int64 v22; // x8
  ConstantMaster_o *v23; // x20
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  System_Action_o *v25; // x20
  System_Action_o *v26; // x20
  QuestPhaseMaster_o *v27; // x20
  struct BattleSetupInfo_o *v28; // x8
  NpcFollowerMaster_o *v29; // x20
  struct BattleSetupInfo_o *v30; // x8
  struct BattleSetupInfo_o *v31; // x8
  const MethodInfo *v32; // x1
  const MethodInfo *v33; // x4
  struct BattleSetupInfo_o *v34; // x8

  if ( (byte_4D2B305 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&AtlasManager_TypeInfo);
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&BattleSetupInfo_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ConstantMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_NpcFollowerMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1C93AD4(&Method_FollowerRootComponent_EndLoadCommonBg__);
    sub_1C93AD4(&Method_FollowerRootComponent_EndLoadPartyOrganizationAtlasSimple__);
    sub_1C93AD4(&FollowerRootComponent_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&RandomLimitCountManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C93AD4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C93AD4(&TutorialFlag_TypeInfo);
    sub_1C93AD4(&StringLiteral_13711/*"TUTORIAL_SUPPORT_QUEST_ID"*/);
    sub_1C93AD4(&StringLiteral_13712/*"TUTORIAL_SUPPORT_QUEST_PHASE"*/);
    sub_1C93AD4(&StringLiteral_6471/*"FOLLOWER_SELECT_EXPLANATION2"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2B305 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_100;
  if ( PartyOrganizationUtility__ExistsTemporaryPartyInfo((PartyOrganizationUtility_o *)Instance, 0) )
  {
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_100;
    v7 = *((_QWORD *)Instance + 23);
    if ( !v7 )
      goto LABEL_100;
    v8 = *(struct BattleSetupInfo_o **)(v7 + 48);
    this->fields.battleSetupInfo = v8;
    sub_1C93A78(&this->fields.battleSetupInfo, v8);
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !Instance )
      goto LABEL_100;
    if ( !MissionNotifyManager__IsPause((MissionNotifyManager_o *)Instance, 0) )
    {
      Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
      if ( !Instance )
        goto LABEL_100;
      MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0);
    }
  }
  else
  {
    if ( data )
    {
      v10 = (Il2CppClass *)BattleSetupInfo_TypeInfo;
      naturalAligment = BattleSetupInfo_TypeInfo->_2.naturalAligment;
      if ( data->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
        v12 = (BattleSetupInfo_c *)data->klass->_2.typeHierarchy[naturalAligment - 1] == BattleSetupInfo_TypeInfo
            ? (struct BattleSetupInfo_o *)data
            : 0LL;
      else
        v12 = 0;
      this->fields.battleSetupInfo = v12;
      p_battleSetupInfo = &this->fields.battleSetupInfo;
      if ( data->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
        v13 = data->klass->_2.typeHierarchy[naturalAligment - 1] == v10 ? data : 0LL;
      else
        v13 = 0;
    }
    else
    {
      v13 = 0;
      this->fields.battleSetupInfo = 0;
      p_battleSetupInfo = &this->fields.battleSetupInfo;
    }
    sub_1C93A78(p_battleSetupInfo, v13);
  }
  if ( !this->fields.battleSetupInfo )
  {
    FollowerRootComponent__ReturnQuestMenu(this, v9);
    return;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  RandomLimitCountManager__set_EnableRandomLimitCount(1, 0);
  FollowerRootComponent__PlayBGM(this, v15);
  v16 = FollowerRootComponent_TypeInfo;
  partyOrganizationAtlas = this->fields.partyOrganizationAtlas;
  if ( !FollowerRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerRootComponent_TypeInfo);
    v16 = FollowerRootComponent_TypeInfo;
  }
  static_fields = v16->static_fields;
  static_fields->partyOrganizationAtlasCache = partyOrganizationAtlas;
  sub_1C93A78(&static_fields->partyOrganizationAtlasCache, partyOrganizationAtlas);
  Instance = this->fields.titleInfo;
  if ( !Instance )
    goto LABEL_100;
  TitleInfoControl__setTitleInfo_40624012((TitleInfoControl_o *)Instance, this->fields.myFSM, 3, 67, 1, 0);
  Instance = this->fields.titleInfo;
  if ( !Instance )
    goto LABEL_100;
  TitleInfoControl__setBackBtnEnable((TitleInfoControl_o *)Instance, 1, 0);
  Instance = this->fields.operationItemListViewManager;
  if ( !Instance )
    goto LABEL_100;
  FollowerSelectItemListViewManager__DestroyList_33215524(
    (FollowerSelectItemListViewManager_o *)Instance,
    this->fields.battleSetupInfo,
    0);
  infomationLabel = this->fields.infomationLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_6471/*"FOLLOWER_SELECT_EXPLANATION2"*/, 0);
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
  v21 = *((_QWORD *)Instance + 14) || *((_DWORD *)Instance + 30) != 0;
  if ( (v21 & *((_BYTE *)Instance + 73)) != 0
    && (BattleSetupInfo__SetRestriction((BattleSetupInfo_o *)Instance, 1, 0),
        (Instance = this->fields.battleSetupInfo) == 0)
    || (v22 = *((_QWORD *)Instance + 11)) == 0 )
  {
LABEL_100:
    sub_1C93D2C(Instance, v6);
  }
  if ( *(_BYTE *)(v22 + 378) )
  {
LABEL_48:
    FollowerRootComponent__StartBattleSetupMenu(this, v6);
    return;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_41140656(102, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_100;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ConstantMaster___);
    if ( !Instance )
      goto LABEL_100;
    v23 = (ConstantMaster_o *)Instance;
    Instance = (void *)ConstantMaster__GetValue((ConstantMaster_o *)Instance, (System_String_o *)StringLiteral_13711/*"TUTORIAL_SUPPORT_QUEST_ID"*/, 0);
    battleSetupInfo = this->fields.battleSetupInfo;
    if ( !battleSetupInfo )
      goto LABEL_100;
    if ( battleSetupInfo->fields.questId == (_DWORD)Instance )
    {
      Instance = (void *)ConstantMaster__GetValue(v23, (System_String_o *)StringLiteral_13712/*"TUTORIAL_SUPPORT_QUEST_PHASE"*/, 0);
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
  if ( !*((_BYTE *)Instance + 403)
    && !*((_BYTE *)Instance + 401)
    && !*((_BYTE *)Instance + 360)
    && !*((_BYTE *)Instance + 379) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
      if ( this->fields.battleSetupInfo )
      {
        v27 = (QuestPhaseMaster_o *)Instance;
        Instance = (void *)BattleSetupInfo__TargetQuestId(this->fields.battleSetupInfo, 0);
        v28 = this->fields.battleSetupInfo;
        if ( v28 )
        {
          if ( v27 )
          {
            Instance = QuestPhaseMaster__GetEntity(v27, (int32_t)Instance, v28->fields.questPhase, 0);
            if ( Instance && *((_BYTE *)Instance + 24) )
            {
              Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                goto LABEL_100;
              Instance = DataManager__GetMasterData_object_(
                           (DataManager_o *)Instance,
                           (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
              if ( !this->fields.battleSetupInfo )
                goto LABEL_100;
              v29 = (NpcFollowerMaster_o *)Instance;
              Instance = (void *)BattleSetupInfo__TargetQuestId(this->fields.battleSetupInfo, 0);
              v30 = this->fields.battleSetupInfo;
              if ( !v30 )
                goto LABEL_100;
              if ( !v29 )
                goto LABEL_100;
              Instance = NpcFollowerMaster__GetQuestFollowerList(v29, (int32_t)Instance, v30->fields.questPhase, 0);
              if ( !Instance )
                goto LABEL_100;
              if ( !*((_QWORD *)Instance + 3) )
              {
                *(_QWORD *)&this->fields.tutorialMode = 0x100000001LL;
                goto LABEL_75;
              }
            }
            v31 = this->fields.battleSetupInfo;
            if ( v31 )
            {
              Instance = v31->fields.questRestrictionInfo;
              if ( Instance )
              {
                if ( QuestRestrictionInfo__IsMyServantOrNpcRestriction((QuestRestrictionInfo_o *)Instance, 0) )
                  this->fields.tutorialMode = 4;
                FollowerRootComponent__UpdateDeckInfomation(this, v32);
                v34 = this->fields.battleSetupInfo;
                if ( v34 )
                {
                  Instance = this->fields.followerQuestInfomationDraw;
                  if ( Instance )
                  {
                    FollowerQuestInfomationDraw__SetInfomation(
                      (FollowerQuestInfomationDraw_o *)Instance,
                      v34->fields.questRestrictionInfo,
                      0,
                      0,
                      v33);
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
    v25 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(v25, (Il2CppObject *)this, Method_FollowerRootComponent_EndLoadCommonBg__, 0);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__LoadUISkin(v25, 2, 1, 0);
    return;
  }
  this->fields.tutorialMode = 1;
LABEL_75:
  v26 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v26, (Il2CppObject *)this, Method_FollowerRootComponent_EndLoadPartyOrganizationAtlasSimple__, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadPartyOrganizationAtlas(v26, 1, 0);
}


void FollowerRootComponent__setBattleSetupFollowType(
        FollowerRootComponent_o *this,
        int32_t type,
        const MethodInfo *method)
{
  struct BattleSetupInfo_o *battleSetupInfo; // x8

  battleSetupInfo = this->fields.battleSetupInfo;
  if ( !battleSetupInfo )
    sub_1C93D2C(this, type);
  battleSetupInfo->fields.followerType = 0;
  if ( (type | 4) == 5 )
    battleSetupInfo->fields.followerType = type;
}


void FollowerRootComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19

  if ( (byte_4D2B32F & 1) == 0 )
  {
    sub_1C93AD4(&FollowerRootComponent___c_TypeInfo);
    byte_4D2B32F = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(FollowerRootComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  FollowerRootComponent___c_TypeInfo->static_fields->__9 = (struct FollowerRootComponent___c_o *)v1;
  sub_1C93A78(FollowerRootComponent___c_TypeInfo->static_fields, v1);
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