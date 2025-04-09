void __fastcall FriendRootComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_49B5EC0 & 1) == 0 )
  {
    sub_1B4CF90(&FriendRootComponent_TypeInfo, v1);
    byte_49B5EC0 = 1;
  }
  FriendRootComponent_TypeInfo->static_fields->tabKindSave = 3;
}


void __fastcall FriendRootComponent___ctor(FriendRootComponent_o *this, const MethodInfo *method)
{
  this->fields.jumpTabKind = 3;
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0LL);
}


void __fastcall FriendRootComponent__BackFollowConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t state; // w8
  CommonUI_o *Instance; // x0
  const MethodInfo *v6; // x1

  if ( (byte_49B5EB1 & 1) == 0 )
  {
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_49B5EB1 = 1;
  }
  state = this->fields.state;
  switch ( state )
  {
    case ',':
      this->fields.state = 23;
      Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        CommonUI__CloseNotificationDialog(Instance, 0LL);
        goto LABEL_12;
      }
LABEL_14:
      sub_1B4D1EC(Instance, method);
    case '+':
      Instance = (CommonUI_o *)this->fields.friendWarningDialog;
      this->fields.state = 23;
      if ( Instance )
      {
        FriendWarningDialog__Close((FriendWarningDialog_o *)Instance, 0LL);
        goto LABEL_12;
      }
      goto LABEL_14;
    case '*':
      Instance = (CommonUI_o *)this->fields.operationConfirmMenu;
      this->fields.state = 23;
      if ( Instance )
      {
        FriendOperationConfirmMenu__Close_30941692((FriendOperationConfirmMenu_o *)Instance, 0LL, v2);
LABEL_12:
        FriendRootComponent__StartSearchInput(this, v6);
        return;
      }
      goto LABEL_14;
  }
}


void __fastcall FriendRootComponent__BackFollowOfferConfirmRefreshShowSearch(
        FriendRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  FriendSearchMenu_o *friendSearchMenu; // x20
  FriendSearchMenu_CallbackFunc_o *v8; // x21
  const MethodInfo *v9; // x1

  if ( (byte_49B5EB6 & 1) == 0 )
  {
    sub_1B4CF90(&FriendSearchMenu_CallbackFunc_TypeInfo, method);
    sub_1B4CF90(&Method_FriendRootComponent_OnSelectSearchFriend__, v3);
    byte_49B5EB6 = 1;
  }
  if ( this->fields.state == 42 )
  {
    this->fields.state = 23;
    this->fields.selectFriendCode = 0LL;
    sub_1B4CF34(&this->fields.selectFriendCode);
    this->fields.selectFriendEntity = 0LL;
    sub_1B4CF34(&this->fields.selectFriendEntity);
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close_30941692(operationConfirmMenu, 0LL, v5),
          (operationConfirmMenu = (FriendOperationConfirmMenu_o *)this->fields.friendSearchResultMenu) == 0LL)
      || (FriendSearchResultMenu__Close((FriendSearchResultMenu_o *)operationConfirmMenu, 0LL),
          friendSearchMenu = this->fields.friendSearchMenu,
          v8 = (FriendSearchMenu_CallbackFunc_o *)sub_1B4D1DC(FriendSearchMenu_CallbackFunc_TypeInfo),
          FriendSearchMenu_CallbackFunc___ctor(
            v8,
            (Il2CppObject *)this,
            Method_FriendRootComponent_OnSelectSearchFriend__,
            0LL),
          !friendSearchMenu) )
    {
      sub_1B4D1EC(operationConfirmMenu, v4);
    }
    FriendSearchMenu__Open(friendSearchMenu, v8, 1, 0LL);
    FriendRootComponent__RefreshInfo(this, v9);
  }
}


void __fastcall FriendRootComponent__BackFollowRemoveConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v7; // x21
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2

  if ( (byte_49B5EB8 & 1) == 0 )
  {
    sub_1B4CF90(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_1B4CF90(&Method_FriendRootComponent_OnSelectFriendItem__, v4);
    byte_49B5EB8 = 1;
  }
  if ( this->fields.state == 45 )
  {
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close_30941692(operationConfirmMenu, 0LL, v2),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v7 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1B4D1DC(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v7,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v8),
          !operationItemListViewManager) )
    {
      sub_1B4D1EC(operationConfirmMenu, method);
    }
    operationItemListViewManager->fields.callbackFunc = v7;
    sub_1B4CF34(&operationItemListViewManager->fields.callbackFunc);
    FriendOperationItemListViewManager__SetMode_30966740(operationItemListViewManager, 2, v9);
    this->fields.state = 4;
  }
}


void __fastcall FriendRootComponent__BackFollowRemoveConfirmBeforeRefresh(
        FriendRootComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0

  if ( this->fields.state == 45 )
  {
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close_30941692(operationConfirmMenu, 0LL, v2),
          (operationConfirmMenu = (FriendOperationConfirmMenu_o *)this->fields.operationItemListViewManager) == 0LL) )
    {
      sub_1B4D1EC(operationConfirmMenu, method);
    }
    FriendOperationItemListViewManager__DestroyList(
      (FriendOperationItemListViewManager_o *)operationConfirmMenu,
      method);
  }
}


void __fastcall FriendRootComponent__BackFollowRemoveConfirmRefreshShowFriend(
        FriendRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  NetworkManager_ResultCallbackFunc_o *v6; // x20
  Il2CppObject *Request_object; // x0
  __int64 v8; // x1

  if ( (byte_49B5EB9 & 1) == 0 )
  {
    sub_1B4CF90(&Method_FriendRootComponent_EndFriendRequest2__, method);
    sub_1B4CF90(&Method_NetworkManager_getRequest_FriendTopRequest___, v3);
    sub_1B4CF90(&NetworkManager_TypeInfo, v4);
    sub_1B4CF90(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    byte_49B5EB9 = 1;
  }
  v6 = (NetworkManager_ResultCallbackFunc_o *)sub_1B4D1DC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    Method_FriendRootComponent_EndFriendRequest2__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v6,
                     (const MethodInfo_2F86AFC *)Method_NetworkManager_getRequest_FriendTopRequest___);
  if ( !Request_object )
    sub_1B4D1EC(0LL, v8);
  RequestBase__beginRequest((RequestBase_o *)Request_object, 0LL);
}


void __fastcall FriendRootComponent__BackFriendAcceptConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v7; // x21
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2

  if ( (byte_49B5E7E & 1) == 0 )
  {
    sub_1B4CF90(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_1B4CF90(&Method_FriendRootComponent_OnSelectFriendItem__, v4);
    byte_49B5E7E = 1;
  }
  if ( this->fields.state == 31 )
  {
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close_30941692(operationConfirmMenu, 0LL, v2),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v7 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1B4D1DC(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v7,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v8),
          !operationItemListViewManager) )
    {
      sub_1B4D1EC(operationConfirmMenu, method);
    }
    operationItemListViewManager->fields.callbackFunc = v7;
    sub_1B4CF34(&operationItemListViewManager->fields.callbackFunc);
    FriendOperationItemListViewManager__SetMode_30966740(operationItemListViewManager, 2, v9);
    this->fields.state = 14;
  }
}


void __fastcall FriendRootComponent__BackFriendAcceptConfirmRefreshShowOffered(
        FriendRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x2
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  const MethodInfo *v7; // x3
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v10; // x21
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2

  if ( (byte_49B5E7F & 1) == 0 )
  {
    sub_1B4CF90(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_1B4CF90(&Method_FriendRootComponent_OnSelectFriendItem__, v3);
    byte_49B5E7F = 1;
  }
  if ( this->fields.state == 31 )
  {
    this->fields.state = 14;
    FriendRootComponent__RefreshInfo(this, method);
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu )
      goto LABEL_11;
    FriendOperationConfirmMenu__Close_30941692(operationConfirmMenu, 0LL, v5);
    operationConfirmMenu = (FriendOperationConfirmMenu_o *)this->fields.operationItemListViewManager;
    if ( !operationConfirmMenu
      || (FriendOperationItemListViewManager__DestroyList(
            (FriendOperationItemListViewManager_o *)operationConfirmMenu,
            v4),
          (classButtonControl = this->fields.classButtonControl) == 0LL)
      || (operationConfirmMenu = (FriendOperationConfirmMenu_o *)this->fields.operationItemListViewManager) == 0LL
      || (FriendOperationItemListViewManager__CreateList(
            (FriendOperationItemListViewManager_o *)operationConfirmMenu,
            2,
            classButtonControl->fields.currentCursor,
            v7),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v10 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1B4D1DC(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v10,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v11),
          !operationItemListViewManager) )
    {
LABEL_11:
      sub_1B4D1EC(operationConfirmMenu, v4);
    }
    operationItemListViewManager->fields.callbackFunc = v10;
    sub_1B4CF34(&operationItemListViewManager->fields.callbackFunc);
    FriendOperationItemListViewManager__SetMode_30966740(operationItemListViewManager, 2, v12);
  }
}


void __fastcall FriendRootComponent__BackFriendCancelConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v7; // x21
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2

  if ( (byte_49B5E84 & 1) == 0 )
  {
    sub_1B4CF90(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_1B4CF90(&Method_FriendRootComponent_OnSelectFriendItem__, v4);
    byte_49B5E84 = 1;
  }
  if ( this->fields.state == 37 )
  {
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close_30941692(operationConfirmMenu, 0LL, v2),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v7 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1B4D1DC(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v7,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v8),
          !operationItemListViewManager) )
    {
      sub_1B4D1EC(operationConfirmMenu, method);
    }
    operationItemListViewManager->fields.callbackFunc = v7;
    sub_1B4CF34(&operationItemListViewManager->fields.callbackFunc);
    FriendOperationItemListViewManager__SetMode_30966740(operationItemListViewManager, 2, v9);
    this->fields.state = 14;
  }
}


void __fastcall FriendRootComponent__BackFriendCancelConfirmRefreshShowOffer(
        FriendRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x2
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  const MethodInfo *v7; // x3
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v10; // x21
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2

  if ( (byte_49B5E85 & 1) == 0 )
  {
    sub_1B4CF90(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_1B4CF90(&Method_FriendRootComponent_OnSelectFriendItem__, v3);
    byte_49B5E85 = 1;
  }
  if ( this->fields.state == 37 )
  {
    this->fields.state = 9;
    FriendRootComponent__RefreshInfo(this, method);
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu )
      goto LABEL_11;
    FriendOperationConfirmMenu__Close_30941692(operationConfirmMenu, 0LL, v5);
    operationConfirmMenu = (FriendOperationConfirmMenu_o *)this->fields.operationItemListViewManager;
    if ( !operationConfirmMenu
      || (FriendOperationItemListViewManager__DestroyList(
            (FriendOperationItemListViewManager_o *)operationConfirmMenu,
            v4),
          (classButtonControl = this->fields.classButtonControl) == 0LL)
      || (operationConfirmMenu = (FriendOperationConfirmMenu_o *)this->fields.operationItemListViewManager) == 0LL
      || (FriendOperationItemListViewManager__CreateList(
            (FriendOperationItemListViewManager_o *)operationConfirmMenu,
            1,
            classButtonControl->fields.currentCursor,
            v7),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v10 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1B4D1DC(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v10,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v11),
          !operationItemListViewManager) )
    {
LABEL_11:
      sub_1B4D1EC(operationConfirmMenu, v4);
    }
    operationItemListViewManager->fields.callbackFunc = v10;
    sub_1B4CF34(&operationItemListViewManager->fields.callbackFunc);
    FriendOperationItemListViewManager__SetMode_30966740(operationItemListViewManager, 2, v12);
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
      FriendWarningDialog__Close(friendWarningDialog, 0LL);
      goto LABEL_7;
    }
LABEL_9:
    sub_1B4D1EC(friendWarningDialog, method);
  }
  if ( state == 27 )
  {
    friendWarningDialog = (FriendWarningDialog_o *)this->fields.operationConfirmMenu;
    this->fields.state = 23;
    if ( friendWarningDialog )
    {
      FriendOperationConfirmMenu__Close_30941692((FriendOperationConfirmMenu_o *)friendWarningDialog, 0LL, v2);
LABEL_7:
      FriendRootComponent__StartSearchInput(this, v6);
      return;
    }
    goto LABEL_9;
  }
}


void __fastcall FriendRootComponent__BackFriendOfferConfirm2(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  int32_t state; // w8
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v8; // x21
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x2

  if ( (byte_49B5EBB & 1) == 0 )
  {
    sub_1B4CF90(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_1B4CF90(&Method_FriendRootComponent_OnSelectFriendItem__, v4);
    byte_49B5EBB = 1;
  }
  state = this->fields.state;
  if ( state == 29 || state == 27 )
  {
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close_30941692(operationConfirmMenu, 0LL, v2),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v8 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1B4D1DC(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v8,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v9),
          !operationItemListViewManager) )
    {
      sub_1B4D1EC(operationConfirmMenu, method);
    }
    operationItemListViewManager->fields.callbackFunc = v8;
    sub_1B4CF34(&operationItemListViewManager->fields.callbackFunc);
    FriendOperationItemListViewManager__SetMode_30966740(operationItemListViewManager, 2, v10);
    this->fields.state = 4;
  }
}


void __fastcall FriendRootComponent__BackFriendOfferConfirmRefreshShowFriend(
        FriendRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x2
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  const MethodInfo *v7; // x3
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v10; // x21
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2

  if ( (byte_49B5EBC & 1) == 0 )
  {
    sub_1B4CF90(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_1B4CF90(&Method_FriendRootComponent_OnSelectFriendItem__, v3);
    byte_49B5EBC = 1;
  }
  if ( this->fields.state == 27 )
  {
    this->fields.state = 4;
    FriendRootComponent__RefreshInfo(this, method);
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu )
      goto LABEL_11;
    FriendOperationConfirmMenu__Close_30941692(operationConfirmMenu, 0LL, v5);
    operationConfirmMenu = (FriendOperationConfirmMenu_o *)this->fields.operationItemListViewManager;
    if ( !operationConfirmMenu
      || (FriendOperationItemListViewManager__DestroyList(
            (FriendOperationItemListViewManager_o *)operationConfirmMenu,
            v4),
          (classButtonControl = this->fields.classButtonControl) == 0LL)
      || (operationConfirmMenu = (FriendOperationConfirmMenu_o *)this->fields.operationItemListViewManager) == 0LL
      || (FriendOperationItemListViewManager__CreateList(
            (FriendOperationItemListViewManager_o *)operationConfirmMenu,
            3,
            classButtonControl->fields.currentCursor,
            v7),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v10 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1B4D1DC(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v10,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v11),
          !operationItemListViewManager) )
    {
LABEL_11:
      sub_1B4D1EC(operationConfirmMenu, v4);
    }
    operationItemListViewManager->fields.callbackFunc = v10;
    sub_1B4CF34(&operationItemListViewManager->fields.callbackFunc);
    FriendOperationItemListViewManager__SetMode_30966740(operationItemListViewManager, 2, v12);
  }
}


void __fastcall FriendRootComponent__BackFriendOfferConfirmRefreshShowSearch(
        FriendRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  FriendSearchMenu_o *friendSearchMenu; // x20
  FriendSearchMenu_CallbackFunc_o *v8; // x21

  if ( (byte_49B5E7C & 1) == 0 )
  {
    sub_1B4CF90(&FriendSearchMenu_CallbackFunc_TypeInfo, method);
    sub_1B4CF90(&Method_FriendRootComponent_OnSelectSearchFriend__, v3);
    byte_49B5E7C = 1;
  }
  if ( this->fields.state == 27 )
  {
    this->fields.state = 23;
    this->fields.selectFriendCode = 0LL;
    sub_1B4CF34(&this->fields.selectFriendCode);
    this->fields.selectFriendEntity = 0LL;
    sub_1B4CF34(&this->fields.selectFriendEntity);
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close_30941692(operationConfirmMenu, 0LL, v5),
          (operationConfirmMenu = (FriendOperationConfirmMenu_o *)this->fields.friendSearchResultMenu) == 0LL)
      || (FriendSearchResultMenu__Close((FriendSearchResultMenu_o *)operationConfirmMenu, 0LL),
          friendSearchMenu = this->fields.friendSearchMenu,
          v8 = (FriendSearchMenu_CallbackFunc_o *)sub_1B4D1DC(FriendSearchMenu_CallbackFunc_TypeInfo),
          FriendSearchMenu_CallbackFunc___ctor(
            v8,
            (Il2CppObject *)this,
            Method_FriendRootComponent_OnSelectSearchFriend__,
            0LL),
          !friendSearchMenu) )
    {
      sub_1B4D1EC(operationConfirmMenu, v4);
    }
    FriendSearchMenu__Open(friendSearchMenu, v8, 1, 0LL);
  }
}


void __fastcall FriendRootComponent__BackFriendRejectConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v7; // x21
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2

  if ( (byte_49B5E81 & 1) == 0 )
  {
    sub_1B4CF90(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_1B4CF90(&Method_FriendRootComponent_OnSelectFriendItem__, v4);
    byte_49B5E81 = 1;
  }
  if ( this->fields.state == 34 )
  {
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close_30941692(operationConfirmMenu, 0LL, v2),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v7 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1B4D1DC(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v7,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v8),
          !operationItemListViewManager) )
    {
      sub_1B4D1EC(operationConfirmMenu, method);
    }
    operationItemListViewManager->fields.callbackFunc = v7;
    sub_1B4CF34(&operationItemListViewManager->fields.callbackFunc);
    FriendOperationItemListViewManager__SetMode_30966740(operationItemListViewManager, 2, v9);
    this->fields.state = 14;
  }
}


void __fastcall FriendRootComponent__BackFriendRejectConfirmRefreshShowOffered(
        FriendRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x2
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  const MethodInfo *v7; // x3
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v10; // x21
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2

  if ( (byte_49B5E82 & 1) == 0 )
  {
    sub_1B4CF90(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_1B4CF90(&Method_FriendRootComponent_OnSelectFriendItem__, v3);
    byte_49B5E82 = 1;
  }
  if ( this->fields.state == 34 )
  {
    this->fields.state = 14;
    FriendRootComponent__RefreshInfo(this, method);
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu )
      goto LABEL_11;
    FriendOperationConfirmMenu__Close_30941692(operationConfirmMenu, 0LL, v5);
    operationConfirmMenu = (FriendOperationConfirmMenu_o *)this->fields.operationItemListViewManager;
    if ( !operationConfirmMenu
      || (FriendOperationItemListViewManager__DestroyList(
            (FriendOperationItemListViewManager_o *)operationConfirmMenu,
            v4),
          (classButtonControl = this->fields.classButtonControl) == 0LL)
      || (operationConfirmMenu = (FriendOperationConfirmMenu_o *)this->fields.operationItemListViewManager) == 0LL
      || (FriendOperationItemListViewManager__CreateList(
            (FriendOperationItemListViewManager_o *)operationConfirmMenu,
            2,
            classButtonControl->fields.currentCursor,
            v7),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v10 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1B4D1DC(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v10,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v11),
          !operationItemListViewManager) )
    {
LABEL_11:
      sub_1B4D1EC(operationConfirmMenu, v4);
    }
    operationItemListViewManager->fields.callbackFunc = v10;
    sub_1B4CF34(&operationItemListViewManager->fields.callbackFunc);
    FriendOperationItemListViewManager__SetMode_30966740(operationItemListViewManager, 2, v12);
  }
}


void __fastcall FriendRootComponent__BackFriendRemoveConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v7; // x21
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2

  if ( (byte_49B5E87 & 1) == 0 )
  {
    sub_1B4CF90(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_1B4CF90(&Method_FriendRootComponent_OnSelectFriendItem__, v4);
    byte_49B5E87 = 1;
  }
  if ( this->fields.state == 40 )
  {
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close_30941692(operationConfirmMenu, 0LL, v2),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v7 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1B4D1DC(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v7,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v8),
          !operationItemListViewManager) )
    {
      sub_1B4D1EC(operationConfirmMenu, method);
    }
    operationItemListViewManager->fields.callbackFunc = v7;
    sub_1B4CF34(&operationItemListViewManager->fields.callbackFunc);
    FriendOperationItemListViewManager__SetMode_30966740(operationItemListViewManager, 2, v9);
    this->fields.state = 4;
  }
}


void __fastcall FriendRootComponent__BackFriendRemoveConfirmRefreshShowFriend(
        FriendRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x2
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  const MethodInfo *v7; // x3
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v10; // x21
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2

  if ( (byte_49B5E88 & 1) == 0 )
  {
    sub_1B4CF90(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_1B4CF90(&Method_FriendRootComponent_OnSelectFriendItem__, v3);
    byte_49B5E88 = 1;
  }
  if ( this->fields.state == 40 )
  {
    this->fields.state = 4;
    FriendRootComponent__RefreshInfo(this, method);
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu )
      goto LABEL_11;
    FriendOperationConfirmMenu__Close_30941692(operationConfirmMenu, 0LL, v5);
    operationConfirmMenu = (FriendOperationConfirmMenu_o *)this->fields.operationItemListViewManager;
    if ( !operationConfirmMenu
      || (FriendOperationItemListViewManager__DestroyList(
            (FriendOperationItemListViewManager_o *)operationConfirmMenu,
            v4),
          (classButtonControl = this->fields.classButtonControl) == 0LL)
      || (operationConfirmMenu = (FriendOperationConfirmMenu_o *)this->fields.operationItemListViewManager) == 0LL
      || (FriendOperationItemListViewManager__CreateList(
            (FriendOperationItemListViewManager_o *)operationConfirmMenu,
            3,
            classButtonControl->fields.currentCursor,
            v7),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v10 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1B4D1DC(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v10,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v11),
          !operationItemListViewManager) )
    {
LABEL_11:
      sub_1B4D1EC(operationConfirmMenu, v4);
    }
    operationItemListViewManager->fields.callbackFunc = v10;
    sub_1B4CF34(&operationItemListViewManager->fields.callbackFunc);
    FriendOperationItemListViewManager__SetMode_30966740(operationItemListViewManager, 2, v12);
  }
}


void __fastcall FriendRootComponent__BackSearchFriend(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  FriendSearchResultMenu_o *friendSearchResultMenu; // x0
  FriendSearchMenu_o *friendSearchMenu; // x20
  System_Action_o *v7; // x21

  if ( (byte_49B5E75 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&Method_FriendRootComponent_OnMoveEnd__, v3);
    byte_49B5E75 = 1;
  }
  if ( this->fields.state == 23 )
  {
    this->fields.state = 24;
    FriendRootComponent__RefreshInfo(this, method);
    this->fields.selectFriendEntity = 0LL;
    sub_1B4CF34(&this->fields.selectFriendEntity);
    friendSearchResultMenu = this->fields.friendSearchResultMenu;
    if ( !friendSearchResultMenu
      || (FriendSearchResultMenu__Close(friendSearchResultMenu, 0LL),
          friendSearchMenu = this->fields.friendSearchMenu,
          v7 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo),
          System_Action___ctor(v7, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0LL),
          !friendSearchMenu) )
    {
      sub_1B4D1EC(friendSearchResultMenu, v4);
    }
    FriendSearchMenu__Close_31018456(friendSearchMenu, v7, 0LL);
  }
}


void __fastcall FriendRootComponent__BackShowFriend(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_49B5E6D & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&Method_FriendRootComponent_OnMoveEnd__, v3);
    byte_49B5E6D = 1;
  }
  if ( this->fields.state == 4 )
  {
    this->fields.state = 5;
    FriendRootComponent__RefreshInfo(this, method);
    operationItemListViewManager = this->fields.operationItemListViewManager;
    v5 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0LL);
    if ( !operationItemListViewManager )
      sub_1B4D1EC(v6, v7);
    operationItemListViewManager->fields.callbackFunc2 = v5;
    sub_1B4CF34(&operationItemListViewManager->fields.callbackFunc2);
    FriendOperationItemListViewManager__SetMode_30966740(operationItemListViewManager, 4, v8);
  }
}


void __fastcall FriendRootComponent__BackShowOffer(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x1

  if ( (byte_49B5E6F & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&Method_FriendRootComponent_OnMoveEnd__, v3);
    byte_49B5E6F = 1;
  }
  if ( this->fields.state == 9 )
  {
    operationItemListViewManager = this->fields.operationItemListViewManager;
    v5 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0LL);
    if ( !operationItemListViewManager )
      sub_1B4D1EC(v6, v7);
    operationItemListViewManager->fields.callbackFunc2 = v5;
    sub_1B4CF34(&operationItemListViewManager->fields.callbackFunc2);
    FriendOperationItemListViewManager__SetMode_30966740(operationItemListViewManager, 4, v8);
    FriendRootComponent__RefreshInfo(this, v9);
    this->fields.state = 10;
  }
}


void __fastcall FriendRootComponent__BackShowOffered(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_49B5E71 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&Method_FriendRootComponent_OnMoveEnd__, v3);
    byte_49B5E71 = 1;
  }
  if ( this->fields.state == 14 )
  {
    this->fields.state = 15;
    FriendRootComponent__RefreshInfo(this, method);
    operationItemListViewManager = this->fields.operationItemListViewManager;
    v5 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0LL);
    if ( !operationItemListViewManager )
      sub_1B4D1EC(v6, v7);
    operationItemListViewManager->fields.callbackFunc2 = v5;
    sub_1B4CF34(&operationItemListViewManager->fields.callbackFunc2);
    FriendOperationItemListViewManager__SetMode_30966740(operationItemListViewManager, 4, v8);
  }
}


void __fastcall FriendRootComponent__BackShowSearch(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_49B5E73 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&Method_FriendRootComponent_OnMoveEnd__, v3);
    byte_49B5E73 = 1;
  }
  if ( this->fields.state == 19 )
  {
    this->fields.state = 20;
    operationItemListViewManager = this->fields.operationItemListViewManager;
    v5 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0LL);
    if ( !operationItemListViewManager )
      sub_1B4D1EC(v6, v7);
    operationItemListViewManager->fields.callbackFunc2 = v5;
    sub_1B4CF34(&operationItemListViewManager->fields.callbackFunc2);
    FriendOperationItemListViewManager__SetMode_30966740(operationItemListViewManager, 4, v8);
  }
}


void __fastcall FriendRootComponent__ChangeLimitCountBySpoilerProtection(
        FriendRootComponent_o *this,
        const MethodInfo *method)
{
  ServantLeaderInfo_o *SpoilerSetting; // x0
  __int64 v4; // x1
  struct OtherUserGameEntity_o *selectFriendEntity; // x8
  struct ServantLeaderInfo_array *userSvtLeaderHash; // x20
  int max_length; // w8
  unsigned int v8; // w21
  struct OtherUserGameEntity_o *v9; // x8
  struct ServantLeaderInfo_array *eventUserSvtLeaderHash; // x19
  int v11; // w8
  unsigned int v12; // w20

  if ( (byte_49B5E93 & 1) == 0 )
  {
    sub_1B4CF90(&OptionManager_TypeInfo, method);
    byte_49B5E93 = 1;
  }
  if ( this->fields.selectFriendEntity )
  {
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    SpoilerSetting = (ServantLeaderInfo_o *)OptionManager__GetSpoilerSetting(0LL);
    if ( ((unsigned __int8)SpoilerSetting & 1) == 0 )
    {
      selectFriendEntity = this->fields.selectFriendEntity;
      if ( !selectFriendEntity )
        goto LABEL_23;
      userSvtLeaderHash = selectFriendEntity->fields.userSvtLeaderHash;
      if ( !userSvtLeaderHash )
        goto LABEL_23;
      max_length = userSvtLeaderHash->max_length;
      if ( max_length >= 1 )
      {
        v8 = 0;
        while ( v8 < max_length )
        {
          SpoilerSetting = userSvtLeaderHash->m_Items[v8];
          if ( !SpoilerSetting )
            goto LABEL_23;
          ServantLeaderInfo__ChangeLimitCountBySpoilerProtection(SpoilerSetting, 0LL);
          max_length = userSvtLeaderHash->max_length;
          if ( (int)++v8 >= max_length )
            goto LABEL_14;
        }
LABEL_22:
        sub_1B4D1F4(SpoilerSetting, v4);
      }
LABEL_14:
      v9 = this->fields.selectFriendEntity;
      if ( !v9 || (eventUserSvtLeaderHash = v9->fields.eventUserSvtLeaderHash) == 0LL )
LABEL_23:
        sub_1B4D1EC(SpoilerSetting, v4);
      v11 = eventUserSvtLeaderHash->max_length;
      if ( v11 >= 1 )
      {
        v12 = 0;
        while ( v12 < v11 )
        {
          SpoilerSetting = eventUserSvtLeaderHash->m_Items[v12];
          if ( !SpoilerSetting )
            goto LABEL_23;
          ServantLeaderInfo__ChangeLimitCountBySpoilerProtection(SpoilerSetting, 0LL);
          v11 = eventUserSvtLeaderHash->max_length;
          if ( (int)++v12 >= v11 )
            return;
        }
        goto LABEL_22;
      }
    }
  }
}


void __fastcall FriendRootComponent__CheckHelpUI(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_String_o **v5; // x9
  System_String_o *v6; // x20
  UILabel_o *helpLabel; // x19
  System_String_o *v8; // x0
  __int64 v9; // x1

  if ( (byte_49B5E65 & 1) == 0 )
  {
    sub_1B4CF90(&LocalizationManager_TypeInfo, method);
    sub_1B4CF90(&StringLiteral_6424/*"FRIEND_LOCK_HELP_TEXT"*/, v3);
    sub_1B4CF90(&StringLiteral_6422/*"FRIEND_HELP_TEXT"*/, v4);
    byte_49B5E65 = 1;
  }
  v5 = (System_String_o **)&StringLiteral_6422/*"FRIEND_HELP_TEXT"*/;
  if ( this->fields.isActiveModeKindButtons && this->fields.currentModeKind == 1 )
    v5 = (System_String_o **)&StringLiteral_6424/*"FRIEND_LOCK_HELP_TEXT"*/;
  v6 = *v5;
  helpLabel = this->fields.helpLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__Get(v6, 0LL);
  if ( !helpLabel )
    sub_1B4D1EC(v8, v9);
  UILabel__set_text(helpLabel, v8, 0LL);
}


void __fastcall FriendRootComponent__CheckModeKind(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  Il2CppObject *MasterData_object; // x20
  UserFollowMaster_o *v12; // x21
  int v13; // w21
  UICommonButton_o *modeUserDetailButton; // x20
  bool enabled; // w0
  UICommonButton_o *modeEditLockButton; // x20
  bool v17; // w0
  __int64 v18; // x8
  int32_t currentModeKind; // w20
  __int64 v20; // x21
  __int64 v21; // x22
  System_String_o **v22; // x8
  System_String_o *v23; // x1

  if ( (byte_49B5E9A & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_TblFriendMaster___, method);
    sub_1B4CF90(&Method_DataManager_GetMasterData_UserFollowMaster___, v3);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_1B4CF90(&StringLiteral_17340/*"button_alllock_unreg"*/, v5);
    sub_1B4CF90(&StringLiteral_17346/*"button_infocheck_unreg"*/, v6);
    sub_1B4CF90(&StringLiteral_17345/*"button_infocheck_reg"*/, v7);
    sub_1B4CF90(&StringLiteral_17339/*"button_alllock_reg"*/, v8);
    byte_49B5E9A = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_TblFriendMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_UserFollowMaster___);
  if ( !MasterData_object )
    goto LABEL_31;
  v12 = (UserFollowMaster_o *)Instance;
  Instance = (DataManager_o *)TblFriendMaster__GetFriendSum((TblFriendMaster_o *)MasterData_object, 0LL);
  if ( (int)Instance > 0 )
    goto LABEL_9;
  if ( !v12 )
    goto LABEL_31;
  if ( UserFollowMaster__GetFollowSum(v12, 0LL) <= 0 )
  {
    v13 = 1;
    this->fields.currentModeKind = 0;
  }
  else
  {
LABEL_9:
    v13 = 0;
  }
  Instance = (DataManager_o *)this->fields.modeUserDetailButton;
  if ( !Instance )
    goto LABEL_31;
  ((void (__fastcall *)(DataManager_o *, __int64, void *))Instance->klass[1]._1.namespaze)(
    Instance,
    1LL,
    Instance->klass[1]._1.byval_arg.data);
  Instance = (DataManager_o *)this->fields.modeEditLockButton;
  if ( !Instance )
    goto LABEL_31;
  ((void (__fastcall *)(DataManager_o *, __int64, void *))Instance->klass[1]._1.namespaze)(
    Instance,
    1LL,
    Instance->klass[1]._1.byval_arg.data);
  Instance = (DataManager_o *)this->fields.modeUserDetailButton;
  if ( !Instance )
    goto LABEL_31;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, this->fields.currentModeKind != 0, 0LL);
  Instance = (DataManager_o *)this->fields.modeEditLockButton;
  if ( !Instance )
    goto LABEL_31;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, this->fields.currentModeKind != 1, 0LL);
  modeUserDetailButton = this->fields.modeUserDetailButton;
  if ( !modeUserDetailButton )
    goto LABEL_31;
  enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.modeUserDetailButton, 0LL);
  UICommonButton__SetColliderEnable(modeUserDetailButton, enabled, 1, 0LL);
  modeEditLockButton = this->fields.modeEditLockButton;
  if ( !modeEditLockButton )
    goto LABEL_31;
  v17 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.modeEditLockButton, 0LL);
  UICommonButton__SetColliderEnable(modeEditLockButton, v17, 1, 0LL);
  if ( v13 )
  {
    v18 = 232LL;
    if ( this->fields.currentModeKind )
      v18 = 224LL;
    Instance = *(DataManager_o **)((char *)&this->klass + v18);
    if ( Instance )
    {
      UICommonButton__SetButtonEnable((UICommonButton_o *)Instance, 0, 1, 0LL);
      goto LABEL_21;
    }
LABEL_31:
    sub_1B4D1EC(Instance, v10);
  }
LABEL_21:
  Instance = (DataManager_o *)this->fields.modeUserDetailSprite;
  if ( !Instance )
    goto LABEL_31;
  currentModeKind = this->fields.currentModeKind;
  v20 = StringLiteral_17339/*"button_alllock_reg"*/;
  v21 = StringLiteral_17340/*"button_alllock_unreg"*/;
  v22 = (System_String_o **)(currentModeKind ? &StringLiteral_17346/*"button_infocheck_unreg"*/ : &StringLiteral_17345/*"button_infocheck_reg"*/);
  UISprite__set_spriteName((UISprite_o *)Instance, *v22, 0LL);
  Instance = (DataManager_o *)this->fields.modeEditLockSprite;
  if ( !Instance )
    goto LABEL_31;
  if ( currentModeKind == 1 )
    v23 = (System_String_o *)v20;
  else
    v23 = (System_String_o *)v21;
  UISprite__set_spriteName((UISprite_o *)Instance, v23, 0LL);
}


bool __fastcall FriendRootComponent__CheckTabKind(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  int32_t tabKind; // w0
  __int64 v6; // x1
  PlayMakerFSM_o *myFSM; // x0
  __int64 *v8; // x8

  if ( (byte_49B5E69 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_8449/*"MENU_OPERATION_FRIEND"*/, method);
    sub_1B4CF90(&StringLiteral_8451/*"MENU_OPERATION_OFFERED"*/, v3);
    sub_1B4CF90(&StringLiteral_8452/*"MENU_OPERATION_SEARCH"*/, v4);
    byte_49B5E69 = 1;
  }
  tabKind = FriendRootComponent__get_tabKind(this, method);
  switch ( tabKind )
  {
    case 2:
      myFSM = this->fields.myFSM;
      if ( myFSM )
      {
        v8 = &StringLiteral_8452/*"MENU_OPERATION_SEARCH"*/;
        goto LABEL_12;
      }
LABEL_14:
      sub_1B4D1EC(myFSM, v6);
    case 1:
      myFSM = this->fields.myFSM;
      if ( myFSM )
      {
        v8 = &StringLiteral_8451/*"MENU_OPERATION_OFFERED"*/;
        goto LABEL_12;
      }
      goto LABEL_14;
    case 0:
      myFSM = this->fields.myFSM;
      if ( myFSM )
      {
        v8 = &StringLiteral_8449/*"MENU_OPERATION_FRIEND"*/;
LABEL_12:
        PlayMakerFSM__SendEvent(myFSM, (System_String_o *)*v8, 0LL);
        return 1;
      }
      goto LABEL_14;
  }
  return 1;
}


void __fastcall FriendRootComponent__EndCloseShowServant(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v5; // x21
  const MethodInfo *v6; // x3
  __int64 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2

  if ( (byte_49B5E7A & 1) == 0 )
  {
    sub_1B4CF90(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_1B4CF90(&Method_FriendRootComponent_OnSelectFriendItem__, v3);
    byte_49B5E7A = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v5 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1B4D1DC(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
    v6);
  if ( !operationItemListViewManager )
    sub_1B4D1EC(v7, v8);
  operationItemListViewManager->fields.callbackFunc = v5;
  sub_1B4CF34(&operationItemListViewManager->fields.callbackFunc);
  FriendOperationItemListViewManager__SetMode_30966740(operationItemListViewManager, 2, v9);
}


void __fastcall FriendRootComponent__EndCloseShowServantEquip(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v5; // x21
  const MethodInfo *v6; // x3
  __int64 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2

  if ( (byte_49B5EA4 & 1) == 0 )
  {
    sub_1B4CF90(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_1B4CF90(&Method_FriendRootComponent_OnSelectFriendItem__, v3);
    byte_49B5EA4 = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v5 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1B4D1DC(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
    v6);
  if ( !operationItemListViewManager )
    sub_1B4D1EC(v7, v8);
  operationItemListViewManager->fields.callbackFunc = v5;
  sub_1B4CF34(&operationItemListViewManager->fields.callbackFunc);
  FriendOperationItemListViewManager__SetMode_30966740(operationItemListViewManager, 2, v9);
}


void __fastcall FriendRootComponent__EndFriendRequest(
        FriendRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  FriendRootComponent_c *v6; // x0
  OtherUserGameEntity_array *Instance; // x0
  __int64 v8; // x1
  TblFriendMaster_o *v9; // x20
  const MethodInfo *v10; // x2
  int32_t v11; // w1
  OtherUserGameEntity_array *List; // x21
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x1

  if ( (byte_49B5E66 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_TblFriendMaster___, result);
    sub_1B4CF90(&FriendRootComponent_TypeInfo, v4);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49B5E66 = 1;
  }
  v6 = FriendRootComponent_TypeInfo;
  if ( !FriendRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendRootComponent_TypeInfo);
    v6 = FriendRootComponent_TypeInfo;
  }
  if ( v6->static_fields->tabKindSave == 3 && this->fields.jumpTabKind <= 1u )
  {
    EventTutorialMaster__CheckTutorial(-1, 49, 0LL, 0, 0, 0, 0, 0LL);
    v6 = FriendRootComponent_TypeInfo;
  }
  if ( !v6->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v6);
    v6 = FriendRootComponent_TypeInfo;
  }
  if ( v6->static_fields->tabKindSave == 3 && this->fields.jumpTabKind == 3 )
  {
    Instance = (OtherUserGameEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (OtherUserGameEntity_array *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)Instance,
                                                (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_TblFriendMaster___);
      if ( Instance )
      {
        v9 = (TblFriendMaster_o *)Instance;
        Instance = TblFriendMaster__GetList((TblFriendMaster_o *)Instance, 2, 0LL);
        if ( Instance )
        {
          if ( *(_QWORD *)&Instance->max_length )
          {
            v11 = 1;
LABEL_22:
            FriendRootComponent__set_tabKind((FriendRootComponent_o *)Instance, v11, v10);
            EventTutorialMaster__CheckTutorial(-1, 49, 0LL, 0, 0, 0, 0, 0LL);
            goto LABEL_23;
          }
          List = TblFriendMaster__GetList(v9, 3, 0LL);
          Instance = TblFriendMaster__GetList(v9, 9, 0LL);
          if ( List )
          {
            if ( *(_QWORD *)&List->max_length )
            {
LABEL_21:
              v11 = 0;
              goto LABEL_22;
            }
            if ( Instance )
            {
              if ( !*(_QWORD *)&Instance->max_length )
              {
                FriendRootComponent__set_tabKind((FriendRootComponent_o *)Instance, 2, v10);
                goto LABEL_23;
              }
              goto LABEL_21;
            }
          }
        }
      }
    }
    sub_1B4D1EC(Instance, v8);
  }
LABEL_23:
  FriendRootComponent__InitModeKindButtons(this, (const MethodInfo *)result);
  FriendRootComponent__RefreshTab(this, v13);
  FriendRootComponent__RefreshInfo(this, v14);
  MainMenuBar__setMenuActive(1, 0LL, 0LL);
  SceneRootComponent__beginStartUp_39218316((SceneRootComponent_o *)this, 0LL);
}


void __fastcall FriendRootComponent__EndFriendRequest2(
        FriendRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v4; // x1
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  struct FriendOperationItemListViewManager_o *v9; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v10; // x21
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2

  if ( (byte_49B5EBA & 1) == 0 )
  {
    sub_1B4CF90(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, result);
    sub_1B4CF90(&Method_FriendRootComponent_OnSelectFriendItem__, v4);
    byte_49B5EBA = 1;
  }
  FriendRootComponent__RefreshInfo(this, (const MethodInfo *)result);
  classButtonControl = this->fields.classButtonControl;
  if ( !classButtonControl
    || (operationItemListViewManager = this->fields.operationItemListViewManager) == 0LL
    || (FriendOperationItemListViewManager__CreateList(
          operationItemListViewManager,
          3,
          classButtonControl->fields.currentCursor,
          v7),
        v9 = this->fields.operationItemListViewManager,
        v10 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1B4D1DC(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
        FriendOperationItemListViewManager_CallbackFunc___ctor(
          v10,
          (Il2CppObject *)this,
          (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
          v11),
        !v9) )
  {
    sub_1B4D1EC(operationItemListViewManager, v6);
  }
  v9->fields.callbackFunc = v10;
  sub_1B4CF34(&v9->fields.callbackFunc);
  FriendOperationItemListViewManager__SetMode_30966740(v9, 2, v12);
  this->fields.state = 4;
}


void __fastcall FriendRootComponent__EndLoadOutGameAtlas(FriendRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_49B5E62 & 1) == 0 )
  {
    sub_1B4CF90(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_49B5E62 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B4D1EC(0LL, v4);
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, (SceneRootComponent_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendRootComponent__EndMaxFollowWarningOfferConfirm(
        FriendRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_49B5EB2 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_8446/*"MENU_CANCEL"*/, isDecide);
    byte_49B5EB2 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1B4D1EC(0LL, isDecide);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_8446/*"MENU_CANCEL"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendRootComponent__EndMaxFriendWarning(
        FriendRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v4; // x1
  FriendWarningDialog_o *friendWarningDialog; // x0
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v7; // x21
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2

  if ( (byte_49B5EA6 & 1) == 0 )
  {
    sub_1B4CF90(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, isDecide);
    sub_1B4CF90(&Method_FriendRootComponent_OnSelectFriendItem__, v4);
    byte_49B5EA6 = 1;
  }
  friendWarningDialog = this->fields.friendWarningDialog;
  if ( !friendWarningDialog
    || (FriendWarningDialog__Close(friendWarningDialog, 0LL),
        operationItemListViewManager = this->fields.operationItemListViewManager,
        v7 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1B4D1DC(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
        FriendOperationItemListViewManager_CallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
          v8),
        !operationItemListViewManager) )
  {
    sub_1B4D1EC(friendWarningDialog, isDecide);
  }
  operationItemListViewManager->fields.callbackFunc = v7;
  sub_1B4CF34(&operationItemListViewManager->fields.callbackFunc);
  FriendOperationItemListViewManager__SetMode_30966740(operationItemListViewManager, 2, v9);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendRootComponent__EndMaxFriendWarningOfferConfirm(
        FriendRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_49B5EA7 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_8446/*"MENU_CANCEL"*/, isDecide);
    byte_49B5EA7 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1B4D1EC(0LL, isDecide);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_8446/*"MENU_CANCEL"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendRootComponent__EndNoSearchWarning(
        FriendRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  FriendWarningDialog_o *friendWarningDialog; // x0
  FriendSearchMenu_o *friendSearchMenu; // x20
  FriendSearchMenu_CallbackFunc_o *v8; // x21

  if ( (byte_49B5E94 & 1) == 0 )
  {
    sub_1B4CF90(&FriendSearchMenu_CallbackFunc_TypeInfo, isDecide);
    sub_1B4CF90(&Method_FriendRootComponent_OnSelectSearchFriend__, v4);
    sub_1B4CF90(&StringLiteral_10845/*"REQUEST_NG"*/, v5);
    byte_49B5E94 = 1;
  }
  friendWarningDialog = this->fields.friendWarningDialog;
  if ( !friendWarningDialog
    || (FriendWarningDialog__Close(friendWarningDialog, 0LL),
        this->fields.state = 23,
        friendSearchMenu = this->fields.friendSearchMenu,
        v8 = (FriendSearchMenu_CallbackFunc_o *)sub_1B4D1DC(FriendSearchMenu_CallbackFunc_TypeInfo),
        FriendSearchMenu_CallbackFunc___ctor(
          v8,
          (Il2CppObject *)this,
          Method_FriendRootComponent_OnSelectSearchFriend__,
          0LL),
        !friendSearchMenu)
    || (FriendSearchMenu__Open(friendSearchMenu, v8, 0, 0LL),
        (friendWarningDialog = (FriendWarningDialog_o *)this->fields.myFSM) == 0LL) )
  {
    sub_1B4D1EC(friendWarningDialog, isDecide);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)friendWarningDialog, (System_String_o *)StringLiteral_10845/*"REQUEST_NG"*/, 0LL);
}


void __fastcall FriendRootComponent__EndRequestFollowAssign(
        FriendRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_Dictionary_object__object__o *myFSM; // x0
  System_Collections_Generic_Dictionary_object__object__o *v16; // x20
  System_String_o *v17; // x20
  __int64 *v18; // x8
  Il2CppObject *Instance; // x21
  NotificationDialog_ClickDelegate_o *v20; // x22

  if ( (byte_49B5EB5 & 1) == 0 )
  {
    sub_1B4CF90(&NotificationDialog_ClickDelegate_TypeInfo, result);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v6);
    sub_1B4CF90(&Method_FriendRootComponent_OnEndRequestDialog__, v7);
    sub_1B4CF90(&JsonManager_TypeInfo, v8);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_1B4CF90(&StringLiteral_10847/*"REQUEST_OK"*/, v10);
    sub_1B4CF90(&StringLiteral_10845/*"REQUEST_NG"*/, v11);
    sub_1B4CF90(&StringLiteral_21779/*"ng"*/, v12);
    sub_1B4CF90(&StringLiteral_21107/*"message"*/, v13);
    byte_49B5EB5 = 1;
  }
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_21779/*"ng"*/, 0LL) )
  {
    myFSM = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.myFSM;
    if ( myFSM )
    {
      v18 = &StringLiteral_10845/*"REQUEST_NG"*/;
      goto LABEL_14;
    }
LABEL_17:
    sub_1B4D1EC(myFSM, v14);
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  myFSM = (System_Collections_Generic_Dictionary_object__object__o *)JsonManager__getDictionary(result, 0LL);
  if ( !myFSM )
    goto LABEL_17;
  v16 = myFSM;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          myFSM,
          (Il2CppObject *)StringLiteral_21107/*"message"*/,
          (const MethodInfo_3257D0C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_10;
  myFSM = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                       v16,
                                                                       (Il2CppObject *)StringLiteral_21107/*"message"*/,
                                                                       (const MethodInfo_3257A98 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !myFSM )
    goto LABEL_17;
  v17 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, Il2CppMethodPointer))myFSM->klass->vtable._3_ToString.method)(
                             myFSM,
                             myFSM->klass->vtable._4_unknown.methodPtr);
  if ( System_String__IsNullOrEmpty(v17, 0LL) )
  {
LABEL_10:
    myFSM = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.myFSM;
    if ( myFSM )
    {
      v18 = &StringLiteral_10847/*"REQUEST_OK"*/;
LABEL_14:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myFSM, (System_String_o *)*v18, 0LL);
      return;
    }
    goto LABEL_17;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v20 = (NotificationDialog_ClickDelegate_o *)sub_1B4D1DC(NotificationDialog_ClickDelegate_TypeInfo);
  NotificationDialog_ClickDelegate___ctor(
    v20,
    (Il2CppObject *)this,
    Method_FriendRootComponent_OnEndRequestDialog__,
    0LL);
  if ( !Instance )
    goto LABEL_17;
  CommonUI__OpenNotificationDialog_30250652(
    (CommonUI_o *)Instance,
    0LL,
    v17,
    v20,
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_Dictionary_object__object__o *myFSM; // x0
  System_Collections_Generic_Dictionary_object__object__o *v16; // x20
  System_String_o *v17; // x20
  __int64 *v18; // x8
  Il2CppObject *Instance; // x21
  NotificationDialog_ClickDelegate_o *v20; // x22

  if ( (byte_49B5EBE & 1) == 0 )
  {
    sub_1B4CF90(&NotificationDialog_ClickDelegate_TypeInfo, result);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v6);
    sub_1B4CF90(&Method_FriendRootComponent_OnEndRequestDialog__, v7);
    sub_1B4CF90(&JsonManager_TypeInfo, v8);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_1B4CF90(&StringLiteral_10847/*"REQUEST_OK"*/, v10);
    sub_1B4CF90(&StringLiteral_10845/*"REQUEST_NG"*/, v11);
    sub_1B4CF90(&StringLiteral_21779/*"ng"*/, v12);
    sub_1B4CF90(&StringLiteral_21107/*"message"*/, v13);
    byte_49B5EBE = 1;
  }
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_21779/*"ng"*/, 0LL) )
  {
    myFSM = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.myFSM;
    if ( myFSM )
    {
      v18 = &StringLiteral_10845/*"REQUEST_NG"*/;
      goto LABEL_14;
    }
LABEL_17:
    sub_1B4D1EC(myFSM, v14);
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  myFSM = (System_Collections_Generic_Dictionary_object__object__o *)JsonManager__getDictionary(result, 0LL);
  if ( !myFSM )
    goto LABEL_17;
  v16 = myFSM;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          myFSM,
          (Il2CppObject *)StringLiteral_21107/*"message"*/,
          (const MethodInfo_3257D0C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_10;
  myFSM = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                       v16,
                                                                       (Il2CppObject *)StringLiteral_21107/*"message"*/,
                                                                       (const MethodInfo_3257A98 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !myFSM )
    goto LABEL_17;
  v17 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, Il2CppMethodPointer))myFSM->klass->vtable._3_ToString.method)(
                             myFSM,
                             myFSM->klass->vtable._4_unknown.methodPtr);
  if ( System_String__IsNullOrEmpty(v17, 0LL) )
  {
LABEL_10:
    myFSM = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.myFSM;
    if ( myFSM )
    {
      v18 = &StringLiteral_10847/*"REQUEST_OK"*/;
LABEL_14:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myFSM, (System_String_o *)*v18, 0LL);
      return;
    }
    goto LABEL_17;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v20 = (NotificationDialog_ClickDelegate_o *)sub_1B4D1DC(NotificationDialog_ClickDelegate_TypeInfo);
  NotificationDialog_ClickDelegate___ctor(
    v20,
    (Il2CppObject *)this,
    Method_FriendRootComponent_OnEndRequestDialog__,
    0LL);
  if ( !Instance )
    goto LABEL_17;
  CommonUI__OpenNotificationDialog_30250652(
    (CommonUI_o *)Instance,
    0LL,
    v17,
    v20,
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_Dictionary_object__object__o *myFSM; // x0
  System_Collections_Generic_Dictionary_object__object__o *v16; // x20
  System_String_o *v17; // x20
  __int64 *v18; // x8
  Il2CppObject *Instance; // x21
  NotificationDialog_ClickDelegate_o *v20; // x22

  if ( (byte_49B5E8F & 1) == 0 )
  {
    sub_1B4CF90(&NotificationDialog_ClickDelegate_TypeInfo, result);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v6);
    sub_1B4CF90(&Method_FriendRootComponent_OnEndRequestDialog__, v7);
    sub_1B4CF90(&JsonManager_TypeInfo, v8);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_1B4CF90(&StringLiteral_10847/*"REQUEST_OK"*/, v10);
    sub_1B4CF90(&StringLiteral_10845/*"REQUEST_NG"*/, v11);
    sub_1B4CF90(&StringLiteral_21779/*"ng"*/, v12);
    sub_1B4CF90(&StringLiteral_21107/*"message"*/, v13);
    byte_49B5E8F = 1;
  }
  MainMenuBar__UpdateNoticeNumber(0LL);
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_21779/*"ng"*/, 0LL) )
  {
    myFSM = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.myFSM;
    if ( myFSM )
    {
      v18 = &StringLiteral_10845/*"REQUEST_NG"*/;
      goto LABEL_14;
    }
LABEL_17:
    sub_1B4D1EC(myFSM, v14);
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  myFSM = (System_Collections_Generic_Dictionary_object__object__o *)JsonManager__getDictionary(result, 0LL);
  if ( !myFSM )
    goto LABEL_17;
  v16 = myFSM;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          myFSM,
          (Il2CppObject *)StringLiteral_21107/*"message"*/,
          (const MethodInfo_3257D0C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_10;
  myFSM = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                       v16,
                                                                       (Il2CppObject *)StringLiteral_21107/*"message"*/,
                                                                       (const MethodInfo_3257A98 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !myFSM )
    goto LABEL_17;
  v17 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, Il2CppMethodPointer))myFSM->klass->vtable._3_ToString.method)(
                             myFSM,
                             myFSM->klass->vtable._4_unknown.methodPtr);
  if ( System_String__IsNullOrEmpty(v17, 0LL) )
  {
LABEL_10:
    myFSM = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.myFSM;
    if ( myFSM )
    {
      v18 = &StringLiteral_10847/*"REQUEST_OK"*/;
LABEL_14:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myFSM, (System_String_o *)*v18, 0LL);
      return;
    }
    goto LABEL_17;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v20 = (NotificationDialog_ClickDelegate_o *)sub_1B4D1DC(NotificationDialog_ClickDelegate_TypeInfo);
  NotificationDialog_ClickDelegate___ctor(
    v20,
    (Il2CppObject *)this,
    Method_FriendRootComponent_OnEndRequestDialog__,
    0LL);
  if ( !Instance )
    goto LABEL_17;
  CommonUI__OpenNotificationDialog_30250652(
    (CommonUI_o *)Instance,
    0LL,
    v17,
    v20,
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  void *Instance; // x0
  __int64 v10; // x1
  __int64 v11; // x8
  const MethodInfo *v12; // x1
  __int64 *v13; // x8
  const MethodInfo *v14; // x1

  if ( (byte_49B5E92 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_OtherUserGameMaster___, result);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_1B4CF90(&StringLiteral_10847/*"REQUEST_OK"*/, v6);
    sub_1B4CF90(&StringLiteral_21947/*"ok"*/, v7);
    sub_1B4CF90(&StringLiteral_10845/*"REQUEST_NG"*/, v8);
    byte_49B5E92 = 1;
  }
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_21947/*"ok"*/, 0LL) )
    goto LABEL_11;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_OtherUserGameMaster___);
  if ( !Instance )
    goto LABEL_14;
  Instance = OtherUserGameMaster__GetFriendCodeList(
               (OtherUserGameMaster_o *)Instance,
               this->fields.selectFriendCode,
               0LL);
  if ( !Instance )
    goto LABEL_14;
  v11 = *((_QWORD *)Instance + 3);
  if ( !v11 )
  {
LABEL_11:
    this->fields.selectFriendEntity = 0LL;
    sub_1B4CF34(&this->fields.selectFriendEntity);
    FriendRootComponent__StartSearchInput(this, v14);
    Instance = this->fields.myFSM;
    if ( Instance )
    {
      v13 = &StringLiteral_10845/*"REQUEST_NG"*/;
      goto LABEL_13;
    }
LABEL_14:
    sub_1B4D1EC(Instance, v10);
  }
  if ( !(_DWORD)v11 )
    sub_1B4D1F4(Instance, v10);
  this->fields.selectFriendEntity = (struct OtherUserGameEntity_o *)*((_QWORD *)Instance + 4);
  sub_1B4CF34(&this->fields.selectFriendEntity);
  FriendRootComponent__ChangeLimitCountBySpoilerProtection(this, v12);
  Instance = this->fields.myFSM;
  if ( !Instance )
    goto LABEL_14;
  v13 = &StringLiteral_10847/*"REQUEST_OK"*/;
LABEL_13:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v13, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendRootComponent__EndShowServant(
        FriendRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v9; // x21
  const MethodInfo *v10; // x3
  __int64 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  Il2CppObject *Instance; // x20
  System_Action_o *v15; // x21

  if ( (byte_49B5E79 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, isDecide);
    sub_1B4CF90(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, v4);
    sub_1B4CF90(&Method_FriendRootComponent_EndCloseShowServant__, v5);
    sub_1B4CF90(&Method_FriendRootComponent_OnSelectFriendItem__, v6);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_49B5E79 = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v9 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1B4D1DC(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v9,
    (Il2CppObject *)this,
    (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
    v10);
  if ( !operationItemListViewManager
    || (operationItemListViewManager->fields.callbackFunc = v9,
        sub_1B4CF34(&operationItemListViewManager->fields.callbackFunc),
        FriendOperationItemListViewManager__SetMode_30966740(operationItemListViewManager, 5, v13),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v15 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo),
        System_Action___ctor(v15, (Il2CppObject *)this, Method_FriendRootComponent_EndCloseShowServant__, 0LL),
        !Instance) )
  {
    sub_1B4D1EC(v11, v12);
  }
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v15, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendRootComponent__EndShowServantEquip(
        FriendRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x20
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_49B5EA3 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, isDecide);
    sub_1B4CF90(&Method_FriendRootComponent_EndCloseShowServantEquip__, v4);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_49B5EA3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_FriendRootComponent_EndCloseShowServantEquip__, 0LL);
  if ( !Instance )
    sub_1B4D1EC(v8, v9);
  CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)Instance, v7, 0LL);
}


void __fastcall FriendRootComponent__FriendLockRequst(
        FriendRootComponent_o *this,
        System_Action_string__o *onFinishedRequest,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x20
  ListViewManager_o *operationItemListViewManager; // x0
  const MethodInfo *v17; // x1
  System_Collections_Generic_List_long__o *v18; // x21
  System_Collections_Generic_List_long__o *v19; // x22
  System_Collections_Generic_List_long__o *v20; // x23
  System_Collections_Generic_List_long__o *v21; // x24
  int32_t ItemSum; // w0
  const MethodInfo *v23; // x2
  int32_t v24; // w25
  float x; // w8
  struct UnityEngine_GameObject_o *dragParentObject; // x8
  _BOOL4 v27; // w8
  struct System_Int64_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x8
  struct UnityEngine_GameObject_o *v32; // x8
  _BOOL4 v33; // w8
  struct System_Int64_array *v34; // x8
  _QWORD *v35; // x9
  __int64 v36; // x10
  struct System_Int64_array *v37; // x8
  _QWORD *v38; // x9
  __int64 v39; // x10
  struct System_Int64_array *v40; // x8
  _QWORD *v41; // x9
  __int64 v42; // x10
  __int64 v43; // x8
  System_Collections_Generic_List_long__o *v44; // x0
  NetworkManager_ResultCallbackFunc_o *v45; // x19
  FirendLockSyncRequest_o *v46; // x19
  System_Int64_array *v47; // x20
  System_Int64_array *v48; // x21
  System_Int64_array *v49; // x22

  if ( (byte_49B5EA0 & 1) == 0 )
  {
    sub_1B4CF90(&Method_ActionExtensions_Call_string___, onFinishedRequest);
    sub_1B4CF90(&Method_System_Collections_Generic_List_long__Add__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_long__ToArray__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_long___ctor__, v7);
    sub_1B4CF90(&System_Collections_Generic_List_long__TypeInfo, v8);
    sub_1B4CF90(&Method_NetworkManager_getRequest_FirendLockSyncRequest___, v9);
    sub_1B4CF90(&NetworkManager_TypeInfo, v10);
    sub_1B4CF90(&NetworkManager_ResultCallbackFunc_TypeInfo, v11);
    sub_1B4CF90(&Method_FriendRootComponent___c__DisplayClass113_0__FriendLockRequst_b__0__, v12);
    sub_1B4CF90(&FriendRootComponent___c__DisplayClass113_0_TypeInfo, v13);
    sub_1B4CF90(&StringLiteral_21947/*"ok"*/, v14);
    byte_49B5EA0 = 1;
  }
  v15 = sub_1B4D1DC(FriendRootComponent___c__DisplayClass113_0_TypeInfo);
  FriendRootComponent___c__DisplayClass113_0___ctor((FriendRootComponent___c__DisplayClass113_0_o *)v15, 0LL);
  if ( !v15 )
    goto LABEL_55;
  *(_QWORD *)(v15 + 16) = this;
  sub_1B4CF34(v15 + 16);
  *(_QWORD *)(v15 + 32) = onFinishedRequest;
  sub_1B4CF34(v15 + 32);
  operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    goto LABEL_55;
  if ( FriendOperationItemListViewManager__get_IsExistSwapLockUser(
         (FriendOperationItemListViewManager_o *)operationItemListViewManager,
         v17) )
  {
    v18 = (System_Collections_Generic_List_long__o *)sub_1B4D1DC(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v18,
      (const MethodInfo_35679BC *)Method_System_Collections_Generic_List_long___ctor__);
    v19 = (System_Collections_Generic_List_long__o *)sub_1B4D1DC(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v19,
      (const MethodInfo_35679BC *)Method_System_Collections_Generic_List_long___ctor__);
    v20 = (System_Collections_Generic_List_long__o *)sub_1B4D1DC(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v20,
      (const MethodInfo_35679BC *)Method_System_Collections_Generic_List_long___ctor__);
    v21 = (System_Collections_Generic_List_long__o *)sub_1B4D1DC(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v21,
      (const MethodInfo_35679BC *)Method_System_Collections_Generic_List_long___ctor__);
    operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
    if ( operationItemListViewManager )
    {
      ItemSum = ListViewManager__get_ItemSum(operationItemListViewManager, 0LL);
      *(_DWORD *)(v15 + 24) = ItemSum;
      if ( ItemSum >= 1 )
      {
        v24 = 0;
        while ( 1 )
        {
          operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
          if ( !operationItemListViewManager )
            goto LABEL_55;
          operationItemListViewManager = (ListViewManager_o *)FriendOperationItemListViewManager__GetItem(
                                                                (FriendOperationItemListViewManager_o *)operationItemListViewManager,
                                                                v24,
                                                                v23);
          if ( !operationItemListViewManager )
            goto LABEL_55;
          x = operationItemListViewManager->fields.clipRange.fields.x;
          if ( LODWORD(x) == 9 )
            break;
          if ( LODWORD(x) == 3 )
          {
            dragParentObject = operationItemListViewManager->fields.dragParentObject;
            if ( !dragParentObject )
              goto LABEL_55;
            v17 = *(const MethodInfo **)&dragParentObject->fields.m_CachedPtr;
            if ( BYTE2(operationItemListViewManager->fields.SortObject) )
              v27 = BYTE1(operationItemListViewManager->fields.SortObject) == 0;
            else
              v27 = BYTE1(operationItemListViewManager->fields.SortObject) != 0;
            if ( v27 )
            {
              if ( !v18 )
                goto LABEL_55;
              items = v18->fields._items;
              v29 = Method_System_Collections_Generic_List_long__Add__;
              ++v18->fields._version;
              if ( !items )
                goto LABEL_55;
              size = v18->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                v43 = v29[4];
                v44 = v18;
LABEL_44:
                System_Collections_Generic_List_long___AddWithResize(
                  v44,
                  (int64_t)v17,
                  *(const MethodInfo_3568210 **)(*(_QWORD *)(v43 + 192) + 112LL));
                goto LABEL_45;
              }
              v31 = &items->obj.klass + size;
              v18->fields._size = size + 1;
            }
            else
            {
              if ( !v19 )
                goto LABEL_55;
              v37 = v19->fields._items;
              v38 = Method_System_Collections_Generic_List_long__Add__;
              ++v19->fields._version;
              if ( !v37 )
                goto LABEL_55;
              v39 = v19->fields._size;
              if ( (unsigned int)v39 >= v37->max_length )
              {
                v43 = v38[4];
                v44 = v19;
                goto LABEL_44;
              }
              v31 = &v37->obj.klass + v39;
              v19->fields._size = v39 + 1;
            }
LABEL_39:
            v31[4] = (Il2CppClass *)v17;
          }
LABEL_45:
          if ( ++v24 >= *(_DWORD *)(v15 + 24) )
            goto LABEL_46;
        }
        v32 = operationItemListViewManager->fields.dragParentObject;
        if ( !v32 )
          goto LABEL_55;
        v17 = *(const MethodInfo **)&v32->fields.m_CachedPtr;
        if ( BYTE2(operationItemListViewManager->fields.SortObject) )
          v33 = BYTE1(operationItemListViewManager->fields.SortObject) == 0;
        else
          v33 = BYTE1(operationItemListViewManager->fields.SortObject) != 0;
        if ( v33 )
        {
          if ( !v20 )
            goto LABEL_55;
          v34 = v20->fields._items;
          v35 = Method_System_Collections_Generic_List_long__Add__;
          ++v20->fields._version;
          if ( !v34 )
            goto LABEL_55;
          v36 = v20->fields._size;
          if ( (unsigned int)v36 >= v34->max_length )
          {
            v43 = v35[4];
            v44 = v20;
            goto LABEL_44;
          }
          v31 = &v34->obj.klass + v36;
          v20->fields._size = v36 + 1;
        }
        else
        {
          if ( !v21 )
            goto LABEL_55;
          v40 = v21->fields._items;
          v41 = Method_System_Collections_Generic_List_long__Add__;
          ++v21->fields._version;
          if ( !v40 )
            goto LABEL_55;
          v42 = v21->fields._size;
          if ( (unsigned int)v42 >= v40->max_length )
          {
            v43 = v41[4];
            v44 = v21;
            goto LABEL_44;
          }
          v31 = &v40->obj.klass + v42;
          v21->fields._size = v42 + 1;
        }
        goto LABEL_39;
      }
LABEL_46:
      v45 = (NetworkManager_ResultCallbackFunc_o *)sub_1B4D1DC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v45,
        (Il2CppObject *)v15,
        Method_FriendRootComponent___c__DisplayClass113_0__FriendLockRequst_b__0__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      operationItemListViewManager = (ListViewManager_o *)NetworkManager__getRequest_object_(
                                                            v45,
                                                            (const MethodInfo_2F86AFC *)Method_NetworkManager_getRequest_FirendLockSyncRequest___);
      if ( v18 )
      {
        v46 = (FirendLockSyncRequest_o *)operationItemListViewManager;
        operationItemListViewManager = (ListViewManager_o *)System_Collections_Generic_List_long___ToArray(
                                                              v18,
                                                              (const MethodInfo_3569CC8 *)Method_System_Collections_Generic_List_long__ToArray__);
        if ( v19 )
        {
          v47 = (System_Int64_array *)operationItemListViewManager;
          operationItemListViewManager = (ListViewManager_o *)System_Collections_Generic_List_long___ToArray(
                                                                v19,
                                                                (const MethodInfo_3569CC8 *)Method_System_Collections_Generic_List_long__ToArray__);
          if ( v20 )
          {
            v48 = (System_Int64_array *)operationItemListViewManager;
            operationItemListViewManager = (ListViewManager_o *)System_Collections_Generic_List_long___ToArray(
                                                                  v20,
                                                                  (const MethodInfo_3569CC8 *)Method_System_Collections_Generic_List_long__ToArray__);
            if ( v21 )
            {
              v49 = (System_Int64_array *)operationItemListViewManager;
              operationItemListViewManager = (ListViewManager_o *)System_Collections_Generic_List_long___ToArray(
                                                                    v21,
                                                                    (const MethodInfo_3569CC8 *)Method_System_Collections_Generic_List_long__ToArray__);
              if ( v46 )
              {
                FirendLockSyncRequest__beginRequest(
                  v46,
                  v47,
                  v48,
                  v49,
                  (System_Int64_array *)operationItemListViewManager,
                  0LL);
                return;
              }
            }
          }
        }
      }
    }
LABEL_55:
    sub_1B4D1EC(operationItemListViewManager, v17);
  }
  ActionExtensions__Call_object_(
    *(System_Action_T__o **)(v15 + 32),
    (Il2CppObject *)StringLiteral_21947/*"ok"*/,
    (const MethodInfo_2E57CDC *)Method_ActionExtensions_Call_string___);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall FriendRootComponent__GetDisplayPositionModeKindButtons(
        FriendRootComponent_o *this,
        const MethodInfo *method)
{
  FriendRootComponent_o *v2; // x19
  struct UISprite_o *modeEditLockSprite; // x8
  int mWidth; // w20
  float v5; // s1
  float v6; // s8
  float z; // s9
  float v8; // s10
  float v9; // s1
  float v10; // s2
  float v11; // s0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_49B5E9B & 1) == 0 )
  {
    this = (FriendRootComponent_o *)sub_1B4CF90(&FSUtility_TypeInfo, method);
    byte_49B5E9B = 1;
  }
  modeEditLockSprite = v2->fields.modeEditLockSprite;
  if ( !modeEditLockSprite
    || (this = (FriendRootComponent_o *)v2->fields.modeButtonParent) == 0LL
    || (mWidth = modeEditLockSprite->fields.mWidth,
        (this = (FriendRootComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)(&v5 - 1) = UnityEngine_Transform__get_localPosition(
                                                (UnityEngine_Transform_o *)this,
                                                0LL),
        (this = (FriendRootComponent_o *)v2->fields.modeButtonParent) == 0LL)
    || (v6 = v5,
        (this = (FriendRootComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL)) == 0LL) )
  {
    sub_1B4D1EC(this, method);
  }
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  z = localPosition.fields.z;
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  v8 = (float)mWidth;
  if ( !FSUtility__IsUnderVista(0LL) )
  {
    if ( !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    v8 = v8 - FSUtility__GetOffsetX(74.0, 1, 0LL);
  }
  v9 = v6;
  v10 = z;
  v11 = v8;
  result.fields.z = v10;
  result.fields.y = v9;
  result.fields.x = v11;
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
    sub_1B4D1EC(modeButtonParent, method);
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
  UnityEngine_Transform_o *transform; // x19
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1
  int v7; // s0

  modeButtonParent = this->fields.modeButtonParent;
  if ( !modeButtonParent
    || ((transform = UnityEngine_GameObject__get_transform(modeButtonParent, 0LL),
         !FriendRootComponent__get_tabKind(this, v5))
     || !this->fields.jumpTabKind
      ? (*(UnityEngine_Vector3_o *)&v7 = FriendRootComponent__GetDisplayPositionModeKindButtons(this, v6))
      : (*(UnityEngine_Vector3_o *)&v7 = FriendRootComponent__GetHidePositionModeKindButtons(this, v6)),
        !transform) )
  {
    sub_1B4D1EC(modeButtonParent, method);
  }
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v7, 0LL);
}


void __fastcall FriendRootComponent__OnClickBack(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  int32_t state; // w8
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  FriendRootComponent_messageRequestCallback_o *v8; // x20
  const MethodInfo *v9; // x2

  if ( (byte_49B5E96 & 1) == 0 )
  {
    sub_1B4CF90(&Method_FriendRootComponent_OnClickBack__, method);
    sub_1B4CF90(&Method_FriendRootComponent__OnClickBack_b__100_0__, v3);
    sub_1B4CF90(&FriendRootComponent_messageRequestCallback_TypeInfo, v4);
    byte_49B5E96 = 1;
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
  v6 = Method_FriendRootComponent_OnClickBack__;
  if ( (*((_BYTE *)Method_FriendRootComponent_OnClickBack__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1B4CFA8(Method_FriendRootComponent_OnClickBack__);
  v7 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 1, 0, 0LL);
  v8 = (FriendRootComponent_messageRequestCallback_o *)sub_1B4D1DC(FriendRootComponent_messageRequestCallback_TypeInfo);
  FriendRootComponent_messageRequestCallback___ctor(
    v8,
    (Il2CppObject *)this,
    Method_FriendRootComponent__OnClickBack_b__100_0__,
    0LL);
  FriendRootComponent__messageDispChangeRequest(this, v8, v9);
}


void __fastcall FriendRootComponent__OnClickHelp(FriendRootComponent_o *this, const MethodInfo *method)
{
  _QWORD *v2; // x0
  System_Reflection_MethodBase_o *v3; // x0

  if ( (byte_49B5EBF & 1) == 0 )
  {
    sub_1B4CF90(&Method_FriendRootComponent_OnClickHelp__, method);
    byte_49B5EBF = 1;
  }
  v2 = Method_FriendRootComponent_OnClickHelp__;
  if ( (*((_BYTE *)Method_FriendRootComponent_OnClickHelp__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_1B4CFA8(Method_FriendRootComponent_OnClickHelp__);
  v3 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 0, 0, 0LL);
  EventTutorialMaster__ShowTutorialWithoutCheck(-1, 49, 0LL, 0LL);
}


void __fastcall FriendRootComponent__OnClickModeEditLock(FriendRootComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_49B5E99 & 1) == 0 )
  {
    sub_1B4CF90(&Method_FriendRootComponent_OnClickModeEditLock__, method);
    byte_49B5E99 = 1;
  }
  if ( this->fields.currentModeKind != 1 )
  {
    v3 = Method_FriendRootComponent_OnClickModeEditLock__;
    if ( (*((_BYTE *)Method_FriendRootComponent_OnClickModeEditLock__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B4CFA8(Method_FriendRootComponent_OnClickModeEditLock__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    this->fields.currentModeKind = 1;
    FriendRootComponent__RefreshInfo(this, v5);
  }
}


void __fastcall FriendRootComponent__OnClickModeUserDetail(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_object__o *v4; // x20
  const MethodInfo *v5; // x2

  if ( (byte_49B5E98 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_string__TypeInfo, method);
    sub_1B4CF90(&Method_FriendRootComponent__OnClickModeUserDetail_b__102_0__, v3);
    byte_49B5E98 = 1;
  }
  if ( this->fields.currentModeKind )
  {
    v4 = (System_Action_object__o *)sub_1B4D1DC(System_Action_string__TypeInfo);
    System_Action_object____ctor(
      v4,
      (Il2CppObject *)this,
      (intptr_t)Method_FriendRootComponent__OnClickModeUserDetail_b__102_0__,
      0LL);
    FriendRootComponent__FriendLockRequst(this, (System_Action_string__o *)v4, v5);
  }
}


void __fastcall FriendRootComponent__OnClickTabFriend(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_object__o *v4; // x20
  const MethodInfo *v5; // x2

  if ( (byte_49B5E9C & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_string__TypeInfo, method);
    sub_1B4CF90(&Method_FriendRootComponent__OnClickTabFriend_b__109_0__, v3);
    byte_49B5E9C = 1;
  }
  v4 = (System_Action_object__o *)sub_1B4D1DC(System_Action_string__TypeInfo);
  System_Action_object____ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_FriendRootComponent__OnClickTabFriend_b__109_0__,
    0LL);
  FriendRootComponent__FriendLockRequst(this, (System_Action_string__o *)v4, v5);
}


void __fastcall FriendRootComponent__OnClickTabOffered(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  FriendRootComponent_messageRequestCallback_o *v4; // x20
  const MethodInfo *v5; // x2

  if ( (byte_49B5E9D & 1) == 0 )
  {
    sub_1B4CF90(&Method_FriendRootComponent__OnClickTabOffered_b__110_0__, method);
    sub_1B4CF90(&FriendRootComponent_messageRequestCallback_TypeInfo, v3);
    byte_49B5E9D = 1;
  }
  v4 = (FriendRootComponent_messageRequestCallback_o *)sub_1B4D1DC(FriendRootComponent_messageRequestCallback_TypeInfo);
  FriendRootComponent_messageRequestCallback___ctor(
    v4,
    (Il2CppObject *)this,
    Method_FriendRootComponent__OnClickTabOffered_b__110_0__,
    0LL);
  FriendRootComponent__messageDispChangeRequest(this, v4, v5);
}


void __fastcall FriendRootComponent__OnClickTabSearch(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  FriendRootComponent_messageRequestCallback_o *v4; // x20
  const MethodInfo *v5; // x2

  if ( (byte_49B5E9E & 1) == 0 )
  {
    sub_1B4CF90(&Method_FriendRootComponent__OnClickTabSearch_b__111_0__, method);
    sub_1B4CF90(&FriendRootComponent_messageRequestCallback_TypeInfo, v3);
    byte_49B5E9E = 1;
  }
  v4 = (FriendRootComponent_messageRequestCallback_o *)sub_1B4D1DC(FriendRootComponent_messageRequestCallback_TypeInfo);
  FriendRootComponent_messageRequestCallback___ctor(
    v4,
    (Il2CppObject *)this,
    Method_FriendRootComponent__OnClickTabSearch_b__111_0__,
    0LL);
  FriendRootComponent__messageDispChangeRequest(this, v4, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendRootComponent__OnEndRequestDialog(
        FriendRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v4; // x1
  CommonUI_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_49B5E90 & 1) == 0 )
  {
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    sub_1B4CF90(&StringLiteral_10847/*"REQUEST_OK"*/, v4);
    byte_49B5E90 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.myFSM) == 0LL) )
  {
    sub_1B4D1EC(Instance, v6);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_10847/*"REQUEST_OK"*/, 0LL);
}


void __fastcall FriendRootComponent__OnMoveEnd(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  FriendRootComponent_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  int32_t jumpTabKind; // w22
  int32_t v10; // w1
  FriendOperationItemListViewManager_o *v11; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v12; // x21
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x2
  FriendOperationItemListViewManager_o *v15; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v16; // x21
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x2
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  FriendSearchMenu_o *friendSearchMenu; // x20
  FriendSearchMenu_CallbackFunc_o *v21; // x21
  FriendOperationItemListViewManager_o *v22; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v23; // x21
  const MethodInfo *v24; // x3
  const MethodInfo *v25; // x2
  const MethodInfo *v26; // x1
  struct ClassButtonControlComponent_o *v27; // x8
  FriendSearchMenu_o *v28; // x20
  FriendSearchMenu_CallbackFunc_o *v29; // x21

  v3 = this;
  if ( (byte_49B5E95 & 1) == 0 )
  {
    sub_1B4CF90(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_1B4CF90(&FriendSearchMenu_CallbackFunc_TypeInfo, v4);
    sub_1B4CF90(&Method_FriendRootComponent_OnSelectFriendItem__, v5);
    sub_1B4CF90(&Method_FriendRootComponent_OnSelectSearchFriend__, v6);
    this = (FriendRootComponent_o *)sub_1B4CF90(&StringLiteral_5359/*"END_ACTION"*/, v7);
    byte_49B5E95 = 1;
  }
  switch ( v3->fields.state )
  {
    case 2:
    case 3:
      jumpTabKind = v3->fields.jumpTabKind;
      v3->fields.state = 4;
      if ( jumpTabKind != 3 )
        goto LABEL_15;
      v10 = 0;
      goto LABEL_14;
    case 5:
    case 6:
    case 0xA:
    case 0xB:
    case 0xF:
    case 0x10:
      operationItemListViewManager = v3->fields.operationItemListViewManager;
      v3->fields.state = 1;
      if ( !operationItemListViewManager )
        goto LABEL_39;
      FriendOperationItemListViewManager__DestroyList(operationItemListViewManager, method);
      operationItemListViewManager = v3->fields.operationItemListViewManager;
      if ( !operationItemListViewManager )
        goto LABEL_39;
      operationItemListViewManager = (FriendOperationItemListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                               (UnityEngine_Component_o *)operationItemListViewManager,
                                                                               0LL);
      if ( !operationItemListViewManager )
        goto LABEL_39;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)operationItemListViewManager, 0, 0LL);
      goto LABEL_27;
    case 7:
    case 8:
      v3->fields.state = 9;
      v11 = v3->fields.operationItemListViewManager;
      v12 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1B4D1DC(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
      FriendOperationItemListViewManager_CallbackFunc___ctor(
        v12,
        (Il2CppObject *)v3,
        (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
        v13);
      if ( !v11 )
        goto LABEL_39;
      v11->fields.callbackFunc = v12;
      sub_1B4CF34(&v11->fields.callbackFunc);
      FriendOperationItemListViewManager__SetMode_30966740(v11, 2, v14);
LABEL_27:
      FriendRootComponent__RefreshInfo(v3, method);
      goto LABEL_28;
    case 0xC:
    case 0xD:
      jumpTabKind = v3->fields.jumpTabKind;
      v3->fields.state = 14;
      if ( jumpTabKind != 3 )
        goto LABEL_15;
      v10 = 1;
LABEL_14:
      FriendRootComponent__set_tabKind(this, v10, v2);
LABEL_15:
      FriendRootComponent__RefreshTab(v3, method);
      v15 = v3->fields.operationItemListViewManager;
      v16 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1B4D1DC(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
      FriendOperationItemListViewManager_CallbackFunc___ctor(
        v16,
        (Il2CppObject *)v3,
        (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
        v17);
      if ( !v15 )
        goto LABEL_39;
      v15->fields.callbackFunc = v16;
      sub_1B4CF34(&v15->fields.callbackFunc);
      FriendOperationItemListViewManager__SetMode_30966740(v15, 2, v18);
      classButtonControl = v3->fields.classButtonControl;
      if ( !classButtonControl )
        goto LABEL_39;
      classButtonControl->fields.updateEnable = 1;
      FriendRootComponent__RefreshInfo(v3, method);
      goto LABEL_18;
    case 0x11:
      v3->fields.state = 18;
      return;
    case 0x12:
      v3->fields.state = 19;
      v22 = v3->fields.operationItemListViewManager;
      v23 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1B4D1DC(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
      FriendOperationItemListViewManager_CallbackFunc___ctor(
        v23,
        (Il2CppObject *)v3,
        (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
        v24);
      if ( !v22 )
        goto LABEL_39;
      v22->fields.callbackFunc = v23;
      sub_1B4CF34(&v22->fields.callbackFunc);
      FriendOperationItemListViewManager__SetMode_30966740(v22, 2, v25);
      goto LABEL_28;
    case 0x14:
    case 0x15:
      v3->fields.state = 23;
      friendSearchMenu = v3->fields.friendSearchMenu;
      v21 = (FriendSearchMenu_CallbackFunc_o *)sub_1B4D1DC(FriendSearchMenu_CallbackFunc_TypeInfo);
      FriendSearchMenu_CallbackFunc___ctor(
        v21,
        (Il2CppObject *)v3,
        Method_FriendRootComponent_OnSelectSearchFriend__,
        0LL);
      if ( !friendSearchMenu )
        goto LABEL_39;
      FriendSearchMenu__Open(friendSearchMenu, v21, 0, 0LL);
      operationItemListViewManager = v3->fields.operationItemListViewManager;
      if ( !operationItemListViewManager )
        goto LABEL_39;
      FriendOperationItemListViewManager__DestroyList(operationItemListViewManager, method);
      operationItemListViewManager = v3->fields.operationItemListViewManager;
      if ( !operationItemListViewManager )
        goto LABEL_39;
      operationItemListViewManager = (FriendOperationItemListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                               (UnityEngine_Component_o *)operationItemListViewManager,
                                                                               0LL);
      if ( !operationItemListViewManager )
        goto LABEL_39;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)operationItemListViewManager, 0, 0LL);
LABEL_28:
      operationItemListViewManager = (FriendOperationItemListViewManager_o *)v3->fields.myFSM;
      if ( !operationItemListViewManager )
        goto LABEL_39;
      PlayMakerFSM__SendEvent(
        (PlayMakerFSM_o *)operationItemListViewManager,
        (System_String_o *)StringLiteral_5359/*"END_ACTION"*/,
        0LL);
      break;
    case 0x16:
      jumpTabKind = v3->fields.jumpTabKind;
      v3->fields.state = 23;
      if ( jumpTabKind == 3 )
        FriendRootComponent__set_tabKind(this, 2, v2);
      FriendRootComponent__RefreshTab(v3, method);
      FriendRootComponent__RefreshInfo(v3, v26);
      v27 = v3->fields.classButtonControl;
      if ( !v27 )
        goto LABEL_39;
      v27->fields.updateEnable = 1;
      v28 = v3->fields.friendSearchMenu;
      v29 = (FriendSearchMenu_CallbackFunc_o *)sub_1B4D1DC(FriendSearchMenu_CallbackFunc_TypeInfo);
      FriendSearchMenu_CallbackFunc___ctor(
        v29,
        (Il2CppObject *)v3,
        Method_FriendRootComponent_OnSelectSearchFriend__,
        0LL);
      if ( !v28 )
        goto LABEL_39;
      FriendSearchMenu__Open(v28, v29, 1, 0LL);
LABEL_18:
      operationItemListViewManager = (FriendOperationItemListViewManager_o *)v3->fields.myFSM;
      if ( !operationItemListViewManager )
LABEL_39:
        sub_1B4D1EC(operationItemListViewManager, method);
      PlayMakerFSM__SendEvent(
        (PlayMakerFSM_o *)operationItemListViewManager,
        (System_String_o *)StringLiteral_5359/*"END_ACTION"*/,
        0LL);
      if ( jumpTabKind != 3 )
        v3->fields.jumpTabKind = 3;
      break;
    case 0x18:
    case 0x19:
      v3->fields.state = 1;
      goto LABEL_27;
    default:
      return;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendRootComponent__OnSelectFriendItem(
        FriendRootComponent_o *this,
        int32_t kind,
        int32_t n,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  UserGameEntity_o *SelfUserGame; // x21
  DataManager_o *Instance; // x0
  const MethodInfo *v33; // x1
  const MethodInfo *v34; // x2
  Il2CppObject *MasterData_object; // x22
  const MethodInfo *v36; // x2
  __int64 v37; // x8
  __int64 v38; // x20
  SkillInfo_o *v39; // x22
  _QWORD *v40; // x0
  System_Reflection_MethodBase_o *v41; // x0
  System_String_o *v42; // x20
  System_String_o *v43; // x21
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  Il2CppObject *v47; // x0
  System_String_o *v48; // x0
  _QWORD *v49; // x0
  System_Reflection_MethodBase_o *v50; // x0
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v52; // x0
  const MethodInfo *v53; // x3
  intptr_t v54; // w2
  _QWORD *v55; // x0
  System_Reflection_MethodBase_o *v56; // x0
  const MethodInfo *v57; // x2
  FriendOperationItemListViewItem_o *v58; // x21
  Il2CppObject *lockCountObj; // x8
  const MethodInfo *v60; // x2
  __int64 v61; // x20
  SkillInfo_o *v62; // x25
  Il2CppObject *Entity; // x21
  DataManager_o *v64; // x20
  System_String_o *v65; // x21
  System_String_o *v66; // x22
  __int64 v67; // x2
  __int64 v68; // x3
  __int64 v69; // x4
  Il2CppObject *v70; // x0
  System_String_o *v71; // x0
  __int64 v72; // x2
  __int64 v73; // x3
  __int64 v74; // x4
  System_String_o *v75; // x21
  Il2CppObject *v76; // x0
  System_String_o *v77; // x20
  _QWORD *v78; // x0
  System_Reflection_MethodBase_o *v79; // x0
  __int64 *v80; // x8
  _QWORD *v81; // x0
  System_Reflection_MethodBase_o *v82; // x0
  _QWORD *v83; // x0
  System_Reflection_MethodBase_o *v84; // x0
  _QWORD *v85; // x0
  System_Reflection_MethodBase_o *v86; // x0
  _QWORD *v87; // x0
  System_Reflection_MethodBase_o *v88; // x0
  const MethodInfo *v89; // x2
  DataManager_o *v90; // x8
  const MethodInfo *v91; // x2
  _QWORD *v92; // x0
  System_Reflection_MethodBase_o *v93; // x0
  const MethodInfo *v94; // x2
  DataManager_o *v95; // x8
  Il2CppObject *v96; // x9
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  const MethodInfo *v98; // x2
  _QWORD *v99; // x0
  System_Reflection_MethodBase_o *v100; // x0
  const MethodInfo *v101; // x2
  const MethodInfo *v102; // x2
  FriendOperationItemListViewItem_o *v103; // x20
  ServantLeaderInfo_o *ServantLeader; // x0
  const MethodInfo *v105; // x1
  EquipTargetInfo_o *EquipTargetInfo; // x0
  EquipTargetInfo_o *v107; // x21
  __int64 v108; // x22
  __int64 v109; // x23
  _QWORD *v110; // x0
  System_Reflection_MethodBase_o *v111; // x0
  const MethodInfo *v112; // x3
  int32_t v113; // w2
  FriendWarningDialog_o *friendWarningDialog; // x20
  FriendWarningDialog_CallbackFunc_o *v115; // x21
  _QWORD *v116; // x0
  System_Reflection_MethodBase_o *v117; // x0
  struct FriendOperationItemListViewManager_CallbackFunc_o *v118; // x21
  const MethodInfo *v119; // x2
  FriendOperationItemListViewItem_o *Item; // x0
  FriendOperationItemListViewItem_o *v121; // x20
  _QWORD *v122; // x0
  System_Reflection_MethodBase_o *v123; // x0
  const MethodInfo *v124; // x1
  int m_CancellationTokenSource; // [xsp+8h] [xbp-78h] BYREF
  int32_t lv; // [xsp+Ch] [xbp-74h] BYREF
  System_String_o *detail; // [xsp+10h] [xbp-70h] BYREF
  System_String_o *name; // [xsp+18h] [xbp-68h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+20h] [xbp-60h] BYREF
  System_String_o *v130; // [xsp+28h] [xbp-58h] BYREF
  System_String_o *v131; // [xsp+30h] [xbp-50h] BYREF
  SkillInfo_array *v132; // [xsp+38h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v133; // 0:x0.16

  if ( (byte_49B5EA5 & 1) == 0 )
  {
    sub_1B4CF90(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&kind);
    sub_1B4CF90(&FriendWarningDialog_CallbackFunc_TypeInfo, v7);
    sub_1B4CF90(&Method_DataManager_GetMasterData_SkillLvMaster___, v8);
    sub_1B4CF90(&Method_DataManager_GetMasterData_SkillMaster___, v9);
    sub_1B4CF90(&Method_DataManager_GetMasterData_TblFriendMaster___, v10);
    sub_1B4CF90(&Method_DataManager_GetMaster_SkillMaster___, v11);
    sub_1B4CF90(&DataManager_TypeInfo, v12);
    sub_1B4CF90(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v13);
    sub_1B4CF90(&Method_FriendRootComponent_EndMaxFriendWarning__, v14);
    sub_1B4CF90(&Method_FriendRootComponent_OnSelectFriendItem__, v15);
    sub_1B4CF90(&int_TypeInfo, v16);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v17);
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v19);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_1B4CF90(&StringLiteral_8460/*"MENU_SELECT_ITEM_ACCEPT"*/, v21);
    sub_1B4CF90(&StringLiteral_115/*" "*/, v22);
    sub_1B4CF90(&StringLiteral_8466/*"MENU_SELECT_ITEM_REMOVE_FOLLOW"*/, v23);
    sub_1B4CF90(&StringLiteral_8461/*"MENU_SELECT_ITEM_CANCEL"*/, v24);
    sub_1B4CF90(&StringLiteral_8355/*"MASTER_EQSKILL_LV_TXT"*/, v25);
    sub_1B4CF90(&StringLiteral_8463/*"MENU_SELECT_ITEM_OFFER"*/, v26);
    sub_1B4CF90(&StringLiteral_2873/*"BATTLE_SKILLCHARGETURN"*/, v27);
    sub_1B4CF90(&StringLiteral_8464/*"MENU_SELECT_ITEM_REJECT"*/, v28);
    sub_1B4CF90(&StringLiteral_1/*""*/, v29);
    sub_1B4CF90(&StringLiteral_8465/*"MENU_SELECT_ITEM_REMOVE"*/, v30);
    byte_49B5EA5 = 1;
  }
  v131 = 0LL;
  v132 = 0LL;
  skillInfoList = 0LL;
  v130 = 0LL;
  detail = 0LL;
  name = 0LL;
  this->fields.selectItemNum = n;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_133;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_TblFriendMaster___);
  switch ( kind )
  {
    case 1:
    case 2:
    case 3:
      v55 = Method_FriendRootComponent_OnSelectFriendItem__;
      if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
        v55 = (_QWORD *)sub_1B4CFA8(Method_FriendRootComponent_OnSelectFriendItem__);
      v56 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v55, v55[4]);
      OverwriteAssetSoundName__PlaySystemSe(v56, 0, 0, 0LL);
      Instance = (DataManager_o *)this->fields.operationItemListViewManager;
      if ( !Instance )
        goto LABEL_133;
      Instance = (DataManager_o *)FriendOperationItemListViewManager__GetItem(
                                    (FriendOperationItemListViewManager_o *)Instance,
                                    this->fields.selectItemNum,
                                    v57);
      if ( !Instance )
        goto LABEL_133;
      v58 = (FriendOperationItemListViewItem_o *)Instance;
      Instance = (DataManager_o *)Instance->fields.context;
      if ( !Instance )
        goto LABEL_133;
      lockCountObj = Instance->fields.lockCountObj;
      if ( !lockCountObj )
        goto LABEL_133;
      if ( !LODWORD(lockCountObj[1].monitor) )
        goto LABEL_134;
      if ( !OtherUserGameEntity__getServantLeaderInfo(
              (OtherUserGameEntity_o *)Instance,
              v58->fields.classPos,
              0,
              0,
              (int32_t)lockCountObj[2].klass,
              0LL) )
        goto LABEL_55;
      if ( kind == 2 )
        v61 = 1LL;
      else
        v61 = 2LL * (kind == 3);
      Instance = (DataManager_o *)FriendOperationItemListViewItem__GetSkillInfo(v58, &v132, v60);
      if ( !v132 )
        goto LABEL_133;
      if ( (unsigned int)v61 >= v132->max_length )
        goto LABEL_134;
      v62 = v132->m_Items[v61];
      if ( !v62 || v62->fields.id < 1 || v62->fields.lv < 1 )
        goto LABEL_55;
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_133;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_SkillMaster___);
      if ( !Instance )
        goto LABEL_133;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                 v62->fields.id,
                 (const MethodInfo_319D99C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_133;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_SkillLvMaster___);
      if ( !Instance )
        goto LABEL_133;
      Instance = (DataManager_o *)SkillLvMaster__GetEntity(
                                    (SkillLvMaster_o *)Instance,
                                    v62->fields.id,
                                    v62->fields.lv,
                                    0LL);
      if ( !Entity )
        goto LABEL_133;
      v64 = Instance;
      SkillEntity__getSkillMessageInfo((SkillEntity_o *)Entity, &v131, &v130, v62->fields.lv, 0LL);
      v65 = v131;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v66 = LocalizationManager__Get((System_String_o *)StringLiteral_8355/*"MASTER_EQSKILL_LV_TXT"*/, 0LL);
      lv = v62->fields.lv;
      v70 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv, v67, v68, v69);
      v71 = System_String__Format(v66, v70, 0LL);
      v131 = System_String__Concat_61131716(v65, (System_String_o *)StringLiteral_115/*" "*/, v71, 0LL);
      Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2873/*"BATTLE_SKILLCHARGETURN"*/, 0LL);
      if ( !v64 )
        goto LABEL_133;
      v75 = (System_String_o *)Instance;
      m_CancellationTokenSource = (int)v64->fields.m_CancellationTokenSource;
      v76 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &m_CancellationTokenSource, v72, v73, v74);
      v77 = System_String__Format(v75, v76, 0LL);
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !Instance )
        goto LABEL_133;
      CommonUI__OpenDetailLongInfoDialog((CommonUI_o *)Instance, v131, v77, v130, 1, 0, 0LL);
LABEL_55:
      operationItemListViewManager = this->fields.operationItemListViewManager;
      v52 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1B4D1DC(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
      v54 = (int)Method_FriendRootComponent_OnSelectFriendItem__;
      goto LABEL_123;
    case 4:
      v78 = Method_FriendRootComponent_OnSelectFriendItem__;
      if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
        v78 = (_QWORD *)sub_1B4CFA8(Method_FriendRootComponent_OnSelectFriendItem__);
      v79 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v78, v78[4]);
      OverwriteAssetSoundName__PlaySystemSe(v79, 0, 0, 0LL);
      if ( !MasterData_object )
        goto LABEL_133;
      Instance = (DataManager_o *)TblFriendMaster__GetList((TblFriendMaster_o *)MasterData_object, 3, 0LL);
      if ( !Instance || !SelfUserGame )
        goto LABEL_133;
      if ( SelfUserGame->fields.friendKeep <= SLODWORD(Instance->fields.m_CancellationTokenSource) )
        goto LABEL_117;
      Instance = (DataManager_o *)this->fields.myFSM;
      if ( !Instance )
        goto LABEL_133;
      v80 = &StringLiteral_8463/*"MENU_SELECT_ITEM_OFFER"*/;
      goto LABEL_126;
    case 5:
      v81 = Method_FriendRootComponent_OnSelectFriendItem__;
      if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
        v81 = (_QWORD *)sub_1B4CFA8(Method_FriendRootComponent_OnSelectFriendItem__);
      v82 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v81, v81[4]);
      OverwriteAssetSoundName__PlaySystemSe(v82, 0, 0, 0LL);
      if ( !MasterData_object )
        goto LABEL_133;
      Instance = (DataManager_o *)TblFriendMaster__GetList((TblFriendMaster_o *)MasterData_object, 3, 0LL);
      if ( !Instance || !SelfUserGame )
        goto LABEL_133;
      if ( SelfUserGame->fields.friendKeep <= SLODWORD(Instance->fields.m_CancellationTokenSource) )
      {
LABEL_117:
        friendWarningDialog = this->fields.friendWarningDialog;
        v115 = (FriendWarningDialog_CallbackFunc_o *)sub_1B4D1DC(FriendWarningDialog_CallbackFunc_TypeInfo);
        FriendWarningDialog_CallbackFunc___ctor(
          v115,
          (Il2CppObject *)this,
          Method_FriendRootComponent_EndMaxFriendWarning__,
          0LL);
        if ( friendWarningDialog )
        {
          FriendWarningDialog__Open(friendWarningDialog, 1, v115, 0LL);
          return;
        }
LABEL_133:
        sub_1B4D1EC(Instance, v33);
      }
      Instance = (DataManager_o *)this->fields.myFSM;
      if ( !Instance )
        goto LABEL_133;
      v80 = &StringLiteral_8460/*"MENU_SELECT_ITEM_ACCEPT"*/;
LABEL_126:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v80, 0LL);
      return;
    case 6:
      v83 = Method_FriendRootComponent_OnSelectFriendItem__;
      if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
        v83 = (_QWORD *)sub_1B4CFA8(Method_FriendRootComponent_OnSelectFriendItem__);
      v84 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v83, v83[4]);
      OverwriteAssetSoundName__PlaySystemSe(v84, 0, 0, 0LL);
      Instance = (DataManager_o *)this->fields.myFSM;
      if ( !Instance )
        goto LABEL_133;
      v80 = &StringLiteral_8464/*"MENU_SELECT_ITEM_REJECT"*/;
      goto LABEL_126;
    case 7:
      v85 = Method_FriendRootComponent_OnSelectFriendItem__;
      if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
        v85 = (_QWORD *)sub_1B4CFA8(Method_FriendRootComponent_OnSelectFriendItem__);
      v86 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v85, v85[4]);
      OverwriteAssetSoundName__PlaySystemSe(v86, 0, 0, 0LL);
      Instance = (DataManager_o *)this->fields.myFSM;
      if ( !Instance )
        goto LABEL_133;
      v80 = &StringLiteral_8461/*"MENU_SELECT_ITEM_CANCEL"*/;
      goto LABEL_126;
    case 8:
      v87 = Method_FriendRootComponent_OnSelectFriendItem__;
      if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
        v87 = (_QWORD *)sub_1B4CFA8(Method_FriendRootComponent_OnSelectFriendItem__);
      v88 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v87, v87[4]);
      OverwriteAssetSoundName__PlaySystemSe(v88, 0, 0, 0LL);
      Instance = (DataManager_o *)this->fields.operationItemListViewManager;
      if ( !Instance )
        goto LABEL_133;
      Instance = (DataManager_o *)FriendOperationItemListViewManager__GetItem(
                                    (FriendOperationItemListViewManager_o *)Instance,
                                    this->fields.selectItemNum,
                                    v89);
      if ( !Instance )
        goto LABEL_133;
      v90 = Instance;
      Instance = (DataManager_o *)this->fields.myFSM;
      if ( !Instance )
        goto LABEL_133;
      if ( LODWORD(v90->fields.masterLoadThreads) == 9 )
        v80 = &StringLiteral_8466/*"MENU_SELECT_ITEM_REMOVE_FOLLOW"*/;
      else
        v80 = &StringLiteral_8465/*"MENU_SELECT_ITEM_REMOVE"*/;
      goto LABEL_126;
    case 11:
      v99 = Method_FriendRootComponent_OnSelectFriendItem__;
      if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
        v99 = (_QWORD *)sub_1B4CFA8(Method_FriendRootComponent_OnSelectFriendItem__);
      v100 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v99, v99[4]);
      OverwriteAssetSoundName__PlaySystemSe(v100, 0, 0, 0LL);
      Instance = (DataManager_o *)this->fields.operationItemListViewManager;
      if ( !Instance )
        goto LABEL_133;
      Instance = (DataManager_o *)FriendOperationItemListViewManager__GetItem(
                                    (FriendOperationItemListViewManager_o *)Instance,
                                    this->fields.selectItemNum,
                                    v101);
      if ( !Instance )
        goto LABEL_133;
      FriendOperationItemListViewItem__set_isSwapMessageDisp(
        (FriendOperationItemListViewItem_o *)Instance,
        LOBYTE(Instance[1].fields.m_CancellationTokenSource) == 0,
        v102);
      goto LABEL_122;
    case 12:
      Instance = (DataManager_o *)this->fields.operationItemListViewManager;
      if ( !Instance )
        goto LABEL_133;
      Instance = (DataManager_o *)FriendOperationItemListViewManager__GetItem(
                                    (FriendOperationItemListViewManager_o *)Instance,
                                    this->fields.selectItemNum,
                                    v34);
      if ( !Instance )
        goto LABEL_133;
      v103 = (FriendOperationItemListViewItem_o *)Instance;
      ServantLeader = FriendOperationItemListViewItem__get_ServantLeader(
                        (FriendOperationItemListViewItem_o *)Instance,
                        v33);
      if ( !ServantLeader || !ServantLeaderInfo__IsHideEquip(ServantLeader, 0LL) )
      {
        EquipTargetInfo = FriendOperationItemListViewItem__get_EquipTargetInfo(v103, v105);
        if ( EquipTargetInfo )
        {
          v107 = EquipTargetInfo;
          v109 = *(_QWORD *)&EquipTargetInfo->fields.svtId.fields.currentCryptoKey;
          v108 = *(_QWORD *)&EquipTargetInfo->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v133.fields.currentCryptoKey = v109;
          *(_QWORD *)&v133.fields.fakeValue = v108;
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v133, 0LL) >= 1 )
          {
            v110 = Method_FriendRootComponent_OnSelectFriendItem__;
            if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
              v110 = (_QWORD *)sub_1B4CFA8(Method_FriendRootComponent_OnSelectFriendItem__);
            v111 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v110, v110[4]);
            OverwriteAssetSoundName__PlaySystemSe(v111, 0, 0, 0LL);
            if ( v103->fields.kind == 9 )
              v113 = 14;
            else
              v113 = 13;
            FriendRootComponent__SelectShowServantEquip(this, v107, v113, v112);
            return;
          }
        }
      }
      v116 = Method_FriendRootComponent_OnSelectFriendItem__;
      if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
        v116 = (_QWORD *)sub_1B4CFA8(Method_FriendRootComponent_OnSelectFriendItem__);
      v117 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v116, v116[4]);
      OverwriteAssetSoundName__PlaySystemSe(v117, 2, 0, 0LL);
      goto LABEL_122;
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
      Instance = (DataManager_o *)this->fields.operationItemListViewManager;
      if ( !Instance )
        goto LABEL_133;
      Instance = (DataManager_o *)FriendOperationItemListViewManager__GetItem(
                                    (FriendOperationItemListViewManager_o *)Instance,
                                    this->fields.selectItemNum,
                                    v34);
      v37 = (unsigned int)(kind - 14);
      v38 = (unsigned int)v37 < 4 ? v37 + 1 : 0LL;
      if ( !Instance )
        goto LABEL_133;
      Instance = (DataManager_o *)FriendOperationItemListViewItem__GetAppendSkillInfo(
                                    (FriendOperationItemListViewItem_o *)Instance,
                                    &skillInfoList,
                                    v36);
      if ( !skillInfoList )
        goto LABEL_133;
      if ( (unsigned int)v38 >= skillInfoList->max_length )
        goto LABEL_134;
      v39 = skillInfoList->m_Items[v38];
      if ( v39 && v39->fields.id >= 1 && v39->fields.lv >= 1 )
      {
        v40 = Method_FriendRootComponent_OnSelectFriendItem__;
        if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
          v40 = (_QWORD *)sub_1B4CFA8(Method_FriendRootComponent_OnSelectFriendItem__);
        v41 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v40, v40[4]);
        OverwriteAssetSoundName__PlaySystemSe(v41, 0, 0, 0LL);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_SkillMaster___);
        if ( !Instance )
          goto LABEL_133;
        Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                      v39->fields.id,
                                      (const MethodInfo_319D99C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_133;
        SkillEntity__getSkillMessageInfo((SkillEntity_o *)Instance, &name, &detail, v39->fields.lv, 0LL);
        v42 = name;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v43 = LocalizationManager__Get((System_String_o *)StringLiteral_8355/*"MASTER_EQSKILL_LV_TXT"*/, 0LL);
        lv = v39->fields.lv;
        v47 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv, v44, v45, v46);
        v48 = System_String__Format(v43, v47, 0LL);
        name = System_String__Concat_61131716(v42, (System_String_o *)StringLiteral_115/*" "*/, v48, 0LL);
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !Instance )
          goto LABEL_133;
        CommonUI__OpenDetailLongInfoDialog(
          (CommonUI_o *)Instance,
          name,
          (System_String_o *)StringLiteral_1/*""*/,
          detail,
          1,
          0,
          0LL);
      }
      else
      {
        v49 = Method_FriendRootComponent_OnSelectFriendItem__;
        if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
          v49 = (_QWORD *)sub_1B4CFA8(Method_FriendRootComponent_OnSelectFriendItem__);
        v50 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v49, v49[4]);
        OverwriteAssetSoundName__PlaySystemSe(v50, 2, 0, 0LL);
      }
      goto LABEL_28;
    default:
      if ( this->fields.currentModeKind == 1 && !FriendRootComponent__get_tabKind(this, v33) )
      {
        Instance = (DataManager_o *)this->fields.operationItemListViewManager;
        if ( !Instance )
          goto LABEL_133;
        Item = FriendOperationItemListViewManager__GetItem(
                 (FriendOperationItemListViewManager_o *)Instance,
                 this->fields.selectItemNum,
                 v91);
        if ( Item )
        {
          v121 = Item;
          v122 = Method_FriendRootComponent_OnSelectFriendItem__;
          if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
            v122 = (_QWORD *)sub_1B4CFA8(Method_FriendRootComponent_OnSelectFriendItem__);
          v123 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v122, v122[4]);
          OverwriteAssetSoundName__PlaySystemSe(v123, 11, 0, 0LL);
          FriendOperationItemListViewItem__SwapLock(v121, v124);
        }
LABEL_28:
        operationItemListViewManager = this->fields.operationItemListViewManager;
        v52 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1B4D1DC(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
        v54 = (int)Method_FriendRootComponent_OnSelectFriendItem__;
      }
      else
      {
        v92 = Method_FriendRootComponent_OnSelectFriendItem__;
        if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
          v92 = (_QWORD *)sub_1B4CFA8(Method_FriendRootComponent_OnSelectFriendItem__);
        v93 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v92, v92[4]);
        OverwriteAssetSoundName__PlaySystemSe(v93, 0, 0, 0LL);
        Instance = (DataManager_o *)this->fields.operationItemListViewManager;
        if ( !Instance )
          goto LABEL_133;
        Instance = (DataManager_o *)FriendOperationItemListViewManager__GetItem(
                                      (FriendOperationItemListViewManager_o *)Instance,
                                      this->fields.selectItemNum,
                                      v94);
        if ( !Instance )
          goto LABEL_133;
        v95 = Instance;
        Instance = (DataManager_o *)Instance->fields.context;
        if ( !Instance )
          goto LABEL_133;
        v96 = Instance->fields.lockCountObj;
        if ( !v96 )
          goto LABEL_133;
        if ( !LODWORD(v96[1].monitor) )
LABEL_134:
          sub_1B4D1F4(Instance, v33);
        ServantLeaderInfo = OtherUserGameEntity__getServantLeaderInfo(
                              (OtherUserGameEntity_o *)Instance,
                              v95[1].fields.m_CachedPtr,
                              0,
                              0,
                              (int32_t)v96[2].klass,
                              0LL);
        if ( ServantLeaderInfo )
        {
          FriendRootComponent__SelectShowServant(this, ServantLeaderInfo, v98);
          return;
        }
LABEL_122:
        operationItemListViewManager = this->fields.operationItemListViewManager;
        v52 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1B4D1DC(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
        v54 = (int)Method_FriendRootComponent_OnSelectFriendItem__;
      }
LABEL_123:
      v118 = v52;
      FriendOperationItemListViewManager_CallbackFunc___ctor(v52, (Il2CppObject *)this, v54, v53);
      if ( operationItemListViewManager )
      {
        operationItemListViewManager->fields.callbackFunc = v118;
        sub_1B4CF34(&operationItemListViewManager->fields.callbackFunc);
        FriendOperationItemListViewManager__SetMode_30966740(operationItemListViewManager, 2, v119);
        return;
      }
      goto LABEL_133;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendRootComponent__OnSelectOffer(
        FriendRootComponent_o *this,
        int32_t state,
        int32_t classPos,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  ClassButtonControlComponent_o *classButtonControl; // x0
  __int64 *v10; // x8

  if ( (byte_49B5EAF & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_8462/*"MENU_SELECT_ITEM_FOLLOW"*/, *(_QWORD *)&state);
    sub_1B4CF90(&StringLiteral_8463/*"MENU_SELECT_ITEM_OFFER"*/, v7);
    sub_1B4CF90(&StringLiteral_8446/*"MENU_CANCEL"*/, v8);
    byte_49B5EAF = 1;
  }
  classButtonControl = this->fields.classButtonControl;
  if ( !classButtonControl )
    goto LABEL_13;
  ClassButtonControlComponent__setCursor(classButtonControl, classPos, 0LL);
  if ( state == 3 )
  {
    classButtonControl = (ClassButtonControlComponent_o *)this->fields.myFSM;
    if ( classButtonControl )
    {
      v10 = &StringLiteral_8462/*"MENU_SELECT_ITEM_FOLLOW"*/;
      goto LABEL_12;
    }
LABEL_13:
    sub_1B4D1EC(classButtonControl, *(_QWORD *)&state);
  }
  if ( state != 2 )
  {
    classButtonControl = (ClassButtonControlComponent_o *)this->fields.myFSM;
    if ( classButtonControl )
    {
      v10 = &StringLiteral_8446/*"MENU_CANCEL"*/;
      goto LABEL_12;
    }
    goto LABEL_13;
  }
  classButtonControl = (ClassButtonControlComponent_o *)this->fields.myFSM;
  if ( !classButtonControl )
    goto LABEL_13;
  v10 = &StringLiteral_8463/*"MENU_SELECT_ITEM_OFFER"*/;
LABEL_12:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)classButtonControl, (System_String_o *)*v10, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendRootComponent__OnSelectSearchFriend(
        FriendRootComponent_o *this,
        bool isDecide,
        System_String_o *friendCode,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  PlayMakerFSM_o *myFSM; // x0
  __int64 *v10; // x8

  if ( (byte_49B5EAE & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_8447/*"MENU_DECIDE"*/, isDecide);
    sub_1B4CF90(&StringLiteral_8446/*"MENU_CANCEL"*/, v7);
    byte_49B5EAE = 1;
  }
  this->fields.selectFriendCode = friendCode;
  sub_1B4CF34(&this->fields.selectFriendCode);
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1B4D1EC(0LL, v8);
  v10 = &StringLiteral_8447/*"MENU_DECIDE"*/;
  if ( !isDecide )
    v10 = &StringLiteral_8446/*"MENU_CANCEL"*/;
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)*v10, 0LL);
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
    || (FriendOperationItemListViewManager__DestroyList(operationItemListViewManager, method),
        (operationItemListViewManager = this->fields.operationItemListViewManager) == 0LL)
    || (operationItemListViewManager = (FriendOperationItemListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                                 (UnityEngine_Component_o *)operationItemListViewManager,
                                                                                 0LL)) == 0LL )
  {
    sub_1B4D1EC(operationItemListViewManager, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)operationItemListViewManager, 0, 0LL);
  FriendRootComponent__RefreshInfo(this, v4);
  this->fields.state = 0;
}


void __fastcall FriendRootComponent__RefreshInfo(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UserGameEntity_o *SelfUserGame; // x22
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *v13; // x0
  UILabel_o *friendCountLabel; // x23
  UserFollowMaster_o *v15; // x21
  System_String_o *v16; // x24
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  Il2CppObject *v23; // x25
  Il2CppObject *v24; // x0
  UILabel_o *followCountLabel; // x22
  System_String_o *v26; // x23
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  __int64 v30; // x0
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  BalanceConfig_c *v34; // x8
  Il2CppObject *v35; // x21
  Il2CppObject *v36; // x0
  const MethodInfo *v37; // x1
  const MethodInfo *v38; // x1
  int32_t FollowNum; // [xsp+0h] [xbp-60h] BYREF
  int32_t FollowSum; // [xsp+4h] [xbp-5Ch] BYREF
  int32_t friendKeep; // [xsp+8h] [xbp-58h] BYREF
  int32_t FriendSum; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_49B5E6B & 1) == 0 )
  {
    sub_1B4CF90(&BalanceConfig_TypeInfo, method);
    sub_1B4CF90(&Method_DataManager_GetMasterData_TblFriendMaster___, v3);
    sub_1B4CF90(&Method_DataManager_GetMasterData_UserFollowMaster___, v4);
    sub_1B4CF90(&int_TypeInfo, v5);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v6);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1B4CF90(&StringLiteral_6457/*"FRIEND_SHOW_INFOMATION"*/, v8);
    byte_49B5E6B = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_TblFriendMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  v13 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_UserFollowMaster___);
  friendCountLabel = this->fields.friendCountLabel;
  v15 = (UserFollowMaster_o *)v13;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6457/*"FRIEND_SHOW_INFOMATION"*/, 0LL);
  if ( !MasterData_object )
    goto LABEL_16;
  v16 = (System_String_o *)Instance;
  FriendSum = TblFriendMaster__GetFriendSum((TblFriendMaster_o *)MasterData_object, 0LL);
  Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &FriendSum, v17, v18, v19);
  if ( !SelfUserGame )
    goto LABEL_16;
  v23 = (Il2CppObject *)Instance;
  friendKeep = SelfUserGame->fields.friendKeep;
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &friendKeep, v20, v21, v22);
  Instance = (DataManager_o *)System_String__Format_61134760(v16, v23, v24, 0LL);
  if ( !friendCountLabel )
    goto LABEL_16;
  UILabel__set_text(friendCountLabel, (System_String_o *)Instance, 0LL);
  followCountLabel = this->fields.followCountLabel;
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6457/*"FRIEND_SHOW_INFOMATION"*/, 0LL);
  if ( !v15 )
    goto LABEL_16;
  v26 = (System_String_o *)Instance;
  FollowSum = UserFollowMaster__GetFollowSum(v15, 0LL);
  v30 = j_il2cpp_value_box_0(int_TypeInfo, &FollowSum, v27, v28, v29);
  v34 = BalanceConfig_TypeInfo;
  v35 = (Il2CppObject *)v30;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v34 = BalanceConfig_TypeInfo;
  }
  FollowNum = v34->static_fields->FollowNum;
  v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &FollowNum, v31, v32, v33);
  Instance = (DataManager_o *)System_String__Format_61134760(v26, v35, v36, 0LL);
  if ( !followCountLabel
    || (UILabel__set_text(followCountLabel, (System_String_o *)Instance, 0LL),
        Instance = (DataManager_o *)TblFriendMaster__GetSum((TblFriendMaster_o *)MasterData_object, 2, 0LL),
        !this->fields.noticeNumber) )
  {
LABEL_16:
    sub_1B4D1EC(Instance, v11);
  }
  NoticeNumberComponent__SetNumber(this->fields.noticeNumber, (int32_t)Instance, 0LL);
  FriendRootComponent__CheckModeKind(this, v37);
  FriendRootComponent__CheckHelpUI(this, v38);
}


void __fastcall FriendRootComponent__RefreshTab(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int32_t tabKind; // w0
  const MethodInfo *v11; // x1
  UnityEngine_Behaviour_o *tabFriendButton; // x0
  System_String_o *v13; // x1
  System_String_o *v14; // x1
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x1
  bool v17; // w1
  const MethodInfo *v18; // x2
  UICommonButton_o *v19; // x20
  bool enabled; // w0
  UICommonButton_o *tabOfferedButton; // x20
  bool v22; // w0
  UnityEngine_Behaviour_o *tabSearchButton; // x19
  bool v24; // w1

  if ( (byte_49B5E6A & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_17270/*"btn_txt_friendsearch_on"*/, method);
    sub_1B4CF90(&StringLiteral_17269/*"btn_txt_friendsearch_off"*/, v3);
    sub_1B4CF90(&StringLiteral_17157/*"btn_bg_09"*/, v4);
    sub_1B4CF90(&StringLiteral_17268/*"btn_txt_friendrequest_on"*/, v5);
    sub_1B4CF90(&StringLiteral_17266/*"btn_txt_friendlist_on"*/, v6);
    sub_1B4CF90(&StringLiteral_17267/*"btn_txt_friendrequest_off"*/, v7);
    sub_1B4CF90(&StringLiteral_17265/*"btn_txt_friendlist_off"*/, v8);
    sub_1B4CF90(&StringLiteral_17176/*"btn_bg_on"*/, v9);
    byte_49B5E6A = 1;
  }
  tabKind = FriendRootComponent__get_tabKind(this, method);
  switch ( tabKind )
  {
    case 2:
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabFriendButton;
      if ( !tabFriendButton )
        goto LABEL_53;
      ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, void *))tabFriendButton->klass[1]._1.namespaze)(
        tabFriendButton,
        1LL,
        tabFriendButton->klass[1]._1.byval_arg.data);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabOfferedButton;
      if ( !tabFriendButton )
        goto LABEL_53;
      ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, void *))tabFriendButton->klass[1]._1.namespaze)(
        tabFriendButton,
        1LL,
        tabFriendButton->klass[1]._1.byval_arg.data);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabSearchButton;
      if ( !tabFriendButton )
        goto LABEL_53;
      ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, void *))tabFriendButton->klass[1]._1.namespaze)(
        tabFriendButton,
        1LL,
        tabFriendButton->klass[1]._1.byval_arg.data);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabFriendButton;
      if ( !tabFriendButton )
        goto LABEL_53;
      UnityEngine_Behaviour__set_enabled(tabFriendButton, 1, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabOfferedButton;
      if ( !tabFriendButton )
        goto LABEL_53;
      UnityEngine_Behaviour__set_enabled(tabFriendButton, 1, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabSearchButton;
      if ( !tabFriendButton )
        goto LABEL_53;
      UnityEngine_Behaviour__set_enabled(tabFriendButton, 0, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabFriendTitleSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17265/*"btn_txt_friendlist_off"*/, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabOfferedTitleSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17267/*"btn_txt_friendrequest_off"*/, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabSearchTitleSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17270/*"btn_txt_friendsearch_on"*/, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabFriendSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17157/*"btn_bg_09"*/, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabOfferedSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17157/*"btn_bg_09"*/, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabSearchSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      v14 = (System_String_o *)StringLiteral_17176/*"btn_bg_on"*/;
LABEL_45:
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, v14, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabFriendButton;
      if ( tabFriendButton )
      {
        ((void (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))tabFriendButton->klass[1]._1.implementedInterfaces)(
          tabFriendButton,
          0LL,
          1LL,
          tabFriendButton->klass[1]._1.interfaceOffsets);
        tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabOfferedButton;
        if ( tabFriendButton )
        {
          ((void (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))tabFriendButton->klass[1]._1.implementedInterfaces)(
            tabFriendButton,
            0LL,
            1LL,
            tabFriendButton->klass[1]._1.interfaceOffsets);
          tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabSearchButton;
          if ( tabFriendButton )
          {
            ((void (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))tabFriendButton->klass[1]._1.implementedInterfaces)(
              tabFriendButton,
              0LL,
              1LL,
              tabFriendButton->klass[1]._1.interfaceOffsets);
            break;
          }
        }
      }
LABEL_53:
      sub_1B4D1EC(tabFriendButton, v11);
    case 1:
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabFriendButton;
      if ( !tabFriendButton )
        goto LABEL_53;
      ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, void *))tabFriendButton->klass[1]._1.namespaze)(
        tabFriendButton,
        1LL,
        tabFriendButton->klass[1]._1.byval_arg.data);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabOfferedButton;
      if ( !tabFriendButton )
        goto LABEL_53;
      ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, void *))tabFriendButton->klass[1]._1.namespaze)(
        tabFriendButton,
        1LL,
        tabFriendButton->klass[1]._1.byval_arg.data);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabSearchButton;
      if ( !tabFriendButton )
        goto LABEL_53;
      ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, void *))tabFriendButton->klass[1]._1.namespaze)(
        tabFriendButton,
        1LL,
        tabFriendButton->klass[1]._1.byval_arg.data);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabFriendButton;
      if ( !tabFriendButton )
        goto LABEL_53;
      UnityEngine_Behaviour__set_enabled(tabFriendButton, 1, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabOfferedButton;
      if ( !tabFriendButton )
        goto LABEL_53;
      UnityEngine_Behaviour__set_enabled(tabFriendButton, 0, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabSearchButton;
      if ( !tabFriendButton )
        goto LABEL_53;
      UnityEngine_Behaviour__set_enabled(tabFriendButton, 1, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabFriendTitleSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17265/*"btn_txt_friendlist_off"*/, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabOfferedTitleSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17268/*"btn_txt_friendrequest_on"*/, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabSearchTitleSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17269/*"btn_txt_friendsearch_off"*/, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabFriendSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17157/*"btn_bg_09"*/, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabOfferedSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      v13 = (System_String_o *)StringLiteral_17176/*"btn_bg_on"*/;
      goto LABEL_43;
    case 0:
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabFriendButton;
      if ( !tabFriendButton )
        goto LABEL_53;
      ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, void *))tabFriendButton->klass[1]._1.namespaze)(
        tabFriendButton,
        1LL,
        tabFriendButton->klass[1]._1.byval_arg.data);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabOfferedButton;
      if ( !tabFriendButton )
        goto LABEL_53;
      ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, void *))tabFriendButton->klass[1]._1.namespaze)(
        tabFriendButton,
        1LL,
        tabFriendButton->klass[1]._1.byval_arg.data);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabSearchButton;
      if ( !tabFriendButton )
        goto LABEL_53;
      ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, void *))tabFriendButton->klass[1]._1.namespaze)(
        tabFriendButton,
        1LL,
        tabFriendButton->klass[1]._1.byval_arg.data);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabFriendButton;
      if ( !tabFriendButton )
        goto LABEL_53;
      UnityEngine_Behaviour__set_enabled(tabFriendButton, 0, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabOfferedButton;
      if ( !tabFriendButton )
        goto LABEL_53;
      UnityEngine_Behaviour__set_enabled(tabFriendButton, 1, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabSearchButton;
      if ( !tabFriendButton )
        goto LABEL_53;
      UnityEngine_Behaviour__set_enabled(tabFriendButton, 1, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabFriendTitleSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17266/*"btn_txt_friendlist_on"*/, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabOfferedTitleSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17267/*"btn_txt_friendrequest_off"*/, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabSearchTitleSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17269/*"btn_txt_friendsearch_off"*/, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabFriendSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17176/*"btn_bg_on"*/, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabOfferedSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      v13 = (System_String_o *)StringLiteral_17157/*"btn_bg_09"*/;
LABEL_43:
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, v13, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabSearchSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      v14 = (System_String_o *)StringLiteral_17157/*"btn_bg_09"*/;
      goto LABEL_45;
  }
  FriendRootComponent__CheckModeKind(this, v11);
  FriendRootComponent__CheckHelpUI(this, v15);
  v17 = FriendRootComponent__get_tabKind(this, v16) == 0;
  FriendRootComponent__SetActiveModeKindButtons(this, v17, v18);
  v19 = this->fields.tabFriendButton;
  if ( !v19 )
    goto LABEL_53;
  enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.tabFriendButton, 0LL);
  UICommonButton__SetColliderEnable(v19, enabled, 1, 0LL);
  tabOfferedButton = this->fields.tabOfferedButton;
  if ( !tabOfferedButton )
    goto LABEL_53;
  v22 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.tabOfferedButton, 0LL);
  UICommonButton__SetColliderEnable(tabOfferedButton, v22, 1, 0LL);
  tabSearchButton = (UnityEngine_Behaviour_o *)this->fields.tabSearchButton;
  if ( !tabSearchButton )
    goto LABEL_53;
  v24 = UnityEngine_Behaviour__get_enabled(tabSearchButton, 0LL);
  UICommonButton__SetColliderEnable((UICommonButton_o *)tabSearchButton, v24, 1, 0LL);
}


void __fastcall FriendRootComponent__RequestFollowAssign(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  NetworkManager_ResultCallbackFunc_o *v7; // x20
  FollowAssignRequest_o *Request_object; // x0
  struct OtherUserGameEntity_o *selectFriendEntity; // x8

  if ( (byte_49B5EB4 & 1) == 0 )
  {
    sub_1B4CF90(&Method_FriendRootComponent_EndRequestFollowAssign__, method);
    sub_1B4CF90(&Method_NetworkManager_getRequest_FollowAssignRequest___, v3);
    sub_1B4CF90(&NetworkManager_TypeInfo, v4);
    sub_1B4CF90(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    sub_1B4CF90(&StringLiteral_10845/*"REQUEST_NG"*/, v6);
    byte_49B5EB4 = 1;
  }
  if ( this->fields.selectFriendEntity )
  {
    v7 = (NetworkManager_ResultCallbackFunc_o *)sub_1B4D1DC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      Method_FriendRootComponent_EndRequestFollowAssign__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = (FollowAssignRequest_o *)NetworkManager__getRequest_object_(
                                                v7,
                                                (const MethodInfo_2F86AFC *)Method_NetworkManager_getRequest_FollowAssignRequest___);
    selectFriendEntity = this->fields.selectFriendEntity;
    if ( selectFriendEntity && Request_object )
    {
      FollowAssignRequest__beginRequest(Request_object, selectFriendEntity->fields.userId, 0LL);
      return;
    }
LABEL_11:
    sub_1B4D1EC(Request_object, method);
  }
  Request_object = (FollowAssignRequest_o *)this->fields.myFSM;
  if ( !Request_object )
    goto LABEL_11;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Request_object, (System_String_o *)StringLiteral_10845/*"REQUEST_NG"*/, 0LL);
}


void __fastcall FriendRootComponent__RequestFollowRemove(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_object__o *v4; // x20
  const MethodInfo *v5; // x2

  if ( (byte_49B5EBD & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_string__TypeInfo, method);
    sub_1B4CF90(&Method_FriendRootComponent__RequestFollowRemove_b__143_0__, v3);
    byte_49B5EBD = 1;
  }
  v4 = (System_Action_object__o *)sub_1B4D1DC(System_Action_string__TypeInfo);
  System_Action_object____ctor(
    v4,
    (Il2CppObject *)this,
    Method_FriendRootComponent__RequestFollowRemove_b__143_0__,
    0LL);
  FriendRootComponent__FriendLockRequst(this, (System_Action_string__o *)v4, v5);
}


void __fastcall FriendRootComponent__RequestFriendAccept(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  FriendOperationItemListViewItem_o *Item; // x0
  struct OtherUserGameEntity_o *otherUserGameEntity; // x21
  NetworkManager_ResultCallbackFunc_o *v11; // x20

  if ( (byte_49B5E8B & 1) == 0 )
  {
    sub_1B4CF90(&Method_FriendRootComponent_EndRequestFriend__, method);
    sub_1B4CF90(&Method_NetworkManager_getRequest_FriendAcceptRequest___, v4);
    sub_1B4CF90(&NetworkManager_TypeInfo, v5);
    sub_1B4CF90(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    sub_1B4CF90(&StringLiteral_10845/*"REQUEST_NG"*/, v7);
    byte_49B5E8B = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    goto LABEL_12;
  Item = FriendOperationItemListViewManager__GetItem(operationItemListViewManager, this->fields.selectItemNum, v2);
  if ( Item )
  {
    otherUserGameEntity = Item->fields.otherUserGameEntity;
    if ( otherUserGameEntity )
    {
      v11 = (NetworkManager_ResultCallbackFunc_o *)sub_1B4D1DC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v11,
        (Il2CppObject *)this,
        Method_FriendRootComponent_EndRequestFriend__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      operationItemListViewManager = (FriendOperationItemListViewManager_o *)NetworkManager__getRequest_object_(
                                                                               v11,
                                                                               (const MethodInfo_2F86AFC *)Method_NetworkManager_getRequest_FriendAcceptRequest___);
      if ( operationItemListViewManager )
      {
        FriendAcceptRequest__beginRequest(
          (FriendAcceptRequest_o *)operationItemListViewManager,
          otherUserGameEntity->fields.userId,
          0LL);
        return;
      }
LABEL_12:
      sub_1B4D1EC(operationItemListViewManager, method);
    }
  }
  operationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.myFSM;
  if ( !operationItemListViewManager )
    goto LABEL_12;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)operationItemListViewManager, (System_String_o *)StringLiteral_10845/*"REQUEST_NG"*/, 0LL);
}


void __fastcall FriendRootComponent__RequestFriendCancel(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  FriendOperationItemListViewItem_o *Item; // x0
  struct OtherUserGameEntity_o *otherUserGameEntity; // x21
  NetworkManager_ResultCallbackFunc_o *v11; // x20

  if ( (byte_49B5E8D & 1) == 0 )
  {
    sub_1B4CF90(&Method_FriendRootComponent_EndRequestFriend__, method);
    sub_1B4CF90(&Method_NetworkManager_getRequest_FriendCancelRequest___, v4);
    sub_1B4CF90(&NetworkManager_TypeInfo, v5);
    sub_1B4CF90(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    sub_1B4CF90(&StringLiteral_10845/*"REQUEST_NG"*/, v7);
    byte_49B5E8D = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    goto LABEL_12;
  Item = FriendOperationItemListViewManager__GetItem(operationItemListViewManager, this->fields.selectItemNum, v2);
  if ( Item )
  {
    otherUserGameEntity = Item->fields.otherUserGameEntity;
    if ( otherUserGameEntity )
    {
      v11 = (NetworkManager_ResultCallbackFunc_o *)sub_1B4D1DC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v11,
        (Il2CppObject *)this,
        Method_FriendRootComponent_EndRequestFriend__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      operationItemListViewManager = (FriendOperationItemListViewManager_o *)NetworkManager__getRequest_object_(
                                                                               v11,
                                                                               (const MethodInfo_2F86AFC *)Method_NetworkManager_getRequest_FriendCancelRequest___);
      if ( operationItemListViewManager )
      {
        FriendCancelRequest__beginRequest(
          (FriendCancelRequest_o *)operationItemListViewManager,
          otherUserGameEntity->fields.userId,
          0LL);
        return;
      }
LABEL_12:
      sub_1B4D1EC(operationItemListViewManager, method);
    }
  }
  operationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.myFSM;
  if ( !operationItemListViewManager )
    goto LABEL_12;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)operationItemListViewManager, (System_String_o *)StringLiteral_10845/*"REQUEST_NG"*/, 0LL);
}


void __fastcall FriendRootComponent__RequestFriendOffer(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  NetworkManager_ResultCallbackFunc_o *v7; // x20
  FriendOfferRequest_o *Request_object; // x0
  struct OtherUserGameEntity_o *selectFriendEntity; // x8

  if ( (byte_49B5E89 & 1) == 0 )
  {
    sub_1B4CF90(&Method_FriendRootComponent_EndRequestFriend__, method);
    sub_1B4CF90(&Method_NetworkManager_getRequest_FriendOfferRequest___, v3);
    sub_1B4CF90(&NetworkManager_TypeInfo, v4);
    sub_1B4CF90(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    sub_1B4CF90(&StringLiteral_10845/*"REQUEST_NG"*/, v6);
    byte_49B5E89 = 1;
  }
  if ( this->fields.selectFriendEntity )
  {
    v7 = (NetworkManager_ResultCallbackFunc_o *)sub_1B4D1DC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      Method_FriendRootComponent_EndRequestFriend__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = (FriendOfferRequest_o *)NetworkManager__getRequest_object_(
                                               v7,
                                               (const MethodInfo_2F86AFC *)Method_NetworkManager_getRequest_FriendOfferRequest___);
    selectFriendEntity = this->fields.selectFriendEntity;
    if ( selectFriendEntity && Request_object )
    {
      FriendOfferRequest__beginRequest(Request_object, selectFriendEntity->fields.userId, 0LL);
      return;
    }
LABEL_11:
    sub_1B4D1EC(Request_object, method);
  }
  Request_object = (FriendOfferRequest_o *)this->fields.myFSM;
  if ( !Request_object )
    goto LABEL_11;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Request_object, (System_String_o *)StringLiteral_10845/*"REQUEST_NG"*/, 0LL);
}


void __fastcall FriendRootComponent__RequestFriendOffer2(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_object__o *v4; // x20
  const MethodInfo *v5; // x2

  if ( (byte_49B5E8A & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_string__TypeInfo, method);
    sub_1B4CF90(&Method_FriendRootComponent__RequestFriendOffer2_b__88_0__, v3);
    byte_49B5E8A = 1;
  }
  v4 = (System_Action_object__o *)sub_1B4D1DC(System_Action_string__TypeInfo);
  System_Action_object____ctor(v4, (Il2CppObject *)this, Method_FriendRootComponent__RequestFriendOffer2_b__88_0__, 0LL);
  FriendRootComponent__FriendLockRequst(this, (System_Action_string__o *)v4, v5);
}


void __fastcall FriendRootComponent__RequestFriendProfile(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_String_o *selectFriendCode; // x0
  System_String_o *v12; // x0
  NetworkManager_ResultCallbackFunc_o *v13; // x20
  ProfileTopRequest_o *Request_object; // x0
  __int64 v15; // x1
  FriendWarningDialog_o *friendWarningDialog; // x20
  FriendWarningDialog_CallbackFunc_o *v17; // x21

  if ( (byte_49B5E91 & 1) == 0 )
  {
    sub_1B4CF90(&FriendWarningDialog_CallbackFunc_TypeInfo, method);
    sub_1B4CF90(&Method_FriendRootComponent_EndNoSearchWarning__, v3);
    sub_1B4CF90(&Method_FriendRootComponent_EndRequestFriendProfile__, v4);
    sub_1B4CF90(&Method_NetworkManager_getRequest_ProfileTopRequest___, v5);
    sub_1B4CF90(&NetworkManager_TypeInfo, v6);
    sub_1B4CF90(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    sub_1B4CF90(&StringLiteral_115/*" "*/, v8);
    sub_1B4CF90(&StringLiteral_10845/*"REQUEST_NG"*/, v9);
    sub_1B4CF90(&StringLiteral_1/*""*/, v10);
    byte_49B5E91 = 1;
  }
  selectFriendCode = this->fields.selectFriendCode;
  if ( selectFriendCode )
  {
    v12 = System_String__Replace_61140016(
            selectFriendCode,
            (System_String_o *)StringLiteral_115/*" "*/,
            (System_String_o *)StringLiteral_1/*""*/,
            0LL);
    if ( System_String__op_Inequality(v12, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
    {
      v13 = (NetworkManager_ResultCallbackFunc_o *)sub_1B4D1DC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v13,
        (Il2CppObject *)this,
        Method_FriendRootComponent_EndRequestFriendProfile__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Request_object = (ProfileTopRequest_o *)NetworkManager__getRequest_object_(
                                                v13,
                                                (const MethodInfo_2F86AFC *)Method_NetworkManager_getRequest_ProfileTopRequest___);
      if ( Request_object )
      {
        ProfileTopRequest__beginRequestFriendCode(Request_object, this->fields.selectFriendCode, 0LL);
        return;
      }
LABEL_13:
      sub_1B4D1EC(Request_object, v15);
    }
    friendWarningDialog = this->fields.friendWarningDialog;
    v17 = (FriendWarningDialog_CallbackFunc_o *)sub_1B4D1DC(FriendWarningDialog_CallbackFunc_TypeInfo);
    FriendWarningDialog_CallbackFunc___ctor(
      v17,
      (Il2CppObject *)this,
      Method_FriendRootComponent_EndNoSearchWarning__,
      0LL);
    if ( !friendWarningDialog )
      goto LABEL_13;
    FriendWarningDialog__Open(friendWarningDialog, 3, v17, 0LL);
  }
  this->fields.selectFriendEntity = 0LL;
  sub_1B4CF34(&this->fields.selectFriendEntity);
  Request_object = (ProfileTopRequest_o *)this->fields.myFSM;
  if ( !Request_object )
    goto LABEL_13;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Request_object, (System_String_o *)StringLiteral_10845/*"REQUEST_NG"*/, 0LL);
}


void __fastcall FriendRootComponent__RequestFriendReject(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  FriendOperationItemListViewItem_o *Item; // x0
  struct OtherUserGameEntity_o *otherUserGameEntity; // x21
  NetworkManager_ResultCallbackFunc_o *v12; // x20

  if ( (byte_49B5E8C & 1) == 0 )
  {
    sub_1B4CF90(&Method_FriendRootComponent_EndRequestFriend__, method);
    sub_1B4CF90(&Method_NetworkManager_getRequest_FriendRejectRequest___, v4);
    sub_1B4CF90(&NetworkManager_TypeInfo, v5);
    sub_1B4CF90(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1B4CF90(&StringLiteral_10845/*"REQUEST_NG"*/, v8);
    byte_49B5E8C = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    goto LABEL_13;
  Item = FriendOperationItemListViewManager__GetItem(operationItemListViewManager, this->fields.selectItemNum, v2);
  if ( Item )
  {
    otherUserGameEntity = Item->fields.otherUserGameEntity;
    if ( otherUserGameEntity )
    {
      operationItemListViewManager = (FriendOperationItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( operationItemListViewManager )
      {
        CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)operationItemListViewManager, 0, 0LL);
        v12 = (NetworkManager_ResultCallbackFunc_o *)sub_1B4D1DC(NetworkManager_ResultCallbackFunc_TypeInfo);
        NetworkManager_ResultCallbackFunc___ctor(
          v12,
          (Il2CppObject *)this,
          Method_FriendRootComponent_EndRequestFriend__,
          0LL);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        operationItemListViewManager = (FriendOperationItemListViewManager_o *)NetworkManager__getRequest_object_(
                                                                                 v12,
                                                                                 (const MethodInfo_2F86AFC *)Method_NetworkManager_getRequest_FriendRejectRequest___);
        if ( operationItemListViewManager )
        {
          FriendRejectRequest__beginRequest(
            (FriendRejectRequest_o *)operationItemListViewManager,
            otherUserGameEntity->fields.userId,
            0LL);
          return;
        }
      }
LABEL_13:
      sub_1B4D1EC(operationItemListViewManager, method);
    }
  }
  operationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.myFSM;
  if ( !operationItemListViewManager )
    goto LABEL_13;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)operationItemListViewManager, (System_String_o *)StringLiteral_10845/*"REQUEST_NG"*/, 0LL);
}


void __fastcall FriendRootComponent__RequestFriendRemove(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_object__o *v4; // x20
  const MethodInfo *v5; // x2

  if ( (byte_49B5E8E & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_string__TypeInfo, method);
    sub_1B4CF90(&Method_FriendRootComponent__RequestFriendRemove_b__92_0__, v3);
    byte_49B5E8E = 1;
  }
  v4 = (System_Action_object__o *)sub_1B4D1DC(System_Action_string__TypeInfo);
  System_Action_object____ctor(v4, (Il2CppObject *)this, Method_FriendRootComponent__RequestFriendRemove_b__92_0__, 0LL);
  FriendRootComponent__FriendLockRequst(this, (System_Action_string__o *)v4, v5);
}


void __fastcall FriendRootComponent__SelectFollowConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  Il2CppObject *Instance; // x0
  __int64 v15; // x1
  UserFollowMaster_o *v16; // x20
  const MethodInfo *v17; // x1
  int32_t FollowSum; // w21
  BalanceConfig_c *v19; // x8
  struct OtherUserGameEntity_o *selectFriendEntity; // x8
  Il2CppObject *v21; // x20
  System_String_o *v22; // x21
  System_String_o *v23; // x22
  NotificationDialog_ClickDelegate_o *v24; // x23
  FriendWarningDialog_o *friendWarningDialog; // x20
  FriendWarningDialog_CallbackFunc_o *v26; // x21
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x20
  OtherUserGameEntity_o *v28; // x21
  FriendOperationConfirmMenu_CallbackFunc_o *v29; // x22
  const MethodInfo *v30; // x3
  const MethodInfo *v31; // x4

  if ( (byte_49B5EB0 & 1) == 0 )
  {
    sub_1B4CF90(&BalanceConfig_TypeInfo, method);
    sub_1B4CF90(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo, v3);
    sub_1B4CF90(&FriendWarningDialog_CallbackFunc_TypeInfo, v4);
    sub_1B4CF90(&NotificationDialog_ClickDelegate_TypeInfo, v5);
    sub_1B4CF90(&Method_DataManager_GetMasterData_UserFollowMaster___, v6);
    sub_1B4CF90(&Method_FriendRootComponent_EndMaxFollowWarningOfferConfirm__, v7);
    sub_1B4CF90(&Method_FriendRootComponent_SelectedFollowOfferConfirm__, v8);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v9);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1B4CF90(&StringLiteral_1954/*"ALREADY_FOLLOWED_TITLE"*/, v12);
    sub_1B4CF90(&StringLiteral_1953/*"ALREADY_FOLLOWED_MESSAGE"*/, v13);
    byte_49B5EB0 = 1;
  }
  if ( this->fields.state == 23 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_UserFollowMaster___);
      if ( Instance )
      {
        v16 = (UserFollowMaster_o *)Instance;
        FollowSum = UserFollowMaster__GetFollowSum((UserFollowMaster_o *)Instance, 0LL);
        v19 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v19 = BalanceConfig_TypeInfo;
        }
        if ( FollowSum >= v19->static_fields->FollowNum )
        {
          this->fields.state = 43;
          friendWarningDialog = this->fields.friendWarningDialog;
          v26 = (FriendWarningDialog_CallbackFunc_o *)sub_1B4D1DC(FriendWarningDialog_CallbackFunc_TypeInfo);
          FriendWarningDialog_CallbackFunc___ctor(
            v26,
            (Il2CppObject *)this,
            Method_FriendRootComponent_EndMaxFollowWarningOfferConfirm__,
            0LL);
          if ( friendWarningDialog )
          {
            FriendWarningDialog__Open(friendWarningDialog, 7, v26, 0LL);
            return;
          }
        }
        else
        {
          selectFriendEntity = this->fields.selectFriendEntity;
          if ( !selectFriendEntity )
          {
            FriendRootComponent__StartSearchInput(this, v17);
            return;
          }
          if ( UserFollowMaster__IsFollowUser(v16, selectFriendEntity->fields.userId, 0LL) )
          {
            this->fields.state = 44;
            v21 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v22 = LocalizationManager__Get((System_String_o *)StringLiteral_1954/*"ALREADY_FOLLOWED_TITLE"*/, 0LL);
            v23 = LocalizationManager__Get((System_String_o *)StringLiteral_1953/*"ALREADY_FOLLOWED_MESSAGE"*/, 0LL);
            v24 = (NotificationDialog_ClickDelegate_o *)sub_1B4D1DC(NotificationDialog_ClickDelegate_TypeInfo);
            NotificationDialog_ClickDelegate___ctor(
              v24,
              (Il2CppObject *)this,
              Method_FriendRootComponent_EndMaxFollowWarningOfferConfirm__,
              0LL);
            if ( v21 )
            {
              CommonUI__OpenNotificationDialog_30250652(
                (CommonUI_o *)v21,
                v22,
                v23,
                v24,
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
            v28 = this->fields.selectFriendEntity;
            v29 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_1B4D1DC(FriendOperationConfirmMenu_CallbackFunc_TypeInfo);
            FriendOperationConfirmMenu_CallbackFunc___ctor(
              v29,
              (Il2CppObject *)this,
              Method_FriendRootComponent_SelectedFollowOfferConfirm__,
              v30);
            if ( operationConfirmMenu )
            {
              FriendOperationConfirmMenu__Open(operationConfirmMenu, 6, v28, v29, v31);
              return;
            }
          }
        }
      }
    }
    sub_1B4D1EC(Instance, v15);
  }
}


void __fastcall FriendRootComponent__SelectFollowRemoveConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x20
  OtherUserGameEntity_o *dragParentObject; // x21
  FriendOperationConfirmMenu_CallbackFunc_o *v8; // x22
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x4

  if ( (byte_49B5EB7 & 1) == 0 )
  {
    sub_1B4CF90(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo, method);
    sub_1B4CF90(&Method_FriendRootComponent_SelectedFollowRemoveConfirm__, v4);
    byte_49B5EB7 = 1;
  }
  if ( this->fields.state == 4 )
  {
    operationItemListViewManager = this->fields.operationItemListViewManager;
    if ( !operationItemListViewManager
      || (operationItemListViewManager = (FriendOperationItemListViewManager_o *)FriendOperationItemListViewManager__GetItem(
                                                                                   operationItemListViewManager,
                                                                                   this->fields.selectItemNum,
                                                                                   v2),
          this->fields.state = 45,
          !operationItemListViewManager)
      || (operationConfirmMenu = this->fields.operationConfirmMenu,
          dragParentObject = (OtherUserGameEntity_o *)operationItemListViewManager->fields.dragParentObject,
          v8 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_1B4D1DC(FriendOperationConfirmMenu_CallbackFunc_TypeInfo),
          FriendOperationConfirmMenu_CallbackFunc___ctor(
            v8,
            (Il2CppObject *)this,
            Method_FriendRootComponent_SelectedFollowRemoveConfirm__,
            v9),
          !operationConfirmMenu) )
    {
      sub_1B4D1EC(operationItemListViewManager, method);
    }
    FriendOperationConfirmMenu__Open(operationConfirmMenu, 7, dragParentObject, v8, v10);
  }
}


void __fastcall FriendRootComponent__SelectFriendAcceptConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x20
  OtherUserGameEntity_o *dragParentObject; // x21
  FriendOperationConfirmMenu_CallbackFunc_o *v8; // x22
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x4

  if ( (byte_49B5E7D & 1) == 0 )
  {
    sub_1B4CF90(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo, method);
    sub_1B4CF90(&Method_FriendRootComponent_SelectedFriendAcceptConfirm__, v4);
    byte_49B5E7D = 1;
  }
  if ( this->fields.state == 14 )
  {
    operationItemListViewManager = this->fields.operationItemListViewManager;
    if ( !operationItemListViewManager
      || (operationItemListViewManager = (FriendOperationItemListViewManager_o *)FriendOperationItemListViewManager__GetItem(
                                                                                   operationItemListViewManager,
                                                                                   this->fields.selectItemNum,
                                                                                   v2),
          this->fields.state = 31,
          !operationItemListViewManager)
      || (operationConfirmMenu = this->fields.operationConfirmMenu,
          dragParentObject = (OtherUserGameEntity_o *)operationItemListViewManager->fields.dragParentObject,
          v8 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_1B4D1DC(FriendOperationConfirmMenu_CallbackFunc_TypeInfo),
          FriendOperationConfirmMenu_CallbackFunc___ctor(
            v8,
            (Il2CppObject *)this,
            Method_FriendRootComponent_SelectedFriendAcceptConfirm__,
            v9),
          !operationConfirmMenu) )
    {
      sub_1B4D1EC(operationItemListViewManager, method);
    }
    FriendOperationConfirmMenu__Open(operationConfirmMenu, 2, dragParentObject, v8, v10);
  }
}


void __fastcall FriendRootComponent__SelectFriendCancelConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x20
  OtherUserGameEntity_o *dragParentObject; // x21
  FriendOperationConfirmMenu_CallbackFunc_o *v8; // x22
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x4

  if ( (byte_49B5E83 & 1) == 0 )
  {
    sub_1B4CF90(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo, method);
    sub_1B4CF90(&Method_FriendRootComponent_SelectedFriendCancelConfirm__, v4);
    byte_49B5E83 = 1;
  }
  if ( this->fields.state == 9 )
  {
    operationItemListViewManager = this->fields.operationItemListViewManager;
    if ( !operationItemListViewManager
      || (operationItemListViewManager = (FriendOperationItemListViewManager_o *)FriendOperationItemListViewManager__GetItem(
                                                                                   operationItemListViewManager,
                                                                                   this->fields.selectItemNum,
                                                                                   v2),
          this->fields.state = 37,
          !operationItemListViewManager)
      || (operationConfirmMenu = this->fields.operationConfirmMenu,
          dragParentObject = (OtherUserGameEntity_o *)operationItemListViewManager->fields.dragParentObject,
          v8 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_1B4D1DC(FriendOperationConfirmMenu_CallbackFunc_TypeInfo),
          FriendOperationConfirmMenu_CallbackFunc___ctor(
            v8,
            (Il2CppObject *)this,
            Method_FriendRootComponent_SelectedFriendCancelConfirm__,
            v9),
          !operationConfirmMenu) )
    {
      sub_1B4D1EC(operationItemListViewManager, method);
    }
    FriendOperationConfirmMenu__Open(operationConfirmMenu, 4, dragParentObject, v8, v10);
  }
}


void __fastcall FriendRootComponent__SelectFriendOfferConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t state; // w8
  UserGameEntity_o *v9; // x20
  DataManager_o *Instance; // x0
  const MethodInfo *v11; // x1
  struct OtherUserGameEntity_o *selectFriendEntity; // x20
  struct FriendOperationConfirmMenu_o *v13; // x21
  FriendOperationConfirmMenu_CallbackFunc_o *v14; // x22
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x4
  FriendOperationConfirmMenu_o *v17; // x0
  OtherUserGameEntity_o *v18; // x2
  UserGameEntity_o *SelfUserGame; // x20
  const MethodInfo *v20; // x2
  struct FriendOperationConfirmMenu_o *operationConfirmMenu; // x20
  OtherUserGameEntity_o *context; // x21
  const MethodInfo *v23; // x3
  FriendWarningDialog_o *friendWarningDialog; // x20
  FriendWarningDialog_CallbackFunc_o *v25; // x21

  if ( (byte_49B5E7B & 1) == 0 )
  {
    sub_1B4CF90(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo, method);
    sub_1B4CF90(&FriendWarningDialog_CallbackFunc_TypeInfo, v3);
    sub_1B4CF90(&Method_DataManager_GetMasterData_TblFriendMaster___, v4);
    sub_1B4CF90(&Method_FriendRootComponent_EndMaxFriendWarningOfferConfirm__, v5);
    sub_1B4CF90(&Method_FriendRootComponent_SelectedFriendOfferConfirm__, v6);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_49B5E7B = 1;
  }
  state = this->fields.state;
  if ( state == 4 )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_27;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_TblFriendMaster___);
    if ( !Instance )
      goto LABEL_27;
    Instance = (DataManager_o *)TblFriendMaster__GetList((TblFriendMaster_o *)Instance, 3, 0LL);
    if ( !Instance || !SelfUserGame )
      goto LABEL_27;
    if ( SelfUserGame->fields.friendKeep > SLODWORD(Instance->fields.m_CancellationTokenSource) )
    {
      Instance = (DataManager_o *)this->fields.operationItemListViewManager;
      if ( Instance )
      {
        Instance = (DataManager_o *)FriendOperationItemListViewManager__GetItem(
                                      (FriendOperationItemListViewManager_o *)Instance,
                                      this->fields.selectItemNum,
                                      v20);
        this->fields.state = 27;
        if ( Instance )
        {
          operationConfirmMenu = this->fields.operationConfirmMenu;
          context = (OtherUserGameEntity_o *)Instance->fields.context;
          v14 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_1B4D1DC(FriendOperationConfirmMenu_CallbackFunc_TypeInfo);
          FriendOperationConfirmMenu_CallbackFunc___ctor(
            v14,
            (Il2CppObject *)this,
            Method_FriendRootComponent_SelectedFriendOfferConfirm__,
            v23);
          if ( operationConfirmMenu )
          {
            v17 = operationConfirmMenu;
            v18 = context;
            goto LABEL_22;
          }
        }
      }
LABEL_27:
      sub_1B4D1EC(Instance, v11);
    }
LABEL_24:
    this->fields.state = 29;
    friendWarningDialog = this->fields.friendWarningDialog;
    v25 = (FriendWarningDialog_CallbackFunc_o *)sub_1B4D1DC(FriendWarningDialog_CallbackFunc_TypeInfo);
    FriendWarningDialog_CallbackFunc___ctor(
      v25,
      (Il2CppObject *)this,
      Method_FriendRootComponent_EndMaxFriendWarningOfferConfirm__,
      0LL);
    if ( !friendWarningDialog )
      goto LABEL_27;
    FriendWarningDialog__Open(friendWarningDialog, 1, v25, 0LL);
    return;
  }
  if ( state != 23 )
    return;
  v9 = UserGameMaster__getSelfUserGame(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_TblFriendMaster___);
  if ( !Instance )
    goto LABEL_27;
  Instance = (DataManager_o *)TblFriendMaster__GetList((TblFriendMaster_o *)Instance, 3, 0LL);
  if ( !Instance || !v9 )
    goto LABEL_27;
  if ( v9->fields.friendKeep <= SLODWORD(Instance->fields.m_CancellationTokenSource) )
    goto LABEL_24;
  selectFriendEntity = this->fields.selectFriendEntity;
  if ( selectFriendEntity )
  {
    this->fields.state = 27;
    v13 = this->fields.operationConfirmMenu;
    v14 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_1B4D1DC(FriendOperationConfirmMenu_CallbackFunc_TypeInfo);
    FriendOperationConfirmMenu_CallbackFunc___ctor(
      v14,
      (Il2CppObject *)this,
      Method_FriendRootComponent_SelectedFriendOfferConfirm__,
      v15);
    if ( v13 )
    {
      v17 = v13;
      v18 = selectFriendEntity;
LABEL_22:
      FriendOperationConfirmMenu__Open(v17, 1, v18, v14, v16);
      return;
    }
    goto LABEL_27;
  }
  FriendRootComponent__StartSearchInput(this, v11);
}


void __fastcall FriendRootComponent__SelectFriendRejectConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x20
  OtherUserGameEntity_o *dragParentObject; // x21
  FriendOperationConfirmMenu_CallbackFunc_o *v8; // x22
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x4

  if ( (byte_49B5E80 & 1) == 0 )
  {
    sub_1B4CF90(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo, method);
    sub_1B4CF90(&Method_FriendRootComponent_SelectedFriendRejectConfirm__, v4);
    byte_49B5E80 = 1;
  }
  if ( this->fields.state == 14 )
  {
    operationItemListViewManager = this->fields.operationItemListViewManager;
    if ( !operationItemListViewManager
      || (operationItemListViewManager = (FriendOperationItemListViewManager_o *)FriendOperationItemListViewManager__GetItem(
                                                                                   operationItemListViewManager,
                                                                                   this->fields.selectItemNum,
                                                                                   v2),
          this->fields.state = 34,
          !operationItemListViewManager)
      || (operationConfirmMenu = this->fields.operationConfirmMenu,
          dragParentObject = (OtherUserGameEntity_o *)operationItemListViewManager->fields.dragParentObject,
          v8 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_1B4D1DC(FriendOperationConfirmMenu_CallbackFunc_TypeInfo),
          FriendOperationConfirmMenu_CallbackFunc___ctor(
            v8,
            (Il2CppObject *)this,
            Method_FriendRootComponent_SelectedFriendRejectConfirm__,
            v9),
          !operationConfirmMenu) )
    {
      sub_1B4D1EC(operationItemListViewManager, method);
    }
    FriendOperationConfirmMenu__Open(operationConfirmMenu, 3, dragParentObject, v8, v10);
  }
}


void __fastcall FriendRootComponent__SelectFriendRemoveConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x20
  OtherUserGameEntity_o *dragParentObject; // x21
  FriendOperationConfirmMenu_CallbackFunc_o *v8; // x22
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x4

  if ( (byte_49B5E86 & 1) == 0 )
  {
    sub_1B4CF90(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo, method);
    sub_1B4CF90(&Method_FriendRootComponent_SelectedFriendRemoveConfirm__, v4);
    byte_49B5E86 = 1;
  }
  if ( this->fields.state == 4 )
  {
    operationItemListViewManager = this->fields.operationItemListViewManager;
    if ( !operationItemListViewManager
      || (operationItemListViewManager = (FriendOperationItemListViewManager_o *)FriendOperationItemListViewManager__GetItem(
                                                                                   operationItemListViewManager,
                                                                                   this->fields.selectItemNum,
                                                                                   v2),
          this->fields.state = 40,
          !operationItemListViewManager)
      || (operationConfirmMenu = this->fields.operationConfirmMenu,
          dragParentObject = (OtherUserGameEntity_o *)operationItemListViewManager->fields.dragParentObject,
          v8 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_1B4D1DC(FriendOperationConfirmMenu_CallbackFunc_TypeInfo),
          FriendOperationConfirmMenu_CallbackFunc___ctor(
            v8,
            (Il2CppObject *)this,
            Method_FriendRootComponent_SelectedFriendRemoveConfirm__,
            v9),
          !operationConfirmMenu) )
    {
      sub_1B4D1EC(operationItemListViewManager, method);
    }
    FriendOperationConfirmMenu__Open(operationConfirmMenu, 5, dragParentObject, v8, v10);
  }
}


void __fastcall FriendRootComponent__SelectSearchFriend(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_49B5E74 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_5359/*"END_ACTION"*/, method);
    byte_49B5E74 = 1;
  }
  if ( this->fields.state == 1 )
  {
    this->fields.state = 22;
    FriendRootComponent__RefreshInfo(this, method);
    FriendRootComponent__OnMoveEnd(this, v3);
  }
  else
  {
    myFSM = this->fields.myFSM;
    if ( !myFSM )
      sub_1B4D1EC(0LL, method);
    PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_5359/*"END_ACTION"*/, 0LL);
  }
}


void __fastcall FriendRootComponent__SelectShowFriend(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Component_o *operationItemListViewManager; // x0
  const MethodInfo *v6; // x3
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  struct FriendOperationItemListViewManager_o *v8; // x20
  System_Action_o *v9; // x21
  const MethodInfo *v10; // x2

  if ( (byte_49B5E6C & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&Method_FriendRootComponent_OnMoveEnd__, v3);
    sub_1B4CF90(&StringLiteral_5359/*"END_ACTION"*/, v4);
    byte_49B5E6C = 1;
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
              v6);
            v8 = this->fields.operationItemListViewManager;
            v9 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
            System_Action___ctor(v9, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0LL);
            if ( v8 )
            {
              v8->fields.callbackFunc2 = v9;
              sub_1B4CF34(&v8->fields.callbackFunc2);
              FriendOperationItemListViewManager__SetMode_30966740(v8, 1, v10);
              return;
            }
          }
        }
      }
    }
LABEL_12:
    sub_1B4D1EC(operationItemListViewManager, method);
  }
  operationItemListViewManager = (UnityEngine_Component_o *)this->fields.myFSM;
  if ( !operationItemListViewManager )
    goto LABEL_12;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)operationItemListViewManager, (System_String_o *)StringLiteral_5359/*"END_ACTION"*/, 0LL);
}


void __fastcall FriendRootComponent__SelectShowOffer(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Component_o *operationItemListViewManager; // x0
  const MethodInfo *v6; // x3
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  struct FriendOperationItemListViewManager_o *v8; // x20
  System_Action_o *v9; // x21
  const MethodInfo *v10; // x2

  if ( (byte_49B5E6E & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&Method_FriendRootComponent_OnMoveEnd__, v3);
    byte_49B5E6E = 1;
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
            v6),
          v8 = this->fields.operationItemListViewManager,
          v9 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo),
          System_Action___ctor(v9, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0LL),
          !v8) )
    {
LABEL_11:
      sub_1B4D1EC(operationItemListViewManager, v4);
    }
    v8->fields.callbackFunc2 = v9;
    sub_1B4CF34(&v8->fields.callbackFunc2);
    FriendOperationItemListViewManager__SetMode_30966740(v8, 1, v10);
  }
}


void __fastcall FriendRootComponent__SelectShowOffered(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Component_o *operationItemListViewManager; // x0
  const MethodInfo *v6; // x3
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  struct FriendOperationItemListViewManager_o *v8; // x20
  System_Action_o *v9; // x21
  const MethodInfo *v10; // x2

  if ( (byte_49B5E70 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&Method_FriendRootComponent_OnMoveEnd__, v3);
    sub_1B4CF90(&StringLiteral_5359/*"END_ACTION"*/, v4);
    byte_49B5E70 = 1;
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
              v6);
            v8 = this->fields.operationItemListViewManager;
            v9 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
            System_Action___ctor(v9, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0LL);
            if ( v8 )
            {
              v8->fields.callbackFunc2 = v9;
              sub_1B4CF34(&v8->fields.callbackFunc2);
              FriendOperationItemListViewManager__SetMode_30966740(v8, 1, v10);
              return;
            }
          }
        }
      }
    }
LABEL_12:
    sub_1B4D1EC(operationItemListViewManager, method);
  }
  operationItemListViewManager = (UnityEngine_Component_o *)this->fields.myFSM;
  if ( !operationItemListViewManager )
    goto LABEL_12;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)operationItemListViewManager, (System_String_o *)StringLiteral_5359/*"END_ACTION"*/, 0LL);
}


void __fastcall FriendRootComponent__SelectShowSearch(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *operationItemListViewManager; // x0
  struct FriendOperationItemListViewManager_o *v5; // x20
  const MethodInfo *v6; // x3
  FriendSearchMenu_o *friendSearchMenu; // x20
  System_Action_o *v8; // x21
  struct FriendOperationItemListViewManager_o *v9; // x20
  System_Action_o *v10; // x21
  const MethodInfo *v11; // x2

  if ( (byte_49B5E72 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&Method_FriendRootComponent_OnMoveEnd__, v3);
    byte_49B5E72 = 1;
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
    v5 = this->fields.operationItemListViewManager;
    if ( !v5 )
      goto LABEL_11;
    v5->fields.friendCode = this->fields.selectFriendCode;
    sub_1B4CF34(&v5->fields.friendCode);
    FriendOperationItemListViewManager__CreateList(v5, 0, 0, v6);
    this->fields.state = 17;
    friendSearchMenu = this->fields.friendSearchMenu;
    v8 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0LL);
    if ( !friendSearchMenu
      || (FriendSearchMenu__Close_31018456(friendSearchMenu, v8, 0LL),
          v9 = this->fields.operationItemListViewManager,
          v10 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo),
          System_Action___ctor(v10, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0LL),
          !v9) )
    {
LABEL_11:
      sub_1B4D1EC(operationItemListViewManager, method);
    }
    v9->fields.callbackFunc2 = v10;
    sub_1B4CF34(&v9->fields.callbackFunc2);
    FriendOperationItemListViewManager__SetMode_30966740(v9, 1, v11);
  }
}


void __fastcall FriendRootComponent__SelectShowServant(
        FriendRootComponent_o *this,
        ServantLeaderInfo_o *servantLeaderInfo,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  unsigned int state; // w23
  Il2CppObject *Instance; // x21
  ServantStatusDialog_EndDelegate_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w1

  if ( (byte_49B5E78 & 1) == 0 )
  {
    sub_1B4CF90(&ServantStatusDialog_EndDelegate_TypeInfo, servantLeaderInfo);
    sub_1B4CF90(&Method_FriendRootComponent_EndShowServant__, v5);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_49B5E78 = 1;
  }
  state = this->fields.state;
  if ( state <= 0x13 && ((1 << state) & 0x84210) != 0 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v9 = (ServantStatusDialog_EndDelegate_o *)sub_1B4D1DC(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(v9, (Il2CppObject *)this, Method_FriendRootComponent_EndShowServant__, 0LL);
    if ( !Instance )
      sub_1B4D1EC(v10, v11);
    if ( state == 4 )
      v12 = 4;
    else
      v12 = 5;
    CommonUI__OpenServantStatusDialog_30260560((CommonUI_o *)Instance, v12, servantLeaderInfo, v9, 0LL);
  }
}


void __fastcall FriendRootComponent__SelectShowServantEquip(
        FriendRootComponent_o *this,
        EquipTargetInfo_o *equipInfo,
        int32_t statusKind,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *Instance; // x22
  ServantStatusDialog_EndDelegate_o *v10; // x23
  __int64 v11; // x0
  __int64 v12; // x1

  if ( (byte_49B5EA2 & 1) == 0 )
  {
    sub_1B4CF90(&ServantStatusDialog_EndDelegate_TypeInfo, equipInfo);
    sub_1B4CF90(&Method_FriendRootComponent_EndShowServantEquip__, v7);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    byte_49B5EA2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (ServantStatusDialog_EndDelegate_o *)sub_1B4D1DC(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(
    v10,
    (Il2CppObject *)this,
    Method_FriendRootComponent_EndShowServantEquip__,
    0LL);
  if ( !Instance )
    sub_1B4D1EC(v11, v12);
  CommonUI__OpenServantEquipStatusDialog_30263656((CommonUI_o *)Instance, statusKind, equipInfo, v10, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendRootComponent__SelectedFollowOfferConfirm(
        FriendRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  PlayMakerFSM_o *myFSM; // x0
  __int64 *v7; // x8

  if ( (byte_49B5EB3 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_8447/*"MENU_DECIDE"*/, isDecide);
    sub_1B4CF90(&StringLiteral_8446/*"MENU_CANCEL"*/, v5);
    byte_49B5EB3 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1B4D1EC(0LL, isDecide);
  v7 = &StringLiteral_8447/*"MENU_DECIDE"*/;
  if ( !isDecide )
    v7 = &StringLiteral_8446/*"MENU_CANCEL"*/;
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)*v7, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendRootComponent__SelectedFollowRemoveConfirm(
        FriendRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  PlayMakerFSM_o *myFSM; // x0
  __int64 *v7; // x8

  if ( (byte_49B5EAD & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_8447/*"MENU_DECIDE"*/, isDecide);
    sub_1B4CF90(&StringLiteral_8446/*"MENU_CANCEL"*/, v5);
    byte_49B5EAD = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1B4D1EC(0LL, isDecide);
  v7 = &StringLiteral_8447/*"MENU_DECIDE"*/;
  if ( !isDecide )
    v7 = &StringLiteral_8446/*"MENU_CANCEL"*/;
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)*v7, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendRootComponent__SelectedFriendAcceptConfirm(
        FriendRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  PlayMakerFSM_o *myFSM; // x0
  __int64 *v7; // x8

  if ( (byte_49B5EA9 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_8447/*"MENU_DECIDE"*/, isDecide);
    sub_1B4CF90(&StringLiteral_8446/*"MENU_CANCEL"*/, v5);
    byte_49B5EA9 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1B4D1EC(0LL, isDecide);
  v7 = &StringLiteral_8447/*"MENU_DECIDE"*/;
  if ( !isDecide )
    v7 = &StringLiteral_8446/*"MENU_CANCEL"*/;
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)*v7, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendRootComponent__SelectedFriendCancelConfirm(
        FriendRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  PlayMakerFSM_o *myFSM; // x0
  __int64 *v7; // x8

  if ( (byte_49B5EAB & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_8447/*"MENU_DECIDE"*/, isDecide);
    sub_1B4CF90(&StringLiteral_8446/*"MENU_CANCEL"*/, v5);
    byte_49B5EAB = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1B4D1EC(0LL, isDecide);
  v7 = &StringLiteral_8447/*"MENU_DECIDE"*/;
  if ( !isDecide )
    v7 = &StringLiteral_8446/*"MENU_CANCEL"*/;
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)*v7, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendRootComponent__SelectedFriendOfferConfirm(
        FriendRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  PlayMakerFSM_o *myFSM; // x0
  __int64 *v7; // x8

  if ( (byte_49B5EA8 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_8447/*"MENU_DECIDE"*/, isDecide);
    sub_1B4CF90(&StringLiteral_8446/*"MENU_CANCEL"*/, v5);
    byte_49B5EA8 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1B4D1EC(0LL, isDecide);
  v7 = &StringLiteral_8447/*"MENU_DECIDE"*/;
  if ( !isDecide )
    v7 = &StringLiteral_8446/*"MENU_CANCEL"*/;
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)*v7, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendRootComponent__SelectedFriendRejectConfirm(
        FriendRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  PlayMakerFSM_o *myFSM; // x0
  __int64 *v7; // x8

  if ( (byte_49B5EAA & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_8447/*"MENU_DECIDE"*/, isDecide);
    sub_1B4CF90(&StringLiteral_8446/*"MENU_CANCEL"*/, v5);
    byte_49B5EAA = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1B4D1EC(0LL, isDecide);
  v7 = &StringLiteral_8447/*"MENU_DECIDE"*/;
  if ( !isDecide )
    v7 = &StringLiteral_8446/*"MENU_CANCEL"*/;
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)*v7, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendRootComponent__SelectedFriendRemoveConfirm(
        FriendRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  PlayMakerFSM_o *myFSM; // x0
  __int64 *v7; // x8

  if ( (byte_49B5EAC & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_8447/*"MENU_DECIDE"*/, isDecide);
    sub_1B4CF90(&StringLiteral_8446/*"MENU_CANCEL"*/, v5);
    byte_49B5EAC = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1B4D1EC(0LL, isDecide);
  v7 = &StringLiteral_8447/*"MENU_DECIDE"*/;
  if ( !isDecide )
    v7 = &StringLiteral_8446/*"MENU_CANCEL"*/;
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)*v7, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendRootComponent__SetActiveModeKindButtons(
        FriendRootComponent_o *this,
        bool isActive,
        const MethodInfo *method)
{
  bool v3; // w20
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

  v3 = isActive;
  if ( this->fields.isActiveModeKindButtons != isActive )
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
      sub_1B4D1EC(modeButtonParent, v5);
    }
    LODWORD(modeButtonParent[1].monitor) = 3;
    this->fields.isActiveModeKindButtons = v3;
  }
}


void __fastcall FriendRootComponent__ShowSearchResult(FriendRootComponent_o *this, const MethodInfo *method)
{
  FriendRootComponent_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  FriendSearchResultMenu_o *friendSearchResultMenu; // x20
  System_Action_o *v10; // x21
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  int32_t currentCursor; // w22
  FriendSearchResultMenu_o *v13; // x20
  OtherUserGameEntity_o *selectFriendEntity; // x21
  FriendSearchResultMenu_CallbackFunc_o *v15; // x23
  FriendSearchMenu_o *friendSearchMenu; // x20
  FriendSearchMenu_CallbackFunc_o *v17; // x21

  v2 = this;
  if ( (byte_49B5E76 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&FriendSearchResultMenu_CallbackFunc_TypeInfo, v3);
    sub_1B4CF90(&FriendSearchMenu_CallbackFunc_TypeInfo, v4);
    sub_1B4CF90(&Method_FriendRootComponent_OnSelectOffer__, v5);
    sub_1B4CF90(&Method_FriendRootComponent_OnSelectSearchFriend__, v6);
    sub_1B4CF90(&Method_FriendRootComponent_ShowSearchResult__, v7);
    this = (FriendRootComponent_o *)sub_1B4CF90(&StringLiteral_5359/*"END_ACTION"*/, v8);
    byte_49B5E76 = 1;
  }
  if ( v2->fields.state == 23 )
  {
    friendSearchResultMenu = v2->fields.friendSearchResultMenu;
    if ( !friendSearchResultMenu )
      goto LABEL_14;
    if ( friendSearchResultMenu->fields.isOpen )
    {
      v10 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)v2, Method_FriendRootComponent_ShowSearchResult__, 0LL);
      FriendSearchResultMenu__Close_31022864(friendSearchResultMenu, v10, 0LL);
      return;
    }
    this = (FriendRootComponent_o *)UnityEngine_Component__get_gameObject(
                                      (UnityEngine_Component_o *)v2->fields.friendSearchResultMenu,
                                      0LL);
    if ( !this )
      goto LABEL_14;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    classButtonControl = v2->fields.classButtonControl;
    if ( !classButtonControl )
      goto LABEL_14;
    currentCursor = classButtonControl->fields.currentCursor;
    v13 = v2->fields.friendSearchResultMenu;
    selectFriendEntity = v2->fields.selectFriendEntity;
    v15 = (FriendSearchResultMenu_CallbackFunc_o *)sub_1B4D1DC(FriendSearchResultMenu_CallbackFunc_TypeInfo);
    FriendSearchResultMenu_CallbackFunc___ctor(v15, (Il2CppObject *)v2, Method_FriendRootComponent_OnSelectOffer__, 0LL);
    if ( !v13
      || (FriendSearchResultMenu__Open(v13, selectFriendEntity, currentCursor, v15, 0LL),
          friendSearchMenu = v2->fields.friendSearchMenu,
          v17 = (FriendSearchMenu_CallbackFunc_o *)sub_1B4D1DC(FriendSearchMenu_CallbackFunc_TypeInfo),
          FriendSearchMenu_CallbackFunc___ctor(
            v17,
            (Il2CppObject *)v2,
            Method_FriendRootComponent_OnSelectSearchFriend__,
            0LL),
          !friendSearchMenu)
      || (FriendSearchMenu__Open(friendSearchMenu, v17, 0, 0LL),
          (this = (FriendRootComponent_o *)v2->fields.myFSM) == 0LL) )
    {
LABEL_14:
      sub_1B4D1EC(this, method);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_5359/*"END_ACTION"*/, 0LL);
    EventTutorialMaster__CheckTutorial(-1, 50, 0LL, 0, 0, 0, 0, 0LL);
  }
}


void __fastcall FriendRootComponent__StartSearchInput(FriendRootComponent_o *this, const MethodInfo *method)
{
  FriendRootComponent_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  FriendSearchResultMenu_o *friendSearchResultMenu; // x20
  OtherUserGameEntity_o *selectFriendEntity; // x21
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  int32_t currentCursor; // w22
  FriendSearchResultMenu_CallbackFunc_o *v10; // x23
  FriendSearchMenu_o *friendSearchMenu; // x20
  FriendSearchMenu_CallbackFunc_o *v12; // x21

  v2 = this;
  if ( (byte_49B5E77 & 1) == 0 )
  {
    sub_1B4CF90(&FriendSearchResultMenu_CallbackFunc_TypeInfo, method);
    sub_1B4CF90(&FriendSearchMenu_CallbackFunc_TypeInfo, v3);
    sub_1B4CF90(&Method_FriendRootComponent_OnSelectOffer__, v4);
    this = (FriendRootComponent_o *)sub_1B4CF90(&Method_FriendRootComponent_OnSelectSearchFriend__, v5);
    byte_49B5E77 = 1;
  }
  friendSearchResultMenu = v2->fields.friendSearchResultMenu;
  if ( !friendSearchResultMenu )
    goto LABEL_11;
  if ( friendSearchResultMenu->fields.isOpen )
  {
    selectFriendEntity = v2->fields.selectFriendEntity;
    if ( selectFriendEntity )
    {
      classButtonControl = v2->fields.classButtonControl;
      if ( !classButtonControl )
        goto LABEL_11;
      currentCursor = classButtonControl->fields.currentCursor;
      v10 = (FriendSearchResultMenu_CallbackFunc_o *)sub_1B4D1DC(FriendSearchResultMenu_CallbackFunc_TypeInfo);
      FriendSearchResultMenu_CallbackFunc___ctor(
        v10,
        (Il2CppObject *)v2,
        Method_FriendRootComponent_OnSelectOffer__,
        0LL);
      FriendSearchResultMenu__Open(friendSearchResultMenu, selectFriendEntity, currentCursor, v10, 0LL);
    }
    else
    {
      FriendSearchResultMenu__Close(v2->fields.friendSearchResultMenu, 0LL);
    }
  }
  friendSearchMenu = v2->fields.friendSearchMenu;
  v12 = (FriendSearchMenu_CallbackFunc_o *)sub_1B4D1DC(FriendSearchMenu_CallbackFunc_TypeInfo);
  FriendSearchMenu_CallbackFunc___ctor(v12, (Il2CppObject *)v2, Method_FriendRootComponent_OnSelectSearchFriend__, 0LL);
  if ( !friendSearchMenu )
LABEL_11:
    sub_1B4D1EC(this, method);
  FriendSearchMenu__Open(friendSearchMenu, v12, 0, 0LL);
}


void __fastcall FriendRootComponent___OnClickBack_b__100_0(
        FriendRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  System_Action_object__o *v7; // x20
  const MethodInfo *v8; // x2

  v4 = (Il2CppObject *)this;
  if ( (byte_49B5EC3 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_string__TypeInfo, result);
    sub_1B4CF90(&Method_FriendRootComponent__OnClickBack_b__100_1__, v5);
    this = (FriendRootComponent_o *)sub_1B4CF90(&StringLiteral_21947/*"ok"*/, v6);
    byte_49B5EC3 = 1;
  }
  if ( !result )
    sub_1B4D1EC(this, result);
  if ( System_String__Equals_61128772(result, (System_String_o *)StringLiteral_21947/*"ok"*/, 0LL) )
  {
    v7 = (System_Action_object__o *)sub_1B4D1DC(System_Action_string__TypeInfo);
    System_Action_object____ctor(v7, v4, Method_FriendRootComponent__OnClickBack_b__100_1__, 0LL);
    FriendRootComponent__FriendLockRequst((FriendRootComponent_o *)v4, (System_Action_string__o *)v7, v8);
  }
}


void __fastcall FriendRootComponent___OnClickBack_b__100_1(
        FriendRootComponent_o *this,
        System_String_o *res,
        const MethodInfo *method)
{
  FriendRootComponent_o *v4; // x19
  __int64 v5; // x1

  v4 = this;
  if ( (byte_49B5EC4 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_21947/*"ok"*/, res);
    this = (FriendRootComponent_o *)sub_1B4CF90(&StringLiteral_3421/*"CLICK_BACK"*/, v5);
    byte_49B5EC4 = 1;
  }
  if ( !res )
    goto LABEL_9;
  if ( System_String__Equals_61128772(res, (System_String_o *)StringLiteral_21947/*"ok"*/, 0LL) )
  {
    this = (FriendRootComponent_o *)v4->fields.friendSearchMenu;
    if ( this )
    {
      FriendSearchMenu__BlockInput((FriendSearchMenu_o *)this, 0LL);
      this = (FriendRootComponent_o *)v4->fields.myFSM;
      if ( this )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3421/*"CLICK_BACK"*/, 0LL);
        return;
      }
    }
LABEL_9:
    sub_1B4D1EC(this, res);
  }
}


void __fastcall FriendRootComponent___OnClickModeUserDetail_b__102_0(
        FriendRootComponent_o *this,
        System_String_o *res,
        const MethodInfo *method)
{
  FriendRootComponent_o *v4; // x19
  __int64 v5; // x1
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  const MethodInfo *v8; // x1

  v4 = this;
  if ( (byte_49B5EC7 & 1) == 0 )
  {
    sub_1B4CF90(&Method_FriendRootComponent__OnClickModeUserDetail_b__102_0__, res);
    this = (FriendRootComponent_o *)sub_1B4CF90(&StringLiteral_21947/*"ok"*/, v5);
    byte_49B5EC7 = 1;
  }
  if ( !res )
    sub_1B4D1EC(this, res);
  if ( System_String__Equals_61128772(res, (System_String_o *)StringLiteral_21947/*"ok"*/, 0LL) )
  {
    v6 = Method_FriendRootComponent__OnClickModeUserDetail_b__102_0__;
    if ( (*((_BYTE *)Method_FriendRootComponent__OnClickModeUserDetail_b__102_0__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1B4CFA8(Method_FriendRootComponent__OnClickModeUserDetail_b__102_0__);
    v7 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0LL);
    v4->fields.currentModeKind = 0;
    FriendRootComponent__RefreshInfo(v4, v8);
  }
}


void __fastcall FriendRootComponent___OnClickTabFriend_b__109_0(
        FriendRootComponent_o *this,
        System_String_o *res,
        const MethodInfo *method)
{
  FriendRootComponent_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  int state; // w8
  ClassButtonControlComponent_o *v8; // x20
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  FriendRootComponent_o *v11; // x0
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x1
  struct ClassButtonControlComponent_o *classButtonControl; // x8

  v4 = this;
  if ( (byte_49B5EC8 & 1) == 0 )
  {
    sub_1B4CF90(&Method_FriendRootComponent__OnClickTabFriend_b__109_0__, res);
    sub_1B4CF90(&StringLiteral_21947/*"ok"*/, v5);
    this = (FriendRootComponent_o *)sub_1B4CF90(&StringLiteral_3469/*"CLICK_TAB"*/, v6);
    byte_49B5EC8 = 1;
  }
  if ( !res )
    goto LABEL_22;
  if ( !System_String__Equals_61128772(res, (System_String_o *)StringLiteral_21947/*"ok"*/, 0LL) )
    return;
  state = v4->fields.state;
  if ( state <= 9 )
  {
    if ( state != 4 && state != 9 )
      return;
LABEL_16:
    v9 = Method_FriendRootComponent__OnClickTabFriend_b__109_0__;
    if ( (*((_BYTE *)Method_FriendRootComponent__OnClickTabFriend_b__109_0__ + 83) & 2) != 0 )
      v9 = (_QWORD *)sub_1B4CFA8(Method_FriendRootComponent__OnClickTabFriend_b__109_0__);
    v10 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v9, v9[4]);
    OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0, 0LL);
    FriendRootComponent__set_tabKind(v11, 0, v12);
    FriendRootComponent__RefreshTab(v4, v13);
    classButtonControl = v4->fields.classButtonControl;
    if ( classButtonControl )
    {
      classButtonControl->fields.updateEnable = 0;
      this = (FriendRootComponent_o *)v4->fields.myFSM;
      if ( this )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3469/*"CLICK_TAB"*/, 0LL);
        return;
      }
    }
LABEL_22:
    sub_1B4D1EC(this, res);
  }
  if ( state == 14 || state == 19 )
    goto LABEL_16;
  if ( state == 23 )
  {
    this = (FriendRootComponent_o *)v4->fields.friendSearchResultMenu;
    if ( !this )
      goto LABEL_22;
    if ( FriendSearchResultMenu__getChangeCursorPos((FriendSearchResultMenu_o *)this, 0LL) != -1 )
    {
      this = (FriendRootComponent_o *)v4->fields.friendSearchResultMenu;
      if ( !this )
        goto LABEL_22;
      v8 = v4->fields.classButtonControl;
      this = (FriendRootComponent_o *)FriendSearchResultMenu__get_GetCursorPos((FriendSearchResultMenu_o *)this, 0LL);
      if ( !v8 )
        goto LABEL_22;
      ClassButtonControlComponent__setCursor(v8, (int32_t)this, 0LL);
    }
    goto LABEL_16;
  }
}


void __fastcall FriendRootComponent___OnClickTabOffered_b__110_0(
        FriendRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  System_Action_object__o *v7; // x20
  const MethodInfo *v8; // x2

  v4 = (Il2CppObject *)this;
  if ( (byte_49B5EC9 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_string__TypeInfo, result);
    sub_1B4CF90(&Method_FriendRootComponent__OnClickTabOffered_b__110_1__, v5);
    this = (FriendRootComponent_o *)sub_1B4CF90(&StringLiteral_21947/*"ok"*/, v6);
    byte_49B5EC9 = 1;
  }
  if ( !result )
    sub_1B4D1EC(this, result);
  if ( System_String__Equals_61128772(result, (System_String_o *)StringLiteral_21947/*"ok"*/, 0LL) )
  {
    v7 = (System_Action_object__o *)sub_1B4D1DC(System_Action_string__TypeInfo);
    System_Action_object____ctor(v7, v4, (intptr_t)Method_FriendRootComponent__OnClickTabOffered_b__110_1__, 0LL);
    FriendRootComponent__FriendLockRequst((FriendRootComponent_o *)v4, (System_Action_string__o *)v7, v8);
  }
}


void __fastcall FriendRootComponent___OnClickTabOffered_b__110_1(
        FriendRootComponent_o *this,
        System_String_o *res,
        const MethodInfo *method)
{
  FriendRootComponent_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  int state; // w8
  ClassButtonControlComponent_o *v8; // x20
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  FriendRootComponent_o *v11; // x0
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x1
  struct ClassButtonControlComponent_o *classButtonControl; // x8

  v4 = this;
  if ( (byte_49B5ECA & 1) == 0 )
  {
    sub_1B4CF90(&Method_FriendRootComponent__OnClickTabOffered_b__110_1__, res);
    sub_1B4CF90(&StringLiteral_21947/*"ok"*/, v5);
    this = (FriendRootComponent_o *)sub_1B4CF90(&StringLiteral_3469/*"CLICK_TAB"*/, v6);
    byte_49B5ECA = 1;
  }
  if ( !res )
    goto LABEL_22;
  if ( !System_String__Equals_61128772(res, (System_String_o *)StringLiteral_21947/*"ok"*/, 0LL) )
    return;
  state = v4->fields.state;
  if ( state <= 9 )
  {
    if ( state != 4 && state != 9 )
      return;
LABEL_16:
    v9 = Method_FriendRootComponent__OnClickTabOffered_b__110_1__;
    if ( (*((_BYTE *)Method_FriendRootComponent__OnClickTabOffered_b__110_1__ + 83) & 2) != 0 )
      v9 = (_QWORD *)sub_1B4CFA8(Method_FriendRootComponent__OnClickTabOffered_b__110_1__);
    v10 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v9, v9[4]);
    OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0, 0LL);
    FriendRootComponent__set_tabKind(v11, 1, v12);
    FriendRootComponent__RefreshTab(v4, v13);
    classButtonControl = v4->fields.classButtonControl;
    if ( classButtonControl )
    {
      classButtonControl->fields.updateEnable = 0;
      this = (FriendRootComponent_o *)v4->fields.myFSM;
      if ( this )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3469/*"CLICK_TAB"*/, 0LL);
        return;
      }
    }
LABEL_22:
    sub_1B4D1EC(this, res);
  }
  if ( state == 14 || state == 19 )
    goto LABEL_16;
  if ( state == 23 )
  {
    this = (FriendRootComponent_o *)v4->fields.friendSearchResultMenu;
    if ( !this )
      goto LABEL_22;
    if ( FriendSearchResultMenu__getChangeCursorPos((FriendSearchResultMenu_o *)this, 0LL) != -1 )
    {
      this = (FriendRootComponent_o *)v4->fields.friendSearchResultMenu;
      if ( !this )
        goto LABEL_22;
      v8 = v4->fields.classButtonControl;
      this = (FriendRootComponent_o *)FriendSearchResultMenu__get_GetCursorPos((FriendSearchResultMenu_o *)this, 0LL);
      if ( !v8 )
        goto LABEL_22;
      ClassButtonControlComponent__setCursor(v8, (int32_t)this, 0LL);
    }
    goto LABEL_16;
  }
}


void __fastcall FriendRootComponent___OnClickTabSearch_b__111_0(
        FriendRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  System_Action_object__o *v7; // x20
  const MethodInfo *v8; // x2

  v4 = (Il2CppObject *)this;
  if ( (byte_49B5ECB & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_string__TypeInfo, result);
    sub_1B4CF90(&Method_FriendRootComponent__OnClickTabSearch_b__111_1__, v5);
    this = (FriendRootComponent_o *)sub_1B4CF90(&StringLiteral_21947/*"ok"*/, v6);
    byte_49B5ECB = 1;
  }
  if ( !result )
    sub_1B4D1EC(this, result);
  if ( System_String__Equals_61128772(result, (System_String_o *)StringLiteral_21947/*"ok"*/, 0LL) )
  {
    v7 = (System_Action_object__o *)sub_1B4D1DC(System_Action_string__TypeInfo);
    System_Action_object____ctor(v7, v4, (intptr_t)Method_FriendRootComponent__OnClickTabSearch_b__111_1__, 0LL);
    FriendRootComponent__FriendLockRequst((FriendRootComponent_o *)v4, (System_Action_string__o *)v7, v8);
  }
}


void __fastcall FriendRootComponent___OnClickTabSearch_b__111_1(
        FriendRootComponent_o *this,
        System_String_o *res,
        const MethodInfo *method)
{
  FriendRootComponent_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  int state; // w8
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  FriendRootComponent_o *v10; // x0
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x1
  struct ClassButtonControlComponent_o *classButtonControl; // x8

  v4 = this;
  if ( (byte_49B5ECC & 1) == 0 )
  {
    sub_1B4CF90(&Method_FriendRootComponent__OnClickTabSearch_b__111_1__, res);
    sub_1B4CF90(&StringLiteral_21947/*"ok"*/, v5);
    this = (FriendRootComponent_o *)sub_1B4CF90(&StringLiteral_3469/*"CLICK_TAB"*/, v6);
    byte_49B5ECC = 1;
  }
  if ( !res )
    goto LABEL_17;
  if ( !System_String__Equals_61128772(res, (System_String_o *)StringLiteral_21947/*"ok"*/, 0LL) )
    return;
  state = v4->fields.state;
  if ( state > 9 )
  {
    if ( (unsigned int)state > 0x17 || ((1 << state) & 0x884000) == 0 )
      return;
    goto LABEL_11;
  }
  if ( state == 4 || state == 9 )
  {
LABEL_11:
    v8 = Method_FriendRootComponent__OnClickTabSearch_b__111_1__;
    if ( (*((_BYTE *)Method_FriendRootComponent__OnClickTabSearch_b__111_1__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1B4CFA8(Method_FriendRootComponent__OnClickTabSearch_b__111_1__);
    v9 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0, 0LL);
    FriendRootComponent__set_tabKind(v10, 2, v11);
    FriendRootComponent__RefreshTab(v4, v12);
    classButtonControl = v4->fields.classButtonControl;
    if ( classButtonControl )
    {
      classButtonControl->fields.updateEnable = 0;
      this = (FriendRootComponent_o *)v4->fields.myFSM;
      if ( this )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3469/*"CLICK_TAB"*/, 0LL);
        return;
      }
    }
LABEL_17:
    sub_1B4D1EC(this, res);
  }
}


void __fastcall FriendRootComponent___RequestFollowRemove_b__143_0(
        FriendRootComponent_o *this,
        System_String_o *res,
        const MethodInfo *method)
{
  FriendRootComponent_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  FriendOperationItemListViewItem_o *Item; // x0
  struct OtherUserGameEntity_o *otherUserGameEntity; // x21
  NetworkManager_ResultCallbackFunc_o *v14; // x20

  v4 = this;
  if ( (byte_49B5ECD & 1) == 0 )
  {
    sub_1B4CF90(&Method_FriendRootComponent_EndRequestFollowRemove__, res);
    sub_1B4CF90(&Method_NetworkManager_getRequest_FollowdRemoveRequest___, v5);
    sub_1B4CF90(&NetworkManager_TypeInfo, v6);
    sub_1B4CF90(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1B4CF90(&StringLiteral_21947/*"ok"*/, v9);
    this = (FriendRootComponent_o *)sub_1B4CF90(&StringLiteral_10845/*"REQUEST_NG"*/, v10);
    byte_49B5ECD = 1;
  }
  if ( !res )
    goto LABEL_15;
  if ( System_String__Equals_61128772(res, (System_String_o *)StringLiteral_21947/*"ok"*/, 0LL) )
  {
    this = (FriendRootComponent_o *)v4->fields.operationItemListViewManager;
    if ( !this )
      goto LABEL_15;
    Item = FriendOperationItemListViewManager__GetItem(
             (FriendOperationItemListViewManager_o *)this,
             v4->fields.selectItemNum,
             v11);
    if ( Item )
    {
      otherUserGameEntity = Item->fields.otherUserGameEntity;
      if ( otherUserGameEntity )
      {
        this = (FriendRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( this )
        {
          CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)this, 0, 0LL);
          v14 = (NetworkManager_ResultCallbackFunc_o *)sub_1B4D1DC(NetworkManager_ResultCallbackFunc_TypeInfo);
          NetworkManager_ResultCallbackFunc___ctor(
            v14,
            (Il2CppObject *)v4,
            Method_FriendRootComponent_EndRequestFollowRemove__,
            0LL);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          this = (FriendRootComponent_o *)NetworkManager__getRequest_object_(
                                            v14,
                                            (const MethodInfo_2F86AFC *)Method_NetworkManager_getRequest_FollowdRemoveRequest___);
          if ( this )
          {
            FollowdRemoveRequest__beginRequest((FollowdRemoveRequest_o *)this, otherUserGameEntity->fields.userId, 0LL);
            return;
          }
        }
LABEL_15:
        sub_1B4D1EC(this, res);
      }
    }
  }
  this = (FriendRootComponent_o *)v4->fields.myFSM;
  if ( !this )
    goto LABEL_15;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_10845/*"REQUEST_NG"*/, 0LL);
}


void __fastcall FriendRootComponent___RequestFriendOffer2_b__88_0(
        FriendRootComponent_o *this,
        System_String_o *res,
        const MethodInfo *method)
{
  FriendRootComponent_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  FriendOperationItemListViewItem_o *Item; // x0
  struct OtherUserGameEntity_o *otherUserGameEntity; // x21
  NetworkManager_ResultCallbackFunc_o *v13; // x20

  v4 = this;
  if ( (byte_49B5EC1 & 1) == 0 )
  {
    sub_1B4CF90(&Method_FriendRootComponent_EndRequestFriend__, res);
    sub_1B4CF90(&Method_NetworkManager_getRequest_FriendOfferRequest___, v5);
    sub_1B4CF90(&NetworkManager_TypeInfo, v6);
    sub_1B4CF90(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    sub_1B4CF90(&StringLiteral_21947/*"ok"*/, v8);
    this = (FriendRootComponent_o *)sub_1B4CF90(&StringLiteral_10845/*"REQUEST_NG"*/, v9);
    byte_49B5EC1 = 1;
  }
  if ( !res )
    goto LABEL_14;
  if ( System_String__Equals_61128772(res, (System_String_o *)StringLiteral_21947/*"ok"*/, 0LL) )
  {
    this = (FriendRootComponent_o *)v4->fields.operationItemListViewManager;
    if ( !this )
      goto LABEL_14;
    Item = FriendOperationItemListViewManager__GetItem(
             (FriendOperationItemListViewManager_o *)this,
             v4->fields.selectItemNum,
             v10);
    if ( Item )
    {
      otherUserGameEntity = Item->fields.otherUserGameEntity;
      if ( otherUserGameEntity )
      {
        v13 = (NetworkManager_ResultCallbackFunc_o *)sub_1B4D1DC(NetworkManager_ResultCallbackFunc_TypeInfo);
        NetworkManager_ResultCallbackFunc___ctor(
          v13,
          (Il2CppObject *)v4,
          Method_FriendRootComponent_EndRequestFriend__,
          0LL);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        this = (FriendRootComponent_o *)NetworkManager__getRequest_object_(
                                          v13,
                                          (const MethodInfo_2F86AFC *)Method_NetworkManager_getRequest_FriendOfferRequest___);
        if ( this )
        {
          FriendOfferRequest__beginRequest((FriendOfferRequest_o *)this, otherUserGameEntity->fields.userId, 0LL);
          return;
        }
LABEL_14:
        sub_1B4D1EC(this, res);
      }
    }
  }
  this = (FriendRootComponent_o *)v4->fields.myFSM;
  if ( !this )
    goto LABEL_14;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_10845/*"REQUEST_NG"*/, 0LL);
}


void __fastcall FriendRootComponent___RequestFriendRemove_b__92_0(
        FriendRootComponent_o *this,
        System_String_o *res,
        const MethodInfo *method)
{
  FriendRootComponent_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  FriendOperationItemListViewItem_o *Item; // x0
  struct OtherUserGameEntity_o *otherUserGameEntity; // x21
  NetworkManager_ResultCallbackFunc_o *v14; // x20

  v4 = this;
  if ( (byte_49B5EC2 & 1) == 0 )
  {
    sub_1B4CF90(&Method_FriendRootComponent_EndRequestFriend__, res);
    sub_1B4CF90(&Method_NetworkManager_getRequest_FriendRemoveRequest___, v5);
    sub_1B4CF90(&NetworkManager_TypeInfo, v6);
    sub_1B4CF90(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1B4CF90(&StringLiteral_21947/*"ok"*/, v9);
    this = (FriendRootComponent_o *)sub_1B4CF90(&StringLiteral_10845/*"REQUEST_NG"*/, v10);
    byte_49B5EC2 = 1;
  }
  if ( !res )
    goto LABEL_15;
  if ( System_String__Equals_61128772(res, (System_String_o *)StringLiteral_21947/*"ok"*/, 0LL) )
  {
    this = (FriendRootComponent_o *)v4->fields.operationItemListViewManager;
    if ( !this )
      goto LABEL_15;
    Item = FriendOperationItemListViewManager__GetItem(
             (FriendOperationItemListViewManager_o *)this,
             v4->fields.selectItemNum,
             v11);
    if ( Item )
    {
      otherUserGameEntity = Item->fields.otherUserGameEntity;
      if ( otherUserGameEntity )
      {
        this = (FriendRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( this )
        {
          CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)this, 0, 0LL);
          v14 = (NetworkManager_ResultCallbackFunc_o *)sub_1B4D1DC(NetworkManager_ResultCallbackFunc_TypeInfo);
          NetworkManager_ResultCallbackFunc___ctor(
            v14,
            (Il2CppObject *)v4,
            Method_FriendRootComponent_EndRequestFriend__,
            0LL);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          this = (FriendRootComponent_o *)NetworkManager__getRequest_object_(
                                            v14,
                                            (const MethodInfo_2F86AFC *)Method_NetworkManager_getRequest_FriendRemoveRequest___);
          if ( this )
          {
            FriendRemoveRequest__beginRequest((FriendRemoveRequest_o *)this, otherUserGameEntity->fields.userId, 0LL);
            return;
          }
        }
LABEL_15:
        sub_1B4D1EC(this, res);
      }
    }
  }
  this = (FriendRootComponent_o *)v4->fields.myFSM;
  if ( !this )
    goto LABEL_15;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_10845/*"REQUEST_NG"*/, 0LL);
}


void __fastcall FriendRootComponent___afterMainMenubarSelect_b__101_0(
        FriendRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  FriendRootComponent_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Action_object__o *v8; // x20
  const MethodInfo *v9; // x2

  v4 = this;
  if ( (byte_49B5EC5 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_string__TypeInfo, result);
    sub_1B4CF90(&Method_FriendRootComponent__afterMainMenubarSelect_b__101_1__, v5);
    sub_1B4CF90(&StringLiteral_21947/*"ok"*/, v6);
    this = (FriendRootComponent_o *)sub_1B4CF90(&StringLiteral_10845/*"REQUEST_NG"*/, v7);
    byte_49B5EC5 = 1;
  }
  if ( !result )
    goto LABEL_8;
  if ( System_String__Equals_61128772(result, (System_String_o *)StringLiteral_21947/*"ok"*/, 0LL) )
  {
    v8 = (System_Action_object__o *)sub_1B4D1DC(System_Action_string__TypeInfo);
    System_Action_object____ctor(
      v8,
      (Il2CppObject *)v4,
      Method_FriendRootComponent__afterMainMenubarSelect_b__101_1__,
      0LL);
    FriendRootComponent__FriendLockRequst(v4, (System_Action_string__o *)v8, v9);
    return;
  }
  this = (FriendRootComponent_o *)v4->fields.myFSM;
  if ( !this )
LABEL_8:
    sub_1B4D1EC(this, result);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_10845/*"REQUEST_NG"*/, 0LL);
}


void __fastcall FriendRootComponent___afterMainMenubarSelect_b__101_1(
        FriendRootComponent_o *this,
        System_String_o *res,
        const MethodInfo *method)
{
  FriendRootComponent_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  PlayMakerFSM_o *myFSM; // x8
  __int64 *v8; // x9

  v4 = this;
  if ( (byte_49B5EC6 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_10847/*"REQUEST_OK"*/, res);
    sub_1B4CF90(&StringLiteral_21947/*"ok"*/, v5);
    this = (FriendRootComponent_o *)sub_1B4CF90(&StringLiteral_10845/*"REQUEST_NG"*/, v6);
    byte_49B5EC6 = 1;
  }
  if ( !res
    || (this = (FriendRootComponent_o *)System_String__Equals_61128772(res, (System_String_o *)StringLiteral_21947/*"ok"*/, 0LL),
        (myFSM = v4->fields.myFSM) == 0LL) )
  {
    sub_1B4D1EC(this, res);
  }
  v8 = &StringLiteral_10847/*"REQUEST_OK"*/;
  if ( ((unsigned __int8)this & 1) == 0 )
    v8 = &StringLiteral_10845/*"REQUEST_NG"*/;
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)*v8, 0LL);
}


void __fastcall FriendRootComponent__afterMainMenubarSelect(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  FriendRootComponent_messageRequestCallback_o *v4; // x20
  const MethodInfo *v5; // x2

  if ( (byte_49B5E97 & 1) == 0 )
  {
    sub_1B4CF90(&Method_FriendRootComponent__afterMainMenubarSelect_b__101_0__, method);
    sub_1B4CF90(&FriendRootComponent_messageRequestCallback_TypeInfo, v3);
    byte_49B5E97 = 1;
  }
  v4 = (FriendRootComponent_messageRequestCallback_o *)sub_1B4D1DC(FriendRootComponent_messageRequestCallback_TypeInfo);
  FriendRootComponent_messageRequestCallback___ctor(
    v4,
    (Il2CppObject *)this,
    Method_FriendRootComponent__afterMainMenubarSelect_b__101_0__,
    0LL);
  FriendRootComponent__messageDispChangeRequest(this, v4, v5);
}


void __fastcall FriendRootComponent__beginFinish(FriendRootComponent_o *this, const MethodInfo *method)
{
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0

  if ( (byte_49B5E67 & 1) == 0 )
  {
    sub_1B4CF90(&RandomLimitCountManager_TypeInfo, method);
    byte_49B5E67 = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    goto LABEL_13;
  operationItemListViewManager->fields._isMessageApply_k__BackingField = 0;
  FriendOperationItemListViewManager__DestroyList(operationItemListViewManager, method);
  operationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.operationConfirmMenu;
  if ( !operationItemListViewManager )
    goto LABEL_13;
  FriendOperationConfirmMenu__Init((FriendOperationConfirmMenu_o *)operationItemListViewManager, method);
  operationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.friendSearchMenu;
  if ( !operationItemListViewManager
    || (FriendSearchMenu__Init((FriendSearchMenu_o *)operationItemListViewManager, 0LL),
        (operationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.friendSearchResultMenu) == 0LL)
    || (FriendSearchResultMenu__Init((FriendSearchResultMenu_o *)operationItemListViewManager, 0LL),
        (operationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.friendWarningDialog) == 0LL)
    || (FriendWarningDialog__Init((FriendWarningDialog_o *)operationItemListViewManager, 0LL),
        (operationItemListViewManager = this->fields.operationItemListViewManager) == 0LL)
    || (operationItemListViewManager = (FriendOperationItemListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                                 (UnityEngine_Component_o *)operationItemListViewManager,
                                                                                 0LL)) == 0LL )
  {
LABEL_13:
    sub_1B4D1EC(operationItemListViewManager, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)operationItemListViewManager, 0, 0LL);
  this->fields.state = 0;
  this->fields.selectFriendEntity = 0LL;
  sub_1B4CF34(&this->fields.selectFriendEntity);
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  RandomLimitCountManager__set_EnableRandomLimitCount(0, 0LL);
}


void __fastcall FriendRootComponent__beginInitialize(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x1
  UnityEngine_Component_o *bgTxtSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  ClassButtonControlComponent_o *classButtonControl; // x20
  ClassButtonControlComponent_CallbackFunc_o *v12; // x21
  System_Action_o *v13; // x20

  if ( (byte_49B5E61 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&AtlasManager_TypeInfo, v3);
    sub_1B4CF90(&ClassButtonControlComponent_CallbackFunc_TypeInfo, v4);
    sub_1B4CF90(&Method_FriendRootComponent_EndLoadOutGameAtlas__, v5);
    sub_1B4CF90(&Method_FriendRootComponent_changeClass__, v6);
    byte_49B5E61 = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 7, 39, 0LL);
  FriendRootComponent__CheckHelpUI(this, v7);
  bgTxtSprite = (UnityEngine_Component_o *)this->fields.bgTxtSprite;
  if ( !bgTxtSprite )
    goto LABEL_10;
  gameObject = UnityEngine_Component__get_gameObject(bgTxtSprite, 0LL);
  bgTxtSprite = (UnityEngine_Component_o *)BgTxtManager__IsActiveBgTxt(0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)bgTxtSprite & 1, 0LL),
        classButtonControl = this->fields.classButtonControl,
        v12 = (ClassButtonControlComponent_CallbackFunc_o *)sub_1B4D1DC(ClassButtonControlComponent_CallbackFunc_TypeInfo),
        ClassButtonControlComponent_CallbackFunc___ctor(
          v12,
          (Il2CppObject *)this,
          (intptr_t)Method_FriendRootComponent_changeClass__,
          0LL),
        !classButtonControl)
    || (ClassButtonControlComponent__init(classButtonControl, v12, 0, 0, 0, 0LL),
        (bgTxtSprite = (UnityEngine_Component_o *)this->fields.operationItemListViewManager) == 0LL) )
  {
LABEL_10:
    sub_1B4D1EC(bgTxtSprite, v8);
  }
  FriendOperationItemListViewManager__SetupClassBoardInfo((FriendOperationItemListViewManager_o *)bgTxtSprite, v8);
  v13 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_FriendRootComponent_EndLoadOutGameAtlas__, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadOutGameAtlas(v13, 0LL);
}


void __fastcall FriendRootComponent__beginResume(
        FriendRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 methodPtr_low; // x10
  FriendOperationItemListViewManager_o *Instance; // x0
  __int64 v9; // x1
  CommonUI_o *v10; // x20
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_49B5E68 & 1) == 0 )
  {
    sub_1B4CF90(&AvalonSceneManager_TypeInfo, data);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B4CF90(&SupportInfoJump_TypeInfo, v6);
    byte_49B5E68 = 1;
  }
  if ( data
    && (methodPtr_low = LOBYTE(SupportInfoJump_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(data->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low)
    && (SupportInfoJump_c *)data->klass->_2.typeHierarchy[methodPtr_low - 1] == SupportInfoJump_TypeInfo )
  {
    this->fields.isReturnSupport = 1;
    Instance = (FriendOperationItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v10 = (CommonUI_o *)Instance;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    if ( !v10
      || (CommonUI__maskFadein(v10, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL),
          FriendRootComponent__RefreshTab(this, v11),
          (Instance = this->fields.operationItemListViewManager) == 0LL) )
    {
      sub_1B4D1EC(Instance, v9);
    }
    FriendOperationItemListViewManager__SetMode_30966740(Instance, 2, v12);
    SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 7, 39, 0LL);
    MainMenuBar__setMenuActive(1, 0LL, 0LL);
    SceneRootComponent__sendMessageStartUp((SceneRootComponent_o *)this, 0LL);
  }
  else
  {
    SceneRootComponent__beginResume_39218500((SceneRootComponent_o *)this, 0LL);
    this->fields.isReturnSupport = 0;
  }
}


void __fastcall FriendRootComponent__beginStartUp(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_String_o *MainBgmName; // x20
  __int64 v10; // x1
  TitleInfoControl_o *titleInfo; // x0
  NetworkManager_ResultCallbackFunc_o *v12; // x20

  if ( (byte_49B5E63 & 1) == 0 )
  {
    sub_1B4CF90(&BgmManager_TypeInfo, method);
    sub_1B4CF90(&Method_FriendRootComponent_EndFriendRequest__, v3);
    sub_1B4CF90(&Method_NetworkManager_getRequest_FriendTopRequest___, v4);
    sub_1B4CF90(&NetworkManager_TypeInfo, v5);
    sub_1B4CF90(&RandomLimitCountManager_TypeInfo, v6);
    sub_1B4CF90(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    sub_1B4CF90(&SoundManager_TypeInfo, v8);
    byte_49B5E63 = 1;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  RandomLimitCountManager__set_EnableRandomLimitCount(1, 0LL);
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  MainBgmName = BgmManager__GetMainBgmName(0LL);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm(MainBgmName, 0LL);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_15;
  TitleInfoControl__setTitleInfo(titleInfo, this->fields.myFSM, 1, 0LL, 40, 0LL);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_15;
  TitleInfoControl__setBackBtnSprite_37675944(titleInfo, 1, 0, 0, 0LL);
  this->fields.state = 0;
  this->fields.currentModeKind = 0;
  this->fields.selectFriendEntity = 0LL;
  sub_1B4CF34(&this->fields.selectFriendEntity);
  v12 = (NetworkManager_ResultCallbackFunc_o *)sub_1B4D1DC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v12,
    (Il2CppObject *)this,
    Method_FriendRootComponent_EndFriendRequest__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  titleInfo = (TitleInfoControl_o *)NetworkManager__getRequest_object_(
                                      v12,
                                      (const MethodInfo_2F86AFC *)Method_NetworkManager_getRequest_FriendTopRequest___);
  if ( !titleInfo )
LABEL_15:
    sub_1B4D1EC(titleInfo, v10);
  RequestBase__beginRequest((RequestBase_o *)titleInfo, 0LL);
}


void __fastcall FriendRootComponent__beginStartUp_30984724(
        FriendRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  struct SceneJumpInfo_o **p_jumpInfo; // x20
  __int64 methodPtr_low; // x9

  if ( (byte_49B5E64 & 1) == 0 )
  {
    sub_1B4CF90(&SceneJumpInfo_TypeInfo, data);
    byte_49B5E64 = 1;
  }
  p_jumpInfo = &this->fields.jumpInfo;
  this->fields.jumpInfo = 0LL;
  sub_1B4CF34(&this->fields.jumpInfo);
  if ( data )
  {
    methodPtr_low = LOBYTE(SceneJumpInfo_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(data->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
      && (SceneJumpInfo_c *)data->klass->_2.typeHierarchy[methodPtr_low - 1] == SceneJumpInfo_TypeInfo )
    {
      *p_jumpInfo = (struct SceneJumpInfo_o *)data;
      sub_1B4CF34(&this->fields.jumpInfo);
      if ( *p_jumpInfo )
        this->fields.jumpTabKind = (*p_jumpInfo)->fields.id;
    }
  }
  ((void (__fastcall *)(FriendRootComponent_o *, Il2CppMethodPointer))this->klass->vtable._6_beginStartUp.method)(
    this,
    this->klass->vtable._7_beginFinish.methodPtr);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendRootComponent__changeClass(
        FriendRootComponent_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0

  if ( (byte_49B5EA1 & 1) == 0 )
  {
    sub_1B4CF90(&Method_FriendRootComponent_changeClass__, *(_QWORD *)&classPos);
    byte_49B5EA1 = 1;
  }
  v5 = Method_FriendRootComponent_changeClass__;
  if ( (*((_BYTE *)Method_FriendRootComponent_changeClass__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1B4CFA8(Method_FriendRootComponent_changeClass__);
  v6 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    sub_1B4D1EC(0LL, v7);
  FriendOperationItemListViewManager__SetClassId(operationItemListViewManager, classPos, v8);
}


int32_t __fastcall FriendRootComponent__get_tabKind(FriendRootComponent_o *this, const MethodInfo *method)
{
  int32_t result; // w0
  FriendRootComponent_c *v4; // x0

  if ( (byte_49B5E60 & 1) == 0 )
  {
    sub_1B4CF90(&FriendRootComponent_TypeInfo, method);
    byte_49B5E60 = 1;
  }
  result = this->fields.jumpTabKind;
  if ( result == 3 )
  {
    v4 = FriendRootComponent_TypeInfo;
    if ( !FriendRootComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FriendRootComponent_TypeInfo);
      v4 = FriendRootComponent_TypeInfo;
    }
    return v4->static_fields->tabKindSave;
  }
  return result;
}


void __fastcall FriendRootComponent__messageDispChangeRequest(
        FriendRootComponent_o *this,
        FriendRootComponent_messageRequestCallback_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  FriendRootComponent___c__DisplayClass112_0_o *v14; // x20
  ListViewManager_o *operationItemListViewManager; // x0
  int64_t v16; // x1
  struct FriendRootComponent_messageRequestCallback_o **p_callback; // x22
  int32_t ItemSum; // w23
  System_Collections_Generic_List_long__o *v19; // x21
  System_Collections_Generic_List_long__o *v20; // x22
  const MethodInfo *v21; // x2
  int32_t i; // w24
  struct UnityEngine_GameObject_o *dragParentObject; // x8
  struct System_Int64_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x8
  struct System_Int64_array *v28; // x8
  _QWORD *v29; // x9
  __int64 v30; // x10
  __int64 v31; // x8
  System_Collections_Generic_List_long__o *v32; // x0
  NetworkManager_ResultCallbackFunc_o *v33; // x19
  FriendMessageHideSyncRequest_o *v34; // x19
  System_Int64_array *v35; // x20

  if ( (byte_49B5E9F & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_long__Add__, callback);
    sub_1B4CF90(&Method_System_Collections_Generic_List_long__ToArray__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_long___ctor__, v6);
    sub_1B4CF90(&System_Collections_Generic_List_long__TypeInfo, v7);
    sub_1B4CF90(&Method_NetworkManager_getRequest_FriendMessageHideSyncRequest___, v8);
    sub_1B4CF90(&NetworkManager_TypeInfo, v9);
    sub_1B4CF90(&NetworkManager_ResultCallbackFunc_TypeInfo, v10);
    sub_1B4CF90(&Method_FriendRootComponent___c__DisplayClass112_0__messageDispChangeRequest_b__0__, v11);
    sub_1B4CF90(&FriendRootComponent___c__DisplayClass112_0_TypeInfo, v12);
    sub_1B4CF90(&StringLiteral_21947/*"ok"*/, v13);
    byte_49B5E9F = 1;
  }
  v14 = (FriendRootComponent___c__DisplayClass112_0_o *)sub_1B4D1DC(FriendRootComponent___c__DisplayClass112_0_TypeInfo);
  FriendRootComponent___c__DisplayClass112_0___ctor(v14, 0LL);
  if ( !v14 )
    goto LABEL_35;
  v14->fields.__4__this = this;
  sub_1B4CF34(&v14->fields);
  v14->fields.callback = callback;
  p_callback = &v14->fields.callback;
  sub_1B4CF34(&v14->fields.callback);
  operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    goto LABEL_35;
  if ( LOBYTE(operationItemListViewManager[1].fields.emptyMessageLabel) )
  {
    ItemSum = ListViewManager__get_ItemSum(operationItemListViewManager, 0LL);
    v19 = (System_Collections_Generic_List_long__o *)sub_1B4D1DC(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v19,
      (const MethodInfo_35679BC *)Method_System_Collections_Generic_List_long___ctor__);
    v20 = (System_Collections_Generic_List_long__o *)sub_1B4D1DC(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v20,
      (const MethodInfo_35679BC *)Method_System_Collections_Generic_List_long___ctor__);
    if ( ItemSum >= 1 )
    {
      for ( i = 0; ItemSum != i; ++i )
      {
        operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
        if ( !operationItemListViewManager )
          goto LABEL_35;
        operationItemListViewManager = (ListViewManager_o *)FriendOperationItemListViewManager__GetItem(
                                                              (FriendOperationItemListViewManager_o *)operationItemListViewManager,
                                                              i,
                                                              v21);
        if ( !operationItemListViewManager )
          goto LABEL_35;
        if ( LODWORD(operationItemListViewManager->fields.clipRange.fields.x) == 3 )
        {
          dragParentObject = operationItemListViewManager->fields.dragParentObject;
          if ( !dragParentObject )
            goto LABEL_35;
          v16 = *(_QWORD *)&dragParentObject->fields.m_CachedPtr;
          if ( LOBYTE(operationItemListViewManager->fields.SortObject) )
          {
            if ( !v19 )
              goto LABEL_35;
            items = v19->fields._items;
            v25 = Method_System_Collections_Generic_List_long__Add__;
            ++v19->fields._version;
            if ( !items )
              goto LABEL_35;
            size = v19->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              v31 = v25[4];
              v32 = v19;
LABEL_24:
              System_Collections_Generic_List_long___AddWithResize(
                v32,
                v16,
                *(const MethodInfo_3568210 **)(*(_QWORD *)(v31 + 192) + 112LL));
              continue;
            }
            v27 = &items->obj.klass + size;
            v19->fields._size = size + 1;
          }
          else
          {
            if ( !v20 )
              goto LABEL_35;
            v28 = v20->fields._items;
            v29 = Method_System_Collections_Generic_List_long__Add__;
            ++v20->fields._version;
            if ( !v28 )
              goto LABEL_35;
            v30 = v20->fields._size;
            if ( (unsigned int)v30 >= v28->max_length )
            {
              v31 = v29[4];
              v32 = v20;
              goto LABEL_24;
            }
            v27 = &v28->obj.klass + v30;
            v20->fields._size = v30 + 1;
          }
          v27[4] = (Il2CppClass *)v16;
        }
      }
    }
    v33 = (NetworkManager_ResultCallbackFunc_o *)sub_1B4D1DC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v33,
      (Il2CppObject *)v14,
      Method_FriendRootComponent___c__DisplayClass112_0__messageDispChangeRequest_b__0__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    operationItemListViewManager = (ListViewManager_o *)NetworkManager__getRequest_object_(
                                                          v33,
                                                          (const MethodInfo_2F86AFC *)Method_NetworkManager_getRequest_FriendMessageHideSyncRequest___);
    if ( v20 )
    {
      v34 = (FriendMessageHideSyncRequest_o *)operationItemListViewManager;
      operationItemListViewManager = (ListViewManager_o *)System_Collections_Generic_List_long___ToArray(
                                                            v20,
                                                            (const MethodInfo_3569CC8 *)Method_System_Collections_Generic_List_long__ToArray__);
      if ( v19 )
      {
        v35 = (System_Int64_array *)operationItemListViewManager;
        operationItemListViewManager = (ListViewManager_o *)System_Collections_Generic_List_long___ToArray(
                                                              v19,
                                                              (const MethodInfo_3569CC8 *)Method_System_Collections_Generic_List_long__ToArray__);
        if ( v34 )
        {
          FriendMessageHideSyncRequest__beginRequest(v34, v35, (System_Int64_array *)operationItemListViewManager, 0LL);
          return;
        }
      }
    }
LABEL_35:
    sub_1B4D1EC(operationItemListViewManager, v16);
  }
  if ( *p_callback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))(*p_callback)->fields.m_target)(
      (*p_callback)->fields.original_method_info,
      StringLiteral_21947/*"ok"*/,
      *(_QWORD *)&(*p_callback)->fields.extra_arg);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendRootComponent__set_tabKind(FriendRootComponent_o *this, int32_t value, const MethodInfo *method)
{
  FriendRootComponent_c *v4; // x0

  if ( (byte_49B5E5F & 1) == 0 )
  {
    sub_1B4CF90(&FriendRootComponent_TypeInfo, *(_QWORD *)&value);
    byte_49B5E5F = 1;
  }
  v4 = FriendRootComponent_TypeInfo;
  if ( !FriendRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendRootComponent_TypeInfo);
    v4 = FriendRootComponent_TypeInfo;
  }
  v4->static_fields->tabKindSave = value;
}


void __fastcall FriendRootComponent___c__DisplayClass112_0___ctor(
        FriendRootComponent___c__DisplayClass112_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall FriendRootComponent___c__DisplayClass112_0___messageDispChangeRequest_b__0(
        FriendRootComponent___c__DisplayClass112_0_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  struct FriendRootComponent_o *_4__this; // x8
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x8
  struct FriendRootComponent_messageRequestCallback_o *callback; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (operationItemListViewManager = _4__this->fields.operationItemListViewManager) == 0LL )
    sub_1B4D1EC(this, result);
  operationItemListViewManager->fields._isMessageApply_k__BackingField = 0;
  callback = this->fields.callback;
  if ( callback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))callback->fields.m_target)(
      callback->fields.original_method_info,
      result,
      *(_QWORD *)&callback->fields.extra_arg);
}


void __fastcall FriendRootComponent___c__DisplayClass113_0___ctor(
        FriendRootComponent___c__DisplayClass113_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall FriendRootComponent___c__DisplayClass113_0___FriendLockRequst_b__0(
        FriendRootComponent___c__DisplayClass113_0_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  __int64 v7; // x1
  int32_t v8; // w21
  struct FriendRootComponent_o *_4__this; // x8

  if ( (byte_49B5ECE & 1) == 0 )
  {
    sub_1B4CF90(&Method_ActionExtensions_Call_string___, result);
    sub_1B4CF90(&StringLiteral_21947/*"ok"*/, v5);
    byte_49B5ECE = 1;
  }
  operationItemListViewManager = (FriendOperationItemListViewManager_o *)System_String__op_Equality(
                                                                           result,
                                                                           (System_String_o *)StringLiteral_21947/*"ok"*/,
                                                                           0LL);
  if ( ((unsigned __int8)operationItemListViewManager & 1) != 0 && this->fields.sum >= 1 )
  {
    v8 = 0;
    do
    {
      _4__this = this->fields.__4__this;
      if ( !_4__this || (operationItemListViewManager = _4__this->fields.operationItemListViewManager) == 0LL )
        sub_1B4D1EC(operationItemListViewManager, v7);
      operationItemListViewManager = (FriendOperationItemListViewManager_o *)FriendOperationItemListViewManager__GetItem(
                                                                               operationItemListViewManager,
                                                                               v8,
                                                                               0LL);
      if ( operationItemListViewManager )
        FriendOperationItemListViewItem__RefreshLockInfo(
          (FriendOperationItemListViewItem_o *)operationItemListViewManager,
          0LL);
      ++v8;
    }
    while ( v8 < this->fields.sum );
  }
  ActionExtensions__Call_object_(
    (System_Action_T__o *)this->fields.onFinishedRequest,
    (Il2CppObject *)result,
    (const MethodInfo_2E57CDC *)Method_ActionExtensions_Call_string___);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendRootComponent_messageRequestCallback___ctor(
        FriendRootComponent_messageRequestCallback_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  Il2CppObject *v9; // x8
  struct System_Reflection_MethodInfo_o *v10; // x9
  __int64 v11; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B4CF34(&this->fields.method);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B4D050(v6) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = (Il2CppObject *)sub_1994B54;
LABEL_8:
      this->fields.m_target = v9;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v8 )
    {
      v9 = (Il2CppObject *)sub_1994B34;
      goto LABEL_8;
    }
    if ( !object )
    {
      v11 = sub_1B4D208(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B4D0B8(v11, 0LL);
    }
  }
  v10 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v10;
LABEL_9:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1994AEC;
}


System_IAsyncResult_o *__fastcall FriendRootComponent_messageRequestCallback__BeginInvoke(
        FriendRootComponent_messageRequestCallback_o *this,
        System_String_o *result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  System_String_o *v6; // [xsp+0h] [xbp-20h] BYREF

  v6 = result;
  return (System_IAsyncResult_o *)sub_1B4CF44(this, &v6, callback, object);
}


void __fastcall FriendRootComponent_messageRequestCallback__EndInvoke(
        FriendRootComponent_messageRequestCallback_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B4CF48(result, 0LL, method);
}


void __fastcall FriendRootComponent_messageRequestCallback__Invoke(
        FriendRootComponent_messageRequestCallback_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    *(_QWORD *)&this->fields.extra_arg);
}