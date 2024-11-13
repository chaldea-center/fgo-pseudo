void __fastcall ShopRootComponent___ctor(ShopRootComponent_o *this, const MethodInfo *method)
{
  this->fields.saveScrollBarValue = -1.0;
  *(_QWORD *)&this->fields.buyCount = 0xFFFFFFFF00000001LL;
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopRootComponent__BackMenu(ShopRootComponent_o *this, int32_t state, const MethodInfo *method)
{
  __int64 v3; // x3
  int32_t v4; // w19
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  __int64 v19; // x1
  const MethodInfo *v20; // x2
  __int64 v21; // x3
  System_Action_o *v22; // x20
  ShopRootComponent_o *v23; // x0
  const MethodInfo *v24; // x3

  v4 = state;
  if ( (byte_4B12793 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&state, method);
    sub_1BCA7E0(&Method_ShopRootComponent___c__DisplayClass82_0__BackMenu_b__0__, v6, v7);
    sub_1BCA7E0(&ShopRootComponent___c__DisplayClass82_0_TypeInfo, v8, v9);
    byte_4B12793 = 1;
  }
  v10 = sub_1BCAA2C(ShopRootComponent___c__DisplayClass82_0_TypeInfo, *(_QWORD *)&state, method, v3);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    sub_1BCAA3C(v11, v12);
  *(_QWORD *)(v10 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v10 + 16), (int64_t)this, v13, v14, v15, v16, v17, v18);
  *(_DWORD *)(v10 + 24) = v4;
  if ( v4 != 15 )
  {
    ShopRootComponent__PlayVoiceBack(this, v4, v20);
    v4 = *(_DWORD *)(v10 + 24);
  }
  v22 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v19, v20, v21);
  System_Action___ctor(v22, (Il2CppObject *)v10, Method_ShopRootComponent___c__DisplayClass82_0__BackMenu_b__0__, 0LL);
  ShopRootComponent__SetFadeOut(v23, v4, v22, v24);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ShopRootComponent__BackScene(ShopRootComponent_o *this, int32_t state, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  SceneJumpInfo_o *jumpInfo; // x0
  void *myFSM; // x0
  bool v31; // w19
  struct SceneJumpInfo_o *v32; // x8
  __int64 v33; // x1
  struct SceneJumpInfo_o *v34; // x8
  struct SceneJumpInfo_o *v35; // x8
  __int64 v36; // x1
  __int64 v37; // x2
  TerminalPramsManager_c *v38; // x0
  struct ShopSceneListViewControlHelper_o *listViewHelper; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v40; // x20
  EventEntity_o *v41; // x21
  __int64 v43; // x1
  Il2CppObject *Instance; // x20
  System_String_o *v45; // x22
  Il2CppObject *EventName; // x0
  System_String_o *v47; // x21
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  System_Action_o *v51; // x22

  if ( (byte_4B127B6 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&state, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v7, v8);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_ShopRootComponent_OnEndDialogEventCloseWarning__, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v17, v18);
    sub_1BCA7E0(&StringLiteral_6308/*"EventItem"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_3554/*"CLICK_BACK"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_13150/*"StoneFragments"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_12182/*"SHOP_EVENT_RETURN_ERROR"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v27, v28);
    byte_4B127B6 = 1;
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
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myFSM, (System_String_o *)StringLiteral_3554/*"CLICK_BACK"*/, 0LL);
      return 1;
    case 4:
      v32 = this->fields.jumpInfo;
      if ( !v32 || !System_String__op_Equality(v32->fields.name, (System_String_o *)StringLiteral_13150/*"StoneFragments"*/, 0LL) )
        return 0;
      myFSM = this->fields.jumpInfo;
      if ( !myFSM )
        goto LABEL_48;
      if ( !SceneJumpInfo__ReturnScene((SceneJumpInfo_o *)myFSM, 0LL) )
        return 0;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v33);
      v31 = 1;
      TerminalPramsManager__set_IsAutoOpenMasterMission(1, 0LL);
      return v31;
    case 7:
      v34 = this->fields.jumpInfo;
      if ( !v34 || !System_String__op_Equality(v34->fields.name, (System_String_o *)StringLiteral_6308/*"EventItem"*/, 0LL) )
        return 0;
      myFSM = this->fields.jumpInfo;
      if ( !myFSM )
        goto LABEL_48;
      return SceneJumpInfo__ReturnScene((SceneJumpInfo_o *)myFSM, 0LL);
    case 8:
      v35 = this->fields.jumpInfo;
      if ( !v35 )
        return 0;
      if ( !System_String__op_Equality(v35->fields.name, (System_String_o *)StringLiteral_6308/*"EventItem"*/, 0LL) )
        goto LABEL_35;
      myFSM = this->fields.jumpInfo;
      if ( !myFSM )
        goto LABEL_48;
      if ( !*((_DWORD *)myFSM + 6) || !SceneJumpInfo__ReturnScene((SceneJumpInfo_o *)myFSM, 0LL) )
      {
LABEL_35:
        myFSM = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( myFSM )
        {
          myFSM = DataManager__GetMasterData_object_(
                    (DataManager_o *)myFSM,
                    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMaster___);
          listViewHelper = this->fields.listViewHelper;
          if ( listViewHelper )
          {
            v40 = (DataMasterBase_TMaster__TEntity__PKType__o *)myFSM;
            myFSM = listViewHelper->fields.eventListViewManager;
            if ( myFSM )
            {
              myFSM = ShopEventListViewManager__GetItem(
                        (ShopEventListViewManager_o *)myFSM,
                        this->fields.selectedEventIndex,
                        0LL);
              if ( myFSM )
              {
                if ( v40 )
                {
                  myFSM = DataMasterBase_object__object__int___GetEntity(
                            v40,
                            *((_DWORD *)myFSM + 28),
                            (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
                  if ( myFSM )
                  {
                    v41 = (EventEntity_o *)myFSM;
                    if ( EventEntity__IsOpen((EventEntity_o *)myFSM, 1, 0LL) )
                      return 0;
                    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v43);
                    v45 = LocalizationManager__Get((System_String_o *)StringLiteral_12182/*"SHOP_EVENT_RETURN_ERROR"*/, 0LL);
                    EventName = (Il2CppObject *)EventEntity__getEventName(v41, 0LL);
                    v47 = System_String__Format(v45, EventName, 0LL);
                    v51 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v48, v49, v50);
                    System_Action___ctor(
                      v51,
                      (Il2CppObject *)this,
                      Method_ShopRootComponent_OnEndDialogEventCloseWarning__,
                      0LL);
                    if ( Instance )
                    {
                      v31 = 1;
                      CommonUI__OpenNotificationDialog(
                        (CommonUI_o *)Instance,
                        (System_String_o *)StringLiteral_1/*""*/,
                        v47,
                        v51,
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
                      return v31;
                    }
                  }
                }
              }
            }
          }
        }
LABEL_48:
        sub_1BCAA3C(myFSM, *(_QWORD *)&state);
      }
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v36);
      if ( !byte_4B11139 )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v36, v37);
        byte_4B11139 = 1;
      }
      v38 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v36);
        v38 = TerminalPramsManager_TypeInfo;
      }
      v31 = 1;
      v38->static_fields->_IsAutoResume_k__BackingField = 1;
      return v31;
    default:
      return 0;
  }
}


void __fastcall ShopRootComponent__CheckSellServantExceeded(ShopRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ShopRootComponent_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  const MethodInfo *v6; // x1
  ServantSellMenu_o *servantSellMenu; // x0
  __int64 v8; // x2
  __int64 v9; // x3
  ServantSellConfirmMenu_o *servantSellConfirmMenu; // x20
  System_Int64_array *selectedServantIds; // x21
  System_Int64_array *selectedCommandCodeIds; // x22
  System_Action_int__o *v13; // x23

  v3 = this;
  if ( (byte_4B1279D & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_int__TypeInfo, method, v2);
    this = (ShopRootComponent_o *)sub_1BCA7E0(&Method_ShopRootComponent_SellServantExceededConfirm__, v4, v5);
    byte_4B1279D = 1;
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
    v13 = (System_Action_int__o *)sub_1BCAA2C(System_Action_int__TypeInfo, v6, v8, v9);
    System_Action_int____ctor(v13, (Il2CppObject *)v3, Method_ShopRootComponent_SellServantExceededConfirm__, 0LL);
    if ( !servantSellConfirmMenu )
LABEL_11:
      sub_1BCAA3C(servantSellMenu, v6);
    ServantSellConfirmMenu__Open(servantSellConfirmMenu, 2, selectedServantIds, selectedCommandCodeIds, v13, 0LL);
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

  if ( (byte_4B127C2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, *(_QWORD *)&state, method);
    byte_4B127C2 = 1;
  }
  if ( (unsigned int)state > 0x15 || ((1 << state) & 0x35DDFC) == 0 )
    return 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v5);
  return NetworkManager__CheckServerLimitTime((NetworkManager_o *)Instance, 0LL);
}


void __fastcall ShopRootComponent__CheckTutorial(ShopRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  const MethodInfo *v15; // x2
  __int64 v16; // x3
  NetworkManager_ResultCallbackFunc_o *v17; // x20
  __int64 v18; // x1
  Il2CppObject *Request_object; // x0
  __int64 v20; // x1

  if ( (byte_4B127B3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_NetworkManager_getRequest_TutorialSetRequest___, method, v2);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_ShopRootComponent_QuitHelp__, v8, v9);
    sub_1BCA7E0(&TutorialFlag_TypeInfo, v10, v11);
    sub_1BCA7E0(&StringLiteral_22465/*"ok"*/, v12, v13);
    byte_4B127B3 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, method);
  if ( TutorialFlag__Get_38402052(103, 0LL) )
  {
    ShopRootComponent__QuitHelp(this, (System_String_o *)StringLiteral_22465/*"ok"*/, v15);
  }
  else
  {
    v17 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(NetworkManager_ResultCallbackFunc_TypeInfo, v14, v15, v16);
    NetworkManager_ResultCallbackFunc___ctor(v17, (Il2CppObject *)this, Method_ShopRootComponent_QuitHelp__, 0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v18);
    Request_object = NetworkManager__getRequest_object_(
                       v17,
                       (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_TutorialSetRequest___);
    if ( !Request_object )
      sub_1BCAA3C(0LL, v20);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  struct ShopSceneListViewControlHelper_o *listViewHelper; // x8
  ShopBuyItemListViewItem_o *Item; // x21
  struct ShopEntity_o *Shop_k__BackingField; // x8
  ShopDetailEntity_o *ShopDetailEntity; // x0
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x1

  if ( (byte_4B127BD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ShopDetailMaster___, decide, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8);
    byte_4B127BD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0LL), (listViewHelper = this->fields.listViewHelper) == 0LL)
    || (Instance = (Il2CppObject *)listViewHelper->fields.buyItemListViewManager) == 0LL
    || (Item = ShopBuyItemListViewManager__GetItem(
                 (ShopBuyItemListViewManager_o *)Instance,
                 this->fields.selectedItemIndex,
                 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ShopDetailMaster___),
        !Item)
    || (Shop_k__BackingField = Item->fields._Shop_k__BackingField) == 0LL
    || !Instance )
  {
    sub_1BCAA3C(Instance, v10);
  }
  ShopDetailEntity = ShopDetailMaster__getShopDetailEntity(
                       (ShopDetailMaster_o *)Instance,
                       Shop_k__BackingField->fields.id,
                       0LL);
  ShopRootComponent__SetFrequencyTypeCheckList((ShopRootComponent_o *)ShopDetailEntity, ShopDetailEntity, decide, v15);
  if ( decide )
    ShopRootComponent__RequestShop(this, v16);
  else
    ShopRootComponent__CloseItemConfirm(this, v16);
}


void __fastcall ShopRootComponent__CloseEventItemWindow(ShopRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Component_o *shopEventItemDrawBase; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  ShopRootConstants_c *v7; // x8
  UnityEngine_GameObject_o *v8; // x20

  if ( (byte_4B127C1 & 1) == 0 )
  {
    sub_1BCA7E0(&ShopRootConstants_TypeInfo, method, v2);
    byte_4B127C1 = 1;
  }
  shopEventItemDrawBase = (UnityEngine_Component_o *)this->fields.shopEventItemDrawBase;
  if ( !shopEventItemDrawBase )
    goto LABEL_8;
  gameObject = UnityEngine_Component__get_gameObject(shopEventItemDrawBase, 0LL);
  v7 = ShopRootConstants_TypeInfo;
  v8 = gameObject;
  if ( !ShopRootConstants_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo, v6);
    v7 = ShopRootConstants_TypeInfo;
  }
  TweenAlpha__Begin(v8, v7->static_fields->CLOSE_TIME, 0.0, 0LL);
  shopEventItemDrawBase = (UnityEngine_Component_o *)this->fields.currencyInfoController;
  if ( !shopEventItemDrawBase )
LABEL_8:
    sub_1BCAA3C(shopEventItemDrawBase, method);
  ShopCurrencyInfoController__StopUpdateRemainTime((ShopCurrencyInfoController_o *)shopEventItemDrawBase, 0LL);
}


void __fastcall ShopRootComponent__CloseItemConfirm(ShopRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  ShopBuyItemConfirmMenu_o *buyItemConfirmMenu; // x0
  const MethodInfo *v7; // x2
  int32_t state; // w20
  struct ShopSceneListViewControlHelper_o *listViewHelper; // x8
  ShopBuyItemListViewItem_o *v10; // x20
  ShopEntity_o *priceInfoBase; // x21
  ShopMaster_o *v12; // x22
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x2
  ShopSceneListViewControlHelper_o *v16; // x21
  const MethodInfo *v17; // x2

  if ( (byte_4B1279C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_ShopMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    byte_4B1279C = 1;
  }
  if ( this->fields.inputState != 3 )
    return;
  buyItemConfirmMenu = this->fields.buyItemConfirmMenu;
  this->fields.inputState = 4;
  if ( !buyItemConfirmMenu )
    goto LABEL_56;
  if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)buyItemConfirmMenu, 0LL) )
  {
    buyItemConfirmMenu = this->fields.buyItemConfirmMenu;
    if ( !buyItemConfirmMenu )
      goto LABEL_56;
    ShopBuyItemConfirmMenu__Close(buyItemConfirmMenu, 0LL);
  }
  buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)this->fields.buyBulkItemConfirmMenu;
  if ( !buyItemConfirmMenu )
    goto LABEL_56;
  if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)buyItemConfirmMenu, 0LL) )
  {
    buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)this->fields.buyBulkItemConfirmMenu;
    if ( !buyItemConfirmMenu )
      goto LABEL_56;
    ShopBuyBulkItemConfirmMenu__Close((ShopBuyBulkItemConfirmMenu_o *)buyItemConfirmMenu, 0LL);
  }
  buyItemConfirmMenu = this->fields.ApSeedExchangeConfirmMenu;
  if ( !buyItemConfirmMenu )
    goto LABEL_56;
  if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)buyItemConfirmMenu, 0LL) )
  {
    buyItemConfirmMenu = this->fields.ApSeedExchangeConfirmMenu;
    if ( !buyItemConfirmMenu )
      goto LABEL_56;
    ShopBuyItemConfirmMenu__Close(buyItemConfirmMenu, 0LL);
  }
  buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)this->fields.ApSeedBulkExchangeConfirmMenu;
  if ( !buyItemConfirmMenu )
    goto LABEL_56;
  if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)buyItemConfirmMenu, 0LL) )
  {
    buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)this->fields.ApSeedBulkExchangeConfirmMenu;
    if ( !buyItemConfirmMenu )
      goto LABEL_56;
    ShopBuyBulkItemConfirmMenu__Close((ShopBuyBulkItemConfirmMenu_o *)buyItemConfirmMenu, 0LL);
  }
  buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)this->fields.buyStorageConfirmDialog;
  if ( !buyItemConfirmMenu )
    goto LABEL_56;
  if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)buyItemConfirmMenu, 0LL) )
  {
    buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)this->fields.buyStorageConfirmDialog;
    if ( !buyItemConfirmMenu )
      goto LABEL_56;
    BuyStorageConfirmDialogComponent__Close((BuyStorageConfirmDialogComponent_o *)buyItemConfirmMenu, 0LL);
  }
  buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)this->fields.buyStorageNotificationDialog;
  if ( !buyItemConfirmMenu )
    goto LABEL_56;
  if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)buyItemConfirmMenu, 0LL) )
  {
    buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)this->fields.buyStorageNotificationDialog;
    if ( !buyItemConfirmMenu )
      goto LABEL_56;
    BuyStorageConfirmDialogComponent__Close((BuyStorageConfirmDialogComponent_o *)buyItemConfirmMenu, 0LL);
  }
  buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)this->fields.shopResetConfirmDialog;
  if ( !buyItemConfirmMenu )
LABEL_56:
    sub_1BCAA3C(buyItemConfirmMenu, method);
  buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)UnityEngine_Behaviour__get_isActiveAndEnabled(
                                                     (UnityEngine_Behaviour_o *)buyItemConfirmMenu,
                                                     0LL);
  if ( ((unsigned __int8)buyItemConfirmMenu & 1) != 0 )
  {
    buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)this->fields.shopResetConfirmDialog;
    if ( !buyItemConfirmMenu )
      goto LABEL_56;
    ShopResetConfirmDialogComponent__Close_33531592((ShopResetConfirmDialogComponent_o *)buyItemConfirmMenu, 0LL, v7);
  }
  state = this->fields.state;
  if ( state == 16 || state == 8 )
  {
    listViewHelper = this->fields.listViewHelper;
    if ( !listViewHelper )
      goto LABEL_56;
    buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)listViewHelper->fields.buyItemListViewManager;
    if ( !buyItemConfirmMenu )
      goto LABEL_56;
    buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)ShopBuyItemListViewManager__GetItem(
                                                       (ShopBuyItemListViewManager_o *)buyItemConfirmMenu,
                                                       this->fields.selectedItemIndex,
                                                       0LL);
    if ( !buyItemConfirmMenu )
      goto LABEL_56;
    v10 = (ShopBuyItemListViewItem_o *)buyItemConfirmMenu;
    priceInfoBase = (ShopEntity_o *)buyItemConfirmMenu->fields.priceInfoBase;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
    buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ShopMaster___);
    if ( this->fields.buyCount >= 1 )
    {
      v12 = (ShopMaster_o *)buyItemConfirmMenu;
      if ( !buyItemConfirmMenu )
        goto LABEL_56;
      if ( ShopMaster__IsOpenPurchaseCloseShop((ShopMaster_o *)buyItemConfirmMenu, priceInfoBase, 0LL)
        && ShopRootComponent__BackScene(this, this->fields.state, v13) )
      {
        return;
      }
      if ( this->fields.buyCount >= 1 && ShopMaster__IsOpenPurchaseCloseShop(v12, priceInfoBase, 0LL) )
      {
        buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)this->fields.listViewHelper;
        if ( buyItemConfirmMenu )
        {
          ShopSceneListViewControlHelper__SetListViewOnCloseEventShop(
            (ShopSceneListViewControlHelper_o *)buyItemConfirmMenu,
            this->fields.state,
            v14);
          method = (const MethodInfo *)(unsigned int)this->fields.state;
          if ( (_DWORD)method != 16 )
          {
            if ( (_DWORD)method == 8 )
            {
              LODWORD(method) = 7;
              this->fields.state = 7;
            }
            goto LABEL_55;
          }
          buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)this->fields.topListViewManager;
          if ( buyItemConfirmMenu )
          {
            ShopTopListViewManager__CreateList((ShopTopListViewManager_o *)buyItemConfirmMenu, 16, -1.0, v15);
            LODWORD(method) = this->fields.state;
LABEL_55:
            ShopRootComponent__BackMenu(this, (int32_t)method, v15);
            return;
          }
        }
        goto LABEL_56;
      }
    }
    ShopBuyItemListViewItem__Modify(v10, priceInfoBase, 0LL);
    state = this->fields.state;
  }
  v16 = this->fields.listViewHelper;
  if ( !v16 )
    goto LABEL_56;
  ShopSceneListViewControlHelper__SetBuyItemListViewModify(this->fields.listViewHelper, state, v7);
  ShopSceneListViewControlHelper__SetBuyItemListViewInput(v16, state, v17);
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
    sub_1BCAA3C(servantSellConfirmMenu, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopRootComponent__CloseShopResetDialog(
        ShopRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x20
  ShopBuyItemListViewManager_o *shopResetConfirmDialog; // x0
  __int64 v20; // x1
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  const MethodInfo *v27; // x2
  struct ShopSceneListViewControlHelper_o *listViewHelper; // x8
  ShopBuyItemListViewItem_o *Item; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  NetworkManager_ResultCallbackFunc_o *v39; // x21
  __int64 v40; // x1
  Il2CppObject *Request_object; // x0
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  struct ShopResetConfirmDialogComponent_o *v48; // x19
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x3
  System_Action_o *v52; // x21
  System_Action_o *v53; // x1

  if ( (byte_4B127CA & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, method);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_ShopResetPurchaseNumRequest___, v6, v7);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_ShopRootComponent___c__DisplayClass158_0__CloseShopResetDialog_b__0__, v12, v13);
    sub_1BCA7E0(&Method_ShopRootComponent___c__DisplayClass158_0__CloseShopResetDialog_b__1__, v14, v15);
    sub_1BCA7E0(&ShopRootComponent___c__DisplayClass158_0_TypeInfo, v16, v17);
    byte_4B127CA = 1;
  }
  v18 = sub_1BCAA2C(ShopRootComponent___c__DisplayClass158_0_TypeInfo, isDecide, method, v3);
  System_Object___ctor((Il2CppObject *)v18, 0LL);
  if ( !v18 )
    goto LABEL_14;
  *(_QWORD *)(v18 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v18 + 16), (int64_t)this, v21, v22, v23, v24, v25, v26);
  if ( !isDecide )
  {
    shopResetConfirmDialog = (ShopBuyItemListViewManager_o *)this->fields.shopResetConfirmDialog;
    if ( shopResetConfirmDialog )
    {
      v53 = 0LL;
      goto LABEL_13;
    }
LABEL_14:
    sub_1BCAA3C(shopResetConfirmDialog, v20);
  }
  listViewHelper = this->fields.listViewHelper;
  if ( !listViewHelper )
    goto LABEL_14;
  shopResetConfirmDialog = listViewHelper->fields.buyItemListViewManager;
  if ( !shopResetConfirmDialog )
    goto LABEL_14;
  Item = ShopBuyItemListViewManager__GetItem(shopResetConfirmDialog, this->fields.selectedItemIndex, 0LL);
  *(_QWORD *)(v18 + 24) = Item;
  sub_1BCA784((PartyOrganizationUtility_o *)(v18 + 24), (int64_t)Item, v30, v31, v32, v33, v34, v35);
  v39 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(NetworkManager_ResultCallbackFunc_TypeInfo, v36, v37, v38);
  NetworkManager_ResultCallbackFunc___ctor(
    v39,
    (Il2CppObject *)v18,
    Method_ShopRootComponent___c__DisplayClass158_0__CloseShopResetDialog_b__0__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v40);
  Request_object = NetworkManager__getRequest_object_(
                     v39,
                     (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_ShopResetPurchaseNumRequest___);
  *(_QWORD *)(v18 + 32) = Request_object;
  sub_1BCA784((PartyOrganizationUtility_o *)(v18 + 32), (int64_t)Request_object, v42, v43, v44, v45, v46, v47);
  v48 = this->fields.shopResetConfirmDialog;
  v52 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v49, v50, v51);
  System_Action___ctor(
    v52,
    (Il2CppObject *)v18,
    Method_ShopRootComponent___c__DisplayClass158_0__CloseShopResetDialog_b__1__,
    0LL);
  if ( !v48 )
    goto LABEL_14;
  shopResetConfirmDialog = (ShopBuyItemListViewManager_o *)v48;
  v53 = v52;
LABEL_13:
  ShopResetConfirmDialogComponent__Close_33531592((ShopResetConfirmDialogComponent_o *)shopResetConfirmDialog, v53, v27);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopRootComponent__CloseStonePurchaseMenu(
        ShopRootComponent_o *this,
        int32_t result,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  ShopPlayVoiceComponent_o *shopPlayVoiceComponent; // x0
  const MethodInfo *v9; // x2

  if ( (byte_4B127C5 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_12231/*"SHOP_SCENE_VOICE_CANCEL"*/, *(_QWORD *)&result, method);
    sub_1BCA7E0(&StringLiteral_12230/*"SHOP_SCENE_VOICE_BACK2"*/, v6, v7);
    byte_4B127C5 = 1;
  }
  if ( result )
    goto LABEL_6;
  shopPlayVoiceComponent = this->fields.shopPlayVoiceComponent;
  if ( !shopPlayVoiceComponent )
    goto LABEL_9;
  if ( !ShopPlayVoiceComponent__PlayVoiceOnce(
          shopPlayVoiceComponent,
          (System_String_o *)StringLiteral_12231/*"SHOP_SCENE_VOICE_CANCEL"*/,
          0x2000,
          v3) )
  {
LABEL_6:
    shopPlayVoiceComponent = this->fields.shopPlayVoiceComponent;
    if ( shopPlayVoiceComponent )
    {
      ShopPlayVoiceComponent__PlayVoiceOnce(shopPlayVoiceComponent, (System_String_o *)StringLiteral_12230/*"SHOP_SCENE_VOICE_BACK2"*/, 4096, v3);
      goto LABEL_8;
    }
LABEL_9:
    sub_1BCAA3C(shopPlayVoiceComponent, *(_QWORD *)&result);
  }
LABEL_8:
  ShopRootComponent__MenuBackFromStonePurchase(this, result, v9);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopRootComponent__CloseStorageDetailCheckConfirm(
        ShopRootComponent_o *this,
        int32_t buyCount,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ShopRootComponent_o *v5; // x19
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  BuyStorageConfirmDialogComponent_o *buyStorageConfirmDialog; // x20
  System_Action_o *v13; // x21
  struct ShopSceneListViewControlHelper_o *listViewHelper; // x8
  ShopBuyItemListViewItem_o *v15; // x20
  ShopRootComponent_o *v16; // x0
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x2
  __int64 v19; // x3
  ShopBuyBulkItemConfirmMenu_o *buyBulkItemConfirmMenu; // x20
  System_Action_int__o *v21; // x21
  ShopSceneListViewControlHelper_o *v22; // x20
  int32_t state; // w19
  const MethodInfo *v24; // x2

  v5 = this;
  if ( (byte_4B127BE & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_int__TypeInfo, *(_QWORD *)&buyCount, method);
    sub_1BCA7E0(&System_Action_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_ShopRootComponent_RequestShop__, v8, v9);
    this = (ShopRootComponent_o *)sub_1BCA7E0(&Method_ShopRootComponent_SelectedBuyItemConfirm__, v10, v11);
    byte_4B127BE = 1;
  }
  v5->fields.buyCount = buyCount;
  if ( buyCount )
  {
    buyStorageConfirmDialog = v5->fields.buyStorageConfirmDialog;
    v13 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, *(_QWORD *)&buyCount, method, v3);
    System_Action___ctor(v13, (Il2CppObject *)v5, Method_ShopRootComponent_RequestShop__, 0LL);
    if ( buyStorageConfirmDialog )
    {
      BuyStorageConfirmDialogComponent__Close_33290900(buyStorageConfirmDialog, v13, 0LL);
      return;
    }
LABEL_14:
    sub_1BCAA3C(this, *(_QWORD *)&buyCount);
  }
  listViewHelper = v5->fields.listViewHelper;
  v5->fields.inputState = 2;
  if ( !listViewHelper )
    goto LABEL_14;
  this = (ShopRootComponent_o *)listViewHelper->fields.buyItemListViewManager;
  if ( !this )
    goto LABEL_14;
  this = (ShopRootComponent_o *)ShopBuyItemListViewManager__GetItem(
                                  (ShopBuyItemListViewManager_o *)this,
                                  v5->fields.selectedItemIndex,
                                  0LL);
  if ( !v5->fields.buyStorageConfirmDialog )
    goto LABEL_14;
  v15 = (ShopBuyItemListViewItem_o *)this;
  BuyStorageConfirmDialogComponent__Close(v5->fields.buyStorageConfirmDialog, 0LL);
  this = (ShopRootComponent_o *)ShopRootComponent__GetIsBulk(v16, v15, v17);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    buyBulkItemConfirmMenu = v5->fields.buyBulkItemConfirmMenu;
    v21 = (System_Action_int__o *)sub_1BCAA2C(System_Action_int__TypeInfo, *(_QWORD *)&buyCount, v18, v19);
    System_Action_int____ctor(v21, (Il2CppObject *)v5, Method_ShopRootComponent_SelectedBuyItemConfirm__, 0LL);
    if ( !buyBulkItemConfirmMenu )
      goto LABEL_14;
    ShopBuyBulkItemConfirmMenu__Modify(buyBulkItemConfirmMenu, v21, 0LL);
  }
  else
  {
    v22 = v5->fields.listViewHelper;
    if ( !v22 )
      goto LABEL_14;
    state = v5->fields.state;
    ShopSceneListViewControlHelper__SetBuyItemListViewModify(v22, state, v18);
    ShopSceneListViewControlHelper__SetBuyItemListViewInput(v22, state, v24);
  }
}


void __fastcall ShopRootComponent__CreateShopDetailCheckList(ShopRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  System_Collections_Generic_Dictionary_int__int__o *v14; // x19
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  void *Instance; // x0
  __int64 v22; // x1
  int v23; // w8
  void *v24; // x19
  unsigned int v25; // w21
  __int64 v26; // x8

  if ( (byte_4B127C7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ShopDetailMaster___, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__, v6, v7);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v8, v9);
    sub_1BCA7E0(&ShopRootComponent_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13);
    byte_4B127C7 = 1;
  }
  if ( !ShopRootComponent_TypeInfo->static_fields->isInitialized )
  {
    v14 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1BCAA2C(
                                                                 System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                                 method,
                                                                 v2,
                                                                 v3);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v14,
      (const MethodInfo_31FC8B0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    ShopRootComponent_TypeInfo->static_fields->shopDetailCheckList = v14;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)ShopRootComponent_TypeInfo->static_fields,
      (int64_t)v14,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_15;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ShopDetailMaster___);
    if ( !Instance )
      goto LABEL_15;
    Instance = ShopDetailMaster__getShopDetailEntityList((ShopDetailMaster_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_15;
    v23 = *((_DWORD *)Instance + 6);
    v24 = Instance;
    if ( v23 >= 1 )
    {
      v25 = 0;
      while ( 1 )
      {
        if ( v25 >= v23 )
          sub_1BCAA44(Instance, v22);
        v26 = *((_QWORD *)v24 + (int)v25 + 4);
        if ( !v26 )
          break;
        Instance = ShopRootComponent_TypeInfo->static_fields->shopDetailCheckList;
        if ( !Instance )
          break;
        System_Collections_Generic_Dictionary_int__int___set_Item(
          (System_Collections_Generic_Dictionary_int__int__o *)Instance,
          *(_DWORD *)(v26 + 16),
          0,
          (const MethodInfo_31FD260 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
        v23 = *((_DWORD *)v24 + 6);
        if ( (int)++v25 >= v23 )
          goto LABEL_13;
      }
LABEL_15:
      sub_1BCAA3C(Instance, v22);
    }
LABEL_13:
    ShopRootComponent_TypeInfo->static_fields->isInitialized = 1;
  }
}


void __fastcall ShopRootComponent__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2

  if ( (byte_4B12789 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_13024/*"SpecialItemHelp"*/, v1, v2);
    sub_1BCA7E0(&StringLiteral_12902/*"Shop15Help"*/, v3, v4);
    sub_1BCA7E0(&StringLiteral_2398/*"AnonymousHelp"*/, v5, v6);
    sub_1BCA7E0(&StringLiteral_11286/*"RarePriHelp"*/, v7, v8);
    byte_4B12789 = 1;
  }
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_2398/*"AnonymousHelp"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11286/*"RarePriHelp"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13024/*"SpecialItemHelp"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_12902/*"Shop15Help"*/, 0LL);
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
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.jumpInfo, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
  }
}


void __fastcall ShopRootComponent__EndLimitCountSealInfoDialog(ShopRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  SummonInfoDlgComponent_o *limitCountSealInfoDlg; // x0
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  struct ShopSceneListViewControlHelper_o *listViewHelper; // x8
  ShopBuyItemListViewItem_o *Item; // x0
  const MethodInfo *v9; // x4

  if ( (byte_4B12799 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ShopRootComponent_EndLimitCountSealInfoDialog__, method, v2);
    byte_4B12799 = 1;
  }
  limitCountSealInfoDlg = this->fields.limitCountSealInfoDlg;
  if ( !limitCountSealInfoDlg )
    goto LABEL_9;
  SummonInfoDlgComponent__Close(limitCountSealInfoDlg, 0LL, 0LL);
  v5 = Method_ShopRootComponent_EndLimitCountSealInfoDialog__;
  if ( (*((_BYTE *)Method_ShopRootComponent_EndLimitCountSealInfoDialog__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1BCA7F8(Method_ShopRootComponent_EndLimitCountSealInfoDialog__);
  v6 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
  listViewHelper = this->fields.listViewHelper;
  if ( !listViewHelper
    || (limitCountSealInfoDlg = (SummonInfoDlgComponent_o *)listViewHelper->fields.buyItemListViewManager) == 0LL )
  {
LABEL_9:
    sub_1BCAA3C(limitCountSealInfoDlg, method);
  }
  Item = ShopBuyItemListViewManager__GetItem(
           (ShopBuyItemListViewManager_o *)limitCountSealInfoDlg,
           this->fields.limitCountSealInfoIndex,
           0LL);
  ShopRootComponent__OpenConfirmMenu(this, this->fields.state, Item, this->fields.limitCountSealInfoBulk, v9);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  ServantSellMenu_o *servantSellMenu; // x0
  struct ServantSellMenu_o *v10; // x8
  int32_t tabKind; // w21
  bool v12; // w0
  int32_t ServantSellConfirmKindOnRequestEnd; // w0
  ServantSellConfirmMenu_o *servantSellConfirmMenu; // x22
  System_Int64_array *selectedServantIds; // x20
  System_Int64_array *selectedCommandCodeIds; // x21
  int32_t v17; // w23
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  System_Action_int__o *v21; // x24
  const MethodInfo *v22; // x1

  if ( (byte_4B127AD & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_int__TypeInfo, result, method);
    sub_1BCA7E0(&Method_ShopRootComponent_EndSellResultServant__, v5, v6);
    sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, v7, v8);
    byte_4B127AD = 1;
  }
  servantSellMenu = this->fields.servantSellMenu;
  if ( !servantSellMenu )
    goto LABEL_8;
  ServantSellMenu__Init(servantSellMenu, 0LL);
  servantSellMenu = (ServantSellMenu_o *)this->fields.servantSellConfirmMenu;
  if ( !servantSellMenu )
    goto LABEL_8;
  ServantSellConfirmMenu__Init((ServantSellConfirmMenu_o *)servantSellMenu, 0LL);
  v10 = this->fields.servantSellMenu;
  if ( !v10 )
    goto LABEL_8;
  tabKind = v10->fields.tabKind;
  v12 = System_String__op_Equality(result, (System_String_o *)StringLiteral_22292/*"ng"*/, 0LL);
  ServantSellConfirmKindOnRequestEnd = ServantSellConfirmMenu__GetServantSellConfirmKindOnRequestEnd(tabKind, v12, 0LL);
  servantSellConfirmMenu = this->fields.servantSellConfirmMenu;
  selectedServantIds = this->fields.selectedServantIds;
  selectedCommandCodeIds = this->fields.selectedCommandCodeIds;
  v17 = ServantSellConfirmKindOnRequestEnd;
  v21 = (System_Action_int__o *)sub_1BCAA2C(System_Action_int__TypeInfo, v18, v19, v20);
  System_Action_int____ctor(v21, (Il2CppObject *)this, Method_ShopRootComponent_EndSellResultServant__, 0LL);
  if ( !servantSellConfirmMenu )
LABEL_8:
    sub_1BCAA3C(servantSellMenu, result);
  ServantSellConfirmMenu__Open(servantSellConfirmMenu, v17, selectedServantIds, selectedCommandCodeIds, v21, 0LL);
  ShopRootComponent__RefreshInfo(this, v22);
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

  if ( (byte_4B127A2 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, result, method);
    byte_4B127A2 = 1;
  }
  buyItemListViewManager = (ShopBuyItemListViewManager_o *)System_String__op_Equality(
                                                             result,
                                                             (System_String_o *)StringLiteral_22292/*"ng"*/,
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
    sub_1BCAA3C(buyItemListViewManager, v6);
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
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  int32_t result; // w0
  __int64 v9; // x1
  Il2CppObject *Master_object; // x20
  int64_t UserId; // x21

  if ( (byte_4B127B9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserItemMaster___, shopEntity, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    this = (ShopRootComponent_o *)sub_1BCA7E0(&NetworkManager_TypeInfo, v6, v7);
    byte_4B127B9 = 1;
  }
  if ( !shopEntity )
LABEL_20:
    sub_1BCAA3C(this, shopEntity);
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
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, shopEntity);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserItemMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v9);
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
    return dword_C0C3E8[state - 1];
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
        sub_1BCAA44(CommonConsumeEntities, item);
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
    sub_1BCAA3C(this, item);
  }
  return v8;
}


bool __fastcall ShopRootComponent__GetIsContainExceededServant(
        ShopRootComponent_o *this,
        System_Int64_array *selectServantIds,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  __int64 v10; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v11; // x20
  unsigned __int64 v12; // x21

  if ( (byte_4B1279E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, selectServantIds, method);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B1279E = 1;
  }
  if ( !selectServantIds )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_14:
    sub_1BCAA3C(Instance, v9);
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
  v10 = *(_QWORD *)&selectServantIds->max_length;
  if ( (int)v10 < 1 )
    return 0;
  v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v12 = 0LL;
  while ( 1 )
  {
    if ( v12 >= (unsigned int)v10 )
      sub_1BCAA44(Instance, v9);
    if ( !v11 )
      goto LABEL_14;
    Instance = DataMasterBase_object__object__long___GetEntity(
                 v11,
                 selectServantIds->m_Items[v12],
                 (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( Instance )
    {
      Instance = (Il2CppObject *)UserServantEntity__isExceeded((UserServantEntity_o *)Instance, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        return 1;
    }
    LODWORD(v10) = selectServantIds->max_length;
    if ( (__int64)++v12 >= (int)v10 )
      return 0;
  }
}


int32_t __fastcall ShopRootComponent__GetShopItemBuyNum(
        ShopRootComponent_o *this,
        ShopBuyItemListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  __int64 v10; // x1
  Il2CppObject *MasterData_object; // x20
  struct ShopEntity_o *Shop_k__BackingField; // x8
  UserShopEntity_o *EntityDefinitely; // x0

  if ( (byte_4B1279A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserShopMaster___, item, method);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B1279A = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v10);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !item || (Shop_k__BackingField = item->fields._Shop_k__BackingField) == 0LL || !MasterData_object )
LABEL_12:
    sub_1BCAA3C(Instance, v9);
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


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ShopRootComponent__GetStateOnInit(
        ShopRootComponent_o *this,
        System_String_o *jumpInfoName,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  uint32_t v24; // w0

  if ( (byte_4B127C3 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_8973/*"ManaPrism"*/, jumpInfoName, *(_QWORD *)&eventId);
    sub_1BCA7E0(&StringLiteral_7190/*"GrailFragments"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_14710/*"TradeAp"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_8484/*"LeafExchange"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_10944/*"PurePrismExchange"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_6308/*"EventItem"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_4625/*"CoinRoom"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_13150/*"StoneFragments"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_11287/*"RarePrism"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_12744/*"SellServant"*/, v22, v23);
    byte_4B127C3 = 1;
  }
  v24 = PrivateImplementationDetails___ComputeStringHash(jumpInfoName, 0LL);
  if ( v24 <= 0xBD992A97 )
  {
    if ( v24 > 0x897BAECB )
    {
      if ( v24 == -1542091583 )
      {
        if ( System_String__op_Equality(jumpInfoName, (System_String_o *)StringLiteral_10944/*"PurePrismExchange"*/, 0LL) )
          return 18;
      }
      else if ( v24 == -1477675373 )
      {
        if ( System_String__op_Equality(jumpInfoName, (System_String_o *)StringLiteral_7190/*"GrailFragments"*/, 0LL) )
          return 14;
      }
      else if ( v24 == -1114035561
             && System_String__op_Equality(jumpInfoName, (System_String_o *)StringLiteral_4625/*"CoinRoom"*/, 0LL) )
      {
        return 17;
      }
    }
    else if ( v24 == -1988383029 )
    {
      if ( System_String__op_Equality(jumpInfoName, (System_String_o *)StringLiteral_13150/*"StoneFragments"*/, 0LL) )
        return 4;
    }
    else if ( v24 == 1526818832 && System_String__op_Equality(jumpInfoName, (System_String_o *)StringLiteral_8484/*"LeafExchange"*/, 0LL) )
    {
      return 20;
    }
    return 1;
  }
  if ( v24 <= 0xCD42BE08 )
  {
    if ( v24 == -1075479726 )
    {
      if ( System_String__op_Equality(jumpInfoName, (System_String_o *)StringLiteral_12744/*"SellServant"*/, 0LL) )
        return 9;
    }
    else if ( v24 == -851263992 && System_String__op_Equality(jumpInfoName, (System_String_o *)StringLiteral_14710/*"TradeAp"*/, 0LL) )
    {
      return 19;
    }
    return 1;
  }
  if ( v24 == -74236182 )
  {
    if ( System_String__op_Equality(jumpInfoName, (System_String_o *)StringLiteral_11287/*"RarePrism"*/, 0LL) )
      return 3;
    return 1;
  }
  if ( v24 != -472076328 )
  {
    if ( v24 == -490311229 && System_String__op_Equality(jumpInfoName, (System_String_o *)StringLiteral_8973/*"ManaPrism"*/, 0LL) )
      return 2;
    return 1;
  }
  if ( !System_String__op_Equality(jumpInfoName, (System_String_o *)StringLiteral_6308/*"EventItem"*/, 0LL) )
    return 1;
  if ( eventId < 1 )
    return 7;
  else
    return 8;
}


void __fastcall ShopRootComponent__Init(ShopRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
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
  ShopSceneListViewControlHelper_o *v41; // x29
  struct ShopSceneListViewControlHelper_o **p_listViewHelper; // x21
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  __int64 v49; // x1
  const MethodInfo *v50; // x5
  ShopSceneListViewControlHelper_o *listViewHelper; // x0
  ShopSceneListViewControlHelper_o *v52; // x23
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x3
  System_Action_o *v56; // x24
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x3
  System_Action_T__o *v60; // x25
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x3
  System_Action_int__o *v64; // x26
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x3
  System_Action_int__o *v68; // x27
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x3
  System_Action_T1__T2__T3__o *v72; // x28
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x3
  System_Action_o *v76; // x29
  const MethodInfo *v77; // x7
  ShopRootComponent_o *v78; // x0
  const MethodInfo *v79; // x3
  unsigned int StateOnInit; // w0
  const MethodInfo *v81; // x4
  int32_t v82; // w8
  _BOOL4 isFromCoinRoom; // w9
  float v84; // s0
  const MethodInfo *v85; // x3
  int64_t v86; // x2
  int32_t v87; // w3
  System_String_o *v88; // x4
  BattleSetupInfo_o *v89; // x5
  FollowerInfo_o *v90; // x6
  PartyListViewItem_o *v91; // x7
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 v93; // x1
  __int64 v94; // x2
  __int64 v95; // x3
  System_Action_int__o *v96; // x21
  const MethodInfo *v97; // [xsp+18h] [xbp-88h]
  System_String_o *jumpInfoName; // [xsp+28h] [xbp-78h]
  int32_t eventId; // [xsp+34h] [xbp-6Ch]
  UnityEngine_GameObject_o *eventListViewBase; // [xsp+38h] [xbp-68h]

  if ( (byte_4B1278E & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_ShopRootConstants_State__TypeInfo, method, v2);
    sub_1BCA7E0(&System_Action_int__TypeInfo, v5, v6);
    sub_1BCA7E0(&System_Action_ServantSellMenu_ResultKind__long____long____TypeInfo, v7, v8);
    sub_1BCA7E0(&System_Action_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_ShopRootComponent_OnMoveEnd__, v11, v12);
    sub_1BCA7E0(&Method_ShopRootComponent_OnSelectBuyItem__, v13, v14);
    sub_1BCA7E0(&Method_ShopRootComponent_OnSelectEvent__, v15, v16);
    sub_1BCA7E0(&Method_ShopRootComponent_OnSelectSellServant__, v17, v18);
    sub_1BCA7E0(&Method_ShopRootComponent_OnSelectTop__, v19, v20);
    sub_1BCA7E0(&Method_ShopRootComponent_OpenHelp__, v21, v22);
    sub_1BCA7E0(&Method_ShopRootComponent__Init_b__76_0__, v23, v24);
    sub_1BCA7E0(&ShopSceneListViewControlHelper_TypeInfo, v25, v26);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v27, v28);
    byte_4B1278E = 1;
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
    v41 = (ShopSceneListViewControlHelper_o *)sub_1BCAA2C(ShopSceneListViewControlHelper_TypeInfo, method, v2, v3);
    ShopSceneListViewControlHelper___ctor(
      v41,
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
      v97);
    p_listViewHelper = &this->fields.listViewHelper;
    this->fields.listViewHelper = v41;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.listViewHelper, (int64_t)v41, v43, v44, v45, v46, v47, v48);
    listViewHelper = this->fields.listViewHelper;
    if ( !listViewHelper )
      goto LABEL_19;
    ShopSceneListViewControlHelper__SetOtherObjects(
      listViewHelper,
      this->fields.titleInfo,
      this->fields.standFigureBack,
      this->fields.giftButtonControl,
      this->fields.backgroundTexture,
      v50);
    v52 = this->fields.listViewHelper;
    v56 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v53, v54, v55);
    System_Action___ctor(v56, (Il2CppObject *)this, Method_ShopRootComponent_OnMoveEnd__, 0LL);
    v60 = (System_Action_T__o *)sub_1BCAA2C(System_Action_ShopRootConstants_State__TypeInfo, v57, v58, v59);
    System_Action_Int32Enum____ctor(v60, (Il2CppObject *)this, (intptr_t)Method_ShopRootComponent_OnSelectTop__, 0LL);
    v64 = (System_Action_int__o *)sub_1BCAA2C(System_Action_int__TypeInfo, v61, v62, v63);
    System_Action_int____ctor(v64, (Il2CppObject *)this, (intptr_t)Method_ShopRootComponent_OnSelectEvent__, 0LL);
    v68 = (System_Action_int__o *)sub_1BCAA2C(System_Action_int__TypeInfo, v65, v66, v67);
    System_Action_int____ctor(v68, (Il2CppObject *)this, (intptr_t)Method_ShopRootComponent_OnSelectBuyItem__, 0LL);
    v72 = (System_Action_T1__T2__T3__o *)sub_1BCAA2C(
                                           System_Action_ServantSellMenu_ResultKind__long____long____TypeInfo,
                                           v69,
                                           v70,
                                           v71);
    System_Action_Int32Enum__object__object____ctor(
      v72,
      (Il2CppObject *)this,
      Method_ShopRootComponent_OnSelectSellServant__,
      0LL);
    v76 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v73, v74, v75);
    System_Action___ctor(v76, (Il2CppObject *)this, Method_ShopRootComponent_OpenHelp__, 0LL);
    if ( !v52 )
      goto LABEL_19;
    ShopSceneListViewControlHelper__SetCallbackEvents(
      v52,
      v56,
      (System_Action_ShopRootConstants_State__o *)v60,
      v64,
      v68,
      (System_Action_ServantSellMenu_ResultKind__long____long____o *)v72,
      v76,
      v77);
    StateOnInit = ShopRootComponent__GetStateOnInit(v78, jumpInfoName, eventId, v79);
    v49 = StateOnInit;
    this->fields.state = StateOnInit;
    v82 = StateOnInit - 1 > 0x13 ? 0 : dword_C0C3E8[StateOnInit - 1];
    isFromCoinRoom = this->fields.isFromCoinRoom;
    this->fields.inputState = v82;
    v84 = isFromCoinRoom ? this->fields.saveScrollBarValue : -1.0;
    listViewHelper = *p_listViewHelper;
    if ( !*p_listViewHelper )
LABEL_19:
      sub_1BCAA3C(listViewHelper, v49);
    ShopSceneListViewControlHelper__SetListViewOnSceneInit(
      listViewHelper,
      v49,
      eventId,
      v84,
      &this->fields.selectedEventIndex,
      v81);
    ShopRootComponent__OpenEventItemWindow(this, this->fields.state, eventId, v85);
    if ( this->fields.state == 9 )
    {
      this->fields.jumpInfo = 0LL;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.jumpInfo, 0LL, v86, v87, v88, v89, v90, v91);
    }
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v96 = (System_Action_int__o *)sub_1BCAA2C(System_Action_int__TypeInfo, v93, v94, v95);
    System_Action_int____ctor(v96, (Il2CppObject *)this, Method_ShopRootComponent__Init_b__76_0__, 0LL);
    StoneCountRefreshComponent__AttachToGameObject(gameObject, v96, 0, 0LL);
  }
}


void __fastcall ShopRootComponent__LoadBanner(ShopRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x20
  __int64 v14; // x0
  __int64 v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  ShopRootComponent_o *v22; // x0
  const MethodInfo *v23; // x3
  struct SceneJumpInfo_o *jumpInfo; // x8
  int32_t id; // w2
  System_String_o **p_name; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  System_Action_o *v30; // x19
  __int64 v31; // x1

  if ( (byte_4B1278D & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&AtlasManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_ShopRootComponent___c__DisplayClass73_0__LoadBanner_b__0__, v7, v8);
    sub_1BCA7E0(&ShopRootComponent___c__DisplayClass73_0_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v11, v12);
    byte_4B1278D = 1;
  }
  v13 = sub_1BCAA2C(ShopRootComponent___c__DisplayClass73_0_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    sub_1BCAA3C(v14, v15);
  *(_QWORD *)(v13 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v13 + 16), (int64_t)this, v16, v17, v18, v19, v20, v21);
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
  *(_DWORD *)(v13 + 24) = ShopRootComponent__GetStateOnInit(v22, *p_name, id, v23);
  v30 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v27, v28, v29);
  System_Action___ctor(v30, (Il2CppObject *)v13, Method_ShopRootComponent___c__DisplayClass73_0__LoadBanner_b__0__, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v31);
  AtlasManager__LoadOutGameAtlas(v30, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_4B127C6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, *(_QWORD *)&result, method);
    byte_4B127C6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_1BCAA3C(Instance, v6);
  }
  ShopSceneListViewControlHelper__SetTopListViewInput(listViewHelper, v9, v7);
  ShopSceneListViewControlHelper__SetHelpButtonEnable(listViewHelper, v9, v10);
  if ( result == 2 )
    ShopRootComponent__RefreshInfo(this, v11);
}


void __fastcall ShopRootComponent__OnClickBack(ShopRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x2

  if ( (byte_4B127B5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ShopRootComponent_OnClickBack__, method, v2);
    byte_4B127B5 = 1;
  }
  if ( this->fields.inputState == 2 )
  {
    v4 = Method_ShopRootComponent_OnClickBack__;
    if ( (*((_BYTE *)Method_ShopRootComponent_OnClickBack__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_ShopRootComponent_OnClickBack__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
    if ( !ShopRootComponent__BackScene(this, this->fields.state, v6) )
      ShopRootComponent__BackMenu(this, this->fields.state, v7);
  }
}


void __fastcall ShopRootComponent__OnClickHelp(ShopRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4B127AF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ShopRootComponent_OnClickHelp__, method, v2);
    byte_4B127AF = 1;
  }
  v4 = Method_ShopRootComponent_OnClickHelp__;
  if ( (*((_BYTE *)Method_ShopRootComponent_OnClickHelp__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BCA7F8(Method_ShopRootComponent_OnClickHelp__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
  ShopRootComponent__OpenHelp(this, v6);
}


void __fastcall ShopRootComponent__OnClickHelpClose(ShopRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  unsigned int state; // w8
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  ShopHelpListViewManager_o *helpListViewManager; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  System_Action_o *v15; // x21
  __int64 v16; // x0
  __int64 v17; // x1

  if ( (byte_4B127B2 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_ShopRootComponent_CheckTutorial__, v4, v5);
    sub_1BCA7E0(&Method_ShopRootComponent_OnClickHelpClose__, v6, v7);
    byte_4B127B2 = 1;
  }
  state = this->fields.state;
  if ( state > 0x14 || ((1 << state) & 0x100068) == 0 )
  {
    v9 = Method_ShopRootComponent_OnClickHelpClose__;
    if ( (*((_BYTE *)Method_ShopRootComponent_OnClickHelpClose__ + 83) & 2) != 0 )
      v9 = (_QWORD *)sub_1BCA7F8(Method_ShopRootComponent_OnClickHelpClose__);
    v10 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v9, v9[4]);
    OverwriteAssetSoundName__PlaySystemSe(v10, 1, 0LL);
    helpListViewManager = this->fields.helpListViewManager;
    v15 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v12, v13, v14);
    System_Action___ctor(v15, (Il2CppObject *)this, Method_ShopRootComponent_CheckTutorial__, 0LL);
    if ( !helpListViewManager )
      sub_1BCAA3C(v16, v17);
    ShopHelpListViewManager__CloseHelpDialog(helpListViewManager, v15, 0LL);
  }
}


void __fastcall ShopRootComponent__OnEndDialogEventCloseWarning(ShopRootComponent_o *this, const MethodInfo *method)
{
  MainMenuBar__requestTerminalSceneChange(0LL);
}


void __fastcall ShopRootComponent__OnEndFadeRequestShop(ShopRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  System_String_o *MainBgmName; // x20
  const MethodInfo *v8; // x1

  if ( (byte_4B127AB & 1) == 0 )
  {
    sub_1BCA7E0(&BgmManager_TypeInfo, method, v2);
    sub_1BCA7E0(&SoundManager_TypeInfo, v4, v5);
    byte_4B127AB = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, method);
  MainBgmName = BgmManager__GetMainBgmName(0LL);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v6);
  SoundManager__playBgm(MainBgmName, 0LL);
  ShopRootComponent__RequestEnd(this, v8);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopRootComponent__OnEndItemDialog(ShopRootComponent_o *this, bool isOk, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  RequestResultDialog_o *requestResultDialog; // x0
  struct ShopSceneListViewControlHelper_o *listViewHelper; // x8
  ShopEntity_o *okBtnLabel; // x20
  const MethodInfo *v17; // x2
  __int64 v18; // x3
  System_String_o *monitor; // x20
  ScriptManager_CallbackFunc_o *v20; // x21
  __int64 v21; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B127A7 & 1) == 0 )
  {
    sub_1BCA7E0(&ScriptManager_CallbackFunc_TypeInfo, isOk, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ShopScriptMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_ShopScriptMaster__ShopScriptEntity__int__TryGetEntity__, v6, v7);
    sub_1BCA7E0(&ScriptManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_ShopRootComponent_OnEndPlayScriptRequestShop__, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13);
    byte_4B127A7 = 1;
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
  requestResultDialog = (RequestResultDialog_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !requestResultDialog )
    goto LABEL_21;
  requestResultDialog = (RequestResultDialog_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)requestResultDialog,
                                                   (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ShopScriptMaster___);
  if ( !okBtnLabel || !requestResultDialog )
    goto LABEL_21;
  requestResultDialog = (RequestResultDialog_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)requestResultDialog,
                                                   &entity,
                                                   okBtnLabel->fields.id,
                                                   (const MethodInfo_31B2E94 *)Method_DataMasterBase_ShopScriptMaster__ShopScriptEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)requestResultDialog & 1) == 0 )
    goto LABEL_13;
  if ( !entity )
    goto LABEL_21;
  requestResultDialog = (RequestResultDialog_o *)System_String__IsNullOrEmpty((System_String_o *)entity[2].monitor, 0LL);
  if ( ((unsigned __int8)requestResultDialog & 1) != 0 )
  {
LABEL_13:
    if ( okBtnLabel->fields.purchaseType == 14 )
      ShopRootComponent__PlayServantCostumeReleaseEffect(this, okBtnLabel, v17);
    else
      ShopRootComponent__RequestEnd(this, (const MethodInfo *)isOk);
    return;
  }
  if ( !entity )
LABEL_21:
    sub_1BCAA3C(requestResultDialog, isOk);
  monitor = (System_String_o *)entity[2].monitor;
  v20 = (ScriptManager_CallbackFunc_o *)sub_1BCAA2C(ScriptManager_CallbackFunc_TypeInfo, isOk, v17, v18);
  ScriptManager_CallbackFunc___ctor(
    v20,
    (Il2CppObject *)this,
    Method_ShopRootComponent_OnEndPlayScriptRequestShop__,
    0LL);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v21);
  ScriptManager__PlayShop(monitor, v20, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopRootComponent__OnEndPlayScriptRequestShop(
        ShopRootComponent_o *this,
        bool isExit,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  System_Action_o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1

  if ( (byte_4B127A8 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isExit, method);
    sub_1BCA7E0(&Method_ShopRootComponent_OnEndFadeRequestShop__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    byte_4B127A8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v9, v10, v11);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_ShopRootComponent_OnEndFadeRequestShop__, 0LL);
  if ( !Instance )
    sub_1BCAA3C(v13, v14);
  CommonUI__maskFadein((CommonUI_o *)Instance, 1.0, v12, 0LL);
}


void __fastcall ShopRootComponent__OnEndPlayServantCostumeReleaseEffect(
        ShopRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  AvalonSceneManager_c *v14; // x8
  CommonUI_o *v15; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v17; // x21
  __int64 v18; // x0
  __int64 v19; // x1

  if ( (byte_4B127AA & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_ShopRootComponent_RequestEnd__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    byte_4B127AA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = AvalonSceneManager_TypeInfo;
  v15 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v11);
    v14 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v14->static_fields->DEFAULT_FADE_TIME;
  v17 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v11, v12, v13);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_ShopRootComponent_RequestEnd__, 0LL);
  if ( !v15 )
    sub_1BCAA3C(v18, v19);
  CommonUI__maskFadein(v15, DEFAULT_FADE_TIME, v17, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopRootComponent__OnEndShopReset(ShopRootComponent_o *this, bool isDecide, const MethodInfo *method)
{
  ShopResetConfirmDialogComponent_o *shopResetConfirmDialog; // x0
  const MethodInfo *v5; // x1

  shopResetConfirmDialog = this->fields.shopResetConfirmDialog;
  if ( !shopResetConfirmDialog )
    sub_1BCAA3C(0LL, isDecide);
  ShopResetConfirmDialogComponent__Close_33531592(shopResetConfirmDialog, 0LL, method);
  ShopRootComponent__RequestEnd(this, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopRootComponent__OnEndStorageDialog(
        ShopRootComponent_o *this,
        int32_t count,
        const MethodInfo *method)
{
  BuyStorageConfirmDialogComponent_o *buyStorageResultDialog; // x0
  const MethodInfo *v5; // x1

  buyStorageResultDialog = this->fields.buyStorageResultDialog;
  if ( !buyStorageResultDialog )
    sub_1BCAA3C(0LL, *(_QWORD *)&count);
  BuyStorageConfirmDialogComponent__Close(buyStorageResultDialog, 0LL);
  ShopRootComponent__RequestEnd(this, v5);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ShopRootComponent__OnGiftClose(
        ShopRootComponent_o *this,
        bool receivedNewServant,
        const MethodInfo *method)
{
  __int64 v4; // x1
  ShopCurrencyInfoController_o *currencyInfoController; // x20
  int32_t state; // w21
  ShopSceneListViewControlHelper_o *BuyItemKind; // x0
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x3
  int32_t v10; // w21

  if ( (byte_4B127AE & 1) == 0 )
  {
    sub_1BCA7E0(&ShopBuyItemListViewManager_TypeInfo, receivedNewServant, method);
    byte_4B127AE = 1;
  }
  ShopRootComponent__RefreshInfo(this, (const MethodInfo *)receivedNewServant);
  currencyInfoController = this->fields.currencyInfoController;
  state = this->fields.state;
  if ( !ShopBuyItemListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ShopBuyItemListViewManager_TypeInfo, v4);
  BuyItemKind = (ShopSceneListViewControlHelper_o *)ShopBuyItemListViewManager__GetBuyItemKind(state, 0LL);
  if ( !this->fields.listViewHelper
    || (v10 = (int)BuyItemKind,
        BuyItemKind = (ShopSceneListViewControlHelper_o *)ShopSceneListViewControlHelper__GetEventId(
                                                            this->fields.listViewHelper,
                                                            this->fields.state,
                                                            this->fields.selectedEventIndex,
                                                            v9),
        !currencyInfoController)
    || (ShopCurrencyInfoController__RefreshEventItemWindow(currencyInfoController, v10, (int32_t)BuyItemKind, 0, 0LL),
        (BuyItemKind = this->fields.listViewHelper) == 0LL) )
  {
    sub_1BCAA3C(BuyItemKind, v8);
  }
  ShopSceneListViewControlHelper__SetListViewInvalidate(BuyItemKind, v8);
  return 1;
}


void __fastcall ShopRootComponent__OnGiftOpen(ShopRootComponent_o *this, const MethodInfo *method)
{
  ShopPlayVoiceComponent_o *shopPlayVoiceComponent; // x0

  shopPlayVoiceComponent = this->fields.shopPlayVoiceComponent;
  if ( !shopPlayVoiceComponent )
    sub_1BCAA3C(0LL, method);
  ShopPlayVoiceComponent__StopVoice(shopPlayVoiceComponent, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopRootComponent__OnInitEnd(ShopRootComponent_o *this, int32_t state, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  ShopSceneListViewControlHelper_o *listViewHelper; // x0

  if ( this->fields.inputState == 1 )
  {
    listViewHelper = this->fields.listViewHelper;
    if ( !listViewHelper )
      sub_1BCAA3C(0LL, *(_QWORD *)&state);
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


// local variable allocation has failed, the output may be wrong!
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
      sub_1BCAA3C(0LL, *(_QWORD *)&state);
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
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  ShopBuyItemListViewManager_o *buyItemListViewManager; // x0
  __int64 v8; // x1
  struct ShopSceneListViewControlHelper_o *listViewHelper; // x8
  ShopBuyItemListViewItem_o *Item; // x0
  const MethodInfo *v11; // x2
  bool IsBulk; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4B127B8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ShopRootComponent_OnSelectBuyItem__, *(_QWORD *)&index, method);
    byte_4B127B8 = 1;
  }
  if ( this->fields.inputState == 2 )
  {
    this->fields.inputState = 0;
    v5 = Method_ShopRootComponent_OnSelectBuyItem__;
    if ( (*((_BYTE *)Method_ShopRootComponent_OnSelectBuyItem__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BCA7F8(Method_ShopRootComponent_OnSelectBuyItem__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    listViewHelper = this->fields.listViewHelper;
    this->fields.selectedItemIndex = index;
    if ( !listViewHelper || (buyItemListViewManager = listViewHelper->fields.buyItemListViewManager) == 0LL )
      sub_1BCAA3C(buyItemListViewManager, v8);
    Item = ShopBuyItemListViewManager__GetItem(buyItemListViewManager, index, 0LL);
    IsBulk = ShopRootComponent__GetIsBulk((ShopRootComponent_o *)Item, Item, v11);
    ShopRootComponent__SelectItem(this, index, IsBulk, v13);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopRootComponent__OnSelectEvent(ShopRootComponent_o *this, int32_t index, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  _QWORD *v19; // x0
  System_Reflection_MethodBase_o *v20; // x0
  Il2CppObject *eventListViewManager; // x0
  __int64 v22; // x1
  struct ShopSceneListViewControlHelper_o *listViewHelper; // x8
  ShopEventListViewItem_o *Item; // x20
  __int64 v25; // x1
  const MethodInfo *v26; // x2
  __int64 v27; // x3
  int32_t eventId; // w21
  SceneJumpInfo_o *v29; // x19

  if ( (byte_4B127BA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventDetailMaster___, *(_QWORD *)&index, method);
    sub_1BCA7E0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v5, v6);
    sub_1BCA7E0(&SceneJumpInfo_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_ShopRootComponent_OnSelectEvent__, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16);
    sub_1BCA7E0(&StringLiteral_9660/*"NormalEventShop"*/, v17, v18);
    byte_4B127BA = 1;
  }
  v19 = Method_ShopRootComponent_OnSelectEvent__;
  if ( (*((_BYTE *)Method_ShopRootComponent_OnSelectEvent__ + 83) & 2) != 0 )
    v19 = (_QWORD *)sub_1BCA7F8(Method_ShopRootComponent_OnSelectEvent__);
  v20 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v19, v19[4]);
  OverwriteAssetSoundName__PlaySystemSe(v20, 0, 0LL);
  listViewHelper = this->fields.listViewHelper;
  this->fields.selectedEventIndex = index;
  if ( !listViewHelper )
    goto LABEL_17;
  eventListViewManager = (Il2CppObject *)listViewHelper->fields.eventListViewManager;
  if ( !eventListViewManager )
    goto LABEL_17;
  Item = ShopEventListViewManager__GetItem((ShopEventListViewManager_o *)eventListViewManager, index, 0LL);
  eventListViewManager = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !eventListViewManager )
    goto LABEL_17;
  eventListViewManager = DataManager__GetMasterData_object_(
                           (DataManager_o *)eventListViewManager,
                           (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Item )
    goto LABEL_17;
  if ( !eventListViewManager )
    goto LABEL_17;
  eventListViewManager = DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)eventListViewManager,
                           Item->fields.eventId,
                           (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  if ( !eventListViewManager )
    goto LABEL_17;
  if ( EventDetailEntity__IsEventShop((EventDetailEntity_o *)eventListViewManager, 0LL) )
  {
    eventId = Item->fields.eventId;
    v29 = (SceneJumpInfo_o *)sub_1BCAA2C(SceneJumpInfo_TypeInfo, v25, v26, v27);
    SceneJumpInfo___ctor_39380884(v29, (System_String_o *)StringLiteral_9660/*"NormalEventShop"*/, eventId, 0LL);
    if ( v29 )
    {
      SceneJumpInfo__SetReturnNowScene(v29, 0LL);
      eventListViewManager = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( eventListViewManager )
      {
        CommonUI__CheckChangeOtherConnectMarkFromEventId(
          (CommonUI_o *)eventListViewManager,
          Item->fields.eventId,
          1,
          0LL);
        eventListViewManager = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( eventListViewManager )
        {
          AvalonSceneManager__transitionScene(
            (AvalonSceneManager_o *)eventListViewManager,
            72,
            1,
            (Il2CppObject *)v29,
            0LL);
          return;
        }
      }
    }
LABEL_17:
    sub_1BCAA3C(eventListViewManager, v22);
  }
  ShopRootComponent__SelectMenu(this, 8, v26);
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
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.selectedServantIds,
      (int64_t)servantList,
      (int64_t)servantList,
      (int32_t)commandCodeList,
      (System_String_o *)method,
      v5,
      v6,
      v7);
    this->fields.selectedCommandCodeIds = commandCodeList;
    sub_1BCA784(
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


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopRootComponent__OnSelectTop(ShopRootComponent_o *this, int32_t state, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  ShopRootConstants_c *v9; // x0
  bool IsSvtCostumeShopOpen; // w0
  _BOOL4 v11; // w9
  _BOOL4 v12; // w8
  bool IsTargetQuestClear; // w0
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0
  const MethodInfo *v16; // x2

  if ( (byte_4B127B7 & 1) == 0 )
  {
    sub_1BCA7E0(&CoinRoomUtility_TypeInfo, *(_QWORD *)&state, method);
    sub_1BCA7E0(&Method_ShopRootComponent_OnSelectTop__, v5, v6);
    sub_1BCA7E0(&ShopRootConstants_TypeInfo, v7, v8);
    byte_4B127B7 = 1;
  }
  if ( this->fields.inputState == 2 && this->fields.state == 1 )
  {
    if ( state == 17 )
    {
      if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo, *(_QWORD *)&state);
      IsTargetQuestClear = CoinRoomUtility__IsTargetQuestClear(0LL);
      v12 = 0;
      v11 = !IsTargetQuestClear;
    }
    else if ( state == 15 )
    {
      v9 = ShopRootConstants_TypeInfo;
      if ( !ShopRootConstants_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo, *(_QWORD *)&state);
      IsSvtCostumeShopOpen = ShopRootConstants__IsSvtCostumeShopOpen((const MethodInfo *)v9);
      v11 = 0;
      v12 = !IsSvtCostumeShopOpen;
    }
    else
    {
      v12 = 0;
      v11 = 0;
    }
    if ( v11 || v12 )
    {
      this->fields.inputState = 1;
      ShopRootComponent__OnInitEnd(this, 1, method);
    }
    else
    {
      v14 = Method_ShopRootComponent_OnSelectTop__;
      if ( (*((_BYTE *)Method_ShopRootComponent_OnSelectTop__ + 83) & 2) != 0 )
        v14 = (_QWORD *)sub_1BCA7F8(Method_ShopRootComponent_OnSelectTop__);
      v15 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v14, v14[4]);
      OverwriteAssetSoundName__PlaySystemSe(v15, 0, 0LL);
      ShopRootComponent__SelectMenu(this, state, v16);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x22
  ShopEntity_o *KindByShopState; // x0
  __int64 v25; // x1
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  ShopBuyItemListViewItem_o **v32; // x23
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  __int64 v39; // x2
  __int64 v40; // x3
  ShopBuyItemListViewItem_o *v41; // x20
  struct ShopBuyBulkItemConfirmMenu_o *ApSeedBulkExchangeConfirmMenu; // x21
  ShopEntity_o *v43; // x22
  System_Action_int__o *v44; // x23
  int32_t v45; // w4
  ShopBuyBulkItemConfirmMenu_o *v46; // x0
  ShopEntity_o *v47; // x1
  ShopBuyItemListViewItem_o *v48; // x2
  System_Action_int__o *v49; // x3
  ShopBuyItemListViewItem_o *v50; // x8
  ShopEntity_o *Shop_k__BackingField; // x23
  int32_t ShopKind_k__BackingField; // w24
  struct ShopBuyItemConfirmMenu_o *buyItemConfirmMenu; // x20
  System_Action_int__o *v54; // x25
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  System_Action_o *v58; // x19
  ShopBuyItemConfirmMenu_o *v59; // x0
  ShopEntity_o *v60; // x1
  int32_t v61; // w2
  System_Action_int__o *v62; // x3
  int32_t v63; // w5
  System_Action_o *v64; // x6
  ShopBuyItemConfirmMenu_o *v65; // x20
  ShopBuyItemListViewItem_o *v66; // x21
  System_Action_o *v67; // x0
  __int64 *v68; // x8
  System_Action_o *v69; // x23
  __int64 v70; // x1
  __int64 v71; // x2
  __int64 v72; // x3
  System_Action_int__o *v73; // x22
  int32_t v74; // w21
  const MethodInfo *v75; // x2
  __int64 v76; // x3
  BuyStorageConfirmDialogComponent_o *buyStorageNotificationDialog; // x20
  ShopBuyItemListViewItem_o *v78; // x22
  System_Action_int__o *v79; // x23
  int32_t v80; // w2
  __int64 v81; // x2
  __int64 v82; // x3
  int v83; // w22
  __int64 v84; // x2
  __int64 v85; // x3
  ShopBuyItemListViewItem_o *v86; // x8
  ShopEntity_o *v87; // x21
  int32_t v88; // w22
  struct ShopBuyItemConfirmMenu_o *ApSeedExchangeConfirmMenu; // x20
  System_Action_int__o *v90; // x23
  ShopBuyItemListViewItem_o *v91; // x20
  struct ShopBuyBulkItemConfirmMenu_o *buyBulkItemConfirmMenu; // x21
  ShopEntity_o *v93; // x22
  System_Action_int__o *v94; // x23
  ShopEntity_o *v95; // x22
  int32_t v96; // w21
  BuyStorageConfirmDialogComponent_o *buyStorageConfirmDialog; // x20
  ShopBuyItemListViewItem_o *v98; // x22
  System_Action_int__o *v99; // x23

  if ( (byte_4B12797 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_int__TypeInfo, *(_QWORD *)&state, item);
    sub_1BCA7E0(&System_Action_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_ShopRootComponent_CloseStorageDetailCheckConfirm__, v11, v12);
    sub_1BCA7E0(&Method_ShopRootComponent_SelectedBuyItemConfirm__, v13, v14);
    sub_1BCA7E0(&Method_ShopRootComponent___c__DisplayClass86_0__OpenConfirmMenu_b__0__, v15, v16);
    sub_1BCA7E0(&Method_ShopRootComponent___c__DisplayClass86_0__OpenConfirmMenu_b__1__, v17, v18);
    sub_1BCA7E0(&Method_ShopRootComponent___c__DisplayClass86_0__OpenConfirmMenu_b__2__, v19, v20);
    sub_1BCA7E0(&ShopRootComponent___c__DisplayClass86_0_TypeInfo, v21, v22);
    byte_4B12797 = 1;
  }
  v23 = sub_1BCAA2C(ShopRootComponent___c__DisplayClass86_0_TypeInfo, *(_QWORD *)&state, item, isBulk);
  System_Object___ctor((Il2CppObject *)v23, 0LL);
  if ( !v23 )
    goto LABEL_51;
  *(_QWORD *)(v23 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v23 + 16), (int64_t)this, v26, v27, v28, v29, v30, v31);
  *(_QWORD *)(v23 + 24) = item;
  v32 = (ShopBuyItemListViewItem_o **)(v23 + 24);
  sub_1BCA784((PartyOrganizationUtility_o *)(v23 + 24), (int64_t)item, v33, v34, v35, v36, v37, v38);
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
      v50 = *v32;
      if ( !*v32 )
        goto LABEL_51;
      Shop_k__BackingField = v50->fields._Shop_k__BackingField;
      ShopKind_k__BackingField = v50->fields._ShopKind_k__BackingField;
      buyItemConfirmMenu = this->fields.buyItemConfirmMenu;
      v54 = (System_Action_int__o *)sub_1BCAA2C(System_Action_int__TypeInfo, v25, v39, v40);
      System_Action_int____ctor(v54, (Il2CppObject *)this, Method_ShopRootComponent_SelectedBuyItemConfirm__, 0LL);
      v58 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v55, v56, v57);
      System_Action___ctor(
        v58,
        (Il2CppObject *)v23,
        Method_ShopRootComponent___c__DisplayClass86_0__OpenConfirmMenu_b__1__,
        0LL);
      if ( !buyItemConfirmMenu )
        goto LABEL_51;
      v59 = buyItemConfirmMenu;
      v60 = Shop_k__BackingField;
      v61 = ShopKind_k__BackingField;
      v62 = v54;
      v63 = state;
      v64 = v58;
      goto LABEL_14;
    case 3:
    case 15:
      if ( isBulk )
        goto LABEL_6;
      v65 = this->fields.buyItemConfirmMenu;
      v66 = *(ShopBuyItemListViewItem_o **)(v23 + 24);
      v67 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v25, v39, v40);
      v68 = &Method_ShopRootComponent___c__DisplayClass86_0__OpenConfirmMenu_b__0__;
      goto LABEL_17;
    case 11:
    case 12:
      KindByShopState = (ShopEntity_o *)BuyStorageConfirmDialogComponent__GetKindByShopState(state, 0LL);
      if ( !*v32 )
        goto LABEL_51;
      v74 = (int)KindByShopState;
      KindByShopState = (*v32)->fields._Shop_k__BackingField;
      if ( !KindByShopState )
        goto LABEL_51;
      KindByShopState = (ShopEntity_o *)ShopEntity__IsSoldOut(KindByShopState, 0LL);
      if ( ((unsigned __int8)KindByShopState & 1) != 0 )
      {
        buyStorageNotificationDialog = this->fields.buyStorageNotificationDialog;
        v78 = *v32;
        v79 = (System_Action_int__o *)sub_1BCAA2C(System_Action_int__TypeInfo, v25, v75, v76);
        System_Action_int____ctor(v79, (Il2CppObject *)this, Method_ShopRootComponent_SelectedBuyItemConfirm__, 0LL);
        if ( buyStorageNotificationDialog )
        {
          v80 = 1;
LABEL_37:
          BuyStorageConfirmDialogComponent__NotificationDialogOpen(
            buyStorageNotificationDialog,
            v74,
            v80,
            v78,
            v79,
            0LL);
          return;
        }
        goto LABEL_51;
      }
      if ( !*v32 )
        goto LABEL_51;
      KindByShopState = (ShopEntity_o *)ShopRootComponent__GetCurrency(
                                          (ShopRootComponent_o *)KindByShopState,
                                          (*v32)->fields._Shop_k__BackingField,
                                          v75);
      if ( !*v32 )
        goto LABEL_51;
      v83 = (int)KindByShopState;
      KindByShopState = (*v32)->fields._Shop_k__BackingField;
      if ( !KindByShopState )
        goto LABEL_51;
      KindByShopState = (ShopEntity_o *)ShopEntity__GetPrice(KindByShopState, 0LL);
      if ( v83 < (int)KindByShopState )
      {
        buyStorageNotificationDialog = this->fields.buyStorageNotificationDialog;
        v78 = *v32;
        v79 = (System_Action_int__o *)sub_1BCAA2C(System_Action_int__TypeInfo, v25, v84, v85);
        System_Action_int____ctor(v79, (Il2CppObject *)this, Method_ShopRootComponent_SelectedBuyItemConfirm__, 0LL);
        if ( buyStorageNotificationDialog )
        {
          v80 = 2;
          goto LABEL_37;
        }
LABEL_51:
        sub_1BCAA3C(KindByShopState, v25);
      }
      if ( isBulk )
      {
        v91 = *v32;
        if ( !*v32 )
          goto LABEL_51;
        buyBulkItemConfirmMenu = this->fields.buyBulkItemConfirmMenu;
        v93 = v91->fields._Shop_k__BackingField;
        v94 = (System_Action_int__o *)sub_1BCAA2C(System_Action_int__TypeInfo, v25, v84, v85);
        System_Action_int____ctor(v94, (Il2CppObject *)this, Method_ShopRootComponent_SelectedBuyItemConfirm__, 0LL);
        if ( !buyBulkItemConfirmMenu )
          goto LABEL_51;
        v46 = buyBulkItemConfirmMenu;
        v47 = v93;
        v48 = v91;
        v49 = v94;
        v45 = 0;
LABEL_10:
        ShopBuyBulkItemConfirmMenu__Open(v46, v47, v48, v49, v45, 0LL);
        return;
      }
      buyStorageConfirmDialog = this->fields.buyStorageConfirmDialog;
      this->fields.buyCount = 1;
      v98 = *v32;
      v99 = (System_Action_int__o *)sub_1BCAA2C(System_Action_int__TypeInfo, v25, v84, v85);
      System_Action_int____ctor(
        v99,
        (Il2CppObject *)this,
        Method_ShopRootComponent_CloseStorageDetailCheckConfirm__,
        0LL);
      if ( !buyStorageConfirmDialog )
        goto LABEL_51;
      BuyStorageConfirmDialogComponent__Open(buyStorageConfirmDialog, v74, v98, 1, v99, 0LL);
      return;
    case 19:
      if ( isBulk )
      {
        v41 = *v32;
        if ( !*v32 )
          goto LABEL_51;
        ApSeedBulkExchangeConfirmMenu = this->fields.ApSeedBulkExchangeConfirmMenu;
        goto LABEL_8;
      }
      v86 = *v32;
      if ( !*v32 )
        goto LABEL_51;
      v87 = v86->fields._Shop_k__BackingField;
      v88 = v86->fields._ShopKind_k__BackingField;
      ApSeedExchangeConfirmMenu = this->fields.ApSeedExchangeConfirmMenu;
      v90 = (System_Action_int__o *)sub_1BCAA2C(System_Action_int__TypeInfo, v25, v39, v40);
      System_Action_int____ctor(v90, (Il2CppObject *)this, Method_ShopRootComponent_SelectedBuyItemConfirm__, 0LL);
      if ( !ApSeedExchangeConfirmMenu )
        goto LABEL_51;
      v59 = ApSeedExchangeConfirmMenu;
      v60 = v87;
      v61 = v88;
      break;
    case 21:
      if ( isBulk )
      {
LABEL_6:
        v41 = *v32;
        if ( !*v32 )
          goto LABEL_51;
        ApSeedBulkExchangeConfirmMenu = this->fields.buyBulkItemConfirmMenu;
LABEL_8:
        v43 = v41->fields._Shop_k__BackingField;
        v44 = (System_Action_int__o *)sub_1BCAA2C(System_Action_int__TypeInfo, v25, v39, v40);
        System_Action_int____ctor(v44, (Il2CppObject *)this, Method_ShopRootComponent_SelectedBuyItemConfirm__, 0LL);
        if ( !ApSeedBulkExchangeConfirmMenu )
          goto LABEL_51;
        v45 = 8;
        v46 = ApSeedBulkExchangeConfirmMenu;
        v47 = v43;
        v48 = v41;
        v49 = v44;
        goto LABEL_10;
      }
      KindByShopState = (ShopEntity_o *)*v32;
      if ( !*v32 )
        goto LABEL_51;
      KindByShopState = (ShopEntity_o *)ShopBuyItemListViewItem__get_IsItemTypeRarePri(
                                          (ShopBuyItemListViewItem_o *)KindByShopState,
                                          0LL);
      v65 = this->fields.buyItemConfirmMenu;
      v66 = *v32;
      if ( ((unsigned __int8)KindByShopState & 1) != 0 )
      {
        v67 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v25, v81, v82);
        v68 = &Method_ShopRootComponent___c__DisplayClass86_0__OpenConfirmMenu_b__2__;
LABEL_17:
        v69 = v67;
        System_Action___ctor(v67, (Il2CppObject *)v23, *v68, 0LL);
        v73 = (System_Action_int__o *)sub_1BCAA2C(System_Action_int__TypeInfo, v70, v71, v72);
        System_Action_int____ctor(v73, (Il2CppObject *)this, Method_ShopRootComponent_SelectedBuyItemConfirm__, 0LL);
        if ( v65 )
        {
          ShopBuyItemConfirmMenu__OpenAfterCheckedFree(v65, v66, v69, v73, 0LL);
          return;
        }
        goto LABEL_51;
      }
      if ( !v66 )
        goto LABEL_51;
      v95 = v66->fields._Shop_k__BackingField;
      v96 = v66->fields._ShopKind_k__BackingField;
      v90 = (System_Action_int__o *)sub_1BCAA2C(System_Action_int__TypeInfo, v25, v81, v82);
      System_Action_int____ctor(v90, (Il2CppObject *)this, Method_ShopRootComponent_SelectedBuyItemConfirm__, 0LL);
      if ( !v65 )
        goto LABEL_51;
      v59 = v65;
      v60 = v95;
      v61 = v96;
      break;
    default:
      return;
  }
  v62 = v90;
  v63 = 0;
  v64 = 0LL;
LABEL_14:
  ShopBuyItemConfirmMenu__Open(v59, v60, v61, v62, 0, v63, v64, 0LL);
}


void __fastcall ShopRootComponent__OpenDetailCheck(ShopRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ShopRootComponent_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  struct ShopSceneListViewControlHelper_o *listViewHelper; // x8
  ShopBuyItemListViewItem_o *Item; // x20
  struct ShopEntity_o *Shop_k__BackingField; // x8
  ShopDetailEntity_o *ShopDetailEntity; // x21
  __int64 v18; // x2
  __int64 v19; // x3
  CommonUI_o *v20; // x20
  System_String_o *message; // x21
  CommonConfirmDialog_ClickDelegate_o *v22; // x22

  v3 = this;
  if ( (byte_4B127BB & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&CommonConfirmDialog_ClickDelegate_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ShopDetailMaster___, v6, v7);
    sub_1BCA7E0(&Method_ShopRootComponent_CloseDetaiCheckConfirm__, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10, v11);
    this = (ShopRootComponent_o *)sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13);
    byte_4B127BB = 1;
  }
  listViewHelper = v3->fields.listViewHelper;
  if ( !listViewHelper )
    goto LABEL_14;
  this = (ShopRootComponent_o *)listViewHelper->fields.buyItemListViewManager;
  if ( !this )
    goto LABEL_14;
  Item = ShopBuyItemListViewManager__GetItem((ShopBuyItemListViewManager_o *)this, v3->fields.selectedItemIndex, 0LL);
  this = (ShopRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_14;
  this = (ShopRootComponent_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ShopDetailMaster___);
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
  this = (ShopRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !ShopDetailEntity )
    goto LABEL_14;
  v20 = (CommonUI_o *)this;
  message = ShopDetailEntity->fields.message;
  v22 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BCAA2C(CommonConfirmDialog_ClickDelegate_TypeInfo, method, v18, v19);
  CommonConfirmDialog_ClickDelegate___ctor(
    v22,
    (Il2CppObject *)v3,
    Method_ShopRootComponent_CloseDetaiCheckConfirm__,
    0LL);
  this = (ShopRootComponent_o *)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
  if ( !v20 )
LABEL_14:
    sub_1BCAA3C(this, method);
  CommonUI__OpenConfirmDialog_30766568(
    v20,
    0LL,
    message,
    1,
    v22,
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
  __int64 v8; // x2
  UnityEngine_GameObject_o *shopEventItemDrawBase; // x0
  __int64 v10; // x1
  char v11; // w20
  const MethodInfo *v12; // x1
  UnityEngine_Transform_o *transform; // x21
  int v14; // s0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v18; // x1
  ShopRootConstants_c *v19; // x8
  UnityEngine_GameObject_o *v20; // x19

  if ( (byte_4B127C0 & 1) == 0 )
  {
    sub_1BCA7E0(&ShopBuyItemListViewManager_TypeInfo, *(_QWORD *)&state, *(_QWORD *)&eventId);
    sub_1BCA7E0(&ShopRootConstants_TypeInfo, v7, v8);
    byte_4B127C0 = 1;
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
    j_il2cpp_runtime_class_init_0(ShopBuyItemListViewManager_TypeInfo, v10);
  shopEventItemDrawBase = (UnityEngine_GameObject_o *)ShopBuyItemListViewManager__GetIsShowEventItemWindow(
                                                        state,
                                                        eventId,
                                                        0LL);
  if ( !this->fields.shopEventItemDrawBase )
    goto LABEL_19;
  v11 = (char)shopEventItemDrawBase;
  shopEventItemDrawBase = UnityEngine_Component__get_gameObject(
                            (UnityEngine_Component_o *)this->fields.shopEventItemDrawBase,
                            0LL);
  if ( !shopEventItemDrawBase )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive(shopEventItemDrawBase, v11 & 1, 0LL);
  shopEventItemDrawBase = (UnityEngine_GameObject_o *)this->fields.giftButtonControl;
  if ( !shopEventItemDrawBase )
    goto LABEL_19;
  shopEventItemDrawBase = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)shopEventItemDrawBase, 0LL);
  if ( !shopEventItemDrawBase )
    goto LABEL_19;
  transform = UnityEngine_GameObject__get_transform(shopEventItemDrawBase, 0LL);
  if ( !ShopRootConstants_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo, v12);
  *(UnityEngine_Vector3_o *)&v14 = ShopRootConstants__GetGiftButtonPos(v11 & 1, v12);
  if ( !transform )
    goto LABEL_19;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v14, 0LL);
  if ( (v11 & 1) == 0 )
    return;
  shopEventItemDrawBase = (UnityEngine_GameObject_o *)this->fields.shopEventItemDrawBase;
  if ( !shopEventItemDrawBase )
LABEL_19:
    sub_1BCAA3C(shopEventItemDrawBase, *(_QWORD *)&state);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)shopEventItemDrawBase, 0LL);
  v19 = ShopRootConstants_TypeInfo;
  v20 = gameObject;
  if ( !ShopRootConstants_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo, v18);
    v19 = ShopRootConstants_TypeInfo;
  }
  TweenAlpha__Begin(v20, v19->static_fields->OPEN_TIME, 1.0, 0LL);
}


void __fastcall ShopRootComponent__OpenHelp(ShopRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  int32_t state; // w9
  System_Collections_IEnumerator_o *v11; // x1
  Il2CppObject *Instance; // x20
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  System_Action_o *v16; // x21
  __int64 v17; // x0
  __int64 v18; // x1
  int32_t v19; // w1
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  const MethodInfo *v29; // x1
  int32_t v30; // w19
  System_String_o *HelpSaveKey; // x0

  if ( (byte_4B127B0 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_ShopRootComponent_OnClickHelpClose__, v4, v5);
    sub_1BCA7E0(&ShopRootConstants_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    byte_4B127B0 = 1;
  }
  state = this->fields.state;
  switch ( state )
  {
    case 1:
      v11 = ShopRootComponent__WaitPurchase(this, method);
      UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, v11, 0LL);
      return;
    case 2:
    case 4:
      return;
    case 3:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v16 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v20, v21, v22);
      System_Action___ctor(v16, (Il2CppObject *)this, (intptr_t)Method_ShopRootComponent_OnClickHelpClose__, 0LL);
      if ( !Instance )
        goto LABEL_18;
      v19 = 20;
      break;
    case 5:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v16 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v23, v24, v25);
      System_Action___ctor(v16, (Il2CppObject *)this, (intptr_t)Method_ShopRootComponent_OnClickHelpClose__, 0LL);
      if ( !Instance )
        goto LABEL_18;
      v19 = 47;
      break;
    case 6:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v16 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v26, v27, v28);
      System_Action___ctor(v16, (Il2CppObject *)this, (intptr_t)Method_ShopRootComponent_OnClickHelpClose__, 0LL);
      if ( !Instance )
        goto LABEL_18;
      v19 = 19;
      break;
    default:
      if ( state != 20 )
        return;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v16 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v13, v14, v15);
      System_Action___ctor(v16, (Il2CppObject *)this, (intptr_t)Method_ShopRootComponent_OnClickHelpClose__, 0LL);
      if ( !Instance )
LABEL_18:
        sub_1BCAA3C(v17, v18);
      v19 = 1029;
      break;
  }
  CommonUI__OpenTutorialImageDialog_30792208((CommonUI_o *)Instance, v19, -1, v16, 0LL, 0LL, 0LL);
  v30 = this->fields.state;
  if ( !ShopRootConstants_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo, v29);
  HelpSaveKey = ShopRootConstants__GetHelpSaveKey(v30, v29);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  Il2CppObject *Master_object; // x0
  __int64 v18; // x1
  System_String_o *LimitCountSealedDialogMessage; // x0
  __int64 v20; // x1
  SummonInfoDlgComponent_o *limitCountSealInfoDlg; // x21
  System_String_o *v22; // x20
  System_String_o *v23; // x22
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  SummonInfoDlgComponent_CallbackFunc_o *v27; // x23

  if ( (byte_4B12798 & 1) == 0 )
  {
    sub_1BCA7E0(&SummonInfoDlgComponent_CallbackFunc_TypeInfo, *(_QWORD *)&svtId, *(_QWORD *)&limitCount);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v7, v8);
    sub_1BCA7E0(&DataManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_ShopRootComponent_EndLimitCountSealInfoDialog__, v13, v14);
    sub_1BCA7E0(&StringLiteral_8373/*"LIMIT_COUNT_SEALED_TITLE"*/, v15, v16);
    byte_4B12798 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&svtId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !Master_object )
    goto LABEL_10;
  LimitCountSealedDialogMessage = ServantLimitImageMaster__GetLimitCountSealedDialogMessage(
                                    (ServantLimitImageMaster_o *)Master_object,
                                    svtId,
                                    limitCount,
                                    0LL);
  limitCountSealInfoDlg = this->fields.limitCountSealInfoDlg;
  v22 = LimitCountSealedDialogMessage;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v20);
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_8373/*"LIMIT_COUNT_SEALED_TITLE"*/, 0LL);
  v27 = (SummonInfoDlgComponent_CallbackFunc_o *)sub_1BCAA2C(
                                                   SummonInfoDlgComponent_CallbackFunc_TypeInfo,
                                                   v24,
                                                   v25,
                                                   v26);
  SummonInfoDlgComponent_CallbackFunc___ctor(
    v27,
    (Il2CppObject *)this,
    (intptr_t)Method_ShopRootComponent_EndLimitCountSealInfoDialog__,
    0LL);
  if ( !limitCountSealInfoDlg )
LABEL_10:
    sub_1BCAA3C(Master_object, v18);
  SummonInfoDlgComponent__OpenInfoMessageDlg(limitCountSealInfoDlg, v23, v22, v27, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopRootComponent__OpenStonePurchaseMenu(
        ShopRootComponent_o *this,
        int32_t state,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  Il2CppObject *Instance; // x20
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  StonePurchaseMenu_CallbackFunc_o *v17; // x21
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  System_Action_o *v21; // x22
  __int64 v22; // x0
  __int64 v23; // x1

  if ( (byte_4B127C4 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&state, method);
    sub_1BCA7E0(&StonePurchaseMenu_CallbackFunc_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_ShopRootComponent_CloseStonePurchaseMenu__, v7, v8);
    sub_1BCA7E0(&Method_ShopRootComponent_RefreshInfo__, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11, v12);
    byte_4B127C4 = 1;
  }
  if ( state == 10 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v17 = (StonePurchaseMenu_CallbackFunc_o *)sub_1BCAA2C(StonePurchaseMenu_CallbackFunc_TypeInfo, v14, v15, v16);
    StonePurchaseMenu_CallbackFunc___ctor(
      v17,
      (Il2CppObject *)this,
      Method_ShopRootComponent_CloseStonePurchaseMenu__,
      0LL);
    v21 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v18, v19, v20);
    System_Action___ctor(v21, (Il2CppObject *)this, Method_ShopRootComponent_RefreshInfo__, 0LL);
    if ( !Instance )
      sub_1BCAA3C(v22, v23);
    CommonUI__OpenStonePurchaseMenu((CommonUI_o *)Instance, v17, v21, 0LL);
  }
}


void __fastcall ShopRootComponent__OpenStorageDetailCheck(ShopRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ShopRootComponent_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  struct ShopSceneListViewControlHelper_o *listViewHelper; // x8
  ShopBuyItemListViewItem_o *Item; // x20
  int32_t KindByShopState; // w0
  BuyStorageConfirmDialogComponent_o *buyStorageConfirmDialog; // x22
  int32_t buyCount; // w21
  int32_t v11; // w23
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  System_Action_int__o *v15; // x24

  v3 = this;
  if ( (byte_4B127BC & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_int__TypeInfo, method, v2);
    this = (ShopRootComponent_o *)sub_1BCA7E0(&Method_ShopRootComponent_CloseStorageDetailCheckConfirm__, v4, v5);
    byte_4B127BC = 1;
  }
  listViewHelper = v3->fields.listViewHelper;
  if ( !listViewHelper )
    goto LABEL_7;
  this = (ShopRootComponent_o *)listViewHelper->fields.buyItemListViewManager;
  if ( !this
    || (Item = ShopBuyItemListViewManager__GetItem(
                 (ShopBuyItemListViewManager_o *)this,
                 v3->fields.selectedItemIndex,
                 0LL),
        KindByShopState = BuyStorageConfirmDialogComponent__GetKindByShopState(v3->fields.state, 0LL),
        buyStorageConfirmDialog = v3->fields.buyStorageConfirmDialog,
        buyCount = v3->fields.buyCount,
        v11 = KindByShopState,
        v15 = (System_Action_int__o *)sub_1BCAA2C(System_Action_int__TypeInfo, v12, v13, v14),
        System_Action_int____ctor(
          v15,
          (Il2CppObject *)v3,
          Method_ShopRootComponent_CloseStorageDetailCheckConfirm__,
          0LL),
        !buyStorageConfirmDialog) )
  {
LABEL_7:
    sub_1BCAA3C(this, method);
  }
  BuyStorageConfirmDialogComponent__Open(buyStorageConfirmDialog, v11, Item, buyCount, v15, 0LL);
}


void __fastcall ShopRootComponent__PlayLvExceedItemReleaseEffect(
        ShopRootComponent_o *this,
        ShopBuyItemListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x20
  BalanceConfig_c *v19; // x0
  ShopBuyItemListViewItem_o *v20; // x1
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  ShopBuyItemListViewItem_o **v27; // x22
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  __int64 v34; // x2
  const MethodInfo *v35; // x3
  __int64 v36; // x8
  __int64 v37; // x8
  int v38; // w21
  QuestRewardInfo_o *v39; // x22
  _QWORD *v40; // x21
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  __int64 v47; // x8
  __int64 v48; // x8
  __int64 v49; // x8
  _DWORD *v50; // x9
  int32_t buyCount; // w8
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x3
  Il2CppObject *Instance; // x19
  AvalonSceneManager_c *v56; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v58; // x21

  if ( (byte_4B127A3 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, item, method);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&BalanceConfig_TypeInfo, v8, v9);
    sub_1BCA7E0(&QuestRewardInfo_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12, v13);
    sub_1BCA7E0(&Method_ShopRootComponent___c__DisplayClass100_0__PlayLvExceedItemReleaseEffect_b__0__, v14, v15);
    sub_1BCA7E0(&ShopRootComponent___c__DisplayClass100_0_TypeInfo, v16, v17);
    byte_4B127A3 = 1;
  }
  v18 = sub_1BCAA2C(ShopRootComponent___c__DisplayClass100_0_TypeInfo, item, method, v3);
  System_Object___ctor((Il2CppObject *)v18, 0LL);
  if ( !v18 )
    goto LABEL_22;
  *(_QWORD *)(v18 + 24) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v18 + 24), (int64_t)this, v21, v22, v23, v24, v25, v26);
  *(_QWORD *)(v18 + 32) = item;
  v27 = (ShopBuyItemListViewItem_o **)(v18 + 32);
  sub_1BCA784((PartyOrganizationUtility_o *)(v18 + 32), (int64_t)item, v28, v29, v30, v31, v32, v33);
  if ( !*(_QWORD *)(v18 + 32) )
    goto LABEL_22;
  v36 = *(_QWORD *)(*(_QWORD *)(v18 + 32) + 112LL);
  if ( !v36 )
    goto LABEL_22;
  v37 = *(_QWORD *)(v36 + 56);
  if ( !v37 )
    goto LABEL_22;
  if ( !*(_DWORD *)(v37 + 24) )
LABEL_23:
    sub_1BCAA44(v19, v20);
  v38 = *(_DWORD *)(v37 + 32);
  v19 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v20);
    v19 = BalanceConfig_TypeInfo;
  }
  if ( v38 == v19->static_fields->LvExceedItemId )
  {
    v39 = (QuestRewardInfo_o *)sub_1BCAA2C(QuestRewardInfo_TypeInfo, v20, v34, v35);
    QuestRewardInfo___ctor(v39, 0LL);
    *(_QWORD *)(v18 + 16) = v39;
    v40 = (_QWORD *)(v18 + 16);
    sub_1BCA784((PartyOrganizationUtility_o *)(v18 + 16), (int64_t)v39, v41, v42, v43, v44, v45, v46);
    v47 = *(_QWORD *)(v18 + 32);
    if ( !v47 )
      goto LABEL_22;
    v48 = *(_QWORD *)(v47 + 112);
    if ( !v48 )
      goto LABEL_22;
    v49 = *(_QWORD *)(v48 + 56);
    if ( !v49 )
      goto LABEL_22;
    if ( *(_DWORD *)(v49 + 24) )
    {
      v50 = (_DWORD *)*v40;
      if ( *v40 )
      {
        v50[5] = *(_DWORD *)(v49 + 32);
        buyCount = this->fields.buyCount;
        v50[4] = 2;
        v50[6] = buyCount;
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v56 = AvalonSceneManager_TypeInfo;
        if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v52);
          v56 = AvalonSceneManager_TypeInfo;
        }
        DEFAULT_FADE_TIME = v56->static_fields->DEFAULT_FADE_TIME;
        v58 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v52, v53, v54);
        System_Action___ctor(
          v58,
          (Il2CppObject *)v18,
          Method_ShopRootComponent___c__DisplayClass100_0__PlayLvExceedItemReleaseEffect_b__0__,
          0LL);
        if ( Instance )
        {
          CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v58, 0LL);
          return;
        }
      }
LABEL_22:
      sub_1BCAA3C(v19, v20);
    }
    goto LABEL_23;
  }
  v20 = *v27;
  if ( !*v27 )
    goto LABEL_22;
  ShopRootComponent__ShowNormalItemDialog(this, v20, v20->fields._Shop_k__BackingField, v35);
}


void __fastcall ShopRootComponent__PlayServantCostumeReleaseEffect(
        ShopRootComponent_o *this,
        ShopEntity_o *shopEntity,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x20
  __int64 v15; // x0
  __int64 v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  const MethodInfo *v29; // x2
  Il2CppObject *Instance; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  AvalonSceneManager_c *v34; // x8
  CommonUI_o *v35; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v37; // x21

  if ( (byte_4B127A9 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, shopEntity, method);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    sub_1BCA7E0(&Method_ShopRootComponent___c__DisplayClass107_0__PlayServantCostumeReleaseEffect_b__0__, v10, v11);
    sub_1BCA7E0(&ShopRootComponent___c__DisplayClass107_0_TypeInfo, v12, v13);
    byte_4B127A9 = 1;
  }
  v14 = sub_1BCAA2C(ShopRootComponent___c__DisplayClass107_0_TypeInfo, shopEntity, method, v3);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_8;
  *(_QWORD *)(v14 + 16) = shopEntity;
  sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 16), (int64_t)shopEntity, v17, v18, v19, v20, v21, v22);
  *(_QWORD *)(v14 + 24) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 24), (int64_t)this, v23, v24, v25, v26, v27, v28);
  ShopRootComponent__SetActionBG(this, 1, v29);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v34 = AvalonSceneManager_TypeInfo;
  v35 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v31);
    v34 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v34->static_fields->DEFAULT_FADE_TIME;
  v37 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v31, v32, v33);
  System_Action___ctor(
    v37,
    (Il2CppObject *)v14,
    Method_ShopRootComponent___c__DisplayClass107_0__PlayServantCostumeReleaseEffect_b__0__,
    0LL);
  if ( !v35 )
LABEL_8:
    sub_1BCAA3C(v15, v16);
  CommonUI__maskFadeout(v35, 1, DEFAULT_FADE_TIME, v37, 0LL);
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
    sub_1BCAA3C(BackVoiceMasterKey, v6);
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
    sub_1BCAA3C(EnterVoiceMasterKey, v6);
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
  ShopSceneListViewControlHelper__SetListViewOnSceneQuit((ShopSceneListViewControlHelper_o *)standFigureBack, method);
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
    sub_1BCAA3C(standFigureBack, method);
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

  if ( (byte_4B127B4 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_22465/*"ok"*/, result, method);
    byte_4B127B4 = 1;
  }
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_22465/*"ok"*/, 0LL) )
  {
    listViewHelper = this->fields.listViewHelper;
    this->fields.inputState = 4;
    if ( !listViewHelper )
      sub_1BCAA3C(0LL, v5);
    ShopSceneListViewControlHelper__SetListViewOnQuitHelp(listViewHelper, this->fields.state, v6);
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

  if ( (byte_4B12791 & 1) == 0 )
  {
    sub_1BCA7E0(&ShopBuyItemListViewManager_TypeInfo, *(_QWORD *)&state, method);
    byte_4B12791 = 1;
  }
  currencyInfoController = this->fields.currencyInfoController;
  if ( !ShopBuyItemListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ShopBuyItemListViewManager_TypeInfo, *(_QWORD *)&state);
  CurrencyKind = ShopBuyItemListViewManager__GetCurrencyKind(state, 0LL);
  if ( !currencyInfoController )
    sub_1BCAA3C(CurrencyKind, v7);
  ShopCurrencyInfoController__RefreshCurrencyInfo(currencyInfoController, CurrencyKind, state, 0LL);
}


void __fastcall ShopRootComponent__RefreshInfo(ShopRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  UserGameEntity_o *SelfUserGame; // x20
  int64_t Instance; // x0
  __int64 v24; // x1
  int32_t *v25; // x21
  UILabel_o *stoneInfoLabel; // x22
  int32_t stone; // w23
  UILabel_o *manaInfoLabel; // x22
  UILabel_o *rarePriInfoLabel; // x22
  Il2CppObject *MasterData_object; // x0
  __int64 v31; // x1
  UILabel_o *stoneFragmentsInfoLabel; // x22
  UserItemMaster_o *v33; // x20
  UILabel_o *anonymousInfoLabel; // x22
  int64_t UserId; // x0
  UILabel_o *grailFragmentsInfoLabel; // x22
  int64_t v37; // x0
  __int64 v38; // x1
  BalanceConfig_c *v39; // x8
  int64_t v40; // x23
  UILabel_o *apSeedInfoLabel; // x22
  int64_t v42; // x0
  const MethodInfo *v43; // x1
  __int64 v44; // x1
  UISprite_o *apSeedIcon; // x22
  char v46; // w22
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v48; // x0
  UnityEngine_GameObject_o *v49; // x0
  UnityEngine_GameObject_o *v50; // x0
  __int64 v51; // x1
  UILabel_o *purePriInfo2Label; // x22
  int64_t v53; // x0
  __int64 v54; // x1
  BalanceConfig_c *v55; // x8
  int64_t v56; // x23
  int32_t v57; // w23
  __int64 v58; // x1
  UISprite_o *purePriInfo2; // x22
  int64_t v60; // x0
  UILabel_o *purePriShopResetInfoLabel; // x21
  __int64 v62; // x1
  UILabel_o *purePriInfoLabel; // x21
  int64_t v64; // x0
  __int64 v65; // x1
  BalanceConfig_c *v66; // x8
  int64_t v67; // x22
  int32_t v68; // w22
  __int64 v69; // x1
  UISprite_o *purePriInfo; // x21
  UnityEngine_GameObject_o *v71; // x0
  UnityEngine_GameObject_o *v72; // x0
  UnityEngine_GameObject_o *v73; // x0
  UnityEngine_GameObject_o *v74; // x0
  __int64 v75; // x1
  UILabel_o *revivalItemInfoLabel; // x21
  int64_t v77; // x0
  __int64 v78; // x1
  BalanceConfig_c *v79; // x8
  int64_t v80; // x22
  int32_t v81; // w20
  __int64 v82; // x1
  UISprite_o *revivalItemInfo; // x20
  UnityEngine_GameObject_o *v84; // x0
  UnityEngine_GameObject_o *v85; // x0
  UnityEngine_GameObject_o *v86; // x0
  UnityEngine_GameObject_o *v87; // x0
  const MethodInfo *v88; // x2

  if ( (byte_4B1278F & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, method, v2);
    sub_1BCA7E0(&BalanceConfig_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ItemMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserItemMaster___, v8, v9);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15);
    sub_1BCA7E0(&StringLiteral_20470/*"img_bg_evocation"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_20475/*"img_bg_pureprism_itemstock_resetticket"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_20474/*"img_bg_pp"*/, v20, v21);
    byte_4B1278F = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_80;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !SelfUserGame )
    goto LABEL_80;
  v25 = (int32_t *)Instance;
  stoneInfoLabel = this->fields.stoneInfoLabel;
  stone = SelfUserGame->fields.stone;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v24);
  Instance = (int64_t)LocalizationManager__GetNumberFormat(stone, 0LL);
  if ( !stoneInfoLabel )
    goto LABEL_80;
  UILabel__set_text(stoneInfoLabel, (System_String_o *)Instance, 0LL);
  manaInfoLabel = this->fields.manaInfoLabel;
  Instance = (int64_t)LocalizationManager__GetNumberFormat(SelfUserGame->fields.mana, 0LL);
  if ( !manaInfoLabel )
    goto LABEL_80;
  UILabel__set_text(manaInfoLabel, (System_String_o *)Instance, 0LL);
  rarePriInfoLabel = this->fields.rarePriInfoLabel;
  Instance = (int64_t)LocalizationManager__GetNumberFormat(SelfUserGame->fields.rarePri, 0LL);
  if ( !rarePriInfoLabel )
    goto LABEL_80;
  UILabel__set_text(rarePriInfoLabel, (System_String_o *)Instance, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_80;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserItemMaster___);
  stoneFragmentsInfoLabel = this->fields.stoneFragmentsInfoLabel;
  v33 = (UserItemMaster_o *)MasterData_object;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v31);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !v25 )
    goto LABEL_80;
  if ( !v33 )
    goto LABEL_80;
  Instance = (int64_t)UserItemMaster__GetEntityDefinitely(v33, Instance, v25[22], 0LL);
  if ( !Instance )
    goto LABEL_80;
  Instance = (int64_t)LocalizationManager__GetNumberFormat(*(_DWORD *)(Instance + 28), 0LL);
  if ( !stoneFragmentsInfoLabel )
    goto LABEL_80;
  UILabel__set_text(stoneFragmentsInfoLabel, (System_String_o *)Instance, 0LL);
  anonymousInfoLabel = this->fields.anonymousInfoLabel;
  UserId = NetworkManager__get_UserId(0LL);
  Instance = (int64_t)UserItemMaster__GetEntityDefinitely(v33, UserId, v25[23], 0LL);
  if ( !Instance )
    goto LABEL_80;
  Instance = (int64_t)LocalizationManager__GetNumberFormat(*(_DWORD *)(Instance + 28), 0LL);
  if ( !anonymousInfoLabel )
    goto LABEL_80;
  UILabel__set_text(anonymousInfoLabel, (System_String_o *)Instance, 0LL);
  grailFragmentsInfoLabel = this->fields.grailFragmentsInfoLabel;
  v37 = NetworkManager__get_UserId(0LL);
  v39 = BalanceConfig_TypeInfo;
  v40 = v37;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v38);
    v39 = BalanceConfig_TypeInfo;
  }
  Instance = (int64_t)UserItemMaster__GetEntityDefinitely(v33, v40, v39->static_fields->LvExceedDewDropItemId, 0LL);
  if ( !Instance )
    goto LABEL_80;
  Instance = (int64_t)LocalizationManager__GetNumberFormat(*(_DWORD *)(Instance + 28), 0LL);
  if ( !grailFragmentsInfoLabel )
    goto LABEL_80;
  UILabel__set_text(grailFragmentsInfoLabel, (System_String_o *)Instance, 0LL);
  apSeedInfoLabel = this->fields.apSeedInfoLabel;
  v42 = NetworkManager__get_UserId(0LL);
  Instance = (int64_t)UserItemMaster__GetEntityDefinitely(
                        v33,
                        v42,
                        BalanceConfig_TypeInfo->static_fields->ApSeedItemId,
                        0LL);
  if ( !Instance )
    goto LABEL_80;
  Instance = (int64_t)LocalizationManager__GetNumberFormat(*(_DWORD *)(Instance + 28), 0LL);
  if ( !apSeedInfoLabel )
    goto LABEL_80;
  UILabel__set_text(apSeedInfoLabel, (System_String_o *)Instance, 0LL);
  ShopRootComponent__UpdateApLabel(this, v43);
  apSeedIcon = this->fields.apSeedIcon;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v44);
  AtlasManager__SetItem(apSeedIcon, 103, 0LL);
  AtlasManager__SetItem(this->fields.apIcon, 47, 0LL);
  Instance = ConstantMaster__IsFLAG20241004(0LL);
  if ( !this->fields.purePriInfo )
    goto LABEL_80;
  v46 = Instance;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.purePriInfo, 0LL);
  if ( !Instance )
    goto LABEL_80;
  if ( (v46 & 1) != 0 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
    Instance = (int64_t)this->fields.manaInfoLabel;
    if ( Instance )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      Instance = (int64_t)GameObjectExtensions__GetParent(gameObject, 0LL);
      if ( Instance )
      {
        v48 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
        GameObjectExtensions__SetLocalPositionX(v48, 0.0, 0LL);
        Instance = (int64_t)this->fields.rarePriInfoLabel;
        if ( Instance )
        {
          v49 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
          Instance = (int64_t)GameObjectExtensions__GetParent(v49, 0LL);
          if ( Instance )
          {
            v50 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
            GameObjectExtensions__SetLocalPositionX(v50, -179.0, 0LL);
            purePriInfo2Label = this->fields.purePriInfo2Label;
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v51);
            v53 = NetworkManager__get_UserId(0LL);
            v55 = BalanceConfig_TypeInfo;
            v56 = v53;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v54);
              v55 = BalanceConfig_TypeInfo;
            }
            Instance = (int64_t)UserItemMaster__GetEntityDefinitely(v33, v56, v55->static_fields->PurePriItemId, 0LL);
            if ( Instance )
            {
              v57 = *(_DWORD *)(Instance + 28);
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v24);
              Instance = (int64_t)LocalizationManager__GetNumberFormat(v57, 0LL);
              if ( purePriInfo2Label )
              {
                UILabel__set_text(purePriInfo2Label, (System_String_o *)Instance, 0LL);
                purePriInfo2 = this->fields.purePriInfo2;
                if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v58);
                AtlasManager__SetShopBanner_38576124(purePriInfo2, (System_String_o *)StringLiteral_20474/*"img_bg_pp"*/, 0LL);
                v60 = NetworkManager__get_UserId(0LL);
                Instance = (int64_t)UserItemMaster__GetEntityDefinitely(v33, v60, v25[24], 0LL);
                if ( Instance )
                {
                  purePriShopResetInfoLabel = this->fields.purePriShopResetInfoLabel;
                  Instance = (int64_t)LocalizationManager__GetNumberFormat(*(_DWORD *)(Instance + 28), 0LL);
                  if ( purePriShopResetInfoLabel )
                  {
                    UILabel__set_text(purePriShopResetInfoLabel, (System_String_o *)Instance, 0LL);
                    AtlasManager__SetShopBanner_38576124(
                      this->fields.purePriShopResetInfo,
                      (System_String_o *)StringLiteral_20475/*"img_bg_pureprism_itemstock_resetticket"*/,
                      0LL);
                    goto LABEL_62;
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_80:
    sub_1BCAA3C(Instance, v24);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  purePriInfoLabel = this->fields.purePriInfoLabel;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v62);
  v64 = NetworkManager__get_UserId(0LL);
  v66 = BalanceConfig_TypeInfo;
  v67 = v64;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v65);
    v66 = BalanceConfig_TypeInfo;
  }
  Instance = (int64_t)UserItemMaster__GetEntityDefinitely(v33, v67, v66->static_fields->PurePriItemId, 0LL);
  if ( !Instance )
    goto LABEL_80;
  v68 = *(_DWORD *)(Instance + 28);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v24);
  Instance = (int64_t)LocalizationManager__GetNumberFormat(v68, 0LL);
  if ( !purePriInfoLabel )
    goto LABEL_80;
  UILabel__set_text(purePriInfoLabel, (System_String_o *)Instance, 0LL);
  purePriInfo = this->fields.purePriInfo;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v69);
  AtlasManager__SetShopBanner_38576124(purePriInfo, (System_String_o *)StringLiteral_20474/*"img_bg_pp"*/, 0LL);
  Instance = (int64_t)this->fields.manaInfoLabel;
  if ( !Instance )
    goto LABEL_80;
  v71 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  Instance = (int64_t)GameObjectExtensions__GetParent(v71, 0LL);
  if ( !Instance )
    goto LABEL_80;
  v72 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  GameObjectExtensions__SetLocalPositionX(v72, 85.0, 0LL);
  Instance = (int64_t)this->fields.rarePriInfoLabel;
  if ( !Instance )
    goto LABEL_80;
  v73 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  Instance = (int64_t)GameObjectExtensions__GetParent(v73, 0LL);
  if ( !Instance )
    goto LABEL_80;
  v74 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  GameObjectExtensions__SetLocalPositionX(v74, -273.0, 0LL);
LABEL_62:
  Instance = (int64_t)this->fields.revivalItemInfo;
  if ( !Instance )
    goto LABEL_80;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_80;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  revivalItemInfoLabel = this->fields.revivalItemInfoLabel;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v75);
  v77 = NetworkManager__get_UserId(0LL);
  v79 = BalanceConfig_TypeInfo;
  v80 = v77;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v78);
    v79 = BalanceConfig_TypeInfo;
  }
  Instance = (int64_t)UserItemMaster__GetEntityDefinitely(v33, v80, v79->static_fields->RevivalItemId, 0LL);
  if ( !Instance )
    goto LABEL_80;
  v81 = *(_DWORD *)(Instance + 28);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v24);
  Instance = (int64_t)LocalizationManager__GetNumberFormat(v81, 0LL);
  if ( !revivalItemInfoLabel )
    goto LABEL_80;
  UILabel__set_text(revivalItemInfoLabel, (System_String_o *)Instance, 0LL);
  revivalItemInfo = this->fields.revivalItemInfo;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v82);
  AtlasManager__SetShopBanner_38576124(revivalItemInfo, (System_String_o *)StringLiteral_20470/*"img_bg_evocation"*/, 0LL);
  Instance = (int64_t)this->fields.anonymousInfoLabel;
  if ( !Instance )
    goto LABEL_80;
  v84 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  Instance = (int64_t)GameObjectExtensions__GetParent(v84, 0LL);
  if ( !Instance )
    goto LABEL_80;
  v85 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  GameObjectExtensions__SetLocalPositionX(v85, -94.0, 0LL);
  Instance = (int64_t)this->fields.grailFragmentsInfoLabel;
  if ( !Instance )
    goto LABEL_80;
  v86 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  Instance = (int64_t)GameObjectExtensions__GetParent(v86, 0LL);
  if ( !Instance )
    goto LABEL_80;
  v87 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  GameObjectExtensions__SetLocalPositionX(v87, -273.0, 0LL);
  Instance = (int64_t)this->fields.giftButtonControl;
  if ( !Instance )
    goto LABEL_80;
  GiftButtonCtrl__InvalidateGiftInfo((GiftButtonCtrl_o *)Instance, 0LL);
  ShopRootComponent__RefreshCurrencyInfo(this, this->fields.state, v88);
}


void __fastcall ShopRootComponent__RequestEnd(ShopRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x2
  __int64 v9; // x1
  ServantSellConfirmMenu_o *servantSellConfirmMenu; // x0
  ServantSellConfirmMenu_o *v11; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  System_Action_int__o *v15; // x21

  if ( (byte_4B127A1 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_int__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_ShopRootComponent__RequestEnd_b__98_0__, v4, v5);
    byte_4B127A1 = 1;
  }
  this->fields.inputState = 3;
  ShopRootComponent__RefreshInfo(this, method);
  ShopRootComponent__CloseItemConfirm(this, v6);
  ShopRootComponent__CloseSellServantConfirm(this, v7);
  ShopRootComponent__SetActionBG(this, 0, v8);
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
        v11 = this->fields.servantSellConfirmMenu;
        v15 = (System_Action_int__o *)sub_1BCAA2C(System_Action_int__TypeInfo, v12, v13, v14);
        System_Action_int____ctor(v15, (Il2CppObject *)this, Method_ShopRootComponent__RequestEnd_b__98_0__, 0LL);
        if ( v11 )
        {
          ServantSellConfirmMenu__OpenCommandCodeRemoveResult(v11, v15, 0LL);
          return;
        }
      }
LABEL_10:
      sub_1BCAA3C(servantSellConfirmMenu, v9);
    }
  }
}


void __fastcall ShopRootComponent__RequestSellServant(ShopRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  NetworkManager_ResultCallbackFunc_o *v13; // x20
  __int64 v14; // x1
  Il2CppObject *Request_object; // x0
  __int64 v16; // x1

  if ( (byte_4B127AC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_NetworkManager_getRequest_SellServantRequest___, method, v2);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_ShopRootComponent_EndRequestSellServant__, v9, v10);
    sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, v11, v12);
    byte_4B127AC = 1;
  }
  if ( this->fields.selectedServantIds )
  {
    v13 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(NetworkManager_ResultCallbackFunc_TypeInfo, method, v2, v3);
    NetworkManager_ResultCallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      Method_ShopRootComponent_EndRequestSellServant__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v14);
    Request_object = NetworkManager__getRequest_object_(
                       v13,
                       (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_SellServantRequest___);
    if ( !Request_object )
      sub_1BCAA3C(0LL, v16);
    SellServantRequest__beginRequest(
      (SellServantRequest_o *)Request_object,
      this->fields.selectedServantIds,
      this->fields.selectedCommandCodeIds,
      0LL);
  }
  else
  {
    ShopRootComponent__EndRequestSellServant(this, (System_String_o *)StringLiteral_22292/*"ng"*/, v2);
  }
}


void __fastcall ShopRootComponent__RequestShop(ShopRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ShopRootComponent_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct ShopSceneListViewControlHelper_o *listViewHelper; // x8
  ShopBuyItemListViewItem_o *Item; // x0
  const MethodInfo *v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  ShopBuyItemListViewItem_o *v15; // x20
  NetworkManager_ResultCallbackFunc_o *v16; // x21
  __int64 v17; // x1
  struct ShopEntity_o *Shop_k__BackingField; // x8

  v3 = this;
  if ( (byte_4B127A0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_NetworkManager_getRequest_PurchaseRequest___, method, v2);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v6, v7);
    this = (ShopRootComponent_o *)sub_1BCA7E0(&Method_ShopRootComponent_EndRequestShop__, v8, v9);
    byte_4B127A0 = 1;
  }
  listViewHelper = v3->fields.listViewHelper;
  if ( !listViewHelper )
    goto LABEL_13;
  this = (ShopRootComponent_o *)listViewHelper->fields.buyItemListViewManager;
  if ( !this )
    goto LABEL_13;
  Item = ShopBuyItemListViewManager__GetItem((ShopBuyItemListViewManager_o *)this, v3->fields.selectedItemIndex, 0LL);
  if ( Item )
  {
    v15 = Item;
    if ( Item->fields._Shop_k__BackingField )
    {
      v16 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(
                                                     NetworkManager_ResultCallbackFunc_TypeInfo,
                                                     v12,
                                                     v13,
                                                     v14);
      NetworkManager_ResultCallbackFunc___ctor(v16, (Il2CppObject *)v3, Method_ShopRootComponent_EndRequestShop__, 0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v17);
      this = (ShopRootComponent_o *)NetworkManager__getRequest_object_(
                                      v16,
                                      (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_PurchaseRequest___);
      Shop_k__BackingField = v15->fields._Shop_k__BackingField;
      if ( Shop_k__BackingField && this )
      {
        PurchaseRequest__beginRequest(
          (PurchaseRequest_o *)this,
          Shop_k__BackingField->fields.id,
          v3->fields.buyCount,
          0,
          0LL);
        return;
      }
LABEL_13:
      sub_1BCAA3C(this, method);
    }
  }
  ShopRootComponent__RequestEnd(v3, v12);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  struct ShopSceneListViewControlHelper_o *listViewHelper; // x8
  ShopBuyItemListViewItem_o *Item; // x0
  const MethodInfo *v31; // x2
  const MethodInfo *v32; // x4
  ShopBuyItemListViewItem_o *v33; // x22
  ServantLimitImageMaster_o *v34; // x23
  bool v35; // w24
  __int64 v36; // x1
  int32_t TargetId; // w0
  const MethodInfo *v38; // x3
  Il2CppObject *Master_object; // x23
  Il2CppObject *Entity; // x23
  __int64 v41; // x1
  ShopRootComponent_o *v42; // x20
  Il2CppObject *v43; // x0
  System_String_o *v44; // x0
  ShopRootComponent_o *v45; // x21
  Il2CppObject *Name; // x0
  System_String_o *v47; // x0
  SummonInfoDlgComponent_o *limitCountSealInfoDlg; // x21
  System_String_o *v49; // x22
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  SummonInfoDlgComponent_CallbackFunc_o *v53; // x23
  int klass_high; // [xsp+Ch] [xbp-34h] BYREF

  v5 = index;
  v6 = this;
  if ( (byte_4B12796 & 1) == 0 )
  {
    sub_1BCA7E0(&SummonInfoDlgComponent_CallbackFunc_TypeInfo, *(_QWORD *)&index, isBulk);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMaster_CombineLimitReleaseMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantMaster___, v11, v12);
    sub_1BCA7E0(&DataManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v15, v16);
    sub_1BCA7E0(&int_TypeInfo, v17, v18);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_ShopRootComponent_EndLimitCountSealInfoDialog__, v21, v22);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23, v24);
    sub_1BCA7E0(&StringLiteral_3713/*"COMBINE_LIMIT_SEALED_TITLE"*/, v25, v26);
    this = (ShopRootComponent_o *)sub_1BCA7E0(&StringLiteral_3712/*"COMBINE_LIMIT_SEALED_MESSAGE_{0}"*/, v27, v28);
    byte_4B12796 = 1;
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
        v33 = Item;
        if ( v6->fields.state != 6 || ShopRootComponent__GetShopItemBuyNum((ShopRootComponent_o *)Item, Item, v31) > 0 )
          goto LABEL_8;
        this = (ShopRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( this )
        {
          this = (ShopRootComponent_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
          if ( v33 )
          {
            v34 = (ServantLimitImageMaster_o *)this;
            this = (ShopRootComponent_o *)ShopBuyItemListViewItem__get_TargetId(v33, 0LL);
            if ( v34 )
            {
              v35 = isBulk;
              if ( ServantLimitImageMaster__IsServantLimitCountSeal(v34, (int32_t)this, 4, 0LL) )
              {
                v6->fields.limitCountSealInfoIndex = v5;
                v6->fields.limitCountSealInfoBulk = v35;
                TargetId = ShopBuyItemListViewItem__get_TargetId(v33, 0LL);
                ShopRootComponent__OpenLimitCountSealInfoDialog(v6, TargetId, 0, v38);
                return;
              }
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v36);
              Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantMaster___);
              this = (ShopRootComponent_o *)ShopBuyItemListViewItem__get_TargetId(v33, 0LL);
              if ( Master_object )
              {
                Entity = DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                           (int32_t)this,
                           (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                this = (ShopRootComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_CombineLimitReleaseMaster___);
                *(_QWORD *)&index = Entity ? HIDWORD(Entity[7].klass) : 0xFFFFFFFFLL;
                if ( this )
                {
                  if ( !CombineLimitReleaseMaster__IsExistSealedLimitCount(
                          (CombineLimitReleaseMaster_o *)this,
                          index,
                          0LL) )
                  {
LABEL_8:
                    ShopRootComponent__OpenConfirmMenu(v6, v6->fields.state, v33, isBulk, v32);
                    v6->fields.inputState = 2;
                    return;
                  }
                  v6->fields.limitCountSealInfoIndex = v5;
                  v6->fields.limitCountSealInfoBulk = v35;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v41);
                  this = (ShopRootComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3713/*"COMBINE_LIMIT_SEALED_TITLE"*/, 0LL);
                  if ( Entity )
                  {
                    v42 = this;
                    klass_high = HIDWORD(Entity[7].klass);
                    v43 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &klass_high);
                    v44 = System_String__Format((System_String_o *)StringLiteral_3712/*"COMBINE_LIMIT_SEALED_MESSAGE_{0}"*/, v43, 0LL);
                    this = (ShopRootComponent_o *)LocalizationManager__Get(v44, 0LL);
                    if ( v33->fields._Shop_k__BackingField )
                    {
                      v45 = this;
                      Name = (Il2CppObject *)ShopEntity__getName(v33->fields._Shop_k__BackingField, 0LL);
                      v47 = System_String__Format((System_String_o *)v45, Name, 0LL);
                      limitCountSealInfoDlg = v6->fields.limitCountSealInfoDlg;
                      v49 = v47;
                      v53 = (SummonInfoDlgComponent_CallbackFunc_o *)sub_1BCAA2C(
                                                                       SummonInfoDlgComponent_CallbackFunc_TypeInfo,
                                                                       v50,
                                                                       v51,
                                                                       v52);
                      SummonInfoDlgComponent_CallbackFunc___ctor(
                        v53,
                        (Il2CppObject *)v6,
                        (intptr_t)Method_ShopRootComponent_EndLimitCountSealInfoDialog__,
                        0LL);
                      if ( limitCountSealInfoDlg )
                      {
                        SummonInfoDlgComponent__OpenInfoMessageDlg(
                          limitCountSealInfoDlg,
                          (System_String_o *)v42,
                          v49,
                          v53,
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
    sub_1BCAA3C(this, *(_QWORD *)&index);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopRootComponent__SelectMenu(ShopRootComponent_o *this, int32_t state, const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x20
  ShopPlayVoiceComponent_o *shopPlayVoiceComponent; // x0
  const MethodInfo *v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  ShopRootComponent_o *v23; // x0
  const MethodInfo *v24; // x2
  const MethodInfo *v25; // x2
  __int64 v26; // x3
  __int64 v27; // x1
  int32_t v28; // w19
  System_Action_o *v29; // x21
  ShopRootComponent_o *v30; // x0
  const MethodInfo *v31; // x3

  if ( (byte_4B12792 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&state, method);
    sub_1BCA7E0(&CoinRoomUtility_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v8, v9);
    sub_1BCA7E0(&Method_ShopRootComponent___c__DisplayClass81_0__SelectMenu_b__0__, v10, v11);
    sub_1BCA7E0(&ShopRootComponent___c__DisplayClass81_0_TypeInfo, v12, v13);
    byte_4B12792 = 1;
  }
  v14 = sub_1BCAA2C(ShopRootComponent___c__DisplayClass81_0_TypeInfo, *(_QWORD *)&state, method, v3);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_19;
  *(_QWORD *)(v14 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 16), (int64_t)this, v17, v18, v19, v20, v21, v22);
  *(_DWORD *)(v14 + 24) = state;
  if ( ShopRootComponent__CheckServerLimitTime(v23, state, v24) )
  {
    v27 = *(unsigned int *)(v14 + 24);
    if ( (_DWORD)v27 == 17 )
    {
      if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo, v27);
      if ( CoinRoomUtility__IsTargetQuestClear(0LL) )
      {
        shopPlayVoiceComponent = this->fields.shopPlayVoiceComponent;
        if ( shopPlayVoiceComponent )
        {
          ShopPlayVoiceComponent__StopVoice(shopPlayVoiceComponent, v16);
          shopPlayVoiceComponent = (ShopPlayVoiceComponent_o *)this->fields.topListViewManager;
          if ( shopPlayVoiceComponent )
          {
            this->fields.saveScrollBarValue = ShopTopListViewManager__get_currentScrollBarValue(
                                                (ShopTopListViewManager_o *)shopPlayVoiceComponent,
                                                v16);
            shopPlayVoiceComponent = (ShopPlayVoiceComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
            if ( shopPlayVoiceComponent )
            {
              AvalonSceneManager__pushScene((AvalonSceneManager_o *)shopPlayVoiceComponent, 90, 1, 0LL, 0LL);
              return;
            }
          }
        }
LABEL_19:
        sub_1BCAA3C(shopPlayVoiceComponent, v16);
      }
      v27 = *(unsigned int *)(v14 + 24);
    }
    if ( (_DWORD)v27 == 15 )
    {
      v28 = 15;
    }
    else
    {
      ShopRootComponent__PlayVoiceEnter(this, v27, v25);
      v28 = *(_DWORD *)(v14 + 24);
    }
    v29 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v27, v25, v26);
    System_Action___ctor(
      v29,
      (Il2CppObject *)v14,
      Method_ShopRootComponent___c__DisplayClass81_0__SelectMenu_b__0__,
      0LL);
    ShopRootComponent__SetFadeOut(v30, v28, v29, v31);
  }
}


void __fastcall ShopRootComponent__SelectSellServantConfirm(ShopRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x20
  ServantSellMenu_o *servantSellMenu; // x0
  __int64 v13; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  int32_t tabKind; // w21
  struct System_Int64_array *selectedServantIds; // x22
  bool IsSellEquipedCmdCodeLastServant; // w0
  __int64 v23; // x2
  __int64 v24; // x3
  System_Int64_array *v25; // x22
  ServantSellConfirmMenu_o *servantSellConfirmMenu; // x21
  System_Action_int__o *v27; // x19
  struct ServantSellConfirmMenu_o *v28; // x21
  int32_t v29; // w20
  System_Action_int__o *v30; // x22
  ServantSellConfirmMenu_o *v31; // x0
  int32_t v32; // w1
  System_Int64_array *v33; // x2
  System_Int64_array *v34; // x3
  System_Action_int__o *v35; // x4
  struct ServantSellConfirmMenu_o *v36; // x21
  int32_t v37; // w20
  struct System_Int64_array *v38; // x22
  struct System_Int64_array *selectedCommandCodeIds; // x23
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  System_Action_int__o *v43; // x24

  if ( (byte_4B1279F & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_int__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_ShopRootComponent_SellServantConfirm__, v5, v6);
    sub_1BCA7E0(&Method_ShopRootComponent___c__DisplayClass96_0__SelectSellServantConfirm_b__0__, v7, v8);
    sub_1BCA7E0(&ShopRootComponent___c__DisplayClass96_0_TypeInfo, v9, v10);
    byte_4B1279F = 1;
  }
  v11 = sub_1BCAA2C(ShopRootComponent___c__DisplayClass96_0_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_18;
  *(_QWORD *)(v11 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v11 + 16), (int64_t)this, v14, v15, v16, v17, v18, v19);
  if ( this->fields.inputState == 2 )
  {
    servantSellMenu = this->fields.servantSellMenu;
    if ( !servantSellMenu )
      goto LABEL_18;
    tabKind = servantSellMenu->fields.tabKind;
    selectedServantIds = this->fields.selectedServantIds;
    IsSellEquipedCmdCodeLastServant = ServantSellMenu__get_IsSellEquipedCmdCodeLastServant(servantSellMenu, 0LL);
    *(_DWORD *)(v11 + 24) = ServantSellConfirmMenu__GetServantSellConfirmKindOnOpenConfirm(
                              tabKind,
                              selectedServantIds == 0LL,
                              IsSellEquipedCmdCodeLastServant,
                              0LL);
    servantSellMenu = (ServantSellMenu_o *)this->fields.servantSellConfirmMenu;
    if ( !servantSellMenu )
      goto LABEL_18;
    ServantSellConfirmMenu__Init((ServantSellConfirmMenu_o *)servantSellMenu, 0LL);
    v25 = this->fields.selectedServantIds;
    if ( v25 )
    {
      servantSellConfirmMenu = this->fields.servantSellConfirmMenu;
      if ( *(_DWORD *)(v11 + 24) == 4 )
      {
        v27 = (System_Action_int__o *)sub_1BCAA2C(System_Action_int__TypeInfo, v13, v23, v24);
        System_Action_int____ctor(
          v27,
          (Il2CppObject *)v11,
          Method_ShopRootComponent___c__DisplayClass96_0__SelectSellServantConfirm_b__0__,
          0LL);
        if ( servantSellConfirmMenu )
        {
          ServantSellConfirmMenu__OpenSellEquippedLastSvtWarning(servantSellConfirmMenu, 4, v25, v27, 0LL);
          return;
        }
LABEL_18:
        sub_1BCAA3C(servantSellMenu, v13);
      }
      if ( !servantSellConfirmMenu )
        goto LABEL_18;
      ServantSellConfirmMenu__Init(this->fields.servantSellConfirmMenu, 0LL);
      v36 = this->fields.servantSellConfirmMenu;
      v37 = *(_DWORD *)(v11 + 24);
      v38 = this->fields.selectedServantIds;
      selectedCommandCodeIds = this->fields.selectedCommandCodeIds;
      v43 = (System_Action_int__o *)sub_1BCAA2C(System_Action_int__TypeInfo, v40, v41, v42);
      System_Action_int____ctor(v43, (Il2CppObject *)this, Method_ShopRootComponent_SellServantConfirm__, 0LL);
      if ( !v36 )
        goto LABEL_18;
      v31 = v36;
      v32 = v37;
      v33 = v38;
      v34 = selectedCommandCodeIds;
      v35 = v43;
    }
    else
    {
      v28 = this->fields.servantSellConfirmMenu;
      v29 = *(_DWORD *)(v11 + 24);
      v30 = (System_Action_int__o *)sub_1BCAA2C(System_Action_int__TypeInfo, v13, v23, v24);
      System_Action_int____ctor(v30, (Il2CppObject *)this, Method_ShopRootComponent_SellServantConfirm__, 0LL);
      if ( !v28 )
        goto LABEL_18;
      v31 = v28;
      v32 = v29;
      v33 = 0LL;
      v34 = 0LL;
      v35 = v30;
    }
    ServantSellConfirmMenu__Open(v31, v32, v33, v34, v35, 0LL);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  int32_t state; // w8
  struct ShopSceneListViewControlHelper_o *listViewHelper; // x8
  ShopBuyItemListViewItem_o *Item; // x20
  struct ShopEntity_o *Shop_k__BackingField; // x8

  v4 = this;
  if ( (byte_4B1279B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ShopDetailMaster___, *(_QWORD *)&buyCount, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v5, v6);
    sub_1BCA7E0(&ShopRootComponent_TypeInfo, v7, v8);
    this = (ShopRootComponent_o *)sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10);
    byte_4B1279B = 1;
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
        this = (ShopRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( this )
        {
          this = (ShopRootComponent_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ShopDetailMaster___);
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
                         (const MethodInfo_31FD1D8 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__) )
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
    sub_1BCAA3C(this, *(_QWORD *)&buyCount);
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
      sub_1BCAA3C(servantSellConfirmMenu, *(_QWORD *)&count);
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

  if ( (byte_4B127C8 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, isEnable, method);
    byte_4B127C8 = 1;
  }
  actionBg = (UnityEngine_Object_o *)this->fields.actionBg;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isEnable);
  if ( UnityEngine_Object__op_Inequality(actionBg, 0LL, 0LL) )
  {
    v7 = this->fields.actionBg;
    if ( !v7 )
      sub_1BCAA3C(0LL, v6);
    UnityEngine_GameObject__SetActive(v7, isEnable, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopRootComponent__SetFadeIn(ShopRootComponent_o *this, int32_t state, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  CommonUI_o *v8; // x19

  if ( (byte_4B12795 & 1) == 0 )
  {
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, *(_QWORD *)&state, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5);
    byte_4B12795 = 1;
  }
  if ( state == 15 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v8 = (CommonUI_o *)Instance;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v7);
    if ( !v8 )
      sub_1BCAA3C(Instance, v7);
    CommonUI__maskFadein(v8, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
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
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x19
  __int64 v15; // x0
  __int64 v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v27; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v29; // x21

  if ( (byte_4B12794 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&state, endFade);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    sub_1BCA7E0(&Method_ShopRootComponent___c__DisplayClass83_0__SetFadeOut_b__0__, v10, v11);
    sub_1BCA7E0(&ShopRootComponent___c__DisplayClass83_0_TypeInfo, v12, v13);
    byte_4B12794 = 1;
  }
  v14 = sub_1BCAA2C(ShopRootComponent___c__DisplayClass83_0_TypeInfo, *(_QWORD *)&state, endFade, method);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_10;
  *(_QWORD *)(v14 + 16) = endFade;
  sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 16), (int64_t)endFade, v17, v18, v19, v20, v21, v22);
  if ( state == 15 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v27 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v23);
      v27 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v27->static_fields->DEFAULT_FADE_TIME;
    v29 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v23, v24, v25);
    System_Action___ctor(
      v29,
      (Il2CppObject *)v14,
      Method_ShopRootComponent___c__DisplayClass83_0__SetFadeOut_b__0__,
      0LL);
    if ( Instance )
    {
      CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v29, 0LL);
      return;
    }
LABEL_10:
    sub_1BCAA3C(v15, v16);
  }
  ActionExtensions__Call(*(System_Action_o **)(v14 + 16), 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopRootComponent__SetFrequencyTypeCheckList(
        ShopRootComponent_o *this,
        ShopDetailEntity_o *entity,
        bool decide,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  System_Collections_Generic_Dictionary_int__int__o *shopDetailCheckList; // x0

  if ( (byte_4B127BF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__, entity, decide);
    sub_1BCA7E0(&ShopRootComponent_TypeInfo, v6, v7);
    byte_4B127BF = 1;
  }
  if ( entity && (decide || entity->fields.frequencyType != 1) )
  {
    shopDetailCheckList = ShopRootComponent_TypeInfo->static_fields->shopDetailCheckList;
    if ( !shopDetailCheckList )
      sub_1BCAA3C(0LL, entity);
    System_Collections_Generic_Dictionary_int__int___set_Item(
      shopDetailCheckList,
      entity->fields.shopId,
      1,
      (const MethodInfo_31FD260 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
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
    sub_1BCAA3C(informationPanel, isDisp);
  }
}


void __fastcall ShopRootComponent__ShowNormalItemDialog(
        ShopRootComponent_o *this,
        ShopBuyItemListViewItem_o *item,
        ShopEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  System_String_o *RequestResultDialogMessageNormal; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  System_String_o *v21; // x20
  Il2CppObject *MasterData_object; // x22
  Il2CppObject *v23; // x23
  const MethodInfo *v24; // x3
  System_String_o *RequestResultDialogItemMessageNormal; // x22
  const MethodInfo *v26; // x2
  System_String_o *RequestResultDialogNumMessageNormal; // x0
  RequestResultDialog_o *requestResultDialog; // x21
  System_String_o *v29; // x23
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  System_Action_bool__o *v33; // x24
  RequestResultDialog_o *v34; // x21
  System_Action_bool__o *v35; // x22

  if ( (byte_4B127A4 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_bool__TypeInfo, item, entity);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ItemMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v9, v10);
    sub_1BCA7E0(&Method_ShopRootComponent_OnEndItemDialog__, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v15, v16);
    byte_4B127A4 = 1;
  }
  RequestResultDialogMessageNormal = ShopRequestResultDialogMessageMaker__GetRequestResultDialogMessageNormal(
                                       item,
                                       entity,
                                       this->fields.buyCount,
                                       method);
  if ( !entity )
    goto LABEL_11;
  v21 = RequestResultDialogMessageNormal;
  if ( entity->fields.purchaseType == 1 )
  {
    RequestResultDialogMessageNormal = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( RequestResultDialogMessageNormal )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)RequestResultDialogMessageNormal,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ItemMaster___);
      RequestResultDialogMessageNormal = (System_String_o *)ShopEntity__get_TargetId(entity, 0LL);
      if ( MasterData_object )
      {
        v23 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                (int32_t)RequestResultDialogMessageNormal,
                (const MethodInfo_31B2E40 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        RequestResultDialogItemMessageNormal = ShopRequestResultDialogMessageMaker__GetRequestResultDialogItemMessageNormal(
                                                 entity,
                                                 (ItemEntity_o *)v23,
                                                 this->fields.buyCount,
                                                 v24);
        RequestResultDialogNumMessageNormal = ShopRequestResultDialogMessageMaker__GetRequestResultDialogNumMessageNormal(
                                                entity,
                                                (ItemEntity_o *)v23,
                                                v26);
        requestResultDialog = this->fields.requestResultDialog;
        v29 = RequestResultDialogNumMessageNormal;
        v33 = (System_Action_bool__o *)sub_1BCAA2C(System_Action_bool__TypeInfo, v30, v31, v32);
        System_Action_bool____ctor(v33, (Il2CppObject *)this, Method_ShopRootComponent_OnEndItemDialog__, 0LL);
        if ( requestResultDialog )
        {
          RequestResultDialog__Open(requestResultDialog, v21, v29, RequestResultDialogItemMessageNormal, v33, 0LL);
          return;
        }
      }
    }
LABEL_11:
    sub_1BCAA3C(RequestResultDialogMessageNormal, v18);
  }
  v34 = this->fields.requestResultDialog;
  v35 = (System_Action_bool__o *)sub_1BCAA2C(System_Action_bool__TypeInfo, v18, v19, v20);
  System_Action_bool____ctor(v35, (Il2CppObject *)this, Method_ShopRootComponent_OnEndItemDialog__, 0LL);
  if ( !v34 )
    goto LABEL_11;
  RequestResultDialog__Open_33304228(v34, (System_String_o *)StringLiteral_1/*""*/, v21, v35, -1, 0LL);
}


void __fastcall ShopRootComponent__ShowSetItemDialog(
        ShopRootComponent_o *this,
        ShopEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_String_o *RequestResultDialogMessage; // x0
  RequestResultDialog_o *requestResultDialog; // x20
  System_String_o *v11; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  System_Action_bool__o *v15; // x22
  __int64 v16; // x0
  __int64 v17; // x1

  if ( (byte_4B127A5 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_bool__TypeInfo, entity, method);
    sub_1BCA7E0(&Method_ShopRootComponent_OnEndItemDialog__, v5, v6);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v7, v8);
    byte_4B127A5 = 1;
  }
  RequestResultDialogMessage = ShopRequestResultDialogMessageMaker__GetRequestResultDialogMessage(
                                 entity,
                                 this->fields.buyCount,
                                 method);
  requestResultDialog = this->fields.requestResultDialog;
  v11 = RequestResultDialogMessage;
  v15 = (System_Action_bool__o *)sub_1BCAA2C(System_Action_bool__TypeInfo, v12, v13, v14);
  System_Action_bool____ctor(v15, (Il2CppObject *)this, Method_ShopRootComponent_OnEndItemDialog__, 0LL);
  if ( !requestResultDialog )
    sub_1BCAA3C(v16, v17);
  RequestResultDialog__Open_33304228(requestResultDialog, (System_String_o *)StringLiteral_1/*""*/, v11, v15, -1, 0LL);
}


void __fastcall ShopRootComponent__ShowStorageDialog(
        ShopRootComponent_o *this,
        ShopBuyItemListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  int32_t state; // w8
  struct BuyStorageConfirmDialogComponent_o *v9; // x21
  System_Action_int__o *v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  BuyStorageConfirmDialogComponent_o *v13; // x0
  int32_t v14; // w1
  struct BuyStorageConfirmDialogComponent_o *buyStorageResultDialog; // x21

  if ( (byte_4B127A6 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_int__TypeInfo, item, method);
    sub_1BCA7E0(&Method_ShopRootComponent_OnEndStorageDialog__, v6, v7);
    byte_4B127A6 = 1;
  }
  state = this->fields.state;
  if ( state == 12 )
  {
    buyStorageResultDialog = this->fields.buyStorageResultDialog;
    v10 = (System_Action_int__o *)sub_1BCAA2C(System_Action_int__TypeInfo, item, method, v3);
    System_Action_int____ctor(v10, (Il2CppObject *)this, Method_ShopRootComponent_OnEndStorageDialog__, 0LL);
    if ( buyStorageResultDialog )
    {
      v14 = 1;
      v13 = buyStorageResultDialog;
      goto LABEL_9;
    }
LABEL_11:
    sub_1BCAA3C(v11, v12);
  }
  if ( state == 11 )
  {
    v9 = this->fields.buyStorageResultDialog;
    v10 = (System_Action_int__o *)sub_1BCAA2C(System_Action_int__TypeInfo, item, method, v3);
    System_Action_int____ctor(v10, (Il2CppObject *)this, Method_ShopRootComponent_OnEndStorageDialog__, 0LL);
    if ( v9 )
    {
      v13 = v9;
      v14 = 0;
LABEL_9:
      BuyStorageConfirmDialogComponent__ResultOpenDialog(v13, v14, item, v10, 0LL);
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
  __int64 v2; // x2
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v5; // x1
  UILabel_o *apInfoLabel; // x19
  __int64 v7; // x1
  int32_t Act; // w20

  if ( (byte_4B12790 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    byte_4B12790 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_8;
  apInfoLabel = this->fields.apInfoLabel;
  Act = UserGameEntity__getAct(SelfUserGame, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7);
  SelfUserGame = (UserGameEntity_o *)LocalizationManager__GetNumberFormat(Act, 0LL);
  if ( !apInfoLabel )
LABEL_8:
    sub_1BCAA3C(SelfUserGame, v5);
  UILabel__set_text(apInfoLabel, (System_String_o *)SelfUserGame, 0LL);
}


void __fastcall ShopRootComponent__UpdateGiftBadgeNum(ShopRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *giftButtonControl; // x20
  __int64 v5; // x1
  GiftButtonCtrl_o *v6; // x0

  if ( (byte_4B127C9 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B127C9 = 1;
  }
  giftButtonControl = (UnityEngine_Object_o *)this->fields.giftButtonControl;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(giftButtonControl, 0LL, 0LL) )
  {
    v6 = this->fields.giftButtonControl;
    if ( !v6 )
      sub_1BCAA3C(0LL, v5);
    GiftButtonCtrl__InvalidateGiftInfo(v6, 0LL);
  }
}


System_Collections_IEnumerator_o *__fastcall ShopRootComponent__WaitPurchase(
        ShopRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B127B1 & 1) == 0 )
  {
    sub_1BCA7E0(&ShopRootComponent__WaitPurchase_d__121_TypeInfo, method, v2);
    byte_4B127B1 = 1;
  }
  v5 = sub_1BCAA2C(ShopRootComponent__WaitPurchase_d__121_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v5;
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

  if ( (byte_4B127CB & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, *(_QWORD *)&stoneCount, method);
    byte_4B127CB = 1;
  }
  stoneInfoLabel = this->fields.stoneInfoLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&stoneCount);
  NumberFormat = LocalizationManager__GetNumberFormat(stoneCount, 0LL);
  if ( !stoneInfoLabel )
    sub_1BCAA3C(NumberFormat, v7);
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
    sub_1BCAA3C(servantSellConfirmMenu, v4);
  }
  ServantSellConfirmMenu__ClearCommandCodeRemoveResult(servantSellConfirmMenu, 0LL);
}


void __fastcall ShopRootComponent____n__0(ShopRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent__beginStartUp_39382928((SceneRootComponent_o *)this, 0LL);
}


void __fastcall ShopRootComponent__beginFinish(ShopRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  ShopTopListViewManager_o *topListViewManager; // x0

  ShopRootComponent__Quit(this, method);
  topListViewManager = this->fields.topListViewManager;
  if ( !topListViewManager )
    sub_1BCAA3C(0LL, v3);
  ShopTopListViewManager__ReleaseCoinRoomAsset(topListViewManager, v3);
}


void __fastcall ShopRootComponent__beginInitialize(ShopRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  ShopTopListViewManager_o *topListViewManager; // x0
  ShopRootComponent_o *v13; // x0
  const MethodInfo *v14; // x1
  struct GiftButtonCtrl_o *giftButtonControl; // x20
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  System_Action_o *v19; // x21
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  struct GiftButtonCtrl_o *v26; // x20
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  System_Func_bool__bool__o *v30; // x21
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7

  if ( (byte_4B1278A & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&System_Func_bool__bool__TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_ShopRootComponent_OnGiftClose__, v6, v7);
    sub_1BCA7E0(&Method_ShopRootComponent_OnGiftOpen__, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v10, v11);
    byte_4B1278A = 1;
  }
  topListViewManager = this->fields.topListViewManager;
  if ( !topListViewManager )
    goto LABEL_11;
  ShopTopListViewManager__LoadCoinRoomAsset(topListViewManager, method);
  ShopRootComponent__CreateShopDetailCheckList(v13, v14);
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 6, 30, 0LL);
  topListViewManager = (ShopTopListViewManager_o *)this->fields.eventBanner;
  if ( !topListViewManager )
    goto LABEL_11;
  EventBannerComponent__SetBanner((EventBannerComponent_o *)topListViewManager, 0LL);
  topListViewManager = (ShopTopListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
  v19 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v16, v17, v18);
  System_Action___ctor(v19, (Il2CppObject *)this, Method_ShopRootComponent_OnGiftOpen__, 0LL);
  if ( !giftButtonControl
    || (giftButtonControl->fields.OnGiftOpenAdditionalAction = v19,
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&giftButtonControl->fields.OnGiftOpenAdditionalAction,
          (int64_t)v19,
          v20,
          v21,
          v22,
          v23,
          v24,
          v25),
        v26 = this->fields.giftButtonControl,
        v30 = (System_Func_bool__bool__o *)sub_1BCAA2C(System_Func_bool__bool__TypeInfo, v27, v28, v29),
        System_Func_bool__bool____ctor(v30, (Il2CppObject *)this, Method_ShopRootComponent_OnGiftClose__, 0LL),
        !v26) )
  {
LABEL_11:
    sub_1BCAA3C(topListViewManager, method);
  }
  v26->fields.OnGiftCloseAdditionalAction = v30;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v26->fields.OnGiftCloseAdditionalAction,
    (int64_t)v30,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
}


void __fastcall ShopRootComponent__beginResume(ShopRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent__beginResume_39383112((SceneRootComponent_o *)this, 0LL);
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
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  struct SceneJumpInfo_o **p_jumpInfo; // x21
  const MethodInfo *v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  Il2CppClass *v37; // x8
  __int64 methodPtr_low; // x9
  Il2CppObject *v39; // x1
  TitleInfoControl_o *titleInfo; // x0
  __int64 v41; // x1
  System_String_o *returnSceneName; // x20
  System_String_o *SceneName; // x0
  bool v44; // w0
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  struct ShopPlayVoiceComponent_o *shopPlayVoiceComponent; // x8
  __int64 v51; // x1
  System_String_o *MainBgmName; // x20
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x3
  System_Action_o *v56; // x20
  __int64 v57; // x1
  const MethodInfo *v58; // x1
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  struct ShopPlayVoiceComponent_o *v65; // x20
  struct StandFigureBack_o *standFigureBack; // x1
  int32_t defaultFaceId; // w21
  struct StandFigureBack_o *v68; // d8
  struct StandFigureBack_o **p_standFigureBack; // x20
  UITexture_o *backgroundTexture; // x20
  System_String_o *BG_ROOT; // x20
  Il2CppObject *v72; // x0
  System_String_o *v73; // x0
  ExUITexture_o *v74; // x21
  System_String_o *v75; // x20
  __int64 v76; // x1
  __int64 v77; // x2
  __int64 v78; // x3
  System_Action_o *v79; // x22
  __int64 v80; // x1
  ShopRootConstants_c *v81; // x0
  struct ShopRootConstants_StaticFields *static_fields; // x8
  System_String_o *v83; // x20
  Il2CppObject *v84; // x0
  ExUITexture_o *v85; // x19
  int32_t DEFAULT_BG_ID; // [xsp+8h] [xbp-48h] BYREF
  int32_t bgImageId; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B1278B & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, data, method);
    sub_1BCA7E0(&AtlasManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&BgmManager_TypeInfo, v12, v13);
    sub_1BCA7E0(&FSUtility_TypeInfo, v14, v15);
    sub_1BCA7E0(&int_TypeInfo, v16, v17);
    sub_1BCA7E0(&SceneJumpInfo_TypeInfo, v18, v19);
    sub_1BCA7E0(&SceneList_TypeInfo, v20, v21);
    sub_1BCA7E0(&Method_ShopRootComponent_LoadBanner__, v22, v23);
    sub_1BCA7E0(&Method_ShopRootComponent__beginStartUp_b__71_0__, v24, v25);
    sub_1BCA7E0(&ShopRootConstants_TypeInfo, v26, v27);
    sub_1BCA7E0(&SoundManager_TypeInfo, v28, v29);
    byte_4B1278B = 1;
  }
  p_jumpInfo = &this->fields.jumpInfo;
  this->fields.jumpInfo = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.jumpInfo, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
  this->fields.isFromCoinRoom = 0;
  if ( data )
  {
    v37 = (Il2CppClass *)SceneJumpInfo_TypeInfo;
    methodPtr_low = LOBYTE(SceneJumpInfo_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(data->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
      && (SceneJumpInfo_c *)data->klass->_2.typeHierarchy[methodPtr_low - 1] == SceneJumpInfo_TypeInfo )
    {
      *p_jumpInfo = (struct SceneJumpInfo_o *)data;
      if ( LOBYTE(data->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
      {
        if ( data->klass->_2.typeHierarchy[methodPtr_low - 1] == v37 )
          v39 = data;
        else
          v39 = 0LL;
      }
      else
      {
        v39 = 0LL;
      }
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.jumpInfo,
        (int64_t)v39,
        (int64_t)v31,
        v32,
        v33,
        v34,
        v35,
        v36);
      if ( !*p_jumpInfo )
        goto LABEL_41;
      returnSceneName = (*p_jumpInfo)->fields.returnSceneName;
      if ( !SceneList_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SceneList_TypeInfo, v41);
      SceneName = SceneList__getSceneName(90, 0LL);
      v44 = System_String__op_Equality(returnSceneName, SceneName, 0LL);
      this->fields.isFromCoinRoom = v44;
      if ( v44 )
      {
        *p_jumpInfo = 0LL;
        sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.jumpInfo, 0LL, (int64_t)v31, v45, v46, v47, v48, v49);
      }
    }
  }
  ShopRootComponent__SetActionBG(this, 0, v31);
  if ( !this->fields.isFromCoinRoom )
  {
    shopPlayVoiceComponent = this->fields.shopPlayVoiceComponent;
    if ( !shopPlayVoiceComponent )
      goto LABEL_41;
    shopPlayVoiceComponent->fields.voicePlayOnce = 0;
    shopPlayVoiceComponent->fields.isPlayingVoice = 0;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v41);
  MainBgmName = BgmManager__GetMainBgmName(0LL);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v51);
  SoundManager__playBgm(MainBgmName, 0LL);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_41;
  TitleInfoControl__setTitleInfo(titleInfo, this->fields.myFSM, 1, 0LL, 38, 0LL);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_41;
  TitleInfoControl__SetHelpBtn(titleInfo, 0, 0LL);
  v56 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v53, v54, v55);
  System_Action___ctor(v56, (Il2CppObject *)this, Method_ShopRootComponent__beginStartUp_b__71_0__, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v57);
  AtlasManager__LoadBanner(v56, 1, 0LL);
  ShopRootComponent__setDispInfo(this, v58);
  v65 = this->fields.shopPlayVoiceComponent;
  if ( !v65 )
    goto LABEL_41;
  standFigureBack = this->fields.standFigureBack;
  defaultFaceId = this->fields.defaultFaceId;
  v68 = *(struct StandFigureBack_o **)&this->fields.figureSvtId;
  v65->fields.standFigureBack = standFigureBack;
  p_standFigureBack = &v65->fields.standFigureBack;
  sub_1BCA784((PartyOrganizationUtility_o *)p_standFigureBack, (int64_t)standFigureBack, v59, v60, v61, v62, v63, v64);
  p_standFigureBack[1] = v68;
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
    j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo, v41);
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
  v72 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &bgImageId);
  v73 = System_String__Format(BG_ROOT, v72, 0LL);
  v74 = this->fields.backgroundTexture;
  v75 = v73;
  v79 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v76, v77, v78);
  System_Action___ctor(v79, (Il2CppObject *)this, Method_ShopRootComponent_LoadBanner__, 0LL);
  if ( !v74 )
    goto LABEL_41;
  if ( ExUITexture__SetAssetImage(v74, v75, v79, 0LL) )
    goto LABEL_38;
  v81 = ShopRootConstants_TypeInfo;
  if ( !ShopRootConstants_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo, v80);
    v81 = ShopRootConstants_TypeInfo;
  }
  static_fields = v81->static_fields;
  v83 = static_fields->BG_ROOT;
  DEFAULT_BG_ID = static_fields->DEFAULT_BG_ID;
  v84 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &DEFAULT_BG_ID);
  titleInfo = (TitleInfoControl_o *)System_String__Format(v83, v84, 0LL);
  if ( !this->fields.backgroundTexture )
LABEL_41:
    sub_1BCAA3C(titleInfo, v41);
  v75 = (System_String_o *)titleInfo;
  ExUITexture__SetAssetImage(this->fields.backgroundTexture, (System_String_o *)titleInfo, 0LL, 0LL);
LABEL_38:
  v85 = this->fields.backgroundTexture;
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, v80);
  FSUtility__SetUpBackTextureSize(v85, v75, 0LL);
}


void __fastcall ShopRootComponent__setDispInfo(ShopRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  GuideEntity_o *GuideData; // x0
  __int64 v11; // x1
  int32_t guideFaceId; // w8
  ShopRootConstants_c *v13; // x0
  struct ShopRootConstants_StaticFields *static_fields; // x9

  if ( (byte_4B1278C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_GuideMaster___, method, v2);
    sub_1BCA7E0(&ShopRootConstants_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B1278C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_GuideMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v9);
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
    v13 = ShopRootConstants_TypeInfo;
    if ( !ShopRootConstants_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo, v11);
      v13 = ShopRootConstants_TypeInfo;
    }
    static_fields = v13->static_fields;
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
  __int64 v3; // x3
  ShopRootComponent__WaitPurchase_d__121_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  int32_t _1__state; // w8
  ShopRootComponent___c_c *v12; // x0
  System_Func_bool__o *_9__121_0; // x20
  Il2CppObject *v14; // x21
  struct ShopRootComponent___c_StaticFields *static_fields; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  UnityEngine_WaitUntil_o *v22; // x21
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  bool result; // w0
  struct ShopRootComponent_o *_4__this; // x8

  v4 = this;
  if ( (byte_4B127DD & 1) == 0 )
  {
    sub_1BCA7E0(&System_Func_bool__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_ShopRootComponent___c__WaitPurchase_b__121_0__, v5, v6);
    sub_1BCA7E0(&ShopRootComponent___c_TypeInfo, v7, v8);
    this = (ShopRootComponent__WaitPurchase_d__121_o *)sub_1BCA7E0(&UnityEngine_WaitUntil_TypeInfo, v9, v10);
    byte_4B127DD = 1;
  }
  _1__state = v4->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = v4->fields.__4__this;
    v4->fields.__1__state = -1;
    if ( !_4__this
      || (this = (ShopRootComponent__WaitPurchase_d__121_o *)_4__this->fields.listViewHelper,
          _4__this->fields.state = 13,
          !this) )
    {
      sub_1BCAA3C(this, method);
    }
    ShopSceneListViewControlHelper__SetListViewOnOpenHelp((ShopSceneListViewControlHelper_o *)this, 13, v2);
    return 0;
  }
  if ( _1__state )
    return 0;
  v4->fields.__1__state = -1;
  v12 = ShopRootComponent___c_TypeInfo;
  if ( !ShopRootComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopRootComponent___c_TypeInfo, method);
    v12 = ShopRootComponent___c_TypeInfo;
  }
  _9__121_0 = v12->static_fields->__9__121_0;
  if ( !_9__121_0 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12, method);
      v12 = ShopRootComponent___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v12->static_fields->__9;
    _9__121_0 = (System_Func_bool__o *)sub_1BCAA2C(System_Func_bool__TypeInfo, method, v2, v3);
    System_Func_bool____ctor(_9__121_0, v14, Method_ShopRootComponent___c__WaitPurchase_b__121_0__, 0LL);
    static_fields = ShopRootComponent___c_TypeInfo->static_fields;
    static_fields->__9__121_0 = _9__121_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__121_0,
      (int64_t)_9__121_0,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  v22 = (UnityEngine_WaitUntil_o *)sub_1BCAA2C(UnityEngine_WaitUntil_TypeInfo, method, v2, v3);
  UnityEngine_WaitUntil___ctor(v22, _9__121_0, 0LL);
  v4->fields.__2__current = (Il2CppObject *)v22;
  p__2__current = (PartyOrganizationUtility_o *)&v4->fields.__2__current;
  sub_1BCA784(p__2__current, (int64_t)v22, v24, v25, v26, v27, v28, v29);
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_ShopRootComponent__WaitPurchase_d__121_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
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
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B127CC & 1) == 0 )
  {
    sub_1BCA7E0(&ShopRootComponent___c_TypeInfo, v1, v2);
    byte_4B127CC = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(ShopRootComponent___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  ShopRootComponent___c_TypeInfo->static_fields->__9 = (struct ShopRootComponent___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)ShopRootComponent___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall ShopRootComponent___c___ctor(ShopRootComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ShopRootComponent___c___WaitPurchase_b__121_0(ShopRootComponent___c_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  PurchaseBehaviour_c *v3; // x0

  if ( (byte_4B127CD & 1) == 0 )
  {
    sub_1BCA7E0(&PurchaseBehaviour_TypeInfo, method, v2);
    byte_4B127CD = 1;
  }
  v3 = PurchaseBehaviour_TypeInfo;
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo, method);
    v3 = PurchaseBehaviour_TypeInfo;
  }
  return !v3->static_fields->isOpenPurchaseDialogEvent;
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  System_Action_o *_9__1; // x22
  CommonUI_o *v13; // x21
  QuestRewardInfo_o *questRewardInfo; // x20
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7

  if ( (byte_4B127CE & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5);
    sub_1BCA7E0(&Method_ShopRootComponent___c__DisplayClass100_0__PlayLvExceedItemReleaseEffect_b__1__, v6, v7);
    byte_4B127CE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__1 = this->fields.__9__1;
  v13 = (CommonUI_o *)Instance;
  questRewardInfo = this->fields.questRewardInfo;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v9, v10, v11);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_ShopRootComponent___c__DisplayClass100_0__PlayLvExceedItemReleaseEffect_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__9__1, (int64_t)_9__1, v15, v16, v17, v18, v19, v20);
  }
  if ( !v13 )
    sub_1BCAA3C(Instance, v9);
  CommonUI__LoadItemGetEffect(v13, questRewardInfo, _9__1, 0LL);
}


void __fastcall ShopRootComponent___c__DisplayClass100_0___PlayLvExceedItemReleaseEffect_b__1(
        ShopRootComponent___c__DisplayClass100_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_GameObject_o *Instance; // x0
  __int64 v9; // x1
  struct ShopRootComponent_o *_4__this; // x8
  CommonUI_o *v11; // x20
  __int64 v12; // x2
  __int64 v13; // x3
  System_Action_o *_9__2; // x23
  UnityEngine_Transform_o *v15; // x22
  QuestRewardInfo_o *questRewardInfo; // x21
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7

  if ( (byte_4B127CF & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5);
    sub_1BCA7E0(&Method_ShopRootComponent___c__DisplayClass100_0__PlayLvExceedItemReleaseEffect_b__2__, v6, v7);
    byte_4B127CF = 1;
  }
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_9;
  v11 = (CommonUI_o *)Instance;
  Instance = _4__this->fields.actionPanel;
  if ( !Instance )
    goto LABEL_9;
  Instance = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(Instance, 0LL);
  _9__2 = this->fields.__9__2;
  v15 = (UnityEngine_Transform_o *)Instance;
  questRewardInfo = this->fields.questRewardInfo;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v9, v12, v13);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_ShopRootComponent___c__DisplayClass100_0__PlayLvExceedItemReleaseEffect_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__9__2, (int64_t)_9__2, v17, v18, v19, v20, v21, v22);
  }
  if ( !v11 )
LABEL_9:
    sub_1BCAA3C(Instance, v9);
  CommonUI__OpenItemGetEffect(v11, v15, 0, questRewardInfo, _9__2, 0LL);
}


void __fastcall ShopRootComponent___c__DisplayClass100_0___PlayLvExceedItemReleaseEffect_b__2(
        ShopRootComponent___c__DisplayClass100_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  AvalonSceneManager_c *v14; // x8
  CommonUI_o *v15; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__3; // x21
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7

  if ( (byte_4B127D0 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    sub_1BCA7E0(&Method_ShopRootComponent___c__DisplayClass100_0__PlayLvExceedItemReleaseEffect_b__3__, v8, v9);
    byte_4B127D0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  CommonUI__ReleaseItemGetEffect((CommonUI_o *)Instance, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = AvalonSceneManager_TypeInfo;
  v15 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v11);
    v14 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v14->static_fields->DEFAULT_FADE_TIME;
  _9__3 = this->fields.__9__3;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v11, v12, v13);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_ShopRootComponent___c__DisplayClass100_0__PlayLvExceedItemReleaseEffect_b__3__,
      0LL);
    this->fields.__9__3 = _9__3;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__9__3, (int64_t)_9__3, v18, v19, v20, v21, v22, v23);
  }
  if ( !v15 )
LABEL_10:
    sub_1BCAA3C(Instance, v11);
  CommonUI__maskFadein(v15, DEFAULT_FADE_TIME, _9__3, 0LL);
}


void __fastcall ShopRootComponent___c__DisplayClass100_0___PlayLvExceedItemReleaseEffect_b__3(
        ShopRootComponent___c__DisplayClass100_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  struct ShopBuyItemListViewItem_o *item; // x1

  item = this->fields.item;
  if ( !item || (this = (ShopRootComponent___c__DisplayClass100_0_o *)this->fields.__4__this) == 0LL )
    sub_1BCAA3C(this, item);
  ShopRootComponent__ShowNormalItemDialog((ShopRootComponent_o *)this, item, item->fields._Shop_k__BackingField, v2);
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
  __int64 v2; // x2
  ShopRootComponent___c__DisplayClass107_0_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  struct ShopEntity_o *shopEntity; // x8
  struct System_Int32_array *targetIds; // x8
  System_String_o *v14; // x21
  System_String_o *v15; // x0
  int32_t v16; // w20
  System_String_o *v17; // x0
  int32_t v18; // w21
  __int64 v19; // x2
  __int64 v20; // x3
  System_String_o *name; // x21
  Il2CppObject *_4__this; // x22
  CommonUI_o *v23; // x20
  System_Action_o *v24; // x19
  ServantCostumeEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  v3 = this;
  if ( (byte_4B127D1 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantCostumeMaster___, v4, v5);
    sub_1BCA7E0(&Method_ShopRootComponent_OnEndPlayServantCostumeReleaseEffect__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    this = (ShopRootComponent___c__DisplayClass107_0_o *)sub_1BCA7E0(
                                                           &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                           v10,
                                                           v11);
    byte_4B127D1 = 1;
  }
  entity = 0LL;
  shopEntity = v3->fields.shopEntity;
  if ( !shopEntity )
    goto LABEL_15;
  targetIds = shopEntity->fields.targetIds;
  if ( !targetIds )
    goto LABEL_15;
  if ( !targetIds->max_length )
    sub_1BCAA44(this, method);
  this = (ShopRootComponent___c__DisplayClass107_0_o *)System_Int32__ToString((int)targetIds + 32, 0LL);
  if ( !this )
    goto LABEL_15;
  v14 = (System_String_o *)this;
  v15 = System_String__Substring_62420224((System_String_o *)this, 0, LODWORD(this->fields.shopEntity) - 2, 0LL);
  v16 = System_Int32__Parse(v15, 0LL);
  v17 = System_String__Substring(v14, v14->fields._stringLength - 2, 0LL);
  v18 = System_Int32__Parse(v17, 0LL);
  this = (ShopRootComponent___c__DisplayClass107_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_15;
  this = (ShopRootComponent___c__DisplayClass107_0_o *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)this,
                                                         (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  if ( !this )
    goto LABEL_15;
  if ( ServantCostumeMaster__TryGetEntity((ServantCostumeMaster_o *)this, &entity, v16, v18, 0LL) )
  {
    this = (ShopRootComponent___c__DisplayClass107_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( entity )
    {
      name = entity->fields.name;
      _4__this = (Il2CppObject *)v3->fields.__4__this;
      v23 = (CommonUI_o *)this;
      v24 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v19, v20);
      System_Action___ctor(v24, _4__this, Method_ShopRootComponent_OnEndPlayServantCostumeReleaseEffect__, 0LL);
      if ( v23 )
      {
        CommonUI__OpenCostumeReleaseEffect(v23, 1, name, v24, 23, 0LL);
        return;
      }
    }
LABEL_15:
    sub_1BCAA3C(this, method);
  }
  this = (ShopRootComponent___c__DisplayClass107_0_o *)v3->fields.__4__this;
  if ( !this )
    goto LABEL_15;
  ShopRootComponent__OnEndPlayServantCostumeReleaseEffect((ShopRootComponent_o *)this, method);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  _BOOL8 v9; // x0
  const MethodInfo *v10; // x1
  ShopRootComponent_o *_4__this; // x8
  __int64 v12; // x2
  __int64 v13; // x3
  Il2CppObject *v14; // x22
  ShopResetConfirmDialogComponent_o *monitor; // x20
  ShopBuyItemListViewItem_o *item; // x19
  System_Action_bool__o *v17; // x21
  const MethodInfo *v18; // x4

  if ( (byte_4B127D2 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_bool__TypeInfo, result, method);
    sub_1BCA7E0(&Method_ShopRootComponent_OnEndShopReset__, v5, v6);
    sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, v7, v8);
    byte_4B127D2 = 1;
  }
  v9 = System_String__op_Equality(result, (System_String_o *)StringLiteral_22292/*"ng"*/, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_10;
  if ( v9 )
  {
    ShopRootComponent__RequestEnd(_4__this, v10);
    return;
  }
  ShopRootComponent__RefreshInfo(this->fields.__4__this, v10);
  v14 = (Il2CppObject *)this->fields.__4__this;
  if ( !v14
    || (monitor = (ShopResetConfirmDialogComponent_o *)v14[24].monitor,
        item = this->fields.item,
        v17 = (System_Action_bool__o *)sub_1BCAA2C(System_Action_bool__TypeInfo, v10, v12, v13),
        System_Action_bool____ctor(v17, v14, Method_ShopRootComponent_OnEndShopReset__, 0LL),
        !monitor) )
  {
LABEL_10:
    sub_1BCAA3C(v9, v10);
  }
  if ( !monitor->fields.state )
    ShopResetConfirmDialogComponent__Open_33529328(monitor, 1, item, v17, v18);
}


void __fastcall ShopRootComponent___c__DisplayClass158_0___CloseShopResetDialog_b__1(
        ShopRootComponent___c__DisplayClass158_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  ShopRootComponent___c__DisplayClass158_0_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  struct ShopBuyItemListViewItem_o *item; // x8
  struct ShopEntity_o *Shop_k__BackingField; // x8
  ShopResetPurchaseNumRequest_o *request; // x20
  int32_t baseShopId; // w19

  v3 = this;
  if ( (byte_4B127D3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_ItemMaster___, method, v2);
    this = (ShopRootComponent___c__DisplayClass158_0_o *)sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    byte_4B127D3 = 1;
  }
  item = v3->fields.item;
  if ( !item )
    goto LABEL_10;
  Shop_k__BackingField = item->fields._Shop_k__BackingField;
  if ( !Shop_k__BackingField )
    goto LABEL_10;
  request = v3->fields.request;
  baseShopId = Shop_k__BackingField->fields.baseShopId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  this = (ShopRootComponent___c__DisplayClass158_0_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !this || !request )
LABEL_10:
    sub_1BCAA3C(this, method);
  ShopResetPurchaseNumRequest__beginRequest(request, baseShopId, (int32_t)this[2].fields.__4__this, 0LL);
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
  __int64 v2; // x2
  PurchaseBehaviour_c *v4; // x0
  ShopPlayVoiceComponent_o *shopPlayVoiceComponent; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x5
  struct ShopRootComponent_o *_4__this; // x8
  int32_t v9; // w4

  if ( (byte_4B127D4 & 1) == 0 )
  {
    sub_1BCA7E0(&PurchaseBehaviour_TypeInfo, method, v2);
    byte_4B127D4 = 1;
  }
  v4 = PurchaseBehaviour_TypeInfo;
  if ( !PurchaseBehaviour_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PurchaseBehaviour_TypeInfo, method);
    v4 = PurchaseBehaviour_TypeInfo;
  }
  v4->static_fields->isOpenPurchaseDialogEvent = 1;
  PurchaseBehaviour__ActivateBoth(0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (shopPlayVoiceComponent = _4__this->fields.shopPlayVoiceComponent) == 0LL
    || (_4__this->fields.isFromCoinRoom ? (v9 = 17) : (v9 = 0),
        ShopPlayVoiceComponent__LoadVoice(
          shopPlayVoiceComponent,
          _4__this->fields.figureSvtId,
          this->fields.jumpedState,
          _4__this->fields.isFromCoinRoom,
          v9,
          v7),
        (shopPlayVoiceComponent = (ShopPlayVoiceComponent_o *)this->fields.__4__this) == 0LL) )
  {
    sub_1BCAA3C(shopPlayVoiceComponent, v6);
  }
  SceneRootComponent__beginStartUp_39382928((SceneRootComponent_o *)shopPlayVoiceComponent, 0LL);
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
  __int64 v2; // x2
  __int64 v3; // x3
  const MethodInfo *v4; // x5
  ShopRootComponent___c__DisplayClass81_0_o *v5; // x19
  __int64 v6; // x1
  __int64 v7; // x2
  struct ShopRootComponent_o *_4__this; // x8
  ShopSceneListViewControlHelper_o *listViewHelper; // x20
  System_Action_o *_9__1; // x24
  int32_t selectedEventIndex; // w21
  int32_t state; // w22
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x3
  struct ShopRootComponent_o *v21; // x8

  v5 = this;
  if ( (byte_4B127D5 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    this = (ShopRootComponent___c__DisplayClass81_0_o *)sub_1BCA7E0(
                                                          &Method_ShopRootComponent___c__DisplayClass81_0__SelectMenu_b__1__,
                                                          v6,
                                                          v7);
    byte_4B127D5 = 1;
  }
  _4__this = v5->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  listViewHelper = _4__this->fields.listViewHelper;
  _9__1 = v5->fields.__9__1;
  selectedEventIndex = _4__this->fields.selectedEventIndex;
  state = v5->fields.state;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v5,
      Method_ShopRootComponent___c__DisplayClass81_0__SelectMenu_b__1__,
      0LL);
    v5->fields.__9__1 = _9__1;
    sub_1BCA784((PartyOrganizationUtility_o *)&v5->fields.__9__1, (int64_t)_9__1, v13, v14, v15, v16, v17, v18);
  }
  if ( !listViewHelper
    || (ShopSceneListViewControlHelper__SetListViewOnSelectMenu(
          listViewHelper,
          state,
          &v5->fields.eventId,
          selectedEventIndex,
          _9__1,
          v4),
        (this = (ShopRootComponent___c__DisplayClass81_0_o *)v5->fields.__4__this) == 0LL)
    || (ShopRootComponent__OpenStonePurchaseMenu((ShopRootComponent_o *)this, v5->fields.state, v19),
        (this = (ShopRootComponent___c__DisplayClass81_0_o *)v5->fields.__4__this) == 0LL)
    || (ShopRootComponent__OpenEventItemWindow((ShopRootComponent_o *)this, v5->fields.state, v5->fields.eventId, v20),
        (v21 = v5->fields.__4__this) == 0LL) )
  {
LABEL_11:
    sub_1BCAA3C(this, method);
  }
  *(_QWORD *)&v21->fields.state = (unsigned int)v5->fields.state;
}


void __fastcall ShopRootComponent___c__DisplayClass81_0___SelectMenu_b__1(
        ShopRootComponent___c__DisplayClass81_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  ShopRootComponent___c__DisplayClass81_0_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  struct ShopRootComponent_o *_4__this; // x8
  const MethodInfo *v13; // x2
  struct ShopRootComponent_o *v14; // x8
  struct ShopPlayVoiceComponent_o *shopPlayVoiceComponent; // x20
  __int64 v16; // x2
  __int64 v17; // x3
  const MethodInfo *v18; // x6
  ShopRootComponent___c__DisplayClass81_0_o *v19; // x21
  ShopRootConstants_c *v20; // x8
  int32_t eventId; // w20
  int32_t *p_state; // x8
  int32_t *p__9__2; // x9
  struct ShopRootConstants_StaticFields *static_fields; // x9
  struct ShopRootComponent_o *v25; // x10
  int32_t v26; // w21
  int32_t v27; // w22
  ShopPlayVoiceComponent_o *v28; // x23
  StandFigureBack_o *standFigureBack; // x24
  System_Action_o *_9__2; // x25
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7

  v3 = this;
  if ( (byte_4B127D6 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_GuideMaster___, v4, v5);
    sub_1BCA7E0(&ShopRootConstants_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    this = (ShopRootComponent___c__DisplayClass81_0_o *)sub_1BCA7E0(
                                                          &Method_ShopRootComponent___c__DisplayClass81_0__SelectMenu_b__2__,
                                                          v10,
                                                          v11);
    byte_4B127D6 = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_24;
  this = (ShopRootComponent___c__DisplayClass81_0_o *)_4__this->fields.shopPlayVoiceComponent;
  if ( !this )
    goto LABEL_24;
  ShopPlayVoiceComponent__StopVoice((ShopPlayVoiceComponent_o *)this, method);
  if ( v3->fields.state != 15 )
    goto LABEL_22;
  v14 = v3->fields.__4__this;
  if ( !v14 )
    goto LABEL_24;
  shopPlayVoiceComponent = v14->fields.shopPlayVoiceComponent;
  this = (ShopRootComponent___c__DisplayClass81_0_o *)ShopPlayVoiceConstants__GetEnterVoiceFlag(15, method);
  if ( !shopPlayVoiceComponent )
    goto LABEL_24;
  if ( !shopPlayVoiceComponent->fields.isPlayingVoice
    && (shopPlayVoiceComponent->fields.voicePlayOnce & (unsigned int)this) == 0 )
  {
    this = (ShopRootComponent___c__DisplayClass81_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (ShopRootComponent___c__DisplayClass81_0_o *)DataManager__GetMasterData_object_(
                                                            (DataManager_o *)this,
                                                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_GuideMaster___);
      if ( this )
      {
        this = (ShopRootComponent___c__DisplayClass81_0_o *)GuideMaster__getGuideData((GuideMaster_o *)this, 3, 0LL);
        v19 = this;
        v20 = ShopRootConstants_TypeInfo;
        if ( !ShopRootConstants_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo, method);
          v20 = ShopRootConstants_TypeInfo;
        }
        if ( v19 )
        {
          eventId = v19->fields.eventId;
          p_state = &v19->fields.state;
          p__9__2 = (int32_t *)&v19->fields.__9__2;
        }
        else
        {
          static_fields = v20->static_fields;
          eventId = 0;
          p_state = &static_fields->DEFAULT_FIGURE_ID;
          p__9__2 = &static_fields->DEFAULT_FIGURE_LIMIT_CNT;
        }
        v25 = v3->fields.__4__this;
        if ( v25 )
        {
          v26 = *p_state;
          v27 = *p__9__2;
          v28 = v25->fields.shopPlayVoiceComponent;
          standFigureBack = v25->fields.standFigureBack;
          _9__2 = v3->fields.__9__2;
          if ( !_9__2 )
          {
            _9__2 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v16, v17);
            System_Action___ctor(
              _9__2,
              (Il2CppObject *)v3,
              Method_ShopRootComponent___c__DisplayClass81_0__SelectMenu_b__2__,
              0LL);
            v3->fields.__9__2 = _9__2;
            sub_1BCA784((PartyOrganizationUtility_o *)&v3->fields.__9__2, (int64_t)_9__2, v31, v32, v33, v34, v35, v36);
          }
          if ( v28 )
          {
            ShopPlayVoiceComponent__ReloadVoice(v28, standFigureBack, v26, v27, eventId, _9__2, v18);
            goto LABEL_22;
          }
        }
      }
    }
LABEL_24:
    sub_1BCAA3C(this, method);
  }
LABEL_22:
  if ( !v3->fields.__4__this )
    goto LABEL_24;
  ShopRootComponent__SetFadeIn((ShopRootComponent_o *)this, v3->fields.state, v13);
}


void __fastcall ShopRootComponent___c__DisplayClass81_0___SelectMenu_b__2(
        ShopRootComponent___c__DisplayClass81_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1BCAA3C(this, method);
  ShopRootComponent__PlayVoiceEnter(this->fields.__4__this, this->fields.state, v2);
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
  __int64 v2; // x2
  __int64 v3; // x3
  const MethodInfo *v4; // x4
  ShopRootComponent___c__DisplayClass82_0_o *v5; // x19
  __int64 v6; // x1
  __int64 v7; // x2
  struct ShopRootComponent_o *_4__this; // x8
  ShopSceneListViewControlHelper_o *listViewHelper; // x20
  System_Action_o *_9__1; // x23
  int32_t state; // w21
  int32_t v12; // w22
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  struct ShopRootComponent_o *v19; // x8

  v5 = this;
  if ( (byte_4B127D7 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    this = (ShopRootComponent___c__DisplayClass82_0_o *)sub_1BCA7E0(
                                                          &Method_ShopRootComponent___c__DisplayClass82_0__BackMenu_b__1__,
                                                          v6,
                                                          v7);
    byte_4B127D7 = 1;
  }
  _4__this = v5->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  listViewHelper = _4__this->fields.listViewHelper;
  _9__1 = v5->fields.__9__1;
  state = v5->fields.state;
  v12 = state == 8 ? 7 : 1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v5,
      Method_ShopRootComponent___c__DisplayClass82_0__BackMenu_b__1__,
      0LL);
    v5->fields.__9__1 = _9__1;
    sub_1BCA784((PartyOrganizationUtility_o *)&v5->fields.__9__1, (int64_t)_9__1, v13, v14, v15, v16, v17, v18);
  }
  if ( !listViewHelper
    || (ShopSceneListViewControlHelper__SetListViewOnBackMenu(listViewHelper, state, v12, _9__1, v4),
        (this = (ShopRootComponent___c__DisplayClass82_0_o *)v5->fields.__4__this) == 0LL)
    || (ShopRootComponent__CloseEventItemWindow((ShopRootComponent_o *)this, method), (v19 = v5->fields.__4__this) == 0LL) )
  {
LABEL_13:
    sub_1BCAA3C(this, method);
  }
  v19->fields.inputState = 3;
}


void __fastcall ShopRootComponent___c__DisplayClass82_0___BackMenu_b__1(
        ShopRootComponent___c__DisplayClass82_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  ShopRootComponent___c__DisplayClass82_0_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  struct ShopRootComponent_o *_4__this; // x8
  const MethodInfo *v7; // x2
  __int64 v8; // x3
  const MethodInfo *v9; // x6
  struct ShopRootComponent_o *v10; // x8
  ShopPlayVoiceComponent_o *shopPlayVoiceComponent; // x20
  StandFigureBack_o *standFigureBack; // x21
  int32_t figureSvtId; // w22
  int32_t figureSvtLimitCnt; // w23
  int32_t defaultFaceId; // w24
  System_Action_o *_9__2; // x25
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7

  v3 = this;
  if ( (byte_4B127D8 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    this = (ShopRootComponent___c__DisplayClass82_0_o *)sub_1BCA7E0(
                                                          &Method_ShopRootComponent___c__DisplayClass82_0__BackMenu_b__2__,
                                                          v4,
                                                          v5);
    byte_4B127D8 = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  this = (ShopRootComponent___c__DisplayClass82_0_o *)_4__this->fields.shopPlayVoiceComponent;
  if ( !this )
    goto LABEL_13;
  ShopPlayVoiceComponent__StopVoice((ShopPlayVoiceComponent_o *)this, method);
  if ( v3->fields.state != 15 )
    goto LABEL_11;
  v10 = v3->fields.__4__this;
  if ( !v10 )
    goto LABEL_13;
  shopPlayVoiceComponent = v10->fields.shopPlayVoiceComponent;
  standFigureBack = v10->fields.standFigureBack;
  figureSvtId = v10->fields.figureSvtId;
  figureSvtLimitCnt = v10->fields.figureSvtLimitCnt;
  defaultFaceId = v10->fields.defaultFaceId;
  _9__2 = v3->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v7, v8);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v3,
      Method_ShopRootComponent___c__DisplayClass82_0__BackMenu_b__2__,
      0LL);
    v3->fields.__9__2 = _9__2;
    sub_1BCA784((PartyOrganizationUtility_o *)&v3->fields.__9__2, (int64_t)_9__2, v17, v18, v19, v20, v21, v22);
  }
  if ( !shopPlayVoiceComponent )
LABEL_13:
    sub_1BCAA3C(this, method);
  ShopPlayVoiceComponent__ReloadVoice(
    shopPlayVoiceComponent,
    standFigureBack,
    figureSvtId,
    figureSvtLimitCnt,
    defaultFaceId,
    _9__2,
    v9);
LABEL_11:
  if ( !v3->fields.__4__this )
    goto LABEL_13;
  ShopRootComponent__SetFadeIn((ShopRootComponent_o *)this, v3->fields.state, v7);
}


void __fastcall ShopRootComponent___c__DisplayClass82_0___BackMenu_b__2(
        ShopRootComponent___c__DisplayClass82_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1BCAA3C(this, method);
  ShopRootComponent__PlayVoiceBack(this->fields.__4__this, this->fields.state, v2);
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
  __int64 v2; // x2
  __int64 v3; // x3
  ShopRootComponent___c__DisplayClass86_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *_4__this; // x22
  struct ShopBuyItemListViewItem_o *item; // x8
  ShopBuyItemConfirmMenu_o *monitor; // x19
  ShopEntity_o *Shop_k__BackingField; // x20
  int32_t ShopKind_k__BackingField; // w21
  System_Action_int__o *v12; // x23

  v4 = this;
  if ( (byte_4B127D9 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_int__TypeInfo, method, v2);
    this = (ShopRootComponent___c__DisplayClass86_0_o *)sub_1BCA7E0(
                                                          &Method_ShopRootComponent_SelectedBuyItemConfirm__,
                                                          v5,
                                                          v6);
    byte_4B127D9 = 1;
  }
  _4__this = (Il2CppObject *)v4->fields.__4__this;
  if ( !_4__this
    || (item = v4->fields.item) == 0LL
    || (monitor = (ShopBuyItemConfirmMenu_o *)_4__this[9].monitor,
        Shop_k__BackingField = item->fields._Shop_k__BackingField,
        ShopKind_k__BackingField = item->fields._ShopKind_k__BackingField,
        v12 = (System_Action_int__o *)sub_1BCAA2C(System_Action_int__TypeInfo, method, v2, v3),
        System_Action_int____ctor(v12, _4__this, Method_ShopRootComponent_SelectedBuyItemConfirm__, 0LL),
        !monitor) )
  {
    sub_1BCAA3C(this, method);
  }
  ShopBuyItemConfirmMenu__Open(monitor, Shop_k__BackingField, ShopKind_k__BackingField, v12, 0, 0, 0LL, 0LL);
}


void __fastcall ShopRootComponent___c__DisplayClass86_0___OpenConfirmMenu_b__1(
        ShopRootComponent___c__DisplayClass86_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  ShopRootComponent___c__DisplayClass86_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *_4__this; // x22
  ShopResetConfirmDialogComponent_o *monitor; // x20
  ShopBuyItemListViewItem_o *item; // x19
  System_Action_bool__o *v10; // x21
  const MethodInfo *v11; // x4

  v4 = this;
  if ( (byte_4B127DA & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_bool__TypeInfo, method, v2);
    this = (ShopRootComponent___c__DisplayClass86_0_o *)sub_1BCA7E0(
                                                          &Method_ShopRootComponent_CloseShopResetDialog__,
                                                          v5,
                                                          v6);
    byte_4B127DA = 1;
  }
  _4__this = (Il2CppObject *)v4->fields.__4__this;
  if ( !_4__this
    || (monitor = (ShopResetConfirmDialogComponent_o *)_4__this[24].monitor,
        item = v4->fields.item,
        v10 = (System_Action_bool__o *)sub_1BCAA2C(System_Action_bool__TypeInfo, method, v2, v3),
        System_Action_bool____ctor(v10, _4__this, Method_ShopRootComponent_CloseShopResetDialog__, 0LL),
        !monitor) )
  {
    sub_1BCAA3C(this, method);
  }
  if ( !monitor->fields.state )
    ShopResetConfirmDialogComponent__Open_33529328(monitor, 0, item, v10, v11);
}


void __fastcall ShopRootComponent___c__DisplayClass86_0___OpenConfirmMenu_b__2(
        ShopRootComponent___c__DisplayClass86_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  ShopRootComponent___c__DisplayClass86_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *_4__this; // x22
  struct ShopBuyItemListViewItem_o *item; // x8
  ShopBuyItemConfirmMenu_o *monitor; // x19
  ShopEntity_o *Shop_k__BackingField; // x20
  int32_t ShopKind_k__BackingField; // w21
  System_Action_int__o *v12; // x23

  v4 = this;
  if ( (byte_4B127DB & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_int__TypeInfo, method, v2);
    this = (ShopRootComponent___c__DisplayClass86_0_o *)sub_1BCA7E0(
                                                          &Method_ShopRootComponent_SelectedBuyItemConfirm__,
                                                          v5,
                                                          v6);
    byte_4B127DB = 1;
  }
  _4__this = (Il2CppObject *)v4->fields.__4__this;
  if ( !_4__this
    || (item = v4->fields.item) == 0LL
    || (monitor = (ShopBuyItemConfirmMenu_o *)_4__this[9].monitor,
        Shop_k__BackingField = item->fields._Shop_k__BackingField,
        ShopKind_k__BackingField = item->fields._ShopKind_k__BackingField,
        v12 = (System_Action_int__o *)sub_1BCAA2C(System_Action_int__TypeInfo, method, v2, v3),
        System_Action_int____ctor(v12, _4__this, Method_ShopRootComponent_SelectedBuyItemConfirm__, 0LL),
        !monitor) )
  {
    sub_1BCAA3C(this, method);
  }
  ShopBuyItemConfirmMenu__Open(monitor, Shop_k__BackingField, ShopKind_k__BackingField, v12, 0, 0, 0LL, 0LL);
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
  __int64 v6; // x2
  ServantSellConfirmMenu_o *_4__this; // x0
  __int64 v8; // x2
  __int64 v9; // x3
  Il2CppObject *v10; // x24
  ServantSellConfirmMenu_o *klass; // x20
  int32_t kind; // w19
  System_Int64_array *monitor; // x21
  System_Int64_array *v14; // x22
  System_Action_int__o *v15; // x23

  if ( (byte_4B127DC & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_int__TypeInfo, *(_QWORD *)&decide, method);
    sub_1BCA7E0(&Method_ShopRootComponent_SellServantConfirm__, v5, v6);
    byte_4B127DC = 1;
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
      v10 = (Il2CppObject *)this->fields.__4__this;
      if ( v10 )
      {
        klass = (ServantSellConfirmMenu_o *)v10[12].klass;
        kind = this->fields.kind;
        monitor = (System_Int64_array *)v10[31].monitor;
        v14 = (System_Int64_array *)v10[32].klass;
        v15 = (System_Action_int__o *)sub_1BCAA2C(System_Action_int__TypeInfo, *(_QWORD *)&decide, v8, v9);
        System_Action_int____ctor(v15, v10, Method_ShopRootComponent_SellServantConfirm__, 0LL);
        if ( klass )
        {
          ServantSellConfirmMenu__Open(klass, kind, monitor, v14, v15, 0LL);
          return;
        }
      }
    }
LABEL_10:
    sub_1BCAA3C(_4__this, *(_QWORD *)&decide);
  }
  ShopRootComponent__CloseSellServantConfirm((ShopRootComponent_o *)_4__this, *(const MethodInfo **)&decide);
}