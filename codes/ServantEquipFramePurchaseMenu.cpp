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
  sub_B70630(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
  if ( callbackFunc )
    ServantEquipFramePurchaseMenu_CallbackFunc__Invoke(v9, result, 0LL);
}


void __fastcall ServantEquipFramePurchaseMenu__Close(ServantEquipFramePurchaseMenu_o *this, const MethodInfo *method)
{
  ServantEquipFramePurchaseConfirmMenu_o *purchaseConfirmMenu; // x0
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
      || (ServantEquipFramePurchaseConfirmMenu__Init(purchaseConfirmMenu, method),
          (purchaseConfirmMenu = (ServantEquipFramePurchaseConfirmMenu_o *)UnityEngine_Component__get_gameObject(
                                                                             (UnityEngine_Component_o *)this,
                                                                             0LL)) == 0LL) )
    {
      sub_B7076C(purchaseConfirmMenu, method);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)purchaseConfirmMenu, 0, 0LL);
    this->fields.stoneShopEntity = 0LL;
    sub_B70630((BattleServantConfConponent_o *)&this->fields.stoneShopEntity, 0LL, v4, v5, v6, v7, v8, v9);
    this->fields.refreshCallbackFunc = 0LL;
    p_refreshCallbackFunc = (BattleServantConfConponent_o *)&this->fields.refreshCallbackFunc;
    sub_B70630(p_refreshCallbackFunc, 0LL, v11, v12, v13, v14, v15, v16);
    p_refreshCallbackFunc->fields.m_CachedPtr = 0;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantEquipFramePurchaseMenu__EndBuyFrameConfirm(
        ServantEquipFramePurchaseMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ServantEquipFramePurchaseConfirmMenu_o *purchaseConfirmMenu; // x20
  System_Action_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2

  if ( (byte_43551AC & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_ServantEquipFramePurchaseMenu_EndCloseBuyFrameConfirmCancel__);
    byte_43551AC = 1;
  }
  if ( isDecide )
  {
    this->fields.state = 6;
    ServantEquipFramePurchaseMenu__RequestServantEquipFramePurchase(this, (const MethodInfo *)isDecide);
  }
  else
  {
    purchaseConfirmMenu = this->fields.purchaseConfirmMenu;
    v6 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(
      v6,
      (Il2CppObject *)this,
      Method_ServantEquipFramePurchaseMenu_EndCloseBuyFrameConfirmCancel__,
      0LL);
    if ( !purchaseConfirmMenu )
      sub_B7076C(v7, v8);
    ServantEquipFramePurchaseConfirmMenu__Close_31461080(purchaseConfirmMenu, v6, v9);
  }
}


void __fastcall ServantEquipFramePurchaseMenu__EndBuyFrameResultConfirm(
        ServantEquipFramePurchaseMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ServantEquipFramePurchaseConfirmMenu_o *purchaseConfirmMenu; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_43551AF & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_ServantEquipFramePurchaseMenu_EndCloseBuyFrameConfirmPurchase__);
    byte_43551AF = 1;
  }
  purchaseConfirmMenu = this->fields.purchaseConfirmMenu;
  v5 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(
    v5,
    (Il2CppObject *)this,
    Method_ServantEquipFramePurchaseMenu_EndCloseBuyFrameConfirmPurchase__,
    0LL);
  if ( !purchaseConfirmMenu )
    sub_B7076C(v6, v7);
  ServantEquipFramePurchaseConfirmMenu__Close_31461080(purchaseConfirmMenu, v5, v8);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantEquipFramePurchaseMenu__EndBuyStoneConfirm(
        ServantEquipFramePurchaseMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x20
  StonePurchaseMenu_CallbackFunc_o *v6; // x21
  ServantEquipFramePurchaseConfirmMenu_o *purchaseConfirmMenu; // x0
  const MethodInfo *v8; // x2

  if ( (byte_43551AA & 1) == 0 )
  {
    sub_B70694(&StonePurchaseMenu_CallbackFunc_TypeInfo);
    sub_B70694(&Method_ServantEquipFramePurchaseMenu_SelectedBuyBankItemConfirm__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_43551AA = 1;
  }
  if ( isDecide )
  {
    this->fields.state = 5;
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v6 = (StonePurchaseMenu_CallbackFunc_o *)sub_B70764(StonePurchaseMenu_CallbackFunc_TypeInfo);
    StonePurchaseMenu_CallbackFunc___ctor(
      v6,
      (Il2CppObject *)this,
      Method_ServantEquipFramePurchaseMenu_SelectedBuyBankItemConfirm__,
      0LL);
    if ( Instance )
    {
      CommonUI__OpenStonePurchaseMenu(Instance, v6, this->fields.refreshCallbackFunc, 0LL);
      return;
    }
LABEL_8:
    sub_B7076C(purchaseConfirmMenu, isDecide);
  }
  purchaseConfirmMenu = this->fields.purchaseConfirmMenu;
  if ( !purchaseConfirmMenu )
    goto LABEL_8;
  ServantEquipFramePurchaseConfirmMenu__Close_31461080(purchaseConfirmMenu, 0LL, method);
  ServantEquipFramePurchaseMenu__Callback(this, 0, v8);
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
    sub_B7076C(0LL, isDecide);
  ServantEquipFramePurchaseConfirmMenu__Close_31461080(purchaseConfirmMenu, 0LL, method);
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
    sub_B7076C(0LL, isDecide);
  ServantEquipFramePurchaseConfirmMenu__Close_31461080(purchaseConfirmMenu, 0LL, method);
  ServantEquipFramePurchaseMenu__Callback(this, 1, v5);
}


void __fastcall ServantEquipFramePurchaseMenu__EndRequestServantEquipFramePurchase(
        ServantEquipFramePurchaseMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  ServantEquipFramePurchaseConfirmMenu_o *purchaseConfirmMenu; // x0
  ServantEquipFramePurchaseConfirmMenu_o *v5; // x20
  StoneShopEntity_o *stoneShopEntity; // x21
  ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o *v7; // x22
  const MethodInfo *v8; // x4
  System_Action_o *refreshCallbackFunc; // x0

  if ( (byte_43551AE & 1) == 0 )
  {
    sub_B70694(&ServantEquipFramePurchaseConfirmMenu_CallbackFunc_TypeInfo);
    sub_B70694(&Method_ServantEquipFramePurchaseMenu_EndBuyFrameResultConfirm__);
    byte_43551AE = 1;
  }
  purchaseConfirmMenu = this->fields.purchaseConfirmMenu;
  this->fields.state = 7;
  if ( !purchaseConfirmMenu
    || (ServantEquipFramePurchaseConfirmMenu__Init(purchaseConfirmMenu, (const MethodInfo *)result),
        v5 = this->fields.purchaseConfirmMenu,
        stoneShopEntity = this->fields.stoneShopEntity,
        v7 = (ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o *)sub_B70764(ServantEquipFramePurchaseConfirmMenu_CallbackFunc_TypeInfo),
        ServantEquipFramePurchaseConfirmMenu_CallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_ServantEquipFramePurchaseMenu_EndBuyFrameResultConfirm__,
          0LL),
        !v5) )
  {
    sub_B7076C(purchaseConfirmMenu, result);
  }
  ServantEquipFramePurchaseConfirmMenu__Open(v5, 2, stoneShopEntity, v7, v8);
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
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  void *gameObject; // x0
  __int64 v18; // x1
  UserGameEntity_o *SelfUserGame; // x20
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  __int64 v26; // x8
  struct StoneShopEntity_o *v27; // x1
  int32_t svtEquipKeep; // w22
  struct StoneShopEntity_o *stoneShopEntity; // x21
  struct ServantEquipFramePurchaseConfirmMenu_o *v30; // x20
  ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o *v31; // x22
  const MethodInfo *v32; // x4
  int32_t v33; // w1
  ServantEquipFramePurchaseConfirmMenu_o *v34; // x0
  struct ServantEquipFramePurchaseConfirmMenu_o *v35; // x20
  ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o *v36; // x21
  StoneShopEntity_o *v37; // x2
  ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o *v38; // x3
  struct ServantEquipFramePurchaseConfirmMenu_o *purchaseConfirmMenu; // x20
  __int64 v40; // x0

  if ( (byte_43551A9 & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&ServantEquipFramePurchaseConfirmMenu_CallbackFunc_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_StoneShopMaster___);
    sub_B70694(&Method_ServantEquipFramePurchaseMenu_EndBuyFrameConfirm__);
    sub_B70694(&Method_ServantEquipFramePurchaseMenu_EndBuyStoneConfirm__);
    sub_B70694(&Method_ServantEquipFramePurchaseMenu_EndMaxFrameConfirm__);
    sub_B70694(&Method_ServantEquipFramePurchaseMenu_EndNoShopConfirm__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43551A9 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callbackFunc = callback;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callback,
      (System_String_array **)refreshCallback,
      (System_String_array **)method,
      v4,
      v5,
      v6,
      v7);
    this->fields.refreshCallbackFunc = refreshCallback;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.refreshCallbackFunc,
      (System_Int32_array **)refreshCallback,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_28;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    gameObject = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_28;
    gameObject = DataManager__GetMasterData_WarQuestSelectionMaster_(
                   (DataManager_o *)gameObject,
                   (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_StoneShopMaster___);
    if ( !gameObject )
      goto LABEL_28;
    gameObject = StoneShopMaster__GetEnableEntitiyList_23494388((StoneShopMaster_o *)gameObject, 13, 0LL);
    if ( !gameObject )
      goto LABEL_28;
    v26 = *((_QWORD *)gameObject + 3);
    if ( v26 )
    {
      if ( !(_DWORD)v26 )
      {
        v40 = sub_B70798(gameObject);
        sub_B70738(v40, 0LL);
      }
      v27 = (struct StoneShopEntity_o *)*((_QWORD *)gameObject + 4);
      this->fields.stoneShopEntity = v27;
      sub_B70630(
        (BattleServantConfConponent_o *)&this->fields.stoneShopEntity,
        (System_Int32_array **)v27,
        v20,
        v21,
        v22,
        v23,
        v24,
        v25);
      if ( !SelfUserGame )
        goto LABEL_28;
      svtEquipKeep = SelfUserGame->fields.svtEquipKeep;
      gameObject = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        gameObject = BalanceConfig_TypeInfo;
      }
      if ( svtEquipKeep < *(_DWORD *)(*((_QWORD *)gameObject + 23) + 140LL) )
      {
        stoneShopEntity = this->fields.stoneShopEntity;
        if ( stoneShopEntity )
        {
          if ( SelfUserGame->fields.stone >= stoneShopEntity->fields.price )
          {
            this->fields.state = 3;
            purchaseConfirmMenu = this->fields.purchaseConfirmMenu;
            v31 = (ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o *)sub_B70764(ServantEquipFramePurchaseConfirmMenu_CallbackFunc_TypeInfo);
            ServantEquipFramePurchaseConfirmMenu_CallbackFunc___ctor(
              v31,
              (Il2CppObject *)this,
              Method_ServantEquipFramePurchaseMenu_EndBuyFrameConfirm__,
              0LL);
            if ( purchaseConfirmMenu )
            {
              v34 = purchaseConfirmMenu;
              v33 = 0;
              goto LABEL_26;
            }
          }
          else
          {
            this->fields.state = 4;
            v30 = this->fields.purchaseConfirmMenu;
            v31 = (ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o *)sub_B70764(ServantEquipFramePurchaseConfirmMenu_CallbackFunc_TypeInfo);
            ServantEquipFramePurchaseConfirmMenu_CallbackFunc___ctor(
              v31,
              (Il2CppObject *)this,
              Method_ServantEquipFramePurchaseMenu_EndBuyStoneConfirm__,
              0LL);
            if ( v30 )
            {
              v33 = 1;
              v34 = v30;
LABEL_26:
              v37 = stoneShopEntity;
              v38 = v31;
              goto LABEL_27;
            }
          }
        }
LABEL_28:
        sub_B7076C(gameObject, v18);
      }
      this->fields.state = 2;
      v35 = this->fields.purchaseConfirmMenu;
      v36 = (ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o *)sub_B70764(ServantEquipFramePurchaseConfirmMenu_CallbackFunc_TypeInfo);
      ServantEquipFramePurchaseConfirmMenu_CallbackFunc___ctor(
        v36,
        (Il2CppObject *)this,
        Method_ServantEquipFramePurchaseMenu_EndMaxFrameConfirm__,
        0LL);
      if ( !v35 )
        goto LABEL_28;
      v33 = 3;
    }
    else
    {
      this->fields.state = 1;
      v35 = this->fields.purchaseConfirmMenu;
      v36 = (ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o *)sub_B70764(ServantEquipFramePurchaseConfirmMenu_CallbackFunc_TypeInfo);
      ServantEquipFramePurchaseConfirmMenu_CallbackFunc___ctor(
        v36,
        (Il2CppObject *)this,
        Method_ServantEquipFramePurchaseMenu_EndNoShopConfirm__,
        0LL);
      if ( !v35 )
        goto LABEL_28;
      v33 = 4;
    }
    v34 = v35;
    v37 = 0LL;
    v38 = v36;
LABEL_27:
    ServantEquipFramePurchaseConfirmMenu__Open(v34, v33, v37, v38, v32);
  }
}


void __fastcall ServantEquipFramePurchaseMenu__RequestServantEquipFramePurchase(
        ServantEquipFramePurchaseMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  NetworkManager_ResultCallbackFunc_o *v4; // x20
  PurchaseByStoneRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v6; // x1
  struct StoneShopEntity_o *stoneShopEntity; // x8

  if ( (byte_43551AD & 1) == 0 )
  {
    sub_B70694(&Method_NetworkManager_getRequest_PurchaseByStoneRequest___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_B70694(&Method_ServantEquipFramePurchaseMenu_EndRequestServantEquipFramePurchase__);
    byte_43551AD = 1;
  }
  if ( this->fields.stoneShopEntity )
  {
    v4 = (NetworkManager_ResultCallbackFunc_o *)sub_B70764(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v4,
      (Il2CppObject *)this,
      Method_ServantEquipFramePurchaseMenu_EndRequestServantEquipFramePurchase__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = (PurchaseByStoneRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                      v4,
                                                                      (const MethodInfo_1D57A4C *)Method_NetworkManager_getRequest_PurchaseByStoneRequest___);
    stoneShopEntity = this->fields.stoneShopEntity;
    if ( !stoneShopEntity || !Request_WarBoardWallAttackRequest )
      sub_B7076C(Request_WarBoardWallAttackRequest, v6);
    PurchaseByStoneRequest__beginRequest(Request_WarBoardWallAttackRequest, stoneShopEntity->fields.id, 1, 0LL);
  }
  else
  {
    ServantEquipFramePurchaseMenu__Callback(this, 1, v2);
  }
}


void __fastcall ServantEquipFramePurchaseMenu__SelectedBuyBankItemConfirm(
        ServantEquipFramePurchaseMenu_o *this,
        int32_t result,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2
  struct ServantEquipFramePurchaseConfirmMenu_o *purchaseConfirmMenu; // x20
  struct StoneShopEntity_o *stoneShopEntity; // x21
  ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o *v10; // x22
  const MethodInfo *v11; // x4
  int32_t v12; // w1
  ServantEquipFramePurchaseConfirmMenu_o *v13; // x0
  StoneShopEntity_o *v14; // x2
  ServantEquipFramePurchaseMenu_o *v15; // x0
  int32_t v16; // w1
  struct ServantEquipFramePurchaseConfirmMenu_o *v17; // x21
  struct StoneShopEntity_o *v18; // x20

  if ( (byte_43551AB & 1) == 0 )
  {
    sub_B70694(&ServantEquipFramePurchaseConfirmMenu_CallbackFunc_TypeInfo);
    sub_B70694(&Method_ServantEquipFramePurchaseMenu_EndBuyFrameConfirm__);
    sub_B70694(&Method_ServantEquipFramePurchaseMenu_EndBuyStoneConfirm__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_43551AB = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
LABEL_15:
    sub_B7076C(Instance, v6);
  CommonUI__CloseStonePurchaseMenu(Instance, 0LL);
  switch ( result )
  {
    case 0:
    case 4:
      Instance = (CommonUI_o *)this->fields.purchaseConfirmMenu;
      this->fields.state = 4;
      if ( !Instance )
        goto LABEL_15;
      ServantEquipFramePurchaseConfirmMenu__Init((ServantEquipFramePurchaseConfirmMenu_o *)Instance, v6);
      purchaseConfirmMenu = this->fields.purchaseConfirmMenu;
      stoneShopEntity = this->fields.stoneShopEntity;
      v10 = (ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o *)sub_B70764(ServantEquipFramePurchaseConfirmMenu_CallbackFunc_TypeInfo);
      ServantEquipFramePurchaseConfirmMenu_CallbackFunc___ctor(
        v10,
        (Il2CppObject *)this,
        Method_ServantEquipFramePurchaseMenu_EndBuyStoneConfirm__,
        0LL);
      if ( !purchaseConfirmMenu )
        goto LABEL_15;
      v12 = 1;
      v13 = purchaseConfirmMenu;
      v14 = stoneShopEntity;
      goto LABEL_14;
    case 1:
      v16 = 1;
      v15 = this;
      goto LABEL_10;
    case 2:
      Instance = (CommonUI_o *)this->fields.purchaseConfirmMenu;
      this->fields.state = 3;
      if ( !Instance )
        goto LABEL_15;
      ServantEquipFramePurchaseConfirmMenu__Init((ServantEquipFramePurchaseConfirmMenu_o *)Instance, v6);
      v17 = this->fields.purchaseConfirmMenu;
      v18 = this->fields.stoneShopEntity;
      v10 = (ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o *)sub_B70764(ServantEquipFramePurchaseConfirmMenu_CallbackFunc_TypeInfo);
      ServantEquipFramePurchaseConfirmMenu_CallbackFunc___ctor(
        v10,
        (Il2CppObject *)this,
        Method_ServantEquipFramePurchaseMenu_EndBuyFrameConfirm__,
        0LL);
      if ( !v17 )
        goto LABEL_15;
      v13 = v17;
      v12 = 0;
      v14 = v18;
LABEL_14:
      ServantEquipFramePurchaseConfirmMenu__Open(v13, v12, v14, v10, v11);
      break;
    case 3:
      v15 = this;
      v16 = 0;
LABEL_10:
      ServantEquipFramePurchaseMenu__Callback(v15, v16, v7);
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

  if ( (byte_43551A7 & 1) == 0 )
  {
    sub_B70694(&ServantEquipFramePurchaseMenu_CallbackFunc_TypeInfo);
    byte_43551A7 = 1;
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
    v9 = sub_B650AC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B70A60(v8);
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

  if ( (byte_43551A8 & 1) == 0 )
  {
    sub_B70694(&ServantEquipFramePurchaseMenu_CallbackFunc_TypeInfo);
    byte_43551A8 = 1;
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
    v9 = sub_B650AC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B70A60(v8);
  ServantEquipFramePurchaseMenu__Open(v11, v12, v13, v14);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantEquipFramePurchaseMenu_CallbackFunc___ctor(
        ServantEquipFramePurchaseMenu_CallbackFunc_o *this,
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
  sub_B70630(p_method);
}


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
  if ( (byte_434F233 & 1) == 0 )
  {
    sub_B70694(&ServantEquipFramePurchaseMenu_Result_TypeInfo);
    byte_434F233 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(ServantEquipFramePurchaseMenu_Result_TypeInfo, &v10, callback);
  return (System_IAsyncResult_o *)sub_B70638(this, v9, callback, object);
}


void __fastcall ServantEquipFramePurchaseMenu_CallbackFunc__EndInvoke(
        ServantEquipFramePurchaseMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7063C(result, 0LL, method);
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
        sub_B70750(*(_QWORD *)&v18->fields.extra_arg, *(_QWORD *)&result);
      if ( (sub_B706C4(v20) & 1) == 0 )
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
      v22 = sub_B706BC(v20);
      v23 = sub_B70AC0(v20);
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
            v16 = sub_B08590(v19, v26, v27);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B70744(v15, v20);
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
            v14 = sub_B08590(v19, class_0, v8);
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