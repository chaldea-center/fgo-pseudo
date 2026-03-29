void ShopRootComponent___ctor(ShopRootComponent_o *this, const MethodInfo *method)
{
  this->fields.saveScrollBarValue = -1.0;
  *(_QWORD *)&this->fields.buyCount = 0xFFFFFFFF00000001LL;
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0);
}


void ShopRootComponent__BackMenu(ShopRootComponent_o *this, int32_t state, const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  const MethodInfo *v14; // x2
  System_Action_o *v15; // x20
  ShopRootComponent_o *v16; // x0
  const MethodInfo *v17; // x3

  if ( (byte_4D2CBA9 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_ShopRootComponent___c__DisplayClass83_0__BackMenu_b__0__);
    sub_1C93AD4(&ShopRootComponent___c__DisplayClass83_0_TypeInfo);
    byte_4D2CBA9 = 1;
  }
  v5 = sub_1C93D20(ShopRootComponent___c__DisplayClass83_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C93D2C(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v5 + 24) = state;
  if ( state != 15 )
  {
    ShopRootComponent__PlayVoiceBack(this, state, v14);
    state = *(_DWORD *)(v5 + 24);
  }
  v15 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v15, (Il2CppObject *)v5, Method_ShopRootComponent___c__DisplayClass83_0__BackMenu_b__0__, 0);
  ShopRootComponent__SetFadeOut(v16, state, v15, v17);
}


// local variable allocation has failed, the output may be wrong!
bool ShopRootComponent__BackScene(ShopRootComponent_o *this, int32_t state, const MethodInfo *method)
{
  SceneJumpInfo_o *jumpInfo; // x0
  void *myFSM; // x0
  bool v7; // w19
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  struct SceneJumpInfo_o *v14; // x8
  struct SceneJumpInfo_o *v15; // x8
  struct SceneJumpInfo_o *v16; // x8
  TerminalPramsManager_c *v17; // x0
  struct ShopSceneListViewControlHelper_o *listViewHelper; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v19; // x20
  EventEntity_o *v20; // x21
  Il2CppObject *Instance; // x20
  System_String_o *v23; // x22
  Il2CppObject *EventName; // x0
  System_String_o *v25; // x21
  System_Action_o *v26; // x22

  if ( (byte_4D2CBCD & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C93AD4(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&Method_ShopRootComponent_OnEndDialogEventCloseWarning__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_6260/*"EventItem"*/);
    sub_1C93AD4(&StringLiteral_3457/*"CLICK_BACK"*/);
    sub_1C93AD4(&StringLiteral_13182/*"StoneFragments"*/);
    sub_1C93AD4(&StringLiteral_12192/*"SHOP_EVENT_RETURN_ERROR"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2CBCD = 1;
  }
  switch ( state )
  {
    case 1:
      jumpInfo = this->fields.jumpInfo;
      if ( !jumpInfo || !SceneJumpInfo__IsEnableReturnScene(jumpInfo, 0) )
        goto LABEL_8;
      myFSM = this->fields.jumpInfo;
      if ( !myFSM )
        goto LABEL_51;
      if ( SceneJumpInfo__ReturnScene((SceneJumpInfo_o *)myFSM, 0) )
        return 1;
LABEL_8:
      myFSM = this->fields.myFSM;
      if ( !myFSM )
        goto LABEL_51;
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myFSM, (System_String_o *)StringLiteral_3457/*"CLICK_BACK"*/, 0);
      return 1;
    case 2:
    case 3:
    case 5:
    case 6:
      return 0;
    case 4:
      v14 = this->fields.jumpInfo;
      if ( !v14 || !System_String__op_Equality(v14->fields.name, (System_String_o *)StringLiteral_13182/*"StoneFragments"*/, 0) )
        return 0;
      myFSM = this->fields.jumpInfo;
      if ( !myFSM )
        goto LABEL_51;
      if ( !SceneJumpInfo__ReturnScene((SceneJumpInfo_o *)myFSM, 0) )
        return 0;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v7 = 1;
      TerminalPramsManager__set_IsAutoOpenMasterMission(1, 0);
      return v7;
    case 7:
      v15 = this->fields.jumpInfo;
      if ( !v15 || !System_String__op_Equality(v15->fields.name, (System_String_o *)StringLiteral_6260/*"EventItem"*/, 0) )
        return 0;
      myFSM = this->fields.jumpInfo;
      if ( !myFSM )
        goto LABEL_51;
      return SceneJumpInfo__ReturnScene((SceneJumpInfo_o *)myFSM, 0);
    case 8:
      v16 = this->fields.jumpInfo;
      if ( !v16 )
        return 0;
      if ( !System_String__op_Equality(v16->fields.name, (System_String_o *)StringLiteral_6260/*"EventItem"*/, 0) )
        goto LABEL_38;
      myFSM = this->fields.jumpInfo;
      if ( !myFSM )
        goto LABEL_51;
      if ( !*((_DWORD *)myFSM + 6) || !SceneJumpInfo__ReturnScene((SceneJumpInfo_o *)myFSM, 0) )
      {
LABEL_38:
        myFSM = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( myFSM )
        {
          myFSM = DataManager__GetMasterData_object_(
                    (DataManager_o *)myFSM,
                    (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_EventMaster___);
          listViewHelper = this->fields.listViewHelper;
          if ( listViewHelper )
          {
            v19 = (DataMasterBase_TMaster__TEntity__PKType__o *)myFSM;
            myFSM = listViewHelper->fields.eventListViewManager;
            if ( myFSM )
            {
              myFSM = ShopEventListViewManager__GetItem(
                        (ShopEventListViewManager_o *)myFSM,
                        this->fields.selectedEventIndex,
                        0);
              if ( myFSM )
              {
                if ( v19 )
                {
                  myFSM = DataMasterBase_object__object__int___GetEntity(
                            v19,
                            *((_DWORD *)myFSM + 30),
                            (const MethodInfo_3463274 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
                  if ( myFSM )
                  {
                    v20 = (EventEntity_o *)myFSM;
                    if ( EventEntity__IsOpen((EventEntity_o *)myFSM, 1, 0) )
                      return 0;
                    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    v23 = LocalizationManager__Get((System_String_o *)StringLiteral_12192/*"SHOP_EVENT_RETURN_ERROR"*/, 0);
                    EventName = (Il2CppObject *)EventEntity__getEventName(v20, 0);
                    v25 = System_String__Format(v23, EventName, 0);
                    v26 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
                    System_Action___ctor(
                      v26,
                      (Il2CppObject *)this,
                      Method_ShopRootComponent_OnEndDialogEventCloseWarning__,
                      0);
                    if ( Instance )
                    {
                      v7 = 1;
                      CommonUI__OpenNotificationDialog(
                        (CommonUI_o *)Instance,
                        (System_String_o *)StringLiteral_1/*""*/,
                        v25,
                        v26,
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
                      return v7;
                    }
                  }
                }
              }
            }
          }
        }
LABEL_51:
        sub_1C93D2C(myFSM, *(_QWORD *)&state);
      }
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4D2AFE8 )
      {
        sub_1C93AD4(&TerminalPramsManager_TypeInfo);
        byte_4D2AFE8 = 1;
      }
      v17 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v17 = TerminalPramsManager_TypeInfo;
      }
      v7 = 1;
      v17->static_fields->_IsAutoResume_k__BackingField = 1;
      return v7;
    default:
      if ( state == 22 && ShopRootComponent__IsExistBackClassBoardInfo(this, *(const MethodInfo **)&state) )
      {
        this->fields.jumpInfo = 0;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.jumpInfo, 0, v8, v9, v10, v11, v12, v13);
      }
      return 0;
  }
}


void ShopRootComponent__CheckSellServantExceeded(ShopRootComponent_o *this, const MethodInfo *method)
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
  if ( (byte_4D2CBB4 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_int__TypeInfo);
    this = (ShopRootComponent_o *)sub_1C93AD4(&Method_ShopRootComponent_SellServantExceededConfirm__);
    byte_4D2CBB4 = 1;
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
    if ( ServantSellMenu__get_IsSellEquipedCmdCodeLastServant(servantSellMenu, 0) )
      goto LABEL_7;
    servantSellConfirmMenu = v3->fields.servantSellConfirmMenu;
    selectedServantIds = v3->fields.selectedServantIds;
    selectedCommandCodeIds = v3->fields.selectedCommandCodeIds;
    v9 = (System_Action_int__o *)sub_1C93D20(System_Action_int__TypeInfo);
    System_Action_int____ctor(v9, (Il2CppObject *)v3, Method_ShopRootComponent_SellServantExceededConfirm__, 0);
    if ( !servantSellConfirmMenu )
LABEL_11:
      sub_1C93D2C(servantSellMenu, v4);
    ServantSellConfirmMenu__Open(servantSellConfirmMenu, 2, selectedServantIds, selectedCommandCodeIds, v9, 0);
  }
}


bool ShopRootComponent__CheckServerLimitTime(ShopRootComponent_o *this, int32_t state, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4D2CBDA & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    byte_4D2CBDA = 1;
  }
  if ( (unsigned int)state > 0x16 || ((1 << state) & 0x75DDFC) == 0 )
    return 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance )
    sub_1C93D2C(0, v5);
  return NetworkManager__CheckServerLimitTime((NetworkManager_o *)Instance, 0);
}


void ShopRootComponent__CheckTutorial(ShopRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  NetworkManager_ResultCallbackFunc_o *v4; // x20
  Il2CppObject *Request_object; // x0
  __int64 v6; // x1

  if ( (byte_4D2CBCA & 1) == 0 )
  {
    sub_1C93AD4(&Method_NetworkManager_getRequest_TutorialSetRequest___);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_ShopRootComponent_QuitHelp__);
    sub_1C93AD4(&TutorialFlag_TypeInfo);
    sub_1C93AD4(&StringLiteral_22655/*"ok"*/);
    byte_4D2CBCA = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_41140656(103, 0) )
  {
    ShopRootComponent__QuitHelp(this, (System_String_o *)StringLiteral_22655/*"ok"*/, v3);
  }
  else
  {
    v4 = (NetworkManager_ResultCallbackFunc_o *)sub_1C93D20(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(v4, (Il2CppObject *)this, Method_ShopRootComponent_QuitHelp__, 0);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v4,
                       (const MethodInfo_322FB9C *)Method_NetworkManager_getRequest_TutorialSetRequest___);
    if ( !Request_object )
      sub_1C93D2C(0, v6);
    TutorialSetRequest__beginRequest((TutorialSetRequest_o *)Request_object, 103, 0);
  }
}


void ShopRootComponent__CloseDetaiCheckConfirm(ShopRootComponent_o *this, bool decide, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  struct ShopSceneListViewControlHelper_o *listViewHelper; // x8
  ShopBuyItemListViewItem_o *Item; // x21
  struct ShopEntity_o *Shop_k__BackingField; // x8
  ShopDetailEntity_o *ShopDetailEntity; // x0
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x1

  if ( (byte_4D2CBD5 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_ShopDetailMaster___);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2CBD5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0), (listViewHelper = this->fields.listViewHelper) == 0)
    || (Instance = (Il2CppObject *)listViewHelper->fields.buyItemListViewManager) == 0
    || (Item = ShopBuyItemListViewManager__GetItem(
                 (ShopBuyItemListViewManager_o *)Instance,
                 this->fields.selectedItemIndex,
                 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ShopDetailMaster___),
        !Item)
    || (Shop_k__BackingField = Item->fields._Shop_k__BackingField) == 0
    || !Instance )
  {
    sub_1C93D2C(Instance, v6);
  }
  ShopDetailEntity = ShopDetailMaster__getShopDetailEntity(
                       (ShopDetailMaster_o *)Instance,
                       Shop_k__BackingField->fields.id,
                       0);
  ShopRootComponent__SetFrequencyTypeCheckList((ShopRootComponent_o *)ShopDetailEntity, ShopDetailEntity, decide, v11);
  if ( decide )
    ShopRootComponent__RequestShop(this, v12);
  else
    ShopRootComponent__CloseItemConfirm(this, v12);
}


void ShopRootComponent__CloseEventItemWindow(ShopRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *shopEventItemDrawBase; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  ShopRootConstants_c *v5; // x8
  UnityEngine_GameObject_o *v6; // x20

  if ( (byte_4D2CBD9 & 1) == 0 )
  {
    sub_1C93AD4(&ShopRootConstants_TypeInfo);
    byte_4D2CBD9 = 1;
  }
  shopEventItemDrawBase = (UnityEngine_Component_o *)this->fields.shopEventItemDrawBase;
  if ( !shopEventItemDrawBase )
    goto LABEL_8;
  gameObject = UnityEngine_Component__get_gameObject(shopEventItemDrawBase, 0);
  v5 = ShopRootConstants_TypeInfo;
  v6 = gameObject;
  if ( !ShopRootConstants_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
    v5 = ShopRootConstants_TypeInfo;
  }
  TweenAlpha__Begin(v6, v5->static_fields->CLOSE_TIME, 0.0, 0);
  shopEventItemDrawBase = (UnityEngine_Component_o *)this->fields.currencyInfoController;
  if ( !shopEventItemDrawBase )
LABEL_8:
    sub_1C93D2C(shopEventItemDrawBase, method);
  ShopCurrencyInfoController__StopUpdateRemainTime((ShopCurrencyInfoController_o *)shopEventItemDrawBase, 0);
}


void ShopRootComponent__CloseItemConfirm(ShopRootComponent_o *this, const MethodInfo *method)
{
  ShopBuyItemConfirmMenu_o *buyItemConfirmMenu; // x0
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x2
  int32_t state; // w20
  struct ShopSceneListViewControlHelper_o *listViewHelper; // x8
  ShopBuyItemListViewItem_o *v8; // x20
  ShopEntity_o *priceInfoBase; // x21
  ShopMaster_o *v10; // x22
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x2
  ShopSceneListViewControlHelper_o *v14; // x21
  const MethodInfo *v15; // x2

  if ( (byte_4D2CBB3 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_ShopMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    byte_4D2CBB3 = 1;
  }
  if ( this->fields.inputState != 3 )
    return;
  buyItemConfirmMenu = this->fields.buyItemConfirmMenu;
  this->fields.inputState = 4;
  if ( !buyItemConfirmMenu )
    goto LABEL_60;
  if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)buyItemConfirmMenu, 0) )
  {
    buyItemConfirmMenu = this->fields.buyItemConfirmMenu;
    if ( !buyItemConfirmMenu )
      goto LABEL_60;
    ShopBuyItemConfirmMenu__Close(buyItemConfirmMenu, 0);
  }
  buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)this->fields.buyBulkItemConfirmMenu;
  if ( !buyItemConfirmMenu )
    goto LABEL_60;
  if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)buyItemConfirmMenu, 0) )
  {
    buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)this->fields.buyBulkItemConfirmMenu;
    if ( !buyItemConfirmMenu )
      goto LABEL_60;
    ShopBuyBulkItemConfirmMenu__Close((ShopBuyBulkItemConfirmMenu_o *)buyItemConfirmMenu, 0);
  }
  buyItemConfirmMenu = this->fields.ApSeedExchangeConfirmMenu;
  if ( !buyItemConfirmMenu )
    goto LABEL_60;
  if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)buyItemConfirmMenu, 0) )
  {
    buyItemConfirmMenu = this->fields.ApSeedExchangeConfirmMenu;
    if ( !buyItemConfirmMenu )
      goto LABEL_60;
    ShopBuyItemConfirmMenu__Close(buyItemConfirmMenu, 0);
  }
  buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)this->fields.ApSeedBulkExchangeConfirmMenu;
  if ( !buyItemConfirmMenu )
    goto LABEL_60;
  if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)buyItemConfirmMenu, 0) )
  {
    buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)this->fields.ApSeedBulkExchangeConfirmMenu;
    if ( !buyItemConfirmMenu )
      goto LABEL_60;
    ShopBuyBulkItemConfirmMenu__Close((ShopBuyBulkItemConfirmMenu_o *)buyItemConfirmMenu, 0);
  }
  buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)this->fields.buyStorageConfirmDialog;
  if ( !buyItemConfirmMenu )
    goto LABEL_60;
  if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)buyItemConfirmMenu, 0) )
  {
    buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)this->fields.buyStorageConfirmDialog;
    if ( !buyItemConfirmMenu )
      goto LABEL_60;
    BuyStorageConfirmDialogComponent__Close((BuyStorageConfirmDialogComponent_o *)buyItemConfirmMenu, 0);
  }
  buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)this->fields.buyStorageNotificationDialog;
  if ( !buyItemConfirmMenu )
    goto LABEL_60;
  if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)buyItemConfirmMenu, 0) )
  {
    buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)this->fields.buyStorageNotificationDialog;
    if ( !buyItemConfirmMenu )
      goto LABEL_60;
    BuyStorageConfirmDialogComponent__Close((BuyStorageConfirmDialogComponent_o *)buyItemConfirmMenu, 0);
  }
  buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)this->fields.shopResetConfirmDialog;
  if ( !buyItemConfirmMenu )
    goto LABEL_60;
  if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)buyItemConfirmMenu, 0) )
  {
    buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)this->fields.shopResetConfirmDialog;
    if ( !buyItemConfirmMenu )
      goto LABEL_60;
    ShopResetConfirmDialogComponent__Close_35858420((ShopResetConfirmDialogComponent_o *)buyItemConfirmMenu, 0, v4);
  }
  buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)this->fields.purchaseShopCheckWarningDialog;
  if ( !buyItemConfirmMenu )
LABEL_60:
    sub_1C93D2C(buyItemConfirmMenu, method);
  buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)UnityEngine_Behaviour__get_isActiveAndEnabled(
                                                     (UnityEngine_Behaviour_o *)buyItemConfirmMenu,
                                                     0);
  if ( ((unsigned __int8)buyItemConfirmMenu & 1) != 0 )
  {
    buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)this->fields.purchaseShopCheckWarningDialog;
    if ( !buyItemConfirmMenu )
      goto LABEL_60;
    PurchaseShopCheckWarningDialog__Close((PurchaseShopCheckWarningDialog_o *)buyItemConfirmMenu, 0);
  }
  state = this->fields.state;
  if ( state == 16 || state == 8 )
  {
    listViewHelper = this->fields.listViewHelper;
    if ( !listViewHelper )
      goto LABEL_60;
    buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)listViewHelper->fields.buyItemListViewManager;
    if ( !buyItemConfirmMenu )
      goto LABEL_60;
    buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)ShopBuyItemListViewManager__GetItem(
                                                       (ShopBuyItemListViewManager_o *)buyItemConfirmMenu,
                                                       this->fields.selectedItemIndex,
                                                       0);
    if ( !buyItemConfirmMenu )
      goto LABEL_60;
    v8 = (ShopBuyItemListViewItem_o *)buyItemConfirmMenu;
    priceInfoBase = (ShopEntity_o *)buyItemConfirmMenu->fields.priceInfoBase;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ShopMaster___);
    if ( this->fields.buyCount >= 1 )
    {
      v10 = (ShopMaster_o *)buyItemConfirmMenu;
      if ( !buyItemConfirmMenu )
        goto LABEL_60;
      if ( ShopMaster__IsOpenPurchaseCloseShop((ShopMaster_o *)buyItemConfirmMenu, priceInfoBase, 0)
        && ShopRootComponent__BackScene(this, this->fields.state, v11) )
      {
        return;
      }
      if ( this->fields.buyCount >= 1 && ShopMaster__IsOpenPurchaseCloseShop(v10, priceInfoBase, 0) )
      {
        buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)this->fields.listViewHelper;
        if ( buyItemConfirmMenu )
        {
          ShopSceneListViewControlHelper__SetListViewOnCloseEventShop(
            (ShopSceneListViewControlHelper_o *)buyItemConfirmMenu,
            this->fields.state,
            v12);
          method = (const MethodInfo *)(unsigned int)this->fields.state;
          if ( (_DWORD)method != 16 )
          {
            if ( (_DWORD)method == 8 )
            {
              LODWORD(method) = 7;
              this->fields.state = 7;
            }
            goto LABEL_59;
          }
          buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)this->fields.topListViewManager;
          if ( buyItemConfirmMenu )
          {
            ShopTopListViewManager__CreateList((ShopTopListViewManager_o *)buyItemConfirmMenu, 0, -1.0, 0);
            LODWORD(method) = this->fields.state;
LABEL_59:
            ShopRootComponent__BackMenu(this, (int32_t)method, v13);
            return;
          }
        }
        goto LABEL_60;
      }
    }
    ShopBuyItemListViewItem__Modify(v8, priceInfoBase, 0);
    state = this->fields.state;
  }
  v14 = this->fields.listViewHelper;
  if ( !v14 )
    goto LABEL_60;
  ShopSceneListViewControlHelper__SetBuyItemListViewModify(this->fields.listViewHelper, state, v5);
  ShopSceneListViewControlHelper__SetBuyItemListViewInput(v14, state, v15);
  this->fields.inputState = 2;
}


void ShopRootComponent__CloseSellServantConfirm(ShopRootComponent_o *this, const MethodInfo *method)
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
      if ( !ServantSellConfirmMenu__get_IsCommandCodeRemoveResult(servantSellConfirmMenu, 0) )
        ShopRootComponent__PlayVoiceBack(this, this->fields.state, v4);
    }
    servantSellConfirmMenu = this->fields.servantSellConfirmMenu;
    if ( servantSellConfirmMenu )
    {
      servantSellConfirmMenu = (ServantSellConfirmMenu_o *)UnityEngine_Behaviour__get_isActiveAndEnabled(
                                                             (UnityEngine_Behaviour_o *)servantSellConfirmMenu,
                                                             0);
      if ( ((unsigned __int8)servantSellConfirmMenu & 1) != 0 )
      {
        servantSellConfirmMenu = this->fields.servantSellConfirmMenu;
        if ( !servantSellConfirmMenu )
          goto LABEL_13;
        ServantSellConfirmMenu__Close(servantSellConfirmMenu, 0);
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
    sub_1C93D2C(servantSellConfirmMenu, method);
  }
}


void ShopRootComponent__CloseShopResetDialog(ShopRootComponent_o *this, bool isDecide, const MethodInfo *method)
{
  __int64 v5; // x20
  ShopBuyItemListViewManager_o *shopResetConfirmDialog; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  const MethodInfo *v14; // x2
  struct ShopSceneListViewControlHelper_o *listViewHelper; // x8
  ShopBuyItemListViewItem_o *Item; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  NetworkManager_ResultCallbackFunc_o *v23; // x21
  Il2CppObject *Request_object; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  struct ShopResetConfirmDialogComponent_o *v31; // x19
  System_Action_o *v32; // x21
  System_Action_o *v33; // x1

  if ( (byte_4D2CBE2 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_NetworkManager_getRequest_ShopResetPurchaseNumRequest___);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_ShopRootComponent___c__DisplayClass160_0__CloseShopResetDialog_b__0__);
    sub_1C93AD4(&Method_ShopRootComponent___c__DisplayClass160_0__CloseShopResetDialog_b__1__);
    sub_1C93AD4(&ShopRootComponent___c__DisplayClass160_0_TypeInfo);
    byte_4D2CBE2 = 1;
  }
  v5 = sub_1C93D20(ShopRootComponent___c__DisplayClass160_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_14;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  if ( !isDecide )
  {
    shopResetConfirmDialog = (ShopBuyItemListViewManager_o *)this->fields.shopResetConfirmDialog;
    if ( shopResetConfirmDialog )
    {
      v33 = 0;
      goto LABEL_13;
    }
LABEL_14:
    sub_1C93D2C(shopResetConfirmDialog, v7);
  }
  listViewHelper = this->fields.listViewHelper;
  if ( !listViewHelper )
    goto LABEL_14;
  shopResetConfirmDialog = listViewHelper->fields.buyItemListViewManager;
  if ( !shopResetConfirmDialog )
    goto LABEL_14;
  Item = ShopBuyItemListViewManager__GetItem(shopResetConfirmDialog, this->fields.selectedItemIndex, 0);
  *(_QWORD *)(v5 + 24) = Item;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)Item, v17, v18, v19, v20, v21, v22);
  v23 = (NetworkManager_ResultCallbackFunc_o *)sub_1C93D20(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v23,
    (Il2CppObject *)v5,
    Method_ShopRootComponent___c__DisplayClass160_0__CloseShopResetDialog_b__0__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v23,
                     (const MethodInfo_322FB9C *)Method_NetworkManager_getRequest_ShopResetPurchaseNumRequest___);
  *(_QWORD *)(v5 + 32) = Request_object;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 32), (int32_t)Request_object, v25, v26, v27, v28, v29, v30);
  v31 = this->fields.shopResetConfirmDialog;
  v32 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(
    v32,
    (Il2CppObject *)v5,
    Method_ShopRootComponent___c__DisplayClass160_0__CloseShopResetDialog_b__1__,
    0);
  if ( !v31 )
    goto LABEL_14;
  shopResetConfirmDialog = (ShopBuyItemListViewManager_o *)v31;
  v33 = v32;
LABEL_13:
  ShopResetConfirmDialogComponent__Close_35858420((ShopResetConfirmDialogComponent_o *)shopResetConfirmDialog, v33, v14);
}


// local variable allocation has failed, the output may be wrong!
void ShopRootComponent__CloseStonePurchaseMenu(ShopRootComponent_o *this, int32_t result, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  ShopPlayVoiceComponent_o *shopPlayVoiceComponent; // x0
  const MethodInfo *v7; // x2

  if ( (byte_4D2CBDD & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_12242/*"SHOP_SCENE_VOICE_CANCEL"*/);
    sub_1C93AD4(&StringLiteral_12241/*"SHOP_SCENE_VOICE_BACK2"*/);
    byte_4D2CBDD = 1;
  }
  if ( result )
    goto LABEL_6;
  shopPlayVoiceComponent = this->fields.shopPlayVoiceComponent;
  if ( !shopPlayVoiceComponent )
    goto LABEL_9;
  if ( !ShopPlayVoiceComponent__PlayVoiceOnce(
          shopPlayVoiceComponent,
          (System_String_o *)StringLiteral_12242/*"SHOP_SCENE_VOICE_CANCEL"*/,
          0x2000,
          v3) )
  {
LABEL_6:
    shopPlayVoiceComponent = this->fields.shopPlayVoiceComponent;
    if ( shopPlayVoiceComponent )
    {
      ShopPlayVoiceComponent__PlayVoiceOnce(shopPlayVoiceComponent, (System_String_o *)StringLiteral_12241/*"SHOP_SCENE_VOICE_BACK2"*/, 4096, v3);
      goto LABEL_8;
    }
LABEL_9:
    sub_1C93D2C(shopPlayVoiceComponent, *(_QWORD *)&result);
  }
LABEL_8:
  ShopRootComponent__MenuBackFromStonePurchase(this, result, v7);
}


// local variable allocation has failed, the output may be wrong!
void ShopRootComponent__CloseStorageDetailCheckConfirm(
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
  if ( (byte_4D2CBD6 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_int__TypeInfo);
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_ShopRootComponent_RequestShop__);
    this = (ShopRootComponent_o *)sub_1C93AD4(&Method_ShopRootComponent_SelectedBuyItemConfirm__);
    byte_4D2CBD6 = 1;
  }
  v4->fields.buyCount = buyCount;
  if ( buyCount )
  {
    buyStorageConfirmDialog = v4->fields.buyStorageConfirmDialog;
    v6 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(v6, (Il2CppObject *)v4, Method_ShopRootComponent_RequestShop__, 0);
    if ( buyStorageConfirmDialog )
    {
      BuyStorageConfirmDialogComponent__Close_35525920(buyStorageConfirmDialog, v6, 0);
      return;
    }
LABEL_14:
    sub_1C93D2C(this, *(_QWORD *)&buyCount);
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
                                  0);
  if ( !v4->fields.buyStorageConfirmDialog )
    goto LABEL_14;
  v8 = (ShopBuyItemListViewItem_o *)this;
  BuyStorageConfirmDialogComponent__Close(v4->fields.buyStorageConfirmDialog, 0);
  this = (ShopRootComponent_o *)ShopRootComponent__GetIsBulk(v9, v8, v10);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    buyBulkItemConfirmMenu = v4->fields.buyBulkItemConfirmMenu;
    v13 = (System_Action_int__o *)sub_1C93D20(System_Action_int__TypeInfo);
    System_Action_int____ctor(v13, (Il2CppObject *)v4, Method_ShopRootComponent_SelectedBuyItemConfirm__, 0);
    if ( !buyBulkItemConfirmMenu )
      goto LABEL_14;
    ShopBuyBulkItemConfirmMenu__Modify(buyBulkItemConfirmMenu, v13, 0);
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


void ShopRootComponent__CreateShopDetailCheckList(ShopRootComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__int__o *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  void *Instance; // x0
  __int64 v10; // x1
  int v11; // w8
  void *v12; // x19
  unsigned int v13; // w21
  __int64 v14; // x8

  if ( (byte_4D2CBDF & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_ShopDetailMaster___);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C93AD4(&ShopRootComponent_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2CBDF = 1;
  }
  if ( !ShopRootComponent_TypeInfo->static_fields->isInitialized )
  {
    v2 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C93D20(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v2,
      (const MethodInfo_34B3908 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    ShopRootComponent_TypeInfo->static_fields->shopDetailCheckList = v2;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)ShopRootComponent_TypeInfo->static_fields,
      (int32_t)v2,
      v3,
      v4,
      v5,
      v6,
      v7,
      v8);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_15;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ShopDetailMaster___);
    if ( !Instance )
      goto LABEL_15;
    Instance = ShopDetailMaster__getShopDetailEntityList((ShopDetailMaster_o *)Instance, 0);
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
          sub_1C93D34(Instance);
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
          (const MethodInfo_34B42B8 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
        v11 = *((_DWORD *)v12 + 6);
        if ( (int)++v13 >= v11 )
          goto LABEL_13;
      }
LABEL_15:
      sub_1C93D2C(Instance, v10);
    }
LABEL_13:
    ShopRootComponent_TypeInfo->static_fields->isInitialized = 1;
  }
}


void ShopRootComponent__DeleteContinueData(const MethodInfo *method)
{
  if ( (byte_4D2CB9F & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_13062/*"SpecialItemHelp"*/);
    sub_1C93AD4(&StringLiteral_12945/*"Shop15Help"*/);
    sub_1C93AD4(&StringLiteral_2289/*"AnonymousHelp"*/);
    sub_1C93AD4(&StringLiteral_11269/*"RarePriHelp"*/);
    byte_4D2CB9F = 1;
  }
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_2289/*"AnonymousHelp"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11269/*"RarePriHelp"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13062/*"SpecialItemHelp"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_12945/*"Shop15Help"*/, 0);
}


void ShopRootComponent__DeleteJumpInfoOnInit(ShopRootComponent_o *this, int32_t state, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( state == 9 )
  {
    this->fields.jumpInfo = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.jumpInfo, 0, (int32_t)method, v3, v4, v5, v6, v7);
  }
}


void ShopRootComponent__EndLimitCountSealInfoDialog(ShopRootComponent_o *this, const MethodInfo *method)
{
  SummonInfoDlgComponent_o *limitCountSealInfoDlg; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  struct ShopSceneListViewControlHelper_o *listViewHelper; // x8
  ShopBuyItemListViewItem_o *Item; // x0
  const MethodInfo *v8; // x4

  if ( (byte_4D2CBB0 & 1) == 0 )
  {
    sub_1C93AD4(&Method_ShopRootComponent_EndLimitCountSealInfoDialog__);
    byte_4D2CBB0 = 1;
  }
  limitCountSealInfoDlg = this->fields.limitCountSealInfoDlg;
  if ( !limitCountSealInfoDlg )
    goto LABEL_9;
  SummonInfoDlgComponent__Close(limitCountSealInfoDlg, 0, 0);
  v4 = Method_ShopRootComponent_EndLimitCountSealInfoDialog__;
  if ( (*((_BYTE *)Method_ShopRootComponent_EndLimitCountSealInfoDialog__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C93AEC(Method_ShopRootComponent_EndLimitCountSealInfoDialog__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
  listViewHelper = this->fields.listViewHelper;
  if ( !listViewHelper
    || (limitCountSealInfoDlg = (SummonInfoDlgComponent_o *)listViewHelper->fields.buyItemListViewManager) == 0 )
  {
LABEL_9:
    sub_1C93D2C(limitCountSealInfoDlg, method);
  }
  Item = ShopBuyItemListViewManager__GetItem(
           (ShopBuyItemListViewManager_o *)limitCountSealInfoDlg,
           this->fields.limitCountSealInfoIndex,
           0);
  ShopRootComponent__OpenConfirmMenu(this, this->fields.state, Item, this->fields.limitCountSealInfoBulk, v8);
  this->fields.inputState = 2;
  this->fields.limitCountSealInfoIndex = -1;
  this->fields.limitCountSealInfoBulk = 0;
}


void ShopRootComponent__EndRequestSellServant(
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

  if ( (byte_4D2CBC4 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_int__TypeInfo);
    sub_1C93AD4(&Method_ShopRootComponent_EndSellResultServant__);
    sub_1C93AD4(&StringLiteral_22483/*"ng"*/);
    byte_4D2CBC4 = 1;
  }
  servantSellMenu = this->fields.servantSellMenu;
  if ( !servantSellMenu )
    goto LABEL_8;
  ServantSellMenu__Init(servantSellMenu, 0);
  servantSellMenu = (ServantSellMenu_o *)this->fields.servantSellConfirmMenu;
  if ( !servantSellMenu )
    goto LABEL_8;
  ServantSellConfirmMenu__Init((ServantSellConfirmMenu_o *)servantSellMenu, 0);
  v6 = this->fields.servantSellMenu;
  if ( !v6 )
    goto LABEL_8;
  tabKind = v6->fields.tabKind;
  v8 = System_String__op_Equality(result, (System_String_o *)StringLiteral_22483/*"ng"*/, 0);
  ServantSellConfirmKindOnRequestEnd = ServantSellConfirmMenu__GetServantSellConfirmKindOnRequestEnd(tabKind, v8, 0);
  servantSellConfirmMenu = this->fields.servantSellConfirmMenu;
  selectedServantIds = this->fields.selectedServantIds;
  selectedCommandCodeIds = this->fields.selectedCommandCodeIds;
  v13 = ServantSellConfirmKindOnRequestEnd;
  v14 = (System_Action_int__o *)sub_1C93D20(System_Action_int__TypeInfo);
  System_Action_int____ctor(v14, (Il2CppObject *)this, Method_ShopRootComponent_EndSellResultServant__, 0);
  if ( !servantSellConfirmMenu )
LABEL_8:
    sub_1C93D2C(servantSellMenu, result);
  ServantSellConfirmMenu__Open(servantSellConfirmMenu, v13, selectedServantIds, selectedCommandCodeIds, v14, 0);
  ShopRootComponent__RefreshInfo(this, v15);
}


void ShopRootComponent__EndRequestShop(ShopRootComponent_o *this, System_String_o *result, const MethodInfo *method)
{
  void *buyItemListViewManager; // x0
  const MethodInfo *v6; // x1
  struct ShopSceneListViewControlHelper_o *listViewHelper; // x8
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x3
  int32_t state; // w8
  __int64 v11; // x20
  Il2CppObject *Instance; // x21
  System_String_o *v13; // x22
  System_String_o *v14; // x23
  NotificationDialog_ClickDelegate_o *v15; // x24
  int32_t TargetId; // w0
  const MethodInfo *v17; // x1
  System_Nullable_float__o v18; // [xsp+68h] [xbp-38h] BYREF

  if ( (byte_4D2CBB9 & 1) == 0 )
  {
    sub_1C93AD4(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&Method_System_Nullable_float___ctor__);
    sub_1C93AD4(&Method_ShopRootComponent__EndRequestShop_b__101_0__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&StringLiteral_10567/*"PURCHASE_CLASS_BOARD_RESET_CHECK_RESULT_DIALOG_TITLE"*/);
    sub_1C93AD4(&StringLiteral_22483/*"ng"*/);
    sub_1C93AD4(&StringLiteral_10566/*"PURCHASE_CLASS_BOARD_RESET_CHECK_RESULT_DIALOG_MSG"*/);
    byte_4D2CBB9 = 1;
  }
  v18 = 0;
  buyItemListViewManager = (void *)System_String__op_Equality(result, (System_String_o *)StringLiteral_22483/*"ng"*/, 0);
  if ( ((unsigned __int8)buyItemListViewManager & 1) != 0 )
  {
    ShopRootComponent__RequestEnd(this, v6);
    return;
  }
  listViewHelper = this->fields.listViewHelper;
  if ( !listViewHelper )
    goto LABEL_23;
  buyItemListViewManager = listViewHelper->fields.buyItemListViewManager;
  if ( !buyItemListViewManager )
    goto LABEL_23;
  buyItemListViewManager = ShopBuyItemListViewManager__GetItem(
                             (ShopBuyItemListViewManager_o *)buyItemListViewManager,
                             this->fields.selectedItemIndex,
                             0);
  if ( !buyItemListViewManager )
    goto LABEL_23;
  state = this->fields.state;
  v6 = (const MethodInfo *)buyItemListViewManager;
  if ( (unsigned int)(state - 11) < 2 )
  {
    ShopRootComponent__ShowStorageDialog(this, (ShopBuyItemListViewItem_o *)buyItemListViewManager, v8);
    goto LABEL_22;
  }
  if ( state == 14 )
  {
    ShopRootComponent__PlayLvExceedItemReleaseEffect(this, (ShopBuyItemListViewItem_o *)buyItemListViewManager, v8);
    goto LABEL_22;
  }
  v11 = *((_QWORD *)buyItemListViewManager + 15);
  if ( state != 22 )
  {
    if ( v11 )
    {
      if ( *(_DWORD *)(v11 + 48) == 5 )
        ShopRootComponent__ShowSetItemDialog(this, *((ShopEntity_o **)buyItemListViewManager + 15), v8);
      else
        ShopRootComponent__ShowNormalItemDialog(
          this,
          (ShopBuyItemListViewItem_o *)buyItemListViewManager,
          *((ShopEntity_o **)buyItemListViewManager + 15),
          v9);
      goto LABEL_22;
    }
LABEL_23:
    sub_1C93D2C(buyItemListViewManager, v6);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_10567/*"PURCHASE_CLASS_BOARD_RESET_CHECK_RESULT_DIALOG_TITLE"*/, 0);
  buyItemListViewManager = LocalizationManager__Get((System_String_o *)StringLiteral_10566/*"PURCHASE_CLASS_BOARD_RESET_CHECK_RESULT_DIALOG_MSG"*/, 0);
  if ( !v11 )
    goto LABEL_23;
  v14 = System_String__Format((System_String_o *)buyItemListViewManager, *(Il2CppObject **)(v11 + 104), 0);
  v15 = (NotificationDialog_ClickDelegate_o *)sub_1C93D20(NotificationDialog_ClickDelegate_TypeInfo);
  NotificationDialog_ClickDelegate___ctor(
    v15,
    (Il2CppObject *)this,
    Method_ShopRootComponent__EndRequestShop_b__101_0__,
    0);
  System_Nullable_float____ctor(
    (System_Nullable_float__o)&v18,
    13.0,
    (const MethodInfo_39A1F0C *)Method_System_Nullable_float___ctor__);
  if ( !Instance )
    goto LABEL_23;
  CommonUI__OpenNotificationDialog_31583416(
    (CommonUI_o *)Instance,
    v13,
    v14,
    v15,
    -1,
    0,
    0,
    0,
    0,
    0,
    0,
    v18,
    25,
    0,
    0,
    1,
    0,
    0,
    0,
    0);
  TargetId = ShopEntity__get_TargetId((ShopEntity_o *)v11, 0);
  ClassBoardSave__DeleteOpenedMissionClearDialogByBaseId(TargetId, 0);
LABEL_22:
  ShopRootComponent__RefreshInfo(this, v17);
}


System_Collections_Generic_Dictionary_int__long__o *ShopRootComponent__GetClassBoardReleaseItemList(
        int32_t baseId,
        const MethodInfo *method)
{
  __int64 v3; // x20
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_int__long__o *v6; // x19
  System_Collections_Generic_IEnumerable_TSource__o *monitor; // x22
  Il2CppObject *v8; // x21
  System_Func_object__bool__o *v9; // x23
  Il2CppObject *v10; // x0
  Il2CppObject *v11; // x23
  System_Collections_Generic_List_int__o *v12; // x22
  _BOOL8 v13; // x0
  __int64 v14; // x1
  ClassBoardSquareEntity_o *Entity; // x0
  ClassBoardSquareEntity_o *v16; // x22
  _BOOL8 HasLockId; // x0
  __int64 v18; // x1
  Il2CppObject *v19; // x0
  __int64 v20; // x1
  Il2CppObject *v21; // x0
  __int64 v22; // x1
  Il2CppObject *v23; // x22
  _QWORD *v24; // x8
  Il2CppClass *klass; // x10
  __int64 v26; // x9
  __int64 v27; // x24
  unsigned __int64 v28; // x25
  int32_t v29; // w23
  _BOOL8 v30; // x0
  __int64 v31; // x1
  int64_t Item; // x0
  __int64 v33; // x1
  Il2CppClass *v34; // x8
  Il2CppClass *v35; // x8
  __int64 v36; // x10
  struct System_Int32_array *itemIds; // x8
  struct System_Int32_array *itemNums; // x10
  il2cpp_array_size_t max_length; // x9
  __int64 v40; // x24
  unsigned __int64 v41; // x25
  int32_t v42; // w23
  _BOOL8 v43; // x0
  __int64 v44; // x1
  int64_t v45; // x0
  __int64 v46; // x1
  struct System_Int32_array *v47; // x8
  struct System_Int32_array *v48; // x8
  __int64 v49; // x10
  System_Collections_Generic_List_Enumerator_int__o v51; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v52; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4D2CBAE & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_ClassBoardLockMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_ClassBoardSquareMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_UserClassBoardSquareMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_ClassBoardLockMaster__ClassBoardLockEntity__int__GetEntity__);
    sub_1C93AD4(&Method_DataMasterBase_UserClassBoardSquareMaster__UserClassBoardSquareEntity__string__getEntityList__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__long__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__long__ContainsKey__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__long___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__long__get_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__long__set_Item__);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_int__long__TypeInfo);
    sub_1C93AD4(&Method_System_Linq_Enumerable_FirstOrDefault_UserClassBoardSquareEntity___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C93AD4(&System_Func_UserClassBoardSquareEntity__bool__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C93AD4(&Method_ShopRootComponent___c__DisplayClass88_0__GetClassBoardReleaseItemList_b__0__);
    sub_1C93AD4(&ShopRootComponent___c__DisplayClass88_0_TypeInfo);
    byte_4D2CBAE = 1;
  }
  memset(&v52, 0, sizeof(v52));
  v3 = sub_1C93D20(ShopRootComponent___c__DisplayClass88_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_76;
  *(_DWORD *)(v3 + 16) = baseId;
  v6 = (System_Collections_Generic_Dictionary_int__long__o *)sub_1C93D20(System_Collections_Generic_Dictionary_int__long__TypeInfo);
  System_Collections_Generic_Dictionary_int__long____ctor(
    v6,
    (const MethodInfo_34B94F8 *)Method_System_Collections_Generic_Dictionary_int__long___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserClassBoardSquareMaster___);
  if ( !Master_object )
    goto LABEL_76;
  monitor = (System_Collections_Generic_IEnumerable_TSource__o *)Master_object[2].monitor;
  if ( monitor && *(_DWORD *)(v3 + 16) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v8 = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
    v9 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_UserClassBoardSquareEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v9,
      (Il2CppObject *)v3,
      Method_ShopRootComponent___c__DisplayClass88_0__GetClassBoardReleaseItemList_b__0__,
      0);
    v10 = System_Linq_Enumerable__FirstOrDefault_object__52221724(
            monitor,
            (System_Func_TSource__bool__o *)v9,
            (const MethodInfo_31CD71C *)Method_System_Linq_Enumerable_FirstOrDefault_UserClassBoardSquareEntity___);
    if ( v10 )
    {
      v11 = v10;
      v12 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v12,
        (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
      if ( v12 )
      {
        System_Collections_Generic_List_int___AddRange(
          v12,
          (System_Collections_Generic_IEnumerable_T__o *)v11[2].klass,
          (const MethodInfo_385CB84 *)Method_System_Collections_Generic_List_int__AddRange__);
        System_Collections_Generic_List_int___AddRange(
          v12,
          (System_Collections_Generic_IEnumerable_T__o *)v11[2].monitor,
          (const MethodInfo_385CB84 *)Method_System_Collections_Generic_List_int__AddRange__);
        System_Collections_Generic_List_int___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v51,
          v12,
          (const MethodInfo_385D44C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
        v52 = v51;
        while ( 1 )
        {
          v13 = System_Collections_Generic_List_Enumerator_int___MoveNext(
                  &v52,
                  (const MethodInfo_35F6200 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
          if ( !v13 )
            break;
          if ( !v8 )
            sub_1C93D2C(v13, v14);
          Entity = ClassBoardSquareMaster__GetEntity(
                     (ClassBoardSquareMaster_o *)v8,
                     *(_DWORD *)(v3 + 16),
                     v52.fields._current,
                     0);
          v16 = Entity;
          if ( Entity )
          {
            HasLockId = ClassBoardSquareEntity__get_HasLockId(Entity, 0);
            if ( HasLockId )
            {
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              v19 = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ClassBoardLockMaster___);
              if ( !v19 )
                sub_1C93D2C(0, v20);
              v21 = DataMasterBase_object__object__int___GetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)v19,
                      v16->fields.lockId,
                      (const MethodInfo_3463274 *)Method_DataMasterBase_ClassBoardLockMaster__ClassBoardLockEntity__int__GetEntity__);
              v23 = v21;
              if ( v21 )
              {
                v24 = v21[1].monitor;
                if ( !v24 )
                  sub_1C93D2C(v21, v22);
                klass = v21[2].klass;
                if ( !klass )
                  sub_1C93D2C(v21, v22);
                v26 = v24[3];
                if ( (_DWORD)v26 == LODWORD(klass->_1.namespaze) && (int)v26 >= 1 )
                {
                  v27 = 8;
                  do
                  {
                    v28 = v27 - 8;
                    if ( v27 - 8 >= (unsigned __int64)(unsigned int)v26 )
                      sub_1C93D34(v21);
                    if ( !v6 )
                      sub_1C93D2C(v21, v22);
                    v29 = *((_DWORD *)v24 + v27);
                    v30 = System_Collections_Generic_Dictionary_int__long___ContainsKey(
                            v6,
                            v29,
                            (const MethodInfo_34BA0C0 *)Method_System_Collections_Generic_Dictionary_int__long__ContainsKey__);
                    if ( v30 )
                    {
                      Item = System_Collections_Generic_Dictionary_int__long___get_Item(
                               v6,
                               v29,
                               (const MethodInfo_34B9E2C *)Method_System_Collections_Generic_Dictionary_int__long__get_Item__);
                      v34 = v23[2].klass;
                      if ( !v34 )
                        sub_1C93D2C(Item, v33);
                      if ( v28 >= LODWORD(v34->_1.namespaze) )
                        sub_1C93D34(Item);
                      System_Collections_Generic_Dictionary_int__long___set_Item(
                        v6,
                        v29,
                        Item + *((int *)&v34->_1.image + v27),
                        (const MethodInfo_34B9EB8 *)Method_System_Collections_Generic_Dictionary_int__long__set_Item__);
                    }
                    else
                    {
                      v35 = v23[2].klass;
                      if ( !v35 )
                        sub_1C93D2C(v30, v31);
                      if ( v28 >= LODWORD(v35->_1.namespaze) )
                        sub_1C93D34(v30);
                      System_Collections_Generic_Dictionary_int__long___Add(
                        v6,
                        v29,
                        *((int *)&v35->_1.image + v27),
                        (const MethodInfo_34B9ECC *)Method_System_Collections_Generic_Dictionary_int__long__Add__);
                    }
                    v24 = v23[1].monitor;
                    if ( !v24 )
                      sub_1C93D2C(v21, v22);
                    LODWORD(v26) = *((_DWORD *)v24 + 6);
                    v36 = v27 - 7;
                    ++v27;
                  }
                  while ( v36 < (int)v26 );
                }
              }
            }
            else
            {
              itemIds = v16->fields.itemIds;
              if ( !itemIds )
                sub_1C93D2C(HasLockId, v18);
              itemNums = v16->fields.itemNums;
              if ( !itemNums )
                sub_1C93D2C(HasLockId, v18);
              max_length = itemIds->max_length;
              if ( (_DWORD)max_length == LODWORD(itemNums->max_length) && (int)max_length >= 1 )
              {
                v40 = 8;
                do
                {
                  v41 = v40 - 8;
                  if ( v40 - 8 >= (unsigned __int64)(unsigned int)max_length )
                    sub_1C93D34(HasLockId);
                  if ( !v6 )
                    sub_1C93D2C(HasLockId, v18);
                  v42 = *((_DWORD *)&itemIds->obj.klass + v40);
                  v43 = System_Collections_Generic_Dictionary_int__long___ContainsKey(
                          v6,
                          v42,
                          (const MethodInfo_34BA0C0 *)Method_System_Collections_Generic_Dictionary_int__long__ContainsKey__);
                  if ( v43 )
                  {
                    v45 = System_Collections_Generic_Dictionary_int__long___get_Item(
                            v6,
                            v42,
                            (const MethodInfo_34B9E2C *)Method_System_Collections_Generic_Dictionary_int__long__get_Item__);
                    v47 = v16->fields.itemNums;
                    if ( !v47 )
                      sub_1C93D2C(v45, v46);
                    if ( v41 >= LODWORD(v47->max_length) )
                      sub_1C93D34(v45);
                    System_Collections_Generic_Dictionary_int__long___set_Item(
                      v6,
                      v42,
                      v45 + *((int *)&v47->obj.klass + v40),
                      (const MethodInfo_34B9EB8 *)Method_System_Collections_Generic_Dictionary_int__long__set_Item__);
                  }
                  else
                  {
                    v48 = v16->fields.itemNums;
                    if ( !v48 )
                      sub_1C93D2C(v43, v44);
                    if ( v41 >= LODWORD(v48->max_length) )
                      sub_1C93D34(v43);
                    System_Collections_Generic_Dictionary_int__long___Add(
                      v6,
                      v42,
                      *((int *)&v48->obj.klass + v40),
                      (const MethodInfo_34B9ECC *)Method_System_Collections_Generic_Dictionary_int__long__Add__);
                  }
                  itemIds = v16->fields.itemIds;
                  if ( !itemIds )
                    sub_1C93D2C(HasLockId, v18);
                  LODWORD(max_length) = itemIds->max_length;
                  v49 = v40 - 7;
                  ++v40;
                }
                while ( v49 < (int)max_length );
              }
            }
          }
        }
        System_Collections_Generic_List_Enumerator_int___Dispose(
          &v52,
          (const MethodInfo_35F61FC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
        return v6;
      }
LABEL_76:
      sub_1C93D2C(Master_object, v5);
    }
  }
  return v6;
}


int64_t ShopRootComponent__GetCurrency(ShopRootComponent_o *this, ShopEntity_o *shopEntity, const MethodInfo *method)
{
  int64_t result; // x0
  Il2CppObject *Master_object; // x20
  NetworkManager_c *v6; // x0
  int64_t userIdNumber; // x21

  if ( (byte_4D2CBD1 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    this = (ShopRootComponent_o *)sub_1C93AD4(&NetworkManager_TypeInfo);
    byte_4D2CBD1 = 1;
  }
  if ( !shopEntity )
LABEL_24:
    sub_1C93D2C(this, shopEntity);
  result = 0;
  switch ( shopEntity->fields.payType )
  {
    case 1:
      this = (ShopRootComponent_o *)UserGameMaster__getSelfUserGame(0);
      if ( !this )
        goto LABEL_24;
      result = SLODWORD(this->fields.servantSellMenu);
      break;
    case 2:
      this = (ShopRootComponent_o *)UserGameMaster__getSelfUserGame(0);
      if ( !this )
        goto LABEL_24;
      result = (int64_t)this->fields.topListViewManager;
      break;
    case 4:
      this = (ShopRootComponent_o *)UserGameMaster__getSelfUserGame(0);
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
      Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserItemMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4D2A55B )
      {
        sub_1C93AD4(&NetworkManager_TypeInfo);
        byte_4D2A55B = 1;
      }
      v6 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v6 = NetworkManager_TypeInfo;
      }
      userIdNumber = v6->static_fields->userIdNumber;
      this = (ShopRootComponent_o *)ShopEntity__GetItemID(shopEntity, 0);
      if ( !Master_object )
        goto LABEL_24;
      this = (ShopRootComponent_o *)UserItemMaster__GetEntityDefinitely(
                                      (UserItemMaster_o *)Master_object,
                                      userIdNumber,
                                      (int32_t)this,
                                      0);
      if ( !this )
        goto LABEL_24;
      result = SHIDWORD(this->fields.m_CancellationTokenSource);
      break;
    case 0xA:
      this = (ShopRootComponent_o *)UserGameMaster__getSelfUserGame(0);
      if ( !this )
        goto LABEL_24;
      result = SHIDWORD(this->fields.servantSellConfirmMenu);
      break;
    default:
      return result;
  }
  return result;
}


int32_t ShopRootComponent__GetInputStateOnInit(ShopRootComponent_o *this, int32_t state, const MethodInfo *method)
{
  if ( (unsigned int)(state - 1) > 0x15 )
    return 0;
  else
    return dword_D34608[state - 1];
}


bool ShopRootComponent__GetIsBulk(ShopRootComponent_o *this, ShopBuyItemListViewItem_o *item, const MethodInfo *method)
{
  struct ShopEntity_o *Shop_k__BackingField; // x20
  Il2CppObject *Master_object; // x21
  _BOOL8 IsItemMaxLeftEqual; // x0
  const MethodInfo *v7; // x2
  char v8; // w19
  int32_t limitNum; // w8
  int32_t payType; // w22
  CommonConsumeEntity_array *CommonConsumeEntities; // x0
  int max_length; // w8
  CommonConsumeEntity_array *v14; // x20
  __int64 v15; // x21
  int64_t Currency; // x21
  int32_t Price; // w0
  bool v18; // cc
  char v19; // w8

  if ( (byte_4D2CBD0 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_UserItemMaster___);
    this = (ShopRootComponent_o *)sub_1C93AD4(&DataManager_TypeInfo);
    byte_4D2CBD0 = 1;
  }
  if ( !item )
    goto LABEL_32;
  Shop_k__BackingField = item->fields._Shop_k__BackingField;
  if ( !Shop_k__BackingField )
    goto LABEL_32;
  if ( ShopEntity__IsSoldOut(item->fields._Shop_k__BackingField, 0) || !ShopEntity__IsEnable(Shop_k__BackingField, 0, 0) )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserItemMaster___);
  this = (ShopRootComponent_o *)ShopBuyItemListViewItem__get_TargetId(item, 0);
  if ( !Master_object )
    goto LABEL_32;
  IsItemMaxLeftEqual = UserItemMaster__IsItemMaxLeftEqual((UserItemMaster_o *)Master_object, (int32_t)this, 1, 0);
  if ( IsItemMaxLeftEqual )
    return 0;
  limitNum = Shop_k__BackingField->fields.limitNum;
  if ( limitNum )
    v8 = limitNum - item->fields._TotalNum_k__BackingField > 1;
  else
    v8 = 1;
  payType = Shop_k__BackingField->fields.payType;
  if ( payType == 14 )
  {
    CommonConsumeEntities = ShopEntity__GetCommonConsumeEntities(Shop_k__BackingField, 0);
    if ( !CommonConsumeEntities )
      return 0;
    max_length = CommonConsumeEntities->max_length;
    v14 = CommonConsumeEntities;
    if ( max_length < 1 )
      return v8;
    v15 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v15 >= max_length )
        sub_1C93D34(CommonConsumeEntities);
      this = (ShopRootComponent_o *)v14->m_Items[v15];
      if ( !this )
        break;
      CommonConsumeEntities = (CommonConsumeEntity_array *)CommonConsumeEntity__GetUserBuyableNum(
                                                             (CommonConsumeEntity_o *)this,
                                                             0);
      if ( (int)CommonConsumeEntities < 2 )
        return 0;
      max_length = v14->max_length;
      if ( (int)++v15 >= max_length )
        return v8;
    }
LABEL_32:
    sub_1C93D2C(this, item);
  }
  Currency = ShopRootComponent__GetCurrency((ShopRootComponent_o *)IsItemMaxLeftEqual, Shop_k__BackingField, v7);
  Price = ShopEntity__GetPrice(Shop_k__BackingField, 0);
  if ( payType == 8 )
    v18 = Currency < Price;
  else
    v18 = Currency < 2 * Price;
  v19 = !v18;
  return v8 & v19;
}


bool ShopRootComponent__GetIsContainExceededServant(
        ShopRootComponent_o *this,
        System_Int64_array *selectServantIds,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  il2cpp_array_size_t max_length; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v7; // x20
  unsigned __int64 v8; // x21

  if ( (byte_4D2CBB5 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C93AD4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2CBB5 = 1;
  }
  if ( !selectServantIds )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_14:
    sub_1C93D2C(Instance, v5);
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserServantMaster___);
  max_length = selectServantIds->max_length;
  if ( (int)max_length < 1 )
    return 0;
  v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v8 = 0;
  while ( 1 )
  {
    if ( v8 >= (unsigned int)max_length )
      sub_1C93D34(Instance);
    if ( !v7 )
      goto LABEL_14;
    Instance = DataMasterBase_object__object__long___GetEntity(
                 v7,
                 selectServantIds->m_Items[v8],
                 (const MethodInfo_3465A24 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( Instance )
    {
      Instance = (Il2CppObject *)UserServantEntity__isExceeded((UserServantEntity_o *)Instance, 0);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        return 1;
    }
    LODWORD(max_length) = selectServantIds->max_length;
    if ( (__int64)++v8 >= (int)max_length )
      return 0;
  }
}


int32_t ShopRootComponent__GetShopItemBuyNum(
        ShopRootComponent_o *this,
        ShopBuyItemListViewItem_o *item,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  Il2CppObject *MasterData_object; // x20
  struct ShopEntity_o *Shop_k__BackingField; // x8
  UserShopEntity_o *EntityDefinitely; // x0

  if ( (byte_4D2CBB1 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2CBB1 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4D2A55B )
  {
    sub_1C93AD4(&NetworkManager_TypeInfo);
    byte_4D2A55B = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !item || (Shop_k__BackingField = item->fields._Shop_k__BackingField) == 0 || !MasterData_object )
LABEL_16:
    sub_1C93D2C(Instance, v5);
  EntityDefinitely = UserShopMaster__GetEntityDefinitely(
                       (UserShopMaster_o *)MasterData_object,
                       *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                       Shop_k__BackingField->fields.baseShopId,
                       0);
  if ( EntityDefinitely )
    LODWORD(EntityDefinitely) = EntityDefinitely->fields.num;
  return (int)EntityDefinitely;
}


int32_t ShopRootComponent__GetStateOnBack(ShopRootComponent_o *this, int32_t state, const MethodInfo *method)
{
  if ( state == 8 )
    return 7;
  else
    return 1;
}


int32_t ShopRootComponent__GetStateOnInit(
        ShopRootComponent_o *this,
        System_String_o *jumpInfoName,
        int32_t eventId,
        const MethodInfo *method)
{
  uint32_t v6; // w0

  if ( (byte_4D2CBDB & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_8937/*"ManaPrism"*/);
    sub_1C93AD4(&StringLiteral_7174/*"GrailFragments"*/);
    sub_1C93AD4(&StringLiteral_14666/*"TradeAp"*/);
    sub_1C93AD4(&StringLiteral_8434/*"LeafExchange"*/);
    sub_1C93AD4(&StringLiteral_10883/*"PurePrismExchange"*/);
    sub_1C93AD4(&StringLiteral_6260/*"EventItem"*/);
    sub_1C93AD4(&StringLiteral_4548/*"CoinRoom"*/);
    sub_1C93AD4(&StringLiteral_13182/*"StoneFragments"*/);
    sub_1C93AD4(&StringLiteral_4494/*"ClassBoardReset"*/);
    sub_1C93AD4(&StringLiteral_11270/*"RarePrism"*/);
    sub_1C93AD4(&StringLiteral_12785/*"SellServant"*/);
    byte_4D2CBDB = 1;
  }
  v6 = PrivateImplementationDetails___ComputeStringHash(jumpInfoName, 0);
  if ( v6 <= 0xA7EC7693 )
  {
    if ( v6 > 0x7AC5BC48 )
    {
      if ( v6 == -1988383029 )
      {
        if ( System_String__op_Equality(jumpInfoName, (System_String_o *)StringLiteral_13182/*"StoneFragments"*/, 0) )
          return 4;
      }
      else if ( v6 == -1542091583 )
      {
        if ( System_String__op_Equality(jumpInfoName, (System_String_o *)StringLiteral_10883/*"PurePrismExchange"*/, 0) )
          return 18;
      }
      else if ( v6 == -1477675373 && System_String__op_Equality(jumpInfoName, (System_String_o *)StringLiteral_7174/*"GrailFragments"*/, 0) )
      {
        return 14;
      }
    }
    else if ( v6 == 1526818832 )
    {
      if ( System_String__op_Equality(jumpInfoName, (System_String_o *)StringLiteral_8434/*"LeafExchange"*/, 0) )
        return 20;
    }
    else if ( v6 == 2059779144 && System_String__op_Equality(jumpInfoName, (System_String_o *)StringLiteral_4494/*"ClassBoardReset"*/, 0) )
    {
      return 22;
    }
    return 1;
  }
  if ( v6 <= 0xCD42BE08 )
  {
    if ( v6 == -1114035561 )
    {
      if ( System_String__op_Equality(jumpInfoName, (System_String_o *)StringLiteral_4548/*"CoinRoom"*/, 0) )
        return 17;
    }
    else if ( v6 == -1075479726 )
    {
      if ( System_String__op_Equality(jumpInfoName, (System_String_o *)StringLiteral_12785/*"SellServant"*/, 0) )
        return 9;
    }
    else if ( v6 == -851263992 && System_String__op_Equality(jumpInfoName, (System_String_o *)StringLiteral_14666/*"TradeAp"*/, 0) )
    {
      return 19;
    }
    return 1;
  }
  if ( v6 == -74236182 )
  {
    if ( System_String__op_Equality(jumpInfoName, (System_String_o *)StringLiteral_11270/*"RarePrism"*/, 0) )
      return 3;
    return 1;
  }
  if ( v6 != -472076328 )
  {
    if ( v6 == -490311229 && System_String__op_Equality(jumpInfoName, (System_String_o *)StringLiteral_8937/*"ManaPrism"*/, 0) )
      return 2;
    return 1;
  }
  if ( !System_String__op_Equality(jumpInfoName, (System_String_o *)StringLiteral_6260/*"EventItem"*/, 0) )
    return 1;
  if ( eventId < 1 )
    return 7;
  else
    return 8;
}


void ShopRootComponent__Init(ShopRootComponent_o *this, const MethodInfo *method)
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
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  __int64 v23; // x1
  const MethodInfo *v24; // x6
  ShopSceneListViewControlHelper_o *listViewHelper; // x0
  ShopSceneListViewControlHelper_o *v26; // x23
  System_Action_o *v27; // x24
  System_Action_T__o *v28; // x25
  System_Action_int__o *v29; // x26
  System_Action_int__o *v30; // x27
  System_Action_T1__T2__T3__o *v31; // x28
  System_Action_o *v32; // x29
  const MethodInfo *v33; // x7
  ShopRootComponent_o *v34; // x0
  const MethodInfo *v35; // x3
  unsigned int StateOnInit; // w0
  const MethodInfo *v37; // x4
  int32_t v38; // w8
  _BOOL4 isFromCoinRoom; // w9
  float v40; // s0
  const MethodInfo *v41; // x3
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  UnityEngine_GameObject_o *gameObject; // x20
  System_Action_int__o *v49; // x21
  const MethodInfo *v50; // [xsp+18h] [xbp-88h]
  System_String_o *jumpInfoName; // [xsp+28h] [xbp-78h]
  int32_t eventId; // [xsp+34h] [xbp-6Ch]
  UnityEngine_GameObject_o *eventListViewBase; // [xsp+38h] [xbp-68h]

  if ( (byte_4D2CBA4 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_ShopRootConstants_State__TypeInfo);
    sub_1C93AD4(&System_Action_int__TypeInfo);
    sub_1C93AD4(&System_Action_ServantSellMenu_ResultKind__long____long____TypeInfo);
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_ShopRootComponent_OnMoveEnd__);
    sub_1C93AD4(&Method_ShopRootComponent_OnSelectBuyItem__);
    sub_1C93AD4(&Method_ShopRootComponent_OnSelectEvent__);
    sub_1C93AD4(&Method_ShopRootComponent_OnSelectSellServant__);
    sub_1C93AD4(&Method_ShopRootComponent_OnSelectTop__);
    sub_1C93AD4(&Method_ShopRootComponent_OpenHelp__);
    sub_1C93AD4(&Method_ShopRootComponent__Init_b__77_0__);
    sub_1C93AD4(&ShopSceneListViewControlHelper_TypeInfo);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2CBA4 = 1;
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
    v15 = (ShopSceneListViewControlHelper_o *)sub_1C93D20(ShopSceneListViewControlHelper_TypeInfo);
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
      v50);
    p_listViewHelper = &this->fields.listViewHelper;
    this->fields.listViewHelper = v15;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.listViewHelper, (int32_t)v15, v17, v18, v19, v20, v21, v22);
    listViewHelper = this->fields.listViewHelper;
    if ( !listViewHelper )
      goto LABEL_19;
    ShopSceneListViewControlHelper__SetOtherObjects(
      listViewHelper,
      this->fields.titleInfo,
      this->fields.standFigureBack,
      this->fields.giftButtonControl,
      this->fields.backgroundTexture,
      this,
      v24);
    v26 = this->fields.listViewHelper;
    v27 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(v27, (Il2CppObject *)this, Method_ShopRootComponent_OnMoveEnd__, 0);
    v28 = (System_Action_T__o *)sub_1C93D20(System_Action_ShopRootConstants_State__TypeInfo);
    System_Action_Int32Enum____ctor(v28, (Il2CppObject *)this, (intptr_t)Method_ShopRootComponent_OnSelectTop__, 0);
    v29 = (System_Action_int__o *)sub_1C93D20(System_Action_int__TypeInfo);
    System_Action_int____ctor(v29, (Il2CppObject *)this, (intptr_t)Method_ShopRootComponent_OnSelectEvent__, 0);
    v30 = (System_Action_int__o *)sub_1C93D20(System_Action_int__TypeInfo);
    System_Action_int____ctor(v30, (Il2CppObject *)this, (intptr_t)Method_ShopRootComponent_OnSelectBuyItem__, 0);
    v31 = (System_Action_T1__T2__T3__o *)sub_1C93D20(System_Action_ServantSellMenu_ResultKind__long____long____TypeInfo);
    System_Action_Int32Enum__object__object____ctor(
      v31,
      (Il2CppObject *)this,
      Method_ShopRootComponent_OnSelectSellServant__,
      0);
    v32 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(v32, (Il2CppObject *)this, Method_ShopRootComponent_OpenHelp__, 0);
    if ( !v26 )
      goto LABEL_19;
    ShopSceneListViewControlHelper__SetCallbackEvents(
      v26,
      v27,
      (System_Action_ShopRootConstants_State__o *)v28,
      v29,
      v30,
      (System_Action_ServantSellMenu_ResultKind__long____long____o *)v31,
      v32,
      v33);
    StateOnInit = ShopRootComponent__GetStateOnInit(v34, jumpInfoName, eventId, v35);
    v23 = StateOnInit;
    this->fields.state = StateOnInit;
    v38 = StateOnInit - 1 > 0x15 ? 0 : dword_D34608[StateOnInit - 1];
    isFromCoinRoom = this->fields.isFromCoinRoom;
    this->fields.inputState = v38;
    v40 = isFromCoinRoom ? this->fields.saveScrollBarValue : -1.0;
    listViewHelper = *p_listViewHelper;
    if ( !*p_listViewHelper )
LABEL_19:
      sub_1C93D2C(listViewHelper, v23);
    ShopSceneListViewControlHelper__SetListViewOnSceneInit(
      listViewHelper,
      v23,
      eventId,
      v40,
      &this->fields.selectedEventIndex,
      v37);
    ShopRootComponent__OpenEventItemWindow(this, this->fields.state, eventId, v41);
    if ( this->fields.state == 9 )
    {
      this->fields.jumpInfo = 0;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.jumpInfo, 0, v42, v43, v44, v45, v46, v47);
    }
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    v49 = (System_Action_int__o *)sub_1C93D20(System_Action_int__TypeInfo);
    System_Action_int____ctor(v49, (Il2CppObject *)this, Method_ShopRootComponent__Init_b__77_0__, 0);
    StoneCountRefreshComponent__AttachToGameObject(gameObject, v49, 0, 0);
  }
}


bool ShopRootComponent__IsExistBackClassBoardInfo(ShopRootComponent_o *this, const MethodInfo *method)
{
  struct SceneJumpInfo_o *jumpInfo; // x8
  _BOOL8 v4; // x0
  __int64 v5; // x1
  struct SceneJumpInfo_o *v6; // x8

  if ( (byte_4D2CBE4 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_4494/*"ClassBoardReset"*/);
    byte_4D2CBE4 = 1;
  }
  jumpInfo = this->fields.jumpInfo;
  if ( !jumpInfo )
    return 0;
  if ( !jumpInfo->fields.id )
    return 0;
  v4 = System_String__op_Equality(jumpInfo->fields.name, (System_String_o *)StringLiteral_4494/*"ClassBoardReset"*/, 0);
  if ( !v4 )
    return 0;
  v6 = this->fields.jumpInfo;
  if ( !v6 )
    sub_1C93D2C(v4, v5);
  return v6->fields.backSceneJumpInfo != 0;
}


void ShopRootComponent__LoadBanner(ShopRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  ShopRootComponent_o *v12; // x0
  const MethodInfo *v13; // x3
  struct SceneJumpInfo_o *jumpInfo; // x8
  int32_t id; // w2
  System_String_o **p_name; // x8
  System_Action_o *v17; // x19

  if ( (byte_4D2CBA3 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&AtlasManager_TypeInfo);
    sub_1C93AD4(&Method_ShopRootComponent___c__DisplayClass74_0__LoadBanner_b__0__);
    sub_1C93AD4(&ShopRootComponent___c__DisplayClass74_0_TypeInfo);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2CBA3 = 1;
  }
  v3 = sub_1C93D20(ShopRootComponent___c__DisplayClass74_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    sub_1C93D2C(v4, v5);
  *(_QWORD *)(v3 + 16) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v3 + 16), (int32_t)this, v6, v7, v8, v9, v10, v11);
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
  v17 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v17, (Il2CppObject *)v3, Method_ShopRootComponent___c__DisplayClass74_0__LoadBanner_b__0__, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadOutGameAtlas(v17, 0);
}


void ShopRootComponent__MenuBackFromStonePurchase(ShopRootComponent_o *this, int32_t result, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  ShopSceneListViewControlHelper_o *listViewHelper; // x22
  int32_t v9; // w21
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x1

  if ( (byte_4D2CBDE & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2CBDE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || ((CommonUI__CloseStonePurchaseMenu((CommonUI_o *)Instance, 0),
         listViewHelper = this->fields.listViewHelper,
         this->fields.state != 8)
      ? (v9 = 1)
      : (v9 = 7),
        this->fields.state = v9,
        this->fields.inputState = 2,
        !listViewHelper) )
  {
    sub_1C93D2C(Instance, v6);
  }
  ShopSceneListViewControlHelper__SetTopListViewInput(listViewHelper, v9, v7);
  ShopSceneListViewControlHelper__SetHelpButtonEnable(listViewHelper, v9, v10);
  if ( result == 2 )
    ShopRootComponent__RefreshInfo(this, v11);
}


void ShopRootComponent__OnClickBack(ShopRootComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x2

  if ( (byte_4D2CBCC & 1) == 0 )
  {
    sub_1C93AD4(&Method_ShopRootComponent_OnClickBack__);
    byte_4D2CBCC = 1;
  }
  if ( this->fields.inputState == 2 )
  {
    v3 = Method_ShopRootComponent_OnClickBack__;
    if ( (*((_BYTE *)Method_ShopRootComponent_OnClickBack__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_ShopRootComponent_OnClickBack__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    if ( !ShopRootComponent__BackScene(this, this->fields.state, v5) )
      ShopRootComponent__BackMenu(this, this->fields.state, v6);
  }
}


void ShopRootComponent__OnClickBackToClassBoardButton(ShopRootComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  Il2CppObject *IsExistBackClassBoardInfo; // x0
  __int64 v7; // x1
  struct SceneJumpInfo_o *jumpInfo; // x8
  struct SceneJumpInfo_o *backSceneJumpInfo; // x9
  int32_t id; // w20
  int32_t num; // w21
  SceneJumpInfo_o *v12; // x19

  if ( (byte_4D2CBE3 & 1) == 0 )
  {
    sub_1C93AD4(&SceneJumpInfo_TypeInfo);
    sub_1C93AD4(&Method_ShopRootComponent_OnClickBackToClassBoardButton__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C93AD4(&StringLiteral_5302/*"DirectlyToClassBoard"*/);
    byte_4D2CBE3 = 1;
  }
  if ( this->fields.inputState == 2 && this->fields.state == 22 )
  {
    v3 = Method_ShopRootComponent_OnClickBackToClassBoardButton__;
    if ( (*((_BYTE *)Method_ShopRootComponent_OnClickBackToClassBoardButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_ShopRootComponent_OnClickBackToClassBoardButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    IsExistBackClassBoardInfo = (Il2CppObject *)ShopRootComponent__IsExistBackClassBoardInfo(this, v5);
    if ( ((unsigned __int8)IsExistBackClassBoardInfo & 1) != 0 )
    {
      jumpInfo = this->fields.jumpInfo;
      if ( !jumpInfo
        || (backSceneJumpInfo = jumpInfo->fields.backSceneJumpInfo) == 0
        || (id = jumpInfo->fields.id,
            num = backSceneJumpInfo->fields.num,
            v12 = (SceneJumpInfo_o *)sub_1C93D20(SceneJumpInfo_TypeInfo),
            SceneJumpInfo___ctor_42211656(v12, (System_String_o *)StringLiteral_5302/*"DirectlyToClassBoard"*/, id, num, 0),
            (IsExistBackClassBoardInfo = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0) )
      {
        sub_1C93D2C(IsExistBackClassBoardInfo, v7);
      }
      AvalonSceneManager__transitionScene(
        (AvalonSceneManager_o *)IsExistBackClassBoardInfo,
        91,
        1,
        (Il2CppObject *)v12,
        0);
    }
  }
}


void ShopRootComponent__OnClickHelp(ShopRootComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4D2CBC6 & 1) == 0 )
  {
    sub_1C93AD4(&Method_ShopRootComponent_OnClickHelp__);
    byte_4D2CBC6 = 1;
  }
  v3 = Method_ShopRootComponent_OnClickHelp__;
  if ( (*((_BYTE *)Method_ShopRootComponent_OnClickHelp__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C93AEC(Method_ShopRootComponent_OnClickHelp__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  ShopRootComponent__OpenHelp(this, v5);
}


void ShopRootComponent__OnClickHelpClose(ShopRootComponent_o *this, const MethodInfo *method)
{
  int32_t state; // w8
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  ShopHelpListViewManager_o *helpListViewManager; // x20
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2

  if ( (byte_4D2CBC9 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_ShopRootComponent_CheckTutorial__);
    sub_1C93AD4(&Method_ShopRootComponent_OnClickHelpClose__);
    byte_4D2CBC9 = 1;
  }
  state = this->fields.state;
  if ( state <= 6 )
  {
    if ( (unsigned int)state <= 6 && ((1 << state) & 0x68) != 0 )
      return;
  }
  else if ( (state | 2) == 0x16 )
  {
    return;
  }
  v4 = Method_ShopRootComponent_OnClickHelpClose__;
  if ( (*((_BYTE *)Method_ShopRootComponent_OnClickHelpClose__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C93AEC(Method_ShopRootComponent_OnClickHelpClose__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0, 0);
  helpListViewManager = this->fields.helpListViewManager;
  v7 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_ShopRootComponent_CheckTutorial__, 0);
  if ( !helpListViewManager )
    sub_1C93D2C(v8, v9);
  ShopHelpListViewManager__CloseHelpDialog(helpListViewManager, v7, v10);
}


void ShopRootComponent__OnEndDialogEventCloseWarning(ShopRootComponent_o *this, const MethodInfo *method)
{
  MainMenuBar__requestTerminalSceneChange(0);
}


void ShopRootComponent__OnEndFadeRequestShop(ShopRootComponent_o *this, const MethodInfo *method)
{
  System_String_o *MainBgmName; // x20
  const MethodInfo *v4; // x1

  if ( (byte_4D2CBC2 & 1) == 0 )
  {
    sub_1C93AD4(&BgmManager_TypeInfo);
    sub_1C93AD4(&SoundManager_TypeInfo);
    byte_4D2CBC2 = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  MainBgmName = BgmManager__GetMainBgmName(0, 0);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm(MainBgmName, 0);
  ShopRootComponent__RequestEnd(this, v4);
}


// local variable allocation has failed, the output may be wrong!
void ShopRootComponent__OnEndItemDialog(ShopRootComponent_o *this, bool isOk, const MethodInfo *method)
{
  RequestResultDialog_o *requestResultDialog; // x0
  struct ShopSceneListViewControlHelper_o *listViewHelper; // x8
  ShopEntity_o *okBtnLabel; // x20
  const MethodInfo *v7; // x2
  System_String_o *monitor; // x20
  ScriptManager_CallbackFunc_o *v9; // x21
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D2CBBE & 1) == 0 )
  {
    sub_1C93AD4(&ScriptManager_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ShopScriptMaster___);
    sub_1C93AD4(&Method_DataMasterBase_ShopScriptMaster__ShopScriptEntity__int__TryGetEntity__);
    sub_1C93AD4(&ScriptManager_TypeInfo);
    sub_1C93AD4(&Method_ShopRootComponent_OnEndPlayScriptRequestShop__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2CBBE = 1;
  }
  entity = 0;
  requestResultDialog = this->fields.requestResultDialog;
  if ( !requestResultDialog )
    goto LABEL_21;
  RequestResultDialog__Close(requestResultDialog, 0);
  listViewHelper = this->fields.listViewHelper;
  if ( !listViewHelper )
    goto LABEL_21;
  requestResultDialog = (RequestResultDialog_o *)listViewHelper->fields.buyItemListViewManager;
  if ( !requestResultDialog )
    goto LABEL_21;
  requestResultDialog = (RequestResultDialog_o *)ShopBuyItemListViewManager__GetItem(
                                                   (ShopBuyItemListViewManager_o *)requestResultDialog,
                                                   this->fields.selectedItemIndex,
                                                   0);
  if ( !requestResultDialog )
    goto LABEL_21;
  okBtnLabel = (ShopEntity_o *)requestResultDialog->fields.okBtnLabel;
  requestResultDialog = (RequestResultDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !requestResultDialog )
    goto LABEL_21;
  requestResultDialog = (RequestResultDialog_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)requestResultDialog,
                                                   (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ShopScriptMaster___);
  if ( !okBtnLabel || !requestResultDialog )
    goto LABEL_21;
  requestResultDialog = (RequestResultDialog_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)requestResultDialog,
                                                   &entity,
                                                   okBtnLabel->fields.id,
                                                   (const MethodInfo_34632C0 *)Method_DataMasterBase_ShopScriptMaster__ShopScriptEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)requestResultDialog & 1) == 0 )
    goto LABEL_13;
  if ( !entity )
    goto LABEL_21;
  requestResultDialog = (RequestResultDialog_o *)System_String__IsNullOrEmpty((System_String_o *)entity[2].monitor, 0);
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
    sub_1C93D2C(requestResultDialog, isOk);
  monitor = (System_String_o *)entity[2].monitor;
  v9 = (ScriptManager_CallbackFunc_o *)sub_1C93D20(ScriptManager_CallbackFunc_TypeInfo);
  ScriptManager_CallbackFunc___ctor(v9, (Il2CppObject *)this, Method_ShopRootComponent_OnEndPlayScriptRequestShop__, 0);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__PlayShop(monitor, v9, 0, 0);
}


void ShopRootComponent__OnEndPlayScriptRequestShop(ShopRootComponent_o *this, bool isExit, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4D2CBBF & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_ShopRootComponent_OnEndFadeRequestShop__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2CBBF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_ShopRootComponent_OnEndFadeRequestShop__, 0);
  if ( !Instance )
    sub_1C93D2C(v6, v7);
  CommonUI__maskFadein((CommonUI_o *)Instance, 1.0, v5, 0);
}


void ShopRootComponent__OnEndPlayServantCostumeReleaseEffect(ShopRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v4; // x8
  CommonUI_o *v5; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4D2CBC1 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&AvalonSceneManager_TypeInfo);
    sub_1C93AD4(&Method_ShopRootComponent_RequestEnd__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2CBC1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = AvalonSceneManager_TypeInfo;
  v5 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v4 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v4->static_fields->DEFAULT_FADE_TIME;
  v7 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_ShopRootComponent_RequestEnd__, 0);
  if ( !v5 )
    sub_1C93D2C(v8, v9);
  CommonUI__maskFadein(v5, DEFAULT_FADE_TIME, v7, 0);
}


void ShopRootComponent__OnEndShopReset(ShopRootComponent_o *this, bool isDecide, const MethodInfo *method)
{
  ShopResetConfirmDialogComponent_o *shopResetConfirmDialog; // x0
  const MethodInfo *v5; // x1

  shopResetConfirmDialog = this->fields.shopResetConfirmDialog;
  if ( !shopResetConfirmDialog )
    sub_1C93D2C(0, isDecide);
  ShopResetConfirmDialogComponent__Close_35858420(shopResetConfirmDialog, 0, method);
  ShopRootComponent__RequestEnd(this, v5);
}


void ShopRootComponent__OnEndStorageDialog(ShopRootComponent_o *this, int32_t count, const MethodInfo *method)
{
  BuyStorageConfirmDialogComponent_o *buyStorageResultDialog; // x0
  const MethodInfo *v5; // x1

  buyStorageResultDialog = this->fields.buyStorageResultDialog;
  if ( !buyStorageResultDialog )
    sub_1C93D2C(0, count);
  BuyStorageConfirmDialogComponent__Close(buyStorageResultDialog, 0);
  ShopRootComponent__RequestEnd(this, v5);
}


// local variable allocation has failed, the output may be wrong!
bool ShopRootComponent__OnGiftClose(ShopRootComponent_o *this, bool receivedNewServant, const MethodInfo *method)
{
  ShopCurrencyInfoController_o *currencyInfoController; // x20
  int32_t state; // w21
  ShopSceneListViewControlHelper_o *BuyItemKind; // x0
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x3
  int32_t v9; // w21
  UnityEngine_Object_o *titleInfo; // x20

  if ( (byte_4D2CBC5 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&ShopBuyItemListViewManager_TypeInfo);
    byte_4D2CBC5 = 1;
  }
  ShopRootComponent__RefreshInfo(this, (const MethodInfo *)receivedNewServant);
  currencyInfoController = this->fields.currencyInfoController;
  state = this->fields.state;
  if ( !ShopBuyItemListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ShopBuyItemListViewManager_TypeInfo);
  BuyItemKind = (ShopSceneListViewControlHelper_o *)ShopBuyItemListViewManager__GetBuyItemKind(state, 0);
  if ( !this->fields.listViewHelper )
    goto LABEL_14;
  v9 = (int)BuyItemKind;
  BuyItemKind = (ShopSceneListViewControlHelper_o *)ShopSceneListViewControlHelper__GetEventId(
                                                      this->fields.listViewHelper,
                                                      this->fields.state,
                                                      this->fields.selectedEventIndex,
                                                      v8);
  if ( !currencyInfoController )
    goto LABEL_14;
  ShopCurrencyInfoController__RefreshEventItemWindow(currencyInfoController, v9, (int32_t)BuyItemKind, 0, 0);
  BuyItemKind = this->fields.listViewHelper;
  if ( !BuyItemKind )
    goto LABEL_14;
  ShopSceneListViewControlHelper__SetListViewInvalidate(BuyItemKind, v7);
  titleInfo = (UnityEngine_Object_o *)this->fields.titleInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(titleInfo, 0, 0) )
  {
    BuyItemKind = (ShopSceneListViewControlHelper_o *)this->fields.titleInfo;
    if ( BuyItemKind )
    {
      TitleInfoControl__setDispParticleObj((TitleInfoControl_o *)BuyItemKind, 1, 0);
      return 1;
    }
LABEL_14:
    sub_1C93D2C(BuyItemKind, v7);
  }
  return 1;
}


void ShopRootComponent__OnGiftOpen(ShopRootComponent_o *this, const MethodInfo *method)
{
  ShopPlayVoiceComponent_o *shopPlayVoiceComponent; // x0

  shopPlayVoiceComponent = this->fields.shopPlayVoiceComponent;
  if ( !shopPlayVoiceComponent )
    sub_1C93D2C(0, method);
  ShopPlayVoiceComponent__StopVoice(shopPlayVoiceComponent, method);
}


void ShopRootComponent__OnInitEnd(ShopRootComponent_o *this, int32_t state, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  ShopSceneListViewControlHelper_o *listViewHelper; // x0

  if ( this->fields.inputState == 1 )
  {
    listViewHelper = this->fields.listViewHelper;
    if ( !listViewHelper )
      sub_1C93D2C(0, state);
    ShopSceneListViewControlHelper__SetListViewOnStateInitEnd(
      listViewHelper,
      state,
      this->fields.selectedEventIndex,
      v3);
    this->fields.inputState = 2;
  }
}


void ShopRootComponent__OnMoveEnd(ShopRootComponent_o *this, const MethodInfo *method)
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


void ShopRootComponent__OnQuitEnd(ShopRootComponent_o *this, int32_t state, const MethodInfo *method)
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
      sub_1C93D2C(0, state);
    ShopSceneListViewControlHelper__SetListViewOnStateQuitEnd(
      listViewHelper,
      state,
      v6,
      this->fields.selectedEventIndex,
      v3);
    this->fields.inputState = 2;
  }
}


// local variable allocation has failed, the output may be wrong!
void ShopRootComponent__OnSelectBuyItem(ShopRootComponent_o *this, int32_t index, const MethodInfo *method)
{
  ShopBuyItemListViewManager_o *buyItemListViewManager; // x0
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  ShopBuyItemListViewManager_o *v8; // x20
  System_Action_int__o *v9; // x21
  int32_t state; // w8
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  struct ShopSceneListViewControlHelper_o *listViewHelper; // x8
  ShopBuyItemListViewItem_o *Item; // x0
  const MethodInfo *v15; // x2
  bool IsBulk; // w2
  const MethodInfo *v17; // x3

  if ( (byte_4D2CBCF & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_int__TypeInfo);
    sub_1C93AD4(&Method_ShopRootComponent_OnSelectBuyItem__);
    byte_4D2CBCF = 1;
  }
  if ( this->fields.inputState == 2 )
  {
    buyItemListViewManager = this->fields.buyItemListViewManager;
    if ( !buyItemListViewManager )
      goto LABEL_20;
    buyItemListViewManager = (ShopBuyItemListViewManager_o *)ShopBuyItemListViewManager__GetItem(
                                                               buyItemListViewManager,
                                                               index,
                                                               0);
    if ( !buyItemListViewManager )
      goto LABEL_20;
    buyItemListViewManager = (ShopBuyItemListViewManager_o *)buyItemListViewManager->fields.dragParentObject;
    if ( !buyItemListViewManager )
      goto LABEL_20;
    buyItemListViewManager = (ShopBuyItemListViewManager_o *)ShopEntity__IsItemMaxButShopAvailable(
                                                               (ShopEntity_o *)buyItemListViewManager,
                                                               0);
    if ( ((unsigned __int8)buyItemListViewManager & 1) != 0 )
    {
      v6 = Method_ShopRootComponent_OnSelectBuyItem__;
      if ( (*((_BYTE *)Method_ShopRootComponent_OnSelectBuyItem__ + 83) & 2) != 0 )
        v6 = (_QWORD *)sub_1C93AEC(Method_ShopRootComponent_OnSelectBuyItem__);
      v7 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v6, v6[4]);
      OverwriteAssetSoundName__PlaySystemSe(v7, 2, 0, 0);
      v8 = this->fields.buyItemListViewManager;
      v9 = (System_Action_int__o *)sub_1C93D20(System_Action_int__TypeInfo);
      System_Action_int____ctor(v9, (Il2CppObject *)this, (intptr_t)Method_ShopRootComponent_OnSelectBuyItem__, 0);
      if ( v8 )
      {
        ShopBuyItemListViewManager__SetMode(v8, 2, v9, 0);
        return;
      }
LABEL_20:
      sub_1C93D2C(buyItemListViewManager, *(_QWORD *)&index);
    }
    state = this->fields.state;
    this->fields.inputState = 0;
    if ( state != 22 )
    {
      v11 = Method_ShopRootComponent_OnSelectBuyItem__;
      if ( (*((_BYTE *)Method_ShopRootComponent_OnSelectBuyItem__ + 83) & 2) != 0 )
        v11 = (_QWORD *)sub_1C93AEC(Method_ShopRootComponent_OnSelectBuyItem__);
      v12 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v11, v11[4]);
      OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0, 0);
    }
    listViewHelper = this->fields.listViewHelper;
    this->fields.selectedItemIndex = index;
    if ( !listViewHelper )
      goto LABEL_20;
    buyItemListViewManager = listViewHelper->fields.buyItemListViewManager;
    if ( !buyItemListViewManager )
      goto LABEL_20;
    Item = ShopBuyItemListViewManager__GetItem(buyItemListViewManager, index, 0);
    IsBulk = ShopRootComponent__GetIsBulk((ShopRootComponent_o *)Item, Item, v15);
    ShopRootComponent__SelectItem(this, index, IsBulk, v17);
  }
}


void ShopRootComponent__OnSelectEvent(ShopRootComponent_o *this, int32_t index, const MethodInfo *method)
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

  if ( (byte_4D2CBD2 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C93AD4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_1C93AD4(&SceneJumpInfo_TypeInfo);
    sub_1C93AD4(&Method_ShopRootComponent_OnSelectEvent__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&StringLiteral_9595/*"NormalEventShop"*/);
    byte_4D2CBD2 = 1;
  }
  v5 = Method_ShopRootComponent_OnSelectEvent__;
  if ( (*((_BYTE *)Method_ShopRootComponent_OnSelectEvent__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C93AEC(Method_ShopRootComponent_OnSelectEvent__);
  v6 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
  listViewHelper = this->fields.listViewHelper;
  this->fields.selectedEventIndex = index;
  if ( !listViewHelper )
    goto LABEL_17;
  eventListViewManager = (Il2CppObject *)listViewHelper->fields.eventListViewManager;
  if ( !eventListViewManager )
    goto LABEL_17;
  Item = ShopEventListViewManager__GetItem((ShopEventListViewManager_o *)eventListViewManager, index, 0);
  eventListViewManager = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !eventListViewManager )
    goto LABEL_17;
  eventListViewManager = DataManager__GetMasterData_object_(
                           (DataManager_o *)eventListViewManager,
                           (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Item )
    goto LABEL_17;
  if ( !eventListViewManager )
    goto LABEL_17;
  eventListViewManager = DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)eventListViewManager,
                           Item->fields.eventId,
                           (const MethodInfo_3463274 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  if ( !eventListViewManager )
    goto LABEL_17;
  if ( EventDetailEntity__IsEventShop((EventDetailEntity_o *)eventListViewManager, 0) )
  {
    eventId = Item->fields.eventId;
    v13 = (SceneJumpInfo_o *)sub_1C93D20(SceneJumpInfo_TypeInfo);
    SceneJumpInfo___ctor_42211596(v13, (System_String_o *)StringLiteral_9595/*"NormalEventShop"*/, eventId, 0);
    if ( v13 )
    {
      SceneJumpInfo__SetReturnNowScene(v13, 0);
      eventListViewManager = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( eventListViewManager )
      {
        CommonUI__CheckChangeOtherConnectMarkFromEventId((CommonUI_o *)eventListViewManager, Item->fields.eventId, 1, 0);
        eventListViewManager = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( eventListViewManager )
        {
          AvalonSceneManager__transitionScene(
            (AvalonSceneManager_o *)eventListViewManager,
            72,
            1,
            (Il2CppObject *)v13,
            0);
          return;
        }
      }
    }
LABEL_17:
    sub_1C93D2C(eventListViewManager, v8);
  }
  ShopRootComponent__SelectMenu(this, 8, v11);
}


void ShopRootComponent__OnSelectSellServant(
        ShopRootComponent_o *this,
        int32_t kind,
        System_Int64_array *servantList,
        System_Int64_array *commandCodeList,
        const MethodInfo *method)
{
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  const MethodInfo *v17; // x1

  if ( this->fields.inputState == 2 )
  {
    this->fields.selectedServantIds = servantList;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.selectedServantIds,
      (int32_t)servantList,
      (int32_t)servantList,
      (int32_t)commandCodeList,
      (System_String_o *)method,
      v5,
      v6,
      v7);
    this->fields.selectedCommandCodeIds = commandCodeList;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.selectedCommandCodeIds,
      (int32_t)commandCodeList,
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


void ShopRootComponent__OnSelectTop(ShopRootComponent_o *this, int32_t state, const MethodInfo *method)
{
  ShopRootConstants_c *v5; // x0
  bool IsSvtCostumeShopOpen; // w0
  _BOOL4 v7; // w9
  _BOOL4 v8; // w8
  bool IsTargetQuestClear; // w0
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  const MethodInfo *v12; // x2

  if ( (byte_4D2CBCE & 1) == 0 )
  {
    sub_1C93AD4(&CoinRoomUtility_TypeInfo);
    sub_1C93AD4(&Method_ShopRootComponent_OnSelectTop__);
    sub_1C93AD4(&ShopRootConstants_TypeInfo);
    byte_4D2CBCE = 1;
  }
  if ( this->fields.inputState == 2 && this->fields.state == 1 )
  {
    if ( state == 17 )
    {
      if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
      IsTargetQuestClear = CoinRoomUtility__IsTargetQuestClear(0);
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
        v10 = (_QWORD *)sub_1C93AEC(Method_ShopRootComponent_OnSelectTop__);
      v11 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v10, v10[4]);
      OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0, 0);
      ShopRootComponent__SelectMenu(this, state, v12);
    }
  }
}


void ShopRootComponent__OpenConfirmMenu(
        ShopRootComponent_o *this,
        int32_t state,
        ShopBuyItemListViewItem_o *item,
        bool isBulk,
        const MethodInfo *method)
{
  __int64 v9; // x20
  int64_t KindByShopState; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  ShopBuyItemListViewItem_o **v18; // x21
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
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
  struct ShopBuyItemConfirmMenu_o *v46; // x21
  ShopBuyItemListViewItem_o *v47; // x22
  System_Action_o *v48; // x23
  System_Action_int__o *v49; // x20
  ShopBuyItemConfirmMenu_o *v50; // x0
  ShopBuyItemListViewItem_o *v51; // x1
  int32_t v52; // w20
  const MethodInfo *v53; // x2
  BuyStorageConfirmDialogComponent_o *buyStorageNotificationDialog; // x22
  ShopBuyItemListViewItem_o *v55; // x21
  System_Action_int__o *v56; // x23
  int32_t v57; // w2
  struct ShopBuyItemConfirmMenu_o *v58; // x22
  ShopBuyItemListViewItem_o *v59; // x21
  bool IsDisabledDisp; // w22
  _QWORD *v61; // x8
  System_Reflection_MethodBase_o *v62; // x0
  const MethodInfo *v63; // x2
  ShopSceneListViewControlHelper_o *listViewHelper; // x20
  int32_t v65; // w19
  const MethodInfo *v66; // x2
  int64_t v67; // x22
  ShopBuyItemListViewItem_o *v68; // x8
  ShopEntity_o *v69; // x21
  int32_t v70; // w22
  struct ShopBuyItemConfirmMenu_o *ApSeedExchangeConfirmMenu; // x20
  System_Action_int__o *v72; // x23
  ShopBuyItemListViewItem_o *v73; // x8
  ShopEntity_o *v74; // x22
  int32_t v75; // w23
  ShopBuyItemConfirmMenu_o *v76; // x21
  System_Action_int__o *v77; // x24
  System_Action_o *v78; // x19
  ShopBuyItemListViewItem_o *v79; // x20
  struct ShopBuyBulkItemConfirmMenu_o *buyBulkItemConfirmMenu; // x21
  ShopEntity_o *v81; // x22
  System_Action_int__o *v82; // x23
  ShopEntity_o *v83; // x20
  int32_t v84; // w21
  BuyStorageConfirmDialogComponent_o *buyStorageConfirmDialog; // x22
  ShopBuyItemListViewItem_o *v86; // x21
  System_Action_int__o *v87; // x23

  if ( (byte_4D2CBAD & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_int__TypeInfo);
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_ShopRootComponent_CloseStorageDetailCheckConfirm__);
    sub_1C93AD4(&Method_ShopRootComponent_OpenConfirmMenu__);
    sub_1C93AD4(&Method_ShopRootComponent_SelectedBuyItemConfirm__);
    sub_1C93AD4(&Method_ShopRootComponent___c__DisplayClass87_0__OpenConfirmMenu_b__0__);
    sub_1C93AD4(&Method_ShopRootComponent___c__DisplayClass87_0__OpenConfirmMenu_b__1__);
    sub_1C93AD4(&Method_ShopRootComponent___c__DisplayClass87_0__OpenConfirmMenu_b__2__);
    sub_1C93AD4(&Method_ShopRootComponent___c__DisplayClass87_0__OpenConfirmMenu_b__3__);
    sub_1C93AD4(&ShopRootComponent___c__DisplayClass87_0_TypeInfo);
    byte_4D2CBAD = 1;
  }
  v9 = sub_1C93D20(ShopRootComponent___c__DisplayClass87_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_61;
  *(_QWORD *)(v9 + 16) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v9 + 16), (int32_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = item;
  v18 = (ShopBuyItemListViewItem_o **)(v9 + 24);
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v9 + 24), (int32_t)item, v19, v20, v21, v22, v23, v24);
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
        goto LABEL_61;
      Shop_k__BackingField = v34->fields._Shop_k__BackingField;
      ShopKind_k__BackingField = v34->fields._ShopKind_k__BackingField;
      buyItemConfirmMenu = this->fields.buyItemConfirmMenu;
      v38 = (System_Action_int__o *)sub_1C93D20(System_Action_int__TypeInfo);
      System_Action_int____ctor(v38, (Il2CppObject *)this, Method_ShopRootComponent_SelectedBuyItemConfirm__, 0);
      v39 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
      System_Action___ctor(
        v39,
        (Il2CppObject *)v9,
        Method_ShopRootComponent___c__DisplayClass87_0__OpenConfirmMenu_b__1__,
        0);
      if ( !buyItemConfirmMenu )
        goto LABEL_61;
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
      v48 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
      System_Action___ctor(
        v48,
        (Il2CppObject *)v9,
        Method_ShopRootComponent___c__DisplayClass87_0__OpenConfirmMenu_b__0__,
        0);
      v49 = (System_Action_int__o *)sub_1C93D20(System_Action_int__TypeInfo);
      System_Action_int____ctor(v49, (Il2CppObject *)this, Method_ShopRootComponent_SelectedBuyItemConfirm__, 0);
      if ( !v46 )
        goto LABEL_61;
      v50 = v46;
      v51 = v47;
      goto LABEL_31;
    case 11:
    case 12:
      KindByShopState = BuyStorageConfirmDialogComponent__GetKindByShopState(state, 0);
      if ( !*v18 )
        goto LABEL_61;
      v52 = KindByShopState;
      KindByShopState = (int64_t)(*v18)->fields._Shop_k__BackingField;
      if ( !KindByShopState )
        goto LABEL_61;
      KindByShopState = ShopEntity__IsSoldOut((ShopEntity_o *)KindByShopState, 0);
      if ( (KindByShopState & 1) != 0 )
      {
        buyStorageNotificationDialog = this->fields.buyStorageNotificationDialog;
        v55 = *v18;
        v56 = (System_Action_int__o *)sub_1C93D20(System_Action_int__TypeInfo);
        System_Action_int____ctor(v56, (Il2CppObject *)this, Method_ShopRootComponent_SelectedBuyItemConfirm__, 0);
        if ( buyStorageNotificationDialog )
        {
          v57 = 1;
LABEL_44:
          BuyStorageConfirmDialogComponent__NotificationDialogOpen(buyStorageNotificationDialog, v52, v57, v55, v56, 0);
          return;
        }
        goto LABEL_61;
      }
      if ( !*v18 )
        goto LABEL_61;
      KindByShopState = ShopRootComponent__GetCurrency(
                          (ShopRootComponent_o *)KindByShopState,
                          (*v18)->fields._Shop_k__BackingField,
                          v53);
      if ( !*v18 )
        goto LABEL_61;
      v67 = KindByShopState;
      KindByShopState = (int64_t)(*v18)->fields._Shop_k__BackingField;
      if ( !KindByShopState )
        goto LABEL_61;
      KindByShopState = ShopEntity__GetPrice((ShopEntity_o *)KindByShopState, 0);
      if ( v67 < (int)KindByShopState )
      {
        buyStorageNotificationDialog = this->fields.buyStorageNotificationDialog;
        v55 = *v18;
        v56 = (System_Action_int__o *)sub_1C93D20(System_Action_int__TypeInfo);
        System_Action_int____ctor(v56, (Il2CppObject *)this, Method_ShopRootComponent_SelectedBuyItemConfirm__, 0);
        if ( buyStorageNotificationDialog )
        {
          v57 = 2;
          goto LABEL_44;
        }
LABEL_61:
        sub_1C93D2C(KindByShopState, v11);
      }
      if ( isBulk )
      {
        v79 = *v18;
        if ( !*v18 )
          goto LABEL_61;
        buyBulkItemConfirmMenu = this->fields.buyBulkItemConfirmMenu;
        v81 = v79->fields._Shop_k__BackingField;
        v82 = (System_Action_int__o *)sub_1C93D20(System_Action_int__TypeInfo);
        System_Action_int____ctor(v82, (Il2CppObject *)this, Method_ShopRootComponent_SelectedBuyItemConfirm__, 0);
        if ( !buyBulkItemConfirmMenu )
          goto LABEL_61;
        v30 = buyBulkItemConfirmMenu;
        v31 = v81;
        v32 = v79;
        v33 = v82;
        v29 = 0;
LABEL_10:
        ShopBuyBulkItemConfirmMenu__Open(v30, v31, v32, v33, v29, 0);
        return;
      }
      buyStorageConfirmDialog = this->fields.buyStorageConfirmDialog;
      this->fields.buyCount = 1;
      v86 = *v18;
      v87 = (System_Action_int__o *)sub_1C93D20(System_Action_int__TypeInfo);
      System_Action_int____ctor(v87, (Il2CppObject *)this, Method_ShopRootComponent_CloseStorageDetailCheckConfirm__, 0);
      if ( !buyStorageConfirmDialog )
        goto LABEL_61;
      BuyStorageConfirmDialogComponent__Open(buyStorageConfirmDialog, v52, v86, 1, v87, 0);
      return;
    case 19:
      if ( isBulk )
      {
        v25 = *v18;
        if ( !*v18 )
          goto LABEL_61;
        ApSeedBulkExchangeConfirmMenu = this->fields.ApSeedBulkExchangeConfirmMenu;
        goto LABEL_8;
      }
      v68 = *v18;
      if ( !*v18 )
        goto LABEL_61;
      v69 = v68->fields._Shop_k__BackingField;
      v70 = v68->fields._ShopKind_k__BackingField;
      ApSeedExchangeConfirmMenu = this->fields.ApSeedExchangeConfirmMenu;
      v72 = (System_Action_int__o *)sub_1C93D20(System_Action_int__TypeInfo);
      System_Action_int____ctor(v72, (Il2CppObject *)this, Method_ShopRootComponent_SelectedBuyItemConfirm__, 0);
      if ( !ApSeedExchangeConfirmMenu )
        goto LABEL_61;
      v40 = ApSeedExchangeConfirmMenu;
      v41 = v69;
      v42 = v70;
      goto LABEL_58;
    case 21:
      if ( isBulk )
      {
LABEL_6:
        v25 = *v18;
        if ( !*v18 )
          goto LABEL_61;
        ApSeedBulkExchangeConfirmMenu = this->fields.buyBulkItemConfirmMenu;
LABEL_8:
        v27 = v25->fields._Shop_k__BackingField;
        v28 = (System_Action_int__o *)sub_1C93D20(System_Action_int__TypeInfo);
        System_Action_int____ctor(v28, (Il2CppObject *)this, Method_ShopRootComponent_SelectedBuyItemConfirm__, 0);
        if ( !ApSeedBulkExchangeConfirmMenu )
          goto LABEL_61;
        v29 = 8;
        v30 = ApSeedBulkExchangeConfirmMenu;
        v31 = v27;
        v32 = v25;
        v33 = v28;
        goto LABEL_10;
      }
      KindByShopState = (int64_t)*v18;
      if ( !*v18 )
        goto LABEL_61;
      KindByShopState = ShopBuyItemListViewItem__get_IsItemTypeRarePri((ShopBuyItemListViewItem_o *)KindByShopState, 0);
      v58 = this->fields.buyItemConfirmMenu;
      v59 = *v18;
      if ( (KindByShopState & 1) != 0 )
      {
        v48 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
        System_Action___ctor(
          v48,
          (Il2CppObject *)v9,
          Method_ShopRootComponent___c__DisplayClass87_0__OpenConfirmMenu_b__2__,
          0);
        v49 = (System_Action_int__o *)sub_1C93D20(System_Action_int__TypeInfo);
        System_Action_int____ctor(v49, (Il2CppObject *)this, Method_ShopRootComponent_SelectedBuyItemConfirm__, 0);
        if ( !v58 )
          goto LABEL_61;
        v50 = v58;
        v51 = v59;
LABEL_31:
        ShopBuyItemConfirmMenu__OpenAfterCheckedFree(v50, v51, v48, v49, 0);
      }
      else
      {
        if ( !v59 )
          goto LABEL_61;
        v83 = v59->fields._Shop_k__BackingField;
        v84 = v59->fields._ShopKind_k__BackingField;
        v72 = (System_Action_int__o *)sub_1C93D20(System_Action_int__TypeInfo);
        System_Action_int____ctor(v72, (Il2CppObject *)this, Method_ShopRootComponent_SelectedBuyItemConfirm__, 0);
        if ( !v58 )
          goto LABEL_61;
        v40 = v58;
        v41 = v83;
        v42 = v84;
LABEL_58:
        v43 = v72;
        v44 = 0;
        v45 = 0;
LABEL_14:
        ShopBuyItemConfirmMenu__Open(v40, v41, v42, v43, 0, v44, v45, 8, 0);
      }
      return;
    case 22:
      KindByShopState = (int64_t)*v18;
      if ( !*v18 )
        goto LABEL_61;
      IsDisabledDisp = ShopBuyItemListViewItem__IsDisabledDisp((ShopBuyItemListViewItem_o *)KindByShopState, 0);
      v61 = Method_ShopRootComponent_OpenConfirmMenu__;
      if ( (*((_BYTE *)Method_ShopRootComponent_OpenConfirmMenu__ + 83) & 2) != 0 )
        v61 = (_QWORD *)sub_1C93AEC(Method_ShopRootComponent_OpenConfirmMenu__);
      v62 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v61, v61[4]);
      if ( IsDisabledDisp )
      {
        OverwriteAssetSoundName__PlaySystemSe(v62, 2, 0, 0);
        listViewHelper = this->fields.listViewHelper;
        if ( listViewHelper )
        {
          v65 = this->fields.state;
          ShopSceneListViewControlHelper__SetBuyItemListViewModify(listViewHelper, v65, v63);
          ShopSceneListViewControlHelper__SetBuyItemListViewInput(listViewHelper, v65, v66);
          return;
        }
        goto LABEL_61;
      }
      OverwriteAssetSoundName__PlaySystemSe(v62, 0, 0, 0);
      v73 = *v18;
      if ( !*v18 )
        goto LABEL_61;
      v74 = v73->fields._Shop_k__BackingField;
      v75 = v73->fields._ShopKind_k__BackingField;
      v76 = this->fields.buyItemConfirmMenu;
      v77 = (System_Action_int__o *)sub_1C93D20(System_Action_int__TypeInfo);
      System_Action_int____ctor(v77, (Il2CppObject *)this, Method_ShopRootComponent_SelectedBuyItemConfirm__, 0);
      v78 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
      System_Action___ctor(
        v78,
        (Il2CppObject *)v9,
        Method_ShopRootComponent___c__DisplayClass87_0__OpenConfirmMenu_b__3__,
        0);
      if ( !v76 )
        goto LABEL_61;
      ShopBuyItemConfirmMenu__Open(v76, v74, v75, v77, 0, 22, v78, 0, 0);
      return;
    default:
      return;
  }
}


void ShopRootComponent__OpenDetailCheck(ShopRootComponent_o *this, const MethodInfo *method)
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
  if ( (byte_4D2CBD3 & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ShopDetailMaster___);
    sub_1C93AD4(&Method_ShopRootComponent_CloseDetaiCheckConfirm__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (ShopRootComponent_o *)sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2CBD3 = 1;
  }
  listViewHelper = v2->fields.listViewHelper;
  if ( !listViewHelper )
    goto LABEL_14;
  this = (ShopRootComponent_o *)listViewHelper->fields.buyItemListViewManager;
  if ( !this )
    goto LABEL_14;
  Item = ShopBuyItemListViewManager__GetItem((ShopBuyItemListViewManager_o *)this, v2->fields.selectedItemIndex, 0);
  this = (ShopRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_14;
  this = (ShopRootComponent_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ShopDetailMaster___);
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
                       0);
  this = (ShopRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !ShopDetailEntity )
    goto LABEL_14;
  v7 = (CommonUI_o *)this;
  message = ShopDetailEntity->fields.message;
  v9 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C93D20(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(v9, (Il2CppObject *)v2, Method_ShopRootComponent_CloseDetaiCheckConfirm__, 0);
  this = (ShopRootComponent_o *)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  if ( !v7 )
LABEL_14:
    sub_1C93D2C(this, method);
  CommonUI__OpenConfirmDialog_31580940(
    v7,
    0,
    message,
    1,
    v9,
    BalanceConfig_TypeInfo->static_fields->ShopDetailCheckDialogFontSize,
    0,
    0,
    0,
    0);
}


// local variable allocation has failed, the output may be wrong!
void ShopRootComponent__OpenEventItemWindow(
        ShopRootComponent_o *this,
        int32_t state,
        int32_t eventId,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *shopEventItemDrawBase; // x0
  char v8; // w21
  const MethodInfo *v9; // x2
  UnityEngine_Transform_o *transform; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  ShopRootConstants_c *v12; // x8
  UnityEngine_GameObject_o *v13; // x19
  UnityEngine_Vector3_o GiftButtonPos; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D2CBD8 & 1) == 0 )
  {
    sub_1C93AD4(&ShopBuyItemListViewManager_TypeInfo);
    sub_1C93AD4(&ShopRootConstants_TypeInfo);
    byte_4D2CBD8 = 1;
  }
  shopEventItemDrawBase = (UnityEngine_GameObject_o *)this->fields.shopEventItemDrawBase;
  if ( !shopEventItemDrawBase )
    goto LABEL_19;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *, _QWORD, const MethodInfo *, float))shopEventItemDrawBase->klass[1]._1.element_class)(
    shopEventItemDrawBase,
    shopEventItemDrawBase->klass[1]._1.castClass,
    *(_QWORD *)&eventId,
    method,
    0.0);
  if ( !ShopBuyItemListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ShopBuyItemListViewManager_TypeInfo);
  shopEventItemDrawBase = (UnityEngine_GameObject_o *)ShopBuyItemListViewManager__GetIsShowEventItemWindow(
                                                        state,
                                                        eventId,
                                                        0);
  if ( !this->fields.shopEventItemDrawBase )
    goto LABEL_19;
  v8 = (char)shopEventItemDrawBase;
  shopEventItemDrawBase = UnityEngine_Component__get_gameObject(
                            (UnityEngine_Component_o *)this->fields.shopEventItemDrawBase,
                            0);
  if ( !shopEventItemDrawBase )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive(shopEventItemDrawBase, v8 & 1, 0);
  shopEventItemDrawBase = (UnityEngine_GameObject_o *)this->fields.giftButtonControl;
  if ( !shopEventItemDrawBase )
    goto LABEL_19;
  shopEventItemDrawBase = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)shopEventItemDrawBase, 0);
  if ( !shopEventItemDrawBase )
    goto LABEL_19;
  transform = UnityEngine_GameObject__get_transform(shopEventItemDrawBase, 0);
  if ( !ShopRootConstants_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
  GiftButtonPos = ShopRootConstants__GetGiftButtonPos(v8 & 1, state, v9);
  if ( !transform )
    goto LABEL_19;
  UnityEngine_Transform__set_localPosition(transform, GiftButtonPos, 0);
  if ( (v8 & 1) == 0 )
    return;
  shopEventItemDrawBase = (UnityEngine_GameObject_o *)this->fields.shopEventItemDrawBase;
  if ( !shopEventItemDrawBase )
LABEL_19:
    sub_1C93D2C(shopEventItemDrawBase, *(_QWORD *)&state);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)shopEventItemDrawBase, 0);
  v12 = ShopRootConstants_TypeInfo;
  v13 = gameObject;
  if ( !ShopRootConstants_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
    v12 = ShopRootConstants_TypeInfo;
  }
  TweenAlpha__Begin(v13, v12->static_fields->OPEN_TIME, 1.0, 0);
}


void ShopRootComponent__OpenHelp(ShopRootComponent_o *this, const MethodInfo *method)
{
  int32_t state; // w8
  System_Collections_IEnumerator_o *v4; // x1
  Il2CppObject *Instance; // x20
  System_Action_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  int32_t v9; // w1
  const MethodInfo *v10; // x1
  int32_t v11; // w19
  System_String_o *HelpSaveKey; // x0

  if ( (byte_4D2CBC7 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_ShopRootComponent_OnClickHelpClose__);
    sub_1C93AD4(&ShopRootConstants_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2CBC7 = 1;
  }
  state = this->fields.state;
  switch ( state )
  {
    case 1:
      v4 = ShopRootComponent__WaitPurchase(this, method);
      UnityEngine_MonoBehaviour__StartCoroutine_72105100((UnityEngine_MonoBehaviour_o *)this, v4, 0);
      return;
    case 2:
    case 4:
      return;
    case 3:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v6 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
      System_Action___ctor(v6, (Il2CppObject *)this, (intptr_t)Method_ShopRootComponent_OnClickHelpClose__, 0);
      if ( !Instance )
        goto LABEL_21;
      v9 = 20;
      goto LABEL_18;
    case 5:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v6 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
      System_Action___ctor(v6, (Il2CppObject *)this, (intptr_t)Method_ShopRootComponent_OnClickHelpClose__, 0);
      if ( !Instance )
        goto LABEL_21;
      v9 = 47;
      goto LABEL_18;
    case 6:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v6 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
      System_Action___ctor(v6, (Il2CppObject *)this, (intptr_t)Method_ShopRootComponent_OnClickHelpClose__, 0);
      if ( !Instance )
        goto LABEL_21;
      v9 = 19;
      goto LABEL_18;
    default:
      if ( state == 20 )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v6 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
        System_Action___ctor(v6, (Il2CppObject *)this, (intptr_t)Method_ShopRootComponent_OnClickHelpClose__, 0);
        if ( Instance )
        {
          v9 = 1029;
          goto LABEL_18;
        }
LABEL_21:
        sub_1C93D2C(v7, v8);
      }
      if ( state != 22 )
        return;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v6 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
      System_Action___ctor(v6, (Il2CppObject *)this, (intptr_t)Method_ShopRootComponent_OnClickHelpClose__, 0);
      if ( !Instance )
        goto LABEL_21;
      v9 = 103;
LABEL_18:
      CommonUI__OpenTutorialImageDialog_31604064((CommonUI_o *)Instance, v9, -1, v6, 0, 0, 0);
      v11 = this->fields.state;
      if ( !ShopRootConstants_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
      HelpSaveKey = ShopRootConstants__GetHelpSaveKey(v11, v10);
      UnityEngine_PlayerPrefs__SetInt(HelpSaveKey, 1, 0);
      UnityEngine_PlayerPrefs__Save(0);
      return;
  }
}


void ShopRootComponent__OpenLimitCountSealInfoDialog(
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

  if ( (byte_4D2CBAF & 1) == 0 )
  {
    sub_1C93AD4(&SummonInfoDlgComponent_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&Method_ShopRootComponent_EndLimitCountSealInfoDialog__);
    sub_1C93AD4(&StringLiteral_8322/*"LIMIT_COUNT_SEALED_TITLE"*/);
    byte_4D2CBAF = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !Master_object )
    goto LABEL_10;
  LimitCountSealedDialogMessage = ServantLimitImageMaster__GetLimitCountSealedDialogMessage(
                                    (ServantLimitImageMaster_o *)Master_object,
                                    svtId,
                                    limitCount,
                                    0);
  limitCountSealInfoDlg = this->fields.limitCountSealInfoDlg;
  v11 = LimitCountSealedDialogMessage;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_8322/*"LIMIT_COUNT_SEALED_TITLE"*/, 0);
  v13 = (SummonInfoDlgComponent_CallbackFunc_o *)sub_1C93D20(SummonInfoDlgComponent_CallbackFunc_TypeInfo);
  SummonInfoDlgComponent_CallbackFunc___ctor(
    v13,
    (Il2CppObject *)this,
    (intptr_t)Method_ShopRootComponent_EndLimitCountSealInfoDialog__,
    0);
  if ( !limitCountSealInfoDlg )
LABEL_10:
    sub_1C93D2C(Master_object, v8);
  SummonInfoDlgComponent__OpenInfoMessageDlg(limitCountSealInfoDlg, v12, v11, v13, 0);
}


void ShopRootComponent__OpenStonePurchaseMenu(ShopRootComponent_o *this, int32_t state, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  StonePurchaseMenu_CallbackFunc_o *v6; // x21
  System_Action_o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4D2CBDC & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&StonePurchaseMenu_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_ShopRootComponent_CloseStonePurchaseMenu__);
    sub_1C93AD4(&Method_ShopRootComponent_RefreshInfo__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2CBDC = 1;
  }
  if ( state == 10 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v6 = (StonePurchaseMenu_CallbackFunc_o *)sub_1C93D20(StonePurchaseMenu_CallbackFunc_TypeInfo);
    StonePurchaseMenu_CallbackFunc___ctor(
      v6,
      (Il2CppObject *)this,
      Method_ShopRootComponent_CloseStonePurchaseMenu__,
      0);
    v7 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(v7, (Il2CppObject *)this, Method_ShopRootComponent_RefreshInfo__, 0);
    if ( !Instance )
      sub_1C93D2C(v8, v9);
    CommonUI__OpenStonePurchaseMenu((CommonUI_o *)Instance, v6, v7, 0, 0);
  }
}


void ShopRootComponent__OpenStorageDetailCheck(ShopRootComponent_o *this, const MethodInfo *method)
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
  if ( (byte_4D2CBD4 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_int__TypeInfo);
    this = (ShopRootComponent_o *)sub_1C93AD4(&Method_ShopRootComponent_CloseStorageDetailCheckConfirm__);
    byte_4D2CBD4 = 1;
  }
  listViewHelper = v2->fields.listViewHelper;
  if ( !listViewHelper )
    goto LABEL_7;
  this = (ShopRootComponent_o *)listViewHelper->fields.buyItemListViewManager;
  if ( !this
    || (Item = ShopBuyItemListViewManager__GetItem(
                 (ShopBuyItemListViewManager_o *)this,
                 v2->fields.selectedItemIndex,
                 0),
        KindByShopState = BuyStorageConfirmDialogComponent__GetKindByShopState(v2->fields.state, 0),
        buyStorageConfirmDialog = v2->fields.buyStorageConfirmDialog,
        buyCount = v2->fields.buyCount,
        v8 = KindByShopState,
        v9 = (System_Action_int__o *)sub_1C93D20(System_Action_int__TypeInfo),
        System_Action_int____ctor(v9, (Il2CppObject *)v2, Method_ShopRootComponent_CloseStorageDetailCheckConfirm__, 0),
        !buyStorageConfirmDialog) )
  {
LABEL_7:
    sub_1C93D2C(this, method);
  }
  BuyStorageConfirmDialogComponent__Open(buyStorageConfirmDialog, v8, Item, buyCount, v9, 0);
}


void ShopRootComponent__PlayLvExceedItemReleaseEffect(
        ShopRootComponent_o *this,
        ShopBuyItemListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x20
  BalanceConfig_c *v6; // x0
  ShopBuyItemListViewItem_o *v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  ShopBuyItemListViewItem_o **v14; // x22
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  const MethodInfo *v21; // x3
  __int64 v22; // x8
  __int64 v23; // x8
  int v24; // w21
  QuestRewardInfo_o *v25; // x22
  _QWORD *v26; // x21
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  __int64 v33; // x8
  __int64 v34; // x8
  __int64 v35; // x8
  _DWORD *v36; // x9
  int32_t buyCount; // w8
  Il2CppObject *Instance; // x19
  AvalonSceneManager_c *v39; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v41; // x21

  if ( (byte_4D2CBBA & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&AvalonSceneManager_TypeInfo);
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&QuestRewardInfo_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_ShopRootComponent___c__DisplayClass102_0__PlayLvExceedItemReleaseEffect_b__0__);
    sub_1C93AD4(&ShopRootComponent___c__DisplayClass102_0_TypeInfo);
    byte_4D2CBBA = 1;
  }
  v5 = sub_1C93D20(ShopRootComponent___c__DisplayClass102_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_22;
  *(_QWORD *)(v5 + 24) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 32) = item;
  v14 = (ShopBuyItemListViewItem_o **)(v5 + 32);
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 32), (int32_t)item, v15, v16, v17, v18, v19, v20);
  if ( !*(_QWORD *)(v5 + 32) )
    goto LABEL_22;
  v22 = *(_QWORD *)(*(_QWORD *)(v5 + 32) + 120LL);
  if ( !v22 )
    goto LABEL_22;
  v23 = *(_QWORD *)(v22 + 56);
  if ( !v23 )
    goto LABEL_22;
  if ( !*(_DWORD *)(v23 + 24) )
LABEL_23:
    sub_1C93D34(v6);
  v24 = *(_DWORD *)(v23 + 32);
  v6 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
  }
  if ( v24 == v6->static_fields->LvExceedItemId )
  {
    v25 = (QuestRewardInfo_o *)sub_1C93D20(QuestRewardInfo_TypeInfo);
    QuestRewardInfo___ctor(v25, 0);
    *(_QWORD *)(v5 + 16) = v25;
    v26 = (_QWORD *)(v5 + 16);
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)v25, v27, v28, v29, v30, v31, v32);
    v33 = *(_QWORD *)(v5 + 32);
    if ( !v33 )
      goto LABEL_22;
    v34 = *(_QWORD *)(v33 + 120);
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
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v39 = AvalonSceneManager_TypeInfo;
        if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
          v39 = AvalonSceneManager_TypeInfo;
        }
        DEFAULT_FADE_TIME = v39->static_fields->DEFAULT_FADE_TIME;
        v41 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
        System_Action___ctor(
          v41,
          (Il2CppObject *)v5,
          Method_ShopRootComponent___c__DisplayClass102_0__PlayLvExceedItemReleaseEffect_b__0__,
          0);
        if ( Instance )
        {
          CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v41, 0);
          return;
        }
      }
LABEL_22:
      sub_1C93D2C(v6, v7);
    }
    goto LABEL_23;
  }
  v7 = *v14;
  if ( !*v14 )
    goto LABEL_22;
  ShopRootComponent__ShowNormalItemDialog(this, v7, v7->fields._Shop_k__BackingField, v21);
}


void ShopRootComponent__PlayServantCostumeReleaseEffect(
        ShopRootComponent_o *this,
        ShopEntity_o *shopEntity,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  const MethodInfo *v20; // x2
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v22; // x8
  CommonUI_o *v23; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v25; // x21

  if ( (byte_4D2CBC0 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&AvalonSceneManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_ShopRootComponent___c__DisplayClass109_0__PlayServantCostumeReleaseEffect_b__0__);
    sub_1C93AD4(&ShopRootComponent___c__DisplayClass109_0_TypeInfo);
    byte_4D2CBC0 = 1;
  }
  v5 = sub_1C93D20(ShopRootComponent___c__DisplayClass109_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_8;
  *(_QWORD *)(v5 + 16) = shopEntity;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)shopEntity, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)this, v14, v15, v16, v17, v18, v19);
  ShopRootComponent__SetActionBG(this, 1, v20);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v22 = AvalonSceneManager_TypeInfo;
  v23 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v22 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v22->static_fields->DEFAULT_FADE_TIME;
  v25 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(
    v25,
    (Il2CppObject *)v5,
    Method_ShopRootComponent___c__DisplayClass109_0__PlayServantCostumeReleaseEffect_b__0__,
    0);
  if ( !v23 )
LABEL_8:
    sub_1C93D2C(v6, v7);
  CommonUI__maskFadeout(v23, 1, DEFAULT_FADE_TIME, v25, 0);
}


// local variable allocation has failed, the output may be wrong!
void ShopRootComponent__PlayVoiceBack(ShopRootComponent_o *this, int32_t state, const MethodInfo *method)
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
    sub_1C93D2C(BackVoiceMasterKey, v6);
  v7 = BackVoiceMasterKey;
  BackVoiceFlag = ShopPlayVoiceConstants__GetBackVoiceFlag(state, v6);
  ShopPlayVoiceComponent__PlayVoiceOnce(shopPlayVoiceComponent, v7, BackVoiceFlag, v9);
}


// local variable allocation has failed, the output may be wrong!
void ShopRootComponent__PlayVoiceEnter(ShopRootComponent_o *this, int32_t state, const MethodInfo *method)
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
    sub_1C93D2C(EnterVoiceMasterKey, v6);
  v7 = EnterVoiceMasterKey;
  EnterVoiceFlag = ShopPlayVoiceConstants__GetEnterVoiceFlag(state, v6);
  ShopPlayVoiceComponent__PlayVoiceOnce(shopPlayVoiceComponent, v7, EnterVoiceFlag, v9);
}


void ShopRootComponent__Quit(ShopRootComponent_o *this, const MethodInfo *method)
{
  StandFigureBack_o *standFigureBack; // x0
  const MethodInfo *v4; // x1

  standFigureBack = this->fields.standFigureBack;
  if ( !standFigureBack )
    goto LABEL_15;
  StandFigureBack__Init(standFigureBack, 0);
  standFigureBack = (StandFigureBack_o *)this->fields.backgroundTexture;
  if ( !standFigureBack )
    goto LABEL_15;
  ExUITexture__ClearImage((ExUITexture_o *)standFigureBack, 0);
  standFigureBack = (StandFigureBack_o *)this->fields.shopPlayVoiceComponent;
  if ( !standFigureBack )
    goto LABEL_15;
  ShopPlayVoiceComponent__QuitShopVoice((ShopPlayVoiceComponent_o *)standFigureBack, method);
  standFigureBack = (StandFigureBack_o *)this->fields.listViewHelper;
  if ( !standFigureBack )
    goto LABEL_15;
  ShopSceneListViewControlHelper__SetListViewOnSceneQuit((ShopSceneListViewControlHelper_o *)standFigureBack, method);
  ShopRootComponent__CloseEventItemWindow(this, v4);
  standFigureBack = (StandFigureBack_o *)this->fields.buyItemConfirmMenu;
  if ( !standFigureBack )
    goto LABEL_15;
  ShopBuyItemConfirmMenu__Init((ShopBuyItemConfirmMenu_o *)standFigureBack, 0);
  standFigureBack = (StandFigureBack_o *)this->fields.buyBulkItemConfirmMenu;
  if ( !standFigureBack )
    goto LABEL_15;
  ShopBuyBulkItemConfirmMenu__Init((ShopBuyBulkItemConfirmMenu_o *)standFigureBack, 0);
  standFigureBack = (StandFigureBack_o *)this->fields.ApSeedExchangeConfirmMenu;
  if ( !standFigureBack )
    goto LABEL_15;
  ShopBuyItemConfirmMenu__Init((ShopBuyItemConfirmMenu_o *)standFigureBack, 0);
  standFigureBack = (StandFigureBack_o *)this->fields.ApSeedBulkExchangeConfirmMenu;
  if ( !standFigureBack )
    goto LABEL_15;
  ShopBuyBulkItemConfirmMenu__Init((ShopBuyBulkItemConfirmMenu_o *)standFigureBack, 0);
  standFigureBack = (StandFigureBack_o *)this->fields.servantSellConfirmMenu;
  if ( !standFigureBack )
    goto LABEL_15;
  ServantSellConfirmMenu__Init((ServantSellConfirmMenu_o *)standFigureBack, 0);
  standFigureBack = (StandFigureBack_o *)this->fields.servantSellMenu;
  if ( !standFigureBack
    || (ServantSellMenu__Init((ServantSellMenu_o *)standFigureBack, 0),
        (standFigureBack = (StandFigureBack_o *)this->fields.shopResetConfirmDialog) == 0)
    || (ShopResetConfirmDialogComponent__Init((ShopResetConfirmDialogComponent_o *)standFigureBack, method),
        (standFigureBack = (StandFigureBack_o *)this->fields.purchaseShopCheckWarningDialog) == 0)
    || (PurchaseShopCheckWarningDialog__Init((PurchaseShopCheckWarningDialog_o *)standFigureBack, 0),
        (standFigureBack = (StandFigureBack_o *)this->fields.informationPanel) == 0) )
  {
LABEL_15:
    sub_1C93D2C(standFigureBack, method);
  }
  ShopInfoIndicator__StopInformationChange((ShopInfoIndicator_o *)standFigureBack, method);
  this->fields.state = 0;
}


void ShopRootComponent__QuitHelp(ShopRootComponent_o *this, System_String_o *result, const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  ShopSceneListViewControlHelper_o *listViewHelper; // x0

  if ( (byte_4D2CBCB & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_22655/*"ok"*/);
    byte_4D2CBCB = 1;
  }
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_22655/*"ok"*/, 0) )
  {
    listViewHelper = this->fields.listViewHelper;
    this->fields.inputState = 4;
    if ( !listViewHelper )
      sub_1C93D2C(0, v5);
    ShopSceneListViewControlHelper__SetListViewOnQuitHelp(listViewHelper, this->fields.state, v6);
  }
}


void ShopRootComponent__RefreshCurrencyInfo(ShopRootComponent_o *this, int32_t state, const MethodInfo *method)
{
  ShopCurrencyInfoController_o *currencyInfoController; // x20
  __int64 CurrencyKind; // x0
  __int64 v7; // x1

  if ( (byte_4D2CBA7 & 1) == 0 )
  {
    sub_1C93AD4(&ShopBuyItemListViewManager_TypeInfo);
    byte_4D2CBA7 = 1;
  }
  currencyInfoController = this->fields.currencyInfoController;
  if ( !ShopBuyItemListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ShopBuyItemListViewManager_TypeInfo);
  CurrencyKind = ShopBuyItemListViewManager__GetCurrencyKind(state, 0);
  if ( !currencyInfoController )
    sub_1C93D2C(CurrencyKind, v7);
  ShopCurrencyInfoController__RefreshCurrencyInfo(currencyInfoController, CurrencyKind, state, 0);
}


void ShopRootComponent__RefreshInfo(ShopRootComponent_o *this, const MethodInfo *method)
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
  UILabel_o *purePriInfo2Label; // x22
  NetworkManager_c *v25; // x0
  NetworkManager_c *v26; // x0
  UILabel_o *purePriShopResetInfoLabel; // x21
  UILabel_o *revivalItemInfoLabel; // x21
  NetworkManager_c *v29; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v31; // x0
  UnityEngine_GameObject_o *v32; // x0
  UnityEngine_GameObject_o *v33; // x0
  const MethodInfo *v34; // x2

  if ( (byte_4D2CBA5 & 1) == 0 )
  {
    sub_1C93AD4(&AtlasManager_TypeInfo);
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&StringLiteral_20541/*"img_bg_evocation"*/);
    sub_1C93AD4(&StringLiteral_20552/*"img_bg_pureprism_itemstock_resetticket"*/);
    sub_1C93AD4(&StringLiteral_20551/*"img_bg_pp"*/);
    byte_4D2CBA5 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_71;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !SelfUserGame )
    goto LABEL_71;
  v6 = (int32_t *)Instance;
  stoneInfoLabel = this->fields.stoneInfoLabel;
  stone = SelfUserGame->fields.stone;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = LocalizationManager__GetNumberFormat(stone, 0);
  if ( !stoneInfoLabel )
    goto LABEL_71;
  UILabel__set_text(stoneInfoLabel, (System_String_o *)Instance, 0);
  manaInfoLabel = this->fields.manaInfoLabel;
  Instance = LocalizationManager__GetNumberFormat(SelfUserGame->fields.mana, 0);
  if ( !manaInfoLabel )
    goto LABEL_71;
  UILabel__set_text(manaInfoLabel, (System_String_o *)Instance, 0);
  rarePriInfoLabel = this->fields.rarePriInfoLabel;
  Instance = LocalizationManager__GetNumberFormat(SelfUserGame->fields.rarePri, 0);
  if ( !rarePriInfoLabel )
    goto LABEL_71;
  UILabel__set_text(rarePriInfoLabel, (System_String_o *)Instance, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_71;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserItemMaster___);
  stoneFragmentsInfoLabel = this->fields.stoneFragmentsInfoLabel;
  v13 = (UserItemMaster_o *)MasterData_object;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4D2A55B )
  {
    sub_1C93AD4(&NetworkManager_TypeInfo);
    byte_4D2A55B = 1;
  }
  Instance = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = NetworkManager_TypeInfo;
  }
  if ( !v6 )
    goto LABEL_71;
  if ( !v13 )
    goto LABEL_71;
  Instance = UserItemMaster__GetEntityDefinitely(v13, *(_QWORD *)(*((_QWORD *)Instance + 23) + 64LL), v6[23], 0);
  if ( !Instance )
    goto LABEL_71;
  Instance = LocalizationManager__GetNumberFormat(*((_DWORD *)Instance + 7), 0);
  if ( !stoneFragmentsInfoLabel )
    goto LABEL_71;
  UILabel__set_text(stoneFragmentsInfoLabel, (System_String_o *)Instance, 0);
  anonymousInfoLabel = this->fields.anonymousInfoLabel;
  if ( !byte_4D2A55B )
  {
    sub_1C93AD4(&NetworkManager_TypeInfo);
    byte_4D2A55B = 1;
  }
  v15 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v15 = NetworkManager_TypeInfo;
  }
  Instance = UserItemMaster__GetEntityDefinitely(v13, v15->static_fields->userIdNumber, v6[24], 0);
  if ( !Instance )
    goto LABEL_71;
  Instance = LocalizationManager__GetNumberFormat(*((_DWORD *)Instance + 7), 0);
  if ( !anonymousInfoLabel )
    goto LABEL_71;
  UILabel__set_text(anonymousInfoLabel, (System_String_o *)Instance, 0);
  grailFragmentsInfoLabel = this->fields.grailFragmentsInfoLabel;
  if ( !byte_4D2A55B )
  {
    sub_1C93AD4(&NetworkManager_TypeInfo);
    byte_4D2A55B = 1;
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
  Instance = UserItemMaster__GetEntityDefinitely(v13, userIdNumber, v18->static_fields->LvExceedDewDropItemId, 0);
  if ( !Instance )
    goto LABEL_71;
  Instance = LocalizationManager__GetNumberFormat(*((_DWORD *)Instance + 7), 0);
  if ( !grailFragmentsInfoLabel )
    goto LABEL_71;
  UILabel__set_text(grailFragmentsInfoLabel, (System_String_o *)Instance, 0);
  apSeedInfoLabel = this->fields.apSeedInfoLabel;
  if ( !byte_4D2A55B )
  {
    sub_1C93AD4(&NetworkManager_TypeInfo);
    byte_4D2A55B = 1;
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
               0);
  if ( !Instance )
    goto LABEL_71;
  Instance = LocalizationManager__GetNumberFormat(*((_DWORD *)Instance + 7), 0);
  if ( !apSeedInfoLabel )
    goto LABEL_71;
  UILabel__set_text(apSeedInfoLabel, (System_String_o *)Instance, 0);
  ShopRootComponent__UpdateApLabel(this, v22);
  apSeedIcon = this->fields.apSeedIcon;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetItem(apSeedIcon, 103, 0);
  AtlasManager__SetItem(this->fields.apIcon, 47, 0);
  Instance = this->fields.purePriInfo;
  if ( !Instance )
    goto LABEL_71;
  Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_71;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  purePriInfo2Label = this->fields.purePriInfo2Label;
  if ( !byte_4D2A55B )
  {
    sub_1C93AD4(&NetworkManager_TypeInfo);
    byte_4D2A55B = 1;
  }
  v25 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v25 = NetworkManager_TypeInfo;
  }
  Instance = UserItemMaster__GetEntityDefinitely(
               v13,
               v25->static_fields->userIdNumber,
               BalanceConfig_TypeInfo->static_fields->PurePriItemId,
               0);
  if ( !Instance )
    goto LABEL_71;
  Instance = LocalizationManager__GetNumberFormat(*((_DWORD *)Instance + 7), 0);
  if ( !purePriInfo2Label )
    goto LABEL_71;
  UILabel__set_text(purePriInfo2Label, (System_String_o *)Instance, 0);
  AtlasManager__SetShopBanner_41321904(this->fields.purePriInfo2, (System_String_o *)StringLiteral_20551/*"img_bg_pp"*/, 0);
  if ( !byte_4D2A55B )
  {
    sub_1C93AD4(&NetworkManager_TypeInfo);
    byte_4D2A55B = 1;
  }
  v26 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v26 = NetworkManager_TypeInfo;
  }
  Instance = UserItemMaster__GetEntityDefinitely(v13, v26->static_fields->userIdNumber, v6[25], 0);
  if ( !Instance )
    goto LABEL_71;
  purePriShopResetInfoLabel = this->fields.purePriShopResetInfoLabel;
  Instance = LocalizationManager__GetNumberFormat(*((_DWORD *)Instance + 7), 0);
  if ( !purePriShopResetInfoLabel )
    goto LABEL_71;
  UILabel__set_text(purePriShopResetInfoLabel, (System_String_o *)Instance, 0);
  AtlasManager__SetShopBanner_41321904(this->fields.purePriShopResetInfo, (System_String_o *)StringLiteral_20552/*"img_bg_pureprism_itemstock_resetticket"*/, 0);
  Instance = this->fields.revivalItemInfo;
  if ( !Instance )
    goto LABEL_71;
  Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_71;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  revivalItemInfoLabel = this->fields.revivalItemInfoLabel;
  if ( !byte_4D2A55B )
  {
    sub_1C93AD4(&NetworkManager_TypeInfo);
    byte_4D2A55B = 1;
  }
  v29 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v29 = NetworkManager_TypeInfo;
  }
  Instance = UserItemMaster__GetEntityDefinitely(
               v13,
               v29->static_fields->userIdNumber,
               BalanceConfig_TypeInfo->static_fields->RevivalItemId,
               0);
  if ( !Instance )
    goto LABEL_71;
  Instance = LocalizationManager__GetNumberFormat(*((_DWORD *)Instance + 7), 0);
  if ( !revivalItemInfoLabel )
    goto LABEL_71;
  UILabel__set_text(revivalItemInfoLabel, (System_String_o *)Instance, 0);
  AtlasManager__SetShopBanner_41321904(this->fields.revivalItemInfo, (System_String_o *)StringLiteral_20541/*"img_bg_evocation"*/, 0);
  Instance = this->fields.anonymousInfoLabel;
  if ( !Instance )
    goto LABEL_71;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  Instance = GameObjectExtensions__GetParent(gameObject, 0);
  if ( !Instance )
    goto LABEL_71;
  v31 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  GameObjectExtensions__SetLocalPositionX(v31, -94.0, 0);
  Instance = this->fields.grailFragmentsInfoLabel;
  if ( !Instance
    || (v32 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0),
        (Instance = GameObjectExtensions__GetParent(v32, 0)) == 0)
    || (v33 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0),
        GameObjectExtensions__SetLocalPositionX(v33, -273.0, 0),
        (Instance = this->fields.giftButtonControl) == 0) )
  {
LABEL_71:
    sub_1C93D2C(Instance, v5);
  }
  GiftButtonCtrl__InvalidateGiftInfo((GiftButtonCtrl_o *)Instance, 0);
  ShopRootComponent__RefreshCurrencyInfo(this, this->fields.state, v34);
}


void ShopRootComponent__RequestEnd(ShopRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x2
  __int64 v6; // x1
  ServantSellConfirmMenu_o *servantSellConfirmMenu; // x0
  ServantSellConfirmMenu_o *v8; // x20
  System_Action_int__o *v9; // x21

  if ( (byte_4D2CBB8 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_int__TypeInfo);
    sub_1C93AD4(&Method_ShopRootComponent__RequestEnd_b__100_0__);
    byte_4D2CBB8 = 1;
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
    if ( ServantSellConfirmMenu__get_IsCommandCodeRemoveResult(servantSellConfirmMenu, 0) )
    {
      servantSellConfirmMenu = this->fields.servantSellConfirmMenu;
      if ( servantSellConfirmMenu )
      {
        ServantSellConfirmMenu__Init(servantSellConfirmMenu, 0);
        v8 = this->fields.servantSellConfirmMenu;
        v9 = (System_Action_int__o *)sub_1C93D20(System_Action_int__TypeInfo);
        System_Action_int____ctor(v9, (Il2CppObject *)this, Method_ShopRootComponent__RequestEnd_b__100_0__, 0);
        if ( v8 )
        {
          ServantSellConfirmMenu__OpenCommandCodeRemoveResult(v8, v9, 0);
          return;
        }
      }
LABEL_10:
      sub_1C93D2C(servantSellConfirmMenu, v6);
    }
  }
}


void ShopRootComponent__RequestSellServant(ShopRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  NetworkManager_ResultCallbackFunc_o *v4; // x20
  Il2CppObject *Request_object; // x0
  __int64 v6; // x1

  if ( (byte_4D2CBC3 & 1) == 0 )
  {
    sub_1C93AD4(&Method_NetworkManager_getRequest_SellServantRequest___);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_ShopRootComponent_EndRequestSellServant__);
    sub_1C93AD4(&StringLiteral_22483/*"ng"*/);
    byte_4D2CBC3 = 1;
  }
  if ( this->fields.selectedServantIds )
  {
    v4 = (NetworkManager_ResultCallbackFunc_o *)sub_1C93D20(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v4,
      (Il2CppObject *)this,
      Method_ShopRootComponent_EndRequestSellServant__,
      0);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v4,
                       (const MethodInfo_322FB9C *)Method_NetworkManager_getRequest_SellServantRequest___);
    if ( !Request_object )
      sub_1C93D2C(0, v6);
    SellServantRequest__beginRequest(
      (SellServantRequest_o *)Request_object,
      this->fields.selectedServantIds,
      this->fields.selectedCommandCodeIds,
      0);
  }
  else
  {
    ShopRootComponent__EndRequestSellServant(this, (System_String_o *)StringLiteral_22483/*"ng"*/, v2);
  }
}


void ShopRootComponent__RequestShop(ShopRootComponent_o *this, const MethodInfo *method)
{
  ShopRootComponent_o *v2; // x19
  struct ShopSceneListViewControlHelper_o *listViewHelper; // x8
  ShopBuyItemListViewItem_o *Item; // x0
  const MethodInfo *v5; // x1
  ShopBuyItemListViewItem_o *v6; // x20
  NetworkManager_ResultCallbackFunc_o *v7; // x21
  struct ShopEntity_o *Shop_k__BackingField; // x8

  v2 = this;
  if ( (byte_4D2CBB7 & 1) == 0 )
  {
    sub_1C93AD4(&Method_NetworkManager_getRequest_PurchaseRequest___);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    this = (ShopRootComponent_o *)sub_1C93AD4(&Method_ShopRootComponent_EndRequestShop__);
    byte_4D2CBB7 = 1;
  }
  listViewHelper = v2->fields.listViewHelper;
  if ( !listViewHelper )
    goto LABEL_13;
  this = (ShopRootComponent_o *)listViewHelper->fields.buyItemListViewManager;
  if ( !this )
    goto LABEL_13;
  Item = ShopBuyItemListViewManager__GetItem((ShopBuyItemListViewManager_o *)this, v2->fields.selectedItemIndex, 0);
  if ( Item )
  {
    v6 = Item;
    if ( Item->fields._Shop_k__BackingField )
    {
      v7 = (NetworkManager_ResultCallbackFunc_o *)sub_1C93D20(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(v7, (Il2CppObject *)v2, Method_ShopRootComponent_EndRequestShop__, 0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      this = (ShopRootComponent_o *)NetworkManager__getRequest_object_(
                                      v7,
                                      (const MethodInfo_322FB9C *)Method_NetworkManager_getRequest_PurchaseRequest___);
      Shop_k__BackingField = v6->fields._Shop_k__BackingField;
      if ( Shop_k__BackingField && this )
      {
        PurchaseRequest__beginRequest(
          (PurchaseRequest_o *)this,
          Shop_k__BackingField->fields.id,
          v2->fields.buyCount,
          0,
          0,
          0,
          0);
        return;
      }
LABEL_13:
      sub_1C93D2C(this, method);
    }
  }
  ShopRootComponent__RequestEnd(v2, v5);
}


bool ShopRootComponent__ReturnCallScene(ShopRootComponent_o *this, const MethodInfo *method)
{
  SceneJumpInfo_o *jumpInfo; // x0

  jumpInfo = this->fields.jumpInfo;
  if ( jumpInfo && SceneJumpInfo__ReturnScene(jumpInfo, 0) )
    return 1;
  MainMenuBar__requestTerminalSceneChange(0);
  return 0;
}


// local variable allocation has failed, the output may be wrong!
void ShopRootComponent__SelectItem(ShopRootComponent_o *this, int32_t index, bool isBulk, const MethodInfo *method)
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
  ShopRootComponent_o *v18; // x20
  Il2CppObject *v19; // x0
  System_String_o *v20; // x0
  ShopRootComponent_o *v21; // x21
  Il2CppObject *Name; // x0
  System_String_o *v23; // x0
  SummonInfoDlgComponent_o *limitCountSealInfoDlg; // x21
  System_String_o *v25; // x22
  SummonInfoDlgComponent_CallbackFunc_o *v26; // x23
  int klass_high; // [xsp+Ch] [xbp-34h] BYREF

  v5 = index;
  v6 = this;
  if ( (byte_4D2CBAC & 1) == 0 )
  {
    sub_1C93AD4(&SummonInfoDlgComponent_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_CombineLimitReleaseMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&Method_ShopRootComponent_EndLimitCountSealInfoDialog__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&StringLiteral_3626/*"COMBINE_LIMIT_SEALED_TITLE"*/);
    this = (ShopRootComponent_o *)sub_1C93AD4(&StringLiteral_3625/*"COMBINE_LIMIT_SEALED_MESSAGE_{0}"*/);
    byte_4D2CBAC = 1;
  }
  if ( !v6->fields.inputState )
  {
    listViewHelper = v6->fields.listViewHelper;
    if ( listViewHelper )
    {
      this = (ShopRootComponent_o *)listViewHelper->fields.buyItemListViewManager;
      if ( this )
      {
        Item = ShopBuyItemListViewManager__GetItem((ShopBuyItemListViewManager_o *)this, v5, 0);
        v11 = Item;
        if ( v6->fields.state != 6 || ShopRootComponent__GetShopItemBuyNum((ShopRootComponent_o *)Item, Item, v9) > 0 )
          goto LABEL_8;
        this = (ShopRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( this )
        {
          this = (ShopRootComponent_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
          if ( v11 )
          {
            v12 = (ServantLimitImageMaster_o *)this;
            this = (ShopRootComponent_o *)ShopBuyItemListViewItem__get_TargetId(v11, 0);
            if ( v12 )
            {
              v13 = isBulk;
              if ( ServantLimitImageMaster__IsServantLimitCountSeal(v12, (int32_t)this, 4, 0) )
              {
                v6->fields.limitCountSealInfoIndex = v5;
                v6->fields.limitCountSealInfoBulk = v13;
                TargetId = ShopBuyItemListViewItem__get_TargetId(v11, 0);
                ShopRootComponent__OpenLimitCountSealInfoDialog(v6, TargetId, 0, v15);
                return;
              }
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantMaster___);
              this = (ShopRootComponent_o *)ShopBuyItemListViewItem__get_TargetId(v11, 0);
              if ( Master_object )
              {
                Entity = DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                           (int32_t)this,
                           (const MethodInfo_3463274 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                this = (ShopRootComponent_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_CombineLimitReleaseMaster___);
                *(_QWORD *)&index = Entity ? HIDWORD(Entity[7].klass) : 0xFFFFFFFFLL;
                if ( this )
                {
                  if ( !CombineLimitReleaseMaster__IsExistSealedLimitCount(
                          (CombineLimitReleaseMaster_o *)this,
                          index,
                          0) )
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
                  this = (ShopRootComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3626/*"COMBINE_LIMIT_SEALED_TITLE"*/, 0);
                  if ( Entity )
                  {
                    v18 = this;
                    klass_high = HIDWORD(Entity[7].klass);
                    v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &klass_high);
                    v20 = System_String__Format((System_String_o *)StringLiteral_3625/*"COMBINE_LIMIT_SEALED_MESSAGE_{0}"*/, v19, 0);
                    this = (ShopRootComponent_o *)LocalizationManager__Get(v20, 0);
                    if ( v11->fields._Shop_k__BackingField )
                    {
                      v21 = this;
                      Name = (Il2CppObject *)ShopEntity__getName(v11->fields._Shop_k__BackingField, 0);
                      v23 = System_String__Format((System_String_o *)v21, Name, 0);
                      limitCountSealInfoDlg = v6->fields.limitCountSealInfoDlg;
                      v25 = v23;
                      v26 = (SummonInfoDlgComponent_CallbackFunc_o *)sub_1C93D20(SummonInfoDlgComponent_CallbackFunc_TypeInfo);
                      SummonInfoDlgComponent_CallbackFunc___ctor(
                        v26,
                        (Il2CppObject *)v6,
                        (intptr_t)Method_ShopRootComponent_EndLimitCountSealInfoDialog__,
                        0);
                      if ( limitCountSealInfoDlg )
                      {
                        SummonInfoDlgComponent__OpenInfoMessageDlg(
                          limitCountSealInfoDlg,
                          (System_String_o *)v18,
                          v25,
                          v26,
                          0);
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
    sub_1C93D2C(this, *(_QWORD *)&index);
  }
}


void ShopRootComponent__SelectMenu(ShopRootComponent_o *this, int32_t state, const MethodInfo *method)
{
  __int64 v5; // x20
  ShopPlayVoiceComponent_o *shopPlayVoiceComponent; // x0
  const MethodInfo *v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  ShopRootComponent_o *v14; // x0
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x2
  int32_t v17; // w1
  int32_t v18; // w19
  System_Action_o *v19; // x21
  ShopRootComponent_o *v20; // x0
  const MethodInfo *v21; // x3

  if ( (byte_4D2CBA8 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&CoinRoomUtility_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C93AD4(&Method_ShopRootComponent___c__DisplayClass82_0__SelectMenu_b__0__);
    sub_1C93AD4(&ShopRootComponent___c__DisplayClass82_0_TypeInfo);
    byte_4D2CBA8 = 1;
  }
  v5 = sub_1C93D20(ShopRootComponent___c__DisplayClass82_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_19;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v5 + 24) = state;
  if ( ShopRootComponent__CheckServerLimitTime(v14, state, v15) )
  {
    v17 = *(_DWORD *)(v5 + 24);
    if ( v17 == 17 )
    {
      if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
      if ( CoinRoomUtility__IsTargetQuestClear(0) )
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
                                                0);
            shopPlayVoiceComponent = (ShopPlayVoiceComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
            if ( shopPlayVoiceComponent )
            {
              AvalonSceneManager__pushScene((AvalonSceneManager_o *)shopPlayVoiceComponent, 90, 1, 0, 0);
              return;
            }
          }
        }
LABEL_19:
        sub_1C93D2C(shopPlayVoiceComponent, v7);
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
    v19 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(v19, (Il2CppObject *)v5, Method_ShopRootComponent___c__DisplayClass82_0__SelectMenu_b__0__, 0);
    ShopRootComponent__SetFadeOut(v20, v18, v19, v21);
  }
}


void ShopRootComponent__SelectSellServantConfirm(ShopRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  ServantSellMenu_o *servantSellMenu; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
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

  if ( (byte_4D2CBB6 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_int__TypeInfo);
    sub_1C93AD4(&Method_ShopRootComponent_SellServantConfirm__);
    sub_1C93AD4(&Method_ShopRootComponent___c__DisplayClass98_0__SelectSellServantConfirm_b__0__);
    sub_1C93AD4(&ShopRootComponent___c__DisplayClass98_0_TypeInfo);
    byte_4D2CBB6 = 1;
  }
  v3 = sub_1C93D20(ShopRootComponent___c__DisplayClass98_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_18;
  *(_QWORD *)(v3 + 16) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v3 + 16), (int32_t)this, v6, v7, v8, v9, v10, v11);
  if ( this->fields.inputState == 2 )
  {
    servantSellMenu = this->fields.servantSellMenu;
    if ( !servantSellMenu )
      goto LABEL_18;
    tabKind = servantSellMenu->fields.tabKind;
    selectedServantIds = this->fields.selectedServantIds;
    IsSellEquipedCmdCodeLastServant = ServantSellMenu__get_IsSellEquipedCmdCodeLastServant(servantSellMenu, 0);
    *(_DWORD *)(v3 + 24) = ServantSellConfirmMenu__GetServantSellConfirmKindOnOpenConfirm(
                             tabKind,
                             selectedServantIds == 0,
                             IsSellEquipedCmdCodeLastServant,
                             0);
    servantSellMenu = (ServantSellMenu_o *)this->fields.servantSellConfirmMenu;
    if ( !servantSellMenu )
      goto LABEL_18;
    ServantSellConfirmMenu__Init((ServantSellConfirmMenu_o *)servantSellMenu, 0);
    v15 = this->fields.selectedServantIds;
    if ( v15 )
    {
      servantSellConfirmMenu = this->fields.servantSellConfirmMenu;
      if ( *(_DWORD *)(v3 + 24) == 4 )
      {
        v17 = (System_Action_int__o *)sub_1C93D20(System_Action_int__TypeInfo);
        System_Action_int____ctor(
          v17,
          (Il2CppObject *)v3,
          Method_ShopRootComponent___c__DisplayClass98_0__SelectSellServantConfirm_b__0__,
          0);
        if ( servantSellConfirmMenu )
        {
          ServantSellConfirmMenu__OpenSellEquippedLastSvtWarning(servantSellConfirmMenu, 4, v15, v17, 0);
          return;
        }
LABEL_18:
        sub_1C93D2C(servantSellMenu, v5);
      }
      if ( !servantSellConfirmMenu )
        goto LABEL_18;
      ServantSellConfirmMenu__Init(this->fields.servantSellConfirmMenu, 0);
      v26 = this->fields.servantSellConfirmMenu;
      v27 = *(_DWORD *)(v3 + 24);
      v28 = this->fields.selectedServantIds;
      selectedCommandCodeIds = this->fields.selectedCommandCodeIds;
      v30 = (System_Action_int__o *)sub_1C93D20(System_Action_int__TypeInfo);
      System_Action_int____ctor(v30, (Il2CppObject *)this, Method_ShopRootComponent_SellServantConfirm__, 0);
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
      v20 = (System_Action_int__o *)sub_1C93D20(System_Action_int__TypeInfo);
      System_Action_int____ctor(v20, (Il2CppObject *)this, Method_ShopRootComponent_SellServantConfirm__, 0);
      if ( !v18 )
        goto LABEL_18;
      v21 = v18;
      v22 = v19;
      v23 = 0;
      v24 = 0;
      v25 = v20;
    }
    ServantSellConfirmMenu__Open(v21, v22, v23, v24, v25, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void ShopRootComponent__SelectedBuyItemConfirm(ShopRootComponent_o *this, int32_t buyCount, const MethodInfo *method)
{
  ShopRootComponent_o *v4; // x19
  int32_t state; // w8
  struct ShopSceneListViewControlHelper_o *listViewHelper; // x8
  ShopBuyItemListViewItem_o *Item; // x20
  struct ShopEntity_o *Shop_k__BackingField; // x8

  v4 = this;
  if ( (byte_4D2CBB2 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_ShopDetailMaster___);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    sub_1C93AD4(&ShopRootComponent_TypeInfo);
    this = (ShopRootComponent_o *)sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2CBB2 = 1;
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
    if ( (unsigned int)(state - 11) >= 2 )
    {
      if ( state == 22 )
        goto LABEL_6;
      listViewHelper = v4->fields.listViewHelper;
      if ( listViewHelper )
      {
        this = (ShopRootComponent_o *)listViewHelper->fields.buyItemListViewManager;
        if ( this )
        {
          Item = ShopBuyItemListViewManager__GetItem(
                   (ShopBuyItemListViewManager_o *)this,
                   v4->fields.selectedItemIndex,
                   0);
          this = (ShopRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            this = (ShopRootComponent_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)this,
                                            (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ShopDetailMaster___);
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
                                                  0);
                  if ( !this )
                    goto LABEL_6;
                  if ( LODWORD(this->fields.myFSM) == 3 )
                    goto LABEL_21;
                  if ( ShopRootComponent_TypeInfo->static_fields->shopDetailCheckList )
                  {
                    if ( System_Collections_Generic_Dictionary_int__int___get_Item(
                           ShopRootComponent_TypeInfo->static_fields->shopDetailCheckList,
                           this->fields.m_CachedPtr,
                           (const MethodInfo_34B4230 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__) )
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
      sub_1C93D2C(this, *(_QWORD *)&buyCount);
    }
    ShopRootComponent__OpenStorageDetailCheck(v4, *(const MethodInfo **)&buyCount);
  }
}


// local variable allocation has failed, the output may be wrong!
void ShopRootComponent__SellServantConfirm(ShopRootComponent_o *this, int32_t count, const MethodInfo *method)
{
  if ( count )
    ShopRootComponent__RequestSellServant(this, *(const MethodInfo **)&count);
  else
    ShopRootComponent__CloseSellServantConfirm(this, *(const MethodInfo **)&count);
}


// local variable allocation has failed, the output may be wrong!
void ShopRootComponent__SellServantExceededConfirm(ShopRootComponent_o *this, int32_t count, const MethodInfo *method)
{
  ServantSellConfirmMenu_o *servantSellConfirmMenu; // x0
  const MethodInfo *v5; // x1

  if ( count )
  {
    servantSellConfirmMenu = this->fields.servantSellConfirmMenu;
    if ( !servantSellConfirmMenu
      || (ServantSellConfirmMenu__Close(servantSellConfirmMenu, 0),
          (servantSellConfirmMenu = this->fields.servantSellConfirmMenu) == 0) )
    {
      sub_1C93D2C(servantSellConfirmMenu, *(_QWORD *)&count);
    }
    ServantSellConfirmMenu__Init(servantSellConfirmMenu, 0);
    ShopRootComponent__SelectSellServantConfirm(this, v5);
  }
  else
  {
    ShopRootComponent__CloseSellServantConfirm(this, *(const MethodInfo **)&count);
  }
}


void ShopRootComponent__SetActionBG(ShopRootComponent_o *this, bool isEnable, const MethodInfo *method)
{
  UnityEngine_Object_o *actionBg; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_4D2CBE0 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2CBE0 = 1;
  }
  actionBg = (UnityEngine_Object_o *)this->fields.actionBg;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(actionBg, 0, 0) )
  {
    v7 = this->fields.actionBg;
    if ( !v7 )
      sub_1C93D2C(0, v6);
    UnityEngine_GameObject__SetActive(v7, isEnable, 0);
  }
}


void ShopRootComponent__SetFadeIn(ShopRootComponent_o *this, int32_t state, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  CommonUI_o *v6; // x19

  if ( (byte_4D2CBAB & 1) == 0 )
  {
    sub_1C93AD4(&AvalonSceneManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2CBAB = 1;
  }
  if ( state == 15 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v6 = (CommonUI_o *)Instance;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    if ( !v6 )
      sub_1C93D2C(Instance, v5);
    CommonUI__maskFadein(v6, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0);
  }
}


void ShopRootComponent__SetFadeOut(
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
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v16; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v18; // x21

  if ( (byte_4D2CBAA & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&AvalonSceneManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_ShopRootComponent___c__DisplayClass84_0__SetFadeOut_b__0__);
    sub_1C93AD4(&ShopRootComponent___c__DisplayClass84_0_TypeInfo);
    byte_4D2CBAA = 1;
  }
  v6 = sub_1C93D20(ShopRootComponent___c__DisplayClass84_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  if ( !v6 )
    goto LABEL_10;
  *(_QWORD *)(v6 + 16) = endFade;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v6 + 16), (int32_t)endFade, v9, v10, v11, v12, v13, v14);
  if ( state == 15 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v16 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v16 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v16->static_fields->DEFAULT_FADE_TIME;
    v18 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(v18, (Il2CppObject *)v6, Method_ShopRootComponent___c__DisplayClass84_0__SetFadeOut_b__0__, 0);
    if ( Instance )
    {
      CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v18, 0);
      return;
    }
LABEL_10:
    sub_1C93D2C(v7, v8);
  }
  ActionExtensions__Call(*(System_Action_o **)(v6 + 16), 0);
}


void ShopRootComponent__SetFrequencyTypeCheckList(
        ShopRootComponent_o *this,
        ShopDetailEntity_o *entity,
        bool decide,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__int__o *shopDetailCheckList; // x0

  if ( (byte_4D2CBD7 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    sub_1C93AD4(&ShopRootComponent_TypeInfo);
    byte_4D2CBD7 = 1;
  }
  if ( entity && (decide || entity->fields.frequencyType != 1) )
  {
    shopDetailCheckList = ShopRootComponent_TypeInfo->static_fields->shopDetailCheckList;
    if ( !shopDetailCheckList )
      sub_1C93D2C(0, entity);
    System_Collections_Generic_Dictionary_int__int___set_Item(
      shopDetailCheckList,
      entity->fields.shopId,
      1,
      (const MethodInfo_34B42B8 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
  }
}


void ShopRootComponent__SetInputState(ShopRootComponent_o *this, int32_t inputState, const MethodInfo *method)
{
  this->fields.inputState = inputState;
}


void ShopRootComponent__SetState(ShopRootComponent_o *this, int32_t state, const MethodInfo *method)
{
  this->fields.state = state;
}


// local variable allocation has failed, the output may be wrong!
void ShopRootComponent__SetStatusTitleInfo(ShopRootComponent_o *this, bool isDisp, const MethodInfo *method)
{
  UnityEngine_Component_o *informationPanel; // x0

  informationPanel = (UnityEngine_Component_o *)this->fields.informationPanel;
  if ( !informationPanel )
    goto LABEL_7;
  informationPanel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(informationPanel, 0);
  if ( !informationPanel )
    goto LABEL_7;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)informationPanel, isDisp, 0);
  if ( isDisp )
  {
    informationPanel = (UnityEngine_Component_o *)this->fields.informationPanel;
    if ( informationPanel )
    {
      ShopInfoIndicator__StartInformationChange((ShopInfoIndicator_o *)informationPanel, (const MethodInfo *)isDisp);
      return;
    }
LABEL_7:
    sub_1C93D2C(informationPanel, isDisp);
  }
}


void ShopRootComponent__ShowNormalItemDialog(
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

  if ( (byte_4D2CBBB & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_bool__TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C93AD4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C93AD4(&Method_ShopRootComponent_OnEndItemDialog__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2CBBB = 1;
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
    RequestResultDialogMessageNormal = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( RequestResultDialogMessageNormal )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)RequestResultDialogMessageNormal,
                            (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ItemMaster___);
      RequestResultDialogMessageNormal = (System_String_o *)ShopEntity__get_TargetId(entity, 0);
      if ( MasterData_object )
      {
        v11 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                (int32_t)RequestResultDialogMessageNormal,
                (const MethodInfo_3463274 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
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
        v18 = (System_Action_bool__o *)sub_1C93D20(System_Action_bool__TypeInfo);
        System_Action_bool____ctor(v18, (Il2CppObject *)this, Method_ShopRootComponent_OnEndItemDialog__, 0);
        if ( requestResultDialog )
        {
          RequestResultDialog__Open(requestResultDialog, v9, v17, RequestResultDialogItemMessageNormal, v18, 0);
          return;
        }
      }
    }
LABEL_11:
    sub_1C93D2C(RequestResultDialogMessageNormal, v8);
  }
  v19 = this->fields.requestResultDialog;
  v20 = (System_Action_bool__o *)sub_1C93D20(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v20, (Il2CppObject *)this, Method_ShopRootComponent_OnEndItemDialog__, 0);
  if ( !v19 )
    goto LABEL_11;
  RequestResultDialog__Open_35543540(v19, (System_String_o *)StringLiteral_1/*""*/, v9, v20, -1, 0);
}


void ShopRootComponent__ShowSetItemDialog(ShopRootComponent_o *this, ShopEntity_o *entity, const MethodInfo *method)
{
  System_String_o *RequestResultDialogMessage; // x0
  RequestResultDialog_o *requestResultDialog; // x20
  System_String_o *v7; // x21
  System_Action_bool__o *v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4D2CBBC & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_bool__TypeInfo);
    sub_1C93AD4(&Method_ShopRootComponent_OnEndItemDialog__);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2CBBC = 1;
  }
  RequestResultDialogMessage = ShopRequestResultDialogMessageMaker__GetRequestResultDialogMessage(
                                 entity,
                                 this->fields.buyCount,
                                 method);
  requestResultDialog = this->fields.requestResultDialog;
  v7 = RequestResultDialogMessage;
  v8 = (System_Action_bool__o *)sub_1C93D20(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v8, (Il2CppObject *)this, Method_ShopRootComponent_OnEndItemDialog__, 0);
  if ( !requestResultDialog )
    sub_1C93D2C(v9, v10);
  RequestResultDialog__Open_35543540(requestResultDialog, (System_String_o *)StringLiteral_1/*""*/, v7, v8, -1, 0);
}


void ShopRootComponent__ShowStorageDialog(
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

  if ( (byte_4D2CBBD & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_int__TypeInfo);
    sub_1C93AD4(&Method_ShopRootComponent_OnEndStorageDialog__);
    byte_4D2CBBD = 1;
  }
  state = this->fields.state;
  if ( state == 12 )
  {
    buyStorageResultDialog = this->fields.buyStorageResultDialog;
    v7 = (System_Action_int__o *)sub_1C93D20(System_Action_int__TypeInfo);
    System_Action_int____ctor(v7, (Il2CppObject *)this, Method_ShopRootComponent_OnEndStorageDialog__, 0);
    if ( buyStorageResultDialog )
    {
      v11 = 1;
      v10 = buyStorageResultDialog;
      goto LABEL_9;
    }
LABEL_11:
    sub_1C93D2C(v8, v9);
  }
  if ( state == 11 )
  {
    v6 = this->fields.buyStorageResultDialog;
    v7 = (System_Action_int__o *)sub_1C93D20(System_Action_int__TypeInfo);
    System_Action_int____ctor(v7, (Il2CppObject *)this, Method_ShopRootComponent_OnEndStorageDialog__, 0);
    if ( v6 )
    {
      v10 = v6;
      v11 = 0;
LABEL_9:
      BuyStorageConfirmDialogComponent__ResultOpenDialog(v10, v11, item, v7, 0);
      return;
    }
    goto LABEL_11;
  }
}


// attributes: thunk
void ShopRootComponent__Update(ShopRootComponent_o *this, const MethodInfo *method)
{
  ShopRootComponent__UpdateApLabel(this, method);
}


void ShopRootComponent__UpdateApLabel(ShopRootComponent_o *this, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v4; // x1
  UILabel_o *apInfoLabel; // x19
  int32_t Act; // w20

  if ( (byte_4D2CBA6 & 1) == 0 )
  {
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    byte_4D2CBA6 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame )
    goto LABEL_8;
  apInfoLabel = this->fields.apInfoLabel;
  Act = UserGameEntity__getAct(SelfUserGame, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  SelfUserGame = (UserGameEntity_o *)LocalizationManager__GetNumberFormat(Act, 0);
  if ( !apInfoLabel )
LABEL_8:
    sub_1C93D2C(SelfUserGame, v4);
  UILabel__set_text(apInfoLabel, (System_String_o *)SelfUserGame, 0);
}


void ShopRootComponent__UpdateGiftBadgeNum(ShopRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *giftButtonControl; // x20
  __int64 v4; // x1
  GiftButtonCtrl_o *v5; // x0

  if ( (byte_4D2CBE1 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2CBE1 = 1;
  }
  giftButtonControl = (UnityEngine_Object_o *)this->fields.giftButtonControl;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(giftButtonControl, 0, 0) )
  {
    v5 = this->fields.giftButtonControl;
    if ( !v5 )
      sub_1C93D2C(0, v4);
    GiftButtonCtrl__InvalidateGiftInfo(v5, 0);
  }
}


System_Collections_IEnumerator_o *ShopRootComponent__WaitPurchase(ShopRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D2CBC8 & 1) == 0 )
  {
    sub_1C93AD4(&ShopRootComponent__WaitPurchase_d__123_TypeInfo);
    byte_4D2CBC8 = 1;
  }
  v3 = sub_1C93D20(ShopRootComponent__WaitPurchase_d__123_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


void ShopRootComponent___EndRequestShop_b__101_0(ShopRootComponent_o *this, bool isDecide, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x1

  if ( (byte_4D2CBE7 & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2CBE7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C93D2C(0, v5);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0);
  ShopRootComponent__RequestEnd(this, v6);
}


void ShopRootComponent___Init_b__77_0(ShopRootComponent_o *this, int32_t stoneCount, const MethodInfo *method)
{
  UILabel_o *stoneInfoLabel; // x20
  System_String_o *NumberFormat; // x0
  __int64 v7; // x1

  if ( (byte_4D2CBE6 & 1) == 0 )
  {
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    byte_4D2CBE6 = 1;
  }
  stoneInfoLabel = this->fields.stoneInfoLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  NumberFormat = LocalizationManager__GetNumberFormat(stoneCount, 0);
  if ( !stoneInfoLabel )
    sub_1C93D2C(NumberFormat, v7);
  UILabel__set_text(stoneInfoLabel, NumberFormat, 0);
}


void ShopRootComponent___RequestEnd_b__100_0(ShopRootComponent_o *this, int32_t count, const MethodInfo *method)
{
  __int64 v4; // x1
  ServantSellConfirmMenu_o *servantSellConfirmMenu; // x0

  ShopRootComponent__PlayVoiceBack(this, this->fields.state, method);
  servantSellConfirmMenu = this->fields.servantSellConfirmMenu;
  if ( !servantSellConfirmMenu
    || (ServantSellConfirmMenu__Close(servantSellConfirmMenu, 0),
        (servantSellConfirmMenu = this->fields.servantSellConfirmMenu) == 0) )
  {
    sub_1C93D2C(servantSellConfirmMenu, v4);
  }
  ServantSellConfirmMenu__ClearCommandCodeRemoveResult(servantSellConfirmMenu, 0);
}


void ShopRootComponent____n__0(ShopRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent__beginStartUp_42213664((SceneRootComponent_o *)this, 0);
}


void ShopRootComponent___beginInitialize_b__71_0(ShopRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *titleInfo; // x20
  __int64 v4; // x1
  TitleInfoControl_o *v5; // x0

  if ( (byte_4D2CBE5 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2CBE5 = 1;
  }
  titleInfo = (UnityEngine_Object_o *)this->fields.titleInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(titleInfo, 0, 0) )
  {
    v5 = this->fields.titleInfo;
    if ( !v5 )
      sub_1C93D2C(0, v4);
    TitleInfoControl__setDispParticleObj(v5, 0, 0);
  }
}


void ShopRootComponent__beginFinish(ShopRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ShopTopListViewManager_o *topListViewManager; // x0

  ShopRootComponent__Quit(this, method);
  topListViewManager = this->fields.topListViewManager;
  if ( !topListViewManager )
    sub_1C93D2C(0, v3);
  ShopTopListViewManager__ReleaseCoinRoomAsset(topListViewManager, 0);
}


void ShopRootComponent__beginInitialize(ShopRootComponent_o *this, const MethodInfo *method)
{
  ShopTopListViewManager_o *topListViewManager; // x0
  ShopRootComponent_o *v4; // x0
  const MethodInfo *v5; // x1
  struct GiftButtonCtrl_o *giftButtonControl; // x20
  System_Action_o *v7; // x21
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  struct GiftButtonCtrl_o *v14; // x20
  System_Func_bool__bool__o *v15; // x21
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  struct GiftButtonCtrl_o *v22; // x20
  System_Action_o *v23; // x21
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7

  if ( (byte_4D2CBA0 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&System_Func_bool__bool__TypeInfo);
    sub_1C93AD4(&Method_ShopRootComponent_OnGiftClose__);
    sub_1C93AD4(&Method_ShopRootComponent_OnGiftOpen__);
    sub_1C93AD4(&Method_ShopRootComponent__beginInitialize_b__71_0__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4D2CBA0 = 1;
  }
  topListViewManager = this->fields.topListViewManager;
  if ( !topListViewManager )
    goto LABEL_12;
  ShopTopListViewManager__LoadCoinRoomAsset(topListViewManager, 0);
  ShopRootComponent__CreateShopDetailCheckList(v4, v5);
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0);
  SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 6, 30, 0);
  topListViewManager = (ShopTopListViewManager_o *)this->fields.eventBanner;
  if ( !topListViewManager )
    goto LABEL_12;
  EventBannerComponent__SetBanner((EventBannerComponent_o *)topListViewManager, 0);
  topListViewManager = (ShopTopListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !topListViewManager )
    goto LABEL_12;
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)topListViewManager, (SceneRootComponent_o *)this, 0);
  topListViewManager = (ShopTopListViewManager_o *)this->fields.helpListViewManager;
  if ( !topListViewManager )
    goto LABEL_12;
  ShopHelpListViewManager__LoadBaseSprite((ShopHelpListViewManager_o *)topListViewManager, method);
  topListViewManager = (ShopTopListViewManager_o *)this->fields.informationPanel;
  if ( !topListViewManager )
    goto LABEL_12;
  ShopInfoIndicator__StartInformationChange((ShopInfoIndicator_o *)topListViewManager, method);
  giftButtonControl = this->fields.giftButtonControl;
  v7 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_ShopRootComponent_OnGiftOpen__, 0);
  if ( !giftButtonControl )
    goto LABEL_12;
  giftButtonControl->fields.OnGiftOpenAdditionalAction = v7;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&giftButtonControl->fields.OnGiftOpenAdditionalAction,
    (int32_t)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  v14 = this->fields.giftButtonControl;
  v15 = (System_Func_bool__bool__o *)sub_1C93D20(System_Func_bool__bool__TypeInfo);
  System_Func_bool__bool____ctor(v15, (Il2CppObject *)this, Method_ShopRootComponent_OnGiftClose__, 0);
  if ( !v14
    || (v14->fields.OnGiftCloseAdditionalAction = v15,
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)&v14->fields.OnGiftCloseAdditionalAction,
          (int32_t)v15,
          v16,
          v17,
          v18,
          v19,
          v20,
          v21),
        v22 = this->fields.giftButtonControl,
        v23 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo),
        System_Action___ctor(v23, (Il2CppObject *)this, Method_ShopRootComponent__beginInitialize_b__71_0__, 0),
        !v22) )
  {
LABEL_12:
    sub_1C93D2C(topListViewManager, method);
  }
  v22->fields._OnGiftInterfaceOpenFadedOutAction_k__BackingField = v23;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&v22->fields._OnGiftInterfaceOpenFadedOutAction_k__BackingField,
    (int32_t)v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
}


void ShopRootComponent__beginResume(ShopRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent__beginResume_42213848((SceneRootComponent_o *)this, 0);
}


void ShopRootComponent__beginStartUp(ShopRootComponent_o *this, Il2CppObject *data, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct SceneJumpInfo_o **p_jumpInfo; // x21
  const MethodInfo *v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  Il2CppClass *v17; // x8
  __int64 naturalAligment; // x9
  int32_t v19; // w1
  TitleInfoControl_o *titleInfo; // x0
  __int64 v21; // x1
  System_String_o *returnSceneName; // x20
  System_String_o *SceneName; // x0
  bool v24; // w0
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  struct ShopPlayVoiceComponent_o *shopPlayVoiceComponent; // x8
  System_String_o *MainBgmName; // x20
  System_Action_o *v32; // x20
  const MethodInfo *v33; // x1
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  struct ShopPlayVoiceComponent_o *v40; // x20
  struct StandFigureBack_o *standFigureBack; // x1
  int32_t defaultFaceId; // w21
  void *v43; // d8
  GrandQuestFolderBoardItem_o *p_standFigureBack; // x20
  UITexture_o *backgroundTexture; // x20
  System_String_o *BG_ROOT; // x20
  Il2CppObject *v47; // x0
  System_String_o *v48; // x0
  ExUITexture_o *v49; // x21
  System_String_o *v50; // x20
  System_Action_o *v51; // x22
  ShopRootConstants_c *v52; // x0
  struct ShopRootConstants_StaticFields *static_fields; // x8
  System_String_o *v54; // x20
  Il2CppObject *v55; // x0
  ExUITexture_o *v56; // x19
  int32_t DEFAULT_BG_ID; // [xsp+8h] [xbp-48h] BYREF
  int32_t bgImageId; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4D2CBA1 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&AtlasManager_TypeInfo);
    sub_1C93AD4(&BgmManager_TypeInfo);
    sub_1C93AD4(&FSUtility_TypeInfo);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&SceneJumpInfo_TypeInfo);
    sub_1C93AD4(&SceneList_TypeInfo);
    sub_1C93AD4(&Method_ShopRootComponent_LoadBanner__);
    sub_1C93AD4(&Method_ShopRootComponent__beginStartUp_b__72_0__);
    sub_1C93AD4(&ShopRootConstants_TypeInfo);
    sub_1C93AD4(&SoundManager_TypeInfo);
    byte_4D2CBA1 = 1;
  }
  p_jumpInfo = &this->fields.jumpInfo;
  this->fields.jumpInfo = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.jumpInfo, 0, (int32_t)method, v3, v4, v5, v6, v7);
  this->fields.isFromCoinRoom = 0;
  if ( data )
  {
    v17 = (Il2CppClass *)SceneJumpInfo_TypeInfo;
    naturalAligment = SceneJumpInfo_TypeInfo->_2.naturalAligment;
    if ( data->klass->_2.naturalAligment >= (unsigned int)naturalAligment
      && (SceneJumpInfo_c *)data->klass->_2.typeHierarchy[naturalAligment - 1] == SceneJumpInfo_TypeInfo )
    {
      *p_jumpInfo = (struct SceneJumpInfo_o *)data;
      if ( data->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      {
        if ( data->klass->_2.typeHierarchy[naturalAligment - 1] == v17 )
          v19 = (int)data;
        else
          v19 = 0;
      }
      else
      {
        v19 = 0;
      }
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.jumpInfo, v19, (int32_t)v11, v12, v13, v14, v15, v16);
      if ( !*p_jumpInfo )
        goto LABEL_41;
      returnSceneName = (*p_jumpInfo)->fields.returnSceneName;
      if ( !SceneList_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
      SceneName = SceneList__getSceneName(90, 0);
      v24 = System_String__op_Equality(returnSceneName, SceneName, 0);
      this->fields.isFromCoinRoom = v24;
      if ( v24 )
      {
        *p_jumpInfo = 0;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.jumpInfo, 0, (int32_t)v11, v25, v26, v27, v28, v29);
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
  MainBgmName = BgmManager__GetMainBgmName(0, 0);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm(MainBgmName, 0);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_41;
  TitleInfoControl__setTitleInfo(titleInfo, this->fields.myFSM, 1, 0, 41, 0);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_41;
  TitleInfoControl__SetHelpBtn(titleInfo, 0, 0);
  v32 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v32, (Il2CppObject *)this, Method_ShopRootComponent__beginStartUp_b__72_0__, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadBanner(v32, 1, 0);
  ShopRootComponent__setDispInfo(this, v33);
  v40 = this->fields.shopPlayVoiceComponent;
  if ( !v40 )
    goto LABEL_41;
  standFigureBack = this->fields.standFigureBack;
  defaultFaceId = this->fields.defaultFaceId;
  v43 = *(void **)&this->fields.figureSvtId;
  v40->fields.standFigureBack = standFigureBack;
  p_standFigureBack = (GrandQuestFolderBoardItem_o *)&v40->fields.standFigureBack;
  sub_1C93A78(p_standFigureBack, (int32_t)standFigureBack, v34, v35, v36, v37, v38, v39);
  p_standFigureBack->monitor = v43;
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
    0,
    0,
    0);
  MainMenuBar__setMenuActive(1, 0, 0);
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
    *(UnityEngine_Rect_o *)((char *)&titleInfo->fields.particleAssetName[1].klass + 4),
    0);
  BG_ROOT = ShopRootConstants_TypeInfo->static_fields->BG_ROOT;
  bgImageId = this->fields.bgImageId;
  v47 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &bgImageId);
  v48 = System_String__Format(BG_ROOT, v47, 0);
  v49 = this->fields.backgroundTexture;
  v50 = v48;
  v51 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v51, (Il2CppObject *)this, Method_ShopRootComponent_LoadBanner__, 0);
  if ( !v49 )
    goto LABEL_41;
  if ( ExUITexture__SetAssetImage(v49, v50, v51, 0) )
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
  v55 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &DEFAULT_BG_ID);
  titleInfo = (TitleInfoControl_o *)System_String__Format(v54, v55, 0);
  if ( !this->fields.backgroundTexture )
LABEL_41:
    sub_1C93D2C(titleInfo, v21);
  v50 = (System_String_o *)titleInfo;
  ExUITexture__SetAssetImage(this->fields.backgroundTexture, (System_String_o *)titleInfo, 0, 0);
LABEL_38:
  v56 = this->fields.backgroundTexture;
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  FSUtility__SetUpBackTextureSize(v56, v50, 0);
}


void ShopRootComponent__setDispInfo(ShopRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  GuideEntity_o *GuideData; // x0
  int32_t guideFaceId; // w8
  ShopRootConstants_c *v7; // x0
  struct ShopRootConstants_StaticFields *static_fields; // x9

  if ( (byte_4D2CBA2 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_GuideMaster___);
    sub_1C93AD4(&ShopRootConstants_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2CBA2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_GuideMaster___)) == 0 )
  {
    sub_1C93D2C(Instance, v4);
  }
  GuideData = GuideMaster__getGuideData((GuideMaster_o *)Instance, 2, 0);
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


void ShopRootComponent__WaitPurchase_d__123___ctor(
        ShopRootComponent__WaitPurchase_d__123_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool ShopRootComponent__WaitPurchase_d__123__MoveNext(
        ShopRootComponent__WaitPurchase_d__123_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ShopRootComponent__WaitPurchase_d__123_o *v3; // x19
  int32_t _1__state; // w8
  ShopRootComponent___c_c *v5; // x0
  System_Func_bool__o *_9__123_0; // x20
  Il2CppObject *v7; // x21
  struct ShopRootComponent___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  UnityEngine_WaitUntil_o *v15; // x21
  GrandQuestFolderBoardItem_o *p__2__current; // x19
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  struct ShopRootComponent_o *_4__this; // x8

  v3 = this;
  if ( (byte_4D2CBFA & 1) == 0 )
  {
    sub_1C93AD4(&System_Func_bool__TypeInfo);
    sub_1C93AD4(&Method_ShopRootComponent___c__WaitPurchase_b__123_0__);
    sub_1C93AD4(&ShopRootComponent___c_TypeInfo);
    this = (ShopRootComponent__WaitPurchase_d__123_o *)sub_1C93AD4(&UnityEngine_WaitUntil_TypeInfo);
    byte_4D2CBFA = 1;
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
      sub_1C93D2C(this, method);
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
  _9__123_0 = v5->static_fields->__9__123_0;
  if ( !_9__123_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = ShopRootComponent___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v5->static_fields->__9;
    _9__123_0 = (System_Func_bool__o *)sub_1C93D20(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(_9__123_0, v7, Method_ShopRootComponent___c__WaitPurchase_b__123_0__, 0);
    static_fields = ShopRootComponent___c_TypeInfo->static_fields;
    static_fields->__9__123_0 = _9__123_0;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__123_0,
      (int32_t)_9__123_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  v15 = (UnityEngine_WaitUntil_o *)sub_1C93D20(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v15, _9__123_0, 0);
  v3->fields.__2__current = (Il2CppObject *)v15;
  p__2__current = (GrandQuestFolderBoardItem_o *)&v3->fields.__2__current;
  sub_1C93A78(p__2__current, (int32_t)v15, v17, v18, v19, v20, v21, v22);
  LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = 1;
  return 1;
}


Il2CppObject *ShopRootComponent__WaitPurchase_d__123__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ShopRootComponent__WaitPurchase_d__123_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn ShopRootComponent__WaitPurchase_d__123__System_Collections_IEnumerator_Reset(
        ShopRootComponent__WaitPurchase_d__123_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C93AE8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C93D20(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C93AE8(&Method_ShopRootComponent__WaitPurchase_d__123_System_Collections_IEnumerator_Reset__);
  sub_1C93BFC(v3, v4);
}


Il2CppObject *ShopRootComponent__WaitPurchase_d__123__System_Collections_IEnumerator_get_Current(
        ShopRootComponent__WaitPurchase_d__123_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void ShopRootComponent__WaitPurchase_d__123__System_IDisposable_Dispose(
        ShopRootComponent__WaitPurchase_d__123_o *this,
        const MethodInfo *method)
{
  ;
}


void ShopRootComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2CBE8 & 1) == 0 )
  {
    sub_1C93AD4(&ShopRootComponent___c_TypeInfo);
    byte_4D2CBE8 = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(ShopRootComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ShopRootComponent___c_TypeInfo->static_fields->__9 = (struct ShopRootComponent___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)ShopRootComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ShopRootComponent___c___ctor(ShopRootComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ShopRootComponent___c___WaitPurchase_b__123_0(ShopRootComponent___c_o *this, const MethodInfo *method)
{
  PurchaseBehaviour_c *v2; // x0

  if ( (byte_4D2CBE9 & 1) == 0 )
  {
    sub_1C93AD4(&PurchaseBehaviour_TypeInfo);
    byte_4D2CBE9 = 1;
  }
  v2 = PurchaseBehaviour_TypeInfo;
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
    v2 = PurchaseBehaviour_TypeInfo;
  }
  return !v2->static_fields->isOpenPurchaseDialogEvent;
}


void ShopRootComponent___c__DisplayClass102_0___ctor(
        ShopRootComponent___c__DisplayClass102_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ShopRootComponent___c__DisplayClass102_0___PlayLvExceedItemReleaseEffect_b__0(
        ShopRootComponent___c__DisplayClass102_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  System_Action_o *_9__1; // x22
  CommonUI_o *v6; // x21
  QuestRewardInfo_o *questRewardInfo; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  if ( (byte_4D2CBEA & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_ShopRootComponent___c__DisplayClass102_0__PlayLvExceedItemReleaseEffect_b__1__);
    byte_4D2CBEA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__1 = this->fields.__9__1;
  v6 = (CommonUI_o *)Instance;
  questRewardInfo = this->fields.questRewardInfo;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_ShopRootComponent___c__DisplayClass102_0__PlayLvExceedItemReleaseEffect_b__1__,
      0);
    this->fields.__9__1 = _9__1;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.__9__1, (int32_t)_9__1, v8, v9, v10, v11, v12, v13);
  }
  if ( !v6 )
    sub_1C93D2C(Instance, v4);
  CommonUI__LoadItemGetEffect(v6, questRewardInfo, _9__1, 0);
}


void ShopRootComponent___c__DisplayClass102_0___PlayLvExceedItemReleaseEffect_b__1(
        ShopRootComponent___c__DisplayClass102_0_o *this,
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
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7

  if ( (byte_4D2CBEB & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_ShopRootComponent___c__DisplayClass102_0__PlayLvExceedItemReleaseEffect_b__2__);
    byte_4D2CBEB = 1;
  }
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_9;
  v6 = (CommonUI_o *)Instance;
  Instance = _4__this->fields.actionPanel;
  if ( !Instance )
    goto LABEL_9;
  Instance = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(Instance, 0);
  _9__2 = this->fields.__9__2;
  v8 = (UnityEngine_Transform_o *)Instance;
  questRewardInfo = this->fields.questRewardInfo;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_ShopRootComponent___c__DisplayClass102_0__PlayLvExceedItemReleaseEffect_b__2__,
      0);
    this->fields.__9__2 = _9__2;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.__9__2, (int32_t)_9__2, v10, v11, v12, v13, v14, v15);
  }
  if ( !v6 )
LABEL_9:
    sub_1C93D2C(Instance, v4);
  CommonUI__OpenItemGetEffect(v6, v8, 0, questRewardInfo, _9__2, 0);
}


void ShopRootComponent___c__DisplayClass102_0___PlayLvExceedItemReleaseEffect_b__2(
        ShopRootComponent___c__DisplayClass102_0_o *this,
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
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  if ( (byte_4D2CBEC & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&AvalonSceneManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_ShopRootComponent___c__DisplayClass102_0__PlayLvExceedItemReleaseEffect_b__3__);
    byte_4D2CBEC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  CommonUI__ReleaseItemGetEffect((CommonUI_o *)Instance, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    _9__3 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_ShopRootComponent___c__DisplayClass102_0__PlayLvExceedItemReleaseEffect_b__3__,
      0);
    this->fields.__9__3 = _9__3;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.__9__3, (int32_t)_9__3, v9, v10, v11, v12, v13, v14);
  }
  if ( !v6 )
LABEL_10:
    sub_1C93D2C(Instance, v4);
  CommonUI__maskFadein(v6, DEFAULT_FADE_TIME, _9__3, 0);
}


void ShopRootComponent___c__DisplayClass102_0___PlayLvExceedItemReleaseEffect_b__3(
        ShopRootComponent___c__DisplayClass102_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  struct ShopBuyItemListViewItem_o *item; // x1

  item = this->fields.item;
  if ( !item || (this = (ShopRootComponent___c__DisplayClass102_0_o *)this->fields.__4__this) == 0 )
    sub_1C93D2C(this, item);
  ShopRootComponent__ShowNormalItemDialog((ShopRootComponent_o *)this, item, item->fields._Shop_k__BackingField, v2);
}


void ShopRootComponent___c__DisplayClass109_0___ctor(
        ShopRootComponent___c__DisplayClass109_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ShopRootComponent___c__DisplayClass109_0___PlayServantCostumeReleaseEffect_b__0(
        ShopRootComponent___c__DisplayClass109_0_o *this,
        const MethodInfo *method)
{
  ShopRootComponent___c__DisplayClass109_0_o *v2; // x19
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
  if ( (byte_4D2CBED & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_1C93AD4(&Method_ShopRootComponent_OnEndPlayServantCostumeReleaseEffect__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (ShopRootComponent___c__DisplayClass109_0_o *)sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2CBED = 1;
  }
  entity = 0;
  shopEntity = v2->fields.shopEntity;
  if ( !shopEntity )
    goto LABEL_15;
  targetIds = shopEntity->fields.targetIds;
  if ( !targetIds )
    goto LABEL_15;
  if ( !LODWORD(targetIds->max_length) )
    sub_1C93D34(this);
  this = (ShopRootComponent___c__DisplayClass109_0_o *)System_Int32__ToString((int)targetIds + 32, 0);
  if ( !this )
    goto LABEL_15;
  v5 = (System_String_o *)this;
  v6 = System_String__Substring_64471664((System_String_o *)this, 0, LODWORD(this->fields.shopEntity) - 2, 0);
  v7 = System_Int32__Parse(v6, 0);
  v8 = System_String__Substring(v5, v5->fields._stringLength - 2, 0);
  v9 = System_Int32__Parse(v8, 0);
  this = (ShopRootComponent___c__DisplayClass109_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_15;
  this = (ShopRootComponent___c__DisplayClass109_0_o *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)this,
                                                         (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  if ( !this )
    goto LABEL_15;
  if ( ServantCostumeMaster__TryGetEntity((ServantCostumeMaster_o *)this, &entity, v7, v9, 0) )
  {
    this = (ShopRootComponent___c__DisplayClass109_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( entity )
    {
      name = entity->fields.name;
      _4__this = (Il2CppObject *)v2->fields.__4__this;
      v12 = (CommonUI_o *)this;
      v13 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
      System_Action___ctor(v13, _4__this, Method_ShopRootComponent_OnEndPlayServantCostumeReleaseEffect__, 0);
      if ( v12 )
      {
        CommonUI__OpenCostumeReleaseEffect(v12, 1, name, v13, 23, 0);
        return;
      }
    }
LABEL_15:
    sub_1C93D2C(this, method);
  }
  this = (ShopRootComponent___c__DisplayClass109_0_o *)v2->fields.__4__this;
  if ( !this )
    goto LABEL_15;
  ShopRootComponent__OnEndPlayServantCostumeReleaseEffect((ShopRootComponent_o *)this, method);
}


void ShopRootComponent___c__DisplayClass160_0___ctor(
        ShopRootComponent___c__DisplayClass160_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ShopRootComponent___c__DisplayClass160_0___CloseShopResetDialog_b__0(
        ShopRootComponent___c__DisplayClass160_0_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  _BOOL8 v5; // x0
  const MethodInfo *v6; // x1
  ShopRootComponent_o *_4__this; // x8
  Il2CppObject *v8; // x22
  ShopResetConfirmDialogComponent_o *monitor; // x20
  ShopBuyItemListViewItem_o *item; // x19
  System_Action_bool__o *v11; // x21
  const MethodInfo *v12; // x4

  if ( (byte_4D2CBEE & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_bool__TypeInfo);
    sub_1C93AD4(&Method_ShopRootComponent_OnEndShopReset__);
    sub_1C93AD4(&StringLiteral_22483/*"ng"*/);
    byte_4D2CBEE = 1;
  }
  v5 = System_String__op_Equality(result, (System_String_o *)StringLiteral_22483/*"ng"*/, 0);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_10;
  if ( v5 )
  {
    ShopRootComponent__RequestEnd(_4__this, v6);
    return;
  }
  ShopRootComponent__RefreshInfo(this->fields.__4__this, v6);
  v8 = (Il2CppObject *)this->fields.__4__this;
  if ( !v8
    || (monitor = (ShopResetConfirmDialogComponent_o *)v8[24].monitor,
        item = this->fields.item,
        v11 = (System_Action_bool__o *)sub_1C93D20(System_Action_bool__TypeInfo),
        System_Action_bool____ctor(v11, v8, Method_ShopRootComponent_OnEndShopReset__, 0),
        !monitor) )
  {
LABEL_10:
    sub_1C93D2C(v5, v6);
  }
  if ( !monitor->fields.state )
    ShopResetConfirmDialogComponent__Open_35856060(monitor, 1, item, v11, v12);
}


void ShopRootComponent___c__DisplayClass160_0___CloseShopResetDialog_b__1(
        ShopRootComponent___c__DisplayClass160_0_o *this,
        const MethodInfo *method)
{
  ShopRootComponent___c__DisplayClass160_0_o *v2; // x19
  struct ShopBuyItemListViewItem_o *item; // x8
  struct ShopEntity_o *Shop_k__BackingField; // x8
  ShopResetPurchaseNumRequest_o *request; // x20
  int32_t baseShopId; // w19

  v2 = this;
  if ( (byte_4D2CBEF & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_ItemMaster___);
    this = (ShopRootComponent___c__DisplayClass160_0_o *)sub_1C93AD4(&DataManager_TypeInfo);
    byte_4D2CBEF = 1;
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
  this = (ShopRootComponent___c__DisplayClass160_0_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !this || !request )
LABEL_10:
    sub_1C93D2C(this, method);
  ShopResetPurchaseNumRequest__beginRequest(request, baseShopId, *((_DWORD *)this + 25), 0);
}


void ShopRootComponent___c__DisplayClass74_0___ctor(
        ShopRootComponent___c__DisplayClass74_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ShopRootComponent___c__DisplayClass74_0___LoadBanner_b__0(
        ShopRootComponent___c__DisplayClass74_0_o *this,
        const MethodInfo *method)
{
  PurchaseBehaviour_c *v3; // x0
  ShopPlayVoiceComponent_o *shopPlayVoiceComponent; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x5
  struct ShopRootComponent_o *_4__this; // x8
  int32_t v8; // w4

  if ( (byte_4D2CBF0 & 1) == 0 )
  {
    sub_1C93AD4(&PurchaseBehaviour_TypeInfo);
    byte_4D2CBF0 = 1;
  }
  v3 = PurchaseBehaviour_TypeInfo;
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo);
    v3 = PurchaseBehaviour_TypeInfo;
  }
  v3->static_fields->isOpenPurchaseDialogEvent = 1;
  PurchaseBehaviour__ActivateBoth(0);
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (shopPlayVoiceComponent = _4__this->fields.shopPlayVoiceComponent) == 0
    || (_4__this->fields.isFromCoinRoom ? (v8 = 17) : (v8 = 0),
        ShopPlayVoiceComponent__LoadVoice(
          shopPlayVoiceComponent,
          _4__this->fields.figureSvtId,
          this->fields.jumpedState,
          _4__this->fields.isFromCoinRoom,
          v8,
          v6),
        (shopPlayVoiceComponent = (ShopPlayVoiceComponent_o *)this->fields.__4__this) == 0) )
  {
    sub_1C93D2C(shopPlayVoiceComponent, v5);
  }
  SceneRootComponent__beginStartUp_42213664((SceneRootComponent_o *)shopPlayVoiceComponent, 0);
}


void ShopRootComponent___c__DisplayClass82_0___ctor(
        ShopRootComponent___c__DisplayClass82_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ShopRootComponent___c__DisplayClass82_0___SelectMenu_b__0(
        ShopRootComponent___c__DisplayClass82_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x5
  ShopRootComponent___c__DisplayClass82_0_o *v3; // x19
  struct ShopRootComponent_o *_4__this; // x8
  ShopSceneListViewControlHelper_o *listViewHelper; // x20
  System_Action_o *_9__1; // x24
  int32_t selectedEventIndex; // w21
  int32_t state; // w22
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x3
  struct ShopRootComponent_o *v17; // x8

  v3 = this;
  if ( (byte_4D2CBF1 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    this = (ShopRootComponent___c__DisplayClass82_0_o *)sub_1C93AD4(&Method_ShopRootComponent___c__DisplayClass82_0__SelectMenu_b__1__);
    byte_4D2CBF1 = 1;
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
    _9__1 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v3,
      Method_ShopRootComponent___c__DisplayClass82_0__SelectMenu_b__1__,
      0);
    v3->fields.__9__1 = _9__1;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v3->fields.__9__1, (int32_t)_9__1, v9, v10, v11, v12, v13, v14);
  }
  if ( !listViewHelper
    || (ShopSceneListViewControlHelper__SetListViewOnSelectMenu(
          listViewHelper,
          state,
          &v3->fields.eventId,
          selectedEventIndex,
          _9__1,
          v2),
        (this = (ShopRootComponent___c__DisplayClass82_0_o *)v3->fields.__4__this) == 0)
    || (ShopRootComponent__OpenStonePurchaseMenu((ShopRootComponent_o *)this, v3->fields.state, v15),
        (this = (ShopRootComponent___c__DisplayClass82_0_o *)v3->fields.__4__this) == 0)
    || (ShopRootComponent__OpenEventItemWindow((ShopRootComponent_o *)this, v3->fields.state, v3->fields.eventId, v16),
        (v17 = v3->fields.__4__this) == 0) )
  {
LABEL_11:
    sub_1C93D2C(this, method);
  }
  *(_QWORD *)&v17->fields.state = (unsigned int)v3->fields.state;
}


void ShopRootComponent___c__DisplayClass82_0___SelectMenu_b__1(
        ShopRootComponent___c__DisplayClass82_0_o *this,
        const MethodInfo *method)
{
  ShopRootComponent___c__DisplayClass82_0_o *v2; // x19
  struct ShopRootComponent_o *_4__this; // x8
  const MethodInfo *v4; // x2
  struct ShopRootComponent_o *v5; // x8
  struct ShopPlayVoiceComponent_o *shopPlayVoiceComponent; // x20
  const MethodInfo *v7; // x6
  ShopRootComponent___c__DisplayClass82_0_o *v8; // x21
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
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7

  v2 = this;
  if ( (byte_4D2CBF2 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_GuideMaster___);
    sub_1C93AD4(&ShopRootConstants_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (ShopRootComponent___c__DisplayClass82_0_o *)sub_1C93AD4(&Method_ShopRootComponent___c__DisplayClass82_0__SelectMenu_b__2__);
    byte_4D2CBF2 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_24;
  this = (ShopRootComponent___c__DisplayClass82_0_o *)_4__this->fields.shopPlayVoiceComponent;
  if ( !this )
    goto LABEL_24;
  ShopPlayVoiceComponent__StopVoice((ShopPlayVoiceComponent_o *)this, method);
  if ( v2->fields.state != 15 )
    goto LABEL_22;
  v5 = v2->fields.__4__this;
  if ( !v5 )
    goto LABEL_24;
  shopPlayVoiceComponent = v5->fields.shopPlayVoiceComponent;
  this = (ShopRootComponent___c__DisplayClass82_0_o *)ShopPlayVoiceConstants__GetEnterVoiceFlag(15, method);
  if ( !shopPlayVoiceComponent )
    goto LABEL_24;
  if ( !shopPlayVoiceComponent->fields.isPlayingVoice
    && (shopPlayVoiceComponent->fields.voicePlayOnce & (unsigned int)this) == 0 )
  {
    this = (ShopRootComponent___c__DisplayClass82_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (ShopRootComponent___c__DisplayClass82_0_o *)DataManager__GetMasterData_object_(
                                                            (DataManager_o *)this,
                                                            (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_GuideMaster___);
      if ( this )
      {
        this = (ShopRootComponent___c__DisplayClass82_0_o *)GuideMaster__getGuideData((GuideMaster_o *)this, 3, 0);
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
            _9__2 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
            System_Action___ctor(
              _9__2,
              (Il2CppObject *)v2,
              Method_ShopRootComponent___c__DisplayClass82_0__SelectMenu_b__2__,
              0);
            v2->fields.__9__2 = _9__2;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)&v2->fields.__9__2, (int32_t)_9__2, v20, v21, v22, v23, v24, v25);
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
    sub_1C93D2C(this, method);
  }
LABEL_22:
  if ( !v2->fields.__4__this )
    goto LABEL_24;
  ShopRootComponent__SetFadeIn((ShopRootComponent_o *)this, v2->fields.state, v4);
}


void ShopRootComponent___c__DisplayClass82_0___SelectMenu_b__2(
        ShopRootComponent___c__DisplayClass82_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1C93D2C(this, method);
  ShopRootComponent__PlayVoiceEnter(this->fields.__4__this, this->fields.state, v2);
}


void ShopRootComponent___c__DisplayClass83_0___ctor(
        ShopRootComponent___c__DisplayClass83_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ShopRootComponent___c__DisplayClass83_0___BackMenu_b__0(
        ShopRootComponent___c__DisplayClass83_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  ShopRootComponent___c__DisplayClass83_0_o *v3; // x19
  struct ShopRootComponent_o *_4__this; // x8
  ShopSceneListViewControlHelper_o *listViewHelper; // x20
  System_Action_o *_9__1; // x23
  int32_t state; // w21
  int32_t v8; // w22
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  struct ShopRootComponent_o *v15; // x8

  v3 = this;
  if ( (byte_4D2CBF3 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    this = (ShopRootComponent___c__DisplayClass83_0_o *)sub_1C93AD4(&Method_ShopRootComponent___c__DisplayClass83_0__BackMenu_b__1__);
    byte_4D2CBF3 = 1;
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
    _9__1 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(_9__1, (Il2CppObject *)v3, Method_ShopRootComponent___c__DisplayClass83_0__BackMenu_b__1__, 0);
    v3->fields.__9__1 = _9__1;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v3->fields.__9__1, (int32_t)_9__1, v9, v10, v11, v12, v13, v14);
  }
  if ( !listViewHelper
    || (ShopSceneListViewControlHelper__SetListViewOnBackMenu(listViewHelper, state, v8, _9__1, v2),
        (this = (ShopRootComponent___c__DisplayClass83_0_o *)v3->fields.__4__this) == 0)
    || (ShopRootComponent__CloseEventItemWindow((ShopRootComponent_o *)this, method), (v15 = v3->fields.__4__this) == 0) )
  {
LABEL_13:
    sub_1C93D2C(this, method);
  }
  v15->fields.inputState = 3;
}


void ShopRootComponent___c__DisplayClass83_0___BackMenu_b__1(
        ShopRootComponent___c__DisplayClass83_0_o *this,
        const MethodInfo *method)
{
  ShopRootComponent___c__DisplayClass83_0_o *v2; // x19
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
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7

  v2 = this;
  if ( (byte_4D2CBF4 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    this = (ShopRootComponent___c__DisplayClass83_0_o *)sub_1C93AD4(&Method_ShopRootComponent___c__DisplayClass83_0__BackMenu_b__2__);
    byte_4D2CBF4 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  this = (ShopRootComponent___c__DisplayClass83_0_o *)_4__this->fields.shopPlayVoiceComponent;
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
    _9__2 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(_9__2, (Il2CppObject *)v2, Method_ShopRootComponent___c__DisplayClass83_0__BackMenu_b__2__, 0);
    v2->fields.__9__2 = _9__2;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v2->fields.__9__2, (int32_t)_9__2, v13, v14, v15, v16, v17, v18);
  }
  if ( !shopPlayVoiceComponent )
LABEL_13:
    sub_1C93D2C(this, method);
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


void ShopRootComponent___c__DisplayClass83_0___BackMenu_b__2(
        ShopRootComponent___c__DisplayClass83_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1C93D2C(this, method);
  ShopRootComponent__PlayVoiceBack(this->fields.__4__this, this->fields.state, v2);
}


void ShopRootComponent___c__DisplayClass84_0___ctor(
        ShopRootComponent___c__DisplayClass84_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ShopRootComponent___c__DisplayClass84_0___SetFadeOut_b__0(
        ShopRootComponent___c__DisplayClass84_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.endFade, 0);
}


void ShopRootComponent___c__DisplayClass87_0___ctor(
        ShopRootComponent___c__DisplayClass87_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ShopRootComponent___c__DisplayClass87_0___OpenConfirmMenu_b__0(
        ShopRootComponent___c__DisplayClass87_0_o *this,
        const MethodInfo *method)
{
  ShopRootComponent___c__DisplayClass87_0_o *v2; // x19
  Il2CppObject *_4__this; // x23
  struct ShopBuyItemListViewItem_o *item; // x8
  ShopBuyItemConfirmMenu_o *monitor; // x19
  ShopEntity_o *Shop_k__BackingField; // x20
  int32_t ShopKind_k__BackingField; // w21
  System_Action_int__o *v8; // x22

  v2 = this;
  if ( (byte_4D2CBF5 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_int__TypeInfo);
    this = (ShopRootComponent___c__DisplayClass87_0_o *)sub_1C93AD4(&Method_ShopRootComponent_SelectedBuyItemConfirm__);
    byte_4D2CBF5 = 1;
  }
  _4__this = (Il2CppObject *)v2->fields.__4__this;
  if ( !_4__this
    || (item = v2->fields.item) == 0
    || (monitor = (ShopBuyItemConfirmMenu_o *)_4__this[9].monitor,
        Shop_k__BackingField = item->fields._Shop_k__BackingField,
        ShopKind_k__BackingField = item->fields._ShopKind_k__BackingField,
        v8 = (System_Action_int__o *)sub_1C93D20(System_Action_int__TypeInfo),
        System_Action_int____ctor(v8, _4__this, Method_ShopRootComponent_SelectedBuyItemConfirm__, 0),
        !monitor) )
  {
    sub_1C93D2C(this, method);
  }
  ShopBuyItemConfirmMenu__Open(monitor, Shop_k__BackingField, ShopKind_k__BackingField, v8, 0, 0, 0, 8, 0);
}


void ShopRootComponent___c__DisplayClass87_0___OpenConfirmMenu_b__1(
        ShopRootComponent___c__DisplayClass87_0_o *this,
        const MethodInfo *method)
{
  ShopRootComponent___c__DisplayClass87_0_o *v2; // x19
  Il2CppObject *_4__this; // x22
  ShopResetConfirmDialogComponent_o *monitor; // x20
  ShopBuyItemListViewItem_o *item; // x19
  System_Action_bool__o *v6; // x21
  const MethodInfo *v7; // x4

  v2 = this;
  if ( (byte_4D2CBF6 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_bool__TypeInfo);
    this = (ShopRootComponent___c__DisplayClass87_0_o *)sub_1C93AD4(&Method_ShopRootComponent_CloseShopResetDialog__);
    byte_4D2CBF6 = 1;
  }
  _4__this = (Il2CppObject *)v2->fields.__4__this;
  if ( !_4__this
    || (monitor = (ShopResetConfirmDialogComponent_o *)_4__this[24].monitor,
        item = v2->fields.item,
        v6 = (System_Action_bool__o *)sub_1C93D20(System_Action_bool__TypeInfo),
        System_Action_bool____ctor(v6, _4__this, Method_ShopRootComponent_CloseShopResetDialog__, 0),
        !monitor) )
  {
    sub_1C93D2C(this, method);
  }
  if ( !monitor->fields.state )
    ShopResetConfirmDialogComponent__Open_35856060(monitor, 0, item, v6, v7);
}


void ShopRootComponent___c__DisplayClass87_0___OpenConfirmMenu_b__2(
        ShopRootComponent___c__DisplayClass87_0_o *this,
        const MethodInfo *method)
{
  ShopRootComponent___c__DisplayClass87_0_o *v2; // x19
  Il2CppObject *_4__this; // x23
  struct ShopBuyItemListViewItem_o *item; // x8
  ShopBuyItemConfirmMenu_o *monitor; // x19
  ShopEntity_o *Shop_k__BackingField; // x20
  int32_t ShopKind_k__BackingField; // w21
  System_Action_int__o *v8; // x22

  v2 = this;
  if ( (byte_4D2CBF7 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_int__TypeInfo);
    this = (ShopRootComponent___c__DisplayClass87_0_o *)sub_1C93AD4(&Method_ShopRootComponent_SelectedBuyItemConfirm__);
    byte_4D2CBF7 = 1;
  }
  _4__this = (Il2CppObject *)v2->fields.__4__this;
  if ( !_4__this
    || (item = v2->fields.item) == 0
    || (monitor = (ShopBuyItemConfirmMenu_o *)_4__this[9].monitor,
        Shop_k__BackingField = item->fields._Shop_k__BackingField,
        ShopKind_k__BackingField = item->fields._ShopKind_k__BackingField,
        v8 = (System_Action_int__o *)sub_1C93D20(System_Action_int__TypeInfo),
        System_Action_int____ctor(v8, _4__this, Method_ShopRootComponent_SelectedBuyItemConfirm__, 0),
        !monitor) )
  {
    sub_1C93D2C(this, method);
  }
  ShopBuyItemConfirmMenu__Open(monitor, Shop_k__BackingField, ShopKind_k__BackingField, v8, 0, 0, 0, 8, 0);
}


void ShopRootComponent___c__DisplayClass87_0___OpenConfirmMenu_b__3(
        ShopRootComponent___c__DisplayClass87_0_o *this,
        const MethodInfo *method)
{
  ShopRootComponent___c__DisplayClass87_0_o *v2; // x19
  struct ShopRootComponent_o *_4__this; // x8
  struct ShopBuyItemListViewItem_o *item; // x9
  ShopEntity_o *Shop_k__BackingField; // x20
  PurchaseShopCheckWarningDialog_o *purchaseShopCheckWarningDialog; // x21
  int32_t TargetId; // w0
  const MethodInfo *v8; // x1
  PurchaseShopCheckWarningDialog_ClickDelegate_o *_9__4; // x23
  ShopRootComponent___c__DisplayClass87_0_o *v10; // x22
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  v2 = this;
  if ( (byte_4D2CBF8 & 1) == 0 )
  {
    sub_1C93AD4(&PurchaseShopCheckWarningDialog_ClickDelegate_TypeInfo);
    this = (ShopRootComponent___c__DisplayClass87_0_o *)sub_1C93AD4(&Method_ShopRootComponent___c__DisplayClass87_0__OpenConfirmMenu_b__4__);
    byte_4D2CBF8 = 1;
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
  TargetId = ShopEntity__get_TargetId(item->fields._Shop_k__BackingField, 0);
  this = (ShopRootComponent___c__DisplayClass87_0_o *)ShopRootComponent__GetClassBoardReleaseItemList(TargetId, v8);
  _9__4 = v2->fields.__9__4;
  v10 = this;
  if ( !_9__4 )
  {
    _9__4 = (PurchaseShopCheckWarningDialog_ClickDelegate_o *)sub_1C93D20(PurchaseShopCheckWarningDialog_ClickDelegate_TypeInfo);
    PurchaseShopCheckWarningDialog_ClickDelegate___ctor(
      _9__4,
      (Il2CppObject *)v2,
      Method_ShopRootComponent___c__DisplayClass87_0__OpenConfirmMenu_b__4__,
      0);
    v2->fields.__9__4 = _9__4;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v2->fields.__9__4, (int32_t)_9__4, v11, v12, v13, v14, v15, v16);
  }
  if ( !purchaseShopCheckWarningDialog )
LABEL_10:
    sub_1C93D2C(this, method);
  PurchaseShopCheckWarningDialog__Open(
    purchaseShopCheckWarningDialog,
    Shop_k__BackingField,
    (System_Collections_Generic_Dictionary_int__long__o *)v10,
    _9__4,
    0);
}


void ShopRootComponent___c__DisplayClass87_0___OpenConfirmMenu_b__4(
        ShopRootComponent___c__DisplayClass87_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ShopRootComponent_o *_4__this; // x0

  if ( isDecide )
  {
    _4__this = this->fields.__4__this;
    if ( !_4__this )
      sub_1C93D2C(0, isDecide);
    ShopRootComponent__SelectedBuyItemConfirm(_4__this, 1, method);
  }
}


void ShopRootComponent___c__DisplayClass88_0___ctor(
        ShopRootComponent___c__DisplayClass88_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ShopRootComponent___c__DisplayClass88_0___GetClassBoardReleaseItemList_b__0(
        ShopRootComponent___c__DisplayClass88_0_o *this,
        UserClassBoardSquareEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return x->fields.classBoardBaseId == this->fields.baseId;
}


void ShopRootComponent___c__DisplayClass98_0___ctor(
        ShopRootComponent___c__DisplayClass98_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void ShopRootComponent___c__DisplayClass98_0___SelectSellServantConfirm_b__0(
        ShopRootComponent___c__DisplayClass98_0_o *this,
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

  if ( (byte_4D2CBF9 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_int__TypeInfo);
    sub_1C93AD4(&Method_ShopRootComponent_SellServantConfirm__);
    byte_4D2CBF9 = 1;
  }
  _4__this = (ServantSellConfirmMenu_o *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_10;
  if ( decide )
  {
    _4__this = (ServantSellConfirmMenu_o *)_4__this->fields.closeLabel;
    if ( _4__this )
    {
      ServantSellConfirmMenu__Init(_4__this, 0);
      v6 = (Il2CppObject *)this->fields.__4__this;
      if ( v6 )
      {
        klass = (ServantSellConfirmMenu_o *)v6[12].klass;
        kind = this->fields.kind;
        v9 = (System_Int64_array *)v6[32].klass;
        monitor = (System_Int64_array *)v6[32].monitor;
        v11 = (System_Action_int__o *)sub_1C93D20(System_Action_int__TypeInfo);
        System_Action_int____ctor(v11, v6, Method_ShopRootComponent_SellServantConfirm__, 0);
        if ( klass )
        {
          ServantSellConfirmMenu__Open(klass, kind, v9, monitor, v11, 0);
          return;
        }
      }
    }
LABEL_10:
    sub_1C93D2C(_4__this, *(_QWORD *)&decide);
  }
  ShopRootComponent__CloseSellServantConfirm((ShopRootComponent_o *)_4__this, *(const MethodInfo **)&decide);
}