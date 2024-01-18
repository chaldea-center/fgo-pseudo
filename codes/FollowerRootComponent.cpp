void __fastcall FollowerRootComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  FollowerRootComponent_c *v2; // x8

  if ( (byte_4186A14 & 1) == 0 )
  {
    sub_B2C35C(&FollowerRootComponent_TypeInfo, v1);
    byte_4186A14 = 1;
  }
  FollowerRootComponent_TypeInfo->static_fields->LIST_UPDATE_MESSAGE_FONT_SIZE = 26;
  v2 = FollowerRootComponent_TypeInfo;
  FollowerRootComponent_TypeInfo->static_fields->RETURN_TERMINAL_MESSAGE_FONT_SIZE = 27;
  v2->static_fields->RETURN_TERMINAL_MESSAGE_POSITION_Y = 10;
  v2->static_fields->RETURN_TERMINAL_MESSAGE_SPACING_Y = 5;
}


void __fastcall FollowerRootComponent___ctor(FollowerRootComponent_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v9; // x1

  if ( (byte_4186A13 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, method);
    byte_4186A13 = 1;
  }
  v9 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.backupBgmName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.backupBgmName, v9, v2, v3, v4, v5, v6, v7);
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0LL);
}


void __fastcall FollowerRootComponent__CallbackFollowerList(
        FollowerRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_41869FA & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_11079/*"REQUEST_OK"*/, result);
    byte_41869FA = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_B2C434(0LL, result);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_11079/*"REQUEST_OK"*/, 0LL);
}


void __fastcall FollowerRootComponent__CallbackRefresh(
        FollowerRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  BattleSetupInfo_o *battleSetupInfo; // x0
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  struct BattleSetupInfo_o *v9; // x8
  FollowerSelectItemListViewManager_o *v10; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v11; // x21

  if ( (byte_4186A0A & 1) == 0 )
  {
    sub_B2C35C(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, result);
    sub_B2C35C(&Method_FollowerRootComponent_OnSelectFollowerItem__, v4);
    sub_B2C35C(&RandomLimitCountManager_TypeInfo, v5);
    byte_4186A0A = 1;
  }
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  RandomLimitCountManager__set_EnableRandomLimitCount(0, 0LL);
  RandomLimitCountManager__set_EnableRandomLimitCount(1, 0LL);
  battleSetupInfo = this->fields.battleSetupInfo;
  if ( !battleSetupInfo )
    goto LABEL_12;
  operationItemListViewManager = this->fields.operationItemListViewManager;
  battleSetupInfo = (BattleSetupInfo_o *)BattleSetupInfo__TargetQuestId(battleSetupInfo, 0LL);
  v9 = this->fields.battleSetupInfo;
  if ( !v9
    || !operationItemListViewManager
    || (FollowerSelectItemListViewManager__CreateList(
          operationItemListViewManager,
          (int32_t)battleSetupInfo,
          v9->fields.questPhase,
          this->fields.friendPointUpVal,
          this->fields.friendPointUpMaxVal,
          this->fields.friendPointCampaignEntityList,
          v9->fields.eventUpValSetupInfo,
          v9->fields.questRestrictionInfo,
          0LL),
        v10 = this->fields.operationItemListViewManager,
        v11 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_B2C42C(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo),
        FollowerSelectItemListViewManager_CallbackFunc___ctor(
          v11,
          (Il2CppObject *)this,
          Method_FollowerRootComponent_OnSelectFollowerItem__,
          0LL),
        !v10)
    || (FollowerSelectItemListViewManager__SetMode(v10, 2, v11, 0LL),
        (battleSetupInfo = (BattleSetupInfo_o *)this->fields.commonConfirmDialog) == 0LL) )
  {
LABEL_12:
    sub_B2C434(battleSetupInfo, v6);
  }
  CommonConfirmDialog__Close((CommonConfirmDialog_o *)battleSetupInfo, 0LL);
}


void __fastcall FollowerRootComponent__EndCloseShowServant(FollowerRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_41869FF & 1) == 0 )
  {
    sub_B2C35C(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&Method_FollowerRootComponent_OnSelectFollowerItem__, v3);
    byte_41869FF = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v5 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_B2C42C(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    Method_FollowerRootComponent_OnSelectFollowerItem__,
    0LL);
  if ( !operationItemListViewManager )
    sub_B2C434(v6, v7);
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

  if ( (byte_4186A02 & 1) == 0 )
  {
    sub_B2C35C(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&Method_FollowerRootComponent_OnSelectFollowerItem__, v3);
    byte_4186A02 = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v5 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_B2C42C(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    Method_FollowerRootComponent_OnSelectFollowerItem__,
    0LL);
  if ( !operationItemListViewManager )
    sub_B2C434(v6, v7);
  FollowerSelectItemListViewManager__SetMode(operationItemListViewManager, 2, v5, 0LL);
}


void __fastcall FollowerRootComponent__EndCloseTutorialArrow(FollowerRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *tutorialMaskBase2; // x0

  if ( (byte_4186A0C & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_8729/*"MENU_SELECT_ITEM"*/, method);
    byte_4186A0C = 1;
  }
  tutorialMaskBase2 = this->fields.tutorialMaskBase2;
  if ( !tutorialMaskBase2
    || (UnityEngine_GameObject__SetActive(tutorialMaskBase2, 0, 0LL),
        tutorialMaskBase2 = (UnityEngine_GameObject_o *)this->fields.myFSM,
        this->fields.state = 3,
        !tutorialMaskBase2) )
  {
    sub_B2C434(tutorialMaskBase2, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)tutorialMaskBase2, (System_String_o *)StringLiteral_8729/*"MENU_SELECT_ITEM"*/, 0LL);
}


void __fastcall FollowerRootComponent__EndLoadCommonBg(FollowerRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Component_o *backSkinSprite; // x0
  System_Action_o *v6; // x20

  if ( (byte_41869F2 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&AtlasManager_TypeInfo, v3);
    sub_B2C35C(&Method_FollowerRootComponent_EndLoadOutGameAtlas__, v4);
    byte_41869F2 = 1;
  }
  backSkinSprite = (UnityEngine_Component_o *)this->fields.backSkinSprite;
  if ( !backSkinSprite
    || (backSkinSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(backSkinSprite, 0LL)) == 0LL )
  {
    sub_B2C434(backSkinSprite, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)backSkinSprite, 1, 0LL);
  v6 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_FollowerRootComponent_EndLoadOutGameAtlas__, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadOutGameAtlas(v6, 0LL);
}


void __fastcall FollowerRootComponent__EndLoadEventAtlas(FollowerRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Action_o *v5; // x20

  if ( (byte_41869F4 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&AtlasManager_TypeInfo, v3);
    sub_B2C35C(&Method_FollowerRootComponent_EndLoadPartyOrganizationAtlas__, v4);
    byte_41869F4 = 1;
  }
  v5 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_FollowerRootComponent_EndLoadPartyOrganizationAtlas__, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadPartyOrganizationAtlas(v5, 1, 0LL);
}


void __fastcall FollowerRootComponent__EndLoadOutGameAtlas(FollowerRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Action_o *v5; // x20

  if ( (byte_41869F3 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&AtlasManager_TypeInfo, v3);
    sub_B2C35C(&Method_FollowerRootComponent_EndLoadEventAtlas__, v4);
    byte_41869F3 = 1;
  }
  v5 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_FollowerRootComponent_EndLoadEventAtlas__, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventAtlas(v5, 1, 0LL);
}


void __fastcall FollowerRootComponent__EndLoadPartyOrganizationAtlas(
        FollowerRootComponent_o *this,
        const MethodInfo *method)
{
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x0
  const MethodInfo *v4; // x1

  if ( (byte_41869F5 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_41869F5 = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    goto LABEL_10;
  FollowerSelectItemListViewManager__AdjustButton(operationItemListViewManager, 0LL);
  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    goto LABEL_10;
  FollowerSelectItemListViewManager__SetClassBoardInfo(operationItemListViewManager, 0LL);
  SceneRootComponent__beginStartUp_17297004((SceneRootComponent_o *)this, 0LL);
  if ( this->fields.isForceFadeOut )
  {
    this->fields.isForceFadeOut = 0;
    operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( operationItemListViewManager )
    {
      CommonUI__maskFadeInit((CommonUI_o *)operationItemListViewManager, 0LL);
      operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( operationItemListViewManager )
      {
        CommonUI__maskFadeout((CommonUI_o *)operationItemListViewManager, 1, 0.0, 0LL, 0LL);
        FollowerRootComponent__StartBattleSetupMenu(this, v4);
        return;
      }
    }
LABEL_10:
    sub_B2C434(operationItemListViewManager, method);
  }
}


void __fastcall FollowerRootComponent__EndOpenTutorialArrow(FollowerRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4186A11 & 1) == 0 )
  {
    sub_B2C35C(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&Method_FollowerRootComponent_OnSelectFollowerItem__, v3);
    byte_4186A11 = 1;
  }
  this->fields.state = 3;
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v5 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_B2C42C(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    Method_FollowerRootComponent_OnSelectFollowerItem__,
    0LL);
  if ( !operationItemListViewManager )
    sub_B2C434(v6, v7);
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
  __int64 v11; // x1
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  NetworkManager_ResultCallbackFunc_o *v13; // x20
  FollowerListRequest_o *v14; // x20
  const MethodInfo *v15; // x4
  struct BattleSetupInfo_o *v16; // x8
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v18; // x21

  v4 = this;
  if ( (byte_4186A09 & 1) == 0 )
  {
    sub_B2C35C(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, isDecide);
    sub_B2C35C(&Method_FollowerRootComponent_CallbackRefresh__, v5);
    sub_B2C35C(&Method_FollowerRootComponent_OnSelectFollowerItem__, v6);
    sub_B2C35C(&Method_NetworkManager_getRequest_FollowerListRequest___, v7);
    sub_B2C35C(&NetworkManager_TypeInfo, v8);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v9);
    sub_B2C35C(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v10);
    this = (FollowerRootComponent_o *)sub_B2C35C(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v11);
    byte_4186A09 = 1;
  }
  if ( isDecide )
  {
    battleSetupInfo = v4->fields.battleSetupInfo;
    if ( !battleSetupInfo )
      goto LABEL_22;
    if ( battleSetupInfo->fields.isChildFollower )
    {
      this = (FollowerRootComponent_o *)v4->fields.titleInfo;
      if ( !this )
        goto LABEL_22;
      TitleInfoControl__setBackBtnEnable((TitleInfoControl_o *)this, 0, 0LL);
      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
      }
      this = (FollowerRootComponent_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !this )
        goto LABEL_22;
      LOBYTE(this->fields.operationItemListViewManager) = 1;
    }
    v13 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v13,
      (Il2CppObject *)v4,
      Method_FollowerRootComponent_CallbackRefresh__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    this = (FollowerRootComponent_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                        v13,
                                        (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_FollowerListRequest___);
    if ( v4->fields.battleSetupInfo )
    {
      v14 = (FollowerListRequest_o *)this;
      this = (FollowerRootComponent_o *)BattleSetupInfo__TargetQuestId(v4->fields.battleSetupInfo, 0LL);
      v16 = v4->fields.battleSetupInfo;
      if ( v16 )
      {
        if ( v14 )
        {
          FollowerListRequest__beginRequest(v14, 1, (int32_t)this, v16->fields.questPhase, v15);
          return;
        }
      }
    }
LABEL_22:
    sub_B2C434(this, isDecide);
  }
  operationItemListViewManager = v4->fields.operationItemListViewManager;
  v18 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_B2C42C(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v18,
    (Il2CppObject *)v4,
    Method_FollowerRootComponent_OnSelectFollowerItem__,
    0LL);
  if ( !operationItemListViewManager )
    goto LABEL_22;
  FollowerSelectItemListViewManager__SetMode(operationItemListViewManager, 2, v18, 0LL);
  this = (FollowerRootComponent_o *)v4->fields.commonConfirmDialog;
  if ( !this )
    goto LABEL_22;
  CommonConfirmDialog__Close((CommonConfirmDialog_o *)this, 0LL);
}


void __fastcall FollowerRootComponent__EndRefreshRest(FollowerRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4186A0B & 1) == 0 )
  {
    sub_B2C35C(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&Method_FollowerRootComponent_OnSelectFollowerItem__, v3);
    byte_4186A0B = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v5 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_B2C42C(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    Method_FollowerRootComponent_OnSelectFollowerItem__,
    0LL);
  if ( !operationItemListViewManager )
    sub_B2C434(v6, v7);
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
  CommonUI_o *Instance; // x20
  System_Action_o *v8; // x21

  if ( (byte_41869FE & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isDecide);
    sub_B2C35C(&Method_FollowerRootComponent_EndCloseShowServant__, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_41869FE = 1;
  }
  operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager
    || (ListViewManager__SetScrollView(
          operationItemListViewManager,
          this->fields.openScroll,
          this->fields.openOffset,
          0LL),
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v8 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo),
        System_Action___ctor(v8, (Il2CppObject *)this, Method_FollowerRootComponent_EndCloseShowServant__, 0LL),
        !Instance) )
  {
    sub_B2C434(operationItemListViewManager, isDecide);
  }
  CommonUI__CloseServantStatusDialog(Instance, v8, 0LL);
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
  CommonUI_o *Instance; // x20
  System_Action_o *v8; // x21

  if ( (byte_4186A01 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isDecide);
    sub_B2C35C(&Method_FollowerRootComponent_EndCloseShowServantEquip__, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4186A01 = 1;
  }
  operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager
    || (ListViewManager__SetScrollView(
          operationItemListViewManager,
          this->fields.openScroll,
          this->fields.openOffset,
          0LL),
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v8 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo),
        System_Action___ctor(v8, (Il2CppObject *)this, Method_FollowerRootComponent_EndCloseShowServantEquip__, 0LL),
        !Instance) )
  {
    sub_B2C434(operationItemListViewManager, isDecide);
  }
  CommonUI__CloseServantEquipStatusDialog(Instance, v8, 0LL);
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

  if ( (byte_4186A12 & 1) == 0 )
  {
    sub_B2C35C(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&Method_FollowerRootComponent_OnSelectFollowerItem__, v3);
    byte_4186A12 = 1;
  }
  this->fields.state = 3;
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v5 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_B2C42C(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    Method_FollowerRootComponent_OnSelectFollowerItem__,
    0LL);
  if ( !operationItemListViewManager )
    sub_B2C434(v6, v7);
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

  if ( (byte_4186A0F & 1) == 0 )
  {
    sub_B2C35C(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&Method_FollowerRootComponent_OnSelectFollowerItem__, v3);
    byte_4186A0F = 1;
  }
  titleInfo = this->fields.titleInfo;
  this->fields.state = 3;
  if ( !titleInfo
    || (TitleInfoControl__setBackBtnEnable(titleInfo, 0, 0LL),
        operationItemListViewManager = this->fields.operationItemListViewManager,
        v6 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_B2C42C(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo),
        FollowerSelectItemListViewManager_CallbackFunc___ctor(
          v6,
          (Il2CppObject *)this,
          Method_FollowerRootComponent_OnSelectFollowerItem__,
          0LL),
        !operationItemListViewManager) )
  {
    sub_B2C434(titleInfo, method);
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
  float v7; // s4
  float v8; // s5
  float v9; // s6
  float v10; // s7
  int v11; // s0
  float v15; // s8
  float x; // s0
  float v17; // s4
  WebViewManager_o *Instance; // x0
  Il2CppMethodPointer methodPointer; // kr00_8
  void *invoker_method; // kr08_8
  CommonUI_o *v21; // x20
  System_Action_o *v22; // x21
  MethodInfo v23; // [xsp+0h] [xbp-50h] BYREF
  UnityEngine_Vector2_o v24; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v25; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v26; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v27; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_4186A10 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&FSUtility_TypeInfo, v3);
    sub_B2C35C(&Method_FollowerRootComponent_EndOpenTutorialArrow__, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4186A10 = 1;
  }
  v23.methodPointer = 0LL;
  v23.invoker_method = 0LL;
  tutorialMaskBase2 = this->fields.tutorialMaskBase2;
  if ( !tutorialMaskBase2 )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(tutorialMaskBase2, 1, 0LL);
  v25.fields.m_XMin = -500.0;
  v25.fields.m_Width = 1000.0;
  v25.fields.m_Height = 150.0;
  v25.fields.m_YMin = -14.0;
  UnityEngine_Rect___ctor(v25, v7, v8, v9, v10, &v23);
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  if ( FSUtility__IsUnderVista(0LL) )
  {
    v15 = -20.0;
  }
  else
  {
    x = UnityEngine_Rect__get_x(*(UnityEngine_Rect_o *)&v11, &v23);
    v26.fields.m_YMin = 8.0;
    v26.fields.m_XMin = x + 8.0;
    UnityEngine_Rect__set_x(v26, v17, &v23);
    v15 = -12.0;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  methodPointer = v23.methodPointer;
  invoker_method = v23.invoker_method;
  v21 = (CommonUI_o *)Instance;
  v22 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v22, (Il2CppObject *)this, Method_FollowerRootComponent_EndOpenTutorialArrow__, 0LL);
  if ( !v21 )
LABEL_12:
    sub_B2C434(tutorialMaskBase2, method);
  v24.fields.y = 100.0;
  v24.fields.x = v15;
  *(_QWORD *)&v27.fields.m_XMin = methodPointer;
  *(_QWORD *)&v27.fields.m_Width = invoker_method;
  CommonUI__OpenTutorialArrowMark(v21, v24, 0.0, v27, v22, 0LL);
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
  UnityEngine_Component_o *operationItemListViewManager; // x0
  FollowerSelectItemListViewManager_o *v16; // x20
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  PartyOrganizationUtility_c *v18; // x0
  CommonUI_o *Instance; // x20
  System_String_o *v20; // x21
  FollowerRootComponent___c_c *v21; // x8
  struct FollowerRootComponent___c_StaticFields *static_fields; // x9
  System_Action_o *_9__45_0; // x23
  System_String_o *v24; // x22
  Il2CppObject *v25; // x24
  struct FollowerRootComponent___c_StaticFields *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  FollowerSelectItemListViewManager_o *v33; // x20
  System_Action_o *v34; // x21

  if ( (byte_41869FB & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_FollowerRootComponent_OnMoveEnd__, v3);
    sub_B2C35C(&LocalizationManager_TypeInfo, v4);
    sub_B2C35C(&PartyOrganizationUtility_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B2C35C(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v8);
    sub_B2C35C(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v9);
    sub_B2C35C(&Method_FollowerRootComponent___c__Init_b__45_0__, v10);
    sub_B2C35C(&FollowerRootComponent___c_TypeInfo, v11);
    sub_B2C35C(&StringLiteral_8729/*"MENU_SELECT_ITEM"*/, v12);
    sub_B2C35C(&StringLiteral_10350/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_EXPIRED"*/, v13);
    sub_B2C35C(&StringLiteral_1/*""*/, v14);
    byte_41869FB = 1;
  }
  if ( !this->fields.state )
  {
    operationItemListViewManager = (UnityEngine_Component_o *)this->fields.operationItemListViewManager;
    if ( !operationItemListViewManager )
      goto LABEL_41;
    operationItemListViewManager = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                operationItemListViewManager,
                                                                0LL);
    if ( !operationItemListViewManager )
      goto LABEL_41;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)operationItemListViewManager, 1, 0LL);
    operationItemListViewManager = (UnityEngine_Component_o *)this->fields.battleSetupInfo;
    if ( !operationItemListViewManager )
      goto LABEL_41;
    v16 = this->fields.operationItemListViewManager;
    operationItemListViewManager = (UnityEngine_Component_o *)BattleSetupInfo__TargetQuestId(
                                                                (BattleSetupInfo_o *)operationItemListViewManager,
                                                                0LL);
    battleSetupInfo = this->fields.battleSetupInfo;
    if ( !battleSetupInfo )
      goto LABEL_41;
    if ( !v16 )
      goto LABEL_41;
    FollowerSelectItemListViewManager__CreateList(
      v16,
      (int32_t)operationItemListViewManager,
      battleSetupInfo->fields.questPhase,
      this->fields.friendPointUpVal,
      this->fields.friendPointUpMaxVal,
      this->fields.friendPointCampaignEntityList,
      battleSetupInfo->fields.eventUpValSetupInfo,
      battleSetupInfo->fields.questRestrictionInfo,
      0LL);
    operationItemListViewManager = (UnityEngine_Component_o *)this->fields.operationItemListViewManager;
    if ( !operationItemListViewManager )
      goto LABEL_41;
    if ( ListViewManager__get_ItemSum((ListViewManager_o *)operationItemListViewManager, 0LL) > 0 )
      goto LABEL_13;
    operationItemListViewManager = (UnityEngine_Component_o *)this->fields.operationItemListViewManager;
    if ( !operationItemListViewManager )
      goto LABEL_41;
    if ( FollowerSelectItemListViewManager__GetItemCount(
           (FollowerSelectItemListViewManager_o *)operationItemListViewManager,
           0LL) >= 1 )
    {
LABEL_13:
      operationItemListViewManager = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
      if ( !operationItemListViewManager )
        goto LABEL_41;
      if ( *((_BYTE *)&operationItemListViewManager[5].fields + 4) )
      {
        v18 = PartyOrganizationUtility_TypeInfo;
        if ( (BYTE3(PartyOrganizationUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
          v18 = PartyOrganizationUtility_TypeInfo;
        }
        if ( UnityEngine_PlayerPrefs__GetInt(v18->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0, 0LL) )
        {
          if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
          }
          operationItemListViewManager = (UnityEngine_Component_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( !operationItemListViewManager )
            goto LABEL_41;
          if ( !PartyOrganizationUtility__IsAvailableFriendshipUpItem(
                  (PartyOrganizationUtility_o *)operationItemListViewManager,
                  0LL) )
          {
            Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            operationItemListViewManager = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                                        (System_String_o *)StringLiteral_10350/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_EXPIRED"*/,
                                                                        0LL);
            v20 = (System_String_o *)operationItemListViewManager;
            v21 = FollowerRootComponent___c_TypeInfo;
            if ( (BYTE3(FollowerRootComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !FollowerRootComponent___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(FollowerRootComponent___c_TypeInfo);
              v21 = FollowerRootComponent___c_TypeInfo;
            }
            static_fields = v21->static_fields;
            _9__45_0 = static_fields->__9__45_0;
            v24 = (System_String_o *)StringLiteral_1/*""*/;
            if ( !_9__45_0 )
            {
              if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v21);
                static_fields = FollowerRootComponent___c_TypeInfo->static_fields;
              }
              v25 = (Il2CppObject *)static_fields->__9;
              _9__45_0 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
              System_Action___ctor(_9__45_0, v25, Method_FollowerRootComponent___c__Init_b__45_0__, 0LL);
              v26 = FollowerRootComponent___c_TypeInfo->static_fields;
              v26->__9__45_0 = _9__45_0;
              sub_B2C2F8(
                (BattleServantConfConponent_o *)&v26->__9__45_0,
                (System_Int32_array **)_9__45_0,
                v27,
                v28,
                v29,
                v30,
                v31,
                v32);
            }
            if ( !Instance )
              goto LABEL_41;
            CommonUI__OpenNotificationDialog(Instance, v24, v20, _9__45_0, -1, 0, 0, 0, 0, 0, 0, 0, 0LL, 0LL);
          }
        }
      }
      this->fields.state = 2;
      v33 = this->fields.operationItemListViewManager;
      v34 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v34, (Il2CppObject *)this, Method_FollowerRootComponent_OnMoveEnd__, 0LL);
      if ( v33 )
      {
        FollowerSelectItemListViewManager__SetMode_30679480(v33, 1, v34, 0LL);
        return;
      }
LABEL_41:
      sub_B2C434(operationItemListViewManager, method);
    }
    operationItemListViewManager = (UnityEngine_Component_o *)this->fields.myFSM;
    this->fields.selectItemNum = -1;
    if ( !operationItemListViewManager )
      goto LABEL_41;
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)operationItemListViewManager, (System_String_o *)StringLiteral_8729/*"MENU_SELECT_ITEM"*/, 0LL);
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
  __int64 v23; // x1
  __int64 v24; // x1
  void *Instance; // x0
  const MethodInfo *v26; // x1
  SceneRootComponent_o *StackedRootComponent; // x0
  __int64 v28; // x10
  UnityEngine_Component_o *v29; // x20
  FollowerRootComponent_o *v30; // x0
  const MethodInfo *v31; // x1
  UnityEngine_Component_c *klass; // x8
  int v33; // w8
  void *v34; // x19
  unsigned int v35; // w20
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  __int64 *v37; // x8
  _QWORD *v38; // x0
  System_Reflection_MethodBase_o *v39; // x0
  TerminalPramsManager_c *v40; // x0
  __int64 *v41; // x8
  System_String_o *v42; // x20
  System_String_o *v43; // x21
  CommonUI_o *v44; // x22
  System_String_o *v45; // x23
  System_String_o *v46; // x24
  CommonConfirmDialog_ClickDelegate_o *v47; // x25
  __int64 v48; // x0

  if ( (byte_4186A0D & 1) == 0 )
  {
    sub_B2C35C(&BattleRootComponent_TypeInfo, method);
    sub_B2C35C(&CommonConfirmDialog_ClickDelegate_TypeInfo, v3);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponentsInChildren_Camera___, v4);
    sub_B2C35C(&Method_FollowerRootComponent_OnClickBack__, v5);
    sub_B2C35C(&Method_FollowerRootComponent__OnClickBack_b__65_0__, v6);
    sub_B2C35C(&FollowerRootComponent_TypeInfo, v7);
    sub_B2C35C(&LocalizationManager_TypeInfo, v8);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v10);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v11);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    sub_B2C35C(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v13);
    sub_B2C35C(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v14);
    sub_B2C35C(&SoundManager_TypeInfo, v15);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v16);
    sub_B2C35C(&StringLiteral_6375/*"FOLLOWER_SELECT_BACK_TO_QUEST_NO_AP_CONSUME_AP0"*/, v17);
    sub_B2C35C(&StringLiteral_3043/*"CLICK_BACK"*/, v18);
    sub_B2C35C(&StringLiteral_6374/*"FOLLOWER_SELECT_BACK_TO_QUEST_NO_AP_CONSUME"*/, v19);
    sub_B2C35C(&StringLiteral_6373/*"FOLLOWER_SELECT_BACK_TITLE"*/, v20);
    sub_B2C35C(&StringLiteral_3264/*"COMMON_CONFIRM_NO"*/, v21);
    sub_B2C35C(&StringLiteral_3267/*"COMMON_CONFIRM_YES"*/, v22);
    sub_B2C35C(&StringLiteral_1/*""*/, v23);
    sub_B2C35C(&StringLiteral_3044/*"CLICK_BACK_BATTLE_SETUP"*/, v24);
    byte_4186A0D = 1;
  }
  if ( this->fields.state == 3 && !this->fields.tutorialState )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( !Instance )
      goto LABEL_75;
    if ( !*((_BYTE *)Instance + 140) )
      goto LABEL_36;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_75;
    StackedRootComponent = AvalonSceneManager__GetStackedRootComponent((AvalonSceneManager_o *)Instance, 0LL);
    if ( StackedRootComponent
      && (v28 = *(&BattleRootComponent_TypeInfo->_2.bitflags2 + 1),
          *(&StackedRootComponent->klass->_2.bitflags2 + 1) >= (unsigned int)v28) )
    {
      if ( (BattleRootComponent_c *)StackedRootComponent->klass->_2.typeHierarchy[v28 - 1] == BattleRootComponent_TypeInfo )
        v29 = (UnityEngine_Component_o *)StackedRootComponent;
      else
        v29 = 0LL;
    }
    else
    {
      v29 = 0LL;
    }
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v29, 0LL, 0LL) )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(1, 0LL);
      this->fields.state = 4;
      FollowerRootComponent__QuestHintDialogResetTemporarilyId(v30, v31);
      if ( v29 )
      {
        Instance = UnityEngine_Component__get_gameObject(v29, 0LL);
        if ( Instance )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
          klass = v29[3].klass;
          if ( klass )
          {
            Instance = klass[1]._1.parent;
            if ( Instance )
            {
              BattleResultComponent__EndResult((BattleResultComponent_o *)Instance, 0LL);
              Instance = this->fields.myFSM;
              if ( Instance )
              {
                PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3043/*"CLICK_BACK"*/, 0LL);
                Instance = UnityEngine_Component__get_transform(v29, 0LL);
                if ( Instance )
                {
                  Instance = UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                               (UnityEngine_Component_o *)Instance,
                               (const MethodInfo_172DF98 *)Method_UnityEngine_Component_GetComponentsInChildren_Camera___);
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
                      {
                        v48 = sub_B2C460(Instance);
                        sub_B2C400(v48, 0LL);
                      }
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
LABEL_36:
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( !Instance )
        goto LABEL_75;
      if ( AvalonSceneManager__IsStackScene((AvalonSceneManager_o *)Instance, 0LL) )
        goto LABEL_79;
      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
      }
      Instance = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_75;
      if ( *((int *)Instance + 12) >= 1 )
      {
LABEL_79:
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(1, 0LL);
        battleSetupInfo = this->fields.battleSetupInfo;
        this->fields.state = 4;
        if ( battleSetupInfo )
        {
          if ( battleSetupInfo->fields.isChildFollower )
          {
            Instance = this->fields.myFSM;
            if ( !Instance )
              goto LABEL_75;
            v37 = &StringLiteral_3044/*"CLICK_BACK_BATTLE_SETUP"*/;
          }
          else
          {
            FollowerRootComponent__QuestHintDialogResetTemporarilyId((FollowerRootComponent_o *)Instance, v26);
            Instance = this->fields.myFSM;
            if ( !Instance )
              goto LABEL_75;
            v37 = &StringLiteral_3043/*"CLICK_BACK"*/;
          }
          PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v37, 0LL);
          return;
        }
      }
      else
      {
        v38 = Method_FollowerRootComponent_OnClickBack__;
        if ( (*((_BYTE *)Method_FollowerRootComponent_OnClickBack__ + 75) & 2) != 0 )
          v38 = (_QWORD *)sub_B2C364(Method_FollowerRootComponent_OnClickBack__);
        v39 = (System_Reflection_MethodBase_o *)sub_B2C340(v38, v38[3]);
        OverwriteAssetSoundName__PlaySystemSe(v39, 1, 0LL);
        v40 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v40 = TerminalPramsManager_TypeInfo;
        }
        if ( v40->static_fields->lastPlayQuestConsumeAp <= 0 )
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v41 = &StringLiteral_6375/*"FOLLOWER_SELECT_BACK_TO_QUEST_NO_AP_CONSUME_AP0"*/;
        }
        else
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v41 = &StringLiteral_6374/*"FOLLOWER_SELECT_BACK_TO_QUEST_NO_AP_CONSUME"*/;
        }
        v42 = LocalizationManager__Get((System_String_o *)*v41, 0LL);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v43 = LocalizationManager__Get((System_String_o *)StringLiteral_6373/*"FOLLOWER_SELECT_BACK_TITLE"*/, 0LL);
        v44 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v45 = LocalizationManager__Get((System_String_o *)StringLiteral_3267/*"COMMON_CONFIRM_YES"*/, 0LL);
        v46 = LocalizationManager__Get((System_String_o *)StringLiteral_3264/*"COMMON_CONFIRM_NO"*/, 0LL);
        v47 = (CommonConfirmDialog_ClickDelegate_o *)sub_B2C42C(CommonConfirmDialog_ClickDelegate_TypeInfo);
        CommonConfirmDialog_ClickDelegate___ctor(
          v47,
          (Il2CppObject *)this,
          Method_FollowerRootComponent__OnClickBack_b__65_0__,
          0LL);
        Instance = FollowerRootComponent_TypeInfo;
        if ( (BYTE3(FollowerRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !FollowerRootComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FollowerRootComponent_TypeInfo);
          Instance = FollowerRootComponent_TypeInfo;
        }
        if ( v44 )
        {
          CommonUI__OpenConfirmDecideDlg(
            v44,
            v43,
            v42,
            v45,
            v46,
            v47,
            *(_DWORD *)(*((_QWORD *)Instance + 23) + 16LL),
            (float)*(int *)(*((_QWORD *)Instance + 23) + 20LL),
            (float)*(int *)(*((_QWORD *)Instance + 23) + 24LL),
            0,
            0,
            0,
            240,
            0,
            0LL);
          return;
        }
      }
    }
LABEL_75:
    sub_B2C434(Instance, v26);
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
  int32_t tutorialMode; // w8
  CommonUI_o *Instance; // x20
  System_String_o *v14; // x21
  System_Action_o *v15; // x0
  __int64 *v16; // x8
  BattleSetupInfo_o *battleSetupInfo; // x0
  int32_t eventId; // w20
  struct BattleSetupInfo_o *v19; // x8
  struct BattleSetupInfo_o *v20; // x8
  int32_t v21; // w20
  System_Action_o *v22; // x21
  struct BattleSetupInfo_o *v23; // x8
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v25; // x21
  System_Action_o *v26; // x22

  if ( (byte_4186A07 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, v3);
    sub_B2C35C(&Method_FollowerRootComponent_EndTutorialFollowerCommonGuide__, v4);
    sub_B2C35C(&Method_FollowerRootComponent_EndTutorialFollowerGuideNotification1__, v5);
    sub_B2C35C(&Method_FollowerRootComponent_EndTutorialFollowerGuideNotification2__, v6);
    sub_B2C35C(&Method_FollowerRootComponent_OnSelectFollowerItem__, v7);
    sub_B2C35C(&LocalizationManager_TypeInfo, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_B2C35C(&StringLiteral_13510/*"TUTORIAL_MESSAGE_FOLLOWER2"*/, v10);
    sub_B2C35C(&StringLiteral_13509/*"TUTORIAL_MESSAGE_FOLLOWER1"*/, v11);
    byte_4186A07 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( this->fields.tutorialState != 1 )
    {
      battleSetupInfo = this->fields.battleSetupInfo;
      if ( battleSetupInfo )
      {
        eventId = battleSetupInfo->fields.eventId;
        battleSetupInfo = (BattleSetupInfo_o *)BattleSetupInfo__TargetQuestId(battleSetupInfo, 0LL);
        v19 = this->fields.battleSetupInfo;
        if ( v19 )
        {
          battleSetupInfo = (BattleSetupInfo_o *)EventTutorialMaster__IsTutorialAvailable(
                                                   eventId,
                                                   15,
                                                   (int32_t)battleSetupInfo,
                                                   v19->fields.questPhase,
                                                   0,
                                                   0,
                                                   0LL);
          if ( ((unsigned __int8)battleSetupInfo & 1) != 0 )
          {
            v20 = this->fields.battleSetupInfo;
            this->fields.state = 2;
            if ( v20 )
            {
              v21 = v20->fields.eventId;
              v22 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
              System_Action___ctor(
                v22,
                (Il2CppObject *)this,
                Method_FollowerRootComponent_EndTutorialFollowerCommonGuide__,
                0LL);
              battleSetupInfo = this->fields.battleSetupInfo;
              if ( battleSetupInfo )
              {
                battleSetupInfo = (BattleSetupInfo_o *)BattleSetupInfo__TargetQuestId(battleSetupInfo, 0LL);
                v23 = this->fields.battleSetupInfo;
                if ( v23 )
                {
                  EventTutorialMaster__CheckTutorial(
                    v21,
                    15,
                    v22,
                    (int32_t)battleSetupInfo,
                    v23->fields.questPhase,
                    0,
                    0,
                    0LL);
                  return;
                }
              }
            }
          }
          else
          {
            this->fields.state = 3;
            operationItemListViewManager = this->fields.operationItemListViewManager;
            v25 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_B2C42C(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
            FollowerSelectItemListViewManager_CallbackFunc___ctor(
              v25,
              (Il2CppObject *)this,
              Method_FollowerRootComponent_OnSelectFollowerItem__,
              0LL);
            if ( operationItemListViewManager )
            {
              FollowerSelectItemListViewManager__SetMode(operationItemListViewManager, 2, v25, 0LL);
              return;
            }
          }
        }
      }
      goto LABEL_27;
    }
    tutorialMode = this->fields.tutorialMode;
    *(_QWORD *)&this->fields.tutorialState = 0x200000002LL;
    if ( tutorialMode == 3 )
    {
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v14 = LocalizationManager__Get((System_String_o *)StringLiteral_13510/*"TUTORIAL_MESSAGE_FOLLOWER2"*/, 0LL);
      v15 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      v16 = &Method_FollowerRootComponent_EndTutorialFollowerGuideNotification2__;
LABEL_25:
      v26 = v15;
      System_Action___ctor(v15, (Il2CppObject *)this, *v16, 0LL);
      if ( Instance )
      {
        CommonUI__OpenTutorialNotificationDialog(Instance, v14, -1, v26, 0LL);
        return;
      }
LABEL_27:
      sub_B2C434(battleSetupInfo, method);
    }
    if ( tutorialMode == 2 )
    {
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v14 = LocalizationManager__Get((System_String_o *)StringLiteral_13509/*"TUTORIAL_MESSAGE_FOLLOWER1"*/, 0LL);
      v15 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      v16 = &Method_FollowerRootComponent_EndTutorialFollowerGuideNotification1__;
      goto LABEL_25;
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
  __int64 v42; // x1
  __int64 v43; // x1
  void *operationItemListViewManager; // x0
  __int64 v45; // x8
  __int64 v46; // x20
  SkillInfo_o *v47; // x22
  SkillEntity_o *v48; // x20
  System_String_o *v49; // x20
  System_String_o *v50; // x21
  Il2CppObject *v51; // x0
  System_String_o *v52; // x0
  int32_t v53; // w20
  System_String_o *v54; // x1
  System_String_o *v55; // x3
  System_String_o *v56; // x2
  __int64 v57; // x20
  SkillInfo_o *v58; // x23
  SkillEntity_o *Entity; // x21
  _DWORD *v60; // x20
  System_String_o *v61; // x21
  System_String_o *v62; // x22
  Il2CppObject *v63; // x0
  System_String_o *v64; // x0
  System_String_o *v65; // x21
  Il2CppObject *v66; // x0
  System_String_o *v67; // x0
  int32_t tutorialMode; // w21
  System_String_o *v69; // x20
  FollowerListRequest_c *v70; // x0
  CommonConfirmDialog_o *commonConfirmDialog; // x20
  System_String_o *v72; // x21
  System_String_o *v73; // x22
  CommonConfirmDialog_ClickDelegate_o *v74; // x23
  FollowerSelectItemListViewItem_o *v75; // x20
  __int64 v76; // x21
  __int64 v77; // x22
  __int64 v78; // x8
  __int64 v79; // x21
  __int64 v80; // x22
  EquipTargetInfo_o *EquipInfo; // x21
  int32_t v82; // w8
  int32_t v83; // w8
  SoundManager_c *v84; // x0
  _BYTE *v85; // x20
  PartyOrganizationUtility_c *v86; // x0
  int32_t v87; // w8
  __int64 *v88; // x8
  CommonUI_o *Instance; // x20
  System_String_o *v90; // x21
  System_String_o *v91; // x22
  System_Action_o *v92; // x23
  FollowerSelectItemListViewItem_o *v93; // x20
  const MethodInfo *v94; // x2
  _BYTE *v95; // x8
  __int64 v96; // x22
  __int64 v97; // x23
  const MethodInfo *v98; // x3
  int32_t v99; // w2
  FollowerSelectItemListViewManager_o *v100; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v101; // x21
  int32_t v102; // w1
  CommonUI_o *v103; // x20
  System_String_o *v104; // x21
  FollowerRootComponent___c_c *v105; // x8
  struct FollowerRootComponent___c_StaticFields *static_fields; // x9
  System_Action_o *_9__60_0; // x23
  System_String_o *v108; // x22
  Il2CppObject *v109; // x24
  struct FollowerRootComponent___c_StaticFields *v110; // x0
  System_String_array **v111; // x2
  System_String_array **v112; // x3
  System_Boolean_array **v113; // x4
  System_Int32_array **v114; // x5
  System_Int32_array *v115; // x6
  System_Int32_array *v116; // x7
  CommonUI_o *v117; // x20
  System_Action_o *v118; // x21
  __int64 v119; // x0
  int v120; // [xsp+30h] [xbp-70h] BYREF
  int32_t lv; // [xsp+34h] [xbp-6Ch] BYREF
  System_String_o *detail; // [xsp+38h] [xbp-68h] BYREF
  System_String_o *name; // [xsp+40h] [xbp-60h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+48h] [xbp-58h] BYREF
  System_String_o *v125; // [xsp+50h] [xbp-50h] BYREF
  System_String_o *v126; // [xsp+58h] [xbp-48h] BYREF
  SkillInfo_array *v127; // [xsp+68h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v128; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v129; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v130; // 0:x0.16

  if ( (byte_4186A08 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_B2C35C(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, v7);
    sub_B2C35C(&CommonConfirmDialog_ClickDelegate_TypeInfo, v8);
    sub_B2C35C(&Method_DataManager_GetMasterData_SkillLvMaster___, v9);
    sub_B2C35C(&Method_DataManager_GetMasterData_SkillMaster___, v10);
    sub_B2C35C(&Method_DataManager_GetMaster_SkillLvMaster___, v11);
    sub_B2C35C(&Method_DataManager_GetMaster_SkillMaster___, v12);
    sub_B2C35C(&DataManager_TypeInfo, v13);
    sub_B2C35C(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v14);
    sub_B2C35C(&FollowerListRequest_TypeInfo, v15);
    sub_B2C35C(&Method_FollowerRootComponent_EndCloseTutorialArrow__, v16);
    sub_B2C35C(&Method_FollowerRootComponent_EndRefreshConfirm__, v17);
    sub_B2C35C(&Method_FollowerRootComponent_EndRefreshRest__, v18);
    sub_B2C35C(&Method_FollowerRootComponent_OnSelectFollowerItem__, v19);
    sub_B2C35C(&FollowerRootComponent_TypeInfo, v20);
    sub_B2C35C(&int_TypeInfo, v21);
    sub_B2C35C(&LocalizationManager_TypeInfo, v22);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v23);
    sub_B2C35C(&PartyOrganizationUtility_TypeInfo, v24);
    sub_B2C35C(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v25);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v27);
    sub_B2C35C(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v28);
    sub_B2C35C(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v29);
    sub_B2C35C(&SoundManager_TypeInfo, v30);
    sub_B2C35C(&Method_FollowerRootComponent___c__OnSelectFollowerItem_b__60_0__, v31);
    sub_B2C35C(&FollowerRootComponent___c_TypeInfo, v32);
    sub_B2C35C(&StringLiteral_6398/*"FOLLOWER_SELECT_REFRESH_TITLE"*/, v33);
    sub_B2C35C(&StringLiteral_8729/*"MENU_SELECT_ITEM"*/, v34);
    sub_B2C35C(&StringLiteral_8738/*"MENU_SHOW_SUPPORT"*/, v35);
    sub_B2C35C(&StringLiteral_6395/*"FOLLOWER_SELECT_REFRESH_MESSAGE"*/, v36);
    sub_B2C35C(&StringLiteral_80/*" "*/, v37);
    sub_B2C35C(&StringLiteral_6396/*"FOLLOWER_SELECT_REFRESH_REST_MESSAGE"*/, v38);
    sub_B2C35C(&StringLiteral_10350/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_EXPIRED"*/, v39);
    sub_B2C35C(&StringLiteral_8632/*"MASTER_EQSKILL_LV_TXT"*/, v40);
    sub_B2C35C(&StringLiteral_2518/*"BATTLE_SKILLCHARGETURN"*/, v41);
    sub_B2C35C(&StringLiteral_1/*""*/, v42);
    sub_B2C35C(&StringLiteral_6397/*"FOLLOWER_SELECT_REFRESH_REST_TITLE"*/, v43);
    byte_4186A08 = 1;
  }
  v127 = 0LL;
  v126 = 0LL;
  skillInfoList = 0LL;
  v125 = 0LL;
  detail = 0LL;
  name = 0LL;
  if ( this->fields.state == 3 )
  {
    this->fields.selectItemNum = n;
    switch ( kind )
    {
      case 1:
        if ( this->fields.tutorialState )
          goto LABEL_94;
        operationItemListViewManager = this->fields.operationItemListViewManager;
        if ( !operationItemListViewManager )
          goto LABEL_202;
        operationItemListViewManager = FollowerSelectItemListViewManager__GetItem(
                                         (FollowerSelectItemListViewManager_o *)operationItemListViewManager,
                                         n,
                                         0LL);
        if ( !operationItemListViewManager )
          goto LABEL_202;
        v93 = (FollowerSelectItemListViewItem_o *)operationItemListViewManager;
        if ( *((_BYTE *)operationItemListViewManager + 168)
          || FollowerSelectItemListViewItem__get_SvtId(
               (FollowerSelectItemListViewItem_o *)operationItemListViewManager,
               0LL) <= 0 )
        {
          goto LABEL_161;
        }
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(0, 0LL);
        FollowerRootComponent__SelectShowServant(this, v93, v94);
        return;
      case 2:
      case 3:
      case 4:
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(0, 0LL);
        operationItemListViewManager = this->fields.operationItemListViewManager;
        if ( !operationItemListViewManager )
          goto LABEL_202;
        operationItemListViewManager = FollowerSelectItemListViewManager__GetItem(
                                         (FollowerSelectItemListViewManager_o *)operationItemListViewManager,
                                         this->fields.selectItemNum,
                                         0LL);
        v57 = kind == 3 ? 1LL : 2LL * (kind == 4);
        if ( !operationItemListViewManager )
          goto LABEL_202;
        operationItemListViewManager = (void *)FollowerSelectItemListViewItem__GetSkillInfo(
                                                 (FollowerSelectItemListViewItem_o *)operationItemListViewManager,
                                                 &v127,
                                                 0LL);
        if ( !v127 )
          goto LABEL_202;
        if ( (unsigned int)v57 >= v127->max_length )
          goto LABEL_203;
        v58 = v127->m_Items[v57];
        if ( !v58 || v58->fields.id < 1 || v58->fields.lv < 1 )
          goto LABEL_165;
        operationItemListViewManager = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !operationItemListViewManager )
          goto LABEL_202;
        operationItemListViewManager = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)operationItemListViewManager,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SkillMaster___);
        if ( !operationItemListViewManager )
          goto LABEL_202;
        Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)operationItemListViewManager,
                                    v58->fields.id,
                                    (const MethodInfo_24E40D0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        operationItemListViewManager = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !operationItemListViewManager )
          goto LABEL_202;
        operationItemListViewManager = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)operationItemListViewManager,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SkillLvMaster___);
        if ( !operationItemListViewManager )
          goto LABEL_202;
        operationItemListViewManager = SkillLvMaster__GetEntity(
                                         (SkillLvMaster_o *)operationItemListViewManager,
                                         v58->fields.id,
                                         v58->fields.lv,
                                         0LL);
        if ( !Entity )
          goto LABEL_202;
        v60 = operationItemListViewManager;
        SkillEntity__getSkillMessageInfo(Entity, &v126, &v125, v58->fields.lv, 0LL);
        v61 = v126;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v62 = LocalizationManager__Get((System_String_o *)StringLiteral_8632/*"MASTER_EQSKILL_LV_TXT"*/, 0LL);
        lv = v58->fields.lv;
        v63 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv);
        v64 = System_String__Format(v62, v63, 0LL);
        v126 = System_String__Concat_44307816(v61, (System_String_o *)StringLiteral_80/*" "*/, v64, 0LL);
        operationItemListViewManager = LocalizationManager__Get((System_String_o *)StringLiteral_2518/*"BATTLE_SKILLCHARGETURN"*/, 0LL);
        if ( !v60 )
          goto LABEL_202;
        v65 = (System_String_o *)operationItemListViewManager;
        v120 = v60[6];
        v66 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v120);
        v67 = System_String__Format(v65, v66, 0LL);
        tutorialMode = this->fields.tutorialMode;
        v69 = v67;
        operationItemListViewManager = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !operationItemListViewManager )
          goto LABEL_202;
        v54 = v126;
        v55 = v125;
        if ( tutorialMode == 3 )
        {
          v56 = v69;
LABEL_55:
          CommonUI__OpenDetailLongInfoDialogOnFade((CommonUI_o *)operationItemListViewManager, v54, v56, v55, 0LL);
        }
        else
        {
          v56 = v69;
LABEL_150:
          CommonUI__OpenDetailLongInfoDialog((CommonUI_o *)operationItemListViewManager, v54, v56, v55, 1, 0, 0LL);
        }
        goto LABEL_165;
      case 5:
        if ( !this->fields.tutorialState )
        {
          operationItemListViewManager = this->fields.operationItemListViewManager;
          if ( !operationItemListViewManager )
            goto LABEL_202;
          operationItemListViewManager = FollowerSelectItemListViewManager__GetItem(
                                           (FollowerSelectItemListViewManager_o *)operationItemListViewManager,
                                           n,
                                           0LL);
          if ( !operationItemListViewManager )
            goto LABEL_202;
          v95 = operationItemListViewManager;
          v84 = SoundManager_TypeInfo;
          if ( !v95[168] )
          {
            if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) == 0 )
              goto LABEL_178;
LABEL_176:
            if ( !v84->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(v84);
LABEL_178:
            SoundManager__playSystemSe(0, 0LL);
            operationItemListViewManager = this->fields.myFSM;
            if ( operationItemListViewManager )
            {
              v88 = &StringLiteral_8738/*"MENU_SHOW_SUPPORT"*/;
              goto LABEL_180;
            }
            goto LABEL_202;
          }
          if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 )
          {
LABEL_162:
            if ( !v84->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(v84);
          }
LABEL_164:
          SoundManager__playSystemSe(2, 0LL);
          goto LABEL_165;
        }
        v83 = this->fields.tutorialMode;
        if ( v83 == 3 )
        {
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(2, 0LL);
LABEL_173:
          v100 = this->fields.operationItemListViewManager;
          v101 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_B2C42C(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
          FollowerSelectItemListViewManager_CallbackFunc___ctor(
            v101,
            (Il2CppObject *)this,
            Method_FollowerRootComponent_OnSelectFollowerItem__,
            0LL);
          if ( !v100 )
            goto LABEL_202;
          v102 = 4;
          goto LABEL_167;
        }
        if ( v83 == 2 )
        {
          v84 = SoundManager_TypeInfo;
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
            goto LABEL_178;
          goto LABEL_176;
        }
        return;
      case 6:
        if ( !this->fields.tutorialState )
        {
          operationItemListViewManager = this->fields.operationItemListViewManager;
          if ( !operationItemListViewManager )
            goto LABEL_202;
          operationItemListViewManager = FollowerSelectItemListViewManager__GetItem(
                                           (FollowerSelectItemListViewManager_o *)operationItemListViewManager,
                                           n,
                                           0LL);
          if ( !operationItemListViewManager )
            goto LABEL_202;
          v75 = (FollowerSelectItemListViewItem_o *)operationItemListViewManager;
          if ( !FollowerSelectItemListViewItem__get_ServantLeader(
                  (FollowerSelectItemListViewItem_o *)operationItemListViewManager,
                  0LL) )
            goto LABEL_151;
          operationItemListViewManager = FollowerSelectItemListViewItem__get_ServantLeader(v75, 0LL);
          if ( !operationItemListViewManager )
            goto LABEL_202;
          v77 = *((_QWORD *)operationItemListViewManager + 6);
          v76 = *((_QWORD *)operationItemListViewManager + 7);
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v128.fields.currentCryptoKey = v77;
          *(_QWORD *)&v128.fields.fakeValue = v76;
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v128, 0LL) >= 1 )
          {
            operationItemListViewManager = FollowerSelectItemListViewItem__get_ServantLeader(v75, 0LL);
            if ( !operationItemListViewManager )
              goto LABEL_202;
            if ( !*((_QWORD *)operationItemListViewManager + 18) )
              goto LABEL_161;
            operationItemListViewManager = FollowerSelectItemListViewItem__get_ServantLeader(v75, 0LL);
            if ( !operationItemListViewManager )
              goto LABEL_202;
            v78 = *((_QWORD *)operationItemListViewManager + 18);
            if ( !v78 )
              goto LABEL_202;
            v80 = *(_QWORD *)(v78 + 56);
            v79 = *(_QWORD *)(v78 + 64);
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v129.fields.currentCryptoKey = v80;
            *(_QWORD *)&v129.fields.fakeValue = v79;
            if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v129, 0LL) < 1 )
              goto LABEL_161;
            operationItemListViewManager = FollowerSelectItemListViewItem__get_ServantLeader(v75, 0LL);
            if ( !operationItemListViewManager )
              goto LABEL_202;
            if ( ServantLeaderInfo__IsHideEquip((ServantLeaderInfo_o *)operationItemListViewManager, 0LL) )
              goto LABEL_161;
            operationItemListViewManager = FollowerSelectItemListViewItem__get_ServantLeader(v75, 0LL);
            if ( !operationItemListViewManager )
              goto LABEL_202;
            EquipInfo = (EquipTargetInfo_o *)*((_QWORD *)operationItemListViewManager + 18);
            if ( !EquipInfo )
            {
LABEL_161:
              v84 = SoundManager_TypeInfo;
              if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
                goto LABEL_164;
              goto LABEL_162;
            }
          }
          else
          {
LABEL_151:
            EquipInfo = FollowerSelectItemListViewItem__get_EquipInfo(v75, 0LL);
            if ( !EquipInfo )
              goto LABEL_161;
          }
          v97 = *(_QWORD *)&EquipInfo->fields.svtId.fields.currentCryptoKey;
          v96 = *(_QWORD *)&EquipInfo->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v130.fields.currentCryptoKey = v97;
          *(_QWORD *)&v130.fields.fakeValue = v96;
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v130, 0LL) >= 1 )
          {
            if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !SoundManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
            }
            SoundManager__playSystemSe(0, 0LL);
            if ( FollowerSelectItemListViewItem__get_FollowerType(v75, 0LL) == 1 )
            {
              v99 = 13;
            }
            else if ( FollowerSelectItemListViewItem__get_FollowerType(v75, 0LL) == 5 )
            {
              v99 = 14;
            }
            else if ( v75->fields.isNpc )
            {
              v99 = 19;
            }
            else
            {
              v99 = 16;
            }
            FollowerRootComponent__SelectShowServantEquip(this, EquipInfo, v99, v98);
            return;
          }
          goto LABEL_161;
        }
LABEL_94:
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(2, 0LL);
        v82 = this->fields.tutorialMode;
        if ( v82 == 3 )
          goto LABEL_173;
        if ( v82 == 2 )
          goto LABEL_165;
        return;
      case 7:
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(0, 0LL);
        v70 = FollowerListRequest_TypeInfo;
        if ( (BYTE3(FollowerListRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !FollowerListRequest_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FollowerListRequest_TypeInfo);
        }
        if ( FollowerListRequest__checkRefreshRate((const MethodInfo *)v70) )
        {
          commonConfirmDialog = this->fields.commonConfirmDialog;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v72 = LocalizationManager__Get((System_String_o *)StringLiteral_6398/*"FOLLOWER_SELECT_REFRESH_TITLE"*/, 0LL);
          v73 = LocalizationManager__Get((System_String_o *)StringLiteral_6395/*"FOLLOWER_SELECT_REFRESH_MESSAGE"*/, 0LL);
          v74 = (CommonConfirmDialog_ClickDelegate_o *)sub_B2C42C(CommonConfirmDialog_ClickDelegate_TypeInfo);
          CommonConfirmDialog_ClickDelegate___ctor(
            v74,
            (Il2CppObject *)this,
            Method_FollowerRootComponent_EndRefreshConfirm__,
            0LL);
          operationItemListViewManager = FollowerRootComponent_TypeInfo;
          if ( (BYTE3(FollowerRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !FollowerRootComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(FollowerRootComponent_TypeInfo);
          }
          if ( commonConfirmDialog )
          {
            CommonConfirmDialog__Open_17889612(
              commonConfirmDialog,
              v72,
              v73,
              1,
              v74,
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
          Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v90 = LocalizationManager__Get((System_String_o *)StringLiteral_6397/*"FOLLOWER_SELECT_REFRESH_REST_TITLE"*/, 0LL);
          v91 = LocalizationManager__Get((System_String_o *)StringLiteral_6396/*"FOLLOWER_SELECT_REFRESH_REST_MESSAGE"*/, 0LL);
          v92 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
          System_Action___ctor(v92, (Il2CppObject *)this, Method_FollowerRootComponent_EndRefreshRest__, 0LL);
          if ( Instance )
          {
            CommonUI__OpenNotificationDialog(Instance, v90, v91, v92, -1, 0, 0, 0, 0, 0, 1, 0, 0LL, 0LL);
            return;
          }
        }
        goto LABEL_202;
      case 8:
      case 9:
      case 10:
      case 11:
      case 12:
        operationItemListViewManager = this->fields.operationItemListViewManager;
        if ( !operationItemListViewManager )
          goto LABEL_202;
        operationItemListViewManager = FollowerSelectItemListViewManager__GetItem(
                                         (FollowerSelectItemListViewManager_o *)operationItemListViewManager,
                                         n,
                                         0LL);
        v45 = (unsigned int)(kind - 9);
        v46 = (unsigned int)v45 < 4 ? v45 + 1 : 0LL;
        if ( !operationItemListViewManager )
          goto LABEL_202;
        operationItemListViewManager = (void *)FollowerSelectItemListViewItem__GetAppendSkillInfo(
                                                 (FollowerSelectItemListViewItem_o *)operationItemListViewManager,
                                                 &skillInfoList,
                                                 *((_BYTE *)operationItemListViewManager + 168),
                                                 0LL);
        if ( !skillInfoList )
          goto LABEL_202;
        if ( (unsigned int)v46 >= skillInfoList->max_length )
        {
LABEL_203:
          v119 = sub_B2C460(operationItemListViewManager);
          sub_B2C400(v119, 0LL);
        }
        v47 = skillInfoList->m_Items[v46];
        if ( !v47 || v47->fields.id < 1 || v47->fields.lv < 1 )
          goto LABEL_161;
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(0, 0LL);
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        operationItemListViewManager = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_SkillMaster___);
        if ( !operationItemListViewManager )
          goto LABEL_202;
        v48 = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                 (DataMasterBase_WarMaster__WarEntity__int__o *)operationItemListViewManager,
                                 v47->fields.id,
                                 (const MethodInfo_24E40D0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        operationItemListViewManager = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_SkillLvMaster___);
        if ( !operationItemListViewManager )
          goto LABEL_202;
        operationItemListViewManager = SkillLvMaster__GetEntity(
                                         (SkillLvMaster_o *)operationItemListViewManager,
                                         v47->fields.id,
                                         v47->fields.lv,
                                         0LL);
        if ( !v48 )
          goto LABEL_202;
        SkillEntity__getSkillMessageInfo(v48, &name, &detail, v47->fields.lv, 0LL);
        v49 = name;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v50 = LocalizationManager__Get((System_String_o *)StringLiteral_8632/*"MASTER_EQSKILL_LV_TXT"*/, 0LL);
        lv = v47->fields.lv;
        v51 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv);
        v52 = System_String__Format(v50, v51, 0LL);
        name = System_String__Concat_44307816(v49, (System_String_o *)StringLiteral_80/*" "*/, v52, 0LL);
        v53 = this->fields.tutorialMode;
        operationItemListViewManager = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !operationItemListViewManager )
          goto LABEL_202;
        v55 = detail;
        v54 = name;
        v56 = (System_String_o *)StringLiteral_1/*""*/;
        if ( v53 != 3 )
          goto LABEL_150;
        goto LABEL_55;
      default:
        operationItemListViewManager = this->fields.operationItemListViewManager;
        if ( !operationItemListViewManager )
          goto LABEL_202;
        operationItemListViewManager = FollowerSelectItemListViewManager__GetItem(
                                         (FollowerSelectItemListViewManager_o *)operationItemListViewManager,
                                         n,
                                         0LL);
        if ( !operationItemListViewManager )
          goto LABEL_202;
        v85 = operationItemListViewManager;
        if ( FollowerSelectItemListViewItem__get_SvtId(
               (FollowerSelectItemListViewItem_o *)operationItemListViewManager,
               0LL) < 1
          || v85[203]
          || v85[254] )
        {
          goto LABEL_161;
        }
        operationItemListViewManager = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
        if ( !operationItemListViewManager )
          goto LABEL_202;
        if ( !*((_BYTE *)operationItemListViewManager + 140) )
          goto LABEL_121;
        v86 = PartyOrganizationUtility_TypeInfo;
        if ( (BYTE3(PartyOrganizationUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
          v86 = PartyOrganizationUtility_TypeInfo;
        }
        if ( !UnityEngine_PlayerPrefs__GetInt(v86->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0, 0LL) )
          goto LABEL_121;
        if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
        }
        operationItemListViewManager = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !operationItemListViewManager )
          goto LABEL_202;
        if ( PartyOrganizationUtility__IsAvailableFriendshipUpItem(
               (PartyOrganizationUtility_o *)operationItemListViewManager,
               0LL) )
        {
LABEL_121:
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(0, 0LL);
          if ( !this->fields.tutorialState )
          {
LABEL_129:
            operationItemListViewManager = this->fields.myFSM;
            if ( operationItemListViewManager )
            {
              v88 = &StringLiteral_8729/*"MENU_SELECT_ITEM"*/;
LABEL_180:
              PlayMakerFSM__SendEvent((PlayMakerFSM_o *)operationItemListViewManager, (System_String_o *)*v88, 0LL);
              return;
            }
LABEL_202:
            sub_B2C434(operationItemListViewManager, *(_QWORD *)&kind);
          }
          v87 = this->fields.tutorialMode;
          if ( v87 == 3 )
          {
            this->fields.state = 4;
            v117 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v118 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
            System_Action___ctor(v118, (Il2CppObject *)this, Method_FollowerRootComponent_EndCloseTutorialArrow__, 0LL);
            if ( !v117 )
              goto LABEL_202;
            CommonUI__CloseTutorialArrowMark(v117, v118, 0LL);
          }
          else if ( v87 == 2 )
          {
            operationItemListViewManager = this->fields.titleInfo;
            if ( !operationItemListViewManager )
              goto LABEL_202;
            TitleInfoControl__setBackBtnEnable((TitleInfoControl_o *)operationItemListViewManager, 1, 0LL);
            goto LABEL_129;
          }
        }
        else
        {
          v103 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          operationItemListViewManager = LocalizationManager__Get((System_String_o *)StringLiteral_10350/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_EXPIRED"*/, 0LL);
          v104 = (System_String_o *)operationItemListViewManager;
          v105 = FollowerRootComponent___c_TypeInfo;
          if ( (BYTE3(FollowerRootComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !FollowerRootComponent___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(FollowerRootComponent___c_TypeInfo);
            v105 = FollowerRootComponent___c_TypeInfo;
          }
          static_fields = v105->static_fields;
          _9__60_0 = static_fields->__9__60_0;
          v108 = (System_String_o *)StringLiteral_1/*""*/;
          if ( !_9__60_0 )
          {
            if ( (BYTE3(v105->vtable._0_Equals.methodPtr) & 4) != 0 && !v105->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v105);
              static_fields = FollowerRootComponent___c_TypeInfo->static_fields;
            }
            v109 = (Il2CppObject *)static_fields->__9;
            _9__60_0 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
            System_Action___ctor(_9__60_0, v109, Method_FollowerRootComponent___c__OnSelectFollowerItem_b__60_0__, 0LL);
            v110 = FollowerRootComponent___c_TypeInfo->static_fields;
            v110->__9__60_0 = _9__60_0;
            sub_B2C2F8(
              (BattleServantConfConponent_o *)&v110->__9__60_0,
              (System_Int32_array **)_9__60_0,
              v111,
              v112,
              v113,
              v114,
              v115,
              v116);
          }
          if ( !v103 )
            goto LABEL_202;
          CommonUI__OpenNotificationDialog(v103, v108, v104, _9__60_0, -1, 0, 0, 0, 0, 0, 0, 0, 0LL, 0LL);
LABEL_165:
          v100 = this->fields.operationItemListViewManager;
          v101 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_B2C42C(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
          FollowerSelectItemListViewManager_CallbackFunc___ctor(
            v101,
            (Il2CppObject *)this,
            Method_FollowerRootComponent_OnSelectFollowerItem__,
            0LL);
          if ( !v100 )
            goto LABEL_202;
          v102 = 2;
LABEL_167:
          FollowerSelectItemListViewManager__SetMode(v100, v102, v101, 0LL);
        }
        break;
    }
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
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  int32_t questId; // w20
  BalanceConfig_c *v13; // x0
  QuestPhaseMaster_o *v14; // x20
  struct BattleSetupInfo_o *v15; // x8
  int32_t FormationBgmId; // w0
  int32_t v17; // w20
  System_String_o *BgmFileName; // x20
  char v19; // w21
  struct BattleSetupInfo_o *v20; // x8
  QuestMaster_o *v21; // x20
  struct BattleSetupInfo_o *v22; // x8
  System_String_o *v23; // x0
  System_String_o *MainBgmName; // x19
  System_String_o *v25; // x0
  System_Int32_array **BgmName; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  v2 = this;
  if ( (byte_41869F1 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    sub_B2C35C(&BgmManager_TypeInfo, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestMaster___, v4);
    sub_B2C35C(&Method_DataManager_GetMaster_BgmMaster___, v5);
    sub_B2C35C(&Method_DataManager_GetMaster_QuestPhaseMaster___, v6);
    sub_B2C35C(&DataManager_TypeInfo, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_B2C35C(&SoundManager_TypeInfo, v9);
    this = (FollowerRootComponent_o *)sub_B2C35C(&StringLiteral_1/*""*/, v10);
    byte_41869F1 = 1;
  }
  entity = 0LL;
  battleSetupInfo = v2->fields.battleSetupInfo;
  if ( !battleSetupInfo )
    goto LABEL_67;
  questId = battleSetupInfo->fields.questId;
  v13 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v13 = BalanceConfig_TypeInfo;
  }
  if ( questId != v13->static_fields->PrologueQuestId )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (FollowerRootComponent_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( !v2->fields.battleSetupInfo )
      goto LABEL_67;
    v14 = (QuestPhaseMaster_o *)this;
    this = (FollowerRootComponent_o *)BattleSetupInfo__TargetQuestId(v2->fields.battleSetupInfo, 0LL);
    v15 = v2->fields.battleSetupInfo;
    if ( !v15 || !v14 )
      goto LABEL_67;
    this = (FollowerRootComponent_o *)QuestPhaseMaster__TryGetEntity(
                                        v14,
                                        &entity,
                                        (int32_t)this,
                                        v15->fields.questPhase,
                                        0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      this = (FollowerRootComponent_o *)entity;
      if ( !entity )
        goto LABEL_67;
      FormationBgmId = QuestPhaseEntity__GetFormationBgmId(entity, 0LL);
      if ( (FormationBgmId & 0x80000000) != 0 )
      {
        BgmFileName = 0LL;
      }
      else
      {
        v17 = FormationBgmId;
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        this = (FollowerRootComponent_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_BgmMaster___);
        if ( !this )
          goto LABEL_67;
        BgmFileName = BgmMaster__GetBgmFileName((BgmMaster_o *)this, v17, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      }
      this = (FollowerRootComponent_o *)entity;
      if ( !entity )
        goto LABEL_67;
      this = (FollowerRootComponent_o *)QuestPhaseEntity__IsNonStopEndBgm(entity, 0LL);
      v19 = (char)this;
    }
    else
    {
      v19 = 0;
      BgmFileName = 0LL;
    }
    v20 = v2->fields.battleSetupInfo;
    if ( !v20 )
      goto LABEL_67;
    if ( !v20->fields.isScriptBeforePartySelect )
      goto LABEL_37;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    if ( !SoundManager__isPlayBgm(0LL, 0LL) )
      goto LABEL_37;
    if ( !System_String__IsNullOrEmpty(BgmFileName, 0LL) )
    {
      if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
      if ( !BgmManager__IsPlayBgm(BgmFileName, 0LL) )
      {
LABEL_37:
        if ( !System_String__IsNullOrEmpty(BgmFileName, 0LL) )
        {
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          if ( !(v19 & 1 | !SoundManager__isPlayBgm(0LL, 0LL)) )
          {
            if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !SoundManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
            }
            BgmName = (System_Int32_array **)SoundManager__getBgmName(0LL);
            v2->fields.backupBgmName = (struct System_String_o *)BgmName;
            sub_B2C2F8((BattleServantConfConponent_o *)&v2->fields.backupBgmName, BgmName, v27, v28, v29, v30, v31, v32);
          }
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          v25 = BgmFileName;
          goto LABEL_65;
        }
        this = (FollowerRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( this )
        {
          this = (FollowerRootComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestMaster___);
          if ( v2->fields.battleSetupInfo )
          {
            v21 = (QuestMaster_o *)this;
            this = (FollowerRootComponent_o *)BattleSetupInfo__TargetQuestId(v2->fields.battleSetupInfo, 0LL);
            if ( v21 )
            {
              this = (FollowerRootComponent_o *)QuestMaster__getQuestEntity(v21, (int32_t)this, 0LL);
              v22 = v2->fields.battleSetupInfo;
              if ( v22 )
              {
                if ( this )
                {
                  v23 = QuestEntity__GetBgmName((QuestEntity_o *)this, v22->fields.warId, 0LL);
                  if ( !v23
                    || (MainBgmName = v23, System_String__op_Equality(v23, (System_String_o *)StringLiteral_1/*""*/, 0LL)) )
                  {
                    if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !BgmManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
                    }
                    MainBgmName = BgmManager__GetMainBgmName(0LL);
                  }
                  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !SoundManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
                  }
                  v25 = MainBgmName;
LABEL_65:
                  SoundManager__playBgm(v25, 0LL);
                  return;
                }
              }
            }
          }
        }
LABEL_67:
        sub_B2C434(this, method);
      }
    }
  }
}


void __fastcall FollowerRootComponent__QuestHintDialogResetTemporarilyId(
        FollowerRootComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4186A0E & 1) == 0 )
  {
    sub_B2C35C(&QuestHintDialogOpenManager_TypeInfo, method);
    byte_4186A0E = 1;
  }
  if ( (BYTE3(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
  }
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
    sub_B2C434(operationItemListViewManager, method);
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
  FollowerListRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v9; // x1
  FollowerListRequest_o *v10; // x20
  const MethodInfo *v11; // x4
  struct BattleSetupInfo_o *battleSetupInfo; // x8

  if ( (byte_41869F9 & 1) == 0 )
  {
    sub_B2C35C(&Method_FollowerRootComponent_CallbackFollowerList__, method);
    sub_B2C35C(&Method_NetworkManager_getRequest_FollowerListRequest___, v3);
    sub_B2C35C(&NetworkManager_TypeInfo, v4);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_11079/*"REQUEST_OK"*/, v6);
    byte_41869F9 = 1;
  }
  v7 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v7,
    (Il2CppObject *)this,
    Method_FollowerRootComponent_CallbackFollowerList__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (FollowerListRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                 v7,
                                                                 (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_FollowerListRequest___);
  if ( !Request_WarBoardWallAttackRequest )
    goto LABEL_13;
  v10 = Request_WarBoardWallAttackRequest;
  if ( (((__int64 (__fastcall *)(FollowerListRequest_o *, Il2CppMethodPointer))Request_WarBoardWallAttackRequest->klass->vtable._7_checkExpirationDate.method)(
          Request_WarBoardWallAttackRequest,
          Request_WarBoardWallAttackRequest->klass->vtable._8_isBackgroundRequest.methodPtr) & 1) != 0 )
  {
    Request_WarBoardWallAttackRequest = (FollowerListRequest_o *)this->fields.myFSM;
    if ( Request_WarBoardWallAttackRequest )
    {
      PlayMakerFSM__SendEvent(
        (PlayMakerFSM_o *)Request_WarBoardWallAttackRequest,
        (System_String_o *)StringLiteral_11079/*"REQUEST_OK"*/,
        0LL);
      return;
    }
LABEL_13:
    sub_B2C434(Request_WarBoardWallAttackRequest, v9);
  }
  Request_WarBoardWallAttackRequest = (FollowerListRequest_o *)this->fields.battleSetupInfo;
  if ( !Request_WarBoardWallAttackRequest )
    goto LABEL_13;
  Request_WarBoardWallAttackRequest = (FollowerListRequest_o *)BattleSetupInfo__TargetQuestId(
                                                                 (BattleSetupInfo_o *)Request_WarBoardWallAttackRequest,
                                                                 0LL);
  battleSetupInfo = this->fields.battleSetupInfo;
  if ( !battleSetupInfo )
    goto LABEL_13;
  FollowerListRequest__beginRequest(
    v10,
    0,
    (int32_t)Request_WarBoardWallAttackRequest,
    battleSetupInfo->fields.questPhase,
    v11);
}


bool __fastcall FollowerRootComponent__ReturnBattleSetupMenu(FollowerRootComponent_o *this, const MethodInfo *method)
{
  FollowerRootComponent_o *v2; // x20
  struct BattleSetupInfo_o *battleSetupInfo; // x19

  v2 = this;
  if ( (byte_4186A04 & 1) == 0 )
  {
    this = (FollowerRootComponent_o *)sub_B2C35C(
                                        &Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__,
                                        method);
    byte_4186A04 = 1;
  }
  battleSetupInfo = v2->fields.battleSetupInfo;
  v2->fields.state = 5;
  if ( !battleSetupInfo )
    goto LABEL_8;
  if ( battleSetupInfo->fields.isChildFollower )
  {
    battleSetupInfo->fields.followerId = 0LL;
    battleSetupInfo = v2->fields.battleSetupInfo;
  }
  this = (FollowerRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !this )
LABEL_8:
    sub_B2C434(this, method);
  AvalonSceneManager__pushScene((AvalonSceneManager_o *)this, 40, 1, (Il2CppObject *)battleSetupInfo, 0LL);
  return 1;
}


bool __fastcall FollowerRootComponent__ReturnQuestMenu(FollowerRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *battleSetupInfo; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_String_o *backupBgmName; // x22
  AvalonSceneManager_o *Instance; // x0
  __int64 v15; // x1

  if ( (byte_4186A03 & 1) == 0 )
  {
    sub_B2C35C(&Method_AvalonSceneManager_UnloadScene_PartyOrganizationRootComponent___, method);
    sub_B2C35C(&RandomLimitCountManager_TypeInfo, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4);
    sub_B2C35C(&SoundManager_TypeInfo, v5);
    byte_4186A03 = 1;
  }
  battleSetupInfo = (Il2CppObject *)this->fields.battleSetupInfo;
  if ( !System_String__IsNullOrEmpty(this->fields.backupBgmName, 0LL) )
  {
    backupBgmName = this->fields.backupBgmName;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playBgm(backupBgmName, 0LL);
  }
  this->fields.battleSetupInfo = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.battleSetupInfo, 0LL, v7, v8, v9, v10, v11, v12);
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  if ( AvalonSceneManager__IsStackScene(Instance, 0LL) )
  {
    this->fields.state = 0;
    Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_19;
    AvalonSceneManager__popSceneRefresh(Instance, 1, battleSetupInfo, 0LL);
  }
  else
  {
    Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_19;
    AvalonSceneManager__transitionSceneRefresh(Instance, 34, 1, 0LL, 0, 0LL);
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
LABEL_19:
    sub_B2C434(Instance, v15);
  AvalonSceneManager__UnloadScene_PartyOrganizationRootComponent_(
    Instance,
    (const MethodInfo_1725308 *)Method_AvalonSceneManager_UnloadScene_PartyOrganizationRootComponent___);
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
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
  __int64 v8; // x1
  int32_t state; // w8
  void *operationItemListViewManager; // x0
  FollowerSelectItemListViewManager_o *v11; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v12; // x21
  FollowerSelectItemListViewManager_o *v13; // x20
  FollowerSelectItemListViewManager_c *v14; // x0
  FollowerSelectItemListViewManager_o *v15; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v16; // x21
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  FollowerQuestInfomationDraw_o *followerQuestInfomationDraw; // x20
  QuestRestrictionInfo_o *questRestrictionInfo; // x21
  const MethodInfo *v20; // x4
  CommonUI_o *v21; // x20

  if ( (byte_41869F7 & 1) == 0 )
  {
    sub_B2C35C(&AvalonSceneManager_TypeInfo, method);
    sub_B2C35C(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, v3);
    sub_B2C35C(&Method_FollowerRootComponent_OnSelectFollowerItem__, v4);
    sub_B2C35C(&RandomLimitCountManager_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B2C35C(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v7);
    sub_B2C35C(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v8);
    byte_41869F7 = 1;
  }
  state = this->fields.state;
  this->fields.state = 3;
  if ( state == 5 )
  {
    if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    }
    RandomLimitCountManager__set_EnableRandomLimitCount(0, 0LL);
    RandomLimitCountManager__set_EnableRandomLimitCount(1, 0LL);
    operationItemListViewManager = this->fields.operationItemListViewManager;
    if ( !operationItemListViewManager )
      goto LABEL_33;
    FollowerSelectItemListViewManager__ModifyList(
      (FollowerSelectItemListViewManager_o *)operationItemListViewManager,
      this->fields.friendPointUpVal,
      this->fields.friendPointUpMaxVal,
      0LL);
    v11 = this->fields.operationItemListViewManager;
    v12 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_B2C42C(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    FollowerSelectItemListViewManager_CallbackFunc___ctor(
      v12,
      (Il2CppObject *)this,
      Method_FollowerRootComponent_OnSelectFollowerItem__,
      0LL);
    if ( !v11 )
      goto LABEL_33;
    FollowerSelectItemListViewManager__SetMode(v11, 3, v12, 0LL);
    v13 = this->fields.operationItemListViewManager;
    if ( !v13 )
      goto LABEL_33;
    if ( !byte_4186A16 )
    {
      sub_B2C35C(&FollowerSelectItemListViewManager_TypeInfo, method);
      byte_4186A16 = 1;
    }
    v14 = FollowerSelectItemListViewManager_TypeInfo;
    if ( (BYTE3(FollowerSelectItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
      v14 = FollowerSelectItemListViewManager_TypeInfo;
    }
    FollowerSelectItemListViewManager__ChangeClass(v13, v14->static_fields->followerClassId, 0LL);
    operationItemListViewManager = this->fields.operationItemListViewManager;
    if ( !operationItemListViewManager )
LABEL_33:
      sub_B2C434(operationItemListViewManager, method);
    operationItemListViewManager = (void *)FollowerSelectItemListViewManager__GetDisplayItemNum(
                                             (FollowerSelectItemListViewManager_o *)operationItemListViewManager,
                                             0LL);
    if ( (int)operationItemListViewManager >= 3 )
    {
      operationItemListViewManager = this->fields.operationItemListViewManager;
      if ( !operationItemListViewManager )
        goto LABEL_33;
      ListViewManager__JumpItem((ListViewManager_o *)operationItemListViewManager, this->fields.selectItemNum, 0LL);
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
      0LL);
    v15 = this->fields.operationItemListViewManager;
    v16 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_B2C42C(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    FollowerSelectItemListViewManager_CallbackFunc___ctor(
      v16,
      (Il2CppObject *)this,
      Method_FollowerRootComponent_OnSelectFollowerItem__,
      0LL);
    if ( !v15 )
      goto LABEL_33;
    FollowerSelectItemListViewManager__SetMode(v15, 2, v16, 0LL);
  }
  battleSetupInfo = this->fields.battleSetupInfo;
  if ( !battleSetupInfo )
    goto LABEL_33;
  followerQuestInfomationDraw = this->fields.followerQuestInfomationDraw;
  questRestrictionInfo = battleSetupInfo->fields.questRestrictionInfo;
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  operationItemListViewManager = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !operationItemListViewManager || !followerQuestInfomationDraw )
    goto LABEL_33;
  FollowerQuestInfomationDraw__SetInfomation(
    followerQuestInfomationDraw,
    questRestrictionInfo,
    *((_DWORD *)operationItemListViewManager + 14),
    0LL,
    v20);
  operationItemListViewManager = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v21 = (CommonUI_o *)operationItemListViewManager;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !v21 )
    goto LABEL_33;
  CommonUI__maskFadein(v21, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
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

  if ( (byte_41869FD & 1) == 0 )
  {
    sub_B2C35C(&ServantStatusDialog_EndDelegate_TypeInfo, item);
    sub_B2C35C(&Method_FollowerRootComponent_EndShowServant__, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_41869FD = 1;
  }
  operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager
    || (ListViewManager__GetScrollView(
          operationItemListViewManager,
          &this->fields.openScroll,
          &this->fields.openOffset,
          0LL),
        operationItemListViewManager = (ListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        !item)
    || (v8 = (CommonUI_o *)operationItemListViewManager,
        ServantLeader = FollowerSelectItemListViewItem__get_ServantLeader(item, 0LL),
        v10 = (ServantStatusDialog_EndDelegate_o *)sub_B2C42C(ServantStatusDialog_EndDelegate_TypeInfo),
        ServantStatusDialog_EndDelegate___ctor(
          v10,
          (Il2CppObject *)this,
          Method_FollowerRootComponent_EndShowServant__,
          0LL),
        !v8) )
  {
    sub_B2C434(operationItemListViewManager, item);
  }
  CommonUI__OpenServantStatusDialog_17984076(v8, 5, ServantLeader, v10, 0LL);
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
  CommonUI_o *Instance; // x22
  ServantStatusDialog_EndDelegate_o *v11; // x23

  if ( (byte_4186A00 & 1) == 0 )
  {
    sub_B2C35C(&ServantStatusDialog_EndDelegate_TypeInfo, equipInfo);
    sub_B2C35C(&Method_FollowerRootComponent_EndShowServantEquip__, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    byte_4186A00 = 1;
  }
  operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager
    || (ListViewManager__GetScrollView(
          operationItemListViewManager,
          &this->fields.openScroll,
          &this->fields.openOffset,
          0LL),
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v11 = (ServantStatusDialog_EndDelegate_o *)sub_B2C42C(ServantStatusDialog_EndDelegate_TypeInfo),
        ServantStatusDialog_EndDelegate___ctor(
          v11,
          (Il2CppObject *)this,
          Method_FollowerRootComponent_EndShowServantEquip__,
          0LL),
        !Instance) )
  {
    sub_B2C434(operationItemListViewManager, equipInfo);
  }
  CommonUI__OpenServantEquipStatusDialog_17986440(Instance, statusKind, equipInfo, v11, 0LL, 0LL);
}


bool __fastcall FollowerRootComponent__SetFollowerBase(
        UISprite_o *sprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  FollowerRootComponent_c *v6; // x0
  UIAtlas_o *partyOrganizationAtlasCache; // x21

  if ( (byte_41869EE & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, spriteName);
    sub_B2C35C(&FollowerRootComponent_TypeInfo, v5);
    byte_41869EE = 1;
  }
  v6 = FollowerRootComponent_TypeInfo;
  if ( (BYTE3(FollowerRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FollowerRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerRootComponent_TypeInfo);
    v6 = FollowerRootComponent_TypeInfo;
  }
  partyOrganizationAtlasCache = v6->static_fields->partyOrganizationAtlasCache;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  return AtlasManager__SetGradeBase(sprite, spriteName, partyOrganizationAtlasCache, 0LL);
}


bool __fastcall FollowerRootComponent__StartBattleSetupMenu(FollowerRootComponent_o *this, const MethodInfo *method)
{
  FollowerRootComponent_o *v2; // x19
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  FollowerSelectItemListViewItem_o *Item; // x0
  struct BattleSetupInfo_o *v5; // x21
  FollowerSelectItemListViewItem_o *v6; // x20
  struct BattleSetupInfo_o *v7; // x21
  struct BattleSetupInfo_o *v8; // x8
  int32_t FollowerType; // w0
  const MethodInfo *v10; // x2
  Il2CppObject *v11; // x20

  v2 = this;
  if ( (byte_4186A05 & 1) == 0 )
  {
    this = (FollowerRootComponent_o *)sub_B2C35C(
                                        &Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__,
                                        method);
    byte_4186A05 = 1;
  }
  battleSetupInfo = v2->fields.battleSetupInfo;
  if ( !battleSetupInfo )
    goto LABEL_13;
  battleSetupInfo->fields.followerId = 0LL;
  method = (const MethodInfo *)(unsigned int)v2->fields.selectItemNum;
  if ( ((unsigned int)method & 0x80000000) == 0 )
  {
    this = (FollowerRootComponent_o *)v2->fields.operationItemListViewManager;
    if ( !this )
      goto LABEL_13;
    Item = FollowerSelectItemListViewManager__GetItem((FollowerSelectItemListViewManager_o *)this, (int32_t)method, 0LL);
    if ( Item )
    {
      v5 = v2->fields.battleSetupInfo;
      v6 = Item;
      this = (FollowerRootComponent_o *)FollowerSelectItemListViewItem__get_FollowerId(Item, 0LL);
      if ( v5 )
      {
        v5->fields.followerId = (int64_t)this;
        v7 = v2->fields.battleSetupInfo;
        this = (FollowerRootComponent_o *)FollowerSelectItemListViewItem__get_SelectClassId(v6, 0LL);
        if ( v7 )
        {
          v7->fields.followerClassId = (int)this;
          v8 = v2->fields.battleSetupInfo;
          if ( v8 )
          {
            v8->fields.followerSupportDeckId = v6->fields.supportDeckId;
            FollowerType = FollowerSelectItemListViewItem__get_FollowerType(v6, 0LL);
            FollowerRootComponent__setBattleSetupFollowType(v2, FollowerType, v10);
            goto LABEL_11;
          }
        }
      }
LABEL_13:
      sub_B2C434(this, method);
    }
  }
LABEL_11:
  v2->fields.state = 5;
  v11 = (Il2CppObject *)v2->fields.battleSetupInfo;
  this = (FollowerRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !this )
    goto LABEL_13;
  AvalonSceneManager__pushScene((AvalonSceneManager_o *)this, 40, 1, v11, 0LL);
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
  int64_t userId; // x22
  int v14; // w8
  unsigned int v15; // w23
  int64_t v16; // x24
  __int64 v17; // x8
  FollowerInfo_o **v18; // x24
  __int64 v19; // t1
  __int64 v20; // x25
  int64_t v21; // x22
  __int64 v22; // x8
  __int64 v23; // x23
  __int64 v24; // x8
  __int64 v25; // x21
  bool v26; // w21
  FollowerInfo_o *v28; // x21
  SupportInfoJump_c *v29; // x0
  SupportInfoJump_o *v30; // x20
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  __int64 v32; // x0
  UserGameEntity_o *v33; // [xsp+8h] [xbp-48h] BYREF
  UserGameEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4186A06 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_PickupUserFollowerMaster___, method);
    sub_B2C35C(&Method_DataManager_GetMaster_UserFollowerMaster___, v3);
    sub_B2C35C(&DataManager_TypeInfo, v4);
    sub_B2C35C(&Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long__TryGetSingleEntity__, v5);
    sub_B2C35C(
      &Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long__TryGetSingleEntity__,
      v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v7);
    sub_B2C35C(&SupportInfoJump_TypeInfo, v8);
    byte_4186A06 = 1;
  }
  entity = 0LL;
  v33 = 0LL;
  selectItemNum = (unsigned int)this->fields.selectItemNum;
  if ( (selectItemNum & 0x80000000) == 0 )
  {
    operationItemListViewManager = (int64_t)this->fields.operationItemListViewManager;
    if ( !operationItemListViewManager )
      goto LABEL_44;
    Item = FollowerSelectItemListViewManager__GetItem(
             (FollowerSelectItemListViewManager_o *)operationItemListViewManager,
             selectItemNum,
             0LL);
    if ( Item )
    {
      v12 = Item;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      operationItemListViewManager = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserFollowerMaster___);
      if ( !operationItemListViewManager )
        goto LABEL_44;
      operationItemListViewManager = DataMasterBase_UserGameMaster__UserGameEntity__long___TryGetSingleEntity(
                                       (DataMasterBase_UserGameMaster__UserGameEntity__long__o *)operationItemListViewManager,
                                       &entity,
                                       (const MethodInfo_24E43E0 *)Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long__TryGetSingleEntity__);
      if ( (operationItemListViewManager & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_44;
        userId = entity->fields.userId;
        if ( !userId )
          goto LABEL_44;
        v14 = *(_DWORD *)(userId + 24);
        if ( v14 >= 1 )
        {
          v15 = 0;
          while ( 1 )
          {
            if ( v15 >= v14 )
              goto LABEL_45;
            v16 = userId + 8LL * (int)v15;
            v19 = *(_QWORD *)(v16 + 32);
            v18 = (FollowerInfo_o **)(v16 + 32);
            v17 = v19;
            if ( !v19 )
              goto LABEL_44;
            v20 = *(_QWORD *)(v17 + 16);
            operationItemListViewManager = FollowerSelectItemListViewItem__get_FollowerId(v12, 0LL);
            if ( v20 == operationItemListViewManager )
              break;
            v14 = *(_DWORD *)(userId + 24);
            if ( (int)++v15 >= v14 )
              goto LABEL_19;
          }
          this->fields.state = 6;
          if ( v15 < *(_DWORD *)(userId + 24) )
          {
            v28 = *v18;
            v29 = SupportInfoJump_TypeInfo;
LABEL_40:
            v30 = (SupportInfoJump_o *)sub_B2C42C(v29);
            SupportInfoJump___ctor_31144360(v30, v28, 0, 1, 0LL);
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
                operationItemListViewManager = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
                if ( operationItemListViewManager )
                {
                  v26 = 1;
                  AvalonSceneManager__pushScene(
                    (AvalonSceneManager_o *)operationItemListViewManager,
                    60,
                    1,
                    (Il2CppObject *)v30,
                    0LL);
                  return v26;
                }
              }
            }
LABEL_44:
            sub_B2C434(operationItemListViewManager, selectItemNum);
          }
          goto LABEL_45;
        }
      }
LABEL_19:
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      operationItemListViewManager = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_PickupUserFollowerMaster___);
      if ( !operationItemListViewManager )
        goto LABEL_44;
      operationItemListViewManager = DataMasterBase_UserGameMaster__UserGameEntity__long___TryGetSingleEntity(
                                       (DataMasterBase_UserGameMaster__UserGameEntity__long__o *)operationItemListViewManager,
                                       &v33,
                                       (const MethodInfo_24E43E0 *)Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long__TryGetSingleEntity__);
      if ( (operationItemListViewManager & 1) != 0 )
      {
        if ( !v33 )
          goto LABEL_44;
        v21 = v33->fields.userId;
        if ( v21 )
        {
          v22 = *(_QWORD *)(v21 + 24);
          if ( v22 )
          {
            if ( (int)v22 >= 1 )
            {
              v23 = 0LL;
              while ( 1 )
              {
                if ( (unsigned int)v23 >= (unsigned int)v22 )
                  goto LABEL_45;
                v24 = *(_QWORD *)(v21 + 32 + 8 * v23);
                if ( !v24 )
                  goto LABEL_44;
                v25 = *(_QWORD *)(v24 + 16);
                operationItemListViewManager = FollowerSelectItemListViewItem__get_FollowerId(v12, 0LL);
                if ( v25 == operationItemListViewManager )
                  break;
                LODWORD(v22) = *(_DWORD *)(v21 + 24);
                ++v23;
                v26 = 0;
                if ( (int)v23 >= (int)v22 )
                  return v26;
              }
              this->fields.state = 6;
              if ( (unsigned int)v23 < *(_DWORD *)(v21 + 24) )
              {
                v28 = *(FollowerInfo_o **)(v21 + 32 + 8 * v23);
                v29 = SupportInfoJump_TypeInfo;
                goto LABEL_40;
              }
LABEL_45:
              v32 = sub_B2C460(operationItemListViewManager);
              sub_B2C400(v32, 0LL);
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
  int64_t Instance; // x0
  __int64 v15; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x20
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct BattleSetupInfo_o *v24; // x8
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  int32_t *p_friendPointUpVal; // x25
  EventCampaignMaster_o *v27; // x21
  EventQuestMaster_o *v28; // x22
  struct BattleSetupInfo_o *v29; // x8
  struct EventCampaignEntity_array *Data_29696660; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  struct BattleSetupInfo_o *v37; // x8
  int32_t i; // w20
  PartyOrganizationListViewItem_o *Member; // x0
  PartyOrganizationListViewItem_o *v40; // x21
  System_Int64_array *v41; // x22
  UserServantEntity_o *userServantEntity; // x8
  int32_t v43; // w21
  BalanceConfig_c *v44; // x0
  int32_t j; // w19
  PartyOrganizationListViewItem_o *v46; // x0
  PartyOrganizationListViewItem_o *v47; // x20
  System_Int64_array *v48; // x21
  UserServantEntity_o *v49; // x8
  int v50; // w20
  struct BattleSetupInfo_o *v51; // x8
  struct BattleSetupInfo_o *v52; // x8
  struct BattleSetupInfo_o *v53; // x8
  UserEventDeckMaster_o *v54; // x20
  struct BattleSetupInfo_o *v55; // x8
  int32_t eventId; // w22
  int64_t v57; // x21
  struct BattleSetupInfo_o *v58; // x8
  UserEventDeckEntity_o *v59; // x20
  int64_t v60; // x21
  int v61; // w8
  unsigned __int64 v62; // x22
  int64_t v63; // x26
  System_Int64_array *v64; // x23
  int32_t v65; // w24
  unsigned __int64 v66; // x22
  int64_t v67; // x26
  System_Int64_array *v68; // x23
  int v69; // w24
  struct BattleSetupInfo_o *v70; // x8
  int32_t k; // w20
  UserServantEntity_o *UserServant; // x0
  UserServantEntity_o *v73; // x21
  System_Int64_array *EquipList; // x23
  int32_t FriendPointUpVal; // w22
  BalanceConfig_c *v76; // x0
  int32_t m; // w19
  UserServantEntity_o *v78; // x0
  UserServantEntity_o *v79; // x20
  System_Int64_array *v80; // x22
  int32_t v81; // w21
  int32_t v82; // w21
  int32_t v83; // w21
  struct BattleSetupInfo_o *v84; // x8
  __int64 v85; // x0
  UserServantEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_41869FC & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventCampaignMaster___, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventQuestMaster___, v4);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserDeckMaster___, v5);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserEventDeckMaster___, v6);
    sub_B2C35C(&Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__TryGetEntity__, v7);
    sub_B2C35C(&LastUsedDeckNumberManager_TypeInfo, v8);
    sub_B2C35C(&NetworkManager_TypeInfo, v9);
    sub_B2C35C(&OptionManager_TypeInfo, v10);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B2C35C(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v12);
    sub_B2C35C(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v13);
    byte_41869FC = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_152;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  Instance = OptionManager__GetAutoSelectParty(0LL);
  if ( (Instance & 1) == 0 )
    goto LABEL_10;
  Instance = (int64_t)this->fields.battleSetupInfo;
  if ( !Instance )
    goto LABEL_152;
  if ( *(_BYTE *)(Instance + 74) )
    goto LABEL_10;
  v82 = BattleSetupInfo__TargetQuestId((BattleSetupInfo_o *)Instance, 0LL);
  if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
  }
  Instance = LastUsedDeckNumberManager__GetDeckNumber(v82, 0LL);
  if ( (int)Instance < 1 )
  {
LABEL_10:
    battleSetupInfo = this->fields.battleSetupInfo;
    if ( !battleSetupInfo || !MasterData_WarQuestSelectionMaster )
      goto LABEL_152;
    Instance = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                 MasterData_WarQuestSelectionMaster,
                 &entity,
                 battleSetupInfo->fields.deckId,
                 (const MethodInfo_24E4354 *)Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__TryGetEntity__);
  }
  else
  {
    v83 = Instance;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Instance = NetworkManager__get_UserId(0LL);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_152;
    Instance = (int64_t)UserDeckMaster__getDeck(
                          (UserDeckMaster_o *)MasterData_WarQuestSelectionMaster,
                          Instance,
                          v83,
                          0LL);
    entity = (UserServantEntity_o *)Instance;
  }
  v24 = this->fields.battleSetupInfo;
  if ( !v24 )
    goto LABEL_152;
  questRestrictionInfo = v24->fields.questRestrictionInfo;
  if ( questRestrictionInfo )
    QuestRestrictionInfo__SetDeckInfo(questRestrictionInfo, (UserDeckEntity_o *)entity, 0LL);
  *(_QWORD *)&this->fields.friendPointUpVal = 0LL;
  p_friendPointUpVal = &this->fields.friendPointUpVal;
  this->fields.friendPointCampaignEntityList = 0LL;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.friendPointCampaignEntityList,
    0LL,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_152;
  v27 = (EventCampaignMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_152;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventQuestMaster___);
  if ( !this->fields.battleSetupInfo )
    goto LABEL_152;
  v28 = (EventQuestMaster_o *)Instance;
  Instance = BattleSetupInfo__TargetQuestId(this->fields.battleSetupInfo, 0LL);
  v29 = this->fields.battleSetupInfo;
  if ( !v29 )
    goto LABEL_152;
  if ( !v28 )
    goto LABEL_152;
  Instance = (int64_t)EventQuestMaster__GetEnabledEventCampaignForQuest(v28, Instance, v29->fields.questPhase, 0LL, 0LL);
  if ( !v27 )
    goto LABEL_152;
  Data_29696660 = EventCampaignMaster__getData_29696660(v27, 24, (EventEntity_array *)Instance, 0LL);
  this->fields.friendPointCampaignEntityList = Data_29696660;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.friendPointCampaignEntityList,
    (System_Int32_array **)Data_29696660,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  if ( this->fields.tutorialMode == 4 )
  {
    v37 = this->fields.battleSetupInfo;
    if ( !v37 )
      goto LABEL_152;
    if ( v37->fields.isChildFollower )
    {
      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
      }
      Instance = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_152;
      if ( *(_QWORD *)(Instance + 72) )
      {
        for ( i = 0; ; ++i )
        {
          v44 = BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v44 = BalanceConfig_TypeInfo;
          }
          if ( i >= v44->static_fields->DeckMemberMax )
            break;
          if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
          }
          Instance = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( !Instance )
            goto LABEL_152;
          Instance = *(_QWORD *)(Instance + 72);
          if ( !Instance )
            goto LABEL_152;
          Member = PartyListViewItem__GetMember((PartyListViewItem_o *)Instance, i, 0LL);
          if ( Member )
          {
            v40 = Member;
            if ( Member->fields.userServantEntity )
            {
              Instance = (int64_t)PartyOrganizationListViewItem__GetEquipList(Member, 0LL);
              if ( !v40->fields.userServantEntity )
                goto LABEL_152;
              v41 = (System_Int64_array *)Instance;
              Instance = UserServantEntity__getFriendPointUpVal(
                           v40->fields.userServantEntity,
                           (System_Int64_array *)Instance,
                           0LL);
              userServantEntity = v40->fields.userServantEntity;
              if ( !userServantEntity )
                goto LABEL_152;
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
          if ( (BYTE3(v44->vtable._0_Equals.methodPtr) & 4) != 0 && !v44->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v44);
            v44 = BalanceConfig_TypeInfo;
          }
          if ( j >= v44->static_fields->DeckMemberMax )
            break;
          if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
          }
          Instance = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( !Instance )
            goto LABEL_152;
          Instance = *(_QWORD *)(Instance + 72);
          if ( !Instance )
            goto LABEL_152;
          v46 = PartyListViewItem__GetMember((PartyListViewItem_o *)Instance, j, 0LL);
          if ( v46 )
          {
            v47 = v46;
            if ( v46->fields.userServantEntity )
            {
              Instance = (int64_t)PartyOrganizationListViewItem__GetEquipList(v46, 0LL);
              if ( !v47->fields.userServantEntity )
                goto LABEL_152;
              v48 = (System_Int64_array *)Instance;
              Instance = UserServantEntity__getFriendPointUpVal(
                           v47->fields.userServantEntity,
                           (System_Int64_array *)Instance,
                           0LL);
              v49 = v47->fields.userServantEntity;
              if ( !v49 )
                goto LABEL_152;
              v50 = Instance;
              if ( UserServantEntity__getFriendPointUpType(v49, v48, 0LL) == 123 )
                *p_friendPointUpVal += v50;
            }
          }
          v44 = BalanceConfig_TypeInfo;
        }
        return;
      }
    }
  }
  v51 = this->fields.battleSetupInfo;
  if ( !v51 )
    goto LABEL_152;
  Instance = (int64_t)v51->fields.questRestrictionInfo;
  if ( Instance )
  {
    Instance = QuestRestrictionInfo__IsServantNum((QuestRestrictionInfo_o *)Instance, 0LL);
    if ( (Instance & 1) != 0 )
      goto LABEL_75;
    v52 = this->fields.battleSetupInfo;
    if ( !v52 )
      goto LABEL_152;
    Instance = (int64_t)v52->fields.questRestrictionInfo;
    if ( !Instance )
      goto LABEL_152;
    Instance = QuestRestrictionInfo__IsNpcMulitipleOrOnly((QuestRestrictionInfo_o *)Instance, 0LL);
    if ( (Instance & 1) != 0 )
      goto LABEL_75;
    v53 = this->fields.battleSetupInfo;
    if ( !v53 )
      goto LABEL_152;
    Instance = (int64_t)v53->fields.questRestrictionInfo;
    if ( !Instance )
      goto LABEL_152;
    if ( *(int *)(Instance + 396) >= 1 )
    {
LABEL_75:
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        v54 = (UserEventDeckMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserEventDeckMaster___);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        Instance = NetworkManager__get_UserId(0LL);
        v55 = this->fields.battleSetupInfo;
        if ( v55 )
        {
          eventId = v55->fields.eventId;
          v57 = Instance;
          Instance = BattleSetupInfo__TargetQuestId(this->fields.battleSetupInfo, 0LL);
          v58 = this->fields.battleSetupInfo;
          if ( v58 )
          {
            if ( v54 )
            {
              Instance = (int64_t)UserEventDeckMaster__getDeckList(
                                    v54,
                                    v57,
                                    eventId,
                                    Instance,
                                    v58->fields.questPhase,
                                    0LL);
              if ( Instance )
              {
                if ( !*(_DWORD *)(Instance + 24) )
                  goto LABEL_153;
                v59 = *(UserEventDeckEntity_o **)(Instance + 32);
                if ( v59 )
                {
                  Instance = (int64_t)UserEventDeckEntity__GetUserServantList(
                                        *(UserEventDeckEntity_o **)(Instance + 32),
                                        0,
                                        0LL);
                  if ( Instance )
                  {
                    v60 = Instance;
                    v61 = *(_QWORD *)(Instance + 24);
                    if ( v61 >= 1 )
                    {
                      v62 = 0LL;
                      v63 = Instance + 32;
                      while ( v62 < (unsigned int)v61 )
                      {
                        if ( *(_QWORD *)(v63 + 8 * v62) )
                        {
                          Instance = (int64_t)UserEventDeckEntity__GetEquipList(v59, v62, 0LL);
                          if ( v62 >= *(unsigned int *)(v60 + 24) )
                            break;
                          v64 = (System_Int64_array *)Instance;
                          Instance = *(_QWORD *)(v63 + 8 * v62);
                          if ( !Instance )
                            goto LABEL_152;
                          Instance = UserServantEntity__getFriendPointUpVal((UserServantEntity_o *)Instance, v64, 0LL);
                          if ( v62 >= *(unsigned int *)(v60 + 24) )
                            break;
                          v65 = Instance;
                          Instance = *(_QWORD *)(v63 + 8 * v62);
                          if ( !Instance )
                            goto LABEL_152;
                          Instance = UserServantEntity__getFriendPointUpType((UserServantEntity_o *)Instance, v64, 0LL);
                          if ( (_DWORD)Instance == 104 && v65 > *p_friendPointUpVal )
                          {
                            this->fields.friendPointUpVal = v65;
                            this->fields.friendPointUpMaxVal = v65;
                          }
                        }
                        v61 = *(_DWORD *)(v60 + 24);
                        if ( (__int64)++v62 >= v61 )
                          goto LABEL_98;
                      }
LABEL_153:
                      v85 = sub_B2C460(Instance);
                      sub_B2C400(v85, 0LL);
                    }
LABEL_98:
                    if ( v61 >= 1 )
                    {
                      v66 = 0LL;
                      v67 = v60 + 32;
                      while ( v66 < (unsigned int)v61 )
                      {
                        if ( *(_QWORD *)(v67 + 8 * v66) )
                        {
                          Instance = (int64_t)UserEventDeckEntity__GetEquipList(v59, v66, 0LL);
                          if ( v66 >= *(unsigned int *)(v60 + 24) )
                            goto LABEL_153;
                          v68 = (System_Int64_array *)Instance;
                          Instance = *(_QWORD *)(v67 + 8 * v66);
                          if ( !Instance )
                            goto LABEL_152;
                          Instance = UserServantEntity__getFriendPointUpVal((UserServantEntity_o *)Instance, v68, 0LL);
                          if ( v66 >= *(unsigned int *)(v60 + 24) )
                            goto LABEL_153;
                          v69 = Instance;
                          Instance = *(_QWORD *)(v67 + 8 * v66);
                          if ( !Instance )
                            goto LABEL_152;
                          Instance = UserServantEntity__getFriendPointUpType((UserServantEntity_o *)Instance, v68, 0LL);
                          if ( (_DWORD)Instance == 123 )
                            *p_friendPointUpVal += v69;
                        }
                        v61 = *(_DWORD *)(v60 + 24);
                        if ( (__int64)++v66 >= v61 )
                          goto LABEL_109;
                      }
                      goto LABEL_153;
                    }
LABEL_109:
                    v70 = this->fields.battleSetupInfo;
                    if ( v70 )
                    {
                      Instance = (int64_t)v70->fields.questRestrictionInfo;
                      if ( Instance )
                      {
                        QuestRestrictionInfo__SetDeckInfo_31220484((QuestRestrictionInfo_o *)Instance, v59, 0LL);
                        return;
                      }
                    }
                  }
                }
                else
                {
                  v84 = this->fields.battleSetupInfo;
                  if ( v84 )
                  {
                    Instance = (int64_t)v84->fields.questRestrictionInfo;
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
LABEL_152:
      sub_B2C434(Instance, v15);
    }
  }
  if ( entity && (!Instance || !QuestRestrictionInfo__IsSupportOnly((QuestRestrictionInfo_o *)Instance, 0LL)) )
  {
    for ( k = 0; ; ++k )
    {
      v76 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v76 = BalanceConfig_TypeInfo;
      }
      if ( k >= v76->static_fields->DeckMemberMax )
        break;
      Instance = (int64_t)entity;
      if ( !entity )
        goto LABEL_152;
      UserServant = UserDeckEntity__GetUserServant((UserDeckEntity_o *)entity, k, 0LL);
      if ( UserServant )
      {
        v73 = UserServant;
        Instance = (int64_t)entity;
        if ( !entity )
          goto LABEL_152;
        EquipList = UserDeckEntity__GetEquipList((UserDeckEntity_o *)entity, k, 0LL);
        FriendPointUpVal = UserServantEntity__getFriendPointUpVal(v73, EquipList, 0LL);
        if ( UserServantEntity__getFriendPointUpType(v73, EquipList, 0LL) == 104
          && FriendPointUpVal > *p_friendPointUpVal )
        {
          this->fields.friendPointUpVal = FriendPointUpVal;
          this->fields.friendPointUpMaxVal = FriendPointUpVal;
        }
      }
    }
    for ( m = 0; ; ++m )
    {
      if ( (BYTE3(v76->vtable._0_Equals.methodPtr) & 4) != 0 && !v76->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v76);
        v76 = BalanceConfig_TypeInfo;
      }
      if ( m >= v76->static_fields->DeckMemberMax )
        break;
      Instance = (int64_t)entity;
      if ( !entity )
        goto LABEL_152;
      v78 = UserDeckEntity__GetUserServant((UserDeckEntity_o *)entity, m, 0LL);
      if ( v78 )
      {
        v79 = v78;
        Instance = (int64_t)entity;
        if ( !entity )
          goto LABEL_152;
        v80 = UserDeckEntity__GetEquipList((UserDeckEntity_o *)entity, m, 0LL);
        v81 = UserServantEntity__getFriendPointUpVal(v79, v80, 0LL);
        if ( UserServantEntity__getFriendPointUpType(v79, v80, 0LL) == 123 )
          *p_friendPointUpVal += v81;
      }
      v76 = BalanceConfig_TypeInfo;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerRootComponent___OnClickBack_b__65_0(
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

  if ( (byte_4186A15 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_3043/*"CLICK_BACK"*/, v6);
    byte_4186A15 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  CommonUI__CloseConfirmDialog(Instance, 0LL);
  if ( isDecide )
  {
    FollowerRootComponent__QuestHintDialogResetTemporarilyId(v9, v10);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4183C70 )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v8);
      byte_4183C70 = 1;
    }
    v11 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v11 = TerminalPramsManager_TypeInfo;
    }
    v11->static_fields->_IsAutoResume_k__BackingField = 1;
    Instance = (CommonUI_o *)this->fields.myFSM;
    if ( Instance )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3043/*"CLICK_BACK"*/, 0LL);
      return;
    }
LABEL_16:
    sub_B2C434(Instance, v8);
  }
  this->fields.state = 3;
}


void __fastcall FollowerRootComponent__beginFinish(FollowerRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  FollowerRootComponent_c *v12; // x0
  struct FollowerRootComponent_StaticFields *static_fields; // x0

  if ( (byte_41869F8 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, method);
    sub_B2C35C(&FollowerRootComponent_TypeInfo, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, v4);
    byte_41869F8 = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  this->fields.state = 0;
  if ( !operationItemListViewManager )
    goto LABEL_16;
  FollowerSelectItemListViewManager__DestroyList(operationItemListViewManager, 0LL);
  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    goto LABEL_16;
  operationItemListViewManager = (FollowerSelectItemListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                          (UnityEngine_Component_o *)operationItemListViewManager,
                                                                          0LL);
  if ( !operationItemListViewManager )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)operationItemListViewManager, 0, 0LL);
  v12 = FollowerRootComponent_TypeInfo;
  if ( (BYTE3(FollowerRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FollowerRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerRootComponent_TypeInfo);
    v12 = FollowerRootComponent_TypeInfo;
  }
  static_fields = v12->static_fields;
  static_fields->partyOrganizationAtlasCache = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&static_fields->partyOrganizationAtlasCache, 0LL, v6, v7, v8, v9, v10, v11);
  operationItemListViewManager = (FollowerSelectItemListViewManager_o *)this->fields.backSkinSprite;
  if ( !operationItemListViewManager
    || (operationItemListViewManager = (FollowerSelectItemListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                                (UnityEngine_Component_o *)operationItemListViewManager,
                                                                                0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)operationItemListViewManager, 0, 0LL),
        (operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__)) == 0LL) )
  {
LABEL_16:
    sub_B2C434(operationItemListViewManager, method);
  }
  AtlasManager__ReleaseUISkin((AtlasManager_o *)operationItemListViewManager, 2, 0, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleasePartyOrganizationAtlas(0LL);
}


void __fastcall FollowerRootComponent__beginInitialize(FollowerRootComponent_o *this, const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_41869EF & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_41869EF = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v4);
  AvalonSceneManager__endInitialize(Instance, (SceneRootComponent_o *)this, 0LL);
}


void __fastcall FollowerRootComponent__beginResume(
        FollowerRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
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
  System_Int32_array **partyOrganizationAtlas; // x21
  FollowerRootComponent_c *v23; // x0
  struct FollowerRootComponent_StaticFields *static_fields; // x0
  TitleInfoControl_o *titleInfo; // x21
  int64_t operationItemListViewManager; // x0
  unsigned __int64 selectItemNum; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  __int64 v34; // x10
  FollowerSelectItemListViewItem_o *Item; // x0
  struct BattleSetupInfo_o *battleSetupInfo; // x22
  FollowerSelectItemListViewItem_o *v37; // x21
  struct BattleSetupInfo_o *v38; // x8
  int klass_high; // w9
  struct BattleSetupInfo_o *v40; // x8
  int32_t FollowerType; // w0
  const MethodInfo *v42; // x2
  struct BattleSetupInfo_o *v43; // x8
  Il2CppObject *v44; // x19
  __int64 v45; // x10
  Il2CppObject *v46; // x1
  struct BattleSetupInfo_o **p_battleSetupInfo; // x20
  struct BattleSetupInfo_o *v48; // x8
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x21
  int32_t tutorialMode; // w8
  struct BattleSetupInfo_o *v51; // x8
  FollowerSelectItemListViewManager_o *v52; // x20
  struct BattleSetupInfo_o *v53; // x8
  const MethodInfo *v54; // x4
  struct BattleSetupInfo_o *v55; // x8
  const MethodInfo *v56; // x1
  CommonUI_o *v57; // x20
  struct BattleSetupInfo_o *v58; // x8
  PartyListViewItem_o *v59; // x20
  UnityEngine_Component_o *v60; // x8
  int32_t i; // w21
  FollowerSelectItemListViewManager_o *v62; // x22
  struct BattleSetupInfo_o *v63; // x8
  const MethodInfo *v64; // x4
  struct BattleSetupInfo_o *v65; // x8
  FollowerSelectItemListViewManager_o *v66; // x22
  FollowerSelectItemListViewManager_CallbackFunc_o *v67; // x23
  PartyOrganizationListViewItem_o *Member; // x0
  struct FollowerInfo_o *followerInfo; // x8
  FollowerSelectItemListViewManager_o *v70; // x20
  int64_t userId; // x21
  struct QuestRestrictionInfo_o *v72; // x8
  PartyOrganizationListViewItem_o *v73; // x0
  struct FollowerInfo_o *v74; // x8
  unsigned int type; // w8
  BalanceConfig_c *v76; // x0
  int32_t v77; // w22

  if ( (byte_41869F6 & 1) == 0 )
  {
    sub_B2C35C(&AvalonSceneManager_TypeInfo, data);
    sub_B2C35C(&BalanceConfig_TypeInfo, v10);
    sub_B2C35C(&BattleSetupInfo_TypeInfo, v11);
    sub_B2C35C(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, v12);
    sub_B2C35C(&Method_FollowerRootComponent_OnSelectFollowerItem__, v13);
    sub_B2C35C(&FollowerRootComponent_TypeInfo, v14);
    sub_B2C35C(&RandomLimitCountManager_TypeInfo, v15);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v16);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17);
    sub_B2C35C(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v18);
    sub_B2C35C(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v19);
    sub_B2C35C(&SupportInfoJump_TypeInfo, v20);
    sub_B2C35C(&TutorialFlag_TypeInfo, v21);
    byte_41869F6 = 1;
  }
  partyOrganizationAtlas = (System_Int32_array **)this->fields.partyOrganizationAtlas;
  v23 = FollowerRootComponent_TypeInfo;
  if ( (BYTE3(FollowerRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FollowerRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerRootComponent_TypeInfo);
    v23 = FollowerRootComponent_TypeInfo;
  }
  static_fields = v23->static_fields;
  static_fields->partyOrganizationAtlasCache = (struct UIAtlas_o *)partyOrganizationAtlas;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&static_fields->partyOrganizationAtlasCache,
    partyOrganizationAtlas,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  titleInfo = this->fields.titleInfo;
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  operationItemListViewManager = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !operationItemListViewManager )
    goto LABEL_123;
  if ( *(_BYTE *)(operationItemListViewManager + 80) )
  {
    selectItemNum = 0LL;
    if ( !titleInfo )
      goto LABEL_123;
  }
  else
  {
    selectItemNum = this->fields.tutorialMode != 2;
    if ( !titleInfo )
      goto LABEL_123;
  }
  TitleInfoControl__setBackBtnEnable(titleInfo, selectItemNum, 0LL);
  if ( this->fields.state == 6 )
  {
    if ( data )
    {
      v34 = *(&SupportInfoJump_TypeInfo->_2.bitflags2 + 1);
      if ( *(&data->klass->_2.bitflags2 + 1) >= (unsigned int)v34
        && (SupportInfoJump_c *)data->klass->_2.typeHierarchy[v34 - 1] == SupportInfoJump_TypeInfo
        && ((__int64)data[3].klass & 0x80000000) == 0 )
      {
        selectItemNum = (unsigned int)this->fields.selectItemNum;
        if ( (selectItemNum & 0x80000000) == 0 )
        {
          operationItemListViewManager = (int64_t)this->fields.operationItemListViewManager;
          if ( !operationItemListViewManager )
            goto LABEL_123;
          Item = FollowerSelectItemListViewManager__GetItem(
                   (FollowerSelectItemListViewManager_o *)operationItemListViewManager,
                   selectItemNum,
                   0LL);
          if ( Item )
          {
            battleSetupInfo = this->fields.battleSetupInfo;
            v37 = Item;
            this->fields.state = 5;
            operationItemListViewManager = FollowerSelectItemListViewItem__get_FollowerId(Item, 0LL);
            if ( battleSetupInfo )
            {
              battleSetupInfo->fields.followerId = operationItemListViewManager;
              v38 = this->fields.battleSetupInfo;
              if ( v38 )
              {
                v38->fields.followerClassId = (int32_t)data[3].klass;
                klass_high = HIDWORD(data[3].klass);
                v40 = this->fields.battleSetupInfo;
                if ( klass_high <= 0 )
                  klass_high = v37->fields.supportDeckId;
                if ( v40 )
                {
                  v40->fields.followerSupportDeckId = klass_high;
                  FollowerType = FollowerSelectItemListViewItem__get_FollowerType(v37, 0LL);
                  FollowerRootComponent__setBattleSetupFollowType(this, FollowerType, v42);
                  if ( this->fields.operationItemListViewManager )
                  {
                    if ( !byte_4186A16 )
                    {
                      sub_B2C35C(&FollowerSelectItemListViewManager_TypeInfo, selectItemNum);
                      byte_4186A16 = 1;
                    }
                    operationItemListViewManager = (int64_t)FollowerSelectItemListViewManager_TypeInfo;
                    if ( (BYTE3(FollowerSelectItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
                      operationItemListViewManager = (int64_t)FollowerSelectItemListViewManager_TypeInfo;
                    }
                    v43 = this->fields.battleSetupInfo;
                    if ( v43 )
                    {
                      selectItemNum = (unsigned int)v43->fields.followerClassId;
                      if ( *(_DWORD *)(*(_QWORD *)(operationItemListViewManager + 184) + 8LL) != (_DWORD)selectItemNum )
                      {
                        operationItemListViewManager = (int64_t)this->fields.operationItemListViewManager;
                        if ( !operationItemListViewManager )
                          goto LABEL_123;
                        if ( FollowerSelectItemListViewManager__ChangeClass(
                               (FollowerSelectItemListViewManager_o *)operationItemListViewManager,
                               selectItemNum,
                               0LL) )
                        {
                          operationItemListViewManager = (int64_t)this->fields.operationItemListViewManager;
                          if ( !operationItemListViewManager )
                            goto LABEL_123;
                          ListViewManager__JumpItem(
                            (ListViewManager_o *)operationItemListViewManager,
                            this->fields.selectItemNum,
                            0LL);
                        }
                      }
                      v44 = (Il2CppObject *)this->fields.battleSetupInfo;
                      operationItemListViewManager = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
                      if ( operationItemListViewManager )
                      {
                        AvalonSceneManager__pushScene(
                          (AvalonSceneManager_o *)operationItemListViewManager,
                          40,
                          1,
                          v44,
                          0LL);
                        return;
                      }
                    }
                  }
                }
              }
            }
LABEL_123:
            sub_B2C434(operationItemListViewManager, selectItemNum);
          }
        }
      }
    }
  }
  else
  {
    if ( data
      && (v45 = *(&BattleSetupInfo_TypeInfo->_2.bitflags2 + 1), *(&data->klass->_2.bitflags2 + 1) >= (unsigned int)v45) )
    {
      if ( (BattleSetupInfo_c *)data->klass->_2.typeHierarchy[v45 - 1] == BattleSetupInfo_TypeInfo )
        v46 = data;
      else
        v46 = 0LL;
    }
    else
    {
      v46 = 0LL;
    }
    this->fields.battleSetupInfo = (struct BattleSetupInfo_o *)v46;
    p_battleSetupInfo = &this->fields.battleSetupInfo;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.battleSetupInfo,
      (System_Int32_array **)v46,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
    v48 = this->fields.battleSetupInfo;
    if ( !v48 )
      return;
    questRestrictionInfo = v48->fields.questRestrictionInfo;
    if ( !questRestrictionInfo )
      goto LABEL_123;
    if ( !QuestRestrictionInfo__IsMyServantOrNpcRestriction(v48->fields.questRestrictionInfo, 0LL)
      && (questRestrictionInfo->fields.isNoSupportBattle
       || questRestrictionInfo->fields.isFixedMyServantSingle
       || questRestrictionInfo->fields.isSupportOnlyForceBattle) )
    {
      goto LABEL_111;
    }
    if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TutorialFlag_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    }
    operationItemListViewManager = TutorialFlag__Get_28617756(102, 0LL);
    if ( (operationItemListViewManager & 1) == 0 )
    {
      v51 = *p_battleSetupInfo;
      if ( !*p_battleSetupInfo )
        goto LABEL_123;
      goto LABEL_78;
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
        v51 = this->fields.battleSetupInfo;
        if ( !v51 )
          goto LABEL_123;
LABEL_78:
        if ( v51->fields.isChildFollower )
        {
          FollowerRootComponent__ReturnBattleSetupMenu(this, (const MethodInfo *)selectItemNum);
          return;
        }
        goto LABEL_111;
      }
LABEL_76:
      FollowerRootComponent__ReturnSupportList(this, (const MethodInfo *)selectItemNum);
      return;
    }
    operationItemListViewManager = (int64_t)this->fields.battleSetupInfo;
    this->fields.selectItemNum = -1;
    *(_QWORD *)&this->fields.tutorialMode = 0x100000003LL;
    if ( !operationItemListViewManager )
      goto LABEL_123;
    v52 = this->fields.operationItemListViewManager;
    operationItemListViewManager = BattleSetupInfo__TargetQuestId(
                                     (BattleSetupInfo_o *)operationItemListViewManager,
                                     0LL);
    v53 = this->fields.battleSetupInfo;
    if ( !v53 )
      goto LABEL_123;
    if ( !v52 )
      goto LABEL_123;
    FollowerSelectItemListViewManager__CreateList(
      v52,
      operationItemListViewManager,
      v53->fields.questPhase,
      this->fields.friendPointUpVal,
      this->fields.friendPointUpMaxVal,
      this->fields.friendPointCampaignEntityList,
      v53->fields.eventUpValSetupInfo,
      v53->fields.questRestrictionInfo,
      0LL);
    v55 = this->fields.battleSetupInfo;
    if ( !v55 )
      goto LABEL_123;
    operationItemListViewManager = (int64_t)this->fields.followerQuestInfomationDraw;
    if ( !operationItemListViewManager )
      goto LABEL_123;
    FollowerQuestInfomationDraw__SetInfomation(
      (FollowerQuestInfomationDraw_o *)operationItemListViewManager,
      v55->fields.questRestrictionInfo,
      0,
      0LL,
      v54);
    this->fields.state = 2;
    FollowerRootComponent__OnMoveEnd(this, v56);
    goto LABEL_70;
  }
  if ( this->fields.state == 6 )
    goto LABEL_76;
  v58 = this->fields.battleSetupInfo;
  if ( !v58 )
    goto LABEL_123;
  if ( !v58->fields.isChildFollower )
  {
    v72 = v58->fields.questRestrictionInfo;
    if ( !v72 )
      goto LABEL_123;
    if ( v72->fields.isNotTransitionSupportList )
    {
LABEL_111:
      FollowerRootComponent__ReturnQuestMenu(this, (const MethodInfo *)selectItemNum);
      return;
    }
  }
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  RandomLimitCountManager__set_EnableRandomLimitCount(0, 0LL);
  RandomLimitCountManager__set_EnableRandomLimitCount(1, 0LL);
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  operationItemListViewManager = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !operationItemListViewManager )
    goto LABEL_123;
  v59 = *(PartyListViewItem_o **)(operationItemListViewManager + 72);
  operationItemListViewManager = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !operationItemListViewManager )
    goto LABEL_123;
  v60 = (UnityEngine_Component_o *)this->fields.operationItemListViewManager;
  i = *(_DWORD *)(operationItemListViewManager + 56);
  this->fields.tutorialState = 0;
  this->fields.selectItemNum = -1;
  if ( !v60 )
    goto LABEL_123;
  operationItemListViewManager = (int64_t)UnityEngine_Component__get_gameObject(v60, 0LL);
  if ( !operationItemListViewManager )
    goto LABEL_123;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)operationItemListViewManager, 1, 0LL);
  operationItemListViewManager = (int64_t)this->fields.battleSetupInfo;
  if ( !operationItemListViewManager )
    goto LABEL_123;
  v62 = this->fields.operationItemListViewManager;
  operationItemListViewManager = BattleSetupInfo__TargetQuestId((BattleSetupInfo_o *)operationItemListViewManager, 0LL);
  v63 = this->fields.battleSetupInfo;
  if ( !v63 )
    goto LABEL_123;
  if ( !v62 )
    goto LABEL_123;
  FollowerSelectItemListViewManager__CreateList(
    v62,
    operationItemListViewManager,
    v63->fields.questPhase,
    this->fields.friendPointUpVal,
    this->fields.friendPointUpMaxVal,
    this->fields.friendPointCampaignEntityList,
    v63->fields.eventUpValSetupInfo,
    v63->fields.questRestrictionInfo,
    0LL);
  v65 = this->fields.battleSetupInfo;
  if ( !v65 )
    goto LABEL_123;
  operationItemListViewManager = (int64_t)this->fields.followerQuestInfomationDraw;
  if ( !operationItemListViewManager )
    goto LABEL_123;
  FollowerQuestInfomationDraw__SetInfomation(
    (FollowerQuestInfomationDraw_o *)operationItemListViewManager,
    v65->fields.questRestrictionInfo,
    i,
    0LL,
    v64);
  this->fields.state = 3;
  v66 = this->fields.operationItemListViewManager;
  v67 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_B2C42C(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v67,
    (Il2CppObject *)this,
    Method_FollowerRootComponent_OnSelectFollowerItem__,
    0LL);
  if ( !v66 )
    goto LABEL_123;
  FollowerSelectItemListViewManager__SetMode(v66, 2, v67, 0LL);
  if ( v59 )
  {
    operationItemListViewManager = (int64_t)this->fields.operationItemListViewManager;
    if ( !operationItemListViewManager )
      goto LABEL_123;
    if ( ListViewManager__get_ItemSum((ListViewManager_o *)operationItemListViewManager, 0LL) >= 3 )
    {
      if ( i )
      {
LABEL_102:
        if ( i >= 1 )
        {
          Member = PartyListViewItem__GetMember(v59, i - 1, 0LL);
          if ( Member )
          {
            followerInfo = Member->fields.followerInfo;
            if ( followerInfo )
            {
              v70 = this->fields.operationItemListViewManager;
              userId = followerInfo->fields.userId;
              operationItemListViewManager = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(Member, 0LL);
              if ( !operationItemListViewManager )
                goto LABEL_123;
              if ( !v70 )
                goto LABEL_123;
              operationItemListViewManager = FollowerSelectItemListViewManager__GetItemIndex(
                                               v70,
                                               userId,
                                               *(_QWORD *)(operationItemListViewManager + 40),
                                               0LL);
              if ( !this->fields.operationItemListViewManager )
                goto LABEL_123;
              ListViewManager__JumpItem(
                (ListViewManager_o *)this->fields.operationItemListViewManager,
                operationItemListViewManager,
                0LL);
            }
          }
        }
      }
      else
      {
        for ( i = 1; ; ++i )
        {
          v76 = BalanceConfig_TypeInfo;
          v77 = i - 1;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v76 = BalanceConfig_TypeInfo;
          }
          if ( v77 >= v76->static_fields->DeckMemberMax )
            break;
          v73 = PartyListViewItem__GetMember(v59, v77, 0LL);
          if ( v73 )
          {
            v74 = v73->fields.followerInfo;
            if ( v74 )
            {
              type = v74->fields.type;
              if ( type > 4 || ((1 << type) & 0x19) == 0 )
                goto LABEL_102;
            }
          }
        }
      }
    }
  }
LABEL_70:
  operationItemListViewManager = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v57 = (CommonUI_o *)operationItemListViewManager;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !v57 )
    goto LABEL_123;
  CommonUI__maskFadein(v57, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
  SceneRootComponent__sendMessageResume((SceneRootComponent_o *)this, 0LL);
}


void __fastcall FollowerRootComponent__beginStartUp(
        FollowerRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
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
  __int64 v27; // x10
  Il2CppObject *v28; // x1
  BattleSetupInfo_o **p_battleSetupInfo; // x20
  const MethodInfo *v30; // x1
  const MethodInfo *v31; // x1
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Int32_array **partyOrganizationAtlas; // x21
  FollowerRootComponent_c *v39; // x0
  struct FollowerRootComponent_StaticFields *static_fields; // x0
  const MethodInfo *v41; // x1
  TitleInfoControl_o *titleInfo; // x0
  UILabel_o *infomationLabel; // x21
  UnityEngine_GameObject_o *refreshButtonBase; // x21
  bool v45; // w8
  struct QuestRestrictionInfo_o *backRecollectionBtn; // x8
  ConstantMaster_o *v47; // x21
  BattleSetupInfo_o *v48; // x8
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x9
  System_Action_o *v50; // x20
  System_Action_o *v51; // x20
  QuestPhaseMaster_o *v52; // x21
  NpcFollowerMaster_o *v53; // x21
  const MethodInfo *v54; // x1
  const MethodInfo *v55; // x4
  struct BattleSetupInfo_o *battleSetupInfo; // x8

  if ( (byte_41869F0 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, data);
    sub_B2C35C(&AtlasManager_TypeInfo, v10);
    sub_B2C35C(&BalanceConfig_TypeInfo, v11);
    sub_B2C35C(&BattleSetupInfo_TypeInfo, v12);
    sub_B2C35C(&Method_DataManager_GetMasterData_ConstantMaster___, v13);
    sub_B2C35C(&Method_DataManager_GetMasterData_NpcFollowerMaster___, v14);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v15);
    sub_B2C35C(&Method_FollowerRootComponent_EndLoadCommonBg__, v16);
    sub_B2C35C(&Method_FollowerRootComponent_EndLoadPartyOrganizationAtlasSimple__, v17);
    sub_B2C35C(&FollowerRootComponent_TypeInfo, v18);
    sub_B2C35C(&LocalizationManager_TypeInfo, v19);
    sub_B2C35C(&RandomLimitCountManager_TypeInfo, v20);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_B2C35C(&TutorialFlag_TypeInfo, v22);
    sub_B2C35C(&StringLiteral_13534/*"TUTORIAL_SUPPORT_QUEST_ID"*/, v23);
    sub_B2C35C(&StringLiteral_13535/*"TUTORIAL_SUPPORT_QUEST_PHASE"*/, v24);
    sub_B2C35C(&StringLiteral_6376/*"FOLLOWER_SELECT_EXPLANATION2"*/, v25);
    sub_B2C35C(&StringLiteral_1/*""*/, v26);
    byte_41869F0 = 1;
  }
  if ( data
    && (v27 = *(&BattleSetupInfo_TypeInfo->_2.bitflags2 + 1), *(&data->klass->_2.bitflags2 + 1) >= (unsigned int)v27) )
  {
    if ( (BattleSetupInfo_c *)data->klass->_2.typeHierarchy[v27 - 1] == BattleSetupInfo_TypeInfo )
      v28 = data;
    else
      v28 = 0LL;
  }
  else
  {
    v28 = 0LL;
  }
  this->fields.battleSetupInfo = (struct BattleSetupInfo_o *)v28;
  p_battleSetupInfo = &this->fields.battleSetupInfo;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.battleSetupInfo,
    (System_Int32_array **)v28,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !this->fields.battleSetupInfo )
  {
    FollowerRootComponent__ReturnQuestMenu(this, v30);
    return;
  }
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  RandomLimitCountManager__set_EnableRandomLimitCount(1, 0LL);
  FollowerRootComponent__PlayBGM(this, v31);
  partyOrganizationAtlas = (System_Int32_array **)this->fields.partyOrganizationAtlas;
  v39 = FollowerRootComponent_TypeInfo;
  if ( (BYTE3(FollowerRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FollowerRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerRootComponent_TypeInfo);
    v39 = FollowerRootComponent_TypeInfo;
  }
  static_fields = v39->static_fields;
  static_fields->partyOrganizationAtlasCache = (struct UIAtlas_o *)partyOrganizationAtlas;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&static_fields->partyOrganizationAtlasCache,
    partyOrganizationAtlas,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_93;
  TitleInfoControl__setTitleInfo_19532804(titleInfo, this->fields.myFSM, 3, 63, 0LL);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_93;
  TitleInfoControl__setBackBtnEnable(titleInfo, 1, 0LL);
  titleInfo = (TitleInfoControl_o *)this->fields.operationItemListViewManager;
  if ( !titleInfo )
    goto LABEL_93;
  FollowerSelectItemListViewManager__DestroyList_30676208(
    (FollowerSelectItemListViewManager_o *)titleInfo,
    this->fields.battleSetupInfo,
    0LL);
  infomationLabel = this->fields.infomationLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  titleInfo = (TitleInfoControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6376/*"FOLLOWER_SELECT_EXPLANATION2"*/, 0LL);
  if ( !infomationLabel )
    goto LABEL_93;
  UILabel__set_text(infomationLabel, (System_String_o *)titleInfo, 0LL);
  refreshButtonBase = this->fields.refreshButtonBase;
  titleInfo = (TitleInfoControl_o *)BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  }
  if ( !refreshButtonBase )
    goto LABEL_93;
  UnityEngine_GameObject__SetActive(
    refreshButtonBase,
    BalanceConfig_TypeInfo->static_fields->FollowerRefreshRestTime >= 0,
    0LL);
  titleInfo = (TitleInfoControl_o *)this->fields.battleSetupInfo;
  *(_QWORD *)&this->fields.tutorialMode = 0LL;
  this->fields.selectItemNum = -1;
  this->fields.isForceFadeOut = 0;
  if ( !titleInfo )
    goto LABEL_93;
  v45 = titleInfo->fields.mDebugBtn || LODWORD(titleInfo->fields.particlePrefabNames) != 0;
  if ( (v45 & BYTE1(titleInfo->fields.backSelectBtnSprite)) != 0 )
  {
    BattleSetupInfo__SetRestriction((BattleSetupInfo_o *)titleInfo, 1, 0LL);
    titleInfo = (TitleInfoControl_o *)*p_battleSetupInfo;
    if ( !*p_battleSetupInfo )
      goto LABEL_93;
  }
  backRecollectionBtn = (struct QuestRestrictionInfo_o *)titleInfo->fields.backRecollectionBtn;
  if ( !backRecollectionBtn )
    goto LABEL_93;
  if ( backRecollectionBtn->fields.isSupportOnlyForceBattle )
  {
LABEL_36:
    FollowerRootComponent__StartBattleSetupMenu(this, v41);
    return;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_28617756(102, 0LL) )
  {
    titleInfo = (TitleInfoControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !titleInfo )
      goto LABEL_93;
    titleInfo = (TitleInfoControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)titleInfo,
                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ConstantMaster___);
    if ( !titleInfo )
      goto LABEL_93;
    v47 = (ConstantMaster_o *)titleInfo;
    titleInfo = (TitleInfoControl_o *)ConstantMaster__GetValue(
                                        (ConstantMaster_o *)titleInfo,
                                        (System_String_o *)StringLiteral_13534/*"TUTORIAL_SUPPORT_QUEST_ID"*/,
                                        0LL);
    v48 = *p_battleSetupInfo;
    if ( !*p_battleSetupInfo )
      goto LABEL_93;
    if ( v48->fields.questId == (_DWORD)titleInfo )
    {
      titleInfo = (TitleInfoControl_o *)ConstantMaster__GetValue(v47, (System_String_o *)StringLiteral_13535/*"TUTORIAL_SUPPORT_QUEST_PHASE"*/, 0LL);
      v48 = *p_battleSetupInfo;
      if ( !*p_battleSetupInfo )
        goto LABEL_93;
      if ( v48->fields.questPhase == (_DWORD)titleInfo )
        *(_QWORD *)&this->fields.tutorialMode = 0x100000003LL;
    }
  }
  else
  {
    if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TutorialFlag_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    }
    if ( !TutorialFlag__IsProgressDone(3, 0LL) )
      goto LABEL_36;
    titleInfo = (TitleInfoControl_o *)this->fields.infomationLabel;
    *(_QWORD *)&this->fields.tutorialMode = 0x100000002LL;
    if ( !titleInfo )
      goto LABEL_93;
    UILabel__set_text((UILabel_o *)titleInfo, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    v48 = *p_battleSetupInfo;
    if ( !*p_battleSetupInfo )
      goto LABEL_93;
  }
  questRestrictionInfo = v48->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    goto LABEL_93;
  if ( !questRestrictionInfo->fields.isNotTransitionSupportList
    && !questRestrictionInfo->fields.isNpcOnlyBattle
    && !questRestrictionInfo->fields.isFixedMyServantSingle
    && !questRestrictionInfo->fields.isNoSupportBattle )
  {
    titleInfo = (TitleInfoControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( titleInfo )
    {
      titleInfo = (TitleInfoControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)titleInfo,
                                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
      if ( *p_battleSetupInfo )
      {
        v52 = (QuestPhaseMaster_o *)titleInfo;
        titleInfo = (TitleInfoControl_o *)BattleSetupInfo__TargetQuestId(*p_battleSetupInfo, 0LL);
        if ( *p_battleSetupInfo )
        {
          if ( v52 )
          {
            titleInfo = (TitleInfoControl_o *)QuestPhaseMaster__GetEntity(
                                                v52,
                                                (int32_t)titleInfo,
                                                (*p_battleSetupInfo)->fields.questPhase,
                                                0LL);
            if ( titleInfo && LOBYTE(titleInfo->fields.backBtnBgSprite) )
            {
              titleInfo = (TitleInfoControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !titleInfo )
                goto LABEL_93;
              titleInfo = (TitleInfoControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                  (DataManager_o *)titleInfo,
                                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
              if ( !*p_battleSetupInfo )
                goto LABEL_93;
              v53 = (NpcFollowerMaster_o *)titleInfo;
              titleInfo = (TitleInfoControl_o *)BattleSetupInfo__TargetQuestId(*p_battleSetupInfo, 0LL);
              if ( !*p_battleSetupInfo )
                goto LABEL_93;
              if ( !v53 )
                goto LABEL_93;
              titleInfo = (TitleInfoControl_o *)NpcFollowerMaster__GetQuestFollowerList(
                                                  v53,
                                                  (int32_t)titleInfo,
                                                  (*p_battleSetupInfo)->fields.questPhase,
                                                  0LL);
              if ( !titleInfo )
                goto LABEL_93;
              if ( !titleInfo->fields.backBtnBgSprite )
              {
                *(_QWORD *)&this->fields.tutorialMode = 0x100000001LL;
                goto LABEL_67;
              }
            }
            if ( *p_battleSetupInfo )
            {
              titleInfo = (TitleInfoControl_o *)(*p_battleSetupInfo)->fields.questRestrictionInfo;
              if ( titleInfo )
              {
                if ( QuestRestrictionInfo__IsMyServantOrNpcRestriction((QuestRestrictionInfo_o *)titleInfo, 0LL) )
                  this->fields.tutorialMode = 4;
                FollowerRootComponent__UpdateDeckInfomation(this, v54);
                battleSetupInfo = this->fields.battleSetupInfo;
                if ( battleSetupInfo )
                {
                  titleInfo = (TitleInfoControl_o *)this->fields.followerQuestInfomationDraw;
                  if ( titleInfo )
                  {
                    FollowerQuestInfomationDraw__SetInfomation(
                      (FollowerQuestInfomationDraw_o *)titleInfo,
                      battleSetupInfo->fields.questRestrictionInfo,
                      0,
                      0LL,
                      v55);
                    titleInfo = (TitleInfoControl_o *)this->fields.backSkinSprite;
                    if ( titleInfo )
                    {
                      titleInfo = (TitleInfoControl_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)titleInfo,
                                                          0LL);
                      if ( titleInfo )
                      {
                        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 0, 0LL);
                        goto LABEL_62;
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
LABEL_93:
    sub_B2C434(titleInfo, v41);
  }
  this->fields.tutorialState = 1;
  titleInfo = (TitleInfoControl_o *)v48->fields.questRestrictionInfo;
  if ( !titleInfo )
    goto LABEL_93;
  if ( QuestRestrictionInfo__IsMyServantOrNpcRestriction((QuestRestrictionInfo_o *)titleInfo, 0LL) )
  {
    this->fields.isForceFadeOut = 1;
    this->fields.tutorialMode = 4;
LABEL_62:
    v50 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v50, (Il2CppObject *)this, Method_FollowerRootComponent_EndLoadCommonBg__, 0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__LoadUISkin(v50, 2, 1, 0LL);
    return;
  }
  this->fields.tutorialMode = 1;
LABEL_67:
  v51 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v51,
    (Il2CppObject *)this,
    Method_FollowerRootComponent_EndLoadPartyOrganizationAtlasSimple__,
    0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadPartyOrganizationAtlas(v51, 1, 0LL);
}


void __fastcall FollowerRootComponent__setBattleSetupFollowType(
        FollowerRootComponent_o *this,
        int32_t type,
        const MethodInfo *method)
{
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  struct BattleSetupInfo_o *v4; // x8
  int v5; // w9

  battleSetupInfo = this->fields.battleSetupInfo;
  if ( !battleSetupInfo )
    goto LABEL_10;
  battleSetupInfo->fields.followerType = 0;
  if ( type == 5 )
  {
    v4 = this->fields.battleSetupInfo;
    if ( v4 )
    {
      v5 = 5;
      goto LABEL_8;
    }
LABEL_10:
    sub_B2C434(this, type);
  }
  if ( type != 1 )
    return;
  v4 = this->fields.battleSetupInfo;
  if ( !v4 )
    goto LABEL_10;
  v5 = 1;
LABEL_8:
  v4->fields.followerType = v5;
}


void __fastcall FollowerRootComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct FollowerRootComponent___c_StaticFields *static_fields; // x0

  if ( (byte_41841D1 & 1) == 0 )
  {
    sub_B2C35C(&FollowerRootComponent___c_TypeInfo, v1);
    byte_41841D1 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(FollowerRootComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = FollowerRootComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct FollowerRootComponent___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
}


void __fastcall FollowerRootComponent___c___ctor(FollowerRootComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall FollowerRootComponent___c___Init_b__45_0(FollowerRootComponent___c_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  PartyOrganizationUtility_c *v3; // x0
  CommonUI_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_41841D2 & 1) == 0 )
  {
    sub_B2C35C(&PartyOrganizationUtility_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v2);
    byte_41841D2 = 1;
  }
  v3 = PartyOrganizationUtility_TypeInfo;
  if ( (BYTE3(PartyOrganizationUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
    v3 = PartyOrganizationUtility_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(v3->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v5);
  CommonUI__CloseNotificationDialog(Instance, 0LL);
}


void __fastcall FollowerRootComponent___c___OnSelectFollowerItem_b__60_0(
        FollowerRootComponent___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  PartyOrganizationUtility_c *v3; // x0
  CommonUI_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_41841D3 & 1) == 0 )
  {
    sub_B2C35C(&PartyOrganizationUtility_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v2);
    byte_41841D3 = 1;
  }
  v3 = PartyOrganizationUtility_TypeInfo;
  if ( (BYTE3(PartyOrganizationUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
    v3 = PartyOrganizationUtility_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(v3->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v5);
  CommonUI__CloseNotificationDialog(Instance, 0LL);
}