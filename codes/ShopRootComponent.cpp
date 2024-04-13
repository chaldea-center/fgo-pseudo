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
  __int64 v3; // x3
  int32_t v4; // w19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  __int64 v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  const MethodInfo *v21; // x2
  System_Action_o *v22; // x20
  ShopRootComponent_o *v23; // x0
  const MethodInfo *v24; // x3

  v4 = state;
  if ( (byte_42EA6B6 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, state, (_DWORD)method, v3);
    sub_B5D5C4(&Method_ShopRootComponent___c__DisplayClass77_0__BackMenu_b__0__, v6, v7, v8);
    sub_B5D5C4(&ShopRootComponent___c__DisplayClass77_0_TypeInfo, v9, v10, v11);
    byte_42EA6B6 = 1;
  }
  v12 = sub_B5D694(ShopRootComponent___c__DisplayClass77_0_TypeInfo);
  ShopRootComponent___c__DisplayClass77_0___ctor((ShopRootComponent___c__DisplayClass77_0_o *)v12, 0LL);
  if ( !v12 )
    sub_B5D69C(v13, v14);
  *(_QWORD *)(v12 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v12 + 16), (System_Int32_array **)this, v15, v16, v17, v18, v19, v20);
  *(_DWORD *)(v12 + 24) = v4;
  if ( v4 != 15 )
  {
    ShopRootComponent__PlayVoiceBack(this, v4, v21);
    v4 = *(_DWORD *)(v12 + 24);
  }
  v22 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v22, (Il2CppObject *)v12, Method_ShopRootComponent___c__DisplayClass77_0__BackMenu_b__0__, 0LL);
  ShopRootComponent__SetFadeOut(v23, v4, v22, v24);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ShopRootComponent__BackScene(ShopRootComponent_o *this, int32_t state, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  SceneJumpInfo_o *jumpInfo; // x0
  void *myFSM; // x0
  bool v44; // w19
  struct SceneJumpInfo_o *v45; // x8
  struct SceneJumpInfo_o *v46; // x8
  struct SceneJumpInfo_o *v47; // x8
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  TerminalPramsManager_c *v51; // x0
  struct ShopSceneListViewControlHelper_o *listViewHelper; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v53; // x20
  EventEntity_o *v54; // x21
  CommonUI_o *Instance; // x20
  System_String_o *v57; // x22
  Il2CppObject *EventName; // x0
  System_String_o *v59; // x21
  System_Action_o *v60; // x22

  if ( (byte_42EA6D7 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, state, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v9, v10, v11);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_ShopRootComponent_OnEndDialogEventCloseWarning__, v15, v16, v17);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18, v19, v20);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v21, v22, v23);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_6250/*"EventItem"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_3102/*"CLICK_BACK"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_13233/*"StoneFragments"*/, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_12289/*"SHOP_EVENT_RETURN_ERROR"*/, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_1/*""*/, v39, v40, v41);
    byte_42EA6D7 = 1;
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
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myFSM, (System_String_o *)StringLiteral_3102/*"CLICK_BACK"*/, 0LL);
      return 1;
    case 4:
      v46 = this->fields.jumpInfo;
      if ( !v46 || !System_String__op_Equality(v46->fields.name, (System_String_o *)StringLiteral_13233/*"StoneFragments"*/, 0LL) )
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
      v44 = 1;
      TerminalPramsManager__set_IsAutoOpenMasterMission(1, 0LL);
      return v44;
    case 7:
      v45 = this->fields.jumpInfo;
      if ( !v45 || !System_String__op_Equality(v45->fields.name, (System_String_o *)StringLiteral_6250/*"EventItem"*/, 0LL) )
        return 0;
      myFSM = this->fields.jumpInfo;
      if ( !myFSM )
        goto LABEL_52;
      return SceneJumpInfo__ReturnScene((SceneJumpInfo_o *)myFSM, 0LL);
    case 8:
      v47 = this->fields.jumpInfo;
      if ( !v47 )
        return 0;
      if ( !System_String__op_Equality(v47->fields.name, (System_String_o *)StringLiteral_6250/*"EventItem"*/, 0LL) )
        goto LABEL_38;
      myFSM = this->fields.jumpInfo;
      if ( !myFSM )
        goto LABEL_52;
      if ( !*((_DWORD *)myFSM + 6) || !SceneJumpInfo__ReturnScene((SceneJumpInfo_o *)myFSM, 0LL) )
      {
LABEL_38:
        myFSM = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( myFSM )
        {
          myFSM = DataManager__GetMasterData_WarQuestSelectionMaster_(
                    (DataManager_o *)myFSM,
                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMaster___);
          listViewHelper = this->fields.listViewHelper;
          if ( listViewHelper )
          {
            v53 = (DataMasterBase_WarMaster__WarEntity__int__o *)myFSM;
            myFSM = listViewHelper->fields.eventListViewManager;
            if ( myFSM )
            {
              myFSM = ShopEventListViewManager__GetItem(
                        (ShopEventListViewManager_o *)myFSM,
                        this->fields.selectedEventIndex,
                        0LL);
              if ( myFSM )
              {
                if ( v53 )
                {
                  myFSM = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                            v53,
                            *((_DWORD *)myFSM + 28),
                            (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
                  if ( myFSM )
                  {
                    v54 = (EventEntity_o *)myFSM;
                    if ( EventEntity__IsOpen((EventEntity_o *)myFSM, 1, 0LL) )
                      return 0;
                    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !LocalizationManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    }
                    v57 = LocalizationManager__Get((System_String_o *)StringLiteral_12289/*"SHOP_EVENT_RETURN_ERROR"*/, 0LL);
                    EventName = (Il2CppObject *)EventEntity__getEventName(v54, 0LL);
                    v59 = System_String__Format(v57, EventName, 0LL);
                    v60 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
                    System_Action___ctor(
                      v60,
                      (Il2CppObject *)this,
                      Method_ShopRootComponent_OnEndDialogEventCloseWarning__,
                      0LL);
                    if ( Instance )
                    {
                      v44 = 1;
                      CommonUI__OpenNotificationDialog(
                        Instance,
                        (System_String_o *)StringLiteral_1/*""*/,
                        v59,
                        v60,
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
                      return v44;
                    }
                  }
                }
              }
            }
          }
        }
LABEL_52:
        sub_B5D69C(myFSM, *(_QWORD *)&state);
      }
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_42E4B29 )
      {
        sub_B5D5C4(&TerminalPramsManager_TypeInfo, v48, v49, v50);
        byte_42E4B29 = 1;
      }
      v51 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v51 = TerminalPramsManager_TypeInfo;
      }
      v44 = 1;
      v51->static_fields->_IsAutoResume_k__BackingField = 1;
      return v44;
    default:
      return 0;
  }
}


void __fastcall ShopRootComponent__CheckSellServantExceeded(ShopRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  ShopRootComponent_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  const MethodInfo *v11; // x1
  ServantSellMenu_o *servantSellMenu; // x0
  ServantSellConfirmMenu_o *servantSellConfirmMenu; // x20
  System_Int64_array *selectedServantIds; // x21
  System_Int64_array *selectedCommandCodeIds; // x22
  System_Action_int__o *v16; // x23

  v4 = this;
  if ( (byte_42EA6C0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_int___ctor__, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&System_Action_int__TypeInfo, v5, v6, v7);
    this = (ShopRootComponent_o *)sub_B5D5C4(&Method_ShopRootComponent_SellServantExceededConfirm__, v8, v9, v10);
    byte_42EA6C0 = 1;
  }
  if ( v4->fields.inputState == 2 )
  {
    if ( !ShopRootComponent__GetIsContainExceededServant(this, v4->fields.selectedServantIds, v2) )
    {
LABEL_7:
      ShopRootComponent__SelectSellServantConfirm(v4, v11);
      return;
    }
    servantSellMenu = v4->fields.servantSellMenu;
    if ( !servantSellMenu )
      goto LABEL_11;
    if ( ServantSellMenu__get_IsSellEquipedCmdCodeLastServant(servantSellMenu, 0LL) )
      goto LABEL_7;
    servantSellConfirmMenu = v4->fields.servantSellConfirmMenu;
    selectedServantIds = v4->fields.selectedServantIds;
    selectedCommandCodeIds = v4->fields.selectedCommandCodeIds;
    v16 = (System_Action_int__o *)sub_B5D694(System_Action_int__TypeInfo);
    System_Action_int____ctor(
      v16,
      (Il2CppObject *)v4,
      Method_ShopRootComponent_SellServantExceededConfirm__,
      (const MethodInfo_2589D90 *)Method_System_Action_int___ctor__);
    if ( !servantSellConfirmMenu )
LABEL_11:
      sub_B5D69C(servantSellMenu, v11);
    ServantSellConfirmMenu__Open(servantSellConfirmMenu, 2, selectedServantIds, selectedCommandCodeIds, v16, 0LL);
  }
}


bool __fastcall ShopRootComponent__CheckServerLimitTime(
        ShopRootComponent_o *this,
        int32_t state,
        const MethodInfo *method)
{
  __int64 v3; // x3
  NetworkManager_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_42EA6E3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__, state, (_DWORD)method, v3);
    byte_42EA6E3 = 1;
  }
  if ( (unsigned int)state > 0x15 || ((1 << state) & 0x35DDFC) == 0 )
    return 1;
  Instance = (NetworkManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v6);
  return NetworkManager__CheckServerLimitTime(Instance, 0LL);
}


void __fastcall ShopRootComponent__CheckTutorial(ShopRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  const MethodInfo *v20; // x2
  NetworkManager_ResultCallbackFunc_o *v21; // x20
  TutorialSetRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v23; // x1

  if ( (byte_42EA6D4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_NetworkManager_getRequest_TutorialSetRequest___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_ShopRootComponent_QuitHelp__, v11, v12, v13);
    sub_B5D5C4(&TutorialFlag_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_21497/*"ok"*/, v17, v18, v19);
    byte_42EA6D4 = 1;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_29295864(103, 0LL) )
  {
    ShopRootComponent__QuitHelp(this, (System_String_o *)StringLiteral_21497/*"ok"*/, v20);
  }
  else
  {
    v21 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(v21, (Il2CppObject *)this, Method_ShopRootComponent_QuitHelp__, 0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = (TutorialSetRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                  v21,
                                                                  (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_TutorialSetRequest___);
    if ( !Request_WarBoardWallAttackRequest )
      sub_B5D69C(0LL, v23);
    TutorialSetRequest__beginRequest(Request_WarBoardWallAttackRequest, 103, 0LL);
  }
}


void __fastcall ShopRootComponent__CloseDetaiCheckConfirm(
        ShopRootComponent_o *this,
        bool decide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  CommonUI_o *Instance; // x0
  __int64 v13; // x1
  struct ShopSceneListViewControlHelper_o *listViewHelper; // x8
  ShopBuyItemListViewItem_o *Item; // x21
  struct ShopEntity_o *Shop_k__BackingField; // x8
  ShopDetailEntity_o *ShopDetailEntity; // x0
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x1

  if ( (byte_42EA6DE & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ShopDetailMaster___, decide, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10, v11);
    byte_42EA6DE = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseConfirmDialog(Instance, 0LL), (listViewHelper = this->fields.listViewHelper) == 0LL)
    || (Instance = (CommonUI_o *)listViewHelper->fields.buyItemListViewManager) == 0LL
    || (Item = ShopBuyItemListViewManager__GetItem(
                 (ShopBuyItemListViewManager_o *)Instance,
                 this->fields.selectedItemIndex,
                 0LL),
        (Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (CommonUI_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ShopDetailMaster___),
        !Item)
    || (Shop_k__BackingField = Item->fields._Shop_k__BackingField) == 0LL
    || !Instance )
  {
    sub_B5D69C(Instance, v13);
  }
  ShopDetailEntity = ShopDetailMaster__getShopDetailEntity(
                       (ShopDetailMaster_o *)Instance,
                       Shop_k__BackingField->fields.id,
                       0LL);
  ShopRootComponent__SetFrequencyTypeCheckList((ShopRootComponent_o *)ShopDetailEntity, ShopDetailEntity, decide, v18);
  if ( decide )
    ShopRootComponent__RequestShop(this, v19);
  else
    ShopRootComponent__CloseItemConfirm(this, v19);
}


void __fastcall ShopRootComponent__CloseEventItemWindow(ShopRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Component_o *shopEventItemDrawBase; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  ShopRootConstants_c *v7; // x8

  if ( (byte_42EA6E2 & 1) == 0 )
  {
    sub_B5D5C4(&ShopRootConstants_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA6E2 = 1;
  }
  shopEventItemDrawBase = (UnityEngine_Component_o *)this->fields.shopEventItemDrawBase;
  if ( !shopEventItemDrawBase )
    goto LABEL_9;
  gameObject = UnityEngine_Component__get_gameObject(shopEventItemDrawBase, 0LL);
  v7 = ShopRootConstants_TypeInfo;
  if ( (BYTE3(ShopRootConstants_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ShopRootConstants_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
    v7 = ShopRootConstants_TypeInfo;
  }
  TweenAlpha__Begin(gameObject, v7->static_fields->CLOSE_TIME, 0.0, 0LL);
  shopEventItemDrawBase = (UnityEngine_Component_o *)this->fields.currencyInfoController;
  if ( !shopEventItemDrawBase )
LABEL_9:
    sub_B5D69C(shopEventItemDrawBase, method);
  ShopCurrencyInfoController__StopUpdateRemainTime((ShopCurrencyInfoController_o *)shopEventItemDrawBase, 0LL);
}


void __fastcall ShopRootComponent__CloseItemConfirm(ShopRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  ShopBuyItemConfirmMenu_o *buyItemConfirmMenu; // x0
  const MethodInfo *v9; // x2
  int32_t state; // w20
  struct ShopSceneListViewControlHelper_o *listViewHelper; // x8
  ShopBuyItemListViewItem_o *v12; // x20
  ShopEntity_o *freeLabel; // x21
  ShopSceneListViewControlHelper_o **p_listViewHelper; // x22
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x2
  ShopSceneListViewControlHelper_o *v18; // x21
  const MethodInfo *v19; // x2

  if ( (byte_42EA6BF & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_ShopMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    byte_42EA6BF = 1;
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
      sub_B5D69C(buyItemConfirmMenu, method);
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
        buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)ShopRootComponent__BackScene(this, state, v9);
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
      v12 = (ShopBuyItemListViewItem_o *)buyItemConfirmMenu;
      freeLabel = (ShopEntity_o *)buyItemConfirmMenu->fields.freeLabel;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      p_listViewHelper = &this->fields.listViewHelper;
      buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ShopMaster___);
      if ( this->fields.buyCount >= 1 )
      {
        if ( !buyItemConfirmMenu )
          goto LABEL_53;
        if ( ShopMaster__IsOpenPurchaseCloseShop((ShopMaster_o *)buyItemConfirmMenu, freeLabel, v15) )
        {
          buyItemConfirmMenu = (ShopBuyItemConfirmMenu_o *)*p_listViewHelper;
          if ( *p_listViewHelper )
          {
            ShopSceneListViewControlHelper__SetListViewOnCloseEventShop(
              (ShopSceneListViewControlHelper_o *)buyItemConfirmMenu,
              this->fields.state,
              v16);
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
              ShopRootComponent__BackMenu(this, (int32_t)method, v17);
              return;
            }
          }
          goto LABEL_53;
        }
      }
      ShopBuyItemListViewItem__Modify(v12, freeLabel, 0LL);
      state = this->fields.state;
    }
    else
    {
      p_listViewHelper = &this->fields.listViewHelper;
    }
    v18 = *p_listViewHelper;
    if ( !*p_listViewHelper )
      goto LABEL_53;
    ShopSceneListViewControlHelper__SetBuyItemListViewModify(*p_listViewHelper, state, v9);
    ShopSceneListViewControlHelper__SetBuyItemListViewInput(v18, state, v19);
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
    sub_B5D69C(servantSellConfirmMenu, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopRootComponent__CloseStonePurchaseMenu(
        ShopRootComponent_o *this,
        int32_t result,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  ShopPlayVoiceComponent_o *shopPlayVoiceComponent; // x0
  const MethodInfo *v10; // x2

  if ( (byte_42EA6E6 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_12327/*"SHOP_SCENE_VOICE_CANCEL"*/, result, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_12326/*"SHOP_SCENE_VOICE_BACK2"*/, v6, v7, v8);
    byte_42EA6E6 = 1;
  }
  if ( result )
    goto LABEL_6;
  shopPlayVoiceComponent = this->fields.shopPlayVoiceComponent;
  if ( !shopPlayVoiceComponent )
    goto LABEL_9;
  if ( !ShopPlayVoiceComponent__PlayVoiceOnce(
          shopPlayVoiceComponent,
          (System_String_o *)StringLiteral_12327/*"SHOP_SCENE_VOICE_CANCEL"*/,
          0x2000,
          v3) )
  {
LABEL_6:
    shopPlayVoiceComponent = this->fields.shopPlayVoiceComponent;
    if ( shopPlayVoiceComponent )
    {
      ShopPlayVoiceComponent__PlayVoiceOnce(shopPlayVoiceComponent, (System_String_o *)StringLiteral_12326/*"SHOP_SCENE_VOICE_BACK2"*/, 4096, v3);
      goto LABEL_8;
    }
LABEL_9:
    sub_B5D69C(shopPlayVoiceComponent, *(_QWORD *)&result);
  }
LABEL_8:
  ShopRootComponent__MenuBackFromStonePurchase(this, result, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopRootComponent__CloseStorageDetailCheckConfirm(
        ShopRootComponent_o *this,
        int32_t buyCount,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ShopRootComponent_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  BuyStorageConfirmDialogComponent_o *buyStorageConfirmDialog; // x20
  System_Action_o *v19; // x21
  struct ShopSceneListViewControlHelper_o *listViewHelper; // x8
  ShopBuyItemListViewItem_o *v21; // x20
  ShopRootComponent_o *v22; // x0
  const MethodInfo *v23; // x2
  const MethodInfo *v24; // x2
  ShopBuyBulkItemConfirmMenu_o *buyBulkItemConfirmMenu; // x20
  System_Action_int__o *v26; // x21
  ShopSceneListViewControlHelper_o *v27; // x20
  int32_t state; // w19
  const MethodInfo *v29; // x2

  v5 = this;
  if ( (byte_42EA6DF & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_int___ctor__, buyCount, (_DWORD)method, v3);
    sub_B5D5C4(&System_Action_int__TypeInfo, v6, v7, v8);
    sub_B5D5C4(&System_Action_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_ShopRootComponent_RequestShop__, v12, v13, v14);
    this = (ShopRootComponent_o *)sub_B5D5C4(&Method_ShopRootComponent_SelectedBuyItemConfirm__, v15, v16, v17);
    byte_42EA6DF = 1;
  }
  v5->fields.buyCount = buyCount;
  if ( buyCount )
  {
    buyStorageConfirmDialog = v5->fields.buyStorageConfirmDialog;
    v19 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v19, (Il2CppObject *)v5, Method_ShopRootComponent_RequestShop__, 0LL);
    if ( buyStorageConfirmDialog )
    {
      BuyStorageConfirmDialogComponent__Close_28592436(buyStorageConfirmDialog, v19, 0LL);
      return;
    }
LABEL_14:
    sub_B5D69C(this, *(_QWORD *)&buyCount);
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
  v21 = (ShopBuyItemListViewItem_o *)this;
  BuyStorageConfirmDialogComponent__Close(v5->fields.buyStorageConfirmDialog, 0LL);
  this = (ShopRootComponent_o *)ShopRootComponent__GetIsBulk(v22, v21, v23);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    buyBulkItemConfirmMenu = v5->fields.buyBulkItemConfirmMenu;
    v26 = (System_Action_int__o *)sub_B5D694(System_Action_int__TypeInfo);
    System_Action_int____ctor(
      v26,
      (Il2CppObject *)v5,
      Method_ShopRootComponent_SelectedBuyItemConfirm__,
      (const MethodInfo_2589D90 *)Method_System_Action_int___ctor__);
    if ( !buyBulkItemConfirmMenu )
      goto LABEL_14;
    ShopBuyBulkItemConfirmMenu__Modify(buyBulkItemConfirmMenu, v26, 0LL);
  }
  else
  {
    v27 = v5->fields.listViewHelper;
    if ( !v27 )
      goto LABEL_14;
    state = v5->fields.state;
    ShopSceneListViewControlHelper__SetBuyItemListViewModify(v27, state, v24);
    ShopSceneListViewControlHelper__SetBuyItemListViewInput(v27, state, v29);
  }
}


void __fastcall ShopRootComponent__CreateShopDetailCheckList(ShopRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  ShopRootComponent_c *v19; // x0
  System_Collections_Generic_Dictionary_int__int__o *v20; // x19
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  ShopRootComponent_c *v27; // x0
  BattleServantConfConponent_o *static_fields; // x0
  void *Instance; // x0
  __int64 v30; // x1
  int v31; // w8
  void *v32; // x19
  unsigned int v33; // w21
  __int64 v34; // x23
  ShopRootComponent_c *v35; // x0
  __int64 v36; // x0

  if ( (byte_42EA6E8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ShopDetailMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v4, v5, v6);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__, v7, v8, v9);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v10, v11, v12);
    sub_B5D5C4(&ShopRootComponent_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16, v17, v18);
    byte_42EA6E8 = 1;
  }
  v19 = ShopRootComponent_TypeInfo;
  if ( (BYTE3(ShopRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ShopRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopRootComponent_TypeInfo);
    v19 = ShopRootComponent_TypeInfo;
  }
  if ( !v19->static_fields->isInitialized )
  {
    v20 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v20,
      (const MethodInfo_2F0A2B4 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    v27 = ShopRootComponent_TypeInfo;
    if ( (BYTE3(ShopRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ShopRootComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ShopRootComponent_TypeInfo);
      v27 = ShopRootComponent_TypeInfo;
    }
    static_fields = (BattleServantConfConponent_o *)v27->static_fields;
    static_fields->klass = (BattleServantConfConponent_c *)v20;
    sub_B5D560(static_fields, (System_Int32_array **)v20, v21, v22, v23, v24, v25, v26);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_27;
    Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ShopDetailMaster___);
    if ( !Instance )
      goto LABEL_27;
    Instance = ShopDetailMaster__getShopDetailEntityList((ShopDetailMaster_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_27;
    v31 = *((_DWORD *)Instance + 6);
    v32 = Instance;
    if ( v31 >= 1 )
    {
      v33 = 0;
      while ( 1 )
      {
        if ( v33 >= v31 )
        {
          v36 = sub_B5D6C8(Instance);
          sub_B5D668(v36, 0LL);
        }
        Instance = ShopRootComponent_TypeInfo;
        v34 = *((_QWORD *)v32 + (int)v33 + 4);
        if ( (BYTE3(ShopRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ShopRootComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ShopRootComponent_TypeInfo);
          Instance = ShopRootComponent_TypeInfo;
        }
        if ( !v34 )
          break;
        Instance = (void *)**((_QWORD **)Instance + 23);
        if ( !Instance )
          break;
        System_Collections_Generic_Dictionary_int__int___set_Item(
          (System_Collections_Generic_Dictionary_int__int__o *)Instance,
          *(_DWORD *)(v34 + 16),
          0,
          (const MethodInfo_2F0AE30 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
        v31 = *((_DWORD *)v32 + 6);
        if ( (int)++v33 >= v31 )
          goto LABEL_22;
      }
LABEL_27:
      sub_B5D69C(Instance, v30);
    }
LABEL_22:
    v35 = ShopRootComponent_TypeInfo;
    if ( (BYTE3(ShopRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ShopRootComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ShopRootComponent_TypeInfo);
      v35 = ShopRootComponent_TypeInfo;
    }
    v35->static_fields->isInitialized = 1;
  }
}


void __fastcall ShopRootComponent__DeleteContinueData(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3

  if ( (byte_42EA6AD & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_13115/*"SpecialItemHelp"*/, v1, v2, v3);
    sub_B5D5C4(&StringLiteral_12996/*"Shop15Help"*/, v4, v5, v6);
    sub_B5D5C4(&StringLiteral_2004/*"AnonymousHelp"*/, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_11410/*"RarePriHelp"*/, v10, v11, v12);
    byte_42EA6AD = 1;
  }
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_2004/*"AnonymousHelp"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11410/*"RarePriHelp"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13115/*"SpecialItemHelp"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_12996/*"Shop15Help"*/, 0LL);
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
    sub_B5D560(
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
  int v2; // w2
  __int64 v3; // x3
  SummonInfoDlgComponent_o *limitCountSealInfoDlg; // x0
  struct ShopSceneListViewControlHelper_o *listViewHelper; // x8
  ShopBuyItemListViewItem_o *Item; // x0
  const MethodInfo *v8; // x4

  if ( (byte_42EA6BC & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA6BC = 1;
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
    sub_B5D69C(limitCountSealInfoDlg, method);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  ServantSellMenu_o *servantSellMenu; // x0
  struct ServantSellMenu_o *v16; // x8
  int32_t tabKind; // w21
  bool v18; // w0
  int32_t ServantSellConfirmKindOnRequestEnd; // w0
  ServantSellConfirmMenu_o *servantSellConfirmMenu; // x22
  System_Int64_array *selectedServantIds; // x20
  System_Int64_array *selectedCommandCodeIds; // x21
  int32_t v23; // w23
  System_Action_int__o *v24; // x24
  const MethodInfo *v25; // x1

  if ( (byte_42EA6D0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_int___ctor__, (_DWORD)result, (_DWORD)method, v3);
    sub_B5D5C4(&System_Action_int__TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_ShopRootComponent_EndSellResultServant__, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_21345/*"ng"*/, v12, v13, v14);
    byte_42EA6D0 = 1;
  }
  servantSellMenu = this->fields.servantSellMenu;
  if ( !servantSellMenu )
    goto LABEL_8;
  ServantSellMenu__Init(servantSellMenu, 0LL);
  servantSellMenu = (ServantSellMenu_o *)this->fields.servantSellConfirmMenu;
  if ( !servantSellMenu )
    goto LABEL_8;
  ServantSellConfirmMenu__Init((ServantSellConfirmMenu_o *)servantSellMenu, 0LL);
  v16 = this->fields.servantSellMenu;
  if ( !v16 )
    goto LABEL_8;
  tabKind = v16->fields.tabKind;
  v18 = System_String__op_Equality(result, (System_String_o *)StringLiteral_21345/*"ng"*/, 0LL);
  ServantSellConfirmKindOnRequestEnd = ServantSellConfirmMenu__GetServantSellConfirmKindOnRequestEnd(tabKind, v18, 0LL);
  servantSellConfirmMenu = this->fields.servantSellConfirmMenu;
  selectedServantIds = this->fields.selectedServantIds;
  selectedCommandCodeIds = this->fields.selectedCommandCodeIds;
  v23 = ServantSellConfirmKindOnRequestEnd;
  v24 = (System_Action_int__o *)sub_B5D694(System_Action_int__TypeInfo);
  System_Action_int____ctor(
    v24,
    (Il2CppObject *)this,
    Method_ShopRootComponent_EndSellResultServant__,
    (const MethodInfo_2589D90 *)Method_System_Action_int___ctor__);
  if ( !servantSellConfirmMenu )
LABEL_8:
    sub_B5D69C(servantSellMenu, result);
  ServantSellConfirmMenu__Open(servantSellConfirmMenu, v23, selectedServantIds, selectedCommandCodeIds, v24, 0LL);
  ShopRootComponent__RefreshInfo(this, v25);
}


void __fastcall ShopRootComponent__EndRequestShop(
        ShopRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ShopBuyItemListViewManager_o *buyItemListViewManager; // x0
  const MethodInfo *v7; // x1
  struct ShopSceneListViewControlHelper_o *listViewHelper; // x8
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x3
  int32_t state; // w8
  const MethodInfo *v12; // x1
  struct ShopEntity_o *dragParentObject; // x2

  if ( (byte_42EA6C5 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_21345/*"ng"*/, (_DWORD)result, (_DWORD)method, v3);
    byte_42EA6C5 = 1;
  }
  buyItemListViewManager = (ShopBuyItemListViewManager_o *)System_String__op_Equality(
                                                             result,
                                                             (System_String_o *)StringLiteral_21345/*"ng"*/,
                                                             0LL);
  if ( ((unsigned __int8)buyItemListViewManager & 1) != 0 )
  {
    ShopRootComponent__RequestEnd(this, v7);
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
  v7 = (const MethodInfo *)buyItemListViewManager;
  if ( (unsigned int)(state - 11) < 2 )
  {
    ShopRootComponent__ShowStorageDialog(this, (ShopBuyItemListViewItem_o *)buyItemListViewManager, v9);
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
          v10);
      goto LABEL_12;
    }
LABEL_17:
    sub_B5D69C(buyItemListViewManager, v7);
  }
  ShopRootComponent__PlayLvExceedItemReleaseEffect(this, (ShopBuyItemListViewItem_o *)buyItemListViewManager, v9);
LABEL_12:
  ShopRootComponent__RefreshInfo(this, v12);
}


int32_t __fastcall ShopRootComponent__GetCurrency(
        ShopRootComponent_o *this,
        ShopEntity_o *shopEntity,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int32_t result; // w0
  UserItemMaster_o *Master_WarQuestSelectionMaster; // x20
  int64_t UserId; // x21

  if ( (byte_42EA6DA & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_UserItemMaster___, (_DWORD)shopEntity, (_DWORD)method, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    this = (ShopRootComponent_o *)sub_B5D5C4(&NetworkManager_TypeInfo, v8, v9, v10);
    byte_42EA6DA = 1;
  }
  if ( !shopEntity )
LABEL_22:
    sub_B5D69C(this, shopEntity);
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
      Master_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserItemMaster___);
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
        v19 = sub_B5D6C8(CommonConsumeEntities);
        sub_B5D668(v19, 0LL);
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
    sub_B5D69C(this, item);
  }
  return v8;
}


bool __fastcall ShopRootComponent__GetIsContainExceededServant(
        ShopRootComponent_o *this,
        System_Int64_array *selectServantIds,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  __int64 v13; // x8
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v14; // x20
  unsigned __int64 v15; // x21
  __int64 v17; // x0

  if ( (byte_42EA6C1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, (_DWORD)selectServantIds, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42EA6C1 = 1;
  }
  if ( !selectServantIds )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_14:
    sub_B5D69C(Instance, v12);
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
  v13 = *(_QWORD *)&selectServantIds->max_length;
  if ( (int)v13 < 1 )
    return 0;
  v14 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance;
  v15 = 0LL;
  while ( 1 )
  {
    if ( v15 >= (unsigned int)v13 )
    {
      v17 = sub_B5D6C8(Instance);
      sub_B5D668(v17, 0LL);
    }
    if ( !v14 )
      goto LABEL_14;
    Instance = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                  v14,
                                  selectServantIds->m_Items[v15],
                                  (const MethodInfo_23FB038 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( Instance )
    {
      Instance = (DataManager_o *)UserServantEntity__isExceeded((UserServantEntity_o *)Instance, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        return 1;
    }
    LODWORD(v13) = selectServantIds->max_length;
    if ( (__int64)++v15 >= (int)v13 )
      return 0;
  }
}


int32_t __fastcall ShopRootComponent__GetShopItemBuyNum(
        ShopRootComponent_o *this,
        ShopBuyItemListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  UserShopMaster_o *MasterData_WarQuestSelectionMaster; // x20
  struct ShopEntity_o *Shop_k__BackingField; // x8
  UserShopEntity_o *EntityDefinitely; // x0

  if ( (byte_42EA6BD & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserShopMaster___, (_DWORD)item, (_DWORD)method, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42EA6BD = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = (UserShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             Instance,
                                                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserShopMaster___);
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
    sub_B5D69C(Instance, v12);
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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3

  if ( (byte_42EA6E4 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_8580/*"LeafExchange"*/, (_DWORD)jumpInfoName, eventId, method);
    sub_B5D5C4(&StringLiteral_6250/*"EventItem"*/, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_13233/*"StoneFragments"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_12818/*"SellServant"*/, v12, v13, v14);
    byte_42EA6E4 = 1;
  }
  if ( !jumpInfoName )
    return 1;
  if ( !System_String__op_Equality(jumpInfoName, (System_String_o *)StringLiteral_6250/*"EventItem"*/, 0LL) )
  {
    if ( System_String__op_Equality(jumpInfoName, (System_String_o *)StringLiteral_12818/*"SellServant"*/, 0LL) )
      return 9;
    if ( System_String__op_Equality(jumpInfoName, (System_String_o *)StringLiteral_13233/*"StoneFragments"*/, 0LL) )
      return 4;
    if ( System_String__op_Equality(jumpInfoName, (System_String_o *)StringLiteral_8580/*"LeafExchange"*/, 0LL) )
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
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
  ShopSceneListViewControlHelper_o *v61; // x28
  struct ShopSceneListViewControlHelper_o **p_listViewHelper; // x21
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  __int64 v69; // x1
  const MethodInfo *v70; // x5
  ShopSceneListViewControlHelper_o *listViewHelper; // x0
  ShopSceneListViewControlHelper_o *v72; // x23
  System_Action_o *v73; // x24
  System_Action_ShopRootConstants_State__o *v74; // x25
  System_Action_int__o *v75; // x26
  System_Action_int__o *v76; // x27
  System_Action_ServantSellMenu_ResultKind__long____long____o *v77; // x28
  System_Action_o *v78; // x22
  const MethodInfo *v79; // x7
  ShopRootComponent_o *v80; // x0
  const MethodInfo *v81; // x3
  int StateOnInit; // w0
  const MethodInfo *v83; // x4
  int32_t v84; // w8
  _BOOL4 isFromCoinRoom; // w9
  float saveScrollBarValue; // s0
  const MethodInfo *v87; // x3
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  UnityEngine_GameObject_o *gameObject; // x20
  System_Action_int__o *v95; // x21
  const MethodInfo *v96; // [xsp+18h] [xbp-78h]
  ShopTopListViewManager_o *topListViewManager; // [xsp+20h] [xbp-70h]
  UnityEngine_GameObject_o *eventListViewBase; // [xsp+28h] [xbp-68h]
  System_String_o *jumpInfoName; // [xsp+30h] [xbp-60h]
  int32_t eventId; // [xsp+3Ch] [xbp-54h]

  if ( (byte_42EA6B2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_ShopRootConstants_State___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Action_int___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Action_int__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&System_Action_ShopRootConstants_State__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_System_Action_ServantSellMenu_ResultKind__long____long_____ctor__, v14, v15, v16);
    sub_B5D5C4(&System_Action_ServantSellMenu_ResultKind__long____long____TypeInfo, v17, v18, v19);
    sub_B5D5C4(&System_Action_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_ShopRootComponent_OnMoveEnd__, v23, v24, v25);
    sub_B5D5C4(&Method_ShopRootComponent_OnSelectBuyItem__, v26, v27, v28);
    sub_B5D5C4(&Method_ShopRootComponent_OnSelectEvent__, v29, v30, v31);
    sub_B5D5C4(&Method_ShopRootComponent_OnSelectSellServant__, v32, v33, v34);
    sub_B5D5C4(&Method_ShopRootComponent_OnSelectTop__, v35, v36, v37);
    sub_B5D5C4(&Method_ShopRootComponent_OpenHelp__, v38, v39, v40);
    sub_B5D5C4(&Method_ShopRootComponent__Init_b__71_0__, v41, v42, v43);
    sub_B5D5C4(&ShopSceneListViewControlHelper_TypeInfo, v44, v45, v46);
    sub_B5D5C4(&StringLiteral_1/*""*/, v47, v48, v49);
    byte_42EA6B2 = 1;
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
    v61 = (ShopSceneListViewControlHelper_o *)sub_B5D694(ShopSceneListViewControlHelper_TypeInfo);
    ShopSceneListViewControlHelper___ctor(
      v61,
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
      v96);
    p_listViewHelper = &this->fields.listViewHelper;
    this->fields.listViewHelper = v61;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.listViewHelper,
      (System_Int32_array **)v61,
      v63,
      v64,
      v65,
      v66,
      v67,
      v68);
    listViewHelper = this->fields.listViewHelper;
    if ( !listViewHelper )
      goto LABEL_23;
    ShopSceneListViewControlHelper__SetOtherObjects(
      listViewHelper,
      this->fields.titleInfo,
      this->fields.standFigureBack,
      this->fields.giftButtonControl,
      this->fields.backgroundTexture,
      v70);
    v72 = this->fields.listViewHelper;
    v73 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v73, (Il2CppObject *)this, Method_ShopRootComponent_OnMoveEnd__, 0LL);
    v74 = (System_Action_ShopRootConstants_State__o *)sub_B5D694(System_Action_ShopRootConstants_State__TypeInfo);
    System_Action_ShopRootConstants_State____ctor(
      v74,
      (Il2CppObject *)this,
      Method_ShopRootComponent_OnSelectTop__,
      (const MethodInfo_258A064 *)Method_System_Action_ShopRootConstants_State___ctor__);
    v75 = (System_Action_int__o *)sub_B5D694(System_Action_int__TypeInfo);
    System_Action_int____ctor(
      v75,
      (Il2CppObject *)this,
      Method_ShopRootComponent_OnSelectEvent__,
      (const MethodInfo_2589D90 *)Method_System_Action_int___ctor__);
    v76 = (System_Action_int__o *)sub_B5D694(System_Action_int__TypeInfo);
    System_Action_int____ctor(
      v76,
      (Il2CppObject *)this,
      Method_ShopRootComponent_OnSelectBuyItem__,
      (const MethodInfo_2589D90 *)Method_System_Action_int___ctor__);
    v77 = (System_Action_ServantSellMenu_ResultKind__long____long____o *)sub_B5D694(System_Action_ServantSellMenu_ResultKind__long____long____TypeInfo);
    System_Action_ServantSellMenu_ResultKind__long____long______ctor(
      v77,
      (Il2CppObject *)this,
      Method_ShopRootComponent_OnSelectSellServant__,
      (const MethodInfo_259AAB4 *)Method_System_Action_ServantSellMenu_ResultKind__long____long_____ctor__);
    v78 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v78, (Il2CppObject *)this, Method_ShopRootComponent_OpenHelp__, 0LL);
    if ( !v72 )
      goto LABEL_23;
    ShopSceneListViewControlHelper__SetCallbackEvents(v72, v73, v74, v75, v76, v77, v78, v79);
    StateOnInit = ShopRootComponent__GetStateOnInit(v80, jumpInfoName, eventId, v81);
    v69 = (unsigned int)StateOnInit;
    this->fields.state = StateOnInit;
    if ( StateOnInit > 4 )
    {
      if ( (unsigned int)StateOnInit <= 0x14 )
      {
        v84 = 1;
        if ( ((1 << StateOnInit) & 0x110300) != 0 )
          goto LABEL_16;
      }
    }
    else
    {
      v84 = 1;
      if ( StateOnInit == 1 || StateOnInit == 4 )
        goto LABEL_16;
    }
    v84 = 0;
LABEL_16:
    isFromCoinRoom = this->fields.isFromCoinRoom;
    this->fields.inputState = v84;
    if ( isFromCoinRoom )
      saveScrollBarValue = this->fields.saveScrollBarValue;
    else
      saveScrollBarValue = -1.0;
    listViewHelper = *p_listViewHelper;
    if ( *p_listViewHelper )
    {
      ShopSceneListViewControlHelper__SetListViewOnSceneInit(
        listViewHelper,
        v69,
        eventId,
        saveScrollBarValue,
        &this->fields.selectedEventIndex,
        v83);
      ShopRootComponent__OpenEventItemWindow(this, this->fields.state, eventId, v87);
      if ( this->fields.state == 9 )
      {
        this->fields.jumpInfo = 0LL;
        sub_B5D560((BattleServantConfConponent_o *)&this->fields.jumpInfo, 0LL, v88, v89, v90, v91, v92, v93);
      }
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      v95 = (System_Action_int__o *)sub_B5D694(System_Action_int__TypeInfo);
      System_Action_int____ctor(
        v95,
        (Il2CppObject *)this,
        Method_ShopRootComponent__Init_b__71_0__,
        (const MethodInfo_2589D90 *)Method_System_Action_int___ctor__);
      StoneCountRefreshComponent__AttachToGameObject(gameObject, v95, 0, 0LL);
      return;
    }
LABEL_23:
    sub_B5D69C(listViewHelper, v69);
  }
}


void __fastcall ShopRootComponent__LoadBanner(ShopRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  __int64 v17; // x19
  __int64 v18; // x0
  __int64 v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  ShopRootComponent_o *v26; // x0
  const MethodInfo *v27; // x3
  struct SceneJumpInfo_o *jumpInfo; // x8
  int32_t id; // w2
  System_String_o **p_name; // x8
  System_Action_o *v31; // x20

  if ( (byte_42EA6B1 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&AtlasManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_ShopRootComponent___c__DisplayClass68_0__LoadBanner_b__0__, v8, v9, v10);
    sub_B5D5C4(&ShopRootComponent___c__DisplayClass68_0_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_1/*""*/, v14, v15, v16);
    byte_42EA6B1 = 1;
  }
  v17 = sub_B5D694(ShopRootComponent___c__DisplayClass68_0_TypeInfo);
  ShopRootComponent___c__DisplayClass68_0___ctor((ShopRootComponent___c__DisplayClass68_0_o *)v17, 0LL);
  if ( !v17 )
    sub_B5D69C(v18, v19);
  *(_QWORD *)(v17 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v17 + 16), (System_Int32_array **)this, v20, v21, v22, v23, v24, v25);
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
  *(_DWORD *)(v17 + 24) = ShopRootComponent__GetStateOnInit(v26, *p_name, id, v27);
  v31 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v31, (Il2CppObject *)v17, Method_ShopRootComponent___c__DisplayClass68_0__LoadBanner_b__0__, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadOutGameAtlas(v31, 0LL);
}


void __fastcall ShopRootComponent__MenuBackFromStonePurchase(
        ShopRootComponent_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  ShopSceneListViewControlHelper_o *listViewHelper; // x22
  int32_t v10; // w21
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x1

  if ( (byte_42EA6E7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, result, (_DWORD)method, v3);
    byte_42EA6E7 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || ((CommonUI__CloseStonePurchaseMenu(Instance, 0LL),
         listViewHelper = this->fields.listViewHelper,
         this->fields.state != 8)
      ? (v10 = 1)
      : (v10 = 7),
        this->fields.state = v10,
        this->fields.inputState = 2,
        !listViewHelper) )
  {
    sub_B5D69C(Instance, v7);
  }
  ShopSceneListViewControlHelper__SetTopListViewInput(listViewHelper, v10, v8);
  ShopSceneListViewControlHelper__SetHelpButtonEnable(listViewHelper, v10, v11);
  if ( result == 2 )
    ShopRootComponent__RefreshInfo(this, v12);
}


void __fastcall ShopRootComponent__OnClickBack(ShopRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x2

  if ( (byte_42EA6D6 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA6D6 = 1;
  }
  if ( this->fields.inputState == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    if ( !ShopRootComponent__BackScene(this, this->fields.state, v5) )
      ShopRootComponent__BackMenu(this, this->fields.state, v6);
  }
}


void __fastcall ShopRootComponent__OnClickHelp(ShopRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x1

  if ( (byte_42EA6D1 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA6D1 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  ShopRootComponent__OpenHelp(this, v5);
}


void __fastcall ShopRootComponent__OnClickHelpClose(ShopRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  unsigned int state; // w8
  TitleInfoControl_o *titleInfo; // x0
  ShopHelpListViewManager_o *helpListViewManager; // x20
  System_Action_o *v14; // x21
  const MethodInfo *v15; // x2

  if ( (byte_42EA6D3 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_ShopRootComponent_CheckTutorial__, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    byte_42EA6D3 = 1;
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
    sub_B5D69C(titleInfo, method);
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  helpListViewManager = this->fields.helpListViewManager;
  v14 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_ShopRootComponent_CheckTutorial__, 0LL);
  if ( !helpListViewManager )
    goto LABEL_12;
  ShopHelpListViewManager__CloseHelpDialog(helpListViewManager, v14, v15);
}


void __fastcall ShopRootComponent__OnEndDialogEventCloseWarning(ShopRootComponent_o *this, const MethodInfo *method)
{
  MainMenuBar__requestTerminalSceneChange(0LL);
}


void __fastcall ShopRootComponent__OnEndFadeRequestShop(ShopRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_String_o *MainBgmName; // x20
  const MethodInfo *v9; // x1

  if ( (byte_42EA6CE & 1) == 0 )
  {
    sub_B5D5C4(&BgmManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    byte_42EA6CE = 1;
  }
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  MainBgmName = BgmManager__GetMainBgmName(0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm(MainBgmName, 0LL);
  ShopRootComponent__RequestEnd(this, v9);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopRootComponent__OnEndItemDialog(ShopRootComponent_o *this, bool isOk, const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  RequestResultDialog_o *requestResultDialog; // x0
  struct ShopSceneListViewControlHelper_o *listViewHelper; // x8
  ShopEntity_o *itemMessageLabel; // x20
  const MethodInfo *v23; // x2
  System_String_o *longName; // x20
  ScriptManager_CallbackFunc_o *v25; // x21
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42EA6CA & 1) == 0 )
  {
    sub_B5D5C4(&ScriptManager_CallbackFunc_TypeInfo, isOk, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ShopScriptMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataMasterBase_ShopScriptMaster__ShopScriptEntity__int__TryGetEntity__, v8, v9, v10);
    sub_B5D5C4(&ScriptManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_ShopRootComponent_OnEndPlayScriptRequestShop__, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18, v19);
    byte_42EA6CA = 1;
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
  requestResultDialog = (RequestResultDialog_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !requestResultDialog )
    goto LABEL_21;
  requestResultDialog = (RequestResultDialog_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                   (DataManager_o *)requestResultDialog,
                                                   (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ShopScriptMaster___);
  if ( !itemMessageLabel || !requestResultDialog )
    goto LABEL_21;
  requestResultDialog = (RequestResultDialog_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                   (DataMasterBase_WarMaster__WarEntity__int__o *)requestResultDialog,
                                                   &entity,
                                                   itemMessageLabel->fields.id,
                                                   (const MethodInfo_23FAE6C *)Method_DataMasterBase_ShopScriptMaster__ShopScriptEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)requestResultDialog & 1) == 0 )
    goto LABEL_13;
  if ( !entity )
    goto LABEL_21;
  requestResultDialog = (RequestResultDialog_o *)System_String__IsNullOrEmpty(entity->fields.longName, 0LL);
  if ( ((unsigned __int8)requestResultDialog & 1) != 0 )
  {
LABEL_13:
    if ( itemMessageLabel->fields.purchaseType == 14 )
      ShopRootComponent__PlayServantCostumeReleaseEffect(this, itemMessageLabel, v23);
    else
      ShopRootComponent__RequestEnd(this, (const MethodInfo *)isOk);
    return;
  }
  if ( !entity )
LABEL_21:
    sub_B5D69C(requestResultDialog, isOk);
  longName = entity->fields.longName;
  v25 = (ScriptManager_CallbackFunc_o *)sub_B5D694(ScriptManager_CallbackFunc_TypeInfo);
  ScriptManager_CallbackFunc___ctor(
    v25,
    (Il2CppObject *)this,
    Method_ShopRootComponent_OnEndPlayScriptRequestShop__,
    0LL);
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  ScriptManager__PlayShop(longName, v25, 0, 0LL);
}


void __fastcall ShopRootComponent__OnEndPlayScriptRequestShop(
        ShopRootComponent_o *this,
        bool isExit,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v5; // w1
  int v6; // w2
  __int64 v7; // x3
  char v8; // w1
  int v9; // w2
  __int64 v10; // x3
  CommonUI_o *Instance; // x20
  System_Action_o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1

  if ( (byte_42EA6CB & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isExit, (_DWORD)method, v3);
    sub_B5D5C4(&Method_ShopRootComponent_OnEndFadeRequestShop__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    byte_42EA6CB = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_ShopRootComponent_OnEndFadeRequestShop__, 0LL);
  if ( !Instance )
    sub_B5D69C(v13, v14);
  CommonUI__maskFadein(Instance, 1.0, v12, 0LL);
}


void __fastcall ShopRootComponent__OnEndPlayServantCostumeReleaseEffect(
        ShopRootComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v15; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v17; // x21
  __int64 v18; // x0
  __int64 v19; // x1

  if ( (byte_42EA6CD & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_ShopRootComponent_RequestEnd__, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11, v12, v13);
    byte_42EA6CD = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v15 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v15 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v15->static_fields->DEFAULT_FADE_TIME;
  v17 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_ShopRootComponent_RequestEnd__, 0LL);
  if ( !Instance )
    sub_B5D69C(v18, v19);
  CommonUI__maskFadein(Instance, DEFAULT_FADE_TIME, v17, 0LL);
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
    sub_B5D69C(0LL, count);
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
    sub_B5D69C(BuyItemKind, v6);
  }
  ShopSceneListViewControlHelper__SetListViewInvalidate(BuyItemKind, v6);
  return 1;
}


void __fastcall ShopRootComponent__OnGiftOpen(ShopRootComponent_o *this, const MethodInfo *method)
{
  ShopPlayVoiceComponent_o *shopPlayVoiceComponent; // x0

  shopPlayVoiceComponent = this->fields.shopPlayVoiceComponent;
  if ( !shopPlayVoiceComponent )
    sub_B5D69C(0LL, method);
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
      sub_B5D69C(0LL, state);
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
      sub_B5D69C(0LL, state);
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
  __int64 v3; // x3
  ShopBuyItemListViewManager_o *buyItemListViewManager; // x0
  __int64 v7; // x1
  struct ShopSceneListViewControlHelper_o *listViewHelper; // x8
  ShopBuyItemListViewItem_o *Item; // x0
  const MethodInfo *v10; // x2
  bool IsBulk; // w2
  const MethodInfo *v12; // x3

  if ( (byte_42EA6D9 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, index, (_DWORD)method, v3);
    byte_42EA6D9 = 1;
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
      sub_B5D69C(buyItemListViewManager, v7);
    Item = ShopBuyItemListViewManager__GetItem(buyItemListViewManager, index, 0LL);
    IsBulk = ShopRootComponent__GetIsBulk((ShopRootComponent_o *)Item, Item, v10);
    ShopRootComponent__SelectItem(this, index, IsBulk, v12);
  }
}


void __fastcall ShopRootComponent__OnSelectEvent(ShopRootComponent_o *this, int32_t index, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  ShopEventListViewManager_o *eventListViewManager; // x0
  __int64 v28; // x1
  struct ShopSceneListViewControlHelper_o *listViewHelper; // x8
  ShopEventListViewItem_o *Item; // x20
  const MethodInfo *v31; // x2
  int32_t eventId; // w21
  SceneJumpInfo_o *v33; // x19

  if ( (byte_42EA6DB & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventDetailMaster___, index, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v6, v7, v8);
    sub_B5D5C4(&SceneJumpInfo_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v12, v13, v14);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16, v17);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v18, v19, v20);
    sub_B5D5C4(&SoundManager_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_9729/*"NormalEventShop"*/, v24, v25, v26);
    byte_42EA6DB = 1;
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
  eventListViewManager = (ShopEventListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !eventListViewManager )
    goto LABEL_18;
  eventListViewManager = (ShopEventListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)eventListViewManager,
                                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Item )
    goto LABEL_18;
  if ( !eventListViewManager )
    goto LABEL_18;
  eventListViewManager = (ShopEventListViewManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                         (DataMasterBase_WarMaster__WarEntity__int__o *)eventListViewManager,
                                                         Item->fields.eventId,
                                                         (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
  if ( !eventListViewManager )
    goto LABEL_18;
  if ( EventDetailEntity__IsEventShop((EventDetailEntity_o *)eventListViewManager, 0LL) )
  {
    eventId = Item->fields.eventId;
    v33 = (SceneJumpInfo_o *)sub_B5D694(SceneJumpInfo_TypeInfo);
    SceneJumpInfo___ctor_17509080(v33, (System_String_o *)StringLiteral_9729/*"NormalEventShop"*/, eventId, 0LL);
    if ( v33 )
    {
      SceneJumpInfo__SetReturnNowScene(v33, 0LL);
      eventListViewManager = (ShopEventListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( eventListViewManager )
      {
        CommonUI__CheckChangeOtherConnectMarkFromEventId(
          (CommonUI_o *)eventListViewManager,
          Item->fields.eventId,
          1,
          0LL);
        eventListViewManager = (ShopEventListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( eventListViewManager )
        {
          AvalonSceneManager__transitionScene(
            (AvalonSceneManager_o *)eventListViewManager,
            72,
            1,
            (Il2CppObject *)v33,
            0LL);
          return;
        }
      }
    }
LABEL_18:
    sub_B5D69C(eventListViewManager, v28);
  }
  ShopRootComponent__SelectMenu(this, 8, v31);
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
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.selectedServantIds,
      (System_Int32_array **)servantList,
      (System_String_array **)servantList,
      (System_String_array **)commandCodeList,
      (System_Boolean_array **)method,
      v5,
      v6,
      v7);
    this->fields.selectedCommandCodeIds = commandCodeList;
    sub_B5D560(
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  ShopRootConstants_c *v12; // x0
  bool IsSvtCostumeShopOpen; // w0
  _BOOL4 v14; // w9
  _BOOL4 v15; // w8
  bool IsTargetQuestClear; // w0
  const MethodInfo *v17; // x2

  if ( (byte_42EA6D8 & 1) == 0 )
  {
    sub_B5D5C4(&CoinRoomUtility_TypeInfo, state, (_DWORD)method, v3);
    sub_B5D5C4(&ShopRootConstants_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&SoundManager_TypeInfo, v9, v10, v11);
    byte_42EA6D8 = 1;
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
      v15 = 0;
      v14 = !IsTargetQuestClear;
    }
    else if ( state == 15 )
    {
      v12 = ShopRootConstants_TypeInfo;
      if ( (BYTE3(ShopRootConstants_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ShopRootConstants_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
      }
      IsSvtCostumeShopOpen = ShopRootConstants__IsSvtCostumeShopOpen((const MethodInfo *)v12);
      v14 = 0;
      v15 = !IsSvtCostumeShopOpen;
    }
    else
    {
      v15 = 0;
      v14 = 0;
    }
    if ( v14 || v15 )
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
      ShopRootComponent__SelectMenu(this, state, v17);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  __int64 v30; // x23
  ShopEntity_o *KindByShopState; // x0
  __int64 v32; // x1
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  ShopBuyItemListViewItem_o **v39; // x22
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  ShopBuyItemListViewItem_o *v46; // x20
  struct ShopBuyBulkItemConfirmMenu_o *ApSeedBulkExchangeConfirmMenu; // x21
  ShopEntity_o *v48; // x22
  System_Action_int__o *v49; // x23
  int32_t v50; // w4
  ShopBuyBulkItemConfirmMenu_o *v51; // x0
  ShopEntity_o *v52; // x1
  ShopBuyItemListViewItem_o *v53; // x2
  System_Action_int__o *v54; // x3
  ShopBuyItemListViewItem_o *v55; // x8
  struct ShopBuyItemConfirmMenu_o *buyItemConfirmMenu; // x20
  ShopEntity_o *v57; // x21
  int32_t ShopKind_k__BackingField; // w22
  System_Action_int__o *v59; // x23
  ShopBuyItemConfirmMenu_o *v60; // x0
  ShopEntity_o *v61; // x1
  int32_t v62; // w2
  ShopBuyItemConfirmMenu_o *v63; // x20
  ShopBuyItemListViewItem_o *v64; // x21
  System_Action_o *v65; // x0
  __int64 *v66; // x8
  int32_t v67; // w21
  const MethodInfo *v68; // x2
  BuyStorageConfirmDialogComponent_o *buyStorageNotificationDialog; // x20
  ShopBuyItemListViewItem_o *v70; // x22
  System_Action_int__o *v71; // x23
  int32_t v72; // w2
  System_Action_o *v73; // x22
  System_Action_int__o *v74; // x23
  int v75; // w23
  ShopBuyItemListViewItem_o *v76; // x20
  struct ShopBuyBulkItemConfirmMenu_o *buyBulkItemConfirmMenu; // x21
  ShopEntity_o *Shop_k__BackingField; // x22
  System_Action_int__o *v79; // x23
  ShopEntity_o *v80; // x22
  int32_t v81; // w21
  BuyStorageConfirmDialogComponent_o *buyStorageConfirmDialog; // x20
  ShopBuyItemListViewItem_o *v83; // x22
  System_Action_int__o *v84; // x23

  if ( (byte_42EA6BA & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_int___ctor__, state, (_DWORD)item, isBulk);
    sub_B5D5C4(&System_Action_int__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&System_Action_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_ShopRootComponent_CloseStorageDetailCheckConfirm__, v15, v16, v17);
    sub_B5D5C4(&Method_ShopRootComponent_SelectedBuyItemConfirm__, v18, v19, v20);
    sub_B5D5C4(&Method_ShopRootComponent___c__DisplayClass81_0__OpenConfirmMenu_b__0__, v21, v22, v23);
    sub_B5D5C4(&Method_ShopRootComponent___c__DisplayClass81_0__OpenConfirmMenu_b__1__, v24, v25, v26);
    sub_B5D5C4(&ShopRootComponent___c__DisplayClass81_0_TypeInfo, v27, v28, v29);
    byte_42EA6BA = 1;
  }
  v30 = sub_B5D694(ShopRootComponent___c__DisplayClass81_0_TypeInfo);
  ShopRootComponent___c__DisplayClass81_0___ctor((ShopRootComponent___c__DisplayClass81_0_o *)v30, 0LL);
  if ( !v30 )
    goto LABEL_50;
  *(_QWORD *)(v30 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v30 + 16), (System_Int32_array **)this, v33, v34, v35, v36, v37, v38);
  *(_QWORD *)(v30 + 24) = item;
  v39 = (ShopBuyItemListViewItem_o **)(v30 + 24);
  sub_B5D560((BattleServantConfConponent_o *)(v30 + 24), (System_Int32_array **)item, v40, v41, v42, v43, v44, v45);
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
      v55 = *v39;
      if ( !*v39 )
        goto LABEL_50;
      buyItemConfirmMenu = this->fields.buyItemConfirmMenu;
      goto LABEL_13;
    case 3:
    case 15:
      if ( isBulk )
        goto LABEL_6;
      v63 = this->fields.buyItemConfirmMenu;
      v64 = *(ShopBuyItemListViewItem_o **)(v30 + 24);
      v65 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      v66 = &Method_ShopRootComponent___c__DisplayClass81_0__OpenConfirmMenu_b__0__;
      goto LABEL_27;
    case 11:
    case 12:
      KindByShopState = (ShopEntity_o *)BuyStorageConfirmDialogComponent__GetKindByShopState(state, 0LL);
      if ( !*v39 )
        goto LABEL_50;
      v67 = (int)KindByShopState;
      KindByShopState = (*v39)->fields._Shop_k__BackingField;
      if ( !KindByShopState )
        goto LABEL_50;
      KindByShopState = (ShopEntity_o *)ShopEntity__IsSoldOut(KindByShopState, 0LL);
      if ( ((unsigned __int8)KindByShopState & 1) != 0 )
      {
        buyStorageNotificationDialog = this->fields.buyStorageNotificationDialog;
        v70 = *v39;
        v71 = (System_Action_int__o *)sub_B5D694(System_Action_int__TypeInfo);
        System_Action_int____ctor(
          v71,
          (Il2CppObject *)this,
          Method_ShopRootComponent_SelectedBuyItemConfirm__,
          (const MethodInfo_2589D90 *)Method_System_Action_int___ctor__);
        if ( buyStorageNotificationDialog )
        {
          v72 = 1;
LABEL_38:
          BuyStorageConfirmDialogComponent__NotificationDialogOpen(
            buyStorageNotificationDialog,
            v67,
            v72,
            v70,
            v71,
            0LL);
          return;
        }
        goto LABEL_50;
      }
      if ( !*v39 )
        goto LABEL_50;
      KindByShopState = (ShopEntity_o *)ShopRootComponent__GetCurrency(
                                          (ShopRootComponent_o *)KindByShopState,
                                          (*v39)->fields._Shop_k__BackingField,
                                          v68);
      if ( !*v39 )
        goto LABEL_50;
      v75 = (int)KindByShopState;
      KindByShopState = (*v39)->fields._Shop_k__BackingField;
      if ( !KindByShopState )
        goto LABEL_50;
      KindByShopState = (ShopEntity_o *)ShopEntity__GetPrice(KindByShopState, 0LL);
      if ( v75 < (int)KindByShopState )
      {
        buyStorageNotificationDialog = this->fields.buyStorageNotificationDialog;
        v70 = *v39;
        v71 = (System_Action_int__o *)sub_B5D694(System_Action_int__TypeInfo);
        System_Action_int____ctor(
          v71,
          (Il2CppObject *)this,
          Method_ShopRootComponent_SelectedBuyItemConfirm__,
          (const MethodInfo_2589D90 *)Method_System_Action_int___ctor__);
        if ( buyStorageNotificationDialog )
        {
          v72 = 2;
          goto LABEL_38;
        }
LABEL_50:
        sub_B5D69C(KindByShopState, v32);
      }
      if ( isBulk )
      {
        v76 = *v39;
        if ( !*v39 )
          goto LABEL_50;
        buyBulkItemConfirmMenu = this->fields.buyBulkItemConfirmMenu;
        Shop_k__BackingField = v76->fields._Shop_k__BackingField;
        v79 = (System_Action_int__o *)sub_B5D694(System_Action_int__TypeInfo);
        System_Action_int____ctor(
          v79,
          (Il2CppObject *)this,
          Method_ShopRootComponent_SelectedBuyItemConfirm__,
          (const MethodInfo_2589D90 *)Method_System_Action_int___ctor__);
        if ( !buyBulkItemConfirmMenu )
          goto LABEL_50;
        v51 = buyBulkItemConfirmMenu;
        v52 = Shop_k__BackingField;
        v53 = v76;
        v54 = v79;
        v50 = 0;
LABEL_10:
        ShopBuyBulkItemConfirmMenu__Open(v51, v52, v53, v54, v50, 0LL);
        return;
      }
      buyStorageConfirmDialog = this->fields.buyStorageConfirmDialog;
      this->fields.buyCount = 1;
      v83 = *v39;
      v84 = (System_Action_int__o *)sub_B5D694(System_Action_int__TypeInfo);
      System_Action_int____ctor(
        v84,
        (Il2CppObject *)this,
        Method_ShopRootComponent_CloseStorageDetailCheckConfirm__,
        (const MethodInfo_2589D90 *)Method_System_Action_int___ctor__);
      if ( !buyStorageConfirmDialog )
        goto LABEL_50;
      BuyStorageConfirmDialogComponent__Open(buyStorageConfirmDialog, v67, v83, 1, v84, 0LL);
      return;
    case 19:
      if ( isBulk )
      {
        v46 = *v39;
        if ( !*v39 )
          goto LABEL_50;
        ApSeedBulkExchangeConfirmMenu = this->fields.ApSeedBulkExchangeConfirmMenu;
        goto LABEL_8;
      }
      v55 = *v39;
      if ( !*v39 )
        goto LABEL_50;
      buyItemConfirmMenu = this->fields.ApSeedExchangeConfirmMenu;
LABEL_13:
      v57 = v55->fields._Shop_k__BackingField;
      ShopKind_k__BackingField = v55->fields._ShopKind_k__BackingField;
      v59 = (System_Action_int__o *)sub_B5D694(System_Action_int__TypeInfo);
      System_Action_int____ctor(
        v59,
        (Il2CppObject *)this,
        Method_ShopRootComponent_SelectedBuyItemConfirm__,
        (const MethodInfo_2589D90 *)Method_System_Action_int___ctor__);
      if ( !buyItemConfirmMenu )
        goto LABEL_50;
      v60 = buyItemConfirmMenu;
      v61 = v57;
      v62 = ShopKind_k__BackingField;
      break;
    case 21:
      if ( isBulk )
      {
LABEL_6:
        v46 = *v39;
        if ( !*v39 )
          goto LABEL_50;
        ApSeedBulkExchangeConfirmMenu = this->fields.buyBulkItemConfirmMenu;
LABEL_8:
        v48 = v46->fields._Shop_k__BackingField;
        v49 = (System_Action_int__o *)sub_B5D694(System_Action_int__TypeInfo);
        System_Action_int____ctor(
          v49,
          (Il2CppObject *)this,
          Method_ShopRootComponent_SelectedBuyItemConfirm__,
          (const MethodInfo_2589D90 *)Method_System_Action_int___ctor__);
        if ( !ApSeedBulkExchangeConfirmMenu )
          goto LABEL_50;
        v50 = 8;
        v51 = ApSeedBulkExchangeConfirmMenu;
        v52 = v48;
        v53 = v46;
        v54 = v49;
        goto LABEL_10;
      }
      KindByShopState = (ShopEntity_o *)*v39;
      if ( !*v39 )
        goto LABEL_50;
      KindByShopState = (ShopEntity_o *)ShopBuyItemListViewItem__get_IsItemTypeRarePri(
                                          (ShopBuyItemListViewItem_o *)KindByShopState,
                                          0LL);
      v63 = this->fields.buyItemConfirmMenu;
      v64 = *v39;
      if ( ((unsigned __int8)KindByShopState & 1) != 0 )
      {
        v65 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
        v66 = &Method_ShopRootComponent___c__DisplayClass81_0__OpenConfirmMenu_b__1__;
LABEL_27:
        v73 = v65;
        System_Action___ctor(v65, (Il2CppObject *)v30, *v66, 0LL);
        v74 = (System_Action_int__o *)sub_B5D694(System_Action_int__TypeInfo);
        System_Action_int____ctor(
          v74,
          (Il2CppObject *)this,
          Method_ShopRootComponent_SelectedBuyItemConfirm__,
          (const MethodInfo_2589D90 *)Method_System_Action_int___ctor__);
        if ( v63 )
        {
          ShopBuyItemConfirmMenu__OpenAfterCheckedFree(v63, v64, v73, v74, 0LL);
          return;
        }
        goto LABEL_50;
      }
      if ( !v64 )
        goto LABEL_50;
      v80 = v64->fields._Shop_k__BackingField;
      v81 = v64->fields._ShopKind_k__BackingField;
      v59 = (System_Action_int__o *)sub_B5D694(System_Action_int__TypeInfo);
      System_Action_int____ctor(
        v59,
        (Il2CppObject *)this,
        Method_ShopRootComponent_SelectedBuyItemConfirm__,
        (const MethodInfo_2589D90 *)Method_System_Action_int___ctor__);
      if ( !v63 )
        goto LABEL_50;
      v60 = v63;
      v61 = v80;
      v62 = v81;
      break;
    default:
      return;
  }
  ShopBuyItemConfirmMenu__Open(v60, v61, v62, v59, 0, 0LL);
  return;
}


void __fastcall ShopRootComponent__OpenDetailCheck(ShopRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  ShopRootComponent_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  struct ShopSceneListViewControlHelper_o *listViewHelper; // x8
  ShopBuyItemListViewItem_o *Item; // x20
  struct ShopEntity_o *Shop_k__BackingField; // x8
  ShopDetailEntity_o *ShopDetailEntity; // x21
  System_String_o *message; // x21
  CommonUI_o *v25; // x20
  CommonConfirmDialog_ClickDelegate_o *v26; // x22

  v4 = this;
  if ( (byte_42EA6DC & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CommonConfirmDialog_ClickDelegate_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ShopDetailMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_ShopRootComponent_CloseDetaiCheckConfirm__, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15, v16);
    this = (ShopRootComponent_o *)sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17, v18, v19);
    byte_42EA6DC = 1;
  }
  listViewHelper = v4->fields.listViewHelper;
  if ( !listViewHelper )
    goto LABEL_15;
  this = (ShopRootComponent_o *)listViewHelper->fields.buyItemListViewManager;
  if ( !this )
    goto LABEL_15;
  Item = ShopBuyItemListViewManager__GetItem((ShopBuyItemListViewManager_o *)this, v4->fields.selectedItemIndex, 0LL);
  this = (ShopRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_15;
  this = (ShopRootComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ShopDetailMaster___);
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
  this = (ShopRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !ShopDetailEntity )
    goto LABEL_15;
  message = ShopDetailEntity->fields.message;
  v25 = (CommonUI_o *)this;
  v26 = (CommonConfirmDialog_ClickDelegate_o *)sub_B5D694(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v26,
    (Il2CppObject *)v4,
    Method_ShopRootComponent_CloseDetaiCheckConfirm__,
    0LL);
  this = (ShopRootComponent_o *)BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  }
  if ( !v25 )
LABEL_15:
    sub_B5D69C(this, method);
  CommonUI__OpenConfirmDialog_18201948(
    v25,
    0LL,
    message,
    1,
    v26,
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

  if ( (byte_42EA6E1 & 1) == 0 )
  {
    sub_B5D5C4(&ShopRootConstants_TypeInfo, state, eventId, method);
    byte_42EA6E1 = 1;
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
    sub_B5D69C(shopEventItemDrawBase, *(_QWORD *)&state);
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
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int32_t state; // w9
  ShopSceneListViewControlHelper_o *listViewHelper; // x0
  CommonUI_o *Instance; // x20
  System_Action_o *v17; // x21
  int32_t v18; // w1
  const MethodInfo *v19; // x1
  int32_t v20; // w19
  System_String_o *HelpSaveKey; // x0

  if ( (byte_42EA6D2 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&Method_ShopRootComponent_OnClickHelpClose__, v5, v6, v7);
    sub_B5D5C4(&ShopRootConstants_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11, v12, v13);
    byte_42EA6D2 = 1;
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
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v17 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v17, (Il2CppObject *)this, Method_ShopRootComponent_OnClickHelpClose__, 0LL);
      if ( !Instance )
        goto LABEL_22;
      v18 = 20;
      goto LABEL_17;
    case 5:
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v17 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v17, (Il2CppObject *)this, Method_ShopRootComponent_OnClickHelpClose__, 0LL);
      if ( !Instance )
        goto LABEL_22;
      v18 = 47;
      goto LABEL_17;
    case 6:
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v17 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v17, (Il2CppObject *)this, Method_ShopRootComponent_OnClickHelpClose__, 0LL);
      if ( !Instance )
        goto LABEL_22;
      v18 = 19;
      goto LABEL_17;
    default:
      if ( state != 20 )
        return;
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v17 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v17, (Il2CppObject *)this, Method_ShopRootComponent_OnClickHelpClose__, 0LL);
      if ( !Instance )
        goto LABEL_22;
      v18 = 1029;
LABEL_17:
      CommonUI__OpenTutorialImageDialog_18227680(Instance, v18, -1, v17, 0LL, 0LL, 0LL);
      listViewHelper = (ShopSceneListViewControlHelper_o *)this->fields.titleInfo;
      if ( !listViewHelper )
LABEL_22:
        sub_B5D69C(listViewHelper, method);
      TitleInfoControl__SetHelpBtn((TitleInfoControl_o *)listViewHelper, 0, 0LL);
      v20 = this->fields.state;
      if ( (BYTE3(ShopRootConstants_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ShopRootConstants_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
      }
      HelpSaveKey = ShopRootConstants__GetHelpSaveKey(v20, v19);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  ServantLimitImageMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v23; // x1
  System_String_o *LimitCountSealedDialogMessage; // x0
  SummonInfoDlgComponent_o *limitCountSealInfoDlg; // x21
  System_String_o *v26; // x20
  System_String_o *v27; // x22
  SummonInfoDlgComponent_CallbackFunc_o *v28; // x23

  if ( (byte_42EA6BB & 1) == 0 )
  {
    sub_B5D5C4(&SummonInfoDlgComponent_CallbackFunc_TypeInfo, svtId, limitCount, method);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v7, v8, v9);
    sub_B5D5C4(&DataManager_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_ShopRootComponent_EndLimitCountSealInfoDialog__, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_8472/*"LIMIT_COUNT_SEALED_TITLE"*/, v19, v20, v21);
    byte_42EA6BB = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_12;
  LimitCountSealedDialogMessage = ServantLimitImageMaster__GetLimitCountSealedDialogMessage(
                                    Master_WarQuestSelectionMaster,
                                    svtId,
                                    limitCount,
                                    0LL);
  limitCountSealInfoDlg = this->fields.limitCountSealInfoDlg;
  v26 = LimitCountSealedDialogMessage;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_8472/*"LIMIT_COUNT_SEALED_TITLE"*/, 0LL);
  v28 = (SummonInfoDlgComponent_CallbackFunc_o *)sub_B5D694(SummonInfoDlgComponent_CallbackFunc_TypeInfo);
  SummonInfoDlgComponent_CallbackFunc___ctor(
    v28,
    (Il2CppObject *)this,
    Method_ShopRootComponent_EndLimitCountSealInfoDialog__,
    0LL);
  if ( !limitCountSealInfoDlg )
LABEL_12:
    sub_B5D69C(Master_WarQuestSelectionMaster, v23);
  SummonInfoDlgComponent__OpenInfoMessageDlg(limitCountSealInfoDlg, v27, v26, v28, 0LL);
}


void __fastcall ShopRootComponent__OpenStonePurchaseMenu(
        ShopRootComponent_o *this,
        int32_t state,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  CommonUI_o *Instance; // x20
  StonePurchaseMenu_CallbackFunc_o *v19; // x21
  System_Action_o *v20; // x22
  __int64 v21; // x0
  __int64 v22; // x1

  if ( (byte_42EA6E5 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, state, (_DWORD)method, v3);
    sub_B5D5C4(&StonePurchaseMenu_CallbackFunc_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_ShopRootComponent_CloseStonePurchaseMenu__, v9, v10, v11);
    sub_B5D5C4(&Method_ShopRootComponent_RefreshInfo__, v12, v13, v14);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15, v16, v17);
    byte_42EA6E5 = 1;
  }
  if ( state == 10 )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v19 = (StonePurchaseMenu_CallbackFunc_o *)sub_B5D694(StonePurchaseMenu_CallbackFunc_TypeInfo);
    StonePurchaseMenu_CallbackFunc___ctor(
      v19,
      (Il2CppObject *)this,
      Method_ShopRootComponent_CloseStonePurchaseMenu__,
      0LL);
    v20 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v20, (Il2CppObject *)this, Method_ShopRootComponent_RefreshInfo__, 0LL);
    if ( !Instance )
      sub_B5D69C(v21, v22);
    CommonUI__OpenStonePurchaseMenu(Instance, v19, v20, 0LL);
  }
}


void __fastcall ShopRootComponent__OpenStorageDetailCheck(ShopRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  ShopRootComponent_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct ShopSceneListViewControlHelper_o *listViewHelper; // x8
  ShopBuyItemListViewItem_o *Item; // x20
  int32_t KindByShopState; // w0
  BuyStorageConfirmDialogComponent_o *buyStorageConfirmDialog; // x22
  int32_t buyCount; // w21
  int32_t v16; // w23
  System_Action_int__o *v17; // x24

  v4 = this;
  if ( (byte_42EA6DD & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_int___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_int__TypeInfo, v5, v6, v7);
    this = (ShopRootComponent_o *)sub_B5D5C4(&Method_ShopRootComponent_CloseStorageDetailCheckConfirm__, v8, v9, v10);
    byte_42EA6DD = 1;
  }
  listViewHelper = v4->fields.listViewHelper;
  if ( !listViewHelper )
    goto LABEL_7;
  this = (ShopRootComponent_o *)listViewHelper->fields.buyItemListViewManager;
  if ( !this
    || (Item = ShopBuyItemListViewManager__GetItem(
                 (ShopBuyItemListViewManager_o *)this,
                 v4->fields.selectedItemIndex,
                 0LL),
        KindByShopState = BuyStorageConfirmDialogComponent__GetKindByShopState(v4->fields.state, 0LL),
        buyStorageConfirmDialog = v4->fields.buyStorageConfirmDialog,
        buyCount = v4->fields.buyCount,
        v16 = KindByShopState,
        v17 = (System_Action_int__o *)sub_B5D694(System_Action_int__TypeInfo),
        System_Action_int____ctor(
          v17,
          (Il2CppObject *)v4,
          Method_ShopRootComponent_CloseStorageDetailCheckConfirm__,
          (const MethodInfo_2589D90 *)Method_System_Action_int___ctor__),
        !buyStorageConfirmDialog) )
  {
LABEL_7:
    sub_B5D69C(this, method);
  }
  BuyStorageConfirmDialogComponent__Open(buyStorageConfirmDialog, v16, Item, buyCount, v17, 0LL);
}


void __fastcall ShopRootComponent__PlayLvExceedItemReleaseEffect(
        ShopRootComponent_o *this,
        ShopBuyItemListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  __int64 v24; // x20
  BalanceConfig_c *v25; // x0
  ShopBuyItemListViewItem_o *v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  ShopBuyItemListViewItem_o **v33; // x22
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  const MethodInfo *v40; // x3
  __int64 v41; // x8
  __int64 v42; // x8
  int v43; // w21
  QuestRewardInfo_o *v44; // x22
  __int64 v45; // x21
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  __int64 v52; // x8
  __int64 v53; // x8
  __int64 v54; // x8
  CommonUI_o *Instance; // x19
  AvalonSceneManager_c *v56; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v58; // x21
  __int64 v59; // x0

  if ( (byte_42EA6C6 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)item, (_DWORD)method, v3);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&BalanceConfig_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&QuestRewardInfo_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15, v16, v17);
    sub_B5D5C4(&Method_ShopRootComponent___c__DisplayClass95_0__PlayLvExceedItemReleaseEffect_b__0__, v18, v19, v20);
    sub_B5D5C4(&ShopRootComponent___c__DisplayClass95_0_TypeInfo, v21, v22, v23);
    byte_42EA6C6 = 1;
  }
  v24 = sub_B5D694(ShopRootComponent___c__DisplayClass95_0_TypeInfo);
  ShopRootComponent___c__DisplayClass95_0___ctor((ShopRootComponent___c__DisplayClass95_0_o *)v24, 0LL);
  if ( !v24 )
    goto LABEL_26;
  *(_QWORD *)(v24 + 24) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v24 + 24), (System_Int32_array **)this, v27, v28, v29, v30, v31, v32);
  *(_QWORD *)(v24 + 32) = item;
  v33 = (ShopBuyItemListViewItem_o **)(v24 + 32);
  sub_B5D560((BattleServantConfConponent_o *)(v24 + 32), (System_Int32_array **)item, v34, v35, v36, v37, v38, v39);
  if ( !*(_QWORD *)(v24 + 32) )
    goto LABEL_26;
  v41 = *(_QWORD *)(*(_QWORD *)(v24 + 32) + 112LL);
  if ( !v41 )
    goto LABEL_26;
  v42 = *(_QWORD *)(v41 + 56);
  if ( !v42 )
    goto LABEL_26;
  if ( !*(_DWORD *)(v42 + 24) )
  {
LABEL_27:
    v59 = sub_B5D6C8(v25);
    sub_B5D668(v59, 0LL);
  }
  v43 = *(_DWORD *)(v42 + 32);
  v25 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v25 = BalanceConfig_TypeInfo;
  }
  if ( v43 == v25->static_fields->LvExceedItemId )
  {
    v44 = (QuestRewardInfo_o *)sub_B5D694(QuestRewardInfo_TypeInfo);
    QuestRewardInfo___ctor(v44, 0LL);
    *(_QWORD *)(v24 + 16) = v44;
    v45 = v24 + 16;
    sub_B5D560((BattleServantConfConponent_o *)(v24 + 16), (System_Int32_array **)v44, v46, v47, v48, v49, v50, v51);
    v52 = *(_QWORD *)(v24 + 32);
    if ( !v52 )
      goto LABEL_26;
    v53 = *(_QWORD *)(v52 + 112);
    if ( !v53 )
      goto LABEL_26;
    v54 = *(_QWORD *)(v53 + 56);
    if ( !v54 )
      goto LABEL_26;
    if ( *(_DWORD *)(v54 + 24) )
    {
      if ( *(_QWORD *)v45 )
      {
        *(_DWORD *)(*(_QWORD *)v45 + 20LL) = *(_DWORD *)(v54 + 32);
        if ( *(_QWORD *)v45 )
        {
          *(_DWORD *)(*(_QWORD *)v45 + 24LL) = this->fields.buyCount;
          if ( *(_QWORD *)v45 )
          {
            *(_DWORD *)(*(_QWORD *)v45 + 16LL) = 2;
            Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v56 = AvalonSceneManager_TypeInfo;
            if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
              v56 = AvalonSceneManager_TypeInfo;
            }
            DEFAULT_FADE_TIME = v56->static_fields->DEFAULT_FADE_TIME;
            v58 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
            System_Action___ctor(
              v58,
              (Il2CppObject *)v24,
              Method_ShopRootComponent___c__DisplayClass95_0__PlayLvExceedItemReleaseEffect_b__0__,
              0LL);
            if ( Instance )
            {
              CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v58, 0LL);
              return;
            }
          }
        }
      }
LABEL_26:
      sub_B5D69C(v25, v26);
    }
    goto LABEL_27;
  }
  v26 = *v33;
  if ( !*v33 )
    goto LABEL_26;
  ShopRootComponent__ShowNormalItemDialog(this, v26, v26->fields._Shop_k__BackingField, v40);
}


void __fastcall ShopRootComponent__PlayServantCostumeReleaseEffect(
        ShopRootComponent_o *this,
        ShopEntity_o *shopEntity,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  __int64 v18; // x19
  __int64 v19; // x0
  __int64 v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  const MethodInfo *v33; // x2
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v35; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v37; // x21

  if ( (byte_42EA6CC & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)shopEntity, (_DWORD)method, v3);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10, v11);
    sub_B5D5C4(&Method_ShopRootComponent___c__DisplayClass102_0__PlayServantCostumeReleaseEffect_b__0__, v12, v13, v14);
    sub_B5D5C4(&ShopRootComponent___c__DisplayClass102_0_TypeInfo, v15, v16, v17);
    byte_42EA6CC = 1;
  }
  v18 = sub_B5D694(ShopRootComponent___c__DisplayClass102_0_TypeInfo);
  ShopRootComponent___c__DisplayClass102_0___ctor((ShopRootComponent___c__DisplayClass102_0_o *)v18, 0LL);
  if ( !v18 )
    goto LABEL_9;
  *(_QWORD *)(v18 + 16) = shopEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v18 + 16),
    (System_Int32_array **)shopEntity,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  *(_QWORD *)(v18 + 24) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v18 + 24), (System_Int32_array **)this, v27, v28, v29, v30, v31, v32);
  ShopRootComponent__SetActionBG(this, 1, v33);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v35 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v35 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v35->static_fields->DEFAULT_FADE_TIME;
  v37 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v37,
    (Il2CppObject *)v18,
    Method_ShopRootComponent___c__DisplayClass102_0__PlayServantCostumeReleaseEffect_b__0__,
    0LL);
  if ( !Instance )
LABEL_9:
    sub_B5D69C(v19, v20);
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v37, 0LL);
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
    sub_B5D69C(BackVoiceMasterKey, v6);
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
    sub_B5D69C(EnterVoiceMasterKey, v6);
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
    sub_B5D69C(standFigureBack, method);
  }
  ShopInfoIndicator__StopInformationChange((ShopInfoIndicator_o *)standFigureBack, method);
  this->fields.state = 0;
}


void __fastcall ShopRootComponent__QuitHelp(
        ShopRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  ShopSceneListViewControlHelper_o *listViewHelper; // x0

  if ( (byte_42EA6D5 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_21497/*"ok"*/, (_DWORD)result, (_DWORD)method, v3);
    byte_42EA6D5 = 1;
  }
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_21497/*"ok"*/, 0LL) )
  {
    listViewHelper = this->fields.listViewHelper;
    this->fields.inputState = 4;
    if ( !listViewHelper )
      sub_B5D69C(0LL, v6);
    ShopSceneListViewControlHelper__SetListViewOnQuitHelp(listViewHelper, this->fields.state, v7);
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
    sub_B5D69C(CurrencyKind, v6);
  ShopCurrencyInfoController__RefreshCurrencyInfo(currencyInfoController, CurrencyKind, state, 0LL);
}


void __fastcall ShopRootComponent__RefreshInfo(ShopRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  UserGameEntity_o *SelfUserGame; // x20
  int64_t Instance; // x0
  __int64 v31; // x1
  int64_t v32; // x21
  UILabel_o *stoneInfoLabel; // x22
  int32_t stone; // w23
  UILabel_o *manaInfoLabel; // x22
  UILabel_o *rarePriInfoLabel; // x22
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  UILabel_o *stoneFragmentsInfoLabel; // x22
  UserItemMaster_o *v39; // x20
  UILabel_o *anonymousInfoLabel; // x22
  int64_t UserId; // x0
  UILabel_o *grailFragmentsInfoLabel; // x21
  int64_t v43; // x22
  BalanceConfig_c *v44; // x8
  UILabel_o *apSeedInfoLabel; // x21
  int64_t v46; // x0
  const MethodInfo *v47; // x1
  UILabel_o *shop13InfoLabel; // x21
  int64_t v49; // x0
  UISprite_o *shop13Info; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v52; // x0
  UnityEngine_GameObject_o *v53; // x0
  UnityEngine_GameObject_o *v54; // x0
  char v55; // w21
  UILabel_o *shop15InfoLabel; // x21
  int64_t v57; // x0
  BalanceConfig_c *v58; // x8
  int64_t v59; // x22
  int32_t v60; // w20
  UISprite_o *shop15Info; // x20
  UnityEngine_GameObject_o *v62; // x0
  UnityEngine_GameObject_o *v63; // x0
  UnityEngine_GameObject_o *v64; // x0
  UnityEngine_GameObject_o *v65; // x0
  const MethodInfo *v66; // x2

  if ( (byte_42EA6B3 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BalanceConfig_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ItemMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserItemMaster___, v11, v12, v13);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&NetworkManager_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_19680/*"img_bg_evocation"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_19684/*"img_bg_pp"*/, v26, v27, v28);
    byte_42EA6B3 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_64;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !SelfUserGame )
    goto LABEL_64;
  v32 = Instance;
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
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_64;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserItemMaster___);
  stoneFragmentsInfoLabel = this->fields.stoneFragmentsInfoLabel;
  v39 = (UserItemMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !v32 )
    goto LABEL_64;
  if ( !v39 )
    goto LABEL_64;
  Instance = (int64_t)UserItemMaster__GetEntityDefinitely(v39, Instance, *(_DWORD *)(v32 + 88), 0LL);
  if ( !Instance )
    goto LABEL_64;
  Instance = (int64_t)LocalizationManager__GetNumberFormat(*(_DWORD *)(Instance + 28), 0LL);
  if ( !stoneFragmentsInfoLabel )
    goto LABEL_64;
  UILabel__set_text(stoneFragmentsInfoLabel, (System_String_o *)Instance, 0LL);
  anonymousInfoLabel = this->fields.anonymousInfoLabel;
  UserId = NetworkManager__get_UserId(0LL);
  Instance = (int64_t)UserItemMaster__GetEntityDefinitely(v39, UserId, *(_DWORD *)(v32 + 92), 0LL);
  if ( !Instance )
    goto LABEL_64;
  Instance = (int64_t)LocalizationManager__GetNumberFormat(*(_DWORD *)(Instance + 28), 0LL);
  if ( !anonymousInfoLabel )
    goto LABEL_64;
  UILabel__set_text(anonymousInfoLabel, (System_String_o *)Instance, 0LL);
  grailFragmentsInfoLabel = this->fields.grailFragmentsInfoLabel;
  v43 = NetworkManager__get_UserId(0LL);
  v44 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v44 = BalanceConfig_TypeInfo;
  }
  Instance = (int64_t)UserItemMaster__GetEntityDefinitely(v39, v43, v44->static_fields->LvExceedDewDropItemId, 0LL);
  if ( !Instance )
    goto LABEL_64;
  Instance = (int64_t)LocalizationManager__GetNumberFormat(*(_DWORD *)(Instance + 28), 0LL);
  if ( !grailFragmentsInfoLabel )
    goto LABEL_64;
  UILabel__set_text(grailFragmentsInfoLabel, (System_String_o *)Instance, 0LL);
  apSeedInfoLabel = this->fields.apSeedInfoLabel;
  v46 = NetworkManager__get_UserId(0LL);
  Instance = (int64_t)UserItemMaster__GetEntityDefinitely(
                        v39,
                        v46,
                        BalanceConfig_TypeInfo->static_fields->ApSeedItemId,
                        0LL);
  if ( !Instance )
    goto LABEL_64;
  Instance = (int64_t)LocalizationManager__GetNumberFormat(*(_DWORD *)(Instance + 28), 0LL);
  if ( !apSeedInfoLabel )
    goto LABEL_64;
  UILabel__set_text(apSeedInfoLabel, (System_String_o *)Instance, 0LL);
  ShopRootComponent__UpdateApLabel(this, v47);
  Instance = (int64_t)this->fields.shop13Info;
  if ( !Instance )
    goto LABEL_64;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_64;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  shop13InfoLabel = this->fields.shop13InfoLabel;
  v49 = NetworkManager__get_UserId(0LL);
  Instance = (int64_t)UserItemMaster__GetEntityDefinitely(
                        v39,
                        v49,
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
  AtlasManager__SetShopBanner_31192016(shop13Info, (System_String_o *)StringLiteral_19684/*"img_bg_pp"*/, 0LL);
  Instance = (int64_t)this->fields.manaInfoLabel;
  if ( !Instance )
    goto LABEL_64;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  Instance = (int64_t)GameObjectExtensions__GetParent(gameObject, 0LL);
  if ( !Instance )
    goto LABEL_64;
  v52 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  GameObjectExtensions__SetLocalPositionX(v52, 85.0, 0LL);
  Instance = (int64_t)this->fields.rarePriInfoLabel;
  if ( !Instance )
    goto LABEL_64;
  v53 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  Instance = (int64_t)GameObjectExtensions__GetParent(v53, 0LL);
  if ( !Instance )
    goto LABEL_64;
  v54 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  GameObjectExtensions__SetLocalPositionX(v54, -273.0, 0LL);
  AtlasManager__SetItem(this->fields.apSeedIcon, 103, 0LL);
  AtlasManager__SetItem(this->fields.apIcon, 47, 0LL);
  Instance = ConstantMaster__IsFLAG20230402(0LL);
  if ( !this->fields.shop15Info )
    goto LABEL_64;
  v55 = Instance;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.shop15Info, 0LL);
  if ( !Instance )
    goto LABEL_64;
  if ( (v55 & 1) != 0 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    shop15InfoLabel = this->fields.shop15InfoLabel;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    v57 = NetworkManager__get_UserId(0LL);
    v58 = BalanceConfig_TypeInfo;
    v59 = v57;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v58 = BalanceConfig_TypeInfo;
    }
    Instance = (int64_t)UserItemMaster__GetEntityDefinitely(v39, v59, v58->static_fields->itemIdForShop15, 0LL);
    if ( Instance )
    {
      v60 = *(_DWORD *)(Instance + 28);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      Instance = (int64_t)LocalizationManager__GetNumberFormat(v60, 0LL);
      if ( shop15InfoLabel )
      {
        UILabel__set_text(shop15InfoLabel, (System_String_o *)Instance, 0LL);
        shop15Info = this->fields.shop15Info;
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__SetShopBanner_31192016(shop15Info, (System_String_o *)StringLiteral_19680/*"img_bg_evocation"*/, 0LL);
        Instance = (int64_t)this->fields.anonymousInfoLabel;
        if ( Instance )
        {
          v62 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
          Instance = (int64_t)GameObjectExtensions__GetParent(v62, 0LL);
          if ( Instance )
          {
            v63 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
            GameObjectExtensions__SetLocalPositionX(v63, -94.0, 0LL);
            Instance = (int64_t)this->fields.grailFragmentsInfoLabel;
            if ( Instance )
            {
              v64 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
              Instance = (int64_t)GameObjectExtensions__GetParent(v64, 0LL);
              if ( Instance )
              {
                v65 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
                GameObjectExtensions__SetLocalPositionX(v65, -273.0, 0LL);
                goto LABEL_62;
              }
            }
          }
        }
      }
    }
LABEL_64:
    sub_B5D69C(Instance, v31);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
LABEL_62:
  Instance = (int64_t)this->fields.giftButtonControl;
  if ( !Instance )
    goto LABEL_64;
  GiftButtonCtrl__InvalidateGiftInfo((GiftButtonCtrl_o *)Instance, 0LL);
  ShopRootComponent__RefreshCurrencyInfo(this, this->fields.state, v66);
}


void __fastcall ShopRootComponent__RequestEnd(ShopRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x2
  __int64 v14; // x1
  ServantSellConfirmMenu_o *servantSellConfirmMenu; // x0
  ServantSellConfirmMenu_o *v16; // x20
  System_Action_int__o *v17; // x21

  if ( (byte_42EA6C4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_int___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_int__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_ShopRootComponent__RequestEnd_b__93_0__, v8, v9, v10);
    byte_42EA6C4 = 1;
  }
  this->fields.inputState = 3;
  ShopRootComponent__RefreshInfo(this, method);
  ShopRootComponent__CloseItemConfirm(this, v11);
  ShopRootComponent__CloseSellServantConfirm(this, v12);
  ShopRootComponent__SetActionBG(this, 0, v13);
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
        v16 = this->fields.servantSellConfirmMenu;
        v17 = (System_Action_int__o *)sub_B5D694(System_Action_int__TypeInfo);
        System_Action_int____ctor(
          v17,
          (Il2CppObject *)this,
          Method_ShopRootComponent__RequestEnd_b__93_0__,
          (const MethodInfo_2589D90 *)Method_System_Action_int___ctor__);
        if ( v16 )
        {
          ServantSellConfirmMenu__OpenCommandCodeRemoveResult(v16, v17, 0LL);
          return;
        }
      }
LABEL_10:
      sub_B5D69C(servantSellConfirmMenu, v14);
    }
  }
}


void __fastcall ShopRootComponent__RequestSellServant(ShopRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  NetworkManager_ResultCallbackFunc_o *v17; // x20
  SellServantRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v19; // x1

  if ( (byte_42EA6CF & 1) == 0 )
  {
    sub_B5D5C4(&Method_NetworkManager_getRequest_SellServantRequest___, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_ShopRootComponent_EndRequestSellServant__, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_21345/*"ng"*/, v14, v15, v16);
    byte_42EA6CF = 1;
  }
  if ( this->fields.selectedServantIds )
  {
    v17 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v17,
      (Il2CppObject *)this,
      Method_ShopRootComponent_EndRequestSellServant__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = (SellServantRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                  v17,
                                                                  (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_SellServantRequest___);
    if ( !Request_WarBoardWallAttackRequest )
      sub_B5D69C(0LL, v19);
    SellServantRequest__beginRequest(
      Request_WarBoardWallAttackRequest,
      this->fields.selectedServantIds,
      this->fields.selectedCommandCodeIds,
      0LL);
  }
  else
  {
    ShopRootComponent__EndRequestSellServant(this, (System_String_o *)StringLiteral_21345/*"ng"*/, v2);
  }
}


void __fastcall ShopRootComponent__RequestShop(ShopRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  ShopRootComponent_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  struct ShopSceneListViewControlHelper_o *listViewHelper; // x8
  ShopBuyItemListViewItem_o *Item; // x0
  const MethodInfo *v16; // x1
  ShopBuyItemListViewItem_o *v17; // x20
  NetworkManager_ResultCallbackFunc_o *v18; // x21
  struct ShopEntity_o *Shop_k__BackingField; // x8

  v4 = this;
  if ( (byte_42EA6C3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_NetworkManager_getRequest_PurchaseRequest___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v8, v9, v10);
    this = (ShopRootComponent_o *)sub_B5D5C4(&Method_ShopRootComponent_EndRequestShop__, v11, v12, v13);
    byte_42EA6C3 = 1;
  }
  listViewHelper = v4->fields.listViewHelper;
  if ( !listViewHelper )
    goto LABEL_14;
  this = (ShopRootComponent_o *)listViewHelper->fields.buyItemListViewManager;
  if ( !this )
    goto LABEL_14;
  Item = ShopBuyItemListViewManager__GetItem((ShopBuyItemListViewManager_o *)this, v4->fields.selectedItemIndex, 0LL);
  if ( Item )
  {
    v17 = Item;
    if ( Item->fields._Shop_k__BackingField )
    {
      v18 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(v18, (Il2CppObject *)v4, Method_ShopRootComponent_EndRequestShop__, 0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      this = (ShopRootComponent_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                      v18,
                                      (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_PurchaseRequest___);
      Shop_k__BackingField = v17->fields._Shop_k__BackingField;
      if ( Shop_k__BackingField && this )
      {
        PurchaseRequest__beginRequest(
          (PurchaseRequest_o *)this,
          Shop_k__BackingField->fields.id,
          v4->fields.buyCount,
          0,
          0LL);
        return;
      }
LABEL_14:
      sub_B5D69C(this, method);
    }
  }
  ShopRootComponent__RequestEnd(v4, v16);
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
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  int v16; // w1
  char v17; // w2
  __int64 v18; // x3
  int v19; // w1
  char v20; // w2
  __int64 v21; // x3
  int v22; // w1
  char v23; // w2
  __int64 v24; // x3
  int v25; // w1
  char v26; // w2
  __int64 v27; // x3
  int v28; // w1
  char v29; // w2
  __int64 v30; // x3
  int v31; // w1
  char v32; // w2
  __int64 v33; // x3
  int v34; // w1
  char v35; // w2
  __int64 v36; // x3
  int v37; // w1
  char v38; // w2
  __int64 v39; // x3
  struct ShopSceneListViewControlHelper_o *listViewHelper; // x8
  ShopBuyItemListViewItem_o *Item; // x0
  const MethodInfo *v42; // x2
  const MethodInfo *v43; // x4
  ShopBuyItemListViewItem_o *v44; // x22
  ServantLimitImageMaster_o *v45; // x23
  int32_t TargetId; // w0
  const MethodInfo *v47; // x3
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x23
  WarEntity_o *Entity; // x23
  System_String_o *v50; // x20
  Il2CppObject *v51; // x0
  System_String_o *v52; // x0
  System_String_o *v53; // x21
  Il2CppObject *Name; // x0
  System_String_o *v55; // x0
  SummonInfoDlgComponent_o *limitCountSealInfoDlg; // x21
  System_String_o *v57; // x22
  SummonInfoDlgComponent_CallbackFunc_o *v58; // x23
  int coordinates_high; // [xsp+Ch] [xbp-24h] BYREF

  v5 = index;
  v6 = this;
  if ( (byte_42EA6B9 & 1) == 0 )
  {
    sub_B5D5C4(&SummonInfoDlgComponent_CallbackFunc_TypeInfo, index, isBulk, method);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v7, v8, v9);
    sub_B5D5C4(&Method_DataManager_GetMaster_CombineLimitReleaseMaster___, v10, v11, v12);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantMaster___, v13, v14, v15);
    sub_B5D5C4(&DataManager_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v19, v20, v21);
    sub_B5D5C4(&int_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&Method_ShopRootComponent_EndLimitCountSealInfoDialog__, v28, v29, v30);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v31, v32, v33);
    sub_B5D5C4(&StringLiteral_3254/*"COMBINE_LIMIT_SEALED_TITLE"*/, v34, v35, v36);
    this = (ShopRootComponent_o *)sub_B5D5C4(&StringLiteral_3253/*"COMBINE_LIMIT_SEALED_MESSAGE_{0}"*/, v37, v38, v39);
    byte_42EA6B9 = 1;
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
        v44 = Item;
        if ( v6->fields.state != 6 || ShopRootComponent__GetShopItemBuyNum((ShopRootComponent_o *)Item, Item, v42) > 0 )
          goto LABEL_8;
        this = (ShopRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( this )
        {
          this = (ShopRootComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
          if ( v44 )
          {
            v45 = (ServantLimitImageMaster_o *)this;
            this = (ShopRootComponent_o *)ShopBuyItemListViewItem__get_TargetId(v44, 0LL);
            if ( v45 )
            {
              if ( ServantLimitImageMaster__IsServantLimitCountSeal(v45, (int32_t)this, 4, 0LL) )
              {
                v6->fields.limitCountSealInfoIndex = v5;
                v6->fields.limitCountSealInfoBulk = isBulk;
                TargetId = ShopBuyItemListViewItem__get_TargetId(v44, 0LL);
                ShopRootComponent__OpenLimitCountSealInfoDialog(v6, TargetId, 4, v47);
                return;
              }
              if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !DataManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              }
              Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantMaster___);
              this = (ShopRootComponent_o *)ShopBuyItemListViewItem__get_TargetId(v44, 0LL);
              if ( Master_WarQuestSelectionMaster )
              {
                Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                           Master_WarQuestSelectionMaster,
                           (int32_t)this,
                           (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                this = (ShopRootComponent_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_CombineLimitReleaseMaster___);
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
                  ShopRootComponent__OpenConfirmMenu(v6, v6->fields.state, v44, isBulk, v43);
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
                this = (ShopRootComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3254/*"COMBINE_LIMIT_SEALED_TITLE"*/, 0LL);
                if ( Entity )
                {
                  v50 = (System_String_o *)this;
                  coordinates_high = HIDWORD(Entity->fields.coordinates);
                  v51 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &coordinates_high);
                  v52 = System_String__Format((System_String_o *)StringLiteral_3253/*"COMBINE_LIMIT_SEALED_MESSAGE_{0}"*/, v51, 0LL);
                  this = (ShopRootComponent_o *)LocalizationManager__Get(v52, 0LL);
                  if ( v44->fields._Shop_k__BackingField )
                  {
                    v53 = (System_String_o *)this;
                    Name = (Il2CppObject *)ShopEntity__getName(v44->fields._Shop_k__BackingField, 0LL);
                    v55 = System_String__Format(v53, Name, 0LL);
                    limitCountSealInfoDlg = v6->fields.limitCountSealInfoDlg;
                    v57 = v55;
                    v58 = (SummonInfoDlgComponent_CallbackFunc_o *)sub_B5D694(SummonInfoDlgComponent_CallbackFunc_TypeInfo);
                    SummonInfoDlgComponent_CallbackFunc___ctor(
                      v58,
                      (Il2CppObject *)v6,
                      Method_ShopRootComponent_EndLimitCountSealInfoDialog__,
                      0LL);
                    if ( limitCountSealInfoDlg )
                    {
                      SummonInfoDlgComponent__OpenInfoMessageDlg(limitCountSealInfoDlg, v50, v57, v58, 0LL);
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
    sub_B5D69C(this, *(_QWORD *)&index);
  }
}


void __fastcall ShopRootComponent__SelectMenu(ShopRootComponent_o *this, int32_t state, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  __int64 v18; // x20
  ShopPlayVoiceComponent_o *shopPlayVoiceComponent; // x0
  const MethodInfo *v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  ShopRootComponent_o *v27; // x0
  const MethodInfo *v28; // x2
  const MethodInfo *v29; // x2
  int32_t v30; // w1
  int32_t v31; // w19
  System_Action_o *v32; // x21
  ShopRootComponent_o *v33; // x0
  const MethodInfo *v34; // x3

  if ( (byte_42EA6B5 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, state, (_DWORD)method, v3);
    sub_B5D5C4(&CoinRoomUtility_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v9, v10, v11);
    sub_B5D5C4(&Method_ShopRootComponent___c__DisplayClass76_0__SelectMenu_b__0__, v12, v13, v14);
    sub_B5D5C4(&ShopRootComponent___c__DisplayClass76_0_TypeInfo, v15, v16, v17);
    byte_42EA6B5 = 1;
  }
  v18 = sub_B5D694(ShopRootComponent___c__DisplayClass76_0_TypeInfo);
  ShopRootComponent___c__DisplayClass76_0___ctor((ShopRootComponent___c__DisplayClass76_0_o *)v18, 0LL);
  if ( !v18 )
    goto LABEL_20;
  *(_QWORD *)(v18 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v18 + 16), (System_Int32_array **)this, v21, v22, v23, v24, v25, v26);
  *(_DWORD *)(v18 + 24) = state;
  if ( ShopRootComponent__CheckServerLimitTime(v27, state, v28) )
  {
    v30 = *(_DWORD *)(v18 + 24);
    if ( v30 == 17 )
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
          ShopPlayVoiceComponent__StopVoice(shopPlayVoiceComponent, v20);
          shopPlayVoiceComponent = (ShopPlayVoiceComponent_o *)this->fields.topListViewManager;
          if ( shopPlayVoiceComponent )
          {
            this->fields.saveScrollBarValue = ShopTopListViewManager__get_currentScrollBarValue(
                                                (ShopTopListViewManager_o *)shopPlayVoiceComponent,
                                                0LL);
            shopPlayVoiceComponent = (ShopPlayVoiceComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
            if ( shopPlayVoiceComponent )
            {
              AvalonSceneManager__pushScene((AvalonSceneManager_o *)shopPlayVoiceComponent, 90, 1, 0LL, 0LL);
              return;
            }
          }
        }
LABEL_20:
        sub_B5D69C(shopPlayVoiceComponent, v20);
      }
      v30 = *(_DWORD *)(v18 + 24);
    }
    if ( v30 == 15 )
    {
      v31 = 15;
    }
    else
    {
      ShopRootComponent__PlayVoiceEnter(this, v30, v29);
      v31 = *(_DWORD *)(v18 + 24);
    }
    v32 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v32,
      (Il2CppObject *)v18,
      Method_ShopRootComponent___c__DisplayClass76_0__SelectMenu_b__0__,
      0LL);
    ShopRootComponent__SetFadeOut(v33, v31, v32, v34);
  }
}


void __fastcall ShopRootComponent__SelectSellServantConfirm(ShopRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  __int64 v17; // x20
  ServantSellMenu_o *servantSellMenu; // x0
  __int64 v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  int32_t tabKind; // w21
  struct System_Int64_array *selectedServantIds; // x22
  bool IsSellEquipedCmdCodeLastServant; // w0
  System_Int64_array *v29; // x22
  ServantSellConfirmMenu_o *servantSellConfirmMenu; // x21
  System_Action_int__o *v31; // x19
  struct ServantSellConfirmMenu_o *v32; // x21
  int32_t v33; // w20
  System_Action_int__o *v34; // x22
  ServantSellConfirmMenu_o *v35; // x0
  int32_t v36; // w1
  System_Int64_array *v37; // x2
  System_Int64_array *v38; // x3
  System_Action_int__o *v39; // x4
  struct ServantSellConfirmMenu_o *v40; // x21
  int32_t v41; // w20
  struct System_Int64_array *v42; // x22
  struct System_Int64_array *selectedCommandCodeIds; // x23
  System_Action_int__o *v44; // x24

  if ( (byte_42EA6C2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_int___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_int__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_ShopRootComponent_SellServantConfirm__, v8, v9, v10);
    sub_B5D5C4(&Method_ShopRootComponent___c__DisplayClass91_0__SelectSellServantConfirm_b__0__, v11, v12, v13);
    sub_B5D5C4(&ShopRootComponent___c__DisplayClass91_0_TypeInfo, v14, v15, v16);
    byte_42EA6C2 = 1;
  }
  v17 = sub_B5D694(ShopRootComponent___c__DisplayClass91_0_TypeInfo);
  ShopRootComponent___c__DisplayClass91_0___ctor((ShopRootComponent___c__DisplayClass91_0_o *)v17, 0LL);
  if ( !v17 )
    goto LABEL_18;
  *(_QWORD *)(v17 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v17 + 16), (System_Int32_array **)this, v20, v21, v22, v23, v24, v25);
  if ( this->fields.inputState == 2 )
  {
    servantSellMenu = this->fields.servantSellMenu;
    if ( !servantSellMenu )
      goto LABEL_18;
    tabKind = servantSellMenu->fields.tabKind;
    selectedServantIds = this->fields.selectedServantIds;
    IsSellEquipedCmdCodeLastServant = ServantSellMenu__get_IsSellEquipedCmdCodeLastServant(servantSellMenu, 0LL);
    *(_DWORD *)(v17 + 24) = ServantSellConfirmMenu__GetServantSellConfirmKindOnOpenConfirm(
                              tabKind,
                              selectedServantIds == 0LL,
                              IsSellEquipedCmdCodeLastServant,
                              0LL);
    servantSellMenu = (ServantSellMenu_o *)this->fields.servantSellConfirmMenu;
    if ( !servantSellMenu )
      goto LABEL_18;
    ServantSellConfirmMenu__Init((ServantSellConfirmMenu_o *)servantSellMenu, 0LL);
    v29 = this->fields.selectedServantIds;
    if ( v29 )
    {
      servantSellConfirmMenu = this->fields.servantSellConfirmMenu;
      if ( *(_DWORD *)(v17 + 24) == 4 )
      {
        v31 = (System_Action_int__o *)sub_B5D694(System_Action_int__TypeInfo);
        System_Action_int____ctor(
          v31,
          (Il2CppObject *)v17,
          Method_ShopRootComponent___c__DisplayClass91_0__SelectSellServantConfirm_b__0__,
          (const MethodInfo_2589D90 *)Method_System_Action_int___ctor__);
        if ( servantSellConfirmMenu )
        {
          ServantSellConfirmMenu__OpenSellEquippedLastSvtWarning(servantSellConfirmMenu, 4, v29, v31, 0LL);
          return;
        }
LABEL_18:
        sub_B5D69C(servantSellMenu, v19);
      }
      if ( !servantSellConfirmMenu )
        goto LABEL_18;
      ServantSellConfirmMenu__Init(this->fields.servantSellConfirmMenu, 0LL);
      v40 = this->fields.servantSellConfirmMenu;
      v41 = *(_DWORD *)(v17 + 24);
      v42 = this->fields.selectedServantIds;
      selectedCommandCodeIds = this->fields.selectedCommandCodeIds;
      v44 = (System_Action_int__o *)sub_B5D694(System_Action_int__TypeInfo);
      System_Action_int____ctor(
        v44,
        (Il2CppObject *)this,
        Method_ShopRootComponent_SellServantConfirm__,
        (const MethodInfo_2589D90 *)Method_System_Action_int___ctor__);
      if ( !v40 )
        goto LABEL_18;
      v35 = v40;
      v36 = v41;
      v37 = v42;
      v38 = selectedCommandCodeIds;
      v39 = v44;
    }
    else
    {
      v32 = this->fields.servantSellConfirmMenu;
      v33 = *(_DWORD *)(v17 + 24);
      v34 = (System_Action_int__o *)sub_B5D694(System_Action_int__TypeInfo);
      System_Action_int____ctor(
        v34,
        (Il2CppObject *)this,
        Method_ShopRootComponent_SellServantConfirm__,
        (const MethodInfo_2589D90 *)Method_System_Action_int___ctor__);
      if ( !v32 )
        goto LABEL_18;
      v35 = v32;
      v36 = v33;
      v37 = 0LL;
      v38 = 0LL;
      v39 = v34;
    }
    ServantSellConfirmMenu__Open(v35, v36, v37, v38, v39, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopRootComponent__SelectedBuyItemConfirm(
        ShopRootComponent_o *this,
        int32_t buyCount,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ShopRootComponent_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int32_t state; // w8
  struct ShopSceneListViewControlHelper_o *listViewHelper; // x8
  ShopBuyItemListViewItem_o *Item; // x20
  struct ShopEntity_o *Shop_k__BackingField; // x8
  ShopDetailEntity_o *ShopDetailEntity; // x0
  ShopDetailEntity_o *v20; // x20
  ShopRootComponent_c *v21; // x0

  v5 = this;
  if ( (byte_42EA6BE & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ShopDetailMaster___, buyCount, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v6, v7, v8);
    sub_B5D5C4(&ShopRootComponent_TypeInfo, v9, v10, v11);
    this = (ShopRootComponent_o *)sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13, v14);
    byte_42EA6BE = 1;
  }
  if ( v5->fields.inputState == 2 )
  {
    v5->fields.inputState = 3;
    v5->fields.buyCount = buyCount;
    if ( !buyCount )
    {
      ShopRootComponent__CloseItemConfirm(v5, *(const MethodInfo **)&buyCount);
      return;
    }
    state = v5->fields.state;
    if ( state == 8 )
    {
LABEL_6:
      ShopRootComponent__RequestShop(v5, *(const MethodInfo **)&buyCount);
      return;
    }
    if ( (unsigned int)(state - 11) <= 1 )
    {
      ShopRootComponent__OpenStorageDetailCheck(v5, *(const MethodInfo **)&buyCount);
      return;
    }
    listViewHelper = v5->fields.listViewHelper;
    if ( listViewHelper )
    {
      this = (ShopRootComponent_o *)listViewHelper->fields.buyItemListViewManager;
      if ( this )
      {
        Item = ShopBuyItemListViewManager__GetItem(
                 (ShopBuyItemListViewManager_o *)this,
                 v5->fields.selectedItemIndex,
                 0LL);
        this = (ShopRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( this )
        {
          this = (ShopRootComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ShopDetailMaster___);
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
                v20 = ShopDetailEntity;
                if ( ShopDetailEntity->fields.frequencyType == 3 )
                  goto LABEL_24;
                v21 = ShopRootComponent_TypeInfo;
                if ( (BYTE3(ShopRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !ShopRootComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(ShopRootComponent_TypeInfo);
                  v21 = ShopRootComponent_TypeInfo;
                }
                this = (ShopRootComponent_o *)v21->static_fields->shopDetailCheckList;
                if ( this )
                {
                  if ( System_Collections_Generic_Dictionary_int__int___get_Item(
                         (System_Collections_Generic_Dictionary_int__int__o *)this,
                         v20->fields.shopId,
                         (const MethodInfo_2F0AD98 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__) )
                  {
                    goto LABEL_6;
                  }
LABEL_24:
                  ShopRootComponent__OpenDetailCheck(v5, *(const MethodInfo **)&buyCount);
                  return;
                }
              }
            }
          }
        }
      }
    }
    sub_B5D69C(this, *(_QWORD *)&buyCount);
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
      sub_B5D69C(servantSellConfirmMenu, *(_QWORD *)&count);
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
  __int64 v3; // x3
  UnityEngine_Object_o *actionBg; // x21
  __int64 v7; // x1
  UnityEngine_GameObject_o *v8; // x0

  if ( (byte_42EA6E9 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, isEnable, (_DWORD)method, v3);
    byte_42EA6E9 = 1;
  }
  actionBg = (UnityEngine_Object_o *)this->fields.actionBg;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(actionBg, 0LL, 0LL) )
  {
    v8 = this->fields.actionBg;
    if ( !v8 )
      sub_B5D69C(0LL, v7);
    UnityEngine_GameObject__SetActive(v8, isEnable, 0LL);
  }
}


void __fastcall ShopRootComponent__SetFadeIn(ShopRootComponent_o *this, int32_t state, const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  WebViewManager_o *Instance; // x0
  __int64 v9; // x1
  CommonUI_o *v10; // x19

  if ( (byte_42EA6B8 & 1) == 0 )
  {
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, state, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6, v7);
    byte_42EA6B8 = 1;
  }
  if ( state == 15 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v10 = (CommonUI_o *)Instance;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    }
    if ( !v10 )
      sub_B5D69C(Instance, v9);
    CommonUI__maskFadein(v10, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
  }
}


void __fastcall ShopRootComponent__SetFadeOut(
        ShopRootComponent_o *this,
        int32_t state,
        System_Action_o *endFade,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  __int64 v18; // x19
  __int64 v19; // x0
  __int64 v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v28; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v30; // x21

  if ( (byte_42EA6B7 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, state, (_DWORD)endFade, method);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10, v11);
    sub_B5D5C4(&Method_ShopRootComponent___c__DisplayClass78_0__SetFadeOut_b__0__, v12, v13, v14);
    sub_B5D5C4(&ShopRootComponent___c__DisplayClass78_0_TypeInfo, v15, v16, v17);
    byte_42EA6B7 = 1;
  }
  v18 = sub_B5D694(ShopRootComponent___c__DisplayClass78_0_TypeInfo);
  ShopRootComponent___c__DisplayClass78_0___ctor((ShopRootComponent___c__DisplayClass78_0_o *)v18, 0LL);
  if ( !v18 )
    goto LABEL_11;
  *(_QWORD *)(v18 + 16) = endFade;
  sub_B5D560((BattleServantConfConponent_o *)(v18 + 16), (System_Int32_array **)endFade, v21, v22, v23, v24, v25, v26);
  if ( state == 15 )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v28 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v28 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v28->static_fields->DEFAULT_FADE_TIME;
    v30 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v30,
      (Il2CppObject *)v18,
      Method_ShopRootComponent___c__DisplayClass78_0__SetFadeOut_b__0__,
      0LL);
    if ( Instance )
    {
      CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v30, 0LL);
      return;
    }
LABEL_11:
    sub_B5D69C(v19, v20);
  }
  ActionExtensions__Call(*(System_Action_o **)(v18 + 16), 0LL);
}


void __fastcall ShopRootComponent__SetFrequencyTypeCheckList(
        ShopRootComponent_o *this,
        ShopDetailEntity_o *entity,
        bool decide,
        const MethodInfo *method)
{
  int v6; // w1
  char v7; // w2
  __int64 v8; // x3
  ShopRootComponent_c *v9; // x0
  System_Collections_Generic_Dictionary_int__int__o *shopDetailCheckList; // x0

  if ( (byte_42EA6E0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__, (_DWORD)entity, decide, method);
    sub_B5D5C4(&ShopRootComponent_TypeInfo, v6, v7, v8);
    byte_42EA6E0 = 1;
  }
  if ( entity && (decide || entity->fields.frequencyType != 1) )
  {
    v9 = ShopRootComponent_TypeInfo;
    if ( (BYTE3(ShopRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ShopRootComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ShopRootComponent_TypeInfo);
      v9 = ShopRootComponent_TypeInfo;
    }
    shopDetailCheckList = v9->static_fields->shopDetailCheckList;
    if ( !shopDetailCheckList )
      sub_B5D69C(0LL, entity);
    System_Collections_Generic_Dictionary_int__int___set_Item(
      shopDetailCheckList,
      entity->fields.shopId,
      1,
      (const MethodInfo_2F0AE30 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
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
    sub_B5D69C(informationPanel, isDisp);
  }
}


void __fastcall ShopRootComponent__ShowNormalItemDialog(
        ShopRootComponent_o *this,
        ShopBuyItemListViewItem_o *item,
        ShopEntity_o *entity,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  System_String_o *RequestResultDialogMessageNormal; // x0
  __int64 v26; // x1
  System_String_o *v27; // x20
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x22
  ItemEntity_o *v29; // x23
  const MethodInfo *v30; // x3
  System_String_o *RequestResultDialogItemMessageNormal; // x22
  const MethodInfo *v32; // x2
  System_String_o *RequestResultDialogNumMessageNormal; // x0
  RequestResultDialog_o *requestResultDialog; // x21
  System_String_o *v35; // x23
  System_Action_bool__o *v36; // x24
  RequestResultDialog_o *v37; // x21
  System_Action_bool__o *v38; // x22

  if ( (byte_42EA6C7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_bool___ctor__, (_DWORD)item, (_DWORD)entity, method);
    sub_B5D5C4(&System_Action_bool__TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ItemMaster___, v10, v11, v12);
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v13, v14, v15);
    sub_B5D5C4(&Method_ShopRootComponent_OnEndItemDialog__, v16, v17, v18);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_1/*""*/, v22, v23, v24);
    byte_42EA6C7 = 1;
  }
  RequestResultDialogMessageNormal = ShopRequestResultDialogMessageMaker__GetRequestResultDialogMessageNormal(
                                       item,
                                       entity,
                                       this->fields.buyCount,
                                       method);
  if ( !entity )
    goto LABEL_11;
  v27 = RequestResultDialogMessageNormal;
  if ( entity->fields.purchaseType == 1 )
  {
    RequestResultDialogMessageNormal = (System_String_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( RequestResultDialogMessageNormal )
    {
      MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                            (DataManager_o *)RequestResultDialogMessageNormal,
                                                                                            (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___);
      RequestResultDialogMessageNormal = (System_String_o *)ShopEntity__get_TargetId(entity, 0LL);
      if ( MasterData_WarQuestSelectionMaster )
      {
        v29 = (ItemEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                MasterData_WarQuestSelectionMaster,
                                (int32_t)RequestResultDialogMessageNormal,
                                (const MethodInfo_23FAE10 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        RequestResultDialogItemMessageNormal = ShopRequestResultDialogMessageMaker__GetRequestResultDialogItemMessageNormal(
                                                 entity,
                                                 v29,
                                                 this->fields.buyCount,
                                                 v30);
        RequestResultDialogNumMessageNormal = ShopRequestResultDialogMessageMaker__GetRequestResultDialogNumMessageNormal(
                                                entity,
                                                v29,
                                                v32);
        requestResultDialog = this->fields.requestResultDialog;
        v35 = RequestResultDialogNumMessageNormal;
        v36 = (System_Action_bool__o *)sub_B5D694(System_Action_bool__TypeInfo);
        System_Action_bool____ctor(
          v36,
          (Il2CppObject *)this,
          Method_ShopRootComponent_OnEndItemDialog__,
          (const MethodInfo_25873D8 *)Method_System_Action_bool___ctor__);
        if ( requestResultDialog )
        {
          RequestResultDialog__Open(requestResultDialog, v27, v35, RequestResultDialogItemMessageNormal, v36, 0LL);
          return;
        }
      }
    }
LABEL_11:
    sub_B5D69C(RequestResultDialogMessageNormal, v26);
  }
  v37 = this->fields.requestResultDialog;
  v38 = (System_Action_bool__o *)sub_B5D694(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(
    v38,
    (Il2CppObject *)this,
    Method_ShopRootComponent_OnEndItemDialog__,
    (const MethodInfo_25873D8 *)Method_System_Action_bool___ctor__);
  if ( !v37 )
    goto LABEL_11;
  RequestResultDialog__Open_32369632(v37, (System_String_o *)StringLiteral_1/*""*/, v27, v38, -1, 0LL);
}


void __fastcall ShopRootComponent__ShowSetItemDialog(
        ShopRootComponent_o *this,
        ShopEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  System_String_o *RequestResultDialogMessage; // x0
  RequestResultDialog_o *requestResultDialog; // x20
  System_String_o *v17; // x21
  System_Action_bool__o *v18; // x22
  __int64 v19; // x0
  __int64 v20; // x1

  if ( (byte_42EA6C8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_bool___ctor__, (_DWORD)entity, (_DWORD)method, v3);
    sub_B5D5C4(&System_Action_bool__TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_ShopRootComponent_OnEndItemDialog__, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_1/*""*/, v12, v13, v14);
    byte_42EA6C8 = 1;
  }
  RequestResultDialogMessage = ShopRequestResultDialogMessageMaker__GetRequestResultDialogMessage(
                                 entity,
                                 this->fields.buyCount,
                                 method);
  requestResultDialog = this->fields.requestResultDialog;
  v17 = RequestResultDialogMessage;
  v18 = (System_Action_bool__o *)sub_B5D694(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(
    v18,
    (Il2CppObject *)this,
    Method_ShopRootComponent_OnEndItemDialog__,
    (const MethodInfo_25873D8 *)Method_System_Action_bool___ctor__);
  if ( !requestResultDialog )
    sub_B5D69C(v19, v20);
  RequestResultDialog__Open_32369632(requestResultDialog, (System_String_o *)StringLiteral_1/*""*/, v17, v18, -1, 0LL);
}


void __fastcall ShopRootComponent__ShowStorageDialog(
        ShopRootComponent_o *this,
        ShopBuyItemListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int32_t state; // w8
  struct BuyStorageConfirmDialogComponent_o *v13; // x21
  System_Action_int__o *v14; // x22
  __int64 v15; // x0
  __int64 v16; // x1
  BuyStorageConfirmDialogComponent_o *v17; // x0
  int32_t v18; // w1
  struct BuyStorageConfirmDialogComponent_o *buyStorageResultDialog; // x21

  if ( (byte_42EA6C9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_int___ctor__, (_DWORD)item, (_DWORD)method, v3);
    sub_B5D5C4(&System_Action_int__TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_ShopRootComponent_OnEndStorageDialog__, v9, v10, v11);
    byte_42EA6C9 = 1;
  }
  state = this->fields.state;
  if ( state == 12 )
  {
    buyStorageResultDialog = this->fields.buyStorageResultDialog;
    v14 = (System_Action_int__o *)sub_B5D694(System_Action_int__TypeInfo);
    System_Action_int____ctor(
      v14,
      (Il2CppObject *)this,
      Method_ShopRootComponent_OnEndStorageDialog__,
      (const MethodInfo_2589D90 *)Method_System_Action_int___ctor__);
    if ( buyStorageResultDialog )
    {
      v18 = 1;
      v17 = buyStorageResultDialog;
      goto LABEL_9;
    }
LABEL_11:
    sub_B5D69C(v15, v16);
  }
  if ( state == 11 )
  {
    v13 = this->fields.buyStorageResultDialog;
    v14 = (System_Action_int__o *)sub_B5D694(System_Action_int__TypeInfo);
    System_Action_int____ctor(
      v14,
      (Il2CppObject *)this,
      Method_ShopRootComponent_OnEndStorageDialog__,
      (const MethodInfo_2589D90 *)Method_System_Action_int___ctor__);
    if ( v13 )
    {
      v17 = v13;
      v18 = 0;
LABEL_9:
      BuyStorageConfirmDialogComponent__ResultOpenDialog(v17, v18, item, v14, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v6; // x1
  UILabel_o *apInfoLabel; // x19
  int32_t Act; // w20

  if ( (byte_42EA6B4 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA6B4 = 1;
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
    sub_B5D69C(SelfUserGame, v6);
  UILabel__set_text(apInfoLabel, (System_String_o *)SelfUserGame, 0LL);
}


void __fastcall ShopRootComponent___Init_b__71_0(
        ShopRootComponent_o *this,
        int32_t stoneCount,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UILabel_o *stoneInfoLabel; // x20
  System_String_o *NumberFormat; // x0
  __int64 v8; // x1

  if ( (byte_42EA6EA & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, stoneCount, (_DWORD)method, v3);
    byte_42EA6EA = 1;
  }
  stoneInfoLabel = this->fields.stoneInfoLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  NumberFormat = LocalizationManager__GetNumberFormat(stoneCount, 0LL);
  if ( !stoneInfoLabel )
    sub_B5D69C(NumberFormat, v8);
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
    sub_B5D69C(servantSellConfirmMenu, v4);
  }
  ServantSellConfirmMenu__ClearCommandCodeRemoveResult(servantSellConfirmMenu, 0LL);
}


void __fastcall ShopRootComponent____n__0(ShopRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent__beginStartUp_17513116((SceneRootComponent_o *)this, 0LL);
}


void __fastcall ShopRootComponent__beginFinish(ShopRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ShopTopListViewManager_o *topListViewManager; // x0

  ShopRootComponent__Quit(this, method);
  topListViewManager = this->fields.topListViewManager;
  if ( !topListViewManager )
    sub_B5D69C(0LL, v3);
  ShopTopListViewManager__ReleaseCoinRoomAsset(topListViewManager, 0LL);
}


void __fastcall ShopRootComponent__beginInitialize(ShopRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  ShopTopListViewManager_o *topListViewManager; // x0
  ShopRootComponent_o *v21; // x0
  const MethodInfo *v22; // x1
  struct GiftButtonCtrl_o *giftButtonControl; // x20
  System_Action_o *v24; // x21
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  struct GiftButtonCtrl_o *v31; // x20
  System_Func_bool__bool__o *v32; // x21
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7

  if ( (byte_42EA6AE & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Func_bool__bool___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Func_bool__bool__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_ShopRootComponent_OnGiftClose__, v11, v12, v13);
    sub_B5D5C4(&Method_ShopRootComponent_OnGiftOpen__, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v17, v18, v19);
    byte_42EA6AE = 1;
  }
  topListViewManager = this->fields.topListViewManager;
  if ( !topListViewManager )
    goto LABEL_11;
  ShopTopListViewManager__LoadCoinRoomAsset(topListViewManager, 0LL);
  ShopRootComponent__CreateShopDetailCheckList(v21, v22);
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 6, 30, 0LL);
  topListViewManager = (ShopTopListViewManager_o *)this->fields.eventBanner;
  if ( !topListViewManager )
    goto LABEL_11;
  EventBannerComponent__SetBanner((EventBannerComponent_o *)topListViewManager, 0LL);
  topListViewManager = (ShopTopListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
  v24 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v24, (Il2CppObject *)this, Method_ShopRootComponent_OnGiftOpen__, 0LL);
  if ( !giftButtonControl
    || (giftButtonControl->fields.OnGiftOpenAdditionalAction = v24,
        sub_B5D560(
          (BattleServantConfConponent_o *)&giftButtonControl->fields.OnGiftOpenAdditionalAction,
          (System_Int32_array **)v24,
          v25,
          v26,
          v27,
          v28,
          v29,
          v30),
        v31 = this->fields.giftButtonControl,
        v32 = (System_Func_bool__bool__o *)sub_B5D694(System_Func_bool__bool__TypeInfo),
        System_Func_bool__bool____ctor(
          v32,
          (Il2CppObject *)this,
          Method_ShopRootComponent_OnGiftClose__,
          (const MethodInfo_279B910 *)Method_System_Func_bool__bool___ctor__),
        !v31) )
  {
LABEL_11:
    sub_B5D69C(topListViewManager, method);
  }
  v31->fields.OnGiftCloseAdditionalAction = v32;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v31->fields.OnGiftCloseAdditionalAction,
    (System_Int32_array **)v32,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
}


void __fastcall ShopRootComponent__beginResume(ShopRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent__beginResume_17513312((SceneRootComponent_o *)this, 0LL);
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  struct SceneJumpInfo_o **p_jumpInfo; // x21
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  __int64 v47; // x10
  TitleInfoControl_o *titleInfo; // x0
  __int64 v49; // x1
  System_String_o *returnSceneName; // x20
  System_String_o *SceneName; // x0
  bool v52; // w0
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  struct ShopPlayVoiceComponent_o *shopPlayVoiceComponent; // x8
  System_String_o *MainBgmName; // x20
  System_Action_o *v60; // x20
  const MethodInfo *v61; // x1
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  struct ShopPlayVoiceComponent_o *v68; // x20
  System_Int32_array **standFigureBack; // x1
  int32_t defaultFaceId; // w21
  void *v71; // x23
  BattleServantConfConponent_o *p_standFigureBack; // x20
  UITexture_o *backgroundTexture; // x20
  System_String_o *BG_ROOT; // x20
  Il2CppObject *v75; // x0
  System_String_o *v76; // x0
  ExUITexture_o *v77; // x21
  System_String_o *v78; // x20
  System_Action_o *v79; // x22
  ShopRootConstants_c *v80; // x0
  struct ShopRootConstants_StaticFields *static_fields; // x8
  System_String_o *v82; // x20
  Il2CppObject *v83; // x0
  ExUITexture_o *v84; // x19
  int32_t DEFAULT_BG_ID; // [xsp+8h] [xbp-38h] BYREF
  int32_t bgImageId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42EA6AF & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)data, (_DWORD)method, v3);
    sub_B5D5C4(&AtlasManager_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&BgmManager_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&FSUtility_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&int_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&SceneJumpInfo_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&SceneList_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&Method_ShopRootComponent_LoadBanner__, v28, v29, v30);
    sub_B5D5C4(&Method_ShopRootComponent__beginStartUp_b__66_0__, v31, v32, v33);
    sub_B5D5C4(&ShopRootConstants_TypeInfo, v34, v35, v36);
    sub_B5D5C4(&SoundManager_TypeInfo, v37, v38, v39);
    byte_42EA6AF = 1;
  }
  p_jumpInfo = &this->fields.jumpInfo;
  this->fields.jumpInfo = 0LL;
  sub_B5D560(
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
    v47 = *(&SceneJumpInfo_TypeInfo->_2.bitflags2 + 1);
    if ( *(&data->klass->_2.bitflags2 + 1) >= (unsigned int)v47
      && (SceneJumpInfo_c *)data->klass->_2.typeHierarchy[v47 - 1] == SceneJumpInfo_TypeInfo )
    {
      *p_jumpInfo = (struct SceneJumpInfo_o *)data;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.jumpInfo,
        (System_Int32_array **)data,
        v41,
        v42,
        v43,
        v44,
        v45,
        v46);
      if ( !*p_jumpInfo )
        goto LABEL_43;
      returnSceneName = (*p_jumpInfo)->fields.returnSceneName;
      if ( (BYTE3(SceneList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SceneList_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
      SceneName = SceneList__getSceneName(90, 0LL);
      v52 = System_String__op_Equality(returnSceneName, SceneName, 0LL);
      this->fields.isFromCoinRoom = v52;
      if ( v52 )
      {
        *p_jumpInfo = 0LL;
        sub_B5D560((BattleServantConfConponent_o *)&this->fields.jumpInfo, 0LL, v41, v53, v54, v55, v56, v57);
      }
    }
  }
  ShopRootComponent__SetActionBG(this, 0, (const MethodInfo *)v41);
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
  v60 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v60, (Il2CppObject *)this, Method_ShopRootComponent__beginStartUp_b__66_0__, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadBanner(v60, 1, 0LL);
  ShopRootComponent__setDispInfo(this, v61);
  v68 = this->fields.shopPlayVoiceComponent;
  if ( !v68 )
    goto LABEL_43;
  standFigureBack = (System_Int32_array **)this->fields.standFigureBack;
  defaultFaceId = this->fields.defaultFaceId;
  v71 = *(void **)&this->fields.figureSvtId;
  v68->fields.standFigureBack = (struct StandFigureBack_o *)standFigureBack;
  p_standFigureBack = (BattleServantConfConponent_o *)&v68->fields.standFigureBack;
  sub_B5D560(p_standFigureBack, standFigureBack, v62, v63, v64, v65, v66, v67);
  p_standFigureBack->monitor = v71;
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
  v75 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &bgImageId);
  v76 = System_String__Format(BG_ROOT, v75, 0LL);
  v77 = this->fields.backgroundTexture;
  v78 = v76;
  v79 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v79, (Il2CppObject *)this, Method_ShopRootComponent_LoadBanner__, 0LL);
  if ( !v77 )
LABEL_43:
    sub_B5D69C(titleInfo, v49);
  if ( !ExUITexture__SetAssetImage(v77, v78, v79, 0LL) )
  {
    v80 = ShopRootConstants_TypeInfo;
    if ( (BYTE3(ShopRootConstants_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ShopRootConstants_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
      v80 = ShopRootConstants_TypeInfo;
    }
    static_fields = v80->static_fields;
    v82 = static_fields->BG_ROOT;
    DEFAULT_BG_ID = static_fields->DEFAULT_BG_ID;
    v83 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &DEFAULT_BG_ID);
    titleInfo = (TitleInfoControl_o *)System_String__Format(v82, v83, 0LL);
    if ( this->fields.backgroundTexture )
    {
      v78 = (System_String_o *)titleInfo;
      ExUITexture__SetAssetImage(this->fields.backgroundTexture, (System_String_o *)titleInfo, 0LL, 0LL);
      goto LABEL_39;
    }
    goto LABEL_43;
  }
LABEL_39:
  v84 = this->fields.backgroundTexture;
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  FSUtility__SetUpBackTextureSize(v84, v78, 0LL);
}


void __fastcall ShopRootComponent__setDispInfo(ShopRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  GuideEntity_o *GuideData; // x0
  int32_t guideFaceId; // w8
  ShopRootConstants_c *v15; // x0

  if ( (byte_42EA6B0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_GuideMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&ShopRootConstants_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42EA6B0 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_GuideMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v12);
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
    v15 = ShopRootConstants_TypeInfo;
    if ( (BYTE3(ShopRootConstants_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ShopRootConstants_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
      v15 = ShopRootConstants_TypeInfo;
    }
    guideFaceId = 0;
    this->fields.figureSvtId = v15->static_fields->DEFAULT_FIGURE_ID;
    this->fields.figureSvtLimitCnt = v15->static_fields->DEFAULT_FIGURE_LIMIT_CNT;
    this->fields.bgImageId = v15->static_fields->DEFAULT_BG_ID;
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
  int v2; // w2
  __int64 v3; // x3
  ShopRootComponent___c__DisplayClass102_0_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  struct ShopEntity_o *shopEntity; // x8
  struct System_Int32_array *targetIds; // x8
  System_String_o *v19; // x21
  System_String_o *v20; // x0
  int32_t v21; // w20
  System_String_o *v22; // x0
  int32_t v23; // w21
  System_String_o *name; // x21
  Il2CppObject *_4__this; // x22
  CommonUI_o *v26; // x20
  System_Action_o *v27; // x19
  __int64 v28; // x0
  ServantCostumeEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_42E5DCC & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantCostumeMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_ShopRootComponent_OnEndPlayServantCostumeReleaseEffect__, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    this = (ShopRootComponent___c__DisplayClass102_0_o *)sub_B5D5C4(
                                                           &Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
                                                           v14,
                                                           v15,
                                                           v16);
    byte_42E5DCC = 1;
  }
  entity = 0LL;
  shopEntity = v4->fields.shopEntity;
  if ( !shopEntity )
    goto LABEL_16;
  targetIds = shopEntity->fields.targetIds;
  if ( !targetIds )
    goto LABEL_16;
  if ( !targetIds->max_length )
  {
    v28 = sub_B5D6C8(this);
    sub_B5D668(v28, 0LL);
  }
  this = (ShopRootComponent___c__DisplayClass102_0_o *)System_Int32__ToString((int)targetIds + 32, 0LL);
  if ( !this )
    goto LABEL_16;
  v19 = (System_String_o *)this;
  v20 = System_String__Substring_44641524((System_String_o *)this, 0, LODWORD(this->fields.shopEntity) - 2, 0LL);
  v21 = System_Int32__Parse(v20, 0LL);
  v22 = System_String__Substring(v19, v19->fields.m_stringLength - 2, 0LL);
  v23 = System_Int32__Parse(v22, 0LL);
  this = (ShopRootComponent___c__DisplayClass102_0_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_16;
  this = (ShopRootComponent___c__DisplayClass102_0_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)this,
                                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  if ( !this )
    goto LABEL_16;
  if ( ServantCostumeMaster__TryGetEntity((ServantCostumeMaster_o *)this, &entity, v21, v23, 0LL) )
  {
    this = (ShopRootComponent___c__DisplayClass102_0_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( entity )
    {
      name = entity->fields.name;
      _4__this = (Il2CppObject *)v4->fields.__4__this;
      v26 = (CommonUI_o *)this;
      v27 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v27, _4__this, Method_ShopRootComponent_OnEndPlayServantCostumeReleaseEffect__, 0LL);
      if ( v26 )
      {
        CommonUI__OpenCostumeReleaseEffect(v26, 1, name, v27, 23, 0LL);
        return;
      }
    }
LABEL_16:
    sub_B5D69C(this, method);
  }
  this = (ShopRootComponent___c__DisplayClass102_0_o *)v4->fields.__4__this;
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
  int v2; // w2
  __int64 v3; // x3
  ShopPlayVoiceComponent_o *shopPlayVoiceComponent; // x0
  __int64 v6; // x1
  struct ShopRootComponent_o *_4__this; // x8
  int32_t v8; // w4

  if ( (byte_42E5DCD & 1) == 0 )
  {
    sub_B5D5C4(&PurchaseBehaviour_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5DCD = 1;
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
    || (!_4__this->fields.isFromCoinRoom ? (v8 = 0) : (v8 = 17),
        ShopPlayVoiceComponent__LoadVoice(
          shopPlayVoiceComponent,
          _4__this->fields.figureSvtId,
          this->fields.jumpedState,
          _4__this->fields.isFromCoinRoom,
          v8,
          0LL),
        (shopPlayVoiceComponent = (ShopPlayVoiceComponent_o *)this->fields.__4__this) == 0LL) )
  {
    sub_B5D69C(shopPlayVoiceComponent, v6);
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
  int v2; // w2
  __int64 v3; // x3
  ShopRootComponent___c__DisplayClass76_0_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct ShopRootComponent_o *_4__this; // x8
  ShopSceneListViewControlHelper_o *listViewHelper; // x20
  System_Action_o *_9__1; // x24
  int32_t selectedEventIndex; // w21
  int32_t state; // w22
  struct ShopRootComponent_o *v13; // x8
  struct ShopRootComponent_o *v14; // x8

  v4 = this;
  if ( (byte_42E5DCE & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    this = (ShopRootComponent___c__DisplayClass76_0_o *)sub_B5D5C4(
                                                          &Method_ShopRootComponent___c__DisplayClass76_0__SelectMenu_b__1__,
                                                          v5,
                                                          v6,
                                                          v7);
    byte_42E5DCE = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_12;
  listViewHelper = _4__this->fields.listViewHelper;
  _9__1 = v4->fields.__9__1;
  selectedEventIndex = _4__this->fields.selectedEventIndex;
  state = v4->fields.state;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_ShopRootComponent___c__DisplayClass76_0__SelectMenu_b__1__,
      0LL);
    v4->fields.__9__1 = _9__1;
    sub_B5D560(&v4->fields.__9__1);
  }
  if ( !listViewHelper )
    goto LABEL_12;
  ShopSceneListViewControlHelper__SetListViewOnSelectMenu(
    listViewHelper,
    state,
    &v4->fields.eventId,
    selectedEventIndex,
    _9__1,
    0LL);
  this = (ShopRootComponent___c__DisplayClass76_0_o *)v4->fields.__4__this;
  if ( !this
    || (ShopRootComponent__OpenStonePurchaseMenu((ShopRootComponent_o *)this, v4->fields.state, 0LL),
        (this = (ShopRootComponent___c__DisplayClass76_0_o *)v4->fields.__4__this) == 0LL)
    || (ShopRootComponent__OpenEventItemWindow((ShopRootComponent_o *)this, v4->fields.state, v4->fields.eventId, 0LL),
        (v13 = v4->fields.__4__this) == 0LL)
    || (v13->fields.state = v4->fields.state, (v14 = v4->fields.__4__this) == 0LL) )
  {
LABEL_12:
    sub_B5D69C(this, method);
  }
  v14->fields.inputState = 0;
}


void __fastcall ShopRootComponent___c__DisplayClass76_0___SelectMenu_b__1(
        ShopRootComponent___c__DisplayClass76_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  ShopRootComponent___c__DisplayClass76_0_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  struct ShopRootComponent_o *_4__this; // x8
  struct ShopRootComponent_o *v18; // x8
  ShopPlayVoiceComponent_o *shopPlayVoiceComponent; // x20
  ShopRootComponent___c__DisplayClass76_0_o *v20; // x21
  ShopRootConstants_c *v21; // x8
  int32_t eventId; // w20
  int32_t *p_state; // x8
  int32_t *p__9__2; // x9
  struct ShopRootConstants_StaticFields *static_fields; // x9
  struct ShopRootComponent_o *v26; // x10
  int32_t v27; // w21
  int32_t v28; // w22
  ShopPlayVoiceComponent_o *v29; // x23
  StandFigureBack_o *standFigureBack; // x24
  System_Action_o *_9__2; // x25

  v4 = this;
  if ( (byte_42E5DCF & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_GuideMaster___, v5, v6, v7);
    sub_B5D5C4(&ShopRootConstants_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    this = (ShopRootComponent___c__DisplayClass76_0_o *)sub_B5D5C4(
                                                          &Method_ShopRootComponent___c__DisplayClass76_0__SelectMenu_b__2__,
                                                          v14,
                                                          v15,
                                                          v16);
    byte_42E5DCF = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_24;
  this = (ShopRootComponent___c__DisplayClass76_0_o *)_4__this->fields.shopPlayVoiceComponent;
  if ( !this )
    goto LABEL_24;
  ShopPlayVoiceComponent__StopVoice((ShopPlayVoiceComponent_o *)this, 0LL);
  if ( v4->fields.state != 15 )
    goto LABEL_22;
  v18 = v4->fields.__4__this;
  if ( !v18 )
    goto LABEL_24;
  shopPlayVoiceComponent = v18->fields.shopPlayVoiceComponent;
  this = (ShopRootComponent___c__DisplayClass76_0_o *)ShopPlayVoiceConstants__GetEnterVoiceFlag(15, 0LL);
  if ( !shopPlayVoiceComponent )
    goto LABEL_24;
  if ( !ShopPlayVoiceComponent__CheckVoiceFlag(shopPlayVoiceComponent, (int32_t)this, 0LL) )
    goto LABEL_22;
  this = (ShopRootComponent___c__DisplayClass76_0_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_24;
  this = (ShopRootComponent___c__DisplayClass76_0_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                        (DataManager_o *)this,
                                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_GuideMaster___);
  if ( !this )
    goto LABEL_24;
  this = (ShopRootComponent___c__DisplayClass76_0_o *)GuideMaster__getGuideData((GuideMaster_o *)this, 3, 0LL);
  v20 = this;
  v21 = ShopRootConstants_TypeInfo;
  if ( (BYTE3(ShopRootConstants_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ShopRootConstants_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ShopRootConstants_TypeInfo);
    v21 = ShopRootConstants_TypeInfo;
  }
  if ( v20 )
  {
    eventId = v20->fields.eventId;
    p_state = &v20->fields.state;
    p__9__2 = (int32_t *)&v20->fields.__9__2;
  }
  else
  {
    static_fields = v21->static_fields;
    eventId = 0;
    p_state = &static_fields->DEFAULT_FIGURE_ID;
    p__9__2 = &static_fields->DEFAULT_FIGURE_LIMIT_CNT;
  }
  v26 = v4->fields.__4__this;
  if ( !v26 )
    goto LABEL_24;
  v27 = *p_state;
  v28 = *p__9__2;
  v29 = v26->fields.shopPlayVoiceComponent;
  standFigureBack = v26->fields.standFigureBack;
  _9__2 = v4->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v4,
      Method_ShopRootComponent___c__DisplayClass76_0__SelectMenu_b__2__,
      0LL);
    v4->fields.__9__2 = _9__2;
    sub_B5D560(&v4->fields.__9__2);
  }
  if ( !v29 )
LABEL_24:
    sub_B5D69C(this, method);
  ShopPlayVoiceComponent__ReloadVoice(v29, standFigureBack, v27, v28, eventId, _9__2, 0LL);
LABEL_22:
  this = (ShopRootComponent___c__DisplayClass76_0_o *)v4->fields.__4__this;
  if ( !this )
    goto LABEL_24;
  ShopRootComponent__SetFadeIn((ShopRootComponent_o *)this, v4->fields.state, 0LL);
}


void __fastcall ShopRootComponent___c__DisplayClass76_0___SelectMenu_b__2(
        ShopRootComponent___c__DisplayClass76_0_o *this,
        const MethodInfo *method)
{
  ShopRootComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B5D69C(0LL, method);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  ShopRootComponent_o *_4__this; // x0
  int32_t state; // w21
  ShopSceneListViewControlHelper_o *listViewHelper; // x20
  System_Action_o *_9__1; // x23
  int32_t v12; // w22
  struct ShopRootComponent_o *v13; // x8

  if ( (byte_42E5DD0 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_ShopRootComponent___c__DisplayClass77_0__BackMenu_b__1__, v5, v6, v7);
    byte_42E5DD0 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_10;
  state = this->fields.state;
  listViewHelper = _4__this->fields.listViewHelper;
  _4__this = (ShopRootComponent_o *)ShopRootComponent__GetStateOnBack(_4__this, state, 0LL);
  _9__1 = this->fields.__9__1;
  v12 = (int)_4__this;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_ShopRootComponent___c__DisplayClass77_0__BackMenu_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_B5D560(&this->fields.__9__1);
  }
  if ( !listViewHelper
    || (ShopSceneListViewControlHelper__SetListViewOnBackMenu(listViewHelper, state, v12, _9__1, 0LL),
        (_4__this = this->fields.__4__this) == 0LL)
    || (ShopRootComponent__CloseEventItemWindow(_4__this, 0LL), (v13 = this->fields.__4__this) == 0LL) )
  {
LABEL_10:
    sub_B5D69C(_4__this, method);
  }
  v13->fields.inputState = 3;
}


void __fastcall ShopRootComponent___c__DisplayClass77_0___BackMenu_b__1(
        ShopRootComponent___c__DisplayClass77_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  ShopRootComponent___c__DisplayClass77_0_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct ShopRootComponent_o *_4__this; // x8
  struct ShopRootComponent_o *v9; // x8
  ShopPlayVoiceComponent_o *shopPlayVoiceComponent; // x20
  StandFigureBack_o *standFigureBack; // x21
  int32_t figureSvtId; // w22
  int32_t figureSvtLimitCnt; // w23
  int32_t defaultFaceId; // w24
  System_Action_o *_9__2; // x25

  v4 = this;
  if ( (byte_42E5DD1 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    this = (ShopRootComponent___c__DisplayClass77_0_o *)sub_B5D5C4(
                                                          &Method_ShopRootComponent___c__DisplayClass77_0__BackMenu_b__2__,
                                                          v5,
                                                          v6,
                                                          v7);
    byte_42E5DD1 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  this = (ShopRootComponent___c__DisplayClass77_0_o *)_4__this->fields.shopPlayVoiceComponent;
  if ( !this )
    goto LABEL_13;
  ShopPlayVoiceComponent__StopVoice((ShopPlayVoiceComponent_o *)this, 0LL);
  if ( v4->fields.state != 15 )
    goto LABEL_11;
  v9 = v4->fields.__4__this;
  if ( !v9 )
    goto LABEL_13;
  shopPlayVoiceComponent = v9->fields.shopPlayVoiceComponent;
  standFigureBack = v9->fields.standFigureBack;
  figureSvtId = v9->fields.figureSvtId;
  figureSvtLimitCnt = v9->fields.figureSvtLimitCnt;
  defaultFaceId = v9->fields.defaultFaceId;
  _9__2 = v4->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v4,
      Method_ShopRootComponent___c__DisplayClass77_0__BackMenu_b__2__,
      0LL);
    v4->fields.__9__2 = _9__2;
    sub_B5D560(&v4->fields.__9__2);
  }
  if ( !shopPlayVoiceComponent )
LABEL_13:
    sub_B5D69C(this, method);
  ShopPlayVoiceComponent__ReloadVoice(
    shopPlayVoiceComponent,
    standFigureBack,
    figureSvtId,
    figureSvtLimitCnt,
    defaultFaceId,
    _9__2,
    0LL);
LABEL_11:
  this = (ShopRootComponent___c__DisplayClass77_0_o *)v4->fields.__4__this;
  if ( !this )
    goto LABEL_13;
  ShopRootComponent__SetFadeIn((ShopRootComponent_o *)this, v4->fields.state, 0LL);
}


void __fastcall ShopRootComponent___c__DisplayClass77_0___BackMenu_b__2(
        ShopRootComponent___c__DisplayClass77_0_o *this,
        const MethodInfo *method)
{
  ShopRootComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B5D69C(0LL, method);
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
  int v2; // w2
  __int64 v3; // x3
  ShopRootComponent___c__DisplayClass81_0_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  Il2CppObject *_4__this; // x22
  struct ShopBuyItemListViewItem_o *item; // x8
  ShopEntity_o *Shop_k__BackingField; // x20
  int32_t ShopKind_k__BackingField; // w21
  ShopBuyItemConfirmMenu_o *klass; // x19
  System_Action_int__o *v16; // x23

  v4 = this;
  if ( (byte_42E5DD2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_int___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_int__TypeInfo, v5, v6, v7);
    this = (ShopRootComponent___c__DisplayClass81_0_o *)sub_B5D5C4(
                                                          &Method_ShopRootComponent_SelectedBuyItemConfirm__,
                                                          v8,
                                                          v9,
                                                          v10);
    byte_42E5DD2 = 1;
  }
  _4__this = (Il2CppObject *)v4->fields.__4__this;
  if ( !_4__this
    || (item = v4->fields.item) == 0LL
    || (Shop_k__BackingField = item->fields._Shop_k__BackingField,
        ShopKind_k__BackingField = item->fields._ShopKind_k__BackingField,
        klass = (ShopBuyItemConfirmMenu_o *)_4__this[9].klass,
        v16 = (System_Action_int__o *)sub_B5D694(System_Action_int__TypeInfo),
        System_Action_int____ctor(
          v16,
          _4__this,
          Method_ShopRootComponent_SelectedBuyItemConfirm__,
          (const MethodInfo_2589D90 *)Method_System_Action_int___ctor__),
        !klass) )
  {
    sub_B5D69C(this, method);
  }
  ShopBuyItemConfirmMenu__Open(klass, Shop_k__BackingField, ShopKind_k__BackingField, v16, 0, 0LL);
}


void __fastcall ShopRootComponent___c__DisplayClass81_0___OpenConfirmMenu_b__1(
        ShopRootComponent___c__DisplayClass81_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  ShopRootComponent___c__DisplayClass81_0_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  Il2CppObject *_4__this; // x22
  struct ShopBuyItemListViewItem_o *item; // x8
  ShopEntity_o *Shop_k__BackingField; // x20
  int32_t ShopKind_k__BackingField; // w21
  ShopBuyItemConfirmMenu_o *klass; // x19
  System_Action_int__o *v16; // x23

  v4 = this;
  if ( (byte_42E5DD3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_int___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_int__TypeInfo, v5, v6, v7);
    this = (ShopRootComponent___c__DisplayClass81_0_o *)sub_B5D5C4(
                                                          &Method_ShopRootComponent_SelectedBuyItemConfirm__,
                                                          v8,
                                                          v9,
                                                          v10);
    byte_42E5DD3 = 1;
  }
  _4__this = (Il2CppObject *)v4->fields.__4__this;
  if ( !_4__this
    || (item = v4->fields.item) == 0LL
    || (Shop_k__BackingField = item->fields._Shop_k__BackingField,
        ShopKind_k__BackingField = item->fields._ShopKind_k__BackingField,
        klass = (ShopBuyItemConfirmMenu_o *)_4__this[9].klass,
        v16 = (System_Action_int__o *)sub_B5D694(System_Action_int__TypeInfo),
        System_Action_int____ctor(
          v16,
          _4__this,
          Method_ShopRootComponent_SelectedBuyItemConfirm__,
          (const MethodInfo_2589D90 *)Method_System_Action_int___ctor__),
        !klass) )
  {
    sub_B5D69C(this, method);
  }
  ShopBuyItemConfirmMenu__Open(klass, Shop_k__BackingField, ShopKind_k__BackingField, v16, 0, 0LL);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  ServantSellConfirmMenu_o *_4__this; // x0
  Il2CppObject *v13; // x23
  ServantSellConfirmMenu_o *monitor; // x20
  int32_t kind; // w19
  System_Int64_array *v16; // x21
  System_Int64_array *klass; // x22
  System_Action_int__o *v18; // x24

  if ( (byte_42E5DD4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_int___ctor__, decide, (_DWORD)method, v3);
    sub_B5D5C4(&System_Action_int__TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_ShopRootComponent_SellServantConfirm__, v9, v10, v11);
    byte_42E5DD4 = 1;
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
      v13 = (Il2CppObject *)this->fields.__4__this;
      if ( v13 )
      {
        monitor = (ServantSellConfirmMenu_o *)v13[11].monitor;
        kind = this->fields.kind;
        v16 = (System_Int64_array *)v13[28].monitor;
        klass = (System_Int64_array *)v13[29].klass;
        v18 = (System_Action_int__o *)sub_B5D694(System_Action_int__TypeInfo);
        System_Action_int____ctor(
          v18,
          v13,
          Method_ShopRootComponent_SellServantConfirm__,
          (const MethodInfo_2589D90 *)Method_System_Action_int___ctor__);
        if ( monitor )
        {
          ServantSellConfirmMenu__Open(monitor, kind, v16, klass, v18, 0LL);
          return;
        }
      }
    }
LABEL_10:
    sub_B5D69C(_4__this, *(_QWORD *)&decide);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  WebViewManager_o *Instance; // x0
  __int64 v12; // x1
  System_Action_o *_9__1; // x22
  CommonUI_o *v14; // x21
  QuestRewardInfo_o *questRewardInfo; // x20

  if ( (byte_42E5DD5 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&Method_ShopRootComponent___c__DisplayClass95_0__PlayLvExceedItemReleaseEffect_b__1__, v8, v9, v10);
    byte_42E5DD5 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _9__1 = this->fields.__9__1;
  v14 = (CommonUI_o *)Instance;
  questRewardInfo = this->fields.questRewardInfo;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_ShopRootComponent___c__DisplayClass95_0__PlayLvExceedItemReleaseEffect_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_B5D560(&this->fields.__9__1);
  }
  if ( !v14 )
    sub_B5D69C(Instance, v12);
  CommonUI__LoadItemGetEffect(v14, questRewardInfo, _9__1, 0LL);
}


void __fastcall ShopRootComponent___c__DisplayClass95_0___PlayLvExceedItemReleaseEffect_b__1(
        ShopRootComponent___c__DisplayClass95_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UnityEngine_GameObject_o *Instance; // x0
  __int64 v12; // x1
  struct ShopRootComponent_o *_4__this; // x8
  CommonUI_o *v14; // x20
  System_Action_o *_9__2; // x23
  UnityEngine_Transform_o *v16; // x22
  QuestRewardInfo_o *questRewardInfo; // x21

  if ( (byte_42E5DD6 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&Method_ShopRootComponent___c__DisplayClass95_0__PlayLvExceedItemReleaseEffect_b__2__, v8, v9, v10);
    byte_42E5DD6 = 1;
  }
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_9;
  v14 = (CommonUI_o *)Instance;
  Instance = _4__this->fields.actionPanel;
  if ( !Instance )
    goto LABEL_9;
  Instance = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(Instance, 0LL);
  _9__2 = this->fields.__9__2;
  v16 = (UnityEngine_Transform_o *)Instance;
  questRewardInfo = this->fields.questRewardInfo;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_ShopRootComponent___c__DisplayClass95_0__PlayLvExceedItemReleaseEffect_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B5D560(&this->fields.__9__2);
  }
  if ( !v14 )
LABEL_9:
    sub_B5D69C(Instance, v12);
  CommonUI__OpenItemGetEffect(v14, v16, 0, questRewardInfo, _9__2, 0LL);
}


void __fastcall ShopRootComponent___c__DisplayClass95_0___PlayLvExceedItemReleaseEffect_b__2(
        ShopRootComponent___c__DisplayClass95_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  CommonUI_o *Instance; // x0
  __int64 v15; // x1
  CommonUI_o *v16; // x20
  AvalonSceneManager_c *v17; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__3; // x21

  if ( (byte_42E5DD7 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&Method_ShopRootComponent___c__DisplayClass95_0__PlayLvExceedItemReleaseEffect_b__3__, v11, v12, v13);
    byte_42E5DD7 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  CommonUI__ReleaseItemGetEffect(Instance, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v16 = Instance;
  v17 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v17 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v17->static_fields->DEFAULT_FADE_TIME;
  _9__3 = this->fields.__9__3;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_ShopRootComponent___c__DisplayClass95_0__PlayLvExceedItemReleaseEffect_b__3__,
      0LL);
    this->fields.__9__3 = _9__3;
    sub_B5D560(&this->fields.__9__3);
  }
  if ( !v16 )
LABEL_11:
    sub_B5D69C(Instance, v15);
  CommonUI__maskFadein(v16, DEFAULT_FADE_TIME, _9__3, 0LL);
}


void __fastcall ShopRootComponent___c__DisplayClass95_0___PlayLvExceedItemReleaseEffect_b__3(
        ShopRootComponent___c__DisplayClass95_0_o *this,
        const MethodInfo *method)
{
  struct ShopBuyItemListViewItem_o *item; // x1

  item = this->fields.item;
  if ( !item || (this = (ShopRootComponent___c__DisplayClass95_0_o *)this->fields.__4__this) == 0LL )
    sub_B5D69C(this, item);
  ShopRootComponent__ShowNormalItemDialog((ShopRootComponent_o *)this, item, item->fields._Shop_k__BackingField, 0LL);
}