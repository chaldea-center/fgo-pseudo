void __fastcall ServantEquipFramePurchaseMenu___ctor(ServantEquipFramePurchaseMenu_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall ServantEquipFramePurchaseMenu__Callback(
        ServantEquipFramePurchaseMenu_o *this,
        int32_t result,
        const MethodInfo *method)
{
  struct ServantEquipFramePurchaseMenu_CallbackFunc_o **p_callbackFunc; // x0
  struct ServantEquipFramePurchaseMenu_CallbackFunc_o *v4; // x20
  struct ServantEquipFramePurchaseMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v4 = callbackFunc;
  *p_callbackFunc = 0LL;
  sub_1BC2FAC(p_callbackFunc);
  if ( callbackFunc )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))v4->fields.m_target)(
      v4->fields.original_method_info,
      (unsigned int)result,
      *(_QWORD *)&v4->fields.extra_arg);
}


void __fastcall ServantEquipFramePurchaseMenu__Close(ServantEquipFramePurchaseMenu_o *this, const MethodInfo *method)
{
  ServantEquipFramePurchaseConfirmMenu_o *purchaseConfirmMenu; // x0
  struct System_Action_o **p_refreshCallbackFunc; // x19

  if ( this->fields.state )
  {
    purchaseConfirmMenu = this->fields.purchaseConfirmMenu;
    if ( !purchaseConfirmMenu
      || (ServantEquipFramePurchaseConfirmMenu__Init(purchaseConfirmMenu, method),
          (purchaseConfirmMenu = (ServantEquipFramePurchaseConfirmMenu_o *)UnityEngine_Component__get_gameObject(
                                                                             (UnityEngine_Component_o *)this,
                                                                             0LL)) == 0LL) )
    {
      sub_1BC3264(purchaseConfirmMenu, method);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)purchaseConfirmMenu, 0, 0LL);
    this->fields.stoneShopEntity = 0LL;
    sub_1BC2FAC(&this->fields.stoneShopEntity);
    this->fields.refreshCallbackFunc = 0LL;
    p_refreshCallbackFunc = &this->fields.refreshCallbackFunc;
    sub_1BC2FAC(p_refreshCallbackFunc);
    *((_DWORD *)p_refreshCallbackFunc + 4) = 0;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantEquipFramePurchaseMenu__EndBuyFrameConfirm(
        ServantEquipFramePurchaseMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  ServantEquipFramePurchaseConfirmMenu_o *purchaseConfirmMenu; // x20
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2

  if ( (byte_4AFC45B & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, isDecide);
    sub_1BC3008(&Method_ServantEquipFramePurchaseMenu_EndCloseBuyFrameConfirmCancel__, v5);
    byte_4AFC45B = 1;
  }
  if ( isDecide )
  {
    this->fields.state = 6;
    ServantEquipFramePurchaseMenu__RequestServantEquipFramePurchase(this, (const MethodInfo *)isDecide);
  }
  else
  {
    purchaseConfirmMenu = this->fields.purchaseConfirmMenu;
    v7 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
    System_Action___ctor(
      v7,
      (Il2CppObject *)this,
      Method_ServantEquipFramePurchaseMenu_EndCloseBuyFrameConfirmCancel__,
      0LL);
    if ( !purchaseConfirmMenu )
      sub_1BC3264(v8, v9);
    ServantEquipFramePurchaseConfirmMenu__Close_30927128(purchaseConfirmMenu, v7, v10);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantEquipFramePurchaseMenu__EndBuyFrameResultConfirm(
        ServantEquipFramePurchaseMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v4; // x1
  ServantEquipFramePurchaseConfirmMenu_o *purchaseConfirmMenu; // x20
  System_Action_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2

  if ( (byte_4AFC45E & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, isDecide);
    sub_1BC3008(&Method_ServantEquipFramePurchaseMenu_EndCloseBuyFrameConfirmPurchase__, v4);
    byte_4AFC45E = 1;
  }
  purchaseConfirmMenu = this->fields.purchaseConfirmMenu;
  v6 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(
    v6,
    (Il2CppObject *)this,
    Method_ServantEquipFramePurchaseMenu_EndCloseBuyFrameConfirmPurchase__,
    0LL);
  if ( !purchaseConfirmMenu )
    sub_1BC3264(v7, v8);
  ServantEquipFramePurchaseConfirmMenu__Close_30927128(purchaseConfirmMenu, v6, v9);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantEquipFramePurchaseMenu__EndBuyStoneConfirm(
        ServantEquipFramePurchaseMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Instance; // x20
  StonePurchaseMenu_CallbackFunc_o *v8; // x21
  ServantEquipFramePurchaseConfirmMenu_o *purchaseConfirmMenu; // x0
  const MethodInfo *v10; // x2

  if ( (byte_4AFC459 & 1) == 0 )
  {
    sub_1BC3008(&StonePurchaseMenu_CallbackFunc_TypeInfo, isDecide);
    sub_1BC3008(&Method_ServantEquipFramePurchaseMenu_SelectedBuyBankItemConfirm__, v5);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4AFC459 = 1;
  }
  if ( isDecide )
  {
    this->fields.state = 5;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v8 = (StonePurchaseMenu_CallbackFunc_o *)sub_1BC3254(StonePurchaseMenu_CallbackFunc_TypeInfo);
    StonePurchaseMenu_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_ServantEquipFramePurchaseMenu_SelectedBuyBankItemConfirm__,
      0LL);
    if ( Instance )
    {
      CommonUI__OpenStonePurchaseMenu((CommonUI_o *)Instance, v8, this->fields.refreshCallbackFunc, 0LL);
      return;
    }
LABEL_8:
    sub_1BC3264(purchaseConfirmMenu, isDecide);
  }
  purchaseConfirmMenu = this->fields.purchaseConfirmMenu;
  if ( !purchaseConfirmMenu )
    goto LABEL_8;
  ServantEquipFramePurchaseConfirmMenu__Close_30927128(purchaseConfirmMenu, 0LL, method);
  ServantEquipFramePurchaseMenu__Callback(this, 0, v10);
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
    sub_1BC3264(0LL, isDecide);
  ServantEquipFramePurchaseConfirmMenu__Close_30927128(purchaseConfirmMenu, 0LL, method);
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
    sub_1BC3264(0LL, isDecide);
  ServantEquipFramePurchaseConfirmMenu__Close_30927128(purchaseConfirmMenu, 0LL, method);
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
  ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o *v8; // x22
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x4
  struct System_Action_o *refreshCallbackFunc; // x8

  if ( (byte_4AFC45D & 1) == 0 )
  {
    sub_1BC3008(&ServantEquipFramePurchaseConfirmMenu_CallbackFunc_TypeInfo, result);
    sub_1BC3008(&Method_ServantEquipFramePurchaseMenu_EndBuyFrameResultConfirm__, v4);
    byte_4AFC45D = 1;
  }
  purchaseConfirmMenu = this->fields.purchaseConfirmMenu;
  this->fields.state = 7;
  if ( !purchaseConfirmMenu
    || (ServantEquipFramePurchaseConfirmMenu__Init(purchaseConfirmMenu, (const MethodInfo *)result),
        v6 = this->fields.purchaseConfirmMenu,
        stoneShopEntity = this->fields.stoneShopEntity,
        v8 = (ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o *)sub_1BC3254(ServantEquipFramePurchaseConfirmMenu_CallbackFunc_TypeInfo),
        ServantEquipFramePurchaseConfirmMenu_CallbackFunc___ctor(
          v8,
          (Il2CppObject *)this,
          Method_ServantEquipFramePurchaseMenu_EndBuyFrameResultConfirm__,
          v9),
        !v6) )
  {
    sub_1BC3264(purchaseConfirmMenu, result);
  }
  ServantEquipFramePurchaseConfirmMenu__Open(v6, 2, stoneShopEntity, v8, v10);
  refreshCallbackFunc = this->fields.refreshCallbackFunc;
  if ( refreshCallbackFunc )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))refreshCallbackFunc->fields.m_target)(
      refreshCallbackFunc->fields.original_method_info,
      *(_QWORD *)&refreshCallbackFunc->fields.extra_arg);
}


void __fastcall ServantEquipFramePurchaseMenu__Open(
        ServantEquipFramePurchaseMenu_o *this,
        ServantEquipFramePurchaseMenu_CallbackFunc_o *callback,
        System_Action_o *refreshCallback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  void *gameObject; // x0
  __int64 v15; // x1
  UserGameEntity_o *SelfUserGame; // x20
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x8
  int32_t svtEquipKeep; // w22
  struct StoneShopEntity_o *stoneShopEntity; // x21
  struct ServantEquipFramePurchaseConfirmMenu_o *v22; // x20
  ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o *v23; // x22
  const MethodInfo *v24; // x3
  const MethodInfo *v25; // x4
  int32_t v26; // w1
  ServantEquipFramePurchaseConfirmMenu_o *v27; // x0
  struct ServantEquipFramePurchaseConfirmMenu_o *v28; // x20
  ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o *v29; // x21
  const MethodInfo *v30; // x3
  const MethodInfo *v31; // x3
  StoneShopEntity_o *v32; // x2
  ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o *v33; // x3
  struct ServantEquipFramePurchaseConfirmMenu_o *purchaseConfirmMenu; // x20
  const MethodInfo *v35; // x3

  if ( (byte_4AFC458 & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, callback);
    sub_1BC3008(&ServantEquipFramePurchaseConfirmMenu_CallbackFunc_TypeInfo, v7);
    sub_1BC3008(&Method_DataManager_GetMasterData_StoneShopMaster___, v8);
    sub_1BC3008(&Method_ServantEquipFramePurchaseMenu_EndBuyFrameConfirm__, v9);
    sub_1BC3008(&Method_ServantEquipFramePurchaseMenu_EndBuyStoneConfirm__, v10);
    sub_1BC3008(&Method_ServantEquipFramePurchaseMenu_EndMaxFrameConfirm__, v11);
    sub_1BC3008(&Method_ServantEquipFramePurchaseMenu_EndNoShopConfirm__, v12);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4AFC458 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callbackFunc = callback;
    sub_1BC2FAC(&this->fields.callbackFunc);
    this->fields.refreshCallbackFunc = refreshCallback;
    sub_1BC2FAC(&this->fields.refreshCallbackFunc);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_27;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_27;
    gameObject = DataManager__GetMasterData_object_(
                   (DataManager_o *)gameObject,
                   (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_StoneShopMaster___);
    if ( !gameObject )
      goto LABEL_27;
    gameObject = StoneShopMaster__GetEnableEntitiyList_41927736((StoneShopMaster_o *)gameObject, 13, 0LL);
    if ( !gameObject )
      goto LABEL_27;
    v19 = *((_QWORD *)gameObject + 3);
    if ( v19 )
    {
      if ( !(_DWORD)v19 )
        sub_1BC326C(gameObject, v15, v17, v18);
      this->fields.stoneShopEntity = (struct StoneShopEntity_o *)*((_QWORD *)gameObject + 4);
      gameObject = (void *)sub_1BC2FAC(&this->fields.stoneShopEntity);
      if ( !SelfUserGame )
        goto LABEL_27;
      svtEquipKeep = SelfUserGame->fields.svtEquipKeep;
      gameObject = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        gameObject = BalanceConfig_TypeInfo;
      }
      if ( svtEquipKeep < *(_DWORD *)(*((_QWORD *)gameObject + 23) + 156LL) )
      {
        stoneShopEntity = this->fields.stoneShopEntity;
        if ( stoneShopEntity )
        {
          if ( SelfUserGame->fields.stone >= stoneShopEntity->fields.price )
          {
            this->fields.state = 3;
            purchaseConfirmMenu = this->fields.purchaseConfirmMenu;
            v23 = (ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o *)sub_1BC3254(ServantEquipFramePurchaseConfirmMenu_CallbackFunc_TypeInfo);
            ServantEquipFramePurchaseConfirmMenu_CallbackFunc___ctor(
              v23,
              (Il2CppObject *)this,
              Method_ServantEquipFramePurchaseMenu_EndBuyFrameConfirm__,
              v35);
            if ( purchaseConfirmMenu )
            {
              v27 = purchaseConfirmMenu;
              v26 = 0;
              goto LABEL_25;
            }
          }
          else
          {
            this->fields.state = 4;
            v22 = this->fields.purchaseConfirmMenu;
            v23 = (ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o *)sub_1BC3254(ServantEquipFramePurchaseConfirmMenu_CallbackFunc_TypeInfo);
            ServantEquipFramePurchaseConfirmMenu_CallbackFunc___ctor(
              v23,
              (Il2CppObject *)this,
              Method_ServantEquipFramePurchaseMenu_EndBuyStoneConfirm__,
              v24);
            if ( v22 )
            {
              v26 = 1;
              v27 = v22;
LABEL_25:
              v32 = stoneShopEntity;
              v33 = v23;
              goto LABEL_26;
            }
          }
        }
LABEL_27:
        sub_1BC3264(gameObject, v15);
      }
      this->fields.state = 2;
      v28 = this->fields.purchaseConfirmMenu;
      v29 = (ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o *)sub_1BC3254(ServantEquipFramePurchaseConfirmMenu_CallbackFunc_TypeInfo);
      ServantEquipFramePurchaseConfirmMenu_CallbackFunc___ctor(
        v29,
        (Il2CppObject *)this,
        Method_ServantEquipFramePurchaseMenu_EndMaxFrameConfirm__,
        v31);
      if ( !v28 )
        goto LABEL_27;
      v26 = 3;
    }
    else
    {
      this->fields.state = 1;
      v28 = this->fields.purchaseConfirmMenu;
      v29 = (ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o *)sub_1BC3254(ServantEquipFramePurchaseConfirmMenu_CallbackFunc_TypeInfo);
      ServantEquipFramePurchaseConfirmMenu_CallbackFunc___ctor(
        v29,
        (Il2CppObject *)this,
        Method_ServantEquipFramePurchaseMenu_EndNoShopConfirm__,
        v30);
      if ( !v28 )
        goto LABEL_27;
      v26 = 4;
    }
    v27 = v28;
    v32 = 0LL;
    v33 = v29;
LABEL_26:
    ServantEquipFramePurchaseConfirmMenu__Open(v27, v26, v32, v33, v25);
  }
}


void __fastcall ServantEquipFramePurchaseMenu__RequestServantEquipFramePurchase(
        ServantEquipFramePurchaseMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  NetworkManager_ResultCallbackFunc_o *v7; // x20
  Il2CppObject *Request_object; // x0
  __int64 v9; // x1
  struct StoneShopEntity_o *stoneShopEntity; // x8

  if ( (byte_4AFC45C & 1) == 0 )
  {
    sub_1BC3008(&Method_NetworkManager_getRequest_PurchaseByStoneRequest___, method);
    sub_1BC3008(&NetworkManager_TypeInfo, v4);
    sub_1BC3008(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    sub_1BC3008(&Method_ServantEquipFramePurchaseMenu_EndRequestServantEquipFramePurchase__, v6);
    byte_4AFC45C = 1;
  }
  if ( this->fields.stoneShopEntity )
  {
    v7 = (NetworkManager_ResultCallbackFunc_o *)sub_1BC3254(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      Method_ServantEquipFramePurchaseMenu_EndRequestServantEquipFramePurchase__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v7,
                       (const MethodInfo_3089B54 *)Method_NetworkManager_getRequest_PurchaseByStoneRequest___);
    stoneShopEntity = this->fields.stoneShopEntity;
    if ( !stoneShopEntity || !Request_object )
      sub_1BC3264(Request_object, v9);
    PurchaseByStoneRequest__beginRequest((PurchaseByStoneRequest_o *)Request_object, stoneShopEntity->fields.id, 1, 0LL);
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
  struct ServantEquipFramePurchaseConfirmMenu_o *purchaseConfirmMenu; // x20
  struct StoneShopEntity_o *stoneShopEntity; // x21
  ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o *v13; // x22
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x4
  int32_t v16; // w1
  ServantEquipFramePurchaseConfirmMenu_o *v17; // x0
  StoneShopEntity_o *v18; // x2
  int32_t v19; // w1
  ServantEquipFramePurchaseMenu_o *v20; // x0
  struct ServantEquipFramePurchaseConfirmMenu_o *v21; // x21
  struct StoneShopEntity_o *v22; // x20
  const MethodInfo *v23; // x3

  if ( (byte_4AFC45A & 1) == 0 )
  {
    sub_1BC3008(&ServantEquipFramePurchaseConfirmMenu_CallbackFunc_TypeInfo, *(_QWORD *)&result);
    sub_1BC3008(&Method_ServantEquipFramePurchaseMenu_EndBuyFrameConfirm__, v5);
    sub_1BC3008(&Method_ServantEquipFramePurchaseMenu_EndBuyStoneConfirm__, v6);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_4AFC45A = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
LABEL_15:
    sub_1BC3264(Instance, v9);
  CommonUI__CloseStonePurchaseMenu(Instance, 0LL);
  switch ( result )
  {
    case 0:
    case 4:
      Instance = (CommonUI_o *)this->fields.purchaseConfirmMenu;
      this->fields.state = 4;
      if ( !Instance )
        goto LABEL_15;
      ServantEquipFramePurchaseConfirmMenu__Init((ServantEquipFramePurchaseConfirmMenu_o *)Instance, v9);
      purchaseConfirmMenu = this->fields.purchaseConfirmMenu;
      stoneShopEntity = this->fields.stoneShopEntity;
      v13 = (ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o *)sub_1BC3254(ServantEquipFramePurchaseConfirmMenu_CallbackFunc_TypeInfo);
      ServantEquipFramePurchaseConfirmMenu_CallbackFunc___ctor(
        v13,
        (Il2CppObject *)this,
        Method_ServantEquipFramePurchaseMenu_EndBuyStoneConfirm__,
        v14);
      if ( !purchaseConfirmMenu )
        goto LABEL_15;
      v16 = 1;
      v17 = purchaseConfirmMenu;
      v18 = stoneShopEntity;
      goto LABEL_12;
    case 1:
      v19 = 1;
      v20 = this;
      goto LABEL_14;
    case 2:
      Instance = (CommonUI_o *)this->fields.purchaseConfirmMenu;
      this->fields.state = 3;
      if ( !Instance )
        goto LABEL_15;
      ServantEquipFramePurchaseConfirmMenu__Init((ServantEquipFramePurchaseConfirmMenu_o *)Instance, v9);
      v21 = this->fields.purchaseConfirmMenu;
      v22 = this->fields.stoneShopEntity;
      v13 = (ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o *)sub_1BC3254(ServantEquipFramePurchaseConfirmMenu_CallbackFunc_TypeInfo);
      ServantEquipFramePurchaseConfirmMenu_CallbackFunc___ctor(
        v13,
        (Il2CppObject *)this,
        Method_ServantEquipFramePurchaseMenu_EndBuyFrameConfirm__,
        v23);
      if ( !v21 )
        goto LABEL_15;
      v17 = v21;
      v16 = 0;
      v18 = v22;
LABEL_12:
      ServantEquipFramePurchaseConfirmMenu__Open(v17, v16, v18, v13, v15);
      break;
    case 3:
      v20 = this;
      v19 = 0;
LABEL_14:
      ServantEquipFramePurchaseMenu__Callback(v20, v19, v10);
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

  if ( (byte_4AFC456 & 1) == 0 )
  {
    sub_1BC3008(&ServantEquipFramePurchaseMenu_CallbackFunc_TypeInfo, value);
    byte_4AFC456 = 1;
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
    v9 = sub_1BFD098(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ServantEquipFramePurchaseMenu_o *)sub_1BC3524(v8);
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

  if ( (byte_4AFC457 & 1) == 0 )
  {
    sub_1BC3008(&ServantEquipFramePurchaseMenu_CallbackFunc_TypeInfo, value);
    byte_4AFC457 = 1;
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
    v9 = sub_1BFD098(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ServantEquipFramePurchaseMenu_o *)sub_1BC3524(v8);
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
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1BC2FAC(&this->fields.method);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BC30C8(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BC3280(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BC3130(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A04BB8;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A04B70;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall ServantEquipFramePurchaseMenu_CallbackFunc__BeginInvoke(
        ServantEquipFramePurchaseMenu_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = result;
  if ( (byte_4AFC45F & 1) == 0 )
  {
    sub_1BC3008(&ServantEquipFramePurchaseMenu_Result_TypeInfo, *(_QWORD *)&result);
    byte_4AFC45F = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(ServantEquipFramePurchaseMenu_Result_TypeInfo, &v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1BC2FBC(this, v9, callback, object);
}


void __fastcall ServantEquipFramePurchaseMenu_CallbackFunc__EndInvoke(
        ServantEquipFramePurchaseMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BC2FC0(result, 0LL, method);
}


void __fastcall ServantEquipFramePurchaseMenu_CallbackFunc__Invoke(
        ServantEquipFramePurchaseMenu_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    *(_QWORD *)&this->fields.extra_arg);
}