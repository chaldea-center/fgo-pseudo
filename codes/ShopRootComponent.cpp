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


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopRootComponent__BackMenu(ShopRootComponent_o *this, int32_t state, const MethodInfo *method)
{
  int32_t v3; // w19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  const MethodInfo *v16; // x2
  System_Action_o *v17; // x20
  ShopRootComponent_o *v18; // x0
  const MethodInfo *v19; // x3

  v3 = state;
  if ( (byte_41891D0 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&state);
    sub_B2C35C(&Method_ShopRootComponent___c__DisplayClass77_0__BackMenu_b__0__, v5);
    sub_B2C35C(&ShopRootComponent___c__DisplayClass77_0_TypeInfo, v6);
    byte_41891D0 = 1;
  }
  v7 = sub_B2C42C(ShopRootComponent___c__DisplayClass77_0_TypeInfo);
  ShopRootComponent___c__DisplayClass77_0___ctor((ShopRootComponent___c__DisplayClass77_0_o *)v7, 0LL);
  if ( !v7 )
    sub_B2C434(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_DWORD *)(v7 + 24) = v3;
  if ( v3 != 15 )
  {
    ShopRootComponent__PlayVoiceBack(this, v3, v16);
    v3 = *(_DWORD *)(v7 + 24);
  }
  v17 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v17, (Il2CppObject *)v7, Method_ShopRootComponent___c__DisplayClass77_0__BackMenu_b__0__, 0LL);
  ShopRootComponent__SetFadeOut(v18, v3, v17, v19);
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
  struct ShopSceneListViewControlHelper_o *listViewHelper; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v26; // x20
  EventEntity_o *v27; // x21
  CommonUI_o *Instance; // x20
  System_String_o *v30; // x22
  Il2CppObject *EventName; // x0
  System_String_o *v32; // x21
  System_Action_o *v33; // x22

  if ( (byte_41891F1 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&state);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMaster___, v5);
    sub_B2C35C(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v6);
    sub_B2C35C(&LocalizationManager_TypeInfo, v7);
    sub_B2C35C(&Method_ShopRootComponent_OnEndDialogEventCloseWarning__, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v11);
    sub_B2C35C(&StringLiteral_6171/*"EventItem"*/, v12);
    sub_B2C35C(&StringLiteral_3043/*"CLICK_BACK"*/, v13);
    sub_B2C35C(&StringLiteral_13077/*"StoneFragments"*/, v14);
    sub_B2C35C(&StringLiteral_12142/*"SHOP_EVENT_RETURN_ERROR"*/, v15);
    sub_B2C35C(&StringLiteral_1/*""*/, v16);
    byte_41891F1 = 1;
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
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myFSM, (System_String_o *)StringLiteral_3043/*"CLICK_BACK"*/, 0LL);
      return 1;
    case 4:
      v21 = this->fields.jumpInfo;
      if ( !v21 || !System_String__op_Equality(v21->fields.name, (System_String_o *)StringLiteral_13077/*"StoneFragments"*/, 0LL) )
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
      v19 = 1;
      TerminalPramsManager__set_IsAutoOpenMasterMission(1, 0LL);
      return v19;
    case 7:
      v20 = this->fields.jumpInfo;
      if ( !v20 || !System_String__op_Equality(v20->fields.name, (System_String_o *)StringLiteral_6171/*"EventItem"*/, 0LL) )
        return 0;
      myFSM = this->fields.jumpInfo;
      if ( !myFSM )
        goto LABEL_52;
      return SceneJumpInfo__ReturnScene((SceneJumpInfo_o *)myFSM, 0LL);
    case 8:
      v22 = this->fields.jumpInfo;
      if ( !v22 )
        return 0;
      if ( !System_String__op_Equality(v22->fields.name, (System_String_o *)StringLiteral_6171/*"EventItem"*/, 0LL) )
        goto LABEL_38;
      myFSM = this->fields.jumpInfo;
      if ( !myFSM )
        goto LABEL_52;
      if ( !*((_DWORD *)myFSM + 6) || !SceneJumpInfo__ReturnScene((SceneJumpInfo_o *)myFSM, 0LL) )
      {
LABEL_38:
        myFSM = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( myFSM )
        {
          myFSM = DataManager__GetMasterData_WarQuestSelectionMaster_(
                    (DataManager_o *)myFSM,
                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMaster___);
          listViewHelper = this->fields.listViewHelper;
          if ( listViewHelper )
          {
            v26 = (DataMasterBase_WarMaster__WarEntity__int__o *)myFSM;
            myFSM = listViewHelper->fields.eventListViewManager;
            if ( myFSM )
            {
              myFSM = ShopEventListViewManager__GetItem(
                        (ShopEventListViewManager_o *)myFSM,
                        this->fields.selectedEventIndex,
                        0LL);
              if ( myFSM )
              {
                if ( v26 )
                {
                  myFSM = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                            v26,
                            *((_DWORD *)myFSM + 28),
                            (const MethodInfo_24E40D0 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
                  if ( myFSM )
                  {
                    v27 = (EventEntity_o *)myFSM;
                    if ( EventEntity__IsOpen((EventEntity_o *)myFSM, 1, 0LL) )
                      return 0;
                    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !LocalizationManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    }
                    v30 = LocalizationManager__Get((System_String_o *)StringLiteral_12142/*"SHOP_EVENT_RETURN_ERROR"*/, 0LL);
                    EventName = (Il2CppObject *)EventEntity__getEventName(v27, 0LL);
                    v32 = System_String__Format(v30, EventName, 0LL);
                    v33 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
                    System_Action___ctor(
                      v33,
                      (Il2CppObject *)this,
                      Method_ShopRootComponent_OnEndDialogEventCloseWarning__,
                      0LL);
                    if ( Instance )
                    {
                      v19 = 1;
                      CommonUI__OpenNotificationDialog(
                        Instance,
                        (System_String_o *)StringLiteral_1/*""*/,
                        v32,
                        v33,
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
                      return v19;
                    }
                  }
                }
              }
            }
          }
        }
LABEL_52:
        sub_B2C434(myFSM, *(_QWORD *)&state);
      }
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_4183C70 )
      {
        sub_B2C35C(&TerminalPramsManager_TypeInfo, v23);
        byte_4183C70 = 1;
      }
      v24 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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
  __int64 v5; // x1
  const MethodInfo *v6; // x1
  ServantSellMenu_o *servantSellMenu; // x0
  ServantSellConfirmMenu_o *servantSellConfirmMenu; // x20
  System_Int64_array *selectedServantIds; // x21
  System_Int64_array *selectedCommandCodeIds; // x22
  System_Action_int__o *v11; // x23

  v3 = this;
  if ( (byte_41891DA & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_int___ctor__, method);
    sub_B2C35C(&System_Action_int__TypeInfo, v4);
    this = (ShopRootComponent_o *)sub_B2C35C(&Method_ShopRootComponent_SellServantExceededConfirm__, v5);
    byte_41891DA = 1;
  }
  if ( v3->fields.inputState == 2 )
  {
    if ( !ShopRootComponent__GetIsContainExceededServant(this, v3->fields.selectedServantIds, v2) )
    {
LABEL_7:
      ShopRootComponent__SelectSellServantConfirm(v3, v6);
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
    v11 = (System_Action_int__o *)sub_B2C42C(System_Action_int__TypeInfo);
    System_Action_int____ctor(
      v11,
      (Il2CppObject *)v3,
      Method_ShopRootComponent_SellServantExceededConfirm__,
      (const MethodInfo_24BA548 *)Method_System_Action_int___ctor__);
    if ( !servantSellConfirmMenu )
LABEL_11:
      sub_B2C434(servantSellMenu, v6);
    ServantSellConfirmMenu__Open(servantSellConfirmMenu, 2, selectedServantIds, selectedCommandCodeIds, v11, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ShopRootComponent__CheckServerLimitTime(
        ShopRootComponent_o *this,
        int32_t state,
        const MethodInfo *method)
{
  NetworkManager_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_41891FD & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, *(_QWORD *)&state);
    byte_41891FD = 1;
  }
  if ( (unsigned int)state > 0x15 || ((1 << state) & 0x35DDFC) == 0 )
    return 1;
  Instance = (NetworkManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v5);
  return NetworkManager__CheckServerLimitTime(Instance, 0LL);
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
  TutorialSetRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v11; // x1

  if ( (byte_41891EE & 1) == 0 )
  {
    sub_B2C35C(&Method_NetworkManager_getRequest_TutorialSetRequest___, method);
    sub_B2C35C(&NetworkManager_TypeInfo, v3);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v4);
    sub_B2C35C(&Method_ShopRootComponent_QuitHelp__, v5);
    sub_B2C35C(&TutorialFlag_TypeInfo, v6);
    sub_B2C35C(&StringLiteral_21218/*"ok"*/, v7);
    byte_41891EE = 1;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_28617756(103, 0LL) )
  {
    ShopRootComponent__QuitHelp(this, (System_String_o *)StringLiteral_21218/*"ok"*/, v8);
  }
  else
  {
    v9 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(v9, (Il2CppObject *)this, Method_ShopRootComponent_QuitHelp__, 0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = (TutorialSetRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                  v9,
                                                                  (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_TutorialSetRequest___);
    if ( !Request_WarBoardWallAttackRequest )
      sub_B2C434(0LL, v11);
    TutorialSetRequest__beginRequest(Request_WarBoardWallAttackRequest, 103, 0LL);
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
  struct ShopSceneListViewControlHelper_o *listViewHelper; // x8
  ShopBuyItemListViewItem_o *Item; // x21
  struct ShopEntity_o *Shop_k__BackingField; // x8
  ShopDetailEntity_o *ShopDetailEntity; // x0
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x1

  if ( (byte_41891F8 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ShopDetailMaster___, decide);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_41891F8 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseConfirmDialog(Instance, 0LL), (listViewHelper = this->fields.listViewHelper) == 0LL)
    || (Instance = (CommonUI_o *)listViewHelper->fields.buyItemListViewManager) == 0LL
    || (Item = ShopBuyItemListViewManager__GetItem(
                 (ShopBuyItemListViewManager_o *)Instance,
                 this->fields.selectedItemIndex,
                 0LL),
        (Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (CommonUI_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ShopDetailMaster___),
        !Item)
    || (Shop_k__BackingField = Item->fields._Shop_k__BackingField) == 0LL
    || !Instance )
  {
    sub_B2C434(Instance, v8);
  }
  ShopDetailEntity = ShopDetailMaster__getShopDetailEntity(
                       (ShopDetailMaster_o *)Instance,
                       Shop_k__BackingField->fields.id,
                       0LL);
  ShopRootComponent__SetFrequencyTypeCheckList((ShopRootComponent_o *)ShopDetailEntity, ShopDetailEntity, decide, v13);
  if ( decide )
    ShopRootComponent__RequestShop(this, v14);
  else
    ShopRootComponent__CloseItemConfirm(this, v14);
}


void __fastcall ShopRootComponent__CloseEventItemWindow(ShopRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *shopEventItemDrawBase; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  ShopRootConstants_c *v5; // x8

  if ( (byte_41891FC & 1) == 0 )
  {
    sub_B2C35C(&ShopRootConstants_TypeInfo, method);
    byte_41891FC = 1;
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
    sub_B2C434(shopEventItemDrawBase, method);
  ShopCurrencyInfoController__StopUpdateRemainTime((ShopCurrencyInfoController_o *)shopEventItemDrawBase, 0LL);
}


void __fastcall ShopRootComponent__CloseItemConfirm(ShopRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ShopBuyItemConfirmMenu_o *buyItemConfirmMenu; // x0
  const MethodInfo *v5; // x2
  int32_t state; // w20
  struct ShopSceneListViewControlHelper_o *listViewHelper; // x8
  ShopBuyItemListViewItem_o *v8; // x20
  ShopEntity_o *freeLabel; // x21
  ShopSceneListViewControlHelper_o **p_listViewHelper; // x22
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x2
  ShopSceneListViewControlHelper_o *v14; // x21
  const MethodInfo *v15; // x2

  if ( (byte_41891D9 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_ShopMaster___, method);
    sub_B2C35C(&DataManager_TypeInfo, v3);
    byte_41891D9 = 1;
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
      sub_B2C434(buyItemConfirmMenu, method);
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
        buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)ShopRootComponent__BackScene(this, state, v5);
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
      v8 = (ShopBuyItemListViewItem_o *)buyItemConfirmMenu;
      freeLabel = (ShopEntity_o *)buyItemConfirmMenu->fields.freeLabel;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      p_listViewHelper = &this->fields.listViewHelper;
      buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ShopMaster___);
      if ( this->fields.buyCount >= 1 )
      {
        if ( !buyItemConfirmMenu )
          goto LABEL_53;
        if ( ShopMaster__IsOpenPurchaseCloseShop((ShopMaster_o *)buyItemConfirmMenu, freeLabel, v11) )
        {
          buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)*p_listViewHelper;
          if ( *p_listViewHelper )
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
              goto LABEL_52;
            }
            buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)this->fields.topListViewManager;
            if ( buyItemConfirmMenu )
            {
              ShopTopListViewManager__CreateList((ShopTopListViewManager_o *)buyItemConfirmMenu, 0, -1.0, 0LL);
              LODWORD(method) = this->fields.state;
LABEL_52:
              ShopRootComponent__BackMenu(this, (int32_t)method, v13);
              return;
            }
          }
          goto LABEL_53;
        }
      }
      ShopBuyItemListViewItem__Modify(v8, freeLabel, 0LL);
      state = this->fields.state;
    }
    else
    {
      p_listViewHelper = &this->fields.listViewHelper;
    }
    v14 = *p_listViewHelper;
    if ( !*p_listViewHelper )
      goto LABEL_53;
    ShopSceneListViewControlHelper__SetBuyItemListViewModify(*p_listViewHelper, state, v5);
    ShopSceneListViewControlHelper__SetBuyItemListViewInput(v14, state, v15);
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
    sub_B2C434(servantSellConfirmMenu, method);
  }
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

  if ( (byte_4189200 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_12180/*"SHOP_SCENE_VOICE_CANCEL"*/, *(_QWORD *)&result);
    sub_B2C35C(&StringLiteral_12179/*"SHOP_SCENE_VOICE_BACK2"*/, v6);
    byte_4189200 = 1;
  }
  if ( result )
    goto LABEL_6;
  shopPlayVoiceComponent = this->fields.shopPlayVoiceComponent;
  if ( !shopPlayVoiceComponent )
    goto LABEL_9;
  if ( !ShopPlayVoiceComponent__PlayVoiceOnce(
          shopPlayVoiceComponent,
          (System_String_o *)StringLiteral_12180/*"SHOP_SCENE_VOICE_CANCEL"*/,
          0x2000,
          v3) )
  {
LABEL_6:
    shopPlayVoiceComponent = this->fields.shopPlayVoiceComponent;
    if ( shopPlayVoiceComponent )
    {
      ShopPlayVoiceComponent__PlayVoiceOnce(shopPlayVoiceComponent, (System_String_o *)StringLiteral_12179/*"SHOP_SCENE_VOICE_BACK2"*/, 4096, v3);
      goto LABEL_8;
    }
LABEL_9:
    sub_B2C434(shopPlayVoiceComponent, *(_QWORD *)&result);
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
  ShopRootComponent_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  BuyStorageConfirmDialogComponent_o *buyStorageConfirmDialog; // x20
  System_Action_o *v10; // x21
  struct ShopSceneListViewControlHelper_o *listViewHelper; // x8
  ShopBuyItemListViewItem_o *v12; // x20
  ShopRootComponent_o *v13; // x0
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x2
  ShopBuyBulkItemConfirmMenu_o *buyBulkItemConfirmMenu; // x20
  System_Action_int__o *v17; // x21
  ShopSceneListViewControlHelper_o *v18; // x20
  int32_t state; // w19
  const MethodInfo *v20; // x2

  v4 = this;
  if ( (byte_41891F9 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_int___ctor__, *(_QWORD *)&buyCount);
    sub_B2C35C(&System_Action_int__TypeInfo, v5);
    sub_B2C35C(&System_Action_TypeInfo, v6);
    sub_B2C35C(&Method_ShopRootComponent_RequestShop__, v7);
    this = (ShopRootComponent_o *)sub_B2C35C(&Method_ShopRootComponent_SelectedBuyItemConfirm__, v8);
    byte_41891F9 = 1;
  }
  v4->fields.buyCount = buyCount;
  if ( buyCount )
  {
    buyStorageConfirmDialog = v4->fields.buyStorageConfirmDialog;
    v10 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v10, (Il2CppObject *)v4, Method_ShopRootComponent_RequestShop__, 0LL);
    if ( buyStorageConfirmDialog )
    {
      BuyStorageConfirmDialogComponent__Close_28376752(buyStorageConfirmDialog, v10, 0LL);
      return;
    }
LABEL_14:
    sub_B2C434(this, *(_QWORD *)&buyCount);
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
  v12 = (ShopBuyItemListViewItem_o *)this;
  BuyStorageConfirmDialogComponent__Close(v4->fields.buyStorageConfirmDialog, 0LL);
  this = (ShopRootComponent_o *)ShopRootComponent__GetIsBulk(v13, v12, v14);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    buyBulkItemConfirmMenu = v4->fields.buyBulkItemConfirmMenu;
    v17 = (System_Action_int__o *)sub_B2C42C(System_Action_int__TypeInfo);
    System_Action_int____ctor(
      v17,
      (Il2CppObject *)v4,
      Method_ShopRootComponent_SelectedBuyItemConfirm__,
      (const MethodInfo_24BA548 *)Method_System_Action_int___ctor__);
    if ( !buyBulkItemConfirmMenu )
      goto LABEL_14;
    ShopBuyBulkItemConfirmMenu__Modify(buyBulkItemConfirmMenu, v17, 0LL);
  }
  else
  {
    v18 = v4->fields.listViewHelper;
    if ( !v18 )
      goto LABEL_14;
    state = v4->fields.state;
    ShopSceneListViewControlHelper__SetBuyItemListViewModify(v18, state, v15);
    ShopSceneListViewControlHelper__SetBuyItemListViewInput(v18, state, v20);
  }
}


void __fastcall ShopRootComponent__CreateShopDetailCheckList(ShopRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  ShopRootComponent_c *v7; // x0
  System_Collections_Generic_Dictionary_int__int__o *v8; // x19
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  ShopRootComponent_c *v15; // x0
  BattleServantConfConponent_o *static_fields; // x0
  void *Instance; // x0
  __int64 v18; // x1
  int v19; // w8
  void *v20; // x19
  unsigned int v21; // w21
  __int64 v22; // x23
  ShopRootComponent_c *v23; // x0
  __int64 v24; // x0

  if ( (byte_4189202 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ShopDetailMaster___, method);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v2);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__, v3);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v4);
    sub_B2C35C(&ShopRootComponent_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4189202 = 1;
  }
  v7 = ShopRootComponent_TypeInfo;
  if ( (BYTE3(ShopRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ShopRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopRootComponent_TypeInfo);
    v7 = ShopRootComponent_TypeInfo;
  }
  if ( !v7->static_fields->isInitialized )
  {
    v8 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v8,
      (const MethodInfo_2E2399C *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    v15 = ShopRootComponent_TypeInfo;
    if ( (BYTE3(ShopRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ShopRootComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ShopRootComponent_TypeInfo);
      v15 = ShopRootComponent_TypeInfo;
    }
    static_fields = (BattleServantConfConponent_o *)v15->static_fields;
    static_fields->klass = (BattleServantConfConponent_c *)v8;
    sub_B2C2F8(static_fields, (System_Int32_array **)v8, v9, v10, v11, v12, v13, v14);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_27;
    Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ShopDetailMaster___);
    if ( !Instance )
      goto LABEL_27;
    Instance = ShopDetailMaster__getShopDetailEntityList((ShopDetailMaster_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_27;
    v19 = *((_DWORD *)Instance + 6);
    v20 = Instance;
    if ( v19 >= 1 )
    {
      v21 = 0;
      while ( 1 )
      {
        if ( v21 >= v19 )
        {
          v24 = sub_B2C460(Instance);
          sub_B2C400(v24, 0LL);
        }
        Instance = ShopRootComponent_TypeInfo;
        v22 = *((_QWORD *)v20 + (int)v21 + 4);
        if ( (BYTE3(ShopRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ShopRootComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ShopRootComponent_TypeInfo);
          Instance = ShopRootComponent_TypeInfo;
        }
        if ( !v22 )
          break;
        Instance = (void *)**((_QWORD **)Instance + 23);
        if ( !Instance )
          break;
        System_Collections_Generic_Dictionary_int__int___set_Item(
          (System_Collections_Generic_Dictionary_int__int__o *)Instance,
          *(_DWORD *)(v22 + 16),
          0,
          (const MethodInfo_2E24518 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
        v19 = *((_DWORD *)v20 + 6);
        if ( (int)++v21 >= v19 )
          goto LABEL_22;
      }
LABEL_27:
      sub_B2C434(Instance, v18);
    }
LABEL_22:
    v23 = ShopRootComponent_TypeInfo;
    if ( (BYTE3(ShopRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ShopRootComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ShopRootComponent_TypeInfo);
      v23 = ShopRootComponent_TypeInfo;
    }
    v23->static_fields->isInitialized = 1;
  }
}


void __fastcall ShopRootComponent__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1

  if ( (byte_41891C7 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_12959/*"SpecialItemHelp"*/, v1);
    sub_B2C35C(&StringLiteral_12840/*"Shop15Help"*/, v2);
    sub_B2C35C(&StringLiteral_1977/*"AnonymousHelp"*/, v3);
    sub_B2C35C(&StringLiteral_11277/*"RarePriHelp"*/, v4);
    byte_41891C7 = 1;
  }
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_1977/*"AnonymousHelp"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11277/*"RarePriHelp"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_12959/*"SpecialItemHelp"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_12840/*"Shop15Help"*/, 0LL);
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
    sub_B2C2F8(
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

  if ( (byte_41891D6 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_41891D6 = 1;
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
    sub_B2C434(limitCountSealInfoDlg, method);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  ServantSellMenu_o *servantSellMenu; // x0
  struct ServantSellMenu_o *v9; // x8
  int32_t tabKind; // w21
  bool v11; // w0
  int32_t ServantSellConfirmKindOnRequestEnd; // w0
  ServantSellConfirmMenu_o *servantSellConfirmMenu; // x22
  System_Int64_array *selectedServantIds; // x20
  System_Int64_array *selectedCommandCodeIds; // x21
  int32_t v16; // w23
  System_Action_int__o *v17; // x24
  const MethodInfo *v18; // x1

  if ( (byte_41891EA & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_int___ctor__, result);
    sub_B2C35C(&System_Action_int__TypeInfo, v5);
    sub_B2C35C(&Method_ShopRootComponent_EndSellResultServant__, v6);
    sub_B2C35C(&StringLiteral_21068/*"ng"*/, v7);
    byte_41891EA = 1;
  }
  servantSellMenu = this->fields.servantSellMenu;
  if ( !servantSellMenu )
    goto LABEL_8;
  ServantSellMenu__Init(servantSellMenu, 0LL);
  servantSellMenu = (ServantSellMenu_o *)this->fields.servantSellConfirmMenu;
  if ( !servantSellMenu )
    goto LABEL_8;
  ServantSellConfirmMenu__Init((ServantSellConfirmMenu_o *)servantSellMenu, 0LL);
  v9 = this->fields.servantSellMenu;
  if ( !v9 )
    goto LABEL_8;
  tabKind = v9->fields.tabKind;
  v11 = System_String__op_Equality(result, (System_String_o *)StringLiteral_21068/*"ng"*/, 0LL);
  ServantSellConfirmKindOnRequestEnd = ServantSellConfirmMenu__GetServantSellConfirmKindOnRequestEnd(tabKind, v11, 0LL);
  servantSellConfirmMenu = this->fields.servantSellConfirmMenu;
  selectedServantIds = this->fields.selectedServantIds;
  selectedCommandCodeIds = this->fields.selectedCommandCodeIds;
  v16 = ServantSellConfirmKindOnRequestEnd;
  v17 = (System_Action_int__o *)sub_B2C42C(System_Action_int__TypeInfo);
  System_Action_int____ctor(
    v17,
    (Il2CppObject *)this,
    Method_ShopRootComponent_EndSellResultServant__,
    (const MethodInfo_24BA548 *)Method_System_Action_int___ctor__);
  if ( !servantSellConfirmMenu )
LABEL_8:
    sub_B2C434(servantSellMenu, result);
  ServantSellConfirmMenu__Open(servantSellConfirmMenu, v16, selectedServantIds, selectedCommandCodeIds, v17, 0LL);
  ShopRootComponent__RefreshInfo(this, v18);
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

  if ( (byte_41891DF & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_21068/*"ng"*/, result);
    byte_41891DF = 1;
  }
  buyItemListViewManager = (ShopBuyItemListViewManager_o *)System_String__op_Equality(
                                                             result,
                                                             (System_String_o *)StringLiteral_21068/*"ng"*/,
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
    sub_B2C434(buyItemListViewManager, v6);
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
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t result; // w0
  UserItemMaster_o *Master_WarQuestSelectionMaster; // x20
  int64_t UserId; // x21

  if ( (byte_41891F4 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_UserItemMaster___, shopEntity);
    sub_B2C35C(&DataManager_TypeInfo, v4);
    this = (ShopRootComponent_o *)sub_B2C35C(&NetworkManager_TypeInfo, v5);
    byte_41891F4 = 1;
  }
  if ( !shopEntity )
LABEL_22:
    sub_B2C434(this, shopEntity);
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
      Master_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserItemMaster___);
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
        v19 = sub_B2C460(CommonConsumeEntities);
        sub_B2C400(v19, 0LL);
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
    sub_B2C434(this, item);
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
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  __int64 v8; // x8
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v9; // x20
  unsigned __int64 v10; // x21
  __int64 v12; // x0

  if ( (byte_41891DB & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, selectServantIds);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_41891DB = 1;
  }
  if ( !selectServantIds )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_14:
    sub_B2C434(Instance, v7);
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  v8 = *(_QWORD *)&selectServantIds->max_length;
  if ( (int)v8 < 1 )
    return 0;
  v9 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance;
  v10 = 0LL;
  while ( 1 )
  {
    if ( v10 >= (unsigned int)v8 )
    {
      v12 = sub_B2C460(Instance);
      sub_B2C400(v12, 0LL);
    }
    if ( !v9 )
      goto LABEL_14;
    Instance = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                  v9,
                                  selectServantIds->m_Items[v10],
                                  (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( Instance )
    {
      Instance = (DataManager_o *)UserServantEntity__isExceeded((UserServantEntity_o *)Instance, 0LL);
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
  UserShopMaster_o *MasterData_WarQuestSelectionMaster; // x20
  struct ShopEntity_o *Shop_k__BackingField; // x8
  UserShopEntity_o *EntityDefinitely; // x0

  if ( (byte_41891D7 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserShopMaster___, item);
    sub_B2C35C(&NetworkManager_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_41891D7 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = (UserShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             Instance,
                                                             (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserShopMaster___);
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
    sub_B2C434(Instance, v7);
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1

  if ( (byte_41891FE & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_8494/*"LeafExchange"*/, jumpInfoName);
    sub_B2C35C(&StringLiteral_6171/*"EventItem"*/, v6);
    sub_B2C35C(&StringLiteral_13077/*"StoneFragments"*/, v7);
    sub_B2C35C(&StringLiteral_12668/*"SellServant"*/, v8);
    byte_41891FE = 1;
  }
  if ( !jumpInfoName )
    return 1;
  if ( !System_String__op_Equality(jumpInfoName, (System_String_o *)StringLiteral_6171/*"EventItem"*/, 0LL) )
  {
    if ( System_String__op_Equality(jumpInfoName, (System_String_o *)StringLiteral_12668/*"SellServant"*/, 0LL) )
      return 9;
    if ( System_String__op_Equality(jumpInfoName, (System_String_o *)StringLiteral_13077/*"StoneFragments"*/, 0LL) )
      return 4;
    if ( System_String__op_Equality(jumpInfoName, (System_String_o *)StringLiteral_8494/*"LeafExchange"*/, 0LL) )
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
  ShopSceneListViewControlHelper_o *v29; // x28
  struct ShopSceneListViewControlHelper_o **p_listViewHelper; // x21
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  __int64 v37; // x1
  const MethodInfo *v38; // x5
  ShopSceneListViewControlHelper_o *listViewHelper; // x0
  ShopSceneListViewControlHelper_o *v40; // x23
  System_Action_o *v41; // x24
  System_Action_ShopRootConstants_State__o *v42; // x25
  System_Action_int__o *v43; // x26
  System_Action_int__o *v44; // x27
  System_Action_ServantSellMenu_ResultKind__long____long____o *v45; // x28
  System_Action_o *v46; // x22
  const MethodInfo *v47; // x7
  ShopRootComponent_o *v48; // x0
  const MethodInfo *v49; // x3
  int StateOnInit; // w0
  const MethodInfo *v51; // x4
  int32_t v52; // w8
  _BOOL4 isFromCoinRoom; // w9
  float saveScrollBarValue; // s0
  const MethodInfo *v55; // x3
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  UnityEngine_GameObject_o *gameObject; // x20
  System_Action_int__o *v63; // x21
  const MethodInfo *v64; // [xsp+18h] [xbp-78h]
  ShopTopListViewManager_o *topListViewManager; // [xsp+20h] [xbp-70h]
  UnityEngine_GameObject_o *eventListViewBase; // [xsp+28h] [xbp-68h]
  System_String_o *jumpInfoName; // [xsp+30h] [xbp-60h]
  int32_t eventId; // [xsp+3Ch] [xbp-54h]

  if ( (byte_41891CC & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_ShopRootConstants_State___ctor__, method);
    sub_B2C35C(&Method_System_Action_int___ctor__, v3);
    sub_B2C35C(&System_Action_int__TypeInfo, v4);
    sub_B2C35C(&System_Action_ShopRootConstants_State__TypeInfo, v5);
    sub_B2C35C(&Method_System_Action_ServantSellMenu_ResultKind__long____long_____ctor__, v6);
    sub_B2C35C(&System_Action_ServantSellMenu_ResultKind__long____long____TypeInfo, v7);
    sub_B2C35C(&System_Action_TypeInfo, v8);
    sub_B2C35C(&Method_ShopRootComponent_OnMoveEnd__, v9);
    sub_B2C35C(&Method_ShopRootComponent_OnSelectBuyItem__, v10);
    sub_B2C35C(&Method_ShopRootComponent_OnSelectEvent__, v11);
    sub_B2C35C(&Method_ShopRootComponent_OnSelectSellServant__, v12);
    sub_B2C35C(&Method_ShopRootComponent_OnSelectTop__, v13);
    sub_B2C35C(&Method_ShopRootComponent_OpenHelp__, v14);
    sub_B2C35C(&Method_ShopRootComponent__Init_b__71_0__, v15);
    sub_B2C35C(&ShopSceneListViewControlHelper_TypeInfo, v16);
    sub_B2C35C(&StringLiteral_1/*""*/, v17);
    byte_41891CC = 1;
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
    v29 = (ShopSceneListViewControlHelper_o *)sub_B2C42C(ShopSceneListViewControlHelper_TypeInfo);
    ShopSceneListViewControlHelper___ctor(
      v29,
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
      v64);
    p_listViewHelper = &this->fields.listViewHelper;
    this->fields.listViewHelper = v29;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.listViewHelper,
      (System_Int32_array **)v29,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
    listViewHelper = this->fields.listViewHelper;
    if ( !listViewHelper )
      goto LABEL_23;
    ShopSceneListViewControlHelper__SetOtherObjects(
      listViewHelper,
      this->fields.titleInfo,
      this->fields.standFigureBack,
      this->fields.giftButtonControl,
      this->fields.backgroundTexture,
      v38);
    v40 = this->fields.listViewHelper;
    v41 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v41, (Il2CppObject *)this, Method_ShopRootComponent_OnMoveEnd__, 0LL);
    v42 = (System_Action_ShopRootConstants_State__o *)sub_B2C42C(System_Action_ShopRootConstants_State__TypeInfo);
    System_Action_ShopRootConstants_State____ctor(
      v42,
      (Il2CppObject *)this,
      Method_ShopRootComponent_OnSelectTop__,
      (const MethodInfo_24BA81C *)Method_System_Action_ShopRootConstants_State___ctor__);
    v43 = (System_Action_int__o *)sub_B2C42C(System_Action_int__TypeInfo);
    System_Action_int____ctor(
      v43,
      (Il2CppObject *)this,
      Method_ShopRootComponent_OnSelectEvent__,
      (const MethodInfo_24BA548 *)Method_System_Action_int___ctor__);
    v44 = (System_Action_int__o *)sub_B2C42C(System_Action_int__TypeInfo);
    System_Action_int____ctor(
      v44,
      (Il2CppObject *)this,
      Method_ShopRootComponent_OnSelectBuyItem__,
      (const MethodInfo_24BA548 *)Method_System_Action_int___ctor__);
    v45 = (System_Action_ServantSellMenu_ResultKind__long____long____o *)sub_B2C42C(System_Action_ServantSellMenu_ResultKind__long____long____TypeInfo);
    System_Action_ServantSellMenu_ResultKind__long____long______ctor(
      v45,
      (Il2CppObject *)this,
      Method_ShopRootComponent_OnSelectSellServant__,
      (const MethodInfo_24CB26C *)Method_System_Action_ServantSellMenu_ResultKind__long____long_____ctor__);
    v46 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v46, (Il2CppObject *)this, Method_ShopRootComponent_OpenHelp__, 0LL);
    if ( !v40 )
      goto LABEL_23;
    ShopSceneListViewControlHelper__SetCallbackEvents(v40, v41, v42, v43, v44, v45, v46, v47);
    StateOnInit = ShopRootComponent__GetStateOnInit(v48, jumpInfoName, eventId, v49);
    v37 = (unsigned int)StateOnInit;
    this->fields.state = StateOnInit;
    if ( StateOnInit > 4 )
    {
      if ( (unsigned int)StateOnInit <= 0x14 )
      {
        v52 = 1;
        if ( ((1 << StateOnInit) & 0x110300) != 0 )
          goto LABEL_16;
      }
    }
    else
    {
      v52 = 1;
      if ( StateOnInit == 1 || StateOnInit == 4 )
        goto LABEL_16;
    }
    v52 = 0;
LABEL_16:
    isFromCoinRoom = this->fields.isFromCoinRoom;
    this->fields.inputState = v52;
    if ( isFromCoinRoom )
      saveScrollBarValue = this->fields.saveScrollBarValue;
    else
      saveScrollBarValue = -1.0;
    listViewHelper = *p_listViewHelper;
    if ( *p_listViewHelper )
    {
      ShopSceneListViewControlHelper__SetListViewOnSceneInit(
        listViewHelper,
        v37,
        eventId,
        saveScrollBarValue,
        &this->fields.selectedEventIndex,
        v51);
      ShopRootComponent__OpenEventItemWindow(this, this->fields.state, eventId, v55);
      if ( this->fields.state == 9 )
      {
        this->fields.jumpInfo = 0LL;
        sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.jumpInfo, 0LL, v56, v57, v58, v59, v60, v61);
      }
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      v63 = (System_Action_int__o *)sub_B2C42C(System_Action_int__TypeInfo);
      System_Action_int____ctor(
        v63,
        (Il2CppObject *)this,
        Method_ShopRootComponent__Init_b__71_0__,
        (const MethodInfo_24BA548 *)Method_System_Action_int___ctor__);
      StoneCountRefreshComponent__AttachToGameObject(gameObject, v63, 0, 0LL);
      return;
    }
LABEL_23:
    sub_B2C434(listViewHelper, v37);
  }
}


void __fastcall ShopRootComponent__LoadBanner(ShopRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x19
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  ShopRootComponent_o *v16; // x0
  const MethodInfo *v17; // x3
  struct SceneJumpInfo_o *jumpInfo; // x8
  int32_t id; // w2
  System_String_o **p_name; // x8
  System_Action_o *v21; // x20

  if ( (byte_41891CB & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&AtlasManager_TypeInfo, v3);
    sub_B2C35C(&Method_ShopRootComponent___c__DisplayClass68_0__LoadBanner_b__0__, v4);
    sub_B2C35C(&ShopRootComponent___c__DisplayClass68_0_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_1/*""*/, v6);
    byte_41891CB = 1;
  }
  v7 = sub_B2C42C(ShopRootComponent___c__DisplayClass68_0_TypeInfo);
  ShopRootComponent___c__DisplayClass68_0___ctor((ShopRootComponent___c__DisplayClass68_0_o *)v7, 0LL);
  if ( !v7 )
    sub_B2C434(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
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
  *(_DWORD *)(v7 + 24) = ShopRootComponent__GetStateOnInit(v16, *p_name, id, v17);
  v21 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v21, (Il2CppObject *)v7, Method_ShopRootComponent___c__DisplayClass68_0__LoadBanner_b__0__, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadOutGameAtlas(v21, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_4189201 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, *(_QWORD *)&result);
    byte_4189201 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_B2C434(Instance, v6);
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

  if ( (byte_41891F0 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_41891F0 = 1;
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

  if ( (byte_41891EB & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_41891EB = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  ShopRootComponent__OpenHelp(this, v3);
}


void __fastcall ShopRootComponent__OnClickHelpClose(ShopRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  unsigned int state; // w8
  TitleInfoControl_o *titleInfo; // x0
  ShopHelpListViewManager_o *helpListViewManager; // x20
  System_Action_o *v8; // x21
  const MethodInfo *v9; // x2

  if ( (byte_41891ED & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_ShopRootComponent_CheckTutorial__, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    byte_41891ED = 1;
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
    sub_B2C434(titleInfo, method);
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  helpListViewManager = this->fields.helpListViewManager;
  v8 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_ShopRootComponent_CheckTutorial__, 0LL);
  if ( !helpListViewManager )
    goto LABEL_12;
  ShopHelpListViewManager__CloseHelpDialog(helpListViewManager, v8, v9);
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

  if ( (byte_41891E8 & 1) == 0 )
  {
    sub_B2C35C(&BgmManager_TypeInfo, method);
    sub_B2C35C(&SoundManager_TypeInfo, v3);
    byte_41891E8 = 1;
  }
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  MainBgmName = BgmManager__GetMainBgmName(0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
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
  struct ShopSceneListViewControlHelper_o *listViewHelper; // x8
  ShopEntity_o *itemMessageLabel; // x20
  const MethodInfo *v12; // x2
  System_String_o *longName; // x20
  ScriptManager_CallbackFunc_o *v14; // x21
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_41891E4 & 1) == 0 )
  {
    sub_B2C35C(&ScriptManager_CallbackFunc_TypeInfo, isOk);
    sub_B2C35C(&Method_DataManager_GetMasterData_ShopScriptMaster___, v4);
    sub_B2C35C(&Method_DataMasterBase_ShopScriptMaster__ShopScriptEntity__int__TryGetEntity__, v5);
    sub_B2C35C(&ScriptManager_TypeInfo, v6);
    sub_B2C35C(&Method_ShopRootComponent_OnEndPlayScriptRequestShop__, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_41891E4 = 1;
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
  requestResultDialog = (RequestResultDialog_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !requestResultDialog )
    goto LABEL_21;
  requestResultDialog = (RequestResultDialog_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                   (DataManager_o *)requestResultDialog,
                                                   (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ShopScriptMaster___);
  if ( !itemMessageLabel || !requestResultDialog )
    goto LABEL_21;
  requestResultDialog = (RequestResultDialog_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                   (DataMasterBase_WarMaster__WarEntity__int__o *)requestResultDialog,
                                                   &entity,
                                                   itemMessageLabel->fields.id,
                                                   (const MethodInfo_24E412C *)Method_DataMasterBase_ShopScriptMaster__ShopScriptEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)requestResultDialog & 1) == 0 )
    goto LABEL_13;
  if ( !entity )
    goto LABEL_21;
  requestResultDialog = (RequestResultDialog_o *)System_String__IsNullOrEmpty(entity->fields.longName, 0LL);
  if ( ((unsigned __int8)requestResultDialog & 1) != 0 )
  {
LABEL_13:
    if ( itemMessageLabel->fields.purchaseType == 14 )
      ShopRootComponent__PlayServantCostumeReleaseEffect(this, itemMessageLabel, v12);
    else
      ShopRootComponent__RequestEnd(this, (const MethodInfo *)isOk);
    return;
  }
  if ( !entity )
LABEL_21:
    sub_B2C434(requestResultDialog, isOk);
  longName = entity->fields.longName;
  v14 = (ScriptManager_CallbackFunc_o *)sub_B2C42C(ScriptManager_CallbackFunc_TypeInfo);
  ScriptManager_CallbackFunc___ctor(
    v14,
    (Il2CppObject *)this,
    Method_ShopRootComponent_OnEndPlayScriptRequestShop__,
    0LL);
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  ScriptManager__PlayShop(longName, v14, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopRootComponent__OnEndPlayScriptRequestShop(
        ShopRootComponent_o *this,
        bool isExit,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  CommonUI_o *Instance; // x20
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_41891E5 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isExit);
    sub_B2C35C(&Method_ShopRootComponent_OnEndFadeRequestShop__, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_41891E5 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_ShopRootComponent_OnEndFadeRequestShop__, 0LL);
  if ( !Instance )
    sub_B2C434(v8, v9);
  CommonUI__maskFadein(Instance, 1.0, v7, 0LL);
}


void __fastcall ShopRootComponent__OnEndPlayServantCostumeReleaseEffect(
        ShopRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v7; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_41891E7 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&AvalonSceneManager_TypeInfo, v3);
    sub_B2C35C(&Method_ShopRootComponent_RequestEnd__, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_41891E7 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v7 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v7->static_fields->DEFAULT_FADE_TIME;
  v9 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_ShopRootComponent_RequestEnd__, 0LL);
  if ( !Instance )
    sub_B2C434(v10, v11);
  CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, v9, 0LL);
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
    sub_B2C434(0LL, count);
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
    sub_B2C434(BuyItemKind, v6);
  }
  ShopSceneListViewControlHelper__SetListViewInvalidate(BuyItemKind, v6);
  return 1;
}


void __fastcall ShopRootComponent__OnGiftOpen(ShopRootComponent_o *this, const MethodInfo *method)
{
  ShopPlayVoiceComponent_o *shopPlayVoiceComponent; // x0

  shopPlayVoiceComponent = this->fields.shopPlayVoiceComponent;
  if ( !shopPlayVoiceComponent )
    sub_B2C434(0LL, method);
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
      sub_B2C434(0LL, state);
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
      sub_B2C434(0LL, state);
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
void __fastcall ShopRootComponent__OnSelectBuyItem(ShopRootComponent_o *this, int32_t index, const MethodInfo *method)
{
  ShopBuyItemListViewManager_o *buyItemListViewManager; // x0
  __int64 v6; // x1
  struct ShopSceneListViewControlHelper_o *listViewHelper; // x8
  ShopBuyItemListViewItem_o *Item; // x0
  const MethodInfo *v9; // x2
  bool IsBulk; // w2
  const MethodInfo *v11; // x3

  if ( (byte_41891F3 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, *(_QWORD *)&index);
    byte_41891F3 = 1;
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
      sub_B2C434(buyItemListViewManager, v6);
    Item = ShopBuyItemListViewManager__GetItem(buyItemListViewManager, index, 0LL);
    IsBulk = ShopRootComponent__GetIsBulk((ShopRootComponent_o *)Item, Item, v9);
    ShopRootComponent__SelectItem(this, index, IsBulk, v11);
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
  ShopEventListViewManager_o *eventListViewManager; // x0
  __int64 v13; // x1
  struct ShopSceneListViewControlHelper_o *listViewHelper; // x8
  ShopEventListViewItem_o *Item; // x20
  const MethodInfo *v16; // x2
  int32_t eventId; // w21
  SceneJumpInfo_o *v18; // x19

  if ( (byte_41891F5 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventDetailMaster___, *(_QWORD *)&index);
    sub_B2C35C(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v5);
    sub_B2C35C(&SceneJumpInfo_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_B2C35C(&SoundManager_TypeInfo, v10);
    sub_B2C35C(&StringLiteral_9631/*"NormalEventShop"*/, v11);
    byte_41891F5 = 1;
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
  eventListViewManager = (ShopEventListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !eventListViewManager )
    goto LABEL_18;
  eventListViewManager = (ShopEventListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)eventListViewManager,
                                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Item )
    goto LABEL_18;
  if ( !eventListViewManager )
    goto LABEL_18;
  eventListViewManager = (ShopEventListViewManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                         (DataMasterBase_WarMaster__WarEntity__int__o *)eventListViewManager,
                                                         Item->fields.eventId,
                                                         (const MethodInfo_24E40D0 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  if ( !eventListViewManager )
    goto LABEL_18;
  if ( EventDetailEntity__IsEventShop((EventDetailEntity_o *)eventListViewManager, 0LL) )
  {
    eventId = Item->fields.eventId;
    v18 = (SceneJumpInfo_o *)sub_B2C42C(SceneJumpInfo_TypeInfo);
    SceneJumpInfo___ctor_17292968(v18, (System_String_o *)StringLiteral_9631/*"NormalEventShop"*/, eventId, 0LL);
    if ( v18 )
    {
      SceneJumpInfo__SetReturnNowScene(v18, 0LL);
      eventListViewManager = (ShopEventListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( eventListViewManager )
      {
        CommonUI__CheckChangeOtherConnectMarkFromEventId(
          (CommonUI_o *)eventListViewManager,
          Item->fields.eventId,
          1,
          0LL);
        eventListViewManager = (ShopEventListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( eventListViewManager )
        {
          AvalonSceneManager__transitionScene(
            (AvalonSceneManager_o *)eventListViewManager,
            72,
            1,
            (Il2CppObject *)v18,
            0LL);
          return;
        }
      }
    }
LABEL_18:
    sub_B2C434(eventListViewManager, v13);
  }
  ShopRootComponent__SelectMenu(this, 8, v16);
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
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.selectedServantIds,
      (System_Int32_array **)servantList,
      (System_String_array **)servantList,
      (System_String_array **)commandCodeList,
      (System_Boolean_array **)method,
      v5,
      v6,
      v7);
    this->fields.selectedCommandCodeIds = commandCodeList;
    sub_B2C2F8(
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


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopRootComponent__OnSelectTop(ShopRootComponent_o *this, int32_t state, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ShopRootConstants_c *v7; // x0
  bool IsSvtCostumeShopOpen; // w0
  _BOOL4 v9; // w9
  _BOOL4 v10; // w8
  bool IsTargetQuestClear; // w0
  const MethodInfo *v12; // x2

  if ( (byte_41891F2 & 1) == 0 )
  {
    sub_B2C35C(&CoinRoomUtility_TypeInfo, *(_QWORD *)&state);
    sub_B2C35C(&ShopRootConstants_TypeInfo, v5);
    sub_B2C35C(&SoundManager_TypeInfo, v6);
    byte_41891F2 = 1;
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
      v10 = 0;
      v9 = !IsTargetQuestClear;
    }
    else if ( state == 15 )
    {
      v7 = ShopRootConstants_TypeInfo;
      if ( (BYTE3(ShopRootConstants_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ShopRootConstants_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
      }
      IsSvtCostumeShopOpen = ShopRootConstants__IsSvtCostumeShopOpen((const MethodInfo *)v7);
      v9 = 0;
      v10 = !IsSvtCostumeShopOpen;
    }
    else
    {
      v10 = 0;
      v9 = 0;
    }
    if ( v9 || v10 )
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
      ShopRootComponent__SelectMenu(this, state, v12);
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
  __int64 v16; // x23
  ShopEntity_o *KindByShopState; // x0
  __int64 v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  ShopBuyItemListViewItem_o **v25; // x22
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  ShopBuyItemListViewItem_o *v32; // x20
  struct ShopBuyBulkItemConfirmMenu_o *ApSeedBulkExchangeConfirmMenu; // x21
  ShopEntity_o *v34; // x22
  System_Action_int__o *v35; // x23
  int32_t v36; // w4
  ShopBuyBulkItemConfirmMenu_o *v37; // x0
  ShopEntity_o *v38; // x1
  ShopBuyItemListViewItem_o *v39; // x2
  System_Action_int__o *v40; // x3
  ShopBuyItemListViewItem_o *v41; // x8
  struct ShopBuyItemConfirmMenu_o *buyItemConfirmMenu; // x20
  ShopEntity_o *v43; // x21
  int32_t ShopKind_k__BackingField; // w22
  System_Action_int__o *v45; // x23
  ShopBuyItemConfirmMenu_o *v46; // x0
  ShopEntity_o *v47; // x1
  int32_t v48; // w2
  ShopBuyItemConfirmMenu_o *v49; // x20
  ShopBuyItemListViewItem_o *v50; // x21
  System_Action_o *v51; // x0
  __int64 *v52; // x8
  int32_t v53; // w21
  const MethodInfo *v54; // x2
  BuyStorageConfirmDialogComponent_o *buyStorageNotificationDialog; // x20
  ShopBuyItemListViewItem_o *v56; // x22
  System_Action_int__o *v57; // x23
  int32_t v58; // w2
  System_Action_o *v59; // x22
  System_Action_int__o *v60; // x23
  int v61; // w23
  ShopBuyItemListViewItem_o *v62; // x20
  struct ShopBuyBulkItemConfirmMenu_o *buyBulkItemConfirmMenu; // x21
  ShopEntity_o *Shop_k__BackingField; // x22
  System_Action_int__o *v65; // x23
  ShopEntity_o *v66; // x22
  int32_t v67; // w21
  BuyStorageConfirmDialogComponent_o *buyStorageConfirmDialog; // x20
  ShopBuyItemListViewItem_o *v69; // x22
  System_Action_int__o *v70; // x23

  if ( (byte_41891D4 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_int___ctor__, *(_QWORD *)&state);
    sub_B2C35C(&System_Action_int__TypeInfo, v9);
    sub_B2C35C(&System_Action_TypeInfo, v10);
    sub_B2C35C(&Method_ShopRootComponent_CloseStorageDetailCheckConfirm__, v11);
    sub_B2C35C(&Method_ShopRootComponent_SelectedBuyItemConfirm__, v12);
    sub_B2C35C(&Method_ShopRootComponent___c__DisplayClass81_0__OpenConfirmMenu_b__0__, v13);
    sub_B2C35C(&Method_ShopRootComponent___c__DisplayClass81_0__OpenConfirmMenu_b__1__, v14);
    sub_B2C35C(&ShopRootComponent___c__DisplayClass81_0_TypeInfo, v15);
    byte_41891D4 = 1;
  }
  v16 = sub_B2C42C(ShopRootComponent___c__DisplayClass81_0_TypeInfo);
  ShopRootComponent___c__DisplayClass81_0___ctor((ShopRootComponent___c__DisplayClass81_0_o *)v16, 0LL);
  if ( !v16 )
    goto LABEL_50;
  *(_QWORD *)(v16 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v16 + 16), (System_Int32_array **)this, v19, v20, v21, v22, v23, v24);
  *(_QWORD *)(v16 + 24) = item;
  v25 = (ShopBuyItemListViewItem_o **)(v16 + 24);
  sub_B2C2F8((BattleServantConfConponent_o *)(v16 + 24), (System_Int32_array **)item, v26, v27, v28, v29, v30, v31);
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
      v41 = *v25;
      if ( !*v25 )
        goto LABEL_50;
      buyItemConfirmMenu = this->fields.buyItemConfirmMenu;
      goto LABEL_13;
    case 3:
    case 15:
      if ( isBulk )
        goto LABEL_6;
      v49 = this->fields.buyItemConfirmMenu;
      v50 = *(ShopBuyItemListViewItem_o **)(v16 + 24);
      v51 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      v52 = &Method_ShopRootComponent___c__DisplayClass81_0__OpenConfirmMenu_b__0__;
      goto LABEL_27;
    case 11:
    case 12:
      KindByShopState = (ShopEntity_o *)BuyStorageConfirmDialogComponent__GetKindByShopState(state, 0LL);
      if ( !*v25 )
        goto LABEL_50;
      v53 = (int)KindByShopState;
      KindByShopState = (*v25)->fields._Shop_k__BackingField;
      if ( !KindByShopState )
        goto LABEL_50;
      KindByShopState = (ShopEntity_o *)ShopEntity__IsSoldOut(KindByShopState, 0LL);
      if ( ((unsigned __int8)KindByShopState & 1) != 0 )
      {
        buyStorageNotificationDialog = this->fields.buyStorageNotificationDialog;
        v56 = *v25;
        v57 = (System_Action_int__o *)sub_B2C42C(System_Action_int__TypeInfo);
        System_Action_int____ctor(
          v57,
          (Il2CppObject *)this,
          Method_ShopRootComponent_SelectedBuyItemConfirm__,
          (const MethodInfo_24BA548 *)Method_System_Action_int___ctor__);
        if ( buyStorageNotificationDialog )
        {
          v58 = 1;
LABEL_38:
          BuyStorageConfirmDialogComponent__NotificationDialogOpen(
            buyStorageNotificationDialog,
            v53,
            v58,
            v56,
            v57,
            0LL);
          return;
        }
        goto LABEL_50;
      }
      if ( !*v25 )
        goto LABEL_50;
      KindByShopState = (ShopEntity_o *)ShopRootComponent__GetCurrency(
                                          (ShopRootComponent_o *)KindByShopState,
                                          (*v25)->fields._Shop_k__BackingField,
                                          v54);
      if ( !*v25 )
        goto LABEL_50;
      v61 = (int)KindByShopState;
      KindByShopState = (*v25)->fields._Shop_k__BackingField;
      if ( !KindByShopState )
        goto LABEL_50;
      KindByShopState = (ShopEntity_o *)ShopEntity__GetPrice(KindByShopState, 0LL);
      if ( v61 < (int)KindByShopState )
      {
        buyStorageNotificationDialog = this->fields.buyStorageNotificationDialog;
        v56 = *v25;
        v57 = (System_Action_int__o *)sub_B2C42C(System_Action_int__TypeInfo);
        System_Action_int____ctor(
          v57,
          (Il2CppObject *)this,
          Method_ShopRootComponent_SelectedBuyItemConfirm__,
          (const MethodInfo_24BA548 *)Method_System_Action_int___ctor__);
        if ( buyStorageNotificationDialog )
        {
          v58 = 2;
          goto LABEL_38;
        }
LABEL_50:
        sub_B2C434(KindByShopState, v18);
      }
      if ( isBulk )
      {
        v62 = *v25;
        if ( !*v25 )
          goto LABEL_50;
        buyBulkItemConfirmMenu = this->fields.buyBulkItemConfirmMenu;
        Shop_k__BackingField = v62->fields._Shop_k__BackingField;
        v65 = (System_Action_int__o *)sub_B2C42C(System_Action_int__TypeInfo);
        System_Action_int____ctor(
          v65,
          (Il2CppObject *)this,
          Method_ShopRootComponent_SelectedBuyItemConfirm__,
          (const MethodInfo_24BA548 *)Method_System_Action_int___ctor__);
        if ( !buyBulkItemConfirmMenu )
          goto LABEL_50;
        v37 = buyBulkItemConfirmMenu;
        v38 = Shop_k__BackingField;
        v39 = v62;
        v40 = v65;
        v36 = 0;
LABEL_10:
        ShopBuyBulkItemConfirmMenu__Open(v37, v38, v39, v40, v36, 0LL);
        return;
      }
      buyStorageConfirmDialog = this->fields.buyStorageConfirmDialog;
      this->fields.buyCount = 1;
      v69 = *v25;
      v70 = (System_Action_int__o *)sub_B2C42C(System_Action_int__TypeInfo);
      System_Action_int____ctor(
        v70,
        (Il2CppObject *)this,
        Method_ShopRootComponent_CloseStorageDetailCheckConfirm__,
        (const MethodInfo_24BA548 *)Method_System_Action_int___ctor__);
      if ( !buyStorageConfirmDialog )
        goto LABEL_50;
      BuyStorageConfirmDialogComponent__Open(buyStorageConfirmDialog, v53, v69, 1, v70, 0LL);
      return;
    case 19:
      if ( isBulk )
      {
        v32 = *v25;
        if ( !*v25 )
          goto LABEL_50;
        ApSeedBulkExchangeConfirmMenu = this->fields.ApSeedBulkExchangeConfirmMenu;
        goto LABEL_8;
      }
      v41 = *v25;
      if ( !*v25 )
        goto LABEL_50;
      buyItemConfirmMenu = this->fields.ApSeedExchangeConfirmMenu;
LABEL_13:
      v43 = v41->fields._Shop_k__BackingField;
      ShopKind_k__BackingField = v41->fields._ShopKind_k__BackingField;
      v45 = (System_Action_int__o *)sub_B2C42C(System_Action_int__TypeInfo);
      System_Action_int____ctor(
        v45,
        (Il2CppObject *)this,
        Method_ShopRootComponent_SelectedBuyItemConfirm__,
        (const MethodInfo_24BA548 *)Method_System_Action_int___ctor__);
      if ( !buyItemConfirmMenu )
        goto LABEL_50;
      v46 = buyItemConfirmMenu;
      v47 = v43;
      v48 = ShopKind_k__BackingField;
      break;
    case 21:
      if ( isBulk )
      {
LABEL_6:
        v32 = *v25;
        if ( !*v25 )
          goto LABEL_50;
        ApSeedBulkExchangeConfirmMenu = this->fields.buyBulkItemConfirmMenu;
LABEL_8:
        v34 = v32->fields._Shop_k__BackingField;
        v35 = (System_Action_int__o *)sub_B2C42C(System_Action_int__TypeInfo);
        System_Action_int____ctor(
          v35,
          (Il2CppObject *)this,
          Method_ShopRootComponent_SelectedBuyItemConfirm__,
          (const MethodInfo_24BA548 *)Method_System_Action_int___ctor__);
        if ( !ApSeedBulkExchangeConfirmMenu )
          goto LABEL_50;
        v36 = 8;
        v37 = ApSeedBulkExchangeConfirmMenu;
        v38 = v34;
        v39 = v32;
        v40 = v35;
        goto LABEL_10;
      }
      KindByShopState = (ShopEntity_o *)*v25;
      if ( !*v25 )
        goto LABEL_50;
      KindByShopState = (ShopEntity_o *)ShopBuyItemListViewItem__get_IsItemTypeRarePri(
                                          (ShopBuyItemListViewItem_o *)KindByShopState,
                                          0LL);
      v49 = this->fields.buyItemConfirmMenu;
      v50 = *v25;
      if ( ((unsigned __int8)KindByShopState & 1) != 0 )
      {
        v51 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
        v52 = &Method_ShopRootComponent___c__DisplayClass81_0__OpenConfirmMenu_b__1__;
LABEL_27:
        v59 = v51;
        System_Action___ctor(v51, (Il2CppObject *)v16, *v52, 0LL);
        v60 = (System_Action_int__o *)sub_B2C42C(System_Action_int__TypeInfo);
        System_Action_int____ctor(
          v60,
          (Il2CppObject *)this,
          Method_ShopRootComponent_SelectedBuyItemConfirm__,
          (const MethodInfo_24BA548 *)Method_System_Action_int___ctor__);
        if ( v49 )
        {
          ShopBuyItemConfirmMenu__OpenAfterCheckedFree(v49, v50, v59, v60, 0LL);
          return;
        }
        goto LABEL_50;
      }
      if ( !v50 )
        goto LABEL_50;
      v66 = v50->fields._Shop_k__BackingField;
      v67 = v50->fields._ShopKind_k__BackingField;
      v45 = (System_Action_int__o *)sub_B2C42C(System_Action_int__TypeInfo);
      System_Action_int____ctor(
        v45,
        (Il2CppObject *)this,
        Method_ShopRootComponent_SelectedBuyItemConfirm__,
        (const MethodInfo_24BA548 *)Method_System_Action_int___ctor__);
      if ( !v49 )
        goto LABEL_50;
      v46 = v49;
      v47 = v66;
      v48 = v67;
      break;
    default:
      return;
  }
  ShopBuyItemConfirmMenu__Open(v46, v47, v48, v45, 0, 0LL);
  return;
}


void __fastcall ShopRootComponent__OpenDetailCheck(ShopRootComponent_o *this, const MethodInfo *method)
{
  ShopRootComponent_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct ShopSceneListViewControlHelper_o *listViewHelper; // x8
  ShopBuyItemListViewItem_o *Item; // x20
  struct ShopEntity_o *Shop_k__BackingField; // x8
  ShopDetailEntity_o *ShopDetailEntity; // x21
  System_String_o *message; // x21
  CommonUI_o *v13; // x20
  CommonConfirmDialog_ClickDelegate_o *v14; // x22

  v2 = this;
  if ( (byte_41891F6 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    sub_B2C35C(&CommonConfirmDialog_ClickDelegate_TypeInfo, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_ShopDetailMaster___, v4);
    sub_B2C35C(&Method_ShopRootComponent_CloseDetaiCheckConfirm__, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    this = (ShopRootComponent_o *)sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_41891F6 = 1;
  }
  listViewHelper = v2->fields.listViewHelper;
  if ( !listViewHelper )
    goto LABEL_15;
  this = (ShopRootComponent_o *)listViewHelper->fields.buyItemListViewManager;
  if ( !this )
    goto LABEL_15;
  Item = ShopBuyItemListViewManager__GetItem((ShopBuyItemListViewManager_o *)this, v2->fields.selectedItemIndex, 0LL);
  this = (ShopRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_15;
  this = (ShopRootComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ShopDetailMaster___);
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
  this = (ShopRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !ShopDetailEntity )
    goto LABEL_15;
  message = ShopDetailEntity->fields.message;
  v13 = (CommonUI_o *)this;
  v14 = (CommonConfirmDialog_ClickDelegate_o *)sub_B2C42C(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v14,
    (Il2CppObject *)v2,
    Method_ShopRootComponent_CloseDetaiCheckConfirm__,
    0LL);
  this = (ShopRootComponent_o *)BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  }
  if ( !v13 )
LABEL_15:
    sub_B2C434(this, method);
  CommonUI__OpenConfirmDialog_17971164(
    v13,
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
  UnityEngine_GameObject_o *shopEventItemDrawBase; // x0
  char v8; // w20
  const MethodInfo *v9; // x1
  UnityEngine_Transform_o *transform; // x21
  int v11; // s0
  UnityEngine_GameObject_o *gameObject; // x0
  ShopRootConstants_c *v15; // x8
  UnityEngine_GameObject_o *v16; // x19

  if ( (byte_41891FB & 1) == 0 )
  {
    sub_B2C35C(&ShopRootConstants_TypeInfo, *(_QWORD *)&state);
    byte_41891FB = 1;
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
    sub_B2C434(shopEventItemDrawBase, *(_QWORD *)&state);
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t state; // w9
  ShopSceneListViewControlHelper_o *listViewHelper; // x0
  CommonUI_o *Instance; // x20
  System_Action_o *v10; // x21
  int32_t v11; // w1
  const MethodInfo *v12; // x1
  int32_t v13; // w19
  System_String_o *HelpSaveKey; // x0

  if ( (byte_41891EC & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_ShopRootComponent_OnClickHelpClose__, v4);
    sub_B2C35C(&ShopRootConstants_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_41891EC = 1;
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
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v10 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_ShopRootComponent_OnClickHelpClose__, 0LL);
      if ( !Instance )
        goto LABEL_22;
      v11 = 20;
      goto LABEL_17;
    case 5:
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v10 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_ShopRootComponent_OnClickHelpClose__, 0LL);
      if ( !Instance )
        goto LABEL_22;
      v11 = 47;
      goto LABEL_17;
    case 6:
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v10 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_ShopRootComponent_OnClickHelpClose__, 0LL);
      if ( !Instance )
        goto LABEL_22;
      v11 = 19;
      goto LABEL_17;
    default:
      if ( state != 20 )
        return;
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v10 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_ShopRootComponent_OnClickHelpClose__, 0LL);
      if ( !Instance )
        goto LABEL_22;
      v11 = 1029;
LABEL_17:
      CommonUI__OpenTutorialImageDialog_17996800(Instance, v11, -1, v10, 0LL, 0LL, 0LL);
      listViewHelper = (ShopSceneListViewControlHelper_o *)this->fields.titleInfo;
      if ( !listViewHelper )
LABEL_22:
        sub_B2C434(listViewHelper, method);
      TitleInfoControl__SetHelpBtn((TitleInfoControl_o *)listViewHelper, 0, 0LL);
      v13 = this->fields.state;
      if ( (BYTE3(ShopRootConstants_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ShopRootConstants_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
      }
      HelpSaveKey = ShopRootConstants__GetHelpSaveKey(v13, v12);
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
  ServantLimitImageMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v13; // x1
  System_String_o *LimitCountSealedDialogMessage; // x0
  SummonInfoDlgComponent_o *limitCountSealInfoDlg; // x21
  System_String_o *v16; // x20
  System_String_o *v17; // x22
  SummonInfoDlgComponent_CallbackFunc_o *v18; // x23

  if ( (byte_41891D5 & 1) == 0 )
  {
    sub_B2C35C(&SummonInfoDlgComponent_CallbackFunc_TypeInfo, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v7);
    sub_B2C35C(&DataManager_TypeInfo, v8);
    sub_B2C35C(&LocalizationManager_TypeInfo, v9);
    sub_B2C35C(&Method_ShopRootComponent_EndLimitCountSealInfoDialog__, v10);
    sub_B2C35C(&StringLiteral_8388/*"LIMIT_COUNT_SEALED_TITLE"*/, v11);
    byte_41891D5 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_12;
  LimitCountSealedDialogMessage = ServantLimitImageMaster__GetLimitCountSealedDialogMessage(
                                    Master_WarQuestSelectionMaster,
                                    svtId,
                                    limitCount,
                                    0LL);
  limitCountSealInfoDlg = this->fields.limitCountSealInfoDlg;
  v16 = LimitCountSealedDialogMessage;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_8388/*"LIMIT_COUNT_SEALED_TITLE"*/, 0LL);
  v18 = (SummonInfoDlgComponent_CallbackFunc_o *)sub_B2C42C(SummonInfoDlgComponent_CallbackFunc_TypeInfo);
  SummonInfoDlgComponent_CallbackFunc___ctor(
    v18,
    (Il2CppObject *)this,
    Method_ShopRootComponent_EndLimitCountSealInfoDialog__,
    0LL);
  if ( !limitCountSealInfoDlg )
LABEL_12:
    sub_B2C434(Master_WarQuestSelectionMaster, v13);
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
  CommonUI_o *Instance; // x20
  StonePurchaseMenu_CallbackFunc_o *v10; // x21
  System_Action_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1

  if ( (byte_41891FF & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&state);
    sub_B2C35C(&StonePurchaseMenu_CallbackFunc_TypeInfo, v5);
    sub_B2C35C(&Method_ShopRootComponent_CloseStonePurchaseMenu__, v6);
    sub_B2C35C(&Method_ShopRootComponent_RefreshInfo__, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    byte_41891FF = 1;
  }
  if ( state == 10 )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v10 = (StonePurchaseMenu_CallbackFunc_o *)sub_B2C42C(StonePurchaseMenu_CallbackFunc_TypeInfo);
    StonePurchaseMenu_CallbackFunc___ctor(
      v10,
      (Il2CppObject *)this,
      Method_ShopRootComponent_CloseStonePurchaseMenu__,
      0LL);
    v11 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v11, (Il2CppObject *)this, Method_ShopRootComponent_RefreshInfo__, 0LL);
    if ( !Instance )
      sub_B2C434(v12, v13);
    CommonUI__OpenStonePurchaseMenu(Instance, v10, v11, 0LL);
  }
}


void __fastcall ShopRootComponent__OpenStorageDetailCheck(ShopRootComponent_o *this, const MethodInfo *method)
{
  ShopRootComponent_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct ShopSceneListViewControlHelper_o *listViewHelper; // x8
  ShopBuyItemListViewItem_o *Item; // x20
  int32_t KindByShopState; // w0
  BuyStorageConfirmDialogComponent_o *buyStorageConfirmDialog; // x22
  int32_t buyCount; // w21
  int32_t v10; // w23
  System_Action_int__o *v11; // x24

  v2 = this;
  if ( (byte_41891F7 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_int___ctor__, method);
    sub_B2C35C(&System_Action_int__TypeInfo, v3);
    this = (ShopRootComponent_o *)sub_B2C35C(&Method_ShopRootComponent_CloseStorageDetailCheckConfirm__, v4);
    byte_41891F7 = 1;
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
        v10 = KindByShopState,
        v11 = (System_Action_int__o *)sub_B2C42C(System_Action_int__TypeInfo),
        System_Action_int____ctor(
          v11,
          (Il2CppObject *)v2,
          Method_ShopRootComponent_CloseStorageDetailCheckConfirm__,
          (const MethodInfo_24BA548 *)Method_System_Action_int___ctor__),
        !buyStorageConfirmDialog) )
  {
LABEL_7:
    sub_B2C434(this, method);
  }
  BuyStorageConfirmDialogComponent__Open(buyStorageConfirmDialog, v10, Item, buyCount, v11, 0LL);
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
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  ShopBuyItemListViewItem_o **v20; // x22
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  const MethodInfo *v27; // x3
  __int64 v28; // x8
  __int64 v29; // x8
  int v30; // w21
  QuestRewardInfo_o *v31; // x22
  __int64 v32; // x21
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  __int64 v39; // x8
  __int64 v40; // x8
  __int64 v41; // x8
  CommonUI_o *Instance; // x19
  AvalonSceneManager_c *v43; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v45; // x21
  __int64 v46; // x0

  if ( (byte_41891E0 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, item);
    sub_B2C35C(&AvalonSceneManager_TypeInfo, v5);
    sub_B2C35C(&BalanceConfig_TypeInfo, v6);
    sub_B2C35C(&QuestRewardInfo_TypeInfo, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_B2C35C(&Method_ShopRootComponent___c__DisplayClass95_0__PlayLvExceedItemReleaseEffect_b__0__, v9);
    sub_B2C35C(&ShopRootComponent___c__DisplayClass95_0_TypeInfo, v10);
    byte_41891E0 = 1;
  }
  v11 = sub_B2C42C(ShopRootComponent___c__DisplayClass95_0_TypeInfo);
  ShopRootComponent___c__DisplayClass95_0___ctor((ShopRootComponent___c__DisplayClass95_0_o *)v11, 0LL);
  if ( !v11 )
    goto LABEL_26;
  *(_QWORD *)(v11 + 24) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v11 + 24), (System_Int32_array **)this, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v11 + 32) = item;
  v20 = (ShopBuyItemListViewItem_o **)(v11 + 32);
  sub_B2C2F8((BattleServantConfConponent_o *)(v11 + 32), (System_Int32_array **)item, v21, v22, v23, v24, v25, v26);
  if ( !*(_QWORD *)(v11 + 32) )
    goto LABEL_26;
  v28 = *(_QWORD *)(*(_QWORD *)(v11 + 32) + 112LL);
  if ( !v28 )
    goto LABEL_26;
  v29 = *(_QWORD *)(v28 + 56);
  if ( !v29 )
    goto LABEL_26;
  if ( !*(_DWORD *)(v29 + 24) )
  {
LABEL_27:
    v46 = sub_B2C460(v12);
    sub_B2C400(v46, 0LL);
  }
  v30 = *(_DWORD *)(v29 + 32);
  v12 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v12 = BalanceConfig_TypeInfo;
  }
  if ( v30 == v12->static_fields->LvExceedItemId )
  {
    v31 = (QuestRewardInfo_o *)sub_B2C42C(QuestRewardInfo_TypeInfo);
    QuestRewardInfo___ctor(v31, 0LL);
    *(_QWORD *)(v11 + 16) = v31;
    v32 = v11 + 16;
    sub_B2C2F8((BattleServantConfConponent_o *)(v11 + 16), (System_Int32_array **)v31, v33, v34, v35, v36, v37, v38);
    v39 = *(_QWORD *)(v11 + 32);
    if ( !v39 )
      goto LABEL_26;
    v40 = *(_QWORD *)(v39 + 112);
    if ( !v40 )
      goto LABEL_26;
    v41 = *(_QWORD *)(v40 + 56);
    if ( !v41 )
      goto LABEL_26;
    if ( *(_DWORD *)(v41 + 24) )
    {
      if ( *(_QWORD *)v32 )
      {
        *(_DWORD *)(*(_QWORD *)v32 + 20LL) = *(_DWORD *)(v41 + 32);
        if ( *(_QWORD *)v32 )
        {
          *(_DWORD *)(*(_QWORD *)v32 + 24LL) = this->fields.buyCount;
          if ( *(_QWORD *)v32 )
          {
            *(_DWORD *)(*(_QWORD *)v32 + 16LL) = 2;
            Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v43 = AvalonSceneManager_TypeInfo;
            if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
              v43 = AvalonSceneManager_TypeInfo;
            }
            DEFAULT_FADE_TIME = v43->static_fields->DEFAULT_FADE_TIME;
            v45 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
            System_Action___ctor(
              v45,
              (Il2CppObject *)v11,
              Method_ShopRootComponent___c__DisplayClass95_0__PlayLvExceedItemReleaseEffect_b__0__,
              0LL);
            if ( Instance )
            {
              CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v45, 0LL);
              return;
            }
          }
        }
      }
LABEL_26:
      sub_B2C434(v12, v13);
    }
    goto LABEL_27;
  }
  v13 = *v20;
  if ( !*v20 )
    goto LABEL_26;
  ShopRootComponent__ShowNormalItemDialog(this, v13, v13->fields._Shop_k__BackingField, v27);
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
  __int64 v9; // x19
  __int64 v10; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  const MethodInfo *v24; // x2
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v26; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v28; // x21

  if ( (byte_41891E6 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, shopEntity);
    sub_B2C35C(&AvalonSceneManager_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B2C35C(&Method_ShopRootComponent___c__DisplayClass102_0__PlayServantCostumeReleaseEffect_b__0__, v7);
    sub_B2C35C(&ShopRootComponent___c__DisplayClass102_0_TypeInfo, v8);
    byte_41891E6 = 1;
  }
  v9 = sub_B2C42C(ShopRootComponent___c__DisplayClass102_0_TypeInfo);
  ShopRootComponent___c__DisplayClass102_0___ctor((ShopRootComponent___c__DisplayClass102_0_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_9;
  *(_QWORD *)(v9 + 16) = shopEntity;
  sub_B2C2F8((BattleServantConfConponent_o *)(v9 + 16), (System_Int32_array **)shopEntity, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v9 + 24), (System_Int32_array **)this, v18, v19, v20, v21, v22, v23);
  ShopRootComponent__SetActionBG(this, 1, v24);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v26 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v26 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v26->static_fields->DEFAULT_FADE_TIME;
  v28 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v28,
    (Il2CppObject *)v9,
    Method_ShopRootComponent___c__DisplayClass102_0__PlayServantCostumeReleaseEffect_b__0__,
    0LL);
  if ( !Instance )
LABEL_9:
    sub_B2C434(v10, v11);
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v28, 0LL);
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
    sub_B2C434(BackVoiceMasterKey, v6);
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
    sub_B2C434(EnterVoiceMasterKey, v6);
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
    sub_B2C434(standFigureBack, method);
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

  if ( (byte_41891EF & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_21218/*"ok"*/, result);
    byte_41891EF = 1;
  }
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_21218/*"ok"*/, 0LL) )
  {
    listViewHelper = this->fields.listViewHelper;
    this->fields.inputState = 4;
    if ( !listViewHelper )
      sub_B2C434(0LL, v5);
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
    sub_B2C434(CurrencyKind, v6);
  ShopCurrencyInfoController__RefreshCurrencyInfo(currencyInfoController, CurrencyKind, state, 0LL);
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
  UserGameEntity_o *SelfUserGame; // x20
  int64_t Instance; // x0
  __int64 v13; // x1
  int64_t v14; // x21
  UILabel_o *stoneInfoLabel; // x22
  int32_t stone; // w23
  UILabel_o *manaInfoLabel; // x22
  UILabel_o *rarePriInfoLabel; // x22
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  UILabel_o *stoneFragmentsInfoLabel; // x22
  UserItemMaster_o *v21; // x20
  UILabel_o *anonymousInfoLabel; // x22
  int64_t UserId; // x0
  UILabel_o *grailFragmentsInfoLabel; // x21
  int64_t v25; // x22
  BalanceConfig_c *v26; // x8
  UILabel_o *apSeedInfoLabel; // x21
  int64_t v28; // x0
  const MethodInfo *v29; // x1
  UILabel_o *shop13InfoLabel; // x21
  int64_t v31; // x0
  UISprite_o *shop13Info; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v34; // x0
  UnityEngine_GameObject_o *v35; // x0
  UnityEngine_GameObject_o *v36; // x0
  char v37; // w21
  UILabel_o *shop15InfoLabel; // x21
  int64_t v39; // x0
  BalanceConfig_c *v40; // x8
  int64_t v41; // x22
  int32_t v42; // w20
  UISprite_o *shop15Info; // x20
  UnityEngine_GameObject_o *v44; // x0
  UnityEngine_GameObject_o *v45; // x0
  UnityEngine_GameObject_o *v46; // x0
  UnityEngine_GameObject_o *v47; // x0
  const MethodInfo *v48; // x2

  if ( (byte_41891CD & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, method);
    sub_B2C35C(&BalanceConfig_TypeInfo, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_ItemMaster___, v4);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserItemMaster___, v5);
    sub_B2C35C(&LocalizationManager_TypeInfo, v6);
    sub_B2C35C(&NetworkManager_TypeInfo, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_B2C35C(&StringLiteral_19435/*"img_bg_evocation"*/, v9);
    sub_B2C35C(&StringLiteral_19439/*"img_bg_pp"*/, v10);
    byte_41891CD = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_64;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !SelfUserGame )
    goto LABEL_64;
  v14 = Instance;
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
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_64;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserItemMaster___);
  stoneFragmentsInfoLabel = this->fields.stoneFragmentsInfoLabel;
  v21 = (UserItemMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !v14 )
    goto LABEL_64;
  if ( !v21 )
    goto LABEL_64;
  Instance = (int64_t)UserItemMaster__GetEntityDefinitely(v21, Instance, *(_DWORD *)(v14 + 88), 0LL);
  if ( !Instance )
    goto LABEL_64;
  Instance = (int64_t)LocalizationManager__GetNumberFormat(*(_DWORD *)(Instance + 28), 0LL);
  if ( !stoneFragmentsInfoLabel )
    goto LABEL_64;
  UILabel__set_text(stoneFragmentsInfoLabel, (System_String_o *)Instance, 0LL);
  anonymousInfoLabel = this->fields.anonymousInfoLabel;
  UserId = NetworkManager__get_UserId(0LL);
  Instance = (int64_t)UserItemMaster__GetEntityDefinitely(v21, UserId, *(_DWORD *)(v14 + 92), 0LL);
  if ( !Instance )
    goto LABEL_64;
  Instance = (int64_t)LocalizationManager__GetNumberFormat(*(_DWORD *)(Instance + 28), 0LL);
  if ( !anonymousInfoLabel )
    goto LABEL_64;
  UILabel__set_text(anonymousInfoLabel, (System_String_o *)Instance, 0LL);
  grailFragmentsInfoLabel = this->fields.grailFragmentsInfoLabel;
  v25 = NetworkManager__get_UserId(0LL);
  v26 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v26 = BalanceConfig_TypeInfo;
  }
  Instance = (int64_t)UserItemMaster__GetEntityDefinitely(v21, v25, v26->static_fields->LvExceedDewDropItemId, 0LL);
  if ( !Instance )
    goto LABEL_64;
  Instance = (int64_t)LocalizationManager__GetNumberFormat(*(_DWORD *)(Instance + 28), 0LL);
  if ( !grailFragmentsInfoLabel )
    goto LABEL_64;
  UILabel__set_text(grailFragmentsInfoLabel, (System_String_o *)Instance, 0LL);
  apSeedInfoLabel = this->fields.apSeedInfoLabel;
  v28 = NetworkManager__get_UserId(0LL);
  Instance = (int64_t)UserItemMaster__GetEntityDefinitely(
                        v21,
                        v28,
                        BalanceConfig_TypeInfo->static_fields->ApSeedItemId,
                        0LL);
  if ( !Instance )
    goto LABEL_64;
  Instance = (int64_t)LocalizationManager__GetNumberFormat(*(_DWORD *)(Instance + 28), 0LL);
  if ( !apSeedInfoLabel )
    goto LABEL_64;
  UILabel__set_text(apSeedInfoLabel, (System_String_o *)Instance, 0LL);
  ShopRootComponent__UpdateApLabel(this, v29);
  Instance = (int64_t)this->fields.shop13Info;
  if ( !Instance )
    goto LABEL_64;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_64;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  shop13InfoLabel = this->fields.shop13InfoLabel;
  v31 = NetworkManager__get_UserId(0LL);
  Instance = (int64_t)UserItemMaster__GetEntityDefinitely(
                        v21,
                        v31,
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
  AtlasManager__SetShopBanner_28452940(shop13Info, (System_String_o *)StringLiteral_19439/*"img_bg_pp"*/, 0LL);
  Instance = (int64_t)this->fields.manaInfoLabel;
  if ( !Instance )
    goto LABEL_64;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  Instance = (int64_t)GameObjectExtensions__GetParent(gameObject, 0LL);
  if ( !Instance )
    goto LABEL_64;
  v34 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  GameObjectExtensions__SetLocalPositionX(v34, 85.0, 0LL);
  Instance = (int64_t)this->fields.rarePriInfoLabel;
  if ( !Instance )
    goto LABEL_64;
  v35 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  Instance = (int64_t)GameObjectExtensions__GetParent(v35, 0LL);
  if ( !Instance )
    goto LABEL_64;
  v36 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  GameObjectExtensions__SetLocalPositionX(v36, -273.0, 0LL);
  AtlasManager__SetItem(this->fields.apSeedIcon, 103, 0LL);
  AtlasManager__SetItem(this->fields.apIcon, 47, 0LL);
  Instance = ConstantMaster__IsFLAG20230402(0LL);
  if ( !this->fields.shop15Info )
    goto LABEL_64;
  v37 = Instance;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.shop15Info, 0LL);
  if ( !Instance )
    goto LABEL_64;
  if ( (v37 & 1) != 0 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    shop15InfoLabel = this->fields.shop15InfoLabel;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    v39 = NetworkManager__get_UserId(0LL);
    v40 = BalanceConfig_TypeInfo;
    v41 = v39;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v40 = BalanceConfig_TypeInfo;
    }
    Instance = (int64_t)UserItemMaster__GetEntityDefinitely(v21, v41, v40->static_fields->itemIdForShop15, 0LL);
    if ( Instance )
    {
      v42 = *(_DWORD *)(Instance + 28);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      Instance = (int64_t)LocalizationManager__GetNumberFormat(v42, 0LL);
      if ( shop15InfoLabel )
      {
        UILabel__set_text(shop15InfoLabel, (System_String_o *)Instance, 0LL);
        shop15Info = this->fields.shop15Info;
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__SetShopBanner_28452940(shop15Info, (System_String_o *)StringLiteral_19435/*"img_bg_evocation"*/, 0LL);
        Instance = (int64_t)this->fields.anonymousInfoLabel;
        if ( Instance )
        {
          v44 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
          Instance = (int64_t)GameObjectExtensions__GetParent(v44, 0LL);
          if ( Instance )
          {
            v45 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
            GameObjectExtensions__SetLocalPositionX(v45, -94.0, 0LL);
            Instance = (int64_t)this->fields.grailFragmentsInfoLabel;
            if ( Instance )
            {
              v46 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
              Instance = (int64_t)GameObjectExtensions__GetParent(v46, 0LL);
              if ( Instance )
              {
                v47 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
                GameObjectExtensions__SetLocalPositionX(v47, -273.0, 0LL);
                goto LABEL_62;
              }
            }
          }
        }
      }
    }
LABEL_64:
    sub_B2C434(Instance, v13);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
LABEL_62:
  Instance = (int64_t)this->fields.giftButtonControl;
  if ( !Instance )
    goto LABEL_64;
  GiftButtonCtrl__InvalidateGiftInfo((GiftButtonCtrl_o *)Instance, 0LL);
  ShopRootComponent__RefreshCurrencyInfo(this, this->fields.state, v48);
}


void __fastcall ShopRootComponent__RequestEnd(ShopRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2
  __int64 v8; // x1
  ServantSellConfirmMenu_o *servantSellConfirmMenu; // x0
  ServantSellConfirmMenu_o *v10; // x20
  System_Action_int__o *v11; // x21

  if ( (byte_41891DE & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_int___ctor__, method);
    sub_B2C35C(&System_Action_int__TypeInfo, v3);
    sub_B2C35C(&Method_ShopRootComponent__RequestEnd_b__93_0__, v4);
    byte_41891DE = 1;
  }
  this->fields.inputState = 3;
  ShopRootComponent__RefreshInfo(this, method);
  ShopRootComponent__CloseItemConfirm(this, v5);
  ShopRootComponent__CloseSellServantConfirm(this, v6);
  ShopRootComponent__SetActionBG(this, 0, v7);
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
        v10 = this->fields.servantSellConfirmMenu;
        v11 = (System_Action_int__o *)sub_B2C42C(System_Action_int__TypeInfo);
        System_Action_int____ctor(
          v11,
          (Il2CppObject *)this,
          Method_ShopRootComponent__RequestEnd_b__93_0__,
          (const MethodInfo_24BA548 *)Method_System_Action_int___ctor__);
        if ( v10 )
        {
          ServantSellConfirmMenu__OpenCommandCodeRemoveResult(v10, v11, 0LL);
          return;
        }
      }
LABEL_10:
      sub_B2C434(servantSellConfirmMenu, v8);
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
  SellServantRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v10; // x1

  if ( (byte_41891E9 & 1) == 0 )
  {
    sub_B2C35C(&Method_NetworkManager_getRequest_SellServantRequest___, method);
    sub_B2C35C(&NetworkManager_TypeInfo, v4);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    sub_B2C35C(&Method_ShopRootComponent_EndRequestSellServant__, v6);
    sub_B2C35C(&StringLiteral_21068/*"ng"*/, v7);
    byte_41891E9 = 1;
  }
  if ( this->fields.selectedServantIds )
  {
    v8 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_ShopRootComponent_EndRequestSellServant__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = (SellServantRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                  v8,
                                                                  (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_SellServantRequest___);
    if ( !Request_WarBoardWallAttackRequest )
      sub_B2C434(0LL, v10);
    SellServantRequest__beginRequest(
      Request_WarBoardWallAttackRequest,
      this->fields.selectedServantIds,
      this->fields.selectedCommandCodeIds,
      0LL);
  }
  else
  {
    ShopRootComponent__EndRequestSellServant(this, (System_String_o *)StringLiteral_21068/*"ng"*/, v2);
  }
}


void __fastcall ShopRootComponent__RequestShop(ShopRootComponent_o *this, const MethodInfo *method)
{
  ShopRootComponent_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct ShopSceneListViewControlHelper_o *listViewHelper; // x8
  ShopBuyItemListViewItem_o *Item; // x0
  const MethodInfo *v8; // x1
  ShopBuyItemListViewItem_o *v9; // x20
  NetworkManager_ResultCallbackFunc_o *v10; // x21
  struct ShopEntity_o *Shop_k__BackingField; // x8

  v2 = this;
  if ( (byte_41891DD & 1) == 0 )
  {
    sub_B2C35C(&Method_NetworkManager_getRequest_PurchaseRequest___, method);
    sub_B2C35C(&NetworkManager_TypeInfo, v3);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v4);
    this = (ShopRootComponent_o *)sub_B2C35C(&Method_ShopRootComponent_EndRequestShop__, v5);
    byte_41891DD = 1;
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
    v9 = Item;
    if ( Item->fields._Shop_k__BackingField )
    {
      v10 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(v10, (Il2CppObject *)v2, Method_ShopRootComponent_EndRequestShop__, 0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      this = (ShopRootComponent_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                      v10,
                                      (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_PurchaseRequest___);
      Shop_k__BackingField = v9->fields._Shop_k__BackingField;
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
      sub_B2C434(this, method);
    }
  }
  ShopRootComponent__RequestEnd(v2, v8);
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
  struct ShopSceneListViewControlHelper_o *listViewHelper; // x8
  ShopBuyItemListViewItem_o *Item; // x0
  const MethodInfo *v20; // x2
  const MethodInfo *v21; // x4
  ShopBuyItemListViewItem_o *v22; // x22
  ServantLimitImageMaster_o *v23; // x23
  int32_t TargetId; // w0
  const MethodInfo *v25; // x3
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x23
  WarEntity_o *Entity; // x23
  System_String_o *v28; // x20
  Il2CppObject *v29; // x0
  System_String_o *v30; // x0
  System_String_o *v31; // x21
  Il2CppObject *Name; // x0
  System_String_o *v33; // x0
  SummonInfoDlgComponent_o *limitCountSealInfoDlg; // x21
  System_String_o *v35; // x22
  SummonInfoDlgComponent_CallbackFunc_o *v36; // x23
  int coordinates_high; // [xsp+Ch] [xbp-24h] BYREF

  v5 = index;
  v6 = this;
  if ( (byte_41891D3 & 1) == 0 )
  {
    sub_B2C35C(&SummonInfoDlgComponent_CallbackFunc_TypeInfo, *(_QWORD *)&index);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v7);
    sub_B2C35C(&Method_DataManager_GetMaster_CombineLimitReleaseMaster___, v8);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantMaster___, v9);
    sub_B2C35C(&DataManager_TypeInfo, v10);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11);
    sub_B2C35C(&int_TypeInfo, v12);
    sub_B2C35C(&LocalizationManager_TypeInfo, v13);
    sub_B2C35C(&Method_ShopRootComponent_EndLimitCountSealInfoDialog__, v14);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_B2C35C(&StringLiteral_3189/*"COMBINE_LIMIT_SEALED_TITLE"*/, v16);
    this = (ShopRootComponent_o *)sub_B2C35C(&StringLiteral_3188/*"COMBINE_LIMIT_SEALED_MESSAGE_{0}"*/, v17);
    byte_41891D3 = 1;
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
        v22 = Item;
        if ( v6->fields.state != 6 || ShopRootComponent__GetShopItemBuyNum((ShopRootComponent_o *)Item, Item, v20) > 0 )
          goto LABEL_8;
        this = (ShopRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( this )
        {
          this = (ShopRootComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
          if ( v22 )
          {
            v23 = (ServantLimitImageMaster_o *)this;
            this = (ShopRootComponent_o *)ShopBuyItemListViewItem__get_TargetId(v22, 0LL);
            if ( v23 )
            {
              if ( ServantLimitImageMaster__IsServantLimitCountSeal(v23, (int32_t)this, 4, 0LL) )
              {
                v6->fields.limitCountSealInfoIndex = v5;
                v6->fields.limitCountSealInfoBulk = isBulk;
                TargetId = ShopBuyItemListViewItem__get_TargetId(v22, 0LL);
                ShopRootComponent__OpenLimitCountSealInfoDialog(v6, TargetId, 4, v25);
                return;
              }
              if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !DataManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              }
              Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantMaster___);
              this = (ShopRootComponent_o *)ShopBuyItemListViewItem__get_TargetId(v22, 0LL);
              if ( Master_WarQuestSelectionMaster )
              {
                Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                           Master_WarQuestSelectionMaster,
                           (int32_t)this,
                           (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                this = (ShopRootComponent_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_CombineLimitReleaseMaster___);
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
                  ShopRootComponent__OpenConfirmMenu(v6, v6->fields.state, v22, isBulk, v21);
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
                this = (ShopRootComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3189/*"COMBINE_LIMIT_SEALED_TITLE"*/, 0LL);
                if ( Entity )
                {
                  v28 = (System_String_o *)this;
                  coordinates_high = HIDWORD(Entity->fields.coordinates);
                  v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &coordinates_high);
                  v30 = System_String__Format((System_String_o *)StringLiteral_3188/*"COMBINE_LIMIT_SEALED_MESSAGE_{0}"*/, v29, 0LL);
                  this = (ShopRootComponent_o *)LocalizationManager__Get(v30, 0LL);
                  if ( v22->fields._Shop_k__BackingField )
                  {
                    v31 = (System_String_o *)this;
                    Name = (Il2CppObject *)ShopEntity__getName(v22->fields._Shop_k__BackingField, 0LL);
                    v33 = System_String__Format(v31, Name, 0LL);
                    limitCountSealInfoDlg = v6->fields.limitCountSealInfoDlg;
                    v35 = v33;
                    v36 = (SummonInfoDlgComponent_CallbackFunc_o *)sub_B2C42C(SummonInfoDlgComponent_CallbackFunc_TypeInfo);
                    SummonInfoDlgComponent_CallbackFunc___ctor(
                      v36,
                      (Il2CppObject *)v6,
                      Method_ShopRootComponent_EndLimitCountSealInfoDialog__,
                      0LL);
                    if ( limitCountSealInfoDlg )
                    {
                      SummonInfoDlgComponent__OpenInfoMessageDlg(limitCountSealInfoDlg, v28, v35, v36, 0LL);
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
    sub_B2C434(this, *(_QWORD *)&index);
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
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  ShopRootComponent_o *v18; // x0
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x2
  int32_t v21; // w1
  int32_t v22; // w19
  System_Action_o *v23; // x21
  ShopRootComponent_o *v24; // x0
  const MethodInfo *v25; // x3

  if ( (byte_41891CF & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&state);
    sub_B2C35C(&CoinRoomUtility_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v6);
    sub_B2C35C(&Method_ShopRootComponent___c__DisplayClass76_0__SelectMenu_b__0__, v7);
    sub_B2C35C(&ShopRootComponent___c__DisplayClass76_0_TypeInfo, v8);
    byte_41891CF = 1;
  }
  v9 = sub_B2C42C(ShopRootComponent___c__DisplayClass76_0_TypeInfo);
  ShopRootComponent___c__DisplayClass76_0___ctor((ShopRootComponent___c__DisplayClass76_0_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_20;
  *(_QWORD *)(v9 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v9 + 16), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  *(_DWORD *)(v9 + 24) = state;
  if ( ShopRootComponent__CheckServerLimitTime(v18, state, v19) )
  {
    v21 = *(_DWORD *)(v9 + 24);
    if ( v21 == 17 )
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
          ShopPlayVoiceComponent__StopVoice(shopPlayVoiceComponent, v11);
          shopPlayVoiceComponent = (ShopPlayVoiceComponent_o *)this->fields.topListViewManager;
          if ( shopPlayVoiceComponent )
          {
            this->fields.saveScrollBarValue = ShopTopListViewManager__get_currentScrollBarValue(
                                                (ShopTopListViewManager_o *)shopPlayVoiceComponent,
                                                0LL);
            shopPlayVoiceComponent = (ShopPlayVoiceComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
            if ( shopPlayVoiceComponent )
            {
              AvalonSceneManager__pushScene((AvalonSceneManager_o *)shopPlayVoiceComponent, 90, 1, 0LL, 0LL);
              return;
            }
          }
        }
LABEL_20:
        sub_B2C434(shopPlayVoiceComponent, v11);
      }
      v21 = *(_DWORD *)(v9 + 24);
    }
    if ( v21 == 15 )
    {
      v22 = 15;
    }
    else
    {
      ShopRootComponent__PlayVoiceEnter(this, v21, v20);
      v22 = *(_DWORD *)(v9 + 24);
    }
    v23 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      v23,
      (Il2CppObject *)v9,
      Method_ShopRootComponent___c__DisplayClass76_0__SelectMenu_b__0__,
      0LL);
    ShopRootComponent__SetFadeOut(v24, v22, v23, v25);
  }
}


void __fastcall ShopRootComponent__SelectSellServantConfirm(ShopRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x20
  ServantSellMenu_o *servantSellMenu; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  int32_t tabKind; // w21
  struct System_Int64_array *selectedServantIds; // x22
  bool IsSellEquipedCmdCodeLastServant; // w0
  System_Int64_array *v19; // x22
  ServantSellConfirmMenu_o *servantSellConfirmMenu; // x21
  System_Action_int__o *v21; // x19
  struct ServantSellConfirmMenu_o *v22; // x21
  int32_t v23; // w20
  System_Action_int__o *v24; // x22
  ServantSellConfirmMenu_o *v25; // x0
  int32_t v26; // w1
  System_Int64_array *v27; // x2
  System_Int64_array *v28; // x3
  System_Action_int__o *v29; // x4
  struct ServantSellConfirmMenu_o *v30; // x21
  int32_t v31; // w20
  struct System_Int64_array *v32; // x22
  struct System_Int64_array *selectedCommandCodeIds; // x23
  System_Action_int__o *v34; // x24

  if ( (byte_41891DC & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_int___ctor__, method);
    sub_B2C35C(&System_Action_int__TypeInfo, v3);
    sub_B2C35C(&Method_ShopRootComponent_SellServantConfirm__, v4);
    sub_B2C35C(&Method_ShopRootComponent___c__DisplayClass91_0__SelectSellServantConfirm_b__0__, v5);
    sub_B2C35C(&ShopRootComponent___c__DisplayClass91_0_TypeInfo, v6);
    byte_41891DC = 1;
  }
  v7 = sub_B2C42C(ShopRootComponent___c__DisplayClass91_0_TypeInfo);
  ShopRootComponent___c__DisplayClass91_0___ctor((ShopRootComponent___c__DisplayClass91_0_o *)v7, 0LL);
  if ( !v7 )
    goto LABEL_18;
  *(_QWORD *)(v7 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  if ( this->fields.inputState == 2 )
  {
    servantSellMenu = this->fields.servantSellMenu;
    if ( !servantSellMenu )
      goto LABEL_18;
    tabKind = servantSellMenu->fields.tabKind;
    selectedServantIds = this->fields.selectedServantIds;
    IsSellEquipedCmdCodeLastServant = ServantSellMenu__get_IsSellEquipedCmdCodeLastServant(servantSellMenu, 0LL);
    *(_DWORD *)(v7 + 24) = ServantSellConfirmMenu__GetServantSellConfirmKindOnOpenConfirm(
                             tabKind,
                             selectedServantIds == 0LL,
                             IsSellEquipedCmdCodeLastServant,
                             0LL);
    servantSellMenu = (ServantSellMenu_o *)this->fields.servantSellConfirmMenu;
    if ( !servantSellMenu )
      goto LABEL_18;
    ServantSellConfirmMenu__Init((ServantSellConfirmMenu_o *)servantSellMenu, 0LL);
    v19 = this->fields.selectedServantIds;
    if ( v19 )
    {
      servantSellConfirmMenu = this->fields.servantSellConfirmMenu;
      if ( *(_DWORD *)(v7 + 24) == 4 )
      {
        v21 = (System_Action_int__o *)sub_B2C42C(System_Action_int__TypeInfo);
        System_Action_int____ctor(
          v21,
          (Il2CppObject *)v7,
          Method_ShopRootComponent___c__DisplayClass91_0__SelectSellServantConfirm_b__0__,
          (const MethodInfo_24BA548 *)Method_System_Action_int___ctor__);
        if ( servantSellConfirmMenu )
        {
          ServantSellConfirmMenu__OpenSellEquippedLastSvtWarning(servantSellConfirmMenu, 4, v19, v21, 0LL);
          return;
        }
LABEL_18:
        sub_B2C434(servantSellMenu, v9);
      }
      if ( !servantSellConfirmMenu )
        goto LABEL_18;
      ServantSellConfirmMenu__Init(this->fields.servantSellConfirmMenu, 0LL);
      v30 = this->fields.servantSellConfirmMenu;
      v31 = *(_DWORD *)(v7 + 24);
      v32 = this->fields.selectedServantIds;
      selectedCommandCodeIds = this->fields.selectedCommandCodeIds;
      v34 = (System_Action_int__o *)sub_B2C42C(System_Action_int__TypeInfo);
      System_Action_int____ctor(
        v34,
        (Il2CppObject *)this,
        Method_ShopRootComponent_SellServantConfirm__,
        (const MethodInfo_24BA548 *)Method_System_Action_int___ctor__);
      if ( !v30 )
        goto LABEL_18;
      v25 = v30;
      v26 = v31;
      v27 = v32;
      v28 = selectedCommandCodeIds;
      v29 = v34;
    }
    else
    {
      v22 = this->fields.servantSellConfirmMenu;
      v23 = *(_DWORD *)(v7 + 24);
      v24 = (System_Action_int__o *)sub_B2C42C(System_Action_int__TypeInfo);
      System_Action_int____ctor(
        v24,
        (Il2CppObject *)this,
        Method_ShopRootComponent_SellServantConfirm__,
        (const MethodInfo_24BA548 *)Method_System_Action_int___ctor__);
      if ( !v22 )
        goto LABEL_18;
      v25 = v22;
      v26 = v23;
      v27 = 0LL;
      v28 = 0LL;
      v29 = v24;
    }
    ServantSellConfirmMenu__Open(v25, v26, v27, v28, v29, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopRootComponent__SelectedBuyItemConfirm(
        ShopRootComponent_o *this,
        int32_t buyCount,
        const MethodInfo *method)
{
  ShopRootComponent_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t state; // w8
  struct ShopSceneListViewControlHelper_o *listViewHelper; // x8
  ShopBuyItemListViewItem_o *Item; // x20
  struct ShopEntity_o *Shop_k__BackingField; // x8
  ShopDetailEntity_o *ShopDetailEntity; // x0
  ShopDetailEntity_o *v13; // x20
  ShopRootComponent_c *v14; // x0

  v4 = this;
  if ( (byte_41891D8 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ShopDetailMaster___, *(_QWORD *)&buyCount);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v5);
    sub_B2C35C(&ShopRootComponent_TypeInfo, v6);
    this = (ShopRootComponent_o *)sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_41891D8 = 1;
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
        this = (ShopRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( this )
        {
          this = (ShopRootComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ShopDetailMaster___);
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
                v13 = ShopDetailEntity;
                if ( ShopDetailEntity->fields.frequencyType == 3 )
                  goto LABEL_24;
                v14 = ShopRootComponent_TypeInfo;
                if ( (BYTE3(ShopRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !ShopRootComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(ShopRootComponent_TypeInfo);
                  v14 = ShopRootComponent_TypeInfo;
                }
                this = (ShopRootComponent_o *)v14->static_fields->shopDetailCheckList;
                if ( this )
                {
                  if ( System_Collections_Generic_Dictionary_int__int___get_Item(
                         (System_Collections_Generic_Dictionary_int__int__o *)this,
                         v13->fields.shopId,
                         (const MethodInfo_2E24480 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__) )
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
    sub_B2C434(this, *(_QWORD *)&buyCount);
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
      sub_B2C434(servantSellConfirmMenu, *(_QWORD *)&count);
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

  if ( (byte_4189203 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, isEnable);
    byte_4189203 = 1;
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
      sub_B2C434(0LL, v6);
    UnityEngine_GameObject__SetActive(v7, isEnable, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopRootComponent__SetFadeIn(ShopRootComponent_o *this, int32_t state, const MethodInfo *method)
{
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  __int64 v6; // x1
  CommonUI_o *v7; // x19

  if ( (byte_41891D2 & 1) == 0 )
  {
    sub_B2C35C(&AvalonSceneManager_TypeInfo, *(_QWORD *)&state);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_41891D2 = 1;
  }
  if ( state == 15 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v7 = (CommonUI_o *)Instance;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    }
    if ( !v7 )
      sub_B2C434(Instance, v6);
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
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v20; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v22; // x21

  if ( (byte_41891D1 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&state);
    sub_B2C35C(&AvalonSceneManager_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B2C35C(&Method_ShopRootComponent___c__DisplayClass78_0__SetFadeOut_b__0__, v8);
    sub_B2C35C(&ShopRootComponent___c__DisplayClass78_0_TypeInfo, v9);
    byte_41891D1 = 1;
  }
  v10 = sub_B2C42C(ShopRootComponent___c__DisplayClass78_0_TypeInfo);
  ShopRootComponent___c__DisplayClass78_0___ctor((ShopRootComponent___c__DisplayClass78_0_o *)v10, 0LL);
  if ( !v10 )
    goto LABEL_11;
  *(_QWORD *)(v10 + 16) = endFade;
  sub_B2C2F8((BattleServantConfConponent_o *)(v10 + 16), (System_Int32_array **)endFade, v13, v14, v15, v16, v17, v18);
  if ( state == 15 )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v20 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v20 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v20->static_fields->DEFAULT_FADE_TIME;
    v22 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      v22,
      (Il2CppObject *)v10,
      Method_ShopRootComponent___c__DisplayClass78_0__SetFadeOut_b__0__,
      0LL);
    if ( Instance )
    {
      CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v22, 0LL);
      return;
    }
LABEL_11:
    sub_B2C434(v11, v12);
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
  ShopRootComponent_c *v7; // x0
  System_Collections_Generic_Dictionary_int__int__o *shopDetailCheckList; // x0

  if ( (byte_41891FA & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__, entity);
    sub_B2C35C(&ShopRootComponent_TypeInfo, v6);
    byte_41891FA = 1;
  }
  if ( entity && (decide || entity->fields.frequencyType != 1) )
  {
    v7 = ShopRootComponent_TypeInfo;
    if ( (BYTE3(ShopRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ShopRootComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ShopRootComponent_TypeInfo);
      v7 = ShopRootComponent_TypeInfo;
    }
    shopDetailCheckList = v7->static_fields->shopDetailCheckList;
    if ( !shopDetailCheckList )
      sub_B2C434(0LL, entity);
    System_Collections_Generic_Dictionary_int__int___set_Item(
      shopDetailCheckList,
      entity->fields.shopId,
      1,
      (const MethodInfo_2E24518 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
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
    sub_B2C434(informationPanel, isDisp);
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
  __int64 v12; // x1
  System_String_o *RequestResultDialogMessageNormal; // x0
  __int64 v14; // x1
  System_String_o *v15; // x20
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x22
  ItemEntity_o *v17; // x23
  const MethodInfo *v18; // x3
  System_String_o *RequestResultDialogItemMessageNormal; // x22
  const MethodInfo *v20; // x2
  System_String_o *RequestResultDialogNumMessageNormal; // x0
  RequestResultDialog_o *requestResultDialog; // x21
  System_String_o *v23; // x23
  System_Action_bool__o *v24; // x24
  RequestResultDialog_o *v25; // x21
  System_Action_bool__o *v26; // x22

  if ( (byte_41891E1 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_bool___ctor__, item);
    sub_B2C35C(&System_Action_bool__TypeInfo, v7);
    sub_B2C35C(&Method_DataManager_GetMasterData_ItemMaster___, v8);
    sub_B2C35C(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v9);
    sub_B2C35C(&Method_ShopRootComponent_OnEndItemDialog__, v10);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B2C35C(&StringLiteral_1/*""*/, v12);
    byte_41891E1 = 1;
  }
  RequestResultDialogMessageNormal = ShopRequestResultDialogMessageMaker__GetRequestResultDialogMessageNormal(
                                       item,
                                       entity,
                                       this->fields.buyCount,
                                       method);
  if ( !entity )
    goto LABEL_11;
  v15 = RequestResultDialogMessageNormal;
  if ( entity->fields.purchaseType == 1 )
  {
    RequestResultDialogMessageNormal = (System_String_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( RequestResultDialogMessageNormal )
    {
      MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                            (DataManager_o *)RequestResultDialogMessageNormal,
                                                                                            (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ItemMaster___);
      RequestResultDialogMessageNormal = (System_String_o *)ShopEntity__get_TargetId(entity, 0LL);
      if ( MasterData_WarQuestSelectionMaster )
      {
        v17 = (ItemEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                MasterData_WarQuestSelectionMaster,
                                (int32_t)RequestResultDialogMessageNormal,
                                (const MethodInfo_24E40D0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        RequestResultDialogItemMessageNormal = ShopRequestResultDialogMessageMaker__GetRequestResultDialogItemMessageNormal(
                                                 entity,
                                                 v17,
                                                 this->fields.buyCount,
                                                 v18);
        RequestResultDialogNumMessageNormal = ShopRequestResultDialogMessageMaker__GetRequestResultDialogNumMessageNormal(
                                                entity,
                                                v17,
                                                v20);
        requestResultDialog = this->fields.requestResultDialog;
        v23 = RequestResultDialogNumMessageNormal;
        v24 = (System_Action_bool__o *)sub_B2C42C(System_Action_bool__TypeInfo);
        System_Action_bool____ctor(
          v24,
          (Il2CppObject *)this,
          Method_ShopRootComponent_OnEndItemDialog__,
          (const MethodInfo_24B7B90 *)Method_System_Action_bool___ctor__);
        if ( requestResultDialog )
        {
          RequestResultDialog__Open(requestResultDialog, v15, v23, RequestResultDialogItemMessageNormal, v24, 0LL);
          return;
        }
      }
    }
LABEL_11:
    sub_B2C434(RequestResultDialogMessageNormal, v14);
  }
  v25 = this->fields.requestResultDialog;
  v26 = (System_Action_bool__o *)sub_B2C42C(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(
    v26,
    (Il2CppObject *)this,
    Method_ShopRootComponent_OnEndItemDialog__,
    (const MethodInfo_24B7B90 *)Method_System_Action_bool___ctor__);
  if ( !v25 )
    goto LABEL_11;
  RequestResultDialog__Open_31059144(v25, (System_String_o *)StringLiteral_1/*""*/, v15, v26, -1, 0LL);
}


void __fastcall ShopRootComponent__ShowSetItemDialog(
        ShopRootComponent_o *this,
        ShopEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_String_o *RequestResultDialogMessage; // x0
  RequestResultDialog_o *requestResultDialog; // x20
  System_String_o *v10; // x21
  System_Action_bool__o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1

  if ( (byte_41891E2 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_bool___ctor__, entity);
    sub_B2C35C(&System_Action_bool__TypeInfo, v5);
    sub_B2C35C(&Method_ShopRootComponent_OnEndItemDialog__, v6);
    sub_B2C35C(&StringLiteral_1/*""*/, v7);
    byte_41891E2 = 1;
  }
  RequestResultDialogMessage = ShopRequestResultDialogMessageMaker__GetRequestResultDialogMessage(
                                 entity,
                                 this->fields.buyCount,
                                 method);
  requestResultDialog = this->fields.requestResultDialog;
  v10 = RequestResultDialogMessage;
  v11 = (System_Action_bool__o *)sub_B2C42C(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(
    v11,
    (Il2CppObject *)this,
    Method_ShopRootComponent_OnEndItemDialog__,
    (const MethodInfo_24B7B90 *)Method_System_Action_bool___ctor__);
  if ( !requestResultDialog )
    sub_B2C434(v12, v13);
  RequestResultDialog__Open_31059144(requestResultDialog, (System_String_o *)StringLiteral_1/*""*/, v10, v11, -1, 0LL);
}


void __fastcall ShopRootComponent__ShowStorageDialog(
        ShopRootComponent_o *this,
        ShopBuyItemListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t state; // w8
  struct BuyStorageConfirmDialogComponent_o *v8; // x21
  System_Action_int__o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  BuyStorageConfirmDialogComponent_o *v12; // x0
  int32_t v13; // w1
  struct BuyStorageConfirmDialogComponent_o *buyStorageResultDialog; // x21

  if ( (byte_41891E3 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_int___ctor__, item);
    sub_B2C35C(&System_Action_int__TypeInfo, v5);
    sub_B2C35C(&Method_ShopRootComponent_OnEndStorageDialog__, v6);
    byte_41891E3 = 1;
  }
  state = this->fields.state;
  if ( state == 12 )
  {
    buyStorageResultDialog = this->fields.buyStorageResultDialog;
    v9 = (System_Action_int__o *)sub_B2C42C(System_Action_int__TypeInfo);
    System_Action_int____ctor(
      v9,
      (Il2CppObject *)this,
      Method_ShopRootComponent_OnEndStorageDialog__,
      (const MethodInfo_24BA548 *)Method_System_Action_int___ctor__);
    if ( buyStorageResultDialog )
    {
      v13 = 1;
      v12 = buyStorageResultDialog;
      goto LABEL_9;
    }
LABEL_11:
    sub_B2C434(v10, v11);
  }
  if ( state == 11 )
  {
    v8 = this->fields.buyStorageResultDialog;
    v9 = (System_Action_int__o *)sub_B2C42C(System_Action_int__TypeInfo);
    System_Action_int____ctor(
      v9,
      (Il2CppObject *)this,
      Method_ShopRootComponent_OnEndStorageDialog__,
      (const MethodInfo_24BA548 *)Method_System_Action_int___ctor__);
    if ( v8 )
    {
      v12 = v8;
      v13 = 0;
LABEL_9:
      BuyStorageConfirmDialogComponent__ResultOpenDialog(v12, v13, item, v9, 0LL);
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

  if ( (byte_41891CE & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    byte_41891CE = 1;
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
    sub_B2C434(SelfUserGame, v4);
  UILabel__set_text(apInfoLabel, (System_String_o *)SelfUserGame, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopRootComponent___Init_b__71_0(
        ShopRootComponent_o *this,
        int32_t stoneCount,
        const MethodInfo *method)
{
  UILabel_o *stoneInfoLabel; // x20
  System_String_o *NumberFormat; // x0
  __int64 v7; // x1

  if ( (byte_4189204 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, *(_QWORD *)&stoneCount);
    byte_4189204 = 1;
  }
  stoneInfoLabel = this->fields.stoneInfoLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  NumberFormat = LocalizationManager__GetNumberFormat(stoneCount, 0LL);
  if ( !stoneInfoLabel )
    sub_B2C434(NumberFormat, v7);
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
    sub_B2C434(servantSellConfirmMenu, v4);
  }
  ServantSellConfirmMenu__ClearCommandCodeRemoveResult(servantSellConfirmMenu, 0LL);
}


void __fastcall ShopRootComponent____n__0(ShopRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent__beginStartUp_17297004((SceneRootComponent_o *)this, 0LL);
}


void __fastcall ShopRootComponent__beginFinish(ShopRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ShopTopListViewManager_o *topListViewManager; // x0

  ShopRootComponent__Quit(this, method);
  topListViewManager = this->fields.topListViewManager;
  if ( !topListViewManager )
    sub_B2C434(0LL, v3);
  ShopTopListViewManager__ReleaseCoinRoomAsset(topListViewManager, 0LL);
}


void __fastcall ShopRootComponent__beginInitialize(ShopRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  ShopTopListViewManager_o *topListViewManager; // x0
  ShopRootComponent_o *v9; // x0
  const MethodInfo *v10; // x1
  struct GiftButtonCtrl_o *giftButtonControl; // x20
  System_Action_o *v12; // x21
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  struct GiftButtonCtrl_o *v19; // x20
  System_Func_bool__bool__o *v20; // x21
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7

  if ( (byte_41891C8 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_System_Func_bool__bool___ctor__, v3);
    sub_B2C35C(&System_Func_bool__bool__TypeInfo, v4);
    sub_B2C35C(&Method_ShopRootComponent_OnGiftClose__, v5);
    sub_B2C35C(&Method_ShopRootComponent_OnGiftOpen__, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v7);
    byte_41891C8 = 1;
  }
  topListViewManager = this->fields.topListViewManager;
  if ( !topListViewManager )
    goto LABEL_11;
  ShopTopListViewManager__LoadCoinRoomAsset(topListViewManager, 0LL);
  ShopRootComponent__CreateShopDetailCheckList(v9, v10);
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 6, 30, 0LL);
  topListViewManager = (ShopTopListViewManager_o *)this->fields.eventBanner;
  if ( !topListViewManager )
    goto LABEL_11;
  EventBannerComponent__SetBanner((EventBannerComponent_o *)topListViewManager, 0LL);
  topListViewManager = (ShopTopListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
  v12 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_ShopRootComponent_OnGiftOpen__, 0LL);
  if ( !giftButtonControl
    || (giftButtonControl->fields.OnGiftOpenAdditionalAction = v12,
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&giftButtonControl->fields.OnGiftOpenAdditionalAction,
          (System_Int32_array **)v12,
          v13,
          v14,
          v15,
          v16,
          v17,
          v18),
        v19 = this->fields.giftButtonControl,
        v20 = (System_Func_bool__bool__o *)sub_B2C42C(System_Func_bool__bool__TypeInfo),
        System_Func_bool__bool____ctor(
          v20,
          (Il2CppObject *)this,
          Method_ShopRootComponent_OnGiftClose__,
          (const MethodInfo_270A214 *)Method_System_Func_bool__bool___ctor__),
        !v19) )
  {
LABEL_11:
    sub_B2C434(topListViewManager, method);
  }
  v19->fields.OnGiftCloseAdditionalAction = v20;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v19->fields.OnGiftCloseAdditionalAction,
    (System_Int32_array **)v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
}


void __fastcall ShopRootComponent__beginResume(ShopRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent__beginResume_17297200((SceneRootComponent_o *)this, 0LL);
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
  struct SceneJumpInfo_o **p_jumpInfo; // x21
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  __int64 v27; // x10
  TitleInfoControl_o *titleInfo; // x0
  __int64 v29; // x1
  System_String_o *returnSceneName; // x20
  System_String_o *SceneName; // x0
  bool v32; // w0
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  struct ShopPlayVoiceComponent_o *shopPlayVoiceComponent; // x8
  System_String_o *MainBgmName; // x20
  System_Action_o *v40; // x20
  const MethodInfo *v41; // x1
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  struct ShopPlayVoiceComponent_o *v48; // x20
  System_Int32_array **standFigureBack; // x1
  int32_t defaultFaceId; // w21
  void *v51; // x23
  BattleServantConfConponent_o *p_standFigureBack; // x20
  UITexture_o *backgroundTexture; // x20
  System_String_o *BG_ROOT; // x20
  Il2CppObject *v55; // x0
  System_String_o *v56; // x0
  ExUITexture_o *v57; // x21
  System_String_o *v58; // x20
  System_Action_o *v59; // x22
  ShopRootConstants_c *v60; // x0
  struct ShopRootConstants_StaticFields *static_fields; // x8
  System_String_o *v62; // x20
  Il2CppObject *v63; // x0
  ExUITexture_o *v64; // x19
  int32_t DEFAULT_BG_ID; // [xsp+8h] [xbp-38h] BYREF
  int32_t bgImageId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_41891C9 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, data);
    sub_B2C35C(&AtlasManager_TypeInfo, v10);
    sub_B2C35C(&BgmManager_TypeInfo, v11);
    sub_B2C35C(&FSUtility_TypeInfo, v12);
    sub_B2C35C(&int_TypeInfo, v13);
    sub_B2C35C(&SceneJumpInfo_TypeInfo, v14);
    sub_B2C35C(&SceneList_TypeInfo, v15);
    sub_B2C35C(&Method_ShopRootComponent_LoadBanner__, v16);
    sub_B2C35C(&Method_ShopRootComponent__beginStartUp_b__66_0__, v17);
    sub_B2C35C(&ShopRootConstants_TypeInfo, v18);
    sub_B2C35C(&SoundManager_TypeInfo, v19);
    byte_41891C9 = 1;
  }
  p_jumpInfo = &this->fields.jumpInfo;
  this->fields.jumpInfo = 0LL;
  sub_B2C2F8(
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
    v27 = *(&SceneJumpInfo_TypeInfo->_2.bitflags2 + 1);
    if ( *(&data->klass->_2.bitflags2 + 1) >= (unsigned int)v27
      && (SceneJumpInfo_c *)data->klass->_2.typeHierarchy[v27 - 1] == SceneJumpInfo_TypeInfo )
    {
      *p_jumpInfo = (struct SceneJumpInfo_o *)data;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.jumpInfo,
        (System_Int32_array **)data,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26);
      if ( !*p_jumpInfo )
        goto LABEL_43;
      returnSceneName = (*p_jumpInfo)->fields.returnSceneName;
      if ( (BYTE3(SceneList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SceneList_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
      SceneName = SceneList__getSceneName(90, 0LL);
      v32 = System_String__op_Equality(returnSceneName, SceneName, 0LL);
      this->fields.isFromCoinRoom = v32;
      if ( v32 )
      {
        *p_jumpInfo = 0LL;
        sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.jumpInfo, 0LL, v21, v33, v34, v35, v36, v37);
      }
    }
  }
  ShopRootComponent__SetActionBG(this, 0, (const MethodInfo *)v21);
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
  v40 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v40, (Il2CppObject *)this, Method_ShopRootComponent__beginStartUp_b__66_0__, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadBanner(v40, 1, 0LL);
  ShopRootComponent__setDispInfo(this, v41);
  v48 = this->fields.shopPlayVoiceComponent;
  if ( !v48 )
    goto LABEL_43;
  standFigureBack = (System_Int32_array **)this->fields.standFigureBack;
  defaultFaceId = this->fields.defaultFaceId;
  v51 = *(void **)&this->fields.figureSvtId;
  v48->fields.standFigureBack = (struct StandFigureBack_o *)standFigureBack;
  p_standFigureBack = (BattleServantConfConponent_o *)&v48->fields.standFigureBack;
  sub_B2C2F8(p_standFigureBack, standFigureBack, v42, v43, v44, v45, v46, v47);
  p_standFigureBack->monitor = v51;
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
    *(UnityEngine_Rect_o *)((char *)&titleInfo->fields.replaceEventRewardBtnLogo->fields.leftAnchor + 4),
    0LL);
  BG_ROOT = ShopRootConstants_TypeInfo->static_fields->BG_ROOT;
  bgImageId = this->fields.bgImageId;
  v55 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &bgImageId);
  v56 = System_String__Format(BG_ROOT, v55, 0LL);
  v57 = this->fields.backgroundTexture;
  v58 = v56;
  v59 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v59, (Il2CppObject *)this, Method_ShopRootComponent_LoadBanner__, 0LL);
  if ( !v57 )
LABEL_43:
    sub_B2C434(titleInfo, v29);
  if ( !ExUITexture__SetAssetImage(v57, v58, v59, 0LL) )
  {
    v60 = ShopRootConstants_TypeInfo;
    if ( (BYTE3(ShopRootConstants_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ShopRootConstants_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
      v60 = ShopRootConstants_TypeInfo;
    }
    static_fields = v60->static_fields;
    v62 = static_fields->BG_ROOT;
    DEFAULT_BG_ID = static_fields->DEFAULT_BG_ID;
    v63 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &DEFAULT_BG_ID);
    titleInfo = (TitleInfoControl_o *)System_String__Format(v62, v63, 0LL);
    if ( this->fields.backgroundTexture )
    {
      v58 = (System_String_o *)titleInfo;
      ExUITexture__SetAssetImage(this->fields.backgroundTexture, (System_String_o *)titleInfo, 0LL, 0LL);
      goto LABEL_39;
    }
    goto LABEL_43;
  }
LABEL_39:
  v64 = this->fields.backgroundTexture;
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  FSUtility__SetUpBackTextureSize(v64, v58, 0LL);
}


void __fastcall ShopRootComponent__setDispInfo(ShopRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  GuideEntity_o *GuideData; // x0
  int32_t guideFaceId; // w8
  ShopRootConstants_c *v9; // x0

  if ( (byte_41891CA & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_GuideMaster___, method);
    sub_B2C35C(&ShopRootConstants_TypeInfo, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_41891CA = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_GuideMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v6);
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
    v9 = ShopRootConstants_TypeInfo;
    if ( (BYTE3(ShopRootConstants_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ShopRootConstants_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
      v9 = ShopRootConstants_TypeInfo;
    }
    guideFaceId = 0;
    this->fields.figureSvtId = v9->static_fields->DEFAULT_FIGURE_ID;
    this->fields.figureSvtLimitCnt = v9->static_fields->DEFAULT_FIGURE_LIMIT_CNT;
    this->fields.bgImageId = v9->static_fields->DEFAULT_BG_ID;
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
  __int64 v18; // x0
  ServantCostumeEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  v2 = this;
  if ( (byte_4185450 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantCostumeMaster___, v3);
    sub_B2C35C(&Method_ShopRootComponent_OnEndPlayServantCostumeReleaseEffect__, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    this = (ShopRootComponent___c__DisplayClass102_0_o *)sub_B2C35C(
                                                           &Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
                                                           v6);
    byte_4185450 = 1;
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
    v18 = sub_B2C460(this);
    sub_B2C400(v18, 0LL);
  }
  this = (ShopRootComponent___c__DisplayClass102_0_o *)System_Int32__ToString((int)targetIds + 32, 0LL);
  if ( !this )
    goto LABEL_16;
  v9 = (System_String_o *)this;
  v10 = System_String__Substring_44369268((System_String_o *)this, 0, LODWORD(this->fields.shopEntity) - 2, 0LL);
  v11 = System_Int32__Parse(v10, 0LL);
  v12 = System_String__Substring(v9, v9->fields.m_stringLength - 2, 0LL);
  v13 = System_Int32__Parse(v12, 0LL);
  this = (ShopRootComponent___c__DisplayClass102_0_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_16;
  this = (ShopRootComponent___c__DisplayClass102_0_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)this,
                                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  if ( !this )
    goto LABEL_16;
  if ( ServantCostumeMaster__TryGetEntity((ServantCostumeMaster_o *)this, &entity, v11, v13, 0LL) )
  {
    this = (ShopRootComponent___c__DisplayClass102_0_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( entity )
    {
      name = entity->fields.name;
      _4__this = (Il2CppObject *)v2->fields.__4__this;
      v16 = (CommonUI_o *)this;
      v17 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v17, _4__this, Method_ShopRootComponent_OnEndPlayServantCostumeReleaseEffect__, 0LL);
      if ( v16 )
      {
        CommonUI__OpenCostumeReleaseEffect(v16, 1, name, v17, 23, 0LL);
        return;
      }
    }
LABEL_16:
    sub_B2C434(this, method);
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

  if ( (byte_4185451 & 1) == 0 )
  {
    sub_B2C35C(&PurchaseBehaviour_TypeInfo, method);
    byte_4185451 = 1;
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
    sub_B2C434(shopPlayVoiceComponent, v4);
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
  __int64 v3; // x1
  struct ShopRootComponent_o *_4__this; // x8
  ShopSceneListViewControlHelper_o *listViewHelper; // x20
  System_Action_o *_9__1; // x24
  int32_t selectedEventIndex; // w21
  int32_t state; // w22
  struct ShopRootComponent_o *v9; // x8
  struct ShopRootComponent_o *v10; // x8

  v2 = this;
  if ( (byte_4185452 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    this = (ShopRootComponent___c__DisplayClass76_0_o *)sub_B2C35C(
                                                          &Method_ShopRootComponent___c__DisplayClass76_0__SelectMenu_b__1__,
                                                          v3);
    byte_4185452 = 1;
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
    _9__1 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v2,
      Method_ShopRootComponent___c__DisplayClass76_0__SelectMenu_b__1__,
      0LL);
    v2->fields.__9__1 = _9__1;
    sub_B2C2F8(&v2->fields.__9__1, _9__1);
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
        (v9 = v2->fields.__4__this) == 0LL)
    || (v9->fields.state = v2->fields.state, (v10 = v2->fields.__4__this) == 0LL) )
  {
LABEL_12:
    sub_B2C434(this, method);
  }
  v10->fields.inputState = 0;
}


void __fastcall ShopRootComponent___c__DisplayClass76_0___SelectMenu_b__1(
        ShopRootComponent___c__DisplayClass76_0_o *this,
        const MethodInfo *method)
{
  ShopRootComponent___c__DisplayClass76_0_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct ShopRootComponent_o *_4__this; // x8
  struct ShopRootComponent_o *v8; // x8
  ShopPlayVoiceComponent_o *shopPlayVoiceComponent; // x20
  ShopRootComponent___c__DisplayClass76_0_o *v10; // x21
  ShopRootConstants_c *v11; // x8
  int32_t eventId; // w20
  int32_t *p_state; // x8
  int32_t *p__9__2; // x9
  struct ShopRootConstants_StaticFields *static_fields; // x9
  struct ShopRootComponent_o *v16; // x10
  int32_t v17; // w21
  int32_t v18; // w22
  ShopPlayVoiceComponent_o *v19; // x23
  StandFigureBack_o *standFigureBack; // x24
  System_Action_o *_9__2; // x25

  v2 = this;
  if ( (byte_4185453 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_GuideMaster___, v3);
    sub_B2C35C(&ShopRootConstants_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    this = (ShopRootComponent___c__DisplayClass76_0_o *)sub_B2C35C(
                                                          &Method_ShopRootComponent___c__DisplayClass76_0__SelectMenu_b__2__,
                                                          v6);
    byte_4185453 = 1;
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
  v8 = v2->fields.__4__this;
  if ( !v8 )
    goto LABEL_24;
  shopPlayVoiceComponent = v8->fields.shopPlayVoiceComponent;
  this = (ShopRootComponent___c__DisplayClass76_0_o *)ShopPlayVoiceConstants__GetEnterVoiceFlag(15, 0LL);
  if ( !shopPlayVoiceComponent )
    goto LABEL_24;
  if ( !ShopPlayVoiceComponent__CheckVoiceFlag(shopPlayVoiceComponent, (int32_t)this, 0LL) )
    goto LABEL_22;
  this = (ShopRootComponent___c__DisplayClass76_0_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_24;
  this = (ShopRootComponent___c__DisplayClass76_0_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                        (DataManager_o *)this,
                                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_GuideMaster___);
  if ( !this )
    goto LABEL_24;
  this = (ShopRootComponent___c__DisplayClass76_0_o *)GuideMaster__getGuideData((GuideMaster_o *)this, 3, 0LL);
  v10 = this;
  v11 = ShopRootConstants_TypeInfo;
  if ( (BYTE3(ShopRootConstants_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ShopRootConstants_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
    v11 = ShopRootConstants_TypeInfo;
  }
  if ( v10 )
  {
    eventId = v10->fields.eventId;
    p_state = &v10->fields.state;
    p__9__2 = (int32_t *)&v10->fields.__9__2;
  }
  else
  {
    static_fields = v11->static_fields;
    eventId = 0;
    p_state = &static_fields->DEFAULT_FIGURE_ID;
    p__9__2 = &static_fields->DEFAULT_FIGURE_LIMIT_CNT;
  }
  v16 = v2->fields.__4__this;
  if ( !v16 )
    goto LABEL_24;
  v17 = *p_state;
  v18 = *p__9__2;
  v19 = v16->fields.shopPlayVoiceComponent;
  standFigureBack = v16->fields.standFigureBack;
  _9__2 = v2->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v2,
      Method_ShopRootComponent___c__DisplayClass76_0__SelectMenu_b__2__,
      0LL);
    v2->fields.__9__2 = _9__2;
    sub_B2C2F8(&v2->fields.__9__2, _9__2);
  }
  if ( !v19 )
LABEL_24:
    sub_B2C434(this, method);
  ShopPlayVoiceComponent__ReloadVoice(v19, standFigureBack, v17, v18, eventId, _9__2, 0LL);
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
    sub_B2C434(0LL, method);
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
  __int64 v3; // x1
  ShopRootComponent_o *_4__this; // x0
  int32_t state; // w21
  ShopSceneListViewControlHelper_o *listViewHelper; // x20
  System_Action_o *_9__1; // x23
  int32_t v8; // w22
  struct ShopRootComponent_o *v9; // x8

  if ( (byte_4185454 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_ShopRootComponent___c__DisplayClass77_0__BackMenu_b__1__, v3);
    byte_4185454 = 1;
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
    _9__1 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_ShopRootComponent___c__DisplayClass77_0__BackMenu_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_B2C2F8(&this->fields.__9__1, _9__1);
  }
  if ( !listViewHelper
    || (ShopSceneListViewControlHelper__SetListViewOnBackMenu(listViewHelper, state, v8, _9__1, 0LL),
        (_4__this = this->fields.__4__this) == 0LL)
    || (ShopRootComponent__CloseEventItemWindow(_4__this, 0LL), (v9 = this->fields.__4__this) == 0LL) )
  {
LABEL_10:
    sub_B2C434(_4__this, method);
  }
  v9->fields.inputState = 3;
}


void __fastcall ShopRootComponent___c__DisplayClass77_0___BackMenu_b__1(
        ShopRootComponent___c__DisplayClass77_0_o *this,
        const MethodInfo *method)
{
  ShopRootComponent___c__DisplayClass77_0_o *v2; // x19
  __int64 v3; // x1
  struct ShopRootComponent_o *_4__this; // x8
  struct ShopRootComponent_o *v5; // x8
  ShopPlayVoiceComponent_o *shopPlayVoiceComponent; // x20
  StandFigureBack_o *standFigureBack; // x21
  int32_t figureSvtId; // w22
  int32_t figureSvtLimitCnt; // w23
  int32_t defaultFaceId; // w24
  System_Action_o *_9__2; // x25

  v2 = this;
  if ( (byte_4185455 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    this = (ShopRootComponent___c__DisplayClass77_0_o *)sub_B2C35C(
                                                          &Method_ShopRootComponent___c__DisplayClass77_0__BackMenu_b__2__,
                                                          v3);
    byte_4185455 = 1;
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
    _9__2 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v2,
      Method_ShopRootComponent___c__DisplayClass77_0__BackMenu_b__2__,
      0LL);
    v2->fields.__9__2 = _9__2;
    sub_B2C2F8(&v2->fields.__9__2, _9__2);
  }
  if ( !shopPlayVoiceComponent )
LABEL_13:
    sub_B2C434(this, method);
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
    sub_B2C434(0LL, method);
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
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *_4__this; // x22
  struct ShopBuyItemListViewItem_o *item; // x8
  ShopEntity_o *Shop_k__BackingField; // x20
  int32_t ShopKind_k__BackingField; // w21
  ShopBuyItemConfirmMenu_o *klass; // x19
  System_Action_int__o *v10; // x23

  v2 = this;
  if ( (byte_4185456 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_int___ctor__, method);
    sub_B2C35C(&System_Action_int__TypeInfo, v3);
    this = (ShopRootComponent___c__DisplayClass81_0_o *)sub_B2C35C(
                                                          &Method_ShopRootComponent_SelectedBuyItemConfirm__,
                                                          v4);
    byte_4185456 = 1;
  }
  _4__this = (Il2CppObject *)v2->fields.__4__this;
  if ( !_4__this
    || (item = v2->fields.item) == 0LL
    || (Shop_k__BackingField = item->fields._Shop_k__BackingField,
        ShopKind_k__BackingField = item->fields._ShopKind_k__BackingField,
        klass = (ShopBuyItemConfirmMenu_o *)_4__this[9].klass,
        v10 = (System_Action_int__o *)sub_B2C42C(System_Action_int__TypeInfo),
        System_Action_int____ctor(
          v10,
          _4__this,
          Method_ShopRootComponent_SelectedBuyItemConfirm__,
          (const MethodInfo_24BA548 *)Method_System_Action_int___ctor__),
        !klass) )
  {
    sub_B2C434(this, method);
  }
  ShopBuyItemConfirmMenu__Open(klass, Shop_k__BackingField, ShopKind_k__BackingField, v10, 0, 0LL);
}


void __fastcall ShopRootComponent___c__DisplayClass81_0___OpenConfirmMenu_b__1(
        ShopRootComponent___c__DisplayClass81_0_o *this,
        const MethodInfo *method)
{
  ShopRootComponent___c__DisplayClass81_0_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *_4__this; // x22
  struct ShopBuyItemListViewItem_o *item; // x8
  ShopEntity_o *Shop_k__BackingField; // x20
  int32_t ShopKind_k__BackingField; // w21
  ShopBuyItemConfirmMenu_o *klass; // x19
  System_Action_int__o *v10; // x23

  v2 = this;
  if ( (byte_4185457 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_int___ctor__, method);
    sub_B2C35C(&System_Action_int__TypeInfo, v3);
    this = (ShopRootComponent___c__DisplayClass81_0_o *)sub_B2C35C(
                                                          &Method_ShopRootComponent_SelectedBuyItemConfirm__,
                                                          v4);
    byte_4185457 = 1;
  }
  _4__this = (Il2CppObject *)v2->fields.__4__this;
  if ( !_4__this
    || (item = v2->fields.item) == 0LL
    || (Shop_k__BackingField = item->fields._Shop_k__BackingField,
        ShopKind_k__BackingField = item->fields._ShopKind_k__BackingField,
        klass = (ShopBuyItemConfirmMenu_o *)_4__this[9].klass,
        v10 = (System_Action_int__o *)sub_B2C42C(System_Action_int__TypeInfo),
        System_Action_int____ctor(
          v10,
          _4__this,
          Method_ShopRootComponent_SelectedBuyItemConfirm__,
          (const MethodInfo_24BA548 *)Method_System_Action_int___ctor__),
        !klass) )
  {
    sub_B2C434(this, method);
  }
  ShopBuyItemConfirmMenu__Open(klass, Shop_k__BackingField, ShopKind_k__BackingField, v10, 0, 0LL);
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
  __int64 v5; // x1
  __int64 v6; // x1
  ServantSellConfirmMenu_o *_4__this; // x0
  Il2CppObject *v8; // x23
  ServantSellConfirmMenu_o *monitor; // x20
  int32_t kind; // w19
  System_Int64_array *v11; // x21
  System_Int64_array *klass; // x22
  System_Action_int__o *v13; // x24

  if ( (byte_4185458 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_int___ctor__, *(_QWORD *)&decide);
    sub_B2C35C(&System_Action_int__TypeInfo, v5);
    sub_B2C35C(&Method_ShopRootComponent_SellServantConfirm__, v6);
    byte_4185458 = 1;
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
      v8 = (Il2CppObject *)this->fields.__4__this;
      if ( v8 )
      {
        monitor = (ServantSellConfirmMenu_o *)v8[11].monitor;
        kind = this->fields.kind;
        v11 = (System_Int64_array *)v8[28].monitor;
        klass = (System_Int64_array *)v8[29].klass;
        v13 = (System_Action_int__o *)sub_B2C42C(System_Action_int__TypeInfo);
        System_Action_int____ctor(
          v13,
          v8,
          Method_ShopRootComponent_SellServantConfirm__,
          (const MethodInfo_24BA548 *)Method_System_Action_int___ctor__);
        if ( monitor )
        {
          ServantSellConfirmMenu__Open(monitor, kind, v11, klass, v13, 0LL);
          return;
        }
      }
    }
LABEL_10:
    sub_B2C434(_4__this, *(_QWORD *)&decide);
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
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  __int64 v6; // x1
  System_Action_o *_9__1; // x22
  CommonUI_o *v8; // x21
  QuestRewardInfo_o *questRewardInfo; // x20

  if ( (byte_4185459 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B2C35C(&Method_ShopRootComponent___c__DisplayClass95_0__PlayLvExceedItemReleaseEffect_b__1__, v4);
    byte_4185459 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__1 = this->fields.__9__1;
  v8 = (CommonUI_o *)Instance;
  questRewardInfo = this->fields.questRewardInfo;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_ShopRootComponent___c__DisplayClass95_0__PlayLvExceedItemReleaseEffect_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_B2C2F8(&this->fields.__9__1, _9__1);
  }
  if ( !v8 )
    sub_B2C434(Instance, v6);
  CommonUI__LoadItemGetEffect(v8, questRewardInfo, _9__1, 0LL);
}


void __fastcall ShopRootComponent___c__DisplayClass95_0___PlayLvExceedItemReleaseEffect_b__1(
        ShopRootComponent___c__DisplayClass95_0_o *this,
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

  if ( (byte_418545A & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B2C35C(&Method_ShopRootComponent___c__DisplayClass95_0__PlayLvExceedItemReleaseEffect_b__2__, v4);
    byte_418545A = 1;
  }
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    _9__2 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_ShopRootComponent___c__DisplayClass95_0__PlayLvExceedItemReleaseEffect_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B2C2F8(&this->fields.__9__2, _9__2);
  }
  if ( !v8 )
LABEL_9:
    sub_B2C434(Instance, v6);
  CommonUI__OpenItemGetEffect(v8, v10, 0, questRewardInfo, _9__2, 0LL);
}


void __fastcall ShopRootComponent___c__DisplayClass95_0___PlayLvExceedItemReleaseEffect_b__2(
        ShopRootComponent___c__DisplayClass95_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  CommonUI_o *Instance; // x0
  __int64 v7; // x1
  CommonUI_o *v8; // x20
  AvalonSceneManager_c *v9; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__3; // x21

  if ( (byte_418545B & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&AvalonSceneManager_TypeInfo, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B2C35C(&Method_ShopRootComponent___c__DisplayClass95_0__PlayLvExceedItemReleaseEffect_b__3__, v5);
    byte_418545B = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  CommonUI__ReleaseItemGetEffect(Instance, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = Instance;
  v9 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v9 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v9->static_fields->DEFAULT_FADE_TIME;
  _9__3 = this->fields.__9__3;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_ShopRootComponent___c__DisplayClass95_0__PlayLvExceedItemReleaseEffect_b__3__,
      0LL);
    this->fields.__9__3 = _9__3;
    sub_B2C2F8(&this->fields.__9__3, _9__3);
  }
  if ( !v8 )
LABEL_11:
    sub_B2C434(Instance, v7);
  CommonUI__maskFadein(v8, DEFAULT_FADE_TIME, _9__3, 0LL);
}


void __fastcall ShopRootComponent___c__DisplayClass95_0___PlayLvExceedItemReleaseEffect_b__3(
        ShopRootComponent___c__DisplayClass95_0_o *this,
        const MethodInfo *method)
{
  struct ShopBuyItemListViewItem_o *item; // x1

  item = this->fields.item;
  if ( !item || (this = (ShopRootComponent___c__DisplayClass95_0_o *)this->fields.__4__this) == 0LL )
    sub_B2C434(this, item);
  ShopRootComponent__ShowNormalItemDialog((ShopRootComponent_o *)this, item, item->fields._Shop_k__BackingField, 0LL);
}