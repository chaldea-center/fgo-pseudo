void __fastcall ShopRootComponent___ctor(ShopRootComponent_o *this, const MethodInfo *method)
{
  this->fields.saveScrollBarValue = -1.0;
  *(_QWORD *)&this->fields.buyCount = 0xFFFFFFFF00000001LL;
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopRootComponent__BackMenu(ShopRootComponent_o *this, int32_t state, const MethodInfo *method)
{
  int32_t v3; // w19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2
  System_Action_o *v13; // x20
  ShopRootComponent_o *v14; // x0
  const MethodInfo *v15; // x3

  v3 = state;
  if ( (byte_4AFE39F & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, *(_QWORD *)&state);
    sub_1BC3008(&Method_ShopRootComponent___c__DisplayClass83_0__BackMenu_b__0__, v5);
    sub_1BC3008(&ShopRootComponent___c__DisplayClass83_0_TypeInfo, v6);
    byte_4AFE39F = 1;
  }
  v7 = sub_1BC3254(ShopRootComponent___c__DisplayClass83_0_TypeInfo);
  ShopRootComponent___c__DisplayClass83_0___ctor((ShopRootComponent___c__DisplayClass83_0_o *)v7, 0LL);
  if ( !v7 )
    sub_1BC3264(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v7 + 16), (int32_t)this, v10, v11);
  *(_DWORD *)(v7 + 24) = v3;
  if ( v3 != 15 )
  {
    ShopRootComponent__PlayVoiceBack(this, v3, v12);
    v3 = *(_DWORD *)(v7 + 24);
  }
  v13 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)v7, Method_ShopRootComponent___c__DisplayClass83_0__BackMenu_b__0__, 0LL);
  ShopRootComponent__SetFadeOut(v14, v3, v13, v15);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ShopRootComponent__BackScene(ShopRootComponent_o *this, int32_t state, const MethodInfo *method)
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
  SceneJumpInfo_o *jumpInfo; // x0
  void *myFSM; // x0
  bool v19; // w19
  struct SceneJumpInfo_o *v20; // x8
  struct SceneJumpInfo_o *v21; // x8
  struct SceneJumpInfo_o *v22; // x8
  __int64 v23; // x1
  TerminalPramsManager_c *v24; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v25; // x20
  EventEntity_o *v26; // x21
  Il2CppObject *Instance; // x20
  System_String_o *v29; // x22
  Il2CppObject *EventName; // x0
  System_String_o *v31; // x21
  System_Action_o *v32; // x22

  if ( (byte_4AFE3C3 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, *(_QWORD *)&state);
    sub_1BC3008(&Method_DataManager_GetMasterData_EventMaster___, v5);
    sub_1BC3008(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v6);
    sub_1BC3008(&LocalizationManager_TypeInfo, v7);
    sub_1BC3008(&Method_ShopRootComponent_OnEndDialogEventCloseWarning__, v8);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1BC3008(&TerminalPramsManager_TypeInfo, v11);
    sub_1BC3008(&StringLiteral_6173/*"EventItem"*/, v12);
    sub_1BC3008(&StringLiteral_3402/*"CLICK_BACK"*/, v13);
    sub_1BC3008(&StringLiteral_12959/*"StoneFragments"*/, v14);
    sub_1BC3008(&StringLiteral_11990/*"SHOP_EVENT_RETURN_ERROR"*/, v15);
    sub_1BC3008(&StringLiteral_1/*""*/, v16);
    byte_4AFE3C3 = 1;
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
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myFSM, (System_String_o *)StringLiteral_3402/*"CLICK_BACK"*/, 0LL);
      return 1;
    case 4:
      v20 = this->fields.jumpInfo;
      if ( !v20 || !System_String__op_Equality(v20->fields.name, (System_String_o *)StringLiteral_12959/*"StoneFragments"*/, 0LL) )
        return 0;
      myFSM = this->fields.jumpInfo;
      if ( !myFSM )
        goto LABEL_47;
      if ( !SceneJumpInfo__ReturnScene((SceneJumpInfo_o *)myFSM, 0LL) )
        return 0;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v19 = 1;
      TerminalPramsManager__set_IsAutoOpenMasterMission(1, 0LL);
      return v19;
    case 7:
      v21 = this->fields.jumpInfo;
      if ( !v21 || !System_String__op_Equality(v21->fields.name, (System_String_o *)StringLiteral_6173/*"EventItem"*/, 0LL) )
        return 0;
      myFSM = this->fields.jumpInfo;
      if ( !myFSM )
        goto LABEL_47;
      return SceneJumpInfo__ReturnScene((SceneJumpInfo_o *)myFSM, 0LL);
    case 8:
      v22 = this->fields.jumpInfo;
      if ( !v22 )
        return 0;
      if ( !System_String__op_Equality(v22->fields.name, (System_String_o *)StringLiteral_6173/*"EventItem"*/, 0LL) )
        goto LABEL_35;
      myFSM = this->fields.jumpInfo;
      if ( !myFSM )
        goto LABEL_47;
      if ( !*((_DWORD *)myFSM + 6) || !SceneJumpInfo__ReturnScene((SceneJumpInfo_o *)myFSM, 0LL) )
      {
LABEL_35:
        myFSM = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( myFSM )
        {
          myFSM = DataManager__GetMasterData_object_(
                    (DataManager_o *)myFSM,
                    (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_EventMaster___);
          if ( this->fields.listViewHelper )
          {
            v25 = (DataMasterBase_TMaster__TEntity__PKType__o *)myFSM;
            myFSM = ShopSceneListViewControlHelper__GetShopEventListViewItem(
                      this->fields.listViewHelper,
                      this->fields.selectedEventIndex,
                      0LL);
            if ( myFSM )
            {
              if ( v25 )
              {
                myFSM = DataMasterBase_object__object__int___GetEntity(
                          v25,
                          *((_DWORD *)myFSM + 28),
                          (const MethodInfo_32AF070 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
                if ( myFSM )
                {
                  v26 = (EventEntity_o *)myFSM;
                  if ( EventEntity__IsOpen((EventEntity_o *)myFSM, 1, 0LL) )
                    return 0;
                  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  v29 = LocalizationManager__Get((System_String_o *)StringLiteral_11990/*"SHOP_EVENT_RETURN_ERROR"*/, 0LL);
                  EventName = (Il2CppObject *)EventEntity__getEventName(v26, 0LL);
                  v31 = System_String__Format(v29, EventName, 0LL);
                  v32 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
                  System_Action___ctor(
                    v32,
                    (Il2CppObject *)this,
                    Method_ShopRootComponent_OnEndDialogEventCloseWarning__,
                    0LL);
                  if ( Instance )
                  {
                    v19 = 1;
                    CommonUI__OpenNotificationDialog(
                      (CommonUI_o *)Instance,
                      (System_String_o *)StringLiteral_1/*""*/,
                      v31,
                      v32,
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
                    return v19;
                  }
                }
              }
            }
          }
        }
LABEL_47:
        sub_1BC3264(myFSM, *(_QWORD *)&state);
      }
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4AFC911 )
      {
        sub_1BC3008(&TerminalPramsManager_TypeInfo, v23);
        byte_4AFC911 = 1;
      }
      v24 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v24 = TerminalPramsManager_TypeInfo;
      }
      v19 = 1;
      v24->static_fields->_IsAutoResume_k__BackingField = 1;
      return v19;
    default:
      return 0;
  }
}


void __fastcall ShopRootComponent__CheckSellServantExceeded(ShopRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ShopRootComponent_o *v3; // x19
  __int64 v4; // x1
  const MethodInfo *v5; // x1
  ServantSellMenu_o *servantSellMenu; // x0
  ServantSellConfirmMenu_o *servantSellConfirmMenu; // x20
  System_Int64_array *selectedServantIds; // x21
  System_Int64_array *selectedCommandCodeIds; // x22
  System_Action_int__o *v10; // x23

  v3 = this;
  if ( (byte_4AFE3AA & 1) == 0 )
  {
    sub_1BC3008(&System_Action_int__TypeInfo, method);
    this = (ShopRootComponent_o *)sub_1BC3008(&Method_ShopRootComponent_SellServantExceededConfirm__, v4);
    byte_4AFE3AA = 1;
  }
  if ( v3->fields.inputState == 2 )
  {
    if ( !ShopRootComponent__GetIsContainExceededServant(this, v3->fields.selectedServantIds, v2) )
    {
LABEL_7:
      ShopRootComponent__SelectSellServantConfirm(v3, v5);
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
    v10 = (System_Action_int__o *)sub_1BC3254(System_Action_int__TypeInfo);
    System_Action_int____ctor(v10, (Il2CppObject *)v3, Method_ShopRootComponent_SellServantExceededConfirm__, 0LL);
    if ( !servantSellConfirmMenu )
LABEL_11:
      sub_1BC3264(servantSellMenu, v5);
    ServantSellConfirmMenu__Open(servantSellConfirmMenu, 2, selectedServantIds, selectedCommandCodeIds, v10, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ShopRootComponent__CheckServerLimitTime(
        ShopRootComponent_o *this,
        int32_t state,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4AFE3CF & 1) == 0 )
  {
    sub_1BC3008(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, *(_QWORD *)&state);
    byte_4AFE3CF = 1;
  }
  if ( (unsigned int)state > 0x16 || ((1 << state) & 0x75DDFC) == 0 )
    return 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance )
    sub_1BC3264(0LL, v5);
  return NetworkManager__CheckServerLimitTime((NetworkManager_o *)Instance, 0LL);
}


void __fastcall ShopRootComponent__CheckTutorial(ShopRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  NetworkManager_ResultCallbackFunc_o *v9; // x20
  Il2CppObject *Request_object; // x0
  __int64 v11; // x1

  if ( (byte_4AFE3C0 & 1) == 0 )
  {
    sub_1BC3008(&Method_NetworkManager_getRequest_TutorialSetRequest___, method);
    sub_1BC3008(&NetworkManager_TypeInfo, v3);
    sub_1BC3008(&NetworkManager_ResultCallbackFunc_TypeInfo, v4);
    sub_1BC3008(&Method_ShopRootComponent_QuitHelp__, v5);
    sub_1BC3008(&TutorialFlag_TypeInfo, v6);
    sub_1BC3008(&StringLiteral_22163/*"ok"*/, v7);
    byte_4AFE3C0 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_39466584(103, 0LL) )
  {
    ShopRootComponent__QuitHelp(this, (System_String_o *)StringLiteral_22163/*"ok"*/, v8);
  }
  else
  {
    v9 = (NetworkManager_ResultCallbackFunc_o *)sub_1BC3254(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(v9, (Il2CppObject *)this, Method_ShopRootComponent_QuitHelp__, 0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v9,
                       (const MethodInfo_3089B54 *)Method_NetworkManager_getRequest_TutorialSetRequest___);
    if ( !Request_object )
      sub_1BC3264(0LL, v11);
    TutorialSetRequest__beginRequest((TutorialSetRequest_o *)Request_object, 103, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopRootComponent__CloseDetaiCheckConfirm(
        ShopRootComponent_o *this,
        bool decide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  CommonUI_o *Instance; // x0
  __int64 v8; // x1
  ShopBuyItemListViewItem_o *ShopBuyItemListViewItem; // x21
  struct ShopEntity_o *Shop_k__BackingField; // x8
  ShopDetailEntity_o *ShopDetailEntity; // x0
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x1

  if ( (byte_4AFE3CA & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_ShopDetailMaster___, decide);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4AFE3CA = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseConfirmDialog(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.listViewHelper) == 0LL)
    || (ShopBuyItemListViewItem = ShopSceneListViewControlHelper__GetShopBuyItemListViewItem(
                                    (ShopSceneListViewControlHelper_o *)Instance,
                                    this->fields.selectedItemIndex,
                                    0LL),
        (Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (CommonUI_o *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ShopDetailMaster___),
        !ShopBuyItemListViewItem)
    || (Shop_k__BackingField = ShopBuyItemListViewItem->fields._Shop_k__BackingField) == 0LL
    || !Instance )
  {
    sub_1BC3264(Instance, v8);
  }
  ShopDetailEntity = ShopDetailMaster__getShopDetailEntity(
                       (ShopDetailMaster_o *)Instance,
                       Shop_k__BackingField->fields.id,
                       0LL);
  ShopRootComponent__SetFrequencyTypeCheckList((ShopRootComponent_o *)ShopDetailEntity, ShopDetailEntity, decide, v12);
  if ( decide )
    ShopRootComponent__RequestShop(this, v13);
  else
    ShopRootComponent__CloseItemConfirm(this, v13);
}


void __fastcall ShopRootComponent__CloseEventItemWindow(ShopRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *shopEventItemDrawBase; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  ShopRootConstants_c *v5; // x8
  UnityEngine_GameObject_o *v6; // x20

  if ( (byte_4AFE3CE & 1) == 0 )
  {
    sub_1BC3008(&ShopRootConstants_TypeInfo, method);
    byte_4AFE3CE = 1;
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
    sub_1BC3264(shopEventItemDrawBase, method);
  ShopCurrencyInfoController__StopUpdateRemainTime((ShopCurrencyInfoController_o *)shopEventItemDrawBase, method);
}


void __fastcall ShopRootComponent__CloseItemConfirm(ShopRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ShopBuyItemConfirmMenu_o *buyItemConfirmMenu; // x0
  const MethodInfo *v5; // x2
  int32_t state; // w8
  ShopBuyItemListViewItem_o *v7; // x20
  ShopEntity_o *itemInfoBase; // x21
  ShopMaster_o *v9; // x22
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x2

  if ( (byte_4AFE3A9 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_ShopMaster___, method);
    sub_1BC3008(&DataManager_TypeInfo, v3);
    byte_4AFE3A9 = 1;
  }
  if ( this->fields.inputState != 3 )
    return;
  buyItemConfirmMenu = this->fields.buyItemConfirmMenu;
  this->fields.inputState = 4;
  if ( !buyItemConfirmMenu )
    goto LABEL_59;
  if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)buyItemConfirmMenu, 0LL) )
  {
    buyItemConfirmMenu = this->fields.buyItemConfirmMenu;
    if ( !buyItemConfirmMenu )
      goto LABEL_59;
    ShopBuyItemConfirmMenu__Close(buyItemConfirmMenu, 0LL);
  }
  buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)this->fields.buyBulkItemConfirmMenu;
  if ( !buyItemConfirmMenu )
    goto LABEL_59;
  if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)buyItemConfirmMenu, 0LL) )
  {
    buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)this->fields.buyBulkItemConfirmMenu;
    if ( !buyItemConfirmMenu )
      goto LABEL_59;
    ShopBuyBulkItemConfirmMenu__Close((ShopBuyBulkItemConfirmMenu_o *)buyItemConfirmMenu, 0LL);
  }
  buyItemConfirmMenu = this->fields.ApSeedExchangeConfirmMenu;
  if ( !buyItemConfirmMenu )
    goto LABEL_59;
  if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)buyItemConfirmMenu, 0LL) )
  {
    buyItemConfirmMenu = this->fields.ApSeedExchangeConfirmMenu;
    if ( !buyItemConfirmMenu )
      goto LABEL_59;
    ShopBuyItemConfirmMenu__Close(buyItemConfirmMenu, 0LL);
  }
  buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)this->fields.ApSeedBulkExchangeConfirmMenu;
  if ( !buyItemConfirmMenu )
    goto LABEL_59;
  if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)buyItemConfirmMenu, 0LL) )
  {
    buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)this->fields.ApSeedBulkExchangeConfirmMenu;
    if ( !buyItemConfirmMenu )
      goto LABEL_59;
    ShopBuyBulkItemConfirmMenu__Close((ShopBuyBulkItemConfirmMenu_o *)buyItemConfirmMenu, 0LL);
  }
  buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)this->fields.buyStorageConfirmDialog;
  if ( !buyItemConfirmMenu )
    goto LABEL_59;
  if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)buyItemConfirmMenu, 0LL) )
  {
    buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)this->fields.buyStorageConfirmDialog;
    if ( !buyItemConfirmMenu )
      goto LABEL_59;
    BuyStorageConfirmDialogComponent__Close((BuyStorageConfirmDialogComponent_o *)buyItemConfirmMenu, 0LL);
  }
  buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)this->fields.buyStorageNotificationDialog;
  if ( !buyItemConfirmMenu )
    goto LABEL_59;
  if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)buyItemConfirmMenu, 0LL) )
  {
    buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)this->fields.buyStorageNotificationDialog;
    if ( !buyItemConfirmMenu )
      goto LABEL_59;
    BuyStorageConfirmDialogComponent__Close((BuyStorageConfirmDialogComponent_o *)buyItemConfirmMenu, 0LL);
  }
  buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)this->fields.shopResetConfirmDialog;
  if ( !buyItemConfirmMenu )
    goto LABEL_59;
  if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)buyItemConfirmMenu, 0LL) )
  {
    buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)this->fields.shopResetConfirmDialog;
    if ( !buyItemConfirmMenu )
      goto LABEL_59;
    ShopResetConfirmDialogComponent__Close_34361760((ShopResetConfirmDialogComponent_o *)buyItemConfirmMenu, 0LL, v5);
  }
  buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)this->fields.purchaseShopCheckWarningDialog;
  if ( !buyItemConfirmMenu )
LABEL_59:
    sub_1BC3264(buyItemConfirmMenu, method);
  if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)buyItemConfirmMenu, 0LL) )
  {
    buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)this->fields.purchaseShopCheckWarningDialog;
    if ( !buyItemConfirmMenu )
      goto LABEL_59;
    PurchaseShopCheckWarningDialog__Close((PurchaseShopCheckWarningDialog_o *)buyItemConfirmMenu, 0LL);
  }
  state = this->fields.state;
  if ( state == 16 || state == 8 )
  {
    buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)this->fields.listViewHelper;
    if ( !buyItemConfirmMenu )
      goto LABEL_59;
    buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)ShopSceneListViewControlHelper__GetShopBuyItemListViewItem(
                                                       (ShopSceneListViewControlHelper_o *)buyItemConfirmMenu,
                                                       this->fields.selectedItemIndex,
                                                       0LL);
    if ( !buyItemConfirmMenu )
      goto LABEL_59;
    v7 = (ShopBuyItemListViewItem_o *)buyItemConfirmMenu;
    itemInfoBase = (ShopEntity_o *)buyItemConfirmMenu->fields.itemInfoBase;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ShopMaster___);
    if ( this->fields.buyCount >= 1 )
    {
      v9 = (ShopMaster_o *)buyItemConfirmMenu;
      if ( !buyItemConfirmMenu )
        goto LABEL_59;
      if ( ShopMaster__IsOpenPurchaseCloseShop((ShopMaster_o *)buyItemConfirmMenu, itemInfoBase, 0LL)
        && ShopRootComponent__BackScene(this, this->fields.state, v10) )
      {
        return;
      }
      if ( this->fields.buyCount >= 1 && ShopMaster__IsOpenPurchaseCloseShop(v9, itemInfoBase, 0LL) )
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
            goto LABEL_58;
          }
          buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)this->fields.topListViewManager;
          if ( buyItemConfirmMenu )
          {
            ShopTopListViewManager__CreateList((ShopTopListViewManager_o *)buyItemConfirmMenu, 0, -1.0, 0LL);
            LODWORD(method) = this->fields.state;
LABEL_58:
            ShopRootComponent__BackMenu(this, (int32_t)method, v11);
            return;
          }
        }
        goto LABEL_59;
      }
    }
    ShopBuyItemListViewItem__Modify(v7, itemInfoBase, 0LL);
  }
  buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)this->fields.listViewHelper;
  if ( !buyItemConfirmMenu )
    goto LABEL_59;
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
    sub_1BC3264(servantSellConfirmMenu, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopRootComponent__CloseShopResetDialog(
        ShopRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x20
  ShopSceneListViewControlHelper_o *shopResetConfirmDialog; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x2
  ShopBuyItemListViewItem_o *ShopBuyItemListViewItem; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  NetworkManager_ResultCallbackFunc_o *v20; // x21
  Il2CppObject *Request_object; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  struct ShopResetConfirmDialogComponent_o *v24; // x19
  System_Action_o *v25; // x21
  System_Action_o *v26; // x1

  if ( (byte_4AFE3D7 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, isDecide);
    sub_1BC3008(&Method_NetworkManager_getRequest_ShopResetPurchaseNumRequest___, v5);
    sub_1BC3008(&NetworkManager_TypeInfo, v6);
    sub_1BC3008(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    sub_1BC3008(&Method_ShopRootComponent___c__DisplayClass160_0__CloseShopResetDialog_b__0__, v8);
    sub_1BC3008(&Method_ShopRootComponent___c__DisplayClass160_0__CloseShopResetDialog_b__1__, v9);
    sub_1BC3008(&ShopRootComponent___c__DisplayClass160_0_TypeInfo, v10);
    byte_4AFE3D7 = 1;
  }
  v11 = sub_1BC3254(ShopRootComponent___c__DisplayClass160_0_TypeInfo);
  ShopRootComponent___c__DisplayClass160_0___ctor((ShopRootComponent___c__DisplayClass160_0_o *)v11, 0LL);
  if ( !v11 )
    goto LABEL_13;
  *(_QWORD *)(v11 + 16) = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v11 + 16), (int32_t)this, v14, v15);
  if ( !isDecide )
  {
    shopResetConfirmDialog = (ShopSceneListViewControlHelper_o *)this->fields.shopResetConfirmDialog;
    if ( shopResetConfirmDialog )
    {
      v26 = 0LL;
      goto LABEL_12;
    }
LABEL_13:
    sub_1BC3264(shopResetConfirmDialog, v13);
  }
  shopResetConfirmDialog = this->fields.listViewHelper;
  if ( !shopResetConfirmDialog )
    goto LABEL_13;
  ShopBuyItemListViewItem = ShopSceneListViewControlHelper__GetShopBuyItemListViewItem(
                              shopResetConfirmDialog,
                              this->fields.selectedItemIndex,
                              0LL);
  *(_QWORD *)(v11 + 24) = ShopBuyItemListViewItem;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v11 + 24), (int32_t)ShopBuyItemListViewItem, v18, v19);
  v20 = (NetworkManager_ResultCallbackFunc_o *)sub_1BC3254(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v20,
    (Il2CppObject *)v11,
    Method_ShopRootComponent___c__DisplayClass160_0__CloseShopResetDialog_b__0__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v20,
                     (const MethodInfo_3089B54 *)Method_NetworkManager_getRequest_ShopResetPurchaseNumRequest___);
  *(_QWORD *)(v11 + 32) = Request_object;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v11 + 32), (int32_t)Request_object, v22, v23);
  v24 = this->fields.shopResetConfirmDialog;
  v25 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(
    v25,
    (Il2CppObject *)v11,
    Method_ShopRootComponent___c__DisplayClass160_0__CloseShopResetDialog_b__1__,
    0LL);
  if ( !v24 )
    goto LABEL_13;
  shopResetConfirmDialog = (ShopSceneListViewControlHelper_o *)v24;
  v26 = v25;
LABEL_12:
  ShopResetConfirmDialogComponent__Close_34361760((ShopResetConfirmDialogComponent_o *)shopResetConfirmDialog, v26, v16);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopRootComponent__CloseStonePurchaseMenu(
        ShopRootComponent_o *this,
        int32_t result,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  ShopPlayVoiceComponent_o *shopPlayVoiceComponent; // x0
  const MethodInfo *v8; // x2

  if ( (byte_4AFE3D2 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_12040/*"SHOP_SCENE_VOICE_CANCEL"*/, *(_QWORD *)&result);
    sub_1BC3008(&StringLiteral_12039/*"SHOP_SCENE_VOICE_BACK2"*/, v6);
    byte_4AFE3D2 = 1;
  }
  if ( result )
    goto LABEL_6;
  shopPlayVoiceComponent = this->fields.shopPlayVoiceComponent;
  if ( !shopPlayVoiceComponent )
    goto LABEL_9;
  if ( !ShopPlayVoiceComponent__PlayVoiceOnce(
          shopPlayVoiceComponent,
          (System_String_o *)StringLiteral_12040/*"SHOP_SCENE_VOICE_CANCEL"*/,
          0x2000,
          v3) )
  {
LABEL_6:
    shopPlayVoiceComponent = this->fields.shopPlayVoiceComponent;
    if ( shopPlayVoiceComponent )
    {
      ShopPlayVoiceComponent__PlayVoiceOnce(shopPlayVoiceComponent, (System_String_o *)StringLiteral_12039/*"SHOP_SCENE_VOICE_BACK2"*/, 4096, v3);
      goto LABEL_8;
    }
LABEL_9:
    sub_1BC3264(shopPlayVoiceComponent, *(_QWORD *)&result);
  }
LABEL_8:
  ShopRootComponent__MenuBackFromStonePurchase(this, result, v8);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopRootComponent__CloseStorageDetailCheckConfirm(
        ShopRootComponent_o *this,
        int32_t buyCount,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  BuyStorageConfirmDialogComponent_o *buyStorageConfirmDialog; // x20
  System_Action_o *v9; // x21
  ShopSceneListViewControlHelper_o *listViewHelper; // x0
  ShopBuyItemListViewItem_o *v11; // x20
  ShopRootComponent_o *v12; // x0
  const MethodInfo *v13; // x2
  ShopBuyBulkItemConfirmMenu_o *buyBulkItemConfirmMenu; // x20
  System_Action_int__o *v15; // x21

  if ( (byte_4AFE3CB & 1) == 0 )
  {
    sub_1BC3008(&System_Action_int__TypeInfo, *(_QWORD *)&buyCount);
    sub_1BC3008(&System_Action_TypeInfo, v5);
    sub_1BC3008(&Method_ShopRootComponent_RequestShop__, v6);
    sub_1BC3008(&Method_ShopRootComponent_SelectedBuyItemConfirm__, v7);
    byte_4AFE3CB = 1;
  }
  this->fields.buyCount = buyCount;
  if ( buyCount )
  {
    buyStorageConfirmDialog = this->fields.buyStorageConfirmDialog;
    v9 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
    System_Action___ctor(v9, (Il2CppObject *)this, Method_ShopRootComponent_RequestShop__, 0LL);
    if ( buyStorageConfirmDialog )
    {
      BuyStorageConfirmDialogComponent__Close_34101896(buyStorageConfirmDialog, v9, 0LL);
      return;
    }
LABEL_13:
    sub_1BC3264(listViewHelper, *(_QWORD *)&buyCount);
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
  v11 = (ShopBuyItemListViewItem_o *)listViewHelper;
  BuyStorageConfirmDialogComponent__Close(this->fields.buyStorageConfirmDialog, 0LL);
  if ( ShopRootComponent__GetIsBulk(v12, v11, v13) )
  {
    buyBulkItemConfirmMenu = this->fields.buyBulkItemConfirmMenu;
    v15 = (System_Action_int__o *)sub_1BC3254(System_Action_int__TypeInfo);
    System_Action_int____ctor(v15, (Il2CppObject *)this, Method_ShopRootComponent_SelectedBuyItemConfirm__, 0LL);
    if ( !buyBulkItemConfirmMenu )
      goto LABEL_13;
    ShopBuyBulkItemConfirmMenu__Modify(buyBulkItemConfirmMenu, v15, 0LL);
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
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_Dictionary_int__int__o *v7; // x19
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  void *Instance; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  int v13; // w8
  void *v14; // x19
  unsigned int v15; // w21
  __int64 v16; // x8

  if ( (byte_4AFE3D4 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_ShopDetailMaster___, method);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v2);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__, v3);
    sub_1BC3008(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v4);
    sub_1BC3008(&ShopRootComponent_TypeInfo, v5);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4AFE3D4 = 1;
  }
  if ( !ShopRootComponent_TypeInfo->static_fields->isInitialized )
  {
    v7 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1BC3254(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v7,
      (const MethodInfo_32FF0D8 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    ShopRootComponent_TypeInfo->static_fields->shopDetailCheckList = v7;
    sub_1BC2FAC((CGThumbnailListItem_o *)ShopRootComponent_TypeInfo->static_fields, (int32_t)v7, v8, v9);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_15;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ShopDetailMaster___);
    if ( !Instance )
      goto LABEL_15;
    Instance = ShopDetailMaster__getShopDetailEntityList((ShopDetailMaster_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_15;
    v13 = *((_DWORD *)Instance + 6);
    v14 = Instance;
    if ( v13 >= 1 )
    {
      v15 = 0;
      while ( 1 )
      {
        if ( v15 >= v13 )
          sub_1BC326C(Instance, v11, v12);
        v16 = *((_QWORD *)v14 + (int)v15 + 4);
        if ( !v16 )
          break;
        Instance = ShopRootComponent_TypeInfo->static_fields->shopDetailCheckList;
        if ( !Instance )
          break;
        System_Collections_Generic_Dictionary_int__int___set_Item(
          (System_Collections_Generic_Dictionary_int__int__o *)Instance,
          *(_DWORD *)(v16 + 16),
          0,
          (const MethodInfo_32FFA88 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
        v13 = *((_DWORD *)v14 + 6);
        if ( (int)++v15 >= v13 )
          goto LABEL_13;
      }
LABEL_15:
      sub_1BC3264(Instance, v11);
    }
LABEL_13:
    ShopRootComponent_TypeInfo->static_fields->isInitialized = 1;
  }
}


void __fastcall ShopRootComponent__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1

  if ( (byte_4AFE395 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_12840/*"SpecialItemHelp"*/, v1);
    sub_1BC3008(&StringLiteral_12721/*"Shop15Help"*/, v2);
    sub_1BC3008(&StringLiteral_2262/*"AnonymousHelp"*/, v3);
    sub_1BC3008(&StringLiteral_11069/*"RarePriHelp"*/, v4);
    byte_4AFE395 = 1;
  }
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_2262/*"AnonymousHelp"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11069/*"RarePriHelp"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_12840/*"SpecialItemHelp"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_12721/*"Shop15Help"*/, 0LL);
}


void __fastcall ShopRootComponent__DeleteJumpInfoOnInit(
        ShopRootComponent_o *this,
        int32_t state,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( state == 9 )
  {
    this->fields.jumpInfo = 0LL;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.jumpInfo, 0, (int32_t)method, v3);
  }
}


void __fastcall ShopRootComponent__EndLimitCountSealInfoDialog(ShopRootComponent_o *this, const MethodInfo *method)
{
  SummonInfoDlgComponent_o *limitCountSealInfoDlg; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  ShopBuyItemListViewItem_o *ShopBuyItemListViewItem; // x0
  const MethodInfo *v7; // x4

  if ( (byte_4AFE3A6 & 1) == 0 )
  {
    sub_1BC3008(&Method_ShopRootComponent_EndLimitCountSealInfoDialog__, method);
    byte_4AFE3A6 = 1;
  }
  limitCountSealInfoDlg = this->fields.limitCountSealInfoDlg;
  if ( !limitCountSealInfoDlg )
    goto LABEL_8;
  SummonInfoDlgComponent__Close(limitCountSealInfoDlg, 0LL, 0LL);
  v4 = Method_ShopRootComponent_EndLimitCountSealInfoDialog__;
  if ( (*((_BYTE *)Method_ShopRootComponent_EndLimitCountSealInfoDialog__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BC3020(Method_ShopRootComponent_EndLimitCountSealInfoDialog__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0LL);
  limitCountSealInfoDlg = (SummonInfoDlgComponent_o *)this->fields.listViewHelper;
  if ( !limitCountSealInfoDlg )
LABEL_8:
    sub_1BC3264(limitCountSealInfoDlg, method);
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
  __int64 v5; // x1
  __int64 v6; // x1
  ServantSellMenu_o *servantSellMenu; // x0
  struct ServantSellMenu_o *v8; // x8
  int32_t tabKind; // w21
  bool v10; // w0
  int32_t ServantSellConfirmKindOnRequestEnd; // w0
  ServantSellConfirmMenu_o *servantSellConfirmMenu; // x22
  System_Int64_array *selectedServantIds; // x20
  System_Int64_array *selectedCommandCodeIds; // x21
  int32_t v15; // w23
  System_Action_int__o *v16; // x24
  const MethodInfo *v17; // x1

  if ( (byte_4AFE3BA & 1) == 0 )
  {
    sub_1BC3008(&System_Action_int__TypeInfo, result);
    sub_1BC3008(&Method_ShopRootComponent_EndSellResultServant__, v5);
    sub_1BC3008(&StringLiteral_21997/*"ng"*/, v6);
    byte_4AFE3BA = 1;
  }
  servantSellMenu = this->fields.servantSellMenu;
  if ( !servantSellMenu )
    goto LABEL_8;
  ServantSellMenu__Init(servantSellMenu, 0LL);
  servantSellMenu = (ServantSellMenu_o *)this->fields.servantSellConfirmMenu;
  if ( !servantSellMenu )
    goto LABEL_8;
  ServantSellConfirmMenu__Init((ServantSellConfirmMenu_o *)servantSellMenu, 0LL);
  v8 = this->fields.servantSellMenu;
  if ( !v8 )
    goto LABEL_8;
  tabKind = v8->fields.tabKind;
  v10 = System_String__op_Equality(result, (System_String_o *)StringLiteral_21997/*"ng"*/, 0LL);
  ServantSellConfirmKindOnRequestEnd = ServantSellConfirmMenu__GetServantSellConfirmKindOnRequestEnd(tabKind, v10, 0LL);
  servantSellConfirmMenu = this->fields.servantSellConfirmMenu;
  selectedServantIds = this->fields.selectedServantIds;
  selectedCommandCodeIds = this->fields.selectedCommandCodeIds;
  v15 = ServantSellConfirmKindOnRequestEnd;
  v16 = (System_Action_int__o *)sub_1BC3254(System_Action_int__TypeInfo);
  System_Action_int____ctor(v16, (Il2CppObject *)this, Method_ShopRootComponent_EndSellResultServant__, 0LL);
  if ( !servantSellConfirmMenu )
LABEL_8:
    sub_1BC3264(servantSellMenu, result);
  ServantSellConfirmMenu__Open(servantSellConfirmMenu, v15, selectedServantIds, selectedCommandCodeIds, v16, 0LL);
  ShopRootComponent__RefreshInfo(this, v17);
}


void __fastcall ShopRootComponent__EndRequestShop(
        ShopRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  const MethodInfo *v12; // x1
  void *listViewHelper; // x0
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x3
  int32_t state; // w8
  __int64 v17; // x20
  Il2CppObject *Instance; // x21
  System_String_o *v19; // x22
  System_String_o *v20; // x23
  NotificationDialog_ClickDelegate_o *v21; // x24
  int32_t TargetId; // w0
  const MethodInfo *v23; // x1
  System_Nullable_float__o v24; // [xsp+68h] [xbp-38h] BYREF
  System_Nullable_float__o v25; // 0:x0.8

  if ( (byte_4AFE3AF & 1) == 0 )
  {
    sub_1BC3008(&NotificationDialog_ClickDelegate_TypeInfo, result);
    sub_1BC3008(&LocalizationManager_TypeInfo, v5);
    sub_1BC3008(&Method_System_Nullable_float___ctor__, v6);
    sub_1BC3008(&Method_ShopRootComponent__EndRequestShop_b__101_0__, v7);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1BC3008(&StringLiteral_21997/*"ng"*/, v9);
    sub_1BC3008(&StringLiteral_10406/*"PURCHASE_SHOP18_CHECK_RESULT_DIALOG_MSG"*/, v10);
    sub_1BC3008(&StringLiteral_10407/*"PURCHASE_SHOP18_CHECK_RESULT_DIALOG_TITLE"*/, v11);
    byte_4AFE3AF = 1;
  }
  v24 = 0LL;
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_21997/*"ng"*/, 0LL) )
  {
    ShopRootComponent__RequestEnd(this, v12);
    return;
  }
  listViewHelper = this->fields.listViewHelper;
  if ( !listViewHelper )
    goto LABEL_22;
  listViewHelper = ShopSceneListViewControlHelper__GetShopBuyItemListViewItem(
                     (ShopSceneListViewControlHelper_o *)listViewHelper,
                     this->fields.selectedItemIndex,
                     0LL);
  if ( !listViewHelper )
    goto LABEL_22;
  state = this->fields.state;
  v12 = (const MethodInfo *)listViewHelper;
  if ( (unsigned int)(state - 11) < 2 )
  {
    ShopRootComponent__ShowStorageDialog(this, (ShopBuyItemListViewItem_o *)listViewHelper, v14);
    goto LABEL_21;
  }
  if ( state == 14 )
  {
    ShopRootComponent__PlayLvExceedItemReleaseEffect(this, (ShopBuyItemListViewItem_o *)listViewHelper, v14);
    goto LABEL_21;
  }
  v17 = *((_QWORD *)listViewHelper + 14);
  if ( state != 22 )
  {
    if ( v17 )
    {
      if ( *(_DWORD *)(v17 + 48) == 5 )
        ShopRootComponent__ShowSetItemDialog(this, *((ShopEntity_o **)listViewHelper + 14), v14);
      else
        ShopRootComponent__ShowNormalItemDialog(
          this,
          (ShopBuyItemListViewItem_o *)listViewHelper,
          *((ShopEntity_o **)listViewHelper + 14),
          v15);
      goto LABEL_21;
    }
LABEL_22:
    sub_1BC3264(listViewHelper, v12);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_10407/*"PURCHASE_SHOP18_CHECK_RESULT_DIALOG_TITLE"*/, 0LL);
  listViewHelper = LocalizationManager__Get((System_String_o *)StringLiteral_10406/*"PURCHASE_SHOP18_CHECK_RESULT_DIALOG_MSG"*/, 0LL);
  if ( !v17 )
    goto LABEL_22;
  v20 = System_String__Format((System_String_o *)listViewHelper, *(Il2CppObject **)(v17 + 104), 0LL);
  v21 = (NotificationDialog_ClickDelegate_o *)sub_1BC3254(NotificationDialog_ClickDelegate_TypeInfo);
  NotificationDialog_ClickDelegate___ctor(
    v21,
    (Il2CppObject *)this,
    Method_ShopRootComponent__EndRequestShop_b__101_0__,
    0LL);
  v25 = (System_Nullable_float__o)&v24;
  System_Nullable_float____ctor(v25, 13.0, (const MethodInfo_37C22BC *)Method_System_Nullable_float___ctor__);
  if ( !Instance )
    goto LABEL_22;
  CommonUI__OpenNotificationDialog_30733364(
    (CommonUI_o *)Instance,
    v19,
    v20,
    v21,
    -1,
    0,
    0,
    0,
    0,
    0,
    0LL,
    v24,
    25,
    0,
    0LL,
    1,
    0LL,
    0LL,
    0LL,
    0LL);
  TargetId = ShopEntity__get_TargetId((ShopEntity_o *)v17, 0LL);
  ClassBoardSave__DeleteOpenedMissionClearDialogByBaseId(TargetId, 0LL);
LABEL_21:
  ShopRootComponent__RefreshInfo(this, v23);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_Dictionary_int__int__o *__fastcall ShopRootComponent__GetClassBoardReleaseItemList(
        ShopRootComponent_o *this,
        int32_t baseId,
        const MethodInfo *method)
{
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
  __int64 v25; // x1
  ShopRootComponent___c__DisplayClass88_0_o *v26; // x20
  Il2CppObject *Master_object; // x0
  __int64 v28; // x1
  System_Collections_Generic_Dictionary_int__int__o *v29; // x19
  System_Collections_Generic_IEnumerable_TSource__o *monitor; // x22
  Il2CppObject *v31; // x21
  System_Func_object__bool__o *v32; // x23
  Il2CppObject *v33; // x0
  Il2CppObject *v34; // x23
  System_Collections_Generic_List_int__o *v35; // x22
  _BOOL8 v36; // x0
  __int64 v37; // x1
  ClassBoardSquareEntity_o *Entity; // x0
  ClassBoardSquareEntity_o *v39; // x22
  _BOOL8 HasLockId; // x0
  __int64 v41; // x1
  __int64 v42; // x2
  Il2CppObject *v43; // x0
  __int64 v44; // x1
  Il2CppObject *v45; // x0
  __int64 v46; // x1
  __int64 v47; // x2
  Il2CppObject *v48; // x22
  _QWORD *v49; // x8
  Il2CppClass *klass; // x10
  __int64 v51; // x9
  __int64 v52; // x24
  unsigned __int64 v53; // x26
  int32_t v54; // w23
  _BOOL8 v55; // x0
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 Item; // x0
  __int64 v59; // x1
  __int64 v60; // x2
  Il2CppClass *v61; // x8
  Il2CppClass *v62; // x8
  __int64 v63; // x10
  struct System_Int32_array *itemIds; // x8
  struct System_Int32_array *itemNums; // x10
  __int64 v66; // x9
  __int64 v67; // x24
  unsigned __int64 v68; // x26
  int32_t v69; // w23
  _BOOL8 v70; // x0
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x0
  __int64 v74; // x1
  __int64 v75; // x2
  struct System_Int32_array *v76; // x8
  struct System_Int32_array *v77; // x8
  __int64 v78; // x10
  System_Collections_Generic_List_Enumerator_int__o v80; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v81; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4AFE3A4 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_ClassBoardLockMaster___, *(_QWORD *)&baseId);
    sub_1BC3008(&Method_DataManager_GetMaster_ClassBoardSquareMaster___, v4);
    sub_1BC3008(&Method_DataManager_GetMaster_UserClassBoardSquareMaster___, v5);
    sub_1BC3008(&DataManager_TypeInfo, v6);
    sub_1BC3008(&Method_DataMasterBase_ClassBoardLockMaster__ClassBoardLockEntity__int__GetEntity__, v7);
    sub_1BC3008(
      &Method_DataMasterBase_UserClassBoardSquareMaster__UserClassBoardSquareEntity__string__getEntityList__,
      v8);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, v10);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v11);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v12);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__, v13);
    sub_1BC3008(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v14);
    sub_1BC3008(&Method_System_Linq_Enumerable_FirstOrDefault_UserClassBoardSquareEntity___, v15);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v16);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v17);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v18);
    sub_1BC3008(&System_Func_UserClassBoardSquareEntity__bool__TypeInfo, v19);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__AddRange__, v20);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__GetEnumerator__, v21);
    sub_1BC3008(&Method_System_Collections_Generic_List_int___ctor__, v22);
    sub_1BC3008(&System_Collections_Generic_List_int__TypeInfo, v23);
    sub_1BC3008(&Method_ShopRootComponent___c__DisplayClass88_0__GetClassBoardReleaseItemList_b__0__, v24);
    sub_1BC3008(&ShopRootComponent___c__DisplayClass88_0_TypeInfo, v25);
    byte_4AFE3A4 = 1;
  }
  memset(&v81, 0, sizeof(v81));
  v26 = (ShopRootComponent___c__DisplayClass88_0_o *)sub_1BC3254(ShopRootComponent___c__DisplayClass88_0_TypeInfo);
  ShopRootComponent___c__DisplayClass88_0___ctor(v26, 0LL);
  if ( !v26 )
    goto LABEL_76;
  v26->fields.baseId = baseId;
  v29 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1BC3254(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v29,
    (const MethodInfo_32FF0D8 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_UserClassBoardSquareMaster___);
  if ( !Master_object )
    goto LABEL_76;
  monitor = (System_Collections_Generic_IEnumerable_TSource__o *)Master_object[2].monitor;
  if ( monitor && v26->fields.baseId )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v31 = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
    DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ClassBoardLockMaster___);
    v32 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_UserClassBoardSquareEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v32,
      (Il2CppObject *)v26,
      Method_ShopRootComponent___c__DisplayClass88_0__GetClassBoardReleaseItemList_b__0__,
      0LL);
    v33 = System_Linq_Enumerable__FirstOrDefault_object__50493748(
            monitor,
            (System_Func_TSource__bool__o *)v32,
            (const MethodInfo_3027934 *)Method_System_Linq_Enumerable_FirstOrDefault_UserClassBoardSquareEntity___);
    if ( v33 )
    {
      v34 = v33;
      v35 = (System_Collections_Generic_List_int__o *)sub_1BC3254(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v35,
        (const MethodInfo_36835C8 *)Method_System_Collections_Generic_List_int___ctor__);
      if ( v35 )
      {
        System_Collections_Generic_List_int___AddRange(
          v35,
          (System_Collections_Generic_IEnumerable_T__o *)v34[2].klass,
          (const MethodInfo_3684028 *)Method_System_Collections_Generic_List_int__AddRange__);
        System_Collections_Generic_List_int___AddRange(
          v35,
          (System_Collections_Generic_IEnumerable_T__o *)v34[2].monitor,
          (const MethodInfo_3684028 *)Method_System_Collections_Generic_List_int__AddRange__);
        System_Collections_Generic_List_int___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v80,
          v35,
          (const MethodInfo_36848F0 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
        v81 = v80;
        while ( 1 )
        {
          v36 = System_Collections_Generic_List_Enumerator_int___MoveNext(
                  &v81,
                  (const MethodInfo_3432974 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
          if ( !v36 )
            break;
          if ( !v31 )
            sub_1BC3264(v36, v37);
          Entity = ClassBoardSquareMaster__GetEntity(
                     (ClassBoardSquareMaster_o *)v31,
                     v26->fields.baseId,
                     v81.fields._current,
                     0LL);
          v39 = Entity;
          if ( Entity )
          {
            HasLockId = ClassBoardSquareEntity__get_HasLockId(Entity, 0LL);
            if ( HasLockId )
            {
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              v43 = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ClassBoardLockMaster___);
              if ( !v43 )
                sub_1BC3264(0LL, v44);
              v45 = DataMasterBase_object__object__int___GetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)v43,
                      v39->fields.lockId,
                      (const MethodInfo_32AF070 *)Method_DataMasterBase_ClassBoardLockMaster__ClassBoardLockEntity__int__GetEntity__);
              v48 = v45;
              if ( v45 )
              {
                v49 = v45[1].monitor;
                if ( !v49 )
                  sub_1BC3264(v45, v46);
                klass = v45[2].klass;
                if ( !klass )
                  sub_1BC3264(v45, v46);
                v51 = v49[3];
                if ( (_DWORD)v51 == LODWORD(klass->_1.namespaze) && (int)v51 >= 1 )
                {
                  v52 = 8LL;
                  do
                  {
                    v53 = v52 - 8;
                    if ( v52 - 8 >= (unsigned __int64)(unsigned int)v51 )
                      sub_1BC326C(v45, v46, v47);
                    if ( !v29 )
                      sub_1BC3264(v45, v46);
                    v54 = *((_DWORD *)v49 + v52);
                    v55 = System_Collections_Generic_Dictionary_int__int___ContainsKey(
                            v29,
                            v54,
                            (const MethodInfo_32FFC88 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
                    if ( v55 )
                    {
                      Item = System_Collections_Generic_Dictionary_int__int___get_Item(
                               v29,
                               v54,
                               (const MethodInfo_32FFA00 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
                      v61 = v48[2].klass;
                      if ( !v61 )
                        sub_1BC3264(Item, v59);
                      if ( v53 >= LODWORD(v61->_1.namespaze) )
                        sub_1BC326C(Item, v59, v60);
                      System_Collections_Generic_Dictionary_int__int___set_Item(
                        v29,
                        v54,
                        *((_DWORD *)&v61->_1.image + v52) + Item,
                        (const MethodInfo_32FFA88 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
                    }
                    else
                    {
                      v62 = v48[2].klass;
                      if ( !v62 )
                        sub_1BC3264(v55, v56);
                      if ( v53 >= LODWORD(v62->_1.namespaze) )
                        sub_1BC326C(v55, v56, v57);
                      System_Collections_Generic_Dictionary_int__int___Add(
                        v29,
                        v54,
                        *((_DWORD *)&v62->_1.image + v52),
                        (const MethodInfo_32FFA9C *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
                    }
                    v49 = v48[1].monitor;
                    if ( !v49 )
                      sub_1BC3264(v45, v46);
                    LODWORD(v51) = *((_DWORD *)v49 + 6);
                    v63 = v52 - 7;
                    ++v52;
                  }
                  while ( v63 < (int)v51 );
                }
              }
            }
            else
            {
              itemIds = v39->fields.itemIds;
              if ( !itemIds )
                sub_1BC3264(HasLockId, v41);
              itemNums = v39->fields.itemNums;
              if ( !itemNums )
                sub_1BC3264(HasLockId, v41);
              v66 = *(_QWORD *)&itemIds->max_length;
              if ( (_DWORD)v66 == itemNums->max_length && (int)v66 >= 1 )
              {
                v67 = 8LL;
                do
                {
                  v68 = v67 - 8;
                  if ( v67 - 8 >= (unsigned __int64)(unsigned int)v66 )
                    sub_1BC326C(HasLockId, v41, v42);
                  if ( !v29 )
                    sub_1BC3264(HasLockId, v41);
                  v69 = *((_DWORD *)&itemIds->obj.klass + v67);
                  v70 = System_Collections_Generic_Dictionary_int__int___ContainsKey(
                          v29,
                          v69,
                          (const MethodInfo_32FFC88 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
                  if ( v70 )
                  {
                    v73 = System_Collections_Generic_Dictionary_int__int___get_Item(
                            v29,
                            v69,
                            (const MethodInfo_32FFA00 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
                    v76 = v39->fields.itemNums;
                    if ( !v76 )
                      sub_1BC3264(v73, v74);
                    if ( v68 >= v76->max_length )
                      sub_1BC326C(v73, v74, v75);
                    System_Collections_Generic_Dictionary_int__int___set_Item(
                      v29,
                      v69,
                      *((_DWORD *)&v76->obj.klass + v67) + v73,
                      (const MethodInfo_32FFA88 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
                  }
                  else
                  {
                    v77 = v39->fields.itemNums;
                    if ( !v77 )
                      sub_1BC3264(v70, v71);
                    if ( v68 >= v77->max_length )
                      sub_1BC326C(v70, v71, v72);
                    System_Collections_Generic_Dictionary_int__int___Add(
                      v29,
                      v69,
                      *((_DWORD *)&v77->obj.klass + v67),
                      (const MethodInfo_32FFA9C *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
                  }
                  itemIds = v39->fields.itemIds;
                  if ( !itemIds )
                    sub_1BC3264(HasLockId, v41);
                  LODWORD(v66) = itemIds->max_length;
                  v78 = v67 - 7;
                  ++v67;
                }
                while ( v78 < (int)v66 );
              }
            }
          }
        }
        System_Collections_Generic_List_Enumerator_int___Dispose(
          &v81,
          (const MethodInfo_3432970 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
        return v29;
      }
LABEL_76:
      sub_1BC3264(Master_object, v28);
    }
  }
  return v29;
}


int64_t __fastcall ShopRootComponent__GetCurrency(
        ShopRootComponent_o *this,
        ShopEntity_o *shopEntity,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  int64_t result; // x0
  __int64 v7; // x1
  Il2CppObject *Master_object; // x20
  NetworkManager_c *v9; // x0
  int64_t userIdNumber; // x21

  if ( (byte_4AFE3C6 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_UserItemMaster___, shopEntity);
    sub_1BC3008(&DataManager_TypeInfo, v4);
    this = (ShopRootComponent_o *)sub_1BC3008(&NetworkManager_TypeInfo, v5);
    byte_4AFE3C6 = 1;
  }
  if ( !shopEntity )
LABEL_24:
    sub_1BC3264(this, shopEntity);
  result = 0LL;
  switch ( shopEntity->fields.payType )
  {
    case 1:
      this = (ShopRootComponent_o *)UserGameMaster__getSelfUserGame(0LL);
      if ( !this )
        goto LABEL_24;
      result = SLODWORD(this->fields.servantSellMenu);
      break;
    case 2:
      this = (ShopRootComponent_o *)UserGameMaster__getSelfUserGame(0LL);
      if ( !this )
        goto LABEL_24;
      result = (int64_t)this->fields.topListViewManager;
      break;
    case 4:
      this = (ShopRootComponent_o *)UserGameMaster__getSelfUserGame(0LL);
      if ( !this )
        goto LABEL_24;
      result = SLODWORD(this->fields.servantSellConfirmMenu);
      break;
    case 6:
    case 8:
    case 9:
    case 0xB:
    case 0xC:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_UserItemMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4AFC1F1 )
      {
        sub_1BC3008(&NetworkManager_TypeInfo, v7);
        byte_4AFC1F1 = 1;
      }
      v9 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v9 = NetworkManager_TypeInfo;
      }
      userIdNumber = v9->static_fields->userIdNumber;
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
      result = SHIDWORD(this->fields.m_CancellationTokenSource);
      break;
    case 0xA:
      this = (ShopRootComponent_o *)UserGameMaster__getSelfUserGame(0LL);
      if ( !this )
        goto LABEL_24;
      result = SHIDWORD(this->fields.servantSellConfirmMenu);
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
  if ( (unsigned int)(state - 1) > 0x15 )
    return 0;
  else
    return dword_C17498[state - 1];
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
  __int64 v11; // x2
  int max_length; // w8
  CommonConsumeEntity_array *v13; // x20
  __int64 v14; // x21
  int64_t Currency; // x21
  int32_t Price; // w0
  bool v18; // cc
  char v19; // w8

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
      v18 = Currency < Price;
    else
      v18 = Currency < 2 * Price;
    v19 = !v18;
    return v8 & v19;
  }
  CommonConsumeEntities = ShopEntity__GetCommonConsumeEntities(Shop_k__BackingField, 0LL);
  if ( !CommonConsumeEntities )
    return 0;
  max_length = CommonConsumeEntities->max_length;
  v13 = CommonConsumeEntities;
  if ( max_length >= 1 )
  {
    v14 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v14 >= max_length )
        sub_1BC326C(CommonConsumeEntities, item, v11);
      this = (ShopRootComponent_o *)v13->m_Items[v14];
      if ( !this )
        break;
      CommonConsumeEntities = (CommonConsumeEntity_array *)CommonConsumeEntity__GetUserBuyableNum(
                                                             (CommonConsumeEntity_o *)this,
                                                             0LL);
      if ( (int)CommonConsumeEntities < 2 )
        return 0;
      max_length = v13->max_length;
      if ( (int)++v14 >= max_length )
        return v8;
    }
LABEL_26:
    sub_1BC3264(this, item);
  }
  return v8;
}


bool __fastcall ShopRootComponent__GetIsContainExceededServant(
        ShopRootComponent_o *this,
        System_Int64_array *selectServantIds,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v10; // x20
  unsigned __int64 v11; // x21

  if ( (byte_4AFE3AB & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_UserServantMaster___, selectServantIds);
    sub_1BC3008(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v4);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4AFE3AB = 1;
  }
  if ( !selectServantIds )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_14:
    sub_1BC3264(Instance, v7);
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserServantMaster___);
  v9 = *(_QWORD *)&selectServantIds->max_length;
  if ( (int)v9 < 1 )
    return 0;
  v10 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v11 = 0LL;
  while ( 1 )
  {
    if ( v11 >= (unsigned int)v9 )
      sub_1BC326C(Instance, v7, v8);
    if ( !v10 )
      goto LABEL_14;
    Instance = DataMasterBase_object__object__long___GetEntity(
                 v10,
                 selectServantIds->m_Items[v11],
                 (const MethodInfo_32B15CC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( Instance )
    {
      Instance = (Il2CppObject *)UserServantEntity__isExceeded((UserServantEntity_o *)Instance, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        return 1;
    }
    LODWORD(v9) = selectServantIds->max_length;
    if ( (__int64)++v11 >= (int)v9 )
      return 0;
  }
}


int32_t __fastcall ShopRootComponent__GetShopItemBuyNum(
        ShopRootComponent_o *this,
        ShopBuyItemListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x20
  struct ShopEntity_o *Shop_k__BackingField; // x8
  UserShopEntity_o *EntityDefinitely; // x0

  if ( (byte_4AFE3A7 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_UserShopMaster___, item);
    sub_1BC3008(&NetworkManager_TypeInfo, v4);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4AFE3A7 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4AFC1F1 )
  {
    sub_1BC3008(&NetworkManager_TypeInfo, v7);
    byte_4AFC1F1 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !item || (Shop_k__BackingField = item->fields._Shop_k__BackingField) == 0LL || !MasterData_object )
LABEL_16:
    sub_1BC3264(Instance, v7);
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
  uint32_t v16; // w0

  if ( (byte_4AFE3D0 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_8804/*"ManaPrism"*/, jumpInfoName);
    sub_1BC3008(&StringLiteral_7069/*"GrailFragments"*/, v6);
    sub_1BC3008(&StringLiteral_14435/*"TradeAp"*/, v7);
    sub_1BC3008(&StringLiteral_8305/*"LeafExchange"*/, v8);
    sub_1BC3008(&StringLiteral_10713/*"PurePrismExchange"*/, v9);
    sub_1BC3008(&StringLiteral_6173/*"EventItem"*/, v10);
    sub_1BC3008(&StringLiteral_4488/*"CoinRoom"*/, v11);
    sub_1BC3008(&StringLiteral_12959/*"StoneFragments"*/, v12);
    sub_1BC3008(&StringLiteral_11070/*"RarePrism"*/, v13);
    sub_1BC3008(&StringLiteral_12561/*"SellServant"*/, v14);
    sub_1BC3008(&StringLiteral_12722/*"Shop18"*/, v15);
    byte_4AFE3D0 = 1;
  }
  v16 = PrivateImplementationDetails___ComputeStringHash(jumpInfoName, 0LL);
  if ( v16 <= 0xA7EC7693 )
  {
    if ( v16 > 0x5B016810 )
    {
      if ( v16 == -1988383029 )
      {
        if ( System_String__op_Equality(jumpInfoName, (System_String_o *)StringLiteral_12959/*"StoneFragments"*/, 0LL) )
          return 4;
      }
      else if ( v16 == -1542091583 )
      {
        if ( System_String__op_Equality(jumpInfoName, (System_String_o *)StringLiteral_10713/*"PurePrismExchange"*/, 0LL) )
          return 18;
      }
      else if ( v16 == -1477675373
             && System_String__op_Equality(jumpInfoName, (System_String_o *)StringLiteral_7069/*"GrailFragments"*/, 0LL) )
      {
        return 14;
      }
    }
    else if ( v16 == 117734384 )
    {
      if ( System_String__op_Equality(jumpInfoName, (System_String_o *)StringLiteral_12722/*"Shop18"*/, 0LL) )
        return 22;
    }
    else if ( v16 == 1526818832 && System_String__op_Equality(jumpInfoName, (System_String_o *)StringLiteral_8305/*"LeafExchange"*/, 0LL) )
    {
      return 20;
    }
    return 1;
  }
  if ( v16 <= 0xCD42BE08 )
  {
    if ( v16 == -1114035561 )
    {
      if ( System_String__op_Equality(jumpInfoName, (System_String_o *)StringLiteral_4488/*"CoinRoom"*/, 0LL) )
        return 17;
    }
    else if ( v16 == -1075479726 )
    {
      if ( System_String__op_Equality(jumpInfoName, (System_String_o *)StringLiteral_12561/*"SellServant"*/, 0LL) )
        return 9;
    }
    else if ( v16 == -851263992 && System_String__op_Equality(jumpInfoName, (System_String_o *)StringLiteral_14435/*"TradeAp"*/, 0LL) )
    {
      return 19;
    }
    return 1;
  }
  if ( v16 == -74236182 )
  {
    if ( System_String__op_Equality(jumpInfoName, (System_String_o *)StringLiteral_11070/*"RarePrism"*/, 0LL) )
      return 3;
    return 1;
  }
  if ( v16 != -472076328 )
  {
    if ( v16 == -490311229 && System_String__op_Equality(jumpInfoName, (System_String_o *)StringLiteral_8804/*"ManaPrism"*/, 0LL) )
      return 2;
    return 1;
  }
  if ( !System_String__op_Equality(jumpInfoName, (System_String_o *)StringLiteral_6173/*"EventItem"*/, 0LL) )
    return 1;
  if ( eventId < 1 )
    return 7;
  else
    return 8;
}


void __fastcall ShopRootComponent__Init(ShopRootComponent_o *this, const MethodInfo *method)
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
  ShopSceneListViewControlHelper_o *v27; // x29
  struct ShopSceneListViewControlHelper_o **p_listViewHelper; // x22
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  __int64 v31; // x1
  ShopSceneListViewControlHelper_o *listViewHelper; // x0
  ShopSceneListViewControlHelper_o *v33; // x23
  System_Action_o *v34; // x24
  System_Action_T__o *v35; // x25
  System_Action_int__o *v36; // x26
  System_Action_int__o *v37; // x27
  System_Action_T1__T2__T3__o *v38; // x28
  System_Action_o *v39; // x29
  ShopRootComponent_o *v40; // x0
  const MethodInfo *v41; // x3
  unsigned int StateOnInit; // w0
  int32_t v43; // w8
  _BOOL4 isFromCoinRoom; // w9
  float v45; // s0
  const MethodInfo *v46; // x3
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  UnityEngine_GameObject_o *gameObject; // x20
  System_Action_int__o *v50; // x21
  System_String_o *jumpInfoName; // [xsp+28h] [xbp-78h]
  int32_t eventId; // [xsp+34h] [xbp-6Ch]
  UnityEngine_GameObject_o *eventListViewBase; // [xsp+38h] [xbp-68h]

  if ( (byte_4AFE39A & 1) == 0 )
  {
    sub_1BC3008(&System_Action_ShopRootConstants_State__TypeInfo, method);
    sub_1BC3008(&System_Action_int__TypeInfo, v3);
    sub_1BC3008(&System_Action_ServantSellMenu_ResultKind__long____long____TypeInfo, v4);
    sub_1BC3008(&System_Action_TypeInfo, v5);
    sub_1BC3008(&Method_ShopRootComponent_OnMoveEnd__, v6);
    sub_1BC3008(&Method_ShopRootComponent_OnSelectBuyItem__, v7);
    sub_1BC3008(&Method_ShopRootComponent_OnSelectEvent__, v8);
    sub_1BC3008(&Method_ShopRootComponent_OnSelectSellServant__, v9);
    sub_1BC3008(&Method_ShopRootComponent_OnSelectTop__, v10);
    sub_1BC3008(&Method_ShopRootComponent_OpenHelp__, v11);
    sub_1BC3008(&Method_ShopRootComponent__Init_b__77_0__, v12);
    sub_1BC3008(&ShopSceneListViewControlHelper_TypeInfo, v13);
    sub_1BC3008(&StringLiteral_1/*""*/, v14);
    byte_4AFE39A = 1;
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
    v27 = (ShopSceneListViewControlHelper_o *)sub_1BC3254(ShopSceneListViewControlHelper_TypeInfo);
    ShopSceneListViewControlHelper___ctor(
      v27,
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
    this->fields.listViewHelper = v27;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.listViewHelper, (int32_t)v27, v29, v30);
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
    v33 = this->fields.listViewHelper;
    v34 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
    System_Action___ctor(v34, (Il2CppObject *)this, Method_ShopRootComponent_OnMoveEnd__, 0LL);
    v35 = (System_Action_T__o *)sub_1BC3254(System_Action_ShopRootConstants_State__TypeInfo);
    System_Action_Int32Enum____ctor(v35, (Il2CppObject *)this, (intptr_t)Method_ShopRootComponent_OnSelectTop__, 0LL);
    v36 = (System_Action_int__o *)sub_1BC3254(System_Action_int__TypeInfo);
    System_Action_int____ctor(v36, (Il2CppObject *)this, (intptr_t)Method_ShopRootComponent_OnSelectEvent__, 0LL);
    v37 = (System_Action_int__o *)sub_1BC3254(System_Action_int__TypeInfo);
    System_Action_int____ctor(v37, (Il2CppObject *)this, (intptr_t)Method_ShopRootComponent_OnSelectBuyItem__, 0LL);
    v38 = (System_Action_T1__T2__T3__o *)sub_1BC3254(System_Action_ServantSellMenu_ResultKind__long____long____TypeInfo);
    System_Action_Int32Enum__object__object____ctor(
      v38,
      (Il2CppObject *)this,
      Method_ShopRootComponent_OnSelectSellServant__,
      0LL);
    v39 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
    System_Action___ctor(v39, (Il2CppObject *)this, Method_ShopRootComponent_OpenHelp__, 0LL);
    if ( !v33 )
      goto LABEL_19;
    ShopSceneListViewControlHelper__SetCallbackEvents(
      v33,
      v34,
      (System_Action_ShopRootConstants_State__o *)v35,
      v36,
      v37,
      (System_Action_ServantSellMenu_ResultKind__long____long____o *)v38,
      v39,
      0LL);
    StateOnInit = ShopRootComponent__GetStateOnInit(v40, jumpInfoName, eventId, v41);
    v31 = StateOnInit;
    this->fields.state = StateOnInit;
    v43 = StateOnInit - 1 > 0x15 ? 0 : dword_C17498[StateOnInit - 1];
    isFromCoinRoom = this->fields.isFromCoinRoom;
    this->fields.inputState = v43;
    v45 = isFromCoinRoom ? this->fields.saveScrollBarValue : -1.0;
    listViewHelper = *p_listViewHelper;
    if ( !*p_listViewHelper )
LABEL_19:
      sub_1BC3264(listViewHelper, v31);
    ShopSceneListViewControlHelper__SetListViewOnSceneInit(
      listViewHelper,
      v31,
      eventId,
      v45,
      &this->fields.selectedEventIndex,
      0LL);
    ShopRootComponent__OpenEventItemWindow(this, this->fields.state, eventId, v46);
    if ( this->fields.state == 9 )
    {
      this->fields.jumpInfo = 0LL;
      sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.jumpInfo, 0, v47, v48);
    }
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v50 = (System_Action_int__o *)sub_1BC3254(System_Action_int__TypeInfo);
    System_Action_int____ctor(v50, (Il2CppObject *)this, Method_ShopRootComponent__Init_b__77_0__, 0LL);
    StoneCountRefreshComponent__AttachToGameObject(gameObject, v50, 0, 0LL);
  }
}


void __fastcall ShopRootComponent__LoadBanner(ShopRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  ShopRootComponent_o *v12; // x0
  const MethodInfo *v13; // x3
  struct SceneJumpInfo_o *jumpInfo; // x8
  int32_t id; // w2
  System_String_o **p_name; // x8
  System_Action_o *v17; // x19

  if ( (byte_4AFE399 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    sub_1BC3008(&AtlasManager_TypeInfo, v3);
    sub_1BC3008(&Method_ShopRootComponent___c__DisplayClass74_0__LoadBanner_b__0__, v4);
    sub_1BC3008(&ShopRootComponent___c__DisplayClass74_0_TypeInfo, v5);
    sub_1BC3008(&StringLiteral_1/*""*/, v6);
    byte_4AFE399 = 1;
  }
  v7 = sub_1BC3254(ShopRootComponent___c__DisplayClass74_0_TypeInfo);
  ShopRootComponent___c__DisplayClass74_0___ctor((ShopRootComponent___c__DisplayClass74_0_o *)v7, 0LL);
  if ( !v7 )
    sub_1BC3264(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v7 + 16), (int32_t)this, v10, v11);
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
  *(_DWORD *)(v7 + 24) = ShopRootComponent__GetStateOnInit(v12, *p_name, id, v13);
  v17 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(v17, (Il2CppObject *)v7, Method_ShopRootComponent___c__DisplayClass74_0__LoadBanner_b__0__, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadOutGameAtlas(v17, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopRootComponent__MenuBackFromStonePurchase(
        ShopRootComponent_o *this,
        int32_t result,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x1

  if ( (byte_4AFE3D3 & 1) == 0 )
  {
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, *(_QWORD *)&result);
    byte_4AFE3D3 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_1BC3264(Instance, v6);
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

  if ( (byte_4AFE3C2 & 1) == 0 )
  {
    sub_1BC3008(&Method_ShopRootComponent_OnClickBack__, method);
    byte_4AFE3C2 = 1;
  }
  if ( this->fields.inputState == 2 )
  {
    v3 = Method_ShopRootComponent_OnClickBack__;
    if ( (*((_BYTE *)Method_ShopRootComponent_OnClickBack__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BC3020(Method_ShopRootComponent_OnClickBack__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v3, v3[4]);
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

  if ( (byte_4AFE3BC & 1) == 0 )
  {
    sub_1BC3008(&Method_ShopRootComponent_OnClickHelp__, method);
    byte_4AFE3BC = 1;
  }
  v3 = Method_ShopRootComponent_OnClickHelp__;
  if ( (*((_BYTE *)Method_ShopRootComponent_OnClickHelp__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1BC3020(Method_ShopRootComponent_OnClickHelp__);
  v4 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
  ShopRootComponent__OpenHelp(this, v5);
}


void __fastcall ShopRootComponent__OnClickHelpClose(ShopRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  int32_t state; // w8
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  ShopHelpListViewManager_o *helpListViewManager; // x20
  System_Action_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4AFE3BF & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    sub_1BC3008(&Method_ShopRootComponent_CheckTutorial__, v3);
    sub_1BC3008(&Method_ShopRootComponent_OnClickHelpClose__, v4);
    byte_4AFE3BF = 1;
  }
  state = this->fields.state;
  if ( state <= 6 )
  {
    if ( (unsigned int)state <= 6 && ((1 << state) & 0x68) != 0 )
      return;
  }
  else if ( (state | 2) == 22 )
  {
    return;
  }
  v6 = Method_ShopRootComponent_OnClickHelpClose__;
  if ( (*((_BYTE *)Method_ShopRootComponent_OnClickHelpClose__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1BC3020(Method_ShopRootComponent_OnClickHelpClose__);
  v7 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 1, 0, 0LL);
  helpListViewManager = this->fields.helpListViewManager;
  v9 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_ShopRootComponent_CheckTutorial__, 0LL);
  if ( !helpListViewManager )
    sub_1BC3264(v10, v11);
  ShopHelpListViewManager__CloseHelpDialog(helpListViewManager, v9, v12);
}


void __fastcall ShopRootComponent__OnEndDialogEventCloseWarning(ShopRootComponent_o *this, const MethodInfo *method)
{
  MainMenuBar__requestTerminalSceneChange(0LL);
}


void __fastcall ShopRootComponent__OnEndFadeRequestShop(ShopRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *MainBgmName; // x20
  const MethodInfo *v5; // x1

  if ( (byte_4AFE3B8 & 1) == 0 )
  {
    sub_1BC3008(&BgmManager_TypeInfo, method);
    sub_1BC3008(&SoundManager_TypeInfo, v3);
    byte_4AFE3B8 = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  MainBgmName = BgmManager__GetMainBgmName(0, 0LL);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm(MainBgmName, 0LL);
  ShopRootComponent__RequestEnd(this, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopRootComponent__OnEndItemDialog(ShopRootComponent_o *this, bool isOk, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  RequestResultDialog_o *requestResultDialog; // x0
  ShopEntity_o *messageLabel; // x20
  const MethodInfo *v11; // x2
  System_String_o *monitor; // x20
  ScriptManager_CallbackFunc_o *v13; // x21
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4AFE3B4 & 1) == 0 )
  {
    sub_1BC3008(&ScriptManager_CallbackFunc_TypeInfo, isOk);
    sub_1BC3008(&Method_DataManager_GetMasterData_ShopScriptMaster___, v4);
    sub_1BC3008(&Method_DataMasterBase_ShopScriptMaster__ShopScriptEntity__int__TryGetEntity__, v5);
    sub_1BC3008(&ScriptManager_TypeInfo, v6);
    sub_1BC3008(&Method_ShopRootComponent_OnEndPlayScriptRequestShop__, v7);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4AFE3B4 = 1;
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
  messageLabel = (ShopEntity_o *)requestResultDialog->fields.messageLabel;
  requestResultDialog = (RequestResultDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !requestResultDialog )
    goto LABEL_20;
  requestResultDialog = (RequestResultDialog_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)requestResultDialog,
                                                   (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ShopScriptMaster___);
  if ( !messageLabel || !requestResultDialog )
    goto LABEL_20;
  requestResultDialog = (RequestResultDialog_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)requestResultDialog,
                                                   &entity,
                                                   messageLabel->fields.id,
                                                   (const MethodInfo_32AF0BC *)Method_DataMasterBase_ShopScriptMaster__ShopScriptEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)requestResultDialog & 1) == 0 )
    goto LABEL_12;
  if ( !entity )
    goto LABEL_20;
  requestResultDialog = (RequestResultDialog_o *)System_String__IsNullOrEmpty((System_String_o *)entity[2].monitor, 0LL);
  if ( ((unsigned __int8)requestResultDialog & 1) != 0 )
  {
LABEL_12:
    if ( messageLabel->fields.purchaseType == 14 )
      ShopRootComponent__PlayServantCostumeReleaseEffect(this, messageLabel, v11);
    else
      ShopRootComponent__RequestEnd(this, (const MethodInfo *)isOk);
    return;
  }
  if ( !entity )
LABEL_20:
    sub_1BC3264(requestResultDialog, isOk);
  monitor = (System_String_o *)entity[2].monitor;
  v13 = (ScriptManager_CallbackFunc_o *)sub_1BC3254(ScriptManager_CallbackFunc_TypeInfo);
  ScriptManager_CallbackFunc___ctor(
    v13,
    (Il2CppObject *)this,
    Method_ShopRootComponent_OnEndPlayScriptRequestShop__,
    0LL);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__PlayShop(monitor, v13, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopRootComponent__OnEndPlayScriptRequestShop(
        ShopRootComponent_o *this,
        bool isExit,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x20
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4AFE3B5 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, isExit);
    sub_1BC3008(&Method_ShopRootComponent_OnEndFadeRequestShop__, v4);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4AFE3B5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_ShopRootComponent_OnEndFadeRequestShop__, 0LL);
  if ( !Instance )
    sub_1BC3264(v8, v9);
  CommonUI__maskFadein((CommonUI_o *)Instance, 1.0, v7, 0LL);
}


void __fastcall ShopRootComponent__OnEndPlayServantCostumeReleaseEffect(
        ShopRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v7; // x8
  CommonUI_o *v8; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1

  if ( (byte_4AFE3B7 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    sub_1BC3008(&AvalonSceneManager_TypeInfo, v3);
    sub_1BC3008(&Method_ShopRootComponent_RequestEnd__, v4);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4AFE3B7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = AvalonSceneManager_TypeInfo;
  v8 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v7 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v7->static_fields->DEFAULT_FADE_TIME;
  v10 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_ShopRootComponent_RequestEnd__, 0LL);
  if ( !v8 )
    sub_1BC3264(v11, v12);
  CommonUI__maskFadein(v8, DEFAULT_FADE_TIME, v10, 0LL);
}


void __fastcall ShopRootComponent__OnEndShopReset(ShopRootComponent_o *this, bool isDecide, const MethodInfo *method)
{
  ShopResetConfirmDialogComponent_o *shopResetConfirmDialog; // x0
  const MethodInfo *v5; // x1

  shopResetConfirmDialog = this->fields.shopResetConfirmDialog;
  if ( !shopResetConfirmDialog )
    sub_1BC3264(0LL, isDecide);
  ShopResetConfirmDialogComponent__Close_34361760(shopResetConfirmDialog, 0LL, method);
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
    sub_1BC3264(0LL, count);
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

  if ( (byte_4AFE3BB & 1) == 0 )
  {
    sub_1BC3008(&ShopBuyItemListViewManager_TypeInfo, receivedNewServant);
    byte_4AFE3BB = 1;
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
    sub_1BC3264(BuyItemKind, v7);
  }
  ShopSceneListViewControlHelper__SetListViewInvalidate(BuyItemKind, 0LL);
  return 1;
}


void __fastcall ShopRootComponent__OnGiftOpen(ShopRootComponent_o *this, const MethodInfo *method)
{
  ShopPlayVoiceComponent_o *shopPlayVoiceComponent; // x0

  shopPlayVoiceComponent = this->fields.shopPlayVoiceComponent;
  if ( !shopPlayVoiceComponent )
    sub_1BC3264(0LL, method);
  ShopPlayVoiceComponent__StopVoice(shopPlayVoiceComponent, method);
}


void __fastcall ShopRootComponent__OnInitEnd(ShopRootComponent_o *this, int32_t state, const MethodInfo *method)
{
  ShopSceneListViewControlHelper_o *listViewHelper; // x0

  if ( this->fields.inputState == 1 )
  {
    listViewHelper = this->fields.listViewHelper;
    if ( !listViewHelper )
      sub_1BC3264(0LL, state);
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
      sub_1BC3264(0LL, state);
    ShopSceneListViewControlHelper__SetListViewOnStateQuitEnd(
      listViewHelper,
      state,
      v5,
      this->fields.selectedEventIndex,
      0LL);
    this->fields.inputState = 2;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopRootComponent__OnSelectBuyItem(ShopRootComponent_o *this, int32_t index, const MethodInfo *method)
{
  int32_t state; // w8
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  ShopSceneListViewControlHelper_o *listViewHelper; // x0
  ShopBuyItemListViewItem_o *ShopBuyItemListViewItem; // x0
  const MethodInfo *v10; // x2
  bool IsBulk; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4AFE3C5 & 1) == 0 )
  {
    sub_1BC3008(&Method_ShopRootComponent_OnSelectBuyItem__, *(_QWORD *)&index);
    byte_4AFE3C5 = 1;
  }
  if ( this->fields.inputState == 2 )
  {
    state = this->fields.state;
    this->fields.inputState = 0;
    if ( state != 22 )
    {
      v6 = Method_ShopRootComponent_OnSelectBuyItem__;
      if ( (*((_BYTE *)Method_ShopRootComponent_OnSelectBuyItem__ + 83) & 2) != 0 )
        v6 = (_QWORD *)sub_1BC3020(Method_ShopRootComponent_OnSelectBuyItem__);
      v7 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v6, v6[4]);
      OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0LL);
    }
    listViewHelper = this->fields.listViewHelper;
    this->fields.selectedItemIndex = index;
    if ( !listViewHelper )
      sub_1BC3264(0LL, *(_QWORD *)&index);
    ShopBuyItemListViewItem = ShopSceneListViewControlHelper__GetShopBuyItemListViewItem(listViewHelper, index, 0LL);
    IsBulk = ShopRootComponent__GetIsBulk((ShopRootComponent_o *)ShopBuyItemListViewItem, ShopBuyItemListViewItem, v10);
    ShopRootComponent__SelectItem(this, index, IsBulk, v12);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopRootComponent__OnSelectEvent(ShopRootComponent_o *this, int32_t index, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  __int64 v14; // x1
  ShopSceneListViewControlHelper_o *listViewHelper; // x0
  ShopEventListViewItem_o *ShopEventListViewItem; // x20
  const MethodInfo *v17; // x2
  int32_t eventId; // w21
  SceneJumpInfo_o *v19; // x19

  if ( (byte_4AFE3C7 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_EventDetailMaster___, *(_QWORD *)&index);
    sub_1BC3008(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v5);
    sub_1BC3008(&SceneJumpInfo_TypeInfo, v6);
    sub_1BC3008(&Method_ShopRootComponent_OnSelectEvent__, v7);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1BC3008(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v9);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1BC3008(&StringLiteral_9456/*"NormalEventShop"*/, v11);
    byte_4AFE3C7 = 1;
  }
  v12 = Method_ShopRootComponent_OnSelectEvent__;
  if ( (*((_BYTE *)Method_ShopRootComponent_OnSelectEvent__ + 83) & 2) != 0 )
    v12 = (_QWORD *)sub_1BC3020(Method_ShopRootComponent_OnSelectEvent__);
  v13 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v12, v12[4]);
  OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0, 0LL);
  listViewHelper = this->fields.listViewHelper;
  this->fields.selectedEventIndex = index;
  if ( !listViewHelper )
    goto LABEL_16;
  ShopEventListViewItem = ShopSceneListViewControlHelper__GetShopEventListViewItem(listViewHelper, index, 0LL);
  listViewHelper = (ShopSceneListViewControlHelper_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !listViewHelper )
    goto LABEL_16;
  listViewHelper = (ShopSceneListViewControlHelper_o *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)listViewHelper,
                                                         (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !ShopEventListViewItem )
    goto LABEL_16;
  if ( !listViewHelper )
    goto LABEL_16;
  listViewHelper = (ShopSceneListViewControlHelper_o *)DataMasterBase_object__object__int___GetEntity(
                                                         (DataMasterBase_TMaster__TEntity__PKType__o *)listViewHelper,
                                                         ShopEventListViewItem->fields.eventId,
                                                         (const MethodInfo_32AF070 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  if ( !listViewHelper )
    goto LABEL_16;
  if ( EventDetailEntity__IsEventShop((EventDetailEntity_o *)listViewHelper, 0LL) )
  {
    eventId = ShopEventListViewItem->fields.eventId;
    v19 = (SceneJumpInfo_o *)sub_1BC3254(SceneJumpInfo_TypeInfo);
    SceneJumpInfo___ctor_40500948(v19, (System_String_o *)StringLiteral_9456/*"NormalEventShop"*/, eventId, 0LL);
    if ( v19 )
    {
      SceneJumpInfo__SetReturnNowScene(v19, 0LL);
      listViewHelper = (ShopSceneListViewControlHelper_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( listViewHelper )
      {
        CommonUI__CheckChangeOtherConnectMarkFromEventId(
          (CommonUI_o *)listViewHelper,
          ShopEventListViewItem->fields.eventId,
          1,
          0LL);
        listViewHelper = (ShopSceneListViewControlHelper_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( listViewHelper )
        {
          AvalonSceneManager__transitionScene((AvalonSceneManager_o *)listViewHelper, 72, 1, (Il2CppObject *)v19, 0LL);
          return;
        }
      }
    }
LABEL_16:
    sub_1BC3264(listViewHelper, v14);
  }
  ShopRootComponent__SelectMenu(this, 8, v17);
}


void __fastcall ShopRootComponent__OnSelectSellServant(
        ShopRootComponent_o *this,
        int32_t kind,
        System_Int64_array *servantList,
        System_Int64_array *commandCodeList,
        const MethodInfo *method)
{
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x1

  if ( this->fields.inputState == 2 )
  {
    this->fields.selectedServantIds = servantList;
    sub_1BC2FAC(
      (CGThumbnailListItem_o *)&this->fields.selectedServantIds,
      (int32_t)servantList,
      (int32_t)servantList,
      (const MethodInfo *)commandCodeList);
    this->fields.selectedCommandCodeIds = commandCodeList;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.selectedCommandCodeIds, (int32_t)commandCodeList, v8, v9);
    if ( kind == 1 )
      ShopRootComponent__CheckSellServantExceeded(this, v10);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopRootComponent__OnSelectTop(ShopRootComponent_o *this, int32_t state, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  bool IsSvtCostumeShopOpen; // w0
  _BOOL4 v8; // w9
  _BOOL4 v9; // w8
  bool IsTargetQuestClear; // w0
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  const MethodInfo *v13; // x2

  if ( (byte_4AFE3C4 & 1) == 0 )
  {
    sub_1BC3008(&CoinRoomUtility_TypeInfo, *(_QWORD *)&state);
    sub_1BC3008(&Method_ShopRootComponent_OnSelectTop__, v5);
    sub_1BC3008(&ShopRootConstants_TypeInfo, v6);
    byte_4AFE3C4 = 1;
  }
  if ( this->fields.inputState == 2 && this->fields.state == 1 )
  {
    if ( state == 17 )
    {
      if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
      IsTargetQuestClear = CoinRoomUtility__IsTargetQuestClear(0LL);
      v9 = 0;
      v8 = !IsTargetQuestClear;
    }
    else if ( state == 15 )
    {
      if ( !ShopRootConstants_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
      IsSvtCostumeShopOpen = ShopRootConstants__IsSvtCostumeShopOpen(0LL);
      v8 = 0;
      v9 = !IsSvtCostumeShopOpen;
    }
    else
    {
      v9 = 0;
      v8 = 0;
    }
    if ( v8 || v9 )
    {
      this->fields.inputState = 1;
      ShopRootComponent__OnInitEnd(this, 1, method);
    }
    else
    {
      v11 = Method_ShopRootComponent_OnSelectTop__;
      if ( (*((_BYTE *)Method_ShopRootComponent_OnSelectTop__ + 83) & 2) != 0 )
        v11 = (_QWORD *)sub_1BC3020(Method_ShopRootComponent_OnSelectTop__);
      v12 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v11, v11[4]);
      OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0, 0LL);
      ShopRootComponent__SelectMenu(this, state, v13);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopRootComponent__OpenConfirmMenu(
        ShopRootComponent_o *this,
        int32_t state,
        ShopBuyItemListViewItem_o *item,
        bool isBulk,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x20
  int64_t KindByShopState; // x0
  __int64 v20; // x1
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  ShopBuyItemListViewItem_o **v23; // x21
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  ShopBuyItemListViewItem_o *v26; // x20
  struct ShopBuyBulkItemConfirmMenu_o *ApSeedBulkExchangeConfirmMenu; // x21
  ShopEntity_o *v28; // x22
  System_Action_int__o *v29; // x23
  int32_t v30; // w4
  ShopBuyBulkItemConfirmMenu_o *v31; // x0
  ShopEntity_o *v32; // x1
  ShopBuyItemListViewItem_o *v33; // x2
  System_Action_int__o *v34; // x3
  ShopBuyItemListViewItem_o *v35; // x8
  ShopEntity_o *Shop_k__BackingField; // x23
  int32_t ShopKind_k__BackingField; // w24
  struct ShopBuyItemConfirmMenu_o *buyItemConfirmMenu; // x21
  System_Action_int__o *v39; // x25
  System_Action_o *v40; // x19
  ShopBuyItemConfirmMenu_o *v41; // x0
  ShopEntity_o *v42; // x1
  int32_t v43; // w2
  System_Action_int__o *v44; // x3
  int32_t v45; // w5
  System_Action_o *v46; // x6
  struct ShopBuyItemConfirmMenu_o *v47; // x21
  ShopBuyItemListViewItem_o *v48; // x22
  System_Action_o *v49; // x23
  System_Action_int__o *v50; // x20
  ShopBuyItemConfirmMenu_o *v51; // x0
  ShopBuyItemListViewItem_o *v52; // x1
  int32_t v53; // w20
  const MethodInfo *v54; // x2
  BuyStorageConfirmDialogComponent_o *buyStorageNotificationDialog; // x22
  ShopBuyItemListViewItem_o *v56; // x21
  System_Action_int__o *v57; // x23
  int32_t v58; // w2
  struct ShopBuyItemConfirmMenu_o *v59; // x22
  ShopBuyItemListViewItem_o *v60; // x21
  bool IsDisabledDisp; // w22
  _QWORD *v62; // x8
  System_Reflection_MethodBase_o *v63; // x0
  int64_t v64; // x22
  ShopBuyItemListViewItem_o *v65; // x8
  ShopEntity_o *v66; // x21
  int32_t v67; // w22
  struct ShopBuyItemConfirmMenu_o *ApSeedExchangeConfirmMenu; // x20
  System_Action_int__o *v69; // x23
  ShopBuyItemListViewItem_o *v70; // x8
  ShopEntity_o *v71; // x22
  int32_t v72; // w23
  ShopBuyItemConfirmMenu_o *v73; // x21
  System_Action_int__o *v74; // x24
  System_Action_o *v75; // x19
  ShopBuyItemListViewItem_o *v76; // x20
  struct ShopBuyBulkItemConfirmMenu_o *buyBulkItemConfirmMenu; // x21
  ShopEntity_o *v78; // x22
  System_Action_int__o *v79; // x23
  ShopEntity_o *v80; // x20
  int32_t v81; // w21
  BuyStorageConfirmDialogComponent_o *buyStorageConfirmDialog; // x22
  ShopBuyItemListViewItem_o *v83; // x21
  System_Action_int__o *v84; // x23

  if ( (byte_4AFE3A3 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_int__TypeInfo, *(_QWORD *)&state);
    sub_1BC3008(&System_Action_TypeInfo, v9);
    sub_1BC3008(&Method_ShopRootComponent_CloseStorageDetailCheckConfirm__, v10);
    sub_1BC3008(&Method_ShopRootComponent_OpenConfirmMenu__, v11);
    sub_1BC3008(&Method_ShopRootComponent_SelectedBuyItemConfirm__, v12);
    sub_1BC3008(&Method_ShopRootComponent___c__DisplayClass87_0__OpenConfirmMenu_b__0__, v13);
    sub_1BC3008(&Method_ShopRootComponent___c__DisplayClass87_0__OpenConfirmMenu_b__1__, v14);
    sub_1BC3008(&Method_ShopRootComponent___c__DisplayClass87_0__OpenConfirmMenu_b__2__, v15);
    sub_1BC3008(&Method_ShopRootComponent___c__DisplayClass87_0__OpenConfirmMenu_b__3__, v16);
    sub_1BC3008(&ShopRootComponent___c__DisplayClass87_0_TypeInfo, v17);
    byte_4AFE3A3 = 1;
  }
  v18 = sub_1BC3254(ShopRootComponent___c__DisplayClass87_0_TypeInfo);
  ShopRootComponent___c__DisplayClass87_0___ctor((ShopRootComponent___c__DisplayClass87_0_o *)v18, 0LL);
  if ( !v18 )
    goto LABEL_61;
  *(_QWORD *)(v18 + 16) = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v18 + 16), (int32_t)this, v21, v22);
  *(_QWORD *)(v18 + 24) = item;
  v23 = (ShopBuyItemListViewItem_o **)(v18 + 24);
  sub_1BC2FAC((CGThumbnailListItem_o *)(v18 + 24), (int32_t)item, v24, v25);
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
      v35 = *v23;
      if ( !*v23 )
        goto LABEL_61;
      Shop_k__BackingField = v35->fields._Shop_k__BackingField;
      ShopKind_k__BackingField = v35->fields._ShopKind_k__BackingField;
      buyItemConfirmMenu = this->fields.buyItemConfirmMenu;
      v39 = (System_Action_int__o *)sub_1BC3254(System_Action_int__TypeInfo);
      System_Action_int____ctor(v39, (Il2CppObject *)this, Method_ShopRootComponent_SelectedBuyItemConfirm__, 0LL);
      v40 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
      System_Action___ctor(
        v40,
        (Il2CppObject *)v18,
        Method_ShopRootComponent___c__DisplayClass87_0__OpenConfirmMenu_b__1__,
        0LL);
      if ( !buyItemConfirmMenu )
        goto LABEL_61;
      v41 = buyItemConfirmMenu;
      v42 = Shop_k__BackingField;
      v43 = ShopKind_k__BackingField;
      v44 = v39;
      v45 = state;
      v46 = v40;
      goto LABEL_14;
    case 3:
    case 15:
      if ( isBulk )
        goto LABEL_6;
      v47 = this->fields.buyItemConfirmMenu;
      v48 = *(ShopBuyItemListViewItem_o **)(v18 + 24);
      v49 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
      System_Action___ctor(
        v49,
        (Il2CppObject *)v18,
        Method_ShopRootComponent___c__DisplayClass87_0__OpenConfirmMenu_b__0__,
        0LL);
      v50 = (System_Action_int__o *)sub_1BC3254(System_Action_int__TypeInfo);
      System_Action_int____ctor(v50, (Il2CppObject *)this, Method_ShopRootComponent_SelectedBuyItemConfirm__, 0LL);
      if ( !v47 )
        goto LABEL_61;
      v51 = v47;
      v52 = v48;
      goto LABEL_31;
    case 11:
    case 12:
      KindByShopState = BuyStorageConfirmDialogComponent__GetKindByShopState(state, 0LL);
      if ( !*v23 )
        goto LABEL_61;
      v53 = KindByShopState;
      KindByShopState = (int64_t)(*v23)->fields._Shop_k__BackingField;
      if ( !KindByShopState )
        goto LABEL_61;
      KindByShopState = ShopEntity__IsSoldOut((ShopEntity_o *)KindByShopState, 0LL);
      if ( (KindByShopState & 1) != 0 )
      {
        buyStorageNotificationDialog = this->fields.buyStorageNotificationDialog;
        v56 = *v23;
        v57 = (System_Action_int__o *)sub_1BC3254(System_Action_int__TypeInfo);
        System_Action_int____ctor(v57, (Il2CppObject *)this, Method_ShopRootComponent_SelectedBuyItemConfirm__, 0LL);
        if ( buyStorageNotificationDialog )
        {
          v58 = 1;
LABEL_44:
          BuyStorageConfirmDialogComponent__NotificationDialogOpen(
            buyStorageNotificationDialog,
            v53,
            v58,
            v56,
            v57,
            0LL);
          return;
        }
        goto LABEL_61;
      }
      if ( !*v23 )
        goto LABEL_61;
      KindByShopState = ShopRootComponent__GetCurrency(
                          (ShopRootComponent_o *)KindByShopState,
                          (*v23)->fields._Shop_k__BackingField,
                          v54);
      if ( !*v23 )
        goto LABEL_61;
      v64 = KindByShopState;
      KindByShopState = (int64_t)(*v23)->fields._Shop_k__BackingField;
      if ( !KindByShopState )
        goto LABEL_61;
      KindByShopState = ShopEntity__GetPrice((ShopEntity_o *)KindByShopState, 0LL);
      if ( v64 < (int)KindByShopState )
      {
        buyStorageNotificationDialog = this->fields.buyStorageNotificationDialog;
        v56 = *v23;
        v57 = (System_Action_int__o *)sub_1BC3254(System_Action_int__TypeInfo);
        System_Action_int____ctor(v57, (Il2CppObject *)this, Method_ShopRootComponent_SelectedBuyItemConfirm__, 0LL);
        if ( buyStorageNotificationDialog )
        {
          v58 = 2;
          goto LABEL_44;
        }
LABEL_61:
        sub_1BC3264(KindByShopState, v20);
      }
      if ( isBulk )
      {
        v76 = *v23;
        if ( !*v23 )
          goto LABEL_61;
        buyBulkItemConfirmMenu = this->fields.buyBulkItemConfirmMenu;
        v78 = v76->fields._Shop_k__BackingField;
        v79 = (System_Action_int__o *)sub_1BC3254(System_Action_int__TypeInfo);
        System_Action_int____ctor(v79, (Il2CppObject *)this, Method_ShopRootComponent_SelectedBuyItemConfirm__, 0LL);
        if ( !buyBulkItemConfirmMenu )
          goto LABEL_61;
        v31 = buyBulkItemConfirmMenu;
        v32 = v78;
        v33 = v76;
        v34 = v79;
        v30 = 0;
LABEL_10:
        ShopBuyBulkItemConfirmMenu__Open(v31, v32, v33, v34, v30, 0LL);
        return;
      }
      buyStorageConfirmDialog = this->fields.buyStorageConfirmDialog;
      this->fields.buyCount = 1;
      v83 = *v23;
      v84 = (System_Action_int__o *)sub_1BC3254(System_Action_int__TypeInfo);
      System_Action_int____ctor(
        v84,
        (Il2CppObject *)this,
        Method_ShopRootComponent_CloseStorageDetailCheckConfirm__,
        0LL);
      if ( !buyStorageConfirmDialog )
        goto LABEL_61;
      BuyStorageConfirmDialogComponent__Open(buyStorageConfirmDialog, v53, v83, 1, v84, 0LL);
      return;
    case 19:
      if ( isBulk )
      {
        v26 = *v23;
        if ( !*v23 )
          goto LABEL_61;
        ApSeedBulkExchangeConfirmMenu = this->fields.ApSeedBulkExchangeConfirmMenu;
        goto LABEL_8;
      }
      v65 = *v23;
      if ( !*v23 )
        goto LABEL_61;
      v66 = v65->fields._Shop_k__BackingField;
      v67 = v65->fields._ShopKind_k__BackingField;
      ApSeedExchangeConfirmMenu = this->fields.ApSeedExchangeConfirmMenu;
      v69 = (System_Action_int__o *)sub_1BC3254(System_Action_int__TypeInfo);
      System_Action_int____ctor(v69, (Il2CppObject *)this, Method_ShopRootComponent_SelectedBuyItemConfirm__, 0LL);
      if ( !ApSeedExchangeConfirmMenu )
        goto LABEL_61;
      v41 = ApSeedExchangeConfirmMenu;
      v42 = v66;
      v43 = v67;
      goto LABEL_58;
    case 21:
      if ( isBulk )
      {
LABEL_6:
        v26 = *v23;
        if ( !*v23 )
          goto LABEL_61;
        ApSeedBulkExchangeConfirmMenu = this->fields.buyBulkItemConfirmMenu;
LABEL_8:
        v28 = v26->fields._Shop_k__BackingField;
        v29 = (System_Action_int__o *)sub_1BC3254(System_Action_int__TypeInfo);
        System_Action_int____ctor(v29, (Il2CppObject *)this, Method_ShopRootComponent_SelectedBuyItemConfirm__, 0LL);
        if ( !ApSeedBulkExchangeConfirmMenu )
          goto LABEL_61;
        v30 = 8;
        v31 = ApSeedBulkExchangeConfirmMenu;
        v32 = v28;
        v33 = v26;
        v34 = v29;
        goto LABEL_10;
      }
      KindByShopState = (int64_t)*v23;
      if ( !*v23 )
        goto LABEL_61;
      KindByShopState = ShopBuyItemListViewItem__get_IsItemTypeRarePri(
                          (ShopBuyItemListViewItem_o *)KindByShopState,
                          0LL);
      v59 = this->fields.buyItemConfirmMenu;
      v60 = *v23;
      if ( (KindByShopState & 1) != 0 )
      {
        v49 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
        System_Action___ctor(
          v49,
          (Il2CppObject *)v18,
          Method_ShopRootComponent___c__DisplayClass87_0__OpenConfirmMenu_b__2__,
          0LL);
        v50 = (System_Action_int__o *)sub_1BC3254(System_Action_int__TypeInfo);
        System_Action_int____ctor(v50, (Il2CppObject *)this, Method_ShopRootComponent_SelectedBuyItemConfirm__, 0LL);
        if ( !v59 )
          goto LABEL_61;
        v51 = v59;
        v52 = v60;
LABEL_31:
        ShopBuyItemConfirmMenu__OpenAfterCheckedFree(v51, v52, v49, v50, 0LL);
      }
      else
      {
        if ( !v60 )
          goto LABEL_61;
        v80 = v60->fields._Shop_k__BackingField;
        v81 = v60->fields._ShopKind_k__BackingField;
        v69 = (System_Action_int__o *)sub_1BC3254(System_Action_int__TypeInfo);
        System_Action_int____ctor(v69, (Il2CppObject *)this, Method_ShopRootComponent_SelectedBuyItemConfirm__, 0LL);
        if ( !v59 )
          goto LABEL_61;
        v41 = v59;
        v42 = v80;
        v43 = v81;
LABEL_58:
        v44 = v69;
        v45 = 0;
        v46 = 0LL;
LABEL_14:
        ShopBuyItemConfirmMenu__Open(v41, v42, v43, v44, 0, v45, v46, 8, 0LL);
      }
      return;
    case 22:
      KindByShopState = (int64_t)*v23;
      if ( !*v23 )
        goto LABEL_61;
      IsDisabledDisp = ShopBuyItemListViewItem__IsDisabledDisp((ShopBuyItemListViewItem_o *)KindByShopState, 0LL);
      v62 = Method_ShopRootComponent_OpenConfirmMenu__;
      if ( (*((_BYTE *)Method_ShopRootComponent_OpenConfirmMenu__ + 83) & 2) != 0 )
        v62 = (_QWORD *)sub_1BC3020(Method_ShopRootComponent_OpenConfirmMenu__);
      v63 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v62, v62[4]);
      if ( IsDisabledDisp )
      {
        OverwriteAssetSoundName__PlaySystemSe(v63, 2, 0, 0LL);
        KindByShopState = (int64_t)this->fields.listViewHelper;
        if ( KindByShopState )
        {
          ShopSceneListViewControlHelper__SetListViewOnCloseBuyItemConfirm(
            (ShopSceneListViewControlHelper_o *)KindByShopState,
            this->fields.state,
            0LL);
          return;
        }
        goto LABEL_61;
      }
      OverwriteAssetSoundName__PlaySystemSe(v63, 0, 0, 0LL);
      v70 = *v23;
      if ( !*v23 )
        goto LABEL_61;
      v71 = v70->fields._Shop_k__BackingField;
      v72 = v70->fields._ShopKind_k__BackingField;
      v73 = this->fields.buyItemConfirmMenu;
      v74 = (System_Action_int__o *)sub_1BC3254(System_Action_int__TypeInfo);
      System_Action_int____ctor(v74, (Il2CppObject *)this, Method_ShopRootComponent_SelectedBuyItemConfirm__, 0LL);
      v75 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
      System_Action___ctor(
        v75,
        (Il2CppObject *)v18,
        Method_ShopRootComponent___c__DisplayClass87_0__OpenConfirmMenu_b__3__,
        0LL);
      if ( !v73 )
        goto LABEL_61;
      ShopBuyItemConfirmMenu__Open(v73, v71, v72, v74, 0, 22, v75, 0, 0LL);
      return;
    default:
      return;
  }
}


void __fastcall ShopRootComponent__OpenDetailCheck(ShopRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  ShopSceneListViewControlHelper_o *listViewHelper; // x0
  ShopBuyItemListViewItem_o *ShopBuyItemListViewItem; // x20
  struct ShopEntity_o *Shop_k__BackingField; // x8
  ShopDetailEntity_o *ShopDetailEntity; // x21
  CommonUI_o *v12; // x20
  System_String_o *message; // x21
  CommonConfirmDialog_ClickDelegate_o *v14; // x22

  if ( (byte_4AFE3C8 & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, method);
    sub_1BC3008(&CommonConfirmDialog_ClickDelegate_TypeInfo, v3);
    sub_1BC3008(&Method_DataManager_GetMasterData_ShopDetailMaster___, v4);
    sub_1BC3008(&Method_ShopRootComponent_CloseDetaiCheckConfirm__, v5);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4AFE3C8 = 1;
  }
  listViewHelper = this->fields.listViewHelper;
  if ( !listViewHelper )
    goto LABEL_13;
  ShopBuyItemListViewItem = ShopSceneListViewControlHelper__GetShopBuyItemListViewItem(
                              listViewHelper,
                              this->fields.selectedItemIndex,
                              0LL);
  listViewHelper = (ShopSceneListViewControlHelper_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !listViewHelper )
    goto LABEL_13;
  listViewHelper = (ShopSceneListViewControlHelper_o *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)listViewHelper,
                                                         (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ShopDetailMaster___);
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
  listViewHelper = (ShopSceneListViewControlHelper_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !ShopDetailEntity )
    goto LABEL_13;
  v12 = (CommonUI_o *)listViewHelper;
  message = ShopDetailEntity->fields.message;
  v14 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BC3254(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v14,
    (Il2CppObject *)this,
    Method_ShopRootComponent_CloseDetaiCheckConfirm__,
    0LL);
  listViewHelper = (ShopSceneListViewControlHelper_o *)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  if ( !v12 )
LABEL_13:
    sub_1BC3264(listViewHelper, method);
  CommonUI__OpenConfirmDialog_30730996(
    v12,
    0LL,
    message,
    1,
    v14,
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
  __int64 v7; // x1
  UnityEngine_GameObject_o *shopEventItemDrawBase; // x0
  char v9; // w21
  UnityEngine_Transform_o *transform; // x22
  int v11; // s0
  UnityEngine_GameObject_o *gameObject; // x0
  ShopRootConstants_c *v15; // x8
  UnityEngine_GameObject_o *v16; // x19

  if ( (byte_4AFE3CD & 1) == 0 )
  {
    sub_1BC3008(&ShopBuyItemListViewManager_TypeInfo, *(_QWORD *)&state);
    sub_1BC3008(&ShopRootConstants_TypeInfo, v7);
    byte_4AFE3CD = 1;
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
  v9 = (char)shopEventItemDrawBase;
  shopEventItemDrawBase = UnityEngine_Component__get_gameObject(
                            (UnityEngine_Component_o *)this->fields.shopEventItemDrawBase,
                            0LL);
  if ( !shopEventItemDrawBase )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive(shopEventItemDrawBase, v9 & 1, 0LL);
  shopEventItemDrawBase = (UnityEngine_GameObject_o *)this->fields.giftButtonControl;
  if ( !shopEventItemDrawBase )
    goto LABEL_19;
  shopEventItemDrawBase = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)shopEventItemDrawBase, 0LL);
  if ( !shopEventItemDrawBase )
    goto LABEL_19;
  transform = UnityEngine_GameObject__get_transform(shopEventItemDrawBase, 0LL);
  if ( !ShopRootConstants_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
  *(UnityEngine_Vector3_o *)&v11 = ShopRootConstants__GetGiftButtonPos(v9 & 1, state, 0LL);
  if ( !transform )
    goto LABEL_19;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v11, 0LL);
  if ( (v9 & 1) == 0 )
    return;
  shopEventItemDrawBase = (UnityEngine_GameObject_o *)this->fields.shopEventItemDrawBase;
  if ( !shopEventItemDrawBase )
LABEL_19:
    sub_1BC3264(shopEventItemDrawBase, *(_QWORD *)&state);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t state; // w8
  System_Collections_IEnumerator_o *v7; // x1
  Il2CppObject *Instance; // x20
  System_Action_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w1
  int32_t v13; // w19
  System_String_o *HelpSaveKey; // x0

  if ( (byte_4AFE3BD & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    sub_1BC3008(&Method_ShopRootComponent_OnClickHelpClose__, v3);
    sub_1BC3008(&ShopRootConstants_TypeInfo, v4);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4AFE3BD = 1;
  }
  state = this->fields.state;
  switch ( state )
  {
    case 1:
      v7 = ShopRootComponent__WaitPurchase(this, method);
      UnityEngine_MonoBehaviour__StartCoroutine_70019872((UnityEngine_MonoBehaviour_o *)this, v7, 0LL);
      return;
    case 2:
    case 4:
      return;
    case 3:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v9 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, (intptr_t)Method_ShopRootComponent_OnClickHelpClose__, 0LL);
      if ( !Instance )
        goto LABEL_21;
      v12 = 20;
      goto LABEL_18;
    case 5:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v9 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, (intptr_t)Method_ShopRootComponent_OnClickHelpClose__, 0LL);
      if ( !Instance )
        goto LABEL_21;
      v12 = 47;
      goto LABEL_18;
    case 6:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v9 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, (intptr_t)Method_ShopRootComponent_OnClickHelpClose__, 0LL);
      if ( !Instance )
        goto LABEL_21;
      v12 = 19;
      goto LABEL_18;
    default:
      if ( state == 20 )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v9 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
        System_Action___ctor(v9, (Il2CppObject *)this, (intptr_t)Method_ShopRootComponent_OnClickHelpClose__, 0LL);
        if ( Instance )
        {
          v12 = 1029;
          goto LABEL_18;
        }
LABEL_21:
        sub_1BC3264(v10, v11);
      }
      if ( state != 22 )
        return;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v9 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, (intptr_t)Method_ShopRootComponent_OnClickHelpClose__, 0LL);
      if ( !Instance )
        goto LABEL_21;
      v12 = 103;
LABEL_18:
      CommonUI__OpenTutorialImageDialog_30756884((CommonUI_o *)Instance, v12, -1, v9, 0LL, 0LL, 0LL);
      v13 = this->fields.state;
      if ( !ShopRootConstants_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
      HelpSaveKey = ShopRootConstants__GetHelpSaveKey(v13, 0LL);
      UnityEngine_PlayerPrefs__SetInt(HelpSaveKey, 1, 0LL);
      UnityEngine_PlayerPrefs__Save(0LL);
      return;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopRootComponent__OpenLimitCountSealInfoDialog(
        ShopRootComponent_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  Il2CppObject *Master_object; // x0
  __int64 v13; // x1
  System_String_o *LimitCountSealedDialogMessage; // x0
  SummonInfoDlgComponent_o *limitCountSealInfoDlg; // x21
  System_String_o *v16; // x20
  System_String_o *v17; // x22
  SummonInfoDlgComponent_CallbackFunc_o *v18; // x23

  if ( (byte_4AFE3A5 & 1) == 0 )
  {
    sub_1BC3008(&SummonInfoDlgComponent_CallbackFunc_TypeInfo, *(_QWORD *)&svtId);
    sub_1BC3008(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v7);
    sub_1BC3008(&DataManager_TypeInfo, v8);
    sub_1BC3008(&LocalizationManager_TypeInfo, v9);
    sub_1BC3008(&Method_ShopRootComponent_EndLimitCountSealInfoDialog__, v10);
    sub_1BC3008(&StringLiteral_8194/*"LIMIT_COUNT_SEALED_TITLE"*/, v11);
    byte_4AFE3A5 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !Master_object )
    goto LABEL_10;
  LimitCountSealedDialogMessage = ServantLimitImageMaster__GetLimitCountSealedDialogMessage(
                                    (ServantLimitImageMaster_o *)Master_object,
                                    svtId,
                                    limitCount,
                                    0LL);
  limitCountSealInfoDlg = this->fields.limitCountSealInfoDlg;
  v16 = LimitCountSealedDialogMessage;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_8194/*"LIMIT_COUNT_SEALED_TITLE"*/, 0LL);
  v18 = (SummonInfoDlgComponent_CallbackFunc_o *)sub_1BC3254(SummonInfoDlgComponent_CallbackFunc_TypeInfo);
  SummonInfoDlgComponent_CallbackFunc___ctor(
    v18,
    (Il2CppObject *)this,
    (intptr_t)Method_ShopRootComponent_EndLimitCountSealInfoDialog__,
    0LL);
  if ( !limitCountSealInfoDlg )
LABEL_10:
    sub_1BC3264(Master_object, v13);
  SummonInfoDlgComponent__OpenInfoMessageDlg(limitCountSealInfoDlg, v17, v16, v18, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopRootComponent__OpenStonePurchaseMenu(
        ShopRootComponent_o *this,
        int32_t state,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *Instance; // x20
  StonePurchaseMenu_CallbackFunc_o *v10; // x21
  System_Action_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1

  if ( (byte_4AFE3D1 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, *(_QWORD *)&state);
    sub_1BC3008(&StonePurchaseMenu_CallbackFunc_TypeInfo, v5);
    sub_1BC3008(&Method_ShopRootComponent_CloseStonePurchaseMenu__, v6);
    sub_1BC3008(&Method_ShopRootComponent_RefreshInfo__, v7);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    byte_4AFE3D1 = 1;
  }
  if ( state == 10 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v10 = (StonePurchaseMenu_CallbackFunc_o *)sub_1BC3254(StonePurchaseMenu_CallbackFunc_TypeInfo);
    StonePurchaseMenu_CallbackFunc___ctor(
      v10,
      (Il2CppObject *)this,
      Method_ShopRootComponent_CloseStonePurchaseMenu__,
      0LL);
    v11 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
    System_Action___ctor(v11, (Il2CppObject *)this, Method_ShopRootComponent_RefreshInfo__, 0LL);
    if ( !Instance )
      sub_1BC3264(v12, v13);
    CommonUI__OpenStonePurchaseMenu((CommonUI_o *)Instance, v10, v11, 0LL);
  }
}


void __fastcall ShopRootComponent__OpenStorageDetailCheck(ShopRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ShopSceneListViewControlHelper_o *listViewHelper; // x0
  ShopBuyItemListViewItem_o *ShopBuyItemListViewItem; // x20
  int32_t KindByShopState; // w0
  BuyStorageConfirmDialogComponent_o *buyStorageConfirmDialog; // x22
  int32_t buyCount; // w21
  int32_t v9; // w23
  System_Action_int__o *v10; // x24

  if ( (byte_4AFE3C9 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_int__TypeInfo, method);
    sub_1BC3008(&Method_ShopRootComponent_CloseStorageDetailCheckConfirm__, v3);
    byte_4AFE3C9 = 1;
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
        v9 = KindByShopState,
        v10 = (System_Action_int__o *)sub_1BC3254(System_Action_int__TypeInfo),
        System_Action_int____ctor(
          v10,
          (Il2CppObject *)this,
          Method_ShopRootComponent_CloseStorageDetailCheckConfirm__,
          0LL),
        !buyStorageConfirmDialog) )
  {
    sub_1BC3264(listViewHelper, method);
  }
  BuyStorageConfirmDialogComponent__Open(buyStorageConfirmDialog, v9, ShopBuyItemListViewItem, buyCount, v10, 0LL);
}


void __fastcall ShopRootComponent__PlayLvExceedItemReleaseEffect(
        ShopRootComponent_o *this,
        ShopBuyItemListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x20
  BalanceConfig_c *v12; // x0
  ShopBuyItemListViewItem_o *v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  ShopBuyItemListViewItem_o **v16; // x22
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  __int64 v19; // x2
  const MethodInfo *v20; // x3
  __int64 v21; // x8
  __int64 v22; // x8
  int v23; // w21
  QuestRewardInfo_o *v24; // x22
  _QWORD *v25; // x21
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  __int64 v28; // x8
  __int64 v29; // x8
  __int64 v30; // x8
  _DWORD *v31; // x9
  int32_t buyCount; // w8
  Il2CppObject *Instance; // x19
  AvalonSceneManager_c *v34; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v36; // x21

  if ( (byte_4AFE3B0 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, item);
    sub_1BC3008(&AvalonSceneManager_TypeInfo, v5);
    sub_1BC3008(&BalanceConfig_TypeInfo, v6);
    sub_1BC3008(&QuestRewardInfo_TypeInfo, v7);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1BC3008(&Method_ShopRootComponent___c__DisplayClass102_0__PlayLvExceedItemReleaseEffect_b__0__, v9);
    sub_1BC3008(&ShopRootComponent___c__DisplayClass102_0_TypeInfo, v10);
    byte_4AFE3B0 = 1;
  }
  v11 = sub_1BC3254(ShopRootComponent___c__DisplayClass102_0_TypeInfo);
  ShopRootComponent___c__DisplayClass102_0___ctor((ShopRootComponent___c__DisplayClass102_0_o *)v11, 0LL);
  if ( !v11 )
    goto LABEL_22;
  *(_QWORD *)(v11 + 24) = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v11 + 24), (int32_t)this, v14, v15);
  *(_QWORD *)(v11 + 32) = item;
  v16 = (ShopBuyItemListViewItem_o **)(v11 + 32);
  sub_1BC2FAC((CGThumbnailListItem_o *)(v11 + 32), (int32_t)item, v17, v18);
  if ( !*(_QWORD *)(v11 + 32) )
    goto LABEL_22;
  v21 = *(_QWORD *)(*(_QWORD *)(v11 + 32) + 112LL);
  if ( !v21 )
    goto LABEL_22;
  v22 = *(_QWORD *)(v21 + 56);
  if ( !v22 )
    goto LABEL_22;
  if ( !*(_DWORD *)(v22 + 24) )
LABEL_23:
    sub_1BC326C(v12, v13, v19);
  v23 = *(_DWORD *)(v22 + 32);
  v12 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v12 = BalanceConfig_TypeInfo;
  }
  if ( v23 == v12->static_fields->LvExceedItemId )
  {
    v24 = (QuestRewardInfo_o *)sub_1BC3254(QuestRewardInfo_TypeInfo);
    QuestRewardInfo___ctor(v24, 0LL);
    *(_QWORD *)(v11 + 16) = v24;
    v25 = (_QWORD *)(v11 + 16);
    sub_1BC2FAC((CGThumbnailListItem_o *)(v11 + 16), (int32_t)v24, v26, v27);
    v28 = *(_QWORD *)(v11 + 32);
    if ( !v28 )
      goto LABEL_22;
    v29 = *(_QWORD *)(v28 + 112);
    if ( !v29 )
      goto LABEL_22;
    v30 = *(_QWORD *)(v29 + 56);
    if ( !v30 )
      goto LABEL_22;
    if ( *(_DWORD *)(v30 + 24) )
    {
      v31 = (_DWORD *)*v25;
      if ( *v25 )
      {
        v31[5] = *(_DWORD *)(v30 + 32);
        buyCount = this->fields.buyCount;
        v31[4] = 2;
        v31[6] = buyCount;
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v34 = AvalonSceneManager_TypeInfo;
        if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
          v34 = AvalonSceneManager_TypeInfo;
        }
        DEFAULT_FADE_TIME = v34->static_fields->DEFAULT_FADE_TIME;
        v36 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
        System_Action___ctor(
          v36,
          (Il2CppObject *)v11,
          Method_ShopRootComponent___c__DisplayClass102_0__PlayLvExceedItemReleaseEffect_b__0__,
          0LL);
        if ( Instance )
        {
          CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v36, 0LL);
          return;
        }
      }
LABEL_22:
      sub_1BC3264(v12, v13);
    }
    goto LABEL_23;
  }
  v13 = *v16;
  if ( !*v16 )
    goto LABEL_22;
  ShopRootComponent__ShowNormalItemDialog(this, v13, v13->fields._Shop_k__BackingField, v20);
}


void __fastcall ShopRootComponent__PlayServantCostumeReleaseEffect(
        ShopRootComponent_o *this,
        ShopEntity_o *shopEntity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x2
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v18; // x8
  CommonUI_o *v19; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v21; // x21

  if ( (byte_4AFE3B6 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, shopEntity);
    sub_1BC3008(&AvalonSceneManager_TypeInfo, v5);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1BC3008(&Method_ShopRootComponent___c__DisplayClass109_0__PlayServantCostumeReleaseEffect_b__0__, v7);
    sub_1BC3008(&ShopRootComponent___c__DisplayClass109_0_TypeInfo, v8);
    byte_4AFE3B6 = 1;
  }
  v9 = sub_1BC3254(ShopRootComponent___c__DisplayClass109_0_TypeInfo);
  ShopRootComponent___c__DisplayClass109_0___ctor((ShopRootComponent___c__DisplayClass109_0_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_8;
  *(_QWORD *)(v9 + 16) = shopEntity;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v9 + 16), (int32_t)shopEntity, v12, v13);
  *(_QWORD *)(v9 + 24) = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v9 + 24), (int32_t)this, v14, v15);
  ShopRootComponent__SetActionBG(this, 1, v16);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v18 = AvalonSceneManager_TypeInfo;
  v19 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v18 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v18->static_fields->DEFAULT_FADE_TIME;
  v21 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(
    v21,
    (Il2CppObject *)v9,
    Method_ShopRootComponent___c__DisplayClass109_0__PlayServantCostumeReleaseEffect_b__0__,
    0LL);
  if ( !v19 )
LABEL_8:
    sub_1BC3264(v10, v11);
  CommonUI__maskFadeout(v19, 1, DEFAULT_FADE_TIME, v21, 0LL);
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
    sub_1BC3264(BackVoiceMasterKey, v6);
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
    sub_1BC3264(EnterVoiceMasterKey, v6);
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
    goto LABEL_15;
  StandFigureBack__Init(standFigureBack, 0LL);
  standFigureBack = (StandFigureBack_o *)this->fields.backgroundTexture;
  if ( !standFigureBack )
    goto LABEL_15;
  ExUITexture__ClearImage((ExUITexture_o *)standFigureBack, 0LL);
  standFigureBack = (StandFigureBack_o *)this->fields.shopPlayVoiceComponent;
  if ( !standFigureBack )
    goto LABEL_15;
  ShopPlayVoiceComponent__QuitShopVoice((ShopPlayVoiceComponent_o *)standFigureBack, method);
  standFigureBack = (StandFigureBack_o *)this->fields.listViewHelper;
  if ( !standFigureBack )
    goto LABEL_15;
  ShopSceneListViewControlHelper__SetListViewOnSceneQuit((ShopSceneListViewControlHelper_o *)standFigureBack, 0LL);
  ShopRootComponent__CloseEventItemWindow(this, v4);
  standFigureBack = (StandFigureBack_o *)this->fields.buyItemConfirmMenu;
  if ( !standFigureBack )
    goto LABEL_15;
  ShopBuyItemConfirmMenu__Init((ShopBuyItemConfirmMenu_o *)standFigureBack, 0LL);
  standFigureBack = (StandFigureBack_o *)this->fields.buyBulkItemConfirmMenu;
  if ( !standFigureBack )
    goto LABEL_15;
  ShopBuyBulkItemConfirmMenu__Init((ShopBuyBulkItemConfirmMenu_o *)standFigureBack, 0LL);
  standFigureBack = (StandFigureBack_o *)this->fields.ApSeedExchangeConfirmMenu;
  if ( !standFigureBack )
    goto LABEL_15;
  ShopBuyItemConfirmMenu__Init((ShopBuyItemConfirmMenu_o *)standFigureBack, 0LL);
  standFigureBack = (StandFigureBack_o *)this->fields.ApSeedBulkExchangeConfirmMenu;
  if ( !standFigureBack )
    goto LABEL_15;
  ShopBuyBulkItemConfirmMenu__Init((ShopBuyBulkItemConfirmMenu_o *)standFigureBack, 0LL);
  standFigureBack = (StandFigureBack_o *)this->fields.servantSellConfirmMenu;
  if ( !standFigureBack )
    goto LABEL_15;
  ServantSellConfirmMenu__Init((ServantSellConfirmMenu_o *)standFigureBack, 0LL);
  standFigureBack = (StandFigureBack_o *)this->fields.servantSellMenu;
  if ( !standFigureBack
    || (ServantSellMenu__Init((ServantSellMenu_o *)standFigureBack, 0LL),
        (standFigureBack = (StandFigureBack_o *)this->fields.shopResetConfirmDialog) == 0LL)
    || (ShopResetConfirmDialogComponent__Init((ShopResetConfirmDialogComponent_o *)standFigureBack, method),
        (standFigureBack = (StandFigureBack_o *)this->fields.purchaseShopCheckWarningDialog) == 0LL)
    || (PurchaseShopCheckWarningDialog__Init((PurchaseShopCheckWarningDialog_o *)standFigureBack, 0LL),
        (standFigureBack = (StandFigureBack_o *)this->fields.informationPanel) == 0LL) )
  {
LABEL_15:
    sub_1BC3264(standFigureBack, method);
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

  if ( (byte_4AFE3C1 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_22163/*"ok"*/, result);
    byte_4AFE3C1 = 1;
  }
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_22163/*"ok"*/, 0LL) )
  {
    listViewHelper = this->fields.listViewHelper;
    this->fields.inputState = 4;
    if ( !listViewHelper )
      sub_1BC3264(0LL, v5);
    ShopSceneListViewControlHelper__SetListViewOnQuitHelp(listViewHelper, this->fields.state, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopRootComponent__RefreshCurrencyInfo(
        ShopRootComponent_o *this,
        int32_t state,
        const MethodInfo *method)
{
  ShopCurrencyInfoController_o *currencyInfoController; // x20
  __int64 CurrencyKind; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3

  if ( (byte_4AFE39D & 1) == 0 )
  {
    sub_1BC3008(&ShopBuyItemListViewManager_TypeInfo, *(_QWORD *)&state);
    byte_4AFE39D = 1;
  }
  currencyInfoController = this->fields.currencyInfoController;
  if ( !ShopBuyItemListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ShopBuyItemListViewManager_TypeInfo);
  CurrencyKind = ShopBuyItemListViewManager__GetCurrencyKind(state, 0LL);
  if ( !currencyInfoController )
    sub_1BC3264(CurrencyKind, v7);
  ShopCurrencyInfoController__RefreshCurrencyInfo(currencyInfoController, CurrencyKind, state, v8);
}


void __fastcall ShopRootComponent__RefreshInfo(ShopRootComponent_o *this, const MethodInfo *method)
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
  UserGameEntity_o *SelfUserGame; // x20
  void *Instance; // x0
  __int64 v14; // x1
  int32_t *v15; // x21
  UILabel_o *stoneInfoLabel; // x22
  int32_t stone; // w23
  UILabel_o *manaInfoLabel; // x22
  UILabel_o *rarePriInfoLabel; // x22
  Il2CppObject *MasterData_object; // x0
  UILabel_o *stoneFragmentsInfoLabel; // x22
  UserItemMaster_o *v22; // x20
  __int64 v23; // x1
  UILabel_o *anonymousInfoLabel; // x22
  NetworkManager_c *v25; // x0
  __int64 v26; // x1
  UILabel_o *grailFragmentsInfoLabel; // x22
  NetworkManager_c *v28; // x0
  BalanceConfig_c *v29; // x8
  int64_t userIdNumber; // x23
  __int64 v31; // x1
  UILabel_o *apSeedInfoLabel; // x22
  NetworkManager_c *v33; // x0
  const MethodInfo *v34; // x1
  UISprite_o *apSeedIcon; // x22
  __int64 v36; // x1
  UILabel_o *purePriInfo2Label; // x22
  NetworkManager_c *v38; // x0
  __int64 v39; // x1
  NetworkManager_c *v40; // x0
  UILabel_o *purePriShopResetInfoLabel; // x21
  __int64 v42; // x1
  UILabel_o *revivalItemInfoLabel; // x21
  NetworkManager_c *v44; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v46; // x0
  UnityEngine_GameObject_o *v47; // x0
  UnityEngine_GameObject_o *v48; // x0
  const MethodInfo *v49; // x2

  if ( (byte_4AFE39B & 1) == 0 )
  {
    sub_1BC3008(&AtlasManager_TypeInfo, method);
    sub_1BC3008(&BalanceConfig_TypeInfo, v3);
    sub_1BC3008(&Method_DataManager_GetMasterData_ItemMaster___, v4);
    sub_1BC3008(&Method_DataManager_GetMasterData_UserItemMaster___, v5);
    sub_1BC3008(&LocalizationManager_TypeInfo, v6);
    sub_1BC3008(&NetworkManager_TypeInfo, v7);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1BC3008(&StringLiteral_20117/*"img_bg_evocation"*/, v9);
    sub_1BC3008(&StringLiteral_20128/*"img_bg_pureprism_itemstock_resetticket"*/, v10);
    sub_1BC3008(&StringLiteral_20127/*"img_bg_pp"*/, v11);
    byte_4AFE39B = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_71;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !SelfUserGame )
    goto LABEL_71;
  v15 = (int32_t *)Instance;
  stoneInfoLabel = this->fields.stoneInfoLabel;
  stone = SelfUserGame->fields.stone;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = LocalizationManager__GetNumberFormat(stone, 0LL);
  if ( !stoneInfoLabel )
    goto LABEL_71;
  UILabel__set_text(stoneInfoLabel, (System_String_o *)Instance, 0LL);
  manaInfoLabel = this->fields.manaInfoLabel;
  Instance = LocalizationManager__GetNumberFormat(SelfUserGame->fields.mana, 0LL);
  if ( !manaInfoLabel )
    goto LABEL_71;
  UILabel__set_text(manaInfoLabel, (System_String_o *)Instance, 0LL);
  rarePriInfoLabel = this->fields.rarePriInfoLabel;
  Instance = LocalizationManager__GetNumberFormat(SelfUserGame->fields.rarePri, 0LL);
  if ( !rarePriInfoLabel )
    goto LABEL_71;
  UILabel__set_text(rarePriInfoLabel, (System_String_o *)Instance, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_71;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserItemMaster___);
  stoneFragmentsInfoLabel = this->fields.stoneFragmentsInfoLabel;
  v22 = (UserItemMaster_o *)MasterData_object;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4AFC1F1 )
  {
    sub_1BC3008(&NetworkManager_TypeInfo, v14);
    byte_4AFC1F1 = 1;
  }
  Instance = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = NetworkManager_TypeInfo;
  }
  if ( !v15 )
    goto LABEL_71;
  if ( !v22 )
    goto LABEL_71;
  Instance = UserItemMaster__GetEntityDefinitely(v22, *(_QWORD *)(*((_QWORD *)Instance + 23) + 64LL), v15[23], 0LL);
  if ( !Instance )
    goto LABEL_71;
  Instance = LocalizationManager__GetNumberFormat(*((_DWORD *)Instance + 7), 0LL);
  if ( !stoneFragmentsInfoLabel )
    goto LABEL_71;
  UILabel__set_text(stoneFragmentsInfoLabel, (System_String_o *)Instance, 0LL);
  anonymousInfoLabel = this->fields.anonymousInfoLabel;
  if ( !byte_4AFC1F1 )
  {
    sub_1BC3008(&NetworkManager_TypeInfo, v23);
    byte_4AFC1F1 = 1;
  }
  v25 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v25 = NetworkManager_TypeInfo;
  }
  Instance = UserItemMaster__GetEntityDefinitely(v22, v25->static_fields->userIdNumber, v15[24], 0LL);
  if ( !Instance )
    goto LABEL_71;
  Instance = LocalizationManager__GetNumberFormat(*((_DWORD *)Instance + 7), 0LL);
  if ( !anonymousInfoLabel )
    goto LABEL_71;
  UILabel__set_text(anonymousInfoLabel, (System_String_o *)Instance, 0LL);
  grailFragmentsInfoLabel = this->fields.grailFragmentsInfoLabel;
  if ( !byte_4AFC1F1 )
  {
    sub_1BC3008(&NetworkManager_TypeInfo, v26);
    byte_4AFC1F1 = 1;
  }
  v28 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v28 = NetworkManager_TypeInfo;
  }
  v29 = BalanceConfig_TypeInfo;
  userIdNumber = v28->static_fields->userIdNumber;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v29 = BalanceConfig_TypeInfo;
  }
  Instance = UserItemMaster__GetEntityDefinitely(v22, userIdNumber, v29->static_fields->LvExceedDewDropItemId, 0LL);
  if ( !Instance )
    goto LABEL_71;
  Instance = LocalizationManager__GetNumberFormat(*((_DWORD *)Instance + 7), 0LL);
  if ( !grailFragmentsInfoLabel )
    goto LABEL_71;
  UILabel__set_text(grailFragmentsInfoLabel, (System_String_o *)Instance, 0LL);
  apSeedInfoLabel = this->fields.apSeedInfoLabel;
  if ( !byte_4AFC1F1 )
  {
    sub_1BC3008(&NetworkManager_TypeInfo, v31);
    byte_4AFC1F1 = 1;
  }
  v33 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v33 = NetworkManager_TypeInfo;
  }
  Instance = UserItemMaster__GetEntityDefinitely(
               v22,
               v33->static_fields->userIdNumber,
               BalanceConfig_TypeInfo->static_fields->ApSeedItemId,
               0LL);
  if ( !Instance )
    goto LABEL_71;
  Instance = LocalizationManager__GetNumberFormat(*((_DWORD *)Instance + 7), 0LL);
  if ( !apSeedInfoLabel )
    goto LABEL_71;
  UILabel__set_text(apSeedInfoLabel, (System_String_o *)Instance, 0LL);
  ShopRootComponent__UpdateApLabel(this, v34);
  apSeedIcon = this->fields.apSeedIcon;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetItem(apSeedIcon, 103, 0LL);
  AtlasManager__SetItem(this->fields.apIcon, 47, 0LL);
  Instance = this->fields.purePriInfo;
  if ( !Instance )
    goto LABEL_71;
  Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_71;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  purePriInfo2Label = this->fields.purePriInfo2Label;
  if ( !byte_4AFC1F1 )
  {
    sub_1BC3008(&NetworkManager_TypeInfo, v36);
    byte_4AFC1F1 = 1;
  }
  v38 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v38 = NetworkManager_TypeInfo;
  }
  Instance = UserItemMaster__GetEntityDefinitely(
               v22,
               v38->static_fields->userIdNumber,
               BalanceConfig_TypeInfo->static_fields->PurePriItemId,
               0LL);
  if ( !Instance )
    goto LABEL_71;
  Instance = LocalizationManager__GetNumberFormat(*((_DWORD *)Instance + 7), 0LL);
  if ( !purePriInfo2Label )
    goto LABEL_71;
  UILabel__set_text(purePriInfo2Label, (System_String_o *)Instance, 0LL);
  AtlasManager__SetShopBanner_39645084(this->fields.purePriInfo2, (System_String_o *)StringLiteral_20127/*"img_bg_pp"*/, 0LL);
  if ( !byte_4AFC1F1 )
  {
    sub_1BC3008(&NetworkManager_TypeInfo, v39);
    byte_4AFC1F1 = 1;
  }
  v40 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v40 = NetworkManager_TypeInfo;
  }
  Instance = UserItemMaster__GetEntityDefinitely(v22, v40->static_fields->userIdNumber, v15[25], 0LL);
  if ( !Instance )
    goto LABEL_71;
  purePriShopResetInfoLabel = this->fields.purePriShopResetInfoLabel;
  Instance = LocalizationManager__GetNumberFormat(*((_DWORD *)Instance + 7), 0LL);
  if ( !purePriShopResetInfoLabel )
    goto LABEL_71;
  UILabel__set_text(purePriShopResetInfoLabel, (System_String_o *)Instance, 0LL);
  AtlasManager__SetShopBanner_39645084(this->fields.purePriShopResetInfo, (System_String_o *)StringLiteral_20128/*"img_bg_pureprism_itemstock_resetticket"*/, 0LL);
  Instance = this->fields.revivalItemInfo;
  if ( !Instance )
    goto LABEL_71;
  Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_71;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  revivalItemInfoLabel = this->fields.revivalItemInfoLabel;
  if ( !byte_4AFC1F1 )
  {
    sub_1BC3008(&NetworkManager_TypeInfo, v42);
    byte_4AFC1F1 = 1;
  }
  v44 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v44 = NetworkManager_TypeInfo;
  }
  Instance = UserItemMaster__GetEntityDefinitely(
               v22,
               v44->static_fields->userIdNumber,
               BalanceConfig_TypeInfo->static_fields->RevivalItemId,
               0LL);
  if ( !Instance )
    goto LABEL_71;
  Instance = LocalizationManager__GetNumberFormat(*((_DWORD *)Instance + 7), 0LL);
  if ( !revivalItemInfoLabel )
    goto LABEL_71;
  UILabel__set_text(revivalItemInfoLabel, (System_String_o *)Instance, 0LL);
  AtlasManager__SetShopBanner_39645084(this->fields.revivalItemInfo, (System_String_o *)StringLiteral_20117/*"img_bg_evocation"*/, 0LL);
  Instance = this->fields.anonymousInfoLabel;
  if ( !Instance )
    goto LABEL_71;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  Instance = GameObjectExtensions__GetParent(gameObject, 0LL);
  if ( !Instance )
    goto LABEL_71;
  v46 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  GameObjectExtensions__SetLocalPositionX(v46, -94.0, 0LL);
  Instance = this->fields.grailFragmentsInfoLabel;
  if ( !Instance
    || (v47 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL),
        (Instance = GameObjectExtensions__GetParent(v47, 0LL)) == 0LL)
    || (v48 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL),
        GameObjectExtensions__SetLocalPositionX(v48, -273.0, 0LL),
        (Instance = this->fields.giftButtonControl) == 0LL) )
  {
LABEL_71:
    sub_1BC3264(Instance, v14);
  }
  GiftButtonCtrl__InvalidateGiftInfo((GiftButtonCtrl_o *)Instance, 0LL);
  ShopRootComponent__RefreshCurrencyInfo(this, this->fields.state, v49);
}


void __fastcall ShopRootComponent__RequestEnd(ShopRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x2
  __int64 v7; // x1
  ServantSellConfirmMenu_o *servantSellConfirmMenu; // x0
  ServantSellConfirmMenu_o *v9; // x20
  System_Action_int__o *v10; // x21

  if ( (byte_4AFE3AE & 1) == 0 )
  {
    sub_1BC3008(&System_Action_int__TypeInfo, method);
    sub_1BC3008(&Method_ShopRootComponent__RequestEnd_b__100_0__, v3);
    byte_4AFE3AE = 1;
  }
  this->fields.inputState = 3;
  ShopRootComponent__RefreshInfo(this, method);
  ShopRootComponent__CloseItemConfirm(this, v4);
  ShopRootComponent__CloseSellServantConfirm(this, v5);
  ShopRootComponent__SetActionBG(this, 0, v6);
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
        v9 = this->fields.servantSellConfirmMenu;
        v10 = (System_Action_int__o *)sub_1BC3254(System_Action_int__TypeInfo);
        System_Action_int____ctor(v10, (Il2CppObject *)this, Method_ShopRootComponent__RequestEnd_b__100_0__, 0LL);
        if ( v9 )
        {
          ServantSellConfirmMenu__OpenCommandCodeRemoveResult(v9, v10, 0LL);
          return;
        }
      }
LABEL_10:
      sub_1BC3264(servantSellConfirmMenu, v7);
    }
  }
}


void __fastcall ShopRootComponent__RequestSellServant(ShopRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  NetworkManager_ResultCallbackFunc_o *v8; // x20
  Il2CppObject *Request_object; // x0
  __int64 v10; // x1

  if ( (byte_4AFE3B9 & 1) == 0 )
  {
    sub_1BC3008(&Method_NetworkManager_getRequest_SellServantRequest___, method);
    sub_1BC3008(&NetworkManager_TypeInfo, v4);
    sub_1BC3008(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    sub_1BC3008(&Method_ShopRootComponent_EndRequestSellServant__, v6);
    sub_1BC3008(&StringLiteral_21997/*"ng"*/, v7);
    byte_4AFE3B9 = 1;
  }
  if ( this->fields.selectedServantIds )
  {
    v8 = (NetworkManager_ResultCallbackFunc_o *)sub_1BC3254(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_ShopRootComponent_EndRequestSellServant__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v8,
                       (const MethodInfo_3089B54 *)Method_NetworkManager_getRequest_SellServantRequest___);
    if ( !Request_object )
      sub_1BC3264(0LL, v10);
    SellServantRequest__beginRequest(
      (SellServantRequest_o *)Request_object,
      this->fields.selectedServantIds,
      this->fields.selectedCommandCodeIds,
      0LL);
  }
  else
  {
    ShopRootComponent__EndRequestSellServant(this, (System_String_o *)StringLiteral_21997/*"ng"*/, v2);
  }
}


void __fastcall ShopRootComponent__RequestShop(ShopRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  ShopSceneListViewControlHelper_o *listViewHelper; // x0
  ShopBuyItemListViewItem_o *ShopBuyItemListViewItem; // x0
  const MethodInfo *v8; // x1
  ShopBuyItemListViewItem_o *v9; // x20
  NetworkManager_ResultCallbackFunc_o *v10; // x21
  struct ShopEntity_o *Shop_k__BackingField; // x8

  if ( (byte_4AFE3AD & 1) == 0 )
  {
    sub_1BC3008(&Method_NetworkManager_getRequest_PurchaseRequest___, method);
    sub_1BC3008(&NetworkManager_TypeInfo, v3);
    sub_1BC3008(&NetworkManager_ResultCallbackFunc_TypeInfo, v4);
    sub_1BC3008(&Method_ShopRootComponent_EndRequestShop__, v5);
    byte_4AFE3AD = 1;
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
    v9 = ShopBuyItemListViewItem;
    if ( ShopBuyItemListViewItem->fields._Shop_k__BackingField )
    {
      v10 = (NetworkManager_ResultCallbackFunc_o *)sub_1BC3254(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v10,
        (Il2CppObject *)this,
        Method_ShopRootComponent_EndRequestShop__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      listViewHelper = (ShopSceneListViewControlHelper_o *)NetworkManager__getRequest_object_(
                                                             v10,
                                                             (const MethodInfo_3089B54 *)Method_NetworkManager_getRequest_PurchaseRequest___);
      Shop_k__BackingField = v9->fields._Shop_k__BackingField;
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
      sub_1BC3264(listViewHelper, method);
    }
  }
  ShopRootComponent__RequestEnd(this, v8);
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
  ShopSceneListViewControlHelper_o *listViewHelper; // x0
  ShopBuyItemListViewItem_o *ShopBuyItemListViewItem; // x0
  const MethodInfo *v20; // x2
  const MethodInfo *v21; // x4
  ShopBuyItemListViewItem_o *v22; // x22
  ServantLimitImageMaster_o *v23; // x23
  bool v24; // w24
  int32_t TargetId; // w0
  const MethodInfo *v26; // x3
  Il2CppObject *Master_object; // x23
  Il2CppObject *Entity; // x23
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  System_String_o *v32; // x20
  Il2CppObject *v33; // x0
  System_String_o *v34; // x0
  System_String_o *v35; // x21
  Il2CppObject *Name; // x0
  System_String_o *v37; // x0
  SummonInfoDlgComponent_o *limitCountSealInfoDlg; // x21
  System_String_o *v39; // x22
  SummonInfoDlgComponent_CallbackFunc_o *v40; // x23
  int klass_high; // [xsp+Ch] [xbp-34h] BYREF

  v5 = index;
  if ( (byte_4AFE3A2 & 1) == 0 )
  {
    sub_1BC3008(&SummonInfoDlgComponent_CallbackFunc_TypeInfo, *(_QWORD *)&index);
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v7);
    sub_1BC3008(&Method_DataManager_GetMaster_CombineLimitReleaseMaster___, v8);
    sub_1BC3008(&Method_DataManager_GetMaster_ServantMaster___, v9);
    sub_1BC3008(&DataManager_TypeInfo, v10);
    sub_1BC3008(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11);
    sub_1BC3008(&int_TypeInfo, v12);
    sub_1BC3008(&LocalizationManager_TypeInfo, v13);
    sub_1BC3008(&Method_ShopRootComponent_EndLimitCountSealInfoDialog__, v14);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1BC3008(&StringLiteral_3568/*"COMBINE_LIMIT_SEALED_TITLE"*/, v16);
    sub_1BC3008(&StringLiteral_3567/*"COMBINE_LIMIT_SEALED_MESSAGE_{0}"*/, v17);
    byte_4AFE3A2 = 1;
  }
  if ( !this->fields.inputState )
  {
    listViewHelper = this->fields.listViewHelper;
    if ( listViewHelper )
    {
      ShopBuyItemListViewItem = ShopSceneListViewControlHelper__GetShopBuyItemListViewItem(listViewHelper, v5, 0LL);
      v22 = ShopBuyItemListViewItem;
      if ( this->fields.state != 6
        || ShopRootComponent__GetShopItemBuyNum(
             (ShopRootComponent_o *)ShopBuyItemListViewItem,
             ShopBuyItemListViewItem,
             v20) > 0 )
      {
        goto LABEL_7;
      }
      listViewHelper = (ShopSceneListViewControlHelper_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( listViewHelper )
      {
        listViewHelper = (ShopSceneListViewControlHelper_o *)DataManager__GetMasterData_object_(
                                                               (DataManager_o *)listViewHelper,
                                                               (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
        if ( v22 )
        {
          v23 = (ServantLimitImageMaster_o *)listViewHelper;
          listViewHelper = (ShopSceneListViewControlHelper_o *)ShopBuyItemListViewItem__get_TargetId(v22, 0LL);
          if ( v23 )
          {
            v24 = isBulk;
            if ( ServantLimitImageMaster__IsServantLimitCountSeal(v23, (int32_t)listViewHelper, 4, 0LL) )
            {
              this->fields.limitCountSealInfoIndex = v5;
              this->fields.limitCountSealInfoBulk = v24;
              TargetId = ShopBuyItemListViewItem__get_TargetId(v22, 0LL);
              ShopRootComponent__OpenLimitCountSealInfoDialog(this, TargetId, 0, v26);
              return;
            }
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ServantMaster___);
            listViewHelper = (ShopSceneListViewControlHelper_o *)ShopBuyItemListViewItem__get_TargetId(v22, 0LL);
            if ( Master_object )
            {
              Entity = DataMasterBase_object__object__int___GetEntity(
                         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                         (int32_t)listViewHelper,
                         (const MethodInfo_32AF070 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              listViewHelper = (ShopSceneListViewControlHelper_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_CombineLimitReleaseMaster___);
              *(_QWORD *)&index = Entity ? HIDWORD(Entity[7].klass) : 0xFFFFFFFFLL;
              if ( listViewHelper )
              {
                if ( !CombineLimitReleaseMaster__IsExistSealedLimitCount(
                        (CombineLimitReleaseMaster_o *)listViewHelper,
                        index,
                        0LL) )
                {
LABEL_7:
                  ShopRootComponent__OpenConfirmMenu(this, this->fields.state, v22, isBulk, v21);
                  this->fields.inputState = 2;
                  return;
                }
                this->fields.limitCountSealInfoIndex = v5;
                this->fields.limitCountSealInfoBulk = v24;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                listViewHelper = (ShopSceneListViewControlHelper_o *)LocalizationManager__Get(
                                                                       (System_String_o *)StringLiteral_3568/*"COMBINE_LIMIT_SEALED_TITLE"*/,
                                                                       0LL);
                if ( Entity )
                {
                  v32 = (System_String_o *)listViewHelper;
                  klass_high = HIDWORD(Entity[7].klass);
                  v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &klass_high, v29, v30, v31);
                  v34 = System_String__Format((System_String_o *)StringLiteral_3567/*"COMBINE_LIMIT_SEALED_MESSAGE_{0}"*/, v33, 0LL);
                  listViewHelper = (ShopSceneListViewControlHelper_o *)LocalizationManager__Get(v34, 0LL);
                  if ( v22->fields._Shop_k__BackingField )
                  {
                    v35 = (System_String_o *)listViewHelper;
                    Name = (Il2CppObject *)ShopEntity__getName(v22->fields._Shop_k__BackingField, 0LL);
                    v37 = System_String__Format(v35, Name, 0LL);
                    limitCountSealInfoDlg = this->fields.limitCountSealInfoDlg;
                    v39 = v37;
                    v40 = (SummonInfoDlgComponent_CallbackFunc_o *)sub_1BC3254(SummonInfoDlgComponent_CallbackFunc_TypeInfo);
                    SummonInfoDlgComponent_CallbackFunc___ctor(
                      v40,
                      (Il2CppObject *)this,
                      (intptr_t)Method_ShopRootComponent_EndLimitCountSealInfoDialog__,
                      0LL);
                    if ( limitCountSealInfoDlg )
                    {
                      SummonInfoDlgComponent__OpenInfoMessageDlg(limitCountSealInfoDlg, v32, v39, v40, 0LL);
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
    sub_1BC3264(listViewHelper, *(_QWORD *)&index);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopRootComponent__SelectMenu(ShopRootComponent_o *this, int32_t state, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x20
  ShopPlayVoiceComponent_o *shopPlayVoiceComponent; // x0
  const MethodInfo *v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  ShopRootComponent_o *v14; // x0
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x2
  int32_t v17; // w1
  int32_t v18; // w19
  System_Action_o *v19; // x21
  ShopRootComponent_o *v20; // x0
  const MethodInfo *v21; // x3

  if ( (byte_4AFE39E & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, *(_QWORD *)&state);
    sub_1BC3008(&CoinRoomUtility_TypeInfo, v5);
    sub_1BC3008(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v6);
    sub_1BC3008(&Method_ShopRootComponent___c__DisplayClass82_0__SelectMenu_b__0__, v7);
    sub_1BC3008(&ShopRootComponent___c__DisplayClass82_0_TypeInfo, v8);
    byte_4AFE39E = 1;
  }
  v9 = sub_1BC3254(ShopRootComponent___c__DisplayClass82_0_TypeInfo);
  ShopRootComponent___c__DisplayClass82_0___ctor((ShopRootComponent___c__DisplayClass82_0_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_19;
  *(_QWORD *)(v9 + 16) = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v9 + 16), (int32_t)this, v12, v13);
  *(_DWORD *)(v9 + 24) = state;
  if ( ShopRootComponent__CheckServerLimitTime(v14, state, v15) )
  {
    v17 = *(_DWORD *)(v9 + 24);
    if ( v17 == 17 )
    {
      if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
      if ( CoinRoomUtility__IsTargetQuestClear(0LL) )
      {
        shopPlayVoiceComponent = this->fields.shopPlayVoiceComponent;
        if ( shopPlayVoiceComponent )
        {
          ShopPlayVoiceComponent__StopVoice(shopPlayVoiceComponent, v11);
          shopPlayVoiceComponent = (ShopPlayVoiceComponent_o *)this->fields.topListViewManager;
          if ( shopPlayVoiceComponent )
          {
            this->fields.saveScrollBarValue = ShopTopListViewManager__get_currentScrollBarValue(
                                                (ShopTopListViewManager_o *)shopPlayVoiceComponent,
                                                0LL);
            shopPlayVoiceComponent = (ShopPlayVoiceComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
            if ( shopPlayVoiceComponent )
            {
              AvalonSceneManager__pushScene((AvalonSceneManager_o *)shopPlayVoiceComponent, 90, 1, 0LL, 0LL);
              return;
            }
          }
        }
LABEL_19:
        sub_1BC3264(shopPlayVoiceComponent, v11);
      }
      v17 = *(_DWORD *)(v9 + 24);
    }
    if ( v17 == 15 )
    {
      v18 = 15;
    }
    else
    {
      ShopRootComponent__PlayVoiceEnter(this, v17, v16);
      v18 = *(_DWORD *)(v9 + 24);
    }
    v19 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
    System_Action___ctor(
      v19,
      (Il2CppObject *)v9,
      Method_ShopRootComponent___c__DisplayClass82_0__SelectMenu_b__0__,
      0LL);
    ShopRootComponent__SetFadeOut(v20, v18, v19, v21);
  }
}


void __fastcall ShopRootComponent__SelectSellServantConfirm(ShopRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x20
  ServantSellMenu_o *servantSellMenu; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t tabKind; // w21
  struct System_Int64_array *selectedServantIds; // x22
  bool IsSellEquipedCmdCodeLastServant; // w0
  System_Int64_array *v14; // x22
  ServantSellConfirmMenu_o *servantSellConfirmMenu; // x21
  System_Action_int__o *v16; // x19
  struct ServantSellConfirmMenu_o *v17; // x21
  int32_t v18; // w20
  System_Action_int__o *v19; // x22
  ServantSellConfirmMenu_o *v20; // x0
  int32_t v21; // w1
  System_Int64_array *v22; // x2
  System_Int64_array *v23; // x3
  System_Action_int__o *v24; // x4
  struct ServantSellConfirmMenu_o *v25; // x21
  int32_t v26; // w20
  struct System_Int64_array *v27; // x22
  struct System_Int64_array *selectedCommandCodeIds; // x23
  System_Action_int__o *v29; // x24

  if ( (byte_4AFE3AC & 1) == 0 )
  {
    sub_1BC3008(&System_Action_int__TypeInfo, method);
    sub_1BC3008(&Method_ShopRootComponent_SellServantConfirm__, v3);
    sub_1BC3008(&Method_ShopRootComponent___c__DisplayClass98_0__SelectSellServantConfirm_b__0__, v4);
    sub_1BC3008(&ShopRootComponent___c__DisplayClass98_0_TypeInfo, v5);
    byte_4AFE3AC = 1;
  }
  v6 = sub_1BC3254(ShopRootComponent___c__DisplayClass98_0_TypeInfo);
  ShopRootComponent___c__DisplayClass98_0___ctor((ShopRootComponent___c__DisplayClass98_0_o *)v6, 0LL);
  if ( !v6 )
    goto LABEL_18;
  *(_QWORD *)(v6 + 16) = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v6 + 16), (int32_t)this, v9, v10);
  if ( this->fields.inputState == 2 )
  {
    servantSellMenu = this->fields.servantSellMenu;
    if ( !servantSellMenu )
      goto LABEL_18;
    tabKind = servantSellMenu->fields.tabKind;
    selectedServantIds = this->fields.selectedServantIds;
    IsSellEquipedCmdCodeLastServant = ServantSellMenu__get_IsSellEquipedCmdCodeLastServant(servantSellMenu, 0LL);
    *(_DWORD *)(v6 + 24) = ServantSellConfirmMenu__GetServantSellConfirmKindOnOpenConfirm(
                             tabKind,
                             selectedServantIds == 0LL,
                             IsSellEquipedCmdCodeLastServant,
                             0LL);
    servantSellMenu = (ServantSellMenu_o *)this->fields.servantSellConfirmMenu;
    if ( !servantSellMenu )
      goto LABEL_18;
    ServantSellConfirmMenu__Init((ServantSellConfirmMenu_o *)servantSellMenu, 0LL);
    v14 = this->fields.selectedServantIds;
    if ( v14 )
    {
      servantSellConfirmMenu = this->fields.servantSellConfirmMenu;
      if ( *(_DWORD *)(v6 + 24) == 4 )
      {
        v16 = (System_Action_int__o *)sub_1BC3254(System_Action_int__TypeInfo);
        System_Action_int____ctor(
          v16,
          (Il2CppObject *)v6,
          Method_ShopRootComponent___c__DisplayClass98_0__SelectSellServantConfirm_b__0__,
          0LL);
        if ( servantSellConfirmMenu )
        {
          ServantSellConfirmMenu__OpenSellEquippedLastSvtWarning(servantSellConfirmMenu, 4, v14, v16, 0LL);
          return;
        }
LABEL_18:
        sub_1BC3264(servantSellMenu, v8);
      }
      if ( !servantSellConfirmMenu )
        goto LABEL_18;
      ServantSellConfirmMenu__Init(this->fields.servantSellConfirmMenu, 0LL);
      v25 = this->fields.servantSellConfirmMenu;
      v26 = *(_DWORD *)(v6 + 24);
      v27 = this->fields.selectedServantIds;
      selectedCommandCodeIds = this->fields.selectedCommandCodeIds;
      v29 = (System_Action_int__o *)sub_1BC3254(System_Action_int__TypeInfo);
      System_Action_int____ctor(v29, (Il2CppObject *)this, Method_ShopRootComponent_SellServantConfirm__, 0LL);
      if ( !v25 )
        goto LABEL_18;
      v20 = v25;
      v21 = v26;
      v22 = v27;
      v23 = selectedCommandCodeIds;
      v24 = v29;
    }
    else
    {
      v17 = this->fields.servantSellConfirmMenu;
      v18 = *(_DWORD *)(v6 + 24);
      v19 = (System_Action_int__o *)sub_1BC3254(System_Action_int__TypeInfo);
      System_Action_int____ctor(v19, (Il2CppObject *)this, Method_ShopRootComponent_SellServantConfirm__, 0LL);
      if ( !v17 )
        goto LABEL_18;
      v20 = v17;
      v21 = v18;
      v22 = 0LL;
      v23 = 0LL;
      v24 = v19;
    }
    ServantSellConfirmMenu__Open(v20, v21, v22, v23, v24, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopRootComponent__SelectedBuyItemConfirm(
        ShopRootComponent_o *this,
        int32_t buyCount,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t state; // w8
  void *listViewHelper; // x0
  ShopBuyItemListViewItem_o *ShopBuyItemListViewItem; // x20
  struct ShopEntity_o *Shop_k__BackingField; // x8

  if ( (byte_4AFE3A8 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_ShopDetailMaster___, *(_QWORD *)&buyCount);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v5);
    sub_1BC3008(&ShopRootComponent_TypeInfo, v6);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4AFE3A8 = 1;
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
    if ( (unsigned int)(state - 11) >= 2 )
    {
      if ( state == 22 )
        goto LABEL_6;
      listViewHelper = this->fields.listViewHelper;
      if ( listViewHelper )
      {
        ShopBuyItemListViewItem = ShopSceneListViewControlHelper__GetShopBuyItemListViewItem(
                                    (ShopSceneListViewControlHelper_o *)listViewHelper,
                                    this->fields.selectedItemIndex,
                                    0LL);
        listViewHelper = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( listViewHelper )
        {
          listViewHelper = DataManager__GetMasterData_object_(
                             (DataManager_o *)listViewHelper,
                             (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ShopDetailMaster___);
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
                         (const MethodInfo_32FFA00 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__) )
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
      sub_1BC3264(listViewHelper, *(_QWORD *)&buyCount);
    }
    ShopRootComponent__OpenStorageDetailCheck(this, *(const MethodInfo **)&buyCount);
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
      sub_1BC3264(servantSellConfirmMenu, *(_QWORD *)&count);
    }
    ServantSellConfirmMenu__Init(servantSellConfirmMenu, 0LL);
    ShopRootComponent__SelectSellServantConfirm(this, v5);
  }
  else
  {
    ShopRootComponent__CloseSellServantConfirm(this, *(const MethodInfo **)&count);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopRootComponent__SetActionBG(ShopRootComponent_o *this, bool isEnable, const MethodInfo *method)
{
  UnityEngine_Object_o *actionBg; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_4AFE3D5 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, isEnable);
    byte_4AFE3D5 = 1;
  }
  actionBg = (UnityEngine_Object_o *)this->fields.actionBg;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(actionBg, 0LL, 0LL) )
  {
    v7 = this->fields.actionBg;
    if ( !v7 )
      sub_1BC3264(0LL, v6);
    UnityEngine_GameObject__SetActive(v7, isEnable, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopRootComponent__SetFadeIn(ShopRootComponent_o *this, int32_t state, const MethodInfo *method)
{
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  CommonUI_o *v7; // x19

  if ( (byte_4AFE3A1 & 1) == 0 )
  {
    sub_1BC3008(&AvalonSceneManager_TypeInfo, *(_QWORD *)&state);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_4AFE3A1 = 1;
  }
  if ( state == 15 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v7 = (CommonUI_o *)Instance;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    if ( !v7 )
      sub_1BC3264(Instance, v6);
    CommonUI__maskFadein(v7, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopRootComponent__SetFadeOut(
        ShopRootComponent_o *this,
        int32_t state,
        System_Action_o *endFade,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x19
  __int64 v11; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v16; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v18; // x21

  if ( (byte_4AFE3A0 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, *(_QWORD *)&state);
    sub_1BC3008(&AvalonSceneManager_TypeInfo, v6);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1BC3008(&Method_ShopRootComponent___c__DisplayClass84_0__SetFadeOut_b__0__, v8);
    sub_1BC3008(&ShopRootComponent___c__DisplayClass84_0_TypeInfo, v9);
    byte_4AFE3A0 = 1;
  }
  v10 = sub_1BC3254(ShopRootComponent___c__DisplayClass84_0_TypeInfo);
  ShopRootComponent___c__DisplayClass84_0___ctor((ShopRootComponent___c__DisplayClass84_0_o *)v10, 0LL);
  if ( !v10 )
    goto LABEL_10;
  *(_QWORD *)(v10 + 16) = endFade;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v10 + 16), (int32_t)endFade, v13, v14);
  if ( state == 15 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v16 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v16 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v16->static_fields->DEFAULT_FADE_TIME;
    v18 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
    System_Action___ctor(
      v18,
      (Il2CppObject *)v10,
      Method_ShopRootComponent___c__DisplayClass84_0__SetFadeOut_b__0__,
      0LL);
    if ( Instance )
    {
      CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v18, 0LL);
      return;
    }
LABEL_10:
    sub_1BC3264(v11, v12);
  }
  ActionExtensions__Call(*(System_Action_o **)(v10 + 16), 0LL);
}


void __fastcall ShopRootComponent__SetFrequencyTypeCheckList(
        ShopRootComponent_o *this,
        ShopDetailEntity_o *entity,
        bool decide,
        const MethodInfo *method)
{
  __int64 v6; // x1
  System_Collections_Generic_Dictionary_int__int__o *shopDetailCheckList; // x0

  if ( (byte_4AFE3CC & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__, entity);
    sub_1BC3008(&ShopRootComponent_TypeInfo, v6);
    byte_4AFE3CC = 1;
  }
  if ( entity && (decide || entity->fields.frequencyType != 1) )
  {
    shopDetailCheckList = ShopRootComponent_TypeInfo->static_fields->shopDetailCheckList;
    if ( !shopDetailCheckList )
      sub_1BC3264(0LL, entity);
    System_Collections_Generic_Dictionary_int__int___set_Item(
      shopDetailCheckList,
      entity->fields.shopId,
      1,
      (const MethodInfo_32FFA88 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
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
    sub_1BC3264(informationPanel, isDisp);
  }
}


void __fastcall ShopRootComponent__ShowNormalItemDialog(
        ShopRootComponent_o *this,
        ShopBuyItemListViewItem_o *item,
        ShopEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_String_o *RequestResultDialogMessageNormal; // x0
  __int64 v13; // x1
  System_String_o *v14; // x20
  Il2CppObject *MasterData_object; // x22
  Il2CppObject *v16; // x23
  const MethodInfo *v17; // x3
  System_String_o *RequestResultDialogItemMessageNormal; // x22
  const MethodInfo *v19; // x2
  System_String_o *RequestResultDialogNumMessageNormal; // x0
  RequestResultDialog_o *requestResultDialog; // x21
  System_String_o *v22; // x23
  System_Action_bool__o *v23; // x24
  RequestResultDialog_o *v24; // x21
  System_Action_bool__o *v25; // x22

  if ( (byte_4AFE3B1 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_bool__TypeInfo, item);
    sub_1BC3008(&Method_DataManager_GetMasterData_ItemMaster___, v7);
    sub_1BC3008(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v8);
    sub_1BC3008(&Method_ShopRootComponent_OnEndItemDialog__, v9);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1BC3008(&StringLiteral_1/*""*/, v11);
    byte_4AFE3B1 = 1;
  }
  RequestResultDialogMessageNormal = ShopRequestResultDialogMessageMaker__GetRequestResultDialogMessageNormal(
                                       item,
                                       entity,
                                       this->fields.buyCount,
                                       method);
  if ( !entity )
    goto LABEL_11;
  v14 = RequestResultDialogMessageNormal;
  if ( entity->fields.purchaseType == 1 )
  {
    RequestResultDialogMessageNormal = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( RequestResultDialogMessageNormal )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)RequestResultDialogMessageNormal,
                            (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ItemMaster___);
      RequestResultDialogMessageNormal = (System_String_o *)ShopEntity__get_TargetId(entity, 0LL);
      if ( MasterData_object )
      {
        v16 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                (int32_t)RequestResultDialogMessageNormal,
                (const MethodInfo_32AF070 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        RequestResultDialogItemMessageNormal = ShopRequestResultDialogMessageMaker__GetRequestResultDialogItemMessageNormal(
                                                 entity,
                                                 (ItemEntity_o *)v16,
                                                 this->fields.buyCount,
                                                 v17);
        RequestResultDialogNumMessageNormal = ShopRequestResultDialogMessageMaker__GetRequestResultDialogNumMessageNormal(
                                                entity,
                                                (ItemEntity_o *)v16,
                                                v19);
        requestResultDialog = this->fields.requestResultDialog;
        v22 = RequestResultDialogNumMessageNormal;
        v23 = (System_Action_bool__o *)sub_1BC3254(System_Action_bool__TypeInfo);
        System_Action_bool____ctor(v23, (Il2CppObject *)this, Method_ShopRootComponent_OnEndItemDialog__, 0LL);
        if ( requestResultDialog )
        {
          RequestResultDialog__Open(requestResultDialog, v14, v22, RequestResultDialogItemMessageNormal, v23, 0LL);
          return;
        }
      }
    }
LABEL_11:
    sub_1BC3264(RequestResultDialogMessageNormal, v13);
  }
  v24 = this->fields.requestResultDialog;
  v25 = (System_Action_bool__o *)sub_1BC3254(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v25, (Il2CppObject *)this, Method_ShopRootComponent_OnEndItemDialog__, 0LL);
  if ( !v24 )
    goto LABEL_11;
  RequestResultDialog__Open_34119500(v24, (System_String_o *)StringLiteral_1/*""*/, v14, v25, -1, 0LL);
}


void __fastcall ShopRootComponent__ShowSetItemDialog(
        ShopRootComponent_o *this,
        ShopEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_String_o *RequestResultDialogMessage; // x0
  RequestResultDialog_o *requestResultDialog; // x20
  System_String_o *v9; // x21
  System_Action_bool__o *v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1

  if ( (byte_4AFE3B2 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_bool__TypeInfo, entity);
    sub_1BC3008(&Method_ShopRootComponent_OnEndItemDialog__, v5);
    sub_1BC3008(&StringLiteral_1/*""*/, v6);
    byte_4AFE3B2 = 1;
  }
  RequestResultDialogMessage = ShopRequestResultDialogMessageMaker__GetRequestResultDialogMessage(
                                 entity,
                                 this->fields.buyCount,
                                 method);
  requestResultDialog = this->fields.requestResultDialog;
  v9 = RequestResultDialogMessage;
  v10 = (System_Action_bool__o *)sub_1BC3254(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v10, (Il2CppObject *)this, Method_ShopRootComponent_OnEndItemDialog__, 0LL);
  if ( !requestResultDialog )
    sub_1BC3264(v11, v12);
  RequestResultDialog__Open_34119500(requestResultDialog, (System_String_o *)StringLiteral_1/*""*/, v9, v10, -1, 0LL);
}


void __fastcall ShopRootComponent__ShowStorageDialog(
        ShopRootComponent_o *this,
        ShopBuyItemListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  int32_t state; // w8
  struct BuyStorageConfirmDialogComponent_o *v7; // x21
  System_Action_int__o *v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1
  BuyStorageConfirmDialogComponent_o *v11; // x0
  int32_t v12; // w1
  struct BuyStorageConfirmDialogComponent_o *buyStorageResultDialog; // x21

  if ( (byte_4AFE3B3 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_int__TypeInfo, item);
    sub_1BC3008(&Method_ShopRootComponent_OnEndStorageDialog__, v5);
    byte_4AFE3B3 = 1;
  }
  state = this->fields.state;
  if ( state == 12 )
  {
    buyStorageResultDialog = this->fields.buyStorageResultDialog;
    v8 = (System_Action_int__o *)sub_1BC3254(System_Action_int__TypeInfo);
    System_Action_int____ctor(v8, (Il2CppObject *)this, Method_ShopRootComponent_OnEndStorageDialog__, 0LL);
    if ( buyStorageResultDialog )
    {
      v12 = 1;
      v11 = buyStorageResultDialog;
      goto LABEL_9;
    }
LABEL_11:
    sub_1BC3264(v9, v10);
  }
  if ( state == 11 )
  {
    v7 = this->fields.buyStorageResultDialog;
    v8 = (System_Action_int__o *)sub_1BC3254(System_Action_int__TypeInfo);
    System_Action_int____ctor(v8, (Il2CppObject *)this, Method_ShopRootComponent_OnEndStorageDialog__, 0LL);
    if ( v7 )
    {
      v11 = v7;
      v12 = 0;
LABEL_9:
      BuyStorageConfirmDialogComponent__ResultOpenDialog(v11, v12, item, v8, 0LL);
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

  if ( (byte_4AFE39C & 1) == 0 )
  {
    sub_1BC3008(&LocalizationManager_TypeInfo, method);
    byte_4AFE39C = 1;
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
    sub_1BC3264(SelfUserGame, v4);
  UILabel__set_text(apInfoLabel, (System_String_o *)SelfUserGame, 0LL);
}


void __fastcall ShopRootComponent__UpdateGiftBadgeNum(ShopRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *giftButtonControl; // x20
  __int64 v4; // x1
  GiftButtonCtrl_o *v5; // x0

  if ( (byte_4AFE3D6 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    byte_4AFE3D6 = 1;
  }
  giftButtonControl = (UnityEngine_Object_o *)this->fields.giftButtonControl;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(giftButtonControl, 0LL, 0LL) )
  {
    v5 = this->fields.giftButtonControl;
    if ( !v5 )
      sub_1BC3264(0LL, v4);
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
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4AFE3BE & 1) == 0 )
  {
    sub_1BC3008(&ShopRootComponent__WaitPurchase_d__123_TypeInfo, method);
    byte_4AFE3BE = 1;
  }
  v3 = sub_1BC3254(ShopRootComponent__WaitPurchase_d__123_TypeInfo);
  ShopRootComponent__WaitPurchase_d__123___ctor((ShopRootComponent__WaitPurchase_d__123_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_1BC3264(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v6, v7);
  return (System_Collections_IEnumerator_o *)v3;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopRootComponent___EndRequestShop_b__101_0(
        ShopRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x1

  if ( (byte_4AFE3D9 & 1) == 0 )
  {
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4AFE3D9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BC3264(0LL, v5);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL);
  ShopRootComponent__RequestEnd(this, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopRootComponent___Init_b__77_0(
        ShopRootComponent_o *this,
        int32_t stoneCount,
        const MethodInfo *method)
{
  UILabel_o *stoneInfoLabel; // x20
  System_String_o *NumberFormat; // x0
  __int64 v7; // x1

  if ( (byte_4AFE3D8 & 1) == 0 )
  {
    sub_1BC3008(&LocalizationManager_TypeInfo, *(_QWORD *)&stoneCount);
    byte_4AFE3D8 = 1;
  }
  stoneInfoLabel = this->fields.stoneInfoLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  NumberFormat = LocalizationManager__GetNumberFormat(stoneCount, 0LL);
  if ( !stoneInfoLabel )
    sub_1BC3264(NumberFormat, v7);
  UILabel__set_text(stoneInfoLabel, NumberFormat, 0LL);
}


void __fastcall ShopRootComponent___RequestEnd_b__100_0(
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
    sub_1BC3264(servantSellConfirmMenu, v4);
  }
  ServantSellConfirmMenu__ClearCommandCodeRemoveResult(servantSellConfirmMenu, 0LL);
}


void __fastcall ShopRootComponent____n__0(ShopRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent__beginStartUp_40503008((SceneRootComponent_o *)this, 0LL);
}


void __fastcall ShopRootComponent__beginFinish(ShopRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ShopTopListViewManager_o *topListViewManager; // x0

  ShopRootComponent__Quit(this, method);
  topListViewManager = this->fields.topListViewManager;
  if ( !topListViewManager )
    sub_1BC3264(0LL, v3);
  ShopTopListViewManager__ReleaseCoinRoomAsset(topListViewManager, 0LL);
}


void __fastcall ShopRootComponent__beginInitialize(ShopRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  ShopTopListViewManager_o *topListViewManager; // x0
  ShopRootComponent_o *v8; // x0
  const MethodInfo *v9; // x1
  struct GiftButtonCtrl_o *giftButtonControl; // x20
  System_Action_o *v11; // x21
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct GiftButtonCtrl_o *v14; // x20
  System_Func_bool__bool__o *v15; // x21
  int32_t v16; // w2
  const MethodInfo *v17; // x3

  if ( (byte_4AFE396 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    sub_1BC3008(&System_Func_bool__bool__TypeInfo, v3);
    sub_1BC3008(&Method_ShopRootComponent_OnGiftClose__, v4);
    sub_1BC3008(&Method_ShopRootComponent_OnGiftOpen__, v5);
    sub_1BC3008(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v6);
    byte_4AFE396 = 1;
  }
  topListViewManager = this->fields.topListViewManager;
  if ( !topListViewManager )
    goto LABEL_11;
  ShopTopListViewManager__LoadCoinRoomAsset(topListViewManager, 0LL);
  ShopRootComponent__CreateShopDetailCheckList(v8, v9);
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 6, 30, 0LL);
  topListViewManager = (ShopTopListViewManager_o *)this->fields.eventBanner;
  if ( !topListViewManager )
    goto LABEL_11;
  EventBannerComponent__SetBanner((EventBannerComponent_o *)topListViewManager, 0LL);
  topListViewManager = (ShopTopListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
  v11 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_ShopRootComponent_OnGiftOpen__, 0LL);
  if ( !giftButtonControl
    || (giftButtonControl->fields.OnGiftOpenAdditionalAction = v11,
        sub_1BC2FAC(
          (CGThumbnailListItem_o *)&giftButtonControl->fields.OnGiftOpenAdditionalAction,
          (int32_t)v11,
          v12,
          v13),
        v14 = this->fields.giftButtonControl,
        v15 = (System_Func_bool__bool__o *)sub_1BC3254(System_Func_bool__bool__TypeInfo),
        System_Func_bool__bool____ctor(v15, (Il2CppObject *)this, Method_ShopRootComponent_OnGiftClose__, 0LL),
        !v14) )
  {
LABEL_11:
    sub_1BC3264(topListViewManager, method);
  }
  v14->fields.OnGiftCloseAdditionalAction = v15;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v14->fields.OnGiftCloseAdditionalAction, (int32_t)v15, v16, v17);
}


void __fastcall ShopRootComponent__beginResume(ShopRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent__beginResume_40503192((SceneRootComponent_o *)this, 0LL);
}


void __fastcall ShopRootComponent__beginStartUp(
        ShopRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
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
  struct SceneJumpInfo_o **p_jumpInfo; // x21
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x3
  Il2CppClass *v19; // x8
  __int64 methodPtr_low; // x9
  int32_t v21; // w1
  TitleInfoControl_o *titleInfo; // x0
  __int64 v23; // x1
  System_String_o *returnSceneName; // x20
  System_String_o *SceneName; // x0
  bool v26; // w0
  const MethodInfo *v27; // x3
  struct ShopPlayVoiceComponent_o *shopPlayVoiceComponent; // x8
  System_String_o *MainBgmName; // x20
  System_Action_o *v30; // x20
  const MethodInfo *v31; // x1
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  struct ShopPlayVoiceComponent_o *v34; // x20
  struct StandFigureBack_o *standFigureBack; // x1
  int32_t defaultFaceId; // w21
  void *v37; // d8
  CGThumbnailListItem_o *p_standFigureBack; // x20
  UITexture_o *backgroundTexture; // x20
  System_String_o *BG_ROOT; // x20
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  Il2CppObject *v44; // x0
  System_String_o *v45; // x0
  ExUITexture_o *v46; // x21
  System_String_o *v47; // x20
  System_Action_o *v48; // x22
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  ShopRootConstants_c *v52; // x0
  struct ShopRootConstants_StaticFields *static_fields; // x8
  System_String_o *v54; // x20
  Il2CppObject *v55; // x0
  ExUITexture_o *v56; // x19
  int32_t DEFAULT_BG_ID; // [xsp+8h] [xbp-48h] BYREF
  int32_t bgImageId; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4AFE397 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, data);
    sub_1BC3008(&AtlasManager_TypeInfo, v6);
    sub_1BC3008(&BgmManager_TypeInfo, v7);
    sub_1BC3008(&FSUtility_TypeInfo, v8);
    sub_1BC3008(&int_TypeInfo, v9);
    sub_1BC3008(&SceneJumpInfo_TypeInfo, v10);
    sub_1BC3008(&SceneList_TypeInfo, v11);
    sub_1BC3008(&Method_ShopRootComponent_LoadBanner__, v12);
    sub_1BC3008(&Method_ShopRootComponent__beginStartUp_b__72_0__, v13);
    sub_1BC3008(&ShopRootConstants_TypeInfo, v14);
    sub_1BC3008(&SoundManager_TypeInfo, v15);
    byte_4AFE397 = 1;
  }
  p_jumpInfo = &this->fields.jumpInfo;
  this->fields.jumpInfo = 0LL;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.jumpInfo, 0, (int32_t)method, v3);
  this->fields.isFromCoinRoom = 0;
  if ( data )
  {
    v19 = (Il2CppClass *)SceneJumpInfo_TypeInfo;
    methodPtr_low = LOBYTE(SceneJumpInfo_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(data->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
      && (SceneJumpInfo_c *)data->klass->_2.typeHierarchy[methodPtr_low - 1] == SceneJumpInfo_TypeInfo )
    {
      *p_jumpInfo = (struct SceneJumpInfo_o *)data;
      if ( LOBYTE(data->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
      {
        if ( data->klass->_2.typeHierarchy[methodPtr_low - 1] == v19 )
          v21 = (int)data;
        else
          v21 = 0;
      }
      else
      {
        v21 = 0;
      }
      sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.jumpInfo, v21, (int32_t)v17, v18);
      if ( !*p_jumpInfo )
        goto LABEL_41;
      returnSceneName = (*p_jumpInfo)->fields.returnSceneName;
      if ( !SceneList_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
      SceneName = SceneList__getSceneName(90, 0LL);
      v26 = System_String__op_Equality(returnSceneName, SceneName, 0LL);
      this->fields.isFromCoinRoom = v26;
      if ( v26 )
      {
        *p_jumpInfo = 0LL;
        sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.jumpInfo, 0, (int32_t)v17, v27);
      }
    }
  }
  ShopRootComponent__SetActionBG(this, 0, v17);
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
  MainBgmName = BgmManager__GetMainBgmName(0, 0LL);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm(MainBgmName, 0LL);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_41;
  TitleInfoControl__setTitleInfo(titleInfo, this->fields.myFSM, 1, 0LL, 40, 0LL);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_41;
  TitleInfoControl__SetHelpBtn(titleInfo, 0, 0LL);
  v30 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(v30, (Il2CppObject *)this, Method_ShopRootComponent__beginStartUp_b__72_0__, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadBanner(v30, 1, 0LL);
  ShopRootComponent__setDispInfo(this, v31);
  v34 = this->fields.shopPlayVoiceComponent;
  if ( !v34 )
    goto LABEL_41;
  standFigureBack = this->fields.standFigureBack;
  defaultFaceId = this->fields.defaultFaceId;
  v37 = *(void **)&this->fields.figureSvtId;
  v34->fields.standFigureBack = standFigureBack;
  p_standFigureBack = (CGThumbnailListItem_o *)&v34->fields.standFigureBack;
  sub_1BC2FAC(p_standFigureBack, (int32_t)standFigureBack, v32, v33);
  p_standFigureBack->monitor = v37;
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
  v44 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &bgImageId, v41, v42, v43);
  v45 = System_String__Format(BG_ROOT, v44, 0LL);
  v46 = this->fields.backgroundTexture;
  v47 = v45;
  v48 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(v48, (Il2CppObject *)this, Method_ShopRootComponent_LoadBanner__, 0LL);
  if ( !v46 )
    goto LABEL_41;
  if ( ExUITexture__SetAssetImage(v46, v47, v48, 0LL) )
    goto LABEL_38;
  v52 = ShopRootConstants_TypeInfo;
  if ( !ShopRootConstants_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
    v52 = ShopRootConstants_TypeInfo;
  }
  static_fields = v52->static_fields;
  v54 = static_fields->BG_ROOT;
  DEFAULT_BG_ID = static_fields->DEFAULT_BG_ID;
  v55 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &DEFAULT_BG_ID, v49, v50, v51);
  titleInfo = (TitleInfoControl_o *)System_String__Format(v54, v55, 0LL);
  if ( !this->fields.backgroundTexture )
LABEL_41:
    sub_1BC3264(titleInfo, v23);
  v47 = (System_String_o *)titleInfo;
  ExUITexture__SetAssetImage(this->fields.backgroundTexture, (System_String_o *)titleInfo, 0LL, 0LL);
LABEL_38:
  v56 = this->fields.backgroundTexture;
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  FSUtility__SetUpBackTextureSize(v56, v47, 0LL);
}


void __fastcall ShopRootComponent__setDispInfo(ShopRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  GuideEntity_o *GuideData; // x0
  int32_t guideFaceId; // w8
  ShopRootConstants_c *v9; // x0
  struct ShopRootConstants_StaticFields *static_fields; // x9

  if ( (byte_4AFE398 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_GuideMaster___, method);
    sub_1BC3008(&ShopRootConstants_TypeInfo, v3);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4AFE398 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_GuideMaster___)) == 0LL )
  {
    sub_1BC3264(Instance, v6);
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
    v9 = ShopRootConstants_TypeInfo;
    if ( !ShopRootConstants_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
      v9 = ShopRootConstants_TypeInfo;
    }
    static_fields = v9->static_fields;
    guideFaceId = 0;
    *(_QWORD *)&this->fields.figureSvtId = *(_QWORD *)&static_fields->DEFAULT_FIGURE_ID;
    this->fields.bgImageId = static_fields->DEFAULT_BG_ID;
  }
  this->fields.defaultFaceId = guideFaceId;
}


void __fastcall ShopRootComponent__WaitPurchase_d__123___ctor(
        ShopRootComponent__WaitPurchase_d__123_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall ShopRootComponent__WaitPurchase_d__123__MoveNext(
        ShopRootComponent__WaitPurchase_d__123_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ShopRootComponent__WaitPurchase_d__123_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t _1__state; // w8
  ShopRootComponent___c_c *v8; // x0
  System_Func_bool__o *_9__123_0; // x20
  Il2CppObject *v10; // x21
  struct ShopRootComponent___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  UnityEngine_WaitUntil_o *v14; // x21
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  bool result; // w0
  struct ShopRootComponent_o *_4__this; // x8

  v3 = this;
  if ( (byte_4AFE3EC & 1) == 0 )
  {
    sub_1BC3008(&System_Func_bool__TypeInfo, method);
    sub_1BC3008(&Method_ShopRootComponent___c__WaitPurchase_b__123_0__, v4);
    sub_1BC3008(&ShopRootComponent___c_TypeInfo, v5);
    this = (ShopRootComponent__WaitPurchase_d__123_o *)sub_1BC3008(&UnityEngine_WaitUntil_TypeInfo, v6);
    byte_4AFE3EC = 1;
  }
  _1__state = v3->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = v3->fields.__4__this;
    v3->fields.__1__state = -1;
    if ( !_4__this
      || (this = (ShopRootComponent__WaitPurchase_d__123_o *)_4__this->fields.listViewHelper,
          _4__this->fields.state = 13,
          !this) )
    {
      sub_1BC3264(this, method);
    }
    ShopSceneListViewControlHelper__SetListViewOnOpenHelp((ShopSceneListViewControlHelper_o *)this, 13, v2);
    return 0;
  }
  if ( _1__state )
    return 0;
  v3->fields.__1__state = -1;
  v8 = ShopRootComponent___c_TypeInfo;
  if ( !ShopRootComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopRootComponent___c_TypeInfo);
    v8 = ShopRootComponent___c_TypeInfo;
  }
  _9__123_0 = v8->static_fields->__9__123_0;
  if ( !_9__123_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = ShopRootComponent___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v8->static_fields->__9;
    _9__123_0 = (System_Func_bool__o *)sub_1BC3254(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(_9__123_0, v10, Method_ShopRootComponent___c__WaitPurchase_b__123_0__, 0LL);
    static_fields = ShopRootComponent___c_TypeInfo->static_fields;
    static_fields->__9__123_0 = _9__123_0;
    sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__123_0, (int32_t)_9__123_0, v12, v13);
  }
  v14 = (UnityEngine_WaitUntil_o *)sub_1BC3254(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v14, _9__123_0, 0LL);
  v3->fields.__2__current = (Il2CppObject *)v14;
  p__2__current = (CGThumbnailListItem_o *)&v3->fields.__2__current;
  sub_1BC2FAC(p__2__current, (int32_t)v14, v16, v17);
  result = 1;
  LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
  return result;
}


Il2CppObject *__fastcall ShopRootComponent__WaitPurchase_d__123__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ShopRootComponent__WaitPurchase_d__123_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn ShopRootComponent__WaitPurchase_d__123__System_Collections_IEnumerator_Reset(
        ShopRootComponent__WaitPurchase_d__123_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BC301C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BC3254(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BC301C(&Method_ShopRootComponent__WaitPurchase_d__123_System_Collections_IEnumerator_Reset__);
  sub_1BC3130(v3, v4);
}


Il2CppObject *__fastcall ShopRootComponent__WaitPurchase_d__123__System_Collections_IEnumerator_get_Current(
        ShopRootComponent__WaitPurchase_d__123_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall ShopRootComponent__WaitPurchase_d__123__System_IDisposable_Dispose(
        ShopRootComponent__WaitPurchase_d__123_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall ShopRootComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4AFE3DA & 1) == 0 )
  {
    sub_1BC3008(&ShopRootComponent___c_TypeInfo, v1);
    byte_4AFE3DA = 1;
  }
  v2 = (Il2CppObject *)sub_1BC3254(ShopRootComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ShopRootComponent___c_TypeInfo->static_fields->__9 = (struct ShopRootComponent___c_o *)v2;
  sub_1BC2FAC((CGThumbnailListItem_o *)ShopRootComponent___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall ShopRootComponent___c___ctor(ShopRootComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ShopRootComponent___c___WaitPurchase_b__123_0(ShopRootComponent___c_o *this, const MethodInfo *method)
{
  PurchaseBehaviour_c *v2; // x0

  if ( (byte_4AFE3DB & 1) == 0 )
  {
    sub_1BC3008(&PurchaseBehaviour_TypeInfo, method);
    byte_4AFE3DB = 1;
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


void __fastcall ShopRootComponent___c__DisplayClass102_0___PlayLvExceedItemReleaseEffect_b__0(
        ShopRootComponent___c__DisplayClass102_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  System_Action_o *_9__1; // x22
  CommonUI_o *v8; // x21
  QuestRewardInfo_o *questRewardInfo; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4AFE3DC & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1BC3008(&Method_ShopRootComponent___c__DisplayClass102_0__PlayLvExceedItemReleaseEffect_b__1__, v4);
    byte_4AFE3DC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__1 = this->fields.__9__1;
  v8 = (CommonUI_o *)Instance;
  questRewardInfo = this->fields.questRewardInfo;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_ShopRootComponent___c__DisplayClass102_0__PlayLvExceedItemReleaseEffect_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.__9__1, (int32_t)_9__1, v10, v11);
  }
  if ( !v8 )
    sub_1BC3264(Instance, v6);
  CommonUI__LoadItemGetEffect(v8, questRewardInfo, _9__1, 0LL);
}


void __fastcall ShopRootComponent___c__DisplayClass102_0___PlayLvExceedItemReleaseEffect_b__1(
        ShopRootComponent___c__DisplayClass102_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_GameObject_o *Instance; // x0
  __int64 v6; // x1
  struct ShopRootComponent_o *_4__this; // x8
  CommonUI_o *v8; // x20
  System_Action_o *_9__2; // x23
  UnityEngine_Transform_o *v10; // x22
  QuestRewardInfo_o *questRewardInfo; // x21
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4AFE3DD & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1BC3008(&Method_ShopRootComponent___c__DisplayClass102_0__PlayLvExceedItemReleaseEffect_b__2__, v4);
    byte_4AFE3DD = 1;
  }
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_9;
  v8 = (CommonUI_o *)Instance;
  Instance = _4__this->fields.actionPanel;
  if ( !Instance )
    goto LABEL_9;
  Instance = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(Instance, 0LL);
  _9__2 = this->fields.__9__2;
  v10 = (UnityEngine_Transform_o *)Instance;
  questRewardInfo = this->fields.questRewardInfo;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_ShopRootComponent___c__DisplayClass102_0__PlayLvExceedItemReleaseEffect_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.__9__2, (int32_t)_9__2, v12, v13);
  }
  if ( !v8 )
LABEL_9:
    sub_1BC3264(Instance, v6);
  CommonUI__OpenItemGetEffect(v8, v10, 0, questRewardInfo, _9__2, 0LL);
}


void __fastcall ShopRootComponent___c__DisplayClass102_0___PlayLvExceedItemReleaseEffect_b__2(
        ShopRootComponent___c__DisplayClass102_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  AvalonSceneManager_c *v8; // x8
  CommonUI_o *v9; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__3; // x21
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4AFE3DE & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    sub_1BC3008(&AvalonSceneManager_TypeInfo, v3);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1BC3008(&Method_ShopRootComponent___c__DisplayClass102_0__PlayLvExceedItemReleaseEffect_b__3__, v5);
    byte_4AFE3DE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  CommonUI__ReleaseItemGetEffect((CommonUI_o *)Instance, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = AvalonSceneManager_TypeInfo;
  v9 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v8 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v8->static_fields->DEFAULT_FADE_TIME;
  _9__3 = this->fields.__9__3;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_ShopRootComponent___c__DisplayClass102_0__PlayLvExceedItemReleaseEffect_b__3__,
      0LL);
    this->fields.__9__3 = _9__3;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.__9__3, (int32_t)_9__3, v12, v13);
  }
  if ( !v9 )
LABEL_10:
    sub_1BC3264(Instance, v7);
  CommonUI__maskFadein(v9, DEFAULT_FADE_TIME, _9__3, 0LL);
}


void __fastcall ShopRootComponent___c__DisplayClass102_0___PlayLvExceedItemReleaseEffect_b__3(
        ShopRootComponent___c__DisplayClass102_0_o *this,
        const MethodInfo *method)
{
  struct ShopBuyItemListViewItem_o *item; // x1

  item = this->fields.item;
  if ( !item || (this = (ShopRootComponent___c__DisplayClass102_0_o *)this->fields.__4__this) == 0LL )
    sub_1BC3264(this, item);
  ShopRootComponent__ShowNormalItemDialog((ShopRootComponent_o *)this, item, item->fields._Shop_k__BackingField, 0LL);
}


void __fastcall ShopRootComponent___c__DisplayClass109_0___ctor(
        ShopRootComponent___c__DisplayClass109_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ShopRootComponent___c__DisplayClass109_0___PlayServantCostumeReleaseEffect_b__0(
        ShopRootComponent___c__DisplayClass109_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  ShopRootComponent___c__DisplayClass109_0_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct ShopEntity_o *shopEntity; // x8
  struct System_Int32_array *targetIds; // x8
  System_String_o *v10; // x21
  System_String_o *v11; // x0
  int32_t v12; // w20
  System_String_o *v13; // x0
  int32_t v14; // w21
  System_String_o *name; // x21
  Il2CppObject *_4__this; // x22
  CommonUI_o *v17; // x20
  System_Action_o *v18; // x19
  ServantCostumeEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  v3 = this;
  if ( (byte_4AFE3DF & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantCostumeMaster___, v4);
    sub_1BC3008(&Method_ShopRootComponent_OnEndPlayServantCostumeReleaseEffect__, v5);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    this = (ShopRootComponent___c__DisplayClass109_0_o *)sub_1BC3008(
                                                           &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                           v7);
    byte_4AFE3DF = 1;
  }
  entity = 0LL;
  shopEntity = v3->fields.shopEntity;
  if ( !shopEntity )
    goto LABEL_15;
  targetIds = shopEntity->fields.targetIds;
  if ( !targetIds )
    goto LABEL_15;
  if ( !targetIds->max_length )
    sub_1BC326C(this, method, v2);
  this = (ShopRootComponent___c__DisplayClass109_0_o *)System_Int32__ToString((int)targetIds + 32, 0LL);
  if ( !this )
    goto LABEL_15;
  v10 = (System_String_o *)this;
  v11 = System_String__Substring_62394572((System_String_o *)this, 0, LODWORD(this->fields.shopEntity) - 2, 0LL);
  v12 = System_Int32__Parse(v11, 0LL);
  v13 = System_String__Substring(v10, v10->fields._stringLength - 2, 0LL);
  v14 = System_Int32__Parse(v13, 0LL);
  this = (ShopRootComponent___c__DisplayClass109_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_15;
  this = (ShopRootComponent___c__DisplayClass109_0_o *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)this,
                                                         (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  if ( !this )
    goto LABEL_15;
  if ( ServantCostumeMaster__TryGetEntity((ServantCostumeMaster_o *)this, &entity, v12, v14, 0LL) )
  {
    this = (ShopRootComponent___c__DisplayClass109_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( entity )
    {
      name = entity->fields.name;
      _4__this = (Il2CppObject *)v3->fields.__4__this;
      v17 = (CommonUI_o *)this;
      v18 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
      System_Action___ctor(v18, _4__this, Method_ShopRootComponent_OnEndPlayServantCostumeReleaseEffect__, 0LL);
      if ( v17 )
      {
        CommonUI__OpenCostumeReleaseEffect(v17, 1, name, v18, 23, 0LL);
        return;
      }
    }
LABEL_15:
    sub_1BC3264(this, method);
  }
  this = (ShopRootComponent___c__DisplayClass109_0_o *)v3->fields.__4__this;
  if ( !this )
    goto LABEL_15;
  ShopRootComponent__OnEndPlayServantCostumeReleaseEffect((ShopRootComponent_o *)this, 0LL);
}


void __fastcall ShopRootComponent___c__DisplayClass160_0___ctor(
        ShopRootComponent___c__DisplayClass160_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ShopRootComponent___c__DisplayClass160_0___CloseShopResetDialog_b__0(
        ShopRootComponent___c__DisplayClass160_0_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  _BOOL8 v7; // x0
  __int64 v8; // x1
  ShopRootComponent_o *_4__this; // x8
  Il2CppObject *v10; // x21
  ShopResetConfirmDialogComponent_o *monitor; // x20
  ShopBuyItemListViewItem_o *item; // x19
  System_Action_bool__o *v13; // x22

  if ( (byte_4AFE3E0 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_bool__TypeInfo, result);
    sub_1BC3008(&Method_ShopRootComponent_OnEndShopReset__, v5);
    sub_1BC3008(&StringLiteral_21997/*"ng"*/, v6);
    byte_4AFE3E0 = 1;
  }
  v7 = System_String__op_Equality(result, (System_String_o *)StringLiteral_21997/*"ng"*/, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_9;
  if ( v7 )
  {
    ShopRootComponent__RequestEnd(_4__this, 0LL);
    return;
  }
  ShopRootComponent__RefreshInfo(this->fields.__4__this, 0LL);
  v10 = (Il2CppObject *)this->fields.__4__this;
  if ( !v10
    || (monitor = (ShopResetConfirmDialogComponent_o *)v10[24].monitor,
        item = this->fields.item,
        v13 = (System_Action_bool__o *)sub_1BC3254(System_Action_bool__TypeInfo),
        System_Action_bool____ctor(v13, v10, Method_ShopRootComponent_OnEndShopReset__, 0LL),
        !monitor) )
  {
LABEL_9:
    sub_1BC3264(v7, v8);
  }
  ShopResetConfirmDialogComponent__OpenResultDialog(monitor, item, v13, 0LL);
}


void __fastcall ShopRootComponent___c__DisplayClass160_0___CloseShopResetDialog_b__1(
        ShopRootComponent___c__DisplayClass160_0_o *this,
        const MethodInfo *method)
{
  ShopRootComponent___c__DisplayClass160_0_o *v2; // x19
  __int64 v3; // x1
  struct ShopBuyItemListViewItem_o *item; // x8
  struct ShopEntity_o *Shop_k__BackingField; // x8
  ShopResetPurchaseNumRequest_o *request; // x20
  int32_t baseShopId; // w19

  v2 = this;
  if ( (byte_4AFE3E1 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_ItemMaster___, method);
    this = (ShopRootComponent___c__DisplayClass160_0_o *)sub_1BC3008(&DataManager_TypeInfo, v3);
    byte_4AFE3E1 = 1;
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
  this = (ShopRootComponent___c__DisplayClass160_0_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !this || !request )
LABEL_10:
    sub_1BC3264(this, method);
  ShopResetPurchaseNumRequest__beginRequest(request, baseShopId, HIDWORD(this[2].fields.__4__this), 0LL);
}


void __fastcall ShopRootComponent___c__DisplayClass74_0___ctor(
        ShopRootComponent___c__DisplayClass74_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ShopRootComponent___c__DisplayClass74_0___LoadBanner_b__0(
        ShopRootComponent___c__DisplayClass74_0_o *this,
        const MethodInfo *method)
{
  PurchaseBehaviour_c *v3; // x0
  ShopPlayVoiceComponent_o *shopPlayVoiceComponent; // x0
  __int64 v5; // x1
  struct ShopRootComponent_o *_4__this; // x8
  int32_t v7; // w4

  if ( (byte_4AFE3E2 & 1) == 0 )
  {
    sub_1BC3008(&PurchaseBehaviour_TypeInfo, method);
    byte_4AFE3E2 = 1;
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
    sub_1BC3264(shopPlayVoiceComponent, v5);
  }
  ShopRootComponent____n__0((ShopRootComponent_o *)shopPlayVoiceComponent, 0LL);
}


void __fastcall ShopRootComponent___c__DisplayClass82_0___ctor(
        ShopRootComponent___c__DisplayClass82_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ShopRootComponent___c__DisplayClass82_0___SelectMenu_b__0(
        ShopRootComponent___c__DisplayClass82_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x5
  ShopRootComponent___c__DisplayClass82_0_o *v3; // x19
  __int64 v4; // x1
  struct ShopRootComponent_o *_4__this; // x8
  ShopSceneListViewControlHelper_o *listViewHelper; // x20
  System_Action_o *_9__1; // x24
  int32_t selectedEventIndex; // w21
  int32_t state; // w22
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct ShopRootComponent_o *v12; // x8

  v3 = this;
  if ( (byte_4AFE3E3 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    this = (ShopRootComponent___c__DisplayClass82_0_o *)sub_1BC3008(
                                                          &Method_ShopRootComponent___c__DisplayClass82_0__SelectMenu_b__1__,
                                                          v4);
    byte_4AFE3E3 = 1;
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
    _9__1 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v3,
      Method_ShopRootComponent___c__DisplayClass82_0__SelectMenu_b__1__,
      0LL);
    v3->fields.__9__1 = _9__1;
    sub_1BC2FAC((CGThumbnailListItem_o *)&v3->fields.__9__1, (int32_t)_9__1, v10, v11);
  }
  if ( !listViewHelper
    || (ShopSceneListViewControlHelper__SetListViewOnSelectMenu(
          listViewHelper,
          state,
          &v3->fields.eventId,
          selectedEventIndex,
          _9__1,
          v2),
        (this = (ShopRootComponent___c__DisplayClass82_0_o *)v3->fields.__4__this) == 0LL)
    || (ShopRootComponent__OpenStonePurchaseMenu((ShopRootComponent_o *)this, v3->fields.state, 0LL),
        (this = (ShopRootComponent___c__DisplayClass82_0_o *)v3->fields.__4__this) == 0LL)
    || (ShopRootComponent__OpenEventItemWindow((ShopRootComponent_o *)this, v3->fields.state, v3->fields.eventId, 0LL),
        (v12 = v3->fields.__4__this) == 0LL) )
  {
LABEL_11:
    sub_1BC3264(this, method);
  }
  *(_QWORD *)&v12->fields.state = (unsigned int)v3->fields.state;
}


void __fastcall ShopRootComponent___c__DisplayClass82_0___SelectMenu_b__1(
        ShopRootComponent___c__DisplayClass82_0_o *this,
        const MethodInfo *method)
{
  ShopRootComponent___c__DisplayClass82_0_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct ShopRootComponent_o *_4__this; // x8
  struct ShopRootComponent_o *v8; // x8
  ShopPlayVoiceComponent_o *shopPlayVoiceComponent; // x20
  ShopRootComponent___c__DisplayClass82_0_o *v10; // x21
  ShopRootConstants_c *v11; // x8
  int32_t eventId; // w20
  int32_t *p_DEFAULT_FIGURE_ID; // x8
  int32_t *p_DEFAULT_FIGURE_LIMIT_CNT; // x9
  struct ShopRootConstants_StaticFields *static_fields; // x9
  struct ShopRootComponent_o *v16; // x10
  int32_t v17; // w21
  int32_t v18; // w22
  ShopPlayVoiceComponent_o *v19; // x23
  StandFigureBack_o *standFigureBack; // x24
  System_Action_o *_9__2; // x25
  int32_t v22; // w2
  const MethodInfo *v23; // x3

  v2 = this;
  if ( (byte_4AFE3E4 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    sub_1BC3008(&Method_DataManager_GetMasterData_GuideMaster___, v3);
    sub_1BC3008(&ShopRootConstants_TypeInfo, v4);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    this = (ShopRootComponent___c__DisplayClass82_0_o *)sub_1BC3008(
                                                          &Method_ShopRootComponent___c__DisplayClass82_0__SelectMenu_b__2__,
                                                          v6);
    byte_4AFE3E4 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_23;
  this = (ShopRootComponent___c__DisplayClass82_0_o *)_4__this->fields.shopPlayVoiceComponent;
  if ( !this )
    goto LABEL_23;
  ShopPlayVoiceComponent__StopVoice((ShopPlayVoiceComponent_o *)this, 0LL);
  if ( v2->fields.state != 15 )
    goto LABEL_21;
  v8 = v2->fields.__4__this;
  if ( !v8 )
    goto LABEL_23;
  shopPlayVoiceComponent = v8->fields.shopPlayVoiceComponent;
  this = (ShopRootComponent___c__DisplayClass82_0_o *)ShopPlayVoiceConstants__GetEnterVoiceFlag(15, 0LL);
  if ( !shopPlayVoiceComponent )
    goto LABEL_23;
  if ( !ShopPlayVoiceComponent__CheckVoiceFlag(shopPlayVoiceComponent, (int32_t)this, 0LL) )
    goto LABEL_21;
  this = (ShopRootComponent___c__DisplayClass82_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (ShopRootComponent___c__DisplayClass82_0_o *)DataManager__GetMasterData_object_(
                                                              (DataManager_o *)this,
                                                              (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_GuideMaster___)) == 0LL )
  {
LABEL_23:
    sub_1BC3264(this, method);
  }
  this = (ShopRootComponent___c__DisplayClass82_0_o *)GuideMaster__getGuideData((GuideMaster_o *)this, 3, 0LL);
  v10 = this;
  v11 = ShopRootConstants_TypeInfo;
  if ( !ShopRootConstants_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
    v11 = ShopRootConstants_TypeInfo;
    if ( v10 )
      goto LABEL_13;
LABEL_15:
    static_fields = v11->static_fields;
    eventId = 0;
    p_DEFAULT_FIGURE_ID = &static_fields->DEFAULT_FIGURE_ID;
    p_DEFAULT_FIGURE_LIMIT_CNT = &static_fields->DEFAULT_FIGURE_LIMIT_CNT;
    goto LABEL_16;
  }
  if ( !this )
    goto LABEL_15;
LABEL_13:
  eventId = v10->fields.eventId;
  p_DEFAULT_FIGURE_ID = &v10->fields.state;
  p_DEFAULT_FIGURE_LIMIT_CNT = (int32_t *)&v10->fields.__9__2;
LABEL_16:
  v16 = v2->fields.__4__this;
  if ( !v16 )
    goto LABEL_23;
  v17 = *p_DEFAULT_FIGURE_ID;
  v18 = *p_DEFAULT_FIGURE_LIMIT_CNT;
  v19 = v16->fields.shopPlayVoiceComponent;
  standFigureBack = v16->fields.standFigureBack;
  _9__2 = v2->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v2,
      Method_ShopRootComponent___c__DisplayClass82_0__SelectMenu_b__2__,
      0LL);
    v2->fields.__9__2 = _9__2;
    sub_1BC2FAC((CGThumbnailListItem_o *)&v2->fields.__9__2, (int32_t)_9__2, v22, v23);
  }
  if ( !v19 )
    goto LABEL_23;
  ShopPlayVoiceComponent__ReloadVoice(v19, standFigureBack, v17, v18, eventId, _9__2, 0LL);
LABEL_21:
  this = (ShopRootComponent___c__DisplayClass82_0_o *)v2->fields.__4__this;
  if ( !this )
    goto LABEL_23;
  ShopRootComponent__SetFadeIn((ShopRootComponent_o *)this, v2->fields.state, 0LL);
}


void __fastcall ShopRootComponent___c__DisplayClass82_0___SelectMenu_b__2(
        ShopRootComponent___c__DisplayClass82_0_o *this,
        const MethodInfo *method)
{
  ShopRootComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BC3264(0LL, method);
  ShopRootComponent__PlayVoiceEnter(_4__this, this->fields.state, 0LL);
}


void __fastcall ShopRootComponent___c__DisplayClass83_0___ctor(
        ShopRootComponent___c__DisplayClass83_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ShopRootComponent___c__DisplayClass83_0___BackMenu_b__0(
        ShopRootComponent___c__DisplayClass83_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ShopRootComponent_o *_4__this; // x0
  int32_t state; // w21
  ShopSceneListViewControlHelper_o *listViewHelper; // x20
  const MethodInfo *v7; // x4
  System_Action_o *_9__1; // x23
  int32_t v9; // w22
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct ShopRootComponent_o *v12; // x8

  if ( (byte_4AFE3E5 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    sub_1BC3008(&Method_ShopRootComponent___c__DisplayClass83_0__BackMenu_b__1__, v3);
    byte_4AFE3E5 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_10;
  state = this->fields.state;
  listViewHelper = _4__this->fields.listViewHelper;
  _4__this = (ShopRootComponent_o *)ShopRootComponent__GetStateOnBack(_4__this, state, 0LL);
  _9__1 = this->fields.__9__1;
  v9 = (int)_4__this;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_ShopRootComponent___c__DisplayClass83_0__BackMenu_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.__9__1, (int32_t)_9__1, v10, v11);
  }
  if ( !listViewHelper
    || (ShopSceneListViewControlHelper__SetListViewOnBackMenu(listViewHelper, state, v9, _9__1, v7),
        (_4__this = this->fields.__4__this) == 0LL)
    || (ShopRootComponent__CloseEventItemWindow(_4__this, 0LL), (v12 = this->fields.__4__this) == 0LL) )
  {
LABEL_10:
    sub_1BC3264(_4__this, method);
  }
  v12->fields.inputState = 3;
}


void __fastcall ShopRootComponent___c__DisplayClass83_0___BackMenu_b__1(
        ShopRootComponent___c__DisplayClass83_0_o *this,
        const MethodInfo *method)
{
  ShopRootComponent___c__DisplayClass83_0_o *v2; // x19
  __int64 v3; // x1
  struct ShopRootComponent_o *_4__this; // x8
  struct ShopRootComponent_o *v5; // x8
  ShopPlayVoiceComponent_o *shopPlayVoiceComponent; // x20
  StandFigureBack_o *standFigureBack; // x21
  int32_t figureSvtId; // w22
  int32_t figureSvtLimitCnt; // w23
  int32_t defaultFaceId; // w24
  System_Action_o *_9__2; // x25
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  v2 = this;
  if ( (byte_4AFE3E6 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    this = (ShopRootComponent___c__DisplayClass83_0_o *)sub_1BC3008(
                                                          &Method_ShopRootComponent___c__DisplayClass83_0__BackMenu_b__2__,
                                                          v3);
    byte_4AFE3E6 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  this = (ShopRootComponent___c__DisplayClass83_0_o *)_4__this->fields.shopPlayVoiceComponent;
  if ( !this )
    goto LABEL_13;
  ShopPlayVoiceComponent__StopVoice((ShopPlayVoiceComponent_o *)this, 0LL);
  if ( v2->fields.state != 15 )
    goto LABEL_11;
  v5 = v2->fields.__4__this;
  if ( !v5 )
    goto LABEL_13;
  shopPlayVoiceComponent = v5->fields.shopPlayVoiceComponent;
  standFigureBack = v5->fields.standFigureBack;
  figureSvtId = v5->fields.figureSvtId;
  figureSvtLimitCnt = v5->fields.figureSvtLimitCnt;
  defaultFaceId = v5->fields.defaultFaceId;
  _9__2 = v2->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v2,
      Method_ShopRootComponent___c__DisplayClass83_0__BackMenu_b__2__,
      0LL);
    v2->fields.__9__2 = _9__2;
    sub_1BC2FAC((CGThumbnailListItem_o *)&v2->fields.__9__2, (int32_t)_9__2, v12, v13);
  }
  if ( !shopPlayVoiceComponent )
LABEL_13:
    sub_1BC3264(this, method);
  ShopPlayVoiceComponent__ReloadVoice(
    shopPlayVoiceComponent,
    standFigureBack,
    figureSvtId,
    figureSvtLimitCnt,
    defaultFaceId,
    _9__2,
    0LL);
LABEL_11:
  this = (ShopRootComponent___c__DisplayClass83_0_o *)v2->fields.__4__this;
  if ( !this )
    goto LABEL_13;
  ShopRootComponent__SetFadeIn((ShopRootComponent_o *)this, v2->fields.state, 0LL);
}


void __fastcall ShopRootComponent___c__DisplayClass83_0___BackMenu_b__2(
        ShopRootComponent___c__DisplayClass83_0_o *this,
        const MethodInfo *method)
{
  ShopRootComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BC3264(0LL, method);
  ShopRootComponent__PlayVoiceBack(_4__this, this->fields.state, 0LL);
}


void __fastcall ShopRootComponent___c__DisplayClass84_0___ctor(
        ShopRootComponent___c__DisplayClass84_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ShopRootComponent___c__DisplayClass84_0___SetFadeOut_b__0(
        ShopRootComponent___c__DisplayClass84_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.endFade, 0LL);
}


void __fastcall ShopRootComponent___c__DisplayClass87_0___ctor(
        ShopRootComponent___c__DisplayClass87_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ShopRootComponent___c__DisplayClass87_0___OpenConfirmMenu_b__0(
        ShopRootComponent___c__DisplayClass87_0_o *this,
        const MethodInfo *method)
{
  ShopRootComponent___c__DisplayClass87_0_o *v2; // x19
  __int64 v3; // x1
  Il2CppObject *_4__this; // x23
  struct ShopBuyItemListViewItem_o *item; // x8
  ShopBuyItemConfirmMenu_o *monitor; // x19
  ShopEntity_o *Shop_k__BackingField; // x20
  int32_t ShopKind_k__BackingField; // w21
  System_Action_int__o *v9; // x22

  v2 = this;
  if ( (byte_4AFE3E7 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_int__TypeInfo, method);
    this = (ShopRootComponent___c__DisplayClass87_0_o *)sub_1BC3008(
                                                          &Method_ShopRootComponent_SelectedBuyItemConfirm__,
                                                          v3);
    byte_4AFE3E7 = 1;
  }
  _4__this = (Il2CppObject *)v2->fields.__4__this;
  if ( !_4__this
    || (item = v2->fields.item) == 0LL
    || (monitor = (ShopBuyItemConfirmMenu_o *)_4__this[9].monitor,
        Shop_k__BackingField = item->fields._Shop_k__BackingField,
        ShopKind_k__BackingField = item->fields._ShopKind_k__BackingField,
        v9 = (System_Action_int__o *)sub_1BC3254(System_Action_int__TypeInfo),
        System_Action_int____ctor(v9, _4__this, Method_ShopRootComponent_SelectedBuyItemConfirm__, 0LL),
        !monitor) )
  {
    sub_1BC3264(this, method);
  }
  ShopBuyItemConfirmMenu__Open(monitor, Shop_k__BackingField, ShopKind_k__BackingField, v9, 0, 0, 0LL, 8, 0LL);
}


void __fastcall ShopRootComponent___c__DisplayClass87_0___OpenConfirmMenu_b__1(
        ShopRootComponent___c__DisplayClass87_0_o *this,
        const MethodInfo *method)
{
  ShopRootComponent___c__DisplayClass87_0_o *v2; // x19
  __int64 v3; // x1
  Il2CppObject *_4__this; // x21
  ShopResetConfirmDialogComponent_o *monitor; // x20
  ShopBuyItemListViewItem_o *item; // x19
  System_Action_bool__o *v7; // x22

  v2 = this;
  if ( (byte_4AFE3E8 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_bool__TypeInfo, method);
    this = (ShopRootComponent___c__DisplayClass87_0_o *)sub_1BC3008(
                                                          &Method_ShopRootComponent_CloseShopResetDialog__,
                                                          v3);
    byte_4AFE3E8 = 1;
  }
  _4__this = (Il2CppObject *)v2->fields.__4__this;
  if ( !_4__this
    || (monitor = (ShopResetConfirmDialogComponent_o *)_4__this[24].monitor,
        item = v2->fields.item,
        v7 = (System_Action_bool__o *)sub_1BC3254(System_Action_bool__TypeInfo),
        System_Action_bool____ctor(v7, _4__this, Method_ShopRootComponent_CloseShopResetDialog__, 0LL),
        !monitor) )
  {
    sub_1BC3264(this, method);
  }
  ShopResetConfirmDialogComponent__Open(monitor, item, v7, 0LL);
}


void __fastcall ShopRootComponent___c__DisplayClass87_0___OpenConfirmMenu_b__2(
        ShopRootComponent___c__DisplayClass87_0_o *this,
        const MethodInfo *method)
{
  ShopRootComponent___c__DisplayClass87_0_o *v2; // x19
  __int64 v3; // x1
  Il2CppObject *_4__this; // x23
  struct ShopBuyItemListViewItem_o *item; // x8
  ShopBuyItemConfirmMenu_o *monitor; // x19
  ShopEntity_o *Shop_k__BackingField; // x20
  int32_t ShopKind_k__BackingField; // w21
  System_Action_int__o *v9; // x22

  v2 = this;
  if ( (byte_4AFE3E9 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_int__TypeInfo, method);
    this = (ShopRootComponent___c__DisplayClass87_0_o *)sub_1BC3008(
                                                          &Method_ShopRootComponent_SelectedBuyItemConfirm__,
                                                          v3);
    byte_4AFE3E9 = 1;
  }
  _4__this = (Il2CppObject *)v2->fields.__4__this;
  if ( !_4__this
    || (item = v2->fields.item) == 0LL
    || (monitor = (ShopBuyItemConfirmMenu_o *)_4__this[9].monitor,
        Shop_k__BackingField = item->fields._Shop_k__BackingField,
        ShopKind_k__BackingField = item->fields._ShopKind_k__BackingField,
        v9 = (System_Action_int__o *)sub_1BC3254(System_Action_int__TypeInfo),
        System_Action_int____ctor(v9, _4__this, Method_ShopRootComponent_SelectedBuyItemConfirm__, 0LL),
        !monitor) )
  {
    sub_1BC3264(this, method);
  }
  ShopBuyItemConfirmMenu__Open(monitor, Shop_k__BackingField, ShopKind_k__BackingField, v9, 0, 0, 0LL, 8, 0LL);
}


void __fastcall ShopRootComponent___c__DisplayClass87_0___OpenConfirmMenu_b__3(
        ShopRootComponent___c__DisplayClass87_0_o *this,
        const MethodInfo *method)
{
  ShopRootComponent___c__DisplayClass87_0_o *v2; // x19
  __int64 v3; // x1
  ShopRootComponent_o *_4__this; // x22
  struct ShopBuyItemListViewItem_o *item; // x8
  ShopEntity_o *Shop_k__BackingField; // x20
  PurchaseShopCheckWarningDialog_o *purchaseShopCheckWarningDialog; // x21
  int32_t TargetId; // w0
  PurchaseShopCheckWarningDialog_ClickDelegate_o *_9__4; // x23
  ShopRootComponent___c__DisplayClass87_0_o *v10; // x22
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  v2 = this;
  if ( (byte_4AFE3EA & 1) == 0 )
  {
    sub_1BC3008(&PurchaseShopCheckWarningDialog_ClickDelegate_TypeInfo, method);
    this = (ShopRootComponent___c__DisplayClass87_0_o *)sub_1BC3008(
                                                          &Method_ShopRootComponent___c__DisplayClass87_0__OpenConfirmMenu_b__4__,
                                                          v3);
    byte_4AFE3EA = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_10;
  item = v2->fields.item;
  if ( !item )
    goto LABEL_10;
  Shop_k__BackingField = item->fields._Shop_k__BackingField;
  if ( !Shop_k__BackingField )
    goto LABEL_10;
  purchaseShopCheckWarningDialog = _4__this->fields.purchaseShopCheckWarningDialog;
  TargetId = ShopEntity__get_TargetId(item->fields._Shop_k__BackingField, 0LL);
  this = (ShopRootComponent___c__DisplayClass87_0_o *)ShopRootComponent__GetClassBoardReleaseItemList(
                                                        _4__this,
                                                        TargetId,
                                                        0LL);
  _9__4 = v2->fields.__9__4;
  v10 = this;
  if ( !_9__4 )
  {
    _9__4 = (PurchaseShopCheckWarningDialog_ClickDelegate_o *)sub_1BC3254(PurchaseShopCheckWarningDialog_ClickDelegate_TypeInfo);
    PurchaseShopCheckWarningDialog_ClickDelegate___ctor(
      _9__4,
      (Il2CppObject *)v2,
      Method_ShopRootComponent___c__DisplayClass87_0__OpenConfirmMenu_b__4__,
      0LL);
    v2->fields.__9__4 = _9__4;
    sub_1BC2FAC((CGThumbnailListItem_o *)&v2->fields.__9__4, (int32_t)_9__4, v11, v12);
  }
  if ( !purchaseShopCheckWarningDialog )
LABEL_10:
    sub_1BC3264(this, method);
  PurchaseShopCheckWarningDialog__Open(
    purchaseShopCheckWarningDialog,
    Shop_k__BackingField,
    (System_Collections_Generic_Dictionary_int__int__o *)v10,
    _9__4,
    0LL);
}


void __fastcall ShopRootComponent___c__DisplayClass87_0___OpenConfirmMenu_b__4(
        ShopRootComponent___c__DisplayClass87_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ShopRootComponent_o *_4__this; // x0

  if ( isDecide )
  {
    _4__this = this->fields.__4__this;
    if ( !_4__this )
      sub_1BC3264(0LL, isDecide);
    ShopRootComponent__SelectedBuyItemConfirm(_4__this, 1, 0LL);
  }
}


void __fastcall ShopRootComponent___c__DisplayClass88_0___ctor(
        ShopRootComponent___c__DisplayClass88_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ShopRootComponent___c__DisplayClass88_0___GetClassBoardReleaseItemList_b__0(
        ShopRootComponent___c__DisplayClass88_0_o *this,
        UserClassBoardSquareEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BC3264(this, 0LL);
  return x->fields.classBoardBaseId == this->fields.baseId;
}


void __fastcall ShopRootComponent___c__DisplayClass98_0___ctor(
        ShopRootComponent___c__DisplayClass98_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopRootComponent___c__DisplayClass98_0___SelectSellServantConfirm_b__0(
        ShopRootComponent___c__DisplayClass98_0_o *this,
        int32_t decide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  ServantSellConfirmMenu_o *_4__this; // x0
  Il2CppObject *v7; // x24
  ServantSellConfirmMenu_o *klass; // x20
  int32_t kind; // w19
  System_Int64_array *v10; // x21
  System_Int64_array *monitor; // x22
  System_Action_int__o *v12; // x23

  if ( (byte_4AFE3EB & 1) == 0 )
  {
    sub_1BC3008(&System_Action_int__TypeInfo, *(_QWORD *)&decide);
    sub_1BC3008(&Method_ShopRootComponent_SellServantConfirm__, v5);
    byte_4AFE3EB = 1;
  }
  _4__this = (ServantSellConfirmMenu_o *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_10;
  if ( decide )
  {
    _4__this = (ServantSellConfirmMenu_o *)_4__this->fields.closeLabel;
    if ( _4__this )
    {
      ServantSellConfirmMenu__Init(_4__this, 0LL);
      v7 = (Il2CppObject *)this->fields.__4__this;
      if ( v7 )
      {
        klass = (ServantSellConfirmMenu_o *)v7[12].klass;
        kind = this->fields.kind;
        v10 = (System_Int64_array *)v7[32].klass;
        monitor = (System_Int64_array *)v7[32].monitor;
        v12 = (System_Action_int__o *)sub_1BC3254(System_Action_int__TypeInfo);
        System_Action_int____ctor(v12, v7, Method_ShopRootComponent_SellServantConfirm__, 0LL);
        if ( klass )
        {
          ServantSellConfirmMenu__Open(klass, kind, v10, monitor, v12, 0LL);
          return;
        }
      }
    }
LABEL_10:
    sub_1BC3264(_4__this, *(_QWORD *)&decide);
  }
  ShopRootComponent__CloseSellServantConfirm((ShopRootComponent_o *)_4__this, 0LL);
}