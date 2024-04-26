void __fastcall ShopRootComponent___cctor(const MethodInfo *method)
{
  ;
}


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
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  const MethodInfo *v14; // x2
  System_Action_o *v15; // x20
  ShopRootComponent_o *v16; // x0
  const MethodInfo *v17; // x3

  if ( (byte_4353703 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_ShopRootComponent___c__DisplayClass77_0__BackMenu_b__0__);
    sub_B70694(&ShopRootComponent___c__DisplayClass77_0_TypeInfo);
    byte_4353703 = 1;
  }
  v5 = sub_B70764(ShopRootComponent___c__DisplayClass77_0_TypeInfo);
  ShopRootComponent___c__DisplayClass77_0___ctor((ShopRootComponent___c__DisplayClass77_0_o *)v5, 0LL);
  if ( !v5 )
    sub_B7076C(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v5 + 24) = state;
  if ( state != 15 )
  {
    ShopRootComponent__PlayVoiceBack(this, state, v14);
    state = *(_DWORD *)(v5 + 24);
  }
  v15 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v15, (Il2CppObject *)v5, Method_ShopRootComponent___c__DisplayClass77_0__BackMenu_b__0__, 0LL);
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
  struct ShopSceneListViewControlHelper_o *listViewHelper; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v13; // x20
  EventEntity_o *v14; // x21
  CommonUI_o *Instance; // x20
  System_String_o *v17; // x22
  Il2CppObject *EventName; // x0
  System_String_o *v19; // x21
  System_Action_o *v20; // x22

  if ( (byte_4353724 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_EventMaster___);
    sub_B70694(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&Method_ShopRootComponent_OnEndDialogEventCloseWarning__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&TerminalPramsManager_TypeInfo);
    sub_B70694(&StringLiteral_6263/*"EventItem"*/);
    sub_B70694(&StringLiteral_3111/*"CLICK_BACK"*/);
    sub_B70694(&StringLiteral_13258/*"StoneFragments"*/);
    sub_B70694(&StringLiteral_12310/*"SHOP_EVENT_RETURN_ERROR"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4353724 = 1;
  }
  switch ( state )
  {
    case 1:
      jumpInfo = this->fields.jumpInfo;
      if ( !jumpInfo || !SceneJumpInfo__IsEnableReturnScene(jumpInfo, 0LL) )
        goto LABEL_8;
      myFSM = this->fields.jumpInfo;
      if ( !myFSM )
        goto LABEL_52;
      if ( SceneJumpInfo__ReturnScene((SceneJumpInfo_o *)myFSM, 0LL) )
        return 1;
LABEL_8:
      myFSM = this->fields.myFSM;
      if ( !myFSM )
        goto LABEL_52;
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myFSM, (System_String_o *)StringLiteral_3111/*"CLICK_BACK"*/, 0LL);
      return 1;
    case 4:
      v9 = this->fields.jumpInfo;
      if ( !v9 || !System_String__op_Equality(v9->fields.name, (System_String_o *)StringLiteral_13258/*"StoneFragments"*/, 0LL) )
        return 0;
      myFSM = this->fields.jumpInfo;
      if ( !myFSM )
        goto LABEL_52;
      if ( !SceneJumpInfo__ReturnScene((SceneJumpInfo_o *)myFSM, 0LL) )
        return 0;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      v7 = 1;
      TerminalPramsManager__set_IsAutoOpenMasterMission(1, 0LL);
      return v7;
    case 7:
      v8 = this->fields.jumpInfo;
      if ( !v8 || !System_String__op_Equality(v8->fields.name, (System_String_o *)StringLiteral_6263/*"EventItem"*/, 0LL) )
        return 0;
      myFSM = this->fields.jumpInfo;
      if ( !myFSM )
        goto LABEL_52;
      return SceneJumpInfo__ReturnScene((SceneJumpInfo_o *)myFSM, 0LL);
    case 8:
      v10 = this->fields.jumpInfo;
      if ( !v10 )
        return 0;
      if ( !System_String__op_Equality(v10->fields.name, (System_String_o *)StringLiteral_6263/*"EventItem"*/, 0LL) )
        goto LABEL_38;
      myFSM = this->fields.jumpInfo;
      if ( !myFSM )
        goto LABEL_52;
      if ( !*((_DWORD *)myFSM + 6) || !SceneJumpInfo__ReturnScene((SceneJumpInfo_o *)myFSM, 0LL) )
      {
LABEL_38:
        myFSM = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( myFSM )
        {
          myFSM = DataManager__GetMasterData_WarQuestSelectionMaster_(
                    (DataManager_o *)myFSM,
                    (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventMaster___);
          listViewHelper = this->fields.listViewHelper;
          if ( listViewHelper )
          {
            v13 = (DataMasterBase_WarMaster__WarEntity__int__o *)myFSM;
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
                  myFSM = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                            v13,
                            *((_DWORD *)myFSM + 28),
                            (const MethodInfo_21C0440 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
                  if ( myFSM )
                  {
                    v14 = (EventEntity_o *)myFSM;
                    if ( EventEntity__IsOpen((EventEntity_o *)myFSM, 1, 0LL) )
                      return 0;
                    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !LocalizationManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    }
                    v17 = LocalizationManager__Get((System_String_o *)StringLiteral_12310/*"SHOP_EVENT_RETURN_ERROR"*/, 0LL);
                    EventName = (Il2CppObject *)EventEntity__getEventName(v14, 0LL);
                    v19 = System_String__Format(v17, EventName, 0LL);
                    v20 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
                    System_Action___ctor(
                      v20,
                      (Il2CppObject *)this,
                      Method_ShopRootComponent_OnEndDialogEventCloseWarning__,
                      0LL);
                    if ( Instance )
                    {
                      v7 = 1;
                      CommonUI__OpenNotificationDialog(
                        Instance,
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
                        0LL);
                      return v7;
                    }
                  }
                }
              }
            }
          }
        }
LABEL_52:
        sub_B7076C(myFSM, *(_QWORD *)&state);
      }
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_434DEAC )
      {
        sub_B70694(&TerminalPramsManager_TypeInfo);
        byte_434DEAC = 1;
      }
      v11 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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
  if ( (byte_435370D & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_int___ctor__);
    sub_B70694(&System_Action_int__TypeInfo);
    this = (ShopRootComponent_o *)sub_B70694(&Method_ShopRootComponent_SellServantExceededConfirm__);
    byte_435370D = 1;
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
    v9 = (System_Action_int__o *)sub_B70764(System_Action_int__TypeInfo);
    System_Action_int____ctor(
      v9,
      (Il2CppObject *)v3,
      Method_ShopRootComponent_SellServantExceededConfirm__,
      (const MethodInfo_264ABB8 *)Method_System_Action_int___ctor__);
    if ( !servantSellConfirmMenu )
LABEL_11:
      sub_B7076C(servantSellMenu, v4);
    ServantSellConfirmMenu__Open(servantSellConfirmMenu, 2, selectedServantIds, selectedCommandCodeIds, v9, 0LL);
  }
}


bool __fastcall ShopRootComponent__CheckServerLimitTime(
        ShopRootComponent_o *this,
        int32_t state,
        const MethodInfo *method)
{
  NetworkManager_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4353730 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    byte_4353730 = 1;
  }
  if ( (unsigned int)state > 0x15 || ((1 << state) & 0x35DDFC) == 0 )
    return 1;
  Instance = (NetworkManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v5);
  return NetworkManager__CheckServerLimitTime(Instance, 0LL);
}


void __fastcall ShopRootComponent__CheckTutorial(ShopRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  NetworkManager_ResultCallbackFunc_o *v4; // x20
  TutorialSetRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v6; // x1

  if ( (byte_4353721 & 1) == 0 )
  {
    sub_B70694(&Method_NetworkManager_getRequest_TutorialSetRequest___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_B70694(&Method_ShopRootComponent_QuitHelp__);
    sub_B70694(&TutorialFlag_TypeInfo);
    sub_B70694(&StringLiteral_21560/*"ok"*/);
    byte_4353721 = 1;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_29045252(103, 0LL) )
  {
    ShopRootComponent__QuitHelp(this, (System_String_o *)StringLiteral_21560/*"ok"*/, v3);
  }
  else
  {
    v4 = (NetworkManager_ResultCallbackFunc_o *)sub_B70764(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(v4, (Il2CppObject *)this, Method_ShopRootComponent_QuitHelp__, 0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = (TutorialSetRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                  v4,
                                                                  (const MethodInfo_1D57A4C *)Method_NetworkManager_getRequest_TutorialSetRequest___);
    if ( !Request_WarBoardWallAttackRequest )
      sub_B7076C(0LL, v6);
    TutorialSetRequest__beginRequest(Request_WarBoardWallAttackRequest, 103, 0LL);
  }
}


void __fastcall ShopRootComponent__CloseDetaiCheckConfirm(
        ShopRootComponent_o *this,
        bool decide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  struct ShopSceneListViewControlHelper_o *listViewHelper; // x8
  ShopBuyItemListViewItem_o *Item; // x21
  struct ShopEntity_o *Shop_k__BackingField; // x8
  ShopDetailEntity_o *ShopDetailEntity; // x0
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x1

  if ( (byte_435372B & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ShopDetailMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_435372B = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseConfirmDialog(Instance, 0LL), (listViewHelper = this->fields.listViewHelper) == 0LL)
    || (Instance = (CommonUI_o *)listViewHelper->fields.buyItemListViewManager) == 0LL
    || (Item = ShopBuyItemListViewManager__GetItem(
                 (ShopBuyItemListViewManager_o *)Instance,
                 this->fields.selectedItemIndex,
                 0LL),
        (Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (CommonUI_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ShopDetailMaster___),
        !Item)
    || (Shop_k__BackingField = Item->fields._Shop_k__BackingField) == 0LL
    || !Instance )
  {
    sub_B7076C(Instance, v6);
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
  UnityEngine_GameObject_o *gameObject; // x20
  ShopRootConstants_c *v5; // x8

  if ( (byte_435372F & 1) == 0 )
  {
    sub_B70694(&ShopRootConstants_TypeInfo);
    byte_435372F = 1;
  }
  shopEventItemDrawBase = (UnityEngine_Component_o *)this->fields.shopEventItemDrawBase;
  if ( !shopEventItemDrawBase )
    goto LABEL_9;
  gameObject = UnityEngine_Component__get_gameObject(shopEventItemDrawBase, 0LL);
  v5 = ShopRootConstants_TypeInfo;
  if ( (BYTE3(ShopRootConstants_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ShopRootConstants_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
    v5 = ShopRootConstants_TypeInfo;
  }
  TweenAlpha__Begin(gameObject, v5->static_fields->CLOSE_TIME, 0.0, 0LL);
  shopEventItemDrawBase = (UnityEngine_Component_o *)this->fields.currencyInfoController;
  if ( !shopEventItemDrawBase )
LABEL_9:
    sub_B7076C(shopEventItemDrawBase, method);
  ShopCurrencyInfoController__StopUpdateRemainTime((ShopCurrencyInfoController_o *)shopEventItemDrawBase, 0LL);
}


void __fastcall ShopRootComponent__CloseItemConfirm(ShopRootComponent_o *this, const MethodInfo *method)
{
  ShopBuyItemConfirmMenu_o *buyItemConfirmMenu; // x0
  const MethodInfo *v4; // x2
  int32_t state; // w20
  struct ShopSceneListViewControlHelper_o *listViewHelper; // x8
  ShopBuyItemListViewItem_o *v7; // x20
  ShopEntity_o *freeLabel; // x21
  ShopSceneListViewControlHelper_o **p_listViewHelper; // x22
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x2
  ShopSceneListViewControlHelper_o *v13; // x21
  const MethodInfo *v14; // x2

  if ( (byte_435370C & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMaster_ShopMaster___);
    sub_B70694(&DataManager_TypeInfo);
    byte_435370C = 1;
  }
  if ( this->fields.inputState == 3 )
  {
    buyItemConfirmMenu = this->fields.buyItemConfirmMenu;
    this->fields.inputState = 4;
    if ( !buyItemConfirmMenu )
      goto LABEL_53;
    if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)buyItemConfirmMenu, 0LL) )
    {
      buyItemConfirmMenu = this->fields.buyItemConfirmMenu;
      if ( !buyItemConfirmMenu )
        goto LABEL_53;
      ShopBuyItemConfirmMenu__Close(buyItemConfirmMenu, 0LL);
    }
    buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)this->fields.buyBulkItemConfirmMenu;
    if ( !buyItemConfirmMenu )
      goto LABEL_53;
    if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)buyItemConfirmMenu, 0LL) )
    {
      buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)this->fields.buyBulkItemConfirmMenu;
      if ( !buyItemConfirmMenu )
        goto LABEL_53;
      ShopBuyBulkItemConfirmMenu__Close((ShopBuyBulkItemConfirmMenu_o *)buyItemConfirmMenu, 0LL);
    }
    buyItemConfirmMenu = this->fields.ApSeedExchangeConfirmMenu;
    if ( !buyItemConfirmMenu )
      goto LABEL_53;
    if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)buyItemConfirmMenu, 0LL) )
    {
      buyItemConfirmMenu = this->fields.ApSeedExchangeConfirmMenu;
      if ( !buyItemConfirmMenu )
        goto LABEL_53;
      ShopBuyItemConfirmMenu__Close(buyItemConfirmMenu, 0LL);
    }
    buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)this->fields.ApSeedBulkExchangeConfirmMenu;
    if ( !buyItemConfirmMenu )
      goto LABEL_53;
    if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)buyItemConfirmMenu, 0LL) )
    {
      buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)this->fields.ApSeedBulkExchangeConfirmMenu;
      if ( !buyItemConfirmMenu )
        goto LABEL_53;
      ShopBuyBulkItemConfirmMenu__Close((ShopBuyBulkItemConfirmMenu_o *)buyItemConfirmMenu, 0LL);
    }
    buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)this->fields.buyStorageConfirmDialog;
    if ( !buyItemConfirmMenu )
      goto LABEL_53;
    if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)buyItemConfirmMenu, 0LL) )
    {
      buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)this->fields.buyStorageConfirmDialog;
      if ( !buyItemConfirmMenu )
        goto LABEL_53;
      BuyStorageConfirmDialogComponent__Close((BuyStorageConfirmDialogComponent_o *)buyItemConfirmMenu, 0LL);
    }
    buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)this->fields.buyStorageNotificationDialog;
    if ( !buyItemConfirmMenu )
LABEL_53:
      sub_B7076C(buyItemConfirmMenu, method);
    buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)UnityEngine_Behaviour__get_isActiveAndEnabled(
                                                       (UnityEngine_Behaviour_o *)buyItemConfirmMenu,
                                                       0LL);
    if ( ((unsigned __int8)buyItemConfirmMenu & 1) != 0 )
    {
      buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)this->fields.buyStorageNotificationDialog;
      if ( !buyItemConfirmMenu )
        goto LABEL_53;
      BuyStorageConfirmDialogComponent__Close((BuyStorageConfirmDialogComponent_o *)buyItemConfirmMenu, 0LL);
    }
    state = this->fields.state;
    if ( state == 8 || state == 16 )
    {
      if ( this->fields.buyCount >= 1 )
      {
        buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)ShopRootComponent__BackScene(this, state, v4);
        if ( ((unsigned __int8)buyItemConfirmMenu & 1) != 0 )
          return;
      }
      listViewHelper = this->fields.listViewHelper;
      if ( !listViewHelper )
        goto LABEL_53;
      buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)listViewHelper->fields.buyItemListViewManager;
      if ( !buyItemConfirmMenu )
        goto LABEL_53;
      buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)ShopBuyItemListViewManager__GetItem(
                                                         (ShopBuyItemListViewManager_o *)buyItemConfirmMenu,
                                                         this->fields.selectedItemIndex,
                                                         0LL);
      if ( !buyItemConfirmMenu )
        goto LABEL_53;
      v7 = (ShopBuyItemListViewItem_o *)buyItemConfirmMenu;
      freeLabel = (ShopEntity_o *)buyItemConfirmMenu->fields.freeLabel;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      p_listViewHelper = &this->fields.listViewHelper;
      buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ShopMaster___);
      if ( this->fields.buyCount >= 1 )
      {
        if ( !buyItemConfirmMenu )
          goto LABEL_53;
        if ( ShopMaster__IsOpenPurchaseCloseShop((ShopMaster_o *)buyItemConfirmMenu, freeLabel, v10) )
        {
          buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)*p_listViewHelper;
          if ( *p_listViewHelper )
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
              goto LABEL_52;
            }
            buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)this->fields.topListViewManager;
            if ( buyItemConfirmMenu )
            {
              ShopTopListViewManager__CreateList((ShopTopListViewManager_o *)buyItemConfirmMenu, 0, -1.0, 0LL);
              LODWORD(method) = this->fields.state;
LABEL_52:
              ShopRootComponent__BackMenu(this, (int32_t)method, v12);
              return;
            }
          }
          goto LABEL_53;
        }
      }
      ShopBuyItemListViewItem__Modify(v7, freeLabel, 0LL);
      state = this->fields.state;
    }
    else
    {
      p_listViewHelper = &this->fields.listViewHelper;
    }
    v13 = *p_listViewHelper;
    if ( !*p_listViewHelper )
      goto LABEL_53;
    ShopSceneListViewControlHelper__SetBuyItemListViewModify(*p_listViewHelper, state, v4);
    ShopSceneListViewControlHelper__SetBuyItemListViewInput(v13, state, v14);
    this->fields.inputState = 2;
  }
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
    sub_B7076C(servantSellConfirmMenu, method);
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

  if ( (byte_4353733 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_12348/*"SHOP_SCENE_VOICE_CANCEL"*/);
    sub_B70694(&StringLiteral_12347/*"SHOP_SCENE_VOICE_BACK2"*/);
    byte_4353733 = 1;
  }
  if ( result )
    goto LABEL_6;
  shopPlayVoiceComponent = this->fields.shopPlayVoiceComponent;
  if ( !shopPlayVoiceComponent )
    goto LABEL_9;
  if ( !ShopPlayVoiceComponent__PlayVoiceOnce(
          shopPlayVoiceComponent,
          (System_String_o *)StringLiteral_12348/*"SHOP_SCENE_VOICE_CANCEL"*/,
          0x2000,
          v3) )
  {
LABEL_6:
    shopPlayVoiceComponent = this->fields.shopPlayVoiceComponent;
    if ( shopPlayVoiceComponent )
    {
      ShopPlayVoiceComponent__PlayVoiceOnce(shopPlayVoiceComponent, (System_String_o *)StringLiteral_12347/*"SHOP_SCENE_VOICE_BACK2"*/, 4096, v3);
      goto LABEL_8;
    }
LABEL_9:
    sub_B7076C(shopPlayVoiceComponent, *(_QWORD *)&result);
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
  if ( (byte_435372C & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_int___ctor__);
    sub_B70694(&System_Action_int__TypeInfo);
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_ShopRootComponent_RequestShop__);
    this = (ShopRootComponent_o *)sub_B70694(&Method_ShopRootComponent_SelectedBuyItemConfirm__);
    byte_435372C = 1;
  }
  v4->fields.buyCount = buyCount;
  if ( buyCount )
  {
    buyStorageConfirmDialog = v4->fields.buyStorageConfirmDialog;
    v6 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(v6, (Il2CppObject *)v4, Method_ShopRootComponent_RequestShop__, 0LL);
    if ( buyStorageConfirmDialog )
    {
      BuyStorageConfirmDialogComponent__Close_30602340(buyStorageConfirmDialog, v6, 0LL);
      return;
    }
LABEL_14:
    sub_B7076C(this, *(_QWORD *)&buyCount);
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
    v13 = (System_Action_int__o *)sub_B70764(System_Action_int__TypeInfo);
    System_Action_int____ctor(
      v13,
      (Il2CppObject *)v4,
      Method_ShopRootComponent_SelectedBuyItemConfirm__,
      (const MethodInfo_264ABB8 *)Method_System_Action_int___ctor__);
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
  ShopRootComponent_c *v2; // x0
  System_Collections_Generic_Dictionary_int__int__o *v3; // x19
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  ShopRootComponent_c *v10; // x0
  BattleServantConfConponent_o *static_fields; // x0
  void *Instance; // x0
  __int64 v13; // x1
  int v14; // w8
  void *v15; // x19
  unsigned int v16; // w21
  __int64 v17; // x23
  ShopRootComponent_c *v18; // x0
  __int64 v19; // x0

  if ( (byte_4353735 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ShopDetailMaster___);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    sub_B70694(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_B70694(&ShopRootComponent_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4353735 = 1;
  }
  v2 = ShopRootComponent_TypeInfo;
  if ( (BYTE3(ShopRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ShopRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopRootComponent_TypeInfo);
    v2 = ShopRootComponent_TypeInfo;
  }
  if ( !v2->static_fields->isInitialized )
  {
    v3 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B70764(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v3,
      (const MethodInfo_2FBA5BC *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    v10 = ShopRootComponent_TypeInfo;
    if ( (BYTE3(ShopRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ShopRootComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ShopRootComponent_TypeInfo);
      v10 = ShopRootComponent_TypeInfo;
    }
    static_fields = (BattleServantConfConponent_o *)v10->static_fields;
    static_fields->klass = (BattleServantConfConponent_c *)v3;
    sub_B70630(static_fields, (System_Int32_array **)v3, v4, v5, v6, v7, v8, v9);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_27;
    Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ShopDetailMaster___);
    if ( !Instance )
      goto LABEL_27;
    Instance = ShopDetailMaster__getShopDetailEntityList((ShopDetailMaster_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_27;
    v14 = *((_DWORD *)Instance + 6);
    v15 = Instance;
    if ( v14 >= 1 )
    {
      v16 = 0;
      while ( 1 )
      {
        if ( v16 >= v14 )
        {
          v19 = sub_B70798(Instance);
          sub_B70738(v19, 0LL);
        }
        Instance = ShopRootComponent_TypeInfo;
        v17 = *((_QWORD *)v15 + (int)v16 + 4);
        if ( (BYTE3(ShopRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ShopRootComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ShopRootComponent_TypeInfo);
          Instance = ShopRootComponent_TypeInfo;
        }
        if ( !v17 )
          break;
        Instance = (void *)**((_QWORD **)Instance + 23);
        if ( !Instance )
          break;
        System_Collections_Generic_Dictionary_int__int___set_Item(
          (System_Collections_Generic_Dictionary_int__int__o *)Instance,
          *(_DWORD *)(v17 + 16),
          0,
          (const MethodInfo_2FBB138 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
        v14 = *((_DWORD *)v15 + 6);
        if ( (int)++v16 >= v14 )
          goto LABEL_22;
      }
LABEL_27:
      sub_B7076C(Instance, v13);
    }
LABEL_22:
    v18 = ShopRootComponent_TypeInfo;
    if ( (BYTE3(ShopRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ShopRootComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ShopRootComponent_TypeInfo);
      v18 = ShopRootComponent_TypeInfo;
    }
    v18->static_fields->isInitialized = 1;
  }
}


void __fastcall ShopRootComponent__DeleteContinueData(const MethodInfo *method)
{
  if ( (byte_43536FA & 1) == 0 )
  {
    sub_B70694(&StringLiteral_13138/*"SpecialItemHelp"*/);
    sub_B70694(&StringLiteral_13019/*"Shop15Help"*/);
    sub_B70694(&StringLiteral_2009/*"AnonymousHelp"*/);
    sub_B70694(&StringLiteral_11431/*"RarePriHelp"*/);
    byte_43536FA = 1;
  }
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_2009/*"AnonymousHelp"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11431/*"RarePriHelp"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13138/*"SpecialItemHelp"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13019/*"Shop15Help"*/, 0LL);
}


void __fastcall ShopRootComponent__DeleteJumpInfoOnInit(
        ShopRootComponent_o *this,
        int32_t state,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  if ( state == 9 )
  {
    this->fields.jumpInfo = 0LL;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.jumpInfo,
      0LL,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
  }
}


void __fastcall ShopRootComponent__EndLimitCountSealInfoDialog(ShopRootComponent_o *this, const MethodInfo *method)
{
  SummonInfoDlgComponent_o *limitCountSealInfoDlg; // x0
  struct ShopSceneListViewControlHelper_o *listViewHelper; // x8
  ShopBuyItemListViewItem_o *Item; // x0
  const MethodInfo *v6; // x4

  if ( (byte_4353709 & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    byte_4353709 = 1;
  }
  limitCountSealInfoDlg = this->fields.limitCountSealInfoDlg;
  if ( !limitCountSealInfoDlg )
    goto LABEL_10;
  SummonInfoDlgComponent__Close(limitCountSealInfoDlg, 0LL, 0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  listViewHelper = this->fields.listViewHelper;
  if ( !listViewHelper
    || (limitCountSealInfoDlg = (SummonInfoDlgComponent_o *)listViewHelper->fields.buyItemListViewManager) == 0LL )
  {
LABEL_10:
    sub_B7076C(limitCountSealInfoDlg, method);
  }
  Item = ShopBuyItemListViewManager__GetItem(
           (ShopBuyItemListViewManager_o *)limitCountSealInfoDlg,
           this->fields.limitCountSealInfoIndex,
           0LL);
  ShopRootComponent__OpenConfirmMenu(this, this->fields.state, Item, this->fields.limitCountSealInfoBulk, v6);
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

  if ( (byte_435371D & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_int___ctor__);
    sub_B70694(&System_Action_int__TypeInfo);
    sub_B70694(&Method_ShopRootComponent_EndSellResultServant__);
    sub_B70694(&StringLiteral_21408/*"ng"*/);
    byte_435371D = 1;
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
  v8 = System_String__op_Equality(result, (System_String_o *)StringLiteral_21408/*"ng"*/, 0LL);
  ServantSellConfirmKindOnRequestEnd = ServantSellConfirmMenu__GetServantSellConfirmKindOnRequestEnd(tabKind, v8, 0LL);
  servantSellConfirmMenu = this->fields.servantSellConfirmMenu;
  selectedServantIds = this->fields.selectedServantIds;
  selectedCommandCodeIds = this->fields.selectedCommandCodeIds;
  v13 = ServantSellConfirmKindOnRequestEnd;
  v14 = (System_Action_int__o *)sub_B70764(System_Action_int__TypeInfo);
  System_Action_int____ctor(
    v14,
    (Il2CppObject *)this,
    Method_ShopRootComponent_EndSellResultServant__,
    (const MethodInfo_264ABB8 *)Method_System_Action_int___ctor__);
  if ( !servantSellConfirmMenu )
LABEL_8:
    sub_B7076C(servantSellMenu, result);
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
  struct ShopEntity_o *dragParentObject; // x2

  if ( (byte_4353712 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_21408/*"ng"*/);
    byte_4353712 = 1;
  }
  buyItemListViewManager = (ShopBuyItemListViewManager_o *)System_String__op_Equality(
                                                             result,
                                                             (System_String_o *)StringLiteral_21408/*"ng"*/,
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
    dragParentObject = (struct ShopEntity_o *)buyItemListViewManager->fields.dragParentObject;
    if ( dragParentObject )
    {
      if ( dragParentObject->fields.purchaseType == 5 )
        ShopRootComponent__ShowSetItemDialog(
          this,
          (ShopEntity_o *)buyItemListViewManager->fields.dragParentObject,
          (const MethodInfo *)dragParentObject);
      else
        ShopRootComponent__ShowNormalItemDialog(
          this,
          (ShopBuyItemListViewItem_o *)buyItemListViewManager,
          dragParentObject,
          v9);
      goto LABEL_12;
    }
LABEL_17:
    sub_B7076C(buyItemListViewManager, v6);
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
  UserItemMaster_o *Master_WarQuestSelectionMaster; // x20
  int64_t UserId; // x21

  if ( (byte_4353727 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_B70694(&DataManager_TypeInfo);
    this = (ShopRootComponent_o *)sub_B70694(&NetworkManager_TypeInfo);
    byte_4353727 = 1;
  }
  if ( !shopEntity )
LABEL_22:
    sub_B7076C(this, shopEntity);
  result = 0;
  switch ( shopEntity->fields.payType )
  {
    case 1:
      this = (ShopRootComponent_o *)UserGameMaster__getSelfUserGame(0LL);
      if ( !this )
        goto LABEL_22;
      result = (int32_t)this->fields.ApSeedBulkExchangeConfirmMenu;
      break;
    case 2:
      this = (ShopRootComponent_o *)UserGameMaster__getSelfUserGame(0LL);
      if ( !this )
        goto LABEL_22;
      result = (int32_t)this->fields.topListViewBase;
      break;
    case 4:
      this = (ShopRootComponent_o *)UserGameMaster__getSelfUserGame(0LL);
      if ( !this )
        goto LABEL_22;
      result = (int32_t)this->fields.servantSellMenu;
      break;
    case 6:
    case 8:
    case 9:
    case 0xB:
    case 0xC:
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_UserItemMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      UserId = NetworkManager__get_UserId(0LL);
      this = (ShopRootComponent_o *)ShopEntity__GetItemID(shopEntity, 0LL);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_22;
      this = (ShopRootComponent_o *)UserItemMaster__GetEntityDefinitely(
                                      Master_WarQuestSelectionMaster,
                                      UserId,
                                      (int32_t)this,
                                      0LL);
      if ( !this )
        goto LABEL_22;
      result = HIDWORD(this->fields.myFSM);
      break;
    case 0xA:
      this = (ShopRootComponent_o *)UserGameMaster__getSelfUserGame(0LL);
      if ( !this )
        goto LABEL_22;
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
  int32_t result; // w0

  if ( state <= 4 )
  {
    result = 1;
    if ( state == 1 || state == 4 )
      return result;
    return 0;
  }
  if ( (unsigned int)state > 0x14 )
    return 0;
  result = 1;
  if ( ((1 << state) & 0x110300) == 0 )
    return 0;
  return result;
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
  __int64 v19; // x0

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
      {
        v19 = sub_B70798(CommonConsumeEntities);
        sub_B70738(v19, 0LL);
      }
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
    sub_B7076C(this, item);
  }
  return v8;
}


bool __fastcall ShopRootComponent__GetIsContainExceededServant(
        ShopRootComponent_o *this,
        System_Int64_array *selectServantIds,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  __int64 v6; // x8
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v7; // x20
  unsigned __int64 v8; // x21
  __int64 v10; // x0

  if ( (byte_435370E & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B70694(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_435370E = 1;
  }
  if ( !selectServantIds )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_14:
    sub_B7076C(Instance, v5);
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserServantMaster___);
  v6 = *(_QWORD *)&selectServantIds->max_length;
  if ( (int)v6 < 1 )
    return 0;
  v7 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance;
  v8 = 0LL;
  while ( 1 )
  {
    if ( v8 >= (unsigned int)v6 )
    {
      v10 = sub_B70798(Instance);
      sub_B70738(v10, 0LL);
    }
    if ( !v7 )
      goto LABEL_14;
    Instance = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                  v7,
                                  selectServantIds->m_Items[v8],
                                  (const MethodInfo_21C0668 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( Instance )
    {
      Instance = (DataManager_o *)UserServantEntity__isExceeded((UserServantEntity_o *)Instance, 0LL);
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
  UserShopMaster_o *MasterData_WarQuestSelectionMaster; // x20
  struct ShopEntity_o *Shop_k__BackingField; // x8
  UserShopEntity_o *EntityDefinitely; // x0

  if ( (byte_435370A & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_435370A = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = (UserShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             Instance,
                                                             (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !item
    || (Shop_k__BackingField = item->fields._Shop_k__BackingField) == 0LL
    || !MasterData_WarQuestSelectionMaster )
  {
LABEL_13:
    sub_B7076C(Instance, v5);
  }
  EntityDefinitely = UserShopMaster__GetEntityDefinitely(
                       MasterData_WarQuestSelectionMaster,
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
  if ( (byte_4353731 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_8595/*"LeafExchange"*/);
    sub_B70694(&StringLiteral_6263/*"EventItem"*/);
    sub_B70694(&StringLiteral_13258/*"StoneFragments"*/);
    sub_B70694(&StringLiteral_12839/*"SellServant"*/);
    byte_4353731 = 1;
  }
  if ( !jumpInfoName )
    return 1;
  if ( !System_String__op_Equality(jumpInfoName, (System_String_o *)StringLiteral_6263/*"EventItem"*/, 0LL) )
  {
    if ( System_String__op_Equality(jumpInfoName, (System_String_o *)StringLiteral_12839/*"SellServant"*/, 0LL) )
      return 9;
    if ( System_String__op_Equality(jumpInfoName, (System_String_o *)StringLiteral_13258/*"StoneFragments"*/, 0LL) )
      return 4;
    if ( System_String__op_Equality(jumpInfoName, (System_String_o *)StringLiteral_8595/*"LeafExchange"*/, 0LL) )
      return 20;
    return 1;
  }
  if ( eventId <= 0 )
    return 7;
  else
    return 8;
}


void __fastcall ShopRootComponent__Init(ShopRootComponent_o *this, const MethodInfo *method)
{
  struct SceneJumpInfo_o *jumpInfo; // x8
  int32_t id; // w9
  System_String_o **p_name; // x8
  UnityEngine_GameObject_o *topListViewBase; // x27
  ServantSellMenu_o *servantSellMenu; // x24
  ShopEventListViewManager_o *eventListViewManager; // x26
  ShopCurrencyInfoController_o *currencyInfoController; // x23
  ShopHelpListViewManager_o *helpListViewManager; // x20
  UnityEngine_GameObject_o *helpListViewBase; // x22
  ShopBuyItemListViewManager_o *buyItemListViewManager; // x21
  UnityEngine_GameObject_o *buyItemListViewBase; // x25
  ShopSceneListViewControlHelper_o *v14; // x28
  struct ShopSceneListViewControlHelper_o **p_listViewHelper; // x21
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  __int64 v22; // x1
  const MethodInfo *v23; // x5
  ShopSceneListViewControlHelper_o *listViewHelper; // x0
  ShopSceneListViewControlHelper_o *v25; // x23
  System_Action_o *v26; // x24
  System_Action_ShopRootConstants_State__o *v27; // x25
  System_Action_int__o *v28; // x26
  System_Action_int__o *v29; // x27
  System_Action_ServantSellMenu_ResultKind__long____long____o *v30; // x28
  System_Action_o *v31; // x22
  const MethodInfo *v32; // x7
  ShopRootComponent_o *v33; // x0
  const MethodInfo *v34; // x3
  int StateOnInit; // w0
  const MethodInfo *v36; // x4
  int32_t v37; // w8
  _BOOL4 isFromCoinRoom; // w9
  float saveScrollBarValue; // s0
  const MethodInfo *v40; // x3
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  UnityEngine_GameObject_o *gameObject; // x20
  System_Action_int__o *v48; // x21
  const MethodInfo *v49; // [xsp+18h] [xbp-78h]
  ShopTopListViewManager_o *topListViewManager; // [xsp+20h] [xbp-70h]
  UnityEngine_GameObject_o *eventListViewBase; // [xsp+28h] [xbp-68h]
  System_String_o *jumpInfoName; // [xsp+30h] [xbp-60h]
  int32_t eventId; // [xsp+3Ch] [xbp-54h]

  if ( (byte_43536FF & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_ShopRootConstants_State___ctor__);
    sub_B70694(&Method_System_Action_int___ctor__);
    sub_B70694(&System_Action_int__TypeInfo);
    sub_B70694(&System_Action_ShopRootConstants_State__TypeInfo);
    sub_B70694(&Method_System_Action_ServantSellMenu_ResultKind__long____long_____ctor__);
    sub_B70694(&System_Action_ServantSellMenu_ResultKind__long____long____TypeInfo);
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_ShopRootComponent_OnMoveEnd__);
    sub_B70694(&Method_ShopRootComponent_OnSelectBuyItem__);
    sub_B70694(&Method_ShopRootComponent_OnSelectEvent__);
    sub_B70694(&Method_ShopRootComponent_OnSelectSellServant__);
    sub_B70694(&Method_ShopRootComponent_OnSelectTop__);
    sub_B70694(&Method_ShopRootComponent_OpenHelp__);
    sub_B70694(&Method_ShopRootComponent__Init_b__71_0__);
    sub_B70694(&ShopSceneListViewControlHelper_TypeInfo);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_43536FF = 1;
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
    topListViewBase = this->fields.topListViewBase;
    servantSellMenu = this->fields.servantSellMenu;
    jumpInfoName = *p_name;
    eventListViewManager = this->fields.eventListViewManager;
    eventListViewBase = this->fields.eventListViewBase;
    currencyInfoController = this->fields.currencyInfoController;
    helpListViewManager = this->fields.helpListViewManager;
    helpListViewBase = this->fields.helpListViewBase;
    topListViewManager = this->fields.topListViewManager;
    buyItemListViewManager = this->fields.buyItemListViewManager;
    buyItemListViewBase = this->fields.buyItemListViewBase;
    v14 = (ShopSceneListViewControlHelper_o *)sub_B70764(ShopSceneListViewControlHelper_TypeInfo);
    ShopSceneListViewControlHelper___ctor(
      v14,
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
      v49);
    p_listViewHelper = &this->fields.listViewHelper;
    this->fields.listViewHelper = v14;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.listViewHelper,
      (System_Int32_array **)v14,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
    listViewHelper = this->fields.listViewHelper;
    if ( !listViewHelper )
      goto LABEL_23;
    ShopSceneListViewControlHelper__SetOtherObjects(
      listViewHelper,
      this->fields.titleInfo,
      this->fields.standFigureBack,
      this->fields.giftButtonControl,
      this->fields.backgroundTexture,
      v23);
    v25 = this->fields.listViewHelper;
    v26 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(v26, (Il2CppObject *)this, Method_ShopRootComponent_OnMoveEnd__, 0LL);
    v27 = (System_Action_ShopRootConstants_State__o *)sub_B70764(System_Action_ShopRootConstants_State__TypeInfo);
    System_Action_ShopRootConstants_State____ctor(
      v27,
      (Il2CppObject *)this,
      Method_ShopRootComponent_OnSelectTop__,
      (const MethodInfo_264AE8C *)Method_System_Action_ShopRootConstants_State___ctor__);
    v28 = (System_Action_int__o *)sub_B70764(System_Action_int__TypeInfo);
    System_Action_int____ctor(
      v28,
      (Il2CppObject *)this,
      Method_ShopRootComponent_OnSelectEvent__,
      (const MethodInfo_264ABB8 *)Method_System_Action_int___ctor__);
    v29 = (System_Action_int__o *)sub_B70764(System_Action_int__TypeInfo);
    System_Action_int____ctor(
      v29,
      (Il2CppObject *)this,
      Method_ShopRootComponent_OnSelectBuyItem__,
      (const MethodInfo_264ABB8 *)Method_System_Action_int___ctor__);
    v30 = (System_Action_ServantSellMenu_ResultKind__long____long____o *)sub_B70764(System_Action_ServantSellMenu_ResultKind__long____long____TypeInfo);
    System_Action_ServantSellMenu_ResultKind__long____long______ctor(
      v30,
      (Il2CppObject *)this,
      Method_ShopRootComponent_OnSelectSellServant__,
      (const MethodInfo_265B8DC *)Method_System_Action_ServantSellMenu_ResultKind__long____long_____ctor__);
    v31 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(v31, (Il2CppObject *)this, Method_ShopRootComponent_OpenHelp__, 0LL);
    if ( !v25 )
      goto LABEL_23;
    ShopSceneListViewControlHelper__SetCallbackEvents(v25, v26, v27, v28, v29, v30, v31, v32);
    StateOnInit = ShopRootComponent__GetStateOnInit(v33, jumpInfoName, eventId, v34);
    v22 = (unsigned int)StateOnInit;
    this->fields.state = StateOnInit;
    if ( StateOnInit > 4 )
    {
      if ( (unsigned int)StateOnInit <= 0x14 )
      {
        v37 = 1;
        if ( ((1 << StateOnInit) & 0x110300) != 0 )
          goto LABEL_16;
      }
    }
    else
    {
      v37 = 1;
      if ( StateOnInit == 1 || StateOnInit == 4 )
        goto LABEL_16;
    }
    v37 = 0;
LABEL_16:
    isFromCoinRoom = this->fields.isFromCoinRoom;
    this->fields.inputState = v37;
    if ( isFromCoinRoom )
      saveScrollBarValue = this->fields.saveScrollBarValue;
    else
      saveScrollBarValue = -1.0;
    listViewHelper = *p_listViewHelper;
    if ( *p_listViewHelper )
    {
      ShopSceneListViewControlHelper__SetListViewOnSceneInit(
        listViewHelper,
        v22,
        eventId,
        saveScrollBarValue,
        &this->fields.selectedEventIndex,
        v36);
      ShopRootComponent__OpenEventItemWindow(this, this->fields.state, eventId, v40);
      if ( this->fields.state == 9 )
      {
        this->fields.jumpInfo = 0LL;
        sub_B70630((BattleServantConfConponent_o *)&this->fields.jumpInfo, 0LL, v41, v42, v43, v44, v45, v46);
      }
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      v48 = (System_Action_int__o *)sub_B70764(System_Action_int__TypeInfo);
      System_Action_int____ctor(
        v48,
        (Il2CppObject *)this,
        Method_ShopRootComponent__Init_b__71_0__,
        (const MethodInfo_264ABB8 *)Method_System_Action_int___ctor__);
      StoneCountRefreshComponent__AttachToGameObject(gameObject, v48, 0, 0LL);
      return;
    }
LABEL_23:
    sub_B7076C(listViewHelper, v22);
  }
}


void __fastcall ShopRootComponent__LoadBanner(ShopRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  ShopRootComponent_o *v12; // x0
  const MethodInfo *v13; // x3
  struct SceneJumpInfo_o *jumpInfo; // x8
  int32_t id; // w2
  System_String_o **p_name; // x8
  System_Action_o *v17; // x20

  if ( (byte_43536FE & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&AtlasManager_TypeInfo);
    sub_B70694(&Method_ShopRootComponent___c__DisplayClass68_0__LoadBanner_b__0__);
    sub_B70694(&ShopRootComponent___c__DisplayClass68_0_TypeInfo);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_43536FE = 1;
  }
  v3 = sub_B70764(ShopRootComponent___c__DisplayClass68_0_TypeInfo);
  ShopRootComponent___c__DisplayClass68_0___ctor((ShopRootComponent___c__DisplayClass68_0_o *)v3, 0LL);
  if ( !v3 )
    sub_B7076C(v4, v5);
  *(_QWORD *)(v3 + 16) = this;
  sub_B70630((BattleServantConfConponent_o *)(v3 + 16), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
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
  v17 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v17, (Il2CppObject *)v3, Method_ShopRootComponent___c__DisplayClass68_0__LoadBanner_b__0__, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
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
  const MethodInfo *v7; // x2
  ShopSceneListViewControlHelper_o *listViewHelper; // x22
  int32_t v9; // w21
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x1

  if ( (byte_4353734 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4353734 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || ((CommonUI__CloseStonePurchaseMenu(Instance, 0LL),
         listViewHelper = this->fields.listViewHelper,
         this->fields.state != 8)
      ? (v9 = 1)
      : (v9 = 7),
        this->fields.state = v9,
        this->fields.inputState = 2,
        !listViewHelper) )
  {
    sub_B7076C(Instance, v6);
  }
  ShopSceneListViewControlHelper__SetTopListViewInput(listViewHelper, v9, v7);
  ShopSceneListViewControlHelper__SetHelpButtonEnable(listViewHelper, v9, v10);
  if ( result == 2 )
    ShopRootComponent__RefreshInfo(this, v11);
}


void __fastcall ShopRootComponent__OnClickBack(ShopRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  const MethodInfo *v4; // x2

  if ( (byte_4353723 & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    byte_4353723 = 1;
  }
  if ( this->fields.inputState == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    if ( !ShopRootComponent__BackScene(this, this->fields.state, v3) )
      ShopRootComponent__BackMenu(this, this->fields.state, v4);
  }
}


void __fastcall ShopRootComponent__OnClickHelp(ShopRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_435371E & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    byte_435371E = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  ShopRootComponent__OpenHelp(this, v3);
}


void __fastcall ShopRootComponent__OnClickHelpClose(ShopRootComponent_o *this, const MethodInfo *method)
{
  unsigned int state; // w8
  TitleInfoControl_o *titleInfo; // x0
  ShopHelpListViewManager_o *helpListViewManager; // x20
  System_Action_o *v6; // x21
  const MethodInfo *v7; // x2

  if ( (byte_4353720 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_ShopRootComponent_CheckTutorial__);
    sub_B70694(&SoundManager_TypeInfo);
    byte_4353720 = 1;
  }
  state = this->fields.state;
  if ( state <= 0x14 && ((1 << state) & 0x100068) != 0 )
  {
    titleInfo = this->fields.titleInfo;
    if ( titleInfo )
    {
      TitleInfoControl__SetHelpBtn(titleInfo, 1, 0LL);
      return;
    }
LABEL_12:
    sub_B7076C(titleInfo, method);
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  helpListViewManager = this->fields.helpListViewManager;
  v6 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_ShopRootComponent_CheckTutorial__, 0LL);
  if ( !helpListViewManager )
    goto LABEL_12;
  ShopHelpListViewManager__CloseHelpDialog(helpListViewManager, v6, v7);
}


void __fastcall ShopRootComponent__OnEndDialogEventCloseWarning(ShopRootComponent_o *this, const MethodInfo *method)
{
  MainMenuBar__requestTerminalSceneChange(0LL);
}


void __fastcall ShopRootComponent__OnEndFadeRequestShop(ShopRootComponent_o *this, const MethodInfo *method)
{
  System_String_o *MainBgmName; // x20
  const MethodInfo *v4; // x1

  if ( (byte_435371B & 1) == 0 )
  {
    sub_B70694(&BgmManager_TypeInfo);
    sub_B70694(&SoundManager_TypeInfo);
    byte_435371B = 1;
  }
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  MainBgmName = BgmManager__GetMainBgmName(0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm(MainBgmName, 0LL);
  ShopRootComponent__RequestEnd(this, v4);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopRootComponent__OnEndItemDialog(ShopRootComponent_o *this, bool isOk, const MethodInfo *method)
{
  RequestResultDialog_o *requestResultDialog; // x0
  struct ShopSceneListViewControlHelper_o *listViewHelper; // x8
  ShopEntity_o *itemMessageLabel; // x20
  const MethodInfo *v7; // x2
  System_String_o *longName; // x20
  ScriptManager_CallbackFunc_o *v9; // x21
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4353717 & 1) == 0 )
  {
    sub_B70694(&ScriptManager_CallbackFunc_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_ShopScriptMaster___);
    sub_B70694(&Method_DataMasterBase_ShopScriptMaster__ShopScriptEntity__int__TryGetEntity__);
    sub_B70694(&ScriptManager_TypeInfo);
    sub_B70694(&Method_ShopRootComponent_OnEndPlayScriptRequestShop__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4353717 = 1;
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
  itemMessageLabel = (ShopEntity_o *)requestResultDialog->fields.itemMessageLabel;
  requestResultDialog = (RequestResultDialog_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !requestResultDialog )
    goto LABEL_21;
  requestResultDialog = (RequestResultDialog_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                   (DataManager_o *)requestResultDialog,
                                                   (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ShopScriptMaster___);
  if ( !itemMessageLabel || !requestResultDialog )
    goto LABEL_21;
  requestResultDialog = (RequestResultDialog_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                   (DataMasterBase_WarMaster__WarEntity__int__o *)requestResultDialog,
                                                   &entity,
                                                   itemMessageLabel->fields.id,
                                                   (const MethodInfo_21C049C *)Method_DataMasterBase_ShopScriptMaster__ShopScriptEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)requestResultDialog & 1) == 0 )
    goto LABEL_13;
  if ( !entity )
    goto LABEL_21;
  requestResultDialog = (RequestResultDialog_o *)System_String__IsNullOrEmpty(entity->fields.longName, 0LL);
  if ( ((unsigned __int8)requestResultDialog & 1) != 0 )
  {
LABEL_13:
    if ( itemMessageLabel->fields.purchaseType == 14 )
      ShopRootComponent__PlayServantCostumeReleaseEffect(this, itemMessageLabel, v7);
    else
      ShopRootComponent__RequestEnd(this, (const MethodInfo *)isOk);
    return;
  }
  if ( !entity )
LABEL_21:
    sub_B7076C(requestResultDialog, isOk);
  longName = entity->fields.longName;
  v9 = (ScriptManager_CallbackFunc_o *)sub_B70764(ScriptManager_CallbackFunc_TypeInfo);
  ScriptManager_CallbackFunc___ctor(
    v9,
    (Il2CppObject *)this,
    Method_ShopRootComponent_OnEndPlayScriptRequestShop__,
    0LL);
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  ScriptManager__PlayShop(longName, v9, 0, 0LL);
}


void __fastcall ShopRootComponent__OnEndPlayScriptRequestShop(
        ShopRootComponent_o *this,
        bool isExit,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4353718 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_ShopRootComponent_OnEndFadeRequestShop__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4353718 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_ShopRootComponent_OnEndFadeRequestShop__, 0LL);
  if ( !Instance )
    sub_B7076C(v6, v7);
  CommonUI__maskFadein(Instance, 1.0, v5, 0LL);
}


void __fastcall ShopRootComponent__OnEndPlayServantCostumeReleaseEffect(
        ShopRootComponent_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v4; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_435371A & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&AvalonSceneManager_TypeInfo);
    sub_B70694(&Method_ShopRootComponent_RequestEnd__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_435371A = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v4 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v4->static_fields->DEFAULT_FADE_TIME;
  v6 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_ShopRootComponent_RequestEnd__, 0LL);
  if ( !Instance )
    sub_B7076C(v7, v8);
  CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, v6, 0LL);
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
    sub_B7076C(0LL, count);
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
    sub_B7076C(BuyItemKind, v6);
  }
  ShopSceneListViewControlHelper__SetListViewInvalidate(BuyItemKind, v6);
  return 1;
}


void __fastcall ShopRootComponent__OnGiftOpen(ShopRootComponent_o *this, const MethodInfo *method)
{
  ShopPlayVoiceComponent_o *shopPlayVoiceComponent; // x0

  shopPlayVoiceComponent = this->fields.shopPlayVoiceComponent;
  if ( !shopPlayVoiceComponent )
    sub_B7076C(0LL, method);
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
      sub_B7076C(0LL, state);
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
      sub_B7076C(0LL, state);
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
  ShopBuyItemListViewManager_o *buyItemListViewManager; // x0
  __int64 v6; // x1
  struct ShopSceneListViewControlHelper_o *listViewHelper; // x8
  ShopBuyItemListViewItem_o *Item; // x0
  const MethodInfo *v9; // x2
  bool IsBulk; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4353726 & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    byte_4353726 = 1;
  }
  if ( this->fields.inputState == 2 )
  {
    this->fields.inputState = 0;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    listViewHelper = this->fields.listViewHelper;
    this->fields.selectedItemIndex = index;
    if ( !listViewHelper || (buyItemListViewManager = listViewHelper->fields.buyItemListViewManager) == 0LL )
      sub_B7076C(buyItemListViewManager, v6);
    Item = ShopBuyItemListViewManager__GetItem(buyItemListViewManager, index, 0LL);
    IsBulk = ShopRootComponent__GetIsBulk((ShopRootComponent_o *)Item, Item, v9);
    ShopRootComponent__SelectItem(this, index, IsBulk, v11);
  }
}


void __fastcall ShopRootComponent__OnSelectEvent(ShopRootComponent_o *this, int32_t index, const MethodInfo *method)
{
  ShopEventListViewManager_o *eventListViewManager; // x0
  __int64 v6; // x1
  struct ShopSceneListViewControlHelper_o *listViewHelper; // x8
  ShopEventListViewItem_o *Item; // x20
  const MethodInfo *v9; // x2
  int32_t eventId; // w21
  SceneJumpInfo_o *v11; // x19

  if ( (byte_4353728 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_B70694(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_B70694(&SceneJumpInfo_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&SoundManager_TypeInfo);
    sub_B70694(&StringLiteral_9745/*"NormalEventShop"*/);
    byte_4353728 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  listViewHelper = this->fields.listViewHelper;
  this->fields.selectedEventIndex = index;
  if ( !listViewHelper )
    goto LABEL_18;
  eventListViewManager = listViewHelper->fields.eventListViewManager;
  if ( !eventListViewManager )
    goto LABEL_18;
  Item = ShopEventListViewManager__GetItem(eventListViewManager, index, 0LL);
  eventListViewManager = (ShopEventListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !eventListViewManager )
    goto LABEL_18;
  eventListViewManager = (ShopEventListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)eventListViewManager,
                                                         (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Item )
    goto LABEL_18;
  if ( !eventListViewManager )
    goto LABEL_18;
  eventListViewManager = (ShopEventListViewManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                         (DataMasterBase_WarMaster__WarEntity__int__o *)eventListViewManager,
                                                         Item->fields.eventId,
                                                         (const MethodInfo_21C0440 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  if ( !eventListViewManager )
    goto LABEL_18;
  if ( EventDetailEntity__IsEventShop((EventDetailEntity_o *)eventListViewManager, 0LL) )
  {
    eventId = Item->fields.eventId;
    v11 = (SceneJumpInfo_o *)sub_B70764(SceneJumpInfo_TypeInfo);
    SceneJumpInfo___ctor_17523760(v11, (System_String_o *)StringLiteral_9745/*"NormalEventShop"*/, eventId, 0LL);
    if ( v11 )
    {
      SceneJumpInfo__SetReturnNowScene(v11, 0LL);
      eventListViewManager = (ShopEventListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( eventListViewManager )
      {
        CommonUI__CheckChangeOtherConnectMarkFromEventId(
          (CommonUI_o *)eventListViewManager,
          Item->fields.eventId,
          1,
          0LL);
        eventListViewManager = (ShopEventListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( eventListViewManager )
        {
          AvalonSceneManager__transitionScene(
            (AvalonSceneManager_o *)eventListViewManager,
            72,
            1,
            (Il2CppObject *)v11,
            0LL);
          return;
        }
      }
    }
LABEL_18:
    sub_B7076C(eventListViewManager, v6);
  }
  ShopRootComponent__SelectMenu(this, 8, v9);
}


void __fastcall ShopRootComponent__OnSelectSellServant(
        ShopRootComponent_o *this,
        int32_t kind,
        System_Int64_array *servantList,
        System_Int64_array *commandCodeList,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  const MethodInfo *v17; // x1

  if ( this->fields.inputState == 2 )
  {
    this->fields.selectedServantIds = servantList;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.selectedServantIds,
      (System_Int32_array **)servantList,
      (System_String_array **)servantList,
      (System_String_array **)commandCodeList,
      (System_Boolean_array **)method,
      v5,
      v6,
      v7);
    this->fields.selectedCommandCodeIds = commandCodeList;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.selectedCommandCodeIds,
      (System_Int32_array **)commandCodeList,
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
  ShopRootConstants_c *v5; // x0
  bool IsSvtCostumeShopOpen; // w0
  _BOOL4 v7; // w9
  _BOOL4 v8; // w8
  bool IsTargetQuestClear; // w0
  const MethodInfo *v10; // x2

  if ( (byte_4353725 & 1) == 0 )
  {
    sub_B70694(&CoinRoomUtility_TypeInfo);
    sub_B70694(&ShopRootConstants_TypeInfo);
    sub_B70694(&SoundManager_TypeInfo);
    byte_4353725 = 1;
  }
  if ( this->fields.inputState == 2 && this->fields.state == 1 )
  {
    if ( state == 17 )
    {
      if ( (BYTE3(CoinRoomUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CoinRoomUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
      }
      IsTargetQuestClear = CoinRoomUtility__IsTargetQuestClear(0LL);
      v8 = 0;
      v7 = !IsTargetQuestClear;
    }
    else if ( state == 15 )
    {
      v5 = ShopRootConstants_TypeInfo;
      if ( (BYTE3(ShopRootConstants_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ShopRootConstants_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
      }
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
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      ShopRootComponent__SelectMenu(this, state, v10);
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
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  ShopBuyItemListViewItem_o **v18; // x22
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
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
  struct ShopBuyItemConfirmMenu_o *buyItemConfirmMenu; // x20
  ShopEntity_o *v36; // x21
  int32_t ShopKind_k__BackingField; // w22
  System_Action_int__o *v38; // x23
  ShopBuyItemConfirmMenu_o *v39; // x0
  ShopEntity_o *v40; // x1
  int32_t v41; // w2
  ShopBuyItemConfirmMenu_o *v42; // x20
  ShopBuyItemListViewItem_o *v43; // x21
  System_Action_o *v44; // x0
  __int64 *v45; // x8
  int32_t v46; // w21
  const MethodInfo *v47; // x2
  BuyStorageConfirmDialogComponent_o *buyStorageNotificationDialog; // x20
  ShopBuyItemListViewItem_o *v49; // x22
  System_Action_int__o *v50; // x23
  int32_t v51; // w2
  System_Action_o *v52; // x22
  System_Action_int__o *v53; // x23
  int v54; // w23
  ShopBuyItemListViewItem_o *v55; // x20
  struct ShopBuyBulkItemConfirmMenu_o *buyBulkItemConfirmMenu; // x21
  ShopEntity_o *Shop_k__BackingField; // x22
  System_Action_int__o *v58; // x23
  ShopEntity_o *v59; // x22
  int32_t v60; // w21
  BuyStorageConfirmDialogComponent_o *buyStorageConfirmDialog; // x20
  ShopBuyItemListViewItem_o *v62; // x22
  System_Action_int__o *v63; // x23

  if ( (byte_4353707 & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_int___ctor__);
    sub_B70694(&System_Action_int__TypeInfo);
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_ShopRootComponent_CloseStorageDetailCheckConfirm__);
    sub_B70694(&Method_ShopRootComponent_SelectedBuyItemConfirm__);
    sub_B70694(&Method_ShopRootComponent___c__DisplayClass81_0__OpenConfirmMenu_b__0__);
    sub_B70694(&Method_ShopRootComponent___c__DisplayClass81_0__OpenConfirmMenu_b__1__);
    sub_B70694(&ShopRootComponent___c__DisplayClass81_0_TypeInfo);
    byte_4353707 = 1;
  }
  v9 = sub_B70764(ShopRootComponent___c__DisplayClass81_0_TypeInfo);
  ShopRootComponent___c__DisplayClass81_0___ctor((ShopRootComponent___c__DisplayClass81_0_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_50;
  *(_QWORD *)(v9 + 16) = this;
  sub_B70630((BattleServantConfConponent_o *)(v9 + 16), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = item;
  v18 = (ShopBuyItemListViewItem_o **)(v9 + 24);
  sub_B70630((BattleServantConfConponent_o *)(v9 + 24), (System_Int32_array **)item, v19, v20, v21, v22, v23, v24);
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
        goto LABEL_50;
      buyItemConfirmMenu = this->fields.buyItemConfirmMenu;
      goto LABEL_13;
    case 3:
    case 15:
      if ( isBulk )
        goto LABEL_6;
      v42 = this->fields.buyItemConfirmMenu;
      v43 = *(ShopBuyItemListViewItem_o **)(v9 + 24);
      v44 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
      v45 = &Method_ShopRootComponent___c__DisplayClass81_0__OpenConfirmMenu_b__0__;
      goto LABEL_27;
    case 11:
    case 12:
      KindByShopState = (ShopEntity_o *)BuyStorageConfirmDialogComponent__GetKindByShopState(state, 0LL);
      if ( !*v18 )
        goto LABEL_50;
      v46 = (int)KindByShopState;
      KindByShopState = (*v18)->fields._Shop_k__BackingField;
      if ( !KindByShopState )
        goto LABEL_50;
      KindByShopState = (ShopEntity_o *)ShopEntity__IsSoldOut(KindByShopState, 0LL);
      if ( ((unsigned __int8)KindByShopState & 1) != 0 )
      {
        buyStorageNotificationDialog = this->fields.buyStorageNotificationDialog;
        v49 = *v18;
        v50 = (System_Action_int__o *)sub_B70764(System_Action_int__TypeInfo);
        System_Action_int____ctor(
          v50,
          (Il2CppObject *)this,
          Method_ShopRootComponent_SelectedBuyItemConfirm__,
          (const MethodInfo_264ABB8 *)Method_System_Action_int___ctor__);
        if ( buyStorageNotificationDialog )
        {
          v51 = 1;
LABEL_38:
          BuyStorageConfirmDialogComponent__NotificationDialogOpen(
            buyStorageNotificationDialog,
            v46,
            v51,
            v49,
            v50,
            0LL);
          return;
        }
        goto LABEL_50;
      }
      if ( !*v18 )
        goto LABEL_50;
      KindByShopState = (ShopEntity_o *)ShopRootComponent__GetCurrency(
                                          (ShopRootComponent_o *)KindByShopState,
                                          (*v18)->fields._Shop_k__BackingField,
                                          v47);
      if ( !*v18 )
        goto LABEL_50;
      v54 = (int)KindByShopState;
      KindByShopState = (*v18)->fields._Shop_k__BackingField;
      if ( !KindByShopState )
        goto LABEL_50;
      KindByShopState = (ShopEntity_o *)ShopEntity__GetPrice(KindByShopState, 0LL);
      if ( v54 < (int)KindByShopState )
      {
        buyStorageNotificationDialog = this->fields.buyStorageNotificationDialog;
        v49 = *v18;
        v50 = (System_Action_int__o *)sub_B70764(System_Action_int__TypeInfo);
        System_Action_int____ctor(
          v50,
          (Il2CppObject *)this,
          Method_ShopRootComponent_SelectedBuyItemConfirm__,
          (const MethodInfo_264ABB8 *)Method_System_Action_int___ctor__);
        if ( buyStorageNotificationDialog )
        {
          v51 = 2;
          goto LABEL_38;
        }
LABEL_50:
        sub_B7076C(KindByShopState, v11);
      }
      if ( isBulk )
      {
        v55 = *v18;
        if ( !*v18 )
          goto LABEL_50;
        buyBulkItemConfirmMenu = this->fields.buyBulkItemConfirmMenu;
        Shop_k__BackingField = v55->fields._Shop_k__BackingField;
        v58 = (System_Action_int__o *)sub_B70764(System_Action_int__TypeInfo);
        System_Action_int____ctor(
          v58,
          (Il2CppObject *)this,
          Method_ShopRootComponent_SelectedBuyItemConfirm__,
          (const MethodInfo_264ABB8 *)Method_System_Action_int___ctor__);
        if ( !buyBulkItemConfirmMenu )
          goto LABEL_50;
        v30 = buyBulkItemConfirmMenu;
        v31 = Shop_k__BackingField;
        v32 = v55;
        v33 = v58;
        v29 = 0;
LABEL_10:
        ShopBuyBulkItemConfirmMenu__Open(v30, v31, v32, v33, v29, 0LL);
        return;
      }
      buyStorageConfirmDialog = this->fields.buyStorageConfirmDialog;
      this->fields.buyCount = 1;
      v62 = *v18;
      v63 = (System_Action_int__o *)sub_B70764(System_Action_int__TypeInfo);
      System_Action_int____ctor(
        v63,
        (Il2CppObject *)this,
        Method_ShopRootComponent_CloseStorageDetailCheckConfirm__,
        (const MethodInfo_264ABB8 *)Method_System_Action_int___ctor__);
      if ( !buyStorageConfirmDialog )
        goto LABEL_50;
      BuyStorageConfirmDialogComponent__Open(buyStorageConfirmDialog, v46, v62, 1, v63, 0LL);
      return;
    case 19:
      if ( isBulk )
      {
        v25 = *v18;
        if ( !*v18 )
          goto LABEL_50;
        ApSeedBulkExchangeConfirmMenu = this->fields.ApSeedBulkExchangeConfirmMenu;
        goto LABEL_8;
      }
      v34 = *v18;
      if ( !*v18 )
        goto LABEL_50;
      buyItemConfirmMenu = this->fields.ApSeedExchangeConfirmMenu;
LABEL_13:
      v36 = v34->fields._Shop_k__BackingField;
      ShopKind_k__BackingField = v34->fields._ShopKind_k__BackingField;
      v38 = (System_Action_int__o *)sub_B70764(System_Action_int__TypeInfo);
      System_Action_int____ctor(
        v38,
        (Il2CppObject *)this,
        Method_ShopRootComponent_SelectedBuyItemConfirm__,
        (const MethodInfo_264ABB8 *)Method_System_Action_int___ctor__);
      if ( !buyItemConfirmMenu )
        goto LABEL_50;
      v39 = buyItemConfirmMenu;
      v40 = v36;
      v41 = ShopKind_k__BackingField;
      break;
    case 21:
      if ( isBulk )
      {
LABEL_6:
        v25 = *v18;
        if ( !*v18 )
          goto LABEL_50;
        ApSeedBulkExchangeConfirmMenu = this->fields.buyBulkItemConfirmMenu;
LABEL_8:
        v27 = v25->fields._Shop_k__BackingField;
        v28 = (System_Action_int__o *)sub_B70764(System_Action_int__TypeInfo);
        System_Action_int____ctor(
          v28,
          (Il2CppObject *)this,
          Method_ShopRootComponent_SelectedBuyItemConfirm__,
          (const MethodInfo_264ABB8 *)Method_System_Action_int___ctor__);
        if ( !ApSeedBulkExchangeConfirmMenu )
          goto LABEL_50;
        v29 = 8;
        v30 = ApSeedBulkExchangeConfirmMenu;
        v31 = v27;
        v32 = v25;
        v33 = v28;
        goto LABEL_10;
      }
      KindByShopState = (ShopEntity_o *)*v18;
      if ( !*v18 )
        goto LABEL_50;
      KindByShopState = (ShopEntity_o *)ShopBuyItemListViewItem__get_IsItemTypeRarePri(
                                          (ShopBuyItemListViewItem_o *)KindByShopState,
                                          0LL);
      v42 = this->fields.buyItemConfirmMenu;
      v43 = *v18;
      if ( ((unsigned __int8)KindByShopState & 1) != 0 )
      {
        v44 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
        v45 = &Method_ShopRootComponent___c__DisplayClass81_0__OpenConfirmMenu_b__1__;
LABEL_27:
        v52 = v44;
        System_Action___ctor(v44, (Il2CppObject *)v9, *v45, 0LL);
        v53 = (System_Action_int__o *)sub_B70764(System_Action_int__TypeInfo);
        System_Action_int____ctor(
          v53,
          (Il2CppObject *)this,
          Method_ShopRootComponent_SelectedBuyItemConfirm__,
          (const MethodInfo_264ABB8 *)Method_System_Action_int___ctor__);
        if ( v42 )
        {
          ShopBuyItemConfirmMenu__OpenAfterCheckedFree(v42, v43, v52, v53, 0LL);
          return;
        }
        goto LABEL_50;
      }
      if ( !v43 )
        goto LABEL_50;
      v59 = v43->fields._Shop_k__BackingField;
      v60 = v43->fields._ShopKind_k__BackingField;
      v38 = (System_Action_int__o *)sub_B70764(System_Action_int__TypeInfo);
      System_Action_int____ctor(
        v38,
        (Il2CppObject *)this,
        Method_ShopRootComponent_SelectedBuyItemConfirm__,
        (const MethodInfo_264ABB8 *)Method_System_Action_int___ctor__);
      if ( !v42 )
        goto LABEL_50;
      v39 = v42;
      v40 = v59;
      v41 = v60;
      break;
    default:
      return;
  }
  ShopBuyItemConfirmMenu__Open(v39, v40, v41, v38, 0, 0LL);
  return;
}


void __fastcall ShopRootComponent__OpenDetailCheck(ShopRootComponent_o *this, const MethodInfo *method)
{
  ShopRootComponent_o *v2; // x19
  struct ShopSceneListViewControlHelper_o *listViewHelper; // x8
  ShopBuyItemListViewItem_o *Item; // x20
  struct ShopEntity_o *Shop_k__BackingField; // x8
  ShopDetailEntity_o *ShopDetailEntity; // x21
  System_String_o *message; // x21
  CommonUI_o *v8; // x20
  CommonConfirmDialog_ClickDelegate_o *v9; // x22

  v2 = this;
  if ( (byte_4353729 & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_ShopDetailMaster___);
    sub_B70694(&Method_ShopRootComponent_CloseDetaiCheckConfirm__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (ShopRootComponent_o *)sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4353729 = 1;
  }
  listViewHelper = v2->fields.listViewHelper;
  if ( !listViewHelper )
    goto LABEL_15;
  this = (ShopRootComponent_o *)listViewHelper->fields.buyItemListViewManager;
  if ( !this )
    goto LABEL_15;
  Item = ShopBuyItemListViewManager__GetItem((ShopBuyItemListViewManager_o *)this, v2->fields.selectedItemIndex, 0LL);
  this = (ShopRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_15;
  this = (ShopRootComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ShopDetailMaster___);
  if ( !Item )
    goto LABEL_15;
  Shop_k__BackingField = Item->fields._Shop_k__BackingField;
  if ( !Shop_k__BackingField )
    goto LABEL_15;
  if ( !this )
    goto LABEL_15;
  ShopDetailEntity = ShopDetailMaster__getShopDetailEntity(
                       (ShopDetailMaster_o *)this,
                       Shop_k__BackingField->fields.id,
                       0LL);
  this = (ShopRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !ShopDetailEntity )
    goto LABEL_15;
  message = ShopDetailEntity->fields.message;
  v8 = (CommonUI_o *)this;
  v9 = (CommonConfirmDialog_ClickDelegate_o *)sub_B70764(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v9,
    (Il2CppObject *)v2,
    Method_ShopRootComponent_CloseDetaiCheckConfirm__,
    0LL);
  this = (ShopRootComponent_o *)BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  }
  if ( !v8 )
LABEL_15:
    sub_B7076C(this, method);
  CommonUI__OpenConfirmDialog_17904124(
    v8,
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

  if ( (byte_435372E & 1) == 0 )
  {
    sub_B70694(&ShopRootConstants_TypeInfo);
    byte_435372E = 1;
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
  if ( (BYTE3(ShopRootConstants_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ShopRootConstants_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
  }
  *(UnityEngine_Vector3_o *)&v11 = ShopRootConstants__GetGiftButtonPos(v8 & 1, v9);
  if ( !transform )
    goto LABEL_19;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v11, 0LL);
  if ( (v8 & 1) == 0 )
    return;
  shopEventItemDrawBase = (UnityEngine_GameObject_o *)this->fields.shopEventItemDrawBase;
  if ( !shopEventItemDrawBase )
LABEL_19:
    sub_B7076C(shopEventItemDrawBase, *(_QWORD *)&state);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)shopEventItemDrawBase, 0LL);
  v15 = ShopRootConstants_TypeInfo;
  v16 = gameObject;
  if ( (BYTE3(ShopRootConstants_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ShopRootConstants_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
    v15 = ShopRootConstants_TypeInfo;
  }
  TweenAlpha__Begin(v16, v15->static_fields->OPEN_TIME, 1.0, 0LL);
}


void __fastcall ShopRootComponent__OpenHelp(ShopRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t state; // w9
  ShopSceneListViewControlHelper_o *listViewHelper; // x0
  CommonUI_o *Instance; // x20
  System_Action_o *v7; // x21
  int32_t v8; // w1
  const MethodInfo *v9; // x1
  int32_t v10; // w19
  System_String_o *HelpSaveKey; // x0

  if ( (byte_435371F & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_ShopRootComponent_OnClickHelpClose__);
    sub_B70694(&ShopRootConstants_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_435371F = 1;
  }
  state = this->fields.state;
  switch ( state )
  {
    case 1:
      listViewHelper = this->fields.listViewHelper;
      this->fields.state = 13;
      if ( !listViewHelper )
        goto LABEL_22;
      ShopSceneListViewControlHelper__SetListViewOnOpenHelp(listViewHelper, 13, v2);
      listViewHelper = (ShopSceneListViewControlHelper_o *)this->fields.titleInfo;
      if ( !listViewHelper )
        goto LABEL_22;
      TitleInfoControl__SetHelpBtn((TitleInfoControl_o *)listViewHelper, 0, 0LL);
      return;
    case 2:
    case 4:
      return;
    case 3:
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v7 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
      System_Action___ctor(v7, (Il2CppObject *)this, Method_ShopRootComponent_OnClickHelpClose__, 0LL);
      if ( !Instance )
        goto LABEL_22;
      v8 = 20;
      goto LABEL_17;
    case 5:
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v7 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
      System_Action___ctor(v7, (Il2CppObject *)this, Method_ShopRootComponent_OnClickHelpClose__, 0LL);
      if ( !Instance )
        goto LABEL_22;
      v8 = 47;
      goto LABEL_17;
    case 6:
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v7 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
      System_Action___ctor(v7, (Il2CppObject *)this, Method_ShopRootComponent_OnClickHelpClose__, 0LL);
      if ( !Instance )
        goto LABEL_22;
      v8 = 19;
      goto LABEL_17;
    default:
      if ( state != 20 )
        return;
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v7 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
      System_Action___ctor(v7, (Il2CppObject *)this, Method_ShopRootComponent_OnClickHelpClose__, 0LL);
      if ( !Instance )
        goto LABEL_22;
      v8 = 1029;
LABEL_17:
      CommonUI__OpenTutorialImageDialog_17929856(Instance, v8, -1, v7, 0LL, 0LL, 0LL);
      listViewHelper = (ShopSceneListViewControlHelper_o *)this->fields.titleInfo;
      if ( !listViewHelper )
LABEL_22:
        sub_B7076C(listViewHelper, method);
      TitleInfoControl__SetHelpBtn((TitleInfoControl_o *)listViewHelper, 0, 0LL);
      v10 = this->fields.state;
      if ( (BYTE3(ShopRootConstants_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ShopRootConstants_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
      }
      HelpSaveKey = ShopRootConstants__GetHelpSaveKey(v10, v9);
      UnityEngine_PlayerPrefs__SetInt(HelpSaveKey, 1, 0LL);
      UnityEngine_PlayerPrefs__Save(0LL);
      return;
  }
}


void __fastcall ShopRootComponent__OpenLimitCountSealInfoDialog(
        ShopRootComponent_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  ServantLimitImageMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v8; // x1
  System_String_o *LimitCountSealedDialogMessage; // x0
  SummonInfoDlgComponent_o *limitCountSealInfoDlg; // x21
  System_String_o *v11; // x20
  System_String_o *v12; // x22
  SummonInfoDlgComponent_CallbackFunc_o *v13; // x23

  if ( (byte_4353708 & 1) == 0 )
  {
    sub_B70694(&SummonInfoDlgComponent_CallbackFunc_TypeInfo);
    sub_B70694(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&Method_ShopRootComponent_EndLimitCountSealInfoDialog__);
    sub_B70694(&StringLiteral_8487/*"LIMIT_COUNT_SEALED_TITLE"*/);
    byte_4353708 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_12;
  LimitCountSealedDialogMessage = ServantLimitImageMaster__GetLimitCountSealedDialogMessage(
                                    Master_WarQuestSelectionMaster,
                                    svtId,
                                    limitCount,
                                    0LL);
  limitCountSealInfoDlg = this->fields.limitCountSealInfoDlg;
  v11 = LimitCountSealedDialogMessage;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_8487/*"LIMIT_COUNT_SEALED_TITLE"*/, 0LL);
  v13 = (SummonInfoDlgComponent_CallbackFunc_o *)sub_B70764(SummonInfoDlgComponent_CallbackFunc_TypeInfo);
  SummonInfoDlgComponent_CallbackFunc___ctor(
    v13,
    (Il2CppObject *)this,
    Method_ShopRootComponent_EndLimitCountSealInfoDialog__,
    0LL);
  if ( !limitCountSealInfoDlg )
LABEL_12:
    sub_B7076C(Master_WarQuestSelectionMaster, v8);
  SummonInfoDlgComponent__OpenInfoMessageDlg(limitCountSealInfoDlg, v12, v11, v13, 0LL);
}


void __fastcall ShopRootComponent__OpenStonePurchaseMenu(
        ShopRootComponent_o *this,
        int32_t state,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x20
  StonePurchaseMenu_CallbackFunc_o *v6; // x21
  System_Action_o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4353732 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&StonePurchaseMenu_CallbackFunc_TypeInfo);
    sub_B70694(&Method_ShopRootComponent_CloseStonePurchaseMenu__);
    sub_B70694(&Method_ShopRootComponent_RefreshInfo__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4353732 = 1;
  }
  if ( state == 10 )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v6 = (StonePurchaseMenu_CallbackFunc_o *)sub_B70764(StonePurchaseMenu_CallbackFunc_TypeInfo);
    StonePurchaseMenu_CallbackFunc___ctor(
      v6,
      (Il2CppObject *)this,
      Method_ShopRootComponent_CloseStonePurchaseMenu__,
      0LL);
    v7 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(v7, (Il2CppObject *)this, Method_ShopRootComponent_RefreshInfo__, 0LL);
    if ( !Instance )
      sub_B7076C(v8, v9);
    CommonUI__OpenStonePurchaseMenu(Instance, v6, v7, 0LL);
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
  if ( (byte_435372A & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_int___ctor__);
    sub_B70694(&System_Action_int__TypeInfo);
    this = (ShopRootComponent_o *)sub_B70694(&Method_ShopRootComponent_CloseStorageDetailCheckConfirm__);
    byte_435372A = 1;
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
        v9 = (System_Action_int__o *)sub_B70764(System_Action_int__TypeInfo),
        System_Action_int____ctor(
          v9,
          (Il2CppObject *)v2,
          Method_ShopRootComponent_CloseStorageDetailCheckConfirm__,
          (const MethodInfo_264ABB8 *)Method_System_Action_int___ctor__),
        !buyStorageConfirmDialog) )
  {
LABEL_7:
    sub_B7076C(this, method);
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
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  ShopBuyItemListViewItem_o **v14; // x22
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  const MethodInfo *v21; // x3
  __int64 v22; // x8
  __int64 v23; // x8
  int v24; // w21
  QuestRewardInfo_o *v25; // x22
  __int64 v26; // x21
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  __int64 v33; // x8
  __int64 v34; // x8
  __int64 v35; // x8
  CommonUI_o *Instance; // x19
  AvalonSceneManager_c *v37; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v39; // x21
  __int64 v40; // x0

  if ( (byte_4353713 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&AvalonSceneManager_TypeInfo);
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&QuestRewardInfo_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_ShopRootComponent___c__DisplayClass95_0__PlayLvExceedItemReleaseEffect_b__0__);
    sub_B70694(&ShopRootComponent___c__DisplayClass95_0_TypeInfo);
    byte_4353713 = 1;
  }
  v5 = sub_B70764(ShopRootComponent___c__DisplayClass95_0_TypeInfo);
  ShopRootComponent___c__DisplayClass95_0___ctor((ShopRootComponent___c__DisplayClass95_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_26;
  *(_QWORD *)(v5 + 24) = this;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 24), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 32) = item;
  v14 = (ShopBuyItemListViewItem_o **)(v5 + 32);
  sub_B70630((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)item, v15, v16, v17, v18, v19, v20);
  if ( !*(_QWORD *)(v5 + 32) )
    goto LABEL_26;
  v22 = *(_QWORD *)(*(_QWORD *)(v5 + 32) + 112LL);
  if ( !v22 )
    goto LABEL_26;
  v23 = *(_QWORD *)(v22 + 56);
  if ( !v23 )
    goto LABEL_26;
  if ( !*(_DWORD *)(v23 + 24) )
  {
LABEL_27:
    v40 = sub_B70798(v6);
    sub_B70738(v40, 0LL);
  }
  v24 = *(_DWORD *)(v23 + 32);
  v6 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
  }
  if ( v24 == v6->static_fields->LvExceedItemId )
  {
    v25 = (QuestRewardInfo_o *)sub_B70764(QuestRewardInfo_TypeInfo);
    QuestRewardInfo___ctor(v25, 0LL);
    *(_QWORD *)(v5 + 16) = v25;
    v26 = v5 + 16;
    sub_B70630((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)v25, v27, v28, v29, v30, v31, v32);
    v33 = *(_QWORD *)(v5 + 32);
    if ( !v33 )
      goto LABEL_26;
    v34 = *(_QWORD *)(v33 + 112);
    if ( !v34 )
      goto LABEL_26;
    v35 = *(_QWORD *)(v34 + 56);
    if ( !v35 )
      goto LABEL_26;
    if ( *(_DWORD *)(v35 + 24) )
    {
      if ( *(_QWORD *)v26 )
      {
        *(_DWORD *)(*(_QWORD *)v26 + 20LL) = *(_DWORD *)(v35 + 32);
        if ( *(_QWORD *)v26 )
        {
          *(_DWORD *)(*(_QWORD *)v26 + 24LL) = this->fields.buyCount;
          if ( *(_QWORD *)v26 )
          {
            *(_DWORD *)(*(_QWORD *)v26 + 16LL) = 2;
            Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v37 = AvalonSceneManager_TypeInfo;
            if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
              v37 = AvalonSceneManager_TypeInfo;
            }
            DEFAULT_FADE_TIME = v37->static_fields->DEFAULT_FADE_TIME;
            v39 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
            System_Action___ctor(
              v39,
              (Il2CppObject *)v5,
              Method_ShopRootComponent___c__DisplayClass95_0__PlayLvExceedItemReleaseEffect_b__0__,
              0LL);
            if ( Instance )
            {
              CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v39, 0LL);
              return;
            }
          }
        }
      }
LABEL_26:
      sub_B7076C(v6, v7);
    }
    goto LABEL_27;
  }
  v7 = *v14;
  if ( !*v14 )
    goto LABEL_26;
  ShopRootComponent__ShowNormalItemDialog(this, v7, v7->fields._Shop_k__BackingField, v21);
}


void __fastcall ShopRootComponent__PlayServantCostumeReleaseEffect(
        ShopRootComponent_o *this,
        ShopEntity_o *shopEntity,
        const MethodInfo *method)
{
  __int64 v5; // x19
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  const MethodInfo *v20; // x2
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v22; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v24; // x21

  if ( (byte_4353719 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&AvalonSceneManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_ShopRootComponent___c__DisplayClass102_0__PlayServantCostumeReleaseEffect_b__0__);
    sub_B70694(&ShopRootComponent___c__DisplayClass102_0_TypeInfo);
    byte_4353719 = 1;
  }
  v5 = sub_B70764(ShopRootComponent___c__DisplayClass102_0_TypeInfo);
  ShopRootComponent___c__DisplayClass102_0___ctor((ShopRootComponent___c__DisplayClass102_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_9;
  *(_QWORD *)(v5 + 16) = shopEntity;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)shopEntity, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = this;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 24), (System_Int32_array **)this, v14, v15, v16, v17, v18, v19);
  ShopRootComponent__SetActionBG(this, 1, v20);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v22 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v22 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v22->static_fields->DEFAULT_FADE_TIME;
  v24 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(
    v24,
    (Il2CppObject *)v5,
    Method_ShopRootComponent___c__DisplayClass102_0__PlayServantCostumeReleaseEffect_b__0__,
    0LL);
  if ( !Instance )
LABEL_9:
    sub_B7076C(v6, v7);
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v24, 0LL);
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
    sub_B7076C(BackVoiceMasterKey, v6);
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
    sub_B7076C(EnterVoiceMasterKey, v6);
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
    sub_B7076C(standFigureBack, method);
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
  const MethodInfo *v6; // x2
  ShopSceneListViewControlHelper_o *listViewHelper; // x0

  if ( (byte_4353722 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_21560/*"ok"*/);
    byte_4353722 = 1;
  }
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_21560/*"ok"*/, 0LL) )
  {
    listViewHelper = this->fields.listViewHelper;
    this->fields.inputState = 4;
    if ( !listViewHelper )
      sub_B7076C(0LL, v5);
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
    sub_B7076C(CurrencyKind, v6);
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
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  UILabel_o *stoneFragmentsInfoLabel; // x22
  UserItemMaster_o *v13; // x20
  UILabel_o *anonymousInfoLabel; // x22
  int64_t UserId; // x0
  UILabel_o *grailFragmentsInfoLabel; // x21
  int64_t v17; // x22
  BalanceConfig_c *v18; // x8
  UILabel_o *apSeedInfoLabel; // x21
  int64_t v20; // x0
  const MethodInfo *v21; // x1
  UILabel_o *shop13InfoLabel; // x21
  int64_t v23; // x0
  UISprite_o *shop13Info; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v26; // x0
  UnityEngine_GameObject_o *v27; // x0
  UnityEngine_GameObject_o *v28; // x0
  char v29; // w21
  UILabel_o *shop15InfoLabel; // x21
  int64_t v31; // x0
  BalanceConfig_c *v32; // x8
  int64_t v33; // x22
  int32_t v34; // w20
  UISprite_o *shop15Info; // x20
  UnityEngine_GameObject_o *v36; // x0
  UnityEngine_GameObject_o *v37; // x0
  UnityEngine_GameObject_o *v38; // x0
  UnityEngine_GameObject_o *v39; // x0
  const MethodInfo *v40; // x2

  if ( (byte_4353700 & 1) == 0 )
  {
    sub_B70694(&AtlasManager_TypeInfo);
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&StringLiteral_19739/*"img_bg_evocation"*/);
    sub_B70694(&StringLiteral_19743/*"img_bg_pp"*/);
    byte_4353700 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_64;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !SelfUserGame )
    goto LABEL_64;
  v6 = Instance;
  stoneInfoLabel = this->fields.stoneInfoLabel;
  stone = SelfUserGame->fields.stone;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = (int64_t)LocalizationManager__GetNumberFormat(stone, 0LL);
  if ( !stoneInfoLabel )
    goto LABEL_64;
  UILabel__set_text(stoneInfoLabel, (System_String_o *)Instance, 0LL);
  manaInfoLabel = this->fields.manaInfoLabel;
  Instance = (int64_t)LocalizationManager__GetNumberFormat(SelfUserGame->fields.mana, 0LL);
  if ( !manaInfoLabel )
    goto LABEL_64;
  UILabel__set_text(manaInfoLabel, (System_String_o *)Instance, 0LL);
  rarePriInfoLabel = this->fields.rarePriInfoLabel;
  Instance = (int64_t)LocalizationManager__GetNumberFormat(SelfUserGame->fields.rarePri, 0LL);
  if ( !rarePriInfoLabel )
    goto LABEL_64;
  UILabel__set_text(rarePriInfoLabel, (System_String_o *)Instance, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_64;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserItemMaster___);
  stoneFragmentsInfoLabel = this->fields.stoneFragmentsInfoLabel;
  v13 = (UserItemMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !v6 )
    goto LABEL_64;
  if ( !v13 )
    goto LABEL_64;
  Instance = (int64_t)UserItemMaster__GetEntityDefinitely(v13, Instance, *(_DWORD *)(v6 + 88), 0LL);
  if ( !Instance )
    goto LABEL_64;
  Instance = (int64_t)LocalizationManager__GetNumberFormat(*(_DWORD *)(Instance + 28), 0LL);
  if ( !stoneFragmentsInfoLabel )
    goto LABEL_64;
  UILabel__set_text(stoneFragmentsInfoLabel, (System_String_o *)Instance, 0LL);
  anonymousInfoLabel = this->fields.anonymousInfoLabel;
  UserId = NetworkManager__get_UserId(0LL);
  Instance = (int64_t)UserItemMaster__GetEntityDefinitely(v13, UserId, *(_DWORD *)(v6 + 92), 0LL);
  if ( !Instance )
    goto LABEL_64;
  Instance = (int64_t)LocalizationManager__GetNumberFormat(*(_DWORD *)(Instance + 28), 0LL);
  if ( !anonymousInfoLabel )
    goto LABEL_64;
  UILabel__set_text(anonymousInfoLabel, (System_String_o *)Instance, 0LL);
  grailFragmentsInfoLabel = this->fields.grailFragmentsInfoLabel;
  v17 = NetworkManager__get_UserId(0LL);
  v18 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v18 = BalanceConfig_TypeInfo;
  }
  Instance = (int64_t)UserItemMaster__GetEntityDefinitely(v13, v17, v18->static_fields->LvExceedDewDropItemId, 0LL);
  if ( !Instance )
    goto LABEL_64;
  Instance = (int64_t)LocalizationManager__GetNumberFormat(*(_DWORD *)(Instance + 28), 0LL);
  if ( !grailFragmentsInfoLabel )
    goto LABEL_64;
  UILabel__set_text(grailFragmentsInfoLabel, (System_String_o *)Instance, 0LL);
  apSeedInfoLabel = this->fields.apSeedInfoLabel;
  v20 = NetworkManager__get_UserId(0LL);
  Instance = (int64_t)UserItemMaster__GetEntityDefinitely(
                        v13,
                        v20,
                        BalanceConfig_TypeInfo->static_fields->ApSeedItemId,
                        0LL);
  if ( !Instance )
    goto LABEL_64;
  Instance = (int64_t)LocalizationManager__GetNumberFormat(*(_DWORD *)(Instance + 28), 0LL);
  if ( !apSeedInfoLabel )
    goto LABEL_64;
  UILabel__set_text(apSeedInfoLabel, (System_String_o *)Instance, 0LL);
  ShopRootComponent__UpdateApLabel(this, v21);
  Instance = (int64_t)this->fields.shop13Info;
  if ( !Instance )
    goto LABEL_64;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_64;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  shop13InfoLabel = this->fields.shop13InfoLabel;
  v23 = NetworkManager__get_UserId(0LL);
  Instance = (int64_t)UserItemMaster__GetEntityDefinitely(
                        v13,
                        v23,
                        BalanceConfig_TypeInfo->static_fields->itemIdForShop13,
                        0LL);
  if ( !Instance )
    goto LABEL_64;
  Instance = (int64_t)LocalizationManager__GetNumberFormat(*(_DWORD *)(Instance + 28), 0LL);
  if ( !shop13InfoLabel )
    goto LABEL_64;
  UILabel__set_text(shop13InfoLabel, (System_String_o *)Instance, 0LL);
  shop13Info = this->fields.shop13Info;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetShopBanner_31553980(shop13Info, (System_String_o *)StringLiteral_19743/*"img_bg_pp"*/, 0LL);
  Instance = (int64_t)this->fields.manaInfoLabel;
  if ( !Instance )
    goto LABEL_64;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  Instance = (int64_t)GameObjectExtensions__GetParent(gameObject, 0LL);
  if ( !Instance )
    goto LABEL_64;
  v26 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  GameObjectExtensions__SetLocalPositionX(v26, 85.0, 0LL);
  Instance = (int64_t)this->fields.rarePriInfoLabel;
  if ( !Instance )
    goto LABEL_64;
  v27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  Instance = (int64_t)GameObjectExtensions__GetParent(v27, 0LL);
  if ( !Instance )
    goto LABEL_64;
  v28 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  GameObjectExtensions__SetLocalPositionX(v28, -273.0, 0LL);
  AtlasManager__SetItem(this->fields.apSeedIcon, 103, 0LL);
  AtlasManager__SetItem(this->fields.apIcon, 47, 0LL);
  Instance = ConstantMaster__IsFLAG20230402(0LL);
  if ( !this->fields.shop15Info )
    goto LABEL_64;
  v29 = Instance;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.shop15Info, 0LL);
  if ( !Instance )
    goto LABEL_64;
  if ( (v29 & 1) != 0 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    shop15InfoLabel = this->fields.shop15InfoLabel;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    v31 = NetworkManager__get_UserId(0LL);
    v32 = BalanceConfig_TypeInfo;
    v33 = v31;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v32 = BalanceConfig_TypeInfo;
    }
    Instance = (int64_t)UserItemMaster__GetEntityDefinitely(v13, v33, v32->static_fields->itemIdForShop15, 0LL);
    if ( Instance )
    {
      v34 = *(_DWORD *)(Instance + 28);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      Instance = (int64_t)LocalizationManager__GetNumberFormat(v34, 0LL);
      if ( shop15InfoLabel )
      {
        UILabel__set_text(shop15InfoLabel, (System_String_o *)Instance, 0LL);
        shop15Info = this->fields.shop15Info;
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__SetShopBanner_31553980(shop15Info, (System_String_o *)StringLiteral_19739/*"img_bg_evocation"*/, 0LL);
        Instance = (int64_t)this->fields.anonymousInfoLabel;
        if ( Instance )
        {
          v36 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
          Instance = (int64_t)GameObjectExtensions__GetParent(v36, 0LL);
          if ( Instance )
          {
            v37 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
            GameObjectExtensions__SetLocalPositionX(v37, -94.0, 0LL);
            Instance = (int64_t)this->fields.grailFragmentsInfoLabel;
            if ( Instance )
            {
              v38 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
              Instance = (int64_t)GameObjectExtensions__GetParent(v38, 0LL);
              if ( Instance )
              {
                v39 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
                GameObjectExtensions__SetLocalPositionX(v39, -273.0, 0LL);
                goto LABEL_62;
              }
            }
          }
        }
      }
    }
LABEL_64:
    sub_B7076C(Instance, v5);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
LABEL_62:
  Instance = (int64_t)this->fields.giftButtonControl;
  if ( !Instance )
    goto LABEL_64;
  GiftButtonCtrl__InvalidateGiftInfo((GiftButtonCtrl_o *)Instance, 0LL);
  ShopRootComponent__RefreshCurrencyInfo(this, this->fields.state, v40);
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

  if ( (byte_4353711 & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_int___ctor__);
    sub_B70694(&System_Action_int__TypeInfo);
    sub_B70694(&Method_ShopRootComponent__RequestEnd_b__93_0__);
    byte_4353711 = 1;
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
        v9 = (System_Action_int__o *)sub_B70764(System_Action_int__TypeInfo);
        System_Action_int____ctor(
          v9,
          (Il2CppObject *)this,
          Method_ShopRootComponent__RequestEnd_b__93_0__,
          (const MethodInfo_264ABB8 *)Method_System_Action_int___ctor__);
        if ( v8 )
        {
          ServantSellConfirmMenu__OpenCommandCodeRemoveResult(v8, v9, 0LL);
          return;
        }
      }
LABEL_10:
      sub_B7076C(servantSellConfirmMenu, v6);
    }
  }
}


void __fastcall ShopRootComponent__RequestSellServant(ShopRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  NetworkManager_ResultCallbackFunc_o *v4; // x20
  SellServantRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v6; // x1

  if ( (byte_435371C & 1) == 0 )
  {
    sub_B70694(&Method_NetworkManager_getRequest_SellServantRequest___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_B70694(&Method_ShopRootComponent_EndRequestSellServant__);
    sub_B70694(&StringLiteral_21408/*"ng"*/);
    byte_435371C = 1;
  }
  if ( this->fields.selectedServantIds )
  {
    v4 = (NetworkManager_ResultCallbackFunc_o *)sub_B70764(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v4,
      (Il2CppObject *)this,
      Method_ShopRootComponent_EndRequestSellServant__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = (SellServantRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                  v4,
                                                                  (const MethodInfo_1D57A4C *)Method_NetworkManager_getRequest_SellServantRequest___);
    if ( !Request_WarBoardWallAttackRequest )
      sub_B7076C(0LL, v6);
    SellServantRequest__beginRequest(
      Request_WarBoardWallAttackRequest,
      this->fields.selectedServantIds,
      this->fields.selectedCommandCodeIds,
      0LL);
  }
  else
  {
    ShopRootComponent__EndRequestSellServant(this, (System_String_o *)StringLiteral_21408/*"ng"*/, v2);
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
  if ( (byte_4353710 & 1) == 0 )
  {
    sub_B70694(&Method_NetworkManager_getRequest_PurchaseRequest___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&NetworkManager_ResultCallbackFunc_TypeInfo);
    this = (ShopRootComponent_o *)sub_B70694(&Method_ShopRootComponent_EndRequestShop__);
    byte_4353710 = 1;
  }
  listViewHelper = v2->fields.listViewHelper;
  if ( !listViewHelper )
    goto LABEL_14;
  this = (ShopRootComponent_o *)listViewHelper->fields.buyItemListViewManager;
  if ( !this )
    goto LABEL_14;
  Item = ShopBuyItemListViewManager__GetItem((ShopBuyItemListViewManager_o *)this, v2->fields.selectedItemIndex, 0LL);
  if ( Item )
  {
    v6 = Item;
    if ( Item->fields._Shop_k__BackingField )
    {
      v7 = (NetworkManager_ResultCallbackFunc_o *)sub_B70764(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(v7, (Il2CppObject *)v2, Method_ShopRootComponent_EndRequestShop__, 0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      this = (ShopRootComponent_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                      v7,
                                      (const MethodInfo_1D57A4C *)Method_NetworkManager_getRequest_PurchaseRequest___);
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
LABEL_14:
      sub_B7076C(this, method);
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
  int32_t TargetId; // w0
  const MethodInfo *v14; // x3
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x23
  WarEntity_o *Entity; // x23
  __int64 v17; // x2
  System_String_o *v18; // x20
  Il2CppObject *v19; // x0
  System_String_o *v20; // x0
  System_String_o *v21; // x21
  Il2CppObject *Name; // x0
  System_String_o *v23; // x0
  SummonInfoDlgComponent_o *limitCountSealInfoDlg; // x21
  System_String_o *v25; // x22
  SummonInfoDlgComponent_CallbackFunc_o *v26; // x23
  int coordinates_high; // [xsp+Ch] [xbp-24h] BYREF

  v5 = index;
  v6 = this;
  if ( (byte_4353706 & 1) == 0 )
  {
    sub_B70694(&SummonInfoDlgComponent_CallbackFunc_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_B70694(&Method_DataManager_GetMaster_CombineLimitReleaseMaster___);
    sub_B70694(&Method_DataManager_GetMaster_ServantMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&Method_ShopRootComponent_EndLimitCountSealInfoDialog__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&StringLiteral_3263/*"COMBINE_LIMIT_SEALED_TITLE"*/);
    this = (ShopRootComponent_o *)sub_B70694(&StringLiteral_3262/*"COMBINE_LIMIT_SEALED_MESSAGE_{0}"*/);
    byte_4353706 = 1;
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
        this = (ShopRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( this )
        {
          this = (ShopRootComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
          if ( v11 )
          {
            v12 = (ServantLimitImageMaster_o *)this;
            this = (ShopRootComponent_o *)ShopBuyItemListViewItem__get_TargetId(v11, 0LL);
            if ( v12 )
            {
              if ( ServantLimitImageMaster__IsServantLimitCountSeal(v12, (int32_t)this, 4, 0LL) )
              {
                v6->fields.limitCountSealInfoIndex = v5;
                v6->fields.limitCountSealInfoBulk = isBulk;
                TargetId = ShopBuyItemListViewItem__get_TargetId(v11, 0LL);
                ShopRootComponent__OpenLimitCountSealInfoDialog(v6, TargetId, 4, v14);
                return;
              }
              if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !DataManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              }
              Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ServantMaster___);
              this = (ShopRootComponent_o *)ShopBuyItemListViewItem__get_TargetId(v11, 0LL);
              if ( Master_WarQuestSelectionMaster )
              {
                Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                           Master_WarQuestSelectionMaster,
                           (int32_t)this,
                           (const MethodInfo_21C0440 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                this = (ShopRootComponent_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_CombineLimitReleaseMaster___);
                if ( Entity )
                {
                  *(_QWORD *)&index = HIDWORD(Entity->fields.coordinates);
                  if ( !this )
                    goto LABEL_31;
                }
                else
                {
                  *(_QWORD *)&index = 0xFFFFFFFFLL;
                  if ( !this )
                    goto LABEL_31;
                }
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
                v6->fields.limitCountSealInfoBulk = isBulk;
                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                }
                this = (ShopRootComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3263/*"COMBINE_LIMIT_SEALED_TITLE"*/, 0LL);
                if ( Entity )
                {
                  v18 = (System_String_o *)this;
                  coordinates_high = HIDWORD(Entity->fields.coordinates);
                  v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &coordinates_high, v17);
                  v20 = System_String__Format((System_String_o *)StringLiteral_3262/*"COMBINE_LIMIT_SEALED_MESSAGE_{0}"*/, v19, 0LL);
                  this = (ShopRootComponent_o *)LocalizationManager__Get(v20, 0LL);
                  if ( v11->fields._Shop_k__BackingField )
                  {
                    v21 = (System_String_o *)this;
                    Name = (Il2CppObject *)ShopEntity__getName(v11->fields._Shop_k__BackingField, 0LL);
                    v23 = System_String__Format(v21, Name, 0LL);
                    limitCountSealInfoDlg = v6->fields.limitCountSealInfoDlg;
                    v25 = v23;
                    v26 = (SummonInfoDlgComponent_CallbackFunc_o *)sub_B70764(SummonInfoDlgComponent_CallbackFunc_TypeInfo);
                    SummonInfoDlgComponent_CallbackFunc___ctor(
                      v26,
                      (Il2CppObject *)v6,
                      Method_ShopRootComponent_EndLimitCountSealInfoDialog__,
                      0LL);
                    if ( limitCountSealInfoDlg )
                    {
                      SummonInfoDlgComponent__OpenInfoMessageDlg(limitCountSealInfoDlg, v18, v25, v26, 0LL);
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
LABEL_31:
    sub_B7076C(this, *(_QWORD *)&index);
  }
}


void __fastcall ShopRootComponent__SelectMenu(ShopRootComponent_o *this, int32_t state, const MethodInfo *method)
{
  __int64 v5; // x20
  ShopPlayVoiceComponent_o *shopPlayVoiceComponent; // x0
  const MethodInfo *v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  ShopRootComponent_o *v14; // x0
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x2
  int32_t v17; // w1
  int32_t v18; // w19
  System_Action_o *v19; // x21
  ShopRootComponent_o *v20; // x0
  const MethodInfo *v21; // x3

  if ( (byte_4353702 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&CoinRoomUtility_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B70694(&Method_ShopRootComponent___c__DisplayClass76_0__SelectMenu_b__0__);
    sub_B70694(&ShopRootComponent___c__DisplayClass76_0_TypeInfo);
    byte_4353702 = 1;
  }
  v5 = sub_B70764(ShopRootComponent___c__DisplayClass76_0_TypeInfo);
  ShopRootComponent___c__DisplayClass76_0___ctor((ShopRootComponent___c__DisplayClass76_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_20;
  *(_QWORD *)(v5 + 16) = this;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v5 + 24) = state;
  if ( ShopRootComponent__CheckServerLimitTime(v14, state, v15) )
  {
    v17 = *(_DWORD *)(v5 + 24);
    if ( v17 == 17 )
    {
      if ( (BYTE3(CoinRoomUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CoinRoomUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
      }
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
            shopPlayVoiceComponent = (ShopPlayVoiceComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
            if ( shopPlayVoiceComponent )
            {
              AvalonSceneManager__pushScene((AvalonSceneManager_o *)shopPlayVoiceComponent, 90, 1, 0LL, 0LL);
              return;
            }
          }
        }
LABEL_20:
        sub_B7076C(shopPlayVoiceComponent, v7);
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
    v19 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(
      v19,
      (Il2CppObject *)v5,
      Method_ShopRootComponent___c__DisplayClass76_0__SelectMenu_b__0__,
      0LL);
    ShopRootComponent__SetFadeOut(v20, v18, v19, v21);
  }
}


void __fastcall ShopRootComponent__SelectSellServantConfirm(ShopRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  ServantSellMenu_o *servantSellMenu; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
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

  if ( (byte_435370F & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_int___ctor__);
    sub_B70694(&System_Action_int__TypeInfo);
    sub_B70694(&Method_ShopRootComponent_SellServantConfirm__);
    sub_B70694(&Method_ShopRootComponent___c__DisplayClass91_0__SelectSellServantConfirm_b__0__);
    sub_B70694(&ShopRootComponent___c__DisplayClass91_0_TypeInfo);
    byte_435370F = 1;
  }
  v3 = sub_B70764(ShopRootComponent___c__DisplayClass91_0_TypeInfo);
  ShopRootComponent___c__DisplayClass91_0___ctor((ShopRootComponent___c__DisplayClass91_0_o *)v3, 0LL);
  if ( !v3 )
    goto LABEL_18;
  *(_QWORD *)(v3 + 16) = this;
  sub_B70630((BattleServantConfConponent_o *)(v3 + 16), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
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
        v17 = (System_Action_int__o *)sub_B70764(System_Action_int__TypeInfo);
        System_Action_int____ctor(
          v17,
          (Il2CppObject *)v3,
          Method_ShopRootComponent___c__DisplayClass91_0__SelectSellServantConfirm_b__0__,
          (const MethodInfo_264ABB8 *)Method_System_Action_int___ctor__);
        if ( servantSellConfirmMenu )
        {
          ServantSellConfirmMenu__OpenSellEquippedLastSvtWarning(servantSellConfirmMenu, 4, v15, v17, 0LL);
          return;
        }
LABEL_18:
        sub_B7076C(servantSellMenu, v5);
      }
      if ( !servantSellConfirmMenu )
        goto LABEL_18;
      ServantSellConfirmMenu__Init(this->fields.servantSellConfirmMenu, 0LL);
      v26 = this->fields.servantSellConfirmMenu;
      v27 = *(_DWORD *)(v3 + 24);
      v28 = this->fields.selectedServantIds;
      selectedCommandCodeIds = this->fields.selectedCommandCodeIds;
      v30 = (System_Action_int__o *)sub_B70764(System_Action_int__TypeInfo);
      System_Action_int____ctor(
        v30,
        (Il2CppObject *)this,
        Method_ShopRootComponent_SellServantConfirm__,
        (const MethodInfo_264ABB8 *)Method_System_Action_int___ctor__);
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
      v20 = (System_Action_int__o *)sub_B70764(System_Action_int__TypeInfo);
      System_Action_int____ctor(
        v20,
        (Il2CppObject *)this,
        Method_ShopRootComponent_SellServantConfirm__,
        (const MethodInfo_264ABB8 *)Method_System_Action_int___ctor__);
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
  ShopRootComponent_o *v4; // x19
  int32_t state; // w8
  struct ShopSceneListViewControlHelper_o *listViewHelper; // x8
  ShopBuyItemListViewItem_o *Item; // x20
  struct ShopEntity_o *Shop_k__BackingField; // x8
  ShopDetailEntity_o *ShopDetailEntity; // x0
  ShopDetailEntity_o *v10; // x20
  ShopRootComponent_c *v11; // x0

  v4 = this;
  if ( (byte_435370B & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ShopDetailMaster___);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    sub_B70694(&ShopRootComponent_TypeInfo);
    this = (ShopRootComponent_o *)sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_435370B = 1;
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
        this = (ShopRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( this )
        {
          this = (ShopRootComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ShopDetailMaster___);
          if ( Item )
          {
            Shop_k__BackingField = Item->fields._Shop_k__BackingField;
            if ( Shop_k__BackingField )
            {
              if ( this )
              {
                ShopDetailEntity = ShopDetailMaster__getShopDetailEntity(
                                     (ShopDetailMaster_o *)this,
                                     Shop_k__BackingField->fields.id,
                                     0LL);
                if ( !ShopDetailEntity )
                  goto LABEL_6;
                v10 = ShopDetailEntity;
                if ( ShopDetailEntity->fields.frequencyType == 3 )
                  goto LABEL_24;
                v11 = ShopRootComponent_TypeInfo;
                if ( (BYTE3(ShopRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !ShopRootComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(ShopRootComponent_TypeInfo);
                  v11 = ShopRootComponent_TypeInfo;
                }
                this = (ShopRootComponent_o *)v11->static_fields->shopDetailCheckList;
                if ( this )
                {
                  if ( System_Collections_Generic_Dictionary_int__int___get_Item(
                         (System_Collections_Generic_Dictionary_int__int__o *)this,
                         v10->fields.shopId,
                         (const MethodInfo_2FBB0A0 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__) )
                  {
                    goto LABEL_6;
                  }
LABEL_24:
                  ShopRootComponent__OpenDetailCheck(v4, *(const MethodInfo **)&buyCount);
                  return;
                }
              }
            }
          }
        }
      }
    }
    sub_B7076C(this, *(_QWORD *)&buyCount);
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
      sub_B7076C(servantSellConfirmMenu, *(_QWORD *)&count);
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

  if ( (byte_4353736 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4353736 = 1;
  }
  actionBg = (UnityEngine_Object_o *)this->fields.actionBg;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(actionBg, 0LL, 0LL) )
  {
    v7 = this->fields.actionBg;
    if ( !v7 )
      sub_B7076C(0LL, v6);
    UnityEngine_GameObject__SetActive(v7, isEnable, 0LL);
  }
}


void __fastcall ShopRootComponent__SetFadeIn(ShopRootComponent_o *this, int32_t state, const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v5; // x1
  CommonUI_o *v6; // x19

  if ( (byte_4353705 & 1) == 0 )
  {
    sub_B70694(&AvalonSceneManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4353705 = 1;
  }
  if ( state == 15 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v6 = (CommonUI_o *)Instance;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    }
    if ( !v6 )
      sub_B7076C(Instance, v5);
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
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v16; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v18; // x21

  if ( (byte_4353704 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&AvalonSceneManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_ShopRootComponent___c__DisplayClass78_0__SetFadeOut_b__0__);
    sub_B70694(&ShopRootComponent___c__DisplayClass78_0_TypeInfo);
    byte_4353704 = 1;
  }
  v6 = sub_B70764(ShopRootComponent___c__DisplayClass78_0_TypeInfo);
  ShopRootComponent___c__DisplayClass78_0___ctor((ShopRootComponent___c__DisplayClass78_0_o *)v6, 0LL);
  if ( !v6 )
    goto LABEL_11;
  *(_QWORD *)(v6 + 16) = endFade;
  sub_B70630((BattleServantConfConponent_o *)(v6 + 16), (System_Int32_array **)endFade, v9, v10, v11, v12, v13, v14);
  if ( state == 15 )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v16 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v16 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v16->static_fields->DEFAULT_FADE_TIME;
    v18 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(
      v18,
      (Il2CppObject *)v6,
      Method_ShopRootComponent___c__DisplayClass78_0__SetFadeOut_b__0__,
      0LL);
    if ( Instance )
    {
      CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v18, 0LL);
      return;
    }
LABEL_11:
    sub_B7076C(v7, v8);
  }
  ActionExtensions__Call(*(System_Action_o **)(v6 + 16), 0LL);
}


void __fastcall ShopRootComponent__SetFrequencyTypeCheckList(
        ShopRootComponent_o *this,
        ShopDetailEntity_o *entity,
        bool decide,
        const MethodInfo *method)
{
  ShopRootComponent_c *v6; // x0
  System_Collections_Generic_Dictionary_int__int__o *shopDetailCheckList; // x0

  if ( (byte_435372D & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    sub_B70694(&ShopRootComponent_TypeInfo);
    byte_435372D = 1;
  }
  if ( entity && (decide || entity->fields.frequencyType != 1) )
  {
    v6 = ShopRootComponent_TypeInfo;
    if ( (BYTE3(ShopRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ShopRootComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ShopRootComponent_TypeInfo);
      v6 = ShopRootComponent_TypeInfo;
    }
    shopDetailCheckList = v6->static_fields->shopDetailCheckList;
    if ( !shopDetailCheckList )
      sub_B7076C(0LL, entity);
    System_Collections_Generic_Dictionary_int__int___set_Item(
      shopDetailCheckList,
      entity->fields.shopId,
      1,
      (const MethodInfo_2FBB138 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
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
    sub_B7076C(informationPanel, isDisp);
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
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x22
  ItemEntity_o *v11; // x23
  const MethodInfo *v12; // x3
  System_String_o *RequestResultDialogItemMessageNormal; // x22
  const MethodInfo *v14; // x2
  System_String_o *RequestResultDialogNumMessageNormal; // x0
  RequestResultDialog_o *requestResultDialog; // x21
  System_String_o *v17; // x23
  System_Action_bool__o *v18; // x24
  RequestResultDialog_o *v19; // x21
  System_Action_bool__o *v20; // x22

  if ( (byte_4353714 & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_bool___ctor__);
    sub_B70694(&System_Action_bool__TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B70694(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_B70694(&Method_ShopRootComponent_OnEndItemDialog__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4353714 = 1;
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
    RequestResultDialogMessageNormal = (System_String_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( RequestResultDialogMessageNormal )
    {
      MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                            (DataManager_o *)RequestResultDialogMessageNormal,
                                                                                            (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ItemMaster___);
      RequestResultDialogMessageNormal = (System_String_o *)ShopEntity__get_TargetId(entity, 0LL);
      if ( MasterData_WarQuestSelectionMaster )
      {
        v11 = (ItemEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                MasterData_WarQuestSelectionMaster,
                                (int32_t)RequestResultDialogMessageNormal,
                                (const MethodInfo_21C0440 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        RequestResultDialogItemMessageNormal = ShopRequestResultDialogMessageMaker__GetRequestResultDialogItemMessageNormal(
                                                 entity,
                                                 v11,
                                                 this->fields.buyCount,
                                                 v12);
        RequestResultDialogNumMessageNormal = ShopRequestResultDialogMessageMaker__GetRequestResultDialogNumMessageNormal(
                                                entity,
                                                v11,
                                                v14);
        requestResultDialog = this->fields.requestResultDialog;
        v17 = RequestResultDialogNumMessageNormal;
        v18 = (System_Action_bool__o *)sub_B70764(System_Action_bool__TypeInfo);
        System_Action_bool____ctor(
          v18,
          (Il2CppObject *)this,
          Method_ShopRootComponent_OnEndItemDialog__,
          (const MethodInfo_2648200 *)Method_System_Action_bool___ctor__);
        if ( requestResultDialog )
        {
          RequestResultDialog__Open(requestResultDialog, v9, v17, RequestResultDialogItemMessageNormal, v18, 0LL);
          return;
        }
      }
    }
LABEL_11:
    sub_B7076C(RequestResultDialogMessageNormal, v8);
  }
  v19 = this->fields.requestResultDialog;
  v20 = (System_Action_bool__o *)sub_B70764(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(
    v20,
    (Il2CppObject *)this,
    Method_ShopRootComponent_OnEndItemDialog__,
    (const MethodInfo_2648200 *)Method_System_Action_bool___ctor__);
  if ( !v19 )
    goto LABEL_11;
  RequestResultDialog__Open_32343948(v19, (System_String_o *)StringLiteral_1/*""*/, v9, v20, -1, 0LL);
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

  if ( (byte_4353715 & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_bool___ctor__);
    sub_B70694(&System_Action_bool__TypeInfo);
    sub_B70694(&Method_ShopRootComponent_OnEndItemDialog__);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4353715 = 1;
  }
  RequestResultDialogMessage = ShopRequestResultDialogMessageMaker__GetRequestResultDialogMessage(
                                 entity,
                                 this->fields.buyCount,
                                 method);
  requestResultDialog = this->fields.requestResultDialog;
  v7 = RequestResultDialogMessage;
  v8 = (System_Action_bool__o *)sub_B70764(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(
    v8,
    (Il2CppObject *)this,
    Method_ShopRootComponent_OnEndItemDialog__,
    (const MethodInfo_2648200 *)Method_System_Action_bool___ctor__);
  if ( !requestResultDialog )
    sub_B7076C(v9, v10);
  RequestResultDialog__Open_32343948(requestResultDialog, (System_String_o *)StringLiteral_1/*""*/, v7, v8, -1, 0LL);
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

  if ( (byte_4353716 & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_int___ctor__);
    sub_B70694(&System_Action_int__TypeInfo);
    sub_B70694(&Method_ShopRootComponent_OnEndStorageDialog__);
    byte_4353716 = 1;
  }
  state = this->fields.state;
  if ( state == 12 )
  {
    buyStorageResultDialog = this->fields.buyStorageResultDialog;
    v7 = (System_Action_int__o *)sub_B70764(System_Action_int__TypeInfo);
    System_Action_int____ctor(
      v7,
      (Il2CppObject *)this,
      Method_ShopRootComponent_OnEndStorageDialog__,
      (const MethodInfo_264ABB8 *)Method_System_Action_int___ctor__);
    if ( buyStorageResultDialog )
    {
      v11 = 1;
      v10 = buyStorageResultDialog;
      goto LABEL_9;
    }
LABEL_11:
    sub_B7076C(v8, v9);
  }
  if ( state == 11 )
  {
    v6 = this->fields.buyStorageResultDialog;
    v7 = (System_Action_int__o *)sub_B70764(System_Action_int__TypeInfo);
    System_Action_int____ctor(
      v7,
      (Il2CppObject *)this,
      Method_ShopRootComponent_OnEndStorageDialog__,
      (const MethodInfo_264ABB8 *)Method_System_Action_int___ctor__);
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

  if ( (byte_4353701 & 1) == 0 )
  {
    sub_B70694(&LocalizationManager_TypeInfo);
    byte_4353701 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_9;
  apInfoLabel = this->fields.apInfoLabel;
  Act = UserGameEntity__getAct(SelfUserGame, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  SelfUserGame = (UserGameEntity_o *)LocalizationManager__GetNumberFormat(Act, 0LL);
  if ( !apInfoLabel )
LABEL_9:
    sub_B7076C(SelfUserGame, v4);
  UILabel__set_text(apInfoLabel, (System_String_o *)SelfUserGame, 0LL);
}


void __fastcall ShopRootComponent___Init_b__71_0(
        ShopRootComponent_o *this,
        int32_t stoneCount,
        const MethodInfo *method)
{
  UILabel_o *stoneInfoLabel; // x20
  System_String_o *NumberFormat; // x0
  __int64 v7; // x1

  if ( (byte_4353737 & 1) == 0 )
  {
    sub_B70694(&LocalizationManager_TypeInfo);
    byte_4353737 = 1;
  }
  stoneInfoLabel = this->fields.stoneInfoLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  NumberFormat = LocalizationManager__GetNumberFormat(stoneCount, 0LL);
  if ( !stoneInfoLabel )
    sub_B7076C(NumberFormat, v7);
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
    sub_B7076C(servantSellConfirmMenu, v4);
  }
  ServantSellConfirmMenu__ClearCommandCodeRemoveResult(servantSellConfirmMenu, 0LL);
}


void __fastcall ShopRootComponent____n__0(ShopRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent__beginStartUp_17527796((SceneRootComponent_o *)this, 0LL);
}


void __fastcall ShopRootComponent__beginFinish(ShopRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ShopTopListViewManager_o *topListViewManager; // x0

  ShopRootComponent__Quit(this, method);
  topListViewManager = this->fields.topListViewManager;
  if ( !topListViewManager )
    sub_B7076C(0LL, v3);
  ShopTopListViewManager__ReleaseCoinRoomAsset(topListViewManager, 0LL);
}


void __fastcall ShopRootComponent__beginInitialize(ShopRootComponent_o *this, const MethodInfo *method)
{
  ShopTopListViewManager_o *topListViewManager; // x0
  ShopRootComponent_o *v4; // x0
  const MethodInfo *v5; // x1
  struct GiftButtonCtrl_o *giftButtonControl; // x20
  System_Action_o *v7; // x21
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct GiftButtonCtrl_o *v14; // x20
  System_Func_bool__bool__o *v15; // x21
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_43536FB & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_System_Func_bool__bool___ctor__);
    sub_B70694(&System_Func_bool__bool__TypeInfo);
    sub_B70694(&Method_ShopRootComponent_OnGiftClose__);
    sub_B70694(&Method_ShopRootComponent_OnGiftOpen__);
    sub_B70694(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_43536FB = 1;
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
  topListViewManager = (ShopTopListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
  v7 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_ShopRootComponent_OnGiftOpen__, 0LL);
  if ( !giftButtonControl
    || (giftButtonControl->fields.OnGiftOpenAdditionalAction = v7,
        sub_B70630(
          (BattleServantConfConponent_o *)&giftButtonControl->fields.OnGiftOpenAdditionalAction,
          (System_Int32_array **)v7,
          v8,
          v9,
          v10,
          v11,
          v12,
          v13),
        v14 = this->fields.giftButtonControl,
        v15 = (System_Func_bool__bool__o *)sub_B70764(System_Func_bool__bool__TypeInfo),
        System_Func_bool__bool____ctor(
          v15,
          (Il2CppObject *)this,
          Method_ShopRootComponent_OnGiftClose__,
          (const MethodInfo_29A38D0 *)Method_System_Func_bool__bool___ctor__),
        !v14) )
  {
LABEL_11:
    sub_B7076C(topListViewManager, method);
  }
  v14->fields.OnGiftCloseAdditionalAction = v15;
  sub_B70630(
    (BattleServantConfConponent_o *)&v14->fields.OnGiftCloseAdditionalAction,
    (System_Int32_array **)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
}


void __fastcall ShopRootComponent__beginResume(ShopRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent__beginResume_17527992((SceneRootComponent_o *)this, 0LL);
}


void __fastcall ShopRootComponent__beginStartUp(
        ShopRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct SceneJumpInfo_o **p_jumpInfo; // x21
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  __int64 v17; // x10
  TitleInfoControl_o *titleInfo; // x0
  __int64 v19; // x1
  System_String_o *returnSceneName; // x20
  System_String_o *SceneName; // x0
  bool v22; // w0
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  struct ShopPlayVoiceComponent_o *shopPlayVoiceComponent; // x8
  System_String_o *MainBgmName; // x20
  System_Action_o *v30; // x20
  const MethodInfo *v31; // x1
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  struct ShopPlayVoiceComponent_o *v38; // x20
  System_Int32_array **standFigureBack; // x1
  int32_t defaultFaceId; // w21
  void *v41; // x23
  BattleServantConfConponent_o *p_standFigureBack; // x20
  UITexture_o *backgroundTexture; // x20
  System_String_o *BG_ROOT; // x20
  __int64 v45; // x2
  Il2CppObject *v46; // x0
  System_String_o *v47; // x0
  ExUITexture_o *v48; // x21
  System_String_o *v49; // x20
  System_Action_o *v50; // x22
  __int64 v51; // x2
  ShopRootConstants_c *v52; // x0
  struct ShopRootConstants_StaticFields *static_fields; // x8
  System_String_o *v54; // x20
  Il2CppObject *v55; // x0
  ExUITexture_o *v56; // x19
  int32_t DEFAULT_BG_ID; // [xsp+8h] [xbp-38h] BYREF
  int32_t bgImageId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_43536FC & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&AtlasManager_TypeInfo);
    sub_B70694(&BgmManager_TypeInfo);
    sub_B70694(&FSUtility_TypeInfo);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&SceneJumpInfo_TypeInfo);
    sub_B70694(&SceneList_TypeInfo);
    sub_B70694(&Method_ShopRootComponent_LoadBanner__);
    sub_B70694(&Method_ShopRootComponent__beginStartUp_b__66_0__);
    sub_B70694(&ShopRootConstants_TypeInfo);
    sub_B70694(&SoundManager_TypeInfo);
    byte_43536FC = 1;
  }
  p_jumpInfo = &this->fields.jumpInfo;
  this->fields.jumpInfo = 0LL;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.jumpInfo,
    0LL,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.isFromCoinRoom = 0;
  if ( data )
  {
    v17 = *(&SceneJumpInfo_TypeInfo->_2.bitflags2 + 1);
    if ( *(&data->klass->_2.bitflags2 + 1) >= (unsigned int)v17
      && (SceneJumpInfo_c *)data->klass->_2.typeHierarchy[v17 - 1] == SceneJumpInfo_TypeInfo )
    {
      *p_jumpInfo = (struct SceneJumpInfo_o *)data;
      sub_B70630(
        (BattleServantConfConponent_o *)&this->fields.jumpInfo,
        (System_Int32_array **)data,
        v11,
        v12,
        v13,
        v14,
        v15,
        v16);
      if ( !*p_jumpInfo )
        goto LABEL_43;
      returnSceneName = (*p_jumpInfo)->fields.returnSceneName;
      if ( (BYTE3(SceneList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SceneList_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
      SceneName = SceneList__getSceneName(90, 0LL);
      v22 = System_String__op_Equality(returnSceneName, SceneName, 0LL);
      this->fields.isFromCoinRoom = v22;
      if ( v22 )
      {
        *p_jumpInfo = 0LL;
        sub_B70630((BattleServantConfConponent_o *)&this->fields.jumpInfo, 0LL, v11, v23, v24, v25, v26, v27);
      }
    }
  }
  ShopRootComponent__SetActionBG(this, 0, (const MethodInfo *)v11);
  if ( !this->fields.isFromCoinRoom )
  {
    shopPlayVoiceComponent = this->fields.shopPlayVoiceComponent;
    if ( !shopPlayVoiceComponent )
      goto LABEL_43;
    shopPlayVoiceComponent->fields.voicePlayOnce = 0;
    shopPlayVoiceComponent->fields.isPlayingVoice = 0;
  }
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  MainBgmName = BgmManager__GetMainBgmName(0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm(MainBgmName, 0LL);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_43;
  TitleInfoControl__setTitleInfo(titleInfo, this->fields.myFSM, 1, 0LL, 37, 0LL);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_43;
  TitleInfoControl__SetHelpBtn(titleInfo, 0, 0LL);
  v30 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v30, (Il2CppObject *)this, Method_ShopRootComponent__beginStartUp_b__66_0__, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadBanner(v30, 1, 0LL);
  ShopRootComponent__setDispInfo(this, v31);
  v38 = this->fields.shopPlayVoiceComponent;
  if ( !v38 )
    goto LABEL_43;
  standFigureBack = (System_Int32_array **)this->fields.standFigureBack;
  defaultFaceId = this->fields.defaultFaceId;
  v41 = *(void **)&this->fields.figureSvtId;
  v38->fields.standFigureBack = (struct StandFigureBack_o *)standFigureBack;
  p_standFigureBack = (BattleServantConfConponent_o *)&v38->fields.standFigureBack;
  sub_B70630(p_standFigureBack, standFigureBack, v32, v33, v34, v35, v36, v37);
  p_standFigureBack->monitor = v41;
  p_standFigureBack->fields.m_CachedPtr = defaultFaceId;
  titleInfo = (TitleInfoControl_o *)this->fields.standFigureBack;
  if ( !titleInfo )
    goto LABEL_43;
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
  backgroundTexture = (UITexture_o *)this->fields.backgroundTexture;
  titleInfo = (TitleInfoControl_o *)ShopRootConstants_TypeInfo;
  if ( (BYTE3(ShopRootConstants_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ShopRootConstants_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
    titleInfo = (TitleInfoControl_o *)ShopRootConstants_TypeInfo;
  }
  if ( !backgroundTexture )
    goto LABEL_43;
  UITexture__set_uvRect(
    backgroundTexture,
    *(UnityEngine_Rect_o *)((char *)&titleInfo->fields.mEventItemEventBtn->fields.leftAnchor + 4),
    0LL);
  BG_ROOT = ShopRootConstants_TypeInfo->static_fields->BG_ROOT;
  bgImageId = this->fields.bgImageId;
  v46 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &bgImageId, v45);
  v47 = System_String__Format(BG_ROOT, v46, 0LL);
  v48 = this->fields.backgroundTexture;
  v49 = v47;
  v50 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v50, (Il2CppObject *)this, Method_ShopRootComponent_LoadBanner__, 0LL);
  if ( !v48 )
LABEL_43:
    sub_B7076C(titleInfo, v19);
  if ( !ExUITexture__SetAssetImage(v48, v49, v50, 0LL) )
  {
    v52 = ShopRootConstants_TypeInfo;
    if ( (BYTE3(ShopRootConstants_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ShopRootConstants_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
      v52 = ShopRootConstants_TypeInfo;
    }
    static_fields = v52->static_fields;
    v54 = static_fields->BG_ROOT;
    DEFAULT_BG_ID = static_fields->DEFAULT_BG_ID;
    v55 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &DEFAULT_BG_ID, v51);
    titleInfo = (TitleInfoControl_o *)System_String__Format(v54, v55, 0LL);
    if ( this->fields.backgroundTexture )
    {
      v49 = (System_String_o *)titleInfo;
      ExUITexture__SetAssetImage(this->fields.backgroundTexture, (System_String_o *)titleInfo, 0LL, 0LL);
      goto LABEL_39;
    }
    goto LABEL_43;
  }
LABEL_39:
  v56 = this->fields.backgroundTexture;
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  FSUtility__SetUpBackTextureSize(v56, v49, 0LL);
}


void __fastcall ShopRootComponent__setDispInfo(ShopRootComponent_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  GuideEntity_o *GuideData; // x0
  int32_t guideFaceId; // w8
  ShopRootConstants_c *v7; // x0

  if ( (byte_43536FD & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_GuideMaster___);
    sub_B70694(&ShopRootConstants_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43536FD = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_GuideMaster___)) == 0LL )
  {
    sub_B7076C(Instance, v4);
  }
  GuideData = GuideMaster__getGuideData((GuideMaster_o *)Instance, 2, 0LL);
  if ( GuideData )
  {
    this->fields.figureSvtId = GuideData->fields.guideImageId;
    this->fields.figureSvtLimitCnt = GuideData->fields.guideLimitCount;
    this->fields.bgImageId = GuideData->fields.bgImageId;
    guideFaceId = GuideData->fields.guideFaceId;
  }
  else
  {
    v7 = ShopRootConstants_TypeInfo;
    if ( (BYTE3(ShopRootConstants_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ShopRootConstants_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
      v7 = ShopRootConstants_TypeInfo;
    }
    guideFaceId = 0;
    this->fields.figureSvtId = v7->static_fields->DEFAULT_FIGURE_ID;
    this->fields.figureSvtLimitCnt = v7->static_fields->DEFAULT_FIGURE_LIMIT_CNT;
    this->fields.bgImageId = v7->static_fields->DEFAULT_BG_ID;
  }
  this->fields.defaultFaceId = guideFaceId;
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
  __int64 v14; // x0
  ServantCostumeEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  v2 = this;
  if ( (byte_434F885 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_B70694(&Method_ShopRootComponent_OnEndPlayServantCostumeReleaseEffect__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (ShopRootComponent___c__DisplayClass102_0_o *)sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_434F885 = 1;
  }
  entity = 0LL;
  shopEntity = v2->fields.shopEntity;
  if ( !shopEntity )
    goto LABEL_16;
  targetIds = shopEntity->fields.targetIds;
  if ( !targetIds )
    goto LABEL_16;
  if ( !targetIds->max_length )
  {
    v14 = sub_B70798(this);
    sub_B70738(v14, 0LL);
  }
  this = (ShopRootComponent___c__DisplayClass102_0_o *)System_Int32__ToString((int)targetIds + 32, 0LL);
  if ( !this )
    goto LABEL_16;
  v5 = (System_String_o *)this;
  v6 = System_String__Substring_44821904((System_String_o *)this, 0, LODWORD(this->fields.shopEntity) - 2, 0LL);
  v7 = System_Int32__Parse(v6, 0LL);
  v8 = System_String__Substring(v5, v5->fields.m_stringLength - 2, 0LL);
  v9 = System_Int32__Parse(v8, 0LL);
  this = (ShopRootComponent___c__DisplayClass102_0_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_16;
  this = (ShopRootComponent___c__DisplayClass102_0_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)this,
                                                         (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  if ( !this )
    goto LABEL_16;
  if ( ServantCostumeMaster__TryGetEntity((ServantCostumeMaster_o *)this, &entity, v7, v9, 0LL) )
  {
    this = (ShopRootComponent___c__DisplayClass102_0_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( entity )
    {
      name = entity->fields.name;
      _4__this = (Il2CppObject *)v2->fields.__4__this;
      v12 = (CommonUI_o *)this;
      v13 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
      System_Action___ctor(v13, _4__this, Method_ShopRootComponent_OnEndPlayServantCostumeReleaseEffect__, 0LL);
      if ( v12 )
      {
        CommonUI__OpenCostumeReleaseEffect(v12, 1, name, v13, 23, 0LL);
        return;
      }
    }
LABEL_16:
    sub_B7076C(this, method);
  }
  this = (ShopRootComponent___c__DisplayClass102_0_o *)v2->fields.__4__this;
  if ( !this )
    goto LABEL_16;
  ShopRootComponent__OnEndPlayServantCostumeReleaseEffect((ShopRootComponent_o *)this, 0LL);
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
  ShopPlayVoiceComponent_o *shopPlayVoiceComponent; // x0
  __int64 v4; // x1
  struct ShopRootComponent_o *_4__this; // x8
  int32_t v6; // w4

  if ( (byte_434F886 & 1) == 0 )
  {
    sub_B70694(&PurchaseBehaviour_TypeInfo);
    byte_434F886 = 1;
  }
  if ( (BYTE3(PurchaseBehaviour_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
  }
  PurchaseBehaviour__Activate(0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (shopPlayVoiceComponent = _4__this->fields.shopPlayVoiceComponent) == 0LL
    || (!_4__this->fields.isFromCoinRoom ? (v6 = 0) : (v6 = 17),
        ShopPlayVoiceComponent__LoadVoice(
          shopPlayVoiceComponent,
          _4__this->fields.figureSvtId,
          this->fields.jumpedState,
          _4__this->fields.isFromCoinRoom,
          v6,
          0LL),
        (shopPlayVoiceComponent = (ShopPlayVoiceComponent_o *)this->fields.__4__this) == 0LL) )
  {
    sub_B7076C(shopPlayVoiceComponent, v4);
  }
  ShopRootComponent____n__0((ShopRootComponent_o *)shopPlayVoiceComponent, 0LL);
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
  ShopRootComponent___c__DisplayClass76_0_o *v2; // x19
  struct ShopRootComponent_o *_4__this; // x8
  ShopSceneListViewControlHelper_o *listViewHelper; // x20
  System_Action_o *_9__1; // x24
  int32_t selectedEventIndex; // w21
  int32_t state; // w22
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct ShopRootComponent_o *v14; // x8
  struct ShopRootComponent_o *v15; // x8

  v2 = this;
  if ( (byte_434F887 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    this = (ShopRootComponent___c__DisplayClass76_0_o *)sub_B70694(&Method_ShopRootComponent___c__DisplayClass76_0__SelectMenu_b__1__);
    byte_434F887 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  listViewHelper = _4__this->fields.listViewHelper;
  _9__1 = v2->fields.__9__1;
  selectedEventIndex = _4__this->fields.selectedEventIndex;
  state = v2->fields.state;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v2,
      Method_ShopRootComponent___c__DisplayClass76_0__SelectMenu_b__1__,
      0LL);
    v2->fields.__9__1 = _9__1;
    sub_B70630(
      (BattleServantConfConponent_o *)&v2->fields.__9__1,
      (System_Int32_array **)_9__1,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
  }
  if ( !listViewHelper )
    goto LABEL_12;
  ShopSceneListViewControlHelper__SetListViewOnSelectMenu(
    listViewHelper,
    state,
    &v2->fields.eventId,
    selectedEventIndex,
    _9__1,
    0LL);
  this = (ShopRootComponent___c__DisplayClass76_0_o *)v2->fields.__4__this;
  if ( !this
    || (ShopRootComponent__OpenStonePurchaseMenu((ShopRootComponent_o *)this, v2->fields.state, 0LL),
        (this = (ShopRootComponent___c__DisplayClass76_0_o *)v2->fields.__4__this) == 0LL)
    || (ShopRootComponent__OpenEventItemWindow((ShopRootComponent_o *)this, v2->fields.state, v2->fields.eventId, 0LL),
        (v14 = v2->fields.__4__this) == 0LL)
    || (v14->fields.state = v2->fields.state, (v15 = v2->fields.__4__this) == 0LL) )
  {
LABEL_12:
    sub_B7076C(this, method);
  }
  v15->fields.inputState = 0;
}


void __fastcall ShopRootComponent___c__DisplayClass76_0___SelectMenu_b__1(
        ShopRootComponent___c__DisplayClass76_0_o *this,
        const MethodInfo *method)
{
  ShopRootComponent___c__DisplayClass76_0_o *v2; // x19
  struct ShopRootComponent_o *_4__this; // x8
  struct ShopRootComponent_o *v4; // x8
  ShopPlayVoiceComponent_o *shopPlayVoiceComponent; // x20
  ShopRootComponent___c__DisplayClass76_0_o *v6; // x21
  ShopRootConstants_c *v7; // x8
  int32_t eventId; // w20
  int32_t *p_state; // x8
  int32_t *p__9__2; // x9
  struct ShopRootConstants_StaticFields *static_fields; // x9
  struct ShopRootComponent_o *v12; // x10
  int32_t v13; // w21
  int32_t v14; // w22
  ShopPlayVoiceComponent_o *v15; // x23
  StandFigureBack_o *standFigureBack; // x24
  System_Action_o *_9__2; // x25
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  v2 = this;
  if ( (byte_434F888 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_GuideMaster___);
    sub_B70694(&ShopRootConstants_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (ShopRootComponent___c__DisplayClass76_0_o *)sub_B70694(&Method_ShopRootComponent___c__DisplayClass76_0__SelectMenu_b__2__);
    byte_434F888 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_24;
  this = (ShopRootComponent___c__DisplayClass76_0_o *)_4__this->fields.shopPlayVoiceComponent;
  if ( !this )
    goto LABEL_24;
  ShopPlayVoiceComponent__StopVoice((ShopPlayVoiceComponent_o *)this, 0LL);
  if ( v2->fields.state != 15 )
    goto LABEL_22;
  v4 = v2->fields.__4__this;
  if ( !v4 )
    goto LABEL_24;
  shopPlayVoiceComponent = v4->fields.shopPlayVoiceComponent;
  this = (ShopRootComponent___c__DisplayClass76_0_o *)ShopPlayVoiceConstants__GetEnterVoiceFlag(15, 0LL);
  if ( !shopPlayVoiceComponent )
    goto LABEL_24;
  if ( !ShopPlayVoiceComponent__CheckVoiceFlag(shopPlayVoiceComponent, (int32_t)this, 0LL) )
    goto LABEL_22;
  this = (ShopRootComponent___c__DisplayClass76_0_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_24;
  this = (ShopRootComponent___c__DisplayClass76_0_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                        (DataManager_o *)this,
                                                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_GuideMaster___);
  if ( !this )
    goto LABEL_24;
  this = (ShopRootComponent___c__DisplayClass76_0_o *)GuideMaster__getGuideData((GuideMaster_o *)this, 3, 0LL);
  v6 = this;
  v7 = ShopRootConstants_TypeInfo;
  if ( (BYTE3(ShopRootConstants_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ShopRootConstants_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
    v7 = ShopRootConstants_TypeInfo;
  }
  if ( v6 )
  {
    eventId = v6->fields.eventId;
    p_state = &v6->fields.state;
    p__9__2 = (int32_t *)&v6->fields.__9__2;
  }
  else
  {
    static_fields = v7->static_fields;
    eventId = 0;
    p_state = &static_fields->DEFAULT_FIGURE_ID;
    p__9__2 = &static_fields->DEFAULT_FIGURE_LIMIT_CNT;
  }
  v12 = v2->fields.__4__this;
  if ( !v12 )
    goto LABEL_24;
  v13 = *p_state;
  v14 = *p__9__2;
  v15 = v12->fields.shopPlayVoiceComponent;
  standFigureBack = v12->fields.standFigureBack;
  _9__2 = v2->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v2,
      Method_ShopRootComponent___c__DisplayClass76_0__SelectMenu_b__2__,
      0LL);
    v2->fields.__9__2 = _9__2;
    sub_B70630(
      (BattleServantConfConponent_o *)&v2->fields.__9__2,
      (System_Int32_array **)_9__2,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  if ( !v15 )
LABEL_24:
    sub_B7076C(this, method);
  ShopPlayVoiceComponent__ReloadVoice(v15, standFigureBack, v13, v14, eventId, _9__2, 0LL);
LABEL_22:
  this = (ShopRootComponent___c__DisplayClass76_0_o *)v2->fields.__4__this;
  if ( !this )
    goto LABEL_24;
  ShopRootComponent__SetFadeIn((ShopRootComponent_o *)this, v2->fields.state, 0LL);
}


void __fastcall ShopRootComponent___c__DisplayClass76_0___SelectMenu_b__2(
        ShopRootComponent___c__DisplayClass76_0_o *this,
        const MethodInfo *method)
{
  ShopRootComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B7076C(0LL, method);
  ShopRootComponent__PlayVoiceEnter(_4__this, this->fields.state, 0LL);
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
  ShopRootComponent_o *_4__this; // x0
  int32_t state; // w21
  ShopSceneListViewControlHelper_o *listViewHelper; // x20
  System_Action_o *_9__1; // x23
  int32_t v7; // w22
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct ShopRootComponent_o *v14; // x8

  if ( (byte_434F889 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_ShopRootComponent___c__DisplayClass77_0__BackMenu_b__1__);
    byte_434F889 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_10;
  state = this->fields.state;
  listViewHelper = _4__this->fields.listViewHelper;
  _4__this = (ShopRootComponent_o *)ShopRootComponent__GetStateOnBack(_4__this, state, 0LL);
  _9__1 = this->fields.__9__1;
  v7 = (int)_4__this;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_ShopRootComponent___c__DisplayClass77_0__BackMenu_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.__9__1,
      (System_Int32_array **)_9__1,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
  }
  if ( !listViewHelper
    || (ShopSceneListViewControlHelper__SetListViewOnBackMenu(listViewHelper, state, v7, _9__1, 0LL),
        (_4__this = this->fields.__4__this) == 0LL)
    || (ShopRootComponent__CloseEventItemWindow(_4__this, 0LL), (v14 = this->fields.__4__this) == 0LL) )
  {
LABEL_10:
    sub_B7076C(_4__this, method);
  }
  v14->fields.inputState = 3;
}


void __fastcall ShopRootComponent___c__DisplayClass77_0___BackMenu_b__1(
        ShopRootComponent___c__DisplayClass77_0_o *this,
        const MethodInfo *method)
{
  ShopRootComponent___c__DisplayClass77_0_o *v2; // x19
  struct ShopRootComponent_o *_4__this; // x8
  struct ShopRootComponent_o *v4; // x8
  ShopPlayVoiceComponent_o *shopPlayVoiceComponent; // x20
  StandFigureBack_o *standFigureBack; // x21
  int32_t figureSvtId; // w22
  int32_t figureSvtLimitCnt; // w23
  int32_t defaultFaceId; // w24
  System_Action_o *_9__2; // x25
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  v2 = this;
  if ( (byte_434F88A & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    this = (ShopRootComponent___c__DisplayClass77_0_o *)sub_B70694(&Method_ShopRootComponent___c__DisplayClass77_0__BackMenu_b__2__);
    byte_434F88A = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  this = (ShopRootComponent___c__DisplayClass77_0_o *)_4__this->fields.shopPlayVoiceComponent;
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
    _9__2 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v2,
      Method_ShopRootComponent___c__DisplayClass77_0__BackMenu_b__2__,
      0LL);
    v2->fields.__9__2 = _9__2;
    sub_B70630(
      (BattleServantConfConponent_o *)&v2->fields.__9__2,
      (System_Int32_array **)_9__2,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  if ( !shopPlayVoiceComponent )
LABEL_13:
    sub_B7076C(this, method);
  ShopPlayVoiceComponent__ReloadVoice(
    shopPlayVoiceComponent,
    standFigureBack,
    figureSvtId,
    figureSvtLimitCnt,
    defaultFaceId,
    _9__2,
    0LL);
LABEL_11:
  this = (ShopRootComponent___c__DisplayClass77_0_o *)v2->fields.__4__this;
  if ( !this )
    goto LABEL_13;
  ShopRootComponent__SetFadeIn((ShopRootComponent_o *)this, v2->fields.state, 0LL);
}


void __fastcall ShopRootComponent___c__DisplayClass77_0___BackMenu_b__2(
        ShopRootComponent___c__DisplayClass77_0_o *this,
        const MethodInfo *method)
{
  ShopRootComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B7076C(0LL, method);
  ShopRootComponent__PlayVoiceBack(_4__this, this->fields.state, 0LL);
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
  ShopEntity_o *Shop_k__BackingField; // x20
  int32_t ShopKind_k__BackingField; // w21
  ShopBuyItemConfirmMenu_o *klass; // x19
  System_Action_int__o *v8; // x23

  v2 = this;
  if ( (byte_434F88B & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_int___ctor__);
    sub_B70694(&System_Action_int__TypeInfo);
    this = (ShopRootComponent___c__DisplayClass81_0_o *)sub_B70694(&Method_ShopRootComponent_SelectedBuyItemConfirm__);
    byte_434F88B = 1;
  }
  _4__this = (Il2CppObject *)v2->fields.__4__this;
  if ( !_4__this
    || (item = v2->fields.item) == 0LL
    || (Shop_k__BackingField = item->fields._Shop_k__BackingField,
        ShopKind_k__BackingField = item->fields._ShopKind_k__BackingField,
        klass = (ShopBuyItemConfirmMenu_o *)_4__this[9].klass,
        v8 = (System_Action_int__o *)sub_B70764(System_Action_int__TypeInfo),
        System_Action_int____ctor(
          v8,
          _4__this,
          Method_ShopRootComponent_SelectedBuyItemConfirm__,
          (const MethodInfo_264ABB8 *)Method_System_Action_int___ctor__),
        !klass) )
  {
    sub_B7076C(this, method);
  }
  ShopBuyItemConfirmMenu__Open(klass, Shop_k__BackingField, ShopKind_k__BackingField, v8, 0, 0LL);
}


void __fastcall ShopRootComponent___c__DisplayClass81_0___OpenConfirmMenu_b__1(
        ShopRootComponent___c__DisplayClass81_0_o *this,
        const MethodInfo *method)
{
  ShopRootComponent___c__DisplayClass81_0_o *v2; // x19
  Il2CppObject *_4__this; // x22
  struct ShopBuyItemListViewItem_o *item; // x8
  ShopEntity_o *Shop_k__BackingField; // x20
  int32_t ShopKind_k__BackingField; // w21
  ShopBuyItemConfirmMenu_o *klass; // x19
  System_Action_int__o *v8; // x23

  v2 = this;
  if ( (byte_434F88C & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_int___ctor__);
    sub_B70694(&System_Action_int__TypeInfo);
    this = (ShopRootComponent___c__DisplayClass81_0_o *)sub_B70694(&Method_ShopRootComponent_SelectedBuyItemConfirm__);
    byte_434F88C = 1;
  }
  _4__this = (Il2CppObject *)v2->fields.__4__this;
  if ( !_4__this
    || (item = v2->fields.item) == 0LL
    || (Shop_k__BackingField = item->fields._Shop_k__BackingField,
        ShopKind_k__BackingField = item->fields._ShopKind_k__BackingField,
        klass = (ShopBuyItemConfirmMenu_o *)_4__this[9].klass,
        v8 = (System_Action_int__o *)sub_B70764(System_Action_int__TypeInfo),
        System_Action_int____ctor(
          v8,
          _4__this,
          Method_ShopRootComponent_SelectedBuyItemConfirm__,
          (const MethodInfo_264ABB8 *)Method_System_Action_int___ctor__),
        !klass) )
  {
    sub_B7076C(this, method);
  }
  ShopBuyItemConfirmMenu__Open(klass, Shop_k__BackingField, ShopKind_k__BackingField, v8, 0, 0LL);
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
  Il2CppObject *v6; // x23
  ServantSellConfirmMenu_o *monitor; // x20
  int32_t kind; // w19
  System_Int64_array *v9; // x21
  System_Int64_array *klass; // x22
  System_Action_int__o *v11; // x24

  if ( (byte_434F88D & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_int___ctor__);
    sub_B70694(&System_Action_int__TypeInfo);
    sub_B70694(&Method_ShopRootComponent_SellServantConfirm__);
    byte_434F88D = 1;
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
        monitor = (ServantSellConfirmMenu_o *)v6[11].monitor;
        kind = this->fields.kind;
        v9 = (System_Int64_array *)v6[28].monitor;
        klass = (System_Int64_array *)v6[29].klass;
        v11 = (System_Action_int__o *)sub_B70764(System_Action_int__TypeInfo);
        System_Action_int____ctor(
          v11,
          v6,
          Method_ShopRootComponent_SellServantConfirm__,
          (const MethodInfo_264ABB8 *)Method_System_Action_int___ctor__);
        if ( monitor )
        {
          ServantSellConfirmMenu__Open(monitor, kind, v9, klass, v11, 0LL);
          return;
        }
      }
    }
LABEL_10:
    sub_B7076C(_4__this, *(_QWORD *)&decide);
  }
  ShopRootComponent__CloseSellServantConfirm((ShopRootComponent_o *)_4__this, 0LL);
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
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1
  System_Action_o *_9__1; // x22
  CommonUI_o *v6; // x21
  QuestRewardInfo_o *questRewardInfo; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_434F88E & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_ShopRootComponent___c__DisplayClass95_0__PlayLvExceedItemReleaseEffect_b__1__);
    byte_434F88E = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__1 = this->fields.__9__1;
  v6 = (CommonUI_o *)Instance;
  questRewardInfo = this->fields.questRewardInfo;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_ShopRootComponent___c__DisplayClass95_0__PlayLvExceedItemReleaseEffect_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.__9__1,
      (System_Int32_array **)_9__1,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
  }
  if ( !v6 )
    sub_B7076C(Instance, v4);
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
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_434F88F & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_ShopRootComponent___c__DisplayClass95_0__PlayLvExceedItemReleaseEffect_b__2__);
    byte_434F88F = 1;
  }
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    _9__2 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_ShopRootComponent___c__DisplayClass95_0__PlayLvExceedItemReleaseEffect_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.__9__2,
      (System_Int32_array **)_9__2,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  if ( !v6 )
LABEL_9:
    sub_B7076C(Instance, v4);
  CommonUI__OpenItemGetEffect(v6, v8, 0, questRewardInfo, _9__2, 0LL);
}


void __fastcall ShopRootComponent___c__DisplayClass95_0___PlayLvExceedItemReleaseEffect_b__2(
        ShopRootComponent___c__DisplayClass95_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1
  CommonUI_o *v5; // x20
  AvalonSceneManager_c *v6; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__3; // x21
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_434F890 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&AvalonSceneManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_ShopRootComponent___c__DisplayClass95_0__PlayLvExceedItemReleaseEffect_b__3__);
    byte_434F890 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  CommonUI__ReleaseItemGetEffect(Instance, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = Instance;
  v6 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v6 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v6->static_fields->DEFAULT_FADE_TIME;
  _9__3 = this->fields.__9__3;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_ShopRootComponent___c__DisplayClass95_0__PlayLvExceedItemReleaseEffect_b__3__,
      0LL);
    this->fields.__9__3 = _9__3;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.__9__3,
      (System_Int32_array **)_9__3,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  if ( !v5 )
LABEL_11:
    sub_B7076C(Instance, v4);
  CommonUI__maskFadein(v5, DEFAULT_FADE_TIME, _9__3, 0LL);
}


void __fastcall ShopRootComponent___c__DisplayClass95_0___PlayLvExceedItemReleaseEffect_b__3(
        ShopRootComponent___c__DisplayClass95_0_o *this,
        const MethodInfo *method)
{
  struct ShopBuyItemListViewItem_o *item; // x1

  item = this->fields.item;
  if ( !item || (this = (ShopRootComponent___c__DisplayClass95_0_o *)this->fields.__4__this) == 0LL )
    sub_B7076C(this, item);
  ShopRootComponent__ShowNormalItemDialog((ShopRootComponent_o *)this, item, item->fields._Shop_k__BackingField, 0LL);
}