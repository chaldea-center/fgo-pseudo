void __fastcall ServantFramePurchaseMenu___ctor(ServantFramePurchaseMenu_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall ServantFramePurchaseMenu__Callback(
        ServantFramePurchaseMenu_o *this,
        int32_t result,
        const MethodInfo *method)
{
  struct ServantFramePurchaseMenu_CallbackFunc_o **p_callbackFunc; // x0
  struct ServantFramePurchaseMenu_CallbackFunc_o *v4; // x20
  struct ServantFramePurchaseMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v4 = callbackFunc;
  *p_callbackFunc = 0LL;
  sub_1BCA784(p_callbackFunc, 0LL);
  if ( callbackFunc )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))v4->fields.m_target)(
      v4->fields.original_method_info,
      (unsigned int)result,
      *(_QWORD *)&v4->fields.extra_arg);
}


void __fastcall ServantFramePurchaseMenu__Close(ServantFramePurchaseMenu_o *this, const MethodInfo *method)
{
  ServantFramePurchaseConfirmMenu_o *purchaseConfirmMenu; // x0
  struct System_Action_o **p_refreshCallbackFunc; // x19

  if ( this->fields.state )
  {
    purchaseConfirmMenu = this->fields.purchaseConfirmMenu;
    if ( !purchaseConfirmMenu
      || (ServantFramePurchaseConfirmMenu__Init(purchaseConfirmMenu, method),
          (purchaseConfirmMenu = (ServantFramePurchaseConfirmMenu_o *)UnityEngine_Component__get_gameObject(
                                                                        (UnityEngine_Component_o *)this,
                                                                        0LL)) == 0LL) )
    {
      sub_1BCAA3C(purchaseConfirmMenu, method);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)purchaseConfirmMenu, 0, 0LL);
    this->fields.stoneShopEntity = 0LL;
    sub_1BCA784(&this->fields.stoneShopEntity, 0LL);
    this->fields.refreshCallbackFunc = 0LL;
    p_refreshCallbackFunc = &this->fields.refreshCallbackFunc;
    sub_1BCA784(p_refreshCallbackFunc, 0LL);
    *((_DWORD *)p_refreshCallbackFunc + 4) = 0;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFramePurchaseMenu__EndBuyFrameConfirm(
        ServantFramePurchaseMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  ServantFramePurchaseConfirmMenu_o *purchaseConfirmMenu; // x20
  System_Action_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2

  if ( (qword_4B11000 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, method);
    sub_1BCA7E0(&Method_ServantFramePurchaseMenu_EndCloseBuyFrameConfirmCancel__, v6, v7);
    LOBYTE(qword_4B11000) = 1;
  }
  if ( isDecide )
  {
    this->fields.state = 6;
    ServantFramePurchaseMenu__RequestServantFramePurchase(this, (const MethodInfo *)isDecide);
  }
  else
  {
    purchaseConfirmMenu = this->fields.purchaseConfirmMenu;
    v9 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, isDecide, method, v3);
    System_Action___ctor(v9, (Il2CppObject *)this, Method_ServantFramePurchaseMenu_EndCloseBuyFrameConfirmCancel__, 0LL);
    if ( !purchaseConfirmMenu )
      sub_1BCAA3C(v10, v11);
    ServantFramePurchaseConfirmMenu__Close_30933712(purchaseConfirmMenu, v9, v12);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFramePurchaseMenu__EndBuyFrameResultConfirm(
        ServantFramePurchaseMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  ServantFramePurchaseConfirmMenu_o *purchaseConfirmMenu; // x20
  System_Action_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2

  if ( (qword_4B11000 & 0x1000000) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, method);
    sub_1BCA7E0(&Method_ServantFramePurchaseMenu_EndCloseBuyFrameConfirmPurchase__, v5, v6);
    BYTE3(qword_4B11000) = 1;
  }
  purchaseConfirmMenu = this->fields.purchaseConfirmMenu;
  v8 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, isDecide, method, v3);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_ServantFramePurchaseMenu_EndCloseBuyFrameConfirmPurchase__, 0LL);
  if ( !purchaseConfirmMenu )
    sub_1BCAA3C(v9, v10);
  ServantFramePurchaseConfirmMenu__Close_30933712(purchaseConfirmMenu, v8, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFramePurchaseMenu__EndBuyStoneConfirm(
        ServantFramePurchaseMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Instance; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  StonePurchaseMenu_CallbackFunc_o *v13; // x21
  ServantFramePurchaseConfirmMenu_o *purchaseConfirmMenu; // x0
  const MethodInfo *v15; // x2

  if ( (byte_4B10FFE & 1) == 0 )
  {
    sub_1BCA7E0(&StonePurchaseMenu_CallbackFunc_TypeInfo, isDecide, method);
    sub_1BCA7E0(&Method_ServantFramePurchaseMenu_SelectedBuyBankItemConfirm__, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7, v8);
    byte_4B10FFE = 1;
  }
  if ( isDecide )
  {
    this->fields.state = 5;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v13 = (StonePurchaseMenu_CallbackFunc_o *)sub_1BCAA2C(StonePurchaseMenu_CallbackFunc_TypeInfo, v10, v11, v12);
    StonePurchaseMenu_CallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      Method_ServantFramePurchaseMenu_SelectedBuyBankItemConfirm__,
      0LL);
    if ( Instance )
    {
      CommonUI__OpenStonePurchaseMenu((CommonUI_o *)Instance, v13, this->fields.refreshCallbackFunc, 0LL);
      return;
    }
LABEL_8:
    sub_1BCAA3C(purchaseConfirmMenu, isDecide);
  }
  purchaseConfirmMenu = this->fields.purchaseConfirmMenu;
  if ( !purchaseConfirmMenu )
    goto LABEL_8;
  ServantFramePurchaseConfirmMenu__Close_30933712(purchaseConfirmMenu, 0LL, method);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFramePurchaseMenu__EndMaxFrameConfirm(
        ServantFramePurchaseMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ServantFramePurchaseConfirmMenu_o *purchaseConfirmMenu; // x0
  const MethodInfo *v5; // x2

  purchaseConfirmMenu = this->fields.purchaseConfirmMenu;
  if ( !purchaseConfirmMenu )
    sub_1BCAA3C(0LL, isDecide);
  ServantFramePurchaseConfirmMenu__Close_30933712(purchaseConfirmMenu, 0LL, method);
  ServantFramePurchaseMenu__Callback(this, 0, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFramePurchaseMenu__EndNoShopConfirm(
        ServantFramePurchaseMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ServantFramePurchaseConfirmMenu_o *purchaseConfirmMenu; // x0
  const MethodInfo *v5; // x2

  purchaseConfirmMenu = this->fields.purchaseConfirmMenu;
  if ( !purchaseConfirmMenu )
    sub_1BCAA3C(0LL, isDecide);
  ServantFramePurchaseConfirmMenu__Close_30933712(purchaseConfirmMenu, 0LL, method);
  ServantFramePurchaseMenu__Callback(this, 1, v5);
}


void __fastcall ServantFramePurchaseMenu__EndRequestServantFramePurchase(
        ServantFramePurchaseMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  ServantFramePurchaseConfirmMenu_o *purchaseConfirmMenu; // x0
  ServantFramePurchaseConfirmMenu_o *v7; // x20
  StoneShopEntity_o *stoneShopEntity; // x21
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  ServantFramePurchaseConfirmMenu_CallbackFunc_o *v12; // x22
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x4
  struct System_Action_o *refreshCallbackFunc; // x8

  if ( (qword_4B11000 & 0x10000) == 0 )
  {
    sub_1BCA7E0(&ServantFramePurchaseConfirmMenu_CallbackFunc_TypeInfo, result, method);
    sub_1BCA7E0(&Method_ServantFramePurchaseMenu_EndBuyFrameResultConfirm__, v4, v5);
    BYTE2(qword_4B11000) = 1;
  }
  purchaseConfirmMenu = this->fields.purchaseConfirmMenu;
  this->fields.state = 7;
  if ( !purchaseConfirmMenu
    || (ServantFramePurchaseConfirmMenu__Init(purchaseConfirmMenu, (const MethodInfo *)result),
        v7 = this->fields.purchaseConfirmMenu,
        stoneShopEntity = this->fields.stoneShopEntity,
        v12 = (ServantFramePurchaseConfirmMenu_CallbackFunc_o *)sub_1BCAA2C(
                                                                  ServantFramePurchaseConfirmMenu_CallbackFunc_TypeInfo,
                                                                  v9,
                                                                  v10,
                                                                  v11),
        ServantFramePurchaseConfirmMenu_CallbackFunc___ctor(
          v12,
          (Il2CppObject *)this,
          Method_ServantFramePurchaseMenu_EndBuyFrameResultConfirm__,
          v13),
        !v7) )
  {
    sub_1BCAA3C(purchaseConfirmMenu, result);
  }
  ServantFramePurchaseConfirmMenu__Open(v7, 2, stoneShopEntity, v12, v14);
  refreshCallbackFunc = this->fields.refreshCallbackFunc;
  if ( refreshCallbackFunc )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))refreshCallbackFunc->fields.m_target)(
      refreshCallbackFunc->fields.original_method_info,
      *(_QWORD *)&refreshCallbackFunc->fields.extra_arg);
}


void __fastcall ServantFramePurchaseMenu__Open(
        ServantFramePurchaseMenu_o *this,
        ServantFramePurchaseMenu_CallbackFunc_o *callback,
        System_Action_o *refreshCallback,
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
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  void *gameObject; // x0
  __int64 v22; // x1
  UserGameEntity_o *SelfUserGame; // x20
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x8
  struct StoneShopEntity_o *v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  int32_t svtKeep; // w22
  struct StoneShopEntity_o *stoneShopEntity; // x21
  struct ServantFramePurchaseConfirmMenu_o *v32; // x20
  ServantFramePurchaseConfirmMenu_CallbackFunc_o *v33; // x22
  const MethodInfo *v34; // x3
  const MethodInfo *v35; // x4
  int32_t v36; // w1
  ServantFramePurchaseConfirmMenu_o *v37; // x0
  struct ServantFramePurchaseConfirmMenu_o *v38; // x20
  ServantFramePurchaseConfirmMenu_CallbackFunc_o *v39; // x21
  const MethodInfo *v40; // x3
  const MethodInfo *v41; // x3
  StoneShopEntity_o *v42; // x2
  ServantFramePurchaseConfirmMenu_CallbackFunc_o *v43; // x3
  struct ServantFramePurchaseConfirmMenu_o *purchaseConfirmMenu; // x20
  const MethodInfo *v45; // x3

  if ( (byte_4B10FFD & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, callback, refreshCallback);
    sub_1BCA7E0(&ServantFramePurchaseConfirmMenu_CallbackFunc_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_StoneShopMaster___, v9, v10);
    sub_1BCA7E0(&Method_ServantFramePurchaseMenu_EndBuyFrameConfirm__, v11, v12);
    sub_1BCA7E0(&Method_ServantFramePurchaseMenu_EndBuyStoneConfirm__, v13, v14);
    sub_1BCA7E0(&Method_ServantFramePurchaseMenu_EndMaxFrameConfirm__, v15, v16);
    sub_1BCA7E0(&Method_ServantFramePurchaseMenu_EndNoShopConfirm__, v17, v18);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19, v20);
    byte_4B10FFD = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callbackFunc = callback;
    sub_1BCA784(&this->fields.callbackFunc, callback);
    this->fields.refreshCallbackFunc = refreshCallback;
    sub_1BCA784(&this->fields.refreshCallbackFunc, refreshCallback);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_27;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_27;
    gameObject = DataManager__GetMasterData_object_(
                   (DataManager_o *)gameObject,
                   (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_StoneShopMaster___);
    if ( !gameObject )
      goto LABEL_27;
    gameObject = StoneShopMaster__GetEnableEntitiyList_40724432((StoneShopMaster_o *)gameObject, 12, 0LL);
    if ( !gameObject )
      goto LABEL_27;
    v26 = *((_QWORD *)gameObject + 3);
    if ( v26 )
    {
      if ( !(_DWORD)v26 )
        sub_1BCAA44(gameObject, v22);
      v27 = (struct StoneShopEntity_o *)*((_QWORD *)gameObject + 4);
      this->fields.stoneShopEntity = v27;
      gameObject = (void *)sub_1BCA784(&this->fields.stoneShopEntity, v27);
      if ( !SelfUserGame )
        goto LABEL_27;
      svtKeep = SelfUserGame->fields.svtKeep;
      gameObject = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v22);
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
            v33 = (ServantFramePurchaseConfirmMenu_CallbackFunc_o *)sub_1BCAA2C(
                                                                      ServantFramePurchaseConfirmMenu_CallbackFunc_TypeInfo,
                                                                      v22,
                                                                      v28,
                                                                      v29);
            ServantFramePurchaseConfirmMenu_CallbackFunc___ctor(
              v33,
              (Il2CppObject *)this,
              Method_ServantFramePurchaseMenu_EndBuyFrameConfirm__,
              v45);
            if ( purchaseConfirmMenu )
            {
              v37 = purchaseConfirmMenu;
              v36 = 0;
              goto LABEL_25;
            }
          }
          else
          {
            this->fields.state = 4;
            v32 = this->fields.purchaseConfirmMenu;
            v33 = (ServantFramePurchaseConfirmMenu_CallbackFunc_o *)sub_1BCAA2C(
                                                                      ServantFramePurchaseConfirmMenu_CallbackFunc_TypeInfo,
                                                                      v22,
                                                                      v28,
                                                                      v29);
            ServantFramePurchaseConfirmMenu_CallbackFunc___ctor(
              v33,
              (Il2CppObject *)this,
              Method_ServantFramePurchaseMenu_EndBuyStoneConfirm__,
              v34);
            if ( v32 )
            {
              v36 = 1;
              v37 = v32;
LABEL_25:
              v42 = stoneShopEntity;
              v43 = v33;
              goto LABEL_26;
            }
          }
        }
LABEL_27:
        sub_1BCAA3C(gameObject, v22);
      }
      this->fields.state = 2;
      v38 = this->fields.purchaseConfirmMenu;
      v39 = (ServantFramePurchaseConfirmMenu_CallbackFunc_o *)sub_1BCAA2C(
                                                                ServantFramePurchaseConfirmMenu_CallbackFunc_TypeInfo,
                                                                v22,
                                                                v28,
                                                                v29);
      ServantFramePurchaseConfirmMenu_CallbackFunc___ctor(
        v39,
        (Il2CppObject *)this,
        Method_ServantFramePurchaseMenu_EndMaxFrameConfirm__,
        v41);
      if ( !v38 )
        goto LABEL_27;
      v36 = 3;
    }
    else
    {
      this->fields.state = 1;
      v38 = this->fields.purchaseConfirmMenu;
      v39 = (ServantFramePurchaseConfirmMenu_CallbackFunc_o *)sub_1BCAA2C(
                                                                ServantFramePurchaseConfirmMenu_CallbackFunc_TypeInfo,
                                                                v22,
                                                                v24,
                                                                v25);
      ServantFramePurchaseConfirmMenu_CallbackFunc___ctor(
        v39,
        (Il2CppObject *)this,
        Method_ServantFramePurchaseMenu_EndNoShopConfirm__,
        v40);
      if ( !v38 )
        goto LABEL_27;
      v36 = 4;
    }
    v37 = v38;
    v42 = 0LL;
    v43 = v39;
LABEL_26:
    ServantFramePurchaseConfirmMenu__Open(v37, v36, v42, v43, v35);
  }
}


void __fastcall ServantFramePurchaseMenu__RequestServantFramePurchase(
        ServantFramePurchaseMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  NetworkManager_ResultCallbackFunc_o *v11; // x20
  __int64 v12; // x1
  Il2CppObject *Request_object; // x0
  __int64 v14; // x1
  struct StoneShopEntity_o *stoneShopEntity; // x8

  if ( (qword_4B11000 & 0x100) == 0 )
  {
    sub_1BCA7E0(&Method_NetworkManager_getRequest_PurchaseByStoneRequest___, method, v2);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_ServantFramePurchaseMenu_EndRequestServantFramePurchase__, v9, v10);
    BYTE1(qword_4B11000) = 1;
  }
  if ( this->fields.stoneShopEntity )
  {
    v11 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(NetworkManager_ResultCallbackFunc_TypeInfo, method, v2, v3);
    NetworkManager_ResultCallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      Method_ServantFramePurchaseMenu_EndRequestServantFramePurchase__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v12);
    Request_object = NetworkManager__getRequest_object_(
                       v11,
                       (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_PurchaseByStoneRequest___);
    stoneShopEntity = this->fields.stoneShopEntity;
    if ( !stoneShopEntity || !Request_object )
      sub_1BCAA3C(Request_object, v14);
    PurchaseByStoneRequest__beginRequest((PurchaseByStoneRequest_o *)Request_object, stoneShopEntity->fields.id, 1, 0LL);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  CommonUI_o *Instance; // x0
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x2
  struct ServantFramePurchaseConfirmMenu_o *purchaseConfirmMenu; // x20
  struct StoneShopEntity_o *stoneShopEntity; // x21
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  ServantFramePurchaseConfirmMenu_CallbackFunc_o *v19; // x22
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x4
  int32_t v22; // w1
  ServantFramePurchaseConfirmMenu_o *v23; // x0
  StoneShopEntity_o *v24; // x2
  int32_t v25; // w1
  ServantFramePurchaseMenu_o *v26; // x0
  struct ServantFramePurchaseConfirmMenu_o *v27; // x21
  struct StoneShopEntity_o *v28; // x20
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  const MethodInfo *v32; // x3

  if ( (byte_4B10FFF & 1) == 0 )
  {
    sub_1BCA7E0(&ServantFramePurchaseConfirmMenu_CallbackFunc_TypeInfo, *(_QWORD *)&result, method);
    sub_1BCA7E0(&Method_ServantFramePurchaseMenu_EndBuyFrameConfirm__, v5, v6);
    sub_1BCA7E0(&Method_ServantFramePurchaseMenu_EndBuyStoneConfirm__, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10);
    byte_4B10FFF = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
LABEL_15:
    sub_1BCAA3C(Instance, v12);
  CommonUI__CloseStonePurchaseMenu(Instance, 0LL);
  switch ( result )
  {
    case 0:
    case 4:
      Instance = (CommonUI_o *)this->fields.purchaseConfirmMenu;
      this->fields.state = 4;
      if ( !Instance )
        goto LABEL_15;
      ServantFramePurchaseConfirmMenu__Init((ServantFramePurchaseConfirmMenu_o *)Instance, v12);
      purchaseConfirmMenu = this->fields.purchaseConfirmMenu;
      stoneShopEntity = this->fields.stoneShopEntity;
      v19 = (ServantFramePurchaseConfirmMenu_CallbackFunc_o *)sub_1BCAA2C(
                                                                ServantFramePurchaseConfirmMenu_CallbackFunc_TypeInfo,
                                                                v16,
                                                                v17,
                                                                v18);
      ServantFramePurchaseConfirmMenu_CallbackFunc___ctor(
        v19,
        (Il2CppObject *)this,
        Method_ServantFramePurchaseMenu_EndBuyStoneConfirm__,
        v20);
      if ( !purchaseConfirmMenu )
        goto LABEL_15;
      v22 = 1;
      v23 = purchaseConfirmMenu;
      v24 = stoneShopEntity;
      goto LABEL_12;
    case 1:
      v25 = 1;
      v26 = this;
      goto LABEL_14;
    case 2:
      Instance = (CommonUI_o *)this->fields.purchaseConfirmMenu;
      this->fields.state = 3;
      if ( !Instance )
        goto LABEL_15;
      ServantFramePurchaseConfirmMenu__Init((ServantFramePurchaseConfirmMenu_o *)Instance, v12);
      v27 = this->fields.purchaseConfirmMenu;
      v28 = this->fields.stoneShopEntity;
      v19 = (ServantFramePurchaseConfirmMenu_CallbackFunc_o *)sub_1BCAA2C(
                                                                ServantFramePurchaseConfirmMenu_CallbackFunc_TypeInfo,
                                                                v29,
                                                                v30,
                                                                v31);
      ServantFramePurchaseConfirmMenu_CallbackFunc___ctor(
        v19,
        (Il2CppObject *)this,
        Method_ServantFramePurchaseMenu_EndBuyFrameConfirm__,
        v32);
      if ( !v27 )
        goto LABEL_15;
      v23 = v27;
      v22 = 0;
      v24 = v28;
LABEL_12:
      ServantFramePurchaseConfirmMenu__Open(v23, v22, v24, v19, v21);
      break;
    case 3:
      v26 = this;
      v25 = 0;
LABEL_14:
      ServantFramePurchaseMenu__Callback(v26, v25, v13);
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

  if ( (byte_4B10FFB & 1) == 0 )
  {
    sub_1BCA7E0(&ServantFramePurchaseMenu_CallbackFunc_TypeInfo, value, method);
    byte_4B10FFB = 1;
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
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ServantFramePurchaseMenu_o *)sub_1BCACFC(v8);
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

  if ( (byte_4B10FFC & 1) == 0 )
  {
    sub_1BCA7E0(&ServantFramePurchaseMenu_CallbackFunc_TypeInfo, value, method);
    byte_4B10FFC = 1;
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
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ServantFramePurchaseMenu_o *)sub_1BCACFC(v8);
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
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCA784(&this->fields.method, object);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A0520C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A051C4;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall ServantFramePurchaseMenu_CallbackFunc__BeginInvoke(
        ServantFramePurchaseMenu_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = result;
  if ( (qword_4B11000 & 0x100000000LL) == 0 )
  {
    sub_1BCA7E0(&ServantFramePurchaseMenu_Result_TypeInfo, *(_QWORD *)&result, callback);
    BYTE4(qword_4B11000) = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(ServantFramePurchaseMenu_Result_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v9, callback, object);
}


void __fastcall ServantFramePurchaseMenu_CallbackFunc__EndInvoke(
        ServantFramePurchaseMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
}


void __fastcall ServantFramePurchaseMenu_CallbackFunc__Invoke(
        ServantFramePurchaseMenu_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    *(_QWORD *)&this->fields.extra_arg);
}