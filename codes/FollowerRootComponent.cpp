void __fastcall FollowerRootComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct FollowerRootComponent_StaticFields *static_fields; // x8

  if ( (byte_4A6B128 & 1) == 0 )
  {
    sub_1B90010(&FollowerRootComponent_TypeInfo, v1);
    byte_4A6B128 = 1;
  }
  static_fields = FollowerRootComponent_TypeInfo->static_fields;
  static_fields->LIST_UPDATE_MESSAGE_FONT_SIZE = 26;
  *(_QWORD *)&static_fields->RETURN_TERMINAL_MESSAGE_FONT_SIZE = 0xA0000001BLL;
  static_fields->RETURN_TERMINAL_MESSAGE_SPACING_Y = 5;
}


void __fastcall FollowerRootComponent___ctor(FollowerRootComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4A6B127 & 1) == 0 )
  {
    sub_1B90010(&StringLiteral_1/*""*/, method);
    byte_4A6B127 = 1;
  }
  this->fields.backupBgmName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B8FFB4(&this->fields.backupBgmName);
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0LL);
}


void __fastcall FollowerRootComponent__CallbackFollowerList(
        FollowerRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_4A6B10D & 1) == 0 )
  {
    sub_1B90010(&StringLiteral_11067/*"REQUEST_OK"*/, result);
    byte_4A6B10D = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1B9026C(0LL, result);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_11067/*"REQUEST_OK"*/, 0LL);
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
    sub_1B9026C(0LL, result);
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

  if ( (byte_4A6B11E & 1) == 0 )
  {
    sub_1B90010(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, result);
    sub_1B90010(&Method_FollowerRootComponent_OnSelectFollowerItem__, v4);
    sub_1B90010(&RandomLimitCountManager_TypeInfo, v5);
    byte_4A6B11E = 1;
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
        v11 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1B9025C(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo),
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
    sub_1B9026C(operationItemListViewManager, v6);
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

  if ( (byte_4A6B112 & 1) == 0 )
  {
    sub_1B90010(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_1B90010(&Method_FollowerRootComponent_OnSelectFollowerItem__, v3);
    byte_4A6B112 = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v5 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1B9025C(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
    0LL);
  if ( !operationItemListViewManager )
    sub_1B9026C(v6, v7);
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

  if ( (byte_4A6B115 & 1) == 0 )
  {
    sub_1B90010(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_1B90010(&Method_FollowerRootComponent_OnSelectFollowerItem__, v3);
    byte_4A6B115 = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v5 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1B9025C(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
    0LL);
  if ( !operationItemListViewManager )
    sub_1B9026C(v6, v7);
  FollowerSelectItemListViewManager__SetMode(operationItemListViewManager, 2, v5, 0LL);
}


void __fastcall FollowerRootComponent__EndCloseTutorialArrow(FollowerRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *tutorialMaskBase2; // x0

  if ( (byte_4A6B120 & 1) == 0 )
  {
    sub_1B90010(&StringLiteral_8629/*"MENU_SELECT_ITEM"*/, method);
    byte_4A6B120 = 1;
  }
  tutorialMaskBase2 = this->fields.tutorialMaskBase2;
  if ( !tutorialMaskBase2
    || (UnityEngine_GameObject__SetActive(tutorialMaskBase2, 0, 0LL),
        tutorialMaskBase2 = (UnityEngine_GameObject_o *)this->fields.myFSM,
        this->fields.state = 3,
        !tutorialMaskBase2) )
  {
    sub_1B9026C(tutorialMaskBase2, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)tutorialMaskBase2, (System_String_o *)StringLiteral_8629/*"MENU_SELECT_ITEM"*/, 0LL);
}


void __fastcall FollowerRootComponent__EndLoadCommonBg(FollowerRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Component_o *backSkinSprite; // x0
  System_Action_o *v6; // x20

  if ( (byte_4A6B105 & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, method);
    sub_1B90010(&AtlasManager_TypeInfo, v3);
    sub_1B90010(&Method_FollowerRootComponent_EndLoadOutGameAtlas__, v4);
    byte_4A6B105 = 1;
  }
  backSkinSprite = (UnityEngine_Component_o *)this->fields.backSkinSprite;
  if ( !backSkinSprite
    || (backSkinSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(backSkinSprite, 0LL)) == 0LL )
  {
    sub_1B9026C(backSkinSprite, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)backSkinSprite, 1, 0LL);
  v6 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
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

  if ( (byte_4A6B107 & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, method);
    sub_1B90010(&AtlasManager_TypeInfo, v3);
    sub_1B90010(&Method_FollowerRootComponent_EndLoadPartyOrganizationAtlas__, v4);
    byte_4A6B107 = 1;
  }
  v5 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
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

  if ( (byte_4A6B106 & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, method);
    sub_1B90010(&AtlasManager_TypeInfo, v3);
    sub_1B90010(&Method_FollowerRootComponent_EndLoadEventAtlas__, v4);
    byte_4A6B106 = 1;
  }
  v5 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
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

  if ( (byte_4A6B108 & 1) == 0 )
  {
    sub_1B90010(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_1B90010(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v3);
    byte_4A6B108 = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    goto LABEL_15;
  FollowerSelectItemListViewManager__AdjustButton(operationItemListViewManager, 0LL);
  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    goto LABEL_15;
  FollowerSelectItemListViewManager__SetClassBoardInfo(operationItemListViewManager, 0LL);
  SceneRootComponent__beginStartUp_38719380((SceneRootComponent_o *)this, 0LL);
  if ( this->fields.isForceFadeOut )
  {
    this->fields.isForceFadeOut = 0;
    operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !operationItemListViewManager )
      goto LABEL_15;
    CommonUI__maskFadeInit((CommonUI_o *)operationItemListViewManager, 0LL);
    operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !operationItemListViewManager )
      goto LABEL_15;
    CommonUI__maskFadeout((CommonUI_o *)operationItemListViewManager, 1, 0.0, 0LL, 0LL);
    FollowerRootComponent__StartBattleSetupMenu(this, v5);
  }
  operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_374D460 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !operationItemListViewManager )
    goto LABEL_15;
  if ( PartyOrganizationUtility__ExistsTemporaryPartyInfo(
         (PartyOrganizationUtility_o *)operationItemListViewManager,
         0LL) )
  {
    operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( operationItemListViewManager )
    {
      CommonUI__maskFadeInit((CommonUI_o *)operationItemListViewManager, 0LL);
      operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( operationItemListViewManager )
      {
        CommonUI__maskFadeout((CommonUI_o *)operationItemListViewManager, 1, 0.0, 0LL, 0LL);
        this->fields.state = 0;
        FollowerRootComponent__Init(this, v6);
        return;
      }
    }
LABEL_15:
    sub_1B9026C(operationItemListViewManager, method);
  }
}


void __fastcall FollowerRootComponent__EndOpenTutorialArrow(FollowerRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4A6B125 & 1) == 0 )
  {
    sub_1B90010(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_1B90010(&Method_FollowerRootComponent_OnSelectFollowerItem__, v3);
    byte_4A6B125 = 1;
  }
  this->fields.state = 3;
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v5 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1B9025C(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
    0LL);
  if ( !operationItemListViewManager )
    sub_1B9026C(v6, v7);
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
  if ( (byte_4A6B11D & 1) == 0 )
  {
    sub_1B90010(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, isDecide);
    sub_1B90010(&Method_FollowerRootComponent_CallbackRefresh__, v5);
    sub_1B90010(&Method_FollowerRootComponent_OnSelectFollowerItem__, v6);
    sub_1B90010(&Method_NetworkManager_getRequest_FollowerRecommendSupportListRequest___, v7);
    sub_1B90010(&NetworkManager_TypeInfo, v8);
    sub_1B90010(&NetworkManager_ResultCallbackFunc_TypeInfo, v9);
    this = (FollowerRootComponent_o *)sub_1B90010(
                                        &Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__,
                                        v10);
    byte_4A6B11D = 1;
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
      this = (FollowerRootComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_374D460 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !this )
        goto LABEL_18;
      LOBYTE(this->fields.followerQuestInfomationDraw) = 1;
    }
    v12 = (NetworkManager_ResultCallbackFunc_o *)sub_1B9025C(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v12,
      (Il2CppObject *)v4,
      Method_FollowerRootComponent_CallbackRefresh__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    this = (FollowerRootComponent_o *)NetworkManager__getRequest_object_(
                                        v12,
                                        (const MethodInfo_2F10358 *)Method_NetworkManager_getRequest_FollowerRecommendSupportListRequest___);
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
    sub_1B9026C(this, isDecide);
  }
  operationItemListViewManager = v4->fields.operationItemListViewManager;
  v16 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1B9025C(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
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
  if ( (byte_4A6B11C & 1) == 0 )
  {
    sub_1B90010(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, isDecide);
    sub_1B90010(&Method_FollowerRootComponent_CallbackRefresh__, v5);
    sub_1B90010(&Method_FollowerRootComponent_OnSelectFollowerItem__, v6);
    sub_1B90010(&Method_NetworkManager_getRequest_FollowerListRequest___, v7);
    sub_1B90010(&NetworkManager_TypeInfo, v8);
    sub_1B90010(&NetworkManager_ResultCallbackFunc_TypeInfo, v9);
    this = (FollowerRootComponent_o *)sub_1B90010(
                                        &Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__,
                                        v10);
    byte_4A6B11C = 1;
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
      this = (FollowerRootComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_374D460 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !this )
        goto LABEL_18;
      LOBYTE(this->fields.followerQuestInfomationDraw) = 1;
    }
    v12 = (NetworkManager_ResultCallbackFunc_o *)sub_1B9025C(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v12,
      (Il2CppObject *)v4,
      Method_FollowerRootComponent_CallbackRefresh__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    this = (FollowerRootComponent_o *)NetworkManager__getRequest_object_(
                                        v12,
                                        (const MethodInfo_2F10358 *)Method_NetworkManager_getRequest_FollowerListRequest___);
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
    sub_1B9026C(this, isDecide);
  }
  operationItemListViewManager = v4->fields.operationItemListViewManager;
  v16 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1B9025C(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
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

  if ( (byte_4A6B11F & 1) == 0 )
  {
    sub_1B90010(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_1B90010(&Method_FollowerRootComponent_OnSelectFollowerItem__, v3);
    byte_4A6B11F = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v5 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1B9025C(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
    0LL);
  if ( !operationItemListViewManager )
    sub_1B9026C(v6, v7);
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

  if ( (byte_4A6B111 & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, isDecide);
    sub_1B90010(&Method_FollowerRootComponent_EndCloseShowServant__, v4);
    sub_1B90010(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4A6B111 = 1;
  }
  operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager
    || (ListViewManager__SetScrollView(
          operationItemListViewManager,
          this->fields.openScroll,
          this->fields.openOffset,
          0LL),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v8 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo),
        System_Action___ctor(v8, (Il2CppObject *)this, Method_FollowerRootComponent_EndCloseShowServant__, 0LL),
        !Instance) )
  {
    sub_1B9026C(operationItemListViewManager, isDecide);
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

  if ( (byte_4A6B114 & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, isDecide);
    sub_1B90010(&Method_FollowerRootComponent_EndCloseShowServantEquip__, v4);
    sub_1B90010(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4A6B114 = 1;
  }
  operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager
    || (ListViewManager__SetScrollView(
          operationItemListViewManager,
          this->fields.openScroll,
          this->fields.openOffset,
          0LL),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v8 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo),
        System_Action___ctor(v8, (Il2CppObject *)this, Method_FollowerRootComponent_EndCloseShowServantEquip__, 0LL),
        !Instance) )
  {
    sub_1B9026C(operationItemListViewManager, isDecide);
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

  if ( (byte_4A6B126 & 1) == 0 )
  {
    sub_1B90010(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_1B90010(&Method_FollowerRootComponent_OnSelectFollowerItem__, v3);
    byte_4A6B126 = 1;
  }
  this->fields.state = 3;
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v5 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1B9025C(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
    0LL);
  if ( !operationItemListViewManager )
    sub_1B9026C(v6, v7);
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

  if ( (byte_4A6B123 & 1) == 0 )
  {
    sub_1B90010(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_1B90010(&Method_FollowerRootComponent_OnSelectFollowerItem__, v3);
    byte_4A6B123 = 1;
  }
  titleInfo = this->fields.titleInfo;
  this->fields.state = 3;
  if ( !titleInfo
    || (TitleInfoControl__setBackBtnEnable(titleInfo, 0, 0LL),
        operationItemListViewManager = this->fields.operationItemListViewManager,
        v6 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1B9025C(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo),
        FollowerSelectItemListViewManager_CallbackFunc___ctor(
          v6,
          (Il2CppObject *)this,
          (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
          0LL),
        !operationItemListViewManager) )
  {
    sub_1B9026C(titleInfo, method);
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

  if ( (byte_4A6B124 & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, method);
    sub_1B90010(&FSUtility_TypeInfo, v3);
    sub_1B90010(&Method_FollowerRootComponent_EndOpenTutorialArrow__, v4);
    sub_1B90010(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4A6B124 = 1;
  }
  tutorialMaskBase2 = this->fields.tutorialMaskBase2;
  if ( !tutorialMaskBase2 )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(tutorialMaskBase2, 1, 0LL);
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  IsUnderVista = FSUtility__IsUnderVista(0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_FollowerRootComponent_EndOpenTutorialArrow__, 0LL);
  if ( !Instance )
LABEL_12:
    sub_1B9026C(tutorialMaskBase2, method);
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
  __int64 battleSetupInfo; // x0
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
  FollowerSelectItemListViewManager_o *v36; // x20
  System_Action_o *v37; // x21
  NetworkManager_ResultCallbackFunc_o *v38; // x20
  FollowerRecommendSupportListRequest_o *v39; // x20
  struct BattleSetupInfo_o *v40; // x8
  Il2CppObject *entity; // [xsp+38h] [xbp-48h] BYREF

  if ( (byte_4A6B10E & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, method);
    sub_1B90010(&ClassButtonControlComponent_TypeInfo, v3);
    sub_1B90010(&Method_DataManager_GetMaster_UserRecommendFollowerMaster___, v4);
    sub_1B90010(&DataManager_TypeInfo, v5);
    sub_1B90010(
      &Method_DataMasterBase_UserRecommendFollowerMaster__UserRecommendFollowerEntity__long__TryGetSingleEntity__,
      v6);
    sub_1B90010(&Method_FollowerRootComponent_CallbackInitRecommendFollowerRequest__, v7);
    sub_1B90010(&Method_FollowerRootComponent_OnMoveEnd__, v8);
    sub_1B90010(&LocalizationManager_TypeInfo, v9);
    sub_1B90010(&Method_NetworkManager_getRequest_FollowerRecommendSupportListRequest___, v10);
    sub_1B90010(&NetworkManager_TypeInfo, v11);
    sub_1B90010(&PartyOrganizationUtility_TypeInfo, v12);
    sub_1B90010(&NetworkManager_ResultCallbackFunc_TypeInfo, v13);
    sub_1B90010(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14);
    sub_1B90010(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v15);
    sub_1B90010(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v16);
    sub_1B90010(&Method_FollowerRootComponent___c__Init_b__50_0__, v17);
    sub_1B90010(&FollowerRootComponent___c_TypeInfo, v18);
    sub_1B90010(&StringLiteral_8629/*"MENU_SELECT_ITEM"*/, v19);
    sub_1B90010(&StringLiteral_10273/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_EXPIRED"*/, v20);
    sub_1B90010(&StringLiteral_1/*""*/, v21);
    byte_4A6B10E = 1;
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
    v24 = this->fields.battleSetupInfo;
    if ( !v24 || !operationItemListViewManager )
      goto LABEL_55;
    InitialDisplayClass = FollowerSelectItemListViewManager__GetInitialDisplayClass(
                            operationItemListViewManager,
                            battleSetupInfo,
                            v24->fields.questPhase,
                            1,
                            0LL);
    if ( !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
    if ( !ClassButtonControlComponent__IsRecommendSupportGroupType(InitialDisplayClass, 0LL) )
      goto LABEL_17;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    battleSetupInfo = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_UserRecommendFollowerMaster___);
    if ( !battleSetupInfo )
      goto LABEL_55;
    if ( !DataMasterBase_object__object__long___TryGetSingleEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)battleSetupInfo,
            &entity,
            (const MethodInfo_312C830 *)Method_DataMasterBase_UserRecommendFollowerMaster__UserRecommendFollowerEntity__long__TryGetSingleEntity__) )
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
      v26 = this->fields.operationItemListViewManager;
      battleSetupInfo = BattleSetupInfo__TargetQuestId((BattleSetupInfo_o *)battleSetupInfo, 0LL);
      v27 = this->fields.battleSetupInfo;
      if ( !v27 )
        goto LABEL_55;
      if ( !v26 )
        goto LABEL_55;
      FollowerSelectItemListViewManager__CreateList(
        v26,
        battleSetupInfo,
        v27->fields.questPhase,
        this->fields.friendPointUpVal,
        this->fields.friendPointUpMaxVal,
        this->fields.friendPointCampaignEntityList,
        v27->fields.questRestrictionInfo,
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
          PlayMakerFSM__SendEvent((PlayMakerFSM_o *)battleSetupInfo, (System_String_o *)StringLiteral_8629/*"MENU_SELECT_ITEM"*/, 0LL);
          return;
        }
      }
      else
      {
LABEL_26:
        battleSetupInfo = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
        if ( !battleSetupInfo )
          goto LABEL_55;
        if ( *(_BYTE *)(battleSetupInfo + 148) )
        {
          v28 = PartyOrganizationUtility_TypeInfo;
          if ( !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
            v28 = PartyOrganizationUtility_TypeInfo;
          }
          if ( UnityEngine_PlayerPrefs__GetInt(v28->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0, 0LL) )
          {
            battleSetupInfo = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_374D460 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
            if ( !battleSetupInfo )
              goto LABEL_55;
            if ( !PartyOrganizationUtility__IsAvailableFriendshipUpItem(
                    (PartyOrganizationUtility_o *)battleSetupInfo,
                    0LL) )
            {
              Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              battleSetupInfo = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10273/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_EXPIRED"*/, 0LL);
              v30 = (System_String_o *)battleSetupInfo;
              v31 = FollowerRootComponent___c_TypeInfo;
              if ( !FollowerRootComponent___c_TypeInfo->_2.cctor_finished )
              {
                battleSetupInfo = j_il2cpp_runtime_class_init_0(FollowerRootComponent___c_TypeInfo);
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
                _9__50_0 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
                System_Action___ctor(_9__50_0, v34, Method_FollowerRootComponent___c__Init_b__50_0__, 0LL);
                static_fields = FollowerRootComponent___c_TypeInfo->static_fields;
                static_fields->__9__50_0 = _9__50_0;
                battleSetupInfo = sub_1B8FFB4(&static_fields->__9__50_0);
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
        v36 = this->fields.operationItemListViewManager;
        v37 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
        System_Action___ctor(v37, (Il2CppObject *)this, Method_FollowerRootComponent_OnMoveEnd__, 0LL);
        if ( v36 )
        {
          FollowerSelectItemListViewManager__SetMode_30881992(v36, 1, v37, 0LL);
          return;
        }
      }
    }
    else
    {
LABEL_46:
      v38 = (NetworkManager_ResultCallbackFunc_o *)sub_1B9025C(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v38,
        (Il2CppObject *)this,
        Method_FollowerRootComponent_CallbackInitRecommendFollowerRequest__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      battleSetupInfo = (__int64)NetworkManager__getRequest_object_(
                                   v38,
                                   (const MethodInfo_2F10358 *)Method_NetworkManager_getRequest_FollowerRecommendSupportListRequest___);
      if ( this->fields.battleSetupInfo )
      {
        v39 = (FollowerRecommendSupportListRequest_o *)battleSetupInfo;
        battleSetupInfo = BattleSetupInfo__TargetQuestId(this->fields.battleSetupInfo, 0LL);
        v40 = this->fields.battleSetupInfo;
        if ( v40 )
        {
          if ( v39 )
          {
            FollowerRecommendSupportListRequest__beginRequest(v39, 0, battleSetupInfo, v40->fields.questPhase, 0LL);
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
    sub_1B9026C(battleSetupInfo, method);
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
  __int64 v33; // x2
  __int64 v34; // x3
  int v35; // w8
  void *v36; // x19
  unsigned int v37; // w20
  _QWORD *v38; // x0
  System_Reflection_MethodBase_o *v39; // x0
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  __int64 *v41; // x8
  _QWORD *v42; // x0
  System_Reflection_MethodBase_o *v43; // x0
  TerminalPramsManager_c *v44; // x0
  int lastPlayQuestConsumeAp; // w21
  System_String_o **v46; // x8
  System_String_o *v47; // x20
  System_String_o *v48; // x21
  Il2CppObject *v49; // x22
  System_String_o *v50; // x23
  System_String_o *v51; // x24
  CommonConfirmDialog_ClickDelegate_o *v52; // x25

  if ( (byte_4A6B121 & 1) == 0 )
  {
    sub_1B90010(&BattleRootComponent_TypeInfo, method);
    sub_1B90010(&CommonConfirmDialog_ClickDelegate_TypeInfo, v3);
    sub_1B90010(&Method_UnityEngine_Component_GetComponentsInChildren_Camera___, v4);
    sub_1B90010(&Method_FollowerRootComponent_OnClickBack__, v5);
    sub_1B90010(&Method_FollowerRootComponent__OnClickBack_b__71_0__, v6);
    sub_1B90010(&FollowerRootComponent_TypeInfo, v7);
    sub_1B90010(&LocalizationManager_TypeInfo, v8);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v9);
    sub_1B90010(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_1B90010(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v11);
    sub_1B90010(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v12);
    sub_1B90010(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v13);
    sub_1B90010(&TerminalPramsManager_TypeInfo, v14);
    sub_1B90010(&StringLiteral_6410/*"FOLLOWER_SELECT_BACK_TO_QUEST_NO_AP_CONSUME_AP0"*/, v15);
    sub_1B90010(&StringLiteral_3529/*"CLICK_BACK"*/, v16);
    sub_1B90010(&StringLiteral_6409/*"FOLLOWER_SELECT_BACK_TO_QUEST_NO_AP_CONSUME"*/, v17);
    sub_1B90010(&StringLiteral_6408/*"FOLLOWER_SELECT_BACK_TITLE"*/, v18);
    sub_1B90010(&StringLiteral_3760/*"COMMON_CONFIRM_NO"*/, v19);
    sub_1B90010(&StringLiteral_3764/*"COMMON_CONFIRM_YES"*/, v20);
    sub_1B90010(&StringLiteral_1/*""*/, v21);
    sub_1B90010(&StringLiteral_3530/*"CLICK_BACK_BATTLE_SETUP"*/, v22);
    byte_4A6B121 = 1;
  }
  if ( this->fields.state == 3 && !this->fields.tutorialState )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( !Instance )
      goto LABEL_63;
    if ( !*((_BYTE *)Instance + 148) )
      goto LABEL_34;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
        v28 = (_QWORD *)sub_1B90028();
      v29 = (System_Reflection_MethodBase_o *)sub_1B8FFF4(v28, v28[4]);
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
                PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3529/*"CLICK_BACK"*/, 0LL);
                Instance = UnityEngine_Component__get_transform(v27, 0LL);
                if ( Instance )
                {
                  Instance = UnityEngine_Component__GetComponentsInChildren_object__48781104(
                               (UnityEngine_Component_o *)Instance,
                               (const MethodInfo_2E85730 *)Method_UnityEngine_Component_GetComponentsInChildren_Camera___);
                  if ( Instance )
                  {
                    v35 = *((_DWORD *)Instance + 6);
                    v36 = Instance;
                    if ( v35 < 1 )
                      return;
                    v37 = 0;
                    while ( 1 )
                    {
                      if ( v37 >= v35 )
                        sub_1B90274(Instance, v24, v33, v34);
                      Instance = (void *)*((_QWORD *)v36 + (int)v37 + 4);
                      if ( !Instance )
                        break;
                      Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
                      if ( !Instance )
                        break;
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
                      v35 = *((_DWORD *)v36 + 6);
                      if ( (int)++v37 >= v35 )
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
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( !Instance )
        goto LABEL_63;
      if ( AvalonSceneManager__IsStackScene((AvalonSceneManager_o *)Instance, 0LL) )
        goto LABEL_40;
      Instance = SingletonTemplate_object___get_Instance((const MethodInfo_374D460 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_63;
      if ( *((int *)Instance + 12) > 0 )
        goto LABEL_40;
      Instance = SingletonTemplate_object___get_Instance((const MethodInfo_374D460 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_63;
      if ( *((_BYTE *)Instance + 137) )
      {
LABEL_40:
        v38 = Method_FollowerRootComponent_OnClickBack__;
        if ( (*((_BYTE *)Method_FollowerRootComponent_OnClickBack__ + 83) & 2) != 0 )
          v38 = (_QWORD *)sub_1B90028();
        v39 = (System_Reflection_MethodBase_o *)sub_1B8FFF4(v38, v38[4]);
        OverwriteAssetSoundName__PlaySystemSe(v39, 1, 0LL);
        battleSetupInfo = this->fields.battleSetupInfo;
        this->fields.state = 4;
        if ( battleSetupInfo )
        {
          if ( battleSetupInfo->fields.isChildFollower )
          {
            Instance = this->fields.myFSM;
            if ( !Instance )
              goto LABEL_63;
            v41 = &StringLiteral_3530/*"CLICK_BACK_BATTLE_SETUP"*/;
          }
          else
          {
            FollowerRootComponent__QuestHintDialogResetTemporarilyId((FollowerRootComponent_o *)Instance, v24);
            Instance = this->fields.myFSM;
            if ( !Instance )
              goto LABEL_63;
            v41 = &StringLiteral_3529/*"CLICK_BACK"*/;
          }
          PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v41, 0LL);
          return;
        }
      }
      else
      {
        v42 = Method_FollowerRootComponent_OnClickBack__;
        if ( (*((_BYTE *)Method_FollowerRootComponent_OnClickBack__ + 83) & 2) != 0 )
          v42 = (_QWORD *)sub_1B90028();
        v43 = (System_Reflection_MethodBase_o *)sub_1B8FFF4(v42, v42[4]);
        OverwriteAssetSoundName__PlaySystemSe(v43, 1, 0LL);
        v44 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v44 = TerminalPramsManager_TypeInfo;
        }
        lastPlayQuestConsumeAp = v44->static_fields->lastPlayQuestConsumeAp;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v46 = (System_String_o **)&StringLiteral_6409/*"FOLLOWER_SELECT_BACK_TO_QUEST_NO_AP_CONSUME"*/;
        if ( lastPlayQuestConsumeAp <= 0 )
          v46 = (System_String_o **)&StringLiteral_6410/*"FOLLOWER_SELECT_BACK_TO_QUEST_NO_AP_CONSUME_AP0"*/;
        v47 = LocalizationManager__Get(*v46, 0LL);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v48 = LocalizationManager__Get((System_String_o *)StringLiteral_6408/*"FOLLOWER_SELECT_BACK_TITLE"*/, 0LL);
        v49 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v50 = LocalizationManager__Get((System_String_o *)StringLiteral_3764/*"COMMON_CONFIRM_YES"*/, 0LL);
        v51 = LocalizationManager__Get((System_String_o *)StringLiteral_3760/*"COMMON_CONFIRM_NO"*/, 0LL);
        v52 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B9025C(CommonConfirmDialog_ClickDelegate_TypeInfo);
        CommonConfirmDialog_ClickDelegate___ctor(
          v52,
          (Il2CppObject *)this,
          Method_FollowerRootComponent__OnClickBack_b__71_0__,
          0LL);
        Instance = FollowerRootComponent_TypeInfo;
        if ( !FollowerRootComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FollowerRootComponent_TypeInfo);
          Instance = FollowerRootComponent_TypeInfo;
        }
        if ( v49 )
        {
          CommonUI__OpenConfirmDecideDlg(
            (CommonUI_o *)v49,
            v48,
            v47,
            v50,
            v51,
            v52,
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
LABEL_63:
    sub_1B9026C(Instance, v24);
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

  if ( (byte_4A6B11A & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, method);
    sub_1B90010(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, v3);
    sub_1B90010(&Method_FollowerRootComponent_EndTutorialFollowerCommonGuide__, v4);
    sub_1B90010(&Method_FollowerRootComponent_EndTutorialFollowerGuideNotification1__, v5);
    sub_1B90010(&Method_FollowerRootComponent_EndTutorialFollowerGuideNotification2__, v6);
    sub_1B90010(&Method_FollowerRootComponent_OnSelectFollowerItem__, v7);
    sub_1B90010(&LocalizationManager_TypeInfo, v8);
    sub_1B90010(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_1B90010(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v10);
    sub_1B90010(&StringLiteral_13520/*"TUTORIAL_MESSAGE_FOLLOWER2"*/, v11);
    sub_1B90010(&StringLiteral_13519/*"TUTORIAL_MESSAGE_FOLLOWER1"*/, v12);
    byte_4A6B11A = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( this->fields.tutorialState == 1 )
    {
      tutorialMode = this->fields.tutorialMode;
      *(_QWORD *)&this->fields.tutorialState = 0x200000002LL;
      if ( tutorialMode == 3 )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v15 = LocalizationManager__Get((System_String_o *)StringLiteral_13520/*"TUTORIAL_MESSAGE_FOLLOWER2"*/, 0LL);
        v16 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
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
        sub_1B9026C(battleSetupInfo, method);
      }
      if ( tutorialMode == 2 )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v15 = LocalizationManager__Get((System_String_o *)StringLiteral_13519/*"TUTORIAL_MESSAGE_FOLLOWER1"*/, 0LL);
        v16 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
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
          v23 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
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
      v26 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1B9025C(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
      FollowerSelectItemListViewManager_CallbackFunc___ctor(
        v26,
        (Il2CppObject *)this,
        (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
        0LL);
      if ( !operationItemListViewManager )
        goto LABEL_27;
      FollowerSelectItemListViewManager__SetMode(operationItemListViewManager, 2, v26, 0LL);
      battleSetupInfo = (BattleSetupInfo_o *)SingletonTemplate_object___get_Instance((const MethodInfo_374D460 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
  __int64 v50; // x2
  __int64 v51; // x3
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
  __int64 v71; // x20
  SkillInfo_o *v72; // x24
  Il2CppObject *Entity; // x21
  FollowerRootComponent_o *v74; // x20
  System_String_o *v75; // x21
  System_String_o *v76; // x22
  __int64 v77; // x2
  __int64 v78; // x3
  __int64 v79; // x4
  Il2CppObject *v80; // x0
  System_String_o *v81; // x0
  __int64 v82; // x2
  __int64 v83; // x3
  __int64 v84; // x4
  FollowerRootComponent_o *v85; // x21
  Il2CppObject *v86; // x0
  System_String_o *v87; // x0
  int32_t tutorialMode; // w21
  System_String_o *v89; // x20
  _QWORD *v90; // x0
  System_Reflection_MethodBase_o *v91; // x0
  bool v92; // w22
  CommonConfirmDialog_ClickDelegate_o *v93; // x21
  bool v94; // w20
  CommonConfirmDialog_o *commonConfirmDialog; // x19
  System_String_o *v96; // x20
  FollowerRootComponent_o *v97; // x22
  int32_t v98; // w8
  _QWORD *v99; // x0
  System_Reflection_MethodBase_o *v100; // x0
  FollowerRootComponent_o *v101; // x20
  PartyOrganizationUtility_c *v102; // x0
  _QWORD *v103; // x0
  System_Reflection_MethodBase_o *v104; // x0
  int32_t v105; // w8
  __int64 *v106; // x8
  FollowerRootComponent_o *v107; // x20
  _QWORD *v108; // x0
  System_Reflection_MethodBase_o *v109; // x0
  const MethodInfo *v110; // x2
  _QWORD *v111; // x0
  System_Reflection_MethodBase_o *v112; // x0
  int32_t v113; // w8
  struct BattleSetupInfo_o *v114; // x8
  NetworkManager_ResultCallbackFunc_o *v115; // x20
  FollowerRecommendSupportListRequest_o *v116; // x20
  struct BattleSetupInfo_o *v117; // x8
  Il2CppObject *Instance; // x20
  System_String_o *v119; // x21
  System_String_o *v120; // x22
  System_Action_o *v121; // x23
  int tutorialMode_low; // w20
  _QWORD *v123; // x0
  FollowerSelectItemListViewItem_o *v124; // x20
  __int64 v125; // x21
  __int64 v126; // x22
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  int64_t userEquipId; // x21
  __int64 v129; // x22
  EquipTargetInfo_o *EquipInfo; // x21
  __int64 v131; // x22
  __int64 v132; // x23
  _QWORD *v133; // x0
  System_Reflection_MethodBase_o *v134; // x0
  const MethodInfo *v135; // x3
  int32_t v136; // w2
  _QWORD *v137; // x0
  FollowerSelectItemListViewManager_CallbackFunc_o *v138; // x21
  int32_t v139; // w1
  _QWORD *v140; // x0
  System_Reflection_MethodBase_o *v141; // x0
  Il2CppObject *v142; // x20
  FollowerRootComponent_o *v143; // x21
  FollowerRootComponent___c_c *v144; // x8
  System_Action_o *_9__65_0; // x23
  System_String_o *v146; // x22
  Il2CppObject *v147; // x24
  struct FollowerRootComponent___c_StaticFields *static_fields; // x0
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
  if ( (byte_4A6B11B & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_1B90010(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, v7);
    sub_1B90010(&CommonConfirmDialog_ClickDelegate_TypeInfo, v8);
    sub_1B90010(&Method_DataManager_GetMasterData_SkillLvMaster___, v9);
    sub_1B90010(&Method_DataManager_GetMasterData_SkillMaster___, v10);
    sub_1B90010(&Method_DataManager_GetMaster_SkillLvMaster___, v11);
    sub_1B90010(&Method_DataManager_GetMaster_SkillMaster___, v12);
    sub_1B90010(&DataManager_TypeInfo, v13);
    sub_1B90010(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v14);
    sub_1B90010(&FollowerListRequest_TypeInfo, v15);
    sub_1B90010(&FollowerRecommendSupportListRequest_TypeInfo, v16);
    sub_1B90010(&Method_FollowerRootComponent_CallbackRefresh__, v17);
    sub_1B90010(&Method_FollowerRootComponent_EndCloseTutorialArrow__, v18);
    sub_1B90010(&Method_FollowerRootComponent_EndRecommendRefreshConfirm__, v19);
    sub_1B90010(&Method_FollowerRootComponent_EndRefreshConfirm__, v20);
    sub_1B90010(&Method_FollowerRootComponent_EndRefreshRest__, v21);
    sub_1B90010(&Method_FollowerRootComponent_OnSelectFollowerItem__, v22);
    sub_1B90010(&FollowerRootComponent_TypeInfo, v23);
    sub_1B90010(&int_TypeInfo, v24);
    sub_1B90010(&LocalizationManager_TypeInfo, v25);
    sub_1B90010(&Method_NetworkManager_getRequest_FollowerRecommendSupportListRequest___, v26);
    sub_1B90010(&NetworkManager_TypeInfo, v27);
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v28);
    sub_1B90010(&PartyOrganizationUtility_TypeInfo, v29);
    sub_1B90010(&NetworkManager_ResultCallbackFunc_TypeInfo, v30);
    sub_1B90010(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v31);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v32);
    sub_1B90010(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v33);
    sub_1B90010(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v34);
    sub_1B90010(&Method_FollowerRootComponent___c__OnSelectFollowerItem_b__65_0__, v35);
    sub_1B90010(&FollowerRootComponent___c_TypeInfo, v36);
    sub_1B90010(&StringLiteral_6433/*"FOLLOWER_SELECT_REFRESH_TITLE"*/, v37);
    sub_1B90010(&StringLiteral_8629/*"MENU_SELECT_ITEM"*/, v38);
    sub_1B90010(&StringLiteral_8638/*"MENU_SHOW_SUPPORT"*/, v39);
    sub_1B90010(&StringLiteral_6430/*"FOLLOWER_SELECT_REFRESH_MESSAGE"*/, v40);
    sub_1B90010(&StringLiteral_117/*" "*/, v41);
    sub_1B90010(&StringLiteral_6431/*"FOLLOWER_SELECT_REFRESH_REST_MESSAGE"*/, v42);
    sub_1B90010(&StringLiteral_10273/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_EXPIRED"*/, v43);
    sub_1B90010(&StringLiteral_8526/*"MASTER_EQSKILL_LV_TXT"*/, v44);
    sub_1B90010(&StringLiteral_2984/*"BATTLE_SKILLCHARGETURN"*/, v45);
    sub_1B90010(&StringLiteral_1/*""*/, v46);
    this = (FollowerRootComponent_o *)sub_1B90010(&StringLiteral_6432/*"FOLLOWER_SELECT_REFRESH_REST_TITLE"*/, v47);
    byte_4A6B11B = 1;
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
      v107 = this;
      if ( LOBYTE(this->fields.tutorialMode)
        || FollowerSelectItemListViewItem__get_SvtId((FollowerSelectItemListViewItem_o *)this, 0LL) <= 0 )
      {
        goto LABEL_163;
      }
      v108 = Method_FollowerRootComponent_OnSelectFollowerItem__;
      if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
        v108 = (_QWORD *)sub_1B90028();
      v109 = (System_Reflection_MethodBase_o *)sub_1B8FFF4(v108, v108[4]);
      OverwriteAssetSoundName__PlaySystemSe(v109, 0, 0LL);
      FollowerRootComponent__SelectShowServant(v6, (FollowerSelectItemListViewItem_o *)v107, v110);
      return;
    case 2:
    case 3:
    case 4:
      v69 = Method_FollowerRootComponent_OnSelectFollowerItem__;
      if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
        v69 = (_QWORD *)sub_1B90028();
      v70 = (System_Reflection_MethodBase_o *)sub_1B8FFF4(v69, v69[4]);
      OverwriteAssetSoundName__PlaySystemSe(v70, 0, 0LL);
      this = (FollowerRootComponent_o *)v6->fields.operationItemListViewManager;
      if ( !this )
        goto LABEL_195;
      this = (FollowerRootComponent_o *)FollowerSelectItemListViewManager__GetItem(
                                          (FollowerSelectItemListViewManager_o *)this,
                                          v6->fields.selectItemNum,
                                          0LL);
      v71 = kind == 3 ? 1LL : 2LL * (kind == 4);
      if ( !this )
        goto LABEL_195;
      this = (FollowerRootComponent_o *)FollowerSelectItemListViewItem__GetSkillInfo(
                                          (FollowerSelectItemListViewItem_o *)this,
                                          &v158,
                                          0LL);
      if ( !v158 )
        goto LABEL_195;
      if ( (unsigned int)v71 >= v158->max_length )
        goto LABEL_196;
      v72 = v158->m_Items[v71];
      if ( !v72 || v72->fields.id < 1 || v72->fields.lv < 1 )
        goto LABEL_153;
      this = (FollowerRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_195;
      this = (FollowerRootComponent_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_SkillMaster___);
      if ( !this )
        goto LABEL_195;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                 v72->fields.id,
                 (const MethodInfo_312C5A8 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      this = (FollowerRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_195;
      this = (FollowerRootComponent_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_SkillLvMaster___);
      if ( !this )
        goto LABEL_195;
      this = (FollowerRootComponent_o *)SkillLvMaster__GetEntity(
                                          (SkillLvMaster_o *)this,
                                          v72->fields.id,
                                          v72->fields.lv,
                                          0LL);
      if ( !Entity )
        goto LABEL_195;
      v74 = this;
      SkillEntity__getSkillMessageInfo((SkillEntity_o *)Entity, &v157, &v156, v72->fields.lv, 0LL);
      v75 = v157;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v76 = LocalizationManager__Get((System_String_o *)StringLiteral_8526/*"MASTER_EQSKILL_LV_TXT"*/, 0LL);
      lv = v72->fields.lv;
      v80 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv, v77, v78, v79);
      v81 = System_String__Format(v76, v80, 0LL);
      v157 = System_String__Concat_61798352(v75, (System_String_o *)StringLiteral_117/*" "*/, v81, 0LL);
      this = (FollowerRootComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2984/*"BATTLE_SKILLCHARGETURN"*/, 0LL);
      if ( !v74 )
        goto LABEL_195;
      v85 = this;
      m_CancellationTokenSource = (int)v74->fields.m_CancellationTokenSource;
      v86 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &m_CancellationTokenSource, v82, v83, v84);
      v87 = System_String__Format((System_String_o *)v85, v86, 0LL);
      tutorialMode = v6->fields.tutorialMode;
      v89 = v87;
      this = (FollowerRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_195;
      if ( tutorialMode == 3 )
        CommonUI__OpenDetailLongInfoDialogOnFade((CommonUI_o *)this, v157, v89, v156, 0LL);
      else
        CommonUI__OpenDetailLongInfoDialog((CommonUI_o *)this, v157, v89, v156, 1, 0, 0LL);
LABEL_153:
      operationItemListViewManager = v6->fields.operationItemListViewManager;
      v67 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1B9025C(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
      v68 = (int)Method_FollowerRootComponent_OnSelectFollowerItem__;
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
        v123 = Method_FollowerRootComponent_OnSelectFollowerItem__;
        if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
          v123 = (_QWORD *)sub_1B90028();
        v100 = (System_Reflection_MethodBase_o *)sub_1B8FFF4(v123, v123[4]);
        if ( !tutorialMode_low )
          goto LABEL_131;
LABEL_166:
        OverwriteAssetSoundName__PlaySystemSe(v100, 2, 0LL);
LABEL_167:
        operationItemListViewManager = v6->fields.operationItemListViewManager;
        v67 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1B9025C(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
        v68 = (int)Method_FollowerRootComponent_OnSelectFollowerItem__;
        goto LABEL_168;
      }
      v98 = v6->fields.tutorialMode;
      if ( v98 == 3 )
      {
        v140 = Method_FollowerRootComponent_OnSelectFollowerItem__;
        if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
          v140 = (_QWORD *)sub_1B90028();
        v141 = (System_Reflection_MethodBase_o *)sub_1B8FFF4(v140, v140[4]);
        OverwriteAssetSoundName__PlaySystemSe(v141, 2, 0LL);
        goto LABEL_175;
      }
      if ( v98 == 2 )
      {
        v99 = Method_FollowerRootComponent_OnSelectFollowerItem__;
        if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
          v99 = (_QWORD *)sub_1B90028();
        v100 = (System_Reflection_MethodBase_o *)sub_1B8FFF4(v99, v99[4]);
LABEL_131:
        OverwriteAssetSoundName__PlaySystemSe(v100, 0, 0LL);
        this = (FollowerRootComponent_o *)v6->fields.myFSM;
        if ( this )
        {
          v106 = &StringLiteral_8638/*"MENU_SHOW_SUPPORT"*/;
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
        v124 = (FollowerSelectItemListViewItem_o *)this;
        if ( !FollowerSelectItemListViewItem__get_ServantLeader((FollowerSelectItemListViewItem_o *)this, 0LL) )
          goto LABEL_154;
        this = (FollowerRootComponent_o *)FollowerSelectItemListViewItem__get_ServantLeader(v124, 0LL);
        if ( !this )
          goto LABEL_195;
        v126 = *(_QWORD *)&this->fields.manualWidth;
        v125 = *(_QWORD *)&this->fields.kind;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v159.fields.currentCryptoKey = v126;
        *(_QWORD *)&v159.fields.fakeValue = v125;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v159, 0LL) >= 1 )
        {
          this = (FollowerRootComponent_o *)FollowerSelectItemListViewItem__get_ServantLeader(v124, 0LL);
          if ( !this )
            goto LABEL_195;
          if ( !this->fields.battleSetupInfo )
            goto LABEL_163;
          this = (FollowerRootComponent_o *)FollowerSelectItemListViewItem__get_ServantLeader(v124, 0LL);
          if ( !this )
            goto LABEL_195;
          battleSetupInfo = this->fields.battleSetupInfo;
          if ( !battleSetupInfo )
            goto LABEL_195;
          v129 = *(_QWORD *)&battleSetupInfo->fields.boostId;
          userEquipId = battleSetupInfo->fields.userEquipId;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v160.fields.currentCryptoKey = v129;
          *(_QWORD *)&v160.fields.fakeValue = userEquipId;
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v160, 0LL) < 1 )
            goto LABEL_163;
          this = (FollowerRootComponent_o *)FollowerSelectItemListViewItem__get_ServantLeader(v124, 0LL);
          if ( !this )
            goto LABEL_195;
          if ( ServantLeaderInfo__IsHideEquip((ServantLeaderInfo_o *)this, 0LL) )
            goto LABEL_163;
          this = (FollowerRootComponent_o *)FollowerSelectItemListViewItem__get_ServantLeader(v124, 0LL);
          if ( !this )
            goto LABEL_195;
          EquipInfo = (EquipTargetInfo_o *)this->fields.battleSetupInfo;
        }
        else
        {
LABEL_154:
          EquipInfo = FollowerSelectItemListViewItem__get_EquipInfo(v124, 0LL);
        }
        if ( EquipInfo )
        {
          v132 = *(_QWORD *)&EquipInfo->fields.svtId.fields.currentCryptoKey;
          v131 = *(_QWORD *)&EquipInfo->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v161.fields.currentCryptoKey = v132;
          *(_QWORD *)&v161.fields.fakeValue = v131;
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v161, 0LL) >= 1 )
          {
            v133 = Method_FollowerRootComponent_OnSelectFollowerItem__;
            if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
              v133 = (_QWORD *)sub_1B90028();
            v134 = (System_Reflection_MethodBase_o *)sub_1B8FFF4(v133, v133[4]);
            OverwriteAssetSoundName__PlaySystemSe(v134, 0, 0LL);
            if ( FollowerSelectItemListViewItem__get_FollowerType(v124, 0LL) == 1 )
            {
              v136 = 13;
            }
            else if ( FollowerSelectItemListViewItem__get_FollowerType(v124, 0LL) == 5 )
            {
              v136 = 14;
            }
            else if ( v124->fields.isNpc )
            {
              v136 = 19;
            }
            else
            {
              v136 = 16;
            }
            FollowerRootComponent__SelectShowServantEquip(v6, EquipInfo, v136, v135);
            return;
          }
        }
LABEL_163:
        v137 = Method_FollowerRootComponent_OnSelectFollowerItem__;
        if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
          v137 = (_QWORD *)sub_1B90028();
        v100 = (System_Reflection_MethodBase_o *)sub_1B8FFF4(v137, v137[4]);
        goto LABEL_166;
      }
LABEL_104:
      v111 = Method_FollowerRootComponent_OnSelectFollowerItem__;
      if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
        v111 = (_QWORD *)sub_1B90028();
      v112 = (System_Reflection_MethodBase_o *)sub_1B8FFF4(v111, v111[4]);
      OverwriteAssetSoundName__PlaySystemSe(v112, 2, 0LL);
      v113 = v6->fields.tutorialMode;
      if ( v113 == 3 )
      {
LABEL_175:
        operationItemListViewManager = v6->fields.operationItemListViewManager;
        v138 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1B9025C(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
        FollowerSelectItemListViewManager_CallbackFunc___ctor(
          v138,
          (Il2CppObject *)v6,
          (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
          0LL);
        if ( !operationItemListViewManager )
          goto LABEL_195;
        v139 = 4;
LABEL_170:
        FollowerSelectItemListViewManager__SetMode(operationItemListViewManager, v139, v138, 0LL);
        return;
      }
      if ( v113 == 2 )
        goto LABEL_167;
      return;
    case 7:
    case 13:
      v90 = Method_FollowerRootComponent_OnSelectFollowerItem__;
      if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
        v90 = (_QWORD *)sub_1B90028();
      v91 = (System_Reflection_MethodBase_o *)sub_1B8FFF4(v90, v90[4]);
      OverwriteAssetSoundName__PlaySystemSe(v91, 0, 0LL);
      if ( !FollowerListRequest_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FollowerListRequest_TypeInfo);
      v92 = FollowerListRequest__checkRefreshRate(0LL);
      v93 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B9025C(CommonConfirmDialog_ClickDelegate_TypeInfo);
      CommonConfirmDialog_ClickDelegate___ctor(
        v93,
        (Il2CppObject *)v6,
        Method_FollowerRootComponent_EndRefreshConfirm__,
        0LL);
      if ( kind == 13 )
      {
        if ( !FollowerRecommendSupportListRequest_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FollowerRecommendSupportListRequest_TypeInfo);
        v94 = FollowerRecommendSupportListRequest__CheckRefreshRate(0LL);
        v93 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B9025C(CommonConfirmDialog_ClickDelegate_TypeInfo);
        CommonConfirmDialog_ClickDelegate___ctor(
          v93,
          (Il2CppObject *)v6,
          Method_FollowerRootComponent_EndRecommendRefreshConfirm__,
          0LL);
        if ( v94 )
        {
LABEL_62:
          commonConfirmDialog = v6->fields.commonConfirmDialog;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v96 = LocalizationManager__Get((System_String_o *)StringLiteral_6433/*"FOLLOWER_SELECT_REFRESH_TITLE"*/, 0LL);
          this = (FollowerRootComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6430/*"FOLLOWER_SELECT_REFRESH_MESSAGE"*/, 0LL);
          v97 = this;
          if ( !FollowerRootComponent_TypeInfo->_2.cctor_finished )
            this = (FollowerRootComponent_o *)j_il2cpp_runtime_class_init_0(FollowerRootComponent_TypeInfo);
          if ( commonConfirmDialog )
          {
            CommonConfirmDialog__Open_30501300(
              commonConfirmDialog,
              v96,
              (System_String_o *)v97,
              1,
              v93,
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
      else if ( v92 )
      {
        goto LABEL_62;
      }
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v119 = LocalizationManager__Get((System_String_o *)StringLiteral_6432/*"FOLLOWER_SELECT_REFRESH_REST_TITLE"*/, 0LL);
      v120 = LocalizationManager__Get((System_String_o *)StringLiteral_6431/*"FOLLOWER_SELECT_REFRESH_REST_MESSAGE"*/, 0LL);
      v121 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
      System_Action___ctor(v121, (Il2CppObject *)v6, Method_FollowerRootComponent_EndRefreshRest__, 0LL);
      if ( Instance )
      {
        CommonUI__OpenNotificationDialog(
          (CommonUI_o *)Instance,
          v119,
          v120,
          v121,
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
        sub_1B90274(this, *(_QWORD *)&kind, v50, v51);
      v52 = skillInfoList->m_Items[v49];
      if ( v52 && v52->fields.id >= 1 && v52->fields.lv >= 1 )
      {
        v53 = Method_FollowerRootComponent_OnSelectFollowerItem__;
        if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
          v53 = (_QWORD *)sub_1B90028();
        v54 = (System_Reflection_MethodBase_o *)sub_1B8FFF4(v53, v53[4]);
        OverwriteAssetSoundName__PlaySystemSe(v54, 0, 0LL);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (FollowerRootComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_SkillMaster___);
        if ( !this )
          goto LABEL_195;
        v55 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                v52->fields.id,
                (const MethodInfo_312C5A8 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        this = (FollowerRootComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_SkillLvMaster___);
        if ( !this )
          goto LABEL_195;
        this = (FollowerRootComponent_o *)SkillLvMaster__GetEntity(
                                            (SkillLvMaster_o *)this,
                                            v52->fields.id,
                                            v52->fields.lv,
                                            0LL);
        if ( !v55 )
          goto LABEL_195;
        SkillEntity__getSkillMessageInfo((SkillEntity_o *)v55, &name, &detail, v52->fields.lv, 0LL);
        v56 = name;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v57 = LocalizationManager__Get((System_String_o *)StringLiteral_8526/*"MASTER_EQSKILL_LV_TXT"*/, 0LL);
        lv = v52->fields.lv;
        v61 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv, v58, v59, v60);
        v62 = System_String__Format(v57, v61, 0LL);
        name = System_String__Concat_61798352(v56, (System_String_o *)StringLiteral_117/*" "*/, v62, 0LL);
        v63 = v6->fields.tutorialMode;
        this = (FollowerRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !this )
          goto LABEL_195;
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
          v64 = (_QWORD *)sub_1B90028();
        v65 = (System_Reflection_MethodBase_o *)sub_1B8FFF4(v64, v64[4]);
        OverwriteAssetSoundName__PlaySystemSe(v65, 2, 0LL);
      }
      goto LABEL_30;
    case 14:
      v114 = v6->fields.battleSetupInfo;
      if ( !v114 )
        goto LABEL_195;
      if ( !v114->fields.isChildFollower )
        goto LABEL_114;
      this = (FollowerRootComponent_o *)v6->fields.titleInfo;
      if ( !this )
        goto LABEL_195;
      TitleInfoControl__setBackBtnEnable((TitleInfoControl_o *)this, 0, 0LL);
      this = (FollowerRootComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_374D460 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !this )
        goto LABEL_195;
      LOBYTE(this->fields.followerQuestInfomationDraw) = 1;
LABEL_114:
      v115 = (NetworkManager_ResultCallbackFunc_o *)sub_1B9025C(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v115,
        (Il2CppObject *)v6,
        Method_FollowerRootComponent_CallbackRefresh__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      this = (FollowerRootComponent_o *)NetworkManager__getRequest_object_(
                                          v115,
                                          (const MethodInfo_2F10358 *)Method_NetworkManager_getRequest_FollowerRecommendSupportListRequest___);
      if ( !v6->fields.battleSetupInfo )
        goto LABEL_195;
      v116 = (FollowerRecommendSupportListRequest_o *)this;
      this = (FollowerRootComponent_o *)BattleSetupInfo__TargetQuestId(v6->fields.battleSetupInfo, 0LL);
      v117 = v6->fields.battleSetupInfo;
      if ( !v117 || !v116 )
        goto LABEL_195;
      FollowerRecommendSupportListRequest__beginRequest(v116, 0, (int32_t)this, v117->fields.questPhase, 0LL);
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
      v101 = this;
      if ( FollowerSelectItemListViewItem__get_SvtId((FollowerSelectItemListViewItem_o *)this, 0LL) < 1
        || HIBYTE(v101->fields.openScroll.fields.z)
        || *((_BYTE *)&v101[1].fields.UnityEngine_Behaviour_Fields + 6) )
      {
        goto LABEL_163;
      }
      this = (FollowerRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
      if ( !this )
        goto LABEL_195;
      if ( !BYTE4(this->fields.battleSetupInfo) )
        goto LABEL_86;
      v102 = PartyOrganizationUtility_TypeInfo;
      if ( !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
        v102 = PartyOrganizationUtility_TypeInfo;
      }
      if ( !UnityEngine_PlayerPrefs__GetInt(v102->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0, 0LL) )
        goto LABEL_86;
      this = (FollowerRootComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_374D460 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !this )
        goto LABEL_195;
      if ( PartyOrganizationUtility__IsAvailableFriendshipUpItem((PartyOrganizationUtility_o *)this, 0LL) )
      {
LABEL_86:
        v103 = Method_FollowerRootComponent_OnSelectFollowerItem__;
        if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
          v103 = (_QWORD *)sub_1B90028();
        v104 = (System_Reflection_MethodBase_o *)sub_1B8FFF4(v103, v103[4]);
        OverwriteAssetSoundName__PlaySystemSe(v104, 0, 0LL);
        if ( v6->fields.tutorialState )
        {
          v105 = v6->fields.tutorialMode;
          if ( v105 == 3 )
          {
            v6->fields.state = 4;
            v149 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v150 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
            System_Action___ctor(v150, (Il2CppObject *)v6, Method_FollowerRootComponent_EndCloseTutorialArrow__, 0LL);
            if ( !v149 )
              goto LABEL_195;
            CommonUI__CloseTutorialArrowMark((CommonUI_o *)v149, v150, 0LL);
            return;
          }
          if ( v105 != 2 )
            return;
          this = (FollowerRootComponent_o *)v6->fields.titleInfo;
          if ( !this )
            goto LABEL_195;
          TitleInfoControl__setBackBtnEnable((TitleInfoControl_o *)this, 1, 0LL);
        }
        this = (FollowerRootComponent_o *)v6->fields.myFSM;
        if ( this )
        {
          v106 = &StringLiteral_8629/*"MENU_SELECT_ITEM"*/;
LABEL_133:
          PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v106, 0LL);
          return;
        }
LABEL_195:
        sub_1B9026C(this, *(_QWORD *)&kind);
      }
      v142 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (FollowerRootComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10273/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_EXPIRED"*/, 0LL);
      v143 = this;
      v144 = FollowerRootComponent___c_TypeInfo;
      if ( !FollowerRootComponent___c_TypeInfo->_2.cctor_finished )
      {
        this = (FollowerRootComponent_o *)j_il2cpp_runtime_class_init_0(FollowerRootComponent___c_TypeInfo);
        v144 = FollowerRootComponent___c_TypeInfo;
      }
      _9__65_0 = v144->static_fields->__9__65_0;
      v146 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !_9__65_0 )
      {
        if ( !v144->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v144);
          v144 = FollowerRootComponent___c_TypeInfo;
        }
        v147 = (Il2CppObject *)v144->static_fields->__9;
        _9__65_0 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
        System_Action___ctor(_9__65_0, v147, Method_FollowerRootComponent___c__OnSelectFollowerItem_b__65_0__, 0LL);
        static_fields = FollowerRootComponent___c_TypeInfo->static_fields;
        static_fields->__9__65_0 = _9__65_0;
        this = (FollowerRootComponent_o *)sub_1B8FFB4(&static_fields->__9__65_0);
      }
      if ( !v142 )
        goto LABEL_195;
      CommonUI__OpenNotificationDialog(
        (CommonUI_o *)v142,
        v146,
        (System_String_o *)v143,
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
      v67 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1B9025C(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
      v68 = (int)Method_FollowerRootComponent_OnSelectFollowerItem__;
LABEL_168:
      v138 = v67;
      FollowerSelectItemListViewManager_CallbackFunc___ctor(v67, (Il2CppObject *)v6, v68, 0LL);
      if ( !operationItemListViewManager )
        goto LABEL_195;
      v139 = 2;
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
  if ( (byte_4A6B103 & 1) == 0 )
  {
    sub_1B90010(&BalanceConfig_TypeInfo, method);
    sub_1B90010(&BgmManager_TypeInfo, v3);
    sub_1B90010(&Method_DataManager_GetMasterData_QuestMaster___, v4);
    sub_1B90010(&Method_DataManager_GetMaster_BgmMaster___, v5);
    sub_1B90010(&Method_DataManager_GetMaster_QuestPhaseMaster___, v6);
    sub_1B90010(&DataManager_TypeInfo, v7);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1B90010(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v9);
    sub_1B90010(&SoundManager_TypeInfo, v10);
    this = (FollowerRootComponent_o *)sub_1B90010(&StringLiteral_1/*""*/, v11);
    byte_4A6B103 = 1;
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
    this = (FollowerRootComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
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
        this = (FollowerRootComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_BgmMaster___);
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
        this = (FollowerRootComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_BgmMaster___);
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
    this = (FollowerRootComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_374D460 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !this )
      goto LABEL_70;
    this = (FollowerRootComponent_o *)PartyOrganizationUtility__ExistsTemporaryPartyInfo(
                                        (PartyOrganizationUtility_o *)this,
                                        0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !System_String__IsNullOrEmpty(BgmFileName, 0LL) )
        FollowerRootComponent__SetBackupBgmName(v2, v21 & 1, v25);
      this = (FollowerRootComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_374D460 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
        this = (FollowerRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( this )
        {
          this = (FollowerRootComponent_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_QuestMaster___);
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
        sub_1B9026C(this, method);
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
  if ( (byte_4A6B102 & 1) == 0 )
  {
    sub_1B90010(&SoundManager_TypeInfo, subBgmName);
    byte_4A6B102 = 1;
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
  if ( (byte_4A6B122 & 1) == 0 )
  {
    sub_1B90010(&QuestHintDialogOpenManager_TypeInfo, method);
    byte_4A6B122 = 1;
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
    sub_1B9026C(operationItemListViewManager, method);
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

  if ( (byte_4A6B10C & 1) == 0 )
  {
    sub_1B90010(&Method_FollowerRootComponent_CallbackFollowerList__, method);
    sub_1B90010(&Method_NetworkManager_getRequest_FollowerListRequest___, v3);
    sub_1B90010(&NetworkManager_TypeInfo, v4);
    sub_1B90010(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    sub_1B90010(&StringLiteral_11067/*"REQUEST_OK"*/, v6);
    byte_4A6B10C = 1;
  }
  v7 = (NetworkManager_ResultCallbackFunc_o *)sub_1B9025C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v7,
    (Il2CppObject *)this,
    Method_FollowerRootComponent_CallbackFollowerList__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = (FollowerListRequest_o *)NetworkManager__getRequest_object_(
                                              v7,
                                              (const MethodInfo_2F10358 *)Method_NetworkManager_getRequest_FollowerListRequest___);
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
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Request_object, (System_String_o *)StringLiteral_11067/*"REQUEST_OK"*/, 0LL);
      return;
    }
LABEL_12:
    sub_1B9026C(Request_object, v9);
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
  if ( (byte_4A6B117 & 1) == 0 )
  {
    this = (FollowerRootComponent_o *)sub_1B90010(
                                        &Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__,
                                        method);
    byte_4A6B117 = 1;
  }
  battleSetupInfo = v2->fields.battleSetupInfo;
  v2->fields.state = 5;
  if ( !battleSetupInfo )
    goto LABEL_8;
  if ( battleSetupInfo->fields.isChildFollower )
    battleSetupInfo->fields.followerId = 0LL;
  this = (FollowerRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !this )
LABEL_8:
    sub_1B9026C(this, method);
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
  System_String_o *backupBgmName; // x22
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  TerminalPramsManager_c *v12; // x0

  if ( (byte_4A6B116 & 1) == 0 )
  {
    sub_1B90010(&Method_AvalonSceneManager_UnloadScene_PartyOrganizationRootComponent___, method);
    sub_1B90010(&RandomLimitCountManager_TypeInfo, v3);
    sub_1B90010(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4);
    sub_1B90010(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v5);
    sub_1B90010(&SoundManager_TypeInfo, v6);
    sub_1B90010(&TerminalPramsManager_TypeInfo, v7);
    byte_4A6B116 = 1;
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
  sub_1B8FFB4(&this->fields.battleSetupInfo);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_374D460 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  if ( BYTE1(Instance[8].monitor) )
  {
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_374D460 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_27;
    BYTE1(Instance[8].monitor) = 0;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A6B12B )
    {
      sub_1B90010(&TerminalPramsManager_TypeInfo, v11);
      byte_4A6B12B = 1;
    }
    v12 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v12 = TerminalPramsManager_TypeInfo;
    }
    v12->static_fields->_IsAutoResume_k__BackingField = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  if ( AvalonSceneManager__IsStackScene((AvalonSceneManager_o *)Instance, 0LL) )
  {
    this->fields.state = 0;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_27;
    AvalonSceneManager__popSceneRefresh((AvalonSceneManager_o *)Instance, 1, battleSetupInfo, 0LL);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_27;
    AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0, 0LL);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
LABEL_27:
    sub_1B9026C(Instance, v11);
  AvalonSceneManager__UnloadScene_object_(
    (AvalonSceneManager_o *)Instance,
    (const MethodInfo_2E7807C *)Method_AvalonSceneManager_UnloadScene_PartyOrganizationRootComponent___);
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
  __int64 operationItemListViewManager; // x0
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

  if ( (byte_4A6B10A & 1) == 0 )
  {
    sub_1B90010(&AvalonSceneManager_TypeInfo, method);
    sub_1B90010(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, v3);
    sub_1B90010(&Method_FollowerRootComponent_OnSelectFollowerItem__, v4);
    sub_1B90010(&RandomLimitCountManager_TypeInfo, v5);
    sub_1B90010(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B90010(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v7);
    byte_4A6B10A = 1;
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
    v10 = this->fields.operationItemListViewManager;
    v11 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1B9025C(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
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
    if ( !byte_4A6B12A )
    {
      sub_1B90010(&FollowerSelectItemListViewManager_TypeInfo, method);
      byte_4A6B12A = 1;
    }
    v13 = FollowerSelectItemListViewManager_TypeInfo;
    if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
      v13 = FollowerSelectItemListViewManager_TypeInfo;
    }
    FollowerSelectItemListViewManager__ChangeClass(v12, v13->static_fields->followerClassId, 0LL);
    operationItemListViewManager = (__int64)this->fields.operationItemListViewManager;
    if ( !operationItemListViewManager )
LABEL_27:
      sub_1B9026C(operationItemListViewManager, method);
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
    v14 = this->fields.operationItemListViewManager;
    v15 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1B9025C(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
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
  operationItemListViewManager = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_374D460 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !operationItemListViewManager || !followerQuestInfomationDraw )
    goto LABEL_27;
  FollowerQuestInfomationDraw__SetInfomation(
    followerQuestInfomationDraw,
    questRestrictionInfo,
    *(_DWORD *)(operationItemListViewManager + 56),
    0LL,
    v19);
  operationItemListViewManager = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v20 = (CommonUI_o *)operationItemListViewManager;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    operationItemListViewManager = j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
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

  if ( (byte_4A6B110 & 1) == 0 )
  {
    sub_1B90010(&ServantStatusDialog_EndDelegate_TypeInfo, item);
    sub_1B90010(&Method_FollowerRootComponent_EndShowServant__, v5);
    sub_1B90010(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4A6B110 = 1;
  }
  operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager
    || (ListViewManager__GetScrollView(
          operationItemListViewManager,
          &this->fields.openScroll,
          &this->fields.openOffset,
          0LL),
        operationItemListViewManager = (ListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        !item)
    || (v8 = (CommonUI_o *)operationItemListViewManager,
        ServantLeader = FollowerSelectItemListViewItem__get_ServantLeader(item, 0LL),
        v10 = (ServantStatusDialog_EndDelegate_o *)sub_1B9025C(ServantStatusDialog_EndDelegate_TypeInfo),
        ServantStatusDialog_EndDelegate___ctor(
          v10,
          (Il2CppObject *)this,
          Method_FollowerRootComponent_EndShowServant__,
          0LL),
        !v8) )
  {
    sub_1B9026C(operationItemListViewManager, item);
  }
  CommonUI__OpenServantStatusDialog_30537772(v8, 5, ServantLeader, v10, 0LL);
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

  if ( (byte_4A6B113 & 1) == 0 )
  {
    sub_1B90010(&ServantStatusDialog_EndDelegate_TypeInfo, equipInfo);
    sub_1B90010(&Method_FollowerRootComponent_EndShowServantEquip__, v7);
    sub_1B90010(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    byte_4A6B113 = 1;
  }
  operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager
    || (ListViewManager__GetScrollView(
          operationItemListViewManager,
          &this->fields.openScroll,
          &this->fields.openOffset,
          0LL),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v11 = (ServantStatusDialog_EndDelegate_o *)sub_1B9025C(ServantStatusDialog_EndDelegate_TypeInfo),
        ServantStatusDialog_EndDelegate___ctor(
          v11,
          (Il2CppObject *)this,
          Method_FollowerRootComponent_EndShowServantEquip__,
          0LL),
        !Instance) )
  {
    sub_1B9026C(operationItemListViewManager, equipInfo);
  }
  CommonUI__OpenServantEquipStatusDialog_30540868((CommonUI_o *)Instance, statusKind, equipInfo, v11, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerRootComponent__SetBackupBgmName(
        FollowerRootComponent_o *this,
        bool isNonStopEndBgm,
        const MethodInfo *method)
{
  if ( (byte_4A6B104 & 1) == 0 )
  {
    sub_1B90010(&SoundManager_TypeInfo, isNonStopEndBgm);
    byte_4A6B104 = 1;
  }
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  if ( SoundManager__isPlayBgm(0LL, 0LL) && !isNonStopEndBgm )
  {
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    this->fields.backupBgmName = SoundManager__getBgmName(0LL);
    sub_1B8FFB4(&this->fields.backupBgmName);
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

  if ( (byte_4A6B0FF & 1) == 0 )
  {
    sub_1B90010(&AtlasManager_TypeInfo, spriteName);
    sub_1B90010(&FollowerRootComponent_TypeInfo, v5);
    byte_4A6B0FF = 1;
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
  int32_t ItemIndex_30889944; // w0
  FollowerSelectItemListViewItem_o *Item; // x0
  struct BattleSetupInfo_o *v9; // x21
  FollowerSelectItemListViewItem_o *v10; // x20
  struct BattleSetupInfo_o *v11; // x21
  __int64 v12; // x2
  __int64 v13; // x3
  struct BattleSetupInfo_o *v14; // x8
  int32_t IsRecommendFollower_k__BackingField; // w9
  struct FollowerInfo_o *followerInfo; // x9
  struct UserRecommendSupportInfo_array *userRecommendSupportHash; // x9
  UserRecommendSupportInfo_o *v18; // x9
  struct BattleSetupInfo_o *v19; // x8
  int v20; // w9
  Il2CppObject *v21; // x19

  if ( (byte_4A6B118 & 1) == 0 )
  {
    sub_1B90010(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    sub_1B90010(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v3);
    byte_4A6B118 = 1;
  }
  Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_374D460 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
      ItemIndex_30889944 = FollowerSelectItemListViewManager__GetItemIndex_30889944(
                             (FollowerSelectItemListViewManager_o *)Instance,
                             followerId,
                             battleSetupInfo->fields.followerClassId,
                             battleSetupInfo->fields.followerSupportDeckId,
                             0LL);
      this->fields.selectItemNum = ItemIndex_30889944 & ~(ItemIndex_30889944 >> 31);
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
          v14 = this->fields.battleSetupInfo;
          if ( v14 )
          {
            v14->fields.followerSupportDeckId = v10->fields.supportDeckId;
            IsRecommendFollower_k__BackingField = v10->fields._IsRecommendFollower_k__BackingField;
            if ( !v10->fields._IsRecommendFollower_k__BackingField )
            {
LABEL_21:
              v14->fields.recommendSupportIdx = IsRecommendFollower_k__BackingField;
              Instance = FollowerSelectItemListViewItem__get_FollowerType(v10, 0LL);
              v19 = this->fields.battleSetupInfo;
              if ( !v19 )
                goto LABEL_29;
              v19->fields.followerType = 0;
              if ( (_DWORD)Instance == 5 )
              {
                v20 = 5;
              }
              else
              {
                if ( (_DWORD)Instance != 1 )
                  goto LABEL_27;
                v20 = 1;
              }
              v19->fields.followerType = v20;
              goto LABEL_27;
            }
            followerInfo = v10->fields.followerInfo;
            if ( followerInfo )
            {
              userRecommendSupportHash = followerInfo->fields.userRecommendSupportHash;
              if ( userRecommendSupportHash )
              {
                if ( !userRecommendSupportHash->max_length )
                  sub_1B90274(Instance, followerId, v12, v13);
                v18 = userRecommendSupportHash->m_Items[0];
                if ( v18 )
                {
                  IsRecommendFollower_k__BackingField = v18->fields.idx;
                  goto LABEL_21;
                }
              }
            }
          }
        }
      }
LABEL_29:
      sub_1B9026C(Instance, followerId);
    }
  }
LABEL_27:
  this->fields.state = 5;
  v21 = (Il2CppObject *)this->fields.battleSetupInfo;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  AvalonSceneManager__pushScene((AvalonSceneManager_o *)Instance, 40, 1, v21, 0LL);
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
  __int64 v13; // x2
  __int64 v14; // x3
  Il2CppClass *klass; // x22
  int namespaze; // w8
  unsigned int v17; // w23
  void **v18; // x24
  _QWORD *v19; // x8
  FollowerInfo_o **v20; // x24
  _QWORD *v21; // t1
  __int64 v22; // x25
  Il2CppClass *v23; // x22
  const char *v24; // x8
  bool v25; // w21
  __int64 v26; // x23
  __int64 v27; // x8
  __int64 v28; // x21
  FollowerInfo_o *v30; // x21
  SupportInfoJump_c *v31; // x0
  SupportInfoJump_o *v32; // x20
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  Il2CppObject *v34; // [xsp+0h] [xbp-50h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A6B119 & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMaster_PickupUserFollowerMaster___, method);
    sub_1B90010(&Method_DataManager_GetMaster_UserFollowerMaster___, v3);
    sub_1B90010(&DataManager_TypeInfo, v4);
    sub_1B90010(&Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long__TryGetSingleEntity__, v5);
    sub_1B90010(
      &Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long__TryGetSingleEntity__,
      v6);
    sub_1B90010(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v7);
    sub_1B90010(&SupportInfoJump_TypeInfo, v8);
    byte_4A6B119 = 1;
  }
  v34 = 0LL;
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
  operationItemListViewManager = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_UserFollowerMaster___);
  if ( !operationItemListViewManager )
    goto LABEL_42;
  operationItemListViewManager = DataMasterBase_object__object__long___TryGetSingleEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)operationItemListViewManager,
                                   &entity,
                                   (const MethodInfo_312C830 *)Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long__TryGetSingleEntity__);
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
      v17 = 0;
      while ( 1 )
      {
        if ( v17 >= namespaze )
          goto LABEL_43;
        v18 = &klass->_1.image + (int)v17;
        v21 = v18[4];
        v20 = (FollowerInfo_o **)(v18 + 4);
        v19 = v21;
        if ( !v21 )
          goto LABEL_42;
        v22 = v19[2];
        operationItemListViewManager = FollowerSelectItemListViewItem__get_FollowerId(v12, 0LL);
        if ( v22 == operationItemListViewManager )
          break;
        namespaze = (int)klass->_1.namespaze;
        if ( (int)++v17 >= namespaze )
          goto LABEL_18;
      }
      this->fields.state = 6;
      if ( v17 < LODWORD(klass->_1.namespaze) )
      {
        v30 = *v20;
        v31 = SupportInfoJump_TypeInfo;
LABEL_38:
        v32 = (SupportInfoJump_o *)sub_1B9025C(v31);
        SupportInfoJump___ctor_38763876(v32, v30, 0, 1, 0LL);
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
            operationItemListViewManager = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
            if ( operationItemListViewManager )
            {
              v25 = 1;
              AvalonSceneManager__pushScene(
                (AvalonSceneManager_o *)operationItemListViewManager,
                60,
                1,
                (Il2CppObject *)v32,
                0LL);
              return v25;
            }
          }
        }
LABEL_42:
        sub_1B9026C(operationItemListViewManager, selectItemNum);
      }
      goto LABEL_43;
    }
  }
LABEL_18:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  operationItemListViewManager = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_PickupUserFollowerMaster___);
  if ( !operationItemListViewManager )
    goto LABEL_42;
  operationItemListViewManager = DataMasterBase_object__object__long___TryGetSingleEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)operationItemListViewManager,
                                   &v34,
                                   (const MethodInfo_312C830 *)Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long__TryGetSingleEntity__);
  if ( (operationItemListViewManager & 1) == 0 )
    return 0;
  if ( !v34 )
    goto LABEL_42;
  v23 = v34[1].klass;
  if ( !v23 )
    return 0;
  v24 = v23->_1.namespaze;
  v25 = 0;
  if ( v24 && (int)v24 >= 1 )
  {
    v26 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v26 >= (unsigned int)v24 )
        goto LABEL_43;
      v27 = *((_QWORD *)&v23->_1.byval_arg.data + v26);
      if ( !v27 )
        goto LABEL_42;
      v28 = *(_QWORD *)(v27 + 16);
      operationItemListViewManager = FollowerSelectItemListViewItem__get_FollowerId(v12, 0LL);
      if ( v28 == operationItemListViewManager )
        break;
      LODWORD(v24) = v23->_1.namespaze;
      ++v26;
      v25 = 0;
      if ( (int)v26 >= (int)v24 )
        return v25;
    }
    this->fields.state = 6;
    if ( (unsigned int)v26 < LODWORD(v23->_1.namespaze) )
    {
      v30 = (FollowerInfo_o *)*((_QWORD *)&v23->_1.byval_arg.data + v26);
      v31 = SupportInfoJump_TypeInfo;
      goto LABEL_38;
    }
LABEL_43:
    sub_1B90274(operationItemListViewManager, selectItemNum, v13, v14);
  }
  return v25;
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
  __int64 Instance; // x0
  __int64 v14; // x1
  Il2CppObject *MasterData_object; // x20
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  struct BattleSetupInfo_o *v17; // x8
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  int32_t *p_friendPointUpVal; // x25
  Il2CppObject *v20; // x21
  EventQuestMaster_o *v21; // x22
  struct BattleSetupInfo_o *v22; // x8
  struct BattleSetupInfo_o *v23; // x8
  int32_t i; // w20
  BalanceConfig_c *v25; // x0
  PartyOrganizationListViewItem_o *Member; // x0
  PartyOrganizationListViewItem_o *v27; // x21
  System_Int64_array *v28; // x22
  UserServantEntity_o *userServantEntity; // x8
  int32_t v30; // w21
  struct BattleSetupInfo_o *v31; // x8
  QuestRestrictionInfo_o *v32; // x0
  struct BattleSetupInfo_o *v33; // x8
  struct BattleSetupInfo_o *v34; // x8
  Il2CppObject *v35; // x20
  struct BattleSetupInfo_o *v36; // x8
  int32_t eventId; // w22
  int64_t v38; // x21
  struct BattleSetupInfo_o *v39; // x8
  __int64 v40; // x2
  __int64 v41; // x3
  UserEventDeckEntity_o *v42; // x20
  __int64 v43; // x21
  int v44; // w8
  unsigned __int64 v45; // x22
  __int64 v46; // x26
  System_Int64_array *v47; // x23
  int32_t v48; // w24
  unsigned __int64 v49; // x22
  __int64 v50; // x26
  System_Int64_array *v51; // x23
  int v52; // w24
  struct BattleSetupInfo_o *v53; // x8
  int32_t k; // w20
  BalanceConfig_c *v55; // x0
  UserServantEntity_o *UserServant; // x0
  UserServantEntity_o *v57; // x21
  System_Int64_array *EquipList; // x23
  int32_t FriendPointUpVal; // w22
  int32_t m; // w19
  UserServantEntity_o *v61; // x0
  UserServantEntity_o *v62; // x20
  System_Int64_array *v63; // x22
  int32_t v64; // w21
  int32_t j; // w19
  PartyOrganizationListViewItem_o *v66; // x0
  PartyOrganizationListViewItem_o *v67; // x20
  System_Int64_array *v68; // x21
  UserServantEntity_o *v69; // x8
  int v70; // w20
  int32_t v71; // w21
  int32_t v72; // w21
  struct BattleSetupInfo_o *v73; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A6B10F & 1) == 0 )
  {
    sub_1B90010(&BalanceConfig_TypeInfo, method);
    sub_1B90010(&Method_DataManager_GetMasterData_EventCampaignMaster___, v3);
    sub_1B90010(&Method_DataManager_GetMasterData_EventQuestMaster___, v4);
    sub_1B90010(&Method_DataManager_GetMasterData_UserDeckMaster___, v5);
    sub_1B90010(&Method_DataManager_GetMasterData_UserEventDeckMaster___, v6);
    sub_1B90010(&Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__TryGetEntity__, v7);
    sub_1B90010(&LastUsedDeckNumberManager_TypeInfo, v8);
    sub_1B90010(&NetworkManager_TypeInfo, v9);
    sub_1B90010(&OptionManager_TypeInfo, v10);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1B90010(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v12);
    byte_4A6B10F = 1;
  }
  entity = 0LL;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_134;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_UserDeckMaster___);
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
  v71 = BattleSetupInfo__TargetQuestId((BattleSetupInfo_o *)Instance, 0LL);
  if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
  Instance = LastUsedDeckNumberManager__GetDeckNumber(v71, 0LL);
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
                 (const MethodInfo_312C7A8 *)Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__TryGetEntity__);
  }
  else
  {
    v72 = Instance;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = NetworkManager__get_UserId(0LL);
    if ( !MasterData_object )
      goto LABEL_134;
    Instance = (__int64)UserDeckMaster__getDeck((UserDeckMaster_o *)MasterData_object, Instance, v72, 0LL);
    entity = (Il2CppObject *)Instance;
  }
  v17 = this->fields.battleSetupInfo;
  if ( !v17 )
    goto LABEL_134;
  questRestrictionInfo = v17->fields.questRestrictionInfo;
  if ( questRestrictionInfo )
    QuestRestrictionInfo__SetDeckInfo(questRestrictionInfo, (UserDeckEntity_o *)entity, 0LL);
  *(_QWORD *)&this->fields.friendPointUpVal = 0LL;
  p_friendPointUpVal = &this->fields.friendPointUpVal;
  this->fields.friendPointCampaignEntityList = 0LL;
  sub_1B8FFB4(&this->fields.friendPointCampaignEntityList);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_134;
  v20 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_134;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_EventQuestMaster___);
  if ( !this->fields.battleSetupInfo )
    goto LABEL_134;
  v21 = (EventQuestMaster_o *)Instance;
  Instance = BattleSetupInfo__TargetQuestId(this->fields.battleSetupInfo, 0LL);
  v22 = this->fields.battleSetupInfo;
  if ( !v22 )
    goto LABEL_134;
  if ( !v21 )
    goto LABEL_134;
  Instance = (__int64)EventQuestMaster__GetEnabledEventCampaignForQuest(
                        v21,
                        Instance,
                        v22->fields.questPhase,
                        0LL,
                        7,
                        0LL);
  if ( !v20 )
    goto LABEL_134;
  this->fields.friendPointCampaignEntityList = EventCampaignMaster__getData_39145736(
                                                 (EventCampaignMaster_o *)v20,
                                                 24,
                                                 (EventEntity_array *)Instance,
                                                 0LL);
  Instance = sub_1B8FFB4(&this->fields.friendPointCampaignEntityList);
  if ( this->fields.tutorialMode == 4 )
  {
    v23 = this->fields.battleSetupInfo;
    if ( !v23 )
      goto LABEL_134;
    if ( v23->fields.isChildFollower )
    {
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_374D460 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_134;
      if ( *(_QWORD *)(Instance + 72) )
      {
        for ( i = 0; ; ++i )
        {
          v25 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v25 = BalanceConfig_TypeInfo;
          }
          if ( i >= v25->static_fields->DeckMemberMax )
            break;
          Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_374D460 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( !Instance )
            goto LABEL_134;
          Instance = *(_QWORD *)(Instance + 72);
          if ( !Instance )
            goto LABEL_134;
          Member = PartyListViewItem__GetMember((PartyListViewItem_o *)Instance, i, 0LL);
          if ( Member )
          {
            v27 = Member;
            if ( Member->fields.userServantEntity )
            {
              Instance = (__int64)PartyOrganizationListViewItem__GetEquipList(Member, 0LL);
              if ( !v27->fields.userServantEntity )
                goto LABEL_134;
              v28 = (System_Int64_array *)Instance;
              Instance = UserServantEntity__getFriendPointUpVal(
                           v27->fields.userServantEntity,
                           (System_Int64_array *)Instance,
                           0LL);
              userServantEntity = v27->fields.userServantEntity;
              if ( !userServantEntity )
                goto LABEL_134;
              v30 = Instance;
              if ( UserServantEntity__getFriendPointUpType(userServantEntity, v28, 0LL) == 104
                && v30 > *p_friendPointUpVal )
              {
                this->fields.friendPointUpVal = v30;
                this->fields.friendPointUpMaxVal = v30;
              }
            }
          }
        }
        for ( j = 0; ; ++j )
        {
          if ( !v25->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v25);
            v25 = BalanceConfig_TypeInfo;
          }
          if ( j >= v25->static_fields->DeckMemberMax )
            break;
          Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_374D460 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( !Instance )
            goto LABEL_134;
          Instance = *(_QWORD *)(Instance + 72);
          if ( !Instance )
            goto LABEL_134;
          v66 = PartyListViewItem__GetMember((PartyListViewItem_o *)Instance, j, 0LL);
          if ( v66 )
          {
            v67 = v66;
            if ( v66->fields.userServantEntity )
            {
              Instance = (__int64)PartyOrganizationListViewItem__GetEquipList(v66, 0LL);
              if ( !v67->fields.userServantEntity )
                goto LABEL_134;
              v68 = (System_Int64_array *)Instance;
              Instance = UserServantEntity__getFriendPointUpVal(
                           v67->fields.userServantEntity,
                           (System_Int64_array *)Instance,
                           0LL);
              v69 = v67->fields.userServantEntity;
              if ( !v69 )
                goto LABEL_134;
              v70 = Instance;
              if ( UserServantEntity__getFriendPointUpType(v69, v68, 0LL) == 123 )
                *p_friendPointUpVal += v70;
            }
          }
          v25 = BalanceConfig_TypeInfo;
        }
        return;
      }
    }
  }
  v31 = this->fields.battleSetupInfo;
  if ( !v31 )
LABEL_134:
    sub_1B9026C(Instance, v14);
  v32 = v31->fields.questRestrictionInfo;
  if ( v32 )
  {
    Instance = QuestRestrictionInfo__IsServantNum(v32, 0LL);
    if ( (Instance & 1) != 0 )
      goto LABEL_49;
    v33 = this->fields.battleSetupInfo;
    if ( !v33 )
      goto LABEL_134;
    Instance = (__int64)v33->fields.questRestrictionInfo;
    if ( !Instance )
      goto LABEL_134;
    Instance = QuestRestrictionInfo__IsNpcMulitipleOrOnly((QuestRestrictionInfo_o *)Instance, 0LL);
    if ( (Instance & 1) != 0 )
      goto LABEL_49;
    v34 = this->fields.battleSetupInfo;
    if ( !v34 )
      goto LABEL_134;
    Instance = (__int64)v34->fields.questRestrictionInfo;
    if ( !Instance )
      goto LABEL_134;
    if ( *(int *)(Instance + 396) >= 1 )
    {
LABEL_49:
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        v35 = DataManager__GetMasterData_object_(
                (DataManager_o *)Instance,
                (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_UserEventDeckMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = NetworkManager__get_UserId(0LL);
        v36 = this->fields.battleSetupInfo;
        if ( v36 )
        {
          eventId = v36->fields.eventId;
          v38 = Instance;
          Instance = BattleSetupInfo__TargetQuestId(this->fields.battleSetupInfo, 0LL);
          v39 = this->fields.battleSetupInfo;
          if ( v39 )
          {
            if ( v35 )
            {
              Instance = (__int64)UserEventDeckMaster__getDeckList(
                                    (UserEventDeckMaster_o *)v35,
                                    v38,
                                    eventId,
                                    Instance,
                                    v39->fields.questPhase,
                                    0LL);
              if ( Instance )
              {
                if ( !*(_DWORD *)(Instance + 24) )
                  goto LABEL_135;
                v42 = *(UserEventDeckEntity_o **)(Instance + 32);
                if ( v42 )
                {
                  Instance = (__int64)UserEventDeckEntity__GetUserServantList(
                                        *(UserEventDeckEntity_o **)(Instance + 32),
                                        0,
                                        0,
                                        0LL);
                  if ( Instance )
                  {
                    v43 = Instance;
                    v44 = *(_QWORD *)(Instance + 24);
                    if ( v44 >= 1 )
                    {
                      v45 = 0LL;
                      v46 = Instance + 32;
                      while ( v45 < (unsigned int)v44 )
                      {
                        if ( *(_QWORD *)(v46 + 8 * v45) )
                        {
                          Instance = (__int64)UserEventDeckEntity__GetEquipList(v42, v45, 0LL);
                          if ( v45 >= *(unsigned int *)(v43 + 24) )
                            break;
                          v47 = (System_Int64_array *)Instance;
                          Instance = *(_QWORD *)(v46 + 8 * v45);
                          if ( !Instance )
                            goto LABEL_134;
                          Instance = UserServantEntity__getFriendPointUpVal((UserServantEntity_o *)Instance, v47, 0LL);
                          if ( v45 >= *(unsigned int *)(v43 + 24) )
                            break;
                          v48 = Instance;
                          Instance = *(_QWORD *)(v46 + 8 * v45);
                          if ( !Instance )
                            goto LABEL_134;
                          Instance = UserServantEntity__getFriendPointUpType((UserServantEntity_o *)Instance, v47, 0LL);
                          if ( (_DWORD)Instance == 104 && v48 > *p_friendPointUpVal )
                          {
                            this->fields.friendPointUpVal = v48;
                            this->fields.friendPointUpMaxVal = v48;
                          }
                        }
                        v44 = *(_DWORD *)(v43 + 24);
                        if ( (__int64)++v45 >= v44 )
                          goto LABEL_71;
                      }
LABEL_135:
                      sub_1B90274(Instance, v14, v40, v41);
                    }
LABEL_71:
                    if ( v44 >= 1 )
                    {
                      v49 = 0LL;
                      v50 = v43 + 32;
                      while ( v49 < (unsigned int)v44 )
                      {
                        if ( *(_QWORD *)(v50 + 8 * v49) )
                        {
                          Instance = (__int64)UserEventDeckEntity__GetEquipList(v42, v49, 0LL);
                          if ( v49 >= *(unsigned int *)(v43 + 24) )
                            goto LABEL_135;
                          v51 = (System_Int64_array *)Instance;
                          Instance = *(_QWORD *)(v50 + 8 * v49);
                          if ( !Instance )
                            goto LABEL_134;
                          Instance = UserServantEntity__getFriendPointUpVal((UserServantEntity_o *)Instance, v51, 0LL);
                          if ( v49 >= *(unsigned int *)(v43 + 24) )
                            goto LABEL_135;
                          v52 = Instance;
                          Instance = *(_QWORD *)(v50 + 8 * v49);
                          if ( !Instance )
                            goto LABEL_134;
                          Instance = UserServantEntity__getFriendPointUpType((UserServantEntity_o *)Instance, v51, 0LL);
                          if ( (_DWORD)Instance == 123 )
                            *p_friendPointUpVal += v52;
                        }
                        v44 = *(_DWORD *)(v43 + 24);
                        if ( (__int64)++v49 >= v44 )
                          goto LABEL_82;
                      }
                      goto LABEL_135;
                    }
LABEL_82:
                    v53 = this->fields.battleSetupInfo;
                    if ( v53 )
                    {
                      Instance = (__int64)v53->fields.questRestrictionInfo;
                      if ( Instance )
                      {
                        QuestRestrictionInfo__SetDeckInfo_40484400((QuestRestrictionInfo_o *)Instance, v42, 0LL);
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
                    Instance = (__int64)v73->fields.questRestrictionInfo;
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
    v55 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v55 = BalanceConfig_TypeInfo;
    }
    if ( k >= v55->static_fields->DeckMemberMax )
      break;
    Instance = (__int64)entity;
    if ( !entity )
      goto LABEL_134;
    UserServant = UserDeckEntity__GetUserServant((UserDeckEntity_o *)entity, k, 0LL);
    if ( UserServant )
    {
      v57 = UserServant;
      Instance = (__int64)entity;
      if ( !entity )
        goto LABEL_134;
      EquipList = UserDeckEntity__GetEquipList((UserDeckEntity_o *)entity, k, 0LL);
      FriendPointUpVal = UserServantEntity__getFriendPointUpVal(v57, EquipList, 0LL);
      if ( UserServantEntity__getFriendPointUpType(v57, EquipList, 0LL) == 104 && FriendPointUpVal > *p_friendPointUpVal )
      {
        this->fields.friendPointUpVal = FriendPointUpVal;
        this->fields.friendPointUpMaxVal = FriendPointUpVal;
      }
    }
  }
  for ( m = 0; ; ++m )
  {
    if ( !v55->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v55);
      v55 = BalanceConfig_TypeInfo;
    }
    if ( m >= v55->static_fields->DeckMemberMax )
      break;
    Instance = (__int64)entity;
    if ( !entity )
      goto LABEL_134;
    v61 = UserDeckEntity__GetUserServant((UserDeckEntity_o *)entity, m, 0LL);
    if ( v61 )
    {
      v62 = v61;
      Instance = (__int64)entity;
      if ( !entity )
        goto LABEL_134;
      v63 = UserDeckEntity__GetEquipList((UserDeckEntity_o *)entity, m, 0LL);
      v64 = UserServantEntity__getFriendPointUpVal(v62, v63, 0LL);
      if ( UserServantEntity__getFriendPointUpType(v62, v63, 0LL) == 123 )
        *p_friendPointUpVal += v64;
    }
    v55 = BalanceConfig_TypeInfo;
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

  if ( (byte_4A6B129 & 1) == 0 )
  {
    sub_1B90010(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    sub_1B90010(&TerminalPramsManager_TypeInfo, v5);
    sub_1B90010(&StringLiteral_3529/*"CLICK_BACK"*/, v6);
    byte_4A6B129 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  CommonUI__CloseConfirmDialog(Instance, 0LL);
  if ( isDecide )
  {
    FollowerRootComponent__QuestHintDialogResetTemporarilyId(v9, v10);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A6B12B )
    {
      sub_1B90010(&TerminalPramsManager_TypeInfo, v8);
      byte_4A6B12B = 1;
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
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3529/*"CLICK_BACK"*/, 0LL);
      return;
    }
LABEL_14:
    sub_1B9026C(Instance, v8);
  }
  this->fields.state = 3;
}


void __fastcall FollowerRootComponent__beginFinish(FollowerRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x0
  FollowerRootComponent_c *v6; // x0
  struct FollowerRootComponent_StaticFields *static_fields; // x0

  if ( (byte_4A6B10B & 1) == 0 )
  {
    sub_1B90010(&AtlasManager_TypeInfo, method);
    sub_1B90010(&FollowerRootComponent_TypeInfo, v3);
    sub_1B90010(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, v4);
    byte_4A6B10B = 1;
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
  v6 = FollowerRootComponent_TypeInfo;
  if ( !FollowerRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerRootComponent_TypeInfo);
    v6 = FollowerRootComponent_TypeInfo;
  }
  static_fields = v6->static_fields;
  static_fields->partyOrganizationAtlasCache = 0LL;
  sub_1B8FFB4(&static_fields->partyOrganizationAtlasCache);
  operationItemListViewManager = (FollowerSelectItemListViewManager_o *)this->fields.backSkinSprite;
  if ( !operationItemListViewManager
    || (operationItemListViewManager = (FollowerSelectItemListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                                (UnityEngine_Component_o *)operationItemListViewManager,
                                                                                0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)operationItemListViewManager, 0, 0LL),
        (operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__)) == 0LL) )
  {
LABEL_14:
    sub_1B9026C(operationItemListViewManager, method);
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

  if ( (byte_4A6B100 & 1) == 0 )
  {
    sub_1B90010(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_4A6B100 = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B9026C(0LL, v4);
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, (SceneRootComponent_o *)this, 0LL);
}


void __fastcall FollowerRootComponent__beginPause(FollowerRootComponent_o *this, const MethodInfo *method)
{
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x0

  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    sub_1B9026C(0LL, method);
  FollowerSelectItemListViewManager__SaveSortFilter(operationItemListViewManager, 0LL);
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
  __int64 methodPtr_low; // x10
  FollowerSelectItemListViewItem_o *Item; // x0
  struct BattleSetupInfo_o *battleSetupInfo; // x22
  FollowerSelectItemListViewItem_o *v25; // x21
  struct BattleSetupInfo_o *v26; // x8
  int klass_high; // w9
  struct BattleSetupInfo_o *v28; // x8
  struct BattleSetupInfo_o *v29; // x8
  Il2CppObject *v30; // x19
  __int64 v31; // x9
  Il2CppObject *v32; // x10
  struct BattleSetupInfo_o **p_battleSetupInfo; // x21
  struct BattleSetupInfo_o *v34; // x8
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x20
  int32_t tutorialMode; // w8
  struct BattleSetupInfo_o *v37; // x8
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  struct BattleSetupInfo_o *v39; // x8
  const MethodInfo *v40; // x4
  struct BattleSetupInfo_o *v41; // x8
  const MethodInfo *v42; // x1
  CommonUI_o *v43; // x20
  struct BattleSetupInfo_o *v44; // x8
  PartyListViewItem_o *v45; // x20
  UnityEngine_Component_o *v46; // x8
  int32_t i; // w21
  FollowerSelectItemListViewManager_o *v48; // x22
  struct BattleSetupInfo_o *v49; // x8
  const MethodInfo *v50; // x4
  struct BattleSetupInfo_o *v51; // x8
  FollowerSelectItemListViewManager_o *v52; // x22
  FollowerSelectItemListViewManager_CallbackFunc_o *v53; // x23
  PartyOrganizationListViewItem_o *Member; // x0
  struct FollowerInfo_o *followerInfo; // x8
  FollowerSelectItemListViewManager_o *v56; // x20
  int64_t userId; // x21
  struct QuestRestrictionInfo_o *v58; // x8
  BalanceConfig_c *v59; // x0
  int32_t v60; // w22
  PartyOrganizationListViewItem_o *v61; // x0
  struct FollowerInfo_o *v62; // x8

  if ( (byte_4A6B109 & 1) == 0 )
  {
    sub_1B90010(&AvalonSceneManager_TypeInfo, data);
    sub_1B90010(&BalanceConfig_TypeInfo, v5);
    sub_1B90010(&BattleSetupInfo_TypeInfo, v6);
    sub_1B90010(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, v7);
    sub_1B90010(&Method_FollowerRootComponent_OnSelectFollowerItem__, v8);
    sub_1B90010(&FollowerRootComponent_TypeInfo, v9);
    sub_1B90010(&RandomLimitCountManager_TypeInfo, v10);
    sub_1B90010(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    sub_1B90010(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v12);
    sub_1B90010(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v13);
    sub_1B90010(&SupportInfoJump_TypeInfo, v14);
    sub_1B90010(&TutorialFlag_TypeInfo, v15);
    byte_4A6B109 = 1;
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
  sub_1B8FFB4(&static_fields->partyOrganizationAtlasCache);
  titleInfo = this->fields.titleInfo;
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_374D460 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_114;
  if ( *(_BYTE *)(Instance + 80) )
  {
    selectItemNum = 0LL;
    if ( !titleInfo )
      goto LABEL_114;
  }
  else
  {
    selectItemNum = this->fields.tutorialMode != 2;
    if ( !titleInfo )
      goto LABEL_114;
  }
  TitleInfoControl__setBackBtnEnable(titleInfo, selectItemNum, 0LL);
  Instance = (__int64)this->fields.operationItemListViewManager;
  if ( !Instance )
    goto LABEL_114;
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
            goto LABEL_114;
          Item = FollowerSelectItemListViewManager__GetItem(
                   (FollowerSelectItemListViewManager_o *)Instance,
                   selectItemNum,
                   0LL);
          if ( Item )
          {
            battleSetupInfo = this->fields.battleSetupInfo;
            v25 = Item;
            this->fields.state = 5;
            Instance = FollowerSelectItemListViewItem__get_FollowerId(Item, 0LL);
            if ( battleSetupInfo )
            {
              battleSetupInfo->fields.followerId = Instance;
              v26 = this->fields.battleSetupInfo;
              if ( v26 )
              {
                v26->fields.followerClassId = (int32_t)data[3].klass;
                klass_high = HIDWORD(data[3].klass);
                if ( klass_high <= 0 )
                  klass_high = v25->fields.supportDeckId;
                v26->fields.followerSupportDeckId = klass_high;
                Instance = FollowerSelectItemListViewItem__get_FollowerType(v25, 0LL);
                v28 = this->fields.battleSetupInfo;
                if ( v28 )
                {
                  v28->fields.followerType = 0;
                  if ( ((unsigned int)Instance | 4) == 5 )
                    v28->fields.followerType = Instance;
                  if ( this->fields.operationItemListViewManager )
                  {
                    if ( !byte_4A6B12A )
                    {
                      sub_1B90010(&FollowerSelectItemListViewManager_TypeInfo, selectItemNum);
                      byte_4A6B12A = 1;
                    }
                    Instance = (__int64)FollowerSelectItemListViewManager_TypeInfo;
                    if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
                      Instance = (__int64)FollowerSelectItemListViewManager_TypeInfo;
                    }
                    v29 = this->fields.battleSetupInfo;
                    if ( v29 )
                    {
                      selectItemNum = (unsigned int)v29->fields.followerClassId;
                      if ( *(_DWORD *)(*(_QWORD *)(Instance + 184) + 8LL) != (_DWORD)selectItemNum )
                      {
                        Instance = (__int64)this->fields.operationItemListViewManager;
                        if ( !Instance )
                          goto LABEL_114;
                        if ( FollowerSelectItemListViewManager__ChangeClass(
                               (FollowerSelectItemListViewManager_o *)Instance,
                               selectItemNum,
                               0LL) )
                        {
                          Instance = (__int64)this->fields.operationItemListViewManager;
                          if ( !Instance )
                            goto LABEL_114;
                          ListViewManager__JumpItem((ListViewManager_o *)Instance, this->fields.selectItemNum, 0LL);
                        }
                      }
                      v30 = (Il2CppObject *)this->fields.battleSetupInfo;
                      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
                      if ( Instance )
                      {
                        AvalonSceneManager__pushScene((AvalonSceneManager_o *)Instance, 40, 1, v30, 0LL);
                        return;
                      }
                    }
                  }
                }
              }
            }
LABEL_114:
            sub_1B9026C(Instance, selectItemNum);
          }
        }
      }
    }
  }
  else
  {
    if ( data )
    {
      v31 = LOBYTE(BattleSetupInfo_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(data->klass->vtable[0].methodPtr) >= (unsigned int)v31 )
      {
        if ( (BattleSetupInfo_c *)data->klass->_2.typeHierarchy[v31 - 1] == BattleSetupInfo_TypeInfo )
          v32 = data;
        else
          v32 = 0LL;
      }
      else
      {
        v32 = 0LL;
      }
      this->fields.battleSetupInfo = (struct BattleSetupInfo_o *)v32;
      p_battleSetupInfo = &this->fields.battleSetupInfo;
    }
    else
    {
      this->fields.battleSetupInfo = 0LL;
      p_battleSetupInfo = &this->fields.battleSetupInfo;
    }
    Instance = sub_1B8FFB4(p_battleSetupInfo);
    v34 = *p_battleSetupInfo;
    if ( !*p_battleSetupInfo )
      return;
    questRestrictionInfo = v34->fields.questRestrictionInfo;
    if ( !questRestrictionInfo )
      goto LABEL_114;
    if ( !QuestRestrictionInfo__IsMyServantOrNpcRestriction(v34->fields.questRestrictionInfo, 0LL)
      && (questRestrictionInfo->fields.isNoSupportBattle
       || questRestrictionInfo->fields.isFixedMyServantSingle
       || questRestrictionInfo->fields.isSupportOnlyForceBattle) )
    {
      goto LABEL_105;
    }
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    Instance = TutorialFlag__Get_37740444(102, 0LL);
    if ( (Instance & 1) == 0 )
    {
      v37 = *p_battleSetupInfo;
      if ( !*p_battleSetupInfo )
        goto LABEL_114;
      goto LABEL_76;
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
        v37 = this->fields.battleSetupInfo;
        if ( !v37 )
          goto LABEL_114;
LABEL_76:
        if ( v37->fields.isChildFollower )
        {
          FollowerRootComponent__ReturnBattleSetupMenu(this, (const MethodInfo *)selectItemNum);
          return;
        }
        goto LABEL_105;
      }
LABEL_64:
      FollowerRootComponent__ReturnSupportList(this, (const MethodInfo *)selectItemNum);
      return;
    }
    Instance = (__int64)this->fields.battleSetupInfo;
    this->fields.selectItemNum = -1;
    *(_QWORD *)&this->fields.tutorialMode = 0x100000003LL;
    if ( !Instance )
      goto LABEL_114;
    operationItemListViewManager = this->fields.operationItemListViewManager;
    Instance = BattleSetupInfo__TargetQuestId((BattleSetupInfo_o *)Instance, 0LL);
    v39 = this->fields.battleSetupInfo;
    if ( !v39 )
      goto LABEL_114;
    if ( !operationItemListViewManager )
      goto LABEL_114;
    FollowerSelectItemListViewManager__CreateList(
      operationItemListViewManager,
      Instance,
      v39->fields.questPhase,
      this->fields.friendPointUpVal,
      this->fields.friendPointUpMaxVal,
      this->fields.friendPointCampaignEntityList,
      v39->fields.questRestrictionInfo,
      0LL);
    v41 = this->fields.battleSetupInfo;
    if ( !v41 )
      goto LABEL_114;
    Instance = (__int64)this->fields.followerQuestInfomationDraw;
    if ( !Instance )
      goto LABEL_114;
    FollowerQuestInfomationDraw__SetInfomation(
      (FollowerQuestInfomationDraw_o *)Instance,
      v41->fields.questRestrictionInfo,
      0,
      0LL,
      v40);
    this->fields.state = 2;
    FollowerRootComponent__OnMoveEnd(this, v42);
    goto LABEL_71;
  }
  if ( this->fields.state == 6 )
    goto LABEL_64;
  v44 = this->fields.battleSetupInfo;
  if ( !v44 )
    goto LABEL_114;
  if ( !v44->fields.isChildFollower )
  {
    v58 = v44->fields.questRestrictionInfo;
    if ( !v58 )
      goto LABEL_114;
    if ( v58->fields.isNotTransitionSupportList )
    {
LABEL_105:
      FollowerRootComponent__ReturnQuestMenu(this, (const MethodInfo *)selectItemNum);
      return;
    }
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  RandomLimitCountManager__set_EnableRandomLimitCount(0, 0LL);
  RandomLimitCountManager__set_EnableRandomLimitCount(1, 0LL);
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_374D460 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_114;
  v45 = *(PartyListViewItem_o **)(Instance + 72);
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_374D460 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_114;
  v46 = (UnityEngine_Component_o *)this->fields.operationItemListViewManager;
  i = *(_DWORD *)(Instance + 56);
  this->fields.tutorialState = 0;
  this->fields.selectItemNum = -1;
  if ( !v46 )
    goto LABEL_114;
  Instance = (__int64)UnityEngine_Component__get_gameObject(v46, 0LL);
  if ( !Instance )
    goto LABEL_114;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (__int64)this->fields.battleSetupInfo;
  if ( !Instance )
    goto LABEL_114;
  v48 = this->fields.operationItemListViewManager;
  Instance = BattleSetupInfo__TargetQuestId((BattleSetupInfo_o *)Instance, 0LL);
  v49 = this->fields.battleSetupInfo;
  if ( !v49 )
    goto LABEL_114;
  if ( !v48 )
    goto LABEL_114;
  FollowerSelectItemListViewManager__CreateList(
    v48,
    Instance,
    v49->fields.questPhase,
    this->fields.friendPointUpVal,
    this->fields.friendPointUpMaxVal,
    this->fields.friendPointCampaignEntityList,
    v49->fields.questRestrictionInfo,
    0LL);
  v51 = this->fields.battleSetupInfo;
  if ( !v51 )
    goto LABEL_114;
  Instance = (__int64)this->fields.followerQuestInfomationDraw;
  if ( !Instance )
    goto LABEL_114;
  FollowerQuestInfomationDraw__SetInfomation(
    (FollowerQuestInfomationDraw_o *)Instance,
    v51->fields.questRestrictionInfo,
    i,
    0LL,
    v50);
  this->fields.state = 3;
  v52 = this->fields.operationItemListViewManager;
  v53 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1B9025C(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v53,
    (Il2CppObject *)this,
    (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
    0LL);
  if ( !v52 )
    goto LABEL_114;
  FollowerSelectItemListViewManager__SetMode(v52, 2, v53, 0LL);
  if ( v45 )
  {
    Instance = (__int64)this->fields.operationItemListViewManager;
    if ( !Instance )
      goto LABEL_114;
    if ( ListViewManager__get_ItemSum((ListViewManager_o *)Instance, 0LL) >= 3 )
    {
      if ( i )
      {
LABEL_96:
        if ( i >= 1 )
        {
          Member = PartyListViewItem__GetMember(v45, i - 1, 0LL);
          if ( Member )
          {
            followerInfo = Member->fields.followerInfo;
            if ( followerInfo )
            {
              v56 = this->fields.operationItemListViewManager;
              userId = followerInfo->fields.userId;
              Instance = (__int64)PartyOrganizationListViewItem__get_ServantLeader(Member, 0LL);
              if ( !Instance )
                goto LABEL_114;
              if ( !v56 )
                goto LABEL_114;
              Instance = FollowerSelectItemListViewManager__GetItemIndex(v56, userId, *(_QWORD *)(Instance + 40), 0LL);
              if ( !this->fields.operationItemListViewManager )
                goto LABEL_114;
              ListViewManager__JumpItem((ListViewManager_o *)this->fields.operationItemListViewManager, Instance, 0LL);
            }
          }
        }
      }
      else
      {
        for ( i = 1; ; ++i )
        {
          v59 = BalanceConfig_TypeInfo;
          v60 = i - 1;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v59 = BalanceConfig_TypeInfo;
          }
          if ( v60 >= v59->static_fields->DeckMemberMax )
            break;
          v61 = PartyListViewItem__GetMember(v45, v60, 0LL);
          if ( v61 )
          {
            v62 = v61->fields.followerInfo;
            if ( v62 )
            {
              if ( Follower__IsNotNpc(v62->fields.type, 0LL) )
                goto LABEL_96;
            }
          }
        }
      }
    }
  }
LABEL_71:
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v43 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    Instance = j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v43 )
    goto LABEL_114;
  CommonUI__maskFadein(v43, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
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
  __int64 Instance; // x0
  const MethodInfo *v25; // x1
  __int64 v26; // x8
  const MethodInfo *v27; // x1
  __int64 methodPtr_low; // x9
  struct BattleSetupInfo_o *v29; // x10
  struct BattleSetupInfo_o **p_battleSetupInfo; // x0
  const MethodInfo *v31; // x1
  FollowerRootComponent_c *v32; // x0
  struct UIAtlas_o *partyOrganizationAtlas; // x20
  struct FollowerRootComponent_StaticFields *static_fields; // x0
  UILabel_o *infomationLabel; // x20
  UnityEngine_GameObject_o *refreshButtonBase; // x20
  bool v37; // w8
  __int64 v38; // x8
  ConstantMaster_o *v39; // x20
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  System_Action_o *v41; // x20
  System_Action_o *v42; // x20
  QuestPhaseMaster_o *v43; // x20
  struct BattleSetupInfo_o *v44; // x8
  NpcFollowerMaster_o *v45; // x20
  struct BattleSetupInfo_o *v46; // x8
  struct BattleSetupInfo_o *v47; // x8
  const MethodInfo *v48; // x1
  const MethodInfo *v49; // x4
  struct BattleSetupInfo_o *v50; // x8

  if ( (byte_4A6B101 & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, data);
    sub_1B90010(&AtlasManager_TypeInfo, v5);
    sub_1B90010(&BalanceConfig_TypeInfo, v6);
    sub_1B90010(&BattleSetupInfo_TypeInfo, v7);
    sub_1B90010(&Method_DataManager_GetMasterData_ConstantMaster___, v8);
    sub_1B90010(&Method_DataManager_GetMasterData_NpcFollowerMaster___, v9);
    sub_1B90010(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v10);
    sub_1B90010(&Method_FollowerRootComponent_EndLoadCommonBg__, v11);
    sub_1B90010(&Method_FollowerRootComponent_EndLoadPartyOrganizationAtlasSimple__, v12);
    sub_1B90010(&FollowerRootComponent_TypeInfo, v13);
    sub_1B90010(&LocalizationManager_TypeInfo, v14);
    sub_1B90010(&RandomLimitCountManager_TypeInfo, v15);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1B90010(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v17);
    sub_1B90010(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v18);
    sub_1B90010(&TutorialFlag_TypeInfo, v19);
    sub_1B90010(&StringLiteral_13544/*"TUTORIAL_SUPPORT_QUEST_ID"*/, v20);
    sub_1B90010(&StringLiteral_13545/*"TUTORIAL_SUPPORT_QUEST_PHASE"*/, v21);
    sub_1B90010(&StringLiteral_6411/*"FOLLOWER_SELECT_EXPLANATION2"*/, v22);
    sub_1B90010(&StringLiteral_1/*""*/, v23);
    byte_4A6B101 = 1;
  }
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_374D460 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_95;
  if ( PartyOrganizationUtility__ExistsTemporaryPartyInfo((PartyOrganizationUtility_o *)Instance, 0LL) )
  {
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_374D460 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_95;
    v26 = *(_QWORD *)(Instance + 120);
    if ( !v26 )
      goto LABEL_95;
    this->fields.battleSetupInfo = *(struct BattleSetupInfo_o **)(v26 + 48);
    sub_1B8FFB4(&this->fields.battleSetupInfo);
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_374D460 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !Instance )
      goto LABEL_95;
    if ( !MissionNotifyManager__IsPause((MissionNotifyManager_o *)Instance, 0LL) )
    {
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_374D460 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
      if ( !Instance )
        goto LABEL_95;
      MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
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
    sub_1B8FFB4(p_battleSetupInfo);
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
  sub_1B8FFB4(&static_fields->partyOrganizationAtlasCache);
  Instance = (__int64)this->fields.titleInfo;
  if ( !Instance )
    goto LABEL_95;
  TitleInfoControl__setTitleInfo_37239828((TitleInfoControl_o *)Instance, this->fields.myFSM, 3, 63, 0LL);
  Instance = (__int64)this->fields.titleInfo;
  if ( !Instance )
    goto LABEL_95;
  TitleInfoControl__setBackBtnEnable((TitleInfoControl_o *)Instance, 1, 0LL);
  Instance = (__int64)this->fields.operationItemListViewManager;
  if ( !Instance )
    goto LABEL_95;
  FollowerSelectItemListViewManager__DestroyList_30877968(
    (FollowerSelectItemListViewManager_o *)Instance,
    this->fields.battleSetupInfo,
    0LL);
  infomationLabel = this->fields.infomationLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_6411/*"FOLLOWER_SELECT_EXPLANATION2"*/, 0LL);
  if ( !infomationLabel )
    goto LABEL_95;
  UILabel__set_text(infomationLabel, (System_String_o *)Instance, 0LL);
  Instance = (__int64)BalanceConfig_TypeInfo;
  refreshButtonBase = this->fields.refreshButtonBase;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    Instance = j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  if ( !refreshButtonBase )
    goto LABEL_95;
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
    goto LABEL_95;
  v37 = *(_QWORD *)(Instance + 112) || *(_DWORD *)(Instance + 120) != 0;
  if ( (v37 & *(_BYTE *)(Instance + 73)) != 0
    && (BattleSetupInfo__SetRestriction((BattleSetupInfo_o *)Instance, 1, 0LL),
        (Instance = (__int64)this->fields.battleSetupInfo) == 0)
    || (v38 = *(_QWORD *)(Instance + 88)) == 0 )
  {
LABEL_95:
    sub_1B9026C(Instance, v25);
  }
  if ( *(_BYTE *)(v38 + 378) )
  {
LABEL_43:
    FollowerRootComponent__StartBattleSetupMenu(this, v25);
    return;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_37740444(102, 0LL) )
  {
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_95;
    Instance = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_ConstantMaster___);
    if ( !Instance )
      goto LABEL_95;
    v39 = (ConstantMaster_o *)Instance;
    Instance = ConstantMaster__GetValue((ConstantMaster_o *)Instance, (System_String_o *)StringLiteral_13544/*"TUTORIAL_SUPPORT_QUEST_ID"*/, 0LL);
    battleSetupInfo = this->fields.battleSetupInfo;
    if ( !battleSetupInfo )
      goto LABEL_95;
    if ( battleSetupInfo->fields.questId == (_DWORD)Instance )
    {
      Instance = ConstantMaster__GetValue(v39, (System_String_o *)StringLiteral_13545/*"TUTORIAL_SUPPORT_QUEST_PHASE"*/, 0LL);
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
    Instance = (__int64)this->fields.infomationLabel;
    *(_QWORD *)&this->fields.tutorialMode = 0x100000002LL;
    if ( !Instance )
      goto LABEL_95;
    UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    battleSetupInfo = this->fields.battleSetupInfo;
    if ( !battleSetupInfo )
      goto LABEL_95;
  }
  Instance = (__int64)battleSetupInfo->fields.questRestrictionInfo;
  if ( !Instance )
    goto LABEL_95;
  if ( !*(_BYTE *)(Instance + 403)
    && !*(_BYTE *)(Instance + 401)
    && !*(_BYTE *)(Instance + 360)
    && !*(_BYTE *)(Instance + 379) )
  {
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
      if ( this->fields.battleSetupInfo )
      {
        v43 = (QuestPhaseMaster_o *)Instance;
        Instance = BattleSetupInfo__TargetQuestId(this->fields.battleSetupInfo, 0LL);
        v44 = this->fields.battleSetupInfo;
        if ( v44 )
        {
          if ( v43 )
          {
            Instance = (__int64)QuestPhaseMaster__GetEntity(v43, Instance, v44->fields.questPhase, 0LL);
            if ( Instance && *(_BYTE *)(Instance + 24) )
            {
              Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                goto LABEL_95;
              Instance = (__int64)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
              if ( !this->fields.battleSetupInfo )
                goto LABEL_95;
              v45 = (NpcFollowerMaster_o *)Instance;
              Instance = BattleSetupInfo__TargetQuestId(this->fields.battleSetupInfo, 0LL);
              v46 = this->fields.battleSetupInfo;
              if ( !v46 )
                goto LABEL_95;
              if ( !v45 )
                goto LABEL_95;
              Instance = (__int64)NpcFollowerMaster__GetQuestFollowerList(v45, Instance, v46->fields.questPhase, 0LL);
              if ( !Instance )
                goto LABEL_95;
              if ( !*(_QWORD *)(Instance + 24) )
              {
                *(_QWORD *)&this->fields.tutorialMode = 0x100000001LL;
                goto LABEL_70;
              }
            }
            v47 = this->fields.battleSetupInfo;
            if ( v47 )
            {
              Instance = (__int64)v47->fields.questRestrictionInfo;
              if ( Instance )
              {
                if ( QuestRestrictionInfo__IsMyServantOrNpcRestriction((QuestRestrictionInfo_o *)Instance, 0LL) )
                  this->fields.tutorialMode = 4;
                FollowerRootComponent__UpdateDeckInfomation(this, v48);
                v50 = this->fields.battleSetupInfo;
                if ( v50 )
                {
                  Instance = (__int64)this->fields.followerQuestInfomationDraw;
                  if ( Instance )
                  {
                    FollowerQuestInfomationDraw__SetInfomation(
                      (FollowerQuestInfomationDraw_o *)Instance,
                      v50->fields.questRestrictionInfo,
                      0,
                      0LL,
                      v49);
                    Instance = (__int64)this->fields.backSkinSprite;
                    if ( Instance )
                    {
                      Instance = (__int64)UnityEngine_Component__get_gameObject(
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
    v41 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
    System_Action___ctor(v41, (Il2CppObject *)this, Method_FollowerRootComponent_EndLoadCommonBg__, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__LoadUISkin(v41, 2, 1, 0LL);
    return;
  }
  this->fields.tutorialMode = 1;
LABEL_70:
  v42 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
  System_Action___ctor(
    v42,
    (Il2CppObject *)this,
    Method_FollowerRootComponent_EndLoadPartyOrganizationAtlasSimple__,
    0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadPartyOrganizationAtlas(v42, 1, 0LL);
}


void __fastcall FollowerRootComponent__setBattleSetupFollowType(
        FollowerRootComponent_o *this,
        int32_t type,
        const MethodInfo *method)
{
  struct BattleSetupInfo_o *battleSetupInfo; // x8

  battleSetupInfo = this->fields.battleSetupInfo;
  if ( !battleSetupInfo )
    sub_1B9026C(this, type);
  battleSetupInfo->fields.followerType = 0;
  if ( (type | 4) == 5 )
    battleSetupInfo->fields.followerType = type;
}


void __fastcall FollowerRootComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19

  if ( (byte_4A6B12C & 1) == 0 )
  {
    sub_1B90010(&FollowerRootComponent___c_TypeInfo, v1);
    byte_4A6B12C = 1;
  }
  v2 = (Il2CppObject *)sub_1B9025C(FollowerRootComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  FollowerRootComponent___c_TypeInfo->static_fields->__9 = (struct FollowerRootComponent___c_o *)v2;
  sub_1B8FFB4(FollowerRootComponent___c_TypeInfo->static_fields);
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

  if ( (byte_4A6B12D & 1) == 0 )
  {
    sub_1B90010(&PartyOrganizationUtility_TypeInfo, method);
    sub_1B90010(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v2);
    byte_4A6B12D = 1;
  }
  v3 = PartyOrganizationUtility_TypeInfo;
  if ( !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
    v3 = PartyOrganizationUtility_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(v3->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B9026C(0LL, v5);
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

  if ( (byte_4A6B12E & 1) == 0 )
  {
    sub_1B90010(&PartyOrganizationUtility_TypeInfo, method);
    sub_1B90010(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v2);
    byte_4A6B12E = 1;
  }
  v3 = PartyOrganizationUtility_TypeInfo;
  if ( !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
    v3 = PartyOrganizationUtility_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(v3->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B9026C(0LL, v5);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL);
}