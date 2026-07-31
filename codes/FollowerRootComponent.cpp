void FollowerRootComponent___cctor(const MethodInfo *method)
{
  struct FollowerRootComponent_StaticFields *static_fields; // x8

  if ( (byte_5932E72 & 1) == 0 )
  {
    sub_21FFC50(&FollowerRootComponent_TypeInfo);
    byte_5932E72 = 1;
  }
  static_fields = FollowerRootComponent_TypeInfo->static_fields;
  static_fields->LIST_UPDATE_MESSAGE_FONT_SIZE = 26;
  *(_QWORD *)&static_fields->RETURN_TERMINAL_MESSAGE_FONT_SIZE = 0xA0000001BLL;
  static_fields->RETURN_TERMINAL_MESSAGE_SPACING_Y = 5;
}


void FollowerRootComponent___ctor(FollowerRootComponent_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t v9; // w1

  if ( (byte_5932E71 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5932E71 = 1;
  }
  v9 = (int)StringLiteral_1/*""*/;
  this->fields.backupBgmName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.backupBgmName, v9, v2, v3, v4, v5, v6, v7);
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0);
}


void FollowerRootComponent__CallbackFollowerList(
        FollowerRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_5932E56 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_11545/*"REQUEST_OK"*/);
    byte_5932E56 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_21FFECC(0, result);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_11545/*"REQUEST_OK"*/, 0);
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
    sub_21FFECC(0, result);
  ListViewManager__SetEmptyMessageBase(operationItemListViewManager, 1, 0);
  FollowerRootComponent__Init(this, v5);
}


void FollowerRootComponent__CallbackRefresh(
        FollowerRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x0
  FollowerSelectItemListViewManager_o *v8; // x20
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  FollowerSelectItemListViewManager_o *v10; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v11; // x21

  if ( (byte_5932E69 & 1) == 0 )
  {
    sub_21FFC50(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_FollowerRootComponent_OnSelectFollowerItem__);
    sub_21FFC50(&OtherUserServantLimitCountManager_TypeInfo);
    sub_21FFC50(&RandomLimitCountManager_TypeInfo);
    byte_5932E69 = 1;
  }
  if ( !*(&RandomLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, result, method);
  RandomLimitCountManager__set_EnableRandomLimitCount(0, 0);
  RandomLimitCountManager__set_EnableRandomLimitCount(1, 0);
  if ( !*(&OtherUserServantLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(OtherUserServantLimitCountManager_TypeInfo, v4, v5);
  OtherUserServantLimitCountManager__Clear(0);
  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    goto LABEL_14;
  FollowerSelectItemListViewManager__SaveSortFilter(operationItemListViewManager, 0);
  operationItemListViewManager = (FollowerSelectItemListViewManager_o *)this->fields.battleSetupInfo;
  if ( !operationItemListViewManager )
    goto LABEL_14;
  v8 = this->fields.operationItemListViewManager;
  operationItemListViewManager = (FollowerSelectItemListViewManager_o *)BattleSetupInfo__TargetQuestId(
                                                                          (BattleSetupInfo_o *)operationItemListViewManager,
                                                                          0);
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
          0),
        v10 = this->fields.operationItemListViewManager,
        v11 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_21FFEBC(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo),
        FollowerSelectItemListViewManager_CallbackFunc___ctor(
          v11,
          (Il2CppObject *)this,
          (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
          0),
        !v10)
    || (FollowerSelectItemListViewManager__SetMode(v10, 2, v11, 0),
        (operationItemListViewManager = (FollowerSelectItemListViewManager_o *)this->fields.commonConfirmDialog) == 0) )
  {
LABEL_14:
    sub_21FFECC(operationItemListViewManager, v6);
  }
  CommonConfirmDialog__Close((CommonConfirmDialog_o *)operationItemListViewManager, 0);
}


void FollowerRootComponent__EndCloseShowServant(FollowerRootComponent_o *this, const MethodInfo *method)
{
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_5932E5D & 1) == 0 )
  {
    sub_21FFC50(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_FollowerRootComponent_OnSelectFollowerItem__);
    byte_5932E5D = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v4 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_21FFEBC(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
    0);
  if ( !operationItemListViewManager )
    sub_21FFECC(v5, v6);
  FollowerSelectItemListViewManager__SetMode(operationItemListViewManager, 2, v4, 0);
}


void FollowerRootComponent__EndCloseShowServantEquip(FollowerRootComponent_o *this, const MethodInfo *method)
{
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_5932E60 & 1) == 0 )
  {
    sub_21FFC50(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_FollowerRootComponent_OnSelectFollowerItem__);
    byte_5932E60 = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v4 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_21FFEBC(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
    0);
  if ( !operationItemListViewManager )
    sub_21FFECC(v5, v6);
  FollowerSelectItemListViewManager__SetMode(operationItemListViewManager, 2, v4, 0);
}


void FollowerRootComponent__EndCloseTutorialArrow(FollowerRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *tutorialMaskBase2; // x0

  if ( (byte_5932E6B & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_9005/*"MENU_SELECT_ITEM"*/);
    byte_5932E6B = 1;
  }
  tutorialMaskBase2 = this->fields.tutorialMaskBase2;
  if ( !tutorialMaskBase2
    || (UnityEngine_GameObject__SetActive(tutorialMaskBase2, 0, 0),
        tutorialMaskBase2 = (UnityEngine_GameObject_o *)this->fields.myFSM,
        this->fields.state = 3,
        !tutorialMaskBase2) )
  {
    sub_21FFECC(tutorialMaskBase2, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)tutorialMaskBase2, (System_String_o *)StringLiteral_9005/*"MENU_SELECT_ITEM"*/, 0);
}


void FollowerRootComponent__EndLoadCommonBg(FollowerRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *backSkinSprite; // x0
  System_Action_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2

  if ( (byte_5932E4E & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_FollowerRootComponent_EndLoadOutGameAtlas__);
    byte_5932E4E = 1;
  }
  backSkinSprite = (UnityEngine_Component_o *)this->fields.backSkinSprite;
  if ( !backSkinSprite
    || (backSkinSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(backSkinSprite, 0)) == 0 )
  {
    sub_21FFECC(backSkinSprite, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)backSkinSprite, 1, 0);
  v4 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_FollowerRootComponent_EndLoadOutGameAtlas__, 0);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v5, v6);
  AtlasManager__LoadOutGameAtlas(v4, 0);
}


void FollowerRootComponent__EndLoadEventAtlas(FollowerRootComponent_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20
  __int64 v4; // x1
  __int64 v5; // x2

  if ( (byte_5932E50 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_FollowerRootComponent_EndLoadPartyOrganizationAtlas__);
    byte_5932E50 = 1;
  }
  v3 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_FollowerRootComponent_EndLoadPartyOrganizationAtlas__, 0);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v4, v5);
  AtlasManager__LoadPartyOrganizationAtlas(v3, 1, 0);
}


void FollowerRootComponent__EndLoadOutGameAtlas(FollowerRootComponent_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20
  __int64 v4; // x1
  __int64 v5; // x2

  if ( (byte_5932E4F & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_FollowerRootComponent_EndLoadEventAtlas__);
    byte_5932E4F = 1;
  }
  v3 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_FollowerRootComponent_EndLoadEventAtlas__, 0);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v4, v5);
  AtlasManager__LoadEventAtlas(v3, 1, 0);
}


void FollowerRootComponent__EndLoadPartyOrganizationAtlas(FollowerRootComponent_o *this, const MethodInfo *method)
{
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x0
  const MethodInfo_476E8C0 *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_5932E51 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_5932E51 = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    goto LABEL_15;
  FollowerSelectItemListViewManager__AdjustButton(operationItemListViewManager, 0);
  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    goto LABEL_15;
  FollowerSelectItemListViewManager__SetClassBoardInfo(operationItemListViewManager, 0);
  SceneRootComponent__beginStartUp_48429240((SceneRootComponent_o *)this, 0);
  if ( this->fields.isForceFadeOut )
  {
    v4 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
    this->fields.isForceFadeOut = 0;
    operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance(v4);
    if ( !operationItemListViewManager )
      goto LABEL_15;
    CommonUI__maskFadeInit((CommonUI_o *)operationItemListViewManager, 0);
    operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !operationItemListViewManager )
      goto LABEL_15;
    CommonUI__maskFadeout((CommonUI_o *)operationItemListViewManager, 1, 0.0, 0, 0);
    FollowerRootComponent__StartBattleSetupMenu(this, v5);
  }
  operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !operationItemListViewManager )
    goto LABEL_15;
  if ( PartyOrganizationUtility__ExistsTemporaryPartyInfo((PartyOrganizationUtility_o *)operationItemListViewManager, 0) )
  {
    operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( operationItemListViewManager )
    {
      CommonUI__maskFadeInit((CommonUI_o *)operationItemListViewManager, 0);
      operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( operationItemListViewManager )
      {
        CommonUI__maskFadeout((CommonUI_o *)operationItemListViewManager, 1, 0.0, 0, 0);
        return;
      }
    }
LABEL_15:
    sub_21FFECC(operationItemListViewManager, method);
  }
}


void FollowerRootComponent__EndOpenTutorialArrow(FollowerRootComponent_o *this, const MethodInfo *method)
{
  FollowerSelectItemListViewManager_CallbackFunc_c *v3; // x0
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_5932E6F & 1) == 0 )
  {
    sub_21FFC50(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_FollowerRootComponent_OnSelectFollowerItem__);
    byte_5932E6F = 1;
  }
  v3 = FollowerSelectItemListViewManager_CallbackFunc_TypeInfo;
  operationItemListViewManager = this->fields.operationItemListViewManager;
  this->fields.state = 3;
  v5 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_21FFEBC(v3);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
    0);
  if ( !operationItemListViewManager )
    sub_21FFECC(v6, v7);
  FollowerSelectItemListViewManager__SetMode(operationItemListViewManager, 4, v5, 0);
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
  __int64 v7; // x1
  __int64 v8; // x2
  FollowerRecommendSupportListRequest_o *v9; // x20
  struct BattleSetupInfo_o *v10; // x8
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v12; // x21

  v4 = this;
  if ( (byte_5932E68 & 1) == 0 )
  {
    sub_21FFC50(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_FollowerRootComponent_CallbackRefresh__);
    sub_21FFC50(&Method_FollowerRootComponent_OnSelectFollowerItem__);
    sub_21FFC50(&Method_NetworkManager_getRequest_FollowerRecommendSupportListRequest___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&NetworkManager_ResultCallbackFunc_TypeInfo);
    this = (FollowerRootComponent_o *)sub_21FFC50(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_5932E68 = 1;
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
      this = (FollowerRootComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !this )
        goto LABEL_18;
      LOBYTE(this->fields.titleInfo) = 1;
    }
    v6 = (NetworkManager_ResultCallbackFunc_o *)sub_21FFEBC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(v6, (Il2CppObject *)v4, Method_FollowerRootComponent_CallbackRefresh__, 0);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v7, v8);
    this = (FollowerRootComponent_o *)NetworkManager__getRequest_object_(
                                        v6,
                                        (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_FollowerRecommendSupportListRequest___);
    if ( v4->fields.battleSetupInfo )
    {
      v9 = (FollowerRecommendSupportListRequest_o *)this;
      this = (FollowerRootComponent_o *)BattleSetupInfo__TargetQuestId(v4->fields.battleSetupInfo, 0);
      v10 = v4->fields.battleSetupInfo;
      if ( v10 )
      {
        if ( v9 )
        {
          FollowerRecommendSupportListRequest__beginRequest(v9, 1, (int32_t)this, v10->fields.questPhase, 0);
          return;
        }
      }
    }
LABEL_18:
    sub_21FFECC(this, isDecide);
  }
  operationItemListViewManager = v4->fields.operationItemListViewManager;
  v12 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_21FFEBC(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v12,
    (Il2CppObject *)v4,
    (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
    0);
  if ( !operationItemListViewManager )
    goto LABEL_18;
  FollowerSelectItemListViewManager__SetMode(operationItemListViewManager, 2, v12, 0);
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
  __int64 v7; // x1
  __int64 v8; // x2
  FollowerListRequest_o *v9; // x20
  struct BattleSetupInfo_o *v10; // x8
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v12; // x21

  v4 = this;
  if ( (byte_5932E67 & 1) == 0 )
  {
    sub_21FFC50(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_FollowerRootComponent_CallbackRefresh__);
    sub_21FFC50(&Method_FollowerRootComponent_OnSelectFollowerItem__);
    sub_21FFC50(&Method_NetworkManager_getRequest_FollowerListRequest___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&NetworkManager_ResultCallbackFunc_TypeInfo);
    this = (FollowerRootComponent_o *)sub_21FFC50(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_5932E67 = 1;
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
      this = (FollowerRootComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !this )
        goto LABEL_18;
      LOBYTE(this->fields.titleInfo) = 1;
    }
    v6 = (NetworkManager_ResultCallbackFunc_o *)sub_21FFEBC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(v6, (Il2CppObject *)v4, Method_FollowerRootComponent_CallbackRefresh__, 0);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v7, v8);
    this = (FollowerRootComponent_o *)NetworkManager__getRequest_object_(
                                        v6,
                                        (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_FollowerListRequest___);
    if ( v4->fields.battleSetupInfo )
    {
      v9 = (FollowerListRequest_o *)this;
      this = (FollowerRootComponent_o *)BattleSetupInfo__TargetQuestId(v4->fields.battleSetupInfo, 0);
      v10 = v4->fields.battleSetupInfo;
      if ( v10 )
      {
        if ( v9 )
        {
          FollowerListRequest__beginRequest(v9, 1, (int32_t)this, v10->fields.questPhase, 0);
          return;
        }
      }
    }
LABEL_18:
    sub_21FFECC(this, isDecide);
  }
  operationItemListViewManager = v4->fields.operationItemListViewManager;
  v12 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_21FFEBC(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v12,
    (Il2CppObject *)v4,
    (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
    0);
  if ( !operationItemListViewManager )
    goto LABEL_18;
  FollowerSelectItemListViewManager__SetMode(operationItemListViewManager, 2, v12, 0);
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

  if ( (byte_5932E6A & 1) == 0 )
  {
    sub_21FFC50(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_FollowerRootComponent_OnSelectFollowerItem__);
    byte_5932E6A = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v4 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_21FFEBC(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
    0);
  if ( !operationItemListViewManager )
    sub_21FFECC(v5, v6);
  FollowerSelectItemListViewManager__SetMode(operationItemListViewManager, 2, v4, 0);
}


// local variable allocation has failed, the output may be wrong!
void FollowerRootComponent__EndShowServant(FollowerRootComponent_o *this, bool isDecide, const MethodInfo *method)
{
  ListViewManager_o *operationItemListViewManager; // x0
  Il2CppObject *Instance; // x20
  System_Action_o *v6; // x21

  if ( (byte_5932E5C & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_FollowerRootComponent_EndCloseShowServant__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5932E5C = 1;
  }
  operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager
    || (ListViewManager__SetScrollView(
          operationItemListViewManager,
          this->fields.openScroll,
          this->fields.openOffset,
          0),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v6 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo),
        System_Action___ctor(v6, (Il2CppObject *)this, Method_FollowerRootComponent_EndCloseShowServant__, 0),
        !Instance) )
  {
    sub_21FFECC(operationItemListViewManager, isDecide);
  }
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v6, 0);
}


// local variable allocation has failed, the output may be wrong!
void FollowerRootComponent__EndShowServantEquip(FollowerRootComponent_o *this, bool isDecide, const MethodInfo *method)
{
  ListViewManager_o *operationItemListViewManager; // x0
  Il2CppObject *Instance; // x20
  System_Action_o *v6; // x21

  if ( (byte_5932E5F & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_FollowerRootComponent_EndCloseShowServantEquip__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5932E5F = 1;
  }
  operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager
    || (ListViewManager__SetScrollView(
          operationItemListViewManager,
          this->fields.openScroll,
          this->fields.openOffset,
          0),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v6 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo),
        System_Action___ctor(v6, (Il2CppObject *)this, Method_FollowerRootComponent_EndCloseShowServantEquip__, 0),
        !Instance) )
  {
    sub_21FFECC(operationItemListViewManager, isDecide);
  }
  CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)Instance, v6, 0);
}


void FollowerRootComponent__EndTutorialFollowerCommonGuide(FollowerRootComponent_o *this, const MethodInfo *method)
{
  FollowerSelectItemListViewManager_CallbackFunc_c *v3; // x0
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_5932E70 & 1) == 0 )
  {
    sub_21FFC50(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_FollowerRootComponent_OnSelectFollowerItem__);
    byte_5932E70 = 1;
  }
  v3 = FollowerSelectItemListViewManager_CallbackFunc_TypeInfo;
  operationItemListViewManager = this->fields.operationItemListViewManager;
  this->fields.state = 3;
  v5 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_21FFEBC(v3);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
    0);
  if ( !operationItemListViewManager )
    sub_21FFECC(v6, v7);
  FollowerSelectItemListViewManager__SetMode(operationItemListViewManager, 2, v5, 0);
}


void FollowerRootComponent__EndTutorialFollowerGuideNotification1(
        FollowerRootComponent_o *this,
        const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v5; // x21

  if ( (byte_5932E6D & 1) == 0 )
  {
    sub_21FFC50(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_FollowerRootComponent_OnSelectFollowerItem__);
    byte_5932E6D = 1;
  }
  titleInfo = this->fields.titleInfo;
  this->fields.state = 3;
  if ( !titleInfo
    || (TitleInfoControl__setBackBtnEnable(titleInfo, 0, 0),
        operationItemListViewManager = this->fields.operationItemListViewManager,
        v5 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_21FFEBC(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo),
        FollowerSelectItemListViewManager_CallbackFunc___ctor(
          v5,
          (Il2CppObject *)this,
          (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
          0),
        !operationItemListViewManager) )
  {
    sub_21FFECC(titleInfo, method);
  }
  FollowerSelectItemListViewManager__SetMode(operationItemListViewManager, 2, v5, 0);
}


// local variable allocation has failed, the output may be wrong!
void FollowerRootComponent__EndTutorialFollowerGuideNotification2(
        FollowerRootComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *tutorialMaskBase2; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  bool IsUnderVista; // w22
  Il2CppObject *Instance; // x20
  System_Action_o *v8; // x21
  float v9; // s0 OVERLAPPED
  float v10; // s3 OVERLAPPED
  int v11; // s1
  int v12; // s5
  float v13; // s4
  int v14; // s6

  if ( (byte_5932E6E & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&FSUtility_TypeInfo);
    sub_21FFC50(&Method_FollowerRootComponent_EndOpenTutorialArrow__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5932E6E = 1;
  }
  tutorialMaskBase2 = this->fields.tutorialMaskBase2;
  if ( !tutorialMaskBase2 )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(tutorialMaskBase2, 1, 0);
  if ( !*(&FSUtility_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, v4, v5);
  IsUnderVista = FSUtility__IsUnderVista(0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_FollowerRootComponent_EndOpenTutorialArrow__, 0);
  if ( !Instance )
LABEL_12:
    sub_21FFECC(tutorialMaskBase2, method);
  v9 = -12.0;
  v10 = -500.0;
  if ( IsUnderVista )
    v9 = -20.0;
  v11 = 1120403456;
  if ( !IsUnderVista )
    v10 = -492.0;
  v12 = 1148846080;
  v13 = -14.0;
  v14 = 1125515264;
  CommonUI__OpenTutorialArrowMark(
    (CommonUI_o *)Instance,
    *(UnityEngine_Vector2_o *)&v9,
    0.0,
    *(UnityEngine_Rect_o *)&v10,
    v8,
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
  __int64 v9; // x1
  __int64 v10; // x2
  UserServantGrandEntity_o *FirstByUserSvtId; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  BalanceConfig_c *v14; // x0

  v6 = this;
  if ( (byte_5932E59 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_UserServantGrandMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    this = (FollowerRootComponent_o *)sub_21FFC50(&long___TypeInfo);
    byte_5932E59 = 1;
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
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v9, v10);
  this = (FollowerRootComponent_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserServantGrandMaster___);
  if ( !this )
LABEL_15:
    sub_21FFECC(this, *(_QWORD *)&initPos);
  FirstByUserSvtId = UserServantGrandMaster__GetFirstByUserSvtId((UserServantGrandMaster_o *)this, userSvtId, 0);
  if ( FirstByUserSvtId )
    return UserServantGrandEntity__GetEquipUserServantIdList(FirstByUserSvtId, 0);
  v14 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v12, v13);
    v14 = BalanceConfig_TypeInfo;
  }
  return (System_Int64_array *)sub_21FFD10(long___TypeInfo, (unsigned int)v14->static_fields->GrandSvtEquipMax);
}


void FollowerRootComponent__GetFriendPointUpValSummary(
        FollowerRootComponent_o *this,
        int32_t *fpUpMax,
        int32_t *fpUpDuplicateSum,
        System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int___o *upTypeVals,
        const MethodInfo *method)
{
  System_Collections_Generic_List_Enumerator_T__o v8; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_5932E58 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_FuncList_TYPE__int___Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_FuncList_TYPE__int___MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_FuncList_TYPE__int___get_Current__);
    this = (FollowerRootComponent_o *)sub_21FFC50(&Method_System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int___GetEnumerator__);
    byte_5932E58 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  if ( !upTypeVals )
    sub_21FFECC(this, fpUpMax);
  System_Collections_Generic_List_ValueTuple_Int32Enum__int____GetEnumerator(
    &v8,
    (System_Collections_Generic_List_T__o *)upTypeVals,
    (const MethodInfo_43C6870 *)Method_System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int___GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_ValueTuple_Int32Enum__int____MoveNext(
            &v8,
            (const MethodInfo_40B60C8 *)Method_System_Collections_Generic_List_Enumerator_ValueTuple_FuncList_TYPE__int___MoveNext__) )
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
    (const MethodInfo_40B60C4 *)Method_System_Collections_Generic_List_Enumerator_ValueTuple_FuncList_TYPE__int___Dispose__);
}


void FollowerRootComponent__Init(FollowerRootComponent_o *this, const MethodInfo *method)
{
  int32_t state; // w8
  BattleSetupInfo_o *battleSetupInfo; // x0
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  struct BattleSetupInfo_o *v6; // x8
  __int64 v7; // x1
  __int64 v8; // x2
  int32_t InitialDisplayClass; // w20
  __int64 v10; // x2
  Il2CppObject *v11; // x20
  struct BattleSetupInfo_o *v12; // x8
  FollowerSelectItemListViewManager_o *v13; // x20
  struct BattleSetupInfo_o *v14; // x8
  __int64 v15; // x2
  PartyOrganizationUtility_o *v16; // x20
  FollowerRootComponent___c_c *v17; // x8
  struct FollowerRootComponent___c_StaticFields *static_fields; // x9
  System_Action_o *_9__50_0; // x21
  Il2CppObject *v20; // x22
  struct FollowerRootComponent___c_StaticFields *v21; // x0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  FollowerSelectItemListViewManager_o *v28; // x20
  System_Action_o *v29; // x21
  NetworkManager_ResultCallbackFunc_o *v30; // x20
  __int64 v31; // x1
  __int64 v32; // x2
  FollowerRecommendSupportListRequest_o *v33; // x20
  struct BattleSetupInfo_o *v34; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_5932E57 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&ClassButtonControlComponent_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_UserRecommendFollowerMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_UserRecommendFollowerMaster__UserRecommendFollowerEntity__long__TryGetSingleEntity__);
    sub_21FFC50(&Method_FollowerRootComponent_CallbackInitRecommendFollowerRequest__);
    sub_21FFC50(&Method_FollowerRootComponent_OnMoveEnd__);
    sub_21FFC50(&Method_NetworkManager_getRequest_FollowerRecommendSupportListRequest___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_21FFC50(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_21FFC50(&Method_FollowerRootComponent___c__Init_b__50_0__);
    sub_21FFC50(&FollowerRootComponent___c_TypeInfo);
    sub_21FFC50(&StringLiteral_9005/*"MENU_SELECT_ITEM"*/);
    byte_5932E57 = 1;
  }
  state = this->fields.state;
  entity = 0;
  if ( !state )
  {
    if ( this->fields.isInitRecommendRequest )
      goto LABEL_19;
    battleSetupInfo = this->fields.battleSetupInfo;
    if ( !battleSetupInfo )
      goto LABEL_50;
    operationItemListViewManager = this->fields.operationItemListViewManager;
    battleSetupInfo = (BattleSetupInfo_o *)BattleSetupInfo__TargetQuestId(battleSetupInfo, 0);
    v6 = this->fields.battleSetupInfo;
    if ( !v6 || !operationItemListViewManager )
      goto LABEL_50;
    InitialDisplayClass = FollowerSelectItemListViewManager__GetInitialDisplayClass(
                            operationItemListViewManager,
                            (int32_t)battleSetupInfo,
                            v6->fields.questPhase,
                            1,
                            0);
    if ( !*(&ClassButtonControlComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo, v7, v8);
    if ( !ClassButtonControlComponent__IsRecommendSupportGroupType(InitialDisplayClass, 0) )
      goto LABEL_19;
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v10);
    battleSetupInfo = (BattleSetupInfo_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserRecommendFollowerMaster___);
    if ( !battleSetupInfo )
      goto LABEL_50;
    if ( !DataMasterBase_object__object__long___TryGetSingleEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)battleSetupInfo,
            &entity,
            (const MethodInfo_3EDFB14 *)Method_DataMasterBase_UserRecommendFollowerMaster__UserRecommendFollowerEntity__long__TryGetSingleEntity__) )
      goto LABEL_41;
    battleSetupInfo = this->fields.battleSetupInfo;
    if ( !battleSetupInfo )
      goto LABEL_50;
    v11 = entity;
    battleSetupInfo = (BattleSetupInfo_o *)BattleSetupInfo__TargetQuestId(battleSetupInfo, 0);
    v12 = this->fields.battleSetupInfo;
    if ( !v12 || !v11 )
      goto LABEL_50;
    if ( UserRecommendFollowerEntity__IsEnableSupport(
           (UserRecommendFollowerEntity_o *)v11,
           (int32_t)battleSetupInfo,
           v12->fields.questPhase,
           0) )
    {
LABEL_19:
      battleSetupInfo = (BattleSetupInfo_o *)this->fields.operationItemListViewManager;
      if ( !battleSetupInfo )
        goto LABEL_50;
      battleSetupInfo = (BattleSetupInfo_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)battleSetupInfo,
                                               0);
      if ( !battleSetupInfo )
        goto LABEL_50;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)battleSetupInfo, 1, 0);
      battleSetupInfo = this->fields.battleSetupInfo;
      if ( !battleSetupInfo )
        goto LABEL_50;
      v13 = this->fields.operationItemListViewManager;
      battleSetupInfo = (BattleSetupInfo_o *)BattleSetupInfo__TargetQuestId(battleSetupInfo, 0);
      v14 = this->fields.battleSetupInfo;
      if ( !v14 )
        goto LABEL_50;
      if ( !v13 )
        goto LABEL_50;
      FollowerSelectItemListViewManager__CreateList(
        v13,
        (int32_t)battleSetupInfo,
        v14->fields.questPhase,
        this->fields.friendPointUpVal,
        this->fields.friendPointUpMaxVal,
        this->fields.friendPointCampaignEntityList,
        v14->fields.questRestrictionInfo,
        0);
      battleSetupInfo = (BattleSetupInfo_o *)this->fields.operationItemListViewManager;
      if ( !battleSetupInfo )
        goto LABEL_50;
      if ( ListViewManager__get_ItemSum((ListViewManager_o *)battleSetupInfo, 0) > 0 )
        goto LABEL_28;
      battleSetupInfo = (BattleSetupInfo_o *)this->fields.operationItemListViewManager;
      if ( !battleSetupInfo )
        goto LABEL_50;
      if ( FollowerSelectItemListViewManager__GetItemCount((FollowerSelectItemListViewManager_o *)battleSetupInfo, 0) < 1 )
      {
        battleSetupInfo = (BattleSetupInfo_o *)this->fields.myFSM;
        this->fields.selectItemNum = -1;
        if ( battleSetupInfo )
        {
          PlayMakerFSM__SendEvent((PlayMakerFSM_o *)battleSetupInfo, (System_String_o *)StringLiteral_9005/*"MENU_SELECT_ITEM"*/, 0);
          return;
        }
      }
      else
      {
LABEL_28:
        battleSetupInfo = (BattleSetupInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
        if ( !battleSetupInfo )
          goto LABEL_50;
        if ( BYTE4(battleSetupInfo->fields.choiceRandomLimitCounts) )
        {
          battleSetupInfo = (BattleSetupInfo_o *)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          v16 = (PartyOrganizationUtility_o *)battleSetupInfo;
          v17 = FollowerRootComponent___c_TypeInfo;
          if ( !*(&FollowerRootComponent___c_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(FollowerRootComponent___c_TypeInfo, method, v15);
            v17 = FollowerRootComponent___c_TypeInfo;
          }
          static_fields = v17->static_fields;
          _9__50_0 = static_fields->__9__50_0;
          if ( !_9__50_0 )
          {
            if ( !*(&v17->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(v17, method, v15);
              static_fields = FollowerRootComponent___c_TypeInfo->static_fields;
            }
            v20 = (Il2CppObject *)static_fields->__9;
            _9__50_0 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
            System_Action___ctor(_9__50_0, v20, Method_FollowerRootComponent___c__Init_b__50_0__, 0);
            v21 = FollowerRootComponent___c_TypeInfo->static_fields;
            v21->__9__50_0 = _9__50_0;
            sub_21FFBF4(
              (MissionNaviTransitionBoardItem_o *)&v21->__9__50_0,
              (int32_t)_9__50_0,
              v22,
              v23,
              v24,
              v25,
              v26,
              v27);
          }
          if ( !v16 )
            goto LABEL_50;
          PartyOrganizationUtility__OpenQuestUseItemExpiredDialog(v16, _9__50_0, 0);
        }
        v28 = this->fields.operationItemListViewManager;
        this->fields.state = 2;
        v29 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
        System_Action___ctor(v29, (Il2CppObject *)this, Method_FollowerRootComponent_OnMoveEnd__, 0);
        if ( v28 )
        {
          FollowerSelectItemListViewManager__SetMode_39292212(v28, 1, v29, 0);
          return;
        }
      }
    }
    else
    {
LABEL_41:
      v30 = (NetworkManager_ResultCallbackFunc_o *)sub_21FFEBC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v30,
        (Il2CppObject *)this,
        Method_FollowerRootComponent_CallbackInitRecommendFollowerRequest__,
        0);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v31, v32);
      battleSetupInfo = (BattleSetupInfo_o *)NetworkManager__getRequest_object_(
                                               v30,
                                               (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_FollowerRecommendSupportListRequest___);
      if ( this->fields.battleSetupInfo )
      {
        v33 = (FollowerRecommendSupportListRequest_o *)battleSetupInfo;
        battleSetupInfo = (BattleSetupInfo_o *)BattleSetupInfo__TargetQuestId(this->fields.battleSetupInfo, 0);
        v34 = this->fields.battleSetupInfo;
        if ( v34 )
        {
          if ( v33 )
          {
            FollowerRecommendSupportListRequest__beginRequest(
              v33,
              0,
              (int32_t)battleSetupInfo,
              v34->fields.questPhase,
              0);
            battleSetupInfo = (BattleSetupInfo_o *)this->fields.operationItemListViewManager;
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
    sub_21FFECC(battleSetupInfo, method);
  }
}


void FollowerRootComponent__OnClickBack(FollowerRootComponent_o *this, const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v4; // x1
  SceneRootComponent_o *StackedRootComponent; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 naturalAligment; // x10
  UnityEngine_Component_o *v9; // x20
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  _QWORD *monitor; // x8
  int v13; // w8
  void *v14; // x19
  __int64 v15; // x20
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  _QWORD *v17; // x0
  System_Reflection_MethodBase_o *v18; // x0
  struct BattleSetupInfo_o *v19; // x8
  __int64 *v20; // x8
  System_Reflection_MethodBase_o *v21; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  TerminalPramsManager_c *v24; // x0
  int lastPlayQuestConsumeAp; // w21
  System_String_o **v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  System_String_o *v29; // x20
  System_String_o *v30; // x21
  Il2CppObject *v31; // x22
  System_String_o *v32; // x23
  System_String_o *v33; // x24
  CommonConfirmDialog_ClickDelegate_o *v34; // x25
  __int64 v35; // x2

  if ( (byte_5932E6C & 1) == 0 )
  {
    sub_21FFC50(&BattleRootComponent_TypeInfo);
    sub_21FFC50(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponentsInChildren_Camera___);
    sub_21FFC50(&Method_FollowerRootComponent_OnClickBack__);
    sub_21FFC50(&Method_FollowerRootComponent__OnClickBack_b__73_0__);
    sub_21FFC50(&FollowerRootComponent_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_21FFC50(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    sub_21FFC50(&StringLiteral_6713/*"FOLLOWER_SELECT_BACK_TO_QUEST_NO_AP_CONSUME_AP0"*/);
    sub_21FFC50(&StringLiteral_3571/*"CLICK_BACK"*/);
    sub_21FFC50(&StringLiteral_6712/*"FOLLOWER_SELECT_BACK_TO_QUEST_NO_AP_CONSUME"*/);
    sub_21FFC50(&StringLiteral_6711/*"FOLLOWER_SELECT_BACK_TITLE"*/);
    sub_21FFC50(&StringLiteral_3826/*"COMMON_CONFIRM_NO"*/);
    sub_21FFC50(&StringLiteral_3831/*"COMMON_CONFIRM_YES"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    sub_21FFC50(&StringLiteral_3572/*"CLICK_BACK_BATTLE_SETUP"*/);
    byte_5932E6C = 1;
  }
  if ( this->fields.state == 3 && !this->fields.tutorialState )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( !Instance )
      goto LABEL_63;
    if ( !*((_BYTE *)Instance + 148) )
      goto LABEL_34;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_63;
    StackedRootComponent = AvalonSceneManager__GetStackedRootComponent((AvalonSceneManager_o *)Instance, 0);
    if ( StackedRootComponent
      && (naturalAligment = BattleRootComponent_TypeInfo->_2.naturalAligment,
          StackedRootComponent->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
    {
      if ( (BattleRootComponent_c *)StackedRootComponent->klass->_2.typeHierarchy[naturalAligment - 1] == BattleRootComponent_TypeInfo )
        v9 = (UnityEngine_Component_o *)StackedRootComponent;
      else
        v9 = 0;
    }
    else
    {
      v9 = 0;
    }
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v9, 0, 0) )
    {
      v10 = Method_FollowerRootComponent_OnClickBack__;
      if ( (*((_BYTE *)Method_FollowerRootComponent_OnClickBack__ + 83) & 2) != 0 )
        v10 = (_QWORD *)sub_21FFC68(Method_FollowerRootComponent_OnClickBack__);
      v11 = (System_Reflection_MethodBase_o *)sub_21FFC34(v10, v10[4]);
      OverwriteAssetSoundName__PlaySystemSe(v11, 1, 0, 0);
      this->fields.state = 4;
      if ( v9 )
      {
        Instance = UnityEngine_Component__get_gameObject(v9, 0);
        if ( Instance )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
          monitor = v9[3].monitor;
          if ( monitor )
          {
            Instance = (void *)monitor[67];
            if ( Instance )
            {
              BattleResultComponent__EndResult((BattleResultComponent_o *)Instance, 0);
              Instance = this->fields.myFSM;
              if ( Instance )
              {
                PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3571/*"CLICK_BACK"*/, 0);
                Instance = UnityEngine_Component__get_transform(v9, 0);
                if ( Instance )
                {
                  Instance = UnityEngine_Component__GetComponentsInChildren_object__58647176(
                               (UnityEngine_Component_o *)Instance,
                               (const MethodInfo_37EE288 *)Method_UnityEngine_Component_GetComponentsInChildren_Camera___);
                  if ( Instance )
                  {
                    v13 = *((_DWORD *)Instance + 6);
                    v14 = Instance;
                    if ( v13 < 1 )
                      return;
                    v15 = 0;
                    while ( 1 )
                    {
                      if ( (unsigned int)v15 >= v13 )
                        sub_21FFED4(Instance);
                      Instance = (void *)*((_QWORD *)v14 + v15 + 4);
                      if ( !Instance )
                        break;
                      Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
                      if ( !Instance )
                        break;
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
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
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( !Instance )
        goto LABEL_63;
      if ( AvalonSceneManager__IsStackScene((AvalonSceneManager_o *)Instance, 0) )
        goto LABEL_42;
      Instance = SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_63;
      if ( *((int *)Instance + 20) > 0 )
        goto LABEL_42;
      Instance = SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_63;
      if ( *((_BYTE *)Instance + 206) )
        goto LABEL_42;
      battleSetupInfo = this->fields.battleSetupInfo;
      if ( !battleSetupInfo )
        goto LABEL_63;
      if ( battleSetupInfo->fields.isChildFollower )
      {
LABEL_42:
        v17 = Method_FollowerRootComponent_OnClickBack__;
        if ( (*((_BYTE *)Method_FollowerRootComponent_OnClickBack__ + 83) & 2) != 0 )
          v17 = (_QWORD *)sub_21FFC68(Method_FollowerRootComponent_OnClickBack__);
        v18 = (System_Reflection_MethodBase_o *)sub_21FFC34(v17, v17[4]);
        OverwriteAssetSoundName__PlaySystemSe(v18, 1, 0, 0);
        v19 = this->fields.battleSetupInfo;
        this->fields.state = 4;
        if ( v19 )
        {
          Instance = this->fields.myFSM;
          if ( v19->fields.isChildFollower )
          {
            if ( !Instance )
              goto LABEL_63;
            v20 = &StringLiteral_3572/*"CLICK_BACK_BATTLE_SETUP"*/;
          }
          else
          {
            if ( !Instance )
              goto LABEL_63;
            v20 = &StringLiteral_3571/*"CLICK_BACK"*/;
          }
          PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v20, 0);
          return;
        }
      }
      else
      {
        v21 = (System_Reflection_MethodBase_o *)sub_1FEBA28(Method_FollowerRootComponent_OnClickBack__);
        OverwriteAssetSoundName__PlaySystemSe(v21, 1, 0, 0);
        v24 = TerminalPramsManager_TypeInfo;
        if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v22, v23);
          v24 = TerminalPramsManager_TypeInfo;
        }
        lastPlayQuestConsumeAp = v24->static_fields->lastPlayQuestConsumeAp;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v22, v23);
        v26 = (System_String_o **)&StringLiteral_6712/*"FOLLOWER_SELECT_BACK_TO_QUEST_NO_AP_CONSUME"*/;
        if ( lastPlayQuestConsumeAp <= 0 )
          v26 = (System_String_o **)&StringLiteral_6713/*"FOLLOWER_SELECT_BACK_TO_QUEST_NO_AP_CONSUME_AP0"*/;
        v29 = LocalizationManager__Get(*v26, 0);
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v27, v28);
        v30 = LocalizationManager__Get((System_String_o *)StringLiteral_6711/*"FOLLOWER_SELECT_BACK_TITLE"*/, 0);
        v31 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v32 = LocalizationManager__Get((System_String_o *)StringLiteral_3831/*"COMMON_CONFIRM_YES"*/, 0);
        v33 = LocalizationManager__Get((System_String_o *)StringLiteral_3826/*"COMMON_CONFIRM_NO"*/, 0);
        v34 = (CommonConfirmDialog_ClickDelegate_o *)sub_21FFEBC(CommonConfirmDialog_ClickDelegate_TypeInfo);
        CommonConfirmDialog_ClickDelegate___ctor(
          v34,
          (Il2CppObject *)this,
          Method_FollowerRootComponent__OnClickBack_b__73_0__,
          0);
        Instance = FollowerRootComponent_TypeInfo;
        if ( !*(&FollowerRootComponent_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(FollowerRootComponent_TypeInfo, v4, v35);
        if ( v31 )
        {
          CommonUI__OpenConfirmDecideDlg(
            (CommonUI_o *)v31,
            v30,
            v29,
            v32,
            v33,
            v34,
            FollowerRootComponent_TypeInfo->static_fields->RETURN_TERMINAL_MESSAGE_FONT_SIZE,
            (float)FollowerRootComponent_TypeInfo->static_fields->RETURN_TERMINAL_MESSAGE_POSITION_Y,
            (float)FollowerRootComponent_TypeInfo->static_fields->RETURN_TERMINAL_MESSAGE_SPACING_Y,
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
LABEL_63:
    sub_21FFECC(Instance, v4);
  }
}


void FollowerRootComponent__OnMoveEnd(FollowerRootComponent_o *this, const MethodInfo *method)
{
  int32_t tutorialMode; // w8
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Instance; // x20
  System_String_o *v7; // x21
  System_Action_o *v8; // x0
  intptr_t *v9; // x8
  BattleSetupInfo_o *battleSetupInfo; // x0
  int32_t eventId; // w20
  struct BattleSetupInfo_o *v12; // x8
  struct BattleSetupInfo_o *v13; // x8
  int32_t v14; // w20
  System_Action_o *v15; // x21
  struct BattleSetupInfo_o *v16; // x8
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v18; // x21
  const MethodInfo *v19; // x1
  __int64 v20; // x1
  __int64 v21; // x2
  System_Action_o *v22; // x22

  if ( (byte_5932E65 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_FollowerRootComponent_EndTutorialFollowerCommonGuide__);
    sub_21FFC50(&Method_FollowerRootComponent_EndTutorialFollowerGuideNotification1__);
    sub_21FFC50(&Method_FollowerRootComponent_EndTutorialFollowerGuideNotification2__);
    sub_21FFC50(&Method_FollowerRootComponent_OnSelectFollowerItem__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_21FFC50(&StringLiteral_14116/*"TUTORIAL_MESSAGE_FOLLOWER2"*/);
    sub_21FFC50(&StringLiteral_14115/*"TUTORIAL_MESSAGE_FOLLOWER1"*/);
    byte_5932E65 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( this->fields.tutorialState == 1 )
    {
      tutorialMode = this->fields.tutorialMode;
      *(_QWORD *)&this->fields.tutorialState = 0x200000002LL;
      if ( tutorialMode == 3 )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v20, v21);
        v7 = LocalizationManager__Get((System_String_o *)StringLiteral_14116/*"TUTORIAL_MESSAGE_FOLLOWER2"*/, 0);
        v8 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
        v9 = &Method_FollowerRootComponent_EndTutorialFollowerGuideNotification2__;
LABEL_25:
        v22 = v8;
        System_Action___ctor(v8, (Il2CppObject *)this, *v9, 0);
        if ( Instance )
        {
          CommonUI__OpenTutorialNotificationDialog((CommonUI_o *)Instance, v7, -1, v22, 0);
          return;
        }
LABEL_27:
        sub_21FFECC(battleSetupInfo, method);
      }
      if ( tutorialMode == 2 )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v4, v5);
        v7 = LocalizationManager__Get((System_String_o *)StringLiteral_14115/*"TUTORIAL_MESSAGE_FOLLOWER1"*/, 0);
        v8 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
        v9 = &Method_FollowerRootComponent_EndTutorialFollowerGuideNotification1__;
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
      v12 = this->fields.battleSetupInfo;
      if ( !v12 )
        goto LABEL_27;
      battleSetupInfo = (BattleSetupInfo_o *)EventTutorialMaster__IsTutorialAvailable(
                                               eventId,
                                               15,
                                               (int32_t)battleSetupInfo,
                                               v12->fields.questPhase,
                                               0,
                                               0,
                                               0);
      if ( ((unsigned __int8)battleSetupInfo & 1) != 0 )
      {
        v13 = this->fields.battleSetupInfo;
        this->fields.state = 2;
        if ( v13 )
        {
          v14 = v13->fields.eventId;
          v15 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
          System_Action___ctor(
            v15,
            (Il2CppObject *)this,
            Method_FollowerRootComponent_EndTutorialFollowerCommonGuide__,
            0);
          battleSetupInfo = this->fields.battleSetupInfo;
          if ( battleSetupInfo )
          {
            battleSetupInfo = (BattleSetupInfo_o *)BattleSetupInfo__TargetQuestId(battleSetupInfo, 0);
            v16 = this->fields.battleSetupInfo;
            if ( v16 )
            {
              EventTutorialMaster__CheckTutorial(
                v14,
                15,
                v15,
                (int32_t)battleSetupInfo,
                v16->fields.questPhase,
                0,
                0,
                0);
              return;
            }
          }
        }
        goto LABEL_27;
      }
      operationItemListViewManager = this->fields.operationItemListViewManager;
      this->fields.state = 3;
      v18 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_21FFEBC(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
      FollowerSelectItemListViewManager_CallbackFunc___ctor(
        v18,
        (Il2CppObject *)this,
        (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
        0);
      if ( !operationItemListViewManager )
        goto LABEL_27;
      FollowerSelectItemListViewManager__SetMode(operationItemListViewManager, 2, v18, 0);
      battleSetupInfo = (BattleSetupInfo_o *)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !battleSetupInfo )
        goto LABEL_27;
      if ( PartyOrganizationUtility__ExistsTemporaryPartyInfo((PartyOrganizationUtility_o *)battleSetupInfo, 0) )
        FollowerRootComponent__StartBattleSetupMenu(this, v19);
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
  int32_t state; // w8
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  const MethodInfo *v12; // x2
  __int64 v13; // x20
  FollowerRootComponent_o *v14; // x21
  SkillInfo_o *v15; // x24
  Il2CppObject *v16; // x22
  FollowerRootComponent_o *v17; // x20
  const MethodInfo *v18; // x1
  ServantLeaderInfo_o *v19; // x22
  int32_t ServantId; // w21
  __int64 v21; // x1
  __int64 v22; // x2
  int32_t DispLimitCountStageSealAfterAtStageLimitCount; // w22
  __int64 v24; // x2
  System_String_o *v25; // x21
  System_String_o *v26; // x22
  Il2CppObject *v27; // x0
  System_String_o *v28; // x0
  FollowerRootComponent_o *v29; // x21
  Il2CppObject *v30; // x0
  System_String_o *v31; // x20
  const MethodInfo *v32; // x3
  __int64 v33; // x8
  __int64 v34; // x20
  SkillInfo_o *v35; // x22
  System_Reflection_MethodBase_o *v36; // x0
  __int64 v37; // x1
  __int64 v38; // x2
  Il2CppObject *v39; // x20
  __int64 v40; // x1
  __int64 v41; // x2
  System_String_o *v42; // x20
  System_String_o *v43; // x21
  Il2CppObject *v44; // x0
  System_String_o *v45; // x0
  System_String_o *v46; // x0
  int32_t v47; // w20
  _QWORD *v48; // x0
  System_Reflection_MethodBase_o *v49; // x0
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v51; // x0
  void *v52; // x2
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  NetworkManager_ResultCallbackFunc_o *v54; // x20
  __int64 v55; // x1
  __int64 v56; // x2
  FollowerRecommendSupportListRequest_o *v57; // x20
  struct BattleSetupInfo_o *v58; // x8
  _QWORD *v59; // x0
  System_Reflection_MethodBase_o *v60; // x0
  __int64 v61; // x1
  __int64 v62; // x2
  bool v63; // w22
  CommonConfirmDialog_ClickDelegate_o *v64; // x21
  __int64 v65; // x1
  __int64 v66; // x2
  bool v67; // w20
  __int64 v68; // x1
  __int64 v69; // x2
  Il2CppObject *Instance; // x20
  System_String_o *v71; // x21
  System_String_o *v72; // x22
  System_Action_o *v73; // x23
  FollowerRootComponent_o *v74; // x20
  System_Reflection_MethodBase_o *v75; // x0
  const MethodInfo *v76; // x2
  int32_t tutorialMode; // w8
  System_Reflection_MethodBase_o *v78; // x0
  _QWORD *v79; // x0
  System_Reflection_MethodBase_o *v80; // x0
  int32_t v81; // w8
  CommonConfirmDialog_o *commonConfirmDialog; // x19
  System_String_o *v83; // x20
  __int64 v84; // x2
  FollowerRootComponent_o *v85; // x22
  FollowerRootComponent_o *v86; // x20
  _QWORD *v87; // x0
  int friendPointCampaignEntityList_low; // w20
  __int64 *v89; // x8
  FollowerSelectItemListViewItem_o *v90; // x20
  const MethodInfo *v91; // x1
  const MethodInfo *v92; // x1
  __int64 v93; // x2
  __int64 v94; // x22
  __int64 v95; // x23
  EquipTargetInfo_o *EquipTargetInfoByEquipIdx; // x0
  __int64 v97; // x1
  __int64 v98; // x2
  EquipTargetInfo_o *EquipInfo; // x21
  __int64 v100; // x22
  __int64 v101; // x23
  const MethodInfo *v102; // x1
  __int64 v103; // x1
  __int64 v104; // x2
  FollowerSelectItemListViewManager_CallbackFunc_o *v105; // x21
  __int64 v106; // x22
  __int64 v107; // x23
  System_Reflection_MethodBase_o *v108; // x0
  const MethodInfo *v109; // x3
  struct FollowerInfo_o *followerInfo; // x8
  int32_t type; // w8
  int32_t v112; // w2
  FollowerSelectItemListViewManager_o *v113; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v114; // x21
  FollowerSelectItemListViewManager_o *v115; // x0
  int32_t v116; // w1
  System_Reflection_MethodBase_o *v117; // x0
  FollowerSelectItemListViewManager_o *v118; // x20
  __int64 v119; // x2
  FollowerRootComponent_o *v120; // x20
  FollowerRootComponent___c_c *v121; // x8
  struct FollowerRootComponent___c_StaticFields *static_fields; // x9
  System_Action_o *_9__67_0; // x21
  Il2CppObject *v124; // x22
  struct FollowerRootComponent___c_StaticFields *v125; // x0
  System_String_o *v126; // x2
  System_String_o *v127; // x3
  int32_t v128; // w4
  int32_t v129; // w5
  bool v130; // w6
  bool v131; // w7
  System_Reflection_MethodBase_o *v132; // x0
  int32_t v133; // w8
  Il2CppObject *v134; // x20
  System_Action_o *v135; // x21
  int m_CancellationTokenSource; // [xsp+40h] [xbp-80h] BYREF
  int32_t lv; // [xsp+44h] [xbp-7Ch] BYREF
  System_String_o *v138; // [xsp+48h] [xbp-78h] BYREF
  System_String_o *v139; // [xsp+50h] [xbp-70h] BYREF
  SkillInfo_array *v140; // [xsp+58h] [xbp-68h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+60h] [xbp-60h] BYREF
  System_String_o *detail; // [xsp+68h] [xbp-58h] BYREF
  System_String_o *name; // [xsp+70h] [xbp-50h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+78h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v145; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v146; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v147; // 0:x0.16

  v8 = this;
  if ( (byte_5932E66 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    sub_21FFC50(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_SkillMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_21FFC50(&FollowerListRequest_TypeInfo);
    sub_21FFC50(&FollowerRecommendSupportListRequest_TypeInfo);
    sub_21FFC50(&Method_FollowerRootComponent_CallbackRefresh__);
    sub_21FFC50(&Method_FollowerRootComponent_EndCloseTutorialArrow__);
    sub_21FFC50(&Method_FollowerRootComponent_EndRecommendRefreshConfirm__);
    sub_21FFC50(&Method_FollowerRootComponent_EndRefreshConfirm__);
    sub_21FFC50(&Method_FollowerRootComponent_EndRefreshRest__);
    sub_21FFC50(&Method_FollowerRootComponent_OnSelectFollowerItem__);
    sub_21FFC50(&FollowerRootComponent_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_NetworkManager_getRequest_FollowerRecommendSupportListRequest___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_21FFC50(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_21FFC50(&Method_FollowerRootComponent___c__OnSelectFollowerItem_b__67_0__);
    sub_21FFC50(&FollowerRootComponent___c_TypeInfo);
    sub_21FFC50(&StringLiteral_6736/*"FOLLOWER_SELECT_REFRESH_TITLE"*/);
    sub_21FFC50(&StringLiteral_9005/*"MENU_SELECT_ITEM"*/);
    sub_21FFC50(&StringLiteral_9014/*"MENU_SHOW_SUPPORT"*/);
    sub_21FFC50(&StringLiteral_6733/*"FOLLOWER_SELECT_REFRESH_MESSAGE"*/);
    sub_21FFC50(&StringLiteral_113/*" "*/);
    sub_21FFC50(&StringLiteral_6734/*"FOLLOWER_SELECT_REFRESH_REST_MESSAGE"*/);
    sub_21FFC50(&StringLiteral_8900/*"MASTER_EQSKILL_LV_TXT"*/);
    sub_21FFC50(&StringLiteral_2984/*"BATTLE_SKILLCHARGETURN"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    this = (FollowerRootComponent_o *)sub_21FFC50(&StringLiteral_6735/*"FOLLOWER_SELECT_REFRESH_REST_TITLE"*/);
    byte_5932E66 = 1;
  }
  state = v8->fields.state;
  name = 0;
  skillInfoList = 0;
  entity = 0;
  detail = 0;
  v139 = 0;
  v140 = 0;
  v138 = 0;
  if ( state != 3 )
    return;
  v8->fields.selectItemNum = n;
  if ( kind <= 7 )
  {
    if ( kind <= 4 )
    {
      if ( (unsigned int)(kind - 2) < 3 )
      {
        v10 = Method_FollowerRootComponent_OnSelectFollowerItem__;
        if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
          v10 = (_QWORD *)sub_21FFC68(Method_FollowerRootComponent_OnSelectFollowerItem__);
        v11 = (System_Reflection_MethodBase_o *)sub_21FFC34(v10, v10[4]);
        OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0, 0);
        this = (FollowerRootComponent_o *)v8->fields.operationItemListViewManager;
        if ( !this )
          goto LABEL_194;
        this = (FollowerRootComponent_o *)FollowerSelectItemListViewManager__GetItem(
                                            (FollowerSelectItemListViewManager_o *)this,
                                            v8->fields.selectItemNum,
                                            0);
        v13 = kind == 3 ? 1LL : 2LL * (kind == 4);
        if ( !this )
          goto LABEL_194;
        v14 = this;
        this = (FollowerRootComponent_o *)FollowerSelectItemListViewItem__GetSkillInfo(
                                            (FollowerSelectItemListViewItem_o *)this,
                                            &skillInfoList,
                                            v12);
        if ( !skillInfoList )
          goto LABEL_194;
        if ( (unsigned int)v13 < LODWORD(skillInfoList->max_length) )
        {
          v15 = skillInfoList->m_Items[v13];
          if ( !v15 || v15->fields.id < 1 || v15->fields.lv < 1 )
          {
LABEL_149:
            operationItemListViewManager = v8->fields.operationItemListViewManager;
            v51 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_21FFEBC(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
            v52 = Method_FollowerRootComponent_OnSelectFollowerItem__;
LABEL_150:
            v105 = v51;
            FollowerSelectItemListViewManager_CallbackFunc___ctor(v51, (Il2CppObject *)v8, (intptr_t)v52, 0);
            if ( operationItemListViewManager )
            {
              FollowerSelectItemListViewManager__SetMode(operationItemListViewManager, 2, v105, 0);
              return;
            }
            goto LABEL_194;
          }
          this = (FollowerRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            this = (FollowerRootComponent_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)this,
                                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_SkillMaster___);
            if ( this )
            {
              v16 = DataMasterBase_object__object__int___GetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                      v15->fields.id,
                      (const MethodInfo_3EDD388 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
              this = (FollowerRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( this )
              {
                this = (FollowerRootComponent_o *)DataManager__GetMasterData_object_(
                                                    (DataManager_o *)this,
                                                    (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_SkillLvMaster___);
                if ( this )
                {
                  this = (FollowerRootComponent_o *)SkillLvMaster__GetEntity(
                                                      (SkillLvMaster_o *)this,
                                                      v15->fields.id,
                                                      v15->fields.lv,
                                                      0);
                  if ( v16 )
                  {
                    v17 = this;
                    SkillEntity__getSkillMessageInfo((SkillEntity_o *)v16, &name, &detail, v15->fields.lv, 0);
                    this = (FollowerRootComponent_o *)FollowerSelectItemListViewItem__get_ServantLeader(
                                                        (FollowerSelectItemListViewItem_o *)v14,
                                                        v18);
                    if ( this )
                    {
                      v19 = (ServantLeaderInfo_o *)this;
                      ServantId = ServantLeaderInfo__GetServantId((ServantLeaderInfo_o *)this, -1, 0);
                      DispLimitCountStageSealAfterAtStageLimitCount = ServantLeaderInfo__GetDispLimitCountStageSealAfterAtStageLimitCount(
                                                                        v19,
                                                                        0);
                      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
                        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v21, v22);
                      this = (FollowerRootComponent_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
                      if ( this )
                      {
                        if ( ServantLimitAddMaster__TryGetEntity(
                               (ServantLimitAddMaster_o *)this,
                               &entity,
                               ServantId,
                               DispLimitCountStageSealAfterAtStageLimitCount,
                               0) )
                        {
                          this = (FollowerRootComponent_o *)entity;
                          if ( !entity )
                            goto LABEL_194;
                          if ( ServantLimitAddEntity__HasKeyOverwriteSkillName(entity, 0) )
                          {
                            this = (FollowerRootComponent_o *)entity;
                            if ( !entity )
                              goto LABEL_194;
                            name = ServantLimitAddEntity__GetOverwriteSkillName(entity, v15->fields.id, name, 0);
                          }
                        }
                        v25 = name;
                        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&kind, v24);
                        v26 = LocalizationManager__Get((System_String_o *)StringLiteral_8900/*"MASTER_EQSKILL_LV_TXT"*/, 0);
                        lv = v15->fields.lv;
                        v27 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &lv);
                        v28 = System_String__Format(v26, v27, 0);
                        name = System_String__Concat_75481624(v25, (System_String_o *)StringLiteral_113/*" "*/, v28, 0);
                        this = (FollowerRootComponent_o *)LocalizationManager__Get(
                                                            (System_String_o *)StringLiteral_2984/*"BATTLE_SKILLCHARGETURN"*/,
                                                            0);
                        if ( v17 )
                        {
                          v29 = this;
                          m_CancellationTokenSource = (int)v17->fields.m_CancellationTokenSource;
                          v30 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &m_CancellationTokenSource);
                          v31 = System_String__Format((System_String_o *)v29, v30, 0);
                          LODWORD(v29) = v8->fields.tutorialMode;
                          this = (FollowerRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                          if ( (_DWORD)v29 == 3 )
                          {
                            if ( !this )
                              goto LABEL_194;
                            CommonUI__OpenDetailLongInfoDialogOnFade((CommonUI_o *)this, name, v31, detail, 0);
                          }
                          else
                          {
                            if ( !this )
                              goto LABEL_194;
                            CommonUI__OpenDetailLongInfoDialog((CommonUI_o *)this, name, v31, detail, 1, 0, 0);
                          }
                          goto LABEL_149;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
LABEL_194:
          sub_21FFECC(this, *(_QWORD *)&kind);
        }
LABEL_195:
        sub_21FFED4(this);
      }
      if ( kind == 1 )
      {
        if ( !v8->fields.tutorialState )
        {
          this = (FollowerRootComponent_o *)v8->fields.operationItemListViewManager;
          if ( !this )
            goto LABEL_194;
          this = (FollowerRootComponent_o *)FollowerSelectItemListViewManager__GetItem(
                                              (FollowerSelectItemListViewManager_o *)this,
                                              n,
                                              0);
          if ( !this )
            goto LABEL_194;
          v74 = this;
          if ( !LOBYTE(this->fields.friendPointCampaignEntityList)
            && FollowerSelectItemListViewItem__get_SvtId(
                 (FollowerSelectItemListViewItem_o *)this,
                 *(const MethodInfo **)&kind) > 0 )
          {
            v75 = (System_Reflection_MethodBase_o *)sub_1FEBA28(Method_FollowerRootComponent_OnSelectFollowerItem__);
            OverwriteAssetSoundName__PlaySystemSe(v75, 0, 0, 0);
            FollowerRootComponent__SelectShowServant(v8, (FollowerSelectItemListViewItem_o *)v74, v76);
            return;
          }
          goto LABEL_161;
        }
        goto LABEL_104;
      }
      goto LABEL_116;
    }
    if ( kind == 5 )
    {
      if ( v8->fields.tutorialState )
      {
        tutorialMode = v8->fields.tutorialMode;
        if ( tutorialMode == 3 )
        {
          v117 = (System_Reflection_MethodBase_o *)sub_1FEBA28(Method_FollowerRootComponent_OnSelectFollowerItem__);
          OverwriteAssetSoundName__PlaySystemSe(v117, 2, 0, 0);
          goto LABEL_166;
        }
        if ( tutorialMode != 2 )
          return;
        v78 = (System_Reflection_MethodBase_o *)sub_1FEBA28(Method_FollowerRootComponent_OnSelectFollowerItem__);
      }
      else
      {
        this = (FollowerRootComponent_o *)v8->fields.operationItemListViewManager;
        if ( !this )
          goto LABEL_194;
        this = (FollowerRootComponent_o *)FollowerSelectItemListViewManager__GetItem(
                                            (FollowerSelectItemListViewManager_o *)this,
                                            n,
                                            0);
        if ( !this )
          goto LABEL_194;
        friendPointCampaignEntityList_low = LOBYTE(this->fields.friendPointCampaignEntityList);
        v78 = (System_Reflection_MethodBase_o *)sub_1FEBA28(Method_FollowerRootComponent_OnSelectFollowerItem__);
        if ( friendPointCampaignEntityList_low )
          goto LABEL_162;
      }
      OverwriteAssetSoundName__PlaySystemSe(v78, 0, 0, 0);
      this = (FollowerRootComponent_o *)v8->fields.myFSM;
      if ( !this )
        goto LABEL_194;
      v89 = &StringLiteral_9014/*"MENU_SHOW_SUPPORT"*/;
LABEL_131:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v89, 0);
      return;
    }
    if ( kind != 6 )
    {
LABEL_80:
      v59 = Method_FollowerRootComponent_OnSelectFollowerItem__;
      if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
        v59 = (_QWORD *)sub_21FFC68(Method_FollowerRootComponent_OnSelectFollowerItem__);
      v60 = (System_Reflection_MethodBase_o *)sub_21FFC34(v59, v59[4]);
      OverwriteAssetSoundName__PlaySystemSe(v60, 0, 0, 0);
      if ( !*(&FollowerListRequest_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(FollowerListRequest_TypeInfo, v61, v62);
      v63 = FollowerListRequest__checkRefreshRate(0);
      v64 = (CommonConfirmDialog_ClickDelegate_o *)sub_21FFEBC(CommonConfirmDialog_ClickDelegate_TypeInfo);
      CommonConfirmDialog_ClickDelegate___ctor(
        v64,
        (Il2CppObject *)v8,
        Method_FollowerRootComponent_EndRefreshConfirm__,
        0);
      if ( kind == 13 )
      {
        if ( !*(&FollowerRecommendSupportListRequest_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(FollowerRecommendSupportListRequest_TypeInfo, v65, v66);
        v67 = FollowerRecommendSupportListRequest__CheckRefreshRate(0);
        v64 = (CommonConfirmDialog_ClickDelegate_o *)sub_21FFEBC(CommonConfirmDialog_ClickDelegate_TypeInfo);
        CommonConfirmDialog_ClickDelegate___ctor(
          v64,
          (Il2CppObject *)v8,
          Method_FollowerRootComponent_EndRecommendRefreshConfirm__,
          0);
        if ( !v67 )
        {
LABEL_88:
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v68, v69);
          v71 = LocalizationManager__Get((System_String_o *)StringLiteral_6735/*"FOLLOWER_SELECT_REFRESH_REST_TITLE"*/, 0);
          v72 = LocalizationManager__Get((System_String_o *)StringLiteral_6734/*"FOLLOWER_SELECT_REFRESH_REST_MESSAGE"*/, 0);
          v73 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
          System_Action___ctor(v73, (Il2CppObject *)v8, Method_FollowerRootComponent_EndRefreshRest__, 0);
          if ( Instance )
          {
            CommonUI__OpenNotificationDialog(
              (CommonUI_o *)Instance,
              v71,
              v72,
              v73,
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
          goto LABEL_194;
        }
      }
      else if ( !v63 )
      {
        goto LABEL_88;
      }
      commonConfirmDialog = v8->fields.commonConfirmDialog;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v65, v66);
      v83 = LocalizationManager__Get((System_String_o *)StringLiteral_6736/*"FOLLOWER_SELECT_REFRESH_TITLE"*/, 0);
      this = (FollowerRootComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6733/*"FOLLOWER_SELECT_REFRESH_MESSAGE"*/, 0);
      v85 = this;
      if ( !*(&FollowerRootComponent_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(FollowerRootComponent_TypeInfo, *(_QWORD *)&kind, v84);
      if ( commonConfirmDialog )
      {
        CommonConfirmDialog__Open_37267360(
          commonConfirmDialog,
          v83,
          (System_String_o *)v85,
          1,
          v64,
          FollowerRootComponent_TypeInfo->static_fields->LIST_UPDATE_MESSAGE_FONT_SIZE,
          0,
          0,
          0,
          0);
        return;
      }
      goto LABEL_194;
    }
    if ( v8->fields.tutorialState )
    {
LABEL_104:
      v79 = Method_FollowerRootComponent_OnSelectFollowerItem__;
      if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
        v79 = (_QWORD *)sub_21FFC68(Method_FollowerRootComponent_OnSelectFollowerItem__);
      v80 = (System_Reflection_MethodBase_o *)sub_21FFC34(v79, v79[4]);
      OverwriteAssetSoundName__PlaySystemSe(v80, 2, 0, 0);
      v81 = v8->fields.tutorialMode;
      if ( v81 != 3 )
      {
        if ( v81 != 2 )
          return;
        goto LABEL_163;
      }
LABEL_166:
      v118 = v8->fields.operationItemListViewManager;
      v114 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_21FFEBC(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
      FollowerSelectItemListViewManager_CallbackFunc___ctor(
        v114,
        (Il2CppObject *)v8,
        (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
        0);
      if ( !v118 )
        goto LABEL_194;
      v115 = v118;
      v116 = 4;
LABEL_168:
      FollowerSelectItemListViewManager__SetMode(v115, v116, v114, 0);
      return;
    }
    this = (FollowerRootComponent_o *)v8->fields.operationItemListViewManager;
    if ( !this )
      goto LABEL_194;
    this = (FollowerRootComponent_o *)FollowerSelectItemListViewManager__GetItem(
                                        (FollowerSelectItemListViewManager_o *)this,
                                        n,
                                        0);
    if ( !this )
      goto LABEL_194;
    v90 = (FollowerSelectItemListViewItem_o *)this;
    FollowerSelectItemListViewItem__SetSkillChangeInfo(
      (FollowerSelectItemListViewItem_o *)this,
      *(const MethodInfo **)&kind);
    if ( !FollowerSelectItemListViewItem__get_ServantLeader(v90, v91) )
      goto LABEL_153;
    this = (FollowerRootComponent_o *)FollowerSelectItemListViewItem__get_ServantLeader(v90, v92);
    if ( !this )
      goto LABEL_194;
    v94 = *(_QWORD *)&this->fields.manualWidth;
    v95 = *(_QWORD *)&this->fields.kind;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&kind, v93);
    *(_QWORD *)&v145.fields.currentCryptoKey = v94;
    *(_QWORD *)&v145.fields.fakeValue = v95;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v145, 0) >= 1 )
    {
      this = (FollowerRootComponent_o *)FollowerSelectItemListViewItem__get_ServantLeader(v90, v92);
      if ( !this )
        goto LABEL_194;
      EquipTargetInfoByEquipIdx = ServantLeaderInfo__GetEquipTargetInfoByEquipIdx((ServantLeaderInfo_o *)this, param, 0);
      if ( !EquipTargetInfoByEquipIdx )
        goto LABEL_161;
      EquipInfo = EquipTargetInfoByEquipIdx;
      v100 = *(_QWORD *)&EquipTargetInfoByEquipIdx->fields.svtId.fields.currentCryptoKey;
      v101 = *(_QWORD *)&EquipTargetInfoByEquipIdx->fields.svtId.fields.fakeValue;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v97, v98);
      *(_QWORD *)&v146.fields.currentCryptoKey = v100;
      *(_QWORD *)&v146.fields.fakeValue = v101;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v146, 0) < 1 )
        goto LABEL_161;
      this = (FollowerRootComponent_o *)FollowerSelectItemListViewItem__get_ServantLeader(v90, v102);
      if ( !this )
        goto LABEL_194;
      if ( ServantLeaderInfo__IsHideEquip((ServantLeaderInfo_o *)this, 0) )
        goto LABEL_161;
    }
    else
    {
LABEL_153:
      EquipInfo = FollowerSelectItemListViewItem__get_EquipInfo(v90, v92);
      if ( !EquipInfo )
        goto LABEL_161;
    }
    v106 = *(_QWORD *)&EquipInfo->fields.svtId.fields.currentCryptoKey;
    v107 = *(_QWORD *)&EquipInfo->fields.svtId.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v103, v104);
    *(_QWORD *)&v147.fields.currentCryptoKey = v106;
    *(_QWORD *)&v147.fields.fakeValue = v107;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v147, 0) >= 1 )
    {
      v108 = (System_Reflection_MethodBase_o *)sub_1FEBA28(Method_FollowerRootComponent_OnSelectFollowerItem__);
      OverwriteAssetSoundName__PlaySystemSe(v108, 0, 0, 0);
      followerInfo = v90->fields.followerInfo;
      if ( followerInfo )
      {
        type = followerInfo->fields.type;
        if ( type == 1 )
        {
          v112 = 13;
          goto LABEL_191;
        }
        if ( type == 5 )
        {
          v112 = 14;
LABEL_191:
          FollowerRootComponent__SelectShowServantEquip(v8, EquipInfo, v112, v109);
          return;
        }
      }
      if ( v90->fields.isNpc )
        v112 = 19;
      else
        v112 = 16;
      goto LABEL_191;
    }
LABEL_161:
    v78 = (System_Reflection_MethodBase_o *)sub_1FEBA28(Method_FollowerRootComponent_OnSelectFollowerItem__);
LABEL_162:
    OverwriteAssetSoundName__PlaySystemSe(v78, 2, 0, 0);
LABEL_163:
    v113 = v8->fields.operationItemListViewManager;
    v114 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_21FFEBC(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    FollowerSelectItemListViewManager_CallbackFunc___ctor(
      v114,
      (Il2CppObject *)v8,
      (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
      0);
    if ( !v113 )
      goto LABEL_194;
    v115 = v113;
    v116 = 2;
    goto LABEL_168;
  }
  if ( (unsigned int)(kind - 8) < 5 )
  {
    this = (FollowerRootComponent_o *)v8->fields.operationItemListViewManager;
    if ( !this )
      goto LABEL_194;
    this = (FollowerRootComponent_o *)FollowerSelectItemListViewManager__GetItem(
                                        (FollowerSelectItemListViewManager_o *)this,
                                        n,
                                        0);
    v33 = (unsigned int)(kind - 9);
    v34 = (unsigned int)v33 < 4 ? v33 + 1 : 0LL;
    if ( !this )
      goto LABEL_194;
    this = (FollowerRootComponent_o *)FollowerSelectItemListViewItem__GetAppendSkillInfo(
                                        (FollowerSelectItemListViewItem_o *)this,
                                        &v140,
                                        (bool)this->fields.friendPointCampaignEntityList,
                                        v32);
    if ( !v140 )
      goto LABEL_194;
    if ( (unsigned int)v34 < LODWORD(v140->max_length) )
    {
      v35 = v140->m_Items[v34];
      if ( v35 && v35->fields.id >= 1 && v35->fields.lv >= 1 )
      {
        v36 = (System_Reflection_MethodBase_o *)sub_1FEBA28(Method_FollowerRootComponent_OnSelectFollowerItem__);
        OverwriteAssetSoundName__PlaySystemSe(v36, 0, 0, 0);
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v37, v38);
        this = (FollowerRootComponent_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_SkillMaster___);
        if ( !this )
          goto LABEL_194;
        v39 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                v35->fields.id,
                (const MethodInfo_3EDD388 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        this = (FollowerRootComponent_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_SkillLvMaster___);
        if ( !this )
          goto LABEL_194;
        this = (FollowerRootComponent_o *)SkillLvMaster__GetEntity(
                                            (SkillLvMaster_o *)this,
                                            v35->fields.id,
                                            v35->fields.lv,
                                            0);
        if ( !v39 )
          goto LABEL_194;
        SkillEntity__getSkillMessageInfo((SkillEntity_o *)v39, &v139, &v138, v35->fields.lv, 0);
        v42 = v139;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v40, v41);
        v43 = LocalizationManager__Get((System_String_o *)StringLiteral_8900/*"MASTER_EQSKILL_LV_TXT"*/, 0);
        lv = v35->fields.lv;
        v44 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &lv);
        v45 = System_String__Format(v43, v44, 0);
        v46 = System_String__Concat_75481624(v42, (System_String_o *)StringLiteral_113/*" "*/, v45, 0);
        v47 = v8->fields.tutorialMode;
        v139 = v46;
        this = (FollowerRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( v47 == 3 )
        {
          if ( !this )
            goto LABEL_194;
          CommonUI__OpenDetailLongInfoDialogOnFade(
            (CommonUI_o *)this,
            v139,
            (System_String_o *)StringLiteral_1/*""*/,
            v138,
            0);
        }
        else
        {
          if ( !this )
            goto LABEL_194;
          CommonUI__OpenDetailLongInfoDialog(
            (CommonUI_o *)this,
            v139,
            (System_String_o *)StringLiteral_1/*""*/,
            v138,
            1,
            0,
            0);
        }
      }
      else
      {
        v48 = Method_FollowerRootComponent_OnSelectFollowerItem__;
        if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
          v48 = (_QWORD *)sub_21FFC68(Method_FollowerRootComponent_OnSelectFollowerItem__);
        v49 = (System_Reflection_MethodBase_o *)sub_21FFC34(v48, v48[4]);
        OverwriteAssetSoundName__PlaySystemSe(v49, 2, 0, 0);
      }
      operationItemListViewManager = v8->fields.operationItemListViewManager;
      v51 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_21FFEBC(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
      v52 = Method_FollowerRootComponent_OnSelectFollowerItem__;
      goto LABEL_150;
    }
    goto LABEL_195;
  }
  if ( kind == 13 )
    goto LABEL_80;
  if ( kind == 14 )
  {
    battleSetupInfo = v8->fields.battleSetupInfo;
    if ( !battleSetupInfo )
      goto LABEL_194;
    if ( battleSetupInfo->fields.isChildFollower )
    {
      this = (FollowerRootComponent_o *)v8->fields.titleInfo;
      if ( !this )
        goto LABEL_194;
      TitleInfoControl__setBackBtnEnable((TitleInfoControl_o *)this, 0, 0);
      this = (FollowerRootComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !this )
        goto LABEL_194;
      LOBYTE(this->fields.titleInfo) = 1;
    }
    v54 = (NetworkManager_ResultCallbackFunc_o *)sub_21FFEBC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(v54, (Il2CppObject *)v8, Method_FollowerRootComponent_CallbackRefresh__, 0);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v55, v56);
    this = (FollowerRootComponent_o *)NetworkManager__getRequest_object_(
                                        v54,
                                        (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_FollowerRecommendSupportListRequest___);
    if ( v8->fields.battleSetupInfo )
    {
      v57 = (FollowerRecommendSupportListRequest_o *)this;
      this = (FollowerRootComponent_o *)BattleSetupInfo__TargetQuestId(v8->fields.battleSetupInfo, 0);
      v58 = v8->fields.battleSetupInfo;
      if ( v58 )
      {
        if ( v57 )
        {
          FollowerRecommendSupportListRequest__beginRequest(v57, 0, (int32_t)this, v58->fields.questPhase, 0);
          return;
        }
      }
    }
    goto LABEL_194;
  }
LABEL_116:
  this = (FollowerRootComponent_o *)v8->fields.operationItemListViewManager;
  if ( !this )
    goto LABEL_194;
  this = (FollowerRootComponent_o *)FollowerSelectItemListViewManager__GetItem(
                                      (FollowerSelectItemListViewManager_o *)this,
                                      n,
                                      0);
  if ( !this )
    goto LABEL_194;
  v86 = this;
  if ( FollowerSelectItemListViewItem__get_SvtId((FollowerSelectItemListViewItem_o *)this, *(const MethodInfo **)&kind) < 1
    || LOBYTE(v86->fields.state)
    || BYTE3(v86[1].monitor) )
  {
    v87 = Method_FollowerRootComponent_OnSelectFollowerItem__;
    if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
      v87 = (_QWORD *)sub_21FFC68(Method_FollowerRootComponent_OnSelectFollowerItem__);
    v78 = (System_Reflection_MethodBase_o *)sub_21FFC34(v87, v87[4]);
    goto LABEL_162;
  }
  this = (FollowerRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !this )
    goto LABEL_194;
  if ( BYTE4(this->fields.battleSetupInfo) )
  {
    this = (FollowerRootComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    v120 = this;
    v121 = FollowerRootComponent___c_TypeInfo;
    if ( !*(&FollowerRootComponent___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(FollowerRootComponent___c_TypeInfo, *(_QWORD *)&kind, v119);
      v121 = FollowerRootComponent___c_TypeInfo;
    }
    static_fields = v121->static_fields;
    _9__67_0 = static_fields->__9__67_0;
    if ( !_9__67_0 )
    {
      if ( !*(&v121->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v121, *(_QWORD *)&kind, v119);
        static_fields = FollowerRootComponent___c_TypeInfo->static_fields;
      }
      v124 = (Il2CppObject *)static_fields->__9;
      _9__67_0 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(_9__67_0, v124, Method_FollowerRootComponent___c__OnSelectFollowerItem_b__67_0__, 0);
      v125 = FollowerRootComponent___c_TypeInfo->static_fields;
      v125->__9__67_0 = _9__67_0;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&v125->__9__67_0,
        (int32_t)_9__67_0,
        v126,
        v127,
        v128,
        v129,
        v130,
        v131);
    }
    if ( !v120 )
      goto LABEL_194;
    if ( PartyOrganizationUtility__OpenQuestUseItemExpiredDialog((PartyOrganizationUtility_o *)v120, _9__67_0, 0) )
      goto LABEL_163;
  }
  v132 = (System_Reflection_MethodBase_o *)sub_1FEBA28(Method_FollowerRootComponent_OnSelectFollowerItem__);
  OverwriteAssetSoundName__PlaySystemSe(v132, 0, 0, 0);
  if ( !v8->fields.tutorialState )
    goto LABEL_188;
  v133 = v8->fields.tutorialMode;
  if ( v133 == 3 )
  {
    v8->fields.state = 4;
    v134 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v135 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(v135, (Il2CppObject *)v8, Method_FollowerRootComponent_EndCloseTutorialArrow__, 0);
    if ( v134 )
    {
      CommonUI__CloseTutorialArrowMark((CommonUI_o *)v134, v135, 0);
      return;
    }
    goto LABEL_194;
  }
  if ( v133 == 2 )
  {
    this = (FollowerRootComponent_o *)v8->fields.titleInfo;
    if ( !this )
      goto LABEL_194;
    TitleInfoControl__setBackBtnEnable((TitleInfoControl_o *)this, 1, 0);
LABEL_188:
    this = (FollowerRootComponent_o *)v8->fields.myFSM;
    if ( !this )
      goto LABEL_194;
    v89 = &StringLiteral_9005/*"MENU_SELECT_ITEM"*/;
    goto LABEL_131;
  }
}


void FollowerRootComponent__PlayBGM(FollowerRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  FollowerRootComponent_o *v3; // x19
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  int32_t questId; // w20
  BalanceConfig_c *v6; // x0
  QuestPhaseMaster_o *v7; // x20
  struct BattleSetupInfo_o *v8; // x8
  float FormationSubBgmFadeInTime; // s8
  __int64 v10; // x2
  int FormationBgmId; // w20
  System_String_o *BgmFileName; // x21
  _BOOL4 v13; // w23
  char v14; // w22
  FollowerRootComponent_o *v15; // x20
  int32_t FormationSubBgmId; // w0
  __int64 v17; // x1
  __int64 v18; // x2
  int32_t v19; // w20
  __int64 v20; // x2
  const MethodInfo *v21; // x2
  __int64 v22; // x2
  struct System_String_o *selectFriendCode; // x8
  System_String_o *fields; // x19
  SoundManager_c *v25; // x0
  System_String_o *v26; // x0
  struct BattleSetupInfo_o *v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  const MethodInfo *v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  FollowerRootComponent_o *v33; // x0
  const MethodInfo *v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  QuestMaster_o *v37; // x21
  struct BattleSetupInfo_o *v38; // x8
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  v3 = this;
  if ( (byte_5932E4C & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&BgmManager_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_BgmMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_21FFC50(&SoundManager_TypeInfo);
    this = (FollowerRootComponent_o *)sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5932E4C = 1;
  }
  battleSetupInfo = v3->fields.battleSetupInfo;
  entity = 0;
  if ( !battleSetupInfo )
    goto LABEL_70;
  questId = battleSetupInfo->fields.questId;
  v6 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method, v2);
    v6 = BalanceConfig_TypeInfo;
  }
  if ( questId != v6->static_fields->PrologueQuestId )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v2);
    this = (FollowerRootComponent_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( !v3->fields.battleSetupInfo )
      goto LABEL_70;
    v7 = (QuestPhaseMaster_o *)this;
    this = (FollowerRootComponent_o *)BattleSetupInfo__TargetQuestId(v3->fields.battleSetupInfo, 0);
    v8 = v3->fields.battleSetupInfo;
    if ( !v8 || !v7 )
      goto LABEL_70;
    FormationSubBgmFadeInTime = 0.0;
    if ( QuestPhaseMaster__TryGetEntity(v7, &entity, (int32_t)this, v8->fields.questPhase, 0) )
    {
      this = (FollowerRootComponent_o *)entity;
      if ( !entity )
        goto LABEL_70;
      FormationBgmId = QuestPhaseEntity__GetFormationBgmId(entity, 0);
      if ( FormationBgmId < 1 )
      {
        BgmFileName = 0;
        v13 = FormationBgmId == 0;
      }
      else
      {
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v10);
        this = (FollowerRootComponent_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_BgmMaster___);
        if ( !this )
          goto LABEL_70;
        BgmFileName = BgmMaster__GetBgmFileName(
                        (BgmMaster_o *)this,
                        FormationBgmId,
                        (System_String_o *)StringLiteral_1/*""*/,
                        0);
        v13 = 0;
      }
      this = (FollowerRootComponent_o *)entity;
      if ( !entity )
        goto LABEL_70;
      this = (FollowerRootComponent_o *)QuestPhaseEntity__IsNonStopEndBgm(entity, 0);
      if ( !entity )
        goto LABEL_70;
      v14 = (char)this;
      FormationSubBgmId = QuestPhaseEntity__GetFormationSubBgmId(entity, 0);
      if ( FormationSubBgmId < 0 )
      {
        v15 = 0;
      }
      else
      {
        v19 = FormationSubBgmId;
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v17, v18);
        this = (FollowerRootComponent_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_BgmMaster___);
        if ( !this )
          goto LABEL_70;
        this = (FollowerRootComponent_o *)BgmMaster__GetBgmFileName(
                                            (BgmMaster_o *)this,
                                            v19,
                                            (System_String_o *)StringLiteral_1/*""*/,
                                            0);
        if ( !entity )
          goto LABEL_70;
        v15 = this;
        FormationSubBgmFadeInTime = QuestPhaseEntity__GetFormationSubBgmFadeInTime(entity, 0);
      }
    }
    else
    {
      v13 = 0;
      v14 = 0;
      v15 = 0;
      BgmFileName = 0;
    }
    this = (FollowerRootComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !this )
      goto LABEL_70;
    this = (FollowerRootComponent_o *)PartyOrganizationUtility__ExistsTemporaryPartyInfo(
                                        (PartyOrganizationUtility_o *)this,
                                        0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !System_String__IsNullOrEmpty(BgmFileName, 0) )
        FollowerRootComponent__SetBackupBgmName(v3, v14 & 1, v21);
      this = (FollowerRootComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( this )
      {
        selectFriendCode = this->fields.selectFriendCode;
        if ( selectFriendCode )
        {
          fields = (System_String_o *)selectFriendCode[1].fields;
          v25 = SoundManager_TypeInfo;
          if ( *(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
          {
LABEL_38:
            v26 = fields;
LABEL_56:
            SoundManager__playBgm(v26, 0);
LABEL_57:
            FollowerRootComponent__PlaySubBgm(v33, (System_String_o *)v15, FormationSubBgmFadeInTime, v34);
            return;
          }
LABEL_37:
          j_il2cpp_runtime_class_init_0(v25, method, v22);
          goto LABEL_38;
        }
      }
      goto LABEL_70;
    }
    v27 = v3->fields.battleSetupInfo;
    if ( !v27 )
      goto LABEL_70;
    if ( !v27->fields.isScriptBeforePartySelect )
      goto LABEL_48;
    if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, method, v20);
    if ( !SoundManager__isPlayBgm(0, 0) )
      goto LABEL_48;
    if ( !System_String__IsNullOrEmpty(BgmFileName, 0) )
    {
      if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v28, v29);
      if ( !BgmManager__IsPlayBgm(BgmFileName, 0) )
      {
LABEL_48:
        if ( !System_String__IsNullOrEmpty(BgmFileName, 0) )
        {
          FollowerRootComponent__SetBackupBgmName(v3, v14 & 1, v30);
          if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v35, v36);
          v26 = BgmFileName;
          goto LABEL_56;
        }
        if ( v13 )
        {
          FollowerRootComponent__SetBackupBgmName(v3, v14 & 1, v30);
          if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v31, v32);
          SoundManager__stopBgm(0);
          goto LABEL_57;
        }
        this = (FollowerRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( this )
        {
          this = (FollowerRootComponent_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_QuestMaster___);
          if ( v3->fields.battleSetupInfo )
          {
            v37 = (QuestMaster_o *)this;
            this = (FollowerRootComponent_o *)BattleSetupInfo__TargetQuestId(v3->fields.battleSetupInfo, 0);
            if ( v37 )
            {
              this = (FollowerRootComponent_o *)QuestMaster__getQuestEntity(v37, (int32_t)this, 0);
              v38 = v3->fields.battleSetupInfo;
              if ( v38 )
              {
                if ( this )
                {
                  fields = QuestEntity__GetBgmName((QuestEntity_o *)this, v38->fields.warId, 0);
                  if ( System_String__IsNullOrEmpty(fields, 0) )
                  {
                    if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
                      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, method, v22);
                    fields = BgmManager__GetMainBgmName(1, 0);
                  }
                  v25 = SoundManager_TypeInfo;
                  if ( *(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
                    goto LABEL_38;
                  goto LABEL_37;
                }
              }
            }
          }
        }
LABEL_70:
        sub_21FFECC(this, method);
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
  __int64 v6; // x1
  __int64 v7; // x2

  if ( (byte_5932E4B & 1) == 0 )
  {
    sub_21FFC50(&SoundManager_TypeInfo);
    byte_5932E4B = 1;
  }
  if ( !System_String__IsNullOrEmpty(subBgmName, 0) )
  {
    if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v6, v7);
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
    sub_21FFECC(operationItemListViewManager, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)operationItemListViewManager, 0, 0);
  this->fields.state = 0;
}


void FollowerRootComponent__RequestFollowerList(FollowerRootComponent_o *this, const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v3; // x20
  __int64 v4; // x1
  __int64 v5; // x2
  FollowerListRequest_o *Request_object; // x0
  __int64 v7; // x1
  FollowerListRequest_o *v8; // x20
  struct BattleSetupInfo_o *battleSetupInfo; // x8

  if ( (byte_5932E55 & 1) == 0 )
  {
    sub_21FFC50(&Method_FollowerRootComponent_CallbackFollowerList__);
    sub_21FFC50(&Method_NetworkManager_getRequest_FollowerListRequest___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_21FFC50(&StringLiteral_11545/*"REQUEST_OK"*/);
    byte_5932E55 = 1;
  }
  v3 = (NetworkManager_ResultCallbackFunc_o *)sub_21FFEBC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v3,
    (Il2CppObject *)this,
    Method_FollowerRootComponent_CallbackFollowerList__,
    0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4, v5);
  Request_object = (FollowerListRequest_o *)NetworkManager__getRequest_object_(
                                              v3,
                                              (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_FollowerListRequest___);
  if ( !this->fields.battleSetupInfo )
    goto LABEL_13;
  v8 = Request_object;
  Request_object = (FollowerListRequest_o *)BattleSetupInfo__TargetQuestId(this->fields.battleSetupInfo, 0);
  if ( !v8 )
    goto LABEL_13;
  if ( FollowerListRequest__IsNeedRequestList(v8, (int32_t)Request_object, 0) )
  {
    Request_object = (FollowerListRequest_o *)this->fields.battleSetupInfo;
    if ( Request_object )
    {
      Request_object = (FollowerListRequest_o *)BattleSetupInfo__TargetQuestId((BattleSetupInfo_o *)Request_object, 0);
      battleSetupInfo = this->fields.battleSetupInfo;
      if ( battleSetupInfo )
      {
        FollowerListRequest__beginRequest(v8, 0, (int32_t)Request_object, battleSetupInfo->fields.questPhase, 0);
        return;
      }
    }
LABEL_13:
    sub_21FFECC(Request_object, v7);
  }
  Request_object = (FollowerListRequest_o *)this->fields.myFSM;
  if ( !Request_object )
    goto LABEL_13;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Request_object, (System_String_o *)StringLiteral_11545/*"REQUEST_OK"*/, 0);
}


bool FollowerRootComponent__ReturnBattleSetupMenu(FollowerRootComponent_o *this, const MethodInfo *method)
{
  FollowerRootComponent_o *v2; // x20
  struct BattleSetupInfo_o *battleSetupInfo; // x19

  v2 = this;
  if ( (byte_5932E62 & 1) == 0 )
  {
    this = (FollowerRootComponent_o *)sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_5932E62 = 1;
  }
  battleSetupInfo = v2->fields.battleSetupInfo;
  v2->fields.state = 5;
  if ( !battleSetupInfo )
    goto LABEL_8;
  if ( battleSetupInfo->fields.isChildFollower )
    battleSetupInfo->fields.followerId = 0;
  this = (FollowerRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !this )
LABEL_8:
    sub_21FFECC(this, method);
  AvalonSceneManager__pushScene((AvalonSceneManager_o *)this, 40, 1, (Il2CppObject *)battleSetupInfo, 0);
  return 1;
}


bool FollowerRootComponent__ReturnQuestMenu(FollowerRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *battleSetupInfo; // x20
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_String_o *backupBgmName; // x22
  __int64 v13; // x1
  __int64 v14; // x2
  Il2CppObject *Instance; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  TerminalPramsManager_c *v18; // x0
  const MethodInfo_476E8C0 *v19; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  OtherUserServantLimitCountManager_c *v24; // x0

  if ( (byte_5932E61 & 1) == 0 )
  {
    sub_21FFC50(&Method_AvalonSceneManager_UnloadScene_PartyOrganizationRootComponent___);
    sub_21FFC50(&OtherUserServantLimitCountManager_TypeInfo);
    sub_21FFC50(&QuestHintDialogOpenManager_TypeInfo);
    sub_21FFC50(&RandomLimitCountManager_TypeInfo);
    sub_21FFC50(&ScriptManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_21FFC50(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_21FFC50(&SoundManager_TypeInfo);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5932E61 = 1;
  }
  battleSetupInfo = (Il2CppObject *)this->fields.battleSetupInfo;
  if ( !*(&QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo, method, v2);
  QuestHintDialogOpenManager__ResetTemporarilyId(0);
  if ( !System_String__IsNullOrEmpty(this->fields.backupBgmName, 0) )
  {
    backupBgmName = this->fields.backupBgmName;
    if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v5, v6);
    SoundManager__playBgm(backupBgmName, 0);
  }
  this->fields.battleSetupInfo = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.battleSetupInfo, 0, v6, v7, v8, v9, v10, v11);
  if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v13, v14);
  ScriptManager__ClearSelectRouteArray(0);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  if ( BYTE6(Instance[12].monitor) )
  {
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_37;
    BYTE6(Instance[12].monitor) = 0;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v16, v17);
    if ( !byte_5932ADC )
    {
      sub_21FFC50(&TerminalPramsManager_TypeInfo);
      byte_5932ADC = 1;
    }
    v18 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v16, v17);
      v18 = TerminalPramsManager_TypeInfo;
    }
    v18->static_fields->_IsAutoResume_k__BackingField = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  if ( AvalonSceneManager__IsStackScene((AvalonSceneManager_o *)Instance, 0) )
  {
    v19 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__;
    this->fields.state = 0;
    Instance = SingletonMonoBehaviour_object___get_Instance(v19);
    if ( !Instance )
      goto LABEL_37;
    AvalonSceneManager__popSceneRefresh((AvalonSceneManager_o *)Instance, 1, battleSetupInfo, 0);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_37;
    AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0, 0, 0);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
LABEL_37:
    sub_21FFECC(Instance, v16);
  AvalonSceneManager__UnloadScene_object_(
    (AvalonSceneManager_o *)Instance,
    (const MethodInfo_37DB328 *)Method_AvalonSceneManager_UnloadScene_PartyOrganizationRootComponent___);
  if ( !*(&RandomLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, v20, v21);
  RandomLimitCountManager__set_EnableRandomLimitCount(0, 0);
  if ( !*(&OtherUserServantLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(OtherUserServantLimitCountManager_TypeInfo, v22, v23);
  if ( !byte_5932E91 )
  {
    sub_21FFC50(&OtherUserServantLimitCountManager_TypeInfo);
    byte_5932E91 = 1;
  }
  v24 = OtherUserServantLimitCountManager_TypeInfo;
  if ( !*(&OtherUserServantLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(OtherUserServantLimitCountManager_TypeInfo, v22, v23);
    v24 = OtherUserServantLimitCountManager_TypeInfo;
  }
  v24->static_fields->_IsEnableAdjustSupportLimitCount_k__BackingField = 0;
  OtherUserServantLimitCountManager__Clear(0);
  return 1;
}


void FollowerRootComponent__ReturnSupportList(FollowerRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  OtherUserServantLimitCountManager_c *v4; // x0
  int32_t state; // w21
  OtherUserServantLimitCountManager_c *v6; // x0
  void *operationItemListViewManager; // x0
  FollowerSelectItemListViewManager_o *v8; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v9; // x21
  __int64 v10; // x2
  FollowerSelectItemListViewManager_o *v11; // x20
  FollowerSelectItemListViewManager_c *v12; // x0
  FollowerSelectItemListViewManager_o *v13; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v14; // x21
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  FollowerQuestInfomationDraw_o *followerQuestInfomationDraw; // x20
  QuestRestrictionInfo_o *questRestrictionInfo; // x21
  const MethodInfo *v18; // x4
  __int64 v19; // x2
  CommonUI_o *v20; // x20

  if ( (byte_5932E53 & 1) == 0 )
  {
    sub_21FFC50(&AvalonSceneManager_TypeInfo);
    sub_21FFC50(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_FollowerRootComponent_OnSelectFollowerItem__);
    sub_21FFC50(&OtherUserServantLimitCountManager_TypeInfo);
    sub_21FFC50(&RandomLimitCountManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_5932E53 = 1;
  }
  v4 = OtherUserServantLimitCountManager_TypeInfo;
  state = this->fields.state;
  this->fields.state = 3;
  if ( !*(&v4->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v4, method, v2);
  if ( !byte_5932E91 )
  {
    sub_21FFC50(&OtherUserServantLimitCountManager_TypeInfo);
    byte_5932E91 = 1;
  }
  v6 = OtherUserServantLimitCountManager_TypeInfo;
  if ( !*(&OtherUserServantLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(OtherUserServantLimitCountManager_TypeInfo, method, v2);
    v6 = OtherUserServantLimitCountManager_TypeInfo;
  }
  v6->static_fields->_IsEnableAdjustSupportLimitCount_k__BackingField = 1;
  if ( state == 5 )
  {
    if ( !*(&RandomLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, method, v2);
    RandomLimitCountManager__set_EnableRandomLimitCount(0, 0);
    RandomLimitCountManager__set_EnableRandomLimitCount(1, 0);
    operationItemListViewManager = this->fields.operationItemListViewManager;
    if ( !operationItemListViewManager )
      goto LABEL_33;
    FollowerSelectItemListViewManager__ModifyList(
      (FollowerSelectItemListViewManager_o *)operationItemListViewManager,
      this->fields.friendPointUpVal,
      this->fields.friendPointUpMaxVal,
      0);
    v8 = this->fields.operationItemListViewManager;
    v9 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_21FFEBC(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    FollowerSelectItemListViewManager_CallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
      0);
    if ( !v8 )
      goto LABEL_33;
    FollowerSelectItemListViewManager__SetMode(v8, 3, v9, 0);
    v11 = this->fields.operationItemListViewManager;
    if ( !v11 )
      goto LABEL_33;
    if ( !byte_5932E92 )
    {
      sub_21FFC50(&FollowerSelectItemListViewManager_TypeInfo);
      byte_5932E92 = 1;
    }
    v12 = FollowerSelectItemListViewManager_TypeInfo;
    if ( !*(&FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo, method, v10);
      v12 = FollowerSelectItemListViewManager_TypeInfo;
    }
    FollowerSelectItemListViewManager__ChangeClass(v11, v12->static_fields->followerClassId, 0);
    operationItemListViewManager = this->fields.operationItemListViewManager;
    if ( !operationItemListViewManager )
LABEL_33:
      sub_21FFECC(operationItemListViewManager, method);
    operationItemListViewManager = (void *)FollowerSelectItemListViewManager__GetDisplayItemNum(
                                             (FollowerSelectItemListViewManager_o *)operationItemListViewManager,
                                             0);
    if ( (int)operationItemListViewManager >= 3 )
    {
      operationItemListViewManager = this->fields.operationItemListViewManager;
      if ( !operationItemListViewManager )
        goto LABEL_33;
      ListViewManager__JumpItem((ListViewManager_o *)operationItemListViewManager, this->fields.selectItemNum, 0);
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
      0);
    v13 = this->fields.operationItemListViewManager;
    v14 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_21FFEBC(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    FollowerSelectItemListViewManager_CallbackFunc___ctor(
      v14,
      (Il2CppObject *)this,
      (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
      0);
    if ( !v13 )
      goto LABEL_33;
    FollowerSelectItemListViewManager__SetMode(v13, 2, v14, 0);
  }
  battleSetupInfo = this->fields.battleSetupInfo;
  if ( !battleSetupInfo )
    goto LABEL_33;
  followerQuestInfomationDraw = this->fields.followerQuestInfomationDraw;
  questRestrictionInfo = battleSetupInfo->fields.questRestrictionInfo;
  operationItemListViewManager = SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !operationItemListViewManager || !followerQuestInfomationDraw )
    goto LABEL_33;
  FollowerQuestInfomationDraw__SetInfomation(
    followerQuestInfomationDraw,
    questRestrictionInfo,
    *((_DWORD *)operationItemListViewManager + 22),
    0,
    v18);
  operationItemListViewManager = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v20 = (CommonUI_o *)operationItemListViewManager;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, method, v19);
  if ( !v20 )
    goto LABEL_33;
  CommonUI__maskFadein(v20, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0);
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

  if ( (byte_5932E5B & 1) == 0 )
  {
    sub_21FFC50(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_21FFC50(&Method_FollowerRootComponent_EndShowServant__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5932E5B = 1;
  }
  operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager
    || (ListViewManager__GetScrollView(
          operationItemListViewManager,
          &this->fields.openScroll,
          &this->fields.openOffset,
          0),
        operationItemListViewManager = (ListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        !item)
    || (v6 = (CommonUI_o *)operationItemListViewManager,
        ServantLeader = FollowerSelectItemListViewItem__get_ServantLeader(item, (const MethodInfo *)item),
        v8 = (ServantStatusDialog_EndDelegate_o *)sub_21FFEBC(ServantStatusDialog_EndDelegate_TypeInfo),
        ServantStatusDialog_EndDelegate___ctor(
          v8,
          (Il2CppObject *)this,
          Method_FollowerRootComponent_EndShowServant__,
          0),
        !v6) )
  {
    sub_21FFECC(operationItemListViewManager, item);
  }
  CommonUI__OpenServantStatusDialog_37304188(v6, 5, ServantLeader, v8, 0);
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

  if ( (byte_5932E5E & 1) == 0 )
  {
    sub_21FFC50(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_21FFC50(&Method_FollowerRootComponent_EndShowServantEquip__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5932E5E = 1;
  }
  operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager
    || (ListViewManager__GetScrollView(
          operationItemListViewManager,
          &this->fields.openScroll,
          &this->fields.openOffset,
          0),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v9 = (ServantStatusDialog_EndDelegate_o *)sub_21FFEBC(ServantStatusDialog_EndDelegate_TypeInfo),
        ServantStatusDialog_EndDelegate___ctor(
          v9,
          (Il2CppObject *)this,
          Method_FollowerRootComponent_EndShowServantEquip__,
          0),
        !Instance) )
  {
    sub_21FFECC(operationItemListViewManager, equipInfo);
  }
  CommonUI__OpenServantEquipStatusDialog_37307296((CommonUI_o *)Instance, statusKind, equipInfo, v9, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void FollowerRootComponent__SetBackupBgmName(
        FollowerRootComponent_o *this,
        bool isNonStopEndBgm,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  struct System_String_o *BgmName; // x0
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  if ( (byte_5932E4D & 1) == 0 )
  {
    sub_21FFC50(&SoundManager_TypeInfo);
    byte_5932E4D = 1;
  }
  if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, isNonStopEndBgm, method);
  if ( SoundManager__isPlayBgm(0, 0) && !isNonStopEndBgm )
  {
    if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v5, v6);
    BgmName = SoundManager__getBgmName(0);
    this->fields.backupBgmName = BgmName;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.backupBgmName,
      (int32_t)BgmName,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
  }
}


bool FollowerRootComponent__SetFollowerBase(UISprite_o *sprite, System_String_o *spriteName, const MethodInfo *method)
{
  FollowerRootComponent_c *v5; // x0
  UIAtlas_o *partyOrganizationAtlasCache; // x21

  if ( (byte_5932E48 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&FollowerRootComponent_TypeInfo);
    byte_5932E48 = 1;
  }
  v5 = FollowerRootComponent_TypeInfo;
  if ( !*(&FollowerRootComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FollowerRootComponent_TypeInfo, spriteName, method);
    v5 = FollowerRootComponent_TypeInfo;
  }
  partyOrganizationAtlasCache = v5->static_fields->partyOrganizationAtlasCache;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, spriteName, method);
  return AtlasManager__SetGradeBase(sprite, spriteName, partyOrganizationAtlasCache, 0);
}


bool FollowerRootComponent__StartBattleSetupMenu(FollowerRootComponent_o *this, const MethodInfo *method)
{
  PartyOrganizationUtility_o *Instance; // x0
  __int64 followerId; // x1
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  int32_t ItemIndex_39300268; // w0
  struct PartyListViewItem_o *PartyItemSmc_k__BackingField; // x9
  struct BattleSetupInfo_o *v8; // x8
  int64_t v9; // x10
  int v10; // w11
  int32_t v11; // w10
  int32_t SelectedNormalFollowerDeckId_k__BackingField; // w11
  int32_t SelectedConfirmedNormalFollowerDeckId_k__BackingField; // w12
  int SelectedNormalFollowerGrandGraphId_k__BackingField_low; // w13
  struct System_String_o *sortStr1; // x10
  _DWORD *monitor; // x10
  int32_t sortValue0_high; // w9
  Il2CppObject *v18; // x20

  if ( (byte_5932E63 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_21FFC50(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_5932E63 = 1;
  }
  Instance = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  Instance = (PartyOrganizationUtility_o *)PartyOrganizationUtility__ExistsTemporaryPartyInfo(Instance, 0);
  battleSetupInfo = this->fields.battleSetupInfo;
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !battleSetupInfo )
      goto LABEL_32;
    followerId = battleSetupInfo->fields.followerId;
    if ( followerId >= 1 )
    {
      Instance = (PartyOrganizationUtility_o *)this->fields.operationItemListViewManager;
      if ( !Instance )
        goto LABEL_32;
      ItemIndex_39300268 = FollowerSelectItemListViewManager__GetItemIndex_39300268(
                             (FollowerSelectItemListViewManager_o *)Instance,
                             followerId,
                             battleSetupInfo->fields.followerClassId,
                             battleSetupInfo->fields.followerSupportDeckId,
                             battleSetupInfo->fields.followerGrandGraphId,
                             0);
      this->fields.selectItemNum = ItemIndex_39300268 & ~(ItemIndex_39300268 >> 31);
    }
    goto LABEL_29;
  }
  if ( !battleSetupInfo )
    goto LABEL_32;
  followerId = (unsigned int)this->fields.selectItemNum;
  battleSetupInfo->fields.followerId = 0;
  if ( (followerId & 0x80000000) == 0 )
  {
    Instance = (PartyOrganizationUtility_o *)this->fields.operationItemListViewManager;
    if ( !Instance )
      goto LABEL_32;
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
          goto LABEL_32;
      }
      else
      {
        v9 = 0;
        if ( !v8 )
          goto LABEL_32;
      }
      v10 = *((_DWORD *)&Instance->fields._IsWaveBattleRestart_k__BackingField + 1);
      v8->fields.followerId = v9;
      if ( v10 )
        v11 = *(_DWORD *)&Instance->fields._IsWaveBattleRestart_k__BackingField;
      else
        v11 = 0;
      SelectedNormalFollowerDeckId_k__BackingField = Instance[1].fields._SelectedNormalFollowerDeckId_k__BackingField;
      SelectedConfirmedNormalFollowerDeckId_k__BackingField = Instance[1].fields._SelectedConfirmedNormalFollowerDeckId_k__BackingField;
      SelectedNormalFollowerGrandGraphId_k__BackingField_low = LOBYTE(Instance[1].fields._SelectedNormalFollowerGrandGraphId_k__BackingField);
      v8->fields.followerClassId = v11;
      v8->fields.followerGrandGraphId = SelectedNormalFollowerDeckId_k__BackingField;
      v8->fields.followerSupportDeckId = SelectedConfirmedNormalFollowerDeckId_k__BackingField;
      if ( !SelectedNormalFollowerGrandGraphId_k__BackingField_low )
      {
        v8->fields.recommendSupportIdx = 0;
        if ( !PartyItemSmc_k__BackingField )
        {
          v8->fields.followerType = 0;
          goto LABEL_29;
        }
        goto LABEL_27;
      }
      if ( PartyItemSmc_k__BackingField )
      {
        sortStr1 = PartyItemSmc_k__BackingField->fields.sortStr1;
        if ( sortStr1 )
        {
          if ( !LODWORD(sortStr1[1].klass) )
            sub_21FFED4(Instance);
          monitor = sortStr1[1].monitor;
          if ( monitor )
          {
            v8->fields.recommendSupportIdx = monitor[6];
LABEL_27:
            sortValue0_high = HIDWORD(PartyItemSmc_k__BackingField->fields.sortValue0);
            v8->fields.followerType = 0;
            if ( (sortValue0_high | 4) == 5 )
              v8->fields.followerType = sortValue0_high;
            goto LABEL_29;
          }
        }
      }
LABEL_32:
      sub_21FFECC(Instance, followerId);
    }
  }
LABEL_29:
  v18 = (Il2CppObject *)this->fields.battleSetupInfo;
  this->fields.state = 5;
  Instance = (PartyOrganizationUtility_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  AvalonSceneManager__pushScene((AvalonSceneManager_o *)Instance, 40, 1, v18, 0);
  return 1;
}


bool FollowerRootComponent__StartSupportInfoMenu(FollowerRootComponent_o *this, const MethodInfo *method)
{
  __int64 selectItemNum; // x1
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x0
  FollowerSelectItemListViewItem_o *Item; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  FollowerSelectItemListViewItem_o *v8; // x20
  __int64 v9; // x2
  Il2CppClass *klass; // x8
  int namespaze; // w9
  int v12; // w11
  FollowerInfo_o *v13; // x22
  struct FollowerInfo_o *followerInfo; // x12
  Il2CppClass *v15; // x9
  const char *v16; // x8
  FollowerInfo_o **i; // x9
  FollowerInfo_o *v18; // x21
  struct FollowerInfo_o *userId; // x10
  bool v20; // w21
  SupportInfoJump_o *v22; // x21
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  struct FollowerSelectItemListViewManager_FollowerSelectItemOption_o *Option_k__BackingField; // x8
  _BOOL4 IsGrandSvt_k__BackingField; // w19
  const MethodInfo_476E8C0 *v26; // x0
  int32_t v27; // w1
  Il2CppObject *v28; // x3
  SupportInfoJump_o *v29; // x20
  struct BattleSetupInfo_o *v30; // x8
  Il2CppObject *v31; // [xsp+8h] [xbp-38h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_5932E64 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_PickupUserFollowerMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_UserFollowerMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long__TryGetSingleEntity__);
    sub_21FFC50(&Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long__TryGetSingleEntity__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_21FFC50(&SupportInfoJump_TypeInfo);
    byte_5932E64 = 1;
  }
  selectItemNum = (unsigned int)this->fields.selectItemNum;
  entity = 0;
  v31 = 0;
  if ( (selectItemNum & 0x80000000) == 0 )
  {
    operationItemListViewManager = this->fields.operationItemListViewManager;
    if ( !operationItemListViewManager )
      goto LABEL_50;
    Item = FollowerSelectItemListViewManager__GetItem(operationItemListViewManager, selectItemNum, 0);
    if ( Item )
    {
      v8 = Item;
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v6, v7);
      operationItemListViewManager = (FollowerSelectItemListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserFollowerMaster___);
      if ( !operationItemListViewManager )
        goto LABEL_50;
      operationItemListViewManager = (FollowerSelectItemListViewManager_o *)DataMasterBase_object__object__long___TryGetSingleEntity(
                                                                              (DataMasterBase_TMaster__TEntity__PKType__o *)operationItemListViewManager,
                                                                              &entity,
                                                                              (const MethodInfo_3EDFB14 *)Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long__TryGetSingleEntity__);
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
          v12 = 0;
          while ( 1 )
          {
            if ( namespaze == v12 )
              sub_21FFED4(operationItemListViewManager);
            v13 = (FollowerInfo_o *)*((_QWORD *)&klass->_1.byval_arg.data + v12);
            if ( !v13 )
              goto LABEL_50;
            followerInfo = v8->fields.followerInfo;
            if ( followerInfo )
              followerInfo = (struct FollowerInfo_o *)followerInfo->fields.userId;
            if ( (struct FollowerInfo_o *)v13->fields.userId == followerInfo )
              break;
            if ( (namespaze & ~(namespaze >> 31)) == ++v12 )
              goto LABEL_20;
          }
          this->fields.state = 6;
          v22 = (SupportInfoJump_o *)sub_21FFEBC(SupportInfoJump_TypeInfo);
          SupportInfoJump___ctor_48473488(v22, v13, 0, 1, 0);
          battleSetupInfo = this->fields.battleSetupInfo;
          if ( battleSetupInfo )
          {
            if ( v22 )
            {
              SupportInfoJump__SetSetupInfo(
                v22,
                battleSetupInfo->fields.eventUpValSetupInfo,
                battleSetupInfo->fields.questRestrictionInfo,
                0);
              Option_k__BackingField = v8->fields._Option_k__BackingField;
              if ( Option_k__BackingField )
              {
                SupportInfoJump__SetIsUseGrandSupport(v22, Option_k__BackingField->fields.isUseGrandBoard, 0);
                IsGrandSvt_k__BackingField = v8->fields._IsGrandSvt_k__BackingField;
                v26 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__;
                v22->fields._IsGrandRestriction_k__BackingField = v8->fields._IsGrandServantRestrictionSupport_k__BackingField;
                operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance(v26);
                if ( operationItemListViewManager )
                {
                  if ( IsGrandSvt_k__BackingField )
                    v27 = 43;
                  else
                    v27 = 60;
                  v28 = (Il2CppObject *)v22;
                  goto LABEL_49;
                }
              }
            }
          }
          goto LABEL_50;
        }
      }
LABEL_20:
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, selectItemNum, v9);
      operationItemListViewManager = (FollowerSelectItemListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_PickupUserFollowerMaster___);
      if ( !operationItemListViewManager )
        goto LABEL_50;
      operationItemListViewManager = (FollowerSelectItemListViewManager_o *)DataMasterBase_object__object__long___TryGetSingleEntity(
                                                                              (DataMasterBase_TMaster__TEntity__PKType__o *)operationItemListViewManager,
                                                                              &v31,
                                                                              (const MethodInfo_3EDFB14 *)Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long__TryGetSingleEntity__);
      if ( ((unsigned __int8)operationItemListViewManager & 1) != 0 )
      {
        if ( !v31 )
          goto LABEL_50;
        v15 = v31[1].klass;
        if ( v15 )
        {
          v16 = v15->_1.namespaze;
          if ( v16 )
          {
            if ( (int)v16 >= 1 )
            {
              for ( i = (FollowerInfo_o **)&v15->_1.byval_arg; ; ++i )
              {
                v18 = *i;
                if ( !*i )
                  goto LABEL_50;
                userId = v8->fields.followerInfo;
                if ( userId )
                  userId = (struct FollowerInfo_o *)userId->fields.userId;
                if ( (struct FollowerInfo_o *)v18->fields.userId == userId )
                  break;
                v20 = 0;
                LODWORD(v16) = (_DWORD)v16 - 1;
                if ( !(_DWORD)v16 )
                  return v20;
              }
              this->fields.state = 6;
              v29 = (SupportInfoJump_o *)sub_21FFEBC(SupportInfoJump_TypeInfo);
              SupportInfoJump___ctor_48473488(v29, v18, 0, 1, 0);
              v30 = this->fields.battleSetupInfo;
              if ( v30 )
              {
                if ( v29 )
                {
                  SupportInfoJump__SetSetupInfo(
                    v29,
                    v30->fields.eventUpValSetupInfo,
                    v30->fields.questRestrictionInfo,
                    0);
                  operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
                  if ( operationItemListViewManager )
                  {
                    v27 = 60;
                    v28 = (Il2CppObject *)v29;
LABEL_49:
                    v20 = 1;
                    AvalonSceneManager__pushScene((AvalonSceneManager_o *)operationItemListViewManager, v27, 1, v28, 0);
                    return v20;
                  }
                }
              }
LABEL_50:
              sub_21FFECC(operationItemListViewManager, selectItemNum);
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
  UserServantEntity_o *Instance; // x0
  System_Int64_array *v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *MasterData_object; // x20
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct BattleSetupInfo_o *v15; // x8
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  Il2CppObject *Master_object; // x21
  EventQuestMaster_o *v20; // x22
  struct BattleSetupInfo_o *v21; // x8
  struct EventCampaignEntity_array *Data_48886468; // x0
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  __int64 v29; // x2
  int32_t tutorialMode; // w9
  struct BattleSetupInfo_o *v31; // x8
  int32_t i; // w20
  BalanceConfig_c *v33; // x0
  PartyOrganizationListViewItem_o *Member; // x0
  PartyOrganizationListViewItem_o *v35; // x21
  FollowerRootComponent_o *FriendPointUpTypeVals; // x0
  const MethodInfo *v37; // x4
  __int64 v38; // x1
  __int64 v39; // x2
  int32_t v40; // w21
  __int64 v41; // x2
  int32_t v42; // w21
  QuestRestrictionInfo_o *v43; // x0
  struct BattleSetupInfo_o *v44; // x8
  struct BattleSetupInfo_o *v45; // x8
  __int64 v46; // x2
  Il2CppObject *v47; // x20
  struct BattleSetupInfo_o *v48; // x8
  int32_t eventId; // w22
  int64_t v50; // x21
  struct BattleSetupInfo_o *v51; // x8
  UserEventDeckEntity_o *fakeValue; // x20
  __int64 v53; // x2
  __int64 v54; // x8
  int64_t currentCryptoKey; // x8
  System_Nullable_int__o v56; // x0
  int32_t v57; // w1
  struct BattleSetupInfo_o *v58; // x9
  struct QuestRestrictionInfo_o *v59; // x9
  int32_t j; // w21
  PartyOrganizationListViewItem_o *v61; // x0
  PartyOrganizationListViewItem_o *v62; // x22
  __int64 v63; // x2
  struct UserServantEntity_o *userServantEntity; // x8
  System_Int64_array *v65; // x23
  int32_t InitPos_k__BackingField; // w24
  __int128 v67; // q0
  __int128 v68; // q1
  int v69; // w8
  int64_t v70; // x0
  const MethodInfo *v71; // x3
  System_Int64_array *v72; // x1
  FollowerRootComponent_o *v73; // x0
  const MethodInfo *v74; // x4
  __int64 v75; // x2
  UserServantEntity_array *UserServantList; // x21
  unsigned __int64 v77; // x22
  UserServantEntity_o **m_Items; // x25
  struct DeckServant_o *deckInfo; // x8
  struct DeckServantData_array *svts; // x8
  DeckServantData_o *v81; // x26
  const MethodInfo *v82; // x3
  System_Int64_array *v83; // x23
  FollowerRootComponent_o *v84; // x0
  const MethodInfo *v85; // x4
  int32_t k; // w20
  BalanceConfig_c *v87; // x0
  UserServantEntity_o *UserServant; // x0
  UserServantEntity_o *v89; // x21
  System_Int64_array *EquipList; // x0
  FollowerRootComponent_o *v91; // x0
  const MethodInfo *v92; // x4
  struct BattleSetupInfo_o *v93; // x8
  struct BattleSetupInfo_o *v94; // x8
  int32_t v95; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v96; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v97; // [xsp+20h] [xbp-80h] BYREF
  int32_t fpUpDuplicateSum[2]; // [xsp+40h] [xbp-60h] BYREF
  Il2CppObject *entity; // [xsp+48h] [xbp-58h] BYREF

  if ( (byte_5932E5A & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserDeckMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserEventDeckMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_EventQuestMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__TryGetEntity__);
    sub_21FFC50(&LastUsedDeckNumberManager_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_21FFC50(&Method_System_Nullable_int___ctor__);
    sub_21FFC50(&Method_System_Nullable_int__get_HasValue__);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&OptionManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_5932E5A = 1;
  }
  *(_QWORD *)fpUpDuplicateSum = 0;
  entity = 0;
  Instance = (UserServantEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_137;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v5, v6);
  Instance = (UserServantEntity_o *)OptionManager__GetAutoSelectParty(0);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    goto LABEL_9;
  Instance = (UserServantEntity_o *)this->fields.battleSetupInfo;
  if ( !Instance )
    goto LABEL_137;
  if ( *(&Instance->fields.userId.fields.inited + 2) )
    goto LABEL_9;
  v40 = BattleSetupInfo__TargetQuestId((BattleSetupInfo_o *)Instance, 0);
  if ( !*(&LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo, v38, v39);
  Instance = (UserServantEntity_o *)LastUsedDeckNumberManager__GetDeckNumber(v40, 0);
  if ( (int)Instance < 1 )
  {
LABEL_9:
    battleSetupInfo = this->fields.battleSetupInfo;
    if ( !battleSetupInfo || !MasterData_object )
      goto LABEL_137;
    Instance = (UserServantEntity_o *)DataMasterBase_object__object__long___TryGetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                        &entity,
                                        battleSetupInfo->fields.deckId,
                                        (const MethodInfo_3EDFA34 *)Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__TryGetEntity__);
  }
  else
  {
    v42 = (int)Instance;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4, v41);
    if ( !byte_5931D52 )
    {
      sub_21FFC50(&NetworkManager_TypeInfo);
      byte_5931D52 = 1;
    }
    Instance = (UserServantEntity_o *)NetworkManager_TypeInfo;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4, v41);
      Instance = (UserServantEntity_o *)NetworkManager_TypeInfo;
    }
    if ( !MasterData_object )
      goto LABEL_137;
    Instance = (UserServantEntity_o *)UserDeckMaster__getDeck(
                                        (UserDeckMaster_o *)MasterData_object,
                                        *(_QWORD *)(*(_QWORD *)&Instance->fields.portraitLimitCount.fields.fakeValue
                                                  + 64LL),
                                        v42,
                                        0);
    entity = (Il2CppObject *)Instance;
  }
  v15 = this->fields.battleSetupInfo;
  if ( !v15 )
    goto LABEL_137;
  questRestrictionInfo = v15->fields.questRestrictionInfo;
  if ( questRestrictionInfo )
    QuestRestrictionInfo__SetDeckInfo(questRestrictionInfo, (UserDeckEntity_o *)entity, 0);
  this->fields.friendPointCampaignEntityList = 0;
  *(_QWORD *)&this->fields.friendPointUpVal = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.friendPointCampaignEntityList,
    0,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v17, v18);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  Instance = (UserServantEntity_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventQuestMaster___);
  if ( !this->fields.battleSetupInfo )
    goto LABEL_137;
  v20 = (EventQuestMaster_o *)Instance;
  Instance = (UserServantEntity_o *)BattleSetupInfo__TargetQuestId(this->fields.battleSetupInfo, 0);
  v21 = this->fields.battleSetupInfo;
  if ( !v21 )
    goto LABEL_137;
  if ( !v20 )
    goto LABEL_137;
  Instance = (UserServantEntity_o *)EventQuestMaster__GetEnabledEventCampaignForQuest(
                                      v20,
                                      (int32_t)Instance,
                                      v21->fields.questPhase,
                                      0,
                                      7,
                                      0);
  if ( !Master_object )
    goto LABEL_137;
  Data_48886468 = EventCampaignMaster__getData_48886468(
                    (EventCampaignMaster_o *)Master_object,
                    24,
                    (EventEntity_array *)Instance,
                    0);
  this->fields.friendPointCampaignEntityList = Data_48886468;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.friendPointCampaignEntityList,
    (int32_t)Data_48886468,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  tutorialMode = this->fields.tutorialMode;
  v31 = this->fields.battleSetupInfo;
  *(_QWORD *)fpUpDuplicateSum = 0;
  if ( tutorialMode == 4 )
  {
    if ( !v31 )
      goto LABEL_137;
    if ( !v31->fields.isChildFollower )
      goto LABEL_50;
    Instance = (UserServantEntity_o *)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_137;
    if ( *(_QWORD *)&Instance->fields.limitCount.fields.fakeValue )
    {
      for ( i = 0; ; ++i )
      {
        v33 = BalanceConfig_TypeInfo;
        if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v4, v29);
          v33 = BalanceConfig_TypeInfo;
        }
        if ( i >= v33->static_fields->DeckMemberMax )
          break;
        Instance = (UserServantEntity_o *)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !Instance )
          goto LABEL_137;
        Instance = *(UserServantEntity_o **)&Instance->fields.limitCount.fields.fakeValue;
        if ( !Instance )
          goto LABEL_137;
        Member = PartyListViewItem__GetMember((PartyListViewItem_o *)Instance, i, 0);
        if ( Member )
        {
          v35 = Member;
          if ( Member->fields.userServantEntity )
          {
            Instance = (UserServantEntity_o *)PartyOrganizationListViewItem__GetEquipList(Member, 0);
            if ( !v35->fields.userServantEntity )
              goto LABEL_137;
            FriendPointUpTypeVals = (FollowerRootComponent_o *)UserServantEntity__GetFriendPointUpTypeVals(
                                                                 v35->fields.userServantEntity,
                                                                 (System_Int64_array *)Instance,
                                                                 0);
            FollowerRootComponent__GetFriendPointUpValSummary(
              FriendPointUpTypeVals,
              &fpUpDuplicateSum[1],
              fpUpDuplicateSum,
              (System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int___o *)FriendPointUpTypeVals,
              v37);
          }
        }
      }
      goto LABEL_133;
    }
    v31 = this->fields.battleSetupInfo;
  }
  if ( !v31 )
    goto LABEL_137;
LABEL_50:
  v43 = v31->fields.questRestrictionInfo;
  if ( v43 )
  {
    Instance = (UserServantEntity_o *)QuestRestrictionInfo__IsServantNum(v43, 0);
    if ( ((unsigned __int8)Instance & 1) != 0 )
      goto LABEL_58;
    v44 = this->fields.battleSetupInfo;
    if ( !v44 )
      goto LABEL_137;
    Instance = (UserServantEntity_o *)v44->fields.questRestrictionInfo;
    if ( !Instance )
      goto LABEL_137;
    Instance = (UserServantEntity_o *)QuestRestrictionInfo__IsNpcMulitipleOrOnly((QuestRestrictionInfo_o *)Instance, 0);
    if ( ((unsigned __int8)Instance & 1) != 0 )
      goto LABEL_58;
    v45 = this->fields.battleSetupInfo;
    if ( !v45 )
      goto LABEL_137;
    Instance = (UserServantEntity_o *)v45->fields.questRestrictionInfo;
    if ( !Instance )
      goto LABEL_137;
    if ( *(int *)&Instance->fields.transformVal.fields.inited >= 1 )
    {
LABEL_58:
      Instance = (UserServantEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_137;
      v47 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserEventDeckMaster___);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4, v46);
      if ( !byte_5931D52 )
      {
        sub_21FFC50(&NetworkManager_TypeInfo);
        byte_5931D52 = 1;
      }
      Instance = (UserServantEntity_o *)NetworkManager_TypeInfo;
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4, v46);
        Instance = (UserServantEntity_o *)NetworkManager_TypeInfo;
      }
      v48 = this->fields.battleSetupInfo;
      if ( !v48 )
        goto LABEL_137;
      eventId = v48->fields.eventId;
      v50 = *(_QWORD *)(*(_QWORD *)&Instance->fields.portraitLimitCount.fields.fakeValue + 64LL);
      Instance = (UserServantEntity_o *)BattleSetupInfo__TargetQuestId(this->fields.battleSetupInfo, 0);
      v51 = this->fields.battleSetupInfo;
      if ( !v51 )
        goto LABEL_137;
      if ( !v47 )
        goto LABEL_137;
      Instance = (UserServantEntity_o *)UserEventDeckMaster__getDeckList(
                                          (UserEventDeckMaster_o *)v47,
                                          v50,
                                          eventId,
                                          (int32_t)Instance,
                                          v51->fields.questPhase,
                                          0,
                                          0);
      if ( !Instance )
        goto LABEL_137;
      if ( !LODWORD(Instance->fields.id.fields.hiddenValue) )
LABEL_138:
        sub_21FFED4(Instance);
      fakeValue = (UserEventDeckEntity_o *)Instance->fields.id.fields.fakeValue;
      Instance = (UserServantEntity_o *)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_137;
      if ( !*(_QWORD *)&Instance->fields.limitCount.fields.fakeValue )
        goto LABEL_97;
      Instance = (UserServantEntity_o *)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_137;
      v54 = *(_QWORD *)&Instance->fields.limitCount.fields.fakeValue;
      if ( !v54 )
        goto LABEL_137;
      currentCryptoKey = *(_QWORD *)(v54 + 176);
      if ( currentCryptoKey )
      {
        v56 = (System_Nullable_int__o)&v97;
        v57 = *(_DWORD *)(currentCryptoKey + 396);
        v97.fields.currentCryptoKey = 0;
        System_Nullable_int____ctor(v56, v57, (const MethodInfo_45B01D4 *)Method_System_Nullable_int___ctor__);
        currentCryptoKey = v97.fields.currentCryptoKey;
      }
      v58 = this->fields.battleSetupInfo;
      if ( !v58 )
        goto LABEL_137;
      v59 = v58->fields.questRestrictionInfo;
      if ( !v59 )
        goto LABEL_137;
      if ( (_BYTE)currentCryptoKey && v59->fields.eventDeckNum == HIDWORD(currentCryptoKey) )
      {
        for ( j = 0; ; ++j )
        {
          Instance = (UserServantEntity_o *)BalanceConfig_TypeInfo;
          if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v4, v53);
            Instance = (UserServantEntity_o *)BalanceConfig_TypeInfo;
          }
          if ( j >= *(_DWORD *)(*(_QWORD *)&Instance->fields.portraitLimitCount.fields.fakeValue + 172LL) )
            break;
          Instance = (UserServantEntity_o *)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( !Instance )
            goto LABEL_137;
          Instance = *(UserServantEntity_o **)&Instance->fields.limitCount.fields.fakeValue;
          if ( !Instance )
            goto LABEL_137;
          v61 = PartyListViewItem__GetMember((PartyListViewItem_o *)Instance, j, 0);
          if ( v61 )
          {
            v62 = v61;
            if ( v61->fields.userServantEntity )
            {
              Instance = (UserServantEntity_o *)PartyOrganizationListViewItem__GetEquipList(v61, 0);
              userServantEntity = v62->fields.userServantEntity;
              if ( !userServantEntity )
                goto LABEL_137;
              v65 = (System_Int64_array *)Instance;
              InitPos_k__BackingField = v62->fields._InitPos_k__BackingField;
              v67 = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
              v68 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
              v69 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
              *(_OWORD *)&v97.fields.currentCryptoKey = v67;
              *(_OWORD *)&v97.fields.fakeValue = v68;
              if ( !v69 )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4, v63);
              v96 = v97;
              v70 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v96, 0);
              Instance = (UserServantEntity_o *)FollowerRootComponent__GetEquipIdsForGrandSvt(
                                                  this,
                                                  InitPos_k__BackingField,
                                                  v70,
                                                  v71);
              if ( !v62->fields.userServantEntity )
                goto LABEL_137;
              if ( Instance )
                v72 = (System_Int64_array *)Instance;
              else
                v72 = v65;
              v73 = (FollowerRootComponent_o *)UserServantEntity__GetFriendPointUpTypeVals(
                                                 v62->fields.userServantEntity,
                                                 v72,
                                                 0);
              FollowerRootComponent__GetFriendPointUpValSummary(
                v73,
                &fpUpDuplicateSum[1],
                fpUpDuplicateSum,
                (System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int___o *)v73,
                v74);
            }
          }
        }
        if ( fakeValue )
          goto LABEL_127;
      }
      else
      {
LABEL_97:
        if ( fakeValue )
        {
          UserServantList = UserEventDeckEntity__GetUserServantList(fakeValue, 0, 0, 0);
          v77 = 0;
          m_Items = UserServantList->m_Items;
          Instance = (UserServantEntity_o *)BalanceConfig_TypeInfo;
          while ( 1 )
          {
            if ( !Instance->fields.randomLimitCountSupport.fields.hiddenValue )
            {
              j_il2cpp_runtime_class_init_0(Instance, v4, v75);
              Instance = (UserServantEntity_o *)BalanceConfig_TypeInfo;
            }
            if ( (__int64)v77 >= *(int *)(*(_QWORD *)&Instance->fields.portraitLimitCount.fields.fakeValue + 172LL) )
              break;
            deckInfo = fakeValue->fields.deckInfo;
            if ( !deckInfo )
              goto LABEL_137;
            svts = deckInfo->fields.svts;
            if ( !svts )
              goto LABEL_137;
            if ( v77 >= LODWORD(svts->max_length) )
              goto LABEL_138;
            if ( !UserServantList )
              goto LABEL_137;
            if ( v77 >= LODWORD(UserServantList->max_length) )
              goto LABEL_138;
            if ( m_Items[v77] )
            {
              v81 = svts->m_Items[v77];
              Instance = (UserServantEntity_o *)UserEventDeckEntity__GetEquipList(fakeValue, v77, 0);
              if ( !v81 )
                goto LABEL_137;
              v83 = (System_Int64_array *)Instance;
              Instance = (UserServantEntity_o *)FollowerRootComponent__GetEquipIdsForGrandSvt(
                                                  this,
                                                  v81->fields.initPos,
                                                  v81->fields.userSvtId,
                                                  v82);
              if ( Instance )
                v4 = (System_Int64_array *)Instance;
              else
                v4 = v83;
              if ( v77 >= LODWORD(UserServantList->max_length) )
                goto LABEL_138;
              Instance = m_Items[v77];
              if ( !Instance )
                goto LABEL_137;
              v84 = (FollowerRootComponent_o *)UserServantEntity__GetFriendPointUpTypeVals(Instance, v4, 0);
              FollowerRootComponent__GetFriendPointUpValSummary(
                v84,
                &fpUpDuplicateSum[1],
                fpUpDuplicateSum,
                (System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int___o *)v84,
                v85);
              Instance = (UserServantEntity_o *)BalanceConfig_TypeInfo;
            }
            ++v77;
          }
LABEL_127:
          v93 = this->fields.battleSetupInfo;
          if ( v93 )
          {
            Instance = (UserServantEntity_o *)v93->fields.questRestrictionInfo;
            if ( Instance )
            {
              QuestRestrictionInfo__SetDeckInfo_50452736((QuestRestrictionInfo_o *)Instance, fakeValue, 0);
              goto LABEL_133;
            }
          }
LABEL_137:
          sub_21FFECC(Instance, v4);
        }
      }
      v94 = this->fields.battleSetupInfo;
      if ( v94 )
      {
        Instance = (UserServantEntity_o *)v94->fields.questRestrictionInfo;
        if ( Instance )
        {
          QuestRestrictionInfo__ResetDeckInfo((QuestRestrictionInfo_o *)Instance, 0);
          goto LABEL_133;
        }
      }
      goto LABEL_137;
    }
    if ( !entity || QuestRestrictionInfo__IsSupportOnly((QuestRestrictionInfo_o *)Instance, 0) )
      goto LABEL_133;
  }
  else if ( !entity )
  {
    goto LABEL_133;
  }
  for ( k = 0; ; ++k )
  {
    v87 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v4, v29);
      v87 = BalanceConfig_TypeInfo;
    }
    if ( k >= v87->static_fields->DeckMemberMax )
      break;
    Instance = (UserServantEntity_o *)entity;
    if ( !entity )
      goto LABEL_137;
    UserServant = UserDeckEntity__GetUserServant((UserDeckEntity_o *)entity, k, 0);
    if ( UserServant )
    {
      v89 = UserServant;
      Instance = (UserServantEntity_o *)entity;
      if ( !entity )
        goto LABEL_137;
      EquipList = UserDeckEntity__GetEquipList((UserDeckEntity_o *)entity, k, 0);
      v91 = (FollowerRootComponent_o *)UserServantEntity__GetFriendPointUpTypeVals(v89, EquipList, 0);
      FollowerRootComponent__GetFriendPointUpValSummary(
        v91,
        &fpUpDuplicateSum[1],
        fpUpDuplicateSum,
        (System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int___o *)v91,
        v92);
    }
  }
LABEL_133:
  v95 = fpUpDuplicateSum[1];
  this->fields.friendPointUpVal = fpUpDuplicateSum[0] + fpUpDuplicateSum[1];
  this->fields.friendPointUpMaxVal = v95;
}


void FollowerRootComponent___OnClickBack_b__73_0(
        FollowerRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  TerminalPramsManager_c *v8; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_5932E73 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    sub_21FFC50(&StringLiteral_3571/*"CLICK_BACK"*/);
    byte_5932E73 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  CommonUI__CloseConfirmDialog(Instance, 0);
  if ( isDecide )
  {
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v6, v7);
    if ( !byte_5932ADC )
    {
      sub_21FFC50(&TerminalPramsManager_TypeInfo);
      byte_5932ADC = 1;
    }
    v8 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v6, v7);
      v8 = TerminalPramsManager_TypeInfo;
    }
    static_fields = v8->static_fields;
    Instance = (CommonUI_o *)this->fields.myFSM;
    static_fields->_IsAutoResume_k__BackingField = 1;
    if ( Instance )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3571/*"CLICK_BACK"*/, 0);
      return;
    }
LABEL_14:
    sub_21FFECC(Instance, v6);
  }
  this->fields.state = 3;
}


void FollowerRootComponent__beginFinish(FollowerRootComponent_o *this, const MethodInfo *method)
{
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x0
  __int64 v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  FollowerRootComponent_c *v11; // x0
  struct FollowerRootComponent_StaticFields *static_fields; // x0
  __int64 v13; // x1
  __int64 v14; // x2

  if ( (byte_5932E54 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&FollowerRootComponent_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    byte_5932E54 = 1;
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
  v11 = FollowerRootComponent_TypeInfo;
  if ( !*(&FollowerRootComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FollowerRootComponent_TypeInfo, v4, v5);
    v11 = FollowerRootComponent_TypeInfo;
  }
  static_fields = v11->static_fields;
  static_fields->partyOrganizationAtlasCache = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&static_fields->partyOrganizationAtlasCache,
    0,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  operationItemListViewManager = (FollowerSelectItemListViewManager_o *)this->fields.backSkinSprite;
  if ( !operationItemListViewManager
    || (operationItemListViewManager = (FollowerSelectItemListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                                (UnityEngine_Component_o *)operationItemListViewManager,
                                                                                0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)operationItemListViewManager, 0, 0),
        (operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__)) == 0) )
  {
LABEL_14:
    sub_21FFECC(operationItemListViewManager, method);
  }
  AtlasManager__ReleaseUISkin((AtlasManager_o *)operationItemListViewManager, 2, 0, 0);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v13, v14);
  AtlasManager__ReleasePartyOrganizationAtlas(0);
}


void FollowerRootComponent__beginInitialize(FollowerRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_5932E49 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_5932E49 = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v4);
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, (SceneRootComponent_o *)this, 0);
}


void FollowerRootComponent__beginPause(FollowerRootComponent_o *this, const MethodInfo *method)
{
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x0

  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    sub_21FFECC(0, method);
  FollowerSelectItemListViewManager__SaveSortFilter(operationItemListViewManager, 0);
}


void FollowerRootComponent__beginResume(FollowerRootComponent_o *this, Il2CppObject *data, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  FollowerRootComponent_c *v10; // x0
  struct UIAtlas_o *partyOrganizationAtlas; // x21
  struct FollowerRootComponent_StaticFields *static_fields; // x0
  TitleInfoControl_o *titleInfo; // x21
  void *Instance; // x0
  int64_t selectItemNum; // x1
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  __int64 naturalAligment; // x10
  __int64 v23; // x2
  __int64 v24; // x8
  struct BattleSetupInfo_o *battleSetupInfo; // x9
  int64_t v26; // x10
  Il2CppClass *v27; // x8
  __int64 v28; // x9
  Il2CppObject *v29; // x10
  int32_t v30; // w1
  struct BattleSetupInfo_o **p_battleSetupInfo; // x21
  struct BattleSetupInfo_o *v32; // x8
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x20
  __int64 v34; // x2
  __int64 v35; // x2
  int32_t tutorialMode; // w8
  struct BattleSetupInfo_o *v37; // x8
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  struct BattleSetupInfo_o *v39; // x8
  const MethodInfo *v40; // x4
  struct BattleSetupInfo_o *v41; // x8
  const MethodInfo *v42; // x1
  __int64 v43; // x2
  CommonUI_o *v44; // x20
  struct BattleSetupInfo_o *v45; // x8
  __int64 v46; // x1
  __int64 v47; // x2
  OtherUserServantLimitCountManager_c *v48; // x0
  PartyListViewItem_o *v49; // x20
  UnityEngine_Component_o *v50; // x8
  int32_t i; // w21
  FollowerSelectItemListViewManager_o *v52; // x22
  struct BattleSetupInfo_o *v53; // x8
  const MethodInfo *v54; // x4
  struct BattleSetupInfo_o *v55; // x8
  FollowerSelectItemListViewManager_o *v56; // x22
  FollowerSelectItemListViewManager_CallbackFunc_o *v57; // x23
  __int64 v58; // x1
  __int64 v59; // x2
  PartyOrganizationListViewItem_o *Member; // x0
  struct FollowerInfo_o *followerInfo; // x8
  FollowerSelectItemListViewManager_o *v62; // x20
  int64_t userId; // x21
  struct QuestRestrictionInfo_o *v64; // x8
  BalanceConfig_c *v65; // x0
  PartyOrganizationListViewItem_o *v66; // x0
  struct FollowerInfo_o *v67; // x8
  int klass_high; // w11
  int32_t klass; // w12
  int32_t monitor; // w4
  int32_t v71; // w10
  struct BattleSetupInfo_o *v72; // x8

  if ( (byte_5932E52 & 1) == 0 )
  {
    sub_21FFC50(&AvalonSceneManager_TypeInfo);
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&BattleSetupInfo_TypeInfo);
    sub_21FFC50(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_FollowerRootComponent_OnSelectFollowerItem__);
    sub_21FFC50(&FollowerRootComponent_TypeInfo);
    sub_21FFC50(&OtherUserServantLimitCountManager_TypeInfo);
    sub_21FFC50(&RandomLimitCountManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_21FFC50(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_21FFC50(&SupportInfoJump_TypeInfo);
    sub_21FFC50(&TutorialFlag_TypeInfo);
    byte_5932E52 = 1;
  }
  v10 = FollowerRootComponent_TypeInfo;
  partyOrganizationAtlas = this->fields.partyOrganizationAtlas;
  if ( !*(&FollowerRootComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FollowerRootComponent_TypeInfo, data, method);
    v10 = FollowerRootComponent_TypeInfo;
  }
  static_fields = v10->static_fields;
  static_fields->partyOrganizationAtlasCache = partyOrganizationAtlas;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&static_fields->partyOrganizationAtlasCache,
    (int32_t)partyOrganizationAtlas,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  titleInfo = this->fields.titleInfo;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_132;
  if ( *((_BYTE *)Instance + 112) )
  {
    selectItemNum = 0;
    if ( !titleInfo )
      goto LABEL_132;
  }
  else
  {
    selectItemNum = this->fields.tutorialMode != 2;
    if ( !titleInfo )
      goto LABEL_132;
  }
  TitleInfoControl__setBackBtnEnable(titleInfo, selectItemNum, 0);
  Instance = this->fields.operationItemListViewManager;
  if ( !Instance )
    goto LABEL_132;
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
          Instance = this->fields.operationItemListViewManager;
          if ( !Instance )
            goto LABEL_132;
          Instance = FollowerSelectItemListViewManager__GetItem(
                       (FollowerSelectItemListViewManager_o *)Instance,
                       selectItemNum,
                       0);
          if ( Instance )
          {
            v24 = *((_QWORD *)Instance + 15);
            battleSetupInfo = this->fields.battleSetupInfo;
            this->fields.state = 5;
            if ( v24 )
              v26 = *(_QWORD *)(v24 + 16);
            else
              v26 = 0;
            if ( !battleSetupInfo )
              goto LABEL_132;
            klass = (int32_t)data[3].klass;
            klass_high = HIDWORD(data[3].klass);
            monitor = (int32_t)data[4].monitor;
            battleSetupInfo->fields.followerId = v26;
            battleSetupInfo->fields.followerClassId = klass;
            battleSetupInfo->fields.followerGrandGraphId = monitor;
            if ( klass_high <= 0 )
              klass_high = *((_DWORD *)Instance + 68);
            battleSetupInfo->fields.followerSupportDeckId = klass_high;
            if ( v24 )
            {
              v71 = *(_DWORD *)(v24 + 36);
              battleSetupInfo->fields.followerType = 0;
              if ( (v71 | 4) == 5 )
                battleSetupInfo->fields.followerType = v71;
              battleSetupInfo->fields.recommendSupportIdx = 0;
              if ( monitor >= 1 )
              {
                selectItemNum = *(_QWORD *)(v24 + 16);
LABEL_117:
                Instance = this->fields.operationItemListViewManager;
                if ( !Instance )
                  goto LABEL_132;
                Instance = (void *)FollowerSelectItemListViewManager__GetItemIndex_39300268(
                                     (FollowerSelectItemListViewManager_o *)Instance,
                                     selectItemNum,
                                     0,
                                     0,
                                     monitor,
                                     0);
                this->fields.selectItemNum = (int)Instance;
              }
            }
            else
            {
              battleSetupInfo->fields.followerType = 0;
              battleSetupInfo->fields.recommendSupportIdx = 0;
              if ( monitor >= 1 )
              {
                selectItemNum = 0;
                goto LABEL_117;
              }
            }
            if ( this->fields.operationItemListViewManager )
            {
              if ( !byte_5932E92 )
              {
                sub_21FFC50(&FollowerSelectItemListViewManager_TypeInfo);
                byte_5932E92 = 1;
              }
              Instance = FollowerSelectItemListViewManager_TypeInfo;
              if ( !*(&FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo, selectItemNum, v23);
                Instance = FollowerSelectItemListViewManager_TypeInfo;
              }
              v72 = this->fields.battleSetupInfo;
              if ( v72 )
              {
                selectItemNum = (unsigned int)v72->fields.followerClassId;
                if ( *(_DWORD *)(*((_QWORD *)Instance + 23) + 8LL) != (_DWORD)selectItemNum )
                {
                  Instance = this->fields.operationItemListViewManager;
                  if ( !Instance )
                    goto LABEL_132;
                  if ( FollowerSelectItemListViewManager__ChangeClass(
                         (FollowerSelectItemListViewManager_o *)Instance,
                         selectItemNum,
                         0) )
                  {
                    Instance = this->fields.operationItemListViewManager;
                    if ( !Instance )
                      goto LABEL_132;
                    ListViewManager__JumpItem((ListViewManager_o *)Instance, this->fields.selectItemNum, 0);
                  }
                }
                Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
LABEL_132:
            sub_21FFECC(Instance, selectItemNum);
          }
        }
      }
    }
    goto LABEL_39;
  }
  if ( data )
  {
    v27 = (Il2CppClass *)BattleSetupInfo_TypeInfo;
    v28 = BattleSetupInfo_TypeInfo->_2.naturalAligment;
    if ( data->klass->_2.naturalAligment >= (unsigned int)v28 )
    {
      if ( (BattleSetupInfo_c *)data->klass->_2.typeHierarchy[v28 - 1] == BattleSetupInfo_TypeInfo )
        v29 = data;
      else
        v29 = 0;
    }
    else
    {
      v29 = 0;
    }
    this->fields.battleSetupInfo = (struct BattleSetupInfo_o *)v29;
    p_battleSetupInfo = &this->fields.battleSetupInfo;
    if ( data->klass->_2.naturalAligment >= (unsigned int)v28 )
    {
      if ( data->klass->_2.typeHierarchy[v28 - 1] == v27 )
        v30 = (int)data;
      else
        v30 = 0;
    }
    else
    {
      v30 = 0;
    }
  }
  else
  {
    v30 = 0;
    this->fields.battleSetupInfo = 0;
    p_battleSetupInfo = &this->fields.battleSetupInfo;
  }
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_battleSetupInfo, v30, v16, v17, v18, v19, v20, v21);
  v32 = *p_battleSetupInfo;
  if ( *p_battleSetupInfo )
  {
    questRestrictionInfo = v32->fields.questRestrictionInfo;
    if ( !questRestrictionInfo )
      goto LABEL_132;
    if ( !QuestRestrictionInfo__IsMyServantOrNpcRestriction(v32->fields.questRestrictionInfo, 0)
      && (questRestrictionInfo->fields.isNoSupportBattle
       || questRestrictionInfo->fields.isFixedMyServantSingle
       || questRestrictionInfo->fields.isSupportOnlyForceBattle) )
    {
      goto LABEL_97;
    }
    if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, selectItemNum, v34);
    Instance = (void *)TutorialFlag__Get_47357952(102, 0);
    if ( ((unsigned __int8)Instance & 1) == 0 )
    {
      v37 = *p_battleSetupInfo;
      if ( !*p_battleSetupInfo )
        goto LABEL_132;
LABEL_62:
      if ( v37->fields.isChildFollower )
      {
        FollowerRootComponent__ReturnBattleSetupMenu(this, (const MethodInfo *)selectItemNum);
        return;
      }
      goto LABEL_97;
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
          v37 = this->fields.battleSetupInfo;
          if ( !v37 )
            goto LABEL_132;
          goto LABEL_62;
        }
LABEL_60:
        FollowerRootComponent__ReturnSupportList(this, (const MethodInfo *)selectItemNum);
        return;
      }
      Instance = this->fields.battleSetupInfo;
      this->fields.selectItemNum = -1;
      *(_QWORD *)&this->fields.tutorialMode = 0x100000003LL;
      if ( !Instance )
        goto LABEL_132;
      operationItemListViewManager = this->fields.operationItemListViewManager;
      Instance = (void *)BattleSetupInfo__TargetQuestId((BattleSetupInfo_o *)Instance, 0);
      v39 = this->fields.battleSetupInfo;
      if ( !v39 )
        goto LABEL_132;
      if ( !operationItemListViewManager )
        goto LABEL_132;
      FollowerSelectItemListViewManager__CreateList(
        operationItemListViewManager,
        (int32_t)Instance,
        v39->fields.questPhase,
        this->fields.friendPointUpVal,
        this->fields.friendPointUpMaxVal,
        this->fields.friendPointCampaignEntityList,
        v39->fields.questRestrictionInfo,
        0);
      v41 = this->fields.battleSetupInfo;
      if ( !v41 )
        goto LABEL_132;
      Instance = this->fields.followerQuestInfomationDraw;
      if ( !Instance )
        goto LABEL_132;
      FollowerQuestInfomationDraw__SetInfomation(
        (FollowerQuestInfomationDraw_o *)Instance,
        v41->fields.questRestrictionInfo,
        0,
        0,
        v40);
      this->fields.state = 2;
      FollowerRootComponent__OnMoveEnd(this, v42);
LABEL_55:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v44 = (CommonUI_o *)Instance;
      if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, selectItemNum, v43);
      if ( v44 )
      {
        CommonUI__maskFadein(v44, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0);
        SceneRootComponent__sendMessageResume((SceneRootComponent_o *)this, 0);
        return;
      }
      goto LABEL_132;
    }
    if ( this->fields.state == 6 )
      goto LABEL_60;
    v45 = this->fields.battleSetupInfo;
    if ( !v45 )
      goto LABEL_132;
    if ( v45->fields.isChildFollower )
      goto LABEL_135;
    v64 = v45->fields.questRestrictionInfo;
    if ( !v64 )
      goto LABEL_132;
    if ( !v64->fields.isNotTransitionSupportList )
    {
LABEL_135:
      if ( !*(&RandomLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, selectItemNum, v35);
      RandomLimitCountManager__set_EnableRandomLimitCount(0, 0);
      RandomLimitCountManager__set_EnableRandomLimitCount(1, 0);
      if ( !*(&OtherUserServantLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(OtherUserServantLimitCountManager_TypeInfo, v46, v47);
      if ( !byte_5932E91 )
      {
        sub_21FFC50(&OtherUserServantLimitCountManager_TypeInfo);
        byte_5932E91 = 1;
      }
      v48 = OtherUserServantLimitCountManager_TypeInfo;
      if ( !*(&OtherUserServantLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(OtherUserServantLimitCountManager_TypeInfo, v46, v47);
        v48 = OtherUserServantLimitCountManager_TypeInfo;
      }
      v48->static_fields->_IsEnableAdjustSupportLimitCount_k__BackingField = 1;
      OtherUserServantLimitCountManager__Clear(0);
      Instance = SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_132;
      v49 = (PartyListViewItem_o *)*((_QWORD *)Instance + 13);
      Instance = SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_132;
      v50 = (UnityEngine_Component_o *)this->fields.operationItemListViewManager;
      i = *((_DWORD *)Instance + 22);
      this->fields.tutorialState = 0;
      this->fields.selectItemNum = -1;
      if ( !v50 )
        goto LABEL_132;
      Instance = UnityEngine_Component__get_gameObject(v50, 0);
      if ( !Instance )
        goto LABEL_132;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
      Instance = this->fields.battleSetupInfo;
      if ( !Instance )
        goto LABEL_132;
      v52 = this->fields.operationItemListViewManager;
      Instance = (void *)BattleSetupInfo__TargetQuestId((BattleSetupInfo_o *)Instance, 0);
      v53 = this->fields.battleSetupInfo;
      if ( !v53 )
        goto LABEL_132;
      if ( !v52 )
        goto LABEL_132;
      FollowerSelectItemListViewManager__CreateList(
        v52,
        (int32_t)Instance,
        v53->fields.questPhase,
        this->fields.friendPointUpVal,
        this->fields.friendPointUpMaxVal,
        this->fields.friendPointCampaignEntityList,
        v53->fields.questRestrictionInfo,
        0);
      v55 = this->fields.battleSetupInfo;
      if ( !v55 )
        goto LABEL_132;
      Instance = this->fields.followerQuestInfomationDraw;
      if ( !Instance )
        goto LABEL_132;
      FollowerQuestInfomationDraw__SetInfomation(
        (FollowerQuestInfomationDraw_o *)Instance,
        v55->fields.questRestrictionInfo,
        i,
        0,
        v54);
      v56 = this->fields.operationItemListViewManager;
      this->fields.state = 3;
      v57 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_21FFEBC(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
      FollowerSelectItemListViewManager_CallbackFunc___ctor(
        v57,
        (Il2CppObject *)this,
        (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
        0);
      if ( !v56 )
        goto LABEL_132;
      FollowerSelectItemListViewManager__SetMode(v56, 2, v57, 0);
      if ( v49 )
      {
        Instance = this->fields.operationItemListViewManager;
        if ( !Instance )
          goto LABEL_132;
        if ( ListViewManager__get_ItemSum((ListViewManager_o *)Instance, 0) >= 3 )
        {
          if ( i )
          {
LABEL_88:
            if ( i >= 1 )
            {
              Member = PartyListViewItem__GetMember(v49, i - 1, 0);
              if ( Member )
              {
                followerInfo = Member->fields.followerInfo;
                if ( followerInfo )
                {
                  v62 = this->fields.operationItemListViewManager;
                  userId = followerInfo->fields.userId;
                  Instance = PartyOrganizationListViewItem__get_ServantLeader(Member, 0);
                  if ( !Instance )
                    goto LABEL_132;
                  if ( !v62 )
                    goto LABEL_132;
                  Instance = (void *)FollowerSelectItemListViewManager__GetItemIndex(
                                       v62,
                                       userId,
                                       *((_QWORD *)Instance + 5),
                                       0);
                  if ( !this->fields.operationItemListViewManager )
                    goto LABEL_132;
                  ListViewManager__JumpItem(
                    (ListViewManager_o *)this->fields.operationItemListViewManager,
                    (int32_t)Instance,
                    0);
                }
              }
            }
          }
          else
          {
            for ( i = 1; ; ++i )
            {
              v65 = BalanceConfig_TypeInfo;
              if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v58, v59);
                v65 = BalanceConfig_TypeInfo;
              }
              if ( i - 1 >= v65->static_fields->DeckMemberMax )
                break;
              v66 = PartyListViewItem__GetMember(v49, i - 1, 0);
              if ( v66 )
              {
                v67 = v66->fields.followerInfo;
                if ( v67 )
                {
                  if ( Follower__IsNotNpc(v67->fields.type, 0) )
                    goto LABEL_88;
                }
              }
            }
          }
        }
      }
      goto LABEL_55;
    }
LABEL_97:
    FollowerRootComponent__ReturnQuestMenu(this, (const MethodInfo *)selectItemNum);
  }
}


void FollowerRootComponent__beginStartUp(FollowerRootComponent_o *this, Il2CppObject *data, const MethodInfo *method)
{
  void *Instance; // x0
  const MethodInfo *v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  __int64 v19; // x8
  struct BattleSetupInfo_o *v20; // x1
  const MethodInfo *v21; // x1
  __int64 v22; // x2
  Il2CppClass *v23; // x8
  __int64 naturalAligment; // x9
  struct BattleSetupInfo_o *v25; // x10
  int32_t v26; // w1
  struct BattleSetupInfo_o **p_battleSetupInfo; // x0
  const MethodInfo *v28; // x1
  __int64 v29; // x2
  OtherUserServantLimitCountManager_c *v30; // x0
  __int64 v31; // x1
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  FollowerRootComponent_c *v38; // x0
  struct UIAtlas_o *partyOrganizationAtlas; // x20
  struct FollowerRootComponent_StaticFields *static_fields; // x0
  __int64 v41; // x1
  __int64 v42; // x2
  UILabel_o *infomationLabel; // x20
  __int64 v44; // x2
  UnityEngine_GameObject_o *refreshButtonBase; // x20
  __int64 v46; // x2
  __int64 v47; // x8
  __int64 v48; // x1
  __int64 v49; // x2
  ConstantMaster_o *v50; // x20
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  System_Action_c *v52; // x0
  System_Action_o *v53; // x20
  __int64 v54; // x1
  __int64 v55; // x2
  System_Action_c *v56; // x0
  System_Action_o *v57; // x20
  __int64 v58; // x1
  __int64 v59; // x2
  QuestPhaseMaster_o *v60; // x20
  struct BattleSetupInfo_o *v61; // x8
  NpcFollowerMaster_o *v62; // x20
  struct BattleSetupInfo_o *v63; // x8
  struct BattleSetupInfo_o *v64; // x8
  const MethodInfo *v65; // x1
  const MethodInfo *v66; // x4
  struct BattleSetupInfo_o *v67; // x8

  if ( (byte_5932E4A & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&BattleSetupInfo_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_ConstantMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_NpcFollowerMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_21FFC50(&Method_FollowerRootComponent_EndLoadCommonBg__);
    sub_21FFC50(&Method_FollowerRootComponent_EndLoadPartyOrganizationAtlasSimple__);
    sub_21FFC50(&FollowerRootComponent_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&OtherUserServantLimitCountManager_TypeInfo);
    sub_21FFC50(&RandomLimitCountManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_21FFC50(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_21FFC50(&TutorialFlag_TypeInfo);
    sub_21FFC50(&StringLiteral_14140/*"TUTORIAL_SUPPORT_QUEST_ID"*/);
    sub_21FFC50(&StringLiteral_14141/*"TUTORIAL_SUPPORT_QUEST_PHASE"*/);
    sub_21FFC50(&StringLiteral_6714/*"FOLLOWER_SELECT_EXPLANATION2"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5932E4A = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_106;
  if ( PartyOrganizationUtility__ExistsTemporaryPartyInfo((PartyOrganizationUtility_o *)Instance, 0) )
  {
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_106;
    v19 = *((_QWORD *)Instance + 23);
    if ( !v19 )
      goto LABEL_106;
    v20 = *(struct BattleSetupInfo_o **)(v19 + 48);
    this->fields.battleSetupInfo = v20;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.battleSetupInfo,
      (int32_t)v20,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !Instance )
      goto LABEL_106;
    if ( !MissionNotifyManager__IsPause((MissionNotifyManager_o *)Instance, 0) )
    {
      Instance = SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
      if ( !Instance )
        goto LABEL_106;
      MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0);
    }
  }
  else
  {
    if ( data )
    {
      v23 = (Il2CppClass *)BattleSetupInfo_TypeInfo;
      naturalAligment = BattleSetupInfo_TypeInfo->_2.naturalAligment;
      if ( data->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
        v25 = (BattleSetupInfo_c *)data->klass->_2.typeHierarchy[naturalAligment - 1] == BattleSetupInfo_TypeInfo
            ? (struct BattleSetupInfo_o *)data
            : 0LL;
      else
        v25 = 0;
      this->fields.battleSetupInfo = v25;
      p_battleSetupInfo = &this->fields.battleSetupInfo;
      if ( data->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
        v26 = data->klass->_2.typeHierarchy[naturalAligment - 1] == v23 ? (int)data : 0;
      else
        v26 = 0;
    }
    else
    {
      v26 = 0;
      this->fields.battleSetupInfo = 0;
      p_battleSetupInfo = &this->fields.battleSetupInfo;
    }
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_battleSetupInfo, v26, v7, v8, v9, v10, v11, v12);
  }
  if ( !this->fields.battleSetupInfo )
  {
    FollowerRootComponent__ReturnQuestMenu(this, v21);
    return;
  }
  if ( !*(&RandomLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, v21, v22);
  RandomLimitCountManager__set_EnableRandomLimitCount(1, 0);
  if ( !*(&OtherUserServantLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(OtherUserServantLimitCountManager_TypeInfo, v28, v29);
  if ( !byte_5932E91 )
  {
    sub_21FFC50(&OtherUserServantLimitCountManager_TypeInfo);
    byte_5932E91 = 1;
  }
  v30 = OtherUserServantLimitCountManager_TypeInfo;
  if ( !*(&OtherUserServantLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(OtherUserServantLimitCountManager_TypeInfo, v28, v29);
    v30 = OtherUserServantLimitCountManager_TypeInfo;
  }
  v30->static_fields->_IsEnableAdjustSupportLimitCount_k__BackingField = 1;
  FollowerRootComponent__PlayBGM(this, v28);
  v38 = FollowerRootComponent_TypeInfo;
  partyOrganizationAtlas = this->fields.partyOrganizationAtlas;
  if ( !*(&FollowerRootComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FollowerRootComponent_TypeInfo, v31, v32);
    v38 = FollowerRootComponent_TypeInfo;
  }
  static_fields = v38->static_fields;
  static_fields->partyOrganizationAtlasCache = partyOrganizationAtlas;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&static_fields->partyOrganizationAtlasCache,
    (int32_t)partyOrganizationAtlas,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  Instance = this->fields.titleInfo;
  if ( !Instance )
    goto LABEL_106;
  TitleInfoControl__setTitleInfo_46823976((TitleInfoControl_o *)Instance, this->fields.myFSM, 3, 67, 1, 0);
  Instance = this->fields.titleInfo;
  if ( !Instance )
    goto LABEL_106;
  TitleInfoControl__setBackBtnEnable((TitleInfoControl_o *)Instance, 1, 0);
  Instance = this->fields.operationItemListViewManager;
  if ( !Instance )
    goto LABEL_106;
  FollowerSelectItemListViewManager__DestroyList_39287828(
    (FollowerSelectItemListViewManager_o *)Instance,
    this->fields.battleSetupInfo,
    0);
  infomationLabel = this->fields.infomationLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v41, v42);
  Instance = LocalizationManager__Get((System_String_o *)StringLiteral_6714/*"FOLLOWER_SELECT_EXPLANATION2"*/, 0);
  if ( !infomationLabel )
    goto LABEL_106;
  UILabel__set_text(infomationLabel, (System_String_o *)Instance, 0);
  Instance = BalanceConfig_TypeInfo;
  refreshButtonBase = this->fields.refreshButtonBase;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v6, v44);
  if ( !refreshButtonBase )
    goto LABEL_106;
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
    goto LABEL_106;
  BattleSetupInfo__SetSelectableQuests((BattleSetupInfo_o *)Instance, *((_BYTE *)Instance + 73), 0);
  Instance = this->fields.battleSetupInfo;
  if ( !Instance )
    goto LABEL_106;
  if ( *((_QWORD *)Instance + 14) || *((_DWORD *)Instance + 30) )
  {
    if ( *((_BYTE *)Instance + 73) )
    {
      BattleSetupInfo__SetRestriction((BattleSetupInfo_o *)Instance, 1, 0);
      Instance = this->fields.battleSetupInfo;
      if ( !Instance )
        goto LABEL_106;
    }
  }
  v47 = *((_QWORD *)Instance + 11);
  if ( !v47 )
LABEL_106:
    sub_21FFECC(Instance, v6);
  if ( *(_BYTE *)(v47 + 378) )
  {
LABEL_54:
    FollowerRootComponent__StartBattleSetupMenu(this, v6);
    return;
  }
  if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v6, v46);
  if ( TutorialFlag__Get_47357952(102, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_106;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ConstantMaster___);
    if ( !Instance )
      goto LABEL_106;
    v50 = (ConstantMaster_o *)Instance;
    Instance = (void *)ConstantMaster__GetValue((ConstantMaster_o *)Instance, (System_String_o *)StringLiteral_14140/*"TUTORIAL_SUPPORT_QUEST_ID"*/, 0);
    battleSetupInfo = this->fields.battleSetupInfo;
    if ( !battleSetupInfo )
      goto LABEL_106;
    if ( battleSetupInfo->fields.questId == (_DWORD)Instance )
    {
      Instance = (void *)ConstantMaster__GetValue(v50, (System_String_o *)StringLiteral_14141/*"TUTORIAL_SUPPORT_QUEST_PHASE"*/, 0);
      battleSetupInfo = this->fields.battleSetupInfo;
      if ( !battleSetupInfo )
        goto LABEL_106;
      if ( battleSetupInfo->fields.questPhase == (_DWORD)Instance )
        *(_QWORD *)&this->fields.tutorialMode = 0x100000003LL;
    }
  }
  else
  {
    if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v48, v49);
    if ( !TutorialFlag__IsProgressDone(3, 0) )
      goto LABEL_54;
    Instance = this->fields.infomationLabel;
    *(_QWORD *)&this->fields.tutorialMode = 0x100000002LL;
    if ( !Instance )
      goto LABEL_106;
    UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0);
    battleSetupInfo = this->fields.battleSetupInfo;
    if ( !battleSetupInfo )
      goto LABEL_106;
  }
  Instance = battleSetupInfo->fields.questRestrictionInfo;
  if ( !Instance )
    goto LABEL_106;
  if ( !*((_BYTE *)Instance + 403)
    && !*((_BYTE *)Instance + 401)
    && !*((_BYTE *)Instance + 360)
    && !*((_BYTE *)Instance + 379) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
      if ( this->fields.battleSetupInfo )
      {
        v60 = (QuestPhaseMaster_o *)Instance;
        Instance = (void *)BattleSetupInfo__TargetQuestId(this->fields.battleSetupInfo, 0);
        v61 = this->fields.battleSetupInfo;
        if ( v61 )
        {
          if ( v60 )
          {
            Instance = QuestPhaseMaster__GetEntity(v60, (int32_t)Instance, v61->fields.questPhase, 0);
            if ( Instance && *((_BYTE *)Instance + 24) )
            {
              Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                goto LABEL_106;
              Instance = DataManager__GetMasterData_object_(
                           (DataManager_o *)Instance,
                           (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
              if ( !this->fields.battleSetupInfo )
                goto LABEL_106;
              v62 = (NpcFollowerMaster_o *)Instance;
              Instance = (void *)BattleSetupInfo__TargetQuestId(this->fields.battleSetupInfo, 0);
              v63 = this->fields.battleSetupInfo;
              if ( !v63 )
                goto LABEL_106;
              if ( !v62 )
                goto LABEL_106;
              Instance = NpcFollowerMaster__GetQuestFollowerList(v62, (int32_t)Instance, v63->fields.questPhase, 0);
              if ( !Instance )
                goto LABEL_106;
              if ( !*((_QWORD *)Instance + 3) )
              {
                v56 = System_Action_TypeInfo;
                *(_QWORD *)&this->fields.tutorialMode = 0x100000001LL;
                goto LABEL_81;
              }
            }
            v64 = this->fields.battleSetupInfo;
            if ( v64 )
            {
              Instance = v64->fields.questRestrictionInfo;
              if ( Instance )
              {
                if ( QuestRestrictionInfo__IsMyServantOrNpcRestriction((QuestRestrictionInfo_o *)Instance, 0) )
                  this->fields.tutorialMode = 4;
                FollowerRootComponent__UpdateDeckInfomation(this, v65);
                v67 = this->fields.battleSetupInfo;
                if ( v67 )
                {
                  Instance = this->fields.followerQuestInfomationDraw;
                  if ( Instance )
                  {
                    FollowerQuestInfomationDraw__SetInfomation(
                      (FollowerQuestInfomationDraw_o *)Instance,
                      v67->fields.questRestrictionInfo,
                      0,
                      0,
                      v66);
                    Instance = this->fields.backSkinSprite;
                    if ( Instance )
                    {
                      Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
                      if ( Instance )
                      {
                        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
                        v52 = System_Action_TypeInfo;
                        goto LABEL_77;
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
    goto LABEL_106;
  }
  this->fields.tutorialState = 1;
  if ( QuestRestrictionInfo__IsMyServantOrNpcRestriction((QuestRestrictionInfo_o *)Instance, 0) )
  {
    v52 = System_Action_TypeInfo;
    this->fields.isForceFadeOut = 1;
    this->fields.tutorialMode = 4;
LABEL_77:
    v53 = (System_Action_o *)sub_21FFEBC(v52);
    System_Action___ctor(v53, (Il2CppObject *)this, Method_FollowerRootComponent_EndLoadCommonBg__, 0);
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v54, v55);
    AtlasManager__LoadUISkin(v53, 2, 1, 0);
    return;
  }
  v56 = System_Action_TypeInfo;
  this->fields.tutorialMode = 1;
LABEL_81:
  v57 = (System_Action_o *)sub_21FFEBC(v56);
  System_Action___ctor(v57, (Il2CppObject *)this, Method_FollowerRootComponent_EndLoadPartyOrganizationAtlasSimple__, 0);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v58, v59);
  AtlasManager__LoadPartyOrganizationAtlas(v57, 1, 0);
}


// local variable allocation has failed, the output may be wrong!
void FollowerRootComponent__setBattleSetupFollowType(
        FollowerRootComponent_o *this,
        int32_t type,
        const MethodInfo *method)
{
  struct BattleSetupInfo_o *battleSetupInfo; // x8

  battleSetupInfo = this->fields.battleSetupInfo;
  if ( !battleSetupInfo )
    sub_21FFECC(this, *(_QWORD *)&type);
  battleSetupInfo->fields.followerType = 0;
  if ( (type | 4) == 5 )
    battleSetupInfo->fields.followerType = type;
}


void FollowerRootComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5932E74 & 1) == 0 )
  {
    sub_21FFC50(&FollowerRootComponent___c_TypeInfo);
    byte_5932E74 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(FollowerRootComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  FollowerRootComponent___c_TypeInfo->static_fields->__9 = (struct FollowerRootComponent___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)FollowerRootComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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