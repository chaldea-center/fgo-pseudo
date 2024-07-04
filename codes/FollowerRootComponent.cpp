void __fastcall FollowerRootComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct FollowerRootComponent_StaticFields *static_fields; // x8

  if ( (byte_48E6A77 & 1) == 0 )
  {
    sub_1B00CCC(&FollowerRootComponent_TypeInfo, v1);
    byte_48E6A77 = 1;
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

  if ( (byte_48E6A76 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_1/*""*/, method);
    byte_48E6A76 = 1;
  }
  v5 = (int)StringLiteral_1/*""*/;
  this->fields.backupBgmName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.backupBgmName, v5, v2, v3);
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0LL);
}


void __fastcall FollowerRootComponent__CallbackFollowerList(
        FollowerRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_48E6A5D & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_10885/*"REQUEST_OK"*/, result);
    byte_48E6A5D = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1B00F28(0LL, result);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_10885/*"REQUEST_OK"*/, 0LL);
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

  if ( (byte_48E6A6D & 1) == 0 )
  {
    sub_1B00CCC(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, result);
    sub_1B00CCC(&Method_FollowerRootComponent_OnSelectFollowerItem__, v4);
    sub_1B00CCC(&RandomLimitCountManager_TypeInfo, v5);
    byte_48E6A6D = 1;
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
        v11 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1B00F18(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo),
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
    sub_1B00F28(operationItemListViewManager, v6);
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

  if ( (byte_48E6A62 & 1) == 0 )
  {
    sub_1B00CCC(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_1B00CCC(&Method_FollowerRootComponent_OnSelectFollowerItem__, v3);
    byte_48E6A62 = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v5 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1B00F18(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
    0LL);
  if ( !operationItemListViewManager )
    sub_1B00F28(v6, v7);
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

  if ( (byte_48E6A65 & 1) == 0 )
  {
    sub_1B00CCC(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_1B00CCC(&Method_FollowerRootComponent_OnSelectFollowerItem__, v3);
    byte_48E6A65 = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v5 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1B00F18(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
    0LL);
  if ( !operationItemListViewManager )
    sub_1B00F28(v6, v7);
  FollowerSelectItemListViewManager__SetMode(operationItemListViewManager, 2, v5, 0LL);
}


void __fastcall FollowerRootComponent__EndCloseTutorialArrow(FollowerRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *tutorialMaskBase2; // x0

  if ( (byte_48E6A6F & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_8528/*"MENU_SELECT_ITEM"*/, method);
    byte_48E6A6F = 1;
  }
  tutorialMaskBase2 = this->fields.tutorialMaskBase2;
  if ( !tutorialMaskBase2
    || (UnityEngine_GameObject__SetActive(tutorialMaskBase2, 0, 0LL),
        tutorialMaskBase2 = (UnityEngine_GameObject_o *)this->fields.myFSM,
        this->fields.state = 3,
        !tutorialMaskBase2) )
  {
    sub_1B00F28(tutorialMaskBase2, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)tutorialMaskBase2, (System_String_o *)StringLiteral_8528/*"MENU_SELECT_ITEM"*/, 0LL);
}


void __fastcall FollowerRootComponent__EndLoadCommonBg(FollowerRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Component_o *backSkinSprite; // x0
  System_Action_o *v6; // x20

  if ( (byte_48E6A55 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, method);
    sub_1B00CCC(&AtlasManager_TypeInfo, v3);
    sub_1B00CCC(&Method_FollowerRootComponent_EndLoadOutGameAtlas__, v4);
    byte_48E6A55 = 1;
  }
  backSkinSprite = (UnityEngine_Component_o *)this->fields.backSkinSprite;
  if ( !backSkinSprite
    || (backSkinSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(backSkinSprite, 0LL)) == 0LL )
  {
    sub_1B00F28(backSkinSprite, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)backSkinSprite, 1, 0LL);
  v6 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
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

  if ( (byte_48E6A57 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, method);
    sub_1B00CCC(&AtlasManager_TypeInfo, v3);
    sub_1B00CCC(&Method_FollowerRootComponent_EndLoadPartyOrganizationAtlas__, v4);
    byte_48E6A57 = 1;
  }
  v5 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
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

  if ( (byte_48E6A56 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, method);
    sub_1B00CCC(&AtlasManager_TypeInfo, v3);
    sub_1B00CCC(&Method_FollowerRootComponent_EndLoadEventAtlas__, v4);
    byte_48E6A56 = 1;
  }
  v5 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
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

  if ( (byte_48E6A58 & 1) == 0 )
  {
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_1B00CCC(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v3);
    byte_48E6A58 = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    goto LABEL_15;
  FollowerSelectItemListViewManager__AdjustButton(operationItemListViewManager, 0LL);
  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    goto LABEL_15;
  FollowerSelectItemListViewManager__SetClassBoardInfo(operationItemListViewManager, 0LL);
  SceneRootComponent__beginStartUp_37369760((SceneRootComponent_o *)this, 0LL);
  if ( this->fields.isForceFadeOut )
  {
    this->fields.isForceFadeOut = 0;
    operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !operationItemListViewManager )
      goto LABEL_15;
    CommonUI__maskFadeInit((CommonUI_o *)operationItemListViewManager, 0LL);
    operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !operationItemListViewManager )
      goto LABEL_15;
    CommonUI__maskFadeout((CommonUI_o *)operationItemListViewManager, 1, 0.0, 0LL, 0LL);
    FollowerRootComponent__StartBattleSetupMenu(this, v5);
  }
  operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_35FC010 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !operationItemListViewManager )
    goto LABEL_15;
  if ( PartyOrganizationUtility__ExistsTemporaryPartyInfo(
         (PartyOrganizationUtility_o *)operationItemListViewManager,
         0LL) )
  {
    operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( operationItemListViewManager )
    {
      CommonUI__maskFadeInit((CommonUI_o *)operationItemListViewManager, 0LL);
      operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( operationItemListViewManager )
      {
        CommonUI__maskFadeout((CommonUI_o *)operationItemListViewManager, 1, 0.0, 0LL, 0LL);
        this->fields.state = 0;
        FollowerRootComponent__Init(this, v6);
        return;
      }
    }
LABEL_15:
    sub_1B00F28(operationItemListViewManager, method);
  }
}


void __fastcall FollowerRootComponent__EndOpenTutorialArrow(FollowerRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_48E6A74 & 1) == 0 )
  {
    sub_1B00CCC(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_1B00CCC(&Method_FollowerRootComponent_OnSelectFollowerItem__, v3);
    byte_48E6A74 = 1;
  }
  this->fields.state = 3;
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v5 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1B00F18(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
    0LL);
  if ( !operationItemListViewManager )
    sub_1B00F28(v6, v7);
  FollowerSelectItemListViewManager__SetMode(operationItemListViewManager, 4, v5, 0LL);
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
  if ( (byte_48E6A6C & 1) == 0 )
  {
    sub_1B00CCC(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, isDecide);
    sub_1B00CCC(&Method_FollowerRootComponent_CallbackRefresh__, v5);
    sub_1B00CCC(&Method_FollowerRootComponent_OnSelectFollowerItem__, v6);
    sub_1B00CCC(&Method_NetworkManager_getRequest_FollowerListRequest___, v7);
    sub_1B00CCC(&NetworkManager_TypeInfo, v8);
    sub_1B00CCC(&NetworkManager_ResultCallbackFunc_TypeInfo, v9);
    this = (FollowerRootComponent_o *)sub_1B00CCC(
                                        &Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__,
                                        v10);
    byte_48E6A6C = 1;
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
      this = (FollowerRootComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_35FC010 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !this )
        goto LABEL_18;
      LOBYTE(this->fields.followerQuestInfomationDraw) = 1;
    }
    v12 = (NetworkManager_ResultCallbackFunc_o *)sub_1B00F18(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v12,
      (Il2CppObject *)v4,
      Method_FollowerRootComponent_CallbackRefresh__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    this = (FollowerRootComponent_o *)NetworkManager__getRequest_object_(
                                        v12,
                                        (const MethodInfo_2DD4818 *)Method_NetworkManager_getRequest_FollowerListRequest___);
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
    sub_1B00F28(this, isDecide);
  }
  operationItemListViewManager = v4->fields.operationItemListViewManager;
  v16 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1B00F18(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
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

  if ( (byte_48E6A6E & 1) == 0 )
  {
    sub_1B00CCC(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_1B00CCC(&Method_FollowerRootComponent_OnSelectFollowerItem__, v3);
    byte_48E6A6E = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v5 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1B00F18(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
    0LL);
  if ( !operationItemListViewManager )
    sub_1B00F28(v6, v7);
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

  if ( (byte_48E6A61 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, isDecide);
    sub_1B00CCC(&Method_FollowerRootComponent_EndCloseShowServant__, v4);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_48E6A61 = 1;
  }
  operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager
    || (ListViewManager__SetScrollView(
          operationItemListViewManager,
          this->fields.openScroll,
          this->fields.openOffset,
          0LL),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v8 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo),
        System_Action___ctor(v8, (Il2CppObject *)this, Method_FollowerRootComponent_EndCloseShowServant__, 0LL),
        !Instance) )
  {
    sub_1B00F28(operationItemListViewManager, isDecide);
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

  if ( (byte_48E6A64 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, isDecide);
    sub_1B00CCC(&Method_FollowerRootComponent_EndCloseShowServantEquip__, v4);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_48E6A64 = 1;
  }
  operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager
    || (ListViewManager__SetScrollView(
          operationItemListViewManager,
          this->fields.openScroll,
          this->fields.openOffset,
          0LL),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v8 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo),
        System_Action___ctor(v8, (Il2CppObject *)this, Method_FollowerRootComponent_EndCloseShowServantEquip__, 0LL),
        !Instance) )
  {
    sub_1B00F28(operationItemListViewManager, isDecide);
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

  if ( (byte_48E6A75 & 1) == 0 )
  {
    sub_1B00CCC(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_1B00CCC(&Method_FollowerRootComponent_OnSelectFollowerItem__, v3);
    byte_48E6A75 = 1;
  }
  this->fields.state = 3;
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v5 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1B00F18(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
    0LL);
  if ( !operationItemListViewManager )
    sub_1B00F28(v6, v7);
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

  if ( (byte_48E6A72 & 1) == 0 )
  {
    sub_1B00CCC(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_1B00CCC(&Method_FollowerRootComponent_OnSelectFollowerItem__, v3);
    byte_48E6A72 = 1;
  }
  titleInfo = this->fields.titleInfo;
  this->fields.state = 3;
  if ( !titleInfo
    || (TitleInfoControl__setBackBtnEnable(titleInfo, 0, 0LL),
        operationItemListViewManager = this->fields.operationItemListViewManager,
        v6 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1B00F18(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo),
        FollowerSelectItemListViewManager_CallbackFunc___ctor(
          v6,
          (Il2CppObject *)this,
          (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
          0LL),
        !operationItemListViewManager) )
  {
    sub_1B00F28(titleInfo, method);
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

  if ( (byte_48E6A73 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, method);
    sub_1B00CCC(&FSUtility_TypeInfo, v3);
    sub_1B00CCC(&Method_FollowerRootComponent_EndOpenTutorialArrow__, v4);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_48E6A73 = 1;
  }
  tutorialMaskBase2 = this->fields.tutorialMaskBase2;
  if ( !tutorialMaskBase2 )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(tutorialMaskBase2, 1, 0LL);
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  IsUnderVista = FSUtility__IsUnderVista(0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_FollowerRootComponent_EndOpenTutorialArrow__, 0LL);
  if ( !Instance )
LABEL_12:
    sub_1B00F28(tutorialMaskBase2, method);
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
  UnityEngine_Component_o *operationItemListViewManager; // x0
  FollowerSelectItemListViewManager_o *v15; // x20
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  PartyOrganizationUtility_c *v17; // x0
  Il2CppObject *Instance; // x20
  System_String_o *v19; // x21
  FollowerRootComponent___c_c *v20; // x8
  System_Action_o *_9__48_0; // x23
  System_String_o *v22; // x22
  Il2CppObject *v23; // x24
  struct FollowerRootComponent___c_StaticFields *static_fields; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  FollowerSelectItemListViewManager_o *v27; // x20
  System_Action_o *v28; // x21

  if ( (byte_48E6A5E & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, method);
    sub_1B00CCC(&Method_FollowerRootComponent_OnMoveEnd__, v3);
    sub_1B00CCC(&LocalizationManager_TypeInfo, v4);
    sub_1B00CCC(&PartyOrganizationUtility_TypeInfo, v5);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v7);
    sub_1B00CCC(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v8);
    sub_1B00CCC(&Method_FollowerRootComponent___c__Init_b__48_0__, v9);
    sub_1B00CCC(&FollowerRootComponent___c_TypeInfo, v10);
    sub_1B00CCC(&StringLiteral_8528/*"MENU_SELECT_ITEM"*/, v11);
    sub_1B00CCC(&StringLiteral_10152/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_EXPIRED"*/, v12);
    sub_1B00CCC(&StringLiteral_1/*""*/, v13);
    byte_48E6A5E = 1;
  }
  if ( !this->fields.state )
  {
    operationItemListViewManager = (UnityEngine_Component_o *)this->fields.operationItemListViewManager;
    if ( !operationItemListViewManager )
      goto LABEL_34;
    operationItemListViewManager = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                operationItemListViewManager,
                                                                0LL);
    if ( !operationItemListViewManager )
      goto LABEL_34;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)operationItemListViewManager, 1, 0LL);
    operationItemListViewManager = (UnityEngine_Component_o *)this->fields.battleSetupInfo;
    if ( !operationItemListViewManager )
      goto LABEL_34;
    v15 = this->fields.operationItemListViewManager;
    operationItemListViewManager = (UnityEngine_Component_o *)BattleSetupInfo__TargetQuestId(
                                                                (BattleSetupInfo_o *)operationItemListViewManager,
                                                                0LL);
    battleSetupInfo = this->fields.battleSetupInfo;
    if ( !battleSetupInfo )
      goto LABEL_34;
    if ( !v15 )
      goto LABEL_34;
    FollowerSelectItemListViewManager__CreateList(
      v15,
      (int32_t)operationItemListViewManager,
      battleSetupInfo->fields.questPhase,
      this->fields.friendPointUpVal,
      this->fields.friendPointUpMaxVal,
      this->fields.friendPointCampaignEntityList,
      battleSetupInfo->fields.questRestrictionInfo,
      0LL);
    operationItemListViewManager = (UnityEngine_Component_o *)this->fields.operationItemListViewManager;
    if ( !operationItemListViewManager )
      goto LABEL_34;
    if ( ListViewManager__get_ItemSum((ListViewManager_o *)operationItemListViewManager, 0LL) > 0 )
      goto LABEL_13;
    operationItemListViewManager = (UnityEngine_Component_o *)this->fields.operationItemListViewManager;
    if ( !operationItemListViewManager )
      goto LABEL_34;
    if ( FollowerSelectItemListViewManager__GetItemCount(
           (FollowerSelectItemListViewManager_o *)operationItemListViewManager,
           0LL) >= 1 )
    {
LABEL_13:
      operationItemListViewManager = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
      if ( !operationItemListViewManager )
        goto LABEL_34;
      if ( BYTE4(operationItemListViewManager[6].klass) )
      {
        v17 = PartyOrganizationUtility_TypeInfo;
        if ( !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
          v17 = PartyOrganizationUtility_TypeInfo;
        }
        if ( UnityEngine_PlayerPrefs__GetInt(v17->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0, 0LL) )
        {
          operationItemListViewManager = (UnityEngine_Component_o *)SingletonTemplate_object___get_Instance((const MethodInfo_35FC010 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( !operationItemListViewManager )
            goto LABEL_34;
          if ( !PartyOrganizationUtility__IsAvailableFriendshipUpItem(
                  (PartyOrganizationUtility_o *)operationItemListViewManager,
                  0LL) )
          {
            Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            operationItemListViewManager = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                                        (System_String_o *)StringLiteral_10152/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_EXPIRED"*/,
                                                                        0LL);
            v19 = (System_String_o *)operationItemListViewManager;
            v20 = FollowerRootComponent___c_TypeInfo;
            if ( !FollowerRootComponent___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(FollowerRootComponent___c_TypeInfo);
              v20 = FollowerRootComponent___c_TypeInfo;
            }
            _9__48_0 = v20->static_fields->__9__48_0;
            v22 = (System_String_o *)StringLiteral_1/*""*/;
            if ( !_9__48_0 )
            {
              if ( !v20->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v20);
                v20 = FollowerRootComponent___c_TypeInfo;
              }
              v23 = (Il2CppObject *)v20->static_fields->__9;
              _9__48_0 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
              System_Action___ctor(_9__48_0, v23, Method_FollowerRootComponent___c__Init_b__48_0__, 0LL);
              static_fields = FollowerRootComponent___c_TypeInfo->static_fields;
              static_fields->__9__48_0 = _9__48_0;
              sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->__9__48_0, (int32_t)_9__48_0, v25, v26);
            }
            if ( !Instance )
              goto LABEL_34;
            CommonUI__OpenNotificationDialog(
              (CommonUI_o *)Instance,
              v22,
              v19,
              _9__48_0,
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
      v27 = this->fields.operationItemListViewManager;
      v28 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
      System_Action___ctor(v28, (Il2CppObject *)this, Method_FollowerRootComponent_OnMoveEnd__, 0LL);
      if ( v27 )
      {
        FollowerSelectItemListViewManager__SetMode_45003164(v27, 1, v28, 0LL);
        return;
      }
LABEL_34:
      sub_1B00F28(operationItemListViewManager, method);
    }
    operationItemListViewManager = (UnityEngine_Component_o *)this->fields.myFSM;
    this->fields.selectItemNum = -1;
    if ( !operationItemListViewManager )
      goto LABEL_34;
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)operationItemListViewManager, (System_String_o *)StringLiteral_8528/*"MENU_SELECT_ITEM"*/, 0LL);
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

  if ( (byte_48E6A70 & 1) == 0 )
  {
    sub_1B00CCC(&BattleRootComponent_TypeInfo, method);
    sub_1B00CCC(&CommonConfirmDialog_ClickDelegate_TypeInfo, v3);
    sub_1B00CCC(&Method_UnityEngine_Component_GetComponentsInChildren_Camera___, v4);
    sub_1B00CCC(&Method_FollowerRootComponent_OnClickBack__, v5);
    sub_1B00CCC(&Method_FollowerRootComponent__OnClickBack_b__68_0__, v6);
    sub_1B00CCC(&FollowerRootComponent_TypeInfo, v7);
    sub_1B00CCC(&LocalizationManager_TypeInfo, v8);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v9);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v11);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v12);
    sub_1B00CCC(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v13);
    sub_1B00CCC(&TerminalPramsManager_TypeInfo, v14);
    sub_1B00CCC(&StringLiteral_6343/*"FOLLOWER_SELECT_BACK_TO_QUEST_NO_AP_CONSUME_AP0"*/, v15);
    sub_1B00CCC(&StringLiteral_3488/*"CLICK_BACK"*/, v16);
    sub_1B00CCC(&StringLiteral_6342/*"FOLLOWER_SELECT_BACK_TO_QUEST_NO_AP_CONSUME"*/, v17);
    sub_1B00CCC(&StringLiteral_6341/*"FOLLOWER_SELECT_BACK_TITLE"*/, v18);
    sub_1B00CCC(&StringLiteral_3718/*"COMMON_CONFIRM_NO"*/, v19);
    sub_1B00CCC(&StringLiteral_3721/*"COMMON_CONFIRM_YES"*/, v20);
    sub_1B00CCC(&StringLiteral_1/*""*/, v21);
    sub_1B00CCC(&StringLiteral_3489/*"CLICK_BACK_BATTLE_SETUP"*/, v22);
    byte_48E6A70 = 1;
  }
  if ( this->fields.state == 3 && !this->fields.tutorialState )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( !Instance )
      goto LABEL_63;
    if ( !*((_BYTE *)Instance + 148) )
      goto LABEL_34;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
        v28 = (_QWORD *)sub_1B00CE4(Method_FollowerRootComponent_OnClickBack__);
      v29 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v28, v28[4]);
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
                PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3488/*"CLICK_BACK"*/, 0LL);
                Instance = UnityEngine_Component__get_transform(v27, 0LL);
                if ( Instance )
                {
                  Instance = UnityEngine_Component__GetComponentsInChildren_object__47554852(
                               (UnityEngine_Component_o *)Instance,
                               (const MethodInfo_2D5A124 *)Method_UnityEngine_Component_GetComponentsInChildren_Camera___);
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
                        sub_1B00F30(Instance, v24);
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
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( !Instance )
        goto LABEL_63;
      if ( AvalonSceneManager__IsStackScene((AvalonSceneManager_o *)Instance, 0LL) )
        goto LABEL_40;
      Instance = SingletonTemplate_object___get_Instance((const MethodInfo_35FC010 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_63;
      if ( *((int *)Instance + 12) > 0 )
        goto LABEL_40;
      Instance = SingletonTemplate_object___get_Instance((const MethodInfo_35FC010 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_63;
      if ( *((_BYTE *)Instance + 137) )
      {
LABEL_40:
        v36 = Method_FollowerRootComponent_OnClickBack__;
        if ( (*((_BYTE *)Method_FollowerRootComponent_OnClickBack__ + 83) & 2) != 0 )
          v36 = (_QWORD *)sub_1B00CE4(Method_FollowerRootComponent_OnClickBack__);
        v37 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v36, v36[4]);
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
            v39 = &StringLiteral_3489/*"CLICK_BACK_BATTLE_SETUP"*/;
          }
          else
          {
            FollowerRootComponent__QuestHintDialogResetTemporarilyId((FollowerRootComponent_o *)Instance, v24);
            Instance = this->fields.myFSM;
            if ( !Instance )
              goto LABEL_63;
            v39 = &StringLiteral_3488/*"CLICK_BACK"*/;
          }
          PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v39, 0LL);
          return;
        }
      }
      else
      {
        v40 = Method_FollowerRootComponent_OnClickBack__;
        if ( (*((_BYTE *)Method_FollowerRootComponent_OnClickBack__ + 83) & 2) != 0 )
          v40 = (_QWORD *)sub_1B00CE4(Method_FollowerRootComponent_OnClickBack__);
        v41 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v40, v40[4]);
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
        v44 = (System_String_o **)&StringLiteral_6342/*"FOLLOWER_SELECT_BACK_TO_QUEST_NO_AP_CONSUME"*/;
        if ( lastPlayQuestConsumeAp <= 0 )
          v44 = (System_String_o **)&StringLiteral_6343/*"FOLLOWER_SELECT_BACK_TO_QUEST_NO_AP_CONSUME_AP0"*/;
        v45 = LocalizationManager__Get(*v44, 0LL);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v46 = LocalizationManager__Get((System_String_o *)StringLiteral_6341/*"FOLLOWER_SELECT_BACK_TITLE"*/, 0LL);
        v47 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v48 = LocalizationManager__Get((System_String_o *)StringLiteral_3721/*"COMMON_CONFIRM_YES"*/, 0LL);
        v49 = LocalizationManager__Get((System_String_o *)StringLiteral_3718/*"COMMON_CONFIRM_NO"*/, 0LL);
        v50 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B00F18(CommonConfirmDialog_ClickDelegate_TypeInfo);
        CommonConfirmDialog_ClickDelegate___ctor(
          v50,
          (Il2CppObject *)this,
          Method_FollowerRootComponent__OnClickBack_b__68_0__,
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
    sub_1B00F28(Instance, v24);
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

  if ( (byte_48E6A6A & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, method);
    sub_1B00CCC(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, v3);
    sub_1B00CCC(&Method_FollowerRootComponent_EndTutorialFollowerCommonGuide__, v4);
    sub_1B00CCC(&Method_FollowerRootComponent_EndTutorialFollowerGuideNotification1__, v5);
    sub_1B00CCC(&Method_FollowerRootComponent_EndTutorialFollowerGuideNotification2__, v6);
    sub_1B00CCC(&Method_FollowerRootComponent_OnSelectFollowerItem__, v7);
    sub_1B00CCC(&LocalizationManager_TypeInfo, v8);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_1B00CCC(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v10);
    sub_1B00CCC(&StringLiteral_13273/*"TUTORIAL_MESSAGE_FOLLOWER2"*/, v11);
    sub_1B00CCC(&StringLiteral_13272/*"TUTORIAL_MESSAGE_FOLLOWER1"*/, v12);
    byte_48E6A6A = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( this->fields.tutorialState == 1 )
    {
      tutorialMode = this->fields.tutorialMode;
      *(_QWORD *)&this->fields.tutorialState = 0x200000002LL;
      if ( tutorialMode == 3 )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v15 = LocalizationManager__Get((System_String_o *)StringLiteral_13273/*"TUTORIAL_MESSAGE_FOLLOWER2"*/, 0LL);
        v16 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
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
        sub_1B00F28(battleSetupInfo, method);
      }
      if ( tutorialMode == 2 )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v15 = LocalizationManager__Get((System_String_o *)StringLiteral_13272/*"TUTORIAL_MESSAGE_FOLLOWER1"*/, 0LL);
        v16 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
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
          v23 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
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
      v26 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1B00F18(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
      FollowerSelectItemListViewManager_CallbackFunc___ctor(
        v26,
        (Il2CppObject *)this,
        (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
        0LL);
      if ( !operationItemListViewManager )
        goto LABEL_27;
      FollowerSelectItemListViewManager__SetMode(operationItemListViewManager, 2, v26, 0LL);
      battleSetupInfo = (BattleSetupInfo_o *)SingletonTemplate_object___get_Instance((const MethodInfo_35FC010 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
  void *operationItemListViewManager; // x0
  __int64 v43; // x8
  __int64 v44; // x20
  SkillInfo_o *v45; // x22
  _QWORD *v46; // x0
  System_Reflection_MethodBase_o *v47; // x0
  Il2CppObject *v48; // x20
  System_String_o *v49; // x20
  System_String_o *v50; // x21
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  Il2CppObject *v54; // x0
  System_String_o *v55; // x0
  int32_t v56; // w20
  _QWORD *v57; // x0
  System_Reflection_MethodBase_o *v58; // x0
  FollowerSelectItemListViewManager_o *v59; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v60; // x0
  intptr_t v61; // w2
  _QWORD *v62; // x0
  System_Reflection_MethodBase_o *v63; // x0
  __int64 v64; // x20
  SkillInfo_o *v65; // x24
  Il2CppObject *Entity; // x21
  _DWORD *v67; // x20
  System_String_o *v68; // x21
  System_String_o *v69; // x22
  __int64 v70; // x2
  __int64 v71; // x3
  __int64 v72; // x4
  Il2CppObject *v73; // x0
  System_String_o *v74; // x0
  __int64 v75; // x2
  __int64 v76; // x3
  __int64 v77; // x4
  System_String_o *v78; // x21
  Il2CppObject *v79; // x0
  System_String_o *v80; // x0
  int32_t tutorialMode; // w21
  System_String_o *v82; // x20
  FollowerSelectItemListViewItem_o *v83; // x20
  _QWORD *v84; // x0
  System_Reflection_MethodBase_o *v85; // x0
  const MethodInfo *v86; // x2
  int32_t v87; // w8
  _QWORD *v88; // x0
  System_Reflection_MethodBase_o *v89; // x0
  _QWORD *v90; // x0
  System_Reflection_MethodBase_o *v91; // x0
  int32_t v92; // w8
  _QWORD *v93; // x0
  System_Reflection_MethodBase_o *v94; // x0
  CommonConfirmDialog_o *commonConfirmDialog; // x20
  System_String_o *v96; // x21
  System_String_o *v97; // x22
  CommonConfirmDialog_ClickDelegate_o *v98; // x23
  _BYTE *v99; // x20
  PartyOrganizationUtility_c *v100; // x0
  _QWORD *v101; // x0
  System_Reflection_MethodBase_o *v102; // x0
  int32_t v103; // w8
  __int64 *v104; // x8
  Il2CppObject *Instance; // x20
  System_String_o *v106; // x21
  System_String_o *v107; // x22
  System_Action_o *v108; // x23
  int v109; // w20
  _QWORD *v110; // x0
  FollowerSelectItemListViewItem_o *v111; // x20
  __int64 v112; // x21
  __int64 v113; // x22
  __int64 v114; // x8
  __int64 v115; // x21
  __int64 v116; // x22
  EquipTargetInfo_o *EquipInfo; // x21
  __int64 v118; // x22
  __int64 v119; // x23
  _QWORD *v120; // x0
  System_Reflection_MethodBase_o *v121; // x0
  const MethodInfo *v122; // x3
  int32_t v123; // w2
  _QWORD *v124; // x0
  FollowerSelectItemListViewManager_CallbackFunc_o *v125; // x21
  int32_t v126; // w1
  _QWORD *v127; // x0
  System_Reflection_MethodBase_o *v128; // x0
  Il2CppObject *v129; // x20
  System_String_o *v130; // x21
  FollowerRootComponent___c_c *v131; // x8
  System_Action_o *_9__63_0; // x23
  System_String_o *v133; // x22
  Il2CppObject *v134; // x24
  struct FollowerRootComponent___c_StaticFields *static_fields; // x0
  int32_t v136; // w2
  int32_t v137; // w3
  Il2CppObject *v138; // x20
  System_Action_o *v139; // x21
  int v140; // [xsp+38h] [xbp-78h] BYREF
  int32_t lv; // [xsp+3Ch] [xbp-74h] BYREF
  System_String_o *detail; // [xsp+40h] [xbp-70h] BYREF
  System_String_o *name; // [xsp+48h] [xbp-68h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+50h] [xbp-60h] BYREF
  System_String_o *v145; // [xsp+58h] [xbp-58h] BYREF
  System_String_o *v146; // [xsp+60h] [xbp-50h] BYREF
  SkillInfo_array *v147; // [xsp+68h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v148; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v149; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v150; // 0:x0.16

  if ( (byte_48E6A6B & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_1B00CCC(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, v7);
    sub_1B00CCC(&CommonConfirmDialog_ClickDelegate_TypeInfo, v8);
    sub_1B00CCC(&Method_DataManager_GetMasterData_SkillLvMaster___, v9);
    sub_1B00CCC(&Method_DataManager_GetMasterData_SkillMaster___, v10);
    sub_1B00CCC(&Method_DataManager_GetMaster_SkillLvMaster___, v11);
    sub_1B00CCC(&Method_DataManager_GetMaster_SkillMaster___, v12);
    sub_1B00CCC(&DataManager_TypeInfo, v13);
    sub_1B00CCC(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v14);
    sub_1B00CCC(&FollowerListRequest_TypeInfo, v15);
    sub_1B00CCC(&Method_FollowerRootComponent_EndCloseTutorialArrow__, v16);
    sub_1B00CCC(&Method_FollowerRootComponent_EndRefreshConfirm__, v17);
    sub_1B00CCC(&Method_FollowerRootComponent_EndRefreshRest__, v18);
    sub_1B00CCC(&Method_FollowerRootComponent_OnSelectFollowerItem__, v19);
    sub_1B00CCC(&FollowerRootComponent_TypeInfo, v20);
    sub_1B00CCC(&int_TypeInfo, v21);
    sub_1B00CCC(&LocalizationManager_TypeInfo, v22);
    sub_1B00CCC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v23);
    sub_1B00CCC(&PartyOrganizationUtility_TypeInfo, v24);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v25);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v27);
    sub_1B00CCC(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v28);
    sub_1B00CCC(&Method_FollowerRootComponent___c__OnSelectFollowerItem_b__63_0__, v29);
    sub_1B00CCC(&FollowerRootComponent___c_TypeInfo, v30);
    sub_1B00CCC(&StringLiteral_6366/*"FOLLOWER_SELECT_REFRESH_TITLE"*/, v31);
    sub_1B00CCC(&StringLiteral_8528/*"MENU_SELECT_ITEM"*/, v32);
    sub_1B00CCC(&StringLiteral_8537/*"MENU_SHOW_SUPPORT"*/, v33);
    sub_1B00CCC(&StringLiteral_6363/*"FOLLOWER_SELECT_REFRESH_MESSAGE"*/, v34);
    sub_1B00CCC(&StringLiteral_115/*" "*/, v35);
    sub_1B00CCC(&StringLiteral_6364/*"FOLLOWER_SELECT_REFRESH_REST_MESSAGE"*/, v36);
    sub_1B00CCC(&StringLiteral_10152/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_EXPIRED"*/, v37);
    sub_1B00CCC(&StringLiteral_8428/*"MASTER_EQSKILL_LV_TXT"*/, v38);
    sub_1B00CCC(&StringLiteral_2957/*"BATTLE_SKILLCHARGETURN"*/, v39);
    sub_1B00CCC(&StringLiteral_1/*""*/, v40);
    sub_1B00CCC(&StringLiteral_6365/*"FOLLOWER_SELECT_REFRESH_REST_TITLE"*/, v41);
    byte_48E6A6B = 1;
  }
  v146 = 0LL;
  v147 = 0LL;
  skillInfoList = 0LL;
  v145 = 0LL;
  detail = 0LL;
  name = 0LL;
  if ( this->fields.state != 3 )
    return;
  this->fields.selectItemNum = n;
  switch ( kind )
  {
    case 1:
      if ( this->fields.tutorialState )
        goto LABEL_69;
      operationItemListViewManager = this->fields.operationItemListViewManager;
      if ( !operationItemListViewManager )
        goto LABEL_180;
      operationItemListViewManager = FollowerSelectItemListViewManager__GetItem(
                                       (FollowerSelectItemListViewManager_o *)operationItemListViewManager,
                                       n,
                                       0LL);
      if ( !operationItemListViewManager )
        goto LABEL_180;
      v83 = (FollowerSelectItemListViewItem_o *)operationItemListViewManager;
      if ( *((_BYTE *)operationItemListViewManager + 168)
        || FollowerSelectItemListViewItem__get_SvtId(
             (FollowerSelectItemListViewItem_o *)operationItemListViewManager,
             0LL) <= 0 )
      {
        goto LABEL_148;
      }
      v84 = Method_FollowerRootComponent_OnSelectFollowerItem__;
      if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
        v84 = (_QWORD *)sub_1B00CE4(Method_FollowerRootComponent_OnSelectFollowerItem__);
      v85 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v84, v84[4]);
      OverwriteAssetSoundName__PlaySystemSe(v85, 0, 0LL);
      FollowerRootComponent__SelectShowServant(this, v83, v86);
      return;
    case 2:
    case 3:
    case 4:
      v62 = Method_FollowerRootComponent_OnSelectFollowerItem__;
      if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
        v62 = (_QWORD *)sub_1B00CE4(Method_FollowerRootComponent_OnSelectFollowerItem__);
      v63 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v62, v62[4]);
      OverwriteAssetSoundName__PlaySystemSe(v63, 0, 0LL);
      operationItemListViewManager = this->fields.operationItemListViewManager;
      if ( !operationItemListViewManager )
        goto LABEL_180;
      operationItemListViewManager = FollowerSelectItemListViewManager__GetItem(
                                       (FollowerSelectItemListViewManager_o *)operationItemListViewManager,
                                       this->fields.selectItemNum,
                                       0LL);
      v64 = kind == 3 ? 1LL : 2LL * (kind == 4);
      if ( !operationItemListViewManager )
        goto LABEL_180;
      operationItemListViewManager = (void *)FollowerSelectItemListViewItem__GetSkillInfo(
                                               (FollowerSelectItemListViewItem_o *)operationItemListViewManager,
                                               &v147,
                                               0LL);
      if ( !v147 )
        goto LABEL_180;
      if ( (unsigned int)v64 >= v147->max_length )
        goto LABEL_181;
      v65 = v147->m_Items[v64];
      if ( !v65 || v65->fields.id < 1 || v65->fields.lv < 1 )
        goto LABEL_138;
      operationItemListViewManager = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !operationItemListViewManager )
        goto LABEL_180;
      operationItemListViewManager = DataManager__GetMasterData_object_(
                                       (DataManager_o *)operationItemListViewManager,
                                       (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_SkillMaster___);
      if ( !operationItemListViewManager )
        goto LABEL_180;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)operationItemListViewManager,
                 v65->fields.id,
                 (const MethodInfo_2FE6A4C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      operationItemListViewManager = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !operationItemListViewManager )
        goto LABEL_180;
      operationItemListViewManager = DataManager__GetMasterData_object_(
                                       (DataManager_o *)operationItemListViewManager,
                                       (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_SkillLvMaster___);
      if ( !operationItemListViewManager )
        goto LABEL_180;
      operationItemListViewManager = SkillLvMaster__GetEntity(
                                       (SkillLvMaster_o *)operationItemListViewManager,
                                       v65->fields.id,
                                       v65->fields.lv,
                                       0LL);
      if ( !Entity )
        goto LABEL_180;
      v67 = operationItemListViewManager;
      SkillEntity__getSkillMessageInfo((SkillEntity_o *)Entity, &v146, &v145, v65->fields.lv, 0LL);
      v68 = v146;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v69 = LocalizationManager__Get((System_String_o *)StringLiteral_8428/*"MASTER_EQSKILL_LV_TXT"*/, 0LL);
      lv = v65->fields.lv;
      v73 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv, v70, v71, v72);
      v74 = System_String__Format(v69, v73, 0LL);
      v146 = System_String__Concat_60337008(v68, (System_String_o *)StringLiteral_115/*" "*/, v74, 0LL);
      operationItemListViewManager = LocalizationManager__Get((System_String_o *)StringLiteral_2957/*"BATTLE_SKILLCHARGETURN"*/, 0LL);
      if ( !v67 )
        goto LABEL_180;
      v78 = (System_String_o *)operationItemListViewManager;
      v140 = v67[6];
      v79 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v140, v75, v76, v77);
      v80 = System_String__Format(v78, v79, 0LL);
      tutorialMode = this->fields.tutorialMode;
      v82 = v80;
      operationItemListViewManager = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !operationItemListViewManager )
        goto LABEL_180;
      if ( tutorialMode == 3 )
        CommonUI__OpenDetailLongInfoDialogOnFade((CommonUI_o *)operationItemListViewManager, v146, v82, v145, 0LL);
      else
        CommonUI__OpenDetailLongInfoDialog((CommonUI_o *)operationItemListViewManager, v146, v82, v145, 1, 0, 0LL);
LABEL_138:
      v59 = this->fields.operationItemListViewManager;
      v60 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1B00F18(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
      v61 = (int)Method_FollowerRootComponent_OnSelectFollowerItem__;
      goto LABEL_153;
    case 5:
      if ( !this->fields.tutorialState )
      {
        operationItemListViewManager = this->fields.operationItemListViewManager;
        if ( !operationItemListViewManager )
          goto LABEL_180;
        operationItemListViewManager = FollowerSelectItemListViewManager__GetItem(
                                         (FollowerSelectItemListViewManager_o *)operationItemListViewManager,
                                         n,
                                         0LL);
        if ( !operationItemListViewManager )
          goto LABEL_180;
        v109 = *((unsigned __int8 *)operationItemListViewManager + 168);
        v110 = Method_FollowerRootComponent_OnSelectFollowerItem__;
        if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
          v110 = (_QWORD *)sub_1B00CE4(Method_FollowerRootComponent_OnSelectFollowerItem__);
        v89 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v110, v110[4]);
        if ( !v109 )
          goto LABEL_116;
LABEL_151:
        OverwriteAssetSoundName__PlaySystemSe(v89, 2, 0LL);
LABEL_152:
        v59 = this->fields.operationItemListViewManager;
        v60 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1B00F18(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
        v61 = (int)Method_FollowerRootComponent_OnSelectFollowerItem__;
        goto LABEL_153;
      }
      v87 = this->fields.tutorialMode;
      if ( v87 == 3 )
      {
        v127 = Method_FollowerRootComponent_OnSelectFollowerItem__;
        if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
          v127 = (_QWORD *)sub_1B00CE4(Method_FollowerRootComponent_OnSelectFollowerItem__);
        v128 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v127, v127[4]);
        OverwriteAssetSoundName__PlaySystemSe(v128, 2, 0LL);
        goto LABEL_160;
      }
      if ( v87 == 2 )
      {
        v88 = Method_FollowerRootComponent_OnSelectFollowerItem__;
        if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
          v88 = (_QWORD *)sub_1B00CE4(Method_FollowerRootComponent_OnSelectFollowerItem__);
        v89 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v88, v88[4]);
LABEL_116:
        OverwriteAssetSoundName__PlaySystemSe(v89, 0, 0LL);
        operationItemListViewManager = this->fields.myFSM;
        if ( operationItemListViewManager )
        {
          v104 = &StringLiteral_8537/*"MENU_SHOW_SUPPORT"*/;
          goto LABEL_118;
        }
        goto LABEL_180;
      }
      return;
    case 6:
      if ( !this->fields.tutorialState )
      {
        operationItemListViewManager = this->fields.operationItemListViewManager;
        if ( !operationItemListViewManager )
          goto LABEL_180;
        operationItemListViewManager = FollowerSelectItemListViewManager__GetItem(
                                         (FollowerSelectItemListViewManager_o *)operationItemListViewManager,
                                         n,
                                         0LL);
        if ( !operationItemListViewManager )
          goto LABEL_180;
        v111 = (FollowerSelectItemListViewItem_o *)operationItemListViewManager;
        if ( !FollowerSelectItemListViewItem__get_ServantLeader(
                (FollowerSelectItemListViewItem_o *)operationItemListViewManager,
                0LL) )
          goto LABEL_139;
        operationItemListViewManager = FollowerSelectItemListViewItem__get_ServantLeader(v111, 0LL);
        if ( !operationItemListViewManager )
          goto LABEL_180;
        v113 = *((_QWORD *)operationItemListViewManager + 6);
        v112 = *((_QWORD *)operationItemListViewManager + 7);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v148.fields.currentCryptoKey = v113;
        *(_QWORD *)&v148.fields.fakeValue = v112;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(v148, 0LL) >= 1 )
        {
          operationItemListViewManager = FollowerSelectItemListViewItem__get_ServantLeader(v111, 0LL);
          if ( !operationItemListViewManager )
            goto LABEL_180;
          if ( !*((_QWORD *)operationItemListViewManager + 18) )
            goto LABEL_148;
          operationItemListViewManager = FollowerSelectItemListViewItem__get_ServantLeader(v111, 0LL);
          if ( !operationItemListViewManager )
            goto LABEL_180;
          v114 = *((_QWORD *)operationItemListViewManager + 18);
          if ( !v114 )
            goto LABEL_180;
          v116 = *(_QWORD *)(v114 + 56);
          v115 = *(_QWORD *)(v114 + 64);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v149.fields.currentCryptoKey = v116;
          *(_QWORD *)&v149.fields.fakeValue = v115;
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(v149, 0LL) < 1 )
            goto LABEL_148;
          operationItemListViewManager = FollowerSelectItemListViewItem__get_ServantLeader(v111, 0LL);
          if ( !operationItemListViewManager )
            goto LABEL_180;
          if ( ServantLeaderInfo__IsHideEquip((ServantLeaderInfo_o *)operationItemListViewManager, 0LL) )
            goto LABEL_148;
          operationItemListViewManager = FollowerSelectItemListViewItem__get_ServantLeader(v111, 0LL);
          if ( !operationItemListViewManager )
            goto LABEL_180;
          EquipInfo = (EquipTargetInfo_o *)*((_QWORD *)operationItemListViewManager + 18);
        }
        else
        {
LABEL_139:
          EquipInfo = FollowerSelectItemListViewItem__get_EquipInfo(v111, 0LL);
        }
        if ( EquipInfo )
        {
          v119 = *(_QWORD *)&EquipInfo->fields.svtId.fields.currentCryptoKey;
          v118 = *(_QWORD *)&EquipInfo->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v150.fields.currentCryptoKey = v119;
          *(_QWORD *)&v150.fields.fakeValue = v118;
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(v150, 0LL) >= 1 )
          {
            v120 = Method_FollowerRootComponent_OnSelectFollowerItem__;
            if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
              v120 = (_QWORD *)sub_1B00CE4(Method_FollowerRootComponent_OnSelectFollowerItem__);
            v121 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v120, v120[4]);
            OverwriteAssetSoundName__PlaySystemSe(v121, 0, 0LL);
            if ( FollowerSelectItemListViewItem__get_FollowerType(v111, 0LL) == 1 )
            {
              v123 = 13;
            }
            else if ( FollowerSelectItemListViewItem__get_FollowerType(v111, 0LL) == 5 )
            {
              v123 = 14;
            }
            else if ( v111->fields.isNpc )
            {
              v123 = 19;
            }
            else
            {
              v123 = 16;
            }
            FollowerRootComponent__SelectShowServantEquip(this, EquipInfo, v123, v122);
            return;
          }
        }
LABEL_148:
        v124 = Method_FollowerRootComponent_OnSelectFollowerItem__;
        if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
          v124 = (_QWORD *)sub_1B00CE4(Method_FollowerRootComponent_OnSelectFollowerItem__);
        v89 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v124, v124[4]);
        goto LABEL_151;
      }
LABEL_69:
      v90 = Method_FollowerRootComponent_OnSelectFollowerItem__;
      if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
        v90 = (_QWORD *)sub_1B00CE4(Method_FollowerRootComponent_OnSelectFollowerItem__);
      v91 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v90, v90[4]);
      OverwriteAssetSoundName__PlaySystemSe(v91, 2, 0LL);
      v92 = this->fields.tutorialMode;
      if ( v92 == 3 )
      {
LABEL_160:
        v59 = this->fields.operationItemListViewManager;
        v125 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1B00F18(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
        FollowerSelectItemListViewManager_CallbackFunc___ctor(
          v125,
          (Il2CppObject *)this,
          (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
          0LL);
        if ( !v59 )
          goto LABEL_180;
        v126 = 4;
LABEL_155:
        FollowerSelectItemListViewManager__SetMode(v59, v126, v125, 0LL);
        return;
      }
      if ( v92 == 2 )
        goto LABEL_152;
      return;
    case 7:
      v93 = Method_FollowerRootComponent_OnSelectFollowerItem__;
      if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
        v93 = (_QWORD *)sub_1B00CE4(Method_FollowerRootComponent_OnSelectFollowerItem__);
      v94 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v93, v93[4]);
      OverwriteAssetSoundName__PlaySystemSe(v94, 0, 0LL);
      if ( !FollowerListRequest_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FollowerListRequest_TypeInfo);
      if ( FollowerListRequest__checkRefreshRate(0LL) )
      {
        commonConfirmDialog = this->fields.commonConfirmDialog;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v96 = LocalizationManager__Get((System_String_o *)StringLiteral_6366/*"FOLLOWER_SELECT_REFRESH_TITLE"*/, 0LL);
        v97 = LocalizationManager__Get((System_String_o *)StringLiteral_6363/*"FOLLOWER_SELECT_REFRESH_MESSAGE"*/, 0LL);
        v98 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B00F18(CommonConfirmDialog_ClickDelegate_TypeInfo);
        CommonConfirmDialog_ClickDelegate___ctor(
          v98,
          (Il2CppObject *)this,
          Method_FollowerRootComponent_EndRefreshConfirm__,
          0LL);
        operationItemListViewManager = FollowerRootComponent_TypeInfo;
        if ( !FollowerRootComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FollowerRootComponent_TypeInfo);
        if ( commonConfirmDialog )
        {
          CommonConfirmDialog__Open_29914752(
            commonConfirmDialog,
            v96,
            v97,
            1,
            v98,
            FollowerRootComponent_TypeInfo->static_fields->LIST_UPDATE_MESSAGE_FONT_SIZE,
            0,
            0,
            0,
            0LL);
          return;
        }
      }
      else
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v106 = LocalizationManager__Get((System_String_o *)StringLiteral_6365/*"FOLLOWER_SELECT_REFRESH_REST_TITLE"*/, 0LL);
        v107 = LocalizationManager__Get((System_String_o *)StringLiteral_6364/*"FOLLOWER_SELECT_REFRESH_REST_MESSAGE"*/, 0LL);
        v108 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
        System_Action___ctor(v108, (Il2CppObject *)this, Method_FollowerRootComponent_EndRefreshRest__, 0LL);
        if ( Instance )
        {
          CommonUI__OpenNotificationDialog(
            (CommonUI_o *)Instance,
            v106,
            v107,
            v108,
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
      }
      goto LABEL_180;
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
      operationItemListViewManager = this->fields.operationItemListViewManager;
      if ( !operationItemListViewManager )
        goto LABEL_180;
      operationItemListViewManager = FollowerSelectItemListViewManager__GetItem(
                                       (FollowerSelectItemListViewManager_o *)operationItemListViewManager,
                                       n,
                                       0LL);
      v43 = (unsigned int)(kind - 9);
      v44 = (unsigned int)v43 < 4 ? v43 + 1 : 0LL;
      if ( !operationItemListViewManager )
        goto LABEL_180;
      operationItemListViewManager = (void *)FollowerSelectItemListViewItem__GetAppendSkillInfo(
                                               (FollowerSelectItemListViewItem_o *)operationItemListViewManager,
                                               &skillInfoList,
                                               *((_BYTE *)operationItemListViewManager + 168),
                                               0LL);
      if ( !skillInfoList )
        goto LABEL_180;
      if ( (unsigned int)v44 >= skillInfoList->max_length )
LABEL_181:
        sub_1B00F30(operationItemListViewManager, *(_QWORD *)&kind);
      v45 = skillInfoList->m_Items[v44];
      if ( v45 && v45->fields.id >= 1 && v45->fields.lv >= 1 )
      {
        v46 = Method_FollowerRootComponent_OnSelectFollowerItem__;
        if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
          v46 = (_QWORD *)sub_1B00CE4(Method_FollowerRootComponent_OnSelectFollowerItem__);
        v47 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v46, v46[4]);
        OverwriteAssetSoundName__PlaySystemSe(v47, 0, 0LL);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        operationItemListViewManager = DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_SkillMaster___);
        if ( !operationItemListViewManager )
          goto LABEL_180;
        v48 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)operationItemListViewManager,
                v45->fields.id,
                (const MethodInfo_2FE6A4C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        operationItemListViewManager = DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_SkillLvMaster___);
        if ( !operationItemListViewManager )
          goto LABEL_180;
        operationItemListViewManager = SkillLvMaster__GetEntity(
                                         (SkillLvMaster_o *)operationItemListViewManager,
                                         v45->fields.id,
                                         v45->fields.lv,
                                         0LL);
        if ( !v48 )
          goto LABEL_180;
        SkillEntity__getSkillMessageInfo((SkillEntity_o *)v48, &name, &detail, v45->fields.lv, 0LL);
        v49 = name;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v50 = LocalizationManager__Get((System_String_o *)StringLiteral_8428/*"MASTER_EQSKILL_LV_TXT"*/, 0LL);
        lv = v45->fields.lv;
        v54 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv, v51, v52, v53);
        v55 = System_String__Format(v50, v54, 0LL);
        name = System_String__Concat_60337008(v49, (System_String_o *)StringLiteral_115/*" "*/, v55, 0LL);
        v56 = this->fields.tutorialMode;
        operationItemListViewManager = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !operationItemListViewManager )
          goto LABEL_180;
        if ( v56 == 3 )
          CommonUI__OpenDetailLongInfoDialogOnFade(
            (CommonUI_o *)operationItemListViewManager,
            name,
            (System_String_o *)StringLiteral_1/*""*/,
            detail,
            0LL);
        else
          CommonUI__OpenDetailLongInfoDialog(
            (CommonUI_o *)operationItemListViewManager,
            name,
            (System_String_o *)StringLiteral_1/*""*/,
            detail,
            1,
            0,
            0LL);
      }
      else
      {
        v57 = Method_FollowerRootComponent_OnSelectFollowerItem__;
        if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
          v57 = (_QWORD *)sub_1B00CE4(Method_FollowerRootComponent_OnSelectFollowerItem__);
        v58 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v57, v57[4]);
        OverwriteAssetSoundName__PlaySystemSe(v58, 2, 0LL);
      }
      goto LABEL_30;
    default:
      operationItemListViewManager = this->fields.operationItemListViewManager;
      if ( !operationItemListViewManager )
        goto LABEL_180;
      operationItemListViewManager = FollowerSelectItemListViewManager__GetItem(
                                       (FollowerSelectItemListViewManager_o *)operationItemListViewManager,
                                       n,
                                       0LL);
      if ( !operationItemListViewManager )
        goto LABEL_180;
      v99 = operationItemListViewManager;
      if ( FollowerSelectItemListViewItem__get_SvtId(
             (FollowerSelectItemListViewItem_o *)operationItemListViewManager,
             0LL) < 1
        || v99[203]
        || v99[254] )
      {
        goto LABEL_148;
      }
      operationItemListViewManager = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
      if ( !operationItemListViewManager )
        goto LABEL_180;
      if ( !*((_BYTE *)operationItemListViewManager + 148) )
        goto LABEL_97;
      v100 = PartyOrganizationUtility_TypeInfo;
      if ( !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
        v100 = PartyOrganizationUtility_TypeInfo;
      }
      if ( !UnityEngine_PlayerPrefs__GetInt(v100->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0, 0LL) )
        goto LABEL_97;
      operationItemListViewManager = SingletonTemplate_object___get_Instance((const MethodInfo_35FC010 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !operationItemListViewManager )
        goto LABEL_180;
      if ( PartyOrganizationUtility__IsAvailableFriendshipUpItem(
             (PartyOrganizationUtility_o *)operationItemListViewManager,
             0LL) )
      {
LABEL_97:
        v101 = Method_FollowerRootComponent_OnSelectFollowerItem__;
        if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
          v101 = (_QWORD *)sub_1B00CE4(Method_FollowerRootComponent_OnSelectFollowerItem__);
        v102 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v101, v101[4]);
        OverwriteAssetSoundName__PlaySystemSe(v102, 0, 0LL);
        if ( this->fields.tutorialState )
        {
          v103 = this->fields.tutorialMode;
          if ( v103 == 3 )
          {
            this->fields.state = 4;
            v138 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v139 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
            System_Action___ctor(v139, (Il2CppObject *)this, Method_FollowerRootComponent_EndCloseTutorialArrow__, 0LL);
            if ( !v138 )
              goto LABEL_180;
            CommonUI__CloseTutorialArrowMark((CommonUI_o *)v138, v139, 0LL);
            return;
          }
          if ( v103 != 2 )
            return;
          operationItemListViewManager = this->fields.titleInfo;
          if ( !operationItemListViewManager )
            goto LABEL_180;
          TitleInfoControl__setBackBtnEnable((TitleInfoControl_o *)operationItemListViewManager, 1, 0LL);
        }
        operationItemListViewManager = this->fields.myFSM;
        if ( operationItemListViewManager )
        {
          v104 = &StringLiteral_8528/*"MENU_SELECT_ITEM"*/;
LABEL_118:
          PlayMakerFSM__SendEvent((PlayMakerFSM_o *)operationItemListViewManager, (System_String_o *)*v104, 0LL);
          return;
        }
LABEL_180:
        sub_1B00F28(operationItemListViewManager, *(_QWORD *)&kind);
      }
      v129 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      operationItemListViewManager = LocalizationManager__Get((System_String_o *)StringLiteral_10152/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_EXPIRED"*/, 0LL);
      v130 = (System_String_o *)operationItemListViewManager;
      v131 = FollowerRootComponent___c_TypeInfo;
      if ( !FollowerRootComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FollowerRootComponent___c_TypeInfo);
        v131 = FollowerRootComponent___c_TypeInfo;
      }
      _9__63_0 = v131->static_fields->__9__63_0;
      v133 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !_9__63_0 )
      {
        if ( !v131->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v131);
          v131 = FollowerRootComponent___c_TypeInfo;
        }
        v134 = (Il2CppObject *)v131->static_fields->__9;
        _9__63_0 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
        System_Action___ctor(_9__63_0, v134, Method_FollowerRootComponent___c__OnSelectFollowerItem_b__63_0__, 0LL);
        static_fields = FollowerRootComponent___c_TypeInfo->static_fields;
        static_fields->__9__63_0 = _9__63_0;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->__9__63_0, (int32_t)_9__63_0, v136, v137);
      }
      if ( !v129 )
        goto LABEL_180;
      CommonUI__OpenNotificationDialog((CommonUI_o *)v129, v133, v130, _9__63_0, -1, 0, 0, 0, 0, 0, 0, 0, 0LL, 0.0, 0LL);
LABEL_30:
      v59 = this->fields.operationItemListViewManager;
      v60 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1B00F18(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
      v61 = (int)Method_FollowerRootComponent_OnSelectFollowerItem__;
LABEL_153:
      v125 = v60;
      FollowerSelectItemListViewManager_CallbackFunc___ctor(v60, (Il2CppObject *)this, v61, 0LL);
      if ( !v59 )
        goto LABEL_180;
      v126 = 2;
      goto LABEL_155;
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
  if ( (byte_48E6A53 & 1) == 0 )
  {
    sub_1B00CCC(&BalanceConfig_TypeInfo, method);
    sub_1B00CCC(&BgmManager_TypeInfo, v3);
    sub_1B00CCC(&Method_DataManager_GetMasterData_QuestMaster___, v4);
    sub_1B00CCC(&Method_DataManager_GetMaster_BgmMaster___, v5);
    sub_1B00CCC(&Method_DataManager_GetMaster_QuestPhaseMaster___, v6);
    sub_1B00CCC(&DataManager_TypeInfo, v7);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1B00CCC(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v9);
    sub_1B00CCC(&SoundManager_TypeInfo, v10);
    this = (FollowerRootComponent_o *)sub_1B00CCC(&StringLiteral_1/*""*/, v11);
    byte_48E6A53 = 1;
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
    this = (FollowerRootComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_QuestPhaseMaster___);
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
        this = (FollowerRootComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_BgmMaster___);
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
        this = (FollowerRootComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_BgmMaster___);
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
    this = (FollowerRootComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_35FC010 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !this )
      goto LABEL_70;
    this = (FollowerRootComponent_o *)PartyOrganizationUtility__ExistsTemporaryPartyInfo(
                                        (PartyOrganizationUtility_o *)this,
                                        0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !System_String__IsNullOrEmpty(BgmFileName, 0LL) )
        FollowerRootComponent__SetBackupBgmName(v2, v21 & 1, v25);
      this = (FollowerRootComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_35FC010 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
        this = (FollowerRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( this )
        {
          this = (FollowerRootComponent_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_QuestMaster___);
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
        sub_1B00F28(this, method);
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
  if ( (byte_48E6A52 & 1) == 0 )
  {
    sub_1B00CCC(&SoundManager_TypeInfo, subBgmName);
    byte_48E6A52 = 1;
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
  if ( (byte_48E6A71 & 1) == 0 )
  {
    sub_1B00CCC(&QuestHintDialogOpenManager_TypeInfo, method);
    byte_48E6A71 = 1;
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
    sub_1B00F28(operationItemListViewManager, method);
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

  if ( (byte_48E6A5C & 1) == 0 )
  {
    sub_1B00CCC(&Method_FollowerRootComponent_CallbackFollowerList__, method);
    sub_1B00CCC(&Method_NetworkManager_getRequest_FollowerListRequest___, v3);
    sub_1B00CCC(&NetworkManager_TypeInfo, v4);
    sub_1B00CCC(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    sub_1B00CCC(&StringLiteral_10885/*"REQUEST_OK"*/, v6);
    byte_48E6A5C = 1;
  }
  v7 = (NetworkManager_ResultCallbackFunc_o *)sub_1B00F18(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v7,
    (Il2CppObject *)this,
    Method_FollowerRootComponent_CallbackFollowerList__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = (FollowerListRequest_o *)NetworkManager__getRequest_object_(
                                              v7,
                                              (const MethodInfo_2DD4818 *)Method_NetworkManager_getRequest_FollowerListRequest___);
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
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Request_object, (System_String_o *)StringLiteral_10885/*"REQUEST_OK"*/, 0LL);
      return;
    }
LABEL_12:
    sub_1B00F28(Request_object, v9);
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
  if ( (byte_48E6A67 & 1) == 0 )
  {
    this = (FollowerRootComponent_o *)sub_1B00CCC(
                                        &Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__,
                                        method);
    byte_48E6A67 = 1;
  }
  battleSetupInfo = v2->fields.battleSetupInfo;
  v2->fields.state = 5;
  if ( !battleSetupInfo )
    goto LABEL_8;
  if ( battleSetupInfo->fields.isChildFollower )
    battleSetupInfo->fields.followerId = 0LL;
  this = (FollowerRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !this )
LABEL_8:
    sub_1B00F28(this, method);
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

  if ( (byte_48E6A66 & 1) == 0 )
  {
    sub_1B00CCC(&Method_AvalonSceneManager_UnloadScene_PartyOrganizationRootComponent___, method);
    sub_1B00CCC(&RandomLimitCountManager_TypeInfo, v3);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4);
    sub_1B00CCC(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v5);
    sub_1B00CCC(&SoundManager_TypeInfo, v6);
    sub_1B00CCC(&TerminalPramsManager_TypeInfo, v7);
    byte_48E6A66 = 1;
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
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.battleSetupInfo, 0, v9, v10);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_35FC010 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  if ( BYTE1(Instance[8].monitor) )
  {
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_35FC010 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_27;
    BYTE1(Instance[8].monitor) = 0;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_48DE134 )
    {
      sub_1B00CCC(&TerminalPramsManager_TypeInfo, v13);
      byte_48DE134 = 1;
    }
    v14 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v14 = TerminalPramsManager_TypeInfo;
    }
    v14->static_fields->_IsAutoResume_k__BackingField = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  if ( AvalonSceneManager__IsStackScene((AvalonSceneManager_o *)Instance, 0LL) )
  {
    this->fields.state = 0;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_27;
    AvalonSceneManager__popSceneRefresh((AvalonSceneManager_o *)Instance, 1, battleSetupInfo, 0LL);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_27;
    AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0, 0LL);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
LABEL_27:
    sub_1B00F28(Instance, v13);
  AvalonSceneManager__UnloadScene_object_(
    (AvalonSceneManager_o *)Instance,
    (const MethodInfo_2D4D218 *)Method_AvalonSceneManager_UnloadScene_PartyOrganizationRootComponent___);
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

  if ( (byte_48E6A5A & 1) == 0 )
  {
    sub_1B00CCC(&AvalonSceneManager_TypeInfo, method);
    sub_1B00CCC(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, v3);
    sub_1B00CCC(&Method_FollowerRootComponent_OnSelectFollowerItem__, v4);
    sub_1B00CCC(&RandomLimitCountManager_TypeInfo, v5);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B00CCC(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v7);
    byte_48E6A5A = 1;
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
    v11 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1B00F18(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
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
    if ( !byte_48E6A79 )
    {
      sub_1B00CCC(&FollowerSelectItemListViewManager_TypeInfo, method);
      byte_48E6A79 = 1;
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
      sub_1B00F28(operationItemListViewManager, method);
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
    v15 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1B00F18(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
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
  operationItemListViewManager = SingletonTemplate_object___get_Instance((const MethodInfo_35FC010 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !operationItemListViewManager || !followerQuestInfomationDraw )
    goto LABEL_27;
  FollowerQuestInfomationDraw__SetInfomation(
    followerQuestInfomationDraw,
    questRestrictionInfo,
    *((_DWORD *)operationItemListViewManager + 14),
    0LL,
    v19);
  operationItemListViewManager = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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

  if ( (byte_48E6A60 & 1) == 0 )
  {
    sub_1B00CCC(&ServantStatusDialog_EndDelegate_TypeInfo, item);
    sub_1B00CCC(&Method_FollowerRootComponent_EndShowServant__, v5);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_48E6A60 = 1;
  }
  operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager
    || (ListViewManager__GetScrollView(
          operationItemListViewManager,
          &this->fields.openScroll,
          &this->fields.openOffset,
          0LL),
        operationItemListViewManager = (ListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        !item)
    || (v8 = (CommonUI_o *)operationItemListViewManager,
        ServantLeader = FollowerSelectItemListViewItem__get_ServantLeader(item, 0LL),
        v10 = (ServantStatusDialog_EndDelegate_o *)sub_1B00F18(ServantStatusDialog_EndDelegate_TypeInfo),
        ServantStatusDialog_EndDelegate___ctor(
          v10,
          (Il2CppObject *)this,
          Method_FollowerRootComponent_EndShowServant__,
          0LL),
        !v8) )
  {
    sub_1B00F28(operationItemListViewManager, item);
  }
  CommonUI__OpenServantStatusDialog_29949204(v8, 5, ServantLeader, v10, 0LL);
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

  if ( (byte_48E6A63 & 1) == 0 )
  {
    sub_1B00CCC(&ServantStatusDialog_EndDelegate_TypeInfo, equipInfo);
    sub_1B00CCC(&Method_FollowerRootComponent_EndShowServantEquip__, v7);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    byte_48E6A63 = 1;
  }
  operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager
    || (ListViewManager__GetScrollView(
          operationItemListViewManager,
          &this->fields.openScroll,
          &this->fields.openOffset,
          0LL),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v11 = (ServantStatusDialog_EndDelegate_o *)sub_1B00F18(ServantStatusDialog_EndDelegate_TypeInfo),
        ServantStatusDialog_EndDelegate___ctor(
          v11,
          (Il2CppObject *)this,
          Method_FollowerRootComponent_EndShowServantEquip__,
          0LL),
        !Instance) )
  {
    sub_1B00F28(operationItemListViewManager, equipInfo);
  }
  CommonUI__OpenServantEquipStatusDialog_29952300((CommonUI_o *)Instance, statusKind, equipInfo, v11, 0LL, 0LL);
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

  if ( (byte_48E6A54 & 1) == 0 )
  {
    sub_1B00CCC(&SoundManager_TypeInfo, isNonStopEndBgm);
    byte_48E6A54 = 1;
  }
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  if ( SoundManager__isPlayBgm(0LL, 0LL) && !isNonStopEndBgm )
  {
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    BgmName = SoundManager__getBgmName(0LL);
    this->fields.backupBgmName = BgmName;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.backupBgmName, (int32_t)BgmName, v6, v7);
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

  if ( (byte_48E6A4F & 1) == 0 )
  {
    sub_1B00CCC(&AtlasManager_TypeInfo, spriteName);
    sub_1B00CCC(&FollowerRootComponent_TypeInfo, v5);
    byte_48E6A4F = 1;
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
  int32_t ItemIndex_45010076; // w0
  FollowerSelectItemListViewItem_o *Item; // x0
  struct BattleSetupInfo_o *v9; // x21
  FollowerSelectItemListViewItem_o *v10; // x20
  struct BattleSetupInfo_o *v11; // x21
  struct BattleSetupInfo_o *v12; // x8
  struct BattleSetupInfo_o *v13; // x8
  int v14; // w9
  Il2CppObject *v15; // x19

  if ( (byte_48E6A68 & 1) == 0 )
  {
    sub_1B00CCC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    sub_1B00CCC(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v3);
    byte_48E6A68 = 1;
  }
  Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_35FC010 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = PartyOrganizationUtility__ExistsTemporaryPartyInfo((PartyOrganizationUtility_o *)Instance, 0LL);
  battleSetupInfo = this->fields.battleSetupInfo;
  if ( !battleSetupInfo )
    goto LABEL_23;
  if ( (Instance & 1) != 0 )
  {
    followerId = battleSetupInfo->fields.followerId;
    if ( followerId >= 1 )
    {
      Instance = (int64_t)this->fields.operationItemListViewManager;
      if ( !Instance )
        goto LABEL_23;
      ItemIndex_45010076 = FollowerSelectItemListViewManager__GetItemIndex_45010076(
                             (FollowerSelectItemListViewManager_o *)Instance,
                             followerId,
                             battleSetupInfo->fields.followerClassId,
                             battleSetupInfo->fields.followerSupportDeckId,
                             0LL);
      this->fields.selectItemNum = ItemIndex_45010076 & ~(ItemIndex_45010076 >> 31);
    }
    goto LABEL_21;
  }
  battleSetupInfo->fields.followerId = 0LL;
  followerId = (unsigned int)this->fields.selectItemNum;
  if ( (followerId & 0x80000000) == 0 )
  {
    Instance = (int64_t)this->fields.operationItemListViewManager;
    if ( !Instance )
      goto LABEL_23;
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
            Instance = FollowerSelectItemListViewItem__get_FollowerType(v10, 0LL);
            v13 = this->fields.battleSetupInfo;
            if ( v13 )
            {
              v13->fields.followerType = 0;
              if ( (_DWORD)Instance == 5 )
              {
                v14 = 5;
              }
              else
              {
                if ( (_DWORD)Instance != 1 )
                  goto LABEL_21;
                v14 = 1;
              }
              v13->fields.followerType = v14;
              goto LABEL_21;
            }
          }
        }
      }
LABEL_23:
      sub_1B00F28(Instance, followerId);
    }
  }
LABEL_21:
  this->fields.state = 5;
  v15 = (Il2CppObject *)this->fields.battleSetupInfo;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  AvalonSceneManager__pushScene((AvalonSceneManager_o *)Instance, 40, 1, v15, 0LL);
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

  if ( (byte_48E6A69 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMaster_PickupUserFollowerMaster___, method);
    sub_1B00CCC(&Method_DataManager_GetMaster_UserFollowerMaster___, v3);
    sub_1B00CCC(&DataManager_TypeInfo, v4);
    sub_1B00CCC(&Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long__TryGetSingleEntity__, v5);
    sub_1B00CCC(
      &Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long__TryGetSingleEntity__,
      v6);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v7);
    sub_1B00CCC(&SupportInfoJump_TypeInfo, v8);
    byte_48E6A69 = 1;
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
  operationItemListViewManager = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_UserFollowerMaster___);
  if ( !operationItemListViewManager )
    goto LABEL_42;
  operationItemListViewManager = DataMasterBase_object__object__long___TryGetSingleEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)operationItemListViewManager,
                                   &entity,
                                   (const MethodInfo_2FE6CD4 *)Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long__TryGetSingleEntity__);
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
        v30 = (SupportInfoJump_o *)sub_1B00F18(v29);
        SupportInfoJump___ctor_37490096(v30, v28, 0, 1, 0LL);
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
            operationItemListViewManager = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
        sub_1B00F28(operationItemListViewManager, selectItemNum);
      }
      goto LABEL_43;
    }
  }
LABEL_18:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  operationItemListViewManager = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_PickupUserFollowerMaster___);
  if ( !operationItemListViewManager )
    goto LABEL_42;
  operationItemListViewManager = DataMasterBase_object__object__long___TryGetSingleEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)operationItemListViewManager,
                                   &v32,
                                   (const MethodInfo_2FE6CD4 *)Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long__TryGetSingleEntity__);
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
    sub_1B00F30(operationItemListViewManager, selectItemNum);
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
  struct EventCampaignEntity_array *Data_37855364; // x0
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

  if ( (byte_48E6A5F & 1) == 0 )
  {
    sub_1B00CCC(&BalanceConfig_TypeInfo, method);
    sub_1B00CCC(&Method_DataManager_GetMasterData_EventCampaignMaster___, v3);
    sub_1B00CCC(&Method_DataManager_GetMasterData_EventQuestMaster___, v4);
    sub_1B00CCC(&Method_DataManager_GetMasterData_UserDeckMaster___, v5);
    sub_1B00CCC(&Method_DataManager_GetMasterData_UserEventDeckMaster___, v6);
    sub_1B00CCC(&Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__TryGetEntity__, v7);
    sub_1B00CCC(&LastUsedDeckNumberManager_TypeInfo, v8);
    sub_1B00CCC(&NetworkManager_TypeInfo, v9);
    sub_1B00CCC(&OptionManager_TypeInfo, v10);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1B00CCC(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v12);
    byte_48E6A5F = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_134;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_UserDeckMaster___);
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
                 (const MethodInfo_2FE6C4C *)Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__TryGetEntity__);
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
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.friendPointCampaignEntityList, 0, v17, v18);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_134;
  v22 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_134;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_EventQuestMaster___);
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
  Data_37855364 = EventCampaignMaster__getData_37855364(
                    (EventCampaignMaster_o *)v22,
                    24,
                    (EventEntity_array *)Instance,
                    0LL);
  this->fields.friendPointCampaignEntityList = Data_37855364;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields.friendPointCampaignEntityList,
    (int32_t)Data_37855364,
    v26,
    v27);
  if ( this->fields.tutorialMode == 4 )
  {
    v28 = this->fields.battleSetupInfo;
    if ( !v28 )
      goto LABEL_134;
    if ( v28->fields.isChildFollower )
    {
      Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_35FC010 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
          Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_35FC010 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
          Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_35FC010 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
    sub_1B00F28(Instance, v14);
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
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        v40 = DataManager__GetMasterData_object_(
                (DataManager_o *)Instance,
                (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_UserEventDeckMaster___);
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
                      sub_1B00F30(Instance, v14);
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
                        QuestRestrictionInfo__SetDeckInfo_39145736((QuestRestrictionInfo_o *)Instance, v45, 0LL);
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
void __fastcall FollowerRootComponent___OnClickBack_b__68_0(
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

  if ( (byte_48E6A78 & 1) == 0 )
  {
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    sub_1B00CCC(&TerminalPramsManager_TypeInfo, v5);
    sub_1B00CCC(&StringLiteral_3488/*"CLICK_BACK"*/, v6);
    byte_48E6A78 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  CommonUI__CloseConfirmDialog(Instance, 0LL);
  if ( isDecide )
  {
    FollowerRootComponent__QuestHintDialogResetTemporarilyId(v9, v10);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_48DE134 )
    {
      sub_1B00CCC(&TerminalPramsManager_TypeInfo, v8);
      byte_48DE134 = 1;
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
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3488/*"CLICK_BACK"*/, 0LL);
      return;
    }
LABEL_14:
    sub_1B00F28(Instance, v8);
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

  if ( (byte_48E6A5B & 1) == 0 )
  {
    sub_1B00CCC(&AtlasManager_TypeInfo, method);
    sub_1B00CCC(&FollowerRootComponent_TypeInfo, v3);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, v4);
    byte_48E6A5B = 1;
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
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->partyOrganizationAtlasCache, 0, v6, v7);
  operationItemListViewManager = (FollowerSelectItemListViewManager_o *)this->fields.backSkinSprite;
  if ( !operationItemListViewManager
    || (operationItemListViewManager = (FollowerSelectItemListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                                (UnityEngine_Component_o *)operationItemListViewManager,
                                                                                0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)operationItemListViewManager, 0, 0LL),
        (operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__)) == 0LL) )
  {
LABEL_14:
    sub_1B00F28(operationItemListViewManager, method);
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

  if ( (byte_48E6A50 & 1) == 0 )
  {
    sub_1B00CCC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_48E6A50 = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B00F28(0LL, v4);
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, (SceneRootComponent_o *)this, 0LL);
}


void __fastcall FollowerRootComponent__beginPause(FollowerRootComponent_o *this, const MethodInfo *method)
{
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x0

  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    sub_1B00F28(0LL, method);
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

  if ( (byte_48E6A59 & 1) == 0 )
  {
    sub_1B00CCC(&AvalonSceneManager_TypeInfo, data);
    sub_1B00CCC(&BalanceConfig_TypeInfo, v6);
    sub_1B00CCC(&BattleSetupInfo_TypeInfo, v7);
    sub_1B00CCC(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, v8);
    sub_1B00CCC(&Method_FollowerRootComponent_OnSelectFollowerItem__, v9);
    sub_1B00CCC(&FollowerRootComponent_TypeInfo, v10);
    sub_1B00CCC(&RandomLimitCountManager_TypeInfo, v11);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v13);
    sub_1B00CCC(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v14);
    sub_1B00CCC(&SupportInfoJump_TypeInfo, v15);
    sub_1B00CCC(&TutorialFlag_TypeInfo, v16);
    byte_48E6A59 = 1;
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
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&static_fields->partyOrganizationAtlasCache,
    (int32_t)partyOrganizationAtlas,
    (int32_t)method,
    v3);
  titleInfo = this->fields.titleInfo;
  Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_35FC010 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_117;
  if ( *(_BYTE *)(Instance + 80) )
  {
    selectItemNum = 0LL;
    if ( !titleInfo )
      goto LABEL_117;
  }
  else
  {
    selectItemNum = this->fields.tutorialMode != 2;
    if ( !titleInfo )
      goto LABEL_117;
  }
  TitleInfoControl__setBackBtnEnable(titleInfo, selectItemNum, 0LL);
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
            goto LABEL_117;
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
                    if ( !byte_48E6A79 )
                    {
                      sub_1B00CCC(&FollowerSelectItemListViewManager_TypeInfo, selectItemNum);
                      byte_48E6A79 = 1;
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
                          goto LABEL_117;
                        if ( FollowerSelectItemListViewManager__ChangeClass(
                               (FollowerSelectItemListViewManager_o *)Instance,
                               selectItemNum,
                               0LL) )
                        {
                          Instance = (int64_t)this->fields.operationItemListViewManager;
                          if ( !Instance )
                            goto LABEL_117;
                          ListViewManager__JumpItem((ListViewManager_o *)Instance, this->fields.selectItemNum, 0LL);
                        }
                      }
                      v33 = (Il2CppObject *)this->fields.battleSetupInfo;
                      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
LABEL_117:
            sub_1B00F28(Instance, selectItemNum);
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
    sub_1B00C70((ServantStatusBattleListViewItem_o *)p_battleSetupInfo, v37, v23, v24);
    v39 = *p_battleSetupInfo;
    if ( !*p_battleSetupInfo )
      return;
    questRestrictionInfo = v39->fields.questRestrictionInfo;
    if ( !questRestrictionInfo )
      goto LABEL_117;
    if ( !QuestRestrictionInfo__IsMyServantOrNpcRestriction(v39->fields.questRestrictionInfo, 0LL)
      && (questRestrictionInfo->fields.isNoSupportBattle
       || questRestrictionInfo->fields.isFixedMyServantSingle
       || questRestrictionInfo->fields.isSupportOnlyForceBattle) )
    {
      goto LABEL_108;
    }
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    Instance = TutorialFlag__Get_36489460(102, 0LL);
    if ( (Instance & 1) == 0 )
    {
      v42 = *p_battleSetupInfo;
      if ( !*p_battleSetupInfo )
        goto LABEL_117;
      goto LABEL_79;
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
          goto LABEL_117;
LABEL_79:
        if ( v42->fields.isChildFollower )
        {
          FollowerRootComponent__ReturnBattleSetupMenu(this, (const MethodInfo *)selectItemNum);
          return;
        }
        goto LABEL_108;
      }
LABEL_67:
      FollowerRootComponent__ReturnSupportList(this, (const MethodInfo *)selectItemNum);
      return;
    }
    Instance = (int64_t)this->fields.battleSetupInfo;
    this->fields.selectItemNum = -1;
    *(_QWORD *)&this->fields.tutorialMode = 0x100000003LL;
    if ( !Instance )
      goto LABEL_117;
    operationItemListViewManager = this->fields.operationItemListViewManager;
    Instance = BattleSetupInfo__TargetQuestId((BattleSetupInfo_o *)Instance, 0LL);
    v44 = this->fields.battleSetupInfo;
    if ( !v44 )
      goto LABEL_117;
    if ( !operationItemListViewManager )
      goto LABEL_117;
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
      goto LABEL_117;
    Instance = (int64_t)this->fields.followerQuestInfomationDraw;
    if ( !Instance )
      goto LABEL_117;
    FollowerQuestInfomationDraw__SetInfomation(
      (FollowerQuestInfomationDraw_o *)Instance,
      v46->fields.questRestrictionInfo,
      0,
      0LL,
      v45);
    this->fields.state = 2;
    FollowerRootComponent__OnMoveEnd(this, v47);
    goto LABEL_74;
  }
  if ( this->fields.state == 6 )
    goto LABEL_67;
  v49 = this->fields.battleSetupInfo;
  if ( !v49 )
    goto LABEL_117;
  if ( !v49->fields.isChildFollower )
  {
    v63 = v49->fields.questRestrictionInfo;
    if ( !v63 )
      goto LABEL_117;
    if ( v63->fields.isNotTransitionSupportList )
    {
LABEL_108:
      FollowerRootComponent__ReturnQuestMenu(this, (const MethodInfo *)selectItemNum);
      return;
    }
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  RandomLimitCountManager__set_EnableRandomLimitCount(0, 0LL);
  RandomLimitCountManager__set_EnableRandomLimitCount(1, 0LL);
  Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_35FC010 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_117;
  v50 = *(PartyListViewItem_o **)(Instance + 72);
  Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_35FC010 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_117;
  v51 = (UnityEngine_Component_o *)this->fields.operationItemListViewManager;
  i = *(_DWORD *)(Instance + 56);
  this->fields.tutorialState = 0;
  this->fields.selectItemNum = -1;
  if ( !v51 )
    goto LABEL_117;
  Instance = (int64_t)UnityEngine_Component__get_gameObject(v51, 0LL);
  if ( !Instance )
    goto LABEL_117;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (int64_t)this->fields.battleSetupInfo;
  if ( !Instance )
    goto LABEL_117;
  v53 = this->fields.operationItemListViewManager;
  Instance = BattleSetupInfo__TargetQuestId((BattleSetupInfo_o *)Instance, 0LL);
  v54 = this->fields.battleSetupInfo;
  if ( !v54 )
    goto LABEL_117;
  if ( !v53 )
    goto LABEL_117;
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
    goto LABEL_117;
  Instance = (int64_t)this->fields.followerQuestInfomationDraw;
  if ( !Instance )
    goto LABEL_117;
  FollowerQuestInfomationDraw__SetInfomation(
    (FollowerQuestInfomationDraw_o *)Instance,
    v56->fields.questRestrictionInfo,
    i,
    0LL,
    v55);
  this->fields.state = 3;
  v57 = this->fields.operationItemListViewManager;
  v58 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1B00F18(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v58,
    (Il2CppObject *)this,
    (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
    0LL);
  if ( !v57 )
    goto LABEL_117;
  FollowerSelectItemListViewManager__SetMode(v57, 2, v58, 0LL);
  if ( v50 )
  {
    Instance = (int64_t)this->fields.operationItemListViewManager;
    if ( !Instance )
      goto LABEL_117;
    if ( ListViewManager__get_ItemSum((ListViewManager_o *)Instance, 0LL) >= 3 )
    {
      if ( i )
      {
LABEL_99:
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
                goto LABEL_117;
              if ( !v61 )
                goto LABEL_117;
              Instance = FollowerSelectItemListViewManager__GetItemIndex(v61, userId, *(_QWORD *)(Instance + 40), 0LL);
              if ( !this->fields.operationItemListViewManager )
                goto LABEL_117;
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
                goto LABEL_99;
            }
          }
        }
      }
    }
  }
LABEL_74:
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v48 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v48 )
    goto LABEL_117;
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

  if ( (byte_48E6A51 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, data);
    sub_1B00CCC(&AtlasManager_TypeInfo, v5);
    sub_1B00CCC(&BalanceConfig_TypeInfo, v6);
    sub_1B00CCC(&BattleSetupInfo_TypeInfo, v7);
    sub_1B00CCC(&Method_DataManager_GetMasterData_ConstantMaster___, v8);
    sub_1B00CCC(&Method_DataManager_GetMasterData_NpcFollowerMaster___, v9);
    sub_1B00CCC(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v10);
    sub_1B00CCC(&Method_FollowerRootComponent_EndLoadCommonBg__, v11);
    sub_1B00CCC(&Method_FollowerRootComponent_EndLoadPartyOrganizationAtlasSimple__, v12);
    sub_1B00CCC(&FollowerRootComponent_TypeInfo, v13);
    sub_1B00CCC(&LocalizationManager_TypeInfo, v14);
    sub_1B00CCC(&RandomLimitCountManager_TypeInfo, v15);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1B00CCC(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v17);
    sub_1B00CCC(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v18);
    sub_1B00CCC(&TutorialFlag_TypeInfo, v19);
    sub_1B00CCC(&StringLiteral_13297/*"TUTORIAL_SUPPORT_QUEST_ID"*/, v20);
    sub_1B00CCC(&StringLiteral_13298/*"TUTORIAL_SUPPORT_QUEST_PHASE"*/, v21);
    sub_1B00CCC(&StringLiteral_6344/*"FOLLOWER_SELECT_EXPLANATION2"*/, v22);
    sub_1B00CCC(&StringLiteral_1/*""*/, v23);
    byte_48E6A51 = 1;
  }
  Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_35FC010 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_99;
  if ( PartyOrganizationUtility__ExistsTemporaryPartyInfo((PartyOrganizationUtility_o *)Instance, 0LL) )
  {
    Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_35FC010 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_99;
    assetLoadedEventIdList = Instance[1].fields.assetLoadedEventIdList;
    if ( !assetLoadedEventIdList )
      goto LABEL_99;
    monitor = (struct BattleSetupInfo_o *)assetLoadedEventIdList[1].monitor;
    this->fields.battleSetupInfo = monitor;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.battleSetupInfo, (int32_t)monitor, v28, v29);
    Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_35FC010 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !Instance )
      goto LABEL_99;
    if ( !MissionNotifyManager__IsPause(Instance, 0LL) )
    {
      Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_35FC010 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
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
    sub_1B00C70((ServantStatusBattleListViewItem_o *)p_battleSetupInfo, v36, v26, v27);
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
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&static_fields->partyOrganizationAtlasCache,
    (int32_t)partyOrganizationAtlas,
    v39,
    v40);
  Instance = (MissionNotifyManager_o *)this->fields.titleInfo;
  if ( !Instance )
    goto LABEL_99;
  TitleInfoControl__setTitleInfo_35992860((TitleInfoControl_o *)Instance, this->fields.myFSM, 3, 63, 0LL);
  Instance = (MissionNotifyManager_o *)this->fields.titleInfo;
  if ( !Instance )
    goto LABEL_99;
  TitleInfoControl__setBackBtnEnable((TitleInfoControl_o *)Instance, 1, 0LL);
  Instance = (MissionNotifyManager_o *)this->fields.operationItemListViewManager;
  if ( !Instance )
    goto LABEL_99;
  FollowerSelectItemListViewManager__DestroyList_44999712(
    (FollowerSelectItemListViewManager_o *)Instance,
    this->fields.battleSetupInfo,
    0LL);
  infomationLabel = this->fields.infomationLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (MissionNotifyManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6344/*"FOLLOWER_SELECT_EXPLANATION2"*/, 0LL);
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
  if ( !Instance )
    goto LABEL_99;
  v46 = Instance[1].fields.mNoticeNumberComp || LODWORD(Instance[1].fields.assetLoadedEventIdList) != 0;
  if ( (v46 & BYTE1(Instance[1].klass)) != 0
    && (BattleSetupInfo__SetRestriction((BattleSetupInfo_o *)Instance, 1, 0LL),
        (Instance = (MissionNotifyManager_o *)this->fields.battleSetupInfo) == 0LL)
    || (mDispInfos = Instance[1].fields.mDispInfos) == 0LL )
  {
LABEL_99:
    sub_1B00F28(Instance, v25);
  }
  if ( BYTE2(mDispInfos[9].fields._items) )
  {
LABEL_47:
    FollowerRootComponent__StartBattleSetupMenu(this, v25);
    return;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_36489460(102, 0LL) )
  {
    Instance = (MissionNotifyManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_99;
    Instance = (MissionNotifyManager_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_ConstantMaster___);
    if ( !Instance )
      goto LABEL_99;
    v48 = (ConstantMaster_o *)Instance;
    Instance = (MissionNotifyManager_o *)ConstantMaster__GetValue(
                                           (ConstantMaster_o *)Instance,
                                           (System_String_o *)StringLiteral_13297/*"TUTORIAL_SUPPORT_QUEST_ID"*/,
                                           0LL);
    battleSetupInfo = this->fields.battleSetupInfo;
    if ( !battleSetupInfo )
      goto LABEL_99;
    if ( battleSetupInfo->fields.questId == (_DWORD)Instance )
    {
      Instance = (MissionNotifyManager_o *)ConstantMaster__GetValue(v48, (System_String_o *)StringLiteral_13298/*"TUTORIAL_SUPPORT_QUEST_PHASE"*/, 0LL);
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
    Instance = (MissionNotifyManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (MissionNotifyManager_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)Instance,
                                             (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
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
              Instance = (MissionNotifyManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                goto LABEL_99;
              Instance = (MissionNotifyManager_o *)DataManager__GetMasterData_object_(
                                                     (DataManager_o *)Instance,
                                                     (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
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
    v50 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
    System_Action___ctor(v50, (Il2CppObject *)this, Method_FollowerRootComponent_EndLoadCommonBg__, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__LoadUISkin(v50, 2, 1, 0LL);
    return;
  }
  this->fields.tutorialMode = 1;
LABEL_74:
  v51 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
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
    sub_1B00F28(this, type);
  battleSetupInfo->fields.followerType = 0;
  if ( (type | 4) == 5 )
    battleSetupInfo->fields.followerType = type;
}


void __fastcall FollowerRootComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_48E6A7A & 1) == 0 )
  {
    sub_1B00CCC(&FollowerRootComponent___c_TypeInfo, v1);
    byte_48E6A7A = 1;
  }
  v2 = (Il2CppObject *)sub_1B00F18(FollowerRootComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  FollowerRootComponent___c_TypeInfo->static_fields->__9 = (struct FollowerRootComponent___c_o *)v2;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)FollowerRootComponent___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
}


void __fastcall FollowerRootComponent___c___ctor(FollowerRootComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall FollowerRootComponent___c___Init_b__48_0(FollowerRootComponent___c_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  PartyOrganizationUtility_c *v3; // x0
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_48E6A7B & 1) == 0 )
  {
    sub_1B00CCC(&PartyOrganizationUtility_TypeInfo, method);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v2);
    byte_48E6A7B = 1;
  }
  v3 = PartyOrganizationUtility_TypeInfo;
  if ( !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
    v3 = PartyOrganizationUtility_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(v3->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B00F28(0LL, v5);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL);
}


void __fastcall FollowerRootComponent___c___OnSelectFollowerItem_b__63_0(
        FollowerRootComponent___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  PartyOrganizationUtility_c *v3; // x0
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_48E6A7C & 1) == 0 )
  {
    sub_1B00CCC(&PartyOrganizationUtility_TypeInfo, method);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v2);
    byte_48E6A7C = 1;
  }
  v3 = PartyOrganizationUtility_TypeInfo;
  if ( !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
    v3 = PartyOrganizationUtility_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(v3->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B00F28(0LL, v5);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL);
}