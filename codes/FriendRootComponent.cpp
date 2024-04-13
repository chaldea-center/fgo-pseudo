void __fastcall FriendRootComponent___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EB4BD & 1) == 0 )
  {
    sub_B5D5C4(&FriendRootComponent_TypeInfo, v1, v2, v3);
    byte_42EB4BD = 1;
  }
  FriendRootComponent_TypeInfo->static_fields->tabKindSave = 3;
}


void __fastcall FriendRootComponent___ctor(FriendRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0LL);
}


void __fastcall FriendRootComponent__BackFollowConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  int32_t state; // w8
  CommonUI_o *Instance; // x0
  const MethodInfo *v7; // x1

  if ( (byte_42EB4AE & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, (_DWORD)method, (_DWORD)v2, v3);
    byte_42EB4AE = 1;
  }
  state = this->fields.state;
  switch ( state )
  {
    case ',':
      this->fields.state = 23;
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        CommonUI__CloseNotificationDialog(Instance, 0LL);
        goto LABEL_12;
      }
      goto LABEL_14;
    case '+':
      Instance = (CommonUI_o *)this->fields.friendWarningDialog;
      this->fields.state = 23;
      if ( Instance )
      {
        FriendWarningDialog__Close_30319036((FriendWarningDialog_o *)Instance, 0LL, v2);
        goto LABEL_12;
      }
LABEL_14:
      sub_B5D69C(Instance, method);
    case '*':
      Instance = (CommonUI_o *)this->fields.operationConfirmMenu;
      this->fields.state = 23;
      if ( Instance )
      {
        FriendOperationConfirmMenu__Close((FriendOperationConfirmMenu_o *)Instance, 0LL);
LABEL_12:
        FriendRootComponent__StartSearchInput(this, v7);
        return;
      }
      goto LABEL_14;
  }
}


void __fastcall FriendRootComponent__BackFollowOfferConfirmRefreshShowSearch(
        FriendRootComponent_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  __int64 v18; // x1
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  const MethodInfo *v20; // x2
  FriendSearchMenu_o *friendSearchMenu; // x20
  FriendSearchMenu_CallbackFunc_o *v22; // x21
  const MethodInfo *v23; // x3
  const MethodInfo *v24; // x1

  if ( (byte_42EB4B3 & 1) == 0 )
  {
    sub_B5D5C4(&FriendSearchMenu_CallbackFunc_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&Method_FriendRootComponent_OnSelectSearchFriend__, v9, v10, v11);
    byte_42EB4B3 = 1;
  }
  if ( this->fields.state == 42 )
  {
    this->fields.state = 23;
    this->fields.selectFriendCode = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.selectFriendCode, 0LL, v2, v3, v4, v5, v6, v7);
    this->fields.selectFriendEntity = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.selectFriendEntity, 0LL, v12, v13, v14, v15, v16, v17);
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close(operationConfirmMenu, 0LL),
          (operationConfirmMenu = (FriendOperationConfirmMenu_o *)this->fields.friendSearchResultMenu) == 0LL)
      || (FriendSearchResultMenu__Close_30287068((FriendSearchResultMenu_o *)operationConfirmMenu, 0LL, v20),
          friendSearchMenu = this->fields.friendSearchMenu,
          v22 = (FriendSearchMenu_CallbackFunc_o *)sub_B5D694(FriendSearchMenu_CallbackFunc_TypeInfo),
          FriendSearchMenu_CallbackFunc___ctor(
            v22,
            (Il2CppObject *)this,
            Method_FriendRootComponent_OnSelectSearchFriend__,
            0LL),
          !friendSearchMenu) )
    {
      sub_B5D69C(operationConfirmMenu, v18);
    }
    FriendSearchMenu__Open(friendSearchMenu, v22, 1, v23);
    FriendRootComponent__RefreshInfo(this, v24);
  }
}


void __fastcall FriendRootComponent__BackFollowRemoveConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v10; // x21

  if ( (byte_42EB4B5 & 1) == 0 )
  {
    sub_B5D5C4(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_FriendRootComponent_OnSelectFriendItem__, v5, v6, v7);
    byte_42EB4B5 = 1;
  }
  if ( this->fields.state == 45 )
  {
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close(operationConfirmMenu, 0LL),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v10 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B5D694(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v10,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            0LL),
          !operationItemListViewManager) )
    {
      sub_B5D69C(operationConfirmMenu, method);
    }
    FriendOperationItemListViewManager__SetMode(operationItemListViewManager, 2, v10, 0LL);
    this->fields.state = 4;
  }
}


void __fastcall FriendRootComponent__BackFollowRemoveConfirmBeforeRefresh(
        FriendRootComponent_o *this,
        const MethodInfo *method)
{
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0

  if ( this->fields.state == 45 )
  {
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close(operationConfirmMenu, 0LL),
          (operationConfirmMenu = (FriendOperationConfirmMenu_o *)this->fields.operationItemListViewManager) == 0LL) )
    {
      sub_B5D69C(operationConfirmMenu, method);
    }
    FriendOperationItemListViewManager__DestroyList((FriendOperationItemListViewManager_o *)operationConfirmMenu, 0LL);
  }
}


void __fastcall FriendRootComponent__BackFollowRemoveConfirmRefreshShowFriend(
        FriendRootComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
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
  RequestBase_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v16; // x1

  if ( (byte_42EB4B6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_FriendRootComponent_EndFriendRequest2__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_NetworkManager_getRequest_FriendTopRequest___, v5, v6, v7);
    sub_B5D5C4(&NetworkManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v11, v12, v13);
    byte_42EB4B6 = 1;
  }
  v14 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v14,
    (Il2CppObject *)this,
    Method_FriendRootComponent_EndFriendRequest2__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (RequestBase_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                         v14,
                                                         (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_FriendTopRequest___);
  if ( !Request_WarBoardWallAttackRequest )
    sub_B5D69C(0LL, v16);
  RequestBase__beginRequest(Request_WarBoardWallAttackRequest, 0LL);
}


void __fastcall FriendRootComponent__BackFriendAcceptConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v10; // x21

  if ( (byte_42EB47B & 1) == 0 )
  {
    sub_B5D5C4(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_FriendRootComponent_OnSelectFriendItem__, v5, v6, v7);
    byte_42EB47B = 1;
  }
  if ( this->fields.state == 31 )
  {
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close(operationConfirmMenu, 0LL),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v10 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B5D694(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v10,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            0LL),
          !operationItemListViewManager) )
    {
      sub_B5D69C(operationConfirmMenu, method);
    }
    FriendOperationItemListViewManager__SetMode(operationItemListViewManager, 2, v10, 0LL);
    this->fields.state = 14;
  }
}


void __fastcall FriendRootComponent__BackFriendAcceptConfirmRefreshShowOffered(
        FriendRootComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  __int64 v8; // x1
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v12; // x21

  if ( (byte_42EB47C & 1) == 0 )
  {
    sub_B5D5C4(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_FriendRootComponent_OnSelectFriendItem__, v5, v6, v7);
    byte_42EB47C = 1;
  }
  if ( this->fields.state == 31 )
  {
    this->fields.state = 14;
    FriendRootComponent__RefreshInfo(this, method);
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu )
      goto LABEL_11;
    FriendOperationConfirmMenu__Close(operationConfirmMenu, 0LL);
    operationConfirmMenu = (FriendOperationConfirmMenu_o *)this->fields.operationItemListViewManager;
    if ( !operationConfirmMenu
      || (FriendOperationItemListViewManager__DestroyList(
            (FriendOperationItemListViewManager_o *)operationConfirmMenu,
            0LL),
          (classButtonControl = this->fields.classButtonControl) == 0LL)
      || (operationConfirmMenu = (FriendOperationConfirmMenu_o *)this->fields.operationItemListViewManager) == 0LL
      || (FriendOperationItemListViewManager__CreateList(
            (FriendOperationItemListViewManager_o *)operationConfirmMenu,
            2,
            classButtonControl->fields.currentCursor,
            0LL),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v12 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B5D694(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v12,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            0LL),
          !operationItemListViewManager) )
    {
LABEL_11:
      sub_B5D69C(operationConfirmMenu, v8);
    }
    FriendOperationItemListViewManager__SetMode(operationItemListViewManager, 2, v12, 0LL);
  }
}


void __fastcall FriendRootComponent__BackFriendCancelConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v10; // x21

  if ( (byte_42EB481 & 1) == 0 )
  {
    sub_B5D5C4(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_FriendRootComponent_OnSelectFriendItem__, v5, v6, v7);
    byte_42EB481 = 1;
  }
  if ( this->fields.state == 37 )
  {
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close(operationConfirmMenu, 0LL),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v10 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B5D694(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v10,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            0LL),
          !operationItemListViewManager) )
    {
      sub_B5D69C(operationConfirmMenu, method);
    }
    FriendOperationItemListViewManager__SetMode(operationItemListViewManager, 2, v10, 0LL);
    this->fields.state = 14;
  }
}


void __fastcall FriendRootComponent__BackFriendCancelConfirmRefreshShowOffer(
        FriendRootComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  __int64 v8; // x1
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v12; // x21

  if ( (byte_42EB482 & 1) == 0 )
  {
    sub_B5D5C4(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_FriendRootComponent_OnSelectFriendItem__, v5, v6, v7);
    byte_42EB482 = 1;
  }
  if ( this->fields.state == 37 )
  {
    this->fields.state = 9;
    FriendRootComponent__RefreshInfo(this, method);
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu )
      goto LABEL_11;
    FriendOperationConfirmMenu__Close(operationConfirmMenu, 0LL);
    operationConfirmMenu = (FriendOperationConfirmMenu_o *)this->fields.operationItemListViewManager;
    if ( !operationConfirmMenu
      || (FriendOperationItemListViewManager__DestroyList(
            (FriendOperationItemListViewManager_o *)operationConfirmMenu,
            0LL),
          (classButtonControl = this->fields.classButtonControl) == 0LL)
      || (operationConfirmMenu = (FriendOperationConfirmMenu_o *)this->fields.operationItemListViewManager) == 0LL
      || (FriendOperationItemListViewManager__CreateList(
            (FriendOperationItemListViewManager_o *)operationConfirmMenu,
            1,
            classButtonControl->fields.currentCursor,
            0LL),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v12 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B5D694(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v12,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            0LL),
          !operationItemListViewManager) )
    {
LABEL_11:
      sub_B5D69C(operationConfirmMenu, v8);
    }
    FriendOperationItemListViewManager__SetMode(operationItemListViewManager, 2, v12, 0LL);
  }
}


void __fastcall FriendRootComponent__BackFriendOfferConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t state; // w8
  FriendWarningDialog_o *friendWarningDialog; // x0
  const MethodInfo *v6; // x1

  state = this->fields.state;
  if ( state == 29 )
  {
    friendWarningDialog = this->fields.friendWarningDialog;
    this->fields.state = 23;
    if ( friendWarningDialog )
    {
      FriendWarningDialog__Close_30319036(friendWarningDialog, 0LL, v2);
      goto LABEL_7;
    }
LABEL_9:
    sub_B5D69C(friendWarningDialog, method);
  }
  if ( state == 27 )
  {
    friendWarningDialog = (FriendWarningDialog_o *)this->fields.operationConfirmMenu;
    this->fields.state = 23;
    if ( friendWarningDialog )
    {
      FriendOperationConfirmMenu__Close((FriendOperationConfirmMenu_o *)friendWarningDialog, 0LL);
LABEL_7:
      FriendRootComponent__StartSearchInput(this, v6);
      return;
    }
    goto LABEL_9;
  }
}


void __fastcall FriendRootComponent__BackFriendOfferConfirm2(FriendRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int32_t state; // w8
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v11; // x21

  if ( (byte_42EB4B8 & 1) == 0 )
  {
    sub_B5D5C4(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_FriendRootComponent_OnSelectFriendItem__, v5, v6, v7);
    byte_42EB4B8 = 1;
  }
  state = this->fields.state;
  if ( state == 29 || state == 27 )
  {
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close(operationConfirmMenu, 0LL),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v11 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B5D694(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v11,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            0LL),
          !operationItemListViewManager) )
    {
      sub_B5D69C(operationConfirmMenu, method);
    }
    FriendOperationItemListViewManager__SetMode(operationItemListViewManager, 2, v11, 0LL);
    this->fields.state = 4;
  }
}


void __fastcall FriendRootComponent__BackFriendOfferConfirmRefreshShowFriend(
        FriendRootComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  __int64 v8; // x1
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v12; // x21

  if ( (byte_42EB4B9 & 1) == 0 )
  {
    sub_B5D5C4(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_FriendRootComponent_OnSelectFriendItem__, v5, v6, v7);
    byte_42EB4B9 = 1;
  }
  if ( this->fields.state == 27 )
  {
    this->fields.state = 4;
    FriendRootComponent__RefreshInfo(this, method);
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu )
      goto LABEL_11;
    FriendOperationConfirmMenu__Close(operationConfirmMenu, 0LL);
    operationConfirmMenu = (FriendOperationConfirmMenu_o *)this->fields.operationItemListViewManager;
    if ( !operationConfirmMenu
      || (FriendOperationItemListViewManager__DestroyList(
            (FriendOperationItemListViewManager_o *)operationConfirmMenu,
            0LL),
          (classButtonControl = this->fields.classButtonControl) == 0LL)
      || (operationConfirmMenu = (FriendOperationConfirmMenu_o *)this->fields.operationItemListViewManager) == 0LL
      || (FriendOperationItemListViewManager__CreateList(
            (FriendOperationItemListViewManager_o *)operationConfirmMenu,
            3,
            classButtonControl->fields.currentCursor,
            0LL),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v12 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B5D694(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v12,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            0LL),
          !operationItemListViewManager) )
    {
LABEL_11:
      sub_B5D69C(operationConfirmMenu, v8);
    }
    FriendOperationItemListViewManager__SetMode(operationItemListViewManager, 2, v12, 0LL);
  }
}


void __fastcall FriendRootComponent__BackFriendOfferConfirmRefreshShowSearch(
        FriendRootComponent_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  __int64 v18; // x1
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  const MethodInfo *v20; // x2
  FriendSearchMenu_o *friendSearchMenu; // x20
  FriendSearchMenu_CallbackFunc_o *v22; // x21
  const MethodInfo *v23; // x3

  if ( (byte_42EB479 & 1) == 0 )
  {
    sub_B5D5C4(&FriendSearchMenu_CallbackFunc_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&Method_FriendRootComponent_OnSelectSearchFriend__, v9, v10, v11);
    byte_42EB479 = 1;
  }
  if ( this->fields.state == 27 )
  {
    this->fields.state = 23;
    this->fields.selectFriendCode = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.selectFriendCode, 0LL, v2, v3, v4, v5, v6, v7);
    this->fields.selectFriendEntity = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.selectFriendEntity, 0LL, v12, v13, v14, v15, v16, v17);
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close(operationConfirmMenu, 0LL),
          (operationConfirmMenu = (FriendOperationConfirmMenu_o *)this->fields.friendSearchResultMenu) == 0LL)
      || (FriendSearchResultMenu__Close_30287068((FriendSearchResultMenu_o *)operationConfirmMenu, 0LL, v20),
          friendSearchMenu = this->fields.friendSearchMenu,
          v22 = (FriendSearchMenu_CallbackFunc_o *)sub_B5D694(FriendSearchMenu_CallbackFunc_TypeInfo),
          FriendSearchMenu_CallbackFunc___ctor(
            v22,
            (Il2CppObject *)this,
            Method_FriendRootComponent_OnSelectSearchFriend__,
            0LL),
          !friendSearchMenu) )
    {
      sub_B5D69C(operationConfirmMenu, v18);
    }
    FriendSearchMenu__Open(friendSearchMenu, v22, 1, v23);
  }
}


void __fastcall FriendRootComponent__BackFriendRejectConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v10; // x21

  if ( (byte_42EB47E & 1) == 0 )
  {
    sub_B5D5C4(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_FriendRootComponent_OnSelectFriendItem__, v5, v6, v7);
    byte_42EB47E = 1;
  }
  if ( this->fields.state == 34 )
  {
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close(operationConfirmMenu, 0LL),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v10 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B5D694(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v10,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            0LL),
          !operationItemListViewManager) )
    {
      sub_B5D69C(operationConfirmMenu, method);
    }
    FriendOperationItemListViewManager__SetMode(operationItemListViewManager, 2, v10, 0LL);
    this->fields.state = 14;
  }
}


void __fastcall FriendRootComponent__BackFriendRejectConfirmRefreshShowOffered(
        FriendRootComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  __int64 v8; // x1
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v12; // x21

  if ( (byte_42EB47F & 1) == 0 )
  {
    sub_B5D5C4(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_FriendRootComponent_OnSelectFriendItem__, v5, v6, v7);
    byte_42EB47F = 1;
  }
  if ( this->fields.state == 34 )
  {
    this->fields.state = 14;
    FriendRootComponent__RefreshInfo(this, method);
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu )
      goto LABEL_11;
    FriendOperationConfirmMenu__Close(operationConfirmMenu, 0LL);
    operationConfirmMenu = (FriendOperationConfirmMenu_o *)this->fields.operationItemListViewManager;
    if ( !operationConfirmMenu
      || (FriendOperationItemListViewManager__DestroyList(
            (FriendOperationItemListViewManager_o *)operationConfirmMenu,
            0LL),
          (classButtonControl = this->fields.classButtonControl) == 0LL)
      || (operationConfirmMenu = (FriendOperationConfirmMenu_o *)this->fields.operationItemListViewManager) == 0LL
      || (FriendOperationItemListViewManager__CreateList(
            (FriendOperationItemListViewManager_o *)operationConfirmMenu,
            2,
            classButtonControl->fields.currentCursor,
            0LL),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v12 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B5D694(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v12,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            0LL),
          !operationItemListViewManager) )
    {
LABEL_11:
      sub_B5D69C(operationConfirmMenu, v8);
    }
    FriendOperationItemListViewManager__SetMode(operationItemListViewManager, 2, v12, 0LL);
  }
}


void __fastcall FriendRootComponent__BackFriendRemoveConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v10; // x21

  if ( (byte_42EB484 & 1) == 0 )
  {
    sub_B5D5C4(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_FriendRootComponent_OnSelectFriendItem__, v5, v6, v7);
    byte_42EB484 = 1;
  }
  if ( this->fields.state == 40 )
  {
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close(operationConfirmMenu, 0LL),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v10 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B5D694(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v10,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            0LL),
          !operationItemListViewManager) )
    {
      sub_B5D69C(operationConfirmMenu, method);
    }
    FriendOperationItemListViewManager__SetMode(operationItemListViewManager, 2, v10, 0LL);
    this->fields.state = 4;
  }
}


void __fastcall FriendRootComponent__BackFriendRemoveConfirmRefreshShowFriend(
        FriendRootComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  __int64 v8; // x1
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v12; // x21

  if ( (byte_42EB485 & 1) == 0 )
  {
    sub_B5D5C4(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_FriendRootComponent_OnSelectFriendItem__, v5, v6, v7);
    byte_42EB485 = 1;
  }
  if ( this->fields.state == 40 )
  {
    this->fields.state = 4;
    FriendRootComponent__RefreshInfo(this, method);
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu )
      goto LABEL_11;
    FriendOperationConfirmMenu__Close(operationConfirmMenu, 0LL);
    operationConfirmMenu = (FriendOperationConfirmMenu_o *)this->fields.operationItemListViewManager;
    if ( !operationConfirmMenu
      || (FriendOperationItemListViewManager__DestroyList(
            (FriendOperationItemListViewManager_o *)operationConfirmMenu,
            0LL),
          (classButtonControl = this->fields.classButtonControl) == 0LL)
      || (operationConfirmMenu = (FriendOperationConfirmMenu_o *)this->fields.operationItemListViewManager) == 0LL
      || (FriendOperationItemListViewManager__CreateList(
            (FriendOperationItemListViewManager_o *)operationConfirmMenu,
            3,
            classButtonControl->fields.currentCursor,
            0LL),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v12 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B5D694(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v12,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            0LL),
          !operationItemListViewManager) )
    {
LABEL_11:
      sub_B5D69C(operationConfirmMenu, v8);
    }
    FriendOperationItemListViewManager__SetMode(operationItemListViewManager, 2, v12, 0LL);
  }
}


void __fastcall FriendRootComponent__BackSearchFriend(FriendRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  __int64 v14; // x1
  const MethodInfo *v15; // x2
  FriendSearchResultMenu_o *friendSearchResultMenu; // x0
  FriendSearchMenu_o *friendSearchMenu; // x20
  System_Action_o *v18; // x21
  const MethodInfo *v19; // x2

  if ( (byte_42EB472 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_FriendRootComponent_OnMoveEnd__, v5, v6, v7);
    byte_42EB472 = 1;
  }
  if ( this->fields.state == 23 )
  {
    this->fields.state = 24;
    FriendRootComponent__RefreshInfo(this, method);
    this->fields.selectFriendEntity = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.selectFriendEntity, 0LL, v8, v9, v10, v11, v12, v13);
    friendSearchResultMenu = this->fields.friendSearchResultMenu;
    if ( !friendSearchResultMenu
      || (FriendSearchResultMenu__Close_30287068(friendSearchResultMenu, 0LL, v15),
          friendSearchMenu = this->fields.friendSearchMenu,
          v18 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo),
          System_Action___ctor(v18, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0LL),
          !friendSearchMenu) )
    {
      sub_B5D69C(friendSearchResultMenu, v14);
    }
    FriendSearchMenu__Close_30284920(friendSearchMenu, v18, v19);
  }
}


void __fastcall FriendRootComponent__BackShowFriend(FriendRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  System_Action_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_42EB46A & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_FriendRootComponent_OnMoveEnd__, v5, v6, v7);
    byte_42EB46A = 1;
  }
  if ( this->fields.state == 4 )
  {
    this->fields.state = 5;
    FriendRootComponent__RefreshInfo(this, method);
    operationItemListViewManager = this->fields.operationItemListViewManager;
    v9 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v9, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0LL);
    if ( !operationItemListViewManager )
      sub_B5D69C(v10, v11);
    FriendOperationItemListViewManager__SetMode_31318652(operationItemListViewManager, 4, v9, 0LL);
  }
}


void __fastcall FriendRootComponent__BackShowOffer(FriendRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  System_Action_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x1

  if ( (byte_42EB46C & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_FriendRootComponent_OnMoveEnd__, v5, v6, v7);
    byte_42EB46C = 1;
  }
  if ( this->fields.state == 9 )
  {
    operationItemListViewManager = this->fields.operationItemListViewManager;
    v9 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v9, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0LL);
    if ( !operationItemListViewManager )
      sub_B5D69C(v10, v11);
    FriendOperationItemListViewManager__SetMode_31318652(operationItemListViewManager, 4, v9, 0LL);
    FriendRootComponent__RefreshInfo(this, v12);
    this->fields.state = 10;
  }
}


void __fastcall FriendRootComponent__BackShowOffered(FriendRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  System_Action_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_42EB46E & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_FriendRootComponent_OnMoveEnd__, v5, v6, v7);
    byte_42EB46E = 1;
  }
  if ( this->fields.state == 14 )
  {
    this->fields.state = 15;
    FriendRootComponent__RefreshInfo(this, method);
    operationItemListViewManager = this->fields.operationItemListViewManager;
    v9 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v9, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0LL);
    if ( !operationItemListViewManager )
      sub_B5D69C(v10, v11);
    FriendOperationItemListViewManager__SetMode_31318652(operationItemListViewManager, 4, v9, 0LL);
  }
}


void __fastcall FriendRootComponent__BackShowSearch(FriendRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  System_Action_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_42EB470 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_FriendRootComponent_OnMoveEnd__, v5, v6, v7);
    byte_42EB470 = 1;
  }
  if ( this->fields.state == 19 )
  {
    this->fields.state = 20;
    operationItemListViewManager = this->fields.operationItemListViewManager;
    v9 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v9, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0LL);
    if ( !operationItemListViewManager )
      sub_B5D69C(v10, v11);
    FriendOperationItemListViewManager__SetMode_31318652(operationItemListViewManager, 4, v9, 0LL);
  }
}


void __fastcall FriendRootComponent__ChangeLimitCountBySpoilerProtection(
        FriendRootComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  ServantLeaderInfo_o *SpoilerSetting; // x0
  __int64 v6; // x1
  struct OtherUserGameEntity_o *selectFriendEntity; // x8
  struct ServantLeaderInfo_array *userSvtLeaderHash; // x20
  int max_length; // w8
  unsigned int v10; // w21
  struct OtherUserGameEntity_o *v11; // x8
  struct ServantLeaderInfo_array *eventUserSvtLeaderHash; // x19
  int v13; // w8
  unsigned int v14; // w20
  __int64 v15; // x0

  if ( (byte_42EB490 & 1) == 0 )
  {
    sub_B5D5C4(&OptionManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB490 = 1;
  }
  if ( this->fields.selectFriendEntity )
  {
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    SpoilerSetting = (ServantLeaderInfo_o *)OptionManager__GetSpoilerSetting(0LL);
    if ( ((unsigned __int8)SpoilerSetting & 1) == 0 )
    {
      selectFriendEntity = this->fields.selectFriendEntity;
      if ( !selectFriendEntity )
        goto LABEL_24;
      userSvtLeaderHash = selectFriendEntity->fields.userSvtLeaderHash;
      if ( !userSvtLeaderHash )
        goto LABEL_24;
      max_length = userSvtLeaderHash->max_length;
      if ( max_length >= 1 )
      {
        v10 = 0;
        while ( v10 < max_length )
        {
          SpoilerSetting = userSvtLeaderHash->m_Items[v10];
          if ( !SpoilerSetting )
            goto LABEL_24;
          ServantLeaderInfo__ChangeLimitCountBySpoilerProtection(SpoilerSetting, 0LL);
          max_length = userSvtLeaderHash->max_length;
          if ( (int)++v10 >= max_length )
            goto LABEL_15;
        }
LABEL_23:
        v15 = sub_B5D6C8(SpoilerSetting);
        sub_B5D668(v15, 0LL);
      }
LABEL_15:
      v11 = this->fields.selectFriendEntity;
      if ( !v11 || (eventUserSvtLeaderHash = v11->fields.eventUserSvtLeaderHash) == 0LL )
LABEL_24:
        sub_B5D69C(SpoilerSetting, v6);
      v13 = eventUserSvtLeaderHash->max_length;
      if ( v13 >= 1 )
      {
        v14 = 0;
        while ( v14 < v13 )
        {
          SpoilerSetting = eventUserSvtLeaderHash->m_Items[v14];
          if ( !SpoilerSetting )
            goto LABEL_24;
          ServantLeaderInfo__ChangeLimitCountBySpoilerProtection(SpoilerSetting, 0LL);
          v13 = eventUserSvtLeaderHash->max_length;
          if ( (int)++v14 >= v13 )
            return;
        }
        goto LABEL_23;
      }
    }
  }
}


void __fastcall FriendRootComponent__CheckHelpUI(FriendRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_String_o **v11; // x8
  System_String_o *v12; // x20
  UILabel_o *helpLabel; // x19
  System_String_o *v14; // x0
  __int64 v15; // x1

  if ( (byte_42EB462 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_6547/*"FRIEND_LOCK_HELP_TEXT"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_6545/*"FRIEND_HELP_TEXT"*/, v8, v9, v10);
    byte_42EB462 = 1;
  }
  v11 = (System_String_o **)&StringLiteral_6545/*"FRIEND_HELP_TEXT"*/;
  if ( this->fields.isActiveModeKindButtons && this->fields.currentModeKind == 1 )
    v11 = (System_String_o **)&StringLiteral_6547/*"FRIEND_LOCK_HELP_TEXT"*/;
  v12 = *v11;
  helpLabel = this->fields.helpLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v14 = LocalizationManager__Get(v12, 0LL);
  if ( !helpLabel )
    sub_B5D69C(v14, v15);
  UILabel__set_text(helpLabel, v14, 0LL);
}


void __fastcall FriendRootComponent__CheckModeKind(FriendRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
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
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  DataManager_o *Instance; // x0
  __int64 v24; // x1
  TblFriendMaster_o *MasterData_WarQuestSelectionMaster; // x20
  UserFollowMaster_o *v26; // x21
  int v27; // w21
  UICommonButton_o *modeUserDetailButton; // x20
  bool enabled; // w0
  UICommonButton_o *modeEditLockButton; // x20
  bool v31; // w0
  __int64 v32; // x8
  int32_t currentModeKind; // w8
  __int64 *v34; // x9
  System_String_o *v35; // x20
  System_String_o **v36; // x8

  if ( (byte_42EB497 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_TblFriendMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserFollowMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_17336/*"button_alllock_unreg"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_17342/*"button_infocheck_unreg"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_17341/*"button_infocheck_reg"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_17335/*"button_alllock_reg"*/, v20, v21, v22);
    byte_42EB497 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_WarQuestSelectionMaster = (TblFriendMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              Instance,
                                                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_TblFriendMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserFollowMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_30;
  v26 = (UserFollowMaster_o *)Instance;
  Instance = (DataManager_o *)TblFriendMaster__GetFriendSum(MasterData_WarQuestSelectionMaster, 0LL);
  if ( (int)Instance > 0 )
    goto LABEL_9;
  if ( !v26 )
    goto LABEL_30;
  if ( UserFollowMaster__GetFollowSum(v26, 0LL) <= 0 )
  {
    v27 = 1;
    this->fields.currentModeKind = 0;
  }
  else
  {
LABEL_9:
    v27 = 0;
  }
  Instance = (DataManager_o *)this->fields.modeUserDetailButton;
  if ( !Instance )
    goto LABEL_30;
  ((void (__fastcall *)(DataManager_o *, __int64, void *))Instance->klass[1]._1.namespaze)(
    Instance,
    1LL,
    Instance->klass[1]._1.byval_arg.data);
  Instance = (DataManager_o *)this->fields.modeEditLockButton;
  if ( !Instance )
    goto LABEL_30;
  ((void (__fastcall *)(DataManager_o *, __int64, void *))Instance->klass[1]._1.namespaze)(
    Instance,
    1LL,
    Instance->klass[1]._1.byval_arg.data);
  Instance = (DataManager_o *)this->fields.modeUserDetailButton;
  if ( !Instance )
    goto LABEL_30;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, this->fields.currentModeKind != 0, 0LL);
  Instance = (DataManager_o *)this->fields.modeEditLockButton;
  if ( !Instance )
    goto LABEL_30;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, this->fields.currentModeKind != 1, 0LL);
  modeUserDetailButton = this->fields.modeUserDetailButton;
  if ( !modeUserDetailButton )
    goto LABEL_30;
  enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.modeUserDetailButton, 0LL);
  UICommonButton__SetColliderEnable(modeUserDetailButton, enabled, 1, 0LL);
  modeEditLockButton = this->fields.modeEditLockButton;
  if ( !modeEditLockButton )
    goto LABEL_30;
  v31 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.modeEditLockButton, 0LL);
  UICommonButton__SetColliderEnable(modeEditLockButton, v31, 1, 0LL);
  if ( !v27 )
    goto LABEL_21;
  v32 = 224LL;
  if ( this->fields.currentModeKind )
    v32 = 216LL;
  Instance = *(DataManager_o **)((char *)&this->klass + v32);
  if ( !Instance )
LABEL_30:
    sub_B5D69C(Instance, v24);
  UICommonButton__SetButtonEnable((UICommonButton_o *)Instance, 0, 1, 0LL);
LABEL_21:
  currentModeKind = this->fields.currentModeKind;
  Instance = (DataManager_o *)this->fields.modeUserDetailSprite;
  v34 = &StringLiteral_17335/*"button_alllock_reg"*/;
  if ( currentModeKind != 1 )
    v34 = &StringLiteral_17336/*"button_alllock_unreg"*/;
  if ( !Instance )
    goto LABEL_30;
  v35 = (System_String_o *)*v34;
  v36 = (System_String_o **)(currentModeKind ? &StringLiteral_17342/*"button_infocheck_unreg"*/ : &StringLiteral_17341/*"button_infocheck_reg"*/);
  UISprite__set_spriteName((UISprite_o *)Instance, *v36, 0LL);
  Instance = (DataManager_o *)this->fields.modeEditLockSprite;
  if ( !Instance )
    goto LABEL_30;
  UISprite__set_spriteName((UISprite_o *)Instance, v35, 0LL);
}


bool __fastcall FriendRootComponent__CheckTabKind(FriendRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  FriendRootComponent_c *v11; // x0
  int32_t tabKindSave; // w8
  PlayMakerFSM_o *myFSM; // x0
  __int64 *v14; // x8

  if ( (byte_42EB466 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_8809/*"MENU_OPERATION_FRIEND"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_8811/*"MENU_OPERATION_OFFERED"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_8812/*"MENU_OPERATION_SEARCH"*/, v8, v9, v10);
    byte_42EB466 = 1;
  }
  if ( !byte_42EB562 )
  {
    sub_B5D5C4(&FriendRootComponent_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB562 = 1;
  }
  v11 = FriendRootComponent_TypeInfo;
  if ( (BYTE3(FriendRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FriendRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendRootComponent_TypeInfo);
    v11 = FriendRootComponent_TypeInfo;
  }
  tabKindSave = v11->static_fields->tabKindSave;
  switch ( tabKindSave )
  {
    case 2:
      myFSM = this->fields.myFSM;
      if ( myFSM )
      {
        v14 = &StringLiteral_8812/*"MENU_OPERATION_SEARCH"*/;
        goto LABEL_17;
      }
      goto LABEL_19;
    case 1:
      myFSM = this->fields.myFSM;
      if ( myFSM )
      {
        v14 = &StringLiteral_8811/*"MENU_OPERATION_OFFERED"*/;
        goto LABEL_17;
      }
LABEL_19:
      sub_B5D69C(myFSM, method);
    case 0:
      myFSM = this->fields.myFSM;
      if ( myFSM )
      {
        v14 = &StringLiteral_8809/*"MENU_OPERATION_FRIEND"*/;
LABEL_17:
        PlayMakerFSM__SendEvent(myFSM, (System_String_o *)*v14, 0LL);
        return 1;
      }
      goto LABEL_19;
  }
  return 1;
}


void __fastcall FriendRootComponent__EndCloseShowServant(FriendRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_42EB477 & 1) == 0 )
  {
    sub_B5D5C4(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_FriendRootComponent_OnSelectFriendItem__, v5, v6, v7);
    byte_42EB477 = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v9 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B5D694(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v9,
    (Il2CppObject *)this,
    (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
    0LL);
  if ( !operationItemListViewManager )
    sub_B5D69C(v10, v11);
  FriendOperationItemListViewManager__SetMode(operationItemListViewManager, 2, v9, 0LL);
}


void __fastcall FriendRootComponent__EndCloseShowServantEquip(FriendRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_42EB4A1 & 1) == 0 )
  {
    sub_B5D5C4(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_FriendRootComponent_OnSelectFriendItem__, v5, v6, v7);
    byte_42EB4A1 = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v9 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B5D694(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v9,
    (Il2CppObject *)this,
    (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
    0LL);
  if ( !operationItemListViewManager )
    sub_B5D69C(v10, v11);
  FriendOperationItemListViewManager__SetMode(operationItemListViewManager, 2, v9, 0LL);
}


void __fastcall FriendRootComponent__EndFriendRequest(
        FriendRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  FriendRootComponent_c *v8; // x0
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  TblFriendMaster_o *v11; // x20
  const MethodInfo *v12; // x2
  int32_t v13; // w1
  OtherUserGameEntity_array *List; // x21
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x1

  if ( (byte_42EB463 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_TblFriendMaster___, (_DWORD)result, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6, v7);
    byte_42EB463 = 1;
  }
  if ( !byte_42EB562 )
  {
    sub_B5D5C4(&FriendRootComponent_TypeInfo, (_DWORD)result, (_DWORD)method, v3);
    byte_42EB562 = 1;
  }
  v8 = FriendRootComponent_TypeInfo;
  if ( (BYTE3(FriendRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FriendRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendRootComponent_TypeInfo);
    v8 = FriendRootComponent_TypeInfo;
  }
  if ( v8->static_fields->tabKindSave == 3 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_TblFriendMaster___);
      if ( Instance )
      {
        v11 = (TblFriendMaster_o *)Instance;
        Instance = (DataManager_o *)TblFriendMaster__GetList((TblFriendMaster_o *)Instance, 2, 0LL);
        if ( Instance )
        {
          if ( Instance->fields.datalist )
          {
            v13 = 1;
LABEL_19:
            FriendRootComponent__set_tabKind((FriendRootComponent_o *)Instance, v13, v12);
            EventTutorialMaster__CheckTutorial(-1, 49, 0LL, 0, 0, 0, 0, 0LL);
            goto LABEL_20;
          }
          List = TblFriendMaster__GetList(v11, 3, 0LL);
          Instance = (DataManager_o *)TblFriendMaster__GetList(v11, 9, 0LL);
          if ( List )
          {
            if ( *(_QWORD *)&List->max_length )
            {
LABEL_18:
              v13 = 0;
              goto LABEL_19;
            }
            if ( Instance )
            {
              if ( !Instance->fields.datalist )
              {
                FriendRootComponent__set_tabKind((FriendRootComponent_o *)Instance, 2, v12);
                goto LABEL_20;
              }
              goto LABEL_18;
            }
          }
        }
      }
    }
    sub_B5D69C(Instance, v10);
  }
LABEL_20:
  FriendRootComponent__InitModeKindButtons(this, (const MethodInfo *)result);
  FriendRootComponent__RefreshTab(this, v15);
  FriendRootComponent__RefreshInfo(this, v16);
  MainMenuBar__setMenuActive(1, 0LL, 0LL);
  SceneRootComponent__beginStartUp_17513116((SceneRootComponent_o *)this, 0LL);
}


void __fastcall FriendRootComponent__EndFriendRequest2(
        FriendRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  __int64 v9; // x1
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  FriendOperationItemListViewManager_o *v11; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v12; // x21

  if ( (byte_42EB4B7 & 1) == 0 )
  {
    sub_B5D5C4(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, (_DWORD)result, (_DWORD)method, v3);
    sub_B5D5C4(&Method_FriendRootComponent_OnSelectFriendItem__, v5, v6, v7);
    byte_42EB4B7 = 1;
  }
  FriendRootComponent__RefreshInfo(this, (const MethodInfo *)result);
  classButtonControl = this->fields.classButtonControl;
  if ( !classButtonControl
    || (operationItemListViewManager = this->fields.operationItemListViewManager) == 0LL
    || (FriendOperationItemListViewManager__CreateList(
          operationItemListViewManager,
          3,
          classButtonControl->fields.currentCursor,
          0LL),
        v11 = this->fields.operationItemListViewManager,
        v12 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B5D694(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
        FriendOperationItemListViewManager_CallbackFunc___ctor(
          v12,
          (Il2CppObject *)this,
          (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
          0LL),
        !v11) )
  {
    sub_B5D69C(operationItemListViewManager, v9);
  }
  FriendOperationItemListViewManager__SetMode(v11, 2, v12, 0LL);
  this->fields.state = 4;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendRootComponent__EndMaxFollowWarningOfferConfirm(
        FriendRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_42EB4AF & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_8806/*"MENU_CANCEL"*/, isDecide, (_DWORD)method, v3);
    byte_42EB4AF = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_B5D69C(0LL, isDecide);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_8806/*"MENU_CANCEL"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendRootComponent__EndMaxFriendWarning(
        FriendRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  FriendWarningDialog_o *friendWarningDialog; // x0
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v10; // x21

  if ( (byte_42EB4A3 & 1) == 0 )
  {
    sub_B5D5C4(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&Method_FriendRootComponent_OnSelectFriendItem__, v5, v6, v7);
    byte_42EB4A3 = 1;
  }
  friendWarningDialog = this->fields.friendWarningDialog;
  if ( !friendWarningDialog
    || (FriendWarningDialog__Close_30319036(friendWarningDialog, 0LL, method),
        operationItemListViewManager = this->fields.operationItemListViewManager,
        v10 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B5D694(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
        FriendOperationItemListViewManager_CallbackFunc___ctor(
          v10,
          (Il2CppObject *)this,
          (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
          0LL),
        !operationItemListViewManager) )
  {
    sub_B5D69C(friendWarningDialog, isDecide);
  }
  FriendOperationItemListViewManager__SetMode(operationItemListViewManager, 2, v10, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendRootComponent__EndMaxFriendWarningOfferConfirm(
        FriendRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_42EB4A4 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_8806/*"MENU_CANCEL"*/, isDecide, (_DWORD)method, v3);
    byte_42EB4A4 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_B5D69C(0LL, isDecide);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_8806/*"MENU_CANCEL"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendRootComponent__EndNoSearchWarning(
        FriendRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  FriendWarningDialog_o *friendWarningDialog; // x0
  FriendSearchMenu_o *friendSearchMenu; // x20
  FriendSearchMenu_CallbackFunc_o *v13; // x21
  const MethodInfo *v14; // x3

  if ( (byte_42EB491 & 1) == 0 )
  {
    sub_B5D5C4(&FriendSearchMenu_CallbackFunc_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&Method_FriendRootComponent_OnSelectSearchFriend__, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_11210/*"REQUEST_NG"*/, v8, v9, v10);
    byte_42EB491 = 1;
  }
  friendWarningDialog = this->fields.friendWarningDialog;
  if ( !friendWarningDialog
    || (FriendWarningDialog__Close_30319036(friendWarningDialog, 0LL, method),
        this->fields.state = 23,
        friendSearchMenu = this->fields.friendSearchMenu,
        v13 = (FriendSearchMenu_CallbackFunc_o *)sub_B5D694(FriendSearchMenu_CallbackFunc_TypeInfo),
        FriendSearchMenu_CallbackFunc___ctor(
          v13,
          (Il2CppObject *)this,
          Method_FriendRootComponent_OnSelectSearchFriend__,
          0LL),
        !friendSearchMenu)
    || (FriendSearchMenu__Open(friendSearchMenu, v13, 0, v14),
        (friendWarningDialog = (FriendWarningDialog_o *)this->fields.myFSM) == 0LL) )
  {
    sub_B5D69C(friendWarningDialog, isDecide);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)friendWarningDialog, (System_String_o *)StringLiteral_11210/*"REQUEST_NG"*/, 0LL);
}


void __fastcall FriendRootComponent__EndRequestFollowAssign(
        FriendRootComponent_o *this,
        System_String_o *result,
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
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  __int64 v33; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *myFSM; // x0
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *v35; // x20
  System_String_o *v36; // x20
  __int64 *v37; // x8
  CommonUI_o *Instance; // x21
  NotificationDialog_ClickDelegate_o *v39; // x22

  if ( (byte_42EB4B2 & 1) == 0 )
  {
    sub_B5D5C4(&NotificationDialog_ClickDelegate_TypeInfo, (_DWORD)result, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v9, v10, v11);
    sub_B5D5C4(&Method_FriendRootComponent_OnEndRequestDialog__, v12, v13, v14);
    sub_B5D5C4(&JsonManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_11212/*"REQUEST_OK"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_11210/*"REQUEST_NG"*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_21345/*"ng"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_20733/*"message"*/, v30, v31, v32);
    byte_42EB4B2 = 1;
  }
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_21345/*"ng"*/, 0LL) )
  {
    myFSM = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.myFSM;
    if ( myFSM )
    {
      v37 = &StringLiteral_11210/*"REQUEST_NG"*/;
      goto LABEL_15;
    }
LABEL_18:
    sub_B5D69C(myFSM, v33);
  }
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  myFSM = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)JsonManager__getDictionary(
                                                                                          result,
                                                                                          0LL);
  if ( !myFSM )
    goto LABEL_18;
  v35 = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)myFSM;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          myFSM,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_20733/*"message"*/,
          (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_11;
  myFSM = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                          v35,
                                                                                          (System_Type_o *)StringLiteral_20733/*"message"*/,
                                                                                          (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !myFSM )
    goto LABEL_18;
  v36 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *, Il2CppMethodPointer))myFSM->klass->vtable._3_ToString.method)(
                             myFSM,
                             myFSM->klass->vtable._4_unknown.methodPtr);
  if ( System_String__IsNullOrEmpty(v36, 0LL) )
  {
LABEL_11:
    myFSM = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.myFSM;
    if ( myFSM )
    {
      v37 = &StringLiteral_11212/*"REQUEST_OK"*/;
LABEL_15:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myFSM, (System_String_o *)*v37, 0LL);
      return;
    }
    goto LABEL_18;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v39 = (NotificationDialog_ClickDelegate_o *)sub_B5D694(NotificationDialog_ClickDelegate_TypeInfo);
  NotificationDialog_ClickDelegate___ctor(
    v39,
    (Il2CppObject *)this,
    Method_FriendRootComponent_OnEndRequestDialog__,
    0LL);
  if ( !Instance )
    goto LABEL_18;
  CommonUI__OpenNotificationDialog_18204284(
    Instance,
    0LL,
    v36,
    v39,
    -1,
    0,
    0,
    0,
    0,
    1,
    0LL,
    0LL,
    0,
    0,
    0LL,
    1,
    0LL,
    0LL,
    0LL,
    0LL);
}


void __fastcall FriendRootComponent__EndRequestFollowRemove(
        FriendRootComponent_o *this,
        System_String_o *result,
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
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  __int64 v33; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *myFSM; // x0
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *v35; // x20
  System_String_o *v36; // x20
  __int64 *v37; // x8
  CommonUI_o *Instance; // x21
  NotificationDialog_ClickDelegate_o *v39; // x22

  if ( (byte_42EB4BB & 1) == 0 )
  {
    sub_B5D5C4(&NotificationDialog_ClickDelegate_TypeInfo, (_DWORD)result, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v9, v10, v11);
    sub_B5D5C4(&Method_FriendRootComponent_OnEndRequestDialog__, v12, v13, v14);
    sub_B5D5C4(&JsonManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_11212/*"REQUEST_OK"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_11210/*"REQUEST_NG"*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_21345/*"ng"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_20733/*"message"*/, v30, v31, v32);
    byte_42EB4BB = 1;
  }
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_21345/*"ng"*/, 0LL) )
  {
    myFSM = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.myFSM;
    if ( myFSM )
    {
      v37 = &StringLiteral_11210/*"REQUEST_NG"*/;
      goto LABEL_15;
    }
LABEL_18:
    sub_B5D69C(myFSM, v33);
  }
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  myFSM = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)JsonManager__getDictionary(
                                                                                          result,
                                                                                          0LL);
  if ( !myFSM )
    goto LABEL_18;
  v35 = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)myFSM;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          myFSM,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_20733/*"message"*/,
          (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_11;
  myFSM = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                          v35,
                                                                                          (System_Type_o *)StringLiteral_20733/*"message"*/,
                                                                                          (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !myFSM )
    goto LABEL_18;
  v36 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *, Il2CppMethodPointer))myFSM->klass->vtable._3_ToString.method)(
                             myFSM,
                             myFSM->klass->vtable._4_unknown.methodPtr);
  if ( System_String__IsNullOrEmpty(v36, 0LL) )
  {
LABEL_11:
    myFSM = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.myFSM;
    if ( myFSM )
    {
      v37 = &StringLiteral_11212/*"REQUEST_OK"*/;
LABEL_15:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myFSM, (System_String_o *)*v37, 0LL);
      return;
    }
    goto LABEL_18;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v39 = (NotificationDialog_ClickDelegate_o *)sub_B5D694(NotificationDialog_ClickDelegate_TypeInfo);
  NotificationDialog_ClickDelegate___ctor(
    v39,
    (Il2CppObject *)this,
    Method_FriendRootComponent_OnEndRequestDialog__,
    0LL);
  if ( !Instance )
    goto LABEL_18;
  CommonUI__OpenNotificationDialog_18204284(
    Instance,
    0LL,
    v36,
    v39,
    -1,
    0,
    0,
    0,
    0,
    1,
    0LL,
    0LL,
    0,
    0,
    0LL,
    1,
    0LL,
    0LL,
    0LL,
    0LL);
}


void __fastcall FriendRootComponent__EndRequestFriend(
        FriendRootComponent_o *this,
        System_String_o *result,
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
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  __int64 v33; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *myFSM; // x0
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *v35; // x20
  System_String_o *v36; // x20
  __int64 *v37; // x8
  CommonUI_o *Instance; // x21
  NotificationDialog_ClickDelegate_o *v39; // x22

  if ( (byte_42EB48C & 1) == 0 )
  {
    sub_B5D5C4(&NotificationDialog_ClickDelegate_TypeInfo, (_DWORD)result, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v9, v10, v11);
    sub_B5D5C4(&Method_FriendRootComponent_OnEndRequestDialog__, v12, v13, v14);
    sub_B5D5C4(&JsonManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_11212/*"REQUEST_OK"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_11210/*"REQUEST_NG"*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_21345/*"ng"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_20733/*"message"*/, v30, v31, v32);
    byte_42EB48C = 1;
  }
  MainMenuBar__UpdateNoticeNumber(0LL);
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_21345/*"ng"*/, 0LL) )
  {
    myFSM = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.myFSM;
    if ( myFSM )
    {
      v37 = &StringLiteral_11210/*"REQUEST_NG"*/;
      goto LABEL_15;
    }
LABEL_18:
    sub_B5D69C(myFSM, v33);
  }
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  myFSM = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)JsonManager__getDictionary(
                                                                                          result,
                                                                                          0LL);
  if ( !myFSM )
    goto LABEL_18;
  v35 = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)myFSM;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          myFSM,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_20733/*"message"*/,
          (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_11;
  myFSM = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                          v35,
                                                                                          (System_Type_o *)StringLiteral_20733/*"message"*/,
                                                                                          (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !myFSM )
    goto LABEL_18;
  v36 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *, Il2CppMethodPointer))myFSM->klass->vtable._3_ToString.method)(
                             myFSM,
                             myFSM->klass->vtable._4_unknown.methodPtr);
  if ( System_String__IsNullOrEmpty(v36, 0LL) )
  {
LABEL_11:
    myFSM = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.myFSM;
    if ( myFSM )
    {
      v37 = &StringLiteral_11212/*"REQUEST_OK"*/;
LABEL_15:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myFSM, (System_String_o *)*v37, 0LL);
      return;
    }
    goto LABEL_18;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v39 = (NotificationDialog_ClickDelegate_o *)sub_B5D694(NotificationDialog_ClickDelegate_TypeInfo);
  NotificationDialog_ClickDelegate___ctor(
    v39,
    (Il2CppObject *)this,
    Method_FriendRootComponent_OnEndRequestDialog__,
    0LL);
  if ( !Instance )
    goto LABEL_18;
  CommonUI__OpenNotificationDialog_18204284(
    Instance,
    0LL,
    v36,
    v39,
    -1,
    0,
    0,
    0,
    0,
    0,
    0LL,
    0LL,
    0,
    0,
    0LL,
    1,
    0LL,
    0LL,
    0LL,
    0LL);
}


void __fastcall FriendRootComponent__EndRequestFriendProfile(
        FriendRootComponent_o *this,
        System_String_o *result,
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
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  DataManager_o *Instance; // x0
  __int64 v25; // x1
  struct DataMasterBase_array *datalist; // x8
  struct OtherUserGameEntity_o *lookup; // x1
  const MethodInfo *v28; // x1
  __int64 *v29; // x8
  const MethodInfo *v30; // x1
  __int64 v31; // x0

  if ( (byte_42EB48F & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_OtherUserGameMaster___, (_DWORD)result, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_11212/*"REQUEST_OK"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_21497/*"ok"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_11210/*"REQUEST_NG"*/, v15, v16, v17);
    byte_42EB48F = 1;
  }
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_21497/*"ok"*/, 0LL) )
    goto LABEL_11;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_OtherUserGameMaster___);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)OtherUserGameMaster__GetFriendCodeList(
                                (OtherUserGameMaster_o *)Instance,
                                this->fields.selectFriendCode,
                                0LL);
  if ( !Instance )
    goto LABEL_14;
  datalist = Instance->fields.datalist;
  if ( !datalist )
  {
LABEL_11:
    this->fields.selectFriendEntity = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.selectFriendEntity, 0LL, v18, v19, v20, v21, v22, v23);
    FriendRootComponent__StartSearchInput(this, v30);
    Instance = (DataManager_o *)this->fields.myFSM;
    if ( Instance )
    {
      v29 = &StringLiteral_11210/*"REQUEST_NG"*/;
      goto LABEL_13;
    }
LABEL_14:
    sub_B5D69C(Instance, v25);
  }
  if ( !(_DWORD)datalist )
  {
    v31 = sub_B5D6C8(Instance);
    sub_B5D668(v31, 0LL);
  }
  lookup = (struct OtherUserGameEntity_o *)Instance->fields.lookup;
  this->fields.selectFriendEntity = lookup;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.selectFriendEntity,
    (System_Int32_array **)lookup,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  FriendRootComponent__ChangeLimitCountBySpoilerProtection(this, v28);
  Instance = (DataManager_o *)this->fields.myFSM;
  if ( !Instance )
    goto LABEL_14;
  v29 = &StringLiteral_11212/*"REQUEST_OK"*/;
LABEL_13:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v29, 0LL);
}


void __fastcall FriendRootComponent__EndShowServant(
        FriendRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v5; // w1
  int v6; // w2
  __int64 v7; // x3
  char v8; // w1
  int v9; // w2
  __int64 v10; // x3
  char v11; // w1
  int v12; // w2
  __int64 v13; // x3
  char v14; // w1
  int v15; // w2
  __int64 v16; // x3
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v18; // x21
  __int64 v19; // x0
  __int64 v20; // x1
  CommonUI_o *Instance; // x20
  System_Action_o *v22; // x21

  if ( (byte_42EB476 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_FriendRootComponent_EndCloseShowServant__, v8, v9, v10);
    sub_B5D5C4(&Method_FriendRootComponent_OnSelectFriendItem__, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14, v15, v16);
    byte_42EB476 = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v18 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B5D694(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v18,
    (Il2CppObject *)this,
    (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
    0LL);
  if ( !operationItemListViewManager
    || (FriendOperationItemListViewManager__SetMode(operationItemListViewManager, 5, v18, 0LL),
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v22 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo),
        System_Action___ctor(v22, (Il2CppObject *)this, Method_FriendRootComponent_EndCloseShowServant__, 0LL),
        !Instance) )
  {
    sub_B5D69C(v19, v20);
  }
  CommonUI__CloseServantStatusDialog(Instance, v22, 0LL);
}


void __fastcall FriendRootComponent__EndShowServantEquip(
        FriendRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v5; // w1
  int v6; // w2
  __int64 v7; // x3
  char v8; // w1
  int v9; // w2
  __int64 v10; // x3
  CommonUI_o *Instance; // x20
  System_Action_o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1

  if ( (byte_42EB4A0 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&Method_FriendRootComponent_EndCloseShowServantEquip__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    byte_42EB4A0 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_FriendRootComponent_EndCloseShowServantEquip__, 0LL);
  if ( !Instance )
    sub_B5D69C(v13, v14);
  CommonUI__CloseServantEquipStatusDialog(Instance, v12, 0LL);
}


void __fastcall FriendRootComponent__FriendLockRequst(
        FriendRootComponent_o *this,
        System_Action_string__o *onFinishedRequest,
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
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  __int64 v36; // x20
  ListViewManager_o *operationItemListViewManager; // x0
  int64_t items; // x1
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_Collections_Generic_List_long__o *v51; // x21
  System_Collections_Generic_List_long__o *v52; // x22
  System_Collections_Generic_List_long__o *v53; // x23
  System_Collections_Generic_List_long__o *v54; // x24
  int32_t ItemSum; // w0
  int32_t v56; // w25
  int dragParentObject; // w8
  ListViewManager_o *v58; // x26
  struct System_Collections_Generic_List_UIDragDropListViewSurface__o *dropList; // x8
  const MethodInfo_3047788 *v60; // x2
  System_Collections_Generic_List_long__o *v61; // x0
  struct System_Collections_Generic_List_UIDragDropListViewSurface__o *v62; // x8
  NetworkManager_ResultCallbackFunc_o *v63; // x19
  FirendLockSyncRequest_o *v64; // x19
  System_Int64_array *v65; // x20
  System_Int64_array *v66; // x21
  System_Int64_array *v67; // x22

  if ( (byte_42EB49D & 1) == 0 )
  {
    sub_B5D5C4(&Method_ActionExtensions_Call_string___, (_DWORD)onFinishedRequest, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__Add__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__ToArray__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long___ctor__, v12, v13, v14);
    sub_B5D5C4(&System_Collections_Generic_List_long__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_NetworkManager_getRequest_FirendLockSyncRequest___, v18, v19, v20);
    sub_B5D5C4(&NetworkManager_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_FriendRootComponent___c__DisplayClass109_0__FriendLockRequst_b__0__, v27, v28, v29);
    sub_B5D5C4(&FriendRootComponent___c__DisplayClass109_0_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_21497/*"ok"*/, v33, v34, v35);
    byte_42EB49D = 1;
  }
  v36 = sub_B5D694(FriendRootComponent___c__DisplayClass109_0_TypeInfo);
  FriendRootComponent___c__DisplayClass109_0___ctor((FriendRootComponent___c__DisplayClass109_0_o *)v36, 0LL);
  if ( !v36 )
    goto LABEL_37;
  *(_QWORD *)(v36 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v36 + 16), (System_Int32_array **)this, v39, v40, v41, v42, v43, v44);
  *(_QWORD *)(v36 + 32) = onFinishedRequest;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v36 + 32),
    (System_Int32_array **)onFinishedRequest,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
  operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    goto LABEL_37;
  if ( FriendOperationItemListViewManager__get_IsExistSwapLockUser(
         (FriendOperationItemListViewManager_o *)operationItemListViewManager,
         0LL) )
  {
    v51 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v51,
      (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
    v52 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v52,
      (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
    v53 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v53,
      (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
    v54 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v54,
      (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
    operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
    if ( operationItemListViewManager )
    {
      ItemSum = ListViewManager__get_ItemSum(operationItemListViewManager, 0LL);
      *(_DWORD *)(v36 + 24) = ItemSum;
      if ( ItemSum >= 1 )
      {
        v56 = 0;
        while ( 1 )
        {
          operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
          if ( !operationItemListViewManager )
            goto LABEL_37;
          operationItemListViewManager = (ListViewManager_o *)FriendOperationItemListViewManager__GetItem(
                                                                (FriendOperationItemListViewManager_o *)operationItemListViewManager,
                                                                v56,
                                                                0LL);
          if ( !operationItemListViewManager )
            goto LABEL_37;
          dragParentObject = (int)operationItemListViewManager->fields.dragParentObject;
          v58 = operationItemListViewManager;
          if ( dragParentObject == 9 )
            break;
          if ( dragParentObject == 3 )
          {
            operationItemListViewManager = (ListViewManager_o *)FriendOperationItemListViewItem__get_IsLockDisp(
                                                                  (FriendOperationItemListViewItem_o *)operationItemListViewManager,
                                                                  0LL);
            dropList = v58->fields.dropList;
            if ( !dropList )
              goto LABEL_37;
            items = (int64_t)dropList->fields._items;
            if ( ((unsigned __int8)operationItemListViewManager & 1) != 0 )
            {
              if ( !v51 )
                goto LABEL_37;
              v60 = (const MethodInfo_3047788 *)Method_System_Collections_Generic_List_long__Add__;
              v61 = v51;
            }
            else
            {
              if ( !v52 )
                goto LABEL_37;
              v60 = (const MethodInfo_3047788 *)Method_System_Collections_Generic_List_long__Add__;
              v61 = v52;
            }
LABEL_25:
            System_Collections_Generic_List_long___Add(v61, items, v60);
          }
          if ( ++v56 >= *(_DWORD *)(v36 + 24) )
            goto LABEL_27;
        }
        operationItemListViewManager = (ListViewManager_o *)FriendOperationItemListViewItem__get_IsLockDisp(
                                                              (FriendOperationItemListViewItem_o *)operationItemListViewManager,
                                                              0LL);
        v62 = v58->fields.dropList;
        if ( !v62 )
          goto LABEL_37;
        items = (int64_t)v62->fields._items;
        if ( ((unsigned __int8)operationItemListViewManager & 1) != 0 )
        {
          if ( !v53 )
            goto LABEL_37;
          v60 = (const MethodInfo_3047788 *)Method_System_Collections_Generic_List_long__Add__;
          v61 = v53;
        }
        else
        {
          if ( !v54 )
            goto LABEL_37;
          v60 = (const MethodInfo_3047788 *)Method_System_Collections_Generic_List_long__Add__;
          v61 = v54;
        }
        goto LABEL_25;
      }
LABEL_27:
      v63 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v63,
        (Il2CppObject *)v36,
        Method_FriendRootComponent___c__DisplayClass109_0__FriendLockRequst_b__0__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      operationItemListViewManager = (ListViewManager_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                            v63,
                                                            (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_FirendLockSyncRequest___);
      if ( v51 )
      {
        v64 = (FirendLockSyncRequest_o *)operationItemListViewManager;
        operationItemListViewManager = (ListViewManager_o *)System_Collections_Generic_List_long___ToArray(
                                                              v51,
                                                              (const MethodInfo_3049894 *)Method_System_Collections_Generic_List_long__ToArray__);
        if ( v52 )
        {
          v65 = (System_Int64_array *)operationItemListViewManager;
          operationItemListViewManager = (ListViewManager_o *)System_Collections_Generic_List_long___ToArray(
                                                                v52,
                                                                (const MethodInfo_3049894 *)Method_System_Collections_Generic_List_long__ToArray__);
          if ( v53 )
          {
            v66 = (System_Int64_array *)operationItemListViewManager;
            operationItemListViewManager = (ListViewManager_o *)System_Collections_Generic_List_long___ToArray(
                                                                  v53,
                                                                  (const MethodInfo_3049894 *)Method_System_Collections_Generic_List_long__ToArray__);
            if ( v54 )
            {
              v67 = (System_Int64_array *)operationItemListViewManager;
              operationItemListViewManager = (ListViewManager_o *)System_Collections_Generic_List_long___ToArray(
                                                                    v54,
                                                                    (const MethodInfo_3049894 *)Method_System_Collections_Generic_List_long__ToArray__);
              if ( v64 )
              {
                FirendLockSyncRequest__beginRequest(
                  v64,
                  v65,
                  v66,
                  v67,
                  (System_Int64_array *)operationItemListViewManager,
                  0LL);
                return;
              }
            }
          }
        }
      }
    }
LABEL_37:
    sub_B5D69C(operationItemListViewManager, items);
  }
  ActionExtensions__Call_BlankEarth_QAARotateEarthResponse_(
    *(System_Action_T__o **)(v36 + 32),
    (BlankEarth_QAARotateEarthResponse_o *)StringLiteral_21497/*"ok"*/,
    (const MethodInfo_2CECD58 *)Method_ActionExtensions_Call_string___);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall FriendRootComponent__GetDisplayPositionModeKindButtons(
        FriendRootComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  FriendRootComponent_o *v4; // x19
  struct UISprite_o *modeEditLockSprite; // x8
  int mWidth; // w20
  float v7; // s1
  float v8; // s8
  float z; // s9
  float v10; // s10
  float v11; // s1
  float v12; // s2
  float v13; // s0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_42EB498 & 1) == 0 )
  {
    this = (FriendRootComponent_o *)sub_B5D5C4(&FSUtility_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB498 = 1;
  }
  modeEditLockSprite = v4->fields.modeEditLockSprite;
  if ( !modeEditLockSprite
    || (this = (FriendRootComponent_o *)v4->fields.modeButtonParent) == 0LL
    || (mWidth = modeEditLockSprite->fields.mWidth,
        (this = (FriendRootComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)(&v7 - 1) = UnityEngine_Transform__get_localPosition(
                                                (UnityEngine_Transform_o *)this,
                                                0LL),
        (this = (FriendRootComponent_o *)v4->fields.modeButtonParent) == 0LL)
    || (v8 = v7,
        (this = (FriendRootComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL)) == 0LL) )
  {
    sub_B5D69C(this, method);
  }
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  z = localPosition.fields.z;
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  v10 = (float)mWidth;
  if ( !FSUtility__IsUnderVista(0LL) )
  {
    if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    v10 = v10 - FSUtility__GetOffsetX(74.0, 1, 0LL);
  }
  v11 = v8;
  v12 = z;
  v13 = v10;
  result.fields.z = v12;
  result.fields.y = v11;
  result.fields.x = v13;
  return result;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall FriendRootComponent__GetHidePositionModeKindButtons(
        FriendRootComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *modeButtonParent; // x0
  float v4; // s1
  float v5; // s8
  float v6; // s2
  float v7; // s0
  float v8; // s1
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  modeButtonParent = this->fields.modeButtonParent;
  if ( !modeButtonParent
    || (modeButtonParent = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(modeButtonParent, 0LL)) == 0LL
    || (*(UnityEngine_Vector3_o *)(&v4 - 1) = UnityEngine_Transform__get_localPosition(
                                                (UnityEngine_Transform_o *)modeButtonParent,
                                                0LL),
        (modeButtonParent = this->fields.modeButtonParent) == 0LL)
    || (v5 = v4,
        (modeButtonParent = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(modeButtonParent, 0LL)) == 0LL) )
  {
    sub_B5D69C(modeButtonParent, method);
  }
  *(UnityEngine_Vector3_o *)(&v6 - 2) = UnityEngine_Transform__get_localPosition(
                                          (UnityEngine_Transform_o *)modeButtonParent,
                                          0LL);
  v7 = -200.0;
  v8 = v5;
  result.fields.z = v6;
  result.fields.y = v8;
  result.fields.x = v7;
  return result;
}


void __fastcall FriendRootComponent__Init(FriendRootComponent_o *this, const MethodInfo *method)
{
  if ( !this->fields.state )
    this->fields.state = 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendRootComponent__InitModeKindButtons(FriendRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *modeButtonParent; // x0
  const MethodInfo *v4; // x1
  int v5; // w2
  __int64 v6; // x3
  UnityEngine_Transform_o *transform; // x19
  FriendRootComponent_c *v8; // x0
  int v9; // s0

  modeButtonParent = this->fields.modeButtonParent;
  if ( !modeButtonParent )
    goto LABEL_11;
  transform = UnityEngine_GameObject__get_transform(modeButtonParent, 0LL);
  if ( !byte_42EB562 )
  {
    sub_B5D5C4(&FriendRootComponent_TypeInfo, (_DWORD)v4, v5, v6);
    byte_42EB562 = 1;
  }
  v8 = FriendRootComponent_TypeInfo;
  if ( (BYTE3(FriendRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FriendRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendRootComponent_TypeInfo);
    v8 = FriendRootComponent_TypeInfo;
  }
  if ( !v8->static_fields->tabKindSave )
  {
    *(UnityEngine_Vector3_o *)&v9 = FriendRootComponent__GetDisplayPositionModeKindButtons(this, v4);
    if ( transform )
      goto LABEL_9;
LABEL_11:
    sub_B5D69C(modeButtonParent, method);
  }
  *(UnityEngine_Vector3_o *)&v9 = FriendRootComponent__GetHidePositionModeKindButtons(this, v4);
  if ( !transform )
    goto LABEL_11;
LABEL_9:
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v9, 0LL);
}


void __fastcall FriendRootComponent__OnClickBack(FriendRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int32_t state; // w8
  FriendRootComponent_messageRequestCallback_o *v12; // x20
  const MethodInfo *v13; // x2

  if ( (byte_42EB493 & 1) == 0 )
  {
    sub_B5D5C4(&Method_FriendRootComponent__OnClickBack_b__96_0__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&FriendRootComponent_messageRequestCallback_TypeInfo, v8, v9, v10);
    byte_42EB493 = 1;
  }
  state = this->fields.state;
  if ( state <= 9 )
  {
    if ( state != 4 && state != 9 )
      return;
  }
  else if ( (unsigned int)state > 0x17 || ((1 << state) & 0x884000) == 0 )
  {
    return;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  v12 = (FriendRootComponent_messageRequestCallback_o *)sub_B5D694(FriendRootComponent_messageRequestCallback_TypeInfo);
  FriendRootComponent_messageRequestCallback___ctor(
    v12,
    (Il2CppObject *)this,
    Method_FriendRootComponent__OnClickBack_b__96_0__,
    0LL);
  FriendRootComponent__messageDispChangeRequest(this, v12, v13);
}


void __fastcall FriendRootComponent__OnClickHelp(FriendRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EB4BC & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB4BC = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  EventTutorialMaster__ShowTutorialWithoutCheck(-1, 49, 0LL, 0LL);
}


void __fastcall FriendRootComponent__OnClickModeEditLock(FriendRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x1

  if ( (byte_42EB496 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB496 = 1;
  }
  if ( this->fields.currentModeKind != 1 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    this->fields.currentModeKind = 1;
    FriendRootComponent__RefreshInfo(this, v5);
  }
}


void __fastcall FriendRootComponent__OnClickModeUserDetail(FriendRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v11; // x20
  const MethodInfo *v12; // x2

  if ( (byte_42EB495 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_string___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_string__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_FriendRootComponent__OnClickModeUserDetail_b__98_0__, v8, v9, v10);
    byte_42EB495 = 1;
  }
  if ( this->fields.currentModeKind )
  {
    v11 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_string__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v11,
      (Il2CppObject *)this,
      Method_FriendRootComponent__OnClickModeUserDetail_b__98_0__,
      (const MethodInfo_258B320 *)Method_System_Action_string___ctor__);
    FriendRootComponent__FriendLockRequst(this, (System_Action_string__o *)v11, v12);
  }
}


void __fastcall FriendRootComponent__OnClickTabFriend(FriendRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v11; // x20
  const MethodInfo *v12; // x2

  if ( (byte_42EB499 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_string___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_string__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_FriendRootComponent__OnClickTabFriend_b__105_0__, v8, v9, v10);
    byte_42EB499 = 1;
  }
  v11 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_string__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v11,
    (Il2CppObject *)this,
    Method_FriendRootComponent__OnClickTabFriend_b__105_0__,
    (const MethodInfo_258B320 *)Method_System_Action_string___ctor__);
  FriendRootComponent__FriendLockRequst(this, (System_Action_string__o *)v11, v12);
}


void __fastcall FriendRootComponent__OnClickTabOffered(FriendRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  FriendRootComponent_messageRequestCallback_o *v8; // x20
  const MethodInfo *v9; // x2

  if ( (byte_42EB49A & 1) == 0 )
  {
    sub_B5D5C4(&Method_FriendRootComponent__OnClickTabOffered_b__106_0__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&FriendRootComponent_messageRequestCallback_TypeInfo, v5, v6, v7);
    byte_42EB49A = 1;
  }
  v8 = (FriendRootComponent_messageRequestCallback_o *)sub_B5D694(FriendRootComponent_messageRequestCallback_TypeInfo);
  FriendRootComponent_messageRequestCallback___ctor(
    v8,
    (Il2CppObject *)this,
    Method_FriendRootComponent__OnClickTabOffered_b__106_0__,
    0LL);
  FriendRootComponent__messageDispChangeRequest(this, v8, v9);
}


void __fastcall FriendRootComponent__OnClickTabSearch(FriendRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  FriendRootComponent_messageRequestCallback_o *v8; // x20
  const MethodInfo *v9; // x2

  if ( (byte_42EB49B & 1) == 0 )
  {
    sub_B5D5C4(&Method_FriendRootComponent__OnClickTabSearch_b__107_0__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&FriendRootComponent_messageRequestCallback_TypeInfo, v5, v6, v7);
    byte_42EB49B = 1;
  }
  v8 = (FriendRootComponent_messageRequestCallback_o *)sub_B5D694(FriendRootComponent_messageRequestCallback_TypeInfo);
  FriendRootComponent_messageRequestCallback___ctor(
    v8,
    (Il2CppObject *)this,
    Method_FriendRootComponent__OnClickTabSearch_b__107_0__,
    0LL);
  FriendRootComponent__messageDispChangeRequest(this, v8, v9);
}


void __fastcall FriendRootComponent__OnEndRequestDialog(
        FriendRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v5; // w1
  int v6; // w2
  __int64 v7; // x3
  CommonUI_o *Instance; // x0
  __int64 v9; // x1

  if ( (byte_42EB48D & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_11212/*"REQUEST_OK"*/, v5, v6, v7);
    byte_42EB48D = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.myFSM) == 0LL) )
  {
    sub_B5D69C(Instance, v9);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_11212/*"REQUEST_OK"*/, 0LL);
}


void __fastcall FriendRootComponent__OnMoveEnd(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  FriendRootComponent_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  UnityEngine_GameObject_o *operationItemListViewManager; // x0
  int32_t v18; // w1
  const MethodInfo *v19; // x1
  FriendOperationItemListViewManager_o *v20; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v21; // x21
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  FriendOperationItemListViewManager_o *v23; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v24; // x21
  FriendSearchMenu_o *friendSearchMenu; // x20
  FriendSearchMenu_CallbackFunc_o *v26; // x21
  const MethodInfo *v27; // x3
  FriendOperationItemListViewManager_o *v28; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v29; // x21
  const MethodInfo *v30; // x1
  const MethodInfo *v31; // x1
  struct ClassButtonControlComponent_o *v32; // x8
  FriendSearchMenu_o *v33; // x20
  FriendSearchMenu_CallbackFunc_o *v34; // x21
  const MethodInfo *v35; // x3

  v4 = this;
  if ( (byte_42EB492 & 1) == 0 )
  {
    sub_B5D5C4(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&FriendSearchMenu_CallbackFunc_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_FriendRootComponent_OnSelectFriendItem__, v8, v9, v10);
    sub_B5D5C4(&Method_FriendRootComponent_OnSelectSearchFriend__, v11, v12, v13);
    this = (FriendRootComponent_o *)sub_B5D5C4(&StringLiteral_5553/*"END_ACTION"*/, v14, v15, v16);
    byte_42EB492 = 1;
  }
  switch ( v4->fields.state )
  {
    case 2:
    case 3:
      v18 = 0;
      v4->fields.state = 4;
      goto LABEL_10;
    case 5:
    case 6:
    case 0xA:
    case 0xB:
    case 0xF:
    case 0x10:
      operationItemListViewManager = (UnityEngine_GameObject_o *)v4->fields.operationItemListViewManager;
      v4->fields.state = 1;
      if ( !operationItemListViewManager )
        goto LABEL_30;
      FriendOperationItemListViewManager__DestroyList(
        (FriendOperationItemListViewManager_o *)operationItemListViewManager,
        0LL);
      operationItemListViewManager = (UnityEngine_GameObject_o *)v4->fields.operationItemListViewManager;
      if ( !operationItemListViewManager )
        goto LABEL_30;
      operationItemListViewManager = UnityEngine_Component__get_gameObject(
                                       (UnityEngine_Component_o *)operationItemListViewManager,
                                       0LL);
      if ( !operationItemListViewManager )
        goto LABEL_30;
      UnityEngine_GameObject__SetActive(operationItemListViewManager, 0, 0LL);
      goto LABEL_21;
    case 7:
    case 8:
      v4->fields.state = 9;
      v23 = v4->fields.operationItemListViewManager;
      v24 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B5D694(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
      FriendOperationItemListViewManager_CallbackFunc___ctor(
        v24,
        (Il2CppObject *)v4,
        (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
        0LL);
      if ( !v23 )
        goto LABEL_30;
      FriendOperationItemListViewManager__SetMode(v23, 2, v24, 0LL);
      goto LABEL_21;
    case 0xC:
    case 0xD:
      v4->fields.state = 14;
      v18 = 1;
LABEL_10:
      FriendRootComponent__set_tabKind(this, v18, v2);
      FriendRootComponent__RefreshTab(v4, v19);
      v20 = v4->fields.operationItemListViewManager;
      v21 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B5D694(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
      FriendOperationItemListViewManager_CallbackFunc___ctor(
        v21,
        (Il2CppObject *)v4,
        (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
        0LL);
      if ( !v20 )
        goto LABEL_30;
      FriendOperationItemListViewManager__SetMode(v20, 2, v21, 0LL);
      classButtonControl = v4->fields.classButtonControl;
      if ( !classButtonControl )
        goto LABEL_30;
      classButtonControl->fields.updateEnable = 1;
LABEL_21:
      FriendRootComponent__RefreshInfo(v4, method);
      break;
    case 0x11:
      v4->fields.state = 18;
      return;
    case 0x12:
      v4->fields.state = 19;
      v28 = v4->fields.operationItemListViewManager;
      v29 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B5D694(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
      FriendOperationItemListViewManager_CallbackFunc___ctor(
        v29,
        (Il2CppObject *)v4,
        (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
        0LL);
      if ( !v28 )
        goto LABEL_30;
      FriendOperationItemListViewManager__SetMode(v28, 2, v29, 0LL);
      break;
    case 0x14:
    case 0x15:
      v4->fields.state = 23;
      friendSearchMenu = v4->fields.friendSearchMenu;
      v26 = (FriendSearchMenu_CallbackFunc_o *)sub_B5D694(FriendSearchMenu_CallbackFunc_TypeInfo);
      FriendSearchMenu_CallbackFunc___ctor(
        v26,
        (Il2CppObject *)v4,
        Method_FriendRootComponent_OnSelectSearchFriend__,
        0LL);
      if ( !friendSearchMenu )
        goto LABEL_30;
      FriendSearchMenu__Open(friendSearchMenu, v26, 0, v27);
      operationItemListViewManager = (UnityEngine_GameObject_o *)v4->fields.operationItemListViewManager;
      if ( !operationItemListViewManager )
        goto LABEL_30;
      FriendOperationItemListViewManager__DestroyList(
        (FriendOperationItemListViewManager_o *)operationItemListViewManager,
        0LL);
      operationItemListViewManager = (UnityEngine_GameObject_o *)v4->fields.operationItemListViewManager;
      if ( !operationItemListViewManager )
        goto LABEL_30;
      operationItemListViewManager = UnityEngine_Component__get_gameObject(
                                       (UnityEngine_Component_o *)operationItemListViewManager,
                                       0LL);
      if ( !operationItemListViewManager )
        goto LABEL_30;
      UnityEngine_GameObject__SetActive(operationItemListViewManager, 0, 0LL);
      break;
    case 0x16:
      v4->fields.state = 23;
      FriendRootComponent__set_tabKind(this, 2, v2);
      FriendRootComponent__RefreshTab(v4, v30);
      FriendRootComponent__RefreshInfo(v4, v31);
      v32 = v4->fields.classButtonControl;
      if ( !v32 )
        goto LABEL_30;
      v32->fields.updateEnable = 1;
      v33 = v4->fields.friendSearchMenu;
      v34 = (FriendSearchMenu_CallbackFunc_o *)sub_B5D694(FriendSearchMenu_CallbackFunc_TypeInfo);
      FriendSearchMenu_CallbackFunc___ctor(
        v34,
        (Il2CppObject *)v4,
        Method_FriendRootComponent_OnSelectSearchFriend__,
        0LL);
      if ( !v33 )
        goto LABEL_30;
      FriendSearchMenu__Open(v33, v34, 1, v35);
      break;
    case 0x18:
    case 0x19:
      v4->fields.state = 1;
      goto LABEL_21;
    default:
      return;
  }
  operationItemListViewManager = (UnityEngine_GameObject_o *)v4->fields.myFSM;
  if ( !operationItemListViewManager )
LABEL_30:
    sub_B5D69C(operationItemListViewManager, method);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)operationItemListViewManager, (System_String_o *)StringLiteral_5553/*"END_ACTION"*/, 0LL);
}


void __fastcall FriendRootComponent__OnSelectFriendItem(
        FriendRootComponent_o *this,
        int32_t kind,
        int32_t n,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  int v52; // w1
  int v53; // w2
  __int64 v54; // x3
  int v55; // w1
  int v56; // w2
  __int64 v57; // x3
  int v58; // w1
  int v59; // w2
  __int64 v60; // x3
  int v61; // w1
  int v62; // w2
  __int64 v63; // x3
  int v64; // w1
  int v65; // w2
  __int64 v66; // x3
  int v67; // w1
  int v68; // w2
  __int64 v69; // x3
  int v70; // w1
  int v71; // w2
  __int64 v72; // x3
  int v73; // w1
  int v74; // w2
  __int64 v75; // x3
  int v76; // w1
  int v77; // w2
  __int64 v78; // x3
  int v79; // w1
  int v80; // w2
  __int64 v81; // x3
  UserGameEntity_o *SelfUserGame; // x21
  DataManager_o *Instance; // x0
  __int64 v84; // x1
  int v85; // w2
  __int64 v86; // x3
  TblFriendMaster_o *MasterData_WarQuestSelectionMaster; // x22
  __int64 v88; // x8
  __int64 v89; // x20
  SkillInfo_o *v90; // x22
  _QWORD *v91; // x0
  System_Reflection_MethodBase_o *v92; // x0
  System_String_o *v93; // x20
  System_String_o *v94; // x21
  Il2CppObject *v95; // x0
  System_String_o *v96; // x0
  System_String_o *v97; // x1
  System_String_o *v98; // x3
  System_String_o *v99; // x2
  _QWORD *v100; // x0
  System_Reflection_MethodBase_o *v101; // x0
  FriendOperationItemListViewItem_o *v102; // x21
  __int64 v103; // x8
  __int64 v104; // x20
  SkillInfo_o *v105; // x24
  SkillEntity_o *Entity; // x21
  DataManager_o *v107; // x20
  System_String_o *v108; // x21
  System_String_o *v109; // x22
  Il2CppObject *v110; // x0
  System_String_o *v111; // x0
  System_String_o *v112; // x21
  Il2CppObject *v113; // x0
  System_String_o *v114; // x20
  __int64 *v115; // x8
  DataManager_o *v116; // x8
  FriendRootComponent_c *v117; // x0
  DataManager_o *v118; // x8
  __int64 v119; // x9
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  const MethodInfo *v121; // x2
  FriendOperationItemListViewItem_o *v122; // x20
  ServantLeaderInfo_o *ServantLeader; // x0
  EquipTargetInfo_o *EquipTargetInfo; // x0
  EquipTargetInfo_o *v125; // x21
  __int64 v126; // x22
  __int64 v127; // x23
  const MethodInfo *v128; // x3
  int32_t v129; // w2
  FriendWarningDialog_o *friendWarningDialog; // x20
  FriendWarningDialog_CallbackFunc_o *v131; // x21
  const MethodInfo *v132; // x3
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v134; // x21
  FriendOperationItemListViewItem_o *Item; // x0
  FriendOperationItemListViewItem_o *v136; // x20
  __int64 v137; // x0
  int datalist; // [xsp+8h] [xbp-68h] BYREF
  int32_t lv; // [xsp+Ch] [xbp-64h] BYREF
  System_String_o *detail; // [xsp+10h] [xbp-60h] BYREF
  System_String_o *name; // [xsp+18h] [xbp-58h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+20h] [xbp-50h] BYREF
  System_String_o *v143; // [xsp+28h] [xbp-48h] BYREF
  System_String_o *v144; // [xsp+30h] [xbp-40h] BYREF
  SkillInfo_array *v145; // [xsp+38h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v146; // 0:x0.16

  if ( (byte_42EB4A2 & 1) == 0 )
  {
    sub_B5D5C4(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, kind, n, method);
    sub_B5D5C4(&FriendWarningDialog_CallbackFunc_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillLvMaster___, v10, v11, v12);
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillMaster___, v13, v14, v15);
    sub_B5D5C4(&Method_DataManager_GetMasterData_TblFriendMaster___, v16, v17, v18);
    sub_B5D5C4(&Method_DataManager_GetMaster_SkillMaster___, v19, v20, v21);
    sub_B5D5C4(&DataManager_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v25, v26, v27);
    sub_B5D5C4(&Method_FriendRootComponent_EndMaxFriendWarning__, v28, v29, v30);
    sub_B5D5C4(&Method_FriendRootComponent_OnSelectFriendItem__, v31, v32, v33);
    sub_B5D5C4(&int_TypeInfo, v34, v35, v36);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v37, v38, v39);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v40, v41, v42);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v43, v44, v45);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v46, v47, v48);
    sub_B5D5C4(&SoundManager_TypeInfo, v49, v50, v51);
    sub_B5D5C4(&StringLiteral_8820/*"MENU_SELECT_ITEM_ACCEPT"*/, v52, v53, v54);
    sub_B5D5C4(&StringLiteral_81/*" "*/, v55, v56, v57);
    sub_B5D5C4(&StringLiteral_8826/*"MENU_SELECT_ITEM_REMOVE_FOLLOW"*/, v58, v59, v60);
    sub_B5D5C4(&StringLiteral_8821/*"MENU_SELECT_ITEM_CANCEL"*/, v61, v62, v63);
    sub_B5D5C4(&StringLiteral_8719/*"MASTER_EQSKILL_LV_TXT"*/, v64, v65, v66);
    sub_B5D5C4(&StringLiteral_8823/*"MENU_SELECT_ITEM_OFFER"*/, v67, v68, v69);
    sub_B5D5C4(&StringLiteral_2572/*"BATTLE_SKILLCHARGETURN"*/, v70, v71, v72);
    sub_B5D5C4(&StringLiteral_8824/*"MENU_SELECT_ITEM_REJECT"*/, v73, v74, v75);
    sub_B5D5C4(&StringLiteral_1/*""*/, v76, v77, v78);
    sub_B5D5C4(&StringLiteral_8825/*"MENU_SELECT_ITEM_REMOVE"*/, v79, v80, v81);
    byte_42EB4A2 = 1;
  }
  v144 = 0LL;
  v145 = 0LL;
  skillInfoList = 0LL;
  v143 = 0LL;
  detail = 0LL;
  name = 0LL;
  this->fields.selectItemNum = n;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_151;
  MasterData_WarQuestSelectionMaster = (TblFriendMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              Instance,
                                                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_TblFriendMaster___);
  switch ( kind )
  {
    case 1:
    case 2:
    case 3:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      Instance = (DataManager_o *)this->fields.operationItemListViewManager;
      if ( !Instance )
        goto LABEL_151;
      Instance = (DataManager_o *)FriendOperationItemListViewManager__GetItem(
                                    (FriendOperationItemListViewManager_o *)Instance,
                                    this->fields.selectItemNum,
                                    0LL);
      if ( !Instance )
        goto LABEL_151;
      v102 = (FriendOperationItemListViewItem_o *)Instance;
      Instance = *(DataManager_o **)&Instance->fields.writeMasterDataThreadEnd;
      if ( !Instance )
        goto LABEL_151;
      v103 = *(_QWORD *)&Instance->fields.nowLoadCount;
      if ( !v103 )
        goto LABEL_151;
      if ( !*(_DWORD *)(v103 + 24) )
        goto LABEL_152;
      if ( !OtherUserGameEntity__getServantLeaderInfo(
              (OtherUserGameEntity_o *)Instance,
              v102->fields.classPos,
              0,
              0,
              *(_DWORD *)(v103 + 32),
              0LL) )
        goto LABEL_140;
      if ( kind == 2 )
        v104 = 1LL;
      else
        v104 = 2LL * (kind == 3);
      Instance = (DataManager_o *)FriendOperationItemListViewItem__GetSkillInfo(v102, &v145, 0LL);
      if ( !v145 )
        goto LABEL_151;
      if ( (unsigned int)v104 >= v145->max_length )
        goto LABEL_152;
      v105 = v145->m_Items[v104];
      if ( !v105 || v105->fields.id < 1 || v105->fields.lv < 1 )
        goto LABEL_140;
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_151;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillMaster___);
      if ( !Instance )
        goto LABEL_151;
      Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                  v105->fields.id,
                                  (const MethodInfo_23FAE10 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_151;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillLvMaster___);
      if ( !Instance )
        goto LABEL_151;
      Instance = (DataManager_o *)SkillLvMaster__GetEntity(
                                    (SkillLvMaster_o *)Instance,
                                    v105->fields.id,
                                    v105->fields.lv,
                                    0LL);
      if ( !Entity )
        goto LABEL_151;
      v107 = Instance;
      SkillEntity__getSkillMessageInfo(Entity, &v144, &v143, v105->fields.lv, 0LL);
      v108 = v144;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v109 = LocalizationManager__Get((System_String_o *)StringLiteral_8719/*"MASTER_EQSKILL_LV_TXT"*/, 0LL);
      lv = v105->fields.lv;
      v110 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv);
      v111 = System_String__Format(v109, v110, 0LL);
      v144 = System_String__Concat_44580072(v108, (System_String_o *)StringLiteral_81/*" "*/, v111, 0LL);
      Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2572/*"BATTLE_SKILLCHARGETURN"*/, 0LL);
      if ( !v107 )
        goto LABEL_151;
      v112 = (System_String_o *)Instance;
      datalist = (int)v107->fields.datalist;
      v113 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &datalist);
      v114 = System_String__Format(v112, v113, 0LL);
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !Instance )
        goto LABEL_151;
      v98 = v143;
      v97 = v144;
      v99 = v114;
      goto LABEL_58;
    case 4:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_151;
      Instance = (DataManager_o *)TblFriendMaster__GetList(MasterData_WarQuestSelectionMaster, 3, 0LL);
      if ( !Instance || !SelfUserGame )
        goto LABEL_151;
      if ( SelfUserGame->fields.friendKeep <= SLODWORD(Instance->fields.datalist) )
        goto LABEL_134;
      Instance = (DataManager_o *)this->fields.myFSM;
      if ( !Instance )
        goto LABEL_151;
      v115 = &StringLiteral_8823/*"MENU_SELECT_ITEM_OFFER"*/;
      goto LABEL_143;
    case 5:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_151;
      Instance = (DataManager_o *)TblFriendMaster__GetList(MasterData_WarQuestSelectionMaster, 3, 0LL);
      if ( !Instance || !SelfUserGame )
        goto LABEL_151;
      if ( SelfUserGame->fields.friendKeep <= SLODWORD(Instance->fields.datalist) )
      {
LABEL_134:
        friendWarningDialog = this->fields.friendWarningDialog;
        v131 = (FriendWarningDialog_CallbackFunc_o *)sub_B5D694(FriendWarningDialog_CallbackFunc_TypeInfo);
        FriendWarningDialog_CallbackFunc___ctor(
          v131,
          (Il2CppObject *)this,
          Method_FriendRootComponent_EndMaxFriendWarning__,
          0LL);
        if ( friendWarningDialog )
        {
          FriendWarningDialog__Open(friendWarningDialog, 1, v131, v132);
          return;
        }
LABEL_151:
        sub_B5D69C(Instance, v84);
      }
      Instance = (DataManager_o *)this->fields.myFSM;
      if ( !Instance )
        goto LABEL_151;
      v115 = &StringLiteral_8820/*"MENU_SELECT_ITEM_ACCEPT"*/;
LABEL_143:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v115, 0LL);
      return;
    case 6:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      Instance = (DataManager_o *)this->fields.myFSM;
      if ( !Instance )
        goto LABEL_151;
      v115 = &StringLiteral_8824/*"MENU_SELECT_ITEM_REJECT"*/;
      goto LABEL_143;
    case 7:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      Instance = (DataManager_o *)this->fields.myFSM;
      if ( !Instance )
        goto LABEL_151;
      v115 = &StringLiteral_8821/*"MENU_SELECT_ITEM_CANCEL"*/;
      goto LABEL_143;
    case 8:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      Instance = (DataManager_o *)this->fields.operationItemListViewManager;
      if ( !Instance )
        goto LABEL_151;
      Instance = (DataManager_o *)FriendOperationItemListViewManager__GetItem(
                                    (FriendOperationItemListViewManager_o *)Instance,
                                    this->fields.selectItemNum,
                                    0LL);
      if ( !Instance )
        goto LABEL_151;
      v116 = Instance;
      Instance = (DataManager_o *)this->fields.myFSM;
      if ( !Instance )
        goto LABEL_151;
      if ( LODWORD(v116->fields.writeMasterDataThread) == 9 )
        v115 = &StringLiteral_8826/*"MENU_SELECT_ITEM_REMOVE_FOLLOW"*/;
      else
        v115 = &StringLiteral_8825/*"MENU_SELECT_ITEM_REMOVE"*/;
      goto LABEL_143;
    case 11:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      Instance = (DataManager_o *)this->fields.operationItemListViewManager;
      if ( !Instance )
        goto LABEL_151;
      Instance = (DataManager_o *)FriendOperationItemListViewManager__GetItem(
                                    (FriendOperationItemListViewManager_o *)Instance,
                                    this->fields.selectItemNum,
                                    0LL);
      if ( !Instance )
        goto LABEL_151;
      FriendOperationItemListViewItem__set_isSwapMessageDisp(
        (FriendOperationItemListViewItem_o *)Instance,
        LOBYTE(Instance[1].fields.masterDataBytes) == 0,
        0LL);
      goto LABEL_140;
    case 12:
      Instance = (DataManager_o *)this->fields.operationItemListViewManager;
      if ( !Instance )
        goto LABEL_151;
      Instance = (DataManager_o *)FriendOperationItemListViewManager__GetItem(
                                    (FriendOperationItemListViewManager_o *)Instance,
                                    this->fields.selectItemNum,
                                    0LL);
      if ( !Instance )
        goto LABEL_151;
      v122 = (FriendOperationItemListViewItem_o *)Instance;
      ServantLeader = FriendOperationItemListViewItem__get_ServantLeader(
                        (FriendOperationItemListViewItem_o *)Instance,
                        0LL);
      if ( !ServantLeader || !ServantLeaderInfo__IsHideEquip(ServantLeader, 0LL) )
      {
        EquipTargetInfo = FriendOperationItemListViewItem__get_EquipTargetInfo(v122, 0LL);
        if ( EquipTargetInfo )
        {
          v125 = EquipTargetInfo;
          v127 = *(_QWORD *)&EquipTargetInfo->fields.svtId.fields.currentCryptoKey;
          v126 = *(_QWORD *)&EquipTargetInfo->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v146.fields.currentCryptoKey = v127;
          *(_QWORD *)&v146.fields.fakeValue = v126;
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v146, 0LL) >= 1 )
          {
            if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !SoundManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
            }
            SoundManager__playSystemSe(0, 0LL);
            if ( v122->fields.kind == 9 )
              v129 = 14;
            else
              v129 = 13;
            FriendRootComponent__SelectShowServantEquip(this, v125, v129, v128);
            return;
          }
        }
      }
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(2, 0LL);
      goto LABEL_140;
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
      Instance = (DataManager_o *)this->fields.operationItemListViewManager;
      if ( !Instance )
        goto LABEL_151;
      Instance = (DataManager_o *)FriendOperationItemListViewManager__GetItem(
                                    (FriendOperationItemListViewManager_o *)Instance,
                                    this->fields.selectItemNum,
                                    0LL);
      v88 = (unsigned int)(kind - 14);
      v89 = (unsigned int)v88 < 4 ? v88 + 1 : 0LL;
      if ( !Instance )
        goto LABEL_151;
      Instance = (DataManager_o *)FriendOperationItemListViewItem__GetAppendSkillInfo(
                                    (FriendOperationItemListViewItem_o *)Instance,
                                    &skillInfoList,
                                    0LL);
      if ( !skillInfoList )
        goto LABEL_151;
      if ( (unsigned int)v89 >= skillInfoList->max_length )
        goto LABEL_152;
      v90 = skillInfoList->m_Items[v89];
      if ( v90 && v90->fields.id >= 1 && v90->fields.lv >= 1 )
      {
        v91 = Method_FriendRootComponent_OnSelectFriendItem__;
        if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 75) & 2) != 0 )
          v91 = (_QWORD *)sub_B5D5CC(Method_FriendRootComponent_OnSelectFriendItem__);
        v92 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v91, v91[3]);
        OverwriteAssetSoundName__PlaySystemSe(v92, 0, 0LL);
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        Instance = (DataManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_SkillMaster___);
        if ( !Instance )
          goto LABEL_151;
        Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                      v90->fields.id,
                                      (const MethodInfo_23FAE10 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_151;
        SkillEntity__getSkillMessageInfo((SkillEntity_o *)Instance, &name, &detail, v90->fields.lv, 0LL);
        v93 = name;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v94 = LocalizationManager__Get((System_String_o *)StringLiteral_8719/*"MASTER_EQSKILL_LV_TXT"*/, 0LL);
        lv = v90->fields.lv;
        v95 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv);
        v96 = System_String__Format(v94, v95, 0LL);
        name = System_String__Concat_44580072(v93, (System_String_o *)StringLiteral_81/*" "*/, v96, 0LL);
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !Instance )
          goto LABEL_151;
        v98 = detail;
        v97 = name;
        v99 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_58:
        CommonUI__OpenDetailLongInfoDialog((CommonUI_o *)Instance, v97, v99, v98, 1, 0, 0LL);
      }
      else
      {
        v100 = Method_FriendRootComponent_OnSelectFriendItem__;
        if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 75) & 2) != 0 )
          v100 = (_QWORD *)sub_B5D5CC(Method_FriendRootComponent_OnSelectFriendItem__);
        v101 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v100, v100[3]);
        OverwriteAssetSoundName__PlaySystemSe(v101, 2, 0LL);
      }
      goto LABEL_140;
    default:
      if ( this->fields.currentModeKind != 1 )
        goto LABEL_155;
      if ( !byte_42EB562 )
      {
        sub_B5D5C4(&FriendRootComponent_TypeInfo, v84, v85, v86);
        byte_42EB562 = 1;
      }
      v117 = FriendRootComponent_TypeInfo;
      if ( (BYTE3(FriendRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !FriendRootComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FriendRootComponent_TypeInfo);
        v117 = FriendRootComponent_TypeInfo;
      }
      if ( !v117->static_fields->tabKindSave )
      {
        Instance = (DataManager_o *)this->fields.operationItemListViewManager;
        if ( !Instance )
          goto LABEL_151;
        Item = FriendOperationItemListViewManager__GetItem(
                 (FriendOperationItemListViewManager_o *)Instance,
                 this->fields.selectItemNum,
                 0LL);
        if ( Item )
        {
          v136 = Item;
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(11, 0LL);
          FriendOperationItemListViewItem__SwapLock(v136, 0LL);
        }
      }
      else
      {
LABEL_155:
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(0, 0LL);
        Instance = (DataManager_o *)this->fields.operationItemListViewManager;
        if ( !Instance )
          goto LABEL_151;
        Instance = (DataManager_o *)FriendOperationItemListViewManager__GetItem(
                                      (FriendOperationItemListViewManager_o *)Instance,
                                      this->fields.selectItemNum,
                                      0LL);
        if ( !Instance )
          goto LABEL_151;
        v118 = Instance;
        Instance = *(DataManager_o **)&Instance->fields.writeMasterDataThreadEnd;
        if ( !Instance )
          goto LABEL_151;
        v119 = *(_QWORD *)&Instance->fields.nowLoadCount;
        if ( !v119 )
          goto LABEL_151;
        if ( !*(_DWORD *)(v119 + 24) )
        {
LABEL_152:
          v137 = sub_B5D6C8(Instance);
          sub_B5D668(v137, 0LL);
        }
        ServantLeaderInfo = OtherUserGameEntity__getServantLeaderInfo(
                              (OtherUserGameEntity_o *)Instance,
                              (int32_t)v118[1].fields.lookup,
                              0,
                              0,
                              *(_DWORD *)(v119 + 32),
                              0LL);
        if ( ServantLeaderInfo )
        {
          FriendRootComponent__SelectShowServant(this, ServantLeaderInfo, v121);
          return;
        }
      }
LABEL_140:
      operationItemListViewManager = this->fields.operationItemListViewManager;
      v134 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B5D694(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
      FriendOperationItemListViewManager_CallbackFunc___ctor(
        v134,
        (Il2CppObject *)this,
        (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
        0LL);
      if ( operationItemListViewManager )
      {
        FriendOperationItemListViewManager__SetMode(operationItemListViewManager, 2, v134, 0LL);
        return;
      }
      goto LABEL_151;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendRootComponent__OnSelectOffer(
        FriendRootComponent_o *this,
        int32_t state,
        int32_t classPos,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  ClassButtonControlComponent_o *classButtonControl; // x0
  __int64 *v14; // x8

  if ( (byte_42EB4AC & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_8822/*"MENU_SELECT_ITEM_FOLLOW"*/, state, classPos, method);
    sub_B5D5C4(&StringLiteral_8823/*"MENU_SELECT_ITEM_OFFER"*/, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_8806/*"MENU_CANCEL"*/, v10, v11, v12);
    byte_42EB4AC = 1;
  }
  classButtonControl = this->fields.classButtonControl;
  if ( !classButtonControl )
    goto LABEL_12;
  ClassButtonControlComponent__setCursor(classButtonControl, classPos, 0LL);
  classButtonControl = (ClassButtonControlComponent_o *)this->fields.myFSM;
  if ( state == 2 )
  {
    if ( classButtonControl )
    {
      v14 = &StringLiteral_8823/*"MENU_SELECT_ITEM_OFFER"*/;
      goto LABEL_11;
    }
LABEL_12:
    sub_B5D69C(classButtonControl, *(_QWORD *)&state);
  }
  if ( !classButtonControl )
    goto LABEL_12;
  if ( state == 3 )
    v14 = &StringLiteral_8822/*"MENU_SELECT_ITEM_FOLLOW"*/;
  else
    v14 = &StringLiteral_8806/*"MENU_CANCEL"*/;
LABEL_11:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)classButtonControl, (System_String_o *)*v14, 0LL);
}


void __fastcall FriendRootComponent__OnSelectSearchFriend(
        FriendRootComponent_o *this,
        bool isDecide,
        System_String_o *friendCode,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  char v11; // w1
  int v12; // w2
  __int64 v13; // x3
  __int64 v14; // x1
  PlayMakerFSM_o *myFSM; // x0
  __int64 *v16; // x8

  if ( (byte_42EB4AB & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_8807/*"MENU_DECIDE"*/, isDecide, (_DWORD)friendCode, method);
    sub_B5D5C4(&StringLiteral_8806/*"MENU_CANCEL"*/, v11, v12, v13);
    byte_42EB4AB = 1;
  }
  this->fields.selectFriendCode = friendCode;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.selectFriendCode,
    (System_Int32_array **)friendCode,
    (System_String_array **)friendCode,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_B5D69C(0LL, v14);
  v16 = &StringLiteral_8807/*"MENU_DECIDE"*/;
  if ( !isDecide )
    v16 = &StringLiteral_8806/*"MENU_CANCEL"*/;
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)*v16, 0LL);
}


void __fastcall FriendRootComponent__OpenHelpDialog(FriendRootComponent_o *this, const MethodInfo *method)
{
  EventTutorialMaster__ShowTutorialWithoutCheck(-1, 49, 0LL, 0LL);
}


void __fastcall FriendRootComponent__Quit(FriendRootComponent_o *this, const MethodInfo *method)
{
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  const MethodInfo *v4; // x1

  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager
    || (FriendOperationItemListViewManager__DestroyList(operationItemListViewManager, 0LL),
        (operationItemListViewManager = this->fields.operationItemListViewManager) == 0LL)
    || (operationItemListViewManager = (FriendOperationItemListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                                 (UnityEngine_Component_o *)operationItemListViewManager,
                                                                                 0LL)) == 0LL )
  {
    sub_B5D69C(operationItemListViewManager, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)operationItemListViewManager, 0, 0LL);
  FriendRootComponent__RefreshInfo(this, v4);
  this->fields.state = 0;
}


void __fastcall FriendRootComponent__RefreshInfo(FriendRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
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
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  UserGameEntity_o *SelfUserGame; // x22
  DataManager_o *Instance; // x0
  __int64 v25; // x1
  TblFriendMaster_o *MasterData_WarQuestSelectionMaster; // x20
  WarQuestSelectionMaster_o *v27; // x0
  UILabel_o *friendCountLabel; // x23
  UserFollowMaster_o *v29; // x21
  System_String_o *v30; // x24
  Il2CppObject *v31; // x25
  Il2CppObject *v32; // x0
  UILabel_o *followCountLabel; // x22
  System_String_o *v34; // x23
  Il2CppObject *v35; // x21
  BalanceConfig_c *v36; // x8
  Il2CppObject *v37; // x0
  const MethodInfo *v38; // x1
  const MethodInfo *v39; // x1
  int32_t FollowNum; // [xsp+8h] [xbp-58h] BYREF
  int32_t FollowSum; // [xsp+Ch] [xbp-54h] BYREF
  int32_t friendKeep; // [xsp+18h] [xbp-48h] BYREF
  int32_t FriendSum; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_42EB468 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_TblFriendMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserFollowMaster___, v8, v9, v10);
    sub_B5D5C4(&int_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_6580/*"FRIEND_SHOW_INFOMATION"*/, v20, v21, v22);
    byte_42EB468 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  MasterData_WarQuestSelectionMaster = (TblFriendMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              Instance,
                                                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_TblFriendMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  v27 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          Instance,
          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserFollowMaster___);
  friendCountLabel = this->fields.friendCountLabel;
  v29 = (UserFollowMaster_o *)v27;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6580/*"FRIEND_SHOW_INFOMATION"*/, 0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_18;
  v30 = (System_String_o *)Instance;
  FriendSum = TblFriendMaster__GetFriendSum(MasterData_WarQuestSelectionMaster, 0LL);
  Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &FriendSum);
  if ( !SelfUserGame )
    goto LABEL_18;
  v31 = (Il2CppObject *)Instance;
  friendKeep = SelfUserGame->fields.friendKeep;
  v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &friendKeep);
  Instance = (DataManager_o *)System_String__Format_44573324(v30, v31, v32, 0LL);
  if ( !friendCountLabel )
    goto LABEL_18;
  UILabel__set_text(friendCountLabel, (System_String_o *)Instance, 0LL);
  followCountLabel = this->fields.followCountLabel;
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6580/*"FRIEND_SHOW_INFOMATION"*/, 0LL);
  if ( !v29 )
    goto LABEL_18;
  v34 = (System_String_o *)Instance;
  FollowSum = UserFollowMaster__GetFollowSum(v29, 0LL);
  v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &FollowSum);
  v36 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v36 = BalanceConfig_TypeInfo;
  }
  FollowNum = v36->static_fields->FollowNum;
  v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &FollowNum);
  Instance = (DataManager_o *)System_String__Format_44573324(v34, v35, v37, 0LL);
  if ( !followCountLabel
    || (UILabel__set_text(followCountLabel, (System_String_o *)Instance, 0LL),
        Instance = (DataManager_o *)TblFriendMaster__GetSum(MasterData_WarQuestSelectionMaster, 2, 0LL),
        !this->fields.noticeNumber) )
  {
LABEL_18:
    sub_B5D69C(Instance, v25);
  }
  NoticeNumberComponent__SetNumber(this->fields.noticeNumber, (int32_t)Instance, 0LL);
  FriendRootComponent__CheckModeKind(this, v38);
  FriendRootComponent__CheckHelpUI(this, v39);
}


void __fastcall FriendRootComponent__RefreshTab(FriendRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
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
  FriendRootComponent_c *v26; // x0
  int32_t tabKindSave; // w8
  UnityEngine_Behaviour_o *tabFriendButton; // x0
  System_String_o *v29; // x1
  System_String_o *v30; // x1
  const MethodInfo *v31; // x1
  int v32; // w1
  const MethodInfo *v33; // x2
  __int64 v34; // x3
  FriendRootComponent_c *v35; // x0
  UICommonButton_o *v36; // x20
  bool enabled; // w0
  UICommonButton_o *tabOfferedButton; // x20
  bool v39; // w0
  UnityEngine_Behaviour_o *tabSearchButton; // x19
  bool v41; // w1

  if ( (byte_42EB467 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_17269/*"btn_txt_friendsearch_on"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_17268/*"btn_txt_friendsearch_off"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_17170/*"btn_bg_09"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_17267/*"btn_txt_friendrequest_on"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_17265/*"btn_txt_friendlist_on"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_17266/*"btn_txt_friendrequest_off"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_17264/*"btn_txt_friendlist_off"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_17185/*"btn_bg_on"*/, v23, v24, v25);
    byte_42EB467 = 1;
  }
  if ( !byte_42EB562 )
  {
    sub_B5D5C4(&FriendRootComponent_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB562 = 1;
  }
  v26 = FriendRootComponent_TypeInfo;
  if ( (BYTE3(FriendRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FriendRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendRootComponent_TypeInfo);
    v26 = FriendRootComponent_TypeInfo;
  }
  tabKindSave = v26->static_fields->tabKindSave;
  if ( tabKindSave == 2 )
  {
    tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabFriendButton;
    if ( !tabFriendButton )
      goto LABEL_63;
    ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, void *))tabFriendButton->klass[1]._1.namespaze)(
      tabFriendButton,
      1LL,
      tabFriendButton->klass[1]._1.byval_arg.data);
    tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabOfferedButton;
    if ( !tabFriendButton )
      goto LABEL_63;
    ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, void *))tabFriendButton->klass[1]._1.namespaze)(
      tabFriendButton,
      1LL,
      tabFriendButton->klass[1]._1.byval_arg.data);
    tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabSearchButton;
    if ( !tabFriendButton )
      goto LABEL_63;
    ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, void *))tabFriendButton->klass[1]._1.namespaze)(
      tabFriendButton,
      1LL,
      tabFriendButton->klass[1]._1.byval_arg.data);
    tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabFriendButton;
    if ( !tabFriendButton )
      goto LABEL_63;
    UnityEngine_Behaviour__set_enabled(tabFriendButton, 1, 0LL);
    tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabOfferedButton;
    if ( !tabFriendButton )
      goto LABEL_63;
    UnityEngine_Behaviour__set_enabled(tabFriendButton, 1, 0LL);
    tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabSearchButton;
    if ( !tabFriendButton )
      goto LABEL_63;
    UnityEngine_Behaviour__set_enabled(tabFriendButton, 0, 0LL);
    tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabFriendTitleSprite;
    if ( !tabFriendButton )
      goto LABEL_63;
    UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17264/*"btn_txt_friendlist_off"*/, 0LL);
    tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabOfferedTitleSprite;
    if ( !tabFriendButton )
      goto LABEL_63;
    UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17266/*"btn_txt_friendrequest_off"*/, 0LL);
    tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabSearchTitleSprite;
    if ( !tabFriendButton )
      goto LABEL_63;
    UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17269/*"btn_txt_friendsearch_on"*/, 0LL);
    tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabFriendSprite;
    if ( !tabFriendButton )
      goto LABEL_63;
    UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17170/*"btn_bg_09"*/, 0LL);
    tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabOfferedSprite;
    if ( !tabFriendButton )
      goto LABEL_63;
    UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17170/*"btn_bg_09"*/, 0LL);
    tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabSearchSprite;
    if ( !tabFriendButton )
      goto LABEL_63;
    v30 = (System_String_o *)StringLiteral_17185/*"btn_bg_on"*/;
  }
  else
  {
    if ( tabKindSave == 1 )
    {
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabFriendButton;
      if ( !tabFriendButton )
        goto LABEL_63;
      ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, void *))tabFriendButton->klass[1]._1.namespaze)(
        tabFriendButton,
        1LL,
        tabFriendButton->klass[1]._1.byval_arg.data);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabOfferedButton;
      if ( !tabFriendButton )
        goto LABEL_63;
      ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, void *))tabFriendButton->klass[1]._1.namespaze)(
        tabFriendButton,
        1LL,
        tabFriendButton->klass[1]._1.byval_arg.data);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabSearchButton;
      if ( !tabFriendButton )
        goto LABEL_63;
      ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, void *))tabFriendButton->klass[1]._1.namespaze)(
        tabFriendButton,
        1LL,
        tabFriendButton->klass[1]._1.byval_arg.data);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabFriendButton;
      if ( !tabFriendButton )
        goto LABEL_63;
      UnityEngine_Behaviour__set_enabled(tabFriendButton, 1, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabOfferedButton;
      if ( !tabFriendButton )
        goto LABEL_63;
      UnityEngine_Behaviour__set_enabled(tabFriendButton, 0, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabSearchButton;
      if ( !tabFriendButton )
        goto LABEL_63;
      UnityEngine_Behaviour__set_enabled(tabFriendButton, 1, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabFriendTitleSprite;
      if ( !tabFriendButton )
        goto LABEL_63;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17264/*"btn_txt_friendlist_off"*/, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabOfferedTitleSprite;
      if ( !tabFriendButton )
        goto LABEL_63;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17267/*"btn_txt_friendrequest_on"*/, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabSearchTitleSprite;
      if ( !tabFriendButton )
        goto LABEL_63;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17268/*"btn_txt_friendsearch_off"*/, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabFriendSprite;
      if ( !tabFriendButton )
        goto LABEL_63;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17170/*"btn_bg_09"*/, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabOfferedSprite;
      if ( !tabFriendButton )
        goto LABEL_63;
      v29 = (System_String_o *)StringLiteral_17185/*"btn_bg_on"*/;
    }
    else
    {
      if ( tabKindSave )
        goto LABEL_54;
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabFriendButton;
      if ( !tabFriendButton )
        goto LABEL_63;
      ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, void *))tabFriendButton->klass[1]._1.namespaze)(
        tabFriendButton,
        1LL,
        tabFriendButton->klass[1]._1.byval_arg.data);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabOfferedButton;
      if ( !tabFriendButton )
        goto LABEL_63;
      ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, void *))tabFriendButton->klass[1]._1.namespaze)(
        tabFriendButton,
        1LL,
        tabFriendButton->klass[1]._1.byval_arg.data);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabSearchButton;
      if ( !tabFriendButton )
        goto LABEL_63;
      ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, void *))tabFriendButton->klass[1]._1.namespaze)(
        tabFriendButton,
        1LL,
        tabFriendButton->klass[1]._1.byval_arg.data);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabFriendButton;
      if ( !tabFriendButton )
        goto LABEL_63;
      UnityEngine_Behaviour__set_enabled(tabFriendButton, 0, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabOfferedButton;
      if ( !tabFriendButton )
        goto LABEL_63;
      UnityEngine_Behaviour__set_enabled(tabFriendButton, 1, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabSearchButton;
      if ( !tabFriendButton )
        goto LABEL_63;
      UnityEngine_Behaviour__set_enabled(tabFriendButton, 1, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabFriendTitleSprite;
      if ( !tabFriendButton )
        goto LABEL_63;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17265/*"btn_txt_friendlist_on"*/, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabOfferedTitleSprite;
      if ( !tabFriendButton )
        goto LABEL_63;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17266/*"btn_txt_friendrequest_off"*/, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabSearchTitleSprite;
      if ( !tabFriendButton )
        goto LABEL_63;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17268/*"btn_txt_friendsearch_off"*/, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabFriendSprite;
      if ( !tabFriendButton )
        goto LABEL_63;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17185/*"btn_bg_on"*/, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabOfferedSprite;
      if ( !tabFriendButton )
        goto LABEL_63;
      v29 = (System_String_o *)StringLiteral_17170/*"btn_bg_09"*/;
    }
    UISprite__set_spriteName((UISprite_o *)tabFriendButton, v29, 0LL);
    tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabSearchSprite;
    if ( !tabFriendButton )
      goto LABEL_63;
    v30 = (System_String_o *)StringLiteral_17170/*"btn_bg_09"*/;
  }
  UISprite__set_spriteName((UISprite_o *)tabFriendButton, v30, 0LL);
  tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabFriendButton;
  if ( !tabFriendButton )
    goto LABEL_63;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))tabFriendButton->klass[1]._1.implementedInterfaces)(
    tabFriendButton,
    0LL,
    1LL,
    tabFriendButton->klass[1]._1.interfaceOffsets);
  tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabOfferedButton;
  if ( !tabFriendButton )
    goto LABEL_63;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))tabFriendButton->klass[1]._1.implementedInterfaces)(
    tabFriendButton,
    0LL,
    1LL,
    tabFriendButton->klass[1]._1.interfaceOffsets);
  tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabSearchButton;
  if ( !tabFriendButton )
    goto LABEL_63;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))tabFriendButton->klass[1]._1.implementedInterfaces)(
    tabFriendButton,
    0LL,
    1LL,
    tabFriendButton->klass[1]._1.interfaceOffsets);
LABEL_54:
  FriendRootComponent__CheckModeKind(this, method);
  FriendRootComponent__CheckHelpUI(this, v31);
  if ( !byte_42EB562 )
  {
    sub_B5D5C4(&FriendRootComponent_TypeInfo, v32, (_DWORD)v33, v34);
    byte_42EB562 = 1;
  }
  v35 = FriendRootComponent_TypeInfo;
  if ( (BYTE3(FriendRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FriendRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendRootComponent_TypeInfo);
    v35 = FriendRootComponent_TypeInfo;
  }
  FriendRootComponent__SetActiveModeKindButtons(this, v35->static_fields->tabKindSave == 0, v33);
  v36 = this->fields.tabFriendButton;
  if ( !v36
    || (enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.tabFriendButton, 0LL),
        UICommonButton__SetColliderEnable(v36, enabled, 1, 0LL),
        (tabOfferedButton = this->fields.tabOfferedButton) == 0LL)
    || (v39 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.tabOfferedButton, 0LL),
        UICommonButton__SetColliderEnable(tabOfferedButton, v39, 1, 0LL),
        (tabSearchButton = (UnityEngine_Behaviour_o *)this->fields.tabSearchButton) == 0LL) )
  {
LABEL_63:
    sub_B5D69C(tabFriendButton, method);
  }
  v41 = UnityEngine_Behaviour__get_enabled(tabSearchButton, 0LL);
  UICommonButton__SetColliderEnable((UICommonButton_o *)tabSearchButton, v41, 1, 0LL);
}


void __fastcall FriendRootComponent__RequestFollowAssign(FriendRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
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
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  NetworkManager_ResultCallbackFunc_o *v17; // x20
  FollowAssignRequest_o *Request_WarBoardWallAttackRequest; // x0
  struct OtherUserGameEntity_o *selectFriendEntity; // x8

  if ( (byte_42EB4B1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_FriendRootComponent_EndRequestFollowAssign__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_NetworkManager_getRequest_FollowAssignRequest___, v5, v6, v7);
    sub_B5D5C4(&NetworkManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_11210/*"REQUEST_NG"*/, v14, v15, v16);
    byte_42EB4B1 = 1;
  }
  if ( this->fields.selectFriendEntity )
  {
    v17 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v17,
      (Il2CppObject *)this,
      Method_FriendRootComponent_EndRequestFollowAssign__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = (FollowAssignRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                   v17,
                                                                   (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_FollowAssignRequest___);
    selectFriendEntity = this->fields.selectFriendEntity;
    if ( selectFriendEntity && Request_WarBoardWallAttackRequest )
    {
      FollowAssignRequest__beginRequest(Request_WarBoardWallAttackRequest, selectFriendEntity->fields.userId, 0LL);
      return;
    }
LABEL_12:
    sub_B5D69C(Request_WarBoardWallAttackRequest, method);
  }
  Request_WarBoardWallAttackRequest = (FollowAssignRequest_o *)this->fields.myFSM;
  if ( !Request_WarBoardWallAttackRequest )
    goto LABEL_12;
  PlayMakerFSM__SendEvent(
    (PlayMakerFSM_o *)Request_WarBoardWallAttackRequest,
    (System_String_o *)StringLiteral_11210/*"REQUEST_NG"*/,
    0LL);
}


void __fastcall FriendRootComponent__RequestFollowRemove(FriendRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v11; // x20
  const MethodInfo *v12; // x2

  if ( (byte_42EB4BA & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_string___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_string__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_FriendRootComponent__RequestFollowRemove_b__139_0__, v8, v9, v10);
    byte_42EB4BA = 1;
  }
  v11 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_string__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v11,
    (Il2CppObject *)this,
    Method_FriendRootComponent__RequestFollowRemove_b__139_0__,
    (const MethodInfo_258B320 *)Method_System_Action_string___ctor__);
  FriendRootComponent__FriendLockRequst(this, (System_Action_string__o *)v11, v12);
}


void __fastcall FriendRootComponent__RequestFriendAccept(FriendRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
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
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  FriendOperationItemListViewItem_o *Item; // x0
  struct OtherUserGameEntity_o *otherUserGameEntity; // x21
  NetworkManager_ResultCallbackFunc_o *v20; // x20

  if ( (byte_42EB488 & 1) == 0 )
  {
    sub_B5D5C4(&Method_FriendRootComponent_EndRequestFriend__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_NetworkManager_getRequest_FriendAcceptRequest___, v5, v6, v7);
    sub_B5D5C4(&NetworkManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_11210/*"REQUEST_NG"*/, v14, v15, v16);
    byte_42EB488 = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    goto LABEL_13;
  Item = FriendOperationItemListViewManager__GetItem(operationItemListViewManager, this->fields.selectItemNum, 0LL);
  if ( Item )
  {
    otherUserGameEntity = Item->fields.otherUserGameEntity;
    if ( otherUserGameEntity )
    {
      v20 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v20,
        (Il2CppObject *)this,
        Method_FriendRootComponent_EndRequestFriend__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      operationItemListViewManager = (FriendOperationItemListViewManager_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                               v20,
                                                                               (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_FriendAcceptRequest___);
      if ( operationItemListViewManager )
      {
        FriendAcceptRequest__beginRequest(
          (FriendAcceptRequest_o *)operationItemListViewManager,
          otherUserGameEntity->fields.userId,
          0LL);
        return;
      }
LABEL_13:
      sub_B5D69C(operationItemListViewManager, method);
    }
  }
  operationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.myFSM;
  if ( !operationItemListViewManager )
    goto LABEL_13;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)operationItemListViewManager, (System_String_o *)StringLiteral_11210/*"REQUEST_NG"*/, 0LL);
}


void __fastcall FriendRootComponent__RequestFriendCancel(FriendRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
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
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  FriendOperationItemListViewItem_o *Item; // x0
  struct OtherUserGameEntity_o *otherUserGameEntity; // x21
  NetworkManager_ResultCallbackFunc_o *v20; // x20

  if ( (byte_42EB48A & 1) == 0 )
  {
    sub_B5D5C4(&Method_FriendRootComponent_EndRequestFriend__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_NetworkManager_getRequest_FriendCancelRequest___, v5, v6, v7);
    sub_B5D5C4(&NetworkManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_11210/*"REQUEST_NG"*/, v14, v15, v16);
    byte_42EB48A = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    goto LABEL_13;
  Item = FriendOperationItemListViewManager__GetItem(operationItemListViewManager, this->fields.selectItemNum, 0LL);
  if ( Item )
  {
    otherUserGameEntity = Item->fields.otherUserGameEntity;
    if ( otherUserGameEntity )
    {
      v20 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v20,
        (Il2CppObject *)this,
        Method_FriendRootComponent_EndRequestFriend__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      operationItemListViewManager = (FriendOperationItemListViewManager_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                               v20,
                                                                               (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_FriendCancelRequest___);
      if ( operationItemListViewManager )
      {
        FriendCancelRequest__beginRequest(
          (FriendCancelRequest_o *)operationItemListViewManager,
          otherUserGameEntity->fields.userId,
          0LL);
        return;
      }
LABEL_13:
      sub_B5D69C(operationItemListViewManager, method);
    }
  }
  operationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.myFSM;
  if ( !operationItemListViewManager )
    goto LABEL_13;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)operationItemListViewManager, (System_String_o *)StringLiteral_11210/*"REQUEST_NG"*/, 0LL);
}


void __fastcall FriendRootComponent__RequestFriendOffer(FriendRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
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
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  NetworkManager_ResultCallbackFunc_o *v17; // x20
  FriendOfferRequest_o *Request_WarBoardWallAttackRequest; // x0
  struct OtherUserGameEntity_o *selectFriendEntity; // x8

  if ( (byte_42EB486 & 1) == 0 )
  {
    sub_B5D5C4(&Method_FriendRootComponent_EndRequestFriend__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_NetworkManager_getRequest_FriendOfferRequest___, v5, v6, v7);
    sub_B5D5C4(&NetworkManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_11210/*"REQUEST_NG"*/, v14, v15, v16);
    byte_42EB486 = 1;
  }
  if ( this->fields.selectFriendEntity )
  {
    v17 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v17,
      (Il2CppObject *)this,
      Method_FriendRootComponent_EndRequestFriend__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = (FriendOfferRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                  v17,
                                                                  (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_FriendOfferRequest___);
    selectFriendEntity = this->fields.selectFriendEntity;
    if ( selectFriendEntity && Request_WarBoardWallAttackRequest )
    {
      FriendOfferRequest__beginRequest(Request_WarBoardWallAttackRequest, selectFriendEntity->fields.userId, 0LL);
      return;
    }
LABEL_12:
    sub_B5D69C(Request_WarBoardWallAttackRequest, method);
  }
  Request_WarBoardWallAttackRequest = (FriendOfferRequest_o *)this->fields.myFSM;
  if ( !Request_WarBoardWallAttackRequest )
    goto LABEL_12;
  PlayMakerFSM__SendEvent(
    (PlayMakerFSM_o *)Request_WarBoardWallAttackRequest,
    (System_String_o *)StringLiteral_11210/*"REQUEST_NG"*/,
    0LL);
}


void __fastcall FriendRootComponent__RequestFriendOffer2(FriendRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v11; // x20
  const MethodInfo *v12; // x2

  if ( (byte_42EB487 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_string___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_string__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_FriendRootComponent__RequestFriendOffer2_b__84_0__, v8, v9, v10);
    byte_42EB487 = 1;
  }
  v11 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_string__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v11,
    (Il2CppObject *)this,
    Method_FriendRootComponent__RequestFriendOffer2_b__84_0__,
    (const MethodInfo_258B320 *)Method_System_Action_string___ctor__);
  FriendRootComponent__FriendLockRequst(this, (System_Action_string__o *)v11, v12);
}


void __fastcall FriendRootComponent__RequestFriendProfile(FriendRootComponent_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  System_String_o *selectFriendCode; // x0
  System_String_o *v34; // x0
  NetworkManager_ResultCallbackFunc_o *v35; // x20
  ProfileTopRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v37; // x1
  FriendWarningDialog_o *friendWarningDialog; // x20
  FriendWarningDialog_CallbackFunc_o *v39; // x21
  const MethodInfo *v40; // x3

  if ( (byte_42EB48E & 1) == 0 )
  {
    sub_B5D5C4(&FriendWarningDialog_CallbackFunc_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&Method_FriendRootComponent_EndNoSearchWarning__, v9, v10, v11);
    sub_B5D5C4(&Method_FriendRootComponent_EndRequestFriendProfile__, v12, v13, v14);
    sub_B5D5C4(&Method_NetworkManager_getRequest_ProfileTopRequest___, v15, v16, v17);
    sub_B5D5C4(&NetworkManager_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_81/*" "*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_11210/*"REQUEST_NG"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_1/*""*/, v30, v31, v32);
    byte_42EB48E = 1;
  }
  selectFriendCode = this->fields.selectFriendCode;
  if ( selectFriendCode )
  {
    v34 = System_String__Replace_44585024(
            selectFriendCode,
            (System_String_o *)StringLiteral_81/*" "*/,
            (System_String_o *)StringLiteral_1/*""*/,
            0LL);
    if ( System_String__op_Inequality(v34, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
    {
      v35 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v35,
        (Il2CppObject *)this,
        Method_FriendRootComponent_EndRequestFriendProfile__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Request_WarBoardWallAttackRequest = (ProfileTopRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                   v35,
                                                                   (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_ProfileTopRequest___);
      if ( Request_WarBoardWallAttackRequest )
      {
        ProfileTopRequest__beginRequestFriendCode(Request_WarBoardWallAttackRequest, this->fields.selectFriendCode, 0LL);
        return;
      }
LABEL_14:
      sub_B5D69C(Request_WarBoardWallAttackRequest, v37);
    }
    friendWarningDialog = this->fields.friendWarningDialog;
    v39 = (FriendWarningDialog_CallbackFunc_o *)sub_B5D694(FriendWarningDialog_CallbackFunc_TypeInfo);
    FriendWarningDialog_CallbackFunc___ctor(
      v39,
      (Il2CppObject *)this,
      Method_FriendRootComponent_EndNoSearchWarning__,
      0LL);
    if ( !friendWarningDialog )
      goto LABEL_14;
    FriendWarningDialog__Open(friendWarningDialog, 3, v39, v40);
  }
  this->fields.selectFriendEntity = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.selectFriendEntity, 0LL, v2, v3, v4, v5, v6, v7);
  Request_WarBoardWallAttackRequest = (ProfileTopRequest_o *)this->fields.myFSM;
  if ( !Request_WarBoardWallAttackRequest )
    goto LABEL_14;
  PlayMakerFSM__SendEvent(
    (PlayMakerFSM_o *)Request_WarBoardWallAttackRequest,
    (System_String_o *)StringLiteral_11210/*"REQUEST_NG"*/,
    0LL);
}


void __fastcall FriendRootComponent__RequestFriendReject(FriendRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
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
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  FriendOperationItemListViewItem_o *Item; // x0
  struct OtherUserGameEntity_o *otherUserGameEntity; // x21
  NetworkManager_ResultCallbackFunc_o *v23; // x20
  const MethodInfo *v24; // x2

  if ( (byte_42EB489 & 1) == 0 )
  {
    sub_B5D5C4(&Method_FriendRootComponent_EndRequestFriend__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_NetworkManager_getRequest_FriendRejectRequest___, v5, v6, v7);
    sub_B5D5C4(&NetworkManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_11210/*"REQUEST_NG"*/, v17, v18, v19);
    byte_42EB489 = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    goto LABEL_14;
  Item = FriendOperationItemListViewManager__GetItem(operationItemListViewManager, this->fields.selectItemNum, 0LL);
  if ( Item )
  {
    otherUserGameEntity = Item->fields.otherUserGameEntity;
    if ( otherUserGameEntity )
    {
      operationItemListViewManager = (FriendOperationItemListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( operationItemListViewManager )
      {
        CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)operationItemListViewManager, 0, 0LL);
        v23 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
        NetworkManager_ResultCallbackFunc___ctor(
          v23,
          (Il2CppObject *)this,
          Method_FriendRootComponent_EndRequestFriend__,
          0LL);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        operationItemListViewManager = (FriendOperationItemListViewManager_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                                 v23,
                                                                                 (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_FriendRejectRequest___);
        if ( operationItemListViewManager )
        {
          FriendRejectRequest__beginRequest(
            (FriendRejectRequest_o *)operationItemListViewManager,
            otherUserGameEntity->fields.userId,
            v24);
          return;
        }
      }
LABEL_14:
      sub_B5D69C(operationItemListViewManager, method);
    }
  }
  operationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.myFSM;
  if ( !operationItemListViewManager )
    goto LABEL_14;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)operationItemListViewManager, (System_String_o *)StringLiteral_11210/*"REQUEST_NG"*/, 0LL);
}


void __fastcall FriendRootComponent__RequestFriendRemove(FriendRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v11; // x20
  const MethodInfo *v12; // x2

  if ( (byte_42EB48B & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_string___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_string__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_FriendRootComponent__RequestFriendRemove_b__88_0__, v8, v9, v10);
    byte_42EB48B = 1;
  }
  v11 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_string__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v11,
    (Il2CppObject *)this,
    Method_FriendRootComponent__RequestFriendRemove_b__88_0__,
    (const MethodInfo_258B320 *)Method_System_Action_string___ctor__);
  FriendRootComponent__FriendLockRequst(this, (System_Action_string__o *)v11, v12);
}


void __fastcall FriendRootComponent__SelectFollowConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
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
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  DataManager_o *Instance; // x0
  __int64 v39; // x1
  UserFollowMaster_o *v40; // x20
  const MethodInfo *v41; // x1
  int32_t FollowSum; // w21
  BalanceConfig_c *v43; // x8
  struct OtherUserGameEntity_o *selectFriendEntity; // x8
  CommonUI_o *v45; // x20
  System_String_o *v46; // x21
  System_String_o *v47; // x22
  NotificationDialog_ClickDelegate_o *v48; // x23
  FriendWarningDialog_o *friendWarningDialog; // x20
  FriendWarningDialog_CallbackFunc_o *v50; // x21
  const MethodInfo *v51; // x3
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x20
  OtherUserGameEntity_o *v53; // x21
  FriendOperationConfirmMenu_CallbackFunc_o *v54; // x22

  if ( (byte_42EB4AD & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&FriendWarningDialog_CallbackFunc_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&NotificationDialog_ClickDelegate_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserFollowMaster___, v14, v15, v16);
    sub_B5D5C4(&Method_FriendRootComponent_EndMaxFollowWarningOfferConfirm__, v17, v18, v19);
    sub_B5D5C4(&Method_FriendRootComponent_SelectedFollowOfferConfirm__, v20, v21, v22);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26, v27, v28);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_1702/*"ALREADY_FOLLOWED_TITLE"*/, v32, v33, v34);
    sub_B5D5C4(&StringLiteral_1701/*"ALREADY_FOLLOWED_MESSAGE"*/, v35, v36, v37);
    byte_42EB4AD = 1;
  }
  if ( this->fields.state == 23 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserFollowMaster___);
      if ( Instance )
      {
        v40 = (UserFollowMaster_o *)Instance;
        FollowSum = UserFollowMaster__GetFollowSum((UserFollowMaster_o *)Instance, 0LL);
        v43 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v43 = BalanceConfig_TypeInfo;
        }
        if ( FollowSum >= v43->static_fields->FollowNum )
        {
          this->fields.state = 43;
          friendWarningDialog = this->fields.friendWarningDialog;
          v50 = (FriendWarningDialog_CallbackFunc_o *)sub_B5D694(FriendWarningDialog_CallbackFunc_TypeInfo);
          FriendWarningDialog_CallbackFunc___ctor(
            v50,
            (Il2CppObject *)this,
            Method_FriendRootComponent_EndMaxFollowWarningOfferConfirm__,
            0LL);
          if ( friendWarningDialog )
          {
            FriendWarningDialog__Open(friendWarningDialog, 7, v50, v51);
            return;
          }
        }
        else
        {
          selectFriendEntity = this->fields.selectFriendEntity;
          if ( !selectFriendEntity )
          {
            FriendRootComponent__StartSearchInput(this, v41);
            return;
          }
          if ( UserFollowMaster__IsFollowUser(v40, selectFriendEntity->fields.userId, 0LL) )
          {
            this->fields.state = 44;
            v45 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v46 = LocalizationManager__Get((System_String_o *)StringLiteral_1702/*"ALREADY_FOLLOWED_TITLE"*/, 0LL);
            v47 = LocalizationManager__Get((System_String_o *)StringLiteral_1701/*"ALREADY_FOLLOWED_MESSAGE"*/, 0LL);
            v48 = (NotificationDialog_ClickDelegate_o *)sub_B5D694(NotificationDialog_ClickDelegate_TypeInfo);
            NotificationDialog_ClickDelegate___ctor(
              v48,
              (Il2CppObject *)this,
              Method_FriendRootComponent_EndMaxFollowWarningOfferConfirm__,
              0LL);
            if ( v45 )
            {
              CommonUI__OpenNotificationDialog_18204284(
                v45,
                v46,
                v47,
                v48,
                -1,
                0,
                0,
                0,
                0,
                0,
                0LL,
                0LL,
                0,
                0,
                0LL,
                1,
                0LL,
                0LL,
                0LL,
                0LL);
              return;
            }
          }
          else
          {
            this->fields.state = 42;
            operationConfirmMenu = this->fields.operationConfirmMenu;
            v53 = this->fields.selectFriendEntity;
            v54 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_B5D694(FriendOperationConfirmMenu_CallbackFunc_TypeInfo);
            FriendOperationConfirmMenu_CallbackFunc___ctor(
              v54,
              (Il2CppObject *)this,
              Method_FriendRootComponent_SelectedFollowOfferConfirm__,
              0LL);
            if ( operationConfirmMenu )
            {
              FriendOperationConfirmMenu__Open(operationConfirmMenu, 6, v53, v54, 0LL);
              return;
            }
          }
        }
      }
    }
    sub_B5D69C(Instance, v39);
  }
}


void __fastcall FriendRootComponent__SelectFollowRemoveConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x20
  OtherUserGameEntity_o *dropList; // x21
  FriendOperationConfirmMenu_CallbackFunc_o *v11; // x22

  if ( (byte_42EB4B4 & 1) == 0 )
  {
    sub_B5D5C4(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_FriendRootComponent_SelectedFollowRemoveConfirm__, v5, v6, v7);
    byte_42EB4B4 = 1;
  }
  if ( this->fields.state == 4 )
  {
    operationItemListViewManager = this->fields.operationItemListViewManager;
    if ( !operationItemListViewManager
      || (operationItemListViewManager = (FriendOperationItemListViewManager_o *)FriendOperationItemListViewManager__GetItem(
                                                                                   operationItemListViewManager,
                                                                                   this->fields.selectItemNum,
                                                                                   0LL),
          this->fields.state = 45,
          !operationItemListViewManager)
      || (operationConfirmMenu = this->fields.operationConfirmMenu,
          dropList = (OtherUserGameEntity_o *)operationItemListViewManager->fields.dropList,
          v11 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_B5D694(FriendOperationConfirmMenu_CallbackFunc_TypeInfo),
          FriendOperationConfirmMenu_CallbackFunc___ctor(
            v11,
            (Il2CppObject *)this,
            Method_FriendRootComponent_SelectedFollowRemoveConfirm__,
            0LL),
          !operationConfirmMenu) )
    {
      sub_B5D69C(operationItemListViewManager, method);
    }
    FriendOperationConfirmMenu__Open(operationConfirmMenu, 7, dropList, v11, 0LL);
  }
}


void __fastcall FriendRootComponent__SelectFriendAcceptConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x20
  OtherUserGameEntity_o *dropList; // x21
  FriendOperationConfirmMenu_CallbackFunc_o *v11; // x22

  if ( (byte_42EB47A & 1) == 0 )
  {
    sub_B5D5C4(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_FriendRootComponent_SelectedFriendAcceptConfirm__, v5, v6, v7);
    byte_42EB47A = 1;
  }
  if ( this->fields.state == 14 )
  {
    operationItemListViewManager = this->fields.operationItemListViewManager;
    if ( !operationItemListViewManager
      || (operationItemListViewManager = (FriendOperationItemListViewManager_o *)FriendOperationItemListViewManager__GetItem(
                                                                                   operationItemListViewManager,
                                                                                   this->fields.selectItemNum,
                                                                                   0LL),
          this->fields.state = 31,
          !operationItemListViewManager)
      || (operationConfirmMenu = this->fields.operationConfirmMenu,
          dropList = (OtherUserGameEntity_o *)operationItemListViewManager->fields.dropList,
          v11 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_B5D694(FriendOperationConfirmMenu_CallbackFunc_TypeInfo),
          FriendOperationConfirmMenu_CallbackFunc___ctor(
            v11,
            (Il2CppObject *)this,
            Method_FriendRootComponent_SelectedFriendAcceptConfirm__,
            0LL),
          !operationConfirmMenu) )
    {
      sub_B5D69C(operationItemListViewManager, method);
    }
    FriendOperationConfirmMenu__Open(operationConfirmMenu, 2, dropList, v11, 0LL);
  }
}


void __fastcall FriendRootComponent__SelectFriendCancelConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x20
  OtherUserGameEntity_o *dropList; // x21
  FriendOperationConfirmMenu_CallbackFunc_o *v11; // x22

  if ( (byte_42EB480 & 1) == 0 )
  {
    sub_B5D5C4(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_FriendRootComponent_SelectedFriendCancelConfirm__, v5, v6, v7);
    byte_42EB480 = 1;
  }
  if ( this->fields.state == 9 )
  {
    operationItemListViewManager = this->fields.operationItemListViewManager;
    if ( !operationItemListViewManager
      || (operationItemListViewManager = (FriendOperationItemListViewManager_o *)FriendOperationItemListViewManager__GetItem(
                                                                                   operationItemListViewManager,
                                                                                   this->fields.selectItemNum,
                                                                                   0LL),
          this->fields.state = 37,
          !operationItemListViewManager)
      || (operationConfirmMenu = this->fields.operationConfirmMenu,
          dropList = (OtherUserGameEntity_o *)operationItemListViewManager->fields.dropList,
          v11 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_B5D694(FriendOperationConfirmMenu_CallbackFunc_TypeInfo),
          FriendOperationConfirmMenu_CallbackFunc___ctor(
            v11,
            (Il2CppObject *)this,
            Method_FriendRootComponent_SelectedFriendCancelConfirm__,
            0LL),
          !operationConfirmMenu) )
    {
      sub_B5D69C(operationItemListViewManager, method);
    }
    FriendOperationConfirmMenu__Open(operationConfirmMenu, 4, dropList, v11, 0LL);
  }
}


void __fastcall FriendRootComponent__SelectFriendOfferConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
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
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int32_t state; // w8
  UserGameEntity_o *v21; // x20
  DataManager_o *Instance; // x0
  const MethodInfo *v23; // x1
  struct OtherUserGameEntity_o *selectFriendEntity; // x20
  struct FriendOperationConfirmMenu_o *v25; // x21
  FriendOperationConfirmMenu_CallbackFunc_o *v26; // x22
  FriendOperationConfirmMenu_o *v27; // x0
  OtherUserGameEntity_o *v28; // x2
  UserGameEntity_o *SelfUserGame; // x20
  struct FriendOperationConfirmMenu_o *operationConfirmMenu; // x20
  OtherUserGameEntity_o *v31; // x21
  FriendWarningDialog_o *friendWarningDialog; // x20
  FriendWarningDialog_CallbackFunc_o *v33; // x21
  const MethodInfo *v34; // x3

  if ( (byte_42EB478 & 1) == 0 )
  {
    sub_B5D5C4(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&FriendWarningDialog_CallbackFunc_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_TblFriendMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_FriendRootComponent_EndMaxFriendWarningOfferConfirm__, v11, v12, v13);
    sub_B5D5C4(&Method_FriendRootComponent_SelectedFriendOfferConfirm__, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18, v19);
    byte_42EB478 = 1;
  }
  state = this->fields.state;
  if ( state == 4 )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_27;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_TblFriendMaster___);
    if ( !Instance )
      goto LABEL_27;
    Instance = (DataManager_o *)TblFriendMaster__GetList((TblFriendMaster_o *)Instance, 3, 0LL);
    if ( !Instance || !SelfUserGame )
      goto LABEL_27;
    if ( SelfUserGame->fields.friendKeep > SLODWORD(Instance->fields.datalist) )
    {
      Instance = (DataManager_o *)this->fields.operationItemListViewManager;
      if ( Instance )
      {
        Instance = (DataManager_o *)FriendOperationItemListViewManager__GetItem(
                                      (FriendOperationItemListViewManager_o *)Instance,
                                      this->fields.selectItemNum,
                                      0LL);
        this->fields.state = 27;
        if ( Instance )
        {
          operationConfirmMenu = this->fields.operationConfirmMenu;
          v31 = *(OtherUserGameEntity_o **)&Instance->fields.writeMasterDataThreadEnd;
          v26 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_B5D694(FriendOperationConfirmMenu_CallbackFunc_TypeInfo);
          FriendOperationConfirmMenu_CallbackFunc___ctor(
            v26,
            (Il2CppObject *)this,
            Method_FriendRootComponent_SelectedFriendOfferConfirm__,
            0LL);
          if ( operationConfirmMenu )
          {
            v27 = operationConfirmMenu;
            v28 = v31;
            goto LABEL_22;
          }
        }
      }
LABEL_27:
      sub_B5D69C(Instance, v23);
    }
LABEL_24:
    this->fields.state = 29;
    friendWarningDialog = this->fields.friendWarningDialog;
    v33 = (FriendWarningDialog_CallbackFunc_o *)sub_B5D694(FriendWarningDialog_CallbackFunc_TypeInfo);
    FriendWarningDialog_CallbackFunc___ctor(
      v33,
      (Il2CppObject *)this,
      Method_FriendRootComponent_EndMaxFriendWarningOfferConfirm__,
      0LL);
    if ( !friendWarningDialog )
      goto LABEL_27;
    FriendWarningDialog__Open(friendWarningDialog, 1, v33, v34);
    return;
  }
  if ( state != 23 )
    return;
  v21 = UserGameMaster__getSelfUserGame(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_TblFriendMaster___);
  if ( !Instance )
    goto LABEL_27;
  Instance = (DataManager_o *)TblFriendMaster__GetList((TblFriendMaster_o *)Instance, 3, 0LL);
  if ( !Instance || !v21 )
    goto LABEL_27;
  if ( v21->fields.friendKeep <= SLODWORD(Instance->fields.datalist) )
    goto LABEL_24;
  selectFriendEntity = this->fields.selectFriendEntity;
  if ( selectFriendEntity )
  {
    this->fields.state = 27;
    v25 = this->fields.operationConfirmMenu;
    v26 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_B5D694(FriendOperationConfirmMenu_CallbackFunc_TypeInfo);
    FriendOperationConfirmMenu_CallbackFunc___ctor(
      v26,
      (Il2CppObject *)this,
      Method_FriendRootComponent_SelectedFriendOfferConfirm__,
      0LL);
    if ( v25 )
    {
      v27 = v25;
      v28 = selectFriendEntity;
LABEL_22:
      FriendOperationConfirmMenu__Open(v27, 1, v28, v26, 0LL);
      return;
    }
    goto LABEL_27;
  }
  FriendRootComponent__StartSearchInput(this, v23);
}


void __fastcall FriendRootComponent__SelectFriendRejectConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x20
  OtherUserGameEntity_o *dropList; // x21
  FriendOperationConfirmMenu_CallbackFunc_o *v11; // x22

  if ( (byte_42EB47D & 1) == 0 )
  {
    sub_B5D5C4(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_FriendRootComponent_SelectedFriendRejectConfirm__, v5, v6, v7);
    byte_42EB47D = 1;
  }
  if ( this->fields.state == 14 )
  {
    operationItemListViewManager = this->fields.operationItemListViewManager;
    if ( !operationItemListViewManager
      || (operationItemListViewManager = (FriendOperationItemListViewManager_o *)FriendOperationItemListViewManager__GetItem(
                                                                                   operationItemListViewManager,
                                                                                   this->fields.selectItemNum,
                                                                                   0LL),
          this->fields.state = 34,
          !operationItemListViewManager)
      || (operationConfirmMenu = this->fields.operationConfirmMenu,
          dropList = (OtherUserGameEntity_o *)operationItemListViewManager->fields.dropList,
          v11 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_B5D694(FriendOperationConfirmMenu_CallbackFunc_TypeInfo),
          FriendOperationConfirmMenu_CallbackFunc___ctor(
            v11,
            (Il2CppObject *)this,
            Method_FriendRootComponent_SelectedFriendRejectConfirm__,
            0LL),
          !operationConfirmMenu) )
    {
      sub_B5D69C(operationItemListViewManager, method);
    }
    FriendOperationConfirmMenu__Open(operationConfirmMenu, 3, dropList, v11, 0LL);
  }
}


void __fastcall FriendRootComponent__SelectFriendRemoveConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x20
  OtherUserGameEntity_o *dropList; // x21
  FriendOperationConfirmMenu_CallbackFunc_o *v11; // x22

  if ( (byte_42EB483 & 1) == 0 )
  {
    sub_B5D5C4(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_FriendRootComponent_SelectedFriendRemoveConfirm__, v5, v6, v7);
    byte_42EB483 = 1;
  }
  if ( this->fields.state == 4 )
  {
    operationItemListViewManager = this->fields.operationItemListViewManager;
    if ( !operationItemListViewManager
      || (operationItemListViewManager = (FriendOperationItemListViewManager_o *)FriendOperationItemListViewManager__GetItem(
                                                                                   operationItemListViewManager,
                                                                                   this->fields.selectItemNum,
                                                                                   0LL),
          this->fields.state = 40,
          !operationItemListViewManager)
      || (operationConfirmMenu = this->fields.operationConfirmMenu,
          dropList = (OtherUserGameEntity_o *)operationItemListViewManager->fields.dropList,
          v11 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_B5D694(FriendOperationConfirmMenu_CallbackFunc_TypeInfo),
          FriendOperationConfirmMenu_CallbackFunc___ctor(
            v11,
            (Il2CppObject *)this,
            Method_FriendRootComponent_SelectedFriendRemoveConfirm__,
            0LL),
          !operationConfirmMenu) )
    {
      sub_B5D69C(operationItemListViewManager, method);
    }
    FriendOperationConfirmMenu__Open(operationConfirmMenu, 5, dropList, v11, 0LL);
  }
}


void __fastcall FriendRootComponent__SelectSearchFriend(FriendRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x1
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_42EB471 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_5553/*"END_ACTION"*/, (_DWORD)method, v2, v3);
    byte_42EB471 = 1;
  }
  if ( this->fields.state == 1 )
  {
    this->fields.state = 22;
    FriendRootComponent__RefreshInfo(this, method);
    FriendRootComponent__OnMoveEnd(this, v5);
  }
  else
  {
    myFSM = this->fields.myFSM;
    if ( !myFSM )
      sub_B5D69C(0LL, method);
    PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_5553/*"END_ACTION"*/, 0LL);
  }
}


void __fastcall FriendRootComponent__SelectShowFriend(FriendRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UnityEngine_Component_o *operationItemListViewManager; // x0
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  FriendOperationItemListViewManager_o *v13; // x20
  System_Action_o *v14; // x21

  if ( (byte_42EB469 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_FriendRootComponent_OnMoveEnd__, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_5553/*"END_ACTION"*/, v8, v9, v10);
    byte_42EB469 = 1;
  }
  if ( this->fields.state == 1 )
  {
    this->fields.state = 2;
    FriendRootComponent__RefreshInfo(this, method);
    operationItemListViewManager = (UnityEngine_Component_o *)this->fields.operationItemListViewManager;
    if ( operationItemListViewManager )
    {
      operationItemListViewManager = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                  operationItemListViewManager,
                                                                  0LL);
      if ( operationItemListViewManager )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)operationItemListViewManager, 1, 0LL);
        classButtonControl = this->fields.classButtonControl;
        if ( classButtonControl )
        {
          operationItemListViewManager = (UnityEngine_Component_o *)this->fields.operationItemListViewManager;
          if ( operationItemListViewManager )
          {
            FriendOperationItemListViewManager__CreateList(
              (FriendOperationItemListViewManager_o *)operationItemListViewManager,
              3,
              classButtonControl->fields.currentCursor,
              0LL);
            v13 = this->fields.operationItemListViewManager;
            v14 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
            System_Action___ctor(v14, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0LL);
            if ( v13 )
            {
              FriendOperationItemListViewManager__SetMode_31318652(v13, 1, v14, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_12:
    sub_B5D69C(operationItemListViewManager, method);
  }
  operationItemListViewManager = (UnityEngine_Component_o *)this->fields.myFSM;
  if ( !operationItemListViewManager )
    goto LABEL_12;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)operationItemListViewManager, (System_String_o *)StringLiteral_5553/*"END_ACTION"*/, 0LL);
}


void __fastcall FriendRootComponent__SelectShowOffer(FriendRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  __int64 v8; // x1
  UnityEngine_Component_o *operationItemListViewManager; // x0
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  FriendOperationItemListViewManager_o *v11; // x20
  System_Action_o *v12; // x21

  if ( (byte_42EB46B & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_FriendRootComponent_OnMoveEnd__, v5, v6, v7);
    byte_42EB46B = 1;
  }
  if ( this->fields.state == 1 )
  {
    this->fields.state = 7;
    FriendRootComponent__RefreshInfo(this, method);
    operationItemListViewManager = (UnityEngine_Component_o *)this->fields.operationItemListViewManager;
    if ( !operationItemListViewManager )
      goto LABEL_11;
    operationItemListViewManager = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                operationItemListViewManager,
                                                                0LL);
    if ( !operationItemListViewManager
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)operationItemListViewManager, 1, 0LL),
          (classButtonControl = this->fields.classButtonControl) == 0LL)
      || (operationItemListViewManager = (UnityEngine_Component_o *)this->fields.operationItemListViewManager) == 0LL
      || (FriendOperationItemListViewManager__CreateList(
            (FriendOperationItemListViewManager_o *)operationItemListViewManager,
            1,
            classButtonControl->fields.currentCursor,
            0LL),
          v11 = this->fields.operationItemListViewManager,
          v12 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo),
          System_Action___ctor(v12, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0LL),
          !v11) )
    {
LABEL_11:
      sub_B5D69C(operationItemListViewManager, v8);
    }
    FriendOperationItemListViewManager__SetMode_31318652(v11, 1, v12, 0LL);
  }
}


void __fastcall FriendRootComponent__SelectShowOffered(FriendRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UnityEngine_Component_o *operationItemListViewManager; // x0
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  FriendOperationItemListViewManager_o *v13; // x20
  System_Action_o *v14; // x21

  if ( (byte_42EB46D & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_FriendRootComponent_OnMoveEnd__, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_5553/*"END_ACTION"*/, v8, v9, v10);
    byte_42EB46D = 1;
  }
  if ( this->fields.state == 1 )
  {
    this->fields.state = 12;
    FriendRootComponent__RefreshInfo(this, method);
    operationItemListViewManager = (UnityEngine_Component_o *)this->fields.operationItemListViewManager;
    if ( operationItemListViewManager )
    {
      operationItemListViewManager = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                  operationItemListViewManager,
                                                                  0LL);
      if ( operationItemListViewManager )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)operationItemListViewManager, 1, 0LL);
        classButtonControl = this->fields.classButtonControl;
        if ( classButtonControl )
        {
          operationItemListViewManager = (UnityEngine_Component_o *)this->fields.operationItemListViewManager;
          if ( operationItemListViewManager )
          {
            FriendOperationItemListViewManager__CreateList(
              (FriendOperationItemListViewManager_o *)operationItemListViewManager,
              2,
              classButtonControl->fields.currentCursor,
              0LL);
            v13 = this->fields.operationItemListViewManager;
            v14 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
            System_Action___ctor(v14, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0LL);
            if ( v13 )
            {
              FriendOperationItemListViewManager__SetMode_31318652(v13, 1, v14, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_12:
    sub_B5D69C(operationItemListViewManager, method);
  }
  operationItemListViewManager = (UnityEngine_Component_o *)this->fields.myFSM;
  if ( !operationItemListViewManager )
    goto LABEL_12;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)operationItemListViewManager, (System_String_o *)StringLiteral_5553/*"END_ACTION"*/, 0LL);
}


void __fastcall FriendRootComponent__SelectShowSearch(FriendRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Component_o *operationItemListViewManager; // x0
  FriendSearchMenu_o *friendSearchMenu; // x20
  System_Action_o *v10; // x21
  const MethodInfo *v11; // x2
  FriendOperationItemListViewManager_o *v12; // x20
  System_Action_o *v13; // x21

  if ( (byte_42EB46F & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_FriendRootComponent_OnMoveEnd__, v5, v6, v7);
    byte_42EB46F = 1;
  }
  if ( this->fields.state == 23 )
  {
    operationItemListViewManager = (UnityEngine_Component_o *)this->fields.operationItemListViewManager;
    if ( !operationItemListViewManager )
      goto LABEL_11;
    operationItemListViewManager = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                operationItemListViewManager,
                                                                0LL);
    if ( !operationItemListViewManager )
      goto LABEL_11;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)operationItemListViewManager, 1, 0LL);
    operationItemListViewManager = (UnityEngine_Component_o *)this->fields.operationItemListViewManager;
    if ( !operationItemListViewManager )
      goto LABEL_11;
    FriendOperationItemListViewManager__CreateListFriendCode(
      (FriendOperationItemListViewManager_o *)operationItemListViewManager,
      this->fields.selectFriendCode,
      0LL);
    this->fields.state = 17;
    friendSearchMenu = this->fields.friendSearchMenu;
    v10 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v10, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0LL);
    if ( !friendSearchMenu
      || (FriendSearchMenu__Close_30284920(friendSearchMenu, v10, v11),
          v12 = this->fields.operationItemListViewManager,
          v13 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo),
          System_Action___ctor(v13, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0LL),
          !v12) )
    {
LABEL_11:
      sub_B5D69C(operationItemListViewManager, method);
    }
    FriendOperationItemListViewManager__SetMode_31318652(v12, 1, v13, 0LL);
  }
}


void __fastcall FriendRootComponent__SelectShowServant(
        FriendRootComponent_o *this,
        ServantLeaderInfo_o *servantLeaderInfo,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  unsigned int state; // w23
  CommonUI_o *Instance; // x21
  ServantStatusDialog_EndDelegate_o *v14; // x22
  __int64 v15; // x0
  __int64 v16; // x1
  int32_t v17; // w1

  if ( (byte_42EB475 & 1) == 0 )
  {
    sub_B5D5C4(&ServantStatusDialog_EndDelegate_TypeInfo, (_DWORD)servantLeaderInfo, (_DWORD)method, v3);
    sub_B5D5C4(&Method_FriendRootComponent_EndShowServant__, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10, v11);
    byte_42EB475 = 1;
  }
  state = this->fields.state;
  if ( state <= 0x13 && ((1 << state) & 0x84210) != 0 )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v14 = (ServantStatusDialog_EndDelegate_o *)sub_B5D694(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(v14, (Il2CppObject *)this, Method_FriendRootComponent_EndShowServant__, 0LL);
    if ( !Instance )
      sub_B5D69C(v15, v16);
    if ( state == 4 )
      v17 = 4;
    else
      v17 = 5;
    CommonUI__OpenServantStatusDialog_18214956(Instance, v17, servantLeaderInfo, v14, 0LL);
  }
}


void __fastcall FriendRootComponent__SelectShowServantEquip(
        FriendRootComponent_o *this,
        EquipTargetInfo_o *equipInfo,
        int32_t statusKind,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  CommonUI_o *Instance; // x22
  ServantStatusDialog_EndDelegate_o *v14; // x23
  __int64 v15; // x0
  __int64 v16; // x1

  if ( (byte_42EB49F & 1) == 0 )
  {
    sub_B5D5C4(&ServantStatusDialog_EndDelegate_TypeInfo, (_DWORD)equipInfo, statusKind, method);
    sub_B5D5C4(&Method_FriendRootComponent_EndShowServantEquip__, v7, v8, v9);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10, v11, v12);
    byte_42EB49F = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = (ServantStatusDialog_EndDelegate_o *)sub_B5D694(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(
    v14,
    (Il2CppObject *)this,
    Method_FriendRootComponent_EndShowServantEquip__,
    0LL);
  if ( !Instance )
    sub_B5D69C(v15, v16);
  CommonUI__OpenServantEquipStatusDialog_18217320(Instance, statusKind, equipInfo, v14, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendRootComponent__SelectedFollowOfferConfirm(
        FriendRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  PlayMakerFSM_o *myFSM; // x0
  __int64 *v10; // x8

  if ( (byte_42EB4B0 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_8807/*"MENU_DECIDE"*/, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_8806/*"MENU_CANCEL"*/, v6, v7, v8);
    byte_42EB4B0 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_B5D69C(0LL, isDecide);
  v10 = &StringLiteral_8807/*"MENU_DECIDE"*/;
  if ( !isDecide )
    v10 = &StringLiteral_8806/*"MENU_CANCEL"*/;
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)*v10, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendRootComponent__SelectedFollowRemoveConfirm(
        FriendRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  PlayMakerFSM_o *myFSM; // x0
  __int64 *v10; // x8

  if ( (byte_42EB4AA & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_8807/*"MENU_DECIDE"*/, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_8806/*"MENU_CANCEL"*/, v6, v7, v8);
    byte_42EB4AA = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_B5D69C(0LL, isDecide);
  v10 = &StringLiteral_8807/*"MENU_DECIDE"*/;
  if ( !isDecide )
    v10 = &StringLiteral_8806/*"MENU_CANCEL"*/;
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)*v10, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendRootComponent__SelectedFriendAcceptConfirm(
        FriendRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  PlayMakerFSM_o *myFSM; // x0
  __int64 *v10; // x8

  if ( (byte_42EB4A6 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_8807/*"MENU_DECIDE"*/, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_8806/*"MENU_CANCEL"*/, v6, v7, v8);
    byte_42EB4A6 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_B5D69C(0LL, isDecide);
  v10 = &StringLiteral_8807/*"MENU_DECIDE"*/;
  if ( !isDecide )
    v10 = &StringLiteral_8806/*"MENU_CANCEL"*/;
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)*v10, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendRootComponent__SelectedFriendCancelConfirm(
        FriendRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  PlayMakerFSM_o *myFSM; // x0
  __int64 *v10; // x8

  if ( (byte_42EB4A8 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_8807/*"MENU_DECIDE"*/, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_8806/*"MENU_CANCEL"*/, v6, v7, v8);
    byte_42EB4A8 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_B5D69C(0LL, isDecide);
  v10 = &StringLiteral_8807/*"MENU_DECIDE"*/;
  if ( !isDecide )
    v10 = &StringLiteral_8806/*"MENU_CANCEL"*/;
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)*v10, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendRootComponent__SelectedFriendOfferConfirm(
        FriendRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  PlayMakerFSM_o *myFSM; // x0
  __int64 *v10; // x8

  if ( (byte_42EB4A5 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_8807/*"MENU_DECIDE"*/, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_8806/*"MENU_CANCEL"*/, v6, v7, v8);
    byte_42EB4A5 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_B5D69C(0LL, isDecide);
  v10 = &StringLiteral_8807/*"MENU_DECIDE"*/;
  if ( !isDecide )
    v10 = &StringLiteral_8806/*"MENU_CANCEL"*/;
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)*v10, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendRootComponent__SelectedFriendRejectConfirm(
        FriendRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  PlayMakerFSM_o *myFSM; // x0
  __int64 *v10; // x8

  if ( (byte_42EB4A7 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_8807/*"MENU_DECIDE"*/, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_8806/*"MENU_CANCEL"*/, v6, v7, v8);
    byte_42EB4A7 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_B5D69C(0LL, isDecide);
  v10 = &StringLiteral_8807/*"MENU_DECIDE"*/;
  if ( !isDecide )
    v10 = &StringLiteral_8806/*"MENU_CANCEL"*/;
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)*v10, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendRootComponent__SelectedFriendRemoveConfirm(
        FriendRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  PlayMakerFSM_o *myFSM; // x0
  __int64 *v10; // x8

  if ( (byte_42EB4A9 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_8807/*"MENU_DECIDE"*/, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_8806/*"MENU_CANCEL"*/, v6, v7, v8);
    byte_42EB4A9 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_B5D69C(0LL, isDecide);
  v10 = &StringLiteral_8807/*"MENU_DECIDE"*/;
  if ( !isDecide )
    v10 = &StringLiteral_8806/*"MENU_CANCEL"*/;
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)*v10, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendRootComponent__SetActiveModeKindButtons(
        FriendRootComponent_o *this,
        bool isActive,
        const MethodInfo *method)
{
  __int64 v5; // x1
  float v6; // s0
  float v7; // s1
  float v8; // s2
  UnityEngine_GameObject_o *modeButtonParent; // x0
  float v10; // s8
  float v11; // s9
  float v12; // s10
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Vector3_o v14; // 0:s1.4,4:s2.4,8:s3.4

  if ( ((this->fields.isActiveModeKindButtons ^ isActive) & 1) != 0 )
  {
    if ( isActive )
      *(UnityEngine_Vector3_o *)&v6 = FriendRootComponent__GetDisplayPositionModeKindButtons(
                                        this,
                                        (const MethodInfo *)isActive);
    else
      *(UnityEngine_Vector3_o *)&v6 = FriendRootComponent__GetHidePositionModeKindButtons(
                                        this,
                                        (const MethodInfo *)isActive);
    modeButtonParent = this->fields.modeButtonParent;
    v10 = v6;
    v11 = v7;
    v12 = v8;
    if ( !modeButtonParent
      || (gameObject = UnityEngine_GameObject__get_gameObject(modeButtonParent, 0LL),
          v14.fields.x = v10,
          v14.fields.y = v11,
          v14.fields.z = v12,
          (modeButtonParent = (UnityEngine_GameObject_o *)TweenPosition__Begin(gameObject, 0.2, v14, 0LL)) == 0LL) )
    {
      sub_B5D69C(modeButtonParent, v5);
    }
    LODWORD(modeButtonParent[1].klass) = 3;
    this->fields.isActiveModeKindButtons = isActive;
  }
}


void __fastcall FriendRootComponent__ShowSearchResult(FriendRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  FriendRootComponent_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
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
  FriendSearchResultMenu_o *friendSearchResultMenu; // x20
  System_Action_o *v24; // x21
  const MethodInfo *v25; // x2
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  int32_t currentCursor; // w22
  FriendSearchResultMenu_o *v28; // x20
  OtherUserGameEntity_o *selectFriendEntity; // x21
  FriendSearchResultMenu_CallbackFunc_o *v30; // x23
  const MethodInfo *v31; // x4
  FriendSearchMenu_o *friendSearchMenu; // x20
  FriendSearchMenu_CallbackFunc_o *v33; // x21
  const MethodInfo *v34; // x3

  v4 = this;
  if ( (byte_42EB473 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&FriendSearchResultMenu_CallbackFunc_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&FriendSearchMenu_CallbackFunc_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_FriendRootComponent_OnSelectOffer__, v11, v12, v13);
    sub_B5D5C4(&Method_FriendRootComponent_OnSelectSearchFriend__, v14, v15, v16);
    sub_B5D5C4(&Method_FriendRootComponent_ShowSearchResult__, v17, v18, v19);
    this = (FriendRootComponent_o *)sub_B5D5C4(&StringLiteral_5553/*"END_ACTION"*/, v20, v21, v22);
    byte_42EB473 = 1;
  }
  if ( v4->fields.state == 23 )
  {
    friendSearchResultMenu = v4->fields.friendSearchResultMenu;
    if ( !friendSearchResultMenu )
      goto LABEL_14;
    if ( friendSearchResultMenu->fields.isOpen )
    {
      v24 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v24, (Il2CppObject *)v4, Method_FriendRootComponent_ShowSearchResult__, 0LL);
      FriendSearchResultMenu__Close_30287068(friendSearchResultMenu, v24, v25);
      return;
    }
    this = (FriendRootComponent_o *)UnityEngine_Component__get_gameObject(
                                      (UnityEngine_Component_o *)v4->fields.friendSearchResultMenu,
                                      0LL);
    if ( !this )
      goto LABEL_14;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    classButtonControl = v4->fields.classButtonControl;
    if ( !classButtonControl )
      goto LABEL_14;
    currentCursor = classButtonControl->fields.currentCursor;
    v28 = v4->fields.friendSearchResultMenu;
    selectFriendEntity = v4->fields.selectFriendEntity;
    v30 = (FriendSearchResultMenu_CallbackFunc_o *)sub_B5D694(FriendSearchResultMenu_CallbackFunc_TypeInfo);
    FriendSearchResultMenu_CallbackFunc___ctor(v30, (Il2CppObject *)v4, Method_FriendRootComponent_OnSelectOffer__, 0LL);
    if ( !v28
      || (FriendSearchResultMenu__Open(v28, selectFriendEntity, currentCursor, v30, v31),
          friendSearchMenu = v4->fields.friendSearchMenu,
          v33 = (FriendSearchMenu_CallbackFunc_o *)sub_B5D694(FriendSearchMenu_CallbackFunc_TypeInfo),
          FriendSearchMenu_CallbackFunc___ctor(
            v33,
            (Il2CppObject *)v4,
            Method_FriendRootComponent_OnSelectSearchFriend__,
            0LL),
          !friendSearchMenu)
      || (FriendSearchMenu__Open(friendSearchMenu, v33, 0, v34),
          (this = (FriendRootComponent_o *)v4->fields.myFSM) == 0LL) )
    {
LABEL_14:
      sub_B5D69C(this, method);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_5553/*"END_ACTION"*/, 0LL);
    EventTutorialMaster__CheckTutorial(-1, 50, 0LL, 0, 0, 0, 0, 0LL);
  }
}


void __fastcall FriendRootComponent__StartSearchInput(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  FriendRootComponent_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  FriendSearchResultMenu_o *friendSearchResultMenu; // x20
  OtherUserGameEntity_o *selectFriendEntity; // x21
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  int32_t currentCursor; // w22
  FriendSearchResultMenu_CallbackFunc_o *v18; // x23
  const MethodInfo *v19; // x4
  FriendSearchMenu_o *friendSearchMenu; // x20
  FriendSearchMenu_CallbackFunc_o *v21; // x21
  const MethodInfo *v22; // x3

  v4 = this;
  if ( (byte_42EB474 & 1) == 0 )
  {
    sub_B5D5C4(&FriendSearchResultMenu_CallbackFunc_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&FriendSearchMenu_CallbackFunc_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_FriendRootComponent_OnSelectOffer__, v8, v9, v10);
    this = (FriendRootComponent_o *)sub_B5D5C4(&Method_FriendRootComponent_OnSelectSearchFriend__, v11, v12, v13);
    byte_42EB474 = 1;
  }
  friendSearchResultMenu = v4->fields.friendSearchResultMenu;
  if ( !friendSearchResultMenu )
    goto LABEL_11;
  if ( friendSearchResultMenu->fields.isOpen )
  {
    selectFriendEntity = v4->fields.selectFriendEntity;
    if ( selectFriendEntity )
    {
      classButtonControl = v4->fields.classButtonControl;
      if ( !classButtonControl )
        goto LABEL_11;
      currentCursor = classButtonControl->fields.currentCursor;
      v18 = (FriendSearchResultMenu_CallbackFunc_o *)sub_B5D694(FriendSearchResultMenu_CallbackFunc_TypeInfo);
      FriendSearchResultMenu_CallbackFunc___ctor(
        v18,
        (Il2CppObject *)v4,
        Method_FriendRootComponent_OnSelectOffer__,
        0LL);
      FriendSearchResultMenu__Open(friendSearchResultMenu, selectFriendEntity, currentCursor, v18, v19);
    }
    else
    {
      FriendSearchResultMenu__Close_30287068(v4->fields.friendSearchResultMenu, 0LL, v2);
    }
  }
  friendSearchMenu = v4->fields.friendSearchMenu;
  v21 = (FriendSearchMenu_CallbackFunc_o *)sub_B5D694(FriendSearchMenu_CallbackFunc_TypeInfo);
  FriendSearchMenu_CallbackFunc___ctor(v21, (Il2CppObject *)v4, Method_FriendRootComponent_OnSelectSearchFriend__, 0LL);
  if ( !friendSearchMenu )
LABEL_11:
    sub_B5D69C(this, method);
  FriendSearchMenu__Open(friendSearchMenu, v21, 0, v22);
}


void __fastcall FriendRootComponent___OnClickBack_b__96_0(
        FriendRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  Il2CppObject *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v15; // x20
  const MethodInfo *v16; // x2

  v5 = (Il2CppObject *)this;
  if ( (byte_42EB4C0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_string___ctor__, (_DWORD)result, (_DWORD)method, v3);
    sub_B5D5C4(&System_Action_string__TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_FriendRootComponent__OnClickBack_b__96_1__, v9, v10, v11);
    this = (FriendRootComponent_o *)sub_B5D5C4(&StringLiteral_21497/*"ok"*/, v12, v13, v14);
    byte_42EB4C0 = 1;
  }
  if ( !result )
    sub_B5D69C(this, result);
  if ( System_String__Equals_44565128(result, (System_String_o *)StringLiteral_21497/*"ok"*/, 0LL) )
  {
    v15 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_string__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v15,
      v5,
      Method_FriendRootComponent__OnClickBack_b__96_1__,
      (const MethodInfo_258B320 *)Method_System_Action_string___ctor__);
    FriendRootComponent__FriendLockRequst((FriendRootComponent_o *)v5, (System_Action_string__o *)v15, v16);
  }
}


void __fastcall FriendRootComponent___OnClickBack_b__96_1(
        FriendRootComponent_o *this,
        System_String_o *res,
        const MethodInfo *method)
{
  __int64 v3; // x3
  FriendRootComponent_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3

  v5 = this;
  if ( (byte_42EB4C1 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_21497/*"ok"*/, (_DWORD)res, (_DWORD)method, v3);
    this = (FriendRootComponent_o *)sub_B5D5C4(&StringLiteral_3102/*"CLICK_BACK"*/, v6, v7, v8);
    byte_42EB4C1 = 1;
  }
  if ( !res )
    goto LABEL_9;
  if ( System_String__Equals_44565128(res, (System_String_o *)StringLiteral_21497/*"ok"*/, 0LL) )
  {
    this = (FriendRootComponent_o *)v5->fields.friendSearchMenu;
    if ( this )
    {
      FriendSearchMenu__BlockInput((FriendSearchMenu_o *)this, (const MethodInfo *)res);
      this = (FriendRootComponent_o *)v5->fields.myFSM;
      if ( this )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3102/*"CLICK_BACK"*/, 0LL);
        return;
      }
    }
LABEL_9:
    sub_B5D69C(this, res);
  }
}


void __fastcall FriendRootComponent___OnClickModeUserDetail_b__98_0(
        FriendRootComponent_o *this,
        System_String_o *res,
        const MethodInfo *method)
{
  __int64 v3; // x3
  FriendRootComponent_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  const MethodInfo *v9; // x1

  v5 = this;
  if ( (byte_42EB4C4 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)res, (_DWORD)method, v3);
    this = (FriendRootComponent_o *)sub_B5D5C4(&StringLiteral_21497/*"ok"*/, v6, v7, v8);
    byte_42EB4C4 = 1;
  }
  if ( !res )
    sub_B5D69C(this, res);
  if ( System_String__Equals_44565128(res, (System_String_o *)StringLiteral_21497/*"ok"*/, 0LL) )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v5->fields.currentModeKind = 0;
    FriendRootComponent__RefreshInfo(v5, v9);
  }
}


void __fastcall FriendRootComponent___OnClickTabFriend_b__105_0(
        FriendRootComponent_o *this,
        System_String_o *res,
        const MethodInfo *method)
{
  __int64 v3; // x3
  FriendRootComponent_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int state; // w8
  struct FriendSearchResultMenu_o *friendSearchResultMenu; // x8
  struct FriendSearchResultMenu_o *v14; // x8
  struct ClassButtonControlComponent_o *v15; // x8
  FriendRootComponent_o *v16; // x0
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x1
  struct ClassButtonControlComponent_o *classButtonControl; // x8

  v5 = this;
  if ( (byte_42EB4C5 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)res, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_21497/*"ok"*/, v6, v7, v8);
    this = (FriendRootComponent_o *)sub_B5D5C4(&StringLiteral_3147/*"CLICK_TAB"*/, v9, v10, v11);
    byte_42EB4C5 = 1;
  }
  if ( !res )
    goto LABEL_25;
  this = (FriendRootComponent_o *)System_String__Equals_44565128(res, (System_String_o *)StringLiteral_21497/*"ok"*/, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    return;
  state = v5->fields.state;
  if ( state <= 9 )
  {
    if ( state != 4 && state != 9 )
      return;
LABEL_18:
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    FriendRootComponent__set_tabKind(v16, 0, v17);
    FriendRootComponent__RefreshTab(v5, v18);
    classButtonControl = v5->fields.classButtonControl;
    if ( classButtonControl )
    {
      classButtonControl->fields.updateEnable = 0;
      this = (FriendRootComponent_o *)v5->fields.myFSM;
      if ( this )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3147/*"CLICK_TAB"*/, 0LL);
        return;
      }
    }
LABEL_25:
    sub_B5D69C(this, res);
  }
  if ( state == 14 || state == 19 )
    goto LABEL_18;
  if ( state == 23 )
  {
    friendSearchResultMenu = v5->fields.friendSearchResultMenu;
    if ( !friendSearchResultMenu )
      goto LABEL_25;
    this = (FriendRootComponent_o *)friendSearchResultMenu->fields.classButtonControl;
    if ( !this )
      goto LABEL_25;
    this = (FriendRootComponent_o *)ClassButtonControlComponent__getChangeCursorPos(
                                      (ClassButtonControlComponent_o *)this,
                                      0LL);
    if ( (_DWORD)this != -1 )
    {
      v14 = v5->fields.friendSearchResultMenu;
      if ( !v14 )
        goto LABEL_25;
      v15 = v14->fields.classButtonControl;
      if ( !v15 )
        goto LABEL_25;
      this = (FriendRootComponent_o *)v5->fields.classButtonControl;
      if ( !this )
        goto LABEL_25;
      ClassButtonControlComponent__setCursor((ClassButtonControlComponent_o *)this, v15->fields.currentCursor, 0LL);
    }
    goto LABEL_18;
  }
}


void __fastcall FriendRootComponent___OnClickTabOffered_b__106_0(
        FriendRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  Il2CppObject *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v15; // x20
  const MethodInfo *v16; // x2

  v5 = (Il2CppObject *)this;
  if ( (byte_42EB4C6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_string___ctor__, (_DWORD)result, (_DWORD)method, v3);
    sub_B5D5C4(&System_Action_string__TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_FriendRootComponent__OnClickTabOffered_b__106_1__, v9, v10, v11);
    this = (FriendRootComponent_o *)sub_B5D5C4(&StringLiteral_21497/*"ok"*/, v12, v13, v14);
    byte_42EB4C6 = 1;
  }
  if ( !result )
    sub_B5D69C(this, result);
  if ( System_String__Equals_44565128(result, (System_String_o *)StringLiteral_21497/*"ok"*/, 0LL) )
  {
    v15 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_string__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v15,
      v5,
      Method_FriendRootComponent__OnClickTabOffered_b__106_1__,
      (const MethodInfo_258B320 *)Method_System_Action_string___ctor__);
    FriendRootComponent__FriendLockRequst((FriendRootComponent_o *)v5, (System_Action_string__o *)v15, v16);
  }
}


void __fastcall FriendRootComponent___OnClickTabOffered_b__106_1(
        FriendRootComponent_o *this,
        System_String_o *res,
        const MethodInfo *method)
{
  __int64 v3; // x3
  FriendRootComponent_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int state; // w8
  struct FriendSearchResultMenu_o *friendSearchResultMenu; // x8
  struct FriendSearchResultMenu_o *v14; // x8
  struct ClassButtonControlComponent_o *v15; // x8
  FriendRootComponent_o *v16; // x0
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x1
  struct ClassButtonControlComponent_o *classButtonControl; // x8

  v5 = this;
  if ( (byte_42EB4C7 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)res, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_21497/*"ok"*/, v6, v7, v8);
    this = (FriendRootComponent_o *)sub_B5D5C4(&StringLiteral_3147/*"CLICK_TAB"*/, v9, v10, v11);
    byte_42EB4C7 = 1;
  }
  if ( !res )
    goto LABEL_25;
  this = (FriendRootComponent_o *)System_String__Equals_44565128(res, (System_String_o *)StringLiteral_21497/*"ok"*/, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    return;
  state = v5->fields.state;
  if ( state <= 9 )
  {
    if ( state != 4 && state != 9 )
      return;
LABEL_18:
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    FriendRootComponent__set_tabKind(v16, 1, v17);
    FriendRootComponent__RefreshTab(v5, v18);
    classButtonControl = v5->fields.classButtonControl;
    if ( classButtonControl )
    {
      classButtonControl->fields.updateEnable = 0;
      this = (FriendRootComponent_o *)v5->fields.myFSM;
      if ( this )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3147/*"CLICK_TAB"*/, 0LL);
        return;
      }
    }
LABEL_25:
    sub_B5D69C(this, res);
  }
  if ( state == 14 || state == 19 )
    goto LABEL_18;
  if ( state == 23 )
  {
    friendSearchResultMenu = v5->fields.friendSearchResultMenu;
    if ( !friendSearchResultMenu )
      goto LABEL_25;
    this = (FriendRootComponent_o *)friendSearchResultMenu->fields.classButtonControl;
    if ( !this )
      goto LABEL_25;
    this = (FriendRootComponent_o *)ClassButtonControlComponent__getChangeCursorPos(
                                      (ClassButtonControlComponent_o *)this,
                                      0LL);
    if ( (_DWORD)this != -1 )
    {
      v14 = v5->fields.friendSearchResultMenu;
      if ( !v14 )
        goto LABEL_25;
      v15 = v14->fields.classButtonControl;
      if ( !v15 )
        goto LABEL_25;
      this = (FriendRootComponent_o *)v5->fields.classButtonControl;
      if ( !this )
        goto LABEL_25;
      ClassButtonControlComponent__setCursor((ClassButtonControlComponent_o *)this, v15->fields.currentCursor, 0LL);
    }
    goto LABEL_18;
  }
}


void __fastcall FriendRootComponent___OnClickTabSearch_b__107_0(
        FriendRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  Il2CppObject *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v15; // x20
  const MethodInfo *v16; // x2

  v5 = (Il2CppObject *)this;
  if ( (byte_42EB4C8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_string___ctor__, (_DWORD)result, (_DWORD)method, v3);
    sub_B5D5C4(&System_Action_string__TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_FriendRootComponent__OnClickTabSearch_b__107_1__, v9, v10, v11);
    this = (FriendRootComponent_o *)sub_B5D5C4(&StringLiteral_21497/*"ok"*/, v12, v13, v14);
    byte_42EB4C8 = 1;
  }
  if ( !result )
    sub_B5D69C(this, result);
  if ( System_String__Equals_44565128(result, (System_String_o *)StringLiteral_21497/*"ok"*/, 0LL) )
  {
    v15 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_string__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v15,
      v5,
      Method_FriendRootComponent__OnClickTabSearch_b__107_1__,
      (const MethodInfo_258B320 *)Method_System_Action_string___ctor__);
    FriendRootComponent__FriendLockRequst((FriendRootComponent_o *)v5, (System_Action_string__o *)v15, v16);
  }
}


void __fastcall FriendRootComponent___OnClickTabSearch_b__107_1(
        FriendRootComponent_o *this,
        System_String_o *res,
        const MethodInfo *method)
{
  __int64 v3; // x3
  FriendRootComponent_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int state; // w8
  FriendRootComponent_o *v13; // x0
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x1
  struct ClassButtonControlComponent_o *classButtonControl; // x8

  v5 = this;
  if ( (byte_42EB4C9 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)res, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_21497/*"ok"*/, v6, v7, v8);
    this = (FriendRootComponent_o *)sub_B5D5C4(&StringLiteral_3147/*"CLICK_TAB"*/, v9, v10, v11);
    byte_42EB4C9 = 1;
  }
  if ( !res )
    goto LABEL_18;
  if ( !System_String__Equals_44565128(res, (System_String_o *)StringLiteral_21497/*"ok"*/, 0LL) )
    return;
  state = v5->fields.state;
  if ( state > 9 )
  {
    if ( (unsigned int)state > 0x17 || ((1 << state) & 0x884000) == 0 )
      return;
    goto LABEL_11;
  }
  if ( state == 4 || state == 9 )
  {
LABEL_11:
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    FriendRootComponent__set_tabKind(v13, 2, v14);
    FriendRootComponent__RefreshTab(v5, v15);
    classButtonControl = v5->fields.classButtonControl;
    if ( classButtonControl )
    {
      classButtonControl->fields.updateEnable = 0;
      this = (FriendRootComponent_o *)v5->fields.myFSM;
      if ( this )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3147/*"CLICK_TAB"*/, 0LL);
        return;
      }
    }
LABEL_18:
    sub_B5D69C(this, res);
  }
}


void __fastcall FriendRootComponent___RequestFollowRemove_b__139_0(
        FriendRootComponent_o *this,
        System_String_o *res,
        const MethodInfo *method)
{
  __int64 v3; // x3
  FriendRootComponent_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  FriendOperationItemListViewItem_o *Item; // x0
  struct OtherUserGameEntity_o *otherUserGameEntity; // x21
  NetworkManager_ResultCallbackFunc_o *v26; // x20

  v5 = this;
  if ( (byte_42EB4CA & 1) == 0 )
  {
    sub_B5D5C4(&Method_FriendRootComponent_EndRequestFollowRemove__, (_DWORD)res, (_DWORD)method, v3);
    sub_B5D5C4(&Method_NetworkManager_getRequest_FollowdRemoveRequest___, v6, v7, v8);
    sub_B5D5C4(&NetworkManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_21497/*"ok"*/, v18, v19, v20);
    this = (FriendRootComponent_o *)sub_B5D5C4(&StringLiteral_11210/*"REQUEST_NG"*/, v21, v22, v23);
    byte_42EB4CA = 1;
  }
  if ( !res )
    goto LABEL_16;
  if ( System_String__Equals_44565128(res, (System_String_o *)StringLiteral_21497/*"ok"*/, 0LL) )
  {
    this = (FriendRootComponent_o *)v5->fields.operationItemListViewManager;
    if ( !this )
      goto LABEL_16;
    Item = FriendOperationItemListViewManager__GetItem(
             (FriendOperationItemListViewManager_o *)this,
             v5->fields.selectItemNum,
             0LL);
    if ( Item )
    {
      otherUserGameEntity = Item->fields.otherUserGameEntity;
      if ( otherUserGameEntity )
      {
        this = (FriendRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( this )
        {
          CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)this, 0, 0LL);
          v26 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
          NetworkManager_ResultCallbackFunc___ctor(
            v26,
            (Il2CppObject *)v5,
            Method_FriendRootComponent_EndRequestFollowRemove__,
            0LL);
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          this = (FriendRootComponent_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                            v26,
                                            (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_FollowdRemoveRequest___);
          if ( this )
          {
            FollowdRemoveRequest__beginRequest((FollowdRemoveRequest_o *)this, otherUserGameEntity->fields.userId, 0LL);
            return;
          }
        }
LABEL_16:
        sub_B5D69C(this, res);
      }
    }
  }
  this = (FriendRootComponent_o *)v5->fields.myFSM;
  if ( !this )
    goto LABEL_16;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11210/*"REQUEST_NG"*/, 0LL);
}


void __fastcall FriendRootComponent___RequestFriendOffer2_b__84_0(
        FriendRootComponent_o *this,
        System_String_o *res,
        const MethodInfo *method)
{
  __int64 v3; // x3
  FriendRootComponent_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  FriendOperationItemListViewItem_o *Item; // x0
  struct OtherUserGameEntity_o *otherUserGameEntity; // x21
  NetworkManager_ResultCallbackFunc_o *v23; // x20

  v5 = this;
  if ( (byte_42EB4BE & 1) == 0 )
  {
    sub_B5D5C4(&Method_FriendRootComponent_EndRequestFriend__, (_DWORD)res, (_DWORD)method, v3);
    sub_B5D5C4(&Method_NetworkManager_getRequest_FriendOfferRequest___, v6, v7, v8);
    sub_B5D5C4(&NetworkManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_21497/*"ok"*/, v15, v16, v17);
    this = (FriendRootComponent_o *)sub_B5D5C4(&StringLiteral_11210/*"REQUEST_NG"*/, v18, v19, v20);
    byte_42EB4BE = 1;
  }
  if ( !res )
    goto LABEL_15;
  if ( System_String__Equals_44565128(res, (System_String_o *)StringLiteral_21497/*"ok"*/, 0LL) )
  {
    this = (FriendRootComponent_o *)v5->fields.operationItemListViewManager;
    if ( !this )
      goto LABEL_15;
    Item = FriendOperationItemListViewManager__GetItem(
             (FriendOperationItemListViewManager_o *)this,
             v5->fields.selectItemNum,
             0LL);
    if ( Item )
    {
      otherUserGameEntity = Item->fields.otherUserGameEntity;
      if ( otherUserGameEntity )
      {
        v23 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
        NetworkManager_ResultCallbackFunc___ctor(
          v23,
          (Il2CppObject *)v5,
          Method_FriendRootComponent_EndRequestFriend__,
          0LL);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        this = (FriendRootComponent_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                          v23,
                                          (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_FriendOfferRequest___);
        if ( this )
        {
          FriendOfferRequest__beginRequest((FriendOfferRequest_o *)this, otherUserGameEntity->fields.userId, 0LL);
          return;
        }
LABEL_15:
        sub_B5D69C(this, res);
      }
    }
  }
  this = (FriendRootComponent_o *)v5->fields.myFSM;
  if ( !this )
    goto LABEL_15;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11210/*"REQUEST_NG"*/, 0LL);
}


void __fastcall FriendRootComponent___RequestFriendRemove_b__88_0(
        FriendRootComponent_o *this,
        System_String_o *res,
        const MethodInfo *method)
{
  __int64 v3; // x3
  FriendRootComponent_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  FriendOperationItemListViewItem_o *Item; // x0
  struct OtherUserGameEntity_o *otherUserGameEntity; // x21
  NetworkManager_ResultCallbackFunc_o *v26; // x20
  const MethodInfo *v27; // x2

  v5 = this;
  if ( (byte_42EB4BF & 1) == 0 )
  {
    sub_B5D5C4(&Method_FriendRootComponent_EndRequestFriend__, (_DWORD)res, (_DWORD)method, v3);
    sub_B5D5C4(&Method_NetworkManager_getRequest_FriendRemoveRequest___, v6, v7, v8);
    sub_B5D5C4(&NetworkManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_21497/*"ok"*/, v18, v19, v20);
    this = (FriendRootComponent_o *)sub_B5D5C4(&StringLiteral_11210/*"REQUEST_NG"*/, v21, v22, v23);
    byte_42EB4BF = 1;
  }
  if ( !res )
    goto LABEL_16;
  if ( System_String__Equals_44565128(res, (System_String_o *)StringLiteral_21497/*"ok"*/, 0LL) )
  {
    this = (FriendRootComponent_o *)v5->fields.operationItemListViewManager;
    if ( !this )
      goto LABEL_16;
    Item = FriendOperationItemListViewManager__GetItem(
             (FriendOperationItemListViewManager_o *)this,
             v5->fields.selectItemNum,
             0LL);
    if ( Item )
    {
      otherUserGameEntity = Item->fields.otherUserGameEntity;
      if ( otherUserGameEntity )
      {
        this = (FriendRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( this )
        {
          CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)this, 0, 0LL);
          v26 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
          NetworkManager_ResultCallbackFunc___ctor(
            v26,
            (Il2CppObject *)v5,
            Method_FriendRootComponent_EndRequestFriend__,
            0LL);
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          this = (FriendRootComponent_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                            v26,
                                            (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_FriendRemoveRequest___);
          if ( this )
          {
            FriendRemoveRequest__beginRequest((FriendRemoveRequest_o *)this, otherUserGameEntity->fields.userId, v27);
            return;
          }
        }
LABEL_16:
        sub_B5D69C(this, res);
      }
    }
  }
  this = (FriendRootComponent_o *)v5->fields.myFSM;
  if ( !this )
    goto LABEL_16;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11210/*"REQUEST_NG"*/, 0LL);
}


void __fastcall FriendRootComponent___afterMainMenubarSelect_b__97_0(
        FriendRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  FriendRootComponent_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v18; // x20
  const MethodInfo *v19; // x2

  v5 = this;
  if ( (byte_42EB4C2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_string___ctor__, (_DWORD)result, (_DWORD)method, v3);
    sub_B5D5C4(&System_Action_string__TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_FriendRootComponent__afterMainMenubarSelect_b__97_1__, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_21497/*"ok"*/, v12, v13, v14);
    this = (FriendRootComponent_o *)sub_B5D5C4(&StringLiteral_11210/*"REQUEST_NG"*/, v15, v16, v17);
    byte_42EB4C2 = 1;
  }
  if ( !result )
    goto LABEL_8;
  if ( System_String__Equals_44565128(result, (System_String_o *)StringLiteral_21497/*"ok"*/, 0LL) )
  {
    v18 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_string__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v18,
      (Il2CppObject *)v5,
      Method_FriendRootComponent__afterMainMenubarSelect_b__97_1__,
      (const MethodInfo_258B320 *)Method_System_Action_string___ctor__);
    FriendRootComponent__FriendLockRequst(v5, (System_Action_string__o *)v18, v19);
    return;
  }
  this = (FriendRootComponent_o *)v5->fields.myFSM;
  if ( !this )
LABEL_8:
    sub_B5D69C(this, result);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11210/*"REQUEST_NG"*/, 0LL);
}


void __fastcall FriendRootComponent___afterMainMenubarSelect_b__97_1(
        FriendRootComponent_o *this,
        System_String_o *res,
        const MethodInfo *method)
{
  __int64 v3; // x3
  FriendRootComponent_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  PlayMakerFSM_o *myFSM; // x8
  __int64 *v13; // x9

  v5 = this;
  if ( (byte_42EB4C3 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_11212/*"REQUEST_OK"*/, (_DWORD)res, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_21497/*"ok"*/, v6, v7, v8);
    this = (FriendRootComponent_o *)sub_B5D5C4(&StringLiteral_11210/*"REQUEST_NG"*/, v9, v10, v11);
    byte_42EB4C3 = 1;
  }
  if ( !res
    || (this = (FriendRootComponent_o *)System_String__Equals_44565128(res, (System_String_o *)StringLiteral_21497/*"ok"*/, 0LL),
        (myFSM = v5->fields.myFSM) == 0LL) )
  {
    sub_B5D69C(this, res);
  }
  if ( ((unsigned __int8)this & 1) != 0 )
    v13 = &StringLiteral_11212/*"REQUEST_OK"*/;
  else
    v13 = &StringLiteral_11210/*"REQUEST_NG"*/;
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)*v13, 0LL);
}


void __fastcall FriendRootComponent__afterMainMenubarSelect(FriendRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  FriendRootComponent_messageRequestCallback_o *v8; // x20
  const MethodInfo *v9; // x2

  if ( (byte_42EB494 & 1) == 0 )
  {
    sub_B5D5C4(&Method_FriendRootComponent__afterMainMenubarSelect_b__97_0__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&FriendRootComponent_messageRequestCallback_TypeInfo, v5, v6, v7);
    byte_42EB494 = 1;
  }
  v8 = (FriendRootComponent_messageRequestCallback_o *)sub_B5D694(FriendRootComponent_messageRequestCallback_TypeInfo);
  FriendRootComponent_messageRequestCallback___ctor(
    v8,
    (Il2CppObject *)this,
    Method_FriendRootComponent__afterMainMenubarSelect_b__97_0__,
    0LL);
  FriendRootComponent__messageDispChangeRequest(this, v8, v9);
}


void __fastcall FriendRootComponent__beginFinish(FriendRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  FriendRootComponent_o *v4; // x19
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x8
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  v4 = this;
  if ( (byte_42EB464 & 1) == 0 )
  {
    this = (FriendRootComponent_o *)sub_B5D5C4(&RandomLimitCountManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB464 = 1;
  }
  operationItemListViewManager = v4->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    goto LABEL_15;
  operationItemListViewManager->fields._isMessageApply_k__BackingField = 0;
  this = (FriendRootComponent_o *)v4->fields.operationItemListViewManager;
  if ( !this )
    goto LABEL_15;
  FriendOperationItemListViewManager__DestroyList((FriendOperationItemListViewManager_o *)this, 0LL);
  this = (FriendRootComponent_o *)v4->fields.operationConfirmMenu;
  if ( !this )
    goto LABEL_15;
  FriendOperationConfirmMenu__Init((FriendOperationConfirmMenu_o *)this, 0LL);
  this = (FriendRootComponent_o *)v4->fields.friendSearchMenu;
  if ( !this
    || (FriendSearchMenu__Init((FriendSearchMenu_o *)this, method),
        (this = (FriendRootComponent_o *)v4->fields.friendSearchResultMenu) == 0LL)
    || (FriendSearchResultMenu__Init((FriendSearchResultMenu_o *)this, method),
        (this = (FriendRootComponent_o *)v4->fields.friendWarningDialog) == 0LL)
    || (FriendWarningDialog__Init((FriendWarningDialog_o *)this, method),
        (this = (FriendRootComponent_o *)v4->fields.operationItemListViewManager) == 0LL)
    || (this = (FriendRootComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL )
  {
LABEL_15:
    sub_B5D69C(this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  v4->fields.state = 0;
  v4->fields.selectFriendEntity = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&v4->fields.selectFriendEntity, 0LL, v6, v7, v8, v9, v10, v11);
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  RandomLimitCountManager__set_EnableRandomLimitCount(0, 0LL);
}


void __fastcall FriendRootComponent__beginInitialize(FriendRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  const MethodInfo *v11; // x1
  __int64 v12; // x1
  UnityEngine_Component_o *bgTxtSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  ClassButtonControlComponent_o *classButtonControl; // x20
  ClassButtonControlComponent_CallbackFunc_o *v16; // x21

  if ( (byte_42EB460 & 1) == 0 )
  {
    sub_B5D5C4(&ClassButtonControlComponent_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_FriendRootComponent_changeClass__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v8, v9, v10);
    byte_42EB460 = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 7, 39, 0LL);
  FriendRootComponent__CheckHelpUI(this, v11);
  bgTxtSprite = (UnityEngine_Component_o *)this->fields.bgTxtSprite;
  if ( !bgTxtSprite )
    goto LABEL_9;
  gameObject = UnityEngine_Component__get_gameObject(bgTxtSprite, 0LL);
  bgTxtSprite = (UnityEngine_Component_o *)BgTxtManager__IsActiveBgTxt(0LL);
  if ( !gameObject )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)bgTxtSprite & 1, 0LL);
  classButtonControl = this->fields.classButtonControl;
  v16 = (ClassButtonControlComponent_CallbackFunc_o *)sub_B5D694(ClassButtonControlComponent_CallbackFunc_TypeInfo);
  ClassButtonControlComponent_CallbackFunc___ctor(
    v16,
    (Il2CppObject *)this,
    Method_FriendRootComponent_changeClass__,
    0LL);
  if ( !classButtonControl
    || (ClassButtonControlComponent__init(classButtonControl, v16, 0, 0, 0, 0LL),
        (bgTxtSprite = (UnityEngine_Component_o *)this->fields.operationItemListViewManager) == 0LL)
    || (FriendOperationItemListViewManager__SetupClassBoardInfo(
          (FriendOperationItemListViewManager_o *)bgTxtSprite,
          0LL),
        (bgTxtSprite = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
LABEL_9:
    sub_B5D69C(bgTxtSprite, v12);
  }
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)bgTxtSprite, (SceneRootComponent_o *)this, 0LL);
}


void __fastcall FriendRootComponent__beginResume(
        FriendRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  __int64 v12; // x10
  FriendOperationItemListViewManager_o *Instance; // x0
  __int64 v14; // x1
  CommonUI_o *v15; // x20
  const MethodInfo *v16; // x1

  if ( (byte_42EB465 & 1) == 0 )
  {
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, (_DWORD)data, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7, v8);
    sub_B5D5C4(&SupportInfoJump_TypeInfo, v9, v10, v11);
    byte_42EB465 = 1;
  }
  if ( data
    && (v12 = *(&SupportInfoJump_TypeInfo->_2.bitflags2 + 1), *(&data->klass->_2.bitflags2 + 1) >= (unsigned int)v12)
    && (SupportInfoJump_c *)data->klass->_2.typeHierarchy[v12 - 1] == SupportInfoJump_TypeInfo )
  {
    this->fields.isReturnSupport = 1;
    Instance = (FriendOperationItemListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v15 = (CommonUI_o *)Instance;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    }
    if ( !v15
      || (CommonUI__maskFadein(v15, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL),
          FriendRootComponent__RefreshTab(this, v16),
          (Instance = this->fields.operationItemListViewManager) == 0LL) )
    {
      sub_B5D69C(Instance, v14);
    }
    FriendOperationItemListViewManager__SetMode_31317684(Instance, 2, 0LL);
    SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 7, 39, 0LL);
    MainMenuBar__setMenuActive(1, 0LL, 0LL);
    SceneRootComponent__sendMessageStartUp((SceneRootComponent_o *)this, 0LL);
  }
  else
  {
    SceneRootComponent__beginResume_17513312((SceneRootComponent_o *)this, 0LL);
    this->fields.isReturnSupport = 0;
  }
}


void __fastcall FriendRootComponent__beginStartUp(FriendRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
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
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  System_String_o *MainBgmName; // x20
  __int64 v24; // x1
  TitleInfoControl_o *titleInfo; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  NetworkManager_ResultCallbackFunc_o *v32; // x20

  if ( (byte_42EB461 & 1) == 0 )
  {
    sub_B5D5C4(&BgmManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_FriendRootComponent_EndFriendRequest__, v5, v6, v7);
    sub_B5D5C4(&Method_NetworkManager_getRequest_FriendTopRequest___, v8, v9, v10);
    sub_B5D5C4(&NetworkManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&RandomLimitCountManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&SoundManager_TypeInfo, v20, v21, v22);
    byte_42EB461 = 1;
  }
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  RandomLimitCountManager__set_EnableRandomLimitCount(1, 0LL);
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  MainBgmName = BgmManager__GetMainBgmName(0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm(MainBgmName, 0LL);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_19;
  TitleInfoControl__setTitleInfo(titleInfo, this->fields.myFSM, 1, 0LL, 39, 0LL);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_19;
  TitleInfoControl__setBackBtnSprite_18313300(titleInfo, 1, 0, 0, 0LL);
  this->fields.state = 0;
  this->fields.currentModeKind = 0;
  this->fields.selectFriendEntity = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.selectFriendEntity, 0LL, v26, v27, v28, v29, v30, v31);
  v32 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v32,
    (Il2CppObject *)this,
    Method_FriendRootComponent_EndFriendRequest__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  titleInfo = (TitleInfoControl_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                      v32,
                                      (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_FriendTopRequest___);
  if ( !titleInfo )
LABEL_19:
    sub_B5D69C(titleInfo, v24);
  RequestBase__beginRequest((RequestBase_o *)titleInfo, 0LL);
}


void __fastcall FriendRootComponent__changeClass(
        FriendRootComponent_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0

  if ( (byte_42EB49E & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, classPos, (_DWORD)method, v3);
    byte_42EB49E = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    sub_B5D69C(0LL, v6);
  FriendOperationItemListViewManager__SetClassId(operationItemListViewManager, classPos, 0LL);
}


int32_t __fastcall FriendRootComponent__get_tabKind(FriendRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  FriendRootComponent_c *v4; // x0

  if ( (byte_42EB45F & 1) == 0 )
  {
    sub_B5D5C4(&FriendRootComponent_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB45F = 1;
  }
  v4 = FriendRootComponent_TypeInfo;
  if ( (BYTE3(FriendRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FriendRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendRootComponent_TypeInfo);
    v4 = FriendRootComponent_TypeInfo;
  }
  return v4->static_fields->tabKindSave;
}


void __fastcall FriendRootComponent__messageDispChangeRequest(
        FriendRootComponent_o *this,
        FriendRootComponent_messageRequestCallback_o *callback,
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
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  __int64 v33; // x20
  ListViewManager_o *operationItemListViewManager; // x0
  int64_t items; // x1
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  FriendRootComponent_messageRequestCallback_o **v42; // x22
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  int32_t ItemSum; // w23
  System_Collections_Generic_List_long__o *v50; // x21
  System_Collections_Generic_List_long__o *v51; // x22
  int32_t v52; // w24
  struct System_Collections_Generic_List_UIDragDropListViewSurface__o *dropList; // x8
  const MethodInfo_3047788 *v54; // x2
  System_Collections_Generic_List_long__o *v55; // x0
  NetworkManager_ResultCallbackFunc_o *v56; // x19
  FriendMessageHideSyncRequest_o *v57; // x19
  System_Int64_array *v58; // x20

  if ( (byte_42EB49C & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__Add__, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__ToArray__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Collections_Generic_List_long__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_NetworkManager_getRequest_FriendMessageHideSyncRequest___, v15, v16, v17);
    sub_B5D5C4(&NetworkManager_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_FriendRootComponent___c__DisplayClass108_0__messageDispChangeRequest_b__0__, v24, v25, v26);
    sub_B5D5C4(&FriendRootComponent___c__DisplayClass108_0_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_21497/*"ok"*/, v30, v31, v32);
    byte_42EB49C = 1;
  }
  v33 = sub_B5D694(FriendRootComponent___c__DisplayClass108_0_TypeInfo);
  FriendRootComponent___c__DisplayClass108_0___ctor((FriendRootComponent___c__DisplayClass108_0_o *)v33, 0LL);
  if ( !v33 )
    goto LABEL_29;
  *(_QWORD *)(v33 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v33 + 16), (System_Int32_array **)this, v36, v37, v38, v39, v40, v41);
  *(_QWORD *)(v33 + 24) = callback;
  v42 = (FriendRootComponent_messageRequestCallback_o **)(v33 + 24);
  sub_B5D560((BattleServantConfConponent_o *)(v33 + 24), (System_Int32_array **)callback, v43, v44, v45, v46, v47, v48);
  operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    goto LABEL_29;
  if ( LOBYTE(operationItemListViewManager[1].fields.sortKindLabel) )
  {
    ItemSum = ListViewManager__get_ItemSum(operationItemListViewManager, 0LL);
    v50 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v50,
      (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
    v51 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v51,
      (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
    if ( ItemSum >= 1 )
    {
      v52 = 0;
      while ( 1 )
      {
        operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
        if ( !operationItemListViewManager )
          break;
        operationItemListViewManager = (ListViewManager_o *)FriendOperationItemListViewManager__GetItem(
                                                              (FriendOperationItemListViewManager_o *)operationItemListViewManager,
                                                              v52,
                                                              0LL);
        if ( !operationItemListViewManager )
          break;
        if ( LODWORD(operationItemListViewManager->fields.dragParentObject) == 3 )
        {
          dropList = operationItemListViewManager->fields.dropList;
          if ( !dropList )
            break;
          items = (int64_t)dropList->fields._items;
          if ( LOBYTE(operationItemListViewManager->fields.sort) )
          {
            if ( !v50 )
              break;
            v54 = (const MethodInfo_3047788 *)Method_System_Collections_Generic_List_long__Add__;
            v55 = v50;
          }
          else
          {
            if ( !v51 )
              break;
            v54 = (const MethodInfo_3047788 *)Method_System_Collections_Generic_List_long__Add__;
            v55 = v51;
          }
          System_Collections_Generic_List_long___Add(v55, items, v54);
        }
        if ( ++v52 >= ItemSum )
          goto LABEL_19;
      }
LABEL_29:
      sub_B5D69C(operationItemListViewManager, items);
    }
LABEL_19:
    v56 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v56,
      (Il2CppObject *)v33,
      Method_FriendRootComponent___c__DisplayClass108_0__messageDispChangeRequest_b__0__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    operationItemListViewManager = (ListViewManager_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                          v56,
                                                          (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_FriendMessageHideSyncRequest___);
    if ( !v51 )
      goto LABEL_29;
    v57 = (FriendMessageHideSyncRequest_o *)operationItemListViewManager;
    operationItemListViewManager = (ListViewManager_o *)System_Collections_Generic_List_long___ToArray(
                                                          v51,
                                                          (const MethodInfo_3049894 *)Method_System_Collections_Generic_List_long__ToArray__);
    if ( !v50 )
      goto LABEL_29;
    v58 = (System_Int64_array *)operationItemListViewManager;
    operationItemListViewManager = (ListViewManager_o *)System_Collections_Generic_List_long___ToArray(
                                                          v50,
                                                          (const MethodInfo_3049894 *)Method_System_Collections_Generic_List_long__ToArray__);
    if ( !v57 )
      goto LABEL_29;
    FriendMessageHideSyncRequest__beginRequest(v57, v58, (System_Int64_array *)operationItemListViewManager, 0LL);
  }
  else if ( *v42 )
  {
    FriendRootComponent_messageRequestCallback__Invoke(*v42, (System_String_o *)StringLiteral_21497/*"ok"*/, 0LL);
  }
}


void __fastcall FriendRootComponent__set_tabKind(FriendRootComponent_o *this, int32_t value, const MethodInfo *method)
{
  __int64 v3; // x3
  FriendRootComponent_c *v5; // x0

  if ( (byte_42EB45E & 1) == 0 )
  {
    sub_B5D5C4(&FriendRootComponent_TypeInfo, value, (_DWORD)method, v3);
    byte_42EB45E = 1;
  }
  v5 = FriendRootComponent_TypeInfo;
  if ( (BYTE3(FriendRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FriendRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendRootComponent_TypeInfo);
    v5 = FriendRootComponent_TypeInfo;
  }
  v5->static_fields->tabKindSave = value;
}


void __fastcall FriendRootComponent___c__DisplayClass108_0___ctor(
        FriendRootComponent___c__DisplayClass108_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall FriendRootComponent___c__DisplayClass108_0___messageDispChangeRequest_b__0(
        FriendRootComponent___c__DisplayClass108_0_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  struct FriendRootComponent_o *_4__this; // x8
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x8
  FriendRootComponent_messageRequestCallback_o *callback; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this || (operationItemListViewManager = _4__this->fields.operationItemListViewManager) == 0LL )
    sub_B5D69C(this, result);
  operationItemListViewManager->fields._isMessageApply_k__BackingField = 0;
  callback = this->fields.callback;
  if ( callback )
    FriendRootComponent_messageRequestCallback__Invoke(callback, result, method);
}


void __fastcall FriendRootComponent___c__DisplayClass109_0___ctor(
        FriendRootComponent___c__DisplayClass109_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall FriendRootComponent___c__DisplayClass109_0___FriendLockRequst_b__0(
        FriendRootComponent___c__DisplayClass109_0_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  __int64 v10; // x1
  int32_t v11; // w21
  struct FriendRootComponent_o *_4__this; // x8

  if ( (byte_42E56E6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_ActionExtensions_Call_string___, (_DWORD)result, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_21497/*"ok"*/, v6, v7, v8);
    byte_42E56E6 = 1;
  }
  operationItemListViewManager = (FriendOperationItemListViewManager_o *)System_String__op_Equality(
                                                                           result,
                                                                           (System_String_o *)StringLiteral_21497/*"ok"*/,
                                                                           0LL);
  if ( ((unsigned __int8)operationItemListViewManager & 1) != 0 && this->fields.sum >= 1 )
  {
    v11 = 0;
    do
    {
      _4__this = this->fields.__4__this;
      if ( !_4__this || (operationItemListViewManager = _4__this->fields.operationItemListViewManager) == 0LL )
        sub_B5D69C(operationItemListViewManager, v10);
      operationItemListViewManager = (FriendOperationItemListViewManager_o *)FriendOperationItemListViewManager__GetItem(
                                                                               operationItemListViewManager,
                                                                               v11,
                                                                               0LL);
      if ( operationItemListViewManager )
        FriendOperationItemListViewItem__RefreshLockInfo(
          (FriendOperationItemListViewItem_o *)operationItemListViewManager,
          0LL);
      ++v11;
    }
    while ( v11 < this->fields.sum );
  }
  ActionExtensions__Call_BlankEarth_QAARotateEarthResponse_(
    (System_Action_T__o *)this->fields.onFinishedRequest,
    (BlankEarth_QAARotateEarthResponse_o *)result,
    (const MethodInfo_2CECD58 *)Method_ActionExtensions_Call_string___);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendRootComponent_messageRequestCallback___ctor(
        FriendRootComponent_messageRequestCallback_o *this,
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
  sub_B5D560(p_method);
}


System_IAsyncResult_o *__fastcall FriendRootComponent_messageRequestCallback__BeginInvoke(
        FriendRootComponent_messageRequestCallback_o *this,
        System_String_o *result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v6[2]; // [xsp+0h] [xbp-10h] BYREF

  v6[0] = (__int64)result;
  v6[1] = 0LL;
  return (System_IAsyncResult_o *)sub_B5D568(this, v6, callback, object);
}


void __fastcall FriendRootComponent_messageRequestCallback__EndInvoke(
        FriendRootComponent_messageRequestCallback_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
}


void __fastcall FriendRootComponent_messageRequestCallback__Invoke(
        FriendRootComponent_messageRequestCallback_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  FriendRootComponent_messageRequestCallback_o **v7; // x25
  __int64 i; // x26
  unsigned int v9; // w22
  __int64 class_0; // x0
  __int64 v11; // x3
  System_String_c *v12; // x8
  unsigned __int64 v13; // x10
  int32_t *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  unsigned int v17; // w23
  __int64 v18; // x0
  __int64 v19; // x3
  __int64 v20; // x8
  unsigned __int64 v21; // x10
  _DWORD *v22; // x11
  __int64 v23; // x0
  __int64 v24; // x0
  __int64 v25; // x0
  void (__fastcall **v26)(System_String_o *, _QWORD); // x0
  __int64 v27; // x0
  void (__fastcall **v28)(__int64 *, System_String_o *, _QWORD); // x0
  FriendRootComponent_messageRequestCallback_o *v29; // x8
  __int64 v30; // x21
  __int64 *v31; // x22
  void (__fastcall *v32)(System_String_o *, __int64); // x23
  char v33; // w0
  int v34; // w8
  char v35; // w23
  char v36; // w0
  __int64 v37; // x3
  __int64 v38; // x8
  __int64 v39; // x1
  __int64 v40; // x2
  unsigned __int64 v41; // x10
  _DWORD *v42; // x11
  char v43; // w22
  char v44; // w0
  __int64 v45; // x3
  System_String_c *klass; // x8
  __int64 v47; // x1
  __int64 v48; // x2
  unsigned __int64 v49; // x10
  int32_t *p_offset; // x11
  FriendRootComponent_messageRequestCallback_o *v51; // [xsp+8h] [xbp-48h] BYREF

  v51 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v51;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (FriendRootComponent_messageRequestCallback_o **)(v3 + 32);
LABEL_5:
    for ( i = 0LL; i != v6; ++i )
    {
      v29 = v7[i];
      v31 = *(__int64 **)&v29->fields.method;
      v30 = *(_QWORD *)&v29->fields.extra_arg;
      v32 = *(void (__fastcall **)(System_String_o *, __int64))&v29->fields.method_ptr;
      if ( *(__int16 *)(v30 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v29->fields.extra_arg, result, method);
      v33 = sub_B5D5F4(v30);
      v34 = *(unsigned __int8 *)(v30 + 74);
      if ( (v33 & 1) != 0 )
      {
        if ( v34 == 1 )
          goto LABEL_58;
      }
      else
      {
        if ( v34 != 1 )
        {
          if ( *(__int16 *)(v30 + 72) != -1 && this->fields.m_target )
          {
            v43 = sub_B5D5EC(v30);
            v44 = sub_B5D9F0(v30);
            if ( (v43 & 1) != 0 )
            {
              if ( (v44 & 1) != 0 )
              {
                klass = result->klass;
                v47 = *(_QWORD *)(v30 + 24);
                v48 = *(unsigned __int16 *)(v30 + 72);
                if ( *(_WORD *)&result->klass->_2.bitflags1 )
                {
                  v49 = 0LL;
                  p_offset = &klass->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)p_offset - 1) != v47 )
                  {
                    ++v49;
                    p_offset += 4;
                    if ( v49 >= *(unsigned __int16 *)&result->klass->_2.bitflags1 )
                      goto LABEL_57;
                  }
                  v25 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset + 2 * (int)v48);
                }
                else
                {
LABEL_57:
                  v25 = sub_AF54C0(result, v47, v48, v45);
                }
                v16 = *(_QWORD *)(v25 + 8);
              }
              else
              {
                v16 = *((_QWORD *)&result->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v30 + 72));
              }
              v26 = (void (__fastcall **)(System_String_o *, _QWORD))sub_B5D674(v16, v30);
              (*v26)(result, v26);
            }
            else
            {
              v9 = *(unsigned __int16 *)(v30 + 72);
              if ( (v44 & 1) != 0 )
              {
                class_0 = j_il2cpp_method_get_class_0(v30);
                v12 = result->klass;
                if ( *(_WORD *)&result->klass->_2.bitflags1 )
                {
                  v13 = 0LL;
                  v14 = &v12->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)v14 - 1) != class_0 )
                  {
                    ++v13;
                    v14 += 4;
                    if ( v13 >= *(unsigned __int16 *)&result->klass->_2.bitflags1 )
                      goto LABEL_11;
                  }
                  v15 = (__int64)(&v12->vtable._0_Equals.method + 2 * (int)(*v14 + v9));
                }
                else
                {
LABEL_11:
                  v15 = sub_AF54C0(result, class_0, v9, v11);
                }
                (*(void (__fastcall **)(System_String_o *, _QWORD))v15)(result, *(_QWORD *)(v15 + 8));
              }
              else
              {
                (*((void (__fastcall **)(System_String_o *, _QWORD))&result->klass->vtable._0_Equals.method
                 + 2 * *(unsigned __int16 *)(v30 + 72)))(
                  result,
                  *((_QWORD *)&result->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v30 + 72)));
              }
            }
            continue;
          }
LABEL_58:
          v32(result, v30);
          continue;
        }
        if ( !v31 )
          goto LABEL_58;
        if ( *(__int16 *)(v30 + 72) != -1 && (*(_BYTE *)(*v31 + 277) & 1) == 0 && this->fields.m_target )
        {
          v35 = sub_B5D5EC(v30);
          v36 = sub_B5D9F0(v30);
          if ( (v35 & 1) != 0 )
          {
            if ( (v36 & 1) != 0 )
            {
              v38 = *v31;
              v39 = *(_QWORD *)(v30 + 24);
              v40 = *(unsigned __int16 *)(v30 + 72);
              if ( *(_WORD *)(*v31 + 298) )
              {
                v41 = 0LL;
                v42 = (_DWORD *)(*(_QWORD *)(v38 + 176) + 8LL);
                while ( *((_QWORD *)v42 - 1) != v39 )
                {
                  ++v41;
                  v42 += 4;
                  if ( v41 >= *(unsigned __int16 *)(*v31 + 298) )
                    goto LABEL_48;
                }
                v27 = v38 + 16LL * (*v42 + (int)v40) + 312;
              }
              else
              {
LABEL_48:
                v27 = sub_AF54C0(v31, v39, v40, v37);
              }
              v24 = *(_QWORD *)(v27 + 8);
            }
            else
            {
              v24 = *(_QWORD *)(*v31 + 16LL * *(unsigned __int16 *)(v30 + 72) + 320);
            }
            v28 = (void (__fastcall **)(__int64 *, System_String_o *, _QWORD))sub_B5D674(v24, v30);
            (*v28)(v31, result, v28);
          }
          else
          {
            v17 = *(unsigned __int16 *)(v30 + 72);
            if ( (v36 & 1) != 0 )
            {
              v18 = j_il2cpp_method_get_class_0(v30);
              v20 = *v31;
              if ( *(_WORD *)(*v31 + 298) )
              {
                v21 = 0LL;
                v22 = (_DWORD *)(*(_QWORD *)(v20 + 176) + 8LL);
                while ( *((_QWORD *)v22 - 1) != v18 )
                {
                  ++v21;
                  v22 += 4;
                  if ( v21 >= *(unsigned __int16 *)(*v31 + 298) )
                    goto LABEL_19;
                }
                v23 = v20 + 16LL * (int)(*v22 + v17) + 312;
              }
              else
              {
LABEL_19:
                v23 = sub_AF54C0(v31, v18, v17, v19);
              }
              (*(void (__fastcall **)(__int64 *, System_String_o *, _QWORD))v23)(v31, result, *(_QWORD *)(v23 + 8));
            }
            else
            {
              (*(void (__fastcall **)(__int64 *, System_String_o *, _QWORD))(*v31
                                                                           + 16LL * *(unsigned __int16 *)(v30 + 72)
                                                                           + 312))(
                v31,
                result,
                *(_QWORD *)(*v31 + 16LL * *(unsigned __int16 *)(v30 + 72) + 320));
            }
          }
          continue;
        }
      }
      ((void (__fastcall *)(__int64 *, System_String_o *, __int64))v32)(v31, result, v30);
    }
  }
}