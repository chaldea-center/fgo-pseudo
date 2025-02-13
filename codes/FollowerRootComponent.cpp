void __fastcall FollowerRootComponent___cctor(const MethodInfo *method)
{
  struct FollowerRootComponent_StaticFields *static_fields; // x8

  if ( (byte_4BD75A8 & 1) == 0 )
  {
    sub_1C21E38(&FollowerRootComponent_TypeInfo);
    byte_4BD75A8 = 1;
  }
  static_fields = FollowerRootComponent_TypeInfo->static_fields;
  static_fields->LIST_UPDATE_MESSAGE_FONT_SIZE = 26;
  *(_QWORD *)&static_fields->RETURN_TERMINAL_MESSAGE_FONT_SIZE = 0xA0000001BLL;
  static_fields->RETURN_TERMINAL_MESSAGE_SPACING_Y = 5;
}


void __fastcall FollowerRootComponent___ctor(FollowerRootComponent_o *this, const MethodInfo *method)
{
  void *v3; // x1

  if ( (byte_4BD75A7 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD75A7 = 1;
  }
  v3 = StringLiteral_1/*""*/;
  this->fields.backupBgmName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C21DDC(&this->fields.backupBgmName, v3);
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0LL);
}


void __fastcall FollowerRootComponent__CallbackFollowerList(
        FollowerRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_4BD758E & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_11274/*"REQUEST_OK"*/);
    byte_4BD758E = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1C22094(0LL, result);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_11274/*"REQUEST_OK"*/, 0LL);
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
    sub_1C22094(0LL, result);
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

  if ( (byte_4BD759F & 1) == 0 )
  {
    sub_1C21E38(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    sub_1C21E38(&Method_FollowerRootComponent_OnSelectFollowerItem__);
    sub_1C21E38(&RandomLimitCountManager_TypeInfo);
    byte_4BD759F = 1;
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
        v9 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1C22084(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo),
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
    sub_1C22094(operationItemListViewManager, v4);
  }
  CommonConfirmDialog__Close((CommonConfirmDialog_o *)operationItemListViewManager, 0LL);
}


void __fastcall FollowerRootComponent__EndCloseShowServant(FollowerRootComponent_o *this, const MethodInfo *method)
{
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4BD7593 & 1) == 0 )
  {
    sub_1C21E38(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    sub_1C21E38(&Method_FollowerRootComponent_OnSelectFollowerItem__);
    byte_4BD7593 = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v4 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1C22084(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
    0LL);
  if ( !operationItemListViewManager )
    sub_1C22094(v5, v6);
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

  if ( (byte_4BD7596 & 1) == 0 )
  {
    sub_1C21E38(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    sub_1C21E38(&Method_FollowerRootComponent_OnSelectFollowerItem__);
    byte_4BD7596 = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v4 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1C22084(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
    0LL);
  if ( !operationItemListViewManager )
    sub_1C22094(v5, v6);
  FollowerSelectItemListViewManager__SetMode(operationItemListViewManager, 2, v4, 0LL);
}


void __fastcall FollowerRootComponent__EndCloseTutorialArrow(FollowerRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *tutorialMaskBase2; // x0

  if ( (byte_4BD75A1 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_8810/*"MENU_SELECT_ITEM"*/);
    byte_4BD75A1 = 1;
  }
  tutorialMaskBase2 = this->fields.tutorialMaskBase2;
  if ( !tutorialMaskBase2
    || (UnityEngine_GameObject__SetActive(tutorialMaskBase2, 0, 0LL),
        tutorialMaskBase2 = (UnityEngine_GameObject_o *)this->fields.myFSM,
        this->fields.state = 3,
        !tutorialMaskBase2) )
  {
    sub_1C22094(tutorialMaskBase2, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)tutorialMaskBase2, (System_String_o *)StringLiteral_8810/*"MENU_SELECT_ITEM"*/, 0LL);
}


void __fastcall FollowerRootComponent__EndLoadCommonBg(FollowerRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *backSkinSprite; // x0
  System_Action_o *v4; // x20

  if ( (byte_4BD7586 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&Method_FollowerRootComponent_EndLoadOutGameAtlas__);
    byte_4BD7586 = 1;
  }
  backSkinSprite = (UnityEngine_Component_o *)this->fields.backSkinSprite;
  if ( !backSkinSprite
    || (backSkinSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(backSkinSprite, 0LL)) == 0LL )
  {
    sub_1C22094(backSkinSprite, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)backSkinSprite, 1, 0LL);
  v4 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_FollowerRootComponent_EndLoadOutGameAtlas__, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadOutGameAtlas(v4, 0LL);
}


void __fastcall FollowerRootComponent__EndLoadEventAtlas(FollowerRootComponent_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4BD7588 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&Method_FollowerRootComponent_EndLoadPartyOrganizationAtlas__);
    byte_4BD7588 = 1;
  }
  v3 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_FollowerRootComponent_EndLoadPartyOrganizationAtlas__, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadPartyOrganizationAtlas(v3, 1, 0LL);
}


void __fastcall FollowerRootComponent__EndLoadOutGameAtlas(FollowerRootComponent_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4BD7587 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&Method_FollowerRootComponent_EndLoadEventAtlas__);
    byte_4BD7587 = 1;
  }
  v3 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
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

  if ( (byte_4BD7589 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4BD7589 = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    goto LABEL_15;
  FollowerSelectItemListViewManager__AdjustButton(operationItemListViewManager, 0LL);
  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    goto LABEL_15;
  FollowerSelectItemListViewManager__SetClassBoardInfo(operationItemListViewManager, 0LL);
  SceneRootComponent__beginStartUp_39920388((SceneRootComponent_o *)this, 0LL);
  if ( this->fields.isForceFadeOut )
  {
    this->fields.isForceFadeOut = 0;
    operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !operationItemListViewManager )
      goto LABEL_15;
    CommonUI__maskFadeInit((CommonUI_o *)operationItemListViewManager, 0LL);
    operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !operationItemListViewManager )
      goto LABEL_15;
    CommonUI__maskFadeout((CommonUI_o *)operationItemListViewManager, 1, 0.0, 0LL, 0LL);
    FollowerRootComponent__StartBattleSetupMenu(this, v4);
  }
  operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !operationItemListViewManager )
    goto LABEL_15;
  if ( PartyOrganizationUtility__ExistsTemporaryPartyInfo(
         (PartyOrganizationUtility_o *)operationItemListViewManager,
         0LL) )
  {
    operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( operationItemListViewManager )
    {
      CommonUI__maskFadeInit((CommonUI_o *)operationItemListViewManager, 0LL);
      operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( operationItemListViewManager )
      {
        CommonUI__maskFadeout((CommonUI_o *)operationItemListViewManager, 1, 0.0, 0LL, 0LL);
        this->fields.state = 0;
        FollowerRootComponent__Init(this, v5);
        return;
      }
    }
LABEL_15:
    sub_1C22094(operationItemListViewManager, method);
  }
}


void __fastcall FollowerRootComponent__EndOpenTutorialArrow(FollowerRootComponent_o *this, const MethodInfo *method)
{
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4BD75A5 & 1) == 0 )
  {
    sub_1C21E38(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    sub_1C21E38(&Method_FollowerRootComponent_OnSelectFollowerItem__);
    byte_4BD75A5 = 1;
  }
  this->fields.state = 3;
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v4 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1C22084(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
    0LL);
  if ( !operationItemListViewManager )
    sub_1C22094(v5, v6);
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
  if ( (byte_4BD759E & 1) == 0 )
  {
    sub_1C21E38(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    sub_1C21E38(&Method_FollowerRootComponent_CallbackRefresh__);
    sub_1C21E38(&Method_FollowerRootComponent_OnSelectFollowerItem__);
    sub_1C21E38(&Method_NetworkManager_getRequest_FollowerRecommendSupportListRequest___);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&NetworkManager_ResultCallbackFunc_TypeInfo);
    this = (FollowerRootComponent_o *)sub_1C21E38(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4BD759E = 1;
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
      this = (FollowerRootComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !this )
        goto LABEL_18;
      LOBYTE(this->fields.followerQuestInfomationDraw) = 1;
    }
    v6 = (NetworkManager_ResultCallbackFunc_o *)sub_1C22084(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v6,
      (Il2CppObject *)v4,
      Method_FollowerRootComponent_CallbackRefresh__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    this = (FollowerRootComponent_o *)NetworkManager__getRequest_object_(
                                        v6,
                                        (const MethodInfo_30345EC *)Method_NetworkManager_getRequest_FollowerRecommendSupportListRequest___);
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
    sub_1C22094(this, isDecide);
  }
  operationItemListViewManager = v4->fields.operationItemListViewManager;
  v10 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1C22084(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
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
  if ( (byte_4BD759D & 1) == 0 )
  {
    sub_1C21E38(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    sub_1C21E38(&Method_FollowerRootComponent_CallbackRefresh__);
    sub_1C21E38(&Method_FollowerRootComponent_OnSelectFollowerItem__);
    sub_1C21E38(&Method_NetworkManager_getRequest_FollowerListRequest___);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&NetworkManager_ResultCallbackFunc_TypeInfo);
    this = (FollowerRootComponent_o *)sub_1C21E38(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4BD759D = 1;
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
      this = (FollowerRootComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !this )
        goto LABEL_18;
      LOBYTE(this->fields.followerQuestInfomationDraw) = 1;
    }
    v6 = (NetworkManager_ResultCallbackFunc_o *)sub_1C22084(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v6,
      (Il2CppObject *)v4,
      Method_FollowerRootComponent_CallbackRefresh__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    this = (FollowerRootComponent_o *)NetworkManager__getRequest_object_(
                                        v6,
                                        (const MethodInfo_30345EC *)Method_NetworkManager_getRequest_FollowerListRequest___);
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
    sub_1C22094(this, isDecide);
  }
  operationItemListViewManager = v4->fields.operationItemListViewManager;
  v10 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1C22084(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
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

  if ( (byte_4BD75A0 & 1) == 0 )
  {
    sub_1C21E38(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    sub_1C21E38(&Method_FollowerRootComponent_OnSelectFollowerItem__);
    byte_4BD75A0 = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v4 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1C22084(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
    0LL);
  if ( !operationItemListViewManager )
    sub_1C22094(v5, v6);
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

  if ( (byte_4BD7592 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_FollowerRootComponent_EndCloseShowServant__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BD7592 = 1;
  }
  operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager
    || (ListViewManager__SetScrollView(
          operationItemListViewManager,
          this->fields.openScroll,
          this->fields.openOffset,
          0LL),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v6 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo),
        System_Action___ctor(v6, (Il2CppObject *)this, Method_FollowerRootComponent_EndCloseShowServant__, 0LL),
        !Instance) )
  {
    sub_1C22094(operationItemListViewManager, isDecide);
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

  if ( (byte_4BD7595 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_FollowerRootComponent_EndCloseShowServantEquip__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BD7595 = 1;
  }
  operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager
    || (ListViewManager__SetScrollView(
          operationItemListViewManager,
          this->fields.openScroll,
          this->fields.openOffset,
          0LL),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v6 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo),
        System_Action___ctor(v6, (Il2CppObject *)this, Method_FollowerRootComponent_EndCloseShowServantEquip__, 0LL),
        !Instance) )
  {
    sub_1C22094(operationItemListViewManager, isDecide);
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

  if ( (byte_4BD75A6 & 1) == 0 )
  {
    sub_1C21E38(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    sub_1C21E38(&Method_FollowerRootComponent_OnSelectFollowerItem__);
    byte_4BD75A6 = 1;
  }
  this->fields.state = 3;
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v4 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1C22084(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
    0LL);
  if ( !operationItemListViewManager )
    sub_1C22094(v5, v6);
  FollowerSelectItemListViewManager__SetMode(operationItemListViewManager, 2, v4, 0LL);
}


void __fastcall FollowerRootComponent__EndTutorialFollowerGuideNotification1(
        FollowerRootComponent_o *this,
        const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v5; // x21

  if ( (byte_4BD75A3 & 1) == 0 )
  {
    sub_1C21E38(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    sub_1C21E38(&Method_FollowerRootComponent_OnSelectFollowerItem__);
    byte_4BD75A3 = 1;
  }
  titleInfo = this->fields.titleInfo;
  this->fields.state = 3;
  if ( !titleInfo
    || (TitleInfoControl__setBackBtnEnable(titleInfo, 0, 0LL),
        operationItemListViewManager = this->fields.operationItemListViewManager,
        v5 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1C22084(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo),
        FollowerSelectItemListViewManager_CallbackFunc___ctor(
          v5,
          (Il2CppObject *)this,
          (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
          0LL),
        !operationItemListViewManager) )
  {
    sub_1C22094(titleInfo, method);
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

  if ( (byte_4BD75A4 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&FSUtility_TypeInfo);
    sub_1C21E38(&Method_FollowerRootComponent_EndOpenTutorialArrow__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BD75A4 = 1;
  }
  tutorialMaskBase2 = this->fields.tutorialMaskBase2;
  if ( !tutorialMaskBase2 )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(tutorialMaskBase2, 1, 0LL);
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  IsUnderVista = FSUtility__IsUnderVista(0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_FollowerRootComponent_EndOpenTutorialArrow__, 0LL);
  if ( !Instance )
LABEL_12:
    sub_1C22094(tutorialMaskBase2, method);
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

  if ( (byte_4BD758F & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&ClassButtonControlComponent_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_UserRecommendFollowerMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_UserRecommendFollowerMaster__UserRecommendFollowerEntity__long__TryGetSingleEntity__);
    sub_1C21E38(&Method_FollowerRootComponent_CallbackInitRecommendFollowerRequest__);
    sub_1C21E38(&Method_FollowerRootComponent_OnMoveEnd__);
    sub_1C21E38(&Method_NetworkManager_getRequest_FollowerRecommendSupportListRequest___);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1C21E38(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C21E38(&Method_FollowerRootComponent___c__Init_b__50_0__);
    sub_1C21E38(&FollowerRootComponent___c_TypeInfo);
    sub_1C21E38(&StringLiteral_8810/*"MENU_SELECT_ITEM"*/);
    byte_4BD758F = 1;
  }
  entity = 0LL;
  if ( !this->fields.state )
  {
    if ( this->fields.isInitRecommendRequest )
      goto LABEL_19;
    battleSetupInfo = (__int64)this->fields.battleSetupInfo;
    if ( !battleSetupInfo )
      goto LABEL_50;
    operationItemListViewManager = this->fields.operationItemListViewManager;
    battleSetupInfo = BattleSetupInfo__TargetQuestId((BattleSetupInfo_o *)battleSetupInfo, 0LL);
    v5 = this->fields.battleSetupInfo;
    if ( !v5 || !operationItemListViewManager )
      goto LABEL_50;
    InitialDisplayClass = FollowerSelectItemListViewManager__GetInitialDisplayClass(
                            operationItemListViewManager,
                            battleSetupInfo,
                            v5->fields.questPhase,
                            1,
                            0LL);
    if ( !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
    if ( !ClassButtonControlComponent__IsRecommendSupportGroupType(InitialDisplayClass, 0LL) )
      goto LABEL_19;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    battleSetupInfo = (__int64)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserRecommendFollowerMaster___);
    if ( !battleSetupInfo )
      goto LABEL_50;
    if ( !DataMasterBase_object__object__long___TryGetSingleEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)battleSetupInfo,
            &entity,
            (const MethodInfo_325E450 *)Method_DataMasterBase_UserRecommendFollowerMaster__UserRecommendFollowerEntity__long__TryGetSingleEntity__) )
      goto LABEL_41;
    battleSetupInfo = (__int64)this->fields.battleSetupInfo;
    if ( !battleSetupInfo )
      goto LABEL_50;
    v7 = entity;
    battleSetupInfo = BattleSetupInfo__TargetQuestId((BattleSetupInfo_o *)battleSetupInfo, 0LL);
    v8 = this->fields.battleSetupInfo;
    if ( !v8 || !v7 )
      goto LABEL_50;
    if ( UserRecommendFollowerEntity__IsEnableSupport(
           (UserRecommendFollowerEntity_o *)v7,
           battleSetupInfo,
           v8->fields.questPhase,
           0LL) )
    {
LABEL_19:
      battleSetupInfo = (__int64)this->fields.operationItemListViewManager;
      if ( !battleSetupInfo )
        goto LABEL_50;
      battleSetupInfo = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)battleSetupInfo, 0LL);
      if ( !battleSetupInfo )
        goto LABEL_50;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)battleSetupInfo, 1, 0LL);
      battleSetupInfo = (__int64)this->fields.battleSetupInfo;
      if ( !battleSetupInfo )
        goto LABEL_50;
      v9 = this->fields.operationItemListViewManager;
      battleSetupInfo = BattleSetupInfo__TargetQuestId((BattleSetupInfo_o *)battleSetupInfo, 0LL);
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
        0LL);
      battleSetupInfo = (__int64)this->fields.operationItemListViewManager;
      if ( !battleSetupInfo )
        goto LABEL_50;
      if ( ListViewManager__get_ItemSum((ListViewManager_o *)battleSetupInfo, 0LL) > 0 )
        goto LABEL_28;
      battleSetupInfo = (__int64)this->fields.operationItemListViewManager;
      if ( !battleSetupInfo )
        goto LABEL_50;
      if ( FollowerSelectItemListViewManager__GetItemCount((FollowerSelectItemListViewManager_o *)battleSetupInfo, 0LL) < 1 )
      {
        battleSetupInfo = (__int64)this->fields.myFSM;
        this->fields.selectItemNum = -1;
        if ( battleSetupInfo )
        {
          PlayMakerFSM__SendEvent((PlayMakerFSM_o *)battleSetupInfo, (System_String_o *)StringLiteral_8810/*"MENU_SELECT_ITEM"*/, 0LL);
          return;
        }
      }
      else
      {
LABEL_28:
        battleSetupInfo = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
        if ( !battleSetupInfo )
          goto LABEL_50;
        if ( *(_BYTE *)(battleSetupInfo + 148) )
        {
          battleSetupInfo = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
            _9__50_0 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
            System_Action___ctor(_9__50_0, v14, Method_FollowerRootComponent___c__Init_b__50_0__, 0LL);
            static_fields = FollowerRootComponent___c_TypeInfo->static_fields;
            static_fields->__9__50_0 = _9__50_0;
            battleSetupInfo = sub_1C21DDC(&static_fields->__9__50_0, _9__50_0);
          }
          if ( !v11 )
            goto LABEL_50;
          PartyOrganizationUtility__OpenFriendshipUpItemExpiredDialog(v11, _9__50_0, 0LL);
        }
        this->fields.state = 2;
        v16 = this->fields.operationItemListViewManager;
        v17 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
        System_Action___ctor(v17, (Il2CppObject *)this, Method_FollowerRootComponent_OnMoveEnd__, 0LL);
        if ( v16 )
        {
          FollowerSelectItemListViewManager__SetMode_31781908(v16, 1, v17, 0LL);
          return;
        }
      }
    }
    else
    {
LABEL_41:
      v18 = (NetworkManager_ResultCallbackFunc_o *)sub_1C22084(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v18,
        (Il2CppObject *)this,
        Method_FollowerRootComponent_CallbackInitRecommendFollowerRequest__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      battleSetupInfo = (__int64)NetworkManager__getRequest_object_(
                                   v18,
                                   (const MethodInfo_30345EC *)Method_NetworkManager_getRequest_FollowerRecommendSupportListRequest___);
      if ( this->fields.battleSetupInfo )
      {
        v19 = (FollowerRecommendSupportListRequest_o *)battleSetupInfo;
        battleSetupInfo = BattleSetupInfo__TargetQuestId(this->fields.battleSetupInfo, 0LL);
        v20 = this->fields.battleSetupInfo;
        if ( v20 )
        {
          if ( v19 )
          {
            FollowerRecommendSupportListRequest__beginRequest(v19, 0, battleSetupInfo, v20->fields.questPhase, 0LL);
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
LABEL_50:
    sub_1C22094(battleSetupInfo, method);
  }
}


void __fastcall FollowerRootComponent__OnClickBack(FollowerRootComponent_o *this, const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v4; // x1
  SceneRootComponent_o *StackedRootComponent; // x0
  __int64 methodPtr_low; // x10
  UnityEngine_Component_o *v7; // x20
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  _QWORD *monitor; // x8
  int v11; // w8
  void *v12; // x19
  unsigned int v13; // w20
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  __int64 *v17; // x8
  _QWORD *v18; // x0
  System_Reflection_MethodBase_o *v19; // x0
  TerminalPramsManager_c *v20; // x0
  int lastPlayQuestConsumeAp; // w21
  System_String_o **v22; // x8
  System_String_o *v23; // x20
  System_String_o *v24; // x21
  Il2CppObject *v25; // x22
  System_String_o *v26; // x23
  System_String_o *v27; // x24
  CommonConfirmDialog_ClickDelegate_o *v28; // x25

  if ( (byte_4BD75A2 & 1) == 0 )
  {
    sub_1C21E38(&BattleRootComponent_TypeInfo);
    sub_1C21E38(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Component_GetComponentsInChildren_Camera___);
    sub_1C21E38(&Method_FollowerRootComponent_OnClickBack__);
    sub_1C21E38(&Method_FollowerRootComponent__OnClickBack_b__71_0__);
    sub_1C21E38(&FollowerRootComponent_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1C21E38(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&StringLiteral_6575/*"FOLLOWER_SELECT_BACK_TO_QUEST_NO_AP_CONSUME_AP0"*/);
    sub_1C21E38(&StringLiteral_3578/*"CLICK_BACK"*/);
    sub_1C21E38(&StringLiteral_6574/*"FOLLOWER_SELECT_BACK_TO_QUEST_NO_AP_CONSUME"*/);
    sub_1C21E38(&StringLiteral_6573/*"FOLLOWER_SELECT_BACK_TITLE"*/);
    sub_1C21E38(&StringLiteral_3814/*"COMMON_CONFIRM_NO"*/);
    sub_1C21E38(&StringLiteral_3819/*"COMMON_CONFIRM_YES"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    sub_1C21E38(&StringLiteral_3579/*"CLICK_BACK_BATTLE_SETUP"*/);
    byte_4BD75A2 = 1;
  }
  if ( this->fields.state == 3 && !this->fields.tutorialState )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( !Instance )
      goto LABEL_62;
    if ( !*((_BYTE *)Instance + 148) )
      goto LABEL_34;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_62;
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
        v8 = (_QWORD *)sub_1C21E50(Method_FollowerRootComponent_OnClickBack__);
      v9 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v8, v8[4]);
      OverwriteAssetSoundName__PlaySystemSe(v9, 1, 0, 0LL);
      this->fields.state = 4;
      if ( v7 )
      {
        Instance = UnityEngine_Component__get_gameObject(v7, 0LL);
        if ( Instance )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
          monitor = v7[3].monitor;
          if ( monitor )
          {
            Instance = (void *)monitor[64];
            if ( Instance )
            {
              BattleResultComponent__EndResult((BattleResultComponent_o *)Instance, 0LL);
              Instance = this->fields.myFSM;
              if ( Instance )
              {
                PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3578/*"CLICK_BACK"*/, 0LL);
                Instance = UnityEngine_Component__get_transform(v7, 0LL);
                if ( Instance )
                {
                  Instance = UnityEngine_Component__GetComponentsInChildren_object__49967896(
                               (UnityEngine_Component_o *)Instance,
                               (const MethodInfo_2FA7318 *)Method_UnityEngine_Component_GetComponentsInChildren_Camera___);
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
                        sub_1C2209C(Instance, v4);
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
LABEL_34:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( !Instance )
        goto LABEL_62;
      if ( AvalonSceneManager__IsStackScene((AvalonSceneManager_o *)Instance, 0LL) )
        goto LABEL_40;
      Instance = SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_62;
      if ( *((int *)Instance + 12) > 0 )
        goto LABEL_40;
      Instance = SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_62;
      if ( *((_BYTE *)Instance + 161) )
      {
LABEL_40:
        v14 = Method_FollowerRootComponent_OnClickBack__;
        if ( (*((_BYTE *)Method_FollowerRootComponent_OnClickBack__ + 83) & 2) != 0 )
          v14 = (_QWORD *)sub_1C21E50(Method_FollowerRootComponent_OnClickBack__);
        v15 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v14, v14[4]);
        OverwriteAssetSoundName__PlaySystemSe(v15, 1, 0, 0LL);
        battleSetupInfo = this->fields.battleSetupInfo;
        this->fields.state = 4;
        if ( battleSetupInfo )
        {
          Instance = this->fields.myFSM;
          if ( Instance )
          {
            if ( battleSetupInfo->fields.isChildFollower )
              v17 = &StringLiteral_3579/*"CLICK_BACK_BATTLE_SETUP"*/;
            else
              v17 = &StringLiteral_3578/*"CLICK_BACK"*/;
            PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v17, 0LL);
            return;
          }
        }
      }
      else
      {
        v18 = Method_FollowerRootComponent_OnClickBack__;
        if ( (*((_BYTE *)Method_FollowerRootComponent_OnClickBack__ + 83) & 2) != 0 )
          v18 = (_QWORD *)sub_1C21E50(Method_FollowerRootComponent_OnClickBack__);
        v19 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v18, v18[4]);
        OverwriteAssetSoundName__PlaySystemSe(v19, 1, 0, 0LL);
        v20 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v20 = TerminalPramsManager_TypeInfo;
        }
        lastPlayQuestConsumeAp = v20->static_fields->lastPlayQuestConsumeAp;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v22 = (System_String_o **)&StringLiteral_6574/*"FOLLOWER_SELECT_BACK_TO_QUEST_NO_AP_CONSUME"*/;
        if ( lastPlayQuestConsumeAp <= 0 )
          v22 = (System_String_o **)&StringLiteral_6575/*"FOLLOWER_SELECT_BACK_TO_QUEST_NO_AP_CONSUME_AP0"*/;
        v23 = LocalizationManager__Get(*v22, 0LL);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v24 = LocalizationManager__Get((System_String_o *)StringLiteral_6573/*"FOLLOWER_SELECT_BACK_TITLE"*/, 0LL);
        v25 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v26 = LocalizationManager__Get((System_String_o *)StringLiteral_3819/*"COMMON_CONFIRM_YES"*/, 0LL);
        v27 = LocalizationManager__Get((System_String_o *)StringLiteral_3814/*"COMMON_CONFIRM_NO"*/, 0LL);
        v28 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C22084(CommonConfirmDialog_ClickDelegate_TypeInfo);
        CommonConfirmDialog_ClickDelegate___ctor(
          v28,
          (Il2CppObject *)this,
          Method_FollowerRootComponent__OnClickBack_b__71_0__,
          0LL);
        Instance = FollowerRootComponent_TypeInfo;
        if ( !FollowerRootComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FollowerRootComponent_TypeInfo);
          Instance = FollowerRootComponent_TypeInfo;
        }
        if ( v25 )
        {
          CommonUI__OpenConfirmDecideDlg(
            (CommonUI_o *)v25,
            v24,
            v23,
            v26,
            v27,
            v28,
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
    sub_1C22094(Instance, v4);
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

  if ( (byte_4BD759B & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    sub_1C21E38(&Method_FollowerRootComponent_EndTutorialFollowerCommonGuide__);
    sub_1C21E38(&Method_FollowerRootComponent_EndTutorialFollowerGuideNotification1__);
    sub_1C21E38(&Method_FollowerRootComponent_EndTutorialFollowerGuideNotification2__);
    sub_1C21E38(&Method_FollowerRootComponent_OnSelectFollowerItem__);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C21E38(&StringLiteral_13751/*"TUTORIAL_MESSAGE_FOLLOWER2"*/);
    sub_1C21E38(&StringLiteral_13750/*"TUTORIAL_MESSAGE_FOLLOWER1"*/);
    byte_4BD759B = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( this->fields.tutorialState == 1 )
    {
      tutorialMode = this->fields.tutorialMode;
      *(_QWORD *)&this->fields.tutorialState = 0x200000002LL;
      if ( tutorialMode == 3 )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v5 = LocalizationManager__Get((System_String_o *)StringLiteral_13751/*"TUTORIAL_MESSAGE_FOLLOWER2"*/, 0LL);
        v6 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
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
        sub_1C22094(battleSetupInfo, method);
      }
      if ( tutorialMode == 2 )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v5 = LocalizationManager__Get((System_String_o *)StringLiteral_13750/*"TUTORIAL_MESSAGE_FOLLOWER1"*/, 0LL);
        v6 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
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
          v13 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
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
      v16 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1C22084(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
      FollowerSelectItemListViewManager_CallbackFunc___ctor(
        v16,
        (Il2CppObject *)this,
        (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
        0LL);
      if ( !operationItemListViewManager )
        goto LABEL_27;
      FollowerSelectItemListViewManager__SetMode(operationItemListViewManager, 2, v16, 0LL);
      battleSetupInfo = (BattleSetupInfo_o *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
  const MethodInfo *v7; // x3
  __int64 v8; // x8
  __int64 v9; // x20
  SkillInfo_o *v10; // x22
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  Il2CppObject *v13; // x20
  System_String_o *v14; // x20
  System_String_o *v15; // x21
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  Il2CppObject *v19; // x0
  System_String_o *v20; // x0
  int32_t v21; // w20
  _QWORD *v22; // x0
  System_Reflection_MethodBase_o *v23; // x0
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v25; // x0
  intptr_t v26; // w2
  _QWORD *v27; // x0
  System_Reflection_MethodBase_o *v28; // x0
  const MethodInfo *v29; // x2
  __int64 v30; // x20
  SkillInfo_o *v31; // x24
  Il2CppObject *Entity; // x21
  FollowerRootComponent_o *v33; // x20
  System_String_o *v34; // x21
  System_String_o *v35; // x22
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  Il2CppObject *v39; // x0
  System_String_o *v40; // x0
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  FollowerRootComponent_o *v44; // x21
  Il2CppObject *v45; // x0
  System_String_o *v46; // x0
  int32_t tutorialMode; // w21
  System_String_o *v48; // x20
  _QWORD *v49; // x0
  System_Reflection_MethodBase_o *v50; // x0
  bool v51; // w22
  CommonConfirmDialog_ClickDelegate_o *v52; // x21
  bool v53; // w20
  CommonConfirmDialog_o *commonConfirmDialog; // x19
  System_String_o *v55; // x20
  FollowerRootComponent_o *v56; // x22
  int32_t v57; // w8
  _QWORD *v58; // x0
  System_Reflection_MethodBase_o *v59; // x0
  FollowerRootComponent_o *v60; // x20
  FollowerRootComponent_o *v61; // x20
  FollowerRootComponent___c_c *v62; // x8
  System_Action_o *_9__65_0; // x21
  Il2CppObject *v64; // x22
  struct FollowerRootComponent___c_StaticFields *static_fields; // x0
  _QWORD *v66; // x0
  System_Reflection_MethodBase_o *v67; // x0
  int32_t v68; // w8
  __int64 *v69; // x8
  FollowerRootComponent_o *v70; // x20
  _QWORD *v71; // x0
  System_Reflection_MethodBase_o *v72; // x0
  const MethodInfo *v73; // x2
  _QWORD *v74; // x0
  System_Reflection_MethodBase_o *v75; // x0
  int32_t v76; // w8
  struct BattleSetupInfo_o *v77; // x8
  NetworkManager_ResultCallbackFunc_o *v78; // x20
  FollowerRecommendSupportListRequest_o *v79; // x20
  struct BattleSetupInfo_o *v80; // x8
  Il2CppObject *Instance; // x20
  System_String_o *v82; // x21
  System_String_o *v83; // x22
  System_Action_o *v84; // x23
  int tutorialMode_low; // w20
  _QWORD *v86; // x0
  FollowerSelectItemListViewItem_o *v87; // x20
  const MethodInfo *v88; // x1
  __int64 v89; // x21
  __int64 v90; // x22
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  int64_t userEquipId; // x21
  __int64 v93; // x22
  const MethodInfo *v94; // x1
  const MethodInfo *v95; // x1
  EquipTargetInfo_o *EquipInfo; // x21
  __int64 v97; // x22
  __int64 v98; // x23
  _QWORD *v99; // x0
  System_Reflection_MethodBase_o *v100; // x0
  const MethodInfo *v101; // x3
  struct FollowerInfo_o *followerInfo; // x8
  int32_t type; // w8
  int32_t v104; // w2
  _QWORD *v105; // x0
  FollowerSelectItemListViewManager_CallbackFunc_o *v106; // x21
  int32_t v107; // w1
  _QWORD *v108; // x0
  System_Reflection_MethodBase_o *v109; // x0
  Il2CppObject *v110; // x20
  System_Action_o *v111; // x21
  int m_CancellationTokenSource; // [xsp+30h] [xbp-70h] BYREF
  int32_t lv; // [xsp+34h] [xbp-6Ch] BYREF
  System_String_o *detail; // [xsp+38h] [xbp-68h] BYREF
  System_String_o *name; // [xsp+40h] [xbp-60h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+48h] [xbp-58h] BYREF
  System_String_o *v117; // [xsp+50h] [xbp-50h] BYREF
  System_String_o *v118; // [xsp+58h] [xbp-48h] BYREF
  SkillInfo_array *v119; // [xsp+68h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v120; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v121; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v122; // 0:x0.16

  v6 = this;
  if ( (byte_4BD759C & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    sub_1C21E38(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C21E38(&FollowerListRequest_TypeInfo);
    sub_1C21E38(&FollowerRecommendSupportListRequest_TypeInfo);
    sub_1C21E38(&Method_FollowerRootComponent_CallbackRefresh__);
    sub_1C21E38(&Method_FollowerRootComponent_EndCloseTutorialArrow__);
    sub_1C21E38(&Method_FollowerRootComponent_EndRecommendRefreshConfirm__);
    sub_1C21E38(&Method_FollowerRootComponent_EndRefreshConfirm__);
    sub_1C21E38(&Method_FollowerRootComponent_EndRefreshRest__);
    sub_1C21E38(&Method_FollowerRootComponent_OnSelectFollowerItem__);
    sub_1C21E38(&FollowerRootComponent_TypeInfo);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_NetworkManager_getRequest_FollowerRecommendSupportListRequest___);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1C21E38(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C21E38(&Method_FollowerRootComponent___c__OnSelectFollowerItem_b__65_0__);
    sub_1C21E38(&FollowerRootComponent___c_TypeInfo);
    sub_1C21E38(&StringLiteral_6598/*"FOLLOWER_SELECT_REFRESH_TITLE"*/);
    sub_1C21E38(&StringLiteral_8810/*"MENU_SELECT_ITEM"*/);
    sub_1C21E38(&StringLiteral_8819/*"MENU_SHOW_SUPPORT"*/);
    sub_1C21E38(&StringLiteral_6595/*"FOLLOWER_SELECT_REFRESH_MESSAGE"*/);
    sub_1C21E38(&StringLiteral_117/*" "*/);
    sub_1C21E38(&StringLiteral_6596/*"FOLLOWER_SELECT_REFRESH_REST_MESSAGE"*/);
    sub_1C21E38(&StringLiteral_8706/*"MASTER_EQSKILL_LV_TXT"*/);
    sub_1C21E38(&StringLiteral_3025/*"BATTLE_SKILLCHARGETURN"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    this = (FollowerRootComponent_o *)sub_1C21E38(&StringLiteral_6597/*"FOLLOWER_SELECT_REFRESH_REST_TITLE"*/);
    byte_4BD759C = 1;
  }
  v119 = 0LL;
  v117 = 0LL;
  v118 = 0LL;
  name = 0LL;
  skillInfoList = 0LL;
  detail = 0LL;
  if ( v6->fields.state != 3 )
    return;
  v6->fields.selectItemNum = n;
  switch ( kind )
  {
    case 1:
      if ( v6->fields.tutorialState )
        goto LABEL_107;
      this = (FollowerRootComponent_o *)v6->fields.operationItemListViewManager;
      if ( !this )
        goto LABEL_189;
      this = (FollowerRootComponent_o *)FollowerSelectItemListViewManager__GetItem(
                                          (FollowerSelectItemListViewManager_o *)this,
                                          n,
                                          0LL);
      if ( !this )
        goto LABEL_189;
      v70 = this;
      if ( LOBYTE(this->fields.tutorialMode)
        || FollowerSelectItemListViewItem__get_SvtId(
             (FollowerSelectItemListViewItem_o *)this,
             *(const MethodInfo **)&kind) <= 0 )
      {
        goto LABEL_168;
      }
      v71 = Method_FollowerRootComponent_OnSelectFollowerItem__;
      if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
        v71 = (_QWORD *)sub_1C21E50(Method_FollowerRootComponent_OnSelectFollowerItem__);
      v72 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v71, v71[4]);
      OverwriteAssetSoundName__PlaySystemSe(v72, 0, 0, 0LL);
      FollowerRootComponent__SelectShowServant(v6, (FollowerSelectItemListViewItem_o *)v70, v73);
      return;
    case 2:
    case 3:
    case 4:
      v27 = Method_FollowerRootComponent_OnSelectFollowerItem__;
      if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
        v27 = (_QWORD *)sub_1C21E50(Method_FollowerRootComponent_OnSelectFollowerItem__);
      v28 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v27, v27[4]);
      OverwriteAssetSoundName__PlaySystemSe(v28, 0, 0, 0LL);
      this = (FollowerRootComponent_o *)v6->fields.operationItemListViewManager;
      if ( !this )
        goto LABEL_189;
      this = (FollowerRootComponent_o *)FollowerSelectItemListViewManager__GetItem(
                                          (FollowerSelectItemListViewManager_o *)this,
                                          v6->fields.selectItemNum,
                                          0LL);
      v30 = kind == 3 ? 1LL : 2LL * (kind == 4);
      if ( !this )
        goto LABEL_189;
      this = (FollowerRootComponent_o *)FollowerSelectItemListViewItem__GetSkillInfo(
                                          (FollowerSelectItemListViewItem_o *)this,
                                          &v119,
                                          v29);
      if ( !v119 )
        goto LABEL_189;
      if ( (unsigned int)v30 >= v119->max_length )
        goto LABEL_190;
      v31 = v119->m_Items[v30];
      if ( !v31 || v31->fields.id < 1 || v31->fields.lv < 1 )
        goto LABEL_156;
      this = (FollowerRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_189;
      this = (FollowerRootComponent_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_SkillMaster___);
      if ( !this )
        goto LABEL_189;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                 v31->fields.id,
                 (const MethodInfo_325BDC8 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      this = (FollowerRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_189;
      this = (FollowerRootComponent_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_SkillLvMaster___);
      if ( !this )
        goto LABEL_189;
      this = (FollowerRootComponent_o *)SkillLvMaster__GetEntity(
                                          (SkillLvMaster_o *)this,
                                          v31->fields.id,
                                          v31->fields.lv,
                                          0LL);
      if ( !Entity )
        goto LABEL_189;
      v33 = this;
      SkillEntity__getSkillMessageInfo((SkillEntity_o *)Entity, &v118, &v117, v31->fields.lv, 0LL);
      v34 = v118;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v35 = LocalizationManager__Get((System_String_o *)StringLiteral_8706/*"MASTER_EQSKILL_LV_TXT"*/, 0LL);
      lv = v31->fields.lv;
      v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv, v36, v37, v38);
      v40 = System_String__Format(v35, v39, 0LL);
      v118 = System_String__Concat_63126736(v34, (System_String_o *)StringLiteral_117/*" "*/, v40, 0LL);
      this = (FollowerRootComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3025/*"BATTLE_SKILLCHARGETURN"*/, 0LL);
      if ( !v33 )
        goto LABEL_189;
      v44 = this;
      m_CancellationTokenSource = (int)v33->fields.m_CancellationTokenSource;
      v45 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &m_CancellationTokenSource, v41, v42, v43);
      v46 = System_String__Format((System_String_o *)v44, v45, 0LL);
      tutorialMode = v6->fields.tutorialMode;
      v48 = v46;
      this = (FollowerRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_189;
      if ( tutorialMode == 3 )
        CommonUI__OpenDetailLongInfoDialogOnFade((CommonUI_o *)this, v118, v48, v117, 0LL);
      else
        CommonUI__OpenDetailLongInfoDialog((CommonUI_o *)this, v118, v48, v117, 1, 0, 0LL);
LABEL_156:
      operationItemListViewManager = v6->fields.operationItemListViewManager;
      v25 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1C22084(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
      v26 = (int)Method_FollowerRootComponent_OnSelectFollowerItem__;
      goto LABEL_173;
    case 5:
      if ( !v6->fields.tutorialState )
      {
        this = (FollowerRootComponent_o *)v6->fields.operationItemListViewManager;
        if ( !this )
          goto LABEL_189;
        this = (FollowerRootComponent_o *)FollowerSelectItemListViewManager__GetItem(
                                            (FollowerSelectItemListViewManager_o *)this,
                                            n,
                                            0LL);
        if ( !this )
          goto LABEL_189;
        tutorialMode_low = LOBYTE(this->fields.tutorialMode);
        v86 = Method_FollowerRootComponent_OnSelectFollowerItem__;
        if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
          v86 = (_QWORD *)sub_1C21E50(Method_FollowerRootComponent_OnSelectFollowerItem__);
        v59 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v86, v86[4]);
        if ( !tutorialMode_low )
          goto LABEL_134;
        goto LABEL_171;
      }
      v57 = v6->fields.tutorialMode;
      if ( v57 == 3 )
      {
        v108 = Method_FollowerRootComponent_OnSelectFollowerItem__;
        if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
          v108 = (_QWORD *)sub_1C21E50(Method_FollowerRootComponent_OnSelectFollowerItem__);
        v109 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v108, v108[4]);
        OverwriteAssetSoundName__PlaySystemSe(v109, 2, 0, 0LL);
        goto LABEL_180;
      }
      if ( v57 == 2 )
      {
        v58 = Method_FollowerRootComponent_OnSelectFollowerItem__;
        if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
          v58 = (_QWORD *)sub_1C21E50(Method_FollowerRootComponent_OnSelectFollowerItem__);
        v59 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v58, v58[4]);
LABEL_134:
        OverwriteAssetSoundName__PlaySystemSe(v59, 0, 0, 0LL);
        this = (FollowerRootComponent_o *)v6->fields.myFSM;
        if ( this )
        {
          v69 = &StringLiteral_8819/*"MENU_SHOW_SUPPORT"*/;
          goto LABEL_136;
        }
        goto LABEL_189;
      }
      return;
    case 6:
      if ( !v6->fields.tutorialState )
      {
        this = (FollowerRootComponent_o *)v6->fields.operationItemListViewManager;
        if ( !this )
          goto LABEL_189;
        this = (FollowerRootComponent_o *)FollowerSelectItemListViewManager__GetItem(
                                            (FollowerSelectItemListViewManager_o *)this,
                                            n,
                                            0LL);
        if ( !this )
          goto LABEL_189;
        v87 = (FollowerSelectItemListViewItem_o *)this;
        if ( !FollowerSelectItemListViewItem__get_ServantLeader(
                (FollowerSelectItemListViewItem_o *)this,
                *(const MethodInfo **)&kind) )
          goto LABEL_157;
        this = (FollowerRootComponent_o *)FollowerSelectItemListViewItem__get_ServantLeader(v87, v88);
        if ( !this )
          goto LABEL_189;
        v90 = *(_QWORD *)&this->fields.manualWidth;
        v89 = *(_QWORD *)&this->fields.kind;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v120.fields.currentCryptoKey = v90;
        *(_QWORD *)&v120.fields.fakeValue = v89;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v120, 0LL) >= 1 )
        {
          this = (FollowerRootComponent_o *)FollowerSelectItemListViewItem__get_ServantLeader(v87, v88);
          if ( !this )
            goto LABEL_189;
          if ( !this->fields.battleSetupInfo )
            goto LABEL_168;
          this = (FollowerRootComponent_o *)FollowerSelectItemListViewItem__get_ServantLeader(
                                              v87,
                                              *(const MethodInfo **)&kind);
          if ( !this )
            goto LABEL_189;
          battleSetupInfo = this->fields.battleSetupInfo;
          if ( !battleSetupInfo )
            goto LABEL_189;
          v93 = *(_QWORD *)&battleSetupInfo->fields.boostId;
          userEquipId = battleSetupInfo->fields.userEquipId;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v121.fields.currentCryptoKey = v93;
          *(_QWORD *)&v121.fields.fakeValue = userEquipId;
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v121, 0LL) < 1 )
            goto LABEL_168;
          this = (FollowerRootComponent_o *)FollowerSelectItemListViewItem__get_ServantLeader(v87, v94);
          if ( !this )
            goto LABEL_189;
          if ( ServantLeaderInfo__IsHideEquip((ServantLeaderInfo_o *)this, 0LL) )
            goto LABEL_168;
          this = (FollowerRootComponent_o *)FollowerSelectItemListViewItem__get_ServantLeader(v87, v95);
          if ( !this )
            goto LABEL_189;
          EquipInfo = (EquipTargetInfo_o *)this->fields.battleSetupInfo;
        }
        else
        {
LABEL_157:
          EquipInfo = FollowerSelectItemListViewItem__get_EquipInfo(v87, v88);
        }
        if ( EquipInfo )
        {
          v98 = *(_QWORD *)&EquipInfo->fields.svtId.fields.currentCryptoKey;
          v97 = *(_QWORD *)&EquipInfo->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v122.fields.currentCryptoKey = v98;
          *(_QWORD *)&v122.fields.fakeValue = v97;
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v122, 0LL) >= 1 )
          {
            v99 = Method_FollowerRootComponent_OnSelectFollowerItem__;
            if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
              v99 = (_QWORD *)sub_1C21E50(Method_FollowerRootComponent_OnSelectFollowerItem__);
            v100 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v99, v99[4]);
            OverwriteAssetSoundName__PlaySystemSe(v100, 0, 0, 0LL);
            followerInfo = v87->fields.followerInfo;
            if ( followerInfo )
            {
              type = followerInfo->fields.type;
              if ( type == 1 )
              {
                v104 = 13;
                goto LABEL_186;
              }
              if ( type == 5 )
              {
                v104 = 14;
LABEL_186:
                FollowerRootComponent__SelectShowServantEquip(v6, EquipInfo, v104, v101);
                return;
              }
            }
            if ( v87->fields.isNpc )
              v104 = 19;
            else
              v104 = 16;
            goto LABEL_186;
          }
        }
LABEL_168:
        v105 = Method_FollowerRootComponent_OnSelectFollowerItem__;
        if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
          v105 = (_QWORD *)sub_1C21E50(Method_FollowerRootComponent_OnSelectFollowerItem__);
        v59 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v105, v105[4]);
LABEL_171:
        OverwriteAssetSoundName__PlaySystemSe(v59, 2, 0, 0LL);
LABEL_172:
        operationItemListViewManager = v6->fields.operationItemListViewManager;
        v25 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1C22084(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
        v26 = (int)Method_FollowerRootComponent_OnSelectFollowerItem__;
LABEL_173:
        v106 = v25;
        FollowerSelectItemListViewManager_CallbackFunc___ctor(v25, (Il2CppObject *)v6, v26, 0LL);
        if ( !operationItemListViewManager )
          goto LABEL_189;
        v107 = 2;
        goto LABEL_175;
      }
LABEL_107:
      v74 = Method_FollowerRootComponent_OnSelectFollowerItem__;
      if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
        v74 = (_QWORD *)sub_1C21E50(Method_FollowerRootComponent_OnSelectFollowerItem__);
      v75 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v74, v74[4]);
      OverwriteAssetSoundName__PlaySystemSe(v75, 2, 0, 0LL);
      v76 = v6->fields.tutorialMode;
      if ( v76 == 3 )
      {
LABEL_180:
        operationItemListViewManager = v6->fields.operationItemListViewManager;
        v106 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1C22084(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
        FollowerSelectItemListViewManager_CallbackFunc___ctor(
          v106,
          (Il2CppObject *)v6,
          (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
          0LL);
        if ( !operationItemListViewManager )
          goto LABEL_189;
        v107 = 4;
LABEL_175:
        FollowerSelectItemListViewManager__SetMode(operationItemListViewManager, v107, v106, 0LL);
        return;
      }
      if ( v76 == 2 )
        goto LABEL_172;
      return;
    case 7:
    case 13:
      v49 = Method_FollowerRootComponent_OnSelectFollowerItem__;
      if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
        v49 = (_QWORD *)sub_1C21E50(Method_FollowerRootComponent_OnSelectFollowerItem__);
      v50 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v49, v49[4]);
      OverwriteAssetSoundName__PlaySystemSe(v50, 0, 0, 0LL);
      if ( !FollowerListRequest_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FollowerListRequest_TypeInfo);
      v51 = FollowerListRequest__checkRefreshRate(0LL);
      v52 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C22084(CommonConfirmDialog_ClickDelegate_TypeInfo);
      CommonConfirmDialog_ClickDelegate___ctor(
        v52,
        (Il2CppObject *)v6,
        Method_FollowerRootComponent_EndRefreshConfirm__,
        0LL);
      if ( kind == 13 )
      {
        if ( !FollowerRecommendSupportListRequest_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FollowerRecommendSupportListRequest_TypeInfo);
        v53 = FollowerRecommendSupportListRequest__CheckRefreshRate(0LL);
        v52 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C22084(CommonConfirmDialog_ClickDelegate_TypeInfo);
        CommonConfirmDialog_ClickDelegate___ctor(
          v52,
          (Il2CppObject *)v6,
          Method_FollowerRootComponent_EndRecommendRefreshConfirm__,
          0LL);
        if ( v53 )
        {
LABEL_62:
          commonConfirmDialog = v6->fields.commonConfirmDialog;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v55 = LocalizationManager__Get((System_String_o *)StringLiteral_6598/*"FOLLOWER_SELECT_REFRESH_TITLE"*/, 0LL);
          this = (FollowerRootComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6595/*"FOLLOWER_SELECT_REFRESH_MESSAGE"*/, 0LL);
          v56 = this;
          if ( !FollowerRootComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(FollowerRootComponent_TypeInfo);
          if ( commonConfirmDialog )
          {
            CommonConfirmDialog__Open_31102820(
              commonConfirmDialog,
              v55,
              (System_String_o *)v56,
              1,
              v52,
              FollowerRootComponent_TypeInfo->static_fields->LIST_UPDATE_MESSAGE_FONT_SIZE,
              0,
              0,
              0,
              0LL);
            return;
          }
          goto LABEL_189;
        }
      }
      else if ( v51 )
      {
        goto LABEL_62;
      }
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v82 = LocalizationManager__Get((System_String_o *)StringLiteral_6597/*"FOLLOWER_SELECT_REFRESH_REST_TITLE"*/, 0LL);
      v83 = LocalizationManager__Get((System_String_o *)StringLiteral_6596/*"FOLLOWER_SELECT_REFRESH_REST_MESSAGE"*/, 0LL);
      v84 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      System_Action___ctor(v84, (Il2CppObject *)v6, Method_FollowerRootComponent_EndRefreshRest__, 0LL);
      if ( Instance )
      {
        CommonUI__OpenNotificationDialog((CommonUI_o *)Instance, v82, v83, v84, -1, 0, 0, 0, 0, 0, 1, 0, 0LL, 0.0, 0LL);
        return;
      }
      goto LABEL_189;
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
      this = (FollowerRootComponent_o *)v6->fields.operationItemListViewManager;
      if ( !this )
        goto LABEL_189;
      this = (FollowerRootComponent_o *)FollowerSelectItemListViewManager__GetItem(
                                          (FollowerSelectItemListViewManager_o *)this,
                                          n,
                                          0LL);
      v8 = (unsigned int)(kind - 9);
      v9 = (unsigned int)v8 < 4 ? v8 + 1 : 0LL;
      if ( !this )
        goto LABEL_189;
      this = (FollowerRootComponent_o *)FollowerSelectItemListViewItem__GetAppendSkillInfo(
                                          (FollowerSelectItemListViewItem_o *)this,
                                          &skillInfoList,
                                          this->fields.tutorialMode,
                                          v7);
      if ( !skillInfoList )
        goto LABEL_189;
      if ( (unsigned int)v9 >= skillInfoList->max_length )
LABEL_190:
        sub_1C2209C(this, *(_QWORD *)&kind);
      v10 = skillInfoList->m_Items[v9];
      if ( v10 && v10->fields.id >= 1 && v10->fields.lv >= 1 )
      {
        v11 = Method_FollowerRootComponent_OnSelectFollowerItem__;
        if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
          v11 = (_QWORD *)sub_1C21E50(Method_FollowerRootComponent_OnSelectFollowerItem__);
        v12 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v11, v11[4]);
        OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0, 0LL);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (FollowerRootComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_SkillMaster___);
        if ( !this )
          goto LABEL_189;
        v13 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                v10->fields.id,
                (const MethodInfo_325BDC8 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        this = (FollowerRootComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_SkillLvMaster___);
        if ( !this )
          goto LABEL_189;
        this = (FollowerRootComponent_o *)SkillLvMaster__GetEntity(
                                            (SkillLvMaster_o *)this,
                                            v10->fields.id,
                                            v10->fields.lv,
                                            0LL);
        if ( !v13 )
          goto LABEL_189;
        SkillEntity__getSkillMessageInfo((SkillEntity_o *)v13, &name, &detail, v10->fields.lv, 0LL);
        v14 = name;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v15 = LocalizationManager__Get((System_String_o *)StringLiteral_8706/*"MASTER_EQSKILL_LV_TXT"*/, 0LL);
        lv = v10->fields.lv;
        v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv, v16, v17, v18);
        v20 = System_String__Format(v15, v19, 0LL);
        name = System_String__Concat_63126736(v14, (System_String_o *)StringLiteral_117/*" "*/, v20, 0LL);
        v21 = v6->fields.tutorialMode;
        this = (FollowerRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !this )
          goto LABEL_189;
        if ( v21 == 3 )
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
        v22 = Method_FollowerRootComponent_OnSelectFollowerItem__;
        if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
          v22 = (_QWORD *)sub_1C21E50(Method_FollowerRootComponent_OnSelectFollowerItem__);
        v23 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v22, v22[4]);
        OverwriteAssetSoundName__PlaySystemSe(v23, 2, 0, 0LL);
      }
LABEL_30:
      operationItemListViewManager = v6->fields.operationItemListViewManager;
      v25 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1C22084(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
      v26 = (int)Method_FollowerRootComponent_OnSelectFollowerItem__;
      goto LABEL_173;
    case 14:
      v77 = v6->fields.battleSetupInfo;
      if ( !v77 )
        goto LABEL_189;
      if ( !v77->fields.isChildFollower )
        goto LABEL_117;
      this = (FollowerRootComponent_o *)v6->fields.titleInfo;
      if ( !this )
        goto LABEL_189;
      TitleInfoControl__setBackBtnEnable((TitleInfoControl_o *)this, 0, 0LL);
      this = (FollowerRootComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !this )
        goto LABEL_189;
      LOBYTE(this->fields.followerQuestInfomationDraw) = 1;
LABEL_117:
      v78 = (NetworkManager_ResultCallbackFunc_o *)sub_1C22084(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v78,
        (Il2CppObject *)v6,
        Method_FollowerRootComponent_CallbackRefresh__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      this = (FollowerRootComponent_o *)NetworkManager__getRequest_object_(
                                          v78,
                                          (const MethodInfo_30345EC *)Method_NetworkManager_getRequest_FollowerRecommendSupportListRequest___);
      if ( !v6->fields.battleSetupInfo )
        goto LABEL_189;
      v79 = (FollowerRecommendSupportListRequest_o *)this;
      this = (FollowerRootComponent_o *)BattleSetupInfo__TargetQuestId(v6->fields.battleSetupInfo, 0LL);
      v80 = v6->fields.battleSetupInfo;
      if ( !v80 || !v79 )
        goto LABEL_189;
      FollowerRecommendSupportListRequest__beginRequest(v79, 0, (int32_t)this, v80->fields.questPhase, 0LL);
      return;
    default:
      this = (FollowerRootComponent_o *)v6->fields.operationItemListViewManager;
      if ( !this )
        goto LABEL_189;
      this = (FollowerRootComponent_o *)FollowerSelectItemListViewManager__GetItem(
                                          (FollowerSelectItemListViewManager_o *)this,
                                          n,
                                          0LL);
      if ( !this )
        goto LABEL_189;
      v60 = this;
      if ( FollowerSelectItemListViewItem__get_SvtId(
             (FollowerSelectItemListViewItem_o *)this,
             *(const MethodInfo **)&kind) < 1
        || HIBYTE(v60->fields.openScroll.fields.z)
        || *((_BYTE *)&v60[1].fields.UnityEngine_Behaviour_Fields + 6) )
      {
        goto LABEL_168;
      }
      this = (FollowerRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
      if ( !this )
        goto LABEL_189;
      if ( !BYTE4(this->fields.battleSetupInfo) )
        goto LABEL_89;
      this = (FollowerRootComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      v61 = this;
      v62 = FollowerRootComponent___c_TypeInfo;
      if ( !FollowerRootComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FollowerRootComponent___c_TypeInfo);
        v62 = FollowerRootComponent___c_TypeInfo;
      }
      _9__65_0 = v62->static_fields->__9__65_0;
      if ( !_9__65_0 )
      {
        if ( !v62->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v62);
          v62 = FollowerRootComponent___c_TypeInfo;
        }
        v64 = (Il2CppObject *)v62->static_fields->__9;
        _9__65_0 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
        System_Action___ctor(_9__65_0, v64, Method_FollowerRootComponent___c__OnSelectFollowerItem_b__65_0__, 0LL);
        static_fields = FollowerRootComponent___c_TypeInfo->static_fields;
        static_fields->__9__65_0 = _9__65_0;
        this = (FollowerRootComponent_o *)sub_1C21DDC(&static_fields->__9__65_0, _9__65_0);
      }
      if ( !v61 )
        goto LABEL_189;
      if ( PartyOrganizationUtility__OpenFriendshipUpItemExpiredDialog((PartyOrganizationUtility_o *)v61, _9__65_0, 0LL) )
        goto LABEL_30;
LABEL_89:
      v66 = Method_FollowerRootComponent_OnSelectFollowerItem__;
      if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
        v66 = (_QWORD *)sub_1C21E50(Method_FollowerRootComponent_OnSelectFollowerItem__);
      v67 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v66, v66[4]);
      OverwriteAssetSoundName__PlaySystemSe(v67, 0, 0, 0LL);
      if ( !v6->fields.tutorialState )
        goto LABEL_96;
      v68 = v6->fields.tutorialMode;
      if ( v68 == 3 )
      {
        v6->fields.state = 4;
        v110 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v111 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
        System_Action___ctor(v111, (Il2CppObject *)v6, Method_FollowerRootComponent_EndCloseTutorialArrow__, 0LL);
        if ( !v110 )
          goto LABEL_189;
        CommonUI__CloseTutorialArrowMark((CommonUI_o *)v110, v111, 0LL);
      }
      else if ( v68 == 2 )
      {
        this = (FollowerRootComponent_o *)v6->fields.titleInfo;
        if ( this )
        {
          TitleInfoControl__setBackBtnEnable((TitleInfoControl_o *)this, 1, 0LL);
LABEL_96:
          this = (FollowerRootComponent_o *)v6->fields.myFSM;
          if ( this )
          {
            v69 = &StringLiteral_8810/*"MENU_SELECT_ITEM"*/;
LABEL_136:
            PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v69, 0LL);
            return;
          }
        }
LABEL_189:
        sub_1C22094(this, *(_QWORD *)&kind);
      }
      return;
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
  struct BattleSetupInfo_o *v17; // x8
  System_String_o *followerId; // x19
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
  if ( (byte_4BD7584 & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&BgmManager_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_BgmMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C21E38(&SoundManager_TypeInfo);
    this = (FollowerRootComponent_o *)sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD7584 = 1;
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
    this = (FollowerRootComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
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
        this = (FollowerRootComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_BgmMaster___);
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
        this = (FollowerRootComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_BgmMaster___);
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
    this = (FollowerRootComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !this )
      goto LABEL_70;
    this = (FollowerRootComponent_o *)PartyOrganizationUtility__ExistsTemporaryPartyInfo(
                                        (PartyOrganizationUtility_o *)this,
                                        0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !System_String__IsNullOrEmpty(BgmFileName, 0LL) )
        FollowerRootComponent__SetBackupBgmName(v2, v12 & 1, v16);
      this = (FollowerRootComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( this )
      {
        v17 = this->fields.battleSetupInfo;
        if ( v17 )
        {
          followerId = (System_String_o *)v17->fields.followerId;
          v19 = SoundManager_TypeInfo;
          if ( SoundManager_TypeInfo->_2.cctor_finished )
          {
LABEL_38:
            v20 = followerId;
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
        this = (FollowerRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( this )
        {
          this = (FollowerRootComponent_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestMaster___);
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
                  followerId = QuestEntity__GetBgmName((QuestEntity_o *)this, v26->fields.warId, 0LL);
                  if ( System_String__IsNullOrEmpty(followerId, 0LL) )
                  {
                    if ( !BgmManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
                    followerId = BgmManager__GetMainBgmName(0LL);
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
        sub_1C22094(this, method);
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
  if ( (byte_4BD7583 & 1) == 0 )
  {
    sub_1C21E38(&SoundManager_TypeInfo);
    byte_4BD7583 = 1;
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
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x0

  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager
    || (FollowerSelectItemListViewManager__DestroyList(operationItemListViewManager, 0LL),
        (operationItemListViewManager = this->fields.operationItemListViewManager) == 0LL)
    || (operationItemListViewManager = (FollowerSelectItemListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                                (UnityEngine_Component_o *)operationItemListViewManager,
                                                                                0LL)) == 0LL )
  {
    sub_1C22094(operationItemListViewManager, method);
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

  if ( (byte_4BD758D & 1) == 0 )
  {
    sub_1C21E38(&Method_FollowerRootComponent_CallbackFollowerList__);
    sub_1C21E38(&Method_NetworkManager_getRequest_FollowerListRequest___);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C21E38(&StringLiteral_11274/*"REQUEST_OK"*/);
    byte_4BD758D = 1;
  }
  v3 = (NetworkManager_ResultCallbackFunc_o *)sub_1C22084(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v3,
    (Il2CppObject *)this,
    Method_FollowerRootComponent_CallbackFollowerList__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = (FollowerListRequest_o *)NetworkManager__getRequest_object_(
                                              v3,
                                              (const MethodInfo_30345EC *)Method_NetworkManager_getRequest_FollowerListRequest___);
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
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Request_object, (System_String_o *)StringLiteral_11274/*"REQUEST_OK"*/, 0LL);
      return;
    }
LABEL_12:
    sub_1C22094(Request_object, v5);
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
  if ( (byte_4BD7598 & 1) == 0 )
  {
    this = (FollowerRootComponent_o *)sub_1C21E38(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4BD7598 = 1;
  }
  battleSetupInfo = v2->fields.battleSetupInfo;
  v2->fields.state = 5;
  if ( !battleSetupInfo )
    goto LABEL_8;
  if ( battleSetupInfo->fields.isChildFollower )
    battleSetupInfo->fields.followerId = 0LL;
  this = (FollowerRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !this )
LABEL_8:
    sub_1C22094(this, method);
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

  if ( (byte_4BD7597 & 1) == 0 )
  {
    sub_1C21E38(&Method_AvalonSceneManager_UnloadScene_PartyOrganizationRootComponent___);
    sub_1C21E38(&QuestHintDialogOpenManager_TypeInfo);
    sub_1C21E38(&RandomLimitCountManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C21E38(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C21E38(&SoundManager_TypeInfo);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD7597 = 1;
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
  sub_1C21DDC(&this->fields.battleSetupInfo, 0LL);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  if ( BYTE1(Instance[10].klass) )
  {
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_29;
    BYTE1(Instance[10].klass) = 0;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BD736A )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD736A = 1;
    }
    v7 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v7 = TerminalPramsManager_TypeInfo;
    }
    v7->static_fields->_IsAutoResume_k__BackingField = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  if ( AvalonSceneManager__IsStackScene((AvalonSceneManager_o *)Instance, 0LL) )
  {
    this->fields.state = 0;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_29;
    AvalonSceneManager__popSceneRefresh((AvalonSceneManager_o *)Instance, 1, battleSetupInfo, 0LL);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_29;
    AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0, 0LL);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
LABEL_29:
    sub_1C22094(Instance, v6);
  AvalonSceneManager__UnloadScene_object_(
    (AvalonSceneManager_o *)Instance,
    (const MethodInfo_2F99834 *)Method_AvalonSceneManager_UnloadScene_PartyOrganizationRootComponent___);
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
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

  if ( (byte_4BD758B & 1) == 0 )
  {
    sub_1C21E38(&AvalonSceneManager_TypeInfo);
    sub_1C21E38(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    sub_1C21E38(&Method_FollowerRootComponent_OnSelectFollowerItem__);
    sub_1C21E38(&RandomLimitCountManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4BD758B = 1;
  }
  state = this->fields.state;
  this->fields.state = 3;
  if ( state == 5 )
  {
    if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    RandomLimitCountManager__set_EnableRandomLimitCount(0, 0LL);
    RandomLimitCountManager__set_EnableRandomLimitCount(1, 0LL);
    operationItemListViewManager = this->fields.operationItemListViewManager;
    if ( !operationItemListViewManager )
      goto LABEL_27;
    FollowerSelectItemListViewManager__ModifyList(
      (FollowerSelectItemListViewManager_o *)operationItemListViewManager,
      this->fields.friendPointUpVal,
      this->fields.friendPointUpMaxVal,
      0LL);
    v5 = this->fields.operationItemListViewManager;
    v6 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1C22084(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
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
    if ( !byte_4BD75B7 )
    {
      sub_1C21E38(&FollowerSelectItemListViewManager_TypeInfo);
      byte_4BD75B7 = 1;
    }
    v8 = FollowerSelectItemListViewManager_TypeInfo;
    if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
      v8 = FollowerSelectItemListViewManager_TypeInfo;
    }
    FollowerSelectItemListViewManager__ChangeClass(v7, v8->static_fields->followerClassId, 0LL);
    operationItemListViewManager = this->fields.operationItemListViewManager;
    if ( !operationItemListViewManager )
LABEL_27:
      sub_1C22094(operationItemListViewManager, method);
    operationItemListViewManager = (void *)FollowerSelectItemListViewManager__GetDisplayItemNum(
                                             (FollowerSelectItemListViewManager_o *)operationItemListViewManager,
                                             0LL);
    if ( (int)operationItemListViewManager >= 3 )
    {
      operationItemListViewManager = this->fields.operationItemListViewManager;
      if ( !operationItemListViewManager )
        goto LABEL_27;
      ListViewManager__JumpItem((ListViewManager_o *)operationItemListViewManager, this->fields.selectItemNum, 0LL);
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
      0LL);
    v9 = this->fields.operationItemListViewManager;
    v10 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1C22084(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
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
  operationItemListViewManager = SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !operationItemListViewManager || !followerQuestInfomationDraw )
    goto LABEL_27;
  FollowerQuestInfomationDraw__SetInfomation(
    followerQuestInfomationDraw,
    questRestrictionInfo,
    *((_DWORD *)operationItemListViewManager + 14),
    0LL,
    v14);
  operationItemListViewManager = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v15 = (CommonUI_o *)operationItemListViewManager;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
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

  if ( (byte_4BD7591 & 1) == 0 )
  {
    sub_1C21E38(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C21E38(&Method_FollowerRootComponent_EndShowServant__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BD7591 = 1;
  }
  operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager
    || (ListViewManager__GetScrollView(
          operationItemListViewManager,
          &this->fields.openScroll,
          &this->fields.openOffset,
          0LL),
        operationItemListViewManager = (ListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        !item)
    || (v6 = (CommonUI_o *)operationItemListViewManager,
        ServantLeader = FollowerSelectItemListViewItem__get_ServantLeader(item, (const MethodInfo *)item),
        v8 = (ServantStatusDialog_EndDelegate_o *)sub_1C22084(ServantStatusDialog_EndDelegate_TypeInfo),
        ServantStatusDialog_EndDelegate___ctor(
          v8,
          (Il2CppObject *)this,
          Method_FollowerRootComponent_EndShowServant__,
          0LL),
        !v6) )
  {
    sub_1C22094(operationItemListViewManager, item);
  }
  CommonUI__OpenServantStatusDialog_31140592(v6, 5, ServantLeader, v8, 0LL);
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

  if ( (byte_4BD7594 & 1) == 0 )
  {
    sub_1C21E38(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C21E38(&Method_FollowerRootComponent_EndShowServantEquip__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BD7594 = 1;
  }
  operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager
    || (ListViewManager__GetScrollView(
          operationItemListViewManager,
          &this->fields.openScroll,
          &this->fields.openOffset,
          0LL),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v9 = (ServantStatusDialog_EndDelegate_o *)sub_1C22084(ServantStatusDialog_EndDelegate_TypeInfo),
        ServantStatusDialog_EndDelegate___ctor(
          v9,
          (Il2CppObject *)this,
          Method_FollowerRootComponent_EndShowServantEquip__,
          0LL),
        !Instance) )
  {
    sub_1C22094(operationItemListViewManager, equipInfo);
  }
  CommonUI__OpenServantEquipStatusDialog_31143688((CommonUI_o *)Instance, statusKind, equipInfo, v9, 0LL, 0LL);
}


void __fastcall FollowerRootComponent__SetBackupBgmName(
        FollowerRootComponent_o *this,
        bool isNonStopEndBgm,
        const MethodInfo *method)
{
  struct System_String_o *BgmName; // x0

  if ( (byte_4BD7585 & 1) == 0 )
  {
    sub_1C21E38(&SoundManager_TypeInfo);
    byte_4BD7585 = 1;
  }
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  if ( SoundManager__isPlayBgm(0LL, 0LL) && !isNonStopEndBgm )
  {
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    BgmName = SoundManager__getBgmName(0LL);
    this->fields.backupBgmName = BgmName;
    sub_1C21DDC(&this->fields.backupBgmName, BgmName);
  }
}


bool __fastcall FollowerRootComponent__SetFollowerBase(
        UISprite_o *sprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  FollowerRootComponent_c *v5; // x0
  UIAtlas_o *partyOrganizationAtlasCache; // x21

  if ( (byte_4BD7580 & 1) == 0 )
  {
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&FollowerRootComponent_TypeInfo);
    byte_4BD7580 = 1;
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
  void *Instance; // x0
  __int64 followerId; // x1
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  int32_t ItemIndex_31789876; // w0
  __int64 v7; // x9
  struct BattleSetupInfo_o *v8; // x8
  int64_t v9; // x10
  int32_t v10; // w10
  __int64 v11; // x10
  __int64 v12; // x10
  int32_t v13; // w9
  Il2CppObject *v14; // x19

  if ( (byte_4BD7599 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C21E38(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4BD7599 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
      ItemIndex_31789876 = FollowerSelectItemListViewManager__GetItemIndex_31789876(
                             (FollowerSelectItemListViewManager_o *)Instance,
                             followerId,
                             battleSetupInfo->fields.followerClassId,
                             battleSetupInfo->fields.followerSupportDeckId,
                             0LL);
      this->fields.selectItemNum = ItemIndex_31789876 & ~(ItemIndex_31789876 >> 31);
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
                 0LL);
    if ( Instance )
    {
      v7 = *((_QWORD *)Instance + 14);
      v8 = this->fields.battleSetupInfo;
      if ( v7 )
      {
        v9 = *(_QWORD *)(v7 + 16);
        if ( !v8 )
          goto LABEL_31;
      }
      else
      {
        v9 = 0LL;
        if ( !v8 )
          goto LABEL_31;
      }
      v8->fields.followerId = v9;
      v10 = *((_DWORD *)Instance + 31);
      if ( v10 )
        v10 = *((_DWORD *)Instance + 30);
      v8->fields.followerClassId = v10;
      v8->fields.followerSupportDeckId = *((_DWORD *)Instance + 65);
      if ( !*((_BYTE *)Instance + 255) )
      {
        v8->fields.recommendSupportIdx = 0;
        if ( !v7 )
        {
          v8->fields.followerType = 0;
          goto LABEL_28;
        }
        goto LABEL_25;
      }
      if ( v7 )
      {
        v11 = *(_QWORD *)(v7 + 56);
        if ( v11 )
        {
          if ( !*(_DWORD *)(v11 + 24) )
            sub_1C2209C(Instance, followerId);
          v12 = *(_QWORD *)(v11 + 32);
          if ( v12 )
          {
            v8->fields.recommendSupportIdx = *(_DWORD *)(v12 + 24);
LABEL_25:
            v13 = *(_DWORD *)(v7 + 36);
            v8->fields.followerType = 0;
            if ( v13 == 5 || v13 == 1 )
              v8->fields.followerType = v13;
            goto LABEL_28;
          }
        }
      }
LABEL_31:
      sub_1C22094(Instance, followerId);
    }
  }
LABEL_28:
  this->fields.state = 5;
  v14 = (Il2CppObject *)this->fields.battleSetupInfo;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  AvalonSceneManager__pushScene((AvalonSceneManager_o *)Instance, 40, 1, v14, 0LL);
  return 1;
}


bool __fastcall FollowerRootComponent__StartSupportInfoMenu(FollowerRootComponent_o *this, const MethodInfo *method)
{
  __int64 selectItemNum; // x1
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x0
  FollowerSelectItemListViewItem_o *Item; // x0
  FollowerSelectItemListViewItem_o *v6; // x20
  Il2CppClass *klass; // x8
  int namespaze; // w9
  int v9; // w10
  FollowerInfo_o *v10; // x21
  struct FollowerInfo_o *followerInfo; // x11
  Il2CppClass *v12; // x8
  const char *v13; // x9
  int v14; // w10
  struct FollowerInfo_o *userId; // x11
  bool v16; // w21
  SupportInfoJump_o *v18; // x20
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  Il2CppObject *v20; // [xsp+8h] [xbp-38h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4BD759A & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_PickupUserFollowerMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_UserFollowerMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long__TryGetSingleEntity__);
    sub_1C21E38(&Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long__TryGetSingleEntity__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C21E38(&SupportInfoJump_TypeInfo);
    byte_4BD759A = 1;
  }
  entity = 0LL;
  v20 = 0LL;
  selectItemNum = (unsigned int)this->fields.selectItemNum;
  if ( (selectItemNum & 0x80000000) == 0 )
  {
    operationItemListViewManager = this->fields.operationItemListViewManager;
    if ( !operationItemListViewManager )
      goto LABEL_41;
    Item = FollowerSelectItemListViewManager__GetItem(operationItemListViewManager, selectItemNum, 0LL);
    if ( Item )
    {
      v6 = Item;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      operationItemListViewManager = (FollowerSelectItemListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserFollowerMaster___);
      if ( !operationItemListViewManager )
        goto LABEL_41;
      operationItemListViewManager = (FollowerSelectItemListViewManager_o *)DataMasterBase_object__object__long___TryGetSingleEntity(
                                                                              (DataMasterBase_TMaster__TEntity__PKType__o *)operationItemListViewManager,
                                                                              &entity,
                                                                              (const MethodInfo_325E450 *)Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long__TryGetSingleEntity__);
      if ( ((unsigned __int8)operationItemListViewManager & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_41;
        klass = entity[1].klass;
        if ( !klass )
          goto LABEL_41;
        namespaze = (int)klass->_1.namespaze;
        if ( namespaze >= 1 )
        {
          v9 = 0;
          while ( 1 )
          {
            if ( namespaze == v9 )
              sub_1C2209C(operationItemListViewManager, selectItemNum);
            v10 = (FollowerInfo_o *)*((_QWORD *)&klass->_1.byval_arg.data + v9);
            if ( !v10 )
              goto LABEL_41;
            followerInfo = v6->fields.followerInfo;
            if ( followerInfo )
              followerInfo = (struct FollowerInfo_o *)followerInfo->fields.userId;
            if ( (struct FollowerInfo_o *)v10->fields.userId == followerInfo )
              break;
            if ( namespaze == ++v9 )
              goto LABEL_20;
          }
LABEL_37:
          this->fields.state = 6;
          v18 = (SupportInfoJump_o *)sub_1C22084(SupportInfoJump_TypeInfo);
          SupportInfoJump___ctor_39965668(v18, v10, 0, 1, 0LL);
          battleSetupInfo = this->fields.battleSetupInfo;
          if ( battleSetupInfo )
          {
            if ( v18 )
            {
              SupportInfoJump__SetSetupInfo(
                v18,
                battleSetupInfo->fields.eventUpValSetupInfo,
                battleSetupInfo->fields.questRestrictionInfo,
                0LL);
              operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
              if ( operationItemListViewManager )
              {
                v16 = 1;
                AvalonSceneManager__pushScene(
                  (AvalonSceneManager_o *)operationItemListViewManager,
                  60,
                  1,
                  (Il2CppObject *)v18,
                  0LL);
                return v16;
              }
            }
          }
LABEL_41:
          sub_1C22094(operationItemListViewManager, selectItemNum);
        }
      }
LABEL_20:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      operationItemListViewManager = (FollowerSelectItemListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_PickupUserFollowerMaster___);
      if ( !operationItemListViewManager )
        goto LABEL_41;
      operationItemListViewManager = (FollowerSelectItemListViewManager_o *)DataMasterBase_object__object__long___TryGetSingleEntity(
                                                                              (DataMasterBase_TMaster__TEntity__PKType__o *)operationItemListViewManager,
                                                                              &v20,
                                                                              (const MethodInfo_325E450 *)Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long__TryGetSingleEntity__);
      if ( ((unsigned __int8)operationItemListViewManager & 1) != 0 )
      {
        if ( !v20 )
          goto LABEL_41;
        v12 = v20[1].klass;
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
                v10 = (FollowerInfo_o *)*((_QWORD *)&v12->_1.byval_arg.data + v14);
                if ( !v10 )
                  goto LABEL_41;
                userId = v6->fields.followerInfo;
                if ( userId )
                  userId = (struct FollowerInfo_o *)userId->fields.userId;
                if ( (struct FollowerInfo_o *)v10->fields.userId == userId )
                  goto LABEL_37;
                ++v14;
                v16 = 0;
                if ( (_DWORD)v13 == v14 )
                  return v16;
              }
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
  struct EventCampaignEntity_array *Data_40346272; // x0
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

  if ( (byte_4BD7590 & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_EventQuestMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserDeckMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserEventDeckMaster___);
    sub_1C21E38(&Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__TryGetEntity__);
    sub_1C21E38(&LastUsedDeckNumberManager_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&OptionManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4BD7590 = 1;
  }
  entity = 0LL;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_142;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  Instance = OptionManager__GetAutoSelectParty(0LL);
  if ( (Instance & 1) == 0 )
    goto LABEL_9;
  Instance = (__int64)this->fields.battleSetupInfo;
  if ( !Instance )
    goto LABEL_142;
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
      goto LABEL_142;
    Instance = DataMasterBase_object__object__long___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                 &entity,
                 battleSetupInfo->fields.deckId,
                 (const MethodInfo_325E370 *)Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__TryGetEntity__);
  }
  else
  {
    v61 = Instance;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4BD6FF5 )
    {
      sub_1C21E38(&NetworkManager_TypeInfo);
      byte_4BD6FF5 = 1;
    }
    Instance = (__int64)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = (__int64)NetworkManager_TypeInfo;
    }
    if ( !MasterData_object )
      goto LABEL_142;
    Instance = (__int64)UserDeckMaster__getDeck(
                          (UserDeckMaster_o *)MasterData_object,
                          *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
                          v61,
                          0LL);
    entity = (Il2CppObject *)Instance;
  }
  v7 = this->fields.battleSetupInfo;
  if ( !v7 )
    goto LABEL_142;
  questRestrictionInfo = v7->fields.questRestrictionInfo;
  if ( questRestrictionInfo )
    QuestRestrictionInfo__SetDeckInfo(questRestrictionInfo, (UserDeckEntity_o *)entity, 0LL);
  *(_QWORD *)&this->fields.friendPointUpVal = 0LL;
  p_friendPointUpVal = &this->fields.friendPointUpVal;
  this->fields.friendPointCampaignEntityList = 0LL;
  sub_1C21DDC(&this->fields.friendPointCampaignEntityList, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_142;
  v10 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_142;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventQuestMaster___);
  if ( !this->fields.battleSetupInfo )
    goto LABEL_142;
  v11 = (EventQuestMaster_o *)Instance;
  Instance = BattleSetupInfo__TargetQuestId(this->fields.battleSetupInfo, 0LL);
  v12 = this->fields.battleSetupInfo;
  if ( !v12 )
    goto LABEL_142;
  if ( !v11 )
    goto LABEL_142;
  Instance = (__int64)EventQuestMaster__GetEnabledEventCampaignForQuest(
                        v11,
                        Instance,
                        v12->fields.questPhase,
                        0LL,
                        7,
                        0LL);
  if ( !v10 )
    goto LABEL_142;
  Data_40346272 = EventCampaignMaster__getData_40346272(
                    (EventCampaignMaster_o *)v10,
                    24,
                    (EventEntity_array *)Instance,
                    0LL);
  this->fields.friendPointCampaignEntityList = Data_40346272;
  Instance = sub_1C21DDC(&this->fields.friendPointCampaignEntityList, Data_40346272);
  if ( this->fields.tutorialMode == 4 )
  {
    v14 = this->fields.battleSetupInfo;
    if ( !v14 )
      goto LABEL_142;
    if ( v14->fields.isChildFollower )
    {
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_142;
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
          Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( !Instance )
            goto LABEL_142;
          Instance = *(_QWORD *)(Instance + 72);
          if ( !Instance )
            goto LABEL_142;
          Member = PartyListViewItem__GetMember((PartyListViewItem_o *)Instance, i, 0LL);
          if ( Member )
          {
            v18 = Member;
            if ( Member->fields.userServantEntity )
            {
              Instance = (__int64)PartyOrganizationListViewItem__GetEquipList(Member, 0LL);
              if ( !v18->fields.userServantEntity )
                goto LABEL_142;
              v19 = (System_Int64_array *)Instance;
              Instance = UserServantEntity__getFriendPointUpVal(
                           v18->fields.userServantEntity,
                           (System_Int64_array *)Instance,
                           0LL);
              userServantEntity = v18->fields.userServantEntity;
              if ( !userServantEntity )
                goto LABEL_142;
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
          Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( !Instance )
            goto LABEL_142;
          Instance = *(_QWORD *)(Instance + 72);
          if ( !Instance )
            goto LABEL_142;
          v55 = PartyListViewItem__GetMember((PartyListViewItem_o *)Instance, j, 0LL);
          if ( v55 )
          {
            v56 = v55;
            if ( v55->fields.userServantEntity )
            {
              Instance = (__int64)PartyOrganizationListViewItem__GetEquipList(v55, 0LL);
              if ( !v56->fields.userServantEntity )
                goto LABEL_142;
              v57 = (System_Int64_array *)Instance;
              Instance = UserServantEntity__getFriendPointUpVal(
                           v56->fields.userServantEntity,
                           (System_Int64_array *)Instance,
                           0LL);
              v58 = v56->fields.userServantEntity;
              if ( !v58 )
                goto LABEL_142;
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
LABEL_142:
    sub_1C22094(Instance, v4);
  v23 = v22->fields.questRestrictionInfo;
  if ( v23 )
  {
    Instance = QuestRestrictionInfo__IsServantNum(v23, 0LL);
    if ( (Instance & 1) != 0 )
      goto LABEL_49;
    v24 = this->fields.battleSetupInfo;
    if ( !v24 )
      goto LABEL_142;
    Instance = (__int64)v24->fields.questRestrictionInfo;
    if ( !Instance )
      goto LABEL_142;
    Instance = QuestRestrictionInfo__IsNpcMulitipleOrOnly((QuestRestrictionInfo_o *)Instance, 0LL);
    if ( (Instance & 1) != 0 )
      goto LABEL_49;
    v25 = this->fields.battleSetupInfo;
    if ( !v25 )
      goto LABEL_142;
    Instance = (__int64)v25->fields.questRestrictionInfo;
    if ( !Instance )
      goto LABEL_142;
    if ( *(int *)(Instance + 404) >= 1 )
    {
LABEL_49:
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        v26 = DataManager__GetMasterData_object_(
                (DataManager_o *)Instance,
                (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserEventDeckMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4BD6FF5 )
        {
          sub_1C21E38(&NetworkManager_TypeInfo);
          byte_4BD6FF5 = 1;
        }
        Instance = (__int64)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          Instance = (__int64)NetworkManager_TypeInfo;
        }
        v27 = this->fields.battleSetupInfo;
        if ( v27 )
        {
          eventId = v27->fields.eventId;
          v29 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL);
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
                  goto LABEL_143;
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
                            goto LABEL_142;
                          Instance = UserServantEntity__getFriendPointUpVal((UserServantEntity_o *)Instance, v36, 0LL);
                          if ( v34 >= *(unsigned int *)(v32 + 24) )
                            break;
                          v37 = Instance;
                          Instance = *(_QWORD *)(v35 + 8 * v34);
                          if ( !Instance )
                            goto LABEL_142;
                          Instance = UserServantEntity__getFriendPointUpType((UserServantEntity_o *)Instance, v36, 0LL);
                          if ( (_DWORD)Instance == 104 && v37 > *p_friendPointUpVal )
                          {
                            this->fields.friendPointUpVal = v37;
                            this->fields.friendPointUpMaxVal = v37;
                          }
                        }
                        v33 = *(_DWORD *)(v32 + 24);
                        if ( (__int64)++v34 >= v33 )
                          goto LABEL_75;
                      }
LABEL_143:
                      sub_1C2209C(Instance, v4);
                    }
LABEL_75:
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
                            goto LABEL_143;
                          v40 = (System_Int64_array *)Instance;
                          Instance = *(_QWORD *)(v39 + 8 * v38);
                          if ( !Instance )
                            goto LABEL_142;
                          Instance = UserServantEntity__getFriendPointUpVal((UserServantEntity_o *)Instance, v40, 0LL);
                          if ( v38 >= *(unsigned int *)(v32 + 24) )
                            goto LABEL_143;
                          v41 = Instance;
                          Instance = *(_QWORD *)(v39 + 8 * v38);
                          if ( !Instance )
                            goto LABEL_142;
                          Instance = UserServantEntity__getFriendPointUpType((UserServantEntity_o *)Instance, v40, 0LL);
                          if ( (_DWORD)Instance == 123 )
                            *p_friendPointUpVal += v41;
                        }
                        v33 = *(_DWORD *)(v32 + 24);
                        if ( (__int64)++v38 >= v33 )
                          goto LABEL_86;
                      }
                      goto LABEL_143;
                    }
LABEL_86:
                    v42 = this->fields.battleSetupInfo;
                    if ( v42 )
                    {
                      Instance = (__int64)v42->fields.questRestrictionInfo;
                      if ( Instance )
                      {
                        QuestRestrictionInfo__SetDeckInfo_41710580((QuestRestrictionInfo_o *)Instance, v31, 0LL);
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
      goto LABEL_142;
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
      goto LABEL_142;
    UserServant = UserDeckEntity__GetUserServant((UserDeckEntity_o *)entity, k, 0LL);
    if ( UserServant )
    {
      v46 = UserServant;
      Instance = (__int64)entity;
      if ( !entity )
        goto LABEL_142;
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
      goto LABEL_142;
    v50 = UserDeckEntity__GetUserServant((UserDeckEntity_o *)entity, m, 0LL);
    if ( v50 )
    {
      v51 = v50;
      Instance = (__int64)entity;
      if ( !entity )
        goto LABEL_142;
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
  TerminalPramsManager_c *v7; // x0

  if ( (byte_4BD75A9 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&StringLiteral_3578/*"CLICK_BACK"*/);
    byte_4BD75A9 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  CommonUI__CloseConfirmDialog(Instance, 0LL);
  if ( isDecide )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BD736A )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD736A = 1;
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
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3578/*"CLICK_BACK"*/, 0LL);
      return;
    }
LABEL_14:
    sub_1C22094(Instance, v6);
  }
  this->fields.state = 3;
}


void __fastcall FollowerRootComponent__beginFinish(FollowerRootComponent_o *this, const MethodInfo *method)
{
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x0
  FollowerRootComponent_c *v4; // x0
  struct FollowerRootComponent_StaticFields *static_fields; // x0

  if ( (byte_4BD758C & 1) == 0 )
  {
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&FollowerRootComponent_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    byte_4BD758C = 1;
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
  sub_1C21DDC(&static_fields->partyOrganizationAtlasCache, 0LL);
  operationItemListViewManager = (FollowerSelectItemListViewManager_o *)this->fields.backSkinSprite;
  if ( !operationItemListViewManager
    || (operationItemListViewManager = (FollowerSelectItemListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                                (UnityEngine_Component_o *)operationItemListViewManager,
                                                                                0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)operationItemListViewManager, 0, 0LL),
        (operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__)) == 0LL) )
  {
LABEL_14:
    sub_1C22094(operationItemListViewManager, method);
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

  if ( (byte_4BD7581 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4BD7581 = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v4);
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, (SceneRootComponent_o *)this, 0LL);
}


void __fastcall FollowerRootComponent__beginPause(FollowerRootComponent_o *this, const MethodInfo *method)
{
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x0

  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    sub_1C22094(0LL, method);
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
  __int64 v12; // x9
  struct BattleSetupInfo_o *battleSetupInfo; // x8
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
  int klass_high; // w10
  int32_t v50; // w9
  struct BattleSetupInfo_o *v51; // x8
  Il2CppObject *v52; // x19

  if ( (byte_4BD758A & 1) == 0 )
  {
    sub_1C21E38(&AvalonSceneManager_TypeInfo);
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&BattleSetupInfo_TypeInfo);
    sub_1C21E38(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    sub_1C21E38(&Method_FollowerRootComponent_OnSelectFollowerItem__);
    sub_1C21E38(&FollowerRootComponent_TypeInfo);
    sub_1C21E38(&RandomLimitCountManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C21E38(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C21E38(&SupportInfoJump_TypeInfo);
    sub_1C21E38(&TutorialFlag_TypeInfo);
    byte_4BD758A = 1;
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
  sub_1C21DDC(&static_fields->partyOrganizationAtlasCache, partyOrganizationAtlas);
  titleInfo = this->fields.titleInfo;
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_122;
  if ( *(_BYTE *)(Instance + 80) )
  {
    selectItemNum = 0LL;
    if ( !titleInfo )
      goto LABEL_122;
  }
  else
  {
    selectItemNum = this->fields.tutorialMode != 2;
    if ( !titleInfo )
      goto LABEL_122;
  }
  TitleInfoControl__setBackBtnEnable(titleInfo, selectItemNum, 0LL);
  Instance = (__int64)this->fields.operationItemListViewManager;
  if ( !Instance )
    goto LABEL_122;
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
            goto LABEL_122;
          Instance = (__int64)FollowerSelectItemListViewManager__GetItem(
                                (FollowerSelectItemListViewManager_o *)Instance,
                                selectItemNum,
                                0LL);
          if ( Instance )
          {
            this->fields.state = 5;
            v12 = *(_QWORD *)(Instance + 112);
            battleSetupInfo = this->fields.battleSetupInfo;
            if ( v12 )
              v14 = *(_QWORD *)(v12 + 16);
            else
              v14 = 0LL;
            if ( battleSetupInfo )
            {
              battleSetupInfo->fields.followerId = v14;
              battleSetupInfo->fields.followerClassId = (int32_t)data[3].klass;
              klass_high = HIDWORD(data[3].klass);
              if ( klass_high <= 0 )
                klass_high = *(_DWORD *)(Instance + 260);
              battleSetupInfo->fields.followerSupportDeckId = klass_high;
              if ( v12 )
              {
                v50 = *(_DWORD *)(v12 + 36);
                battleSetupInfo->fields.followerType = 0;
                if ( v50 == 5 || v50 == 1 )
                  battleSetupInfo->fields.followerType = v50;
              }
              else
              {
                battleSetupInfo->fields.followerType = 0;
              }
              if ( this->fields.operationItemListViewManager )
              {
                if ( !byte_4BD75B7 )
                {
                  sub_1C21E38(&FollowerSelectItemListViewManager_TypeInfo);
                  byte_4BD75B7 = 1;
                }
                Instance = (__int64)FollowerSelectItemListViewManager_TypeInfo;
                if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
                  Instance = (__int64)FollowerSelectItemListViewManager_TypeInfo;
                }
                v51 = this->fields.battleSetupInfo;
                if ( v51 )
                {
                  selectItemNum = (unsigned int)v51->fields.followerClassId;
                  if ( *(_DWORD *)(*(_QWORD *)(Instance + 184) + 8LL) != (_DWORD)selectItemNum )
                  {
                    Instance = (__int64)this->fields.operationItemListViewManager;
                    if ( !Instance )
                      goto LABEL_122;
                    if ( FollowerSelectItemListViewManager__ChangeClass(
                           (FollowerSelectItemListViewManager_o *)Instance,
                           selectItemNum,
                           0LL) )
                    {
                      Instance = (__int64)this->fields.operationItemListViewManager;
                      if ( !Instance )
                        goto LABEL_122;
                      ListViewManager__JumpItem((ListViewManager_o *)Instance, this->fields.selectItemNum, 0LL);
                    }
                  }
                  v52 = (Il2CppObject *)this->fields.battleSetupInfo;
                  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
                  if ( Instance )
                  {
                    AvalonSceneManager__pushScene((AvalonSceneManager_o *)Instance, 40, 1, v52, 0LL);
                    return;
                  }
                }
              }
            }
LABEL_122:
            sub_1C22094(Instance, selectItemNum);
          }
        }
      }
    }
    goto LABEL_39;
  }
  if ( data )
  {
    v15 = (Il2CppClass *)BattleSetupInfo_TypeInfo;
    v16 = LOBYTE(BattleSetupInfo_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(data->klass->vtable[0].methodPtr) >= (unsigned int)v16 )
    {
      if ( (BattleSetupInfo_c *)data->klass->_2.typeHierarchy[v16 - 1] == BattleSetupInfo_TypeInfo )
        v17 = data;
      else
        v17 = 0LL;
    }
    else
    {
      v17 = 0LL;
    }
    this->fields.battleSetupInfo = (struct BattleSetupInfo_o *)v17;
    p_battleSetupInfo = &this->fields.battleSetupInfo;
    if ( LOBYTE(data->klass->vtable[0].methodPtr) >= (unsigned int)v16 )
    {
      if ( data->klass->_2.typeHierarchy[v16 - 1] == v15 )
        v18 = data;
      else
        v18 = 0LL;
    }
    else
    {
      v18 = 0LL;
    }
  }
  else
  {
    v18 = 0LL;
    this->fields.battleSetupInfo = 0LL;
    p_battleSetupInfo = &this->fields.battleSetupInfo;
  }
  Instance = sub_1C21DDC(p_battleSetupInfo, v18);
  v20 = *p_battleSetupInfo;
  if ( *p_battleSetupInfo )
  {
    questRestrictionInfo = v20->fields.questRestrictionInfo;
    if ( !questRestrictionInfo )
      goto LABEL_122;
    if ( !QuestRestrictionInfo__IsMyServantOrNpcRestriction(v20->fields.questRestrictionInfo, 0LL)
      && (questRestrictionInfo->fields.isNoSupportBattle
       || questRestrictionInfo->fields.isFixedMyServantSingle
       || questRestrictionInfo->fields.isSupportOnlyForceBattle) )
    {
      goto LABEL_91;
    }
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    Instance = TutorialFlag__Get_38930984(102, 0LL);
    if ( (Instance & 1) == 0 )
    {
      v23 = *p_battleSetupInfo;
      if ( !*p_battleSetupInfo )
        goto LABEL_122;
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
            goto LABEL_122;
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
        goto LABEL_122;
      operationItemListViewManager = this->fields.operationItemListViewManager;
      Instance = BattleSetupInfo__TargetQuestId((BattleSetupInfo_o *)Instance, 0LL);
      v25 = this->fields.battleSetupInfo;
      if ( !v25 )
        goto LABEL_122;
      if ( !operationItemListViewManager )
        goto LABEL_122;
      FollowerSelectItemListViewManager__CreateList(
        operationItemListViewManager,
        Instance,
        v25->fields.questPhase,
        this->fields.friendPointUpVal,
        this->fields.friendPointUpMaxVal,
        this->fields.friendPointCampaignEntityList,
        v25->fields.questRestrictionInfo,
        0LL);
      v27 = this->fields.battleSetupInfo;
      if ( !v27 )
        goto LABEL_122;
      Instance = (__int64)this->fields.followerQuestInfomationDraw;
      if ( !Instance )
        goto LABEL_122;
      FollowerQuestInfomationDraw__SetInfomation(
        (FollowerQuestInfomationDraw_o *)Instance,
        v27->fields.questRestrictionInfo,
        0,
        0LL,
        v26);
      this->fields.state = 2;
      FollowerRootComponent__OnMoveEnd(this, v28);
LABEL_57:
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v29 = (CommonUI_o *)Instance;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      if ( v29 )
      {
        CommonUI__maskFadein(v29, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
        SceneRootComponent__sendMessageResume((SceneRootComponent_o *)this, 0LL);
        return;
      }
      goto LABEL_122;
    }
    if ( this->fields.state == 6 )
      goto LABEL_50;
    v30 = this->fields.battleSetupInfo;
    if ( !v30 )
      goto LABEL_122;
    if ( v30->fields.isChildFollower )
      goto LABEL_125;
    v44 = v30->fields.questRestrictionInfo;
    if ( !v44 )
      goto LABEL_122;
    if ( !v44->fields.isNotTransitionSupportList )
    {
LABEL_125:
      if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
      RandomLimitCountManager__set_EnableRandomLimitCount(0, 0LL);
      RandomLimitCountManager__set_EnableRandomLimitCount(1, 0LL);
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_122;
      v31 = *(PartyListViewItem_o **)(Instance + 72);
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_122;
      v32 = (UnityEngine_Component_o *)this->fields.operationItemListViewManager;
      i = *(_DWORD *)(Instance + 56);
      this->fields.tutorialState = 0;
      this->fields.selectItemNum = -1;
      if ( !v32 )
        goto LABEL_122;
      Instance = (__int64)UnityEngine_Component__get_gameObject(v32, 0LL);
      if ( !Instance )
        goto LABEL_122;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
      Instance = (__int64)this->fields.battleSetupInfo;
      if ( !Instance )
        goto LABEL_122;
      v34 = this->fields.operationItemListViewManager;
      Instance = BattleSetupInfo__TargetQuestId((BattleSetupInfo_o *)Instance, 0LL);
      v35 = this->fields.battleSetupInfo;
      if ( !v35 )
        goto LABEL_122;
      if ( !v34 )
        goto LABEL_122;
      FollowerSelectItemListViewManager__CreateList(
        v34,
        Instance,
        v35->fields.questPhase,
        this->fields.friendPointUpVal,
        this->fields.friendPointUpMaxVal,
        this->fields.friendPointCampaignEntityList,
        v35->fields.questRestrictionInfo,
        0LL);
      v37 = this->fields.battleSetupInfo;
      if ( !v37 )
        goto LABEL_122;
      Instance = (__int64)this->fields.followerQuestInfomationDraw;
      if ( !Instance )
        goto LABEL_122;
      FollowerQuestInfomationDraw__SetInfomation(
        (FollowerQuestInfomationDraw_o *)Instance,
        v37->fields.questRestrictionInfo,
        i,
        0LL,
        v36);
      this->fields.state = 3;
      v38 = this->fields.operationItemListViewManager;
      v39 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1C22084(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
      FollowerSelectItemListViewManager_CallbackFunc___ctor(
        v39,
        (Il2CppObject *)this,
        (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
        0LL);
      if ( !v38 )
        goto LABEL_122;
      FollowerSelectItemListViewManager__SetMode(v38, 2, v39, 0LL);
      if ( v31 )
      {
        Instance = (__int64)this->fields.operationItemListViewManager;
        if ( !Instance )
          goto LABEL_122;
        if ( ListViewManager__get_ItemSum((ListViewManager_o *)Instance, 0LL) >= 3 )
        {
          if ( i )
          {
LABEL_82:
            if ( i >= 1 )
            {
              Member = PartyListViewItem__GetMember(v31, i - 1, 0LL);
              if ( Member )
              {
                followerInfo = Member->fields.followerInfo;
                if ( followerInfo )
                {
                  v42 = this->fields.operationItemListViewManager;
                  userId = followerInfo->fields.userId;
                  Instance = (__int64)PartyOrganizationListViewItem__get_ServantLeader(Member, 0LL);
                  if ( !Instance )
                    goto LABEL_122;
                  if ( !v42 )
                    goto LABEL_122;
                  Instance = FollowerSelectItemListViewManager__GetItemIndex(
                               v42,
                               userId,
                               *(_QWORD *)(Instance + 40),
                               0LL);
                  if ( !this->fields.operationItemListViewManager )
                    goto LABEL_122;
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
              v45 = BalanceConfig_TypeInfo;
              v46 = i - 1;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v45 = BalanceConfig_TypeInfo;
              }
              if ( v46 >= v45->static_fields->DeckMemberMax )
                break;
              v47 = PartyListViewItem__GetMember(v31, v46, 0LL);
              if ( v47 )
              {
                v48 = v47->fields.followerInfo;
                if ( v48 )
                {
                  if ( Follower__IsNotNpc(v48->fields.type, 0LL) )
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


void __fastcall FollowerRootComponent__beginStartUp(
        FollowerRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  MissionNotifyManager_o *Instance; // x0
  const MethodInfo *v6; // x1
  MissionNotifyManager_c *klass; // x8
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
  struct System_Collections_Generic_List_MissionNotifyDispInfo__o *mDispInfos; // x8
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

  if ( (byte_4BD7582 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&BattleSetupInfo_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_ConstantMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_NpcFollowerMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1C21E38(&Method_FollowerRootComponent_EndLoadCommonBg__);
    sub_1C21E38(&Method_FollowerRootComponent_EndLoadPartyOrganizationAtlasSimple__);
    sub_1C21E38(&FollowerRootComponent_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&RandomLimitCountManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C21E38(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C21E38(&TutorialFlag_TypeInfo);
    sub_1C21E38(&StringLiteral_13775/*"TUTORIAL_SUPPORT_QUEST_ID"*/);
    sub_1C21E38(&StringLiteral_13776/*"TUTORIAL_SUPPORT_QUEST_PHASE"*/);
    sub_1C21E38(&StringLiteral_6576/*"FOLLOWER_SELECT_EXPLANATION2"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD7582 = 1;
  }
  Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_99;
  if ( PartyOrganizationUtility__ExistsTemporaryPartyInfo((PartyOrganizationUtility_o *)Instance, 0LL) )
  {
    Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_99;
    klass = Instance[2].klass;
    if ( !klass )
      goto LABEL_99;
    v8 = (struct BattleSetupInfo_o *)klass->_1.this_arg.data;
    this->fields.battleSetupInfo = v8;
    sub_1C21DDC(&this->fields.battleSetupInfo, v8);
    Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !Instance )
      goto LABEL_99;
    if ( !MissionNotifyManager__IsPause(Instance, 0LL) )
    {
      Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
      if ( !Instance )
        goto LABEL_99;
      MissionNotifyManager__StartPause(Instance, 0LL);
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
    sub_1C21DDC(p_battleSetupInfo, v13);
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
  sub_1C21DDC(&static_fields->partyOrganizationAtlasCache, partyOrganizationAtlas);
  Instance = (MissionNotifyManager_o *)this->fields.titleInfo;
  if ( !Instance )
    goto LABEL_99;
  TitleInfoControl__setTitleInfo_38387048((TitleInfoControl_o *)Instance, this->fields.myFSM, 3, 64, 1, 0LL);
  Instance = (MissionNotifyManager_o *)this->fields.titleInfo;
  if ( !Instance )
    goto LABEL_99;
  TitleInfoControl__setBackBtnEnable((TitleInfoControl_o *)Instance, 1, 0LL);
  Instance = (MissionNotifyManager_o *)this->fields.operationItemListViewManager;
  if ( !Instance )
    goto LABEL_99;
  FollowerSelectItemListViewManager__DestroyList_31777872(
    (FollowerSelectItemListViewManager_o *)Instance,
    this->fields.battleSetupInfo,
    0LL);
  infomationLabel = this->fields.infomationLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (MissionNotifyManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6576/*"FOLLOWER_SELECT_EXPLANATION2"*/, 0LL);
  if ( !infomationLabel )
    goto LABEL_99;
  UILabel__set_text(infomationLabel, (System_String_o *)Instance, 0LL);
  Instance = (MissionNotifyManager_o *)BalanceConfig_TypeInfo;
  refreshButtonBase = this->fields.refreshButtonBase;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  if ( !refreshButtonBase )
    goto LABEL_99;
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
    goto LABEL_99;
  v21 = Instance[1].fields.mNoticeNumberComp || LODWORD(Instance[1].fields.assetLoadedEventIdList) != 0;
  if ( (v21 & BYTE1(Instance[1].klass)) != 0
    && (BattleSetupInfo__SetRestriction((BattleSetupInfo_o *)Instance, 1, 0LL),
        (Instance = (MissionNotifyManager_o *)this->fields.battleSetupInfo) == 0LL)
    || (mDispInfos = Instance[1].fields.mDispInfos) == 0LL )
  {
LABEL_99:
    sub_1C22094(Instance, v6);
  }
  if ( BYTE2(mDispInfos[9].fields._size) )
  {
LABEL_47:
    FollowerRootComponent__StartBattleSetupMenu(this, v6);
    return;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_38930984(102, 0LL) )
  {
    Instance = (MissionNotifyManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_99;
    Instance = (MissionNotifyManager_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ConstantMaster___);
    if ( !Instance )
      goto LABEL_99;
    v23 = (ConstantMaster_o *)Instance;
    Instance = (MissionNotifyManager_o *)ConstantMaster__GetValue(
                                           (ConstantMaster_o *)Instance,
                                           (System_String_o *)StringLiteral_13775/*"TUTORIAL_SUPPORT_QUEST_ID"*/,
                                           0LL);
    battleSetupInfo = this->fields.battleSetupInfo;
    if ( !battleSetupInfo )
      goto LABEL_99;
    if ( battleSetupInfo->fields.questId == (_DWORD)Instance )
    {
      Instance = (MissionNotifyManager_o *)ConstantMaster__GetValue(v23, (System_String_o *)StringLiteral_13776/*"TUTORIAL_SUPPORT_QUEST_PHASE"*/, 0LL);
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
    Instance = (MissionNotifyManager_o *)this->fields.infomationLabel;
    *(_QWORD *)&this->fields.tutorialMode = 0x100000002LL;
    if ( !Instance )
      goto LABEL_99;
    UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    battleSetupInfo = this->fields.battleSetupInfo;
    if ( !battleSetupInfo )
      goto LABEL_99;
  }
  Instance = (MissionNotifyManager_o *)battleSetupInfo->fields.questRestrictionInfo;
  if ( !Instance )
    goto LABEL_99;
  if ( !BYTE3(Instance[5].fields.assetLoadedEventIdList)
    && !BYTE1(Instance[5].fields.assetLoadedEventIdList)
    && !LOBYTE(Instance[5].monitor)
    && !BYTE3(Instance[5].fields.mNoDispInfos) )
  {
    Instance = (MissionNotifyManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (MissionNotifyManager_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)Instance,
                                             (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
      if ( this->fields.battleSetupInfo )
      {
        v27 = (QuestPhaseMaster_o *)Instance;
        Instance = (MissionNotifyManager_o *)BattleSetupInfo__TargetQuestId(this->fields.battleSetupInfo, 0LL);
        v28 = this->fields.battleSetupInfo;
        if ( v28 )
        {
          if ( v27 )
          {
            Instance = (MissionNotifyManager_o *)QuestPhaseMaster__GetEntity(
                                                   v27,
                                                   (int32_t)Instance,
                                                   v28->fields.questPhase,
                                                   0LL);
            if ( Instance && LOBYTE(Instance->fields.mNoDispInfos) )
            {
              Instance = (MissionNotifyManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                goto LABEL_99;
              Instance = (MissionNotifyManager_o *)DataManager__GetMasterData_object_(
                                                     (DataManager_o *)Instance,
                                                     (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
              if ( !this->fields.battleSetupInfo )
                goto LABEL_99;
              v29 = (NpcFollowerMaster_o *)Instance;
              Instance = (MissionNotifyManager_o *)BattleSetupInfo__TargetQuestId(this->fields.battleSetupInfo, 0LL);
              v30 = this->fields.battleSetupInfo;
              if ( !v30 )
                goto LABEL_99;
              if ( !v29 )
                goto LABEL_99;
              Instance = (MissionNotifyManager_o *)NpcFollowerMaster__GetQuestFollowerList(
                                                     v29,
                                                     (int32_t)Instance,
                                                     v30->fields.questPhase,
                                                     0LL);
              if ( !Instance )
                goto LABEL_99;
              if ( !Instance->fields.mNoDispInfos )
              {
                *(_QWORD *)&this->fields.tutorialMode = 0x100000001LL;
                goto LABEL_74;
              }
            }
            v31 = this->fields.battleSetupInfo;
            if ( v31 )
            {
              Instance = (MissionNotifyManager_o *)v31->fields.questRestrictionInfo;
              if ( Instance )
              {
                if ( QuestRestrictionInfo__IsMyServantOrNpcRestriction((QuestRestrictionInfo_o *)Instance, 0LL) )
                  this->fields.tutorialMode = 4;
                FollowerRootComponent__UpdateDeckInfomation(this, v32);
                v34 = this->fields.battleSetupInfo;
                if ( v34 )
                {
                  Instance = (MissionNotifyManager_o *)this->fields.followerQuestInfomationDraw;
                  if ( Instance )
                  {
                    FollowerQuestInfomationDraw__SetInfomation(
                      (FollowerQuestInfomationDraw_o *)Instance,
                      v34->fields.questRestrictionInfo,
                      0,
                      0LL,
                      v33);
                    Instance = (MissionNotifyManager_o *)this->fields.backSkinSprite;
                    if ( Instance )
                    {
                      Instance = (MissionNotifyManager_o *)UnityEngine_Component__get_gameObject(
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
    v25 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(v25, (Il2CppObject *)this, Method_FollowerRootComponent_EndLoadCommonBg__, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__LoadUISkin(v25, 2, 1, 0LL);
    return;
  }
  this->fields.tutorialMode = 1;
LABEL_74:
  v26 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
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
    sub_1C22094(this, type);
  battleSetupInfo->fields.followerType = 0;
  if ( (type | 4) == 5 )
    battleSetupInfo->fields.followerType = type;
}


void __fastcall FollowerRootComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19

  if ( (byte_4BD75AA & 1) == 0 )
  {
    sub_1C21E38(&FollowerRootComponent___c_TypeInfo);
    byte_4BD75AA = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(FollowerRootComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  FollowerRootComponent___c_TypeInfo->static_fields->__9 = (struct FollowerRootComponent___c_o *)v1;
  sub_1C21DDC(FollowerRootComponent___c_TypeInfo->static_fields, v1);
}


void __fastcall FollowerRootComponent___c___ctor(FollowerRootComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall FollowerRootComponent___c___Init_b__50_0(FollowerRootComponent___c_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall FollowerRootComponent___c___OnSelectFollowerItem_b__65_0(
        FollowerRootComponent___c_o *this,
        const MethodInfo *method)
{
  ;
}