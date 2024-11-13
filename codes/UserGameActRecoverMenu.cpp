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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *p_callbackFunc; // x0
  struct UserGameActRecoverMenu_CallbackFunc_o *v9; // x20
  struct UserGameActRecoverMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (PartyOrganizationUtility_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  p_callbackFunc->klass = 0LL;
  sub_1BCA784(p_callbackFunc, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
  if ( callbackFunc )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))v9->fields.m_target)(
      v9->fields.original_method_info,
      (unsigned int)result,
      *(_QWORD *)&v9->fields.extra_arg);
}


void __fastcall UserGameActRecoverMenu__Close(UserGameActRecoverMenu_o *this, const MethodInfo *method)
{
  UserGameActRecoverConfirmMenu_o *recoverConfirmMenu; // x0
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  struct System_Action_o **p_refreshCallbackFunc; // x19
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( this->fields.state )
  {
    recoverConfirmMenu = this->fields.recoverConfirmMenu;
    if ( !recoverConfirmMenu
      || (UserGameActRecoverConfirmMenu__Init(recoverConfirmMenu, method),
          (recoverConfirmMenu = (UserGameActRecoverConfirmMenu_o *)UnityEngine_Component__get_gameObject(
                                                                     (UnityEngine_Component_o *)this,
                                                                     0LL)) == 0LL) )
    {
      sub_1BCAA3C(recoverConfirmMenu, method);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)recoverConfirmMenu, 0, 0LL);
    this->fields.stoneShopEntity = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.stoneShopEntity, 0LL, v4, v5, v6, v7, v8, v9);
    this->fields.refreshCallbackFunc = 0LL;
    p_refreshCallbackFunc = &this->fields.refreshCallbackFunc;
    sub_1BCA784((PartyOrganizationUtility_o *)p_refreshCallbackFunc, 0LL, v11, v12, v13, v14, v15, v16);
    *((_DWORD *)p_refreshCallbackFunc + 4) = 0;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserGameActRecoverMenu__EndBuyStoneConfirm(
        UserGameActRecoverMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  Il2CppObject *Instance; // x20
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  StonePurchaseMenu_CallbackFunc_o *v18; // x21
  __int64 v19; // x0
  __int64 v20; // x1
  UserGameActRecoverConfirmMenu_o *recoverConfirmMenu; // x20
  System_Action_o *v22; // x21
  const MethodInfo *v23; // x2

  if ( (byte_4B14EB3 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, method);
    sub_1BCA7E0(&StonePurchaseMenu_CallbackFunc_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    sub_1BCA7E0(&Method_UserGameActRecoverMenu_EndCloseBuyStoneConfirm__, v10, v11);
    sub_1BCA7E0(&Method_UserGameActRecoverMenu_SelectedBuyBankItemConfirm__, v12, v13);
    byte_4B14EB3 = 1;
  }
  if ( isDecide )
  {
    this->fields.state = 5;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v18 = (StonePurchaseMenu_CallbackFunc_o *)sub_1BCAA2C(StonePurchaseMenu_CallbackFunc_TypeInfo, v15, v16, v17);
    StonePurchaseMenu_CallbackFunc___ctor(
      v18,
      (Il2CppObject *)this,
      Method_UserGameActRecoverMenu_SelectedBuyBankItemConfirm__,
      0LL);
    if ( Instance )
    {
      CommonUI__OpenStonePurchaseMenu((CommonUI_o *)Instance, v18, this->fields.refreshCallbackFunc, 0LL);
      return;
    }
LABEL_8:
    sub_1BCAA3C(v19, v20);
  }
  recoverConfirmMenu = this->fields.recoverConfirmMenu;
  v22 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, isDecide, method, v3);
  System_Action___ctor(v22, (Il2CppObject *)this, Method_UserGameActRecoverMenu_EndCloseBuyStoneConfirm__, 0LL);
  if ( !recoverConfirmMenu )
    goto LABEL_8;
  UserGameActRecoverConfirmMenu__Close_38076064(recoverConfirmMenu, v22, v23);
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
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  UserGameActRecoverConfirmMenu_o *recoverConfirmMenu; // x20
  System_Action_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2

  if ( (byte_4B14EB2 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, method);
    sub_1BCA7E0(&Method_UserGameActRecoverMenu_EndCloseMaxFrameConfirm__, v5, v6);
    byte_4B14EB2 = 1;
  }
  recoverConfirmMenu = this->fields.recoverConfirmMenu;
  v8 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, isDecide, method, v3);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_UserGameActRecoverMenu_EndCloseMaxFrameConfirm__, 0LL);
  if ( !recoverConfirmMenu )
    sub_1BCAA3C(v9, v10);
  UserGameActRecoverConfirmMenu__Close_38076064(recoverConfirmMenu, v8, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserGameActRecoverMenu__EndNoShopConfirm(
        UserGameActRecoverMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  UserGameActRecoverConfirmMenu_o *recoverConfirmMenu; // x20
  System_Action_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2

  if ( (byte_4B14EB1 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, method);
    sub_1BCA7E0(&Method_UserGameActRecoverMenu_EndCloseNoShopConfirm__, v5, v6);
    byte_4B14EB1 = 1;
  }
  recoverConfirmMenu = this->fields.recoverConfirmMenu;
  v8 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, isDecide, method, v3);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_UserGameActRecoverMenu_EndCloseNoShopConfirm__, 0LL);
  if ( !recoverConfirmMenu )
    sub_1BCAA3C(v9, v10);
  UserGameActRecoverConfirmMenu__Close_38076064(recoverConfirmMenu, v8, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserGameActRecoverMenu__EndRecoverUserGameActConfirm(
        UserGameActRecoverMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  UserGameActRecoverConfirmMenu_o *recoverConfirmMenu; // x20
  System_Action_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4B14EB5 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, method);
    sub_1BCA7E0(&Method_UserGameActRecoverMenu_EndCloseRecoverUserGameActConfirm__, v6, v7);
    byte_4B14EB5 = 1;
  }
  if ( isDecide )
  {
    this->fields.state = 6;
    UserGameActRecoverMenu__RequestUserGameActRecover(this, (const MethodInfo *)isDecide);
  }
  else
  {
    recoverConfirmMenu = this->fields.recoverConfirmMenu;
    v9 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, isDecide, method, v3);
    System_Action___ctor(
      v9,
      (Il2CppObject *)this,
      Method_UserGameActRecoverMenu_EndCloseRecoverUserGameActConfirm__,
      0LL);
    if ( !recoverConfirmMenu )
      sub_1BCAA3C(v10, v11);
    UserGameActRecoverConfirmMenu__Close_38076064(recoverConfirmMenu, v9, v12);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserGameActRecoverMenu__EndRecoverUserGameActResultConfirm(
        UserGameActRecoverMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  UserGameActRecoverConfirmMenu_o *recoverConfirmMenu; // x20
  System_Action_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2

  if ( (byte_4B14EB8 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, method);
    sub_1BCA7E0(&Method_UserGameActRecoverMenu_EndCloseRecoverUserGameActResultConfirm__, v5, v6);
    byte_4B14EB8 = 1;
  }
  recoverConfirmMenu = this->fields.recoverConfirmMenu;
  v8 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, isDecide, method, v3);
  System_Action___ctor(
    v8,
    (Il2CppObject *)this,
    Method_UserGameActRecoverMenu_EndCloseRecoverUserGameActResultConfirm__,
    0LL);
  if ( !recoverConfirmMenu )
    sub_1BCAA3C(v9, v10);
  UserGameActRecoverConfirmMenu__Close_38076064(recoverConfirmMenu, v8, v11);
}


void __fastcall UserGameActRecoverMenu__EndRequestUserGameActRecover(
        UserGameActRecoverMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  UserGameActRecoverConfirmMenu_o *recoverConfirmMenu; // x0
  UserGameActRecoverConfirmMenu_o *v7; // x20
  StoneShopEntity_o *stoneShopEntity; // x21
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  UserGameActRecoverConfirmMenu_CallbackFunc_o *v12; // x22
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x4
  struct System_Action_o *refreshCallbackFunc; // x8

  if ( (byte_4B14EB7 & 1) == 0 )
  {
    sub_1BCA7E0(&UserGameActRecoverConfirmMenu_CallbackFunc_TypeInfo, result, method);
    sub_1BCA7E0(&Method_UserGameActRecoverMenu_EndRecoverUserGameActResultConfirm__, v4, v5);
    byte_4B14EB7 = 1;
  }
  recoverConfirmMenu = this->fields.recoverConfirmMenu;
  this->fields.state = 7;
  if ( !recoverConfirmMenu
    || (UserGameActRecoverConfirmMenu__Init(recoverConfirmMenu, (const MethodInfo *)result),
        v7 = this->fields.recoverConfirmMenu,
        stoneShopEntity = this->fields.stoneShopEntity,
        v12 = (UserGameActRecoverConfirmMenu_CallbackFunc_o *)sub_1BCAA2C(
                                                                UserGameActRecoverConfirmMenu_CallbackFunc_TypeInfo,
                                                                v9,
                                                                v10,
                                                                v11),
        UserGameActRecoverConfirmMenu_CallbackFunc___ctor(
          v12,
          (Il2CppObject *)this,
          Method_UserGameActRecoverMenu_EndRecoverUserGameActResultConfirm__,
          v13),
        !v7) )
  {
    sub_1BCAA3C(recoverConfirmMenu, result);
  }
  UserGameActRecoverConfirmMenu__Open(v7, 2, stoneShopEntity, v12, v14);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v32; // x1
  UserGameEntity_o *SelfUserGame; // x20
  int64_t v34; // x2
  __int64 v35; // x3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  UnityEngine_GameObject_c *klass; // x8
  struct StoneShopEntity_o *monitor; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  struct StoneShopEntity_o *stoneShopEntity; // x21
  struct UserGameActRecoverConfirmMenu_o *v45; // x20
  UserGameActRecoverConfirmMenu_CallbackFunc_o *v46; // x22
  const MethodInfo *v47; // x3
  const MethodInfo *v48; // x4
  int32_t v49; // w1
  UserGameActRecoverConfirmMenu_o *v50; // x0
  struct UserGameActRecoverConfirmMenu_o *v51; // x20
  UserGameActRecoverConfirmMenu_CallbackFunc_o *v52; // x21
  const MethodInfo *v53; // x3
  const MethodInfo *v54; // x3
  StoneShopEntity_o *v55; // x2
  UserGameActRecoverConfirmMenu_CallbackFunc_o *v56; // x3
  struct UserGameActRecoverConfirmMenu_o *recoverConfirmMenu; // x20
  const MethodInfo *v58; // x3

  if ( (byte_4B14EB0 & 1) == 0 )
  {
    sub_1BCA7E0(&UserGameActRecoverConfirmMenu_CallbackFunc_TypeInfo, callback, refreshCallback);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_StoneShopMaster___, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14);
    sub_1BCA7E0(&Method_UserGameActRecoverMenu_EndBuyStoneConfirm__, v15, v16);
    sub_1BCA7E0(&Method_UserGameActRecoverMenu_EndMaxFrameConfirm__, v17, v18);
    sub_1BCA7E0(&Method_UserGameActRecoverMenu_EndNoShopConfirm__, v19, v20);
    sub_1BCA7E0(&Method_UserGameActRecoverMenu_EndRecoverUserGameActConfirm__, v21, v22);
    sub_1BCA7E0(&StringLiteral_10069/*"OnMoveEnd"*/, v23, v24);
    byte_4B14EB0 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callbackFunc = callback;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
      (int64_t)callback,
      (int64_t)refreshCallback,
      (int32_t)method,
      v4,
      v5,
      v6,
      v7);
    this->fields.refreshCallbackFunc = refreshCallback;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.refreshCallbackFunc,
      (int64_t)refreshCallback,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_25;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_25;
    gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)gameObject,
                                               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_StoneShopMaster___);
    if ( !gameObject )
      goto LABEL_25;
    gameObject = (UnityEngine_GameObject_o *)StoneShopMaster__GetEnableEntitiyList_40724432(
                                               (StoneShopMaster_o *)gameObject,
                                               2,
                                               0LL);
    if ( !gameObject )
      goto LABEL_25;
    klass = gameObject[1].klass;
    if ( klass )
    {
      if ( !(_DWORD)klass )
        sub_1BCAA44(gameObject, v32);
      monitor = (struct StoneShopEntity_o *)gameObject[1].monitor;
      this->fields.stoneShopEntity = monitor;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.stoneShopEntity,
        (int64_t)monitor,
        v34,
        v35,
        v36,
        v37,
        v38,
        v39);
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
            v46 = (UserGameActRecoverConfirmMenu_CallbackFunc_o *)sub_1BCAA2C(
                                                                    UserGameActRecoverConfirmMenu_CallbackFunc_TypeInfo,
                                                                    v32,
                                                                    v42,
                                                                    v43);
            UserGameActRecoverConfirmMenu_CallbackFunc___ctor(
              v46,
              (Il2CppObject *)this,
              Method_UserGameActRecoverMenu_EndRecoverUserGameActConfirm__,
              v58);
            if ( recoverConfirmMenu )
            {
              v50 = recoverConfirmMenu;
              v49 = 0;
              goto LABEL_23;
            }
          }
          else
          {
            this->fields.state = 4;
            v45 = this->fields.recoverConfirmMenu;
            v46 = (UserGameActRecoverConfirmMenu_CallbackFunc_o *)sub_1BCAA2C(
                                                                    UserGameActRecoverConfirmMenu_CallbackFunc_TypeInfo,
                                                                    v32,
                                                                    v42,
                                                                    v43);
            UserGameActRecoverConfirmMenu_CallbackFunc___ctor(
              v46,
              (Il2CppObject *)this,
              Method_UserGameActRecoverMenu_EndBuyStoneConfirm__,
              v47);
            if ( v45 )
            {
              v49 = 1;
              v50 = v45;
LABEL_23:
              v55 = stoneShopEntity;
              v56 = v46;
              goto LABEL_24;
            }
          }
        }
LABEL_25:
        sub_1BCAA3C(gameObject, v32);
      }
      this->fields.state = 2;
      v51 = this->fields.recoverConfirmMenu;
      v52 = (UserGameActRecoverConfirmMenu_CallbackFunc_o *)sub_1BCAA2C(
                                                              UserGameActRecoverConfirmMenu_CallbackFunc_TypeInfo,
                                                              v32,
                                                              v42,
                                                              v43);
      UserGameActRecoverConfirmMenu_CallbackFunc___ctor(
        v52,
        (Il2CppObject *)this,
        Method_UserGameActRecoverMenu_EndMaxFrameConfirm__,
        v54);
      if ( !v51 )
        goto LABEL_25;
      v49 = 3;
    }
    else
    {
      this->fields.state = 1;
      v51 = this->fields.recoverConfirmMenu;
      v52 = (UserGameActRecoverConfirmMenu_CallbackFunc_o *)sub_1BCAA2C(
                                                              UserGameActRecoverConfirmMenu_CallbackFunc_TypeInfo,
                                                              v32,
                                                              v34,
                                                              v35);
      UserGameActRecoverConfirmMenu_CallbackFunc___ctor(
        v52,
        (Il2CppObject *)this,
        Method_UserGameActRecoverMenu_EndNoShopConfirm__,
        v53);
      if ( !v51 )
        goto LABEL_25;
      v49 = 4;
    }
    v50 = v51;
    v55 = 0LL;
    v56 = v52;
LABEL_24:
    UserGameActRecoverConfirmMenu__Open(v50, v49, v55, v56, v48);
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10069/*"OnMoveEnd"*/,
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
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  NetworkManager_ResultCallbackFunc_o *v11; // x20
  __int64 v12; // x1
  Il2CppObject *Request_object; // x0
  __int64 v14; // x1
  struct StoneShopEntity_o *stoneShopEntity; // x8

  if ( (byte_4B14EB6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_NetworkManager_getRequest_PurchaseByStoneRequest___, method, v2);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_UserGameActRecoverMenu_EndRequestUserGameActRecover__, v9, v10);
    byte_4B14EB6 = 1;
  }
  if ( this->fields.stoneShopEntity )
  {
    v11 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(NetworkManager_ResultCallbackFunc_TypeInfo, method, v2, v3);
    NetworkManager_ResultCallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      Method_UserGameActRecoverMenu_EndRequestUserGameActRecover__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v12);
    Request_object = NetworkManager__getRequest_object_(
                       v11,
                       (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_PurchaseByStoneRequest___);
    stoneShopEntity = this->fields.stoneShopEntity;
    if ( !stoneShopEntity || !Request_object )
      sub_1BCAA3C(Request_object, v14);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  CommonUI_o *Instance; // x0
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x2
  struct UserGameActRecoverConfirmMenu_o *recoverConfirmMenu; // x20
  struct StoneShopEntity_o *stoneShopEntity; // x21
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  UserGameActRecoverConfirmMenu_CallbackFunc_o *v19; // x22
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x4
  int32_t v22; // w1
  UserGameActRecoverConfirmMenu_o *v23; // x0
  StoneShopEntity_o *v24; // x2
  int32_t v25; // w1
  UserGameActRecoverMenu_o *v26; // x0
  struct UserGameActRecoverConfirmMenu_o *v27; // x21
  struct StoneShopEntity_o *v28; // x20
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  const MethodInfo *v32; // x3

  if ( (byte_4B14EB4 & 1) == 0 )
  {
    sub_1BCA7E0(&UserGameActRecoverConfirmMenu_CallbackFunc_TypeInfo, *(_QWORD *)&result, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6);
    sub_1BCA7E0(&Method_UserGameActRecoverMenu_EndBuyStoneConfirm__, v7, v8);
    sub_1BCA7E0(&Method_UserGameActRecoverMenu_EndRecoverUserGameActConfirm__, v9, v10);
    byte_4B14EB4 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
LABEL_15:
    sub_1BCAA3C(Instance, v12);
  CommonUI__CloseStonePurchaseMenu(Instance, 0LL);
  switch ( result )
  {
    case 0:
    case 4:
      Instance = (CommonUI_o *)this->fields.recoverConfirmMenu;
      this->fields.state = 4;
      if ( !Instance )
        goto LABEL_15;
      UserGameActRecoverConfirmMenu__Init((UserGameActRecoverConfirmMenu_o *)Instance, v12);
      recoverConfirmMenu = this->fields.recoverConfirmMenu;
      stoneShopEntity = this->fields.stoneShopEntity;
      v19 = (UserGameActRecoverConfirmMenu_CallbackFunc_o *)sub_1BCAA2C(
                                                              UserGameActRecoverConfirmMenu_CallbackFunc_TypeInfo,
                                                              v16,
                                                              v17,
                                                              v18);
      UserGameActRecoverConfirmMenu_CallbackFunc___ctor(
        v19,
        (Il2CppObject *)this,
        Method_UserGameActRecoverMenu_EndBuyStoneConfirm__,
        v20);
      if ( !recoverConfirmMenu )
        goto LABEL_15;
      v22 = 1;
      v23 = recoverConfirmMenu;
      v24 = stoneShopEntity;
      goto LABEL_12;
    case 1:
      v25 = 1;
      v26 = this;
      goto LABEL_14;
    case 2:
      Instance = (CommonUI_o *)this->fields.recoverConfirmMenu;
      this->fields.state = 3;
      if ( !Instance )
        goto LABEL_15;
      UserGameActRecoverConfirmMenu__Init((UserGameActRecoverConfirmMenu_o *)Instance, v12);
      v27 = this->fields.recoverConfirmMenu;
      v28 = this->fields.stoneShopEntity;
      v19 = (UserGameActRecoverConfirmMenu_CallbackFunc_o *)sub_1BCAA2C(
                                                              UserGameActRecoverConfirmMenu_CallbackFunc_TypeInfo,
                                                              v29,
                                                              v30,
                                                              v31);
      UserGameActRecoverConfirmMenu_CallbackFunc___ctor(
        v19,
        (Il2CppObject *)this,
        Method_UserGameActRecoverMenu_EndRecoverUserGameActConfirm__,
        v32);
      if ( !v27 )
        goto LABEL_15;
      v23 = v27;
      v22 = 0;
      v24 = v28;
LABEL_12:
      UserGameActRecoverConfirmMenu__Open(v23, v22, v24, v19, v21);
      break;
    case 3:
      v26 = this;
      v25 = 0;
LABEL_14:
      UserGameActRecoverMenu__Callback(v26, v25, v13);
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

  if ( (byte_4B14EAE & 1) == 0 )
  {
    sub_1BCA7E0(&UserGameActRecoverMenu_CallbackFunc_TypeInfo, value, method);
    byte_4B14EAE = 1;
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
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BCACFC(v8);
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

  if ( (byte_4B14EAF & 1) == 0 )
  {
    sub_1BCA7E0(&UserGameActRecoverMenu_CallbackFunc_TypeInfo, value, method);
    byte_4B14EAF = 1;
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
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BCACFC(v8);
  UserGameActRecoverMenu__Open(v11, v12, v13, v14);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserGameActRecoverMenu_CallbackFunc___ctor(
        UserGameActRecoverMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A0C130;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A0C0E8;
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
  if ( (byte_4B14F97 & 1) == 0 )
  {
    sub_1BCA7E0(&UserGameActRecoverMenu_Result_TypeInfo, *(_QWORD *)&result, callback);
    byte_4B14F97 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(UserGameActRecoverMenu_Result_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v9, callback, object);
}


void __fastcall UserGameActRecoverMenu_CallbackFunc__EndInvoke(
        UserGameActRecoverMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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