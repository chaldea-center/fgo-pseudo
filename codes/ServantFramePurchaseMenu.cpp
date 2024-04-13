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
  sub_B5D560(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
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
      sub_B5D69C(purchaseConfirmMenu, method);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)purchaseConfirmMenu, 0, 0LL);
    this->fields.stoneShopEntity = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.stoneShopEntity, 0LL, v4, v5, v6, v7, v8, v9);
    this->fields.refreshCallbackFunc = 0LL;
    p_refreshCallbackFunc = (BattleServantConfConponent_o *)&this->fields.refreshCallbackFunc;
    sub_B5D560(p_refreshCallbackFunc, 0LL, v11, v12, v13, v14, v15, v16);
    p_refreshCallbackFunc->fields.m_CachedPtr = 0;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFramePurchaseMenu__EndBuyFrameConfirm(
        ServantFramePurchaseMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  ServantFramePurchaseConfirmMenu_o *purchaseConfirmMenu; // x20
  System_Action_o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42EADA4 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&Method_ServantFramePurchaseMenu_EndCloseBuyFrameConfirmCancel__, v6, v7, v8);
    byte_42EADA4 = 1;
  }
  if ( isDecide )
  {
    this->fields.state = 6;
    ServantFramePurchaseMenu__RequestServantFramePurchase(this, (const MethodInfo *)isDecide);
  }
  else
  {
    purchaseConfirmMenu = this->fields.purchaseConfirmMenu;
    v10 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v10,
      (Il2CppObject *)this,
      Method_ServantFramePurchaseMenu_EndCloseBuyFrameConfirmCancel__,
      0LL);
    if ( !purchaseConfirmMenu )
      sub_B5D69C(v11, v12);
    ServantFramePurchaseConfirmMenu__Close_29333220(purchaseConfirmMenu, v10, v13);
  }
}


void __fastcall ServantFramePurchaseMenu__EndBuyFrameResultConfirm(
        ServantFramePurchaseMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v5; // w1
  int v6; // w2
  __int64 v7; // x3
  ServantFramePurchaseConfirmMenu_o *purchaseConfirmMenu; // x20
  System_Action_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_42EADA7 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&Method_ServantFramePurchaseMenu_EndCloseBuyFrameConfirmPurchase__, v5, v6, v7);
    byte_42EADA7 = 1;
  }
  purchaseConfirmMenu = this->fields.purchaseConfirmMenu;
  v9 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_ServantFramePurchaseMenu_EndCloseBuyFrameConfirmPurchase__, 0LL);
  if ( !purchaseConfirmMenu )
    sub_B5D69C(v10, v11);
  ServantFramePurchaseConfirmMenu__Close_29333220(purchaseConfirmMenu, v9, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFramePurchaseMenu__EndBuyStoneConfirm(
        ServantFramePurchaseMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  CommonUI_o *Instance; // x20
  StonePurchaseMenu_CallbackFunc_o *v13; // x21
  ServantFramePurchaseConfirmMenu_o *purchaseConfirmMenu; // x0
  const MethodInfo *v15; // x2

  if ( (byte_42EADA2 & 1) == 0 )
  {
    sub_B5D5C4(&StonePurchaseMenu_CallbackFunc_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&Method_ServantFramePurchaseMenu_SelectedBuyBankItemConfirm__, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10, v11);
    byte_42EADA2 = 1;
  }
  if ( isDecide )
  {
    this->fields.state = 5;
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v13 = (StonePurchaseMenu_CallbackFunc_o *)sub_B5D694(StonePurchaseMenu_CallbackFunc_TypeInfo);
    StonePurchaseMenu_CallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      Method_ServantFramePurchaseMenu_SelectedBuyBankItemConfirm__,
      0LL);
    if ( Instance )
    {
      CommonUI__OpenStonePurchaseMenu(Instance, v13, this->fields.refreshCallbackFunc, 0LL);
      return;
    }
LABEL_8:
    sub_B5D69C(purchaseConfirmMenu, isDecide);
  }
  purchaseConfirmMenu = this->fields.purchaseConfirmMenu;
  if ( !purchaseConfirmMenu )
    goto LABEL_8;
  ServantFramePurchaseConfirmMenu__Close_29333220(purchaseConfirmMenu, 0LL, method);
  ServantFramePurchaseMenu__Callback(this, 0, v15);
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
    sub_B5D69C(0LL, isDecide);
  ServantFramePurchaseConfirmMenu__Close_29333220(purchaseConfirmMenu, 0LL, method);
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
    sub_B5D69C(0LL, isDecide);
  ServantFramePurchaseConfirmMenu__Close_29333220(purchaseConfirmMenu, 0LL, method);
  ServantFramePurchaseMenu__Callback(this, 1, v5);
}


void __fastcall ServantFramePurchaseMenu__EndRequestServantFramePurchase(
        ServantFramePurchaseMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  ServantFramePurchaseConfirmMenu_o *purchaseConfirmMenu; // x0
  ServantFramePurchaseConfirmMenu_o *v9; // x20
  StoneShopEntity_o *stoneShopEntity; // x21
  ServantFramePurchaseConfirmMenu_CallbackFunc_o *v11; // x22
  const MethodInfo *v12; // x4
  System_Action_o *refreshCallbackFunc; // x0

  if ( (byte_42EADA6 & 1) == 0 )
  {
    sub_B5D5C4(&ServantFramePurchaseConfirmMenu_CallbackFunc_TypeInfo, (_DWORD)result, (_DWORD)method, v3);
    sub_B5D5C4(&Method_ServantFramePurchaseMenu_EndBuyFrameResultConfirm__, v5, v6, v7);
    byte_42EADA6 = 1;
  }
  purchaseConfirmMenu = this->fields.purchaseConfirmMenu;
  this->fields.state = 7;
  if ( !purchaseConfirmMenu
    || (ServantFramePurchaseConfirmMenu__Init(purchaseConfirmMenu, (const MethodInfo *)result),
        v9 = this->fields.purchaseConfirmMenu,
        stoneShopEntity = this->fields.stoneShopEntity,
        v11 = (ServantFramePurchaseConfirmMenu_CallbackFunc_o *)sub_B5D694(ServantFramePurchaseConfirmMenu_CallbackFunc_TypeInfo),
        ServantFramePurchaseConfirmMenu_CallbackFunc___ctor(
          v11,
          (Il2CppObject *)this,
          Method_ServantFramePurchaseMenu_EndBuyFrameResultConfirm__,
          0LL),
        !v9) )
  {
    sub_B5D69C(purchaseConfirmMenu, result);
  }
  ServantFramePurchaseConfirmMenu__Open(v9, 2, stoneShopEntity, v11, v12);
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
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  void *gameObject; // x0
  __int64 v39; // x1
  UserGameEntity_o *SelfUserGame; // x20
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  __int64 v47; // x8
  struct StoneShopEntity_o *v48; // x1
  int32_t svtKeep; // w22
  struct StoneShopEntity_o *stoneShopEntity; // x21
  struct ServantFramePurchaseConfirmMenu_o *v51; // x20
  ServantFramePurchaseConfirmMenu_CallbackFunc_o *v52; // x22
  const MethodInfo *v53; // x4
  int32_t v54; // w1
  ServantFramePurchaseConfirmMenu_o *v55; // x0
  struct ServantFramePurchaseConfirmMenu_o *v56; // x20
  ServantFramePurchaseConfirmMenu_CallbackFunc_o *v57; // x21
  StoneShopEntity_o *v58; // x2
  ServantFramePurchaseConfirmMenu_CallbackFunc_o *v59; // x3
  struct ServantFramePurchaseConfirmMenu_o *purchaseConfirmMenu; // x20
  __int64 v61; // x0

  if ( (byte_42EADA1 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)callback, (_DWORD)refreshCallback, method);
    sub_B5D5C4(&ServantFramePurchaseConfirmMenu_CallbackFunc_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_DataManager_GetMasterData_StoneShopMaster___, v14, v15, v16);
    sub_B5D5C4(&Method_ServantFramePurchaseMenu_EndBuyFrameConfirm__, v17, v18, v19);
    sub_B5D5C4(&Method_ServantFramePurchaseMenu_EndBuyStoneConfirm__, v20, v21, v22);
    sub_B5D5C4(&Method_ServantFramePurchaseMenu_EndMaxFrameConfirm__, v23, v24, v25);
    sub_B5D5C4(&Method_ServantFramePurchaseMenu_EndNoShopConfirm__, v26, v27, v28);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29, v30, v31);
    byte_42EADA1 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callbackFunc = callback;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callback,
      (System_String_array **)refreshCallback,
      (System_String_array **)method,
      v4,
      v5,
      v6,
      v7);
    this->fields.refreshCallbackFunc = refreshCallback;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.refreshCallbackFunc,
      (System_Int32_array **)refreshCallback,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_28;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    gameObject = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_28;
    gameObject = DataManager__GetMasterData_WarQuestSelectionMaster_(
                   (DataManager_o *)gameObject,
                   (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_StoneShopMaster___);
    if ( !gameObject )
      goto LABEL_28;
    gameObject = StoneShopMaster__GetEnableEntitiyList_23586212((StoneShopMaster_o *)gameObject, 12, 0LL);
    if ( !gameObject )
      goto LABEL_28;
    v47 = *((_QWORD *)gameObject + 3);
    if ( v47 )
    {
      if ( !(_DWORD)v47 )
      {
        v61 = sub_B5D6C8(gameObject);
        sub_B5D668(v61, 0LL);
      }
      v48 = (struct StoneShopEntity_o *)*((_QWORD *)gameObject + 4);
      this->fields.stoneShopEntity = v48;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.stoneShopEntity,
        (System_Int32_array **)v48,
        v41,
        v42,
        v43,
        v44,
        v45,
        v46);
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
            v52 = (ServantFramePurchaseConfirmMenu_CallbackFunc_o *)sub_B5D694(ServantFramePurchaseConfirmMenu_CallbackFunc_TypeInfo);
            ServantFramePurchaseConfirmMenu_CallbackFunc___ctor(
              v52,
              (Il2CppObject *)this,
              Method_ServantFramePurchaseMenu_EndBuyFrameConfirm__,
              0LL);
            if ( purchaseConfirmMenu )
            {
              v55 = purchaseConfirmMenu;
              v54 = 0;
              goto LABEL_26;
            }
          }
          else
          {
            this->fields.state = 4;
            v51 = this->fields.purchaseConfirmMenu;
            v52 = (ServantFramePurchaseConfirmMenu_CallbackFunc_o *)sub_B5D694(ServantFramePurchaseConfirmMenu_CallbackFunc_TypeInfo);
            ServantFramePurchaseConfirmMenu_CallbackFunc___ctor(
              v52,
              (Il2CppObject *)this,
              Method_ServantFramePurchaseMenu_EndBuyStoneConfirm__,
              0LL);
            if ( v51 )
            {
              v54 = 1;
              v55 = v51;
LABEL_26:
              v58 = stoneShopEntity;
              v59 = v52;
              goto LABEL_27;
            }
          }
        }
LABEL_28:
        sub_B5D69C(gameObject, v39);
      }
      this->fields.state = 2;
      v56 = this->fields.purchaseConfirmMenu;
      v57 = (ServantFramePurchaseConfirmMenu_CallbackFunc_o *)sub_B5D694(ServantFramePurchaseConfirmMenu_CallbackFunc_TypeInfo);
      ServantFramePurchaseConfirmMenu_CallbackFunc___ctor(
        v57,
        (Il2CppObject *)this,
        Method_ServantFramePurchaseMenu_EndMaxFrameConfirm__,
        0LL);
      if ( !v56 )
        goto LABEL_28;
      v54 = 3;
    }
    else
    {
      this->fields.state = 1;
      v56 = this->fields.purchaseConfirmMenu;
      v57 = (ServantFramePurchaseConfirmMenu_CallbackFunc_o *)sub_B5D694(ServantFramePurchaseConfirmMenu_CallbackFunc_TypeInfo);
      ServantFramePurchaseConfirmMenu_CallbackFunc___ctor(
        v57,
        (Il2CppObject *)this,
        Method_ServantFramePurchaseMenu_EndNoShopConfirm__,
        0LL);
      if ( !v56 )
        goto LABEL_28;
      v54 = 4;
    }
    v55 = v56;
    v58 = 0LL;
    v59 = v57;
LABEL_27:
    ServantFramePurchaseConfirmMenu__Open(v55, v54, v58, v59, v53);
  }
}


void __fastcall ServantFramePurchaseMenu__RequestServantFramePurchase(
        ServantFramePurchaseMenu_o *this,
        const MethodInfo *method)
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
  NetworkManager_ResultCallbackFunc_o *v14; // x20
  PurchaseByStoneRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v16; // x1
  struct StoneShopEntity_o *stoneShopEntity; // x8

  if ( (byte_42EADA5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_NetworkManager_getRequest_PurchaseByStoneRequest___, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_ServantFramePurchaseMenu_EndRequestServantFramePurchase__, v11, v12, v13);
    byte_42EADA5 = 1;
  }
  if ( this->fields.stoneShopEntity )
  {
    v14 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v14,
      (Il2CppObject *)this,
      Method_ServantFramePurchaseMenu_EndRequestServantFramePurchase__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = (PurchaseByStoneRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                      v14,
                                                                      (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_PurchaseByStoneRequest___);
    stoneShopEntity = this->fields.stoneShopEntity;
    if ( !stoneShopEntity || !Request_WarBoardWallAttackRequest )
      sub_B5D69C(Request_WarBoardWallAttackRequest, v16);
    PurchaseByStoneRequest__beginRequest(Request_WarBoardWallAttackRequest, stoneShopEntity->fields.id, 1, 0LL);
  }
  else
  {
    ServantFramePurchaseMenu__Callback(this, 1, v2);
  }
}


void __fastcall ServantFramePurchaseMenu__SelectedBuyBankItemConfirm(
        ServantFramePurchaseMenu_o *this,
        int32_t result,
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
  CommonUI_o *Instance; // x0
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x2
  struct ServantFramePurchaseConfirmMenu_o *purchaseConfirmMenu; // x20
  struct StoneShopEntity_o *stoneShopEntity; // x21
  ServantFramePurchaseConfirmMenu_CallbackFunc_o *v20; // x22
  const MethodInfo *v21; // x4
  int32_t v22; // w1
  ServantFramePurchaseConfirmMenu_o *v23; // x0
  StoneShopEntity_o *v24; // x2
  ServantFramePurchaseMenu_o *v25; // x0
  int32_t v26; // w1
  struct ServantFramePurchaseConfirmMenu_o *v27; // x21
  struct StoneShopEntity_o *v28; // x20

  if ( (byte_42EADA3 & 1) == 0 )
  {
    sub_B5D5C4(&ServantFramePurchaseConfirmMenu_CallbackFunc_TypeInfo, result, (_DWORD)method, v3);
    sub_B5D5C4(&Method_ServantFramePurchaseMenu_EndBuyFrameConfirm__, v6, v7, v8);
    sub_B5D5C4(&Method_ServantFramePurchaseMenu_EndBuyStoneConfirm__, v9, v10, v11);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12, v13, v14);
    byte_42EADA3 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
LABEL_15:
    sub_B5D69C(Instance, v16);
  CommonUI__CloseStonePurchaseMenu(Instance, 0LL);
  switch ( result )
  {
    case 0:
    case 4:
      Instance = (CommonUI_o *)this->fields.purchaseConfirmMenu;
      this->fields.state = 4;
      if ( !Instance )
        goto LABEL_15;
      ServantFramePurchaseConfirmMenu__Init((ServantFramePurchaseConfirmMenu_o *)Instance, v16);
      purchaseConfirmMenu = this->fields.purchaseConfirmMenu;
      stoneShopEntity = this->fields.stoneShopEntity;
      v20 = (ServantFramePurchaseConfirmMenu_CallbackFunc_o *)sub_B5D694(ServantFramePurchaseConfirmMenu_CallbackFunc_TypeInfo);
      ServantFramePurchaseConfirmMenu_CallbackFunc___ctor(
        v20,
        (Il2CppObject *)this,
        Method_ServantFramePurchaseMenu_EndBuyStoneConfirm__,
        0LL);
      if ( !purchaseConfirmMenu )
        goto LABEL_15;
      v22 = 1;
      v23 = purchaseConfirmMenu;
      v24 = stoneShopEntity;
      goto LABEL_14;
    case 1:
      v26 = 1;
      v25 = this;
      goto LABEL_10;
    case 2:
      Instance = (CommonUI_o *)this->fields.purchaseConfirmMenu;
      this->fields.state = 3;
      if ( !Instance )
        goto LABEL_15;
      ServantFramePurchaseConfirmMenu__Init((ServantFramePurchaseConfirmMenu_o *)Instance, v16);
      v27 = this->fields.purchaseConfirmMenu;
      v28 = this->fields.stoneShopEntity;
      v20 = (ServantFramePurchaseConfirmMenu_CallbackFunc_o *)sub_B5D694(ServantFramePurchaseConfirmMenu_CallbackFunc_TypeInfo);
      ServantFramePurchaseConfirmMenu_CallbackFunc___ctor(
        v20,
        (Il2CppObject *)this,
        Method_ServantFramePurchaseMenu_EndBuyFrameConfirm__,
        0LL);
      if ( !v27 )
        goto LABEL_15;
      v23 = v27;
      v22 = 0;
      v24 = v28;
LABEL_14:
      ServantFramePurchaseConfirmMenu__Open(v23, v22, v24, v20, v21);
      break;
    case 3:
      v25 = this;
      v26 = 0;
LABEL_10:
      ServantFramePurchaseMenu__Callback(v25, v26, v17);
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
  __int64 v3; // x3
  struct ServantFramePurchaseMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct ServantFramePurchaseMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  ServantFramePurchaseMenu_o *v12; // x0
  ServantFramePurchaseMenu_CallbackFunc_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42EAD9F & 1) == 0 )
  {
    sub_B5D5C4(&ServantFramePurchaseMenu_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EAD9F = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Combine(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (ServantFramePurchaseMenu_CallbackFunc_c *)v9->klass != ServantFramePurchaseMenu_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_B5D990(v9);
  ServantFramePurchaseMenu__remove_callbackFunc(v12, v13, v14);
}


void __fastcall ServantFramePurchaseMenu__remove_callbackFunc(
        ServantFramePurchaseMenu_o *this,
        ServantFramePurchaseMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct ServantFramePurchaseMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct ServantFramePurchaseMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  ServantFramePurchaseMenu_o *v12; // x0
  ServantFramePurchaseMenu_CallbackFunc_o *v13; // x1
  System_Action_o *v14; // x2
  const MethodInfo *v15; // x3

  if ( (byte_42EADA0 & 1) == 0 )
  {
    sub_B5D5C4(&ServantFramePurchaseMenu_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EADA0 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Remove(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (ServantFramePurchaseMenu_CallbackFunc_c *)v9->klass != ServantFramePurchaseMenu_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_B5D990(v9);
  ServantFramePurchaseMenu__Open(v12, v13, v14, v15);
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
  sub_B5D560(p_method);
}


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
  if ( (byte_42E5D5F & 1) == 0 )
  {
    sub_B5D5C4(&ServantFramePurchaseMenu_Result_TypeInfo, result, (_DWORD)callback, object);
    byte_42E5D5F = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(ServantFramePurchaseMenu_Result_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B5D568(this, v9, callback, object);
}


void __fastcall ServantFramePurchaseMenu_CallbackFunc__EndInvoke(
        ServantFramePurchaseMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFramePurchaseMenu_CallbackFunc__Invoke(
        ServantFramePurchaseMenu_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v5; // x24
  ServantFramePurchaseMenu_CallbackFunc_o **v6; // x25
  __int64 v7; // x26
  unsigned int v8; // w23
  __int64 class_0; // x0
  __int64 v10; // x3
  __int64 v11; // x8
  unsigned int v12; // w22
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, _QWORD, _QWORD); // x0
  ServantFramePurchaseMenu_CallbackFunc_o *v19; // x8
  __int64 *v20; // x21
  __int64 v21; // x22
  void (__fastcall *v22)(unsigned int *, __int64); // x23
  char v23; // w23
  char v24; // w0
  __int64 v25; // x3
  unsigned int v26; // w23
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  unsigned int v32; // [xsp+4h] [xbp-4Ch] BYREF
  ServantFramePurchaseMenu_CallbackFunc_o *v33; // [xsp+8h] [xbp-48h] BYREF

  v33 = this;
  v32 = result;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v6 = &v33;
    v5 = 1LL;
    goto LABEL_5;
  }
  v5 = *(_QWORD *)(v3 + 24);
  if ( v5 )
  {
    v6 = (ServantFramePurchaseMenu_CallbackFunc_o **)(v3 + 32);
LABEL_5:
    v7 = 0LL;
    while ( 1 )
    {
      v19 = v6[v7];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(unsigned int *, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v19->fields.extra_arg, *(_QWORD *)&result, method);
      if ( (sub_B5D5F4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22((unsigned int *)v32, v21);
LABEL_38:
      if ( ++v7 == v5 )
        return;
    }
    if ( !v20 )
    {
      v22(&v32 - 4, v21);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B5D5EC(v21);
      v24 = sub_B5D9F0(v21);
      if ( (v23 & 1) != 0 )
      {
        v26 = v32;
        if ( (v24 & 1) != 0 )
        {
          v27 = *v20;
          v28 = *(_QWORD *)(v21 + 24);
          v29 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AF54C0(v20, v28, v29, v25);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B5D674(v16, v21);
        (*v18)(v20, v26, v18);
      }
      else
      {
        v8 = *(unsigned __int16 *)(v21 + 72);
        if ( (v24 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v21);
          v11 = *v20;
          v12 = v32;
          if ( *(_WORD *)(*v20 + 298) )
          {
            v13 = 0LL;
            v14 = (_DWORD *)(*(_QWORD *)(v11 + 176) + 8LL);
            while ( *((_QWORD *)v14 - 1) != class_0 )
            {
              ++v13;
              v14 += 4;
              if ( v13 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_11;
            }
            v15 = v11 + 16LL * (int)(*v14 + v8) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AF54C0(v20, class_0, v8, v10);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))v15)(v20, v12, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            v32,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, __int64))v22)(v20, v32, v21);
    goto LABEL_38;
  }
}