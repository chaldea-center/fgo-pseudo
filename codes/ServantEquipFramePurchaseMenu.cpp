void __fastcall ServantEquipFramePurchaseMenu___ctor(ServantEquipFramePurchaseMenu_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall ServantEquipFramePurchaseMenu__Callback(
        ServantEquipFramePurchaseMenu_o *this,
        int32_t result,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_callbackFunc; // x0
  ServantEquipFramePurchaseMenu_CallbackFunc_o *v9; // x20
  struct ServantEquipFramePurchaseMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  p_callbackFunc->klass = 0LL;
  sub_B16F98(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
  if ( callbackFunc )
    ServantEquipFramePurchaseMenu_CallbackFunc__Invoke(v9, result, 0LL);
}


void __fastcall ServantEquipFramePurchaseMenu__Close(ServantEquipFramePurchaseMenu_o *this, const MethodInfo *method)
{
  ServantEquipFramePurchaseConfirmMenu_o *purchaseConfirmMenu; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  BattleServantConfConponent_o *p_refreshCallbackFunc; // x19
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( this->fields.state )
  {
    purchaseConfirmMenu = this->fields.purchaseConfirmMenu;
    if ( !purchaseConfirmMenu
      || (ServantEquipFramePurchaseConfirmMenu__Init(purchaseConfirmMenu, method),
          (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
    {
      sub_B170D4();
    }
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    this->fields.stoneShopEntity = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.stoneShopEntity, 0LL, v5, v6, v7, v8, v9, v10);
    this->fields.refreshCallbackFunc = 0LL;
    p_refreshCallbackFunc = (BattleServantConfConponent_o *)&this->fields.refreshCallbackFunc;
    sub_B16F98(p_refreshCallbackFunc, 0LL, v12, v13, v14, v15, v16, v17);
    p_refreshCallbackFunc->fields.m_CachedPtr = 0;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantEquipFramePurchaseMenu__EndBuyFrameConfirm(
        ServantEquipFramePurchaseMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  ServantEquipFramePurchaseConfirmMenu_o *purchaseConfirmMenu; // x20
  System_Action_o *v9; // x21
  const MethodInfo *v10; // x2

  if ( (byte_40FD07E & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isDecide);
    sub_B16FFC(&Method_ServantEquipFramePurchaseMenu_EndCloseBuyFrameConfirmCancel__, v7);
    byte_40FD07E = 1;
  }
  if ( isDecide )
  {
    this->fields.state = 6;
    ServantEquipFramePurchaseMenu__RequestServantEquipFramePurchase(this, (const MethodInfo *)isDecide);
  }
  else
  {
    purchaseConfirmMenu = this->fields.purchaseConfirmMenu;
    v9 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, isDecide, method, v3, v4);
    System_Action___ctor(
      v9,
      (Il2CppObject *)this,
      Method_ServantEquipFramePurchaseMenu_EndCloseBuyFrameConfirmCancel__,
      0LL);
    if ( !purchaseConfirmMenu )
      sub_B170D4();
    ServantEquipFramePurchaseConfirmMenu__Close_30685736(purchaseConfirmMenu, v9, v10);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantEquipFramePurchaseMenu__EndBuyFrameResultConfirm(
        ServantEquipFramePurchaseMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  ServantEquipFramePurchaseConfirmMenu_o *purchaseConfirmMenu; // x20
  System_Action_o *v8; // x21
  const MethodInfo *v9; // x2

  if ( (byte_40FD081 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isDecide);
    sub_B16FFC(&Method_ServantEquipFramePurchaseMenu_EndCloseBuyFrameConfirmPurchase__, v6);
    byte_40FD081 = 1;
  }
  purchaseConfirmMenu = this->fields.purchaseConfirmMenu;
  v8 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, isDecide, method, v3, v4);
  System_Action___ctor(
    v8,
    (Il2CppObject *)this,
    Method_ServantEquipFramePurchaseMenu_EndCloseBuyFrameConfirmPurchase__,
    0LL);
  if ( !purchaseConfirmMenu )
    sub_B170D4();
  ServantEquipFramePurchaseConfirmMenu__Close_30685736(purchaseConfirmMenu, v8, v9);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantEquipFramePurchaseMenu__EndBuyStoneConfirm(
        ServantEquipFramePurchaseMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  CommonUI_o *Instance; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  StonePurchaseMenu_CallbackFunc_o *v12; // x21
  ServantEquipFramePurchaseConfirmMenu_o *purchaseConfirmMenu; // x0
  const MethodInfo *v14; // x2

  if ( (byte_40FD07C & 1) == 0 )
  {
    sub_B16FFC(&StonePurchaseMenu_CallbackFunc_TypeInfo, isDecide);
    sub_B16FFC(&Method_ServantEquipFramePurchaseMenu_SelectedBuyBankItemConfirm__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_40FD07C = 1;
  }
  if ( isDecide )
  {
    this->fields.state = 5;
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v12 = (StonePurchaseMenu_CallbackFunc_o *)sub_B170CC(StonePurchaseMenu_CallbackFunc_TypeInfo, v8, v9, v10, v11);
    StonePurchaseMenu_CallbackFunc___ctor(
      v12,
      (Il2CppObject *)this,
      Method_ServantEquipFramePurchaseMenu_SelectedBuyBankItemConfirm__,
      0LL);
    if ( Instance )
    {
      CommonUI__OpenStonePurchaseMenu(Instance, v12, this->fields.refreshCallbackFunc, 0LL);
      return;
    }
LABEL_8:
    sub_B170D4();
  }
  purchaseConfirmMenu = this->fields.purchaseConfirmMenu;
  if ( !purchaseConfirmMenu )
    goto LABEL_8;
  ServantEquipFramePurchaseConfirmMenu__Close_30685736(purchaseConfirmMenu, 0LL, method);
  ServantEquipFramePurchaseMenu__Callback(this, 0, v14);
}


void __fastcall ServantEquipFramePurchaseMenu__EndCloseBuyFrameConfirmCancel(
        ServantEquipFramePurchaseMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ServantEquipFramePurchaseMenu__Callback(this, 0, v2);
}


void __fastcall ServantEquipFramePurchaseMenu__EndCloseBuyFrameConfirmPurchase(
        ServantEquipFramePurchaseMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ServantEquipFramePurchaseMenu__Callback(this, 2, v2);
}


void __fastcall ServantEquipFramePurchaseMenu__EndMaxFrameConfirm(
        ServantEquipFramePurchaseMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ServantEquipFramePurchaseConfirmMenu_o *purchaseConfirmMenu; // x0
  const MethodInfo *v5; // x2

  purchaseConfirmMenu = this->fields.purchaseConfirmMenu;
  if ( !purchaseConfirmMenu )
    sub_B170D4();
  ServantEquipFramePurchaseConfirmMenu__Close_30685736(purchaseConfirmMenu, 0LL, method);
  ServantEquipFramePurchaseMenu__Callback(this, 0, v5);
}


void __fastcall ServantEquipFramePurchaseMenu__EndNoShopConfirm(
        ServantEquipFramePurchaseMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ServantEquipFramePurchaseConfirmMenu_o *purchaseConfirmMenu; // x0
  const MethodInfo *v5; // x2

  purchaseConfirmMenu = this->fields.purchaseConfirmMenu;
  if ( !purchaseConfirmMenu )
    sub_B170D4();
  ServantEquipFramePurchaseConfirmMenu__Close_30685736(purchaseConfirmMenu, 0LL, method);
  ServantEquipFramePurchaseMenu__Callback(this, 1, v5);
}


void __fastcall ServantEquipFramePurchaseMenu__EndRequestServantEquipFramePurchase(
        ServantEquipFramePurchaseMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v4; // x1
  ServantEquipFramePurchaseConfirmMenu_o *purchaseConfirmMenu; // x0
  ServantEquipFramePurchaseConfirmMenu_o *v6; // x20
  StoneShopEntity_o *stoneShopEntity; // x21
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o *v12; // x22
  const MethodInfo *v13; // x4
  System_Action_o *refreshCallbackFunc; // x0

  if ( (byte_40FD080 & 1) == 0 )
  {
    sub_B16FFC(&ServantEquipFramePurchaseConfirmMenu_CallbackFunc_TypeInfo, result);
    sub_B16FFC(&Method_ServantEquipFramePurchaseMenu_EndBuyFrameResultConfirm__, v4);
    byte_40FD080 = 1;
  }
  purchaseConfirmMenu = this->fields.purchaseConfirmMenu;
  this->fields.state = 7;
  if ( !purchaseConfirmMenu
    || (ServantEquipFramePurchaseConfirmMenu__Init(purchaseConfirmMenu, (const MethodInfo *)result),
        v6 = this->fields.purchaseConfirmMenu,
        stoneShopEntity = this->fields.stoneShopEntity,
        v12 = (ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o *)sub_B170CC(
                                                                       ServantEquipFramePurchaseConfirmMenu_CallbackFunc_TypeInfo,
                                                                       v8,
                                                                       v9,
                                                                       v10,
                                                                       v11),
        ServantEquipFramePurchaseConfirmMenu_CallbackFunc___ctor(
          v12,
          (Il2CppObject *)this,
          Method_ServantEquipFramePurchaseMenu_EndBuyFrameResultConfirm__,
          0LL),
        !v6) )
  {
    sub_B170D4();
  }
  ServantEquipFramePurchaseConfirmMenu__Open(v6, 2, stoneShopEntity, v12, v13);
  refreshCallbackFunc = this->fields.refreshCallbackFunc;
  if ( refreshCallbackFunc )
    System_Action__Invoke(refreshCallbackFunc, 0LL);
}


void __fastcall ServantEquipFramePurchaseMenu__Open(
        ServantEquipFramePurchaseMenu_o *this,
        ServantEquipFramePurchaseMenu_CallbackFunc_o *callback,
        System_Action_o *refreshCallback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  UserGameEntity_o *SelfUserGame; // x20
  WebViewManager_o *Instance; // x0
  StoneShopMaster_o *MasterData_WarQuestSelectionMaster; // x0
  StoneShopEntity_array *EnableEntitiyList_20905636; // x0
  __int64 v29; // x1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  __int64 v36; // x8
  struct StoneShopEntity_o *v37; // x1
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  int32_t svtEquipKeep; // w22
  BalanceConfig_c *v43; // x0
  struct StoneShopEntity_o *stoneShopEntity; // x21
  struct ServantEquipFramePurchaseConfirmMenu_o *v45; // x20
  ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o *v46; // x22
  const MethodInfo *v47; // x4
  int32_t v48; // w1
  ServantEquipFramePurchaseConfirmMenu_o *v49; // x0
  struct ServantEquipFramePurchaseConfirmMenu_o *v50; // x20
  ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o *v51; // x21
  StoneShopEntity_o *v52; // x2
  ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o *v53; // x3
  struct ServantEquipFramePurchaseConfirmMenu_o *purchaseConfirmMenu; // x20

  if ( (byte_40FD07B & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, callback);
    sub_B16FFC(&ServantEquipFramePurchaseConfirmMenu_CallbackFunc_TypeInfo, v11);
    sub_B16FFC(&Method_DataManager_GetMasterData_StoneShopMaster___, v12);
    sub_B16FFC(&Method_ServantEquipFramePurchaseMenu_EndBuyFrameConfirm__, v13);
    sub_B16FFC(&Method_ServantEquipFramePurchaseMenu_EndBuyStoneConfirm__, v14);
    sub_B16FFC(&Method_ServantEquipFramePurchaseMenu_EndMaxFrameConfirm__, v15);
    sub_B16FFC(&Method_ServantEquipFramePurchaseMenu_EndNoShopConfirm__, v16);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    byte_40FD07B = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callbackFunc = callback;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callback,
      (System_String_array **)refreshCallback,
      (System_String_array **)method,
      v4,
      v5,
      v6,
      v7);
    this->fields.refreshCallbackFunc = refreshCallback;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.refreshCallbackFunc,
      (System_Int32_array **)refreshCallback,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_28;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_28;
    MasterData_WarQuestSelectionMaster = (StoneShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)Instance,
                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_StoneShopMaster___);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_28;
    EnableEntitiyList_20905636 = StoneShopMaster__GetEnableEntitiyList_20905636(
                                   MasterData_WarQuestSelectionMaster,
                                   13,
                                   0LL);
    if ( !EnableEntitiyList_20905636 )
      goto LABEL_28;
    v36 = *(_QWORD *)&EnableEntitiyList_20905636->max_length;
    if ( v36 )
    {
      if ( !(_DWORD)v36 )
      {
        sub_B17100(EnableEntitiyList_20905636, v29, v30);
        sub_B170A0();
      }
      v37 = EnableEntitiyList_20905636->m_Items[0];
      this->fields.stoneShopEntity = v37;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.stoneShopEntity,
        (System_Int32_array **)v37,
        v30,
        v31,
        v32,
        v33,
        v34,
        v35);
      if ( !SelfUserGame )
        goto LABEL_28;
      svtEquipKeep = SelfUserGame->fields.svtEquipKeep;
      v43 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v43 = BalanceConfig_TypeInfo;
      }
      if ( svtEquipKeep < v43->static_fields->ServantEquipFrameMax )
      {
        stoneShopEntity = this->fields.stoneShopEntity;
        if ( stoneShopEntity )
        {
          if ( SelfUserGame->fields.stone >= stoneShopEntity->fields.price )
          {
            this->fields.state = 3;
            purchaseConfirmMenu = this->fields.purchaseConfirmMenu;
            v46 = (ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o *)sub_B170CC(
                                                                           ServantEquipFramePurchaseConfirmMenu_CallbackFunc_TypeInfo,
                                                                           v38,
                                                                           v39,
                                                                           v40,
                                                                           v41);
            ServantEquipFramePurchaseConfirmMenu_CallbackFunc___ctor(
              v46,
              (Il2CppObject *)this,
              Method_ServantEquipFramePurchaseMenu_EndBuyFrameConfirm__,
              0LL);
            if ( purchaseConfirmMenu )
            {
              v49 = purchaseConfirmMenu;
              v48 = 0;
              goto LABEL_26;
            }
          }
          else
          {
            this->fields.state = 4;
            v45 = this->fields.purchaseConfirmMenu;
            v46 = (ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o *)sub_B170CC(
                                                                           ServantEquipFramePurchaseConfirmMenu_CallbackFunc_TypeInfo,
                                                                           v38,
                                                                           v39,
                                                                           v40,
                                                                           v41);
            ServantEquipFramePurchaseConfirmMenu_CallbackFunc___ctor(
              v46,
              (Il2CppObject *)this,
              Method_ServantEquipFramePurchaseMenu_EndBuyStoneConfirm__,
              0LL);
            if ( v45 )
            {
              v48 = 1;
              v49 = v45;
LABEL_26:
              v52 = stoneShopEntity;
              v53 = v46;
              goto LABEL_27;
            }
          }
        }
LABEL_28:
        sub_B170D4();
      }
      this->fields.state = 2;
      v50 = this->fields.purchaseConfirmMenu;
      v51 = (ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o *)sub_B170CC(
                                                                     ServantEquipFramePurchaseConfirmMenu_CallbackFunc_TypeInfo,
                                                                     v38,
                                                                     v39,
                                                                     v40,
                                                                     v41);
      ServantEquipFramePurchaseConfirmMenu_CallbackFunc___ctor(
        v51,
        (Il2CppObject *)this,
        Method_ServantEquipFramePurchaseMenu_EndMaxFrameConfirm__,
        0LL);
      if ( !v50 )
        goto LABEL_28;
      v48 = 3;
    }
    else
    {
      this->fields.state = 1;
      v50 = this->fields.purchaseConfirmMenu;
      v51 = (ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o *)sub_B170CC(
                                                                     ServantEquipFramePurchaseConfirmMenu_CallbackFunc_TypeInfo,
                                                                     v29,
                                                                     v30,
                                                                     v31,
                                                                     v32);
      ServantEquipFramePurchaseConfirmMenu_CallbackFunc___ctor(
        v51,
        (Il2CppObject *)this,
        Method_ServantEquipFramePurchaseMenu_EndNoShopConfirm__,
        0LL);
      if ( !v50 )
        goto LABEL_28;
      v48 = 4;
    }
    v49 = v50;
    v52 = 0LL;
    v53 = v51;
LABEL_27:
    ServantEquipFramePurchaseConfirmMenu__Open(v49, v48, v52, v53, v47);
  }
}


void __fastcall ServantEquipFramePurchaseMenu__RequestServantEquipFramePurchase(
        ServantEquipFramePurchaseMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  NetworkManager_ResultCallbackFunc_o *v9; // x20
  PurchaseByStoneRequest_o *Request_WarBoardWallAttackRequest; // x0
  struct StoneShopEntity_o *stoneShopEntity; // x8

  if ( (byte_40FD07F & 1) == 0 )
  {
    sub_B16FFC(&Method_NetworkManager_getRequest_PurchaseByStoneRequest___, method);
    sub_B16FFC(&NetworkManager_TypeInfo, v6);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    sub_B16FFC(&Method_ServantEquipFramePurchaseMenu_EndRequestServantEquipFramePurchase__, v8);
    byte_40FD07F = 1;
  }
  if ( this->fields.stoneShopEntity )
  {
    v9 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                  NetworkManager_ResultCallbackFunc_TypeInfo,
                                                  method,
                                                  v2,
                                                  v3,
                                                  v4);
    NetworkManager_ResultCallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_ServantEquipFramePurchaseMenu_EndRequestServantEquipFramePurchase__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = (PurchaseByStoneRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                      v9,
                                                                      (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_PurchaseByStoneRequest___);
    stoneShopEntity = this->fields.stoneShopEntity;
    if ( !stoneShopEntity || !Request_WarBoardWallAttackRequest )
      sub_B170D4();
    PurchaseByStoneRequest__beginRequest(Request_WarBoardWallAttackRequest, stoneShopEntity->fields.id, 1, 0LL);
  }
  else
  {
    ServantEquipFramePurchaseMenu__Callback(this, 1, v2);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantEquipFramePurchaseMenu__SelectedBuyBankItemConfirm(
        ServantEquipFramePurchaseMenu_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  CommonUI_o *Instance; // x0
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x2
  ServantEquipFramePurchaseConfirmMenu_o *purchaseConfirmMenu; // x0
  struct ServantEquipFramePurchaseConfirmMenu_o *v12; // x20
  struct StoneShopEntity_o *stoneShopEntity; // x21
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o *v18; // x22
  const MethodInfo *v19; // x4
  int32_t v20; // w1
  ServantEquipFramePurchaseConfirmMenu_o *v21; // x0
  StoneShopEntity_o *v22; // x2
  ServantEquipFramePurchaseMenu_o *v23; // x0
  int32_t v24; // w1
  ServantEquipFramePurchaseConfirmMenu_o *v25; // x0
  struct ServantEquipFramePurchaseConfirmMenu_o *v26; // x21
  struct StoneShopEntity_o *v27; // x20
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4

  if ( (byte_40FD07D & 1) == 0 )
  {
    sub_B16FFC(&ServantEquipFramePurchaseConfirmMenu_CallbackFunc_TypeInfo, *(_QWORD *)&result);
    sub_B16FFC(&Method_ServantEquipFramePurchaseMenu_EndBuyFrameConfirm__, v5);
    sub_B16FFC(&Method_ServantEquipFramePurchaseMenu_EndBuyStoneConfirm__, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_40FD07D = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
LABEL_15:
    sub_B170D4();
  CommonUI__CloseStonePurchaseMenu(Instance, 0LL);
  switch ( result )
  {
    case 0:
    case 4:
      purchaseConfirmMenu = this->fields.purchaseConfirmMenu;
      this->fields.state = 4;
      if ( !purchaseConfirmMenu )
        goto LABEL_15;
      ServantEquipFramePurchaseConfirmMenu__Init(purchaseConfirmMenu, v9);
      v12 = this->fields.purchaseConfirmMenu;
      stoneShopEntity = this->fields.stoneShopEntity;
      v18 = (ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o *)sub_B170CC(
                                                                     ServantEquipFramePurchaseConfirmMenu_CallbackFunc_TypeInfo,
                                                                     v14,
                                                                     v15,
                                                                     v16,
                                                                     v17);
      ServantEquipFramePurchaseConfirmMenu_CallbackFunc___ctor(
        v18,
        (Il2CppObject *)this,
        Method_ServantEquipFramePurchaseMenu_EndBuyStoneConfirm__,
        0LL);
      if ( !v12 )
        goto LABEL_15;
      v20 = 1;
      v21 = v12;
      v22 = stoneShopEntity;
      goto LABEL_14;
    case 1:
      v24 = 1;
      v23 = this;
      goto LABEL_10;
    case 2:
      v25 = this->fields.purchaseConfirmMenu;
      this->fields.state = 3;
      if ( !v25 )
        goto LABEL_15;
      ServantEquipFramePurchaseConfirmMenu__Init(v25, v9);
      v26 = this->fields.purchaseConfirmMenu;
      v27 = this->fields.stoneShopEntity;
      v18 = (ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o *)sub_B170CC(
                                                                     ServantEquipFramePurchaseConfirmMenu_CallbackFunc_TypeInfo,
                                                                     v28,
                                                                     v29,
                                                                     v30,
                                                                     v31);
      ServantEquipFramePurchaseConfirmMenu_CallbackFunc___ctor(
        v18,
        (Il2CppObject *)this,
        Method_ServantEquipFramePurchaseMenu_EndBuyFrameConfirm__,
        0LL);
      if ( !v26 )
        goto LABEL_15;
      v21 = v26;
      v20 = 0;
      v22 = v27;
LABEL_14:
      ServantEquipFramePurchaseConfirmMenu__Open(v21, v20, v22, v18, v19);
      break;
    case 3:
      v23 = this;
      v24 = 0;
LABEL_10:
      ServantEquipFramePurchaseMenu__Callback(v23, v24, v10);
      break;
    default:
      return;
  }
}


void __fastcall ServantEquipFramePurchaseMenu__add_callbackFunc(
        ServantEquipFramePurchaseMenu_o *this,
        ServantEquipFramePurchaseMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ServantEquipFramePurchaseMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ServantEquipFramePurchaseMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ServantEquipFramePurchaseMenu_o *v11; // x0
  ServantEquipFramePurchaseMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_40FD079 & 1) == 0 )
  {
    sub_B16FFC(&ServantEquipFramePurchaseMenu_CallbackFunc_TypeInfo, value);
    byte_40FD079 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (ServantEquipFramePurchaseMenu_CallbackFunc_c *)v8->klass != ServantEquipFramePurchaseMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B173C8(v8);
  ServantEquipFramePurchaseMenu__remove_callbackFunc(v11, v12, v13);
}


void __fastcall ServantEquipFramePurchaseMenu__remove_callbackFunc(
        ServantEquipFramePurchaseMenu_o *this,
        ServantEquipFramePurchaseMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ServantEquipFramePurchaseMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ServantEquipFramePurchaseMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ServantEquipFramePurchaseMenu_o *v11; // x0
  ServantEquipFramePurchaseMenu_CallbackFunc_o *v12; // x1
  System_Action_o *v13; // x2
  const MethodInfo *v14; // x3

  if ( (byte_40FD07A & 1) == 0 )
  {
    sub_B16FFC(&ServantEquipFramePurchaseMenu_CallbackFunc_TypeInfo, value);
    byte_40FD07A = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (ServantEquipFramePurchaseMenu_CallbackFunc_c *)v8->klass != ServantEquipFramePurchaseMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B173C8(v8);
  ServantEquipFramePurchaseMenu__Open(v11, v12, v13, v14);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantEquipFramePurchaseMenu_CallbackFunc___ctor(
        ServantEquipFramePurchaseMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall ServantEquipFramePurchaseMenu_CallbackFunc__BeginInvoke(
        ServantEquipFramePurchaseMenu_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-24h] BYREF

  v10 = result;
  if ( (byte_40F7628 & 1) == 0 )
  {
    sub_B16FFC(&ServantEquipFramePurchaseMenu_Result_TypeInfo, *(_QWORD *)&result);
    byte_40F7628 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(ServantEquipFramePurchaseMenu_Result_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v9, callback, object);
}


void __fastcall ServantEquipFramePurchaseMenu_CallbackFunc__EndInvoke(
        ServantEquipFramePurchaseMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantEquipFramePurchaseMenu_CallbackFunc__Invoke(
        ServantEquipFramePurchaseMenu_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v5; // x24
  ServantEquipFramePurchaseMenu_CallbackFunc_o **v6; // x25
  __int64 v7; // x26
  unsigned int v8; // w23
  __int64 class_0; // x0
  __int64 v10; // x8
  unsigned int v11; // w22
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, _QWORD, _QWORD); // x0
  ServantEquipFramePurchaseMenu_CallbackFunc_o *v18; // x8
  __int64 *v19; // x21
  __int64 v20; // x22
  void (__fastcall *v21)(unsigned int *, __int64); // x23
  char v22; // w23
  char v23; // w0
  unsigned int v24; // w23
  __int64 v25; // x8
  __int64 v26; // x1
  __int64 v27; // x2
  unsigned __int64 v28; // x10
  _DWORD *v29; // x11
  unsigned int v30; // [xsp+4h] [xbp-4Ch] BYREF
  ServantEquipFramePurchaseMenu_CallbackFunc_o *v31; // [xsp+8h] [xbp-48h] BYREF

  v31 = this;
  v30 = result;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v6 = &v31;
    v5 = 1LL;
    goto LABEL_5;
  }
  v5 = *(_QWORD *)(v3 + 24);
  if ( v5 )
  {
    v6 = (ServantEquipFramePurchaseMenu_CallbackFunc_o **)(v3 + 32);
LABEL_5:
    v7 = 0LL;
    while ( 1 )
    {
      v18 = v6[v7];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(unsigned int *, __int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v18->fields.extra_arg, *(_QWORD *)&result, method);
      if ( (sub_B1702C(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) != 1 )
        goto LABEL_36;
      v21((unsigned int *)v30, v20);
LABEL_38:
      if ( ++v7 == v5 )
        return;
    }
    if ( !v19 )
    {
      v21(&v30 - 4, v20);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B17024(v20);
      v23 = sub_B17428(v20);
      if ( (v22 & 1) != 0 )
      {
        v24 = v30;
        if ( (v23 & 1) != 0 )
        {
          v25 = *v19;
          v26 = *(_QWORD *)(v20 + 24);
          v27 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v28 = 0LL;
            v29 = (_DWORD *)(*(_QWORD *)(v25 + 176) + 8LL);
            while ( *((_QWORD *)v29 - 1) != v26 )
            {
              ++v28;
              v29 += 4;
              if ( v28 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_35;
            }
            v16 = v25 + 16LL * (*v29 + (int)v27) + 312;
          }
          else
          {
LABEL_35:
            v16 = sub_AAFEF8(v19, v26, v27);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B170AC(v15, v20);
        (*v17)(v19, v24, v17);
      }
      else
      {
        v8 = *(unsigned __int16 *)(v20 + 72);
        if ( (v23 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v20);
          v10 = *v19;
          v11 = v30;
          if ( *(_WORD *)(*v19 + 298) )
          {
            v12 = 0LL;
            v13 = (_DWORD *)(*(_QWORD *)(v10 + 176) + 8LL);
            while ( *((_QWORD *)v13 - 1) != class_0 )
            {
              ++v12;
              v13 += 4;
              if ( v12 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_11;
            }
            v14 = v10 + 16LL * (int)(*v13 + v8) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_AAFEF8(v19, class_0, v8);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))v14)(v19, v11, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            v30,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, __int64))v21)(v19, v30, v20);
    goto LABEL_38;
  }
}