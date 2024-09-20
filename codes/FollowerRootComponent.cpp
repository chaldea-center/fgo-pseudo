void __fastcall FollowerRootComponent___cctor(const MethodInfo *method)
{
  struct FollowerRootComponent_StaticFields *static_fields; // x8

  if ( (byte_4A56448 & 1) == 0 )
  {
    sub_1B885B0(&FollowerRootComponent_TypeInfo);
    byte_4A56448 = 1;
  }
  static_fields = FollowerRootComponent_TypeInfo->static_fields;
  static_fields->LIST_UPDATE_MESSAGE_FONT_SIZE = 26;
  *(_QWORD *)&static_fields->RETURN_TERMINAL_MESSAGE_FONT_SIZE = 0xA0000001BLL;
  static_fields->RETURN_TERMINAL_MESSAGE_SPACING_Y = 5;
}


void __fastcall FollowerRootComponent___ctor(FollowerRootComponent_o *this, const MethodInfo *method)
{
  void *v3; // x1

  if ( (byte_4A56447 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A56447 = 1;
  }
  v3 = StringLiteral_1/*""*/;
  this->fields.backupBgmName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554(&this->fields.backupBgmName, v3);
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0LL);
}


void __fastcall FollowerRootComponent__CallbackFollowerList(
        FollowerRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_4A5642D & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_11060/*"REQUEST_OK"*/);
    byte_4A5642D = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1B8880C(0LL, result);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_11060/*"REQUEST_OK"*/, 0LL);
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
    sub_1B8880C(0LL, result);
  ListViewManager__SetEmptyMessageBase(operationItemListViewManager, 1, 0LL);
  FollowerRootComponent__Init(this, v5);
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

  if ( (byte_4A5643E & 1) == 0 )
  {
    sub_1B885B0(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_FollowerRootComponent_OnSelectFollowerItem__);
    sub_1B885B0(&RandomLimitCountManager_TypeInfo);
    byte_4A5643E = 1;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  RandomLimitCountManager__set_EnableRandomLimitCount(0, 0LL);
  RandomLimitCountManager__set_EnableRandomLimitCount(1, 0LL);
  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    goto LABEL_12;
  FollowerSelectItemListViewManager__SaveSortFilter(operationItemListViewManager, 0LL);
  operationItemListViewManager = (FollowerSelectItemListViewManager_o *)this->fields.battleSetupInfo;
  if ( !operationItemListViewManager )
    goto LABEL_12;
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
        v9 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1B887FC(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo),
        FollowerSelectItemListViewManager_CallbackFunc___ctor(
          v9,
          (Il2CppObject *)this,
          (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
          0LL),
        !v8)
    || (FollowerSelectItemListViewManager__SetMode(v8, 2, v9, 0LL),
        (operationItemListViewManager = (FollowerSelectItemListViewManager_o *)this->fields.commonConfirmDialog) == 0LL) )
  {
LABEL_12:
    sub_1B8880C(operationItemListViewManager, v4);
  }
  CommonConfirmDialog__Close((CommonConfirmDialog_o *)operationItemListViewManager, 0LL);
}


void __fastcall FollowerRootComponent__EndCloseShowServant(FollowerRootComponent_o *this, const MethodInfo *method)
{
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4A56432 & 1) == 0 )
  {
    sub_1B885B0(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_FollowerRootComponent_OnSelectFollowerItem__);
    byte_4A56432 = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v4 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1B887FC(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
    0LL);
  if ( !operationItemListViewManager )
    sub_1B8880C(v5, v6);
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

  if ( (byte_4A56435 & 1) == 0 )
  {
    sub_1B885B0(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_FollowerRootComponent_OnSelectFollowerItem__);
    byte_4A56435 = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v4 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1B887FC(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
    0LL);
  if ( !operationItemListViewManager )
    sub_1B8880C(v5, v6);
  FollowerSelectItemListViewManager__SetMode(operationItemListViewManager, 2, v4, 0LL);
}


void __fastcall FollowerRootComponent__EndCloseTutorialArrow(FollowerRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *tutorialMaskBase2; // x0

  if ( (byte_4A56440 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_8625/*"MENU_SELECT_ITEM"*/);
    byte_4A56440 = 1;
  }
  tutorialMaskBase2 = this->fields.tutorialMaskBase2;
  if ( !tutorialMaskBase2
    || (UnityEngine_GameObject__SetActive(tutorialMaskBase2, 0, 0LL),
        tutorialMaskBase2 = (UnityEngine_GameObject_o *)this->fields.myFSM,
        this->fields.state = 3,
        !tutorialMaskBase2) )
  {
    sub_1B8880C(tutorialMaskBase2, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)tutorialMaskBase2, (System_String_o *)StringLiteral_8625/*"MENU_SELECT_ITEM"*/, 0LL);
}


void __fastcall FollowerRootComponent__EndLoadCommonBg(FollowerRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *backSkinSprite; // x0
  System_Action_o *v4; // x20

  if ( (byte_4A56425 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_FollowerRootComponent_EndLoadOutGameAtlas__);
    byte_4A56425 = 1;
  }
  backSkinSprite = (UnityEngine_Component_o *)this->fields.backSkinSprite;
  if ( !backSkinSprite
    || (backSkinSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(backSkinSprite, 0LL)) == 0LL )
  {
    sub_1B8880C(backSkinSprite, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)backSkinSprite, 1, 0LL);
  v4 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_FollowerRootComponent_EndLoadOutGameAtlas__, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadOutGameAtlas(v4, 0LL);
}


void __fastcall FollowerRootComponent__EndLoadEventAtlas(FollowerRootComponent_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4A56427 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_FollowerRootComponent_EndLoadPartyOrganizationAtlas__);
    byte_4A56427 = 1;
  }
  v3 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_FollowerRootComponent_EndLoadPartyOrganizationAtlas__, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadPartyOrganizationAtlas(v3, 1, 0LL);
}


void __fastcall FollowerRootComponent__EndLoadOutGameAtlas(FollowerRootComponent_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4A56426 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_FollowerRootComponent_EndLoadEventAtlas__);
    byte_4A56426 = 1;
  }
  v3 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_FollowerRootComponent_EndLoadEventAtlas__, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4A56428 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4A56428 = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    goto LABEL_15;
  FollowerSelectItemListViewManager__AdjustButton(operationItemListViewManager, 0LL);
  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    goto LABEL_15;
  FollowerSelectItemListViewManager__SetClassBoardInfo(operationItemListViewManager, 0LL);
  SceneRootComponent__beginStartUp_38666476((SceneRootComponent_o *)this, 0LL);
  if ( this->fields.isForceFadeOut )
  {
    this->fields.isForceFadeOut = 0;
    operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !operationItemListViewManager )
      goto LABEL_15;
    CommonUI__maskFadeInit((CommonUI_o *)operationItemListViewManager, 0LL);
    operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !operationItemListViewManager )
      goto LABEL_15;
    CommonUI__maskFadeout((CommonUI_o *)operationItemListViewManager, 1, 0.0, 0LL, 0LL);
    FollowerRootComponent__StartBattleSetupMenu(this, v4);
  }
  operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !operationItemListViewManager )
    goto LABEL_15;
  if ( PartyOrganizationUtility__ExistsTemporaryPartyInfo(
         (PartyOrganizationUtility_o *)operationItemListViewManager,
         0LL) )
  {
    operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( operationItemListViewManager )
    {
      CommonUI__maskFadeInit((CommonUI_o *)operationItemListViewManager, 0LL);
      operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( operationItemListViewManager )
      {
        CommonUI__maskFadeout((CommonUI_o *)operationItemListViewManager, 1, 0.0, 0LL, 0LL);
        this->fields.state = 0;
        FollowerRootComponent__Init(this, v5);
        return;
      }
    }
LABEL_15:
    sub_1B8880C(operationItemListViewManager, method);
  }
}


void __fastcall FollowerRootComponent__EndOpenTutorialArrow(FollowerRootComponent_o *this, const MethodInfo *method)
{
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4A56445 & 1) == 0 )
  {
    sub_1B885B0(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_FollowerRootComponent_OnSelectFollowerItem__);
    byte_4A56445 = 1;
  }
  this->fields.state = 3;
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v4 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1B887FC(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
    0LL);
  if ( !operationItemListViewManager )
    sub_1B8880C(v5, v6);
  FollowerSelectItemListViewManager__SetMode(operationItemListViewManager, 4, v4, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerRootComponent__EndRecommendRefreshConfirm(
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
  if ( (byte_4A5643D & 1) == 0 )
  {
    sub_1B885B0(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_FollowerRootComponent_CallbackRefresh__);
    sub_1B885B0(&Method_FollowerRootComponent_OnSelectFollowerItem__);
    sub_1B885B0(&Method_NetworkManager_getRequest_FollowerRecommendSupportListRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    this = (FollowerRootComponent_o *)sub_1B885B0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4A5643D = 1;
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
      this = (FollowerRootComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !this )
        goto LABEL_18;
      LOBYTE(this->fields.followerQuestInfomationDraw) = 1;
    }
    v6 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v6,
      (Il2CppObject *)v4,
      Method_FollowerRootComponent_CallbackRefresh__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    this = (FollowerRootComponent_o *)NetworkManager__getRequest_object_(
                                        v6,
                                        (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_FollowerRecommendSupportListRequest___);
    if ( v4->fields.battleSetupInfo )
    {
      v7 = (FollowerRecommendSupportListRequest_o *)this;
      this = (FollowerRootComponent_o *)BattleSetupInfo__TargetQuestId(v4->fields.battleSetupInfo, 0LL);
      v8 = v4->fields.battleSetupInfo;
      if ( v8 )
      {
        if ( v7 )
        {
          FollowerRecommendSupportListRequest__beginRequest(v7, 1, (int32_t)this, v8->fields.questPhase, 0LL);
          return;
        }
      }
    }
LABEL_18:
    sub_1B8880C(this, isDecide);
  }
  operationItemListViewManager = v4->fields.operationItemListViewManager;
  v10 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1B887FC(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v10,
    (Il2CppObject *)v4,
    (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
    0LL);
  if ( !operationItemListViewManager )
    goto LABEL_18;
  FollowerSelectItemListViewManager__SetMode(operationItemListViewManager, 2, v10, 0LL);
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
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  NetworkManager_ResultCallbackFunc_o *v6; // x20
  FollowerListRequest_o *v7; // x20
  struct BattleSetupInfo_o *v8; // x8
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v10; // x21

  v4 = this;
  if ( (byte_4A5643C & 1) == 0 )
  {
    sub_1B885B0(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_FollowerRootComponent_CallbackRefresh__);
    sub_1B885B0(&Method_FollowerRootComponent_OnSelectFollowerItem__);
    sub_1B885B0(&Method_NetworkManager_getRequest_FollowerListRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    this = (FollowerRootComponent_o *)sub_1B885B0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4A5643C = 1;
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
      this = (FollowerRootComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !this )
        goto LABEL_18;
      LOBYTE(this->fields.followerQuestInfomationDraw) = 1;
    }
    v6 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v6,
      (Il2CppObject *)v4,
      Method_FollowerRootComponent_CallbackRefresh__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    this = (FollowerRootComponent_o *)NetworkManager__getRequest_object_(
                                        v6,
                                        (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_FollowerListRequest___);
    if ( v4->fields.battleSetupInfo )
    {
      v7 = (FollowerListRequest_o *)this;
      this = (FollowerRootComponent_o *)BattleSetupInfo__TargetQuestId(v4->fields.battleSetupInfo, 0LL);
      v8 = v4->fields.battleSetupInfo;
      if ( v8 )
      {
        if ( v7 )
        {
          FollowerListRequest__beginRequest(v7, 1, (int32_t)this, v8->fields.questPhase, 0LL);
          return;
        }
      }
    }
LABEL_18:
    sub_1B8880C(this, isDecide);
  }
  operationItemListViewManager = v4->fields.operationItemListViewManager;
  v10 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1B887FC(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v10,
    (Il2CppObject *)v4,
    (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
    0LL);
  if ( !operationItemListViewManager )
    goto LABEL_18;
  FollowerSelectItemListViewManager__SetMode(operationItemListViewManager, 2, v10, 0LL);
  this = (FollowerRootComponent_o *)v4->fields.commonConfirmDialog;
  if ( !this )
    goto LABEL_18;
  CommonConfirmDialog__Close((CommonConfirmDialog_o *)this, 0LL);
}


void __fastcall FollowerRootComponent__EndRefreshRest(FollowerRootComponent_o *this, const MethodInfo *method)
{
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4A5643F & 1) == 0 )
  {
    sub_1B885B0(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_FollowerRootComponent_OnSelectFollowerItem__);
    byte_4A5643F = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v4 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1B887FC(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
    0LL);
  if ( !operationItemListViewManager )
    sub_1B8880C(v5, v6);
  FollowerSelectItemListViewManager__SetMode(operationItemListViewManager, 2, v4, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerRootComponent__EndShowServant(
        FollowerRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ListViewManager_o *operationItemListViewManager; // x0
  Il2CppObject *Instance; // x20
  System_Action_o *v6; // x21

  if ( (byte_4A56431 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_FollowerRootComponent_EndCloseShowServant__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A56431 = 1;
  }
  operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager
    || (ListViewManager__SetScrollView(
          operationItemListViewManager,
          this->fields.openScroll,
          this->fields.openOffset,
          0LL),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v6 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo),
        System_Action___ctor(v6, (Il2CppObject *)this, Method_FollowerRootComponent_EndCloseShowServant__, 0LL),
        !Instance) )
  {
    sub_1B8880C(operationItemListViewManager, isDecide);
  }
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerRootComponent__EndShowServantEquip(
        FollowerRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ListViewManager_o *operationItemListViewManager; // x0
  Il2CppObject *Instance; // x20
  System_Action_o *v6; // x21

  if ( (byte_4A56434 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_FollowerRootComponent_EndCloseShowServantEquip__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A56434 = 1;
  }
  operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager
    || (ListViewManager__SetScrollView(
          operationItemListViewManager,
          this->fields.openScroll,
          this->fields.openOffset,
          0LL),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v6 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo),
        System_Action___ctor(v6, (Il2CppObject *)this, Method_FollowerRootComponent_EndCloseShowServantEquip__, 0LL),
        !Instance) )
  {
    sub_1B8880C(operationItemListViewManager, isDecide);
  }
  CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)Instance, v6, 0LL);
}


void __fastcall FollowerRootComponent__EndTutorialFollowerCommonGuide(
        FollowerRootComponent_o *this,
        const MethodInfo *method)
{
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4A56446 & 1) == 0 )
  {
    sub_1B885B0(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_FollowerRootComponent_OnSelectFollowerItem__);
    byte_4A56446 = 1;
  }
  this->fields.state = 3;
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v4 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1B887FC(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
    0LL);
  if ( !operationItemListViewManager )
    sub_1B8880C(v5, v6);
  FollowerSelectItemListViewManager__SetMode(operationItemListViewManager, 2, v4, 0LL);
}


void __fastcall FollowerRootComponent__EndTutorialFollowerGuideNotification1(
        FollowerRootComponent_o *this,
        const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v5; // x21

  if ( (byte_4A56443 & 1) == 0 )
  {
    sub_1B885B0(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_FollowerRootComponent_OnSelectFollowerItem__);
    byte_4A56443 = 1;
  }
  titleInfo = this->fields.titleInfo;
  this->fields.state = 3;
  if ( !titleInfo
    || (TitleInfoControl__setBackBtnEnable(titleInfo, 0, 0LL),
        operationItemListViewManager = this->fields.operationItemListViewManager,
        v5 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1B887FC(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo),
        FollowerSelectItemListViewManager_CallbackFunc___ctor(
          v5,
          (Il2CppObject *)this,
          (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
          0LL),
        !operationItemListViewManager) )
  {
    sub_1B8880C(titleInfo, method);
  }
  FollowerSelectItemListViewManager__SetMode(operationItemListViewManager, 2, v5, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerRootComponent__EndTutorialFollowerGuideNotification2(
        FollowerRootComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *tutorialMaskBase2; // x0
  bool IsUnderVista; // w22
  Il2CppObject *Instance; // x20
  System_Action_o *v6; // x21
  float v7; // s0
  float v8; // s3
  float v9; // s4
  int v10; // s1
  int v11; // s5
  int v12; // s6

  if ( (byte_4A56444 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&FSUtility_TypeInfo);
    sub_1B885B0(&Method_FollowerRootComponent_EndOpenTutorialArrow__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A56444 = 1;
  }
  tutorialMaskBase2 = this->fields.tutorialMaskBase2;
  if ( !tutorialMaskBase2 )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(tutorialMaskBase2, 1, 0LL);
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  IsUnderVista = FSUtility__IsUnderVista(0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_FollowerRootComponent_EndOpenTutorialArrow__, 0LL);
  if ( !Instance )
LABEL_12:
    sub_1B8880C(tutorialMaskBase2, method);
  v7 = -12.0;
  v8 = -492.0;
  if ( IsUnderVista )
    v8 = -500.0;
  if ( IsUnderVista )
    v7 = -20.0;
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
    0LL);
}


BattleSetupInfo_o *__fastcall FollowerRootComponent__GetBattleSetupInfo(
        FollowerRootComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.battleSetupInfo;
}


void __fastcall FollowerRootComponent__Init(FollowerRootComponent_o *this, const MethodInfo *method)
{
  __int64 battleSetupInfo; // x0
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  struct BattleSetupInfo_o *v5; // x8
  int32_t InitialDisplayClass; // w20
  FollowerSelectItemListViewManager_o *v7; // x20
  struct BattleSetupInfo_o *v8; // x8
  PartyOrganizationUtility_c *v9; // x0
  Il2CppObject *Instance; // x20
  System_String_o *v11; // x21
  FollowerRootComponent___c_c *v12; // x8
  System_Action_o *_9__50_0; // x23
  System_String_o *v14; // x22
  Il2CppObject *v15; // x24
  struct FollowerRootComponent___c_StaticFields *static_fields; // x0
  FollowerSelectItemListViewManager_o *v17; // x20
  System_Action_o *v18; // x21
  NetworkManager_ResultCallbackFunc_o *v19; // x20
  FollowerRecommendSupportListRequest_o *v20; // x20
  struct BattleSetupInfo_o *v21; // x8
  Il2CppObject *entity; // [xsp+38h] [xbp-48h] BYREF

  if ( (byte_4A5642E & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&ClassButtonControlComponent_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_UserRecommendFollowerMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_UserRecommendFollowerMaster__UserRecommendFollowerEntity__long__TryGetSingleEntity__);
    sub_1B885B0(&Method_FollowerRootComponent_CallbackInitRecommendFollowerRequest__);
    sub_1B885B0(&Method_FollowerRootComponent_OnMoveEnd__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_NetworkManager_getRequest_FollowerRecommendSupportListRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&PartyOrganizationUtility_TypeInfo);
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1B885B0(&Method_FollowerRootComponent___c__Init_b__50_0__);
    sub_1B885B0(&FollowerRootComponent___c_TypeInfo);
    sub_1B885B0(&StringLiteral_8625/*"MENU_SELECT_ITEM"*/);
    sub_1B885B0(&StringLiteral_10267/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_EXPIRED"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5642E = 1;
  }
  entity = 0LL;
  if ( !this->fields.state )
  {
    if ( this->fields.isInitRecommendRequest )
      goto LABEL_17;
    battleSetupInfo = (__int64)this->fields.battleSetupInfo;
    if ( !battleSetupInfo )
      goto LABEL_55;
    operationItemListViewManager = this->fields.operationItemListViewManager;
    battleSetupInfo = BattleSetupInfo__TargetQuestId((BattleSetupInfo_o *)battleSetupInfo, 0LL);
    v5 = this->fields.battleSetupInfo;
    if ( !v5 || !operationItemListViewManager )
      goto LABEL_55;
    InitialDisplayClass = FollowerSelectItemListViewManager__GetInitialDisplayClass(
                            operationItemListViewManager,
                            battleSetupInfo,
                            v5->fields.questPhase,
                            1,
                            0LL);
    if ( !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
    if ( !ClassButtonControlComponent__IsRecommendSupportGroupType(InitialDisplayClass, 0LL) )
      goto LABEL_17;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    battleSetupInfo = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserRecommendFollowerMaster___);
    if ( !battleSetupInfo )
      goto LABEL_55;
    if ( !DataMasterBase_object__object__long___TryGetSingleEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)battleSetupInfo,
            &entity,
            (const MethodInfo_311DBBC *)Method_DataMasterBase_UserRecommendFollowerMaster__UserRecommendFollowerEntity__long__TryGetSingleEntity__) )
      goto LABEL_46;
    battleSetupInfo = (__int64)entity;
    if ( !entity )
      goto LABEL_55;
    if ( UserRecommendFollowerEntity__IsEnableData((UserRecommendFollowerEntity_o *)entity, 0LL) )
    {
LABEL_17:
      battleSetupInfo = (__int64)this->fields.operationItemListViewManager;
      if ( !battleSetupInfo )
        goto LABEL_55;
      battleSetupInfo = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)battleSetupInfo, 0LL);
      if ( !battleSetupInfo )
        goto LABEL_55;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)battleSetupInfo, 1, 0LL);
      battleSetupInfo = (__int64)this->fields.battleSetupInfo;
      if ( !battleSetupInfo )
        goto LABEL_55;
      v7 = this->fields.operationItemListViewManager;
      battleSetupInfo = BattleSetupInfo__TargetQuestId((BattleSetupInfo_o *)battleSetupInfo, 0LL);
      v8 = this->fields.battleSetupInfo;
      if ( !v8 )
        goto LABEL_55;
      if ( !v7 )
        goto LABEL_55;
      FollowerSelectItemListViewManager__CreateList(
        v7,
        battleSetupInfo,
        v8->fields.questPhase,
        this->fields.friendPointUpVal,
        this->fields.friendPointUpMaxVal,
        this->fields.friendPointCampaignEntityList,
        v8->fields.questRestrictionInfo,
        0LL);
      battleSetupInfo = (__int64)this->fields.operationItemListViewManager;
      if ( !battleSetupInfo )
        goto LABEL_55;
      if ( ListViewManager__get_ItemSum((ListViewManager_o *)battleSetupInfo, 0LL) > 0 )
        goto LABEL_26;
      battleSetupInfo = (__int64)this->fields.operationItemListViewManager;
      if ( !battleSetupInfo )
        goto LABEL_55;
      if ( FollowerSelectItemListViewManager__GetItemCount((FollowerSelectItemListViewManager_o *)battleSetupInfo, 0LL) < 1 )
      {
        battleSetupInfo = (__int64)this->fields.myFSM;
        this->fields.selectItemNum = -1;
        if ( battleSetupInfo )
        {
          PlayMakerFSM__SendEvent((PlayMakerFSM_o *)battleSetupInfo, (System_String_o *)StringLiteral_8625/*"MENU_SELECT_ITEM"*/, 0LL);
          return;
        }
      }
      else
      {
LABEL_26:
        battleSetupInfo = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
        if ( !battleSetupInfo )
          goto LABEL_55;
        if ( *(_BYTE *)(battleSetupInfo + 148) )
        {
          v9 = PartyOrganizationUtility_TypeInfo;
          if ( !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
            v9 = PartyOrganizationUtility_TypeInfo;
          }
          if ( UnityEngine_PlayerPrefs__GetInt(v9->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0, 0LL) )
          {
            battleSetupInfo = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
            if ( !battleSetupInfo )
              goto LABEL_55;
            if ( !PartyOrganizationUtility__IsAvailableFriendshipUpItem(
                    (PartyOrganizationUtility_o *)battleSetupInfo,
                    0LL) )
            {
              Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              battleSetupInfo = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10267/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_EXPIRED"*/, 0LL);
              v11 = (System_String_o *)battleSetupInfo;
              v12 = FollowerRootComponent___c_TypeInfo;
              if ( !FollowerRootComponent___c_TypeInfo->_2.cctor_finished )
              {
                battleSetupInfo = j_il2cpp_runtime_class_init_0(FollowerRootComponent___c_TypeInfo);
                v12 = FollowerRootComponent___c_TypeInfo;
              }
              _9__50_0 = v12->static_fields->__9__50_0;
              v14 = (System_String_o *)StringLiteral_1/*""*/;
              if ( !_9__50_0 )
              {
                if ( !v12->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v12);
                  v12 = FollowerRootComponent___c_TypeInfo;
                }
                v15 = (Il2CppObject *)v12->static_fields->__9;
                _9__50_0 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
                System_Action___ctor(_9__50_0, v15, Method_FollowerRootComponent___c__Init_b__50_0__, 0LL);
                static_fields = FollowerRootComponent___c_TypeInfo->static_fields;
                static_fields->__9__50_0 = _9__50_0;
                battleSetupInfo = sub_1B88554(&static_fields->__9__50_0, _9__50_0);
              }
              if ( !Instance )
                goto LABEL_55;
              CommonUI__OpenNotificationDialog(
                (CommonUI_o *)Instance,
                v14,
                v11,
                _9__50_0,
                -1,
                0,
                0,
                0,
                0,
                0,
                0,
                0,
                0LL,
                0.0,
                0LL);
            }
          }
        }
        this->fields.state = 2;
        v17 = this->fields.operationItemListViewManager;
        v18 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
        System_Action___ctor(v18, (Il2CppObject *)this, Method_FollowerRootComponent_OnMoveEnd__, 0LL);
        if ( v17 )
        {
          FollowerSelectItemListViewManager__SetMode_30850632(v17, 1, v18, 0LL);
          return;
        }
      }
    }
    else
    {
LABEL_46:
      v19 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v19,
        (Il2CppObject *)this,
        Method_FollowerRootComponent_CallbackInitRecommendFollowerRequest__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      battleSetupInfo = (__int64)NetworkManager__getRequest_object_(
                                   v19,
                                   (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_FollowerRecommendSupportListRequest___);
      if ( this->fields.battleSetupInfo )
      {
        v20 = (FollowerRecommendSupportListRequest_o *)battleSetupInfo;
        battleSetupInfo = BattleSetupInfo__TargetQuestId(this->fields.battleSetupInfo, 0LL);
        v21 = this->fields.battleSetupInfo;
        if ( v21 )
        {
          if ( v20 )
          {
            FollowerRecommendSupportListRequest__beginRequest(v20, 0, battleSetupInfo, v21->fields.questPhase, 0LL);
            battleSetupInfo = (__int64)this->fields.operationItemListViewManager;
            if ( battleSetupInfo )
            {
              ListViewManager__SetEmptyMessageBase((ListViewManager_o *)battleSetupInfo, 0, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_55:
    sub_1B8880C(battleSetupInfo, method);
  }
}


void __fastcall FollowerRootComponent__OnClickBack(FollowerRootComponent_o *this, const MethodInfo *method)
{
  void *Instance; // x0
  const MethodInfo *v4; // x1
  SceneRootComponent_o *StackedRootComponent; // x0
  __int64 methodPtr_low; // x10
  UnityEngine_Component_o *v7; // x20
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  FollowerRootComponent_o *v10; // x0
  const MethodInfo *v11; // x1
  _QWORD *monitor; // x8
  int v13; // w8
  void *v14; // x19
  unsigned int v15; // w20
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  __int64 *v19; // x8
  _QWORD *v20; // x0
  System_Reflection_MethodBase_o *v21; // x0
  TerminalPramsManager_c *v22; // x0
  int lastPlayQuestConsumeAp; // w21
  System_String_o **v24; // x8
  System_String_o *v25; // x20
  System_String_o *v26; // x21
  Il2CppObject *v27; // x22
  System_String_o *v28; // x23
  System_String_o *v29; // x24
  CommonConfirmDialog_ClickDelegate_o *v30; // x25

  if ( (byte_4A56441 & 1) == 0 )
  {
    sub_1B885B0(&BattleRootComponent_TypeInfo);
    sub_1B885B0(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponentsInChildren_Camera___);
    sub_1B885B0(&Method_FollowerRootComponent_OnClickBack__);
    sub_1B885B0(&Method_FollowerRootComponent__OnClickBack_b__71_0__);
    sub_1B885B0(&FollowerRootComponent_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&StringLiteral_6408/*"FOLLOWER_SELECT_BACK_TO_QUEST_NO_AP_CONSUME_AP0"*/);
    sub_1B885B0(&StringLiteral_3528/*"CLICK_BACK"*/);
    sub_1B885B0(&StringLiteral_6407/*"FOLLOWER_SELECT_BACK_TO_QUEST_NO_AP_CONSUME"*/);
    sub_1B885B0(&StringLiteral_6406/*"FOLLOWER_SELECT_BACK_TITLE"*/);
    sub_1B885B0(&StringLiteral_3759/*"COMMON_CONFIRM_NO"*/);
    sub_1B885B0(&StringLiteral_3763/*"COMMON_CONFIRM_YES"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_3529/*"CLICK_BACK_BATTLE_SETUP"*/);
    byte_4A56441 = 1;
  }
  if ( this->fields.state == 3 && !this->fields.tutorialState )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( !Instance )
      goto LABEL_63;
    if ( !*((_BYTE *)Instance + 148) )
      goto LABEL_34;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_63;
    StackedRootComponent = AvalonSceneManager__GetStackedRootComponent((AvalonSceneManager_o *)Instance, 0LL);
    if ( StackedRootComponent
      && (methodPtr_low = LOBYTE(BattleRootComponent_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(StackedRootComponent->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
    {
      if ( (BattleRootComponent_c *)StackedRootComponent->klass->_2.typeHierarchy[methodPtr_low - 1] == BattleRootComponent_TypeInfo )
        v7 = (UnityEngine_Component_o *)StackedRootComponent;
      else
        v7 = 0LL;
    }
    else
    {
      v7 = 0LL;
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v7, 0LL, 0LL) )
    {
      v8 = Method_FollowerRootComponent_OnClickBack__;
      if ( (*((_BYTE *)Method_FollowerRootComponent_OnClickBack__ + 83) & 2) != 0 )
        v8 = (_QWORD *)sub_1B885C8();
      v9 = (System_Reflection_MethodBase_o *)sub_1B88594(v8, v8[4]);
      OverwriteAssetSoundName__PlaySystemSe(v9, 1, 0LL);
      this->fields.state = 4;
      FollowerRootComponent__QuestHintDialogResetTemporarilyId(v10, v11);
      if ( v7 )
      {
        Instance = UnityEngine_Component__get_gameObject(v7, 0LL);
        if ( Instance )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
          monitor = v7[3].monitor;
          if ( monitor )
          {
            Instance = (void *)monitor[62];
            if ( Instance )
            {
              BattleResultComponent__EndResult((BattleResultComponent_o *)Instance, 0LL);
              Instance = this->fields.myFSM;
              if ( Instance )
              {
                PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3528/*"CLICK_BACK"*/, 0LL);
                Instance = UnityEngine_Component__get_transform(v7, 0LL);
                if ( Instance )
                {
                  Instance = UnityEngine_Component__GetComponentsInChildren_object__48721436(
                               (UnityEngine_Component_o *)Instance,
                               (const MethodInfo_2E76E1C *)Method_UnityEngine_Component_GetComponentsInChildren_Camera___);
                  if ( Instance )
                  {
                    v13 = *((_DWORD *)Instance + 6);
                    v14 = Instance;
                    if ( v13 < 1 )
                      return;
                    v15 = 0;
                    while ( 1 )
                    {
                      if ( v15 >= v13 )
                        sub_1B88814(Instance, v4);
                      Instance = (void *)*((_QWORD *)v14 + (int)v15 + 4);
                      if ( !Instance )
                        break;
                      Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
                      if ( !Instance )
                        break;
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
                      v13 = *((_DWORD *)v14 + 6);
                      if ( (int)++v15 >= v13 )
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
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( !Instance )
        goto LABEL_63;
      if ( AvalonSceneManager__IsStackScene((AvalonSceneManager_o *)Instance, 0LL) )
        goto LABEL_40;
      Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_63;
      if ( *((int *)Instance + 12) > 0 )
        goto LABEL_40;
      Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_63;
      if ( *((_BYTE *)Instance + 137) )
      {
LABEL_40:
        v16 = Method_FollowerRootComponent_OnClickBack__;
        if ( (*((_BYTE *)Method_FollowerRootComponent_OnClickBack__ + 83) & 2) != 0 )
          v16 = (_QWORD *)sub_1B885C8();
        v17 = (System_Reflection_MethodBase_o *)sub_1B88594(v16, v16[4]);
        OverwriteAssetSoundName__PlaySystemSe(v17, 1, 0LL);
        battleSetupInfo = this->fields.battleSetupInfo;
        this->fields.state = 4;
        if ( battleSetupInfo )
        {
          if ( battleSetupInfo->fields.isChildFollower )
          {
            Instance = this->fields.myFSM;
            if ( !Instance )
              goto LABEL_63;
            v19 = &StringLiteral_3529/*"CLICK_BACK_BATTLE_SETUP"*/;
          }
          else
          {
            FollowerRootComponent__QuestHintDialogResetTemporarilyId((FollowerRootComponent_o *)Instance, v4);
            Instance = this->fields.myFSM;
            if ( !Instance )
              goto LABEL_63;
            v19 = &StringLiteral_3528/*"CLICK_BACK"*/;
          }
          PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v19, 0LL);
          return;
        }
      }
      else
      {
        v20 = Method_FollowerRootComponent_OnClickBack__;
        if ( (*((_BYTE *)Method_FollowerRootComponent_OnClickBack__ + 83) & 2) != 0 )
          v20 = (_QWORD *)sub_1B885C8();
        v21 = (System_Reflection_MethodBase_o *)sub_1B88594(v20, v20[4]);
        OverwriteAssetSoundName__PlaySystemSe(v21, 1, 0LL);
        v22 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v22 = TerminalPramsManager_TypeInfo;
        }
        lastPlayQuestConsumeAp = v22->static_fields->lastPlayQuestConsumeAp;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v24 = (System_String_o **)&StringLiteral_6407/*"FOLLOWER_SELECT_BACK_TO_QUEST_NO_AP_CONSUME"*/;
        if ( lastPlayQuestConsumeAp <= 0 )
          v24 = (System_String_o **)&StringLiteral_6408/*"FOLLOWER_SELECT_BACK_TO_QUEST_NO_AP_CONSUME_AP0"*/;
        v25 = LocalizationManager__Get(*v24, 0LL);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v26 = LocalizationManager__Get((System_String_o *)StringLiteral_6406/*"FOLLOWER_SELECT_BACK_TITLE"*/, 0LL);
        v27 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v28 = LocalizationManager__Get((System_String_o *)StringLiteral_3763/*"COMMON_CONFIRM_YES"*/, 0LL);
        v29 = LocalizationManager__Get((System_String_o *)StringLiteral_3759/*"COMMON_CONFIRM_NO"*/, 0LL);
        v30 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B887FC(CommonConfirmDialog_ClickDelegate_TypeInfo);
        CommonConfirmDialog_ClickDelegate___ctor(
          v30,
          (Il2CppObject *)this,
          Method_FollowerRootComponent__OnClickBack_b__71_0__,
          0LL);
        Instance = FollowerRootComponent_TypeInfo;
        if ( !FollowerRootComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FollowerRootComponent_TypeInfo);
          Instance = FollowerRootComponent_TypeInfo;
        }
        if ( v27 )
        {
          CommonUI__OpenConfirmDecideDlg(
            (CommonUI_o *)v27,
            v26,
            v25,
            v28,
            v29,
            v30,
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
            0LL);
          return;
        }
      }
    }
LABEL_63:
    sub_1B8880C(Instance, v4);
  }
}


void __fastcall FollowerRootComponent__OnMoveEnd(FollowerRootComponent_o *this, const MethodInfo *method)
{
  int32_t tutorialMode; // w8
  Il2CppObject *Instance; // x20
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

  if ( (byte_4A5643A & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_FollowerRootComponent_EndTutorialFollowerCommonGuide__);
    sub_1B885B0(&Method_FollowerRootComponent_EndTutorialFollowerGuideNotification1__);
    sub_1B885B0(&Method_FollowerRootComponent_EndTutorialFollowerGuideNotification2__);
    sub_1B885B0(&Method_FollowerRootComponent_OnSelectFollowerItem__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1B885B0(&StringLiteral_13495/*"TUTORIAL_MESSAGE_FOLLOWER2"*/);
    sub_1B885B0(&StringLiteral_13494/*"TUTORIAL_MESSAGE_FOLLOWER1"*/);
    byte_4A5643A = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( this->fields.tutorialState == 1 )
    {
      tutorialMode = this->fields.tutorialMode;
      *(_QWORD *)&this->fields.tutorialState = 0x200000002LL;
      if ( tutorialMode == 3 )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v5 = LocalizationManager__Get((System_String_o *)StringLiteral_13495/*"TUTORIAL_MESSAGE_FOLLOWER2"*/, 0LL);
        v6 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
        v7 = &Method_FollowerRootComponent_EndTutorialFollowerGuideNotification2__;
LABEL_25:
        v18 = v6;
        System_Action___ctor(v6, (Il2CppObject *)this, *v7, 0LL);
        if ( Instance )
        {
          CommonUI__OpenTutorialNotificationDialog((CommonUI_o *)Instance, v5, -1, v18, 0LL);
          return;
        }
LABEL_27:
        sub_1B8880C(battleSetupInfo, method);
      }
      if ( tutorialMode == 2 )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v5 = LocalizationManager__Get((System_String_o *)StringLiteral_13494/*"TUTORIAL_MESSAGE_FOLLOWER1"*/, 0LL);
        v6 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
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
      battleSetupInfo = (BattleSetupInfo_o *)BattleSetupInfo__TargetQuestId(battleSetupInfo, 0LL);
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
                                               0LL);
      if ( ((unsigned __int8)battleSetupInfo & 1) != 0 )
      {
        v11 = this->fields.battleSetupInfo;
        this->fields.state = 2;
        if ( v11 )
        {
          v12 = v11->fields.eventId;
          v13 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
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
        goto LABEL_27;
      }
      this->fields.state = 3;
      operationItemListViewManager = this->fields.operationItemListViewManager;
      v16 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1B887FC(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
      FollowerSelectItemListViewManager_CallbackFunc___ctor(
        v16,
        (Il2CppObject *)this,
        (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
        0LL);
      if ( !operationItemListViewManager )
        goto LABEL_27;
      FollowerSelectItemListViewManager__SetMode(operationItemListViewManager, 2, v16, 0LL);
      battleSetupInfo = (BattleSetupInfo_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !battleSetupInfo )
        goto LABEL_27;
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
  FollowerRootComponent_o *v6; // x19
  __int64 v7; // x8
  __int64 v8; // x20
  SkillInfo_o *v9; // x22
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  Il2CppObject *v12; // x20
  System_String_o *v13; // x20
  System_String_o *v14; // x21
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  Il2CppObject *v18; // x0
  System_String_o *v19; // x0
  int32_t v20; // w20
  _QWORD *v21; // x0
  System_Reflection_MethodBase_o *v22; // x0
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v24; // x0
  intptr_t v25; // w2
  _QWORD *v26; // x0
  System_Reflection_MethodBase_o *v27; // x0
  __int64 v28; // x20
  SkillInfo_o *v29; // x24
  Il2CppObject *Entity; // x21
  FollowerRootComponent_o *v31; // x20
  System_String_o *v32; // x21
  System_String_o *v33; // x22
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  Il2CppObject *v37; // x0
  System_String_o *v38; // x0
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  FollowerRootComponent_o *v42; // x21
  Il2CppObject *v43; // x0
  System_String_o *v44; // x0
  int32_t tutorialMode; // w21
  System_String_o *v46; // x20
  _QWORD *v47; // x0
  System_Reflection_MethodBase_o *v48; // x0
  bool v49; // w22
  CommonConfirmDialog_ClickDelegate_o *v50; // x21
  bool v51; // w20
  CommonConfirmDialog_o *commonConfirmDialog; // x19
  System_String_o *v53; // x20
  FollowerRootComponent_o *v54; // x22
  int32_t v55; // w8
  _QWORD *v56; // x0
  System_Reflection_MethodBase_o *v57; // x0
  FollowerRootComponent_o *v58; // x20
  PartyOrganizationUtility_c *v59; // x0
  _QWORD *v60; // x0
  System_Reflection_MethodBase_o *v61; // x0
  int32_t v62; // w8
  __int64 *v63; // x8
  FollowerRootComponent_o *v64; // x20
  _QWORD *v65; // x0
  System_Reflection_MethodBase_o *v66; // x0
  const MethodInfo *v67; // x2
  _QWORD *v68; // x0
  System_Reflection_MethodBase_o *v69; // x0
  int32_t v70; // w8
  struct BattleSetupInfo_o *v71; // x8
  NetworkManager_ResultCallbackFunc_o *v72; // x20
  FollowerRecommendSupportListRequest_o *v73; // x20
  struct BattleSetupInfo_o *v74; // x8
  Il2CppObject *Instance; // x20
  System_String_o *v76; // x21
  System_String_o *v77; // x22
  System_Action_o *v78; // x23
  int tutorialMode_low; // w20
  _QWORD *v80; // x0
  FollowerSelectItemListViewItem_o *v81; // x20
  __int64 v82; // x21
  __int64 v83; // x22
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  int64_t userEquipId; // x21
  __int64 v86; // x22
  EquipTargetInfo_o *EquipInfo; // x21
  __int64 v88; // x22
  __int64 v89; // x23
  _QWORD *v90; // x0
  System_Reflection_MethodBase_o *v91; // x0
  const MethodInfo *v92; // x3
  int32_t v93; // w2
  _QWORD *v94; // x0
  FollowerSelectItemListViewManager_CallbackFunc_o *v95; // x21
  int32_t v96; // w1
  _QWORD *v97; // x0
  System_Reflection_MethodBase_o *v98; // x0
  Il2CppObject *v99; // x20
  FollowerRootComponent_o *v100; // x21
  FollowerRootComponent___c_c *v101; // x8
  System_Action_o *_9__65_0; // x23
  System_String_o *v103; // x22
  Il2CppObject *v104; // x24
  struct FollowerRootComponent___c_StaticFields *static_fields; // x0
  Il2CppObject *v106; // x20
  System_Action_o *v107; // x21
  int m_CancellationTokenSource; // [xsp+38h] [xbp-78h] BYREF
  int32_t lv; // [xsp+3Ch] [xbp-74h] BYREF
  System_String_o *detail; // [xsp+40h] [xbp-70h] BYREF
  System_String_o *name; // [xsp+48h] [xbp-68h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+50h] [xbp-60h] BYREF
  System_String_o *v113; // [xsp+58h] [xbp-58h] BYREF
  System_String_o *v114; // [xsp+60h] [xbp-50h] BYREF
  SkillInfo_array *v115; // [xsp+68h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v116; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v117; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v118; // 0:x0.16

  v6 = this;
  if ( (byte_4A5643B & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1B885B0(&FollowerListRequest_TypeInfo);
    sub_1B885B0(&FollowerRecommendSupportListRequest_TypeInfo);
    sub_1B885B0(&Method_FollowerRootComponent_CallbackRefresh__);
    sub_1B885B0(&Method_FollowerRootComponent_EndCloseTutorialArrow__);
    sub_1B885B0(&Method_FollowerRootComponent_EndRecommendRefreshConfirm__);
    sub_1B885B0(&Method_FollowerRootComponent_EndRefreshConfirm__);
    sub_1B885B0(&Method_FollowerRootComponent_EndRefreshRest__);
    sub_1B885B0(&Method_FollowerRootComponent_OnSelectFollowerItem__);
    sub_1B885B0(&FollowerRootComponent_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_NetworkManager_getRequest_FollowerRecommendSupportListRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&PartyOrganizationUtility_TypeInfo);
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1B885B0(&Method_FollowerRootComponent___c__OnSelectFollowerItem_b__65_0__);
    sub_1B885B0(&FollowerRootComponent___c_TypeInfo);
    sub_1B885B0(&StringLiteral_6431/*"FOLLOWER_SELECT_REFRESH_TITLE"*/);
    sub_1B885B0(&StringLiteral_8625/*"MENU_SELECT_ITEM"*/);
    sub_1B885B0(&StringLiteral_8634/*"MENU_SHOW_SUPPORT"*/);
    sub_1B885B0(&StringLiteral_6428/*"FOLLOWER_SELECT_REFRESH_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_117/*" "*/);
    sub_1B885B0(&StringLiteral_6429/*"FOLLOWER_SELECT_REFRESH_REST_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_10267/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_EXPIRED"*/);
    sub_1B885B0(&StringLiteral_8522/*"MASTER_EQSKILL_LV_TXT"*/);
    sub_1B885B0(&StringLiteral_2983/*"BATTLE_SKILLCHARGETURN"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    this = (FollowerRootComponent_o *)sub_1B885B0(&StringLiteral_6430/*"FOLLOWER_SELECT_REFRESH_REST_TITLE"*/);
    byte_4A5643B = 1;
  }
  v114 = 0LL;
  v115 = 0LL;
  skillInfoList = 0LL;
  v113 = 0LL;
  detail = 0LL;
  name = 0LL;
  if ( v6->fields.state != 3 )
    return;
  v6->fields.selectItemNum = n;
  switch ( kind )
  {
    case 1:
      if ( v6->fields.tutorialState )
        goto LABEL_104;
      this = (FollowerRootComponent_o *)v6->fields.operationItemListViewManager;
      if ( !this )
        goto LABEL_195;
      this = (FollowerRootComponent_o *)FollowerSelectItemListViewManager__GetItem(
                                          (FollowerSelectItemListViewManager_o *)this,
                                          n,
                                          0LL);
      if ( !this )
        goto LABEL_195;
      v64 = this;
      if ( LOBYTE(this->fields.tutorialMode)
        || FollowerSelectItemListViewItem__get_SvtId((FollowerSelectItemListViewItem_o *)this, 0LL) <= 0 )
      {
        goto LABEL_163;
      }
      v65 = Method_FollowerRootComponent_OnSelectFollowerItem__;
      if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
        v65 = (_QWORD *)sub_1B885C8();
      v66 = (System_Reflection_MethodBase_o *)sub_1B88594(v65, v65[4]);
      OverwriteAssetSoundName__PlaySystemSe(v66, 0, 0LL);
      FollowerRootComponent__SelectShowServant(v6, (FollowerSelectItemListViewItem_o *)v64, v67);
      return;
    case 2:
    case 3:
    case 4:
      v26 = Method_FollowerRootComponent_OnSelectFollowerItem__;
      if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
        v26 = (_QWORD *)sub_1B885C8();
      v27 = (System_Reflection_MethodBase_o *)sub_1B88594(v26, v26[4]);
      OverwriteAssetSoundName__PlaySystemSe(v27, 0, 0LL);
      this = (FollowerRootComponent_o *)v6->fields.operationItemListViewManager;
      if ( !this )
        goto LABEL_195;
      this = (FollowerRootComponent_o *)FollowerSelectItemListViewManager__GetItem(
                                          (FollowerSelectItemListViewManager_o *)this,
                                          v6->fields.selectItemNum,
                                          0LL);
      v28 = kind == 3 ? 1LL : 2LL * (kind == 4);
      if ( !this )
        goto LABEL_195;
      this = (FollowerRootComponent_o *)FollowerSelectItemListViewItem__GetSkillInfo(
                                          (FollowerSelectItemListViewItem_o *)this,
                                          &v115,
                                          0LL);
      if ( !v115 )
        goto LABEL_195;
      if ( (unsigned int)v28 >= v115->max_length )
        goto LABEL_196;
      v29 = v115->m_Items[v28];
      if ( !v29 || v29->fields.id < 1 || v29->fields.lv < 1 )
        goto LABEL_153;
      this = (FollowerRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_195;
      this = (FollowerRootComponent_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SkillMaster___);
      if ( !this )
        goto LABEL_195;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                 v29->fields.id,
                 (const MethodInfo_311D934 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      this = (FollowerRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_195;
      this = (FollowerRootComponent_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SkillLvMaster___);
      if ( !this )
        goto LABEL_195;
      this = (FollowerRootComponent_o *)SkillLvMaster__GetEntity(
                                          (SkillLvMaster_o *)this,
                                          v29->fields.id,
                                          v29->fields.lv,
                                          0LL);
      if ( !Entity )
        goto LABEL_195;
      v31 = this;
      SkillEntity__getSkillMessageInfo((SkillEntity_o *)Entity, &v114, &v113, v29->fields.lv, 0LL);
      v32 = v114;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v33 = LocalizationManager__Get((System_String_o *)StringLiteral_8522/*"MASTER_EQSKILL_LV_TXT"*/, 0LL);
      lv = v29->fields.lv;
      v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv, v34, v35, v36);
      v38 = System_String__Format(v33, v37, 0LL);
      v114 = System_String__Concat_61718292(v32, (System_String_o *)StringLiteral_117/*" "*/, v38, 0LL);
      this = (FollowerRootComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2983/*"BATTLE_SKILLCHARGETURN"*/, 0LL);
      if ( !v31 )
        goto LABEL_195;
      v42 = this;
      m_CancellationTokenSource = (int)v31->fields.m_CancellationTokenSource;
      v43 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &m_CancellationTokenSource, v39, v40, v41);
      v44 = System_String__Format((System_String_o *)v42, v43, 0LL);
      tutorialMode = v6->fields.tutorialMode;
      v46 = v44;
      this = (FollowerRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_195;
      if ( tutorialMode == 3 )
        CommonUI__OpenDetailLongInfoDialogOnFade((CommonUI_o *)this, v114, v46, v113, 0LL);
      else
        CommonUI__OpenDetailLongInfoDialog((CommonUI_o *)this, v114, v46, v113, 1, 0, 0LL);
LABEL_153:
      operationItemListViewManager = v6->fields.operationItemListViewManager;
      v24 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1B887FC(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
      v25 = (int)Method_FollowerRootComponent_OnSelectFollowerItem__;
      goto LABEL_168;
    case 5:
      if ( !v6->fields.tutorialState )
      {
        this = (FollowerRootComponent_o *)v6->fields.operationItemListViewManager;
        if ( !this )
          goto LABEL_195;
        this = (FollowerRootComponent_o *)FollowerSelectItemListViewManager__GetItem(
                                            (FollowerSelectItemListViewManager_o *)this,
                                            n,
                                            0LL);
        if ( !this )
          goto LABEL_195;
        tutorialMode_low = LOBYTE(this->fields.tutorialMode);
        v80 = Method_FollowerRootComponent_OnSelectFollowerItem__;
        if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
          v80 = (_QWORD *)sub_1B885C8();
        v57 = (System_Reflection_MethodBase_o *)sub_1B88594(v80, v80[4]);
        if ( !tutorialMode_low )
          goto LABEL_131;
LABEL_166:
        OverwriteAssetSoundName__PlaySystemSe(v57, 2, 0LL);
LABEL_167:
        operationItemListViewManager = v6->fields.operationItemListViewManager;
        v24 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1B887FC(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
        v25 = (int)Method_FollowerRootComponent_OnSelectFollowerItem__;
        goto LABEL_168;
      }
      v55 = v6->fields.tutorialMode;
      if ( v55 == 3 )
      {
        v97 = Method_FollowerRootComponent_OnSelectFollowerItem__;
        if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
          v97 = (_QWORD *)sub_1B885C8();
        v98 = (System_Reflection_MethodBase_o *)sub_1B88594(v97, v97[4]);
        OverwriteAssetSoundName__PlaySystemSe(v98, 2, 0LL);
        goto LABEL_175;
      }
      if ( v55 == 2 )
      {
        v56 = Method_FollowerRootComponent_OnSelectFollowerItem__;
        if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
          v56 = (_QWORD *)sub_1B885C8();
        v57 = (System_Reflection_MethodBase_o *)sub_1B88594(v56, v56[4]);
LABEL_131:
        OverwriteAssetSoundName__PlaySystemSe(v57, 0, 0LL);
        this = (FollowerRootComponent_o *)v6->fields.myFSM;
        if ( this )
        {
          v63 = &StringLiteral_8634/*"MENU_SHOW_SUPPORT"*/;
          goto LABEL_133;
        }
        goto LABEL_195;
      }
      return;
    case 6:
      if ( !v6->fields.tutorialState )
      {
        this = (FollowerRootComponent_o *)v6->fields.operationItemListViewManager;
        if ( !this )
          goto LABEL_195;
        this = (FollowerRootComponent_o *)FollowerSelectItemListViewManager__GetItem(
                                            (FollowerSelectItemListViewManager_o *)this,
                                            n,
                                            0LL);
        if ( !this )
          goto LABEL_195;
        v81 = (FollowerSelectItemListViewItem_o *)this;
        if ( !FollowerSelectItemListViewItem__get_ServantLeader((FollowerSelectItemListViewItem_o *)this, 0LL) )
          goto LABEL_154;
        this = (FollowerRootComponent_o *)FollowerSelectItemListViewItem__get_ServantLeader(v81, 0LL);
        if ( !this )
          goto LABEL_195;
        v83 = *(_QWORD *)&this->fields.manualWidth;
        v82 = *(_QWORD *)&this->fields.kind;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v116.fields.currentCryptoKey = v83;
        *(_QWORD *)&v116.fields.fakeValue = v82;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v116, 0LL) >= 1 )
        {
          this = (FollowerRootComponent_o *)FollowerSelectItemListViewItem__get_ServantLeader(v81, 0LL);
          if ( !this )
            goto LABEL_195;
          if ( !this->fields.battleSetupInfo )
            goto LABEL_163;
          this = (FollowerRootComponent_o *)FollowerSelectItemListViewItem__get_ServantLeader(v81, 0LL);
          if ( !this )
            goto LABEL_195;
          battleSetupInfo = this->fields.battleSetupInfo;
          if ( !battleSetupInfo )
            goto LABEL_195;
          v86 = *(_QWORD *)&battleSetupInfo->fields.boostId;
          userEquipId = battleSetupInfo->fields.userEquipId;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v117.fields.currentCryptoKey = v86;
          *(_QWORD *)&v117.fields.fakeValue = userEquipId;
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v117, 0LL) < 1 )
            goto LABEL_163;
          this = (FollowerRootComponent_o *)FollowerSelectItemListViewItem__get_ServantLeader(v81, 0LL);
          if ( !this )
            goto LABEL_195;
          if ( ServantLeaderInfo__IsHideEquip((ServantLeaderInfo_o *)this, 0LL) )
            goto LABEL_163;
          this = (FollowerRootComponent_o *)FollowerSelectItemListViewItem__get_ServantLeader(v81, 0LL);
          if ( !this )
            goto LABEL_195;
          EquipInfo = (EquipTargetInfo_o *)this->fields.battleSetupInfo;
        }
        else
        {
LABEL_154:
          EquipInfo = FollowerSelectItemListViewItem__get_EquipInfo(v81, 0LL);
        }
        if ( EquipInfo )
        {
          v89 = *(_QWORD *)&EquipInfo->fields.svtId.fields.currentCryptoKey;
          v88 = *(_QWORD *)&EquipInfo->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v118.fields.currentCryptoKey = v89;
          *(_QWORD *)&v118.fields.fakeValue = v88;
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v118, 0LL) >= 1 )
          {
            v90 = Method_FollowerRootComponent_OnSelectFollowerItem__;
            if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
              v90 = (_QWORD *)sub_1B885C8();
            v91 = (System_Reflection_MethodBase_o *)sub_1B88594(v90, v90[4]);
            OverwriteAssetSoundName__PlaySystemSe(v91, 0, 0LL);
            if ( FollowerSelectItemListViewItem__get_FollowerType(v81, 0LL) == 1 )
            {
              v93 = 13;
            }
            else if ( FollowerSelectItemListViewItem__get_FollowerType(v81, 0LL) == 5 )
            {
              v93 = 14;
            }
            else if ( v81->fields.isNpc )
            {
              v93 = 19;
            }
            else
            {
              v93 = 16;
            }
            FollowerRootComponent__SelectShowServantEquip(v6, EquipInfo, v93, v92);
            return;
          }
        }
LABEL_163:
        v94 = Method_FollowerRootComponent_OnSelectFollowerItem__;
        if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
          v94 = (_QWORD *)sub_1B885C8();
        v57 = (System_Reflection_MethodBase_o *)sub_1B88594(v94, v94[4]);
        goto LABEL_166;
      }
LABEL_104:
      v68 = Method_FollowerRootComponent_OnSelectFollowerItem__;
      if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
        v68 = (_QWORD *)sub_1B885C8();
      v69 = (System_Reflection_MethodBase_o *)sub_1B88594(v68, v68[4]);
      OverwriteAssetSoundName__PlaySystemSe(v69, 2, 0LL);
      v70 = v6->fields.tutorialMode;
      if ( v70 == 3 )
      {
LABEL_175:
        operationItemListViewManager = v6->fields.operationItemListViewManager;
        v95 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1B887FC(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
        FollowerSelectItemListViewManager_CallbackFunc___ctor(
          v95,
          (Il2CppObject *)v6,
          (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
          0LL);
        if ( !operationItemListViewManager )
          goto LABEL_195;
        v96 = 4;
LABEL_170:
        FollowerSelectItemListViewManager__SetMode(operationItemListViewManager, v96, v95, 0LL);
        return;
      }
      if ( v70 == 2 )
        goto LABEL_167;
      return;
    case 7:
    case 13:
      v47 = Method_FollowerRootComponent_OnSelectFollowerItem__;
      if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
        v47 = (_QWORD *)sub_1B885C8();
      v48 = (System_Reflection_MethodBase_o *)sub_1B88594(v47, v47[4]);
      OverwriteAssetSoundName__PlaySystemSe(v48, 0, 0LL);
      if ( !FollowerListRequest_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FollowerListRequest_TypeInfo);
      v49 = FollowerListRequest__checkRefreshRate(0LL);
      v50 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B887FC(CommonConfirmDialog_ClickDelegate_TypeInfo);
      CommonConfirmDialog_ClickDelegate___ctor(
        v50,
        (Il2CppObject *)v6,
        Method_FollowerRootComponent_EndRefreshConfirm__,
        0LL);
      if ( kind == 13 )
      {
        if ( !FollowerRecommendSupportListRequest_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FollowerRecommendSupportListRequest_TypeInfo);
        v51 = FollowerRecommendSupportListRequest__CheckRefreshRate(0LL);
        v50 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B887FC(CommonConfirmDialog_ClickDelegate_TypeInfo);
        CommonConfirmDialog_ClickDelegate___ctor(
          v50,
          (Il2CppObject *)v6,
          Method_FollowerRootComponent_EndRecommendRefreshConfirm__,
          0LL);
        if ( v51 )
        {
LABEL_62:
          commonConfirmDialog = v6->fields.commonConfirmDialog;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v53 = LocalizationManager__Get((System_String_o *)StringLiteral_6431/*"FOLLOWER_SELECT_REFRESH_TITLE"*/, 0LL);
          this = (FollowerRootComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6428/*"FOLLOWER_SELECT_REFRESH_MESSAGE"*/, 0LL);
          v54 = this;
          if ( !FollowerRootComponent_TypeInfo->_2.cctor_finished )
            this = (FollowerRootComponent_o *)j_il2cpp_runtime_class_init_0(FollowerRootComponent_TypeInfo);
          if ( commonConfirmDialog )
          {
            CommonConfirmDialog__Open_30469972(
              commonConfirmDialog,
              v53,
              (System_String_o *)v54,
              1,
              v50,
              FollowerRootComponent_TypeInfo->static_fields->LIST_UPDATE_MESSAGE_FONT_SIZE,
              0,
              0,
              0,
              0LL);
            return;
          }
          goto LABEL_195;
        }
      }
      else if ( v49 )
      {
        goto LABEL_62;
      }
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v76 = LocalizationManager__Get((System_String_o *)StringLiteral_6430/*"FOLLOWER_SELECT_REFRESH_REST_TITLE"*/, 0LL);
      v77 = LocalizationManager__Get((System_String_o *)StringLiteral_6429/*"FOLLOWER_SELECT_REFRESH_REST_MESSAGE"*/, 0LL);
      v78 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v78, (Il2CppObject *)v6, Method_FollowerRootComponent_EndRefreshRest__, 0LL);
      if ( Instance )
      {
        CommonUI__OpenNotificationDialog((CommonUI_o *)Instance, v76, v77, v78, -1, 0, 0, 0, 0, 0, 1, 0, 0LL, 0.0, 0LL);
        return;
      }
      goto LABEL_195;
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
      this = (FollowerRootComponent_o *)v6->fields.operationItemListViewManager;
      if ( !this )
        goto LABEL_195;
      this = (FollowerRootComponent_o *)FollowerSelectItemListViewManager__GetItem(
                                          (FollowerSelectItemListViewManager_o *)this,
                                          n,
                                          0LL);
      v7 = (unsigned int)(kind - 9);
      v8 = (unsigned int)v7 < 4 ? v7 + 1 : 0LL;
      if ( !this )
        goto LABEL_195;
      this = (FollowerRootComponent_o *)FollowerSelectItemListViewItem__GetAppendSkillInfo(
                                          (FollowerSelectItemListViewItem_o *)this,
                                          &skillInfoList,
                                          this->fields.tutorialMode,
                                          0LL);
      if ( !skillInfoList )
        goto LABEL_195;
      if ( (unsigned int)v8 >= skillInfoList->max_length )
LABEL_196:
        sub_1B88814(this, *(_QWORD *)&kind);
      v9 = skillInfoList->m_Items[v8];
      if ( v9 && v9->fields.id >= 1 && v9->fields.lv >= 1 )
      {
        v10 = Method_FollowerRootComponent_OnSelectFollowerItem__;
        if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
          v10 = (_QWORD *)sub_1B885C8();
        v11 = (System_Reflection_MethodBase_o *)sub_1B88594(v10, v10[4]);
        OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (FollowerRootComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_SkillMaster___);
        if ( !this )
          goto LABEL_195;
        v12 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                v9->fields.id,
                (const MethodInfo_311D934 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        this = (FollowerRootComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_SkillLvMaster___);
        if ( !this )
          goto LABEL_195;
        this = (FollowerRootComponent_o *)SkillLvMaster__GetEntity(
                                            (SkillLvMaster_o *)this,
                                            v9->fields.id,
                                            v9->fields.lv,
                                            0LL);
        if ( !v12 )
          goto LABEL_195;
        SkillEntity__getSkillMessageInfo((SkillEntity_o *)v12, &name, &detail, v9->fields.lv, 0LL);
        v13 = name;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v14 = LocalizationManager__Get((System_String_o *)StringLiteral_8522/*"MASTER_EQSKILL_LV_TXT"*/, 0LL);
        lv = v9->fields.lv;
        v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv, v15, v16, v17);
        v19 = System_String__Format(v14, v18, 0LL);
        name = System_String__Concat_61718292(v13, (System_String_o *)StringLiteral_117/*" "*/, v19, 0LL);
        v20 = v6->fields.tutorialMode;
        this = (FollowerRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !this )
          goto LABEL_195;
        if ( v20 == 3 )
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
        v21 = Method_FollowerRootComponent_OnSelectFollowerItem__;
        if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
          v21 = (_QWORD *)sub_1B885C8();
        v22 = (System_Reflection_MethodBase_o *)sub_1B88594(v21, v21[4]);
        OverwriteAssetSoundName__PlaySystemSe(v22, 2, 0LL);
      }
      goto LABEL_30;
    case 14:
      v71 = v6->fields.battleSetupInfo;
      if ( !v71 )
        goto LABEL_195;
      if ( !v71->fields.isChildFollower )
        goto LABEL_114;
      this = (FollowerRootComponent_o *)v6->fields.titleInfo;
      if ( !this )
        goto LABEL_195;
      TitleInfoControl__setBackBtnEnable((TitleInfoControl_o *)this, 0, 0LL);
      this = (FollowerRootComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !this )
        goto LABEL_195;
      LOBYTE(this->fields.followerQuestInfomationDraw) = 1;
LABEL_114:
      v72 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v72,
        (Il2CppObject *)v6,
        Method_FollowerRootComponent_CallbackRefresh__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      this = (FollowerRootComponent_o *)NetworkManager__getRequest_object_(
                                          v72,
                                          (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_FollowerRecommendSupportListRequest___);
      if ( !v6->fields.battleSetupInfo )
        goto LABEL_195;
      v73 = (FollowerRecommendSupportListRequest_o *)this;
      this = (FollowerRootComponent_o *)BattleSetupInfo__TargetQuestId(v6->fields.battleSetupInfo, 0LL);
      v74 = v6->fields.battleSetupInfo;
      if ( !v74 || !v73 )
        goto LABEL_195;
      FollowerRecommendSupportListRequest__beginRequest(v73, 0, (int32_t)this, v74->fields.questPhase, 0LL);
      return;
    default:
      this = (FollowerRootComponent_o *)v6->fields.operationItemListViewManager;
      if ( !this )
        goto LABEL_195;
      this = (FollowerRootComponent_o *)FollowerSelectItemListViewManager__GetItem(
                                          (FollowerSelectItemListViewManager_o *)this,
                                          n,
                                          0LL);
      if ( !this )
        goto LABEL_195;
      v58 = this;
      if ( FollowerSelectItemListViewItem__get_SvtId((FollowerSelectItemListViewItem_o *)this, 0LL) < 1
        || HIBYTE(v58->fields.openScroll.fields.z)
        || *((_BYTE *)&v58[1].fields.UnityEngine_Behaviour_Fields + 6) )
      {
        goto LABEL_163;
      }
      this = (FollowerRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
      if ( !this )
        goto LABEL_195;
      if ( !BYTE4(this->fields.battleSetupInfo) )
        goto LABEL_86;
      v59 = PartyOrganizationUtility_TypeInfo;
      if ( !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
        v59 = PartyOrganizationUtility_TypeInfo;
      }
      if ( !UnityEngine_PlayerPrefs__GetInt(v59->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0, 0LL) )
        goto LABEL_86;
      this = (FollowerRootComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !this )
        goto LABEL_195;
      if ( PartyOrganizationUtility__IsAvailableFriendshipUpItem((PartyOrganizationUtility_o *)this, 0LL) )
      {
LABEL_86:
        v60 = Method_FollowerRootComponent_OnSelectFollowerItem__;
        if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
          v60 = (_QWORD *)sub_1B885C8();
        v61 = (System_Reflection_MethodBase_o *)sub_1B88594(v60, v60[4]);
        OverwriteAssetSoundName__PlaySystemSe(v61, 0, 0LL);
        if ( v6->fields.tutorialState )
        {
          v62 = v6->fields.tutorialMode;
          if ( v62 == 3 )
          {
            v6->fields.state = 4;
            v106 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v107 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
            System_Action___ctor(v107, (Il2CppObject *)v6, Method_FollowerRootComponent_EndCloseTutorialArrow__, 0LL);
            if ( !v106 )
              goto LABEL_195;
            CommonUI__CloseTutorialArrowMark((CommonUI_o *)v106, v107, 0LL);
            return;
          }
          if ( v62 != 2 )
            return;
          this = (FollowerRootComponent_o *)v6->fields.titleInfo;
          if ( !this )
            goto LABEL_195;
          TitleInfoControl__setBackBtnEnable((TitleInfoControl_o *)this, 1, 0LL);
        }
        this = (FollowerRootComponent_o *)v6->fields.myFSM;
        if ( this )
        {
          v63 = &StringLiteral_8625/*"MENU_SELECT_ITEM"*/;
LABEL_133:
          PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v63, 0LL);
          return;
        }
LABEL_195:
        sub_1B8880C(this, *(_QWORD *)&kind);
      }
      v99 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (FollowerRootComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10267/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_EXPIRED"*/, 0LL);
      v100 = this;
      v101 = FollowerRootComponent___c_TypeInfo;
      if ( !FollowerRootComponent___c_TypeInfo->_2.cctor_finished )
      {
        this = (FollowerRootComponent_o *)j_il2cpp_runtime_class_init_0(FollowerRootComponent___c_TypeInfo);
        v101 = FollowerRootComponent___c_TypeInfo;
      }
      _9__65_0 = v101->static_fields->__9__65_0;
      v103 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !_9__65_0 )
      {
        if ( !v101->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v101);
          v101 = FollowerRootComponent___c_TypeInfo;
        }
        v104 = (Il2CppObject *)v101->static_fields->__9;
        _9__65_0 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
        System_Action___ctor(_9__65_0, v104, Method_FollowerRootComponent___c__OnSelectFollowerItem_b__65_0__, 0LL);
        static_fields = FollowerRootComponent___c_TypeInfo->static_fields;
        static_fields->__9__65_0 = _9__65_0;
        this = (FollowerRootComponent_o *)sub_1B88554(&static_fields->__9__65_0, _9__65_0);
      }
      if ( !v99 )
        goto LABEL_195;
      CommonUI__OpenNotificationDialog(
        (CommonUI_o *)v99,
        v103,
        (System_String_o *)v100,
        _9__65_0,
        -1,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0LL,
        0.0,
        0LL);
LABEL_30:
      operationItemListViewManager = v6->fields.operationItemListViewManager;
      v24 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1B887FC(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
      v25 = (int)Method_FollowerRootComponent_OnSelectFollowerItem__;
LABEL_168:
      v95 = v24;
      FollowerSelectItemListViewManager_CallbackFunc___ctor(v24, (Il2CppObject *)v6, v25, 0LL);
      if ( !operationItemListViewManager )
        goto LABEL_195;
      v96 = 2;
      goto LABEL_170;
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
  float FormationSubBgmFadeInTime; // s8
  int FormationBgmId; // w20
  System_String_o *BgmFileName; // x21
  _BOOL4 v11; // w23
  char v12; // w22
  FollowerRootComponent_o *v13; // x20
  int32_t FormationSubBgmId; // w0
  int32_t v15; // w20
  const MethodInfo *v16; // x2
  struct UnityEngine_GameObject_o *tutorialMaskBase; // x8
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
  if ( (byte_4A56423 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&BgmManager_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_BgmMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1B885B0(&SoundManager_TypeInfo);
    this = (FollowerRootComponent_o *)sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A56423 = 1;
  }
  entity = 0LL;
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
    this = (FollowerRootComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( !v2->fields.battleSetupInfo )
      goto LABEL_70;
    v6 = (QuestPhaseMaster_o *)this;
    this = (FollowerRootComponent_o *)BattleSetupInfo__TargetQuestId(v2->fields.battleSetupInfo, 0LL);
    v7 = v2->fields.battleSetupInfo;
    if ( !v7 || !v6 )
      goto LABEL_70;
    FormationSubBgmFadeInTime = 0.0;
    if ( QuestPhaseMaster__TryGetEntity(v6, &entity, (int32_t)this, v7->fields.questPhase, 0LL) )
    {
      this = (FollowerRootComponent_o *)entity;
      if ( !entity )
        goto LABEL_70;
      FormationBgmId = QuestPhaseEntity__GetFormationBgmId(entity, 0LL);
      if ( FormationBgmId < 1 )
      {
        BgmFileName = 0LL;
        v11 = FormationBgmId == 0;
      }
      else
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (FollowerRootComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_BgmMaster___);
        if ( !this )
          goto LABEL_70;
        BgmFileName = BgmMaster__GetBgmFileName(
                        (BgmMaster_o *)this,
                        FormationBgmId,
                        (System_String_o *)StringLiteral_1/*""*/,
                        0LL);
        v11 = 0;
      }
      this = (FollowerRootComponent_o *)entity;
      if ( !entity )
        goto LABEL_70;
      this = (FollowerRootComponent_o *)QuestPhaseEntity__IsNonStopEndBgm(entity, 0LL);
      if ( !entity )
        goto LABEL_70;
      v12 = (char)this;
      FormationSubBgmId = QuestPhaseEntity__GetFormationSubBgmId(entity, 0LL);
      if ( (FormationSubBgmId & 0x80000000) != 0 )
      {
        v13 = 0LL;
      }
      else
      {
        v15 = FormationSubBgmId;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (FollowerRootComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_BgmMaster___);
        if ( !this )
          goto LABEL_70;
        this = (FollowerRootComponent_o *)BgmMaster__GetBgmFileName(
                                            (BgmMaster_o *)this,
                                            v15,
                                            (System_String_o *)StringLiteral_1/*""*/,
                                            0LL);
        if ( !entity )
          goto LABEL_70;
        v13 = this;
        FormationSubBgmFadeInTime = QuestPhaseEntity__GetFormationSubBgmFadeInTime(entity, 0LL);
      }
    }
    else
    {
      v11 = 0;
      v12 = 0;
      v13 = 0LL;
      BgmFileName = 0LL;
    }
    this = (FollowerRootComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !this )
      goto LABEL_70;
    this = (FollowerRootComponent_o *)PartyOrganizationUtility__ExistsTemporaryPartyInfo(
                                        (PartyOrganizationUtility_o *)this,
                                        0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !System_String__IsNullOrEmpty(BgmFileName, 0LL) )
        FollowerRootComponent__SetBackupBgmName(v2, v12 & 1, v16);
      this = (FollowerRootComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( this )
      {
        tutorialMaskBase = this->fields.tutorialMaskBase;
        if ( tutorialMaskBase )
        {
          BgmName = *(System_String_o **)&tutorialMaskBase[1].fields.m_CachedPtr;
          v19 = SoundManager_TypeInfo;
          if ( SoundManager_TypeInfo->_2.cctor_finished )
          {
LABEL_38:
            v20 = BgmName;
LABEL_56:
            SoundManager__playBgm(v20, 0LL);
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
    if ( !SoundManager__isPlayBgm(0LL, 0LL) )
      goto LABEL_48;
    if ( !System_String__IsNullOrEmpty(BgmFileName, 0LL) )
    {
      if ( !BgmManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
      if ( !BgmManager__IsPlayBgm(BgmFileName, 0LL) )
      {
LABEL_48:
        if ( !System_String__IsNullOrEmpty(BgmFileName, 0LL) )
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
          SoundManager__stopBgm(0LL);
          goto LABEL_57;
        }
        this = (FollowerRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( this )
        {
          this = (FollowerRootComponent_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestMaster___);
          if ( v2->fields.battleSetupInfo )
          {
            v25 = (QuestMaster_o *)this;
            this = (FollowerRootComponent_o *)BattleSetupInfo__TargetQuestId(v2->fields.battleSetupInfo, 0LL);
            if ( v25 )
            {
              this = (FollowerRootComponent_o *)QuestMaster__getQuestEntity(v25, (int32_t)this, 0LL);
              v26 = v2->fields.battleSetupInfo;
              if ( v26 )
              {
                if ( this )
                {
                  BgmName = QuestEntity__GetBgmName((QuestEntity_o *)this, v26->fields.warId, 0LL);
                  if ( System_String__IsNullOrEmpty(BgmName, 0LL) )
                  {
                    if ( !BgmManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
                    BgmName = BgmManager__GetMainBgmName(0LL);
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
        sub_1B8880C(this, method);
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
  if ( (byte_4A56422 & 1) == 0 )
  {
    sub_1B885B0(&SoundManager_TypeInfo);
    byte_4A56422 = 1;
  }
  if ( !System_String__IsNullOrEmpty(subBgmName, 0LL) )
  {
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__PlaySubBgm(subBgmName, fadeTime, 0LL);
  }
}


void __fastcall FollowerRootComponent__QuestHintDialogResetTemporarilyId(
        FollowerRootComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A56442 & 1) == 0 )
  {
    sub_1B885B0(&QuestHintDialogOpenManager_TypeInfo);
    byte_4A56442 = 1;
  }
  if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
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
    sub_1B8880C(operationItemListViewManager, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)operationItemListViewManager, 0, 0LL);
  this->fields.state = 0;
}


void __fastcall FollowerRootComponent__RequestFollowerList(FollowerRootComponent_o *this, const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v3; // x20
  FollowerListRequest_o *Request_object; // x0
  __int64 v5; // x1
  FollowerListRequest_o *v6; // x20
  struct BattleSetupInfo_o *battleSetupInfo; // x8

  if ( (byte_4A5642C & 1) == 0 )
  {
    sub_1B885B0(&Method_FollowerRootComponent_CallbackFollowerList__);
    sub_1B885B0(&Method_NetworkManager_getRequest_FollowerListRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1B885B0(&StringLiteral_11060/*"REQUEST_OK"*/);
    byte_4A5642C = 1;
  }
  v3 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v3,
    (Il2CppObject *)this,
    Method_FollowerRootComponent_CallbackFollowerList__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = (FollowerListRequest_o *)NetworkManager__getRequest_object_(
                                              v3,
                                              (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_FollowerListRequest___);
  if ( !Request_object )
    goto LABEL_12;
  v6 = Request_object;
  if ( (((__int64 (__fastcall *)(FollowerListRequest_o *, Il2CppMethodPointer))Request_object->klass->vtable._7_checkExpirationDate.method)(
          Request_object,
          Request_object->klass->vtable._8_isBackgroundRequest.methodPtr) & 1) != 0 )
  {
    Request_object = (FollowerListRequest_o *)this->fields.myFSM;
    if ( Request_object )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Request_object, (System_String_o *)StringLiteral_11060/*"REQUEST_OK"*/, 0LL);
      return;
    }
LABEL_12:
    sub_1B8880C(Request_object, v5);
  }
  Request_object = (FollowerListRequest_o *)this->fields.battleSetupInfo;
  if ( !Request_object )
    goto LABEL_12;
  Request_object = (FollowerListRequest_o *)BattleSetupInfo__TargetQuestId((BattleSetupInfo_o *)Request_object, 0LL);
  battleSetupInfo = this->fields.battleSetupInfo;
  if ( !battleSetupInfo )
    goto LABEL_12;
  FollowerListRequest__beginRequest(v6, 0, (int32_t)Request_object, battleSetupInfo->fields.questPhase, 0LL);
}


bool __fastcall FollowerRootComponent__ReturnBattleSetupMenu(FollowerRootComponent_o *this, const MethodInfo *method)
{
  FollowerRootComponent_o *v2; // x20
  struct BattleSetupInfo_o *battleSetupInfo; // x19

  v2 = this;
  if ( (byte_4A56437 & 1) == 0 )
  {
    this = (FollowerRootComponent_o *)sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4A56437 = 1;
  }
  battleSetupInfo = v2->fields.battleSetupInfo;
  v2->fields.state = 5;
  if ( !battleSetupInfo )
    goto LABEL_8;
  if ( battleSetupInfo->fields.isChildFollower )
    battleSetupInfo->fields.followerId = 0LL;
  this = (FollowerRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !this )
LABEL_8:
    sub_1B8880C(this, method);
  AvalonSceneManager__pushScene((AvalonSceneManager_o *)this, 40, 1, (Il2CppObject *)battleSetupInfo, 0LL);
  return 1;
}


bool __fastcall FollowerRootComponent__ReturnQuestMenu(FollowerRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *battleSetupInfo; // x20
  System_String_o *backupBgmName; // x22
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  TerminalPramsManager_c *v7; // x0

  if ( (byte_4A56436 & 1) == 0 )
  {
    sub_1B885B0(&Method_AvalonSceneManager_UnloadScene_PartyOrganizationRootComponent___);
    sub_1B885B0(&RandomLimitCountManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1B885B0(&SoundManager_TypeInfo);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A56436 = 1;
  }
  battleSetupInfo = (Il2CppObject *)this->fields.battleSetupInfo;
  if ( !System_String__IsNullOrEmpty(this->fields.backupBgmName, 0LL) )
  {
    backupBgmName = this->fields.backupBgmName;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__playBgm(backupBgmName, 0LL);
  }
  this->fields.battleSetupInfo = 0LL;
  sub_1B88554(&this->fields.battleSetupInfo, 0LL);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  if ( BYTE1(Instance[8].monitor) )
  {
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_27;
    BYTE1(Instance[8].monitor) = 0;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A5644B )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A5644B = 1;
    }
    v7 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v7 = TerminalPramsManager_TypeInfo;
    }
    v7->static_fields->_IsAutoResume_k__BackingField = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  if ( AvalonSceneManager__IsStackScene((AvalonSceneManager_o *)Instance, 0LL) )
  {
    this->fields.state = 0;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_27;
    AvalonSceneManager__popSceneRefresh((AvalonSceneManager_o *)Instance, 1, battleSetupInfo, 0LL);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_27;
    AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0, 0LL);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
LABEL_27:
    sub_1B8880C(Instance, v6);
  AvalonSceneManager__UnloadScene_object_(
    (AvalonSceneManager_o *)Instance,
    (const MethodInfo_2E69768 *)Method_AvalonSceneManager_UnloadScene_PartyOrganizationRootComponent___);
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  RandomLimitCountManager__set_EnableRandomLimitCount(0, 0LL);
  return 1;
}


void __fastcall FollowerRootComponent__ReturnSupportList(FollowerRootComponent_o *this, const MethodInfo *method)
{
  int32_t state; // w8
  __int64 operationItemListViewManager; // x0
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

  if ( (byte_4A5642A & 1) == 0 )
  {
    sub_1B885B0(&AvalonSceneManager_TypeInfo);
    sub_1B885B0(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_FollowerRootComponent_OnSelectFollowerItem__);
    sub_1B885B0(&RandomLimitCountManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4A5642A = 1;
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
      goto LABEL_27;
    FollowerSelectItemListViewManager__ModifyList(
      (FollowerSelectItemListViewManager_o *)operationItemListViewManager,
      this->fields.friendPointUpVal,
      this->fields.friendPointUpMaxVal,
      0LL);
    v5 = this->fields.operationItemListViewManager;
    v6 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1B887FC(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    FollowerSelectItemListViewManager_CallbackFunc___ctor(
      v6,
      (Il2CppObject *)this,
      (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
      0LL);
    if ( !v5 )
      goto LABEL_27;
    FollowerSelectItemListViewManager__SetMode(v5, 3, v6, 0LL);
    v7 = this->fields.operationItemListViewManager;
    if ( !v7 )
      goto LABEL_27;
    if ( !byte_4A5644A )
    {
      sub_1B885B0(&FollowerSelectItemListViewManager_TypeInfo);
      byte_4A5644A = 1;
    }
    v8 = FollowerSelectItemListViewManager_TypeInfo;
    if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
      v8 = FollowerSelectItemListViewManager_TypeInfo;
    }
    FollowerSelectItemListViewManager__ChangeClass(v7, v8->static_fields->followerClassId, 0LL);
    operationItemListViewManager = (__int64)this->fields.operationItemListViewManager;
    if ( !operationItemListViewManager )
LABEL_27:
      sub_1B8880C(operationItemListViewManager, method);
    operationItemListViewManager = FollowerSelectItemListViewManager__GetDisplayItemNum(
                                     (FollowerSelectItemListViewManager_o *)operationItemListViewManager,
                                     0LL);
    if ( (int)operationItemListViewManager >= 3 )
    {
      operationItemListViewManager = (__int64)this->fields.operationItemListViewManager;
      if ( !operationItemListViewManager )
        goto LABEL_27;
      ListViewManager__JumpItem((ListViewManager_o *)operationItemListViewManager, this->fields.selectItemNum, 0LL);
    }
  }
  else
  {
    operationItemListViewManager = (__int64)this->fields.operationItemListViewManager;
    if ( !operationItemListViewManager )
      goto LABEL_27;
    FollowerSelectItemListViewManager__ModifyList(
      (FollowerSelectItemListViewManager_o *)operationItemListViewManager,
      this->fields.friendPointUpVal,
      this->fields.friendPointUpMaxVal,
      0LL);
    v9 = this->fields.operationItemListViewManager;
    v10 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1B887FC(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    FollowerSelectItemListViewManager_CallbackFunc___ctor(
      v10,
      (Il2CppObject *)this,
      (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
      0LL);
    if ( !v9 )
      goto LABEL_27;
    FollowerSelectItemListViewManager__SetMode(v9, 2, v10, 0LL);
  }
  battleSetupInfo = this->fields.battleSetupInfo;
  if ( !battleSetupInfo )
    goto LABEL_27;
  followerQuestInfomationDraw = this->fields.followerQuestInfomationDraw;
  questRestrictionInfo = battleSetupInfo->fields.questRestrictionInfo;
  operationItemListViewManager = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !operationItemListViewManager || !followerQuestInfomationDraw )
    goto LABEL_27;
  FollowerQuestInfomationDraw__SetInfomation(
    followerQuestInfomationDraw,
    questRestrictionInfo,
    *(_DWORD *)(operationItemListViewManager + 56),
    0LL,
    v14);
  operationItemListViewManager = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v15 = (CommonUI_o *)operationItemListViewManager;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    operationItemListViewManager = j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v15 )
    goto LABEL_27;
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

  if ( (byte_4A56430 & 1) == 0 )
  {
    sub_1B885B0(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1B885B0(&Method_FollowerRootComponent_EndShowServant__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A56430 = 1;
  }
  operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager
    || (ListViewManager__GetScrollView(
          operationItemListViewManager,
          &this->fields.openScroll,
          &this->fields.openOffset,
          0LL),
        operationItemListViewManager = (ListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        !item)
    || (v6 = (CommonUI_o *)operationItemListViewManager,
        ServantLeader = FollowerSelectItemListViewItem__get_ServantLeader(item, 0LL),
        v8 = (ServantStatusDialog_EndDelegate_o *)sub_1B887FC(ServantStatusDialog_EndDelegate_TypeInfo),
        ServantStatusDialog_EndDelegate___ctor(
          v8,
          (Il2CppObject *)this,
          Method_FollowerRootComponent_EndShowServant__,
          0LL),
        !v6) )
  {
    sub_1B8880C(operationItemListViewManager, item);
  }
  CommonUI__OpenServantStatusDialog_30506432(v6, 5, ServantLeader, v8, 0LL);
}


void __fastcall FollowerRootComponent__SelectShowServantEquip(
        FollowerRootComponent_o *this,
        EquipTargetInfo_o *equipInfo,
        int32_t statusKind,
        const MethodInfo *method)
{
  ListViewManager_o *operationItemListViewManager; // x0
  Il2CppObject *Instance; // x22
  ServantStatusDialog_EndDelegate_o *v9; // x23

  if ( (byte_4A56433 & 1) == 0 )
  {
    sub_1B885B0(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1B885B0(&Method_FollowerRootComponent_EndShowServantEquip__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A56433 = 1;
  }
  operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager
    || (ListViewManager__GetScrollView(
          operationItemListViewManager,
          &this->fields.openScroll,
          &this->fields.openOffset,
          0LL),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v9 = (ServantStatusDialog_EndDelegate_o *)sub_1B887FC(ServantStatusDialog_EndDelegate_TypeInfo),
        ServantStatusDialog_EndDelegate___ctor(
          v9,
          (Il2CppObject *)this,
          Method_FollowerRootComponent_EndShowServantEquip__,
          0LL),
        !Instance) )
  {
    sub_1B8880C(operationItemListViewManager, equipInfo);
  }
  CommonUI__OpenServantEquipStatusDialog_30509528((CommonUI_o *)Instance, statusKind, equipInfo, v9, 0LL, 0LL);
}


void __fastcall FollowerRootComponent__SetBackupBgmName(
        FollowerRootComponent_o *this,
        bool isNonStopEndBgm,
        const MethodInfo *method)
{
  struct System_String_o *BgmName; // x0

  if ( (byte_4A56424 & 1) == 0 )
  {
    sub_1B885B0(&SoundManager_TypeInfo);
    byte_4A56424 = 1;
  }
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  if ( SoundManager__isPlayBgm(0LL, 0LL) && !isNonStopEndBgm )
  {
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    BgmName = SoundManager__getBgmName(0LL);
    this->fields.backupBgmName = BgmName;
    sub_1B88554(&this->fields.backupBgmName, BgmName);
  }
}


bool __fastcall FollowerRootComponent__SetFollowerBase(
        UISprite_o *sprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  FollowerRootComponent_c *v5; // x0
  UIAtlas_o *partyOrganizationAtlasCache; // x21

  if ( (byte_4A5641F & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&FollowerRootComponent_TypeInfo);
    byte_4A5641F = 1;
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
  return AtlasManager__SetGradeBase(sprite, spriteName, partyOrganizationAtlasCache, 0LL);
}


bool __fastcall FollowerRootComponent__StartBattleSetupMenu(FollowerRootComponent_o *this, const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 followerId; // x1
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  int32_t ItemIndex_30858584; // w0
  FollowerSelectItemListViewItem_o *Item; // x0
  struct BattleSetupInfo_o *v8; // x21
  FollowerSelectItemListViewItem_o *v9; // x20
  struct BattleSetupInfo_o *v10; // x21
  struct BattleSetupInfo_o *v11; // x8
  int32_t IsRecommendFollower_k__BackingField; // w9
  struct FollowerInfo_o *followerInfo; // x9
  struct UserRecommendSupportInfo_array *userRecommendSupportHash; // x9
  UserRecommendSupportInfo_o *v15; // x9
  struct BattleSetupInfo_o *v16; // x8
  int v17; // w9
  Il2CppObject *v18; // x19

  if ( (byte_4A56438 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4A56438 = 1;
  }
  Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = PartyOrganizationUtility__ExistsTemporaryPartyInfo((PartyOrganizationUtility_o *)Instance, 0LL);
  battleSetupInfo = this->fields.battleSetupInfo;
  if ( !battleSetupInfo )
    goto LABEL_29;
  if ( (Instance & 1) != 0 )
  {
    followerId = battleSetupInfo->fields.followerId;
    if ( followerId >= 1 )
    {
      Instance = (int64_t)this->fields.operationItemListViewManager;
      if ( !Instance )
        goto LABEL_29;
      ItemIndex_30858584 = FollowerSelectItemListViewManager__GetItemIndex_30858584(
                             (FollowerSelectItemListViewManager_o *)Instance,
                             followerId,
                             battleSetupInfo->fields.followerClassId,
                             battleSetupInfo->fields.followerSupportDeckId,
                             0LL);
      this->fields.selectItemNum = ItemIndex_30858584 & ~(ItemIndex_30858584 >> 31);
    }
    goto LABEL_27;
  }
  battleSetupInfo->fields.followerId = 0LL;
  followerId = (unsigned int)this->fields.selectItemNum;
  if ( (followerId & 0x80000000) == 0 )
  {
    Instance = (int64_t)this->fields.operationItemListViewManager;
    if ( !Instance )
      goto LABEL_29;
    Item = FollowerSelectItemListViewManager__GetItem((FollowerSelectItemListViewManager_o *)Instance, followerId, 0LL);
    if ( Item )
    {
      v8 = this->fields.battleSetupInfo;
      v9 = Item;
      Instance = FollowerSelectItemListViewItem__get_FollowerId(Item, 0LL);
      if ( v8 )
      {
        v8->fields.followerId = Instance;
        v10 = this->fields.battleSetupInfo;
        Instance = FollowerSelectItemListViewItem__get_SelectClassId(v9, 0LL);
        if ( v10 )
        {
          v10->fields.followerClassId = Instance;
          v11 = this->fields.battleSetupInfo;
          if ( v11 )
          {
            v11->fields.followerSupportDeckId = v9->fields.supportDeckId;
            IsRecommendFollower_k__BackingField = v9->fields._IsRecommendFollower_k__BackingField;
            if ( !v9->fields._IsRecommendFollower_k__BackingField )
            {
LABEL_21:
              v11->fields.recommendSupportIdx = IsRecommendFollower_k__BackingField;
              Instance = FollowerSelectItemListViewItem__get_FollowerType(v9, 0LL);
              v16 = this->fields.battleSetupInfo;
              if ( !v16 )
                goto LABEL_29;
              v16->fields.followerType = 0;
              if ( (_DWORD)Instance == 5 )
              {
                v17 = 5;
              }
              else
              {
                if ( (_DWORD)Instance != 1 )
                  goto LABEL_27;
                v17 = 1;
              }
              v16->fields.followerType = v17;
              goto LABEL_27;
            }
            followerInfo = v9->fields.followerInfo;
            if ( followerInfo )
            {
              userRecommendSupportHash = followerInfo->fields.userRecommendSupportHash;
              if ( userRecommendSupportHash )
              {
                if ( !userRecommendSupportHash->max_length )
                  sub_1B88814(Instance, followerId);
                v15 = userRecommendSupportHash->m_Items[0];
                if ( v15 )
                {
                  IsRecommendFollower_k__BackingField = v15->fields.idx;
                  goto LABEL_21;
                }
              }
            }
          }
        }
      }
LABEL_29:
      sub_1B8880C(Instance, followerId);
    }
  }
LABEL_27:
  this->fields.state = 5;
  v18 = (Il2CppObject *)this->fields.battleSetupInfo;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  AvalonSceneManager__pushScene((AvalonSceneManager_o *)Instance, 40, 1, v18, 0LL);
  return 1;
}


bool __fastcall FollowerRootComponent__StartSupportInfoMenu(FollowerRootComponent_o *this, const MethodInfo *method)
{
  __int64 selectItemNum; // x1
  int64_t operationItemListViewManager; // x0
  FollowerSelectItemListViewItem_o *Item; // x0
  FollowerSelectItemListViewItem_o *v6; // x20
  Il2CppClass *klass; // x22
  int namespaze; // w8
  unsigned int v9; // w23
  void **v10; // x24
  _QWORD *v11; // x8
  FollowerInfo_o **v12; // x24
  _QWORD *v13; // t1
  __int64 v14; // x25
  Il2CppClass *v15; // x22
  const char *v16; // x8
  bool v17; // w21
  __int64 v18; // x23
  __int64 v19; // x8
  __int64 v20; // x21
  FollowerInfo_o *v22; // x21
  SupportInfoJump_c *v23; // x0
  SupportInfoJump_o *v24; // x20
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  Il2CppObject *v26; // [xsp+0h] [xbp-50h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A56439 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_PickupUserFollowerMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserFollowerMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long__TryGetSingleEntity__);
    sub_1B885B0(&Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long__TryGetSingleEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1B885B0(&SupportInfoJump_TypeInfo);
    byte_4A56439 = 1;
  }
  v26 = 0LL;
  entity = 0LL;
  selectItemNum = (unsigned int)this->fields.selectItemNum;
  if ( (selectItemNum & 0x80000000) != 0 )
    return 0;
  operationItemListViewManager = (int64_t)this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    goto LABEL_42;
  Item = FollowerSelectItemListViewManager__GetItem(
           (FollowerSelectItemListViewManager_o *)operationItemListViewManager,
           selectItemNum,
           0LL);
  if ( !Item )
    return 0;
  v6 = Item;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  operationItemListViewManager = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserFollowerMaster___);
  if ( !operationItemListViewManager )
    goto LABEL_42;
  operationItemListViewManager = DataMasterBase_object__object__long___TryGetSingleEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)operationItemListViewManager,
                                   &entity,
                                   (const MethodInfo_311DBBC *)Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long__TryGetSingleEntity__);
  if ( (operationItemListViewManager & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_42;
    klass = entity[1].klass;
    if ( !klass )
      goto LABEL_42;
    namespaze = (int)klass->_1.namespaze;
    if ( namespaze >= 1 )
    {
      v9 = 0;
      while ( 1 )
      {
        if ( v9 >= namespaze )
          goto LABEL_43;
        v10 = &klass->_1.image + (int)v9;
        v13 = v10[4];
        v12 = (FollowerInfo_o **)(v10 + 4);
        v11 = v13;
        if ( !v13 )
          goto LABEL_42;
        v14 = v11[2];
        operationItemListViewManager = FollowerSelectItemListViewItem__get_FollowerId(v6, 0LL);
        if ( v14 == operationItemListViewManager )
          break;
        namespaze = (int)klass->_1.namespaze;
        if ( (int)++v9 >= namespaze )
          goto LABEL_18;
      }
      this->fields.state = 6;
      if ( v9 < LODWORD(klass->_1.namespaze) )
      {
        v22 = *v12;
        v23 = SupportInfoJump_TypeInfo;
LABEL_38:
        v24 = (SupportInfoJump_o *)sub_1B887FC(v23);
        SupportInfoJump___ctor_38710972(v24, v22, 0, 1, 0LL);
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
            operationItemListViewManager = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
            if ( operationItemListViewManager )
            {
              v17 = 1;
              AvalonSceneManager__pushScene(
                (AvalonSceneManager_o *)operationItemListViewManager,
                60,
                1,
                (Il2CppObject *)v24,
                0LL);
              return v17;
            }
          }
        }
LABEL_42:
        sub_1B8880C(operationItemListViewManager, selectItemNum);
      }
      goto LABEL_43;
    }
  }
LABEL_18:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  operationItemListViewManager = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_PickupUserFollowerMaster___);
  if ( !operationItemListViewManager )
    goto LABEL_42;
  operationItemListViewManager = DataMasterBase_object__object__long___TryGetSingleEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)operationItemListViewManager,
                                   &v26,
                                   (const MethodInfo_311DBBC *)Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long__TryGetSingleEntity__);
  if ( (operationItemListViewManager & 1) == 0 )
    return 0;
  if ( !v26 )
    goto LABEL_42;
  v15 = v26[1].klass;
  if ( !v15 )
    return 0;
  v16 = v15->_1.namespaze;
  v17 = 0;
  if ( v16 && (int)v16 >= 1 )
  {
    v18 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v18 >= (unsigned int)v16 )
        goto LABEL_43;
      v19 = *((_QWORD *)&v15->_1.byval_arg.data + v18);
      if ( !v19 )
        goto LABEL_42;
      v20 = *(_QWORD *)(v19 + 16);
      operationItemListViewManager = FollowerSelectItemListViewItem__get_FollowerId(v6, 0LL);
      if ( v20 == operationItemListViewManager )
        break;
      LODWORD(v16) = v15->_1.namespaze;
      ++v18;
      v17 = 0;
      if ( (int)v18 >= (int)v16 )
        return v17;
    }
    this->fields.state = 6;
    if ( (unsigned int)v18 < LODWORD(v15->_1.namespaze) )
    {
      v22 = (FollowerInfo_o *)*((_QWORD *)&v15->_1.byval_arg.data + v18);
      v23 = SupportInfoJump_TypeInfo;
      goto LABEL_38;
    }
LABEL_43:
    sub_1B88814(operationItemListViewManager, selectItemNum);
  }
  return v17;
}


void __fastcall FollowerRootComponent__UpdateDeckInfomation(FollowerRootComponent_o *this, const MethodInfo *method)
{
  __int64 Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  struct BattleSetupInfo_o *v7; // x8
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  int32_t *p_friendPointUpVal; // x25
  Il2CppObject *v10; // x21
  EventQuestMaster_o *v11; // x22
  struct BattleSetupInfo_o *v12; // x8
  struct EventCampaignEntity_array *Data_39092640; // x0
  struct BattleSetupInfo_o *v14; // x8
  int32_t i; // w20
  BalanceConfig_c *v16; // x0
  PartyOrganizationListViewItem_o *Member; // x0
  PartyOrganizationListViewItem_o *v18; // x21
  System_Int64_array *v19; // x22
  UserServantEntity_o *userServantEntity; // x8
  int32_t v21; // w21
  struct BattleSetupInfo_o *v22; // x8
  QuestRestrictionInfo_o *v23; // x0
  struct BattleSetupInfo_o *v24; // x8
  struct BattleSetupInfo_o *v25; // x8
  Il2CppObject *v26; // x20
  struct BattleSetupInfo_o *v27; // x8
  int32_t eventId; // w22
  int64_t v29; // x21
  struct BattleSetupInfo_o *v30; // x8
  UserEventDeckEntity_o *v31; // x20
  __int64 v32; // x21
  int v33; // w8
  unsigned __int64 v34; // x22
  __int64 v35; // x26
  System_Int64_array *v36; // x23
  int32_t v37; // w24
  unsigned __int64 v38; // x22
  __int64 v39; // x26
  System_Int64_array *v40; // x23
  int v41; // w24
  struct BattleSetupInfo_o *v42; // x8
  int32_t k; // w20
  BalanceConfig_c *v44; // x0
  UserServantEntity_o *UserServant; // x0
  UserServantEntity_o *v46; // x21
  System_Int64_array *EquipList; // x23
  int32_t FriendPointUpVal; // w22
  int32_t m; // w19
  UserServantEntity_o *v50; // x0
  UserServantEntity_o *v51; // x20
  System_Int64_array *v52; // x22
  int32_t v53; // w21
  int32_t j; // w19
  PartyOrganizationListViewItem_o *v55; // x0
  PartyOrganizationListViewItem_o *v56; // x20
  System_Int64_array *v57; // x21
  UserServantEntity_o *v58; // x8
  int v59; // w20
  int32_t v60; // w21
  int32_t v61; // w21
  struct BattleSetupInfo_o *v62; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A5642F & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventQuestMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserDeckMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserEventDeckMaster___);
    sub_1B885B0(&Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__TryGetEntity__);
    sub_1B885B0(&LastUsedDeckNumberManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&OptionManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4A5642F = 1;
  }
  entity = 0LL;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_134;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  Instance = OptionManager__GetAutoSelectParty(0LL);
  if ( (Instance & 1) == 0 )
    goto LABEL_9;
  Instance = (__int64)this->fields.battleSetupInfo;
  if ( !Instance )
    goto LABEL_134;
  if ( *(_BYTE *)(Instance + 74) )
    goto LABEL_9;
  v60 = BattleSetupInfo__TargetQuestId((BattleSetupInfo_o *)Instance, 0LL);
  if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
  Instance = LastUsedDeckNumberManager__GetDeckNumber(v60, 0LL);
  if ( (int)Instance < 1 )
  {
LABEL_9:
    battleSetupInfo = this->fields.battleSetupInfo;
    if ( !battleSetupInfo || !MasterData_object )
      goto LABEL_134;
    Instance = DataMasterBase_object__object__long___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                 &entity,
                 battleSetupInfo->fields.deckId,
                 (const MethodInfo_311DB34 *)Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__TryGetEntity__);
  }
  else
  {
    v61 = Instance;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = NetworkManager__get_UserId(0LL);
    if ( !MasterData_object )
      goto LABEL_134;
    Instance = (__int64)UserDeckMaster__getDeck((UserDeckMaster_o *)MasterData_object, Instance, v61, 0LL);
    entity = (Il2CppObject *)Instance;
  }
  v7 = this->fields.battleSetupInfo;
  if ( !v7 )
    goto LABEL_134;
  questRestrictionInfo = v7->fields.questRestrictionInfo;
  if ( questRestrictionInfo )
    QuestRestrictionInfo__SetDeckInfo(questRestrictionInfo, (UserDeckEntity_o *)entity, 0LL);
  *(_QWORD *)&this->fields.friendPointUpVal = 0LL;
  p_friendPointUpVal = &this->fields.friendPointUpVal;
  this->fields.friendPointCampaignEntityList = 0LL;
  sub_1B88554(&this->fields.friendPointCampaignEntityList, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_134;
  v10 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_134;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventQuestMaster___);
  if ( !this->fields.battleSetupInfo )
    goto LABEL_134;
  v11 = (EventQuestMaster_o *)Instance;
  Instance = BattleSetupInfo__TargetQuestId(this->fields.battleSetupInfo, 0LL);
  v12 = this->fields.battleSetupInfo;
  if ( !v12 )
    goto LABEL_134;
  if ( !v11 )
    goto LABEL_134;
  Instance = (__int64)EventQuestMaster__GetEnabledEventCampaignForQuest(
                        v11,
                        Instance,
                        v12->fields.questPhase,
                        0LL,
                        7,
                        0LL);
  if ( !v10 )
    goto LABEL_134;
  Data_39092640 = EventCampaignMaster__getData_39092640(
                    (EventCampaignMaster_o *)v10,
                    24,
                    (EventEntity_array *)Instance,
                    0LL);
  this->fields.friendPointCampaignEntityList = Data_39092640;
  Instance = sub_1B88554(&this->fields.friendPointCampaignEntityList, Data_39092640);
  if ( this->fields.tutorialMode == 4 )
  {
    v14 = this->fields.battleSetupInfo;
    if ( !v14 )
      goto LABEL_134;
    if ( v14->fields.isChildFollower )
    {
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_134;
      if ( *(_QWORD *)(Instance + 72) )
      {
        for ( i = 0; ; ++i )
        {
          v16 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v16 = BalanceConfig_TypeInfo;
          }
          if ( i >= v16->static_fields->DeckMemberMax )
            break;
          Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( !Instance )
            goto LABEL_134;
          Instance = *(_QWORD *)(Instance + 72);
          if ( !Instance )
            goto LABEL_134;
          Member = PartyListViewItem__GetMember((PartyListViewItem_o *)Instance, i, 0LL);
          if ( Member )
          {
            v18 = Member;
            if ( Member->fields.userServantEntity )
            {
              Instance = (__int64)PartyOrganizationListViewItem__GetEquipList(Member, 0LL);
              if ( !v18->fields.userServantEntity )
                goto LABEL_134;
              v19 = (System_Int64_array *)Instance;
              Instance = UserServantEntity__getFriendPointUpVal(
                           v18->fields.userServantEntity,
                           (System_Int64_array *)Instance,
                           0LL);
              userServantEntity = v18->fields.userServantEntity;
              if ( !userServantEntity )
                goto LABEL_134;
              v21 = Instance;
              if ( UserServantEntity__getFriendPointUpType(userServantEntity, v19, 0LL) == 104
                && v21 > *p_friendPointUpVal )
              {
                this->fields.friendPointUpVal = v21;
                this->fields.friendPointUpMaxVal = v21;
              }
            }
          }
        }
        for ( j = 0; ; ++j )
        {
          if ( !v16->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v16);
            v16 = BalanceConfig_TypeInfo;
          }
          if ( j >= v16->static_fields->DeckMemberMax )
            break;
          Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( !Instance )
            goto LABEL_134;
          Instance = *(_QWORD *)(Instance + 72);
          if ( !Instance )
            goto LABEL_134;
          v55 = PartyListViewItem__GetMember((PartyListViewItem_o *)Instance, j, 0LL);
          if ( v55 )
          {
            v56 = v55;
            if ( v55->fields.userServantEntity )
            {
              Instance = (__int64)PartyOrganizationListViewItem__GetEquipList(v55, 0LL);
              if ( !v56->fields.userServantEntity )
                goto LABEL_134;
              v57 = (System_Int64_array *)Instance;
              Instance = UserServantEntity__getFriendPointUpVal(
                           v56->fields.userServantEntity,
                           (System_Int64_array *)Instance,
                           0LL);
              v58 = v56->fields.userServantEntity;
              if ( !v58 )
                goto LABEL_134;
              v59 = Instance;
              if ( UserServantEntity__getFriendPointUpType(v58, v57, 0LL) == 123 )
                *p_friendPointUpVal += v59;
            }
          }
          v16 = BalanceConfig_TypeInfo;
        }
        return;
      }
    }
  }
  v22 = this->fields.battleSetupInfo;
  if ( !v22 )
LABEL_134:
    sub_1B8880C(Instance, v4);
  v23 = v22->fields.questRestrictionInfo;
  if ( v23 )
  {
    Instance = QuestRestrictionInfo__IsServantNum(v23, 0LL);
    if ( (Instance & 1) != 0 )
      goto LABEL_49;
    v24 = this->fields.battleSetupInfo;
    if ( !v24 )
      goto LABEL_134;
    Instance = (__int64)v24->fields.questRestrictionInfo;
    if ( !Instance )
      goto LABEL_134;
    Instance = QuestRestrictionInfo__IsNpcMulitipleOrOnly((QuestRestrictionInfo_o *)Instance, 0LL);
    if ( (Instance & 1) != 0 )
      goto LABEL_49;
    v25 = this->fields.battleSetupInfo;
    if ( !v25 )
      goto LABEL_134;
    Instance = (__int64)v25->fields.questRestrictionInfo;
    if ( !Instance )
      goto LABEL_134;
    if ( *(int *)(Instance + 396) >= 1 )
    {
LABEL_49:
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        v26 = DataManager__GetMasterData_object_(
                (DataManager_o *)Instance,
                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserEventDeckMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = NetworkManager__get_UserId(0LL);
        v27 = this->fields.battleSetupInfo;
        if ( v27 )
        {
          eventId = v27->fields.eventId;
          v29 = Instance;
          Instance = BattleSetupInfo__TargetQuestId(this->fields.battleSetupInfo, 0LL);
          v30 = this->fields.battleSetupInfo;
          if ( v30 )
          {
            if ( v26 )
            {
              Instance = (__int64)UserEventDeckMaster__getDeckList(
                                    (UserEventDeckMaster_o *)v26,
                                    v29,
                                    eventId,
                                    Instance,
                                    v30->fields.questPhase,
                                    0LL);
              if ( Instance )
              {
                if ( !*(_DWORD *)(Instance + 24) )
                  goto LABEL_135;
                v31 = *(UserEventDeckEntity_o **)(Instance + 32);
                if ( v31 )
                {
                  Instance = (__int64)UserEventDeckEntity__GetUserServantList(
                                        *(UserEventDeckEntity_o **)(Instance + 32),
                                        0,
                                        0,
                                        0LL);
                  if ( Instance )
                  {
                    v32 = Instance;
                    v33 = *(_QWORD *)(Instance + 24);
                    if ( v33 >= 1 )
                    {
                      v34 = 0LL;
                      v35 = Instance + 32;
                      while ( v34 < (unsigned int)v33 )
                      {
                        if ( *(_QWORD *)(v35 + 8 * v34) )
                        {
                          Instance = (__int64)UserEventDeckEntity__GetEquipList(v31, v34, 0LL);
                          if ( v34 >= *(unsigned int *)(v32 + 24) )
                            break;
                          v36 = (System_Int64_array *)Instance;
                          Instance = *(_QWORD *)(v35 + 8 * v34);
                          if ( !Instance )
                            goto LABEL_134;
                          Instance = UserServantEntity__getFriendPointUpVal((UserServantEntity_o *)Instance, v36, 0LL);
                          if ( v34 >= *(unsigned int *)(v32 + 24) )
                            break;
                          v37 = Instance;
                          Instance = *(_QWORD *)(v35 + 8 * v34);
                          if ( !Instance )
                            goto LABEL_134;
                          Instance = UserServantEntity__getFriendPointUpType((UserServantEntity_o *)Instance, v36, 0LL);
                          if ( (_DWORD)Instance == 104 && v37 > *p_friendPointUpVal )
                          {
                            this->fields.friendPointUpVal = v37;
                            this->fields.friendPointUpMaxVal = v37;
                          }
                        }
                        v33 = *(_DWORD *)(v32 + 24);
                        if ( (__int64)++v34 >= v33 )
                          goto LABEL_71;
                      }
LABEL_135:
                      sub_1B88814(Instance, v4);
                    }
LABEL_71:
                    if ( v33 >= 1 )
                    {
                      v38 = 0LL;
                      v39 = v32 + 32;
                      while ( v38 < (unsigned int)v33 )
                      {
                        if ( *(_QWORD *)(v39 + 8 * v38) )
                        {
                          Instance = (__int64)UserEventDeckEntity__GetEquipList(v31, v38, 0LL);
                          if ( v38 >= *(unsigned int *)(v32 + 24) )
                            goto LABEL_135;
                          v40 = (System_Int64_array *)Instance;
                          Instance = *(_QWORD *)(v39 + 8 * v38);
                          if ( !Instance )
                            goto LABEL_134;
                          Instance = UserServantEntity__getFriendPointUpVal((UserServantEntity_o *)Instance, v40, 0LL);
                          if ( v38 >= *(unsigned int *)(v32 + 24) )
                            goto LABEL_135;
                          v41 = Instance;
                          Instance = *(_QWORD *)(v39 + 8 * v38);
                          if ( !Instance )
                            goto LABEL_134;
                          Instance = UserServantEntity__getFriendPointUpType((UserServantEntity_o *)Instance, v40, 0LL);
                          if ( (_DWORD)Instance == 123 )
                            *p_friendPointUpVal += v41;
                        }
                        v33 = *(_DWORD *)(v32 + 24);
                        if ( (__int64)++v38 >= v33 )
                          goto LABEL_82;
                      }
                      goto LABEL_135;
                    }
LABEL_82:
                    v42 = this->fields.battleSetupInfo;
                    if ( v42 )
                    {
                      Instance = (__int64)v42->fields.questRestrictionInfo;
                      if ( Instance )
                      {
                        QuestRestrictionInfo__SetDeckInfo_40430188((QuestRestrictionInfo_o *)Instance, v31, 0LL);
                        return;
                      }
                    }
                  }
                }
                else
                {
                  v62 = this->fields.battleSetupInfo;
                  if ( v62 )
                  {
                    Instance = (__int64)v62->fields.questRestrictionInfo;
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
      goto LABEL_134;
    }
    if ( !entity || QuestRestrictionInfo__IsSupportOnly((QuestRestrictionInfo_o *)Instance, 0LL) )
      return;
  }
  else if ( !entity )
  {
    return;
  }
  for ( k = 0; ; ++k )
  {
    v44 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v44 = BalanceConfig_TypeInfo;
    }
    if ( k >= v44->static_fields->DeckMemberMax )
      break;
    Instance = (__int64)entity;
    if ( !entity )
      goto LABEL_134;
    UserServant = UserDeckEntity__GetUserServant((UserDeckEntity_o *)entity, k, 0LL);
    if ( UserServant )
    {
      v46 = UserServant;
      Instance = (__int64)entity;
      if ( !entity )
        goto LABEL_134;
      EquipList = UserDeckEntity__GetEquipList((UserDeckEntity_o *)entity, k, 0LL);
      FriendPointUpVal = UserServantEntity__getFriendPointUpVal(v46, EquipList, 0LL);
      if ( UserServantEntity__getFriendPointUpType(v46, EquipList, 0LL) == 104 && FriendPointUpVal > *p_friendPointUpVal )
      {
        this->fields.friendPointUpVal = FriendPointUpVal;
        this->fields.friendPointUpMaxVal = FriendPointUpVal;
      }
    }
  }
  for ( m = 0; ; ++m )
  {
    if ( !v44->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v44);
      v44 = BalanceConfig_TypeInfo;
    }
    if ( m >= v44->static_fields->DeckMemberMax )
      break;
    Instance = (__int64)entity;
    if ( !entity )
      goto LABEL_134;
    v50 = UserDeckEntity__GetUserServant((UserDeckEntity_o *)entity, m, 0LL);
    if ( v50 )
    {
      v51 = v50;
      Instance = (__int64)entity;
      if ( !entity )
        goto LABEL_134;
      v52 = UserDeckEntity__GetEquipList((UserDeckEntity_o *)entity, m, 0LL);
      v53 = UserServantEntity__getFriendPointUpVal(v51, v52, 0LL);
      if ( UserServantEntity__getFriendPointUpType(v51, v52, 0LL) == 123 )
        *p_friendPointUpVal += v53;
    }
    v44 = BalanceConfig_TypeInfo;
  }
}


void __fastcall FollowerRootComponent___OnClickBack_b__71_0(
        FollowerRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  FollowerRootComponent_o *v7; // x0
  const MethodInfo *v8; // x1
  TerminalPramsManager_c *v9; // x0

  if ( (byte_4A56449 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&StringLiteral_3528/*"CLICK_BACK"*/);
    byte_4A56449 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  CommonUI__CloseConfirmDialog(Instance, 0LL);
  if ( isDecide )
  {
    FollowerRootComponent__QuestHintDialogResetTemporarilyId(v7, v8);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A5644B )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A5644B = 1;
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
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3528/*"CLICK_BACK"*/, 0LL);
      return;
    }
LABEL_14:
    sub_1B8880C(Instance, v6);
  }
  this->fields.state = 3;
}


void __fastcall FollowerRootComponent__beginFinish(FollowerRootComponent_o *this, const MethodInfo *method)
{
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x0
  FollowerRootComponent_c *v4; // x0
  struct FollowerRootComponent_StaticFields *static_fields; // x0

  if ( (byte_4A5642B & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&FollowerRootComponent_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    byte_4A5642B = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  this->fields.state = 0;
  if ( !operationItemListViewManager )
    goto LABEL_14;
  FollowerSelectItemListViewManager__DestroyList(operationItemListViewManager, 0LL);
  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    goto LABEL_14;
  operationItemListViewManager = (FollowerSelectItemListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                          (UnityEngine_Component_o *)operationItemListViewManager,
                                                                          0LL);
  if ( !operationItemListViewManager )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)operationItemListViewManager, 0, 0LL);
  v4 = FollowerRootComponent_TypeInfo;
  if ( !FollowerRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerRootComponent_TypeInfo);
    v4 = FollowerRootComponent_TypeInfo;
  }
  static_fields = v4->static_fields;
  static_fields->partyOrganizationAtlasCache = 0LL;
  sub_1B88554(&static_fields->partyOrganizationAtlasCache, 0LL);
  operationItemListViewManager = (FollowerSelectItemListViewManager_o *)this->fields.backSkinSprite;
  if ( !operationItemListViewManager
    || (operationItemListViewManager = (FollowerSelectItemListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                                (UnityEngine_Component_o *)operationItemListViewManager,
                                                                                0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)operationItemListViewManager, 0, 0LL),
        (operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__)) == 0LL) )
  {
LABEL_14:
    sub_1B8880C(operationItemListViewManager, method);
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

  if ( (byte_4A56420 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4A56420 = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v4);
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, (SceneRootComponent_o *)this, 0LL);
}


void __fastcall FollowerRootComponent__beginPause(FollowerRootComponent_o *this, const MethodInfo *method)
{
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x0

  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    sub_1B8880C(0LL, method);
  FollowerSelectItemListViewManager__SaveSortFilter(operationItemListViewManager, 0LL);
}


void __fastcall FollowerRootComponent__beginResume(
        FollowerRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  FollowerRootComponent_c *v5; // x0
  struct UIAtlas_o *partyOrganizationAtlas; // x21
  struct FollowerRootComponent_StaticFields *static_fields; // x0
  TitleInfoControl_o *titleInfo; // x21
  __int64 Instance; // x0
  unsigned __int64 selectItemNum; // x1
  __int64 methodPtr_low; // x10
  FollowerSelectItemListViewItem_o *Item; // x0
  struct BattleSetupInfo_o *battleSetupInfo; // x22
  FollowerSelectItemListViewItem_o *v14; // x21
  struct BattleSetupInfo_o *v15; // x8
  int klass_high; // w9
  struct BattleSetupInfo_o *v17; // x8
  struct BattleSetupInfo_o *v18; // x8
  Il2CppObject *v19; // x19
  Il2CppClass *v20; // x8
  __int64 v21; // x9
  Il2CppObject *v22; // x10
  Il2CppObject *v23; // x1
  struct BattleSetupInfo_o **p_battleSetupInfo; // x21
  struct BattleSetupInfo_o *v25; // x8
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x20
  int32_t tutorialMode; // w8
  struct BattleSetupInfo_o *v28; // x8
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  struct BattleSetupInfo_o *v30; // x8
  const MethodInfo *v31; // x4
  struct BattleSetupInfo_o *v32; // x8
  const MethodInfo *v33; // x1
  CommonUI_o *v34; // x20
  struct BattleSetupInfo_o *v35; // x8
  PartyListViewItem_o *v36; // x20
  UnityEngine_Component_o *v37; // x8
  int32_t i; // w21
  FollowerSelectItemListViewManager_o *v39; // x22
  struct BattleSetupInfo_o *v40; // x8
  const MethodInfo *v41; // x4
  struct BattleSetupInfo_o *v42; // x8
  FollowerSelectItemListViewManager_o *v43; // x22
  FollowerSelectItemListViewManager_CallbackFunc_o *v44; // x23
  PartyOrganizationListViewItem_o *Member; // x0
  struct FollowerInfo_o *followerInfo; // x8
  FollowerSelectItemListViewManager_o *v47; // x20
  int64_t userId; // x21
  struct QuestRestrictionInfo_o *v49; // x8
  BalanceConfig_c *v50; // x0
  int32_t v51; // w22
  PartyOrganizationListViewItem_o *v52; // x0
  struct FollowerInfo_o *v53; // x8

  if ( (byte_4A56429 & 1) == 0 )
  {
    sub_1B885B0(&AvalonSceneManager_TypeInfo);
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&BattleSetupInfo_TypeInfo);
    sub_1B885B0(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_FollowerRootComponent_OnSelectFollowerItem__);
    sub_1B885B0(&FollowerRootComponent_TypeInfo);
    sub_1B885B0(&RandomLimitCountManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1B885B0(&SupportInfoJump_TypeInfo);
    sub_1B885B0(&TutorialFlag_TypeInfo);
    byte_4A56429 = 1;
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
  sub_1B88554(&static_fields->partyOrganizationAtlasCache, partyOrganizationAtlas);
  titleInfo = this->fields.titleInfo;
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_118;
  if ( *(_BYTE *)(Instance + 80) )
  {
    selectItemNum = 0LL;
    if ( !titleInfo )
      goto LABEL_118;
  }
  else
  {
    selectItemNum = this->fields.tutorialMode != 2;
    if ( !titleInfo )
      goto LABEL_118;
  }
  TitleInfoControl__setBackBtnEnable(titleInfo, selectItemNum, 0LL);
  Instance = (__int64)this->fields.operationItemListViewManager;
  if ( !Instance )
    goto LABEL_118;
  FollowerSelectItemListViewManager__PlayClassButtonEffect((FollowerSelectItemListViewManager_o *)Instance, 0LL);
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
            goto LABEL_118;
          Item = FollowerSelectItemListViewManager__GetItem(
                   (FollowerSelectItemListViewManager_o *)Instance,
                   selectItemNum,
                   0LL);
          if ( Item )
          {
            battleSetupInfo = this->fields.battleSetupInfo;
            v14 = Item;
            this->fields.state = 5;
            Instance = FollowerSelectItemListViewItem__get_FollowerId(Item, 0LL);
            if ( battleSetupInfo )
            {
              battleSetupInfo->fields.followerId = Instance;
              v15 = this->fields.battleSetupInfo;
              if ( v15 )
              {
                v15->fields.followerClassId = (int32_t)data[3].klass;
                klass_high = HIDWORD(data[3].klass);
                if ( klass_high <= 0 )
                  klass_high = v14->fields.supportDeckId;
                v15->fields.followerSupportDeckId = klass_high;
                Instance = FollowerSelectItemListViewItem__get_FollowerType(v14, 0LL);
                v17 = this->fields.battleSetupInfo;
                if ( v17 )
                {
                  v17->fields.followerType = 0;
                  if ( ((unsigned int)Instance | 4) == 5 )
                    v17->fields.followerType = Instance;
                  if ( this->fields.operationItemListViewManager )
                  {
                    if ( !byte_4A5644A )
                    {
                      sub_1B885B0(&FollowerSelectItemListViewManager_TypeInfo);
                      byte_4A5644A = 1;
                    }
                    Instance = (__int64)FollowerSelectItemListViewManager_TypeInfo;
                    if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
                      Instance = (__int64)FollowerSelectItemListViewManager_TypeInfo;
                    }
                    v18 = this->fields.battleSetupInfo;
                    if ( v18 )
                    {
                      selectItemNum = (unsigned int)v18->fields.followerClassId;
                      if ( *(_DWORD *)(*(_QWORD *)(Instance + 184) + 8LL) != (_DWORD)selectItemNum )
                      {
                        Instance = (__int64)this->fields.operationItemListViewManager;
                        if ( !Instance )
                          goto LABEL_118;
                        if ( FollowerSelectItemListViewManager__ChangeClass(
                               (FollowerSelectItemListViewManager_o *)Instance,
                               selectItemNum,
                               0LL) )
                        {
                          Instance = (__int64)this->fields.operationItemListViewManager;
                          if ( !Instance )
                            goto LABEL_118;
                          ListViewManager__JumpItem((ListViewManager_o *)Instance, this->fields.selectItemNum, 0LL);
                        }
                      }
                      v19 = (Il2CppObject *)this->fields.battleSetupInfo;
                      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
                      if ( Instance )
                      {
                        AvalonSceneManager__pushScene((AvalonSceneManager_o *)Instance, 40, 1, v19, 0LL);
                        return;
                      }
                    }
                  }
                }
              }
            }
LABEL_118:
            sub_1B8880C(Instance, selectItemNum);
          }
        }
      }
    }
  }
  else
  {
    if ( data )
    {
      v20 = (Il2CppClass *)BattleSetupInfo_TypeInfo;
      v21 = LOBYTE(BattleSetupInfo_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(data->klass->vtable[0].methodPtr) >= (unsigned int)v21 )
      {
        if ( (BattleSetupInfo_c *)data->klass->_2.typeHierarchy[v21 - 1] == BattleSetupInfo_TypeInfo )
          v22 = data;
        else
          v22 = 0LL;
      }
      else
      {
        v22 = 0LL;
      }
      this->fields.battleSetupInfo = (struct BattleSetupInfo_o *)v22;
      p_battleSetupInfo = &this->fields.battleSetupInfo;
      if ( LOBYTE(data->klass->vtable[0].methodPtr) >= (unsigned int)v21 )
      {
        if ( data->klass->_2.typeHierarchy[v21 - 1] == v20 )
          v23 = data;
        else
          v23 = 0LL;
      }
      else
      {
        v23 = 0LL;
      }
    }
    else
    {
      v23 = 0LL;
      this->fields.battleSetupInfo = 0LL;
      p_battleSetupInfo = &this->fields.battleSetupInfo;
    }
    Instance = sub_1B88554(p_battleSetupInfo, v23);
    v25 = *p_battleSetupInfo;
    if ( !*p_battleSetupInfo )
      return;
    questRestrictionInfo = v25->fields.questRestrictionInfo;
    if ( !questRestrictionInfo )
      goto LABEL_118;
    if ( !QuestRestrictionInfo__IsMyServantOrNpcRestriction(v25->fields.questRestrictionInfo, 0LL)
      && (questRestrictionInfo->fields.isNoSupportBattle
       || questRestrictionInfo->fields.isFixedMyServantSingle
       || questRestrictionInfo->fields.isSupportOnlyForceBattle) )
    {
      goto LABEL_109;
    }
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    Instance = TutorialFlag__Get_37688364(102, 0LL);
    if ( (Instance & 1) == 0 )
    {
      v28 = *p_battleSetupInfo;
      if ( !*p_battleSetupInfo )
        goto LABEL_118;
      goto LABEL_80;
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
        v28 = this->fields.battleSetupInfo;
        if ( !v28 )
          goto LABEL_118;
LABEL_80:
        if ( v28->fields.isChildFollower )
        {
          FollowerRootComponent__ReturnBattleSetupMenu(this, (const MethodInfo *)selectItemNum);
          return;
        }
        goto LABEL_109;
      }
LABEL_68:
      FollowerRootComponent__ReturnSupportList(this, (const MethodInfo *)selectItemNum);
      return;
    }
    Instance = (__int64)this->fields.battleSetupInfo;
    this->fields.selectItemNum = -1;
    *(_QWORD *)&this->fields.tutorialMode = 0x100000003LL;
    if ( !Instance )
      goto LABEL_118;
    operationItemListViewManager = this->fields.operationItemListViewManager;
    Instance = BattleSetupInfo__TargetQuestId((BattleSetupInfo_o *)Instance, 0LL);
    v30 = this->fields.battleSetupInfo;
    if ( !v30 )
      goto LABEL_118;
    if ( !operationItemListViewManager )
      goto LABEL_118;
    FollowerSelectItemListViewManager__CreateList(
      operationItemListViewManager,
      Instance,
      v30->fields.questPhase,
      this->fields.friendPointUpVal,
      this->fields.friendPointUpMaxVal,
      this->fields.friendPointCampaignEntityList,
      v30->fields.questRestrictionInfo,
      0LL);
    v32 = this->fields.battleSetupInfo;
    if ( !v32 )
      goto LABEL_118;
    Instance = (__int64)this->fields.followerQuestInfomationDraw;
    if ( !Instance )
      goto LABEL_118;
    FollowerQuestInfomationDraw__SetInfomation(
      (FollowerQuestInfomationDraw_o *)Instance,
      v32->fields.questRestrictionInfo,
      0,
      0LL,
      v31);
    this->fields.state = 2;
    FollowerRootComponent__OnMoveEnd(this, v33);
    goto LABEL_75;
  }
  if ( this->fields.state == 6 )
    goto LABEL_68;
  v35 = this->fields.battleSetupInfo;
  if ( !v35 )
    goto LABEL_118;
  if ( !v35->fields.isChildFollower )
  {
    v49 = v35->fields.questRestrictionInfo;
    if ( !v49 )
      goto LABEL_118;
    if ( v49->fields.isNotTransitionSupportList )
    {
LABEL_109:
      FollowerRootComponent__ReturnQuestMenu(this, (const MethodInfo *)selectItemNum);
      return;
    }
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  RandomLimitCountManager__set_EnableRandomLimitCount(0, 0LL);
  RandomLimitCountManager__set_EnableRandomLimitCount(1, 0LL);
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_118;
  v36 = *(PartyListViewItem_o **)(Instance + 72);
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_118;
  v37 = (UnityEngine_Component_o *)this->fields.operationItemListViewManager;
  i = *(_DWORD *)(Instance + 56);
  this->fields.tutorialState = 0;
  this->fields.selectItemNum = -1;
  if ( !v37 )
    goto LABEL_118;
  Instance = (__int64)UnityEngine_Component__get_gameObject(v37, 0LL);
  if ( !Instance )
    goto LABEL_118;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (__int64)this->fields.battleSetupInfo;
  if ( !Instance )
    goto LABEL_118;
  v39 = this->fields.operationItemListViewManager;
  Instance = BattleSetupInfo__TargetQuestId((BattleSetupInfo_o *)Instance, 0LL);
  v40 = this->fields.battleSetupInfo;
  if ( !v40 )
    goto LABEL_118;
  if ( !v39 )
    goto LABEL_118;
  FollowerSelectItemListViewManager__CreateList(
    v39,
    Instance,
    v40->fields.questPhase,
    this->fields.friendPointUpVal,
    this->fields.friendPointUpMaxVal,
    this->fields.friendPointCampaignEntityList,
    v40->fields.questRestrictionInfo,
    0LL);
  v42 = this->fields.battleSetupInfo;
  if ( !v42 )
    goto LABEL_118;
  Instance = (__int64)this->fields.followerQuestInfomationDraw;
  if ( !Instance )
    goto LABEL_118;
  FollowerQuestInfomationDraw__SetInfomation(
    (FollowerQuestInfomationDraw_o *)Instance,
    v42->fields.questRestrictionInfo,
    i,
    0LL,
    v41);
  this->fields.state = 3;
  v43 = this->fields.operationItemListViewManager;
  v44 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1B887FC(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v44,
    (Il2CppObject *)this,
    (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
    0LL);
  if ( !v43 )
    goto LABEL_118;
  FollowerSelectItemListViewManager__SetMode(v43, 2, v44, 0LL);
  if ( v36 )
  {
    Instance = (__int64)this->fields.operationItemListViewManager;
    if ( !Instance )
      goto LABEL_118;
    if ( ListViewManager__get_ItemSum((ListViewManager_o *)Instance, 0LL) >= 3 )
    {
      if ( i )
      {
LABEL_100:
        if ( i >= 1 )
        {
          Member = PartyListViewItem__GetMember(v36, i - 1, 0LL);
          if ( Member )
          {
            followerInfo = Member->fields.followerInfo;
            if ( followerInfo )
            {
              v47 = this->fields.operationItemListViewManager;
              userId = followerInfo->fields.userId;
              Instance = (__int64)PartyOrganizationListViewItem__get_ServantLeader(Member, 0LL);
              if ( !Instance )
                goto LABEL_118;
              if ( !v47 )
                goto LABEL_118;
              Instance = FollowerSelectItemListViewManager__GetItemIndex(v47, userId, *(_QWORD *)(Instance + 40), 0LL);
              if ( !this->fields.operationItemListViewManager )
                goto LABEL_118;
              ListViewManager__JumpItem((ListViewManager_o *)this->fields.operationItemListViewManager, Instance, 0LL);
            }
          }
        }
      }
      else
      {
        for ( i = 1; ; ++i )
        {
          v50 = BalanceConfig_TypeInfo;
          v51 = i - 1;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v50 = BalanceConfig_TypeInfo;
          }
          if ( v51 >= v50->static_fields->DeckMemberMax )
            break;
          v52 = PartyListViewItem__GetMember(v36, v51, 0LL);
          if ( v52 )
          {
            v53 = v52->fields.followerInfo;
            if ( v53 )
            {
              if ( Follower__IsNotNpc(v53->fields.type, 0LL) )
                goto LABEL_100;
            }
          }
        }
      }
    }
  }
LABEL_75:
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v34 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    Instance = j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v34 )
    goto LABEL_118;
  CommonUI__maskFadein(v34, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
  SceneRootComponent__sendMessageResume((SceneRootComponent_o *)this, 0LL);
}


void __fastcall FollowerRootComponent__beginStartUp(
        FollowerRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  __int64 Instance; // x0
  const MethodInfo *v6; // x1
  __int64 v7; // x8
  struct BattleSetupInfo_o *v8; // x1
  const MethodInfo *v9; // x1
  Il2CppClass *v10; // x8
  __int64 methodPtr_low; // x9
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

  if ( (byte_4A56421 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&BattleSetupInfo_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ConstantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_NpcFollowerMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1B885B0(&Method_FollowerRootComponent_EndLoadCommonBg__);
    sub_1B885B0(&Method_FollowerRootComponent_EndLoadPartyOrganizationAtlasSimple__);
    sub_1B885B0(&FollowerRootComponent_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&RandomLimitCountManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1B885B0(&TutorialFlag_TypeInfo);
    sub_1B885B0(&StringLiteral_13519/*"TUTORIAL_SUPPORT_QUEST_ID"*/);
    sub_1B885B0(&StringLiteral_13520/*"TUTORIAL_SUPPORT_QUEST_PHASE"*/);
    sub_1B885B0(&StringLiteral_6409/*"FOLLOWER_SELECT_EXPLANATION2"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A56421 = 1;
  }
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_99;
  if ( PartyOrganizationUtility__ExistsTemporaryPartyInfo((PartyOrganizationUtility_o *)Instance, 0LL) )
  {
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_99;
    v7 = *(_QWORD *)(Instance + 120);
    if ( !v7 )
      goto LABEL_99;
    v8 = *(struct BattleSetupInfo_o **)(v7 + 48);
    this->fields.battleSetupInfo = v8;
    sub_1B88554(&this->fields.battleSetupInfo, v8);
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !Instance )
      goto LABEL_99;
    if ( !MissionNotifyManager__IsPause((MissionNotifyManager_o *)Instance, 0LL) )
    {
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
      if ( !Instance )
        goto LABEL_99;
      MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
    }
  }
  else
  {
    if ( data )
    {
      v10 = (Il2CppClass *)BattleSetupInfo_TypeInfo;
      methodPtr_low = LOBYTE(BattleSetupInfo_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(data->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
        v12 = (BattleSetupInfo_c *)data->klass->_2.typeHierarchy[methodPtr_low - 1] == BattleSetupInfo_TypeInfo
            ? (struct BattleSetupInfo_o *)data
            : 0LL;
      else
        v12 = 0LL;
      this->fields.battleSetupInfo = v12;
      p_battleSetupInfo = &this->fields.battleSetupInfo;
      if ( LOBYTE(data->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
        v13 = data->klass->_2.typeHierarchy[methodPtr_low - 1] == v10 ? data : 0LL;
      else
        v13 = 0LL;
    }
    else
    {
      v13 = 0LL;
      this->fields.battleSetupInfo = 0LL;
      p_battleSetupInfo = &this->fields.battleSetupInfo;
    }
    sub_1B88554(p_battleSetupInfo, v13);
  }
  if ( !this->fields.battleSetupInfo )
  {
    FollowerRootComponent__ReturnQuestMenu(this, v9);
    return;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  RandomLimitCountManager__set_EnableRandomLimitCount(1, 0LL);
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
  sub_1B88554(&static_fields->partyOrganizationAtlasCache, partyOrganizationAtlas);
  Instance = (__int64)this->fields.titleInfo;
  if ( !Instance )
    goto LABEL_99;
  TitleInfoControl__setTitleInfo_37187788((TitleInfoControl_o *)Instance, this->fields.myFSM, 3, 63, 0LL);
  Instance = (__int64)this->fields.titleInfo;
  if ( !Instance )
    goto LABEL_99;
  TitleInfoControl__setBackBtnEnable((TitleInfoControl_o *)Instance, 1, 0LL);
  Instance = (__int64)this->fields.operationItemListViewManager;
  if ( !Instance )
    goto LABEL_99;
  FollowerSelectItemListViewManager__DestroyList_30846608(
    (FollowerSelectItemListViewManager_o *)Instance,
    this->fields.battleSetupInfo,
    0LL);
  infomationLabel = this->fields.infomationLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_6409/*"FOLLOWER_SELECT_EXPLANATION2"*/, 0LL);
  if ( !infomationLabel )
    goto LABEL_99;
  UILabel__set_text(infomationLabel, (System_String_o *)Instance, 0LL);
  Instance = (__int64)BalanceConfig_TypeInfo;
  refreshButtonBase = this->fields.refreshButtonBase;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    Instance = j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  if ( !refreshButtonBase )
    goto LABEL_99;
  UnityEngine_GameObject__SetActive(
    refreshButtonBase,
    BalanceConfig_TypeInfo->static_fields->FollowerRefreshRestTime >= 0,
    0LL);
  Instance = (__int64)this->fields.battleSetupInfo;
  *(_QWORD *)&this->fields.tutorialMode = 0LL;
  this->fields.selectItemNum = -1;
  this->fields.isForceFadeOut = 0;
  this->fields.isInitRecommendRequest = 0;
  if ( !Instance )
    goto LABEL_99;
  v21 = *(_QWORD *)(Instance + 112) || *(_DWORD *)(Instance + 120) != 0;
  if ( (v21 & *(_BYTE *)(Instance + 73)) != 0
    && (BattleSetupInfo__SetRestriction((BattleSetupInfo_o *)Instance, 1, 0LL),
        (Instance = (__int64)this->fields.battleSetupInfo) == 0)
    || (v22 = *(_QWORD *)(Instance + 88)) == 0 )
  {
LABEL_99:
    sub_1B8880C(Instance, v6);
  }
  if ( *(_BYTE *)(v22 + 378) )
  {
LABEL_47:
    FollowerRootComponent__StartBattleSetupMenu(this, v6);
    return;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_37688364(102, 0LL) )
  {
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_99;
    Instance = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ConstantMaster___);
    if ( !Instance )
      goto LABEL_99;
    v23 = (ConstantMaster_o *)Instance;
    Instance = ConstantMaster__GetValue((ConstantMaster_o *)Instance, (System_String_o *)StringLiteral_13519/*"TUTORIAL_SUPPORT_QUEST_ID"*/, 0LL);
    battleSetupInfo = this->fields.battleSetupInfo;
    if ( !battleSetupInfo )
      goto LABEL_99;
    if ( battleSetupInfo->fields.questId == (_DWORD)Instance )
    {
      Instance = ConstantMaster__GetValue(v23, (System_String_o *)StringLiteral_13520/*"TUTORIAL_SUPPORT_QUEST_PHASE"*/, 0LL);
      battleSetupInfo = this->fields.battleSetupInfo;
      if ( !battleSetupInfo )
        goto LABEL_99;
      if ( battleSetupInfo->fields.questPhase == (_DWORD)Instance )
        *(_QWORD *)&this->fields.tutorialMode = 0x100000003LL;
    }
  }
  else
  {
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( !TutorialFlag__IsProgressDone(3, 0LL) )
      goto LABEL_47;
    Instance = (__int64)this->fields.infomationLabel;
    *(_QWORD *)&this->fields.tutorialMode = 0x100000002LL;
    if ( !Instance )
      goto LABEL_99;
    UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    battleSetupInfo = this->fields.battleSetupInfo;
    if ( !battleSetupInfo )
      goto LABEL_99;
  }
  Instance = (__int64)battleSetupInfo->fields.questRestrictionInfo;
  if ( !Instance )
    goto LABEL_99;
  if ( !*(_BYTE *)(Instance + 403)
    && !*(_BYTE *)(Instance + 401)
    && !*(_BYTE *)(Instance + 360)
    && !*(_BYTE *)(Instance + 379) )
  {
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
      if ( this->fields.battleSetupInfo )
      {
        v27 = (QuestPhaseMaster_o *)Instance;
        Instance = BattleSetupInfo__TargetQuestId(this->fields.battleSetupInfo, 0LL);
        v28 = this->fields.battleSetupInfo;
        if ( v28 )
        {
          if ( v27 )
          {
            Instance = (__int64)QuestPhaseMaster__GetEntity(v27, Instance, v28->fields.questPhase, 0LL);
            if ( Instance && *(_BYTE *)(Instance + 24) )
            {
              Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                goto LABEL_99;
              Instance = (__int64)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
              if ( !this->fields.battleSetupInfo )
                goto LABEL_99;
              v29 = (NpcFollowerMaster_o *)Instance;
              Instance = BattleSetupInfo__TargetQuestId(this->fields.battleSetupInfo, 0LL);
              v30 = this->fields.battleSetupInfo;
              if ( !v30 )
                goto LABEL_99;
              if ( !v29 )
                goto LABEL_99;
              Instance = (__int64)NpcFollowerMaster__GetQuestFollowerList(v29, Instance, v30->fields.questPhase, 0LL);
              if ( !Instance )
                goto LABEL_99;
              if ( !*(_QWORD *)(Instance + 24) )
              {
                *(_QWORD *)&this->fields.tutorialMode = 0x100000001LL;
                goto LABEL_74;
              }
            }
            v31 = this->fields.battleSetupInfo;
            if ( v31 )
            {
              Instance = (__int64)v31->fields.questRestrictionInfo;
              if ( Instance )
              {
                if ( QuestRestrictionInfo__IsMyServantOrNpcRestriction((QuestRestrictionInfo_o *)Instance, 0LL) )
                  this->fields.tutorialMode = 4;
                FollowerRootComponent__UpdateDeckInfomation(this, v32);
                v34 = this->fields.battleSetupInfo;
                if ( v34 )
                {
                  Instance = (__int64)this->fields.followerQuestInfomationDraw;
                  if ( Instance )
                  {
                    FollowerQuestInfomationDraw__SetInfomation(
                      (FollowerQuestInfomationDraw_o *)Instance,
                      v34->fields.questRestrictionInfo,
                      0,
                      0LL,
                      v33);
                    Instance = (__int64)this->fields.backSkinSprite;
                    if ( Instance )
                    {
                      Instance = (__int64)UnityEngine_Component__get_gameObject(
                                            (UnityEngine_Component_o *)Instance,
                                            0LL);
                      if ( Instance )
                      {
                        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
                        goto LABEL_70;
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
    goto LABEL_99;
  }
  this->fields.tutorialState = 1;
  if ( QuestRestrictionInfo__IsMyServantOrNpcRestriction((QuestRestrictionInfo_o *)Instance, 0LL) )
  {
    this->fields.isForceFadeOut = 1;
    this->fields.tutorialMode = 4;
LABEL_70:
    v25 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v25, (Il2CppObject *)this, Method_FollowerRootComponent_EndLoadCommonBg__, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__LoadUISkin(v25, 2, 1, 0LL);
    return;
  }
  this->fields.tutorialMode = 1;
LABEL_74:
  v26 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v26,
    (Il2CppObject *)this,
    Method_FollowerRootComponent_EndLoadPartyOrganizationAtlasSimple__,
    0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadPartyOrganizationAtlas(v26, 1, 0LL);
}


void __fastcall FollowerRootComponent__setBattleSetupFollowType(
        FollowerRootComponent_o *this,
        int32_t type,
        const MethodInfo *method)
{
  struct BattleSetupInfo_o *battleSetupInfo; // x8

  battleSetupInfo = this->fields.battleSetupInfo;
  if ( !battleSetupInfo )
    sub_1B8880C(this, type);
  battleSetupInfo->fields.followerType = 0;
  if ( (type | 4) == 5 )
    battleSetupInfo->fields.followerType = type;
}


void __fastcall FollowerRootComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19

  if ( (byte_4A5644C & 1) == 0 )
  {
    sub_1B885B0(&FollowerRootComponent___c_TypeInfo);
    byte_4A5644C = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(FollowerRootComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  FollowerRootComponent___c_TypeInfo->static_fields->__9 = (struct FollowerRootComponent___c_o *)v1;
  sub_1B88554(FollowerRootComponent___c_TypeInfo->static_fields, v1);
}


void __fastcall FollowerRootComponent___c___ctor(FollowerRootComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall FollowerRootComponent___c___Init_b__50_0(FollowerRootComponent___c_o *this, const MethodInfo *method)
{
  PartyOrganizationUtility_c *v2; // x0
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4A5644D & 1) == 0 )
  {
    sub_1B885B0(&PartyOrganizationUtility_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5644D = 1;
  }
  v2 = PartyOrganizationUtility_TypeInfo;
  if ( !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
    v2 = PartyOrganizationUtility_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(v2->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v4);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL);
}


void __fastcall FollowerRootComponent___c___OnSelectFollowerItem_b__65_0(
        FollowerRootComponent___c_o *this,
        const MethodInfo *method)
{
  PartyOrganizationUtility_c *v2; // x0
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4A5644E & 1) == 0 )
  {
    sub_1B885B0(&PartyOrganizationUtility_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5644E = 1;
  }
  v2 = PartyOrganizationUtility_TypeInfo;
  if ( !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
    v2 = PartyOrganizationUtility_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(v2->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v4);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL);
}