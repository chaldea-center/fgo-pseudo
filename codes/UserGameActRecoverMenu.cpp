void __fastcall UserGameActRecoverMenu___ctor(UserGameActRecoverMenu_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall UserGameActRecoverMenu__Callback(
        UserGameActRecoverMenu_o *this,
        int32_t result,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_callbackFunc; // x0
  UserGameActRecoverMenu_CallbackFunc_o *v9; // x20
  struct UserGameActRecoverMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  p_callbackFunc->klass = 0LL;
  sub_B2C2F8(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
  if ( callbackFunc )
    UserGameActRecoverMenu_CallbackFunc__Invoke(v9, result, 0LL);
}


void __fastcall UserGameActRecoverMenu__Close(UserGameActRecoverMenu_o *this, const MethodInfo *method)
{
  UserGameActRecoverConfirmMenu_o *recoverConfirmMenu; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  BattleServantConfConponent_o *p_refreshCallbackFunc; // x19
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( this->fields.state )
  {
    recoverConfirmMenu = this->fields.recoverConfirmMenu;
    if ( !recoverConfirmMenu
      || (UserGameActRecoverConfirmMenu__Init(recoverConfirmMenu, method),
          (recoverConfirmMenu = (UserGameActRecoverConfirmMenu_o *)UnityEngine_Component__get_gameObject(
                                                                     (UnityEngine_Component_o *)this,
                                                                     0LL)) == 0LL) )
    {
      sub_B2C434(recoverConfirmMenu, method);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)recoverConfirmMenu, 0, 0LL);
    this->fields.stoneShopEntity = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.stoneShopEntity, 0LL, v4, v5, v6, v7, v8, v9);
    this->fields.refreshCallbackFunc = 0LL;
    p_refreshCallbackFunc = (BattleServantConfConponent_o *)&this->fields.refreshCallbackFunc;
    sub_B2C2F8(p_refreshCallbackFunc, 0LL, v11, v12, v13, v14, v15, v16);
    p_refreshCallbackFunc->fields.m_CachedPtr = 0;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserGameActRecoverMenu__EndBuyStoneConfirm(
        UserGameActRecoverMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  CommonUI_o *Instance; // x20
  StonePurchaseMenu_CallbackFunc_o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  UserGameActRecoverConfirmMenu_o *recoverConfirmMenu; // x20
  System_Action_o *v14; // x21
  const MethodInfo *v15; // x2

  if ( (byte_4186FE1 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isDecide);
    sub_B2C35C(&StonePurchaseMenu_CallbackFunc_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B2C35C(&Method_UserGameActRecoverMenu_EndCloseBuyStoneConfirm__, v7);
    sub_B2C35C(&Method_UserGameActRecoverMenu_SelectedBuyBankItemConfirm__, v8);
    byte_4186FE1 = 1;
  }
  if ( isDecide )
  {
    this->fields.state = 5;
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v10 = (StonePurchaseMenu_CallbackFunc_o *)sub_B2C42C(StonePurchaseMenu_CallbackFunc_TypeInfo);
    StonePurchaseMenu_CallbackFunc___ctor(
      v10,
      (Il2CppObject *)this,
      Method_UserGameActRecoverMenu_SelectedBuyBankItemConfirm__,
      0LL);
    if ( Instance )
    {
      CommonUI__OpenStonePurchaseMenu(Instance, v10, this->fields.refreshCallbackFunc, 0LL);
      return;
    }
LABEL_8:
    sub_B2C434(v11, v12);
  }
  recoverConfirmMenu = this->fields.recoverConfirmMenu;
  v14 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_UserGameActRecoverMenu_EndCloseBuyStoneConfirm__, 0LL);
  if ( !recoverConfirmMenu )
    goto LABEL_8;
  UserGameActRecoverConfirmMenu__Close_23975728(recoverConfirmMenu, v14, v15);
}


void __fastcall UserGameActRecoverMenu__EndCloseBuyStoneConfirm(
        UserGameActRecoverMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  UserGameActRecoverMenu__Callback(this, 0, v2);
}


void __fastcall UserGameActRecoverMenu__EndCloseMaxFrameConfirm(
        UserGameActRecoverMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  UserGameActRecoverMenu__Callback(this, 0, v2);
}


void __fastcall UserGameActRecoverMenu__EndCloseNoShopConfirm(UserGameActRecoverMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  UserGameActRecoverMenu__Callback(this, 1, v2);
}


void __fastcall UserGameActRecoverMenu__EndCloseRecoverUserGameActConfirm(
        UserGameActRecoverMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  UserGameActRecoverMenu__Callback(this, 0, v2);
}


void __fastcall UserGameActRecoverMenu__EndCloseRecoverUserGameActResultConfirm(
        UserGameActRecoverMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  UserGameActRecoverMenu__Callback(this, 2, v2);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserGameActRecoverMenu__EndMaxFrameConfirm(
        UserGameActRecoverMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v4; // x1
  UserGameActRecoverConfirmMenu_o *recoverConfirmMenu; // x20
  System_Action_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2

  if ( (byte_4186FE0 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isDecide);
    sub_B2C35C(&Method_UserGameActRecoverMenu_EndCloseMaxFrameConfirm__, v4);
    byte_4186FE0 = 1;
  }
  recoverConfirmMenu = this->fields.recoverConfirmMenu;
  v6 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_UserGameActRecoverMenu_EndCloseMaxFrameConfirm__, 0LL);
  if ( !recoverConfirmMenu )
    sub_B2C434(v7, v8);
  UserGameActRecoverConfirmMenu__Close_23975728(recoverConfirmMenu, v6, v9);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserGameActRecoverMenu__EndNoShopConfirm(
        UserGameActRecoverMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v4; // x1
  UserGameActRecoverConfirmMenu_o *recoverConfirmMenu; // x20
  System_Action_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2

  if ( (byte_4186FDF & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isDecide);
    sub_B2C35C(&Method_UserGameActRecoverMenu_EndCloseNoShopConfirm__, v4);
    byte_4186FDF = 1;
  }
  recoverConfirmMenu = this->fields.recoverConfirmMenu;
  v6 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_UserGameActRecoverMenu_EndCloseNoShopConfirm__, 0LL);
  if ( !recoverConfirmMenu )
    sub_B2C434(v7, v8);
  UserGameActRecoverConfirmMenu__Close_23975728(recoverConfirmMenu, v6, v9);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserGameActRecoverMenu__EndRecoverUserGameActConfirm(
        UserGameActRecoverMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UserGameActRecoverConfirmMenu_o *recoverConfirmMenu; // x20
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2

  if ( (byte_4186FE3 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isDecide);
    sub_B2C35C(&Method_UserGameActRecoverMenu_EndCloseRecoverUserGameActConfirm__, v5);
    byte_4186FE3 = 1;
  }
  if ( isDecide )
  {
    this->fields.state = 6;
    UserGameActRecoverMenu__RequestUserGameActRecover(this, (const MethodInfo *)isDecide);
  }
  else
  {
    recoverConfirmMenu = this->fields.recoverConfirmMenu;
    v7 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      v7,
      (Il2CppObject *)this,
      Method_UserGameActRecoverMenu_EndCloseRecoverUserGameActConfirm__,
      0LL);
    if ( !recoverConfirmMenu )
      sub_B2C434(v8, v9);
    UserGameActRecoverConfirmMenu__Close_23975728(recoverConfirmMenu, v7, v10);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserGameActRecoverMenu__EndRecoverUserGameActResultConfirm(
        UserGameActRecoverMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v4; // x1
  UserGameActRecoverConfirmMenu_o *recoverConfirmMenu; // x20
  System_Action_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2

  if ( (byte_4186FE6 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isDecide);
    sub_B2C35C(&Method_UserGameActRecoverMenu_EndCloseRecoverUserGameActResultConfirm__, v4);
    byte_4186FE6 = 1;
  }
  recoverConfirmMenu = this->fields.recoverConfirmMenu;
  v6 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v6,
    (Il2CppObject *)this,
    Method_UserGameActRecoverMenu_EndCloseRecoverUserGameActResultConfirm__,
    0LL);
  if ( !recoverConfirmMenu )
    sub_B2C434(v7, v8);
  UserGameActRecoverConfirmMenu__Close_23975728(recoverConfirmMenu, v6, v9);
}


void __fastcall UserGameActRecoverMenu__EndRequestUserGameActRecover(
        UserGameActRecoverMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v4; // x1
  UserGameActRecoverConfirmMenu_o *recoverConfirmMenu; // x0
  UserGameActRecoverConfirmMenu_o *v6; // x20
  StoneShopEntity_o *stoneShopEntity; // x21
  UserGameActRecoverConfirmMenu_CallbackFunc_o *v8; // x22
  const MethodInfo *v9; // x4
  System_Action_o *refreshCallbackFunc; // x0

  if ( (byte_4186FE5 & 1) == 0 )
  {
    sub_B2C35C(&UserGameActRecoverConfirmMenu_CallbackFunc_TypeInfo, result);
    sub_B2C35C(&Method_UserGameActRecoverMenu_EndRecoverUserGameActResultConfirm__, v4);
    byte_4186FE5 = 1;
  }
  recoverConfirmMenu = this->fields.recoverConfirmMenu;
  this->fields.state = 7;
  if ( !recoverConfirmMenu
    || (UserGameActRecoverConfirmMenu__Init(recoverConfirmMenu, (const MethodInfo *)result),
        v6 = this->fields.recoverConfirmMenu,
        stoneShopEntity = this->fields.stoneShopEntity,
        v8 = (UserGameActRecoverConfirmMenu_CallbackFunc_o *)sub_B2C42C(UserGameActRecoverConfirmMenu_CallbackFunc_TypeInfo),
        UserGameActRecoverConfirmMenu_CallbackFunc___ctor(
          v8,
          (Il2CppObject *)this,
          Method_UserGameActRecoverMenu_EndRecoverUserGameActResultConfirm__,
          0LL),
        !v6) )
  {
    sub_B2C434(recoverConfirmMenu, result);
  }
  UserGameActRecoverConfirmMenu__Open(v6, 2, stoneShopEntity, v8, v9);
  refreshCallbackFunc = this->fields.refreshCallbackFunc;
  if ( refreshCallbackFunc )
    System_Action__Invoke(refreshCallbackFunc, 0LL);
}


void __fastcall UserGameActRecoverMenu__OnMoveEnd(UserGameActRecoverMenu_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall UserGameActRecoverMenu__Open(
        UserGameActRecoverMenu_o *this,
        UserGameActRecoverMenu_CallbackFunc_o *callback,
        System_Action_o *refreshCallback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v25; // x1
  const MethodInfo *v26; // x0
  UserGameEntity_o *SelfUserGame; // x21
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  UnityEngine_GameObject_c *klass; // x8
  struct StoneShopEntity_o *monitor; // x1
  struct StoneShopEntity_o *stoneShopEntity; // x20
  struct UserGameActRecoverConfirmMenu_o *v37; // x21
  UserGameActRecoverConfirmMenu_CallbackFunc_o *v38; // x22
  const MethodInfo *v39; // x4
  int32_t v40; // w1
  UserGameActRecoverConfirmMenu_o *v41; // x0
  struct UserGameActRecoverConfirmMenu_o *v42; // x20
  UserGameActRecoverConfirmMenu_CallbackFunc_o *v43; // x21
  StoneShopEntity_o *v44; // x2
  UserGameActRecoverConfirmMenu_CallbackFunc_o *v45; // x3
  struct UserGameActRecoverConfirmMenu_o *recoverConfirmMenu; // x21
  __int64 v47; // x0

  if ( (byte_4186FDE & 1) == 0 )
  {
    sub_B2C35C(&UserGameActRecoverConfirmMenu_CallbackFunc_TypeInfo, callback);
    sub_B2C35C(&Method_DataManager_GetMasterData_StoneShopMaster___, v11);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_B2C35C(&Method_UserGameActRecoverMenu_EndBuyStoneConfirm__, v13);
    sub_B2C35C(&Method_UserGameActRecoverMenu_EndMaxFrameConfirm__, v14);
    sub_B2C35C(&Method_UserGameActRecoverMenu_EndNoShopConfirm__, v15);
    sub_B2C35C(&Method_UserGameActRecoverMenu_EndRecoverUserGameActConfirm__, v16);
    sub_B2C35C(&StringLiteral_10036/*"OnMoveEnd"*/, v17);
    byte_4186FDE = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callbackFunc = callback;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callback,
      (System_String_array **)refreshCallback,
      (System_String_array **)method,
      v4,
      v5,
      v6,
      v7);
    this->fields.refreshCallbackFunc = refreshCallback;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.refreshCallbackFunc,
      (System_Int32_array **)refreshCallback,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_25;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    SelfUserGame = UserGameMaster__getSelfUserGame(v26);
    gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_25;
    gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)gameObject,
                                               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_StoneShopMaster___);
    if ( !gameObject )
      goto LABEL_25;
    gameObject = (UnityEngine_GameObject_o *)StoneShopMaster__GetEnableEntitiyList_20878924(
                                               (StoneShopMaster_o *)gameObject,
                                               2,
                                               0LL);
    if ( !gameObject )
      goto LABEL_25;
    klass = gameObject[1].klass;
    if ( klass )
    {
      if ( !(_DWORD)klass )
      {
        v47 = sub_B2C460(gameObject);
        sub_B2C400(v47, 0LL);
      }
      monitor = (struct StoneShopEntity_o *)gameObject[1].monitor;
      this->fields.stoneShopEntity = monitor;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.stoneShopEntity,
        (System_Int32_array **)monitor,
        v28,
        v29,
        v30,
        v31,
        v32,
        v33);
      if ( !SelfUserGame )
        goto LABEL_25;
      gameObject = (UnityEngine_GameObject_o *)UserGameEntity__IsNeedRecoverAct(SelfUserGame, v25);
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        stoneShopEntity = this->fields.stoneShopEntity;
        if ( stoneShopEntity )
        {
          if ( SelfUserGame->fields.stone >= stoneShopEntity->fields.price )
          {
            this->fields.state = 3;
            recoverConfirmMenu = this->fields.recoverConfirmMenu;
            v38 = (UserGameActRecoverConfirmMenu_CallbackFunc_o *)sub_B2C42C(UserGameActRecoverConfirmMenu_CallbackFunc_TypeInfo);
            UserGameActRecoverConfirmMenu_CallbackFunc___ctor(
              v38,
              (Il2CppObject *)this,
              Method_UserGameActRecoverMenu_EndRecoverUserGameActConfirm__,
              0LL);
            if ( recoverConfirmMenu )
            {
              v41 = recoverConfirmMenu;
              v40 = 0;
              goto LABEL_23;
            }
          }
          else
          {
            this->fields.state = 4;
            v37 = this->fields.recoverConfirmMenu;
            v38 = (UserGameActRecoverConfirmMenu_CallbackFunc_o *)sub_B2C42C(UserGameActRecoverConfirmMenu_CallbackFunc_TypeInfo);
            UserGameActRecoverConfirmMenu_CallbackFunc___ctor(
              v38,
              (Il2CppObject *)this,
              Method_UserGameActRecoverMenu_EndBuyStoneConfirm__,
              0LL);
            if ( v37 )
            {
              v40 = 1;
              v41 = v37;
LABEL_23:
              v44 = stoneShopEntity;
              v45 = v38;
              goto LABEL_24;
            }
          }
        }
LABEL_25:
        sub_B2C434(gameObject, v25);
      }
      this->fields.state = 2;
      v42 = this->fields.recoverConfirmMenu;
      v43 = (UserGameActRecoverConfirmMenu_CallbackFunc_o *)sub_B2C42C(UserGameActRecoverConfirmMenu_CallbackFunc_TypeInfo);
      UserGameActRecoverConfirmMenu_CallbackFunc___ctor(
        v43,
        (Il2CppObject *)this,
        Method_UserGameActRecoverMenu_EndMaxFrameConfirm__,
        0LL);
      if ( !v42 )
        goto LABEL_25;
      v40 = 3;
    }
    else
    {
      this->fields.state = 1;
      v42 = this->fields.recoverConfirmMenu;
      v43 = (UserGameActRecoverConfirmMenu_CallbackFunc_o *)sub_B2C42C(UserGameActRecoverConfirmMenu_CallbackFunc_TypeInfo);
      UserGameActRecoverConfirmMenu_CallbackFunc___ctor(
        v43,
        (Il2CppObject *)this,
        Method_UserGameActRecoverMenu_EndNoShopConfirm__,
        0LL);
      if ( !v42 )
        goto LABEL_25;
      v40 = 4;
    }
    v41 = v42;
    v44 = 0LL;
    v45 = v43;
LABEL_24:
    UserGameActRecoverConfirmMenu__Open(v41, v40, v44, v45, v39);
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10036/*"OnMoveEnd"*/,
      0.1,
      0LL);
  }
}


void __fastcall UserGameActRecoverMenu__RequestUserGameActRecover(
        UserGameActRecoverMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  NetworkManager_ResultCallbackFunc_o *v7; // x20
  PurchaseByStoneRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v9; // x1
  struct StoneShopEntity_o *stoneShopEntity; // x8

  if ( (byte_4186FE4 & 1) == 0 )
  {
    sub_B2C35C(&Method_NetworkManager_getRequest_PurchaseByStoneRequest___, method);
    sub_B2C35C(&NetworkManager_TypeInfo, v4);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    sub_B2C35C(&Method_UserGameActRecoverMenu_EndRequestUserGameActRecover__, v6);
    byte_4186FE4 = 1;
  }
  if ( this->fields.stoneShopEntity )
  {
    v7 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      Method_UserGameActRecoverMenu_EndRequestUserGameActRecover__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = (PurchaseByStoneRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                      v7,
                                                                      (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_PurchaseByStoneRequest___);
    stoneShopEntity = this->fields.stoneShopEntity;
    if ( !stoneShopEntity || !Request_WarBoardWallAttackRequest )
      sub_B2C434(Request_WarBoardWallAttackRequest, v9);
    PurchaseByStoneRequest__beginRequest(Request_WarBoardWallAttackRequest, stoneShopEntity->fields.id, 1, 0LL);
  }
  else
  {
    UserGameActRecoverMenu__Callback(this, 1, v2);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserGameActRecoverMenu__SelectedBuyBankItemConfirm(
        UserGameActRecoverMenu_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  CommonUI_o *Instance; // x0
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x2
  struct UserGameActRecoverConfirmMenu_o *recoverConfirmMenu; // x20
  struct StoneShopEntity_o *stoneShopEntity; // x21
  UserGameActRecoverConfirmMenu_CallbackFunc_o *v13; // x22
  const MethodInfo *v14; // x4
  int32_t v15; // w1
  UserGameActRecoverConfirmMenu_o *v16; // x0
  StoneShopEntity_o *v17; // x2
  UserGameActRecoverMenu_o *v18; // x0
  int32_t v19; // w1
  struct UserGameActRecoverConfirmMenu_o *v20; // x21
  struct StoneShopEntity_o *v21; // x20

  if ( (byte_4186FE2 & 1) == 0 )
  {
    sub_B2C35C(&UserGameActRecoverConfirmMenu_CallbackFunc_TypeInfo, *(_QWORD *)&result);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B2C35C(&Method_UserGameActRecoverMenu_EndBuyStoneConfirm__, v6);
    sub_B2C35C(&Method_UserGameActRecoverMenu_EndRecoverUserGameActConfirm__, v7);
    byte_4186FE2 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
LABEL_15:
    sub_B2C434(Instance, v9);
  CommonUI__CloseStonePurchaseMenu(Instance, 0LL);
  switch ( result )
  {
    case 0:
    case 4:
      Instance = (CommonUI_o *)this->fields.recoverConfirmMenu;
      this->fields.state = 4;
      if ( !Instance )
        goto LABEL_15;
      UserGameActRecoverConfirmMenu__Init((UserGameActRecoverConfirmMenu_o *)Instance, v9);
      recoverConfirmMenu = this->fields.recoverConfirmMenu;
      stoneShopEntity = this->fields.stoneShopEntity;
      v13 = (UserGameActRecoverConfirmMenu_CallbackFunc_o *)sub_B2C42C(UserGameActRecoverConfirmMenu_CallbackFunc_TypeInfo);
      UserGameActRecoverConfirmMenu_CallbackFunc___ctor(
        v13,
        (Il2CppObject *)this,
        Method_UserGameActRecoverMenu_EndBuyStoneConfirm__,
        0LL);
      if ( !recoverConfirmMenu )
        goto LABEL_15;
      v15 = 1;
      v16 = recoverConfirmMenu;
      v17 = stoneShopEntity;
      goto LABEL_14;
    case 1:
      v19 = 1;
      v18 = this;
      goto LABEL_10;
    case 2:
      Instance = (CommonUI_o *)this->fields.recoverConfirmMenu;
      this->fields.state = 3;
      if ( !Instance )
        goto LABEL_15;
      UserGameActRecoverConfirmMenu__Init((UserGameActRecoverConfirmMenu_o *)Instance, v9);
      v20 = this->fields.recoverConfirmMenu;
      v21 = this->fields.stoneShopEntity;
      v13 = (UserGameActRecoverConfirmMenu_CallbackFunc_o *)sub_B2C42C(UserGameActRecoverConfirmMenu_CallbackFunc_TypeInfo);
      UserGameActRecoverConfirmMenu_CallbackFunc___ctor(
        v13,
        (Il2CppObject *)this,
        Method_UserGameActRecoverMenu_EndRecoverUserGameActConfirm__,
        0LL);
      if ( !v20 )
        goto LABEL_15;
      v16 = v20;
      v15 = 0;
      v17 = v21;
LABEL_14:
      UserGameActRecoverConfirmMenu__Open(v16, v15, v17, v13, v14);
      break;
    case 3:
      v18 = this;
      v19 = 0;
LABEL_10:
      UserGameActRecoverMenu__Callback(v18, v19, v10);
      break;
    default:
      return;
  }
}


void __fastcall UserGameActRecoverMenu__add_callbackFunc(
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

  if ( (byte_4186FDC & 1) == 0 )
  {
    sub_B2C35C(&UserGameActRecoverMenu_CallbackFunc_TypeInfo, value);
    byte_4186FDC = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (UserGameActRecoverMenu_CallbackFunc_c *)v8->klass != UserGameActRecoverMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (UserGameActRecoverMenu_o *)sub_B2C728(v8);
  UserGameActRecoverMenu__remove_callbackFunc(v11, v12, v13);
}


void __fastcall UserGameActRecoverMenu__remove_callbackFunc(
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

  if ( (byte_4186FDD & 1) == 0 )
  {
    sub_B2C35C(&UserGameActRecoverMenu_CallbackFunc_TypeInfo, value);
    byte_4186FDD = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (UserGameActRecoverMenu_CallbackFunc_c *)v8->klass != UserGameActRecoverMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (UserGameActRecoverMenu_o *)sub_B2C728(v8);
  UserGameActRecoverMenu__Open(v11, v12, v13, v14);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserGameActRecoverMenu_CallbackFunc___ctor(
        UserGameActRecoverMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B2C2F8(p_method, object);
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall UserGameActRecoverMenu_CallbackFunc__BeginInvoke(
        UserGameActRecoverMenu_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-24h] BYREF

  v10 = result;
  if ( (byte_41856AF & 1) == 0 )
  {
    sub_B2C35C(&UserGameActRecoverMenu_Result_TypeInfo, *(_QWORD *)&result);
    byte_41856AF = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(UserGameActRecoverMenu_Result_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B2C300(this, v9, callback, object);
}


void __fastcall UserGameActRecoverMenu_CallbackFunc__EndInvoke(
        UserGameActRecoverMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserGameActRecoverMenu_CallbackFunc__Invoke(
        UserGameActRecoverMenu_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v6; // x24
  UserGameActRecoverMenu_CallbackFunc_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w23
  __int64 class_0; // x0
  __int64 v11; // x3
  __int64 v12; // x8
  unsigned int v13; // w22
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, _QWORD, _QWORD); // x0
  UserGameActRecoverMenu_CallbackFunc_o *v20; // x8
  __int64 *v21; // x21
  __int64 v22; // x22
  void (__fastcall *v23)(unsigned int *, __int64); // x23
  char v24; // w23
  char v25; // w0
  __int64 v26; // x3
  unsigned int v27; // w23
  __int64 v28; // x8
  __int64 v29; // x1
  __int64 v30; // x2
  unsigned __int64 v31; // x10
  _DWORD *v32; // x11
  unsigned int v33; // [xsp+4h] [xbp-4Ch] BYREF
  UserGameActRecoverMenu_CallbackFunc_o *v34; // [xsp+8h] [xbp-48h] BYREF

  v34 = this;
  v33 = result;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v7 = &v34;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v4 + 24);
  if ( v6 )
  {
    v7 = (UserGameActRecoverMenu_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v20 = v7[v8];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(unsigned int *, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v20->fields.extra_arg, *(_QWORD *)&result, method, v3);
      if ( (sub_B2C38C(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 1 )
        goto LABEL_36;
      v23((unsigned int *)v33, v22);
LABEL_38:
      if ( ++v8 == v6 )
        return;
    }
    if ( !v21 )
    {
      v23(&v33 - 4, v22);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B2C384(v22);
      v25 = sub_B2C788(v22);
      if ( (v24 & 1) != 0 )
      {
        v27 = v33;
        if ( (v25 & 1) != 0 )
        {
          v28 = *v21;
          v29 = *(_QWORD *)(v22 + 24);
          v30 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v31 = 0LL;
            v32 = (_DWORD *)(*(_QWORD *)(v28 + 176) + 8LL);
            while ( *((_QWORD *)v32 - 1) != v29 )
            {
              ++v31;
              v32 += 4;
              if ( v31 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v28 + 16LL * (*v32 + (int)v30) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_AC5258(v21, v29, v30, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B2C40C(v17, v22);
        (*v19)(v21, v27, v19);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v12 = *v21;
          v13 = v33;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v12 + 16LL * (int)(*v15 + v9) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AC5258(v21, class_0, v9, v11);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))v16)(v21, v13, *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            v33,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, __int64))v23)(v21, v33, v22);
    goto LABEL_38;
  }
}