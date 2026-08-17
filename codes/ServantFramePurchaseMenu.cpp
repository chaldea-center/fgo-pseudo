void ServantFramePurchaseMenu___ctor(ServantFramePurchaseMenu_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void ServantFramePurchaseMenu__Callback(ServantFramePurchaseMenu_o *this, int32_t result, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x0
  struct ServantFramePurchaseMenu_CallbackFunc_o *v10; // x20
  struct ServantFramePurchaseMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
  v10 = callbackFunc;
  p_callbackFunc->klass = 0;
  sub_2213A04(p_callbackFunc, 0, (System_String_o *)method, v3, v4, v5, v6, v7);
  if ( callbackFunc )
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))v10->fields.invoke_impl)(
      v10->fields.method_code,
      (unsigned int)result,
      v10->fields.method);
}


void ServantFramePurchaseMenu__Close(ServantFramePurchaseMenu_o *this, const MethodInfo *method)
{
  ServantFramePurchaseConfirmMenu_o *purchaseConfirmMenu; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  MissionNaviTransitionBoardItem_o *p_refreshCallbackFunc; // x19
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( this->fields.state )
  {
    purchaseConfirmMenu = this->fields.purchaseConfirmMenu;
    if ( !purchaseConfirmMenu
      || (ServantFramePurchaseConfirmMenu__Init(purchaseConfirmMenu, method),
          (purchaseConfirmMenu = (ServantFramePurchaseConfirmMenu_o *)UnityEngine_Component__get_gameObject(
                                                                        (UnityEngine_Component_o *)this,
                                                                        0)) == 0) )
    {
      sub_2213CDC(purchaseConfirmMenu, method);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)purchaseConfirmMenu, 0, 0);
    this->fields.stoneShopEntity = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.stoneShopEntity, 0, v4, v5, v6, v7, v8, v9);
    this->fields.refreshCallbackFunc = 0;
    p_refreshCallbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.refreshCallbackFunc;
    sub_2213A04(p_refreshCallbackFunc, 0, v11, v12, v13, v14, v15, v16);
    p_refreshCallbackFunc->fields.selectNum = 0;
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
  __int64 v8; // x1
  const MethodInfo *v9; // x2

  if ( (byte_596B162 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ServantFramePurchaseMenu_EndCloseBuyFrameConfirmCancel__);
    byte_596B162 = 1;
  }
  if ( isDecide )
  {
    this->fields.state = 6;
    ServantFramePurchaseMenu__RequestServantFramePurchase(this, (const MethodInfo *)isDecide);
  }
  else
  {
    purchaseConfirmMenu = this->fields.purchaseConfirmMenu;
    v6 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v6, (Il2CppObject *)this, Method_ServantFramePurchaseMenu_EndCloseBuyFrameConfirmCancel__, 0);
    if ( !purchaseConfirmMenu )
      sub_2213CDC(v7, v8);
    ServantFramePurchaseConfirmMenu__Close_39442852(purchaseConfirmMenu, v6, v9);
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
  __int64 v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_596B165 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ServantFramePurchaseMenu_EndCloseBuyFrameConfirmPurchase__);
    byte_596B165 = 1;
  }
  purchaseConfirmMenu = this->fields.purchaseConfirmMenu;
  v5 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_ServantFramePurchaseMenu_EndCloseBuyFrameConfirmPurchase__, 0);
  if ( !purchaseConfirmMenu )
    sub_2213CDC(v6, v7);
  ServantFramePurchaseConfirmMenu__Close_39442852(purchaseConfirmMenu, v5, v8);
}


// local variable allocation has failed, the output may be wrong!
void ServantFramePurchaseMenu__EndBuyStoneConfirm(
        ServantFramePurchaseMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  const MethodInfo_47A29F8 *v5; // x0
  Il2CppObject *Instance; // x20
  StonePurchaseMenu_CallbackFunc_o *v7; // x21
  ServantFramePurchaseConfirmMenu_o *purchaseConfirmMenu; // x0
  const MethodInfo *v9; // x2

  if ( (byte_596B160 & 1) == 0 )
  {
    sub_2213A60(&StonePurchaseMenu_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_ServantFramePurchaseMenu_SelectedBuyBankItemConfirm__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596B160 = 1;
  }
  if ( isDecide )
  {
    v5 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
    this->fields.state = 5;
    Instance = SingletonMonoBehaviour_object___get_Instance(v5);
    v7 = (StonePurchaseMenu_CallbackFunc_o *)sub_2213CCC(StonePurchaseMenu_CallbackFunc_TypeInfo);
    StonePurchaseMenu_CallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      Method_ServantFramePurchaseMenu_SelectedBuyBankItemConfirm__,
      0);
    if ( Instance )
    {
      CommonUI__OpenStonePurchaseMenu((CommonUI_o *)Instance, v7, this->fields.refreshCallbackFunc, 0, 0);
      return;
    }
LABEL_8:
    sub_2213CDC(purchaseConfirmMenu, isDecide);
  }
  purchaseConfirmMenu = this->fields.purchaseConfirmMenu;
  if ( !purchaseConfirmMenu )
    goto LABEL_8;
  ServantFramePurchaseConfirmMenu__Close_39442852(purchaseConfirmMenu, 0, method);
  ServantFramePurchaseMenu__Callback(this, 0, v9);
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


// local variable allocation has failed, the output may be wrong!
void ServantFramePurchaseMenu__EndMaxFrameConfirm(
        ServantFramePurchaseMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ServantFramePurchaseConfirmMenu_o *purchaseConfirmMenu; // x0
  const MethodInfo *v5; // x2

  purchaseConfirmMenu = this->fields.purchaseConfirmMenu;
  if ( !purchaseConfirmMenu )
    sub_2213CDC(0, isDecide);
  ServantFramePurchaseConfirmMenu__Close_39442852(purchaseConfirmMenu, 0, method);
  ServantFramePurchaseMenu__Callback(this, 0, v5);
}


// local variable allocation has failed, the output may be wrong!
void ServantFramePurchaseMenu__EndNoShopConfirm(
        ServantFramePurchaseMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ServantFramePurchaseConfirmMenu_o *purchaseConfirmMenu; // x0
  const MethodInfo *v5; // x2

  purchaseConfirmMenu = this->fields.purchaseConfirmMenu;
  if ( !purchaseConfirmMenu )
    sub_2213CDC(0, isDecide);
  ServantFramePurchaseConfirmMenu__Close_39442852(purchaseConfirmMenu, 0, method);
  ServantFramePurchaseMenu__Callback(this, 1, v5);
}


void ServantFramePurchaseMenu__EndRequestServantFramePurchase(
        ServantFramePurchaseMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  ServantFramePurchaseConfirmMenu_o *purchaseConfirmMenu; // x0
  ServantFramePurchaseConfirmMenu_o *v5; // x21
  StoneShopEntity_o *stoneShopEntity; // x20
  ServantFramePurchaseConfirmMenu_CallbackFunc_o *v7; // x22
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x4
  struct System_Action_o *refreshCallbackFunc; // x8

  if ( (byte_596B164 & 1) == 0 )
  {
    sub_2213A60(&ServantFramePurchaseConfirmMenu_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_ServantFramePurchaseMenu_EndBuyFrameResultConfirm__);
    byte_596B164 = 1;
  }
  purchaseConfirmMenu = this->fields.purchaseConfirmMenu;
  this->fields.state = 7;
  if ( !purchaseConfirmMenu
    || (ServantFramePurchaseConfirmMenu__Init(purchaseConfirmMenu, (const MethodInfo *)result),
        v5 = this->fields.purchaseConfirmMenu,
        stoneShopEntity = this->fields.stoneShopEntity,
        v7 = (ServantFramePurchaseConfirmMenu_CallbackFunc_o *)sub_2213CCC(ServantFramePurchaseConfirmMenu_CallbackFunc_TypeInfo),
        ServantFramePurchaseConfirmMenu_CallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_ServantFramePurchaseMenu_EndBuyFrameResultConfirm__,
          v8),
        !v5) )
  {
    sub_2213CDC(purchaseConfirmMenu, result);
  }
  ServantFramePurchaseConfirmMenu__Open(v5, 2, stoneShopEntity, v7, v9);
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
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v18; // x1
  UserGameEntity_o *SelfUserGame; // x20
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  UnityEngine_GameObject_c *klass; // x8
  struct StoneShopEntity_o *monitor; // x1
  __int64 v28; // x2
  int32_t svtKeep; // w22
  struct StoneShopEntity_o *stoneShopEntity; // x21
  struct ServantFramePurchaseConfirmMenu_o *v31; // x20
  ServantFramePurchaseConfirmMenu_CallbackFunc_o *v32; // x22
  const MethodInfo *v33; // x3
  const MethodInfo *v34; // x4
  ServantFramePurchaseConfirmMenu_o *v35; // x0
  int32_t v36; // w1
  struct ServantFramePurchaseConfirmMenu_o *v37; // x20
  ServantFramePurchaseConfirmMenu_CallbackFunc_o *v38; // x21
  const MethodInfo *v39; // x3
  struct ServantFramePurchaseConfirmMenu_o *v40; // x20
  const MethodInfo *v41; // x3
  StoneShopEntity_o *v42; // x2
  ServantFramePurchaseConfirmMenu_CallbackFunc_o *v43; // x3
  struct ServantFramePurchaseConfirmMenu_o *purchaseConfirmMenu; // x20
  const MethodInfo *v45; // x3

  if ( (byte_596B15F & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&ServantFramePurchaseConfirmMenu_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_StoneShopMaster___);
    sub_2213A60(&Method_ServantFramePurchaseMenu_EndBuyFrameConfirm__);
    sub_2213A60(&Method_ServantFramePurchaseMenu_EndBuyStoneConfirm__);
    sub_2213A60(&Method_ServantFramePurchaseMenu_EndMaxFrameConfirm__);
    sub_2213A60(&Method_ServantFramePurchaseMenu_EndNoShopConfirm__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596B15F = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callbackFunc = callback;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      (System_String_o *)refreshCallback,
      (System_String_o *)method,
      v4,
      v5,
      v6,
      v7);
    this->fields.refreshCallbackFunc = refreshCallback;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.refreshCallbackFunc,
      (int32_t)refreshCallback,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_27;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    SelfUserGame = UserGameMaster__getSelfUserGame(0);
    gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_27;
    gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)gameObject,
                                               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_StoneShopMaster___);
    if ( !gameObject )
      goto LABEL_27;
    gameObject = (UnityEngine_GameObject_o *)StoneShopMaster__GetEnableEntitiyList(
                                               (StoneShopMaster_o *)gameObject,
                                               12,
                                               0);
    if ( !gameObject )
      goto LABEL_27;
    klass = gameObject[1].klass;
    if ( klass )
    {
      if ( !(_DWORD)klass )
        sub_2213CE4(gameObject);
      monitor = (struct StoneShopEntity_o *)gameObject[1].monitor;
      this->fields.stoneShopEntity = monitor;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.stoneShopEntity,
        (int32_t)monitor,
        v20,
        v21,
        v22,
        v23,
        v24,
        v25);
      if ( !SelfUserGame )
        goto LABEL_27;
      svtKeep = SelfUserGame->fields.svtKeep;
      gameObject = (UnityEngine_GameObject_o *)BalanceConfig_TypeInfo;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v18, v28);
        gameObject = (UnityEngine_GameObject_o *)BalanceConfig_TypeInfo;
      }
      if ( svtKeep < *(_DWORD *)(gameObject[7].fields.m_CachedPtr + 152) )
      {
        stoneShopEntity = this->fields.stoneShopEntity;
        if ( stoneShopEntity )
        {
          if ( SelfUserGame->fields.stone >= stoneShopEntity->fields.price )
          {
            purchaseConfirmMenu = this->fields.purchaseConfirmMenu;
            this->fields.state = 3;
            v32 = (ServantFramePurchaseConfirmMenu_CallbackFunc_o *)sub_2213CCC(ServantFramePurchaseConfirmMenu_CallbackFunc_TypeInfo);
            ServantFramePurchaseConfirmMenu_CallbackFunc___ctor(
              v32,
              (Il2CppObject *)this,
              Method_ServantFramePurchaseMenu_EndBuyFrameConfirm__,
              v45);
            if ( purchaseConfirmMenu )
            {
              v35 = purchaseConfirmMenu;
              v36 = 0;
              goto LABEL_25;
            }
          }
          else
          {
            v31 = this->fields.purchaseConfirmMenu;
            this->fields.state = 4;
            v32 = (ServantFramePurchaseConfirmMenu_CallbackFunc_o *)sub_2213CCC(ServantFramePurchaseConfirmMenu_CallbackFunc_TypeInfo);
            ServantFramePurchaseConfirmMenu_CallbackFunc___ctor(
              v32,
              (Il2CppObject *)this,
              Method_ServantFramePurchaseMenu_EndBuyStoneConfirm__,
              v33);
            if ( v31 )
            {
              v35 = v31;
              v36 = 1;
LABEL_25:
              v42 = stoneShopEntity;
              v43 = v32;
              goto LABEL_26;
            }
          }
        }
LABEL_27:
        sub_2213CDC(gameObject, v18);
      }
      v40 = this->fields.purchaseConfirmMenu;
      this->fields.state = 2;
      v38 = (ServantFramePurchaseConfirmMenu_CallbackFunc_o *)sub_2213CCC(ServantFramePurchaseConfirmMenu_CallbackFunc_TypeInfo);
      ServantFramePurchaseConfirmMenu_CallbackFunc___ctor(
        v38,
        (Il2CppObject *)this,
        Method_ServantFramePurchaseMenu_EndMaxFrameConfirm__,
        v41);
      if ( !v40 )
        goto LABEL_27;
      v35 = v40;
      v36 = 3;
    }
    else
    {
      v37 = this->fields.purchaseConfirmMenu;
      this->fields.state = 1;
      v38 = (ServantFramePurchaseConfirmMenu_CallbackFunc_o *)sub_2213CCC(ServantFramePurchaseConfirmMenu_CallbackFunc_TypeInfo);
      ServantFramePurchaseConfirmMenu_CallbackFunc___ctor(
        v38,
        (Il2CppObject *)this,
        Method_ServantFramePurchaseMenu_EndNoShopConfirm__,
        v39);
      if ( !v37 )
        goto LABEL_27;
      v35 = v37;
      v36 = 4;
    }
    v42 = 0;
    v43 = v38;
LABEL_26:
    ServantFramePurchaseConfirmMenu__Open(v35, v36, v42, v43, v34);
  }
}


void ServantFramePurchaseMenu__RequestServantFramePurchase(ServantFramePurchaseMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  NetworkManager_ResultCallbackFunc_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *Request_object; // x0
  __int64 v8; // x1
  struct StoneShopEntity_o *stoneShopEntity; // x8

  if ( (byte_596B163 & 1) == 0 )
  {
    sub_2213A60(&Method_NetworkManager_getRequest_PurchaseByStoneRequest___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_2213A60(&Method_ServantFramePurchaseMenu_EndRequestServantFramePurchase__);
    byte_596B163 = 1;
  }
  if ( this->fields.stoneShopEntity )
  {
    v4 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v4,
      (Il2CppObject *)this,
      Method_ServantFramePurchaseMenu_EndRequestServantFramePurchase__,
      0);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5, v6);
    Request_object = NetworkManager__getRequest_object_(
                       v4,
                       (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_PurchaseByStoneRequest___);
    stoneShopEntity = this->fields.stoneShopEntity;
    if ( !stoneShopEntity || !Request_object )
      sub_2213CDC(Request_object, v8);
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
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2
  struct ServantFramePurchaseConfirmMenu_o *v8; // x21
  StoneShopEntity_o *stoneShopEntity; // x20
  ServantFramePurchaseConfirmMenu_CallbackFunc_o *v10; // x22
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x4
  ServantFramePurchaseConfirmMenu_o *v13; // x0
  int32_t v14; // w1
  ServantFramePurchaseMenu_o *v15; // x0
  int32_t v16; // w1
  struct ServantFramePurchaseConfirmMenu_o *purchaseConfirmMenu; // x21
  const MethodInfo *v18; // x3

  if ( (byte_596B161 & 1) == 0 )
  {
    sub_2213A60(&ServantFramePurchaseConfirmMenu_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_ServantFramePurchaseMenu_EndBuyFrameConfirm__);
    sub_2213A60(&Method_ServantFramePurchaseMenu_EndBuyStoneConfirm__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596B161 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  CommonUI__CloseStonePurchaseMenu(Instance, 0);
  if ( result <= 1 )
  {
    if ( result )
    {
      if ( result != 1 )
        return;
      v15 = this;
      v16 = 1;
LABEL_19:
      ServantFramePurchaseMenu__Callback(v15, v16, v7);
      return;
    }
LABEL_14:
    Instance = (CommonUI_o *)this->fields.purchaseConfirmMenu;
    this->fields.state = 4;
    if ( Instance )
    {
      ServantFramePurchaseConfirmMenu__Init((ServantFramePurchaseConfirmMenu_o *)Instance, v6);
      purchaseConfirmMenu = this->fields.purchaseConfirmMenu;
      stoneShopEntity = this->fields.stoneShopEntity;
      v10 = (ServantFramePurchaseConfirmMenu_CallbackFunc_o *)sub_2213CCC(ServantFramePurchaseConfirmMenu_CallbackFunc_TypeInfo);
      ServantFramePurchaseConfirmMenu_CallbackFunc___ctor(
        v10,
        (Il2CppObject *)this,
        Method_ServantFramePurchaseMenu_EndBuyStoneConfirm__,
        v18);
      if ( purchaseConfirmMenu )
      {
        v13 = purchaseConfirmMenu;
        v14 = 1;
        goto LABEL_17;
      }
    }
LABEL_21:
    sub_2213CDC(Instance, v6);
  }
  switch ( result )
  {
    case 4:
      goto LABEL_14;
    case 3:
      v15 = this;
      v16 = 0;
      goto LABEL_19;
    case 2:
      Instance = (CommonUI_o *)this->fields.purchaseConfirmMenu;
      this->fields.state = 3;
      if ( Instance )
      {
        ServantFramePurchaseConfirmMenu__Init((ServantFramePurchaseConfirmMenu_o *)Instance, v6);
        v8 = this->fields.purchaseConfirmMenu;
        stoneShopEntity = this->fields.stoneShopEntity;
        v10 = (ServantFramePurchaseConfirmMenu_CallbackFunc_o *)sub_2213CCC(ServantFramePurchaseConfirmMenu_CallbackFunc_TypeInfo);
        ServantFramePurchaseConfirmMenu_CallbackFunc___ctor(
          v10,
          (Il2CppObject *)this,
          Method_ServantFramePurchaseMenu_EndBuyFrameConfirm__,
          v11);
        if ( v8 )
        {
          v13 = v8;
          v14 = 0;
LABEL_17:
          ServantFramePurchaseConfirmMenu__Open(v13, v14, stoneShopEntity, v10, v12);
          return;
        }
      }
      goto LABEL_21;
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  ServantFramePurchaseMenu_o *v13; // x0
  ServantFramePurchaseMenu_CallbackFunc_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_596B15D & 1) == 0 )
  {
    sub_2213A60(&ServantFramePurchaseMenu_CallbackFunc_TypeInfo);
    byte_596B15D = 1;
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
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (ServantFramePurchaseMenu_o *)sub_221405C(v8, ServantFramePurchaseMenu_CallbackFunc_TypeInfo, v9, v10);
  ServantFramePurchaseMenu__remove_callbackFunc(v13, v14, v15);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  ServantFramePurchaseMenu_o *v13; // x0
  ServantFramePurchaseMenu_CallbackFunc_o *v14; // x1
  System_Action_o *v15; // x2
  const MethodInfo *v16; // x3

  if ( (byte_596B15E & 1) == 0 )
  {
    sub_2213A60(&ServantFramePurchaseMenu_CallbackFunc_TypeInfo);
    byte_596B15E = 1;
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
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (ServantFramePurchaseMenu_o *)sub_221405C(v8, ServantFramePurchaseMenu_CallbackFunc_TypeInfo, v9, v10);
  ServantFramePurchaseMenu__Open(v13, v14, v15, v16);
}


void ServantFramePurchaseMenu_CallbackFunc___ctor(
        ServantFramePurchaseMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_2001264;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_200121C;
}


System_IAsyncResult_o *ServantFramePurchaseMenu_CallbackFunc__BeginInvoke(
        ServantFramePurchaseMenu_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = result;
  if ( (byte_596B166 & 1) == 0 )
  {
    sub_2213A60(&ServantFramePurchaseMenu_Result_TypeInfo);
    byte_596B166 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(ServantFramePurchaseMenu_Result_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_2213A14(this, v9, callback, object);
}


void ServantFramePurchaseMenu_CallbackFunc__EndInvoke(
        ServantFramePurchaseMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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