void UserGameActRecoverMenu___ctor(UserGameActRecoverMenu_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void UserGameActRecoverMenu__Callback(UserGameActRecoverMenu_o *this, int32_t result, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_callbackFunc; // x0
  struct UserGameActRecoverMenu_CallbackFunc_o *v5; // x20
  struct UserGameActRecoverMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
  v5 = callbackFunc;
  p_callbackFunc->klass = 0;
  sub_1C6B9AC(p_callbackFunc, 0, (int32_t)method, v3);
  if ( callbackFunc )
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))v5->fields.invoke_impl)(
      v5->fields.method_code,
      (unsigned int)result,
      v5->fields.method);
}


void UserGameActRecoverMenu__Close(UserGameActRecoverMenu_o *this, const MethodInfo *method)
{
  UserGameActRecoverConfirmMenu_o *recoverConfirmMenu; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  CGThumbnailListItem_o *p_refreshCallbackFunc; // x19
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( this->fields.state )
  {
    recoverConfirmMenu = this->fields.recoverConfirmMenu;
    if ( !recoverConfirmMenu
      || (UserGameActRecoverConfirmMenu__Init(recoverConfirmMenu, method),
          (recoverConfirmMenu = (UserGameActRecoverConfirmMenu_o *)UnityEngine_Component__get_gameObject(
                                                                     (UnityEngine_Component_o *)this,
                                                                     0)) == 0) )
    {
      sub_1C6BC60(recoverConfirmMenu, method);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)recoverConfirmMenu, 0, 0);
    this->fields.stoneShopEntity = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.stoneShopEntity, 0, v4, v5);
    this->fields.refreshCallbackFunc = 0;
    p_refreshCallbackFunc = (CGThumbnailListItem_o *)&this->fields.refreshCallbackFunc;
    sub_1C6B9AC(p_refreshCallbackFunc, 0, v7, v8);
    p_refreshCallbackFunc->fields.selectNum = 0;
  }
}


void UserGameActRecoverMenu__EndBuyStoneConfirm(
        UserGameActRecoverMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  StonePurchaseMenu_CallbackFunc_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  UserGameActRecoverConfirmMenu_o *recoverConfirmMenu; // x20
  System_Action_o *v10; // x21
  const MethodInfo *v11; // x2

  if ( (byte_4CB4F48 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&StonePurchaseMenu_CallbackFunc_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C6BA08(&Method_UserGameActRecoverMenu_EndCloseBuyStoneConfirm__);
    sub_1C6BA08(&Method_UserGameActRecoverMenu_SelectedBuyBankItemConfirm__);
    byte_4CB4F48 = 1;
  }
  if ( isDecide )
  {
    this->fields.state = 5;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v6 = (StonePurchaseMenu_CallbackFunc_o *)sub_1C6BC54(StonePurchaseMenu_CallbackFunc_TypeInfo);
    StonePurchaseMenu_CallbackFunc___ctor(
      v6,
      (Il2CppObject *)this,
      Method_UserGameActRecoverMenu_SelectedBuyBankItemConfirm__,
      0);
    if ( Instance )
    {
      CommonUI__OpenStonePurchaseMenu((CommonUI_o *)Instance, v6, this->fields.refreshCallbackFunc, 0, 0);
      return;
    }
LABEL_8:
    sub_1C6BC60(v7, v8);
  }
  recoverConfirmMenu = this->fields.recoverConfirmMenu;
  v10 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_UserGameActRecoverMenu_EndCloseBuyStoneConfirm__, 0);
  if ( !recoverConfirmMenu )
    goto LABEL_8;
  UserGameActRecoverConfirmMenu__Close_40388768(recoverConfirmMenu, v10, v11);
}


void UserGameActRecoverMenu__EndCloseBuyStoneConfirm(UserGameActRecoverMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  UserGameActRecoverMenu__Callback(this, 0, v2);
}


void UserGameActRecoverMenu__EndCloseMaxFrameConfirm(UserGameActRecoverMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  UserGameActRecoverMenu__Callback(this, 0, v2);
}


void UserGameActRecoverMenu__EndCloseNoShopConfirm(UserGameActRecoverMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  UserGameActRecoverMenu__Callback(this, 1, v2);
}


void UserGameActRecoverMenu__EndCloseRecoverUserGameActConfirm(
        UserGameActRecoverMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  UserGameActRecoverMenu__Callback(this, 0, v2);
}


void UserGameActRecoverMenu__EndCloseRecoverUserGameActResultConfirm(
        UserGameActRecoverMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  UserGameActRecoverMenu__Callback(this, 2, v2);
}


void UserGameActRecoverMenu__EndMaxFrameConfirm(
        UserGameActRecoverMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  UserGameActRecoverConfirmMenu_o *recoverConfirmMenu; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_4CB4F47 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_UserGameActRecoverMenu_EndCloseMaxFrameConfirm__);
    byte_4CB4F47 = 1;
  }
  recoverConfirmMenu = this->fields.recoverConfirmMenu;
  v5 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_UserGameActRecoverMenu_EndCloseMaxFrameConfirm__, 0);
  if ( !recoverConfirmMenu )
    sub_1C6BC60(v6, v7);
  UserGameActRecoverConfirmMenu__Close_40388768(recoverConfirmMenu, v5, v8);
}


void UserGameActRecoverMenu__EndNoShopConfirm(UserGameActRecoverMenu_o *this, bool isDecide, const MethodInfo *method)
{
  UserGameActRecoverConfirmMenu_o *recoverConfirmMenu; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_4CB4F46 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_UserGameActRecoverMenu_EndCloseNoShopConfirm__);
    byte_4CB4F46 = 1;
  }
  recoverConfirmMenu = this->fields.recoverConfirmMenu;
  v5 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_UserGameActRecoverMenu_EndCloseNoShopConfirm__, 0);
  if ( !recoverConfirmMenu )
    sub_1C6BC60(v6, v7);
  UserGameActRecoverConfirmMenu__Close_40388768(recoverConfirmMenu, v5, v8);
}


// local variable allocation has failed, the output may be wrong!
void UserGameActRecoverMenu__EndRecoverUserGameActConfirm(
        UserGameActRecoverMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  UserGameActRecoverConfirmMenu_o *recoverConfirmMenu; // x20
  System_Action_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2

  if ( (byte_4CB4F4A & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_UserGameActRecoverMenu_EndCloseRecoverUserGameActConfirm__);
    byte_4CB4F4A = 1;
  }
  if ( isDecide )
  {
    this->fields.state = 6;
    UserGameActRecoverMenu__RequestUserGameActRecover(this, (const MethodInfo *)isDecide);
  }
  else
  {
    recoverConfirmMenu = this->fields.recoverConfirmMenu;
    v6 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
    System_Action___ctor(v6, (Il2CppObject *)this, Method_UserGameActRecoverMenu_EndCloseRecoverUserGameActConfirm__, 0);
    if ( !recoverConfirmMenu )
      sub_1C6BC60(v7, v8);
    UserGameActRecoverConfirmMenu__Close_40388768(recoverConfirmMenu, v6, v9);
  }
}


void UserGameActRecoverMenu__EndRecoverUserGameActResultConfirm(
        UserGameActRecoverMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  UserGameActRecoverConfirmMenu_o *recoverConfirmMenu; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_4CB4F4D & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_UserGameActRecoverMenu_EndCloseRecoverUserGameActResultConfirm__);
    byte_4CB4F4D = 1;
  }
  recoverConfirmMenu = this->fields.recoverConfirmMenu;
  v5 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(
    v5,
    (Il2CppObject *)this,
    Method_UserGameActRecoverMenu_EndCloseRecoverUserGameActResultConfirm__,
    0);
  if ( !recoverConfirmMenu )
    sub_1C6BC60(v6, v7);
  UserGameActRecoverConfirmMenu__Close_40388768(recoverConfirmMenu, v5, v8);
}


void UserGameActRecoverMenu__EndRequestUserGameActRecover(
        UserGameActRecoverMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  UserGameActRecoverConfirmMenu_o *recoverConfirmMenu; // x0
  UserGameActRecoverConfirmMenu_o *v5; // x20
  StoneShopEntity_o *stoneShopEntity; // x21
  UserGameActRecoverConfirmMenu_CallbackFunc_o *v7; // x22
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x4
  struct System_Action_o *refreshCallbackFunc; // x8

  if ( (byte_4CB4F4C & 1) == 0 )
  {
    sub_1C6BA08(&UserGameActRecoverConfirmMenu_CallbackFunc_TypeInfo);
    sub_1C6BA08(&Method_UserGameActRecoverMenu_EndRecoverUserGameActResultConfirm__);
    byte_4CB4F4C = 1;
  }
  recoverConfirmMenu = this->fields.recoverConfirmMenu;
  this->fields.state = 7;
  if ( !recoverConfirmMenu
    || (UserGameActRecoverConfirmMenu__Init(recoverConfirmMenu, (const MethodInfo *)result),
        v5 = this->fields.recoverConfirmMenu,
        stoneShopEntity = this->fields.stoneShopEntity,
        v7 = (UserGameActRecoverConfirmMenu_CallbackFunc_o *)sub_1C6BC54(UserGameActRecoverConfirmMenu_CallbackFunc_TypeInfo),
        UserGameActRecoverConfirmMenu_CallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_UserGameActRecoverMenu_EndRecoverUserGameActResultConfirm__,
          v8),
        !v5) )
  {
    sub_1C6BC60(recoverConfirmMenu, result);
  }
  UserGameActRecoverConfirmMenu__Open(v5, 2, stoneShopEntity, v7, v9);
  refreshCallbackFunc = this->fields.refreshCallbackFunc;
  if ( refreshCallbackFunc )
    ((void (__fastcall *)(intptr_t, intptr_t))refreshCallbackFunc->fields.invoke_impl)(
      refreshCallbackFunc->fields.method_code,
      refreshCallbackFunc->fields.method);
}


void UserGameActRecoverMenu__OnMoveEnd(UserGameActRecoverMenu_o *this, const MethodInfo *method)
{
  ;
}


void UserGameActRecoverMenu__Open(
        UserGameActRecoverMenu_o *this,
        UserGameActRecoverMenu_CallbackFunc_o *callback,
        System_Action_o *refreshCallback,
        const MethodInfo *method)
{
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v10; // x1
  UserGameEntity_o *SelfUserGame; // x20
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  UnityEngine_GameObject_c *klass; // x8
  struct StoneShopEntity_o *monitor; // x1
  struct StoneShopEntity_o *stoneShopEntity; // x21
  struct UserGameActRecoverConfirmMenu_o *v17; // x20
  UserGameActRecoverConfirmMenu_CallbackFunc_o *v18; // x22
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x4
  int32_t v21; // w1
  UserGameActRecoverConfirmMenu_o *v22; // x0
  struct UserGameActRecoverConfirmMenu_o *v23; // x20
  UserGameActRecoverConfirmMenu_CallbackFunc_o *v24; // x21
  const MethodInfo *v25; // x3
  const MethodInfo *v26; // x3
  StoneShopEntity_o *v27; // x2
  UserGameActRecoverConfirmMenu_CallbackFunc_o *v28; // x3
  struct UserGameActRecoverConfirmMenu_o *recoverConfirmMenu; // x20
  const MethodInfo *v30; // x3

  if ( (byte_4CB4F45 & 1) == 0 )
  {
    sub_1C6BA08(&UserGameActRecoverConfirmMenu_CallbackFunc_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMasterData_StoneShopMaster___);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&Method_UserGameActRecoverMenu_EndBuyStoneConfirm__);
    sub_1C6BA08(&Method_UserGameActRecoverMenu_EndMaxFrameConfirm__);
    sub_1C6BA08(&Method_UserGameActRecoverMenu_EndNoShopConfirm__);
    sub_1C6BA08(&Method_UserGameActRecoverMenu_EndRecoverUserGameActConfirm__);
    sub_1C6BA08(&StringLiteral_9938/*"OnMoveEnd"*/);
    byte_4CB4F45 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callbackFunc = callback;
    sub_1C6B9AC(
      (CGThumbnailListItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      (int32_t)refreshCallback,
      method);
    this->fields.refreshCallbackFunc = refreshCallback;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.refreshCallbackFunc, (int32_t)refreshCallback, v7, v8);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_25;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    SelfUserGame = UserGameMaster__getSelfUserGame(0);
    gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_25;
    gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)gameObject,
                                               (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_StoneShopMaster___);
    if ( !gameObject )
      goto LABEL_25;
    gameObject = (UnityEngine_GameObject_o *)StoneShopMaster__GetEnableEntitiyList_43191312(
                                               (StoneShopMaster_o *)gameObject,
                                               2,
                                               0);
    if ( !gameObject )
      goto LABEL_25;
    klass = gameObject[1].klass;
    if ( klass )
    {
      if ( !(_DWORD)klass )
        sub_1C6BC68(gameObject);
      monitor = (struct StoneShopEntity_o *)gameObject[1].monitor;
      this->fields.stoneShopEntity = monitor;
      sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.stoneShopEntity, (int32_t)monitor, v12, v13);
      if ( !SelfUserGame )
        goto LABEL_25;
      gameObject = (UnityEngine_GameObject_o *)UserGameEntity__IsNeedRecoverAct(SelfUserGame, 0);
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        stoneShopEntity = this->fields.stoneShopEntity;
        if ( stoneShopEntity )
        {
          if ( SelfUserGame->fields.stone >= stoneShopEntity->fields.price )
          {
            this->fields.state = 3;
            recoverConfirmMenu = this->fields.recoverConfirmMenu;
            v18 = (UserGameActRecoverConfirmMenu_CallbackFunc_o *)sub_1C6BC54(UserGameActRecoverConfirmMenu_CallbackFunc_TypeInfo);
            UserGameActRecoverConfirmMenu_CallbackFunc___ctor(
              v18,
              (Il2CppObject *)this,
              Method_UserGameActRecoverMenu_EndRecoverUserGameActConfirm__,
              v30);
            if ( recoverConfirmMenu )
            {
              v22 = recoverConfirmMenu;
              v21 = 0;
              goto LABEL_23;
            }
          }
          else
          {
            this->fields.state = 4;
            v17 = this->fields.recoverConfirmMenu;
            v18 = (UserGameActRecoverConfirmMenu_CallbackFunc_o *)sub_1C6BC54(UserGameActRecoverConfirmMenu_CallbackFunc_TypeInfo);
            UserGameActRecoverConfirmMenu_CallbackFunc___ctor(
              v18,
              (Il2CppObject *)this,
              Method_UserGameActRecoverMenu_EndBuyStoneConfirm__,
              v19);
            if ( v17 )
            {
              v21 = 1;
              v22 = v17;
LABEL_23:
              v27 = stoneShopEntity;
              v28 = v18;
              goto LABEL_24;
            }
          }
        }
LABEL_25:
        sub_1C6BC60(gameObject, v10);
      }
      this->fields.state = 2;
      v23 = this->fields.recoverConfirmMenu;
      v24 = (UserGameActRecoverConfirmMenu_CallbackFunc_o *)sub_1C6BC54(UserGameActRecoverConfirmMenu_CallbackFunc_TypeInfo);
      UserGameActRecoverConfirmMenu_CallbackFunc___ctor(
        v24,
        (Il2CppObject *)this,
        Method_UserGameActRecoverMenu_EndMaxFrameConfirm__,
        v26);
      if ( !v23 )
        goto LABEL_25;
      v21 = 3;
    }
    else
    {
      this->fields.state = 1;
      v23 = this->fields.recoverConfirmMenu;
      v24 = (UserGameActRecoverConfirmMenu_CallbackFunc_o *)sub_1C6BC54(UserGameActRecoverConfirmMenu_CallbackFunc_TypeInfo);
      UserGameActRecoverConfirmMenu_CallbackFunc___ctor(
        v24,
        (Il2CppObject *)this,
        Method_UserGameActRecoverMenu_EndNoShopConfirm__,
        v25);
      if ( !v23 )
        goto LABEL_25;
      v21 = 4;
    }
    v22 = v23;
    v27 = 0;
    v28 = v24;
LABEL_24:
    UserGameActRecoverConfirmMenu__Open(v22, v21, v27, v28, v20);
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9938/*"OnMoveEnd"*/,
      0.1,
      0);
  }
}


void UserGameActRecoverMenu__RequestUserGameActRecover(UserGameActRecoverMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  NetworkManager_ResultCallbackFunc_o *v4; // x20
  Il2CppObject *Request_object; // x0
  __int64 v6; // x1
  struct StoneShopEntity_o *stoneShopEntity; // x8

  if ( (byte_4CB4F4B & 1) == 0 )
  {
    sub_1C6BA08(&Method_NetworkManager_getRequest_PurchaseByStoneRequest___);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C6BA08(&Method_UserGameActRecoverMenu_EndRequestUserGameActRecover__);
    byte_4CB4F4B = 1;
  }
  if ( this->fields.stoneShopEntity )
  {
    v4 = (NetworkManager_ResultCallbackFunc_o *)sub_1C6BC54(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v4,
      (Il2CppObject *)this,
      Method_UserGameActRecoverMenu_EndRequestUserGameActRecover__,
      0);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v4,
                       (const MethodInfo_31C6C44 *)Method_NetworkManager_getRequest_PurchaseByStoneRequest___);
    stoneShopEntity = this->fields.stoneShopEntity;
    if ( !stoneShopEntity || !Request_object )
      sub_1C6BC60(Request_object, v6);
    PurchaseByStoneRequest__beginRequest((PurchaseByStoneRequest_o *)Request_object, stoneShopEntity->fields.id, 1, 0);
  }
  else
  {
    UserGameActRecoverMenu__Callback(this, 1, v2);
  }
}


void UserGameActRecoverMenu__SelectedBuyBankItemConfirm(
        UserGameActRecoverMenu_o *this,
        int32_t result,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2
  struct UserGameActRecoverConfirmMenu_o *recoverConfirmMenu; // x20
  struct StoneShopEntity_o *stoneShopEntity; // x21
  UserGameActRecoverConfirmMenu_CallbackFunc_o *v10; // x22
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x4
  int32_t v13; // w1
  UserGameActRecoverConfirmMenu_o *v14; // x0
  StoneShopEntity_o *v15; // x2
  int32_t v16; // w1
  UserGameActRecoverMenu_o *v17; // x0
  struct UserGameActRecoverConfirmMenu_o *v18; // x21
  struct StoneShopEntity_o *v19; // x20
  const MethodInfo *v20; // x3

  if ( (byte_4CB4F49 & 1) == 0 )
  {
    sub_1C6BA08(&UserGameActRecoverConfirmMenu_CallbackFunc_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C6BA08(&Method_UserGameActRecoverMenu_EndBuyStoneConfirm__);
    sub_1C6BA08(&Method_UserGameActRecoverMenu_EndRecoverUserGameActConfirm__);
    byte_4CB4F49 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
LABEL_15:
    sub_1C6BC60(Instance, v6);
  CommonUI__CloseStonePurchaseMenu(Instance, 0);
  switch ( result )
  {
    case 0:
    case 4:
      Instance = (CommonUI_o *)this->fields.recoverConfirmMenu;
      this->fields.state = 4;
      if ( !Instance )
        goto LABEL_15;
      UserGameActRecoverConfirmMenu__Init((UserGameActRecoverConfirmMenu_o *)Instance, v6);
      recoverConfirmMenu = this->fields.recoverConfirmMenu;
      stoneShopEntity = this->fields.stoneShopEntity;
      v10 = (UserGameActRecoverConfirmMenu_CallbackFunc_o *)sub_1C6BC54(UserGameActRecoverConfirmMenu_CallbackFunc_TypeInfo);
      UserGameActRecoverConfirmMenu_CallbackFunc___ctor(
        v10,
        (Il2CppObject *)this,
        Method_UserGameActRecoverMenu_EndBuyStoneConfirm__,
        v11);
      if ( !recoverConfirmMenu )
        goto LABEL_15;
      v13 = 1;
      v14 = recoverConfirmMenu;
      v15 = stoneShopEntity;
      goto LABEL_12;
    case 1:
      v16 = 1;
      v17 = this;
      goto LABEL_14;
    case 2:
      Instance = (CommonUI_o *)this->fields.recoverConfirmMenu;
      this->fields.state = 3;
      if ( !Instance )
        goto LABEL_15;
      UserGameActRecoverConfirmMenu__Init((UserGameActRecoverConfirmMenu_o *)Instance, v6);
      v18 = this->fields.recoverConfirmMenu;
      v19 = this->fields.stoneShopEntity;
      v10 = (UserGameActRecoverConfirmMenu_CallbackFunc_o *)sub_1C6BC54(UserGameActRecoverConfirmMenu_CallbackFunc_TypeInfo);
      UserGameActRecoverConfirmMenu_CallbackFunc___ctor(
        v10,
        (Il2CppObject *)this,
        Method_UserGameActRecoverMenu_EndRecoverUserGameActConfirm__,
        v20);
      if ( !v18 )
        goto LABEL_15;
      v14 = v18;
      v13 = 0;
      v15 = v19;
LABEL_12:
      UserGameActRecoverConfirmMenu__Open(v14, v13, v15, v10, v12);
      break;
    case 3:
      v17 = this;
      v16 = 0;
LABEL_14:
      UserGameActRecoverMenu__Callback(v17, v16, v7);
      break;
    default:
      return;
  }
}


void UserGameActRecoverMenu__add_callbackFunc(
        UserGameActRecoverMenu_o *this,
        UserGameActRecoverMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct UserGameActRecoverMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct UserGameActRecoverMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  UserGameActRecoverMenu_o *v11; // x0
  UserGameActRecoverMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4CB4F43 & 1) == 0 )
  {
    sub_1C6BA08(&UserGameActRecoverMenu_CallbackFunc_TypeInfo);
    byte_4CB4F43 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (UserGameActRecoverMenu_CallbackFunc_c *)v8->klass != UserGameActRecoverMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1CC77DC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C6BFFC(v8);
  UserGameActRecoverMenu__remove_callbackFunc(v11, v12, v13);
}


void UserGameActRecoverMenu__remove_callbackFunc(
        UserGameActRecoverMenu_o *this,
        UserGameActRecoverMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct UserGameActRecoverMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct UserGameActRecoverMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  UserGameActRecoverMenu_o *v11; // x0
  UserGameActRecoverMenu_CallbackFunc_o *v12; // x1
  System_Action_o *v13; // x2
  const MethodInfo *v14; // x3

  if ( (byte_4CB4F44 & 1) == 0 )
  {
    sub_1C6BA08(&UserGameActRecoverMenu_CallbackFunc_TypeInfo);
    byte_4CB4F44 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (UserGameActRecoverMenu_CallbackFunc_c *)v8->klass != UserGameActRecoverMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1CC77DC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C6BFFC(v8);
  UserGameActRecoverMenu__Open(v11, v12, v13, v14);
}


void UserGameActRecoverMenu_CallbackFunc___ctor(
        UserGameActRecoverMenu_CallbackFunc_o *this,
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
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C6BAC8(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C6BC7C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C6BB30(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1AA0E64;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AA0E1C;
}


System_IAsyncResult_o *UserGameActRecoverMenu_CallbackFunc__BeginInvoke(
        UserGameActRecoverMenu_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = result;
  if ( (byte_4CB4F4E & 1) == 0 )
  {
    sub_1C6BA08(&UserGameActRecoverMenu_Result_TypeInfo);
    byte_4CB4F4E = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(UserGameActRecoverMenu_Result_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_1C6B9BC(this, v9, callback, object);
}


void UserGameActRecoverMenu_CallbackFunc__EndInvoke(
        UserGameActRecoverMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C6B9C0(result, 0, method);
}


void UserGameActRecoverMenu_CallbackFunc__Invoke(
        UserGameActRecoverMenu_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    this->fields.method);
}