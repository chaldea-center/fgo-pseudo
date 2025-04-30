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
  if ( (byte_4A4A85D & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, *(_QWORD *)&state);
    sub_1B863B8(&Method_ShopRootComponent___c__DisplayClass82_0__BackMenu_b__0__, v5);
    sub_1B863B8(&ShopRootComponent___c__DisplayClass82_0_TypeInfo, v6);
    byte_4A4A85D = 1;
  }
  v7 = sub_1B86604(ShopRootComponent___c__DisplayClass82_0_TypeInfo);
  ShopRootComponent___c__DisplayClass82_0___ctor((ShopRootComponent___c__DisplayClass82_0_o *)v7, 0LL);
  if ( !v7 )
    sub_1B86614(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v7 + 16), (int32_t)this, v10, v11);
  *(_DWORD *)(v7 + 24) = v3;
  if ( v3 != 15 )
  {
    ShopRootComponent__PlayVoiceBack(this, v3, v12);
    v3 = *(_DWORD *)(v7 + 24);
  }
  v13 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)v7, Method_ShopRootComponent___c__DisplayClass82_0__BackMenu_b__0__, 0LL);
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

  if ( (byte_4A4A880 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, *(_QWORD *)&state);
    sub_1B863B8(&Method_DataManager_GetMasterData_EventMaster___, v5);
    sub_1B863B8(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v6);
    sub_1B863B8(&LocalizationManager_TypeInfo, v7);
    sub_1B863B8(&Method_ShopRootComponent_OnEndDialogEventCloseWarning__, v8);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v11);
    sub_1B863B8(&StringLiteral_6158/*"EventItem"*/, v12);
    sub_1B863B8(&StringLiteral_3439/*"CLICK_BACK"*/, v13);
    sub_1B863B8(&StringLiteral_12863/*"StoneFragments"*/, v14);
    sub_1B863B8(&StringLiteral_11896/*"SHOP_EVENT_RETURN_ERROR"*/, v15);
    sub_1B863B8(&StringLiteral_1/*""*/, v16);
    byte_4A4A880 = 1;
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
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myFSM, (System_String_o *)StringLiteral_3439/*"CLICK_BACK"*/, 0LL);
      return 1;
    case 4:
      v20 = this->fields.jumpInfo;
      if ( !v20 || !System_String__op_Equality(v20->fields.name, (System_String_o *)StringLiteral_12863/*"StoneFragments"*/, 0LL) )
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
      if ( !v21 || !System_String__op_Equality(v21->fields.name, (System_String_o *)StringLiteral_6158/*"EventItem"*/, 0LL) )
        return 0;
      myFSM = this->fields.jumpInfo;
      if ( !myFSM )
        goto LABEL_47;
      return SceneJumpInfo__ReturnScene((SceneJumpInfo_o *)myFSM, 0LL);
    case 8:
      v22 = this->fields.jumpInfo;
      if ( !v22 )
        return 0;
      if ( !System_String__op_Equality(v22->fields.name, (System_String_o *)StringLiteral_6158/*"EventItem"*/, 0LL) )
        goto LABEL_35;
      myFSM = this->fields.jumpInfo;
      if ( !myFSM )
        goto LABEL_47;
      if ( !*((_DWORD *)myFSM + 6) || !SceneJumpInfo__ReturnScene((SceneJumpInfo_o *)myFSM, 0LL) )
      {
LABEL_35:
        myFSM = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( myFSM )
        {
          myFSM = DataManager__GetMasterData_object_(
                    (DataManager_o *)myFSM,
                    (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_EventMaster___);
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
                          (const MethodInfo_3214280 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
                if ( myFSM )
                {
                  v26 = (EventEntity_o *)myFSM;
                  if ( EventEntity__IsOpen((EventEntity_o *)myFSM, 1, 0LL) )
                    return 0;
                  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  v29 = LocalizationManager__Get((System_String_o *)StringLiteral_11896/*"SHOP_EVENT_RETURN_ERROR"*/, 0LL);
                  EventName = (Il2CppObject *)EventEntity__getEventName(v26, 0LL);
                  v31 = System_String__Format(v29, EventName, 0LL);
                  v32 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
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
                      0LL);
                    return v19;
                  }
                }
              }
            }
          }
        }
LABEL_47:
        sub_1B86614(myFSM, *(_QWORD *)&state);
      }
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4A4907E )
      {
        sub_1B863B8(&TerminalPramsManager_TypeInfo, v23);
        byte_4A4907E = 1;
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
  if ( (byte_4A4A867 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_int__TypeInfo, method);
    this = (ShopRootComponent_o *)sub_1B863B8(&Method_ShopRootComponent_SellServantExceededConfirm__, v4);
    byte_4A4A867 = 1;
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
    v10 = (System_Action_int__o *)sub_1B86604(System_Action_int__TypeInfo);
    System_Action_int____ctor(v10, (Il2CppObject *)v3, Method_ShopRootComponent_SellServantExceededConfirm__, 0LL);
    if ( !servantSellConfirmMenu )
LABEL_11:
      sub_1B86614(servantSellMenu, v5);
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

  if ( (byte_4A4A88C & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, *(_QWORD *)&state);
    byte_4A4A88C = 1;
  }
  if ( (unsigned int)state > 0x15 || ((1 << state) & 0x35DDFC) == 0 )
    return 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance )
    sub_1B86614(0LL, v5);
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

  if ( (byte_4A4A87D & 1) == 0 )
  {
    sub_1B863B8(&Method_NetworkManager_getRequest_TutorialSetRequest___, method);
    sub_1B863B8(&NetworkManager_TypeInfo, v3);
    sub_1B863B8(&NetworkManager_ResultCallbackFunc_TypeInfo, v4);
    sub_1B863B8(&Method_ShopRootComponent_QuitHelp__, v5);
    sub_1B863B8(&TutorialFlag_TypeInfo, v6);
    sub_1B863B8(&StringLiteral_22061/*"ok"*/, v7);
    byte_4A4A87D = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_38640612(103, 0LL) )
  {
    ShopRootComponent__QuitHelp(this, (System_String_o *)StringLiteral_22061/*"ok"*/, v8);
  }
  else
  {
    v9 = (NetworkManager_ResultCallbackFunc_o *)sub_1B86604(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(v9, (Il2CppObject *)this, Method_ShopRootComponent_QuitHelp__, 0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v9,
                       (const MethodInfo_2FF4AF4 *)Method_NetworkManager_getRequest_TutorialSetRequest___);
    if ( !Request_object )
      sub_1B86614(0LL, v11);
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

  if ( (byte_4A4A887 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_ShopDetailMaster___, decide);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4A4A887 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseConfirmDialog(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.listViewHelper) == 0LL)
    || (ShopBuyItemListViewItem = ShopSceneListViewControlHelper__GetShopBuyItemListViewItem(
                                    (ShopSceneListViewControlHelper_o *)Instance,
                                    this->fields.selectedItemIndex,
                                    0LL),
        (Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (CommonUI_o *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ShopDetailMaster___),
        !ShopBuyItemListViewItem)
    || (Shop_k__BackingField = ShopBuyItemListViewItem->fields._Shop_k__BackingField) == 0LL
    || !Instance )
  {
    sub_1B86614(Instance, v8);
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

  if ( (byte_4A4A88B & 1) == 0 )
  {
    sub_1B863B8(&ShopRootConstants_TypeInfo, method);
    byte_4A4A88B = 1;
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
    sub_1B86614(shopEventItemDrawBase, method);
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

  if ( (byte_4A4A866 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMaster_ShopMaster___, method);
    sub_1B863B8(&DataManager_TypeInfo, v3);
    byte_4A4A866 = 1;
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
    sub_1B86614(buyItemConfirmMenu, method);
  if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)buyItemConfirmMenu, 0LL) )
  {
    buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)this->fields.shopResetConfirmDialog;
    if ( !buyItemConfirmMenu )
      goto LABEL_55;
    ShopResetConfirmDialogComponent__Close_33542040((ShopResetConfirmDialogComponent_o *)buyItemConfirmMenu, 0LL, v5);
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
    v7 = (ShopBuyItemListViewItem_o *)buyItemConfirmMenu;
    itemInfoBase = (ShopEntity_o *)buyItemConfirmMenu->fields.itemInfoBase;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_ShopMaster___);
    if ( this->fields.buyCount >= 1 )
    {
      v9 = (ShopMaster_o *)buyItemConfirmMenu;
      if ( !buyItemConfirmMenu )
        goto LABEL_55;
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
            goto LABEL_54;
          }
          buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)this->fields.topListViewManager;
          if ( buyItemConfirmMenu )
          {
            ShopTopListViewManager__CreateList((ShopTopListViewManager_o *)buyItemConfirmMenu, 0, -1.0, 0LL);
            LODWORD(method) = this->fields.state;
LABEL_54:
            ShopRootComponent__BackMenu(this, (int32_t)method, v11);
            return;
          }
        }
        goto LABEL_55;
      }
    }
    ShopBuyItemListViewItem__Modify(v7, itemInfoBase, 0LL);
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
    sub_1B86614(servantSellConfirmMenu, method);
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

  if ( (byte_4A4A894 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, isDecide);
    sub_1B863B8(&Method_NetworkManager_getRequest_ShopResetPurchaseNumRequest___, v5);
    sub_1B863B8(&NetworkManager_TypeInfo, v6);
    sub_1B863B8(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    sub_1B863B8(&Method_ShopRootComponent___c__DisplayClass158_0__CloseShopResetDialog_b__0__, v8);
    sub_1B863B8(&Method_ShopRootComponent___c__DisplayClass158_0__CloseShopResetDialog_b__1__, v9);
    sub_1B863B8(&ShopRootComponent___c__DisplayClass158_0_TypeInfo, v10);
    byte_4A4A894 = 1;
  }
  v11 = sub_1B86604(ShopRootComponent___c__DisplayClass158_0_TypeInfo);
  ShopRootComponent___c__DisplayClass158_0___ctor((ShopRootComponent___c__DisplayClass158_0_o *)v11, 0LL);
  if ( !v11 )
    goto LABEL_13;
  *(_QWORD *)(v11 + 16) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v11 + 16), (int32_t)this, v14, v15);
  if ( !isDecide )
  {
    shopResetConfirmDialog = (ShopSceneListViewControlHelper_o *)this->fields.shopResetConfirmDialog;
    if ( shopResetConfirmDialog )
    {
      v26 = 0LL;
      goto LABEL_12;
    }
LABEL_13:
    sub_1B86614(shopResetConfirmDialog, v13);
  }
  shopResetConfirmDialog = this->fields.listViewHelper;
  if ( !shopResetConfirmDialog )
    goto LABEL_13;
  ShopBuyItemListViewItem = ShopSceneListViewControlHelper__GetShopBuyItemListViewItem(
                              shopResetConfirmDialog,
                              this->fields.selectedItemIndex,
                              0LL);
  *(_QWORD *)(v11 + 24) = ShopBuyItemListViewItem;
  sub_1B8635C((CGThumbnailListItem_o *)(v11 + 24), (int32_t)ShopBuyItemListViewItem, v18, v19);
  v20 = (NetworkManager_ResultCallbackFunc_o *)sub_1B86604(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v20,
    (Il2CppObject *)v11,
    Method_ShopRootComponent___c__DisplayClass158_0__CloseShopResetDialog_b__0__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v20,
                     (const MethodInfo_2FF4AF4 *)Method_NetworkManager_getRequest_ShopResetPurchaseNumRequest___);
  *(_QWORD *)(v11 + 32) = Request_object;
  sub_1B8635C((CGThumbnailListItem_o *)(v11 + 32), (int32_t)Request_object, v22, v23);
  v24 = this->fields.shopResetConfirmDialog;
  v25 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(
    v25,
    (Il2CppObject *)v11,
    Method_ShopRootComponent___c__DisplayClass158_0__CloseShopResetDialog_b__1__,
    0LL);
  if ( !v24 )
    goto LABEL_13;
  shopResetConfirmDialog = (ShopSceneListViewControlHelper_o *)v24;
  v26 = v25;
LABEL_12:
  ShopResetConfirmDialogComponent__Close_33542040((ShopResetConfirmDialogComponent_o *)shopResetConfirmDialog, v26, v16);
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

  if ( (byte_4A4A88F & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_11945/*"SHOP_SCENE_VOICE_CANCEL"*/, *(_QWORD *)&result);
    sub_1B863B8(&StringLiteral_11944/*"SHOP_SCENE_VOICE_BACK2"*/, v6);
    byte_4A4A88F = 1;
  }
  if ( result )
    goto LABEL_6;
  shopPlayVoiceComponent = this->fields.shopPlayVoiceComponent;
  if ( !shopPlayVoiceComponent )
    goto LABEL_9;
  if ( !ShopPlayVoiceComponent__PlayVoiceOnce(
          shopPlayVoiceComponent,
          (System_String_o *)StringLiteral_11945/*"SHOP_SCENE_VOICE_CANCEL"*/,
          0x2000,
          v3) )
  {
LABEL_6:
    shopPlayVoiceComponent = this->fields.shopPlayVoiceComponent;
    if ( shopPlayVoiceComponent )
    {
      ShopPlayVoiceComponent__PlayVoiceOnce(shopPlayVoiceComponent, (System_String_o *)StringLiteral_11944/*"SHOP_SCENE_VOICE_BACK2"*/, 4096, v3);
      goto LABEL_8;
    }
LABEL_9:
    sub_1B86614(shopPlayVoiceComponent, *(_QWORD *)&result);
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

  if ( (byte_4A4A888 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_int__TypeInfo, *(_QWORD *)&buyCount);
    sub_1B863B8(&System_Action_TypeInfo, v5);
    sub_1B863B8(&Method_ShopRootComponent_RequestShop__, v6);
    sub_1B863B8(&Method_ShopRootComponent_SelectedBuyItemConfirm__, v7);
    byte_4A4A888 = 1;
  }
  this->fields.buyCount = buyCount;
  if ( buyCount )
  {
    buyStorageConfirmDialog = this->fields.buyStorageConfirmDialog;
    v9 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
    System_Action___ctor(v9, (Il2CppObject *)this, Method_ShopRootComponent_RequestShop__, 0LL);
    if ( buyStorageConfirmDialog )
    {
      BuyStorageConfirmDialogComponent__Close_33295588(buyStorageConfirmDialog, v9, 0LL);
      return;
    }
LABEL_13:
    sub_1B86614(listViewHelper, *(_QWORD *)&buyCount);
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
    v15 = (System_Action_int__o *)sub_1B86604(System_Action_int__TypeInfo);
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
  int v12; // w8
  void *v13; // x19
  unsigned int v14; // w21
  __int64 v15; // x8

  if ( (byte_4A4A891 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_ShopDetailMaster___, method);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v2);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__, v3);
    sub_1B863B8(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v4);
    sub_1B863B8(&ShopRootComponent_TypeInfo, v5);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4A4A891 = 1;
  }
  if ( !ShopRootComponent_TypeInfo->static_fields->isInitialized )
  {
    v7 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1B86604(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v7,
      (const MethodInfo_3264078 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    ShopRootComponent_TypeInfo->static_fields->shopDetailCheckList = v7;
    sub_1B8635C((CGThumbnailListItem_o *)ShopRootComponent_TypeInfo->static_fields, (int32_t)v7, v8, v9);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_15;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ShopDetailMaster___);
    if ( !Instance )
      goto LABEL_15;
    Instance = ShopDetailMaster__getShopDetailEntityList((ShopDetailMaster_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_15;
    v12 = *((_DWORD *)Instance + 6);
    v13 = Instance;
    if ( v12 >= 1 )
    {
      v14 = 0;
      while ( 1 )
      {
        if ( v14 >= v12 )
          sub_1B8661C(Instance, v11);
        v15 = *((_QWORD *)v13 + (int)v14 + 4);
        if ( !v15 )
          break;
        Instance = ShopRootComponent_TypeInfo->static_fields->shopDetailCheckList;
        if ( !Instance )
          break;
        System_Collections_Generic_Dictionary_int__int___set_Item(
          (System_Collections_Generic_Dictionary_int__int__o *)Instance,
          *(_DWORD *)(v15 + 16),
          0,
          (const MethodInfo_3264A28 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
        v12 = *((_DWORD *)v13 + 6);
        if ( (int)++v14 >= v12 )
          goto LABEL_13;
      }
LABEL_15:
      sub_1B86614(Instance, v11);
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

  if ( (byte_4A4A853 & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_12745/*"SpecialItemHelp"*/, v1);
    sub_1B863B8(&StringLiteral_12624/*"Shop15Help"*/, v2);
    sub_1B863B8(&StringLiteral_2288/*"AnonymousHelp"*/, v3);
    sub_1B863B8(&StringLiteral_10995/*"RarePriHelp"*/, v4);
    byte_4A4A853 = 1;
  }
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_2288/*"AnonymousHelp"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_10995/*"RarePriHelp"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_12745/*"SpecialItemHelp"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_12624/*"Shop15Help"*/, 0LL);
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
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.jumpInfo, 0, (int32_t)method, v3);
  }
}


void __fastcall ShopRootComponent__EndLimitCountSealInfoDialog(ShopRootComponent_o *this, const MethodInfo *method)
{
  SummonInfoDlgComponent_o *limitCountSealInfoDlg; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  ShopBuyItemListViewItem_o *ShopBuyItemListViewItem; // x0
  const MethodInfo *v7; // x4

  if ( (byte_4A4A863 & 1) == 0 )
  {
    sub_1B863B8(&Method_ShopRootComponent_EndLimitCountSealInfoDialog__, method);
    byte_4A4A863 = 1;
  }
  limitCountSealInfoDlg = this->fields.limitCountSealInfoDlg;
  if ( !limitCountSealInfoDlg )
    goto LABEL_8;
  SummonInfoDlgComponent__Close(limitCountSealInfoDlg, 0LL, 0LL);
  v4 = Method_ShopRootComponent_EndLimitCountSealInfoDialog__;
  if ( (*((_BYTE *)Method_ShopRootComponent_EndLimitCountSealInfoDialog__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1B863D0(Method_ShopRootComponent_EndLimitCountSealInfoDialog__);
  v5 = (System_Reflection_MethodBase_o *)sub_1B8639C(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0LL);
  limitCountSealInfoDlg = (SummonInfoDlgComponent_o *)this->fields.listViewHelper;
  if ( !limitCountSealInfoDlg )
LABEL_8:
    sub_1B86614(limitCountSealInfoDlg, method);
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

  if ( (byte_4A4A877 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_int__TypeInfo, result);
    sub_1B863B8(&Method_ShopRootComponent_EndSellResultServant__, v5);
    sub_1B863B8(&StringLiteral_21893/*"ng"*/, v6);
    byte_4A4A877 = 1;
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
  v10 = System_String__op_Equality(result, (System_String_o *)StringLiteral_21893/*"ng"*/, 0LL);
  ServantSellConfirmKindOnRequestEnd = ServantSellConfirmMenu__GetServantSellConfirmKindOnRequestEnd(tabKind, v10, 0LL);
  servantSellConfirmMenu = this->fields.servantSellConfirmMenu;
  selectedServantIds = this->fields.selectedServantIds;
  selectedCommandCodeIds = this->fields.selectedCommandCodeIds;
  v15 = ServantSellConfirmKindOnRequestEnd;
  v16 = (System_Action_int__o *)sub_1B86604(System_Action_int__TypeInfo);
  System_Action_int____ctor(v16, (Il2CppObject *)this, Method_ShopRootComponent_EndSellResultServant__, 0LL);
  if ( !servantSellConfirmMenu )
LABEL_8:
    sub_1B86614(servantSellMenu, result);
  ServantSellConfirmMenu__Open(servantSellConfirmMenu, v15, selectedServantIds, selectedCommandCodeIds, v16, 0LL);
  ShopRootComponent__RefreshInfo(this, v17);
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

  if ( (byte_4A4A86C & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_21893/*"ng"*/, result);
    byte_4A4A86C = 1;
  }
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_21893/*"ng"*/, 0LL) )
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
    sub_1B86614(listViewHelper, v5);
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
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t result; // w0
  __int64 v7; // x1
  Il2CppObject *Master_object; // x20
  NetworkManager_c *v9; // x0
  int64_t userIdNumber; // x21

  if ( (byte_4A4A883 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMaster_UserItemMaster___, shopEntity);
    sub_1B863B8(&DataManager_TypeInfo, v4);
    this = (ShopRootComponent_o *)sub_1B863B8(&NetworkManager_TypeInfo, v5);
    byte_4A4A883 = 1;
  }
  if ( !shopEntity )
LABEL_24:
    sub_1B86614(this, shopEntity);
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
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_UserItemMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4A48C25 )
      {
        sub_1B863B8(&NetworkManager_TypeInfo, v7);
        byte_4A48C25 = 1;
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
    return dword_BFB7B8[state - 1];
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
        sub_1B8661C(CommonConsumeEntities, item);
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
    sub_1B86614(this, item);
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
  __int64 v8; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x20
  unsigned __int64 v10; // x21

  if ( (byte_4A4A868 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_UserServantMaster___, selectServantIds);
    sub_1B863B8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v4);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4A4A868 = 1;
  }
  if ( !selectServantIds )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_14:
    sub_1B86614(Instance, v7);
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_UserServantMaster___);
  v8 = *(_QWORD *)&selectServantIds->max_length;
  if ( (int)v8 < 1 )
    return 0;
  v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v10 = 0LL;
  while ( 1 )
  {
    if ( v10 >= (unsigned int)v8 )
      sub_1B8661C(Instance, v7);
    if ( !v9 )
      goto LABEL_14;
    Instance = DataMasterBase_object__object__long___GetEntity(
                 v9,
                 selectServantIds->m_Items[v10],
                 (const MethodInfo_32167DC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( Instance )
    {
      Instance = (Il2CppObject *)UserServantEntity__isExceeded((UserServantEntity_o *)Instance, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        return 1;
    }
    LODWORD(v8) = selectServantIds->max_length;
    if ( (__int64)++v10 >= (int)v8 )
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

  if ( (byte_4A4A864 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_UserShopMaster___, item);
    sub_1B863B8(&NetworkManager_TypeInfo, v4);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4A4A864 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4A48C25 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, v7);
    byte_4A48C25 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !item || (Shop_k__BackingField = item->fields._Shop_k__BackingField) == 0LL || !MasterData_object )
LABEL_16:
    sub_1B86614(Instance, v7);
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
  uint32_t v15; // w0

  if ( (byte_4A4A88D & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_8733/*"ManaPrism"*/, jumpInfoName);
    sub_1B863B8(&StringLiteral_7025/*"GrailFragments"*/, v6);
    sub_1B863B8(&StringLiteral_14338/*"TradeAp"*/, v7);
    sub_1B863B8(&StringLiteral_8231/*"LeafExchange"*/, v8);
    sub_1B863B8(&StringLiteral_10646/*"PurePrismExchange"*/, v9);
    sub_1B863B8(&StringLiteral_6158/*"EventItem"*/, v10);
    sub_1B863B8(&StringLiteral_4500/*"CoinRoom"*/, v11);
    sub_1B863B8(&StringLiteral_12863/*"StoneFragments"*/, v12);
    sub_1B863B8(&StringLiteral_10996/*"RarePrism"*/, v13);
    sub_1B863B8(&StringLiteral_12463/*"SellServant"*/, v14);
    byte_4A4A88D = 1;
  }
  v15 = PrivateImplementationDetails___ComputeStringHash(jumpInfoName, 0LL);
  if ( v15 <= 0xBD992A97 )
  {
    if ( v15 > 0x897BAECB )
    {
      if ( v15 == -1542091583 )
      {
        if ( System_String__op_Equality(jumpInfoName, (System_String_o *)StringLiteral_10646/*"PurePrismExchange"*/, 0LL) )
          return 18;
      }
      else if ( v15 == -1477675373 )
      {
        if ( System_String__op_Equality(jumpInfoName, (System_String_o *)StringLiteral_7025/*"GrailFragments"*/, 0LL) )
          return 14;
      }
      else if ( v15 == -1114035561
             && System_String__op_Equality(jumpInfoName, (System_String_o *)StringLiteral_4500/*"CoinRoom"*/, 0LL) )
      {
        return 17;
      }
    }
    else if ( v15 == -1988383029 )
    {
      if ( System_String__op_Equality(jumpInfoName, (System_String_o *)StringLiteral_12863/*"StoneFragments"*/, 0LL) )
        return 4;
    }
    else if ( v15 == 1526818832 && System_String__op_Equality(jumpInfoName, (System_String_o *)StringLiteral_8231/*"LeafExchange"*/, 0LL) )
    {
      return 20;
    }
    return 1;
  }
  if ( v15 <= 0xCD42BE08 )
  {
    if ( v15 == -1075479726 )
    {
      if ( System_String__op_Equality(jumpInfoName, (System_String_o *)StringLiteral_12463/*"SellServant"*/, 0LL) )
        return 9;
    }
    else if ( v15 == -851263992 && System_String__op_Equality(jumpInfoName, (System_String_o *)StringLiteral_14338/*"TradeAp"*/, 0LL) )
    {
      return 19;
    }
    return 1;
  }
  if ( v15 == -74236182 )
  {
    if ( System_String__op_Equality(jumpInfoName, (System_String_o *)StringLiteral_10996/*"RarePrism"*/, 0LL) )
      return 3;
    return 1;
  }
  if ( v15 != -472076328 )
  {
    if ( v15 == -490311229 && System_String__op_Equality(jumpInfoName, (System_String_o *)StringLiteral_8733/*"ManaPrism"*/, 0LL) )
      return 2;
    return 1;
  }
  if ( !System_String__op_Equality(jumpInfoName, (System_String_o *)StringLiteral_6158/*"EventItem"*/, 0LL) )
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

  if ( (byte_4A4A858 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_ShopRootConstants_State__TypeInfo, method);
    sub_1B863B8(&System_Action_int__TypeInfo, v3);
    sub_1B863B8(&System_Action_ServantSellMenu_ResultKind__long____long____TypeInfo, v4);
    sub_1B863B8(&System_Action_TypeInfo, v5);
    sub_1B863B8(&Method_ShopRootComponent_OnMoveEnd__, v6);
    sub_1B863B8(&Method_ShopRootComponent_OnSelectBuyItem__, v7);
    sub_1B863B8(&Method_ShopRootComponent_OnSelectEvent__, v8);
    sub_1B863B8(&Method_ShopRootComponent_OnSelectSellServant__, v9);
    sub_1B863B8(&Method_ShopRootComponent_OnSelectTop__, v10);
    sub_1B863B8(&Method_ShopRootComponent_OpenHelp__, v11);
    sub_1B863B8(&Method_ShopRootComponent__Init_b__76_0__, v12);
    sub_1B863B8(&ShopSceneListViewControlHelper_TypeInfo, v13);
    sub_1B863B8(&StringLiteral_1/*""*/, v14);
    byte_4A4A858 = 1;
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
    v27 = (ShopSceneListViewControlHelper_o *)sub_1B86604(ShopSceneListViewControlHelper_TypeInfo);
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
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.listViewHelper, (int32_t)v27, v29, v30);
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
    v34 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
    System_Action___ctor(v34, (Il2CppObject *)this, Method_ShopRootComponent_OnMoveEnd__, 0LL);
    v35 = (System_Action_T__o *)sub_1B86604(System_Action_ShopRootConstants_State__TypeInfo);
    System_Action_Int32Enum____ctor(v35, (Il2CppObject *)this, (intptr_t)Method_ShopRootComponent_OnSelectTop__, 0LL);
    v36 = (System_Action_int__o *)sub_1B86604(System_Action_int__TypeInfo);
    System_Action_int____ctor(v36, (Il2CppObject *)this, (intptr_t)Method_ShopRootComponent_OnSelectEvent__, 0LL);
    v37 = (System_Action_int__o *)sub_1B86604(System_Action_int__TypeInfo);
    System_Action_int____ctor(v37, (Il2CppObject *)this, (intptr_t)Method_ShopRootComponent_OnSelectBuyItem__, 0LL);
    v38 = (System_Action_T1__T2__T3__o *)sub_1B86604(System_Action_ServantSellMenu_ResultKind__long____long____TypeInfo);
    System_Action_Int32Enum__object__object____ctor(
      v38,
      (Il2CppObject *)this,
      Method_ShopRootComponent_OnSelectSellServant__,
      0LL);
    v39 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
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
    v43 = StateOnInit - 1 > 0x13 ? 0 : dword_BFB7B8[StateOnInit - 1];
    isFromCoinRoom = this->fields.isFromCoinRoom;
    this->fields.inputState = v43;
    v45 = isFromCoinRoom ? this->fields.saveScrollBarValue : -1.0;
    listViewHelper = *p_listViewHelper;
    if ( !*p_listViewHelper )
LABEL_19:
      sub_1B86614(listViewHelper, v31);
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
      sub_1B8635C((CGThumbnailListItem_o *)&this->fields.jumpInfo, 0, v47, v48);
    }
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v50 = (System_Action_int__o *)sub_1B86604(System_Action_int__TypeInfo);
    System_Action_int____ctor(v50, (Il2CppObject *)this, Method_ShopRootComponent__Init_b__76_0__, 0LL);
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

  if ( (byte_4A4A857 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&AtlasManager_TypeInfo, v3);
    sub_1B863B8(&Method_ShopRootComponent___c__DisplayClass73_0__LoadBanner_b__0__, v4);
    sub_1B863B8(&ShopRootComponent___c__DisplayClass73_0_TypeInfo, v5);
    sub_1B863B8(&StringLiteral_1/*""*/, v6);
    byte_4A4A857 = 1;
  }
  v7 = sub_1B86604(ShopRootComponent___c__DisplayClass73_0_TypeInfo);
  ShopRootComponent___c__DisplayClass73_0___ctor((ShopRootComponent___c__DisplayClass73_0_o *)v7, 0LL);
  if ( !v7 )
    sub_1B86614(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v7 + 16), (int32_t)this, v10, v11);
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
  v17 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(v17, (Il2CppObject *)v7, Method_ShopRootComponent___c__DisplayClass73_0__LoadBanner_b__0__, 0LL);
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

  if ( (byte_4A4A890 & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, *(_QWORD *)&result);
    byte_4A4A890 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_1B86614(Instance, v6);
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

  if ( (byte_4A4A87F & 1) == 0 )
  {
    sub_1B863B8(&Method_ShopRootComponent_OnClickBack__, method);
    byte_4A4A87F = 1;
  }
  if ( this->fields.inputState == 2 )
  {
    v3 = Method_ShopRootComponent_OnClickBack__;
    if ( (*((_BYTE *)Method_ShopRootComponent_OnClickBack__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B863D0(Method_ShopRootComponent_OnClickBack__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B8639C(v3, v3[4]);
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

  if ( (byte_4A4A879 & 1) == 0 )
  {
    sub_1B863B8(&Method_ShopRootComponent_OnClickHelp__, method);
    byte_4A4A879 = 1;
  }
  v3 = Method_ShopRootComponent_OnClickHelp__;
  if ( (*((_BYTE *)Method_ShopRootComponent_OnClickHelp__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B863D0(Method_ShopRootComponent_OnClickHelp__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B8639C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
  ShopRootComponent__OpenHelp(this, v5);
}


void __fastcall ShopRootComponent__OnClickHelpClose(ShopRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  unsigned int state; // w8
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  ShopHelpListViewManager_o *helpListViewManager; // x20
  System_Action_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4A4A87C & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&Method_ShopRootComponent_CheckTutorial__, v3);
    sub_1B863B8(&Method_ShopRootComponent_OnClickHelpClose__, v4);
    byte_4A4A87C = 1;
  }
  state = this->fields.state;
  if ( state > 0x14 || ((1 << state) & 0x100068) == 0 )
  {
    v6 = Method_ShopRootComponent_OnClickHelpClose__;
    if ( (*((_BYTE *)Method_ShopRootComponent_OnClickHelpClose__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1B863D0(Method_ShopRootComponent_OnClickHelpClose__);
    v7 = (System_Reflection_MethodBase_o *)sub_1B8639C(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 1, 0, 0LL);
    helpListViewManager = this->fields.helpListViewManager;
    v9 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
    System_Action___ctor(v9, (Il2CppObject *)this, Method_ShopRootComponent_CheckTutorial__, 0LL);
    if ( !helpListViewManager )
      sub_1B86614(v10, v11);
    ShopHelpListViewManager__CloseHelpDialog(helpListViewManager, v9, v12);
  }
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

  if ( (byte_4A4A875 & 1) == 0 )
  {
    sub_1B863B8(&BgmManager_TypeInfo, method);
    sub_1B863B8(&SoundManager_TypeInfo, v3);
    byte_4A4A875 = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  MainBgmName = BgmManager__GetMainBgmName(0LL);
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

  if ( (byte_4A4A871 & 1) == 0 )
  {
    sub_1B863B8(&ScriptManager_CallbackFunc_TypeInfo, isOk);
    sub_1B863B8(&Method_DataManager_GetMasterData_ShopScriptMaster___, v4);
    sub_1B863B8(&Method_DataMasterBase_ShopScriptMaster__ShopScriptEntity__int__TryGetEntity__, v5);
    sub_1B863B8(&ScriptManager_TypeInfo, v6);
    sub_1B863B8(&Method_ShopRootComponent_OnEndPlayScriptRequestShop__, v7);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4A4A871 = 1;
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
  requestResultDialog = (RequestResultDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !requestResultDialog )
    goto LABEL_20;
  requestResultDialog = (RequestResultDialog_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)requestResultDialog,
                                                   (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ShopScriptMaster___);
  if ( !messageLabel || !requestResultDialog )
    goto LABEL_20;
  requestResultDialog = (RequestResultDialog_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)requestResultDialog,
                                                   &entity,
                                                   messageLabel->fields.id,
                                                   (const MethodInfo_32142CC *)Method_DataMasterBase_ShopScriptMaster__ShopScriptEntity__int__TryGetEntity__);
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
    sub_1B86614(requestResultDialog, isOk);
  monitor = (System_String_o *)entity[2].monitor;
  v13 = (ScriptManager_CallbackFunc_o *)sub_1B86604(ScriptManager_CallbackFunc_TypeInfo);
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

  if ( (byte_4A4A872 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, isExit);
    sub_1B863B8(&Method_ShopRootComponent_OnEndFadeRequestShop__, v4);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4A4A872 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_ShopRootComponent_OnEndFadeRequestShop__, 0LL);
  if ( !Instance )
    sub_1B86614(v8, v9);
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

  if ( (byte_4A4A874 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&AvalonSceneManager_TypeInfo, v3);
    sub_1B863B8(&Method_ShopRootComponent_RequestEnd__, v4);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4A4A874 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = AvalonSceneManager_TypeInfo;
  v8 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v7 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v7->static_fields->DEFAULT_FADE_TIME;
  v10 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_ShopRootComponent_RequestEnd__, 0LL);
  if ( !v8 )
    sub_1B86614(v11, v12);
  CommonUI__maskFadein(v8, DEFAULT_FADE_TIME, v10, 0LL);
}


void __fastcall ShopRootComponent__OnEndShopReset(ShopRootComponent_o *this, bool isDecide, const MethodInfo *method)
{
  ShopResetConfirmDialogComponent_o *shopResetConfirmDialog; // x0
  const MethodInfo *v5; // x1

  shopResetConfirmDialog = this->fields.shopResetConfirmDialog;
  if ( !shopResetConfirmDialog )
    sub_1B86614(0LL, isDecide);
  ShopResetConfirmDialogComponent__Close_33542040(shopResetConfirmDialog, 0LL, method);
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
    sub_1B86614(0LL, count);
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

  if ( (byte_4A4A878 & 1) == 0 )
  {
    sub_1B863B8(&ShopBuyItemListViewManager_TypeInfo, receivedNewServant);
    byte_4A4A878 = 1;
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
    sub_1B86614(BuyItemKind, v7);
  }
  ShopSceneListViewControlHelper__SetListViewInvalidate(BuyItemKind, 0LL);
  return 1;
}


void __fastcall ShopRootComponent__OnGiftOpen(ShopRootComponent_o *this, const MethodInfo *method)
{
  ShopPlayVoiceComponent_o *shopPlayVoiceComponent; // x0

  shopPlayVoiceComponent = this->fields.shopPlayVoiceComponent;
  if ( !shopPlayVoiceComponent )
    sub_1B86614(0LL, method);
  ShopPlayVoiceComponent__StopVoice(shopPlayVoiceComponent, method);
}


void __fastcall ShopRootComponent__OnInitEnd(ShopRootComponent_o *this, int32_t state, const MethodInfo *method)
{
  ShopSceneListViewControlHelper_o *listViewHelper; // x0

  if ( this->fields.inputState == 1 )
  {
    listViewHelper = this->fields.listViewHelper;
    if ( !listViewHelper )
      sub_1B86614(0LL, state);
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
      sub_1B86614(0LL, state);
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
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  ShopSceneListViewControlHelper_o *listViewHelper; // x0
  ShopBuyItemListViewItem_o *ShopBuyItemListViewItem; // x0
  const MethodInfo *v10; // x2
  bool IsBulk; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4A4A882 & 1) == 0 )
  {
    sub_1B863B8(&Method_ShopRootComponent_OnSelectBuyItem__, *(_QWORD *)&index);
    byte_4A4A882 = 1;
  }
  if ( this->fields.inputState == 2 )
  {
    this->fields.inputState = 0;
    v5 = Method_ShopRootComponent_OnSelectBuyItem__;
    if ( (*((_BYTE *)Method_ShopRootComponent_OnSelectBuyItem__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B863D0(Method_ShopRootComponent_OnSelectBuyItem__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B8639C(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    listViewHelper = this->fields.listViewHelper;
    this->fields.selectedItemIndex = index;
    if ( !listViewHelper )
      sub_1B86614(0LL, v7);
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

  if ( (byte_4A4A884 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_EventDetailMaster___, *(_QWORD *)&index);
    sub_1B863B8(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v5);
    sub_1B863B8(&SceneJumpInfo_TypeInfo, v6);
    sub_1B863B8(&Method_ShopRootComponent_OnSelectEvent__, v7);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1B863B8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v9);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1B863B8(&StringLiteral_9387/*"NormalEventShop"*/, v11);
    byte_4A4A884 = 1;
  }
  v12 = Method_ShopRootComponent_OnSelectEvent__;
  if ( (*((_BYTE *)Method_ShopRootComponent_OnSelectEvent__ + 83) & 2) != 0 )
    v12 = (_QWORD *)sub_1B863D0(Method_ShopRootComponent_OnSelectEvent__);
  v13 = (System_Reflection_MethodBase_o *)sub_1B8639C(v12, v12[4]);
  OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0, 0LL);
  listViewHelper = this->fields.listViewHelper;
  this->fields.selectedEventIndex = index;
  if ( !listViewHelper )
    goto LABEL_16;
  ShopEventListViewItem = ShopSceneListViewControlHelper__GetShopEventListViewItem(listViewHelper, index, 0LL);
  listViewHelper = (ShopSceneListViewControlHelper_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !listViewHelper )
    goto LABEL_16;
  listViewHelper = (ShopSceneListViewControlHelper_o *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)listViewHelper,
                                                         (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !ShopEventListViewItem )
    goto LABEL_16;
  if ( !listViewHelper )
    goto LABEL_16;
  listViewHelper = (ShopSceneListViewControlHelper_o *)DataMasterBase_object__object__int___GetEntity(
                                                         (DataMasterBase_TMaster__TEntity__PKType__o *)listViewHelper,
                                                         ShopEventListViewItem->fields.eventId,
                                                         (const MethodInfo_3214280 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  if ( !listViewHelper )
    goto LABEL_16;
  if ( EventDetailEntity__IsEventShop((EventDetailEntity_o *)listViewHelper, 0LL) )
  {
    eventId = ShopEventListViewItem->fields.eventId;
    v19 = (SceneJumpInfo_o *)sub_1B86604(SceneJumpInfo_TypeInfo);
    SceneJumpInfo___ctor_39633936(v19, (System_String_o *)StringLiteral_9387/*"NormalEventShop"*/, eventId, 0LL);
    if ( v19 )
    {
      SceneJumpInfo__SetReturnNowScene(v19, 0LL);
      listViewHelper = (ShopSceneListViewControlHelper_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( listViewHelper )
      {
        CommonUI__CheckChangeOtherConnectMarkFromEventId(
          (CommonUI_o *)listViewHelper,
          ShopEventListViewItem->fields.eventId,
          1,
          0LL);
        listViewHelper = (ShopSceneListViewControlHelper_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( listViewHelper )
        {
          AvalonSceneManager__transitionScene((AvalonSceneManager_o *)listViewHelper, 72, 1, (Il2CppObject *)v19, 0LL);
          return;
        }
      }
    }
LABEL_16:
    sub_1B86614(listViewHelper, v14);
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
    sub_1B8635C(
      (CGThumbnailListItem_o *)&this->fields.selectedServantIds,
      (int32_t)servantList,
      (int32_t)servantList,
      (const MethodInfo *)commandCodeList);
    this->fields.selectedCommandCodeIds = commandCodeList;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.selectedCommandCodeIds, (int32_t)commandCodeList, v8, v9);
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

  if ( (byte_4A4A881 & 1) == 0 )
  {
    sub_1B863B8(&CoinRoomUtility_TypeInfo, *(_QWORD *)&state);
    sub_1B863B8(&Method_ShopRootComponent_OnSelectTop__, v5);
    sub_1B863B8(&ShopRootConstants_TypeInfo, v6);
    byte_4A4A881 = 1;
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
        v11 = (_QWORD *)sub_1B863D0(Method_ShopRootComponent_OnSelectTop__);
      v12 = (System_Reflection_MethodBase_o *)sub_1B8639C(v11, v11[4]);
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
  __int64 v16; // x22
  ShopEntity_o *KindByShopState; // x0
  __int64 v18; // x1
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  ShopBuyItemListViewItem_o **v21; // x23
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  ShopBuyItemListViewItem_o *v24; // x20
  struct ShopBuyBulkItemConfirmMenu_o *ApSeedBulkExchangeConfirmMenu; // x21
  ShopEntity_o *v26; // x22
  System_Action_int__o *v27; // x23
  int32_t v28; // w4
  ShopBuyBulkItemConfirmMenu_o *v29; // x0
  ShopEntity_o *v30; // x1
  ShopBuyItemListViewItem_o *v31; // x2
  System_Action_int__o *v32; // x3
  ShopBuyItemListViewItem_o *v33; // x8
  ShopEntity_o *Shop_k__BackingField; // x23
  int32_t ShopKind_k__BackingField; // w24
  struct ShopBuyItemConfirmMenu_o *buyItemConfirmMenu; // x21
  System_Action_int__o *v37; // x25
  System_Action_o *v38; // x19
  ShopBuyItemConfirmMenu_o *v39; // x0
  ShopEntity_o *v40; // x1
  int32_t v41; // w2
  System_Action_int__o *v42; // x3
  int32_t v43; // w5
  System_Action_o *v44; // x6
  ShopBuyItemConfirmMenu_o *v45; // x20
  ShopBuyItemListViewItem_o *v46; // x21
  System_Action_o *v47; // x0
  __int64 *v48; // x8
  System_Action_o *v49; // x23
  System_Action_int__o *v50; // x22
  int32_t v51; // w20
  const MethodInfo *v52; // x2
  BuyStorageConfirmDialogComponent_o *buyStorageNotificationDialog; // x21
  ShopBuyItemListViewItem_o *v54; // x22
  System_Action_int__o *v55; // x23
  int32_t v56; // w2
  int v57; // w22
  ShopBuyItemListViewItem_o *v58; // x8
  ShopEntity_o *v59; // x21
  int32_t v60; // w22
  struct ShopBuyItemConfirmMenu_o *ApSeedExchangeConfirmMenu; // x20
  System_Action_int__o *v62; // x23
  ShopBuyItemListViewItem_o *v63; // x20
  struct ShopBuyBulkItemConfirmMenu_o *buyBulkItemConfirmMenu; // x21
  ShopEntity_o *v65; // x22
  System_Action_int__o *v66; // x23
  ShopEntity_o *v67; // x22
  int32_t v68; // w21
  BuyStorageConfirmDialogComponent_o *buyStorageConfirmDialog; // x21
  ShopBuyItemListViewItem_o *v70; // x22
  System_Action_int__o *v71; // x23

  if ( (byte_4A4A861 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_int__TypeInfo, *(_QWORD *)&state);
    sub_1B863B8(&System_Action_TypeInfo, v9);
    sub_1B863B8(&Method_ShopRootComponent_CloseStorageDetailCheckConfirm__, v10);
    sub_1B863B8(&Method_ShopRootComponent_SelectedBuyItemConfirm__, v11);
    sub_1B863B8(&Method_ShopRootComponent___c__DisplayClass86_0__OpenConfirmMenu_b__0__, v12);
    sub_1B863B8(&Method_ShopRootComponent___c__DisplayClass86_0__OpenConfirmMenu_b__1__, v13);
    sub_1B863B8(&Method_ShopRootComponent___c__DisplayClass86_0__OpenConfirmMenu_b__2__, v14);
    sub_1B863B8(&ShopRootComponent___c__DisplayClass86_0_TypeInfo, v15);
    byte_4A4A861 = 1;
  }
  v16 = sub_1B86604(ShopRootComponent___c__DisplayClass86_0_TypeInfo);
  ShopRootComponent___c__DisplayClass86_0___ctor((ShopRootComponent___c__DisplayClass86_0_o *)v16, 0LL);
  if ( !v16 )
    goto LABEL_51;
  *(_QWORD *)(v16 + 16) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v16 + 16), (int32_t)this, v19, v20);
  *(_QWORD *)(v16 + 24) = item;
  v21 = (ShopBuyItemListViewItem_o **)(v16 + 24);
  sub_1B8635C((CGThumbnailListItem_o *)(v16 + 24), (int32_t)item, v22, v23);
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
      v33 = *v21;
      if ( !*v21 )
        goto LABEL_51;
      Shop_k__BackingField = v33->fields._Shop_k__BackingField;
      ShopKind_k__BackingField = v33->fields._ShopKind_k__BackingField;
      buyItemConfirmMenu = this->fields.buyItemConfirmMenu;
      v37 = (System_Action_int__o *)sub_1B86604(System_Action_int__TypeInfo);
      System_Action_int____ctor(v37, (Il2CppObject *)this, Method_ShopRootComponent_SelectedBuyItemConfirm__, 0LL);
      v38 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
      System_Action___ctor(
        v38,
        (Il2CppObject *)v16,
        Method_ShopRootComponent___c__DisplayClass86_0__OpenConfirmMenu_b__1__,
        0LL);
      if ( !buyItemConfirmMenu )
        goto LABEL_51;
      v39 = buyItemConfirmMenu;
      v40 = Shop_k__BackingField;
      v41 = ShopKind_k__BackingField;
      v42 = v37;
      v43 = state;
      v44 = v38;
      goto LABEL_14;
    case 3:
    case 15:
      if ( isBulk )
        goto LABEL_6;
      v45 = this->fields.buyItemConfirmMenu;
      v46 = *(ShopBuyItemListViewItem_o **)(v16 + 24);
      v47 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
      v48 = &Method_ShopRootComponent___c__DisplayClass86_0__OpenConfirmMenu_b__0__;
      goto LABEL_17;
    case 11:
    case 12:
      KindByShopState = (ShopEntity_o *)BuyStorageConfirmDialogComponent__GetKindByShopState(state, 0LL);
      if ( !*v21 )
        goto LABEL_51;
      v51 = (int)KindByShopState;
      KindByShopState = (*v21)->fields._Shop_k__BackingField;
      if ( !KindByShopState )
        goto LABEL_51;
      KindByShopState = (ShopEntity_o *)ShopEntity__IsSoldOut(KindByShopState, 0LL);
      if ( ((unsigned __int8)KindByShopState & 1) != 0 )
      {
        buyStorageNotificationDialog = this->fields.buyStorageNotificationDialog;
        v54 = *v21;
        v55 = (System_Action_int__o *)sub_1B86604(System_Action_int__TypeInfo);
        System_Action_int____ctor(v55, (Il2CppObject *)this, Method_ShopRootComponent_SelectedBuyItemConfirm__, 0LL);
        if ( buyStorageNotificationDialog )
        {
          v56 = 1;
LABEL_37:
          BuyStorageConfirmDialogComponent__NotificationDialogOpen(
            buyStorageNotificationDialog,
            v51,
            v56,
            v54,
            v55,
            0LL);
          return;
        }
        goto LABEL_51;
      }
      if ( !*v21 )
        goto LABEL_51;
      KindByShopState = (ShopEntity_o *)ShopRootComponent__GetCurrency(
                                          (ShopRootComponent_o *)KindByShopState,
                                          (*v21)->fields._Shop_k__BackingField,
                                          v52);
      if ( !*v21 )
        goto LABEL_51;
      v57 = (int)KindByShopState;
      KindByShopState = (*v21)->fields._Shop_k__BackingField;
      if ( !KindByShopState )
        goto LABEL_51;
      KindByShopState = (ShopEntity_o *)ShopEntity__GetPrice(KindByShopState, 0LL);
      if ( v57 < (int)KindByShopState )
      {
        buyStorageNotificationDialog = this->fields.buyStorageNotificationDialog;
        v54 = *v21;
        v55 = (System_Action_int__o *)sub_1B86604(System_Action_int__TypeInfo);
        System_Action_int____ctor(v55, (Il2CppObject *)this, Method_ShopRootComponent_SelectedBuyItemConfirm__, 0LL);
        if ( buyStorageNotificationDialog )
        {
          v56 = 2;
          goto LABEL_37;
        }
LABEL_51:
        sub_1B86614(KindByShopState, v18);
      }
      if ( isBulk )
      {
        v63 = *v21;
        if ( !*v21 )
          goto LABEL_51;
        buyBulkItemConfirmMenu = this->fields.buyBulkItemConfirmMenu;
        v65 = v63->fields._Shop_k__BackingField;
        v66 = (System_Action_int__o *)sub_1B86604(System_Action_int__TypeInfo);
        System_Action_int____ctor(v66, (Il2CppObject *)this, Method_ShopRootComponent_SelectedBuyItemConfirm__, 0LL);
        if ( !buyBulkItemConfirmMenu )
          goto LABEL_51;
        v29 = buyBulkItemConfirmMenu;
        v30 = v65;
        v31 = v63;
        v32 = v66;
        v28 = 0;
LABEL_10:
        ShopBuyBulkItemConfirmMenu__Open(v29, v30, v31, v32, v28, 0LL);
        return;
      }
      buyStorageConfirmDialog = this->fields.buyStorageConfirmDialog;
      this->fields.buyCount = 1;
      v70 = *v21;
      v71 = (System_Action_int__o *)sub_1B86604(System_Action_int__TypeInfo);
      System_Action_int____ctor(
        v71,
        (Il2CppObject *)this,
        Method_ShopRootComponent_CloseStorageDetailCheckConfirm__,
        0LL);
      if ( !buyStorageConfirmDialog )
        goto LABEL_51;
      BuyStorageConfirmDialogComponent__Open(buyStorageConfirmDialog, v51, v70, 1, v71, 0LL);
      return;
    case 19:
      if ( isBulk )
      {
        v24 = *v21;
        if ( !*v21 )
          goto LABEL_51;
        ApSeedBulkExchangeConfirmMenu = this->fields.ApSeedBulkExchangeConfirmMenu;
        goto LABEL_8;
      }
      v58 = *v21;
      if ( !*v21 )
        goto LABEL_51;
      v59 = v58->fields._Shop_k__BackingField;
      v60 = v58->fields._ShopKind_k__BackingField;
      ApSeedExchangeConfirmMenu = this->fields.ApSeedExchangeConfirmMenu;
      v62 = (System_Action_int__o *)sub_1B86604(System_Action_int__TypeInfo);
      System_Action_int____ctor(v62, (Il2CppObject *)this, Method_ShopRootComponent_SelectedBuyItemConfirm__, 0LL);
      if ( !ApSeedExchangeConfirmMenu )
        goto LABEL_51;
      v39 = ApSeedExchangeConfirmMenu;
      v40 = v59;
      v41 = v60;
      break;
    case 21:
      if ( isBulk )
      {
LABEL_6:
        v24 = *v21;
        if ( !*v21 )
          goto LABEL_51;
        ApSeedBulkExchangeConfirmMenu = this->fields.buyBulkItemConfirmMenu;
LABEL_8:
        v26 = v24->fields._Shop_k__BackingField;
        v27 = (System_Action_int__o *)sub_1B86604(System_Action_int__TypeInfo);
        System_Action_int____ctor(v27, (Il2CppObject *)this, Method_ShopRootComponent_SelectedBuyItemConfirm__, 0LL);
        if ( !ApSeedBulkExchangeConfirmMenu )
          goto LABEL_51;
        v28 = 8;
        v29 = ApSeedBulkExchangeConfirmMenu;
        v30 = v26;
        v31 = v24;
        v32 = v27;
        goto LABEL_10;
      }
      KindByShopState = (ShopEntity_o *)*v21;
      if ( !*v21 )
        goto LABEL_51;
      KindByShopState = (ShopEntity_o *)ShopBuyItemListViewItem__get_IsItemTypeRarePri(
                                          (ShopBuyItemListViewItem_o *)KindByShopState,
                                          0LL);
      v45 = this->fields.buyItemConfirmMenu;
      v46 = *v21;
      if ( ((unsigned __int8)KindByShopState & 1) != 0 )
      {
        v47 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
        v48 = &Method_ShopRootComponent___c__DisplayClass86_0__OpenConfirmMenu_b__2__;
LABEL_17:
        v49 = v47;
        System_Action___ctor(v47, (Il2CppObject *)v16, *v48, 0LL);
        v50 = (System_Action_int__o *)sub_1B86604(System_Action_int__TypeInfo);
        System_Action_int____ctor(v50, (Il2CppObject *)this, Method_ShopRootComponent_SelectedBuyItemConfirm__, 0LL);
        if ( v45 )
        {
          ShopBuyItemConfirmMenu__OpenAfterCheckedFree(v45, v46, v49, v50, 0LL);
          return;
        }
        goto LABEL_51;
      }
      if ( !v46 )
        goto LABEL_51;
      v67 = v46->fields._Shop_k__BackingField;
      v68 = v46->fields._ShopKind_k__BackingField;
      v62 = (System_Action_int__o *)sub_1B86604(System_Action_int__TypeInfo);
      System_Action_int____ctor(v62, (Il2CppObject *)this, Method_ShopRootComponent_SelectedBuyItemConfirm__, 0LL);
      if ( !v45 )
        goto LABEL_51;
      v39 = v45;
      v40 = v67;
      v41 = v68;
      break;
    default:
      return;
  }
  v42 = v62;
  v43 = 0;
  v44 = 0LL;
LABEL_14:
  ShopBuyItemConfirmMenu__Open(v39, v40, v41, v42, 0, v43, v44, 8, 0LL);
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

  if ( (byte_4A4A885 & 1) == 0 )
  {
    sub_1B863B8(&BalanceConfig_TypeInfo, method);
    sub_1B863B8(&CommonConfirmDialog_ClickDelegate_TypeInfo, v3);
    sub_1B863B8(&Method_DataManager_GetMasterData_ShopDetailMaster___, v4);
    sub_1B863B8(&Method_ShopRootComponent_CloseDetaiCheckConfirm__, v5);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4A4A885 = 1;
  }
  listViewHelper = this->fields.listViewHelper;
  if ( !listViewHelper )
    goto LABEL_13;
  ShopBuyItemListViewItem = ShopSceneListViewControlHelper__GetShopBuyItemListViewItem(
                              listViewHelper,
                              this->fields.selectedItemIndex,
                              0LL);
  listViewHelper = (ShopSceneListViewControlHelper_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !listViewHelper )
    goto LABEL_13;
  listViewHelper = (ShopSceneListViewControlHelper_o *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)listViewHelper,
                                                         (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ShopDetailMaster___);
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
  listViewHelper = (ShopSceneListViewControlHelper_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !ShopDetailEntity )
    goto LABEL_13;
  v12 = (CommonUI_o *)listViewHelper;
  message = ShopDetailEntity->fields.message;
  v14 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B86604(CommonConfirmDialog_ClickDelegate_TypeInfo);
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
    sub_1B86614(listViewHelper, method);
  CommonUI__OpenConfirmDialog_30483332(
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
  char v9; // w20
  UnityEngine_Transform_o *transform; // x21
  int v11; // s0
  UnityEngine_GameObject_o *gameObject; // x0
  ShopRootConstants_c *v15; // x8
  UnityEngine_GameObject_o *v16; // x19

  if ( (byte_4A4A88A & 1) == 0 )
  {
    sub_1B863B8(&ShopBuyItemListViewManager_TypeInfo, *(_QWORD *)&state);
    sub_1B863B8(&ShopRootConstants_TypeInfo, v7);
    byte_4A4A88A = 1;
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
  *(UnityEngine_Vector3_o *)&v11 = ShopRootConstants__GetGiftButtonPos(v9 & 1, 0LL);
  if ( !transform )
    goto LABEL_19;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v11, 0LL);
  if ( (v9 & 1) == 0 )
    return;
  shopEventItemDrawBase = (UnityEngine_GameObject_o *)this->fields.shopEventItemDrawBase;
  if ( !shopEventItemDrawBase )
LABEL_19:
    sub_1B86614(shopEventItemDrawBase, *(_QWORD *)&state);
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
  int32_t state; // w9
  System_Collections_IEnumerator_o *v7; // x1
  Il2CppObject *Instance; // x20
  System_Action_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w1
  int32_t v13; // w19
  System_String_o *HelpSaveKey; // x0

  if ( (byte_4A4A87A & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&Method_ShopRootComponent_OnClickHelpClose__, v3);
    sub_1B863B8(&ShopRootConstants_TypeInfo, v4);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4A4A87A = 1;
  }
  state = this->fields.state;
  switch ( state )
  {
    case 1:
      v7 = ShopRootComponent__WaitPurchase(this, method);
      UnityEngine_MonoBehaviour__StartCoroutine_69341456((UnityEngine_MonoBehaviour_o *)this, v7, 0LL);
      return;
    case 2:
    case 4:
      return;
    case 3:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v9 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, (intptr_t)Method_ShopRootComponent_OnClickHelpClose__, 0LL);
      if ( !Instance )
        goto LABEL_18;
      v12 = 20;
      break;
    case 5:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v9 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, (intptr_t)Method_ShopRootComponent_OnClickHelpClose__, 0LL);
      if ( !Instance )
        goto LABEL_18;
      v12 = 47;
      break;
    case 6:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v9 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, (intptr_t)Method_ShopRootComponent_OnClickHelpClose__, 0LL);
      if ( !Instance )
        goto LABEL_18;
      v12 = 19;
      break;
    default:
      if ( state != 20 )
        return;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v9 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, (intptr_t)Method_ShopRootComponent_OnClickHelpClose__, 0LL);
      if ( !Instance )
LABEL_18:
        sub_1B86614(v10, v11);
      v12 = 1029;
      break;
  }
  CommonUI__OpenTutorialImageDialog_30509028((CommonUI_o *)Instance, v12, -1, v9, 0LL, 0LL, 0LL);
  v13 = this->fields.state;
  if ( !ShopRootConstants_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
  HelpSaveKey = ShopRootConstants__GetHelpSaveKey(v13, 0LL);
  UnityEngine_PlayerPrefs__SetInt(HelpSaveKey, 1, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
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

  if ( (byte_4A4A862 & 1) == 0 )
  {
    sub_1B863B8(&SummonInfoDlgComponent_CallbackFunc_TypeInfo, *(_QWORD *)&svtId);
    sub_1B863B8(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v7);
    sub_1B863B8(&DataManager_TypeInfo, v8);
    sub_1B863B8(&LocalizationManager_TypeInfo, v9);
    sub_1B863B8(&Method_ShopRootComponent_EndLimitCountSealInfoDialog__, v10);
    sub_1B863B8(&StringLiteral_8122/*"LIMIT_COUNT_SEALED_TITLE"*/, v11);
    byte_4A4A862 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
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
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_8122/*"LIMIT_COUNT_SEALED_TITLE"*/, 0LL);
  v18 = (SummonInfoDlgComponent_CallbackFunc_o *)sub_1B86604(SummonInfoDlgComponent_CallbackFunc_TypeInfo);
  SummonInfoDlgComponent_CallbackFunc___ctor(
    v18,
    (Il2CppObject *)this,
    (intptr_t)Method_ShopRootComponent_EndLimitCountSealInfoDialog__,
    0LL);
  if ( !limitCountSealInfoDlg )
LABEL_10:
    sub_1B86614(Master_object, v13);
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

  if ( (byte_4A4A88E & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, *(_QWORD *)&state);
    sub_1B863B8(&StonePurchaseMenu_CallbackFunc_TypeInfo, v5);
    sub_1B863B8(&Method_ShopRootComponent_CloseStonePurchaseMenu__, v6);
    sub_1B863B8(&Method_ShopRootComponent_RefreshInfo__, v7);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    byte_4A4A88E = 1;
  }
  if ( state == 10 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v10 = (StonePurchaseMenu_CallbackFunc_o *)sub_1B86604(StonePurchaseMenu_CallbackFunc_TypeInfo);
    StonePurchaseMenu_CallbackFunc___ctor(
      v10,
      (Il2CppObject *)this,
      Method_ShopRootComponent_CloseStonePurchaseMenu__,
      0LL);
    v11 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
    System_Action___ctor(v11, (Il2CppObject *)this, Method_ShopRootComponent_RefreshInfo__, 0LL);
    if ( !Instance )
      sub_1B86614(v12, v13);
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

  if ( (byte_4A4A886 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_int__TypeInfo, method);
    sub_1B863B8(&Method_ShopRootComponent_CloseStorageDetailCheckConfirm__, v3);
    byte_4A4A886 = 1;
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
        v10 = (System_Action_int__o *)sub_1B86604(System_Action_int__TypeInfo),
        System_Action_int____ctor(
          v10,
          (Il2CppObject *)this,
          Method_ShopRootComponent_CloseStorageDetailCheckConfirm__,
          0LL),
        !buyStorageConfirmDialog) )
  {
    sub_1B86614(listViewHelper, method);
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
  const MethodInfo *v19; // x3
  __int64 v20; // x8
  __int64 v21; // x8
  int v22; // w21
  QuestRewardInfo_o *v23; // x22
  _QWORD *v24; // x21
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  __int64 v27; // x8
  __int64 v28; // x8
  __int64 v29; // x8
  _DWORD *v30; // x9
  int32_t buyCount; // w8
  Il2CppObject *Instance; // x19
  AvalonSceneManager_c *v33; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v35; // x21

  if ( (byte_4A4A86D & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, item);
    sub_1B863B8(&AvalonSceneManager_TypeInfo, v5);
    sub_1B863B8(&BalanceConfig_TypeInfo, v6);
    sub_1B863B8(&QuestRewardInfo_TypeInfo, v7);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1B863B8(&Method_ShopRootComponent___c__DisplayClass100_0__PlayLvExceedItemReleaseEffect_b__0__, v9);
    sub_1B863B8(&ShopRootComponent___c__DisplayClass100_0_TypeInfo, v10);
    byte_4A4A86D = 1;
  }
  v11 = sub_1B86604(ShopRootComponent___c__DisplayClass100_0_TypeInfo);
  ShopRootComponent___c__DisplayClass100_0___ctor((ShopRootComponent___c__DisplayClass100_0_o *)v11, 0LL);
  if ( !v11 )
    goto LABEL_22;
  *(_QWORD *)(v11 + 24) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v11 + 24), (int32_t)this, v14, v15);
  *(_QWORD *)(v11 + 32) = item;
  v16 = (ShopBuyItemListViewItem_o **)(v11 + 32);
  sub_1B8635C((CGThumbnailListItem_o *)(v11 + 32), (int32_t)item, v17, v18);
  if ( !*(_QWORD *)(v11 + 32) )
    goto LABEL_22;
  v20 = *(_QWORD *)(*(_QWORD *)(v11 + 32) + 112LL);
  if ( !v20 )
    goto LABEL_22;
  v21 = *(_QWORD *)(v20 + 56);
  if ( !v21 )
    goto LABEL_22;
  if ( !*(_DWORD *)(v21 + 24) )
LABEL_23:
    sub_1B8661C(v12, v13);
  v22 = *(_DWORD *)(v21 + 32);
  v12 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v12 = BalanceConfig_TypeInfo;
  }
  if ( v22 == v12->static_fields->LvExceedItemId )
  {
    v23 = (QuestRewardInfo_o *)sub_1B86604(QuestRewardInfo_TypeInfo);
    QuestRewardInfo___ctor(v23, 0LL);
    *(_QWORD *)(v11 + 16) = v23;
    v24 = (_QWORD *)(v11 + 16);
    sub_1B8635C((CGThumbnailListItem_o *)(v11 + 16), (int32_t)v23, v25, v26);
    v27 = *(_QWORD *)(v11 + 32);
    if ( !v27 )
      goto LABEL_22;
    v28 = *(_QWORD *)(v27 + 112);
    if ( !v28 )
      goto LABEL_22;
    v29 = *(_QWORD *)(v28 + 56);
    if ( !v29 )
      goto LABEL_22;
    if ( *(_DWORD *)(v29 + 24) )
    {
      v30 = (_DWORD *)*v24;
      if ( *v24 )
      {
        v30[5] = *(_DWORD *)(v29 + 32);
        buyCount = this->fields.buyCount;
        v30[4] = 2;
        v30[6] = buyCount;
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v33 = AvalonSceneManager_TypeInfo;
        if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
          v33 = AvalonSceneManager_TypeInfo;
        }
        DEFAULT_FADE_TIME = v33->static_fields->DEFAULT_FADE_TIME;
        v35 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
        System_Action___ctor(
          v35,
          (Il2CppObject *)v11,
          Method_ShopRootComponent___c__DisplayClass100_0__PlayLvExceedItemReleaseEffect_b__0__,
          0LL);
        if ( Instance )
        {
          CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v35, 0LL);
          return;
        }
      }
LABEL_22:
      sub_1B86614(v12, v13);
    }
    goto LABEL_23;
  }
  v13 = *v16;
  if ( !*v16 )
    goto LABEL_22;
  ShopRootComponent__ShowNormalItemDialog(this, v13, v13->fields._Shop_k__BackingField, v19);
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

  if ( (byte_4A4A873 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, shopEntity);
    sub_1B863B8(&AvalonSceneManager_TypeInfo, v5);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B863B8(&Method_ShopRootComponent___c__DisplayClass107_0__PlayServantCostumeReleaseEffect_b__0__, v7);
    sub_1B863B8(&ShopRootComponent___c__DisplayClass107_0_TypeInfo, v8);
    byte_4A4A873 = 1;
  }
  v9 = sub_1B86604(ShopRootComponent___c__DisplayClass107_0_TypeInfo);
  ShopRootComponent___c__DisplayClass107_0___ctor((ShopRootComponent___c__DisplayClass107_0_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_8;
  *(_QWORD *)(v9 + 16) = shopEntity;
  sub_1B8635C((CGThumbnailListItem_o *)(v9 + 16), (int32_t)shopEntity, v12, v13);
  *(_QWORD *)(v9 + 24) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v9 + 24), (int32_t)this, v14, v15);
  ShopRootComponent__SetActionBG(this, 1, v16);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v18 = AvalonSceneManager_TypeInfo;
  v19 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v18 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v18->static_fields->DEFAULT_FADE_TIME;
  v21 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(
    v21,
    (Il2CppObject *)v9,
    Method_ShopRootComponent___c__DisplayClass107_0__PlayServantCostumeReleaseEffect_b__0__,
    0LL);
  if ( !v19 )
LABEL_8:
    sub_1B86614(v10, v11);
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
    sub_1B86614(BackVoiceMasterKey, v6);
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
    sub_1B86614(EnterVoiceMasterKey, v6);
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
    sub_1B86614(standFigureBack, method);
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

  if ( (byte_4A4A87E & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_22061/*"ok"*/, result);
    byte_4A4A87E = 1;
  }
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_22061/*"ok"*/, 0LL) )
  {
    listViewHelper = this->fields.listViewHelper;
    this->fields.inputState = 4;
    if ( !listViewHelper )
      sub_1B86614(0LL, v5);
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

  if ( (byte_4A4A85B & 1) == 0 )
  {
    sub_1B863B8(&ShopBuyItemListViewManager_TypeInfo, *(_QWORD *)&state);
    byte_4A4A85B = 1;
  }
  currencyInfoController = this->fields.currencyInfoController;
  if ( !ShopBuyItemListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ShopBuyItemListViewManager_TypeInfo);
  CurrencyKind = ShopBuyItemListViewManager__GetCurrencyKind(state, 0LL);
  if ( !currencyInfoController )
    sub_1B86614(CurrencyKind, v7);
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

  if ( (byte_4A4A859 & 1) == 0 )
  {
    sub_1B863B8(&AtlasManager_TypeInfo, method);
    sub_1B863B8(&BalanceConfig_TypeInfo, v3);
    sub_1B863B8(&Method_DataManager_GetMasterData_ItemMaster___, v4);
    sub_1B863B8(&Method_DataManager_GetMasterData_UserItemMaster___, v5);
    sub_1B863B8(&LocalizationManager_TypeInfo, v6);
    sub_1B863B8(&NetworkManager_TypeInfo, v7);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1B863B8(&StringLiteral_20044/*"img_bg_evocation"*/, v9);
    sub_1B863B8(&StringLiteral_20050/*"img_bg_pureprism_itemstock_resetticket"*/, v10);
    sub_1B863B8(&StringLiteral_20049/*"img_bg_pp"*/, v11);
    byte_4A4A859 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_71;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ItemMaster___);
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_71;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_UserItemMaster___);
  stoneFragmentsInfoLabel = this->fields.stoneFragmentsInfoLabel;
  v22 = (UserItemMaster_o *)MasterData_object;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4A48C25 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, v14);
    byte_4A48C25 = 1;
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
  if ( !byte_4A48C25 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, v23);
    byte_4A48C25 = 1;
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
  if ( !byte_4A48C25 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, v26);
    byte_4A48C25 = 1;
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
  if ( !byte_4A48C25 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, v31);
    byte_4A48C25 = 1;
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
  if ( !byte_4A48C25 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, v36);
    byte_4A48C25 = 1;
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
  AtlasManager__SetShopBanner_38817408(this->fields.purePriInfo2, (System_String_o *)StringLiteral_20049/*"img_bg_pp"*/, 0LL);
  if ( !byte_4A48C25 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, v39);
    byte_4A48C25 = 1;
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
  AtlasManager__SetShopBanner_38817408(this->fields.purePriShopResetInfo, (System_String_o *)StringLiteral_20050/*"img_bg_pureprism_itemstock_resetticket"*/, 0LL);
  Instance = this->fields.revivalItemInfo;
  if ( !Instance )
    goto LABEL_71;
  Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_71;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  revivalItemInfoLabel = this->fields.revivalItemInfoLabel;
  if ( !byte_4A48C25 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, v42);
    byte_4A48C25 = 1;
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
  AtlasManager__SetShopBanner_38817408(this->fields.revivalItemInfo, (System_String_o *)StringLiteral_20044/*"img_bg_evocation"*/, 0LL);
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
    sub_1B86614(Instance, v14);
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

  if ( (byte_4A4A86B & 1) == 0 )
  {
    sub_1B863B8(&System_Action_int__TypeInfo, method);
    sub_1B863B8(&Method_ShopRootComponent__RequestEnd_b__98_0__, v3);
    byte_4A4A86B = 1;
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
        v10 = (System_Action_int__o *)sub_1B86604(System_Action_int__TypeInfo);
        System_Action_int____ctor(v10, (Il2CppObject *)this, Method_ShopRootComponent__RequestEnd_b__98_0__, 0LL);
        if ( v9 )
        {
          ServantSellConfirmMenu__OpenCommandCodeRemoveResult(v9, v10, 0LL);
          return;
        }
      }
LABEL_10:
      sub_1B86614(servantSellConfirmMenu, v7);
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

  if ( (byte_4A4A876 & 1) == 0 )
  {
    sub_1B863B8(&Method_NetworkManager_getRequest_SellServantRequest___, method);
    sub_1B863B8(&NetworkManager_TypeInfo, v4);
    sub_1B863B8(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    sub_1B863B8(&Method_ShopRootComponent_EndRequestSellServant__, v6);
    sub_1B863B8(&StringLiteral_21893/*"ng"*/, v7);
    byte_4A4A876 = 1;
  }
  if ( this->fields.selectedServantIds )
  {
    v8 = (NetworkManager_ResultCallbackFunc_o *)sub_1B86604(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_ShopRootComponent_EndRequestSellServant__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v8,
                       (const MethodInfo_2FF4AF4 *)Method_NetworkManager_getRequest_SellServantRequest___);
    if ( !Request_object )
      sub_1B86614(0LL, v10);
    SellServantRequest__beginRequest(
      (SellServantRequest_o *)Request_object,
      this->fields.selectedServantIds,
      this->fields.selectedCommandCodeIds,
      0LL);
  }
  else
  {
    ShopRootComponent__EndRequestSellServant(this, (System_String_o *)StringLiteral_21893/*"ng"*/, v2);
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

  if ( (byte_4A4A86A & 1) == 0 )
  {
    sub_1B863B8(&Method_NetworkManager_getRequest_PurchaseRequest___, method);
    sub_1B863B8(&NetworkManager_TypeInfo, v3);
    sub_1B863B8(&NetworkManager_ResultCallbackFunc_TypeInfo, v4);
    sub_1B863B8(&Method_ShopRootComponent_EndRequestShop__, v5);
    byte_4A4A86A = 1;
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
      v10 = (NetworkManager_ResultCallbackFunc_o *)sub_1B86604(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v10,
        (Il2CppObject *)this,
        Method_ShopRootComponent_EndRequestShop__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      listViewHelper = (ShopSceneListViewControlHelper_o *)NetworkManager__getRequest_object_(
                                                             v10,
                                                             (const MethodInfo_2FF4AF4 *)Method_NetworkManager_getRequest_PurchaseRequest___);
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
      sub_1B86614(listViewHelper, method);
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
  if ( (byte_4A4A860 & 1) == 0 )
  {
    sub_1B863B8(&SummonInfoDlgComponent_CallbackFunc_TypeInfo, *(_QWORD *)&index);
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v7);
    sub_1B863B8(&Method_DataManager_GetMaster_CombineLimitReleaseMaster___, v8);
    sub_1B863B8(&Method_DataManager_GetMaster_ServantMaster___, v9);
    sub_1B863B8(&DataManager_TypeInfo, v10);
    sub_1B863B8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11);
    sub_1B863B8(&int_TypeInfo, v12);
    sub_1B863B8(&LocalizationManager_TypeInfo, v13);
    sub_1B863B8(&Method_ShopRootComponent_EndLimitCountSealInfoDialog__, v14);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1B863B8(&StringLiteral_3602/*"COMBINE_LIMIT_SEALED_TITLE"*/, v16);
    sub_1B863B8(&StringLiteral_3601/*"COMBINE_LIMIT_SEALED_MESSAGE_{0}"*/, v17);
    byte_4A4A860 = 1;
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
      listViewHelper = (ShopSceneListViewControlHelper_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( listViewHelper )
      {
        listViewHelper = (ShopSceneListViewControlHelper_o *)DataManager__GetMasterData_object_(
                                                               (DataManager_o *)listViewHelper,
                                                               (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
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
            Master_object = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_ServantMaster___);
            listViewHelper = (ShopSceneListViewControlHelper_o *)ShopBuyItemListViewItem__get_TargetId(v22, 0LL);
            if ( Master_object )
            {
              Entity = DataMasterBase_object__object__int___GetEntity(
                         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                         (int32_t)listViewHelper,
                         (const MethodInfo_3214280 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              listViewHelper = (ShopSceneListViewControlHelper_o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_CombineLimitReleaseMaster___);
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
                                                                       (System_String_o *)StringLiteral_3602/*"COMBINE_LIMIT_SEALED_TITLE"*/,
                                                                       0LL);
                if ( Entity )
                {
                  v32 = (System_String_o *)listViewHelper;
                  klass_high = HIDWORD(Entity[7].klass);
                  v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &klass_high, v29, v30, v31);
                  v34 = System_String__Format((System_String_o *)StringLiteral_3601/*"COMBINE_LIMIT_SEALED_MESSAGE_{0}"*/, v33, 0LL);
                  listViewHelper = (ShopSceneListViewControlHelper_o *)LocalizationManager__Get(v34, 0LL);
                  if ( v22->fields._Shop_k__BackingField )
                  {
                    v35 = (System_String_o *)listViewHelper;
                    Name = (Il2CppObject *)ShopEntity__getName(v22->fields._Shop_k__BackingField, 0LL);
                    v37 = System_String__Format(v35, Name, 0LL);
                    limitCountSealInfoDlg = this->fields.limitCountSealInfoDlg;
                    v39 = v37;
                    v40 = (SummonInfoDlgComponent_CallbackFunc_o *)sub_1B86604(SummonInfoDlgComponent_CallbackFunc_TypeInfo);
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
    sub_1B86614(listViewHelper, *(_QWORD *)&index);
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

  if ( (byte_4A4A85C & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, *(_QWORD *)&state);
    sub_1B863B8(&CoinRoomUtility_TypeInfo, v5);
    sub_1B863B8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v6);
    sub_1B863B8(&Method_ShopRootComponent___c__DisplayClass81_0__SelectMenu_b__0__, v7);
    sub_1B863B8(&ShopRootComponent___c__DisplayClass81_0_TypeInfo, v8);
    byte_4A4A85C = 1;
  }
  v9 = sub_1B86604(ShopRootComponent___c__DisplayClass81_0_TypeInfo);
  ShopRootComponent___c__DisplayClass81_0___ctor((ShopRootComponent___c__DisplayClass81_0_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_19;
  *(_QWORD *)(v9 + 16) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v9 + 16), (int32_t)this, v12, v13);
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
            shopPlayVoiceComponent = (ShopPlayVoiceComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
            if ( shopPlayVoiceComponent )
            {
              AvalonSceneManager__pushScene((AvalonSceneManager_o *)shopPlayVoiceComponent, 90, 1, 0LL, 0LL);
              return;
            }
          }
        }
LABEL_19:
        sub_1B86614(shopPlayVoiceComponent, v11);
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
    v19 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
    System_Action___ctor(
      v19,
      (Il2CppObject *)v9,
      Method_ShopRootComponent___c__DisplayClass81_0__SelectMenu_b__0__,
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

  if ( (byte_4A4A869 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_int__TypeInfo, method);
    sub_1B863B8(&Method_ShopRootComponent_SellServantConfirm__, v3);
    sub_1B863B8(&Method_ShopRootComponent___c__DisplayClass96_0__SelectSellServantConfirm_b__0__, v4);
    sub_1B863B8(&ShopRootComponent___c__DisplayClass96_0_TypeInfo, v5);
    byte_4A4A869 = 1;
  }
  v6 = sub_1B86604(ShopRootComponent___c__DisplayClass96_0_TypeInfo);
  ShopRootComponent___c__DisplayClass96_0___ctor((ShopRootComponent___c__DisplayClass96_0_o *)v6, 0LL);
  if ( !v6 )
    goto LABEL_18;
  *(_QWORD *)(v6 + 16) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v6 + 16), (int32_t)this, v9, v10);
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
        v16 = (System_Action_int__o *)sub_1B86604(System_Action_int__TypeInfo);
        System_Action_int____ctor(
          v16,
          (Il2CppObject *)v6,
          Method_ShopRootComponent___c__DisplayClass96_0__SelectSellServantConfirm_b__0__,
          0LL);
        if ( servantSellConfirmMenu )
        {
          ServantSellConfirmMenu__OpenSellEquippedLastSvtWarning(servantSellConfirmMenu, 4, v14, v16, 0LL);
          return;
        }
LABEL_18:
        sub_1B86614(servantSellMenu, v8);
      }
      if ( !servantSellConfirmMenu )
        goto LABEL_18;
      ServantSellConfirmMenu__Init(this->fields.servantSellConfirmMenu, 0LL);
      v25 = this->fields.servantSellConfirmMenu;
      v26 = *(_DWORD *)(v6 + 24);
      v27 = this->fields.selectedServantIds;
      selectedCommandCodeIds = this->fields.selectedCommandCodeIds;
      v29 = (System_Action_int__o *)sub_1B86604(System_Action_int__TypeInfo);
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
      v19 = (System_Action_int__o *)sub_1B86604(System_Action_int__TypeInfo);
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

  if ( (byte_4A4A865 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_ShopDetailMaster___, *(_QWORD *)&buyCount);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v5);
    sub_1B863B8(&ShopRootComponent_TypeInfo, v6);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4A4A865 = 1;
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
      listViewHelper = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( listViewHelper )
      {
        listViewHelper = DataManager__GetMasterData_object_(
                           (DataManager_o *)listViewHelper,
                           (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ShopDetailMaster___);
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
                       (const MethodInfo_32649A0 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__) )
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
    sub_1B86614(listViewHelper, *(_QWORD *)&buyCount);
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
      sub_1B86614(servantSellConfirmMenu, *(_QWORD *)&count);
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

  if ( (byte_4A4A892 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, isEnable);
    byte_4A4A892 = 1;
  }
  actionBg = (UnityEngine_Object_o *)this->fields.actionBg;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(actionBg, 0LL, 0LL) )
  {
    v7 = this->fields.actionBg;
    if ( !v7 )
      sub_1B86614(0LL, v6);
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

  if ( (byte_4A4A85F & 1) == 0 )
  {
    sub_1B863B8(&AvalonSceneManager_TypeInfo, *(_QWORD *)&state);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_4A4A85F = 1;
  }
  if ( state == 15 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v7 = (CommonUI_o *)Instance;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    if ( !v7 )
      sub_1B86614(Instance, v6);
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

  if ( (byte_4A4A85E & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, *(_QWORD *)&state);
    sub_1B863B8(&AvalonSceneManager_TypeInfo, v6);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1B863B8(&Method_ShopRootComponent___c__DisplayClass83_0__SetFadeOut_b__0__, v8);
    sub_1B863B8(&ShopRootComponent___c__DisplayClass83_0_TypeInfo, v9);
    byte_4A4A85E = 1;
  }
  v10 = sub_1B86604(ShopRootComponent___c__DisplayClass83_0_TypeInfo);
  ShopRootComponent___c__DisplayClass83_0___ctor((ShopRootComponent___c__DisplayClass83_0_o *)v10, 0LL);
  if ( !v10 )
    goto LABEL_10;
  *(_QWORD *)(v10 + 16) = endFade;
  sub_1B8635C((CGThumbnailListItem_o *)(v10 + 16), (int32_t)endFade, v13, v14);
  if ( state == 15 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v16 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v16 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v16->static_fields->DEFAULT_FADE_TIME;
    v18 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
    System_Action___ctor(
      v18,
      (Il2CppObject *)v10,
      Method_ShopRootComponent___c__DisplayClass83_0__SetFadeOut_b__0__,
      0LL);
    if ( Instance )
    {
      CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v18, 0LL);
      return;
    }
LABEL_10:
    sub_1B86614(v11, v12);
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

  if ( (byte_4A4A889 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__, entity);
    sub_1B863B8(&ShopRootComponent_TypeInfo, v6);
    byte_4A4A889 = 1;
  }
  if ( entity && (decide || entity->fields.frequencyType != 1) )
  {
    shopDetailCheckList = ShopRootComponent_TypeInfo->static_fields->shopDetailCheckList;
    if ( !shopDetailCheckList )
      sub_1B86614(0LL, entity);
    System_Collections_Generic_Dictionary_int__int___set_Item(
      shopDetailCheckList,
      entity->fields.shopId,
      1,
      (const MethodInfo_3264A28 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
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
    sub_1B86614(informationPanel, isDisp);
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

  if ( (byte_4A4A86E & 1) == 0 )
  {
    sub_1B863B8(&System_Action_bool__TypeInfo, item);
    sub_1B863B8(&Method_DataManager_GetMasterData_ItemMaster___, v7);
    sub_1B863B8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v8);
    sub_1B863B8(&Method_ShopRootComponent_OnEndItemDialog__, v9);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1B863B8(&StringLiteral_1/*""*/, v11);
    byte_4A4A86E = 1;
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
    RequestResultDialogMessageNormal = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( RequestResultDialogMessageNormal )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)RequestResultDialogMessageNormal,
                            (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ItemMaster___);
      RequestResultDialogMessageNormal = (System_String_o *)ShopEntity__get_TargetId(entity, 0LL);
      if ( MasterData_object )
      {
        v16 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                (int32_t)RequestResultDialogMessageNormal,
                (const MethodInfo_3214280 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
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
        v23 = (System_Action_bool__o *)sub_1B86604(System_Action_bool__TypeInfo);
        System_Action_bool____ctor(v23, (Il2CppObject *)this, Method_ShopRootComponent_OnEndItemDialog__, 0LL);
        if ( requestResultDialog )
        {
          RequestResultDialog__Open(requestResultDialog, v14, v22, RequestResultDialogItemMessageNormal, v23, 0LL);
          return;
        }
      }
    }
LABEL_11:
    sub_1B86614(RequestResultDialogMessageNormal, v13);
  }
  v24 = this->fields.requestResultDialog;
  v25 = (System_Action_bool__o *)sub_1B86604(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v25, (Il2CppObject *)this, Method_ShopRootComponent_OnEndItemDialog__, 0LL);
  if ( !v24 )
    goto LABEL_11;
  RequestResultDialog__Open_33308960(v24, (System_String_o *)StringLiteral_1/*""*/, v14, v25, -1, 0LL);
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

  if ( (byte_4A4A86F & 1) == 0 )
  {
    sub_1B863B8(&System_Action_bool__TypeInfo, entity);
    sub_1B863B8(&Method_ShopRootComponent_OnEndItemDialog__, v5);
    sub_1B863B8(&StringLiteral_1/*""*/, v6);
    byte_4A4A86F = 1;
  }
  RequestResultDialogMessage = ShopRequestResultDialogMessageMaker__GetRequestResultDialogMessage(
                                 entity,
                                 this->fields.buyCount,
                                 method);
  requestResultDialog = this->fields.requestResultDialog;
  v9 = RequestResultDialogMessage;
  v10 = (System_Action_bool__o *)sub_1B86604(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v10, (Il2CppObject *)this, Method_ShopRootComponent_OnEndItemDialog__, 0LL);
  if ( !requestResultDialog )
    sub_1B86614(v11, v12);
  RequestResultDialog__Open_33308960(requestResultDialog, (System_String_o *)StringLiteral_1/*""*/, v9, v10, -1, 0LL);
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

  if ( (byte_4A4A870 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_int__TypeInfo, item);
    sub_1B863B8(&Method_ShopRootComponent_OnEndStorageDialog__, v5);
    byte_4A4A870 = 1;
  }
  state = this->fields.state;
  if ( state == 12 )
  {
    buyStorageResultDialog = this->fields.buyStorageResultDialog;
    v8 = (System_Action_int__o *)sub_1B86604(System_Action_int__TypeInfo);
    System_Action_int____ctor(v8, (Il2CppObject *)this, Method_ShopRootComponent_OnEndStorageDialog__, 0LL);
    if ( buyStorageResultDialog )
    {
      v12 = 1;
      v11 = buyStorageResultDialog;
      goto LABEL_9;
    }
LABEL_11:
    sub_1B86614(v9, v10);
  }
  if ( state == 11 )
  {
    v7 = this->fields.buyStorageResultDialog;
    v8 = (System_Action_int__o *)sub_1B86604(System_Action_int__TypeInfo);
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

  if ( (byte_4A4A85A & 1) == 0 )
  {
    sub_1B863B8(&LocalizationManager_TypeInfo, method);
    byte_4A4A85A = 1;
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
    sub_1B86614(SelfUserGame, v4);
  UILabel__set_text(apInfoLabel, (System_String_o *)SelfUserGame, 0LL);
}


void __fastcall ShopRootComponent__UpdateGiftBadgeNum(ShopRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *giftButtonControl; // x20
  __int64 v4; // x1
  GiftButtonCtrl_o *v5; // x0

  if ( (byte_4A4A893 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, method);
    byte_4A4A893 = 1;
  }
  giftButtonControl = (UnityEngine_Object_o *)this->fields.giftButtonControl;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(giftButtonControl, 0LL, 0LL) )
  {
    v5 = this->fields.giftButtonControl;
    if ( !v5 )
      sub_1B86614(0LL, v4);
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

  if ( (byte_4A4A87B & 1) == 0 )
  {
    sub_1B863B8(&ShopRootComponent__WaitPurchase_d__121_TypeInfo, method);
    byte_4A4A87B = 1;
  }
  v3 = sub_1B86604(ShopRootComponent__WaitPurchase_d__121_TypeInfo);
  ShopRootComponent__WaitPurchase_d__121___ctor((ShopRootComponent__WaitPurchase_d__121_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_1B86614(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v6, v7);
  return (System_Collections_IEnumerator_o *)v3;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopRootComponent___Init_b__76_0(
        ShopRootComponent_o *this,
        int32_t stoneCount,
        const MethodInfo *method)
{
  UILabel_o *stoneInfoLabel; // x20
  System_String_o *NumberFormat; // x0
  __int64 v7; // x1

  if ( (byte_4A4A895 & 1) == 0 )
  {
    sub_1B863B8(&LocalizationManager_TypeInfo, *(_QWORD *)&stoneCount);
    byte_4A4A895 = 1;
  }
  stoneInfoLabel = this->fields.stoneInfoLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  NumberFormat = LocalizationManager__GetNumberFormat(stoneCount, 0LL);
  if ( !stoneInfoLabel )
    sub_1B86614(NumberFormat, v7);
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
    sub_1B86614(servantSellConfirmMenu, v4);
  }
  ServantSellConfirmMenu__ClearCommandCodeRemoveResult(servantSellConfirmMenu, 0LL);
}


void __fastcall ShopRootComponent____n__0(ShopRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent__beginStartUp_39635980((SceneRootComponent_o *)this, 0LL);
}


void __fastcall ShopRootComponent__beginFinish(ShopRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ShopTopListViewManager_o *topListViewManager; // x0

  ShopRootComponent__Quit(this, method);
  topListViewManager = this->fields.topListViewManager;
  if ( !topListViewManager )
    sub_1B86614(0LL, v3);
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

  if ( (byte_4A4A854 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&System_Func_bool__bool__TypeInfo, v3);
    sub_1B863B8(&Method_ShopRootComponent_OnGiftClose__, v4);
    sub_1B863B8(&Method_ShopRootComponent_OnGiftOpen__, v5);
    sub_1B863B8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v6);
    byte_4A4A854 = 1;
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
  topListViewManager = (ShopTopListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
  v11 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_ShopRootComponent_OnGiftOpen__, 0LL);
  if ( !giftButtonControl
    || (giftButtonControl->fields.OnGiftOpenAdditionalAction = v11,
        sub_1B8635C(
          (CGThumbnailListItem_o *)&giftButtonControl->fields.OnGiftOpenAdditionalAction,
          (int32_t)v11,
          v12,
          v13),
        v14 = this->fields.giftButtonControl,
        v15 = (System_Func_bool__bool__o *)sub_1B86604(System_Func_bool__bool__TypeInfo),
        System_Func_bool__bool____ctor(v15, (Il2CppObject *)this, Method_ShopRootComponent_OnGiftClose__, 0LL),
        !v14) )
  {
LABEL_11:
    sub_1B86614(topListViewManager, method);
  }
  v14->fields.OnGiftCloseAdditionalAction = v15;
  sub_1B8635C((CGThumbnailListItem_o *)&v14->fields.OnGiftCloseAdditionalAction, (int32_t)v15, v16, v17);
}


void __fastcall ShopRootComponent__beginResume(ShopRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent__beginResume_39636164((SceneRootComponent_o *)this, 0LL);
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

  if ( (byte_4A4A855 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, data);
    sub_1B863B8(&AtlasManager_TypeInfo, v6);
    sub_1B863B8(&BgmManager_TypeInfo, v7);
    sub_1B863B8(&FSUtility_TypeInfo, v8);
    sub_1B863B8(&int_TypeInfo, v9);
    sub_1B863B8(&SceneJumpInfo_TypeInfo, v10);
    sub_1B863B8(&SceneList_TypeInfo, v11);
    sub_1B863B8(&Method_ShopRootComponent_LoadBanner__, v12);
    sub_1B863B8(&Method_ShopRootComponent__beginStartUp_b__71_0__, v13);
    sub_1B863B8(&ShopRootConstants_TypeInfo, v14);
    sub_1B863B8(&SoundManager_TypeInfo, v15);
    byte_4A4A855 = 1;
  }
  p_jumpInfo = &this->fields.jumpInfo;
  this->fields.jumpInfo = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.jumpInfo, 0, (int32_t)method, v3);
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
      sub_1B8635C((CGThumbnailListItem_o *)&this->fields.jumpInfo, v21, (int32_t)v17, v18);
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
        sub_1B8635C((CGThumbnailListItem_o *)&this->fields.jumpInfo, 0, (int32_t)v17, v27);
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
  v30 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(v30, (Il2CppObject *)this, Method_ShopRootComponent__beginStartUp_b__71_0__, 0LL);
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
  sub_1B8635C(p_standFigureBack, (int32_t)standFigureBack, v32, v33);
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
  v48 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
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
    sub_1B86614(titleInfo, v23);
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

  if ( (byte_4A4A856 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_GuideMaster___, method);
    sub_1B863B8(&ShopRootConstants_TypeInfo, v3);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4A4A856 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_GuideMaster___)) == 0LL )
  {
    sub_1B86614(Instance, v6);
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t _1__state; // w8
  ShopRootComponent___c_c *v8; // x0
  System_Func_bool__o *_9__121_0; // x20
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
  if ( (byte_4A4A8A7 & 1) == 0 )
  {
    sub_1B863B8(&System_Func_bool__TypeInfo, method);
    sub_1B863B8(&Method_ShopRootComponent___c__WaitPurchase_b__121_0__, v4);
    sub_1B863B8(&ShopRootComponent___c_TypeInfo, v5);
    this = (ShopRootComponent__WaitPurchase_d__121_o *)sub_1B863B8(&UnityEngine_WaitUntil_TypeInfo, v6);
    byte_4A4A8A7 = 1;
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
      sub_1B86614(this, method);
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
  _9__121_0 = v8->static_fields->__9__121_0;
  if ( !_9__121_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = ShopRootComponent___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v8->static_fields->__9;
    _9__121_0 = (System_Func_bool__o *)sub_1B86604(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(_9__121_0, v10, Method_ShopRootComponent___c__WaitPurchase_b__121_0__, 0LL);
    static_fields = ShopRootComponent___c_TypeInfo->static_fields;
    static_fields->__9__121_0 = _9__121_0;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__121_0, (int32_t)_9__121_0, v12, v13);
  }
  v14 = (UnityEngine_WaitUntil_o *)sub_1B86604(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v14, _9__121_0, 0LL);
  v3->fields.__2__current = (Il2CppObject *)v14;
  p__2__current = (CGThumbnailListItem_o *)&v3->fields.__2__current;
  sub_1B8635C(p__2__current, (int32_t)v14, v16, v17);
  result = 1;
  LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
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

  v2 = sub_1B863CC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B86604(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B863CC(&Method_ShopRootComponent__WaitPurchase_d__121_System_Collections_IEnumerator_Reset__);
  sub_1B864E0(v3, v4);
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
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4A4A896 & 1) == 0 )
  {
    sub_1B863B8(&ShopRootComponent___c_TypeInfo, v1);
    byte_4A4A896 = 1;
  }
  v2 = (Il2CppObject *)sub_1B86604(ShopRootComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ShopRootComponent___c_TypeInfo->static_fields->__9 = (struct ShopRootComponent___c_o *)v2;
  sub_1B8635C((CGThumbnailListItem_o *)ShopRootComponent___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall ShopRootComponent___c___ctor(ShopRootComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ShopRootComponent___c___WaitPurchase_b__121_0(ShopRootComponent___c_o *this, const MethodInfo *method)
{
  PurchaseBehaviour_c *v2; // x0

  if ( (byte_4A4A897 & 1) == 0 )
  {
    sub_1B863B8(&PurchaseBehaviour_TypeInfo, method);
    byte_4A4A897 = 1;
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
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  System_Action_o *_9__1; // x22
  CommonUI_o *v8; // x21
  QuestRewardInfo_o *questRewardInfo; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4A4A898 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B863B8(&Method_ShopRootComponent___c__DisplayClass100_0__PlayLvExceedItemReleaseEffect_b__1__, v4);
    byte_4A4A898 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__1 = this->fields.__9__1;
  v8 = (CommonUI_o *)Instance;
  questRewardInfo = this->fields.questRewardInfo;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_ShopRootComponent___c__DisplayClass100_0__PlayLvExceedItemReleaseEffect_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.__9__1, (int32_t)_9__1, v10, v11);
  }
  if ( !v8 )
    sub_1B86614(Instance, v6);
  CommonUI__LoadItemGetEffect(v8, questRewardInfo, _9__1, 0LL);
}


void __fastcall ShopRootComponent___c__DisplayClass100_0___PlayLvExceedItemReleaseEffect_b__1(
        ShopRootComponent___c__DisplayClass100_0_o *this,
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

  if ( (byte_4A4A899 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B863B8(&Method_ShopRootComponent___c__DisplayClass100_0__PlayLvExceedItemReleaseEffect_b__2__, v4);
    byte_4A4A899 = 1;
  }
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    _9__2 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_ShopRootComponent___c__DisplayClass100_0__PlayLvExceedItemReleaseEffect_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.__9__2, (int32_t)_9__2, v12, v13);
  }
  if ( !v8 )
LABEL_9:
    sub_1B86614(Instance, v6);
  CommonUI__OpenItemGetEffect(v8, v10, 0, questRewardInfo, _9__2, 0LL);
}


void __fastcall ShopRootComponent___c__DisplayClass100_0___PlayLvExceedItemReleaseEffect_b__2(
        ShopRootComponent___c__DisplayClass100_0_o *this,
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

  if ( (byte_4A4A89A & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&AvalonSceneManager_TypeInfo, v3);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B863B8(&Method_ShopRootComponent___c__DisplayClass100_0__PlayLvExceedItemReleaseEffect_b__3__, v5);
    byte_4A4A89A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  CommonUI__ReleaseItemGetEffect((CommonUI_o *)Instance, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    _9__3 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_ShopRootComponent___c__DisplayClass100_0__PlayLvExceedItemReleaseEffect_b__3__,
      0LL);
    this->fields.__9__3 = _9__3;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.__9__3, (int32_t)_9__3, v12, v13);
  }
  if ( !v9 )
LABEL_10:
    sub_1B86614(Instance, v7);
  CommonUI__maskFadein(v9, DEFAULT_FADE_TIME, _9__3, 0LL);
}


void __fastcall ShopRootComponent___c__DisplayClass100_0___PlayLvExceedItemReleaseEffect_b__3(
        ShopRootComponent___c__DisplayClass100_0_o *this,
        const MethodInfo *method)
{
  struct ShopBuyItemListViewItem_o *item; // x1

  item = this->fields.item;
  if ( !item || (this = (ShopRootComponent___c__DisplayClass100_0_o *)this->fields.__4__this) == 0LL )
    sub_1B86614(this, item);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct ShopEntity_o *shopEntity; // x8
  struct System_Int32_array *targetIds; // x8
  System_String_o *v9; // x21
  System_String_o *v10; // x0
  int32_t v11; // w20
  System_String_o *v12; // x0
  int32_t v13; // w21
  System_String_o *name; // x21
  Il2CppObject *_4__this; // x22
  CommonUI_o *v16; // x20
  System_Action_o *v17; // x19
  ServantCostumeEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  v2 = this;
  if ( (byte_4A4A89B & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantCostumeMaster___, v3);
    sub_1B863B8(&Method_ShopRootComponent_OnEndPlayServantCostumeReleaseEffect__, v4);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    this = (ShopRootComponent___c__DisplayClass107_0_o *)sub_1B863B8(
                                                           &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                           v6);
    byte_4A4A89B = 1;
  }
  entity = 0LL;
  shopEntity = v2->fields.shopEntity;
  if ( !shopEntity )
    goto LABEL_15;
  targetIds = shopEntity->fields.targetIds;
  if ( !targetIds )
    goto LABEL_15;
  if ( !targetIds->max_length )
    sub_1B8661C(this, method);
  this = (ShopRootComponent___c__DisplayClass107_0_o *)System_Int32__ToString((int)targetIds + 32, 0LL);
  if ( !this )
    goto LABEL_15;
  v9 = (System_String_o *)this;
  v10 = System_String__Substring_61691100((System_String_o *)this, 0, LODWORD(this->fields.shopEntity) - 2, 0LL);
  v11 = System_Int32__Parse(v10, 0LL);
  v12 = System_String__Substring(v9, v9->fields._stringLength - 2, 0LL);
  v13 = System_Int32__Parse(v12, 0LL);
  this = (ShopRootComponent___c__DisplayClass107_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_15;
  this = (ShopRootComponent___c__DisplayClass107_0_o *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)this,
                                                         (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  if ( !this )
    goto LABEL_15;
  if ( ServantCostumeMaster__TryGetEntity((ServantCostumeMaster_o *)this, &entity, v11, v13, 0LL) )
  {
    this = (ShopRootComponent___c__DisplayClass107_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( entity )
    {
      name = entity->fields.name;
      _4__this = (Il2CppObject *)v2->fields.__4__this;
      v16 = (CommonUI_o *)this;
      v17 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
      System_Action___ctor(v17, _4__this, Method_ShopRootComponent_OnEndPlayServantCostumeReleaseEffect__, 0LL);
      if ( v16 )
      {
        CommonUI__OpenCostumeReleaseEffect(v16, 1, name, v17, 23, 0LL);
        return;
      }
    }
LABEL_15:
    sub_1B86614(this, method);
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
  __int64 v5; // x1
  __int64 v6; // x1
  _BOOL8 v7; // x0
  __int64 v8; // x1
  ShopRootComponent_o *_4__this; // x8
  Il2CppObject *v10; // x21
  ShopResetConfirmDialogComponent_o *monitor; // x20
  ShopBuyItemListViewItem_o *item; // x19
  System_Action_bool__o *v13; // x22

  if ( (byte_4A4A89C & 1) == 0 )
  {
    sub_1B863B8(&System_Action_bool__TypeInfo, result);
    sub_1B863B8(&Method_ShopRootComponent_OnEndShopReset__, v5);
    sub_1B863B8(&StringLiteral_21893/*"ng"*/, v6);
    byte_4A4A89C = 1;
  }
  v7 = System_String__op_Equality(result, (System_String_o *)StringLiteral_21893/*"ng"*/, 0LL);
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
        v13 = (System_Action_bool__o *)sub_1B86604(System_Action_bool__TypeInfo),
        System_Action_bool____ctor(v13, v10, Method_ShopRootComponent_OnEndShopReset__, 0LL),
        !monitor) )
  {
LABEL_9:
    sub_1B86614(v7, v8);
  }
  ShopResetConfirmDialogComponent__OpenResultDialog(monitor, item, v13, 0LL);
}


void __fastcall ShopRootComponent___c__DisplayClass158_0___CloseShopResetDialog_b__1(
        ShopRootComponent___c__DisplayClass158_0_o *this,
        const MethodInfo *method)
{
  ShopRootComponent___c__DisplayClass158_0_o *v2; // x19
  __int64 v3; // x1
  struct ShopBuyItemListViewItem_o *item; // x8
  struct ShopEntity_o *Shop_k__BackingField; // x8
  ShopResetPurchaseNumRequest_o *request; // x20
  int32_t baseShopId; // w19

  v2 = this;
  if ( (byte_4A4A89D & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMaster_ItemMaster___, method);
    this = (ShopRootComponent___c__DisplayClass158_0_o *)sub_1B863B8(&DataManager_TypeInfo, v3);
    byte_4A4A89D = 1;
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
  this = (ShopRootComponent___c__DisplayClass158_0_o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !this || !request )
LABEL_10:
    sub_1B86614(this, method);
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

  if ( (byte_4A4A89E & 1) == 0 )
  {
    sub_1B863B8(&PurchaseBehaviour_TypeInfo, method);
    byte_4A4A89E = 1;
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
    sub_1B86614(shopPlayVoiceComponent, v5);
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
  if ( (byte_4A4A89F & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    this = (ShopRootComponent___c__DisplayClass81_0_o *)sub_1B863B8(
                                                          &Method_ShopRootComponent___c__DisplayClass81_0__SelectMenu_b__1__,
                                                          v4);
    byte_4A4A89F = 1;
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
    _9__1 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v3,
      Method_ShopRootComponent___c__DisplayClass81_0__SelectMenu_b__1__,
      0LL);
    v3->fields.__9__1 = _9__1;
    sub_1B8635C((CGThumbnailListItem_o *)&v3->fields.__9__1, (int32_t)_9__1, v10, v11);
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
        (v12 = v3->fields.__4__this) == 0LL) )
  {
LABEL_11:
    sub_1B86614(this, method);
  }
  *(_QWORD *)&v12->fields.state = (unsigned int)v3->fields.state;
}


void __fastcall ShopRootComponent___c__DisplayClass81_0___SelectMenu_b__1(
        ShopRootComponent___c__DisplayClass81_0_o *this,
        const MethodInfo *method)
{
  ShopRootComponent___c__DisplayClass81_0_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct ShopRootComponent_o *_4__this; // x8
  struct ShopRootComponent_o *v8; // x8
  ShopPlayVoiceComponent_o *shopPlayVoiceComponent; // x20
  ShopRootComponent___c__DisplayClass81_0_o *v10; // x21
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
  if ( (byte_4A4A8A0 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&Method_DataManager_GetMasterData_GuideMaster___, v3);
    sub_1B863B8(&ShopRootConstants_TypeInfo, v4);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    this = (ShopRootComponent___c__DisplayClass81_0_o *)sub_1B863B8(
                                                          &Method_ShopRootComponent___c__DisplayClass81_0__SelectMenu_b__2__,
                                                          v6);
    byte_4A4A8A0 = 1;
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
  v8 = v2->fields.__4__this;
  if ( !v8 )
    goto LABEL_23;
  shopPlayVoiceComponent = v8->fields.shopPlayVoiceComponent;
  this = (ShopRootComponent___c__DisplayClass81_0_o *)ShopPlayVoiceConstants__GetEnterVoiceFlag(15, 0LL);
  if ( !shopPlayVoiceComponent )
    goto LABEL_23;
  if ( !ShopPlayVoiceComponent__CheckVoiceFlag(shopPlayVoiceComponent, (int32_t)this, 0LL) )
    goto LABEL_21;
  this = (ShopRootComponent___c__DisplayClass81_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (ShopRootComponent___c__DisplayClass81_0_o *)DataManager__GetMasterData_object_(
                                                              (DataManager_o *)this,
                                                              (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_GuideMaster___)) == 0LL )
  {
LABEL_23:
    sub_1B86614(this, method);
  }
  this = (ShopRootComponent___c__DisplayClass81_0_o *)GuideMaster__getGuideData((GuideMaster_o *)this, 3, 0LL);
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
    _9__2 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v2,
      Method_ShopRootComponent___c__DisplayClass81_0__SelectMenu_b__2__,
      0LL);
    v2->fields.__9__2 = _9__2;
    sub_1B8635C((CGThumbnailListItem_o *)&v2->fields.__9__2, (int32_t)_9__2, v22, v23);
  }
  if ( !v19 )
    goto LABEL_23;
  ShopPlayVoiceComponent__ReloadVoice(v19, standFigureBack, v17, v18, eventId, _9__2, 0LL);
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
    sub_1B86614(0LL, method);
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

  if ( (byte_4A4A8A1 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&Method_ShopRootComponent___c__DisplayClass82_0__BackMenu_b__1__, v3);
    byte_4A4A8A1 = 1;
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
    _9__1 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_ShopRootComponent___c__DisplayClass82_0__BackMenu_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.__9__1, (int32_t)_9__1, v10, v11);
  }
  if ( !listViewHelper
    || (ShopSceneListViewControlHelper__SetListViewOnBackMenu(listViewHelper, state, v9, _9__1, v7),
        (_4__this = this->fields.__4__this) == 0LL)
    || (ShopRootComponent__CloseEventItemWindow(_4__this, 0LL), (v12 = this->fields.__4__this) == 0LL) )
  {
LABEL_10:
    sub_1B86614(_4__this, method);
  }
  v12->fields.inputState = 3;
}


void __fastcall ShopRootComponent___c__DisplayClass82_0___BackMenu_b__1(
        ShopRootComponent___c__DisplayClass82_0_o *this,
        const MethodInfo *method)
{
  ShopRootComponent___c__DisplayClass82_0_o *v2; // x19
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
  if ( (byte_4A4A8A2 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    this = (ShopRootComponent___c__DisplayClass82_0_o *)sub_1B863B8(
                                                          &Method_ShopRootComponent___c__DisplayClass82_0__BackMenu_b__2__,
                                                          v3);
    byte_4A4A8A2 = 1;
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
    _9__2 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v2,
      Method_ShopRootComponent___c__DisplayClass82_0__BackMenu_b__2__,
      0LL);
    v2->fields.__9__2 = _9__2;
    sub_1B8635C((CGThumbnailListItem_o *)&v2->fields.__9__2, (int32_t)_9__2, v12, v13);
  }
  if ( !shopPlayVoiceComponent )
LABEL_13:
    sub_1B86614(this, method);
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
    sub_1B86614(0LL, method);
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
  __int64 v3; // x1
  Il2CppObject *_4__this; // x23
  struct ShopBuyItemListViewItem_o *item; // x8
  ShopBuyItemConfirmMenu_o *monitor; // x19
  ShopEntity_o *Shop_k__BackingField; // x20
  int32_t ShopKind_k__BackingField; // w21
  System_Action_int__o *v9; // x22

  v2 = this;
  if ( (byte_4A4A8A3 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_int__TypeInfo, method);
    this = (ShopRootComponent___c__DisplayClass86_0_o *)sub_1B863B8(
                                                          &Method_ShopRootComponent_SelectedBuyItemConfirm__,
                                                          v3);
    byte_4A4A8A3 = 1;
  }
  _4__this = (Il2CppObject *)v2->fields.__4__this;
  if ( !_4__this
    || (item = v2->fields.item) == 0LL
    || (monitor = (ShopBuyItemConfirmMenu_o *)_4__this[9].monitor,
        Shop_k__BackingField = item->fields._Shop_k__BackingField,
        ShopKind_k__BackingField = item->fields._ShopKind_k__BackingField,
        v9 = (System_Action_int__o *)sub_1B86604(System_Action_int__TypeInfo),
        System_Action_int____ctor(v9, _4__this, Method_ShopRootComponent_SelectedBuyItemConfirm__, 0LL),
        !monitor) )
  {
    sub_1B86614(this, method);
  }
  ShopBuyItemConfirmMenu__Open(monitor, Shop_k__BackingField, ShopKind_k__BackingField, v9, 0, 0, 0LL, 8, 0LL);
}


void __fastcall ShopRootComponent___c__DisplayClass86_0___OpenConfirmMenu_b__1(
        ShopRootComponent___c__DisplayClass86_0_o *this,
        const MethodInfo *method)
{
  ShopRootComponent___c__DisplayClass86_0_o *v2; // x19
  __int64 v3; // x1
  Il2CppObject *_4__this; // x21
  ShopResetConfirmDialogComponent_o *monitor; // x20
  ShopBuyItemListViewItem_o *item; // x19
  System_Action_bool__o *v7; // x22

  v2 = this;
  if ( (byte_4A4A8A4 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_bool__TypeInfo, method);
    this = (ShopRootComponent___c__DisplayClass86_0_o *)sub_1B863B8(
                                                          &Method_ShopRootComponent_CloseShopResetDialog__,
                                                          v3);
    byte_4A4A8A4 = 1;
  }
  _4__this = (Il2CppObject *)v2->fields.__4__this;
  if ( !_4__this
    || (monitor = (ShopResetConfirmDialogComponent_o *)_4__this[24].monitor,
        item = v2->fields.item,
        v7 = (System_Action_bool__o *)sub_1B86604(System_Action_bool__TypeInfo),
        System_Action_bool____ctor(v7, _4__this, Method_ShopRootComponent_CloseShopResetDialog__, 0LL),
        !monitor) )
  {
    sub_1B86614(this, method);
  }
  ShopResetConfirmDialogComponent__Open(monitor, item, v7, 0LL);
}


void __fastcall ShopRootComponent___c__DisplayClass86_0___OpenConfirmMenu_b__2(
        ShopRootComponent___c__DisplayClass86_0_o *this,
        const MethodInfo *method)
{
  ShopRootComponent___c__DisplayClass86_0_o *v2; // x19
  __int64 v3; // x1
  Il2CppObject *_4__this; // x23
  struct ShopBuyItemListViewItem_o *item; // x8
  ShopBuyItemConfirmMenu_o *monitor; // x19
  ShopEntity_o *Shop_k__BackingField; // x20
  int32_t ShopKind_k__BackingField; // w21
  System_Action_int__o *v9; // x22

  v2 = this;
  if ( (byte_4A4A8A5 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_int__TypeInfo, method);
    this = (ShopRootComponent___c__DisplayClass86_0_o *)sub_1B863B8(
                                                          &Method_ShopRootComponent_SelectedBuyItemConfirm__,
                                                          v3);
    byte_4A4A8A5 = 1;
  }
  _4__this = (Il2CppObject *)v2->fields.__4__this;
  if ( !_4__this
    || (item = v2->fields.item) == 0LL
    || (monitor = (ShopBuyItemConfirmMenu_o *)_4__this[9].monitor,
        Shop_k__BackingField = item->fields._Shop_k__BackingField,
        ShopKind_k__BackingField = item->fields._ShopKind_k__BackingField,
        v9 = (System_Action_int__o *)sub_1B86604(System_Action_int__TypeInfo),
        System_Action_int____ctor(v9, _4__this, Method_ShopRootComponent_SelectedBuyItemConfirm__, 0LL),
        !monitor) )
  {
    sub_1B86614(this, method);
  }
  ShopBuyItemConfirmMenu__Open(monitor, Shop_k__BackingField, ShopKind_k__BackingField, v9, 0, 0, 0LL, 8, 0LL);
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
  __int64 v5; // x1
  ServantSellConfirmMenu_o *_4__this; // x0
  Il2CppObject *v7; // x24
  ServantSellConfirmMenu_o *klass; // x20
  int32_t kind; // w19
  System_Int64_array *monitor; // x21
  System_Int64_array *v11; // x22
  System_Action_int__o *v12; // x23

  if ( (byte_4A4A8A6 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_int__TypeInfo, *(_QWORD *)&decide);
    sub_1B863B8(&Method_ShopRootComponent_SellServantConfirm__, v5);
    byte_4A4A8A6 = 1;
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
        monitor = (System_Int64_array *)v7[31].monitor;
        v11 = (System_Int64_array *)v7[32].klass;
        v12 = (System_Action_int__o *)sub_1B86604(System_Action_int__TypeInfo);
        System_Action_int____ctor(v12, v7, Method_ShopRootComponent_SellServantConfirm__, 0LL);
        if ( klass )
        {
          ServantSellConfirmMenu__Open(klass, kind, monitor, v11, v12, 0LL);
          return;
        }
      }
    }
LABEL_10:
    sub_1B86614(_4__this, *(_QWORD *)&decide);
  }
  ShopRootComponent__CloseSellServantConfirm((ShopRootComponent_o *)_4__this, 0LL);
}