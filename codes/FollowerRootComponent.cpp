void __fastcall FollowerRootComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  struct FollowerRootComponent_StaticFields *static_fields; // x8

  if ( (byte_4B1136B & 1) == 0 )
  {
    sub_1BCA7E0(&FollowerRootComponent_TypeInfo, v1, v2);
    byte_4B1136B = 1;
  }
  static_fields = FollowerRootComponent_TypeInfo->static_fields;
  static_fields->LIST_UPDATE_MESSAGE_FONT_SIZE = 26;
  *(_QWORD *)&static_fields->RETURN_TERMINAL_MESSAGE_FONT_SIZE = 0xA0000001BLL;
  static_fields->RETURN_TERMINAL_MESSAGE_SPACING_Y = 5;
}


void __fastcall FollowerRootComponent___ctor(FollowerRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  void *v4; // x1

  if ( (byte_4B1136A & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B1136A = 1;
  }
  v4 = StringLiteral_1/*""*/;
  this->fields.backupBgmName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784(&this->fields.backupBgmName, v4);
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0LL);
}


void __fastcall FollowerRootComponent__CallbackFollowerList(
        FollowerRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_4B11351 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_11197/*"REQUEST_OK"*/, result, method);
    byte_4B11351 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1BCAA3C(0LL, result);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_11197/*"REQUEST_OK"*/, 0LL);
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
    sub_1BCAA3C(0LL, result);
  ListViewManager__SetEmptyMessageBase(operationItemListViewManager, 1, 0LL);
  FollowerRootComponent__Init(this, v5);
}


void __fastcall FollowerRootComponent__CallbackRefresh(
        FollowerRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x0
  FollowerSelectItemListViewManager_o *v10; // x20
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  FollowerSelectItemListViewManager_o *v12; // x20
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  FollowerSelectItemListViewManager_CallbackFunc_o *v16; // x21

  if ( (byte_4B11362 & 1) == 0 )
  {
    sub_1BCA7E0(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, result, method);
    sub_1BCA7E0(&Method_FollowerRootComponent_OnSelectFollowerItem__, v4, v5);
    sub_1BCA7E0(&RandomLimitCountManager_TypeInfo, v6, v7);
    byte_4B11362 = 1;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, result);
  RandomLimitCountManager__set_EnableRandomLimitCount(0, 0LL);
  RandomLimitCountManager__set_EnableRandomLimitCount(1, 0LL);
  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    goto LABEL_12;
  FollowerSelectItemListViewManager__SaveSortFilter(operationItemListViewManager, 0LL);
  operationItemListViewManager = (FollowerSelectItemListViewManager_o *)this->fields.battleSetupInfo;
  if ( !operationItemListViewManager )
    goto LABEL_12;
  v10 = this->fields.operationItemListViewManager;
  operationItemListViewManager = (FollowerSelectItemListViewManager_o *)BattleSetupInfo__TargetQuestId(
                                                                          (BattleSetupInfo_o *)operationItemListViewManager,
                                                                          0LL);
  battleSetupInfo = this->fields.battleSetupInfo;
  if ( !battleSetupInfo
    || !v10
    || (FollowerSelectItemListViewManager__CreateList(
          v10,
          (int32_t)operationItemListViewManager,
          battleSetupInfo->fields.questPhase,
          this->fields.friendPointUpVal,
          this->fields.friendPointUpMaxVal,
          this->fields.friendPointCampaignEntityList,
          battleSetupInfo->fields.questRestrictionInfo,
          0LL),
        v12 = this->fields.operationItemListViewManager,
        v16 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                                    FollowerSelectItemListViewManager_CallbackFunc_TypeInfo,
                                                                    v13,
                                                                    v14,
                                                                    v15),
        FollowerSelectItemListViewManager_CallbackFunc___ctor(
          v16,
          (Il2CppObject *)this,
          (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
          0LL),
        !v12)
    || (FollowerSelectItemListViewManager__SetMode(v12, 2, v16, 0LL),
        (operationItemListViewManager = (FollowerSelectItemListViewManager_o *)this->fields.commonConfirmDialog) == 0LL) )
  {
LABEL_12:
    sub_1BCAA3C(operationItemListViewManager, v8);
  }
  CommonConfirmDialog__Close((CommonConfirmDialog_o *)operationItemListViewManager, 0LL);
}


void __fastcall FollowerRootComponent__EndCloseShowServant(FollowerRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4B11356 & 1) == 0 )
  {
    sub_1BCA7E0(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_FollowerRootComponent_OnSelectFollowerItem__, v5, v6);
    byte_4B11356 = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v8 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                             FollowerSelectItemListViewManager_CallbackFunc_TypeInfo,
                                                             method,
                                                             v2,
                                                             v3);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
    0LL);
  if ( !operationItemListViewManager )
    sub_1BCAA3C(v9, v10);
  FollowerSelectItemListViewManager__SetMode(operationItemListViewManager, 2, v8, 0LL);
}


void __fastcall FollowerRootComponent__EndCloseShowServantEquip(
        FollowerRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4B11359 & 1) == 0 )
  {
    sub_1BCA7E0(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_FollowerRootComponent_OnSelectFollowerItem__, v5, v6);
    byte_4B11359 = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v8 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                             FollowerSelectItemListViewManager_CallbackFunc_TypeInfo,
                                                             method,
                                                             v2,
                                                             v3);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
    0LL);
  if ( !operationItemListViewManager )
    sub_1BCAA3C(v9, v10);
  FollowerSelectItemListViewManager__SetMode(operationItemListViewManager, 2, v8, 0LL);
}


void __fastcall FollowerRootComponent__EndCloseTutorialArrow(FollowerRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_GameObject_o *tutorialMaskBase2; // x0

  if ( (byte_4B11364 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_8751/*"MENU_SELECT_ITEM"*/, method, v2);
    byte_4B11364 = 1;
  }
  tutorialMaskBase2 = this->fields.tutorialMaskBase2;
  if ( !tutorialMaskBase2
    || (UnityEngine_GameObject__SetActive(tutorialMaskBase2, 0, 0LL),
        tutorialMaskBase2 = (UnityEngine_GameObject_o *)this->fields.myFSM,
        this->fields.state = 3,
        !tutorialMaskBase2) )
  {
    sub_1BCAA3C(tutorialMaskBase2, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)tutorialMaskBase2, (System_String_o *)StringLiteral_8751/*"MENU_SELECT_ITEM"*/, 0LL);
}


void __fastcall FollowerRootComponent__EndLoadCommonBg(FollowerRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Component_o *backSkinSprite; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  System_Action_o *v12; // x20
  __int64 v13; // x1

  if ( (byte_4B11349 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&AtlasManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_FollowerRootComponent_EndLoadOutGameAtlas__, v6, v7);
    byte_4B11349 = 1;
  }
  backSkinSprite = (UnityEngine_Component_o *)this->fields.backSkinSprite;
  if ( !backSkinSprite
    || (backSkinSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(backSkinSprite, 0LL)) == 0LL )
  {
    sub_1BCAA3C(backSkinSprite, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)backSkinSprite, 1, 0LL);
  v12 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v9, v10, v11);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_FollowerRootComponent_EndLoadOutGameAtlas__, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v13);
  AtlasManager__LoadOutGameAtlas(v12, 0LL);
}


void __fastcall FollowerRootComponent__EndLoadEventAtlas(FollowerRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Action_o *v9; // x20
  __int64 v10; // x1

  if ( (byte_4B1134B & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&AtlasManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_FollowerRootComponent_EndLoadPartyOrganizationAtlas__, v7, v8);
    byte_4B1134B = 1;
  }
  v9 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_FollowerRootComponent_EndLoadPartyOrganizationAtlas__, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v10);
  AtlasManager__LoadPartyOrganizationAtlas(v9, 1, 0LL);
}


void __fastcall FollowerRootComponent__EndLoadOutGameAtlas(FollowerRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Action_o *v9; // x20
  __int64 v10; // x1

  if ( (byte_4B1134A & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&AtlasManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_FollowerRootComponent_EndLoadEventAtlas__, v7, v8);
    byte_4B1134A = 1;
  }
  v9 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_FollowerRootComponent_EndLoadEventAtlas__, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v10);
  AtlasManager__LoadEventAtlas(v9, 1, 0LL);
}


void __fastcall FollowerRootComponent__EndLoadPartyOrganizationAtlas(
        FollowerRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x0
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x1

  if ( (byte_4B1134C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    sub_1BCA7E0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v4, v5);
    byte_4B1134C = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    goto LABEL_15;
  FollowerSelectItemListViewManager__AdjustButton(operationItemListViewManager, 0LL);
  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    goto LABEL_15;
  FollowerSelectItemListViewManager__SetClassBoardInfo(operationItemListViewManager, 0LL);
  SceneRootComponent__beginStartUp_39382928((SceneRootComponent_o *)this, 0LL);
  if ( this->fields.isForceFadeOut )
  {
    this->fields.isForceFadeOut = 0;
    operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !operationItemListViewManager )
      goto LABEL_15;
    CommonUI__maskFadeInit((CommonUI_o *)operationItemListViewManager, 0LL);
    operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !operationItemListViewManager )
      goto LABEL_15;
    CommonUI__maskFadeout((CommonUI_o *)operationItemListViewManager, 1, 0.0, 0LL, 0LL);
    FollowerRootComponent__StartBattleSetupMenu(this, v7);
  }
  operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !operationItemListViewManager )
    goto LABEL_15;
  if ( PartyOrganizationUtility__ExistsTemporaryPartyInfo(
         (PartyOrganizationUtility_o *)operationItemListViewManager,
         0LL) )
  {
    operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( operationItemListViewManager )
    {
      CommonUI__maskFadeInit((CommonUI_o *)operationItemListViewManager, 0LL);
      operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( operationItemListViewManager )
      {
        CommonUI__maskFadeout((CommonUI_o *)operationItemListViewManager, 1, 0.0, 0LL, 0LL);
        this->fields.state = 0;
        FollowerRootComponent__Init(this, v8);
        return;
      }
    }
LABEL_15:
    sub_1BCAA3C(operationItemListViewManager, method);
  }
}


void __fastcall FollowerRootComponent__EndOpenTutorialArrow(FollowerRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4B11368 & 1) == 0 )
  {
    sub_1BCA7E0(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_FollowerRootComponent_OnSelectFollowerItem__, v5, v6);
    byte_4B11368 = 1;
  }
  this->fields.state = 3;
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v8 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                             FollowerSelectItemListViewManager_CallbackFunc_TypeInfo,
                                                             method,
                                                             v2,
                                                             v3);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
    0LL);
  if ( !operationItemListViewManager )
    sub_1BCAA3C(v9, v10);
  FollowerSelectItemListViewManager__SetMode(operationItemListViewManager, 4, v8, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerRootComponent__EndRecommendRefreshConfirm(
        FollowerRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  FollowerRootComponent_o *v5; // x19
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  NetworkManager_ResultCallbackFunc_o *v19; // x20
  __int64 v20; // x1
  FollowerRecommendSupportListRequest_o *v21; // x20
  struct BattleSetupInfo_o *v22; // x8
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v24; // x21

  v5 = this;
  if ( (byte_4B11361 & 1) == 0 )
  {
    sub_1BCA7E0(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, isDecide, method);
    sub_1BCA7E0(&Method_FollowerRootComponent_CallbackRefresh__, v6, v7);
    sub_1BCA7E0(&Method_FollowerRootComponent_OnSelectFollowerItem__, v8, v9);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_FollowerRecommendSupportListRequest___, v10, v11);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v12, v13);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v14, v15);
    this = (FollowerRootComponent_o *)sub_1BCA7E0(
                                        &Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__,
                                        v16,
                                        v17);
    byte_4B11361 = 1;
  }
  if ( isDecide )
  {
    battleSetupInfo = v5->fields.battleSetupInfo;
    if ( !battleSetupInfo )
      goto LABEL_18;
    if ( battleSetupInfo->fields.isChildFollower )
    {
      this = (FollowerRootComponent_o *)v5->fields.titleInfo;
      if ( !this )
        goto LABEL_18;
      TitleInfoControl__setBackBtnEnable((TitleInfoControl_o *)this, 0, 0LL);
      this = (FollowerRootComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !this )
        goto LABEL_18;
      LOBYTE(this->fields.followerQuestInfomationDraw) = 1;
    }
    v19 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(
                                                   NetworkManager_ResultCallbackFunc_TypeInfo,
                                                   isDecide,
                                                   method,
                                                   v3);
    NetworkManager_ResultCallbackFunc___ctor(
      v19,
      (Il2CppObject *)v5,
      Method_FollowerRootComponent_CallbackRefresh__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v20);
    this = (FollowerRootComponent_o *)NetworkManager__getRequest_object_(
                                        v19,
                                        (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_FollowerRecommendSupportListRequest___);
    if ( v5->fields.battleSetupInfo )
    {
      v21 = (FollowerRecommendSupportListRequest_o *)this;
      this = (FollowerRootComponent_o *)BattleSetupInfo__TargetQuestId(v5->fields.battleSetupInfo, 0LL);
      v22 = v5->fields.battleSetupInfo;
      if ( v22 )
      {
        if ( v21 )
        {
          FollowerRecommendSupportListRequest__beginRequest(v21, 1, (int32_t)this, v22->fields.questPhase, 0LL);
          return;
        }
      }
    }
LABEL_18:
    sub_1BCAA3C(this, isDecide);
  }
  operationItemListViewManager = v5->fields.operationItemListViewManager;
  v24 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                              FollowerSelectItemListViewManager_CallbackFunc_TypeInfo,
                                                              isDecide,
                                                              method,
                                                              v3);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v24,
    (Il2CppObject *)v5,
    (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
    0LL);
  if ( !operationItemListViewManager )
    goto LABEL_18;
  FollowerSelectItemListViewManager__SetMode(operationItemListViewManager, 2, v24, 0LL);
  this = (FollowerRootComponent_o *)v5->fields.commonConfirmDialog;
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
  __int64 v3; // x3
  FollowerRootComponent_o *v5; // x19
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  NetworkManager_ResultCallbackFunc_o *v19; // x20
  __int64 v20; // x1
  FollowerListRequest_o *v21; // x20
  struct BattleSetupInfo_o *v22; // x8
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v24; // x21

  v5 = this;
  if ( (byte_4B11360 & 1) == 0 )
  {
    sub_1BCA7E0(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, isDecide, method);
    sub_1BCA7E0(&Method_FollowerRootComponent_CallbackRefresh__, v6, v7);
    sub_1BCA7E0(&Method_FollowerRootComponent_OnSelectFollowerItem__, v8, v9);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_FollowerListRequest___, v10, v11);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v12, v13);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v14, v15);
    this = (FollowerRootComponent_o *)sub_1BCA7E0(
                                        &Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__,
                                        v16,
                                        v17);
    byte_4B11360 = 1;
  }
  if ( isDecide )
  {
    battleSetupInfo = v5->fields.battleSetupInfo;
    if ( !battleSetupInfo )
      goto LABEL_18;
    if ( battleSetupInfo->fields.isChildFollower )
    {
      this = (FollowerRootComponent_o *)v5->fields.titleInfo;
      if ( !this )
        goto LABEL_18;
      TitleInfoControl__setBackBtnEnable((TitleInfoControl_o *)this, 0, 0LL);
      this = (FollowerRootComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !this )
        goto LABEL_18;
      LOBYTE(this->fields.followerQuestInfomationDraw) = 1;
    }
    v19 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(
                                                   NetworkManager_ResultCallbackFunc_TypeInfo,
                                                   isDecide,
                                                   method,
                                                   v3);
    NetworkManager_ResultCallbackFunc___ctor(
      v19,
      (Il2CppObject *)v5,
      Method_FollowerRootComponent_CallbackRefresh__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v20);
    this = (FollowerRootComponent_o *)NetworkManager__getRequest_object_(
                                        v19,
                                        (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_FollowerListRequest___);
    if ( v5->fields.battleSetupInfo )
    {
      v21 = (FollowerListRequest_o *)this;
      this = (FollowerRootComponent_o *)BattleSetupInfo__TargetQuestId(v5->fields.battleSetupInfo, 0LL);
      v22 = v5->fields.battleSetupInfo;
      if ( v22 )
      {
        if ( v21 )
        {
          FollowerListRequest__beginRequest(v21, 1, (int32_t)this, v22->fields.questPhase, 0LL);
          return;
        }
      }
    }
LABEL_18:
    sub_1BCAA3C(this, isDecide);
  }
  operationItemListViewManager = v5->fields.operationItemListViewManager;
  v24 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                              FollowerSelectItemListViewManager_CallbackFunc_TypeInfo,
                                                              isDecide,
                                                              method,
                                                              v3);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v24,
    (Il2CppObject *)v5,
    (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
    0LL);
  if ( !operationItemListViewManager )
    goto LABEL_18;
  FollowerSelectItemListViewManager__SetMode(operationItemListViewManager, 2, v24, 0LL);
  this = (FollowerRootComponent_o *)v5->fields.commonConfirmDialog;
  if ( !this )
    goto LABEL_18;
  CommonConfirmDialog__Close((CommonConfirmDialog_o *)this, 0LL);
}


void __fastcall FollowerRootComponent__EndRefreshRest(FollowerRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4B11363 & 1) == 0 )
  {
    sub_1BCA7E0(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_FollowerRootComponent_OnSelectFollowerItem__, v5, v6);
    byte_4B11363 = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v8 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                             FollowerSelectItemListViewManager_CallbackFunc_TypeInfo,
                                                             method,
                                                             v2,
                                                             v3);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
    0LL);
  if ( !operationItemListViewManager )
    sub_1BCAA3C(v9, v10);
  FollowerSelectItemListViewManager__SetMode(operationItemListViewManager, 2, v8, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerRootComponent__EndShowServant(
        FollowerRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  ListViewManager_o *operationItemListViewManager; // x0
  Il2CppObject *Instance; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  System_Action_o *v13; // x21

  if ( (byte_4B11355 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, method);
    sub_1BCA7E0(&Method_FollowerRootComponent_EndCloseShowServant__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    byte_4B11355 = 1;
  }
  operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager
    || (ListViewManager__SetScrollView(
          operationItemListViewManager,
          this->fields.openScroll,
          this->fields.openOffset,
          0LL),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v13 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v10, v11, v12),
        System_Action___ctor(v13, (Il2CppObject *)this, Method_FollowerRootComponent_EndCloseShowServant__, 0LL),
        !Instance) )
  {
    sub_1BCAA3C(operationItemListViewManager, isDecide);
  }
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v13, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerRootComponent__EndShowServantEquip(
        FollowerRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  ListViewManager_o *operationItemListViewManager; // x0
  Il2CppObject *Instance; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  System_Action_o *v13; // x21

  if ( (byte_4B11358 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, method);
    sub_1BCA7E0(&Method_FollowerRootComponent_EndCloseShowServantEquip__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    byte_4B11358 = 1;
  }
  operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager
    || (ListViewManager__SetScrollView(
          operationItemListViewManager,
          this->fields.openScroll,
          this->fields.openOffset,
          0LL),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v13 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v10, v11, v12),
        System_Action___ctor(v13, (Il2CppObject *)this, Method_FollowerRootComponent_EndCloseShowServantEquip__, 0LL),
        !Instance) )
  {
    sub_1BCAA3C(operationItemListViewManager, isDecide);
  }
  CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)Instance, v13, 0LL);
}


void __fastcall FollowerRootComponent__EndTutorialFollowerCommonGuide(
        FollowerRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4B11369 & 1) == 0 )
  {
    sub_1BCA7E0(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_FollowerRootComponent_OnSelectFollowerItem__, v5, v6);
    byte_4B11369 = 1;
  }
  this->fields.state = 3;
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v8 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                             FollowerSelectItemListViewManager_CallbackFunc_TypeInfo,
                                                             method,
                                                             v2,
                                                             v3);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
    0LL);
  if ( !operationItemListViewManager )
    sub_1BCAA3C(v9, v10);
  FollowerSelectItemListViewManager__SetMode(operationItemListViewManager, 2, v8, 0LL);
}


void __fastcall FollowerRootComponent__EndTutorialFollowerGuideNotification1(
        FollowerRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  TitleInfoControl_o *titleInfo; // x0
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  FollowerSelectItemListViewManager_CallbackFunc_o *v11; // x21

  if ( (byte_4B11366 & 1) == 0 )
  {
    sub_1BCA7E0(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_FollowerRootComponent_OnSelectFollowerItem__, v4, v5);
    byte_4B11366 = 1;
  }
  titleInfo = this->fields.titleInfo;
  this->fields.state = 3;
  if ( !titleInfo
    || (TitleInfoControl__setBackBtnEnable(titleInfo, 0, 0LL),
        operationItemListViewManager = this->fields.operationItemListViewManager,
        v11 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                                    FollowerSelectItemListViewManager_CallbackFunc_TypeInfo,
                                                                    v8,
                                                                    v9,
                                                                    v10),
        FollowerSelectItemListViewManager_CallbackFunc___ctor(
          v11,
          (Il2CppObject *)this,
          (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
          0LL),
        !operationItemListViewManager) )
  {
    sub_1BCAA3C(titleInfo, method);
  }
  FollowerSelectItemListViewManager__SetMode(operationItemListViewManager, 2, v11, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerRootComponent__EndTutorialFollowerGuideNotification2(
        FollowerRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_GameObject_o *tutorialMaskBase2; // x0
  __int64 v11; // x1
  bool IsUnderVista; // w22
  Il2CppObject *Instance; // x20
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  System_Action_o *v17; // x21
  float v18; // s0
  float v19; // s3
  float v20; // s4
  int v21; // s1
  int v22; // s5
  int v23; // s6

  if ( (byte_4B11367 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&FSUtility_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_FollowerRootComponent_EndOpenTutorialArrow__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    byte_4B11367 = 1;
  }
  tutorialMaskBase2 = this->fields.tutorialMaskBase2;
  if ( !tutorialMaskBase2 )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(tutorialMaskBase2, 1, 0LL);
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, v11);
  IsUnderVista = FSUtility__IsUnderVista(0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v17 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v14, v15, v16);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_FollowerRootComponent_EndOpenTutorialArrow__, 0LL);
  if ( !Instance )
LABEL_12:
    sub_1BCAA3C(tutorialMaskBase2, method);
  v18 = -12.0;
  v19 = -492.0;
  if ( IsUnderVista )
    v19 = -500.0;
  if ( IsUnderVista )
    v18 = -20.0;
  v20 = -14.0;
  v21 = 1120403456;
  v22 = 1148846080;
  v23 = 1125515264;
  CommonUI__OpenTutorialArrowMark(
    (CommonUI_o *)Instance,
    *(UnityEngine_Vector2_o *)&v18,
    0.0,
    *(UnityEngine_Rect_o *)&v19,
    v17,
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 battleSetupInfo; // x0
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  struct BattleSetupInfo_o *v44; // x8
  __int64 v45; // x1
  int32_t InitialDisplayClass; // w20
  __int64 v47; // x2
  __int64 v48; // x3
  Il2CppObject *v49; // x20
  struct BattleSetupInfo_o *v50; // x8
  FollowerSelectItemListViewManager_o *v51; // x20
  struct BattleSetupInfo_o *v52; // x8
  __int64 v53; // x2
  __int64 v54; // x3
  PartyOrganizationUtility_c *v55; // x0
  __int64 v56; // x1
  Il2CppObject *Instance; // x20
  __int64 v58; // x2
  __int64 v59; // x3
  System_String_o *v60; // x21
  FollowerRootComponent___c_c *v61; // x8
  System_Action_o *_9__50_0; // x23
  System_String_o *v63; // x22
  Il2CppObject *v64; // x24
  struct FollowerRootComponent___c_StaticFields *static_fields; // x0
  FollowerSelectItemListViewManager_o *v66; // x20
  System_Action_o *v67; // x21
  NetworkManager_ResultCallbackFunc_o *v68; // x20
  __int64 v69; // x1
  FollowerRecommendSupportListRequest_o *v70; // x20
  struct BattleSetupInfo_o *v71; // x8
  Il2CppObject *entity; // [xsp+38h] [xbp-48h] BYREF

  if ( (byte_4B11352 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&ClassButtonControlComponent_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserRecommendFollowerMaster___, v6, v7);
    sub_1BCA7E0(&DataManager_TypeInfo, v8, v9);
    sub_1BCA7E0(
      &Method_DataMasterBase_UserRecommendFollowerMaster__UserRecommendFollowerEntity__long__TryGetSingleEntity__,
      v10,
      v11);
    sub_1BCA7E0(&Method_FollowerRootComponent_CallbackInitRecommendFollowerRequest__, v12, v13);
    sub_1BCA7E0(&Method_FollowerRootComponent_OnMoveEnd__, v14, v15);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_FollowerRecommendSupportListRequest___, v18, v19);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v20, v21);
    sub_1BCA7E0(&PartyOrganizationUtility_TypeInfo, v22, v23);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v24, v25);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v26, v27);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v28, v29);
    sub_1BCA7E0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v30, v31);
    sub_1BCA7E0(&Method_FollowerRootComponent___c__Init_b__50_0__, v32, v33);
    sub_1BCA7E0(&FollowerRootComponent___c_TypeInfo, v34, v35);
    sub_1BCA7E0(&StringLiteral_8751/*"MENU_SELECT_ITEM"*/, v36, v37);
    sub_1BCA7E0(&StringLiteral_10400/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_EXPIRED"*/, v38, v39);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v40, v41);
    byte_4B11352 = 1;
  }
  entity = 0LL;
  if ( !this->fields.state )
  {
    if ( this->fields.isInitRecommendRequest )
      goto LABEL_19;
    battleSetupInfo = (__int64)this->fields.battleSetupInfo;
    if ( !battleSetupInfo )
      goto LABEL_57;
    operationItemListViewManager = this->fields.operationItemListViewManager;
    battleSetupInfo = BattleSetupInfo__TargetQuestId((BattleSetupInfo_o *)battleSetupInfo, 0LL);
    v44 = this->fields.battleSetupInfo;
    if ( !v44 || !operationItemListViewManager )
      goto LABEL_57;
    InitialDisplayClass = FollowerSelectItemListViewManager__GetInitialDisplayClass(
                            operationItemListViewManager,
                            battleSetupInfo,
                            v44->fields.questPhase,
                            1,
                            0LL);
    if ( !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo, v45);
    if ( !ClassButtonControlComponent__IsRecommendSupportGroupType(InitialDisplayClass, 0LL) )
      goto LABEL_19;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
    battleSetupInfo = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserRecommendFollowerMaster___);
    if ( !battleSetupInfo )
      goto LABEL_57;
    if ( !DataMasterBase_object__object__long___TryGetSingleEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)battleSetupInfo,
            &entity,
            (const MethodInfo_31B30C8 *)Method_DataMasterBase_UserRecommendFollowerMaster__UserRecommendFollowerEntity__long__TryGetSingleEntity__) )
      goto LABEL_48;
    battleSetupInfo = (__int64)this->fields.battleSetupInfo;
    if ( !battleSetupInfo )
      goto LABEL_57;
    v49 = entity;
    battleSetupInfo = BattleSetupInfo__TargetQuestId((BattleSetupInfo_o *)battleSetupInfo, 0LL);
    v50 = this->fields.battleSetupInfo;
    if ( !v50 || !v49 )
      goto LABEL_57;
    if ( UserRecommendFollowerEntity__IsEnableSupport(
           (UserRecommendFollowerEntity_o *)v49,
           battleSetupInfo,
           v50->fields.questPhase,
           0LL) )
    {
LABEL_19:
      battleSetupInfo = (__int64)this->fields.operationItemListViewManager;
      if ( !battleSetupInfo )
        goto LABEL_57;
      battleSetupInfo = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)battleSetupInfo, 0LL);
      if ( !battleSetupInfo )
        goto LABEL_57;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)battleSetupInfo, 1, 0LL);
      battleSetupInfo = (__int64)this->fields.battleSetupInfo;
      if ( !battleSetupInfo )
        goto LABEL_57;
      v51 = this->fields.operationItemListViewManager;
      battleSetupInfo = BattleSetupInfo__TargetQuestId((BattleSetupInfo_o *)battleSetupInfo, 0LL);
      v52 = this->fields.battleSetupInfo;
      if ( !v52 )
        goto LABEL_57;
      if ( !v51 )
        goto LABEL_57;
      FollowerSelectItemListViewManager__CreateList(
        v51,
        battleSetupInfo,
        v52->fields.questPhase,
        this->fields.friendPointUpVal,
        this->fields.friendPointUpMaxVal,
        this->fields.friendPointCampaignEntityList,
        v52->fields.questRestrictionInfo,
        0LL);
      battleSetupInfo = (__int64)this->fields.operationItemListViewManager;
      if ( !battleSetupInfo )
        goto LABEL_57;
      if ( ListViewManager__get_ItemSum((ListViewManager_o *)battleSetupInfo, 0LL) > 0 )
        goto LABEL_28;
      battleSetupInfo = (__int64)this->fields.operationItemListViewManager;
      if ( !battleSetupInfo )
        goto LABEL_57;
      if ( FollowerSelectItemListViewManager__GetItemCount((FollowerSelectItemListViewManager_o *)battleSetupInfo, 0LL) < 1 )
      {
        battleSetupInfo = (__int64)this->fields.myFSM;
        this->fields.selectItemNum = -1;
        if ( battleSetupInfo )
        {
          PlayMakerFSM__SendEvent((PlayMakerFSM_o *)battleSetupInfo, (System_String_o *)StringLiteral_8751/*"MENU_SELECT_ITEM"*/, 0LL);
          return;
        }
      }
      else
      {
LABEL_28:
        battleSetupInfo = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
        if ( !battleSetupInfo )
          goto LABEL_57;
        if ( *(_BYTE *)(battleSetupInfo + 148) )
        {
          v55 = PartyOrganizationUtility_TypeInfo;
          if ( !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo, method);
            v55 = PartyOrganizationUtility_TypeInfo;
          }
          if ( UnityEngine_PlayerPrefs__GetInt(v55->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0, 0LL) )
          {
            battleSetupInfo = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
            if ( !battleSetupInfo )
              goto LABEL_57;
            if ( !PartyOrganizationUtility__IsAvailableFriendshipUpItem(
                    (PartyOrganizationUtility_o *)battleSetupInfo,
                    0LL) )
            {
              Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v56);
              battleSetupInfo = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_10400/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_EXPIRED"*/, 0LL);
              v60 = (System_String_o *)battleSetupInfo;
              v61 = FollowerRootComponent___c_TypeInfo;
              if ( !FollowerRootComponent___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(FollowerRootComponent___c_TypeInfo, method);
                v61 = FollowerRootComponent___c_TypeInfo;
              }
              _9__50_0 = v61->static_fields->__9__50_0;
              v63 = (System_String_o *)StringLiteral_1/*""*/;
              if ( !_9__50_0 )
              {
                if ( !v61->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v61, method);
                  v61 = FollowerRootComponent___c_TypeInfo;
                }
                v64 = (Il2CppObject *)v61->static_fields->__9;
                _9__50_0 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v58, v59);
                System_Action___ctor(_9__50_0, v64, Method_FollowerRootComponent___c__Init_b__50_0__, 0LL);
                static_fields = FollowerRootComponent___c_TypeInfo->static_fields;
                static_fields->__9__50_0 = _9__50_0;
                battleSetupInfo = sub_1BCA784(&static_fields->__9__50_0, _9__50_0);
              }
              if ( !Instance )
                goto LABEL_57;
              CommonUI__OpenNotificationDialog(
                (CommonUI_o *)Instance,
                v63,
                v60,
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
        v66 = this->fields.operationItemListViewManager;
        v67 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v53, v54);
        System_Action___ctor(v67, (Il2CppObject *)this, Method_FollowerRootComponent_OnMoveEnd__, 0LL);
        if ( v66 )
        {
          FollowerSelectItemListViewManager__SetMode_31424700(v66, 1, v67, 0LL);
          return;
        }
      }
    }
    else
    {
LABEL_48:
      v68 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(
                                                     NetworkManager_ResultCallbackFunc_TypeInfo,
                                                     method,
                                                     v47,
                                                     v48);
      NetworkManager_ResultCallbackFunc___ctor(
        v68,
        (Il2CppObject *)this,
        Method_FollowerRootComponent_CallbackInitRecommendFollowerRequest__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v69);
      battleSetupInfo = (__int64)NetworkManager__getRequest_object_(
                                   v68,
                                   (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_FollowerRecommendSupportListRequest___);
      if ( this->fields.battleSetupInfo )
      {
        v70 = (FollowerRecommendSupportListRequest_o *)battleSetupInfo;
        battleSetupInfo = BattleSetupInfo__TargetQuestId(this->fields.battleSetupInfo, 0LL);
        v71 = this->fields.battleSetupInfo;
        if ( v71 )
        {
          if ( v70 )
          {
            FollowerRecommendSupportListRequest__beginRequest(v70, 0, battleSetupInfo, v71->fields.questPhase, 0LL);
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
LABEL_57:
    sub_1BCAA3C(battleSetupInfo, method);
  }
}


void __fastcall FollowerRootComponent__OnClickBack(FollowerRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  void *Instance; // x0
  __int64 v45; // x1
  SceneRootComponent_o *StackedRootComponent; // x0
  __int64 v47; // x1
  __int64 methodPtr_low; // x10
  UnityEngine_Component_o *v49; // x20
  _QWORD *v50; // x0
  System_Reflection_MethodBase_o *v51; // x0
  _QWORD *monitor; // x8
  int v53; // w8
  void *v54; // x19
  unsigned int v55; // w20
  _QWORD *v56; // x0
  System_Reflection_MethodBase_o *v57; // x0
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  __int64 *v59; // x8
  _QWORD *v60; // x0
  System_Reflection_MethodBase_o *v61; // x0
  __int64 v62; // x1
  TerminalPramsManager_c *v63; // x0
  int lastPlayQuestConsumeAp; // w21
  System_String_o **v65; // x8
  __int64 v66; // x1
  System_String_o *v67; // x20
  System_String_o *v68; // x21
  Il2CppObject *v69; // x22
  System_String_o *v70; // x23
  System_String_o *v71; // x24
  __int64 v72; // x1
  __int64 v73; // x2
  __int64 v74; // x3
  CommonConfirmDialog_ClickDelegate_o *v75; // x25

  if ( (byte_4B11365 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleRootComponent_TypeInfo, method, v2);
    sub_1BCA7E0(&CommonConfirmDialog_ClickDelegate_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentsInChildren_Camera___, v6, v7);
    sub_1BCA7E0(&Method_FollowerRootComponent_OnClickBack__, v8, v9);
    sub_1BCA7E0(&Method_FollowerRootComponent__OnClickBack_b__71_0__, v10, v11);
    sub_1BCA7E0(&FollowerRootComponent_TypeInfo, v12, v13);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v14, v15);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v18, v19);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v20, v21);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v22, v23);
    sub_1BCA7E0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v24, v25);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v26, v27);
    sub_1BCA7E0(&StringLiteral_6527/*"FOLLOWER_SELECT_BACK_TO_QUEST_NO_AP_CONSUME_AP0"*/, v28, v29);
    sub_1BCA7E0(&StringLiteral_3554/*"CLICK_BACK"*/, v30, v31);
    sub_1BCA7E0(&StringLiteral_6526/*"FOLLOWER_SELECT_BACK_TO_QUEST_NO_AP_CONSUME"*/, v32, v33);
    sub_1BCA7E0(&StringLiteral_6525/*"FOLLOWER_SELECT_BACK_TITLE"*/, v34, v35);
    sub_1BCA7E0(&StringLiteral_3790/*"COMMON_CONFIRM_NO"*/, v36, v37);
    sub_1BCA7E0(&StringLiteral_3795/*"COMMON_CONFIRM_YES"*/, v38, v39);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v40, v41);
    sub_1BCA7E0(&StringLiteral_3555/*"CLICK_BACK_BATTLE_SETUP"*/, v42, v43);
    byte_4B11365 = 1;
  }
  if ( this->fields.state == 3 && !this->fields.tutorialState )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( !Instance )
      goto LABEL_62;
    if ( !*((_BYTE *)Instance + 148) )
      goto LABEL_34;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_62;
    StackedRootComponent = AvalonSceneManager__GetStackedRootComponent((AvalonSceneManager_o *)Instance, 0LL);
    if ( StackedRootComponent
      && (methodPtr_low = LOBYTE(BattleRootComponent_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(StackedRootComponent->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
    {
      if ( (BattleRootComponent_c *)StackedRootComponent->klass->_2.typeHierarchy[methodPtr_low - 1] == BattleRootComponent_TypeInfo )
        v49 = (UnityEngine_Component_o *)StackedRootComponent;
      else
        v49 = 0LL;
    }
    else
    {
      v49 = 0LL;
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v47);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v49, 0LL, 0LL) )
    {
      v50 = Method_FollowerRootComponent_OnClickBack__;
      if ( (*((_BYTE *)Method_FollowerRootComponent_OnClickBack__ + 83) & 2) != 0 )
        v50 = (_QWORD *)sub_1BCA7F8(Method_FollowerRootComponent_OnClickBack__);
      v51 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v50, v50[4]);
      OverwriteAssetSoundName__PlaySystemSe(v51, 1, 0LL);
      this->fields.state = 4;
      if ( v49 )
      {
        Instance = UnityEngine_Component__get_gameObject(v49, 0LL);
        if ( Instance )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
          monitor = v49[3].monitor;
          if ( monitor )
          {
            Instance = (void *)monitor[62];
            if ( Instance )
            {
              BattleResultComponent__EndResult((BattleResultComponent_o *)Instance, 0LL);
              Instance = this->fields.myFSM;
              if ( Instance )
              {
                PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3554/*"CLICK_BACK"*/, 0LL);
                Instance = UnityEngine_Component__get_transform(v49, 0LL);
                if ( Instance )
                {
                  Instance = UnityEngine_Component__GetComponentsInChildren_object__49324452(
                               (UnityEngine_Component_o *)Instance,
                               (const MethodInfo_2F0A1A4 *)Method_UnityEngine_Component_GetComponentsInChildren_Camera___);
                  if ( Instance )
                  {
                    v53 = *((_DWORD *)Instance + 6);
                    v54 = Instance;
                    if ( v53 < 1 )
                      return;
                    v55 = 0;
                    while ( 1 )
                    {
                      if ( v55 >= v53 )
                        sub_1BCAA44(Instance, v45);
                      Instance = (void *)*((_QWORD *)v54 + (int)v55 + 4);
                      if ( !Instance )
                        break;
                      Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
                      if ( !Instance )
                        break;
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
                      v53 = *((_DWORD *)v54 + 6);
                      if ( (int)++v55 >= v53 )
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
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( !Instance )
        goto LABEL_62;
      if ( AvalonSceneManager__IsStackScene((AvalonSceneManager_o *)Instance, 0LL) )
        goto LABEL_40;
      Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_62;
      if ( *((int *)Instance + 12) > 0 )
        goto LABEL_40;
      Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_62;
      if ( *((_BYTE *)Instance + 137) )
      {
LABEL_40:
        v56 = Method_FollowerRootComponent_OnClickBack__;
        if ( (*((_BYTE *)Method_FollowerRootComponent_OnClickBack__ + 83) & 2) != 0 )
          v56 = (_QWORD *)sub_1BCA7F8(Method_FollowerRootComponent_OnClickBack__);
        v57 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v56, v56[4]);
        OverwriteAssetSoundName__PlaySystemSe(v57, 1, 0LL);
        battleSetupInfo = this->fields.battleSetupInfo;
        this->fields.state = 4;
        if ( battleSetupInfo )
        {
          Instance = this->fields.myFSM;
          if ( Instance )
          {
            if ( battleSetupInfo->fields.isChildFollower )
              v59 = &StringLiteral_3555/*"CLICK_BACK_BATTLE_SETUP"*/;
            else
              v59 = &StringLiteral_3554/*"CLICK_BACK"*/;
            PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v59, 0LL);
            return;
          }
        }
      }
      else
      {
        v60 = Method_FollowerRootComponent_OnClickBack__;
        if ( (*((_BYTE *)Method_FollowerRootComponent_OnClickBack__ + 83) & 2) != 0 )
          v60 = (_QWORD *)sub_1BCA7F8(Method_FollowerRootComponent_OnClickBack__);
        v61 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v60, v60[4]);
        OverwriteAssetSoundName__PlaySystemSe(v61, 1, 0LL);
        v63 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v62);
          v63 = TerminalPramsManager_TypeInfo;
        }
        lastPlayQuestConsumeAp = v63->static_fields->lastPlayQuestConsumeAp;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v62);
        v65 = (System_String_o **)&StringLiteral_6526/*"FOLLOWER_SELECT_BACK_TO_QUEST_NO_AP_CONSUME"*/;
        if ( lastPlayQuestConsumeAp <= 0 )
          v65 = (System_String_o **)&StringLiteral_6527/*"FOLLOWER_SELECT_BACK_TO_QUEST_NO_AP_CONSUME_AP0"*/;
        v67 = LocalizationManager__Get(*v65, 0LL);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v66);
        v68 = LocalizationManager__Get((System_String_o *)StringLiteral_6525/*"FOLLOWER_SELECT_BACK_TITLE"*/, 0LL);
        v69 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v70 = LocalizationManager__Get((System_String_o *)StringLiteral_3795/*"COMMON_CONFIRM_YES"*/, 0LL);
        v71 = LocalizationManager__Get((System_String_o *)StringLiteral_3790/*"COMMON_CONFIRM_NO"*/, 0LL);
        v75 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BCAA2C(
                                                       CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                       v72,
                                                       v73,
                                                       v74);
        CommonConfirmDialog_ClickDelegate___ctor(
          v75,
          (Il2CppObject *)this,
          Method_FollowerRootComponent__OnClickBack_b__71_0__,
          0LL);
        Instance = FollowerRootComponent_TypeInfo;
        if ( !FollowerRootComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FollowerRootComponent_TypeInfo, v45);
          Instance = FollowerRootComponent_TypeInfo;
        }
        if ( v69 )
        {
          CommonUI__OpenConfirmDecideDlg(
            (CommonUI_o *)v69,
            v68,
            v67,
            v70,
            v71,
            v75,
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
    sub_1BCAA3C(Instance, v45);
  }
}


void __fastcall FollowerRootComponent__OnMoveEnd(FollowerRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  int32_t tutorialMode; // w8
  __int64 v25; // x1
  Il2CppObject *Instance; // x20
  System_String_o *v27; // x21
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  System_Action_o *v31; // x0
  __int64 *v32; // x8
  BattleSetupInfo_o *battleSetupInfo; // x0
  int32_t eventId; // w20
  struct BattleSetupInfo_o *v35; // x8
  __int64 v36; // x2
  __int64 v37; // x3
  struct BattleSetupInfo_o *v38; // x8
  int32_t v39; // w20
  System_Action_o *v40; // x21
  struct BattleSetupInfo_o *v41; // x8
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v43; // x21
  const MethodInfo *v44; // x1
  __int64 v45; // x1
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  System_Action_o *v49; // x22

  if ( (byte_4B1135E & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_FollowerRootComponent_EndTutorialFollowerCommonGuide__, v6, v7);
    sub_1BCA7E0(&Method_FollowerRootComponent_EndTutorialFollowerGuideNotification1__, v8, v9);
    sub_1BCA7E0(&Method_FollowerRootComponent_EndTutorialFollowerGuideNotification2__, v10, v11);
    sub_1BCA7E0(&Method_FollowerRootComponent_OnSelectFollowerItem__, v12, v13);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v16, v17);
    sub_1BCA7E0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v18, v19);
    sub_1BCA7E0(&StringLiteral_13658/*"TUTORIAL_MESSAGE_FOLLOWER2"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_13657/*"TUTORIAL_MESSAGE_FOLLOWER1"*/, v22, v23);
    byte_4B1135E = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( this->fields.tutorialState == 1 )
    {
      tutorialMode = this->fields.tutorialMode;
      *(_QWORD *)&this->fields.tutorialState = 0x200000002LL;
      if ( tutorialMode == 3 )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v45);
        v27 = LocalizationManager__Get((System_String_o *)StringLiteral_13658/*"TUTORIAL_MESSAGE_FOLLOWER2"*/, 0LL);
        v31 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v46, v47, v48);
        v32 = &Method_FollowerRootComponent_EndTutorialFollowerGuideNotification2__;
LABEL_25:
        v49 = v31;
        System_Action___ctor(v31, (Il2CppObject *)this, *v32, 0LL);
        if ( Instance )
        {
          CommonUI__OpenTutorialNotificationDialog((CommonUI_o *)Instance, v27, -1, v49, 0LL);
          return;
        }
LABEL_27:
        sub_1BCAA3C(battleSetupInfo, method);
      }
      if ( tutorialMode == 2 )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v25);
        v27 = LocalizationManager__Get((System_String_o *)StringLiteral_13657/*"TUTORIAL_MESSAGE_FOLLOWER1"*/, 0LL);
        v31 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v28, v29, v30);
        v32 = &Method_FollowerRootComponent_EndTutorialFollowerGuideNotification1__;
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
      v35 = this->fields.battleSetupInfo;
      if ( !v35 )
        goto LABEL_27;
      battleSetupInfo = (BattleSetupInfo_o *)EventTutorialMaster__IsTutorialAvailable(
                                               eventId,
                                               15,
                                               (int32_t)battleSetupInfo,
                                               v35->fields.questPhase,
                                               0,
                                               0,
                                               0LL);
      if ( ((unsigned __int8)battleSetupInfo & 1) != 0 )
      {
        v38 = this->fields.battleSetupInfo;
        this->fields.state = 2;
        if ( v38 )
        {
          v39 = v38->fields.eventId;
          v40 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v36, v37);
          System_Action___ctor(
            v40,
            (Il2CppObject *)this,
            Method_FollowerRootComponent_EndTutorialFollowerCommonGuide__,
            0LL);
          battleSetupInfo = this->fields.battleSetupInfo;
          if ( battleSetupInfo )
          {
            battleSetupInfo = (BattleSetupInfo_o *)BattleSetupInfo__TargetQuestId(battleSetupInfo, 0LL);
            v41 = this->fields.battleSetupInfo;
            if ( v41 )
            {
              EventTutorialMaster__CheckTutorial(
                v39,
                15,
                v40,
                (int32_t)battleSetupInfo,
                v41->fields.questPhase,
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
      v43 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                                  FollowerSelectItemListViewManager_CallbackFunc_TypeInfo,
                                                                  method,
                                                                  v36,
                                                                  v37);
      FollowerSelectItemListViewManager_CallbackFunc___ctor(
        v43,
        (Il2CppObject *)this,
        (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
        0LL);
      if ( !operationItemListViewManager )
        goto LABEL_27;
      FollowerSelectItemListViewManager__SetMode(operationItemListViewManager, 2, v43, 0LL);
      battleSetupInfo = (BattleSetupInfo_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !battleSetupInfo )
        goto LABEL_27;
      if ( PartyOrganizationUtility__ExistsTemporaryPartyInfo((PartyOrganizationUtility_o *)battleSetupInfo, 0LL) )
        FollowerRootComponent__StartBattleSetupMenu(this, v44);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x1
  __int64 v78; // x2
  __int64 v79; // x1
  __int64 v80; // x2
  __int64 v81; // x1
  __int64 v82; // x2
  __int64 v83; // x1
  __int64 v84; // x2
  __int64 v85; // x1
  __int64 v86; // x2
  __int64 v87; // x1
  __int64 v88; // x2
  const MethodInfo *v89; // x3
  __int64 v90; // x8
  __int64 v91; // x20
  SkillInfo_o *v92; // x22
  _QWORD *v93; // x0
  System_Reflection_MethodBase_o *v94; // x0
  __int64 v95; // x1
  Il2CppObject *v96; // x20
  __int64 v97; // x1
  System_String_o *v98; // x20
  System_String_o *v99; // x21
  Il2CppObject *v100; // x0
  System_String_o *v101; // x0
  int32_t v102; // w20
  __int64 v103; // x1
  __int64 v104; // x2
  __int64 v105; // x3
  _QWORD *v106; // x0
  System_Reflection_MethodBase_o *v107; // x0
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v109; // x0
  intptr_t v110; // w2
  _QWORD *v111; // x0
  System_Reflection_MethodBase_o *v112; // x0
  const MethodInfo *v113; // x2
  __int64 v114; // x20
  __int64 v115; // x2
  __int64 v116; // x3
  SkillInfo_o *v117; // x24
  Il2CppObject *Entity; // x21
  FollowerRootComponent_o *v119; // x20
  __int64 v120; // x1
  System_String_o *v121; // x21
  System_String_o *v122; // x22
  Il2CppObject *v123; // x0
  System_String_o *v124; // x0
  FollowerRootComponent_o *v125; // x21
  Il2CppObject *v126; // x0
  System_String_o *v127; // x0
  int32_t tutorialMode; // w21
  System_String_o *v129; // x20
  _QWORD *v130; // x0
  System_Reflection_MethodBase_o *v131; // x0
  __int64 v132; // x1
  bool v133; // w22
  __int64 v134; // x1
  __int64 v135; // x2
  __int64 v136; // x3
  CommonConfirmDialog_ClickDelegate_o *v137; // x21
  __int64 v138; // x1
  bool v139; // w20
  __int64 v140; // x1
  __int64 v141; // x2
  __int64 v142; // x3
  CommonConfirmDialog_o *commonConfirmDialog; // x19
  System_String_o *v144; // x20
  FollowerRootComponent_o *v145; // x22
  int32_t v146; // w8
  _QWORD *v147; // x0
  System_Reflection_MethodBase_o *v148; // x0
  FollowerRootComponent_o *v149; // x20
  PartyOrganizationUtility_c *v150; // x0
  _QWORD *v151; // x0
  System_Reflection_MethodBase_o *v152; // x0
  int32_t v153; // w8
  __int64 *v154; // x8
  FollowerRootComponent_o *v155; // x20
  _QWORD *v156; // x0
  System_Reflection_MethodBase_o *v157; // x0
  const MethodInfo *v158; // x2
  _QWORD *v159; // x0
  System_Reflection_MethodBase_o *v160; // x0
  __int64 v161; // x1
  __int64 v162; // x2
  __int64 v163; // x3
  int32_t v164; // w8
  struct BattleSetupInfo_o *v165; // x8
  NetworkManager_ResultCallbackFunc_o *v166; // x20
  __int64 v167; // x1
  FollowerRecommendSupportListRequest_o *v168; // x20
  struct BattleSetupInfo_o *v169; // x8
  __int64 v170; // x1
  Il2CppObject *Instance; // x20
  System_String_o *v172; // x21
  System_String_o *v173; // x22
  __int64 v174; // x1
  __int64 v175; // x2
  __int64 v176; // x3
  System_Action_o *v177; // x23
  int tutorialMode_low; // w20
  _QWORD *v179; // x0
  FollowerSelectItemListViewItem_o *v180; // x20
  const MethodInfo *v181; // x1
  __int64 v182; // x21
  __int64 v183; // x22
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  int64_t userEquipId; // x21
  __int64 v186; // x22
  const MethodInfo *v187; // x1
  const MethodInfo *v188; // x1
  EquipTargetInfo_o *EquipInfo; // x21
  __int64 v190; // x22
  __int64 v191; // x23
  _QWORD *v192; // x0
  System_Reflection_MethodBase_o *v193; // x0
  const MethodInfo *v194; // x3
  struct FollowerInfo_o *followerInfo; // x8
  int32_t type; // w8
  int32_t v197; // w2
  _QWORD *v198; // x0
  FollowerSelectItemListViewManager_CallbackFunc_o *v199; // x21
  int32_t v200; // w1
  _QWORD *v201; // x0
  System_Reflection_MethodBase_o *v202; // x0
  __int64 v203; // x1
  Il2CppObject *v204; // x20
  __int64 v205; // x2
  __int64 v206; // x3
  FollowerRootComponent_o *v207; // x21
  FollowerRootComponent___c_c *v208; // x8
  System_Action_o *_9__65_0; // x23
  System_String_o *v210; // x22
  Il2CppObject *v211; // x24
  struct FollowerRootComponent___c_StaticFields *static_fields; // x0
  Il2CppObject *v213; // x20
  __int64 v214; // x1
  __int64 v215; // x2
  __int64 v216; // x3
  System_Action_o *v217; // x21
  int m_CancellationTokenSource; // [xsp+38h] [xbp-78h] BYREF
  int32_t lv; // [xsp+3Ch] [xbp-74h] BYREF
  System_String_o *detail; // [xsp+40h] [xbp-70h] BYREF
  System_String_o *name; // [xsp+48h] [xbp-68h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+50h] [xbp-60h] BYREF
  System_String_o *v223; // [xsp+58h] [xbp-58h] BYREF
  System_String_o *v224; // [xsp+60h] [xbp-50h] BYREF
  SkillInfo_array *v225; // [xsp+68h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v226; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v227; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v228; // 0:x0.16

  v6 = this;
  if ( (byte_4B1135F & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&kind, *(_QWORD *)&n);
    sub_1BCA7E0(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, v7, v8);
    sub_1BCA7E0(&CommonConfirmDialog_ClickDelegate_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SkillLvMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SkillMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataManager_GetMaster_SkillLvMaster___, v15, v16);
    sub_1BCA7E0(&Method_DataManager_GetMaster_SkillMaster___, v17, v18);
    sub_1BCA7E0(&DataManager_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v21, v22);
    sub_1BCA7E0(&FollowerListRequest_TypeInfo, v23, v24);
    sub_1BCA7E0(&FollowerRecommendSupportListRequest_TypeInfo, v25, v26);
    sub_1BCA7E0(&Method_FollowerRootComponent_CallbackRefresh__, v27, v28);
    sub_1BCA7E0(&Method_FollowerRootComponent_EndCloseTutorialArrow__, v29, v30);
    sub_1BCA7E0(&Method_FollowerRootComponent_EndRecommendRefreshConfirm__, v31, v32);
    sub_1BCA7E0(&Method_FollowerRootComponent_EndRefreshConfirm__, v33, v34);
    sub_1BCA7E0(&Method_FollowerRootComponent_EndRefreshRest__, v35, v36);
    sub_1BCA7E0(&Method_FollowerRootComponent_OnSelectFollowerItem__, v37, v38);
    sub_1BCA7E0(&FollowerRootComponent_TypeInfo, v39, v40);
    sub_1BCA7E0(&int_TypeInfo, v41, v42);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v43, v44);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_FollowerRecommendSupportListRequest___, v45, v46);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v47, v48);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v49, v50);
    sub_1BCA7E0(&PartyOrganizationUtility_TypeInfo, v51, v52);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v53, v54);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v55, v56);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v57, v58);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v59, v60);
    sub_1BCA7E0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v61, v62);
    sub_1BCA7E0(&Method_FollowerRootComponent___c__OnSelectFollowerItem_b__65_0__, v63, v64);
    sub_1BCA7E0(&FollowerRootComponent___c_TypeInfo, v65, v66);
    sub_1BCA7E0(&StringLiteral_6550/*"FOLLOWER_SELECT_REFRESH_TITLE"*/, v67, v68);
    sub_1BCA7E0(&StringLiteral_8751/*"MENU_SELECT_ITEM"*/, v69, v70);
    sub_1BCA7E0(&StringLiteral_8760/*"MENU_SHOW_SUPPORT"*/, v71, v72);
    sub_1BCA7E0(&StringLiteral_6547/*"FOLLOWER_SELECT_REFRESH_MESSAGE"*/, v73, v74);
    sub_1BCA7E0(&StringLiteral_116/*" "*/, v75, v76);
    sub_1BCA7E0(&StringLiteral_6548/*"FOLLOWER_SELECT_REFRESH_REST_MESSAGE"*/, v77, v78);
    sub_1BCA7E0(&StringLiteral_10400/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_EXPIRED"*/, v79, v80);
    sub_1BCA7E0(&StringLiteral_8648/*"MASTER_EQSKILL_LV_TXT"*/, v81, v82);
    sub_1BCA7E0(&StringLiteral_3004/*"BATTLE_SKILLCHARGETURN"*/, v83, v84);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v85, v86);
    this = (FollowerRootComponent_o *)sub_1BCA7E0(&StringLiteral_6549/*"FOLLOWER_SELECT_REFRESH_REST_TITLE"*/, v87, v88);
    byte_4B1135F = 1;
  }
  v224 = 0LL;
  v225 = 0LL;
  skillInfoList = 0LL;
  v223 = 0LL;
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
        goto LABEL_196;
      this = (FollowerRootComponent_o *)FollowerSelectItemListViewManager__GetItem(
                                          (FollowerSelectItemListViewManager_o *)this,
                                          n,
                                          0LL);
      if ( !this )
        goto LABEL_196;
      v155 = this;
      if ( LOBYTE(this->fields.tutorialMode)
        || FollowerSelectItemListViewItem__get_SvtId(
             (FollowerSelectItemListViewItem_o *)this,
             *(const MethodInfo **)&kind) <= 0 )
      {
        goto LABEL_165;
      }
      v156 = Method_FollowerRootComponent_OnSelectFollowerItem__;
      if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
        v156 = (_QWORD *)sub_1BCA7F8(Method_FollowerRootComponent_OnSelectFollowerItem__);
      v157 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v156, v156[4]);
      OverwriteAssetSoundName__PlaySystemSe(v157, 0, 0LL);
      FollowerRootComponent__SelectShowServant(v6, (FollowerSelectItemListViewItem_o *)v155, v158);
      return;
    case 2:
    case 3:
    case 4:
      v111 = Method_FollowerRootComponent_OnSelectFollowerItem__;
      if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
        v111 = (_QWORD *)sub_1BCA7F8(Method_FollowerRootComponent_OnSelectFollowerItem__);
      v112 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v111, v111[4]);
      OverwriteAssetSoundName__PlaySystemSe(v112, 0, 0LL);
      this = (FollowerRootComponent_o *)v6->fields.operationItemListViewManager;
      if ( !this )
        goto LABEL_196;
      this = (FollowerRootComponent_o *)FollowerSelectItemListViewManager__GetItem(
                                          (FollowerSelectItemListViewManager_o *)this,
                                          v6->fields.selectItemNum,
                                          0LL);
      v114 = kind == 3 ? 1LL : 2LL * (kind == 4);
      if ( !this )
        goto LABEL_196;
      this = (FollowerRootComponent_o *)FollowerSelectItemListViewItem__GetSkillInfo(
                                          (FollowerSelectItemListViewItem_o *)this,
                                          &v225,
                                          v113);
      if ( !v225 )
        goto LABEL_196;
      if ( (unsigned int)v114 >= v225->max_length )
        goto LABEL_197;
      v117 = v225->m_Items[v114];
      if ( !v117 || v117->fields.id < 1 || v117->fields.lv < 1 )
        goto LABEL_153;
      this = (FollowerRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_196;
      this = (FollowerRootComponent_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SkillMaster___);
      if ( !this )
        goto LABEL_196;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                 v117->fields.id,
                 (const MethodInfo_31B2E40 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      this = (FollowerRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_196;
      this = (FollowerRootComponent_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SkillLvMaster___);
      if ( !this )
        goto LABEL_196;
      this = (FollowerRootComponent_o *)SkillLvMaster__GetEntity(
                                          (SkillLvMaster_o *)this,
                                          v117->fields.id,
                                          v117->fields.lv,
                                          0LL);
      if ( !Entity )
        goto LABEL_196;
      v119 = this;
      SkillEntity__getSkillMessageInfo((SkillEntity_o *)Entity, &v224, &v223, v117->fields.lv, 0LL);
      v121 = v224;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v120);
      v122 = LocalizationManager__Get((System_String_o *)StringLiteral_8648/*"MASTER_EQSKILL_LV_TXT"*/, 0LL);
      lv = v117->fields.lv;
      v123 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv);
      v124 = System_String__Format(v122, v123, 0LL);
      v224 = System_String__Concat_62412480(v121, (System_String_o *)StringLiteral_116/*" "*/, v124, 0LL);
      this = (FollowerRootComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3004/*"BATTLE_SKILLCHARGETURN"*/, 0LL);
      if ( !v119 )
        goto LABEL_196;
      v125 = this;
      m_CancellationTokenSource = (int)v119->fields.m_CancellationTokenSource;
      v126 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &m_CancellationTokenSource);
      v127 = System_String__Format((System_String_o *)v125, v126, 0LL);
      tutorialMode = v6->fields.tutorialMode;
      v129 = v127;
      this = (FollowerRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_196;
      if ( tutorialMode == 3 )
        CommonUI__OpenDetailLongInfoDialogOnFade((CommonUI_o *)this, v224, v129, v223, 0LL);
      else
        CommonUI__OpenDetailLongInfoDialog((CommonUI_o *)this, v224, v129, v223, 1, 0, 0LL);
LABEL_153:
      operationItemListViewManager = v6->fields.operationItemListViewManager;
      v109 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                                   FollowerSelectItemListViewManager_CallbackFunc_TypeInfo,
                                                                   *(_QWORD *)&kind,
                                                                   v115,
                                                                   v116);
      v110 = (int)Method_FollowerRootComponent_OnSelectFollowerItem__;
      goto LABEL_170;
    case 5:
      if ( !v6->fields.tutorialState )
      {
        this = (FollowerRootComponent_o *)v6->fields.operationItemListViewManager;
        if ( !this )
          goto LABEL_196;
        this = (FollowerRootComponent_o *)FollowerSelectItemListViewManager__GetItem(
                                            (FollowerSelectItemListViewManager_o *)this,
                                            n,
                                            0LL);
        if ( !this )
          goto LABEL_196;
        tutorialMode_low = LOBYTE(this->fields.tutorialMode);
        v179 = Method_FollowerRootComponent_OnSelectFollowerItem__;
        if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
          v179 = (_QWORD *)sub_1BCA7F8(Method_FollowerRootComponent_OnSelectFollowerItem__);
        v148 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v179, v179[4]);
        if ( !tutorialMode_low )
          goto LABEL_131;
        goto LABEL_168;
      }
      v146 = v6->fields.tutorialMode;
      if ( v146 == 3 )
      {
        v201 = Method_FollowerRootComponent_OnSelectFollowerItem__;
        if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
          v201 = (_QWORD *)sub_1BCA7F8(Method_FollowerRootComponent_OnSelectFollowerItem__);
        v202 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v201, v201[4]);
        OverwriteAssetSoundName__PlaySystemSe(v202, 2, 0LL);
        goto LABEL_177;
      }
      if ( v146 == 2 )
      {
        v147 = Method_FollowerRootComponent_OnSelectFollowerItem__;
        if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
          v147 = (_QWORD *)sub_1BCA7F8(Method_FollowerRootComponent_OnSelectFollowerItem__);
        v148 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v147, v147[4]);
LABEL_131:
        OverwriteAssetSoundName__PlaySystemSe(v148, 0, 0LL);
        this = (FollowerRootComponent_o *)v6->fields.myFSM;
        if ( this )
        {
          v154 = &StringLiteral_8760/*"MENU_SHOW_SUPPORT"*/;
          goto LABEL_133;
        }
        goto LABEL_196;
      }
      return;
    case 6:
      if ( !v6->fields.tutorialState )
      {
        this = (FollowerRootComponent_o *)v6->fields.operationItemListViewManager;
        if ( !this )
          goto LABEL_196;
        this = (FollowerRootComponent_o *)FollowerSelectItemListViewManager__GetItem(
                                            (FollowerSelectItemListViewManager_o *)this,
                                            n,
                                            0LL);
        if ( !this )
          goto LABEL_196;
        v180 = (FollowerSelectItemListViewItem_o *)this;
        if ( !FollowerSelectItemListViewItem__get_ServantLeader(
                (FollowerSelectItemListViewItem_o *)this,
                *(const MethodInfo **)&kind) )
          goto LABEL_154;
        this = (FollowerRootComponent_o *)FollowerSelectItemListViewItem__get_ServantLeader(v180, v181);
        if ( !this )
          goto LABEL_196;
        v183 = *(_QWORD *)&this->fields.manualWidth;
        v182 = *(_QWORD *)&this->fields.kind;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&kind);
        *(_QWORD *)&v226.fields.currentCryptoKey = v183;
        *(_QWORD *)&v226.fields.fakeValue = v182;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v226, 0LL) >= 1 )
        {
          this = (FollowerRootComponent_o *)FollowerSelectItemListViewItem__get_ServantLeader(v180, v181);
          if ( !this )
            goto LABEL_196;
          if ( !this->fields.battleSetupInfo )
            goto LABEL_165;
          this = (FollowerRootComponent_o *)FollowerSelectItemListViewItem__get_ServantLeader(
                                              v180,
                                              *(const MethodInfo **)&kind);
          if ( !this )
            goto LABEL_196;
          battleSetupInfo = this->fields.battleSetupInfo;
          if ( !battleSetupInfo )
            goto LABEL_196;
          v186 = *(_QWORD *)&battleSetupInfo->fields.boostId;
          userEquipId = battleSetupInfo->fields.userEquipId;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&kind);
          *(_QWORD *)&v227.fields.currentCryptoKey = v186;
          *(_QWORD *)&v227.fields.fakeValue = userEquipId;
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v227, 0LL) < 1 )
            goto LABEL_165;
          this = (FollowerRootComponent_o *)FollowerSelectItemListViewItem__get_ServantLeader(v180, v187);
          if ( !this )
            goto LABEL_196;
          if ( ServantLeaderInfo__IsHideEquip((ServantLeaderInfo_o *)this, 0LL) )
            goto LABEL_165;
          this = (FollowerRootComponent_o *)FollowerSelectItemListViewItem__get_ServantLeader(v180, v188);
          if ( !this )
            goto LABEL_196;
          EquipInfo = (EquipTargetInfo_o *)this->fields.battleSetupInfo;
        }
        else
        {
LABEL_154:
          EquipInfo = FollowerSelectItemListViewItem__get_EquipInfo(v180, v181);
        }
        if ( EquipInfo )
        {
          v191 = *(_QWORD *)&EquipInfo->fields.svtId.fields.currentCryptoKey;
          v190 = *(_QWORD *)&EquipInfo->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&kind);
          *(_QWORD *)&v228.fields.currentCryptoKey = v191;
          *(_QWORD *)&v228.fields.fakeValue = v190;
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v228, 0LL) >= 1 )
          {
            v192 = Method_FollowerRootComponent_OnSelectFollowerItem__;
            if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
              v192 = (_QWORD *)sub_1BCA7F8(Method_FollowerRootComponent_OnSelectFollowerItem__);
            v193 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v192, v192[4]);
            OverwriteAssetSoundName__PlaySystemSe(v193, 0, 0LL);
            followerInfo = v180->fields.followerInfo;
            if ( followerInfo )
            {
              type = followerInfo->fields.type;
              if ( type == 1 )
              {
                v197 = 13;
                goto LABEL_183;
              }
              if ( type == 5 )
              {
                v197 = 14;
LABEL_183:
                FollowerRootComponent__SelectShowServantEquip(v6, EquipInfo, v197, v194);
                return;
              }
            }
            if ( v180->fields.isNpc )
              v197 = 19;
            else
              v197 = 16;
            goto LABEL_183;
          }
        }
LABEL_165:
        v198 = Method_FollowerRootComponent_OnSelectFollowerItem__;
        if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
          v198 = (_QWORD *)sub_1BCA7F8(Method_FollowerRootComponent_OnSelectFollowerItem__);
        v148 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v198, v198[4]);
LABEL_168:
        OverwriteAssetSoundName__PlaySystemSe(v148, 2, 0LL);
LABEL_169:
        operationItemListViewManager = v6->fields.operationItemListViewManager;
        v109 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                                     FollowerSelectItemListViewManager_CallbackFunc_TypeInfo,
                                                                     v161,
                                                                     v162,
                                                                     v163);
        v110 = (int)Method_FollowerRootComponent_OnSelectFollowerItem__;
LABEL_170:
        v199 = v109;
        FollowerSelectItemListViewManager_CallbackFunc___ctor(v109, (Il2CppObject *)v6, v110, 0LL);
        if ( !operationItemListViewManager )
          goto LABEL_196;
        v200 = 2;
LABEL_172:
        FollowerSelectItemListViewManager__SetMode(operationItemListViewManager, v200, v199, 0LL);
        return;
      }
LABEL_104:
      v159 = Method_FollowerRootComponent_OnSelectFollowerItem__;
      if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
        v159 = (_QWORD *)sub_1BCA7F8(Method_FollowerRootComponent_OnSelectFollowerItem__);
      v160 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v159, v159[4]);
      OverwriteAssetSoundName__PlaySystemSe(v160, 2, 0LL);
      v164 = v6->fields.tutorialMode;
      if ( v164 == 3 )
      {
LABEL_177:
        operationItemListViewManager = v6->fields.operationItemListViewManager;
        v199 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                                     FollowerSelectItemListViewManager_CallbackFunc_TypeInfo,
                                                                     v161,
                                                                     v162,
                                                                     v163);
        FollowerSelectItemListViewManager_CallbackFunc___ctor(
          v199,
          (Il2CppObject *)v6,
          (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
          0LL);
        if ( !operationItemListViewManager )
          goto LABEL_196;
        v200 = 4;
        goto LABEL_172;
      }
      if ( v164 == 2 )
        goto LABEL_169;
      return;
    case 7:
    case 13:
      v130 = Method_FollowerRootComponent_OnSelectFollowerItem__;
      if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
        v130 = (_QWORD *)sub_1BCA7F8(Method_FollowerRootComponent_OnSelectFollowerItem__);
      v131 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v130, v130[4]);
      OverwriteAssetSoundName__PlaySystemSe(v131, 0, 0LL);
      if ( !FollowerListRequest_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FollowerListRequest_TypeInfo, v132);
      v133 = FollowerListRequest__checkRefreshRate(0LL);
      v137 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BCAA2C(
                                                      CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                      v134,
                                                      v135,
                                                      v136);
      CommonConfirmDialog_ClickDelegate___ctor(
        v137,
        (Il2CppObject *)v6,
        Method_FollowerRootComponent_EndRefreshConfirm__,
        0LL);
      if ( kind == 13 )
      {
        if ( !FollowerRecommendSupportListRequest_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FollowerRecommendSupportListRequest_TypeInfo, v138);
        v139 = FollowerRecommendSupportListRequest__CheckRefreshRate(0LL);
        v137 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BCAA2C(
                                                        CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                        v140,
                                                        v141,
                                                        v142);
        CommonConfirmDialog_ClickDelegate___ctor(
          v137,
          (Il2CppObject *)v6,
          Method_FollowerRootComponent_EndRecommendRefreshConfirm__,
          0LL);
        if ( v139 )
        {
LABEL_62:
          commonConfirmDialog = v6->fields.commonConfirmDialog;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v138);
          v144 = LocalizationManager__Get((System_String_o *)StringLiteral_6550/*"FOLLOWER_SELECT_REFRESH_TITLE"*/, 0LL);
          this = (FollowerRootComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6547/*"FOLLOWER_SELECT_REFRESH_MESSAGE"*/, 0LL);
          v145 = this;
          if ( !FollowerRootComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(FollowerRootComponent_TypeInfo, *(_QWORD *)&kind);
          if ( commonConfirmDialog )
          {
            CommonConfirmDialog__Open_30741092(
              commonConfirmDialog,
              v144,
              (System_String_o *)v145,
              1,
              v137,
              FollowerRootComponent_TypeInfo->static_fields->LIST_UPDATE_MESSAGE_FONT_SIZE,
              0,
              0,
              0,
              0LL);
            return;
          }
          goto LABEL_196;
        }
      }
      else if ( v133 )
      {
        goto LABEL_62;
      }
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v170);
      v172 = LocalizationManager__Get((System_String_o *)StringLiteral_6549/*"FOLLOWER_SELECT_REFRESH_REST_TITLE"*/, 0LL);
      v173 = LocalizationManager__Get((System_String_o *)StringLiteral_6548/*"FOLLOWER_SELECT_REFRESH_REST_MESSAGE"*/, 0LL);
      v177 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v174, v175, v176);
      System_Action___ctor(v177, (Il2CppObject *)v6, Method_FollowerRootComponent_EndRefreshRest__, 0LL);
      if ( Instance )
      {
        CommonUI__OpenNotificationDialog(
          (CommonUI_o *)Instance,
          v172,
          v173,
          v177,
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
      goto LABEL_196;
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
      this = (FollowerRootComponent_o *)v6->fields.operationItemListViewManager;
      if ( !this )
        goto LABEL_196;
      this = (FollowerRootComponent_o *)FollowerSelectItemListViewManager__GetItem(
                                          (FollowerSelectItemListViewManager_o *)this,
                                          n,
                                          0LL);
      v90 = (unsigned int)(kind - 9);
      v91 = (unsigned int)v90 < 4 ? v90 + 1 : 0LL;
      if ( !this )
        goto LABEL_196;
      this = (FollowerRootComponent_o *)FollowerSelectItemListViewItem__GetAppendSkillInfo(
                                          (FollowerSelectItemListViewItem_o *)this,
                                          &skillInfoList,
                                          this->fields.tutorialMode,
                                          v89);
      if ( !skillInfoList )
        goto LABEL_196;
      if ( (unsigned int)v91 >= skillInfoList->max_length )
LABEL_197:
        sub_1BCAA44(this, *(_QWORD *)&kind);
      v92 = skillInfoList->m_Items[v91];
      if ( v92 && v92->fields.id >= 1 && v92->fields.lv >= 1 )
      {
        v93 = Method_FollowerRootComponent_OnSelectFollowerItem__;
        if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
          v93 = (_QWORD *)sub_1BCA7F8(Method_FollowerRootComponent_OnSelectFollowerItem__);
        v94 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v93, v93[4]);
        OverwriteAssetSoundName__PlaySystemSe(v94, 0, 0LL);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v95);
        this = (FollowerRootComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_SkillMaster___);
        if ( !this )
          goto LABEL_196;
        v96 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                v92->fields.id,
                (const MethodInfo_31B2E40 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        this = (FollowerRootComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_SkillLvMaster___);
        if ( !this )
          goto LABEL_196;
        this = (FollowerRootComponent_o *)SkillLvMaster__GetEntity(
                                            (SkillLvMaster_o *)this,
                                            v92->fields.id,
                                            v92->fields.lv,
                                            0LL);
        if ( !v96 )
          goto LABEL_196;
        SkillEntity__getSkillMessageInfo((SkillEntity_o *)v96, &name, &detail, v92->fields.lv, 0LL);
        v98 = name;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v97);
        v99 = LocalizationManager__Get((System_String_o *)StringLiteral_8648/*"MASTER_EQSKILL_LV_TXT"*/, 0LL);
        lv = v92->fields.lv;
        v100 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv);
        v101 = System_String__Format(v99, v100, 0LL);
        name = System_String__Concat_62412480(v98, (System_String_o *)StringLiteral_116/*" "*/, v101, 0LL);
        v102 = v6->fields.tutorialMode;
        this = (FollowerRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !this )
          goto LABEL_196;
        if ( v102 == 3 )
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
        v106 = Method_FollowerRootComponent_OnSelectFollowerItem__;
        if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
          v106 = (_QWORD *)sub_1BCA7F8(Method_FollowerRootComponent_OnSelectFollowerItem__);
        v107 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v106, v106[4]);
        OverwriteAssetSoundName__PlaySystemSe(v107, 2, 0LL);
      }
      goto LABEL_30;
    case 14:
      v165 = v6->fields.battleSetupInfo;
      if ( !v165 )
        goto LABEL_196;
      if ( !v165->fields.isChildFollower )
        goto LABEL_114;
      this = (FollowerRootComponent_o *)v6->fields.titleInfo;
      if ( !this )
        goto LABEL_196;
      TitleInfoControl__setBackBtnEnable((TitleInfoControl_o *)this, 0, 0LL);
      this = (FollowerRootComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !this )
        goto LABEL_196;
      LOBYTE(this->fields.followerQuestInfomationDraw) = 1;
LABEL_114:
      v166 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(
                                                      NetworkManager_ResultCallbackFunc_TypeInfo,
                                                      *(_QWORD *)&kind,
                                                      *(_QWORD *)&n,
                                                      method);
      NetworkManager_ResultCallbackFunc___ctor(
        v166,
        (Il2CppObject *)v6,
        Method_FollowerRootComponent_CallbackRefresh__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v167);
      this = (FollowerRootComponent_o *)NetworkManager__getRequest_object_(
                                          v166,
                                          (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_FollowerRecommendSupportListRequest___);
      if ( !v6->fields.battleSetupInfo )
        goto LABEL_196;
      v168 = (FollowerRecommendSupportListRequest_o *)this;
      this = (FollowerRootComponent_o *)BattleSetupInfo__TargetQuestId(v6->fields.battleSetupInfo, 0LL);
      v169 = v6->fields.battleSetupInfo;
      if ( !v169 || !v168 )
        goto LABEL_196;
      FollowerRecommendSupportListRequest__beginRequest(v168, 0, (int32_t)this, v169->fields.questPhase, 0LL);
      return;
    default:
      this = (FollowerRootComponent_o *)v6->fields.operationItemListViewManager;
      if ( !this )
        goto LABEL_196;
      this = (FollowerRootComponent_o *)FollowerSelectItemListViewManager__GetItem(
                                          (FollowerSelectItemListViewManager_o *)this,
                                          n,
                                          0LL);
      if ( !this )
        goto LABEL_196;
      v149 = this;
      if ( FollowerSelectItemListViewItem__get_SvtId(
             (FollowerSelectItemListViewItem_o *)this,
             *(const MethodInfo **)&kind) < 1
        || HIBYTE(v149->fields.openScroll.fields.z)
        || *((_BYTE *)&v149[1].fields.UnityEngine_Behaviour_Fields + 6) )
      {
        goto LABEL_165;
      }
      this = (FollowerRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
      if ( !this )
        goto LABEL_196;
      if ( !BYTE4(this->fields.battleSetupInfo) )
        goto LABEL_86;
      v150 = PartyOrganizationUtility_TypeInfo;
      if ( !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo, *(_QWORD *)&kind);
        v150 = PartyOrganizationUtility_TypeInfo;
      }
      if ( !UnityEngine_PlayerPrefs__GetInt(v150->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0, 0LL) )
        goto LABEL_86;
      this = (FollowerRootComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !this )
        goto LABEL_196;
      if ( PartyOrganizationUtility__IsAvailableFriendshipUpItem((PartyOrganizationUtility_o *)this, 0LL) )
      {
LABEL_86:
        v151 = Method_FollowerRootComponent_OnSelectFollowerItem__;
        if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
          v151 = (_QWORD *)sub_1BCA7F8(Method_FollowerRootComponent_OnSelectFollowerItem__);
        v152 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v151, v151[4]);
        OverwriteAssetSoundName__PlaySystemSe(v152, 0, 0LL);
        if ( v6->fields.tutorialState )
        {
          v153 = v6->fields.tutorialMode;
          if ( v153 == 3 )
          {
            v6->fields.state = 4;
            v213 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v217 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v214, v215, v216);
            System_Action___ctor(v217, (Il2CppObject *)v6, Method_FollowerRootComponent_EndCloseTutorialArrow__, 0LL);
            if ( !v213 )
              goto LABEL_196;
            CommonUI__CloseTutorialArrowMark((CommonUI_o *)v213, v217, 0LL);
            return;
          }
          if ( v153 != 2 )
            return;
          this = (FollowerRootComponent_o *)v6->fields.titleInfo;
          if ( !this )
            goto LABEL_196;
          TitleInfoControl__setBackBtnEnable((TitleInfoControl_o *)this, 1, 0LL);
        }
        this = (FollowerRootComponent_o *)v6->fields.myFSM;
        if ( this )
        {
          v154 = &StringLiteral_8751/*"MENU_SELECT_ITEM"*/;
LABEL_133:
          PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v154, 0LL);
          return;
        }
LABEL_196:
        sub_1BCAA3C(this, *(_QWORD *)&kind);
      }
      v204 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v203);
      this = (FollowerRootComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10400/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_EXPIRED"*/, 0LL);
      v207 = this;
      v208 = FollowerRootComponent___c_TypeInfo;
      if ( !FollowerRootComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FollowerRootComponent___c_TypeInfo, *(_QWORD *)&kind);
        v208 = FollowerRootComponent___c_TypeInfo;
      }
      _9__65_0 = v208->static_fields->__9__65_0;
      v210 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !_9__65_0 )
      {
        if ( !v208->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v208, *(_QWORD *)&kind);
          v208 = FollowerRootComponent___c_TypeInfo;
        }
        v211 = (Il2CppObject *)v208->static_fields->__9;
        _9__65_0 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, *(_QWORD *)&kind, v205, v206);
        System_Action___ctor(_9__65_0, v211, Method_FollowerRootComponent___c__OnSelectFollowerItem_b__65_0__, 0LL);
        static_fields = FollowerRootComponent___c_TypeInfo->static_fields;
        static_fields->__9__65_0 = _9__65_0;
        this = (FollowerRootComponent_o *)sub_1BCA784(&static_fields->__9__65_0, _9__65_0);
      }
      if ( !v204 )
        goto LABEL_196;
      CommonUI__OpenNotificationDialog(
        (CommonUI_o *)v204,
        v210,
        (System_String_o *)v207,
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
      v109 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                                   FollowerSelectItemListViewManager_CallbackFunc_TypeInfo,
                                                                   v103,
                                                                   v104,
                                                                   v105);
      v110 = (int)Method_FollowerRootComponent_OnSelectFollowerItem__;
      goto LABEL_170;
  }
}


void __fastcall FollowerRootComponent__PlayBGM(FollowerRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  FollowerRootComponent_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  int32_t questId; // w20
  BalanceConfig_c *v24; // x0
  QuestPhaseMaster_o *v25; // x20
  struct BattleSetupInfo_o *v26; // x8
  float FormationSubBgmFadeInTime; // s8
  int FormationBgmId; // w20
  System_String_o *BgmFileName; // x21
  _BOOL4 v30; // w23
  char v31; // w22
  FollowerRootComponent_o *v32; // x20
  int32_t FormationSubBgmId; // w0
  __int64 v34; // x1
  int32_t v35; // w20
  const MethodInfo *v36; // x2
  struct UnityEngine_GameObject_o *tutorialMaskBase; // x8
  System_String_o *BgmName; // x19
  SoundManager_c *v39; // x0
  System_String_o *v40; // x0
  struct BattleSetupInfo_o *v41; // x8
  __int64 v42; // x1
  const MethodInfo *v43; // x2
  __int64 v44; // x1
  FollowerRootComponent_o *v45; // x0
  const MethodInfo *v46; // x2
  __int64 v47; // x1
  QuestMaster_o *v48; // x21
  struct BattleSetupInfo_o *v49; // x8
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  v3 = this;
  if ( (byte_4B11347 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&BgmManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataManager_GetMaster_BgmMaster___, v8, v9);
    sub_1BCA7E0(&Method_DataManager_GetMaster_QuestPhaseMaster___, v10, v11);
    sub_1BCA7E0(&DataManager_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15);
    sub_1BCA7E0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v16, v17);
    sub_1BCA7E0(&SoundManager_TypeInfo, v18, v19);
    this = (FollowerRootComponent_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, v20, v21);
    byte_4B11347 = 1;
  }
  entity = 0LL;
  battleSetupInfo = v3->fields.battleSetupInfo;
  if ( !battleSetupInfo )
    goto LABEL_70;
  questId = battleSetupInfo->fields.questId;
  v24 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
    v24 = BalanceConfig_TypeInfo;
  }
  if ( questId != v24->static_fields->PrologueQuestId )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
    this = (FollowerRootComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( !v3->fields.battleSetupInfo )
      goto LABEL_70;
    v25 = (QuestPhaseMaster_o *)this;
    this = (FollowerRootComponent_o *)BattleSetupInfo__TargetQuestId(v3->fields.battleSetupInfo, 0LL);
    v26 = v3->fields.battleSetupInfo;
    if ( !v26 || !v25 )
      goto LABEL_70;
    FormationSubBgmFadeInTime = 0.0;
    if ( QuestPhaseMaster__TryGetEntity(v25, &entity, (int32_t)this, v26->fields.questPhase, 0LL) )
    {
      this = (FollowerRootComponent_o *)entity;
      if ( !entity )
        goto LABEL_70;
      FormationBgmId = QuestPhaseEntity__GetFormationBgmId(entity, 0LL);
      if ( FormationBgmId < 1 )
      {
        BgmFileName = 0LL;
        v30 = FormationBgmId == 0;
      }
      else
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
        this = (FollowerRootComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_BgmMaster___);
        if ( !this )
          goto LABEL_70;
        BgmFileName = BgmMaster__GetBgmFileName(
                        (BgmMaster_o *)this,
                        FormationBgmId,
                        (System_String_o *)StringLiteral_1/*""*/,
                        0LL);
        v30 = 0;
      }
      this = (FollowerRootComponent_o *)entity;
      if ( !entity )
        goto LABEL_70;
      this = (FollowerRootComponent_o *)QuestPhaseEntity__IsNonStopEndBgm(entity, 0LL);
      if ( !entity )
        goto LABEL_70;
      v31 = (char)this;
      FormationSubBgmId = QuestPhaseEntity__GetFormationSubBgmId(entity, 0LL);
      if ( (FormationSubBgmId & 0x80000000) != 0 )
      {
        v32 = 0LL;
      }
      else
      {
        v35 = FormationSubBgmId;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v34);
        this = (FollowerRootComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_BgmMaster___);
        if ( !this )
          goto LABEL_70;
        this = (FollowerRootComponent_o *)BgmMaster__GetBgmFileName(
                                            (BgmMaster_o *)this,
                                            v35,
                                            (System_String_o *)StringLiteral_1/*""*/,
                                            0LL);
        if ( !entity )
          goto LABEL_70;
        v32 = this;
        FormationSubBgmFadeInTime = QuestPhaseEntity__GetFormationSubBgmFadeInTime(entity, 0LL);
      }
    }
    else
    {
      v30 = 0;
      v31 = 0;
      v32 = 0LL;
      BgmFileName = 0LL;
    }
    this = (FollowerRootComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !this )
      goto LABEL_70;
    this = (FollowerRootComponent_o *)PartyOrganizationUtility__ExistsTemporaryPartyInfo(
                                        (PartyOrganizationUtility_o *)this,
                                        0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !System_String__IsNullOrEmpty(BgmFileName, 0LL) )
        FollowerRootComponent__SetBackupBgmName(v3, v31 & 1, v36);
      this = (FollowerRootComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( this )
      {
        tutorialMaskBase = this->fields.tutorialMaskBase;
        if ( tutorialMaskBase )
        {
          BgmName = *(System_String_o **)&tutorialMaskBase[1].fields.m_CachedPtr;
          v39 = SoundManager_TypeInfo;
          if ( SoundManager_TypeInfo->_2.cctor_finished )
          {
LABEL_38:
            v40 = BgmName;
LABEL_56:
            SoundManager__playBgm(v40, 0LL);
LABEL_57:
            FollowerRootComponent__PlaySubBgm(v45, (System_String_o *)v32, FormationSubBgmFadeInTime, v46);
            return;
          }
LABEL_37:
          j_il2cpp_runtime_class_init_0(v39, method);
          goto LABEL_38;
        }
      }
      goto LABEL_70;
    }
    v41 = v3->fields.battleSetupInfo;
    if ( !v41 )
      goto LABEL_70;
    if ( !v41->fields.isScriptBeforePartySelect )
      goto LABEL_48;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, method);
    if ( !SoundManager__isPlayBgm(0LL, 0LL) )
      goto LABEL_48;
    if ( !System_String__IsNullOrEmpty(BgmFileName, 0LL) )
    {
      if ( !BgmManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v42);
      if ( !BgmManager__IsPlayBgm(BgmFileName, 0LL) )
      {
LABEL_48:
        if ( !System_String__IsNullOrEmpty(BgmFileName, 0LL) )
        {
          FollowerRootComponent__SetBackupBgmName(v3, v31 & 1, v43);
          if ( !SoundManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v47);
          v40 = BgmFileName;
          goto LABEL_56;
        }
        if ( v30 )
        {
          FollowerRootComponent__SetBackupBgmName(v3, v31 & 1, v43);
          if ( !SoundManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v44);
          SoundManager__stopBgm(0LL);
          goto LABEL_57;
        }
        this = (FollowerRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( this )
        {
          this = (FollowerRootComponent_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestMaster___);
          if ( v3->fields.battleSetupInfo )
          {
            v48 = (QuestMaster_o *)this;
            this = (FollowerRootComponent_o *)BattleSetupInfo__TargetQuestId(v3->fields.battleSetupInfo, 0LL);
            if ( v48 )
            {
              this = (FollowerRootComponent_o *)QuestMaster__getQuestEntity(v48, (int32_t)this, 0LL);
              v49 = v3->fields.battleSetupInfo;
              if ( v49 )
              {
                if ( this )
                {
                  BgmName = QuestEntity__GetBgmName((QuestEntity_o *)this, v49->fields.warId, 0LL);
                  if ( System_String__IsNullOrEmpty(BgmName, 0LL) )
                  {
                    if ( !BgmManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, method);
                    BgmName = BgmManager__GetMainBgmName(0LL);
                  }
                  v39 = SoundManager_TypeInfo;
                  if ( SoundManager_TypeInfo->_2.cctor_finished )
                    goto LABEL_38;
                  goto LABEL_37;
                }
              }
            }
          }
        }
LABEL_70:
        sub_1BCAA3C(this, method);
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
  __int64 v6; // x1

  if ( (byte_4B11346 & 1) == 0 )
  {
    sub_1BCA7E0(&SoundManager_TypeInfo, subBgmName, method);
    byte_4B11346 = 1;
  }
  if ( !System_String__IsNullOrEmpty(subBgmName, 0LL) )
  {
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v6);
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
    sub_1BCAA3C(operationItemListViewManager, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)operationItemListViewManager, 0, 0LL);
  this->fields.state = 0;
}


void __fastcall FollowerRootComponent__RequestFollowerList(FollowerRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  NetworkManager_ResultCallbackFunc_o *v13; // x20
  __int64 v14; // x1
  FollowerListRequest_o *Request_object; // x0
  __int64 v16; // x1
  FollowerListRequest_o *v17; // x20
  struct BattleSetupInfo_o *battleSetupInfo; // x8

  if ( (byte_4B11350 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_FollowerRootComponent_CallbackFollowerList__, method, v2);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_FollowerListRequest___, v5, v6);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_11197/*"REQUEST_OK"*/, v11, v12);
    byte_4B11350 = 1;
  }
  v13 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(NetworkManager_ResultCallbackFunc_TypeInfo, method, v2, v3);
  NetworkManager_ResultCallbackFunc___ctor(
    v13,
    (Il2CppObject *)this,
    Method_FollowerRootComponent_CallbackFollowerList__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v14);
  Request_object = (FollowerListRequest_o *)NetworkManager__getRequest_object_(
                                              v13,
                                              (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_FollowerListRequest___);
  if ( !Request_object )
    goto LABEL_12;
  v17 = Request_object;
  if ( (((__int64 (__fastcall *)(FollowerListRequest_o *, Il2CppMethodPointer))Request_object->klass->vtable._7_checkExpirationDate.method)(
          Request_object,
          Request_object->klass->vtable._8_isBackgroundRequest.methodPtr) & 1) != 0 )
  {
    Request_object = (FollowerListRequest_o *)this->fields.myFSM;
    if ( Request_object )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Request_object, (System_String_o *)StringLiteral_11197/*"REQUEST_OK"*/, 0LL);
      return;
    }
LABEL_12:
    sub_1BCAA3C(Request_object, v16);
  }
  Request_object = (FollowerListRequest_o *)this->fields.battleSetupInfo;
  if ( !Request_object )
    goto LABEL_12;
  Request_object = (FollowerListRequest_o *)BattleSetupInfo__TargetQuestId((BattleSetupInfo_o *)Request_object, 0LL);
  battleSetupInfo = this->fields.battleSetupInfo;
  if ( !battleSetupInfo )
    goto LABEL_12;
  FollowerListRequest__beginRequest(v17, 0, (int32_t)Request_object, battleSetupInfo->fields.questPhase, 0LL);
}


bool __fastcall FollowerRootComponent__ReturnBattleSetupMenu(FollowerRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  FollowerRootComponent_o *v3; // x20
  struct BattleSetupInfo_o *battleSetupInfo; // x19

  v3 = this;
  if ( (byte_4B1135B & 1) == 0 )
  {
    this = (FollowerRootComponent_o *)sub_1BCA7E0(
                                        &Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__,
                                        method,
                                        v2);
    byte_4B1135B = 1;
  }
  battleSetupInfo = v3->fields.battleSetupInfo;
  v3->fields.state = 5;
  if ( !battleSetupInfo )
    goto LABEL_8;
  if ( battleSetupInfo->fields.isChildFollower )
    battleSetupInfo->fields.followerId = 0LL;
  this = (FollowerRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !this )
LABEL_8:
    sub_1BCAA3C(this, method);
  AvalonSceneManager__pushScene((AvalonSceneManager_o *)this, 40, 1, (Il2CppObject *)battleSetupInfo, 0LL);
  return 1;
}


bool __fastcall FollowerRootComponent__ReturnQuestMenu(FollowerRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  Il2CppObject *battleSetupInfo; // x20
  __int64 v17; // x1
  System_String_o *backupBgmName; // x22
  Il2CppObject *Instance; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  TerminalPramsManager_c *v22; // x0
  __int64 v23; // x1

  if ( (byte_4B1135A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AvalonSceneManager_UnloadScene_PartyOrganizationRootComponent___, method, v2);
    sub_1BCA7E0(&QuestHintDialogOpenManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&RandomLimitCountManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v8, v9);
    sub_1BCA7E0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v10, v11);
    sub_1BCA7E0(&SoundManager_TypeInfo, v12, v13);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v14, v15);
    byte_4B1135A = 1;
  }
  battleSetupInfo = (Il2CppObject *)this->fields.battleSetupInfo;
  if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo, method);
  QuestHintDialogOpenManager__ResetTemporarilyId(0LL);
  if ( !System_String__IsNullOrEmpty(this->fields.backupBgmName, 0LL) )
  {
    backupBgmName = this->fields.backupBgmName;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v17);
    SoundManager__playBgm(backupBgmName, 0LL);
  }
  this->fields.battleSetupInfo = 0LL;
  sub_1BCA784(&this->fields.battleSetupInfo, 0LL);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  if ( BYTE1(Instance[8].monitor) )
  {
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_29;
    BYTE1(Instance[8].monitor) = 0;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v20);
    if ( !byte_4B11139 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v20, v21);
      byte_4B11139 = 1;
    }
    v22 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v20);
      v22 = TerminalPramsManager_TypeInfo;
    }
    v22->static_fields->_IsAutoResume_k__BackingField = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  if ( AvalonSceneManager__IsStackScene((AvalonSceneManager_o *)Instance, 0LL) )
  {
    this->fields.state = 0;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_29;
    AvalonSceneManager__popSceneRefresh((AvalonSceneManager_o *)Instance, 1, battleSetupInfo, 0LL);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_29;
    AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0, 0LL);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
LABEL_29:
    sub_1BCAA3C(Instance, v20);
  AvalonSceneManager__UnloadScene_object_(
    (AvalonSceneManager_o *)Instance,
    (const MethodInfo_2EFC72C *)Method_AvalonSceneManager_UnloadScene_PartyOrganizationRootComponent___);
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, v23);
  RandomLimitCountManager__set_EnableRandomLimitCount(0, 0LL);
  return 1;
}


void __fastcall FollowerRootComponent__ReturnSupportList(FollowerRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  int32_t state; // w8
  void *operationItemListViewManager; // x0
  FollowerSelectItemListViewManager_o *v16; // x20
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  FollowerSelectItemListViewManager_CallbackFunc_o *v20; // x21
  __int64 v21; // x2
  FollowerSelectItemListViewManager_o *v22; // x20
  FollowerSelectItemListViewManager_c *v23; // x0
  FollowerSelectItemListViewManager_o *v24; // x20
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  FollowerSelectItemListViewManager_CallbackFunc_o *v28; // x21
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  FollowerQuestInfomationDraw_o *followerQuestInfomationDraw; // x20
  QuestRestrictionInfo_o *questRestrictionInfo; // x21
  const MethodInfo *v32; // x4
  CommonUI_o *v33; // x20

  if ( (byte_4B1134E & 1) == 0 )
  {
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, method, v2);
    sub_1BCA7E0(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_FollowerRootComponent_OnSelectFollowerItem__, v6, v7);
    sub_1BCA7E0(&RandomLimitCountManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10, v11);
    sub_1BCA7E0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v12, v13);
    byte_4B1134E = 1;
  }
  state = this->fields.state;
  this->fields.state = 3;
  if ( state == 5 )
  {
    if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, method);
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
    v16 = this->fields.operationItemListViewManager;
    v20 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                                FollowerSelectItemListViewManager_CallbackFunc_TypeInfo,
                                                                v17,
                                                                v18,
                                                                v19);
    FollowerSelectItemListViewManager_CallbackFunc___ctor(
      v20,
      (Il2CppObject *)this,
      (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
      0LL);
    if ( !v16 )
      goto LABEL_27;
    FollowerSelectItemListViewManager__SetMode(v16, 3, v20, 0LL);
    v22 = this->fields.operationItemListViewManager;
    if ( !v22 )
      goto LABEL_27;
    if ( !byte_4B1137C )
    {
      sub_1BCA7E0(&FollowerSelectItemListViewManager_TypeInfo, method, v21);
      byte_4B1137C = 1;
    }
    v23 = FollowerSelectItemListViewManager_TypeInfo;
    if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo, method);
      v23 = FollowerSelectItemListViewManager_TypeInfo;
    }
    FollowerSelectItemListViewManager__ChangeClass(v22, v23->static_fields->followerClassId, 0LL);
    operationItemListViewManager = this->fields.operationItemListViewManager;
    if ( !operationItemListViewManager )
LABEL_27:
      sub_1BCAA3C(operationItemListViewManager, method);
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
    v24 = this->fields.operationItemListViewManager;
    v28 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                                FollowerSelectItemListViewManager_CallbackFunc_TypeInfo,
                                                                v25,
                                                                v26,
                                                                v27);
    FollowerSelectItemListViewManager_CallbackFunc___ctor(
      v28,
      (Il2CppObject *)this,
      (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
      0LL);
    if ( !v24 )
      goto LABEL_27;
    FollowerSelectItemListViewManager__SetMode(v24, 2, v28, 0LL);
  }
  battleSetupInfo = this->fields.battleSetupInfo;
  if ( !battleSetupInfo )
    goto LABEL_27;
  followerQuestInfomationDraw = this->fields.followerQuestInfomationDraw;
  questRestrictionInfo = battleSetupInfo->fields.questRestrictionInfo;
  operationItemListViewManager = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !operationItemListViewManager || !followerQuestInfomationDraw )
    goto LABEL_27;
  FollowerQuestInfomationDraw__SetInfomation(
    followerQuestInfomationDraw,
    questRestrictionInfo,
    *((_DWORD *)operationItemListViewManager + 14),
    0LL,
    v32);
  operationItemListViewManager = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v33 = (CommonUI_o *)operationItemListViewManager;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, method);
  if ( !v33 )
    goto LABEL_27;
  CommonUI__maskFadein(v33, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
  SceneRootComponent__sendMessageResume((SceneRootComponent_o *)this, 0LL);
}


void __fastcall FollowerRootComponent__SelectShowServant(
        FollowerRootComponent_o *this,
        FollowerSelectItemListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  ListViewManager_o *operationItemListViewManager; // x0
  CommonUI_o *v10; // x21
  ServantLeaderInfo_o *ServantLeader; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  ServantStatusDialog_EndDelegate_o *v15; // x22

  if ( (byte_4B11354 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusDialog_EndDelegate_TypeInfo, item, method);
    sub_1BCA7E0(&Method_FollowerRootComponent_EndShowServant__, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7, v8);
    byte_4B11354 = 1;
  }
  operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager
    || (ListViewManager__GetScrollView(
          operationItemListViewManager,
          &this->fields.openScroll,
          &this->fields.openOffset,
          0LL),
        operationItemListViewManager = (ListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        !item)
    || (v10 = (CommonUI_o *)operationItemListViewManager,
        ServantLeader = FollowerSelectItemListViewItem__get_ServantLeader(item, (const MethodInfo *)item),
        v15 = (ServantStatusDialog_EndDelegate_o *)sub_1BCAA2C(ServantStatusDialog_EndDelegate_TypeInfo, v12, v13, v14),
        ServantStatusDialog_EndDelegate___ctor(
          v15,
          (Il2CppObject *)this,
          Method_FollowerRootComponent_EndShowServant__,
          0LL),
        !v10) )
  {
    sub_1BCAA3C(operationItemListViewManager, item);
  }
  CommonUI__OpenServantStatusDialog_30778732(v10, 5, ServantLeader, v15, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerRootComponent__SelectShowServantEquip(
        FollowerRootComponent_o *this,
        EquipTargetInfo_o *equipInfo,
        int32_t statusKind,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  ListViewManager_o *operationItemListViewManager; // x0
  Il2CppObject *Instance; // x22
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  ServantStatusDialog_EndDelegate_o *v16; // x23

  if ( (byte_4B11357 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusDialog_EndDelegate_TypeInfo, equipInfo, *(_QWORD *)&statusKind);
    sub_1BCA7E0(&Method_FollowerRootComponent_EndShowServantEquip__, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10);
    byte_4B11357 = 1;
  }
  operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager
    || (ListViewManager__GetScrollView(
          operationItemListViewManager,
          &this->fields.openScroll,
          &this->fields.openOffset,
          0LL),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v16 = (ServantStatusDialog_EndDelegate_o *)sub_1BCAA2C(ServantStatusDialog_EndDelegate_TypeInfo, v13, v14, v15),
        ServantStatusDialog_EndDelegate___ctor(
          v16,
          (Il2CppObject *)this,
          Method_FollowerRootComponent_EndShowServantEquip__,
          0LL),
        !Instance) )
  {
    sub_1BCAA3C(operationItemListViewManager, equipInfo);
  }
  CommonUI__OpenServantEquipStatusDialog_30781828((CommonUI_o *)Instance, statusKind, equipInfo, v16, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerRootComponent__SetBackupBgmName(
        FollowerRootComponent_o *this,
        bool isNonStopEndBgm,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_String_o *BgmName; // x0

  if ( (byte_4B11348 & 1) == 0 )
  {
    sub_1BCA7E0(&SoundManager_TypeInfo, isNonStopEndBgm, method);
    byte_4B11348 = 1;
  }
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, isNonStopEndBgm);
  if ( SoundManager__isPlayBgm(0LL, 0LL) && !isNonStopEndBgm )
  {
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v5);
    BgmName = SoundManager__getBgmName(0LL);
    this->fields.backupBgmName = BgmName;
    sub_1BCA784(&this->fields.backupBgmName, BgmName);
  }
}


bool __fastcall FollowerRootComponent__SetFollowerBase(
        UISprite_o *sprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  FollowerRootComponent_c *v7; // x0
  UIAtlas_o *partyOrganizationAtlasCache; // x21

  if ( (byte_4B11343 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, spriteName, method);
    sub_1BCA7E0(&FollowerRootComponent_TypeInfo, v5, v6);
    byte_4B11343 = 1;
  }
  v7 = FollowerRootComponent_TypeInfo;
  if ( !FollowerRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerRootComponent_TypeInfo, spriteName);
    v7 = FollowerRootComponent_TypeInfo;
  }
  partyOrganizationAtlasCache = v7->static_fields->partyOrganizationAtlasCache;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, spriteName);
  return AtlasManager__SetGradeBase(sprite, spriteName, partyOrganizationAtlasCache, 0LL);
}


bool __fastcall FollowerRootComponent__StartBattleSetupMenu(FollowerRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  void *Instance; // x0
  __int64 followerId; // x1
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  int32_t ItemIndex_31432644; // w0
  __int64 v10; // x9
  struct BattleSetupInfo_o *v11; // x8
  int64_t v12; // x10
  int32_t v13; // w10
  __int64 v14; // x10
  __int64 v15; // x10
  int32_t v16; // w9
  Il2CppObject *v17; // x19

  if ( (byte_4B1135C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method, v2);
    sub_1BCA7E0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v4, v5);
    byte_4B1135C = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
      ItemIndex_31432644 = FollowerSelectItemListViewManager__GetItemIndex_31432644(
                             (FollowerSelectItemListViewManager_o *)Instance,
                             followerId,
                             battleSetupInfo->fields.followerClassId,
                             battleSetupInfo->fields.followerSupportDeckId,
                             0LL);
      this->fields.selectItemNum = ItemIndex_31432644 & ~(ItemIndex_31432644 >> 31);
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
      v10 = *((_QWORD *)Instance + 14);
      v11 = this->fields.battleSetupInfo;
      if ( v10 )
      {
        v12 = *(_QWORD *)(v10 + 16);
        if ( !v11 )
          goto LABEL_31;
      }
      else
      {
        v12 = 0LL;
        if ( !v11 )
          goto LABEL_31;
      }
      v11->fields.followerId = v12;
      v13 = *((_DWORD *)Instance + 31);
      if ( v13 )
        v13 = *((_DWORD *)Instance + 30);
      v11->fields.followerClassId = v13;
      v11->fields.followerSupportDeckId = *((_DWORD *)Instance + 65);
      if ( !*((_BYTE *)Instance + 255) )
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
            sub_1BCAA44(Instance, followerId);
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
      sub_1BCAA3C(Instance, followerId);
    }
  }
LABEL_28:
  this->fields.state = 5;
  v17 = (Il2CppObject *)this->fields.battleSetupInfo;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  AvalonSceneManager__pushScene((AvalonSceneManager_o *)Instance, 40, 1, v17, 0LL);
  return 1;
}


bool __fastcall FollowerRootComponent__StartSupportInfoMenu(FollowerRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 selectItemNum; // x1
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x0
  FollowerSelectItemListViewItem_o *Item; // x0
  __int64 v19; // x1
  FollowerSelectItemListViewItem_o *v20; // x20
  __int64 v21; // x2
  __int64 v22; // x3
  Il2CppClass *klass; // x8
  int namespaze; // w9
  int v25; // w10
  FollowerInfo_o *v26; // x21
  struct FollowerInfo_o *followerInfo; // x11
  Il2CppClass *v28; // x8
  const char *v29; // x9
  int v30; // w10
  struct FollowerInfo_o *userId; // x11
  bool v32; // w21
  SupportInfoJump_o *v34; // x20
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  Il2CppObject *v36; // [xsp+8h] [xbp-38h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4B1135D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_PickupUserFollowerMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserFollowerMaster___, v4, v5);
    sub_1BCA7E0(&DataManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long__TryGetSingleEntity__, v8, v9);
    sub_1BCA7E0(
      &Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long__TryGetSingleEntity__,
      v10,
      v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v12, v13);
    sub_1BCA7E0(&SupportInfoJump_TypeInfo, v14, v15);
    byte_4B1135D = 1;
  }
  entity = 0LL;
  v36 = 0LL;
  selectItemNum = (unsigned int)this->fields.selectItemNum;
  if ( (selectItemNum & 0x80000000) == 0 )
  {
    operationItemListViewManager = this->fields.operationItemListViewManager;
    if ( !operationItemListViewManager )
      goto LABEL_41;
    Item = FollowerSelectItemListViewManager__GetItem(operationItemListViewManager, selectItemNum, 0LL);
    if ( Item )
    {
      v20 = Item;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v19);
      operationItemListViewManager = (FollowerSelectItemListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserFollowerMaster___);
      if ( !operationItemListViewManager )
        goto LABEL_41;
      operationItemListViewManager = (FollowerSelectItemListViewManager_o *)DataMasterBase_object__object__long___TryGetSingleEntity(
                                                                              (DataMasterBase_TMaster__TEntity__PKType__o *)operationItemListViewManager,
                                                                              &entity,
                                                                              (const MethodInfo_31B30C8 *)Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long__TryGetSingleEntity__);
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
          v25 = 0;
          while ( 1 )
          {
            if ( namespaze == v25 )
              sub_1BCAA44(operationItemListViewManager, selectItemNum);
            v26 = (FollowerInfo_o *)*((_QWORD *)&klass->_1.byval_arg.data + v25);
            if ( !v26 )
              goto LABEL_41;
            followerInfo = v20->fields.followerInfo;
            if ( followerInfo )
              followerInfo = (struct FollowerInfo_o *)followerInfo->fields.userId;
            if ( (struct FollowerInfo_o *)v26->fields.userId == followerInfo )
              break;
            if ( namespaze == ++v25 )
              goto LABEL_20;
          }
LABEL_37:
          this->fields.state = 6;
          v34 = (SupportInfoJump_o *)sub_1BCAA2C(SupportInfoJump_TypeInfo, selectItemNum, v21, v22);
          SupportInfoJump___ctor_39427504(v34, v26, 0, 1, 0LL);
          battleSetupInfo = this->fields.battleSetupInfo;
          if ( battleSetupInfo )
          {
            if ( v34 )
            {
              SupportInfoJump__SetSetupInfo(
                v34,
                battleSetupInfo->fields.eventUpValSetupInfo,
                battleSetupInfo->fields.questRestrictionInfo,
                0LL);
              operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
              if ( operationItemListViewManager )
              {
                v32 = 1;
                AvalonSceneManager__pushScene(
                  (AvalonSceneManager_o *)operationItemListViewManager,
                  60,
                  1,
                  (Il2CppObject *)v34,
                  0LL);
                return v32;
              }
            }
          }
LABEL_41:
          sub_1BCAA3C(operationItemListViewManager, selectItemNum);
        }
      }
LABEL_20:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, selectItemNum);
      operationItemListViewManager = (FollowerSelectItemListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_PickupUserFollowerMaster___);
      if ( !operationItemListViewManager )
        goto LABEL_41;
      operationItemListViewManager = (FollowerSelectItemListViewManager_o *)DataMasterBase_object__object__long___TryGetSingleEntity(
                                                                              (DataMasterBase_TMaster__TEntity__PKType__o *)operationItemListViewManager,
                                                                              &v36,
                                                                              (const MethodInfo_31B30C8 *)Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long__TryGetSingleEntity__);
      if ( ((unsigned __int8)operationItemListViewManager & 1) != 0 )
      {
        if ( !v36 )
          goto LABEL_41;
        v28 = v36[1].klass;
        if ( v28 )
        {
          v29 = v28->_1.namespaze;
          if ( v29 )
          {
            if ( (int)v29 >= 1 )
            {
              v30 = 0;
              while ( 1 )
              {
                v26 = (FollowerInfo_o *)*((_QWORD *)&v28->_1.byval_arg.data + v30);
                if ( !v26 )
                  goto LABEL_41;
                userId = v20->fields.followerInfo;
                if ( userId )
                  userId = (struct FollowerInfo_o *)userId->fields.userId;
                if ( (struct FollowerInfo_o *)v26->fields.userId == userId )
                  goto LABEL_37;
                ++v30;
                v32 = 0;
                if ( (_DWORD)v29 == v30 )
                  return v32;
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 Instance; // x0
  __int64 v25; // x1
  __int64 v26; // x1
  Il2CppObject *MasterData_object; // x20
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  struct BattleSetupInfo_o *v29; // x8
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  int32_t *p_friendPointUpVal; // x25
  Il2CppObject *v32; // x21
  EventQuestMaster_o *v33; // x22
  struct BattleSetupInfo_o *v34; // x8
  struct EventCampaignEntity_array *Data_39812612; // x0
  struct BattleSetupInfo_o *v36; // x8
  int32_t i; // w20
  BalanceConfig_c *v38; // x0
  PartyOrganizationListViewItem_o *Member; // x0
  PartyOrganizationListViewItem_o *v40; // x21
  System_Int64_array *v41; // x22
  UserServantEntity_o *userServantEntity; // x8
  int32_t v43; // w21
  struct BattleSetupInfo_o *v44; // x8
  QuestRestrictionInfo_o *v45; // x0
  struct BattleSetupInfo_o *v46; // x8
  struct BattleSetupInfo_o *v47; // x8
  __int64 v48; // x1
  Il2CppObject *v49; // x20
  struct BattleSetupInfo_o *v50; // x8
  int32_t eventId; // w22
  int64_t v52; // x21
  struct BattleSetupInfo_o *v53; // x8
  UserEventDeckEntity_o *v54; // x20
  __int64 v55; // x21
  int v56; // w8
  unsigned __int64 v57; // x22
  __int64 v58; // x26
  System_Int64_array *v59; // x23
  int32_t v60; // w24
  unsigned __int64 v61; // x22
  __int64 v62; // x26
  System_Int64_array *v63; // x23
  int v64; // w24
  struct BattleSetupInfo_o *v65; // x8
  int32_t k; // w20
  BalanceConfig_c *v67; // x0
  UserServantEntity_o *UserServant; // x0
  UserServantEntity_o *v69; // x21
  System_Int64_array *EquipList; // x23
  int32_t FriendPointUpVal; // w22
  int32_t m; // w19
  UserServantEntity_o *v73; // x0
  UserServantEntity_o *v74; // x20
  System_Int64_array *v75; // x22
  int32_t v76; // w21
  int32_t j; // w19
  PartyOrganizationListViewItem_o *v78; // x0
  PartyOrganizationListViewItem_o *v79; // x20
  System_Int64_array *v80; // x21
  UserServantEntity_o *v81; // x8
  int v82; // w20
  __int64 v83; // x1
  int32_t v84; // w21
  int32_t v85; // w21
  struct BattleSetupInfo_o *v86; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B11353 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventCampaignMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventQuestMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserDeckMaster___, v8, v9);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEventDeckMaster___, v10, v11);
    sub_1BCA7E0(&Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__TryGetEntity__, v12, v13);
    sub_1BCA7E0(&LastUsedDeckNumberManager_TypeInfo, v14, v15);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v16, v17);
    sub_1BCA7E0(&OptionManager_TypeInfo, v18, v19);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20, v21);
    sub_1BCA7E0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v22, v23);
    byte_4B11353 = 1;
  }
  entity = 0LL;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_134;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v26);
  Instance = OptionManager__GetAutoSelectParty(0LL);
  if ( (Instance & 1) == 0 )
    goto LABEL_9;
  Instance = (__int64)this->fields.battleSetupInfo;
  if ( !Instance )
    goto LABEL_134;
  if ( *(_BYTE *)(Instance + 74) )
    goto LABEL_9;
  v84 = BattleSetupInfo__TargetQuestId((BattleSetupInfo_o *)Instance, 0LL);
  if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo, v83);
  Instance = LastUsedDeckNumberManager__GetDeckNumber(v84, 0LL);
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
                 (const MethodInfo_31B3040 *)Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__TryGetEntity__);
  }
  else
  {
    v85 = Instance;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v25);
    Instance = NetworkManager__get_UserId(0LL);
    if ( !MasterData_object )
      goto LABEL_134;
    Instance = (__int64)UserDeckMaster__getDeck((UserDeckMaster_o *)MasterData_object, Instance, v85, 0LL);
    entity = (Il2CppObject *)Instance;
  }
  v29 = this->fields.battleSetupInfo;
  if ( !v29 )
    goto LABEL_134;
  questRestrictionInfo = v29->fields.questRestrictionInfo;
  if ( questRestrictionInfo )
    QuestRestrictionInfo__SetDeckInfo(questRestrictionInfo, (UserDeckEntity_o *)entity, 0LL);
  *(_QWORD *)&this->fields.friendPointUpVal = 0LL;
  p_friendPointUpVal = &this->fields.friendPointUpVal;
  this->fields.friendPointCampaignEntityList = 0LL;
  sub_1BCA784(&this->fields.friendPointCampaignEntityList, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_134;
  v32 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_134;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventQuestMaster___);
  if ( !this->fields.battleSetupInfo )
    goto LABEL_134;
  v33 = (EventQuestMaster_o *)Instance;
  Instance = BattleSetupInfo__TargetQuestId(this->fields.battleSetupInfo, 0LL);
  v34 = this->fields.battleSetupInfo;
  if ( !v34 )
    goto LABEL_134;
  if ( !v33 )
    goto LABEL_134;
  Instance = (__int64)EventQuestMaster__GetEnabledEventCampaignForQuest(
                        v33,
                        Instance,
                        v34->fields.questPhase,
                        0LL,
                        7,
                        0LL);
  if ( !v32 )
    goto LABEL_134;
  Data_39812612 = EventCampaignMaster__getData_39812612(
                    (EventCampaignMaster_o *)v32,
                    24,
                    (EventEntity_array *)Instance,
                    0LL);
  this->fields.friendPointCampaignEntityList = Data_39812612;
  Instance = sub_1BCA784(&this->fields.friendPointCampaignEntityList, Data_39812612);
  if ( this->fields.tutorialMode == 4 )
  {
    v36 = this->fields.battleSetupInfo;
    if ( !v36 )
      goto LABEL_134;
    if ( v36->fields.isChildFollower )
    {
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_134;
      if ( *(_QWORD *)(Instance + 72) )
      {
        for ( i = 0; ; ++i )
        {
          v38 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v25);
            v38 = BalanceConfig_TypeInfo;
          }
          if ( i >= v38->static_fields->DeckMemberMax )
            break;
          Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( !Instance )
            goto LABEL_134;
          Instance = *(_QWORD *)(Instance + 72);
          if ( !Instance )
            goto LABEL_134;
          Member = PartyListViewItem__GetMember((PartyListViewItem_o *)Instance, i, 0LL);
          if ( Member )
          {
            v40 = Member;
            if ( Member->fields.userServantEntity )
            {
              Instance = (__int64)PartyOrganizationListViewItem__GetEquipList(Member, 0LL);
              if ( !v40->fields.userServantEntity )
                goto LABEL_134;
              v41 = (System_Int64_array *)Instance;
              Instance = UserServantEntity__getFriendPointUpVal(
                           v40->fields.userServantEntity,
                           (System_Int64_array *)Instance,
                           0LL);
              userServantEntity = v40->fields.userServantEntity;
              if ( !userServantEntity )
                goto LABEL_134;
              v43 = Instance;
              if ( UserServantEntity__getFriendPointUpType(userServantEntity, v41, 0LL) == 104
                && v43 > *p_friendPointUpVal )
              {
                this->fields.friendPointUpVal = v43;
                this->fields.friendPointUpMaxVal = v43;
              }
            }
          }
        }
        for ( j = 0; ; ++j )
        {
          if ( !v38->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v38, v25);
            v38 = BalanceConfig_TypeInfo;
          }
          if ( j >= v38->static_fields->DeckMemberMax )
            break;
          Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( !Instance )
            goto LABEL_134;
          Instance = *(_QWORD *)(Instance + 72);
          if ( !Instance )
            goto LABEL_134;
          v78 = PartyListViewItem__GetMember((PartyListViewItem_o *)Instance, j, 0LL);
          if ( v78 )
          {
            v79 = v78;
            if ( v78->fields.userServantEntity )
            {
              Instance = (__int64)PartyOrganizationListViewItem__GetEquipList(v78, 0LL);
              if ( !v79->fields.userServantEntity )
                goto LABEL_134;
              v80 = (System_Int64_array *)Instance;
              Instance = UserServantEntity__getFriendPointUpVal(
                           v79->fields.userServantEntity,
                           (System_Int64_array *)Instance,
                           0LL);
              v81 = v79->fields.userServantEntity;
              if ( !v81 )
                goto LABEL_134;
              v82 = Instance;
              if ( UserServantEntity__getFriendPointUpType(v81, v80, 0LL) == 123 )
                *p_friendPointUpVal += v82;
            }
          }
          v38 = BalanceConfig_TypeInfo;
        }
        return;
      }
    }
  }
  v44 = this->fields.battleSetupInfo;
  if ( !v44 )
LABEL_134:
    sub_1BCAA3C(Instance, v25);
  v45 = v44->fields.questRestrictionInfo;
  if ( v45 )
  {
    Instance = QuestRestrictionInfo__IsServantNum(v45, 0LL);
    if ( (Instance & 1) != 0 )
      goto LABEL_49;
    v46 = this->fields.battleSetupInfo;
    if ( !v46 )
      goto LABEL_134;
    Instance = (__int64)v46->fields.questRestrictionInfo;
    if ( !Instance )
      goto LABEL_134;
    Instance = QuestRestrictionInfo__IsNpcMulitipleOrOnly((QuestRestrictionInfo_o *)Instance, 0LL);
    if ( (Instance & 1) != 0 )
      goto LABEL_49;
    v47 = this->fields.battleSetupInfo;
    if ( !v47 )
      goto LABEL_134;
    Instance = (__int64)v47->fields.questRestrictionInfo;
    if ( !Instance )
      goto LABEL_134;
    if ( *(int *)(Instance + 404) >= 1 )
    {
LABEL_49:
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        v49 = DataManager__GetMasterData_object_(
                (DataManager_o *)Instance,
                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventDeckMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v48);
        Instance = NetworkManager__get_UserId(0LL);
        v50 = this->fields.battleSetupInfo;
        if ( v50 )
        {
          eventId = v50->fields.eventId;
          v52 = Instance;
          Instance = BattleSetupInfo__TargetQuestId(this->fields.battleSetupInfo, 0LL);
          v53 = this->fields.battleSetupInfo;
          if ( v53 )
          {
            if ( v49 )
            {
              Instance = (__int64)UserEventDeckMaster__getDeckList(
                                    (UserEventDeckMaster_o *)v49,
                                    v52,
                                    eventId,
                                    Instance,
                                    v53->fields.questPhase,
                                    0LL);
              if ( Instance )
              {
                if ( !*(_DWORD *)(Instance + 24) )
                  goto LABEL_135;
                v54 = *(UserEventDeckEntity_o **)(Instance + 32);
                if ( v54 )
                {
                  Instance = (__int64)UserEventDeckEntity__GetUserServantList(
                                        *(UserEventDeckEntity_o **)(Instance + 32),
                                        0,
                                        0,
                                        0LL);
                  if ( Instance )
                  {
                    v55 = Instance;
                    v56 = *(_QWORD *)(Instance + 24);
                    if ( v56 >= 1 )
                    {
                      v57 = 0LL;
                      v58 = Instance + 32;
                      while ( v57 < (unsigned int)v56 )
                      {
                        if ( *(_QWORD *)(v58 + 8 * v57) )
                        {
                          Instance = (__int64)UserEventDeckEntity__GetEquipList(v54, v57, 0LL);
                          if ( v57 >= *(unsigned int *)(v55 + 24) )
                            break;
                          v59 = (System_Int64_array *)Instance;
                          Instance = *(_QWORD *)(v58 + 8 * v57);
                          if ( !Instance )
                            goto LABEL_134;
                          Instance = UserServantEntity__getFriendPointUpVal((UserServantEntity_o *)Instance, v59, 0LL);
                          if ( v57 >= *(unsigned int *)(v55 + 24) )
                            break;
                          v60 = Instance;
                          Instance = *(_QWORD *)(v58 + 8 * v57);
                          if ( !Instance )
                            goto LABEL_134;
                          Instance = UserServantEntity__getFriendPointUpType((UserServantEntity_o *)Instance, v59, 0LL);
                          if ( (_DWORD)Instance == 104 && v60 > *p_friendPointUpVal )
                          {
                            this->fields.friendPointUpVal = v60;
                            this->fields.friendPointUpMaxVal = v60;
                          }
                        }
                        v56 = *(_DWORD *)(v55 + 24);
                        if ( (__int64)++v57 >= v56 )
                          goto LABEL_71;
                      }
LABEL_135:
                      sub_1BCAA44(Instance, v25);
                    }
LABEL_71:
                    if ( v56 >= 1 )
                    {
                      v61 = 0LL;
                      v62 = v55 + 32;
                      while ( v61 < (unsigned int)v56 )
                      {
                        if ( *(_QWORD *)(v62 + 8 * v61) )
                        {
                          Instance = (__int64)UserEventDeckEntity__GetEquipList(v54, v61, 0LL);
                          if ( v61 >= *(unsigned int *)(v55 + 24) )
                            goto LABEL_135;
                          v63 = (System_Int64_array *)Instance;
                          Instance = *(_QWORD *)(v62 + 8 * v61);
                          if ( !Instance )
                            goto LABEL_134;
                          Instance = UserServantEntity__getFriendPointUpVal((UserServantEntity_o *)Instance, v63, 0LL);
                          if ( v61 >= *(unsigned int *)(v55 + 24) )
                            goto LABEL_135;
                          v64 = Instance;
                          Instance = *(_QWORD *)(v62 + 8 * v61);
                          if ( !Instance )
                            goto LABEL_134;
                          Instance = UserServantEntity__getFriendPointUpType((UserServantEntity_o *)Instance, v63, 0LL);
                          if ( (_DWORD)Instance == 123 )
                            *p_friendPointUpVal += v64;
                        }
                        v56 = *(_DWORD *)(v55 + 24);
                        if ( (__int64)++v61 >= v56 )
                          goto LABEL_82;
                      }
                      goto LABEL_135;
                    }
LABEL_82:
                    v65 = this->fields.battleSetupInfo;
                    if ( v65 )
                    {
                      Instance = (__int64)v65->fields.questRestrictionInfo;
                      if ( Instance )
                      {
                        QuestRestrictionInfo__SetDeckInfo_41166008((QuestRestrictionInfo_o *)Instance, v54, 0LL);
                        return;
                      }
                    }
                  }
                }
                else
                {
                  v86 = this->fields.battleSetupInfo;
                  if ( v86 )
                  {
                    Instance = (__int64)v86->fields.questRestrictionInfo;
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
    v67 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v25);
      v67 = BalanceConfig_TypeInfo;
    }
    if ( k >= v67->static_fields->DeckMemberMax )
      break;
    Instance = (__int64)entity;
    if ( !entity )
      goto LABEL_134;
    UserServant = UserDeckEntity__GetUserServant((UserDeckEntity_o *)entity, k, 0LL);
    if ( UserServant )
    {
      v69 = UserServant;
      Instance = (__int64)entity;
      if ( !entity )
        goto LABEL_134;
      EquipList = UserDeckEntity__GetEquipList((UserDeckEntity_o *)entity, k, 0LL);
      FriendPointUpVal = UserServantEntity__getFriendPointUpVal(v69, EquipList, 0LL);
      if ( UserServantEntity__getFriendPointUpType(v69, EquipList, 0LL) == 104 && FriendPointUpVal > *p_friendPointUpVal )
      {
        this->fields.friendPointUpVal = FriendPointUpVal;
        this->fields.friendPointUpMaxVal = FriendPointUpVal;
      }
    }
  }
  for ( m = 0; ; ++m )
  {
    if ( !v67->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v67, v25);
      v67 = BalanceConfig_TypeInfo;
    }
    if ( m >= v67->static_fields->DeckMemberMax )
      break;
    Instance = (__int64)entity;
    if ( !entity )
      goto LABEL_134;
    v73 = UserDeckEntity__GetUserServant((UserDeckEntity_o *)entity, m, 0LL);
    if ( v73 )
    {
      v74 = v73;
      Instance = (__int64)entity;
      if ( !entity )
        goto LABEL_134;
      v75 = UserDeckEntity__GetEquipList((UserDeckEntity_o *)entity, m, 0LL);
      v76 = UserServantEntity__getFriendPointUpVal(v74, v75, 0LL);
      if ( UserServantEntity__getFriendPointUpType(v74, v75, 0LL) == 123 )
        *p_friendPointUpVal += v76;
    }
    v67 = BalanceConfig_TypeInfo;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerRootComponent___OnClickBack_b__71_0(
        FollowerRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  CommonUI_o *Instance; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  TerminalPramsManager_c *v12; // x0

  if ( (byte_4B1136C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, method);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_3554/*"CLICK_BACK"*/, v7, v8);
    byte_4B1136C = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  CommonUI__CloseConfirmDialog(Instance, 0LL);
  if ( isDecide )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10);
    if ( !byte_4B11139 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v10, v11);
      byte_4B11139 = 1;
    }
    v12 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v10);
      v12 = TerminalPramsManager_TypeInfo;
    }
    v12->static_fields->_IsAutoResume_k__BackingField = 1;
    Instance = (CommonUI_o *)this->fields.myFSM;
    if ( Instance )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3554/*"CLICK_BACK"*/, 0LL);
      return;
    }
LABEL_14:
    sub_1BCAA3C(Instance, v10);
  }
  this->fields.state = 3;
}


void __fastcall FollowerRootComponent__beginFinish(FollowerRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x0
  __int64 v9; // x1
  FollowerRootComponent_c *v10; // x0
  struct FollowerRootComponent_StaticFields *static_fields; // x0
  __int64 v12; // x1

  if ( (byte_4B1134F & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, method, v2);
    sub_1BCA7E0(&FollowerRootComponent_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, v6, v7);
    byte_4B1134F = 1;
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
  v10 = FollowerRootComponent_TypeInfo;
  if ( !FollowerRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerRootComponent_TypeInfo, v9);
    v10 = FollowerRootComponent_TypeInfo;
  }
  static_fields = v10->static_fields;
  static_fields->partyOrganizationAtlasCache = 0LL;
  sub_1BCA784(&static_fields->partyOrganizationAtlasCache, 0LL);
  operationItemListViewManager = (FollowerSelectItemListViewManager_o *)this->fields.backSkinSprite;
  if ( !operationItemListViewManager
    || (operationItemListViewManager = (FollowerSelectItemListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                                (UnityEngine_Component_o *)operationItemListViewManager,
                                                                                0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)operationItemListViewManager, 0, 0LL),
        (operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__)) == 0LL) )
  {
LABEL_14:
    sub_1BCAA3C(operationItemListViewManager, method);
  }
  AtlasManager__ReleaseUISkin((AtlasManager_o *)operationItemListViewManager, 2, 0, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v12);
  AtlasManager__ReleasePartyOrganizationAtlas(0LL);
}


void __fastcall FollowerRootComponent__beginInitialize(FollowerRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4B11344 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method, v2);
    byte_4B11344 = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v5);
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, (SceneRootComponent_o *)this, 0LL);
}


void __fastcall FollowerRootComponent__beginPause(FollowerRootComponent_o *this, const MethodInfo *method)
{
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x0

  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    sub_1BCAA3C(0LL, method);
  FollowerSelectItemListViewManager__SaveSortFilter(operationItemListViewManager, 0LL);
}


void __fastcall FollowerRootComponent__beginResume(
        FollowerRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  FollowerRootComponent_c *v27; // x0
  struct UIAtlas_o *partyOrganizationAtlas; // x21
  struct FollowerRootComponent_StaticFields *static_fields; // x0
  TitleInfoControl_o *titleInfo; // x21
  __int64 Instance; // x0
  unsigned __int64 selectItemNum; // x1
  __int64 methodPtr_low; // x10
  __int64 v34; // x2
  __int64 v35; // x9
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  int64_t v37; // x10
  Il2CppClass *v38; // x8
  __int64 v39; // x9
  Il2CppObject *v40; // x10
  Il2CppObject *v41; // x1
  struct BattleSetupInfo_o **p_battleSetupInfo; // x21
  struct BattleSetupInfo_o *v43; // x8
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x20
  int32_t tutorialMode; // w8
  struct BattleSetupInfo_o *v46; // x8
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  struct BattleSetupInfo_o *v48; // x8
  const MethodInfo *v49; // x4
  struct BattleSetupInfo_o *v50; // x8
  const MethodInfo *v51; // x1
  CommonUI_o *v52; // x20
  struct BattleSetupInfo_o *v53; // x8
  PartyListViewItem_o *v54; // x20
  UnityEngine_Component_o *v55; // x8
  int32_t i; // w21
  FollowerSelectItemListViewManager_o *v57; // x22
  struct BattleSetupInfo_o *v58; // x8
  const MethodInfo *v59; // x4
  struct BattleSetupInfo_o *v60; // x8
  FollowerSelectItemListViewManager_o *v61; // x22
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x3
  FollowerSelectItemListViewManager_CallbackFunc_o *v65; // x23
  __int64 v66; // x1
  PartyOrganizationListViewItem_o *Member; // x0
  struct FollowerInfo_o *followerInfo; // x8
  FollowerSelectItemListViewManager_o *v69; // x20
  int64_t userId; // x21
  struct QuestRestrictionInfo_o *v71; // x8
  BalanceConfig_c *v72; // x0
  int32_t v73; // w22
  PartyOrganizationListViewItem_o *v74; // x0
  struct FollowerInfo_o *v75; // x8
  int klass_high; // w10
  int32_t v77; // w9
  struct BattleSetupInfo_o *v78; // x8
  Il2CppObject *v79; // x19

  if ( (byte_4B1134D & 1) == 0 )
  {
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, data, method);
    sub_1BCA7E0(&BalanceConfig_TypeInfo, v5, v6);
    sub_1BCA7E0(&BattleSetupInfo_TypeInfo, v7, v8);
    sub_1BCA7E0(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_FollowerRootComponent_OnSelectFollowerItem__, v11, v12);
    sub_1BCA7E0(&FollowerRootComponent_TypeInfo, v13, v14);
    sub_1BCA7E0(&RandomLimitCountManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17, v18);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v19, v20);
    sub_1BCA7E0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v21, v22);
    sub_1BCA7E0(&SupportInfoJump_TypeInfo, v23, v24);
    sub_1BCA7E0(&TutorialFlag_TypeInfo, v25, v26);
    byte_4B1134D = 1;
  }
  v27 = FollowerRootComponent_TypeInfo;
  partyOrganizationAtlas = this->fields.partyOrganizationAtlas;
  if ( !FollowerRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerRootComponent_TypeInfo, data);
    v27 = FollowerRootComponent_TypeInfo;
  }
  static_fields = v27->static_fields;
  static_fields->partyOrganizationAtlasCache = partyOrganizationAtlas;
  sub_1BCA784(&static_fields->partyOrganizationAtlasCache, partyOrganizationAtlas);
  titleInfo = this->fields.titleInfo;
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
            v35 = *(_QWORD *)(Instance + 112);
            battleSetupInfo = this->fields.battleSetupInfo;
            if ( v35 )
              v37 = *(_QWORD *)(v35 + 16);
            else
              v37 = 0LL;
            if ( battleSetupInfo )
            {
              battleSetupInfo->fields.followerId = v37;
              battleSetupInfo->fields.followerClassId = (int32_t)data[3].klass;
              klass_high = HIDWORD(data[3].klass);
              if ( klass_high <= 0 )
                klass_high = *(_DWORD *)(Instance + 260);
              battleSetupInfo->fields.followerSupportDeckId = klass_high;
              if ( v35 )
              {
                v77 = *(_DWORD *)(v35 + 36);
                battleSetupInfo->fields.followerType = 0;
                if ( v77 == 5 || v77 == 1 )
                  battleSetupInfo->fields.followerType = v77;
              }
              else
              {
                battleSetupInfo->fields.followerType = 0;
              }
              if ( this->fields.operationItemListViewManager )
              {
                if ( !byte_4B1137C )
                {
                  sub_1BCA7E0(&FollowerSelectItemListViewManager_TypeInfo, selectItemNum, v34);
                  byte_4B1137C = 1;
                }
                Instance = (__int64)FollowerSelectItemListViewManager_TypeInfo;
                if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo, selectItemNum);
                  Instance = (__int64)FollowerSelectItemListViewManager_TypeInfo;
                }
                v78 = this->fields.battleSetupInfo;
                if ( v78 )
                {
                  selectItemNum = (unsigned int)v78->fields.followerClassId;
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
                  v79 = (Il2CppObject *)this->fields.battleSetupInfo;
                  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
                  if ( Instance )
                  {
                    AvalonSceneManager__pushScene((AvalonSceneManager_o *)Instance, 40, 1, v79, 0LL);
                    return;
                  }
                }
              }
            }
LABEL_122:
            sub_1BCAA3C(Instance, selectItemNum);
          }
        }
      }
    }
    goto LABEL_39;
  }
  if ( data )
  {
    v38 = (Il2CppClass *)BattleSetupInfo_TypeInfo;
    v39 = LOBYTE(BattleSetupInfo_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(data->klass->vtable[0].methodPtr) >= (unsigned int)v39 )
    {
      if ( (BattleSetupInfo_c *)data->klass->_2.typeHierarchy[v39 - 1] == BattleSetupInfo_TypeInfo )
        v40 = data;
      else
        v40 = 0LL;
    }
    else
    {
      v40 = 0LL;
    }
    this->fields.battleSetupInfo = (struct BattleSetupInfo_o *)v40;
    p_battleSetupInfo = &this->fields.battleSetupInfo;
    if ( LOBYTE(data->klass->vtable[0].methodPtr) >= (unsigned int)v39 )
    {
      if ( data->klass->_2.typeHierarchy[v39 - 1] == v38 )
        v41 = data;
      else
        v41 = 0LL;
    }
    else
    {
      v41 = 0LL;
    }
  }
  else
  {
    v41 = 0LL;
    this->fields.battleSetupInfo = 0LL;
    p_battleSetupInfo = &this->fields.battleSetupInfo;
  }
  Instance = sub_1BCA784(p_battleSetupInfo, v41);
  v43 = *p_battleSetupInfo;
  if ( *p_battleSetupInfo )
  {
    questRestrictionInfo = v43->fields.questRestrictionInfo;
    if ( !questRestrictionInfo )
      goto LABEL_122;
    if ( !QuestRestrictionInfo__IsMyServantOrNpcRestriction(v43->fields.questRestrictionInfo, 0LL)
      && (questRestrictionInfo->fields.isNoSupportBattle
       || questRestrictionInfo->fields.isFixedMyServantSingle
       || questRestrictionInfo->fields.isSupportOnlyForceBattle) )
    {
      goto LABEL_91;
    }
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, selectItemNum);
    Instance = TutorialFlag__Get_38402052(102, 0LL);
    if ( (Instance & 1) == 0 )
    {
      v46 = *p_battleSetupInfo;
      if ( !*p_battleSetupInfo )
        goto LABEL_122;
LABEL_62:
      if ( v46->fields.isChildFollower )
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
          v46 = this->fields.battleSetupInfo;
          if ( !v46 )
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
      v48 = this->fields.battleSetupInfo;
      if ( !v48 )
        goto LABEL_122;
      if ( !operationItemListViewManager )
        goto LABEL_122;
      FollowerSelectItemListViewManager__CreateList(
        operationItemListViewManager,
        Instance,
        v48->fields.questPhase,
        this->fields.friendPointUpVal,
        this->fields.friendPointUpMaxVal,
        this->fields.friendPointCampaignEntityList,
        v48->fields.questRestrictionInfo,
        0LL);
      v50 = this->fields.battleSetupInfo;
      if ( !v50 )
        goto LABEL_122;
      Instance = (__int64)this->fields.followerQuestInfomationDraw;
      if ( !Instance )
        goto LABEL_122;
      FollowerQuestInfomationDraw__SetInfomation(
        (FollowerQuestInfomationDraw_o *)Instance,
        v50->fields.questRestrictionInfo,
        0,
        0LL,
        v49);
      this->fields.state = 2;
      FollowerRootComponent__OnMoveEnd(this, v51);
LABEL_57:
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v52 = (CommonUI_o *)Instance;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, selectItemNum);
      if ( v52 )
      {
        CommonUI__maskFadein(v52, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
        SceneRootComponent__sendMessageResume((SceneRootComponent_o *)this, 0LL);
        return;
      }
      goto LABEL_122;
    }
    if ( this->fields.state == 6 )
      goto LABEL_50;
    v53 = this->fields.battleSetupInfo;
    if ( !v53 )
      goto LABEL_122;
    if ( v53->fields.isChildFollower )
      goto LABEL_125;
    v71 = v53->fields.questRestrictionInfo;
    if ( !v71 )
      goto LABEL_122;
    if ( !v71->fields.isNotTransitionSupportList )
    {
LABEL_125:
      if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, selectItemNum);
      RandomLimitCountManager__set_EnableRandomLimitCount(0, 0LL);
      RandomLimitCountManager__set_EnableRandomLimitCount(1, 0LL);
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_122;
      v54 = *(PartyListViewItem_o **)(Instance + 72);
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_122;
      v55 = (UnityEngine_Component_o *)this->fields.operationItemListViewManager;
      i = *(_DWORD *)(Instance + 56);
      this->fields.tutorialState = 0;
      this->fields.selectItemNum = -1;
      if ( !v55 )
        goto LABEL_122;
      Instance = (__int64)UnityEngine_Component__get_gameObject(v55, 0LL);
      if ( !Instance )
        goto LABEL_122;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
      Instance = (__int64)this->fields.battleSetupInfo;
      if ( !Instance )
        goto LABEL_122;
      v57 = this->fields.operationItemListViewManager;
      Instance = BattleSetupInfo__TargetQuestId((BattleSetupInfo_o *)Instance, 0LL);
      v58 = this->fields.battleSetupInfo;
      if ( !v58 )
        goto LABEL_122;
      if ( !v57 )
        goto LABEL_122;
      FollowerSelectItemListViewManager__CreateList(
        v57,
        Instance,
        v58->fields.questPhase,
        this->fields.friendPointUpVal,
        this->fields.friendPointUpMaxVal,
        this->fields.friendPointCampaignEntityList,
        v58->fields.questRestrictionInfo,
        0LL);
      v60 = this->fields.battleSetupInfo;
      if ( !v60 )
        goto LABEL_122;
      Instance = (__int64)this->fields.followerQuestInfomationDraw;
      if ( !Instance )
        goto LABEL_122;
      FollowerQuestInfomationDraw__SetInfomation(
        (FollowerQuestInfomationDraw_o *)Instance,
        v60->fields.questRestrictionInfo,
        i,
        0LL,
        v59);
      this->fields.state = 3;
      v61 = this->fields.operationItemListViewManager;
      v65 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                                  FollowerSelectItemListViewManager_CallbackFunc_TypeInfo,
                                                                  v62,
                                                                  v63,
                                                                  v64);
      FollowerSelectItemListViewManager_CallbackFunc___ctor(
        v65,
        (Il2CppObject *)this,
        (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
        0LL);
      if ( !v61 )
        goto LABEL_122;
      FollowerSelectItemListViewManager__SetMode(v61, 2, v65, 0LL);
      if ( v54 )
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
              Member = PartyListViewItem__GetMember(v54, i - 1, 0LL);
              if ( Member )
              {
                followerInfo = Member->fields.followerInfo;
                if ( followerInfo )
                {
                  v69 = this->fields.operationItemListViewManager;
                  userId = followerInfo->fields.userId;
                  Instance = (__int64)PartyOrganizationListViewItem__get_ServantLeader(Member, 0LL);
                  if ( !Instance )
                    goto LABEL_122;
                  if ( !v69 )
                    goto LABEL_122;
                  Instance = FollowerSelectItemListViewManager__GetItemIndex(
                               v69,
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
              v72 = BalanceConfig_TypeInfo;
              v73 = i - 1;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v66);
                v72 = BalanceConfig_TypeInfo;
              }
              if ( v73 >= v72->static_fields->DeckMemberMax )
                break;
              v74 = PartyListViewItem__GetMember(v54, v73, 0LL);
              if ( v74 )
              {
                v75 = v74->fields.followerInfo;
                if ( v75 )
                {
                  if ( Follower__IsNotNpc(v75->fields.type, 0LL) )
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
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  MissionNotifyManager_o *Instance; // x0
  const MethodInfo *v44; // x1
  struct System_Collections_Generic_List_int__o *assetLoadedEventIdList; // x8
  struct BattleSetupInfo_o *monitor; // x1
  const MethodInfo *v47; // x1
  Il2CppClass *v48; // x8
  __int64 methodPtr_low; // x9
  struct BattleSetupInfo_o *v50; // x10
  Il2CppObject *v51; // x1
  struct BattleSetupInfo_o **p_battleSetupInfo; // x0
  const MethodInfo *v53; // x1
  __int64 v54; // x1
  FollowerRootComponent_c *v55; // x0
  struct UIAtlas_o *partyOrganizationAtlas; // x20
  struct FollowerRootComponent_StaticFields *static_fields; // x0
  __int64 v58; // x1
  UILabel_o *infomationLabel; // x20
  UnityEngine_GameObject_o *refreshButtonBase; // x20
  bool v61; // w8
  struct System_Collections_Generic_List_MissionNotifyDispInfo__o *mDispInfos; // x8
  __int64 v63; // x1
  ConstantMaster_o *v64; // x20
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  __int64 v66; // x2
  __int64 v67; // x3
  System_Action_o *v68; // x20
  __int64 v69; // x1
  System_Action_o *v70; // x20
  __int64 v71; // x1
  QuestPhaseMaster_o *v72; // x20
  struct BattleSetupInfo_o *v73; // x8
  NpcFollowerMaster_o *v74; // x20
  struct BattleSetupInfo_o *v75; // x8
  struct BattleSetupInfo_o *v76; // x8
  const MethodInfo *v77; // x1
  const MethodInfo *v78; // x4
  struct BattleSetupInfo_o *v79; // x8

  if ( (byte_4B11345 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, data, method);
    sub_1BCA7E0(&AtlasManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&BalanceConfig_TypeInfo, v7, v8);
    sub_1BCA7E0(&BattleSetupInfo_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ConstantMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_NpcFollowerMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v15, v16);
    sub_1BCA7E0(&Method_FollowerRootComponent_EndLoadCommonBg__, v17, v18);
    sub_1BCA7E0(&Method_FollowerRootComponent_EndLoadPartyOrganizationAtlasSimple__, v19, v20);
    sub_1BCA7E0(&FollowerRootComponent_TypeInfo, v21, v22);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v23, v24);
    sub_1BCA7E0(&RandomLimitCountManager_TypeInfo, v25, v26);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27, v28);
    sub_1BCA7E0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v29, v30);
    sub_1BCA7E0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v31, v32);
    sub_1BCA7E0(&TutorialFlag_TypeInfo, v33, v34);
    sub_1BCA7E0(&StringLiteral_13682/*"TUTORIAL_SUPPORT_QUEST_ID"*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_13683/*"TUTORIAL_SUPPORT_QUEST_PHASE"*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_6528/*"FOLLOWER_SELECT_EXPLANATION2"*/, v39, v40);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v41, v42);
    byte_4B11345 = 1;
  }
  Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_99;
  if ( PartyOrganizationUtility__ExistsTemporaryPartyInfo((PartyOrganizationUtility_o *)Instance, 0LL) )
  {
    Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_99;
    assetLoadedEventIdList = Instance[1].fields.assetLoadedEventIdList;
    if ( !assetLoadedEventIdList )
      goto LABEL_99;
    monitor = (struct BattleSetupInfo_o *)assetLoadedEventIdList[1].monitor;
    this->fields.battleSetupInfo = monitor;
    sub_1BCA784(&this->fields.battleSetupInfo, monitor);
    Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !Instance )
      goto LABEL_99;
    if ( !MissionNotifyManager__IsPause(Instance, 0LL) )
    {
      Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
      if ( !Instance )
        goto LABEL_99;
      MissionNotifyManager__StartPause(Instance, 0LL);
    }
  }
  else
  {
    if ( data )
    {
      v48 = (Il2CppClass *)BattleSetupInfo_TypeInfo;
      methodPtr_low = LOBYTE(BattleSetupInfo_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(data->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
        v50 = (BattleSetupInfo_c *)data->klass->_2.typeHierarchy[methodPtr_low - 1] == BattleSetupInfo_TypeInfo
            ? (struct BattleSetupInfo_o *)data
            : 0LL;
      else
        v50 = 0LL;
      this->fields.battleSetupInfo = v50;
      p_battleSetupInfo = &this->fields.battleSetupInfo;
      if ( LOBYTE(data->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
        v51 = data->klass->_2.typeHierarchy[methodPtr_low - 1] == v48 ? data : 0LL;
      else
        v51 = 0LL;
    }
    else
    {
      v51 = 0LL;
      this->fields.battleSetupInfo = 0LL;
      p_battleSetupInfo = &this->fields.battleSetupInfo;
    }
    sub_1BCA784(p_battleSetupInfo, v51);
  }
  if ( !this->fields.battleSetupInfo )
  {
    FollowerRootComponent__ReturnQuestMenu(this, v47);
    return;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, v47);
  RandomLimitCountManager__set_EnableRandomLimitCount(1, 0LL);
  FollowerRootComponent__PlayBGM(this, v53);
  v55 = FollowerRootComponent_TypeInfo;
  partyOrganizationAtlas = this->fields.partyOrganizationAtlas;
  if ( !FollowerRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerRootComponent_TypeInfo, v54);
    v55 = FollowerRootComponent_TypeInfo;
  }
  static_fields = v55->static_fields;
  static_fields->partyOrganizationAtlasCache = partyOrganizationAtlas;
  sub_1BCA784(&static_fields->partyOrganizationAtlasCache, partyOrganizationAtlas);
  Instance = (MissionNotifyManager_o *)this->fields.titleInfo;
  if ( !Instance )
    goto LABEL_99;
  TitleInfoControl__setTitleInfo_37890892((TitleInfoControl_o *)Instance, this->fields.myFSM, 3, 64, 0LL);
  Instance = (MissionNotifyManager_o *)this->fields.titleInfo;
  if ( !Instance )
    goto LABEL_99;
  TitleInfoControl__setBackBtnEnable((TitleInfoControl_o *)Instance, 1, 0LL);
  Instance = (MissionNotifyManager_o *)this->fields.operationItemListViewManager;
  if ( !Instance )
    goto LABEL_99;
  FollowerSelectItemListViewManager__DestroyList_31420664(
    (FollowerSelectItemListViewManager_o *)Instance,
    this->fields.battleSetupInfo,
    0LL);
  infomationLabel = this->fields.infomationLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v58);
  Instance = (MissionNotifyManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6528/*"FOLLOWER_SELECT_EXPLANATION2"*/, 0LL);
  if ( !infomationLabel )
    goto LABEL_99;
  UILabel__set_text(infomationLabel, (System_String_o *)Instance, 0LL);
  Instance = (MissionNotifyManager_o *)BalanceConfig_TypeInfo;
  refreshButtonBase = this->fields.refreshButtonBase;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v44);
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
  v61 = Instance[1].fields.mNoticeNumberComp || LODWORD(Instance[1].fields.assetLoadedEventIdList) != 0;
  if ( (v61 & BYTE1(Instance[1].klass)) != 0
    && (BattleSetupInfo__SetRestriction((BattleSetupInfo_o *)Instance, 1, 0LL),
        (Instance = (MissionNotifyManager_o *)this->fields.battleSetupInfo) == 0LL)
    || (mDispInfos = Instance[1].fields.mDispInfos) == 0LL )
  {
LABEL_99:
    sub_1BCAA3C(Instance, v44);
  }
  if ( BYTE2(mDispInfos[9].fields._size) )
  {
LABEL_47:
    FollowerRootComponent__StartBattleSetupMenu(this, v44);
    return;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v44);
  if ( TutorialFlag__Get_38402052(102, 0LL) )
  {
    Instance = (MissionNotifyManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_99;
    Instance = (MissionNotifyManager_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ConstantMaster___);
    if ( !Instance )
      goto LABEL_99;
    v64 = (ConstantMaster_o *)Instance;
    Instance = (MissionNotifyManager_o *)ConstantMaster__GetValue(
                                           (ConstantMaster_o *)Instance,
                                           (System_String_o *)StringLiteral_13682/*"TUTORIAL_SUPPORT_QUEST_ID"*/,
                                           0LL);
    battleSetupInfo = this->fields.battleSetupInfo;
    if ( !battleSetupInfo )
      goto LABEL_99;
    if ( battleSetupInfo->fields.questId == (_DWORD)Instance )
    {
      Instance = (MissionNotifyManager_o *)ConstantMaster__GetValue(v64, (System_String_o *)StringLiteral_13683/*"TUTORIAL_SUPPORT_QUEST_PHASE"*/, 0LL);
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
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v63);
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
    Instance = (MissionNotifyManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (MissionNotifyManager_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)Instance,
                                             (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
      if ( this->fields.battleSetupInfo )
      {
        v72 = (QuestPhaseMaster_o *)Instance;
        Instance = (MissionNotifyManager_o *)BattleSetupInfo__TargetQuestId(this->fields.battleSetupInfo, 0LL);
        v73 = this->fields.battleSetupInfo;
        if ( v73 )
        {
          if ( v72 )
          {
            Instance = (MissionNotifyManager_o *)QuestPhaseMaster__GetEntity(
                                                   v72,
                                                   (int32_t)Instance,
                                                   v73->fields.questPhase,
                                                   0LL);
            if ( Instance && LOBYTE(Instance->fields.mNoDispInfos) )
            {
              Instance = (MissionNotifyManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                goto LABEL_99;
              Instance = (MissionNotifyManager_o *)DataManager__GetMasterData_object_(
                                                     (DataManager_o *)Instance,
                                                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
              if ( !this->fields.battleSetupInfo )
                goto LABEL_99;
              v74 = (NpcFollowerMaster_o *)Instance;
              Instance = (MissionNotifyManager_o *)BattleSetupInfo__TargetQuestId(this->fields.battleSetupInfo, 0LL);
              v75 = this->fields.battleSetupInfo;
              if ( !v75 )
                goto LABEL_99;
              if ( !v74 )
                goto LABEL_99;
              Instance = (MissionNotifyManager_o *)NpcFollowerMaster__GetQuestFollowerList(
                                                     v74,
                                                     (int32_t)Instance,
                                                     v75->fields.questPhase,
                                                     0LL);
              if ( !Instance )
                goto LABEL_99;
              if ( !Instance->fields.mNoDispInfos )
              {
                *(_QWORD *)&this->fields.tutorialMode = 0x100000001LL;
                goto LABEL_74;
              }
            }
            v76 = this->fields.battleSetupInfo;
            if ( v76 )
            {
              Instance = (MissionNotifyManager_o *)v76->fields.questRestrictionInfo;
              if ( Instance )
              {
                if ( QuestRestrictionInfo__IsMyServantOrNpcRestriction((QuestRestrictionInfo_o *)Instance, 0LL) )
                  this->fields.tutorialMode = 4;
                FollowerRootComponent__UpdateDeckInfomation(this, v77);
                v79 = this->fields.battleSetupInfo;
                if ( v79 )
                {
                  Instance = (MissionNotifyManager_o *)this->fields.followerQuestInfomationDraw;
                  if ( Instance )
                  {
                    FollowerQuestInfomationDraw__SetInfomation(
                      (FollowerQuestInfomationDraw_o *)Instance,
                      v79->fields.questRestrictionInfo,
                      0,
                      0LL,
                      v78);
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
    v68 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v44, v66, v67);
    System_Action___ctor(v68, (Il2CppObject *)this, Method_FollowerRootComponent_EndLoadCommonBg__, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v69);
    AtlasManager__LoadUISkin(v68, 2, 1, 0LL);
    return;
  }
  this->fields.tutorialMode = 1;
LABEL_74:
  v70 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v44, v66, v67);
  System_Action___ctor(
    v70,
    (Il2CppObject *)this,
    Method_FollowerRootComponent_EndLoadPartyOrganizationAtlasSimple__,
    0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v71);
  AtlasManager__LoadPartyOrganizationAtlas(v70, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerRootComponent__setBattleSetupFollowType(
        FollowerRootComponent_o *this,
        int32_t type,
        const MethodInfo *method)
{
  struct BattleSetupInfo_o *battleSetupInfo; // x8

  battleSetupInfo = this->fields.battleSetupInfo;
  if ( !battleSetupInfo )
    sub_1BCAA3C(this, *(_QWORD *)&type);
  battleSetupInfo->fields.followerType = 0;
  if ( (type | 4) == 5 )
    battleSetupInfo->fields.followerType = type;
}


void __fastcall FollowerRootComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19

  if ( (byte_4B1136D & 1) == 0 )
  {
    sub_1BCA7E0(&FollowerRootComponent___c_TypeInfo, v1, v2);
    byte_4B1136D = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(FollowerRootComponent___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  FollowerRootComponent___c_TypeInfo->static_fields->__9 = (struct FollowerRootComponent___c_o *)v4;
  sub_1BCA784(FollowerRootComponent___c_TypeInfo->static_fields, v4);
}


void __fastcall FollowerRootComponent___c___ctor(FollowerRootComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall FollowerRootComponent___c___Init_b__50_0(FollowerRootComponent___c_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  PartyOrganizationUtility_c *v5; // x0
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4B1136E & 1) == 0 )
  {
    sub_1BCA7E0(&PartyOrganizationUtility_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3, v4);
    byte_4B1136E = 1;
  }
  v5 = PartyOrganizationUtility_TypeInfo;
  if ( !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo, method);
    v5 = PartyOrganizationUtility_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(v5->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v7);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL);
}


void __fastcall FollowerRootComponent___c___OnSelectFollowerItem_b__65_0(
        FollowerRootComponent___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  PartyOrganizationUtility_c *v5; // x0
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4B1136F & 1) == 0 )
  {
    sub_1BCA7E0(&PartyOrganizationUtility_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3, v4);
    byte_4B1136F = 1;
  }
  v5 = PartyOrganizationUtility_TypeInfo;
  if ( !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo, method);
    v5 = PartyOrganizationUtility_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(v5->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v7);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL);
}