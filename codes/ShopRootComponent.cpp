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
  int32_t v8; // w2
  int32_t v9; // w3
  const MethodInfo *v10; // x2
  System_Action_o *v11; // x20
  ShopRootComponent_o *v12; // x0
  const MethodInfo *v13; // x3

  if ( (byte_4A5780C & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_ShopRootComponent___c__DisplayClass77_0__BackMenu_b__0__);
    sub_1B885B0(&ShopRootComponent___c__DisplayClass77_0_TypeInfo);
    byte_4A5780C = 1;
  }
  v5 = sub_1B887FC(ShopRootComponent___c__DisplayClass77_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    sub_1B8880C(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_DWORD *)(v5 + 24) = state;
  if ( state != 15 )
  {
    ShopRootComponent__PlayVoiceBack(this, state, v10);
    state = *(_DWORD *)(v5 + 24);
  }
  v11 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)v5, Method_ShopRootComponent___c__DisplayClass77_0__BackMenu_b__0__, 0LL);
  ShopRootComponent__SetFadeOut(v12, state, v11, v13);
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
  struct ShopSceneListViewControlHelper_o *listViewHelper; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v13; // x20
  EventEntity_o *v14; // x21
  Il2CppObject *Instance; // x20
  System_String_o *v17; // x22
  Il2CppObject *EventName; // x0
  System_String_o *v19; // x21
  System_Action_o *v20; // x22

  if ( (byte_4A5782E & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1B885B0(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_ShopRootComponent_OnEndDialogEventCloseWarning__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&StringLiteral_6188/*"EventItem"*/);
    sub_1B885B0(&StringLiteral_3528/*"CLICK_BACK"*/);
    sub_1B885B0(&StringLiteral_12990/*"StoneFragments"*/);
    sub_1B885B0(&StringLiteral_12037/*"SHOP_EVENT_RETURN_ERROR"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5782E = 1;
  }
  switch ( state )
  {
    case 1:
      jumpInfo = this->fields.jumpInfo;
      if ( !jumpInfo || !SceneJumpInfo__IsEnableReturnScene(jumpInfo, 0LL) )
        goto LABEL_8;
      myFSM = this->fields.jumpInfo;
      if ( !myFSM )
        goto LABEL_48;
      if ( SceneJumpInfo__ReturnScene((SceneJumpInfo_o *)myFSM, 0LL) )
        return 1;
LABEL_8:
      myFSM = this->fields.myFSM;
      if ( !myFSM )
        goto LABEL_48;
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myFSM, (System_String_o *)StringLiteral_3528/*"CLICK_BACK"*/, 0LL);
      return 1;
    case 4:
      v8 = this->fields.jumpInfo;
      if ( !v8 || !System_String__op_Equality(v8->fields.name, (System_String_o *)StringLiteral_12990/*"StoneFragments"*/, 0LL) )
        return 0;
      myFSM = this->fields.jumpInfo;
      if ( !myFSM )
        goto LABEL_48;
      if ( !SceneJumpInfo__ReturnScene((SceneJumpInfo_o *)myFSM, 0LL) )
        return 0;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v7 = 1;
      TerminalPramsManager__set_IsAutoOpenMasterMission(1, 0LL);
      return v7;
    case 7:
      v9 = this->fields.jumpInfo;
      if ( !v9 || !System_String__op_Equality(v9->fields.name, (System_String_o *)StringLiteral_6188/*"EventItem"*/, 0LL) )
        return 0;
      myFSM = this->fields.jumpInfo;
      if ( !myFSM )
        goto LABEL_48;
      return SceneJumpInfo__ReturnScene((SceneJumpInfo_o *)myFSM, 0LL);
    case 8:
      v10 = this->fields.jumpInfo;
      if ( !v10 )
        return 0;
      if ( !System_String__op_Equality(v10->fields.name, (System_String_o *)StringLiteral_6188/*"EventItem"*/, 0LL) )
        goto LABEL_35;
      myFSM = this->fields.jumpInfo;
      if ( !myFSM )
        goto LABEL_48;
      if ( !*((_DWORD *)myFSM + 6) || !SceneJumpInfo__ReturnScene((SceneJumpInfo_o *)myFSM, 0LL) )
      {
LABEL_35:
        myFSM = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( myFSM )
        {
          myFSM = DataManager__GetMasterData_object_(
                    (DataManager_o *)myFSM,
                    (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMaster___);
          listViewHelper = this->fields.listViewHelper;
          if ( listViewHelper )
          {
            v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)myFSM;
            myFSM = listViewHelper->fields.eventListViewManager;
            if ( myFSM )
            {
              myFSM = ShopEventListViewManager__GetItem(
                        (ShopEventListViewManager_o *)myFSM,
                        this->fields.selectedEventIndex,
                        0LL);
              if ( myFSM )
              {
                if ( v13 )
                {
                  myFSM = DataMasterBase_object__object__int___GetEntity(
                            v13,
                            *((_DWORD *)myFSM + 28),
                            (const MethodInfo_311D934 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
                  if ( myFSM )
                  {
                    v14 = (EventEntity_o *)myFSM;
                    if ( EventEntity__IsOpen((EventEntity_o *)myFSM, 1, 0LL) )
                      return 0;
                    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    v17 = LocalizationManager__Get((System_String_o *)StringLiteral_12037/*"SHOP_EVENT_RETURN_ERROR"*/, 0LL);
                    EventName = (Il2CppObject *)EventEntity__getEventName(v14, 0LL);
                    v19 = System_String__Format(v17, EventName, 0LL);
                    v20 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
                    System_Action___ctor(
                      v20,
                      (Il2CppObject *)this,
                      Method_ShopRootComponent_OnEndDialogEventCloseWarning__,
                      0LL);
                    if ( Instance )
                    {
                      v7 = 1;
                      CommonUI__OpenNotificationDialog(
                        (CommonUI_o *)Instance,
                        (System_String_o *)StringLiteral_1/*""*/,
                        v19,
                        v20,
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
        }
LABEL_48:
        sub_1B8880C(myFSM, *(_QWORD *)&state);
      }
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4A5644B )
      {
        sub_1B885B0(&TerminalPramsManager_TypeInfo);
        byte_4A5644B = 1;
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
  if ( (byte_4A57816 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_int__TypeInfo);
    this = (ShopRootComponent_o *)sub_1B885B0(&Method_ShopRootComponent_SellServantExceededConfirm__);
    byte_4A57816 = 1;
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
    v9 = (System_Action_int__o *)sub_1B887FC(System_Action_int__TypeInfo);
    System_Action_int____ctor(v9, (Il2CppObject *)v3, Method_ShopRootComponent_SellServantExceededConfirm__, 0LL);
    if ( !servantSellConfirmMenu )
LABEL_11:
      sub_1B8880C(servantSellMenu, v4);
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

  if ( (byte_4A5783A & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    byte_4A5783A = 1;
  }
  if ( (unsigned int)state > 0x15 || ((1 << state) & 0x35DDFC) == 0 )
    return 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v5);
  return NetworkManager__CheckServerLimitTime((NetworkManager_o *)Instance, 0LL);
}


void __fastcall ShopRootComponent__CheckTutorial(ShopRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  NetworkManager_ResultCallbackFunc_o *v4; // x20
  Il2CppObject *Request_object; // x0
  __int64 v6; // x1

  if ( (byte_4A5782B & 1) == 0 )
  {
    sub_1B885B0(&Method_NetworkManager_getRequest_TutorialSetRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1B885B0(&Method_ShopRootComponent_QuitHelp__);
    sub_1B885B0(&TutorialFlag_TypeInfo);
    sub_1B885B0(&StringLiteral_22225/*"ok"*/);
    byte_4A5782B = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_37688364(103, 0LL) )
  {
    ShopRootComponent__QuitHelp(this, (System_String_o *)StringLiteral_22225/*"ok"*/, v3);
  }
  else
  {
    v4 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(v4, (Il2CppObject *)this, Method_ShopRootComponent_QuitHelp__, 0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v4,
                       (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_TutorialSetRequest___);
    if ( !Request_object )
      sub_1B8880C(0LL, v6);
    TutorialSetRequest__beginRequest((TutorialSetRequest_o *)Request_object, 103, 0LL);
  }
}


void __fastcall ShopRootComponent__CloseDetaiCheckConfirm(
        ShopRootComponent_o *this,
        bool decide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  struct ShopSceneListViewControlHelper_o *listViewHelper; // x8
  ShopBuyItemListViewItem_o *Item; // x21
  struct ShopEntity_o *Shop_k__BackingField; // x8
  ShopDetailEntity_o *ShopDetailEntity; // x0
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x1

  if ( (byte_4A57835 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ShopDetailMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A57835 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0LL), (listViewHelper = this->fields.listViewHelper) == 0LL)
    || (Instance = (Il2CppObject *)listViewHelper->fields.buyItemListViewManager) == 0LL
    || (Item = ShopBuyItemListViewManager__GetItem(
                 (ShopBuyItemListViewManager_o *)Instance,
                 this->fields.selectedItemIndex,
                 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ShopDetailMaster___),
        !Item)
    || (Shop_k__BackingField = Item->fields._Shop_k__BackingField) == 0LL
    || !Instance )
  {
    sub_1B8880C(Instance, v6);
  }
  ShopDetailEntity = ShopDetailMaster__getShopDetailEntity(
                       (ShopDetailMaster_o *)Instance,
                       Shop_k__BackingField->fields.id,
                       0LL);
  ShopRootComponent__SetFrequencyTypeCheckList((ShopRootComponent_o *)ShopDetailEntity, ShopDetailEntity, decide, v11);
  if ( decide )
    ShopRootComponent__RequestShop(this, v12);
  else
    ShopRootComponent__CloseItemConfirm(this, v12);
}


void __fastcall ShopRootComponent__CloseEventItemWindow(ShopRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *shopEventItemDrawBase; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  ShopRootConstants_c *v5; // x8
  UnityEngine_GameObject_o *v6; // x20

  if ( (byte_4A57839 & 1) == 0 )
  {
    sub_1B885B0(&ShopRootConstants_TypeInfo);
    byte_4A57839 = 1;
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
    sub_1B8880C(shopEventItemDrawBase, method);
  ShopCurrencyInfoController__StopUpdateRemainTime((ShopCurrencyInfoController_o *)shopEventItemDrawBase, 0LL);
}


void __fastcall ShopRootComponent__CloseItemConfirm(ShopRootComponent_o *this, const MethodInfo *method)
{
  ShopBuyItemConfirmMenu_o *buyItemConfirmMenu; // x0
  const MethodInfo *v4; // x2
  int32_t state; // w20
  struct ShopSceneListViewControlHelper_o *listViewHelper; // x8
  ShopBuyItemListViewItem_o *v7; // x20
  ShopEntity_o *warningLabel; // x21
  ShopMaster_o *v9; // x22
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x2
  ShopSceneListViewControlHelper_o *v13; // x21
  const MethodInfo *v14; // x2

  if ( (byte_4A57815 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_ShopMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    byte_4A57815 = 1;
  }
  if ( this->fields.inputState != 3 )
    return;
  buyItemConfirmMenu = this->fields.buyItemConfirmMenu;
  this->fields.inputState = 4;
  if ( !buyItemConfirmMenu )
    goto LABEL_52;
  if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)buyItemConfirmMenu, 0LL) )
  {
    buyItemConfirmMenu = this->fields.buyItemConfirmMenu;
    if ( !buyItemConfirmMenu )
      goto LABEL_52;
    ShopBuyItemConfirmMenu__Close(buyItemConfirmMenu, 0LL);
  }
  buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)this->fields.buyBulkItemConfirmMenu;
  if ( !buyItemConfirmMenu )
    goto LABEL_52;
  if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)buyItemConfirmMenu, 0LL) )
  {
    buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)this->fields.buyBulkItemConfirmMenu;
    if ( !buyItemConfirmMenu )
      goto LABEL_52;
    ShopBuyBulkItemConfirmMenu__Close((ShopBuyBulkItemConfirmMenu_o *)buyItemConfirmMenu, 0LL);
  }
  buyItemConfirmMenu = this->fields.ApSeedExchangeConfirmMenu;
  if ( !buyItemConfirmMenu )
    goto LABEL_52;
  if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)buyItemConfirmMenu, 0LL) )
  {
    buyItemConfirmMenu = this->fields.ApSeedExchangeConfirmMenu;
    if ( !buyItemConfirmMenu )
      goto LABEL_52;
    ShopBuyItemConfirmMenu__Close(buyItemConfirmMenu, 0LL);
  }
  buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)this->fields.ApSeedBulkExchangeConfirmMenu;
  if ( !buyItemConfirmMenu )
    goto LABEL_52;
  if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)buyItemConfirmMenu, 0LL) )
  {
    buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)this->fields.ApSeedBulkExchangeConfirmMenu;
    if ( !buyItemConfirmMenu )
      goto LABEL_52;
    ShopBuyBulkItemConfirmMenu__Close((ShopBuyBulkItemConfirmMenu_o *)buyItemConfirmMenu, 0LL);
  }
  buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)this->fields.buyStorageConfirmDialog;
  if ( !buyItemConfirmMenu )
    goto LABEL_52;
  if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)buyItemConfirmMenu, 0LL) )
  {
    buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)this->fields.buyStorageConfirmDialog;
    if ( !buyItemConfirmMenu )
      goto LABEL_52;
    BuyStorageConfirmDialogComponent__Close((BuyStorageConfirmDialogComponent_o *)buyItemConfirmMenu, 0LL);
  }
  buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)this->fields.buyStorageNotificationDialog;
  if ( !buyItemConfirmMenu )
LABEL_52:
    sub_1B8880C(buyItemConfirmMenu, method);
  buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)UnityEngine_Behaviour__get_isActiveAndEnabled(
                                                     (UnityEngine_Behaviour_o *)buyItemConfirmMenu,
                                                     0LL);
  if ( ((unsigned __int8)buyItemConfirmMenu & 1) != 0 )
  {
    buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)this->fields.buyStorageNotificationDialog;
    if ( !buyItemConfirmMenu )
      goto LABEL_52;
    BuyStorageConfirmDialogComponent__Close((BuyStorageConfirmDialogComponent_o *)buyItemConfirmMenu, 0LL);
  }
  state = this->fields.state;
  if ( state == 16 || state == 8 )
  {
    listViewHelper = this->fields.listViewHelper;
    if ( !listViewHelper )
      goto LABEL_52;
    buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)listViewHelper->fields.buyItemListViewManager;
    if ( !buyItemConfirmMenu )
      goto LABEL_52;
    buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)ShopBuyItemListViewManager__GetItem(
                                                       (ShopBuyItemListViewManager_o *)buyItemConfirmMenu,
                                                       this->fields.selectedItemIndex,
                                                       0LL);
    if ( !buyItemConfirmMenu )
      goto LABEL_52;
    v7 = (ShopBuyItemListViewItem_o *)buyItemConfirmMenu;
    warningLabel = (ShopEntity_o *)buyItemConfirmMenu->fields.warningLabel;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ShopMaster___);
    if ( this->fields.buyCount >= 1 )
    {
      v9 = (ShopMaster_o *)buyItemConfirmMenu;
      if ( !buyItemConfirmMenu )
        goto LABEL_52;
      if ( ShopMaster__IsOpenPurchaseCloseShop((ShopMaster_o *)buyItemConfirmMenu, warningLabel, 0LL)
        && ShopRootComponent__BackScene(this, this->fields.state, v10) )
      {
        return;
      }
      if ( this->fields.buyCount >= 1 && ShopMaster__IsOpenPurchaseCloseShop(v9, warningLabel, 0LL) )
      {
        buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)this->fields.listViewHelper;
        if ( buyItemConfirmMenu )
        {
          ShopSceneListViewControlHelper__SetListViewOnCloseEventShop(
            (ShopSceneListViewControlHelper_o *)buyItemConfirmMenu,
            this->fields.state,
            v11);
          method = (const MethodInfo *)(unsigned int)this->fields.state;
          if ( (_DWORD)method != 16 )
          {
            if ( (_DWORD)method == 8 )
            {
              LODWORD(method) = 7;
              this->fields.state = 7;
            }
            goto LABEL_51;
          }
          buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)this->fields.topListViewManager;
          if ( buyItemConfirmMenu )
          {
            ShopTopListViewManager__CreateList((ShopTopListViewManager_o *)buyItemConfirmMenu, 16, -1.0, v12);
            LODWORD(method) = this->fields.state;
LABEL_51:
            ShopRootComponent__BackMenu(this, (int32_t)method, v12);
            return;
          }
        }
        goto LABEL_52;
      }
    }
    ShopBuyItemListViewItem__Modify(v7, warningLabel, 0LL);
    state = this->fields.state;
  }
  v13 = this->fields.listViewHelper;
  if ( !v13 )
    goto LABEL_52;
  ShopSceneListViewControlHelper__SetBuyItemListViewModify(this->fields.listViewHelper, state, v4);
  ShopSceneListViewControlHelper__SetBuyItemListViewInput(v13, state, v14);
  this->fields.inputState = 2;
}


void __fastcall ShopRootComponent__CloseSellServantConfirm(ShopRootComponent_o *this, const MethodInfo *method)
{
  ServantSellConfirmMenu_o *servantSellConfirmMenu; // x0
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x4
  ShopSceneListViewControlHelper_o *listViewHelper; // x20
  int32_t state; // w21
  const MethodInfo *v8; // x2

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
      servantSellConfirmMenu = (ServantSellConfirmMenu_o *)UnityEngine_Behaviour__get_isActiveAndEnabled(
                                                             (UnityEngine_Behaviour_o *)servantSellConfirmMenu,
                                                             0LL);
      if ( ((unsigned __int8)servantSellConfirmMenu & 1) != 0 )
      {
        servantSellConfirmMenu = this->fields.servantSellConfirmMenu;
        if ( !servantSellConfirmMenu )
          goto LABEL_13;
        ServantSellConfirmMenu__Close(servantSellConfirmMenu, 0LL);
      }
      listViewHelper = this->fields.listViewHelper;
      if ( listViewHelper )
      {
        state = this->fields.state;
        ShopSceneListViewControlHelper__SetSellServantMenuModify(
          this->fields.listViewHelper,
          state,
          this->fields.selectedServantIds,
          this->fields.selectedCommandCodeIds,
          v5);
        ShopSceneListViewControlHelper__SetSellServantMenuInput(listViewHelper, state, v8);
        return;
      }
    }
LABEL_13:
    sub_1B8880C(servantSellConfirmMenu, method);
  }
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

  if ( (byte_4A5783D & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_12075/*"SHOP_SCENE_VOICE_CANCEL"*/);
    sub_1B885B0(&StringLiteral_12074/*"SHOP_SCENE_VOICE_BACK2"*/);
    byte_4A5783D = 1;
  }
  if ( result )
    goto LABEL_6;
  shopPlayVoiceComponent = this->fields.shopPlayVoiceComponent;
  if ( !shopPlayVoiceComponent )
    goto LABEL_9;
  if ( !ShopPlayVoiceComponent__PlayVoiceOnce(
          shopPlayVoiceComponent,
          (System_String_o *)StringLiteral_12075/*"SHOP_SCENE_VOICE_CANCEL"*/,
          0x2000,
          v3) )
  {
LABEL_6:
    shopPlayVoiceComponent = this->fields.shopPlayVoiceComponent;
    if ( shopPlayVoiceComponent )
    {
      ShopPlayVoiceComponent__PlayVoiceOnce(shopPlayVoiceComponent, (System_String_o *)StringLiteral_12074/*"SHOP_SCENE_VOICE_BACK2"*/, 4096, v3);
      goto LABEL_8;
    }
LABEL_9:
    sub_1B8880C(shopPlayVoiceComponent, *(_QWORD *)&result);
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
  ShopRootComponent_o *v4; // x19
  BuyStorageConfirmDialogComponent_o *buyStorageConfirmDialog; // x20
  System_Action_o *v6; // x21
  struct ShopSceneListViewControlHelper_o *listViewHelper; // x8
  ShopBuyItemListViewItem_o *v8; // x20
  ShopRootComponent_o *v9; // x0
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x2
  ShopBuyBulkItemConfirmMenu_o *buyBulkItemConfirmMenu; // x20
  System_Action_int__o *v13; // x21
  ShopSceneListViewControlHelper_o *v14; // x20
  int32_t state; // w19
  const MethodInfo *v16; // x2

  v4 = this;
  if ( (byte_4A57836 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_int__TypeInfo);
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_ShopRootComponent_RequestShop__);
    this = (ShopRootComponent_o *)sub_1B885B0(&Method_ShopRootComponent_SelectedBuyItemConfirm__);
    byte_4A57836 = 1;
  }
  v4->fields.buyCount = buyCount;
  if ( buyCount )
  {
    buyStorageConfirmDialog = v4->fields.buyStorageConfirmDialog;
    v6 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v6, (Il2CppObject *)v4, Method_ShopRootComponent_RequestShop__, 0LL);
    if ( buyStorageConfirmDialog )
    {
      BuyStorageConfirmDialogComponent__Close_32698356(buyStorageConfirmDialog, v6, 0LL);
      return;
    }
LABEL_14:
    sub_1B8880C(this, *(_QWORD *)&buyCount);
  }
  listViewHelper = v4->fields.listViewHelper;
  v4->fields.inputState = 2;
  if ( !listViewHelper )
    goto LABEL_14;
  this = (ShopRootComponent_o *)listViewHelper->fields.buyItemListViewManager;
  if ( !this )
    goto LABEL_14;
  this = (ShopRootComponent_o *)ShopBuyItemListViewManager__GetItem(
                                  (ShopBuyItemListViewManager_o *)this,
                                  v4->fields.selectedItemIndex,
                                  0LL);
  if ( !v4->fields.buyStorageConfirmDialog )
    goto LABEL_14;
  v8 = (ShopBuyItemListViewItem_o *)this;
  BuyStorageConfirmDialogComponent__Close(v4->fields.buyStorageConfirmDialog, 0LL);
  this = (ShopRootComponent_o *)ShopRootComponent__GetIsBulk(v9, v8, v10);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    buyBulkItemConfirmMenu = v4->fields.buyBulkItemConfirmMenu;
    v13 = (System_Action_int__o *)sub_1B887FC(System_Action_int__TypeInfo);
    System_Action_int____ctor(v13, (Il2CppObject *)v4, Method_ShopRootComponent_SelectedBuyItemConfirm__, 0LL);
    if ( !buyBulkItemConfirmMenu )
      goto LABEL_14;
    ShopBuyBulkItemConfirmMenu__Modify(buyBulkItemConfirmMenu, v13, 0LL);
  }
  else
  {
    v14 = v4->fields.listViewHelper;
    if ( !v14 )
      goto LABEL_14;
    state = v4->fields.state;
    ShopSceneListViewControlHelper__SetBuyItemListViewModify(v14, state, v11);
    ShopSceneListViewControlHelper__SetBuyItemListViewInput(v14, state, v16);
  }
}


void __fastcall ShopRootComponent__CreateShopDetailCheckList(ShopRootComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__int__o *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3
  void *Instance; // x0
  __int64 v6; // x1
  int v7; // w8
  void *v8; // x19
  unsigned int v9; // w21
  __int64 v10; // x8

  if ( (byte_4A5783F & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ShopDetailMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1B885B0(&ShopRootComponent_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5783F = 1;
  }
  if ( !ShopRootComponent_TypeInfo->static_fields->isInitialized )
  {
    v2 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v2,
      (const MethodInfo_31644C4 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    ShopRootComponent_TypeInfo->static_fields->shopDetailCheckList = v2;
    sub_1B88554((ServantStatusBattleListViewItem_o *)ShopRootComponent_TypeInfo->static_fields, (int32_t)v2, v3, v4);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_15;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ShopDetailMaster___);
    if ( !Instance )
      goto LABEL_15;
    Instance = ShopDetailMaster__getShopDetailEntityList((ShopDetailMaster_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_15;
    v7 = *((_DWORD *)Instance + 6);
    v8 = Instance;
    if ( v7 >= 1 )
    {
      v9 = 0;
      while ( 1 )
      {
        if ( v9 >= v7 )
          sub_1B88814(Instance, v6);
        v10 = *((_QWORD *)v8 + (int)v9 + 4);
        if ( !v10 )
          break;
        Instance = ShopRootComponent_TypeInfo->static_fields->shopDetailCheckList;
        if ( !Instance )
          break;
        System_Collections_Generic_Dictionary_int__int___set_Item(
          (System_Collections_Generic_Dictionary_int__int__o *)Instance,
          *(_DWORD *)(v10 + 16),
          0,
          (const MethodInfo_3164E74 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
        v7 = *((_DWORD *)v8 + 6);
        if ( (int)++v9 >= v7 )
          goto LABEL_13;
      }
LABEL_15:
      sub_1B8880C(Instance, v6);
    }
LABEL_13:
    ShopRootComponent_TypeInfo->static_fields->isInitialized = 1;
  }
}


void __fastcall ShopRootComponent__DeleteContinueData(const MethodInfo *method)
{
  if ( (byte_4A57803 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_12864/*"SpecialItemHelp"*/);
    sub_1B885B0(&StringLiteral_12744/*"Shop15Help"*/);
    sub_1B885B0(&StringLiteral_2378/*"AnonymousHelp"*/);
    sub_1B885B0(&StringLiteral_11149/*"RarePriHelp"*/);
    byte_4A57803 = 1;
  }
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_2378/*"AnonymousHelp"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11149/*"RarePriHelp"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_12864/*"SpecialItemHelp"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_12744/*"Shop15Help"*/, 0LL);
}


void __fastcall ShopRootComponent__DeleteJumpInfoOnInit(
        ShopRootComponent_o *this,
        int32_t state,
        const MethodInfo *method)
{
  int32_t v3; // w3

  if ( state == 9 )
  {
    this->fields.jumpInfo = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.jumpInfo, 0, (int32_t)method, v3);
  }
}


void __fastcall ShopRootComponent__EndLimitCountSealInfoDialog(ShopRootComponent_o *this, const MethodInfo *method)
{
  SummonInfoDlgComponent_o *limitCountSealInfoDlg; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  struct ShopSceneListViewControlHelper_o *listViewHelper; // x8
  ShopBuyItemListViewItem_o *Item; // x0
  const MethodInfo *v8; // x4

  if ( (byte_4A57812 & 1) == 0 )
  {
    sub_1B885B0(&Method_ShopRootComponent_EndLimitCountSealInfoDialog__);
    byte_4A57812 = 1;
  }
  limitCountSealInfoDlg = this->fields.limitCountSealInfoDlg;
  if ( !limitCountSealInfoDlg )
    goto LABEL_9;
  SummonInfoDlgComponent__Close(limitCountSealInfoDlg, 0LL, 0LL);
  v4 = Method_ShopRootComponent_EndLimitCountSealInfoDialog__;
  if ( (*((_BYTE *)Method_ShopRootComponent_EndLimitCountSealInfoDialog__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1B885C8(Method_ShopRootComponent_EndLimitCountSealInfoDialog__);
  v5 = (System_Reflection_MethodBase_o *)sub_1B88594(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
  listViewHelper = this->fields.listViewHelper;
  if ( !listViewHelper
    || (limitCountSealInfoDlg = (SummonInfoDlgComponent_o *)listViewHelper->fields.buyItemListViewManager) == 0LL )
  {
LABEL_9:
    sub_1B8880C(limitCountSealInfoDlg, method);
  }
  Item = ShopBuyItemListViewManager__GetItem(
           (ShopBuyItemListViewManager_o *)limitCountSealInfoDlg,
           this->fields.limitCountSealInfoIndex,
           0LL);
  ShopRootComponent__OpenConfirmMenu(this, this->fields.state, Item, this->fields.limitCountSealInfoBulk, v8);
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

  if ( (byte_4A57826 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_int__TypeInfo);
    sub_1B885B0(&Method_ShopRootComponent_EndSellResultServant__);
    sub_1B885B0(&StringLiteral_22055/*"ng"*/);
    byte_4A57826 = 1;
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
  v8 = System_String__op_Equality(result, (System_String_o *)StringLiteral_22055/*"ng"*/, 0LL);
  ServantSellConfirmKindOnRequestEnd = ServantSellConfirmMenu__GetServantSellConfirmKindOnRequestEnd(tabKind, v8, 0LL);
  servantSellConfirmMenu = this->fields.servantSellConfirmMenu;
  selectedServantIds = this->fields.selectedServantIds;
  selectedCommandCodeIds = this->fields.selectedCommandCodeIds;
  v13 = ServantSellConfirmKindOnRequestEnd;
  v14 = (System_Action_int__o *)sub_1B887FC(System_Action_int__TypeInfo);
  System_Action_int____ctor(v14, (Il2CppObject *)this, Method_ShopRootComponent_EndSellResultServant__, 0LL);
  if ( !servantSellConfirmMenu )
LABEL_8:
    sub_1B8880C(servantSellMenu, result);
  ServantSellConfirmMenu__Open(servantSellConfirmMenu, v13, selectedServantIds, selectedCommandCodeIds, v14, 0LL);
  ShopRootComponent__RefreshInfo(this, v15);
}


void __fastcall ShopRootComponent__EndRequestShop(
        ShopRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  ShopBuyItemListViewManager_o *buyItemListViewManager; // x0
  const MethodInfo *v6; // x1
  struct ShopSceneListViewControlHelper_o *listViewHelper; // x8
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x3
  int32_t state; // w8
  const MethodInfo *v11; // x1
  struct ShopEntity_o *clipRange; // x2

  if ( (byte_4A5781B & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_22055/*"ng"*/);
    byte_4A5781B = 1;
  }
  buyItemListViewManager = (ShopBuyItemListViewManager_o *)System_String__op_Equality(
                                                             result,
                                                             (System_String_o *)StringLiteral_22055/*"ng"*/,
                                                             0LL);
  if ( ((unsigned __int8)buyItemListViewManager & 1) != 0 )
  {
    ShopRootComponent__RequestEnd(this, v6);
    return;
  }
  listViewHelper = this->fields.listViewHelper;
  if ( !listViewHelper )
    goto LABEL_17;
  buyItemListViewManager = listViewHelper->fields.buyItemListViewManager;
  if ( !buyItemListViewManager )
    goto LABEL_17;
  buyItemListViewManager = (ShopBuyItemListViewManager_o *)ShopBuyItemListViewManager__GetItem(
                                                             buyItemListViewManager,
                                                             this->fields.selectedItemIndex,
                                                             0LL);
  if ( !buyItemListViewManager )
    goto LABEL_17;
  state = this->fields.state;
  v6 = (const MethodInfo *)buyItemListViewManager;
  if ( (unsigned int)(state - 11) < 2 )
  {
    ShopRootComponent__ShowStorageDialog(this, (ShopBuyItemListViewItem_o *)buyItemListViewManager, v8);
    goto LABEL_12;
  }
  if ( state != 14 )
  {
    clipRange = (struct ShopEntity_o *)buyItemListViewManager->fields.clipRange;
    if ( clipRange )
    {
      if ( clipRange->fields.purchaseType == 5 )
        ShopRootComponent__ShowSetItemDialog(
          this,
          *(ShopEntity_o **)&buyItemListViewManager->fields.clipRange,
          (const MethodInfo *)clipRange);
      else
        ShopRootComponent__ShowNormalItemDialog(
          this,
          (ShopBuyItemListViewItem_o *)buyItemListViewManager,
          clipRange,
          v9);
      goto LABEL_12;
    }
LABEL_17:
    sub_1B8880C(buyItemListViewManager, v6);
  }
  ShopRootComponent__PlayLvExceedItemReleaseEffect(this, (ShopBuyItemListViewItem_o *)buyItemListViewManager, v8);
LABEL_12:
  ShopRootComponent__RefreshInfo(this, v11);
}


int32_t __fastcall ShopRootComponent__GetCurrency(
        ShopRootComponent_o *this,
        ShopEntity_o *shopEntity,
        const MethodInfo *method)
{
  int32_t result; // w0
  Il2CppObject *Master_object; // x20
  int64_t UserId; // x21

  if ( (byte_4A57831 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    this = (ShopRootComponent_o *)sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A57831 = 1;
  }
  if ( !shopEntity )
LABEL_20:
    sub_1B8880C(this, shopEntity);
  result = 0;
  switch ( shopEntity->fields.payType )
  {
    case 1:
      this = (ShopRootComponent_o *)UserGameMaster__getSelfUserGame(0LL);
      if ( !this )
        goto LABEL_20;
      result = (int32_t)this->fields.ApSeedBulkExchangeConfirmMenu;
      break;
    case 2:
      this = (ShopRootComponent_o *)UserGameMaster__getSelfUserGame(0LL);
      if ( !this )
        goto LABEL_20;
      result = (int32_t)this->fields.topListViewManager;
      break;
    case 4:
      this = (ShopRootComponent_o *)UserGameMaster__getSelfUserGame(0LL);
      if ( !this )
        goto LABEL_20;
      result = (int32_t)this->fields.servantSellMenu;
      break;
    case 6:
    case 8:
    case 9:
    case 0xB:
    case 0xC:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserItemMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      UserId = NetworkManager__get_UserId(0LL);
      this = (ShopRootComponent_o *)ShopEntity__GetItemID(shopEntity, 0LL);
      if ( !Master_object )
        goto LABEL_20;
      this = (ShopRootComponent_o *)UserItemMaster__GetEntityDefinitely(
                                      (UserItemMaster_o *)Master_object,
                                      UserId,
                                      (int32_t)this,
                                      0LL);
      if ( !this )
        goto LABEL_20;
      result = HIDWORD(this->fields.m_CancellationTokenSource);
      break;
    case 0xA:
      this = (ShopRootComponent_o *)UserGameMaster__getSelfUserGame(0LL);
      if ( !this )
        goto LABEL_20;
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
    return dword_BEDBDC[state - 1];
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
        sub_1B88814(CommonConsumeEntities, item);
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
    sub_1B8880C(this, item);
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

  if ( (byte_4A57817 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A57817 = 1;
  }
  if ( !selectServantIds )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_14:
    sub_1B8880C(Instance, v5);
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
  v6 = *(_QWORD *)&selectServantIds->max_length;
  if ( (int)v6 < 1 )
    return 0;
  v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v8 = 0LL;
  while ( 1 )
  {
    if ( v8 >= (unsigned int)v6 )
      sub_1B88814(Instance, v5);
    if ( !v7 )
      goto LABEL_14;
    Instance = DataMasterBase_object__object__long___GetEntity(
                 v7,
                 selectServantIds->m_Items[v8],
                 (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
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

  if ( (byte_4A57813 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A57813 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !item || (Shop_k__BackingField = item->fields._Shop_k__BackingField) == 0LL || !MasterData_object )
LABEL_12:
    sub_1B8880C(Instance, v5);
  EntityDefinitely = UserShopMaster__GetEntityDefinitely(
                       (UserShopMaster_o *)MasterData_object,
                       (int64_t)Instance,
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

  if ( (byte_4A5783B & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_8843/*"ManaPrism"*/);
    sub_1B885B0(&StringLiteral_7066/*"GrailFragments"*/);
    sub_1B885B0(&StringLiteral_14545/*"TradeAp"*/);
    sub_1B885B0(&StringLiteral_8359/*"LeafExchange"*/);
    sub_1B885B0(&StringLiteral_10808/*"PurePrismExchange"*/);
    sub_1B885B0(&StringLiteral_6188/*"EventItem"*/);
    sub_1B885B0(&StringLiteral_4557/*"CoinRoom"*/);
    sub_1B885B0(&StringLiteral_12990/*"StoneFragments"*/);
    sub_1B885B0(&StringLiteral_11150/*"RarePrism"*/);
    sub_1B885B0(&StringLiteral_12586/*"SellServant"*/);
    byte_4A5783B = 1;
  }
  v6 = PrivateImplementationDetails___ComputeStringHash(jumpInfoName, 0LL);
  if ( v6 <= 0xBD992A97 )
  {
    if ( v6 > 0x897BAECB )
    {
      if ( v6 == -1542091583 )
      {
        if ( System_String__op_Equality(jumpInfoName, (System_String_o *)StringLiteral_10808/*"PurePrismExchange"*/, 0LL) )
          return 18;
      }
      else if ( v6 == -1477675373 )
      {
        if ( System_String__op_Equality(jumpInfoName, (System_String_o *)StringLiteral_7066/*"GrailFragments"*/, 0LL) )
          return 14;
      }
      else if ( v6 == -1114035561
             && System_String__op_Equality(jumpInfoName, (System_String_o *)StringLiteral_4557/*"CoinRoom"*/, 0LL) )
      {
        return 17;
      }
    }
    else if ( v6 == -1988383029 )
    {
      if ( System_String__op_Equality(jumpInfoName, (System_String_o *)StringLiteral_12990/*"StoneFragments"*/, 0LL) )
        return 4;
    }
    else if ( v6 == 1526818832 && System_String__op_Equality(jumpInfoName, (System_String_o *)StringLiteral_8359/*"LeafExchange"*/, 0LL) )
    {
      return 20;
    }
    return 1;
  }
  if ( v6 <= 0xCD42BE08 )
  {
    if ( v6 == -1075479726 )
    {
      if ( System_String__op_Equality(jumpInfoName, (System_String_o *)StringLiteral_12586/*"SellServant"*/, 0LL) )
        return 9;
    }
    else if ( v6 == -851263992 && System_String__op_Equality(jumpInfoName, (System_String_o *)StringLiteral_14545/*"TradeAp"*/, 0LL) )
    {
      return 19;
    }
    return 1;
  }
  if ( v6 == -74236182 )
  {
    if ( System_String__op_Equality(jumpInfoName, (System_String_o *)StringLiteral_11150/*"RarePrism"*/, 0LL) )
      return 3;
    return 1;
  }
  if ( v6 != -472076328 )
  {
    if ( v6 == -490311229 && System_String__op_Equality(jumpInfoName, (System_String_o *)StringLiteral_8843/*"ManaPrism"*/, 0LL) )
      return 2;
    return 1;
  }
  if ( !System_String__op_Equality(jumpInfoName, (System_String_o *)StringLiteral_6188/*"EventItem"*/, 0LL) )
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
  ShopBuyItemListViewManager_o *buyItemListViewManager; // x22
  UnityEngine_GameObject_o *buyItemListViewBase; // x25
  UnityEngine_GameObject_o *topListViewBase; // x27
  ShopEventListViewManager_o *eventListViewManager; // x26
  ServantSellMenu_o *servantSellMenu; // x20
  ShopHelpListViewManager_o *helpListViewManager; // x21
  UnityEngine_GameObject_o *helpListViewBase; // x28
  ShopSceneListViewControlHelper_o *v15; // x29
  struct ShopSceneListViewControlHelper_o **p_listViewHelper; // x21
  int32_t v17; // w2
  int32_t v18; // w3
  __int64 v19; // x1
  const MethodInfo *v20; // x5
  ShopSceneListViewControlHelper_o *listViewHelper; // x0
  ShopSceneListViewControlHelper_o *v22; // x23
  System_Action_o *v23; // x24
  System_Action_T__o *v24; // x25
  System_Action_int__o *v25; // x26
  System_Action_int__o *v26; // x27
  System_Action_T1__T2__T3__o *v27; // x28
  System_Action_o *v28; // x29
  const MethodInfo *v29; // x7
  ShopRootComponent_o *v30; // x0
  const MethodInfo *v31; // x3
  unsigned int StateOnInit; // w0
  const MethodInfo *v33; // x4
  int32_t v34; // w8
  _BOOL4 isFromCoinRoom; // w9
  float v36; // s0
  const MethodInfo *v37; // x3
  int32_t v38; // w2
  int32_t v39; // w3
  UnityEngine_GameObject_o *gameObject; // x20
  System_Action_int__o *v41; // x21
  const MethodInfo *v42; // [xsp+18h] [xbp-88h]
  System_String_o *jumpInfoName; // [xsp+28h] [xbp-78h]
  int32_t eventId; // [xsp+34h] [xbp-6Ch]
  UnityEngine_GameObject_o *eventListViewBase; // [xsp+38h] [xbp-68h]

  if ( (byte_4A57808 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_ShopRootConstants_State__TypeInfo);
    sub_1B885B0(&System_Action_int__TypeInfo);
    sub_1B885B0(&System_Action_ServantSellMenu_ResultKind__long____long____TypeInfo);
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_ShopRootComponent_OnMoveEnd__);
    sub_1B885B0(&Method_ShopRootComponent_OnSelectBuyItem__);
    sub_1B885B0(&Method_ShopRootComponent_OnSelectEvent__);
    sub_1B885B0(&Method_ShopRootComponent_OnSelectSellServant__);
    sub_1B885B0(&Method_ShopRootComponent_OnSelectTop__);
    sub_1B885B0(&Method_ShopRootComponent_OpenHelp__);
    sub_1B885B0(&Method_ShopRootComponent__Init_b__71_0__);
    sub_1B885B0(&ShopSceneListViewControlHelper_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A57808 = 1;
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
    v15 = (ShopSceneListViewControlHelper_o *)sub_1B887FC(ShopSceneListViewControlHelper_TypeInfo);
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
      v42);
    p_listViewHelper = &this->fields.listViewHelper;
    this->fields.listViewHelper = v15;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.listViewHelper, (int32_t)v15, v17, v18);
    listViewHelper = this->fields.listViewHelper;
    if ( !listViewHelper )
      goto LABEL_19;
    ShopSceneListViewControlHelper__SetOtherObjects(
      listViewHelper,
      this->fields.titleInfo,
      this->fields.standFigureBack,
      this->fields.giftButtonControl,
      this->fields.backgroundTexture,
      v20);
    v22 = this->fields.listViewHelper;
    v23 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v23, (Il2CppObject *)this, Method_ShopRootComponent_OnMoveEnd__, 0LL);
    v24 = (System_Action_T__o *)sub_1B887FC(System_Action_ShopRootConstants_State__TypeInfo);
    System_Action_Int32Enum____ctor(v24, (Il2CppObject *)this, (intptr_t)Method_ShopRootComponent_OnSelectTop__, 0LL);
    v25 = (System_Action_int__o *)sub_1B887FC(System_Action_int__TypeInfo);
    System_Action_int____ctor(v25, (Il2CppObject *)this, (intptr_t)Method_ShopRootComponent_OnSelectEvent__, 0LL);
    v26 = (System_Action_int__o *)sub_1B887FC(System_Action_int__TypeInfo);
    System_Action_int____ctor(v26, (Il2CppObject *)this, (intptr_t)Method_ShopRootComponent_OnSelectBuyItem__, 0LL);
    v27 = (System_Action_T1__T2__T3__o *)sub_1B887FC(System_Action_ServantSellMenu_ResultKind__long____long____TypeInfo);
    System_Action_Int32Enum__object__object____ctor(
      v27,
      (Il2CppObject *)this,
      Method_ShopRootComponent_OnSelectSellServant__,
      0LL);
    v28 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v28, (Il2CppObject *)this, Method_ShopRootComponent_OpenHelp__, 0LL);
    if ( !v22 )
      goto LABEL_19;
    ShopSceneListViewControlHelper__SetCallbackEvents(
      v22,
      v23,
      (System_Action_ShopRootConstants_State__o *)v24,
      v25,
      v26,
      (System_Action_ServantSellMenu_ResultKind__long____long____o *)v27,
      v28,
      v29);
    StateOnInit = ShopRootComponent__GetStateOnInit(v30, jumpInfoName, eventId, v31);
    v19 = StateOnInit;
    this->fields.state = StateOnInit;
    v34 = StateOnInit - 1 > 0x13 ? 0 : dword_BEDBDC[StateOnInit - 1];
    isFromCoinRoom = this->fields.isFromCoinRoom;
    this->fields.inputState = v34;
    v36 = isFromCoinRoom ? this->fields.saveScrollBarValue : -1.0;
    listViewHelper = *p_listViewHelper;
    if ( !*p_listViewHelper )
LABEL_19:
      sub_1B8880C(listViewHelper, v19);
    ShopSceneListViewControlHelper__SetListViewOnSceneInit(
      listViewHelper,
      v19,
      eventId,
      v36,
      &this->fields.selectedEventIndex,
      v33);
    ShopRootComponent__OpenEventItemWindow(this, this->fields.state, eventId, v37);
    if ( this->fields.state == 9 )
    {
      this->fields.jumpInfo = 0LL;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.jumpInfo, 0, v38, v39);
    }
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v41 = (System_Action_int__o *)sub_1B887FC(System_Action_int__TypeInfo);
    System_Action_int____ctor(v41, (Il2CppObject *)this, Method_ShopRootComponent__Init_b__71_0__, 0LL);
    StoneCountRefreshComponent__AttachToGameObject(gameObject, v41, 0, 0LL);
  }
}


void __fastcall ShopRootComponent__LoadBanner(ShopRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  ShopRootComponent_o *v8; // x0
  const MethodInfo *v9; // x3
  struct SceneJumpInfo_o *jumpInfo; // x8
  int32_t id; // w2
  System_String_o **p_name; // x8
  System_Action_o *v13; // x19

  if ( (byte_4A57807 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_ShopRootComponent___c__DisplayClass68_0__LoadBanner_b__0__);
    sub_1B885B0(&ShopRootComponent___c__DisplayClass68_0_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A57807 = 1;
  }
  v3 = sub_1B887FC(ShopRootComponent___c__DisplayClass68_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  if ( !v3 )
    sub_1B8880C(v4, v5);
  *(_QWORD *)(v3 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 16), (int32_t)this, v6, v7);
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
  *(_DWORD *)(v3 + 24) = ShopRootComponent__GetStateOnInit(v8, *p_name, id, v9);
  v13 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)v3, Method_ShopRootComponent___c__DisplayClass68_0__LoadBanner_b__0__, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadOutGameAtlas(v13, 0LL);
}


void __fastcall ShopRootComponent__MenuBackFromStonePurchase(
        ShopRootComponent_o *this,
        int32_t result,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  ShopSceneListViewControlHelper_o *listViewHelper; // x22
  int32_t v9; // w21
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x1

  if ( (byte_4A5783E & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5783E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || ((CommonUI__CloseStonePurchaseMenu((CommonUI_o *)Instance, 0LL),
         listViewHelper = this->fields.listViewHelper,
         this->fields.state != 8)
      ? (v9 = 1)
      : (v9 = 7),
        this->fields.state = v9,
        this->fields.inputState = 2,
        !listViewHelper) )
  {
    sub_1B8880C(Instance, v6);
  }
  ShopSceneListViewControlHelper__SetTopListViewInput(listViewHelper, v9, v7);
  ShopSceneListViewControlHelper__SetHelpButtonEnable(listViewHelper, v9, v10);
  if ( result == 2 )
    ShopRootComponent__RefreshInfo(this, v11);
}


void __fastcall ShopRootComponent__OnClickBack(ShopRootComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x2

  if ( (byte_4A5782D & 1) == 0 )
  {
    sub_1B885B0(&Method_ShopRootComponent_OnClickBack__);
    byte_4A5782D = 1;
  }
  if ( this->fields.inputState == 2 )
  {
    v3 = Method_ShopRootComponent_OnClickBack__;
    if ( (*((_BYTE *)Method_ShopRootComponent_OnClickBack__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_ShopRootComponent_OnClickBack__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    if ( !ShopRootComponent__BackScene(this, this->fields.state, v5) )
      ShopRootComponent__BackMenu(this, this->fields.state, v6);
  }
}


void __fastcall ShopRootComponent__OnClickHelp(ShopRootComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4A57827 & 1) == 0 )
  {
    sub_1B885B0(&Method_ShopRootComponent_OnClickHelp__);
    byte_4A57827 = 1;
  }
  v3 = Method_ShopRootComponent_OnClickHelp__;
  if ( (*((_BYTE *)Method_ShopRootComponent_OnClickHelp__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_ShopRootComponent_OnClickHelp__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
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

  if ( (byte_4A5782A & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_ShopRootComponent_CheckTutorial__);
    sub_1B885B0(&Method_ShopRootComponent_OnClickHelpClose__);
    byte_4A5782A = 1;
  }
  state = this->fields.state;
  if ( state > 0x14 || ((1 << state) & 0x100068) == 0 )
  {
    v4 = Method_ShopRootComponent_OnClickHelpClose__;
    if ( (*((_BYTE *)Method_ShopRootComponent_OnClickHelpClose__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1B885C8(Method_ShopRootComponent_OnClickHelpClose__);
    v5 = (System_Reflection_MethodBase_o *)sub_1B88594(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
    helpListViewManager = this->fields.helpListViewManager;
    v7 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v7, (Il2CppObject *)this, Method_ShopRootComponent_CheckTutorial__, 0LL);
    if ( !helpListViewManager )
      sub_1B8880C(v8, v9);
    ShopHelpListViewManager__CloseHelpDialog(helpListViewManager, v7, 0LL);
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

  if ( (byte_4A57824 & 1) == 0 )
  {
    sub_1B885B0(&BgmManager_TypeInfo);
    sub_1B885B0(&SoundManager_TypeInfo);
    byte_4A57824 = 1;
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
  struct ShopSceneListViewControlHelper_o *listViewHelper; // x8
  ShopEntity_o *okBtnLabel; // x20
  const MethodInfo *v7; // x2
  System_String_o *monitor; // x20
  ScriptManager_CallbackFunc_o *v9; // x21
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A57820 & 1) == 0 )
  {
    sub_1B885B0(&ScriptManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ShopScriptMaster___);
    sub_1B885B0(&Method_DataMasterBase_ShopScriptMaster__ShopScriptEntity__int__TryGetEntity__);
    sub_1B885B0(&ScriptManager_TypeInfo);
    sub_1B885B0(&Method_ShopRootComponent_OnEndPlayScriptRequestShop__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A57820 = 1;
  }
  entity = 0LL;
  requestResultDialog = this->fields.requestResultDialog;
  if ( !requestResultDialog )
    goto LABEL_21;
  RequestResultDialog__Close(requestResultDialog, 0LL);
  listViewHelper = this->fields.listViewHelper;
  if ( !listViewHelper )
    goto LABEL_21;
  requestResultDialog = (RequestResultDialog_o *)listViewHelper->fields.buyItemListViewManager;
  if ( !requestResultDialog )
    goto LABEL_21;
  requestResultDialog = (RequestResultDialog_o *)ShopBuyItemListViewManager__GetItem(
                                                   (ShopBuyItemListViewManager_o *)requestResultDialog,
                                                   this->fields.selectedItemIndex,
                                                   0LL);
  if ( !requestResultDialog )
    goto LABEL_21;
  okBtnLabel = (ShopEntity_o *)requestResultDialog->fields.okBtnLabel;
  requestResultDialog = (RequestResultDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !requestResultDialog )
    goto LABEL_21;
  requestResultDialog = (RequestResultDialog_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)requestResultDialog,
                                                   (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ShopScriptMaster___);
  if ( !okBtnLabel || !requestResultDialog )
    goto LABEL_21;
  requestResultDialog = (RequestResultDialog_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)requestResultDialog,
                                                   &entity,
                                                   okBtnLabel->fields.id,
                                                   (const MethodInfo_311D988 *)Method_DataMasterBase_ShopScriptMaster__ShopScriptEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)requestResultDialog & 1) == 0 )
    goto LABEL_13;
  if ( !entity )
    goto LABEL_21;
  requestResultDialog = (RequestResultDialog_o *)System_String__IsNullOrEmpty((System_String_o *)entity[2].monitor, 0LL);
  if ( ((unsigned __int8)requestResultDialog & 1) != 0 )
  {
LABEL_13:
    if ( okBtnLabel->fields.purchaseType == 14 )
      ShopRootComponent__PlayServantCostumeReleaseEffect(this, okBtnLabel, v7);
    else
      ShopRootComponent__RequestEnd(this, (const MethodInfo *)isOk);
    return;
  }
  if ( !entity )
LABEL_21:
    sub_1B8880C(requestResultDialog, isOk);
  monitor = (System_String_o *)entity[2].monitor;
  v9 = (ScriptManager_CallbackFunc_o *)sub_1B887FC(ScriptManager_CallbackFunc_TypeInfo);
  ScriptManager_CallbackFunc___ctor(
    v9,
    (Il2CppObject *)this,
    Method_ShopRootComponent_OnEndPlayScriptRequestShop__,
    0LL);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__PlayShop(monitor, v9, 0, 0LL);
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

  if ( (byte_4A57821 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_ShopRootComponent_OnEndFadeRequestShop__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A57821 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_ShopRootComponent_OnEndFadeRequestShop__, 0LL);
  if ( !Instance )
    sub_1B8880C(v6, v7);
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

  if ( (byte_4A57823 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AvalonSceneManager_TypeInfo);
    sub_1B885B0(&Method_ShopRootComponent_RequestEnd__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A57823 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = AvalonSceneManager_TypeInfo;
  v5 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v4 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v4->static_fields->DEFAULT_FADE_TIME;
  v7 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_ShopRootComponent_RequestEnd__, 0LL);
  if ( !v5 )
    sub_1B8880C(v8, v9);
  CommonUI__maskFadein(v5, DEFAULT_FADE_TIME, v7, 0LL);
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
    sub_1B8880C(0LL, count);
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
  ShopSceneListViewControlHelper_o *BuyItemKind; // x0
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x3
  int32_t v8; // w21

  ShopRootComponent__RefreshInfo(this, (const MethodInfo *)receivedNewServant);
  currencyInfoController = this->fields.currencyInfoController;
  BuyItemKind = (ShopSceneListViewControlHelper_o *)ShopBuyItemListViewManager__GetBuyItemKind(this->fields.state, 0LL);
  if ( !this->fields.listViewHelper
    || (v8 = (int)BuyItemKind,
        BuyItemKind = (ShopSceneListViewControlHelper_o *)ShopSceneListViewControlHelper__GetEventId(
                                                            this->fields.listViewHelper,
                                                            this->fields.state,
                                                            this->fields.selectedEventIndex,
                                                            v7),
        !currencyInfoController)
    || (ShopCurrencyInfoController__RefreshEventItemWindow(currencyInfoController, v8, (int32_t)BuyItemKind, 0, 0LL),
        (BuyItemKind = this->fields.listViewHelper) == 0LL) )
  {
    sub_1B8880C(BuyItemKind, v6);
  }
  ShopSceneListViewControlHelper__SetListViewInvalidate(BuyItemKind, v6);
  return 1;
}


void __fastcall ShopRootComponent__OnGiftOpen(ShopRootComponent_o *this, const MethodInfo *method)
{
  ShopPlayVoiceComponent_o *shopPlayVoiceComponent; // x0

  shopPlayVoiceComponent = this->fields.shopPlayVoiceComponent;
  if ( !shopPlayVoiceComponent )
    sub_1B8880C(0LL, method);
  ShopPlayVoiceComponent__StopVoice(shopPlayVoiceComponent, method);
}


void __fastcall ShopRootComponent__OnInitEnd(ShopRootComponent_o *this, int32_t state, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  ShopSceneListViewControlHelper_o *listViewHelper; // x0

  if ( this->fields.inputState == 1 )
  {
    listViewHelper = this->fields.listViewHelper;
    if ( !listViewHelper )
      sub_1B8880C(0LL, state);
    ShopSceneListViewControlHelper__SetListViewOnStateInitEnd(
      listViewHelper,
      state,
      this->fields.selectedEventIndex,
      v3);
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
  const MethodInfo *v3; // x4
  ShopSceneListViewControlHelper_o *listViewHelper; // x0
  int32_t v6; // w2

  if ( this->fields.inputState == 4 )
  {
    listViewHelper = this->fields.listViewHelper;
    if ( state == 8 )
      v6 = 7;
    else
      v6 = 1;
    this->fields.state = v6;
    if ( !listViewHelper )
      sub_1B8880C(0LL, state);
    ShopSceneListViewControlHelper__SetListViewOnStateQuitEnd(
      listViewHelper,
      state,
      v6,
      this->fields.selectedEventIndex,
      v3);
    this->fields.inputState = 2;
  }
}


void __fastcall ShopRootComponent__OnSelectBuyItem(ShopRootComponent_o *this, int32_t index, const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  ShopBuyItemListViewManager_o *buyItemListViewManager; // x0
  __int64 v8; // x1
  struct ShopSceneListViewControlHelper_o *listViewHelper; // x8
  ShopBuyItemListViewItem_o *Item; // x0
  const MethodInfo *v11; // x2
  bool IsBulk; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4A57830 & 1) == 0 )
  {
    sub_1B885B0(&Method_ShopRootComponent_OnSelectBuyItem__);
    byte_4A57830 = 1;
  }
  if ( this->fields.inputState == 2 )
  {
    this->fields.inputState = 0;
    v5 = Method_ShopRootComponent_OnSelectBuyItem__;
    if ( (*((_BYTE *)Method_ShopRootComponent_OnSelectBuyItem__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B885C8(Method_ShopRootComponent_OnSelectBuyItem__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B88594(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    listViewHelper = this->fields.listViewHelper;
    this->fields.selectedItemIndex = index;
    if ( !listViewHelper || (buyItemListViewManager = listViewHelper->fields.buyItemListViewManager) == 0LL )
      sub_1B8880C(buyItemListViewManager, v8);
    Item = ShopBuyItemListViewManager__GetItem(buyItemListViewManager, index, 0LL);
    IsBulk = ShopRootComponent__GetIsBulk((ShopRootComponent_o *)Item, Item, v11);
    ShopRootComponent__SelectItem(this, index, IsBulk, v13);
  }
}


void __fastcall ShopRootComponent__OnSelectEvent(ShopRootComponent_o *this, int32_t index, const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  Il2CppObject *eventListViewManager; // x0
  __int64 v8; // x1
  struct ShopSceneListViewControlHelper_o *listViewHelper; // x8
  ShopEventListViewItem_o *Item; // x20
  const MethodInfo *v11; // x2
  int32_t eventId; // w21
  SceneJumpInfo_o *v13; // x19

  if ( (byte_4A57832 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1B885B0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_1B885B0(&SceneJumpInfo_TypeInfo);
    sub_1B885B0(&Method_ShopRootComponent_OnSelectEvent__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_9528/*"NormalEventShop"*/);
    byte_4A57832 = 1;
  }
  v5 = Method_ShopRootComponent_OnSelectEvent__;
  if ( (*((_BYTE *)Method_ShopRootComponent_OnSelectEvent__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1B885C8(Method_ShopRootComponent_OnSelectEvent__);
  v6 = (System_Reflection_MethodBase_o *)sub_1B88594(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
  listViewHelper = this->fields.listViewHelper;
  this->fields.selectedEventIndex = index;
  if ( !listViewHelper )
    goto LABEL_17;
  eventListViewManager = (Il2CppObject *)listViewHelper->fields.eventListViewManager;
  if ( !eventListViewManager )
    goto LABEL_17;
  Item = ShopEventListViewManager__GetItem((ShopEventListViewManager_o *)eventListViewManager, index, 0LL);
  eventListViewManager = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !eventListViewManager )
    goto LABEL_17;
  eventListViewManager = DataManager__GetMasterData_object_(
                           (DataManager_o *)eventListViewManager,
                           (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Item )
    goto LABEL_17;
  if ( !eventListViewManager )
    goto LABEL_17;
  eventListViewManager = DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)eventListViewManager,
                           Item->fields.eventId,
                           (const MethodInfo_311D934 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  if ( !eventListViewManager )
    goto LABEL_17;
  if ( EventDetailEntity__IsEventShop((EventDetailEntity_o *)eventListViewManager, 0LL) )
  {
    eventId = Item->fields.eventId;
    v13 = (SceneJumpInfo_o *)sub_1B887FC(SceneJumpInfo_TypeInfo);
    SceneJumpInfo___ctor_38664432(v13, (System_String_o *)StringLiteral_9528/*"NormalEventShop"*/, eventId, 0LL);
    if ( v13 )
    {
      SceneJumpInfo__SetReturnNowScene(v13, 0LL);
      eventListViewManager = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( eventListViewManager )
      {
        CommonUI__CheckChangeOtherConnectMarkFromEventId(
          (CommonUI_o *)eventListViewManager,
          Item->fields.eventId,
          1,
          0LL);
        eventListViewManager = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( eventListViewManager )
        {
          AvalonSceneManager__transitionScene(
            (AvalonSceneManager_o *)eventListViewManager,
            72,
            1,
            (Il2CppObject *)v13,
            0LL);
          return;
        }
      }
    }
LABEL_17:
    sub_1B8880C(eventListViewManager, v8);
  }
  ShopRootComponent__SelectMenu(this, 8, v11);
}


void __fastcall ShopRootComponent__OnSelectSellServant(
        ShopRootComponent_o *this,
        int32_t kind,
        System_Int64_array *servantList,
        System_Int64_array *commandCodeList,
        const MethodInfo *method)
{
  int32_t v8; // w2
  int32_t v9; // w3
  const MethodInfo *v10; // x1

  if ( this->fields.inputState == 2 )
  {
    this->fields.selectedServantIds = servantList;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields.selectedServantIds,
      (int32_t)servantList,
      (int32_t)servantList,
      (int32_t)commandCodeList);
    this->fields.selectedCommandCodeIds = commandCodeList;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields.selectedCommandCodeIds,
      (int32_t)commandCodeList,
      v8,
      v9);
    if ( kind == 1 )
      ShopRootComponent__CheckSellServantExceeded(this, v10);
  }
}


void __fastcall ShopRootComponent__OnSelectTop(ShopRootComponent_o *this, int32_t state, const MethodInfo *method)
{
  ShopRootConstants_c *v5; // x0
  bool IsSvtCostumeShopOpen; // w0
  _BOOL4 v7; // w9
  _BOOL4 v8; // w8
  bool IsTargetQuestClear; // w0
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  const MethodInfo *v12; // x2

  if ( (byte_4A5782F & 1) == 0 )
  {
    sub_1B885B0(&CoinRoomUtility_TypeInfo);
    sub_1B885B0(&Method_ShopRootComponent_OnSelectTop__);
    sub_1B885B0(&ShopRootConstants_TypeInfo);
    byte_4A5782F = 1;
  }
  if ( this->fields.inputState == 2 && this->fields.state == 1 )
  {
    if ( state == 17 )
    {
      if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
      IsTargetQuestClear = CoinRoomUtility__IsTargetQuestClear(0LL);
      v8 = 0;
      v7 = !IsTargetQuestClear;
    }
    else if ( state == 15 )
    {
      v5 = ShopRootConstants_TypeInfo;
      if ( !ShopRootConstants_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
      IsSvtCostumeShopOpen = ShopRootConstants__IsSvtCostumeShopOpen((const MethodInfo *)v5);
      v7 = 0;
      v8 = !IsSvtCostumeShopOpen;
    }
    else
    {
      v8 = 0;
      v7 = 0;
    }
    if ( v7 || v8 )
    {
      this->fields.inputState = 1;
      ShopRootComponent__OnInitEnd(this, 1, method);
    }
    else
    {
      v10 = Method_ShopRootComponent_OnSelectTop__;
      if ( (*((_BYTE *)Method_ShopRootComponent_OnSelectTop__ + 83) & 2) != 0 )
        v10 = (_QWORD *)sub_1B885C8(Method_ShopRootComponent_OnSelectTop__);
      v11 = (System_Reflection_MethodBase_o *)sub_1B88594(v10, v10[4]);
      OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
      ShopRootComponent__SelectMenu(this, state, v12);
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
  __int64 v9; // x23
  ShopEntity_o *KindByShopState; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  ShopBuyItemListViewItem_o **v14; // x22
  int32_t v15; // w2
  int32_t v16; // w3
  ShopBuyItemListViewItem_o *v17; // x20
  struct ShopBuyBulkItemConfirmMenu_o *ApSeedBulkExchangeConfirmMenu; // x21
  ShopEntity_o *v19; // x22
  System_Action_int__o *v20; // x23
  int32_t v21; // w4
  ShopBuyBulkItemConfirmMenu_o *v22; // x0
  ShopEntity_o *v23; // x1
  ShopBuyItemListViewItem_o *v24; // x2
  System_Action_int__o *v25; // x3
  ShopBuyItemListViewItem_o *v26; // x8
  struct ShopBuyItemConfirmMenu_o *buyItemConfirmMenu; // x20
  ShopEntity_o *v28; // x21
  int32_t ShopKind_k__BackingField; // w22
  System_Action_int__o *v30; // x23
  ShopBuyItemConfirmMenu_o *v31; // x0
  ShopEntity_o *v32; // x1
  int32_t v33; // w2
  ShopBuyItemConfirmMenu_o *v34; // x20
  ShopBuyItemListViewItem_o *v35; // x21
  System_Action_o *v36; // x0
  __int64 *v37; // x8
  System_Action_o *v38; // x22
  System_Action_int__o *v39; // x23
  int32_t v40; // w21
  const MethodInfo *v41; // x2
  BuyStorageConfirmDialogComponent_o *buyStorageNotificationDialog; // x20
  ShopBuyItemListViewItem_o *v43; // x22
  System_Action_int__o *v44; // x23
  int32_t v45; // w2
  int v46; // w23
  ShopBuyItemListViewItem_o *v47; // x20
  struct ShopBuyBulkItemConfirmMenu_o *buyBulkItemConfirmMenu; // x21
  ShopEntity_o *Shop_k__BackingField; // x22
  System_Action_int__o *v50; // x23
  ShopEntity_o *v51; // x22
  int32_t v52; // w21
  BuyStorageConfirmDialogComponent_o *buyStorageConfirmDialog; // x20
  ShopBuyItemListViewItem_o *v54; // x22
  System_Action_int__o *v55; // x23

  if ( (byte_4A57810 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_int__TypeInfo);
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_ShopRootComponent_CloseStorageDetailCheckConfirm__);
    sub_1B885B0(&Method_ShopRootComponent_SelectedBuyItemConfirm__);
    sub_1B885B0(&Method_ShopRootComponent___c__DisplayClass81_0__OpenConfirmMenu_b__0__);
    sub_1B885B0(&Method_ShopRootComponent___c__DisplayClass81_0__OpenConfirmMenu_b__1__);
    sub_1B885B0(&ShopRootComponent___c__DisplayClass81_0_TypeInfo);
    byte_4A57810 = 1;
  }
  v9 = sub_1B887FC(ShopRootComponent___c__DisplayClass81_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_50;
  *(_QWORD *)(v9 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)this, v12, v13);
  *(_QWORD *)(v9 + 24) = item;
  v14 = (ShopBuyItemListViewItem_o **)(v9 + 24);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 24), (int32_t)item, v15, v16);
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
      v26 = *v14;
      if ( !*v14 )
        goto LABEL_50;
      buyItemConfirmMenu = this->fields.buyItemConfirmMenu;
      goto LABEL_13;
    case 3:
    case 15:
      if ( isBulk )
        goto LABEL_6;
      v34 = this->fields.buyItemConfirmMenu;
      v35 = *(ShopBuyItemListViewItem_o **)(v9 + 24);
      v36 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      v37 = &Method_ShopRootComponent___c__DisplayClass81_0__OpenConfirmMenu_b__0__;
      goto LABEL_18;
    case 11:
    case 12:
      KindByShopState = (ShopEntity_o *)BuyStorageConfirmDialogComponent__GetKindByShopState(state, 0LL);
      if ( !*v14 )
        goto LABEL_50;
      v40 = (int)KindByShopState;
      KindByShopState = (*v14)->fields._Shop_k__BackingField;
      if ( !KindByShopState )
        goto LABEL_50;
      KindByShopState = (ShopEntity_o *)ShopEntity__IsSoldOut(KindByShopState, 0LL);
      if ( ((unsigned __int8)KindByShopState & 1) != 0 )
      {
        buyStorageNotificationDialog = this->fields.buyStorageNotificationDialog;
        v43 = *v14;
        v44 = (System_Action_int__o *)sub_1B887FC(System_Action_int__TypeInfo);
        System_Action_int____ctor(v44, (Il2CppObject *)this, Method_ShopRootComponent_SelectedBuyItemConfirm__, 0LL);
        if ( buyStorageNotificationDialog )
        {
          v45 = 1;
LABEL_38:
          BuyStorageConfirmDialogComponent__NotificationDialogOpen(
            buyStorageNotificationDialog,
            v40,
            v45,
            v43,
            v44,
            0LL);
          return;
        }
        goto LABEL_50;
      }
      if ( !*v14 )
        goto LABEL_50;
      KindByShopState = (ShopEntity_o *)ShopRootComponent__GetCurrency(
                                          (ShopRootComponent_o *)KindByShopState,
                                          (*v14)->fields._Shop_k__BackingField,
                                          v41);
      if ( !*v14 )
        goto LABEL_50;
      v46 = (int)KindByShopState;
      KindByShopState = (*v14)->fields._Shop_k__BackingField;
      if ( !KindByShopState )
        goto LABEL_50;
      KindByShopState = (ShopEntity_o *)ShopEntity__GetPrice(KindByShopState, 0LL);
      if ( v46 < (int)KindByShopState )
      {
        buyStorageNotificationDialog = this->fields.buyStorageNotificationDialog;
        v43 = *v14;
        v44 = (System_Action_int__o *)sub_1B887FC(System_Action_int__TypeInfo);
        System_Action_int____ctor(v44, (Il2CppObject *)this, Method_ShopRootComponent_SelectedBuyItemConfirm__, 0LL);
        if ( buyStorageNotificationDialog )
        {
          v45 = 2;
          goto LABEL_38;
        }
LABEL_50:
        sub_1B8880C(KindByShopState, v11);
      }
      if ( isBulk )
      {
        v47 = *v14;
        if ( !*v14 )
          goto LABEL_50;
        buyBulkItemConfirmMenu = this->fields.buyBulkItemConfirmMenu;
        Shop_k__BackingField = v47->fields._Shop_k__BackingField;
        v50 = (System_Action_int__o *)sub_1B887FC(System_Action_int__TypeInfo);
        System_Action_int____ctor(v50, (Il2CppObject *)this, Method_ShopRootComponent_SelectedBuyItemConfirm__, 0LL);
        if ( !buyBulkItemConfirmMenu )
          goto LABEL_50;
        v22 = buyBulkItemConfirmMenu;
        v23 = Shop_k__BackingField;
        v24 = v47;
        v25 = v50;
        v21 = 0;
LABEL_10:
        ShopBuyBulkItemConfirmMenu__Open(v22, v23, v24, v25, v21, 0LL);
        return;
      }
      buyStorageConfirmDialog = this->fields.buyStorageConfirmDialog;
      this->fields.buyCount = 1;
      v54 = *v14;
      v55 = (System_Action_int__o *)sub_1B887FC(System_Action_int__TypeInfo);
      System_Action_int____ctor(
        v55,
        (Il2CppObject *)this,
        Method_ShopRootComponent_CloseStorageDetailCheckConfirm__,
        0LL);
      if ( !buyStorageConfirmDialog )
        goto LABEL_50;
      BuyStorageConfirmDialogComponent__Open(buyStorageConfirmDialog, v40, v54, 1, v55, 0LL);
      return;
    case 19:
      if ( isBulk )
      {
        v17 = *v14;
        if ( !*v14 )
          goto LABEL_50;
        ApSeedBulkExchangeConfirmMenu = this->fields.ApSeedBulkExchangeConfirmMenu;
        goto LABEL_8;
      }
      v26 = *v14;
      if ( !*v14 )
        goto LABEL_50;
      buyItemConfirmMenu = this->fields.ApSeedExchangeConfirmMenu;
LABEL_13:
      v28 = v26->fields._Shop_k__BackingField;
      ShopKind_k__BackingField = v26->fields._ShopKind_k__BackingField;
      v30 = (System_Action_int__o *)sub_1B887FC(System_Action_int__TypeInfo);
      System_Action_int____ctor(v30, (Il2CppObject *)this, Method_ShopRootComponent_SelectedBuyItemConfirm__, 0LL);
      if ( !buyItemConfirmMenu )
        goto LABEL_50;
      v31 = buyItemConfirmMenu;
      v32 = v28;
      v33 = ShopKind_k__BackingField;
      break;
    case 21:
      if ( isBulk )
      {
LABEL_6:
        v17 = *v14;
        if ( !*v14 )
          goto LABEL_50;
        ApSeedBulkExchangeConfirmMenu = this->fields.buyBulkItemConfirmMenu;
LABEL_8:
        v19 = v17->fields._Shop_k__BackingField;
        v20 = (System_Action_int__o *)sub_1B887FC(System_Action_int__TypeInfo);
        System_Action_int____ctor(v20, (Il2CppObject *)this, Method_ShopRootComponent_SelectedBuyItemConfirm__, 0LL);
        if ( !ApSeedBulkExchangeConfirmMenu )
          goto LABEL_50;
        v21 = 8;
        v22 = ApSeedBulkExchangeConfirmMenu;
        v23 = v19;
        v24 = v17;
        v25 = v20;
        goto LABEL_10;
      }
      KindByShopState = (ShopEntity_o *)*v14;
      if ( !*v14 )
        goto LABEL_50;
      KindByShopState = (ShopEntity_o *)ShopBuyItemListViewItem__get_IsItemTypeRarePri(
                                          (ShopBuyItemListViewItem_o *)KindByShopState,
                                          0LL);
      v34 = this->fields.buyItemConfirmMenu;
      v35 = *v14;
      if ( ((unsigned __int8)KindByShopState & 1) != 0 )
      {
        v36 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
        v37 = &Method_ShopRootComponent___c__DisplayClass81_0__OpenConfirmMenu_b__1__;
LABEL_18:
        v38 = v36;
        System_Action___ctor(v36, (Il2CppObject *)v9, *v37, 0LL);
        v39 = (System_Action_int__o *)sub_1B887FC(System_Action_int__TypeInfo);
        System_Action_int____ctor(v39, (Il2CppObject *)this, Method_ShopRootComponent_SelectedBuyItemConfirm__, 0LL);
        if ( v34 )
        {
          ShopBuyItemConfirmMenu__OpenAfterCheckedFree(v34, v35, v38, v39, 0LL);
          return;
        }
        goto LABEL_50;
      }
      if ( !v35 )
        goto LABEL_50;
      v51 = v35->fields._Shop_k__BackingField;
      v52 = v35->fields._ShopKind_k__BackingField;
      v30 = (System_Action_int__o *)sub_1B887FC(System_Action_int__TypeInfo);
      System_Action_int____ctor(v30, (Il2CppObject *)this, Method_ShopRootComponent_SelectedBuyItemConfirm__, 0LL);
      if ( !v34 )
        goto LABEL_50;
      v31 = v34;
      v32 = v51;
      v33 = v52;
      break;
    default:
      return;
  }
  ShopBuyItemConfirmMenu__Open(v31, v32, v33, v30, 0, 0LL);
  return;
}


void __fastcall ShopRootComponent__OpenDetailCheck(ShopRootComponent_o *this, const MethodInfo *method)
{
  ShopRootComponent_o *v2; // x19
  struct ShopSceneListViewControlHelper_o *listViewHelper; // x8
  ShopBuyItemListViewItem_o *Item; // x20
  struct ShopEntity_o *Shop_k__BackingField; // x8
  ShopDetailEntity_o *ShopDetailEntity; // x21
  CommonUI_o *v7; // x20
  System_String_o *message; // x21
  CommonConfirmDialog_ClickDelegate_o *v9; // x22

  v2 = this;
  if ( (byte_4A57833 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ShopDetailMaster___);
    sub_1B885B0(&Method_ShopRootComponent_CloseDetaiCheckConfirm__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (ShopRootComponent_o *)sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A57833 = 1;
  }
  listViewHelper = v2->fields.listViewHelper;
  if ( !listViewHelper )
    goto LABEL_14;
  this = (ShopRootComponent_o *)listViewHelper->fields.buyItemListViewManager;
  if ( !this )
    goto LABEL_14;
  Item = ShopBuyItemListViewManager__GetItem((ShopBuyItemListViewManager_o *)this, v2->fields.selectedItemIndex, 0LL);
  this = (ShopRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_14;
  this = (ShopRootComponent_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ShopDetailMaster___);
  if ( !Item )
    goto LABEL_14;
  Shop_k__BackingField = Item->fields._Shop_k__BackingField;
  if ( !Shop_k__BackingField )
    goto LABEL_14;
  if ( !this )
    goto LABEL_14;
  ShopDetailEntity = ShopDetailMaster__getShopDetailEntity(
                       (ShopDetailMaster_o *)this,
                       Shop_k__BackingField->fields.id,
                       0LL);
  this = (ShopRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !ShopDetailEntity )
    goto LABEL_14;
  v7 = (CommonUI_o *)this;
  message = ShopDetailEntity->fields.message;
  v9 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B887FC(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v9,
    (Il2CppObject *)v2,
    Method_ShopRootComponent_CloseDetaiCheckConfirm__,
    0LL);
  this = (ShopRootComponent_o *)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  if ( !v7 )
LABEL_14:
    sub_1B8880C(this, method);
  CommonUI__OpenConfirmDialog_30494244(
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
  const MethodInfo *v9; // x1
  UnityEngine_Transform_o *transform; // x21
  int v11; // s0
  UnityEngine_GameObject_o *gameObject; // x0
  ShopRootConstants_c *v15; // x8
  UnityEngine_GameObject_o *v16; // x19

  if ( (byte_4A57838 & 1) == 0 )
  {
    sub_1B885B0(&ShopRootConstants_TypeInfo);
    byte_4A57838 = 1;
  }
  shopEventItemDrawBase = (UnityEngine_GameObject_o *)this->fields.shopEventItemDrawBase;
  if ( !shopEventItemDrawBase )
    goto LABEL_17;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *, _QWORD, const MethodInfo *, float))shopEventItemDrawBase->klass[1]._1.castClass)(
    shopEventItemDrawBase,
    shopEventItemDrawBase->klass[1]._1.declaringType,
    *(_QWORD *)&eventId,
    method,
    0.0);
  shopEventItemDrawBase = (UnityEngine_GameObject_o *)ShopBuyItemListViewManager__GetIsShowEventItemWindow(
                                                        state,
                                                        eventId,
                                                        0LL);
  if ( !this->fields.shopEventItemDrawBase )
    goto LABEL_17;
  v8 = (char)shopEventItemDrawBase;
  shopEventItemDrawBase = UnityEngine_Component__get_gameObject(
                            (UnityEngine_Component_o *)this->fields.shopEventItemDrawBase,
                            0LL);
  if ( !shopEventItemDrawBase )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(shopEventItemDrawBase, v8 & 1, 0LL);
  shopEventItemDrawBase = (UnityEngine_GameObject_o *)this->fields.giftButtonControl;
  if ( !shopEventItemDrawBase )
    goto LABEL_17;
  shopEventItemDrawBase = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)shopEventItemDrawBase, 0LL);
  if ( !shopEventItemDrawBase )
    goto LABEL_17;
  transform = UnityEngine_GameObject__get_transform(shopEventItemDrawBase, 0LL);
  if ( !ShopRootConstants_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
  *(UnityEngine_Vector3_o *)&v11 = ShopRootConstants__GetGiftButtonPos(v8 & 1, v9);
  if ( !transform )
    goto LABEL_17;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v11, 0LL);
  if ( (v8 & 1) == 0 )
    return;
  shopEventItemDrawBase = (UnityEngine_GameObject_o *)this->fields.shopEventItemDrawBase;
  if ( !shopEventItemDrawBase )
LABEL_17:
    sub_1B8880C(shopEventItemDrawBase, *(_QWORD *)&state);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)shopEventItemDrawBase, 0LL);
  v15 = ShopRootConstants_TypeInfo;
  v16 = gameObject;
  if ( !ShopRootConstants_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
    v15 = ShopRootConstants_TypeInfo;
  }
  TweenAlpha__Begin(v16, v15->static_fields->OPEN_TIME, 1.0, 0LL);
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
  const MethodInfo *v10; // x1
  int32_t v11; // w19
  System_String_o *HelpSaveKey; // x0

  if ( (byte_4A57828 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_ShopRootComponent_OnClickHelpClose__);
    sub_1B885B0(&ShopRootConstants_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A57828 = 1;
  }
  state = this->fields.state;
  switch ( state )
  {
    case 1:
      v4 = ShopRootComponent__WaitPurchase(this, method);
      UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)this, v4, 0LL);
      return;
    case 2:
    case 4:
      return;
    case 3:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v6 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v6, (Il2CppObject *)this, (intptr_t)Method_ShopRootComponent_OnClickHelpClose__, 0LL);
      if ( !Instance )
        goto LABEL_18;
      v9 = 20;
      break;
    case 5:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v6 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v6, (Il2CppObject *)this, (intptr_t)Method_ShopRootComponent_OnClickHelpClose__, 0LL);
      if ( !Instance )
        goto LABEL_18;
      v9 = 47;
      break;
    case 6:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v6 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v6, (Il2CppObject *)this, (intptr_t)Method_ShopRootComponent_OnClickHelpClose__, 0LL);
      if ( !Instance )
        goto LABEL_18;
      v9 = 19;
      break;
    default:
      if ( state != 20 )
        return;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v6 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v6, (Il2CppObject *)this, (intptr_t)Method_ShopRootComponent_OnClickHelpClose__, 0LL);
      if ( !Instance )
LABEL_18:
        sub_1B8880C(v7, v8);
      v9 = 1029;
      break;
  }
  CommonUI__OpenTutorialImageDialog_30519908((CommonUI_o *)Instance, v9, -1, v6, 0LL, 0LL, 0LL);
  v11 = this->fields.state;
  if ( !ShopRootConstants_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
  HelpSaveKey = ShopRootConstants__GetHelpSaveKey(v11, v10);
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

  if ( (byte_4A57811 & 1) == 0 )
  {
    sub_1B885B0(&SummonInfoDlgComponent_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_ShopRootComponent_EndLimitCountSealInfoDialog__);
    sub_1B885B0(&StringLiteral_8247/*"LIMIT_COUNT_SEALED_TITLE"*/);
    byte_4A57811 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
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
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_8247/*"LIMIT_COUNT_SEALED_TITLE"*/, 0LL);
  v13 = (SummonInfoDlgComponent_CallbackFunc_o *)sub_1B887FC(SummonInfoDlgComponent_CallbackFunc_TypeInfo);
  SummonInfoDlgComponent_CallbackFunc___ctor(
    v13,
    (Il2CppObject *)this,
    (intptr_t)Method_ShopRootComponent_EndLimitCountSealInfoDialog__,
    0LL);
  if ( !limitCountSealInfoDlg )
LABEL_10:
    sub_1B8880C(Master_object, v8);
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

  if ( (byte_4A5783C & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&StonePurchaseMenu_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_ShopRootComponent_CloseStonePurchaseMenu__);
    sub_1B885B0(&Method_ShopRootComponent_RefreshInfo__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5783C = 1;
  }
  if ( state == 10 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v6 = (StonePurchaseMenu_CallbackFunc_o *)sub_1B887FC(StonePurchaseMenu_CallbackFunc_TypeInfo);
    StonePurchaseMenu_CallbackFunc___ctor(
      v6,
      (Il2CppObject *)this,
      Method_ShopRootComponent_CloseStonePurchaseMenu__,
      0LL);
    v7 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v7, (Il2CppObject *)this, Method_ShopRootComponent_RefreshInfo__, 0LL);
    if ( !Instance )
      sub_1B8880C(v8, v9);
    CommonUI__OpenStonePurchaseMenu((CommonUI_o *)Instance, v6, v7, 0LL);
  }
}


void __fastcall ShopRootComponent__OpenStorageDetailCheck(ShopRootComponent_o *this, const MethodInfo *method)
{
  ShopRootComponent_o *v2; // x19
  struct ShopSceneListViewControlHelper_o *listViewHelper; // x8
  ShopBuyItemListViewItem_o *Item; // x20
  int32_t KindByShopState; // w0
  BuyStorageConfirmDialogComponent_o *buyStorageConfirmDialog; // x22
  int32_t buyCount; // w21
  int32_t v8; // w23
  System_Action_int__o *v9; // x24

  v2 = this;
  if ( (byte_4A57834 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_int__TypeInfo);
    this = (ShopRootComponent_o *)sub_1B885B0(&Method_ShopRootComponent_CloseStorageDetailCheckConfirm__);
    byte_4A57834 = 1;
  }
  listViewHelper = v2->fields.listViewHelper;
  if ( !listViewHelper )
    goto LABEL_7;
  this = (ShopRootComponent_o *)listViewHelper->fields.buyItemListViewManager;
  if ( !this
    || (Item = ShopBuyItemListViewManager__GetItem(
                 (ShopBuyItemListViewManager_o *)this,
                 v2->fields.selectedItemIndex,
                 0LL),
        KindByShopState = BuyStorageConfirmDialogComponent__GetKindByShopState(v2->fields.state, 0LL),
        buyStorageConfirmDialog = v2->fields.buyStorageConfirmDialog,
        buyCount = v2->fields.buyCount,
        v8 = KindByShopState,
        v9 = (System_Action_int__o *)sub_1B887FC(System_Action_int__TypeInfo),
        System_Action_int____ctor(
          v9,
          (Il2CppObject *)v2,
          Method_ShopRootComponent_CloseStorageDetailCheckConfirm__,
          0LL),
        !buyStorageConfirmDialog) )
  {
LABEL_7:
    sub_1B8880C(this, method);
  }
  BuyStorageConfirmDialogComponent__Open(buyStorageConfirmDialog, v8, Item, buyCount, v9, 0LL);
}


void __fastcall ShopRootComponent__PlayLvExceedItemReleaseEffect(
        ShopRootComponent_o *this,
        ShopBuyItemListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x20
  BalanceConfig_c *v6; // x0
  ShopBuyItemListViewItem_o *v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  ShopBuyItemListViewItem_o **v10; // x22
  int32_t v11; // w2
  int32_t v12; // w3
  const MethodInfo *v13; // x3
  __int64 v14; // x8
  __int64 v15; // x8
  int v16; // w21
  QuestRewardInfo_o *v17; // x22
  _QWORD *v18; // x21
  int32_t v19; // w2
  int32_t v20; // w3
  __int64 v21; // x8
  __int64 v22; // x8
  __int64 v23; // x8
  _DWORD *v24; // x9
  int32_t buyCount; // w8
  Il2CppObject *Instance; // x19
  AvalonSceneManager_c *v27; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v29; // x21

  if ( (byte_4A5781C & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AvalonSceneManager_TypeInfo);
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&QuestRewardInfo_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_ShopRootComponent___c__DisplayClass95_0__PlayLvExceedItemReleaseEffect_b__0__);
    sub_1B885B0(&ShopRootComponent___c__DisplayClass95_0_TypeInfo);
    byte_4A5781C = 1;
  }
  v5 = sub_1B887FC(ShopRootComponent___c__DisplayClass95_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_22;
  *(_QWORD *)(v5 + 24) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 32) = item;
  v10 = (ShopBuyItemListViewItem_o **)(v5 + 32);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)item, v11, v12);
  if ( !*(_QWORD *)(v5 + 32) )
    goto LABEL_22;
  v14 = *(_QWORD *)(*(_QWORD *)(v5 + 32) + 112LL);
  if ( !v14 )
    goto LABEL_22;
  v15 = *(_QWORD *)(v14 + 56);
  if ( !v15 )
    goto LABEL_22;
  if ( !*(_DWORD *)(v15 + 24) )
LABEL_23:
    sub_1B88814(v6, v7);
  v16 = *(_DWORD *)(v15 + 32);
  v6 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
  }
  if ( v16 == v6->static_fields->LvExceedItemId )
  {
    v17 = (QuestRewardInfo_o *)sub_1B887FC(QuestRewardInfo_TypeInfo);
    QuestRewardInfo___ctor(v17, 0LL);
    *(_QWORD *)(v5 + 16) = v17;
    v18 = (_QWORD *)(v5 + 16);
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)v17, v19, v20);
    v21 = *(_QWORD *)(v5 + 32);
    if ( !v21 )
      goto LABEL_22;
    v22 = *(_QWORD *)(v21 + 112);
    if ( !v22 )
      goto LABEL_22;
    v23 = *(_QWORD *)(v22 + 56);
    if ( !v23 )
      goto LABEL_22;
    if ( *(_DWORD *)(v23 + 24) )
    {
      v24 = (_DWORD *)*v18;
      if ( *v18 )
      {
        v24[5] = *(_DWORD *)(v23 + 32);
        buyCount = this->fields.buyCount;
        v24[4] = 2;
        v24[6] = buyCount;
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v27 = AvalonSceneManager_TypeInfo;
        if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
          v27 = AvalonSceneManager_TypeInfo;
        }
        DEFAULT_FADE_TIME = v27->static_fields->DEFAULT_FADE_TIME;
        v29 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
        System_Action___ctor(
          v29,
          (Il2CppObject *)v5,
          Method_ShopRootComponent___c__DisplayClass95_0__PlayLvExceedItemReleaseEffect_b__0__,
          0LL);
        if ( Instance )
        {
          CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v29, 0LL);
          return;
        }
      }
LABEL_22:
      sub_1B8880C(v6, v7);
    }
    goto LABEL_23;
  }
  v7 = *v10;
  if ( !*v10 )
    goto LABEL_22;
  ShopRootComponent__ShowNormalItemDialog(this, v7, v7->fields._Shop_k__BackingField, v13);
}


void __fastcall ShopRootComponent__PlayServantCostumeReleaseEffect(
        ShopRootComponent_o *this,
        ShopEntity_o *shopEntity,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3
  const MethodInfo *v12; // x2
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v14; // x8
  CommonUI_o *v15; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v17; // x21

  if ( (byte_4A57822 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AvalonSceneManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_ShopRootComponent___c__DisplayClass102_0__PlayServantCostumeReleaseEffect_b__0__);
    sub_1B885B0(&ShopRootComponent___c__DisplayClass102_0_TypeInfo);
    byte_4A57822 = 1;
  }
  v5 = sub_1B887FC(ShopRootComponent___c__DisplayClass102_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_8;
  *(_QWORD *)(v5 + 16) = shopEntity;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)shopEntity, v8, v9);
  *(_QWORD *)(v5 + 24) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)this, v10, v11);
  ShopRootComponent__SetActionBG(this, 1, v12);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = AvalonSceneManager_TypeInfo;
  v15 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v14 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v14->static_fields->DEFAULT_FADE_TIME;
  v17 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v17,
    (Il2CppObject *)v5,
    Method_ShopRootComponent___c__DisplayClass102_0__PlayServantCostumeReleaseEffect_b__0__,
    0LL);
  if ( !v15 )
LABEL_8:
    sub_1B8880C(v6, v7);
  CommonUI__maskFadeout(v15, 1, DEFAULT_FADE_TIME, v17, 0LL);
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
    sub_1B8880C(BackVoiceMasterKey, v6);
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
    sub_1B8880C(EnterVoiceMasterKey, v6);
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
    goto LABEL_13;
  StandFigureBack__Init(standFigureBack, 0LL);
  standFigureBack = (StandFigureBack_o *)this->fields.backgroundTexture;
  if ( !standFigureBack )
    goto LABEL_13;
  ExUITexture__ClearImage((ExUITexture_o *)standFigureBack, 0LL);
  standFigureBack = (StandFigureBack_o *)this->fields.shopPlayVoiceComponent;
  if ( !standFigureBack )
    goto LABEL_13;
  ShopPlayVoiceComponent__QuitShopVoice((ShopPlayVoiceComponent_o *)standFigureBack, method);
  standFigureBack = (StandFigureBack_o *)this->fields.listViewHelper;
  if ( !standFigureBack )
    goto LABEL_13;
  ShopSceneListViewControlHelper__SetListViewOnSceneQuit((ShopSceneListViewControlHelper_o *)standFigureBack, method);
  ShopRootComponent__CloseEventItemWindow(this, v4);
  standFigureBack = (StandFigureBack_o *)this->fields.buyItemConfirmMenu;
  if ( !standFigureBack )
    goto LABEL_13;
  ShopBuyItemConfirmMenu__Init((ShopBuyItemConfirmMenu_o *)standFigureBack, 0LL);
  standFigureBack = (StandFigureBack_o *)this->fields.buyBulkItemConfirmMenu;
  if ( !standFigureBack )
    goto LABEL_13;
  ShopBuyBulkItemConfirmMenu__Init((ShopBuyBulkItemConfirmMenu_o *)standFigureBack, 0LL);
  standFigureBack = (StandFigureBack_o *)this->fields.ApSeedExchangeConfirmMenu;
  if ( !standFigureBack )
    goto LABEL_13;
  ShopBuyItemConfirmMenu__Init((ShopBuyItemConfirmMenu_o *)standFigureBack, 0LL);
  standFigureBack = (StandFigureBack_o *)this->fields.ApSeedBulkExchangeConfirmMenu;
  if ( !standFigureBack
    || (ShopBuyBulkItemConfirmMenu__Init((ShopBuyBulkItemConfirmMenu_o *)standFigureBack, 0LL),
        (standFigureBack = (StandFigureBack_o *)this->fields.servantSellConfirmMenu) == 0LL)
    || (ServantSellConfirmMenu__Init((ServantSellConfirmMenu_o *)standFigureBack, 0LL),
        (standFigureBack = (StandFigureBack_o *)this->fields.servantSellMenu) == 0LL)
    || (ServantSellMenu__Init((ServantSellMenu_o *)standFigureBack, 0LL),
        (standFigureBack = (StandFigureBack_o *)this->fields.informationPanel) == 0LL) )
  {
LABEL_13:
    sub_1B8880C(standFigureBack, method);
  }
  ShopInfoIndicator__StopInformationChange((ShopInfoIndicator_o *)standFigureBack, 0LL);
  this->fields.state = 0;
}


void __fastcall ShopRootComponent__QuitHelp(
        ShopRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  ShopSceneListViewControlHelper_o *listViewHelper; // x0

  if ( (byte_4A5782C & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_22225/*"ok"*/);
    byte_4A5782C = 1;
  }
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_22225/*"ok"*/, 0LL) )
  {
    listViewHelper = this->fields.listViewHelper;
    this->fields.inputState = 4;
    if ( !listViewHelper )
      sub_1B8880C(0LL, v5);
    ShopSceneListViewControlHelper__SetListViewOnQuitHelp(listViewHelper, this->fields.state, v6);
  }
}


void __fastcall ShopRootComponent__RefreshCurrencyInfo(
        ShopRootComponent_o *this,
        int32_t state,
        const MethodInfo *method)
{
  ShopCurrencyInfoController_o *currencyInfoController; // x20
  __int64 CurrencyKind; // x0
  __int64 v6; // x1

  currencyInfoController = this->fields.currencyInfoController;
  CurrencyKind = ShopBuyItemListViewManager__GetCurrencyKind(state, 0LL);
  if ( !currencyInfoController )
    sub_1B8880C(CurrencyKind, v6);
  ShopCurrencyInfoController__RefreshCurrencyInfo(currencyInfoController, CurrencyKind, state, 0LL);
}


void __fastcall ShopRootComponent__RefreshInfo(ShopRootComponent_o *this, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x20
  int64_t Instance; // x0
  __int64 v5; // x1
  int64_t v6; // x21
  UILabel_o *stoneInfoLabel; // x22
  int32_t stone; // w23
  UILabel_o *manaInfoLabel; // x22
  UILabel_o *rarePriInfoLabel; // x22
  Il2CppObject *MasterData_object; // x0
  UILabel_o *stoneFragmentsInfoLabel; // x22
  UserItemMaster_o *v13; // x20
  UILabel_o *anonymousInfoLabel; // x22
  int64_t UserId; // x0
  UILabel_o *grailFragmentsInfoLabel; // x21
  int64_t v17; // x0
  BalanceConfig_c *v18; // x8
  int64_t v19; // x22
  UILabel_o *apSeedInfoLabel; // x21
  int64_t v21; // x0
  const MethodInfo *v22; // x1
  UILabel_o *shop13InfoLabel; // x21
  int64_t v24; // x0
  UISprite_o *shop13Info; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v27; // x0
  UnityEngine_GameObject_o *v28; // x0
  UnityEngine_GameObject_o *v29; // x0
  char v30; // w21
  UILabel_o *shop15InfoLabel; // x21
  int64_t v32; // x0
  BalanceConfig_c *v33; // x8
  int64_t v34; // x22
  int32_t v35; // w20
  UISprite_o *shop15Info; // x20
  UnityEngine_GameObject_o *v37; // x0
  UnityEngine_GameObject_o *v38; // x0
  UnityEngine_GameObject_o *v39; // x0
  UnityEngine_GameObject_o *v40; // x0
  const MethodInfo *v41; // x2

  if ( (byte_4A57809 & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_20256/*"img_bg_evocation"*/);
    sub_1B885B0(&StringLiteral_20260/*"img_bg_pp"*/);
    byte_4A57809 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_56;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !SelfUserGame )
    goto LABEL_56;
  v6 = Instance;
  stoneInfoLabel = this->fields.stoneInfoLabel;
  stone = SelfUserGame->fields.stone;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (int64_t)LocalizationManager__GetNumberFormat(stone, 0LL);
  if ( !stoneInfoLabel )
    goto LABEL_56;
  UILabel__set_text(stoneInfoLabel, (System_String_o *)Instance, 0LL);
  manaInfoLabel = this->fields.manaInfoLabel;
  Instance = (int64_t)LocalizationManager__GetNumberFormat(SelfUserGame->fields.mana, 0LL);
  if ( !manaInfoLabel )
    goto LABEL_56;
  UILabel__set_text(manaInfoLabel, (System_String_o *)Instance, 0LL);
  rarePriInfoLabel = this->fields.rarePriInfoLabel;
  Instance = (int64_t)LocalizationManager__GetNumberFormat(SelfUserGame->fields.rarePri, 0LL);
  if ( !rarePriInfoLabel )
    goto LABEL_56;
  UILabel__set_text(rarePriInfoLabel, (System_String_o *)Instance, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_56;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserItemMaster___);
  stoneFragmentsInfoLabel = this->fields.stoneFragmentsInfoLabel;
  v13 = (UserItemMaster_o *)MasterData_object;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !v6 )
    goto LABEL_56;
  if ( !v13 )
    goto LABEL_56;
  Instance = (int64_t)UserItemMaster__GetEntityDefinitely(v13, Instance, *(_DWORD *)(v6 + 88), 0LL);
  if ( !Instance )
    goto LABEL_56;
  Instance = (int64_t)LocalizationManager__GetNumberFormat(*(_DWORD *)(Instance + 28), 0LL);
  if ( !stoneFragmentsInfoLabel )
    goto LABEL_56;
  UILabel__set_text(stoneFragmentsInfoLabel, (System_String_o *)Instance, 0LL);
  anonymousInfoLabel = this->fields.anonymousInfoLabel;
  UserId = NetworkManager__get_UserId(0LL);
  Instance = (int64_t)UserItemMaster__GetEntityDefinitely(v13, UserId, *(_DWORD *)(v6 + 92), 0LL);
  if ( !Instance )
    goto LABEL_56;
  Instance = (int64_t)LocalizationManager__GetNumberFormat(*(_DWORD *)(Instance + 28), 0LL);
  if ( !anonymousInfoLabel )
    goto LABEL_56;
  UILabel__set_text(anonymousInfoLabel, (System_String_o *)Instance, 0LL);
  grailFragmentsInfoLabel = this->fields.grailFragmentsInfoLabel;
  v17 = NetworkManager__get_UserId(0LL);
  v18 = BalanceConfig_TypeInfo;
  v19 = v17;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v18 = BalanceConfig_TypeInfo;
  }
  Instance = (int64_t)UserItemMaster__GetEntityDefinitely(v13, v19, v18->static_fields->LvExceedDewDropItemId, 0LL);
  if ( !Instance )
    goto LABEL_56;
  Instance = (int64_t)LocalizationManager__GetNumberFormat(*(_DWORD *)(Instance + 28), 0LL);
  if ( !grailFragmentsInfoLabel )
    goto LABEL_56;
  UILabel__set_text(grailFragmentsInfoLabel, (System_String_o *)Instance, 0LL);
  apSeedInfoLabel = this->fields.apSeedInfoLabel;
  v21 = NetworkManager__get_UserId(0LL);
  Instance = (int64_t)UserItemMaster__GetEntityDefinitely(
                        v13,
                        v21,
                        BalanceConfig_TypeInfo->static_fields->ApSeedItemId,
                        0LL);
  if ( !Instance )
    goto LABEL_56;
  Instance = (int64_t)LocalizationManager__GetNumberFormat(*(_DWORD *)(Instance + 28), 0LL);
  if ( !apSeedInfoLabel )
    goto LABEL_56;
  UILabel__set_text(apSeedInfoLabel, (System_String_o *)Instance, 0LL);
  ShopRootComponent__UpdateApLabel(this, v22);
  Instance = (int64_t)this->fields.shop13Info;
  if ( !Instance )
    goto LABEL_56;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_56;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  shop13InfoLabel = this->fields.shop13InfoLabel;
  v24 = NetworkManager__get_UserId(0LL);
  Instance = (int64_t)UserItemMaster__GetEntityDefinitely(
                        v13,
                        v24,
                        BalanceConfig_TypeInfo->static_fields->itemIdForShop13,
                        0LL);
  if ( !Instance )
    goto LABEL_56;
  Instance = (int64_t)LocalizationManager__GetNumberFormat(*(_DWORD *)(Instance + 28), 0LL);
  if ( !shop13InfoLabel )
    goto LABEL_56;
  UILabel__set_text(shop13InfoLabel, (System_String_o *)Instance, 0LL);
  shop13Info = this->fields.shop13Info;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetShopBanner_37860916(shop13Info, (System_String_o *)StringLiteral_20260/*"img_bg_pp"*/, 0LL);
  Instance = (int64_t)this->fields.manaInfoLabel;
  if ( !Instance )
    goto LABEL_56;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  Instance = (int64_t)GameObjectExtensions__GetParent(gameObject, 0LL);
  if ( !Instance )
    goto LABEL_56;
  v27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  GameObjectExtensions__SetLocalPositionX(v27, 85.0, 0LL);
  Instance = (int64_t)this->fields.rarePriInfoLabel;
  if ( !Instance )
    goto LABEL_56;
  v28 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  Instance = (int64_t)GameObjectExtensions__GetParent(v28, 0LL);
  if ( !Instance )
    goto LABEL_56;
  v29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  GameObjectExtensions__SetLocalPositionX(v29, -273.0, 0LL);
  AtlasManager__SetItem(this->fields.apSeedIcon, 103, 0LL);
  AtlasManager__SetItem(this->fields.apIcon, 47, 0LL);
  Instance = ConstantMaster__IsFLAG20230402(0LL);
  if ( !this->fields.shop15Info )
    goto LABEL_56;
  v30 = Instance;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.shop15Info, 0LL);
  if ( !Instance )
    goto LABEL_56;
  if ( (v30 & 1) != 0 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    shop15InfoLabel = this->fields.shop15InfoLabel;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v32 = NetworkManager__get_UserId(0LL);
    v33 = BalanceConfig_TypeInfo;
    v34 = v32;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v33 = BalanceConfig_TypeInfo;
    }
    Instance = (int64_t)UserItemMaster__GetEntityDefinitely(v13, v34, v33->static_fields->itemIdForShop15, 0LL);
    if ( Instance )
    {
      v35 = *(_DWORD *)(Instance + 28);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Instance = (int64_t)LocalizationManager__GetNumberFormat(v35, 0LL);
      if ( shop15InfoLabel )
      {
        UILabel__set_text(shop15InfoLabel, (System_String_o *)Instance, 0LL);
        shop15Info = this->fields.shop15Info;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__SetShopBanner_37860916(shop15Info, (System_String_o *)StringLiteral_20256/*"img_bg_evocation"*/, 0LL);
        Instance = (int64_t)this->fields.anonymousInfoLabel;
        if ( Instance )
        {
          v37 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
          Instance = (int64_t)GameObjectExtensions__GetParent(v37, 0LL);
          if ( Instance )
          {
            v38 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
            GameObjectExtensions__SetLocalPositionX(v38, -94.0, 0LL);
            Instance = (int64_t)this->fields.grailFragmentsInfoLabel;
            if ( Instance )
            {
              v39 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
              Instance = (int64_t)GameObjectExtensions__GetParent(v39, 0LL);
              if ( Instance )
              {
                v40 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
                GameObjectExtensions__SetLocalPositionX(v40, -273.0, 0LL);
                goto LABEL_54;
              }
            }
          }
        }
      }
    }
LABEL_56:
    sub_1B8880C(Instance, v5);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
LABEL_54:
  Instance = (int64_t)this->fields.giftButtonControl;
  if ( !Instance )
    goto LABEL_56;
  GiftButtonCtrl__InvalidateGiftInfo((GiftButtonCtrl_o *)Instance, 0LL);
  ShopRootComponent__RefreshCurrencyInfo(this, this->fields.state, v41);
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

  if ( (byte_4A5781A & 1) == 0 )
  {
    sub_1B885B0(&System_Action_int__TypeInfo);
    sub_1B885B0(&Method_ShopRootComponent__RequestEnd_b__93_0__);
    byte_4A5781A = 1;
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
        v9 = (System_Action_int__o *)sub_1B887FC(System_Action_int__TypeInfo);
        System_Action_int____ctor(v9, (Il2CppObject *)this, Method_ShopRootComponent__RequestEnd_b__93_0__, 0LL);
        if ( v8 )
        {
          ServantSellConfirmMenu__OpenCommandCodeRemoveResult(v8, v9, 0LL);
          return;
        }
      }
LABEL_10:
      sub_1B8880C(servantSellConfirmMenu, v6);
    }
  }
}


void __fastcall ShopRootComponent__RequestSellServant(ShopRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  NetworkManager_ResultCallbackFunc_o *v4; // x20
  Il2CppObject *Request_object; // x0
  __int64 v6; // x1

  if ( (byte_4A57825 & 1) == 0 )
  {
    sub_1B885B0(&Method_NetworkManager_getRequest_SellServantRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1B885B0(&Method_ShopRootComponent_EndRequestSellServant__);
    sub_1B885B0(&StringLiteral_22055/*"ng"*/);
    byte_4A57825 = 1;
  }
  if ( this->fields.selectedServantIds )
  {
    v4 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v4,
      (Il2CppObject *)this,
      Method_ShopRootComponent_EndRequestSellServant__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v4,
                       (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_SellServantRequest___);
    if ( !Request_object )
      sub_1B8880C(0LL, v6);
    SellServantRequest__beginRequest(
      (SellServantRequest_o *)Request_object,
      this->fields.selectedServantIds,
      this->fields.selectedCommandCodeIds,
      0LL);
  }
  else
  {
    ShopRootComponent__EndRequestSellServant(this, (System_String_o *)StringLiteral_22055/*"ng"*/, v2);
  }
}


void __fastcall ShopRootComponent__RequestShop(ShopRootComponent_o *this, const MethodInfo *method)
{
  ShopRootComponent_o *v2; // x19
  struct ShopSceneListViewControlHelper_o *listViewHelper; // x8
  ShopBuyItemListViewItem_o *Item; // x0
  const MethodInfo *v5; // x1
  ShopBuyItemListViewItem_o *v6; // x20
  NetworkManager_ResultCallbackFunc_o *v7; // x21
  struct ShopEntity_o *Shop_k__BackingField; // x8

  v2 = this;
  if ( (byte_4A57819 & 1) == 0 )
  {
    sub_1B885B0(&Method_NetworkManager_getRequest_PurchaseRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    this = (ShopRootComponent_o *)sub_1B885B0(&Method_ShopRootComponent_EndRequestShop__);
    byte_4A57819 = 1;
  }
  listViewHelper = v2->fields.listViewHelper;
  if ( !listViewHelper )
    goto LABEL_13;
  this = (ShopRootComponent_o *)listViewHelper->fields.buyItemListViewManager;
  if ( !this )
    goto LABEL_13;
  Item = ShopBuyItemListViewManager__GetItem((ShopBuyItemListViewManager_o *)this, v2->fields.selectedItemIndex, 0LL);
  if ( Item )
  {
    v6 = Item;
    if ( Item->fields._Shop_k__BackingField )
    {
      v7 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(v7, (Il2CppObject *)v2, Method_ShopRootComponent_EndRequestShop__, 0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      this = (ShopRootComponent_o *)NetworkManager__getRequest_object_(
                                      v7,
                                      (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_PurchaseRequest___);
      Shop_k__BackingField = v6->fields._Shop_k__BackingField;
      if ( Shop_k__BackingField && this )
      {
        PurchaseRequest__beginRequest(
          (PurchaseRequest_o *)this,
          Shop_k__BackingField->fields.id,
          v2->fields.buyCount,
          0,
          0LL);
        return;
      }
LABEL_13:
      sub_1B8880C(this, method);
    }
  }
  ShopRootComponent__RequestEnd(v2, v5);
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
  ShopRootComponent_o *v6; // x19
  struct ShopSceneListViewControlHelper_o *listViewHelper; // x8
  ShopBuyItemListViewItem_o *Item; // x0
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
  ShopRootComponent_o *v21; // x20
  Il2CppObject *v22; // x0
  System_String_o *v23; // x0
  ShopRootComponent_o *v24; // x21
  Il2CppObject *Name; // x0
  System_String_o *v26; // x0
  SummonInfoDlgComponent_o *limitCountSealInfoDlg; // x21
  System_String_o *v28; // x22
  SummonInfoDlgComponent_CallbackFunc_o *v29; // x23
  int klass_high; // [xsp+Ch] [xbp-34h] BYREF

  v5 = index;
  v6 = this;
  if ( (byte_4A5780F & 1) == 0 )
  {
    sub_1B885B0(&SummonInfoDlgComponent_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_CombineLimitReleaseMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_ShopRootComponent_EndLimitCountSealInfoDialog__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_3682/*"COMBINE_LIMIT_SEALED_TITLE"*/);
    this = (ShopRootComponent_o *)sub_1B885B0(&StringLiteral_3681/*"COMBINE_LIMIT_SEALED_MESSAGE_{0}"*/);
    byte_4A5780F = 1;
  }
  if ( !v6->fields.inputState )
  {
    listViewHelper = v6->fields.listViewHelper;
    if ( listViewHelper )
    {
      this = (ShopRootComponent_o *)listViewHelper->fields.buyItemListViewManager;
      if ( this )
      {
        Item = ShopBuyItemListViewManager__GetItem((ShopBuyItemListViewManager_o *)this, v5, 0LL);
        v11 = Item;
        if ( v6->fields.state != 6 || ShopRootComponent__GetShopItemBuyNum((ShopRootComponent_o *)Item, Item, v9) > 0 )
          goto LABEL_8;
        this = (ShopRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( this )
        {
          this = (ShopRootComponent_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
          if ( v11 )
          {
            v12 = (ServantLimitImageMaster_o *)this;
            this = (ShopRootComponent_o *)ShopBuyItemListViewItem__get_TargetId(v11, 0LL);
            if ( v12 )
            {
              v13 = isBulk;
              if ( ServantLimitImageMaster__IsServantLimitCountSeal(v12, (int32_t)this, 4, 0LL) )
              {
                v6->fields.limitCountSealInfoIndex = v5;
                v6->fields.limitCountSealInfoBulk = v13;
                TargetId = ShopBuyItemListViewItem__get_TargetId(v11, 0LL);
                ShopRootComponent__OpenLimitCountSealInfoDialog(v6, TargetId, 0, v15);
                return;
              }
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantMaster___);
              this = (ShopRootComponent_o *)ShopBuyItemListViewItem__get_TargetId(v11, 0LL);
              if ( Master_object )
              {
                Entity = DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                           (int32_t)this,
                           (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                this = (ShopRootComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_CombineLimitReleaseMaster___);
                *(_QWORD *)&index = Entity ? HIDWORD(Entity[7].klass) : 0xFFFFFFFFLL;
                if ( this )
                {
                  if ( !CombineLimitReleaseMaster__IsExistSealedLimitCount(
                          (CombineLimitReleaseMaster_o *)this,
                          index,
                          0LL) )
                  {
LABEL_8:
                    ShopRootComponent__OpenConfirmMenu(v6, v6->fields.state, v11, isBulk, v10);
                    v6->fields.inputState = 2;
                    return;
                  }
                  v6->fields.limitCountSealInfoIndex = v5;
                  v6->fields.limitCountSealInfoBulk = v13;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  this = (ShopRootComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3682/*"COMBINE_LIMIT_SEALED_TITLE"*/, 0LL);
                  if ( Entity )
                  {
                    v21 = this;
                    klass_high = HIDWORD(Entity[7].klass);
                    v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &klass_high, v18, v19, v20);
                    v23 = System_String__Format((System_String_o *)StringLiteral_3681/*"COMBINE_LIMIT_SEALED_MESSAGE_{0}"*/, v22, 0LL);
                    this = (ShopRootComponent_o *)LocalizationManager__Get(v23, 0LL);
                    if ( v11->fields._Shop_k__BackingField )
                    {
                      v24 = this;
                      Name = (Il2CppObject *)ShopEntity__getName(v11->fields._Shop_k__BackingField, 0LL);
                      v26 = System_String__Format((System_String_o *)v24, Name, 0LL);
                      limitCountSealInfoDlg = v6->fields.limitCountSealInfoDlg;
                      v28 = v26;
                      v29 = (SummonInfoDlgComponent_CallbackFunc_o *)sub_1B887FC(SummonInfoDlgComponent_CallbackFunc_TypeInfo);
                      SummonInfoDlgComponent_CallbackFunc___ctor(
                        v29,
                        (Il2CppObject *)v6,
                        (intptr_t)Method_ShopRootComponent_EndLimitCountSealInfoDialog__,
                        0LL);
                      if ( limitCountSealInfoDlg )
                      {
                        SummonInfoDlgComponent__OpenInfoMessageDlg(
                          limitCountSealInfoDlg,
                          (System_String_o *)v21,
                          v28,
                          v29,
                          0LL);
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
    }
    sub_1B8880C(this, *(_QWORD *)&index);
  }
}


void __fastcall ShopRootComponent__SelectMenu(ShopRootComponent_o *this, int32_t state, const MethodInfo *method)
{
  __int64 v5; // x20
  ShopPlayVoiceComponent_o *shopPlayVoiceComponent; // x0
  const MethodInfo *v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  ShopRootComponent_o *v10; // x0
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x2
  int32_t v13; // w1
  int32_t v14; // w19
  System_Action_o *v15; // x21
  ShopRootComponent_o *v16; // x0
  const MethodInfo *v17; // x3

  if ( (byte_4A5780B & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&CoinRoomUtility_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1B885B0(&Method_ShopRootComponent___c__DisplayClass76_0__SelectMenu_b__0__);
    sub_1B885B0(&ShopRootComponent___c__DisplayClass76_0_TypeInfo);
    byte_4A5780B = 1;
  }
  v5 = sub_1B887FC(ShopRootComponent___c__DisplayClass76_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_19;
  *(_QWORD *)(v5 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_DWORD *)(v5 + 24) = state;
  if ( ShopRootComponent__CheckServerLimitTime(v10, state, v11) )
  {
    v13 = *(_DWORD *)(v5 + 24);
    if ( v13 == 17 )
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
                                                v7);
            shopPlayVoiceComponent = (ShopPlayVoiceComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
            if ( shopPlayVoiceComponent )
            {
              AvalonSceneManager__pushScene((AvalonSceneManager_o *)shopPlayVoiceComponent, 90, 1, 0LL, 0LL);
              return;
            }
          }
        }
LABEL_19:
        sub_1B8880C(shopPlayVoiceComponent, v7);
      }
      v13 = *(_DWORD *)(v5 + 24);
    }
    if ( v13 == 15 )
    {
      v14 = 15;
    }
    else
    {
      ShopRootComponent__PlayVoiceEnter(this, v13, v12);
      v14 = *(_DWORD *)(v5 + 24);
    }
    v15 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      v15,
      (Il2CppObject *)v5,
      Method_ShopRootComponent___c__DisplayClass76_0__SelectMenu_b__0__,
      0LL);
    ShopRootComponent__SetFadeOut(v16, v14, v15, v17);
  }
}


void __fastcall ShopRootComponent__SelectSellServantConfirm(ShopRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  ServantSellMenu_o *servantSellMenu; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  int32_t tabKind; // w21
  struct System_Int64_array *selectedServantIds; // x22
  bool IsSellEquipedCmdCodeLastServant; // w0
  System_Int64_array *v11; // x22
  ServantSellConfirmMenu_o *servantSellConfirmMenu; // x21
  System_Action_int__o *v13; // x19
  struct ServantSellConfirmMenu_o *v14; // x21
  int32_t v15; // w20
  System_Action_int__o *v16; // x22
  ServantSellConfirmMenu_o *v17; // x0
  int32_t v18; // w1
  System_Int64_array *v19; // x2
  System_Int64_array *v20; // x3
  System_Action_int__o *v21; // x4
  struct ServantSellConfirmMenu_o *v22; // x21
  int32_t v23; // w20
  struct System_Int64_array *v24; // x22
  struct System_Int64_array *selectedCommandCodeIds; // x23
  System_Action_int__o *v26; // x24

  if ( (byte_4A57818 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_int__TypeInfo);
    sub_1B885B0(&Method_ShopRootComponent_SellServantConfirm__);
    sub_1B885B0(&Method_ShopRootComponent___c__DisplayClass91_0__SelectSellServantConfirm_b__0__);
    sub_1B885B0(&ShopRootComponent___c__DisplayClass91_0_TypeInfo);
    byte_4A57818 = 1;
  }
  v3 = sub_1B887FC(ShopRootComponent___c__DisplayClass91_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  if ( !v3 )
    goto LABEL_18;
  *(_QWORD *)(v3 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 16), (int32_t)this, v6, v7);
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
    v11 = this->fields.selectedServantIds;
    if ( v11 )
    {
      servantSellConfirmMenu = this->fields.servantSellConfirmMenu;
      if ( *(_DWORD *)(v3 + 24) == 4 )
      {
        v13 = (System_Action_int__o *)sub_1B887FC(System_Action_int__TypeInfo);
        System_Action_int____ctor(
          v13,
          (Il2CppObject *)v3,
          Method_ShopRootComponent___c__DisplayClass91_0__SelectSellServantConfirm_b__0__,
          0LL);
        if ( servantSellConfirmMenu )
        {
          ServantSellConfirmMenu__OpenSellEquippedLastSvtWarning(servantSellConfirmMenu, 4, v11, v13, 0LL);
          return;
        }
LABEL_18:
        sub_1B8880C(servantSellMenu, v5);
      }
      if ( !servantSellConfirmMenu )
        goto LABEL_18;
      ServantSellConfirmMenu__Init(this->fields.servantSellConfirmMenu, 0LL);
      v22 = this->fields.servantSellConfirmMenu;
      v23 = *(_DWORD *)(v3 + 24);
      v24 = this->fields.selectedServantIds;
      selectedCommandCodeIds = this->fields.selectedCommandCodeIds;
      v26 = (System_Action_int__o *)sub_1B887FC(System_Action_int__TypeInfo);
      System_Action_int____ctor(v26, (Il2CppObject *)this, Method_ShopRootComponent_SellServantConfirm__, 0LL);
      if ( !v22 )
        goto LABEL_18;
      v17 = v22;
      v18 = v23;
      v19 = v24;
      v20 = selectedCommandCodeIds;
      v21 = v26;
    }
    else
    {
      v14 = this->fields.servantSellConfirmMenu;
      v15 = *(_DWORD *)(v3 + 24);
      v16 = (System_Action_int__o *)sub_1B887FC(System_Action_int__TypeInfo);
      System_Action_int____ctor(v16, (Il2CppObject *)this, Method_ShopRootComponent_SellServantConfirm__, 0LL);
      if ( !v14 )
        goto LABEL_18;
      v17 = v14;
      v18 = v15;
      v19 = 0LL;
      v20 = 0LL;
      v21 = v16;
    }
    ServantSellConfirmMenu__Open(v17, v18, v19, v20, v21, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopRootComponent__SelectedBuyItemConfirm(
        ShopRootComponent_o *this,
        int32_t buyCount,
        const MethodInfo *method)
{
  ShopRootComponent_o *v4; // x19
  int32_t state; // w8
  struct ShopSceneListViewControlHelper_o *listViewHelper; // x8
  ShopBuyItemListViewItem_o *Item; // x20
  struct ShopEntity_o *Shop_k__BackingField; // x8

  v4 = this;
  if ( (byte_4A57814 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ShopDetailMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    sub_1B885B0(&ShopRootComponent_TypeInfo);
    this = (ShopRootComponent_o *)sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A57814 = 1;
  }
  if ( v4->fields.inputState == 2 )
  {
    v4->fields.inputState = 3;
    v4->fields.buyCount = buyCount;
    if ( !buyCount )
    {
      ShopRootComponent__CloseItemConfirm(v4, *(const MethodInfo **)&buyCount);
      return;
    }
    state = v4->fields.state;
    if ( state == 8 )
    {
LABEL_6:
      ShopRootComponent__RequestShop(v4, *(const MethodInfo **)&buyCount);
      return;
    }
    if ( (unsigned int)(state - 11) <= 1 )
    {
      ShopRootComponent__OpenStorageDetailCheck(v4, *(const MethodInfo **)&buyCount);
      return;
    }
    listViewHelper = v4->fields.listViewHelper;
    if ( listViewHelper )
    {
      this = (ShopRootComponent_o *)listViewHelper->fields.buyItemListViewManager;
      if ( this )
      {
        Item = ShopBuyItemListViewManager__GetItem(
                 (ShopBuyItemListViewManager_o *)this,
                 v4->fields.selectedItemIndex,
                 0LL);
        this = (ShopRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( this )
        {
          this = (ShopRootComponent_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ShopDetailMaster___);
          if ( Item )
          {
            Shop_k__BackingField = Item->fields._Shop_k__BackingField;
            if ( Shop_k__BackingField )
            {
              if ( this )
              {
                this = (ShopRootComponent_o *)ShopDetailMaster__getShopDetailEntity(
                                                (ShopDetailMaster_o *)this,
                                                Shop_k__BackingField->fields.id,
                                                0LL);
                if ( !this )
                  goto LABEL_6;
                if ( LODWORD(this->fields.myFSM) == 3 )
                  goto LABEL_21;
                if ( ShopRootComponent_TypeInfo->static_fields->shopDetailCheckList )
                {
                  if ( System_Collections_Generic_Dictionary_int__int___get_Item(
                         ShopRootComponent_TypeInfo->static_fields->shopDetailCheckList,
                         this->fields.m_CachedPtr,
                         (const MethodInfo_3164DEC *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__) )
                  {
                    goto LABEL_6;
                  }
LABEL_21:
                  ShopRootComponent__OpenDetailCheck(v4, *(const MethodInfo **)&buyCount);
                  return;
                }
              }
            }
          }
        }
      }
    }
    sub_1B8880C(this, *(_QWORD *)&buyCount);
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
      sub_1B8880C(servantSellConfirmMenu, *(_QWORD *)&count);
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

  if ( (byte_4A57840 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57840 = 1;
  }
  actionBg = (UnityEngine_Object_o *)this->fields.actionBg;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(actionBg, 0LL, 0LL) )
  {
    v7 = this->fields.actionBg;
    if ( !v7 )
      sub_1B8880C(0LL, v6);
    UnityEngine_GameObject__SetActive(v7, isEnable, 0LL);
  }
}


void __fastcall ShopRootComponent__SetFadeIn(ShopRootComponent_o *this, int32_t state, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  CommonUI_o *v6; // x19

  if ( (byte_4A5780E & 1) == 0 )
  {
    sub_1B885B0(&AvalonSceneManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5780E = 1;
  }
  if ( state == 15 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v6 = (CommonUI_o *)Instance;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    if ( !v6 )
      sub_1B8880C(Instance, v5);
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
  int32_t v9; // w2
  int32_t v10; // w3
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v12; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v14; // x21

  if ( (byte_4A5780D & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AvalonSceneManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_ShopRootComponent___c__DisplayClass78_0__SetFadeOut_b__0__);
    sub_1B885B0(&ShopRootComponent___c__DisplayClass78_0_TypeInfo);
    byte_4A5780D = 1;
  }
  v6 = sub_1B887FC(ShopRootComponent___c__DisplayClass78_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  if ( !v6 )
    goto LABEL_10;
  *(_QWORD *)(v6 + 16) = endFade;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v6 + 16), (int32_t)endFade, v9, v10);
  if ( state == 15 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v12 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v12 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v12->static_fields->DEFAULT_FADE_TIME;
    v14 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      v14,
      (Il2CppObject *)v6,
      Method_ShopRootComponent___c__DisplayClass78_0__SetFadeOut_b__0__,
      0LL);
    if ( Instance )
    {
      CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v14, 0LL);
      return;
    }
LABEL_10:
    sub_1B8880C(v7, v8);
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

  if ( (byte_4A57837 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    sub_1B885B0(&ShopRootComponent_TypeInfo);
    byte_4A57837 = 1;
  }
  if ( entity && (decide || entity->fields.frequencyType != 1) )
  {
    shopDetailCheckList = ShopRootComponent_TypeInfo->static_fields->shopDetailCheckList;
    if ( !shopDetailCheckList )
      sub_1B8880C(0LL, entity);
    System_Collections_Generic_Dictionary_int__int___set_Item(
      shopDetailCheckList,
      entity->fields.shopId,
      1,
      (const MethodInfo_3164E74 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
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
      ShopInfoIndicator__StartInformationChange((ShopInfoIndicator_o *)informationPanel, 0LL);
      return;
    }
LABEL_7:
    sub_1B8880C(informationPanel, isDisp);
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

  if ( (byte_4A5781D & 1) == 0 )
  {
    sub_1B885B0(&System_Action_bool__TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1B885B0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1B885B0(&Method_ShopRootComponent_OnEndItemDialog__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5781D = 1;
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
    RequestResultDialogMessageNormal = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( RequestResultDialogMessageNormal )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)RequestResultDialogMessageNormal,
                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ItemMaster___);
      RequestResultDialogMessageNormal = (System_String_o *)ShopEntity__get_TargetId(entity, 0LL);
      if ( MasterData_object )
      {
        v11 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                (int32_t)RequestResultDialogMessageNormal,
                (const MethodInfo_311D934 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
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
        v18 = (System_Action_bool__o *)sub_1B887FC(System_Action_bool__TypeInfo);
        System_Action_bool____ctor(v18, (Il2CppObject *)this, Method_ShopRootComponent_OnEndItemDialog__, 0LL);
        if ( requestResultDialog )
        {
          RequestResultDialog__Open(requestResultDialog, v9, v17, RequestResultDialogItemMessageNormal, v18, 0LL);
          return;
        }
      }
    }
LABEL_11:
    sub_1B8880C(RequestResultDialogMessageNormal, v8);
  }
  v19 = this->fields.requestResultDialog;
  v20 = (System_Action_bool__o *)sub_1B887FC(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v20, (Il2CppObject *)this, Method_ShopRootComponent_OnEndItemDialog__, 0LL);
  if ( !v19 )
    goto LABEL_11;
  RequestResultDialog__Open_32711684(v19, (System_String_o *)StringLiteral_1/*""*/, v9, v20, -1, 0LL);
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

  if ( (byte_4A5781E & 1) == 0 )
  {
    sub_1B885B0(&System_Action_bool__TypeInfo);
    sub_1B885B0(&Method_ShopRootComponent_OnEndItemDialog__);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5781E = 1;
  }
  RequestResultDialogMessage = ShopRequestResultDialogMessageMaker__GetRequestResultDialogMessage(
                                 entity,
                                 this->fields.buyCount,
                                 method);
  requestResultDialog = this->fields.requestResultDialog;
  v7 = RequestResultDialogMessage;
  v8 = (System_Action_bool__o *)sub_1B887FC(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v8, (Il2CppObject *)this, Method_ShopRootComponent_OnEndItemDialog__, 0LL);
  if ( !requestResultDialog )
    sub_1B8880C(v9, v10);
  RequestResultDialog__Open_32711684(requestResultDialog, (System_String_o *)StringLiteral_1/*""*/, v7, v8, -1, 0LL);
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

  if ( (byte_4A5781F & 1) == 0 )
  {
    sub_1B885B0(&System_Action_int__TypeInfo);
    sub_1B885B0(&Method_ShopRootComponent_OnEndStorageDialog__);
    byte_4A5781F = 1;
  }
  state = this->fields.state;
  if ( state == 12 )
  {
    buyStorageResultDialog = this->fields.buyStorageResultDialog;
    v7 = (System_Action_int__o *)sub_1B887FC(System_Action_int__TypeInfo);
    System_Action_int____ctor(v7, (Il2CppObject *)this, Method_ShopRootComponent_OnEndStorageDialog__, 0LL);
    if ( buyStorageResultDialog )
    {
      v11 = 1;
      v10 = buyStorageResultDialog;
      goto LABEL_9;
    }
LABEL_11:
    sub_1B8880C(v8, v9);
  }
  if ( state == 11 )
  {
    v6 = this->fields.buyStorageResultDialog;
    v7 = (System_Action_int__o *)sub_1B887FC(System_Action_int__TypeInfo);
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

  if ( (byte_4A5780A & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    byte_4A5780A = 1;
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
    sub_1B8880C(SelfUserGame, v4);
  UILabel__set_text(apInfoLabel, (System_String_o *)SelfUserGame, 0LL);
}


void __fastcall ShopRootComponent__UpdateGiftBadgeNum(ShopRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *giftButtonControl; // x20
  __int64 v4; // x1
  GiftButtonCtrl_o *v5; // x0

  if ( (byte_4A57841 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57841 = 1;
  }
  giftButtonControl = (UnityEngine_Object_o *)this->fields.giftButtonControl;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(giftButtonControl, 0LL, 0LL) )
  {
    v5 = this->fields.giftButtonControl;
    if ( !v5 )
      sub_1B8880C(0LL, v4);
    GiftButtonCtrl__InvalidateGiftInfo(v5, 0LL);
  }
}


System_Collections_IEnumerator_o *__fastcall ShopRootComponent__WaitPurchase(
        ShopRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A57829 & 1) == 0 )
  {
    sub_1B885B0(&ShopRootComponent__WaitPurchase_d__116_TypeInfo);
    byte_4A57829 = 1;
  }
  v3 = sub_1B887FC(ShopRootComponent__WaitPurchase_d__116_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall ShopRootComponent___Init_b__71_0(
        ShopRootComponent_o *this,
        int32_t stoneCount,
        const MethodInfo *method)
{
  UILabel_o *stoneInfoLabel; // x20
  System_String_o *NumberFormat; // x0
  __int64 v7; // x1

  if ( (byte_4A57842 & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    byte_4A57842 = 1;
  }
  stoneInfoLabel = this->fields.stoneInfoLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  NumberFormat = LocalizationManager__GetNumberFormat(stoneCount, 0LL);
  if ( !stoneInfoLabel )
    sub_1B8880C(NumberFormat, v7);
  UILabel__set_text(stoneInfoLabel, NumberFormat, 0LL);
}


void __fastcall ShopRootComponent___RequestEnd_b__93_0(
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
    sub_1B8880C(servantSellConfirmMenu, v4);
  }
  ServantSellConfirmMenu__ClearCommandCodeRemoveResult(servantSellConfirmMenu, 0LL);
}


void __fastcall ShopRootComponent____n__0(ShopRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent__beginStartUp_38666476((SceneRootComponent_o *)this, 0LL);
}


void __fastcall ShopRootComponent__beginFinish(ShopRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  ShopTopListViewManager_o *topListViewManager; // x0

  ShopRootComponent__Quit(this, method);
  topListViewManager = this->fields.topListViewManager;
  if ( !topListViewManager )
    sub_1B8880C(0LL, v3);
  ShopTopListViewManager__ReleaseCoinRoomAsset(topListViewManager, v3);
}


void __fastcall ShopRootComponent__beginInitialize(ShopRootComponent_o *this, const MethodInfo *method)
{
  ShopTopListViewManager_o *topListViewManager; // x0
  ShopRootComponent_o *v4; // x0
  const MethodInfo *v5; // x1
  struct GiftButtonCtrl_o *giftButtonControl; // x20
  System_Action_o *v7; // x21
  int32_t v8; // w2
  int32_t v9; // w3
  struct GiftButtonCtrl_o *v10; // x20
  System_Func_bool__bool__o *v11; // x21
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_4A57804 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&System_Func_bool__bool__TypeInfo);
    sub_1B885B0(&Method_ShopRootComponent_OnGiftClose__);
    sub_1B885B0(&Method_ShopRootComponent_OnGiftOpen__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4A57804 = 1;
  }
  topListViewManager = this->fields.topListViewManager;
  if ( !topListViewManager )
    goto LABEL_11;
  ShopTopListViewManager__LoadCoinRoomAsset(topListViewManager, method);
  ShopRootComponent__CreateShopDetailCheckList(v4, v5);
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 6, 30, 0LL);
  topListViewManager = (ShopTopListViewManager_o *)this->fields.eventBanner;
  if ( !topListViewManager )
    goto LABEL_11;
  EventBannerComponent__SetBanner((EventBannerComponent_o *)topListViewManager, 0LL);
  topListViewManager = (ShopTopListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !topListViewManager )
    goto LABEL_11;
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)topListViewManager, (SceneRootComponent_o *)this, 0LL);
  topListViewManager = (ShopTopListViewManager_o *)this->fields.helpListViewManager;
  if ( !topListViewManager )
    goto LABEL_11;
  ShopHelpListViewManager__LoadBaseSprite((ShopHelpListViewManager_o *)topListViewManager, 0LL);
  topListViewManager = (ShopTopListViewManager_o *)this->fields.informationPanel;
  if ( !topListViewManager )
    goto LABEL_11;
  ShopInfoIndicator__StartInformationChange((ShopInfoIndicator_o *)topListViewManager, 0LL);
  giftButtonControl = this->fields.giftButtonControl;
  v7 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_ShopRootComponent_OnGiftOpen__, 0LL);
  if ( !giftButtonControl
    || (giftButtonControl->fields.OnGiftOpenAdditionalAction = v7,
        sub_1B88554(
          (ServantStatusBattleListViewItem_o *)&giftButtonControl->fields.OnGiftOpenAdditionalAction,
          (int32_t)v7,
          v8,
          v9),
        v10 = this->fields.giftButtonControl,
        v11 = (System_Func_bool__bool__o *)sub_1B887FC(System_Func_bool__bool__TypeInfo),
        System_Func_bool__bool____ctor(v11, (Il2CppObject *)this, Method_ShopRootComponent_OnGiftClose__, 0LL),
        !v10) )
  {
LABEL_11:
    sub_1B8880C(topListViewManager, method);
  }
  v10->fields.OnGiftCloseAdditionalAction = v11;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v10->fields.OnGiftCloseAdditionalAction, (int32_t)v11, v12, v13);
}


void __fastcall ShopRootComponent__beginResume(ShopRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent__beginResume_38666660((SceneRootComponent_o *)this, 0LL);
}


void __fastcall ShopRootComponent__beginStartUp(
        ShopRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  int32_t v3; // w3
  struct SceneJumpInfo_o **p_jumpInfo; // x21
  const MethodInfo *v7; // x2
  int32_t v8; // w3
  Il2CppClass *v9; // x8
  __int64 methodPtr_low; // x9
  int32_t v11; // w1
  TitleInfoControl_o *titleInfo; // x0
  __int64 v13; // x1
  System_String_o *returnSceneName; // x20
  System_String_o *SceneName; // x0
  bool v16; // w0
  int32_t v17; // w3
  struct ShopPlayVoiceComponent_o *shopPlayVoiceComponent; // x8
  System_String_o *MainBgmName; // x20
  System_Action_o *v20; // x20
  const MethodInfo *v21; // x1
  int32_t v22; // w2
  int32_t v23; // w3
  struct ShopPlayVoiceComponent_o *v24; // x20
  struct StandFigureBack_o *standFigureBack; // x1
  int32_t defaultFaceId; // w21
  void *v27; // d8
  ServantStatusBattleListViewItem_o *p_standFigureBack; // x20
  UITexture_o *backgroundTexture; // x20
  System_String_o *BG_ROOT; // x20
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  Il2CppObject *v34; // x0
  System_String_o *v35; // x0
  ExUITexture_o *v36; // x21
  System_String_o *v37; // x20
  System_Action_o *v38; // x22
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  ShopRootConstants_c *v42; // x0
  struct ShopRootConstants_StaticFields *static_fields; // x8
  System_String_o *v44; // x20
  Il2CppObject *v45; // x0
  ExUITexture_o *v46; // x19
  int32_t DEFAULT_BG_ID; // [xsp+8h] [xbp-48h] BYREF
  int32_t bgImageId; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4A57805 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&BgmManager_TypeInfo);
    sub_1B885B0(&FSUtility_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&SceneJumpInfo_TypeInfo);
    sub_1B885B0(&SceneList_TypeInfo);
    sub_1B885B0(&Method_ShopRootComponent_LoadBanner__);
    sub_1B885B0(&Method_ShopRootComponent__beginStartUp_b__66_0__);
    sub_1B885B0(&ShopRootConstants_TypeInfo);
    sub_1B885B0(&SoundManager_TypeInfo);
    byte_4A57805 = 1;
  }
  p_jumpInfo = &this->fields.jumpInfo;
  this->fields.jumpInfo = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.jumpInfo, 0, (int32_t)method, v3);
  this->fields.isFromCoinRoom = 0;
  if ( data )
  {
    v9 = (Il2CppClass *)SceneJumpInfo_TypeInfo;
    methodPtr_low = LOBYTE(SceneJumpInfo_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(data->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
      && (SceneJumpInfo_c *)data->klass->_2.typeHierarchy[methodPtr_low - 1] == SceneJumpInfo_TypeInfo )
    {
      *p_jumpInfo = (struct SceneJumpInfo_o *)data;
      if ( LOBYTE(data->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
      {
        if ( data->klass->_2.typeHierarchy[methodPtr_low - 1] == v9 )
          v11 = (int)data;
        else
          v11 = 0;
      }
      else
      {
        v11 = 0;
      }
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.jumpInfo, v11, (int32_t)v7, v8);
      if ( !*p_jumpInfo )
        goto LABEL_41;
      returnSceneName = (*p_jumpInfo)->fields.returnSceneName;
      if ( !SceneList_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
      SceneName = SceneList__getSceneName(90, 0LL);
      v16 = System_String__op_Equality(returnSceneName, SceneName, 0LL);
      this->fields.isFromCoinRoom = v16;
      if ( v16 )
      {
        *p_jumpInfo = 0LL;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.jumpInfo, 0, (int32_t)v7, v17);
      }
    }
  }
  ShopRootComponent__SetActionBG(this, 0, v7);
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
  TitleInfoControl__setTitleInfo(titleInfo, this->fields.myFSM, 1, 0LL, 37, 0LL);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_41;
  TitleInfoControl__SetHelpBtn(titleInfo, 0, 0LL);
  v20 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v20, (Il2CppObject *)this, Method_ShopRootComponent__beginStartUp_b__66_0__, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadBanner(v20, 1, 0LL);
  ShopRootComponent__setDispInfo(this, v21);
  v24 = this->fields.shopPlayVoiceComponent;
  if ( !v24 )
    goto LABEL_41;
  standFigureBack = this->fields.standFigureBack;
  defaultFaceId = this->fields.defaultFaceId;
  v27 = *(void **)&this->fields.figureSvtId;
  v24->fields.standFigureBack = standFigureBack;
  p_standFigureBack = (ServantStatusBattleListViewItem_o *)&v24->fields.standFigureBack;
  sub_1B88554(p_standFigureBack, (int32_t)standFigureBack, v22, v23);
  p_standFigureBack->monitor = v27;
  p_standFigureBack->fields.selectNum = defaultFaceId;
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
  v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &bgImageId, v31, v32, v33);
  v35 = System_String__Format(BG_ROOT, v34, 0LL);
  v36 = this->fields.backgroundTexture;
  v37 = v35;
  v38 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v38, (Il2CppObject *)this, Method_ShopRootComponent_LoadBanner__, 0LL);
  if ( !v36 )
    goto LABEL_41;
  if ( ExUITexture__SetAssetImage(v36, v37, v38, 0LL) )
    goto LABEL_38;
  v42 = ShopRootConstants_TypeInfo;
  if ( !ShopRootConstants_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
    v42 = ShopRootConstants_TypeInfo;
  }
  static_fields = v42->static_fields;
  v44 = static_fields->BG_ROOT;
  DEFAULT_BG_ID = static_fields->DEFAULT_BG_ID;
  v45 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &DEFAULT_BG_ID, v39, v40, v41);
  titleInfo = (TitleInfoControl_o *)System_String__Format(v44, v45, 0LL);
  if ( !this->fields.backgroundTexture )
LABEL_41:
    sub_1B8880C(titleInfo, v13);
  v37 = (System_String_o *)titleInfo;
  ExUITexture__SetAssetImage(this->fields.backgroundTexture, (System_String_o *)titleInfo, 0LL, 0LL);
LABEL_38:
  v46 = this->fields.backgroundTexture;
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  FSUtility__SetUpBackTextureSize(v46, v37, 0LL);
}


void __fastcall ShopRootComponent__setDispInfo(ShopRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  GuideEntity_o *GuideData; // x0
  int32_t guideFaceId; // w8
  ShopRootConstants_c *v7; // x0
  struct ShopRootConstants_StaticFields *static_fields; // x9

  if ( (byte_4A57806 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_GuideMaster___);
    sub_1B885B0(&ShopRootConstants_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A57806 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_GuideMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v4);
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


void __fastcall ShopRootComponent__WaitPurchase_d__116___ctor(
        ShopRootComponent__WaitPurchase_d__116_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall ShopRootComponent__WaitPurchase_d__116__MoveNext(
        ShopRootComponent__WaitPurchase_d__116_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ShopRootComponent__WaitPurchase_d__116_o *v3; // x19
  int32_t _1__state; // w8
  ShopRootComponent___c_c *v5; // x0
  System_Func_bool__o *_9__116_0; // x20
  Il2CppObject *v7; // x21
  struct ShopRootComponent___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  UnityEngine_WaitUntil_o *v11; // x21
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v13; // w2
  int32_t v14; // w3
  bool result; // w0
  struct ShopRootComponent_o *_4__this; // x8

  v3 = this;
  if ( (byte_4A57851 & 1) == 0 )
  {
    sub_1B885B0(&System_Func_bool__TypeInfo);
    sub_1B885B0(&Method_ShopRootComponent___c__WaitPurchase_b__116_0__);
    sub_1B885B0(&ShopRootComponent___c_TypeInfo);
    this = (ShopRootComponent__WaitPurchase_d__116_o *)sub_1B885B0(&UnityEngine_WaitUntil_TypeInfo);
    byte_4A57851 = 1;
  }
  _1__state = v3->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = v3->fields.__4__this;
    v3->fields.__1__state = -1;
    if ( !_4__this
      || (this = (ShopRootComponent__WaitPurchase_d__116_o *)_4__this->fields.listViewHelper,
          _4__this->fields.state = 13,
          !this) )
    {
      sub_1B8880C(this, method);
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
  _9__116_0 = v5->static_fields->__9__116_0;
  if ( !_9__116_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = ShopRootComponent___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v5->static_fields->__9;
    _9__116_0 = (System_Func_bool__o *)sub_1B887FC(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(_9__116_0, v7, Method_ShopRootComponent___c__WaitPurchase_b__116_0__, 0LL);
    static_fields = ShopRootComponent___c_TypeInfo->static_fields;
    static_fields->__9__116_0 = _9__116_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__116_0, (int32_t)_9__116_0, v9, v10);
  }
  v11 = (UnityEngine_WaitUntil_o *)sub_1B887FC(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v11, _9__116_0, 0LL);
  v3->fields.__2__current = (Il2CppObject *)v11;
  p__2__current = (ServantStatusBattleListViewItem_o *)&v3->fields.__2__current;
  sub_1B88554(p__2__current, (int32_t)v11, v13, v14);
  result = 1;
  *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
  return result;
}


Il2CppObject *__fastcall ShopRootComponent__WaitPurchase_d__116__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ShopRootComponent__WaitPurchase_d__116_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn ShopRootComponent__WaitPurchase_d__116__System_Collections_IEnumerator_Reset(
        ShopRootComponent__WaitPurchase_d__116_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_ShopRootComponent__WaitPurchase_d__116_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
}


Il2CppObject *__fastcall ShopRootComponent__WaitPurchase_d__116__System_Collections_IEnumerator_get_Current(
        ShopRootComponent__WaitPurchase_d__116_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall ShopRootComponent__WaitPurchase_d__116__System_IDisposable_Dispose(
        ShopRootComponent__WaitPurchase_d__116_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall ShopRootComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A57843 & 1) == 0 )
  {
    sub_1B885B0(&ShopRootComponent___c_TypeInfo);
    byte_4A57843 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(ShopRootComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  ShopRootComponent___c_TypeInfo->static_fields->__9 = (struct ShopRootComponent___c_o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)ShopRootComponent___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void __fastcall ShopRootComponent___c___ctor(ShopRootComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ShopRootComponent___c___WaitPurchase_b__116_0(ShopRootComponent___c_o *this, const MethodInfo *method)
{
  PurchaseBehaviour_c *v2; // x0

  if ( (byte_4A57844 & 1) == 0 )
  {
    sub_1B885B0(&PurchaseBehaviour_TypeInfo);
    byte_4A57844 = 1;
  }
  v2 = PurchaseBehaviour_TypeInfo;
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
    v2 = PurchaseBehaviour_TypeInfo;
  }
  return !v2->static_fields->isOpenPurchaseDialogEvent;
}


void __fastcall ShopRootComponent___c__DisplayClass102_0___ctor(
        ShopRootComponent___c__DisplayClass102_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ShopRootComponent___c__DisplayClass102_0___PlayServantCostumeReleaseEffect_b__0(
        ShopRootComponent___c__DisplayClass102_0_o *this,
        const MethodInfo *method)
{
  ShopRootComponent___c__DisplayClass102_0_o *v2; // x19
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
  if ( (byte_4A57845 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_1B885B0(&Method_ShopRootComponent_OnEndPlayServantCostumeReleaseEffect__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (ShopRootComponent___c__DisplayClass102_0_o *)sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A57845 = 1;
  }
  entity = 0LL;
  shopEntity = v2->fields.shopEntity;
  if ( !shopEntity )
    goto LABEL_15;
  targetIds = shopEntity->fields.targetIds;
  if ( !targetIds )
    goto LABEL_15;
  if ( !targetIds->max_length )
    sub_1B88814(this, method);
  this = (ShopRootComponent___c__DisplayClass102_0_o *)System_Int32__ToString((int)targetIds + 32, 0LL);
  if ( !this )
    goto LABEL_15;
  v5 = (System_String_o *)this;
  v6 = System_String__Substring_61726036((System_String_o *)this, 0, LODWORD(this->fields.shopEntity) - 2, 0LL);
  v7 = System_Int32__Parse(v6, 0LL);
  v8 = System_String__Substring(v5, v5->fields._stringLength - 2, 0LL);
  v9 = System_Int32__Parse(v8, 0LL);
  this = (ShopRootComponent___c__DisplayClass102_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_15;
  this = (ShopRootComponent___c__DisplayClass102_0_o *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)this,
                                                         (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  if ( !this )
    goto LABEL_15;
  if ( ServantCostumeMaster__TryGetEntity((ServantCostumeMaster_o *)this, &entity, v7, v9, 0LL) )
  {
    this = (ShopRootComponent___c__DisplayClass102_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( entity )
    {
      name = entity->fields.name;
      _4__this = (Il2CppObject *)v2->fields.__4__this;
      v12 = (CommonUI_o *)this;
      v13 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v13, _4__this, Method_ShopRootComponent_OnEndPlayServantCostumeReleaseEffect__, 0LL);
      if ( v12 )
      {
        CommonUI__OpenCostumeReleaseEffect(v12, 1, name, v13, 23, 0LL);
        return;
      }
    }
LABEL_15:
    sub_1B8880C(this, method);
  }
  this = (ShopRootComponent___c__DisplayClass102_0_o *)v2->fields.__4__this;
  if ( !this )
    goto LABEL_15;
  ShopRootComponent__OnEndPlayServantCostumeReleaseEffect((ShopRootComponent_o *)this, method);
}


void __fastcall ShopRootComponent___c__DisplayClass68_0___ctor(
        ShopRootComponent___c__DisplayClass68_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ShopRootComponent___c__DisplayClass68_0___LoadBanner_b__0(
        ShopRootComponent___c__DisplayClass68_0_o *this,
        const MethodInfo *method)
{
  PurchaseBehaviour_c *v3; // x0
  ShopPlayVoiceComponent_o *shopPlayVoiceComponent; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x5
  struct ShopRootComponent_o *_4__this; // x8
  int32_t v8; // w4

  if ( (byte_4A57846 & 1) == 0 )
  {
    sub_1B885B0(&PurchaseBehaviour_TypeInfo);
    byte_4A57846 = 1;
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
    || (_4__this->fields.isFromCoinRoom ? (v8 = 17) : (v8 = 0),
        ShopPlayVoiceComponent__LoadVoice(
          shopPlayVoiceComponent,
          _4__this->fields.figureSvtId,
          this->fields.jumpedState,
          _4__this->fields.isFromCoinRoom,
          v8,
          v6),
        (shopPlayVoiceComponent = (ShopPlayVoiceComponent_o *)this->fields.__4__this) == 0LL) )
  {
    sub_1B8880C(shopPlayVoiceComponent, v5);
  }
  SceneRootComponent__beginStartUp_38666476((SceneRootComponent_o *)shopPlayVoiceComponent, 0LL);
}


void __fastcall ShopRootComponent___c__DisplayClass76_0___ctor(
        ShopRootComponent___c__DisplayClass76_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ShopRootComponent___c__DisplayClass76_0___SelectMenu_b__0(
        ShopRootComponent___c__DisplayClass76_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x5
  ShopRootComponent___c__DisplayClass76_0_o *v3; // x19
  struct ShopRootComponent_o *_4__this; // x8
  ShopSceneListViewControlHelper_o *listViewHelper; // x20
  System_Action_o *_9__1; // x24
  int32_t selectedEventIndex; // w21
  int32_t state; // w22
  int32_t v9; // w2
  int32_t v10; // w3
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x3
  struct ShopRootComponent_o *v13; // x8

  v3 = this;
  if ( (byte_4A57847 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    this = (ShopRootComponent___c__DisplayClass76_0_o *)sub_1B885B0(&Method_ShopRootComponent___c__DisplayClass76_0__SelectMenu_b__1__);
    byte_4A57847 = 1;
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
    _9__1 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v3,
      Method_ShopRootComponent___c__DisplayClass76_0__SelectMenu_b__1__,
      0LL);
    v3->fields.__9__1 = _9__1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v3->fields.__9__1, (int32_t)_9__1, v9, v10);
  }
  if ( !listViewHelper
    || (ShopSceneListViewControlHelper__SetListViewOnSelectMenu(
          listViewHelper,
          state,
          &v3->fields.eventId,
          selectedEventIndex,
          _9__1,
          v2),
        (this = (ShopRootComponent___c__DisplayClass76_0_o *)v3->fields.__4__this) == 0LL)
    || (ShopRootComponent__OpenStonePurchaseMenu((ShopRootComponent_o *)this, v3->fields.state, v11),
        (this = (ShopRootComponent___c__DisplayClass76_0_o *)v3->fields.__4__this) == 0LL)
    || (ShopRootComponent__OpenEventItemWindow((ShopRootComponent_o *)this, v3->fields.state, v3->fields.eventId, v12),
        (v13 = v3->fields.__4__this) == 0LL) )
  {
LABEL_11:
    sub_1B8880C(this, method);
  }
  *(_QWORD *)&v13->fields.state = (unsigned int)v3->fields.state;
}


void __fastcall ShopRootComponent___c__DisplayClass76_0___SelectMenu_b__1(
        ShopRootComponent___c__DisplayClass76_0_o *this,
        const MethodInfo *method)
{
  ShopRootComponent___c__DisplayClass76_0_o *v2; // x19
  struct ShopRootComponent_o *_4__this; // x8
  const MethodInfo *v4; // x2
  struct ShopRootComponent_o *v5; // x8
  struct ShopPlayVoiceComponent_o *shopPlayVoiceComponent; // x20
  const MethodInfo *v7; // x6
  ShopRootComponent___c__DisplayClass76_0_o *v8; // x21
  ShopRootConstants_c *v9; // x8
  int32_t eventId; // w20
  int32_t *p_state; // x8
  int32_t *p__9__2; // x9
  struct ShopRootConstants_StaticFields *static_fields; // x9
  struct ShopRootComponent_o *v14; // x10
  int32_t v15; // w21
  int32_t v16; // w22
  ShopPlayVoiceComponent_o *v17; // x23
  StandFigureBack_o *standFigureBack; // x24
  System_Action_o *_9__2; // x25
  int32_t v20; // w2
  int32_t v21; // w3

  v2 = this;
  if ( (byte_4A57848 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_GuideMaster___);
    sub_1B885B0(&ShopRootConstants_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (ShopRootComponent___c__DisplayClass76_0_o *)sub_1B885B0(&Method_ShopRootComponent___c__DisplayClass76_0__SelectMenu_b__2__);
    byte_4A57848 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_24;
  this = (ShopRootComponent___c__DisplayClass76_0_o *)_4__this->fields.shopPlayVoiceComponent;
  if ( !this )
    goto LABEL_24;
  ShopPlayVoiceComponent__StopVoice((ShopPlayVoiceComponent_o *)this, method);
  if ( v2->fields.state != 15 )
    goto LABEL_22;
  v5 = v2->fields.__4__this;
  if ( !v5 )
    goto LABEL_24;
  shopPlayVoiceComponent = v5->fields.shopPlayVoiceComponent;
  this = (ShopRootComponent___c__DisplayClass76_0_o *)ShopPlayVoiceConstants__GetEnterVoiceFlag(15, method);
  if ( !shopPlayVoiceComponent )
    goto LABEL_24;
  if ( !shopPlayVoiceComponent->fields.isPlayingVoice
    && (shopPlayVoiceComponent->fields.voicePlayOnce & (unsigned int)this) == 0 )
  {
    this = (ShopRootComponent___c__DisplayClass76_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (ShopRootComponent___c__DisplayClass76_0_o *)DataManager__GetMasterData_object_(
                                                            (DataManager_o *)this,
                                                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_GuideMaster___);
      if ( this )
      {
        this = (ShopRootComponent___c__DisplayClass76_0_o *)GuideMaster__getGuideData((GuideMaster_o *)this, 3, 0LL);
        v8 = this;
        v9 = ShopRootConstants_TypeInfo;
        if ( !ShopRootConstants_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
          v9 = ShopRootConstants_TypeInfo;
        }
        if ( v8 )
        {
          eventId = v8->fields.eventId;
          p_state = &v8->fields.state;
          p__9__2 = (int32_t *)&v8->fields.__9__2;
        }
        else
        {
          static_fields = v9->static_fields;
          eventId = 0;
          p_state = &static_fields->DEFAULT_FIGURE_ID;
          p__9__2 = &static_fields->DEFAULT_FIGURE_LIMIT_CNT;
        }
        v14 = v2->fields.__4__this;
        if ( v14 )
        {
          v15 = *p_state;
          v16 = *p__9__2;
          v17 = v14->fields.shopPlayVoiceComponent;
          standFigureBack = v14->fields.standFigureBack;
          _9__2 = v2->fields.__9__2;
          if ( !_9__2 )
          {
            _9__2 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
            System_Action___ctor(
              _9__2,
              (Il2CppObject *)v2,
              Method_ShopRootComponent___c__DisplayClass76_0__SelectMenu_b__2__,
              0LL);
            v2->fields.__9__2 = _9__2;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields.__9__2, (int32_t)_9__2, v20, v21);
          }
          if ( v17 )
          {
            ShopPlayVoiceComponent__ReloadVoice(v17, standFigureBack, v15, v16, eventId, _9__2, v7);
            goto LABEL_22;
          }
        }
      }
    }
LABEL_24:
    sub_1B8880C(this, method);
  }
LABEL_22:
  if ( !v2->fields.__4__this )
    goto LABEL_24;
  ShopRootComponent__SetFadeIn((ShopRootComponent_o *)this, v2->fields.state, v4);
}


void __fastcall ShopRootComponent___c__DisplayClass76_0___SelectMenu_b__2(
        ShopRootComponent___c__DisplayClass76_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1B8880C(this, method);
  ShopRootComponent__PlayVoiceEnter(this->fields.__4__this, this->fields.state, v2);
}


void __fastcall ShopRootComponent___c__DisplayClass77_0___ctor(
        ShopRootComponent___c__DisplayClass77_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ShopRootComponent___c__DisplayClass77_0___BackMenu_b__0(
        ShopRootComponent___c__DisplayClass77_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  ShopRootComponent___c__DisplayClass77_0_o *v3; // x19
  struct ShopRootComponent_o *_4__this; // x8
  ShopSceneListViewControlHelper_o *listViewHelper; // x20
  System_Action_o *_9__1; // x23
  int32_t state; // w21
  int32_t v8; // w22
  int32_t v9; // w2
  int32_t v10; // w3
  struct ShopRootComponent_o *v11; // x8

  v3 = this;
  if ( (byte_4A57849 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    this = (ShopRootComponent___c__DisplayClass77_0_o *)sub_1B885B0(&Method_ShopRootComponent___c__DisplayClass77_0__BackMenu_b__1__);
    byte_4A57849 = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  listViewHelper = _4__this->fields.listViewHelper;
  _9__1 = v3->fields.__9__1;
  state = v3->fields.state;
  v8 = state == 8 ? 7 : 1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v3,
      Method_ShopRootComponent___c__DisplayClass77_0__BackMenu_b__1__,
      0LL);
    v3->fields.__9__1 = _9__1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v3->fields.__9__1, (int32_t)_9__1, v9, v10);
  }
  if ( !listViewHelper
    || (ShopSceneListViewControlHelper__SetListViewOnBackMenu(listViewHelper, state, v8, _9__1, v2),
        (this = (ShopRootComponent___c__DisplayClass77_0_o *)v3->fields.__4__this) == 0LL)
    || (ShopRootComponent__CloseEventItemWindow((ShopRootComponent_o *)this, method), (v11 = v3->fields.__4__this) == 0LL) )
  {
LABEL_13:
    sub_1B8880C(this, method);
  }
  v11->fields.inputState = 3;
}


void __fastcall ShopRootComponent___c__DisplayClass77_0___BackMenu_b__1(
        ShopRootComponent___c__DisplayClass77_0_o *this,
        const MethodInfo *method)
{
  ShopRootComponent___c__DisplayClass77_0_o *v2; // x19
  struct ShopRootComponent_o *_4__this; // x8
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x6
  struct ShopRootComponent_o *v6; // x8
  ShopPlayVoiceComponent_o *shopPlayVoiceComponent; // x20
  StandFigureBack_o *standFigureBack; // x21
  int32_t figureSvtId; // w22
  int32_t figureSvtLimitCnt; // w23
  int32_t defaultFaceId; // w24
  System_Action_o *_9__2; // x25
  int32_t v13; // w2
  int32_t v14; // w3

  v2 = this;
  if ( (byte_4A5784A & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    this = (ShopRootComponent___c__DisplayClass77_0_o *)sub_1B885B0(&Method_ShopRootComponent___c__DisplayClass77_0__BackMenu_b__2__);
    byte_4A5784A = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  this = (ShopRootComponent___c__DisplayClass77_0_o *)_4__this->fields.shopPlayVoiceComponent;
  if ( !this )
    goto LABEL_13;
  ShopPlayVoiceComponent__StopVoice((ShopPlayVoiceComponent_o *)this, method);
  if ( v2->fields.state != 15 )
    goto LABEL_11;
  v6 = v2->fields.__4__this;
  if ( !v6 )
    goto LABEL_13;
  shopPlayVoiceComponent = v6->fields.shopPlayVoiceComponent;
  standFigureBack = v6->fields.standFigureBack;
  figureSvtId = v6->fields.figureSvtId;
  figureSvtLimitCnt = v6->fields.figureSvtLimitCnt;
  defaultFaceId = v6->fields.defaultFaceId;
  _9__2 = v2->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v2,
      Method_ShopRootComponent___c__DisplayClass77_0__BackMenu_b__2__,
      0LL);
    v2->fields.__9__2 = _9__2;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields.__9__2, (int32_t)_9__2, v13, v14);
  }
  if ( !shopPlayVoiceComponent )
LABEL_13:
    sub_1B8880C(this, method);
  ShopPlayVoiceComponent__ReloadVoice(
    shopPlayVoiceComponent,
    standFigureBack,
    figureSvtId,
    figureSvtLimitCnt,
    defaultFaceId,
    _9__2,
    v5);
LABEL_11:
  if ( !v2->fields.__4__this )
    goto LABEL_13;
  ShopRootComponent__SetFadeIn((ShopRootComponent_o *)this, v2->fields.state, v4);
}


void __fastcall ShopRootComponent___c__DisplayClass77_0___BackMenu_b__2(
        ShopRootComponent___c__DisplayClass77_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1B8880C(this, method);
  ShopRootComponent__PlayVoiceBack(this->fields.__4__this, this->fields.state, v2);
}


void __fastcall ShopRootComponent___c__DisplayClass78_0___ctor(
        ShopRootComponent___c__DisplayClass78_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ShopRootComponent___c__DisplayClass78_0___SetFadeOut_b__0(
        ShopRootComponent___c__DisplayClass78_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.endFade, 0LL);
}


void __fastcall ShopRootComponent___c__DisplayClass81_0___ctor(
        ShopRootComponent___c__DisplayClass81_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ShopRootComponent___c__DisplayClass81_0___OpenConfirmMenu_b__0(
        ShopRootComponent___c__DisplayClass81_0_o *this,
        const MethodInfo *method)
{
  ShopRootComponent___c__DisplayClass81_0_o *v2; // x19
  Il2CppObject *_4__this; // x22
  struct ShopBuyItemListViewItem_o *item; // x8
  ShopBuyItemConfirmMenu_o *monitor; // x19
  ShopEntity_o *Shop_k__BackingField; // x20
  int32_t ShopKind_k__BackingField; // w21
  System_Action_int__o *v8; // x23

  v2 = this;
  if ( (byte_4A5784B & 1) == 0 )
  {
    sub_1B885B0(&System_Action_int__TypeInfo);
    this = (ShopRootComponent___c__DisplayClass81_0_o *)sub_1B885B0(&Method_ShopRootComponent_SelectedBuyItemConfirm__);
    byte_4A5784B = 1;
  }
  _4__this = (Il2CppObject *)v2->fields.__4__this;
  if ( !_4__this
    || (item = v2->fields.item) == 0LL
    || (monitor = (ShopBuyItemConfirmMenu_o *)_4__this[9].monitor,
        Shop_k__BackingField = item->fields._Shop_k__BackingField,
        ShopKind_k__BackingField = item->fields._ShopKind_k__BackingField,
        v8 = (System_Action_int__o *)sub_1B887FC(System_Action_int__TypeInfo),
        System_Action_int____ctor(v8, _4__this, Method_ShopRootComponent_SelectedBuyItemConfirm__, 0LL),
        !monitor) )
  {
    sub_1B8880C(this, method);
  }
  ShopBuyItemConfirmMenu__Open(monitor, Shop_k__BackingField, ShopKind_k__BackingField, v8, 0, 0LL);
}


void __fastcall ShopRootComponent___c__DisplayClass81_0___OpenConfirmMenu_b__1(
        ShopRootComponent___c__DisplayClass81_0_o *this,
        const MethodInfo *method)
{
  ShopRootComponent___c__DisplayClass81_0_o *v2; // x19
  Il2CppObject *_4__this; // x22
  struct ShopBuyItemListViewItem_o *item; // x8
  ShopBuyItemConfirmMenu_o *monitor; // x19
  ShopEntity_o *Shop_k__BackingField; // x20
  int32_t ShopKind_k__BackingField; // w21
  System_Action_int__o *v8; // x23

  v2 = this;
  if ( (byte_4A5784C & 1) == 0 )
  {
    sub_1B885B0(&System_Action_int__TypeInfo);
    this = (ShopRootComponent___c__DisplayClass81_0_o *)sub_1B885B0(&Method_ShopRootComponent_SelectedBuyItemConfirm__);
    byte_4A5784C = 1;
  }
  _4__this = (Il2CppObject *)v2->fields.__4__this;
  if ( !_4__this
    || (item = v2->fields.item) == 0LL
    || (monitor = (ShopBuyItemConfirmMenu_o *)_4__this[9].monitor,
        Shop_k__BackingField = item->fields._Shop_k__BackingField,
        ShopKind_k__BackingField = item->fields._ShopKind_k__BackingField,
        v8 = (System_Action_int__o *)sub_1B887FC(System_Action_int__TypeInfo),
        System_Action_int____ctor(v8, _4__this, Method_ShopRootComponent_SelectedBuyItemConfirm__, 0LL),
        !monitor) )
  {
    sub_1B8880C(this, method);
  }
  ShopBuyItemConfirmMenu__Open(monitor, Shop_k__BackingField, ShopKind_k__BackingField, v8, 0, 0LL);
}


void __fastcall ShopRootComponent___c__DisplayClass91_0___ctor(
        ShopRootComponent___c__DisplayClass91_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopRootComponent___c__DisplayClass91_0___SelectSellServantConfirm_b__0(
        ShopRootComponent___c__DisplayClass91_0_o *this,
        int32_t decide,
        const MethodInfo *method)
{
  ServantSellConfirmMenu_o *_4__this; // x0
  Il2CppObject *v6; // x24
  ServantSellConfirmMenu_o *klass; // x20
  int32_t kind; // w19
  System_Int64_array *v9; // x21
  System_Int64_array *monitor; // x22
  System_Action_int__o *v11; // x23

  if ( (byte_4A5784D & 1) == 0 )
  {
    sub_1B885B0(&System_Action_int__TypeInfo);
    sub_1B885B0(&Method_ShopRootComponent_SellServantConfirm__);
    byte_4A5784D = 1;
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
        v9 = (System_Int64_array *)v6[29].klass;
        monitor = (System_Int64_array *)v6[29].monitor;
        v11 = (System_Action_int__o *)sub_1B887FC(System_Action_int__TypeInfo);
        System_Action_int____ctor(v11, v6, Method_ShopRootComponent_SellServantConfirm__, 0LL);
        if ( klass )
        {
          ServantSellConfirmMenu__Open(klass, kind, v9, monitor, v11, 0LL);
          return;
        }
      }
    }
LABEL_10:
    sub_1B8880C(_4__this, *(_QWORD *)&decide);
  }
  ShopRootComponent__CloseSellServantConfirm((ShopRootComponent_o *)_4__this, *(const MethodInfo **)&decide);
}


void __fastcall ShopRootComponent___c__DisplayClass95_0___ctor(
        ShopRootComponent___c__DisplayClass95_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ShopRootComponent___c__DisplayClass95_0___PlayLvExceedItemReleaseEffect_b__0(
        ShopRootComponent___c__DisplayClass95_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  System_Action_o *_9__1; // x22
  CommonUI_o *v6; // x21
  QuestRewardInfo_o *questRewardInfo; // x20
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A5784E & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_ShopRootComponent___c__DisplayClass95_0__PlayLvExceedItemReleaseEffect_b__1__);
    byte_4A5784E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__1 = this->fields.__9__1;
  v6 = (CommonUI_o *)Instance;
  questRewardInfo = this->fields.questRewardInfo;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_ShopRootComponent___c__DisplayClass95_0__PlayLvExceedItemReleaseEffect_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.__9__1, (int32_t)_9__1, v8, v9);
  }
  if ( !v6 )
    sub_1B8880C(Instance, v4);
  CommonUI__LoadItemGetEffect(v6, questRewardInfo, _9__1, 0LL);
}


void __fastcall ShopRootComponent___c__DisplayClass95_0___PlayLvExceedItemReleaseEffect_b__1(
        ShopRootComponent___c__DisplayClass95_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *Instance; // x0
  __int64 v4; // x1
  struct ShopRootComponent_o *_4__this; // x8
  CommonUI_o *v6; // x20
  System_Action_o *_9__2; // x23
  UnityEngine_Transform_o *v8; // x22
  QuestRewardInfo_o *questRewardInfo; // x21
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4A5784F & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_ShopRootComponent___c__DisplayClass95_0__PlayLvExceedItemReleaseEffect_b__2__);
    byte_4A5784F = 1;
  }
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    _9__2 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_ShopRootComponent___c__DisplayClass95_0__PlayLvExceedItemReleaseEffect_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.__9__2, (int32_t)_9__2, v10, v11);
  }
  if ( !v6 )
LABEL_9:
    sub_1B8880C(Instance, v4);
  CommonUI__OpenItemGetEffect(v6, v8, 0, questRewardInfo, _9__2, 0LL);
}


void __fastcall ShopRootComponent___c__DisplayClass95_0___PlayLvExceedItemReleaseEffect_b__2(
        ShopRootComponent___c__DisplayClass95_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  AvalonSceneManager_c *v5; // x8
  CommonUI_o *v6; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__3; // x21
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_4A57850 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AvalonSceneManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_ShopRootComponent___c__DisplayClass95_0__PlayLvExceedItemReleaseEffect_b__3__);
    byte_4A57850 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  CommonUI__ReleaseItemGetEffect((CommonUI_o *)Instance, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    _9__3 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_ShopRootComponent___c__DisplayClass95_0__PlayLvExceedItemReleaseEffect_b__3__,
      0LL);
    this->fields.__9__3 = _9__3;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.__9__3, (int32_t)_9__3, v9, v10);
  }
  if ( !v6 )
LABEL_10:
    sub_1B8880C(Instance, v4);
  CommonUI__maskFadein(v6, DEFAULT_FADE_TIME, _9__3, 0LL);
}


void __fastcall ShopRootComponent___c__DisplayClass95_0___PlayLvExceedItemReleaseEffect_b__3(
        ShopRootComponent___c__DisplayClass95_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  struct ShopBuyItemListViewItem_o *item; // x1

  item = this->fields.item;
  if ( !item || (this = (ShopRootComponent___c__DisplayClass95_0_o *)this->fields.__4__this) == 0LL )
    sub_1B8880C(this, item);
  ShopRootComponent__ShowNormalItemDialog((ShopRootComponent_o *)this, item, item->fields._Shop_k__BackingField, v2);
}