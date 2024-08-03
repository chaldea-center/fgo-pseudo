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
  sub_1B6406C(p_callbackFunc);
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
      || (ServantEquipFramePurchaseConfirmMenu__Init(purchaseConfirmMenu, 0LL),
          (purchaseConfirmMenu = (ServantEquipFramePurchaseConfirmMenu_o *)UnityEngine_Component__get_gameObject(
                                                                             (UnityEngine_Component_o *)this,
                                                                             0LL)) == 0LL) )
    {
      sub_1B64324(purchaseConfirmMenu);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)purchaseConfirmMenu, 0, 0LL);
    this->fields.stoneShopEntity = 0LL;
    sub_1B6406C(&this->fields.stoneShopEntity);
    this->fields.refreshCallbackFunc = 0LL;
    p_refreshCallbackFunc = &this->fields.refreshCallbackFunc;
    sub_1B6406C(p_refreshCallbackFunc);
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

  if ( (byte_49F76C8 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, isDecide);
    sub_1B640C8(&Method_ServantEquipFramePurchaseMenu_EndCloseBuyFrameConfirmCancel__, v5);
    byte_49F76C8 = 1;
  }
  if ( isDecide )
  {
    this->fields.state = 6;
    ServantEquipFramePurchaseMenu__RequestServantEquipFramePurchase(this, (const MethodInfo *)isDecide);
  }
  else
  {
    purchaseConfirmMenu = this->fields.purchaseConfirmMenu;
    v7 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, isDecide, method);
    System_Action___ctor(
      v7,
      (Il2CppObject *)this,
      Method_ServantEquipFramePurchaseMenu_EndCloseBuyFrameConfirmCancel__,
      0LL);
    if ( !purchaseConfirmMenu )
      sub_1B64324(v8);
    ServantEquipFramePurchaseConfirmMenu__Close_45037136(purchaseConfirmMenu, v7, 0LL);
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

  if ( (byte_49F76CB & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, isDecide);
    sub_1B640C8(&Method_ServantEquipFramePurchaseMenu_EndCloseBuyFrameConfirmPurchase__, v4);
    byte_49F76CB = 1;
  }
  purchaseConfirmMenu = this->fields.purchaseConfirmMenu;
  v6 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, isDecide, method);
  System_Action___ctor(
    v6,
    (Il2CppObject *)this,
    Method_ServantEquipFramePurchaseMenu_EndCloseBuyFrameConfirmPurchase__,
    0LL);
  if ( !purchaseConfirmMenu )
    sub_1B64324(v7);
  ServantEquipFramePurchaseConfirmMenu__Close_45037136(purchaseConfirmMenu, v6, 0LL);
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
  __int64 v8; // x1
  __int64 v9; // x2
  StonePurchaseMenu_CallbackFunc_o *v10; // x21
  ServantEquipFramePurchaseConfirmMenu_o *purchaseConfirmMenu; // x0
  const MethodInfo *v12; // x2

  if ( (byte_49F76C6 & 1) == 0 )
  {
    sub_1B640C8(&StonePurchaseMenu_CallbackFunc_TypeInfo, isDecide);
    sub_1B640C8(&Method_ServantEquipFramePurchaseMenu_SelectedBuyBankItemConfirm__, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_49F76C6 = 1;
  }
  if ( isDecide )
  {
    this->fields.state = 5;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v10 = (StonePurchaseMenu_CallbackFunc_o *)sub_1B64314(StonePurchaseMenu_CallbackFunc_TypeInfo, v8, v9);
    StonePurchaseMenu_CallbackFunc___ctor(
      v10,
      (Il2CppObject *)this,
      Method_ServantEquipFramePurchaseMenu_SelectedBuyBankItemConfirm__,
      0LL);
    if ( Instance )
    {
      CommonUI__OpenStonePurchaseMenu((CommonUI_o *)Instance, v10, this->fields.refreshCallbackFunc, 0LL);
      return;
    }
LABEL_8:
    sub_1B64324(purchaseConfirmMenu);
  }
  purchaseConfirmMenu = this->fields.purchaseConfirmMenu;
  if ( !purchaseConfirmMenu )
    goto LABEL_8;
  ServantEquipFramePurchaseConfirmMenu__Close(purchaseConfirmMenu, 0LL);
  ServantEquipFramePurchaseMenu__Callback(this, 0, v12);
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
    sub_1B64324(0LL);
  ServantEquipFramePurchaseConfirmMenu__Close(purchaseConfirmMenu, 0LL);
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
    sub_1B64324(0LL);
  ServantEquipFramePurchaseConfirmMenu__Close(purchaseConfirmMenu, 0LL);
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
  __int64 v8; // x1
  __int64 v9; // x2
  ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o *v10; // x22
  const MethodInfo *v11; // x3
  struct System_Action_o *refreshCallbackFunc; // x8

  if ( (byte_49F76CA & 1) == 0 )
  {
    sub_1B640C8(&ServantEquipFramePurchaseConfirmMenu_CallbackFunc_TypeInfo, result);
    sub_1B640C8(&Method_ServantEquipFramePurchaseMenu_EndBuyFrameResultConfirm__, v4);
    byte_49F76CA = 1;
  }
  purchaseConfirmMenu = this->fields.purchaseConfirmMenu;
  this->fields.state = 7;
  if ( !purchaseConfirmMenu
    || (ServantEquipFramePurchaseConfirmMenu__Init(purchaseConfirmMenu, 0LL),
        v6 = this->fields.purchaseConfirmMenu,
        stoneShopEntity = this->fields.stoneShopEntity,
        v10 = (ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o *)sub_1B64314(
                                                                       ServantEquipFramePurchaseConfirmMenu_CallbackFunc_TypeInfo,
                                                                       v8,
                                                                       v9),
        ServantEquipFramePurchaseConfirmMenu_CallbackFunc___ctor(
          v10,
          (Il2CppObject *)this,
          Method_ServantEquipFramePurchaseMenu_EndBuyFrameResultConfirm__,
          v11),
        !v6) )
  {
    sub_1B64324(purchaseConfirmMenu);
  }
  ServantEquipFramePurchaseConfirmMenu__Open(v6, 2, stoneShopEntity, v10, 0LL);
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
  UserGameEntity_o *SelfUserGame; // x20
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x8
  __int64 v20; // x1
  __int64 v21; // x2
  int32_t svtEquipKeep; // w22
  struct StoneShopEntity_o *stoneShopEntity; // x21
  struct ServantEquipFramePurchaseConfirmMenu_o *v24; // x20
  ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o *v25; // x22
  const MethodInfo *v26; // x3
  int32_t v27; // w1
  ServantEquipFramePurchaseConfirmMenu_o *v28; // x0
  struct ServantEquipFramePurchaseConfirmMenu_o *v29; // x20
  ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o *v30; // x21
  const MethodInfo *v31; // x3
  const MethodInfo *v32; // x3
  StoneShopEntity_o *v33; // x2
  ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o *v34; // x3
  struct ServantEquipFramePurchaseConfirmMenu_o *purchaseConfirmMenu; // x20
  const MethodInfo *v36; // x3

  if ( (byte_49F76C5 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, callback);
    sub_1B640C8(&ServantEquipFramePurchaseConfirmMenu_CallbackFunc_TypeInfo, v7);
    sub_1B640C8(&Method_DataManager_GetMasterData_StoneShopMaster___, v8);
    sub_1B640C8(&Method_ServantEquipFramePurchaseMenu_EndBuyFrameConfirm__, v9);
    sub_1B640C8(&Method_ServantEquipFramePurchaseMenu_EndBuyStoneConfirm__, v10);
    sub_1B640C8(&Method_ServantEquipFramePurchaseMenu_EndMaxFrameConfirm__, v11);
    sub_1B640C8(&Method_ServantEquipFramePurchaseMenu_EndNoShopConfirm__, v12);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_49F76C5 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callbackFunc = callback;
    sub_1B6406C(&this->fields.callbackFunc);
    this->fields.refreshCallbackFunc = refreshCallback;
    sub_1B6406C(&this->fields.refreshCallbackFunc);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_27;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_27;
    gameObject = DataManager__GetMasterData_object_(
                   (DataManager_o *)gameObject,
                   (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_StoneShopMaster___);
    if ( !gameObject )
      goto LABEL_27;
    gameObject = StoneShopMaster__GetEnableEntitiyList_39578388((StoneShopMaster_o *)gameObject, 13, 0LL);
    if ( !gameObject )
      goto LABEL_27;
    v19 = *((_QWORD *)gameObject + 3);
    if ( v19 )
    {
      if ( !(_DWORD)v19 )
        sub_1B6432C(gameObject, v16, v17, v18);
      this->fields.stoneShopEntity = (struct StoneShopEntity_o *)*((_QWORD *)gameObject + 4);
      gameObject = (void *)sub_1B6406C(&this->fields.stoneShopEntity);
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
            v25 = (ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o *)sub_1B64314(
                                                                           ServantEquipFramePurchaseConfirmMenu_CallbackFunc_TypeInfo,
                                                                           v20,
                                                                           v21);
            ServantEquipFramePurchaseConfirmMenu_CallbackFunc___ctor(
              v25,
              (Il2CppObject *)this,
              Method_ServantEquipFramePurchaseMenu_EndBuyFrameConfirm__,
              v36);
            if ( purchaseConfirmMenu )
            {
              v28 = purchaseConfirmMenu;
              v27 = 0;
              goto LABEL_25;
            }
          }
          else
          {
            this->fields.state = 4;
            v24 = this->fields.purchaseConfirmMenu;
            v25 = (ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o *)sub_1B64314(
                                                                           ServantEquipFramePurchaseConfirmMenu_CallbackFunc_TypeInfo,
                                                                           v20,
                                                                           v21);
            ServantEquipFramePurchaseConfirmMenu_CallbackFunc___ctor(
              v25,
              (Il2CppObject *)this,
              Method_ServantEquipFramePurchaseMenu_EndBuyStoneConfirm__,
              v26);
            if ( v24 )
            {
              v27 = 1;
              v28 = v24;
LABEL_25:
              v33 = stoneShopEntity;
              v34 = v25;
              goto LABEL_26;
            }
          }
        }
LABEL_27:
        sub_1B64324(gameObject);
      }
      this->fields.state = 2;
      v29 = this->fields.purchaseConfirmMenu;
      v30 = (ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o *)sub_1B64314(
                                                                     ServantEquipFramePurchaseConfirmMenu_CallbackFunc_TypeInfo,
                                                                     v20,
                                                                     v21);
      ServantEquipFramePurchaseConfirmMenu_CallbackFunc___ctor(
        v30,
        (Il2CppObject *)this,
        Method_ServantEquipFramePurchaseMenu_EndMaxFrameConfirm__,
        v32);
      if ( !v29 )
        goto LABEL_27;
      v27 = 3;
    }
    else
    {
      this->fields.state = 1;
      v29 = this->fields.purchaseConfirmMenu;
      v30 = (ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o *)sub_1B64314(
                                                                     ServantEquipFramePurchaseConfirmMenu_CallbackFunc_TypeInfo,
                                                                     v16,
                                                                     v17);
      ServantEquipFramePurchaseConfirmMenu_CallbackFunc___ctor(
        v30,
        (Il2CppObject *)this,
        Method_ServantEquipFramePurchaseMenu_EndNoShopConfirm__,
        v31);
      if ( !v29 )
        goto LABEL_27;
      v27 = 4;
    }
    v28 = v29;
    v33 = 0LL;
    v34 = v30;
LABEL_26:
    ServantEquipFramePurchaseConfirmMenu__Open(v28, v27, v33, v34, 0LL);
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
  struct StoneShopEntity_o *stoneShopEntity; // x8

  if ( (byte_49F76C9 & 1) == 0 )
  {
    sub_1B640C8(&Method_NetworkManager_getRequest_PurchaseByStoneRequest___, method);
    sub_1B640C8(&NetworkManager_TypeInfo, v4);
    sub_1B640C8(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    sub_1B640C8(&Method_ServantEquipFramePurchaseMenu_EndRequestServantEquipFramePurchase__, v6);
    byte_49F76C9 = 1;
  }
  if ( this->fields.stoneShopEntity )
  {
    v7 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, method, v2);
    NetworkManager_ResultCallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      Method_ServantEquipFramePurchaseMenu_EndRequestServantEquipFramePurchase__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v7,
                       (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_PurchaseByStoneRequest___);
    stoneShopEntity = this->fields.stoneShopEntity;
    if ( !stoneShopEntity || !Request_object )
      sub_1B64324(Request_object);
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
  const MethodInfo *v9; // x2
  struct ServantEquipFramePurchaseConfirmMenu_o *purchaseConfirmMenu; // x20
  struct StoneShopEntity_o *stoneShopEntity; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o *v14; // x22
  const MethodInfo *v15; // x3
  int32_t v16; // w1
  ServantEquipFramePurchaseConfirmMenu_o *v17; // x0
  StoneShopEntity_o *v18; // x2
  int32_t v19; // w1
  ServantEquipFramePurchaseMenu_o *v20; // x0
  struct ServantEquipFramePurchaseConfirmMenu_o *v21; // x21
  struct StoneShopEntity_o *v22; // x20
  __int64 v23; // x1
  __int64 v24; // x2
  const MethodInfo *v25; // x3

  if ( (byte_49F76C7 & 1) == 0 )
  {
    sub_1B640C8(&ServantEquipFramePurchaseConfirmMenu_CallbackFunc_TypeInfo, *(_QWORD *)&result);
    sub_1B640C8(&Method_ServantEquipFramePurchaseMenu_EndBuyFrameConfirm__, v5);
    sub_1B640C8(&Method_ServantEquipFramePurchaseMenu_EndBuyStoneConfirm__, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_49F76C7 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
LABEL_15:
    sub_1B64324(Instance);
  CommonUI__CloseStonePurchaseMenu(Instance, 0LL);
  switch ( result )
  {
    case 0:
    case 4:
      Instance = (CommonUI_o *)this->fields.purchaseConfirmMenu;
      this->fields.state = 4;
      if ( !Instance )
        goto LABEL_15;
      ServantEquipFramePurchaseConfirmMenu__Init((ServantEquipFramePurchaseConfirmMenu_o *)Instance, 0LL);
      purchaseConfirmMenu = this->fields.purchaseConfirmMenu;
      stoneShopEntity = this->fields.stoneShopEntity;
      v14 = (ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o *)sub_1B64314(
                                                                     ServantEquipFramePurchaseConfirmMenu_CallbackFunc_TypeInfo,
                                                                     v12,
                                                                     v13);
      ServantEquipFramePurchaseConfirmMenu_CallbackFunc___ctor(
        v14,
        (Il2CppObject *)this,
        Method_ServantEquipFramePurchaseMenu_EndBuyStoneConfirm__,
        v15);
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
      ServantEquipFramePurchaseConfirmMenu__Init((ServantEquipFramePurchaseConfirmMenu_o *)Instance, 0LL);
      v21 = this->fields.purchaseConfirmMenu;
      v22 = this->fields.stoneShopEntity;
      v14 = (ServantEquipFramePurchaseConfirmMenu_CallbackFunc_o *)sub_1B64314(
                                                                     ServantEquipFramePurchaseConfirmMenu_CallbackFunc_TypeInfo,
                                                                     v23,
                                                                     v24);
      ServantEquipFramePurchaseConfirmMenu_CallbackFunc___ctor(
        v14,
        (Il2CppObject *)this,
        Method_ServantEquipFramePurchaseMenu_EndBuyFrameConfirm__,
        v25);
      if ( !v21 )
        goto LABEL_15;
      v17 = v21;
      v16 = 0;
      v18 = v22;
LABEL_12:
      ServantEquipFramePurchaseConfirmMenu__Open(v17, v16, v18, v14, 0LL);
      break;
    case 3:
      v20 = this;
      v19 = 0;
LABEL_14:
      ServantEquipFramePurchaseMenu__Callback(v20, v19, v9);
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

  if ( (byte_49F76C3 & 1) == 0 )
  {
    sub_1B640C8(&ServantEquipFramePurchaseMenu_CallbackFunc_TypeInfo, value);
    byte_49F76C3 = 1;
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
    v9 = sub_1B9F5B8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ServantEquipFramePurchaseMenu_o *)sub_1B645E4(v8);
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

  if ( (byte_49F76C4 & 1) == 0 )
  {
    sub_1B640C8(&ServantEquipFramePurchaseMenu_CallbackFunc_TypeInfo, value);
    byte_49F76C4 = 1;
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
    v9 = sub_1B9F5B8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ServantEquipFramePurchaseMenu_o *)sub_1B645E4(v8);
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
  sub_1B6406C(&this->fields.method);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64188(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64340(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B641F0(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19A4630;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19A45E8;
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
  if ( (byte_49F76CC & 1) == 0 )
  {
    sub_1B640C8(&ServantEquipFramePurchaseMenu_Result_TypeInfo, *(_QWORD *)&result);
    byte_49F76CC = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(ServantEquipFramePurchaseMenu_Result_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_1B6407C(this, v9, callback, object);
}


void __fastcall ServantEquipFramePurchaseMenu_CallbackFunc__EndInvoke(
        ServantEquipFramePurchaseMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64080(result, 0LL, method);
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