void __fastcall ShopRootComponent___ctor(ShopRootComponent_o *this, const MethodInfo *method)
{
  this->fields.saveScrollBarValue = -1.0;
  *(_QWORD *)&this->fields.buyCount = 0xFFFFFFFF00000001LL;
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0LL);
}


void __fastcall ShopRootComponent__BackMenu(ShopRootComponent_o *this, int32_t state, const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  const MethodInfo *v14; // x2
  System_Action_o *v15; // x20
  ShopRootComponent_o *v16; // x0
  const MethodInfo *v17; // x3

  if ( (byte_4BD8A4F & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_ShopRootComponent___c__DisplayClass82_0__BackMenu_b__0__);
    sub_1C21E38(&ShopRootComponent___c__DisplayClass82_0_TypeInfo);
    byte_4BD8A4F = 1;
  }
  v5 = sub_1C22084(ShopRootComponent___c__DisplayClass82_0_TypeInfo);
  ShopRootComponent___c__DisplayClass82_0___ctor((ShopRootComponent___c__DisplayClass82_0_o *)v5, 0LL);
  if ( !v5 )
    sub_1C22094(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 16), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v5 + 24) = state;
  if ( state != 15 )
  {
    ShopRootComponent__PlayVoiceBack(this, state, v14);
    state = *(_DWORD *)(v5 + 24);
  }
  v15 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v15, (Il2CppObject *)v5, Method_ShopRootComponent___c__DisplayClass82_0__BackMenu_b__0__, 0LL);
  ShopRootComponent__SetFadeOut(v16, state, v15, v17);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ShopRootComponent__BackScene(ShopRootComponent_o *this, int32_t state, const MethodInfo *method)
{
  SceneJumpInfo_o *jumpInfo; // x0
  void *myFSM; // x0
  bool v7; // w19
  struct SceneJumpInfo_o *v8; // x8
  struct SceneJumpInfo_o *v9; // x8
  struct SceneJumpInfo_o *v10; // x8
  TerminalPramsManager_c *v11; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v12; // x20
  EventEntity_o *v13; // x21
  Il2CppObject *Instance; // x20
  System_String_o *v16; // x22
  Il2CppObject *EventName; // x0
  System_String_o *v18; // x21
  System_Action_o *v19; // x22

  if ( (byte_4BD8A72 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C21E38(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_ShopRootComponent_OnEndDialogEventCloseWarning__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&StringLiteral_6356/*"EventItem"*/);
    sub_1C21E38(&StringLiteral_3578/*"CLICK_BACK"*/);
    sub_1C21E38(&StringLiteral_13242/*"StoneFragments"*/);
    sub_1C21E38(&StringLiteral_12263/*"SHOP_EVENT_RETURN_ERROR"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD8A72 = 1;
  }
  switch ( state )
  {
    case 1:
      jumpInfo = this->fields.jumpInfo;
      if ( !jumpInfo || !SceneJumpInfo__IsEnableReturnScene(jumpInfo, 0LL) )
        goto LABEL_8;
      myFSM = this->fields.jumpInfo;
      if ( !myFSM )
        goto LABEL_47;
      if ( SceneJumpInfo__ReturnScene((SceneJumpInfo_o *)myFSM, 0LL) )
        return 1;
LABEL_8:
      myFSM = this->fields.myFSM;
      if ( !myFSM )
        goto LABEL_47;
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myFSM, (System_String_o *)StringLiteral_3578/*"CLICK_BACK"*/, 0LL);
      return 1;
    case 4:
      v8 = this->fields.jumpInfo;
      if ( !v8 || !System_String__op_Equality(v8->fields.name, (System_String_o *)StringLiteral_13242/*"StoneFragments"*/, 0LL) )
        return 0;
      myFSM = this->fields.jumpInfo;
      if ( !myFSM )
        goto LABEL_47;
      if ( !SceneJumpInfo__ReturnScene((SceneJumpInfo_o *)myFSM, 0LL) )
        return 0;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v7 = 1;
      TerminalPramsManager__set_IsAutoOpenMasterMission(1, 0LL);
      return v7;
    case 7:
      v9 = this->fields.jumpInfo;
      if ( !v9 || !System_String__op_Equality(v9->fields.name, (System_String_o *)StringLiteral_6356/*"EventItem"*/, 0LL) )
        return 0;
      myFSM = this->fields.jumpInfo;
      if ( !myFSM )
        goto LABEL_47;
      return SceneJumpInfo__ReturnScene((SceneJumpInfo_o *)myFSM, 0LL);
    case 8:
      v10 = this->fields.jumpInfo;
      if ( !v10 )
        return 0;
      if ( !System_String__op_Equality(v10->fields.name, (System_String_o *)StringLiteral_6356/*"EventItem"*/, 0LL) )
        goto LABEL_35;
      myFSM = this->fields.jumpInfo;
      if ( !myFSM )
        goto LABEL_47;
      if ( !*((_DWORD *)myFSM + 6) || !SceneJumpInfo__ReturnScene((SceneJumpInfo_o *)myFSM, 0LL) )
      {
LABEL_35:
        myFSM = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( myFSM )
        {
          myFSM = DataManager__GetMasterData_object_(
                    (DataManager_o *)myFSM,
                    (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventMaster___);
          if ( this->fields.listViewHelper )
          {
            v12 = (DataMasterBase_TMaster__TEntity__PKType__o *)myFSM;
            myFSM = ShopSceneListViewControlHelper__GetShopEventListViewItem(
                      this->fields.listViewHelper,
                      this->fields.selectedEventIndex,
                      0LL);
            if ( myFSM )
            {
              if ( v12 )
              {
                myFSM = DataMasterBase_object__object__int___GetEntity(
                          v12,
                          *((_DWORD *)myFSM + 28),
                          (const MethodInfo_325BDC8 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
                if ( myFSM )
                {
                  v13 = (EventEntity_o *)myFSM;
                  if ( EventEntity__IsOpen((EventEntity_o *)myFSM, 1, 0LL) )
                    return 0;
                  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_12263/*"SHOP_EVENT_RETURN_ERROR"*/, 0LL);
                  EventName = (Il2CppObject *)EventEntity__getEventName(v13, 0LL);
                  v18 = System_String__Format(v16, EventName, 0LL);
                  v19 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
                  System_Action___ctor(
                    v19,
                    (Il2CppObject *)this,
                    Method_ShopRootComponent_OnEndDialogEventCloseWarning__,
                    0LL);
                  if ( Instance )
                  {
                    v7 = 1;
                    CommonUI__OpenNotificationDialog(
                      (CommonUI_o *)Instance,
                      (System_String_o *)StringLiteral_1/*""*/,
                      v18,
                      v19,
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
                    return v7;
                  }
                }
              }
            }
          }
        }
LABEL_47:
        sub_1C22094(myFSM, *(_QWORD *)&state);
      }
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4BD736A )
      {
        sub_1C21E38(&TerminalPramsManager_TypeInfo);
        byte_4BD736A = 1;
      }
      v11 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v11 = TerminalPramsManager_TypeInfo;
      }
      v7 = 1;
      v11->static_fields->_IsAutoResume_k__BackingField = 1;
      return v7;
    default:
      return 0;
  }
}


void __fastcall ShopRootComponent__CheckSellServantExceeded(ShopRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ShopRootComponent_o *v3; // x19
  const MethodInfo *v4; // x1
  ServantSellMenu_o *servantSellMenu; // x0
  ServantSellConfirmMenu_o *servantSellConfirmMenu; // x20
  System_Int64_array *selectedServantIds; // x21
  System_Int64_array *selectedCommandCodeIds; // x22
  System_Action_int__o *v9; // x23

  v3 = this;
  if ( (byte_4BD8A59 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_int__TypeInfo);
    this = (ShopRootComponent_o *)sub_1C21E38(&Method_ShopRootComponent_SellServantExceededConfirm__);
    byte_4BD8A59 = 1;
  }
  if ( v3->fields.inputState == 2 )
  {
    if ( !ShopRootComponent__GetIsContainExceededServant(this, v3->fields.selectedServantIds, v2) )
    {
LABEL_7:
      ShopRootComponent__SelectSellServantConfirm(v3, v4);
      return;
    }
    servantSellMenu = v3->fields.servantSellMenu;
    if ( !servantSellMenu )
      goto LABEL_11;
    if ( ServantSellMenu__get_IsSellEquipedCmdCodeLastServant(servantSellMenu, 0LL) )
      goto LABEL_7;
    servantSellConfirmMenu = v3->fields.servantSellConfirmMenu;
    selectedServantIds = v3->fields.selectedServantIds;
    selectedCommandCodeIds = v3->fields.selectedCommandCodeIds;
    v9 = (System_Action_int__o *)sub_1C22084(System_Action_int__TypeInfo);
    System_Action_int____ctor(v9, (Il2CppObject *)v3, Method_ShopRootComponent_SellServantExceededConfirm__, 0LL);
    if ( !servantSellConfirmMenu )
LABEL_11:
      sub_1C22094(servantSellMenu, v4);
    ServantSellConfirmMenu__Open(servantSellConfirmMenu, 2, selectedServantIds, selectedCommandCodeIds, v9, 0LL);
  }
}


bool __fastcall ShopRootComponent__CheckServerLimitTime(
        ShopRootComponent_o *this,
        int32_t state,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4BD8A7E & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    byte_4BD8A7E = 1;
  }
  if ( (unsigned int)state > 0x15 || ((1 << state) & 0x35DDFC) == 0 )
    return 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v5);
  return NetworkManager__CheckServerLimitTime((NetworkManager_o *)Instance, 0LL);
}


void __fastcall ShopRootComponent__CheckTutorial(ShopRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  NetworkManager_ResultCallbackFunc_o *v4; // x20
  Il2CppObject *Request_object; // x0
  __int64 v6; // x1

  if ( (byte_4BD8A6F & 1) == 0 )
  {
    sub_1C21E38(&Method_NetworkManager_getRequest_TutorialSetRequest___);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C21E38(&Method_ShopRootComponent_QuitHelp__);
    sub_1C21E38(&TutorialFlag_TypeInfo);
    sub_1C21E38(&StringLiteral_22632/*"ok"*/);
    byte_4BD8A6F = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_38930984(103, 0LL) )
  {
    ShopRootComponent__QuitHelp(this, (System_String_o *)StringLiteral_22632/*"ok"*/, v3);
  }
  else
  {
    v4 = (NetworkManager_ResultCallbackFunc_o *)sub_1C22084(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(v4, (Il2CppObject *)this, Method_ShopRootComponent_QuitHelp__, 0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v4,
                       (const MethodInfo_30345EC *)Method_NetworkManager_getRequest_TutorialSetRequest___);
    if ( !Request_object )
      sub_1C22094(0LL, v6);
    TutorialSetRequest__beginRequest((TutorialSetRequest_o *)Request_object, 103, 0LL);
  }
}


void __fastcall ShopRootComponent__CloseDetaiCheckConfirm(
        ShopRootComponent_o *this,
        bool decide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  ShopBuyItemListViewItem_o *ShopBuyItemListViewItem; // x21
  struct ShopEntity_o *Shop_k__BackingField; // x8
  ShopDetailEntity_o *ShopDetailEntity; // x0
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x1

  if ( (byte_4BD8A79 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_ShopDetailMaster___);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD8A79 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseConfirmDialog(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.listViewHelper) == 0LL)
    || (ShopBuyItemListViewItem = ShopSceneListViewControlHelper__GetShopBuyItemListViewItem(
                                    (ShopSceneListViewControlHelper_o *)Instance,
                                    this->fields.selectedItemIndex,
                                    0LL),
        (Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (CommonUI_o *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ShopDetailMaster___),
        !ShopBuyItemListViewItem)
    || (Shop_k__BackingField = ShopBuyItemListViewItem->fields._Shop_k__BackingField) == 0LL
    || !Instance )
  {
    sub_1C22094(Instance, v6);
  }
  ShopDetailEntity = ShopDetailMaster__getShopDetailEntity(
                       (ShopDetailMaster_o *)Instance,
                       Shop_k__BackingField->fields.id,
                       0LL);
  ShopRootComponent__SetFrequencyTypeCheckList((ShopRootComponent_o *)ShopDetailEntity, ShopDetailEntity, decide, v10);
  if ( decide )
    ShopRootComponent__RequestShop(this, v11);
  else
    ShopRootComponent__CloseItemConfirm(this, v11);
}


void __fastcall ShopRootComponent__CloseEventItemWindow(ShopRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *shopEventItemDrawBase; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  ShopRootConstants_c *v5; // x8
  UnityEngine_GameObject_o *v6; // x20

  if ( (byte_4BD8A7D & 1) == 0 )
  {
    sub_1C21E38(&ShopRootConstants_TypeInfo);
    byte_4BD8A7D = 1;
  }
  shopEventItemDrawBase = (UnityEngine_Component_o *)this->fields.shopEventItemDrawBase;
  if ( !shopEventItemDrawBase )
    goto LABEL_8;
  gameObject = UnityEngine_Component__get_gameObject(shopEventItemDrawBase, 0LL);
  v5 = ShopRootConstants_TypeInfo;
  v6 = gameObject;
  if ( !ShopRootConstants_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
    v5 = ShopRootConstants_TypeInfo;
  }
  TweenAlpha__Begin(v6, v5->static_fields->CLOSE_TIME, 0.0, 0LL);
  shopEventItemDrawBase = (UnityEngine_Component_o *)this->fields.currencyInfoController;
  if ( !shopEventItemDrawBase )
LABEL_8:
    sub_1C22094(shopEventItemDrawBase, method);
  ShopCurrencyInfoController__StopUpdateRemainTime((ShopCurrencyInfoController_o *)shopEventItemDrawBase, method);
}


void __fastcall ShopRootComponent__CloseItemConfirm(ShopRootComponent_o *this, const MethodInfo *method)
{
  ShopBuyItemConfirmMenu_o *buyItemConfirmMenu; // x0
  const MethodInfo *v4; // x2
  int32_t state; // w8
  ShopBuyItemListViewItem_o *v6; // x20
  ShopEntity_o *priceInfoBase; // x21
  ShopMaster_o *v8; // x22
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x2

  if ( (byte_4BD8A58 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_ShopMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    byte_4BD8A58 = 1;
  }
  if ( this->fields.inputState != 3 )
    return;
  buyItemConfirmMenu = this->fields.buyItemConfirmMenu;
  this->fields.inputState = 4;
  if ( !buyItemConfirmMenu )
    goto LABEL_55;
  if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)buyItemConfirmMenu, 0LL) )
  {
    buyItemConfirmMenu = this->fields.buyItemConfirmMenu;
    if ( !buyItemConfirmMenu )
      goto LABEL_55;
    ShopBuyItemConfirmMenu__Close(buyItemConfirmMenu, 0LL);
  }
  buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)this->fields.buyBulkItemConfirmMenu;
  if ( !buyItemConfirmMenu )
    goto LABEL_55;
  if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)buyItemConfirmMenu, 0LL) )
  {
    buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)this->fields.buyBulkItemConfirmMenu;
    if ( !buyItemConfirmMenu )
      goto LABEL_55;
    ShopBuyBulkItemConfirmMenu__Close((ShopBuyBulkItemConfirmMenu_o *)buyItemConfirmMenu, 0LL);
  }
  buyItemConfirmMenu = this->fields.ApSeedExchangeConfirmMenu;
  if ( !buyItemConfirmMenu )
    goto LABEL_55;
  if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)buyItemConfirmMenu, 0LL) )
  {
    buyItemConfirmMenu = this->fields.ApSeedExchangeConfirmMenu;
    if ( !buyItemConfirmMenu )
      goto LABEL_55;
    ShopBuyItemConfirmMenu__Close(buyItemConfirmMenu, 0LL);
  }
  buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)this->fields.ApSeedBulkExchangeConfirmMenu;
  if ( !buyItemConfirmMenu )
    goto LABEL_55;
  if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)buyItemConfirmMenu, 0LL) )
  {
    buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)this->fields.ApSeedBulkExchangeConfirmMenu;
    if ( !buyItemConfirmMenu )
      goto LABEL_55;
    ShopBuyBulkItemConfirmMenu__Close((ShopBuyBulkItemConfirmMenu_o *)buyItemConfirmMenu, 0LL);
  }
  buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)this->fields.buyStorageConfirmDialog;
  if ( !buyItemConfirmMenu )
    goto LABEL_55;
  if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)buyItemConfirmMenu, 0LL) )
  {
    buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)this->fields.buyStorageConfirmDialog;
    if ( !buyItemConfirmMenu )
      goto LABEL_55;
    BuyStorageConfirmDialogComponent__Close((BuyStorageConfirmDialogComponent_o *)buyItemConfirmMenu, 0LL);
  }
  buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)this->fields.buyStorageNotificationDialog;
  if ( !buyItemConfirmMenu )
    goto LABEL_55;
  if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)buyItemConfirmMenu, 0LL) )
  {
    buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)this->fields.buyStorageNotificationDialog;
    if ( !buyItemConfirmMenu )
      goto LABEL_55;
    BuyStorageConfirmDialogComponent__Close((BuyStorageConfirmDialogComponent_o *)buyItemConfirmMenu, 0LL);
  }
  buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)this->fields.shopResetConfirmDialog;
  if ( !buyItemConfirmMenu )
LABEL_55:
    sub_1C22094(buyItemConfirmMenu, method);
  if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)buyItemConfirmMenu, 0LL) )
  {
    buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)this->fields.shopResetConfirmDialog;
    if ( !buyItemConfirmMenu )
      goto LABEL_55;
    ShopResetConfirmDialogComponent__Close_33978596((ShopResetConfirmDialogComponent_o *)buyItemConfirmMenu, 0LL, v4);
  }
  state = this->fields.state;
  if ( state == 16 || state == 8 )
  {
    buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)this->fields.listViewHelper;
    if ( !buyItemConfirmMenu )
      goto LABEL_55;
    buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)ShopSceneListViewControlHelper__GetShopBuyItemListViewItem(
                                                       (ShopSceneListViewControlHelper_o *)buyItemConfirmMenu,
                                                       this->fields.selectedItemIndex,
                                                       0LL);
    if ( !buyItemConfirmMenu )
      goto LABEL_55;
    v6 = (ShopBuyItemListViewItem_o *)buyItemConfirmMenu;
    priceInfoBase = (ShopEntity_o *)buyItemConfirmMenu->fields.priceInfoBase;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ShopMaster___);
    if ( this->fields.buyCount >= 1 )
    {
      v8 = (ShopMaster_o *)buyItemConfirmMenu;
      if ( !buyItemConfirmMenu )
        goto LABEL_55;
      if ( ShopMaster__IsOpenPurchaseCloseShop((ShopMaster_o *)buyItemConfirmMenu, priceInfoBase, 0LL)
        && ShopRootComponent__BackScene(this, this->fields.state, v9) )
      {
        return;
      }
      if ( this->fields.buyCount >= 1 && ShopMaster__IsOpenPurchaseCloseShop(v8, priceInfoBase, 0LL) )
      {
        buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)this->fields.listViewHelper;
        if ( buyItemConfirmMenu )
        {
          ShopSceneListViewControlHelper__SetListViewOnCloseEventShop(
            (ShopSceneListViewControlHelper_o *)buyItemConfirmMenu,
            this->fields.state,
            0LL);
          method = (const MethodInfo *)(unsigned int)this->fields.state;
          if ( (_DWORD)method != 16 )
          {
            if ( (_DWORD)method == 8 )
            {
              LODWORD(method) = 7;
              this->fields.state = 7;
            }
            goto LABEL_54;
          }
          buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)this->fields.topListViewManager;
          if ( buyItemConfirmMenu )
          {
            ShopTopListViewManager__CreateList((ShopTopListViewManager_o *)buyItemConfirmMenu, 0, -1.0, 0LL);
            LODWORD(method) = this->fields.state;
LABEL_54:
            ShopRootComponent__BackMenu(this, (int32_t)method, v10);
            return;
          }
        }
        goto LABEL_55;
      }
    }
    ShopBuyItemListViewItem__Modify(v6, priceInfoBase, 0LL);
  }
  buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)this->fields.listViewHelper;
  if ( !buyItemConfirmMenu )
    goto LABEL_55;
  ShopSceneListViewControlHelper__SetListViewOnCloseBuyItemConfirm(
    (ShopSceneListViewControlHelper_o *)buyItemConfirmMenu,
    this->fields.state,
    0LL);
  this->fields.inputState = 2;
}


void __fastcall ShopRootComponent__CloseSellServantConfirm(ShopRootComponent_o *this, const MethodInfo *method)
{
  ServantSellConfirmMenu_o *servantSellConfirmMenu; // x0
  const MethodInfo *v4; // x2

  if ( this->fields.inputState == 2 )
  {
    if ( this->fields.state == 9 )
    {
      servantSellConfirmMenu = this->fields.servantSellConfirmMenu;
      if ( !servantSellConfirmMenu )
        goto LABEL_13;
      if ( !ServantSellConfirmMenu__get_IsCommandCodeRemoveResult(servantSellConfirmMenu, 0LL) )
        ShopRootComponent__PlayVoiceBack(this, this->fields.state, v4);
    }
    servantSellConfirmMenu = this->fields.servantSellConfirmMenu;
    if ( servantSellConfirmMenu )
    {
      if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)servantSellConfirmMenu, 0LL) )
      {
        servantSellConfirmMenu = this->fields.servantSellConfirmMenu;
        if ( !servantSellConfirmMenu )
          goto LABEL_13;
        ServantSellConfirmMenu__Close(servantSellConfirmMenu, 0LL);
      }
      servantSellConfirmMenu = (ServantSellConfirmMenu_o *)this->fields.listViewHelper;
      if ( servantSellConfirmMenu )
      {
        ShopSceneListViewControlHelper__SetListViewOnCloseSellServantConfirm(
          (ShopSceneListViewControlHelper_o *)servantSellConfirmMenu,
          this->fields.state,
          this->fields.selectedServantIds,
          this->fields.selectedCommandCodeIds,
          0LL);
        return;
      }
    }
LABEL_13:
    sub_1C22094(servantSellConfirmMenu, method);
  }
}


void __fastcall ShopRootComponent__CloseShopResetDialog(
        ShopRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x20
  ShopSceneListViewControlHelper_o *shopResetConfirmDialog; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  const MethodInfo *v14; // x2
  ShopBuyItemListViewItem_o *ShopBuyItemListViewItem; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  NetworkManager_ResultCallbackFunc_o *v22; // x21
  Il2CppObject *Request_object; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  struct ShopResetConfirmDialogComponent_o *v30; // x19
  System_Action_o *v31; // x21
  System_Action_o *v32; // x1

  if ( (byte_4BD8A86 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_NetworkManager_getRequest_ShopResetPurchaseNumRequest___);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C21E38(&Method_ShopRootComponent___c__DisplayClass158_0__CloseShopResetDialog_b__0__);
    sub_1C21E38(&Method_ShopRootComponent___c__DisplayClass158_0__CloseShopResetDialog_b__1__);
    sub_1C21E38(&ShopRootComponent___c__DisplayClass158_0_TypeInfo);
    byte_4BD8A86 = 1;
  }
  v5 = sub_1C22084(ShopRootComponent___c__DisplayClass158_0_TypeInfo);
  ShopRootComponent___c__DisplayClass158_0___ctor((ShopRootComponent___c__DisplayClass158_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_13;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 16), (int64_t)this, v8, v9, v10, v11, v12, v13);
  if ( !isDecide )
  {
    shopResetConfirmDialog = (ShopSceneListViewControlHelper_o *)this->fields.shopResetConfirmDialog;
    if ( shopResetConfirmDialog )
    {
      v32 = 0LL;
      goto LABEL_12;
    }
LABEL_13:
    sub_1C22094(shopResetConfirmDialog, v7);
  }
  shopResetConfirmDialog = this->fields.listViewHelper;
  if ( !shopResetConfirmDialog )
    goto LABEL_13;
  ShopBuyItemListViewItem = ShopSceneListViewControlHelper__GetShopBuyItemListViewItem(
                              shopResetConfirmDialog,
                              this->fields.selectedItemIndex,
                              0LL);
  *(_QWORD *)(v5 + 24) = ShopBuyItemListViewItem;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 24), (int64_t)ShopBuyItemListViewItem, v16, v17, v18, v19, v20, v21);
  v22 = (NetworkManager_ResultCallbackFunc_o *)sub_1C22084(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v22,
    (Il2CppObject *)v5,
    Method_ShopRootComponent___c__DisplayClass158_0__CloseShopResetDialog_b__0__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v22,
                     (const MethodInfo_30345EC *)Method_NetworkManager_getRequest_ShopResetPurchaseNumRequest___);
  *(_QWORD *)(v5 + 32) = Request_object;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)Request_object, v24, v25, v26, v27, v28, v29);
  v30 = this->fields.shopResetConfirmDialog;
  v31 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(
    v31,
    (Il2CppObject *)v5,
    Method_ShopRootComponent___c__DisplayClass158_0__CloseShopResetDialog_b__1__,
    0LL);
  if ( !v30 )
    goto LABEL_13;
  shopResetConfirmDialog = (ShopSceneListViewControlHelper_o *)v30;
  v32 = v31;
LABEL_12:
  ShopResetConfirmDialogComponent__Close_33978596((ShopResetConfirmDialogComponent_o *)shopResetConfirmDialog, v32, v14);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopRootComponent__CloseStonePurchaseMenu(
        ShopRootComponent_o *this,
        int32_t result,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  ShopPlayVoiceComponent_o *shopPlayVoiceComponent; // x0
  const MethodInfo *v7; // x2

  if ( (byte_4BD8A81 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_12312/*"SHOP_SCENE_VOICE_CANCEL"*/);
    sub_1C21E38(&StringLiteral_12311/*"SHOP_SCENE_VOICE_BACK2"*/);
    byte_4BD8A81 = 1;
  }
  if ( result )
    goto LABEL_6;
  shopPlayVoiceComponent = this->fields.shopPlayVoiceComponent;
  if ( !shopPlayVoiceComponent )
    goto LABEL_9;
  if ( !ShopPlayVoiceComponent__PlayVoiceOnce(
          shopPlayVoiceComponent,
          (System_String_o *)StringLiteral_12312/*"SHOP_SCENE_VOICE_CANCEL"*/,
          0x2000,
          v3) )
  {
LABEL_6:
    shopPlayVoiceComponent = this->fields.shopPlayVoiceComponent;
    if ( shopPlayVoiceComponent )
    {
      ShopPlayVoiceComponent__PlayVoiceOnce(shopPlayVoiceComponent, (System_String_o *)StringLiteral_12311/*"SHOP_SCENE_VOICE_BACK2"*/, 4096, v3);
      goto LABEL_8;
    }
LABEL_9:
    sub_1C22094(shopPlayVoiceComponent, *(_QWORD *)&result);
  }
LABEL_8:
  ShopRootComponent__MenuBackFromStonePurchase(this, result, v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopRootComponent__CloseStorageDetailCheckConfirm(
        ShopRootComponent_o *this,
        int32_t buyCount,
        const MethodInfo *method)
{
  BuyStorageConfirmDialogComponent_o *buyStorageConfirmDialog; // x20
  System_Action_o *v6; // x21
  ShopSceneListViewControlHelper_o *listViewHelper; // x0
  ShopBuyItemListViewItem_o *v8; // x20
  ShopRootComponent_o *v9; // x0
  const MethodInfo *v10; // x2
  ShopBuyBulkItemConfirmMenu_o *buyBulkItemConfirmMenu; // x20
  System_Action_int__o *v12; // x21

  if ( (byte_4BD8A7A & 1) == 0 )
  {
    sub_1C21E38(&System_Action_int__TypeInfo);
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_ShopRootComponent_RequestShop__);
    sub_1C21E38(&Method_ShopRootComponent_SelectedBuyItemConfirm__);
    byte_4BD8A7A = 1;
  }
  this->fields.buyCount = buyCount;
  if ( buyCount )
  {
    buyStorageConfirmDialog = this->fields.buyStorageConfirmDialog;
    v6 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(v6, (Il2CppObject *)this, Method_ShopRootComponent_RequestShop__, 0LL);
    if ( buyStorageConfirmDialog )
    {
      BuyStorageConfirmDialogComponent__Close_33732812(buyStorageConfirmDialog, v6, 0LL);
      return;
    }
LABEL_13:
    sub_1C22094(listViewHelper, *(_QWORD *)&buyCount);
  }
  listViewHelper = this->fields.listViewHelper;
  this->fields.inputState = 2;
  if ( !listViewHelper )
    goto LABEL_13;
  listViewHelper = (ShopSceneListViewControlHelper_o *)ShopSceneListViewControlHelper__GetShopBuyItemListViewItem(
                                                         listViewHelper,
                                                         this->fields.selectedItemIndex,
                                                         0LL);
  if ( !this->fields.buyStorageConfirmDialog )
    goto LABEL_13;
  v8 = (ShopBuyItemListViewItem_o *)listViewHelper;
  BuyStorageConfirmDialogComponent__Close(this->fields.buyStorageConfirmDialog, 0LL);
  if ( ShopRootComponent__GetIsBulk(v9, v8, v10) )
  {
    buyBulkItemConfirmMenu = this->fields.buyBulkItemConfirmMenu;
    v12 = (System_Action_int__o *)sub_1C22084(System_Action_int__TypeInfo);
    System_Action_int____ctor(v12, (Il2CppObject *)this, Method_ShopRootComponent_SelectedBuyItemConfirm__, 0LL);
    if ( !buyBulkItemConfirmMenu )
      goto LABEL_13;
    ShopBuyBulkItemConfirmMenu__Modify(buyBulkItemConfirmMenu, v12, 0LL);
  }
  else
  {
    listViewHelper = this->fields.listViewHelper;
    if ( !listViewHelper )
      goto LABEL_13;
    ShopSceneListViewControlHelper__SetListViewOnCloseBuyItemConfirm(listViewHelper, this->fields.state, 0LL);
  }
}


void __fastcall ShopRootComponent__CreateShopDetailCheckList(ShopRootComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__int__o *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7
  void *Instance; // x0
  __int64 v10; // x1
  int v11; // w8
  void *v12; // x19
  unsigned int v13; // w21
  __int64 v14; // x8

  if ( (byte_4BD8A83 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_ShopDetailMaster___);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    sub_1C21E38(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C21E38(&ShopRootComponent_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD8A83 = 1;
  }
  if ( !ShopRootComponent_TypeInfo->static_fields->isInitialized )
  {
    v2 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C22084(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v2,
      (const MethodInfo_32AC5B8 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    ShopRootComponent_TypeInfo->static_fields->shopDetailCheckList = v2;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)ShopRootComponent_TypeInfo->static_fields,
      (int64_t)v2,
      v3,
      v4,
      v5,
      v6,
      v7,
      v8);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_15;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ShopDetailMaster___);
    if ( !Instance )
      goto LABEL_15;
    Instance = ShopDetailMaster__getShopDetailEntityList((ShopDetailMaster_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_15;
    v11 = *((_DWORD *)Instance + 6);
    v12 = Instance;
    if ( v11 >= 1 )
    {
      v13 = 0;
      while ( 1 )
      {
        if ( v13 >= v11 )
          sub_1C2209C(Instance, v10);
        v14 = *((_QWORD *)v12 + (int)v13 + 4);
        if ( !v14 )
          break;
        Instance = ShopRootComponent_TypeInfo->static_fields->shopDetailCheckList;
        if ( !Instance )
          break;
        System_Collections_Generic_Dictionary_int__int___set_Item(
          (System_Collections_Generic_Dictionary_int__int__o *)Instance,
          *(_DWORD *)(v14 + 16),
          0,
          (const MethodInfo_32ACF68 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
        v11 = *((_DWORD *)v12 + 6);
        if ( (int)++v13 >= v11 )
          goto LABEL_13;
      }
LABEL_15:
      sub_1C22094(Instance, v10);
    }
LABEL_13:
    ShopRootComponent_TypeInfo->static_fields->isInitialized = 1;
  }
}


void __fastcall ShopRootComponent__DeleteContinueData(const MethodInfo *method)
{
  if ( (byte_4BD8A45 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_13116/*"SpecialItemHelp"*/);
    sub_1C21E38(&StringLiteral_12994/*"Shop15Help"*/);
    sub_1C21E38(&StringLiteral_2417/*"AnonymousHelp"*/);
    sub_1C21E38(&StringLiteral_11364/*"RarePriHelp"*/);
    byte_4BD8A45 = 1;
  }
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_2417/*"AnonymousHelp"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11364/*"RarePriHelp"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13116/*"SpecialItemHelp"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_12994/*"Shop15Help"*/, 0LL);
}


void __fastcall ShopRootComponent__DeleteJumpInfoOnInit(
        ShopRootComponent_o *this,
        int32_t state,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( state == 9 )
  {
    this->fields.jumpInfo = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.jumpInfo, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
  }
}


void __fastcall ShopRootComponent__EndLimitCountSealInfoDialog(ShopRootComponent_o *this, const MethodInfo *method)
{
  SummonInfoDlgComponent_o *limitCountSealInfoDlg; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  ShopBuyItemListViewItem_o *ShopBuyItemListViewItem; // x0
  const MethodInfo *v7; // x4

  if ( (byte_4BD8A55 & 1) == 0 )
  {
    sub_1C21E38(&Method_ShopRootComponent_EndLimitCountSealInfoDialog__);
    byte_4BD8A55 = 1;
  }
  limitCountSealInfoDlg = this->fields.limitCountSealInfoDlg;
  if ( !limitCountSealInfoDlg )
    goto LABEL_8;
  SummonInfoDlgComponent__Close(limitCountSealInfoDlg, 0LL, 0LL);
  v4 = Method_ShopRootComponent_EndLimitCountSealInfoDialog__;
  if ( (*((_BYTE *)Method_ShopRootComponent_EndLimitCountSealInfoDialog__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C21E50(Method_ShopRootComponent_EndLimitCountSealInfoDialog__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0LL);
  limitCountSealInfoDlg = (SummonInfoDlgComponent_o *)this->fields.listViewHelper;
  if ( !limitCountSealInfoDlg )
LABEL_8:
    sub_1C22094(limitCountSealInfoDlg, method);
  ShopBuyItemListViewItem = ShopSceneListViewControlHelper__GetShopBuyItemListViewItem(
                              (ShopSceneListViewControlHelper_o *)limitCountSealInfoDlg,
                              this->fields.limitCountSealInfoIndex,
                              0LL);
  ShopRootComponent__OpenConfirmMenu(
    this,
    this->fields.state,
    ShopBuyItemListViewItem,
    this->fields.limitCountSealInfoBulk,
    v7);
  this->fields.inputState = 2;
  this->fields.limitCountSealInfoIndex = -1;
  this->fields.limitCountSealInfoBulk = 0;
}


void __fastcall ShopRootComponent__EndRequestSellServant(
        ShopRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  ServantSellMenu_o *servantSellMenu; // x0
  struct ServantSellMenu_o *v6; // x8
  int32_t tabKind; // w21
  bool v8; // w0
  int32_t ServantSellConfirmKindOnRequestEnd; // w0
  ServantSellConfirmMenu_o *servantSellConfirmMenu; // x22
  System_Int64_array *selectedServantIds; // x20
  System_Int64_array *selectedCommandCodeIds; // x21
  int32_t v13; // w23
  System_Action_int__o *v14; // x24
  const MethodInfo *v15; // x1

  if ( (byte_4BD8A69 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_int__TypeInfo);
    sub_1C21E38(&Method_ShopRootComponent_EndSellResultServant__);
    sub_1C21E38(&StringLiteral_22456/*"ng"*/);
    byte_4BD8A69 = 1;
  }
  servantSellMenu = this->fields.servantSellMenu;
  if ( !servantSellMenu )
    goto LABEL_8;
  ServantSellMenu__Init(servantSellMenu, 0LL);
  servantSellMenu = (ServantSellMenu_o *)this->fields.servantSellConfirmMenu;
  if ( !servantSellMenu )
    goto LABEL_8;
  ServantSellConfirmMenu__Init((ServantSellConfirmMenu_o *)servantSellMenu, 0LL);
  v6 = this->fields.servantSellMenu;
  if ( !v6 )
    goto LABEL_8;
  tabKind = v6->fields.tabKind;
  v8 = System_String__op_Equality(result, (System_String_o *)StringLiteral_22456/*"ng"*/, 0LL);
  ServantSellConfirmKindOnRequestEnd = ServantSellConfirmMenu__GetServantSellConfirmKindOnRequestEnd(tabKind, v8, 0LL);
  servantSellConfirmMenu = this->fields.servantSellConfirmMenu;
  selectedServantIds = this->fields.selectedServantIds;
  selectedCommandCodeIds = this->fields.selectedCommandCodeIds;
  v13 = ServantSellConfirmKindOnRequestEnd;
  v14 = (System_Action_int__o *)sub_1C22084(System_Action_int__TypeInfo);
  System_Action_int____ctor(v14, (Il2CppObject *)this, Method_ShopRootComponent_EndSellResultServant__, 0LL);
  if ( !servantSellConfirmMenu )
LABEL_8:
    sub_1C22094(servantSellMenu, result);
  ServantSellConfirmMenu__Open(servantSellConfirmMenu, v13, selectedServantIds, selectedCommandCodeIds, v14, 0LL);
  ShopRootComponent__RefreshInfo(this, v15);
}


void __fastcall ShopRootComponent__EndRequestShop(
        ShopRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  void *listViewHelper; // x0
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x3
  int32_t state; // w8
  const MethodInfo *v10; // x1
  __int64 v11; // x2

  if ( (byte_4BD8A5E & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_22456/*"ng"*/);
    byte_4BD8A5E = 1;
  }
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_22456/*"ng"*/, 0LL) )
  {
    ShopRootComponent__RequestEnd(this, v5);
    return;
  }
  listViewHelper = this->fields.listViewHelper;
  if ( !listViewHelper )
    goto LABEL_16;
  listViewHelper = ShopSceneListViewControlHelper__GetShopBuyItemListViewItem(
                     (ShopSceneListViewControlHelper_o *)listViewHelper,
                     this->fields.selectedItemIndex,
                     0LL);
  if ( !listViewHelper )
    goto LABEL_16;
  state = this->fields.state;
  v5 = (const MethodInfo *)listViewHelper;
  if ( (unsigned int)(state - 11) < 2 )
  {
    ShopRootComponent__ShowStorageDialog(this, (ShopBuyItemListViewItem_o *)listViewHelper, v7);
    goto LABEL_11;
  }
  if ( state != 14 )
  {
    v11 = *((_QWORD *)listViewHelper + 14);
    if ( v11 )
    {
      if ( *(_DWORD *)(v11 + 48) == 5 )
        ShopRootComponent__ShowSetItemDialog(this, *((ShopEntity_o **)listViewHelper + 14), (const MethodInfo *)v11);
      else
        ShopRootComponent__ShowNormalItemDialog(
          this,
          (ShopBuyItemListViewItem_o *)listViewHelper,
          (ShopEntity_o *)v11,
          v8);
      goto LABEL_11;
    }
LABEL_16:
    sub_1C22094(listViewHelper, v5);
  }
  ShopRootComponent__PlayLvExceedItemReleaseEffect(this, (ShopBuyItemListViewItem_o *)listViewHelper, v7);
LABEL_11:
  ShopRootComponent__RefreshInfo(this, v10);
}


int32_t __fastcall ShopRootComponent__GetCurrency(
        ShopRootComponent_o *this,
        ShopEntity_o *shopEntity,
        const MethodInfo *method)
{
  int32_t result; // w0
  Il2CppObject *Master_object; // x20
  NetworkManager_c *v6; // x0
  int64_t userIdNumber; // x21

  if ( (byte_4BD8A75 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    this = (ShopRootComponent_o *)sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD8A75 = 1;
  }
  if ( !shopEntity )
LABEL_24:
    sub_1C22094(this, shopEntity);
  result = 0;
  switch ( shopEntity->fields.payType )
  {
    case 1:
      this = (ShopRootComponent_o *)UserGameMaster__getSelfUserGame(0LL);
      if ( !this )
        goto LABEL_24;
      result = (int32_t)this->fields.ApSeedBulkExchangeConfirmMenu;
      break;
    case 2:
      this = (ShopRootComponent_o *)UserGameMaster__getSelfUserGame(0LL);
      if ( !this )
        goto LABEL_24;
      result = (int32_t)this->fields.topListViewManager;
      break;
    case 4:
      this = (ShopRootComponent_o *)UserGameMaster__getSelfUserGame(0LL);
      if ( !this )
        goto LABEL_24;
      result = (int32_t)this->fields.servantSellMenu;
      break;
    case 6:
    case 8:
    case 9:
    case 0xB:
    case 0xC:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserItemMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4BD6FF5 )
      {
        sub_1C21E38(&NetworkManager_TypeInfo);
        byte_4BD6FF5 = 1;
      }
      v6 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v6 = NetworkManager_TypeInfo;
      }
      userIdNumber = v6->static_fields->userIdNumber;
      this = (ShopRootComponent_o *)ShopEntity__GetItemID(shopEntity, 0LL);
      if ( !Master_object )
        goto LABEL_24;
      this = (ShopRootComponent_o *)UserItemMaster__GetEntityDefinitely(
                                      (UserItemMaster_o *)Master_object,
                                      userIdNumber,
                                      (int32_t)this,
                                      0LL);
      if ( !this )
        goto LABEL_24;
      result = HIDWORD(this->fields.m_CancellationTokenSource);
      break;
    case 0xA:
      this = (ShopRootComponent_o *)UserGameMaster__getSelfUserGame(0LL);
      if ( !this )
        goto LABEL_24;
      result = HIDWORD(this->fields.servantSellMenu);
      break;
    default:
      return result;
  }
  return result;
}


int32_t __fastcall ShopRootComponent__GetInputStateOnInit(
        ShopRootComponent_o *this,
        int32_t state,
        const MethodInfo *method)
{
  if ( (unsigned int)(state - 1) > 0x13 )
    return 0;
  else
    return dword_C38288[state - 1];
}


bool __fastcall ShopRootComponent__GetIsBulk(
        ShopRootComponent_o *this,
        ShopBuyItemListViewItem_o *item,
        const MethodInfo *method)
{
  struct ShopEntity_o *Shop_k__BackingField; // x20
  _BOOL8 IsEnable; // x0
  const MethodInfo *v6; // x2
  int32_t limitNum; // w8
  char v8; // w19
  int32_t payType; // w22
  CommonConsumeEntity_array *CommonConsumeEntities; // x0
  int max_length; // w8
  CommonConsumeEntity_array *v12; // x20
  __int64 v13; // x21
  int32_t Currency; // w21
  int32_t Price; // w0
  bool v17; // cc
  char v18; // w8

  if ( !item )
    goto LABEL_26;
  Shop_k__BackingField = item->fields._Shop_k__BackingField;
  if ( !Shop_k__BackingField )
    goto LABEL_26;
  if ( ShopEntity__IsSoldOut(item->fields._Shop_k__BackingField, 0LL) )
    return 0;
  IsEnable = ShopEntity__IsEnable(Shop_k__BackingField, 0LL, 0LL);
  if ( !IsEnable )
    return 0;
  limitNum = Shop_k__BackingField->fields.limitNum;
  if ( limitNum )
    v8 = limitNum - item->fields._TotalNum_k__BackingField > 1;
  else
    v8 = 1;
  payType = Shop_k__BackingField->fields.payType;
  if ( payType != 14 )
  {
    Currency = ShopRootComponent__GetCurrency((ShopRootComponent_o *)IsEnable, Shop_k__BackingField, v6);
    Price = ShopEntity__GetPrice(Shop_k__BackingField, 0LL);
    if ( payType == 8 )
      v17 = Currency < Price;
    else
      v17 = Currency < 2 * Price;
    v18 = !v17;
    return v8 & v18;
  }
  CommonConsumeEntities = ShopEntity__GetCommonConsumeEntities(Shop_k__BackingField, 0LL);
  if ( !CommonConsumeEntities )
    return 0;
  max_length = CommonConsumeEntities->max_length;
  v12 = CommonConsumeEntities;
  if ( max_length >= 1 )
  {
    v13 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v13 >= max_length )
        sub_1C2209C(CommonConsumeEntities, item);
      this = (ShopRootComponent_o *)v12->m_Items[v13];
      if ( !this )
        break;
      CommonConsumeEntities = (CommonConsumeEntity_array *)CommonConsumeEntity__GetUserBuyableNum(
                                                             (CommonConsumeEntity_o *)this,
                                                             0LL);
      if ( (int)CommonConsumeEntities < 2 )
        return 0;
      max_length = v12->max_length;
      if ( (int)++v13 >= max_length )
        return v8;
    }
LABEL_26:
    sub_1C22094(this, item);
  }
  return v8;
}


bool __fastcall ShopRootComponent__GetIsContainExceededServant(
        ShopRootComponent_o *this,
        System_Int64_array *selectServantIds,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  __int64 v6; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v7; // x20
  unsigned __int64 v8; // x21

  if ( (byte_4BD8A5A & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C21E38(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD8A5A = 1;
  }
  if ( !selectServantIds )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_14:
    sub_1C22094(Instance, v5);
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserServantMaster___);
  v6 = *(_QWORD *)&selectServantIds->max_length;
  if ( (int)v6 < 1 )
    return 0;
  v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v8 = 0LL;
  while ( 1 )
  {
    if ( v8 >= (unsigned int)v6 )
      sub_1C2209C(Instance, v5);
    if ( !v7 )
      goto LABEL_14;
    Instance = DataMasterBase_object__object__long___GetEntity(
                 v7,
                 selectServantIds->m_Items[v8],
                 (const MethodInfo_325E324 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( Instance )
    {
      Instance = (Il2CppObject *)UserServantEntity__isExceeded((UserServantEntity_o *)Instance, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        return 1;
    }
    LODWORD(v6) = selectServantIds->max_length;
    if ( (__int64)++v8 >= (int)v6 )
      return 0;
  }
}


int32_t __fastcall ShopRootComponent__GetShopItemBuyNum(
        ShopRootComponent_o *this,
        ShopBuyItemListViewItem_o *item,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  Il2CppObject *MasterData_object; // x20
  struct ShopEntity_o *Shop_k__BackingField; // x8
  UserShopEntity_o *EntityDefinitely; // x0

  if ( (byte_4BD8A56 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD8A56 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BD6FF5 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD6FF5 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !item || (Shop_k__BackingField = item->fields._Shop_k__BackingField) == 0LL || !MasterData_object )
LABEL_16:
    sub_1C22094(Instance, v5);
  EntityDefinitely = UserShopMaster__GetEntityDefinitely(
                       (UserShopMaster_o *)MasterData_object,
                       *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                       Shop_k__BackingField->fields.baseShopId,
                       0LL);
  if ( EntityDefinitely )
    LODWORD(EntityDefinitely) = EntityDefinitely->fields.num;
  return (int)EntityDefinitely;
}


int32_t __fastcall ShopRootComponent__GetStateOnBack(
        ShopRootComponent_o *this,
        int32_t state,
        const MethodInfo *method)
{
  if ( state == 8 )
    return 7;
  else
    return 1;
}


int32_t __fastcall ShopRootComponent__GetStateOnInit(
        ShopRootComponent_o *this,
        System_String_o *jumpInfoName,
        int32_t eventId,
        const MethodInfo *method)
{
  uint32_t v6; // w0

  if ( (byte_4BD8A7F & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_9034/*"ManaPrism"*/);
    sub_1C21E38(&StringLiteral_7242/*"GrailFragments"*/);
    sub_1C21E38(&StringLiteral_14806/*"TradeAp"*/);
    sub_1C21E38(&StringLiteral_8537/*"LeafExchange"*/);
    sub_1C21E38(&StringLiteral_11018/*"PurePrismExchange"*/);
    sub_1C21E38(&StringLiteral_6356/*"EventItem"*/);
    sub_1C21E38(&StringLiteral_4651/*"CoinRoom"*/);
    sub_1C21E38(&StringLiteral_13242/*"StoneFragments"*/);
    sub_1C21E38(&StringLiteral_11365/*"RarePrism"*/);
    sub_1C21E38(&StringLiteral_12833/*"SellServant"*/);
    byte_4BD8A7F = 1;
  }
  v6 = PrivateImplementationDetails___ComputeStringHash(jumpInfoName, 0LL);
  if ( v6 <= 0xBD992A97 )
  {
    if ( v6 > 0x897BAECB )
    {
      if ( v6 == -1542091583 )
      {
        if ( System_String__op_Equality(jumpInfoName, (System_String_o *)StringLiteral_11018/*"PurePrismExchange"*/, 0LL) )
          return 18;
      }
      else if ( v6 == -1477675373 )
      {
        if ( System_String__op_Equality(jumpInfoName, (System_String_o *)StringLiteral_7242/*"GrailFragments"*/, 0LL) )
          return 14;
      }
      else if ( v6 == -1114035561
             && System_String__op_Equality(jumpInfoName, (System_String_o *)StringLiteral_4651/*"CoinRoom"*/, 0LL) )
      {
        return 17;
      }
    }
    else if ( v6 == -1988383029 )
    {
      if ( System_String__op_Equality(jumpInfoName, (System_String_o *)StringLiteral_13242/*"StoneFragments"*/, 0LL) )
        return 4;
    }
    else if ( v6 == 1526818832 && System_String__op_Equality(jumpInfoName, (System_String_o *)StringLiteral_8537/*"LeafExchange"*/, 0LL) )
    {
      return 20;
    }
    return 1;
  }
  if ( v6 <= 0xCD42BE08 )
  {
    if ( v6 == -1075479726 )
    {
      if ( System_String__op_Equality(jumpInfoName, (System_String_o *)StringLiteral_12833/*"SellServant"*/, 0LL) )
        return 9;
    }
    else if ( v6 == -851263992 && System_String__op_Equality(jumpInfoName, (System_String_o *)StringLiteral_14806/*"TradeAp"*/, 0LL) )
    {
      return 19;
    }
    return 1;
  }
  if ( v6 == -74236182 )
  {
    if ( System_String__op_Equality(jumpInfoName, (System_String_o *)StringLiteral_11365/*"RarePrism"*/, 0LL) )
      return 3;
    return 1;
  }
  if ( v6 != -472076328 )
  {
    if ( v6 == -490311229 && System_String__op_Equality(jumpInfoName, (System_String_o *)StringLiteral_9034/*"ManaPrism"*/, 0LL) )
      return 2;
    return 1;
  }
  if ( !System_String__op_Equality(jumpInfoName, (System_String_o *)StringLiteral_6356/*"EventItem"*/, 0LL) )
    return 1;
  if ( eventId < 1 )
    return 7;
  else
    return 8;
}


void __fastcall ShopRootComponent__Init(ShopRootComponent_o *this, const MethodInfo *method)
{
  struct SceneJumpInfo_o *jumpInfo; // x8
  int32_t id; // w9
  System_String_o **p_name; // x8
  ShopCurrencyInfoController_o *currencyInfoController; // x23
  ShopTopListViewManager_o *topListViewManager; // x24
  ShopBuyItemListViewManager_o *buyItemListViewManager; // x21
  UnityEngine_GameObject_o *buyItemListViewBase; // x25
  UnityEngine_GameObject_o *topListViewBase; // x27
  ShopEventListViewManager_o *eventListViewManager; // x26
  ServantSellMenu_o *servantSellMenu; // x20
  ShopHelpListViewManager_o *helpListViewManager; // x22
  UnityEngine_GameObject_o *helpListViewBase; // x28
  ShopSceneListViewControlHelper_o *v15; // x29
  struct ShopSceneListViewControlHelper_o **p_listViewHelper; // x22
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  __int64 v23; // x1
  ShopSceneListViewControlHelper_o *listViewHelper; // x0
  ShopSceneListViewControlHelper_o *v25; // x23
  System_Action_o *v26; // x24
  System_Action_T__o *v27; // x25
  System_Action_int__o *v28; // x26
  System_Action_int__o *v29; // x27
  System_Action_T1__T2__T3__o *v30; // x28
  System_Action_o *v31; // x29
  ShopRootComponent_o *v32; // x0
  const MethodInfo *v33; // x3
  unsigned int StateOnInit; // w0
  int32_t v35; // w8
  _BOOL4 isFromCoinRoom; // w9
  float v37; // s0
  const MethodInfo *v38; // x3
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  UnityEngine_GameObject_o *gameObject; // x20
  System_Action_int__o *v46; // x21
  System_String_o *jumpInfoName; // [xsp+28h] [xbp-78h]
  int32_t eventId; // [xsp+34h] [xbp-6Ch]
  UnityEngine_GameObject_o *eventListViewBase; // [xsp+38h] [xbp-68h]

  if ( (byte_4BD8A4A & 1) == 0 )
  {
    sub_1C21E38(&System_Action_ShopRootConstants_State__TypeInfo);
    sub_1C21E38(&System_Action_int__TypeInfo);
    sub_1C21E38(&System_Action_ServantSellMenu_ResultKind__long____long____TypeInfo);
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_ShopRootComponent_OnMoveEnd__);
    sub_1C21E38(&Method_ShopRootComponent_OnSelectBuyItem__);
    sub_1C21E38(&Method_ShopRootComponent_OnSelectEvent__);
    sub_1C21E38(&Method_ShopRootComponent_OnSelectSellServant__);
    sub_1C21E38(&Method_ShopRootComponent_OnSelectTop__);
    sub_1C21E38(&Method_ShopRootComponent_OpenHelp__);
    sub_1C21E38(&Method_ShopRootComponent__Init_b__76_0__);
    sub_1C21E38(&ShopSceneListViewControlHelper_TypeInfo);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD8A4A = 1;
  }
  if ( !this->fields.state )
  {
    jumpInfo = this->fields.jumpInfo;
    if ( jumpInfo )
    {
      id = jumpInfo->fields.id;
      p_name = &jumpInfo->fields.name;
      eventId = id;
    }
    else
    {
      eventId = 0;
      p_name = (System_String_o **)&StringLiteral_1/*""*/;
    }
    currencyInfoController = this->fields.currencyInfoController;
    topListViewManager = this->fields.topListViewManager;
    buyItemListViewManager = this->fields.buyItemListViewManager;
    buyItemListViewBase = this->fields.buyItemListViewBase;
    topListViewBase = this->fields.topListViewBase;
    jumpInfoName = *p_name;
    eventListViewManager = this->fields.eventListViewManager;
    servantSellMenu = this->fields.servantSellMenu;
    helpListViewManager = this->fields.helpListViewManager;
    helpListViewBase = this->fields.helpListViewBase;
    eventListViewBase = this->fields.eventListViewBase;
    v15 = (ShopSceneListViewControlHelper_o *)sub_1C22084(ShopSceneListViewControlHelper_TypeInfo);
    ShopSceneListViewControlHelper___ctor(
      v15,
      topListViewBase,
      eventListViewBase,
      buyItemListViewBase,
      helpListViewBase,
      currencyInfoController,
      topListViewManager,
      eventListViewManager,
      buyItemListViewManager,
      servantSellMenu,
      helpListViewManager,
      0LL);
    p_listViewHelper = &this->fields.listViewHelper;
    this->fields.listViewHelper = v15;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.listViewHelper, (int64_t)v15, v17, v18, v19, v20, v21, v22);
    listViewHelper = this->fields.listViewHelper;
    if ( !listViewHelper )
      goto LABEL_19;
    ShopSceneListViewControlHelper__SetOtherObjects(
      listViewHelper,
      this->fields.titleInfo,
      this->fields.standFigureBack,
      this->fields.giftButtonControl,
      this->fields.backgroundTexture,
      0LL);
    v25 = this->fields.listViewHelper;
    v26 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(v26, (Il2CppObject *)this, Method_ShopRootComponent_OnMoveEnd__, 0LL);
    v27 = (System_Action_T__o *)sub_1C22084(System_Action_ShopRootConstants_State__TypeInfo);
    System_Action_Int32Enum____ctor(v27, (Il2CppObject *)this, (intptr_t)Method_ShopRootComponent_OnSelectTop__, 0LL);
    v28 = (System_Action_int__o *)sub_1C22084(System_Action_int__TypeInfo);
    System_Action_int____ctor(v28, (Il2CppObject *)this, (intptr_t)Method_ShopRootComponent_OnSelectEvent__, 0LL);
    v29 = (System_Action_int__o *)sub_1C22084(System_Action_int__TypeInfo);
    System_Action_int____ctor(v29, (Il2CppObject *)this, (intptr_t)Method_ShopRootComponent_OnSelectBuyItem__, 0LL);
    v30 = (System_Action_T1__T2__T3__o *)sub_1C22084(System_Action_ServantSellMenu_ResultKind__long____long____TypeInfo);
    System_Action_Int32Enum__object__object____ctor(
      v30,
      (Il2CppObject *)this,
      Method_ShopRootComponent_OnSelectSellServant__,
      0LL);
    v31 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(v31, (Il2CppObject *)this, Method_ShopRootComponent_OpenHelp__, 0LL);
    if ( !v25 )
      goto LABEL_19;
    ShopSceneListViewControlHelper__SetCallbackEvents(
      v25,
      v26,
      (System_Action_ShopRootConstants_State__o *)v27,
      v28,
      v29,
      (System_Action_ServantSellMenu_ResultKind__long____long____o *)v30,
      v31,
      0LL);
    StateOnInit = ShopRootComponent__GetStateOnInit(v32, jumpInfoName, eventId, v33);
    v23 = StateOnInit;
    this->fields.state = StateOnInit;
    v35 = StateOnInit - 1 > 0x13 ? 0 : dword_C38288[StateOnInit - 1];
    isFromCoinRoom = this->fields.isFromCoinRoom;
    this->fields.inputState = v35;
    v37 = isFromCoinRoom ? this->fields.saveScrollBarValue : -1.0;
    listViewHelper = *p_listViewHelper;
    if ( !*p_listViewHelper )
LABEL_19:
      sub_1C22094(listViewHelper, v23);
    ShopSceneListViewControlHelper__SetListViewOnSceneInit(
      listViewHelper,
      v23,
      eventId,
      v37,
      &this->fields.selectedEventIndex,
      0LL);
    ShopRootComponent__OpenEventItemWindow(this, this->fields.state, eventId, v38);
    if ( this->fields.state == 9 )
    {
      this->fields.jumpInfo = 0LL;
      sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.jumpInfo, 0LL, v39, v40, v41, v42, v43, v44);
    }
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v46 = (System_Action_int__o *)sub_1C22084(System_Action_int__TypeInfo);
    System_Action_int____ctor(v46, (Il2CppObject *)this, Method_ShopRootComponent__Init_b__76_0__, 0LL);
    StoneCountRefreshComponent__AttachToGameObject(gameObject, v46, 0, 0LL);
  }
}


void __fastcall ShopRootComponent__LoadBanner(ShopRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  ShopRootComponent_o *v12; // x0
  const MethodInfo *v13; // x3
  struct SceneJumpInfo_o *jumpInfo; // x8
  int32_t id; // w2
  System_String_o **p_name; // x8
  System_Action_o *v17; // x19

  if ( (byte_4BD8A49 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&Method_ShopRootComponent___c__DisplayClass73_0__LoadBanner_b__0__);
    sub_1C21E38(&ShopRootComponent___c__DisplayClass73_0_TypeInfo);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD8A49 = 1;
  }
  v3 = sub_1C22084(ShopRootComponent___c__DisplayClass73_0_TypeInfo);
  ShopRootComponent___c__DisplayClass73_0___ctor((ShopRootComponent___c__DisplayClass73_0_o *)v3, 0LL);
  if ( !v3 )
    sub_1C22094(v4, v5);
  *(_QWORD *)(v3 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 16), (int64_t)this, v6, v7, v8, v9, v10, v11);
  jumpInfo = this->fields.jumpInfo;
  if ( jumpInfo )
  {
    id = jumpInfo->fields.id;
    p_name = &jumpInfo->fields.name;
  }
  else
  {
    p_name = (System_String_o **)&StringLiteral_1/*""*/;
    id = 0;
  }
  *(_DWORD *)(v3 + 24) = ShopRootComponent__GetStateOnInit(v12, *p_name, id, v13);
  v17 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v17, (Il2CppObject *)v3, Method_ShopRootComponent___c__DisplayClass73_0__LoadBanner_b__0__, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadOutGameAtlas(v17, 0LL);
}


void __fastcall ShopRootComponent__MenuBackFromStonePurchase(
        ShopRootComponent_o *this,
        int32_t result,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x1

  if ( (byte_4BD8A82 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BD8A82 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || ((CommonUI__CloseStonePurchaseMenu(Instance, 0LL),
         Instance = (CommonUI_o *)this->fields.listViewHelper,
         this->fields.state != 8)
      ? (v6 = 1LL)
      : (v6 = 7LL),
        this->fields.state = v6,
        this->fields.inputState = 2,
        !Instance) )
  {
    sub_1C22094(Instance, v6);
  }
  ShopSceneListViewControlHelper__SetListViewOnCloseStonePurchase((ShopSceneListViewControlHelper_o *)Instance, v6, 0LL);
  if ( result == 2 )
    ShopRootComponent__RefreshInfo(this, v7);
}


void __fastcall ShopRootComponent__OnClickBack(ShopRootComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x2

  if ( (byte_4BD8A71 & 1) == 0 )
  {
    sub_1C21E38(&Method_ShopRootComponent_OnClickBack__);
    byte_4BD8A71 = 1;
  }
  if ( this->fields.inputState == 2 )
  {
    v3 = Method_ShopRootComponent_OnClickBack__;
    if ( (*((_BYTE *)Method_ShopRootComponent_OnClickBack__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C21E50(Method_ShopRootComponent_OnClickBack__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
    if ( !ShopRootComponent__BackScene(this, this->fields.state, v5) )
      ShopRootComponent__BackMenu(this, this->fields.state, v6);
  }
}


void __fastcall ShopRootComponent__OnClickHelp(ShopRootComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4BD8A6B & 1) == 0 )
  {
    sub_1C21E38(&Method_ShopRootComponent_OnClickHelp__);
    byte_4BD8A6B = 1;
  }
  v3 = Method_ShopRootComponent_OnClickHelp__;
  if ( (*((_BYTE *)Method_ShopRootComponent_OnClickHelp__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C21E50(Method_ShopRootComponent_OnClickHelp__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
  ShopRootComponent__OpenHelp(this, v5);
}


void __fastcall ShopRootComponent__OnClickHelpClose(ShopRootComponent_o *this, const MethodInfo *method)
{
  unsigned int state; // w8
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  ShopHelpListViewManager_o *helpListViewManager; // x20
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2

  if ( (byte_4BD8A6E & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_ShopRootComponent_CheckTutorial__);
    sub_1C21E38(&Method_ShopRootComponent_OnClickHelpClose__);
    byte_4BD8A6E = 1;
  }
  state = this->fields.state;
  if ( state > 0x14 || ((1 << state) & 0x100068) == 0 )
  {
    v4 = Method_ShopRootComponent_OnClickHelpClose__;
    if ( (*((_BYTE *)Method_ShopRootComponent_OnClickHelpClose__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C21E50(Method_ShopRootComponent_OnClickHelpClose__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0, 0LL);
    helpListViewManager = this->fields.helpListViewManager;
    v7 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(v7, (Il2CppObject *)this, Method_ShopRootComponent_CheckTutorial__, 0LL);
    if ( !helpListViewManager )
      sub_1C22094(v8, v9);
    ShopHelpListViewManager__CloseHelpDialog(helpListViewManager, v7, v10);
  }
}


void __fastcall ShopRootComponent__OnEndDialogEventCloseWarning(ShopRootComponent_o *this, const MethodInfo *method)
{
  MainMenuBar__requestTerminalSceneChange(0LL);
}


void __fastcall ShopRootComponent__OnEndFadeRequestShop(ShopRootComponent_o *this, const MethodInfo *method)
{
  System_String_o *MainBgmName; // x20
  const MethodInfo *v4; // x1

  if ( (byte_4BD8A67 & 1) == 0 )
  {
    sub_1C21E38(&BgmManager_TypeInfo);
    sub_1C21E38(&SoundManager_TypeInfo);
    byte_4BD8A67 = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  MainBgmName = BgmManager__GetMainBgmName(0LL);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm(MainBgmName, 0LL);
  ShopRootComponent__RequestEnd(this, v4);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopRootComponent__OnEndItemDialog(ShopRootComponent_o *this, bool isOk, const MethodInfo *method)
{
  RequestResultDialog_o *requestResultDialog; // x0
  ShopEntity_o *okBtnLabel; // x20
  const MethodInfo *v6; // x2
  System_String_o *monitor; // x20
  ScriptManager_CallbackFunc_o *v8; // x21
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BD8A63 & 1) == 0 )
  {
    sub_1C21E38(&ScriptManager_CallbackFunc_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_ShopScriptMaster___);
    sub_1C21E38(&Method_DataMasterBase_ShopScriptMaster__ShopScriptEntity__int__TryGetEntity__);
    sub_1C21E38(&ScriptManager_TypeInfo);
    sub_1C21E38(&Method_ShopRootComponent_OnEndPlayScriptRequestShop__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD8A63 = 1;
  }
  entity = 0LL;
  requestResultDialog = this->fields.requestResultDialog;
  if ( !requestResultDialog )
    goto LABEL_20;
  RequestResultDialog__Close(requestResultDialog, 0LL);
  requestResultDialog = (RequestResultDialog_o *)this->fields.listViewHelper;
  if ( !requestResultDialog )
    goto LABEL_20;
  requestResultDialog = (RequestResultDialog_o *)ShopSceneListViewControlHelper__GetShopBuyItemListViewItem(
                                                   (ShopSceneListViewControlHelper_o *)requestResultDialog,
                                                   this->fields.selectedItemIndex,
                                                   0LL);
  if ( !requestResultDialog )
    goto LABEL_20;
  okBtnLabel = (ShopEntity_o *)requestResultDialog->fields.okBtnLabel;
  requestResultDialog = (RequestResultDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !requestResultDialog )
    goto LABEL_20;
  requestResultDialog = (RequestResultDialog_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)requestResultDialog,
                                                   (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ShopScriptMaster___);
  if ( !okBtnLabel || !requestResultDialog )
    goto LABEL_20;
  requestResultDialog = (RequestResultDialog_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)requestResultDialog,
                                                   &entity,
                                                   okBtnLabel->fields.id,
                                                   (const MethodInfo_325BE14 *)Method_DataMasterBase_ShopScriptMaster__ShopScriptEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)requestResultDialog & 1) == 0 )
    goto LABEL_12;
  if ( !entity )
    goto LABEL_20;
  requestResultDialog = (RequestResultDialog_o *)System_String__IsNullOrEmpty((System_String_o *)entity[2].monitor, 0LL);
  if ( ((unsigned __int8)requestResultDialog & 1) != 0 )
  {
LABEL_12:
    if ( okBtnLabel->fields.purchaseType == 14 )
      ShopRootComponent__PlayServantCostumeReleaseEffect(this, okBtnLabel, v6);
    else
      ShopRootComponent__RequestEnd(this, (const MethodInfo *)isOk);
    return;
  }
  if ( !entity )
LABEL_20:
    sub_1C22094(requestResultDialog, isOk);
  monitor = (System_String_o *)entity[2].monitor;
  v8 = (ScriptManager_CallbackFunc_o *)sub_1C22084(ScriptManager_CallbackFunc_TypeInfo);
  ScriptManager_CallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    Method_ShopRootComponent_OnEndPlayScriptRequestShop__,
    0LL);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__PlayShop(monitor, v8, 0, 0LL);
}


void __fastcall ShopRootComponent__OnEndPlayScriptRequestShop(
        ShopRootComponent_o *this,
        bool isExit,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4BD8A64 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_ShopRootComponent_OnEndFadeRequestShop__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BD8A64 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_ShopRootComponent_OnEndFadeRequestShop__, 0LL);
  if ( !Instance )
    sub_1C22094(v6, v7);
  CommonUI__maskFadein((CommonUI_o *)Instance, 1.0, v5, 0LL);
}


void __fastcall ShopRootComponent__OnEndPlayServantCostumeReleaseEffect(
        ShopRootComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v4; // x8
  CommonUI_o *v5; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4BD8A66 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&AvalonSceneManager_TypeInfo);
    sub_1C21E38(&Method_ShopRootComponent_RequestEnd__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BD8A66 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = AvalonSceneManager_TypeInfo;
  v5 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v4 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v4->static_fields->DEFAULT_FADE_TIME;
  v7 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_ShopRootComponent_RequestEnd__, 0LL);
  if ( !v5 )
    sub_1C22094(v8, v9);
  CommonUI__maskFadein(v5, DEFAULT_FADE_TIME, v7, 0LL);
}


void __fastcall ShopRootComponent__OnEndShopReset(ShopRootComponent_o *this, bool isDecide, const MethodInfo *method)
{
  ShopResetConfirmDialogComponent_o *shopResetConfirmDialog; // x0
  const MethodInfo *v5; // x1

  shopResetConfirmDialog = this->fields.shopResetConfirmDialog;
  if ( !shopResetConfirmDialog )
    sub_1C22094(0LL, isDecide);
  ShopResetConfirmDialogComponent__Close_33978596(shopResetConfirmDialog, 0LL, method);
  ShopRootComponent__RequestEnd(this, v5);
}


void __fastcall ShopRootComponent__OnEndStorageDialog(
        ShopRootComponent_o *this,
        int32_t count,
        const MethodInfo *method)
{
  BuyStorageConfirmDialogComponent_o *buyStorageResultDialog; // x0
  const MethodInfo *v5; // x1

  buyStorageResultDialog = this->fields.buyStorageResultDialog;
  if ( !buyStorageResultDialog )
    sub_1C22094(0LL, count);
  BuyStorageConfirmDialogComponent__Close(buyStorageResultDialog, 0LL);
  ShopRootComponent__RequestEnd(this, v5);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ShopRootComponent__OnGiftClose(
        ShopRootComponent_o *this,
        bool receivedNewServant,
        const MethodInfo *method)
{
  ShopCurrencyInfoController_o *currencyInfoController; // x20
  int32_t state; // w21
  ShopSceneListViewControlHelper_o *BuyItemKind; // x0
  __int64 v7; // x1
  int32_t v8; // w21
  const MethodInfo *v9; // x4

  if ( (byte_4BD8A6A & 1) == 0 )
  {
    sub_1C21E38(&ShopBuyItemListViewManager_TypeInfo);
    byte_4BD8A6A = 1;
  }
  ShopRootComponent__RefreshInfo(this, (const MethodInfo *)receivedNewServant);
  currencyInfoController = this->fields.currencyInfoController;
  state = this->fields.state;
  if ( !ShopBuyItemListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ShopBuyItemListViewManager_TypeInfo);
  BuyItemKind = (ShopSceneListViewControlHelper_o *)ShopBuyItemListViewManager__GetBuyItemKind(state, 0LL);
  if ( !this->fields.listViewHelper
    || (v8 = (int)BuyItemKind,
        BuyItemKind = (ShopSceneListViewControlHelper_o *)ShopSceneListViewControlHelper__GetEventId(
                                                            this->fields.listViewHelper,
                                                            this->fields.state,
                                                            this->fields.selectedEventIndex,
                                                            0LL),
        !currencyInfoController)
    || (ShopCurrencyInfoController__RefreshEventItemWindow(currencyInfoController, v8, (int32_t)BuyItemKind, 0, v9),
        (BuyItemKind = this->fields.listViewHelper) == 0LL) )
  {
    sub_1C22094(BuyItemKind, v7);
  }
  ShopSceneListViewControlHelper__SetListViewInvalidate(BuyItemKind, 0LL);
  return 1;
}


void __fastcall ShopRootComponent__OnGiftOpen(ShopRootComponent_o *this, const MethodInfo *method)
{
  ShopPlayVoiceComponent_o *shopPlayVoiceComponent; // x0

  shopPlayVoiceComponent = this->fields.shopPlayVoiceComponent;
  if ( !shopPlayVoiceComponent )
    sub_1C22094(0LL, method);
  ShopPlayVoiceComponent__StopVoice(shopPlayVoiceComponent, method);
}


void __fastcall ShopRootComponent__OnInitEnd(ShopRootComponent_o *this, int32_t state, const MethodInfo *method)
{
  ShopSceneListViewControlHelper_o *listViewHelper; // x0

  if ( this->fields.inputState == 1 )
  {
    listViewHelper = this->fields.listViewHelper;
    if ( !listViewHelper )
      sub_1C22094(0LL, state);
    ShopSceneListViewControlHelper__SetListViewOnStateInitEnd(
      listViewHelper,
      state,
      this->fields.selectedEventIndex,
      0LL);
    this->fields.inputState = 2;
  }
}


void __fastcall ShopRootComponent__OnMoveEnd(ShopRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t v3; // w8

  switch ( this->fields.inputState )
  {
    case 0:
      v3 = 1;
      goto LABEL_5;
    case 1:
      ShopRootComponent__OnInitEnd(this, this->fields.state, v2);
      break;
    case 3:
      v3 = 4;
LABEL_5:
      this->fields.inputState = v3;
      break;
    case 4:
      ShopRootComponent__OnQuitEnd(this, this->fields.state, v2);
      break;
    default:
      return;
  }
}


void __fastcall ShopRootComponent__OnQuitEnd(ShopRootComponent_o *this, int32_t state, const MethodInfo *method)
{
  ShopSceneListViewControlHelper_o *listViewHelper; // x0
  int32_t v5; // w2

  if ( this->fields.inputState == 4 )
  {
    listViewHelper = this->fields.listViewHelper;
    if ( state == 8 )
      v5 = 7;
    else
      v5 = 1;
    this->fields.state = v5;
    if ( !listViewHelper )
      sub_1C22094(0LL, state);
    ShopSceneListViewControlHelper__SetListViewOnStateQuitEnd(
      listViewHelper,
      state,
      v5,
      this->fields.selectedEventIndex,
      0LL);
    this->fields.inputState = 2;
  }
}


void __fastcall ShopRootComponent__OnSelectBuyItem(ShopRootComponent_o *this, int32_t index, const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  ShopSceneListViewControlHelper_o *listViewHelper; // x0
  ShopBuyItemListViewItem_o *ShopBuyItemListViewItem; // x0
  const MethodInfo *v10; // x2
  bool IsBulk; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4BD8A74 & 1) == 0 )
  {
    sub_1C21E38(&Method_ShopRootComponent_OnSelectBuyItem__);
    byte_4BD8A74 = 1;
  }
  if ( this->fields.inputState == 2 )
  {
    this->fields.inputState = 0;
    v5 = Method_ShopRootComponent_OnSelectBuyItem__;
    if ( (*((_BYTE *)Method_ShopRootComponent_OnSelectBuyItem__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C21E50(Method_ShopRootComponent_OnSelectBuyItem__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    listViewHelper = this->fields.listViewHelper;
    this->fields.selectedItemIndex = index;
    if ( !listViewHelper )
      sub_1C22094(0LL, v7);
    ShopBuyItemListViewItem = ShopSceneListViewControlHelper__GetShopBuyItemListViewItem(listViewHelper, index, 0LL);
    IsBulk = ShopRootComponent__GetIsBulk((ShopRootComponent_o *)ShopBuyItemListViewItem, ShopBuyItemListViewItem, v10);
    ShopRootComponent__SelectItem(this, index, IsBulk, v12);
  }
}


void __fastcall ShopRootComponent__OnSelectEvent(ShopRootComponent_o *this, int32_t index, const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  ShopSceneListViewControlHelper_o *listViewHelper; // x0
  ShopEventListViewItem_o *ShopEventListViewItem; // x20
  const MethodInfo *v10; // x2
  int32_t eventId; // w21
  SceneJumpInfo_o *v12; // x19

  if ( (byte_4BD8A76 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C21E38(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_1C21E38(&SceneJumpInfo_TypeInfo);
    sub_1C21E38(&Method_ShopRootComponent_OnSelectEvent__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&StringLiteral_9723/*"NormalEventShop"*/);
    byte_4BD8A76 = 1;
  }
  v5 = Method_ShopRootComponent_OnSelectEvent__;
  if ( (*((_BYTE *)Method_ShopRootComponent_OnSelectEvent__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C21E50(Method_ShopRootComponent_OnSelectEvent__);
  v6 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
  listViewHelper = this->fields.listViewHelper;
  this->fields.selectedEventIndex = index;
  if ( !listViewHelper )
    goto LABEL_16;
  ShopEventListViewItem = ShopSceneListViewControlHelper__GetShopEventListViewItem(listViewHelper, index, 0LL);
  listViewHelper = (ShopSceneListViewControlHelper_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !listViewHelper )
    goto LABEL_16;
  listViewHelper = (ShopSceneListViewControlHelper_o *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)listViewHelper,
                                                         (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !ShopEventListViewItem )
    goto LABEL_16;
  if ( !listViewHelper )
    goto LABEL_16;
  listViewHelper = (ShopSceneListViewControlHelper_o *)DataMasterBase_object__object__int___GetEntity(
                                                         (DataMasterBase_TMaster__TEntity__PKType__o *)listViewHelper,
                                                         ShopEventListViewItem->fields.eventId,
                                                         (const MethodInfo_325BDC8 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  if ( !listViewHelper )
    goto LABEL_16;
  if ( EventDetailEntity__IsEventShop((EventDetailEntity_o *)listViewHelper, 0LL) )
  {
    eventId = ShopEventListViewItem->fields.eventId;
    v12 = (SceneJumpInfo_o *)sub_1C22084(SceneJumpInfo_TypeInfo);
    SceneJumpInfo___ctor_39918344(v12, (System_String_o *)StringLiteral_9723/*"NormalEventShop"*/, eventId, 0LL);
    if ( v12 )
    {
      SceneJumpInfo__SetReturnNowScene(v12, 0LL);
      listViewHelper = (ShopSceneListViewControlHelper_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( listViewHelper )
      {
        CommonUI__CheckChangeOtherConnectMarkFromEventId(
          (CommonUI_o *)listViewHelper,
          ShopEventListViewItem->fields.eventId,
          1,
          0LL);
        listViewHelper = (ShopSceneListViewControlHelper_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( listViewHelper )
        {
          AvalonSceneManager__transitionScene((AvalonSceneManager_o *)listViewHelper, 72, 1, (Il2CppObject *)v12, 0LL);
          return;
        }
      }
    }
LABEL_16:
    sub_1C22094(listViewHelper, v7);
  }
  ShopRootComponent__SelectMenu(this, 8, v10);
}


void __fastcall ShopRootComponent__OnSelectSellServant(
        ShopRootComponent_o *this,
        int32_t kind,
        System_Int64_array *servantList,
        System_Int64_array *commandCodeList,
        const MethodInfo *method)
{
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  const MethodInfo *v17; // x1

  if ( this->fields.inputState == 2 )
  {
    this->fields.selectedServantIds = servantList;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields.selectedServantIds,
      (int64_t)servantList,
      (int64_t)servantList,
      (int32_t)commandCodeList,
      (System_String_o *)method,
      v5,
      v6,
      v7);
    this->fields.selectedCommandCodeIds = commandCodeList;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields.selectedCommandCodeIds,
      (int64_t)commandCodeList,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
    if ( kind == 1 )
      ShopRootComponent__CheckSellServantExceeded(this, v17);
  }
}


void __fastcall ShopRootComponent__OnSelectTop(ShopRootComponent_o *this, int32_t state, const MethodInfo *method)
{
  bool IsSvtCostumeShopOpen; // w0
  _BOOL4 v6; // w9
  _BOOL4 v7; // w8
  bool IsTargetQuestClear; // w0
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  const MethodInfo *v11; // x2

  if ( (byte_4BD8A73 & 1) == 0 )
  {
    sub_1C21E38(&CoinRoomUtility_TypeInfo);
    sub_1C21E38(&Method_ShopRootComponent_OnSelectTop__);
    sub_1C21E38(&ShopRootConstants_TypeInfo);
    byte_4BD8A73 = 1;
  }
  if ( this->fields.inputState == 2 && this->fields.state == 1 )
  {
    if ( state == 17 )
    {
      if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
      IsTargetQuestClear = CoinRoomUtility__IsTargetQuestClear(0LL);
      v7 = 0;
      v6 = !IsTargetQuestClear;
    }
    else if ( state == 15 )
    {
      if ( !ShopRootConstants_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
      IsSvtCostumeShopOpen = ShopRootConstants__IsSvtCostumeShopOpen(0LL);
      v6 = 0;
      v7 = !IsSvtCostumeShopOpen;
    }
    else
    {
      v7 = 0;
      v6 = 0;
    }
    if ( v6 || v7 )
    {
      this->fields.inputState = 1;
      ShopRootComponent__OnInitEnd(this, 1, method);
    }
    else
    {
      v9 = Method_ShopRootComponent_OnSelectTop__;
      if ( (*((_BYTE *)Method_ShopRootComponent_OnSelectTop__ + 83) & 2) != 0 )
        v9 = (_QWORD *)sub_1C21E50(Method_ShopRootComponent_OnSelectTop__);
      v10 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v9, v9[4]);
      OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0, 0LL);
      ShopRootComponent__SelectMenu(this, state, v11);
    }
  }
}


void __fastcall ShopRootComponent__OpenConfirmMenu(
        ShopRootComponent_o *this,
        int32_t state,
        ShopBuyItemListViewItem_o *item,
        bool isBulk,
        const MethodInfo *method)
{
  __int64 v9; // x22
  ShopEntity_o *KindByShopState; // x0
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  ShopBuyItemListViewItem_o **v18; // x23
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  ShopBuyItemListViewItem_o *v25; // x20
  struct ShopBuyBulkItemConfirmMenu_o *ApSeedBulkExchangeConfirmMenu; // x21
  ShopEntity_o *v27; // x22
  System_Action_int__o *v28; // x23
  int32_t v29; // w4
  ShopBuyBulkItemConfirmMenu_o *v30; // x0
  ShopEntity_o *v31; // x1
  ShopBuyItemListViewItem_o *v32; // x2
  System_Action_int__o *v33; // x3
  ShopBuyItemListViewItem_o *v34; // x8
  ShopEntity_o *Shop_k__BackingField; // x23
  int32_t ShopKind_k__BackingField; // w24
  struct ShopBuyItemConfirmMenu_o *buyItemConfirmMenu; // x21
  System_Action_int__o *v38; // x25
  System_Action_o *v39; // x19
  ShopBuyItemConfirmMenu_o *v40; // x0
  ShopEntity_o *v41; // x1
  int32_t v42; // w2
  System_Action_int__o *v43; // x3
  int32_t v44; // w5
  System_Action_o *v45; // x6
  ShopBuyItemConfirmMenu_o *v46; // x20
  ShopBuyItemListViewItem_o *v47; // x21
  System_Action_o *v48; // x0
  __int64 *v49; // x8
  System_Action_o *v50; // x23
  System_Action_int__o *v51; // x22
  int32_t v52; // w20
  const MethodInfo *v53; // x2
  BuyStorageConfirmDialogComponent_o *buyStorageNotificationDialog; // x21
  ShopBuyItemListViewItem_o *v55; // x22
  System_Action_int__o *v56; // x23
  int32_t v57; // w2
  int v58; // w22
  ShopBuyItemListViewItem_o *v59; // x8
  ShopEntity_o *v60; // x21
  int32_t v61; // w22
  struct ShopBuyItemConfirmMenu_o *ApSeedExchangeConfirmMenu; // x20
  System_Action_int__o *v63; // x23
  ShopBuyItemListViewItem_o *v64; // x20
  struct ShopBuyBulkItemConfirmMenu_o *buyBulkItemConfirmMenu; // x21
  ShopEntity_o *v66; // x22
  System_Action_int__o *v67; // x23
  ShopEntity_o *v68; // x22
  int32_t v69; // w21
  BuyStorageConfirmDialogComponent_o *buyStorageConfirmDialog; // x21
  ShopBuyItemListViewItem_o *v71; // x22
  System_Action_int__o *v72; // x23

  if ( (byte_4BD8A53 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_int__TypeInfo);
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_ShopRootComponent_CloseStorageDetailCheckConfirm__);
    sub_1C21E38(&Method_ShopRootComponent_SelectedBuyItemConfirm__);
    sub_1C21E38(&Method_ShopRootComponent___c__DisplayClass86_0__OpenConfirmMenu_b__0__);
    sub_1C21E38(&Method_ShopRootComponent___c__DisplayClass86_0__OpenConfirmMenu_b__1__);
    sub_1C21E38(&Method_ShopRootComponent___c__DisplayClass86_0__OpenConfirmMenu_b__2__);
    sub_1C21E38(&ShopRootComponent___c__DisplayClass86_0_TypeInfo);
    byte_4BD8A53 = 1;
  }
  v9 = sub_1C22084(ShopRootComponent___c__DisplayClass86_0_TypeInfo);
  ShopRootComponent___c__DisplayClass86_0___ctor((ShopRootComponent___c__DisplayClass86_0_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_51;
  *(_QWORD *)(v9 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 16), (int64_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = item;
  v18 = (ShopBuyItemListViewItem_o **)(v9 + 24);
  sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 24), (int64_t)item, v19, v20, v21, v22, v23, v24);
  switch ( state )
  {
    case 2:
    case 4:
    case 5:
    case 6:
    case 8:
    case 14:
    case 16:
    case 18:
    case 20:
      if ( isBulk )
        goto LABEL_6;
      v34 = *v18;
      if ( !*v18 )
        goto LABEL_51;
      Shop_k__BackingField = v34->fields._Shop_k__BackingField;
      ShopKind_k__BackingField = v34->fields._ShopKind_k__BackingField;
      buyItemConfirmMenu = this->fields.buyItemConfirmMenu;
      v38 = (System_Action_int__o *)sub_1C22084(System_Action_int__TypeInfo);
      System_Action_int____ctor(v38, (Il2CppObject *)this, Method_ShopRootComponent_SelectedBuyItemConfirm__, 0LL);
      v39 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      System_Action___ctor(
        v39,
        (Il2CppObject *)v9,
        Method_ShopRootComponent___c__DisplayClass86_0__OpenConfirmMenu_b__1__,
        0LL);
      if ( !buyItemConfirmMenu )
        goto LABEL_51;
      v40 = buyItemConfirmMenu;
      v41 = Shop_k__BackingField;
      v42 = ShopKind_k__BackingField;
      v43 = v38;
      v44 = state;
      v45 = v39;
      goto LABEL_14;
    case 3:
    case 15:
      if ( isBulk )
        goto LABEL_6;
      v46 = this->fields.buyItemConfirmMenu;
      v47 = *(ShopBuyItemListViewItem_o **)(v9 + 24);
      v48 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      v49 = &Method_ShopRootComponent___c__DisplayClass86_0__OpenConfirmMenu_b__0__;
      goto LABEL_17;
    case 11:
    case 12:
      KindByShopState = (ShopEntity_o *)BuyStorageConfirmDialogComponent__GetKindByShopState(state, 0LL);
      if ( !*v18 )
        goto LABEL_51;
      v52 = (int)KindByShopState;
      KindByShopState = (*v18)->fields._Shop_k__BackingField;
      if ( !KindByShopState )
        goto LABEL_51;
      KindByShopState = (ShopEntity_o *)ShopEntity__IsSoldOut(KindByShopState, 0LL);
      if ( ((unsigned __int8)KindByShopState & 1) != 0 )
      {
        buyStorageNotificationDialog = this->fields.buyStorageNotificationDialog;
        v55 = *v18;
        v56 = (System_Action_int__o *)sub_1C22084(System_Action_int__TypeInfo);
        System_Action_int____ctor(v56, (Il2CppObject *)this, Method_ShopRootComponent_SelectedBuyItemConfirm__, 0LL);
        if ( buyStorageNotificationDialog )
        {
          v57 = 1;
LABEL_37:
          BuyStorageConfirmDialogComponent__NotificationDialogOpen(
            buyStorageNotificationDialog,
            v52,
            v57,
            v55,
            v56,
            0LL);
          return;
        }
        goto LABEL_51;
      }
      if ( !*v18 )
        goto LABEL_51;
      KindByShopState = (ShopEntity_o *)ShopRootComponent__GetCurrency(
                                          (ShopRootComponent_o *)KindByShopState,
                                          (*v18)->fields._Shop_k__BackingField,
                                          v53);
      if ( !*v18 )
        goto LABEL_51;
      v58 = (int)KindByShopState;
      KindByShopState = (*v18)->fields._Shop_k__BackingField;
      if ( !KindByShopState )
        goto LABEL_51;
      KindByShopState = (ShopEntity_o *)ShopEntity__GetPrice(KindByShopState, 0LL);
      if ( v58 < (int)KindByShopState )
      {
        buyStorageNotificationDialog = this->fields.buyStorageNotificationDialog;
        v55 = *v18;
        v56 = (System_Action_int__o *)sub_1C22084(System_Action_int__TypeInfo);
        System_Action_int____ctor(v56, (Il2CppObject *)this, Method_ShopRootComponent_SelectedBuyItemConfirm__, 0LL);
        if ( buyStorageNotificationDialog )
        {
          v57 = 2;
          goto LABEL_37;
        }
LABEL_51:
        sub_1C22094(KindByShopState, v11);
      }
      if ( isBulk )
      {
        v64 = *v18;
        if ( !*v18 )
          goto LABEL_51;
        buyBulkItemConfirmMenu = this->fields.buyBulkItemConfirmMenu;
        v66 = v64->fields._Shop_k__BackingField;
        v67 = (System_Action_int__o *)sub_1C22084(System_Action_int__TypeInfo);
        System_Action_int____ctor(v67, (Il2CppObject *)this, Method_ShopRootComponent_SelectedBuyItemConfirm__, 0LL);
        if ( !buyBulkItemConfirmMenu )
          goto LABEL_51;
        v30 = buyBulkItemConfirmMenu;
        v31 = v66;
        v32 = v64;
        v33 = v67;
        v29 = 0;
LABEL_10:
        ShopBuyBulkItemConfirmMenu__Open(v30, v31, v32, v33, v29, 0LL);
        return;
      }
      buyStorageConfirmDialog = this->fields.buyStorageConfirmDialog;
      this->fields.buyCount = 1;
      v71 = *v18;
      v72 = (System_Action_int__o *)sub_1C22084(System_Action_int__TypeInfo);
      System_Action_int____ctor(
        v72,
        (Il2CppObject *)this,
        Method_ShopRootComponent_CloseStorageDetailCheckConfirm__,
        0LL);
      if ( !buyStorageConfirmDialog )
        goto LABEL_51;
      BuyStorageConfirmDialogComponent__Open(buyStorageConfirmDialog, v52, v71, 1, v72, 0LL);
      return;
    case 19:
      if ( isBulk )
      {
        v25 = *v18;
        if ( !*v18 )
          goto LABEL_51;
        ApSeedBulkExchangeConfirmMenu = this->fields.ApSeedBulkExchangeConfirmMenu;
        goto LABEL_8;
      }
      v59 = *v18;
      if ( !*v18 )
        goto LABEL_51;
      v60 = v59->fields._Shop_k__BackingField;
      v61 = v59->fields._ShopKind_k__BackingField;
      ApSeedExchangeConfirmMenu = this->fields.ApSeedExchangeConfirmMenu;
      v63 = (System_Action_int__o *)sub_1C22084(System_Action_int__TypeInfo);
      System_Action_int____ctor(v63, (Il2CppObject *)this, Method_ShopRootComponent_SelectedBuyItemConfirm__, 0LL);
      if ( !ApSeedExchangeConfirmMenu )
        goto LABEL_51;
      v40 = ApSeedExchangeConfirmMenu;
      v41 = v60;
      v42 = v61;
      break;
    case 21:
      if ( isBulk )
      {
LABEL_6:
        v25 = *v18;
        if ( !*v18 )
          goto LABEL_51;
        ApSeedBulkExchangeConfirmMenu = this->fields.buyBulkItemConfirmMenu;
LABEL_8:
        v27 = v25->fields._Shop_k__BackingField;
        v28 = (System_Action_int__o *)sub_1C22084(System_Action_int__TypeInfo);
        System_Action_int____ctor(v28, (Il2CppObject *)this, Method_ShopRootComponent_SelectedBuyItemConfirm__, 0LL);
        if ( !ApSeedBulkExchangeConfirmMenu )
          goto LABEL_51;
        v29 = 8;
        v30 = ApSeedBulkExchangeConfirmMenu;
        v31 = v27;
        v32 = v25;
        v33 = v28;
        goto LABEL_10;
      }
      KindByShopState = (ShopEntity_o *)*v18;
      if ( !*v18 )
        goto LABEL_51;
      KindByShopState = (ShopEntity_o *)ShopBuyItemListViewItem__get_IsItemTypeRarePri(
                                          (ShopBuyItemListViewItem_o *)KindByShopState,
                                          0LL);
      v46 = this->fields.buyItemConfirmMenu;
      v47 = *v18;
      if ( ((unsigned __int8)KindByShopState & 1) != 0 )
      {
        v48 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
        v49 = &Method_ShopRootComponent___c__DisplayClass86_0__OpenConfirmMenu_b__2__;
LABEL_17:
        v50 = v48;
        System_Action___ctor(v48, (Il2CppObject *)v9, *v49, 0LL);
        v51 = (System_Action_int__o *)sub_1C22084(System_Action_int__TypeInfo);
        System_Action_int____ctor(v51, (Il2CppObject *)this, Method_ShopRootComponent_SelectedBuyItemConfirm__, 0LL);
        if ( v46 )
        {
          ShopBuyItemConfirmMenu__OpenAfterCheckedFree(v46, v47, v50, v51, 0LL);
          return;
        }
        goto LABEL_51;
      }
      if ( !v47 )
        goto LABEL_51;
      v68 = v47->fields._Shop_k__BackingField;
      v69 = v47->fields._ShopKind_k__BackingField;
      v63 = (System_Action_int__o *)sub_1C22084(System_Action_int__TypeInfo);
      System_Action_int____ctor(v63, (Il2CppObject *)this, Method_ShopRootComponent_SelectedBuyItemConfirm__, 0LL);
      if ( !v46 )
        goto LABEL_51;
      v40 = v46;
      v41 = v68;
      v42 = v69;
      break;
    default:
      return;
  }
  v43 = v63;
  v44 = 0;
  v45 = 0LL;
LABEL_14:
  ShopBuyItemConfirmMenu__Open(v40, v41, v42, v43, 0, v44, v45, 8, 0LL);
}


void __fastcall ShopRootComponent__OpenDetailCheck(ShopRootComponent_o *this, const MethodInfo *method)
{
  ShopSceneListViewControlHelper_o *listViewHelper; // x0
  ShopBuyItemListViewItem_o *ShopBuyItemListViewItem; // x20
  struct ShopEntity_o *Shop_k__BackingField; // x8
  ShopDetailEntity_o *ShopDetailEntity; // x21
  CommonUI_o *v7; // x20
  System_String_o *message; // x21
  CommonConfirmDialog_ClickDelegate_o *v9; // x22

  if ( (byte_4BD8A77 & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_ShopDetailMaster___);
    sub_1C21E38(&Method_ShopRootComponent_CloseDetaiCheckConfirm__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD8A77 = 1;
  }
  listViewHelper = this->fields.listViewHelper;
  if ( !listViewHelper )
    goto LABEL_13;
  ShopBuyItemListViewItem = ShopSceneListViewControlHelper__GetShopBuyItemListViewItem(
                              listViewHelper,
                              this->fields.selectedItemIndex,
                              0LL);
  listViewHelper = (ShopSceneListViewControlHelper_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !listViewHelper )
    goto LABEL_13;
  listViewHelper = (ShopSceneListViewControlHelper_o *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)listViewHelper,
                                                         (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ShopDetailMaster___);
  if ( !ShopBuyItemListViewItem )
    goto LABEL_13;
  Shop_k__BackingField = ShopBuyItemListViewItem->fields._Shop_k__BackingField;
  if ( !Shop_k__BackingField )
    goto LABEL_13;
  if ( !listViewHelper )
    goto LABEL_13;
  ShopDetailEntity = ShopDetailMaster__getShopDetailEntity(
                       (ShopDetailMaster_o *)listViewHelper,
                       Shop_k__BackingField->fields.id,
                       0LL);
  listViewHelper = (ShopSceneListViewControlHelper_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !ShopDetailEntity )
    goto LABEL_13;
  v7 = (CommonUI_o *)listViewHelper;
  message = ShopDetailEntity->fields.message;
  v9 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C22084(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v9,
    (Il2CppObject *)this,
    Method_ShopRootComponent_CloseDetaiCheckConfirm__,
    0LL);
  listViewHelper = (ShopSceneListViewControlHelper_o *)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  if ( !v7 )
LABEL_13:
    sub_1C22094(listViewHelper, method);
  CommonUI__OpenConfirmDialog_31128428(
    v7,
    0LL,
    message,
    1,
    v9,
    BalanceConfig_TypeInfo->static_fields->ShopDetailCheckDialogFontSize,
    0,
    0,
    0,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopRootComponent__OpenEventItemWindow(
        ShopRootComponent_o *this,
        int32_t state,
        int32_t eventId,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *shopEventItemDrawBase; // x0
  char v8; // w20
  UnityEngine_Transform_o *transform; // x21
  int v10; // s0
  UnityEngine_GameObject_o *gameObject; // x0
  ShopRootConstants_c *v14; // x8
  UnityEngine_GameObject_o *v15; // x19

  if ( (byte_4BD8A7C & 1) == 0 )
  {
    sub_1C21E38(&ShopBuyItemListViewManager_TypeInfo);
    sub_1C21E38(&ShopRootConstants_TypeInfo);
    byte_4BD8A7C = 1;
  }
  shopEventItemDrawBase = (UnityEngine_GameObject_o *)this->fields.shopEventItemDrawBase;
  if ( !shopEventItemDrawBase )
    goto LABEL_19;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *, _QWORD, const MethodInfo *, float))shopEventItemDrawBase->klass[1]._1.castClass)(
    shopEventItemDrawBase,
    shopEventItemDrawBase->klass[1]._1.declaringType,
    *(_QWORD *)&eventId,
    method,
    0.0);
  if ( !ShopBuyItemListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ShopBuyItemListViewManager_TypeInfo);
  shopEventItemDrawBase = (UnityEngine_GameObject_o *)ShopBuyItemListViewManager__GetIsShowEventItemWindow(
                                                        state,
                                                        eventId,
                                                        0LL);
  if ( !this->fields.shopEventItemDrawBase )
    goto LABEL_19;
  v8 = (char)shopEventItemDrawBase;
  shopEventItemDrawBase = UnityEngine_Component__get_gameObject(
                            (UnityEngine_Component_o *)this->fields.shopEventItemDrawBase,
                            0LL);
  if ( !shopEventItemDrawBase )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive(shopEventItemDrawBase, v8 & 1, 0LL);
  shopEventItemDrawBase = (UnityEngine_GameObject_o *)this->fields.giftButtonControl;
  if ( !shopEventItemDrawBase )
    goto LABEL_19;
  shopEventItemDrawBase = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)shopEventItemDrawBase, 0LL);
  if ( !shopEventItemDrawBase )
    goto LABEL_19;
  transform = UnityEngine_GameObject__get_transform(shopEventItemDrawBase, 0LL);
  if ( !ShopRootConstants_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
  *(UnityEngine_Vector3_o *)&v10 = ShopRootConstants__GetGiftButtonPos(v8 & 1, 0LL);
  if ( !transform )
    goto LABEL_19;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v10, 0LL);
  if ( (v8 & 1) == 0 )
    return;
  shopEventItemDrawBase = (UnityEngine_GameObject_o *)this->fields.shopEventItemDrawBase;
  if ( !shopEventItemDrawBase )
LABEL_19:
    sub_1C22094(shopEventItemDrawBase, *(_QWORD *)&state);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)shopEventItemDrawBase, 0LL);
  v14 = ShopRootConstants_TypeInfo;
  v15 = gameObject;
  if ( !ShopRootConstants_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
    v14 = ShopRootConstants_TypeInfo;
  }
  TweenAlpha__Begin(v15, v14->static_fields->OPEN_TIME, 1.0, 0LL);
}


void __fastcall ShopRootComponent__OpenHelp(ShopRootComponent_o *this, const MethodInfo *method)
{
  int32_t state; // w9
  System_Collections_IEnumerator_o *v4; // x1
  Il2CppObject *Instance; // x20
  System_Action_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  int32_t v9; // w1
  int32_t v10; // w19
  System_String_o *HelpSaveKey; // x0

  if ( (byte_4BD8A6C & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_ShopRootComponent_OnClickHelpClose__);
    sub_1C21E38(&ShopRootConstants_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BD8A6C = 1;
  }
  state = this->fields.state;
  switch ( state )
  {
    case 1:
      v4 = ShopRootComponent__WaitPurchase(this, method);
      UnityEngine_MonoBehaviour__StartCoroutine_70854884((UnityEngine_MonoBehaviour_o *)this, v4, 0LL);
      return;
    case 2:
    case 4:
      return;
    case 3:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v6 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      System_Action___ctor(v6, (Il2CppObject *)this, (intptr_t)Method_ShopRootComponent_OnClickHelpClose__, 0LL);
      if ( !Instance )
        goto LABEL_18;
      v9 = 20;
      break;
    case 5:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v6 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      System_Action___ctor(v6, (Il2CppObject *)this, (intptr_t)Method_ShopRootComponent_OnClickHelpClose__, 0LL);
      if ( !Instance )
        goto LABEL_18;
      v9 = 47;
      break;
    case 6:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v6 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      System_Action___ctor(v6, (Il2CppObject *)this, (intptr_t)Method_ShopRootComponent_OnClickHelpClose__, 0LL);
      if ( !Instance )
        goto LABEL_18;
      v9 = 19;
      break;
    default:
      if ( state != 20 )
        return;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v6 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      System_Action___ctor(v6, (Il2CppObject *)this, (intptr_t)Method_ShopRootComponent_OnClickHelpClose__, 0LL);
      if ( !Instance )
LABEL_18:
        sub_1C22094(v7, v8);
      v9 = 1029;
      break;
  }
  CommonUI__OpenTutorialImageDialog_31154092((CommonUI_o *)Instance, v9, -1, v6, 0LL, 0LL, 0LL);
  v10 = this->fields.state;
  if ( !ShopRootConstants_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
  HelpSaveKey = ShopRootConstants__GetHelpSaveKey(v10, 0LL);
  UnityEngine_PlayerPrefs__SetInt(HelpSaveKey, 1, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall ShopRootComponent__OpenLimitCountSealInfoDialog(
        ShopRootComponent_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v8; // x1
  System_String_o *LimitCountSealedDialogMessage; // x0
  SummonInfoDlgComponent_o *limitCountSealInfoDlg; // x21
  System_String_o *v11; // x20
  System_String_o *v12; // x22
  SummonInfoDlgComponent_CallbackFunc_o *v13; // x23

  if ( (byte_4BD8A54 & 1) == 0 )
  {
    sub_1C21E38(&SummonInfoDlgComponent_CallbackFunc_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_ShopRootComponent_EndLimitCountSealInfoDialog__);
    sub_1C21E38(&StringLiteral_8426/*"LIMIT_COUNT_SEALED_TITLE"*/);
    byte_4BD8A54 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !Master_object )
    goto LABEL_10;
  LimitCountSealedDialogMessage = ServantLimitImageMaster__GetLimitCountSealedDialogMessage(
                                    (ServantLimitImageMaster_o *)Master_object,
                                    svtId,
                                    limitCount,
                                    0LL);
  limitCountSealInfoDlg = this->fields.limitCountSealInfoDlg;
  v11 = LimitCountSealedDialogMessage;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_8426/*"LIMIT_COUNT_SEALED_TITLE"*/, 0LL);
  v13 = (SummonInfoDlgComponent_CallbackFunc_o *)sub_1C22084(SummonInfoDlgComponent_CallbackFunc_TypeInfo);
  SummonInfoDlgComponent_CallbackFunc___ctor(
    v13,
    (Il2CppObject *)this,
    (intptr_t)Method_ShopRootComponent_EndLimitCountSealInfoDialog__,
    0LL);
  if ( !limitCountSealInfoDlg )
LABEL_10:
    sub_1C22094(Master_object, v8);
  SummonInfoDlgComponent__OpenInfoMessageDlg(limitCountSealInfoDlg, v12, v11, v13, 0LL);
}


void __fastcall ShopRootComponent__OpenStonePurchaseMenu(
        ShopRootComponent_o *this,
        int32_t state,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  StonePurchaseMenu_CallbackFunc_o *v6; // x21
  System_Action_o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4BD8A80 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&StonePurchaseMenu_CallbackFunc_TypeInfo);
    sub_1C21E38(&Method_ShopRootComponent_CloseStonePurchaseMenu__);
    sub_1C21E38(&Method_ShopRootComponent_RefreshInfo__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BD8A80 = 1;
  }
  if ( state == 10 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v6 = (StonePurchaseMenu_CallbackFunc_o *)sub_1C22084(StonePurchaseMenu_CallbackFunc_TypeInfo);
    StonePurchaseMenu_CallbackFunc___ctor(
      v6,
      (Il2CppObject *)this,
      Method_ShopRootComponent_CloseStonePurchaseMenu__,
      0LL);
    v7 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(v7, (Il2CppObject *)this, Method_ShopRootComponent_RefreshInfo__, 0LL);
    if ( !Instance )
      sub_1C22094(v8, v9);
    CommonUI__OpenStonePurchaseMenu((CommonUI_o *)Instance, v6, v7, 0LL);
  }
}


void __fastcall ShopRootComponent__OpenStorageDetailCheck(ShopRootComponent_o *this, const MethodInfo *method)
{
  ShopSceneListViewControlHelper_o *listViewHelper; // x0
  ShopBuyItemListViewItem_o *ShopBuyItemListViewItem; // x20
  int32_t KindByShopState; // w0
  BuyStorageConfirmDialogComponent_o *buyStorageConfirmDialog; // x22
  int32_t buyCount; // w21
  int32_t v8; // w23
  System_Action_int__o *v9; // x24

  if ( (byte_4BD8A78 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_int__TypeInfo);
    sub_1C21E38(&Method_ShopRootComponent_CloseStorageDetailCheckConfirm__);
    byte_4BD8A78 = 1;
  }
  listViewHelper = this->fields.listViewHelper;
  if ( !listViewHelper
    || (ShopBuyItemListViewItem = ShopSceneListViewControlHelper__GetShopBuyItemListViewItem(
                                    listViewHelper,
                                    this->fields.selectedItemIndex,
                                    0LL),
        KindByShopState = BuyStorageConfirmDialogComponent__GetKindByShopState(this->fields.state, 0LL),
        buyStorageConfirmDialog = this->fields.buyStorageConfirmDialog,
        buyCount = this->fields.buyCount,
        v8 = KindByShopState,
        v9 = (System_Action_int__o *)sub_1C22084(System_Action_int__TypeInfo),
        System_Action_int____ctor(
          v9,
          (Il2CppObject *)this,
          Method_ShopRootComponent_CloseStorageDetailCheckConfirm__,
          0LL),
        !buyStorageConfirmDialog) )
  {
    sub_1C22094(listViewHelper, method);
  }
  BuyStorageConfirmDialogComponent__Open(buyStorageConfirmDialog, v8, ShopBuyItemListViewItem, buyCount, v9, 0LL);
}


void __fastcall ShopRootComponent__PlayLvExceedItemReleaseEffect(
        ShopRootComponent_o *this,
        ShopBuyItemListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x20
  BalanceConfig_c *v6; // x0
  ShopBuyItemListViewItem_o *v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  ShopBuyItemListViewItem_o **v14; // x22
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  const MethodInfo *v21; // x3
  __int64 v22; // x8
  __int64 v23; // x8
  int v24; // w21
  QuestRewardInfo_o *v25; // x22
  _QWORD *v26; // x21
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  __int64 v33; // x8
  __int64 v34; // x8
  __int64 v35; // x8
  _DWORD *v36; // x9
  int32_t buyCount; // w8
  Il2CppObject *Instance; // x19
  AvalonSceneManager_c *v39; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v41; // x21

  if ( (byte_4BD8A5F & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&AvalonSceneManager_TypeInfo);
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&QuestRewardInfo_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_ShopRootComponent___c__DisplayClass100_0__PlayLvExceedItemReleaseEffect_b__0__);
    sub_1C21E38(&ShopRootComponent___c__DisplayClass100_0_TypeInfo);
    byte_4BD8A5F = 1;
  }
  v5 = sub_1C22084(ShopRootComponent___c__DisplayClass100_0_TypeInfo);
  ShopRootComponent___c__DisplayClass100_0___ctor((ShopRootComponent___c__DisplayClass100_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_22;
  *(_QWORD *)(v5 + 24) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 24), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 32) = item;
  v14 = (ShopBuyItemListViewItem_o **)(v5 + 32);
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)item, v15, v16, v17, v18, v19, v20);
  if ( !*(_QWORD *)(v5 + 32) )
    goto LABEL_22;
  v22 = *(_QWORD *)(*(_QWORD *)(v5 + 32) + 112LL);
  if ( !v22 )
    goto LABEL_22;
  v23 = *(_QWORD *)(v22 + 56);
  if ( !v23 )
    goto LABEL_22;
  if ( !*(_DWORD *)(v23 + 24) )
LABEL_23:
    sub_1C2209C(v6, v7);
  v24 = *(_DWORD *)(v23 + 32);
  v6 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
  }
  if ( v24 == v6->static_fields->LvExceedItemId )
  {
    v25 = (QuestRewardInfo_o *)sub_1C22084(QuestRewardInfo_TypeInfo);
    QuestRewardInfo___ctor(v25, 0LL);
    *(_QWORD *)(v5 + 16) = v25;
    v26 = (_QWORD *)(v5 + 16);
    sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 16), (int64_t)v25, v27, v28, v29, v30, v31, v32);
    v33 = *(_QWORD *)(v5 + 32);
    if ( !v33 )
      goto LABEL_22;
    v34 = *(_QWORD *)(v33 + 112);
    if ( !v34 )
      goto LABEL_22;
    v35 = *(_QWORD *)(v34 + 56);
    if ( !v35 )
      goto LABEL_22;
    if ( *(_DWORD *)(v35 + 24) )
    {
      v36 = (_DWORD *)*v26;
      if ( *v26 )
      {
        v36[5] = *(_DWORD *)(v35 + 32);
        buyCount = this->fields.buyCount;
        v36[4] = 2;
        v36[6] = buyCount;
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v39 = AvalonSceneManager_TypeInfo;
        if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
          v39 = AvalonSceneManager_TypeInfo;
        }
        DEFAULT_FADE_TIME = v39->static_fields->DEFAULT_FADE_TIME;
        v41 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
        System_Action___ctor(
          v41,
          (Il2CppObject *)v5,
          Method_ShopRootComponent___c__DisplayClass100_0__PlayLvExceedItemReleaseEffect_b__0__,
          0LL);
        if ( Instance )
        {
          CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v41, 0LL);
          return;
        }
      }
LABEL_22:
      sub_1C22094(v6, v7);
    }
    goto LABEL_23;
  }
  v7 = *v14;
  if ( !*v14 )
    goto LABEL_22;
  ShopRootComponent__ShowNormalItemDialog(this, v7, v7->fields._Shop_k__BackingField, v21);
}


void __fastcall ShopRootComponent__PlayServantCostumeReleaseEffect(
        ShopRootComponent_o *this,
        ShopEntity_o *shopEntity,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  const MethodInfo *v20; // x2
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v22; // x8
  CommonUI_o *v23; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v25; // x21

  if ( (byte_4BD8A65 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&AvalonSceneManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_ShopRootComponent___c__DisplayClass107_0__PlayServantCostumeReleaseEffect_b__0__);
    sub_1C21E38(&ShopRootComponent___c__DisplayClass107_0_TypeInfo);
    byte_4BD8A65 = 1;
  }
  v5 = sub_1C22084(ShopRootComponent___c__DisplayClass107_0_TypeInfo);
  ShopRootComponent___c__DisplayClass107_0___ctor((ShopRootComponent___c__DisplayClass107_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_8;
  *(_QWORD *)(v5 + 16) = shopEntity;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 16), (int64_t)shopEntity, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 24), (int64_t)this, v14, v15, v16, v17, v18, v19);
  ShopRootComponent__SetActionBG(this, 1, v20);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v22 = AvalonSceneManager_TypeInfo;
  v23 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v22 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v22->static_fields->DEFAULT_FADE_TIME;
  v25 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(
    v25,
    (Il2CppObject *)v5,
    Method_ShopRootComponent___c__DisplayClass107_0__PlayServantCostumeReleaseEffect_b__0__,
    0LL);
  if ( !v23 )
LABEL_8:
    sub_1C22094(v6, v7);
  CommonUI__maskFadeout(v23, 1, DEFAULT_FADE_TIME, v25, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopRootComponent__PlayVoiceBack(ShopRootComponent_o *this, int32_t state, const MethodInfo *method)
{
  ShopPlayVoiceComponent_o *shopPlayVoiceComponent; // x19
  System_String_o *BackVoiceMasterKey; // x0
  const MethodInfo *v6; // x1
  System_String_o *v7; // x20
  int32_t BackVoiceFlag; // w2
  const MethodInfo *v9; // x3

  shopPlayVoiceComponent = this->fields.shopPlayVoiceComponent;
  BackVoiceMasterKey = ShopPlayVoiceConstants__GetBackVoiceMasterKey(state, *(const MethodInfo **)&state);
  if ( !shopPlayVoiceComponent )
    sub_1C22094(BackVoiceMasterKey, v6);
  v7 = BackVoiceMasterKey;
  BackVoiceFlag = ShopPlayVoiceConstants__GetBackVoiceFlag(state, v6);
  ShopPlayVoiceComponent__PlayVoiceOnce(shopPlayVoiceComponent, v7, BackVoiceFlag, v9);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopRootComponent__PlayVoiceEnter(ShopRootComponent_o *this, int32_t state, const MethodInfo *method)
{
  ShopPlayVoiceComponent_o *shopPlayVoiceComponent; // x19
  System_String_o *EnterVoiceMasterKey; // x0
  const MethodInfo *v6; // x1
  System_String_o *v7; // x20
  int32_t EnterVoiceFlag; // w2
  const MethodInfo *v9; // x3

  shopPlayVoiceComponent = this->fields.shopPlayVoiceComponent;
  EnterVoiceMasterKey = ShopPlayVoiceConstants__GetEnterVoiceMasterKey(state, *(const MethodInfo **)&state);
  if ( !shopPlayVoiceComponent )
    sub_1C22094(EnterVoiceMasterKey, v6);
  v7 = EnterVoiceMasterKey;
  EnterVoiceFlag = ShopPlayVoiceConstants__GetEnterVoiceFlag(state, v6);
  ShopPlayVoiceComponent__PlayVoiceOnce(shopPlayVoiceComponent, v7, EnterVoiceFlag, v9);
}


void __fastcall ShopRootComponent__Quit(ShopRootComponent_o *this, const MethodInfo *method)
{
  StandFigureBack_o *standFigureBack; // x0
  const MethodInfo *v4; // x1

  standFigureBack = this->fields.standFigureBack;
  if ( !standFigureBack )
    goto LABEL_14;
  StandFigureBack__Init(standFigureBack, 0LL);
  standFigureBack = (StandFigureBack_o *)this->fields.backgroundTexture;
  if ( !standFigureBack )
    goto LABEL_14;
  ExUITexture__ClearImage((ExUITexture_o *)standFigureBack, 0LL);
  standFigureBack = (StandFigureBack_o *)this->fields.shopPlayVoiceComponent;
  if ( !standFigureBack )
    goto LABEL_14;
  ShopPlayVoiceComponent__QuitShopVoice((ShopPlayVoiceComponent_o *)standFigureBack, method);
  standFigureBack = (StandFigureBack_o *)this->fields.listViewHelper;
  if ( !standFigureBack )
    goto LABEL_14;
  ShopSceneListViewControlHelper__SetListViewOnSceneQuit((ShopSceneListViewControlHelper_o *)standFigureBack, 0LL);
  ShopRootComponent__CloseEventItemWindow(this, v4);
  standFigureBack = (StandFigureBack_o *)this->fields.buyItemConfirmMenu;
  if ( !standFigureBack )
    goto LABEL_14;
  ShopBuyItemConfirmMenu__Init((ShopBuyItemConfirmMenu_o *)standFigureBack, 0LL);
  standFigureBack = (StandFigureBack_o *)this->fields.buyBulkItemConfirmMenu;
  if ( !standFigureBack )
    goto LABEL_14;
  ShopBuyBulkItemConfirmMenu__Init((ShopBuyBulkItemConfirmMenu_o *)standFigureBack, 0LL);
  standFigureBack = (StandFigureBack_o *)this->fields.ApSeedExchangeConfirmMenu;
  if ( !standFigureBack )
    goto LABEL_14;
  ShopBuyItemConfirmMenu__Init((ShopBuyItemConfirmMenu_o *)standFigureBack, 0LL);
  standFigureBack = (StandFigureBack_o *)this->fields.ApSeedBulkExchangeConfirmMenu;
  if ( !standFigureBack )
    goto LABEL_14;
  ShopBuyBulkItemConfirmMenu__Init((ShopBuyBulkItemConfirmMenu_o *)standFigureBack, 0LL);
  standFigureBack = (StandFigureBack_o *)this->fields.servantSellConfirmMenu;
  if ( !standFigureBack
    || (ServantSellConfirmMenu__Init((ServantSellConfirmMenu_o *)standFigureBack, 0LL),
        (standFigureBack = (StandFigureBack_o *)this->fields.servantSellMenu) == 0LL)
    || (ServantSellMenu__Init((ServantSellMenu_o *)standFigureBack, 0LL),
        (standFigureBack = (StandFigureBack_o *)this->fields.shopResetConfirmDialog) == 0LL)
    || (ShopResetConfirmDialogComponent__Init((ShopResetConfirmDialogComponent_o *)standFigureBack, method),
        (standFigureBack = (StandFigureBack_o *)this->fields.informationPanel) == 0LL) )
  {
LABEL_14:
    sub_1C22094(standFigureBack, method);
  }
  ShopInfoIndicator__StopInformationChange((ShopInfoIndicator_o *)standFigureBack, method);
  this->fields.state = 0;
}


void __fastcall ShopRootComponent__QuitHelp(
        ShopRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  ShopSceneListViewControlHelper_o *listViewHelper; // x0

  if ( (byte_4BD8A70 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_22632/*"ok"*/);
    byte_4BD8A70 = 1;
  }
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_22632/*"ok"*/, 0LL) )
  {
    listViewHelper = this->fields.listViewHelper;
    this->fields.inputState = 4;
    if ( !listViewHelper )
      sub_1C22094(0LL, v5);
    ShopSceneListViewControlHelper__SetListViewOnQuitHelp(listViewHelper, this->fields.state, 0LL);
  }
}


void __fastcall ShopRootComponent__RefreshCurrencyInfo(
        ShopRootComponent_o *this,
        int32_t state,
        const MethodInfo *method)
{
  ShopCurrencyInfoController_o *currencyInfoController; // x20
  __int64 CurrencyKind; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3

  if ( (byte_4BD8A4D & 1) == 0 )
  {
    sub_1C21E38(&ShopBuyItemListViewManager_TypeInfo);
    byte_4BD8A4D = 1;
  }
  currencyInfoController = this->fields.currencyInfoController;
  if ( !ShopBuyItemListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ShopBuyItemListViewManager_TypeInfo);
  CurrencyKind = ShopBuyItemListViewManager__GetCurrencyKind(state, 0LL);
  if ( !currencyInfoController )
    sub_1C22094(CurrencyKind, v7);
  ShopCurrencyInfoController__RefreshCurrencyInfo(currencyInfoController, CurrencyKind, state, v8);
}


void __fastcall ShopRootComponent__RefreshInfo(ShopRootComponent_o *this, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x20
  void *Instance; // x0
  __int64 v5; // x1
  int32_t *v6; // x21
  UILabel_o *stoneInfoLabel; // x22
  int32_t stone; // w23
  UILabel_o *manaInfoLabel; // x22
  UILabel_o *rarePriInfoLabel; // x22
  Il2CppObject *MasterData_object; // x0
  UILabel_o *stoneFragmentsInfoLabel; // x22
  UserItemMaster_o *v13; // x20
  UILabel_o *anonymousInfoLabel; // x22
  NetworkManager_c *v15; // x0
  UILabel_o *grailFragmentsInfoLabel; // x22
  NetworkManager_c *v17; // x0
  BalanceConfig_c *v18; // x8
  int64_t userIdNumber; // x23
  UILabel_o *apSeedInfoLabel; // x22
  NetworkManager_c *v21; // x0
  const MethodInfo *v22; // x1
  UISprite_o *apSeedIcon; // x22
  char v24; // w22
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v26; // x0
  UnityEngine_GameObject_o *v27; // x0
  UnityEngine_GameObject_o *v28; // x0
  UILabel_o *purePriInfo2Label; // x22
  NetworkManager_c *v30; // x0
  BalanceConfig_c *v31; // x8
  int64_t v32; // x23
  int32_t v33; // w23
  UISprite_o *purePriInfo2; // x22
  NetworkManager_c *v35; // x0
  UILabel_o *purePriShopResetInfoLabel; // x21
  UILabel_o *purePriInfoLabel; // x21
  NetworkManager_c *v38; // x0
  BalanceConfig_c *v39; // x8
  int64_t v40; // x22
  int32_t v41; // w22
  UISprite_o *purePriInfo; // x21
  UnityEngine_GameObject_o *v43; // x0
  UnityEngine_GameObject_o *v44; // x0
  UnityEngine_GameObject_o *v45; // x0
  UnityEngine_GameObject_o *v46; // x0
  UILabel_o *revivalItemInfoLabel; // x21
  NetworkManager_c *v48; // x0
  BalanceConfig_c *v49; // x8
  int64_t v50; // x22
  int32_t v51; // w20
  UISprite_o *revivalItemInfo; // x20
  UnityEngine_GameObject_o *v53; // x0
  UnityEngine_GameObject_o *v54; // x0
  UnityEngine_GameObject_o *v55; // x0
  UnityEngine_GameObject_o *v56; // x0
  const MethodInfo *v57; // x2

  if ( (byte_4BD8A4B & 1) == 0 )
  {
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&StringLiteral_20613/*"img_bg_evocation"*/);
    sub_1C21E38(&StringLiteral_20619/*"img_bg_pureprism_itemstock_resetticket"*/);
    sub_1C21E38(&StringLiteral_20618/*"img_bg_pp"*/);
    byte_4BD8A4B = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_112;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !SelfUserGame )
    goto LABEL_112;
  v6 = (int32_t *)Instance;
  stoneInfoLabel = this->fields.stoneInfoLabel;
  stone = SelfUserGame->fields.stone;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = LocalizationManager__GetNumberFormat(stone, 0LL);
  if ( !stoneInfoLabel )
    goto LABEL_112;
  UILabel__set_text(stoneInfoLabel, (System_String_o *)Instance, 0LL);
  manaInfoLabel = this->fields.manaInfoLabel;
  Instance = LocalizationManager__GetNumberFormat(SelfUserGame->fields.mana, 0LL);
  if ( !manaInfoLabel )
    goto LABEL_112;
  UILabel__set_text(manaInfoLabel, (System_String_o *)Instance, 0LL);
  rarePriInfoLabel = this->fields.rarePriInfoLabel;
  Instance = LocalizationManager__GetNumberFormat(SelfUserGame->fields.rarePri, 0LL);
  if ( !rarePriInfoLabel )
    goto LABEL_112;
  UILabel__set_text(rarePriInfoLabel, (System_String_o *)Instance, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_112;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserItemMaster___);
  stoneFragmentsInfoLabel = this->fields.stoneFragmentsInfoLabel;
  v13 = (UserItemMaster_o *)MasterData_object;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BD6FF5 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD6FF5 = 1;
  }
  Instance = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = NetworkManager_TypeInfo;
  }
  if ( !v6 )
    goto LABEL_112;
  if ( !v13 )
    goto LABEL_112;
  Instance = UserItemMaster__GetEntityDefinitely(v13, *(_QWORD *)(*((_QWORD *)Instance + 23) + 64LL), v6[23], 0LL);
  if ( !Instance )
    goto LABEL_112;
  Instance = LocalizationManager__GetNumberFormat(*((_DWORD *)Instance + 7), 0LL);
  if ( !stoneFragmentsInfoLabel )
    goto LABEL_112;
  UILabel__set_text(stoneFragmentsInfoLabel, (System_String_o *)Instance, 0LL);
  anonymousInfoLabel = this->fields.anonymousInfoLabel;
  if ( !byte_4BD6FF5 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD6FF5 = 1;
  }
  v15 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v15 = NetworkManager_TypeInfo;
  }
  Instance = UserItemMaster__GetEntityDefinitely(v13, v15->static_fields->userIdNumber, v6[24], 0LL);
  if ( !Instance )
    goto LABEL_112;
  Instance = LocalizationManager__GetNumberFormat(*((_DWORD *)Instance + 7), 0LL);
  if ( !anonymousInfoLabel )
    goto LABEL_112;
  UILabel__set_text(anonymousInfoLabel, (System_String_o *)Instance, 0LL);
  grailFragmentsInfoLabel = this->fields.grailFragmentsInfoLabel;
  if ( !byte_4BD6FF5 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD6FF5 = 1;
  }
  v17 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v17 = NetworkManager_TypeInfo;
  }
  v18 = BalanceConfig_TypeInfo;
  userIdNumber = v17->static_fields->userIdNumber;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v18 = BalanceConfig_TypeInfo;
  }
  Instance = UserItemMaster__GetEntityDefinitely(v13, userIdNumber, v18->static_fields->LvExceedDewDropItemId, 0LL);
  if ( !Instance )
    goto LABEL_112;
  Instance = LocalizationManager__GetNumberFormat(*((_DWORD *)Instance + 7), 0LL);
  if ( !grailFragmentsInfoLabel )
    goto LABEL_112;
  UILabel__set_text(grailFragmentsInfoLabel, (System_String_o *)Instance, 0LL);
  apSeedInfoLabel = this->fields.apSeedInfoLabel;
  if ( !byte_4BD6FF5 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD6FF5 = 1;
  }
  v21 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v21 = NetworkManager_TypeInfo;
  }
  Instance = UserItemMaster__GetEntityDefinitely(
               v13,
               v21->static_fields->userIdNumber,
               BalanceConfig_TypeInfo->static_fields->ApSeedItemId,
               0LL);
  if ( !Instance )
    goto LABEL_112;
  Instance = LocalizationManager__GetNumberFormat(*((_DWORD *)Instance + 7), 0LL);
  if ( !apSeedInfoLabel )
    goto LABEL_112;
  UILabel__set_text(apSeedInfoLabel, (System_String_o *)Instance, 0LL);
  ShopRootComponent__UpdateApLabel(this, v22);
  apSeedIcon = this->fields.apSeedIcon;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetItem(apSeedIcon, 103, 0LL);
  AtlasManager__SetItem(this->fields.apIcon, 47, 0LL);
  Instance = (void *)ConstantMaster__IsFLAG20241004(0LL);
  if ( !this->fields.purePriInfo )
    goto LABEL_112;
  v24 = (char)Instance;
  Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.purePriInfo, 0LL);
  if ( !Instance )
    goto LABEL_112;
  if ( (v24 & 1) != 0 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
    Instance = this->fields.manaInfoLabel;
    if ( Instance )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      Instance = GameObjectExtensions__GetParent(gameObject, 0LL);
      if ( Instance )
      {
        v26 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
        GameObjectExtensions__SetLocalPositionX(v26, 0.0, 0LL);
        Instance = this->fields.rarePriInfoLabel;
        if ( Instance )
        {
          v27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
          Instance = GameObjectExtensions__GetParent(v27, 0LL);
          if ( Instance )
          {
            v28 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
            GameObjectExtensions__SetLocalPositionX(v28, -179.0, 0LL);
            purePriInfo2Label = this->fields.purePriInfo2Label;
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            if ( !byte_4BD6FF5 )
            {
              sub_1C21E38(&NetworkManager_TypeInfo);
              byte_4BD6FF5 = 1;
            }
            v30 = NetworkManager_TypeInfo;
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              v30 = NetworkManager_TypeInfo;
            }
            v31 = BalanceConfig_TypeInfo;
            v32 = v30->static_fields->userIdNumber;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              v31 = BalanceConfig_TypeInfo;
            }
            Instance = UserItemMaster__GetEntityDefinitely(v13, v32, v31->static_fields->PurePriItemId, 0LL);
            if ( Instance )
            {
              v33 = *((_DWORD *)Instance + 7);
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              Instance = LocalizationManager__GetNumberFormat(v33, 0LL);
              if ( purePriInfo2Label )
              {
                UILabel__set_text(purePriInfo2Label, (System_String_o *)Instance, 0LL);
                purePriInfo2 = this->fields.purePriInfo2;
                if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                AtlasManager__SetShopBanner_39105940(purePriInfo2, (System_String_o *)StringLiteral_20618/*"img_bg_pp"*/, 0LL);
                if ( !byte_4BD6FF5 )
                {
                  sub_1C21E38(&NetworkManager_TypeInfo);
                  byte_4BD6FF5 = 1;
                }
                v35 = NetworkManager_TypeInfo;
                if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                  v35 = NetworkManager_TypeInfo;
                }
                Instance = UserItemMaster__GetEntityDefinitely(v13, v35->static_fields->userIdNumber, v6[25], 0LL);
                if ( Instance )
                {
                  purePriShopResetInfoLabel = this->fields.purePriShopResetInfoLabel;
                  Instance = LocalizationManager__GetNumberFormat(*((_DWORD *)Instance + 7), 0LL);
                  if ( purePriShopResetInfoLabel )
                  {
                    UILabel__set_text(purePriShopResetInfoLabel, (System_String_o *)Instance, 0LL);
                    AtlasManager__SetShopBanner_39105940(
                      this->fields.purePriShopResetInfo,
                      (System_String_o *)StringLiteral_20619/*"img_bg_pureprism_itemstock_resetticket"*/,
                      0LL);
                    goto LABEL_90;
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_112:
    sub_1C22094(Instance, v5);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  purePriInfoLabel = this->fields.purePriInfoLabel;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BD6FF5 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD6FF5 = 1;
  }
  v38 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v38 = NetworkManager_TypeInfo;
  }
  v39 = BalanceConfig_TypeInfo;
  v40 = v38->static_fields->userIdNumber;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v39 = BalanceConfig_TypeInfo;
  }
  Instance = UserItemMaster__GetEntityDefinitely(v13, v40, v39->static_fields->PurePriItemId, 0LL);
  if ( !Instance )
    goto LABEL_112;
  v41 = *((_DWORD *)Instance + 7);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = LocalizationManager__GetNumberFormat(v41, 0LL);
  if ( !purePriInfoLabel )
    goto LABEL_112;
  UILabel__set_text(purePriInfoLabel, (System_String_o *)Instance, 0LL);
  purePriInfo = this->fields.purePriInfo;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetShopBanner_39105940(purePriInfo, (System_String_o *)StringLiteral_20618/*"img_bg_pp"*/, 0LL);
  Instance = this->fields.manaInfoLabel;
  if ( !Instance )
    goto LABEL_112;
  v43 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  Instance = GameObjectExtensions__GetParent(v43, 0LL);
  if ( !Instance )
    goto LABEL_112;
  v44 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  GameObjectExtensions__SetLocalPositionX(v44, 85.0, 0LL);
  Instance = this->fields.rarePriInfoLabel;
  if ( !Instance )
    goto LABEL_112;
  v45 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  Instance = GameObjectExtensions__GetParent(v45, 0LL);
  if ( !Instance )
    goto LABEL_112;
  v46 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  GameObjectExtensions__SetLocalPositionX(v46, -273.0, 0LL);
LABEL_90:
  Instance = this->fields.revivalItemInfo;
  if ( !Instance )
    goto LABEL_112;
  Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_112;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  revivalItemInfoLabel = this->fields.revivalItemInfoLabel;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BD6FF5 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD6FF5 = 1;
  }
  v48 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v48 = NetworkManager_TypeInfo;
  }
  v49 = BalanceConfig_TypeInfo;
  v50 = v48->static_fields->userIdNumber;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v49 = BalanceConfig_TypeInfo;
  }
  Instance = UserItemMaster__GetEntityDefinitely(v13, v50, v49->static_fields->RevivalItemId, 0LL);
  if ( !Instance )
    goto LABEL_112;
  v51 = *((_DWORD *)Instance + 7);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = LocalizationManager__GetNumberFormat(v51, 0LL);
  if ( !revivalItemInfoLabel )
    goto LABEL_112;
  UILabel__set_text(revivalItemInfoLabel, (System_String_o *)Instance, 0LL);
  revivalItemInfo = this->fields.revivalItemInfo;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetShopBanner_39105940(revivalItemInfo, (System_String_o *)StringLiteral_20613/*"img_bg_evocation"*/, 0LL);
  Instance = this->fields.anonymousInfoLabel;
  if ( !Instance )
    goto LABEL_112;
  v53 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  Instance = GameObjectExtensions__GetParent(v53, 0LL);
  if ( !Instance )
    goto LABEL_112;
  v54 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  GameObjectExtensions__SetLocalPositionX(v54, -94.0, 0LL);
  Instance = this->fields.grailFragmentsInfoLabel;
  if ( !Instance )
    goto LABEL_112;
  v55 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  Instance = GameObjectExtensions__GetParent(v55, 0LL);
  if ( !Instance )
    goto LABEL_112;
  v56 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  GameObjectExtensions__SetLocalPositionX(v56, -273.0, 0LL);
  Instance = this->fields.giftButtonControl;
  if ( !Instance )
    goto LABEL_112;
  GiftButtonCtrl__InvalidateGiftInfo((GiftButtonCtrl_o *)Instance, 0LL);
  ShopRootComponent__RefreshCurrencyInfo(this, this->fields.state, v57);
}


void __fastcall ShopRootComponent__RequestEnd(ShopRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x2
  __int64 v6; // x1
  ServantSellConfirmMenu_o *servantSellConfirmMenu; // x0
  ServantSellConfirmMenu_o *v8; // x20
  System_Action_int__o *v9; // x21

  if ( (byte_4BD8A5D & 1) == 0 )
  {
    sub_1C21E38(&System_Action_int__TypeInfo);
    sub_1C21E38(&Method_ShopRootComponent__RequestEnd_b__98_0__);
    byte_4BD8A5D = 1;
  }
  this->fields.inputState = 3;
  ShopRootComponent__RefreshInfo(this, method);
  ShopRootComponent__CloseItemConfirm(this, v3);
  ShopRootComponent__CloseSellServantConfirm(this, v4);
  ShopRootComponent__SetActionBG(this, 0, v5);
  if ( this->fields.state == 9 )
  {
    servantSellConfirmMenu = this->fields.servantSellConfirmMenu;
    if ( !servantSellConfirmMenu )
      goto LABEL_10;
    if ( ServantSellConfirmMenu__get_IsCommandCodeRemoveResult(servantSellConfirmMenu, 0LL) )
    {
      servantSellConfirmMenu = this->fields.servantSellConfirmMenu;
      if ( servantSellConfirmMenu )
      {
        ServantSellConfirmMenu__Init(servantSellConfirmMenu, 0LL);
        v8 = this->fields.servantSellConfirmMenu;
        v9 = (System_Action_int__o *)sub_1C22084(System_Action_int__TypeInfo);
        System_Action_int____ctor(v9, (Il2CppObject *)this, Method_ShopRootComponent__RequestEnd_b__98_0__, 0LL);
        if ( v8 )
        {
          ServantSellConfirmMenu__OpenCommandCodeRemoveResult(v8, v9, 0LL);
          return;
        }
      }
LABEL_10:
      sub_1C22094(servantSellConfirmMenu, v6);
    }
  }
}


void __fastcall ShopRootComponent__RequestSellServant(ShopRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  NetworkManager_ResultCallbackFunc_o *v4; // x20
  Il2CppObject *Request_object; // x0
  __int64 v6; // x1

  if ( (byte_4BD8A68 & 1) == 0 )
  {
    sub_1C21E38(&Method_NetworkManager_getRequest_SellServantRequest___);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C21E38(&Method_ShopRootComponent_EndRequestSellServant__);
    sub_1C21E38(&StringLiteral_22456/*"ng"*/);
    byte_4BD8A68 = 1;
  }
  if ( this->fields.selectedServantIds )
  {
    v4 = (NetworkManager_ResultCallbackFunc_o *)sub_1C22084(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v4,
      (Il2CppObject *)this,
      Method_ShopRootComponent_EndRequestSellServant__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v4,
                       (const MethodInfo_30345EC *)Method_NetworkManager_getRequest_SellServantRequest___);
    if ( !Request_object )
      sub_1C22094(0LL, v6);
    SellServantRequest__beginRequest(
      (SellServantRequest_o *)Request_object,
      this->fields.selectedServantIds,
      this->fields.selectedCommandCodeIds,
      0LL);
  }
  else
  {
    ShopRootComponent__EndRequestSellServant(this, (System_String_o *)StringLiteral_22456/*"ng"*/, v2);
  }
}


void __fastcall ShopRootComponent__RequestShop(ShopRootComponent_o *this, const MethodInfo *method)
{
  ShopSceneListViewControlHelper_o *listViewHelper; // x0
  ShopBuyItemListViewItem_o *ShopBuyItemListViewItem; // x0
  const MethodInfo *v5; // x1
  ShopBuyItemListViewItem_o *v6; // x20
  NetworkManager_ResultCallbackFunc_o *v7; // x21
  struct ShopEntity_o *Shop_k__BackingField; // x8

  if ( (byte_4BD8A5C & 1) == 0 )
  {
    sub_1C21E38(&Method_NetworkManager_getRequest_PurchaseRequest___);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C21E38(&Method_ShopRootComponent_EndRequestShop__);
    byte_4BD8A5C = 1;
  }
  listViewHelper = this->fields.listViewHelper;
  if ( !listViewHelper )
    goto LABEL_12;
  ShopBuyItemListViewItem = ShopSceneListViewControlHelper__GetShopBuyItemListViewItem(
                              listViewHelper,
                              this->fields.selectedItemIndex,
                              0LL);
  if ( ShopBuyItemListViewItem )
  {
    v6 = ShopBuyItemListViewItem;
    if ( ShopBuyItemListViewItem->fields._Shop_k__BackingField )
    {
      v7 = (NetworkManager_ResultCallbackFunc_o *)sub_1C22084(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(v7, (Il2CppObject *)this, Method_ShopRootComponent_EndRequestShop__, 0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      listViewHelper = (ShopSceneListViewControlHelper_o *)NetworkManager__getRequest_object_(
                                                             v7,
                                                             (const MethodInfo_30345EC *)Method_NetworkManager_getRequest_PurchaseRequest___);
      Shop_k__BackingField = v6->fields._Shop_k__BackingField;
      if ( Shop_k__BackingField && listViewHelper )
      {
        PurchaseRequest__beginRequest(
          (PurchaseRequest_o *)listViewHelper,
          Shop_k__BackingField->fields.id,
          this->fields.buyCount,
          0,
          0,
          0LL);
        return;
      }
LABEL_12:
      sub_1C22094(listViewHelper, method);
    }
  }
  ShopRootComponent__RequestEnd(this, v5);
}


bool __fastcall ShopRootComponent__ReturnCallScene(ShopRootComponent_o *this, const MethodInfo *method)
{
  SceneJumpInfo_o *jumpInfo; // x0

  jumpInfo = this->fields.jumpInfo;
  if ( jumpInfo && SceneJumpInfo__ReturnScene(jumpInfo, 0LL) )
    return 1;
  MainMenuBar__requestTerminalSceneChange(0LL);
  return 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopRootComponent__SelectItem(
        ShopRootComponent_o *this,
        int32_t index,
        bool isBulk,
        const MethodInfo *method)
{
  int32_t v5; // w21
  ShopSceneListViewControlHelper_o *listViewHelper; // x0
  ShopBuyItemListViewItem_o *ShopBuyItemListViewItem; // x0
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x4
  ShopBuyItemListViewItem_o *v11; // x22
  ServantLimitImageMaster_o *v12; // x23
  bool v13; // w24
  int32_t TargetId; // w0
  const MethodInfo *v15; // x3
  Il2CppObject *Master_object; // x23
  Il2CppObject *Entity; // x23
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  System_String_o *v21; // x20
  Il2CppObject *v22; // x0
  System_String_o *v23; // x0
  System_String_o *v24; // x21
  Il2CppObject *Name; // x0
  System_String_o *v26; // x0
  SummonInfoDlgComponent_o *limitCountSealInfoDlg; // x21
  System_String_o *v28; // x22
  SummonInfoDlgComponent_CallbackFunc_o *v29; // x23
  int klass_high; // [xsp+Ch] [xbp-34h] BYREF

  v5 = index;
  if ( (byte_4BD8A52 & 1) == 0 )
  {
    sub_1C21E38(&SummonInfoDlgComponent_CallbackFunc_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_CombineLimitReleaseMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_ShopRootComponent_EndLimitCountSealInfoDialog__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&StringLiteral_3737/*"COMBINE_LIMIT_SEALED_TITLE"*/);
    sub_1C21E38(&StringLiteral_3736/*"COMBINE_LIMIT_SEALED_MESSAGE_{0}"*/);
    byte_4BD8A52 = 1;
  }
  if ( !this->fields.inputState )
  {
    listViewHelper = this->fields.listViewHelper;
    if ( listViewHelper )
    {
      ShopBuyItemListViewItem = ShopSceneListViewControlHelper__GetShopBuyItemListViewItem(listViewHelper, v5, 0LL);
      v11 = ShopBuyItemListViewItem;
      if ( this->fields.state != 6
        || ShopRootComponent__GetShopItemBuyNum(
             (ShopRootComponent_o *)ShopBuyItemListViewItem,
             ShopBuyItemListViewItem,
             v9) > 0 )
      {
        goto LABEL_7;
      }
      listViewHelper = (ShopSceneListViewControlHelper_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( listViewHelper )
      {
        listViewHelper = (ShopSceneListViewControlHelper_o *)DataManager__GetMasterData_object_(
                                                               (DataManager_o *)listViewHelper,
                                                               (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
        if ( v11 )
        {
          v12 = (ServantLimitImageMaster_o *)listViewHelper;
          listViewHelper = (ShopSceneListViewControlHelper_o *)ShopBuyItemListViewItem__get_TargetId(v11, 0LL);
          if ( v12 )
          {
            v13 = isBulk;
            if ( ServantLimitImageMaster__IsServantLimitCountSeal(v12, (int32_t)listViewHelper, 4, 0LL) )
            {
              this->fields.limitCountSealInfoIndex = v5;
              this->fields.limitCountSealInfoBulk = v13;
              TargetId = ShopBuyItemListViewItem__get_TargetId(v11, 0LL);
              ShopRootComponent__OpenLimitCountSealInfoDialog(this, TargetId, 0, v15);
              return;
            }
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantMaster___);
            listViewHelper = (ShopSceneListViewControlHelper_o *)ShopBuyItemListViewItem__get_TargetId(v11, 0LL);
            if ( Master_object )
            {
              Entity = DataMasterBase_object__object__int___GetEntity(
                         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                         (int32_t)listViewHelper,
                         (const MethodInfo_325BDC8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              listViewHelper = (ShopSceneListViewControlHelper_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_CombineLimitReleaseMaster___);
              *(_QWORD *)&index = Entity ? HIDWORD(Entity[7].klass) : 0xFFFFFFFFLL;
              if ( listViewHelper )
              {
                if ( !CombineLimitReleaseMaster__IsExistSealedLimitCount(
                        (CombineLimitReleaseMaster_o *)listViewHelper,
                        index,
                        0LL) )
                {
LABEL_7:
                  ShopRootComponent__OpenConfirmMenu(this, this->fields.state, v11, isBulk, v10);
                  this->fields.inputState = 2;
                  return;
                }
                this->fields.limitCountSealInfoIndex = v5;
                this->fields.limitCountSealInfoBulk = v13;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                listViewHelper = (ShopSceneListViewControlHelper_o *)LocalizationManager__Get(
                                                                       (System_String_o *)StringLiteral_3737/*"COMBINE_LIMIT_SEALED_TITLE"*/,
                                                                       0LL);
                if ( Entity )
                {
                  v21 = (System_String_o *)listViewHelper;
                  klass_high = HIDWORD(Entity[7].klass);
                  v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &klass_high, v18, v19, v20);
                  v23 = System_String__Format((System_String_o *)StringLiteral_3736/*"COMBINE_LIMIT_SEALED_MESSAGE_{0}"*/, v22, 0LL);
                  listViewHelper = (ShopSceneListViewControlHelper_o *)LocalizationManager__Get(v23, 0LL);
                  if ( v11->fields._Shop_k__BackingField )
                  {
                    v24 = (System_String_o *)listViewHelper;
                    Name = (Il2CppObject *)ShopEntity__getName(v11->fields._Shop_k__BackingField, 0LL);
                    v26 = System_String__Format(v24, Name, 0LL);
                    limitCountSealInfoDlg = this->fields.limitCountSealInfoDlg;
                    v28 = v26;
                    v29 = (SummonInfoDlgComponent_CallbackFunc_o *)sub_1C22084(SummonInfoDlgComponent_CallbackFunc_TypeInfo);
                    SummonInfoDlgComponent_CallbackFunc___ctor(
                      v29,
                      (Il2CppObject *)this,
                      (intptr_t)Method_ShopRootComponent_EndLimitCountSealInfoDialog__,
                      0LL);
                    if ( limitCountSealInfoDlg )
                    {
                      SummonInfoDlgComponent__OpenInfoMessageDlg(limitCountSealInfoDlg, v21, v28, v29, 0LL);
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
    sub_1C22094(listViewHelper, *(_QWORD *)&index);
  }
}


void __fastcall ShopRootComponent__SelectMenu(ShopRootComponent_o *this, int32_t state, const MethodInfo *method)
{
  __int64 v5; // x20
  ShopPlayVoiceComponent_o *shopPlayVoiceComponent; // x0
  const MethodInfo *v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  ShopRootComponent_o *v14; // x0
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x2
  int32_t v17; // w1
  int32_t v18; // w19
  System_Action_o *v19; // x21
  ShopRootComponent_o *v20; // x0
  const MethodInfo *v21; // x3

  if ( (byte_4BD8A4E & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&CoinRoomUtility_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C21E38(&Method_ShopRootComponent___c__DisplayClass81_0__SelectMenu_b__0__);
    sub_1C21E38(&ShopRootComponent___c__DisplayClass81_0_TypeInfo);
    byte_4BD8A4E = 1;
  }
  v5 = sub_1C22084(ShopRootComponent___c__DisplayClass81_0_TypeInfo);
  ShopRootComponent___c__DisplayClass81_0___ctor((ShopRootComponent___c__DisplayClass81_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_19;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 16), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v5 + 24) = state;
  if ( ShopRootComponent__CheckServerLimitTime(v14, state, v15) )
  {
    v17 = *(_DWORD *)(v5 + 24);
    if ( v17 == 17 )
    {
      if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
      if ( CoinRoomUtility__IsTargetQuestClear(0LL) )
      {
        shopPlayVoiceComponent = this->fields.shopPlayVoiceComponent;
        if ( shopPlayVoiceComponent )
        {
          ShopPlayVoiceComponent__StopVoice(shopPlayVoiceComponent, v7);
          shopPlayVoiceComponent = (ShopPlayVoiceComponent_o *)this->fields.topListViewManager;
          if ( shopPlayVoiceComponent )
          {
            this->fields.saveScrollBarValue = ShopTopListViewManager__get_currentScrollBarValue(
                                                (ShopTopListViewManager_o *)shopPlayVoiceComponent,
                                                0LL);
            shopPlayVoiceComponent = (ShopPlayVoiceComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
            if ( shopPlayVoiceComponent )
            {
              AvalonSceneManager__pushScene((AvalonSceneManager_o *)shopPlayVoiceComponent, 90, 1, 0LL, 0LL);
              return;
            }
          }
        }
LABEL_19:
        sub_1C22094(shopPlayVoiceComponent, v7);
      }
      v17 = *(_DWORD *)(v5 + 24);
    }
    if ( v17 == 15 )
    {
      v18 = 15;
    }
    else
    {
      ShopRootComponent__PlayVoiceEnter(this, v17, v16);
      v18 = *(_DWORD *)(v5 + 24);
    }
    v19 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(
      v19,
      (Il2CppObject *)v5,
      Method_ShopRootComponent___c__DisplayClass81_0__SelectMenu_b__0__,
      0LL);
    ShopRootComponent__SetFadeOut(v20, v18, v19, v21);
  }
}


void __fastcall ShopRootComponent__SelectSellServantConfirm(ShopRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  ServantSellMenu_o *servantSellMenu; // x0
  __int64 v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  int32_t tabKind; // w21
  struct System_Int64_array *selectedServantIds; // x22
  bool IsSellEquipedCmdCodeLastServant; // w0
  System_Int64_array *v15; // x22
  ServantSellConfirmMenu_o *servantSellConfirmMenu; // x21
  System_Action_int__o *v17; // x19
  struct ServantSellConfirmMenu_o *v18; // x21
  int32_t v19; // w20
  System_Action_int__o *v20; // x22
  ServantSellConfirmMenu_o *v21; // x0
  int32_t v22; // w1
  System_Int64_array *v23; // x2
  System_Int64_array *v24; // x3
  System_Action_int__o *v25; // x4
  struct ServantSellConfirmMenu_o *v26; // x21
  int32_t v27; // w20
  struct System_Int64_array *v28; // x22
  struct System_Int64_array *selectedCommandCodeIds; // x23
  System_Action_int__o *v30; // x24

  if ( (byte_4BD8A5B & 1) == 0 )
  {
    sub_1C21E38(&System_Action_int__TypeInfo);
    sub_1C21E38(&Method_ShopRootComponent_SellServantConfirm__);
    sub_1C21E38(&Method_ShopRootComponent___c__DisplayClass96_0__SelectSellServantConfirm_b__0__);
    sub_1C21E38(&ShopRootComponent___c__DisplayClass96_0_TypeInfo);
    byte_4BD8A5B = 1;
  }
  v3 = sub_1C22084(ShopRootComponent___c__DisplayClass96_0_TypeInfo);
  ShopRootComponent___c__DisplayClass96_0___ctor((ShopRootComponent___c__DisplayClass96_0_o *)v3, 0LL);
  if ( !v3 )
    goto LABEL_18;
  *(_QWORD *)(v3 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 16), (int64_t)this, v6, v7, v8, v9, v10, v11);
  if ( this->fields.inputState == 2 )
  {
    servantSellMenu = this->fields.servantSellMenu;
    if ( !servantSellMenu )
      goto LABEL_18;
    tabKind = servantSellMenu->fields.tabKind;
    selectedServantIds = this->fields.selectedServantIds;
    IsSellEquipedCmdCodeLastServant = ServantSellMenu__get_IsSellEquipedCmdCodeLastServant(servantSellMenu, 0LL);
    *(_DWORD *)(v3 + 24) = ServantSellConfirmMenu__GetServantSellConfirmKindOnOpenConfirm(
                             tabKind,
                             selectedServantIds == 0LL,
                             IsSellEquipedCmdCodeLastServant,
                             0LL);
    servantSellMenu = (ServantSellMenu_o *)this->fields.servantSellConfirmMenu;
    if ( !servantSellMenu )
      goto LABEL_18;
    ServantSellConfirmMenu__Init((ServantSellConfirmMenu_o *)servantSellMenu, 0LL);
    v15 = this->fields.selectedServantIds;
    if ( v15 )
    {
      servantSellConfirmMenu = this->fields.servantSellConfirmMenu;
      if ( *(_DWORD *)(v3 + 24) == 4 )
      {
        v17 = (System_Action_int__o *)sub_1C22084(System_Action_int__TypeInfo);
        System_Action_int____ctor(
          v17,
          (Il2CppObject *)v3,
          Method_ShopRootComponent___c__DisplayClass96_0__SelectSellServantConfirm_b__0__,
          0LL);
        if ( servantSellConfirmMenu )
        {
          ServantSellConfirmMenu__OpenSellEquippedLastSvtWarning(servantSellConfirmMenu, 4, v15, v17, 0LL);
          return;
        }
LABEL_18:
        sub_1C22094(servantSellMenu, v5);
      }
      if ( !servantSellConfirmMenu )
        goto LABEL_18;
      ServantSellConfirmMenu__Init(this->fields.servantSellConfirmMenu, 0LL);
      v26 = this->fields.servantSellConfirmMenu;
      v27 = *(_DWORD *)(v3 + 24);
      v28 = this->fields.selectedServantIds;
      selectedCommandCodeIds = this->fields.selectedCommandCodeIds;
      v30 = (System_Action_int__o *)sub_1C22084(System_Action_int__TypeInfo);
      System_Action_int____ctor(v30, (Il2CppObject *)this, Method_ShopRootComponent_SellServantConfirm__, 0LL);
      if ( !v26 )
        goto LABEL_18;
      v21 = v26;
      v22 = v27;
      v23 = v28;
      v24 = selectedCommandCodeIds;
      v25 = v30;
    }
    else
    {
      v18 = this->fields.servantSellConfirmMenu;
      v19 = *(_DWORD *)(v3 + 24);
      v20 = (System_Action_int__o *)sub_1C22084(System_Action_int__TypeInfo);
      System_Action_int____ctor(v20, (Il2CppObject *)this, Method_ShopRootComponent_SellServantConfirm__, 0LL);
      if ( !v18 )
        goto LABEL_18;
      v21 = v18;
      v22 = v19;
      v23 = 0LL;
      v24 = 0LL;
      v25 = v20;
    }
    ServantSellConfirmMenu__Open(v21, v22, v23, v24, v25, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopRootComponent__SelectedBuyItemConfirm(
        ShopRootComponent_o *this,
        int32_t buyCount,
        const MethodInfo *method)
{
  int32_t state; // w8
  void *listViewHelper; // x0
  ShopBuyItemListViewItem_o *ShopBuyItemListViewItem; // x20
  struct ShopEntity_o *Shop_k__BackingField; // x8

  if ( (byte_4BD8A57 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_ShopDetailMaster___);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    sub_1C21E38(&ShopRootComponent_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD8A57 = 1;
  }
  if ( this->fields.inputState == 2 )
  {
    this->fields.inputState = 3;
    this->fields.buyCount = buyCount;
    if ( !buyCount )
    {
      ShopRootComponent__CloseItemConfirm(this, *(const MethodInfo **)&buyCount);
      return;
    }
    state = this->fields.state;
    if ( state == 8 )
    {
LABEL_6:
      ShopRootComponent__RequestShop(this, *(const MethodInfo **)&buyCount);
      return;
    }
    if ( (unsigned int)(state - 11) <= 1 )
    {
      ShopRootComponent__OpenStorageDetailCheck(this, *(const MethodInfo **)&buyCount);
      return;
    }
    listViewHelper = this->fields.listViewHelper;
    if ( listViewHelper )
    {
      ShopBuyItemListViewItem = ShopSceneListViewControlHelper__GetShopBuyItemListViewItem(
                                  (ShopSceneListViewControlHelper_o *)listViewHelper,
                                  this->fields.selectedItemIndex,
                                  0LL);
      listViewHelper = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( listViewHelper )
      {
        listViewHelper = DataManager__GetMasterData_object_(
                           (DataManager_o *)listViewHelper,
                           (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ShopDetailMaster___);
        if ( ShopBuyItemListViewItem )
        {
          Shop_k__BackingField = ShopBuyItemListViewItem->fields._Shop_k__BackingField;
          if ( Shop_k__BackingField )
          {
            if ( listViewHelper )
            {
              listViewHelper = ShopDetailMaster__getShopDetailEntity(
                                 (ShopDetailMaster_o *)listViewHelper,
                                 Shop_k__BackingField->fields.id,
                                 0LL);
              if ( !listViewHelper )
                goto LABEL_6;
              if ( *((_DWORD *)listViewHelper + 8) == 3 )
                goto LABEL_20;
              if ( ShopRootComponent_TypeInfo->static_fields->shopDetailCheckList )
              {
                if ( System_Collections_Generic_Dictionary_int__int___get_Item(
                       ShopRootComponent_TypeInfo->static_fields->shopDetailCheckList,
                       *((_DWORD *)listViewHelper + 4),
                       (const MethodInfo_32ACEE0 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__) )
                {
                  goto LABEL_6;
                }
LABEL_20:
                ShopRootComponent__OpenDetailCheck(this, *(const MethodInfo **)&buyCount);
                return;
              }
            }
          }
        }
      }
    }
    sub_1C22094(listViewHelper, *(_QWORD *)&buyCount);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopRootComponent__SellServantConfirm(
        ShopRootComponent_o *this,
        int32_t count,
        const MethodInfo *method)
{
  if ( count )
    ShopRootComponent__RequestSellServant(this, *(const MethodInfo **)&count);
  else
    ShopRootComponent__CloseSellServantConfirm(this, *(const MethodInfo **)&count);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopRootComponent__SellServantExceededConfirm(
        ShopRootComponent_o *this,
        int32_t count,
        const MethodInfo *method)
{
  ServantSellConfirmMenu_o *servantSellConfirmMenu; // x0
  const MethodInfo *v5; // x1

  if ( count )
  {
    servantSellConfirmMenu = this->fields.servantSellConfirmMenu;
    if ( !servantSellConfirmMenu
      || (ServantSellConfirmMenu__Close(servantSellConfirmMenu, 0LL),
          (servantSellConfirmMenu = this->fields.servantSellConfirmMenu) == 0LL) )
    {
      sub_1C22094(servantSellConfirmMenu, *(_QWORD *)&count);
    }
    ServantSellConfirmMenu__Init(servantSellConfirmMenu, 0LL);
    ShopRootComponent__SelectSellServantConfirm(this, v5);
  }
  else
  {
    ShopRootComponent__CloseSellServantConfirm(this, *(const MethodInfo **)&count);
  }
}


void __fastcall ShopRootComponent__SetActionBG(ShopRootComponent_o *this, bool isEnable, const MethodInfo *method)
{
  UnityEngine_Object_o *actionBg; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_4BD8A84 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD8A84 = 1;
  }
  actionBg = (UnityEngine_Object_o *)this->fields.actionBg;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(actionBg, 0LL, 0LL) )
  {
    v7 = this->fields.actionBg;
    if ( !v7 )
      sub_1C22094(0LL, v6);
    UnityEngine_GameObject__SetActive(v7, isEnable, 0LL);
  }
}


void __fastcall ShopRootComponent__SetFadeIn(ShopRootComponent_o *this, int32_t state, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  CommonUI_o *v6; // x19

  if ( (byte_4BD8A51 & 1) == 0 )
  {
    sub_1C21E38(&AvalonSceneManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BD8A51 = 1;
  }
  if ( state == 15 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v6 = (CommonUI_o *)Instance;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    if ( !v6 )
      sub_1C22094(Instance, v5);
    CommonUI__maskFadein(v6, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
  }
}


void __fastcall ShopRootComponent__SetFadeOut(
        ShopRootComponent_o *this,
        int32_t state,
        System_Action_o *endFade,
        const MethodInfo *method)
{
  __int64 v6; // x19
  __int64 v7; // x0
  __int64 v8; // x1
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v16; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v18; // x21

  if ( (byte_4BD8A50 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&AvalonSceneManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_ShopRootComponent___c__DisplayClass83_0__SetFadeOut_b__0__);
    sub_1C21E38(&ShopRootComponent___c__DisplayClass83_0_TypeInfo);
    byte_4BD8A50 = 1;
  }
  v6 = sub_1C22084(ShopRootComponent___c__DisplayClass83_0_TypeInfo);
  ShopRootComponent___c__DisplayClass83_0___ctor((ShopRootComponent___c__DisplayClass83_0_o *)v6, 0LL);
  if ( !v6 )
    goto LABEL_10;
  *(_QWORD *)(v6 + 16) = endFade;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v6 + 16), (int64_t)endFade, v9, v10, v11, v12, v13, v14);
  if ( state == 15 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v16 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v16 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v16->static_fields->DEFAULT_FADE_TIME;
    v18 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(
      v18,
      (Il2CppObject *)v6,
      Method_ShopRootComponent___c__DisplayClass83_0__SetFadeOut_b__0__,
      0LL);
    if ( Instance )
    {
      CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v18, 0LL);
      return;
    }
LABEL_10:
    sub_1C22094(v7, v8);
  }
  ActionExtensions__Call(*(System_Action_o **)(v6 + 16), 0LL);
}


void __fastcall ShopRootComponent__SetFrequencyTypeCheckList(
        ShopRootComponent_o *this,
        ShopDetailEntity_o *entity,
        bool decide,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__int__o *shopDetailCheckList; // x0

  if ( (byte_4BD8A7B & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    sub_1C21E38(&ShopRootComponent_TypeInfo);
    byte_4BD8A7B = 1;
  }
  if ( entity && (decide || entity->fields.frequencyType != 1) )
  {
    shopDetailCheckList = ShopRootComponent_TypeInfo->static_fields->shopDetailCheckList;
    if ( !shopDetailCheckList )
      sub_1C22094(0LL, entity);
    System_Collections_Generic_Dictionary_int__int___set_Item(
      shopDetailCheckList,
      entity->fields.shopId,
      1,
      (const MethodInfo_32ACF68 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
  }
}


void __fastcall ShopRootComponent__SetInputState(
        ShopRootComponent_o *this,
        int32_t inputState,
        const MethodInfo *method)
{
  this->fields.inputState = inputState;
}


void __fastcall ShopRootComponent__SetState(ShopRootComponent_o *this, int32_t state, const MethodInfo *method)
{
  this->fields.state = state;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopRootComponent__SetStatusTitleInfo(ShopRootComponent_o *this, bool isDisp, const MethodInfo *method)
{
  UnityEngine_Component_o *informationPanel; // x0

  informationPanel = (UnityEngine_Component_o *)this->fields.informationPanel;
  if ( !informationPanel )
    goto LABEL_7;
  informationPanel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(informationPanel, 0LL);
  if ( !informationPanel )
    goto LABEL_7;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)informationPanel, isDisp, 0LL);
  if ( isDisp )
  {
    informationPanel = (UnityEngine_Component_o *)this->fields.informationPanel;
    if ( informationPanel )
    {
      ShopInfoIndicator__StartInformationChange((ShopInfoIndicator_o *)informationPanel, (const MethodInfo *)isDisp);
      return;
    }
LABEL_7:
    sub_1C22094(informationPanel, isDisp);
  }
}


void __fastcall ShopRootComponent__ShowNormalItemDialog(
        ShopRootComponent_o *this,
        ShopBuyItemListViewItem_o *item,
        ShopEntity_o *entity,
        const MethodInfo *method)
{
  System_String_o *RequestResultDialogMessageNormal; // x0
  __int64 v8; // x1
  System_String_o *v9; // x20
  Il2CppObject *MasterData_object; // x22
  Il2CppObject *v11; // x23
  const MethodInfo *v12; // x3
  System_String_o *RequestResultDialogItemMessageNormal; // x22
  const MethodInfo *v14; // x2
  System_String_o *RequestResultDialogNumMessageNormal; // x0
  RequestResultDialog_o *requestResultDialog; // x21
  System_String_o *v17; // x23
  System_Action_bool__o *v18; // x24
  RequestResultDialog_o *v19; // x21
  System_Action_bool__o *v20; // x22

  if ( (byte_4BD8A60 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_bool__TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C21E38(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C21E38(&Method_ShopRootComponent_OnEndItemDialog__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD8A60 = 1;
  }
  RequestResultDialogMessageNormal = ShopRequestResultDialogMessageMaker__GetRequestResultDialogMessageNormal(
                                       item,
                                       entity,
                                       this->fields.buyCount,
                                       method);
  if ( !entity )
    goto LABEL_11;
  v9 = RequestResultDialogMessageNormal;
  if ( entity->fields.purchaseType == 1 )
  {
    RequestResultDialogMessageNormal = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( RequestResultDialogMessageNormal )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)RequestResultDialogMessageNormal,
                            (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ItemMaster___);
      RequestResultDialogMessageNormal = (System_String_o *)ShopEntity__get_TargetId(entity, 0LL);
      if ( MasterData_object )
      {
        v11 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                (int32_t)RequestResultDialogMessageNormal,
                (const MethodInfo_325BDC8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        RequestResultDialogItemMessageNormal = ShopRequestResultDialogMessageMaker__GetRequestResultDialogItemMessageNormal(
                                                 entity,
                                                 (ItemEntity_o *)v11,
                                                 this->fields.buyCount,
                                                 v12);
        RequestResultDialogNumMessageNormal = ShopRequestResultDialogMessageMaker__GetRequestResultDialogNumMessageNormal(
                                                entity,
                                                (ItemEntity_o *)v11,
                                                v14);
        requestResultDialog = this->fields.requestResultDialog;
        v17 = RequestResultDialogNumMessageNormal;
        v18 = (System_Action_bool__o *)sub_1C22084(System_Action_bool__TypeInfo);
        System_Action_bool____ctor(v18, (Il2CppObject *)this, Method_ShopRootComponent_OnEndItemDialog__, 0LL);
        if ( requestResultDialog )
        {
          RequestResultDialog__Open(requestResultDialog, v9, v17, RequestResultDialogItemMessageNormal, v18, 0LL);
          return;
        }
      }
    }
LABEL_11:
    sub_1C22094(RequestResultDialogMessageNormal, v8);
  }
  v19 = this->fields.requestResultDialog;
  v20 = (System_Action_bool__o *)sub_1C22084(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v20, (Il2CppObject *)this, Method_ShopRootComponent_OnEndItemDialog__, 0LL);
  if ( !v19 )
    goto LABEL_11;
  RequestResultDialog__Open_33746180(v19, (System_String_o *)StringLiteral_1/*""*/, v9, v20, -1, 0LL);
}


void __fastcall ShopRootComponent__ShowSetItemDialog(
        ShopRootComponent_o *this,
        ShopEntity_o *entity,
        const MethodInfo *method)
{
  System_String_o *RequestResultDialogMessage; // x0
  RequestResultDialog_o *requestResultDialog; // x20
  System_String_o *v7; // x21
  System_Action_bool__o *v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4BD8A61 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_bool__TypeInfo);
    sub_1C21E38(&Method_ShopRootComponent_OnEndItemDialog__);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD8A61 = 1;
  }
  RequestResultDialogMessage = ShopRequestResultDialogMessageMaker__GetRequestResultDialogMessage(
                                 entity,
                                 this->fields.buyCount,
                                 method);
  requestResultDialog = this->fields.requestResultDialog;
  v7 = RequestResultDialogMessage;
  v8 = (System_Action_bool__o *)sub_1C22084(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v8, (Il2CppObject *)this, Method_ShopRootComponent_OnEndItemDialog__, 0LL);
  if ( !requestResultDialog )
    sub_1C22094(v9, v10);
  RequestResultDialog__Open_33746180(requestResultDialog, (System_String_o *)StringLiteral_1/*""*/, v7, v8, -1, 0LL);
}


void __fastcall ShopRootComponent__ShowStorageDialog(
        ShopRootComponent_o *this,
        ShopBuyItemListViewItem_o *item,
        const MethodInfo *method)
{
  int32_t state; // w8
  struct BuyStorageConfirmDialogComponent_o *v6; // x21
  System_Action_int__o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  BuyStorageConfirmDialogComponent_o *v10; // x0
  int32_t v11; // w1
  struct BuyStorageConfirmDialogComponent_o *buyStorageResultDialog; // x21

  if ( (byte_4BD8A62 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_int__TypeInfo);
    sub_1C21E38(&Method_ShopRootComponent_OnEndStorageDialog__);
    byte_4BD8A62 = 1;
  }
  state = this->fields.state;
  if ( state == 12 )
  {
    buyStorageResultDialog = this->fields.buyStorageResultDialog;
    v7 = (System_Action_int__o *)sub_1C22084(System_Action_int__TypeInfo);
    System_Action_int____ctor(v7, (Il2CppObject *)this, Method_ShopRootComponent_OnEndStorageDialog__, 0LL);
    if ( buyStorageResultDialog )
    {
      v11 = 1;
      v10 = buyStorageResultDialog;
      goto LABEL_9;
    }
LABEL_11:
    sub_1C22094(v8, v9);
  }
  if ( state == 11 )
  {
    v6 = this->fields.buyStorageResultDialog;
    v7 = (System_Action_int__o *)sub_1C22084(System_Action_int__TypeInfo);
    System_Action_int____ctor(v7, (Il2CppObject *)this, Method_ShopRootComponent_OnEndStorageDialog__, 0LL);
    if ( v6 )
    {
      v10 = v6;
      v11 = 0;
LABEL_9:
      BuyStorageConfirmDialogComponent__ResultOpenDialog(v10, v11, item, v7, 0LL);
      return;
    }
    goto LABEL_11;
  }
}


// attributes: thunk
void __fastcall ShopRootComponent__Update(ShopRootComponent_o *this, const MethodInfo *method)
{
  ShopRootComponent__UpdateApLabel(this, method);
}


void __fastcall ShopRootComponent__UpdateApLabel(ShopRootComponent_o *this, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v4; // x1
  UILabel_o *apInfoLabel; // x19
  int32_t Act; // w20

  if ( (byte_4BD8A4C & 1) == 0 )
  {
    sub_1C21E38(&LocalizationManager_TypeInfo);
    byte_4BD8A4C = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_8;
  apInfoLabel = this->fields.apInfoLabel;
  Act = UserGameEntity__getAct(SelfUserGame, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  SelfUserGame = (UserGameEntity_o *)LocalizationManager__GetNumberFormat(Act, 0LL);
  if ( !apInfoLabel )
LABEL_8:
    sub_1C22094(SelfUserGame, v4);
  UILabel__set_text(apInfoLabel, (System_String_o *)SelfUserGame, 0LL);
}


void __fastcall ShopRootComponent__UpdateGiftBadgeNum(ShopRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *giftButtonControl; // x20
  __int64 v4; // x1
  GiftButtonCtrl_o *v5; // x0

  if ( (byte_4BD8A85 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD8A85 = 1;
  }
  giftButtonControl = (UnityEngine_Object_o *)this->fields.giftButtonControl;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(giftButtonControl, 0LL, 0LL) )
  {
    v5 = this->fields.giftButtonControl;
    if ( !v5 )
      sub_1C22094(0LL, v4);
    GiftButtonCtrl__InvalidateGiftInfo(v5, 0LL);
  }
}


System_Collections_IEnumerator_o *__fastcall ShopRootComponent__WaitPurchase(
        ShopRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4BD8A6D & 1) == 0 )
  {
    sub_1C21E38(&ShopRootComponent__WaitPurchase_d__121_TypeInfo);
    byte_4BD8A6D = 1;
  }
  v3 = sub_1C22084(ShopRootComponent__WaitPurchase_d__121_TypeInfo);
  ShopRootComponent__WaitPurchase_d__121___ctor((ShopRootComponent__WaitPurchase_d__121_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_1C22094(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall ShopRootComponent___Init_b__76_0(
        ShopRootComponent_o *this,
        int32_t stoneCount,
        const MethodInfo *method)
{
  UILabel_o *stoneInfoLabel; // x20
  System_String_o *NumberFormat; // x0
  __int64 v7; // x1

  if ( (byte_4BD8A87 & 1) == 0 )
  {
    sub_1C21E38(&LocalizationManager_TypeInfo);
    byte_4BD8A87 = 1;
  }
  stoneInfoLabel = this->fields.stoneInfoLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  NumberFormat = LocalizationManager__GetNumberFormat(stoneCount, 0LL);
  if ( !stoneInfoLabel )
    sub_1C22094(NumberFormat, v7);
  UILabel__set_text(stoneInfoLabel, NumberFormat, 0LL);
}


void __fastcall ShopRootComponent___RequestEnd_b__98_0(
        ShopRootComponent_o *this,
        int32_t count,
        const MethodInfo *method)
{
  __int64 v4; // x1
  ServantSellConfirmMenu_o *servantSellConfirmMenu; // x0

  ShopRootComponent__PlayVoiceBack(this, this->fields.state, method);
  servantSellConfirmMenu = this->fields.servantSellConfirmMenu;
  if ( !servantSellConfirmMenu
    || (ServantSellConfirmMenu__Close(servantSellConfirmMenu, 0LL),
        (servantSellConfirmMenu = this->fields.servantSellConfirmMenu) == 0LL) )
  {
    sub_1C22094(servantSellConfirmMenu, v4);
  }
  ServantSellConfirmMenu__ClearCommandCodeRemoveResult(servantSellConfirmMenu, 0LL);
}


void __fastcall ShopRootComponent____n__0(ShopRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent__beginStartUp_39920388((SceneRootComponent_o *)this, 0LL);
}


void __fastcall ShopRootComponent__beginFinish(ShopRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ShopTopListViewManager_o *topListViewManager; // x0

  ShopRootComponent__Quit(this, method);
  topListViewManager = this->fields.topListViewManager;
  if ( !topListViewManager )
    sub_1C22094(0LL, v3);
  ShopTopListViewManager__ReleaseCoinRoomAsset(topListViewManager, 0LL);
}


void __fastcall ShopRootComponent__beginInitialize(ShopRootComponent_o *this, const MethodInfo *method)
{
  ShopTopListViewManager_o *topListViewManager; // x0
  ShopRootComponent_o *v4; // x0
  const MethodInfo *v5; // x1
  struct GiftButtonCtrl_o *giftButtonControl; // x20
  System_Action_o *v7; // x21
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  struct GiftButtonCtrl_o *v14; // x20
  System_Func_bool__bool__o *v15; // x21
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7

  if ( (byte_4BD8A46 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&System_Func_bool__bool__TypeInfo);
    sub_1C21E38(&Method_ShopRootComponent_OnGiftClose__);
    sub_1C21E38(&Method_ShopRootComponent_OnGiftOpen__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4BD8A46 = 1;
  }
  topListViewManager = this->fields.topListViewManager;
  if ( !topListViewManager )
    goto LABEL_11;
  ShopTopListViewManager__LoadCoinRoomAsset(topListViewManager, 0LL);
  ShopRootComponent__CreateShopDetailCheckList(v4, v5);
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 6, 30, 0LL);
  topListViewManager = (ShopTopListViewManager_o *)this->fields.eventBanner;
  if ( !topListViewManager )
    goto LABEL_11;
  EventBannerComponent__SetBanner((EventBannerComponent_o *)topListViewManager, 0LL);
  topListViewManager = (ShopTopListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !topListViewManager )
    goto LABEL_11;
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)topListViewManager, (SceneRootComponent_o *)this, 0LL);
  topListViewManager = (ShopTopListViewManager_o *)this->fields.helpListViewManager;
  if ( !topListViewManager )
    goto LABEL_11;
  ShopHelpListViewManager__LoadBaseSprite((ShopHelpListViewManager_o *)topListViewManager, method);
  topListViewManager = (ShopTopListViewManager_o *)this->fields.informationPanel;
  if ( !topListViewManager )
    goto LABEL_11;
  ShopInfoIndicator__StartInformationChange((ShopInfoIndicator_o *)topListViewManager, method);
  giftButtonControl = this->fields.giftButtonControl;
  v7 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_ShopRootComponent_OnGiftOpen__, 0LL);
  if ( !giftButtonControl
    || (giftButtonControl->fields.OnGiftOpenAdditionalAction = v7,
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&giftButtonControl->fields.OnGiftOpenAdditionalAction,
          (int64_t)v7,
          v8,
          v9,
          v10,
          v11,
          v12,
          v13),
        v14 = this->fields.giftButtonControl,
        v15 = (System_Func_bool__bool__o *)sub_1C22084(System_Func_bool__bool__TypeInfo),
        System_Func_bool__bool____ctor(v15, (Il2CppObject *)this, Method_ShopRootComponent_OnGiftClose__, 0LL),
        !v14) )
  {
LABEL_11:
    sub_1C22094(topListViewManager, method);
  }
  v14->fields.OnGiftCloseAdditionalAction = v15;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&v14->fields.OnGiftCloseAdditionalAction,
    (int64_t)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
}


void __fastcall ShopRootComponent__beginResume(ShopRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent__beginResume_39920572((SceneRootComponent_o *)this, 0LL);
}


void __fastcall ShopRootComponent__beginStartUp(
        ShopRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct SceneJumpInfo_o **p_jumpInfo; // x21
  const MethodInfo *v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  Il2CppClass *v17; // x8
  __int64 methodPtr_low; // x9
  Il2CppObject *v19; // x1
  TitleInfoControl_o *titleInfo; // x0
  __int64 v21; // x1
  System_String_o *returnSceneName; // x20
  System_String_o *SceneName; // x0
  bool v24; // w0
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  struct ShopPlayVoiceComponent_o *shopPlayVoiceComponent; // x8
  System_String_o *MainBgmName; // x20
  System_Action_o *v32; // x20
  const MethodInfo *v33; // x1
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  struct ShopPlayVoiceComponent_o *v40; // x20
  struct StandFigureBack_o *standFigureBack; // x1
  int32_t defaultFaceId; // w21
  struct StandFigureBack_o *v43; // d8
  struct StandFigureBack_o **p_standFigureBack; // x20
  UITexture_o *backgroundTexture; // x20
  System_String_o *BG_ROOT; // x20
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  Il2CppObject *v50; // x0
  System_String_o *v51; // x0
  ExUITexture_o *v52; // x21
  System_String_o *v53; // x20
  System_Action_o *v54; // x22
  __int64 v55; // x2
  __int64 v56; // x3
  __int64 v57; // x4
  ShopRootConstants_c *v58; // x0
  struct ShopRootConstants_StaticFields *static_fields; // x8
  System_String_o *v60; // x20
  Il2CppObject *v61; // x0
  ExUITexture_o *v62; // x19
  int32_t DEFAULT_BG_ID; // [xsp+8h] [xbp-48h] BYREF
  int32_t bgImageId; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4BD8A47 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&BgmManager_TypeInfo);
    sub_1C21E38(&FSUtility_TypeInfo);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&SceneJumpInfo_TypeInfo);
    sub_1C21E38(&SceneList_TypeInfo);
    sub_1C21E38(&Method_ShopRootComponent_LoadBanner__);
    sub_1C21E38(&Method_ShopRootComponent__beginStartUp_b__71_0__);
    sub_1C21E38(&ShopRootConstants_TypeInfo);
    sub_1C21E38(&SoundManager_TypeInfo);
    byte_4BD8A47 = 1;
  }
  p_jumpInfo = &this->fields.jumpInfo;
  this->fields.jumpInfo = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.jumpInfo, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
  this->fields.isFromCoinRoom = 0;
  if ( data )
  {
    v17 = (Il2CppClass *)SceneJumpInfo_TypeInfo;
    methodPtr_low = LOBYTE(SceneJumpInfo_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(data->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
      && (SceneJumpInfo_c *)data->klass->_2.typeHierarchy[methodPtr_low - 1] == SceneJumpInfo_TypeInfo )
    {
      *p_jumpInfo = (struct SceneJumpInfo_o *)data;
      if ( LOBYTE(data->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
      {
        if ( data->klass->_2.typeHierarchy[methodPtr_low - 1] == v17 )
          v19 = data;
        else
          v19 = 0LL;
      }
      else
      {
        v19 = 0LL;
      }
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&this->fields.jumpInfo,
        (int64_t)v19,
        (int64_t)v11,
        v12,
        v13,
        v14,
        v15,
        v16);
      if ( !*p_jumpInfo )
        goto LABEL_41;
      returnSceneName = (*p_jumpInfo)->fields.returnSceneName;
      if ( !SceneList_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
      SceneName = SceneList__getSceneName(90, 0LL);
      v24 = System_String__op_Equality(returnSceneName, SceneName, 0LL);
      this->fields.isFromCoinRoom = v24;
      if ( v24 )
      {
        *p_jumpInfo = 0LL;
        sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.jumpInfo, 0LL, (int64_t)v11, v25, v26, v27, v28, v29);
      }
    }
  }
  ShopRootComponent__SetActionBG(this, 0, v11);
  if ( !this->fields.isFromCoinRoom )
  {
    shopPlayVoiceComponent = this->fields.shopPlayVoiceComponent;
    if ( !shopPlayVoiceComponent )
      goto LABEL_41;
    shopPlayVoiceComponent->fields.voicePlayOnce = 0;
    shopPlayVoiceComponent->fields.isPlayingVoice = 0;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  MainBgmName = BgmManager__GetMainBgmName(0LL);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm(MainBgmName, 0LL);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_41;
  TitleInfoControl__setTitleInfo(titleInfo, this->fields.myFSM, 1, 0LL, 38, 0LL);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_41;
  TitleInfoControl__SetHelpBtn(titleInfo, 0, 0LL);
  v32 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v32, (Il2CppObject *)this, Method_ShopRootComponent__beginStartUp_b__71_0__, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadBanner(v32, 1, 0LL);
  ShopRootComponent__setDispInfo(this, v33);
  v40 = this->fields.shopPlayVoiceComponent;
  if ( !v40 )
    goto LABEL_41;
  standFigureBack = this->fields.standFigureBack;
  defaultFaceId = this->fields.defaultFaceId;
  v43 = *(struct StandFigureBack_o **)&this->fields.figureSvtId;
  v40->fields.standFigureBack = standFigureBack;
  p_standFigureBack = &v40->fields.standFigureBack;
  sub_1C21DDC((PartyOrganizationUtility_o *)p_standFigureBack, (int64_t)standFigureBack, v34, v35, v36, v37, v38, v39);
  p_standFigureBack[1] = v43;
  *((_DWORD *)p_standFigureBack + 4) = defaultFaceId;
  titleInfo = (TitleInfoControl_o *)this->fields.standFigureBack;
  if ( !titleInfo )
    goto LABEL_41;
  StandFigureBack__CreatedStandFigure(
    (StandFigureBack_o *)titleInfo,
    this->fields.figureSvtId,
    this->fields.figureSvtLimitCnt,
    1,
    this->fields.defaultFaceId,
    0LL,
    0,
    0LL);
  MainMenuBar__setMenuActive(1, 0LL, 0LL);
  titleInfo = (TitleInfoControl_o *)ShopRootConstants_TypeInfo;
  backgroundTexture = (UITexture_o *)this->fields.backgroundTexture;
  if ( !ShopRootConstants_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
    titleInfo = (TitleInfoControl_o *)ShopRootConstants_TypeInfo;
  }
  if ( !backgroundTexture )
    goto LABEL_41;
  UITexture__set_uvRect(
    backgroundTexture,
    *(UnityEngine_Rect_o *)((char *)&titleInfo->fields.mEventBgTexture->fields.m_CancellationTokenSource + 4),
    0LL);
  BG_ROOT = ShopRootConstants_TypeInfo->static_fields->BG_ROOT;
  bgImageId = this->fields.bgImageId;
  v50 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &bgImageId, v47, v48, v49);
  v51 = System_String__Format(BG_ROOT, v50, 0LL);
  v52 = this->fields.backgroundTexture;
  v53 = v51;
  v54 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v54, (Il2CppObject *)this, Method_ShopRootComponent_LoadBanner__, 0LL);
  if ( !v52 )
    goto LABEL_41;
  if ( ExUITexture__SetAssetImage(v52, v53, v54, 0LL) )
    goto LABEL_38;
  v58 = ShopRootConstants_TypeInfo;
  if ( !ShopRootConstants_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
    v58 = ShopRootConstants_TypeInfo;
  }
  static_fields = v58->static_fields;
  v60 = static_fields->BG_ROOT;
  DEFAULT_BG_ID = static_fields->DEFAULT_BG_ID;
  v61 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &DEFAULT_BG_ID, v55, v56, v57);
  titleInfo = (TitleInfoControl_o *)System_String__Format(v60, v61, 0LL);
  if ( !this->fields.backgroundTexture )
LABEL_41:
    sub_1C22094(titleInfo, v21);
  v53 = (System_String_o *)titleInfo;
  ExUITexture__SetAssetImage(this->fields.backgroundTexture, (System_String_o *)titleInfo, 0LL, 0LL);
LABEL_38:
  v62 = this->fields.backgroundTexture;
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  FSUtility__SetUpBackTextureSize(v62, v53, 0LL);
}


void __fastcall ShopRootComponent__setDispInfo(ShopRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  GuideEntity_o *GuideData; // x0
  int32_t guideFaceId; // w8
  ShopRootConstants_c *v7; // x0
  struct ShopRootConstants_StaticFields *static_fields; // x9

  if ( (byte_4BD8A48 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_GuideMaster___);
    sub_1C21E38(&ShopRootConstants_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD8A48 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_GuideMaster___)) == 0LL )
  {
    sub_1C22094(Instance, v4);
  }
  GuideData = GuideMaster__getGuideData((GuideMaster_o *)Instance, 2, 0LL);
  if ( GuideData )
  {
    this->fields.figureSvtId = GuideData->fields.guideImageId;
    *(_QWORD *)&this->fields.figureSvtLimitCnt = *(_QWORD *)&GuideData->fields.guideLimitCount;
    guideFaceId = GuideData->fields.guideFaceId;
  }
  else
  {
    v7 = ShopRootConstants_TypeInfo;
    if ( !ShopRootConstants_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
      v7 = ShopRootConstants_TypeInfo;
    }
    static_fields = v7->static_fields;
    guideFaceId = 0;
    *(_QWORD *)&this->fields.figureSvtId = *(_QWORD *)&static_fields->DEFAULT_FIGURE_ID;
    this->fields.bgImageId = static_fields->DEFAULT_BG_ID;
  }
  this->fields.defaultFaceId = guideFaceId;
}


void __fastcall ShopRootComponent__WaitPurchase_d__121___ctor(
        ShopRootComponent__WaitPurchase_d__121_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall ShopRootComponent__WaitPurchase_d__121__MoveNext(
        ShopRootComponent__WaitPurchase_d__121_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ShopRootComponent__WaitPurchase_d__121_o *v3; // x19
  int32_t _1__state; // w8
  ShopRootComponent___c_c *v5; // x0
  System_Func_bool__o *_9__121_0; // x20
  Il2CppObject *v7; // x21
  struct ShopRootComponent___c_StaticFields *static_fields; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  UnityEngine_WaitUntil_o *v15; // x21
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  bool result; // w0
  struct ShopRootComponent_o *_4__this; // x8

  v3 = this;
  if ( (byte_4BD8A99 & 1) == 0 )
  {
    sub_1C21E38(&System_Func_bool__TypeInfo);
    sub_1C21E38(&Method_ShopRootComponent___c__WaitPurchase_b__121_0__);
    sub_1C21E38(&ShopRootComponent___c_TypeInfo);
    this = (ShopRootComponent__WaitPurchase_d__121_o *)sub_1C21E38(&UnityEngine_WaitUntil_TypeInfo);
    byte_4BD8A99 = 1;
  }
  _1__state = v3->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = v3->fields.__4__this;
    v3->fields.__1__state = -1;
    if ( !_4__this
      || (this = (ShopRootComponent__WaitPurchase_d__121_o *)_4__this->fields.listViewHelper,
          _4__this->fields.state = 13,
          !this) )
    {
      sub_1C22094(this, method);
    }
    ShopSceneListViewControlHelper__SetListViewOnOpenHelp((ShopSceneListViewControlHelper_o *)this, 13, v2);
    return 0;
  }
  if ( _1__state )
    return 0;
  v3->fields.__1__state = -1;
  v5 = ShopRootComponent___c_TypeInfo;
  if ( !ShopRootComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopRootComponent___c_TypeInfo);
    v5 = ShopRootComponent___c_TypeInfo;
  }
  _9__121_0 = v5->static_fields->__9__121_0;
  if ( !_9__121_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = ShopRootComponent___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v5->static_fields->__9;
    _9__121_0 = (System_Func_bool__o *)sub_1C22084(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(_9__121_0, v7, Method_ShopRootComponent___c__WaitPurchase_b__121_0__, 0LL);
    static_fields = ShopRootComponent___c_TypeInfo->static_fields;
    static_fields->__9__121_0 = _9__121_0;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&static_fields->__9__121_0,
      (int64_t)_9__121_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  v15 = (UnityEngine_WaitUntil_o *)sub_1C22084(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v15, _9__121_0, 0LL);
  v3->fields.__2__current = (Il2CppObject *)v15;
  p__2__current = (PartyOrganizationUtility_o *)&v3->fields.__2__current;
  sub_1C21DDC(p__2__current, (int64_t)v15, v17, v18, v19, v20, v21, v22);
  result = 1;
  *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
  return result;
}


Il2CppObject *__fastcall ShopRootComponent__WaitPurchase_d__121__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ShopRootComponent__WaitPurchase_d__121_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn ShopRootComponent__WaitPurchase_d__121__System_Collections_IEnumerator_Reset(
        ShopRootComponent__WaitPurchase_d__121_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_ShopRootComponent__WaitPurchase_d__121_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
}


Il2CppObject *__fastcall ShopRootComponent__WaitPurchase_d__121__System_Collections_IEnumerator_get_Current(
        ShopRootComponent__WaitPurchase_d__121_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall ShopRootComponent__WaitPurchase_d__121__System_IDisposable_Dispose(
        ShopRootComponent__WaitPurchase_d__121_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall ShopRootComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BD8A88 & 1) == 0 )
  {
    sub_1C21E38(&ShopRootComponent___c_TypeInfo);
    byte_4BD8A88 = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(ShopRootComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  ShopRootComponent___c_TypeInfo->static_fields->__9 = (struct ShopRootComponent___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)ShopRootComponent___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ShopRootComponent___c___ctor(ShopRootComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ShopRootComponent___c___WaitPurchase_b__121_0(ShopRootComponent___c_o *this, const MethodInfo *method)
{
  PurchaseBehaviour_c *v2; // x0

  if ( (byte_4BD8A89 & 1) == 0 )
  {
    sub_1C21E38(&PurchaseBehaviour_TypeInfo);
    byte_4BD8A89 = 1;
  }
  v2 = PurchaseBehaviour_TypeInfo;
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
    v2 = PurchaseBehaviour_TypeInfo;
  }
  return !v2->static_fields->isOpenPurchaseDialogEvent;
}


void __fastcall ShopRootComponent___c__DisplayClass100_0___ctor(
        ShopRootComponent___c__DisplayClass100_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ShopRootComponent___c__DisplayClass100_0___PlayLvExceedItemReleaseEffect_b__0(
        ShopRootComponent___c__DisplayClass100_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  System_Action_o *_9__1; // x22
  CommonUI_o *v6; // x21
  QuestRewardInfo_o *questRewardInfo; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4BD8A8A & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_ShopRootComponent___c__DisplayClass100_0__PlayLvExceedItemReleaseEffect_b__1__);
    byte_4BD8A8A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__1 = this->fields.__9__1;
  v6 = (CommonUI_o *)Instance;
  questRewardInfo = this->fields.questRewardInfo;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_ShopRootComponent___c__DisplayClass100_0__PlayLvExceedItemReleaseEffect_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.__9__1, (int64_t)_9__1, v8, v9, v10, v11, v12, v13);
  }
  if ( !v6 )
    sub_1C22094(Instance, v4);
  CommonUI__LoadItemGetEffect(v6, questRewardInfo, _9__1, 0LL);
}


void __fastcall ShopRootComponent___c__DisplayClass100_0___PlayLvExceedItemReleaseEffect_b__1(
        ShopRootComponent___c__DisplayClass100_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *Instance; // x0
  __int64 v4; // x1
  struct ShopRootComponent_o *_4__this; // x8
  CommonUI_o *v6; // x20
  System_Action_o *_9__2; // x23
  UnityEngine_Transform_o *v8; // x22
  QuestRewardInfo_o *questRewardInfo; // x21
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4BD8A8B & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_ShopRootComponent___c__DisplayClass100_0__PlayLvExceedItemReleaseEffect_b__2__);
    byte_4BD8A8B = 1;
  }
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_9;
  v6 = (CommonUI_o *)Instance;
  Instance = _4__this->fields.actionPanel;
  if ( !Instance )
    goto LABEL_9;
  Instance = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(Instance, 0LL);
  _9__2 = this->fields.__9__2;
  v8 = (UnityEngine_Transform_o *)Instance;
  questRewardInfo = this->fields.questRewardInfo;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_ShopRootComponent___c__DisplayClass100_0__PlayLvExceedItemReleaseEffect_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.__9__2, (int64_t)_9__2, v10, v11, v12, v13, v14, v15);
  }
  if ( !v6 )
LABEL_9:
    sub_1C22094(Instance, v4);
  CommonUI__OpenItemGetEffect(v6, v8, 0, questRewardInfo, _9__2, 0LL);
}


void __fastcall ShopRootComponent___c__DisplayClass100_0___PlayLvExceedItemReleaseEffect_b__2(
        ShopRootComponent___c__DisplayClass100_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  AvalonSceneManager_c *v5; // x8
  CommonUI_o *v6; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__3; // x21
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4BD8A8C & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&AvalonSceneManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_ShopRootComponent___c__DisplayClass100_0__PlayLvExceedItemReleaseEffect_b__3__);
    byte_4BD8A8C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  CommonUI__ReleaseItemGetEffect((CommonUI_o *)Instance, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = AvalonSceneManager_TypeInfo;
  v6 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v5 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v5->static_fields->DEFAULT_FADE_TIME;
  _9__3 = this->fields.__9__3;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_ShopRootComponent___c__DisplayClass100_0__PlayLvExceedItemReleaseEffect_b__3__,
      0LL);
    this->fields.__9__3 = _9__3;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.__9__3, (int64_t)_9__3, v9, v10, v11, v12, v13, v14);
  }
  if ( !v6 )
LABEL_10:
    sub_1C22094(Instance, v4);
  CommonUI__maskFadein(v6, DEFAULT_FADE_TIME, _9__3, 0LL);
}


void __fastcall ShopRootComponent___c__DisplayClass100_0___PlayLvExceedItemReleaseEffect_b__3(
        ShopRootComponent___c__DisplayClass100_0_o *this,
        const MethodInfo *method)
{
  struct ShopBuyItemListViewItem_o *item; // x1

  item = this->fields.item;
  if ( !item || (this = (ShopRootComponent___c__DisplayClass100_0_o *)this->fields.__4__this) == 0LL )
    sub_1C22094(this, item);
  ShopRootComponent__ShowNormalItemDialog((ShopRootComponent_o *)this, item, item->fields._Shop_k__BackingField, 0LL);
}


void __fastcall ShopRootComponent___c__DisplayClass107_0___ctor(
        ShopRootComponent___c__DisplayClass107_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ShopRootComponent___c__DisplayClass107_0___PlayServantCostumeReleaseEffect_b__0(
        ShopRootComponent___c__DisplayClass107_0_o *this,
        const MethodInfo *method)
{
  ShopRootComponent___c__DisplayClass107_0_o *v2; // x19
  struct ShopEntity_o *shopEntity; // x8
  struct System_Int32_array *targetIds; // x8
  System_String_o *v5; // x21
  System_String_o *v6; // x0
  int32_t v7; // w20
  System_String_o *v8; // x0
  int32_t v9; // w21
  System_String_o *name; // x21
  Il2CppObject *_4__this; // x22
  CommonUI_o *v12; // x20
  System_Action_o *v13; // x19
  ServantCostumeEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  v2 = this;
  if ( (byte_4BD8A8D & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_1C21E38(&Method_ShopRootComponent_OnEndPlayServantCostumeReleaseEffect__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (ShopRootComponent___c__DisplayClass107_0_o *)sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD8A8D = 1;
  }
  entity = 0LL;
  shopEntity = v2->fields.shopEntity;
  if ( !shopEntity )
    goto LABEL_15;
  targetIds = shopEntity->fields.targetIds;
  if ( !targetIds )
    goto LABEL_15;
  if ( !targetIds->max_length )
    sub_1C2209C(this, method);
  this = (ShopRootComponent___c__DisplayClass107_0_o *)System_Int32__ToString((int)targetIds + 32, 0LL);
  if ( !this )
    goto LABEL_15;
  v5 = (System_String_o *)this;
  v6 = System_String__Substring_63134480((System_String_o *)this, 0, LODWORD(this->fields.shopEntity) - 2, 0LL);
  v7 = System_Int32__Parse(v6, 0LL);
  v8 = System_String__Substring(v5, v5->fields._stringLength - 2, 0LL);
  v9 = System_Int32__Parse(v8, 0LL);
  this = (ShopRootComponent___c__DisplayClass107_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_15;
  this = (ShopRootComponent___c__DisplayClass107_0_o *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)this,
                                                         (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  if ( !this )
    goto LABEL_15;
  if ( ServantCostumeMaster__TryGetEntity((ServantCostumeMaster_o *)this, &entity, v7, v9, 0LL) )
  {
    this = (ShopRootComponent___c__DisplayClass107_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( entity )
    {
      name = entity->fields.name;
      _4__this = (Il2CppObject *)v2->fields.__4__this;
      v12 = (CommonUI_o *)this;
      v13 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      System_Action___ctor(v13, _4__this, Method_ShopRootComponent_OnEndPlayServantCostumeReleaseEffect__, 0LL);
      if ( v12 )
      {
        CommonUI__OpenCostumeReleaseEffect(v12, 1, name, v13, 23, 0LL);
        return;
      }
    }
LABEL_15:
    sub_1C22094(this, method);
  }
  this = (ShopRootComponent___c__DisplayClass107_0_o *)v2->fields.__4__this;
  if ( !this )
    goto LABEL_15;
  ShopRootComponent__OnEndPlayServantCostumeReleaseEffect((ShopRootComponent_o *)this, 0LL);
}


void __fastcall ShopRootComponent___c__DisplayClass158_0___ctor(
        ShopRootComponent___c__DisplayClass158_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ShopRootComponent___c__DisplayClass158_0___CloseShopResetDialog_b__0(
        ShopRootComponent___c__DisplayClass158_0_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  _BOOL8 v5; // x0
  __int64 v6; // x1
  ShopRootComponent_o *_4__this; // x8
  Il2CppObject *v8; // x21
  ShopResetConfirmDialogComponent_o *monitor; // x20
  ShopBuyItemListViewItem_o *item; // x19
  System_Action_bool__o *v11; // x22

  if ( (byte_4BD8A8E & 1) == 0 )
  {
    sub_1C21E38(&System_Action_bool__TypeInfo);
    sub_1C21E38(&Method_ShopRootComponent_OnEndShopReset__);
    sub_1C21E38(&StringLiteral_22456/*"ng"*/);
    byte_4BD8A8E = 1;
  }
  v5 = System_String__op_Equality(result, (System_String_o *)StringLiteral_22456/*"ng"*/, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_9;
  if ( v5 )
  {
    ShopRootComponent__RequestEnd(_4__this, 0LL);
    return;
  }
  ShopRootComponent__RefreshInfo(this->fields.__4__this, 0LL);
  v8 = (Il2CppObject *)this->fields.__4__this;
  if ( !v8
    || (monitor = (ShopResetConfirmDialogComponent_o *)v8[24].monitor,
        item = this->fields.item,
        v11 = (System_Action_bool__o *)sub_1C22084(System_Action_bool__TypeInfo),
        System_Action_bool____ctor(v11, v8, Method_ShopRootComponent_OnEndShopReset__, 0LL),
        !monitor) )
  {
LABEL_9:
    sub_1C22094(v5, v6);
  }
  ShopResetConfirmDialogComponent__OpenResultDialog(monitor, item, v11, 0LL);
}


void __fastcall ShopRootComponent___c__DisplayClass158_0___CloseShopResetDialog_b__1(
        ShopRootComponent___c__DisplayClass158_0_o *this,
        const MethodInfo *method)
{
  ShopRootComponent___c__DisplayClass158_0_o *v2; // x19
  struct ShopBuyItemListViewItem_o *item; // x8
  struct ShopEntity_o *Shop_k__BackingField; // x8
  ShopResetPurchaseNumRequest_o *request; // x20
  int32_t baseShopId; // w19

  v2 = this;
  if ( (byte_4BD8A8F & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_ItemMaster___);
    this = (ShopRootComponent___c__DisplayClass158_0_o *)sub_1C21E38(&DataManager_TypeInfo);
    byte_4BD8A8F = 1;
  }
  item = v2->fields.item;
  if ( !item )
    goto LABEL_10;
  Shop_k__BackingField = item->fields._Shop_k__BackingField;
  if ( !Shop_k__BackingField )
    goto LABEL_10;
  request = v2->fields.request;
  baseShopId = Shop_k__BackingField->fields.baseShopId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (ShopRootComponent___c__DisplayClass158_0_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !this || !request )
LABEL_10:
    sub_1C22094(this, method);
  ShopResetPurchaseNumRequest__beginRequest(request, baseShopId, HIDWORD(this[2].fields.__4__this), 0LL);
}


void __fastcall ShopRootComponent___c__DisplayClass73_0___ctor(
        ShopRootComponent___c__DisplayClass73_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ShopRootComponent___c__DisplayClass73_0___LoadBanner_b__0(
        ShopRootComponent___c__DisplayClass73_0_o *this,
        const MethodInfo *method)
{
  PurchaseBehaviour_c *v3; // x0
  ShopPlayVoiceComponent_o *shopPlayVoiceComponent; // x0
  __int64 v5; // x1
  struct ShopRootComponent_o *_4__this; // x8
  int32_t v7; // w4

  if ( (byte_4BD8A90 & 1) == 0 )
  {
    sub_1C21E38(&PurchaseBehaviour_TypeInfo);
    byte_4BD8A90 = 1;
  }
  v3 = PurchaseBehaviour_TypeInfo;
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
    v3 = PurchaseBehaviour_TypeInfo;
  }
  v3->static_fields->isOpenPurchaseDialogEvent = 1;
  PurchaseBehaviour__ActivateBoth(0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (shopPlayVoiceComponent = _4__this->fields.shopPlayVoiceComponent) == 0LL
    || (_4__this->fields.isFromCoinRoom ? (v7 = 17) : (v7 = 0),
        ShopPlayVoiceComponent__LoadVoice(
          shopPlayVoiceComponent,
          _4__this->fields.figureSvtId,
          this->fields.jumpedState,
          _4__this->fields.isFromCoinRoom,
          v7,
          0LL),
        (shopPlayVoiceComponent = (ShopPlayVoiceComponent_o *)this->fields.__4__this) == 0LL) )
  {
    sub_1C22094(shopPlayVoiceComponent, v5);
  }
  ShopRootComponent____n__0((ShopRootComponent_o *)shopPlayVoiceComponent, 0LL);
}


void __fastcall ShopRootComponent___c__DisplayClass81_0___ctor(
        ShopRootComponent___c__DisplayClass81_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ShopRootComponent___c__DisplayClass81_0___SelectMenu_b__0(
        ShopRootComponent___c__DisplayClass81_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x5
  ShopRootComponent___c__DisplayClass81_0_o *v3; // x19
  struct ShopRootComponent_o *_4__this; // x8
  ShopSceneListViewControlHelper_o *listViewHelper; // x20
  System_Action_o *_9__1; // x24
  int32_t selectedEventIndex; // w21
  int32_t state; // w22
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  struct ShopRootComponent_o *v15; // x8

  v3 = this;
  if ( (byte_4BD8A91 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    this = (ShopRootComponent___c__DisplayClass81_0_o *)sub_1C21E38(&Method_ShopRootComponent___c__DisplayClass81_0__SelectMenu_b__1__);
    byte_4BD8A91 = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  listViewHelper = _4__this->fields.listViewHelper;
  _9__1 = v3->fields.__9__1;
  selectedEventIndex = _4__this->fields.selectedEventIndex;
  state = v3->fields.state;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v3,
      Method_ShopRootComponent___c__DisplayClass81_0__SelectMenu_b__1__,
      0LL);
    v3->fields.__9__1 = _9__1;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v3->fields.__9__1, (int64_t)_9__1, v9, v10, v11, v12, v13, v14);
  }
  if ( !listViewHelper
    || (ShopSceneListViewControlHelper__SetListViewOnSelectMenu(
          listViewHelper,
          state,
          &v3->fields.eventId,
          selectedEventIndex,
          _9__1,
          v2),
        (this = (ShopRootComponent___c__DisplayClass81_0_o *)v3->fields.__4__this) == 0LL)
    || (ShopRootComponent__OpenStonePurchaseMenu((ShopRootComponent_o *)this, v3->fields.state, 0LL),
        (this = (ShopRootComponent___c__DisplayClass81_0_o *)v3->fields.__4__this) == 0LL)
    || (ShopRootComponent__OpenEventItemWindow((ShopRootComponent_o *)this, v3->fields.state, v3->fields.eventId, 0LL),
        (v15 = v3->fields.__4__this) == 0LL) )
  {
LABEL_11:
    sub_1C22094(this, method);
  }
  *(_QWORD *)&v15->fields.state = (unsigned int)v3->fields.state;
}


void __fastcall ShopRootComponent___c__DisplayClass81_0___SelectMenu_b__1(
        ShopRootComponent___c__DisplayClass81_0_o *this,
        const MethodInfo *method)
{
  ShopRootComponent___c__DisplayClass81_0_o *v2; // x19
  struct ShopRootComponent_o *_4__this; // x8
  struct ShopRootComponent_o *v4; // x8
  ShopPlayVoiceComponent_o *shopPlayVoiceComponent; // x20
  ShopRootComponent___c__DisplayClass81_0_o *v6; // x21
  ShopRootConstants_c *v7; // x8
  int32_t eventId; // w20
  int32_t *p_DEFAULT_FIGURE_ID; // x8
  int32_t *p_DEFAULT_FIGURE_LIMIT_CNT; // x9
  struct ShopRootConstants_StaticFields *static_fields; // x9
  struct ShopRootComponent_o *v12; // x10
  int32_t v13; // w21
  int32_t v14; // w22
  ShopPlayVoiceComponent_o *v15; // x23
  StandFigureBack_o *standFigureBack; // x24
  System_Action_o *_9__2; // x25
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7

  v2 = this;
  if ( (byte_4BD8A92 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_GuideMaster___);
    sub_1C21E38(&ShopRootConstants_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (ShopRootComponent___c__DisplayClass81_0_o *)sub_1C21E38(&Method_ShopRootComponent___c__DisplayClass81_0__SelectMenu_b__2__);
    byte_4BD8A92 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_23;
  this = (ShopRootComponent___c__DisplayClass81_0_o *)_4__this->fields.shopPlayVoiceComponent;
  if ( !this )
    goto LABEL_23;
  ShopPlayVoiceComponent__StopVoice((ShopPlayVoiceComponent_o *)this, 0LL);
  if ( v2->fields.state != 15 )
    goto LABEL_21;
  v4 = v2->fields.__4__this;
  if ( !v4 )
    goto LABEL_23;
  shopPlayVoiceComponent = v4->fields.shopPlayVoiceComponent;
  this = (ShopRootComponent___c__DisplayClass81_0_o *)ShopPlayVoiceConstants__GetEnterVoiceFlag(15, 0LL);
  if ( !shopPlayVoiceComponent )
    goto LABEL_23;
  if ( !ShopPlayVoiceComponent__CheckVoiceFlag(shopPlayVoiceComponent, (int32_t)this, 0LL) )
    goto LABEL_21;
  this = (ShopRootComponent___c__DisplayClass81_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (ShopRootComponent___c__DisplayClass81_0_o *)DataManager__GetMasterData_object_(
                                                              (DataManager_o *)this,
                                                              (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_GuideMaster___)) == 0LL )
  {
LABEL_23:
    sub_1C22094(this, method);
  }
  this = (ShopRootComponent___c__DisplayClass81_0_o *)GuideMaster__getGuideData((GuideMaster_o *)this, 3, 0LL);
  v6 = this;
  v7 = ShopRootConstants_TypeInfo;
  if ( !ShopRootConstants_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
    v7 = ShopRootConstants_TypeInfo;
    if ( v6 )
      goto LABEL_13;
LABEL_15:
    static_fields = v7->static_fields;
    eventId = 0;
    p_DEFAULT_FIGURE_ID = &static_fields->DEFAULT_FIGURE_ID;
    p_DEFAULT_FIGURE_LIMIT_CNT = &static_fields->DEFAULT_FIGURE_LIMIT_CNT;
    goto LABEL_16;
  }
  if ( !this )
    goto LABEL_15;
LABEL_13:
  eventId = v6->fields.eventId;
  p_DEFAULT_FIGURE_ID = &v6->fields.state;
  p_DEFAULT_FIGURE_LIMIT_CNT = (int32_t *)&v6->fields.__9__2;
LABEL_16:
  v12 = v2->fields.__4__this;
  if ( !v12 )
    goto LABEL_23;
  v13 = *p_DEFAULT_FIGURE_ID;
  v14 = *p_DEFAULT_FIGURE_LIMIT_CNT;
  v15 = v12->fields.shopPlayVoiceComponent;
  standFigureBack = v12->fields.standFigureBack;
  _9__2 = v2->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v2,
      Method_ShopRootComponent___c__DisplayClass81_0__SelectMenu_b__2__,
      0LL);
    v2->fields.__9__2 = _9__2;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v2->fields.__9__2, (int64_t)_9__2, v18, v19, v20, v21, v22, v23);
  }
  if ( !v15 )
    goto LABEL_23;
  ShopPlayVoiceComponent__ReloadVoice(v15, standFigureBack, v13, v14, eventId, _9__2, 0LL);
LABEL_21:
  this = (ShopRootComponent___c__DisplayClass81_0_o *)v2->fields.__4__this;
  if ( !this )
    goto LABEL_23;
  ShopRootComponent__SetFadeIn((ShopRootComponent_o *)this, v2->fields.state, 0LL);
}


void __fastcall ShopRootComponent___c__DisplayClass81_0___SelectMenu_b__2(
        ShopRootComponent___c__DisplayClass81_0_o *this,
        const MethodInfo *method)
{
  ShopRootComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C22094(0LL, method);
  ShopRootComponent__PlayVoiceEnter(_4__this, this->fields.state, 0LL);
}


void __fastcall ShopRootComponent___c__DisplayClass82_0___ctor(
        ShopRootComponent___c__DisplayClass82_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ShopRootComponent___c__DisplayClass82_0___BackMenu_b__0(
        ShopRootComponent___c__DisplayClass82_0_o *this,
        const MethodInfo *method)
{
  ShopRootComponent_o *_4__this; // x0
  int32_t state; // w21
  ShopSceneListViewControlHelper_o *listViewHelper; // x20
  const MethodInfo *v6; // x4
  System_Action_o *_9__1; // x23
  int32_t v8; // w22
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  struct ShopRootComponent_o *v15; // x8

  if ( (byte_4BD8A93 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_ShopRootComponent___c__DisplayClass82_0__BackMenu_b__1__);
    byte_4BD8A93 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_10;
  state = this->fields.state;
  listViewHelper = _4__this->fields.listViewHelper;
  _4__this = (ShopRootComponent_o *)ShopRootComponent__GetStateOnBack(_4__this, state, 0LL);
  _9__1 = this->fields.__9__1;
  v8 = (int)_4__this;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_ShopRootComponent___c__DisplayClass82_0__BackMenu_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.__9__1, (int64_t)_9__1, v9, v10, v11, v12, v13, v14);
  }
  if ( !listViewHelper
    || (ShopSceneListViewControlHelper__SetListViewOnBackMenu(listViewHelper, state, v8, _9__1, v6),
        (_4__this = this->fields.__4__this) == 0LL)
    || (ShopRootComponent__CloseEventItemWindow(_4__this, 0LL), (v15 = this->fields.__4__this) == 0LL) )
  {
LABEL_10:
    sub_1C22094(_4__this, method);
  }
  v15->fields.inputState = 3;
}


void __fastcall ShopRootComponent___c__DisplayClass82_0___BackMenu_b__1(
        ShopRootComponent___c__DisplayClass82_0_o *this,
        const MethodInfo *method)
{
  ShopRootComponent___c__DisplayClass82_0_o *v2; // x19
  struct ShopRootComponent_o *_4__this; // x8
  struct ShopRootComponent_o *v4; // x8
  ShopPlayVoiceComponent_o *shopPlayVoiceComponent; // x20
  StandFigureBack_o *standFigureBack; // x21
  int32_t figureSvtId; // w22
  int32_t figureSvtLimitCnt; // w23
  int32_t defaultFaceId; // w24
  System_Action_o *_9__2; // x25
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  v2 = this;
  if ( (byte_4BD8A94 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    this = (ShopRootComponent___c__DisplayClass82_0_o *)sub_1C21E38(&Method_ShopRootComponent___c__DisplayClass82_0__BackMenu_b__2__);
    byte_4BD8A94 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  this = (ShopRootComponent___c__DisplayClass82_0_o *)_4__this->fields.shopPlayVoiceComponent;
  if ( !this )
    goto LABEL_13;
  ShopPlayVoiceComponent__StopVoice((ShopPlayVoiceComponent_o *)this, 0LL);
  if ( v2->fields.state != 15 )
    goto LABEL_11;
  v4 = v2->fields.__4__this;
  if ( !v4 )
    goto LABEL_13;
  shopPlayVoiceComponent = v4->fields.shopPlayVoiceComponent;
  standFigureBack = v4->fields.standFigureBack;
  figureSvtId = v4->fields.figureSvtId;
  figureSvtLimitCnt = v4->fields.figureSvtLimitCnt;
  defaultFaceId = v4->fields.defaultFaceId;
  _9__2 = v2->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v2,
      Method_ShopRootComponent___c__DisplayClass82_0__BackMenu_b__2__,
      0LL);
    v2->fields.__9__2 = _9__2;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v2->fields.__9__2, (int64_t)_9__2, v11, v12, v13, v14, v15, v16);
  }
  if ( !shopPlayVoiceComponent )
LABEL_13:
    sub_1C22094(this, method);
  ShopPlayVoiceComponent__ReloadVoice(
    shopPlayVoiceComponent,
    standFigureBack,
    figureSvtId,
    figureSvtLimitCnt,
    defaultFaceId,
    _9__2,
    0LL);
LABEL_11:
  this = (ShopRootComponent___c__DisplayClass82_0_o *)v2->fields.__4__this;
  if ( !this )
    goto LABEL_13;
  ShopRootComponent__SetFadeIn((ShopRootComponent_o *)this, v2->fields.state, 0LL);
}


void __fastcall ShopRootComponent___c__DisplayClass82_0___BackMenu_b__2(
        ShopRootComponent___c__DisplayClass82_0_o *this,
        const MethodInfo *method)
{
  ShopRootComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C22094(0LL, method);
  ShopRootComponent__PlayVoiceBack(_4__this, this->fields.state, 0LL);
}


void __fastcall ShopRootComponent___c__DisplayClass83_0___ctor(
        ShopRootComponent___c__DisplayClass83_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ShopRootComponent___c__DisplayClass83_0___SetFadeOut_b__0(
        ShopRootComponent___c__DisplayClass83_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.endFade, 0LL);
}


void __fastcall ShopRootComponent___c__DisplayClass86_0___ctor(
        ShopRootComponent___c__DisplayClass86_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ShopRootComponent___c__DisplayClass86_0___OpenConfirmMenu_b__0(
        ShopRootComponent___c__DisplayClass86_0_o *this,
        const MethodInfo *method)
{
  ShopRootComponent___c__DisplayClass86_0_o *v2; // x19
  Il2CppObject *_4__this; // x23
  struct ShopBuyItemListViewItem_o *item; // x8
  ShopBuyItemConfirmMenu_o *monitor; // x19
  ShopEntity_o *Shop_k__BackingField; // x20
  int32_t ShopKind_k__BackingField; // w21
  System_Action_int__o *v8; // x22

  v2 = this;
  if ( (byte_4BD8A95 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_int__TypeInfo);
    this = (ShopRootComponent___c__DisplayClass86_0_o *)sub_1C21E38(&Method_ShopRootComponent_SelectedBuyItemConfirm__);
    byte_4BD8A95 = 1;
  }
  _4__this = (Il2CppObject *)v2->fields.__4__this;
  if ( !_4__this
    || (item = v2->fields.item) == 0LL
    || (monitor = (ShopBuyItemConfirmMenu_o *)_4__this[9].monitor,
        Shop_k__BackingField = item->fields._Shop_k__BackingField,
        ShopKind_k__BackingField = item->fields._ShopKind_k__BackingField,
        v8 = (System_Action_int__o *)sub_1C22084(System_Action_int__TypeInfo),
        System_Action_int____ctor(v8, _4__this, Method_ShopRootComponent_SelectedBuyItemConfirm__, 0LL),
        !monitor) )
  {
    sub_1C22094(this, method);
  }
  ShopBuyItemConfirmMenu__Open(monitor, Shop_k__BackingField, ShopKind_k__BackingField, v8, 0, 0, 0LL, 8, 0LL);
}


void __fastcall ShopRootComponent___c__DisplayClass86_0___OpenConfirmMenu_b__1(
        ShopRootComponent___c__DisplayClass86_0_o *this,
        const MethodInfo *method)
{
  ShopRootComponent___c__DisplayClass86_0_o *v2; // x19
  Il2CppObject *_4__this; // x21
  ShopResetConfirmDialogComponent_o *monitor; // x20
  ShopBuyItemListViewItem_o *item; // x19
  System_Action_bool__o *v6; // x22

  v2 = this;
  if ( (byte_4BD8A96 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_bool__TypeInfo);
    this = (ShopRootComponent___c__DisplayClass86_0_o *)sub_1C21E38(&Method_ShopRootComponent_CloseShopResetDialog__);
    byte_4BD8A96 = 1;
  }
  _4__this = (Il2CppObject *)v2->fields.__4__this;
  if ( !_4__this
    || (monitor = (ShopResetConfirmDialogComponent_o *)_4__this[24].monitor,
        item = v2->fields.item,
        v6 = (System_Action_bool__o *)sub_1C22084(System_Action_bool__TypeInfo),
        System_Action_bool____ctor(v6, _4__this, Method_ShopRootComponent_CloseShopResetDialog__, 0LL),
        !monitor) )
  {
    sub_1C22094(this, method);
  }
  ShopResetConfirmDialogComponent__Open(monitor, item, v6, 0LL);
}


void __fastcall ShopRootComponent___c__DisplayClass86_0___OpenConfirmMenu_b__2(
        ShopRootComponent___c__DisplayClass86_0_o *this,
        const MethodInfo *method)
{
  ShopRootComponent___c__DisplayClass86_0_o *v2; // x19
  Il2CppObject *_4__this; // x23
  struct ShopBuyItemListViewItem_o *item; // x8
  ShopBuyItemConfirmMenu_o *monitor; // x19
  ShopEntity_o *Shop_k__BackingField; // x20
  int32_t ShopKind_k__BackingField; // w21
  System_Action_int__o *v8; // x22

  v2 = this;
  if ( (byte_4BD8A97 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_int__TypeInfo);
    this = (ShopRootComponent___c__DisplayClass86_0_o *)sub_1C21E38(&Method_ShopRootComponent_SelectedBuyItemConfirm__);
    byte_4BD8A97 = 1;
  }
  _4__this = (Il2CppObject *)v2->fields.__4__this;
  if ( !_4__this
    || (item = v2->fields.item) == 0LL
    || (monitor = (ShopBuyItemConfirmMenu_o *)_4__this[9].monitor,
        Shop_k__BackingField = item->fields._Shop_k__BackingField,
        ShopKind_k__BackingField = item->fields._ShopKind_k__BackingField,
        v8 = (System_Action_int__o *)sub_1C22084(System_Action_int__TypeInfo),
        System_Action_int____ctor(v8, _4__this, Method_ShopRootComponent_SelectedBuyItemConfirm__, 0LL),
        !monitor) )
  {
    sub_1C22094(this, method);
  }
  ShopBuyItemConfirmMenu__Open(monitor, Shop_k__BackingField, ShopKind_k__BackingField, v8, 0, 0, 0LL, 8, 0LL);
}


void __fastcall ShopRootComponent___c__DisplayClass96_0___ctor(
        ShopRootComponent___c__DisplayClass96_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopRootComponent___c__DisplayClass96_0___SelectSellServantConfirm_b__0(
        ShopRootComponent___c__DisplayClass96_0_o *this,
        int32_t decide,
        const MethodInfo *method)
{
  ServantSellConfirmMenu_o *_4__this; // x0
  Il2CppObject *v6; // x24
  ServantSellConfirmMenu_o *klass; // x20
  int32_t kind; // w19
  System_Int64_array *monitor; // x21
  System_Int64_array *v10; // x22
  System_Action_int__o *v11; // x23

  if ( (byte_4BD8A98 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_int__TypeInfo);
    sub_1C21E38(&Method_ShopRootComponent_SellServantConfirm__);
    byte_4BD8A98 = 1;
  }
  _4__this = (ServantSellConfirmMenu_o *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_10;
  if ( decide )
  {
    _4__this = (ServantSellConfirmMenu_o *)_4__this->fields.decideButton;
    if ( _4__this )
    {
      ServantSellConfirmMenu__Init(_4__this, 0LL);
      v6 = (Il2CppObject *)this->fields.__4__this;
      if ( v6 )
      {
        klass = (ServantSellConfirmMenu_o *)v6[12].klass;
        kind = this->fields.kind;
        monitor = (System_Int64_array *)v6[31].monitor;
        v10 = (System_Int64_array *)v6[32].klass;
        v11 = (System_Action_int__o *)sub_1C22084(System_Action_int__TypeInfo);
        System_Action_int____ctor(v11, v6, Method_ShopRootComponent_SellServantConfirm__, 0LL);
        if ( klass )
        {
          ServantSellConfirmMenu__Open(klass, kind, monitor, v10, v11, 0LL);
          return;
        }
      }
    }
LABEL_10:
    sub_1C22094(_4__this, *(_QWORD *)&decide);
  }
  ShopRootComponent__CloseSellServantConfirm((ShopRootComponent_o *)_4__this, 0LL);
}