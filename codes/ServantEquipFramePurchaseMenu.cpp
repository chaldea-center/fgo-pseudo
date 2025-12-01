void ServantEquipFramePurchaseMenu___ctor(ServantEquipFramePurchaseMenu_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void ServantEquipFramePurchaseMenu__Callback(
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
  *p_callbackFunc = 0;
  sub_1C71354(p_callbackFunc, 0);
  if ( callbackFunc )
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))v4->fields.invoke_impl)(
      v4->fields.method_code,
      (unsigned int)result,
      v4->fields.method);
}


void ServantEquipFramePurchaseMenu__Close(ServantEquipFramePurchaseMenu_o *this, const MethodInfo *method)
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
                                                                             0)) == 0) )
    {
      sub_1C71608(purchaseConfirmMenu, method);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)purchaseConfirmMenu, 0, 0);
    this->fields.stoneShopEntity = 0;
    sub_1C71354(&this->fields.stoneShopEntity, 0);
    this->fields.refreshCallbackFunc = 0;
    p_refreshCallbackFunc = &this->fields.refreshCallbackFunc;
    sub_1C71354(p_refreshCallbackFunc, 0);
    *((_DWORD *)p_refreshCallbackFunc + 4) = 0;
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantEquipFramePurchaseMenu__EndBuyFrameConfirm(
        ServantEquipFramePurchaseMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ServantEquipFramePurchaseConfirmMenu_o *purchaseConfirmMenu; // x20
  System_Action_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2

  if ( (byte_4CC139E & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_ServantEquipFramePurchaseMenu_EndCloseBuyFrameConfirmCancel__);
    byte_4CC139E = 1;
  }
  if ( isDecide )
  {
    this->fields.state = 6;
    ServantEquipFramePurchaseMenu__RequestServantEquipFramePurchase(this, (const MethodInfo *)isDecide);
  }
  else
  {
    purchaseConfirmMenu = this->fields.purchaseConfirmMenu;
    v6 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
    System_Action___ctor(
      v6,
      (Il2CppObject *)this,
      Method_ServantEquipFramePurchaseMenu_EndCloseBuyFrameConfirmCancel__,
      0);
    if ( !purchaseConfirmMenu )
      sub_1C71608(v7, v8);
    ServantEquipFramePurchaseConfirmMenu__Close_31640164(purchaseConfirmMenu, v6, v9);
  }
}


void ServantEquipFramePurchaseMenu__EndBuyFrameResultConfirm(
        ServantEquipFramePurchaseMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ServantEquipFramePurchaseConfirmMenu_o *purchaseConfirmMenu; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_4CC13A1 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_ServantEquipFramePurchaseMenu_EndCloseBuyFrameConfirmPurchase__);
    byte_4CC13A1 = 1;
  }
  purchaseConfirmMenu = this->fields.purchaseConfirmMenu;
  v5 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(
    v5,
    (Il2CppObject *)this,
    Method_ServantEquipFramePurchaseMenu_EndCloseBuyFrameConfirmPurchase__,
    0);
  if ( !purchaseConfirmMenu )
    sub_1C71608(v6, v7);
  ServantEquipFramePurchaseConfirmMenu__Close_31640164(purchaseConfirmMenu, v5, v8);
}


// local variable allocation has failed, the output may be wrong!
void ServantEquipFramePurchaseMenu__EndBuyStoneConfirm(
        ServantEquipFramePurchaseMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  StonePurchaseMenu_CallbackFunc_o *v6; // x21
  ServantEquipFramePurchaseConfirmMenu_o *purchaseConfirmMenu; // x0
  const MethodInfo *v8; // x2

  if ( (byte_4CC139C & 1) == 0 )
  {
    sub_1C713B0(&StonePurchaseMenu_CallbackFunc_TypeInfo);
    sub_1C713B0(&Method_ServantEquipFramePurchaseMenu_SelectedBuyBankItemConfirm__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CC139C = 1;
  }
  if ( isDecide )
  {
    this->fields.state = 5;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v6 = (StonePurchaseMenu_CallbackFunc_o *)sub_1C715FC(StonePurchaseMenu_CallbackFunc_TypeInfo);
    StonePurchaseMenu_CallbackFunc___ctor(
      v6,
      (Il2CppObject *)this,
      Method_ServantEquipFramePurchaseMenu_SelectedBuyBankItemConfirm__,
      0);
    if ( Instance )
    {
      CommonUI__OpenStonePurchaseMenu((CommonUI_o *)Instance, v6, this->fields.refreshCallbackFunc, 0, 0);
      return;
    }
LABEL_8:
    sub_1C71608(purchaseConfirmMenu, isDecide);
  }
  purchaseConfirmMenu = this->fields.purchaseConfirmMenu;
  if ( !purchaseConfirmMenu )
    goto LABEL_8;
  ServantEquipFramePurchaseConfirmMenu__Close_31640164(purchaseConfirmMenu, 0, method);
  ServantEquipFramePurchaseMenu__Callback(this, 0, v8);
}


void ServantEquipFramePurchaseMenu__EndCloseBuyFrameConfirmCancel(
        ServantEquipFramePurchaseMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ServantEquipFramePurchaseMenu__Callback(this, 0, v2);
}


void ServantEquipFramePurchaseMenu__EndCloseBuyFrameConfirmPurchase(
        ServantEquipFramePurchaseMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ServantEquipFramePurchaseMenu__Callback(this, 2, v2);
}


void ServantEquipFramePurchaseMenu__EndMaxFrameConfirm(
        ServantEquipFramePurchaseMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ServantEquipFramePurchaseConfirmMenu_o *purchaseConfirmMenu; // x0
  const MethodInfo *v5; // x2

  purchaseConfirmMenu = this->fields.purchaseConfirmMenu;
  if ( !purchaseConfirmMenu )
    sub_1C71608(0, isDecide);
  ServantEquipFramePurchaseConfirmMenu__Close_31640164(purchaseConfirmMenu, 0, method);
  ServantEquipFramePurchaseMenu__Callback(this, 0, v5);
}


void ServantEquipFramePurchaseMenu__EndNoShopConfirm(
        ServantEquipFramePurchaseMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ServantEquipFramePurchaseConfirmMenu_o *purchaseConfirmMenu; // x0
  const MethodInfo *v5; // x2

  purchaseConfirmMenu = this->fields.purchaseConfirmMenu;
  if ( !purchaseConfirmMenu )
    sub_1C71608(0, isDecide);
  ServantEquipFramePurchaseConfirmMenu__Close_31640164(purchaseConfirmMenu, 0, method);
  ServantEquipFramePurchaseMenu__Callback(this, 1, v5);
}


void ServantEquipFramePurchaseMenu__EndRequestServantEquipFramePurchase(
        ServantEquipFramePurchaseMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  ServantEquipFramePurchaseConfirmMenu_o *purchaseConfirmMenu; // x0
  ServantEquipFramePurchaseConfirmMenu_o *v5; // x20
  StoneShopEntity_o *stoneShopEntity; // x21
  ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o *v7; // x22
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x4
  struct System_Action_o *refreshCallbackFunc; // x8

  if ( (byte_4CC13A0 & 1) == 0 )
  {
    sub_1C713B0(&ServantEquipFramePurchaseConfirmMenu_CallbackFunc_TypeInfo);
    sub_1C713B0(&Method_ServantEquipFramePurchaseMenu_EndBuyFrameResultConfirm__);
    byte_4CC13A0 = 1;
  }
  purchaseConfirmMenu = this->fields.purchaseConfirmMenu;
  this->fields.state = 7;
  if ( !purchaseConfirmMenu
    || (ServantEquipFramePurchaseConfirmMenu__Init(purchaseConfirmMenu, (const MethodInfo *)result),
        v5 = this->fields.purchaseConfirmMenu,
        stoneShopEntity = this->fields.stoneShopEntity,
        v7 = (ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o *)sub_1C715FC(ServantEquipFramePurchaseConfirmMenu_CallbackFunc_TypeInfo),
        ServantEquipFramePurchaseConfirmMenu_CallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_ServantEquipFramePurchaseMenu_EndBuyFrameResultConfirm__,
          v8),
        !v5) )
  {
    sub_1C71608(purchaseConfirmMenu, result);
  }
  ServantEquipFramePurchaseConfirmMenu__Open(v5, 2, stoneShopEntity, v7, v9);
  refreshCallbackFunc = this->fields.refreshCallbackFunc;
  if ( refreshCallbackFunc )
    ((void (__fastcall *)(intptr_t, intptr_t))refreshCallbackFunc->fields.invoke_impl)(
      refreshCallbackFunc->fields.method_code,
      refreshCallbackFunc->fields.method);
}


void ServantEquipFramePurchaseMenu__Open(
        ServantEquipFramePurchaseMenu_o *this,
        ServantEquipFramePurchaseMenu_CallbackFunc_o *callback,
        System_Action_o *refreshCallback,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v8; // x1
  UserGameEntity_o *SelfUserGame; // x20
  UnityEngine_GameObject_c *klass; // x8
  struct StoneShopEntity_o *monitor; // x1
  int32_t svtEquipKeep; // w22
  struct StoneShopEntity_o *stoneShopEntity; // x21
  struct ServantEquipFramePurchaseConfirmMenu_o *v14; // x20
  ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o *v15; // x22
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x4
  int32_t v18; // w1
  ServantEquipFramePurchaseConfirmMenu_o *v19; // x0
  struct ServantEquipFramePurchaseConfirmMenu_o *v20; // x20
  ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o *v21; // x21
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x3
  StoneShopEntity_o *v24; // x2
  ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o *v25; // x3
  struct ServantEquipFramePurchaseConfirmMenu_o *purchaseConfirmMenu; // x20
  const MethodInfo *v27; // x3

  if ( (byte_4CC139B & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&ServantEquipFramePurchaseConfirmMenu_CallbackFunc_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMasterData_StoneShopMaster___);
    sub_1C713B0(&Method_ServantEquipFramePurchaseMenu_EndBuyFrameConfirm__);
    sub_1C713B0(&Method_ServantEquipFramePurchaseMenu_EndBuyStoneConfirm__);
    sub_1C713B0(&Method_ServantEquipFramePurchaseMenu_EndMaxFrameConfirm__);
    sub_1C713B0(&Method_ServantEquipFramePurchaseMenu_EndNoShopConfirm__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CC139B = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callbackFunc = callback;
    sub_1C71354(&this->fields.callbackFunc, callback);
    this->fields.refreshCallbackFunc = refreshCallback;
    sub_1C71354(&this->fields.refreshCallbackFunc, refreshCallback);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_27;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    SelfUserGame = UserGameMaster__getSelfUserGame(0);
    gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_27;
    gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)gameObject,
                                               (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_StoneShopMaster___);
    if ( !gameObject )
      goto LABEL_27;
    gameObject = (UnityEngine_GameObject_o *)StoneShopMaster__GetEnableEntitiyList_43235388(
                                               (StoneShopMaster_o *)gameObject,
                                               13,
                                               0);
    if ( !gameObject )
      goto LABEL_27;
    klass = gameObject[1].klass;
    if ( klass )
    {
      if ( !(_DWORD)klass )
        sub_1C71610(gameObject);
      monitor = (struct StoneShopEntity_o *)gameObject[1].monitor;
      this->fields.stoneShopEntity = monitor;
      gameObject = (UnityEngine_GameObject_o *)sub_1C71354(&this->fields.stoneShopEntity, monitor);
      if ( !SelfUserGame )
        goto LABEL_27;
      svtEquipKeep = SelfUserGame->fields.svtEquipKeep;
      gameObject = (UnityEngine_GameObject_o *)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)BalanceConfig_TypeInfo;
      }
      if ( svtEquipKeep < *(_DWORD *)(gameObject[7].fields.m_CachedPtr + 156) )
      {
        stoneShopEntity = this->fields.stoneShopEntity;
        if ( stoneShopEntity )
        {
          if ( SelfUserGame->fields.stone >= stoneShopEntity->fields.price )
          {
            this->fields.state = 3;
            purchaseConfirmMenu = this->fields.purchaseConfirmMenu;
            v15 = (ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o *)sub_1C715FC(ServantEquipFramePurchaseConfirmMenu_CallbackFunc_TypeInfo);
            ServantEquipFramePurchaseConfirmMenu_CallbackFunc___ctor(
              v15,
              (Il2CppObject *)this,
              Method_ServantEquipFramePurchaseMenu_EndBuyFrameConfirm__,
              v27);
            if ( purchaseConfirmMenu )
            {
              v19 = purchaseConfirmMenu;
              v18 = 0;
              goto LABEL_25;
            }
          }
          else
          {
            this->fields.state = 4;
            v14 = this->fields.purchaseConfirmMenu;
            v15 = (ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o *)sub_1C715FC(ServantEquipFramePurchaseConfirmMenu_CallbackFunc_TypeInfo);
            ServantEquipFramePurchaseConfirmMenu_CallbackFunc___ctor(
              v15,
              (Il2CppObject *)this,
              Method_ServantEquipFramePurchaseMenu_EndBuyStoneConfirm__,
              v16);
            if ( v14 )
            {
              v18 = 1;
              v19 = v14;
LABEL_25:
              v24 = stoneShopEntity;
              v25 = v15;
              goto LABEL_26;
            }
          }
        }
LABEL_27:
        sub_1C71608(gameObject, v8);
      }
      this->fields.state = 2;
      v20 = this->fields.purchaseConfirmMenu;
      v21 = (ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o *)sub_1C715FC(ServantEquipFramePurchaseConfirmMenu_CallbackFunc_TypeInfo);
      ServantEquipFramePurchaseConfirmMenu_CallbackFunc___ctor(
        v21,
        (Il2CppObject *)this,
        Method_ServantEquipFramePurchaseMenu_EndMaxFrameConfirm__,
        v23);
      if ( !v20 )
        goto LABEL_27;
      v18 = 3;
    }
    else
    {
      this->fields.state = 1;
      v20 = this->fields.purchaseConfirmMenu;
      v21 = (ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o *)sub_1C715FC(ServantEquipFramePurchaseConfirmMenu_CallbackFunc_TypeInfo);
      ServantEquipFramePurchaseConfirmMenu_CallbackFunc___ctor(
        v21,
        (Il2CppObject *)this,
        Method_ServantEquipFramePurchaseMenu_EndNoShopConfirm__,
        v22);
      if ( !v20 )
        goto LABEL_27;
      v18 = 4;
    }
    v19 = v20;
    v24 = 0;
    v25 = v21;
LABEL_26:
    ServantEquipFramePurchaseConfirmMenu__Open(v19, v18, v24, v25, v17);
  }
}


void ServantEquipFramePurchaseMenu__RequestServantEquipFramePurchase(
        ServantEquipFramePurchaseMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  NetworkManager_ResultCallbackFunc_o *v4; // x20
  Il2CppObject *Request_object; // x0
  __int64 v6; // x1
  struct StoneShopEntity_o *stoneShopEntity; // x8

  if ( (byte_4CC139F & 1) == 0 )
  {
    sub_1C713B0(&Method_NetworkManager_getRequest_PurchaseByStoneRequest___);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C713B0(&Method_ServantEquipFramePurchaseMenu_EndRequestServantEquipFramePurchase__);
    byte_4CC139F = 1;
  }
  if ( this->fields.stoneShopEntity )
  {
    v4 = (NetworkManager_ResultCallbackFunc_o *)sub_1C715FC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v4,
      (Il2CppObject *)this,
      Method_ServantEquipFramePurchaseMenu_EndRequestServantEquipFramePurchase__,
      0);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v4,
                       (const MethodInfo_31D69E8 *)Method_NetworkManager_getRequest_PurchaseByStoneRequest___);
    stoneShopEntity = this->fields.stoneShopEntity;
    if ( !stoneShopEntity || !Request_object )
      sub_1C71608(Request_object, v6);
    PurchaseByStoneRequest__beginRequest((PurchaseByStoneRequest_o *)Request_object, stoneShopEntity->fields.id, 1, 0);
  }
  else
  {
    ServantEquipFramePurchaseMenu__Callback(this, 1, v2);
  }
}


void ServantEquipFramePurchaseMenu__SelectedBuyBankItemConfirm(
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
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x4
  int32_t v13; // w1
  ServantEquipFramePurchaseConfirmMenu_o *v14; // x0
  StoneShopEntity_o *v15; // x2
  int32_t v16; // w1
  ServantEquipFramePurchaseMenu_o *v17; // x0
  struct ServantEquipFramePurchaseConfirmMenu_o *v18; // x21
  struct StoneShopEntity_o *v19; // x20
  const MethodInfo *v20; // x3

  if ( (byte_4CC139D & 1) == 0 )
  {
    sub_1C713B0(&ServantEquipFramePurchaseConfirmMenu_CallbackFunc_TypeInfo);
    sub_1C713B0(&Method_ServantEquipFramePurchaseMenu_EndBuyFrameConfirm__);
    sub_1C713B0(&Method_ServantEquipFramePurchaseMenu_EndBuyStoneConfirm__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CC139D = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
LABEL_15:
    sub_1C71608(Instance, v6);
  CommonUI__CloseStonePurchaseMenu(Instance, 0);
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
      v10 = (ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o *)sub_1C715FC(ServantEquipFramePurchaseConfirmMenu_CallbackFunc_TypeInfo);
      ServantEquipFramePurchaseConfirmMenu_CallbackFunc___ctor(
        v10,
        (Il2CppObject *)this,
        Method_ServantEquipFramePurchaseMenu_EndBuyStoneConfirm__,
        v11);
      if ( !purchaseConfirmMenu )
        goto LABEL_15;
      v13 = 1;
      v14 = purchaseConfirmMenu;
      v15 = stoneShopEntity;
      goto LABEL_12;
    case 1:
      v16 = 1;
      v17 = this;
      goto LABEL_14;
    case 2:
      Instance = (CommonUI_o *)this->fields.purchaseConfirmMenu;
      this->fields.state = 3;
      if ( !Instance )
        goto LABEL_15;
      ServantEquipFramePurchaseConfirmMenu__Init((ServantEquipFramePurchaseConfirmMenu_o *)Instance, v6);
      v18 = this->fields.purchaseConfirmMenu;
      v19 = this->fields.stoneShopEntity;
      v10 = (ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o *)sub_1C715FC(ServantEquipFramePurchaseConfirmMenu_CallbackFunc_TypeInfo);
      ServantEquipFramePurchaseConfirmMenu_CallbackFunc___ctor(
        v10,
        (Il2CppObject *)this,
        Method_ServantEquipFramePurchaseMenu_EndBuyFrameConfirm__,
        v20);
      if ( !v18 )
        goto LABEL_15;
      v14 = v18;
      v13 = 0;
      v15 = v19;
LABEL_12:
      ServantEquipFramePurchaseConfirmMenu__Open(v14, v13, v15, v10, v12);
      break;
    case 3:
      v17 = this;
      v16 = 0;
LABEL_14:
      ServantEquipFramePurchaseMenu__Callback(v17, v16, v7);
      break;
    default:
      return;
  }
}


void ServantEquipFramePurchaseMenu__add_callbackFunc(
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

  if ( (byte_4CC1399 & 1) == 0 )
  {
    sub_1C713B0(&ServantEquipFramePurchaseMenu_CallbackFunc_TypeInfo);
    byte_4CC1399 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (ServantEquipFramePurchaseMenu_CallbackFunc_c *)v8->klass != ServantEquipFramePurchaseMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1CCD184(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ServantEquipFramePurchaseMenu_o *)sub_1C719A4(v8);
  ServantEquipFramePurchaseMenu__remove_callbackFunc(v11, v12, v13);
}


void ServantEquipFramePurchaseMenu__remove_callbackFunc(
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

  if ( (byte_4CC139A & 1) == 0 )
  {
    sub_1C713B0(&ServantEquipFramePurchaseMenu_CallbackFunc_TypeInfo);
    byte_4CC139A = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (ServantEquipFramePurchaseMenu_CallbackFunc_c *)v8->klass != ServantEquipFramePurchaseMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1CCD184(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ServantEquipFramePurchaseMenu_o *)sub_1C719A4(v8);
  ServantEquipFramePurchaseMenu__Open(v11, v12, v13, v14);
}


void ServantEquipFramePurchaseMenu_CallbackFunc___ctor(
        ServantEquipFramePurchaseMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C71354(&this->fields.m_target, object);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C71470(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C71624(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C714D8(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A9DBE0;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A9DB98;
}


System_IAsyncResult_o *ServantEquipFramePurchaseMenu_CallbackFunc__BeginInvoke(
        ServantEquipFramePurchaseMenu_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = result;
  if ( (byte_4CC13A2 & 1) == 0 )
  {
    sub_1C713B0(&ServantEquipFramePurchaseMenu_Result_TypeInfo);
    byte_4CC13A2 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(ServantEquipFramePurchaseMenu_Result_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_1C71364(this, v9, callback, object);
}


void ServantEquipFramePurchaseMenu_CallbackFunc__EndInvoke(
        ServantEquipFramePurchaseMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C71368(result, 0, method);
}


void ServantEquipFramePurchaseMenu_CallbackFunc__Invoke(
        ServantEquipFramePurchaseMenu_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    this->fields.method);
}