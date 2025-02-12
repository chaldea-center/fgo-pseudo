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
  sub_1C1AB78(p_callbackFunc);
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
      sub_1C1AE30(purchaseConfirmMenu, method);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)purchaseConfirmMenu, 0, 0LL);
    this->fields.stoneShopEntity = 0LL;
    sub_1C1AB78(&this->fields.stoneShopEntity);
    this->fields.refreshCallbackFunc = 0LL;
    p_refreshCallbackFunc = &this->fields.refreshCallbackFunc;
    sub_1C1AB78(p_refreshCallbackFunc);
    *((_DWORD *)p_refreshCallbackFunc + 4) = 0;
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

  if ( (byte_4BC27EC & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, isDecide);
    sub_1C1ABD4(&Method_ServantFramePurchaseMenu_EndCloseBuyFrameConfirmCancel__, v5);
    byte_4BC27EC = 1;
  }
  if ( isDecide )
  {
    this->fields.state = 6;
    ServantFramePurchaseMenu__RequestServantFramePurchase(this, (const MethodInfo *)isDecide);
  }
  else
  {
    purchaseConfirmMenu = this->fields.purchaseConfirmMenu;
    v7 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
    System_Action___ctor(v7, (Il2CppObject *)this, Method_ServantFramePurchaseMenu_EndCloseBuyFrameConfirmCancel__, 0LL);
    if ( !purchaseConfirmMenu )
      sub_1C1AE30(v8, v9);
    ServantFramePurchaseConfirmMenu__Close_31295648(purchaseConfirmMenu, v7, v10);
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

  if ( (byte_4BC27EF & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, isDecide);
    sub_1C1ABD4(&Method_ServantFramePurchaseMenu_EndCloseBuyFrameConfirmPurchase__, v4);
    byte_4BC27EF = 1;
  }
  purchaseConfirmMenu = this->fields.purchaseConfirmMenu;
  v6 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_ServantFramePurchaseMenu_EndCloseBuyFrameConfirmPurchase__, 0LL);
  if ( !purchaseConfirmMenu )
    sub_1C1AE30(v7, v8);
  ServantFramePurchaseConfirmMenu__Close_31295648(purchaseConfirmMenu, v6, v9);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantFramePurchaseMenu__EndBuyStoneConfirm(
        ServantFramePurchaseMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Instance; // x20
  StonePurchaseMenu_CallbackFunc_o *v8; // x21
  ServantFramePurchaseConfirmMenu_o *purchaseConfirmMenu; // x0
  const MethodInfo *v10; // x2

  if ( (byte_4BC27EA & 1) == 0 )
  {
    sub_1C1ABD4(&StonePurchaseMenu_CallbackFunc_TypeInfo, isDecide);
    sub_1C1ABD4(&Method_ServantFramePurchaseMenu_SelectedBuyBankItemConfirm__, v5);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4BC27EA = 1;
  }
  if ( isDecide )
  {
    this->fields.state = 5;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v8 = (StonePurchaseMenu_CallbackFunc_o *)sub_1C1AE20(StonePurchaseMenu_CallbackFunc_TypeInfo);
    StonePurchaseMenu_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_ServantFramePurchaseMenu_SelectedBuyBankItemConfirm__,
      0LL);
    if ( Instance )
    {
      CommonUI__OpenStonePurchaseMenu((CommonUI_o *)Instance, v8, this->fields.refreshCallbackFunc, 0LL);
      return;
    }
LABEL_8:
    sub_1C1AE30(purchaseConfirmMenu, isDecide);
  }
  purchaseConfirmMenu = this->fields.purchaseConfirmMenu;
  if ( !purchaseConfirmMenu )
    goto LABEL_8;
  ServantFramePurchaseConfirmMenu__Close_31295648(purchaseConfirmMenu, 0LL, method);
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
    sub_1C1AE30(0LL, isDecide);
  ServantFramePurchaseConfirmMenu__Close_31295648(purchaseConfirmMenu, 0LL, method);
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
    sub_1C1AE30(0LL, isDecide);
  ServantFramePurchaseConfirmMenu__Close_31295648(purchaseConfirmMenu, 0LL, method);
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
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x4
  struct System_Action_o *refreshCallbackFunc; // x8

  if ( (byte_4BC27EE & 1) == 0 )
  {
    sub_1C1ABD4(&ServantFramePurchaseConfirmMenu_CallbackFunc_TypeInfo, result);
    sub_1C1ABD4(&Method_ServantFramePurchaseMenu_EndBuyFrameResultConfirm__, v4);
    byte_4BC27EE = 1;
  }
  purchaseConfirmMenu = this->fields.purchaseConfirmMenu;
  this->fields.state = 7;
  if ( !purchaseConfirmMenu
    || (ServantFramePurchaseConfirmMenu__Init(purchaseConfirmMenu, (const MethodInfo *)result),
        v6 = this->fields.purchaseConfirmMenu,
        stoneShopEntity = this->fields.stoneShopEntity,
        v8 = (ServantFramePurchaseConfirmMenu_CallbackFunc_o *)sub_1C1AE20(ServantFramePurchaseConfirmMenu_CallbackFunc_TypeInfo),
        ServantFramePurchaseConfirmMenu_CallbackFunc___ctor(
          v8,
          (Il2CppObject *)this,
          Method_ServantFramePurchaseMenu_EndBuyFrameResultConfirm__,
          v9),
        !v6) )
  {
    sub_1C1AE30(purchaseConfirmMenu, result);
  }
  ServantFramePurchaseConfirmMenu__Open(v6, 2, stoneShopEntity, v8, v10);
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
  int32_t svtKeep; // w22
  struct StoneShopEntity_o *stoneShopEntity; // x21
  struct ServantFramePurchaseConfirmMenu_o *v22; // x20
  ServantFramePurchaseConfirmMenu_CallbackFunc_o *v23; // x22
  const MethodInfo *v24; // x3
  const MethodInfo *v25; // x4
  int32_t v26; // w1
  ServantFramePurchaseConfirmMenu_o *v27; // x0
  struct ServantFramePurchaseConfirmMenu_o *v28; // x20
  ServantFramePurchaseConfirmMenu_CallbackFunc_o *v29; // x21
  const MethodInfo *v30; // x3
  const MethodInfo *v31; // x3
  StoneShopEntity_o *v32; // x2
  ServantFramePurchaseConfirmMenu_CallbackFunc_o *v33; // x3
  struct ServantFramePurchaseConfirmMenu_o *purchaseConfirmMenu; // x20
  const MethodInfo *v35; // x3

  if ( (byte_4BC27E9 & 1) == 0 )
  {
    sub_1C1ABD4(&BalanceConfig_TypeInfo, callback);
    sub_1C1ABD4(&ServantFramePurchaseConfirmMenu_CallbackFunc_TypeInfo, v7);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_StoneShopMaster___, v8);
    sub_1C1ABD4(&Method_ServantFramePurchaseMenu_EndBuyFrameConfirm__, v9);
    sub_1C1ABD4(&Method_ServantFramePurchaseMenu_EndBuyStoneConfirm__, v10);
    sub_1C1ABD4(&Method_ServantFramePurchaseMenu_EndMaxFrameConfirm__, v11);
    sub_1C1ABD4(&Method_ServantFramePurchaseMenu_EndNoShopConfirm__, v12);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4BC27E9 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callbackFunc = callback;
    sub_1C1AB78(&this->fields.callbackFunc);
    this->fields.refreshCallbackFunc = refreshCallback;
    sub_1C1AB78(&this->fields.refreshCallbackFunc);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_27;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_27;
    gameObject = DataManager__GetMasterData_object_(
                   (DataManager_o *)gameObject,
                   (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_StoneShopMaster___);
    if ( !gameObject )
      goto LABEL_27;
    gameObject = StoneShopMaster__GetEnableEntitiyList_41214840((StoneShopMaster_o *)gameObject, 12, 0LL);
    if ( !gameObject )
      goto LABEL_27;
    v19 = *((_QWORD *)gameObject + 3);
    if ( v19 )
    {
      if ( !(_DWORD)v19 )
        sub_1C1AE38(gameObject, v15, v17, v18);
      this->fields.stoneShopEntity = (struct StoneShopEntity_o *)*((_QWORD *)gameObject + 4);
      gameObject = (void *)sub_1C1AB78(&this->fields.stoneShopEntity);
      if ( !SelfUserGame )
        goto LABEL_27;
      svtKeep = SelfUserGame->fields.svtKeep;
      gameObject = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
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
            v23 = (ServantFramePurchaseConfirmMenu_CallbackFunc_o *)sub_1C1AE20(ServantFramePurchaseConfirmMenu_CallbackFunc_TypeInfo);
            ServantFramePurchaseConfirmMenu_CallbackFunc___ctor(
              v23,
              (Il2CppObject *)this,
              Method_ServantFramePurchaseMenu_EndBuyFrameConfirm__,
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
            v23 = (ServantFramePurchaseConfirmMenu_CallbackFunc_o *)sub_1C1AE20(ServantFramePurchaseConfirmMenu_CallbackFunc_TypeInfo);
            ServantFramePurchaseConfirmMenu_CallbackFunc___ctor(
              v23,
              (Il2CppObject *)this,
              Method_ServantFramePurchaseMenu_EndBuyStoneConfirm__,
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
        sub_1C1AE30(gameObject, v15);
      }
      this->fields.state = 2;
      v28 = this->fields.purchaseConfirmMenu;
      v29 = (ServantFramePurchaseConfirmMenu_CallbackFunc_o *)sub_1C1AE20(ServantFramePurchaseConfirmMenu_CallbackFunc_TypeInfo);
      ServantFramePurchaseConfirmMenu_CallbackFunc___ctor(
        v29,
        (Il2CppObject *)this,
        Method_ServantFramePurchaseMenu_EndMaxFrameConfirm__,
        v31);
      if ( !v28 )
        goto LABEL_27;
      v26 = 3;
    }
    else
    {
      this->fields.state = 1;
      v28 = this->fields.purchaseConfirmMenu;
      v29 = (ServantFramePurchaseConfirmMenu_CallbackFunc_o *)sub_1C1AE20(ServantFramePurchaseConfirmMenu_CallbackFunc_TypeInfo);
      ServantFramePurchaseConfirmMenu_CallbackFunc___ctor(
        v29,
        (Il2CppObject *)this,
        Method_ServantFramePurchaseMenu_EndNoShopConfirm__,
        v30);
      if ( !v28 )
        goto LABEL_27;
      v26 = 4;
    }
    v27 = v28;
    v32 = 0LL;
    v33 = v29;
LABEL_26:
    ServantFramePurchaseConfirmMenu__Open(v27, v26, v32, v33, v25);
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
  Il2CppObject *Request_object; // x0
  __int64 v9; // x1
  struct StoneShopEntity_o *stoneShopEntity; // x8

  if ( (byte_4BC27ED & 1) == 0 )
  {
    sub_1C1ABD4(&Method_NetworkManager_getRequest_PurchaseByStoneRequest___, method);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v4);
    sub_1C1ABD4(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    sub_1C1ABD4(&Method_ServantFramePurchaseMenu_EndRequestServantFramePurchase__, v6);
    byte_4BC27ED = 1;
  }
  if ( this->fields.stoneShopEntity )
  {
    v7 = (NetworkManager_ResultCallbackFunc_o *)sub_1C1AE20(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      Method_ServantFramePurchaseMenu_EndRequestServantFramePurchase__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v7,
                       (const MethodInfo_3023C78 *)Method_NetworkManager_getRequest_PurchaseByStoneRequest___);
    stoneShopEntity = this->fields.stoneShopEntity;
    if ( !stoneShopEntity || !Request_object )
      sub_1C1AE30(Request_object, v9);
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
  __int64 v6; // x1
  __int64 v7; // x1
  CommonUI_o *Instance; // x0
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x2
  struct ServantFramePurchaseConfirmMenu_o *purchaseConfirmMenu; // x20
  struct StoneShopEntity_o *stoneShopEntity; // x21
  ServantFramePurchaseConfirmMenu_CallbackFunc_o *v13; // x22
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x4
  int32_t v16; // w1
  ServantFramePurchaseConfirmMenu_o *v17; // x0
  StoneShopEntity_o *v18; // x2
  int32_t v19; // w1
  ServantFramePurchaseMenu_o *v20; // x0
  struct ServantFramePurchaseConfirmMenu_o *v21; // x21
  struct StoneShopEntity_o *v22; // x20
  const MethodInfo *v23; // x3

  if ( (byte_4BC27EB & 1) == 0 )
  {
    sub_1C1ABD4(&ServantFramePurchaseConfirmMenu_CallbackFunc_TypeInfo, *(_QWORD *)&result);
    sub_1C1ABD4(&Method_ServantFramePurchaseMenu_EndBuyFrameConfirm__, v5);
    sub_1C1ABD4(&Method_ServantFramePurchaseMenu_EndBuyStoneConfirm__, v6);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_4BC27EB = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
LABEL_15:
    sub_1C1AE30(Instance, v9);
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
      v13 = (ServantFramePurchaseConfirmMenu_CallbackFunc_o *)sub_1C1AE20(ServantFramePurchaseConfirmMenu_CallbackFunc_TypeInfo);
      ServantFramePurchaseConfirmMenu_CallbackFunc___ctor(
        v13,
        (Il2CppObject *)this,
        Method_ServantFramePurchaseMenu_EndBuyStoneConfirm__,
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
      ServantFramePurchaseConfirmMenu__Init((ServantFramePurchaseConfirmMenu_o *)Instance, v9);
      v21 = this->fields.purchaseConfirmMenu;
      v22 = this->fields.stoneShopEntity;
      v13 = (ServantFramePurchaseConfirmMenu_CallbackFunc_o *)sub_1C1AE20(ServantFramePurchaseConfirmMenu_CallbackFunc_TypeInfo);
      ServantFramePurchaseConfirmMenu_CallbackFunc___ctor(
        v13,
        (Il2CppObject *)this,
        Method_ServantFramePurchaseMenu_EndBuyFrameConfirm__,
        v23);
      if ( !v21 )
        goto LABEL_15;
      v17 = v21;
      v16 = 0;
      v18 = v22;
LABEL_12:
      ServantFramePurchaseConfirmMenu__Open(v17, v16, v18, v13, v15);
      break;
    case 3:
      v20 = this;
      v19 = 0;
LABEL_14:
      ServantFramePurchaseMenu__Callback(v20, v19, v10);
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

  if ( (byte_4BC27E7 & 1) == 0 )
  {
    sub_1C1ABD4(&ServantFramePurchaseMenu_CallbackFunc_TypeInfo, value);
    byte_4BC27E7 = 1;
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
    v9 = sub_1C560C4(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ServantFramePurchaseMenu_o *)sub_1C1B0F0(v8);
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

  if ( (byte_4BC27E8 & 1) == 0 )
  {
    sub_1C1ABD4(&ServantFramePurchaseMenu_CallbackFunc_TypeInfo, value);
    byte_4BC27E8 = 1;
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
    v9 = sub_1C560C4(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ServantFramePurchaseMenu_o *)sub_1C1B0F0(v8);
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
  sub_1C1AB78(&this->fields.method);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1C1AC94(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C1AE4C(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C1ACFC(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A556C8;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A55680;
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
  if ( (byte_4BC3146 & 1) == 0 )
  {
    sub_1C1ABD4(&ServantFramePurchaseMenu_Result_TypeInfo, *(_QWORD *)&result);
    byte_4BC3146 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(ServantFramePurchaseMenu_Result_TypeInfo, &v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C1AB88(this, v9, callback, object);
}


void __fastcall ServantFramePurchaseMenu_CallbackFunc__EndInvoke(
        ServantFramePurchaseMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C1AB8C(result, 0LL, method);
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