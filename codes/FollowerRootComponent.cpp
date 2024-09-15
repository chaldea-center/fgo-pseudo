void __fastcall FollowerRootComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct FollowerRootComponent_StaticFields *static_fields; // x8

  if ( (byte_4A32312 & 1) == 0 )
  {
    sub_1B761C0(&FollowerRootComponent_TypeInfo, v1);
    byte_4A32312 = 1;
  }
  static_fields = FollowerRootComponent_TypeInfo->static_fields;
  static_fields->LIST_UPDATE_MESSAGE_FONT_SIZE = 26;
  *(_QWORD *)&static_fields->RETURN_TERMINAL_MESSAGE_FONT_SIZE = 0xA0000001BLL;
  static_fields->RETURN_TERMINAL_MESSAGE_SPACING_Y = 5;
}


void __fastcall FollowerRootComponent___ctor(FollowerRootComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t v5; // w1

  if ( (byte_4A32311 & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_1/*""*/, method);
    byte_4A32311 = 1;
  }
  v5 = (int)StringLiteral_1/*""*/;
  this->fields.backupBgmName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.backupBgmName, v5, v2, v3);
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0LL);
}


void __fastcall FollowerRootComponent__CallbackFollowerList(
        FollowerRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_4A322F7 & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_11056/*"REQUEST_OK"*/, result);
    byte_4A322F7 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1B7641C(0LL, result);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_11056/*"REQUEST_OK"*/, 0LL);
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
    sub_1B7641C(0LL, result);
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
  __int64 v6; // x1
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x0
  FollowerSelectItemListViewManager_o *v8; // x20
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  FollowerSelectItemListViewManager_o *v10; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v11; // x21

  if ( (byte_4A32308 & 1) == 0 )
  {
    sub_1B761C0(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, result);
    sub_1B761C0(&Method_FollowerRootComponent_OnSelectFollowerItem__, v4);
    sub_1B761C0(&RandomLimitCountManager_TypeInfo, v5);
    byte_4A32308 = 1;
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
  v8 = this->fields.operationItemListViewManager;
  operationItemListViewManager = (FollowerSelectItemListViewManager_o *)BattleSetupInfo__TargetQuestId(
                                                                          (BattleSetupInfo_o *)operationItemListViewManager,
                                                                          0LL);
  battleSetupInfo = this->fields.battleSetupInfo;
  if ( !battleSetupInfo
    || !v8
    || (FollowerSelectItemListViewManager__CreateList(
          v8,
          (int32_t)operationItemListViewManager,
          battleSetupInfo->fields.questPhase,
          this->fields.friendPointUpVal,
          this->fields.friendPointUpMaxVal,
          this->fields.friendPointCampaignEntityList,
          battleSetupInfo->fields.questRestrictionInfo,
          0LL),
        v10 = this->fields.operationItemListViewManager,
        v11 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1B7640C(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo),
        FollowerSelectItemListViewManager_CallbackFunc___ctor(
          v11,
          (Il2CppObject *)this,
          (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
          0LL),
        !v10)
    || (FollowerSelectItemListViewManager__SetMode(v10, 2, v11, 0LL),
        (operationItemListViewManager = (FollowerSelectItemListViewManager_o *)this->fields.commonConfirmDialog) == 0LL) )
  {
LABEL_12:
    sub_1B7641C(operationItemListViewManager, v6);
  }
  CommonConfirmDialog__Close((CommonConfirmDialog_o *)operationItemListViewManager, 0LL);
}


void __fastcall FollowerRootComponent__EndCloseShowServant(FollowerRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4A322FC & 1) == 0 )
  {
    sub_1B761C0(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_1B761C0(&Method_FollowerRootComponent_OnSelectFollowerItem__, v3);
    byte_4A322FC = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v5 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1B7640C(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
    0LL);
  if ( !operationItemListViewManager )
    sub_1B7641C(v6, v7);
  FollowerSelectItemListViewManager__SetMode(operationItemListViewManager, 2, v5, 0LL);
}


void __fastcall FollowerRootComponent__EndCloseShowServantEquip(
        FollowerRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4A322FF & 1) == 0 )
  {
    sub_1B761C0(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_1B761C0(&Method_FollowerRootComponent_OnSelectFollowerItem__, v3);
    byte_4A322FF = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v5 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1B7640C(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
    0LL);
  if ( !operationItemListViewManager )
    sub_1B7641C(v6, v7);
  FollowerSelectItemListViewManager__SetMode(operationItemListViewManager, 2, v5, 0LL);
}


void __fastcall FollowerRootComponent__EndCloseTutorialArrow(FollowerRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *tutorialMaskBase2; // x0

  if ( (byte_4A3230A & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_8624/*"MENU_SELECT_ITEM"*/, method);
    byte_4A3230A = 1;
  }
  tutorialMaskBase2 = this->fields.tutorialMaskBase2;
  if ( !tutorialMaskBase2
    || (UnityEngine_GameObject__SetActive(tutorialMaskBase2, 0, 0LL),
        tutorialMaskBase2 = (UnityEngine_GameObject_o *)this->fields.myFSM,
        this->fields.state = 3,
        !tutorialMaskBase2) )
  {
    sub_1B7641C(tutorialMaskBase2, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)tutorialMaskBase2, (System_String_o *)StringLiteral_8624/*"MENU_SELECT_ITEM"*/, 0LL);
}


void __fastcall FollowerRootComponent__EndLoadCommonBg(FollowerRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Component_o *backSkinSprite; // x0
  System_Action_o *v6; // x20

  if ( (byte_4A322EF & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, method);
    sub_1B761C0(&AtlasManager_TypeInfo, v3);
    sub_1B761C0(&Method_FollowerRootComponent_EndLoadOutGameAtlas__, v4);
    byte_4A322EF = 1;
  }
  backSkinSprite = (UnityEngine_Component_o *)this->fields.backSkinSprite;
  if ( !backSkinSprite
    || (backSkinSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(backSkinSprite, 0LL)) == 0LL )
  {
    sub_1B7641C(backSkinSprite, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)backSkinSprite, 1, 0LL);
  v6 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
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

  if ( (byte_4A322F1 & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, method);
    sub_1B761C0(&AtlasManager_TypeInfo, v3);
    sub_1B761C0(&Method_FollowerRootComponent_EndLoadPartyOrganizationAtlas__, v4);
    byte_4A322F1 = 1;
  }
  v5 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
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

  if ( (byte_4A322F0 & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, method);
    sub_1B761C0(&AtlasManager_TypeInfo, v3);
    sub_1B761C0(&Method_FollowerRootComponent_EndLoadEventAtlas__, v4);
    byte_4A322F0 = 1;
  }
  v5 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
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

  if ( (byte_4A322F2 & 1) == 0 )
  {
    sub_1B761C0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_1B761C0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v3);
    byte_4A322F2 = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    goto LABEL_15;
  FollowerSelectItemListViewManager__AdjustButton(operationItemListViewManager, 0LL);
  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    goto LABEL_15;
  FollowerSelectItemListViewManager__SetClassBoardInfo(operationItemListViewManager, 0LL);
  SceneRootComponent__beginStartUp_38411824((SceneRootComponent_o *)this, 0LL);
  if ( this->fields.isForceFadeOut )
  {
    this->fields.isForceFadeOut = 0;
    operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !operationItemListViewManager )
      goto LABEL_15;
    CommonUI__maskFadeInit((CommonUI_o *)operationItemListViewManager, 0LL);
    operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !operationItemListViewManager )
      goto LABEL_15;
    CommonUI__maskFadeout((CommonUI_o *)operationItemListViewManager, 1, 0.0, 0LL, 0LL);
    FollowerRootComponent__StartBattleSetupMenu(this, v5);
  }
  operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_371299C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !operationItemListViewManager )
    goto LABEL_15;
  if ( PartyOrganizationUtility__ExistsTemporaryPartyInfo(
         (PartyOrganizationUtility_o *)operationItemListViewManager,
         0LL) )
  {
    operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( operationItemListViewManager )
    {
      CommonUI__maskFadeInit((CommonUI_o *)operationItemListViewManager, 0LL);
      operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( operationItemListViewManager )
      {
        CommonUI__maskFadeout((CommonUI_o *)operationItemListViewManager, 1, 0.0, 0LL, 0LL);
        this->fields.state = 0;
        FollowerRootComponent__Init(this, v6);
        return;
      }
    }
LABEL_15:
    sub_1B7641C(operationItemListViewManager, method);
  }
}


void __fastcall FollowerRootComponent__EndOpenTutorialArrow(FollowerRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4A3230F & 1) == 0 )
  {
    sub_1B761C0(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_1B761C0(&Method_FollowerRootComponent_OnSelectFollowerItem__, v3);
    byte_4A3230F = 1;
  }
  this->fields.state = 3;
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v5 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1B7640C(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
    0LL);
  if ( !operationItemListViewManager )
    sub_1B7641C(v6, v7);
  FollowerSelectItemListViewManager__SetMode(operationItemListViewManager, 4, v5, 0LL);
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

  v4 = this;
  if ( (byte_4A32307 & 1) == 0 )
  {
    sub_1B761C0(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, isDecide);
    sub_1B761C0(&Method_FollowerRootComponent_CallbackRefresh__, v5);
    sub_1B761C0(&Method_FollowerRootComponent_OnSelectFollowerItem__, v6);
    sub_1B761C0(&Method_NetworkManager_getRequest_FollowerRecommendSupportListRequest___, v7);
    sub_1B761C0(&NetworkManager_TypeInfo, v8);
    sub_1B761C0(&NetworkManager_ResultCallbackFunc_TypeInfo, v9);
    this = (FollowerRootComponent_o *)sub_1B761C0(
                                        &Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__,
                                        v10);
    byte_4A32307 = 1;
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
      this = (FollowerRootComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_371299C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !this )
        goto LABEL_18;
      LOBYTE(this->fields.followerQuestInfomationDraw) = 1;
    }
    v12 = (NetworkManager_ResultCallbackFunc_o *)sub_1B7640C(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v12,
      (Il2CppObject *)v4,
      Method_FollowerRootComponent_CallbackRefresh__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    this = (FollowerRootComponent_o *)NetworkManager__getRequest_object_(
                                        v12,
                                        (const MethodInfo_2EE44C0 *)Method_NetworkManager_getRequest_FollowerRecommendSupportListRequest___);
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
    sub_1B7641C(this, isDecide);
  }
  operationItemListViewManager = v4->fields.operationItemListViewManager;
  v16 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1B7640C(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v16,
    (Il2CppObject *)v4,
    (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
    0LL);
  if ( !operationItemListViewManager )
    goto LABEL_18;
  FollowerSelectItemListViewManager__SetMode(operationItemListViewManager, 2, v16, 0LL);
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

  v4 = this;
  if ( (byte_4A32306 & 1) == 0 )
  {
    sub_1B761C0(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, isDecide);
    sub_1B761C0(&Method_FollowerRootComponent_CallbackRefresh__, v5);
    sub_1B761C0(&Method_FollowerRootComponent_OnSelectFollowerItem__, v6);
    sub_1B761C0(&Method_NetworkManager_getRequest_FollowerListRequest___, v7);
    sub_1B761C0(&NetworkManager_TypeInfo, v8);
    sub_1B761C0(&NetworkManager_ResultCallbackFunc_TypeInfo, v9);
    this = (FollowerRootComponent_o *)sub_1B761C0(
                                        &Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__,
                                        v10);
    byte_4A32306 = 1;
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
      this = (FollowerRootComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_371299C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !this )
        goto LABEL_18;
      LOBYTE(this->fields.followerQuestInfomationDraw) = 1;
    }
    v12 = (NetworkManager_ResultCallbackFunc_o *)sub_1B7640C(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v12,
      (Il2CppObject *)v4,
      Method_FollowerRootComponent_CallbackRefresh__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    this = (FollowerRootComponent_o *)NetworkManager__getRequest_object_(
                                        v12,
                                        (const MethodInfo_2EE44C0 *)Method_NetworkManager_getRequest_FollowerListRequest___);
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
    sub_1B7641C(this, isDecide);
  }
  operationItemListViewManager = v4->fields.operationItemListViewManager;
  v16 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1B7640C(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v16,
    (Il2CppObject *)v4,
    (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
    0LL);
  if ( !operationItemListViewManager )
    goto LABEL_18;
  FollowerSelectItemListViewManager__SetMode(operationItemListViewManager, 2, v16, 0LL);
  this = (FollowerRootComponent_o *)v4->fields.commonConfirmDialog;
  if ( !this )
    goto LABEL_18;
  CommonConfirmDialog__Close((CommonConfirmDialog_o *)this, 0LL);
}


void __fastcall FollowerRootComponent__EndRefreshRest(FollowerRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4A32309 & 1) == 0 )
  {
    sub_1B761C0(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_1B761C0(&Method_FollowerRootComponent_OnSelectFollowerItem__, v3);
    byte_4A32309 = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v5 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1B7640C(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
    0LL);
  if ( !operationItemListViewManager )
    sub_1B7641C(v6, v7);
  FollowerSelectItemListViewManager__SetMode(operationItemListViewManager, 2, v5, 0LL);
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

  if ( (byte_4A322FB & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, isDecide);
    sub_1B761C0(&Method_FollowerRootComponent_EndCloseShowServant__, v4);
    sub_1B761C0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4A322FB = 1;
  }
  operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager
    || (ListViewManager__SetScrollView(
          operationItemListViewManager,
          this->fields.openScroll,
          this->fields.openOffset,
          0LL),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v8 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo),
        System_Action___ctor(v8, (Il2CppObject *)this, Method_FollowerRootComponent_EndCloseShowServant__, 0LL),
        !Instance) )
  {
    sub_1B7641C(operationItemListViewManager, isDecide);
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

  if ( (byte_4A322FE & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, isDecide);
    sub_1B761C0(&Method_FollowerRootComponent_EndCloseShowServantEquip__, v4);
    sub_1B761C0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4A322FE = 1;
  }
  operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager
    || (ListViewManager__SetScrollView(
          operationItemListViewManager,
          this->fields.openScroll,
          this->fields.openOffset,
          0LL),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v8 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo),
        System_Action___ctor(v8, (Il2CppObject *)this, Method_FollowerRootComponent_EndCloseShowServantEquip__, 0LL),
        !Instance) )
  {
    sub_1B7641C(operationItemListViewManager, isDecide);
  }
  CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)Instance, v8, 0LL);
}


void __fastcall FollowerRootComponent__EndTutorialFollowerCommonGuide(
        FollowerRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4A32310 & 1) == 0 )
  {
    sub_1B761C0(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_1B761C0(&Method_FollowerRootComponent_OnSelectFollowerItem__, v3);
    byte_4A32310 = 1;
  }
  this->fields.state = 3;
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v5 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1B7640C(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
    0LL);
  if ( !operationItemListViewManager )
    sub_1B7641C(v6, v7);
  FollowerSelectItemListViewManager__SetMode(operationItemListViewManager, 2, v5, 0LL);
}


void __fastcall FollowerRootComponent__EndTutorialFollowerGuideNotification1(
        FollowerRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  TitleInfoControl_o *titleInfo; // x0
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v6; // x21

  if ( (byte_4A3230D & 1) == 0 )
  {
    sub_1B761C0(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_1B761C0(&Method_FollowerRootComponent_OnSelectFollowerItem__, v3);
    byte_4A3230D = 1;
  }
  titleInfo = this->fields.titleInfo;
  this->fields.state = 3;
  if ( !titleInfo
    || (TitleInfoControl__setBackBtnEnable(titleInfo, 0, 0LL),
        operationItemListViewManager = this->fields.operationItemListViewManager,
        v6 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1B7640C(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo),
        FollowerSelectItemListViewManager_CallbackFunc___ctor(
          v6,
          (Il2CppObject *)this,
          (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
          0LL),
        !operationItemListViewManager) )
  {
    sub_1B7641C(titleInfo, method);
  }
  FollowerSelectItemListViewManager__SetMode(operationItemListViewManager, 2, v6, 0LL);
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

  if ( (byte_4A3230E & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, method);
    sub_1B761C0(&FSUtility_TypeInfo, v3);
    sub_1B761C0(&Method_FollowerRootComponent_EndOpenTutorialArrow__, v4);
    sub_1B761C0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4A3230E = 1;
  }
  tutorialMaskBase2 = this->fields.tutorialMaskBase2;
  if ( !tutorialMaskBase2 )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(tutorialMaskBase2, 1, 0LL);
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  IsUnderVista = FSUtility__IsUnderVista(0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_FollowerRootComponent_EndOpenTutorialArrow__, 0LL);
  if ( !Instance )
LABEL_12:
    sub_1B7641C(tutorialMaskBase2, method);
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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  BattleSetupInfo_o *battleSetupInfo; // x0
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  struct BattleSetupInfo_o *v24; // x8
  int32_t InitialDisplayClass; // w20
  FollowerSelectItemListViewManager_o *v26; // x20
  struct BattleSetupInfo_o *v27; // x8
  PartyOrganizationUtility_c *v28; // x0
  Il2CppObject *Instance; // x20
  System_String_o *v30; // x21
  FollowerRootComponent___c_c *v31; // x8
  System_Action_o *_9__50_0; // x23
  System_String_o *v33; // x22
  Il2CppObject *v34; // x24
  struct FollowerRootComponent___c_StaticFields *static_fields; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  FollowerSelectItemListViewManager_o *v38; // x20
  System_Action_o *v39; // x21
  NetworkManager_ResultCallbackFunc_o *v40; // x20
  FollowerRecommendSupportListRequest_o *v41; // x20
  struct BattleSetupInfo_o *v42; // x8
  Il2CppObject *entity; // [xsp+38h] [xbp-48h] BYREF

  if ( (byte_4A322F8 & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, method);
    sub_1B761C0(&ClassButtonControlComponent_TypeInfo, v3);
    sub_1B761C0(&Method_DataManager_GetMaster_UserRecommendFollowerMaster___, v4);
    sub_1B761C0(&DataManager_TypeInfo, v5);
    sub_1B761C0(
      &Method_DataMasterBase_UserRecommendFollowerMaster__UserRecommendFollowerEntity__long__TryGetSingleEntity__,
      v6);
    sub_1B761C0(&Method_FollowerRootComponent_CallbackInitRecommendFollowerRequest__, v7);
    sub_1B761C0(&Method_FollowerRootComponent_OnMoveEnd__, v8);
    sub_1B761C0(&LocalizationManager_TypeInfo, v9);
    sub_1B761C0(&Method_NetworkManager_getRequest_FollowerRecommendSupportListRequest___, v10);
    sub_1B761C0(&NetworkManager_TypeInfo, v11);
    sub_1B761C0(&PartyOrganizationUtility_TypeInfo, v12);
    sub_1B761C0(&NetworkManager_ResultCallbackFunc_TypeInfo, v13);
    sub_1B761C0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14);
    sub_1B761C0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v15);
    sub_1B761C0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v16);
    sub_1B761C0(&Method_FollowerRootComponent___c__Init_b__50_0__, v17);
    sub_1B761C0(&FollowerRootComponent___c_TypeInfo, v18);
    sub_1B761C0(&StringLiteral_8624/*"MENU_SELECT_ITEM"*/, v19);
    sub_1B761C0(&StringLiteral_10264/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_EXPIRED"*/, v20);
    sub_1B761C0(&StringLiteral_1/*""*/, v21);
    byte_4A322F8 = 1;
  }
  entity = 0LL;
  if ( !this->fields.state )
  {
    if ( this->fields.isInitRecommendRequest )
      goto LABEL_17;
    battleSetupInfo = this->fields.battleSetupInfo;
    if ( !battleSetupInfo )
      goto LABEL_55;
    operationItemListViewManager = this->fields.operationItemListViewManager;
    battleSetupInfo = (BattleSetupInfo_o *)BattleSetupInfo__TargetQuestId(battleSetupInfo, 0LL);
    v24 = this->fields.battleSetupInfo;
    if ( !v24 || !operationItemListViewManager )
      goto LABEL_55;
    InitialDisplayClass = FollowerSelectItemListViewManager__GetInitialDisplayClass(
                            operationItemListViewManager,
                            (int32_t)battleSetupInfo,
                            v24->fields.questPhase,
                            1,
                            0LL);
    if ( !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
    if ( !ClassButtonControlComponent__IsRecommendSupportGroupType(InitialDisplayClass, 0LL) )
      goto LABEL_17;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    battleSetupInfo = (BattleSetupInfo_o *)DataManager__GetMaster_object_((const MethodInfo_2E623B4 *)Method_DataManager_GetMaster_UserRecommendFollowerMaster___);
    if ( !battleSetupInfo )
      goto LABEL_55;
    if ( !DataMasterBase_object__object__long___TryGetSingleEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)battleSetupInfo,
            &entity,
            (const MethodInfo_30FFA08 *)Method_DataMasterBase_UserRecommendFollowerMaster__UserRecommendFollowerEntity__long__TryGetSingleEntity__) )
      goto LABEL_46;
    battleSetupInfo = (BattleSetupInfo_o *)entity;
    if ( !entity )
      goto LABEL_55;
    if ( UserRecommendFollowerEntity__IsEnableData((UserRecommendFollowerEntity_o *)entity, 0LL) )
    {
LABEL_17:
      battleSetupInfo = (BattleSetupInfo_o *)this->fields.operationItemListViewManager;
      if ( !battleSetupInfo )
        goto LABEL_55;
      battleSetupInfo = (BattleSetupInfo_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)battleSetupInfo,
                                               0LL);
      if ( !battleSetupInfo )
        goto LABEL_55;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)battleSetupInfo, 1, 0LL);
      battleSetupInfo = this->fields.battleSetupInfo;
      if ( !battleSetupInfo )
        goto LABEL_55;
      v26 = this->fields.operationItemListViewManager;
      battleSetupInfo = (BattleSetupInfo_o *)BattleSetupInfo__TargetQuestId(battleSetupInfo, 0LL);
      v27 = this->fields.battleSetupInfo;
      if ( !v27 )
        goto LABEL_55;
      if ( !v26 )
        goto LABEL_55;
      FollowerSelectItemListViewManager__CreateList(
        v26,
        (int32_t)battleSetupInfo,
        v27->fields.questPhase,
        this->fields.friendPointUpVal,
        this->fields.friendPointUpMaxVal,
        this->fields.friendPointCampaignEntityList,
        v27->fields.questRestrictionInfo,
        0LL);
      battleSetupInfo = (BattleSetupInfo_o *)this->fields.operationItemListViewManager;
      if ( !battleSetupInfo )
        goto LABEL_55;
      if ( ListViewManager__get_ItemSum((ListViewManager_o *)battleSetupInfo, 0LL) > 0 )
        goto LABEL_26;
      battleSetupInfo = (BattleSetupInfo_o *)this->fields.operationItemListViewManager;
      if ( !battleSetupInfo )
        goto LABEL_55;
      if ( FollowerSelectItemListViewManager__GetItemCount((FollowerSelectItemListViewManager_o *)battleSetupInfo, 0LL) < 1 )
      {
        battleSetupInfo = (BattleSetupInfo_o *)this->fields.myFSM;
        this->fields.selectItemNum = -1;
        if ( battleSetupInfo )
        {
          PlayMakerFSM__SendEvent((PlayMakerFSM_o *)battleSetupInfo, (System_String_o *)StringLiteral_8624/*"MENU_SELECT_ITEM"*/, 0LL);
          return;
        }
      }
      else
      {
LABEL_26:
        battleSetupInfo = (BattleSetupInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
        if ( !battleSetupInfo )
          goto LABEL_55;
        if ( BYTE4(battleSetupInfo->fields.choiceRandomLimitCounts) )
        {
          v28 = PartyOrganizationUtility_TypeInfo;
          if ( !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
            v28 = PartyOrganizationUtility_TypeInfo;
          }
          if ( UnityEngine_PlayerPrefs__GetInt(v28->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0, 0LL) )
          {
            battleSetupInfo = (BattleSetupInfo_o *)SingletonTemplate_object___get_Instance((const MethodInfo_371299C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
            if ( !battleSetupInfo )
              goto LABEL_55;
            if ( !PartyOrganizationUtility__IsAvailableFriendshipUpItem(
                    (PartyOrganizationUtility_o *)battleSetupInfo,
                    0LL) )
            {
              Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              battleSetupInfo = (BattleSetupInfo_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_10264/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_EXPIRED"*/,
                                                       0LL);
              v30 = (System_String_o *)battleSetupInfo;
              v31 = FollowerRootComponent___c_TypeInfo;
              if ( !FollowerRootComponent___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(FollowerRootComponent___c_TypeInfo);
                v31 = FollowerRootComponent___c_TypeInfo;
              }
              _9__50_0 = v31->static_fields->__9__50_0;
              v33 = (System_String_o *)StringLiteral_1/*""*/;
              if ( !_9__50_0 )
              {
                if ( !v31->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v31);
                  v31 = FollowerRootComponent___c_TypeInfo;
                }
                v34 = (Il2CppObject *)v31->static_fields->__9;
                _9__50_0 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
                System_Action___ctor(_9__50_0, v34, Method_FollowerRootComponent___c__Init_b__50_0__, 0LL);
                static_fields = FollowerRootComponent___c_TypeInfo->static_fields;
                static_fields->__9__50_0 = _9__50_0;
                sub_1B76164((ServantStatusBattleListViewItem_o *)&static_fields->__9__50_0, (int32_t)_9__50_0, v36, v37);
              }
              if ( !Instance )
                goto LABEL_55;
              CommonUI__OpenNotificationDialog(
                (CommonUI_o *)Instance,
                v33,
                v30,
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
        v38 = this->fields.operationItemListViewManager;
        v39 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
        System_Action___ctor(v39, (Il2CppObject *)this, Method_FollowerRootComponent_OnMoveEnd__, 0LL);
        if ( v38 )
        {
          FollowerSelectItemListViewManager__SetMode_30681292(v38, 1, v39, 0LL);
          return;
        }
      }
    }
    else
    {
LABEL_46:
      v40 = (NetworkManager_ResultCallbackFunc_o *)sub_1B7640C(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v40,
        (Il2CppObject *)this,
        Method_FollowerRootComponent_CallbackInitRecommendFollowerRequest__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      battleSetupInfo = (BattleSetupInfo_o *)NetworkManager__getRequest_object_(
                                               v40,
                                               (const MethodInfo_2EE44C0 *)Method_NetworkManager_getRequest_FollowerRecommendSupportListRequest___);
      if ( this->fields.battleSetupInfo )
      {
        v41 = (FollowerRecommendSupportListRequest_o *)battleSetupInfo;
        battleSetupInfo = (BattleSetupInfo_o *)BattleSetupInfo__TargetQuestId(this->fields.battleSetupInfo, 0LL);
        v42 = this->fields.battleSetupInfo;
        if ( v42 )
        {
          if ( v41 )
          {
            FollowerRecommendSupportListRequest__beginRequest(
              v41,
              0,
              (int32_t)battleSetupInfo,
              v42->fields.questPhase,
              0LL);
            battleSetupInfo = (BattleSetupInfo_o *)this->fields.operationItemListViewManager;
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
    sub_1B7641C(battleSetupInfo, method);
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
  const MethodInfo *v24; // x1
  SceneRootComponent_o *StackedRootComponent; // x0
  __int64 methodPtr_low; // x10
  UnityEngine_Component_o *v27; // x20
  _QWORD *v28; // x0
  System_Reflection_MethodBase_o *v29; // x0
  FollowerRootComponent_o *v30; // x0
  const MethodInfo *v31; // x1
  _QWORD *monitor; // x8
  int v33; // w8
  void *v34; // x19
  unsigned int v35; // w20
  _QWORD *v36; // x0
  System_Reflection_MethodBase_o *v37; // x0
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  __int64 *v39; // x8
  _QWORD *v40; // x0
  System_Reflection_MethodBase_o *v41; // x0
  TerminalPramsManager_c *v42; // x0
  int lastPlayQuestConsumeAp; // w21
  System_String_o **v44; // x8
  System_String_o *v45; // x20
  System_String_o *v46; // x21
  Il2CppObject *v47; // x22
  System_String_o *v48; // x23
  System_String_o *v49; // x24
  CommonConfirmDialog_ClickDelegate_o *v50; // x25

  if ( (byte_4A3230B & 1) == 0 )
  {
    sub_1B761C0(&BattleRootComponent_TypeInfo, method);
    sub_1B761C0(&CommonConfirmDialog_ClickDelegate_TypeInfo, v3);
    sub_1B761C0(&Method_UnityEngine_Component_GetComponentsInChildren_Camera___, v4);
    sub_1B761C0(&Method_FollowerRootComponent_OnClickBack__, v5);
    sub_1B761C0(&Method_FollowerRootComponent__OnClickBack_b__71_0__, v6);
    sub_1B761C0(&FollowerRootComponent_TypeInfo, v7);
    sub_1B761C0(&LocalizationManager_TypeInfo, v8);
    sub_1B761C0(&UnityEngine_Object_TypeInfo, v9);
    sub_1B761C0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_1B761C0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v11);
    sub_1B761C0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v12);
    sub_1B761C0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v13);
    sub_1B761C0(&TerminalPramsManager_TypeInfo, v14);
    sub_1B761C0(&StringLiteral_6407/*"FOLLOWER_SELECT_BACK_TO_QUEST_NO_AP_CONSUME_AP0"*/, v15);
    sub_1B761C0(&StringLiteral_3527/*"CLICK_BACK"*/, v16);
    sub_1B761C0(&StringLiteral_6406/*"FOLLOWER_SELECT_BACK_TO_QUEST_NO_AP_CONSUME"*/, v17);
    sub_1B761C0(&StringLiteral_6405/*"FOLLOWER_SELECT_BACK_TITLE"*/, v18);
    sub_1B761C0(&StringLiteral_3758/*"COMMON_CONFIRM_NO"*/, v19);
    sub_1B761C0(&StringLiteral_3762/*"COMMON_CONFIRM_YES"*/, v20);
    sub_1B761C0(&StringLiteral_1/*""*/, v21);
    sub_1B761C0(&StringLiteral_3528/*"CLICK_BACK_BATTLE_SETUP"*/, v22);
    byte_4A3230B = 1;
  }
  if ( this->fields.state == 3 && !this->fields.tutorialState )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( !Instance )
      goto LABEL_63;
    if ( !*((_BYTE *)Instance + 148) )
      goto LABEL_34;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_63;
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
        v28 = (_QWORD *)sub_1B761D8(Method_FollowerRootComponent_OnClickBack__);
      v29 = (System_Reflection_MethodBase_o *)sub_1B761A4(v28, v28[4]);
      OverwriteAssetSoundName__PlaySystemSe(v29, 1, 0LL);
      this->fields.state = 4;
      FollowerRootComponent__QuestHintDialogResetTemporarilyId(v30, v31);
      if ( v27 )
      {
        Instance = UnityEngine_Component__get_gameObject(v27, 0LL);
        if ( Instance )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
          monitor = v27[3].monitor;
          if ( monitor )
          {
            Instance = (void *)monitor[62];
            if ( Instance )
            {
              BattleResultComponent__EndResult((BattleResultComponent_o *)Instance, 0LL);
              Instance = this->fields.myFSM;
              if ( Instance )
              {
                PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3527/*"CLICK_BACK"*/, 0LL);
                Instance = UnityEngine_Component__get_transform(v27, 0LL);
                if ( Instance )
                {
                  Instance = UnityEngine_Component__GetComponentsInChildren_object__48601372(
                               (UnityEngine_Component_o *)Instance,
                               (const MethodInfo_2E5991C *)Method_UnityEngine_Component_GetComponentsInChildren_Camera___);
                  if ( Instance )
                  {
                    v33 = *((_DWORD *)Instance + 6);
                    v34 = Instance;
                    if ( v33 < 1 )
                      return;
                    v35 = 0;
                    while ( 1 )
                    {
                      if ( v35 >= v33 )
                        sub_1B76424(Instance, v24);
                      Instance = (void *)*((_QWORD *)v34 + (int)v35 + 4);
                      if ( !Instance )
                        break;
                      Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
                      if ( !Instance )
                        break;
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
                      v33 = *((_DWORD *)v34 + 6);
                      if ( (int)++v35 >= v33 )
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
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( !Instance )
        goto LABEL_63;
      if ( AvalonSceneManager__IsStackScene((AvalonSceneManager_o *)Instance, 0LL) )
        goto LABEL_40;
      Instance = SingletonTemplate_object___get_Instance((const MethodInfo_371299C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_63;
      if ( *((int *)Instance + 12) > 0 )
        goto LABEL_40;
      Instance = SingletonTemplate_object___get_Instance((const MethodInfo_371299C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_63;
      if ( *((_BYTE *)Instance + 137) )
      {
LABEL_40:
        v36 = Method_FollowerRootComponent_OnClickBack__;
        if ( (*((_BYTE *)Method_FollowerRootComponent_OnClickBack__ + 83) & 2) != 0 )
          v36 = (_QWORD *)sub_1B761D8(Method_FollowerRootComponent_OnClickBack__);
        v37 = (System_Reflection_MethodBase_o *)sub_1B761A4(v36, v36[4]);
        OverwriteAssetSoundName__PlaySystemSe(v37, 1, 0LL);
        battleSetupInfo = this->fields.battleSetupInfo;
        this->fields.state = 4;
        if ( battleSetupInfo )
        {
          if ( battleSetupInfo->fields.isChildFollower )
          {
            Instance = this->fields.myFSM;
            if ( !Instance )
              goto LABEL_63;
            v39 = &StringLiteral_3528/*"CLICK_BACK_BATTLE_SETUP"*/;
          }
          else
          {
            FollowerRootComponent__QuestHintDialogResetTemporarilyId((FollowerRootComponent_o *)Instance, v24);
            Instance = this->fields.myFSM;
            if ( !Instance )
              goto LABEL_63;
            v39 = &StringLiteral_3527/*"CLICK_BACK"*/;
          }
          PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v39, 0LL);
          return;
        }
      }
      else
      {
        v40 = Method_FollowerRootComponent_OnClickBack__;
        if ( (*((_BYTE *)Method_FollowerRootComponent_OnClickBack__ + 83) & 2) != 0 )
          v40 = (_QWORD *)sub_1B761D8(Method_FollowerRootComponent_OnClickBack__);
        v41 = (System_Reflection_MethodBase_o *)sub_1B761A4(v40, v40[4]);
        OverwriteAssetSoundName__PlaySystemSe(v41, 1, 0LL);
        v42 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v42 = TerminalPramsManager_TypeInfo;
        }
        lastPlayQuestConsumeAp = v42->static_fields->lastPlayQuestConsumeAp;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v44 = (System_String_o **)&StringLiteral_6406/*"FOLLOWER_SELECT_BACK_TO_QUEST_NO_AP_CONSUME"*/;
        if ( lastPlayQuestConsumeAp <= 0 )
          v44 = (System_String_o **)&StringLiteral_6407/*"FOLLOWER_SELECT_BACK_TO_QUEST_NO_AP_CONSUME_AP0"*/;
        v45 = LocalizationManager__Get(*v44, 0LL);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v46 = LocalizationManager__Get((System_String_o *)StringLiteral_6405/*"FOLLOWER_SELECT_BACK_TITLE"*/, 0LL);
        v47 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v48 = LocalizationManager__Get((System_String_o *)StringLiteral_3762/*"COMMON_CONFIRM_YES"*/, 0LL);
        v49 = LocalizationManager__Get((System_String_o *)StringLiteral_3758/*"COMMON_CONFIRM_NO"*/, 0LL);
        v50 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B7640C(CommonConfirmDialog_ClickDelegate_TypeInfo);
        CommonConfirmDialog_ClickDelegate___ctor(
          v50,
          (Il2CppObject *)this,
          Method_FollowerRootComponent__OnClickBack_b__71_0__,
          0LL);
        Instance = FollowerRootComponent_TypeInfo;
        if ( !FollowerRootComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FollowerRootComponent_TypeInfo);
          Instance = FollowerRootComponent_TypeInfo;
        }
        if ( v47 )
        {
          CommonUI__OpenConfirmDecideDlg(
            (CommonUI_o *)v47,
            v46,
            v45,
            v48,
            v49,
            v50,
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
    sub_1B7641C(Instance, v24);
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
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v26; // x21
  const MethodInfo *v27; // x1
  System_Action_o *v28; // x22

  if ( (byte_4A32304 & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, method);
    sub_1B761C0(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, v3);
    sub_1B761C0(&Method_FollowerRootComponent_EndTutorialFollowerCommonGuide__, v4);
    sub_1B761C0(&Method_FollowerRootComponent_EndTutorialFollowerGuideNotification1__, v5);
    sub_1B761C0(&Method_FollowerRootComponent_EndTutorialFollowerGuideNotification2__, v6);
    sub_1B761C0(&Method_FollowerRootComponent_OnSelectFollowerItem__, v7);
    sub_1B761C0(&LocalizationManager_TypeInfo, v8);
    sub_1B761C0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_1B761C0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v10);
    sub_1B761C0(&StringLiteral_13489/*"TUTORIAL_MESSAGE_FOLLOWER2"*/, v11);
    sub_1B761C0(&StringLiteral_13488/*"TUTORIAL_MESSAGE_FOLLOWER1"*/, v12);
    byte_4A32304 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( this->fields.tutorialState == 1 )
    {
      tutorialMode = this->fields.tutorialMode;
      *(_QWORD *)&this->fields.tutorialState = 0x200000002LL;
      if ( tutorialMode == 3 )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v15 = LocalizationManager__Get((System_String_o *)StringLiteral_13489/*"TUTORIAL_MESSAGE_FOLLOWER2"*/, 0LL);
        v16 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
        v17 = &Method_FollowerRootComponent_EndTutorialFollowerGuideNotification2__;
LABEL_25:
        v28 = v16;
        System_Action___ctor(v16, (Il2CppObject *)this, *v17, 0LL);
        if ( Instance )
        {
          CommonUI__OpenTutorialNotificationDialog((CommonUI_o *)Instance, v15, -1, v28, 0LL);
          return;
        }
LABEL_27:
        sub_1B7641C(battleSetupInfo, method);
      }
      if ( tutorialMode == 2 )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v15 = LocalizationManager__Get((System_String_o *)StringLiteral_13488/*"TUTORIAL_MESSAGE_FOLLOWER1"*/, 0LL);
        v16 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
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
          v23 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
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
      v26 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1B7640C(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
      FollowerSelectItemListViewManager_CallbackFunc___ctor(
        v26,
        (Il2CppObject *)this,
        (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
        0LL);
      if ( !operationItemListViewManager )
        goto LABEL_27;
      FollowerSelectItemListViewManager__SetMode(operationItemListViewManager, 2, v26, 0LL);
      battleSetupInfo = (BattleSetupInfo_o *)SingletonTemplate_object___get_Instance((const MethodInfo_371299C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !battleSetupInfo )
        goto LABEL_27;
      if ( PartyOrganizationUtility__ExistsTemporaryPartyInfo((PartyOrganizationUtility_o *)battleSetupInfo, 0LL) )
        FollowerRootComponent__StartBattleSetupMenu(this, v27);
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
  __int64 v44; // x1
  __int64 v45; // x1
  __int64 v46; // x1
  __int64 v47; // x1
  __int64 v48; // x8
  __int64 v49; // x20
  SkillInfo_o *v50; // x22
  _QWORD *v51; // x0
  System_Reflection_MethodBase_o *v52; // x0
  Il2CppObject *v53; // x20
  System_String_o *v54; // x20
  System_String_o *v55; // x21
  __int64 v56; // x2
  __int64 v57; // x3
  __int64 v58; // x4
  Il2CppObject *v59; // x0
  System_String_o *v60; // x0
  int32_t v61; // w20
  _QWORD *v62; // x0
  System_Reflection_MethodBase_o *v63; // x0
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v65; // x0
  intptr_t v66; // w2
  _QWORD *v67; // x0
  System_Reflection_MethodBase_o *v68; // x0
  __int64 v69; // x20
  SkillInfo_o *v70; // x24
  Il2CppObject *Entity; // x21
  FollowerRootComponent_o *v72; // x20
  System_String_o *v73; // x21
  System_String_o *v74; // x22
  __int64 v75; // x2
  __int64 v76; // x3
  __int64 v77; // x4
  Il2CppObject *v78; // x0
  System_String_o *v79; // x0
  __int64 v80; // x2
  __int64 v81; // x3
  __int64 v82; // x4
  FollowerRootComponent_o *v83; // x21
  Il2CppObject *v84; // x0
  System_String_o *v85; // x0
  int32_t tutorialMode; // w21
  System_String_o *v87; // x20
  _QWORD *v88; // x0
  System_Reflection_MethodBase_o *v89; // x0
  bool v90; // w22
  CommonConfirmDialog_ClickDelegate_o *v91; // x21
  bool v92; // w20
  CommonConfirmDialog_o *commonConfirmDialog; // x19
  System_String_o *v94; // x20
  FollowerRootComponent_o *v95; // x22
  int32_t v96; // w8
  _QWORD *v97; // x0
  System_Reflection_MethodBase_o *v98; // x0
  FollowerRootComponent_o *v99; // x20
  PartyOrganizationUtility_c *v100; // x0
  _QWORD *v101; // x0
  System_Reflection_MethodBase_o *v102; // x0
  int32_t v103; // w8
  __int64 *v104; // x8
  FollowerRootComponent_o *v105; // x20
  _QWORD *v106; // x0
  System_Reflection_MethodBase_o *v107; // x0
  const MethodInfo *v108; // x2
  _QWORD *v109; // x0
  System_Reflection_MethodBase_o *v110; // x0
  int32_t v111; // w8
  struct BattleSetupInfo_o *v112; // x8
  NetworkManager_ResultCallbackFunc_o *v113; // x20
  FollowerRecommendSupportListRequest_o *v114; // x20
  struct BattleSetupInfo_o *v115; // x8
  Il2CppObject *Instance; // x20
  System_String_o *v117; // x21
  System_String_o *v118; // x22
  System_Action_o *v119; // x23
  int tutorialMode_low; // w20
  _QWORD *v121; // x0
  FollowerSelectItemListViewItem_o *v122; // x20
  __int64 v123; // x21
  __int64 v124; // x22
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  int64_t userEquipId; // x21
  __int64 v127; // x22
  EquipTargetInfo_o *EquipInfo; // x21
  __int64 v129; // x22
  __int64 v130; // x23
  _QWORD *v131; // x0
  System_Reflection_MethodBase_o *v132; // x0
  const MethodInfo *v133; // x3
  int32_t v134; // w2
  _QWORD *v135; // x0
  FollowerSelectItemListViewManager_CallbackFunc_o *v136; // x21
  int32_t v137; // w1
  _QWORD *v138; // x0
  System_Reflection_MethodBase_o *v139; // x0
  Il2CppObject *v140; // x20
  FollowerRootComponent_o *v141; // x21
  FollowerRootComponent___c_c *v142; // x8
  System_Action_o *_9__65_0; // x23
  System_String_o *v144; // x22
  Il2CppObject *v145; // x24
  struct FollowerRootComponent___c_StaticFields *static_fields; // x0
  int32_t v147; // w2
  int32_t v148; // w3
  Il2CppObject *v149; // x20
  System_Action_o *v150; // x21
  int m_CancellationTokenSource; // [xsp+38h] [xbp-78h] BYREF
  int32_t lv; // [xsp+3Ch] [xbp-74h] BYREF
  System_String_o *detail; // [xsp+40h] [xbp-70h] BYREF
  System_String_o *name; // [xsp+48h] [xbp-68h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+50h] [xbp-60h] BYREF
  System_String_o *v156; // [xsp+58h] [xbp-58h] BYREF
  System_String_o *v157; // [xsp+60h] [xbp-50h] BYREF
  SkillInfo_array *v158; // [xsp+68h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v159; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v160; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v161; // 0:x0.16

  v6 = this;
  if ( (byte_4A32305 & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_1B761C0(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, v7);
    sub_1B761C0(&CommonConfirmDialog_ClickDelegate_TypeInfo, v8);
    sub_1B761C0(&Method_DataManager_GetMasterData_SkillLvMaster___, v9);
    sub_1B761C0(&Method_DataManager_GetMasterData_SkillMaster___, v10);
    sub_1B761C0(&Method_DataManager_GetMaster_SkillLvMaster___, v11);
    sub_1B761C0(&Method_DataManager_GetMaster_SkillMaster___, v12);
    sub_1B761C0(&DataManager_TypeInfo, v13);
    sub_1B761C0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v14);
    sub_1B761C0(&FollowerListRequest_TypeInfo, v15);
    sub_1B761C0(&FollowerRecommendSupportListRequest_TypeInfo, v16);
    sub_1B761C0(&Method_FollowerRootComponent_CallbackRefresh__, v17);
    sub_1B761C0(&Method_FollowerRootComponent_EndCloseTutorialArrow__, v18);
    sub_1B761C0(&Method_FollowerRootComponent_EndRecommendRefreshConfirm__, v19);
    sub_1B761C0(&Method_FollowerRootComponent_EndRefreshConfirm__, v20);
    sub_1B761C0(&Method_FollowerRootComponent_EndRefreshRest__, v21);
    sub_1B761C0(&Method_FollowerRootComponent_OnSelectFollowerItem__, v22);
    sub_1B761C0(&FollowerRootComponent_TypeInfo, v23);
    sub_1B761C0(&int_TypeInfo, v24);
    sub_1B761C0(&LocalizationManager_TypeInfo, v25);
    sub_1B761C0(&Method_NetworkManager_getRequest_FollowerRecommendSupportListRequest___, v26);
    sub_1B761C0(&NetworkManager_TypeInfo, v27);
    sub_1B761C0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v28);
    sub_1B761C0(&PartyOrganizationUtility_TypeInfo, v29);
    sub_1B761C0(&NetworkManager_ResultCallbackFunc_TypeInfo, v30);
    sub_1B761C0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v31);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v32);
    sub_1B761C0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v33);
    sub_1B761C0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v34);
    sub_1B761C0(&Method_FollowerRootComponent___c__OnSelectFollowerItem_b__65_0__, v35);
    sub_1B761C0(&FollowerRootComponent___c_TypeInfo, v36);
    sub_1B761C0(&StringLiteral_6430/*"FOLLOWER_SELECT_REFRESH_TITLE"*/, v37);
    sub_1B761C0(&StringLiteral_8624/*"MENU_SELECT_ITEM"*/, v38);
    sub_1B761C0(&StringLiteral_8633/*"MENU_SHOW_SUPPORT"*/, v39);
    sub_1B761C0(&StringLiteral_6427/*"FOLLOWER_SELECT_REFRESH_MESSAGE"*/, v40);
    sub_1B761C0(&StringLiteral_117/*" "*/, v41);
    sub_1B761C0(&StringLiteral_6428/*"FOLLOWER_SELECT_REFRESH_REST_MESSAGE"*/, v42);
    sub_1B761C0(&StringLiteral_10264/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_EXPIRED"*/, v43);
    sub_1B761C0(&StringLiteral_8521/*"MASTER_EQSKILL_LV_TXT"*/, v44);
    sub_1B761C0(&StringLiteral_2983/*"BATTLE_SKILLCHARGETURN"*/, v45);
    sub_1B761C0(&StringLiteral_1/*""*/, v46);
    this = (FollowerRootComponent_o *)sub_1B761C0(&StringLiteral_6429/*"FOLLOWER_SELECT_REFRESH_REST_TITLE"*/, v47);
    byte_4A32305 = 1;
  }
  v157 = 0LL;
  v158 = 0LL;
  skillInfoList = 0LL;
  v156 = 0LL;
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
      v105 = this;
      if ( LOBYTE(this->fields.tutorialMode)
        || FollowerSelectItemListViewItem__get_SvtId((FollowerSelectItemListViewItem_o *)this, 0LL) <= 0 )
      {
        goto LABEL_163;
      }
      v106 = Method_FollowerRootComponent_OnSelectFollowerItem__;
      if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
        v106 = (_QWORD *)sub_1B761D8(Method_FollowerRootComponent_OnSelectFollowerItem__);
      v107 = (System_Reflection_MethodBase_o *)sub_1B761A4(v106, v106[4]);
      OverwriteAssetSoundName__PlaySystemSe(v107, 0, 0LL);
      FollowerRootComponent__SelectShowServant(v6, (FollowerSelectItemListViewItem_o *)v105, v108);
      return;
    case 2:
    case 3:
    case 4:
      v67 = Method_FollowerRootComponent_OnSelectFollowerItem__;
      if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
        v67 = (_QWORD *)sub_1B761D8(Method_FollowerRootComponent_OnSelectFollowerItem__);
      v68 = (System_Reflection_MethodBase_o *)sub_1B761A4(v67, v67[4]);
      OverwriteAssetSoundName__PlaySystemSe(v68, 0, 0LL);
      this = (FollowerRootComponent_o *)v6->fields.operationItemListViewManager;
      if ( !this )
        goto LABEL_195;
      this = (FollowerRootComponent_o *)FollowerSelectItemListViewManager__GetItem(
                                          (FollowerSelectItemListViewManager_o *)this,
                                          v6->fields.selectItemNum,
                                          0LL);
      v69 = kind == 3 ? 1LL : 2LL * (kind == 4);
      if ( !this )
        goto LABEL_195;
      this = (FollowerRootComponent_o *)FollowerSelectItemListViewItem__GetSkillInfo(
                                          (FollowerSelectItemListViewItem_o *)this,
                                          &v158,
                                          0LL);
      if ( !v158 )
        goto LABEL_195;
      if ( (unsigned int)v69 >= v158->max_length )
        goto LABEL_196;
      v70 = v158->m_Items[v69];
      if ( !v70 || v70->fields.id < 1 || v70->fields.lv < 1 )
        goto LABEL_153;
      this = (FollowerRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_195;
      this = (FollowerRootComponent_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_SkillMaster___);
      if ( !this )
        goto LABEL_195;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                 v70->fields.id,
                 (const MethodInfo_30FF780 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      this = (FollowerRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_195;
      this = (FollowerRootComponent_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_SkillLvMaster___);
      if ( !this )
        goto LABEL_195;
      this = (FollowerRootComponent_o *)SkillLvMaster__GetEntity(
                                          (SkillLvMaster_o *)this,
                                          v70->fields.id,
                                          v70->fields.lv,
                                          0LL);
      if ( !Entity )
        goto LABEL_195;
      v72 = this;
      SkillEntity__getSkillMessageInfo((SkillEntity_o *)Entity, &v157, &v156, v70->fields.lv, 0LL);
      v73 = v157;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v74 = LocalizationManager__Get((System_String_o *)StringLiteral_8521/*"MASTER_EQSKILL_LV_TXT"*/, 0LL);
      lv = v70->fields.lv;
      v78 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv, v75, v76, v77);
      v79 = System_String__Format(v74, v78, 0LL);
      v157 = System_String__Concat_61546320(v73, (System_String_o *)StringLiteral_117/*" "*/, v79, 0LL);
      this = (FollowerRootComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2983/*"BATTLE_SKILLCHARGETURN"*/, 0LL);
      if ( !v72 )
        goto LABEL_195;
      v83 = this;
      m_CancellationTokenSource = (int)v72->fields.m_CancellationTokenSource;
      v84 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &m_CancellationTokenSource, v80, v81, v82);
      v85 = System_String__Format((System_String_o *)v83, v84, 0LL);
      tutorialMode = v6->fields.tutorialMode;
      v87 = v85;
      this = (FollowerRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_195;
      if ( tutorialMode == 3 )
        CommonUI__OpenDetailLongInfoDialogOnFade((CommonUI_o *)this, v157, v87, v156, 0LL);
      else
        CommonUI__OpenDetailLongInfoDialog((CommonUI_o *)this, v157, v87, v156, 1, 0, 0LL);
LABEL_153:
      operationItemListViewManager = v6->fields.operationItemListViewManager;
      v65 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1B7640C(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
      v66 = (int)Method_FollowerRootComponent_OnSelectFollowerItem__;
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
        v121 = Method_FollowerRootComponent_OnSelectFollowerItem__;
        if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
          v121 = (_QWORD *)sub_1B761D8(Method_FollowerRootComponent_OnSelectFollowerItem__);
        v98 = (System_Reflection_MethodBase_o *)sub_1B761A4(v121, v121[4]);
        if ( !tutorialMode_low )
          goto LABEL_131;
LABEL_166:
        OverwriteAssetSoundName__PlaySystemSe(v98, 2, 0LL);
LABEL_167:
        operationItemListViewManager = v6->fields.operationItemListViewManager;
        v65 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1B7640C(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
        v66 = (int)Method_FollowerRootComponent_OnSelectFollowerItem__;
        goto LABEL_168;
      }
      v96 = v6->fields.tutorialMode;
      if ( v96 == 3 )
      {
        v138 = Method_FollowerRootComponent_OnSelectFollowerItem__;
        if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
          v138 = (_QWORD *)sub_1B761D8(Method_FollowerRootComponent_OnSelectFollowerItem__);
        v139 = (System_Reflection_MethodBase_o *)sub_1B761A4(v138, v138[4]);
        OverwriteAssetSoundName__PlaySystemSe(v139, 2, 0LL);
        goto LABEL_175;
      }
      if ( v96 == 2 )
      {
        v97 = Method_FollowerRootComponent_OnSelectFollowerItem__;
        if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
          v97 = (_QWORD *)sub_1B761D8(Method_FollowerRootComponent_OnSelectFollowerItem__);
        v98 = (System_Reflection_MethodBase_o *)sub_1B761A4(v97, v97[4]);
LABEL_131:
        OverwriteAssetSoundName__PlaySystemSe(v98, 0, 0LL);
        this = (FollowerRootComponent_o *)v6->fields.myFSM;
        if ( this )
        {
          v104 = &StringLiteral_8633/*"MENU_SHOW_SUPPORT"*/;
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
        v122 = (FollowerSelectItemListViewItem_o *)this;
        if ( !FollowerSelectItemListViewItem__get_ServantLeader((FollowerSelectItemListViewItem_o *)this, 0LL) )
          goto LABEL_154;
        this = (FollowerRootComponent_o *)FollowerSelectItemListViewItem__get_ServantLeader(v122, 0LL);
        if ( !this )
          goto LABEL_195;
        v124 = *(_QWORD *)&this->fields.manualWidth;
        v123 = *(_QWORD *)&this->fields.kind;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v159.fields.currentCryptoKey = v124;
        *(_QWORD *)&v159.fields.fakeValue = v123;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46336972(v159, 0LL) >= 1 )
        {
          this = (FollowerRootComponent_o *)FollowerSelectItemListViewItem__get_ServantLeader(v122, 0LL);
          if ( !this )
            goto LABEL_195;
          if ( !this->fields.battleSetupInfo )
            goto LABEL_163;
          this = (FollowerRootComponent_o *)FollowerSelectItemListViewItem__get_ServantLeader(v122, 0LL);
          if ( !this )
            goto LABEL_195;
          battleSetupInfo = this->fields.battleSetupInfo;
          if ( !battleSetupInfo )
            goto LABEL_195;
          v127 = *(_QWORD *)&battleSetupInfo->fields.boostId;
          userEquipId = battleSetupInfo->fields.userEquipId;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v160.fields.currentCryptoKey = v127;
          *(_QWORD *)&v160.fields.fakeValue = userEquipId;
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46336972(v160, 0LL) < 1 )
            goto LABEL_163;
          this = (FollowerRootComponent_o *)FollowerSelectItemListViewItem__get_ServantLeader(v122, 0LL);
          if ( !this )
            goto LABEL_195;
          if ( ServantLeaderInfo__IsHideEquip((ServantLeaderInfo_o *)this, 0LL) )
            goto LABEL_163;
          this = (FollowerRootComponent_o *)FollowerSelectItemListViewItem__get_ServantLeader(v122, 0LL);
          if ( !this )
            goto LABEL_195;
          EquipInfo = (EquipTargetInfo_o *)this->fields.battleSetupInfo;
        }
        else
        {
LABEL_154:
          EquipInfo = FollowerSelectItemListViewItem__get_EquipInfo(v122, 0LL);
        }
        if ( EquipInfo )
        {
          v130 = *(_QWORD *)&EquipInfo->fields.svtId.fields.currentCryptoKey;
          v129 = *(_QWORD *)&EquipInfo->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v161.fields.currentCryptoKey = v130;
          *(_QWORD *)&v161.fields.fakeValue = v129;
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46336972(v161, 0LL) >= 1 )
          {
            v131 = Method_FollowerRootComponent_OnSelectFollowerItem__;
            if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
              v131 = (_QWORD *)sub_1B761D8(Method_FollowerRootComponent_OnSelectFollowerItem__);
            v132 = (System_Reflection_MethodBase_o *)sub_1B761A4(v131, v131[4]);
            OverwriteAssetSoundName__PlaySystemSe(v132, 0, 0LL);
            if ( FollowerSelectItemListViewItem__get_FollowerType(v122, 0LL) == 1 )
            {
              v134 = 13;
            }
            else if ( FollowerSelectItemListViewItem__get_FollowerType(v122, 0LL) == 5 )
            {
              v134 = 14;
            }
            else if ( v122->fields.isNpc )
            {
              v134 = 19;
            }
            else
            {
              v134 = 16;
            }
            FollowerRootComponent__SelectShowServantEquip(v6, EquipInfo, v134, v133);
            return;
          }
        }
LABEL_163:
        v135 = Method_FollowerRootComponent_OnSelectFollowerItem__;
        if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
          v135 = (_QWORD *)sub_1B761D8(Method_FollowerRootComponent_OnSelectFollowerItem__);
        v98 = (System_Reflection_MethodBase_o *)sub_1B761A4(v135, v135[4]);
        goto LABEL_166;
      }
LABEL_104:
      v109 = Method_FollowerRootComponent_OnSelectFollowerItem__;
      if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
        v109 = (_QWORD *)sub_1B761D8(Method_FollowerRootComponent_OnSelectFollowerItem__);
      v110 = (System_Reflection_MethodBase_o *)sub_1B761A4(v109, v109[4]);
      OverwriteAssetSoundName__PlaySystemSe(v110, 2, 0LL);
      v111 = v6->fields.tutorialMode;
      if ( v111 == 3 )
      {
LABEL_175:
        operationItemListViewManager = v6->fields.operationItemListViewManager;
        v136 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1B7640C(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
        FollowerSelectItemListViewManager_CallbackFunc___ctor(
          v136,
          (Il2CppObject *)v6,
          (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
          0LL);
        if ( !operationItemListViewManager )
          goto LABEL_195;
        v137 = 4;
LABEL_170:
        FollowerSelectItemListViewManager__SetMode(operationItemListViewManager, v137, v136, 0LL);
        return;
      }
      if ( v111 == 2 )
        goto LABEL_167;
      return;
    case 7:
    case 13:
      v88 = Method_FollowerRootComponent_OnSelectFollowerItem__;
      if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
        v88 = (_QWORD *)sub_1B761D8(Method_FollowerRootComponent_OnSelectFollowerItem__);
      v89 = (System_Reflection_MethodBase_o *)sub_1B761A4(v88, v88[4]);
      OverwriteAssetSoundName__PlaySystemSe(v89, 0, 0LL);
      if ( !FollowerListRequest_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FollowerListRequest_TypeInfo);
      v90 = FollowerListRequest__checkRefreshRate(0LL);
      v91 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B7640C(CommonConfirmDialog_ClickDelegate_TypeInfo);
      CommonConfirmDialog_ClickDelegate___ctor(
        v91,
        (Il2CppObject *)v6,
        Method_FollowerRootComponent_EndRefreshConfirm__,
        0LL);
      if ( kind == 13 )
      {
        if ( !FollowerRecommendSupportListRequest_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FollowerRecommendSupportListRequest_TypeInfo);
        v92 = FollowerRecommendSupportListRequest__CheckRefreshRate(0LL);
        v91 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B7640C(CommonConfirmDialog_ClickDelegate_TypeInfo);
        CommonConfirmDialog_ClickDelegate___ctor(
          v91,
          (Il2CppObject *)v6,
          Method_FollowerRootComponent_EndRecommendRefreshConfirm__,
          0LL);
        if ( v92 )
        {
LABEL_62:
          commonConfirmDialog = v6->fields.commonConfirmDialog;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v94 = LocalizationManager__Get((System_String_o *)StringLiteral_6430/*"FOLLOWER_SELECT_REFRESH_TITLE"*/, 0LL);
          this = (FollowerRootComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6427/*"FOLLOWER_SELECT_REFRESH_MESSAGE"*/, 0LL);
          v95 = this;
          if ( !FollowerRootComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(FollowerRootComponent_TypeInfo);
          if ( commonConfirmDialog )
          {
            CommonConfirmDialog__Open_30395244(
              commonConfirmDialog,
              v94,
              (System_String_o *)v95,
              1,
              v91,
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
      else if ( v90 )
      {
        goto LABEL_62;
      }
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v117 = LocalizationManager__Get((System_String_o *)StringLiteral_6429/*"FOLLOWER_SELECT_REFRESH_REST_TITLE"*/, 0LL);
      v118 = LocalizationManager__Get((System_String_o *)StringLiteral_6428/*"FOLLOWER_SELECT_REFRESH_REST_MESSAGE"*/, 0LL);
      v119 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
      System_Action___ctor(v119, (Il2CppObject *)v6, Method_FollowerRootComponent_EndRefreshRest__, 0LL);
      if ( Instance )
      {
        CommonUI__OpenNotificationDialog(
          (CommonUI_o *)Instance,
          v117,
          v118,
          v119,
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
          0LL);
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
      v48 = (unsigned int)(kind - 9);
      v49 = (unsigned int)v48 < 4 ? v48 + 1 : 0LL;
      if ( !this )
        goto LABEL_195;
      this = (FollowerRootComponent_o *)FollowerSelectItemListViewItem__GetAppendSkillInfo(
                                          (FollowerSelectItemListViewItem_o *)this,
                                          &skillInfoList,
                                          this->fields.tutorialMode,
                                          0LL);
      if ( !skillInfoList )
        goto LABEL_195;
      if ( (unsigned int)v49 >= skillInfoList->max_length )
LABEL_196:
        sub_1B76424(this, *(_QWORD *)&kind);
      v50 = skillInfoList->m_Items[v49];
      if ( v50 && v50->fields.id >= 1 && v50->fields.lv >= 1 )
      {
        v51 = Method_FollowerRootComponent_OnSelectFollowerItem__;
        if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
          v51 = (_QWORD *)sub_1B761D8(Method_FollowerRootComponent_OnSelectFollowerItem__);
        v52 = (System_Reflection_MethodBase_o *)sub_1B761A4(v51, v51[4]);
        OverwriteAssetSoundName__PlaySystemSe(v52, 0, 0LL);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (FollowerRootComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2E623B4 *)Method_DataManager_GetMaster_SkillMaster___);
        if ( !this )
          goto LABEL_195;
        v53 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                v50->fields.id,
                (const MethodInfo_30FF780 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        this = (FollowerRootComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2E623B4 *)Method_DataManager_GetMaster_SkillLvMaster___);
        if ( !this )
          goto LABEL_195;
        this = (FollowerRootComponent_o *)SkillLvMaster__GetEntity(
                                            (SkillLvMaster_o *)this,
                                            v50->fields.id,
                                            v50->fields.lv,
                                            0LL);
        if ( !v53 )
          goto LABEL_195;
        SkillEntity__getSkillMessageInfo((SkillEntity_o *)v53, &name, &detail, v50->fields.lv, 0LL);
        v54 = name;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v55 = LocalizationManager__Get((System_String_o *)StringLiteral_8521/*"MASTER_EQSKILL_LV_TXT"*/, 0LL);
        lv = v50->fields.lv;
        v59 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv, v56, v57, v58);
        v60 = System_String__Format(v55, v59, 0LL);
        name = System_String__Concat_61546320(v54, (System_String_o *)StringLiteral_117/*" "*/, v60, 0LL);
        v61 = v6->fields.tutorialMode;
        this = (FollowerRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !this )
          goto LABEL_195;
        if ( v61 == 3 )
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
        v62 = Method_FollowerRootComponent_OnSelectFollowerItem__;
        if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
          v62 = (_QWORD *)sub_1B761D8(Method_FollowerRootComponent_OnSelectFollowerItem__);
        v63 = (System_Reflection_MethodBase_o *)sub_1B761A4(v62, v62[4]);
        OverwriteAssetSoundName__PlaySystemSe(v63, 2, 0LL);
      }
      goto LABEL_30;
    case 14:
      v112 = v6->fields.battleSetupInfo;
      if ( !v112 )
        goto LABEL_195;
      if ( !v112->fields.isChildFollower )
        goto LABEL_114;
      this = (FollowerRootComponent_o *)v6->fields.titleInfo;
      if ( !this )
        goto LABEL_195;
      TitleInfoControl__setBackBtnEnable((TitleInfoControl_o *)this, 0, 0LL);
      this = (FollowerRootComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_371299C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !this )
        goto LABEL_195;
      LOBYTE(this->fields.followerQuestInfomationDraw) = 1;
LABEL_114:
      v113 = (NetworkManager_ResultCallbackFunc_o *)sub_1B7640C(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v113,
        (Il2CppObject *)v6,
        Method_FollowerRootComponent_CallbackRefresh__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      this = (FollowerRootComponent_o *)NetworkManager__getRequest_object_(
                                          v113,
                                          (const MethodInfo_2EE44C0 *)Method_NetworkManager_getRequest_FollowerRecommendSupportListRequest___);
      if ( !v6->fields.battleSetupInfo )
        goto LABEL_195;
      v114 = (FollowerRecommendSupportListRequest_o *)this;
      this = (FollowerRootComponent_o *)BattleSetupInfo__TargetQuestId(v6->fields.battleSetupInfo, 0LL);
      v115 = v6->fields.battleSetupInfo;
      if ( !v115 || !v114 )
        goto LABEL_195;
      FollowerRecommendSupportListRequest__beginRequest(v114, 0, (int32_t)this, v115->fields.questPhase, 0LL);
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
      v99 = this;
      if ( FollowerSelectItemListViewItem__get_SvtId((FollowerSelectItemListViewItem_o *)this, 0LL) < 1
        || HIBYTE(v99->fields.openScroll.fields.z)
        || *((_BYTE *)&v99[1].fields.UnityEngine_Behaviour_Fields + 6) )
      {
        goto LABEL_163;
      }
      this = (FollowerRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
      if ( !this )
        goto LABEL_195;
      if ( !BYTE4(this->fields.battleSetupInfo) )
        goto LABEL_86;
      v100 = PartyOrganizationUtility_TypeInfo;
      if ( !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
        v100 = PartyOrganizationUtility_TypeInfo;
      }
      if ( !UnityEngine_PlayerPrefs__GetInt(v100->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0, 0LL) )
        goto LABEL_86;
      this = (FollowerRootComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_371299C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !this )
        goto LABEL_195;
      if ( PartyOrganizationUtility__IsAvailableFriendshipUpItem((PartyOrganizationUtility_o *)this, 0LL) )
      {
LABEL_86:
        v101 = Method_FollowerRootComponent_OnSelectFollowerItem__;
        if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
          v101 = (_QWORD *)sub_1B761D8(Method_FollowerRootComponent_OnSelectFollowerItem__);
        v102 = (System_Reflection_MethodBase_o *)sub_1B761A4(v101, v101[4]);
        OverwriteAssetSoundName__PlaySystemSe(v102, 0, 0LL);
        if ( v6->fields.tutorialState )
        {
          v103 = v6->fields.tutorialMode;
          if ( v103 == 3 )
          {
            v6->fields.state = 4;
            v149 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v150 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
            System_Action___ctor(v150, (Il2CppObject *)v6, Method_FollowerRootComponent_EndCloseTutorialArrow__, 0LL);
            if ( !v149 )
              goto LABEL_195;
            CommonUI__CloseTutorialArrowMark((CommonUI_o *)v149, v150, 0LL);
            return;
          }
          if ( v103 != 2 )
            return;
          this = (FollowerRootComponent_o *)v6->fields.titleInfo;
          if ( !this )
            goto LABEL_195;
          TitleInfoControl__setBackBtnEnable((TitleInfoControl_o *)this, 1, 0LL);
        }
        this = (FollowerRootComponent_o *)v6->fields.myFSM;
        if ( this )
        {
          v104 = &StringLiteral_8624/*"MENU_SELECT_ITEM"*/;
LABEL_133:
          PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v104, 0LL);
          return;
        }
LABEL_195:
        sub_1B7641C(this, *(_QWORD *)&kind);
      }
      v140 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (FollowerRootComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10264/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_EXPIRED"*/, 0LL);
      v141 = this;
      v142 = FollowerRootComponent___c_TypeInfo;
      if ( !FollowerRootComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FollowerRootComponent___c_TypeInfo);
        v142 = FollowerRootComponent___c_TypeInfo;
      }
      _9__65_0 = v142->static_fields->__9__65_0;
      v144 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !_9__65_0 )
      {
        if ( !v142->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v142);
          v142 = FollowerRootComponent___c_TypeInfo;
        }
        v145 = (Il2CppObject *)v142->static_fields->__9;
        _9__65_0 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
        System_Action___ctor(_9__65_0, v145, Method_FollowerRootComponent___c__OnSelectFollowerItem_b__65_0__, 0LL);
        static_fields = FollowerRootComponent___c_TypeInfo->static_fields;
        static_fields->__9__65_0 = _9__65_0;
        sub_1B76164((ServantStatusBattleListViewItem_o *)&static_fields->__9__65_0, (int32_t)_9__65_0, v147, v148);
      }
      if ( !v140 )
        goto LABEL_195;
      CommonUI__OpenNotificationDialog(
        (CommonUI_o *)v140,
        v144,
        (System_String_o *)v141,
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
      v65 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1B7640C(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
      v66 = (int)Method_FollowerRootComponent_OnSelectFollowerItem__;
LABEL_168:
      v136 = v65;
      FollowerSelectItemListViewManager_CallbackFunc___ctor(v65, (Il2CppObject *)v6, v66, 0LL);
      if ( !operationItemListViewManager )
        goto LABEL_195;
      v137 = 2;
      goto LABEL_170;
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
  System_String_o *BgmFileName; // x21
  _BOOL4 v20; // w23
  char v21; // w22
  FollowerRootComponent_o *v22; // x20
  int32_t FormationSubBgmId; // w0
  int32_t v24; // w20
  const MethodInfo *v25; // x2
  struct UnityEngine_GameObject_o *tutorialMaskBase; // x8
  System_String_o *BgmName; // x19
  SoundManager_c *v28; // x0
  System_String_o *v29; // x0
  struct BattleSetupInfo_o *v30; // x8
  const MethodInfo *v31; // x2
  FollowerRootComponent_o *v32; // x0
  const MethodInfo *v33; // x2
  QuestMaster_o *v34; // x21
  struct BattleSetupInfo_o *v35; // x8
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  v2 = this;
  if ( (byte_4A322ED & 1) == 0 )
  {
    sub_1B761C0(&BalanceConfig_TypeInfo, method);
    sub_1B761C0(&BgmManager_TypeInfo, v3);
    sub_1B761C0(&Method_DataManager_GetMasterData_QuestMaster___, v4);
    sub_1B761C0(&Method_DataManager_GetMaster_BgmMaster___, v5);
    sub_1B761C0(&Method_DataManager_GetMaster_QuestPhaseMaster___, v6);
    sub_1B761C0(&DataManager_TypeInfo, v7);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1B761C0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v9);
    sub_1B761C0(&SoundManager_TypeInfo, v10);
    this = (FollowerRootComponent_o *)sub_1B761C0(&StringLiteral_1/*""*/, v11);
    byte_4A322ED = 1;
  }
  entity = 0LL;
  battleSetupInfo = v2->fields.battleSetupInfo;
  if ( !battleSetupInfo )
    goto LABEL_70;
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
    this = (FollowerRootComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2E623B4 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( !v2->fields.battleSetupInfo )
      goto LABEL_70;
    v15 = (QuestPhaseMaster_o *)this;
    this = (FollowerRootComponent_o *)BattleSetupInfo__TargetQuestId(v2->fields.battleSetupInfo, 0LL);
    v16 = v2->fields.battleSetupInfo;
    if ( !v16 || !v15 )
      goto LABEL_70;
    FormationSubBgmFadeInTime = 0.0;
    if ( QuestPhaseMaster__TryGetEntity(v15, &entity, (int32_t)this, v16->fields.questPhase, 0LL) )
    {
      this = (FollowerRootComponent_o *)entity;
      if ( !entity )
        goto LABEL_70;
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
        this = (FollowerRootComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2E623B4 *)Method_DataManager_GetMaster_BgmMaster___);
        if ( !this )
          goto LABEL_70;
        BgmFileName = BgmMaster__GetBgmFileName(
                        (BgmMaster_o *)this,
                        FormationBgmId,
                        (System_String_o *)StringLiteral_1/*""*/,
                        0LL);
        v20 = 0;
      }
      this = (FollowerRootComponent_o *)entity;
      if ( !entity )
        goto LABEL_70;
      this = (FollowerRootComponent_o *)QuestPhaseEntity__IsNonStopEndBgm(entity, 0LL);
      if ( !entity )
        goto LABEL_70;
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
        this = (FollowerRootComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2E623B4 *)Method_DataManager_GetMaster_BgmMaster___);
        if ( !this )
          goto LABEL_70;
        this = (FollowerRootComponent_o *)BgmMaster__GetBgmFileName(
                                            (BgmMaster_o *)this,
                                            v24,
                                            (System_String_o *)StringLiteral_1/*""*/,
                                            0LL);
        if ( !entity )
          goto LABEL_70;
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
    this = (FollowerRootComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_371299C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !this )
      goto LABEL_70;
    this = (FollowerRootComponent_o *)PartyOrganizationUtility__ExistsTemporaryPartyInfo(
                                        (PartyOrganizationUtility_o *)this,
                                        0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !System_String__IsNullOrEmpty(BgmFileName, 0LL) )
        FollowerRootComponent__SetBackupBgmName(v2, v21 & 1, v25);
      this = (FollowerRootComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_371299C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( this )
      {
        tutorialMaskBase = this->fields.tutorialMaskBase;
        if ( tutorialMaskBase )
        {
          BgmName = *(System_String_o **)&tutorialMaskBase[1].fields.m_CachedPtr;
          v28 = SoundManager_TypeInfo;
          if ( SoundManager_TypeInfo->_2.cctor_finished )
          {
LABEL_38:
            v29 = BgmName;
LABEL_56:
            SoundManager__playBgm(v29, 0LL);
LABEL_57:
            FollowerRootComponent__PlaySubBgm(v32, (System_String_o *)v22, FormationSubBgmFadeInTime, v33);
            return;
          }
LABEL_37:
          j_il2cpp_runtime_class_init_0(v28);
          goto LABEL_38;
        }
      }
      goto LABEL_70;
    }
    v30 = v2->fields.battleSetupInfo;
    if ( !v30 )
      goto LABEL_70;
    if ( !v30->fields.isScriptBeforePartySelect )
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
          FollowerRootComponent__SetBackupBgmName(v2, v21 & 1, v31);
          if ( !SoundManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          v29 = BgmFileName;
          goto LABEL_56;
        }
        if ( v20 )
        {
          FollowerRootComponent__SetBackupBgmName(v2, v21 & 1, v31);
          if ( !SoundManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          SoundManager__stopBgm(0LL);
          goto LABEL_57;
        }
        this = (FollowerRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( this )
        {
          this = (FollowerRootComponent_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_QuestMaster___);
          if ( v2->fields.battleSetupInfo )
          {
            v34 = (QuestMaster_o *)this;
            this = (FollowerRootComponent_o *)BattleSetupInfo__TargetQuestId(v2->fields.battleSetupInfo, 0LL);
            if ( v34 )
            {
              this = (FollowerRootComponent_o *)QuestMaster__getQuestEntity(v34, (int32_t)this, 0LL);
              v35 = v2->fields.battleSetupInfo;
              if ( v35 )
              {
                if ( this )
                {
                  BgmName = QuestEntity__GetBgmName((QuestEntity_o *)this, v35->fields.warId, 0LL);
                  if ( System_String__IsNullOrEmpty(BgmName, 0LL) )
                  {
                    if ( !BgmManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
                    BgmName = BgmManager__GetMainBgmName(0LL);
                  }
                  v28 = SoundManager_TypeInfo;
                  if ( SoundManager_TypeInfo->_2.cctor_finished )
                    goto LABEL_38;
                  goto LABEL_37;
                }
              }
            }
          }
        }
LABEL_70:
        sub_1B7641C(this, method);
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
  if ( (byte_4A322EC & 1) == 0 )
  {
    sub_1B761C0(&SoundManager_TypeInfo, subBgmName);
    byte_4A322EC = 1;
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
  if ( (byte_4A3230C & 1) == 0 )
  {
    sub_1B761C0(&QuestHintDialogOpenManager_TypeInfo, method);
    byte_4A3230C = 1;
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
    sub_1B7641C(operationItemListViewManager, method);
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

  if ( (byte_4A322F6 & 1) == 0 )
  {
    sub_1B761C0(&Method_FollowerRootComponent_CallbackFollowerList__, method);
    sub_1B761C0(&Method_NetworkManager_getRequest_FollowerListRequest___, v3);
    sub_1B761C0(&NetworkManager_TypeInfo, v4);
    sub_1B761C0(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    sub_1B761C0(&StringLiteral_11056/*"REQUEST_OK"*/, v6);
    byte_4A322F6 = 1;
  }
  v7 = (NetworkManager_ResultCallbackFunc_o *)sub_1B7640C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v7,
    (Il2CppObject *)this,
    Method_FollowerRootComponent_CallbackFollowerList__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = (FollowerListRequest_o *)NetworkManager__getRequest_object_(
                                              v7,
                                              (const MethodInfo_2EE44C0 *)Method_NetworkManager_getRequest_FollowerListRequest___);
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
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Request_object, (System_String_o *)StringLiteral_11056/*"REQUEST_OK"*/, 0LL);
      return;
    }
LABEL_12:
    sub_1B7641C(Request_object, v9);
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
  if ( (byte_4A32301 & 1) == 0 )
  {
    this = (FollowerRootComponent_o *)sub_1B761C0(
                                        &Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__,
                                        method);
    byte_4A32301 = 1;
  }
  battleSetupInfo = v2->fields.battleSetupInfo;
  v2->fields.state = 5;
  if ( !battleSetupInfo )
    goto LABEL_8;
  if ( battleSetupInfo->fields.isChildFollower )
    battleSetupInfo->fields.followerId = 0LL;
  this = (FollowerRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !this )
LABEL_8:
    sub_1B7641C(this, method);
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
  Il2CppObject *battleSetupInfo; // x20
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *backupBgmName; // x22
  Il2CppObject *Instance; // x0
  __int64 v13; // x1
  TerminalPramsManager_c *v14; // x0

  if ( (byte_4A32300 & 1) == 0 )
  {
    sub_1B761C0(&Method_AvalonSceneManager_UnloadScene_PartyOrganizationRootComponent___, method);
    sub_1B761C0(&RandomLimitCountManager_TypeInfo, v3);
    sub_1B761C0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4);
    sub_1B761C0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v5);
    sub_1B761C0(&SoundManager_TypeInfo, v6);
    sub_1B761C0(&TerminalPramsManager_TypeInfo, v7);
    byte_4A32300 = 1;
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
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.battleSetupInfo, 0, v9, v10);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_371299C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  if ( BYTE1(Instance[8].monitor) )
  {
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_371299C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_27;
    BYTE1(Instance[8].monitor) = 0;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A29488 )
    {
      sub_1B761C0(&TerminalPramsManager_TypeInfo, v13);
      byte_4A29488 = 1;
    }
    v14 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v14 = TerminalPramsManager_TypeInfo;
    }
    v14->static_fields->_IsAutoResume_k__BackingField = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  if ( AvalonSceneManager__IsStackScene((AvalonSceneManager_o *)Instance, 0LL) )
  {
    this->fields.state = 0;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_27;
    AvalonSceneManager__popSceneRefresh((AvalonSceneManager_o *)Instance, 1, battleSetupInfo, 0LL);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_27;
    AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0, 0LL);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
LABEL_27:
    sub_1B7641C(Instance, v13);
  AvalonSceneManager__UnloadScene_object_(
    (AvalonSceneManager_o *)Instance,
    (const MethodInfo_2E4C268 *)Method_AvalonSceneManager_UnloadScene_PartyOrganizationRootComponent___);
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
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
  int32_t state; // w8
  void *operationItemListViewManager; // x0
  FollowerSelectItemListViewManager_o *v10; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v11; // x21
  FollowerSelectItemListViewManager_o *v12; // x20
  FollowerSelectItemListViewManager_c *v13; // x0
  FollowerSelectItemListViewManager_o *v14; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v15; // x21
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  FollowerQuestInfomationDraw_o *followerQuestInfomationDraw; // x20
  QuestRestrictionInfo_o *questRestrictionInfo; // x21
  const MethodInfo *v19; // x4
  CommonUI_o *v20; // x20

  if ( (byte_4A322F4 & 1) == 0 )
  {
    sub_1B761C0(&AvalonSceneManager_TypeInfo, method);
    sub_1B761C0(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, v3);
    sub_1B761C0(&Method_FollowerRootComponent_OnSelectFollowerItem__, v4);
    sub_1B761C0(&RandomLimitCountManager_TypeInfo, v5);
    sub_1B761C0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B761C0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v7);
    byte_4A322F4 = 1;
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
    v10 = this->fields.operationItemListViewManager;
    v11 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1B7640C(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    FollowerSelectItemListViewManager_CallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
      0LL);
    if ( !v10 )
      goto LABEL_27;
    FollowerSelectItemListViewManager__SetMode(v10, 3, v11, 0LL);
    v12 = this->fields.operationItemListViewManager;
    if ( !v12 )
      goto LABEL_27;
    if ( !byte_4A32314 )
    {
      sub_1B761C0(&FollowerSelectItemListViewManager_TypeInfo, method);
      byte_4A32314 = 1;
    }
    v13 = FollowerSelectItemListViewManager_TypeInfo;
    if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
      v13 = FollowerSelectItemListViewManager_TypeInfo;
    }
    FollowerSelectItemListViewManager__ChangeClass(v12, v13->static_fields->followerClassId, 0LL);
    operationItemListViewManager = this->fields.operationItemListViewManager;
    if ( !operationItemListViewManager )
LABEL_27:
      sub_1B7641C(operationItemListViewManager, method);
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
    v14 = this->fields.operationItemListViewManager;
    v15 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1B7640C(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    FollowerSelectItemListViewManager_CallbackFunc___ctor(
      v15,
      (Il2CppObject *)this,
      (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
      0LL);
    if ( !v14 )
      goto LABEL_27;
    FollowerSelectItemListViewManager__SetMode(v14, 2, v15, 0LL);
  }
  battleSetupInfo = this->fields.battleSetupInfo;
  if ( !battleSetupInfo )
    goto LABEL_27;
  followerQuestInfomationDraw = this->fields.followerQuestInfomationDraw;
  questRestrictionInfo = battleSetupInfo->fields.questRestrictionInfo;
  operationItemListViewManager = SingletonTemplate_object___get_Instance((const MethodInfo_371299C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !operationItemListViewManager || !followerQuestInfomationDraw )
    goto LABEL_27;
  FollowerQuestInfomationDraw__SetInfomation(
    followerQuestInfomationDraw,
    questRestrictionInfo,
    *((_DWORD *)operationItemListViewManager + 14),
    0LL,
    v19);
  operationItemListViewManager = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v20 = (CommonUI_o *)operationItemListViewManager;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v20 )
    goto LABEL_27;
  CommonUI__maskFadein(v20, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
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

  if ( (byte_4A322FA & 1) == 0 )
  {
    sub_1B761C0(&ServantStatusDialog_EndDelegate_TypeInfo, item);
    sub_1B761C0(&Method_FollowerRootComponent_EndShowServant__, v5);
    sub_1B761C0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4A322FA = 1;
  }
  operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager
    || (ListViewManager__GetScrollView(
          operationItemListViewManager,
          &this->fields.openScroll,
          &this->fields.openOffset,
          0LL),
        operationItemListViewManager = (ListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        !item)
    || (v8 = (CommonUI_o *)operationItemListViewManager,
        ServantLeader = FollowerSelectItemListViewItem__get_ServantLeader(item, 0LL),
        v10 = (ServantStatusDialog_EndDelegate_o *)sub_1B7640C(ServantStatusDialog_EndDelegate_TypeInfo),
        ServantStatusDialog_EndDelegate___ctor(
          v10,
          (Il2CppObject *)this,
          Method_FollowerRootComponent_EndShowServant__,
          0LL),
        !v8) )
  {
    sub_1B7641C(operationItemListViewManager, item);
  }
  CommonUI__OpenServantStatusDialog_30431468(v8, 5, ServantLeader, v10, 0LL);
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

  if ( (byte_4A322FD & 1) == 0 )
  {
    sub_1B761C0(&ServantStatusDialog_EndDelegate_TypeInfo, equipInfo);
    sub_1B761C0(&Method_FollowerRootComponent_EndShowServantEquip__, v7);
    sub_1B761C0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    byte_4A322FD = 1;
  }
  operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager
    || (ListViewManager__GetScrollView(
          operationItemListViewManager,
          &this->fields.openScroll,
          &this->fields.openOffset,
          0LL),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v11 = (ServantStatusDialog_EndDelegate_o *)sub_1B7640C(ServantStatusDialog_EndDelegate_TypeInfo),
        ServantStatusDialog_EndDelegate___ctor(
          v11,
          (Il2CppObject *)this,
          Method_FollowerRootComponent_EndShowServantEquip__,
          0LL),
        !Instance) )
  {
    sub_1B7641C(operationItemListViewManager, equipInfo);
  }
  CommonUI__OpenServantEquipStatusDialog_30434564((CommonUI_o *)Instance, statusKind, equipInfo, v11, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerRootComponent__SetBackupBgmName(
        FollowerRootComponent_o *this,
        bool isNonStopEndBgm,
        const MethodInfo *method)
{
  struct System_String_o *BgmName; // x0
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A322EE & 1) == 0 )
  {
    sub_1B761C0(&SoundManager_TypeInfo, isNonStopEndBgm);
    byte_4A322EE = 1;
  }
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  if ( SoundManager__isPlayBgm(0LL, 0LL) && !isNonStopEndBgm )
  {
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    BgmName = SoundManager__getBgmName(0LL);
    this->fields.backupBgmName = BgmName;
    sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.backupBgmName, (int32_t)BgmName, v6, v7);
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

  if ( (byte_4A322E9 & 1) == 0 )
  {
    sub_1B761C0(&AtlasManager_TypeInfo, spriteName);
    sub_1B761C0(&FollowerRootComponent_TypeInfo, v5);
    byte_4A322E9 = 1;
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
  int64_t Instance; // x0
  __int64 followerId; // x1
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  int32_t ItemIndex_30689244; // w0
  FollowerSelectItemListViewItem_o *Item; // x0
  struct BattleSetupInfo_o *v9; // x21
  FollowerSelectItemListViewItem_o *v10; // x20
  struct BattleSetupInfo_o *v11; // x21
  struct BattleSetupInfo_o *v12; // x8
  int32_t IsRecommendFollower_k__BackingField; // w9
  struct FollowerInfo_o *followerInfo; // x9
  struct UserRecommendSupportInfo_array *userRecommendSupportHash; // x9
  UserRecommendSupportInfo_o *v16; // x9
  struct BattleSetupInfo_o *v17; // x8
  int v18; // w9
  Il2CppObject *v19; // x19

  if ( (byte_4A32302 & 1) == 0 )
  {
    sub_1B761C0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    sub_1B761C0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v3);
    byte_4A32302 = 1;
  }
  Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_371299C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
      ItemIndex_30689244 = FollowerSelectItemListViewManager__GetItemIndex_30689244(
                             (FollowerSelectItemListViewManager_o *)Instance,
                             followerId,
                             battleSetupInfo->fields.followerClassId,
                             battleSetupInfo->fields.followerSupportDeckId,
                             0LL);
      this->fields.selectItemNum = ItemIndex_30689244 & ~(ItemIndex_30689244 >> 31);
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
      v9 = this->fields.battleSetupInfo;
      v10 = Item;
      Instance = FollowerSelectItemListViewItem__get_FollowerId(Item, 0LL);
      if ( v9 )
      {
        v9->fields.followerId = Instance;
        v11 = this->fields.battleSetupInfo;
        Instance = FollowerSelectItemListViewItem__get_SelectClassId(v10, 0LL);
        if ( v11 )
        {
          v11->fields.followerClassId = Instance;
          v12 = this->fields.battleSetupInfo;
          if ( v12 )
          {
            v12->fields.followerSupportDeckId = v10->fields.supportDeckId;
            IsRecommendFollower_k__BackingField = v10->fields._IsRecommendFollower_k__BackingField;
            if ( !v10->fields._IsRecommendFollower_k__BackingField )
            {
LABEL_21:
              v12->fields.recommendSupportIdx = IsRecommendFollower_k__BackingField;
              Instance = FollowerSelectItemListViewItem__get_FollowerType(v10, 0LL);
              v17 = this->fields.battleSetupInfo;
              if ( !v17 )
                goto LABEL_29;
              v17->fields.followerType = 0;
              if ( (_DWORD)Instance == 5 )
              {
                v18 = 5;
              }
              else
              {
                if ( (_DWORD)Instance != 1 )
                  goto LABEL_27;
                v18 = 1;
              }
              v17->fields.followerType = v18;
              goto LABEL_27;
            }
            followerInfo = v10->fields.followerInfo;
            if ( followerInfo )
            {
              userRecommendSupportHash = followerInfo->fields.userRecommendSupportHash;
              if ( userRecommendSupportHash )
              {
                if ( !userRecommendSupportHash->max_length )
                  sub_1B76424(Instance, followerId);
                v16 = userRecommendSupportHash->m_Items[0];
                if ( v16 )
                {
                  IsRecommendFollower_k__BackingField = v16->fields.idx;
                  goto LABEL_21;
                }
              }
            }
          }
        }
      }
LABEL_29:
      sub_1B7641C(Instance, followerId);
    }
  }
LABEL_27:
  this->fields.state = 5;
  v19 = (Il2CppObject *)this->fields.battleSetupInfo;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  AvalonSceneManager__pushScene((AvalonSceneManager_o *)Instance, 40, 1, v19, 0LL);
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
  __int64 selectItemNum; // x1
  int64_t operationItemListViewManager; // x0
  FollowerSelectItemListViewItem_o *Item; // x0
  FollowerSelectItemListViewItem_o *v12; // x20
  Il2CppClass *klass; // x22
  int namespaze; // w8
  unsigned int v15; // w23
  void **v16; // x24
  _QWORD *v17; // x8
  FollowerInfo_o **v18; // x24
  _QWORD *v19; // t1
  __int64 v20; // x25
  Il2CppClass *v21; // x22
  const char *v22; // x8
  bool v23; // w21
  __int64 v24; // x23
  __int64 v25; // x8
  __int64 v26; // x21
  FollowerInfo_o *v28; // x21
  SupportInfoJump_c *v29; // x0
  SupportInfoJump_o *v30; // x20
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  Il2CppObject *v32; // [xsp+0h] [xbp-50h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A32303 & 1) == 0 )
  {
    sub_1B761C0(&Method_DataManager_GetMaster_PickupUserFollowerMaster___, method);
    sub_1B761C0(&Method_DataManager_GetMaster_UserFollowerMaster___, v3);
    sub_1B761C0(&DataManager_TypeInfo, v4);
    sub_1B761C0(&Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long__TryGetSingleEntity__, v5);
    sub_1B761C0(
      &Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long__TryGetSingleEntity__,
      v6);
    sub_1B761C0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v7);
    sub_1B761C0(&SupportInfoJump_TypeInfo, v8);
    byte_4A32303 = 1;
  }
  v32 = 0LL;
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
  v12 = Item;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  operationItemListViewManager = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E623B4 *)Method_DataManager_GetMaster_UserFollowerMaster___);
  if ( !operationItemListViewManager )
    goto LABEL_42;
  operationItemListViewManager = DataMasterBase_object__object__long___TryGetSingleEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)operationItemListViewManager,
                                   &entity,
                                   (const MethodInfo_30FFA08 *)Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long__TryGetSingleEntity__);
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
      v15 = 0;
      while ( 1 )
      {
        if ( v15 >= namespaze )
          goto LABEL_43;
        v16 = &klass->_1.image + (int)v15;
        v19 = v16[4];
        v18 = (FollowerInfo_o **)(v16 + 4);
        v17 = v19;
        if ( !v19 )
          goto LABEL_42;
        v20 = v17[2];
        operationItemListViewManager = FollowerSelectItemListViewItem__get_FollowerId(v12, 0LL);
        if ( v20 == operationItemListViewManager )
          break;
        namespaze = (int)klass->_1.namespaze;
        if ( (int)++v15 >= namespaze )
          goto LABEL_18;
      }
      this->fields.state = 6;
      if ( v15 < LODWORD(klass->_1.namespaze) )
      {
        v28 = *v18;
        v29 = SupportInfoJump_TypeInfo;
LABEL_38:
        v30 = (SupportInfoJump_o *)sub_1B7640C(v29);
        SupportInfoJump___ctor_38531064(v30, v28, 0, 1, 0LL);
        battleSetupInfo = this->fields.battleSetupInfo;
        if ( battleSetupInfo )
        {
          if ( v30 )
          {
            SupportInfoJump__SetSetupInfo(
              v30,
              battleSetupInfo->fields.eventUpValSetupInfo,
              battleSetupInfo->fields.questRestrictionInfo,
              0LL);
            operationItemListViewManager = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
            if ( operationItemListViewManager )
            {
              v23 = 1;
              AvalonSceneManager__pushScene(
                (AvalonSceneManager_o *)operationItemListViewManager,
                60,
                1,
                (Il2CppObject *)v30,
                0LL);
              return v23;
            }
          }
        }
LABEL_42:
        sub_1B7641C(operationItemListViewManager, selectItemNum);
      }
      goto LABEL_43;
    }
  }
LABEL_18:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  operationItemListViewManager = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E623B4 *)Method_DataManager_GetMaster_PickupUserFollowerMaster___);
  if ( !operationItemListViewManager )
    goto LABEL_42;
  operationItemListViewManager = DataMasterBase_object__object__long___TryGetSingleEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)operationItemListViewManager,
                                   &v32,
                                   (const MethodInfo_30FFA08 *)Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long__TryGetSingleEntity__);
  if ( (operationItemListViewManager & 1) == 0 )
    return 0;
  if ( !v32 )
    goto LABEL_42;
  v21 = v32[1].klass;
  if ( !v21 )
    return 0;
  v22 = v21->_1.namespaze;
  v23 = 0;
  if ( v22 && (int)v22 >= 1 )
  {
    v24 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v24 >= (unsigned int)v22 )
        goto LABEL_43;
      v25 = *((_QWORD *)&v21->_1.byval_arg.data + v24);
      if ( !v25 )
        goto LABEL_42;
      v26 = *(_QWORD *)(v25 + 16);
      operationItemListViewManager = FollowerSelectItemListViewItem__get_FollowerId(v12, 0LL);
      if ( v26 == operationItemListViewManager )
        break;
      LODWORD(v22) = v21->_1.namespaze;
      ++v24;
      v23 = 0;
      if ( (int)v24 >= (int)v22 )
        return v23;
    }
    this->fields.state = 6;
    if ( (unsigned int)v24 < LODWORD(v21->_1.namespaze) )
    {
      v28 = (FollowerInfo_o *)*((_QWORD *)&v21->_1.byval_arg.data + v24);
      v29 = SupportInfoJump_TypeInfo;
      goto LABEL_38;
    }
LABEL_43:
    sub_1B76424(operationItemListViewManager, selectItemNum);
  }
  return v23;
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
  int64_t Instance; // x0
  __int64 v14; // x1
  Il2CppObject *MasterData_object; // x20
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  int32_t v17; // w2
  int32_t v18; // w3
  struct BattleSetupInfo_o *v19; // x8
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  int32_t *p_friendPointUpVal; // x25
  Il2CppObject *v22; // x21
  EventQuestMaster_o *v23; // x22
  struct BattleSetupInfo_o *v24; // x8
  struct EventCampaignEntity_array *Data_38912272; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  struct BattleSetupInfo_o *v28; // x8
  int32_t i; // w20
  BalanceConfig_c *v30; // x0
  PartyOrganizationListViewItem_o *Member; // x0
  PartyOrganizationListViewItem_o *v32; // x21
  System_Int64_array *v33; // x22
  UserServantEntity_o *userServantEntity; // x8
  int32_t v35; // w21
  struct BattleSetupInfo_o *v36; // x8
  QuestRestrictionInfo_o *v37; // x0
  struct BattleSetupInfo_o *v38; // x8
  struct BattleSetupInfo_o *v39; // x8
  Il2CppObject *v40; // x20
  struct BattleSetupInfo_o *v41; // x8
  int32_t eventId; // w22
  int64_t v43; // x21
  struct BattleSetupInfo_o *v44; // x8
  UserEventDeckEntity_o *v45; // x20
  int64_t v46; // x21
  int v47; // w8
  unsigned __int64 v48; // x22
  int64_t v49; // x26
  System_Int64_array *v50; // x23
  int32_t v51; // w24
  unsigned __int64 v52; // x22
  int64_t v53; // x26
  System_Int64_array *v54; // x23
  int v55; // w24
  struct BattleSetupInfo_o *v56; // x8
  int32_t k; // w20
  BalanceConfig_c *v58; // x0
  UserServantEntity_o *UserServant; // x0
  UserServantEntity_o *v60; // x21
  System_Int64_array *EquipList; // x23
  int32_t FriendPointUpVal; // w22
  int32_t m; // w19
  UserServantEntity_o *v64; // x0
  UserServantEntity_o *v65; // x20
  System_Int64_array *v66; // x22
  int32_t v67; // w21
  int32_t j; // w19
  PartyOrganizationListViewItem_o *v69; // x0
  PartyOrganizationListViewItem_o *v70; // x20
  System_Int64_array *v71; // x21
  UserServantEntity_o *v72; // x8
  int v73; // w20
  int32_t v74; // w21
  int32_t v75; // w21
  struct BattleSetupInfo_o *v76; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A322F9 & 1) == 0 )
  {
    sub_1B761C0(&BalanceConfig_TypeInfo, method);
    sub_1B761C0(&Method_DataManager_GetMasterData_EventCampaignMaster___, v3);
    sub_1B761C0(&Method_DataManager_GetMasterData_EventQuestMaster___, v4);
    sub_1B761C0(&Method_DataManager_GetMasterData_UserDeckMaster___, v5);
    sub_1B761C0(&Method_DataManager_GetMasterData_UserEventDeckMaster___, v6);
    sub_1B761C0(&Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__TryGetEntity__, v7);
    sub_1B761C0(&LastUsedDeckNumberManager_TypeInfo, v8);
    sub_1B761C0(&NetworkManager_TypeInfo, v9);
    sub_1B761C0(&OptionManager_TypeInfo, v10);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1B761C0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v12);
    byte_4A322F9 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_134;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  Instance = OptionManager__GetAutoSelectParty(0LL);
  if ( (Instance & 1) == 0 )
    goto LABEL_9;
  Instance = (int64_t)this->fields.battleSetupInfo;
  if ( !Instance )
    goto LABEL_134;
  if ( *(_BYTE *)(Instance + 74) )
    goto LABEL_9;
  v74 = BattleSetupInfo__TargetQuestId((BattleSetupInfo_o *)Instance, 0LL);
  if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
  Instance = LastUsedDeckNumberManager__GetDeckNumber(v74, 0LL);
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
                 (const MethodInfo_30FF980 *)Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__TryGetEntity__);
  }
  else
  {
    v75 = Instance;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = NetworkManager__get_UserId(0LL);
    if ( !MasterData_object )
      goto LABEL_134;
    Instance = (int64_t)UserDeckMaster__getDeck((UserDeckMaster_o *)MasterData_object, Instance, v75, 0LL);
    entity = (Il2CppObject *)Instance;
  }
  v19 = this->fields.battleSetupInfo;
  if ( !v19 )
    goto LABEL_134;
  questRestrictionInfo = v19->fields.questRestrictionInfo;
  if ( questRestrictionInfo )
    QuestRestrictionInfo__SetDeckInfo(questRestrictionInfo, (UserDeckEntity_o *)entity, 0LL);
  *(_QWORD *)&this->fields.friendPointUpVal = 0LL;
  p_friendPointUpVal = &this->fields.friendPointUpVal;
  this->fields.friendPointCampaignEntityList = 0LL;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.friendPointCampaignEntityList, 0, v17, v18);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_134;
  v22 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_134;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_EventQuestMaster___);
  if ( !this->fields.battleSetupInfo )
    goto LABEL_134;
  v23 = (EventQuestMaster_o *)Instance;
  Instance = BattleSetupInfo__TargetQuestId(this->fields.battleSetupInfo, 0LL);
  v24 = this->fields.battleSetupInfo;
  if ( !v24 )
    goto LABEL_134;
  if ( !v23 )
    goto LABEL_134;
  Instance = (int64_t)EventQuestMaster__GetEnabledEventCampaignForQuest(
                        v23,
                        Instance,
                        v24->fields.questPhase,
                        0LL,
                        7,
                        0LL);
  if ( !v22 )
    goto LABEL_134;
  Data_38912272 = EventCampaignMaster__getData_38912272(
                    (EventCampaignMaster_o *)v22,
                    24,
                    (EventEntity_array *)Instance,
                    0LL);
  this->fields.friendPointCampaignEntityList = Data_38912272;
  sub_1B76164(
    (ServantStatusBattleListViewItem_o *)&this->fields.friendPointCampaignEntityList,
    (int32_t)Data_38912272,
    v26,
    v27);
  if ( this->fields.tutorialMode == 4 )
  {
    v28 = this->fields.battleSetupInfo;
    if ( !v28 )
      goto LABEL_134;
    if ( v28->fields.isChildFollower )
    {
      Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_371299C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_134;
      if ( *(_QWORD *)(Instance + 72) )
      {
        for ( i = 0; ; ++i )
        {
          v30 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v30 = BalanceConfig_TypeInfo;
          }
          if ( i >= v30->static_fields->DeckMemberMax )
            break;
          Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_371299C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( !Instance )
            goto LABEL_134;
          Instance = *(_QWORD *)(Instance + 72);
          if ( !Instance )
            goto LABEL_134;
          Member = PartyListViewItem__GetMember((PartyListViewItem_o *)Instance, i, 0LL);
          if ( Member )
          {
            v32 = Member;
            if ( Member->fields.userServantEntity )
            {
              Instance = (int64_t)PartyOrganizationListViewItem__GetEquipList(Member, 0LL);
              if ( !v32->fields.userServantEntity )
                goto LABEL_134;
              v33 = (System_Int64_array *)Instance;
              Instance = UserServantEntity__getFriendPointUpVal(
                           v32->fields.userServantEntity,
                           (System_Int64_array *)Instance,
                           0LL);
              userServantEntity = v32->fields.userServantEntity;
              if ( !userServantEntity )
                goto LABEL_134;
              v35 = Instance;
              if ( UserServantEntity__getFriendPointUpType(userServantEntity, v33, 0LL) == 104
                && v35 > *p_friendPointUpVal )
              {
                this->fields.friendPointUpVal = v35;
                this->fields.friendPointUpMaxVal = v35;
              }
            }
          }
        }
        for ( j = 0; ; ++j )
        {
          if ( !v30->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v30);
            v30 = BalanceConfig_TypeInfo;
          }
          if ( j >= v30->static_fields->DeckMemberMax )
            break;
          Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_371299C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( !Instance )
            goto LABEL_134;
          Instance = *(_QWORD *)(Instance + 72);
          if ( !Instance )
            goto LABEL_134;
          v69 = PartyListViewItem__GetMember((PartyListViewItem_o *)Instance, j, 0LL);
          if ( v69 )
          {
            v70 = v69;
            if ( v69->fields.userServantEntity )
            {
              Instance = (int64_t)PartyOrganizationListViewItem__GetEquipList(v69, 0LL);
              if ( !v70->fields.userServantEntity )
                goto LABEL_134;
              v71 = (System_Int64_array *)Instance;
              Instance = UserServantEntity__getFriendPointUpVal(
                           v70->fields.userServantEntity,
                           (System_Int64_array *)Instance,
                           0LL);
              v72 = v70->fields.userServantEntity;
              if ( !v72 )
                goto LABEL_134;
              v73 = Instance;
              if ( UserServantEntity__getFriendPointUpType(v72, v71, 0LL) == 123 )
                *p_friendPointUpVal += v73;
            }
          }
          v30 = BalanceConfig_TypeInfo;
        }
        return;
      }
    }
  }
  v36 = this->fields.battleSetupInfo;
  if ( !v36 )
LABEL_134:
    sub_1B7641C(Instance, v14);
  v37 = v36->fields.questRestrictionInfo;
  if ( v37 )
  {
    Instance = QuestRestrictionInfo__IsServantNum(v37, 0LL);
    if ( (Instance & 1) != 0 )
      goto LABEL_49;
    v38 = this->fields.battleSetupInfo;
    if ( !v38 )
      goto LABEL_134;
    Instance = (int64_t)v38->fields.questRestrictionInfo;
    if ( !Instance )
      goto LABEL_134;
    Instance = QuestRestrictionInfo__IsNpcMulitipleOrOnly((QuestRestrictionInfo_o *)Instance, 0LL);
    if ( (Instance & 1) != 0 )
      goto LABEL_49;
    v39 = this->fields.battleSetupInfo;
    if ( !v39 )
      goto LABEL_134;
    Instance = (int64_t)v39->fields.questRestrictionInfo;
    if ( !Instance )
      goto LABEL_134;
    if ( *(int *)(Instance + 396) >= 1 )
    {
LABEL_49:
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        v40 = DataManager__GetMasterData_object_(
                (DataManager_o *)Instance,
                (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_UserEventDeckMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = NetworkManager__get_UserId(0LL);
        v41 = this->fields.battleSetupInfo;
        if ( v41 )
        {
          eventId = v41->fields.eventId;
          v43 = Instance;
          Instance = BattleSetupInfo__TargetQuestId(this->fields.battleSetupInfo, 0LL);
          v44 = this->fields.battleSetupInfo;
          if ( v44 )
          {
            if ( v40 )
            {
              Instance = (int64_t)UserEventDeckMaster__getDeckList(
                                    (UserEventDeckMaster_o *)v40,
                                    v43,
                                    eventId,
                                    Instance,
                                    v44->fields.questPhase,
                                    0LL);
              if ( Instance )
              {
                if ( !*(_DWORD *)(Instance + 24) )
                  goto LABEL_135;
                v45 = *(UserEventDeckEntity_o **)(Instance + 32);
                if ( v45 )
                {
                  Instance = (int64_t)UserEventDeckEntity__GetUserServantList(
                                        *(UserEventDeckEntity_o **)(Instance + 32),
                                        0,
                                        0,
                                        0LL);
                  if ( Instance )
                  {
                    v46 = Instance;
                    v47 = *(_QWORD *)(Instance + 24);
                    if ( v47 >= 1 )
                    {
                      v48 = 0LL;
                      v49 = Instance + 32;
                      while ( v48 < (unsigned int)v47 )
                      {
                        if ( *(_QWORD *)(v49 + 8 * v48) )
                        {
                          Instance = (int64_t)UserEventDeckEntity__GetEquipList(v45, v48, 0LL);
                          if ( v48 >= *(unsigned int *)(v46 + 24) )
                            break;
                          v50 = (System_Int64_array *)Instance;
                          Instance = *(_QWORD *)(v49 + 8 * v48);
                          if ( !Instance )
                            goto LABEL_134;
                          Instance = UserServantEntity__getFriendPointUpVal((UserServantEntity_o *)Instance, v50, 0LL);
                          if ( v48 >= *(unsigned int *)(v46 + 24) )
                            break;
                          v51 = Instance;
                          Instance = *(_QWORD *)(v49 + 8 * v48);
                          if ( !Instance )
                            goto LABEL_134;
                          Instance = UserServantEntity__getFriendPointUpType((UserServantEntity_o *)Instance, v50, 0LL);
                          if ( (_DWORD)Instance == 104 && v51 > *p_friendPointUpVal )
                          {
                            this->fields.friendPointUpVal = v51;
                            this->fields.friendPointUpMaxVal = v51;
                          }
                        }
                        v47 = *(_DWORD *)(v46 + 24);
                        if ( (__int64)++v48 >= v47 )
                          goto LABEL_71;
                      }
LABEL_135:
                      sub_1B76424(Instance, v14);
                    }
LABEL_71:
                    if ( v47 >= 1 )
                    {
                      v52 = 0LL;
                      v53 = v46 + 32;
                      while ( v52 < (unsigned int)v47 )
                      {
                        if ( *(_QWORD *)(v53 + 8 * v52) )
                        {
                          Instance = (int64_t)UserEventDeckEntity__GetEquipList(v45, v52, 0LL);
                          if ( v52 >= *(unsigned int *)(v46 + 24) )
                            goto LABEL_135;
                          v54 = (System_Int64_array *)Instance;
                          Instance = *(_QWORD *)(v53 + 8 * v52);
                          if ( !Instance )
                            goto LABEL_134;
                          Instance = UserServantEntity__getFriendPointUpVal((UserServantEntity_o *)Instance, v54, 0LL);
                          if ( v52 >= *(unsigned int *)(v46 + 24) )
                            goto LABEL_135;
                          v55 = Instance;
                          Instance = *(_QWORD *)(v53 + 8 * v52);
                          if ( !Instance )
                            goto LABEL_134;
                          Instance = UserServantEntity__getFriendPointUpType((UserServantEntity_o *)Instance, v54, 0LL);
                          if ( (_DWORD)Instance == 123 )
                            *p_friendPointUpVal += v55;
                        }
                        v47 = *(_DWORD *)(v46 + 24);
                        if ( (__int64)++v52 >= v47 )
                          goto LABEL_82;
                      }
                      goto LABEL_135;
                    }
LABEL_82:
                    v56 = this->fields.battleSetupInfo;
                    if ( v56 )
                    {
                      Instance = (int64_t)v56->fields.questRestrictionInfo;
                      if ( Instance )
                      {
                        QuestRestrictionInfo__SetDeckInfo_40244988((QuestRestrictionInfo_o *)Instance, v45, 0LL);
                        return;
                      }
                    }
                  }
                }
                else
                {
                  v76 = this->fields.battleSetupInfo;
                  if ( v76 )
                  {
                    Instance = (int64_t)v76->fields.questRestrictionInfo;
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
    v58 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v58 = BalanceConfig_TypeInfo;
    }
    if ( k >= v58->static_fields->DeckMemberMax )
      break;
    Instance = (int64_t)entity;
    if ( !entity )
      goto LABEL_134;
    UserServant = UserDeckEntity__GetUserServant((UserDeckEntity_o *)entity, k, 0LL);
    if ( UserServant )
    {
      v60 = UserServant;
      Instance = (int64_t)entity;
      if ( !entity )
        goto LABEL_134;
      EquipList = UserDeckEntity__GetEquipList((UserDeckEntity_o *)entity, k, 0LL);
      FriendPointUpVal = UserServantEntity__getFriendPointUpVal(v60, EquipList, 0LL);
      if ( UserServantEntity__getFriendPointUpType(v60, EquipList, 0LL) == 104 && FriendPointUpVal > *p_friendPointUpVal )
      {
        this->fields.friendPointUpVal = FriendPointUpVal;
        this->fields.friendPointUpMaxVal = FriendPointUpVal;
      }
    }
  }
  for ( m = 0; ; ++m )
  {
    if ( !v58->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v58);
      v58 = BalanceConfig_TypeInfo;
    }
    if ( m >= v58->static_fields->DeckMemberMax )
      break;
    Instance = (int64_t)entity;
    if ( !entity )
      goto LABEL_134;
    v64 = UserDeckEntity__GetUserServant((UserDeckEntity_o *)entity, m, 0LL);
    if ( v64 )
    {
      v65 = v64;
      Instance = (int64_t)entity;
      if ( !entity )
        goto LABEL_134;
      v66 = UserDeckEntity__GetEquipList((UserDeckEntity_o *)entity, m, 0LL);
      v67 = UserServantEntity__getFriendPointUpVal(v65, v66, 0LL);
      if ( UserServantEntity__getFriendPointUpType(v65, v66, 0LL) == 123 )
        *p_friendPointUpVal += v67;
    }
    v58 = BalanceConfig_TypeInfo;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerRootComponent___OnClickBack_b__71_0(
        FollowerRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  CommonUI_o *Instance; // x0
  __int64 v8; // x1
  FollowerRootComponent_o *v9; // x0
  const MethodInfo *v10; // x1
  TerminalPramsManager_c *v11; // x0

  if ( (byte_4A32313 & 1) == 0 )
  {
    sub_1B761C0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    sub_1B761C0(&TerminalPramsManager_TypeInfo, v5);
    sub_1B761C0(&StringLiteral_3527/*"CLICK_BACK"*/, v6);
    byte_4A32313 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  CommonUI__CloseConfirmDialog(Instance, 0LL);
  if ( isDecide )
  {
    FollowerRootComponent__QuestHintDialogResetTemporarilyId(v9, v10);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A29488 )
    {
      sub_1B761C0(&TerminalPramsManager_TypeInfo, v8);
      byte_4A29488 = 1;
    }
    v11 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v11 = TerminalPramsManager_TypeInfo;
    }
    v11->static_fields->_IsAutoResume_k__BackingField = 1;
    Instance = (CommonUI_o *)this->fields.myFSM;
    if ( Instance )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3527/*"CLICK_BACK"*/, 0LL);
      return;
    }
LABEL_14:
    sub_1B7641C(Instance, v8);
  }
  this->fields.state = 3;
}


void __fastcall FollowerRootComponent__beginFinish(FollowerRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  FollowerRootComponent_c *v8; // x0
  struct FollowerRootComponent_StaticFields *static_fields; // x0

  if ( (byte_4A322F5 & 1) == 0 )
  {
    sub_1B761C0(&AtlasManager_TypeInfo, method);
    sub_1B761C0(&FollowerRootComponent_TypeInfo, v3);
    sub_1B761C0(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, v4);
    byte_4A322F5 = 1;
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
  v8 = FollowerRootComponent_TypeInfo;
  if ( !FollowerRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerRootComponent_TypeInfo);
    v8 = FollowerRootComponent_TypeInfo;
  }
  static_fields = v8->static_fields;
  static_fields->partyOrganizationAtlasCache = 0LL;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&static_fields->partyOrganizationAtlasCache, 0, v6, v7);
  operationItemListViewManager = (FollowerSelectItemListViewManager_o *)this->fields.backSkinSprite;
  if ( !operationItemListViewManager
    || (operationItemListViewManager = (FollowerSelectItemListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                                (UnityEngine_Component_o *)operationItemListViewManager,
                                                                                0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)operationItemListViewManager, 0, 0LL),
        (operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__)) == 0LL) )
  {
LABEL_14:
    sub_1B7641C(operationItemListViewManager, method);
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

  if ( (byte_4A322EA & 1) == 0 )
  {
    sub_1B761C0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_4A322EA = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B7641C(0LL, v4);
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, (SceneRootComponent_o *)this, 0LL);
}


void __fastcall FollowerRootComponent__beginPause(FollowerRootComponent_o *this, const MethodInfo *method)
{
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x0

  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    sub_1B7641C(0LL, method);
  FollowerSelectItemListViewManager__SaveSortFilter(operationItemListViewManager, 0LL);
}


void __fastcall FollowerRootComponent__beginResume(
        FollowerRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  int32_t v3; // w3
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
  FollowerRootComponent_c *v17; // x0
  struct UIAtlas_o *partyOrganizationAtlas; // x21
  struct FollowerRootComponent_StaticFields *static_fields; // x0
  TitleInfoControl_o *titleInfo; // x21
  int64_t Instance; // x0
  unsigned __int64 selectItemNum; // x1
  int32_t v23; // w2
  int32_t v24; // w3
  __int64 methodPtr_low; // x10
  FollowerSelectItemListViewItem_o *Item; // x0
  struct BattleSetupInfo_o *battleSetupInfo; // x22
  FollowerSelectItemListViewItem_o *v28; // x21
  struct BattleSetupInfo_o *v29; // x8
  int klass_high; // w9
  struct BattleSetupInfo_o *v31; // x8
  struct BattleSetupInfo_o *v32; // x8
  Il2CppObject *v33; // x19
  Il2CppClass *v34; // x8
  __int64 v35; // x9
  Il2CppObject *v36; // x10
  int32_t v37; // w1
  struct BattleSetupInfo_o **p_battleSetupInfo; // x21
  struct BattleSetupInfo_o *v39; // x8
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x20
  int32_t tutorialMode; // w8
  struct BattleSetupInfo_o *v42; // x8
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  struct BattleSetupInfo_o *v44; // x8
  const MethodInfo *v45; // x4
  struct BattleSetupInfo_o *v46; // x8
  const MethodInfo *v47; // x1
  CommonUI_o *v48; // x20
  struct BattleSetupInfo_o *v49; // x8
  PartyListViewItem_o *v50; // x20
  UnityEngine_Component_o *v51; // x8
  int32_t i; // w21
  FollowerSelectItemListViewManager_o *v53; // x22
  struct BattleSetupInfo_o *v54; // x8
  const MethodInfo *v55; // x4
  struct BattleSetupInfo_o *v56; // x8
  FollowerSelectItemListViewManager_o *v57; // x22
  FollowerSelectItemListViewManager_CallbackFunc_o *v58; // x23
  PartyOrganizationListViewItem_o *Member; // x0
  struct FollowerInfo_o *followerInfo; // x8
  FollowerSelectItemListViewManager_o *v61; // x20
  int64_t userId; // x21
  struct QuestRestrictionInfo_o *v63; // x8
  BalanceConfig_c *v64; // x0
  int32_t v65; // w22
  PartyOrganizationListViewItem_o *v66; // x0
  struct FollowerInfo_o *v67; // x8

  if ( (byte_4A322F3 & 1) == 0 )
  {
    sub_1B761C0(&AvalonSceneManager_TypeInfo, data);
    sub_1B761C0(&BalanceConfig_TypeInfo, v6);
    sub_1B761C0(&BattleSetupInfo_TypeInfo, v7);
    sub_1B761C0(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, v8);
    sub_1B761C0(&Method_FollowerRootComponent_OnSelectFollowerItem__, v9);
    sub_1B761C0(&FollowerRootComponent_TypeInfo, v10);
    sub_1B761C0(&RandomLimitCountManager_TypeInfo, v11);
    sub_1B761C0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    sub_1B761C0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v13);
    sub_1B761C0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v14);
    sub_1B761C0(&SupportInfoJump_TypeInfo, v15);
    sub_1B761C0(&TutorialFlag_TypeInfo, v16);
    byte_4A322F3 = 1;
  }
  v17 = FollowerRootComponent_TypeInfo;
  partyOrganizationAtlas = this->fields.partyOrganizationAtlas;
  if ( !FollowerRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerRootComponent_TypeInfo);
    v17 = FollowerRootComponent_TypeInfo;
  }
  static_fields = v17->static_fields;
  static_fields->partyOrganizationAtlasCache = partyOrganizationAtlas;
  sub_1B76164(
    (ServantStatusBattleListViewItem_o *)&static_fields->partyOrganizationAtlasCache,
    (int32_t)partyOrganizationAtlas,
    (int32_t)method,
    v3);
  titleInfo = this->fields.titleInfo;
  Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_371299C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
  Instance = (int64_t)this->fields.operationItemListViewManager;
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
          Instance = (int64_t)this->fields.operationItemListViewManager;
          if ( !Instance )
            goto LABEL_118;
          Item = FollowerSelectItemListViewManager__GetItem(
                   (FollowerSelectItemListViewManager_o *)Instance,
                   selectItemNum,
                   0LL);
          if ( Item )
          {
            battleSetupInfo = this->fields.battleSetupInfo;
            v28 = Item;
            this->fields.state = 5;
            Instance = FollowerSelectItemListViewItem__get_FollowerId(Item, 0LL);
            if ( battleSetupInfo )
            {
              battleSetupInfo->fields.followerId = Instance;
              v29 = this->fields.battleSetupInfo;
              if ( v29 )
              {
                v29->fields.followerClassId = (int32_t)data[3].klass;
                klass_high = HIDWORD(data[3].klass);
                if ( klass_high <= 0 )
                  klass_high = v28->fields.supportDeckId;
                v29->fields.followerSupportDeckId = klass_high;
                Instance = FollowerSelectItemListViewItem__get_FollowerType(v28, 0LL);
                v31 = this->fields.battleSetupInfo;
                if ( v31 )
                {
                  v31->fields.followerType = 0;
                  if ( ((unsigned int)Instance | 4) == 5 )
                    v31->fields.followerType = Instance;
                  if ( this->fields.operationItemListViewManager )
                  {
                    if ( !byte_4A32314 )
                    {
                      sub_1B761C0(&FollowerSelectItemListViewManager_TypeInfo, selectItemNum);
                      byte_4A32314 = 1;
                    }
                    Instance = (int64_t)FollowerSelectItemListViewManager_TypeInfo;
                    if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
                      Instance = (int64_t)FollowerSelectItemListViewManager_TypeInfo;
                    }
                    v32 = this->fields.battleSetupInfo;
                    if ( v32 )
                    {
                      selectItemNum = (unsigned int)v32->fields.followerClassId;
                      if ( *(_DWORD *)(*(_QWORD *)(Instance + 184) + 8LL) != (_DWORD)selectItemNum )
                      {
                        Instance = (int64_t)this->fields.operationItemListViewManager;
                        if ( !Instance )
                          goto LABEL_118;
                        if ( FollowerSelectItemListViewManager__ChangeClass(
                               (FollowerSelectItemListViewManager_o *)Instance,
                               selectItemNum,
                               0LL) )
                        {
                          Instance = (int64_t)this->fields.operationItemListViewManager;
                          if ( !Instance )
                            goto LABEL_118;
                          ListViewManager__JumpItem((ListViewManager_o *)Instance, this->fields.selectItemNum, 0LL);
                        }
                      }
                      v33 = (Il2CppObject *)this->fields.battleSetupInfo;
                      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
                      if ( Instance )
                      {
                        AvalonSceneManager__pushScene((AvalonSceneManager_o *)Instance, 40, 1, v33, 0LL);
                        return;
                      }
                    }
                  }
                }
              }
            }
LABEL_118:
            sub_1B7641C(Instance, selectItemNum);
          }
        }
      }
    }
  }
  else
  {
    if ( data )
    {
      v34 = (Il2CppClass *)BattleSetupInfo_TypeInfo;
      v35 = LOBYTE(BattleSetupInfo_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(data->klass->vtable[0].methodPtr) >= (unsigned int)v35 )
      {
        if ( (BattleSetupInfo_c *)data->klass->_2.typeHierarchy[v35 - 1] == BattleSetupInfo_TypeInfo )
          v36 = data;
        else
          v36 = 0LL;
      }
      else
      {
        v36 = 0LL;
      }
      this->fields.battleSetupInfo = (struct BattleSetupInfo_o *)v36;
      p_battleSetupInfo = &this->fields.battleSetupInfo;
      if ( LOBYTE(data->klass->vtable[0].methodPtr) >= (unsigned int)v35 )
      {
        if ( data->klass->_2.typeHierarchy[v35 - 1] == v34 )
          v37 = (int)data;
        else
          v37 = 0;
      }
      else
      {
        v37 = 0;
      }
    }
    else
    {
      v37 = 0;
      this->fields.battleSetupInfo = 0LL;
      p_battleSetupInfo = &this->fields.battleSetupInfo;
    }
    sub_1B76164((ServantStatusBattleListViewItem_o *)p_battleSetupInfo, v37, v23, v24);
    v39 = *p_battleSetupInfo;
    if ( !*p_battleSetupInfo )
      return;
    questRestrictionInfo = v39->fields.questRestrictionInfo;
    if ( !questRestrictionInfo )
      goto LABEL_118;
    if ( !QuestRestrictionInfo__IsMyServantOrNpcRestriction(v39->fields.questRestrictionInfo, 0LL)
      && (questRestrictionInfo->fields.isNoSupportBattle
       || questRestrictionInfo->fields.isFixedMyServantSingle
       || questRestrictionInfo->fields.isSupportOnlyForceBattle) )
    {
      goto LABEL_109;
    }
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    Instance = TutorialFlag__Get_37510088(102, 0LL);
    if ( (Instance & 1) == 0 )
    {
      v42 = *p_battleSetupInfo;
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
        v42 = this->fields.battleSetupInfo;
        if ( !v42 )
          goto LABEL_118;
LABEL_80:
        if ( v42->fields.isChildFollower )
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
    Instance = (int64_t)this->fields.battleSetupInfo;
    this->fields.selectItemNum = -1;
    *(_QWORD *)&this->fields.tutorialMode = 0x100000003LL;
    if ( !Instance )
      goto LABEL_118;
    operationItemListViewManager = this->fields.operationItemListViewManager;
    Instance = BattleSetupInfo__TargetQuestId((BattleSetupInfo_o *)Instance, 0LL);
    v44 = this->fields.battleSetupInfo;
    if ( !v44 )
      goto LABEL_118;
    if ( !operationItemListViewManager )
      goto LABEL_118;
    FollowerSelectItemListViewManager__CreateList(
      operationItemListViewManager,
      Instance,
      v44->fields.questPhase,
      this->fields.friendPointUpVal,
      this->fields.friendPointUpMaxVal,
      this->fields.friendPointCampaignEntityList,
      v44->fields.questRestrictionInfo,
      0LL);
    v46 = this->fields.battleSetupInfo;
    if ( !v46 )
      goto LABEL_118;
    Instance = (int64_t)this->fields.followerQuestInfomationDraw;
    if ( !Instance )
      goto LABEL_118;
    FollowerQuestInfomationDraw__SetInfomation(
      (FollowerQuestInfomationDraw_o *)Instance,
      v46->fields.questRestrictionInfo,
      0,
      0LL,
      v45);
    this->fields.state = 2;
    FollowerRootComponent__OnMoveEnd(this, v47);
    goto LABEL_75;
  }
  if ( this->fields.state == 6 )
    goto LABEL_68;
  v49 = this->fields.battleSetupInfo;
  if ( !v49 )
    goto LABEL_118;
  if ( !v49->fields.isChildFollower )
  {
    v63 = v49->fields.questRestrictionInfo;
    if ( !v63 )
      goto LABEL_118;
    if ( v63->fields.isNotTransitionSupportList )
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
  Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_371299C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_118;
  v50 = *(PartyListViewItem_o **)(Instance + 72);
  Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_371299C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_118;
  v51 = (UnityEngine_Component_o *)this->fields.operationItemListViewManager;
  i = *(_DWORD *)(Instance + 56);
  this->fields.tutorialState = 0;
  this->fields.selectItemNum = -1;
  if ( !v51 )
    goto LABEL_118;
  Instance = (int64_t)UnityEngine_Component__get_gameObject(v51, 0LL);
  if ( !Instance )
    goto LABEL_118;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (int64_t)this->fields.battleSetupInfo;
  if ( !Instance )
    goto LABEL_118;
  v53 = this->fields.operationItemListViewManager;
  Instance = BattleSetupInfo__TargetQuestId((BattleSetupInfo_o *)Instance, 0LL);
  v54 = this->fields.battleSetupInfo;
  if ( !v54 )
    goto LABEL_118;
  if ( !v53 )
    goto LABEL_118;
  FollowerSelectItemListViewManager__CreateList(
    v53,
    Instance,
    v54->fields.questPhase,
    this->fields.friendPointUpVal,
    this->fields.friendPointUpMaxVal,
    this->fields.friendPointCampaignEntityList,
    v54->fields.questRestrictionInfo,
    0LL);
  v56 = this->fields.battleSetupInfo;
  if ( !v56 )
    goto LABEL_118;
  Instance = (int64_t)this->fields.followerQuestInfomationDraw;
  if ( !Instance )
    goto LABEL_118;
  FollowerQuestInfomationDraw__SetInfomation(
    (FollowerQuestInfomationDraw_o *)Instance,
    v56->fields.questRestrictionInfo,
    i,
    0LL,
    v55);
  this->fields.state = 3;
  v57 = this->fields.operationItemListViewManager;
  v58 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1B7640C(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v58,
    (Il2CppObject *)this,
    (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
    0LL);
  if ( !v57 )
    goto LABEL_118;
  FollowerSelectItemListViewManager__SetMode(v57, 2, v58, 0LL);
  if ( v50 )
  {
    Instance = (int64_t)this->fields.operationItemListViewManager;
    if ( !Instance )
      goto LABEL_118;
    if ( ListViewManager__get_ItemSum((ListViewManager_o *)Instance, 0LL) >= 3 )
    {
      if ( i )
      {
LABEL_100:
        if ( i >= 1 )
        {
          Member = PartyListViewItem__GetMember(v50, i - 1, 0LL);
          if ( Member )
          {
            followerInfo = Member->fields.followerInfo;
            if ( followerInfo )
            {
              v61 = this->fields.operationItemListViewManager;
              userId = followerInfo->fields.userId;
              Instance = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(Member, 0LL);
              if ( !Instance )
                goto LABEL_118;
              if ( !v61 )
                goto LABEL_118;
              Instance = FollowerSelectItemListViewManager__GetItemIndex(v61, userId, *(_QWORD *)(Instance + 40), 0LL);
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
          v64 = BalanceConfig_TypeInfo;
          v65 = i - 1;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v64 = BalanceConfig_TypeInfo;
          }
          if ( v65 >= v64->static_fields->DeckMemberMax )
            break;
          v66 = PartyListViewItem__GetMember(v50, v65, 0LL);
          if ( v66 )
          {
            v67 = v66->fields.followerInfo;
            if ( v67 )
            {
              if ( Follower__IsNotNpc(v67->fields.type, 0LL) )
                goto LABEL_100;
            }
          }
        }
      }
    }
  }
LABEL_75:
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v48 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v48 )
    goto LABEL_118;
  CommonUI__maskFadein(v48, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
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
  MissionNotifyManager_o *Instance; // x0
  const MethodInfo *v25; // x1
  int32_t v26; // w2
  int32_t v27; // w3
  int32_t v28; // w2
  int32_t v29; // w3
  struct System_Collections_Generic_List_int__o *assetLoadedEventIdList; // x8
  struct BattleSetupInfo_o *monitor; // x1
  const MethodInfo *v32; // x1
  Il2CppClass *v33; // x8
  __int64 methodPtr_low; // x9
  struct BattleSetupInfo_o *v35; // x10
  int32_t v36; // w1
  struct BattleSetupInfo_o **p_battleSetupInfo; // x0
  const MethodInfo *v38; // x1
  int32_t v39; // w2
  int32_t v40; // w3
  FollowerRootComponent_c *v41; // x0
  struct UIAtlas_o *partyOrganizationAtlas; // x20
  struct FollowerRootComponent_StaticFields *static_fields; // x0
  UILabel_o *infomationLabel; // x20
  UnityEngine_GameObject_o *refreshButtonBase; // x20
  bool v46; // w8
  struct System_Collections_Generic_List_MissionNotifyDispInfo__o *mDispInfos; // x8
  ConstantMaster_o *v48; // x20
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  System_Action_o *v50; // x20
  System_Action_o *v51; // x20
  QuestPhaseMaster_o *v52; // x20
  struct BattleSetupInfo_o *v53; // x8
  NpcFollowerMaster_o *v54; // x20
  struct BattleSetupInfo_o *v55; // x8
  struct BattleSetupInfo_o *v56; // x8
  const MethodInfo *v57; // x1
  const MethodInfo *v58; // x4
  struct BattleSetupInfo_o *v59; // x8

  if ( (byte_4A322EB & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, data);
    sub_1B761C0(&AtlasManager_TypeInfo, v5);
    sub_1B761C0(&BalanceConfig_TypeInfo, v6);
    sub_1B761C0(&BattleSetupInfo_TypeInfo, v7);
    sub_1B761C0(&Method_DataManager_GetMasterData_ConstantMaster___, v8);
    sub_1B761C0(&Method_DataManager_GetMasterData_NpcFollowerMaster___, v9);
    sub_1B761C0(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v10);
    sub_1B761C0(&Method_FollowerRootComponent_EndLoadCommonBg__, v11);
    sub_1B761C0(&Method_FollowerRootComponent_EndLoadPartyOrganizationAtlasSimple__, v12);
    sub_1B761C0(&FollowerRootComponent_TypeInfo, v13);
    sub_1B761C0(&LocalizationManager_TypeInfo, v14);
    sub_1B761C0(&RandomLimitCountManager_TypeInfo, v15);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1B761C0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v17);
    sub_1B761C0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v18);
    sub_1B761C0(&TutorialFlag_TypeInfo, v19);
    sub_1B761C0(&StringLiteral_13513/*"TUTORIAL_SUPPORT_QUEST_ID"*/, v20);
    sub_1B761C0(&StringLiteral_13514/*"TUTORIAL_SUPPORT_QUEST_PHASE"*/, v21);
    sub_1B761C0(&StringLiteral_6408/*"FOLLOWER_SELECT_EXPLANATION2"*/, v22);
    sub_1B761C0(&StringLiteral_1/*""*/, v23);
    byte_4A322EB = 1;
  }
  Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_371299C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_99;
  if ( PartyOrganizationUtility__ExistsTemporaryPartyInfo((PartyOrganizationUtility_o *)Instance, 0LL) )
  {
    Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_371299C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_99;
    assetLoadedEventIdList = Instance[1].fields.assetLoadedEventIdList;
    if ( !assetLoadedEventIdList )
      goto LABEL_99;
    monitor = (struct BattleSetupInfo_o *)assetLoadedEventIdList[1].monitor;
    this->fields.battleSetupInfo = monitor;
    sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.battleSetupInfo, (int32_t)monitor, v28, v29);
    Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_371299C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !Instance )
      goto LABEL_99;
    if ( !MissionNotifyManager__IsPause(Instance, 0LL) )
    {
      Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_371299C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
      if ( !Instance )
        goto LABEL_99;
      MissionNotifyManager__StartPause(Instance, 0LL);
    }
  }
  else
  {
    if ( data )
    {
      v33 = (Il2CppClass *)BattleSetupInfo_TypeInfo;
      methodPtr_low = LOBYTE(BattleSetupInfo_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(data->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
        v35 = (BattleSetupInfo_c *)data->klass->_2.typeHierarchy[methodPtr_low - 1] == BattleSetupInfo_TypeInfo
            ? (struct BattleSetupInfo_o *)data
            : 0LL;
      else
        v35 = 0LL;
      this->fields.battleSetupInfo = v35;
      p_battleSetupInfo = &this->fields.battleSetupInfo;
      if ( LOBYTE(data->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
        v36 = data->klass->_2.typeHierarchy[methodPtr_low - 1] == v33 ? (int)data : 0;
      else
        v36 = 0;
    }
    else
    {
      v36 = 0;
      this->fields.battleSetupInfo = 0LL;
      p_battleSetupInfo = &this->fields.battleSetupInfo;
    }
    sub_1B76164((ServantStatusBattleListViewItem_o *)p_battleSetupInfo, v36, v26, v27);
  }
  if ( !this->fields.battleSetupInfo )
  {
    FollowerRootComponent__ReturnQuestMenu(this, v32);
    return;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  RandomLimitCountManager__set_EnableRandomLimitCount(1, 0LL);
  FollowerRootComponent__PlayBGM(this, v38);
  v41 = FollowerRootComponent_TypeInfo;
  partyOrganizationAtlas = this->fields.partyOrganizationAtlas;
  if ( !FollowerRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerRootComponent_TypeInfo);
    v41 = FollowerRootComponent_TypeInfo;
  }
  static_fields = v41->static_fields;
  static_fields->partyOrganizationAtlasCache = partyOrganizationAtlas;
  sub_1B76164(
    (ServantStatusBattleListViewItem_o *)&static_fields->partyOrganizationAtlasCache,
    (int32_t)partyOrganizationAtlas,
    v39,
    v40);
  Instance = (MissionNotifyManager_o *)this->fields.titleInfo;
  if ( !Instance )
    goto LABEL_99;
  TitleInfoControl__setTitleInfo_37010500((TitleInfoControl_o *)Instance, this->fields.myFSM, 3, 63, 0LL);
  Instance = (MissionNotifyManager_o *)this->fields.titleInfo;
  if ( !Instance )
    goto LABEL_99;
  TitleInfoControl__setBackBtnEnable((TitleInfoControl_o *)Instance, 1, 0LL);
  Instance = (MissionNotifyManager_o *)this->fields.operationItemListViewManager;
  if ( !Instance )
    goto LABEL_99;
  FollowerSelectItemListViewManager__DestroyList_30677268(
    (FollowerSelectItemListViewManager_o *)Instance,
    this->fields.battleSetupInfo,
    0LL);
  infomationLabel = this->fields.infomationLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (MissionNotifyManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6408/*"FOLLOWER_SELECT_EXPLANATION2"*/, 0LL);
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
  v46 = Instance[1].fields.mNoticeNumberComp || LODWORD(Instance[1].fields.assetLoadedEventIdList) != 0;
  if ( (v46 & BYTE1(Instance[1].klass)) != 0
    && (BattleSetupInfo__SetRestriction((BattleSetupInfo_o *)Instance, 1, 0LL),
        (Instance = (MissionNotifyManager_o *)this->fields.battleSetupInfo) == 0LL)
    || (mDispInfos = Instance[1].fields.mDispInfos) == 0LL )
  {
LABEL_99:
    sub_1B7641C(Instance, v25);
  }
  if ( BYTE2(mDispInfos[9].fields._items) )
  {
LABEL_47:
    FollowerRootComponent__StartBattleSetupMenu(this, v25);
    return;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_37510088(102, 0LL) )
  {
    Instance = (MissionNotifyManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_99;
    Instance = (MissionNotifyManager_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_ConstantMaster___);
    if ( !Instance )
      goto LABEL_99;
    v48 = (ConstantMaster_o *)Instance;
    Instance = (MissionNotifyManager_o *)ConstantMaster__GetValue(
                                           (ConstantMaster_o *)Instance,
                                           (System_String_o *)StringLiteral_13513/*"TUTORIAL_SUPPORT_QUEST_ID"*/,
                                           0LL);
    battleSetupInfo = this->fields.battleSetupInfo;
    if ( !battleSetupInfo )
      goto LABEL_99;
    if ( battleSetupInfo->fields.questId == (_DWORD)Instance )
    {
      Instance = (MissionNotifyManager_o *)ConstantMaster__GetValue(v48, (System_String_o *)StringLiteral_13514/*"TUTORIAL_SUPPORT_QUEST_PHASE"*/, 0LL);
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
  if ( !BYTE3(Instance[5].fields.mNoticeNumberComp)
    && !BYTE1(Instance[5].fields.mNoticeNumberComp)
    && !LOBYTE(Instance[5].klass)
    && !BYTE3(Instance[5].fields.mDispInfos) )
  {
    Instance = (MissionNotifyManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (MissionNotifyManager_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)Instance,
                                             (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
      if ( this->fields.battleSetupInfo )
      {
        v52 = (QuestPhaseMaster_o *)Instance;
        Instance = (MissionNotifyManager_o *)BattleSetupInfo__TargetQuestId(this->fields.battleSetupInfo, 0LL);
        v53 = this->fields.battleSetupInfo;
        if ( v53 )
        {
          if ( v52 )
          {
            Instance = (MissionNotifyManager_o *)QuestPhaseMaster__GetEntity(
                                                   v52,
                                                   (int32_t)Instance,
                                                   v53->fields.questPhase,
                                                   0LL);
            if ( Instance && LOBYTE(Instance->fields.mNoDispInfos) )
            {
              Instance = (MissionNotifyManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                goto LABEL_99;
              Instance = (MissionNotifyManager_o *)DataManager__GetMasterData_object_(
                                                     (DataManager_o *)Instance,
                                                     (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
              if ( !this->fields.battleSetupInfo )
                goto LABEL_99;
              v54 = (NpcFollowerMaster_o *)Instance;
              Instance = (MissionNotifyManager_o *)BattleSetupInfo__TargetQuestId(this->fields.battleSetupInfo, 0LL);
              v55 = this->fields.battleSetupInfo;
              if ( !v55 )
                goto LABEL_99;
              if ( !v54 )
                goto LABEL_99;
              Instance = (MissionNotifyManager_o *)NpcFollowerMaster__GetQuestFollowerList(
                                                     v54,
                                                     (int32_t)Instance,
                                                     v55->fields.questPhase,
                                                     0LL);
              if ( !Instance )
                goto LABEL_99;
              if ( !Instance->fields.mNoDispInfos )
              {
                *(_QWORD *)&this->fields.tutorialMode = 0x100000001LL;
                goto LABEL_74;
              }
            }
            v56 = this->fields.battleSetupInfo;
            if ( v56 )
            {
              Instance = (MissionNotifyManager_o *)v56->fields.questRestrictionInfo;
              if ( Instance )
              {
                if ( QuestRestrictionInfo__IsMyServantOrNpcRestriction((QuestRestrictionInfo_o *)Instance, 0LL) )
                  this->fields.tutorialMode = 4;
                FollowerRootComponent__UpdateDeckInfomation(this, v57);
                v59 = this->fields.battleSetupInfo;
                if ( v59 )
                {
                  Instance = (MissionNotifyManager_o *)this->fields.followerQuestInfomationDraw;
                  if ( Instance )
                  {
                    FollowerQuestInfomationDraw__SetInfomation(
                      (FollowerQuestInfomationDraw_o *)Instance,
                      v59->fields.questRestrictionInfo,
                      0,
                      0LL,
                      v58);
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
    v50 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
    System_Action___ctor(v50, (Il2CppObject *)this, Method_FollowerRootComponent_EndLoadCommonBg__, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__LoadUISkin(v50, 2, 1, 0LL);
    return;
  }
  this->fields.tutorialMode = 1;
LABEL_74:
  v51 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
  System_Action___ctor(
    v51,
    (Il2CppObject *)this,
    Method_FollowerRootComponent_EndLoadPartyOrganizationAtlasSimple__,
    0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadPartyOrganizationAtlas(v51, 1, 0LL);
}


void __fastcall FollowerRootComponent__setBattleSetupFollowType(
        FollowerRootComponent_o *this,
        int32_t type,
        const MethodInfo *method)
{
  struct BattleSetupInfo_o *battleSetupInfo; // x8

  battleSetupInfo = this->fields.battleSetupInfo;
  if ( !battleSetupInfo )
    sub_1B7641C(this, type);
  battleSetupInfo->fields.followerType = 0;
  if ( (type | 4) == 5 )
    battleSetupInfo->fields.followerType = type;
}


void __fastcall FollowerRootComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19

  if ( (byte_4A2923F & 1) == 0 )
  {
    sub_1B761C0(&FollowerRootComponent___c_TypeInfo, v1);
    byte_4A2923F = 1;
  }
  v2 = (Il2CppObject *)sub_1B7640C(FollowerRootComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  FollowerRootComponent___c_TypeInfo->static_fields->__9 = (struct FollowerRootComponent___c_o *)v2;
  sub_1B76164(FollowerRootComponent___c_TypeInfo->static_fields);
}


void __fastcall FollowerRootComponent___c___ctor(FollowerRootComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall FollowerRootComponent___c___Init_b__50_0(FollowerRootComponent___c_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  PartyOrganizationUtility_c *v3; // x0
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4A29240 & 1) == 0 )
  {
    sub_1B761C0(&PartyOrganizationUtility_TypeInfo, method);
    sub_1B761C0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v2);
    byte_4A29240 = 1;
  }
  v3 = PartyOrganizationUtility_TypeInfo;
  if ( !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
    v3 = PartyOrganizationUtility_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(v3->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B7641C(0LL, v5);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL);
}


void __fastcall FollowerRootComponent___c___OnSelectFollowerItem_b__65_0(
        FollowerRootComponent___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  PartyOrganizationUtility_c *v3; // x0
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4A29241 & 1) == 0 )
  {
    sub_1B761C0(&PartyOrganizationUtility_TypeInfo, method);
    sub_1B761C0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v2);
    byte_4A29241 = 1;
  }
  v3 = PartyOrganizationUtility_TypeInfo;
  if ( !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
    v3 = PartyOrganizationUtility_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(v3->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B7641C(0LL, v5);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL);
}