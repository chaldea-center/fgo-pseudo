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
  sub_1C21DDC(p_callbackFunc, 0LL);
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
      sub_1C22094(purchaseConfirmMenu, method);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)purchaseConfirmMenu, 0, 0LL);
    this->fields.stoneShopEntity = 0LL;
    sub_1C21DDC(&this->fields.stoneShopEntity, 0LL);
    this->fields.refreshCallbackFunc = 0LL;
    p_refreshCallbackFunc = &this->fields.refreshCallbackFunc;
    sub_1C21DDC(p_refreshCallbackFunc, 0LL);
    *((_DWORD *)p_refreshCallbackFunc + 4) = 0;
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

  if ( (byte_4BD7247 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_ServantEquipFramePurchaseMenu_EndCloseBuyFrameConfirmCancel__);
    byte_4BD7247 = 1;
  }
  if ( isDecide )
  {
    this->fields.state = 6;
    ServantEquipFramePurchaseMenu__RequestServantEquipFramePurchase(this, (const MethodInfo *)isDecide);
  }
  else
  {
    purchaseConfirmMenu = this->fields.purchaseConfirmMenu;
    v6 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(
      v6,
      (Il2CppObject *)this,
      Method_ServantEquipFramePurchaseMenu_EndCloseBuyFrameConfirmCancel__,
      0LL);
    if ( !purchaseConfirmMenu )
      sub_1C22094(v7, v8);
    ServantEquipFramePurchaseConfirmMenu__Close_31317048(purchaseConfirmMenu, v6, v9);
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

  if ( (byte_4BD724A & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_ServantEquipFramePurchaseMenu_EndCloseBuyFrameConfirmPurchase__);
    byte_4BD724A = 1;
  }
  purchaseConfirmMenu = this->fields.purchaseConfirmMenu;
  v5 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(
    v5,
    (Il2CppObject *)this,
    Method_ServantEquipFramePurchaseMenu_EndCloseBuyFrameConfirmPurchase__,
    0LL);
  if ( !purchaseConfirmMenu )
    sub_1C22094(v6, v7);
  ServantEquipFramePurchaseConfirmMenu__Close_31317048(purchaseConfirmMenu, v5, v8);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantEquipFramePurchaseMenu__EndBuyStoneConfirm(
        ServantEquipFramePurchaseMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  StonePurchaseMenu_CallbackFunc_o *v6; // x21
  ServantEquipFramePurchaseConfirmMenu_o *purchaseConfirmMenu; // x0
  const MethodInfo *v8; // x2

  if ( (byte_4BD7245 & 1) == 0 )
  {
    sub_1C21E38(&StonePurchaseMenu_CallbackFunc_TypeInfo);
    sub_1C21E38(&Method_ServantEquipFramePurchaseMenu_SelectedBuyBankItemConfirm__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BD7245 = 1;
  }
  if ( isDecide )
  {
    this->fields.state = 5;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v6 = (StonePurchaseMenu_CallbackFunc_o *)sub_1C22084(StonePurchaseMenu_CallbackFunc_TypeInfo);
    StonePurchaseMenu_CallbackFunc___ctor(
      v6,
      (Il2CppObject *)this,
      Method_ServantEquipFramePurchaseMenu_SelectedBuyBankItemConfirm__,
      0LL);
    if ( Instance )
    {
      CommonUI__OpenStonePurchaseMenu((CommonUI_o *)Instance, v6, this->fields.refreshCallbackFunc, 0LL);
      return;
    }
LABEL_8:
    sub_1C22094(purchaseConfirmMenu, isDecide);
  }
  purchaseConfirmMenu = this->fields.purchaseConfirmMenu;
  if ( !purchaseConfirmMenu )
    goto LABEL_8;
  ServantEquipFramePurchaseConfirmMenu__Close_31317048(purchaseConfirmMenu, 0LL, method);
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
    sub_1C22094(0LL, isDecide);
  ServantEquipFramePurchaseConfirmMenu__Close_31317048(purchaseConfirmMenu, 0LL, method);
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
    sub_1C22094(0LL, isDecide);
  ServantEquipFramePurchaseConfirmMenu__Close_31317048(purchaseConfirmMenu, 0LL, method);
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
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x4
  struct System_Action_o *refreshCallbackFunc; // x8

  if ( (byte_4BD7249 & 1) == 0 )
  {
    sub_1C21E38(&ServantEquipFramePurchaseConfirmMenu_CallbackFunc_TypeInfo);
    sub_1C21E38(&Method_ServantEquipFramePurchaseMenu_EndBuyFrameResultConfirm__);
    byte_4BD7249 = 1;
  }
  purchaseConfirmMenu = this->fields.purchaseConfirmMenu;
  this->fields.state = 7;
  if ( !purchaseConfirmMenu
    || (ServantEquipFramePurchaseConfirmMenu__Init(purchaseConfirmMenu, (const MethodInfo *)result),
        v5 = this->fields.purchaseConfirmMenu,
        stoneShopEntity = this->fields.stoneShopEntity,
        v7 = (ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o *)sub_1C22084(ServantEquipFramePurchaseConfirmMenu_CallbackFunc_TypeInfo),
        ServantEquipFramePurchaseConfirmMenu_CallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_ServantEquipFramePurchaseMenu_EndBuyFrameResultConfirm__,
          v8),
        !v5) )
  {
    sub_1C22094(purchaseConfirmMenu, result);
  }
  ServantEquipFramePurchaseConfirmMenu__Open(v5, 2, stoneShopEntity, v7, v9);
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
  void *gameObject; // x0
  __int64 v8; // x1
  UserGameEntity_o *SelfUserGame; // x20
  __int64 v10; // x8
  struct StoneShopEntity_o *v11; // x1
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

  if ( (byte_4BD7244 & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&ServantEquipFramePurchaseConfirmMenu_CallbackFunc_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_StoneShopMaster___);
    sub_1C21E38(&Method_ServantEquipFramePurchaseMenu_EndBuyFrameConfirm__);
    sub_1C21E38(&Method_ServantEquipFramePurchaseMenu_EndBuyStoneConfirm__);
    sub_1C21E38(&Method_ServantEquipFramePurchaseMenu_EndMaxFrameConfirm__);
    sub_1C21E38(&Method_ServantEquipFramePurchaseMenu_EndNoShopConfirm__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD7244 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callbackFunc = callback;
    sub_1C21DDC(&this->fields.callbackFunc, callback);
    this->fields.refreshCallbackFunc = refreshCallback;
    sub_1C21DDC(&this->fields.refreshCallbackFunc, refreshCallback);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_27;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_27;
    gameObject = DataManager__GetMasterData_object_(
                   (DataManager_o *)gameObject,
                   (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_StoneShopMaster___);
    if ( !gameObject )
      goto LABEL_27;
    gameObject = StoneShopMaster__GetEnableEntitiyList_41265216((StoneShopMaster_o *)gameObject, 13, 0LL);
    if ( !gameObject )
      goto LABEL_27;
    v10 = *((_QWORD *)gameObject + 3);
    if ( v10 )
    {
      if ( !(_DWORD)v10 )
        sub_1C2209C(gameObject, v8);
      v11 = (struct StoneShopEntity_o *)*((_QWORD *)gameObject + 4);
      this->fields.stoneShopEntity = v11;
      gameObject = (void *)sub_1C21DDC(&this->fields.stoneShopEntity, v11);
      if ( !SelfUserGame )
        goto LABEL_27;
      svtEquipKeep = SelfUserGame->fields.svtEquipKeep;
      gameObject = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
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
            v15 = (ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o *)sub_1C22084(ServantEquipFramePurchaseConfirmMenu_CallbackFunc_TypeInfo);
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
            v15 = (ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o *)sub_1C22084(ServantEquipFramePurchaseConfirmMenu_CallbackFunc_TypeInfo);
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
        sub_1C22094(gameObject, v8);
      }
      this->fields.state = 2;
      v20 = this->fields.purchaseConfirmMenu;
      v21 = (ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o *)sub_1C22084(ServantEquipFramePurchaseConfirmMenu_CallbackFunc_TypeInfo);
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
      v21 = (ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o *)sub_1C22084(ServantEquipFramePurchaseConfirmMenu_CallbackFunc_TypeInfo);
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
    v24 = 0LL;
    v25 = v21;
LABEL_26:
    ServantEquipFramePurchaseConfirmMenu__Open(v19, v18, v24, v25, v17);
  }
}


void __fastcall ServantEquipFramePurchaseMenu__RequestServantEquipFramePurchase(
        ServantEquipFramePurchaseMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  NetworkManager_ResultCallbackFunc_o *v4; // x20
  Il2CppObject *Request_object; // x0
  __int64 v6; // x1
  struct StoneShopEntity_o *stoneShopEntity; // x8

  if ( (byte_4BD7248 & 1) == 0 )
  {
    sub_1C21E38(&Method_NetworkManager_getRequest_PurchaseByStoneRequest___);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C21E38(&Method_ServantEquipFramePurchaseMenu_EndRequestServantEquipFramePurchase__);
    byte_4BD7248 = 1;
  }
  if ( this->fields.stoneShopEntity )
  {
    v4 = (NetworkManager_ResultCallbackFunc_o *)sub_1C22084(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v4,
      (Il2CppObject *)this,
      Method_ServantEquipFramePurchaseMenu_EndRequestServantEquipFramePurchase__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v4,
                       (const MethodInfo_30345EC *)Method_NetworkManager_getRequest_PurchaseByStoneRequest___);
    stoneShopEntity = this->fields.stoneShopEntity;
    if ( !stoneShopEntity || !Request_object )
      sub_1C22094(Request_object, v6);
    PurchaseByStoneRequest__beginRequest((PurchaseByStoneRequest_o *)Request_object, stoneShopEntity->fields.id, 1, 0LL);
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

  if ( (byte_4BD7246 & 1) == 0 )
  {
    sub_1C21E38(&ServantEquipFramePurchaseConfirmMenu_CallbackFunc_TypeInfo);
    sub_1C21E38(&Method_ServantEquipFramePurchaseMenu_EndBuyFrameConfirm__);
    sub_1C21E38(&Method_ServantEquipFramePurchaseMenu_EndBuyStoneConfirm__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BD7246 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
LABEL_15:
    sub_1C22094(Instance, v6);
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
      v10 = (ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o *)sub_1C22084(ServantEquipFramePurchaseConfirmMenu_CallbackFunc_TypeInfo);
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
      v10 = (ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o *)sub_1C22084(ServantEquipFramePurchaseConfirmMenu_CallbackFunc_TypeInfo);
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

  if ( (byte_4BD7242 & 1) == 0 )
  {
    sub_1C21E38(&ServantEquipFramePurchaseMenu_CallbackFunc_TypeInfo);
    byte_4BD7242 = 1;
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
    v9 = sub_1C5D328(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ServantEquipFramePurchaseMenu_o *)sub_1C22354(v8);
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

  if ( (byte_4BD7243 & 1) == 0 )
  {
    sub_1C21E38(&ServantEquipFramePurchaseMenu_CallbackFunc_TypeInfo);
    byte_4BD7243 = 1;
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
    v9 = sub_1C5D328(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ServantEquipFramePurchaseMenu_o *)sub_1C22354(v8);
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
  sub_1C21DDC(&this->fields.method, object);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1C21EF8(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C220B0(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C21F60(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A5B518;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A5B4D0;
}


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
  if ( (byte_4BD724B & 1) == 0 )
  {
    sub_1C21E38(&ServantEquipFramePurchaseMenu_Result_TypeInfo);
    byte_4BD724B = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(ServantEquipFramePurchaseMenu_Result_TypeInfo, &v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C21DEC(this, v9, callback, object);
}


void __fastcall ServantEquipFramePurchaseMenu_CallbackFunc__EndInvoke(
        ServantEquipFramePurchaseMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C21DF0(result, 0LL, method);
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