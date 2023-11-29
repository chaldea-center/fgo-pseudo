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
  __int64 v3; // x3
  __int64 v4; // x4
  int32_t v5; // w19
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x21
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int64 v16; // x1
  const MethodInfo *v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  System_Action_o *v20; // x20
  ShopRootComponent_o *v21; // x0
  const MethodInfo *v22; // x3

  v5 = state;
  if ( (byte_40FB794 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&state);
    sub_B16FFC(&Method_ShopRootComponent___c__DisplayClass77_0__BackMenu_b__0__, v7);
    sub_B16FFC(&ShopRootComponent___c__DisplayClass77_0_TypeInfo, v8);
    byte_40FB794 = 1;
  }
  v9 = sub_B170CC(ShopRootComponent___c__DisplayClass77_0_TypeInfo, *(_QWORD *)&state, method, v3, v4);
  ShopRootComponent___c__DisplayClass77_0___ctor((ShopRootComponent___c__DisplayClass77_0_o *)v9, 0LL);
  if ( !v9 )
    sub_B170D4();
  *(_QWORD *)(v9 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v9 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_DWORD *)(v9 + 24) = v5;
  if ( v5 != 15 )
  {
    ShopRootComponent__PlayVoiceBack(this, v5, v17);
    v5 = *(_DWORD *)(v9 + 24);
  }
  v20 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v16, v17, v18, v19);
  System_Action___ctor(v20, (Il2CppObject *)v9, Method_ShopRootComponent___c__DisplayClass77_0__BackMenu_b__0__, 0LL);
  ShopRootComponent__SetFadeOut(v21, v5, v20, v22);
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
  SceneJumpInfo_o *v18; // x0
  PlayMakerFSM_o *myFSM; // x0
  bool v20; // w19
  struct SceneJumpInfo_o *v21; // x8
  SceneJumpInfo_o *v22; // x0
  struct SceneJumpInfo_o *v23; // x8
  SceneJumpInfo_o *v24; // x0
  struct SceneJumpInfo_o *v25; // x8
  struct SceneJumpInfo_o *v26; // x0
  __int64 v27; // x1
  TerminalPramsManager_c *v28; // x0
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct ShopSceneListViewControlHelper_o *listViewHelper; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v32; // x20
  ShopEventListViewManager_o *eventListViewManager; // x0
  ShopEventListViewItem_o *Item; // x0
  EventEntity_o *Entity; // x0
  EventEntity_o *v36; // x21
  CommonUI_o *v38; // x20
  System_String_o *v39; // x22
  Il2CppObject *EventName; // x0
  System_String_o *v41; // x21
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  System_Action_o *v46; // x22

  if ( (byte_40FB7B5 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&state);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMaster___, v5);
    sub_B16FFC(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v6);
    sub_B16FFC(&LocalizationManager_TypeInfo, v7);
    sub_B16FFC(&Method_ShopRootComponent_OnEndDialogEventCloseWarning__, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v11);
    sub_B16FFC(&StringLiteral_6153, v12);
    sub_B16FFC(&StringLiteral_3034, v13);
    sub_B16FFC(&StringLiteral_13021, v14);
    sub_B16FFC(&StringLiteral_12090, v15);
    sub_B16FFC(&StringLiteral_1, v16);
    byte_40FB7B5 = 1;
  }
  switch ( state )
  {
    case 1:
      jumpInfo = this->fields.jumpInfo;
      if ( !jumpInfo || !SceneJumpInfo__IsEnableReturnScene(jumpInfo, 0LL) )
        goto LABEL_8;
      v18 = this->fields.jumpInfo;
      if ( !v18 )
        goto LABEL_52;
      if ( SceneJumpInfo__ReturnScene(v18, 0LL) )
        return 1;
LABEL_8:
      myFSM = this->fields.myFSM;
      if ( !myFSM )
        goto LABEL_52;
      PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_3034, 0LL);
      return 1;
    case 4:
      v23 = this->fields.jumpInfo;
      if ( !v23 || !System_String__op_Equality(v23->fields.name, (System_String_o *)StringLiteral_13021, 0LL) )
        return 0;
      v24 = this->fields.jumpInfo;
      if ( !v24 )
        goto LABEL_52;
      if ( !SceneJumpInfo__ReturnScene(v24, 0LL) )
        return 0;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      v20 = 1;
      TerminalPramsManager__set_IsAutoOpenMasterMission(1, 0LL);
      return v20;
    case 7:
      v21 = this->fields.jumpInfo;
      if ( !v21 || !System_String__op_Equality(v21->fields.name, (System_String_o *)StringLiteral_6153, 0LL) )
        return 0;
      v22 = this->fields.jumpInfo;
      if ( !v22 )
        goto LABEL_52;
      return SceneJumpInfo__ReturnScene(v22, 0LL);
    case 8:
      v25 = this->fields.jumpInfo;
      if ( !v25 )
        return 0;
      if ( !System_String__op_Equality(v25->fields.name, (System_String_o *)StringLiteral_6153, 0LL) )
        goto LABEL_38;
      v26 = this->fields.jumpInfo;
      if ( !v26 )
        goto LABEL_52;
      if ( !v26->fields.id || !SceneJumpInfo__ReturnScene(v26, 0LL) )
      {
LABEL_38:
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                 (DataManager_o *)Instance,
                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMaster___);
          listViewHelper = this->fields.listViewHelper;
          if ( listViewHelper )
          {
            v32 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
            eventListViewManager = listViewHelper->fields.eventListViewManager;
            if ( eventListViewManager )
            {
              Item = ShopEventListViewManager__GetItem(eventListViewManager, this->fields.selectedEventIndex, 0LL);
              if ( Item )
              {
                if ( v32 )
                {
                  Entity = (EventEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                              v32,
                                              Item->fields.eventId,
                                              (const MethodInfo_266F388 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
                  if ( Entity )
                  {
                    v36 = Entity;
                    if ( EventEntity__IsOpen(Entity, 1, 0LL) )
                      return 0;
                    v38 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !LocalizationManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    }
                    v39 = LocalizationManager__Get((System_String_o *)StringLiteral_12090, 0LL);
                    EventName = (Il2CppObject *)EventEntity__getEventName(v36, 0LL);
                    v41 = System_String__Format(v39, EventName, 0LL);
                    v46 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v42, v43, v44, v45);
                    System_Action___ctor(
                      v46,
                      (Il2CppObject *)this,
                      Method_ShopRootComponent_OnEndDialogEventCloseWarning__,
                      0LL);
                    if ( v38 )
                    {
                      v20 = 1;
                      CommonUI__OpenNotificationDialog(
                        v38,
                        (System_String_o *)StringLiteral_1,
                        v41,
                        v46,
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
                      return v20;
                    }
                  }
                }
              }
            }
          }
        }
LABEL_52:
        sub_B170D4();
      }
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_40F604D )
      {
        sub_B16FFC(&TerminalPramsManager_TypeInfo, v27);
        byte_40F604D = 1;
      }
      v28 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v28 = TerminalPramsManager_TypeInfo;
      }
      v20 = 1;
      v28->static_fields->_IsAutoResume_k__BackingField = 1;
      return v20;
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
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  ServantSellConfirmMenu_o *servantSellConfirmMenu; // x20
  System_Int64_array *selectedServantIds; // x21
  System_Int64_array *selectedCommandCodeIds; // x22
  System_Action_int__o *v14; // x23

  v3 = this;
  if ( (byte_40FB79E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_int___ctor__, method);
    sub_B16FFC(&System_Action_int__TypeInfo, v4);
    this = (ShopRootComponent_o *)sub_B16FFC(&Method_ShopRootComponent_SellServantExceededConfirm__, v5);
    byte_40FB79E = 1;
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
    v14 = (System_Action_int__o *)sub_B170CC(System_Action_int__TypeInfo, v6, v8, v9, v10);
    System_Action_int____ctor(
      v14,
      (Il2CppObject *)v3,
      Method_ShopRootComponent_SellServantExceededConfirm__,
      (const MethodInfo_24B5D80 *)Method_System_Action_int___ctor__);
    if ( !servantSellConfirmMenu )
LABEL_11:
      sub_B170D4();
    ServantSellConfirmMenu__Open(servantSellConfirmMenu, 2, selectedServantIds, selectedCommandCodeIds, v14, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ShopRootComponent__CheckServerLimitTime(
        ShopRootComponent_o *this,
        int32_t state,
        const MethodInfo *method)
{
  NetworkManager_o *Instance; // x0

  if ( (byte_40FB7C1 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, *(_QWORD *)&state);
    byte_40FB7C1 = 1;
  }
  if ( (unsigned int)state > 0x15 || ((1 << state) & 0x35DDFC) == 0 )
    return 1;
  Instance = (NetworkManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  return NetworkManager__CheckServerLimitTime(Instance, 0LL);
}


void __fastcall ShopRootComponent__CheckTutorial(ShopRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  NetworkManager_ResultCallbackFunc_o *v12; // x20
  TutorialSetRequest_o *Request_WarBoardWallAttackRequest; // x0

  if ( (byte_40FB7B2 & 1) == 0 )
  {
    sub_B16FFC(&Method_NetworkManager_getRequest_TutorialSetRequest___, method);
    sub_B16FFC(&NetworkManager_TypeInfo, v3);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v4);
    sub_B16FFC(&Method_ShopRootComponent_QuitHelp__, v5);
    sub_B16FFC(&TutorialFlag_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_21129, v7);
    byte_40FB7B2 = 1;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_28023340(103, 0LL) )
  {
    ShopRootComponent__QuitHelp(this, (System_String_o *)StringLiteral_21129, v9);
  }
  else
  {
    v12 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                   NetworkManager_ResultCallbackFunc_TypeInfo,
                                                   v8,
                                                   v9,
                                                   v10,
                                                   v11);
    NetworkManager_ResultCallbackFunc___ctor(v12, (Il2CppObject *)this, Method_ShopRootComponent_QuitHelp__, 0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = (TutorialSetRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                  v12,
                                                                  (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_TutorialSetRequest___);
    if ( !Request_WarBoardWallAttackRequest )
      sub_B170D4();
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
  struct ShopSceneListViewControlHelper_o *listViewHelper; // x8
  ShopBuyItemListViewManager_o *buyItemListViewManager; // x0
  ShopBuyItemListViewItem_o *Item; // x21
  WebViewManager_o *v11; // x0
  ShopDetailMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct ShopEntity_o *Shop_k__BackingField; // x8
  ShopDetailEntity_o *ShopDetailEntity; // x0
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x1

  if ( (byte_40FB7BC & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ShopDetailMaster___, decide);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_40FB7BC = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseConfirmDialog(Instance, 0LL), (listViewHelper = this->fields.listViewHelper) == 0LL)
    || (buyItemListViewManager = listViewHelper->fields.buyItemListViewManager) == 0LL
    || (Item = ShopBuyItemListViewManager__GetItem(buyItemListViewManager, this->fields.selectedItemIndex, 0LL),
        (v11 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (MasterData_WarQuestSelectionMaster = (ShopDetailMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                     (DataManager_o *)v11,
                                                                     (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ShopDetailMaster___),
        !Item)
    || (Shop_k__BackingField = Item->fields._Shop_k__BackingField) == 0LL
    || !MasterData_WarQuestSelectionMaster )
  {
    sub_B170D4();
  }
  ShopDetailEntity = ShopDetailMaster__getShopDetailEntity(
                       MasterData_WarQuestSelectionMaster,
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
  UnityEngine_Component_o *shopEventItemDrawBase; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  ShopRootConstants_c *v5; // x8
  ShopCurrencyInfoController_o *currencyInfoController; // x0

  if ( (byte_40FB7C0 & 1) == 0 )
  {
    sub_B16FFC(&ShopRootConstants_TypeInfo, method);
    byte_40FB7C0 = 1;
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
  currencyInfoController = this->fields.currencyInfoController;
  if ( !currencyInfoController )
LABEL_9:
    sub_B170D4();
  ShopCurrencyInfoController__StopUpdateRemainTime(currencyInfoController, 0LL);
}


void __fastcall ShopRootComponent__CloseItemConfirm(ShopRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Behaviour_o *buyItemConfirmMenu; // x0
  ShopBuyItemConfirmMenu_o *v5; // x0
  UnityEngine_Behaviour_o *buyBulkItemConfirmMenu; // x0
  ShopBuyBulkItemConfirmMenu_o *v7; // x0
  UnityEngine_Behaviour_o *ApSeedExchangeConfirmMenu; // x0
  ShopBuyItemConfirmMenu_o *v9; // x0
  UnityEngine_Behaviour_o *ApSeedBulkExchangeConfirmMenu; // x0
  ShopBuyBulkItemConfirmMenu_o *v11; // x0
  UnityEngine_Behaviour_o *buyStorageConfirmDialog; // x0
  BuyStorageConfirmDialogComponent_o *v13; // x0
  UnityEngine_Behaviour_o *buyStorageNotificationDialog; // x0
  const MethodInfo *v15; // x2
  BuyStorageConfirmDialogComponent_o *v16; // x0
  int32_t state; // w20
  struct ShopSceneListViewControlHelper_o *listViewHelper; // x8
  ShopBuyItemListViewManager_o *buyItemListViewManager; // x0
  ShopBuyItemListViewItem_o *Item; // x0
  ShopBuyItemListViewItem_o *v21; // x20
  ShopEntity_o *Shop_k__BackingField; // x21
  ShopSceneListViewControlHelper_o **p_listViewHelper; // x22
  ShopMaster_o *Master_WarQuestSelectionMaster; // x0
  const MethodInfo *v25; // x2
  const MethodInfo *v26; // x2
  const MethodInfo *v27; // x2
  int32_t v28; // w1
  ShopSceneListViewControlHelper_o *v29; // x21
  const MethodInfo *v30; // x2
  ShopTopListViewManager_o *topListViewManager; // x0

  if ( (byte_40FB79D & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_ShopMaster___, method);
    sub_B16FFC(&DataManager_TypeInfo, v3);
    byte_40FB79D = 1;
  }
  if ( this->fields.inputState == 3 )
  {
    buyItemConfirmMenu = (UnityEngine_Behaviour_o *)this->fields.buyItemConfirmMenu;
    this->fields.inputState = 4;
    if ( !buyItemConfirmMenu )
      goto LABEL_53;
    if ( UnityEngine_Behaviour__get_isActiveAndEnabled(buyItemConfirmMenu, 0LL) )
    {
      v5 = this->fields.buyItemConfirmMenu;
      if ( !v5 )
        goto LABEL_53;
      ShopBuyItemConfirmMenu__Close(v5, 0LL);
    }
    buyBulkItemConfirmMenu = (UnityEngine_Behaviour_o *)this->fields.buyBulkItemConfirmMenu;
    if ( !buyBulkItemConfirmMenu )
      goto LABEL_53;
    if ( UnityEngine_Behaviour__get_isActiveAndEnabled(buyBulkItemConfirmMenu, 0LL) )
    {
      v7 = this->fields.buyBulkItemConfirmMenu;
      if ( !v7 )
        goto LABEL_53;
      ShopBuyBulkItemConfirmMenu__Close(v7, 0LL);
    }
    ApSeedExchangeConfirmMenu = (UnityEngine_Behaviour_o *)this->fields.ApSeedExchangeConfirmMenu;
    if ( !ApSeedExchangeConfirmMenu )
      goto LABEL_53;
    if ( UnityEngine_Behaviour__get_isActiveAndEnabled(ApSeedExchangeConfirmMenu, 0LL) )
    {
      v9 = this->fields.ApSeedExchangeConfirmMenu;
      if ( !v9 )
        goto LABEL_53;
      ShopBuyItemConfirmMenu__Close(v9, 0LL);
    }
    ApSeedBulkExchangeConfirmMenu = (UnityEngine_Behaviour_o *)this->fields.ApSeedBulkExchangeConfirmMenu;
    if ( !ApSeedBulkExchangeConfirmMenu )
      goto LABEL_53;
    if ( UnityEngine_Behaviour__get_isActiveAndEnabled(ApSeedBulkExchangeConfirmMenu, 0LL) )
    {
      v11 = this->fields.ApSeedBulkExchangeConfirmMenu;
      if ( !v11 )
        goto LABEL_53;
      ShopBuyBulkItemConfirmMenu__Close(v11, 0LL);
    }
    buyStorageConfirmDialog = (UnityEngine_Behaviour_o *)this->fields.buyStorageConfirmDialog;
    if ( !buyStorageConfirmDialog )
      goto LABEL_53;
    if ( UnityEngine_Behaviour__get_isActiveAndEnabled(buyStorageConfirmDialog, 0LL) )
    {
      v13 = this->fields.buyStorageConfirmDialog;
      if ( !v13 )
        goto LABEL_53;
      BuyStorageConfirmDialogComponent__Close(v13, 0LL);
    }
    buyStorageNotificationDialog = (UnityEngine_Behaviour_o *)this->fields.buyStorageNotificationDialog;
    if ( !buyStorageNotificationDialog )
LABEL_53:
      sub_B170D4();
    if ( UnityEngine_Behaviour__get_isActiveAndEnabled(buyStorageNotificationDialog, 0LL) )
    {
      v16 = this->fields.buyStorageNotificationDialog;
      if ( !v16 )
        goto LABEL_53;
      BuyStorageConfirmDialogComponent__Close(v16, 0LL);
    }
    state = this->fields.state;
    if ( state == 8 || state == 16 )
    {
      if ( this->fields.buyCount >= 1 && ShopRootComponent__BackScene(this, state, v15) )
        return;
      listViewHelper = this->fields.listViewHelper;
      if ( !listViewHelper )
        goto LABEL_53;
      buyItemListViewManager = listViewHelper->fields.buyItemListViewManager;
      if ( !buyItemListViewManager )
        goto LABEL_53;
      Item = ShopBuyItemListViewManager__GetItem(buyItemListViewManager, this->fields.selectedItemIndex, 0LL);
      if ( !Item )
        goto LABEL_53;
      v21 = Item;
      Shop_k__BackingField = Item->fields._Shop_k__BackingField;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      p_listViewHelper = &this->fields.listViewHelper;
      Master_WarQuestSelectionMaster = (ShopMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ShopMaster___);
      if ( this->fields.buyCount >= 1 )
      {
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_53;
        if ( ShopMaster__IsOpenPurchaseCloseShop(Master_WarQuestSelectionMaster, Shop_k__BackingField, v25) )
        {
          if ( *p_listViewHelper )
          {
            ShopSceneListViewControlHelper__SetListViewOnCloseEventShop(*p_listViewHelper, this->fields.state, v26);
            v28 = this->fields.state;
            if ( v28 != 16 )
            {
              if ( v28 == 8 )
              {
                v28 = 7;
                this->fields.state = 7;
              }
              goto LABEL_52;
            }
            topListViewManager = this->fields.topListViewManager;
            if ( topListViewManager )
            {
              ShopTopListViewManager__CreateList(topListViewManager, 0, -1.0, 0LL);
              v28 = this->fields.state;
LABEL_52:
              ShopRootComponent__BackMenu(this, v28, v27);
              return;
            }
          }
          goto LABEL_53;
        }
      }
      ShopBuyItemListViewItem__Modify(v21, Shop_k__BackingField, 0LL);
      state = this->fields.state;
    }
    else
    {
      p_listViewHelper = &this->fields.listViewHelper;
    }
    v29 = *p_listViewHelper;
    if ( !*p_listViewHelper )
      goto LABEL_53;
    ShopSceneListViewControlHelper__SetBuyItemListViewModify(*p_listViewHelper, state, v15);
    ShopSceneListViewControlHelper__SetBuyItemListViewInput(v29, state, v30);
    this->fields.inputState = 2;
  }
}


void __fastcall ShopRootComponent__CloseSellServantConfirm(ShopRootComponent_o *this, const MethodInfo *method)
{
  ServantSellConfirmMenu_o *servantSellConfirmMenu; // x0
  const MethodInfo *v4; // x2
  UnityEngine_Behaviour_o *v5; // x0
  const MethodInfo *v6; // x4
  ServantSellConfirmMenu_o *v7; // x0
  ShopSceneListViewControlHelper_o *listViewHelper; // x20
  int32_t state; // w21
  const MethodInfo *v10; // x2

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
    v5 = (UnityEngine_Behaviour_o *)this->fields.servantSellConfirmMenu;
    if ( v5 )
    {
      if ( UnityEngine_Behaviour__get_isActiveAndEnabled(v5, 0LL) )
      {
        v7 = this->fields.servantSellConfirmMenu;
        if ( !v7 )
          goto LABEL_13;
        ServantSellConfirmMenu__Close(v7, 0LL);
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
          v6);
        ShopSceneListViewControlHelper__SetSellServantMenuInput(listViewHelper, state, v10);
        return;
      }
    }
LABEL_13:
    sub_B170D4();
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
  ShopPlayVoiceComponent_o *v9; // x0

  if ( (byte_40FB7C4 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_12127, *(_QWORD *)&result);
    sub_B16FFC(&StringLiteral_12126, v6);
    byte_40FB7C4 = 1;
  }
  if ( result )
    goto LABEL_6;
  shopPlayVoiceComponent = this->fields.shopPlayVoiceComponent;
  if ( !shopPlayVoiceComponent )
    goto LABEL_9;
  if ( !ShopPlayVoiceComponent__PlayVoiceOnce(
          shopPlayVoiceComponent,
          (System_String_o *)StringLiteral_12127,
          0x2000,
          v3) )
  {
LABEL_6:
    v9 = this->fields.shopPlayVoiceComponent;
    if ( v9 )
    {
      ShopPlayVoiceComponent__PlayVoiceOnce(v9, (System_String_o *)StringLiteral_12126, 4096, v3);
      goto LABEL_8;
    }
LABEL_9:
    sub_B170D4();
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  BuyStorageConfirmDialogComponent_o *buyStorageConfirmDialog; // x20
  System_Action_o *v12; // x21
  struct ShopSceneListViewControlHelper_o *listViewHelper; // x8
  ShopBuyItemListViewManager_o *buyItemListViewManager; // x0
  ShopBuyItemListViewItem_o *Item; // x0
  ShopBuyItemListViewItem_o *v16; // x20
  ShopRootComponent_o *v17; // x0
  const MethodInfo *v18; // x2
  __int64 v19; // x1
  const MethodInfo *v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  ShopBuyBulkItemConfirmMenu_o *buyBulkItemConfirmMenu; // x20
  System_Action_int__o *v24; // x21
  ShopSceneListViewControlHelper_o *v25; // x20
  int32_t state; // w19
  const MethodInfo *v27; // x2

  if ( (byte_40FB7BD & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_int___ctor__, *(_QWORD *)&buyCount);
    sub_B16FFC(&System_Action_int__TypeInfo, v7);
    sub_B16FFC(&System_Action_TypeInfo, v8);
    sub_B16FFC(&Method_ShopRootComponent_RequestShop__, v9);
    sub_B16FFC(&Method_ShopRootComponent_SelectedBuyItemConfirm__, v10);
    byte_40FB7BD = 1;
  }
  this->fields.buyCount = buyCount;
  if ( buyCount )
  {
    buyStorageConfirmDialog = this->fields.buyStorageConfirmDialog;
    v12 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, *(_QWORD *)&buyCount, method, v3, v4);
    System_Action___ctor(v12, (Il2CppObject *)this, Method_ShopRootComponent_RequestShop__, 0LL);
    if ( buyStorageConfirmDialog )
    {
      BuyStorageConfirmDialogComponent__Close_27621832(buyStorageConfirmDialog, v12, 0LL);
      return;
    }
LABEL_14:
    sub_B170D4();
  }
  listViewHelper = this->fields.listViewHelper;
  this->fields.inputState = 2;
  if ( !listViewHelper )
    goto LABEL_14;
  buyItemListViewManager = listViewHelper->fields.buyItemListViewManager;
  if ( !buyItemListViewManager )
    goto LABEL_14;
  Item = ShopBuyItemListViewManager__GetItem(buyItemListViewManager, this->fields.selectedItemIndex, 0LL);
  if ( !this->fields.buyStorageConfirmDialog )
    goto LABEL_14;
  v16 = Item;
  BuyStorageConfirmDialogComponent__Close(this->fields.buyStorageConfirmDialog, 0LL);
  if ( ShopRootComponent__GetIsBulk(v17, v16, v18) )
  {
    buyBulkItemConfirmMenu = this->fields.buyBulkItemConfirmMenu;
    v24 = (System_Action_int__o *)sub_B170CC(System_Action_int__TypeInfo, v19, v20, v21, v22);
    System_Action_int____ctor(
      v24,
      (Il2CppObject *)this,
      Method_ShopRootComponent_SelectedBuyItemConfirm__,
      (const MethodInfo_24B5D80 *)Method_System_Action_int___ctor__);
    if ( !buyBulkItemConfirmMenu )
      goto LABEL_14;
    ShopBuyBulkItemConfirmMenu__Modify(buyBulkItemConfirmMenu, v24, 0LL);
  }
  else
  {
    v25 = this->fields.listViewHelper;
    if ( !v25 )
      goto LABEL_14;
    state = this->fields.state;
    ShopSceneListViewControlHelper__SetBuyItemListViewModify(v25, state, v20);
    ShopSceneListViewControlHelper__SetBuyItemListViewInput(v25, state, v27);
  }
}


void __fastcall ShopRootComponent__CreateShopDetailCheckList(ShopRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  ShopRootComponent_c *v10; // x0
  System_Collections_Generic_Dictionary_int__int__o *v11; // x19
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  ShopRootComponent_c *v18; // x0
  BattleServantConfConponent_o *static_fields; // x0
  WebViewManager_o *Instance; // x0
  ShopDetailMaster_o *MasterData_WarQuestSelectionMaster; // x0
  ShopDetailEntity_array *ShopDetailEntityList; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  int max_length; // w8
  ShopDetailEntity_array *v26; // x19
  unsigned int v27; // w21
  ShopRootComponent_c *v28; // x0
  ShopDetailEntity_o *v29; // x23
  System_Collections_Generic_Dictionary_int__int__o *shopDetailCheckList; // x0
  ShopRootComponent_c *v31; // x0

  if ( (byte_40FB7C6 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ShopDetailMaster___, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__, v6);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v7);
    sub_B16FFC(&ShopRootComponent_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_40FB7C6 = 1;
  }
  v10 = ShopRootComponent_TypeInfo;
  if ( (BYTE3(ShopRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ShopRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopRootComponent_TypeInfo);
    v10 = ShopRootComponent_TypeInfo;
  }
  if ( !v10->static_fields->isInitialized )
  {
    v11 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B170CC(
                                                                 System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                                 method,
                                                                 v2,
                                                                 v3,
                                                                 v4);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v11,
      (const MethodInfo_2DDC410 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    v18 = ShopRootComponent_TypeInfo;
    if ( (BYTE3(ShopRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ShopRootComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ShopRootComponent_TypeInfo);
      v18 = ShopRootComponent_TypeInfo;
    }
    static_fields = (BattleServantConfConponent_o *)v18->static_fields;
    static_fields->klass = (BattleServantConfConponent_c *)v11;
    sub_B16F98(static_fields, (System_Int32_array **)v11, v12, v13, v14, v15, v16, v17);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_27;
    MasterData_WarQuestSelectionMaster = (ShopDetailMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)Instance,
                                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ShopDetailMaster___);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_27;
    ShopDetailEntityList = ShopDetailMaster__getShopDetailEntityList(MasterData_WarQuestSelectionMaster, 0LL);
    if ( !ShopDetailEntityList )
      goto LABEL_27;
    max_length = ShopDetailEntityList->max_length;
    v26 = ShopDetailEntityList;
    if ( max_length >= 1 )
    {
      v27 = 0;
      while ( 1 )
      {
        if ( v27 >= max_length )
        {
          sub_B17100(ShopDetailEntityList, v23, v24);
          sub_B170A0();
        }
        v28 = ShopRootComponent_TypeInfo;
        v29 = v26->m_Items[v27];
        if ( (BYTE3(ShopRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ShopRootComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ShopRootComponent_TypeInfo);
          v28 = ShopRootComponent_TypeInfo;
        }
        if ( !v29 )
          break;
        shopDetailCheckList = v28->static_fields->shopDetailCheckList;
        if ( !shopDetailCheckList )
          break;
        System_Collections_Generic_Dictionary_int__int___set_Item(
          shopDetailCheckList,
          v29->fields.shopId,
          0,
          (const MethodInfo_2DDCF8C *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
        max_length = v26->max_length;
        if ( (int)++v27 >= max_length )
          goto LABEL_22;
      }
LABEL_27:
      sub_B170D4();
    }
LABEL_22:
    v31 = ShopRootComponent_TypeInfo;
    if ( (BYTE3(ShopRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ShopRootComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ShopRootComponent_TypeInfo);
      v31 = ShopRootComponent_TypeInfo;
    }
    v31->static_fields->isInitialized = 1;
  }
}


void __fastcall ShopRootComponent__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1

  if ( (byte_40FB78B & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_12903, v1);
    sub_B16FFC(&StringLiteral_12784, v2);
    sub_B16FFC(&StringLiteral_1971, v3);
    sub_B16FFC(&StringLiteral_11241, v4);
    byte_40FB78B = 1;
  }
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_1971, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11241, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_12903, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_12784, 0LL);
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
    sub_B16F98(
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
  ShopBuyItemListViewManager_o *buyItemListViewManager; // x0
  ShopBuyItemListViewItem_o *Item; // x0
  const MethodInfo *v7; // x4

  if ( (byte_40FB79A & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FB79A = 1;
  }
  limitCountSealInfoDlg = this->fields.limitCountSealInfoDlg;
  if ( !limitCountSealInfoDlg )
    goto LABEL_10;
  SummonInfoDlgComponent__Close(limitCountSealInfoDlg, 0LL, 0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  listViewHelper = this->fields.listViewHelper;
  if ( !listViewHelper || (buyItemListViewManager = listViewHelper->fields.buyItemListViewManager) == 0LL )
LABEL_10:
    sub_B170D4();
  Item = ShopBuyItemListViewManager__GetItem(buyItemListViewManager, this->fields.limitCountSealInfoIndex, 0LL);
  ShopRootComponent__OpenConfirmMenu(this, this->fields.state, Item, this->fields.limitCountSealInfoBulk, v7);
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
  ServantSellConfirmMenu_o *servantSellConfirmMenu; // x0
  struct ServantSellMenu_o *v10; // x8
  int32_t tabKind; // w21
  bool v12; // w0
  int32_t ServantSellConfirmKindOnRequestEnd; // w0
  ServantSellConfirmMenu_o *v14; // x22
  System_Int64_array *selectedServantIds; // x20
  System_Int64_array *selectedCommandCodeIds; // x21
  int32_t v17; // w23
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  System_Action_int__o *v22; // x24
  const MethodInfo *v23; // x1

  if ( (byte_40FB7AE & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_int___ctor__, result);
    sub_B16FFC(&System_Action_int__TypeInfo, v5);
    sub_B16FFC(&Method_ShopRootComponent_EndSellResultServant__, v6);
    sub_B16FFC(&StringLiteral_20980, v7);
    byte_40FB7AE = 1;
  }
  servantSellMenu = this->fields.servantSellMenu;
  if ( !servantSellMenu )
    goto LABEL_8;
  ServantSellMenu__Init(servantSellMenu, 0LL);
  servantSellConfirmMenu = this->fields.servantSellConfirmMenu;
  if ( !servantSellConfirmMenu )
    goto LABEL_8;
  ServantSellConfirmMenu__Init(servantSellConfirmMenu, 0LL);
  v10 = this->fields.servantSellMenu;
  if ( !v10 )
    goto LABEL_8;
  tabKind = v10->fields.tabKind;
  v12 = System_String__op_Equality(result, (System_String_o *)StringLiteral_20980, 0LL);
  ServantSellConfirmKindOnRequestEnd = ServantSellConfirmMenu__GetServantSellConfirmKindOnRequestEnd(tabKind, v12, 0LL);
  v14 = this->fields.servantSellConfirmMenu;
  selectedServantIds = this->fields.selectedServantIds;
  selectedCommandCodeIds = this->fields.selectedCommandCodeIds;
  v17 = ServantSellConfirmKindOnRequestEnd;
  v22 = (System_Action_int__o *)sub_B170CC(System_Action_int__TypeInfo, v18, v19, v20, v21);
  System_Action_int____ctor(
    v22,
    (Il2CppObject *)this,
    Method_ShopRootComponent_EndSellResultServant__,
    (const MethodInfo_24B5D80 *)Method_System_Action_int___ctor__);
  if ( !v14 )
LABEL_8:
    sub_B170D4();
  ServantSellConfirmMenu__Open(v14, v17, selectedServantIds, selectedCommandCodeIds, v22, 0LL);
  ShopRootComponent__RefreshInfo(this, v23);
}


void __fastcall ShopRootComponent__EndRequestShop(
        ShopRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  struct ShopSceneListViewControlHelper_o *listViewHelper; // x8
  ShopBuyItemListViewManager_o *buyItemListViewManager; // x0
  ShopBuyItemListViewItem_o *Item; // x0
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x3
  int32_t state; // w8
  const MethodInfo *v12; // x1
  struct ShopEntity_o *Shop_k__BackingField; // x2

  if ( (byte_40FB7A3 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_20980, result);
    byte_40FB7A3 = 1;
  }
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_20980, 0LL) )
  {
    ShopRootComponent__RequestEnd(this, v5);
    return;
  }
  listViewHelper = this->fields.listViewHelper;
  if ( !listViewHelper )
    goto LABEL_17;
  buyItemListViewManager = listViewHelper->fields.buyItemListViewManager;
  if ( !buyItemListViewManager )
    goto LABEL_17;
  Item = ShopBuyItemListViewManager__GetItem(buyItemListViewManager, this->fields.selectedItemIndex, 0LL);
  if ( !Item )
    goto LABEL_17;
  state = this->fields.state;
  if ( (unsigned int)(state - 11) < 2 )
  {
    ShopRootComponent__ShowStorageDialog(this, Item, v9);
    goto LABEL_12;
  }
  if ( state != 14 )
  {
    Shop_k__BackingField = Item->fields._Shop_k__BackingField;
    if ( Shop_k__BackingField )
    {
      if ( Shop_k__BackingField->fields.purchaseType == 5 )
        ShopRootComponent__ShowSetItemDialog(
          this,
          Item->fields._Shop_k__BackingField,
          (const MethodInfo *)Shop_k__BackingField);
      else
        ShopRootComponent__ShowNormalItemDialog(this, Item, Shop_k__BackingField, v10);
      goto LABEL_12;
    }
LABEL_17:
    sub_B170D4();
  }
  ShopRootComponent__PlayLvExceedItemReleaseEffect(this, Item, v9);
LABEL_12:
  ShopRootComponent__RefreshInfo(this, v12);
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
  int32_t ItemID; // w0
  UserItemEntity_o *EntityDefinitely; // x0
  UserGameEntity_o *v11; // x0
  UserGameEntity_o *SelfUserGame; // x0
  UserGameEntity_o *v13; // x0
  UserGameEntity_o *v14; // x0

  if ( (byte_40FB7B8 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_UserItemMaster___, shopEntity);
    sub_B16FFC(&DataManager_TypeInfo, v4);
    sub_B16FFC(&NetworkManager_TypeInfo, v5);
    byte_40FB7B8 = 1;
  }
  if ( !shopEntity )
LABEL_22:
    sub_B170D4();
  result = 0;
  switch ( shopEntity->fields.payType )
  {
    case 1:
      SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
      if ( !SelfUserGame )
        goto LABEL_22;
      result = SelfUserGame->fields.stone;
      break;
    case 2:
      v13 = UserGameMaster__getSelfUserGame(0LL);
      if ( !v13 )
        goto LABEL_22;
      result = v13->fields.qp;
      break;
    case 4:
      v11 = UserGameMaster__getSelfUserGame(0LL);
      if ( !v11 )
        goto LABEL_22;
      result = v11->fields.mana;
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
      Master_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserItemMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      UserId = NetworkManager__get_UserId(0LL);
      ItemID = ShopEntity__GetItemID(shopEntity, 0LL);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_22;
      EntityDefinitely = UserItemMaster__GetEntityDefinitely(Master_WarQuestSelectionMaster, UserId, ItemID, 0LL);
      if ( !EntityDefinitely )
        goto LABEL_22;
      result = EntityDefinitely->fields.num;
      break;
    case 0xA:
      v14 = UserGameMaster__getSelfUserGame(0LL);
      if ( !v14 )
        goto LABEL_22;
      result = v14->fields.rarePri;
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
  __int64 v11; // x1
  __int64 v12; // x2
  int max_length; // w8
  CommonConsumeEntity_array *v14; // x20
  __int64 v15; // x21
  CommonConsumeEntity_o *v16; // x0
  int32_t Currency; // w21
  int32_t Price; // w0
  bool v20; // cc
  char v21; // w8

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
      v20 = Currency < Price;
    else
      v20 = Currency < 2 * Price;
    v21 = !v20;
    return v8 & v21;
  }
  CommonConsumeEntities = ShopEntity__GetCommonConsumeEntities(Shop_k__BackingField, 0LL);
  if ( !CommonConsumeEntities )
    return 0;
  max_length = CommonConsumeEntities->max_length;
  v14 = CommonConsumeEntities;
  if ( max_length >= 1 )
  {
    v15 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v15 >= max_length )
      {
        sub_B17100(CommonConsumeEntities, v11, v12);
        sub_B170A0();
      }
      v16 = v14->m_Items[v15];
      if ( !v16 )
        break;
      CommonConsumeEntities = (CommonConsumeEntity_array *)CommonConsumeEntity__GetUserBuyableNum(v16, 0LL);
      if ( (int)CommonConsumeEntities < 2 )
        return 0;
      max_length = v14->max_length;
      if ( (int)++v15 >= max_length )
        return v8;
    }
LABEL_26:
    sub_B170D4();
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x8
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v11; // x20
  unsigned __int64 v12; // x21

  if ( (byte_40FB79F & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, selectServantIds);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40FB79F = 1;
  }
  if ( !selectServantIds )
    return 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_14:
    sub_B170D4();
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
  v10 = *(_QWORD *)&selectServantIds->max_length;
  if ( (int)v10 < 1 )
    return 0;
  v11 = MasterData_WarQuestSelectionMaster;
  v12 = 0LL;
  while ( 1 )
  {
    if ( v12 >= (unsigned int)v10 )
    {
      sub_B17100(MasterData_WarQuestSelectionMaster, v8, v9);
      sub_B170A0();
    }
    if ( !v11 )
      goto LABEL_14;
    MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(v11, selectServantIds->m_Items[v12], (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( MasterData_WarQuestSelectionMaster )
    {
      MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)UserServantEntity__isExceeded((UserServantEntity_o *)MasterData_WarQuestSelectionMaster, 0LL);
      if ( ((unsigned __int8)MasterData_WarQuestSelectionMaster & 1) != 0 )
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
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  UserShopMaster_o *MasterData_WarQuestSelectionMaster; // x20
  int64_t UserId; // x0
  struct ShopEntity_o *Shop_k__BackingField; // x8
  UserShopEntity_o *EntityDefinitely; // x0

  if ( (byte_40FB79B & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserShopMaster___, item);
    sub_B16FFC(&NetworkManager_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40FB79B = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = (UserShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserShopMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !item
    || (Shop_k__BackingField = item->fields._Shop_k__BackingField) == 0LL
    || !MasterData_WarQuestSelectionMaster )
  {
LABEL_13:
    sub_B170D4();
  }
  EntityDefinitely = UserShopMaster__GetEntityDefinitely(
                       MasterData_WarQuestSelectionMaster,
                       UserId,
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

  if ( (byte_40FB7C2 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_8465, jumpInfoName);
    sub_B16FFC(&StringLiteral_6153, v6);
    sub_B16FFC(&StringLiteral_13021, v7);
    sub_B16FFC(&StringLiteral_12612, v8);
    byte_40FB7C2 = 1;
  }
  if ( !jumpInfoName )
    return 1;
  if ( !System_String__op_Equality(jumpInfoName, (System_String_o *)StringLiteral_6153, 0LL) )
  {
    if ( System_String__op_Equality(jumpInfoName, (System_String_o *)StringLiteral_12612, 0LL) )
      return 9;
    if ( System_String__op_Equality(jumpInfoName, (System_String_o *)StringLiteral_13021, 0LL) )
      return 4;
    if ( System_String__op_Equality(jumpInfoName, (System_String_o *)StringLiteral_8465, 0LL) )
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
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
  ShopSceneListViewControlHelper_o *v32; // x28
  ShopSceneListViewControlHelper_o **p_listViewHelper; // x21
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  const MethodInfo *v40; // x5
  ShopSceneListViewControlHelper_o *listViewHelper; // x0
  ShopSceneListViewControlHelper_o *v42; // x23
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  System_Action_o *v47; // x24
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  System_Action_ShopRootConstants_State__o *v52; // x25
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x3
  __int64 v56; // x4
  System_Action_int__o *v57; // x26
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x3
  __int64 v61; // x4
  System_Action_int__o *v62; // x27
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x3
  __int64 v66; // x4
  System_Action_ServantSellMenu_ResultKind__long____long____o *v67; // x28
  __int64 v68; // x1
  __int64 v69; // x2
  __int64 v70; // x3
  __int64 v71; // x4
  System_Action_o *v72; // x22
  const MethodInfo *v73; // x7
  ShopRootComponent_o *v74; // x0
  const MethodInfo *v75; // x3
  int StateOnInit; // w1
  const MethodInfo *v77; // x4
  int32_t v78; // w8
  _BOOL4 isFromCoinRoom; // w9
  float saveScrollBarValue; // s0
  const MethodInfo *v81; // x3
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 v89; // x1
  __int64 v90; // x2
  __int64 v91; // x3
  __int64 v92; // x4
  System_Action_int__o *v93; // x21
  const MethodInfo *v94; // [xsp+18h] [xbp-78h]
  ShopTopListViewManager_o *topListViewManager; // [xsp+20h] [xbp-70h]
  UnityEngine_GameObject_o *eventListViewBase; // [xsp+28h] [xbp-68h]
  System_String_o *jumpInfoName; // [xsp+30h] [xbp-60h]
  int32_t eventId; // [xsp+3Ch] [xbp-54h]

  if ( (byte_40FB790 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_ShopRootConstants_State___ctor__, method);
    sub_B16FFC(&Method_System_Action_int___ctor__, v6);
    sub_B16FFC(&System_Action_int__TypeInfo, v7);
    sub_B16FFC(&System_Action_ShopRootConstants_State__TypeInfo, v8);
    sub_B16FFC(&Method_System_Action_ServantSellMenu_ResultKind__long____long_____ctor__, v9);
    sub_B16FFC(&System_Action_ServantSellMenu_ResultKind__long____long____TypeInfo, v10);
    sub_B16FFC(&System_Action_TypeInfo, v11);
    sub_B16FFC(&Method_ShopRootComponent_OnMoveEnd__, v12);
    sub_B16FFC(&Method_ShopRootComponent_OnSelectBuyItem__, v13);
    sub_B16FFC(&Method_ShopRootComponent_OnSelectEvent__, v14);
    sub_B16FFC(&Method_ShopRootComponent_OnSelectSellServant__, v15);
    sub_B16FFC(&Method_ShopRootComponent_OnSelectTop__, v16);
    sub_B16FFC(&Method_ShopRootComponent_OpenHelp__, v17);
    sub_B16FFC(&Method_ShopRootComponent__Init_b__71_0__, v18);
    sub_B16FFC(&ShopSceneListViewControlHelper_TypeInfo, v19);
    sub_B16FFC(&StringLiteral_1, v20);
    byte_40FB790 = 1;
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
      p_name = (System_String_o **)&StringLiteral_1;
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
    v32 = (ShopSceneListViewControlHelper_o *)sub_B170CC(ShopSceneListViewControlHelper_TypeInfo, method, v2, v3, v4);
    ShopSceneListViewControlHelper___ctor(
      v32,
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
      v94);
    p_listViewHelper = &this->fields.listViewHelper;
    this->fields.listViewHelper = v32;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.listViewHelper,
      (System_Int32_array **)v32,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
    listViewHelper = this->fields.listViewHelper;
    if ( !listViewHelper )
      goto LABEL_23;
    ShopSceneListViewControlHelper__SetOtherObjects(
      listViewHelper,
      this->fields.titleInfo,
      this->fields.standFigureBack,
      this->fields.giftButtonControl,
      this->fields.backgroundTexture,
      v40);
    v42 = this->fields.listViewHelper;
    v47 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v43, v44, v45, v46);
    System_Action___ctor(v47, (Il2CppObject *)this, Method_ShopRootComponent_OnMoveEnd__, 0LL);
    v52 = (System_Action_ShopRootConstants_State__o *)sub_B170CC(
                                                        System_Action_ShopRootConstants_State__TypeInfo,
                                                        v48,
                                                        v49,
                                                        v50,
                                                        v51);
    System_Action_ShopRootConstants_State____ctor(
      v52,
      (Il2CppObject *)this,
      Method_ShopRootComponent_OnSelectTop__,
      (const MethodInfo_24B6054 *)Method_System_Action_ShopRootConstants_State___ctor__);
    v57 = (System_Action_int__o *)sub_B170CC(System_Action_int__TypeInfo, v53, v54, v55, v56);
    System_Action_int____ctor(
      v57,
      (Il2CppObject *)this,
      Method_ShopRootComponent_OnSelectEvent__,
      (const MethodInfo_24B5D80 *)Method_System_Action_int___ctor__);
    v62 = (System_Action_int__o *)sub_B170CC(System_Action_int__TypeInfo, v58, v59, v60, v61);
    System_Action_int____ctor(
      v62,
      (Il2CppObject *)this,
      Method_ShopRootComponent_OnSelectBuyItem__,
      (const MethodInfo_24B5D80 *)Method_System_Action_int___ctor__);
    v67 = (System_Action_ServantSellMenu_ResultKind__long____long____o *)sub_B170CC(
                                                                           System_Action_ServantSellMenu_ResultKind__long____long____TypeInfo,
                                                                           v63,
                                                                           v64,
                                                                           v65,
                                                                           v66);
    System_Action_ServantSellMenu_ResultKind__long____long______ctor(
      v67,
      (Il2CppObject *)this,
      Method_ShopRootComponent_OnSelectSellServant__,
      (const MethodInfo_24C6440 *)Method_System_Action_ServantSellMenu_ResultKind__long____long_____ctor__);
    v72 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v68, v69, v70, v71);
    System_Action___ctor(v72, (Il2CppObject *)this, Method_ShopRootComponent_OpenHelp__, 0LL);
    if ( !v42 )
      goto LABEL_23;
    ShopSceneListViewControlHelper__SetCallbackEvents(v42, v47, v52, v57, v62, v67, v72, v73);
    StateOnInit = ShopRootComponent__GetStateOnInit(v74, jumpInfoName, eventId, v75);
    this->fields.state = StateOnInit;
    if ( StateOnInit > 4 )
    {
      if ( (unsigned int)StateOnInit <= 0x14 )
      {
        v78 = 1;
        if ( ((1 << StateOnInit) & 0x110300) != 0 )
          goto LABEL_16;
      }
    }
    else
    {
      v78 = 1;
      if ( StateOnInit == 1 || StateOnInit == 4 )
        goto LABEL_16;
    }
    v78 = 0;
LABEL_16:
    isFromCoinRoom = this->fields.isFromCoinRoom;
    this->fields.inputState = v78;
    if ( isFromCoinRoom )
      saveScrollBarValue = this->fields.saveScrollBarValue;
    else
      saveScrollBarValue = -1.0;
    if ( *p_listViewHelper )
    {
      ShopSceneListViewControlHelper__SetListViewOnSceneInit(
        *p_listViewHelper,
        StateOnInit,
        eventId,
        saveScrollBarValue,
        &this->fields.selectedEventIndex,
        v77);
      ShopRootComponent__OpenEventItemWindow(this, this->fields.state, eventId, v81);
      if ( this->fields.state == 9 )
      {
        this->fields.jumpInfo = 0LL;
        sub_B16F98((BattleServantConfConponent_o *)&this->fields.jumpInfo, 0LL, v82, v83, v84, v85, v86, v87);
      }
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      v93 = (System_Action_int__o *)sub_B170CC(System_Action_int__TypeInfo, v89, v90, v91, v92);
      System_Action_int____ctor(
        v93,
        (Il2CppObject *)this,
        Method_ShopRootComponent__Init_b__71_0__,
        (const MethodInfo_24B5D80 *)Method_System_Action_int___ctor__);
      StoneCountRefreshComponent__AttachToGameObject(gameObject, v93, 0, 0LL);
      return;
    }
LABEL_23:
    sub_B170D4();
  }
}


void __fastcall ShopRootComponent__LoadBanner(ShopRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x19
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  ShopRootComponent_o *v17; // x0
  const MethodInfo *v18; // x3
  struct SceneJumpInfo_o *jumpInfo; // x8
  int32_t id; // w2
  System_String_o **p_name; // x8
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  System_Action_o *v26; // x20

  if ( (byte_40FB78F & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&AtlasManager_TypeInfo, v6);
    sub_B16FFC(&Method_ShopRootComponent___c__DisplayClass68_0__LoadBanner_b__0__, v7);
    sub_B16FFC(&ShopRootComponent___c__DisplayClass68_0_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_1, v9);
    byte_40FB78F = 1;
  }
  v10 = sub_B170CC(ShopRootComponent___c__DisplayClass68_0_TypeInfo, method, v2, v3, v4);
  ShopRootComponent___c__DisplayClass68_0___ctor((ShopRootComponent___c__DisplayClass68_0_o *)v10, 0LL);
  if ( !v10 )
    sub_B170D4();
  *(_QWORD *)(v10 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v10 + 16), (System_Int32_array **)this, v11, v12, v13, v14, v15, v16);
  jumpInfo = this->fields.jumpInfo;
  if ( jumpInfo )
  {
    id = jumpInfo->fields.id;
    p_name = &jumpInfo->fields.name;
  }
  else
  {
    p_name = (System_String_o **)&StringLiteral_1;
    id = 0;
  }
  *(_DWORD *)(v10 + 24) = ShopRootComponent__GetStateOnInit(v17, *p_name, id, v18);
  v26 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v22, v23, v24, v25);
  System_Action___ctor(v26, (Il2CppObject *)v10, Method_ShopRootComponent___c__DisplayClass68_0__LoadBanner_b__0__, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadOutGameAtlas(v26, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopRootComponent__MenuBackFromStonePurchase(
        ShopRootComponent_o *this,
        int32_t result,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  const MethodInfo *v6; // x2
  ShopSceneListViewControlHelper_o *listViewHelper; // x22
  int32_t v8; // w21
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x1

  if ( (byte_40FB7C5 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, *(_QWORD *)&result);
    byte_40FB7C5 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || ((CommonUI__CloseStonePurchaseMenu(Instance, 0LL),
         listViewHelper = this->fields.listViewHelper,
         this->fields.state != 8)
      ? (v8 = 1)
      : (v8 = 7),
        this->fields.state = v8,
        this->fields.inputState = 2,
        !listViewHelper) )
  {
    sub_B170D4();
  }
  ShopSceneListViewControlHelper__SetTopListViewInput(listViewHelper, v8, v6);
  ShopSceneListViewControlHelper__SetHelpButtonEnable(listViewHelper, v8, v9);
  if ( result == 2 )
    ShopRootComponent__RefreshInfo(this, v10);
}


void __fastcall ShopRootComponent__OnClickBack(ShopRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  const MethodInfo *v4; // x2

  if ( (byte_40FB7B4 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FB7B4 = 1;
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

  if ( (byte_40FB7AF & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FB7AF = 1;
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
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  System_Action_o *v12; // x21
  const MethodInfo *v13; // x2

  if ( (byte_40FB7B1 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_ShopRootComponent_CheckTutorial__, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    byte_40FB7B1 = 1;
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
    sub_B170D4();
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  helpListViewManager = this->fields.helpListViewManager;
  v12 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v8, v9, v10, v11);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_ShopRootComponent_CheckTutorial__, 0LL);
  if ( !helpListViewManager )
    goto LABEL_12;
  ShopHelpListViewManager__CloseHelpDialog(helpListViewManager, v12, v13);
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

  if ( (byte_40FB7AC & 1) == 0 )
  {
    sub_B16FFC(&BgmManager_TypeInfo, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    byte_40FB7AC = 1;
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
  ShopBuyItemListViewManager_o *buyItemListViewManager; // x0
  ShopBuyItemListViewItem_o *Item; // x0
  ShopEntity_o *Shop_k__BackingField; // x20
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  System_String_o *longName; // x20
  ScriptManager_CallbackFunc_o *v21; // x21
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FB7A8 & 1) == 0 )
  {
    sub_B16FFC(&ScriptManager_CallbackFunc_TypeInfo, isOk);
    sub_B16FFC(&Method_DataManager_GetMasterData_ShopScriptMaster___, v4);
    sub_B16FFC(&Method_DataMasterBase_ShopScriptMaster__ShopScriptEntity__int__TryGetEntity__, v5);
    sub_B16FFC(&ScriptManager_TypeInfo, v6);
    sub_B16FFC(&Method_ShopRootComponent_OnEndPlayScriptRequestShop__, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_40FB7A8 = 1;
  }
  entity = 0LL;
  requestResultDialog = this->fields.requestResultDialog;
  if ( !requestResultDialog )
    goto LABEL_21;
  RequestResultDialog__Close(requestResultDialog, 0LL);
  listViewHelper = this->fields.listViewHelper;
  if ( !listViewHelper )
    goto LABEL_21;
  buyItemListViewManager = listViewHelper->fields.buyItemListViewManager;
  if ( !buyItemListViewManager )
    goto LABEL_21;
  Item = ShopBuyItemListViewManager__GetItem(buyItemListViewManager, this->fields.selectedItemIndex, 0LL);
  if ( !Item )
    goto LABEL_21;
  Shop_k__BackingField = Item->fields._Shop_k__BackingField;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ShopScriptMaster___);
  if ( !Shop_k__BackingField || !MasterData_WarQuestSelectionMaster )
    goto LABEL_21;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          MasterData_WarQuestSelectionMaster,
          &entity,
          Shop_k__BackingField->fields.id,
          (const MethodInfo_266F3E4 *)Method_DataMasterBase_ShopScriptMaster__ShopScriptEntity__int__TryGetEntity__) )
    goto LABEL_13;
  if ( !entity )
    goto LABEL_21;
  if ( System_String__IsNullOrEmpty(entity->fields.longName, 0LL) )
  {
LABEL_13:
    if ( Shop_k__BackingField->fields.purchaseType == 14 )
      ShopRootComponent__PlayServantCostumeReleaseEffect(this, Shop_k__BackingField, v17);
    else
      ShopRootComponent__RequestEnd(this, v16);
    return;
  }
  if ( !entity )
LABEL_21:
    sub_B170D4();
  longName = entity->fields.longName;
  v21 = (ScriptManager_CallbackFunc_o *)sub_B170CC(ScriptManager_CallbackFunc_TypeInfo, v16, v17, v18, v19);
  ScriptManager_CallbackFunc___ctor(
    v21,
    (Il2CppObject *)this,
    Method_ShopRootComponent_OnEndPlayScriptRequestShop__,
    0LL);
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  ScriptManager__PlayShop(longName, v21, 0, 0LL);
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
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  System_Action_o *v11; // x21

  if ( (byte_40FB7A9 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isExit);
    sub_B16FFC(&Method_ShopRootComponent_OnEndFadeRequestShop__, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_40FB7A9 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v7, v8, v9, v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_ShopRootComponent_OnEndFadeRequestShop__, 0LL);
  if ( !Instance )
    sub_B170D4();
  CommonUI__maskFadein(Instance, 1.0, v11, 0LL);
}


void __fastcall ShopRootComponent__OnEndPlayServantCostumeReleaseEffect(
        ShopRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v11; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v13; // x21

  if ( (byte_40FB7AB & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v3);
    sub_B16FFC(&Method_ShopRootComponent_RequestEnd__, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_40FB7AB = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v11 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v11->static_fields->DEFAULT_FADE_TIME;
  v13 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v6, v7, v8, v9);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_ShopRootComponent_RequestEnd__, 0LL);
  if ( !Instance )
    sub_B170D4();
  CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, v13, 0LL);
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
    sub_B170D4();
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
  int32_t BuyItemKind; // w0
  const MethodInfo *v6; // x3
  int32_t v7; // w21
  int32_t EventId; // w0
  const MethodInfo *v9; // x1
  ShopSceneListViewControlHelper_o *listViewHelper; // x0

  ShopRootComponent__RefreshInfo(this, (const MethodInfo *)receivedNewServant);
  currencyInfoController = this->fields.currencyInfoController;
  BuyItemKind = ShopBuyItemListViewManager__GetBuyItemKind(this->fields.state, 0LL);
  if ( !this->fields.listViewHelper
    || (v7 = BuyItemKind,
        EventId = ShopSceneListViewControlHelper__GetEventId(
                    this->fields.listViewHelper,
                    this->fields.state,
                    this->fields.selectedEventIndex,
                    v6),
        !currencyInfoController)
    || (ShopCurrencyInfoController__RefreshEventItemWindow(currencyInfoController, v7, EventId, 0, 0LL),
        (listViewHelper = this->fields.listViewHelper) == 0LL) )
  {
    sub_B170D4();
  }
  ShopSceneListViewControlHelper__SetListViewInvalidate(listViewHelper, v9);
  return 1;
}


void __fastcall ShopRootComponent__OnGiftOpen(ShopRootComponent_o *this, const MethodInfo *method)
{
  ShopPlayVoiceComponent_o *shopPlayVoiceComponent; // x0

  shopPlayVoiceComponent = this->fields.shopPlayVoiceComponent;
  if ( !shopPlayVoiceComponent )
    sub_B170D4();
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
      sub_B170D4();
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
      sub_B170D4();
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
  struct ShopSceneListViewControlHelper_o *listViewHelper; // x8
  ShopBuyItemListViewManager_o *buyItemListViewManager; // x0
  ShopBuyItemListViewItem_o *Item; // x0
  const MethodInfo *v8; // x2
  bool IsBulk; // w2
  const MethodInfo *v10; // x3

  if ( (byte_40FB7B7 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, *(_QWORD *)&index);
    byte_40FB7B7 = 1;
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
      sub_B170D4();
    Item = ShopBuyItemListViewManager__GetItem(buyItemListViewManager, index, 0LL);
    IsBulk = ShopRootComponent__GetIsBulk((ShopRootComponent_o *)Item, Item, v8);
    ShopRootComponent__SelectItem(this, index, IsBulk, v10);
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
  struct ShopSceneListViewControlHelper_o *listViewHelper; // x8
  ShopEventListViewManager_o *eventListViewManager; // x0
  ShopEventListViewItem_o *Item; // x20
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  EventDetailEntity_o *Entity; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  int32_t eventId; // w21
  SceneJumpInfo_o *v23; // x19
  CommonUI_o *v24; // x0
  AvalonSceneManager_o *v25; // x0

  if ( (byte_40FB7B9 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventDetailMaster___, *(_QWORD *)&index);
    sub_B16FFC(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v5);
    sub_B16FFC(&SceneJumpInfo_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_B16FFC(&SoundManager_TypeInfo, v10);
    sub_B16FFC(&StringLiteral_9601, v11);
    byte_40FB7B9 = 1;
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
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Item )
    goto LABEL_18;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_18;
  Entity = (EventDetailEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    MasterData_WarQuestSelectionMaster,
                                    Item->fields.eventId,
                                    (const MethodInfo_266F388 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  if ( !Entity )
    goto LABEL_18;
  if ( EventDetailEntity__IsEventShop(Entity, 0LL) )
  {
    eventId = Item->fields.eventId;
    v23 = (SceneJumpInfo_o *)sub_B170CC(SceneJumpInfo_TypeInfo, v18, v19, v20, v21);
    SceneJumpInfo___ctor_29748028(v23, (System_String_o *)StringLiteral_9601, eventId, 0LL);
    if ( v23 )
    {
      SceneJumpInfo__SetReturnNowScene(v23, 0LL);
      v24 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( v24 )
      {
        CommonUI__CheckChangeOtherConnectMarkFromEventId(v24, Item->fields.eventId, 1, 0LL);
        v25 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( v25 )
        {
          AvalonSceneManager__transitionScene(v25, 72, 1, (Il2CppObject *)v23, 0LL);
          return;
        }
      }
    }
LABEL_18:
    sub_B170D4();
  }
  ShopRootComponent__SelectMenu(this, 8, v19);
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
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.selectedServantIds,
      (System_Int32_array **)servantList,
      (System_String_array **)servantList,
      (System_String_array **)commandCodeList,
      (System_Boolean_array **)method,
      v5,
      v6,
      v7);
    this->fields.selectedCommandCodeIds = commandCodeList;
    sub_B16F98(
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

  if ( (byte_40FB7B6 & 1) == 0 )
  {
    sub_B16FFC(&CoinRoomUtility_TypeInfo, *(_QWORD *)&state);
    sub_B16FFC(&ShopRootConstants_TypeInfo, v5);
    sub_B16FFC(&SoundManager_TypeInfo, v6);
    byte_40FB7B6 = 1;
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
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  ShopBuyItemListViewItem_o **v23; // x22
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  ShopBuyItemListViewItem_o *v34; // x20
  struct ShopBuyBulkItemConfirmMenu_o *ApSeedBulkExchangeConfirmMenu; // x21
  ShopEntity_o *v36; // x22
  System_Action_int__o *v37; // x23
  int32_t v38; // w4
  ShopBuyBulkItemConfirmMenu_o *v39; // x0
  ShopEntity_o *v40; // x1
  ShopBuyItemListViewItem_o *v41; // x2
  System_Action_int__o *v42; // x3
  ShopBuyItemListViewItem_o *v43; // x8
  struct ShopBuyItemConfirmMenu_o *buyItemConfirmMenu; // x20
  ShopEntity_o *v45; // x21
  int32_t ShopKind_k__BackingField; // w22
  System_Action_int__o *v47; // x23
  ShopBuyItemConfirmMenu_o *v48; // x0
  ShopEntity_o *v49; // x1
  int32_t v50; // w2
  ShopBuyItemConfirmMenu_o *v51; // x20
  ShopBuyItemListViewItem_o *v52; // x21
  System_Action_o *v53; // x0
  __int64 *v54; // x8
  int32_t KindByShopState; // w0
  int32_t v56; // w21
  ShopEntity_o *Shop_k__BackingField; // x0
  _BOOL8 IsSoldOut; // x0
  __int64 v59; // x1
  const MethodInfo *v60; // x2
  __int64 v61; // x3
  __int64 v62; // x4
  BuyStorageConfirmDialogComponent_o *buyStorageNotificationDialog; // x20
  ShopBuyItemListViewItem_o *v64; // x22
  System_Action_int__o *v65; // x23
  int32_t v66; // w2
  bool IsItemTypeRarePri; // w0
  __int64 v68; // x1
  __int64 v69; // x2
  __int64 v70; // x3
  __int64 v71; // x4
  System_Action_o *v72; // x22
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x3
  __int64 v76; // x4
  System_Action_int__o *v77; // x23
  int32_t Currency; // w0
  int32_t v79; // w23
  ShopEntity_o *v80; // x0
  __int64 v81; // x1
  __int64 v82; // x2
  __int64 v83; // x3
  __int64 v84; // x4
  ShopBuyItemListViewItem_o *v85; // x20
  struct ShopBuyBulkItemConfirmMenu_o *buyBulkItemConfirmMenu; // x21
  ShopEntity_o *v87; // x22
  System_Action_int__o *v88; // x23
  ShopEntity_o *v89; // x22
  int32_t v90; // w21
  BuyStorageConfirmDialogComponent_o *buyStorageConfirmDialog; // x20
  ShopBuyItemListViewItem_o *v92; // x22
  System_Action_int__o *v93; // x23

  if ( (byte_40FB798 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_int___ctor__, *(_QWORD *)&state);
    sub_B16FFC(&System_Action_int__TypeInfo, v9);
    sub_B16FFC(&System_Action_TypeInfo, v10);
    sub_B16FFC(&Method_ShopRootComponent_CloseStorageDetailCheckConfirm__, v11);
    sub_B16FFC(&Method_ShopRootComponent_SelectedBuyItemConfirm__, v12);
    sub_B16FFC(&Method_ShopRootComponent___c__DisplayClass81_0__OpenConfirmMenu_b__0__, v13);
    sub_B16FFC(&Method_ShopRootComponent___c__DisplayClass81_0__OpenConfirmMenu_b__1__, v14);
    sub_B16FFC(&ShopRootComponent___c__DisplayClass81_0_TypeInfo, v15);
    byte_40FB798 = 1;
  }
  v16 = sub_B170CC(ShopRootComponent___c__DisplayClass81_0_TypeInfo, *(_QWORD *)&state, item, isBulk, method);
  ShopRootComponent___c__DisplayClass81_0___ctor((ShopRootComponent___c__DisplayClass81_0_o *)v16, 0LL);
  if ( !v16 )
    goto LABEL_50;
  *(_QWORD *)(v16 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v16 + 16), (System_Int32_array **)this, v17, v18, v19, v20, v21, v22);
  *(_QWORD *)(v16 + 24) = item;
  v23 = (ShopBuyItemListViewItem_o **)(v16 + 24);
  sub_B16F98((BattleServantConfConponent_o *)(v16 + 24), (System_Int32_array **)item, v24, v25, v26, v27, v28, v29);
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
      v43 = *v23;
      if ( !*v23 )
        goto LABEL_50;
      buyItemConfirmMenu = this->fields.buyItemConfirmMenu;
      goto LABEL_13;
    case 3:
    case 15:
      if ( isBulk )
        goto LABEL_6;
      v51 = this->fields.buyItemConfirmMenu;
      v52 = *(ShopBuyItemListViewItem_o **)(v16 + 24);
      v53 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v30, v31, v32, v33);
      v54 = &Method_ShopRootComponent___c__DisplayClass81_0__OpenConfirmMenu_b__0__;
      goto LABEL_27;
    case 11:
    case 12:
      KindByShopState = BuyStorageConfirmDialogComponent__GetKindByShopState(state, 0LL);
      if ( !*v23 )
        goto LABEL_50;
      v56 = KindByShopState;
      Shop_k__BackingField = (*v23)->fields._Shop_k__BackingField;
      if ( !Shop_k__BackingField )
        goto LABEL_50;
      IsSoldOut = ShopEntity__IsSoldOut(Shop_k__BackingField, 0LL);
      if ( IsSoldOut )
      {
        buyStorageNotificationDialog = this->fields.buyStorageNotificationDialog;
        v64 = *v23;
        v65 = (System_Action_int__o *)sub_B170CC(System_Action_int__TypeInfo, v59, v60, v61, v62);
        System_Action_int____ctor(
          v65,
          (Il2CppObject *)this,
          Method_ShopRootComponent_SelectedBuyItemConfirm__,
          (const MethodInfo_24B5D80 *)Method_System_Action_int___ctor__);
        if ( buyStorageNotificationDialog )
        {
          v66 = 1;
LABEL_38:
          BuyStorageConfirmDialogComponent__NotificationDialogOpen(
            buyStorageNotificationDialog,
            v56,
            v66,
            v64,
            v65,
            0LL);
          return;
        }
        goto LABEL_50;
      }
      if ( !*v23 )
        goto LABEL_50;
      Currency = ShopRootComponent__GetCurrency(
                   (ShopRootComponent_o *)IsSoldOut,
                   (*v23)->fields._Shop_k__BackingField,
                   v60);
      if ( !*v23 )
        goto LABEL_50;
      v79 = Currency;
      v80 = (*v23)->fields._Shop_k__BackingField;
      if ( !v80 )
        goto LABEL_50;
      if ( v79 < ShopEntity__GetPrice(v80, 0LL) )
      {
        buyStorageNotificationDialog = this->fields.buyStorageNotificationDialog;
        v64 = *v23;
        v65 = (System_Action_int__o *)sub_B170CC(System_Action_int__TypeInfo, v81, v82, v83, v84);
        System_Action_int____ctor(
          v65,
          (Il2CppObject *)this,
          Method_ShopRootComponent_SelectedBuyItemConfirm__,
          (const MethodInfo_24B5D80 *)Method_System_Action_int___ctor__);
        if ( buyStorageNotificationDialog )
        {
          v66 = 2;
          goto LABEL_38;
        }
LABEL_50:
        sub_B170D4();
      }
      if ( isBulk )
      {
        v85 = *v23;
        if ( !*v23 )
          goto LABEL_50;
        buyBulkItemConfirmMenu = this->fields.buyBulkItemConfirmMenu;
        v87 = v85->fields._Shop_k__BackingField;
        v88 = (System_Action_int__o *)sub_B170CC(System_Action_int__TypeInfo, v81, v82, v83, v84);
        System_Action_int____ctor(
          v88,
          (Il2CppObject *)this,
          Method_ShopRootComponent_SelectedBuyItemConfirm__,
          (const MethodInfo_24B5D80 *)Method_System_Action_int___ctor__);
        if ( !buyBulkItemConfirmMenu )
          goto LABEL_50;
        v39 = buyBulkItemConfirmMenu;
        v40 = v87;
        v41 = v85;
        v42 = v88;
        v38 = 0;
LABEL_10:
        ShopBuyBulkItemConfirmMenu__Open(v39, v40, v41, v42, v38, 0LL);
        return;
      }
      buyStorageConfirmDialog = this->fields.buyStorageConfirmDialog;
      this->fields.buyCount = 1;
      v92 = *v23;
      v93 = (System_Action_int__o *)sub_B170CC(System_Action_int__TypeInfo, v81, v82, v83, v84);
      System_Action_int____ctor(
        v93,
        (Il2CppObject *)this,
        Method_ShopRootComponent_CloseStorageDetailCheckConfirm__,
        (const MethodInfo_24B5D80 *)Method_System_Action_int___ctor__);
      if ( !buyStorageConfirmDialog )
        goto LABEL_50;
      BuyStorageConfirmDialogComponent__Open(buyStorageConfirmDialog, v56, v92, 1, v93, 0LL);
      return;
    case 19:
      if ( isBulk )
      {
        v34 = *v23;
        if ( !*v23 )
          goto LABEL_50;
        ApSeedBulkExchangeConfirmMenu = this->fields.ApSeedBulkExchangeConfirmMenu;
        goto LABEL_8;
      }
      v43 = *v23;
      if ( !*v23 )
        goto LABEL_50;
      buyItemConfirmMenu = this->fields.ApSeedExchangeConfirmMenu;
LABEL_13:
      v45 = v43->fields._Shop_k__BackingField;
      ShopKind_k__BackingField = v43->fields._ShopKind_k__BackingField;
      v47 = (System_Action_int__o *)sub_B170CC(System_Action_int__TypeInfo, v30, v31, v32, v33);
      System_Action_int____ctor(
        v47,
        (Il2CppObject *)this,
        Method_ShopRootComponent_SelectedBuyItemConfirm__,
        (const MethodInfo_24B5D80 *)Method_System_Action_int___ctor__);
      if ( !buyItemConfirmMenu )
        goto LABEL_50;
      v48 = buyItemConfirmMenu;
      v49 = v45;
      v50 = ShopKind_k__BackingField;
      break;
    case 21:
      if ( isBulk )
      {
LABEL_6:
        v34 = *v23;
        if ( !*v23 )
          goto LABEL_50;
        ApSeedBulkExchangeConfirmMenu = this->fields.buyBulkItemConfirmMenu;
LABEL_8:
        v36 = v34->fields._Shop_k__BackingField;
        v37 = (System_Action_int__o *)sub_B170CC(System_Action_int__TypeInfo, v30, v31, v32, v33);
        System_Action_int____ctor(
          v37,
          (Il2CppObject *)this,
          Method_ShopRootComponent_SelectedBuyItemConfirm__,
          (const MethodInfo_24B5D80 *)Method_System_Action_int___ctor__);
        if ( !ApSeedBulkExchangeConfirmMenu )
          goto LABEL_50;
        v38 = 8;
        v39 = ApSeedBulkExchangeConfirmMenu;
        v40 = v36;
        v41 = v34;
        v42 = v37;
        goto LABEL_10;
      }
      if ( !*v23 )
        goto LABEL_50;
      IsItemTypeRarePri = ShopBuyItemListViewItem__get_IsItemTypeRarePri(*v23, 0LL);
      v51 = this->fields.buyItemConfirmMenu;
      v52 = *v23;
      if ( IsItemTypeRarePri )
      {
        v53 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v68, v69, v70, v71);
        v54 = &Method_ShopRootComponent___c__DisplayClass81_0__OpenConfirmMenu_b__1__;
LABEL_27:
        v72 = v53;
        System_Action___ctor(v53, (Il2CppObject *)v16, *v54, 0LL);
        v77 = (System_Action_int__o *)sub_B170CC(System_Action_int__TypeInfo, v73, v74, v75, v76);
        System_Action_int____ctor(
          v77,
          (Il2CppObject *)this,
          Method_ShopRootComponent_SelectedBuyItemConfirm__,
          (const MethodInfo_24B5D80 *)Method_System_Action_int___ctor__);
        if ( v51 )
        {
          ShopBuyItemConfirmMenu__OpenAfterCheckedFree(v51, v52, v72, v77, 0LL);
          return;
        }
        goto LABEL_50;
      }
      if ( !v52 )
        goto LABEL_50;
      v89 = v52->fields._Shop_k__BackingField;
      v90 = v52->fields._ShopKind_k__BackingField;
      v47 = (System_Action_int__o *)sub_B170CC(System_Action_int__TypeInfo, v68, v69, v70, v71);
      System_Action_int____ctor(
        v47,
        (Il2CppObject *)this,
        Method_ShopRootComponent_SelectedBuyItemConfirm__,
        (const MethodInfo_24B5D80 *)Method_System_Action_int___ctor__);
      if ( !v51 )
        goto LABEL_50;
      v48 = v51;
      v49 = v89;
      v50 = v90;
      break;
    default:
      return;
  }
  ShopBuyItemConfirmMenu__Open(v48, v49, v50, v47, 0, 0LL);
  return;
}


void __fastcall ShopRootComponent__OpenDetailCheck(ShopRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct ShopSceneListViewControlHelper_o *listViewHelper; // x8
  ShopBuyItemListViewManager_o *buyItemListViewManager; // x0
  ShopBuyItemListViewItem_o *Item; // x20
  WebViewManager_o *Instance; // x0
  ShopDetailMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct ShopEntity_o *Shop_k__BackingField; // x8
  ShopDetailEntity_o *ShopDetailEntity; // x21
  WebViewManager_o *v15; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  System_String_o *message; // x21
  CommonUI_o *v21; // x20
  CommonConfirmDialog_ClickDelegate_o *v22; // x22

  if ( (byte_40FB7BA & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&CommonConfirmDialog_ClickDelegate_TypeInfo, v3);
    sub_B16FFC(&Method_DataManager_GetMasterData_ShopDetailMaster___, v4);
    sub_B16FFC(&Method_ShopRootComponent_CloseDetaiCheckConfirm__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_40FB7BA = 1;
  }
  listViewHelper = this->fields.listViewHelper;
  if ( !listViewHelper )
    goto LABEL_15;
  buyItemListViewManager = listViewHelper->fields.buyItemListViewManager;
  if ( !buyItemListViewManager )
    goto LABEL_15;
  Item = ShopBuyItemListViewManager__GetItem(buyItemListViewManager, this->fields.selectedItemIndex, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_WarQuestSelectionMaster = (ShopDetailMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)Instance,
                                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ShopDetailMaster___);
  if ( !Item )
    goto LABEL_15;
  Shop_k__BackingField = Item->fields._Shop_k__BackingField;
  if ( !Shop_k__BackingField )
    goto LABEL_15;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_15;
  ShopDetailEntity = ShopDetailMaster__getShopDetailEntity(
                       MasterData_WarQuestSelectionMaster,
                       Shop_k__BackingField->fields.id,
                       0LL);
  v15 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !ShopDetailEntity )
    goto LABEL_15;
  message = ShopDetailEntity->fields.message;
  v21 = (CommonUI_o *)v15;
  v22 = (CommonConfirmDialog_ClickDelegate_o *)sub_B170CC(
                                                 CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                 v16,
                                                 v17,
                                                 v18,
                                                 v19);
  CommonConfirmDialog_ClickDelegate___ctor(
    v22,
    (Il2CppObject *)this,
    Method_ShopRootComponent_CloseDetaiCheckConfirm__,
    0LL);
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  }
  if ( !v21 )
LABEL_15:
    sub_B170D4();
  CommonUI__OpenConfirmDialog_18237400(
    v21,
    0LL,
    message,
    1,
    v22,
    BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
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
  struct UIPanel_o *shopEventItemDrawBase; // x0
  bool IsShowEventItemWindow; // w0
  bool v9; // w20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *giftButtonControl; // x0
  UnityEngine_GameObject_o *v12; // x0
  const MethodInfo *v13; // x1
  UnityEngine_Transform_o *transform; // x21
  int v15; // s0
  UnityEngine_Component_o *v18; // x0
  UnityEngine_GameObject_o *v19; // x0
  ShopRootConstants_c *v20; // x8
  UnityEngine_GameObject_o *v21; // x19

  if ( (byte_40FB7BF & 1) == 0 )
  {
    sub_B16FFC(&ShopRootConstants_TypeInfo, *(_QWORD *)&state);
    byte_40FB7BF = 1;
  }
  shopEventItemDrawBase = this->fields.shopEventItemDrawBase;
  if ( !shopEventItemDrawBase )
    goto LABEL_19;
  ((void (__fastcall *)(struct UIPanel_o *, Il2CppMethodPointer, _QWORD, const MethodInfo *, float))shopEventItemDrawBase->klass->vtable._8_set_alpha.method)(
    shopEventItemDrawBase,
    shopEventItemDrawBase->klass->vtable._9_CalculateFinalAlpha.methodPtr,
    *(_QWORD *)&eventId,
    method,
    0.0);
  IsShowEventItemWindow = ShopBuyItemListViewManager__GetIsShowEventItemWindow(state, eventId, 0LL);
  if ( !this->fields.shopEventItemDrawBase )
    goto LABEL_19;
  v9 = IsShowEventItemWindow;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.shopEventItemDrawBase, 0LL);
  if ( !gameObject )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive(gameObject, v9, 0LL);
  giftButtonControl = (UnityEngine_Component_o *)this->fields.giftButtonControl;
  if ( !giftButtonControl )
    goto LABEL_19;
  v12 = UnityEngine_Component__get_gameObject(giftButtonControl, 0LL);
  if ( !v12 )
    goto LABEL_19;
  transform = UnityEngine_GameObject__get_transform(v12, 0LL);
  if ( (BYTE3(ShopRootConstants_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ShopRootConstants_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
  }
  *(UnityEngine_Vector3_o *)&v15 = ShopRootConstants__GetGiftButtonPos(v9, v13);
  if ( !transform )
    goto LABEL_19;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v15, 0LL);
  if ( !v9 )
    return;
  v18 = (UnityEngine_Component_o *)this->fields.shopEventItemDrawBase;
  if ( !v18 )
LABEL_19:
    sub_B170D4();
  v19 = UnityEngine_Component__get_gameObject(v18, 0LL);
  v20 = ShopRootConstants_TypeInfo;
  v21 = v19;
  if ( (BYTE3(ShopRootConstants_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ShopRootConstants_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
    v20 = ShopRootConstants_TypeInfo;
  }
  TweenAlpha__Begin(v21, v20->static_fields->OPEN_TIME, 1.0, 0LL);
}


void __fastcall ShopRootComponent__OpenHelp(ShopRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t state; // w9
  ShopSceneListViewControlHelper_o *listViewHelper; // x0
  TitleInfoControl_o *titleInfo; // x0
  CommonUI_o *Instance; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  System_Action_o *v15; // x21
  int32_t v16; // w1
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  TitleInfoControl_o *v29; // x0
  const MethodInfo *v30; // x1
  int32_t v31; // w19
  System_String_o *HelpSaveKey; // x0

  if ( (byte_40FB7B0 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_ShopRootComponent_OnClickHelpClose__, v4);
    sub_B16FFC(&ShopRootConstants_TypeInfo, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_40FB7B0 = 1;
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
      titleInfo = this->fields.titleInfo;
      if ( !titleInfo )
        goto LABEL_22;
      TitleInfoControl__SetHelpBtn(titleInfo, 0, 0LL);
      return;
    case 2:
    case 4:
      return;
    case 3:
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v15 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v21, v22, v23, v24);
      System_Action___ctor(v15, (Il2CppObject *)this, Method_ShopRootComponent_OnClickHelpClose__, 0LL);
      if ( !Instance )
        goto LABEL_22;
      v16 = 20;
      goto LABEL_17;
    case 5:
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v15 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v17, v18, v19, v20);
      System_Action___ctor(v15, (Il2CppObject *)this, Method_ShopRootComponent_OnClickHelpClose__, 0LL);
      if ( !Instance )
        goto LABEL_22;
      v16 = 47;
      goto LABEL_17;
    case 6:
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v15 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v25, v26, v27, v28);
      System_Action___ctor(v15, (Il2CppObject *)this, Method_ShopRootComponent_OnClickHelpClose__, 0LL);
      if ( !Instance )
        goto LABEL_22;
      v16 = 19;
      goto LABEL_17;
    default:
      if ( state != 20 )
        return;
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v15 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v11, v12, v13, v14);
      System_Action___ctor(v15, (Il2CppObject *)this, Method_ShopRootComponent_OnClickHelpClose__, 0LL);
      if ( !Instance )
        goto LABEL_22;
      v16 = 1029;
LABEL_17:
      CommonUI__OpenTutorialImageDialog_18263036(Instance, v16, -1, v15, 0LL, 0LL, 0LL);
      v29 = this->fields.titleInfo;
      if ( !v29 )
LABEL_22:
        sub_B170D4();
      TitleInfoControl__SetHelpBtn(v29, 0, 0LL);
      v31 = this->fields.state;
      if ( (BYTE3(ShopRootConstants_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ShopRootConstants_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
      }
      HelpSaveKey = ShopRootConstants__GetHelpSaveKey(v31, v30);
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
  System_String_o *LimitCountSealedDialogMessage; // x0
  SummonInfoDlgComponent_o *limitCountSealInfoDlg; // x21
  System_String_o *v15; // x20
  System_String_o *v16; // x22
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  SummonInfoDlgComponent_CallbackFunc_o *v21; // x23

  if ( (byte_40FB799 & 1) == 0 )
  {
    sub_B16FFC(&SummonInfoDlgComponent_CallbackFunc_TypeInfo, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v7);
    sub_B16FFC(&DataManager_TypeInfo, v8);
    sub_B16FFC(&LocalizationManager_TypeInfo, v9);
    sub_B16FFC(&Method_ShopRootComponent_EndLimitCountSealInfoDialog__, v10);
    sub_B16FFC(&StringLiteral_8359, v11);
    byte_40FB799 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_12;
  LimitCountSealedDialogMessage = ServantLimitImageMaster__GetLimitCountSealedDialogMessage(
                                    Master_WarQuestSelectionMaster,
                                    svtId,
                                    limitCount,
                                    0LL);
  limitCountSealInfoDlg = this->fields.limitCountSealInfoDlg;
  v15 = LimitCountSealedDialogMessage;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_8359, 0LL);
  v21 = (SummonInfoDlgComponent_CallbackFunc_o *)sub_B170CC(
                                                   SummonInfoDlgComponent_CallbackFunc_TypeInfo,
                                                   v17,
                                                   v18,
                                                   v19,
                                                   v20);
  SummonInfoDlgComponent_CallbackFunc___ctor(
    v21,
    (Il2CppObject *)this,
    Method_ShopRootComponent_EndLimitCountSealInfoDialog__,
    0LL);
  if ( !limitCountSealInfoDlg )
LABEL_12:
    sub_B170D4();
  SummonInfoDlgComponent__OpenInfoMessageDlg(limitCountSealInfoDlg, v16, v15, v21, 0LL);
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
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  StonePurchaseMenu_CallbackFunc_o *v14; // x21
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  System_Action_o *v19; // x22

  if ( (byte_40FB7C3 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&state);
    sub_B16FFC(&StonePurchaseMenu_CallbackFunc_TypeInfo, v5);
    sub_B16FFC(&Method_ShopRootComponent_CloseStonePurchaseMenu__, v6);
    sub_B16FFC(&Method_ShopRootComponent_RefreshInfo__, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    byte_40FB7C3 = 1;
  }
  if ( state == 10 )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v14 = (StonePurchaseMenu_CallbackFunc_o *)sub_B170CC(StonePurchaseMenu_CallbackFunc_TypeInfo, v10, v11, v12, v13);
    StonePurchaseMenu_CallbackFunc___ctor(
      v14,
      (Il2CppObject *)this,
      Method_ShopRootComponent_CloseStonePurchaseMenu__,
      0LL);
    v19 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v15, v16, v17, v18);
    System_Action___ctor(v19, (Il2CppObject *)this, Method_ShopRootComponent_RefreshInfo__, 0LL);
    if ( !Instance )
      sub_B170D4();
    CommonUI__OpenStonePurchaseMenu(Instance, v14, v19, 0LL);
  }
}


void __fastcall ShopRootComponent__OpenStorageDetailCheck(ShopRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct ShopSceneListViewControlHelper_o *listViewHelper; // x8
  ShopBuyItemListViewManager_o *buyItemListViewManager; // x0
  ShopBuyItemListViewItem_o *Item; // x20
  int32_t KindByShopState; // w0
  BuyStorageConfirmDialogComponent_o *buyStorageConfirmDialog; // x22
  int32_t buyCount; // w21
  int32_t v11; // w23
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  System_Action_int__o *v16; // x24

  if ( (byte_40FB7BB & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_int___ctor__, method);
    sub_B16FFC(&System_Action_int__TypeInfo, v3);
    sub_B16FFC(&Method_ShopRootComponent_CloseStorageDetailCheckConfirm__, v4);
    byte_40FB7BB = 1;
  }
  listViewHelper = this->fields.listViewHelper;
  if ( !listViewHelper )
    goto LABEL_7;
  buyItemListViewManager = listViewHelper->fields.buyItemListViewManager;
  if ( !buyItemListViewManager
    || (Item = ShopBuyItemListViewManager__GetItem(buyItemListViewManager, this->fields.selectedItemIndex, 0LL),
        KindByShopState = BuyStorageConfirmDialogComponent__GetKindByShopState(this->fields.state, 0LL),
        buyStorageConfirmDialog = this->fields.buyStorageConfirmDialog,
        buyCount = this->fields.buyCount,
        v11 = KindByShopState,
        v16 = (System_Action_int__o *)sub_B170CC(System_Action_int__TypeInfo, v12, v13, v14, v15),
        System_Action_int____ctor(
          v16,
          (Il2CppObject *)this,
          Method_ShopRootComponent_CloseStorageDetailCheckConfirm__,
          (const MethodInfo_24B5D80 *)Method_System_Action_int___ctor__),
        !buyStorageConfirmDialog) )
  {
LABEL_7:
    sub_B170D4();
  }
  BuyStorageConfirmDialogComponent__Open(buyStorageConfirmDialog, v11, Item, buyCount, v16, 0LL);
}


void __fastcall ShopRootComponent__PlayLvExceedItemReleaseEffect(
        ShopRootComponent_o *this,
        ShopBuyItemListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x20
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
  __int64 v27; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  const MethodInfo *v30; // x3
  __int64 v31; // x4
  __int64 v32; // x8
  __int64 v33; // x8
  int v34; // w21
  BalanceConfig_c *v35; // x0
  QuestRewardInfo_o *v36; // x22
  __int64 v37; // x21
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  __int64 v44; // x8
  __int64 v45; // x8
  __int64 v46; // x8
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x4
  CommonUI_o *Instance; // x19
  AvalonSceneManager_c *v52; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v54; // x21

  if ( (byte_40FB7A4 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, item);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v7);
    sub_B16FFC(&BalanceConfig_TypeInfo, v8);
    sub_B16FFC(&QuestRewardInfo_TypeInfo, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_B16FFC(&Method_ShopRootComponent___c__DisplayClass95_0__PlayLvExceedItemReleaseEffect_b__0__, v11);
    sub_B16FFC(&ShopRootComponent___c__DisplayClass95_0_TypeInfo, v12);
    byte_40FB7A4 = 1;
  }
  v13 = sub_B170CC(ShopRootComponent___c__DisplayClass95_0_TypeInfo, item, method, v3, v4);
  ShopRootComponent___c__DisplayClass95_0___ctor((ShopRootComponent___c__DisplayClass95_0_o *)v13, 0LL);
  if ( !v13 )
    goto LABEL_26;
  *(_QWORD *)(v13 + 24) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v13 + 24), (System_Int32_array **)this, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v13 + 32) = item;
  v20 = (ShopBuyItemListViewItem_o **)(v13 + 32);
  sub_B16F98((BattleServantConfConponent_o *)(v13 + 32), (System_Int32_array **)item, v21, v22, v23, v24, v25, v26);
  if ( !*(_QWORD *)(v13 + 32) )
    goto LABEL_26;
  v32 = *(_QWORD *)(*(_QWORD *)(v13 + 32) + 112LL);
  if ( !v32 )
    goto LABEL_26;
  v33 = *(_QWORD *)(v32 + 56);
  if ( !v33 )
    goto LABEL_26;
  if ( !*(_DWORD *)(v33 + 24) )
  {
LABEL_27:
    sub_B17100(v27, v28, v29);
    sub_B170A0();
  }
  v34 = *(_DWORD *)(v33 + 32);
  v35 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v35 = BalanceConfig_TypeInfo;
  }
  if ( v34 == v35->static_fields->LvExceedItemId )
  {
    v36 = (QuestRewardInfo_o *)sub_B170CC(QuestRewardInfo_TypeInfo, v28, v29, v30, v31);
    QuestRewardInfo___ctor(v36, 0LL);
    *(_QWORD *)(v13 + 16) = v36;
    v37 = v13 + 16;
    sub_B16F98((BattleServantConfConponent_o *)(v13 + 16), (System_Int32_array **)v36, v38, v39, v40, v41, v42, v43);
    v44 = *(_QWORD *)(v13 + 32);
    if ( !v44 )
      goto LABEL_26;
    v45 = *(_QWORD *)(v44 + 112);
    if ( !v45 )
      goto LABEL_26;
    v46 = *(_QWORD *)(v45 + 56);
    if ( !v46 )
      goto LABEL_26;
    if ( *(_DWORD *)(v46 + 24) )
    {
      if ( *(_QWORD *)v37 )
      {
        *(_DWORD *)(*(_QWORD *)v37 + 20LL) = *(_DWORD *)(v46 + 32);
        if ( *(_QWORD *)v37 )
        {
          *(_DWORD *)(*(_QWORD *)v37 + 24LL) = this->fields.buyCount;
          if ( *(_QWORD *)v37 )
          {
            *(_DWORD *)(*(_QWORD *)v37 + 16LL) = 2;
            Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v52 = AvalonSceneManager_TypeInfo;
            if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
              v52 = AvalonSceneManager_TypeInfo;
            }
            DEFAULT_FADE_TIME = v52->static_fields->DEFAULT_FADE_TIME;
            v54 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v47, v48, v49, v50);
            System_Action___ctor(
              v54,
              (Il2CppObject *)v13,
              Method_ShopRootComponent___c__DisplayClass95_0__PlayLvExceedItemReleaseEffect_b__0__,
              0LL);
            if ( Instance )
            {
              CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v54, 0LL);
              return;
            }
          }
        }
      }
LABEL_26:
      sub_B170D4();
    }
    goto LABEL_27;
  }
  if ( !*v20 )
    goto LABEL_26;
  ShopRootComponent__ShowNormalItemDialog(this, *v20, (*v20)->fields._Shop_k__BackingField, v30);
}


void __fastcall ShopRootComponent__PlayServantCostumeReleaseEffect(
        ShopRootComponent_o *this,
        ShopEntity_o *shopEntity,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x19
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
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v30; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v32; // x21

  if ( (byte_40FB7AA & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, shopEntity);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_B16FFC(&Method_ShopRootComponent___c__DisplayClass102_0__PlayServantCostumeReleaseEffect_b__0__, v9);
    sub_B16FFC(&ShopRootComponent___c__DisplayClass102_0_TypeInfo, v10);
    byte_40FB7AA = 1;
  }
  v11 = sub_B170CC(ShopRootComponent___c__DisplayClass102_0_TypeInfo, shopEntity, method, v3, v4);
  ShopRootComponent___c__DisplayClass102_0___ctor((ShopRootComponent___c__DisplayClass102_0_o *)v11, 0LL);
  if ( !v11 )
    goto LABEL_9;
  *(_QWORD *)(v11 + 16) = shopEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v11 + 16),
    (System_Int32_array **)shopEntity,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  *(_QWORD *)(v11 + 24) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v11 + 24), (System_Int32_array **)this, v18, v19, v20, v21, v22, v23);
  ShopRootComponent__SetActionBG(this, 1, v24);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v30 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v30 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v30->static_fields->DEFAULT_FADE_TIME;
  v32 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v25, v26, v27, v28);
  System_Action___ctor(
    v32,
    (Il2CppObject *)v11,
    Method_ShopRootComponent___c__DisplayClass102_0__PlayServantCostumeReleaseEffect_b__0__,
    0LL);
  if ( !Instance )
LABEL_9:
    sub_B170D4();
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v32, 0LL);
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
    sub_B170D4();
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
    sub_B170D4();
  v7 = EnterVoiceMasterKey;
  EnterVoiceFlag = ShopPlayVoiceConstants__GetEnterVoiceFlag(state, v6);
  ShopPlayVoiceComponent__PlayVoiceOnce(shopPlayVoiceComponent, v7, EnterVoiceFlag, v9);
}


void __fastcall ShopRootComponent__Quit(ShopRootComponent_o *this, const MethodInfo *method)
{
  StandFigureBack_o *standFigureBack; // x0
  ExUITexture_o *backgroundTexture; // x0
  const MethodInfo *v5; // x1
  ShopPlayVoiceComponent_o *shopPlayVoiceComponent; // x0
  const MethodInfo *v7; // x1
  ShopSceneListViewControlHelper_o *listViewHelper; // x0
  const MethodInfo *v9; // x1
  ShopBuyItemConfirmMenu_o *buyItemConfirmMenu; // x0
  ShopBuyBulkItemConfirmMenu_o *buyBulkItemConfirmMenu; // x0
  ShopBuyItemConfirmMenu_o *ApSeedExchangeConfirmMenu; // x0
  ShopBuyBulkItemConfirmMenu_o *ApSeedBulkExchangeConfirmMenu; // x0
  ServantSellConfirmMenu_o *servantSellConfirmMenu; // x0
  ServantSellMenu_o *servantSellMenu; // x0
  const MethodInfo *v16; // x1
  ShopInfoIndicator_o *informationPanel; // x0

  standFigureBack = this->fields.standFigureBack;
  if ( !standFigureBack )
    goto LABEL_13;
  StandFigureBack__Init(standFigureBack, 0LL);
  backgroundTexture = this->fields.backgroundTexture;
  if ( !backgroundTexture )
    goto LABEL_13;
  ExUITexture__ClearImage(backgroundTexture, 0LL);
  shopPlayVoiceComponent = this->fields.shopPlayVoiceComponent;
  if ( !shopPlayVoiceComponent )
    goto LABEL_13;
  ShopPlayVoiceComponent__QuitShopVoice(shopPlayVoiceComponent, v5);
  listViewHelper = this->fields.listViewHelper;
  if ( !listViewHelper )
    goto LABEL_13;
  ShopSceneListViewControlHelper__SetListViewOnSceneQuit(listViewHelper, v7);
  ShopRootComponent__CloseEventItemWindow(this, v9);
  buyItemConfirmMenu = this->fields.buyItemConfirmMenu;
  if ( !buyItemConfirmMenu )
    goto LABEL_13;
  ShopBuyItemConfirmMenu__Init(buyItemConfirmMenu, 0LL);
  buyBulkItemConfirmMenu = this->fields.buyBulkItemConfirmMenu;
  if ( !buyBulkItemConfirmMenu )
    goto LABEL_13;
  ShopBuyBulkItemConfirmMenu__Init(buyBulkItemConfirmMenu, 0LL);
  ApSeedExchangeConfirmMenu = this->fields.ApSeedExchangeConfirmMenu;
  if ( !ApSeedExchangeConfirmMenu )
    goto LABEL_13;
  ShopBuyItemConfirmMenu__Init(ApSeedExchangeConfirmMenu, 0LL);
  ApSeedBulkExchangeConfirmMenu = this->fields.ApSeedBulkExchangeConfirmMenu;
  if ( !ApSeedBulkExchangeConfirmMenu
    || (ShopBuyBulkItemConfirmMenu__Init(ApSeedBulkExchangeConfirmMenu, 0LL),
        (servantSellConfirmMenu = this->fields.servantSellConfirmMenu) == 0LL)
    || (ServantSellConfirmMenu__Init(servantSellConfirmMenu, 0LL),
        (servantSellMenu = this->fields.servantSellMenu) == 0LL)
    || (ServantSellMenu__Init(servantSellMenu, 0LL), (informationPanel = this->fields.informationPanel) == 0LL) )
  {
LABEL_13:
    sub_B170D4();
  }
  ShopInfoIndicator__StopInformationChange(informationPanel, v16);
  this->fields.state = 0;
}


void __fastcall ShopRootComponent__QuitHelp(
        ShopRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  ShopSceneListViewControlHelper_o *listViewHelper; // x0

  if ( (byte_40FB7B3 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_21129, result);
    byte_40FB7B3 = 1;
  }
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_21129, 0LL) )
  {
    listViewHelper = this->fields.listViewHelper;
    this->fields.inputState = 4;
    if ( !listViewHelper )
      sub_B170D4();
    ShopSceneListViewControlHelper__SetListViewOnQuitHelp(listViewHelper, this->fields.state, v5);
  }
}


void __fastcall ShopRootComponent__RefreshCurrencyInfo(
        ShopRootComponent_o *this,
        int32_t state,
        const MethodInfo *method)
{
  ShopCurrencyInfoController_o *currencyInfoController; // x20
  int32_t CurrencyKind; // w0

  currencyInfoController = this->fields.currencyInfoController;
  CurrencyKind = ShopBuyItemListViewManager__GetCurrencyKind(state, 0LL);
  if ( !currencyInfoController )
    sub_B170D4();
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  WarQuestSelectionMaster_o *v14; // x21
  UILabel_o *stoneInfoLabel; // x22
  int32_t stone; // w23
  System_String_o *NumberFormat; // x0
  UILabel_o *manaInfoLabel; // x22
  System_String_o *v19; // x0
  UILabel_o *rarePriInfoLabel; // x22
  System_String_o *v21; // x0
  WebViewManager_o *v22; // x0
  WarQuestSelectionMaster_o *v23; // x0
  UILabel_o *stoneFragmentsInfoLabel; // x22
  UserItemMaster_o *v25; // x20
  int64_t UserId; // x0
  UserItemEntity_o *EntityDefinitely; // x0
  System_String_o *v28; // x0
  UILabel_o *anonymousInfoLabel; // x22
  int64_t v30; // x0
  UserItemEntity_o *v31; // x0
  System_String_o *v32; // x0
  UILabel_o *grailFragmentsInfoLabel; // x21
  int64_t v34; // x22
  BalanceConfig_c *v35; // x8
  UserItemEntity_o *v36; // x0
  System_String_o *v37; // x0
  UILabel_o *apSeedInfoLabel; // x21
  int64_t v39; // x0
  UserItemEntity_o *v40; // x0
  System_String_o *v41; // x0
  const MethodInfo *v42; // x1
  UnityEngine_Component_o *shop13Info; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *shop13InfoLabel; // x21
  int64_t v46; // x0
  UserItemEntity_o *v47; // x0
  System_String_o *v48; // x0
  UISprite_o *v49; // x21
  UnityEngine_Component_o *v50; // x0
  UnityEngine_GameObject_o *v51; // x0
  UnityEngine_Component_o *Parent; // x0
  UnityEngine_GameObject_o *v53; // x0
  UnityEngine_Component_o *v54; // x0
  UnityEngine_GameObject_o *v55; // x0
  UnityEngine_Component_o *v56; // x0
  UnityEngine_GameObject_o *v57; // x0
  bool IsFLAG20230402; // w0
  bool v59; // w21
  UnityEngine_GameObject_o *v60; // x0
  UILabel_o *shop15InfoLabel; // x21
  int64_t v62; // x0
  BalanceConfig_c *v63; // x8
  int64_t v64; // x22
  UserItemEntity_o *v65; // x0
  int32_t num; // w20
  System_String_o *v67; // x0
  UISprite_o *shop15Info; // x20
  UnityEngine_Component_o *v69; // x0
  UnityEngine_GameObject_o *v70; // x0
  UnityEngine_Component_o *v71; // x0
  UnityEngine_GameObject_o *v72; // x0
  UnityEngine_Component_o *v73; // x0
  UnityEngine_GameObject_o *v74; // x0
  UnityEngine_Component_o *v75; // x0
  UnityEngine_GameObject_o *v76; // x0
  GiftButtonCtrl_o *giftButtonControl; // x0
  const MethodInfo *v78; // x2

  if ( (byte_40FB791 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, method);
    sub_B16FFC(&BalanceConfig_TypeInfo, v3);
    sub_B16FFC(&Method_DataManager_GetMasterData_ItemMaster___, v4);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserItemMaster___, v5);
    sub_B16FFC(&LocalizationManager_TypeInfo, v6);
    sub_B16FFC(&NetworkManager_TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_B16FFC(&StringLiteral_19361, v9);
    sub_B16FFC(&StringLiteral_19365, v10);
    byte_40FB791 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_64;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !SelfUserGame )
    goto LABEL_64;
  v14 = MasterData_WarQuestSelectionMaster;
  stoneInfoLabel = this->fields.stoneInfoLabel;
  stone = SelfUserGame->fields.stone;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  NumberFormat = LocalizationManager__GetNumberFormat(stone, 0LL);
  if ( !stoneInfoLabel )
    goto LABEL_64;
  UILabel__set_text(stoneInfoLabel, NumberFormat, 0LL);
  manaInfoLabel = this->fields.manaInfoLabel;
  v19 = LocalizationManager__GetNumberFormat(SelfUserGame->fields.mana, 0LL);
  if ( !manaInfoLabel )
    goto LABEL_64;
  UILabel__set_text(manaInfoLabel, v19, 0LL);
  rarePriInfoLabel = this->fields.rarePriInfoLabel;
  v21 = LocalizationManager__GetNumberFormat(SelfUserGame->fields.rarePri, 0LL);
  if ( !rarePriInfoLabel )
    goto LABEL_64;
  UILabel__set_text(rarePriInfoLabel, v21, 0LL);
  v22 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v22 )
    goto LABEL_64;
  v23 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)v22,
          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserItemMaster___);
  stoneFragmentsInfoLabel = this->fields.stoneFragmentsInfoLabel;
  v25 = (UserItemMaster_o *)v23;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !v14 )
    goto LABEL_64;
  if ( !v25 )
    goto LABEL_64;
  EntityDefinitely = UserItemMaster__GetEntityDefinitely(v25, UserId, v14[1].fields._MasterKind_k__BackingField, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_64;
  v28 = LocalizationManager__GetNumberFormat(EntityDefinitely->fields.num, 0LL);
  if ( !stoneFragmentsInfoLabel )
    goto LABEL_64;
  UILabel__set_text(stoneFragmentsInfoLabel, v28, 0LL);
  anonymousInfoLabel = this->fields.anonymousInfoLabel;
  v30 = NetworkManager__get_UserId(0LL);
  v31 = UserItemMaster__GetEntityDefinitely(v25, v30, *(&v14[1].fields._MasterKind_k__BackingField + 1), 0LL);
  if ( !v31 )
    goto LABEL_64;
  v32 = LocalizationManager__GetNumberFormat(v31->fields.num, 0LL);
  if ( !anonymousInfoLabel )
    goto LABEL_64;
  UILabel__set_text(anonymousInfoLabel, v32, 0LL);
  grailFragmentsInfoLabel = this->fields.grailFragmentsInfoLabel;
  v34 = NetworkManager__get_UserId(0LL);
  v35 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v35 = BalanceConfig_TypeInfo;
  }
  v36 = UserItemMaster__GetEntityDefinitely(v25, v34, v35->static_fields->LvExceedDewDropItemId, 0LL);
  if ( !v36 )
    goto LABEL_64;
  v37 = LocalizationManager__GetNumberFormat(v36->fields.num, 0LL);
  if ( !grailFragmentsInfoLabel )
    goto LABEL_64;
  UILabel__set_text(grailFragmentsInfoLabel, v37, 0LL);
  apSeedInfoLabel = this->fields.apSeedInfoLabel;
  v39 = NetworkManager__get_UserId(0LL);
  v40 = UserItemMaster__GetEntityDefinitely(v25, v39, BalanceConfig_TypeInfo->static_fields->ApSeedItemId, 0LL);
  if ( !v40 )
    goto LABEL_64;
  v41 = LocalizationManager__GetNumberFormat(v40->fields.num, 0LL);
  if ( !apSeedInfoLabel )
    goto LABEL_64;
  UILabel__set_text(apSeedInfoLabel, v41, 0LL);
  ShopRootComponent__UpdateApLabel(this, v42);
  shop13Info = (UnityEngine_Component_o *)this->fields.shop13Info;
  if ( !shop13Info )
    goto LABEL_64;
  gameObject = UnityEngine_Component__get_gameObject(shop13Info, 0LL);
  if ( !gameObject )
    goto LABEL_64;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  shop13InfoLabel = this->fields.shop13InfoLabel;
  v46 = NetworkManager__get_UserId(0LL);
  v47 = UserItemMaster__GetEntityDefinitely(v25, v46, BalanceConfig_TypeInfo->static_fields->itemIdForShop13, 0LL);
  if ( !v47 )
    goto LABEL_64;
  v48 = LocalizationManager__GetNumberFormat(v47->fields.num, 0LL);
  if ( !shop13InfoLabel )
    goto LABEL_64;
  UILabel__set_text(shop13InfoLabel, v48, 0LL);
  v49 = this->fields.shop13Info;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetShopBanner_28586476(v49, (System_String_o *)StringLiteral_19365, 0LL);
  v50 = (UnityEngine_Component_o *)this->fields.manaInfoLabel;
  if ( !v50 )
    goto LABEL_64;
  v51 = UnityEngine_Component__get_gameObject(v50, 0LL);
  Parent = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(v51, 0LL);
  if ( !Parent )
    goto LABEL_64;
  v53 = UnityEngine_Component__get_gameObject(Parent, 0LL);
  GameObjectExtensions__SetLocalPositionX(v53, 85.0, 0LL);
  v54 = (UnityEngine_Component_o *)this->fields.rarePriInfoLabel;
  if ( !v54 )
    goto LABEL_64;
  v55 = UnityEngine_Component__get_gameObject(v54, 0LL);
  v56 = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(v55, 0LL);
  if ( !v56 )
    goto LABEL_64;
  v57 = UnityEngine_Component__get_gameObject(v56, 0LL);
  GameObjectExtensions__SetLocalPositionX(v57, -273.0, 0LL);
  AtlasManager__SetItem(this->fields.apSeedIcon, 103, 0LL);
  AtlasManager__SetItem(this->fields.apIcon, 47, 0LL);
  IsFLAG20230402 = ConstantMaster__IsFLAG20230402(0LL);
  if ( !this->fields.shop15Info )
    goto LABEL_64;
  v59 = IsFLAG20230402;
  v60 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.shop15Info, 0LL);
  if ( !v60 )
    goto LABEL_64;
  if ( v59 )
  {
    UnityEngine_GameObject__SetActive(v60, 1, 0LL);
    shop15InfoLabel = this->fields.shop15InfoLabel;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    v62 = NetworkManager__get_UserId(0LL);
    v63 = BalanceConfig_TypeInfo;
    v64 = v62;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v63 = BalanceConfig_TypeInfo;
    }
    v65 = UserItemMaster__GetEntityDefinitely(v25, v64, v63->static_fields->itemIdForShop15, 0LL);
    if ( v65 )
    {
      num = v65->fields.num;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v67 = LocalizationManager__GetNumberFormat(num, 0LL);
      if ( shop15InfoLabel )
      {
        UILabel__set_text(shop15InfoLabel, v67, 0LL);
        shop15Info = this->fields.shop15Info;
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__SetShopBanner_28586476(shop15Info, (System_String_o *)StringLiteral_19361, 0LL);
        v69 = (UnityEngine_Component_o *)this->fields.anonymousInfoLabel;
        if ( v69 )
        {
          v70 = UnityEngine_Component__get_gameObject(v69, 0LL);
          v71 = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(v70, 0LL);
          if ( v71 )
          {
            v72 = UnityEngine_Component__get_gameObject(v71, 0LL);
            GameObjectExtensions__SetLocalPositionX(v72, -94.0, 0LL);
            v73 = (UnityEngine_Component_o *)this->fields.grailFragmentsInfoLabel;
            if ( v73 )
            {
              v74 = UnityEngine_Component__get_gameObject(v73, 0LL);
              v75 = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(v74, 0LL);
              if ( v75 )
              {
                v76 = UnityEngine_Component__get_gameObject(v75, 0LL);
                GameObjectExtensions__SetLocalPositionX(v76, -273.0, 0LL);
                goto LABEL_62;
              }
            }
          }
        }
      }
    }
LABEL_64:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(v60, 0, 0LL);
LABEL_62:
  giftButtonControl = this->fields.giftButtonControl;
  if ( !giftButtonControl )
    goto LABEL_64;
  GiftButtonCtrl__InvalidateGiftInfo(giftButtonControl, 0LL);
  ShopRootComponent__RefreshCurrencyInfo(this, this->fields.state, v78);
}


void __fastcall ShopRootComponent__RequestEnd(ShopRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2
  ServantSellConfirmMenu_o *servantSellConfirmMenu; // x0
  ServantSellConfirmMenu_o *v9; // x0
  ServantSellConfirmMenu_o *v10; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  System_Action_int__o *v15; // x21

  if ( (byte_40FB7A2 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_int___ctor__, method);
    sub_B16FFC(&System_Action_int__TypeInfo, v3);
    sub_B16FFC(&Method_ShopRootComponent__RequestEnd_b__93_0__, v4);
    byte_40FB7A2 = 1;
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
      v9 = this->fields.servantSellConfirmMenu;
      if ( v9 )
      {
        ServantSellConfirmMenu__Init(v9, 0LL);
        v10 = this->fields.servantSellConfirmMenu;
        v15 = (System_Action_int__o *)sub_B170CC(System_Action_int__TypeInfo, v11, v12, v13, v14);
        System_Action_int____ctor(
          v15,
          (Il2CppObject *)this,
          Method_ShopRootComponent__RequestEnd_b__93_0__,
          (const MethodInfo_24B5D80 *)Method_System_Action_int___ctor__);
        if ( v10 )
        {
          ServantSellConfirmMenu__OpenCommandCodeRemoveResult(v10, v15, 0LL);
          return;
        }
      }
LABEL_10:
      sub_B170D4();
    }
  }
}


void __fastcall ShopRootComponent__RequestSellServant(ShopRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  NetworkManager_ResultCallbackFunc_o *v10; // x20
  SellServantRequest_o *Request_WarBoardWallAttackRequest; // x0

  if ( (byte_40FB7AD & 1) == 0 )
  {
    sub_B16FFC(&Method_NetworkManager_getRequest_SellServantRequest___, method);
    sub_B16FFC(&NetworkManager_TypeInfo, v6);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    sub_B16FFC(&Method_ShopRootComponent_EndRequestSellServant__, v8);
    sub_B16FFC(&StringLiteral_20980, v9);
    byte_40FB7AD = 1;
  }
  if ( this->fields.selectedServantIds )
  {
    v10 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                   NetworkManager_ResultCallbackFunc_TypeInfo,
                                                   method,
                                                   v2,
                                                   v3,
                                                   v4);
    NetworkManager_ResultCallbackFunc___ctor(
      v10,
      (Il2CppObject *)this,
      Method_ShopRootComponent_EndRequestSellServant__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = (SellServantRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                  v10,
                                                                  (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_SellServantRequest___);
    if ( !Request_WarBoardWallAttackRequest )
      sub_B170D4();
    SellServantRequest__beginRequest(
      Request_WarBoardWallAttackRequest,
      this->fields.selectedServantIds,
      this->fields.selectedCommandCodeIds,
      0LL);
  }
  else
  {
    ShopRootComponent__EndRequestSellServant(this, (System_String_o *)StringLiteral_20980, v2);
  }
}


void __fastcall ShopRootComponent__RequestShop(ShopRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct ShopSceneListViewControlHelper_o *listViewHelper; // x8
  ShopBuyItemListViewManager_o *buyItemListViewManager; // x0
  ShopBuyItemListViewItem_o *Item; // x0
  const MethodInfo *v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  ShopBuyItemListViewItem_o *v13; // x20
  NetworkManager_ResultCallbackFunc_o *v14; // x21
  PurchaseRequest_o *Request_WarBoardWallAttackRequest; // x0
  struct ShopEntity_o *Shop_k__BackingField; // x8

  if ( (byte_40FB7A1 & 1) == 0 )
  {
    sub_B16FFC(&Method_NetworkManager_getRequest_PurchaseRequest___, method);
    sub_B16FFC(&NetworkManager_TypeInfo, v3);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v4);
    sub_B16FFC(&Method_ShopRootComponent_EndRequestShop__, v5);
    byte_40FB7A1 = 1;
  }
  listViewHelper = this->fields.listViewHelper;
  if ( !listViewHelper )
    goto LABEL_14;
  buyItemListViewManager = listViewHelper->fields.buyItemListViewManager;
  if ( !buyItemListViewManager )
    goto LABEL_14;
  Item = ShopBuyItemListViewManager__GetItem(buyItemListViewManager, this->fields.selectedItemIndex, 0LL);
  if ( Item )
  {
    v13 = Item;
    if ( Item->fields._Shop_k__BackingField )
    {
      v14 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                     NetworkManager_ResultCallbackFunc_TypeInfo,
                                                     v9,
                                                     v10,
                                                     v11,
                                                     v12);
      NetworkManager_ResultCallbackFunc___ctor(
        v14,
        (Il2CppObject *)this,
        Method_ShopRootComponent_EndRequestShop__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Request_WarBoardWallAttackRequest = (PurchaseRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                 v14,
                                                                 (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_PurchaseRequest___);
      Shop_k__BackingField = v13->fields._Shop_k__BackingField;
      if ( Shop_k__BackingField && Request_WarBoardWallAttackRequest )
      {
        PurchaseRequest__beginRequest(
          Request_WarBoardWallAttackRequest,
          Shop_k__BackingField->fields.id,
          this->fields.buyCount,
          0,
          0LL);
        return;
      }
LABEL_14:
      sub_B170D4();
    }
  }
  ShopRootComponent__RequestEnd(this, v9);
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
  ShopBuyItemListViewManager_o *buyItemListViewManager; // x0
  ShopBuyItemListViewItem_o *Item; // x0
  const MethodInfo *v21; // x2
  const MethodInfo *v22; // x4
  ShopBuyItemListViewItem_o *v23; // x22
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  ServantLimitImageMaster_o *v26; // x23
  int32_t TargetId; // w0
  int32_t v28; // w0
  const MethodInfo *v29; // x3
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x23
  int32_t v31; // w0
  WarEntity_o *Entity; // x23
  CombineLimitReleaseMaster_o *v33; // x0
  int32_t coordinates_high; // w1
  System_String_o *v35; // x0
  System_String_o *v36; // x20
  Il2CppObject *v37; // x0
  System_String_o *v38; // x0
  System_String_o *v39; // x0
  System_String_o *v40; // x21
  Il2CppObject *Name; // x0
  System_String_o *v42; // x0
  SummonInfoDlgComponent_o *limitCountSealInfoDlg; // x21
  System_String_o *v44; // x22
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x4
  SummonInfoDlgComponent_CallbackFunc_o *v49; // x23
  int v50; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40FB797 & 1) == 0 )
  {
    sub_B16FFC(&SummonInfoDlgComponent_CallbackFunc_TypeInfo, *(_QWORD *)&index);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v7);
    sub_B16FFC(&Method_DataManager_GetMaster_CombineLimitReleaseMaster___, v8);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantMaster___, v9);
    sub_B16FFC(&DataManager_TypeInfo, v10);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11);
    sub_B16FFC(&int_TypeInfo, v12);
    sub_B16FFC(&LocalizationManager_TypeInfo, v13);
    sub_B16FFC(&Method_ShopRootComponent_EndLimitCountSealInfoDialog__, v14);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_B16FFC(&StringLiteral_3180, v16);
    sub_B16FFC(&StringLiteral_3179, v17);
    byte_40FB797 = 1;
  }
  if ( !this->fields.inputState )
  {
    listViewHelper = this->fields.listViewHelper;
    if ( listViewHelper )
    {
      buyItemListViewManager = listViewHelper->fields.buyItemListViewManager;
      if ( buyItemListViewManager )
      {
        Item = ShopBuyItemListViewManager__GetItem(buyItemListViewManager, index, 0LL);
        v23 = Item;
        if ( this->fields.state != 6 || ShopRootComponent__GetShopItemBuyNum((ShopRootComponent_o *)Item, Item, v21) > 0 )
          goto LABEL_8;
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                 (DataManager_o *)Instance,
                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
          if ( v23 )
          {
            v26 = (ServantLimitImageMaster_o *)MasterData_WarQuestSelectionMaster;
            TargetId = ShopBuyItemListViewItem__get_TargetId(v23, 0LL);
            if ( v26 )
            {
              if ( ServantLimitImageMaster__IsServantLimitCountSeal(v26, TargetId, 4, 0LL) )
              {
                this->fields.limitCountSealInfoIndex = index;
                this->fields.limitCountSealInfoBulk = isBulk;
                v28 = ShopBuyItemListViewItem__get_TargetId(v23, 0LL);
                ShopRootComponent__OpenLimitCountSealInfoDialog(this, v28, 4, v29);
                return;
              }
              if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !DataManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              }
              Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantMaster___);
              v31 = ShopBuyItemListViewItem__get_TargetId(v23, 0LL);
              if ( Master_WarQuestSelectionMaster )
              {
                Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                           Master_WarQuestSelectionMaster,
                           v31,
                           (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                v33 = (CombineLimitReleaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_CombineLimitReleaseMaster___);
                if ( Entity )
                {
                  coordinates_high = HIDWORD(Entity->fields.coordinates);
                  if ( !v33 )
                    goto LABEL_31;
                }
                else
                {
                  coordinates_high = -1;
                  if ( !v33 )
                    goto LABEL_31;
                }
                if ( !CombineLimitReleaseMaster__IsExistSealedLimitCount(v33, coordinates_high, 0LL) )
                {
LABEL_8:
                  ShopRootComponent__OpenConfirmMenu(this, this->fields.state, v23, isBulk, v22);
                  this->fields.inputState = 2;
                  return;
                }
                this->fields.limitCountSealInfoIndex = index;
                this->fields.limitCountSealInfoBulk = isBulk;
                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                }
                v35 = LocalizationManager__Get((System_String_o *)StringLiteral_3180, 0LL);
                if ( Entity )
                {
                  v36 = v35;
                  v50 = HIDWORD(Entity->fields.coordinates);
                  v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v50);
                  v38 = System_String__Format((System_String_o *)StringLiteral_3179, v37, 0LL);
                  v39 = LocalizationManager__Get(v38, 0LL);
                  if ( v23->fields._Shop_k__BackingField )
                  {
                    v40 = v39;
                    Name = (Il2CppObject *)ShopEntity__getName(v23->fields._Shop_k__BackingField, 0LL);
                    v42 = System_String__Format(v40, Name, 0LL);
                    limitCountSealInfoDlg = this->fields.limitCountSealInfoDlg;
                    v44 = v42;
                    v49 = (SummonInfoDlgComponent_CallbackFunc_o *)sub_B170CC(
                                                                     SummonInfoDlgComponent_CallbackFunc_TypeInfo,
                                                                     v45,
                                                                     v46,
                                                                     v47,
                                                                     v48);
                    SummonInfoDlgComponent_CallbackFunc___ctor(
                      v49,
                      (Il2CppObject *)this,
                      Method_ShopRootComponent_EndLimitCountSealInfoDialog__,
                      0LL);
                    if ( limitCountSealInfoDlg )
                    {
                      SummonInfoDlgComponent__OpenInfoMessageDlg(limitCountSealInfoDlg, v36, v44, v49, 0LL);
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
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopRootComponent__SelectMenu(ShopRootComponent_o *this, int32_t state, const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  ShopRootComponent_o *v18; // x0
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  __int64 v23; // x1
  const MethodInfo *v24; // x1
  ShopPlayVoiceComponent_o *shopPlayVoiceComponent; // x0
  ShopTopListViewManager_o *topListViewManager; // x0
  AvalonSceneManager_o *Instance; // x0
  int32_t v28; // w19
  System_Action_o *v29; // x21
  ShopRootComponent_o *v30; // x0
  const MethodInfo *v31; // x3

  if ( (byte_40FB793 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&state);
    sub_B16FFC(&CoinRoomUtility_TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v8);
    sub_B16FFC(&Method_ShopRootComponent___c__DisplayClass76_0__SelectMenu_b__0__, v9);
    sub_B16FFC(&ShopRootComponent___c__DisplayClass76_0_TypeInfo, v10);
    byte_40FB793 = 1;
  }
  v11 = sub_B170CC(ShopRootComponent___c__DisplayClass76_0_TypeInfo, *(_QWORD *)&state, method, v3, v4);
  ShopRootComponent___c__DisplayClass76_0___ctor((ShopRootComponent___c__DisplayClass76_0_o *)v11, 0LL);
  if ( !v11 )
    goto LABEL_20;
  *(_QWORD *)(v11 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v11 + 16), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  *(_DWORD *)(v11 + 24) = state;
  if ( ShopRootComponent__CheckServerLimitTime(v18, state, v19) )
  {
    v23 = *(unsigned int *)(v11 + 24);
    if ( (_DWORD)v23 == 17 )
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
          ShopPlayVoiceComponent__StopVoice(shopPlayVoiceComponent, v24);
          topListViewManager = this->fields.topListViewManager;
          if ( topListViewManager )
          {
            this->fields.saveScrollBarValue = ShopTopListViewManager__get_currentScrollBarValue(topListViewManager, 0LL);
            Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
            if ( Instance )
            {
              AvalonSceneManager__pushScene(Instance, 90, 1, 0LL, 0LL);
              return;
            }
          }
        }
LABEL_20:
        sub_B170D4();
      }
      v23 = *(unsigned int *)(v11 + 24);
    }
    if ( (_DWORD)v23 == 15 )
    {
      v28 = 15;
    }
    else
    {
      ShopRootComponent__PlayVoiceEnter(this, v23, v20);
      v28 = *(_DWORD *)(v11 + 24);
    }
    v29 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v23, v20, v21, v22);
    System_Action___ctor(
      v29,
      (Il2CppObject *)v11,
      Method_ShopRootComponent___c__DisplayClass76_0__SelectMenu_b__0__,
      0LL);
    ShopRootComponent__SetFadeOut(v30, v28, v29, v31);
  }
}


void __fastcall ShopRootComponent__SelectSellServantConfirm(ShopRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct ServantSellMenu_o *servantSellMenu; // x0
  int32_t tabKind; // w21
  struct System_Int64_array *selectedServantIds; // x22
  bool IsSellEquipedCmdCodeLastServant; // w0
  ServantSellConfirmMenu_o *servantSellConfirmMenu; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  System_Int64_array *v26; // x22
  ServantSellConfirmMenu_o *v27; // x21
  System_Action_int__o *v28; // x19
  struct ServantSellConfirmMenu_o *v29; // x21
  int32_t v30; // w20
  System_Action_int__o *v31; // x22
  ServantSellConfirmMenu_o *v32; // x0
  int32_t v33; // w1
  System_Int64_array *v34; // x2
  System_Int64_array *v35; // x3
  System_Action_int__o *v36; // x4
  struct ServantSellConfirmMenu_o *v37; // x21
  int32_t v38; // w20
  struct System_Int64_array *v39; // x22
  struct System_Int64_array *selectedCommandCodeIds; // x23
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  System_Action_int__o *v45; // x24

  if ( (byte_40FB7A0 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_int___ctor__, method);
    sub_B16FFC(&System_Action_int__TypeInfo, v6);
    sub_B16FFC(&Method_ShopRootComponent_SellServantConfirm__, v7);
    sub_B16FFC(&Method_ShopRootComponent___c__DisplayClass91_0__SelectSellServantConfirm_b__0__, v8);
    sub_B16FFC(&ShopRootComponent___c__DisplayClass91_0_TypeInfo, v9);
    byte_40FB7A0 = 1;
  }
  v10 = sub_B170CC(ShopRootComponent___c__DisplayClass91_0_TypeInfo, method, v2, v3, v4);
  ShopRootComponent___c__DisplayClass91_0___ctor((ShopRootComponent___c__DisplayClass91_0_o *)v10, 0LL);
  if ( !v10 )
    goto LABEL_18;
  *(_QWORD *)(v10 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v10 + 16), (System_Int32_array **)this, v11, v12, v13, v14, v15, v16);
  if ( this->fields.inputState == 2 )
  {
    servantSellMenu = this->fields.servantSellMenu;
    if ( !servantSellMenu )
      goto LABEL_18;
    tabKind = servantSellMenu->fields.tabKind;
    selectedServantIds = this->fields.selectedServantIds;
    IsSellEquipedCmdCodeLastServant = ServantSellMenu__get_IsSellEquipedCmdCodeLastServant(servantSellMenu, 0LL);
    *(_DWORD *)(v10 + 24) = ServantSellConfirmMenu__GetServantSellConfirmKindOnOpenConfirm(
                              tabKind,
                              selectedServantIds == 0LL,
                              IsSellEquipedCmdCodeLastServant,
                              0LL);
    servantSellConfirmMenu = this->fields.servantSellConfirmMenu;
    if ( !servantSellConfirmMenu )
      goto LABEL_18;
    ServantSellConfirmMenu__Init(servantSellConfirmMenu, 0LL);
    v26 = this->fields.selectedServantIds;
    if ( v26 )
    {
      v27 = this->fields.servantSellConfirmMenu;
      if ( *(_DWORD *)(v10 + 24) == 4 )
      {
        v28 = (System_Action_int__o *)sub_B170CC(System_Action_int__TypeInfo, v22, v23, v24, v25);
        System_Action_int____ctor(
          v28,
          (Il2CppObject *)v10,
          Method_ShopRootComponent___c__DisplayClass91_0__SelectSellServantConfirm_b__0__,
          (const MethodInfo_24B5D80 *)Method_System_Action_int___ctor__);
        if ( v27 )
        {
          ServantSellConfirmMenu__OpenSellEquippedLastSvtWarning(v27, 4, v26, v28, 0LL);
          return;
        }
LABEL_18:
        sub_B170D4();
      }
      if ( !v27 )
        goto LABEL_18;
      ServantSellConfirmMenu__Init(this->fields.servantSellConfirmMenu, 0LL);
      v37 = this->fields.servantSellConfirmMenu;
      v38 = *(_DWORD *)(v10 + 24);
      v39 = this->fields.selectedServantIds;
      selectedCommandCodeIds = this->fields.selectedCommandCodeIds;
      v45 = (System_Action_int__o *)sub_B170CC(System_Action_int__TypeInfo, v41, v42, v43, v44);
      System_Action_int____ctor(
        v45,
        (Il2CppObject *)this,
        Method_ShopRootComponent_SellServantConfirm__,
        (const MethodInfo_24B5D80 *)Method_System_Action_int___ctor__);
      if ( !v37 )
        goto LABEL_18;
      v32 = v37;
      v33 = v38;
      v34 = v39;
      v35 = selectedCommandCodeIds;
      v36 = v45;
    }
    else
    {
      v29 = this->fields.servantSellConfirmMenu;
      v30 = *(_DWORD *)(v10 + 24);
      v31 = (System_Action_int__o *)sub_B170CC(System_Action_int__TypeInfo, v22, v23, v24, v25);
      System_Action_int____ctor(
        v31,
        (Il2CppObject *)this,
        Method_ShopRootComponent_SellServantConfirm__,
        (const MethodInfo_24B5D80 *)Method_System_Action_int___ctor__);
      if ( !v29 )
        goto LABEL_18;
      v32 = v29;
      v33 = v30;
      v34 = 0LL;
      v35 = 0LL;
      v36 = v31;
    }
    ServantSellConfirmMenu__Open(v32, v33, v34, v35, v36, 0LL);
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
  struct ShopSceneListViewControlHelper_o *listViewHelper; // x8
  ShopBuyItemListViewManager_o *buyItemListViewManager; // x0
  ShopBuyItemListViewItem_o *Item; // x20
  WebViewManager_o *Instance; // x0
  ShopDetailMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct ShopEntity_o *Shop_k__BackingField; // x8
  ShopDetailEntity_o *ShopDetailEntity; // x0
  ShopDetailEntity_o *v16; // x20
  ShopRootComponent_c *v17; // x0
  System_Collections_Generic_Dictionary_int__int__o *shopDetailCheckList; // x0

  if ( (byte_40FB79C & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ShopDetailMaster___, *(_QWORD *)&buyCount);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v5);
    sub_B16FFC(&ShopRootComponent_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_40FB79C = 1;
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
      buyItemListViewManager = listViewHelper->fields.buyItemListViewManager;
      if ( buyItemListViewManager )
      {
        Item = ShopBuyItemListViewManager__GetItem(buyItemListViewManager, this->fields.selectedItemIndex, 0LL);
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          MasterData_WarQuestSelectionMaster = (ShopDetailMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                       (DataManager_o *)Instance,
                                                                       (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ShopDetailMaster___);
          if ( Item )
          {
            Shop_k__BackingField = Item->fields._Shop_k__BackingField;
            if ( Shop_k__BackingField )
            {
              if ( MasterData_WarQuestSelectionMaster )
              {
                ShopDetailEntity = ShopDetailMaster__getShopDetailEntity(
                                     MasterData_WarQuestSelectionMaster,
                                     Shop_k__BackingField->fields.id,
                                     0LL);
                if ( !ShopDetailEntity )
                  goto LABEL_6;
                v16 = ShopDetailEntity;
                if ( ShopDetailEntity->fields.frequencyType == 3 )
                  goto LABEL_24;
                v17 = ShopRootComponent_TypeInfo;
                if ( (BYTE3(ShopRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !ShopRootComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(ShopRootComponent_TypeInfo);
                  v17 = ShopRootComponent_TypeInfo;
                }
                shopDetailCheckList = v17->static_fields->shopDetailCheckList;
                if ( shopDetailCheckList )
                {
                  if ( System_Collections_Generic_Dictionary_int__int___get_Item(
                         shopDetailCheckList,
                         v16->fields.shopId,
                         (const MethodInfo_2DDCEF4 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__) )
                  {
                    goto LABEL_6;
                  }
LABEL_24:
                  ShopRootComponent__OpenDetailCheck(this, *(const MethodInfo **)&buyCount);
                  return;
                }
              }
            }
          }
        }
      }
    }
    sub_B170D4();
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
  ServantSellConfirmMenu_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( count )
  {
    servantSellConfirmMenu = this->fields.servantSellConfirmMenu;
    if ( !servantSellConfirmMenu
      || (ServantSellConfirmMenu__Close(servantSellConfirmMenu, 0LL), (v5 = this->fields.servantSellConfirmMenu) == 0LL) )
    {
      sub_B170D4();
    }
    ServantSellConfirmMenu__Init(v5, 0LL);
    ShopRootComponent__SelectSellServantConfirm(this, v6);
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
  UnityEngine_GameObject_o *v6; // x0

  if ( (byte_40FB7C7 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, isEnable);
    byte_40FB7C7 = 1;
  }
  actionBg = (UnityEngine_Object_o *)this->fields.actionBg;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(actionBg, 0LL, 0LL) )
  {
    v6 = this->fields.actionBg;
    if ( !v6 )
      sub_B170D4();
    UnityEngine_GameObject__SetActive(v6, isEnable, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopRootComponent__SetFadeIn(ShopRootComponent_o *this, int32_t state, const MethodInfo *method)
{
  __int64 v4; // x1
  CommonUI_o *Instance; // x19

  if ( (byte_40FB796 & 1) == 0 )
  {
    sub_B16FFC(&AvalonSceneManager_TypeInfo, *(_QWORD *)&state);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_40FB796 = 1;
  }
  if ( state == 15 )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    }
    if ( !Instance )
      sub_B170D4();
    CommonUI__maskFadein(Instance, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopRootComponent__SetFadeOut(
        ShopRootComponent_o *this,
        int32_t state,
        System_Action_o *endFade,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x19
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v23; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v25; // x21

  if ( (byte_40FB795 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&state);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_B16FFC(&Method_ShopRootComponent___c__DisplayClass78_0__SetFadeOut_b__0__, v9);
    sub_B16FFC(&ShopRootComponent___c__DisplayClass78_0_TypeInfo, v10);
    byte_40FB795 = 1;
  }
  v11 = sub_B170CC(ShopRootComponent___c__DisplayClass78_0_TypeInfo, *(_QWORD *)&state, endFade, method, v4);
  ShopRootComponent___c__DisplayClass78_0___ctor((ShopRootComponent___c__DisplayClass78_0_o *)v11, 0LL);
  if ( !v11 )
    goto LABEL_11;
  *(_QWORD *)(v11 + 16) = endFade;
  sub_B16F98((BattleServantConfConponent_o *)(v11 + 16), (System_Int32_array **)endFade, v12, v13, v14, v15, v16, v17);
  if ( state == 15 )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v23 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v23 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v23->static_fields->DEFAULT_FADE_TIME;
    v25 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v18, v19, v20, v21);
    System_Action___ctor(
      v25,
      (Il2CppObject *)v11,
      Method_ShopRootComponent___c__DisplayClass78_0__SetFadeOut_b__0__,
      0LL);
    if ( Instance )
    {
      CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v25, 0LL);
      return;
    }
LABEL_11:
    sub_B170D4();
  }
  ActionExtensions__Call(*(System_Action_o **)(v11 + 16), 0LL);
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

  if ( (byte_40FB7BE & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__, entity);
    sub_B16FFC(&ShopRootComponent_TypeInfo, v6);
    byte_40FB7BE = 1;
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
      sub_B170D4();
    System_Collections_Generic_Dictionary_int__int___set_Item(
      shopDetailCheckList,
      entity->fields.shopId,
      1,
      (const MethodInfo_2DDCF8C *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
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


void __fastcall ShopRootComponent__SetStatusTitleInfo(ShopRootComponent_o *this, bool isDisp, const MethodInfo *method)
{
  UnityEngine_Component_o *informationPanel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v7; // x1
  ShopInfoIndicator_o *v8; // x0

  informationPanel = (UnityEngine_Component_o *)this->fields.informationPanel;
  if ( !informationPanel )
    goto LABEL_7;
  gameObject = UnityEngine_Component__get_gameObject(informationPanel, 0LL);
  if ( !gameObject )
    goto LABEL_7;
  UnityEngine_GameObject__SetActive(gameObject, isDisp, 0LL);
  if ( isDisp )
  {
    v8 = this->fields.informationPanel;
    if ( v8 )
    {
      ShopInfoIndicator__StartInformationChange(v8, v7);
      return;
    }
LABEL_7:
    sub_B170D4();
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
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  System_String_o *v18; // x20
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x22
  int32_t TargetId; // w0
  ItemEntity_o *v22; // x23
  const MethodInfo *v23; // x3
  System_String_o *RequestResultDialogItemMessageNormal; // x22
  const MethodInfo *v25; // x2
  System_String_o *RequestResultDialogNumMessageNormal; // x0
  RequestResultDialog_o *requestResultDialog; // x21
  System_String_o *v28; // x23
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  System_Action_bool__o *v33; // x24
  RequestResultDialog_o *v34; // x21
  System_Action_bool__o *v35; // x22

  if ( (byte_40FB7A5 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_bool___ctor__, item);
    sub_B16FFC(&System_Action_bool__TypeInfo, v7);
    sub_B16FFC(&Method_DataManager_GetMasterData_ItemMaster___, v8);
    sub_B16FFC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v9);
    sub_B16FFC(&Method_ShopRootComponent_OnEndItemDialog__, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B16FFC(&StringLiteral_1, v12);
    byte_40FB7A5 = 1;
  }
  RequestResultDialogMessageNormal = ShopRequestResultDialogMessageMaker__GetRequestResultDialogMessageNormal(
                                       item,
                                       entity,
                                       this->fields.buyCount,
                                       method);
  if ( !entity )
    goto LABEL_11;
  v18 = RequestResultDialogMessageNormal;
  if ( entity->fields.purchaseType == 1 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                            (DataManager_o *)Instance,
                                                                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___);
      TargetId = ShopEntity__get_TargetId(entity, 0LL);
      if ( MasterData_WarQuestSelectionMaster )
      {
        v22 = (ItemEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                MasterData_WarQuestSelectionMaster,
                                TargetId,
                                (const MethodInfo_266F388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        RequestResultDialogItemMessageNormal = ShopRequestResultDialogMessageMaker__GetRequestResultDialogItemMessageNormal(
                                                 entity,
                                                 v22,
                                                 this->fields.buyCount,
                                                 v23);
        RequestResultDialogNumMessageNormal = ShopRequestResultDialogMessageMaker__GetRequestResultDialogNumMessageNormal(
                                                entity,
                                                v22,
                                                v25);
        requestResultDialog = this->fields.requestResultDialog;
        v28 = RequestResultDialogNumMessageNormal;
        v33 = (System_Action_bool__o *)sub_B170CC(System_Action_bool__TypeInfo, v29, v30, v31, v32);
        System_Action_bool____ctor(
          v33,
          (Il2CppObject *)this,
          Method_ShopRootComponent_OnEndItemDialog__,
          (const MethodInfo_24B33C8 *)Method_System_Action_bool___ctor__);
        if ( requestResultDialog )
        {
          RequestResultDialog__Open(requestResultDialog, v18, v28, RequestResultDialogItemMessageNormal, v33, 0LL);
          return;
        }
      }
    }
LABEL_11:
    sub_B170D4();
  }
  v34 = this->fields.requestResultDialog;
  v35 = (System_Action_bool__o *)sub_B170CC(System_Action_bool__TypeInfo, v14, v15, v16, v17);
  System_Action_bool____ctor(
    v35,
    (Il2CppObject *)this,
    Method_ShopRootComponent_OnEndItemDialog__,
    (const MethodInfo_24B33C8 *)Method_System_Action_bool___ctor__);
  if ( !v34 )
    goto LABEL_11;
  RequestResultDialog__Open_30964380(v34, (System_String_o *)StringLiteral_1, v18, v35, -1, 0LL);
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
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  System_Action_bool__o *v15; // x22

  if ( (byte_40FB7A6 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_bool___ctor__, entity);
    sub_B16FFC(&System_Action_bool__TypeInfo, v5);
    sub_B16FFC(&Method_ShopRootComponent_OnEndItemDialog__, v6);
    sub_B16FFC(&StringLiteral_1, v7);
    byte_40FB7A6 = 1;
  }
  RequestResultDialogMessage = ShopRequestResultDialogMessageMaker__GetRequestResultDialogMessage(
                                 entity,
                                 this->fields.buyCount,
                                 method);
  requestResultDialog = this->fields.requestResultDialog;
  v10 = RequestResultDialogMessage;
  v15 = (System_Action_bool__o *)sub_B170CC(System_Action_bool__TypeInfo, v11, v12, v13, v14);
  System_Action_bool____ctor(
    v15,
    (Il2CppObject *)this,
    Method_ShopRootComponent_OnEndItemDialog__,
    (const MethodInfo_24B33C8 *)Method_System_Action_bool___ctor__);
  if ( !requestResultDialog )
    sub_B170D4();
  RequestResultDialog__Open_30964380(requestResultDialog, (System_String_o *)StringLiteral_1, v10, v15, -1, 0LL);
}


void __fastcall ShopRootComponent__ShowStorageDialog(
        ShopRootComponent_o *this,
        ShopBuyItemListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t state; // w8
  struct BuyStorageConfirmDialogComponent_o *v10; // x21
  System_Action_int__o *v11; // x22
  BuyStorageConfirmDialogComponent_o *v12; // x0
  int32_t v13; // w1
  struct BuyStorageConfirmDialogComponent_o *buyStorageResultDialog; // x21

  if ( (byte_40FB7A7 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_int___ctor__, item);
    sub_B16FFC(&System_Action_int__TypeInfo, v7);
    sub_B16FFC(&Method_ShopRootComponent_OnEndStorageDialog__, v8);
    byte_40FB7A7 = 1;
  }
  state = this->fields.state;
  if ( state == 12 )
  {
    buyStorageResultDialog = this->fields.buyStorageResultDialog;
    v11 = (System_Action_int__o *)sub_B170CC(System_Action_int__TypeInfo, item, method, v3, v4);
    System_Action_int____ctor(
      v11,
      (Il2CppObject *)this,
      Method_ShopRootComponent_OnEndStorageDialog__,
      (const MethodInfo_24B5D80 *)Method_System_Action_int___ctor__);
    if ( buyStorageResultDialog )
    {
      v13 = 1;
      v12 = buyStorageResultDialog;
      goto LABEL_9;
    }
LABEL_11:
    sub_B170D4();
  }
  if ( state == 11 )
  {
    v10 = this->fields.buyStorageResultDialog;
    v11 = (System_Action_int__o *)sub_B170CC(System_Action_int__TypeInfo, item, method, v3, v4);
    System_Action_int____ctor(
      v11,
      (Il2CppObject *)this,
      Method_ShopRootComponent_OnEndStorageDialog__,
      (const MethodInfo_24B5D80 *)Method_System_Action_int___ctor__);
    if ( v10 )
    {
      v12 = v10;
      v13 = 0;
LABEL_9:
      BuyStorageConfirmDialogComponent__ResultOpenDialog(v12, v13, item, v11, 0LL);
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
  UILabel_o *apInfoLabel; // x19
  int32_t Act; // w20
  System_String_o *NumberFormat; // x0

  if ( (byte_40FB792 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    byte_40FB792 = 1;
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
  NumberFormat = LocalizationManager__GetNumberFormat(Act, 0LL);
  if ( !apInfoLabel )
LABEL_9:
    sub_B170D4();
  UILabel__set_text(apInfoLabel, NumberFormat, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopRootComponent___Init_b__71_0(
        ShopRootComponent_o *this,
        int32_t stoneCount,
        const MethodInfo *method)
{
  UILabel_o *stoneInfoLabel; // x20
  System_String_o *NumberFormat; // x0

  if ( (byte_40FB7C8 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, *(_QWORD *)&stoneCount);
    byte_40FB7C8 = 1;
  }
  stoneInfoLabel = this->fields.stoneInfoLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  NumberFormat = LocalizationManager__GetNumberFormat(stoneCount, 0LL);
  if ( !stoneInfoLabel )
    sub_B170D4();
  UILabel__set_text(stoneInfoLabel, NumberFormat, 0LL);
}


void __fastcall ShopRootComponent___RequestEnd_b__93_0(
        ShopRootComponent_o *this,
        int32_t count,
        const MethodInfo *method)
{
  ServantSellConfirmMenu_o *servantSellConfirmMenu; // x0
  ServantSellConfirmMenu_o *v5; // x0

  ShopRootComponent__PlayVoiceBack(this, this->fields.state, method);
  servantSellConfirmMenu = this->fields.servantSellConfirmMenu;
  if ( !servantSellConfirmMenu
    || (ServantSellConfirmMenu__Close(servantSellConfirmMenu, 0LL), (v5 = this->fields.servantSellConfirmMenu) == 0LL) )
  {
    sub_B170D4();
  }
  ServantSellConfirmMenu__ClearCommandCodeRemoveResult(v5, 0LL);
}


void __fastcall ShopRootComponent____n__0(ShopRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent__beginStartUp_29752064((SceneRootComponent_o *)this, 0LL);
}


void __fastcall ShopRootComponent__beginFinish(ShopRootComponent_o *this, const MethodInfo *method)
{
  ShopTopListViewManager_o *topListViewManager; // x0

  ShopRootComponent__Quit(this, method);
  topListViewManager = this->fields.topListViewManager;
  if ( !topListViewManager )
    sub_B170D4();
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
  EventBannerComponent_o *eventBanner; // x0
  AvalonSceneManager_o *Instance; // x0
  const MethodInfo *v13; // x1
  ShopHelpListViewManager_o *helpListViewManager; // x0
  const MethodInfo *v15; // x1
  ShopInfoIndicator_o *informationPanel; // x0
  struct GiftButtonCtrl_o *giftButtonControl; // x20
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  System_Action_o *v22; // x21
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  struct GiftButtonCtrl_o *v29; // x20
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  System_Func_bool__bool__o *v34; // x21
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7

  if ( (byte_40FB78C & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_System_Func_bool__bool___ctor__, v3);
    sub_B16FFC(&System_Func_bool__bool__TypeInfo, v4);
    sub_B16FFC(&Method_ShopRootComponent_OnGiftClose__, v5);
    sub_B16FFC(&Method_ShopRootComponent_OnGiftOpen__, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v7);
    byte_40FB78C = 1;
  }
  topListViewManager = this->fields.topListViewManager;
  if ( !topListViewManager )
    goto LABEL_11;
  ShopTopListViewManager__LoadCoinRoomAsset(topListViewManager, 0LL);
  ShopRootComponent__CreateShopDetailCheckList(v9, v10);
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 6, 30, 0LL);
  eventBanner = this->fields.eventBanner;
  if ( !eventBanner )
    goto LABEL_11;
  EventBannerComponent__SetBanner(eventBanner, 0LL);
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  AvalonSceneManager__endInitialize(Instance, (SceneRootComponent_o *)this, 0LL);
  helpListViewManager = this->fields.helpListViewManager;
  if ( !helpListViewManager )
    goto LABEL_11;
  ShopHelpListViewManager__LoadBaseSprite(helpListViewManager, v13);
  informationPanel = this->fields.informationPanel;
  if ( !informationPanel )
    goto LABEL_11;
  ShopInfoIndicator__StartInformationChange(informationPanel, v15);
  giftButtonControl = this->fields.giftButtonControl;
  v22 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v18, v19, v20, v21);
  System_Action___ctor(v22, (Il2CppObject *)this, Method_ShopRootComponent_OnGiftOpen__, 0LL);
  if ( !giftButtonControl
    || (giftButtonControl->fields.OnGiftOpenAdditionalAction = v22,
        sub_B16F98(
          (BattleServantConfConponent_o *)&giftButtonControl->fields.OnGiftOpenAdditionalAction,
          (System_Int32_array **)v22,
          v23,
          v24,
          v25,
          v26,
          v27,
          v28),
        v29 = this->fields.giftButtonControl,
        v34 = (System_Func_bool__bool__o *)sub_B170CC(System_Func_bool__bool__TypeInfo, v30, v31, v32, v33),
        System_Func_bool__bool____ctor(
          v34,
          (Il2CppObject *)this,
          Method_ShopRootComponent_OnGiftClose__,
          (const MethodInfo_2B63150 *)Method_System_Func_bool__bool___ctor__),
        !v29) )
  {
LABEL_11:
    sub_B170D4();
  }
  v29->fields.OnGiftCloseAdditionalAction = v34;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v29->fields.OnGiftCloseAdditionalAction,
    (System_Int32_array **)v34,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
}


void __fastcall ShopRootComponent__beginResume(ShopRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent__beginResume_29752260((SceneRootComponent_o *)this, 0LL);
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
  System_String_o *returnSceneName; // x20
  System_String_o *SceneName; // x0
  bool v30; // w0
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  struct ShopPlayVoiceComponent_o *shopPlayVoiceComponent; // x8
  System_String_o *MainBgmName; // x20
  TitleInfoControl_o *titleInfo; // x0
  TitleInfoControl_o *v39; // x0
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  System_Action_o *v44; // x20
  const MethodInfo *v45; // x1
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  struct ShopPlayVoiceComponent_o *v52; // x20
  System_Int32_array **standFigureBack; // x1
  int32_t defaultFaceId; // w21
  void *v55; // x23
  BattleServantConfConponent_o *p_standFigureBack; // x20
  StandFigureBack_o *v57; // x0
  UITexture_o *backgroundTexture; // x20
  ShopRootConstants_c *v59; // x0
  System_String_o *BG_ROOT; // x20
  Il2CppObject *v61; // x0
  System_String_o *v62; // x0
  ExUITexture_o *v63; // x21
  System_String_o *v64; // x20
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x3
  __int64 v68; // x4
  System_Action_o *v69; // x22
  ShopRootConstants_c *v70; // x0
  struct ShopRootConstants_StaticFields *static_fields; // x8
  System_String_o *v72; // x20
  Il2CppObject *v73; // x0
  System_String_o *v74; // x0
  ExUITexture_o *v75; // x19
  int32_t DEFAULT_BG_ID; // [xsp+8h] [xbp-38h] BYREF
  int32_t bgImageId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_40FB78D & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, data);
    sub_B16FFC(&AtlasManager_TypeInfo, v10);
    sub_B16FFC(&BgmManager_TypeInfo, v11);
    sub_B16FFC(&FSUtility_TypeInfo, v12);
    sub_B16FFC(&int_TypeInfo, v13);
    sub_B16FFC(&SceneJumpInfo_TypeInfo, v14);
    sub_B16FFC(&SceneList_TypeInfo, v15);
    sub_B16FFC(&Method_ShopRootComponent_LoadBanner__, v16);
    sub_B16FFC(&Method_ShopRootComponent__beginStartUp_b__66_0__, v17);
    sub_B16FFC(&ShopRootConstants_TypeInfo, v18);
    sub_B16FFC(&SoundManager_TypeInfo, v19);
    byte_40FB78D = 1;
  }
  p_jumpInfo = &this->fields.jumpInfo;
  this->fields.jumpInfo = 0LL;
  sub_B16F98(
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
      sub_B16F98(
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
      v30 = System_String__op_Equality(returnSceneName, SceneName, 0LL);
      this->fields.isFromCoinRoom = v30;
      if ( v30 )
      {
        *p_jumpInfo = 0LL;
        sub_B16F98((BattleServantConfConponent_o *)&this->fields.jumpInfo, 0LL, v21, v31, v32, v33, v34, v35);
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
  v39 = this->fields.titleInfo;
  if ( !v39 )
    goto LABEL_43;
  TitleInfoControl__SetHelpBtn(v39, 0, 0LL);
  v44 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v40, v41, v42, v43);
  System_Action___ctor(v44, (Il2CppObject *)this, Method_ShopRootComponent__beginStartUp_b__66_0__, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadBanner(v44, 1, 0LL);
  ShopRootComponent__setDispInfo(this, v45);
  v52 = this->fields.shopPlayVoiceComponent;
  if ( !v52 )
    goto LABEL_43;
  standFigureBack = (System_Int32_array **)this->fields.standFigureBack;
  defaultFaceId = this->fields.defaultFaceId;
  v55 = *(void **)&this->fields.figureSvtId;
  v52->fields.standFigureBack = (struct StandFigureBack_o *)standFigureBack;
  p_standFigureBack = (BattleServantConfConponent_o *)&v52->fields.standFigureBack;
  sub_B16F98(p_standFigureBack, standFigureBack, v46, v47, v48, v49, v50, v51);
  p_standFigureBack->monitor = v55;
  p_standFigureBack->fields.m_CachedPtr = defaultFaceId;
  v57 = this->fields.standFigureBack;
  if ( !v57 )
    goto LABEL_43;
  StandFigureBack__CreatedStandFigure(
    v57,
    this->fields.figureSvtId,
    this->fields.figureSvtLimitCnt,
    1,
    this->fields.defaultFaceId,
    0LL,
    0,
    0LL);
  MainMenuBar__setMenuActive(1, 0LL, 0LL);
  backgroundTexture = (UITexture_o *)this->fields.backgroundTexture;
  v59 = ShopRootConstants_TypeInfo;
  if ( (BYTE3(ShopRootConstants_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ShopRootConstants_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
    v59 = ShopRootConstants_TypeInfo;
  }
  if ( !backgroundTexture )
    goto LABEL_43;
  UITexture__set_uvRect(backgroundTexture, v59->static_fields->DISP_RECT, 0LL);
  BG_ROOT = ShopRootConstants_TypeInfo->static_fields->BG_ROOT;
  bgImageId = this->fields.bgImageId;
  v61 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &bgImageId);
  v62 = System_String__Format(BG_ROOT, v61, 0LL);
  v63 = this->fields.backgroundTexture;
  v64 = v62;
  v69 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v65, v66, v67, v68);
  System_Action___ctor(v69, (Il2CppObject *)this, Method_ShopRootComponent_LoadBanner__, 0LL);
  if ( !v63 )
LABEL_43:
    sub_B170D4();
  if ( !ExUITexture__SetAssetImage(v63, v64, v69, 0LL) )
  {
    v70 = ShopRootConstants_TypeInfo;
    if ( (BYTE3(ShopRootConstants_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ShopRootConstants_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
      v70 = ShopRootConstants_TypeInfo;
    }
    static_fields = v70->static_fields;
    v72 = static_fields->BG_ROOT;
    DEFAULT_BG_ID = static_fields->DEFAULT_BG_ID;
    v73 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &DEFAULT_BG_ID);
    v74 = System_String__Format(v72, v73, 0LL);
    if ( this->fields.backgroundTexture )
    {
      v64 = v74;
      ExUITexture__SetAssetImage(this->fields.backgroundTexture, v74, 0LL, 0LL);
      goto LABEL_39;
    }
    goto LABEL_43;
  }
LABEL_39:
  v75 = this->fields.backgroundTexture;
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  FSUtility__SetUpBackTextureSize(v75, v64, 0LL);
}


void __fastcall ShopRootComponent__setDispInfo(ShopRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  GuideMaster_o *MasterData_WarQuestSelectionMaster; // x0
  GuideEntity_o *GuideData; // x0
  int32_t guideFaceId; // w8
  ShopRootConstants_c *v9; // x0

  if ( (byte_40FB78E & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_GuideMaster___, method);
    sub_B16FFC(&ShopRootConstants_TypeInfo, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_40FB78E = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (GuideMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)Instance,
                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_GuideMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  GuideData = GuideMaster__getGuideData(MasterData_WarQuestSelectionMaster, 2, 0LL);
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
  __int64 v2; // x2
  ShopRootComponent___c__DisplayClass102_0_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct ShopEntity_o *shopEntity; // x8
  struct System_Int32_array *targetIds; // x8
  System_String_o *v10; // x0
  System_String_o *v11; // x21
  System_String_o *v12; // x0
  int32_t v13; // w20
  System_String_o *v14; // x0
  int32_t v15; // w21
  WebViewManager_o *Instance; // x0
  ServantCostumeMaster_o *MasterData_WarQuestSelectionMaster; // x0
  WebViewManager_o *v18; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  System_String_o *name; // x21
  Il2CppObject *_4__this; // x22
  CommonUI_o *v25; // x20
  System_Action_o *v26; // x19
  ShopRootComponent_o *v27; // x0
  ServantCostumeEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  v3 = this;
  if ( (byte_40F79EF & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantCostumeMaster___, v4);
    sub_B16FFC(&Method_ShopRootComponent_OnEndPlayServantCostumeReleaseEffect__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    this = (ShopRootComponent___c__DisplayClass102_0_o *)sub_B16FFC(
                                                           &Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
                                                           v7);
    byte_40F79EF = 1;
  }
  entity = 0LL;
  shopEntity = v3->fields.shopEntity;
  if ( !shopEntity )
    goto LABEL_16;
  targetIds = shopEntity->fields.targetIds;
  if ( !targetIds )
    goto LABEL_16;
  if ( !targetIds->max_length )
  {
    sub_B17100(this, method, v2);
    sub_B170A0();
  }
  v10 = System_Int32__ToString((int)targetIds + 32, 0LL);
  if ( !v10 )
    goto LABEL_16;
  v11 = v10;
  v12 = System_String__Substring_43807468(v10, 0, v10->fields.m_stringLength - 2, 0LL);
  v13 = System_Int32__Parse(v12, 0LL);
  v14 = System_String__Substring(v11, v11->fields.m_stringLength - 2, 0LL);
  v15 = System_Int32__Parse(v14, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_WarQuestSelectionMaster = (ServantCostumeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)Instance,
                                                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_16;
  if ( ServantCostumeMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, v13, v15, 0LL) )
  {
    v18 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( entity )
    {
      name = entity->fields.name;
      _4__this = (Il2CppObject *)v3->fields.__4__this;
      v25 = (CommonUI_o *)v18;
      v26 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v19, v20, v21, v22);
      System_Action___ctor(v26, _4__this, Method_ShopRootComponent_OnEndPlayServantCostumeReleaseEffect__, 0LL);
      if ( v25 )
      {
        CommonUI__OpenCostumeReleaseEffect(v25, 1, name, v26, 23, 0LL);
        return;
      }
    }
LABEL_16:
    sub_B170D4();
  }
  v27 = v3->fields.__4__this;
  if ( !v27 )
    goto LABEL_16;
  ShopRootComponent__OnEndPlayServantCostumeReleaseEffect(v27, 0LL);
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
  struct ShopRootComponent_o *_4__this; // x8
  ShopPlayVoiceComponent_o *shopPlayVoiceComponent; // x0
  int32_t v5; // w4
  ShopRootComponent_o *v6; // x0

  if ( (byte_40F79F0 & 1) == 0 )
  {
    sub_B16FFC(&PurchaseBehaviour_TypeInfo, method);
    byte_40F79F0 = 1;
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
    || (!_4__this->fields.isFromCoinRoom ? (v5 = 0) : (v5 = 17),
        ShopPlayVoiceComponent__LoadVoice(
          shopPlayVoiceComponent,
          _4__this->fields.figureSvtId,
          this->fields.jumpedState,
          _4__this->fields.isFromCoinRoom,
          v5,
          0LL),
        (v6 = this->fields.__4__this) == 0LL) )
  {
    sub_B170D4();
  }
  ShopRootComponent____n__0(v6, 0LL);
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  struct ShopRootComponent_o *_4__this; // x8
  ShopSceneListViewControlHelper_o *listViewHelper; // x20
  System_Action_o *_9__1; // x24
  int32_t selectedEventIndex; // w21
  int32_t state; // w22
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  ShopRootComponent_o *v18; // x0
  ShopRootComponent_o *v19; // x0
  struct ShopRootComponent_o *v20; // x8
  struct ShopRootComponent_o *v21; // x8

  if ( (byte_40F79F1 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_ShopRootComponent___c__DisplayClass76_0__SelectMenu_b__1__, v6);
    byte_40F79F1 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  listViewHelper = _4__this->fields.listViewHelper;
  _9__1 = this->fields.__9__1;
  selectedEventIndex = _4__this->fields.selectedEventIndex;
  state = this->fields.state;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_ShopRootComponent___c__DisplayClass76_0__SelectMenu_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__1,
      (System_Int32_array **)_9__1,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
  }
  if ( !listViewHelper )
    goto LABEL_12;
  ShopSceneListViewControlHelper__SetListViewOnSelectMenu(
    listViewHelper,
    state,
    &this->fields.eventId,
    selectedEventIndex,
    _9__1,
    0LL);
  v18 = this->fields.__4__this;
  if ( !v18
    || (ShopRootComponent__OpenStonePurchaseMenu(v18, this->fields.state, 0LL), (v19 = this->fields.__4__this) == 0LL)
    || (ShopRootComponent__OpenEventItemWindow(v19, this->fields.state, this->fields.eventId, 0LL),
        (v20 = this->fields.__4__this) == 0LL)
    || (v20->fields.state = this->fields.state, (v21 = this->fields.__4__this) == 0LL) )
  {
LABEL_12:
    sub_B170D4();
  }
  v21->fields.inputState = 0;
}


void __fastcall ShopRootComponent___c__DisplayClass76_0___SelectMenu_b__1(
        ShopRootComponent___c__DisplayClass76_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct ShopRootComponent_o *_4__this; // x8
  ShopPlayVoiceComponent_o *shopPlayVoiceComponent; // x0
  struct ShopRootComponent_o *v9; // x8
  ShopPlayVoiceComponent_o *v10; // x20
  int32_t EnterVoiceFlag; // w0
  WebViewManager_o *Instance; // x0
  GuideMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  GuideEntity_o *GuideData; // x21
  ShopRootConstants_c *v19; // x8
  int32_t guideFaceId; // w20
  int32_t *p_guideImageId; // x8
  int32_t *p_guideLimitCount; // x9
  struct ShopRootConstants_StaticFields *static_fields; // x9
  struct ShopRootComponent_o *v24; // x10
  int32_t v25; // w21
  int32_t v26; // w22
  ShopPlayVoiceComponent_o *v27; // x23
  StandFigureBack_o *standFigureBack; // x24
  System_Action_o *_9__2; // x25
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  ShopRootComponent_o *v36; // x0

  if ( (byte_40F79F2 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_GuideMaster___, v3);
    sub_B16FFC(&ShopRootConstants_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_B16FFC(&Method_ShopRootComponent___c__DisplayClass76_0__SelectMenu_b__2__, v6);
    byte_40F79F2 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_24;
  shopPlayVoiceComponent = _4__this->fields.shopPlayVoiceComponent;
  if ( !shopPlayVoiceComponent )
    goto LABEL_24;
  ShopPlayVoiceComponent__StopVoice(shopPlayVoiceComponent, 0LL);
  if ( this->fields.state != 15 )
    goto LABEL_22;
  v9 = this->fields.__4__this;
  if ( !v9 )
    goto LABEL_24;
  v10 = v9->fields.shopPlayVoiceComponent;
  EnterVoiceFlag = ShopPlayVoiceConstants__GetEnterVoiceFlag(15, 0LL);
  if ( !v10 )
    goto LABEL_24;
  if ( !ShopPlayVoiceComponent__CheckVoiceFlag(v10, EnterVoiceFlag, 0LL) )
    goto LABEL_22;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  MasterData_WarQuestSelectionMaster = (GuideMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          (DataManager_o *)Instance,
                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_GuideMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_24;
  GuideData = GuideMaster__getGuideData(MasterData_WarQuestSelectionMaster, 3, 0LL);
  v19 = ShopRootConstants_TypeInfo;
  if ( (BYTE3(ShopRootConstants_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ShopRootConstants_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
    v19 = ShopRootConstants_TypeInfo;
  }
  if ( GuideData )
  {
    guideFaceId = GuideData->fields.guideFaceId;
    p_guideImageId = &GuideData->fields.guideImageId;
    p_guideLimitCount = &GuideData->fields.guideLimitCount;
  }
  else
  {
    static_fields = v19->static_fields;
    guideFaceId = 0;
    p_guideImageId = &static_fields->DEFAULT_FIGURE_ID;
    p_guideLimitCount = &static_fields->DEFAULT_FIGURE_LIMIT_CNT;
  }
  v24 = this->fields.__4__this;
  if ( !v24 )
    goto LABEL_24;
  v25 = *p_guideImageId;
  v26 = *p_guideLimitCount;
  v27 = v24->fields.shopPlayVoiceComponent;
  standFigureBack = v24->fields.standFigureBack;
  _9__2 = this->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v14, v15, v16, v17);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_ShopRootComponent___c__DisplayClass76_0__SelectMenu_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__2,
      (System_Int32_array **)_9__2,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
  }
  if ( !v27 )
LABEL_24:
    sub_B170D4();
  ShopPlayVoiceComponent__ReloadVoice(v27, standFigureBack, v25, v26, guideFaceId, _9__2, 0LL);
LABEL_22:
  v36 = this->fields.__4__this;
  if ( !v36 )
    goto LABEL_24;
  ShopRootComponent__SetFadeIn(v36, this->fields.state, 0LL);
}


void __fastcall ShopRootComponent___c__DisplayClass76_0___SelectMenu_b__2(
        ShopRootComponent___c__DisplayClass76_0_o *this,
        const MethodInfo *method)
{
  ShopRootComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B170D4();
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
  struct ShopRootComponent_o *_4__this; // x0
  int32_t state; // w21
  ShopSceneListViewControlHelper_o *listViewHelper; // x20
  int32_t StateOnBack; // w0
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  System_Action_o *_9__1; // x23
  int32_t v13; // w22
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  ShopRootComponent_o *v20; // x0
  struct ShopRootComponent_o *v21; // x8

  if ( (byte_40F79F3 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_ShopRootComponent___c__DisplayClass77_0__BackMenu_b__1__, v3);
    byte_40F79F3 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_10;
  state = this->fields.state;
  listViewHelper = _4__this->fields.listViewHelper;
  StateOnBack = ShopRootComponent__GetStateOnBack(_4__this, state, 0LL);
  _9__1 = this->fields.__9__1;
  v13 = StateOnBack;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v8, v9, v10, v11);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_ShopRootComponent___c__DisplayClass77_0__BackMenu_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__1,
      (System_Int32_array **)_9__1,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  if ( !listViewHelper
    || (ShopSceneListViewControlHelper__SetListViewOnBackMenu(listViewHelper, state, v13, _9__1, 0LL),
        (v20 = this->fields.__4__this) == 0LL)
    || (ShopRootComponent__CloseEventItemWindow(v20, 0LL), (v21 = this->fields.__4__this) == 0LL) )
  {
LABEL_10:
    sub_B170D4();
  }
  v21->fields.inputState = 3;
}


void __fastcall ShopRootComponent___c__DisplayClass77_0___BackMenu_b__1(
        ShopRootComponent___c__DisplayClass77_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct ShopRootComponent_o *_4__this; // x8
  ShopPlayVoiceComponent_o *shopPlayVoiceComponent; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  struct ShopRootComponent_o *v10; // x8
  ShopPlayVoiceComponent_o *v11; // x20
  StandFigureBack_o *standFigureBack; // x21
  int32_t figureSvtId; // w22
  int32_t figureSvtLimitCnt; // w23
  int32_t defaultFaceId; // w24
  System_Action_o *_9__2; // x25
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  ShopRootComponent_o *v23; // x0

  if ( (byte_40F79F4 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_ShopRootComponent___c__DisplayClass77_0__BackMenu_b__2__, v3);
    byte_40F79F4 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  shopPlayVoiceComponent = _4__this->fields.shopPlayVoiceComponent;
  if ( !shopPlayVoiceComponent )
    goto LABEL_13;
  ShopPlayVoiceComponent__StopVoice(shopPlayVoiceComponent, 0LL);
  if ( this->fields.state != 15 )
    goto LABEL_11;
  v10 = this->fields.__4__this;
  if ( !v10 )
    goto LABEL_13;
  v11 = v10->fields.shopPlayVoiceComponent;
  standFigureBack = v10->fields.standFigureBack;
  figureSvtId = v10->fields.figureSvtId;
  figureSvtLimitCnt = v10->fields.figureSvtLimitCnt;
  defaultFaceId = v10->fields.defaultFaceId;
  _9__2 = this->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v6, v7, v8, v9);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_ShopRootComponent___c__DisplayClass77_0__BackMenu_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__2,
      (System_Int32_array **)_9__2,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  if ( !v11 )
LABEL_13:
    sub_B170D4();
  ShopPlayVoiceComponent__ReloadVoice(v11, standFigureBack, figureSvtId, figureSvtLimitCnt, defaultFaceId, _9__2, 0LL);
LABEL_11:
  v23 = this->fields.__4__this;
  if ( !v23 )
    goto LABEL_13;
  ShopRootComponent__SetFadeIn(v23, this->fields.state, 0LL);
}


void __fastcall ShopRootComponent___c__DisplayClass77_0___BackMenu_b__2(
        ShopRootComponent___c__DisplayClass77_0_o *this,
        const MethodInfo *method)
{
  ShopRootComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B170D4();
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *_4__this; // x22
  struct ShopBuyItemListViewItem_o *item; // x8
  ShopEntity_o *Shop_k__BackingField; // x20
  int32_t ShopKind_k__BackingField; // w21
  ShopBuyItemConfirmMenu_o *klass; // x19
  System_Action_int__o *v13; // x23

  if ( (byte_40F79F5 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_int___ctor__, method);
    sub_B16FFC(&System_Action_int__TypeInfo, v6);
    sub_B16FFC(&Method_ShopRootComponent_SelectedBuyItemConfirm__, v7);
    byte_40F79F5 = 1;
  }
  _4__this = (Il2CppObject *)this->fields.__4__this;
  if ( !_4__this
    || (item = this->fields.item) == 0LL
    || (Shop_k__BackingField = item->fields._Shop_k__BackingField,
        ShopKind_k__BackingField = item->fields._ShopKind_k__BackingField,
        klass = (ShopBuyItemConfirmMenu_o *)_4__this[9].klass,
        v13 = (System_Action_int__o *)sub_B170CC(System_Action_int__TypeInfo, method, v2, v3, v4),
        System_Action_int____ctor(
          v13,
          _4__this,
          Method_ShopRootComponent_SelectedBuyItemConfirm__,
          (const MethodInfo_24B5D80 *)Method_System_Action_int___ctor__),
        !klass) )
  {
    sub_B170D4();
  }
  ShopBuyItemConfirmMenu__Open(klass, Shop_k__BackingField, ShopKind_k__BackingField, v13, 0, 0LL);
}


void __fastcall ShopRootComponent___c__DisplayClass81_0___OpenConfirmMenu_b__1(
        ShopRootComponent___c__DisplayClass81_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *_4__this; // x22
  struct ShopBuyItemListViewItem_o *item; // x8
  ShopEntity_o *Shop_k__BackingField; // x20
  int32_t ShopKind_k__BackingField; // w21
  ShopBuyItemConfirmMenu_o *klass; // x19
  System_Action_int__o *v13; // x23

  if ( (byte_40F79F6 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_int___ctor__, method);
    sub_B16FFC(&System_Action_int__TypeInfo, v6);
    sub_B16FFC(&Method_ShopRootComponent_SelectedBuyItemConfirm__, v7);
    byte_40F79F6 = 1;
  }
  _4__this = (Il2CppObject *)this->fields.__4__this;
  if ( !_4__this
    || (item = this->fields.item) == 0LL
    || (Shop_k__BackingField = item->fields._Shop_k__BackingField,
        ShopKind_k__BackingField = item->fields._ShopKind_k__BackingField,
        klass = (ShopBuyItemConfirmMenu_o *)_4__this[9].klass,
        v13 = (System_Action_int__o *)sub_B170CC(System_Action_int__TypeInfo, method, v2, v3, v4),
        System_Action_int____ctor(
          v13,
          _4__this,
          Method_ShopRootComponent_SelectedBuyItemConfirm__,
          (const MethodInfo_24B5D80 *)Method_System_Action_int___ctor__),
        !klass) )
  {
    sub_B170D4();
  }
  ShopBuyItemConfirmMenu__Open(klass, Shop_k__BackingField, ShopKind_k__BackingField, v13, 0, 0LL);
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
  struct ShopRootComponent_o *_4__this; // x0
  ServantSellConfirmMenu_o *servantSellConfirmMenu; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  Il2CppObject *v13; // x23
  ServantSellConfirmMenu_o *monitor; // x20
  int32_t kind; // w19
  System_Int64_array *v16; // x21
  System_Int64_array *klass; // x22
  System_Action_int__o *v18; // x24

  if ( (byte_40F79F7 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_int___ctor__, *(_QWORD *)&decide);
    sub_B16FFC(&System_Action_int__TypeInfo, v5);
    sub_B16FFC(&Method_ShopRootComponent_SellServantConfirm__, v6);
    byte_40F79F7 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_10;
  if ( decide )
  {
    servantSellConfirmMenu = _4__this->fields.servantSellConfirmMenu;
    if ( servantSellConfirmMenu )
    {
      ServantSellConfirmMenu__Init(servantSellConfirmMenu, 0LL);
      v13 = (Il2CppObject *)this->fields.__4__this;
      if ( v13 )
      {
        monitor = (ServantSellConfirmMenu_o *)v13[11].monitor;
        kind = this->fields.kind;
        v16 = (System_Int64_array *)v13[28].monitor;
        klass = (System_Int64_array *)v13[29].klass;
        v18 = (System_Action_int__o *)sub_B170CC(System_Action_int__TypeInfo, v9, v10, v11, v12);
        System_Action_int____ctor(
          v18,
          v13,
          Method_ShopRootComponent_SellServantConfirm__,
          (const MethodInfo_24B5D80 *)Method_System_Action_int___ctor__);
        if ( monitor )
        {
          ServantSellConfirmMenu__Open(monitor, kind, v16, klass, v18, 0LL);
          return;
        }
      }
    }
LABEL_10:
    sub_B170D4();
  }
  ShopRootComponent__CloseSellServantConfirm(_4__this, 0LL);
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
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  System_Action_o *_9__1; // x22
  CommonUI_o *v11; // x21
  QuestRewardInfo_o *questRewardInfo; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_40F79F8 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B16FFC(&Method_ShopRootComponent___c__DisplayClass95_0__PlayLvExceedItemReleaseEffect_b__1__, v4);
    byte_40F79F8 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__1 = this->fields.__9__1;
  v11 = (CommonUI_o *)Instance;
  questRewardInfo = this->fields.questRewardInfo;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v6, v7, v8, v9);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_ShopRootComponent___c__DisplayClass95_0__PlayLvExceedItemReleaseEffect_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__1,
      (System_Int32_array **)_9__1,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  if ( !v11 )
    sub_B170D4();
  CommonUI__LoadItemGetEffect(v11, questRewardInfo, _9__1, 0LL);
}


void __fastcall ShopRootComponent___c__DisplayClass95_0___PlayLvExceedItemReleaseEffect_b__1(
        ShopRootComponent___c__DisplayClass95_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  struct ShopRootComponent_o *_4__this; // x8
  CommonUI_o *v7; // x20
  UnityEngine_GameObject_o *actionPanel; // x0
  UnityEngine_Transform_o *transform; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  System_Action_o *_9__2; // x23
  UnityEngine_Transform_o *v15; // x22
  QuestRewardInfo_o *questRewardInfo; // x21
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7

  if ( (byte_40F79F9 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B16FFC(&Method_ShopRootComponent___c__DisplayClass95_0__PlayLvExceedItemReleaseEffect_b__2__, v4);
    byte_40F79F9 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_9;
  v7 = (CommonUI_o *)Instance;
  actionPanel = _4__this->fields.actionPanel;
  if ( !actionPanel )
    goto LABEL_9;
  transform = UnityEngine_GameObject__get_transform(actionPanel, 0LL);
  _9__2 = this->fields.__9__2;
  v15 = transform;
  questRewardInfo = this->fields.questRewardInfo;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v10, v11, v12, v13);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_ShopRootComponent___c__DisplayClass95_0__PlayLvExceedItemReleaseEffect_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__2,
      (System_Int32_array **)_9__2,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  if ( !v7 )
LABEL_9:
    sub_B170D4();
  CommonUI__OpenItemGetEffect(v7, v15, 0, questRewardInfo, _9__2, 0LL);
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
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  CommonUI_o *v11; // x20
  AvalonSceneManager_c *v12; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__3; // x21
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_40F79FA & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B16FFC(&Method_ShopRootComponent___c__DisplayClass95_0__PlayLvExceedItemReleaseEffect_b__3__, v5);
    byte_40F79FA = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  CommonUI__ReleaseItemGetEffect(Instance, 0LL);
  v11 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v12 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v12->static_fields->DEFAULT_FADE_TIME;
  _9__3 = this->fields.__9__3;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v7, v8, v9, v10);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_ShopRootComponent___c__DisplayClass95_0__PlayLvExceedItemReleaseEffect_b__3__,
      0LL);
    this->fields.__9__3 = _9__3;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__3,
      (System_Int32_array **)_9__3,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  if ( !v11 )
LABEL_11:
    sub_B170D4();
  CommonUI__maskFadein(v11, DEFAULT_FADE_TIME, _9__3, 0LL);
}


void __fastcall ShopRootComponent___c__DisplayClass95_0___PlayLvExceedItemReleaseEffect_b__3(
        ShopRootComponent___c__DisplayClass95_0_o *this,
        const MethodInfo *method)
{
  struct ShopBuyItemListViewItem_o *item; // x1
  ShopRootComponent_o *_4__this; // x0

  item = this->fields.item;
  if ( !item || (_4__this = this->fields.__4__this) == 0LL )
    sub_B170D4();
  ShopRootComponent__ShowNormalItemDialog(_4__this, item, item->fields._Shop_k__BackingField, 0LL);
}