void __fastcall FollowerRootComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct FollowerRootComponent_StaticFields *static_fields; // x8

  if ( (byte_4B3F60E & 1) == 0 )
  {
    sub_1BDB878(&FollowerRootComponent_TypeInfo, v1);
    byte_4B3F60E = 1;
  }
  static_fields = FollowerRootComponent_TypeInfo->static_fields;
  static_fields->LIST_UPDATE_MESSAGE_FONT_SIZE = 26;
  *(_QWORD *)&static_fields->RETURN_TERMINAL_MESSAGE_FONT_SIZE = 0xA0000001BLL;
  static_fields->RETURN_TERMINAL_MESSAGE_SPACING_Y = 5;
}


void __fastcall FollowerRootComponent___ctor(FollowerRootComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4B3F60D & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_1/*""*/, method);
    byte_4B3F60D = 1;
  }
  this->fields.backupBgmName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BDB81C(&this->fields.backupBgmName);
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0LL);
}


void __fastcall FollowerRootComponent__CallbackFollowerList(
        FollowerRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_4B3F5F2 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_11065/*"REQUEST_OK"*/, result);
    byte_4B3F5F2 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1BDBAD4(0LL, result);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_11065/*"REQUEST_OK"*/, 0LL);
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
    sub_1BDBAD4(0LL, result);
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

  if ( (byte_4B3F605 & 1) == 0 )
  {
    sub_1BDB878(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, result);
    sub_1BDB878(&Method_FollowerRootComponent_OnSelectFollowerItem__, v4);
    sub_1BDB878(&RandomLimitCountManager_TypeInfo, v5);
    byte_4B3F605 = 1;
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
        v11 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1BDBAC4(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo),
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
    sub_1BDBAD4(operationItemListViewManager, v6);
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

  if ( (byte_4B3F5F9 & 1) == 0 )
  {
    sub_1BDB878(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_1BDB878(&Method_FollowerRootComponent_OnSelectFollowerItem__, v3);
    byte_4B3F5F9 = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v5 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1BDBAC4(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
    0LL);
  if ( !operationItemListViewManager )
    sub_1BDBAD4(v6, v7);
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

  if ( (byte_4B3F5FC & 1) == 0 )
  {
    sub_1BDB878(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_1BDB878(&Method_FollowerRootComponent_OnSelectFollowerItem__, v3);
    byte_4B3F5FC = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v5 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1BDBAC4(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
    0LL);
  if ( !operationItemListViewManager )
    sub_1BDBAD4(v6, v7);
  FollowerSelectItemListViewManager__SetMode(operationItemListViewManager, 2, v5, 0LL);
}


void __fastcall FollowerRootComponent__EndCloseTutorialArrow(FollowerRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *tutorialMaskBase2; // x0

  if ( (byte_4B3F607 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_8647/*"MENU_SELECT_ITEM"*/, method);
    byte_4B3F607 = 1;
  }
  tutorialMaskBase2 = this->fields.tutorialMaskBase2;
  if ( !tutorialMaskBase2
    || (UnityEngine_GameObject__SetActive(tutorialMaskBase2, 0, 0LL),
        tutorialMaskBase2 = (UnityEngine_GameObject_o *)this->fields.myFSM,
        this->fields.state = 3,
        !tutorialMaskBase2) )
  {
    sub_1BDBAD4(tutorialMaskBase2, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)tutorialMaskBase2, (System_String_o *)StringLiteral_8647/*"MENU_SELECT_ITEM"*/, 0LL);
}


void __fastcall FollowerRootComponent__EndLoadCommonBg(FollowerRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Component_o *backSkinSprite; // x0
  System_Action_o *v6; // x20

  if ( (byte_4B3F5EA & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&AtlasManager_TypeInfo, v3);
    sub_1BDB878(&Method_FollowerRootComponent_EndLoadOutGameAtlas__, v4);
    byte_4B3F5EA = 1;
  }
  backSkinSprite = (UnityEngine_Component_o *)this->fields.backSkinSprite;
  if ( !backSkinSprite
    || (backSkinSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(backSkinSprite, 0LL)) == 0LL )
  {
    sub_1BDBAD4(backSkinSprite, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)backSkinSprite, 1, 0LL);
  v6 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
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

  if ( (byte_4B3F5EC & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&AtlasManager_TypeInfo, v3);
    sub_1BDB878(&Method_FollowerRootComponent_EndLoadPartyOrganizationAtlas__, v4);
    byte_4B3F5EC = 1;
  }
  v5 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
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

  if ( (byte_4B3F5EB & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&AtlasManager_TypeInfo, v3);
    sub_1BDB878(&Method_FollowerRootComponent_EndLoadEventAtlas__, v4);
    byte_4B3F5EB = 1;
  }
  v5 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
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

  if ( (byte_4B3F5ED & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_1BDB878(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v3);
    byte_4B3F5ED = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    goto LABEL_15;
  FollowerSelectItemListViewManager__AdjustButton(operationItemListViewManager, 0LL);
  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    goto LABEL_15;
  FollowerSelectItemListViewManager__SetClassBoardInfo(operationItemListViewManager, 0LL);
  SceneRootComponent__beginStartUp_40484356((SceneRootComponent_o *)this, 0LL);
  if ( this->fields.isForceFadeOut )
  {
    this->fields.isForceFadeOut = 0;
    operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !operationItemListViewManager )
      goto LABEL_15;
    CommonUI__maskFadeInit((CommonUI_o *)operationItemListViewManager, 0LL);
    operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !operationItemListViewManager )
      goto LABEL_15;
    CommonUI__maskFadeout((CommonUI_o *)operationItemListViewManager, 1, 0.0, 0LL, 0LL);
    FollowerRootComponent__StartBattleSetupMenu(this, v5);
  }
  operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !operationItemListViewManager )
    goto LABEL_15;
  if ( PartyOrganizationUtility__ExistsTemporaryPartyInfo(
         (PartyOrganizationUtility_o *)operationItemListViewManager,
         0LL) )
  {
    operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( operationItemListViewManager )
    {
      CommonUI__maskFadeInit((CommonUI_o *)operationItemListViewManager, 0LL);
      operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( operationItemListViewManager )
      {
        CommonUI__maskFadeout((CommonUI_o *)operationItemListViewManager, 1, 0.0, 0LL, 0LL);
        this->fields.state = 0;
        FollowerRootComponent__Init(this, v6);
        return;
      }
    }
LABEL_15:
    sub_1BDBAD4(operationItemListViewManager, method);
  }
}


void __fastcall FollowerRootComponent__EndOpenTutorialArrow(FollowerRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4B3F60B & 1) == 0 )
  {
    sub_1BDB878(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_1BDB878(&Method_FollowerRootComponent_OnSelectFollowerItem__, v3);
    byte_4B3F60B = 1;
  }
  this->fields.state = 3;
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v5 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1BDBAC4(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
    0LL);
  if ( !operationItemListViewManager )
    sub_1BDBAD4(v6, v7);
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
  if ( (byte_4B3F604 & 1) == 0 )
  {
    sub_1BDB878(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, isDecide);
    sub_1BDB878(&Method_FollowerRootComponent_CallbackRefresh__, v5);
    sub_1BDB878(&Method_FollowerRootComponent_OnSelectFollowerItem__, v6);
    sub_1BDB878(&Method_NetworkManager_getRequest_FollowerRecommendSupportListRequest___, v7);
    sub_1BDB878(&NetworkManager_TypeInfo, v8);
    sub_1BDB878(&NetworkManager_ResultCallbackFunc_TypeInfo, v9);
    this = (FollowerRootComponent_o *)sub_1BDB878(
                                        &Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__,
                                        v10);
    byte_4B3F604 = 1;
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
      this = (FollowerRootComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !this )
        goto LABEL_18;
      LOBYTE(this->fields.operationItemListViewManager) = 1;
    }
    v12 = (NetworkManager_ResultCallbackFunc_o *)sub_1BDBAC4(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v12,
      (Il2CppObject *)v4,
      Method_FollowerRootComponent_CallbackRefresh__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    this = (FollowerRootComponent_o *)NetworkManager__getRequest_object_(
                                        v12,
                                        (const MethodInfo_30BC7D4 *)Method_NetworkManager_getRequest_FollowerRecommendSupportListRequest___);
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
    sub_1BDBAD4(this, isDecide);
  }
  operationItemListViewManager = v4->fields.operationItemListViewManager;
  v16 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1BDBAC4(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
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
  if ( (byte_4B3F603 & 1) == 0 )
  {
    sub_1BDB878(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, isDecide);
    sub_1BDB878(&Method_FollowerRootComponent_CallbackRefresh__, v5);
    sub_1BDB878(&Method_FollowerRootComponent_OnSelectFollowerItem__, v6);
    sub_1BDB878(&Method_NetworkManager_getRequest_FollowerListRequest___, v7);
    sub_1BDB878(&NetworkManager_TypeInfo, v8);
    sub_1BDB878(&NetworkManager_ResultCallbackFunc_TypeInfo, v9);
    this = (FollowerRootComponent_o *)sub_1BDB878(
                                        &Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__,
                                        v10);
    byte_4B3F603 = 1;
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
      this = (FollowerRootComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !this )
        goto LABEL_18;
      LOBYTE(this->fields.operationItemListViewManager) = 1;
    }
    v12 = (NetworkManager_ResultCallbackFunc_o *)sub_1BDBAC4(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v12,
      (Il2CppObject *)v4,
      Method_FollowerRootComponent_CallbackRefresh__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    this = (FollowerRootComponent_o *)NetworkManager__getRequest_object_(
                                        v12,
                                        (const MethodInfo_30BC7D4 *)Method_NetworkManager_getRequest_FollowerListRequest___);
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
    sub_1BDBAD4(this, isDecide);
  }
  operationItemListViewManager = v4->fields.operationItemListViewManager;
  v16 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1BDBAC4(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
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

  if ( (byte_4B3F606 & 1) == 0 )
  {
    sub_1BDB878(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_1BDB878(&Method_FollowerRootComponent_OnSelectFollowerItem__, v3);
    byte_4B3F606 = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v5 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1BDBAC4(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
    0LL);
  if ( !operationItemListViewManager )
    sub_1BDBAD4(v6, v7);
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

  if ( (byte_4B3F5F8 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, isDecide);
    sub_1BDB878(&Method_FollowerRootComponent_EndCloseShowServant__, v4);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4B3F5F8 = 1;
  }
  operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager
    || (ListViewManager__SetScrollView(
          operationItemListViewManager,
          this->fields.openScroll,
          this->fields.openOffset,
          0LL),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v8 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo),
        System_Action___ctor(v8, (Il2CppObject *)this, Method_FollowerRootComponent_EndCloseShowServant__, 0LL),
        !Instance) )
  {
    sub_1BDBAD4(operationItemListViewManager, isDecide);
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

  if ( (byte_4B3F5FB & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, isDecide);
    sub_1BDB878(&Method_FollowerRootComponent_EndCloseShowServantEquip__, v4);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4B3F5FB = 1;
  }
  operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager
    || (ListViewManager__SetScrollView(
          operationItemListViewManager,
          this->fields.openScroll,
          this->fields.openOffset,
          0LL),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v8 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo),
        System_Action___ctor(v8, (Il2CppObject *)this, Method_FollowerRootComponent_EndCloseShowServantEquip__, 0LL),
        !Instance) )
  {
    sub_1BDBAD4(operationItemListViewManager, isDecide);
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

  if ( (byte_4B3F60C & 1) == 0 )
  {
    sub_1BDB878(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_1BDB878(&Method_FollowerRootComponent_OnSelectFollowerItem__, v3);
    byte_4B3F60C = 1;
  }
  this->fields.state = 3;
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v5 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1BDBAC4(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
    0LL);
  if ( !operationItemListViewManager )
    sub_1BDBAD4(v6, v7);
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

  if ( (byte_4B3F609 & 1) == 0 )
  {
    sub_1BDB878(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_1BDB878(&Method_FollowerRootComponent_OnSelectFollowerItem__, v3);
    byte_4B3F609 = 1;
  }
  titleInfo = this->fields.titleInfo;
  this->fields.state = 3;
  if ( !titleInfo
    || (TitleInfoControl__setBackBtnEnable(titleInfo, 0, 0LL),
        operationItemListViewManager = this->fields.operationItemListViewManager,
        v6 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1BDBAC4(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo),
        FollowerSelectItemListViewManager_CallbackFunc___ctor(
          v6,
          (Il2CppObject *)this,
          (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
          0LL),
        !operationItemListViewManager) )
  {
    sub_1BDBAD4(titleInfo, method);
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

  if ( (byte_4B3F60A & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&FSUtility_TypeInfo, v3);
    sub_1BDB878(&Method_FollowerRootComponent_EndOpenTutorialArrow__, v4);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4B3F60A = 1;
  }
  tutorialMaskBase2 = this->fields.tutorialMaskBase2;
  if ( !tutorialMaskBase2 )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(tutorialMaskBase2, 1, 0LL);
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  IsUnderVista = FSUtility__IsUnderVista(0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_FollowerRootComponent_EndOpenTutorialArrow__, 0LL);
  if ( !Instance )
LABEL_12:
    sub_1BDBAD4(tutorialMaskBase2, method);
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
  if ( (byte_4B3F5F5 & 1) == 0 )
  {
    sub_1BDB878(&BalanceConfig_TypeInfo, *(_QWORD *)&initPos);
    sub_1BDB878(&Method_DataManager_GetMaster_UserServantGrandMaster___, v7);
    sub_1BDB878(&DataManager_TypeInfo, v8);
    this = (FollowerRootComponent_o *)sub_1BDB878(&long___TypeInfo, v9);
    byte_4B3F5F5 = 1;
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
  this = (FollowerRootComponent_o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_UserServantGrandMaster___);
  if ( !this )
LABEL_15:
    sub_1BDBAD4(this, *(_QWORD *)&initPos);
  FirstByUserSvtId = UserServantGrandMaster__GetFirstByUserSvtId((UserServantGrandMaster_o *)this, userSvtId, 0LL);
  if ( FirstByUserSvtId )
    return UserServantGrandEntity__GetEquipUserServantIdList(FirstByUserSvtId, 0LL);
  v13 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v13 = BalanceConfig_TypeInfo;
  }
  return (System_Int64_array *)sub_1BDB920(long___TypeInfo, (unsigned int)v13->static_fields->GrandSvtEquipMax);
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

  if ( (byte_4B3F5F4 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_FuncList_TYPE__int___Dispose__, fpUpMax);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_FuncList_TYPE__int___MoveNext__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_FuncList_TYPE__int___get_Current__, v9);
    this = (FollowerRootComponent_o *)sub_1BDB878(
                                        &Method_System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int___GetEnumerator__,
                                        v10);
    byte_4B3F5F4 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  if ( !upTypeVals )
    sub_1BDBAD4(this, fpUpMax);
  System_Collections_Generic_List_ValueTuple_Int32Enum__int____GetEnumerator(
    &v11,
    (System_Collections_Generic_List_T__o *)upTypeVals,
    (const MethodInfo_3683798 *)Method_System_Collections_Generic_List_ValueTuple_FuncList_TYPE__int___GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_ValueTuple_Int32Enum__int____MoveNext(
            &v11,
            (const MethodInfo_3449954 *)Method_System_Collections_Generic_List_Enumerator_ValueTuple_FuncList_TYPE__int___MoveNext__) )
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
    (const MethodInfo_3449950 *)Method_System_Collections_Generic_List_Enumerator_ValueTuple_FuncList_TYPE__int___Dispose__);
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
  struct BattleSetupInfo_o *v19; // x8
  int32_t InitialDisplayClass; // w20
  Il2CppObject *v21; // x20
  struct BattleSetupInfo_o *v22; // x8
  FollowerSelectItemListViewManager_o *v23; // x20
  struct BattleSetupInfo_o *v24; // x8
  PartyOrganizationUtility_o *v25; // x20
  FollowerRootComponent___c_c *v26; // x8
  System_Action_o *_9__50_0; // x21
  Il2CppObject *v28; // x22
  struct FollowerRootComponent___c_StaticFields *static_fields; // x0
  FollowerSelectItemListViewManager_o *v30; // x20
  System_Action_o *v31; // x21
  NetworkManager_ResultCallbackFunc_o *v32; // x20
  FollowerRecommendSupportListRequest_o *v33; // x20
  struct BattleSetupInfo_o *v34; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B3F5F3 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&ClassButtonControlComponent_TypeInfo, v3);
    sub_1BDB878(&Method_DataManager_GetMaster_UserRecommendFollowerMaster___, v4);
    sub_1BDB878(&DataManager_TypeInfo, v5);
    sub_1BDB878(
      &Method_DataMasterBase_UserRecommendFollowerMaster__UserRecommendFollowerEntity__long__TryGetSingleEntity__,
      v6);
    sub_1BDB878(&Method_FollowerRootComponent_CallbackInitRecommendFollowerRequest__, v7);
    sub_1BDB878(&Method_FollowerRootComponent_OnMoveEnd__, v8);
    sub_1BDB878(&Method_NetworkManager_getRequest_FollowerRecommendSupportListRequest___, v9);
    sub_1BDB878(&NetworkManager_TypeInfo, v10);
    sub_1BDB878(&NetworkManager_ResultCallbackFunc_TypeInfo, v11);
    sub_1BDB878(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v12);
    sub_1BDB878(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v13);
    sub_1BDB878(&Method_FollowerRootComponent___c__Init_b__50_0__, v14);
    sub_1BDB878(&FollowerRootComponent___c_TypeInfo, v15);
    sub_1BDB878(&StringLiteral_8647/*"MENU_SELECT_ITEM"*/, v16);
    byte_4B3F5F3 = 1;
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
    v19 = this->fields.battleSetupInfo;
    if ( !v19 || !operationItemListViewManager )
      goto LABEL_50;
    InitialDisplayClass = FollowerSelectItemListViewManager__GetInitialDisplayClass(
                            operationItemListViewManager,
                            battleSetupInfo,
                            v19->fields.questPhase,
                            1,
                            0LL);
    if ( !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
    if ( !ClassButtonControlComponent__IsRecommendSupportGroupType(InitialDisplayClass, 0LL) )
      goto LABEL_19;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    battleSetupInfo = (__int64)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_UserRecommendFollowerMaster___);
    if ( !battleSetupInfo )
      goto LABEL_50;
    if ( !DataMasterBase_object__object__long___TryGetSingleEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)battleSetupInfo,
            &entity,
            (const MethodInfo_32E44C4 *)Method_DataMasterBase_UserRecommendFollowerMaster__UserRecommendFollowerEntity__long__TryGetSingleEntity__) )
      goto LABEL_41;
    battleSetupInfo = (__int64)this->fields.battleSetupInfo;
    if ( !battleSetupInfo )
      goto LABEL_50;
    v21 = entity;
    battleSetupInfo = BattleSetupInfo__TargetQuestId((BattleSetupInfo_o *)battleSetupInfo, 0LL);
    v22 = this->fields.battleSetupInfo;
    if ( !v22 || !v21 )
      goto LABEL_50;
    if ( UserRecommendFollowerEntity__IsEnableSupport(
           (UserRecommendFollowerEntity_o *)v21,
           battleSetupInfo,
           v22->fields.questPhase,
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
      v23 = this->fields.operationItemListViewManager;
      battleSetupInfo = BattleSetupInfo__TargetQuestId((BattleSetupInfo_o *)battleSetupInfo, 0LL);
      v24 = this->fields.battleSetupInfo;
      if ( !v24 )
        goto LABEL_50;
      if ( !v23 )
        goto LABEL_50;
      FollowerSelectItemListViewManager__CreateList(
        v23,
        battleSetupInfo,
        v24->fields.questPhase,
        this->fields.friendPointUpVal,
        this->fields.friendPointUpMaxVal,
        this->fields.friendPointCampaignEntityList,
        v24->fields.questRestrictionInfo,
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
          PlayMakerFSM__SendEvent((PlayMakerFSM_o *)battleSetupInfo, (System_String_o *)StringLiteral_8647/*"MENU_SELECT_ITEM"*/, 0LL);
          return;
        }
      }
      else
      {
LABEL_28:
        battleSetupInfo = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
        if ( !battleSetupInfo )
          goto LABEL_50;
        if ( *(_BYTE *)(battleSetupInfo + 148) )
        {
          battleSetupInfo = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          v25 = (PartyOrganizationUtility_o *)battleSetupInfo;
          v26 = FollowerRootComponent___c_TypeInfo;
          if ( !FollowerRootComponent___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(FollowerRootComponent___c_TypeInfo);
            v26 = FollowerRootComponent___c_TypeInfo;
          }
          _9__50_0 = v26->static_fields->__9__50_0;
          if ( !_9__50_0 )
          {
            if ( !v26->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v26);
              v26 = FollowerRootComponent___c_TypeInfo;
            }
            v28 = (Il2CppObject *)v26->static_fields->__9;
            _9__50_0 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
            System_Action___ctor(_9__50_0, v28, Method_FollowerRootComponent___c__Init_b__50_0__, 0LL);
            static_fields = FollowerRootComponent___c_TypeInfo->static_fields;
            static_fields->__9__50_0 = _9__50_0;
            battleSetupInfo = sub_1BDB81C(&static_fields->__9__50_0);
          }
          if ( !v25 )
            goto LABEL_50;
          PartyOrganizationUtility__OpenQuestUseItemExpiredDialog(v25, _9__50_0, 0LL);
        }
        this->fields.state = 2;
        v30 = this->fields.operationItemListViewManager;
        v31 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
        System_Action___ctor(v31, (Il2CppObject *)this, Method_FollowerRootComponent_OnMoveEnd__, 0LL);
        if ( v30 )
        {
          FollowerSelectItemListViewManager__SetMode_31783368(v30, 1, v31, 0LL);
          return;
        }
      }
    }
    else
    {
LABEL_41:
      v32 = (NetworkManager_ResultCallbackFunc_o *)sub_1BDBAC4(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v32,
        (Il2CppObject *)this,
        Method_FollowerRootComponent_CallbackInitRecommendFollowerRequest__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      battleSetupInfo = (__int64)NetworkManager__getRequest_object_(
                                   v32,
                                   (const MethodInfo_30BC7D4 *)Method_NetworkManager_getRequest_FollowerRecommendSupportListRequest___);
      if ( this->fields.battleSetupInfo )
      {
        v33 = (FollowerRecommendSupportListRequest_o *)battleSetupInfo;
        battleSetupInfo = BattleSetupInfo__TargetQuestId(this->fields.battleSetupInfo, 0LL);
        v34 = this->fields.battleSetupInfo;
        if ( v34 )
        {
          if ( v33 )
          {
            FollowerRecommendSupportListRequest__beginRequest(v33, 0, battleSetupInfo, v34->fields.questPhase, 0LL);
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
    sub_1BDBAD4(battleSetupInfo, method);
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

  if ( (byte_4B3F608 & 1) == 0 )
  {
    sub_1BDB878(&BattleRootComponent_TypeInfo, method);
    sub_1BDB878(&CommonConfirmDialog_ClickDelegate_TypeInfo, v3);
    sub_1BDB878(&Method_UnityEngine_Component_GetComponentsInChildren_Camera___, v4);
    sub_1BDB878(&Method_FollowerRootComponent_OnClickBack__, v5);
    sub_1BDB878(&Method_FollowerRootComponent__OnClickBack_b__73_0__, v6);
    sub_1BDB878(&FollowerRootComponent_TypeInfo, v7);
    sub_1BDB878(&LocalizationManager_TypeInfo, v8);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v9);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_1BDB878(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v11);
    sub_1BDB878(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v12);
    sub_1BDB878(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v13);
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v14);
    sub_1BDB878(&StringLiteral_6452/*"FOLLOWER_SELECT_BACK_TO_QUEST_NO_AP_CONSUME_AP0"*/, v15);
    sub_1BDB878(&StringLiteral_3471/*"CLICK_BACK"*/, v16);
    sub_1BDB878(&StringLiteral_6451/*"FOLLOWER_SELECT_BACK_TO_QUEST_NO_AP_CONSUME"*/, v17);
    sub_1BDB878(&StringLiteral_6450/*"FOLLOWER_SELECT_BACK_TITLE"*/, v18);
    sub_1BDB878(&StringLiteral_3720/*"COMMON_CONFIRM_NO"*/, v19);
    sub_1BDB878(&StringLiteral_3725/*"COMMON_CONFIRM_YES"*/, v20);
    sub_1BDB878(&StringLiteral_1/*""*/, v21);
    sub_1BDB878(&StringLiteral_3472/*"CLICK_BACK_BATTLE_SETUP"*/, v22);
    byte_4B3F608 = 1;
  }
  if ( this->fields.state == 3 && !this->fields.tutorialState )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( !Instance )
      goto LABEL_62;
    if ( !*((_BYTE *)Instance + 148) )
      goto LABEL_34;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
        v28 = (_QWORD *)sub_1BDB890(Method_FollowerRootComponent_OnClickBack__);
      v29 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v28, v28[4]);
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
                PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3471/*"CLICK_BACK"*/, 0LL);
                Instance = UnityEngine_Component__get_transform(v27, 0LL);
                if ( Instance )
                {
                  Instance = UnityEngine_Component__GetComponentsInChildren_object__50507220(
                               (UnityEngine_Component_o *)Instance,
                               (const MethodInfo_302ADD4 *)Method_UnityEngine_Component_GetComponentsInChildren_Camera___);
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
                        sub_1BDBADC(Instance, v24, v31);
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
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( !Instance )
        goto LABEL_62;
      if ( AvalonSceneManager__IsStackScene((AvalonSceneManager_o *)Instance, 0LL) )
        goto LABEL_40;
      Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_62;
      if ( *((int *)Instance + 14) > 0 )
        goto LABEL_40;
      Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_62;
      if ( *((_BYTE *)Instance + 174) )
      {
LABEL_40:
        v35 = Method_FollowerRootComponent_OnClickBack__;
        if ( (*((_BYTE *)Method_FollowerRootComponent_OnClickBack__ + 83) & 2) != 0 )
          v35 = (_QWORD *)sub_1BDB890(Method_FollowerRootComponent_OnClickBack__);
        v36 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v35, v35[4]);
        OverwriteAssetSoundName__PlaySystemSe(v36, 1, 0, 0LL);
        battleSetupInfo = this->fields.battleSetupInfo;
        this->fields.state = 4;
        if ( battleSetupInfo )
        {
          Instance = this->fields.myFSM;
          if ( Instance )
          {
            if ( battleSetupInfo->fields.isChildFollower )
              v38 = &StringLiteral_3472/*"CLICK_BACK_BATTLE_SETUP"*/;
            else
              v38 = &StringLiteral_3471/*"CLICK_BACK"*/;
            PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v38, 0LL);
            return;
          }
        }
      }
      else
      {
        v39 = Method_FollowerRootComponent_OnClickBack__;
        if ( (*((_BYTE *)Method_FollowerRootComponent_OnClickBack__ + 83) & 2) != 0 )
          v39 = (_QWORD *)sub_1BDB890(Method_FollowerRootComponent_OnClickBack__);
        v40 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v39, v39[4]);
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
        v43 = (System_String_o **)&StringLiteral_6451/*"FOLLOWER_SELECT_BACK_TO_QUEST_NO_AP_CONSUME"*/;
        if ( lastPlayQuestConsumeAp <= 0 )
          v43 = (System_String_o **)&StringLiteral_6452/*"FOLLOWER_SELECT_BACK_TO_QUEST_NO_AP_CONSUME_AP0"*/;
        v44 = LocalizationManager__Get(*v43, 0LL);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v45 = LocalizationManager__Get((System_String_o *)StringLiteral_6450/*"FOLLOWER_SELECT_BACK_TITLE"*/, 0LL);
        v46 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v47 = LocalizationManager__Get((System_String_o *)StringLiteral_3725/*"COMMON_CONFIRM_YES"*/, 0LL);
        v48 = LocalizationManager__Get((System_String_o *)StringLiteral_3720/*"COMMON_CONFIRM_NO"*/, 0LL);
        v49 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BDBAC4(CommonConfirmDialog_ClickDelegate_TypeInfo);
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
    sub_1BDBAD4(Instance, v24);
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

  if ( (byte_4B3F601 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, v3);
    sub_1BDB878(&Method_FollowerRootComponent_EndTutorialFollowerCommonGuide__, v4);
    sub_1BDB878(&Method_FollowerRootComponent_EndTutorialFollowerGuideNotification1__, v5);
    sub_1BDB878(&Method_FollowerRootComponent_EndTutorialFollowerGuideNotification2__, v6);
    sub_1BDB878(&Method_FollowerRootComponent_OnSelectFollowerItem__, v7);
    sub_1BDB878(&LocalizationManager_TypeInfo, v8);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_1BDB878(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v10);
    sub_1BDB878(&StringLiteral_13560/*"TUTORIAL_MESSAGE_FOLLOWER2"*/, v11);
    sub_1BDB878(&StringLiteral_13559/*"TUTORIAL_MESSAGE_FOLLOWER1"*/, v12);
    byte_4B3F601 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( this->fields.tutorialState == 1 )
    {
      tutorialMode = this->fields.tutorialMode;
      *(_QWORD *)&this->fields.tutorialState = 0x200000002LL;
      if ( tutorialMode == 3 )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v15 = LocalizationManager__Get((System_String_o *)StringLiteral_13560/*"TUTORIAL_MESSAGE_FOLLOWER2"*/, 0LL);
        v16 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
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
        sub_1BDBAD4(battleSetupInfo, method);
      }
      if ( tutorialMode == 2 )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v15 = LocalizationManager__Get((System_String_o *)StringLiteral_13559/*"TUTORIAL_MESSAGE_FOLLOWER1"*/, 0LL);
        v16 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
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
          v23 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
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
      v26 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1BDBAC4(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
      FollowerSelectItemListViewManager_CallbackFunc___ctor(
        v26,
        (Il2CppObject *)this,
        (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
        0LL);
      if ( !operationItemListViewManager )
        goto LABEL_27;
      FollowerSelectItemListViewManager__SetMode(operationItemListViewManager, 2, v26, 0LL);
      battleSetupInfo = (BattleSetupInfo_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
  __int64 v48; // x8
  __int64 v49; // x20
  __int64 v50; // x2
  SkillInfo_o *v51; // x22
  _QWORD *v52; // x0
  System_Reflection_MethodBase_o *v53; // x0
  Il2CppObject *v54; // x20
  System_String_o *v55; // x20
  System_String_o *v56; // x21
  __int64 v57; // x2
  __int64 v58; // x3
  __int64 v59; // x4
  Il2CppObject *v60; // x0
  System_String_o *v61; // x0
  int32_t v62; // w20
  _QWORD *v63; // x0
  System_Reflection_MethodBase_o *v64; // x0
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v66; // x0
  intptr_t v67; // w2
  _QWORD *v68; // x0
  System_Reflection_MethodBase_o *v69; // x0
  __int64 v70; // x20
  SkillInfo_o *v71; // x24
  Il2CppObject *Entity; // x21
  FollowerRootComponent_o *v73; // x20
  System_String_o *v74; // x21
  System_String_o *v75; // x22
  __int64 v76; // x2
  __int64 v77; // x3
  __int64 v78; // x4
  Il2CppObject *v79; // x0
  System_String_o *v80; // x0
  __int64 v81; // x2
  __int64 v82; // x3
  __int64 v83; // x4
  FollowerRootComponent_o *v84; // x21
  Il2CppObject *v85; // x0
  System_String_o *v86; // x0
  int32_t tutorialMode; // w21
  System_String_o *v88; // x20
  _QWORD *v89; // x0
  System_Reflection_MethodBase_o *v90; // x0
  bool v91; // w22
  CommonConfirmDialog_ClickDelegate_o *v92; // x21
  bool v93; // w20
  CommonConfirmDialog_o *commonConfirmDialog; // x19
  System_String_o *v95; // x20
  FollowerRootComponent_o *v96; // x22
  int32_t v97; // w8
  _QWORD *v98; // x0
  System_Reflection_MethodBase_o *v99; // x0
  FollowerRootComponent_o *v100; // x20
  FollowerRootComponent_o *v101; // x20
  FollowerRootComponent___c_c *v102; // x8
  System_Action_o *_9__67_0; // x21
  Il2CppObject *v104; // x22
  struct FollowerRootComponent___c_StaticFields *static_fields; // x0
  _QWORD *v106; // x0
  System_Reflection_MethodBase_o *v107; // x0
  int32_t v108; // w8
  __int64 *v109; // x8
  FollowerRootComponent_o *v110; // x20
  _QWORD *v111; // x0
  System_Reflection_MethodBase_o *v112; // x0
  const MethodInfo *v113; // x2
  _QWORD *v114; // x0
  System_Reflection_MethodBase_o *v115; // x0
  int32_t v116; // w8
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  NetworkManager_ResultCallbackFunc_o *v118; // x20
  FollowerRecommendSupportListRequest_o *v119; // x20
  struct BattleSetupInfo_o *v120; // x8
  Il2CppObject *Instance; // x20
  System_String_o *v122; // x21
  System_String_o *v123; // x22
  System_Action_o *v124; // x23
  int friendPointUpVal_low; // w20
  _QWORD *v126; // x0
  FollowerSelectItemListViewItem_o *v127; // x20
  __int64 v128; // x22
  __int64 v129; // x23
  EquipTargetInfo_o *EquipTargetInfoByEquipIdx; // x0
  EquipTargetInfo_o *EquipInfo; // x21
  __int64 v132; // x22
  __int64 v133; // x23
  __int64 v134; // x22
  __int64 v135; // x23
  _QWORD *v136; // x0
  System_Reflection_MethodBase_o *v137; // x0
  const MethodInfo *v138; // x3
  int32_t v139; // w2
  _QWORD *v140; // x0
  FollowerSelectItemListViewManager_CallbackFunc_o *v141; // x21
  int32_t v142; // w1
  _QWORD *v143; // x0
  System_Reflection_MethodBase_o *v144; // x0
  Il2CppObject *v145; // x20
  System_Action_o *v146; // x21
  int m_CancellationTokenSource; // [xsp+40h] [xbp-70h] BYREF
  int32_t lv; // [xsp+44h] [xbp-6Ch] BYREF
  System_String_o *detail; // [xsp+48h] [xbp-68h] BYREF
  System_String_o *name; // [xsp+50h] [xbp-60h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+58h] [xbp-58h] BYREF
  System_String_o *v152; // [xsp+60h] [xbp-50h] BYREF
  System_String_o *v153; // [xsp+68h] [xbp-48h] BYREF
  SkillInfo_array *v154; // [xsp+78h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v155; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v156; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v157; // 0:x0.16

  v8 = this;
  if ( (byte_4B3F602 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_1BDB878(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, v9);
    sub_1BDB878(&CommonConfirmDialog_ClickDelegate_TypeInfo, v10);
    sub_1BDB878(&Method_DataManager_GetMasterData_SkillLvMaster___, v11);
    sub_1BDB878(&Method_DataManager_GetMasterData_SkillMaster___, v12);
    sub_1BDB878(&Method_DataManager_GetMaster_SkillLvMaster___, v13);
    sub_1BDB878(&Method_DataManager_GetMaster_SkillMaster___, v14);
    sub_1BDB878(&DataManager_TypeInfo, v15);
    sub_1BDB878(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v16);
    sub_1BDB878(&FollowerListRequest_TypeInfo, v17);
    sub_1BDB878(&FollowerRecommendSupportListRequest_TypeInfo, v18);
    sub_1BDB878(&Method_FollowerRootComponent_CallbackRefresh__, v19);
    sub_1BDB878(&Method_FollowerRootComponent_EndCloseTutorialArrow__, v20);
    sub_1BDB878(&Method_FollowerRootComponent_EndRecommendRefreshConfirm__, v21);
    sub_1BDB878(&Method_FollowerRootComponent_EndRefreshConfirm__, v22);
    sub_1BDB878(&Method_FollowerRootComponent_EndRefreshRest__, v23);
    sub_1BDB878(&Method_FollowerRootComponent_OnSelectFollowerItem__, v24);
    sub_1BDB878(&FollowerRootComponent_TypeInfo, v25);
    sub_1BDB878(&int_TypeInfo, v26);
    sub_1BDB878(&LocalizationManager_TypeInfo, v27);
    sub_1BDB878(&Method_NetworkManager_getRequest_FollowerRecommendSupportListRequest___, v28);
    sub_1BDB878(&NetworkManager_TypeInfo, v29);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v30);
    sub_1BDB878(&NetworkManager_ResultCallbackFunc_TypeInfo, v31);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v32);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v33);
    sub_1BDB878(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v34);
    sub_1BDB878(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v35);
    sub_1BDB878(&Method_FollowerRootComponent___c__OnSelectFollowerItem_b__67_0__, v36);
    sub_1BDB878(&FollowerRootComponent___c_TypeInfo, v37);
    sub_1BDB878(&StringLiteral_6475/*"FOLLOWER_SELECT_REFRESH_TITLE"*/, v38);
    sub_1BDB878(&StringLiteral_8647/*"MENU_SELECT_ITEM"*/, v39);
    sub_1BDB878(&StringLiteral_8656/*"MENU_SHOW_SUPPORT"*/, v40);
    sub_1BDB878(&StringLiteral_6472/*"FOLLOWER_SELECT_REFRESH_MESSAGE"*/, v41);
    sub_1BDB878(&StringLiteral_115/*" "*/, v42);
    sub_1BDB878(&StringLiteral_6473/*"FOLLOWER_SELECT_REFRESH_REST_MESSAGE"*/, v43);
    sub_1BDB878(&StringLiteral_8542/*"MASTER_EQSKILL_LV_TXT"*/, v44);
    sub_1BDB878(&StringLiteral_2898/*"BATTLE_SKILLCHARGETURN"*/, v45);
    sub_1BDB878(&StringLiteral_1/*""*/, v46);
    this = (FollowerRootComponent_o *)sub_1BDB878(&StringLiteral_6474/*"FOLLOWER_SELECT_REFRESH_REST_TITLE"*/, v47);
    byte_4B3F602 = 1;
  }
  v154 = 0LL;
  v152 = 0LL;
  v153 = 0LL;
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
        goto LABEL_184;
      this = (FollowerRootComponent_o *)FollowerSelectItemListViewManager__GetItem(
                                          (FollowerSelectItemListViewManager_o *)this,
                                          n,
                                          0LL);
      if ( !this )
        goto LABEL_184;
      v110 = this;
      if ( LOBYTE(this->fields.friendPointUpVal)
        || FollowerSelectItemListViewItem__get_SvtId((FollowerSelectItemListViewItem_o *)this, 0LL) <= 0 )
      {
        goto LABEL_162;
      }
      v111 = Method_FollowerRootComponent_OnSelectFollowerItem__;
      if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
        v111 = (_QWORD *)sub_1BDB890(Method_FollowerRootComponent_OnSelectFollowerItem__);
      v112 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v111, v111[4]);
      OverwriteAssetSoundName__PlaySystemSe(v112, 0, 0, 0LL);
      FollowerRootComponent__SelectShowServant(v8, (FollowerSelectItemListViewItem_o *)v110, v113);
      return;
    case 2:
    case 3:
    case 4:
      v68 = Method_FollowerRootComponent_OnSelectFollowerItem__;
      if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
        v68 = (_QWORD *)sub_1BDB890(Method_FollowerRootComponent_OnSelectFollowerItem__);
      v69 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v68, v68[4]);
      OverwriteAssetSoundName__PlaySystemSe(v69, 0, 0, 0LL);
      this = (FollowerRootComponent_o *)v8->fields.operationItemListViewManager;
      if ( !this )
        goto LABEL_184;
      this = (FollowerRootComponent_o *)FollowerSelectItemListViewManager__GetItem(
                                          (FollowerSelectItemListViewManager_o *)this,
                                          v8->fields.selectItemNum,
                                          0LL);
      v70 = kind == 3 ? 1LL : 2LL * (kind == 4);
      if ( !this )
        goto LABEL_184;
      this = (FollowerRootComponent_o *)FollowerSelectItemListViewItem__GetSkillInfo(
                                          (FollowerSelectItemListViewItem_o *)this,
                                          &v154,
                                          0LL);
      if ( !v154 )
        goto LABEL_184;
      if ( (unsigned int)v70 >= v154->max_length )
        goto LABEL_185;
      v71 = v154->m_Items[v70];
      if ( !v71 || v71->fields.id < 1 || v71->fields.lv < 1 )
        goto LABEL_153;
      this = (FollowerRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_184;
      this = (FollowerRootComponent_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_303395C *)Method_DataManager_GetMasterData_SkillMaster___);
      if ( !this )
        goto LABEL_184;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                 v71->fields.id,
                 (const MethodInfo_32E1E3C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      this = (FollowerRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_184;
      this = (FollowerRootComponent_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_303395C *)Method_DataManager_GetMasterData_SkillLvMaster___);
      if ( !this )
        goto LABEL_184;
      this = (FollowerRootComponent_o *)SkillLvMaster__GetEntity(
                                          (SkillLvMaster_o *)this,
                                          v71->fields.id,
                                          v71->fields.lv,
                                          0LL);
      if ( !Entity )
        goto LABEL_184;
      v73 = this;
      SkillEntity__getSkillMessageInfo((SkillEntity_o *)Entity, &v153, &v152, v71->fields.lv, 0LL);
      v74 = v153;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v75 = LocalizationManager__Get((System_String_o *)StringLiteral_8542/*"MASTER_EQSKILL_LV_TXT"*/, 0LL);
      lv = v71->fields.lv;
      v79 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv, v76, v77, v78);
      v80 = System_String__Format(v75, v79, 0LL);
      v153 = System_String__Concat_62610508(v74, (System_String_o *)StringLiteral_115/*" "*/, v80, 0LL);
      this = (FollowerRootComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2898/*"BATTLE_SKILLCHARGETURN"*/, 0LL);
      if ( !v73 )
        goto LABEL_184;
      v84 = this;
      m_CancellationTokenSource = (int)v73->fields.m_CancellationTokenSource;
      v85 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &m_CancellationTokenSource, v81, v82, v83);
      v86 = System_String__Format((System_String_o *)v84, v85, 0LL);
      tutorialMode = v8->fields.tutorialMode;
      v88 = v86;
      this = (FollowerRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_184;
      if ( tutorialMode == 3 )
        CommonUI__OpenDetailLongInfoDialogOnFade((CommonUI_o *)this, v153, v88, v152, 0LL);
      else
        CommonUI__OpenDetailLongInfoDialog((CommonUI_o *)this, v153, v88, v152, 1, 0, 0LL);
LABEL_153:
      operationItemListViewManager = v8->fields.operationItemListViewManager;
      v66 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1BDBAC4(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
      v67 = (int)Method_FollowerRootComponent_OnSelectFollowerItem__;
      goto LABEL_167;
    case 5:
      if ( !v8->fields.tutorialState )
      {
        this = (FollowerRootComponent_o *)v8->fields.operationItemListViewManager;
        if ( !this )
          goto LABEL_184;
        this = (FollowerRootComponent_o *)FollowerSelectItemListViewManager__GetItem(
                                            (FollowerSelectItemListViewManager_o *)this,
                                            n,
                                            0LL);
        if ( !this )
          goto LABEL_184;
        friendPointUpVal_low = LOBYTE(this->fields.friendPointUpVal);
        v126 = Method_FollowerRootComponent_OnSelectFollowerItem__;
        if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
          v126 = (_QWORD *)sub_1BDB890(Method_FollowerRootComponent_OnSelectFollowerItem__);
        v99 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v126, v126[4]);
        if ( !friendPointUpVal_low )
          goto LABEL_134;
LABEL_165:
        OverwriteAssetSoundName__PlaySystemSe(v99, 2, 0, 0LL);
LABEL_166:
        operationItemListViewManager = v8->fields.operationItemListViewManager;
        v66 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1BDBAC4(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
        v67 = (int)Method_FollowerRootComponent_OnSelectFollowerItem__;
LABEL_167:
        v141 = v66;
        FollowerSelectItemListViewManager_CallbackFunc___ctor(v66, (Il2CppObject *)v8, v67, 0LL);
        if ( !operationItemListViewManager )
          goto LABEL_184;
        v142 = 2;
        goto LABEL_169;
      }
      v97 = v8->fields.tutorialMode;
      if ( v97 == 3 )
      {
        v143 = Method_FollowerRootComponent_OnSelectFollowerItem__;
        if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
          v143 = (_QWORD *)sub_1BDB890(Method_FollowerRootComponent_OnSelectFollowerItem__);
        v144 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v143, v143[4]);
        OverwriteAssetSoundName__PlaySystemSe(v144, 2, 0, 0LL);
        goto LABEL_174;
      }
      if ( v97 == 2 )
      {
        v98 = Method_FollowerRootComponent_OnSelectFollowerItem__;
        if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
          v98 = (_QWORD *)sub_1BDB890(Method_FollowerRootComponent_OnSelectFollowerItem__);
        v99 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v98, v98[4]);
LABEL_134:
        OverwriteAssetSoundName__PlaySystemSe(v99, 0, 0, 0LL);
        this = (FollowerRootComponent_o *)v8->fields.myFSM;
        if ( this )
        {
          v109 = &StringLiteral_8656/*"MENU_SHOW_SUPPORT"*/;
          goto LABEL_136;
        }
        goto LABEL_184;
      }
      return;
    case 6:
      if ( !v8->fields.tutorialState )
      {
        this = (FollowerRootComponent_o *)v8->fields.operationItemListViewManager;
        if ( !this )
          goto LABEL_184;
        this = (FollowerRootComponent_o *)FollowerSelectItemListViewManager__GetItem(
                                            (FollowerSelectItemListViewManager_o *)this,
                                            n,
                                            0LL);
        if ( !this )
          goto LABEL_184;
        v127 = (FollowerSelectItemListViewItem_o *)this;
        if ( !FollowerSelectItemListViewItem__get_ServantLeader((FollowerSelectItemListViewItem_o *)this, 0LL) )
          goto LABEL_154;
        this = (FollowerRootComponent_o *)FollowerSelectItemListViewItem__get_ServantLeader(v127, 0LL);
        if ( !this )
          goto LABEL_184;
        v129 = *(_QWORD *)&this->fields.manualWidth;
        v128 = *(_QWORD *)&this->fields.kind;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v155.fields.currentCryptoKey = v129;
        *(_QWORD *)&v155.fields.fakeValue = v128;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v155, 0LL) >= 1 )
        {
          this = (FollowerRootComponent_o *)FollowerSelectItemListViewItem__get_ServantLeader(v127, 0LL);
          if ( !this )
            goto LABEL_184;
          EquipTargetInfoByEquipIdx = ServantLeaderInfo__GetEquipTargetInfoByEquipIdx(
                                        (ServantLeaderInfo_o *)this,
                                        param,
                                        0LL);
          if ( !EquipTargetInfoByEquipIdx )
            goto LABEL_162;
          EquipInfo = EquipTargetInfoByEquipIdx;
          v133 = *(_QWORD *)&EquipTargetInfoByEquipIdx->fields.svtId.fields.currentCryptoKey;
          v132 = *(_QWORD *)&EquipTargetInfoByEquipIdx->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v156.fields.currentCryptoKey = v133;
          *(_QWORD *)&v156.fields.fakeValue = v132;
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v156, 0LL) < 1 )
            goto LABEL_162;
          this = (FollowerRootComponent_o *)FollowerSelectItemListViewItem__get_ServantLeader(v127, 0LL);
          if ( !this )
            goto LABEL_184;
          if ( ServantLeaderInfo__IsHideEquip((ServantLeaderInfo_o *)this, 0LL) )
            goto LABEL_162;
        }
        else
        {
LABEL_154:
          EquipInfo = FollowerSelectItemListViewItem__get_EquipInfo(v127, 0LL);
          if ( !EquipInfo )
            goto LABEL_162;
        }
        v135 = *(_QWORD *)&EquipInfo->fields.svtId.fields.currentCryptoKey;
        v134 = *(_QWORD *)&EquipInfo->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v157.fields.currentCryptoKey = v135;
        *(_QWORD *)&v157.fields.fakeValue = v134;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v157, 0LL) >= 1 )
        {
          v136 = Method_FollowerRootComponent_OnSelectFollowerItem__;
          if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
            v136 = (_QWORD *)sub_1BDB890(Method_FollowerRootComponent_OnSelectFollowerItem__);
          v137 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v136, v136[4]);
          OverwriteAssetSoundName__PlaySystemSe(v137, 0, 0, 0LL);
          if ( FollowerSelectItemListViewItem__get_FollowerType(v127, 0LL) == 1 )
          {
            v139 = 13;
          }
          else if ( FollowerSelectItemListViewItem__get_FollowerType(v127, 0LL) == 5 )
          {
            v139 = 14;
          }
          else if ( v127->fields.isNpc )
          {
            v139 = 19;
          }
          else
          {
            v139 = 16;
          }
          FollowerRootComponent__SelectShowServantEquip(v8, EquipInfo, v139, v138);
          return;
        }
LABEL_162:
        v140 = Method_FollowerRootComponent_OnSelectFollowerItem__;
        if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
          v140 = (_QWORD *)sub_1BDB890(Method_FollowerRootComponent_OnSelectFollowerItem__);
        v99 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v140, v140[4]);
        goto LABEL_165;
      }
LABEL_107:
      v114 = Method_FollowerRootComponent_OnSelectFollowerItem__;
      if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
        v114 = (_QWORD *)sub_1BDB890(Method_FollowerRootComponent_OnSelectFollowerItem__);
      v115 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v114, v114[4]);
      OverwriteAssetSoundName__PlaySystemSe(v115, 2, 0, 0LL);
      v116 = v8->fields.tutorialMode;
      if ( v116 == 3 )
      {
LABEL_174:
        operationItemListViewManager = v8->fields.operationItemListViewManager;
        v141 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1BDBAC4(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
        FollowerSelectItemListViewManager_CallbackFunc___ctor(
          v141,
          (Il2CppObject *)v8,
          (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
          0LL);
        if ( !operationItemListViewManager )
          goto LABEL_184;
        v142 = 4;
LABEL_169:
        FollowerSelectItemListViewManager__SetMode(operationItemListViewManager, v142, v141, 0LL);
      }
      else if ( v116 == 2 )
      {
        goto LABEL_166;
      }
      return;
    case 7:
    case 13:
      v89 = Method_FollowerRootComponent_OnSelectFollowerItem__;
      if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
        v89 = (_QWORD *)sub_1BDB890(Method_FollowerRootComponent_OnSelectFollowerItem__);
      v90 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v89, v89[4]);
      OverwriteAssetSoundName__PlaySystemSe(v90, 0, 0, 0LL);
      if ( !FollowerListRequest_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FollowerListRequest_TypeInfo);
      v91 = FollowerListRequest__checkRefreshRate(0LL);
      v92 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BDBAC4(CommonConfirmDialog_ClickDelegate_TypeInfo);
      CommonConfirmDialog_ClickDelegate___ctor(
        v92,
        (Il2CppObject *)v8,
        Method_FollowerRootComponent_EndRefreshConfirm__,
        0LL);
      if ( kind == 13 )
      {
        if ( !FollowerRecommendSupportListRequest_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FollowerRecommendSupportListRequest_TypeInfo);
        v93 = FollowerRecommendSupportListRequest__CheckRefreshRate(0LL);
        v92 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BDBAC4(CommonConfirmDialog_ClickDelegate_TypeInfo);
        CommonConfirmDialog_ClickDelegate___ctor(
          v92,
          (Il2CppObject *)v8,
          Method_FollowerRootComponent_EndRecommendRefreshConfirm__,
          0LL);
        if ( v93 )
        {
LABEL_62:
          commonConfirmDialog = v8->fields.commonConfirmDialog;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v95 = LocalizationManager__Get((System_String_o *)StringLiteral_6475/*"FOLLOWER_SELECT_REFRESH_TITLE"*/, 0LL);
          this = (FollowerRootComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6472/*"FOLLOWER_SELECT_REFRESH_MESSAGE"*/, 0LL);
          v96 = this;
          if ( !FollowerRootComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(FollowerRootComponent_TypeInfo);
          if ( commonConfirmDialog )
          {
            CommonConfirmDialog__Open_30808032(
              commonConfirmDialog,
              v95,
              (System_String_o *)v96,
              1,
              v92,
              FollowerRootComponent_TypeInfo->static_fields->LIST_UPDATE_MESSAGE_FONT_SIZE,
              0,
              0,
              0,
              0LL);
            return;
          }
          goto LABEL_184;
        }
      }
      else if ( v91 )
      {
        goto LABEL_62;
      }
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v122 = LocalizationManager__Get((System_String_o *)StringLiteral_6474/*"FOLLOWER_SELECT_REFRESH_REST_TITLE"*/, 0LL);
      v123 = LocalizationManager__Get((System_String_o *)StringLiteral_6473/*"FOLLOWER_SELECT_REFRESH_REST_MESSAGE"*/, 0LL);
      v124 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
      System_Action___ctor(v124, (Il2CppObject *)v8, Method_FollowerRootComponent_EndRefreshRest__, 0LL);
      if ( Instance )
      {
        CommonUI__OpenNotificationDialog(
          (CommonUI_o *)Instance,
          v122,
          v123,
          v124,
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
      goto LABEL_184;
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
      this = (FollowerRootComponent_o *)v8->fields.operationItemListViewManager;
      if ( !this )
        goto LABEL_184;
      this = (FollowerRootComponent_o *)FollowerSelectItemListViewManager__GetItem(
                                          (FollowerSelectItemListViewManager_o *)this,
                                          n,
                                          0LL);
      v48 = (unsigned int)(kind - 9);
      v49 = (unsigned int)v48 < 4 ? v48 + 1 : 0LL;
      if ( !this )
        goto LABEL_184;
      this = (FollowerRootComponent_o *)FollowerSelectItemListViewItem__GetAppendSkillInfo(
                                          (FollowerSelectItemListViewItem_o *)this,
                                          &skillInfoList,
                                          this->fields.friendPointUpVal,
                                          0LL);
      if ( !skillInfoList )
        goto LABEL_184;
      if ( (unsigned int)v49 >= skillInfoList->max_length )
LABEL_185:
        sub_1BDBADC(this, *(_QWORD *)&kind, v50);
      v51 = skillInfoList->m_Items[v49];
      if ( v51 && v51->fields.id >= 1 && v51->fields.lv >= 1 )
      {
        v52 = Method_FollowerRootComponent_OnSelectFollowerItem__;
        if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
          v52 = (_QWORD *)sub_1BDB890(Method_FollowerRootComponent_OnSelectFollowerItem__);
        v53 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v52, v52[4]);
        OverwriteAssetSoundName__PlaySystemSe(v53, 0, 0, 0LL);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (FollowerRootComponent_o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_SkillMaster___);
        if ( !this )
          goto LABEL_184;
        v54 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                v51->fields.id,
                (const MethodInfo_32E1E3C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        this = (FollowerRootComponent_o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_SkillLvMaster___);
        if ( !this )
          goto LABEL_184;
        this = (FollowerRootComponent_o *)SkillLvMaster__GetEntity(
                                            (SkillLvMaster_o *)this,
                                            v51->fields.id,
                                            v51->fields.lv,
                                            0LL);
        if ( !v54 )
          goto LABEL_184;
        SkillEntity__getSkillMessageInfo((SkillEntity_o *)v54, &name, &detail, v51->fields.lv, 0LL);
        v55 = name;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v56 = LocalizationManager__Get((System_String_o *)StringLiteral_8542/*"MASTER_EQSKILL_LV_TXT"*/, 0LL);
        lv = v51->fields.lv;
        v60 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv, v57, v58, v59);
        v61 = System_String__Format(v56, v60, 0LL);
        name = System_String__Concat_62610508(v55, (System_String_o *)StringLiteral_115/*" "*/, v61, 0LL);
        v62 = v8->fields.tutorialMode;
        this = (FollowerRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !this )
          goto LABEL_184;
        if ( v62 == 3 )
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
        v63 = Method_FollowerRootComponent_OnSelectFollowerItem__;
        if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
          v63 = (_QWORD *)sub_1BDB890(Method_FollowerRootComponent_OnSelectFollowerItem__);
        v64 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v63, v63[4]);
        OverwriteAssetSoundName__PlaySystemSe(v64, 2, 0, 0LL);
      }
LABEL_30:
      operationItemListViewManager = v8->fields.operationItemListViewManager;
      v66 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1BDBAC4(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
      v67 = (int)Method_FollowerRootComponent_OnSelectFollowerItem__;
      goto LABEL_167;
    case 14:
      battleSetupInfo = v8->fields.battleSetupInfo;
      if ( !battleSetupInfo )
        goto LABEL_184;
      if ( !battleSetupInfo->fields.isChildFollower )
        goto LABEL_117;
      this = (FollowerRootComponent_o *)v8->fields.titleInfo;
      if ( !this )
        goto LABEL_184;
      TitleInfoControl__setBackBtnEnable((TitleInfoControl_o *)this, 0, 0LL);
      this = (FollowerRootComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !this )
        goto LABEL_184;
      LOBYTE(this->fields.operationItemListViewManager) = 1;
LABEL_117:
      v118 = (NetworkManager_ResultCallbackFunc_o *)sub_1BDBAC4(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v118,
        (Il2CppObject *)v8,
        Method_FollowerRootComponent_CallbackRefresh__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      this = (FollowerRootComponent_o *)NetworkManager__getRequest_object_(
                                          v118,
                                          (const MethodInfo_30BC7D4 *)Method_NetworkManager_getRequest_FollowerRecommendSupportListRequest___);
      if ( !v8->fields.battleSetupInfo )
        goto LABEL_184;
      v119 = (FollowerRecommendSupportListRequest_o *)this;
      this = (FollowerRootComponent_o *)BattleSetupInfo__TargetQuestId(v8->fields.battleSetupInfo, 0LL);
      v120 = v8->fields.battleSetupInfo;
      if ( !v120 || !v119 )
        goto LABEL_184;
      FollowerRecommendSupportListRequest__beginRequest(v119, 0, (int32_t)this, v120->fields.questPhase, 0LL);
      return;
    default:
      this = (FollowerRootComponent_o *)v8->fields.operationItemListViewManager;
      if ( !this )
        goto LABEL_184;
      this = (FollowerRootComponent_o *)FollowerSelectItemListViewManager__GetItem(
                                          (FollowerSelectItemListViewManager_o *)this,
                                          n,
                                          0LL);
      if ( !this )
        goto LABEL_184;
      v100 = this;
      if ( FollowerSelectItemListViewItem__get_SvtId((FollowerSelectItemListViewItem_o *)this, 0LL) < 1
        || LOBYTE(v100->fields.tutorialMode)
        || BYTE3(v100[1].klass) )
      {
        goto LABEL_162;
      }
      this = (FollowerRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
      if ( !this )
        goto LABEL_184;
      if ( !BYTE4(this->fields.battleSetupInfo) )
        goto LABEL_89;
      this = (FollowerRootComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      v101 = this;
      v102 = FollowerRootComponent___c_TypeInfo;
      if ( !FollowerRootComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FollowerRootComponent___c_TypeInfo);
        v102 = FollowerRootComponent___c_TypeInfo;
      }
      _9__67_0 = v102->static_fields->__9__67_0;
      if ( !_9__67_0 )
      {
        if ( !v102->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v102);
          v102 = FollowerRootComponent___c_TypeInfo;
        }
        v104 = (Il2CppObject *)v102->static_fields->__9;
        _9__67_0 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
        System_Action___ctor(_9__67_0, v104, Method_FollowerRootComponent___c__OnSelectFollowerItem_b__67_0__, 0LL);
        static_fields = FollowerRootComponent___c_TypeInfo->static_fields;
        static_fields->__9__67_0 = _9__67_0;
        this = (FollowerRootComponent_o *)sub_1BDB81C(&static_fields->__9__67_0);
      }
      if ( !v101 )
        goto LABEL_184;
      if ( PartyOrganizationUtility__OpenQuestUseItemExpiredDialog((PartyOrganizationUtility_o *)v101, _9__67_0, 0LL) )
        goto LABEL_30;
LABEL_89:
      v106 = Method_FollowerRootComponent_OnSelectFollowerItem__;
      if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
        v106 = (_QWORD *)sub_1BDB890(Method_FollowerRootComponent_OnSelectFollowerItem__);
      v107 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v106, v106[4]);
      OverwriteAssetSoundName__PlaySystemSe(v107, 0, 0, 0LL);
      if ( !v8->fields.tutorialState )
        goto LABEL_96;
      v108 = v8->fields.tutorialMode;
      if ( v108 == 3 )
      {
        v8->fields.state = 4;
        v145 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v146 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
        System_Action___ctor(v146, (Il2CppObject *)v8, Method_FollowerRootComponent_EndCloseTutorialArrow__, 0LL);
        if ( !v145 )
          goto LABEL_184;
        CommonUI__CloseTutorialArrowMark((CommonUI_o *)v145, v146, 0LL);
      }
      else if ( v108 == 2 )
      {
        this = (FollowerRootComponent_o *)v8->fields.titleInfo;
        if ( this )
        {
          TitleInfoControl__setBackBtnEnable((TitleInfoControl_o *)this, 1, 0LL);
LABEL_96:
          this = (FollowerRootComponent_o *)v8->fields.myFSM;
          if ( this )
          {
            v109 = &StringLiteral_8647/*"MENU_SELECT_ITEM"*/;
LABEL_136:
            PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v109, 0LL);
            return;
          }
        }
LABEL_184:
        sub_1BDBAD4(this, *(_QWORD *)&kind);
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
  if ( (byte_4B3F5E8 & 1) == 0 )
  {
    sub_1BDB878(&BalanceConfig_TypeInfo, method);
    sub_1BDB878(&BgmManager_TypeInfo, v3);
    sub_1BDB878(&Method_DataManager_GetMasterData_QuestMaster___, v4);
    sub_1BDB878(&Method_DataManager_GetMaster_BgmMaster___, v5);
    sub_1BDB878(&Method_DataManager_GetMaster_QuestPhaseMaster___, v6);
    sub_1BDB878(&DataManager_TypeInfo, v7);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1BDB878(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v9);
    sub_1BDB878(&SoundManager_TypeInfo, v10);
    this = (FollowerRootComponent_o *)sub_1BDB878(&StringLiteral_1/*""*/, v11);
    byte_4B3F5E8 = 1;
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
    this = (FollowerRootComponent_o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
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
        this = (FollowerRootComponent_o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_BgmMaster___);
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
        this = (FollowerRootComponent_o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_BgmMaster___);
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
    this = (FollowerRootComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !this )
      goto LABEL_69;
    this = (FollowerRootComponent_o *)PartyOrganizationUtility__ExistsTemporaryPartyInfo(
                                        (PartyOrganizationUtility_o *)this,
                                        0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !System_String__IsNullOrEmpty(BgmFileName, 0LL) )
        FollowerRootComponent__SetBackupBgmName(v2, v21 & 1, v25);
      this = (FollowerRootComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
      sub_1BDBAD4(this, method);
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
          this = (FollowerRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !this )
            goto LABEL_69;
          this = (FollowerRootComponent_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_303395C *)Method_DataManager_GetMasterData_QuestMaster___);
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
  if ( (byte_4B3F5E7 & 1) == 0 )
  {
    sub_1BDB878(&SoundManager_TypeInfo, subBgmName);
    byte_4B3F5E7 = 1;
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
    sub_1BDBAD4(operationItemListViewManager, method);
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

  if ( (byte_4B3F5F1 & 1) == 0 )
  {
    sub_1BDB878(&Method_FollowerRootComponent_CallbackFollowerList__, method);
    sub_1BDB878(&Method_NetworkManager_getRequest_FollowerListRequest___, v3);
    sub_1BDB878(&NetworkManager_TypeInfo, v4);
    sub_1BDB878(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    sub_1BDB878(&StringLiteral_11065/*"REQUEST_OK"*/, v6);
    byte_4B3F5F1 = 1;
  }
  v7 = (NetworkManager_ResultCallbackFunc_o *)sub_1BDBAC4(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v7,
    (Il2CppObject *)this,
    Method_FollowerRootComponent_CallbackFollowerList__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = (FollowerListRequest_o *)NetworkManager__getRequest_object_(
                                              v7,
                                              (const MethodInfo_30BC7D4 *)Method_NetworkManager_getRequest_FollowerListRequest___);
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
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Request_object, (System_String_o *)StringLiteral_11065/*"REQUEST_OK"*/, 0LL);
      return;
    }
LABEL_12:
    sub_1BDBAD4(Request_object, v9);
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
  if ( (byte_4B3F5FE & 1) == 0 )
  {
    this = (FollowerRootComponent_o *)sub_1BDB878(
                                        &Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__,
                                        method);
    byte_4B3F5FE = 1;
  }
  battleSetupInfo = v2->fields.battleSetupInfo;
  v2->fields.state = 5;
  if ( !battleSetupInfo )
    goto LABEL_8;
  if ( battleSetupInfo->fields.isChildFollower )
    battleSetupInfo->fields.followerId = 0LL;
  this = (FollowerRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !this )
LABEL_8:
    sub_1BDBAD4(this, method);
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

  if ( (byte_4B3F5FD & 1) == 0 )
  {
    sub_1BDB878(&Method_AvalonSceneManager_UnloadScene_PartyOrganizationRootComponent___, method);
    sub_1BDB878(&QuestHintDialogOpenManager_TypeInfo, v3);
    sub_1BDB878(&RandomLimitCountManager_TypeInfo, v4);
    sub_1BDB878(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5);
    sub_1BDB878(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v6);
    sub_1BDB878(&SoundManager_TypeInfo, v7);
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v8);
    byte_4B3F5FD = 1;
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
  sub_1BDB81C(&this->fields.battleSetupInfo);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  if ( BYTE6(Instance[10].monitor) )
  {
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_29;
    BYTE6(Instance[10].monitor) = 0;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4B3F3B7 )
    {
      sub_1BDB878(&TerminalPramsManager_TypeInfo, v12);
      byte_4B3F3B7 = 1;
    }
    v13 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v13 = TerminalPramsManager_TypeInfo;
    }
    v13->static_fields->_IsAutoResume_k__BackingField = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  if ( AvalonSceneManager__IsStackScene((AvalonSceneManager_o *)Instance, 0LL) )
  {
    this->fields.state = 0;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_29;
    AvalonSceneManager__popSceneRefresh((AvalonSceneManager_o *)Instance, 1, battleSetupInfo, 0LL);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_29;
    AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0, 0LL);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
LABEL_29:
    sub_1BDBAD4(Instance, v12);
  AvalonSceneManager__UnloadScene_object_(
    (AvalonSceneManager_o *)Instance,
    (const MethodInfo_301B824 *)Method_AvalonSceneManager_UnloadScene_PartyOrganizationRootComponent___);
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

  if ( (byte_4B3F5EF & 1) == 0 )
  {
    sub_1BDB878(&AvalonSceneManager_TypeInfo, method);
    sub_1BDB878(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, v3);
    sub_1BDB878(&Method_FollowerRootComponent_OnSelectFollowerItem__, v4);
    sub_1BDB878(&RandomLimitCountManager_TypeInfo, v5);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1BDB878(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v7);
    byte_4B3F5EF = 1;
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
    v11 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1BDBAC4(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
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
    if ( !byte_4B3F610 )
    {
      sub_1BDB878(&FollowerSelectItemListViewManager_TypeInfo, method);
      byte_4B3F610 = 1;
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
      sub_1BDBAD4(operationItemListViewManager, method);
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
    v15 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1BDBAC4(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
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
  operationItemListViewManager = SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !operationItemListViewManager || !followerQuestInfomationDraw )
    goto LABEL_27;
  FollowerQuestInfomationDraw__SetInfomation(
    followerQuestInfomationDraw,
    questRestrictionInfo,
    *((_DWORD *)operationItemListViewManager + 16),
    0LL,
    v19);
  operationItemListViewManager = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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

  if ( (byte_4B3F5F7 & 1) == 0 )
  {
    sub_1BDB878(&ServantStatusDialog_EndDelegate_TypeInfo, item);
    sub_1BDB878(&Method_FollowerRootComponent_EndShowServant__, v5);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4B3F5F7 = 1;
  }
  operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager
    || (ListViewManager__GetScrollView(
          operationItemListViewManager,
          &this->fields.openScroll,
          &this->fields.openOffset,
          0LL),
        operationItemListViewManager = (ListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        !item)
    || (v8 = (CommonUI_o *)operationItemListViewManager,
        ServantLeader = FollowerSelectItemListViewItem__get_ServantLeader(item, 0LL),
        v10 = (ServantStatusDialog_EndDelegate_o *)sub_1BDBAC4(ServantStatusDialog_EndDelegate_TypeInfo),
        ServantStatusDialog_EndDelegate___ctor(
          v10,
          (Il2CppObject *)this,
          Method_FollowerRootComponent_EndShowServant__,
          0LL),
        !v8) )
  {
    sub_1BDBAD4(operationItemListViewManager, item);
  }
  CommonUI__OpenServantStatusDialog_30845916(v8, 5, ServantLeader, v10, 0LL);
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

  if ( (byte_4B3F5FA & 1) == 0 )
  {
    sub_1BDB878(&ServantStatusDialog_EndDelegate_TypeInfo, equipInfo);
    sub_1BDB878(&Method_FollowerRootComponent_EndShowServantEquip__, v7);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    byte_4B3F5FA = 1;
  }
  operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager
    || (ListViewManager__GetScrollView(
          operationItemListViewManager,
          &this->fields.openScroll,
          &this->fields.openOffset,
          0LL),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v11 = (ServantStatusDialog_EndDelegate_o *)sub_1BDBAC4(ServantStatusDialog_EndDelegate_TypeInfo),
        ServantStatusDialog_EndDelegate___ctor(
          v11,
          (Il2CppObject *)this,
          Method_FollowerRootComponent_EndShowServantEquip__,
          0LL),
        !Instance) )
  {
    sub_1BDBAD4(operationItemListViewManager, equipInfo);
  }
  CommonUI__OpenServantEquipStatusDialog_30849012((CommonUI_o *)Instance, statusKind, equipInfo, v11, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerRootComponent__SetBackupBgmName(
        FollowerRootComponent_o *this,
        bool isNonStopEndBgm,
        const MethodInfo *method)
{
  if ( (byte_4B3F5E9 & 1) == 0 )
  {
    sub_1BDB878(&SoundManager_TypeInfo, isNonStopEndBgm);
    byte_4B3F5E9 = 1;
  }
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  if ( SoundManager__isPlayBgm(0LL, 0LL) && !isNonStopEndBgm )
  {
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    this->fields.backupBgmName = SoundManager__getBgmName(0LL);
    sub_1BDB81C(&this->fields.backupBgmName);
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

  if ( (byte_4B3F5E4 & 1) == 0 )
  {
    sub_1BDB878(&AtlasManager_TypeInfo, spriteName);
    sub_1BDB878(&FollowerRootComponent_TypeInfo, v5);
    byte_4B3F5E4 = 1;
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
  int32_t ItemIndex_31791468; // w0
  FollowerSelectItemListViewItem_o *Item; // x0
  struct BattleSetupInfo_o *v9; // x21
  FollowerSelectItemListViewItem_o *v10; // x20
  struct BattleSetupInfo_o *v11; // x21
  __int64 v12; // x2
  struct BattleSetupInfo_o *v13; // x8
  int32_t IsRecommendFollower_k__BackingField; // w9
  struct FollowerInfo_o *followerInfo; // x9
  struct UserRecommendSupportInfo_array *userRecommendSupportHash; // x9
  UserRecommendSupportInfo_o *v17; // x9
  struct BattleSetupInfo_o *v18; // x8
  int v19; // w9
  Il2CppObject *v20; // x19

  if ( (byte_4B3F5FF & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    sub_1BDB878(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v3);
    byte_4B3F5FF = 1;
  }
  Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
      ItemIndex_31791468 = FollowerSelectItemListViewManager__GetItemIndex_31791468(
                             (FollowerSelectItemListViewManager_o *)Instance,
                             followerId,
                             battleSetupInfo->fields.followerClassId,
                             battleSetupInfo->fields.followerSupportDeckId,
                             battleSetupInfo->fields.followerGrandGraphId,
                             0LL);
      this->fields.selectItemNum = ItemIndex_31791468 & ~(ItemIndex_31791468 >> 31);
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
          v13 = this->fields.battleSetupInfo;
          if ( v13 )
          {
            v13->fields.followerGrandGraphId = v10->fields._GrandGraphId_k__BackingField;
            v13->fields.followerSupportDeckId = v10->fields.supportDeckId;
            IsRecommendFollower_k__BackingField = v10->fields._IsRecommendFollower_k__BackingField;
            if ( !v10->fields._IsRecommendFollower_k__BackingField )
            {
LABEL_21:
              v13->fields.recommendSupportIdx = IsRecommendFollower_k__BackingField;
              Instance = FollowerSelectItemListViewItem__get_FollowerType(v10, 0LL);
              v18 = this->fields.battleSetupInfo;
              if ( !v18 )
                goto LABEL_29;
              v18->fields.followerType = 0;
              if ( (_DWORD)Instance == 5 )
              {
                v19 = 5;
              }
              else
              {
                if ( (_DWORD)Instance != 1 )
                  goto LABEL_27;
                v19 = 1;
              }
              v18->fields.followerType = v19;
              goto LABEL_27;
            }
            followerInfo = v10->fields.followerInfo;
            if ( followerInfo )
            {
              userRecommendSupportHash = followerInfo->fields.userRecommendSupportHash;
              if ( userRecommendSupportHash )
              {
                if ( !userRecommendSupportHash->max_length )
                  sub_1BDBADC(Instance, followerId, v12);
                v17 = userRecommendSupportHash->m_Items[0];
                if ( v17 )
                {
                  IsRecommendFollower_k__BackingField = v17->fields.idx;
                  goto LABEL_21;
                }
              }
            }
          }
        }
      }
LABEL_29:
      sub_1BDBAD4(Instance, followerId);
    }
  }
LABEL_27:
  this->fields.state = 5;
  v20 = (Il2CppObject *)this->fields.battleSetupInfo;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  AvalonSceneManager__pushScene((AvalonSceneManager_o *)Instance, 40, 1, v20, 0LL);
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
  Il2CppClass *klass; // x22
  int namespaze; // w8
  unsigned int v16; // w23
  void **v17; // x24
  _QWORD *v18; // x8
  FollowerInfo_o **v19; // x24
  _QWORD *v20; // t1
  __int64 v21; // x25
  Il2CppClass *v22; // x21
  const char *v23; // x8
  bool v24; // w22
  __int64 v25; // x23
  __int64 v26; // x8
  __int64 v27; // x22
  FollowerInfo_o *v29; // x22
  SupportInfoJump_o *v30; // x21
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  struct FollowerSelectItemListViewManager_FollowerSelectItemOption_o *Option_k__BackingField; // x8
  Il2CppObject *v33; // x3
  FollowerInfo_o *v34; // x21
  SupportInfoJump_o *v35; // x20
  struct BattleSetupInfo_o *v36; // x8
  Il2CppObject *v37; // [xsp+0h] [xbp-50h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B3F600 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMaster_PickupUserFollowerMaster___, method);
    sub_1BDB878(&Method_DataManager_GetMaster_UserFollowerMaster___, v3);
    sub_1BDB878(&DataManager_TypeInfo, v4);
    sub_1BDB878(&Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long__TryGetSingleEntity__, v5);
    sub_1BDB878(
      &Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long__TryGetSingleEntity__,
      v6);
    sub_1BDB878(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v7);
    sub_1BDB878(&SupportInfoJump_TypeInfo, v8);
    byte_4B3F600 = 1;
  }
  v37 = 0LL;
  entity = 0LL;
  selectItemNum = (unsigned int)this->fields.selectItemNum;
  if ( (selectItemNum & 0x80000000) != 0 )
    return 0;
  operationItemListViewManager = (int64_t)this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    goto LABEL_46;
  Item = FollowerSelectItemListViewManager__GetItem(
           (FollowerSelectItemListViewManager_o *)operationItemListViewManager,
           selectItemNum,
           0LL);
  if ( !Item )
    return 0;
  v12 = Item;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  operationItemListViewManager = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_UserFollowerMaster___);
  if ( !operationItemListViewManager )
    goto LABEL_46;
  operationItemListViewManager = DataMasterBase_object__object__long___TryGetSingleEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)operationItemListViewManager,
                                   &entity,
                                   (const MethodInfo_32E44C4 *)Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long__TryGetSingleEntity__);
  if ( (operationItemListViewManager & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_46;
    klass = entity[1].klass;
    if ( !klass )
      goto LABEL_46;
    namespaze = (int)klass->_1.namespaze;
    if ( namespaze >= 1 )
    {
      v16 = 0;
      while ( 1 )
      {
        if ( v16 >= namespaze )
          goto LABEL_47;
        v17 = &klass->_1.image + (int)v16;
        v20 = v17[4];
        v19 = (FollowerInfo_o **)(v17 + 4);
        v18 = v20;
        if ( !v20 )
          goto LABEL_46;
        v21 = v18[2];
        operationItemListViewManager = FollowerSelectItemListViewItem__get_FollowerId(v12, 0LL);
        if ( v21 == operationItemListViewManager )
          break;
        namespaze = (int)klass->_1.namespaze;
        if ( (int)++v16 >= namespaze )
          goto LABEL_18;
      }
      this->fields.state = 6;
      if ( v16 < LODWORD(klass->_1.namespaze) )
      {
        v29 = *v19;
        v30 = (SupportInfoJump_o *)sub_1BDBAC4(SupportInfoJump_TypeInfo);
        SupportInfoJump___ctor_40528760(v30, v29, 0, 1, 0LL);
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
            Option_k__BackingField = v12->fields._Option_k__BackingField;
            if ( Option_k__BackingField )
            {
              SupportInfoJump__SetIsUseGrandSupport(v30, Option_k__BackingField->fields.isUseGrandBoard, 0LL);
              operationItemListViewManager = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
              if ( operationItemListViewManager )
              {
                v24 = 1;
                v33 = (Il2CppObject *)v30;
LABEL_45:
                AvalonSceneManager__pushScene((AvalonSceneManager_o *)operationItemListViewManager, 60, 1, v33, 0LL);
                return v24;
              }
            }
          }
        }
        goto LABEL_46;
      }
      goto LABEL_47;
    }
  }
LABEL_18:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  operationItemListViewManager = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_PickupUserFollowerMaster___);
  if ( !operationItemListViewManager )
    goto LABEL_46;
  operationItemListViewManager = DataMasterBase_object__object__long___TryGetSingleEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)operationItemListViewManager,
                                   &v37,
                                   (const MethodInfo_32E44C4 *)Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long__TryGetSingleEntity__);
  if ( (operationItemListViewManager & 1) == 0 )
    return 0;
  if ( !v37 )
    goto LABEL_46;
  v22 = v37[1].klass;
  if ( !v22 )
    return 0;
  v23 = v22->_1.namespaze;
  v24 = 0;
  if ( v23 && (int)v23 >= 1 )
  {
    v25 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v25 >= (unsigned int)v23 )
        goto LABEL_47;
      v26 = *((_QWORD *)&v22->_1.byval_arg.data + v25);
      if ( !v26 )
        goto LABEL_46;
      v27 = *(_QWORD *)(v26 + 16);
      operationItemListViewManager = FollowerSelectItemListViewItem__get_FollowerId(v12, 0LL);
      if ( v27 == operationItemListViewManager )
        break;
      LODWORD(v23) = v22->_1.namespaze;
      ++v25;
      v24 = 0;
      if ( (int)v25 >= (int)v23 )
        return v24;
    }
    this->fields.state = 6;
    if ( (unsigned int)v25 < LODWORD(v22->_1.namespaze) )
    {
      v34 = (FollowerInfo_o *)*((_QWORD *)&v22->_1.byval_arg.data + v25);
      v35 = (SupportInfoJump_o *)sub_1BDBAC4(SupportInfoJump_TypeInfo);
      SupportInfoJump___ctor_40528760(v35, v34, 0, 1, 0LL);
      v36 = this->fields.battleSetupInfo;
      if ( v36 )
      {
        if ( v35 )
        {
          SupportInfoJump__SetSetupInfo(v35, v36->fields.eventUpValSetupInfo, v36->fields.questRestrictionInfo, 0LL);
          operationItemListViewManager = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( operationItemListViewManager )
          {
            v24 = 1;
            v33 = (Il2CppObject *)v35;
            goto LABEL_45;
          }
        }
      }
LABEL_46:
      sub_1BDBAD4(operationItemListViewManager, selectItemNum);
    }
LABEL_47:
    sub_1BDBADC(operationItemListViewManager, selectItemNum, v13);
  }
  return v24;
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

  if ( (byte_4B3F5F6 & 1) == 0 )
  {
    sub_1BDB878(&BalanceConfig_TypeInfo, method);
    sub_1BDB878(&Method_DataManager_GetMasterData_UserDeckMaster___, v3);
    sub_1BDB878(&Method_DataManager_GetMasterData_UserEventDeckMaster___, v4);
    sub_1BDB878(&Method_DataManager_GetMaster_EventCampaignMaster___, v5);
    sub_1BDB878(&Method_DataManager_GetMaster_EventQuestMaster___, v6);
    sub_1BDB878(&DataManager_TypeInfo, v7);
    sub_1BDB878(&Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__TryGetEntity__, v8);
    sub_1BDB878(&LastUsedDeckNumberManager_TypeInfo, v9);
    sub_1BDB878(&NetworkManager_TypeInfo, v10);
    sub_1BDB878(&Method_System_Nullable_int__GetValueOrDefault__, v11);
    sub_1BDB878(&Method_System_Nullable_int___ctor__, v12);
    sub_1BDB878(&Method_System_Nullable_int__get_HasValue__, v13);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    sub_1BDB878(&OptionManager_TypeInfo, v15);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1BDB878(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v17);
    byte_4B3F5F6 = 1;
  }
  *(_QWORD *)fpUpDuplicateSum = 0LL;
  entity = 0LL;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_136;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserDeckMaster___);
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
                 (const MethodInfo_32E43E4 *)Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__TryGetEntity__);
  }
  else
  {
    v80 = Instance;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4B3ED56 )
    {
      sub_1BDB878(&NetworkManager_TypeInfo, v19);
      byte_4B3ED56 = 1;
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
  sub_1BDB81C(&this->fields.friendPointCampaignEntityList);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_EventQuestMaster___);
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
  this->fields.friendPointCampaignEntityList = EventCampaignMaster__getData_40919772(
                                                 (EventCampaignMaster_o *)Master_object,
                                                 24,
                                                 (EventEntity_array *)Instance,
                                                 0LL);
  Instance = sub_1BDB81C(&this->fields.friendPointCampaignEntityList);
  *(_QWORD *)fpUpDuplicateSum = 0LL;
  if ( this->fields.tutorialMode == 4 )
  {
    v27 = this->fields.battleSetupInfo;
    if ( !v27 )
      goto LABEL_136;
    if ( v27->fields.isChildFollower )
    {
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
          Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
    sub_1BDBAD4(Instance, v19);
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
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_136;
      v38 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserEventDeckMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4B3ED56 )
      {
        sub_1BDB878(&NetworkManager_TypeInfo, v19);
        byte_4B3ED56 = 1;
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
        sub_1BDBADC(Instance, v19, v43);
      v44 = *(UserEventDeckEntity_o **)(Instance + 32);
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_136;
      if ( !*(_QWORD *)(Instance + 80) )
        goto LABEL_85;
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
        System_Nullable_int____ctor(v89, v47, (const MethodInfo_37F58C8 *)Method_System_Nullable_int___ctor__);
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
          Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
              v57 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(&v85, 0LL);
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
              QuestRestrictionInfo__SetDeckInfo_42349636((QuestRestrictionInfo_o *)Instance, v44, 0LL);
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

  if ( (byte_4B3F60F & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v5);
    sub_1BDB878(&StringLiteral_3471/*"CLICK_BACK"*/, v6);
    byte_4B3F60F = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  CommonUI__CloseConfirmDialog(Instance, 0LL);
  if ( isDecide )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4B3F3B7 )
    {
      sub_1BDB878(&TerminalPramsManager_TypeInfo, v8);
      byte_4B3F3B7 = 1;
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
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3471/*"CLICK_BACK"*/, 0LL);
      return;
    }
LABEL_14:
    sub_1BDBAD4(Instance, v8);
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

  if ( (byte_4B3F5F0 & 1) == 0 )
  {
    sub_1BDB878(&AtlasManager_TypeInfo, method);
    sub_1BDB878(&FollowerRootComponent_TypeInfo, v3);
    sub_1BDB878(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, v4);
    byte_4B3F5F0 = 1;
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
  sub_1BDB81C(&static_fields->partyOrganizationAtlasCache);
  operationItemListViewManager = (FollowerSelectItemListViewManager_o *)this->fields.backSkinSprite;
  if ( !operationItemListViewManager
    || (operationItemListViewManager = (FollowerSelectItemListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                                (UnityEngine_Component_o *)operationItemListViewManager,
                                                                                0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)operationItemListViewManager, 0, 0LL),
        (operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__)) == 0LL) )
  {
LABEL_14:
    sub_1BDBAD4(operationItemListViewManager, method);
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

  if ( (byte_4B3F5E5 & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_4B3F5E5 = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BDBAD4(0LL, v4);
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, (SceneRootComponent_o *)this, 0LL);
}


void __fastcall FollowerRootComponent__beginPause(FollowerRootComponent_o *this, const MethodInfo *method)
{
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x0

  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    sub_1BDBAD4(0LL, method);
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

  if ( (byte_4B3F5EE & 1) == 0 )
  {
    sub_1BDB878(&AvalonSceneManager_TypeInfo, data);
    sub_1BDB878(&BalanceConfig_TypeInfo, v5);
    sub_1BDB878(&BattleSetupInfo_TypeInfo, v6);
    sub_1BDB878(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, v7);
    sub_1BDB878(&Method_FollowerRootComponent_OnSelectFollowerItem__, v8);
    sub_1BDB878(&FollowerRootComponent_TypeInfo, v9);
    sub_1BDB878(&RandomLimitCountManager_TypeInfo, v10);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    sub_1BDB878(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v12);
    sub_1BDB878(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v13);
    sub_1BDB878(&SupportInfoJump_TypeInfo, v14);
    sub_1BDB878(&TutorialFlag_TypeInfo, v15);
    byte_4B3F5EE = 1;
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
  sub_1BDB81C(&static_fields->partyOrganizationAtlasCache);
  titleInfo = this->fields.titleInfo;
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_114;
  if ( *(_BYTE *)(Instance + 88) )
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
                v26->fields.followerGrandGraphId = (int32_t)data[4].monitor;
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
                    if ( !byte_4B3F610 )
                    {
                      sub_1BDB878(&FollowerSelectItemListViewManager_TypeInfo, selectItemNum);
                      byte_4B3F610 = 1;
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
                      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
            sub_1BDBAD4(Instance, selectItemNum);
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
    Instance = sub_1BDB81C(p_battleSetupInfo);
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
    Instance = TutorialFlag__Get_39449392(102, 0LL);
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
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_114;
  v45 = *(PartyListViewItem_o **)(Instance + 80);
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_114;
  v46 = (UnityEngine_Component_o *)this->fields.operationItemListViewManager;
  i = *(_DWORD *)(Instance + 64);
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
  v53 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1BDBAC4(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
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
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v43 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
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
  UILabel_o *infomationLabel; // x20
  UnityEngine_GameObject_o *refreshButtonBase; // x20
  bool v37; // w8
  struct System_Collections_Generic_List_MissionNotifyDispInfo__o *mDispInfos; // x8
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

  if ( (byte_4B3F5E6 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, data);
    sub_1BDB878(&AtlasManager_TypeInfo, v5);
    sub_1BDB878(&BalanceConfig_TypeInfo, v6);
    sub_1BDB878(&BattleSetupInfo_TypeInfo, v7);
    sub_1BDB878(&Method_DataManager_GetMasterData_ConstantMaster___, v8);
    sub_1BDB878(&Method_DataManager_GetMasterData_NpcFollowerMaster___, v9);
    sub_1BDB878(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v10);
    sub_1BDB878(&Method_FollowerRootComponent_EndLoadCommonBg__, v11);
    sub_1BDB878(&Method_FollowerRootComponent_EndLoadPartyOrganizationAtlasSimple__, v12);
    sub_1BDB878(&FollowerRootComponent_TypeInfo, v13);
    sub_1BDB878(&LocalizationManager_TypeInfo, v14);
    sub_1BDB878(&RandomLimitCountManager_TypeInfo, v15);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1BDB878(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v17);
    sub_1BDB878(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v18);
    sub_1BDB878(&TutorialFlag_TypeInfo, v19);
    sub_1BDB878(&StringLiteral_13584/*"TUTORIAL_SUPPORT_QUEST_ID"*/, v20);
    sub_1BDB878(&StringLiteral_13585/*"TUTORIAL_SUPPORT_QUEST_PHASE"*/, v21);
    sub_1BDB878(&StringLiteral_6453/*"FOLLOWER_SELECT_EXPLANATION2"*/, v22);
    sub_1BDB878(&StringLiteral_1/*""*/, v23);
    byte_4B3F5E6 = 1;
  }
  Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_95;
  if ( PartyOrganizationUtility__ExistsTemporaryPartyInfo((PartyOrganizationUtility_o *)Instance, 0LL) )
  {
    Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_95;
    monitor = Instance[2].monitor;
    if ( !monitor )
      goto LABEL_95;
    this->fields.battleSetupInfo = (struct BattleSetupInfo_o *)*((_QWORD *)monitor + 6);
    sub_1BDB81C(&this->fields.battleSetupInfo);
    Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !Instance )
      goto LABEL_95;
    if ( !MissionNotifyManager__IsPause(Instance, 0LL) )
    {
      Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
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
    sub_1BDB81C(p_battleSetupInfo);
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
  sub_1BDB81C(&static_fields->partyOrganizationAtlasCache);
  Instance = (MissionNotifyManager_o *)this->fields.titleInfo;
  if ( !Instance )
    goto LABEL_95;
  TitleInfoControl__setTitleInfo_38893136((TitleInfoControl_o *)Instance, this->fields.myFSM, 3, 66, 1, 0LL);
  Instance = (MissionNotifyManager_o *)this->fields.titleInfo;
  if ( !Instance )
    goto LABEL_95;
  TitleInfoControl__setBackBtnEnable((TitleInfoControl_o *)Instance, 1, 0LL);
  Instance = (MissionNotifyManager_o *)this->fields.operationItemListViewManager;
  if ( !Instance )
    goto LABEL_95;
  FollowerSelectItemListViewManager__DestroyList_31778968(
    (FollowerSelectItemListViewManager_o *)Instance,
    this->fields.battleSetupInfo,
    0LL);
  infomationLabel = this->fields.infomationLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (MissionNotifyManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6453/*"FOLLOWER_SELECT_EXPLANATION2"*/, 0LL);
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
  v37 = Instance[1].fields.mNoticeNumberComp || LODWORD(Instance[1].fields.assetLoadedEventIdList) != 0;
  if ( (v37 & BYTE1(Instance[1].klass)) != 0
    && (BattleSetupInfo__SetRestriction((BattleSetupInfo_o *)Instance, 1, 0LL),
        (Instance = (MissionNotifyManager_o *)this->fields.battleSetupInfo) == 0LL)
    || (mDispInfos = Instance[1].fields.mDispInfos) == 0LL )
  {
LABEL_95:
    sub_1BDBAD4(Instance, v25);
  }
  if ( BYTE2(mDispInfos[9].fields._syncRoot) )
  {
LABEL_43:
    FollowerRootComponent__StartBattleSetupMenu(this, v25);
    return;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_39449392(102, 0LL) )
  {
    Instance = (MissionNotifyManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_95;
    Instance = (MissionNotifyManager_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ConstantMaster___);
    if ( !Instance )
      goto LABEL_95;
    v39 = (ConstantMaster_o *)Instance;
    Instance = (MissionNotifyManager_o *)ConstantMaster__GetValue(
                                           (ConstantMaster_o *)Instance,
                                           (System_String_o *)StringLiteral_13584/*"TUTORIAL_SUPPORT_QUEST_ID"*/,
                                           0LL);
    battleSetupInfo = this->fields.battleSetupInfo;
    if ( !battleSetupInfo )
      goto LABEL_95;
    if ( battleSetupInfo->fields.questId == (_DWORD)Instance )
    {
      Instance = (MissionNotifyManager_o *)ConstantMaster__GetValue(v39, (System_String_o *)StringLiteral_13585/*"TUTORIAL_SUPPORT_QUEST_PHASE"*/, 0LL);
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
    Instance = (MissionNotifyManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (MissionNotifyManager_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)Instance,
                                             (const MethodInfo_303395C *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
      if ( this->fields.battleSetupInfo )
      {
        v43 = (QuestPhaseMaster_o *)Instance;
        Instance = (MissionNotifyManager_o *)BattleSetupInfo__TargetQuestId(this->fields.battleSetupInfo, 0LL);
        v44 = this->fields.battleSetupInfo;
        if ( v44 )
        {
          if ( v43 )
          {
            Instance = (MissionNotifyManager_o *)QuestPhaseMaster__GetEntity(
                                                   v43,
                                                   (int32_t)Instance,
                                                   v44->fields.questPhase,
                                                   0LL);
            if ( Instance && LOBYTE(Instance->fields.mNoDispInfos) )
            {
              Instance = (MissionNotifyManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                goto LABEL_95;
              Instance = (MissionNotifyManager_o *)DataManager__GetMasterData_object_(
                                                     (DataManager_o *)Instance,
                                                     (const MethodInfo_303395C *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
              if ( !this->fields.battleSetupInfo )
                goto LABEL_95;
              v45 = (NpcFollowerMaster_o *)Instance;
              Instance = (MissionNotifyManager_o *)BattleSetupInfo__TargetQuestId(this->fields.battleSetupInfo, 0LL);
              v46 = this->fields.battleSetupInfo;
              if ( !v46 )
                goto LABEL_95;
              if ( !v45 )
                goto LABEL_95;
              Instance = (MissionNotifyManager_o *)NpcFollowerMaster__GetQuestFollowerList(
                                                     v45,
                                                     (int32_t)Instance,
                                                     v46->fields.questPhase,
                                                     0LL);
              if ( !Instance )
                goto LABEL_95;
              if ( !Instance->fields.mNoDispInfos )
              {
                *(_QWORD *)&this->fields.tutorialMode = 0x100000001LL;
                goto LABEL_70;
              }
            }
            v47 = this->fields.battleSetupInfo;
            if ( v47 )
            {
              Instance = (MissionNotifyManager_o *)v47->fields.questRestrictionInfo;
              if ( Instance )
              {
                if ( QuestRestrictionInfo__IsMyServantOrNpcRestriction((QuestRestrictionInfo_o *)Instance, 0LL) )
                  this->fields.tutorialMode = 4;
                FollowerRootComponent__UpdateDeckInfomation(this, v48);
                v50 = this->fields.battleSetupInfo;
                if ( v50 )
                {
                  Instance = (MissionNotifyManager_o *)this->fields.followerQuestInfomationDraw;
                  if ( Instance )
                  {
                    FollowerQuestInfomationDraw__SetInfomation(
                      (FollowerQuestInfomationDraw_o *)Instance,
                      v50->fields.questRestrictionInfo,
                      0,
                      0LL,
                      v49);
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
    v41 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(v41, (Il2CppObject *)this, Method_FollowerRootComponent_EndLoadCommonBg__, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__LoadUISkin(v41, 2, 1, 0LL);
    return;
  }
  this->fields.tutorialMode = 1;
LABEL_70:
  v42 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
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
    sub_1BDBAD4(this, type);
  battleSetupInfo->fields.followerType = 0;
  if ( (type | 4) == 5 )
    battleSetupInfo->fields.followerType = type;
}


void __fastcall FollowerRootComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19

  if ( (byte_4B3F611 & 1) == 0 )
  {
    sub_1BDB878(&FollowerRootComponent___c_TypeInfo, v1);
    byte_4B3F611 = 1;
  }
  v2 = (Il2CppObject *)sub_1BDBAC4(FollowerRootComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  FollowerRootComponent___c_TypeInfo->static_fields->__9 = (struct FollowerRootComponent___c_o *)v2;
  sub_1BDB81C(FollowerRootComponent___c_TypeInfo->static_fields);
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