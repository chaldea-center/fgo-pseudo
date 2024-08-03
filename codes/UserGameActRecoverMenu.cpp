void __fastcall UserGameActRecoverMenu___ctor(UserGameActRecoverMenu_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall UserGameActRecoverMenu__Callback(
        UserGameActRecoverMenu_o *this,
        int32_t result,
        const MethodInfo *method)
{
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_callbackFunc; // x0
  struct UserGameActRecoverMenu_CallbackFunc_o *v5; // x20
  struct UserGameActRecoverMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc;
  v5 = callbackFunc;
  p_callbackFunc->klass = 0LL;
  sub_1B6406C(p_callbackFunc, 0, (int32_t)method, v3);
  if ( callbackFunc )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      (unsigned int)result,
      *(_QWORD *)&v5->fields.extra_arg);
}


void __fastcall UserGameActRecoverMenu__Close(UserGameActRecoverMenu_o *this, const MethodInfo *method)
{
  UserGameActRecoverConfirmMenu_o *recoverConfirmMenu; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  ServantStatusBattleListViewItem_o *p_refreshCallbackFunc; // x19
  int32_t v7; // w2
  int32_t v8; // w3

  if ( this->fields.state )
  {
    recoverConfirmMenu = this->fields.recoverConfirmMenu;
    if ( !recoverConfirmMenu
      || (UserGameActRecoverConfirmMenu__Init(recoverConfirmMenu, method),
          (recoverConfirmMenu = (UserGameActRecoverConfirmMenu_o *)UnityEngine_Component__get_gameObject(
                                                                     (UnityEngine_Component_o *)this,
                                                                     0LL)) == 0LL) )
    {
      sub_1B64324(recoverConfirmMenu);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)recoverConfirmMenu, 0, 0LL);
    this->fields.stoneShopEntity = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.stoneShopEntity, 0, v4, v5);
    this->fields.refreshCallbackFunc = 0LL;
    p_refreshCallbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.refreshCallbackFunc;
    sub_1B6406C(p_refreshCallbackFunc, 0, v7, v8);
    p_refreshCallbackFunc->fields.selectNum = 0;
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
  Il2CppObject *Instance; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  StonePurchaseMenu_CallbackFunc_o *v12; // x21
  __int64 v13; // x0
  UserGameActRecoverConfirmMenu_o *recoverConfirmMenu; // x20
  System_Action_o *v15; // x21
  const MethodInfo *v16; // x2

  if ( (byte_49FB12C & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, isDecide);
    sub_1B640C8(&StonePurchaseMenu_CallbackFunc_TypeInfo, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B640C8(&Method_UserGameActRecoverMenu_EndCloseBuyStoneConfirm__, v7);
    sub_1B640C8(&Method_UserGameActRecoverMenu_SelectedBuyBankItemConfirm__, v8);
    byte_49FB12C = 1;
  }
  if ( isDecide )
  {
    this->fields.state = 5;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v12 = (StonePurchaseMenu_CallbackFunc_o *)sub_1B64314(StonePurchaseMenu_CallbackFunc_TypeInfo, v10, v11);
    StonePurchaseMenu_CallbackFunc___ctor(
      v12,
      (Il2CppObject *)this,
      Method_UserGameActRecoverMenu_SelectedBuyBankItemConfirm__,
      0LL);
    if ( Instance )
    {
      CommonUI__OpenStonePurchaseMenu((CommonUI_o *)Instance, v12, this->fields.refreshCallbackFunc, 0LL);
      return;
    }
LABEL_8:
    sub_1B64324(v13);
  }
  recoverConfirmMenu = this->fields.recoverConfirmMenu;
  v15 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, isDecide, method);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_UserGameActRecoverMenu_EndCloseBuyStoneConfirm__, 0LL);
  if ( !recoverConfirmMenu )
    goto LABEL_8;
  UserGameActRecoverConfirmMenu__Close_37054312(recoverConfirmMenu, v15, v16);
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
  const MethodInfo *v8; // x2

  if ( (byte_49FB12B & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, isDecide);
    sub_1B640C8(&Method_UserGameActRecoverMenu_EndCloseMaxFrameConfirm__, v4);
    byte_49FB12B = 1;
  }
  recoverConfirmMenu = this->fields.recoverConfirmMenu;
  v6 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, isDecide, method);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_UserGameActRecoverMenu_EndCloseMaxFrameConfirm__, 0LL);
  if ( !recoverConfirmMenu )
    sub_1B64324(v7);
  UserGameActRecoverConfirmMenu__Close_37054312(recoverConfirmMenu, v6, v8);
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
  const MethodInfo *v8; // x2

  if ( (byte_49FB12A & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, isDecide);
    sub_1B640C8(&Method_UserGameActRecoverMenu_EndCloseNoShopConfirm__, v4);
    byte_49FB12A = 1;
  }
  recoverConfirmMenu = this->fields.recoverConfirmMenu;
  v6 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, isDecide, method);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_UserGameActRecoverMenu_EndCloseNoShopConfirm__, 0LL);
  if ( !recoverConfirmMenu )
    sub_1B64324(v7);
  UserGameActRecoverConfirmMenu__Close_37054312(recoverConfirmMenu, v6, v8);
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
  const MethodInfo *v9; // x2

  if ( (byte_49FB12E & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, isDecide);
    sub_1B640C8(&Method_UserGameActRecoverMenu_EndCloseRecoverUserGameActConfirm__, v5);
    byte_49FB12E = 1;
  }
  if ( isDecide )
  {
    this->fields.state = 6;
    UserGameActRecoverMenu__RequestUserGameActRecover(this, (const MethodInfo *)isDecide);
  }
  else
  {
    recoverConfirmMenu = this->fields.recoverConfirmMenu;
    v7 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, isDecide, method);
    System_Action___ctor(
      v7,
      (Il2CppObject *)this,
      Method_UserGameActRecoverMenu_EndCloseRecoverUserGameActConfirm__,
      0LL);
    if ( !recoverConfirmMenu )
      sub_1B64324(v8);
    UserGameActRecoverConfirmMenu__Close_37054312(recoverConfirmMenu, v7, v9);
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
  const MethodInfo *v8; // x2

  if ( (byte_49FB131 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, isDecide);
    sub_1B640C8(&Method_UserGameActRecoverMenu_EndCloseRecoverUserGameActResultConfirm__, v4);
    byte_49FB131 = 1;
  }
  recoverConfirmMenu = this->fields.recoverConfirmMenu;
  v6 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, isDecide, method);
  System_Action___ctor(
    v6,
    (Il2CppObject *)this,
    Method_UserGameActRecoverMenu_EndCloseRecoverUserGameActResultConfirm__,
    0LL);
  if ( !recoverConfirmMenu )
    sub_1B64324(v7);
  UserGameActRecoverConfirmMenu__Close_37054312(recoverConfirmMenu, v6, v8);
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
  __int64 v8; // x1
  __int64 v9; // x2
  UserGameActRecoverConfirmMenu_CallbackFunc_o *v10; // x22
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x4
  struct System_Action_o *refreshCallbackFunc; // x8

  if ( (byte_49FB130 & 1) == 0 )
  {
    sub_1B640C8(&UserGameActRecoverConfirmMenu_CallbackFunc_TypeInfo, result);
    sub_1B640C8(&Method_UserGameActRecoverMenu_EndRecoverUserGameActResultConfirm__, v4);
    byte_49FB130 = 1;
  }
  recoverConfirmMenu = this->fields.recoverConfirmMenu;
  this->fields.state = 7;
  if ( !recoverConfirmMenu
    || (UserGameActRecoverConfirmMenu__Init(recoverConfirmMenu, (const MethodInfo *)result),
        v6 = this->fields.recoverConfirmMenu,
        stoneShopEntity = this->fields.stoneShopEntity,
        v10 = (UserGameActRecoverConfirmMenu_CallbackFunc_o *)sub_1B64314(
                                                                UserGameActRecoverConfirmMenu_CallbackFunc_TypeInfo,
                                                                v8,
                                                                v9),
        UserGameActRecoverConfirmMenu_CallbackFunc___ctor(
          v10,
          (Il2CppObject *)this,
          Method_UserGameActRecoverMenu_EndRecoverUserGameActResultConfirm__,
          v11),
        !v6) )
  {
    sub_1B64324(recoverConfirmMenu);
  }
  UserGameActRecoverConfirmMenu__Open(v6, 2, stoneShopEntity, v10, v12);
  refreshCallbackFunc = this->fields.refreshCallbackFunc;
  if ( refreshCallbackFunc )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))refreshCallbackFunc->fields.m_target)(
      refreshCallbackFunc->fields.original_method_info,
      *(_QWORD *)&refreshCallbackFunc->fields.extra_arg);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  UnityEngine_GameObject_o *gameObject; // x0
  UserGameEntity_o *SelfUserGame; // x20
  __int64 v18; // x1
  __int64 v19; // x2
  int32_t v20; // w3
  UnityEngine_GameObject_c *klass; // x8
  struct StoneShopEntity_o *monitor; // x1
  __int64 v23; // x1
  __int64 v24; // x2
  struct StoneShopEntity_o *stoneShopEntity; // x21
  struct UserGameActRecoverConfirmMenu_o *v26; // x20
  UserGameActRecoverConfirmMenu_CallbackFunc_o *v27; // x22
  const MethodInfo *v28; // x3
  const MethodInfo *v29; // x4
  int32_t v30; // w1
  UserGameActRecoverConfirmMenu_o *v31; // x0
  struct UserGameActRecoverConfirmMenu_o *v32; // x20
  UserGameActRecoverConfirmMenu_CallbackFunc_o *v33; // x21
  const MethodInfo *v34; // x3
  const MethodInfo *v35; // x3
  StoneShopEntity_o *v36; // x2
  UserGameActRecoverConfirmMenu_CallbackFunc_o *v37; // x3
  struct UserGameActRecoverConfirmMenu_o *recoverConfirmMenu; // x20
  const MethodInfo *v39; // x3

  if ( (byte_49FB129 & 1) == 0 )
  {
    sub_1B640C8(&UserGameActRecoverConfirmMenu_CallbackFunc_TypeInfo, callback);
    sub_1B640C8(&Method_DataManager_GetMasterData_StoneShopMaster___, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1B640C8(&Method_UserGameActRecoverMenu_EndBuyStoneConfirm__, v9);
    sub_1B640C8(&Method_UserGameActRecoverMenu_EndMaxFrameConfirm__, v10);
    sub_1B640C8(&Method_UserGameActRecoverMenu_EndNoShopConfirm__, v11);
    sub_1B640C8(&Method_UserGameActRecoverMenu_EndRecoverUserGameActConfirm__, v12);
    sub_1B640C8(&StringLiteral_9890/*"OnMoveEnd"*/, v13);
    byte_49FB129 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callbackFunc = callback;
    sub_1B6406C(
      (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      (int32_t)refreshCallback,
      (int32_t)method);
    this->fields.refreshCallbackFunc = refreshCallback;
    sub_1B6406C(
      (ServantStatusBattleListViewItem_o *)&this->fields.refreshCallbackFunc,
      (int32_t)refreshCallback,
      v14,
      v15);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_25;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_25;
    gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)gameObject,
                                               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_StoneShopMaster___);
    if ( !gameObject )
      goto LABEL_25;
    gameObject = (UnityEngine_GameObject_o *)StoneShopMaster__GetEnableEntitiyList_39578388(
                                               (StoneShopMaster_o *)gameObject,
                                               2,
                                               0LL);
    if ( !gameObject )
      goto LABEL_25;
    klass = gameObject[1].klass;
    if ( klass )
    {
      if ( !(_DWORD)klass )
        sub_1B6432C(gameObject, v18);
      monitor = (struct StoneShopEntity_o *)gameObject[1].monitor;
      this->fields.stoneShopEntity = monitor;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.stoneShopEntity, (int32_t)monitor, v19, v20);
      if ( !SelfUserGame )
        goto LABEL_25;
      gameObject = (UnityEngine_GameObject_o *)UserGameEntity__IsNeedRecoverAct(SelfUserGame, 0LL);
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        stoneShopEntity = this->fields.stoneShopEntity;
        if ( stoneShopEntity )
        {
          if ( SelfUserGame->fields.stone >= stoneShopEntity->fields.price )
          {
            this->fields.state = 3;
            recoverConfirmMenu = this->fields.recoverConfirmMenu;
            v27 = (UserGameActRecoverConfirmMenu_CallbackFunc_o *)sub_1B64314(
                                                                    UserGameActRecoverConfirmMenu_CallbackFunc_TypeInfo,
                                                                    v23,
                                                                    v24);
            UserGameActRecoverConfirmMenu_CallbackFunc___ctor(
              v27,
              (Il2CppObject *)this,
              Method_UserGameActRecoverMenu_EndRecoverUserGameActConfirm__,
              v39);
            if ( recoverConfirmMenu )
            {
              v31 = recoverConfirmMenu;
              v30 = 0;
              goto LABEL_23;
            }
          }
          else
          {
            this->fields.state = 4;
            v26 = this->fields.recoverConfirmMenu;
            v27 = (UserGameActRecoverConfirmMenu_CallbackFunc_o *)sub_1B64314(
                                                                    UserGameActRecoverConfirmMenu_CallbackFunc_TypeInfo,
                                                                    v23,
                                                                    v24);
            UserGameActRecoverConfirmMenu_CallbackFunc___ctor(
              v27,
              (Il2CppObject *)this,
              Method_UserGameActRecoverMenu_EndBuyStoneConfirm__,
              v28);
            if ( v26 )
            {
              v30 = 1;
              v31 = v26;
LABEL_23:
              v36 = stoneShopEntity;
              v37 = v27;
              goto LABEL_24;
            }
          }
        }
LABEL_25:
        sub_1B64324(gameObject);
      }
      this->fields.state = 2;
      v32 = this->fields.recoverConfirmMenu;
      v33 = (UserGameActRecoverConfirmMenu_CallbackFunc_o *)sub_1B64314(
                                                              UserGameActRecoverConfirmMenu_CallbackFunc_TypeInfo,
                                                              v23,
                                                              v24);
      UserGameActRecoverConfirmMenu_CallbackFunc___ctor(
        v33,
        (Il2CppObject *)this,
        Method_UserGameActRecoverMenu_EndMaxFrameConfirm__,
        v35);
      if ( !v32 )
        goto LABEL_25;
      v30 = 3;
    }
    else
    {
      this->fields.state = 1;
      v32 = this->fields.recoverConfirmMenu;
      v33 = (UserGameActRecoverConfirmMenu_CallbackFunc_o *)sub_1B64314(
                                                              UserGameActRecoverConfirmMenu_CallbackFunc_TypeInfo,
                                                              v18,
                                                              v19);
      UserGameActRecoverConfirmMenu_CallbackFunc___ctor(
        v33,
        (Il2CppObject *)this,
        Method_UserGameActRecoverMenu_EndNoShopConfirm__,
        v34);
      if ( !v32 )
        goto LABEL_25;
      v30 = 4;
    }
    v31 = v32;
    v36 = 0LL;
    v37 = v33;
LABEL_24:
    UserGameActRecoverConfirmMenu__Open(v31, v30, v36, v37, v29);
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9890/*"OnMoveEnd"*/,
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
  Il2CppObject *Request_object; // x0
  struct StoneShopEntity_o *stoneShopEntity; // x8

  if ( (byte_49FB12F & 1) == 0 )
  {
    sub_1B640C8(&Method_NetworkManager_getRequest_PurchaseByStoneRequest___, method);
    sub_1B640C8(&NetworkManager_TypeInfo, v4);
    sub_1B640C8(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    sub_1B640C8(&Method_UserGameActRecoverMenu_EndRequestUserGameActRecover__, v6);
    byte_49FB12F = 1;
  }
  if ( this->fields.stoneShopEntity )
  {
    v7 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, method, v2);
    NetworkManager_ResultCallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      Method_UserGameActRecoverMenu_EndRequestUserGameActRecover__,
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
  __int64 v13; // x1
  __int64 v14; // x2
  UserGameActRecoverConfirmMenu_CallbackFunc_o *v15; // x22
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x4
  int32_t v18; // w1
  UserGameActRecoverConfirmMenu_o *v19; // x0
  StoneShopEntity_o *v20; // x2
  int32_t v21; // w1
  UserGameActRecoverMenu_o *v22; // x0
  struct UserGameActRecoverConfirmMenu_o *v23; // x21
  struct StoneShopEntity_o *v24; // x20
  __int64 v25; // x1
  __int64 v26; // x2
  const MethodInfo *v27; // x3

  if ( (byte_49FB12D & 1) == 0 )
  {
    sub_1B640C8(&UserGameActRecoverConfirmMenu_CallbackFunc_TypeInfo, *(_QWORD *)&result);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B640C8(&Method_UserGameActRecoverMenu_EndBuyStoneConfirm__, v6);
    sub_1B640C8(&Method_UserGameActRecoverMenu_EndRecoverUserGameActConfirm__, v7);
    byte_49FB12D = 1;
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
      Instance = (CommonUI_o *)this->fields.recoverConfirmMenu;
      this->fields.state = 4;
      if ( !Instance )
        goto LABEL_15;
      UserGameActRecoverConfirmMenu__Init((UserGameActRecoverConfirmMenu_o *)Instance, v9);
      recoverConfirmMenu = this->fields.recoverConfirmMenu;
      stoneShopEntity = this->fields.stoneShopEntity;
      v15 = (UserGameActRecoverConfirmMenu_CallbackFunc_o *)sub_1B64314(
                                                              UserGameActRecoverConfirmMenu_CallbackFunc_TypeInfo,
                                                              v13,
                                                              v14);
      UserGameActRecoverConfirmMenu_CallbackFunc___ctor(
        v15,
        (Il2CppObject *)this,
        Method_UserGameActRecoverMenu_EndBuyStoneConfirm__,
        v16);
      if ( !recoverConfirmMenu )
        goto LABEL_15;
      v18 = 1;
      v19 = recoverConfirmMenu;
      v20 = stoneShopEntity;
      goto LABEL_12;
    case 1:
      v21 = 1;
      v22 = this;
      goto LABEL_14;
    case 2:
      Instance = (CommonUI_o *)this->fields.recoverConfirmMenu;
      this->fields.state = 3;
      if ( !Instance )
        goto LABEL_15;
      UserGameActRecoverConfirmMenu__Init((UserGameActRecoverConfirmMenu_o *)Instance, v9);
      v23 = this->fields.recoverConfirmMenu;
      v24 = this->fields.stoneShopEntity;
      v15 = (UserGameActRecoverConfirmMenu_CallbackFunc_o *)sub_1B64314(
                                                              UserGameActRecoverConfirmMenu_CallbackFunc_TypeInfo,
                                                              v25,
                                                              v26);
      UserGameActRecoverConfirmMenu_CallbackFunc___ctor(
        v15,
        (Il2CppObject *)this,
        Method_UserGameActRecoverMenu_EndRecoverUserGameActConfirm__,
        v27);
      if ( !v23 )
        goto LABEL_15;
      v19 = v23;
      v18 = 0;
      v20 = v24;
LABEL_12:
      UserGameActRecoverConfirmMenu__Open(v19, v18, v20, v15, v17);
      break;
    case 3:
      v22 = this;
      v21 = 0;
LABEL_14:
      UserGameActRecoverMenu__Callback(v22, v21, v10);
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

  if ( (byte_49FB127 & 1) == 0 )
  {
    sub_1B640C8(&UserGameActRecoverMenu_CallbackFunc_TypeInfo, value);
    byte_49FB127 = 1;
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
    v9 = sub_1B9F5B8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B645E4(v8);
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

  if ( (byte_49FB128 & 1) == 0 )
  {
    sub_1B640C8(&UserGameActRecoverMenu_CallbackFunc_TypeInfo, value);
    byte_49FB128 = 1;
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
    v9 = sub_1B9F5B8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B645E4(v8);
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
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
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
  this->fields.m_target = (Il2CppObject *)sub_19AB2A8;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19AB260;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall UserGameActRecoverMenu_CallbackFunc__BeginInvoke(
        UserGameActRecoverMenu_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = result;
  if ( (byte_49FB132 & 1) == 0 )
  {
    sub_1B640C8(&UserGameActRecoverMenu_Result_TypeInfo, *(_QWORD *)&result);
    byte_49FB132 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(UserGameActRecoverMenu_Result_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_1B6407C(this, v9, callback, object);
}


void __fastcall UserGameActRecoverMenu_CallbackFunc__EndInvoke(
        UserGameActRecoverMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64080(result, 0LL, method);
}


void __fastcall UserGameActRecoverMenu_CallbackFunc__Invoke(
        UserGameActRecoverMenu_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    *(_QWORD *)&this->fields.extra_arg);
}