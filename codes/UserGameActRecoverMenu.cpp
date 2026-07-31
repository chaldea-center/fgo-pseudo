void UserGameActRecoverMenu___ctor(UserGameActRecoverMenu_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void UserGameActRecoverMenu__Callback(UserGameActRecoverMenu_o *this, int32_t result, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x0
  struct UserGameActRecoverMenu_CallbackFunc_o *v10; // x20
  struct UserGameActRecoverMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
  v10 = callbackFunc;
  p_callbackFunc->klass = 0;
  sub_21FFBF4(p_callbackFunc, 0, (System_String_o *)method, v3, v4, v5, v6, v7);
  if ( callbackFunc )
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))v10->fields.invoke_impl)(
      v10->fields.method_code,
      (unsigned int)result,
      v10->fields.method);
}


void UserGameActRecoverMenu__Close(UserGameActRecoverMenu_o *this, const MethodInfo *method)
{
  UserGameActRecoverConfirmMenu_o *recoverConfirmMenu; // x0
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
    recoverConfirmMenu = this->fields.recoverConfirmMenu;
    if ( !recoverConfirmMenu
      || (UserGameActRecoverConfirmMenu__Init(recoverConfirmMenu, method),
          (recoverConfirmMenu = (UserGameActRecoverConfirmMenu_o *)UnityEngine_Component__get_gameObject(
                                                                     (UnityEngine_Component_o *)this,
                                                                     0)) == 0) )
    {
      sub_21FFECC(recoverConfirmMenu, method);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)recoverConfirmMenu, 0, 0);
    this->fields.stoneShopEntity = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.stoneShopEntity, 0, v4, v5, v6, v7, v8, v9);
    this->fields.refreshCallbackFunc = 0;
    p_refreshCallbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.refreshCallbackFunc;
    sub_21FFBF4(p_refreshCallbackFunc, 0, v11, v12, v13, v14, v15, v16);
    p_refreshCallbackFunc->fields.selectNum = 0;
  }
}


void UserGameActRecoverMenu__EndBuyStoneConfirm(
        UserGameActRecoverMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  const MethodInfo_476E8C0 *v5; // x0
  Il2CppObject *Instance; // x20
  StonePurchaseMenu_CallbackFunc_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  UserGameActRecoverConfirmMenu_o *recoverConfirmMenu; // x20
  System_Action_o *v11; // x21
  const MethodInfo *v12; // x2

  if ( (byte_59372E1 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&StonePurchaseMenu_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_UserGameActRecoverMenu_EndCloseBuyStoneConfirm__);
    sub_21FFC50(&Method_UserGameActRecoverMenu_SelectedBuyBankItemConfirm__);
    byte_59372E1 = 1;
  }
  if ( isDecide )
  {
    v5 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
    this->fields.state = 5;
    Instance = SingletonMonoBehaviour_object___get_Instance(v5);
    v7 = (StonePurchaseMenu_CallbackFunc_o *)sub_21FFEBC(StonePurchaseMenu_CallbackFunc_TypeInfo);
    StonePurchaseMenu_CallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      Method_UserGameActRecoverMenu_SelectedBuyBankItemConfirm__,
      0);
    if ( Instance )
    {
      CommonUI__OpenStonePurchaseMenu((CommonUI_o *)Instance, v7, this->fields.refreshCallbackFunc, 0, 0);
      return;
    }
LABEL_8:
    sub_21FFECC(v8, v9);
  }
  recoverConfirmMenu = this->fields.recoverConfirmMenu;
  v11 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_UserGameActRecoverMenu_EndCloseBuyStoneConfirm__, 0);
  if ( !recoverConfirmMenu )
    goto LABEL_8;
  UserGameActRecoverConfirmMenu__Close_47087000(recoverConfirmMenu, v11, v12);
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

  if ( (byte_59372E0 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_UserGameActRecoverMenu_EndCloseMaxFrameConfirm__);
    byte_59372E0 = 1;
  }
  recoverConfirmMenu = this->fields.recoverConfirmMenu;
  v5 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_UserGameActRecoverMenu_EndCloseMaxFrameConfirm__, 0);
  if ( !recoverConfirmMenu )
    sub_21FFECC(v6, v7);
  UserGameActRecoverConfirmMenu__Close_47087000(recoverConfirmMenu, v5, v8);
}


void UserGameActRecoverMenu__EndNoShopConfirm(UserGameActRecoverMenu_o *this, bool isDecide, const MethodInfo *method)
{
  UserGameActRecoverConfirmMenu_o *recoverConfirmMenu; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_59372DF & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_UserGameActRecoverMenu_EndCloseNoShopConfirm__);
    byte_59372DF = 1;
  }
  recoverConfirmMenu = this->fields.recoverConfirmMenu;
  v5 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_UserGameActRecoverMenu_EndCloseNoShopConfirm__, 0);
  if ( !recoverConfirmMenu )
    sub_21FFECC(v6, v7);
  UserGameActRecoverConfirmMenu__Close_47087000(recoverConfirmMenu, v5, v8);
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

  if ( (byte_59372E3 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_UserGameActRecoverMenu_EndCloseRecoverUserGameActConfirm__);
    byte_59372E3 = 1;
  }
  if ( isDecide )
  {
    this->fields.state = 6;
    UserGameActRecoverMenu__RequestUserGameActRecover(this, (const MethodInfo *)isDecide);
  }
  else
  {
    recoverConfirmMenu = this->fields.recoverConfirmMenu;
    v6 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(v6, (Il2CppObject *)this, Method_UserGameActRecoverMenu_EndCloseRecoverUserGameActConfirm__, 0);
    if ( !recoverConfirmMenu )
      sub_21FFECC(v7, v8);
    UserGameActRecoverConfirmMenu__Close_47087000(recoverConfirmMenu, v6, v9);
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

  if ( (byte_59372E6 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_UserGameActRecoverMenu_EndCloseRecoverUserGameActResultConfirm__);
    byte_59372E6 = 1;
  }
  recoverConfirmMenu = this->fields.recoverConfirmMenu;
  v5 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(
    v5,
    (Il2CppObject *)this,
    Method_UserGameActRecoverMenu_EndCloseRecoverUserGameActResultConfirm__,
    0);
  if ( !recoverConfirmMenu )
    sub_21FFECC(v6, v7);
  UserGameActRecoverConfirmMenu__Close_47087000(recoverConfirmMenu, v5, v8);
}


void UserGameActRecoverMenu__EndRequestUserGameActRecover(
        UserGameActRecoverMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  UserGameActRecoverConfirmMenu_o *recoverConfirmMenu; // x0
  UserGameActRecoverConfirmMenu_o *v5; // x21
  StoneShopEntity_o *stoneShopEntity; // x20
  UserGameActRecoverConfirmMenu_CallbackFunc_o *v7; // x22
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x4
  struct System_Action_o *refreshCallbackFunc; // x8

  if ( (byte_59372E5 & 1) == 0 )
  {
    sub_21FFC50(&UserGameActRecoverConfirmMenu_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_UserGameActRecoverMenu_EndRecoverUserGameActResultConfirm__);
    byte_59372E5 = 1;
  }
  recoverConfirmMenu = this->fields.recoverConfirmMenu;
  this->fields.state = 7;
  if ( !recoverConfirmMenu
    || (UserGameActRecoverConfirmMenu__Init(recoverConfirmMenu, (const MethodInfo *)result),
        v5 = this->fields.recoverConfirmMenu,
        stoneShopEntity = this->fields.stoneShopEntity,
        v7 = (UserGameActRecoverConfirmMenu_CallbackFunc_o *)sub_21FFEBC(UserGameActRecoverConfirmMenu_CallbackFunc_TypeInfo),
        UserGameActRecoverConfirmMenu_CallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_UserGameActRecoverMenu_EndRecoverUserGameActResultConfirm__,
          v8),
        !v5) )
  {
    sub_21FFECC(recoverConfirmMenu, result);
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
  UserGameEntity_o *SelfUserGame; // x21
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  UnityEngine_GameObject_c *klass; // x8
  struct StoneShopEntity_o *monitor; // x1
  struct StoneShopEntity_o *stoneShopEntity; // x20
  struct UserGameActRecoverConfirmMenu_o *v29; // x21
  UserGameActRecoverConfirmMenu_CallbackFunc_o *v30; // x22
  const MethodInfo *v31; // x3
  const MethodInfo *v32; // x4
  UserGameActRecoverConfirmMenu_o *v33; // x0
  int32_t v34; // w1
  struct UserGameActRecoverConfirmMenu_o *v35; // x20
  UserGameActRecoverConfirmMenu_CallbackFunc_o *v36; // x21
  const MethodInfo *v37; // x3
  struct UserGameActRecoverConfirmMenu_o *v38; // x20
  const MethodInfo *v39; // x3
  StoneShopEntity_o *v40; // x2
  UserGameActRecoverConfirmMenu_CallbackFunc_o *v41; // x3
  struct UserGameActRecoverConfirmMenu_o *recoverConfirmMenu; // x21
  const MethodInfo *v43; // x3

  if ( (byte_59372DE & 1) == 0 )
  {
    sub_21FFC50(&UserGameActRecoverConfirmMenu_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_StoneShopMaster___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_UserGameActRecoverMenu_EndBuyStoneConfirm__);
    sub_21FFC50(&Method_UserGameActRecoverMenu_EndMaxFrameConfirm__);
    sub_21FFC50(&Method_UserGameActRecoverMenu_EndNoShopConfirm__);
    sub_21FFC50(&Method_UserGameActRecoverMenu_EndRecoverUserGameActConfirm__);
    sub_21FFC50(&StringLiteral_10331/*"OnMoveEnd"*/);
    byte_59372DE = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callbackFunc = callback;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      (System_String_o *)refreshCallback,
      (System_String_o *)method,
      v4,
      v5,
      v6,
      v7);
    this->fields.refreshCallbackFunc = refreshCallback;
    sub_21FFBF4(
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
      goto LABEL_25;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    SelfUserGame = UserGameMaster__getSelfUserGame(0);
    gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_25;
    gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)gameObject,
                                               (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_StoneShopMaster___);
    if ( !gameObject )
      goto LABEL_25;
    gameObject = (UnityEngine_GameObject_o *)StoneShopMaster__GetEnableEntitiyList(
                                               (StoneShopMaster_o *)gameObject,
                                               2,
                                               0);
    if ( !gameObject )
      goto LABEL_25;
    klass = gameObject[1].klass;
    if ( klass )
    {
      if ( !(_DWORD)klass )
        sub_21FFED4(gameObject);
      monitor = (struct StoneShopEntity_o *)gameObject[1].monitor;
      this->fields.stoneShopEntity = monitor;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.stoneShopEntity,
        (int32_t)monitor,
        v20,
        v21,
        v22,
        v23,
        v24,
        v25);
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
            recoverConfirmMenu = this->fields.recoverConfirmMenu;
            this->fields.state = 3;
            v30 = (UserGameActRecoverConfirmMenu_CallbackFunc_o *)sub_21FFEBC(UserGameActRecoverConfirmMenu_CallbackFunc_TypeInfo);
            UserGameActRecoverConfirmMenu_CallbackFunc___ctor(
              v30,
              (Il2CppObject *)this,
              Method_UserGameActRecoverMenu_EndRecoverUserGameActConfirm__,
              v43);
            if ( recoverConfirmMenu )
            {
              v33 = recoverConfirmMenu;
              v34 = 0;
              goto LABEL_23;
            }
          }
          else
          {
            v29 = this->fields.recoverConfirmMenu;
            this->fields.state = 4;
            v30 = (UserGameActRecoverConfirmMenu_CallbackFunc_o *)sub_21FFEBC(UserGameActRecoverConfirmMenu_CallbackFunc_TypeInfo);
            UserGameActRecoverConfirmMenu_CallbackFunc___ctor(
              v30,
              (Il2CppObject *)this,
              Method_UserGameActRecoverMenu_EndBuyStoneConfirm__,
              v31);
            if ( v29 )
            {
              v33 = v29;
              v34 = 1;
LABEL_23:
              v40 = stoneShopEntity;
              v41 = v30;
              goto LABEL_24;
            }
          }
        }
LABEL_25:
        sub_21FFECC(gameObject, v18);
      }
      v38 = this->fields.recoverConfirmMenu;
      this->fields.state = 2;
      v36 = (UserGameActRecoverConfirmMenu_CallbackFunc_o *)sub_21FFEBC(UserGameActRecoverConfirmMenu_CallbackFunc_TypeInfo);
      UserGameActRecoverConfirmMenu_CallbackFunc___ctor(
        v36,
        (Il2CppObject *)this,
        Method_UserGameActRecoverMenu_EndMaxFrameConfirm__,
        v39);
      if ( !v38 )
        goto LABEL_25;
      v33 = v38;
      v34 = 3;
    }
    else
    {
      v35 = this->fields.recoverConfirmMenu;
      this->fields.state = 1;
      v36 = (UserGameActRecoverConfirmMenu_CallbackFunc_o *)sub_21FFEBC(UserGameActRecoverConfirmMenu_CallbackFunc_TypeInfo);
      UserGameActRecoverConfirmMenu_CallbackFunc___ctor(
        v36,
        (Il2CppObject *)this,
        Method_UserGameActRecoverMenu_EndNoShopConfirm__,
        v37);
      if ( !v35 )
        goto LABEL_25;
      v33 = v35;
      v34 = 4;
    }
    v40 = 0;
    v41 = v36;
LABEL_24:
    UserGameActRecoverConfirmMenu__Open(v33, v34, v40, v41, v32);
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10331/*"OnMoveEnd"*/,
      0.1,
      0);
  }
}


void UserGameActRecoverMenu__RequestUserGameActRecover(UserGameActRecoverMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  NetworkManager_ResultCallbackFunc_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *Request_object; // x0
  __int64 v8; // x1
  struct StoneShopEntity_o *stoneShopEntity; // x8

  if ( (byte_59372E4 & 1) == 0 )
  {
    sub_21FFC50(&Method_NetworkManager_getRequest_PurchaseByStoneRequest___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_21FFC50(&Method_UserGameActRecoverMenu_EndRequestUserGameActRecover__);
    byte_59372E4 = 1;
  }
  if ( this->fields.stoneShopEntity )
  {
    v4 = (NetworkManager_ResultCallbackFunc_o *)sub_21FFEBC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v4,
      (Il2CppObject *)this,
      Method_UserGameActRecoverMenu_EndRequestUserGameActRecover__,
      0);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5, v6);
    Request_object = NetworkManager__getRequest_object_(
                       v4,
                       (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_PurchaseByStoneRequest___);
    stoneShopEntity = this->fields.stoneShopEntity;
    if ( !stoneShopEntity || !Request_object )
      sub_21FFECC(Request_object, v8);
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
  struct UserGameActRecoverConfirmMenu_o *v8; // x21
  StoneShopEntity_o *stoneShopEntity; // x20
  UserGameActRecoverConfirmMenu_CallbackFunc_o *v10; // x22
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x4
  UserGameActRecoverConfirmMenu_o *v13; // x0
  int32_t v14; // w1
  UserGameActRecoverMenu_o *v15; // x0
  int32_t v16; // w1
  struct UserGameActRecoverConfirmMenu_o *recoverConfirmMenu; // x21
  const MethodInfo *v18; // x3

  if ( (byte_59372E2 & 1) == 0 )
  {
    sub_21FFC50(&UserGameActRecoverConfirmMenu_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_UserGameActRecoverMenu_EndBuyStoneConfirm__);
    sub_21FFC50(&Method_UserGameActRecoverMenu_EndRecoverUserGameActConfirm__);
    byte_59372E2 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      UserGameActRecoverMenu__Callback(v15, v16, v7);
      return;
    }
LABEL_14:
    Instance = (CommonUI_o *)this->fields.recoverConfirmMenu;
    this->fields.state = 4;
    if ( Instance )
    {
      UserGameActRecoverConfirmMenu__Init((UserGameActRecoverConfirmMenu_o *)Instance, v6);
      recoverConfirmMenu = this->fields.recoverConfirmMenu;
      stoneShopEntity = this->fields.stoneShopEntity;
      v10 = (UserGameActRecoverConfirmMenu_CallbackFunc_o *)sub_21FFEBC(UserGameActRecoverConfirmMenu_CallbackFunc_TypeInfo);
      UserGameActRecoverConfirmMenu_CallbackFunc___ctor(
        v10,
        (Il2CppObject *)this,
        Method_UserGameActRecoverMenu_EndBuyStoneConfirm__,
        v18);
      if ( recoverConfirmMenu )
      {
        v13 = recoverConfirmMenu;
        v14 = 1;
        goto LABEL_17;
      }
    }
LABEL_21:
    sub_21FFECC(Instance, v6);
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
      Instance = (CommonUI_o *)this->fields.recoverConfirmMenu;
      this->fields.state = 3;
      if ( Instance )
      {
        UserGameActRecoverConfirmMenu__Init((UserGameActRecoverConfirmMenu_o *)Instance, v6);
        v8 = this->fields.recoverConfirmMenu;
        stoneShopEntity = this->fields.stoneShopEntity;
        v10 = (UserGameActRecoverConfirmMenu_CallbackFunc_o *)sub_21FFEBC(UserGameActRecoverConfirmMenu_CallbackFunc_TypeInfo);
        UserGameActRecoverConfirmMenu_CallbackFunc___ctor(
          v10,
          (Il2CppObject *)this,
          Method_UserGameActRecoverMenu_EndRecoverUserGameActConfirm__,
          v11);
        if ( v8 )
        {
          v13 = v8;
          v14 = 0;
LABEL_17:
          UserGameActRecoverConfirmMenu__Open(v13, v14, stoneShopEntity, v10, v12);
          return;
        }
      }
      goto LABEL_21;
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  UserGameActRecoverMenu_o *v13; // x0
  UserGameActRecoverMenu_CallbackFunc_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_59372DC & 1) == 0 )
  {
    sub_21FFC50(&UserGameActRecoverMenu_CallbackFunc_TypeInfo);
    byte_59372DC = 1;
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
    v11 = sub_223767C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_220024C(v8, UserGameActRecoverMenu_CallbackFunc_TypeInfo, v9, v10);
  UserGameActRecoverMenu__remove_callbackFunc(v13, v14, v15);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  UserGameActRecoverMenu_o *v13; // x0
  UserGameActRecoverMenu_CallbackFunc_o *v14; // x1
  System_Action_o *v15; // x2
  const MethodInfo *v16; // x3

  if ( (byte_59372DD & 1) == 0 )
  {
    sub_21FFC50(&UserGameActRecoverMenu_CallbackFunc_TypeInfo);
    byte_59372DD = 1;
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
    v11 = sub_223767C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_220024C(v8, UserGameActRecoverMenu_CallbackFunc_TypeInfo, v9, v10);
  UserGameActRecoverMenu__Open(v13, v14, v15, v16);
}


void UserGameActRecoverMenu_CallbackFunc___ctor(
        UserGameActRecoverMenu_CallbackFunc_o *this,
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
  sub_21FFBF4(
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
  if ( (sub_21FFD28(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_21FFEE8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_21FFD90(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1FF8DD8;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1FF8D90;
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
  if ( (byte_59372E7 & 1) == 0 )
  {
    sub_21FFC50(&UserGameActRecoverMenu_Result_TypeInfo);
    byte_59372E7 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(UserGameActRecoverMenu_Result_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_21FFC04(this, v9, callback, object);
}


void UserGameActRecoverMenu_CallbackFunc__EndInvoke(
        UserGameActRecoverMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_21FFC08(result, 0, method);
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