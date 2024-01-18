void __fastcall ServantFramePurchaseMenu___ctor(ServantFramePurchaseMenu_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall ServantFramePurchaseMenu__Callback(
        ServantFramePurchaseMenu_o *this,
        int32_t result,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_callbackFunc; // x0
  ServantFramePurchaseMenu_CallbackFunc_o *v9; // x20
  struct ServantFramePurchaseMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  p_callbackFunc->klass = 0LL;
  sub_B2C2F8(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
  if ( callbackFunc )
    ServantFramePurchaseMenu_CallbackFunc__Invoke(v9, result, 0LL);
}


void __fastcall ServantFramePurchaseMenu__Close(ServantFramePurchaseMenu_o *this, const MethodInfo *method)
{
  ServantFramePurchaseConfirmMenu_o *purchaseConfirmMenu; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  BattleServantConfConponent_o *p_refreshCallbackFunc; // x19
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( this->fields.state )
  {
    purchaseConfirmMenu = this->fields.purchaseConfirmMenu;
    if ( !purchaseConfirmMenu
      || (ServantFramePurchaseConfirmMenu__Init(purchaseConfirmMenu, method),
          (purchaseConfirmMenu = (ServantFramePurchaseConfirmMenu_o *)UnityEngine_Component__get_gameObject(
                                                                        (UnityEngine_Component_o *)this,
                                                                        0LL)) == 0LL) )
    {
      sub_B2C434(purchaseConfirmMenu, method);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)purchaseConfirmMenu, 0, 0LL);
    this->fields.stoneShopEntity = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.stoneShopEntity, 0LL, v4, v5, v6, v7, v8, v9);
    this->fields.refreshCallbackFunc = 0LL;
    p_refreshCallbackFunc = (BattleServantConfConponent_o *)&this->fields.refreshCallbackFunc;
    sub_B2C2F8(p_refreshCallbackFunc, 0LL, v11, v12, v13, v14, v15, v16);
    p_refreshCallbackFunc->fields.m_CachedPtr = 0;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFramePurchaseMenu__EndBuyFrameConfirm(
        ServantFramePurchaseMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  ServantFramePurchaseConfirmMenu_o *purchaseConfirmMenu; // x20
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2

  if ( (byte_4189F8C & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isDecide);
    sub_B2C35C(&Method_ServantFramePurchaseMenu_EndCloseBuyFrameConfirmCancel__, v5);
    byte_4189F8C = 1;
  }
  if ( isDecide )
  {
    this->fields.state = 6;
    ServantFramePurchaseMenu__RequestServantFramePurchase(this, (const MethodInfo *)isDecide);
  }
  else
  {
    purchaseConfirmMenu = this->fields.purchaseConfirmMenu;
    v7 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v7, (Il2CppObject *)this, Method_ServantFramePurchaseMenu_EndCloseBuyFrameConfirmCancel__, 0LL);
    if ( !purchaseConfirmMenu )
      sub_B2C434(v8, v9);
    ServantFramePurchaseConfirmMenu__Close_29314140(purchaseConfirmMenu, v7, v10);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFramePurchaseMenu__EndBuyFrameResultConfirm(
        ServantFramePurchaseMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v4; // x1
  ServantFramePurchaseConfirmMenu_o *purchaseConfirmMenu; // x20
  System_Action_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2

  if ( (byte_4189F8F & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isDecide);
    sub_B2C35C(&Method_ServantFramePurchaseMenu_EndCloseBuyFrameConfirmPurchase__, v4);
    byte_4189F8F = 1;
  }
  purchaseConfirmMenu = this->fields.purchaseConfirmMenu;
  v6 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_ServantFramePurchaseMenu_EndCloseBuyFrameConfirmPurchase__, 0LL);
  if ( !purchaseConfirmMenu )
    sub_B2C434(v7, v8);
  ServantFramePurchaseConfirmMenu__Close_29314140(purchaseConfirmMenu, v6, v9);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFramePurchaseMenu__EndBuyStoneConfirm(
        ServantFramePurchaseMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  CommonUI_o *Instance; // x20
  StonePurchaseMenu_CallbackFunc_o *v8; // x21
  ServantFramePurchaseConfirmMenu_o *purchaseConfirmMenu; // x0
  const MethodInfo *v10; // x2

  if ( (byte_4189F8A & 1) == 0 )
  {
    sub_B2C35C(&StonePurchaseMenu_CallbackFunc_TypeInfo, isDecide);
    sub_B2C35C(&Method_ServantFramePurchaseMenu_SelectedBuyBankItemConfirm__, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4189F8A = 1;
  }
  if ( isDecide )
  {
    this->fields.state = 5;
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v8 = (StonePurchaseMenu_CallbackFunc_o *)sub_B2C42C(StonePurchaseMenu_CallbackFunc_TypeInfo);
    StonePurchaseMenu_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_ServantFramePurchaseMenu_SelectedBuyBankItemConfirm__,
      0LL);
    if ( Instance )
    {
      CommonUI__OpenStonePurchaseMenu(Instance, v8, this->fields.refreshCallbackFunc, 0LL);
      return;
    }
LABEL_8:
    sub_B2C434(purchaseConfirmMenu, isDecide);
  }
  purchaseConfirmMenu = this->fields.purchaseConfirmMenu;
  if ( !purchaseConfirmMenu )
    goto LABEL_8;
  ServantFramePurchaseConfirmMenu__Close_29314140(purchaseConfirmMenu, 0LL, method);
  ServantFramePurchaseMenu__Callback(this, 0, v10);
}


void __fastcall ServantFramePurchaseMenu__EndCloseBuyFrameConfirmCancel(
        ServantFramePurchaseMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ServantFramePurchaseMenu__Callback(this, 0, v2);
}


void __fastcall ServantFramePurchaseMenu__EndCloseBuyFrameConfirmPurchase(
        ServantFramePurchaseMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ServantFramePurchaseMenu__Callback(this, 2, v2);
}


void __fastcall ServantFramePurchaseMenu__EndMaxFrameConfirm(
        ServantFramePurchaseMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ServantFramePurchaseConfirmMenu_o *purchaseConfirmMenu; // x0
  const MethodInfo *v5; // x2

  purchaseConfirmMenu = this->fields.purchaseConfirmMenu;
  if ( !purchaseConfirmMenu )
    sub_B2C434(0LL, isDecide);
  ServantFramePurchaseConfirmMenu__Close_29314140(purchaseConfirmMenu, 0LL, method);
  ServantFramePurchaseMenu__Callback(this, 0, v5);
}


void __fastcall ServantFramePurchaseMenu__EndNoShopConfirm(
        ServantFramePurchaseMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ServantFramePurchaseConfirmMenu_o *purchaseConfirmMenu; // x0
  const MethodInfo *v5; // x2

  purchaseConfirmMenu = this->fields.purchaseConfirmMenu;
  if ( !purchaseConfirmMenu )
    sub_B2C434(0LL, isDecide);
  ServantFramePurchaseConfirmMenu__Close_29314140(purchaseConfirmMenu, 0LL, method);
  ServantFramePurchaseMenu__Callback(this, 1, v5);
}


void __fastcall ServantFramePurchaseMenu__EndRequestServantFramePurchase(
        ServantFramePurchaseMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v4; // x1
  ServantFramePurchaseConfirmMenu_o *purchaseConfirmMenu; // x0
  ServantFramePurchaseConfirmMenu_o *v6; // x20
  StoneShopEntity_o *stoneShopEntity; // x21
  ServantFramePurchaseConfirmMenu_CallbackFunc_o *v8; // x22
  const MethodInfo *v9; // x4
  System_Action_o *refreshCallbackFunc; // x0

  if ( (byte_4189F8E & 1) == 0 )
  {
    sub_B2C35C(&ServantFramePurchaseConfirmMenu_CallbackFunc_TypeInfo, result);
    sub_B2C35C(&Method_ServantFramePurchaseMenu_EndBuyFrameResultConfirm__, v4);
    byte_4189F8E = 1;
  }
  purchaseConfirmMenu = this->fields.purchaseConfirmMenu;
  this->fields.state = 7;
  if ( !purchaseConfirmMenu
    || (ServantFramePurchaseConfirmMenu__Init(purchaseConfirmMenu, (const MethodInfo *)result),
        v6 = this->fields.purchaseConfirmMenu,
        stoneShopEntity = this->fields.stoneShopEntity,
        v8 = (ServantFramePurchaseConfirmMenu_CallbackFunc_o *)sub_B2C42C(ServantFramePurchaseConfirmMenu_CallbackFunc_TypeInfo),
        ServantFramePurchaseConfirmMenu_CallbackFunc___ctor(
          v8,
          (Il2CppObject *)this,
          Method_ServantFramePurchaseMenu_EndBuyFrameResultConfirm__,
          0LL),
        !v6) )
  {
    sub_B2C434(purchaseConfirmMenu, result);
  }
  ServantFramePurchaseConfirmMenu__Open(v6, 2, stoneShopEntity, v8, v9);
  refreshCallbackFunc = this->fields.refreshCallbackFunc;
  if ( refreshCallbackFunc )
    System_Action__Invoke(refreshCallbackFunc, 0LL);
}


void __fastcall ServantFramePurchaseMenu__Open(
        ServantFramePurchaseMenu_o *this,
        ServantFramePurchaseMenu_CallbackFunc_o *callback,
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
  void *gameObject; // x0
  __int64 v25; // x1
  UserGameEntity_o *SelfUserGame; // x20
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  __int64 v33; // x8
  struct StoneShopEntity_o *v34; // x1
  int32_t svtKeep; // w22
  struct StoneShopEntity_o *stoneShopEntity; // x21
  struct ServantFramePurchaseConfirmMenu_o *v37; // x20
  ServantFramePurchaseConfirmMenu_CallbackFunc_o *v38; // x22
  const MethodInfo *v39; // x4
  int32_t v40; // w1
  ServantFramePurchaseConfirmMenu_o *v41; // x0
  struct ServantFramePurchaseConfirmMenu_o *v42; // x20
  ServantFramePurchaseConfirmMenu_CallbackFunc_o *v43; // x21
  StoneShopEntity_o *v44; // x2
  ServantFramePurchaseConfirmMenu_CallbackFunc_o *v45; // x3
  struct ServantFramePurchaseConfirmMenu_o *purchaseConfirmMenu; // x20
  __int64 v47; // x0

  if ( (byte_4189F89 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, callback);
    sub_B2C35C(&ServantFramePurchaseConfirmMenu_CallbackFunc_TypeInfo, v11);
    sub_B2C35C(&Method_DataManager_GetMasterData_StoneShopMaster___, v12);
    sub_B2C35C(&Method_ServantFramePurchaseMenu_EndBuyFrameConfirm__, v13);
    sub_B2C35C(&Method_ServantFramePurchaseMenu_EndBuyStoneConfirm__, v14);
    sub_B2C35C(&Method_ServantFramePurchaseMenu_EndMaxFrameConfirm__, v15);
    sub_B2C35C(&Method_ServantFramePurchaseMenu_EndNoShopConfirm__, v16);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    byte_4189F89 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callbackFunc = callback;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callback,
      (System_String_array **)refreshCallback,
      (System_String_array **)method,
      v4,
      v5,
      v6,
      v7);
    this->fields.refreshCallbackFunc = refreshCallback;
    sub_B2C2F8(
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
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    gameObject = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_28;
    gameObject = DataManager__GetMasterData_WarQuestSelectionMaster_(
                   (DataManager_o *)gameObject,
                   (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_StoneShopMaster___);
    if ( !gameObject )
      goto LABEL_28;
    gameObject = StoneShopMaster__GetEnableEntitiyList_20878924((StoneShopMaster_o *)gameObject, 12, 0LL);
    if ( !gameObject )
      goto LABEL_28;
    v33 = *((_QWORD *)gameObject + 3);
    if ( v33 )
    {
      if ( !(_DWORD)v33 )
      {
        v47 = sub_B2C460(gameObject);
        sub_B2C400(v47, 0LL);
      }
      v34 = (struct StoneShopEntity_o *)*((_QWORD *)gameObject + 4);
      this->fields.stoneShopEntity = v34;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.stoneShopEntity,
        (System_Int32_array **)v34,
        v27,
        v28,
        v29,
        v30,
        v31,
        v32);
      if ( !SelfUserGame )
        goto LABEL_28;
      svtKeep = SelfUserGame->fields.svtKeep;
      gameObject = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        gameObject = BalanceConfig_TypeInfo;
      }
      if ( svtKeep < *(_DWORD *)(*((_QWORD *)gameObject + 23) + 136LL) )
      {
        stoneShopEntity = this->fields.stoneShopEntity;
        if ( stoneShopEntity )
        {
          if ( SelfUserGame->fields.stone >= stoneShopEntity->fields.price )
          {
            this->fields.state = 3;
            purchaseConfirmMenu = this->fields.purchaseConfirmMenu;
            v38 = (ServantFramePurchaseConfirmMenu_CallbackFunc_o *)sub_B2C42C(ServantFramePurchaseConfirmMenu_CallbackFunc_TypeInfo);
            ServantFramePurchaseConfirmMenu_CallbackFunc___ctor(
              v38,
              (Il2CppObject *)this,
              Method_ServantFramePurchaseMenu_EndBuyFrameConfirm__,
              0LL);
            if ( purchaseConfirmMenu )
            {
              v41 = purchaseConfirmMenu;
              v40 = 0;
              goto LABEL_26;
            }
          }
          else
          {
            this->fields.state = 4;
            v37 = this->fields.purchaseConfirmMenu;
            v38 = (ServantFramePurchaseConfirmMenu_CallbackFunc_o *)sub_B2C42C(ServantFramePurchaseConfirmMenu_CallbackFunc_TypeInfo);
            ServantFramePurchaseConfirmMenu_CallbackFunc___ctor(
              v38,
              (Il2CppObject *)this,
              Method_ServantFramePurchaseMenu_EndBuyStoneConfirm__,
              0LL);
            if ( v37 )
            {
              v40 = 1;
              v41 = v37;
LABEL_26:
              v44 = stoneShopEntity;
              v45 = v38;
              goto LABEL_27;
            }
          }
        }
LABEL_28:
        sub_B2C434(gameObject, v25);
      }
      this->fields.state = 2;
      v42 = this->fields.purchaseConfirmMenu;
      v43 = (ServantFramePurchaseConfirmMenu_CallbackFunc_o *)sub_B2C42C(ServantFramePurchaseConfirmMenu_CallbackFunc_TypeInfo);
      ServantFramePurchaseConfirmMenu_CallbackFunc___ctor(
        v43,
        (Il2CppObject *)this,
        Method_ServantFramePurchaseMenu_EndMaxFrameConfirm__,
        0LL);
      if ( !v42 )
        goto LABEL_28;
      v40 = 3;
    }
    else
    {
      this->fields.state = 1;
      v42 = this->fields.purchaseConfirmMenu;
      v43 = (ServantFramePurchaseConfirmMenu_CallbackFunc_o *)sub_B2C42C(ServantFramePurchaseConfirmMenu_CallbackFunc_TypeInfo);
      ServantFramePurchaseConfirmMenu_CallbackFunc___ctor(
        v43,
        (Il2CppObject *)this,
        Method_ServantFramePurchaseMenu_EndNoShopConfirm__,
        0LL);
      if ( !v42 )
        goto LABEL_28;
      v40 = 4;
    }
    v41 = v42;
    v44 = 0LL;
    v45 = v43;
LABEL_27:
    ServantFramePurchaseConfirmMenu__Open(v41, v40, v44, v45, v39);
  }
}


void __fastcall ServantFramePurchaseMenu__RequestServantFramePurchase(
        ServantFramePurchaseMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  NetworkManager_ResultCallbackFunc_o *v7; // x20
  PurchaseByStoneRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v9; // x1
  struct StoneShopEntity_o *stoneShopEntity; // x8

  if ( (byte_4189F8D & 1) == 0 )
  {
    sub_B2C35C(&Method_NetworkManager_getRequest_PurchaseByStoneRequest___, method);
    sub_B2C35C(&NetworkManager_TypeInfo, v4);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    sub_B2C35C(&Method_ServantFramePurchaseMenu_EndRequestServantFramePurchase__, v6);
    byte_4189F8D = 1;
  }
  if ( this->fields.stoneShopEntity )
  {
    v7 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      Method_ServantFramePurchaseMenu_EndRequestServantFramePurchase__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = (PurchaseByStoneRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                      v7,
                                                                      (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_PurchaseByStoneRequest___);
    stoneShopEntity = this->fields.stoneShopEntity;
    if ( !stoneShopEntity || !Request_WarBoardWallAttackRequest )
      sub_B2C434(Request_WarBoardWallAttackRequest, v9);
    PurchaseByStoneRequest__beginRequest(Request_WarBoardWallAttackRequest, stoneShopEntity->fields.id, 1, 0LL);
  }
  else
  {
    ServantFramePurchaseMenu__Callback(this, 1, v2);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFramePurchaseMenu__SelectedBuyBankItemConfirm(
        ServantFramePurchaseMenu_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  CommonUI_o *Instance; // x0
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x2
  struct ServantFramePurchaseConfirmMenu_o *purchaseConfirmMenu; // x20
  struct StoneShopEntity_o *stoneShopEntity; // x21
  ServantFramePurchaseConfirmMenu_CallbackFunc_o *v13; // x22
  const MethodInfo *v14; // x4
  int32_t v15; // w1
  ServantFramePurchaseConfirmMenu_o *v16; // x0
  StoneShopEntity_o *v17; // x2
  ServantFramePurchaseMenu_o *v18; // x0
  int32_t v19; // w1
  struct ServantFramePurchaseConfirmMenu_o *v20; // x21
  struct StoneShopEntity_o *v21; // x20

  if ( (byte_4189F8B & 1) == 0 )
  {
    sub_B2C35C(&ServantFramePurchaseConfirmMenu_CallbackFunc_TypeInfo, *(_QWORD *)&result);
    sub_B2C35C(&Method_ServantFramePurchaseMenu_EndBuyFrameConfirm__, v5);
    sub_B2C35C(&Method_ServantFramePurchaseMenu_EndBuyStoneConfirm__, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_4189F8B = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
LABEL_15:
    sub_B2C434(Instance, v9);
  CommonUI__CloseStonePurchaseMenu(Instance, 0LL);
  switch ( result )
  {
    case 0:
    case 4:
      Instance = (CommonUI_o *)this->fields.purchaseConfirmMenu;
      this->fields.state = 4;
      if ( !Instance )
        goto LABEL_15;
      ServantFramePurchaseConfirmMenu__Init((ServantFramePurchaseConfirmMenu_o *)Instance, v9);
      purchaseConfirmMenu = this->fields.purchaseConfirmMenu;
      stoneShopEntity = this->fields.stoneShopEntity;
      v13 = (ServantFramePurchaseConfirmMenu_CallbackFunc_o *)sub_B2C42C(ServantFramePurchaseConfirmMenu_CallbackFunc_TypeInfo);
      ServantFramePurchaseConfirmMenu_CallbackFunc___ctor(
        v13,
        (Il2CppObject *)this,
        Method_ServantFramePurchaseMenu_EndBuyStoneConfirm__,
        0LL);
      if ( !purchaseConfirmMenu )
        goto LABEL_15;
      v15 = 1;
      v16 = purchaseConfirmMenu;
      v17 = stoneShopEntity;
      goto LABEL_14;
    case 1:
      v19 = 1;
      v18 = this;
      goto LABEL_10;
    case 2:
      Instance = (CommonUI_o *)this->fields.purchaseConfirmMenu;
      this->fields.state = 3;
      if ( !Instance )
        goto LABEL_15;
      ServantFramePurchaseConfirmMenu__Init((ServantFramePurchaseConfirmMenu_o *)Instance, v9);
      v20 = this->fields.purchaseConfirmMenu;
      v21 = this->fields.stoneShopEntity;
      v13 = (ServantFramePurchaseConfirmMenu_CallbackFunc_o *)sub_B2C42C(ServantFramePurchaseConfirmMenu_CallbackFunc_TypeInfo);
      ServantFramePurchaseConfirmMenu_CallbackFunc___ctor(
        v13,
        (Il2CppObject *)this,
        Method_ServantFramePurchaseMenu_EndBuyFrameConfirm__,
        0LL);
      if ( !v20 )
        goto LABEL_15;
      v16 = v20;
      v15 = 0;
      v17 = v21;
LABEL_14:
      ServantFramePurchaseConfirmMenu__Open(v16, v15, v17, v13, v14);
      break;
    case 3:
      v18 = this;
      v19 = 0;
LABEL_10:
      ServantFramePurchaseMenu__Callback(v18, v19, v10);
      break;
    default:
      return;
  }
}


void __fastcall ServantFramePurchaseMenu__add_callbackFunc(
        ServantFramePurchaseMenu_o *this,
        ServantFramePurchaseMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ServantFramePurchaseMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ServantFramePurchaseMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ServantFramePurchaseMenu_o *v11; // x0
  ServantFramePurchaseMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4189F87 & 1) == 0 )
  {
    sub_B2C35C(&ServantFramePurchaseMenu_CallbackFunc_TypeInfo, value);
    byte_4189F87 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (ServantFramePurchaseMenu_CallbackFunc_c *)v8->klass != ServantFramePurchaseMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B2C728(v8);
  ServantFramePurchaseMenu__remove_callbackFunc(v11, v12, v13);
}


void __fastcall ServantFramePurchaseMenu__remove_callbackFunc(
        ServantFramePurchaseMenu_o *this,
        ServantFramePurchaseMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ServantFramePurchaseMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ServantFramePurchaseMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ServantFramePurchaseMenu_o *v11; // x0
  ServantFramePurchaseMenu_CallbackFunc_o *v12; // x1
  System_Action_o *v13; // x2
  const MethodInfo *v14; // x3

  if ( (byte_4189F88 & 1) == 0 )
  {
    sub_B2C35C(&ServantFramePurchaseMenu_CallbackFunc_TypeInfo, value);
    byte_4189F88 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (ServantFramePurchaseMenu_CallbackFunc_c *)v8->klass != ServantFramePurchaseMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B2C728(v8);
  ServantFramePurchaseMenu__Open(v11, v12, v13, v14);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFramePurchaseMenu_CallbackFunc___ctor(
        ServantFramePurchaseMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B2C2F8(p_method, object);
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall ServantFramePurchaseMenu_CallbackFunc__BeginInvoke(
        ServantFramePurchaseMenu_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-24h] BYREF

  v10 = result;
  if ( (byte_41853ED & 1) == 0 )
  {
    sub_B2C35C(&ServantFramePurchaseMenu_Result_TypeInfo, *(_QWORD *)&result);
    byte_41853ED = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(ServantFramePurchaseMenu_Result_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B2C300(this, v9, callback, object);
}


void __fastcall ServantFramePurchaseMenu_CallbackFunc__EndInvoke(
        ServantFramePurchaseMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFramePurchaseMenu_CallbackFunc__Invoke(
        ServantFramePurchaseMenu_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v6; // x24
  ServantFramePurchaseMenu_CallbackFunc_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w23
  __int64 class_0; // x0
  __int64 v11; // x3
  __int64 v12; // x8
  unsigned int v13; // w22
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, _QWORD, _QWORD); // x0
  ServantFramePurchaseMenu_CallbackFunc_o *v20; // x8
  __int64 *v21; // x21
  __int64 v22; // x22
  void (__fastcall *v23)(unsigned int *, __int64); // x23
  char v24; // w23
  char v25; // w0
  __int64 v26; // x3
  unsigned int v27; // w23
  __int64 v28; // x8
  __int64 v29; // x1
  __int64 v30; // x2
  unsigned __int64 v31; // x10
  _DWORD *v32; // x11
  unsigned int v33; // [xsp+4h] [xbp-4Ch] BYREF
  ServantFramePurchaseMenu_CallbackFunc_o *v34; // [xsp+8h] [xbp-48h] BYREF

  v34 = this;
  v33 = result;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v7 = &v34;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v4 + 24);
  if ( v6 )
  {
    v7 = (ServantFramePurchaseMenu_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v20 = v7[v8];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(unsigned int *, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v20->fields.extra_arg, *(_QWORD *)&result, method, v3);
      if ( (sub_B2C38C(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 1 )
        goto LABEL_36;
      v23((unsigned int *)v33, v22);
LABEL_38:
      if ( ++v8 == v6 )
        return;
    }
    if ( !v21 )
    {
      v23(&v33 - 4, v22);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B2C384(v22);
      v25 = sub_B2C788(v22);
      if ( (v24 & 1) != 0 )
      {
        v27 = v33;
        if ( (v25 & 1) != 0 )
        {
          v28 = *v21;
          v29 = *(_QWORD *)(v22 + 24);
          v30 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v31 = 0LL;
            v32 = (_DWORD *)(*(_QWORD *)(v28 + 176) + 8LL);
            while ( *((_QWORD *)v32 - 1) != v29 )
            {
              ++v31;
              v32 += 4;
              if ( v31 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v28 + 16LL * (*v32 + (int)v30) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_AC5258(v21, v29, v30, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B2C40C(v17, v22);
        (*v19)(v21, v27, v19);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v12 = *v21;
          v13 = v33;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v12 + 16LL * (int)(*v15 + v9) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AC5258(v21, class_0, v9, v11);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))v16)(v21, v13, *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            v33,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, __int64))v23)(v21, v33, v22);
    goto LABEL_38;
  }
}