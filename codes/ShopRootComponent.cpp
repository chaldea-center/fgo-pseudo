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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  const MethodInfo *v14; // x2
  System_Action_o *v15; // x20
  ShopRootComponent_o *v16; // x0
  const MethodInfo *v17; // x3

  if ( (byte_596C8B8 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ShopRootComponent___c__DisplayClass84_0__BackMenu_b__0__);
    sub_2213A60(&ShopRootComponent___c__DisplayClass84_0_TypeInfo);
    byte_596C8B8 = 1;
  }
  v5 = sub_2213CCC(ShopRootComponent___c__DisplayClass84_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v5 + 24) = state;
  if ( state != 15 )
  {
    ShopRootComponent__PlayVoiceBack(this, state, v14);
    state = *(_DWORD *)(v5 + 24);
  }
  v15 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v15, (Il2CppObject *)v5, Method_ShopRootComponent___c__DisplayClass84_0__BackMenu_b__0__, 0);
  ShopRootComponent__SetFadeOut(v16, state, v15, v17);
}


// local variable allocation has failed, the output may be wrong!
bool ShopRootComponent__BackScene(ShopRootComponent_o *this, int32_t state, const MethodInfo *method)
{
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  struct SceneJumpInfo_o *v11; // x8
  SceneJumpInfo_o *Instance; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  long double v15; // q0
  __int64 v16; // x1
  __int64 v17; // x2
  bool v18; // w19
  struct SceneJumpInfo_o *v19; // x8
  struct SceneJumpInfo_o *jumpInfo; // x8
  __int64 v21; // x1
  __int64 v22; // x2
  long double v23; // q0
  SceneJumpInfo_o *v24; // x0
  struct ShopSceneListViewControlHelper_o *listViewHelper; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v26; // x20
  EventEntity_o *v27; // x21
  __int64 v29; // x1
  __int64 v30; // x2
  Il2CppObject *v31; // x20
  System_String_o *v32; // x22
  Il2CppObject *EventName; // x0
  System_String_o *v34; // x21
  System_Action_o *v35; // x22

  if ( (byte_596C8DE & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_EventMaster___);
    sub_2213A60(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_ShopRootComponent_OnEndDialogEventCloseWarning__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&StringLiteral_6493/*"EventItem"*/);
    sub_2213A60(&StringLiteral_3576/*"CLICK_BACK"*/);
    sub_2213A60(&StringLiteral_13634/*"StoneFragments"*/);
    sub_2213A60(&StringLiteral_12621/*"SHOP_EVENT_RETURN_ERROR"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596C8DE = 1;
  }
  if ( state > 6 )
  {
    if ( state != 7 )
    {
      if ( state != 8 )
      {
        if ( state == 22 && ShopRootComponent__IsExistBackClassBoardInfo(this, *(const MethodInfo **)&state) )
        {
          this->fields.jumpInfo = 0;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.jumpInfo, 0, v5, v6, v7, v8, v9, v10);
        }
        return 0;
      }
      jumpInfo = this->fields.jumpInfo;
      if ( jumpInfo )
      {
        if ( System_String__op_Equality(jumpInfo->fields.name, (System_String_o *)StringLiteral_6493/*"EventItem"*/, 0) )
        {
          Instance = this->fields.jumpInfo;
          if ( !Instance )
            goto LABEL_54;
          if ( Instance->fields.id && SceneJumpInfo__ReturnScene(Instance, 0) )
          {
            if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
              *(__n128 *)&v23 = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v21, v22);
            v18 = 1;
            sub_281F544(1, 0, v23);
            return v18;
          }
        }
        Instance = (SceneJumpInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          Instance = (SceneJumpInfo_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)Instance,
                                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventMaster___);
          listViewHelper = this->fields.listViewHelper;
          if ( listViewHelper )
          {
            v26 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
            Instance = (SceneJumpInfo_o *)listViewHelper->fields.eventListViewManager;
            if ( Instance )
            {
              Instance = (SceneJumpInfo_o *)ShopEventListViewManager__GetItem(
                                              (ShopEventListViewManager_o *)Instance,
                                              this->fields.selectedEventIndex,
                                              0);
              if ( Instance )
              {
                if ( v26 )
                {
                  Instance = (SceneJumpInfo_o *)DataMasterBase_object__object__int___GetEntity(
                                                  v26,
                                                  (int32_t)Instance[1].fields.backSceneJumpInfo,
                                                  (const MethodInfo_3F10B30 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
                  if ( Instance )
                  {
                    v27 = (EventEntity_o *)Instance;
                    if ( EventEntity__IsOpen((EventEntity_o *)Instance, 1, 0) )
                      return 0;
                    v31 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v29, v30);
                    v32 = LocalizationManager__Get((System_String_o *)StringLiteral_12621/*"SHOP_EVENT_RETURN_ERROR"*/, 0);
                    EventName = (Il2CppObject *)EventEntity__getEventName(v27, 0);
                    v34 = System_String__Format(v32, EventName, 0);
                    v35 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
                    System_Action___ctor(
                      v35,
                      (Il2CppObject *)this,
                      Method_ShopRootComponent_OnEndDialogEventCloseWarning__,
                      0);
                    if ( v31 )
                    {
                      v18 = 1;
                      CommonUI__OpenNotificationDialog(
                        (CommonUI_o *)v31,
                        (System_String_o *)StringLiteral_1/*""*/,
                        v34,
                        v35,
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
                      return v18;
                    }
                  }
                }
              }
            }
          }
        }
LABEL_54:
        sub_2213CDC(Instance, *(_QWORD *)&state);
      }
      return 0;
    }
    v19 = this->fields.jumpInfo;
    if ( !v19 || !System_String__op_Equality(v19->fields.name, (System_String_o *)StringLiteral_6493/*"EventItem"*/, 0) )
      return 0;
    Instance = this->fields.jumpInfo;
    if ( !Instance )
      goto LABEL_54;
    return SceneJumpInfo__ReturnScene(Instance, 0);
  }
  if ( state == 1 )
  {
    v24 = this->fields.jumpInfo;
    if ( !v24 || !SceneJumpInfo__IsEnableReturnScene(v24, 0) )
      goto LABEL_38;
    Instance = this->fields.jumpInfo;
    if ( !Instance )
      goto LABEL_54;
    if ( !SceneJumpInfo__ReturnScene(Instance, 0) )
    {
LABEL_38:
      Instance = (SceneJumpInfo_o *)this->fields.myFSM;
      if ( !Instance )
        goto LABEL_54;
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3576/*"CLICK_BACK"*/, 0);
    }
    return 1;
  }
  if ( state != 4 )
    return 0;
  v11 = this->fields.jumpInfo;
  if ( !v11 || !System_String__op_Equality(v11->fields.name, (System_String_o *)StringLiteral_13634/*"StoneFragments"*/, 0) )
    return 0;
  Instance = this->fields.jumpInfo;
  if ( !Instance )
    goto LABEL_54;
  if ( !SceneJumpInfo__ReturnScene(Instance, 0) )
    return 0;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    *(__n128 *)&v15 = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v13, v14);
  if ( (sub_281F4F4(0, v15) & 1) != 0 )
    return 1;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v16, v17);
  v18 = 1;
  TerminalPramsManager__set_IsAutoOpenMasterMission(1, 0);
  return v18;
}


void ShopRootComponent__CheckSellServantExceeded(ShopRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ShopRootComponent_o *v3; // x19
  const MethodInfo *v4; // x1
  ServantSellMenu_o *servantSellMenu; // x0
  ServantSellConfirmMenu_o *servantSellConfirmMenu; // x22
  System_Int64_array *selectedServantIds; // x20
  System_Int64_array *selectedCommandCodeIds; // x21
  System_Action_int__o *v9; // x23
  System_Action_o *v10; // x24

  v3 = this;
  if ( (byte_596C8C3 & 1) == 0 )
  {
    sub_2213A60(&System_Action_int__TypeInfo);
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ShopRootComponent_SellServantExceededConfirm__);
    this = (ShopRootComponent_o *)sub_2213A60(&Method_ShopRootComponent_UpdateSellServants__);
    byte_596C8C3 = 1;
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
    v9 = (System_Action_int__o *)sub_2213CCC(System_Action_int__TypeInfo);
    System_Action_int____ctor(v9, (Il2CppObject *)v3, Method_ShopRootComponent_SellServantExceededConfirm__, 0);
    v10 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v10, (Il2CppObject *)v3, Method_ShopRootComponent_UpdateSellServants__, 0);
    if ( !servantSellConfirmMenu )
LABEL_11:
      sub_2213CDC(servantSellMenu, v4);
    ServantSellConfirmMenu__Open(servantSellConfirmMenu, 2, selectedServantIds, selectedCommandCodeIds, v9, v10, 0);
  }
}


bool ShopRootComponent__CheckServerLimitTime(ShopRootComponent_o *this, int32_t state, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_596C8EB & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    byte_596C8EB = 1;
  }
  if ( (unsigned int)state > 0x16 || ((1 << state) & 0x75DDFC) == 0 )
    return 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v5);
  return NetworkManager__CheckServerLimitTime((NetworkManager_o *)Instance, 0);
}


void ShopRootComponent__CheckTutorial(ShopRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v4; // x2
  NetworkManager_ResultCallbackFunc_o *v5; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Request_object; // x0
  __int64 v9; // x1

  if ( (byte_596C8D9 & 1) == 0 )
  {
    sub_2213A60(&Method_NetworkManager_getRequest_TutorialSetRequest___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_2213A60(&Method_ShopRootComponent_QuitHelp__);
    sub_2213A60(&TutorialFlag_TypeInfo);
    sub_2213A60(&StringLiteral_23515/*"ok"*/);
    byte_596C8D9 = 1;
  }
  if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, method, v2);
  if ( TutorialFlag__Get_47388504(103, 0) )
  {
    ShopRootComponent__QuitHelp(this, (System_String_o *)StringLiteral_23515/*"ok"*/, v4);
  }
  else
  {
    v5 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(v5, (Il2CppObject *)this, Method_ShopRootComponent_QuitHelp__, 0);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v7);
    Request_object = NetworkManager__getRequest_object_(
                       v5,
                       (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_TutorialSetRequest___);
    if ( !Request_object )
      sub_2213CDC(0, v9);
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

  if ( (byte_596C8E6 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ShopDetailMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596C8E6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0), (listViewHelper = this->fields.listViewHelper) == 0)
    || (Instance = (Il2CppObject *)listViewHelper->fields.buyItemListViewManager) == 0
    || (Item = ShopBuyItemListViewManager__GetItem(
                 (ShopBuyItemListViewManager_o *)Instance,
                 this->fields.selectedItemIndex,
                 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ShopDetailMaster___),
        !Item)
    || (Shop_k__BackingField = Item->fields._Shop_k__BackingField) == 0
    || !Instance )
  {
    sub_2213CDC(Instance, v6);
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
  __int64 v5; // x1
  __int64 v6; // x2
  ShopRootConstants_c *v7; // x8
  UnityEngine_GameObject_o *v8; // x20

  if ( (byte_596C8EA & 1) == 0 )
  {
    sub_2213A60(&ShopRootConstants_TypeInfo);
    byte_596C8EA = 1;
  }
  shopEventItemDrawBase = (UnityEngine_Component_o *)this->fields.shopEventItemDrawBase;
  if ( !shopEventItemDrawBase )
    goto LABEL_8;
  gameObject = UnityEngine_Component__get_gameObject(shopEventItemDrawBase, 0);
  v7 = ShopRootConstants_TypeInfo;
  v8 = gameObject;
  if ( !*(&ShopRootConstants_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo, v5, v6);
    v7 = ShopRootConstants_TypeInfo;
  }
  TweenAlpha__Begin(v8, v7->static_fields->CLOSE_TIME, 0.0, 0);
  shopEventItemDrawBase = (UnityEngine_Component_o *)this->fields.currencyInfoController;
  if ( !shopEventItemDrawBase )
LABEL_8:
    sub_2213CDC(shopEventItemDrawBase, method);
  ShopCurrencyInfoController__StopUpdateRemainTime((ShopCurrencyInfoController_o *)shopEventItemDrawBase, 0);
}


void ShopRootComponent__CloseItemConfirm(ShopRootComponent_o *this, const MethodInfo *method)
{
  ShopBuyItemConfirmMenu_o *buyItemConfirmMenu; // x0
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x2
  int32_t state; // w8
  struct ShopSceneListViewControlHelper_o *listViewHelper; // x8
  __int64 v8; // x2
  ShopBuyItemListViewItem_o *v9; // x20
  ShopEntity_o *priceInfoBase; // x21
  ShopMaster_o *v11; // x22
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x2
  ShopSceneListViewControlHelper_o *v15; // x20
  int32_t v16; // w21
  const MethodInfo *v17; // x2

  if ( (byte_596C8C2 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ShopMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    byte_596C8C2 = 1;
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
    ShopResetConfirmDialogComponent__Close_42025464((ShopResetConfirmDialogComponent_o *)buyItemConfirmMenu, 0, v4);
  }
  buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)this->fields.purchaseShopCheckWarningDialog;
  if ( !buyItemConfirmMenu )
LABEL_60:
    sub_2213CDC(buyItemConfirmMenu, method);
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
    v9 = (ShopBuyItemListViewItem_o *)buyItemConfirmMenu;
    priceInfoBase = (ShopEntity_o *)buyItemConfirmMenu->fields.priceInfoBase;
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v8);
    buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ShopMaster___);
    if ( this->fields.buyCount >= 1 )
    {
      v11 = (ShopMaster_o *)buyItemConfirmMenu;
      if ( !buyItemConfirmMenu )
        goto LABEL_60;
      if ( ShopMaster__IsOpenPurchaseCloseShop((ShopMaster_o *)buyItemConfirmMenu, priceInfoBase, 0)
        && ShopRootComponent__BackScene(this, this->fields.state, v12) )
      {
        return;
      }
      if ( this->fields.buyCount >= 1 && ShopMaster__IsOpenPurchaseCloseShop(v11, priceInfoBase, 0) )
      {
        buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)this->fields.listViewHelper;
        if ( buyItemConfirmMenu )
        {
          ShopSceneListViewControlHelper__SetListViewOnCloseEventShop(
            (ShopSceneListViewControlHelper_o *)buyItemConfirmMenu,
            this->fields.state,
            v13);
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
            ShopRootComponent__BackMenu(this, (int32_t)method, v14);
            return;
          }
        }
        goto LABEL_60;
      }
    }
    ShopBuyItemListViewItem__Modify(v9, priceInfoBase, 0);
  }
  v15 = this->fields.listViewHelper;
  if ( !v15 )
    goto LABEL_60;
  v16 = this->fields.state;
  ShopSceneListViewControlHelper__SetBuyItemListViewModify(this->fields.listViewHelper, v16, v5);
  ShopSceneListViewControlHelper__SetBuyItemListViewInput(v15, v16, v17);
  this->fields.inputState = 2;
}


// local variable allocation has failed, the output may be wrong!
void ShopRootComponent__CloseSellServantConfirm(ShopRootComponent_o *this, bool isCancel, const MethodInfo *method)
{
  ServantSellConfirmMenu_o *servantSellConfirmMenu; // x0
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x4
  ShopSceneListViewControlHelper_o *listViewHelper; // x20
  System_Int64_array *selectedCommandCodeIds; // x3
  System_Int64_array *selectedServantIds; // x2
  ShopSceneListViewControlHelper_o *v11; // x0
  int32_t state; // w19
  const MethodInfo *v13; // x2

  if ( this->fields.inputState == 2 )
  {
    if ( this->fields.state == 9 )
    {
      servantSellConfirmMenu = this->fields.servantSellConfirmMenu;
      if ( !servantSellConfirmMenu )
        goto LABEL_14;
      if ( !ServantSellConfirmMenu__get_IsCommandCodeRemoveResult(servantSellConfirmMenu, 0) && !isCancel )
        ShopRootComponent__PlayVoiceBack(this, this->fields.state, v6);
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
          goto LABEL_14;
        ServantSellConfirmMenu__Close(servantSellConfirmMenu, 0);
      }
      listViewHelper = this->fields.listViewHelper;
      if ( listViewHelper )
      {
        selectedCommandCodeIds = this->fields.selectedCommandCodeIds;
        selectedServantIds = this->fields.selectedServantIds;
        v11 = this->fields.listViewHelper;
        state = this->fields.state;
        ShopSceneListViewControlHelper__SetSellServantMenuModify(
          v11,
          state,
          selectedServantIds,
          selectedCommandCodeIds,
          v7);
        ShopSceneListViewControlHelper__SetSellServantMenuInput(listViewHelper, state, v13);
        return;
      }
    }
LABEL_14:
    sub_2213CDC(servantSellConfirmMenu, isCancel);
  }
}


void ShopRootComponent__CloseShopResetDialog(ShopRootComponent_o *this, bool isDecide, const MethodInfo *method)
{
  __int64 v5; // x20
  ShopBuyItemListViewManager_o *shopResetConfirmDialog; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  const MethodInfo *v14; // x2
  struct ShopSceneListViewControlHelper_o *listViewHelper; // x8
  ShopBuyItemListViewItem_o *Item; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  NetworkManager_ResultCallbackFunc_o *v23; // x21
  __int64 v24; // x1
  __int64 v25; // x2
  Il2CppObject *Request_object; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  struct ShopResetConfirmDialogComponent_o *v33; // x19
  System_Action_o *v34; // x21
  System_Action_o *v35; // x1

  if ( (byte_596C8F3 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_NetworkManager_getRequest_ShopResetPurchaseNumRequest___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_2213A60(&Method_ShopRootComponent___c__DisplayClass164_0__CloseShopResetDialog_b__0__);
    sub_2213A60(&Method_ShopRootComponent___c__DisplayClass164_0__CloseShopResetDialog_b__1__);
    sub_2213A60(&ShopRootComponent___c__DisplayClass164_0_TypeInfo);
    byte_596C8F3 = 1;
  }
  v5 = sub_2213CCC(ShopRootComponent___c__DisplayClass164_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_14;
  *(_QWORD *)(v5 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  if ( !isDecide )
  {
    shopResetConfirmDialog = (ShopBuyItemListViewManager_o *)this->fields.shopResetConfirmDialog;
    if ( shopResetConfirmDialog )
    {
      v35 = 0;
      goto LABEL_13;
    }
LABEL_14:
    sub_2213CDC(shopResetConfirmDialog, v7);
  }
  listViewHelper = this->fields.listViewHelper;
  if ( !listViewHelper )
    goto LABEL_14;
  shopResetConfirmDialog = listViewHelper->fields.buyItemListViewManager;
  if ( !shopResetConfirmDialog )
    goto LABEL_14;
  Item = ShopBuyItemListViewManager__GetItem(shopResetConfirmDialog, this->fields.selectedItemIndex, 0);
  *(_QWORD *)(v5 + 24) = Item;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)Item, v17, v18, v19, v20, v21, v22);
  v23 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v23,
    (Il2CppObject *)v5,
    Method_ShopRootComponent___c__DisplayClass164_0__CloseShopResetDialog_b__0__,
    0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v24, v25);
  Request_object = NetworkManager__getRequest_object_(
                     v23,
                     (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_ShopResetPurchaseNumRequest___);
  *(_QWORD *)(v5 + 32) = Request_object;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)Request_object, v27, v28, v29, v30, v31, v32);
  v33 = this->fields.shopResetConfirmDialog;
  v34 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v34,
    (Il2CppObject *)v5,
    Method_ShopRootComponent___c__DisplayClass164_0__CloseShopResetDialog_b__1__,
    0);
  if ( !v33 )
    goto LABEL_14;
  shopResetConfirmDialog = (ShopBuyItemListViewManager_o *)v33;
  v35 = v34;
LABEL_13:
  ShopResetConfirmDialogComponent__Close_42025464((ShopResetConfirmDialogComponent_o *)shopResetConfirmDialog, v35, v14);
}


// local variable allocation has failed, the output may be wrong!
void ShopRootComponent__CloseStonePurchaseMenu(ShopRootComponent_o *this, int32_t result, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  ShopPlayVoiceComponent_o *shopPlayVoiceComponent; // x0
  const MethodInfo *v7; // x2

  if ( (byte_596C8EE & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_12671/*"SHOP_SCENE_VOICE_CANCEL"*/);
    sub_2213A60(&StringLiteral_12670/*"SHOP_SCENE_VOICE_BACK2"*/);
    byte_596C8EE = 1;
  }
  if ( result )
    goto LABEL_6;
  shopPlayVoiceComponent = this->fields.shopPlayVoiceComponent;
  if ( !shopPlayVoiceComponent )
    goto LABEL_9;
  if ( !ShopPlayVoiceComponent__PlayVoiceOnce(
          shopPlayVoiceComponent,
          (System_String_o *)StringLiteral_12671/*"SHOP_SCENE_VOICE_CANCEL"*/,
          0x2000,
          v3) )
  {
LABEL_6:
    shopPlayVoiceComponent = this->fields.shopPlayVoiceComponent;
    if ( shopPlayVoiceComponent )
    {
      ShopPlayVoiceComponent__PlayVoiceOnce(shopPlayVoiceComponent, (System_String_o *)StringLiteral_12670/*"SHOP_SCENE_VOICE_BACK2"*/, 4096, v3);
      goto LABEL_8;
    }
LABEL_9:
    sub_2213CDC(shopPlayVoiceComponent, *(_QWORD *)&result);
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
  if ( (byte_596C8E7 & 1) == 0 )
  {
    sub_2213A60(&System_Action_int__TypeInfo);
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ShopRootComponent_RequestShop__);
    this = (ShopRootComponent_o *)sub_2213A60(&Method_ShopRootComponent_SelectedBuyItemConfirm__);
    byte_596C8E7 = 1;
  }
  v4->fields.buyCount = buyCount;
  if ( buyCount )
  {
    buyStorageConfirmDialog = v4->fields.buyStorageConfirmDialog;
    v6 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v6, (Il2CppObject *)v4, Method_ShopRootComponent_RequestShop__, 0);
    if ( buyStorageConfirmDialog )
    {
      BuyStorageConfirmDialogComponent__Close_41760164(buyStorageConfirmDialog, v6, 0);
      return;
    }
LABEL_14:
    sub_2213CDC(this, *(_QWORD *)&buyCount);
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
    v13 = (System_Action_int__o *)sub_2213CCC(System_Action_int__TypeInfo);
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
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  void *Instance; // x0
  __int64 v10; // x1
  int v11; // w8
  void *v12; // x19
  __int64 v13; // x21
  __int64 v14; // x8

  if ( (byte_596C8F0 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ShopDetailMaster___);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_2213A60(&ShopRootComponent_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596C8F0 = 1;
  }
  if ( !ShopRootComponent_TypeInfo->static_fields->isInitialized )
  {
    v2 = (System_Collections_Generic_Dictionary_int__int__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v2,
      (const MethodInfo_3F9227C *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    ShopRootComponent_TypeInfo->static_fields->shopDetailCheckList = v2;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)ShopRootComponent_TypeInfo->static_fields,
      (int32_t)v2,
      v3,
      v4,
      v5,
      v6,
      v7,
      v8);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_15;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ShopDetailMaster___);
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
        if ( (unsigned int)v13 >= v11 )
          sub_2213CE4(Instance);
        v14 = *((_QWORD *)v12 + v13 + 4);
        if ( !v14 )
          break;
        Instance = ShopRootComponent_TypeInfo->static_fields->shopDetailCheckList;
        if ( !Instance )
          break;
        System_Collections_Generic_Dictionary_int__int___set_Item(
          (System_Collections_Generic_Dictionary_int__int__o *)Instance,
          *(_DWORD *)(v14 + 16),
          0,
          (const MethodInfo_3F92C0C *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
        v11 = *((_DWORD *)v12 + 6);
        if ( (int)++v13 >= v11 )
          goto LABEL_13;
      }
LABEL_15:
      sub_2213CDC(Instance, v10);
    }
LABEL_13:
    ShopRootComponent_TypeInfo->static_fields->isInitialized = 1;
  }
}


void ShopRootComponent__DeleteContinueData(const MethodInfo *method)
{
  if ( (byte_596C8AE & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_13513/*"SpecialItemHelp"*/);
    sub_2213A60(&StringLiteral_13390/*"Shop15Help"*/);
    sub_2213A60(&StringLiteral_2384/*"AnonymousHelp"*/);
    sub_2213A60(&StringLiteral_11672/*"RarePriHelp"*/);
    byte_596C8AE = 1;
  }
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_2384/*"AnonymousHelp"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11672/*"RarePriHelp"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13513/*"SpecialItemHelp"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13390/*"Shop15Help"*/, 0);
}


void ShopRootComponent__DeleteJumpInfoOnInit(ShopRootComponent_o *this, int32_t state, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( state == 9 )
  {
    this->fields.jumpInfo = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.jumpInfo,
      0,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
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

  if ( (byte_596C8BF & 1) == 0 )
  {
    sub_2213A60(&Method_ShopRootComponent_EndLimitCountSealInfoDialog__);
    byte_596C8BF = 1;
  }
  limitCountSealInfoDlg = this->fields.limitCountSealInfoDlg;
  if ( !limitCountSealInfoDlg )
    goto LABEL_9;
  SummonInfoDlgComponent__Close(limitCountSealInfoDlg, 0, 0);
  v4 = Method_ShopRootComponent_EndLimitCountSealInfoDialog__;
  if ( (*((_BYTE *)Method_ShopRootComponent_EndLimitCountSealInfoDialog__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_2213A78(Method_ShopRootComponent_EndLimitCountSealInfoDialog__);
  v5 = (System_Reflection_MethodBase_o *)sub_2213A44(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
  listViewHelper = this->fields.listViewHelper;
  if ( !listViewHelper
    || (limitCountSealInfoDlg = (SummonInfoDlgComponent_o *)listViewHelper->fields.buyItemListViewManager) == 0 )
  {
LABEL_9:
    sub_2213CDC(limitCountSealInfoDlg, method);
  }
  Item = ShopBuyItemListViewManager__GetItem(
           (ShopBuyItemListViewManager_o *)limitCountSealInfoDlg,
           this->fields.limitCountSealInfoIndex,
           0);
  ShopRootComponent__OpenConfirmMenu(this, this->fields.state, Item, this->fields.limitCountSealInfoBulk, v8);
  this->fields.limitCountSealInfoBulk = 0;
  this->fields.inputState = 2;
  this->fields.limitCountSealInfoIndex = -1;
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
  int32_t v11; // w23
  System_Int64_array *selectedServantIds; // x20
  System_Int64_array *selectedCommandCodeIds; // x21
  System_Action_int__o *v14; // x24
  const MethodInfo *v15; // x1

  if ( (byte_596C8D3 & 1) == 0 )
  {
    sub_2213A60(&System_Action_int__TypeInfo);
    sub_2213A60(&Method_ShopRootComponent_EndSellResultServant__);
    sub_2213A60(&StringLiteral_23336/*"ng"*/);
    byte_596C8D3 = 1;
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
  v8 = System_String__op_Equality(result, (System_String_o *)StringLiteral_23336/*"ng"*/, 0);
  ServantSellConfirmKindOnRequestEnd = ServantSellConfirmMenu__GetServantSellConfirmKindOnRequestEnd(tabKind, v8, 0);
  servantSellConfirmMenu = this->fields.servantSellConfirmMenu;
  v11 = ServantSellConfirmKindOnRequestEnd;
  selectedServantIds = this->fields.selectedServantIds;
  selectedCommandCodeIds = this->fields.selectedCommandCodeIds;
  v14 = (System_Action_int__o *)sub_2213CCC(System_Action_int__TypeInfo);
  System_Action_int____ctor(v14, (Il2CppObject *)this, Method_ShopRootComponent_EndSellResultServant__, 0);
  if ( !servantSellConfirmMenu )
LABEL_8:
    sub_2213CDC(servantSellMenu, result);
  ServantSellConfirmMenu__Open(servantSellConfirmMenu, v11, selectedServantIds, selectedCommandCodeIds, v14, 0, 0);
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
  __int64 v12; // x1
  __int64 v13; // x2
  Il2CppObject *Instance; // x21
  System_String_o *v15; // x22
  System_String_o *v16; // x23
  NotificationDialog_ClickDelegate_o *v17; // x24
  int32_t TargetId; // w0
  const MethodInfo *v19; // x1
  System_Nullable_float__o v20; // [xsp+68h] [xbp-38h] BYREF

  if ( (byte_596C8C8 & 1) == 0 )
  {
    sub_2213A60(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_System_Nullable_float___ctor__);
    sub_2213A60(&Method_ShopRootComponent__EndRequestShop_b__103_0__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&StringLiteral_10930/*"PURCHASE_CLASS_BOARD_RESET_CHECK_RESULT_DIALOG_TITLE"*/);
    sub_2213A60(&StringLiteral_23336/*"ng"*/);
    sub_2213A60(&StringLiteral_10929/*"PURCHASE_CLASS_BOARD_RESET_CHECK_RESULT_DIALOG_MSG"*/);
    byte_596C8C8 = 1;
  }
  v20 = 0;
  buyItemListViewManager = (void *)System_String__op_Equality(result, (System_String_o *)StringLiteral_23336/*"ng"*/, 0);
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
  if ( (unsigned int)(state - 13) > 0xFFFFFFFD )
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
    sub_2213CDC(buyItemListViewManager, v6);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v12, v13);
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_10930/*"PURCHASE_CLASS_BOARD_RESET_CHECK_RESULT_DIALOG_TITLE"*/, 0);
  buyItemListViewManager = LocalizationManager__Get((System_String_o *)StringLiteral_10929/*"PURCHASE_CLASS_BOARD_RESET_CHECK_RESULT_DIALOG_MSG"*/, 0);
  if ( !v11 )
    goto LABEL_23;
  v16 = System_String__Format((System_String_o *)buyItemListViewManager, *(Il2CppObject **)(v11 + 104), 0);
  v17 = (NotificationDialog_ClickDelegate_o *)sub_2213CCC(NotificationDialog_ClickDelegate_TypeInfo);
  NotificationDialog_ClickDelegate___ctor(
    v17,
    (Il2CppObject *)this,
    Method_ShopRootComponent__EndRequestShop_b__103_0__,
    0);
  System_Nullable_float____ctor(
    (System_Nullable_float__o)&v20,
    13.0,
    (const MethodInfo_45E6918 *)Method_System_Nullable_float___ctor__);
  if ( !Instance )
    goto LABEL_23;
  CommonUI__OpenNotificationDialog_37376108(
    (CommonUI_o *)Instance,
    v15,
    v16,
    v17,
    -1,
    0,
    0,
    0,
    0,
    0,
    0,
    v20,
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
  ShopRootComponent__RefreshInfo(this, v19);
}


System_Collections_Generic_Dictionary_int__long__o *ShopRootComponent__GetClassBoardReleaseItemList(
        int32_t baseId,
        const MethodInfo *method)
{
  __int64 v3; // x20
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_int__long__o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x2
  System_Collections_Generic_IEnumerable_TSource__o *monitor; // x22
  Il2CppObject *v11; // x21
  System_Func_object__bool__o *v12; // x23
  Il2CppObject *v13; // x0
  Il2CppObject *v14; // x22
  System_Collections_Generic_List_int__o *v15; // x23
  _BOOL8 v16; // x0
  __int64 v17; // x1
  ClassBoardSquareEntity_o *Entity; // x0
  ClassBoardSquareEntity_o *v19; // x22
  _BOOL8 HasLockId; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  Il2CppObject *v23; // x0
  __int64 v24; // x1
  Il2CppObject *v25; // x0
  __int64 v26; // x1
  Il2CppObject *v27; // x22
  _DWORD *v28; // x8
  Il2CppClass *klass; // x9
  __int64 i; // x24
  unsigned __int64 v31; // x9
  unsigned __int64 v32; // x25
  int32_t v33; // w23
  _BOOL8 v34; // x0
  __int64 v35; // x1
  int64_t Item; // x0
  __int64 v37; // x1
  Il2CppClass *v38; // x8
  Il2CppClass *v39; // x8
  struct System_Int32_array *itemIds; // x8
  struct System_Int32_array *itemNums; // x9
  __int64 j; // x24
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v44; // x25
  int32_t v45; // w23
  _BOOL8 v46; // x0
  __int64 v47; // x1
  int64_t v48; // x0
  __int64 v49; // x1
  struct System_Int32_array *v50; // x8
  struct System_Int32_array *v51; // x8
  System_Collections_Generic_List_Enumerator_int__o v53; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v54; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_596C8BD & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ClassBoardLockMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ClassBoardSquareMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserClassBoardSquareMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ClassBoardLockMaster__ClassBoardLockEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_UserClassBoardSquareMaster__UserClassBoardSquareEntity__string__getEntityList__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__long__Add__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__long__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__long___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__long__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__long__set_Item__);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__long__TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_FirstOrDefault_UserClassBoardSquareEntity___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_2213A60(&System_Func_UserClassBoardSquareEntity__bool__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&Method_ShopRootComponent___c__DisplayClass89_0__GetClassBoardReleaseItemList_b__0__);
    sub_2213A60(&ShopRootComponent___c__DisplayClass89_0_TypeInfo);
    byte_596C8BD = 1;
  }
  memset(&v54, 0, sizeof(v54));
  v3 = sub_2213CCC(ShopRootComponent___c__DisplayClass89_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_72;
  *(_DWORD *)(v3 + 16) = baseId;
  v6 = (System_Collections_Generic_Dictionary_int__long__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__long__TypeInfo);
  System_Collections_Generic_Dictionary_int__long____ctor(
    v6,
    (const MethodInfo_3F987FC *)Method_System_Collections_Generic_Dictionary_int__long___ctor__);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v7, v8);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserClassBoardSquareMaster___);
  if ( !Master_object )
    goto LABEL_72;
  if ( *(_DWORD *)(v3 + 16) )
  {
    monitor = (System_Collections_Generic_IEnumerable_TSource__o *)Master_object[2].monitor;
    if ( monitor )
    {
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v5, v9);
      v11 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
      v12 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_UserClassBoardSquareEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v12,
        (Il2CppObject *)v3,
        Method_ShopRootComponent___c__DisplayClass89_0__GetClassBoardReleaseItemList_b__0__,
        0);
      v13 = System_Linq_Enumerable__FirstOrDefault_object__59254852(
              monitor,
              (System_Func_TSource__bool__o *)v12,
              (const MethodInfo_3882844 *)Method_System_Linq_Enumerable_FirstOrDefault_UserClassBoardSquareEntity___);
      if ( v13 )
      {
        v14 = v13;
        v15 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
        System_Collections_Generic_List_int____ctor(
          v15,
          (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
        if ( v15 )
        {
          System_Collections_Generic_List_int___AddRange(
            v15,
            (System_Collections_Generic_IEnumerable_T__o *)v14[2].klass,
            (const MethodInfo_446747C *)Method_System_Collections_Generic_List_int__AddRange__);
          System_Collections_Generic_List_int___AddRange(
            v15,
            (System_Collections_Generic_IEnumerable_T__o *)v14[2].monitor,
            (const MethodInfo_446747C *)Method_System_Collections_Generic_List_int__AddRange__);
          System_Collections_Generic_List_int___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v53,
            v15,
            (const MethodInfo_4467D20 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
          v54 = v53;
          v53.fields._list = 0;
          *(_QWORD *)&v53.fields._index = &v54;
          while ( 1 )
          {
            v16 = System_Collections_Generic_List_Enumerator_int___MoveNext(
                    &v54,
                    (const MethodInfo_40F5CBC *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
            if ( !v16 )
              break;
            if ( !v11 )
              sub_2213CDC(v16, v17);
            Entity = ClassBoardSquareMaster__GetEntity(
                       (ClassBoardSquareMaster_o *)v11,
                       *(_DWORD *)(v3 + 16),
                       v54.fields._current,
                       0);
            v19 = Entity;
            if ( Entity )
            {
              HasLockId = ClassBoardSquareEntity__get_HasLockId(Entity, 0);
              if ( HasLockId )
              {
                if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v21, v22);
                v23 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ClassBoardLockMaster___);
                if ( !v23 )
                  sub_2213CDC(0, v24);
                v25 = DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)v23,
                        v19->fields.lockId,
                        (const MethodInfo_3F10B30 *)Method_DataMasterBase_ClassBoardLockMaster__ClassBoardLockEntity__int__GetEntity__);
                v27 = v25;
                if ( v25 )
                {
                  v28 = v25[1].monitor;
                  if ( !v28 )
                    sub_2213CDC(v25, v26);
                  klass = v25[2].klass;
                  if ( !klass )
                    sub_2213CDC(v25, v26);
                  if ( v28[6] == LODWORD(klass->_1.namespaze) )
                  {
                    for ( i = 8; ; ++i )
                    {
                      v31 = (unsigned int)v28[6];
                      v32 = i - 8;
                      if ( i - 8 >= (int)v31 )
                        break;
                      if ( v32 >= v31 )
                        sub_2213CE4(v25);
                      if ( !v6 )
                        sub_2213CDC(v25, v26);
                      v33 = v28[i];
                      v34 = System_Collections_Generic_Dictionary_int__long___ContainsKey(
                              v6,
                              v33,
                              (const MethodInfo_3F993A4 *)Method_System_Collections_Generic_Dictionary_int__long__ContainsKey__);
                      if ( v34 )
                      {
                        Item = System_Collections_Generic_Dictionary_int__long___get_Item(
                                 v6,
                                 v33,
                                 (const MethodInfo_3F99110 *)Method_System_Collections_Generic_Dictionary_int__long__get_Item__);
                        v38 = v27[2].klass;
                        if ( !v38 )
                          sub_2213CDC(Item, v37);
                        if ( v32 >= LODWORD(v38->_1.namespaze) )
                          sub_2213CE4(Item);
                        System_Collections_Generic_Dictionary_int__long___set_Item(
                          v6,
                          v33,
                          Item + *((int *)&v38->_1.image + i),
                          (const MethodInfo_3F9919C *)Method_System_Collections_Generic_Dictionary_int__long__set_Item__);
                      }
                      else
                      {
                        v39 = v27[2].klass;
                        if ( !v39 )
                          sub_2213CDC(v34, v35);
                        if ( v32 >= LODWORD(v39->_1.namespaze) )
                          sub_2213CE4(v34);
                        System_Collections_Generic_Dictionary_int__long___Add(
                          v6,
                          v33,
                          *((int *)&v39->_1.image + i),
                          (const MethodInfo_3F991B0 *)Method_System_Collections_Generic_Dictionary_int__long__Add__);
                      }
                      v28 = v27[1].monitor;
                      if ( !v28 )
                        sub_2213CDC(v25, v26);
                    }
                  }
                }
              }
              else
              {
                itemIds = v19->fields.itemIds;
                if ( !itemIds )
                  sub_2213CDC(HasLockId, v21);
                itemNums = v19->fields.itemNums;
                if ( !itemNums )
                  sub_2213CDC(HasLockId, v21);
                if ( LODWORD(itemIds->max_length) == LODWORD(itemNums->max_length) )
                {
                  for ( j = 8; ; ++j )
                  {
                    max_length_low = LODWORD(itemIds->max_length);
                    v44 = j - 8;
                    if ( j - 8 >= (int)max_length_low )
                      break;
                    if ( v44 >= max_length_low )
                      sub_2213CE4(HasLockId);
                    if ( !v6 )
                      sub_2213CDC(HasLockId, v21);
                    v45 = *((_DWORD *)&itemIds->obj.klass + j);
                    v46 = System_Collections_Generic_Dictionary_int__long___ContainsKey(
                            v6,
                            v45,
                            (const MethodInfo_3F993A4 *)Method_System_Collections_Generic_Dictionary_int__long__ContainsKey__);
                    if ( v46 )
                    {
                      v48 = System_Collections_Generic_Dictionary_int__long___get_Item(
                              v6,
                              v45,
                              (const MethodInfo_3F99110 *)Method_System_Collections_Generic_Dictionary_int__long__get_Item__);
                      v50 = v19->fields.itemNums;
                      if ( !v50 )
                        sub_2213CDC(v48, v49);
                      if ( v44 >= LODWORD(v50->max_length) )
                        sub_2213CE4(v48);
                      System_Collections_Generic_Dictionary_int__long___set_Item(
                        v6,
                        v45,
                        v48 + *((int *)&v50->obj.klass + j),
                        (const MethodInfo_3F9919C *)Method_System_Collections_Generic_Dictionary_int__long__set_Item__);
                    }
                    else
                    {
                      v51 = v19->fields.itemNums;
                      if ( !v51 )
                        sub_2213CDC(v46, v47);
                      if ( v44 >= LODWORD(v51->max_length) )
                        sub_2213CE4(v46);
                      System_Collections_Generic_Dictionary_int__long___Add(
                        v6,
                        v45,
                        *((int *)&v51->obj.klass + j),
                        (const MethodInfo_3F991B0 *)Method_System_Collections_Generic_Dictionary_int__long__Add__);
                    }
                    itemIds = v19->fields.itemIds;
                    if ( !itemIds )
                      sub_2213CDC(HasLockId, v21);
                  }
                }
              }
            }
          }
          System_Collections_Generic_List_Enumerator_int___Dispose(
            &v54,
            (const MethodInfo_40F5CB8 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
          return v6;
        }
LABEL_72:
        sub_2213CDC(Master_object, v5);
      }
    }
  }
  return v6;
}


int64_t ShopRootComponent__GetCurrency(ShopRootComponent_o *this, ShopEntity_o *shopEntity, const MethodInfo *method)
{
  unsigned int payType; // w8
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *Master_object; // x20
  NetworkManager_c *v8; // x0
  int64_t userIdNumber; // x21

  if ( (byte_596C8E2 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    this = (ShopRootComponent_o *)sub_2213A60(&NetworkManager_TypeInfo);
    byte_596C8E2 = 1;
  }
  if ( !shopEntity )
    goto LABEL_30;
  payType = shopEntity->fields.payType;
  if ( payType > 0xC )
  {
LABEL_21:
    if ( payType == 1 )
    {
      this = (ShopRootComponent_o *)UserGameMaster__getSelfUserGame(0);
      if ( !this )
        goto LABEL_30;
      return SLODWORD(this->fields.servantSellMenu);
    }
    else if ( payType == 2 )
    {
      this = (ShopRootComponent_o *)UserGameMaster__getSelfUserGame(0);
      if ( !this )
        goto LABEL_30;
      return (int64_t)this->fields.topListViewManager;
    }
    else
    {
      return 0;
    }
  }
  if ( ((1 << payType) & 0x1B40) != 0 )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, shopEntity, method);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserItemMaster___);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5, v6);
    if ( !byte_5969EF2 )
    {
      sub_2213A60(&NetworkManager_TypeInfo);
      byte_5969EF2 = 1;
    }
    v8 = NetworkManager_TypeInfo;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5, v6);
      v8 = NetworkManager_TypeInfo;
    }
    userIdNumber = v8->static_fields->userIdNumber;
    this = (ShopRootComponent_o *)ShopEntity__GetItemID(shopEntity, 0);
    if ( Master_object )
    {
      this = (ShopRootComponent_o *)UserItemMaster__GetEntityDefinitely(
                                      (UserItemMaster_o *)Master_object,
                                      userIdNumber,
                                      (int32_t)this,
                                      0);
      if ( this )
        return SHIDWORD(this->fields.m_CancellationTokenSource);
    }
LABEL_30:
    sub_2213CDC(this, shopEntity);
  }
  if ( payType != 4 )
  {
    if ( payType == 10 )
    {
      this = (ShopRootComponent_o *)UserGameMaster__getSelfUserGame(0);
      if ( !this )
        goto LABEL_30;
      return SHIDWORD(this->fields.servantSellConfirmMenu);
    }
    goto LABEL_21;
  }
  this = (ShopRootComponent_o *)UserGameMaster__getSelfUserGame(0);
  if ( !this )
    goto LABEL_30;
  return SLODWORD(this->fields.servantSellConfirmMenu);
}


int32_t ShopRootComponent__GetInputStateOnInit(ShopRootComponent_o *this, int32_t state, const MethodInfo *method)
{
  if ( (unsigned int)(state - 1) > 0x15 )
    return 0;
  else
    return dword_ED9588[state - 1];
}


bool ShopRootComponent__GetIsBulk(ShopRootComponent_o *this, ShopBuyItemListViewItem_o *item, const MethodInfo *method)
{
  struct ShopEntity_o *Shop_k__BackingField; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *Master_object; // x21
  _BOOL8 IsItemMaxLeftEqual; // x0
  const MethodInfo *v9; // x2
  char v10; // w19
  int32_t limitNum; // w8
  int32_t payType; // w8
  CommonConsumeEntity_array *CommonConsumeEntities; // x0
  int max_length; // w8
  CommonConsumeEntity_array *v16; // x20
  __int64 v17; // x21
  int64_t Currency; // x21
  bool v19; // cc
  int64_t v20; // x21

  if ( (byte_596C8E1 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_UserItemMaster___);
    this = (ShopRootComponent_o *)sub_2213A60(&DataManager_TypeInfo);
    byte_596C8E1 = 1;
  }
  if ( !item )
    goto LABEL_31;
  Shop_k__BackingField = item->fields._Shop_k__BackingField;
  if ( !Shop_k__BackingField )
    goto LABEL_31;
  if ( ShopEntity__IsSoldOut(item->fields._Shop_k__BackingField, 0) || !ShopEntity__IsEnable(Shop_k__BackingField, 0, 0) )
    return 0;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v5, v6);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserItemMaster___);
  this = (ShopRootComponent_o *)ShopBuyItemListViewItem__get_TargetId(item, 0);
  if ( !Master_object )
    goto LABEL_31;
  IsItemMaxLeftEqual = UserItemMaster__IsItemMaxLeftEqual((UserItemMaster_o *)Master_object, (int32_t)this, 1, 0);
  if ( IsItemMaxLeftEqual )
    return 0;
  limitNum = Shop_k__BackingField->fields.limitNum;
  if ( limitNum )
    v10 = limitNum - item->fields._TotalNum_k__BackingField > 1;
  else
    v10 = 1;
  payType = Shop_k__BackingField->fields.payType;
  if ( payType == 8 )
  {
    Currency = ShopRootComponent__GetCurrency((ShopRootComponent_o *)IsItemMaxLeftEqual, Shop_k__BackingField, v9);
    v19 = Currency < ShopEntity__GetPrice(Shop_k__BackingField, 0);
  }
  else
  {
    if ( payType == 14 )
    {
      CommonConsumeEntities = ShopEntity__GetCommonConsumeEntities(Shop_k__BackingField, 0);
      if ( !CommonConsumeEntities )
        return 0;
      max_length = CommonConsumeEntities->max_length;
      v16 = CommonConsumeEntities;
      if ( max_length < 1 )
        return v10;
      v17 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v17 >= max_length )
          sub_2213CE4(CommonConsumeEntities);
        this = (ShopRootComponent_o *)v16->m_Items[v17];
        if ( !this )
          break;
        CommonConsumeEntities = (CommonConsumeEntity_array *)CommonConsumeEntity__GetUserBuyableNum(
                                                               (CommonConsumeEntity_o *)this,
                                                               0);
        if ( (int)CommonConsumeEntities < 2 )
          return 0;
        max_length = v16->max_length;
        if ( (int)++v17 >= max_length )
          return v10;
      }
LABEL_31:
      sub_2213CDC(this, item);
    }
    v20 = ShopRootComponent__GetCurrency((ShopRootComponent_o *)IsItemMaxLeftEqual, Shop_k__BackingField, v9);
    v19 = v20 < 2 * ShopEntity__GetPrice(Shop_k__BackingField, 0);
  }
  if ( v19 )
    return 0;
  return v10;
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

  if ( (byte_596C8C4 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596C8C4 = 1;
  }
  if ( !selectServantIds )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_14:
    sub_2213CDC(Instance, v5);
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
  max_length = selectServantIds->max_length;
  if ( (int)max_length < 1 )
    return 0;
  v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v8 = 0;
  while ( 1 )
  {
    if ( v8 >= (unsigned int)max_length )
      sub_2213CE4(Instance);
    if ( !v7 )
      goto LABEL_14;
    Instance = DataMasterBase_object__object__long___GetEntity(
                 v7,
                 selectServantIds->m_Items[v8],
                 (const MethodInfo_3F13190 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
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
  __int64 v6; // x2
  Il2CppObject *MasterData_object; // x20
  struct ShopEntity_o *Shop_k__BackingField; // x8
  UserShopEntity_o *EntityDefinitely; // x0

  if ( (byte_596C8C0 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserShopMaster___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596C8C0 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5, v6);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5, v6);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !item || (Shop_k__BackingField = item->fields._Shop_k__BackingField) == 0 || !MasterData_object )
LABEL_16:
    sub_2213CDC(Instance, v5);
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

  if ( (byte_596C8EC & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_9254/*"ManaPrism"*/);
    sub_2213A60(&StringLiteral_7434/*"GrailFragments"*/);
    sub_2213A60(&StringLiteral_15162/*"TradeAp"*/);
    sub_2213A60(&StringLiteral_8740/*"LeafExchange"*/);
    sub_2213A60(&StringLiteral_11278/*"PurePrismExchange"*/);
    sub_2213A60(&StringLiteral_6493/*"EventItem"*/);
    sub_2213A60(&StringLiteral_4701/*"CoinRoom"*/);
    sub_2213A60(&StringLiteral_13634/*"StoneFragments"*/);
    sub_2213A60(&StringLiteral_4647/*"ClassBoardReset"*/);
    sub_2213A60(&StringLiteral_11673/*"RarePrism"*/);
    sub_2213A60(&StringLiteral_13225/*"SellServant"*/);
    byte_596C8EC = 1;
  }
  v6 = PrivateImplementationDetails___ComputeStringHash(jumpInfoName, 0);
  if ( v6 <= 0xA7EC7693 )
  {
    if ( v6 > 0x7AC5BC48 )
    {
      if ( v6 == -1988383029 )
      {
        if ( System_String__op_Equality(jumpInfoName, (System_String_o *)StringLiteral_13634/*"StoneFragments"*/, 0) )
          return 4;
      }
      else if ( v6 == -1542091583 )
      {
        if ( System_String__op_Equality(jumpInfoName, (System_String_o *)StringLiteral_11278/*"PurePrismExchange"*/, 0) )
          return 18;
      }
      else if ( v6 == -1477675373 && System_String__op_Equality(jumpInfoName, (System_String_o *)StringLiteral_7434/*"GrailFragments"*/, 0) )
      {
        return 14;
      }
    }
    else if ( v6 == 1526818832 )
    {
      if ( System_String__op_Equality(jumpInfoName, (System_String_o *)StringLiteral_8740/*"LeafExchange"*/, 0) )
        return 20;
    }
    else if ( v6 == 2059779144 && System_String__op_Equality(jumpInfoName, (System_String_o *)StringLiteral_4647/*"ClassBoardReset"*/, 0) )
    {
      return 22;
    }
    return 1;
  }
  if ( v6 <= 0xCD42BE08 )
  {
    if ( v6 == -1114035561 )
    {
      if ( System_String__op_Equality(jumpInfoName, (System_String_o *)StringLiteral_4701/*"CoinRoom"*/, 0) )
        return 17;
    }
    else if ( v6 == -1075479726 )
    {
      if ( System_String__op_Equality(jumpInfoName, (System_String_o *)StringLiteral_13225/*"SellServant"*/, 0) )
        return 9;
    }
    else if ( v6 == -851263992 && System_String__op_Equality(jumpInfoName, (System_String_o *)StringLiteral_15162/*"TradeAp"*/, 0) )
    {
      return 19;
    }
    return 1;
  }
  if ( v6 == -74236182 )
  {
    if ( System_String__op_Equality(jumpInfoName, (System_String_o *)StringLiteral_11673/*"RarePrism"*/, 0) )
      return 3;
    return 1;
  }
  if ( v6 != -472076328 )
  {
    if ( v6 == -490311229 && System_String__op_Equality(jumpInfoName, (System_String_o *)StringLiteral_9254/*"ManaPrism"*/, 0) )
      return 2;
    return 1;
  }
  if ( !System_String__op_Equality(jumpInfoName, (System_String_o *)StringLiteral_6493/*"EventItem"*/, 0) )
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
  ShopBuyItemListViewManager_o *buyItemListViewManager; // x21
  UnityEngine_GameObject_o *buyItemListViewBase; // x25
  ShopEventListViewManager_o *eventListViewManager; // x26
  ShopHelpListViewManager_o *helpListViewManager; // x22
  UnityEngine_GameObject_o *helpListViewBase; // x28
  UnityEngine_GameObject_o *topListViewBase; // x27
  ServantSellMenu_o *servantSellMenu; // x20
  ShopSceneListViewControlHelper_o *v15; // x29
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  __int64 v22; // x1
  const MethodInfo *v23; // x7
  ShopSceneListViewControlHelper_o *listViewHelper; // x0
  ShopSceneListViewControlHelper_o *v25; // x22
  System_Action_o *v26; // x23
  System_Action_T__o *v27; // x24
  System_Action_int__o *v28; // x25
  System_Action_int__o *v29; // x26
  System_Action_T1__T2__T3__o *v30; // x27
  System_Action_o *v31; // x28
  const MethodInfo *v32; // x7
  ShopRootComponent_o *v33; // x0
  const MethodInfo *v34; // x3
  ShopRootComponent_o *StateOnInit; // x0
  int32_t v36; // w21
  const MethodInfo *v37; // x2
  int32_t InputStateOnInit; // w0
  const MethodInfo *v39; // x4
  _BOOL4 isFromCoinRoom; // w8
  float v41; // s0
  const MethodInfo *v42; // x3
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  UnityEngine_GameObject_o *gameObject; // x20
  System_Action_int__o *v50; // x21
  const MethodInfo *v51; // [xsp+18h] [xbp-88h]
  System_String_o *jumpInfoName; // [xsp+28h] [xbp-78h]
  int32_t eventId; // [xsp+34h] [xbp-6Ch]
  UnityEngine_GameObject_o *eventListViewBase; // [xsp+38h] [xbp-68h]

  if ( (byte_596C8B3 & 1) == 0 )
  {
    sub_2213A60(&System_Action_ShopRootConstants_State__TypeInfo);
    sub_2213A60(&System_Action_int__TypeInfo);
    sub_2213A60(&System_Action_ServantSellMenu_ResultKind__long____long____TypeInfo);
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ShopRootComponent_OnMoveEnd__);
    sub_2213A60(&Method_ShopRootComponent_OnSelectBuyItem__);
    sub_2213A60(&Method_ShopRootComponent_OnSelectEvent__);
    sub_2213A60(&Method_ShopRootComponent_OnSelectSellServant__);
    sub_2213A60(&Method_ShopRootComponent_OnSelectTop__);
    sub_2213A60(&Method_ShopRootComponent_OpenHelp__);
    sub_2213A60(&Method_ShopRootComponent__Init_b__78_0__);
    sub_2213A60(&ShopSceneListViewControlHelper_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596C8B3 = 1;
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
      p_name = (System_String_o **)&StringLiteral_1/*""*/;
      eventId = 0;
    }
    currencyInfoController = this->fields.currencyInfoController;
    topListViewManager = this->fields.topListViewManager;
    buyItemListViewManager = this->fields.buyItemListViewManager;
    buyItemListViewBase = this->fields.buyItemListViewBase;
    jumpInfoName = *p_name;
    eventListViewManager = this->fields.eventListViewManager;
    eventListViewBase = this->fields.eventListViewBase;
    helpListViewManager = this->fields.helpListViewManager;
    helpListViewBase = this->fields.helpListViewBase;
    topListViewBase = this->fields.topListViewBase;
    servantSellMenu = this->fields.servantSellMenu;
    v15 = (ShopSceneListViewControlHelper_o *)sub_2213CCC(ShopSceneListViewControlHelper_TypeInfo);
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
      v51);
    this->fields.listViewHelper = v15;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.listViewHelper,
      (int32_t)v15,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
    listViewHelper = this->fields.listViewHelper;
    if ( !listViewHelper )
      goto LABEL_16;
    ShopSceneListViewControlHelper__SetOtherObjects(
      listViewHelper,
      this->fields.titleInfo,
      this->fields.standFigureBack,
      this->fields.giftButtonControl,
      this->fields.exRoomShopButtonRoot,
      this->fields.backgroundTexture,
      this,
      v23);
    v25 = this->fields.listViewHelper;
    v26 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v26, (Il2CppObject *)this, Method_ShopRootComponent_OnMoveEnd__, 0);
    v27 = (System_Action_T__o *)sub_2213CCC(System_Action_ShopRootConstants_State__TypeInfo);
    System_Action_Int32Enum____ctor(v27, (Il2CppObject *)this, (intptr_t)Method_ShopRootComponent_OnSelectTop__, 0);
    v28 = (System_Action_int__o *)sub_2213CCC(System_Action_int__TypeInfo);
    System_Action_int____ctor(v28, (Il2CppObject *)this, (intptr_t)Method_ShopRootComponent_OnSelectEvent__, 0);
    v29 = (System_Action_int__o *)sub_2213CCC(System_Action_int__TypeInfo);
    System_Action_int____ctor(v29, (Il2CppObject *)this, (intptr_t)Method_ShopRootComponent_OnSelectBuyItem__, 0);
    v30 = (System_Action_T1__T2__T3__o *)sub_2213CCC(System_Action_ServantSellMenu_ResultKind__long____long____TypeInfo);
    System_Action_Int32Enum__object__object____ctor(
      v30,
      (Il2CppObject *)this,
      Method_ShopRootComponent_OnSelectSellServant__,
      0);
    v31 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v31, (Il2CppObject *)this, Method_ShopRootComponent_OpenHelp__, 0);
    if ( !v25 )
      goto LABEL_16;
    ShopSceneListViewControlHelper__SetCallbackEvents(
      v25,
      v26,
      (System_Action_ShopRootConstants_State__o *)v27,
      v28,
      v29,
      (System_Action_ServantSellMenu_ResultKind__long____long____o *)v30,
      v31,
      v32);
    StateOnInit = (ShopRootComponent_o *)ShopRootComponent__GetStateOnInit(v33, jumpInfoName, eventId, v34);
    v36 = (int)StateOnInit;
    this->fields.state = (int)StateOnInit;
    InputStateOnInit = ShopRootComponent__GetInputStateOnInit(StateOnInit, (int32_t)StateOnInit, v37);
    isFromCoinRoom = this->fields.isFromCoinRoom;
    this->fields.inputState = InputStateOnInit;
    v41 = isFromCoinRoom ? this->fields.saveScrollBarValue : -1.0;
    listViewHelper = this->fields.listViewHelper;
    if ( !listViewHelper )
LABEL_16:
      sub_2213CDC(listViewHelper, v22);
    ShopSceneListViewControlHelper__SetListViewOnSceneInit(
      listViewHelper,
      v36,
      eventId,
      v41,
      &this->fields.selectedEventIndex,
      v39);
    ShopRootComponent__OpenEventItemWindow(this, this->fields.state, eventId, v42);
    if ( this->fields.state == 9 )
    {
      this->fields.jumpInfo = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.jumpInfo, 0, v43, v44, v45, v46, v47, v48);
    }
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    v50 = (System_Action_int__o *)sub_2213CCC(System_Action_int__TypeInfo);
    System_Action_int____ctor(v50, (Il2CppObject *)this, Method_ShopRootComponent__Init_b__78_0__, 0);
    StoneCountRefreshComponent__AttachToGameObject(gameObject, v50, 0, 0);
  }
}


bool ShopRootComponent__IsExistBackClassBoardInfo(ShopRootComponent_o *this, const MethodInfo *method)
{
  struct SceneJumpInfo_o *jumpInfo; // x8
  _BOOL8 v4; // x0
  __int64 v5; // x1
  struct SceneJumpInfo_o *v6; // x8

  if ( (byte_596C8F5 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_4647/*"ClassBoardReset"*/);
    byte_596C8F5 = 1;
  }
  jumpInfo = this->fields.jumpInfo;
  if ( !jumpInfo )
    return 0;
  if ( !jumpInfo->fields.id )
    return 0;
  v4 = System_String__op_Equality(jumpInfo->fields.name, (System_String_o *)StringLiteral_4647/*"ClassBoardReset"*/, 0);
  if ( !v4 )
    return 0;
  v6 = this->fields.jumpInfo;
  if ( !v6 )
    sub_2213CDC(v4, v5);
  return v6->fields.backSceneJumpInfo != 0;
}


void ShopRootComponent__LoadBanner(ShopRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  ShopRootComponent_o *v12; // x0
  const MethodInfo *v13; // x3
  struct SceneJumpInfo_o *jumpInfo; // x8
  int32_t id; // w2
  System_String_o **p_name; // x8
  int32_t StateOnInit; // w0
  System_Action_c *v18; // x8
  System_Action_o *v19; // x20
  __int64 v20; // x1
  __int64 v21; // x2

  if ( (byte_596C8B2 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_ShopRootComponent___c__DisplayClass75_0__LoadBanner_b__0__);
    sub_2213A60(&ShopRootComponent___c__DisplayClass75_0_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596C8B2 = 1;
  }
  v3 = sub_2213CCC(ShopRootComponent___c__DisplayClass75_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    sub_2213CDC(v4, v5);
  *(_QWORD *)(v3 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 16), (int32_t)this, v6, v7, v8, v9, v10, v11);
  jumpInfo = this->fields.jumpInfo;
  if ( jumpInfo )
  {
    id = jumpInfo->fields.id;
    p_name = &jumpInfo->fields.name;
  }
  else
  {
    id = 0;
    p_name = (System_String_o **)&StringLiteral_1/*""*/;
  }
  StateOnInit = ShopRootComponent__GetStateOnInit(v12, *p_name, id, v13);
  v18 = System_Action_TypeInfo;
  *(_DWORD *)(v3 + 24) = StateOnInit;
  v19 = (System_Action_o *)sub_2213CCC(v18);
  System_Action___ctor(v19, (Il2CppObject *)v3, Method_ShopRootComponent___c__DisplayClass75_0__LoadBanner_b__0__, 0);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v20, v21);
  AtlasManager__LoadOutGameAtlas(v19, 0);
}


void ShopRootComponent__MenuBackFromStonePurchase(ShopRootComponent_o *this, int32_t result, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x1

  if ( (byte_596C8EF & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596C8EF = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || ((CommonUI__CloseStonePurchaseMenu(Instance, 0),
         Instance = (CommonUI_o *)this->fields.listViewHelper,
         this->fields.state != 8)
      ? (v6 = 1)
      : (v6 = 7),
        this->fields.inputState = 2,
        this->fields.state = v6,
        !Instance) )
  {
    sub_2213CDC(Instance, v6);
  }
  ShopSceneListViewControlHelper__SetListViewOnCloseStonePurchase((ShopSceneListViewControlHelper_o *)Instance, v6, v7);
  if ( result == 2 )
    ShopRootComponent__RefreshInfo(this, v8);
}


void ShopRootComponent__OnClickBack(ShopRootComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x2

  if ( (byte_596C8DB & 1) == 0 )
  {
    sub_2213A60(&Method_ShopRootComponent_OnClickBack__);
    byte_596C8DB = 1;
  }
  if ( this->fields.inputState == 2 )
  {
    v3 = Method_ShopRootComponent_OnClickBack__;
    if ( (*((_BYTE *)Method_ShopRootComponent_OnClickBack__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_ShopRootComponent_OnClickBack__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
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

  if ( (byte_596C8F4 & 1) == 0 )
  {
    sub_2213A60(&SceneJumpInfo_TypeInfo);
    sub_2213A60(&Method_ShopRootComponent_OnClickBackToClassBoardButton__);
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_2213A60(&StringLiteral_5473/*"DirectlyToClassBoard"*/);
    byte_596C8F4 = 1;
  }
  if ( this->fields.inputState == 2 && this->fields.state == 22 )
  {
    v3 = Method_ShopRootComponent_OnClickBackToClassBoardButton__;
    if ( (*((_BYTE *)Method_ShopRootComponent_OnClickBackToClassBoardButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_ShopRootComponent_OnClickBackToClassBoardButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    IsExistBackClassBoardInfo = (Il2CppObject *)ShopRootComponent__IsExistBackClassBoardInfo(this, v5);
    if ( ((unsigned __int8)IsExistBackClassBoardInfo & 1) != 0 )
    {
      jumpInfo = this->fields.jumpInfo;
      if ( !jumpInfo
        || (backSceneJumpInfo = jumpInfo->fields.backSceneJumpInfo) == 0
        || (id = jumpInfo->fields.id,
            num = backSceneJumpInfo->fields.num,
            v12 = (SceneJumpInfo_o *)sub_2213CCC(SceneJumpInfo_TypeInfo),
            SceneJumpInfo___ctor_48464976(v12, (System_String_o *)StringLiteral_5473/*"DirectlyToClassBoard"*/, id, num, 0),
            (IsExistBackClassBoardInfo = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0) )
      {
        sub_2213CDC(IsExistBackClassBoardInfo, v7);
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


void ShopRootComponent__OnClickExRoomShopButton(ShopRootComponent_o *this, const MethodInfo *method)
{
  int32_t inputState; // w8
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  CommonUI_o *v9; // x19
  System_Action_o *transitionAction; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_596C8DC & 1) == 0 )
  {
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&Method_ShopRootComponent_OnClickExRoomShopButton__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&StringLiteral_14255/*"Terminal/ExRoom/Shop"*/);
    byte_596C8DC = 1;
  }
  inputState = this->fields.inputState;
  transitionAction = 0;
  if ( inputState == 2 && ExRoomRootComponent__IsFeatureOpen(1, 0) )
  {
    v4 = Method_ShopRootComponent_OnClickExRoomShopButton__;
    if ( (*((_BYTE *)Method_ShopRootComponent_OnClickExRoomShopButton__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_2213A78(Method_ShopRootComponent_OnClickExRoomShopButton__);
    v5 = (System_Reflection_MethodBase_o *)sub_2213A44(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_14;
    if ( !CommonUI__TryGetSceneTransitionAction(
            (CommonUI_o *)Instance,
            &transitionAction,
            (System_String_o *)StringLiteral_14255/*"Terminal/ExRoom/Shop"*/,
            0,
            0,
            1,
            0,
            0) )
      return;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v9 = (CommonUI_o *)Instance;
    if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v7, v8);
    if ( !v9 )
LABEL_14:
      sub_2213CDC(Instance, v7);
    CommonUI__maskFadeout(v9, 1, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, transitionAction, 0);
  }
}


void ShopRootComponent__OnClickHelp(ShopRootComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_596C8D5 & 1) == 0 )
  {
    sub_2213A60(&Method_ShopRootComponent_OnClickHelp__);
    byte_596C8D5 = 1;
  }
  v3 = Method_ShopRootComponent_OnClickHelp__;
  if ( (*((_BYTE *)Method_ShopRootComponent_OnClickHelp__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_ShopRootComponent_OnClickHelp__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
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

  if ( (byte_596C8D8 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ShopRootComponent_CheckTutorial__);
    sub_2213A60(&Method_ShopRootComponent_OnClickHelpClose__);
    byte_596C8D8 = 1;
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
    v4 = (_QWORD *)sub_2213A78(Method_ShopRootComponent_OnClickHelpClose__);
  v5 = (System_Reflection_MethodBase_o *)sub_2213A44(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0, 0);
  helpListViewManager = this->fields.helpListViewManager;
  v7 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_ShopRootComponent_CheckTutorial__, 0);
  if ( !helpListViewManager )
    sub_2213CDC(v8, v9);
  ShopHelpListViewManager__CloseHelpDialog(helpListViewManager, v7, v10);
}


void ShopRootComponent__OnEndDialogEventCloseWarning(ShopRootComponent_o *this, const MethodInfo *method)
{
  MainMenuBar__requestTerminalSceneChange(0);
}


void ShopRootComponent__OnEndFadeRequestShop(ShopRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_String_o *MainBgmName; // x20
  const MethodInfo *v7; // x1

  if ( (byte_596C8D1 & 1) == 0 )
  {
    sub_2213A60(&BgmManager_TypeInfo);
    sub_2213A60(&SoundManager_TypeInfo);
    byte_596C8D1 = 1;
  }
  if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, method, v2);
  MainBgmName = BgmManager__GetMainBgmName(0, 0);
  if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v4, v5);
  SoundManager__playBgm(MainBgmName, 0);
  ShopRootComponent__RequestEnd(this, v7);
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
  __int64 v10; // x1
  __int64 v11; // x2
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_596C8CD & 1) == 0 )
  {
    sub_2213A60(&ScriptManager_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_ShopScriptMaster___);
    sub_2213A60(&Method_DataMasterBase_ShopScriptMaster__ShopScriptEntity__int__TryGetEntity__);
    sub_2213A60(&ScriptManager_TypeInfo);
    sub_2213A60(&Method_ShopRootComponent_OnEndPlayScriptRequestShop__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596C8CD = 1;
  }
  requestResultDialog = this->fields.requestResultDialog;
  entity = 0;
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
  requestResultDialog = (RequestResultDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !requestResultDialog )
    goto LABEL_21;
  requestResultDialog = (RequestResultDialog_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)requestResultDialog,
                                                   (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ShopScriptMaster___);
  if ( !okBtnLabel || !requestResultDialog )
    goto LABEL_21;
  requestResultDialog = (RequestResultDialog_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)requestResultDialog,
                                                   &entity,
                                                   okBtnLabel->fields.id,
                                                   (const MethodInfo_3F10B80 *)Method_DataMasterBase_ShopScriptMaster__ShopScriptEntity__int__TryGetEntity__);
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
    sub_2213CDC(requestResultDialog, isOk);
  monitor = (System_String_o *)entity[2].monitor;
  v9 = (ScriptManager_CallbackFunc_o *)sub_2213CCC(ScriptManager_CallbackFunc_TypeInfo);
  ScriptManager_CallbackFunc___ctor(v9, (Il2CppObject *)this, Method_ShopRootComponent_OnEndPlayScriptRequestShop__, 0);
  if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v10, v11);
  ScriptManager__PlayShop(monitor, v9, 0, 0);
}


void ShopRootComponent__OnEndPlayScriptRequestShop(ShopRootComponent_o *this, bool isExit, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_596C8CE & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ShopRootComponent_OnEndFadeRequestShop__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596C8CE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_ShopRootComponent_OnEndFadeRequestShop__, 0);
  if ( !Instance )
    sub_2213CDC(v6, v7);
  CommonUI__maskFadein((CommonUI_o *)Instance, 1.0, v5, 0);
}


void ShopRootComponent__OnEndPlayServantCostumeReleaseEffect(ShopRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  AvalonSceneManager_c *v6; // x8
  CommonUI_o *v7; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_596C8D0 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&Method_ShopRootComponent_RequestEnd__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596C8D0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = AvalonSceneManager_TypeInfo;
  v7 = (CommonUI_o *)Instance;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v4, v5);
    v6 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v6->static_fields->DEFAULT_FADE_TIME;
  v9 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_ShopRootComponent_RequestEnd__, 0);
  if ( !v7 )
    sub_2213CDC(v10, v11);
  CommonUI__maskFadein(v7, DEFAULT_FADE_TIME, v9, 0);
}


// local variable allocation has failed, the output may be wrong!
void ShopRootComponent__OnEndShopReset(ShopRootComponent_o *this, bool isDecide, const MethodInfo *method)
{
  ShopResetConfirmDialogComponent_o *shopResetConfirmDialog; // x0
  const MethodInfo *v5; // x1

  shopResetConfirmDialog = this->fields.shopResetConfirmDialog;
  if ( !shopResetConfirmDialog )
    sub_2213CDC(0, isDecide);
  ShopResetConfirmDialogComponent__Close_42025464(shopResetConfirmDialog, 0, method);
  ShopRootComponent__RequestEnd(this, v5);
}


// local variable allocation has failed, the output may be wrong!
void ShopRootComponent__OnEndStorageDialog(ShopRootComponent_o *this, int32_t count, const MethodInfo *method)
{
  BuyStorageConfirmDialogComponent_o *buyStorageResultDialog; // x0
  const MethodInfo *v5; // x1

  buyStorageResultDialog = this->fields.buyStorageResultDialog;
  if ( !buyStorageResultDialog )
    sub_2213CDC(0, *(_QWORD *)&count);
  BuyStorageConfirmDialogComponent__Close(buyStorageResultDialog, 0);
  ShopRootComponent__RequestEnd(this, v5);
}


// local variable allocation has failed, the output may be wrong!
bool ShopRootComponent__OnGiftClose(ShopRootComponent_o *this, bool receivedNewServant, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  ShopCurrencyInfoController_o *currencyInfoController; // x20
  int32_t state; // w21
  ShopSceneListViewControlHelper_o *BuyItemKind; // x0
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x3
  int32_t v11; // w21
  __int64 v12; // x1
  __int64 v13; // x2
  UnityEngine_Object_o *titleInfo; // x20
  struct ShopInfoIndicator_o *informationPanel; // x8

  if ( (byte_596C8D4 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&ShopBuyItemListViewManager_TypeInfo);
    byte_596C8D4 = 1;
  }
  ShopRootComponent__RefreshInfo(this, (const MethodInfo *)receivedNewServant);
  currencyInfoController = this->fields.currencyInfoController;
  state = this->fields.state;
  if ( !*(&ShopBuyItemListViewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ShopBuyItemListViewManager_TypeInfo, v4, v5);
  BuyItemKind = (ShopSceneListViewControlHelper_o *)ShopBuyItemListViewManager__GetBuyItemKind(state, 0);
  if ( !this->fields.listViewHelper )
    goto LABEL_15;
  v11 = (int)BuyItemKind;
  BuyItemKind = (ShopSceneListViewControlHelper_o *)ShopSceneListViewControlHelper__GetEventId(
                                                      this->fields.listViewHelper,
                                                      this->fields.state,
                                                      this->fields.selectedEventIndex,
                                                      v10);
  if ( !currencyInfoController )
    goto LABEL_15;
  ShopCurrencyInfoController__RefreshEventItemWindow(currencyInfoController, v11, (int32_t)BuyItemKind, 0, 0);
  BuyItemKind = this->fields.listViewHelper;
  if ( !BuyItemKind )
    goto LABEL_15;
  ShopSceneListViewControlHelper__SetListViewInvalidate(BuyItemKind, v9);
  titleInfo = (UnityEngine_Object_o *)this->fields.titleInfo;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12, v13);
  BuyItemKind = (ShopSceneListViewControlHelper_o *)UnityEngine_Object__op_Inequality(titleInfo, 0, 0);
  if ( ((unsigned __int8)BuyItemKind & 1) != 0 )
  {
    BuyItemKind = (ShopSceneListViewControlHelper_o *)this->fields.titleInfo;
    if ( !BuyItemKind )
      goto LABEL_15;
    TitleInfoControl__setDispParticleObj((TitleInfoControl_o *)BuyItemKind, 1, 0);
  }
  informationPanel = this->fields.informationPanel;
  if ( !informationPanel )
LABEL_15:
    sub_2213CDC(BuyItemKind, v9);
  informationPanel->fields._IsEnableSwitchButton_k__BackingField = 1;
  return 1;
}


void ShopRootComponent__OnGiftOpen(ShopRootComponent_o *this, const MethodInfo *method)
{
  ShopPlayVoiceComponent_o *shopPlayVoiceComponent; // x0
  struct ShopInfoIndicator_o *informationPanel; // x8

  shopPlayVoiceComponent = this->fields.shopPlayVoiceComponent;
  if ( !shopPlayVoiceComponent
    || (ShopPlayVoiceComponent__StopVoice(shopPlayVoiceComponent, method),
        (informationPanel = this->fields.informationPanel) == 0) )
  {
    sub_2213CDC(shopPlayVoiceComponent, method);
  }
  informationPanel->fields._IsEnableSwitchButton_k__BackingField = 0;
}


// local variable allocation has failed, the output may be wrong!
void ShopRootComponent__OnInitEnd(ShopRootComponent_o *this, int32_t state, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  ShopSceneListViewControlHelper_o *listViewHelper; // x0

  if ( this->fields.inputState == 1 )
  {
    listViewHelper = this->fields.listViewHelper;
    if ( !listViewHelper )
      sub_2213CDC(0, *(_QWORD *)&state);
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
  int32_t inputState; // w8
  int32_t v4; // w8

  inputState = this->fields.inputState;
  if ( inputState <= 2 )
  {
    if ( inputState )
    {
      if ( inputState == 1 )
        ShopRootComponent__OnInitEnd(this, this->fields.state, v2);
      return;
    }
    v4 = 1;
LABEL_10:
    this->fields.inputState = v4;
    return;
  }
  if ( inputState == 3 )
  {
    v4 = 4;
    goto LABEL_10;
  }
  if ( inputState == 4 )
    ShopRootComponent__OnQuitEnd(this, this->fields.state, v2);
}


// local variable allocation has failed, the output may be wrong!
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
      sub_2213CDC(0, *(_QWORD *)&state);
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
  bool IsBulk; // w8
  const MethodInfo *v17; // x3

  if ( (byte_596C8E0 & 1) == 0 )
  {
    sub_2213A60(&System_Action_int__TypeInfo);
    sub_2213A60(&Method_ShopRootComponent_OnSelectBuyItem__);
    byte_596C8E0 = 1;
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
        v6 = (_QWORD *)sub_2213A78(Method_ShopRootComponent_OnSelectBuyItem__);
      v7 = (System_Reflection_MethodBase_o *)sub_2213A44(v6, v6[4]);
      OverwriteAssetSoundName__PlaySystemSe(v7, 2, 0, 0);
      v8 = this->fields.buyItemListViewManager;
      v9 = (System_Action_int__o *)sub_2213CCC(System_Action_int__TypeInfo);
      System_Action_int____ctor(v9, (Il2CppObject *)this, (intptr_t)Method_ShopRootComponent_OnSelectBuyItem__, 0);
      if ( v8 )
      {
        ShopBuyItemListViewManager__SetMode(v8, 2, v9, 0);
        return;
      }
LABEL_20:
      sub_2213CDC(buyItemListViewManager, *(_QWORD *)&index);
    }
    state = this->fields.state;
    this->fields.inputState = 0;
    if ( state != 22 )
    {
      v11 = Method_ShopRootComponent_OnSelectBuyItem__;
      if ( (*((_BYTE *)Method_ShopRootComponent_OnSelectBuyItem__ + 83) & 2) != 0 )
        v11 = (_QWORD *)sub_2213A78(Method_ShopRootComponent_OnSelectBuyItem__);
      v12 = (System_Reflection_MethodBase_o *)sub_2213A44(v11, v11[4]);
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

  if ( (byte_596C8E3 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_2213A60(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_2213A60(&SceneJumpInfo_TypeInfo);
    sub_2213A60(&Method_ShopRootComponent_OnSelectEvent__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_9934/*"NormalEventShop"*/);
    byte_596C8E3 = 1;
  }
  v5 = Method_ShopRootComponent_OnSelectEvent__;
  if ( (*((_BYTE *)Method_ShopRootComponent_OnSelectEvent__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_2213A78(Method_ShopRootComponent_OnSelectEvent__);
  v6 = (System_Reflection_MethodBase_o *)sub_2213A44(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
  listViewHelper = this->fields.listViewHelper;
  this->fields.selectedEventIndex = index;
  if ( !listViewHelper )
    goto LABEL_17;
  eventListViewManager = (Il2CppObject *)listViewHelper->fields.eventListViewManager;
  if ( !eventListViewManager )
    goto LABEL_17;
  Item = ShopEventListViewManager__GetItem((ShopEventListViewManager_o *)eventListViewManager, index, 0);
  eventListViewManager = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !eventListViewManager )
    goto LABEL_17;
  eventListViewManager = DataManager__GetMasterData_object_(
                           (DataManager_o *)eventListViewManager,
                           (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Item )
    goto LABEL_17;
  if ( !eventListViewManager )
    goto LABEL_17;
  eventListViewManager = DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)eventListViewManager,
                           Item->fields.eventId,
                           (const MethodInfo_3F10B30 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  if ( !eventListViewManager )
    goto LABEL_17;
  if ( EventDetailEntity__IsEventShop((EventDetailEntity_o *)eventListViewManager, 0) )
  {
    eventId = Item->fields.eventId;
    v13 = (SceneJumpInfo_o *)sub_2213CCC(SceneJumpInfo_TypeInfo);
    SceneJumpInfo___ctor_48464916(v13, (System_String_o *)StringLiteral_9934/*"NormalEventShop"*/, eventId, 0);
    if ( v13 )
    {
      SceneJumpInfo__SetReturnNowScene(v13, 0);
      eventListViewManager = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( eventListViewManager )
      {
        CommonUI__CheckChangeOtherConnectMarkFromEventId((CommonUI_o *)eventListViewManager, Item->fields.eventId, 1, 0);
        eventListViewManager = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
    sub_2213CDC(eventListViewManager, v8);
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
  bool v6; // w6
  bool v7; // w7
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  const MethodInfo *v17; // x1

  if ( this->fields.inputState == 2 )
  {
    this->fields.selectedServantIds = servantList;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.selectedServantIds,
      (int32_t)servantList,
      (System_String_o *)servantList,
      (System_String_o *)commandCodeList,
      (int32_t)method,
      v5,
      v6,
      v7);
    this->fields.selectedCommandCodeIds = commandCodeList;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.selectedCommandCodeIds,
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


// local variable allocation has failed, the output may be wrong!
void ShopRootComponent__OnSelectTop(ShopRootComponent_o *this, int32_t state, const MethodInfo *method)
{
  ShopRootConstants_c *v5; // x0
  const MethodInfo *v6; // x2
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  const MethodInfo *v9; // x2

  if ( (byte_596C8DF & 1) == 0 )
  {
    sub_2213A60(&CoinRoomUtility_TypeInfo);
    sub_2213A60(&Method_ShopRootComponent_OnSelectTop__);
    sub_2213A60(&ShopRootConstants_TypeInfo);
    byte_596C8DF = 1;
  }
  if ( this->fields.inputState == 2 && this->fields.state == 1 )
  {
    if ( state == 17 )
    {
      if ( !*(&CoinRoomUtility_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo, *(_QWORD *)&state, method);
      if ( CoinRoomUtility__IsTargetQuestClear(0) )
        goto LABEL_10;
    }
    else
    {
      if ( state != 15 )
        goto LABEL_10;
      v5 = ShopRootConstants_TypeInfo;
      if ( !*(&ShopRootConstants_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo, *(_QWORD *)&state, method);
      if ( ShopRootConstants__IsSvtCostumeShopOpen((const MethodInfo *)v5) )
      {
LABEL_10:
        v7 = Method_ShopRootComponent_OnSelectTop__;
        if ( (*((_BYTE *)Method_ShopRootComponent_OnSelectTop__ + 83) & 2) != 0 )
          v7 = (_QWORD *)sub_2213A78(Method_ShopRootComponent_OnSelectTop__);
        v8 = (System_Reflection_MethodBase_o *)sub_2213A44(v7, v7[4]);
        OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0);
        ShopRootComponent__SelectMenu(this, state, v9);
        return;
      }
    }
    this->fields.inputState = 1;
    ShopRootComponent__OnInitEnd(this, 1, v6);
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
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  ShopBuyItemListViewItem_o **v18; // x22
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  ShopBuyItemListViewItem_o *v25; // x24
  struct ShopBuyBulkItemConfirmMenu_o *buyBulkItemConfirmMenu; // x20
  ShopEntity_o *Shop_k__BackingField; // x21
  System_Action_int__o *v28; // x22
  ShopBuyBulkItemConfirmMenu_o *v29; // x0
  ShopEntity_o *v30; // x1
  ShopBuyItemListViewItem_o *v31; // x2
  System_Action_int__o *v32; // x3
  struct ShopBuyItemConfirmMenu_o *buyItemConfirmMenu; // x21
  ShopEntity_o *v34; // x22
  int32_t ShopKind_k__BackingField; // w24
  System_Action_int__o *v36; // x25
  System_Action_o *v37; // x19
  ShopBuyItemConfirmMenu_o *v38; // x0
  ShopEntity_o *v39; // x1
  int32_t v40; // w2
  System_Action_int__o *v41; // x3
  int32_t v42; // w5
  System_Action_o *v43; // x6
  int32_t v44; // w7
  int32_t v45; // w20
  const MethodInfo *v46; // x2
  struct BuyStorageConfirmDialogComponent_o *buyStorageNotificationDialog; // x23
  ShopBuyItemListViewItem_o *v48; // x21
  System_Action_int__o *v49; // x22
  BuyStorageConfirmDialogComponent_o *v50; // x0
  int32_t v51; // w1
  int32_t v52; // w2
  ShopBuyItemListViewItem_o *v53; // x22
  struct ShopBuyBulkItemConfirmMenu_o *v54; // x20
  ShopEntity_o *v55; // x21
  System_Action_int__o *v56; // x23
  ShopBuyItemListViewItem_o *v57; // x20
  struct ShopBuyBulkItemConfirmMenu_o *ApSeedBulkExchangeConfirmMenu; // x21
  ShopBuyItemConfirmMenu_o *v59; // x21
  System_Action_o *v60; // x0
  intptr_t *v61; // x8
  System_Action_o *v62; // x23
  System_Action_int__o *v63; // x20
  ShopEntity_o *v64; // x22
  int32_t v65; // w4
  bool IsDisabledDisp; // w8
  _QWORD *v67; // x0
  System_Reflection_MethodBase_o *v68; // x0
  const MethodInfo *v69; // x2
  ShopSceneListViewControlHelper_o *listViewHelper; // x20
  int32_t v71; // w19
  const MethodInfo *v72; // x2
  int64_t v73; // x23
  struct BuyStorageConfirmDialogComponent_o *v74; // x23
  struct ShopBuyItemConfirmMenu_o *ApSeedExchangeConfirmMenu; // x21
  ShopEntity_o *v76; // x22
  int32_t v77; // w20
  System_Action_int__o *v78; // x23
  System_Reflection_MethodBase_o *v79; // x0
  ShopBuyItemListViewItem_o *v80; // x8
  struct ShopBuyItemConfirmMenu_o *v81; // x21
  ShopEntity_o *v82; // x22
  int32_t v83; // w23
  System_Action_int__o *v84; // x24
  System_Action_o *v85; // x19
  ShopBuyItemListViewItem_o *v86; // x20
  struct ShopBuyBulkItemConfirmMenu_o *v87; // x21
  ShopEntity_o *v88; // x22
  System_Action_int__o *v89; // x23
  ShopEntity_o *v90; // x20
  int32_t v91; // w22
  BuyStorageConfirmDialogComponent_o *buyStorageConfirmDialog; // x23
  ShopBuyItemListViewItem_o *v93; // x21
  System_Action_int__o *v94; // x22

  if ( (byte_596C8BC & 1) == 0 )
  {
    sub_2213A60(&System_Action_int__TypeInfo);
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ShopRootComponent_CloseStorageDetailCheckConfirm__);
    sub_2213A60(&Method_ShopRootComponent_OpenConfirmMenu__);
    sub_2213A60(&Method_ShopRootComponent_SelectedBuyItemConfirm__);
    sub_2213A60(&Method_ShopRootComponent___c__DisplayClass88_0__OpenConfirmMenu_b__0__);
    sub_2213A60(&Method_ShopRootComponent___c__DisplayClass88_0__OpenConfirmMenu_b__1__);
    sub_2213A60(&Method_ShopRootComponent___c__DisplayClass88_0__OpenConfirmMenu_b__2__);
    sub_2213A60(&Method_ShopRootComponent___c__DisplayClass88_0__OpenConfirmMenu_b__3__);
    sub_2213A60(&ShopRootComponent___c__DisplayClass88_0_TypeInfo);
    byte_596C8BC = 1;
  }
  v9 = sub_2213CCC(ShopRootComponent___c__DisplayClass88_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_71;
  *(_QWORD *)(v9 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 16), (int32_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = item;
  v18 = (ShopBuyItemListViewItem_o **)(v9 + 24);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 24), (int32_t)item, v19, v20, v21, v22, v23, v24);
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
      v25 = *v18;
      if ( isBulk )
      {
        if ( v25 )
        {
          buyBulkItemConfirmMenu = this->fields.buyBulkItemConfirmMenu;
          Shop_k__BackingField = v25->fields._Shop_k__BackingField;
          v28 = (System_Action_int__o *)sub_2213CCC(System_Action_int__TypeInfo);
          System_Action_int____ctor(v28, (Il2CppObject *)this, Method_ShopRootComponent_SelectedBuyItemConfirm__, 0);
          if ( buyBulkItemConfirmMenu )
          {
            v29 = buyBulkItemConfirmMenu;
            v30 = Shop_k__BackingField;
            v31 = v25;
            v32 = v28;
LABEL_35:
            v65 = 8;
LABEL_36:
            ShopBuyBulkItemConfirmMenu__Open(v29, v30, v31, v32, v65, 0);
            return;
          }
        }
LABEL_71:
        sub_2213CDC(KindByShopState, v11);
      }
      if ( !v25 )
        goto LABEL_71;
      buyItemConfirmMenu = this->fields.buyItemConfirmMenu;
      v34 = v25->fields._Shop_k__BackingField;
      ShopKind_k__BackingField = v25->fields._ShopKind_k__BackingField;
      v36 = (System_Action_int__o *)sub_2213CCC(System_Action_int__TypeInfo);
      System_Action_int____ctor(v36, (Il2CppObject *)this, Method_ShopRootComponent_SelectedBuyItemConfirm__, 0);
      v37 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(
        v37,
        (Il2CppObject *)v9,
        Method_ShopRootComponent___c__DisplayClass88_0__OpenConfirmMenu_b__1__,
        0);
      if ( !buyItemConfirmMenu )
        goto LABEL_71;
      v38 = buyItemConfirmMenu;
      v39 = v34;
      v40 = ShopKind_k__BackingField;
      v41 = v36;
      v42 = state;
      v43 = v37;
      goto LABEL_12;
    case 3:
    case 15:
      v53 = *v18;
      if ( isBulk )
      {
        if ( !v53 )
          goto LABEL_71;
        v54 = this->fields.buyBulkItemConfirmMenu;
        v55 = v53->fields._Shop_k__BackingField;
        v56 = (System_Action_int__o *)sub_2213CCC(System_Action_int__TypeInfo);
        System_Action_int____ctor(v56, (Il2CppObject *)this, Method_ShopRootComponent_SelectedBuyItemConfirm__, 0);
        if ( !v54 )
          goto LABEL_71;
        v29 = v54;
        v30 = v55;
        v31 = v53;
LABEL_34:
        v32 = v56;
        goto LABEL_35;
      }
      v59 = this->fields.buyItemConfirmMenu;
      v60 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      v61 = &Method_ShopRootComponent___c__DisplayClass88_0__OpenConfirmMenu_b__0__;
      goto LABEL_27;
    case 11:
    case 12:
      KindByShopState = BuyStorageConfirmDialogComponent__GetKindByShopState(state, 0);
      if ( !*v18 )
        goto LABEL_71;
      v45 = KindByShopState;
      KindByShopState = (int64_t)(*v18)->fields._Shop_k__BackingField;
      if ( !KindByShopState )
        goto LABEL_71;
      KindByShopState = ShopEntity__IsSoldOut((ShopEntity_o *)KindByShopState, 0);
      if ( (KindByShopState & 1) != 0 )
      {
        buyStorageNotificationDialog = this->fields.buyStorageNotificationDialog;
        v48 = *v18;
        v49 = (System_Action_int__o *)sub_2213CCC(System_Action_int__TypeInfo);
        System_Action_int____ctor(v49, (Il2CppObject *)this, Method_ShopRootComponent_SelectedBuyItemConfirm__, 0);
        if ( !buyStorageNotificationDialog )
          goto LABEL_71;
        v50 = buyStorageNotificationDialog;
        v51 = v45;
        v52 = 1;
LABEL_49:
        BuyStorageConfirmDialogComponent__NotificationDialogOpen(v50, v51, v52, v48, v49, 0);
        return;
      }
      if ( !*v18 )
        goto LABEL_71;
      KindByShopState = ShopRootComponent__GetCurrency(
                          (ShopRootComponent_o *)KindByShopState,
                          (*v18)->fields._Shop_k__BackingField,
                          v46);
      if ( !*v18 )
        goto LABEL_71;
      v73 = KindByShopState;
      KindByShopState = (int64_t)(*v18)->fields._Shop_k__BackingField;
      if ( !KindByShopState )
        goto LABEL_71;
      KindByShopState = ShopEntity__GetPrice((ShopEntity_o *)KindByShopState, 0);
      if ( v73 < (int)KindByShopState )
      {
        v74 = this->fields.buyStorageNotificationDialog;
        v48 = *v18;
        v49 = (System_Action_int__o *)sub_2213CCC(System_Action_int__TypeInfo);
        System_Action_int____ctor(v49, (Il2CppObject *)this, Method_ShopRootComponent_SelectedBuyItemConfirm__, 0);
        if ( !v74 )
          goto LABEL_71;
        v50 = v74;
        v51 = v45;
        v52 = 2;
        goto LABEL_49;
      }
      if ( isBulk )
      {
        v86 = *v18;
        if ( *v18 )
        {
          v87 = this->fields.buyBulkItemConfirmMenu;
          v88 = v86->fields._Shop_k__BackingField;
          v89 = (System_Action_int__o *)sub_2213CCC(System_Action_int__TypeInfo);
          System_Action_int____ctor(v89, (Il2CppObject *)this, Method_ShopRootComponent_SelectedBuyItemConfirm__, 0);
          if ( v87 )
          {
            v29 = v87;
            v30 = v88;
            v31 = v86;
            v32 = v89;
            v65 = 0;
            goto LABEL_36;
          }
        }
        goto LABEL_71;
      }
      buyStorageConfirmDialog = this->fields.buyStorageConfirmDialog;
      v93 = *v18;
      this->fields.buyCount = 1;
      v94 = (System_Action_int__o *)sub_2213CCC(System_Action_int__TypeInfo);
      System_Action_int____ctor(v94, (Il2CppObject *)this, Method_ShopRootComponent_CloseStorageDetailCheckConfirm__, 0);
      if ( !buyStorageConfirmDialog )
        goto LABEL_71;
      BuyStorageConfirmDialogComponent__Open(buyStorageConfirmDialog, v45, v93, 1, v94, 0);
      return;
    case 19:
      v57 = *v18;
      if ( isBulk )
      {
        if ( !v57 )
          goto LABEL_71;
        ApSeedBulkExchangeConfirmMenu = this->fields.ApSeedBulkExchangeConfirmMenu;
LABEL_32:
        v64 = v57->fields._Shop_k__BackingField;
        v56 = (System_Action_int__o *)sub_2213CCC(System_Action_int__TypeInfo);
        System_Action_int____ctor(v56, (Il2CppObject *)this, Method_ShopRootComponent_SelectedBuyItemConfirm__, 0);
        if ( !ApSeedBulkExchangeConfirmMenu )
          goto LABEL_71;
        v29 = ApSeedBulkExchangeConfirmMenu;
        v30 = v64;
        v31 = v57;
        goto LABEL_34;
      }
      if ( !v57 )
        goto LABEL_71;
      ApSeedExchangeConfirmMenu = this->fields.ApSeedExchangeConfirmMenu;
      v76 = v57->fields._Shop_k__BackingField;
      v77 = v57->fields._ShopKind_k__BackingField;
      v78 = (System_Action_int__o *)sub_2213CCC(System_Action_int__TypeInfo);
      System_Action_int____ctor(v78, (Il2CppObject *)this, Method_ShopRootComponent_SelectedBuyItemConfirm__, 0);
      if ( !ApSeedExchangeConfirmMenu )
        goto LABEL_71;
      v38 = ApSeedExchangeConfirmMenu;
      v39 = v76;
      v40 = v77;
      goto LABEL_68;
    case 21:
      if ( isBulk )
      {
        v57 = *v18;
        if ( !*v18 )
          goto LABEL_71;
        ApSeedBulkExchangeConfirmMenu = this->fields.buyBulkItemConfirmMenu;
        goto LABEL_32;
      }
      KindByShopState = (int64_t)*v18;
      if ( !*v18 )
        goto LABEL_71;
      KindByShopState = ShopBuyItemListViewItem__get_IsItemTypeRarePri((ShopBuyItemListViewItem_o *)KindByShopState, 0);
      v59 = this->fields.buyItemConfirmMenu;
      v53 = *v18;
      if ( (KindByShopState & 1) != 0 )
      {
        v60 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
        v61 = &Method_ShopRootComponent___c__DisplayClass88_0__OpenConfirmMenu_b__2__;
LABEL_27:
        v62 = v60;
        System_Action___ctor(v60, (Il2CppObject *)v9, *v61, 0);
        v63 = (System_Action_int__o *)sub_2213CCC(System_Action_int__TypeInfo);
        System_Action_int____ctor(v63, (Il2CppObject *)this, Method_ShopRootComponent_SelectedBuyItemConfirm__, 0);
        if ( v59 )
        {
          ShopBuyItemConfirmMenu__OpenAfterCheckedFree(v59, v53, v62, v63, 0);
          return;
        }
        goto LABEL_71;
      }
      if ( !v53 )
        goto LABEL_71;
      v90 = v53->fields._Shop_k__BackingField;
      v91 = v53->fields._ShopKind_k__BackingField;
      v78 = (System_Action_int__o *)sub_2213CCC(System_Action_int__TypeInfo);
      System_Action_int____ctor(v78, (Il2CppObject *)this, Method_ShopRootComponent_SelectedBuyItemConfirm__, 0);
      if ( !v59 )
        goto LABEL_71;
      v38 = v59;
      v39 = v90;
      v40 = v91;
LABEL_68:
      v41 = v78;
      v42 = 0;
      v43 = 0;
LABEL_12:
      v44 = 8;
      goto LABEL_13;
    case 22:
      KindByShopState = (int64_t)*v18;
      if ( !*v18 )
        goto LABEL_71;
      IsDisabledDisp = ShopBuyItemListViewItem__IsDisabledDisp((ShopBuyItemListViewItem_o *)KindByShopState, 0);
      v67 = Method_ShopRootComponent_OpenConfirmMenu__;
      if ( !IsDisabledDisp )
      {
        if ( (*((_BYTE *)Method_ShopRootComponent_OpenConfirmMenu__ + 83) & 2) != 0 )
          v67 = (_QWORD *)sub_2213A78(Method_ShopRootComponent_OpenConfirmMenu__);
        v79 = (System_Reflection_MethodBase_o *)sub_2213A44(v67, v67[4]);
        OverwriteAssetSoundName__PlaySystemSe(v79, 0, 0, 0);
        v80 = *v18;
        if ( !*v18 )
          goto LABEL_71;
        v81 = this->fields.buyItemConfirmMenu;
        v82 = v80->fields._Shop_k__BackingField;
        v83 = v80->fields._ShopKind_k__BackingField;
        v84 = (System_Action_int__o *)sub_2213CCC(System_Action_int__TypeInfo);
        System_Action_int____ctor(v84, (Il2CppObject *)this, Method_ShopRootComponent_SelectedBuyItemConfirm__, 0);
        v85 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
        System_Action___ctor(
          v85,
          (Il2CppObject *)v9,
          Method_ShopRootComponent___c__DisplayClass88_0__OpenConfirmMenu_b__3__,
          0);
        if ( !v81 )
          goto LABEL_71;
        v38 = v81;
        v39 = v82;
        v40 = v83;
        v41 = v84;
        v42 = 22;
        v43 = v85;
        v44 = 0;
LABEL_13:
        ShopBuyItemConfirmMenu__Open(v38, v39, v40, v41, 0, v42, v43, v44, 0);
        return;
      }
      if ( (*((_BYTE *)Method_ShopRootComponent_OpenConfirmMenu__ + 83) & 2) != 0 )
        v67 = (_QWORD *)sub_2213A78(Method_ShopRootComponent_OpenConfirmMenu__);
      v68 = (System_Reflection_MethodBase_o *)sub_2213A44(v67, v67[4]);
      OverwriteAssetSoundName__PlaySystemSe(v68, 2, 0, 0);
      listViewHelper = this->fields.listViewHelper;
      if ( !listViewHelper )
        goto LABEL_71;
      v71 = this->fields.state;
      ShopSceneListViewControlHelper__SetBuyItemListViewModify(listViewHelper, v71, v69);
      ShopSceneListViewControlHelper__SetBuyItemListViewInput(listViewHelper, v71, v72);
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
  __int64 v10; // x2

  v2 = this;
  if ( (byte_596C8E4 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_ShopDetailMaster___);
    sub_2213A60(&Method_ShopRootComponent_CloseDetaiCheckConfirm__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (ShopRootComponent_o *)sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596C8E4 = 1;
  }
  listViewHelper = v2->fields.listViewHelper;
  if ( !listViewHelper )
    goto LABEL_14;
  this = (ShopRootComponent_o *)listViewHelper->fields.buyItemListViewManager;
  if ( !this )
    goto LABEL_14;
  Item = ShopBuyItemListViewManager__GetItem((ShopBuyItemListViewManager_o *)this, v2->fields.selectedItemIndex, 0);
  this = (ShopRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_14;
  this = (ShopRootComponent_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ShopDetailMaster___);
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
  this = (ShopRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !ShopDetailEntity )
    goto LABEL_14;
  v7 = (CommonUI_o *)this;
  message = ShopDetailEntity->fields.message;
  v9 = (CommonConfirmDialog_ClickDelegate_o *)sub_2213CCC(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(v9, (Il2CppObject *)v2, Method_ShopRootComponent_CloseDetaiCheckConfirm__, 0);
  this = (ShopRootComponent_o *)BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method, v10);
  if ( !v7 )
LABEL_14:
    sub_2213CDC(this, method);
  CommonUI__OpenConfirmDialog_37373484(
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
  __int64 v8; // x1
  __int64 v9; // x2
  char v10; // w21
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  UnityEngine_Transform_o *transform; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  ShopRootConstants_c *v17; // x8
  UnityEngine_GameObject_o *v18; // x19
  UnityEngine_Vector3_o GiftButtonPos; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596C8E9 & 1) == 0 )
  {
    sub_2213A60(&ShopBuyItemListViewManager_TypeInfo);
    sub_2213A60(&ShopRootConstants_TypeInfo);
    byte_596C8E9 = 1;
  }
  shopEventItemDrawBase = (UnityEngine_GameObject_o *)this->fields.shopEventItemDrawBase;
  if ( !shopEventItemDrawBase )
    goto LABEL_19;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *, _QWORD, const MethodInfo *, double))shopEventItemDrawBase->klass[1]._1.element_class)(
    shopEventItemDrawBase,
    shopEventItemDrawBase->klass[1]._1.castClass,
    *(_QWORD *)&eventId,
    method,
    0.0);
  if ( !*(&ShopBuyItemListViewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ShopBuyItemListViewManager_TypeInfo, v8, v9);
  shopEventItemDrawBase = (UnityEngine_GameObject_o *)ShopBuyItemListViewManager__GetIsShowEventItemWindow(
                                                        state,
                                                        eventId,
                                                        0);
  if ( !this->fields.shopEventItemDrawBase )
    goto LABEL_19;
  v10 = (char)shopEventItemDrawBase;
  shopEventItemDrawBase = UnityEngine_Component__get_gameObject(
                            (UnityEngine_Component_o *)this->fields.shopEventItemDrawBase,
                            0);
  if ( !shopEventItemDrawBase )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive(shopEventItemDrawBase, v10 & 1, 0);
  shopEventItemDrawBase = (UnityEngine_GameObject_o *)this->fields.giftButtonControl;
  if ( !shopEventItemDrawBase )
    goto LABEL_19;
  shopEventItemDrawBase = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)shopEventItemDrawBase, 0);
  if ( !shopEventItemDrawBase )
    goto LABEL_19;
  transform = UnityEngine_GameObject__get_transform(shopEventItemDrawBase, 0);
  if ( !*(&ShopRootConstants_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo, v11, v12);
  GiftButtonPos = ShopRootConstants__GetGiftButtonPos(v10 & 1, state, v12);
  if ( !transform )
    goto LABEL_19;
  UnityEngine_Transform__set_localPosition(transform, GiftButtonPos, 0);
  if ( (v10 & 1) == 0 )
    return;
  shopEventItemDrawBase = (UnityEngine_GameObject_o *)this->fields.shopEventItemDrawBase;
  if ( !shopEventItemDrawBase )
LABEL_19:
    sub_2213CDC(shopEventItemDrawBase, *(_QWORD *)&state);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)shopEventItemDrawBase, 0);
  v17 = ShopRootConstants_TypeInfo;
  v18 = gameObject;
  if ( !*(&ShopRootConstants_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo, v15, v16);
    v17 = ShopRootConstants_TypeInfo;
  }
  TweenAlpha__Begin(v18, v17->static_fields->OPEN_TIME, 1.0, 0);
}


void ShopRootComponent__OpenHelp(ShopRootComponent_o *this, const MethodInfo *method)
{
  int32_t state; // w8
  Il2CppObject *v4; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  CommonUI_o *v8; // x0
  int32_t v9; // w1
  Il2CppObject *v10; // x20
  System_Collections_IEnumerator_o *v11; // x1
  Il2CppObject *Instance; // x20
  Il2CppObject *v13; // x20
  Il2CppObject *v14; // x20
  const MethodInfo *v15; // x1
  __int64 v16; // x2
  int32_t v17; // w19
  System_String_o *HelpSaveKey; // x0

  if ( (byte_596C8D6 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ShopRootComponent_OnClickHelpClose__);
    sub_2213A60(&ShopRootConstants_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596C8D6 = 1;
  }
  state = this->fields.state;
  if ( state > 5 )
  {
    switch ( state )
    {
      case 6:
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v5 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
        System_Action___ctor(v5, (Il2CppObject *)this, (intptr_t)Method_ShopRootComponent_OnClickHelpClose__, 0);
        if ( Instance )
        {
          v8 = (CommonUI_o *)Instance;
          v9 = 19;
          goto LABEL_22;
        }
        break;
      case 20:
        v14 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v5 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
        System_Action___ctor(v5, (Il2CppObject *)this, (intptr_t)Method_ShopRootComponent_OnClickHelpClose__, 0);
        if ( v14 )
        {
          v8 = (CommonUI_o *)v14;
          v9 = 1029;
          goto LABEL_22;
        }
        break;
      case 22:
        v10 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v5 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
        System_Action___ctor(v5, (Il2CppObject *)this, (intptr_t)Method_ShopRootComponent_OnClickHelpClose__, 0);
        if ( v10 )
        {
          v8 = (CommonUI_o *)v10;
          v9 = 103;
          goto LABEL_22;
        }
        break;
      default:
        return;
    }
LABEL_25:
    sub_2213CDC(v6, v7);
  }
  if ( state == 1 )
  {
    v11 = ShopRootComponent__WaitPurchase(this, method);
    UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, v11, 0);
    return;
  }
  if ( state == 3 )
  {
    v13 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v5 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, (intptr_t)Method_ShopRootComponent_OnClickHelpClose__, 0);
    if ( v13 )
    {
      v8 = (CommonUI_o *)v13;
      v9 = 20;
      goto LABEL_22;
    }
    goto LABEL_25;
  }
  if ( state != 5 )
    return;
  v4 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, (intptr_t)Method_ShopRootComponent_OnClickHelpClose__, 0);
  if ( !v4 )
    goto LABEL_25;
  v8 = (CommonUI_o *)v4;
  v9 = 47;
LABEL_22:
  CommonUI__OpenTutorialImageDialog_37396784(v8, v9, -1, v5, 0, 0, 0);
  v17 = this->fields.state;
  if ( !*(&ShopRootConstants_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo, v15, v16);
  HelpSaveKey = ShopRootConstants__GetHelpSaveKey(v17, v15);
  UnityEngine_PlayerPrefs__SetInt(HelpSaveKey, 1, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


// local variable allocation has failed, the output may be wrong!
void ShopRootComponent__OpenLimitCountSealInfoDialog(
        ShopRootComponent_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v8; // x1
  System_String_o *LimitCountSealedDialogMessage; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  SummonInfoDlgComponent_o *limitCountSealInfoDlg; // x21
  System_String_o *v13; // x20
  System_String_o *v14; // x22
  SummonInfoDlgComponent_CallbackFunc_o *v15; // x23

  if ( (byte_596C8BE & 1) == 0 )
  {
    sub_2213A60(&SummonInfoDlgComponent_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_ShopRootComponent_EndLimitCountSealInfoDialog__);
    sub_2213A60(&StringLiteral_8622/*"LIMIT_COUNT_SEALED_TITLE"*/);
    byte_596C8BE = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&svtId, *(_QWORD *)&limitCount);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !Master_object )
    goto LABEL_10;
  LimitCountSealedDialogMessage = ServantLimitImageMaster__GetLimitCountSealedDialogMessage(
                                    (ServantLimitImageMaster_o *)Master_object,
                                    svtId,
                                    limitCount,
                                    0);
  limitCountSealInfoDlg = this->fields.limitCountSealInfoDlg;
  v13 = LimitCountSealedDialogMessage;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v10, v11);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_8622/*"LIMIT_COUNT_SEALED_TITLE"*/, 0);
  v15 = (SummonInfoDlgComponent_CallbackFunc_o *)sub_2213CCC(SummonInfoDlgComponent_CallbackFunc_TypeInfo);
  SummonInfoDlgComponent_CallbackFunc___ctor(
    v15,
    (Il2CppObject *)this,
    (intptr_t)Method_ShopRootComponent_EndLimitCountSealInfoDialog__,
    0);
  if ( !limitCountSealInfoDlg )
LABEL_10:
    sub_2213CDC(Master_object, v8);
  SummonInfoDlgComponent__OpenInfoMessageDlg(limitCountSealInfoDlg, v14, v13, v15, 0);
}


void ShopRootComponent__OpenStonePurchaseMenu(ShopRootComponent_o *this, int32_t state, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  StonePurchaseMenu_CallbackFunc_o *v6; // x21
  System_Action_o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_596C8ED & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&StonePurchaseMenu_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_ShopRootComponent_CloseStonePurchaseMenu__);
    sub_2213A60(&Method_ShopRootComponent_RefreshInfo__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596C8ED = 1;
  }
  if ( state == 10 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v6 = (StonePurchaseMenu_CallbackFunc_o *)sub_2213CCC(StonePurchaseMenu_CallbackFunc_TypeInfo);
    StonePurchaseMenu_CallbackFunc___ctor(
      v6,
      (Il2CppObject *)this,
      Method_ShopRootComponent_CloseStonePurchaseMenu__,
      0);
    v7 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v7, (Il2CppObject *)this, Method_ShopRootComponent_RefreshInfo__, 0);
    if ( !Instance )
      sub_2213CDC(v8, v9);
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
  int32_t v7; // w23
  int32_t buyCount; // w21
  System_Action_int__o *v9; // x24

  v2 = this;
  if ( (byte_596C8E5 & 1) == 0 )
  {
    sub_2213A60(&System_Action_int__TypeInfo);
    this = (ShopRootComponent_o *)sub_2213A60(&Method_ShopRootComponent_CloseStorageDetailCheckConfirm__);
    byte_596C8E5 = 1;
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
        v7 = KindByShopState,
        buyCount = v2->fields.buyCount,
        v9 = (System_Action_int__o *)sub_2213CCC(System_Action_int__TypeInfo),
        System_Action_int____ctor(v9, (Il2CppObject *)v2, Method_ShopRootComponent_CloseStorageDetailCheckConfirm__, 0),
        !buyStorageConfirmDialog) )
  {
LABEL_7:
    sub_2213CDC(this, method);
  }
  BuyStorageConfirmDialogComponent__Open(buyStorageConfirmDialog, v7, Item, buyCount, v9, 0);
}


void ShopRootComponent__PlayLvExceedItemReleaseEffect(
        ShopRootComponent_o *this,
        ShopBuyItemListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x20
  BalanceConfig_c *v6; // x0
  ShopBuyItemListViewItem_o *v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  ShopBuyItemListViewItem_o **v14; // x22
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  __int64 v21; // x2
  const MethodInfo *v22; // x3
  __int64 v23; // x8
  __int64 v24; // x8
  int v25; // w21
  QuestRewardInfo_o *v26; // x22
  _QWORD *v27; // x21
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  __int64 v34; // x8
  __int64 v35; // x8
  __int64 v36; // x9
  _DWORD *v37; // x8
  int32_t buyCount; // w10
  const MethodInfo_47A29F8 *v39; // x0
  __int64 v40; // x1
  __int64 v41; // x2
  Il2CppObject *Instance; // x19
  AvalonSceneManager_c *v43; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v45; // x21

  if ( (byte_596C8C9 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&QuestRewardInfo_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_ShopRootComponent___c__DisplayClass104_0__PlayLvExceedItemReleaseEffect_b__0__);
    sub_2213A60(&ShopRootComponent___c__DisplayClass104_0_TypeInfo);
    byte_596C8C9 = 1;
  }
  v5 = sub_2213CCC(ShopRootComponent___c__DisplayClass104_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_22;
  *(_QWORD *)(v5 + 24) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 32) = item;
  v14 = (ShopBuyItemListViewItem_o **)(v5 + 32);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)item, v15, v16, v17, v18, v19, v20);
  if ( !*(_QWORD *)(v5 + 32) )
    goto LABEL_22;
  v23 = *(_QWORD *)(*(_QWORD *)(v5 + 32) + 120LL);
  if ( !v23 )
    goto LABEL_22;
  v24 = *(_QWORD *)(v23 + 56);
  if ( !v24 )
    goto LABEL_22;
  if ( !*(_DWORD *)(v24 + 24) )
LABEL_23:
    sub_2213CE4(v6);
  v25 = *(_DWORD *)(v24 + 32);
  v6 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v7, v21);
    v6 = BalanceConfig_TypeInfo;
  }
  if ( v25 == v6->static_fields->LvExceedItemId )
  {
    v26 = (QuestRewardInfo_o *)sub_2213CCC(QuestRewardInfo_TypeInfo);
    QuestRewardInfo___ctor(v26, 0);
    *(_QWORD *)(v5 + 16) = v26;
    v27 = (_QWORD *)(v5 + 16);
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)v26, v28, v29, v30, v31, v32, v33);
    v34 = *(_QWORD *)(v5 + 32);
    if ( !v34 )
      goto LABEL_22;
    v35 = *(_QWORD *)(v34 + 120);
    if ( !v35 )
      goto LABEL_22;
    v36 = *(_QWORD *)(v35 + 56);
    if ( !v36 )
      goto LABEL_22;
    if ( *(_DWORD *)(v36 + 24) )
    {
      v37 = (_DWORD *)*v27;
      if ( *v27 )
      {
        buyCount = this->fields.buyCount;
        v37[5] = *(_DWORD *)(v36 + 32);
        v37[6] = buyCount;
        v39 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
        v37[4] = 2;
        Instance = SingletonMonoBehaviour_object___get_Instance(v39);
        v43 = AvalonSceneManager_TypeInfo;
        if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v40, v41);
          v43 = AvalonSceneManager_TypeInfo;
        }
        DEFAULT_FADE_TIME = v43->static_fields->DEFAULT_FADE_TIME;
        v45 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
        System_Action___ctor(
          v45,
          (Il2CppObject *)v5,
          Method_ShopRootComponent___c__DisplayClass104_0__PlayLvExceedItemReleaseEffect_b__0__,
          0);
        if ( Instance )
        {
          CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v45, 0);
          return;
        }
      }
LABEL_22:
      sub_2213CDC(v6, v7);
    }
    goto LABEL_23;
  }
  v7 = *v14;
  if ( !*v14 )
    goto LABEL_22;
  ShopRootComponent__ShowNormalItemDialog(this, v7, v7->fields._Shop_k__BackingField, v22);
}


void ShopRootComponent__PlayServantCostumeReleaseEffect(
        ShopRootComponent_o *this,
        ShopEntity_o *shopEntity,
        const MethodInfo *method)
{
  __int64 v5; // x19
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  const MethodInfo *v20; // x2
  Il2CppObject *Instance; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  AvalonSceneManager_c *v24; // x8
  CommonUI_o *v25; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v27; // x21

  if ( (byte_596C8CF & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_ShopRootComponent___c__DisplayClass111_0__PlayServantCostumeReleaseEffect_b__0__);
    sub_2213A60(&ShopRootComponent___c__DisplayClass111_0_TypeInfo);
    byte_596C8CF = 1;
  }
  v5 = sub_2213CCC(ShopRootComponent___c__DisplayClass111_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_8;
  *(_QWORD *)(v5 + 16) = shopEntity;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)shopEntity, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)this, v14, v15, v16, v17, v18, v19);
  ShopRootComponent__SetActionBG(this, 1, v20);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v24 = AvalonSceneManager_TypeInfo;
  v25 = (CommonUI_o *)Instance;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v22, v23);
    v24 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v24->static_fields->DEFAULT_FADE_TIME;
  v27 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v27,
    (Il2CppObject *)v5,
    Method_ShopRootComponent___c__DisplayClass111_0__PlayServantCostumeReleaseEffect_b__0__,
    0);
  if ( !v25 )
LABEL_8:
    sub_2213CDC(v6, v7);
  CommonUI__maskFadeout(v25, 1, DEFAULT_FADE_TIME, v27, 0);
}


// local variable allocation has failed, the output may be wrong!
void ShopRootComponent__PlayVoiceBack(ShopRootComponent_o *this, int32_t state, const MethodInfo *method)
{
  ShopPlayVoiceComponent_o *shopPlayVoiceComponent; // x19
  System_String_o *BackVoiceMasterKey; // x0
  const MethodInfo *v6; // x1
  System_String_o *v7; // x21
  int32_t BackVoiceFlag; // w2
  const MethodInfo *v9; // x3

  shopPlayVoiceComponent = this->fields.shopPlayVoiceComponent;
  BackVoiceMasterKey = ShopPlayVoiceConstants__GetBackVoiceMasterKey(state, *(const MethodInfo **)&state);
  if ( !shopPlayVoiceComponent )
    sub_2213CDC(BackVoiceMasterKey, v6);
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
  System_String_o *v7; // x21
  int32_t EnterVoiceFlag; // w2
  const MethodInfo *v9; // x3

  shopPlayVoiceComponent = this->fields.shopPlayVoiceComponent;
  EnterVoiceMasterKey = ShopPlayVoiceConstants__GetEnterVoiceMasterKey(state, *(const MethodInfo **)&state);
  if ( !shopPlayVoiceComponent )
    sub_2213CDC(EnterVoiceMasterKey, v6);
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
    sub_2213CDC(standFigureBack, method);
  }
  ShopInfoIndicator__StopInformationChange((ShopInfoIndicator_o *)standFigureBack, method);
  this->fields.state = 0;
}


void ShopRootComponent__QuitHelp(ShopRootComponent_o *this, System_String_o *result, const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  ShopSceneListViewControlHelper_o *listViewHelper; // x0

  if ( (byte_596C8DA & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_23515/*"ok"*/);
    byte_596C8DA = 1;
  }
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_23515/*"ok"*/, 0) )
  {
    listViewHelper = this->fields.listViewHelper;
    this->fields.inputState = 4;
    if ( !listViewHelper )
      sub_2213CDC(0, v5);
    ShopSceneListViewControlHelper__SetListViewOnQuitHelp(listViewHelper, this->fields.state, v6);
  }
}


// local variable allocation has failed, the output may be wrong!
void ShopRootComponent__RefreshCurrencyInfo(ShopRootComponent_o *this, int32_t state, const MethodInfo *method)
{
  ShopCurrencyInfoController_o *currencyInfoController; // x20
  __int64 CurrencyKind; // x0
  __int64 v7; // x1

  if ( (byte_596C8B6 & 1) == 0 )
  {
    sub_2213A60(&ShopBuyItemListViewManager_TypeInfo);
    byte_596C8B6 = 1;
  }
  currencyInfoController = this->fields.currencyInfoController;
  if ( !*(&ShopBuyItemListViewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ShopBuyItemListViewManager_TypeInfo, *(_QWORD *)&state, method);
  CurrencyKind = ShopBuyItemListViewManager__GetCurrencyKind(state, 0);
  if ( !currencyInfoController )
    sub_2213CDC(CurrencyKind, v7);
  ShopCurrencyInfoController__RefreshCurrencyInfo(currencyInfoController, CurrencyKind, state, 0);
}


void ShopRootComponent__RefreshInfo(ShopRootComponent_o *this, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x20
  void *Instance; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  int32_t *v7; // x21
  UILabel_o *stoneInfoLabel; // x22
  int32_t stone; // w23
  UILabel_o *manaInfoLabel; // x22
  UILabel_o *rarePriInfoLabel; // x22
  Il2CppObject *MasterData_object; // x0
  __int64 v13; // x2
  UILabel_o *stoneFragmentsInfoLabel; // x22
  UserItemMaster_o *v15; // x20
  __int64 v16; // x1
  __int64 v17; // x2
  UILabel_o *anonymousInfoLabel; // x22
  NetworkManager_c *v19; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  UILabel_o *grailFragmentsInfoLabel; // x22
  NetworkManager_c *v23; // x0
  BalanceConfig_c *v24; // x8
  int64_t userIdNumber; // x23
  __int64 v26; // x1
  __int64 v27; // x2
  UILabel_o *apSeedInfoLabel; // x22
  NetworkManager_c *v29; // x0
  const MethodInfo *v30; // x1
  __int64 v31; // x1
  __int64 v32; // x2
  UISprite_o *apSeedIcon; // x22
  __int64 v34; // x1
  __int64 v35; // x2
  UILabel_o *purePriInfo2Label; // x22
  NetworkManager_c *v37; // x0
  __int64 v38; // x1
  __int64 v39; // x2
  NetworkManager_c *v40; // x0
  UILabel_o *purePriShopResetInfoLabel; // x21
  __int64 v42; // x1
  __int64 v43; // x2
  UILabel_o *revivalItemInfoLabel; // x21
  NetworkManager_c *v45; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v47; // x0
  UnityEngine_GameObject_o *v48; // x0
  UnityEngine_GameObject_o *v49; // x0
  const MethodInfo *v50; // x2

  if ( (byte_596C8B4 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_21297/*"img_bg_evocation"*/);
    sub_2213A60(&StringLiteral_21308/*"img_bg_pureprism_itemstock_resetticket"*/);
    sub_2213A60(&StringLiteral_21307/*"img_bg_pp"*/);
    byte_596C8B4 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_71;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !SelfUserGame )
    goto LABEL_71;
  v7 = (int32_t *)Instance;
  stoneInfoLabel = this->fields.stoneInfoLabel;
  stone = SelfUserGame->fields.stone;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v5, v6);
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_71;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserItemMaster___);
  stoneFragmentsInfoLabel = this->fields.stoneFragmentsInfoLabel;
  v15 = (UserItemMaster_o *)MasterData_object;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5, v13);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  Instance = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5, v13);
    Instance = NetworkManager_TypeInfo;
  }
  if ( !v7 )
    goto LABEL_71;
  if ( !v15 )
    goto LABEL_71;
  Instance = UserItemMaster__GetEntityDefinitely(v15, *(_QWORD *)(*((_QWORD *)Instance + 23) + 64LL), v7[23], 0);
  if ( !Instance )
    goto LABEL_71;
  Instance = LocalizationManager__GetNumberFormat(*((_DWORD *)Instance + 7), 0);
  if ( !stoneFragmentsInfoLabel )
    goto LABEL_71;
  UILabel__set_text(stoneFragmentsInfoLabel, (System_String_o *)Instance, 0);
  anonymousInfoLabel = this->fields.anonymousInfoLabel;
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  v19 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v16, v17);
    v19 = NetworkManager_TypeInfo;
  }
  Instance = UserItemMaster__GetEntityDefinitely(v15, v19->static_fields->userIdNumber, v7[24], 0);
  if ( !Instance )
    goto LABEL_71;
  Instance = LocalizationManager__GetNumberFormat(*((_DWORD *)Instance + 7), 0);
  if ( !anonymousInfoLabel )
    goto LABEL_71;
  UILabel__set_text(anonymousInfoLabel, (System_String_o *)Instance, 0);
  grailFragmentsInfoLabel = this->fields.grailFragmentsInfoLabel;
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  v23 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v20, v21);
    v23 = NetworkManager_TypeInfo;
  }
  v24 = BalanceConfig_TypeInfo;
  userIdNumber = v23->static_fields->userIdNumber;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v20, v21);
    v24 = BalanceConfig_TypeInfo;
  }
  Instance = UserItemMaster__GetEntityDefinitely(v15, userIdNumber, v24->static_fields->LvExceedDewDropItemId, 0);
  if ( !Instance )
    goto LABEL_71;
  Instance = LocalizationManager__GetNumberFormat(*((_DWORD *)Instance + 7), 0);
  if ( !grailFragmentsInfoLabel )
    goto LABEL_71;
  UILabel__set_text(grailFragmentsInfoLabel, (System_String_o *)Instance, 0);
  apSeedInfoLabel = this->fields.apSeedInfoLabel;
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  v29 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v26, v27);
    v29 = NetworkManager_TypeInfo;
  }
  Instance = UserItemMaster__GetEntityDefinitely(
               v15,
               v29->static_fields->userIdNumber,
               BalanceConfig_TypeInfo->static_fields->ApSeedItemId,
               0);
  if ( !Instance )
    goto LABEL_71;
  Instance = LocalizationManager__GetNumberFormat(*((_DWORD *)Instance + 7), 0);
  if ( !apSeedInfoLabel )
    goto LABEL_71;
  UILabel__set_text(apSeedInfoLabel, (System_String_o *)Instance, 0);
  ShopRootComponent__UpdateApLabel(this, v30);
  apSeedIcon = this->fields.apSeedIcon;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v31, v32);
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
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  v37 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v34, v35);
    v37 = NetworkManager_TypeInfo;
  }
  Instance = UserItemMaster__GetEntityDefinitely(
               v15,
               v37->static_fields->userIdNumber,
               BalanceConfig_TypeInfo->static_fields->PurePriItemId,
               0);
  if ( !Instance )
    goto LABEL_71;
  Instance = LocalizationManager__GetNumberFormat(*((_DWORD *)Instance + 7), 0);
  if ( !purePriInfo2Label )
    goto LABEL_71;
  UILabel__set_text(purePriInfo2Label, (System_String_o *)Instance, 0);
  AtlasManager__SetShopBanner_47571044(this->fields.purePriInfo2, (System_String_o *)StringLiteral_21307/*"img_bg_pp"*/, 0);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  v40 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v38, v39);
    v40 = NetworkManager_TypeInfo;
  }
  Instance = UserItemMaster__GetEntityDefinitely(v15, v40->static_fields->userIdNumber, v7[25], 0);
  if ( !Instance )
    goto LABEL_71;
  purePriShopResetInfoLabel = this->fields.purePriShopResetInfoLabel;
  Instance = LocalizationManager__GetNumberFormat(*((_DWORD *)Instance + 7), 0);
  if ( !purePriShopResetInfoLabel )
    goto LABEL_71;
  UILabel__set_text(purePriShopResetInfoLabel, (System_String_o *)Instance, 0);
  AtlasManager__SetShopBanner_47571044(this->fields.purePriShopResetInfo, (System_String_o *)StringLiteral_21308/*"img_bg_pureprism_itemstock_resetticket"*/, 0);
  Instance = this->fields.revivalItemInfo;
  if ( !Instance )
    goto LABEL_71;
  Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_71;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  revivalItemInfoLabel = this->fields.revivalItemInfoLabel;
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  v45 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v42, v43);
    v45 = NetworkManager_TypeInfo;
  }
  Instance = UserItemMaster__GetEntityDefinitely(
               v15,
               v45->static_fields->userIdNumber,
               BalanceConfig_TypeInfo->static_fields->RevivalItemId,
               0);
  if ( !Instance )
    goto LABEL_71;
  Instance = LocalizationManager__GetNumberFormat(*((_DWORD *)Instance + 7), 0);
  if ( !revivalItemInfoLabel )
    goto LABEL_71;
  UILabel__set_text(revivalItemInfoLabel, (System_String_o *)Instance, 0);
  AtlasManager__SetShopBanner_47571044(this->fields.revivalItemInfo, (System_String_o *)StringLiteral_21297/*"img_bg_evocation"*/, 0);
  Instance = this->fields.anonymousInfoLabel;
  if ( !Instance )
    goto LABEL_71;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  Instance = GameObjectExtensions__GetParent(gameObject, 0);
  if ( !Instance )
    goto LABEL_71;
  v47 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  GameObjectExtensions__SetLocalPositionX(v47, -94.0, 0);
  Instance = this->fields.grailFragmentsInfoLabel;
  if ( !Instance
    || (v48 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0),
        (Instance = GameObjectExtensions__GetParent(v48, 0)) == 0)
    || (v49 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0),
        GameObjectExtensions__SetLocalPositionX(v49, -273.0, 0),
        (Instance = this->fields.giftButtonControl) == 0) )
  {
LABEL_71:
    sub_2213CDC(Instance, v5);
  }
  GiftButtonCtrl__InvalidateGiftInfo((GiftButtonCtrl_o *)Instance, 0);
  ShopRootComponent__RefreshCurrencyInfo(this, this->fields.state, v50);
}


void ShopRootComponent__RequestEnd(ShopRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x2
  __int64 v6; // x1
  ServantSellConfirmMenu_o *servantSellConfirmMenu; // x0
  ServantSellConfirmMenu_o *v8; // x20
  System_Action_int__o *v9; // x21

  if ( (byte_596C8C7 & 1) == 0 )
  {
    sub_2213A60(&System_Action_int__TypeInfo);
    sub_2213A60(&Method_ShopRootComponent__RequestEnd_b__102_0__);
    byte_596C8C7 = 1;
  }
  this->fields.inputState = 3;
  ShopRootComponent__RefreshInfo(this, method);
  ShopRootComponent__CloseItemConfirm(this, v3);
  ShopRootComponent__CloseSellServantConfirm(this, 0, v4);
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
        v9 = (System_Action_int__o *)sub_2213CCC(System_Action_int__TypeInfo);
        System_Action_int____ctor(v9, (Il2CppObject *)this, Method_ShopRootComponent__RequestEnd_b__102_0__, 0);
        if ( v8 )
        {
          ServantSellConfirmMenu__OpenCommandCodeRemoveResult(v8, v9, 0);
          return;
        }
      }
LABEL_10:
      sub_2213CDC(servantSellConfirmMenu, v6);
    }
  }
}


void ShopRootComponent__RequestSellServant(ShopRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  NetworkManager_ResultCallbackFunc_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *Request_object; // x0
  __int64 v8; // x1

  if ( (byte_596C8D2 & 1) == 0 )
  {
    sub_2213A60(&Method_NetworkManager_getRequest_SellServantRequest___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_2213A60(&Method_ShopRootComponent_EndRequestSellServant__);
    sub_2213A60(&StringLiteral_23336/*"ng"*/);
    byte_596C8D2 = 1;
  }
  if ( this->fields.selectedServantIds )
  {
    v4 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v4,
      (Il2CppObject *)this,
      Method_ShopRootComponent_EndRequestSellServant__,
      0);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5, v6);
    Request_object = NetworkManager__getRequest_object_(
                       v4,
                       (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_SellServantRequest___);
    if ( !Request_object )
      sub_2213CDC(0, v8);
    SellServantRequest__beginRequest(
      (SellServantRequest_o *)Request_object,
      this->fields.selectedServantIds,
      this->fields.selectedCommandCodeIds,
      0);
  }
  else
  {
    ShopRootComponent__EndRequestSellServant(this, (System_String_o *)StringLiteral_23336/*"ng"*/, v2);
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
  __int64 v8; // x1
  __int64 v9; // x2
  struct ShopEntity_o *Shop_k__BackingField; // x8

  v2 = this;
  if ( (byte_596C8C6 & 1) == 0 )
  {
    sub_2213A60(&Method_NetworkManager_getRequest_PurchaseRequest___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&NetworkManager_ResultCallbackFunc_TypeInfo);
    this = (ShopRootComponent_o *)sub_2213A60(&Method_ShopRootComponent_EndRequestShop__);
    byte_596C8C6 = 1;
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
      v7 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(v7, (Il2CppObject *)v2, Method_ShopRootComponent_EndRequestShop__, 0);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v8, v9);
      this = (ShopRootComponent_o *)NetworkManager__getRequest_object_(
                                      v7,
                                      (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_PurchaseRequest___);
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
          0,
          0);
        return;
      }
LABEL_13:
      sub_2213CDC(this, method);
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
  int32_t v5; // w20
  ShopRootComponent_o *v6; // x19
  struct ShopSceneListViewControlHelper_o *listViewHelper; // x8
  ShopBuyItemListViewItem_o *Item; // x0
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x4
  ShopBuyItemListViewItem_o *v11; // x22
  ServantLimitImageMaster_o *v12; // x23
  bool v13; // w24
  __int64 v14; // x1
  __int64 v15; // x2
  int32_t TargetId; // w0
  const MethodInfo *v17; // x3
  Il2CppObject *Master_object; // x23
  Il2CppObject *Entity; // x23
  __int64 v20; // x1
  __int64 v21; // x2
  ShopRootComponent_o *v22; // x20
  Il2CppObject *v23; // x0
  System_String_o *v24; // x0
  ShopRootComponent_o *v25; // x21
  Il2CppObject *Name; // x0
  System_String_o *v27; // x21
  SummonInfoDlgComponent_o *limitCountSealInfoDlg; // x22
  SummonInfoDlgComponent_CallbackFunc_o *v29; // x23
  int klass_high; // [xsp+Ch] [xbp-34h] BYREF

  v5 = index;
  v6 = this;
  if ( (byte_596C8BB & 1) == 0 )
  {
    sub_2213A60(&SummonInfoDlgComponent_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_CombineLimitReleaseMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_ShopRootComponent_EndLimitCountSealInfoDialog__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_3747/*"COMBINE_LIMIT_SEALED_TITLE"*/);
    this = (ShopRootComponent_o *)sub_2213A60(&StringLiteral_3746/*"COMBINE_LIMIT_SEALED_MESSAGE_{0}"*/);
    byte_596C8BB = 1;
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
        this = (ShopRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( this )
        {
          this = (ShopRootComponent_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
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
                ShopRootComponent__OpenLimitCountSealInfoDialog(v6, TargetId, 0, v17);
                return;
              }
              if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v14, v15);
              Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantMaster___);
              this = (ShopRootComponent_o *)ShopBuyItemListViewItem__get_TargetId(v11, 0);
              if ( Master_object )
              {
                Entity = DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                           (int32_t)this,
                           (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                this = (ShopRootComponent_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_CombineLimitReleaseMaster___);
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
                  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v20, v21);
                  this = (ShopRootComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3747/*"COMBINE_LIMIT_SEALED_TITLE"*/, 0);
                  if ( Entity )
                  {
                    v22 = this;
                    klass_high = HIDWORD(Entity[7].klass);
                    v23 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &klass_high);
                    v24 = System_String__Format((System_String_o *)StringLiteral_3746/*"COMBINE_LIMIT_SEALED_MESSAGE_{0}"*/, v23, 0);
                    this = (ShopRootComponent_o *)LocalizationManager__Get(v24, 0);
                    if ( v11->fields._Shop_k__BackingField )
                    {
                      v25 = this;
                      Name = (Il2CppObject *)ShopEntity__getName(v11->fields._Shop_k__BackingField, 0);
                      v27 = System_String__Format((System_String_o *)v25, Name, 0);
                      limitCountSealInfoDlg = v6->fields.limitCountSealInfoDlg;
                      v29 = (SummonInfoDlgComponent_CallbackFunc_o *)sub_2213CCC(SummonInfoDlgComponent_CallbackFunc_TypeInfo);
                      SummonInfoDlgComponent_CallbackFunc___ctor(
                        v29,
                        (Il2CppObject *)v6,
                        (intptr_t)Method_ShopRootComponent_EndLimitCountSealInfoDialog__,
                        0);
                      if ( limitCountSealInfoDlg )
                      {
                        SummonInfoDlgComponent__OpenInfoMessageDlg(
                          limitCountSealInfoDlg,
                          (System_String_o *)v22,
                          v27,
                          v29,
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
    sub_2213CDC(this, *(_QWORD *)&index);
  }
}


void ShopRootComponent__SelectMenu(ShopRootComponent_o *this, int32_t state, const MethodInfo *method)
{
  __int64 v5; // x20
  ShopPlayVoiceComponent_o *shopPlayVoiceComponent; // x0
  const MethodInfo *v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  ShopRootComponent_o *v14; // x0
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x2
  __int64 v17; // x1
  int32_t v18; // w19
  System_Action_o *v19; // x21
  ShopRootComponent_o *v20; // x0
  const MethodInfo *v21; // x3

  if ( (byte_596C8B7 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&CoinRoomUtility_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_2213A60(&Method_ShopRootComponent___c__DisplayClass83_0__SelectMenu_b__0__);
    sub_2213A60(&ShopRootComponent___c__DisplayClass83_0_TypeInfo);
    byte_596C8B7 = 1;
  }
  v5 = sub_2213CCC(ShopRootComponent___c__DisplayClass83_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_19;
  *(_QWORD *)(v5 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v5 + 24) = state;
  if ( ShopRootComponent__CheckServerLimitTime(v14, state, v15) )
  {
    v17 = *(unsigned int *)(v5 + 24);
    if ( (_DWORD)v17 == 17 )
    {
      if ( !*(&CoinRoomUtility_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo, v17, v16);
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
            shopPlayVoiceComponent = (ShopPlayVoiceComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
            if ( shopPlayVoiceComponent )
            {
              AvalonSceneManager__pushScene((AvalonSceneManager_o *)shopPlayVoiceComponent, 90, 1, 0, 0);
              return;
            }
          }
        }
LABEL_19:
        sub_2213CDC(shopPlayVoiceComponent, v7);
      }
      LODWORD(v17) = *(_DWORD *)(v5 + 24);
    }
    if ( (_DWORD)v17 == 15 )
    {
      v18 = 15;
    }
    else
    {
      ShopRootComponent__PlayVoiceEnter(this, v17, v16);
      v18 = *(_DWORD *)(v5 + 24);
    }
    v19 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v19, (Il2CppObject *)v5, Method_ShopRootComponent___c__DisplayClass83_0__SelectMenu_b__0__, 0);
    ShopRootComponent__SetFadeOut(v20, v18, v19, v21);
  }
}


void ShopRootComponent__SelectSellServantConfirm(ShopRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  ServantSellMenu_o *servantSellMenu; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  int32_t tabKind; // w21
  struct System_Int64_array *selectedServantIds; // x22
  bool IsSellEquipedCmdCodeLastServant; // w2
  ServantSellConfirmMenu_o *servantSellConfirmMenu; // x8
  System_Int64_array *v16; // x21
  ServantSellConfirmMenu_o *v17; // x22
  System_Action_int__o *v18; // x19
  struct ServantSellConfirmMenu_o *v19; // x21
  int32_t v20; // w20
  System_Action_int__o *v21; // x22
  ServantSellConfirmMenu_o *v22; // x0
  int32_t v23; // w1
  System_Int64_array *v24; // x2
  System_Int64_array *v25; // x3
  System_Action_int__o *v26; // x4
  System_Action_o *v27; // x5
  struct ServantSellConfirmMenu_o *v28; // x21
  int32_t v29; // w20
  struct System_Int64_array *v30; // x22
  struct System_Int64_array *selectedCommandCodeIds; // x23
  System_Action_int__o *v32; // x24
  System_Action_o *v33; // x25

  if ( (byte_596C8C5 & 1) == 0 )
  {
    sub_2213A60(&System_Action_int__TypeInfo);
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ShopRootComponent_SellServantConfirm__);
    sub_2213A60(&Method_ShopRootComponent_UpdateSellServants__);
    sub_2213A60(&Method_ShopRootComponent___c__DisplayClass100_0__SelectSellServantConfirm_b__0__);
    sub_2213A60(&ShopRootComponent___c__DisplayClass100_0_TypeInfo);
    byte_596C8C5 = 1;
  }
  v3 = sub_2213CCC(ShopRootComponent___c__DisplayClass100_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_18;
  *(_QWORD *)(v3 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 16), (int32_t)this, v6, v7, v8, v9, v10, v11);
  if ( this->fields.inputState == 2 )
  {
    servantSellMenu = this->fields.servantSellMenu;
    if ( !servantSellMenu )
      goto LABEL_18;
    tabKind = servantSellMenu->fields.tabKind;
    selectedServantIds = this->fields.selectedServantIds;
    IsSellEquipedCmdCodeLastServant = ServantSellMenu__get_IsSellEquipedCmdCodeLastServant(servantSellMenu, 0);
    servantSellMenu = (ServantSellMenu_o *)ServantSellConfirmMenu__GetServantSellConfirmKindOnOpenConfirm(
                                             tabKind,
                                             selectedServantIds == 0,
                                             IsSellEquipedCmdCodeLastServant,
                                             0);
    servantSellConfirmMenu = this->fields.servantSellConfirmMenu;
    *(_DWORD *)(v3 + 24) = (_DWORD)servantSellMenu;
    if ( !servantSellConfirmMenu )
      goto LABEL_18;
    ServantSellConfirmMenu__Init(servantSellConfirmMenu, 0);
    v16 = this->fields.selectedServantIds;
    if ( v16 )
    {
      v17 = this->fields.servantSellConfirmMenu;
      if ( *(_DWORD *)(v3 + 24) == 4 )
      {
        v18 = (System_Action_int__o *)sub_2213CCC(System_Action_int__TypeInfo);
        System_Action_int____ctor(
          v18,
          (Il2CppObject *)v3,
          Method_ShopRootComponent___c__DisplayClass100_0__SelectSellServantConfirm_b__0__,
          0);
        if ( v17 )
        {
          ServantSellConfirmMenu__OpenSellEquippedLastSvtWarning(v17, 4, v16, v18, 0);
          return;
        }
LABEL_18:
        sub_2213CDC(servantSellMenu, v5);
      }
      if ( !v17 )
        goto LABEL_18;
      ServantSellConfirmMenu__Init(this->fields.servantSellConfirmMenu, 0);
      v28 = this->fields.servantSellConfirmMenu;
      v29 = *(_DWORD *)(v3 + 24);
      v30 = this->fields.selectedServantIds;
      selectedCommandCodeIds = this->fields.selectedCommandCodeIds;
      v32 = (System_Action_int__o *)sub_2213CCC(System_Action_int__TypeInfo);
      System_Action_int____ctor(v32, (Il2CppObject *)this, Method_ShopRootComponent_SellServantConfirm__, 0);
      v33 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v33, (Il2CppObject *)this, Method_ShopRootComponent_UpdateSellServants__, 0);
      if ( !v28 )
        goto LABEL_18;
      v22 = v28;
      v23 = v29;
      v24 = v30;
      v25 = selectedCommandCodeIds;
      v26 = v32;
      v27 = v33;
    }
    else
    {
      v19 = this->fields.servantSellConfirmMenu;
      v20 = *(_DWORD *)(v3 + 24);
      v21 = (System_Action_int__o *)sub_2213CCC(System_Action_int__TypeInfo);
      System_Action_int____ctor(v21, (Il2CppObject *)this, Method_ShopRootComponent_SellServantConfirm__, 0);
      if ( !v19 )
        goto LABEL_18;
      v22 = v19;
      v23 = v20;
      v24 = 0;
      v25 = 0;
      v26 = v21;
      v27 = 0;
    }
    ServantSellConfirmMenu__Open(v22, v23, v24, v25, v26, v27, 0);
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
  if ( (byte_596C8C1 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ShopDetailMaster___);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    sub_2213A60(&ShopRootComponent_TypeInfo);
    this = (ShopRootComponent_o *)sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596C8C1 = 1;
  }
  if ( v4->fields.inputState == 2 )
  {
    v4->fields.buyCount = buyCount;
    v4->fields.inputState = 3;
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
    if ( (unsigned int)(state - 13) <= 0xFFFFFFFD )
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
          this = (ShopRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            this = (ShopRootComponent_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)this,
                                            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ShopDetailMaster___);
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
                           (const MethodInfo_3F92B84 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__) )
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
      sub_2213CDC(this, *(_QWORD *)&buyCount);
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
    ShopRootComponent__CloseSellServantConfirm(this, 1, method);
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
      sub_2213CDC(servantSellConfirmMenu, *(_QWORD *)&count);
    }
    ServantSellConfirmMenu__Init(servantSellConfirmMenu, 0);
    ShopRootComponent__SelectSellServantConfirm(this, v5);
  }
  else
  {
    ShopRootComponent__CloseSellServantConfirm(this, 1, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void ShopRootComponent__SetActionBG(ShopRootComponent_o *this, bool isEnable, const MethodInfo *method)
{
  UnityEngine_Object_o *actionBg; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_596C8F1 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C8F1 = 1;
  }
  actionBg = (UnityEngine_Object_o *)this->fields.actionBg;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isEnable, method);
  if ( UnityEngine_Object__op_Inequality(actionBg, 0, 0) )
  {
    v7 = this->fields.actionBg;
    if ( !v7 )
      sub_2213CDC(0, v6);
    UnityEngine_GameObject__SetActive(v7, isEnable, 0);
  }
}


void ShopRootComponent__SetFadeIn(ShopRootComponent_o *this, int32_t state, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  CommonUI_o *v7; // x19

  if ( (byte_596C8BA & 1) == 0 )
  {
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596C8BA = 1;
  }
  if ( state == 15 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v7 = (CommonUI_o *)Instance;
    if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v5, v6);
    if ( !v7 )
      sub_2213CDC(Instance, v5);
    CommonUI__maskFadein(v7, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0);
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
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  __int64 v15; // x1
  __int64 v16; // x2
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v18; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v20; // x21

  if ( (byte_596C8B9 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_ShopRootComponent___c__DisplayClass85_0__SetFadeOut_b__0__);
    sub_2213A60(&ShopRootComponent___c__DisplayClass85_0_TypeInfo);
    byte_596C8B9 = 1;
  }
  v6 = sub_2213CCC(ShopRootComponent___c__DisplayClass85_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  if ( !v6 )
    goto LABEL_10;
  *(_QWORD *)(v6 + 16) = endFade;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v6 + 16), (int32_t)endFade, v9, v10, v11, v12, v13, v14);
  if ( state == 15 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v18 = AvalonSceneManager_TypeInfo;
    if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v15, v16);
      v18 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v18->static_fields->DEFAULT_FADE_TIME;
    v20 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v20, (Il2CppObject *)v6, Method_ShopRootComponent___c__DisplayClass85_0__SetFadeOut_b__0__, 0);
    if ( Instance )
    {
      CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v20, 0);
      return;
    }
LABEL_10:
    sub_2213CDC(v7, v8);
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

  if ( (byte_596C8E8 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    sub_2213A60(&ShopRootComponent_TypeInfo);
    byte_596C8E8 = 1;
  }
  if ( entity && (decide || entity->fields.frequencyType != 1) )
  {
    shopDetailCheckList = ShopRootComponent_TypeInfo->static_fields->shopDetailCheckList;
    if ( !shopDetailCheckList )
      sub_2213CDC(0, entity);
    System_Collections_Generic_Dictionary_int__int___set_Item(
      shopDetailCheckList,
      entity->fields.shopId,
      1,
      (const MethodInfo_3F92C0C *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
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
    sub_2213CDC(informationPanel, isDisp);
  }
}


void ShopRootComponent__SetupExRoomShopButton(ShopRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *exRoomShopButtonRoot; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  UISprite_o *v7; // x19

  if ( (byte_596C8DD & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_18251/*"btn_exroom_03"*/);
    byte_596C8DD = 1;
  }
  exRoomShopButtonRoot = (UnityEngine_Object_o *)this->fields.exRoomShopButtonRoot;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( !UnityEngine_Object__op_Equality(exRoomShopButtonRoot, 0, 0) )
  {
    v7 = this->fields.exRoomShopButtonRoot;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v5, v6);
    AtlasManager__SetBanner(v7, (System_String_o *)StringLiteral_18251/*"btn_exroom_03"*/, 0);
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
  System_String_o *RequestResultDialogNumMessageNormal; // x21
  RequestResultDialog_o *requestResultDialog; // x23
  System_Action_bool__o *v17; // x24
  RequestResultDialog_o *v18; // x21
  System_Action_bool__o *v19; // x22

  if ( (byte_596C8CA & 1) == 0 )
  {
    sub_2213A60(&System_Action_bool__TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_2213A60(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_2213A60(&Method_ShopRootComponent_OnEndItemDialog__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596C8CA = 1;
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
    RequestResultDialogMessageNormal = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( RequestResultDialogMessageNormal )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)RequestResultDialogMessageNormal,
                            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ItemMaster___);
      RequestResultDialogMessageNormal = (System_String_o *)ShopEntity__get_TargetId(entity, 0);
      if ( MasterData_object )
      {
        v11 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                (int32_t)RequestResultDialogMessageNormal,
                (const MethodInfo_3F10B30 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
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
        v17 = (System_Action_bool__o *)sub_2213CCC(System_Action_bool__TypeInfo);
        System_Action_bool____ctor(v17, (Il2CppObject *)this, Method_ShopRootComponent_OnEndItemDialog__, 0);
        if ( requestResultDialog )
        {
          RequestResultDialog__Open(
            requestResultDialog,
            v9,
            RequestResultDialogNumMessageNormal,
            RequestResultDialogItemMessageNormal,
            v17,
            0);
          return;
        }
      }
    }
LABEL_11:
    sub_2213CDC(RequestResultDialogMessageNormal, v8);
  }
  v18 = this->fields.requestResultDialog;
  v19 = (System_Action_bool__o *)sub_2213CCC(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v19, (Il2CppObject *)this, Method_ShopRootComponent_OnEndItemDialog__, 0);
  if ( !v18 )
    goto LABEL_11;
  RequestResultDialog__Open_41777812(v18, (System_String_o *)StringLiteral_1/*""*/, v9, v19, -1, 0);
}


void ShopRootComponent__ShowSetItemDialog(ShopRootComponent_o *this, ShopEntity_o *entity, const MethodInfo *method)
{
  System_String_o *RequestResultDialogMessage; // x0
  RequestResultDialog_o *requestResultDialog; // x21
  System_String_o *v7; // x20
  System_Action_bool__o *v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_596C8CB & 1) == 0 )
  {
    sub_2213A60(&System_Action_bool__TypeInfo);
    sub_2213A60(&Method_ShopRootComponent_OnEndItemDialog__);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596C8CB = 1;
  }
  RequestResultDialogMessage = ShopRequestResultDialogMessageMaker__GetRequestResultDialogMessage(
                                 entity,
                                 this->fields.buyCount,
                                 method);
  requestResultDialog = this->fields.requestResultDialog;
  v7 = RequestResultDialogMessage;
  v8 = (System_Action_bool__o *)sub_2213CCC(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v8, (Il2CppObject *)this, Method_ShopRootComponent_OnEndItemDialog__, 0);
  if ( !requestResultDialog )
    sub_2213CDC(v9, v10);
  RequestResultDialog__Open_41777812(requestResultDialog, (System_String_o *)StringLiteral_1/*""*/, v7, v8, -1, 0);
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

  if ( (byte_596C8CC & 1) == 0 )
  {
    sub_2213A60(&System_Action_int__TypeInfo);
    sub_2213A60(&Method_ShopRootComponent_OnEndStorageDialog__);
    byte_596C8CC = 1;
  }
  state = this->fields.state;
  if ( state == 12 )
  {
    buyStorageResultDialog = this->fields.buyStorageResultDialog;
    v7 = (System_Action_int__o *)sub_2213CCC(System_Action_int__TypeInfo);
    System_Action_int____ctor(v7, (Il2CppObject *)this, Method_ShopRootComponent_OnEndStorageDialog__, 0);
    if ( buyStorageResultDialog )
    {
      v10 = buyStorageResultDialog;
      v11 = 1;
      goto LABEL_9;
    }
LABEL_11:
    sub_2213CDC(v8, v9);
  }
  if ( state == 11 )
  {
    v6 = this->fields.buyStorageResultDialog;
    v7 = (System_Action_int__o *)sub_2213CCC(System_Action_int__TypeInfo);
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
  __int64 v6; // x1
  __int64 v7; // x2
  int32_t Act; // w20

  if ( (byte_596C8B5 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    byte_596C8B5 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame )
    goto LABEL_8;
  apInfoLabel = this->fields.apInfoLabel;
  Act = UserGameEntity__getAct(SelfUserGame, 0);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6, v7);
  SelfUserGame = (UserGameEntity_o *)LocalizationManager__GetNumberFormat(Act, 0);
  if ( !apInfoLabel )
LABEL_8:
    sub_2213CDC(SelfUserGame, v4);
  UILabel__set_text(apInfoLabel, (System_String_o *)SelfUserGame, 0);
}


void ShopRootComponent__UpdateGiftBadgeNum(ShopRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *giftButtonControl; // x20
  __int64 v5; // x1
  GiftButtonCtrl_o *v6; // x0

  if ( (byte_596C8F2 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C8F2 = 1;
  }
  giftButtonControl = (UnityEngine_Object_o *)this->fields.giftButtonControl;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(giftButtonControl, 0, 0) )
  {
    v6 = this->fields.giftButtonControl;
    if ( !v6 )
      sub_2213CDC(0, v5);
    GiftButtonCtrl__InvalidateGiftInfo(v6, 0);
  }
}


void ShopRootComponent__UpdateSellServants(ShopRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  ShopSceneListViewControlHelper_o *listViewHelper; // x19
  int32_t state; // w20
  const MethodInfo *v5; // x2

  listViewHelper = this->fields.listViewHelper;
  if ( !listViewHelper )
    sub_2213CDC(this, method);
  state = this->fields.state;
  ShopSceneListViewControlHelper__SetSellServantMenuModify(
    this->fields.listViewHelper,
    state,
    this->fields.selectedServantIds,
    this->fields.selectedCommandCodeIds,
    v2);
  ShopSceneListViewControlHelper__SetSellServantMenuInput(listViewHelper, state, v5);
}


System_Collections_IEnumerator_o *ShopRootComponent__WaitPurchase(ShopRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_596C8D7 & 1) == 0 )
  {
    sub_2213A60(&ShopRootComponent__WaitPurchase_d__125_TypeInfo);
    byte_596C8D7 = 1;
  }
  v3 = sub_2213CCC(ShopRootComponent__WaitPurchase_d__125_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


void ShopRootComponent___EndRequestShop_b__103_0(ShopRootComponent_o *this, bool isDecide, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x1

  if ( (byte_596C8F8 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596C8F8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v5);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0);
  ShopRootComponent__RequestEnd(this, v6);
}


// local variable allocation has failed, the output may be wrong!
void ShopRootComponent___Init_b__78_0(ShopRootComponent_o *this, int32_t stoneCount, const MethodInfo *method)
{
  UILabel_o *stoneInfoLabel; // x20
  System_String_o *NumberFormat; // x0
  __int64 v7; // x1

  if ( (byte_596C8F7 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    byte_596C8F7 = 1;
  }
  stoneInfoLabel = this->fields.stoneInfoLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&stoneCount, method);
  NumberFormat = LocalizationManager__GetNumberFormat(stoneCount, 0);
  if ( !stoneInfoLabel )
    sub_2213CDC(NumberFormat, v7);
  UILabel__set_text(stoneInfoLabel, NumberFormat, 0);
}


void ShopRootComponent___RequestEnd_b__102_0(ShopRootComponent_o *this, int32_t count, const MethodInfo *method)
{
  __int64 v4; // x1
  ServantSellConfirmMenu_o *servantSellConfirmMenu; // x0

  ShopRootComponent__PlayVoiceBack(this, this->fields.state, method);
  servantSellConfirmMenu = this->fields.servantSellConfirmMenu;
  if ( !servantSellConfirmMenu
    || (ServantSellConfirmMenu__Close(servantSellConfirmMenu, 0),
        (servantSellConfirmMenu = this->fields.servantSellConfirmMenu) == 0) )
  {
    sub_2213CDC(servantSellConfirmMenu, v4);
  }
  ServantSellConfirmMenu__ClearCommandCodeRemoveResult(servantSellConfirmMenu, 0);
}


void ShopRootComponent____n__0(ShopRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent__beginStartUp_48466984((SceneRootComponent_o *)this, 0);
}


void ShopRootComponent___beginInitialize_b__72_0(ShopRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *titleInfo; // x20
  __int64 v5; // x1
  TitleInfoControl_o *v6; // x0

  if ( (byte_596C8F6 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C8F6 = 1;
  }
  titleInfo = (UnityEngine_Object_o *)this->fields.titleInfo;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(titleInfo, 0, 0) )
  {
    v6 = this->fields.titleInfo;
    if ( !v6 )
      sub_2213CDC(0, v5);
    TitleInfoControl__setDispParticleObj(v6, 0, 0);
  }
}


void ShopRootComponent___beginStartUp_b__73_0(ShopRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  ShopRootComponent__SetupExRoomShopButton(this, method);
  ShopRootComponent__RefreshInfo(this, v3);
}


void ShopRootComponent__beginFinish(ShopRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ShopTopListViewManager_o *topListViewManager; // x0

  ShopRootComponent__Quit(this, method);
  topListViewManager = this->fields.topListViewManager;
  if ( !topListViewManager )
    sub_2213CDC(0, v3);
  ShopTopListViewManager__ReleaseCoinRoomAsset(topListViewManager, 0);
}


void ShopRootComponent__beginInitialize(ShopRootComponent_o *this, const MethodInfo *method)
{
  ShopTopListViewManager_o *topListViewManager; // x0
  ShopRootComponent_o *v4; // x0
  const MethodInfo *v5; // x1
  struct ShopInfoIndicator_o *informationPanel; // x8
  struct GiftButtonCtrl_o *giftButtonControl; // x20
  System_Action_o *v8; // x21
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct GiftButtonCtrl_o *v15; // x20
  System_Func_bool__bool__o *v16; // x21
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  __int64 v23; // x1
  __int64 v24; // x2
  UnityEngine_Object_o *exRoomShopButtonRoot; // x20
  struct GiftButtonCtrl_o *v26; // x20
  System_Action_o *v27; // x21
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7

  if ( (byte_596C8AF & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&System_Func_bool__bool__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_ShopRootComponent_OnGiftClose__);
    sub_2213A60(&Method_ShopRootComponent_OnGiftOpen__);
    sub_2213A60(&Method_ShopRootComponent__beginInitialize_b__72_0__);
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_596C8AF = 1;
  }
  topListViewManager = this->fields.topListViewManager;
  if ( !topListViewManager )
    goto LABEL_19;
  ShopTopListViewManager__LoadCoinRoomAsset(topListViewManager, 0);
  ShopRootComponent__CreateShopDetailCheckList(v4, v5);
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0);
  SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 7, 30, 0);
  topListViewManager = (ShopTopListViewManager_o *)this->fields.eventBanner;
  if ( !topListViewManager )
    goto LABEL_19;
  EventBannerComponent__SetBanner((EventBannerComponent_o *)topListViewManager, 0);
  topListViewManager = (ShopTopListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !topListViewManager )
    goto LABEL_19;
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)topListViewManager, (SceneRootComponent_o *)this, 0);
  topListViewManager = (ShopTopListViewManager_o *)this->fields.helpListViewManager;
  if ( !topListViewManager )
    goto LABEL_19;
  ShopHelpListViewManager__LoadBaseSprite((ShopHelpListViewManager_o *)topListViewManager, method);
  topListViewManager = (ShopTopListViewManager_o *)this->fields.informationPanel;
  if ( !topListViewManager )
    goto LABEL_19;
  ShopInfoIndicator__StartInformationChange((ShopInfoIndicator_o *)topListViewManager, method);
  informationPanel = this->fields.informationPanel;
  if ( !informationPanel )
    goto LABEL_19;
  giftButtonControl = this->fields.giftButtonControl;
  informationPanel->fields._IsEnableSwitchButton_k__BackingField = 1;
  v8 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_ShopRootComponent_OnGiftOpen__, 0);
  if ( !giftButtonControl )
    goto LABEL_19;
  giftButtonControl->fields.OnGiftOpenAdditionalAction = v8;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&giftButtonControl->fields.OnGiftOpenAdditionalAction,
    (int32_t)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v15 = this->fields.giftButtonControl;
  v16 = (System_Func_bool__bool__o *)sub_2213CCC(System_Func_bool__bool__TypeInfo);
  System_Func_bool__bool____ctor(v16, (Il2CppObject *)this, Method_ShopRootComponent_OnGiftClose__, 0);
  if ( !v15 )
    goto LABEL_19;
  v15->fields.OnGiftCloseAdditionalAction = v16;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v15->fields.OnGiftCloseAdditionalAction,
    (int32_t)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  exRoomShopButtonRoot = (UnityEngine_Object_o *)this->fields.exRoomShopButtonRoot;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23, v24);
  if ( UnityEngine_Object__op_Inequality(exRoomShopButtonRoot, 0, 0) )
  {
    topListViewManager = (ShopTopListViewManager_o *)this->fields.exRoomShopButtonRoot;
    if ( topListViewManager )
    {
      topListViewManager = (ShopTopListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)topListViewManager,
                                                         0);
      if ( topListViewManager )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)topListViewManager, 0, 0);
        goto LABEL_17;
      }
    }
LABEL_19:
    sub_2213CDC(topListViewManager, method);
  }
LABEL_17:
  v26 = this->fields.giftButtonControl;
  v27 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v27, (Il2CppObject *)this, Method_ShopRootComponent__beginInitialize_b__72_0__, 0);
  if ( !v26 )
    goto LABEL_19;
  v26->fields._OnGiftInterfaceOpenFadedOutAction_k__BackingField = v27;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v26->fields._OnGiftInterfaceOpenFadedOutAction_k__BackingField,
    (int32_t)v27,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
}


void ShopRootComponent__beginResume(ShopRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent__beginResume_48467168((SceneRootComponent_o *)this, 0);
}


void ShopRootComponent__beginStartUp(ShopRootComponent_o *this, Il2CppObject *data, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  Il2CppClass *v16; // x8
  __int64 naturalAligment; // x9
  int32_t v18; // w1
  TitleInfoControl_o *titleInfo; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  struct SceneJumpInfo_o *jumpInfo; // x8
  System_String_o *returnSceneName; // x20
  System_String_o *SceneName; // x0
  bool v25; // w0
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  __int64 v31; // x2
  struct ShopPlayVoiceComponent_o *shopPlayVoiceComponent; // x8
  __int64 v33; // x1
  __int64 v34; // x2
  System_String_o *MainBgmName; // x20
  System_Action_o *v36; // x20
  __int64 v37; // x1
  __int64 v38; // x2
  const MethodInfo *v39; // x1
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  struct ShopPlayVoiceComponent_o *v46; // x20
  struct StandFigureBack_o *standFigureBack; // x1
  int32_t defaultFaceId; // w21
  void *v49; // d8
  MissionNaviTransitionBoardItem_o *p_standFigureBack; // x20
  __int64 v51; // x2
  UITexture_o *backgroundTexture; // x20
  System_String_o *BG_ROOT; // x20
  Il2CppObject *v54; // x0
  System_String_o *v55; // x0
  ExUITexture_o *v56; // x21
  System_String_o *v57; // x20
  System_Action_o *v58; // x22
  __int64 v59; // x1
  __int64 v60; // x2
  ShopRootConstants_c *v61; // x0
  struct ShopRootConstants_StaticFields *static_fields; // x8
  System_String_o *v63; // x20
  Il2CppObject *v64; // x0
  ExUITexture_o *v65; // x19
  int32_t DEFAULT_BG_ID; // [xsp+8h] [xbp-48h] BYREF
  int32_t bgImageId; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_596C8B0 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&BgmManager_TypeInfo);
    sub_2213A60(&FSUtility_TypeInfo);
    sub_2213A60(&SceneJumpInfo_TypeInfo);
    sub_2213A60(&SceneList_TypeInfo);
    sub_2213A60(&Method_ShopRootComponent_LoadBanner__);
    sub_2213A60(&Method_ShopRootComponent__beginStartUp_b__73_0__);
    sub_2213A60(&ShopRootConstants_TypeInfo);
    sub_2213A60(&SoundManager_TypeInfo);
    byte_596C8B0 = 1;
  }
  this->fields.jumpInfo = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.jumpInfo,
    0,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.isFromCoinRoom = 0;
  if ( data )
  {
    v16 = (Il2CppClass *)SceneJumpInfo_TypeInfo;
    naturalAligment = SceneJumpInfo_TypeInfo->_2.naturalAligment;
    if ( data->klass->_2.naturalAligment >= (unsigned int)naturalAligment
      && (SceneJumpInfo_c *)data->klass->_2.typeHierarchy[naturalAligment - 1] == SceneJumpInfo_TypeInfo )
    {
      this->fields.jumpInfo = (struct SceneJumpInfo_o *)data;
      if ( data->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      {
        if ( data->klass->_2.typeHierarchy[naturalAligment - 1] == v16 )
          v18 = (int)data;
        else
          v18 = 0;
      }
      else
      {
        v18 = 0;
      }
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.jumpInfo, v18, v10, v11, v12, v13, v14, v15);
      jumpInfo = this->fields.jumpInfo;
      if ( !jumpInfo )
        goto LABEL_41;
      returnSceneName = jumpInfo->fields.returnSceneName;
      if ( !*(&SceneList_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(SceneList_TypeInfo, v20, v21);
      SceneName = SceneList__getSceneName(90, 0);
      v25 = System_String__op_Equality(returnSceneName, SceneName, 0);
      this->fields.isFromCoinRoom = v25;
      if ( v25 )
      {
        this->fields.jumpInfo = 0;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.jumpInfo, 0, v10, v26, v27, v28, v29, v30);
      }
    }
  }
  ShopRootComponent__SetActionBG(this, 0, (const MethodInfo *)v10);
  if ( !this->fields.isFromCoinRoom )
  {
    shopPlayVoiceComponent = this->fields.shopPlayVoiceComponent;
    if ( !shopPlayVoiceComponent )
      goto LABEL_41;
    shopPlayVoiceComponent->fields.voicePlayOnce = 0;
    shopPlayVoiceComponent->fields.isPlayingVoice = 0;
  }
  if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v20, v31);
  MainBgmName = BgmManager__GetMainBgmName(0, 0);
  if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v33, v34);
  SoundManager__playBgm(MainBgmName, 0);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_41;
  TitleInfoControl__setTitleInfo(titleInfo, this->fields.myFSM, 1, 0, 41, 0);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_41;
  TitleInfoControl__SetHelpBtn(titleInfo, 0, 0);
  v36 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v36, (Il2CppObject *)this, Method_ShopRootComponent__beginStartUp_b__73_0__, 0);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v37, v38);
  AtlasManager__LoadBanner(v36, 1, 0);
  ShopRootComponent__setDispInfo(this, v39);
  v46 = this->fields.shopPlayVoiceComponent;
  if ( !v46 )
    goto LABEL_41;
  standFigureBack = this->fields.standFigureBack;
  defaultFaceId = this->fields.defaultFaceId;
  v49 = *(void **)&this->fields.figureSvtId;
  v46->fields.standFigureBack = standFigureBack;
  p_standFigureBack = (MissionNaviTransitionBoardItem_o *)&v46->fields.standFigureBack;
  sub_2213A04(p_standFigureBack, (int32_t)standFigureBack, v40, v41, v42, v43, v44, v45);
  titleInfo = (TitleInfoControl_o *)this->fields.standFigureBack;
  p_standFigureBack->monitor = v49;
  p_standFigureBack->fields.selectNum = defaultFaceId;
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
  if ( !*(&ShopRootConstants_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo, v20, v51);
  if ( !backgroundTexture )
    goto LABEL_41;
  UITexture__set_uvRect(backgroundTexture, ShopRootConstants_TypeInfo->static_fields->DISP_RECT, 0);
  BG_ROOT = ShopRootConstants_TypeInfo->static_fields->BG_ROOT;
  bgImageId = this->fields.bgImageId;
  v54 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &bgImageId);
  v55 = System_String__Format(BG_ROOT, v54, 0);
  v56 = this->fields.backgroundTexture;
  v57 = v55;
  v58 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v58, (Il2CppObject *)this, Method_ShopRootComponent_LoadBanner__, 0);
  if ( !v56 )
    goto LABEL_41;
  if ( ExUITexture__SetAssetImage(v56, v57, v58, 0) )
    goto LABEL_38;
  v61 = ShopRootConstants_TypeInfo;
  if ( !*(&ShopRootConstants_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo, v59, v60);
    v61 = ShopRootConstants_TypeInfo;
  }
  static_fields = v61->static_fields;
  v63 = static_fields->BG_ROOT;
  DEFAULT_BG_ID = static_fields->DEFAULT_BG_ID;
  v64 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &DEFAULT_BG_ID);
  titleInfo = (TitleInfoControl_o *)System_String__Format(v63, v64, 0);
  if ( !this->fields.backgroundTexture )
LABEL_41:
    sub_2213CDC(titleInfo, v20);
  v57 = (System_String_o *)titleInfo;
  ExUITexture__SetAssetImage(this->fields.backgroundTexture, (System_String_o *)titleInfo, 0, 0);
LABEL_38:
  v65 = this->fields.backgroundTexture;
  if ( !*(&FSUtility_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, v59, v60);
  FSUtility__SetUpBackTextureSize(v65, v57, 0);
}


void ShopRootComponent__setDispInfo(ShopRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  GuideEntity_o *GuideData; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  int32_t guideFaceId; // w8
  ShopRootConstants_c *v9; // x0
  struct ShopRootConstants_StaticFields *static_fields; // x9

  if ( (byte_596C8B1 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_GuideMaster___);
    sub_2213A60(&ShopRootConstants_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596C8B1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_GuideMaster___)) == 0 )
  {
    sub_2213CDC(Instance, v4);
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
    v9 = ShopRootConstants_TypeInfo;
    if ( !*(&ShopRootConstants_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo, v6, v7);
      v9 = ShopRootConstants_TypeInfo;
    }
    static_fields = v9->static_fields;
    guideFaceId = 0;
    *(_QWORD *)&this->fields.figureSvtId = *(_QWORD *)&static_fields->DEFAULT_FIGURE_ID;
    this->fields.bgImageId = static_fields->DEFAULT_BG_ID;
  }
  this->fields.defaultFaceId = guideFaceId;
}


void ShopRootComponent__WaitPurchase_d__125___ctor(
        ShopRootComponent__WaitPurchase_d__125_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool ShopRootComponent__WaitPurchase_d__125__MoveNext(
        ShopRootComponent__WaitPurchase_d__125_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ShopRootComponent__WaitPurchase_d__125_o *v3; // x19
  int32_t _1__state; // w22
  struct ShopRootComponent_o *_4__this; // x8
  ShopRootComponent___c_c *v6; // x0
  struct ShopRootComponent___c_StaticFields *static_fields; // x8
  System_Func_bool__o *_9__125_0; // x20
  Il2CppObject *v9; // x21
  struct ShopRootComponent___c_StaticFields *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  UnityEngine_WaitUntil_o *v17; // x21
  MissionNaviTransitionBoardItem_o *p__2__current; // x19
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7

  v3 = this;
  if ( (byte_596C90B & 1) == 0 )
  {
    sub_2213A60(&System_Func_bool__TypeInfo);
    sub_2213A60(&Method_ShopRootComponent___c__WaitPurchase_b__125_0__);
    sub_2213A60(&ShopRootComponent___c_TypeInfo);
    this = (ShopRootComponent__WaitPurchase_d__125_o *)sub_2213A60(&UnityEngine_WaitUntil_TypeInfo);
    byte_596C90B = 1;
  }
  _1__state = v3->fields.__1__state;
  if ( _1__state )
  {
    if ( _1__state == 1 )
    {
      _4__this = v3->fields.__4__this;
      v3->fields.__1__state = -1;
      if ( !_4__this
        || (this = (ShopRootComponent__WaitPurchase_d__125_o *)_4__this->fields.listViewHelper,
            _4__this->fields.state = 13,
            !this) )
      {
        sub_2213CDC(this, method);
      }
      ShopSceneListViewControlHelper__SetListViewOnOpenHelp((ShopSceneListViewControlHelper_o *)this, 13, v2);
    }
  }
  else
  {
    v3->fields.__1__state = -1;
    v6 = ShopRootComponent___c_TypeInfo;
    if ( !*(&ShopRootComponent___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ShopRootComponent___c_TypeInfo, method, v2);
      v6 = ShopRootComponent___c_TypeInfo;
    }
    static_fields = v6->static_fields;
    _9__125_0 = static_fields->__9__125_0;
    if ( !_9__125_0 )
    {
      if ( !*(&v6->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v6, method, v2);
        static_fields = ShopRootComponent___c_TypeInfo->static_fields;
      }
      v9 = (Il2CppObject *)static_fields->__9;
      _9__125_0 = (System_Func_bool__o *)sub_2213CCC(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(_9__125_0, v9, Method_ShopRootComponent___c__WaitPurchase_b__125_0__, 0);
      v10 = ShopRootComponent___c_TypeInfo->static_fields;
      v10->__9__125_0 = _9__125_0;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v10->__9__125_0,
        (int32_t)_9__125_0,
        v11,
        v12,
        v13,
        v14,
        v15,
        v16);
    }
    v17 = (UnityEngine_WaitUntil_o *)sub_2213CCC(UnityEngine_WaitUntil_TypeInfo);
    UnityEngine_WaitUntil___ctor(v17, _9__125_0, 0);
    v3->fields.__2__current = (Il2CppObject *)v17;
    p__2__current = (MissionNaviTransitionBoardItem_o *)&v3->fields.__2__current;
    sub_2213A04(p__2__current, (int32_t)v17, v19, v20, v21, v22, v23, v24);
    p__2__current[-1].fields._BoardType_k__BackingField = 1;
  }
  return _1__state == 0;
}


Il2CppObject *ShopRootComponent__WaitPurchase_d__125__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ShopRootComponent__WaitPurchase_d__125_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn ShopRootComponent__WaitPurchase_d__125__System_Collections_IEnumerator_Reset(
        ShopRootComponent__WaitPurchase_d__125_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_ShopRootComponent__WaitPurchase_d__125_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *ShopRootComponent__WaitPurchase_d__125__System_Collections_IEnumerator_get_Current(
        ShopRootComponent__WaitPurchase_d__125_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void ShopRootComponent__WaitPurchase_d__125__System_IDisposable_Dispose(
        ShopRootComponent__WaitPurchase_d__125_o *this,
        const MethodInfo *method)
{
  ;
}


void ShopRootComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596C8F9 & 1) == 0 )
  {
    sub_2213A60(&ShopRootComponent___c_TypeInfo);
    byte_596C8F9 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(ShopRootComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ShopRootComponent___c_TypeInfo->static_fields->__9 = (struct ShopRootComponent___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)ShopRootComponent___c_TypeInfo->static_fields,
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


bool ShopRootComponent___c___WaitPurchase_b__125_0(ShopRootComponent___c_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  PurchaseBehaviour_c *v3; // x0

  if ( (byte_596C8FA & 1) == 0 )
  {
    sub_2213A60(&PurchaseBehaviour_TypeInfo);
    byte_596C8FA = 1;
  }
  v3 = PurchaseBehaviour_TypeInfo;
  if ( !*(&PurchaseBehaviour_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo, method, v2);
    v3 = PurchaseBehaviour_TypeInfo;
  }
  return !v3->static_fields->isOpenPurchaseDialogEvent;
}


void ShopRootComponent___c__DisplayClass100_0___ctor(
        ShopRootComponent___c__DisplayClass100_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void ShopRootComponent___c__DisplayClass100_0___SelectSellServantConfirm_b__0(
        ShopRootComponent___c__DisplayClass100_0_o *this,
        int32_t decide,
        const MethodInfo *method)
{
  ServantSellConfirmMenu_o *_4__this; // x0
  Il2CppObject *v6; // x25
  ServantSellConfirmMenu_o *klass; // x20
  int32_t kind; // w21
  System_Int64_array *monitor; // x22
  System_Int64_array *v10; // x23
  System_Action_int__o *v11; // x24
  Il2CppObject *v12; // x25
  System_Action_o *v13; // x19

  if ( (byte_596C8FB & 1) == 0 )
  {
    sub_2213A60(&System_Action_int__TypeInfo);
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ShopRootComponent_SellServantConfirm__);
    sub_2213A60(&Method_ShopRootComponent_UpdateSellServants__);
    byte_596C8FB = 1;
  }
  _4__this = (ServantSellConfirmMenu_o *)this->fields.__4__this;
  if ( decide )
  {
    if ( _4__this )
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
          monitor = (System_Int64_array *)v6[32].monitor;
          v10 = (System_Int64_array *)v6[33].klass;
          v11 = (System_Action_int__o *)sub_2213CCC(System_Action_int__TypeInfo);
          System_Action_int____ctor(v11, v6, Method_ShopRootComponent_SellServantConfirm__, 0);
          v12 = (Il2CppObject *)this->fields.__4__this;
          v13 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
          System_Action___ctor(v13, v12, Method_ShopRootComponent_UpdateSellServants__, 0);
          if ( klass )
          {
            ServantSellConfirmMenu__Open(klass, kind, monitor, v10, v11, v13, 0);
            return;
          }
        }
      }
    }
LABEL_11:
    sub_2213CDC(_4__this, *(_QWORD *)&decide);
  }
  if ( !_4__this )
    goto LABEL_11;
  ShopRootComponent__CloseSellServantConfirm((ShopRootComponent_o *)_4__this, 1, method);
}


void ShopRootComponent___c__DisplayClass104_0___ctor(
        ShopRootComponent___c__DisplayClass104_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ShopRootComponent___c__DisplayClass104_0___PlayLvExceedItemReleaseEffect_b__0(
        ShopRootComponent___c__DisplayClass104_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  CommonUI_o *v5; // x21
  System_Action_o *_9__1; // x22
  QuestRewardInfo_o *questRewardInfo; // x20
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  if ( (byte_596C8FC & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_ShopRootComponent___c__DisplayClass104_0__PlayLvExceedItemReleaseEffect_b__1__);
    byte_596C8FC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (CommonUI_o *)Instance;
  _9__1 = this->fields.__9__1;
  questRewardInfo = this->fields.questRewardInfo;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_ShopRootComponent___c__DisplayClass104_0__PlayLvExceedItemReleaseEffect_b__1__,
      0);
    this->fields.__9__1 = _9__1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.__9__1, (int32_t)_9__1, v8, v9, v10, v11, v12, v13);
  }
  if ( !v5 )
    sub_2213CDC(Instance, v4);
  CommonUI__LoadItemGetEffect(v5, questRewardInfo, _9__1, 0);
}


void ShopRootComponent___c__DisplayClass104_0___PlayLvExceedItemReleaseEffect_b__1(
        ShopRootComponent___c__DisplayClass104_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *Instance; // x0
  __int64 v4; // x1
  struct ShopRootComponent_o *_4__this; // x8
  CommonUI_o *v6; // x20
  UnityEngine_Transform_o *v7; // x22
  System_Action_o *_9__2; // x23
  QuestRewardInfo_o *questRewardInfo; // x21
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_596C8FD & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_ShopRootComponent___c__DisplayClass104_0__PlayLvExceedItemReleaseEffect_b__2__);
    byte_596C8FD = 1;
  }
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_9;
  v6 = (CommonUI_o *)Instance;
  Instance = _4__this->fields.actionPanel;
  if ( !Instance )
    goto LABEL_9;
  Instance = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(Instance, 0);
  v7 = (UnityEngine_Transform_o *)Instance;
  _9__2 = this->fields.__9__2;
  questRewardInfo = this->fields.questRewardInfo;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_ShopRootComponent___c__DisplayClass104_0__PlayLvExceedItemReleaseEffect_b__2__,
      0);
    this->fields.__9__2 = _9__2;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.__9__2, (int32_t)_9__2, v10, v11, v12, v13, v14, v15);
  }
  if ( !v6 )
LABEL_9:
    sub_2213CDC(Instance, v4);
  CommonUI__OpenItemGetEffect(v6, v7, 0, questRewardInfo, _9__2, 0);
}


void ShopRootComponent___c__DisplayClass104_0___PlayLvExceedItemReleaseEffect_b__2(
        ShopRootComponent___c__DisplayClass104_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  AvalonSceneManager_c *v6; // x8
  CommonUI_o *v7; // x20
  System_Action_o *_9__3; // x22
  float DEFAULT_FADE_TIME; // s8
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_596C8FE & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_ShopRootComponent___c__DisplayClass104_0__PlayLvExceedItemReleaseEffect_b__3__);
    byte_596C8FE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  CommonUI__ReleaseItemGetEffect((CommonUI_o *)Instance, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = AvalonSceneManager_TypeInfo;
  v7 = (CommonUI_o *)Instance;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v4, v5);
    v6 = AvalonSceneManager_TypeInfo;
  }
  _9__3 = this->fields.__9__3;
  DEFAULT_FADE_TIME = v6->static_fields->DEFAULT_FADE_TIME;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_ShopRootComponent___c__DisplayClass104_0__PlayLvExceedItemReleaseEffect_b__3__,
      0);
    this->fields.__9__3 = _9__3;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.__9__3, (int32_t)_9__3, v10, v11, v12, v13, v14, v15);
  }
  if ( !v7 )
LABEL_10:
    sub_2213CDC(Instance, v4);
  CommonUI__maskFadein(v7, DEFAULT_FADE_TIME, _9__3, 0);
}


void ShopRootComponent___c__DisplayClass104_0___PlayLvExceedItemReleaseEffect_b__3(
        ShopRootComponent___c__DisplayClass104_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  struct ShopBuyItemListViewItem_o *item; // x1

  item = this->fields.item;
  if ( !item || (this = (ShopRootComponent___c__DisplayClass104_0_o *)this->fields.__4__this) == 0 )
    sub_2213CDC(this, item);
  ShopRootComponent__ShowNormalItemDialog((ShopRootComponent_o *)this, item, item->fields._Shop_k__BackingField, v2);
}


void ShopRootComponent___c__DisplayClass111_0___ctor(
        ShopRootComponent___c__DisplayClass111_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ShopRootComponent___c__DisplayClass111_0___PlayServantCostumeReleaseEffect_b__0(
        ShopRootComponent___c__DisplayClass111_0_o *this,
        const MethodInfo *method)
{
  ShopRootComponent___c__DisplayClass111_0_o *v2; // x19
  struct ShopEntity_o *shopEntity; // x8
  struct System_Int32_array *targetIds; // x8
  System_String_o *v5; // x21
  System_String_o *v6; // x0
  int32_t v7; // w20
  System_String_o *v8; // x0
  int32_t v9; // w21
  CommonUI_o *v10; // x20
  System_String_o *name; // x21
  Il2CppObject *_4__this; // x22
  System_Action_o *v13; // x19
  ServantCostumeEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  v2 = this;
  if ( (byte_596C8FF & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_2213A60(&Method_ShopRootComponent_OnEndPlayServantCostumeReleaseEffect__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (ShopRootComponent___c__DisplayClass111_0_o *)sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596C8FF = 1;
  }
  shopEntity = v2->fields.shopEntity;
  entity = 0;
  if ( !shopEntity )
    goto LABEL_15;
  targetIds = shopEntity->fields.targetIds;
  if ( !targetIds )
    goto LABEL_15;
  if ( !LODWORD(targetIds->max_length) )
    sub_2213CE4(this);
  this = (ShopRootComponent___c__DisplayClass111_0_o *)System_Int32__ToString((int)targetIds + 32, 0);
  if ( !this )
    goto LABEL_15;
  v5 = (System_String_o *)this;
  v6 = System_String__Substring_75702848((System_String_o *)this, 0, LODWORD(this->fields.shopEntity) - 2, 0);
  v7 = System_Int32__Parse(v6, 0);
  v8 = System_String__Substring(v5, v5->fields._stringLength - 2, 0);
  v9 = System_Int32__Parse(v8, 0);
  this = (ShopRootComponent___c__DisplayClass111_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_15;
  this = (ShopRootComponent___c__DisplayClass111_0_o *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)this,
                                                         (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  if ( !this )
    goto LABEL_15;
  if ( ServantCostumeMaster__TryGetEntity((ServantCostumeMaster_o *)this, &entity, v7, v9, 0) )
  {
    this = (ShopRootComponent___c__DisplayClass111_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( entity )
    {
      v10 = (CommonUI_o *)this;
      name = entity->fields.name;
      _4__this = (Il2CppObject *)v2->fields.__4__this;
      v13 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v13, _4__this, Method_ShopRootComponent_OnEndPlayServantCostumeReleaseEffect__, 0);
      if ( v10 )
      {
        CommonUI__OpenCostumeReleaseEffect(v10, 1, name, v13, 23, 0);
        return;
      }
    }
LABEL_15:
    sub_2213CDC(this, method);
  }
  this = (ShopRootComponent___c__DisplayClass111_0_o *)v2->fields.__4__this;
  if ( !this )
    goto LABEL_15;
  ShopRootComponent__OnEndPlayServantCostumeReleaseEffect((ShopRootComponent_o *)this, method);
}


void ShopRootComponent___c__DisplayClass164_0___ctor(
        ShopRootComponent___c__DisplayClass164_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ShopRootComponent___c__DisplayClass164_0___CloseShopResetDialog_b__0(
        ShopRootComponent___c__DisplayClass164_0_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  bool v6; // w8
  ShopRootComponent_o *_4__this; // x0
  Il2CppObject *v8; // x21
  ShopResetConfirmDialogComponent_o *monitor; // x20
  ShopBuyItemListViewItem_o *item; // x19
  System_Action_bool__o *v11; // x22
  const MethodInfo *v12; // x4

  if ( (byte_596C900 & 1) == 0 )
  {
    sub_2213A60(&System_Action_bool__TypeInfo);
    sub_2213A60(&Method_ShopRootComponent_OnEndShopReset__);
    sub_2213A60(&StringLiteral_23336/*"ng"*/);
    byte_596C900 = 1;
  }
  v6 = System_String__op_Equality(result, (System_String_o *)StringLiteral_23336/*"ng"*/, 0);
  _4__this = this->fields.__4__this;
  if ( v6 )
  {
    if ( _4__this )
    {
      ShopRootComponent__RequestEnd(_4__this, v5);
      return;
    }
LABEL_11:
    sub_2213CDC(_4__this, v5);
  }
  if ( !_4__this )
    goto LABEL_11;
  ShopRootComponent__RefreshInfo(_4__this, v5);
  v8 = (Il2CppObject *)this->fields.__4__this;
  if ( !v8 )
    goto LABEL_11;
  monitor = (ShopResetConfirmDialogComponent_o *)v8[24].monitor;
  item = this->fields.item;
  v11 = (System_Action_bool__o *)sub_2213CCC(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v11, v8, Method_ShopRootComponent_OnEndShopReset__, 0);
  if ( !monitor )
    goto LABEL_11;
  if ( !monitor->fields.state )
    ShopResetConfirmDialogComponent__Open_42023116(monitor, 1, item, v11, v12);
}


void ShopRootComponent___c__DisplayClass164_0___CloseShopResetDialog_b__1(
        ShopRootComponent___c__DisplayClass164_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  ShopRootComponent___c__DisplayClass164_0_o *v3; // x19
  struct ShopBuyItemListViewItem_o *item; // x8
  struct ShopEntity_o *Shop_k__BackingField; // x8
  ShopResetPurchaseNumRequest_o *request; // x19
  int32_t baseShopId; // w20

  v3 = this;
  if ( (byte_596C901 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ItemMaster___);
    this = (ShopRootComponent___c__DisplayClass164_0_o *)sub_2213A60(&DataManager_TypeInfo);
    byte_596C901 = 1;
  }
  item = v3->fields.item;
  if ( !item )
    goto LABEL_10;
  Shop_k__BackingField = item->fields._Shop_k__BackingField;
  if ( !Shop_k__BackingField )
    goto LABEL_10;
  request = v3->fields.request;
  baseShopId = Shop_k__BackingField->fields.baseShopId;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v2);
  this = (ShopRootComponent___c__DisplayClass164_0_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !this || !request )
LABEL_10:
    sub_2213CDC(this, method);
  ShopResetPurchaseNumRequest__beginRequest(request, baseShopId, *((_DWORD *)this + 25), 0);
}


void ShopRootComponent___c__DisplayClass75_0___ctor(
        ShopRootComponent___c__DisplayClass75_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ShopRootComponent___c__DisplayClass75_0___LoadBanner_b__0(
        ShopRootComponent___c__DisplayClass75_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  PurchaseBehaviour_c *v4; // x0
  ShopPlayVoiceComponent_o *shopPlayVoiceComponent; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x5
  struct ShopRootComponent_o *_4__this; // x8
  int32_t v9; // w4

  if ( (byte_596C902 & 1) == 0 )
  {
    sub_2213A60(&PurchaseBehaviour_TypeInfo);
    byte_596C902 = 1;
  }
  v4 = PurchaseBehaviour_TypeInfo;
  if ( !*(&PurchaseBehaviour_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo, method, v2);
    v4 = PurchaseBehaviour_TypeInfo;
  }
  v4->static_fields->isOpenPurchaseDialogEvent = 1;
  PurchaseBehaviour__ActivateBoth(0);
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (shopPlayVoiceComponent = _4__this->fields.shopPlayVoiceComponent) == 0
    || (_4__this->fields.isFromCoinRoom ? (v9 = 17) : (v9 = 0),
        ShopPlayVoiceComponent__LoadVoice(
          shopPlayVoiceComponent,
          _4__this->fields.figureSvtId,
          this->fields.jumpedState,
          _4__this->fields.isFromCoinRoom,
          v9,
          v7),
        (shopPlayVoiceComponent = (ShopPlayVoiceComponent_o *)this->fields.__4__this) == 0) )
  {
    sub_2213CDC(shopPlayVoiceComponent, v6);
  }
  SceneRootComponent__beginStartUp_48466984((SceneRootComponent_o *)shopPlayVoiceComponent, 0);
}


void ShopRootComponent___c__DisplayClass83_0___ctor(
        ShopRootComponent___c__DisplayClass83_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ShopRootComponent___c__DisplayClass83_0___SelectMenu_b__0(
        ShopRootComponent___c__DisplayClass83_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x5
  ShopRootComponent___c__DisplayClass83_0_o *v3; // x19
  struct ShopRootComponent_o *_4__this; // x8
  ShopSceneListViewControlHelper_o *listViewHelper; // x21
  int32_t selectedEventIndex; // w20
  System_Action_o *_9__1; // x24
  int32_t state; // w22
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x3
  struct ShopRootComponent_o *v17; // x8

  v3 = this;
  if ( (byte_596C903 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    this = (ShopRootComponent___c__DisplayClass83_0_o *)sub_2213A60(&Method_ShopRootComponent___c__DisplayClass83_0__SelectMenu_b__1__);
    byte_596C903 = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  listViewHelper = _4__this->fields.listViewHelper;
  selectedEventIndex = _4__this->fields.selectedEventIndex;
  _9__1 = v3->fields.__9__1;
  state = v3->fields.state;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v3,
      Method_ShopRootComponent___c__DisplayClass83_0__SelectMenu_b__1__,
      0);
    v3->fields.__9__1 = _9__1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v3->fields.__9__1, (int32_t)_9__1, v9, v10, v11, v12, v13, v14);
  }
  if ( !listViewHelper
    || (ShopSceneListViewControlHelper__SetListViewOnSelectMenu(
          listViewHelper,
          state,
          &v3->fields.eventId,
          selectedEventIndex,
          _9__1,
          v2),
        (this = (ShopRootComponent___c__DisplayClass83_0_o *)v3->fields.__4__this) == 0)
    || (ShopRootComponent__OpenStonePurchaseMenu((ShopRootComponent_o *)this, v3->fields.state, v15),
        (this = (ShopRootComponent___c__DisplayClass83_0_o *)v3->fields.__4__this) == 0)
    || (ShopRootComponent__OpenEventItemWindow((ShopRootComponent_o *)this, v3->fields.state, v3->fields.eventId, v16),
        (v17 = v3->fields.__4__this) == 0) )
  {
LABEL_11:
    sub_2213CDC(this, method);
  }
  *(_QWORD *)&v17->fields.state = (unsigned int)v3->fields.state;
}


void ShopRootComponent___c__DisplayClass83_0___SelectMenu_b__1(
        ShopRootComponent___c__DisplayClass83_0_o *this,
        const MethodInfo *method)
{
  ShopRootComponent___c__DisplayClass83_0_o *v2; // x19
  struct ShopRootComponent_o *_4__this; // x8
  const MethodInfo *v4; // x2
  struct ShopRootComponent_o *v5; // x8
  struct ShopPlayVoiceComponent_o *shopPlayVoiceComponent; // x20
  __int64 v7; // x2
  const MethodInfo *v8; // x6
  ShopRootComponent___c__DisplayClass83_0_o *v9; // x21
  ShopRootConstants_c *v10; // x8
  int32_t eventId; // w20
  int32_t *p_state; // x8
  int32_t *p__9__2; // x9
  struct ShopRootConstants_StaticFields *static_fields; // x9
  struct ShopRootComponent_o *v15; // x10
  int32_t v16; // w21
  int32_t v17; // w22
  System_Action_o *_9__2; // x25
  ShopPlayVoiceComponent_o *v19; // x23
  StandFigureBack_o *standFigureBack; // x24
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7

  v2 = this;
  if ( (byte_596C904 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_GuideMaster___);
    sub_2213A60(&ShopRootConstants_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (ShopRootComponent___c__DisplayClass83_0_o *)sub_2213A60(&Method_ShopRootComponent___c__DisplayClass83_0__SelectMenu_b__2__);
    byte_596C904 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_24;
  this = (ShopRootComponent___c__DisplayClass83_0_o *)_4__this->fields.shopPlayVoiceComponent;
  if ( !this )
    goto LABEL_24;
  ShopPlayVoiceComponent__StopVoice((ShopPlayVoiceComponent_o *)this, method);
  v5 = v2->fields.__4__this;
  if ( v2->fields.state != 15 )
  {
LABEL_22:
    if ( v5 )
      goto LABEL_23;
LABEL_24:
    sub_2213CDC(this, method);
  }
  if ( !v5 )
    goto LABEL_24;
  shopPlayVoiceComponent = v5->fields.shopPlayVoiceComponent;
  this = (ShopRootComponent___c__DisplayClass83_0_o *)ShopPlayVoiceConstants__GetEnterVoiceFlag(15, method);
  if ( !shopPlayVoiceComponent )
    goto LABEL_24;
  if ( !shopPlayVoiceComponent->fields.isPlayingVoice
    && (shopPlayVoiceComponent->fields.voicePlayOnce & (unsigned int)this) == 0 )
  {
    this = (ShopRootComponent___c__DisplayClass83_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_24;
    this = (ShopRootComponent___c__DisplayClass83_0_o *)DataManager__GetMasterData_object_(
                                                          (DataManager_o *)this,
                                                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_GuideMaster___);
    if ( !this )
      goto LABEL_24;
    this = (ShopRootComponent___c__DisplayClass83_0_o *)GuideMaster__getGuideData((GuideMaster_o *)this, 3, 0);
    v9 = this;
    v10 = ShopRootConstants_TypeInfo;
    if ( !*(&ShopRootConstants_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo, method, v7);
      v10 = ShopRootConstants_TypeInfo;
    }
    if ( v9 )
    {
      eventId = v9->fields.eventId;
      p_state = &v9->fields.state;
      p__9__2 = (int32_t *)&v9->fields.__9__2;
    }
    else
    {
      static_fields = v10->static_fields;
      eventId = 0;
      p_state = &static_fields->DEFAULT_FIGURE_ID;
      p__9__2 = &static_fields->DEFAULT_FIGURE_LIMIT_CNT;
    }
    v15 = v2->fields.__4__this;
    if ( !v15 )
      goto LABEL_24;
    v16 = *p_state;
    v17 = *p__9__2;
    _9__2 = v2->fields.__9__2;
    v19 = v15->fields.shopPlayVoiceComponent;
    standFigureBack = v15->fields.standFigureBack;
    if ( !_9__2 )
    {
      _9__2 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(
        _9__2,
        (Il2CppObject *)v2,
        Method_ShopRootComponent___c__DisplayClass83_0__SelectMenu_b__2__,
        0);
      v2->fields.__9__2 = _9__2;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v2->fields.__9__2, (int32_t)_9__2, v21, v22, v23, v24, v25, v26);
    }
    if ( !v19 )
      goto LABEL_24;
    ShopPlayVoiceComponent__ReloadVoice(v19, standFigureBack, v16, v17, eventId, _9__2, v8);
    v5 = v2->fields.__4__this;
    goto LABEL_22;
  }
LABEL_23:
  ShopRootComponent__SetFadeIn((ShopRootComponent_o *)this, v2->fields.state, v4);
}


void ShopRootComponent___c__DisplayClass83_0___SelectMenu_b__2(
        ShopRootComponent___c__DisplayClass83_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_2213CDC(this, method);
  ShopRootComponent__PlayVoiceEnter(this->fields.__4__this, this->fields.state, v2);
}


void ShopRootComponent___c__DisplayClass84_0___ctor(
        ShopRootComponent___c__DisplayClass84_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ShopRootComponent___c__DisplayClass84_0___BackMenu_b__0(
        ShopRootComponent___c__DisplayClass84_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  ShopRootComponent___c__DisplayClass84_0_o *v3; // x19
  struct ShopRootComponent_o *_4__this; // x8
  ShopSceneListViewControlHelper_o *listViewHelper; // x21
  System_Action_o *_9__1; // x23
  int32_t state; // w20
  int32_t v8; // w22
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct ShopRootComponent_o *v15; // x8

  v3 = this;
  if ( (byte_596C905 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    this = (ShopRootComponent___c__DisplayClass84_0_o *)sub_2213A60(&Method_ShopRootComponent___c__DisplayClass84_0__BackMenu_b__1__);
    byte_596C905 = 1;
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
    _9__1 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(_9__1, (Il2CppObject *)v3, Method_ShopRootComponent___c__DisplayClass84_0__BackMenu_b__1__, 0);
    v3->fields.__9__1 = _9__1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v3->fields.__9__1, (int32_t)_9__1, v9, v10, v11, v12, v13, v14);
  }
  if ( !listViewHelper
    || (ShopSceneListViewControlHelper__SetListViewOnBackMenu(listViewHelper, state, v8, _9__1, v2),
        (this = (ShopRootComponent___c__DisplayClass84_0_o *)v3->fields.__4__this) == 0)
    || (ShopRootComponent__CloseEventItemWindow((ShopRootComponent_o *)this, method), (v15 = v3->fields.__4__this) == 0) )
  {
LABEL_13:
    sub_2213CDC(this, method);
  }
  v15->fields.inputState = 3;
}


void ShopRootComponent___c__DisplayClass84_0___BackMenu_b__1(
        ShopRootComponent___c__DisplayClass84_0_o *this,
        const MethodInfo *method)
{
  ShopRootComponent___c__DisplayClass84_0_o *v2; // x19
  struct ShopRootComponent_o *_4__this; // x8
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x6
  struct ShopRootComponent_o *v6; // x8
  ShopPlayVoiceComponent_o *shopPlayVoiceComponent; // x20
  StandFigureBack_o *standFigureBack; // x21
  int32_t figureSvtId; // w22
  int32_t figureSvtLimitCnt; // w23
  System_Action_o *_9__2; // x25
  int32_t defaultFaceId; // w24
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7

  v2 = this;
  if ( (byte_596C906 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    this = (ShopRootComponent___c__DisplayClass84_0_o *)sub_2213A60(&Method_ShopRootComponent___c__DisplayClass84_0__BackMenu_b__2__);
    byte_596C906 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  this = (ShopRootComponent___c__DisplayClass84_0_o *)_4__this->fields.shopPlayVoiceComponent;
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
  _9__2 = v2->fields.__9__2;
  defaultFaceId = v6->fields.defaultFaceId;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(_9__2, (Il2CppObject *)v2, Method_ShopRootComponent___c__DisplayClass84_0__BackMenu_b__2__, 0);
    v2->fields.__9__2 = _9__2;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v2->fields.__9__2, (int32_t)_9__2, v13, v14, v15, v16, v17, v18);
  }
  if ( !shopPlayVoiceComponent )
LABEL_13:
    sub_2213CDC(this, method);
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


void ShopRootComponent___c__DisplayClass84_0___BackMenu_b__2(
        ShopRootComponent___c__DisplayClass84_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_2213CDC(this, method);
  ShopRootComponent__PlayVoiceBack(this->fields.__4__this, this->fields.state, v2);
}


void ShopRootComponent___c__DisplayClass85_0___ctor(
        ShopRootComponent___c__DisplayClass85_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ShopRootComponent___c__DisplayClass85_0___SetFadeOut_b__0(
        ShopRootComponent___c__DisplayClass85_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.endFade, 0);
}


void ShopRootComponent___c__DisplayClass88_0___ctor(
        ShopRootComponent___c__DisplayClass88_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ShopRootComponent___c__DisplayClass88_0___OpenConfirmMenu_b__0(
        ShopRootComponent___c__DisplayClass88_0_o *this,
        const MethodInfo *method)
{
  ShopRootComponent___c__DisplayClass88_0_o *v2; // x19
  Il2CppObject *_4__this; // x22
  struct ShopBuyItemListViewItem_o *item; // x8
  ShopBuyItemConfirmMenu_o *monitor; // x19
  ShopEntity_o *Shop_k__BackingField; // x20
  int32_t ShopKind_k__BackingField; // w21
  System_Action_int__o *v8; // x23

  v2 = this;
  if ( (byte_596C907 & 1) == 0 )
  {
    sub_2213A60(&System_Action_int__TypeInfo);
    this = (ShopRootComponent___c__DisplayClass88_0_o *)sub_2213A60(&Method_ShopRootComponent_SelectedBuyItemConfirm__);
    byte_596C907 = 1;
  }
  _4__this = (Il2CppObject *)v2->fields.__4__this;
  if ( !_4__this
    || (item = v2->fields.item) == 0
    || (monitor = (ShopBuyItemConfirmMenu_o *)_4__this[9].monitor,
        Shop_k__BackingField = item->fields._Shop_k__BackingField,
        ShopKind_k__BackingField = item->fields._ShopKind_k__BackingField,
        v8 = (System_Action_int__o *)sub_2213CCC(System_Action_int__TypeInfo),
        System_Action_int____ctor(v8, _4__this, Method_ShopRootComponent_SelectedBuyItemConfirm__, 0),
        !monitor) )
  {
    sub_2213CDC(this, method);
  }
  ShopBuyItemConfirmMenu__Open(monitor, Shop_k__BackingField, ShopKind_k__BackingField, v8, 0, 0, 0, 8, 0);
}


void ShopRootComponent___c__DisplayClass88_0___OpenConfirmMenu_b__1(
        ShopRootComponent___c__DisplayClass88_0_o *this,
        const MethodInfo *method)
{
  ShopRootComponent___c__DisplayClass88_0_o *v2; // x19
  Il2CppObject *_4__this; // x22
  ShopResetConfirmDialogComponent_o *monitor; // x20
  ShopBuyItemListViewItem_o *item; // x19
  System_Action_bool__o *v6; // x21
  const MethodInfo *v7; // x4

  v2 = this;
  if ( (byte_596C908 & 1) == 0 )
  {
    sub_2213A60(&System_Action_bool__TypeInfo);
    this = (ShopRootComponent___c__DisplayClass88_0_o *)sub_2213A60(&Method_ShopRootComponent_CloseShopResetDialog__);
    byte_596C908 = 1;
  }
  _4__this = (Il2CppObject *)v2->fields.__4__this;
  if ( !_4__this
    || (monitor = (ShopResetConfirmDialogComponent_o *)_4__this[24].monitor,
        item = v2->fields.item,
        v6 = (System_Action_bool__o *)sub_2213CCC(System_Action_bool__TypeInfo),
        System_Action_bool____ctor(v6, _4__this, Method_ShopRootComponent_CloseShopResetDialog__, 0),
        !monitor) )
  {
    sub_2213CDC(this, method);
  }
  if ( !monitor->fields.state )
    ShopResetConfirmDialogComponent__Open_42023116(monitor, 0, item, v6, v7);
}


void ShopRootComponent___c__DisplayClass88_0___OpenConfirmMenu_b__2(
        ShopRootComponent___c__DisplayClass88_0_o *this,
        const MethodInfo *method)
{
  ShopRootComponent___c__DisplayClass88_0_o *v2; // x19
  Il2CppObject *_4__this; // x22
  struct ShopBuyItemListViewItem_o *item; // x8
  ShopBuyItemConfirmMenu_o *monitor; // x19
  ShopEntity_o *Shop_k__BackingField; // x20
  int32_t ShopKind_k__BackingField; // w21
  System_Action_int__o *v8; // x23

  v2 = this;
  if ( (byte_596C909 & 1) == 0 )
  {
    sub_2213A60(&System_Action_int__TypeInfo);
    this = (ShopRootComponent___c__DisplayClass88_0_o *)sub_2213A60(&Method_ShopRootComponent_SelectedBuyItemConfirm__);
    byte_596C909 = 1;
  }
  _4__this = (Il2CppObject *)v2->fields.__4__this;
  if ( !_4__this
    || (item = v2->fields.item) == 0
    || (monitor = (ShopBuyItemConfirmMenu_o *)_4__this[9].monitor,
        Shop_k__BackingField = item->fields._Shop_k__BackingField,
        ShopKind_k__BackingField = item->fields._ShopKind_k__BackingField,
        v8 = (System_Action_int__o *)sub_2213CCC(System_Action_int__TypeInfo),
        System_Action_int____ctor(v8, _4__this, Method_ShopRootComponent_SelectedBuyItemConfirm__, 0),
        !monitor) )
  {
    sub_2213CDC(this, method);
  }
  ShopBuyItemConfirmMenu__Open(monitor, Shop_k__BackingField, ShopKind_k__BackingField, v8, 0, 0, 0, 8, 0);
}


void ShopRootComponent___c__DisplayClass88_0___OpenConfirmMenu_b__3(
        ShopRootComponent___c__DisplayClass88_0_o *this,
        const MethodInfo *method)
{
  ShopRootComponent___c__DisplayClass88_0_o *v2; // x19
  struct ShopRootComponent_o *_4__this; // x8
  struct ShopBuyItemListViewItem_o *item; // x9
  ShopEntity_o *Shop_k__BackingField; // x20
  PurchaseShopCheckWarningDialog_o *purchaseShopCheckWarningDialog; // x21
  int32_t TargetId; // w0
  const MethodInfo *v8; // x1
  ShopRootComponent___c__DisplayClass88_0_o *v9; // x22
  PurchaseShopCheckWarningDialog_ClickDelegate_o *_9__4; // x23
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  v2 = this;
  if ( (byte_596C90A & 1) == 0 )
  {
    sub_2213A60(&PurchaseShopCheckWarningDialog_ClickDelegate_TypeInfo);
    this = (ShopRootComponent___c__DisplayClass88_0_o *)sub_2213A60(&Method_ShopRootComponent___c__DisplayClass88_0__OpenConfirmMenu_b__4__);
    byte_596C90A = 1;
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
  this = (ShopRootComponent___c__DisplayClass88_0_o *)ShopRootComponent__GetClassBoardReleaseItemList(TargetId, v8);
  v9 = this;
  _9__4 = v2->fields.__9__4;
  if ( !_9__4 )
  {
    _9__4 = (PurchaseShopCheckWarningDialog_ClickDelegate_o *)sub_2213CCC(PurchaseShopCheckWarningDialog_ClickDelegate_TypeInfo);
    PurchaseShopCheckWarningDialog_ClickDelegate___ctor(
      _9__4,
      (Il2CppObject *)v2,
      Method_ShopRootComponent___c__DisplayClass88_0__OpenConfirmMenu_b__4__,
      0);
    v2->fields.__9__4 = _9__4;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v2->fields.__9__4, (int32_t)_9__4, v11, v12, v13, v14, v15, v16);
  }
  if ( !purchaseShopCheckWarningDialog )
LABEL_10:
    sub_2213CDC(this, method);
  PurchaseShopCheckWarningDialog__Open(
    purchaseShopCheckWarningDialog,
    Shop_k__BackingField,
    (System_Collections_Generic_Dictionary_int__long__o *)v9,
    _9__4,
    0);
}


// local variable allocation has failed, the output may be wrong!
void ShopRootComponent___c__DisplayClass88_0___OpenConfirmMenu_b__4(
        ShopRootComponent___c__DisplayClass88_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ShopRootComponent_o *_4__this; // x0

  if ( isDecide )
  {
    _4__this = this->fields.__4__this;
    if ( !_4__this )
      sub_2213CDC(0, isDecide);
    ShopRootComponent__SelectedBuyItemConfirm(_4__this, 1, method);
  }
}


void ShopRootComponent___c__DisplayClass89_0___ctor(
        ShopRootComponent___c__DisplayClass89_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ShopRootComponent___c__DisplayClass89_0___GetClassBoardReleaseItemList_b__0(
        ShopRootComponent___c__DisplayClass89_0_o *this,
        UserClassBoardSquareEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.classBoardBaseId == this->fields.baseId;
}