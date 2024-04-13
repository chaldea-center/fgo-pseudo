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
  sub_B5D560(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
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
      sub_B5D69C(recoverConfirmMenu, method);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)recoverConfirmMenu, 0, 0LL);
    this->fields.stoneShopEntity = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.stoneShopEntity, 0LL, v4, v5, v6, v7, v8, v9);
    this->fields.refreshCallbackFunc = 0LL;
    p_refreshCallbackFunc = (BattleServantConfConponent_o *)&this->fields.refreshCallbackFunc;
    sub_B5D560(p_refreshCallbackFunc, 0LL, v11, v12, v13, v14, v15, v16);
    p_refreshCallbackFunc->fields.m_CachedPtr = 0;
  }
}


void __fastcall UserGameActRecoverMenu__EndBuyStoneConfirm(
        UserGameActRecoverMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  char v12; // w1
  int v13; // w2
  __int64 v14; // x3
  char v15; // w1
  int v16; // w2
  __int64 v17; // x3
  CommonUI_o *Instance; // x20
  StonePurchaseMenu_CallbackFunc_o *v19; // x21
  __int64 v20; // x0
  __int64 v21; // x1
  UserGameActRecoverConfirmMenu_o *recoverConfirmMenu; // x20
  System_Action_o *v23; // x21
  const MethodInfo *v24; // x2

  if ( (byte_42E7136 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&StonePurchaseMenu_CallbackFunc_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10, v11);
    sub_B5D5C4(&Method_UserGameActRecoverMenu_EndCloseBuyStoneConfirm__, v12, v13, v14);
    sub_B5D5C4(&Method_UserGameActRecoverMenu_SelectedBuyBankItemConfirm__, v15, v16, v17);
    byte_42E7136 = 1;
  }
  if ( isDecide )
  {
    this->fields.state = 5;
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v19 = (StonePurchaseMenu_CallbackFunc_o *)sub_B5D694(StonePurchaseMenu_CallbackFunc_TypeInfo);
    StonePurchaseMenu_CallbackFunc___ctor(
      v19,
      (Il2CppObject *)this,
      Method_UserGameActRecoverMenu_SelectedBuyBankItemConfirm__,
      0LL);
    if ( Instance )
    {
      CommonUI__OpenStonePurchaseMenu(Instance, v19, this->fields.refreshCallbackFunc, 0LL);
      return;
    }
LABEL_8:
    sub_B5D69C(v20, v21);
  }
  recoverConfirmMenu = this->fields.recoverConfirmMenu;
  v23 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v23, (Il2CppObject *)this, Method_UserGameActRecoverMenu_EndCloseBuyStoneConfirm__, 0LL);
  if ( !recoverConfirmMenu )
    goto LABEL_8;
  UserGameActRecoverConfirmMenu__Close_22498144(recoverConfirmMenu, v23, v24);
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


void __fastcall UserGameActRecoverMenu__EndMaxFrameConfirm(
        UserGameActRecoverMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UserGameActRecoverConfirmMenu_o *recoverConfirmMenu; // x20
  System_Action_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_42E7135 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UserGameActRecoverMenu_EndCloseMaxFrameConfirm__, v5, v6, v7);
    byte_42E7135 = 1;
  }
  recoverConfirmMenu = this->fields.recoverConfirmMenu;
  v9 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_UserGameActRecoverMenu_EndCloseMaxFrameConfirm__, 0LL);
  if ( !recoverConfirmMenu )
    sub_B5D69C(v10, v11);
  UserGameActRecoverConfirmMenu__Close_22498144(recoverConfirmMenu, v9, v12);
}


void __fastcall UserGameActRecoverMenu__EndNoShopConfirm(
        UserGameActRecoverMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UserGameActRecoverConfirmMenu_o *recoverConfirmMenu; // x20
  System_Action_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_42E7134 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UserGameActRecoverMenu_EndCloseNoShopConfirm__, v5, v6, v7);
    byte_42E7134 = 1;
  }
  recoverConfirmMenu = this->fields.recoverConfirmMenu;
  v9 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_UserGameActRecoverMenu_EndCloseNoShopConfirm__, 0LL);
  if ( !recoverConfirmMenu )
    sub_B5D69C(v10, v11);
  UserGameActRecoverConfirmMenu__Close_22498144(recoverConfirmMenu, v9, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserGameActRecoverMenu__EndRecoverUserGameActConfirm(
        UserGameActRecoverMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UserGameActRecoverConfirmMenu_o *recoverConfirmMenu; // x20
  System_Action_o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42E7138 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UserGameActRecoverMenu_EndCloseRecoverUserGameActConfirm__, v6, v7, v8);
    byte_42E7138 = 1;
  }
  if ( isDecide )
  {
    this->fields.state = 6;
    UserGameActRecoverMenu__RequestUserGameActRecover(this, (const MethodInfo *)isDecide);
  }
  else
  {
    recoverConfirmMenu = this->fields.recoverConfirmMenu;
    v10 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v10,
      (Il2CppObject *)this,
      Method_UserGameActRecoverMenu_EndCloseRecoverUserGameActConfirm__,
      0LL);
    if ( !recoverConfirmMenu )
      sub_B5D69C(v11, v12);
    UserGameActRecoverConfirmMenu__Close_22498144(recoverConfirmMenu, v10, v13);
  }
}


void __fastcall UserGameActRecoverMenu__EndRecoverUserGameActResultConfirm(
        UserGameActRecoverMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UserGameActRecoverConfirmMenu_o *recoverConfirmMenu; // x20
  System_Action_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_42E713B & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UserGameActRecoverMenu_EndCloseRecoverUserGameActResultConfirm__, v5, v6, v7);
    byte_42E713B = 1;
  }
  recoverConfirmMenu = this->fields.recoverConfirmMenu;
  v9 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v9,
    (Il2CppObject *)this,
    Method_UserGameActRecoverMenu_EndCloseRecoverUserGameActResultConfirm__,
    0LL);
  if ( !recoverConfirmMenu )
    sub_B5D69C(v10, v11);
  UserGameActRecoverConfirmMenu__Close_22498144(recoverConfirmMenu, v9, v12);
}


void __fastcall UserGameActRecoverMenu__EndRequestUserGameActRecover(
        UserGameActRecoverMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UserGameActRecoverConfirmMenu_o *recoverConfirmMenu; // x0
  UserGameActRecoverConfirmMenu_o *v9; // x20
  StoneShopEntity_o *stoneShopEntity; // x21
  UserGameActRecoverConfirmMenu_CallbackFunc_o *v11; // x22
  const MethodInfo *v12; // x4
  System_Action_o *refreshCallbackFunc; // x0

  if ( (byte_42E713A & 1) == 0 )
  {
    sub_B5D5C4(&UserGameActRecoverConfirmMenu_CallbackFunc_TypeInfo, (_DWORD)result, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UserGameActRecoverMenu_EndRecoverUserGameActResultConfirm__, v5, v6, v7);
    byte_42E713A = 1;
  }
  recoverConfirmMenu = this->fields.recoverConfirmMenu;
  this->fields.state = 7;
  if ( !recoverConfirmMenu
    || (UserGameActRecoverConfirmMenu__Init(recoverConfirmMenu, (const MethodInfo *)result),
        v9 = this->fields.recoverConfirmMenu,
        stoneShopEntity = this->fields.stoneShopEntity,
        v11 = (UserGameActRecoverConfirmMenu_CallbackFunc_o *)sub_B5D694(UserGameActRecoverConfirmMenu_CallbackFunc_TypeInfo),
        UserGameActRecoverConfirmMenu_CallbackFunc___ctor(
          v11,
          (Il2CppObject *)this,
          Method_UserGameActRecoverMenu_EndRecoverUserGameActResultConfirm__,
          0LL),
        !v9) )
  {
    sub_B5D69C(recoverConfirmMenu, result);
  }
  UserGameActRecoverConfirmMenu__Open(v9, 2, stoneShopEntity, v11, v12);
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v39; // x1
  const MethodInfo *v40; // x0
  UserGameEntity_o *SelfUserGame; // x21
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  UnityEngine_GameObject_c *klass; // x8
  struct StoneShopEntity_o *monitor; // x1
  struct StoneShopEntity_o *stoneShopEntity; // x20
  struct UserGameActRecoverConfirmMenu_o *v51; // x21
  UserGameActRecoverConfirmMenu_CallbackFunc_o *v52; // x22
  const MethodInfo *v53; // x4
  int32_t v54; // w1
  UserGameActRecoverConfirmMenu_o *v55; // x0
  struct UserGameActRecoverConfirmMenu_o *v56; // x20
  UserGameActRecoverConfirmMenu_CallbackFunc_o *v57; // x21
  StoneShopEntity_o *v58; // x2
  UserGameActRecoverConfirmMenu_CallbackFunc_o *v59; // x3
  struct UserGameActRecoverConfirmMenu_o *recoverConfirmMenu; // x21
  __int64 v61; // x0

  if ( (byte_42E7133 & 1) == 0 )
  {
    sub_B5D5C4(&UserGameActRecoverConfirmMenu_CallbackFunc_TypeInfo, (_DWORD)callback, (_DWORD)refreshCallback, method);
    sub_B5D5C4(&Method_DataManager_GetMasterData_StoneShopMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15, v16);
    sub_B5D5C4(&Method_UserGameActRecoverMenu_EndBuyStoneConfirm__, v17, v18, v19);
    sub_B5D5C4(&Method_UserGameActRecoverMenu_EndMaxFrameConfirm__, v20, v21, v22);
    sub_B5D5C4(&Method_UserGameActRecoverMenu_EndNoShopConfirm__, v23, v24, v25);
    sub_B5D5C4(&Method_UserGameActRecoverMenu_EndRecoverUserGameActConfirm__, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_10142/*"OnMoveEnd"*/, v29, v30, v31);
    byte_42E7133 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callbackFunc = callback;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callback,
      (System_String_array **)refreshCallback,
      (System_String_array **)method,
      v4,
      v5,
      v6,
      v7);
    this->fields.refreshCallbackFunc = refreshCallback;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.refreshCallbackFunc,
      (System_Int32_array **)refreshCallback,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_25;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    SelfUserGame = UserGameMaster__getSelfUserGame(v40);
    gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_25;
    gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)gameObject,
                                               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_StoneShopMaster___);
    if ( !gameObject )
      goto LABEL_25;
    gameObject = (UnityEngine_GameObject_o *)StoneShopMaster__GetEnableEntitiyList_23586212(
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
        v61 = sub_B5D6C8(gameObject);
        sub_B5D668(v61, 0LL);
      }
      monitor = (struct StoneShopEntity_o *)gameObject[1].monitor;
      this->fields.stoneShopEntity = monitor;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.stoneShopEntity,
        (System_Int32_array **)monitor,
        v42,
        v43,
        v44,
        v45,
        v46,
        v47);
      if ( !SelfUserGame )
        goto LABEL_25;
      gameObject = (UnityEngine_GameObject_o *)UserGameEntity__IsNeedRecoverAct(SelfUserGame, v39);
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        stoneShopEntity = this->fields.stoneShopEntity;
        if ( stoneShopEntity )
        {
          if ( SelfUserGame->fields.stone >= stoneShopEntity->fields.price )
          {
            this->fields.state = 3;
            recoverConfirmMenu = this->fields.recoverConfirmMenu;
            v52 = (UserGameActRecoverConfirmMenu_CallbackFunc_o *)sub_B5D694(UserGameActRecoverConfirmMenu_CallbackFunc_TypeInfo);
            UserGameActRecoverConfirmMenu_CallbackFunc___ctor(
              v52,
              (Il2CppObject *)this,
              Method_UserGameActRecoverMenu_EndRecoverUserGameActConfirm__,
              0LL);
            if ( recoverConfirmMenu )
            {
              v55 = recoverConfirmMenu;
              v54 = 0;
              goto LABEL_23;
            }
          }
          else
          {
            this->fields.state = 4;
            v51 = this->fields.recoverConfirmMenu;
            v52 = (UserGameActRecoverConfirmMenu_CallbackFunc_o *)sub_B5D694(UserGameActRecoverConfirmMenu_CallbackFunc_TypeInfo);
            UserGameActRecoverConfirmMenu_CallbackFunc___ctor(
              v52,
              (Il2CppObject *)this,
              Method_UserGameActRecoverMenu_EndBuyStoneConfirm__,
              0LL);
            if ( v51 )
            {
              v54 = 1;
              v55 = v51;
LABEL_23:
              v58 = stoneShopEntity;
              v59 = v52;
              goto LABEL_24;
            }
          }
        }
LABEL_25:
        sub_B5D69C(gameObject, v39);
      }
      this->fields.state = 2;
      v56 = this->fields.recoverConfirmMenu;
      v57 = (UserGameActRecoverConfirmMenu_CallbackFunc_o *)sub_B5D694(UserGameActRecoverConfirmMenu_CallbackFunc_TypeInfo);
      UserGameActRecoverConfirmMenu_CallbackFunc___ctor(
        v57,
        (Il2CppObject *)this,
        Method_UserGameActRecoverMenu_EndMaxFrameConfirm__,
        0LL);
      if ( !v56 )
        goto LABEL_25;
      v54 = 3;
    }
    else
    {
      this->fields.state = 1;
      v56 = this->fields.recoverConfirmMenu;
      v57 = (UserGameActRecoverConfirmMenu_CallbackFunc_o *)sub_B5D694(UserGameActRecoverConfirmMenu_CallbackFunc_TypeInfo);
      UserGameActRecoverConfirmMenu_CallbackFunc___ctor(
        v57,
        (Il2CppObject *)this,
        Method_UserGameActRecoverMenu_EndNoShopConfirm__,
        0LL);
      if ( !v56 )
        goto LABEL_25;
      v54 = 4;
    }
    v55 = v56;
    v58 = 0LL;
    v59 = v57;
LABEL_24:
    UserGameActRecoverConfirmMenu__Open(v55, v54, v58, v59, v53);
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10142/*"OnMoveEnd"*/,
      0.1,
      0LL);
  }
}


void __fastcall UserGameActRecoverMenu__RequestUserGameActRecover(
        UserGameActRecoverMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  NetworkManager_ResultCallbackFunc_o *v14; // x20
  PurchaseByStoneRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v16; // x1
  struct StoneShopEntity_o *stoneShopEntity; // x8

  if ( (byte_42E7139 & 1) == 0 )
  {
    sub_B5D5C4(&Method_NetworkManager_getRequest_PurchaseByStoneRequest___, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_UserGameActRecoverMenu_EndRequestUserGameActRecover__, v11, v12, v13);
    byte_42E7139 = 1;
  }
  if ( this->fields.stoneShopEntity )
  {
    v14 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v14,
      (Il2CppObject *)this,
      Method_UserGameActRecoverMenu_EndRequestUserGameActRecover__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = (PurchaseByStoneRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                      v14,
                                                                      (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_PurchaseByStoneRequest___);
    stoneShopEntity = this->fields.stoneShopEntity;
    if ( !stoneShopEntity || !Request_WarBoardWallAttackRequest )
      sub_B5D69C(Request_WarBoardWallAttackRequest, v16);
    PurchaseByStoneRequest__beginRequest(Request_WarBoardWallAttackRequest, stoneShopEntity->fields.id, 1, 0LL);
  }
  else
  {
    UserGameActRecoverMenu__Callback(this, 1, v2);
  }
}


void __fastcall UserGameActRecoverMenu__SelectedBuyBankItemConfirm(
        UserGameActRecoverMenu_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  CommonUI_o *Instance; // x0
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x2
  struct UserGameActRecoverConfirmMenu_o *recoverConfirmMenu; // x20
  struct StoneShopEntity_o *stoneShopEntity; // x21
  UserGameActRecoverConfirmMenu_CallbackFunc_o *v20; // x22
  const MethodInfo *v21; // x4
  int32_t v22; // w1
  UserGameActRecoverConfirmMenu_o *v23; // x0
  StoneShopEntity_o *v24; // x2
  UserGameActRecoverMenu_o *v25; // x0
  int32_t v26; // w1
  struct UserGameActRecoverConfirmMenu_o *v27; // x21
  struct StoneShopEntity_o *v28; // x20

  if ( (byte_42E7137 & 1) == 0 )
  {
    sub_B5D5C4(&UserGameActRecoverConfirmMenu_CallbackFunc_TypeInfo, result, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7, v8);
    sub_B5D5C4(&Method_UserGameActRecoverMenu_EndBuyStoneConfirm__, v9, v10, v11);
    sub_B5D5C4(&Method_UserGameActRecoverMenu_EndRecoverUserGameActConfirm__, v12, v13, v14);
    byte_42E7137 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
LABEL_15:
    sub_B5D69C(Instance, v16);
  CommonUI__CloseStonePurchaseMenu(Instance, 0LL);
  switch ( result )
  {
    case 0:
    case 4:
      Instance = (CommonUI_o *)this->fields.recoverConfirmMenu;
      this->fields.state = 4;
      if ( !Instance )
        goto LABEL_15;
      UserGameActRecoverConfirmMenu__Init((UserGameActRecoverConfirmMenu_o *)Instance, v16);
      recoverConfirmMenu = this->fields.recoverConfirmMenu;
      stoneShopEntity = this->fields.stoneShopEntity;
      v20 = (UserGameActRecoverConfirmMenu_CallbackFunc_o *)sub_B5D694(UserGameActRecoverConfirmMenu_CallbackFunc_TypeInfo);
      UserGameActRecoverConfirmMenu_CallbackFunc___ctor(
        v20,
        (Il2CppObject *)this,
        Method_UserGameActRecoverMenu_EndBuyStoneConfirm__,
        0LL);
      if ( !recoverConfirmMenu )
        goto LABEL_15;
      v22 = 1;
      v23 = recoverConfirmMenu;
      v24 = stoneShopEntity;
      goto LABEL_14;
    case 1:
      v26 = 1;
      v25 = this;
      goto LABEL_10;
    case 2:
      Instance = (CommonUI_o *)this->fields.recoverConfirmMenu;
      this->fields.state = 3;
      if ( !Instance )
        goto LABEL_15;
      UserGameActRecoverConfirmMenu__Init((UserGameActRecoverConfirmMenu_o *)Instance, v16);
      v27 = this->fields.recoverConfirmMenu;
      v28 = this->fields.stoneShopEntity;
      v20 = (UserGameActRecoverConfirmMenu_CallbackFunc_o *)sub_B5D694(UserGameActRecoverConfirmMenu_CallbackFunc_TypeInfo);
      UserGameActRecoverConfirmMenu_CallbackFunc___ctor(
        v20,
        (Il2CppObject *)this,
        Method_UserGameActRecoverMenu_EndRecoverUserGameActConfirm__,
        0LL);
      if ( !v27 )
        goto LABEL_15;
      v23 = v27;
      v22 = 0;
      v24 = v28;
LABEL_14:
      UserGameActRecoverConfirmMenu__Open(v23, v22, v24, v20, v21);
      break;
    case 3:
      v25 = this;
      v26 = 0;
LABEL_10:
      UserGameActRecoverMenu__Callback(v25, v26, v17);
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
  __int64 v3; // x3
  struct UserGameActRecoverMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct UserGameActRecoverMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  UserGameActRecoverMenu_o *v12; // x0
  UserGameActRecoverMenu_CallbackFunc_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42E7131 & 1) == 0 )
  {
    sub_B5D5C4(&UserGameActRecoverMenu_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E7131 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Combine(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (UserGameActRecoverMenu_CallbackFunc_c *)v9->klass != UserGameActRecoverMenu_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  v12 = (UserGameActRecoverMenu_o *)sub_B5D990(v9);
  UserGameActRecoverMenu__remove_callbackFunc(v12, v13, v14);
}


void __fastcall UserGameActRecoverMenu__remove_callbackFunc(
        UserGameActRecoverMenu_o *this,
        UserGameActRecoverMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct UserGameActRecoverMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct UserGameActRecoverMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  UserGameActRecoverMenu_o *v12; // x0
  UserGameActRecoverMenu_CallbackFunc_o *v13; // x1
  System_Action_o *v14; // x2
  const MethodInfo *v15; // x3

  if ( (byte_42E7132 & 1) == 0 )
  {
    sub_B5D5C4(&UserGameActRecoverMenu_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E7132 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Remove(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (UserGameActRecoverMenu_CallbackFunc_c *)v9->klass != UserGameActRecoverMenu_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  v12 = (UserGameActRecoverMenu_o *)sub_B5D990(v9);
  UserGameActRecoverMenu__Open(v12, v13, v14, v15);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserGameActRecoverMenu_CallbackFunc___ctor(
        UserGameActRecoverMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B5D560(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


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
  if ( (byte_42E7001 & 1) == 0 )
  {
    sub_B5D5C4(&UserGameActRecoverMenu_Result_TypeInfo, result, (_DWORD)callback, object);
    byte_42E7001 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(UserGameActRecoverMenu_Result_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B5D568(this, v9, callback, object);
}


void __fastcall UserGameActRecoverMenu_CallbackFunc__EndInvoke(
        UserGameActRecoverMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserGameActRecoverMenu_CallbackFunc__Invoke(
        UserGameActRecoverMenu_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v5; // x24
  UserGameActRecoverMenu_CallbackFunc_o **v6; // x25
  __int64 v7; // x26
  unsigned int v8; // w23
  __int64 class_0; // x0
  __int64 v10; // x3
  __int64 v11; // x8
  unsigned int v12; // w22
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, _QWORD, _QWORD); // x0
  UserGameActRecoverMenu_CallbackFunc_o *v19; // x8
  __int64 *v20; // x21
  __int64 v21; // x22
  void (__fastcall *v22)(unsigned int *, __int64); // x23
  char v23; // w23
  char v24; // w0
  __int64 v25; // x3
  unsigned int v26; // w23
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  unsigned int v32; // [xsp+4h] [xbp-4Ch] BYREF
  UserGameActRecoverMenu_CallbackFunc_o *v33; // [xsp+8h] [xbp-48h] BYREF

  v33 = this;
  v32 = result;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v6 = &v33;
    v5 = 1LL;
    goto LABEL_5;
  }
  v5 = *(_QWORD *)(v3 + 24);
  if ( v5 )
  {
    v6 = (UserGameActRecoverMenu_CallbackFunc_o **)(v3 + 32);
LABEL_5:
    v7 = 0LL;
    while ( 1 )
    {
      v19 = v6[v7];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(unsigned int *, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v19->fields.extra_arg, *(_QWORD *)&result, method);
      if ( (sub_B5D5F4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22((unsigned int *)v32, v21);
LABEL_38:
      if ( ++v7 == v5 )
        return;
    }
    if ( !v20 )
    {
      v22(&v32 - 4, v21);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B5D5EC(v21);
      v24 = sub_B5D9F0(v21);
      if ( (v23 & 1) != 0 )
      {
        v26 = v32;
        if ( (v24 & 1) != 0 )
        {
          v27 = *v20;
          v28 = *(_QWORD *)(v21 + 24);
          v29 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AF54C0(v20, v28, v29, v25);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B5D674(v16, v21);
        (*v18)(v20, v26, v18);
      }
      else
      {
        v8 = *(unsigned __int16 *)(v21 + 72);
        if ( (v24 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v21);
          v11 = *v20;
          v12 = v32;
          if ( *(_WORD *)(*v20 + 298) )
          {
            v13 = 0LL;
            v14 = (_DWORD *)(*(_QWORD *)(v11 + 176) + 8LL);
            while ( *((_QWORD *)v14 - 1) != class_0 )
            {
              ++v13;
              v14 += 4;
              if ( v13 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_11;
            }
            v15 = v11 + 16LL * (int)(*v14 + v8) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AF54C0(v20, class_0, v8, v10);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))v15)(v20, v12, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            v32,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, __int64))v22)(v20, v32, v21);
    goto LABEL_38;
  }
}