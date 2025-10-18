void ServantFramePurchaseMenu___ctor(ServantFramePurchaseMenu_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void ServantFramePurchaseMenu__Callback(ServantFramePurchaseMenu_o *this, int32_t result, const MethodInfo *method)
{
  struct ServantFramePurchaseMenu_CallbackFunc_o **p_callbackFunc; // x0
  struct ServantFramePurchaseMenu_CallbackFunc_o *v4; // x20
  struct ServantFramePurchaseMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v4 = callbackFunc;
  *p_callbackFunc = 0;
  sub_1C36FFC(p_callbackFunc, 0);
  if ( callbackFunc )
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))v4->fields.invoke_impl)(
      v4->fields.method_code,
      (unsigned int)result,
      v4->fields.method);
}


void ServantFramePurchaseMenu__Close(ServantFramePurchaseMenu_o *this, const MethodInfo *method)
{
  ServantFramePurchaseConfirmMenu_o *purchaseConfirmMenu; // x0
  struct System_Action_o **p_refreshCallbackFunc; // x19

  if ( this->fields.state )
  {
    purchaseConfirmMenu = this->fields.purchaseConfirmMenu;
    if ( !purchaseConfirmMenu
      || (ServantFramePurchaseConfirmMenu__Init(purchaseConfirmMenu, 0),
          (purchaseConfirmMenu = (ServantFramePurchaseConfirmMenu_o *)UnityEngine_Component__get_gameObject(
                                                                        (UnityEngine_Component_o *)this,
                                                                        0)) == 0) )
    {
      sub_1C372B4(purchaseConfirmMenu);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)purchaseConfirmMenu, 0, 0);
    this->fields.stoneShopEntity = 0;
    sub_1C36FFC(&this->fields.stoneShopEntity, 0);
    this->fields.refreshCallbackFunc = 0;
    p_refreshCallbackFunc = &this->fields.refreshCallbackFunc;
    sub_1C36FFC(p_refreshCallbackFunc, 0);
    *((_DWORD *)p_refreshCallbackFunc + 4) = 0;
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantFramePurchaseMenu__EndBuyFrameConfirm(
        ServantFramePurchaseMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ServantFramePurchaseConfirmMenu_o *purchaseConfirmMenu; // x20
  System_Action_o *v6; // x21
  __int64 v7; // x0

  if ( (byte_4C3D853 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_ServantFramePurchaseMenu_EndCloseBuyFrameConfirmCancel__);
    byte_4C3D853 = 1;
  }
  if ( isDecide )
  {
    this->fields.state = 6;
    ServantFramePurchaseMenu__RequestServantFramePurchase(this, (const MethodInfo *)isDecide);
  }
  else
  {
    purchaseConfirmMenu = this->fields.purchaseConfirmMenu;
    v6 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(v6, (Il2CppObject *)this, Method_ServantFramePurchaseMenu_EndCloseBuyFrameConfirmCancel__, 0);
    if ( !purchaseConfirmMenu )
      sub_1C372B4(v7);
    ServantFramePurchaseConfirmMenu__Close_31415096(purchaseConfirmMenu, v6, 0);
  }
}


void ServantFramePurchaseMenu__EndBuyFrameResultConfirm(
        ServantFramePurchaseMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ServantFramePurchaseConfirmMenu_o *purchaseConfirmMenu; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0

  if ( (byte_4C3D856 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_ServantFramePurchaseMenu_EndCloseBuyFrameConfirmPurchase__);
    byte_4C3D856 = 1;
  }
  purchaseConfirmMenu = this->fields.purchaseConfirmMenu;
  v5 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_ServantFramePurchaseMenu_EndCloseBuyFrameConfirmPurchase__, 0);
  if ( !purchaseConfirmMenu )
    sub_1C372B4(v6);
  ServantFramePurchaseConfirmMenu__Close_31415096(purchaseConfirmMenu, v5, 0);
}


void ServantFramePurchaseMenu__EndBuyStoneConfirm(
        ServantFramePurchaseMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  StonePurchaseMenu_CallbackFunc_o *v6; // x21
  ServantFramePurchaseConfirmMenu_o *purchaseConfirmMenu; // x0
  const MethodInfo *v8; // x2

  if ( (byte_4C3D851 & 1) == 0 )
  {
    sub_1C37058(&StonePurchaseMenu_CallbackFunc_TypeInfo);
    sub_1C37058(&Method_ServantFramePurchaseMenu_SelectedBuyBankItemConfirm__);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C3D851 = 1;
  }
  if ( isDecide )
  {
    this->fields.state = 5;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v6 = (StonePurchaseMenu_CallbackFunc_o *)sub_1C372A4(StonePurchaseMenu_CallbackFunc_TypeInfo);
    StonePurchaseMenu_CallbackFunc___ctor(
      v6,
      (Il2CppObject *)this,
      Method_ServantFramePurchaseMenu_SelectedBuyBankItemConfirm__,
      0);
    if ( Instance )
    {
      CommonUI__OpenStonePurchaseMenu((CommonUI_o *)Instance, v6, this->fields.refreshCallbackFunc, 0);
      return;
    }
LABEL_8:
    sub_1C372B4(purchaseConfirmMenu);
  }
  purchaseConfirmMenu = this->fields.purchaseConfirmMenu;
  if ( !purchaseConfirmMenu )
    goto LABEL_8;
  ServantFramePurchaseConfirmMenu__Close(purchaseConfirmMenu, 0);
  ServantFramePurchaseMenu__Callback(this, 0, v8);
}


void ServantFramePurchaseMenu__EndCloseBuyFrameConfirmCancel(
        ServantFramePurchaseMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ServantFramePurchaseMenu__Callback(this, 0, v2);
}


void ServantFramePurchaseMenu__EndCloseBuyFrameConfirmPurchase(
        ServantFramePurchaseMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ServantFramePurchaseMenu__Callback(this, 2, v2);
}


void ServantFramePurchaseMenu__EndMaxFrameConfirm(
        ServantFramePurchaseMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ServantFramePurchaseConfirmMenu_o *purchaseConfirmMenu; // x0
  const MethodInfo *v5; // x2

  purchaseConfirmMenu = this->fields.purchaseConfirmMenu;
  if ( !purchaseConfirmMenu )
    sub_1C372B4(0);
  ServantFramePurchaseConfirmMenu__Close(purchaseConfirmMenu, 0);
  ServantFramePurchaseMenu__Callback(this, 0, v5);
}


void ServantFramePurchaseMenu__EndNoShopConfirm(
        ServantFramePurchaseMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ServantFramePurchaseConfirmMenu_o *purchaseConfirmMenu; // x0
  const MethodInfo *v5; // x2

  purchaseConfirmMenu = this->fields.purchaseConfirmMenu;
  if ( !purchaseConfirmMenu )
    sub_1C372B4(0);
  ServantFramePurchaseConfirmMenu__Close(purchaseConfirmMenu, 0);
  ServantFramePurchaseMenu__Callback(this, 1, v5);
}


void ServantFramePurchaseMenu__EndRequestServantFramePurchase(
        ServantFramePurchaseMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  ServantFramePurchaseConfirmMenu_o *purchaseConfirmMenu; // x0
  ServantFramePurchaseConfirmMenu_o *v5; // x20
  StoneShopEntity_o *stoneShopEntity; // x21
  ServantFramePurchaseConfirmMenu_CallbackFunc_o *v7; // x22
  const MethodInfo *v8; // x3
  struct System_Action_o *refreshCallbackFunc; // x8

  if ( (byte_4C3D855 & 1) == 0 )
  {
    sub_1C37058(&ServantFramePurchaseConfirmMenu_CallbackFunc_TypeInfo);
    sub_1C37058(&Method_ServantFramePurchaseMenu_EndBuyFrameResultConfirm__);
    byte_4C3D855 = 1;
  }
  purchaseConfirmMenu = this->fields.purchaseConfirmMenu;
  this->fields.state = 7;
  if ( !purchaseConfirmMenu
    || (ServantFramePurchaseConfirmMenu__Init(purchaseConfirmMenu, 0),
        v5 = this->fields.purchaseConfirmMenu,
        stoneShopEntity = this->fields.stoneShopEntity,
        v7 = (ServantFramePurchaseConfirmMenu_CallbackFunc_o *)sub_1C372A4(ServantFramePurchaseConfirmMenu_CallbackFunc_TypeInfo),
        ServantFramePurchaseConfirmMenu_CallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_ServantFramePurchaseMenu_EndBuyFrameResultConfirm__,
          v8),
        !v5) )
  {
    sub_1C372B4(purchaseConfirmMenu);
  }
  ServantFramePurchaseConfirmMenu__Open(v5, 2, stoneShopEntity, v7, 0);
  refreshCallbackFunc = this->fields.refreshCallbackFunc;
  if ( refreshCallbackFunc )
    ((void (__fastcall *)(intptr_t, intptr_t))refreshCallbackFunc->fields.invoke_impl)(
      refreshCallbackFunc->fields.method_code,
      refreshCallbackFunc->fields.method);
}


void ServantFramePurchaseMenu__Open(
        ServantFramePurchaseMenu_o *this,
        ServantFramePurchaseMenu_CallbackFunc_o *callback,
        System_Action_o *refreshCallback,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  UserGameEntity_o *SelfUserGame; // x20
  UnityEngine_GameObject_c *klass; // x8
  struct StoneShopEntity_o *monitor; // x1
  int32_t svtKeep; // w22
  struct StoneShopEntity_o *stoneShopEntity; // x21
  struct ServantFramePurchaseConfirmMenu_o *v13; // x20
  ServantFramePurchaseConfirmMenu_CallbackFunc_o *v14; // x22
  const MethodInfo *v15; // x3
  int32_t v16; // w1
  ServantFramePurchaseConfirmMenu_o *v17; // x0
  struct ServantFramePurchaseConfirmMenu_o *v18; // x20
  ServantFramePurchaseConfirmMenu_CallbackFunc_o *v19; // x21
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x3
  StoneShopEntity_o *v22; // x2
  ServantFramePurchaseConfirmMenu_CallbackFunc_o *v23; // x3
  struct ServantFramePurchaseConfirmMenu_o *purchaseConfirmMenu; // x20
  const MethodInfo *v25; // x3

  if ( (byte_4C3D850 & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&ServantFramePurchaseConfirmMenu_CallbackFunc_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_StoneShopMaster___);
    sub_1C37058(&Method_ServantFramePurchaseMenu_EndBuyFrameConfirm__);
    sub_1C37058(&Method_ServantFramePurchaseMenu_EndBuyStoneConfirm__);
    sub_1C37058(&Method_ServantFramePurchaseMenu_EndMaxFrameConfirm__);
    sub_1C37058(&Method_ServantFramePurchaseMenu_EndNoShopConfirm__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3D850 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callbackFunc = callback;
    sub_1C36FFC(&this->fields.callbackFunc, callback);
    this->fields.refreshCallbackFunc = refreshCallback;
    sub_1C36FFC(&this->fields.refreshCallbackFunc, refreshCallback);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_27;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    SelfUserGame = UserGameMaster__getSelfUserGame(0);
    gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_27;
    gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)gameObject,
                                               (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_StoneShopMaster___);
    if ( !gameObject )
      goto LABEL_27;
    gameObject = (UnityEngine_GameObject_o *)StoneShopMaster__GetEnableEntitiyList_42949136(
                                               (StoneShopMaster_o *)gameObject,
                                               12,
                                               0);
    if ( !gameObject )
      goto LABEL_27;
    klass = gameObject[1].klass;
    if ( klass )
    {
      if ( !(_DWORD)klass )
        sub_1C372BC(gameObject);
      monitor = (struct StoneShopEntity_o *)gameObject[1].monitor;
      this->fields.stoneShopEntity = monitor;
      gameObject = (UnityEngine_GameObject_o *)sub_1C36FFC(&this->fields.stoneShopEntity, monitor);
      if ( !SelfUserGame )
        goto LABEL_27;
      svtKeep = SelfUserGame->fields.svtKeep;
      gameObject = (UnityEngine_GameObject_o *)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)BalanceConfig_TypeInfo;
      }
      if ( svtKeep < *(_DWORD *)(gameObject[7].fields.m_CachedPtr + 152) )
      {
        stoneShopEntity = this->fields.stoneShopEntity;
        if ( stoneShopEntity )
        {
          if ( SelfUserGame->fields.stone >= stoneShopEntity->fields.price )
          {
            this->fields.state = 3;
            purchaseConfirmMenu = this->fields.purchaseConfirmMenu;
            v14 = (ServantFramePurchaseConfirmMenu_CallbackFunc_o *)sub_1C372A4(ServantFramePurchaseConfirmMenu_CallbackFunc_TypeInfo);
            ServantFramePurchaseConfirmMenu_CallbackFunc___ctor(
              v14,
              (Il2CppObject *)this,
              Method_ServantFramePurchaseMenu_EndBuyFrameConfirm__,
              v25);
            if ( purchaseConfirmMenu )
            {
              v17 = purchaseConfirmMenu;
              v16 = 0;
              goto LABEL_25;
            }
          }
          else
          {
            this->fields.state = 4;
            v13 = this->fields.purchaseConfirmMenu;
            v14 = (ServantFramePurchaseConfirmMenu_CallbackFunc_o *)sub_1C372A4(ServantFramePurchaseConfirmMenu_CallbackFunc_TypeInfo);
            ServantFramePurchaseConfirmMenu_CallbackFunc___ctor(
              v14,
              (Il2CppObject *)this,
              Method_ServantFramePurchaseMenu_EndBuyStoneConfirm__,
              v15);
            if ( v13 )
            {
              v16 = 1;
              v17 = v13;
LABEL_25:
              v22 = stoneShopEntity;
              v23 = v14;
              goto LABEL_26;
            }
          }
        }
LABEL_27:
        sub_1C372B4(gameObject);
      }
      this->fields.state = 2;
      v18 = this->fields.purchaseConfirmMenu;
      v19 = (ServantFramePurchaseConfirmMenu_CallbackFunc_o *)sub_1C372A4(ServantFramePurchaseConfirmMenu_CallbackFunc_TypeInfo);
      ServantFramePurchaseConfirmMenu_CallbackFunc___ctor(
        v19,
        (Il2CppObject *)this,
        Method_ServantFramePurchaseMenu_EndMaxFrameConfirm__,
        v21);
      if ( !v18 )
        goto LABEL_27;
      v16 = 3;
    }
    else
    {
      this->fields.state = 1;
      v18 = this->fields.purchaseConfirmMenu;
      v19 = (ServantFramePurchaseConfirmMenu_CallbackFunc_o *)sub_1C372A4(ServantFramePurchaseConfirmMenu_CallbackFunc_TypeInfo);
      ServantFramePurchaseConfirmMenu_CallbackFunc___ctor(
        v19,
        (Il2CppObject *)this,
        Method_ServantFramePurchaseMenu_EndNoShopConfirm__,
        v20);
      if ( !v18 )
        goto LABEL_27;
      v16 = 4;
    }
    v17 = v18;
    v22 = 0;
    v23 = v19;
LABEL_26:
    ServantFramePurchaseConfirmMenu__Open(v17, v16, v22, v23, 0);
  }
}


void ServantFramePurchaseMenu__RequestServantFramePurchase(ServantFramePurchaseMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  NetworkManager_ResultCallbackFunc_o *v4; // x20
  Il2CppObject *Request_object; // x0
  struct StoneShopEntity_o *stoneShopEntity; // x8

  if ( (byte_4C3D854 & 1) == 0 )
  {
    sub_1C37058(&Method_NetworkManager_getRequest_PurchaseByStoneRequest___);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C37058(&Method_ServantFramePurchaseMenu_EndRequestServantFramePurchase__);
    byte_4C3D854 = 1;
  }
  if ( this->fields.stoneShopEntity )
  {
    v4 = (NetworkManager_ResultCallbackFunc_o *)sub_1C372A4(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v4,
      (Il2CppObject *)this,
      Method_ServantFramePurchaseMenu_EndRequestServantFramePurchase__,
      0);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v4,
                       (const MethodInfo_3172CF0 *)Method_NetworkManager_getRequest_PurchaseByStoneRequest___);
    stoneShopEntity = this->fields.stoneShopEntity;
    if ( !stoneShopEntity || !Request_object )
      sub_1C372B4(Request_object);
    PurchaseByStoneRequest__beginRequest((PurchaseByStoneRequest_o *)Request_object, stoneShopEntity->fields.id, 1, 0);
  }
  else
  {
    ServantFramePurchaseMenu__Callback(this, 1, v2);
  }
}


void ServantFramePurchaseMenu__SelectedBuyBankItemConfirm(
        ServantFramePurchaseMenu_o *this,
        int32_t result,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  const MethodInfo *v6; // x2
  struct ServantFramePurchaseConfirmMenu_o *purchaseConfirmMenu; // x20
  struct StoneShopEntity_o *stoneShopEntity; // x21
  ServantFramePurchaseConfirmMenu_CallbackFunc_o *v9; // x22
  const MethodInfo *v10; // x3
  int32_t v11; // w1
  ServantFramePurchaseConfirmMenu_o *v12; // x0
  StoneShopEntity_o *v13; // x2
  int32_t v14; // w1
  ServantFramePurchaseMenu_o *v15; // x0
  struct ServantFramePurchaseConfirmMenu_o *v16; // x21
  struct StoneShopEntity_o *v17; // x20
  const MethodInfo *v18; // x3

  if ( (byte_4C3D852 & 1) == 0 )
  {
    sub_1C37058(&ServantFramePurchaseConfirmMenu_CallbackFunc_TypeInfo);
    sub_1C37058(&Method_ServantFramePurchaseMenu_EndBuyFrameConfirm__);
    sub_1C37058(&Method_ServantFramePurchaseMenu_EndBuyStoneConfirm__);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C3D852 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
LABEL_15:
    sub_1C372B4(Instance);
  CommonUI__CloseStonePurchaseMenu(Instance, 0);
  switch ( result )
  {
    case 0:
    case 4:
      Instance = (CommonUI_o *)this->fields.purchaseConfirmMenu;
      this->fields.state = 4;
      if ( !Instance )
        goto LABEL_15;
      ServantFramePurchaseConfirmMenu__Init((ServantFramePurchaseConfirmMenu_o *)Instance, 0);
      purchaseConfirmMenu = this->fields.purchaseConfirmMenu;
      stoneShopEntity = this->fields.stoneShopEntity;
      v9 = (ServantFramePurchaseConfirmMenu_CallbackFunc_o *)sub_1C372A4(ServantFramePurchaseConfirmMenu_CallbackFunc_TypeInfo);
      ServantFramePurchaseConfirmMenu_CallbackFunc___ctor(
        v9,
        (Il2CppObject *)this,
        Method_ServantFramePurchaseMenu_EndBuyStoneConfirm__,
        v10);
      if ( !purchaseConfirmMenu )
        goto LABEL_15;
      v11 = 1;
      v12 = purchaseConfirmMenu;
      v13 = stoneShopEntity;
      goto LABEL_12;
    case 1:
      v14 = 1;
      v15 = this;
      goto LABEL_14;
    case 2:
      Instance = (CommonUI_o *)this->fields.purchaseConfirmMenu;
      this->fields.state = 3;
      if ( !Instance )
        goto LABEL_15;
      ServantFramePurchaseConfirmMenu__Init((ServantFramePurchaseConfirmMenu_o *)Instance, 0);
      v16 = this->fields.purchaseConfirmMenu;
      v17 = this->fields.stoneShopEntity;
      v9 = (ServantFramePurchaseConfirmMenu_CallbackFunc_o *)sub_1C372A4(ServantFramePurchaseConfirmMenu_CallbackFunc_TypeInfo);
      ServantFramePurchaseConfirmMenu_CallbackFunc___ctor(
        v9,
        (Il2CppObject *)this,
        Method_ServantFramePurchaseMenu_EndBuyFrameConfirm__,
        v18);
      if ( !v16 )
        goto LABEL_15;
      v12 = v16;
      v11 = 0;
      v13 = v17;
LABEL_12:
      ServantFramePurchaseConfirmMenu__Open(v12, v11, v13, v9, 0);
      break;
    case 3:
      v15 = this;
      v14 = 0;
LABEL_14:
      ServantFramePurchaseMenu__Callback(v15, v14, v6);
      break;
    default:
      return;
  }
}


void ServantFramePurchaseMenu__add_callbackFunc(
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

  if ( (byte_4C3D84E & 1) == 0 )
  {
    sub_1C37058(&ServantFramePurchaseMenu_CallbackFunc_TypeInfo);
    byte_4C3D84E = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (ServantFramePurchaseMenu_CallbackFunc_c *)v8->klass != ServantFramePurchaseMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C712B0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ServantFramePurchaseMenu_o *)sub_1C37574(v8);
  ServantFramePurchaseMenu__remove_callbackFunc(v11, v12, v13);
}


void ServantFramePurchaseMenu__remove_callbackFunc(
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

  if ( (byte_4C3D84F & 1) == 0 )
  {
    sub_1C37058(&ServantFramePurchaseMenu_CallbackFunc_TypeInfo);
    byte_4C3D84F = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (ServantFramePurchaseMenu_CallbackFunc_c *)v8->klass != ServantFramePurchaseMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C712B0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ServantFramePurchaseMenu_o *)sub_1C37574(v8);
  ServantFramePurchaseMenu__Open(v11, v12, v13, v14);
}


void ServantFramePurchaseMenu_CallbackFunc___ctor(
        ServantFramePurchaseMenu_CallbackFunc_o *this,
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
  sub_1C36FFC(&this->fields.m_target, object);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C37118(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C372D0(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C37180(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A733F8;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A733B0;
}


System_IAsyncResult_o *ServantFramePurchaseMenu_CallbackFunc__BeginInvoke(
        ServantFramePurchaseMenu_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  _QWORD v12[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v13; // [xsp+1Ch] [xbp-34h] BYREF

  v13 = result;
  if ( (byte_4C3D857 & 1) == 0 )
  {
    sub_1C37058(&ServantFramePurchaseMenu_Result_TypeInfo);
    byte_4C3D857 = 1;
  }
  v12[1] = 0;
  v12[0] = j_il2cpp_value_box_0(ServantFramePurchaseMenu_Result_TypeInfo, &v13, callback, object, method, v5, v6, v7);
  return (System_IAsyncResult_o *)sub_1C3700C(this, v12, callback, object);
}


void ServantFramePurchaseMenu_CallbackFunc__EndInvoke(
        ServantFramePurchaseMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C37010(result, 0, method);
}


void ServantFramePurchaseMenu_CallbackFunc__Invoke(
        ServantFramePurchaseMenu_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    this->fields.method);
}