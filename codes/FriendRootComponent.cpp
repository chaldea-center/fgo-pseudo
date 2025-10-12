void FriendRootComponent___cctor(const MethodInfo *method)
{
  if ( (byte_4C32634 & 1) == 0 )
  {
    sub_1C32C20(&FriendRootComponent_TypeInfo);
    byte_4C32634 = 1;
  }
  FriendRootComponent_TypeInfo->static_fields->tabKindSave = 3;
}


void FriendRootComponent___ctor(FriendRootComponent_o *this, const MethodInfo *method)
{
  this->fields.jumpTabKind = 3;
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0);
}


void FriendRootComponent__BackFollowConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t state; // w8
  CommonUI_o *Instance; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4C32625 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C32625 = 1;
  }
  state = this->fields.state;
  switch ( state )
  {
    case ',':
      this->fields.state = 23;
      Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        CommonUI__CloseNotificationDialog(Instance, 0);
        goto LABEL_12;
      }
LABEL_14:
      sub_1C32E7C(Instance);
    case '+':
      Instance = (CommonUI_o *)this->fields.friendWarningDialog;
      this->fields.state = 23;
      if ( Instance )
      {
        FriendWarningDialog__Close((FriendWarningDialog_o *)Instance, 0);
        goto LABEL_12;
      }
      goto LABEL_14;
    case '*':
      Instance = (CommonUI_o *)this->fields.operationConfirmMenu;
      this->fields.state = 23;
      if ( Instance )
      {
        FriendOperationConfirmMenu__Close_32653212((FriendOperationConfirmMenu_o *)Instance, 0, v2);
LABEL_12:
        FriendRootComponent__StartSearchInput(this, v6);
        return;
      }
      goto LABEL_14;
  }
}


void FriendRootComponent__BackFollowOfferConfirmRefreshShowSearch(
        FriendRootComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  FriendSearchMenu_o *friendSearchMenu; // x20
  FriendSearchMenu_CallbackFunc_o *v6; // x21
  const MethodInfo *v7; // x1

  if ( (byte_4C3262A & 1) == 0 )
  {
    sub_1C32C20(&FriendSearchMenu_CallbackFunc_TypeInfo);
    sub_1C32C20(&Method_FriendRootComponent_OnSelectSearchFriend__);
    byte_4C3262A = 1;
  }
  if ( this->fields.state == 42 )
  {
    this->fields.state = 23;
    this->fields.selectFriendCode = 0;
    sub_1C32BC4(&this->fields.selectFriendCode, 0);
    this->fields.selectFriendEntity = 0;
    sub_1C32BC4(&this->fields.selectFriendEntity, 0);
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close_32653212(operationConfirmMenu, 0, v3),
          (operationConfirmMenu = (FriendOperationConfirmMenu_o *)this->fields.friendSearchResultMenu) == 0)
      || (FriendSearchResultMenu__Close((FriendSearchResultMenu_o *)operationConfirmMenu, 0),
          friendSearchMenu = this->fields.friendSearchMenu,
          v6 = (FriendSearchMenu_CallbackFunc_o *)sub_1C32E6C(FriendSearchMenu_CallbackFunc_TypeInfo),
          FriendSearchMenu_CallbackFunc___ctor(
            v6,
            (Il2CppObject *)this,
            Method_FriendRootComponent_OnSelectSearchFriend__,
            0),
          !friendSearchMenu) )
    {
      sub_1C32E7C(operationConfirmMenu);
    }
    FriendSearchMenu__Open(friendSearchMenu, v6, 1, 0);
    FriendRootComponent__RefreshInfo(this, v7);
  }
}


void FriendRootComponent__BackFollowRemoveConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v6; // x21
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x2

  if ( (byte_4C3262C & 1) == 0 )
  {
    sub_1C32C20(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_1C32C20(&Method_FriendRootComponent_OnSelectFriendItem__);
    byte_4C3262C = 1;
  }
  if ( this->fields.state == 45 )
  {
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close_32653212(operationConfirmMenu, 0, v2),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v6 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1C32E6C(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v6,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v7),
          !operationItemListViewManager) )
    {
      sub_1C32E7C(operationConfirmMenu);
    }
    operationItemListViewManager->fields.callbackFunc = v6;
    sub_1C32BC4(&operationItemListViewManager->fields.callbackFunc, v6);
    FriendOperationItemListViewManager__SetMode_32678244(operationItemListViewManager, 2, v8);
    this->fields.state = 4;
  }
}


void FriendRootComponent__BackFollowRemoveConfirmBeforeRefresh(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  const MethodInfo *v5; // x1

  if ( this->fields.state == 45 )
  {
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close_32653212(operationConfirmMenu, 0, v2),
          (operationConfirmMenu = (FriendOperationConfirmMenu_o *)this->fields.operationItemListViewManager) == 0) )
    {
      sub_1C32E7C(operationConfirmMenu);
    }
    FriendOperationItemListViewManager__DestroyList((FriendOperationItemListViewManager_o *)operationConfirmMenu, v5);
  }
}


void FriendRootComponent__BackFollowRemoveConfirmRefreshShowFriend(
        FriendRootComponent_o *this,
        const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v3; // x20
  Il2CppObject *Request_object; // x0

  if ( (byte_4C3262D & 1) == 0 )
  {
    sub_1C32C20(&Method_FriendRootComponent_EndFriendRequest2__);
    sub_1C32C20(&Method_NetworkManager_getRequest_FriendTopRequest___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4C3262D = 1;
  }
  v3 = (NetworkManager_ResultCallbackFunc_o *)sub_1C32E6C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v3, (Il2CppObject *)this, Method_FriendRootComponent_EndFriendRequest2__, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v3,
                     (const MethodInfo_3168488 *)Method_NetworkManager_getRequest_FriendTopRequest___);
  if ( !Request_object )
    sub_1C32E7C(0);
  RequestBase__beginRequest((RequestBase_o *)Request_object, 0);
}


void FriendRootComponent__BackFriendAcceptConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v6; // x21
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x2

  if ( (byte_4C325F2 & 1) == 0 )
  {
    sub_1C32C20(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_1C32C20(&Method_FriendRootComponent_OnSelectFriendItem__);
    byte_4C325F2 = 1;
  }
  if ( this->fields.state == 31 )
  {
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close_32653212(operationConfirmMenu, 0, v2),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v6 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1C32E6C(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v6,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v7),
          !operationItemListViewManager) )
    {
      sub_1C32E7C(operationConfirmMenu);
    }
    operationItemListViewManager->fields.callbackFunc = v6;
    sub_1C32BC4(&operationItemListViewManager->fields.callbackFunc, v6);
    FriendOperationItemListViewManager__SetMode_32678244(operationItemListViewManager, 2, v8);
    this->fields.state = 14;
  }
}


void FriendRootComponent__BackFriendAcceptConfirmRefreshShowOffered(
        FriendRootComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x3
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v9; // x21
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2

  if ( (byte_4C325F3 & 1) == 0 )
  {
    sub_1C32C20(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_1C32C20(&Method_FriendRootComponent_OnSelectFriendItem__);
    byte_4C325F3 = 1;
  }
  if ( this->fields.state == 31 )
  {
    this->fields.state = 14;
    FriendRootComponent__RefreshInfo(this, method);
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu )
      goto LABEL_11;
    FriendOperationConfirmMenu__Close_32653212(operationConfirmMenu, 0, v3);
    operationConfirmMenu = (FriendOperationConfirmMenu_o *)this->fields.operationItemListViewManager;
    if ( !operationConfirmMenu
      || (FriendOperationItemListViewManager__DestroyList(
            (FriendOperationItemListViewManager_o *)operationConfirmMenu,
            v5),
          (classButtonControl = this->fields.classButtonControl) == 0)
      || (operationConfirmMenu = (FriendOperationConfirmMenu_o *)this->fields.operationItemListViewManager) == 0
      || (FriendOperationItemListViewManager__CreateList(
            (FriendOperationItemListViewManager_o *)operationConfirmMenu,
            2,
            classButtonControl->fields.currentCursor,
            v6),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v9 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1C32E6C(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v9,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v10),
          !operationItemListViewManager) )
    {
LABEL_11:
      sub_1C32E7C(operationConfirmMenu);
    }
    operationItemListViewManager->fields.callbackFunc = v9;
    sub_1C32BC4(&operationItemListViewManager->fields.callbackFunc, v9);
    FriendOperationItemListViewManager__SetMode_32678244(operationItemListViewManager, 2, v11);
  }
}


void FriendRootComponent__BackFriendCancelConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v6; // x21
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x2

  if ( (byte_4C325F8 & 1) == 0 )
  {
    sub_1C32C20(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_1C32C20(&Method_FriendRootComponent_OnSelectFriendItem__);
    byte_4C325F8 = 1;
  }
  if ( this->fields.state == 37 )
  {
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close_32653212(operationConfirmMenu, 0, v2),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v6 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1C32E6C(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v6,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v7),
          !operationItemListViewManager) )
    {
      sub_1C32E7C(operationConfirmMenu);
    }
    operationItemListViewManager->fields.callbackFunc = v6;
    sub_1C32BC4(&operationItemListViewManager->fields.callbackFunc, v6);
    FriendOperationItemListViewManager__SetMode_32678244(operationItemListViewManager, 2, v8);
    this->fields.state = 14;
  }
}


void FriendRootComponent__BackFriendCancelConfirmRefreshShowOffer(
        FriendRootComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x3
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v9; // x21
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2

  if ( (byte_4C325F9 & 1) == 0 )
  {
    sub_1C32C20(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_1C32C20(&Method_FriendRootComponent_OnSelectFriendItem__);
    byte_4C325F9 = 1;
  }
  if ( this->fields.state == 37 )
  {
    this->fields.state = 9;
    FriendRootComponent__RefreshInfo(this, method);
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu )
      goto LABEL_11;
    FriendOperationConfirmMenu__Close_32653212(operationConfirmMenu, 0, v3);
    operationConfirmMenu = (FriendOperationConfirmMenu_o *)this->fields.operationItemListViewManager;
    if ( !operationConfirmMenu
      || (FriendOperationItemListViewManager__DestroyList(
            (FriendOperationItemListViewManager_o *)operationConfirmMenu,
            v5),
          (classButtonControl = this->fields.classButtonControl) == 0)
      || (operationConfirmMenu = (FriendOperationConfirmMenu_o *)this->fields.operationItemListViewManager) == 0
      || (FriendOperationItemListViewManager__CreateList(
            (FriendOperationItemListViewManager_o *)operationConfirmMenu,
            1,
            classButtonControl->fields.currentCursor,
            v6),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v9 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1C32E6C(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v9,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v10),
          !operationItemListViewManager) )
    {
LABEL_11:
      sub_1C32E7C(operationConfirmMenu);
    }
    operationItemListViewManager->fields.callbackFunc = v9;
    sub_1C32BC4(&operationItemListViewManager->fields.callbackFunc, v9);
    FriendOperationItemListViewManager__SetMode_32678244(operationItemListViewManager, 2, v11);
  }
}


void FriendRootComponent__BackFriendOfferConfirm(FriendRootComponent_o *this, const MethodInfo *method)
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
      FriendWarningDialog__Close(friendWarningDialog, 0);
      goto LABEL_7;
    }
LABEL_9:
    sub_1C32E7C(friendWarningDialog);
  }
  if ( state == 27 )
  {
    friendWarningDialog = (FriendWarningDialog_o *)this->fields.operationConfirmMenu;
    this->fields.state = 23;
    if ( friendWarningDialog )
    {
      FriendOperationConfirmMenu__Close_32653212((FriendOperationConfirmMenu_o *)friendWarningDialog, 0, v2);
LABEL_7:
      FriendRootComponent__StartSearchInput(this, v6);
      return;
    }
    goto LABEL_9;
  }
}


void FriendRootComponent__BackFriendOfferConfirm2(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t state; // w8
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v7; // x21
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2

  if ( (byte_4C3262F & 1) == 0 )
  {
    sub_1C32C20(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_1C32C20(&Method_FriendRootComponent_OnSelectFriendItem__);
    byte_4C3262F = 1;
  }
  state = this->fields.state;
  if ( state == 29 || state == 27 )
  {
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close_32653212(operationConfirmMenu, 0, v2),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v7 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1C32E6C(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v7,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v8),
          !operationItemListViewManager) )
    {
      sub_1C32E7C(operationConfirmMenu);
    }
    operationItemListViewManager->fields.callbackFunc = v7;
    sub_1C32BC4(&operationItemListViewManager->fields.callbackFunc, v7);
    FriendOperationItemListViewManager__SetMode_32678244(operationItemListViewManager, 2, v9);
    this->fields.state = 4;
  }
}


void FriendRootComponent__BackFriendOfferConfirmRefreshShowFriend(
        FriendRootComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x3
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v9; // x21
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2

  if ( (byte_4C32630 & 1) == 0 )
  {
    sub_1C32C20(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_1C32C20(&Method_FriendRootComponent_OnSelectFriendItem__);
    byte_4C32630 = 1;
  }
  if ( this->fields.state == 27 )
  {
    this->fields.state = 4;
    FriendRootComponent__RefreshInfo(this, method);
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu )
      goto LABEL_11;
    FriendOperationConfirmMenu__Close_32653212(operationConfirmMenu, 0, v3);
    operationConfirmMenu = (FriendOperationConfirmMenu_o *)this->fields.operationItemListViewManager;
    if ( !operationConfirmMenu
      || (FriendOperationItemListViewManager__DestroyList(
            (FriendOperationItemListViewManager_o *)operationConfirmMenu,
            v5),
          (classButtonControl = this->fields.classButtonControl) == 0)
      || (operationConfirmMenu = (FriendOperationConfirmMenu_o *)this->fields.operationItemListViewManager) == 0
      || (FriendOperationItemListViewManager__CreateList(
            (FriendOperationItemListViewManager_o *)operationConfirmMenu,
            3,
            classButtonControl->fields.currentCursor,
            v6),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v9 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1C32E6C(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v9,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v10),
          !operationItemListViewManager) )
    {
LABEL_11:
      sub_1C32E7C(operationConfirmMenu);
    }
    operationItemListViewManager->fields.callbackFunc = v9;
    sub_1C32BC4(&operationItemListViewManager->fields.callbackFunc, v9);
    FriendOperationItemListViewManager__SetMode_32678244(operationItemListViewManager, 2, v11);
  }
}


void FriendRootComponent__BackFriendOfferConfirmRefreshShowSearch(
        FriendRootComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  FriendSearchMenu_o *friendSearchMenu; // x20
  FriendSearchMenu_CallbackFunc_o *v6; // x21

  if ( (byte_4C325F0 & 1) == 0 )
  {
    sub_1C32C20(&FriendSearchMenu_CallbackFunc_TypeInfo);
    sub_1C32C20(&Method_FriendRootComponent_OnSelectSearchFriend__);
    byte_4C325F0 = 1;
  }
  if ( this->fields.state == 27 )
  {
    this->fields.state = 23;
    this->fields.selectFriendCode = 0;
    sub_1C32BC4(&this->fields.selectFriendCode, 0);
    this->fields.selectFriendEntity = 0;
    sub_1C32BC4(&this->fields.selectFriendEntity, 0);
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close_32653212(operationConfirmMenu, 0, v3),
          (operationConfirmMenu = (FriendOperationConfirmMenu_o *)this->fields.friendSearchResultMenu) == 0)
      || (FriendSearchResultMenu__Close((FriendSearchResultMenu_o *)operationConfirmMenu, 0),
          friendSearchMenu = this->fields.friendSearchMenu,
          v6 = (FriendSearchMenu_CallbackFunc_o *)sub_1C32E6C(FriendSearchMenu_CallbackFunc_TypeInfo),
          FriendSearchMenu_CallbackFunc___ctor(
            v6,
            (Il2CppObject *)this,
            Method_FriendRootComponent_OnSelectSearchFriend__,
            0),
          !friendSearchMenu) )
    {
      sub_1C32E7C(operationConfirmMenu);
    }
    FriendSearchMenu__Open(friendSearchMenu, v6, 1, 0);
  }
}


void FriendRootComponent__BackFriendRejectConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v6; // x21
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x2

  if ( (byte_4C325F5 & 1) == 0 )
  {
    sub_1C32C20(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_1C32C20(&Method_FriendRootComponent_OnSelectFriendItem__);
    byte_4C325F5 = 1;
  }
  if ( this->fields.state == 34 )
  {
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close_32653212(operationConfirmMenu, 0, v2),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v6 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1C32E6C(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v6,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v7),
          !operationItemListViewManager) )
    {
      sub_1C32E7C(operationConfirmMenu);
    }
    operationItemListViewManager->fields.callbackFunc = v6;
    sub_1C32BC4(&operationItemListViewManager->fields.callbackFunc, v6);
    FriendOperationItemListViewManager__SetMode_32678244(operationItemListViewManager, 2, v8);
    this->fields.state = 14;
  }
}


void FriendRootComponent__BackFriendRejectConfirmRefreshShowOffered(
        FriendRootComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x3
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v9; // x21
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2

  if ( (byte_4C325F6 & 1) == 0 )
  {
    sub_1C32C20(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_1C32C20(&Method_FriendRootComponent_OnSelectFriendItem__);
    byte_4C325F6 = 1;
  }
  if ( this->fields.state == 34 )
  {
    this->fields.state = 14;
    FriendRootComponent__RefreshInfo(this, method);
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu )
      goto LABEL_11;
    FriendOperationConfirmMenu__Close_32653212(operationConfirmMenu, 0, v3);
    operationConfirmMenu = (FriendOperationConfirmMenu_o *)this->fields.operationItemListViewManager;
    if ( !operationConfirmMenu
      || (FriendOperationItemListViewManager__DestroyList(
            (FriendOperationItemListViewManager_o *)operationConfirmMenu,
            v5),
          (classButtonControl = this->fields.classButtonControl) == 0)
      || (operationConfirmMenu = (FriendOperationConfirmMenu_o *)this->fields.operationItemListViewManager) == 0
      || (FriendOperationItemListViewManager__CreateList(
            (FriendOperationItemListViewManager_o *)operationConfirmMenu,
            2,
            classButtonControl->fields.currentCursor,
            v6),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v9 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1C32E6C(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v9,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v10),
          !operationItemListViewManager) )
    {
LABEL_11:
      sub_1C32E7C(operationConfirmMenu);
    }
    operationItemListViewManager->fields.callbackFunc = v9;
    sub_1C32BC4(&operationItemListViewManager->fields.callbackFunc, v9);
    FriendOperationItemListViewManager__SetMode_32678244(operationItemListViewManager, 2, v11);
  }
}


void FriendRootComponent__BackFriendRemoveConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v6; // x21
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x2

  if ( (byte_4C325FB & 1) == 0 )
  {
    sub_1C32C20(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_1C32C20(&Method_FriendRootComponent_OnSelectFriendItem__);
    byte_4C325FB = 1;
  }
  if ( this->fields.state == 40 )
  {
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close_32653212(operationConfirmMenu, 0, v2),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v6 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1C32E6C(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v6,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v7),
          !operationItemListViewManager) )
    {
      sub_1C32E7C(operationConfirmMenu);
    }
    operationItemListViewManager->fields.callbackFunc = v6;
    sub_1C32BC4(&operationItemListViewManager->fields.callbackFunc, v6);
    FriendOperationItemListViewManager__SetMode_32678244(operationItemListViewManager, 2, v8);
    this->fields.state = 4;
  }
}


void FriendRootComponent__BackFriendRemoveConfirmRefreshShowFriend(
        FriendRootComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x3
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v9; // x21
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2

  if ( (byte_4C325FC & 1) == 0 )
  {
    sub_1C32C20(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_1C32C20(&Method_FriendRootComponent_OnSelectFriendItem__);
    byte_4C325FC = 1;
  }
  if ( this->fields.state == 40 )
  {
    this->fields.state = 4;
    FriendRootComponent__RefreshInfo(this, method);
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu )
      goto LABEL_11;
    FriendOperationConfirmMenu__Close_32653212(operationConfirmMenu, 0, v3);
    operationConfirmMenu = (FriendOperationConfirmMenu_o *)this->fields.operationItemListViewManager;
    if ( !operationConfirmMenu
      || (FriendOperationItemListViewManager__DestroyList(
            (FriendOperationItemListViewManager_o *)operationConfirmMenu,
            v5),
          (classButtonControl = this->fields.classButtonControl) == 0)
      || (operationConfirmMenu = (FriendOperationConfirmMenu_o *)this->fields.operationItemListViewManager) == 0
      || (FriendOperationItemListViewManager__CreateList(
            (FriendOperationItemListViewManager_o *)operationConfirmMenu,
            3,
            classButtonControl->fields.currentCursor,
            v6),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v9 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1C32E6C(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v9,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v10),
          !operationItemListViewManager) )
    {
LABEL_11:
      sub_1C32E7C(operationConfirmMenu);
    }
    operationItemListViewManager->fields.callbackFunc = v9;
    sub_1C32BC4(&operationItemListViewManager->fields.callbackFunc, v9);
    FriendOperationItemListViewManager__SetMode_32678244(operationItemListViewManager, 2, v11);
  }
}


void FriendRootComponent__BackSearchFriend(FriendRootComponent_o *this, const MethodInfo *method)
{
  FriendSearchResultMenu_o *friendSearchResultMenu; // x0
  FriendSearchMenu_o *friendSearchMenu; // x20
  System_Action_o *v5; // x21

  if ( (byte_4C325E9 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_FriendRootComponent_OnMoveEnd__);
    byte_4C325E9 = 1;
  }
  if ( this->fields.state == 23 )
  {
    this->fields.state = 24;
    FriendRootComponent__RefreshInfo(this, method);
    this->fields.selectFriendEntity = 0;
    sub_1C32BC4(&this->fields.selectFriendEntity, 0);
    friendSearchResultMenu = this->fields.friendSearchResultMenu;
    if ( !friendSearchResultMenu
      || (FriendSearchResultMenu__Close(friendSearchResultMenu, 0),
          friendSearchMenu = this->fields.friendSearchMenu,
          v5 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo),
          System_Action___ctor(v5, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0),
          !friendSearchMenu) )
    {
      sub_1C32E7C(friendSearchResultMenu);
    }
    FriendSearchMenu__Close_32730480(friendSearchMenu, v5, 0);
  }
}


void FriendRootComponent__BackShowFriend(FriendRootComponent_o *this, const MethodInfo *method)
{
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4C325E1 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_FriendRootComponent_OnMoveEnd__);
    byte_4C325E1 = 1;
  }
  if ( this->fields.state == 4 )
  {
    this->fields.state = 5;
    FriendRootComponent__RefreshInfo(this, method);
    operationItemListViewManager = this->fields.operationItemListViewManager;
    v4 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(v4, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0);
    if ( !operationItemListViewManager )
      sub_1C32E7C(v5);
    operationItemListViewManager->fields.callbackFunc2 = v4;
    sub_1C32BC4(&operationItemListViewManager->fields.callbackFunc2, v4);
    FriendOperationItemListViewManager__SetMode_32678244(operationItemListViewManager, 4, v6);
  }
}


void FriendRootComponent__BackShowOffer(FriendRootComponent_o *this, const MethodInfo *method)
{
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x1

  if ( (byte_4C325E3 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_FriendRootComponent_OnMoveEnd__);
    byte_4C325E3 = 1;
  }
  if ( this->fields.state == 9 )
  {
    operationItemListViewManager = this->fields.operationItemListViewManager;
    v4 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(v4, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0);
    if ( !operationItemListViewManager )
      sub_1C32E7C(v5);
    operationItemListViewManager->fields.callbackFunc2 = v4;
    sub_1C32BC4(&operationItemListViewManager->fields.callbackFunc2, v4);
    FriendOperationItemListViewManager__SetMode_32678244(operationItemListViewManager, 4, v6);
    FriendRootComponent__RefreshInfo(this, v7);
    this->fields.state = 10;
  }
}


void FriendRootComponent__BackShowOffered(FriendRootComponent_o *this, const MethodInfo *method)
{
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4C325E5 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_FriendRootComponent_OnMoveEnd__);
    byte_4C325E5 = 1;
  }
  if ( this->fields.state == 14 )
  {
    this->fields.state = 15;
    FriendRootComponent__RefreshInfo(this, method);
    operationItemListViewManager = this->fields.operationItemListViewManager;
    v4 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(v4, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0);
    if ( !operationItemListViewManager )
      sub_1C32E7C(v5);
    operationItemListViewManager->fields.callbackFunc2 = v4;
    sub_1C32BC4(&operationItemListViewManager->fields.callbackFunc2, v4);
    FriendOperationItemListViewManager__SetMode_32678244(operationItemListViewManager, 4, v6);
  }
}


void FriendRootComponent__BackShowSearch(FriendRootComponent_o *this, const MethodInfo *method)
{
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4C325E7 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_FriendRootComponent_OnMoveEnd__);
    byte_4C325E7 = 1;
  }
  if ( this->fields.state == 19 )
  {
    this->fields.state = 20;
    operationItemListViewManager = this->fields.operationItemListViewManager;
    v4 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(v4, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0);
    if ( !operationItemListViewManager )
      sub_1C32E7C(v5);
    operationItemListViewManager->fields.callbackFunc2 = v4;
    sub_1C32BC4(&operationItemListViewManager->fields.callbackFunc2, v4);
    FriendOperationItemListViewManager__SetMode_32678244(operationItemListViewManager, 4, v6);
  }
}


void FriendRootComponent__ChangeLimitCountBySpoilerProtection(FriendRootComponent_o *this, const MethodInfo *method)
{
  ServantLeaderInfo_o *SpoilerSetting; // x0
  struct OtherUserGameEntity_o *selectFriendEntity; // x8
  struct ServantLeaderInfo_array *userSvtLeaderHash; // x20
  int max_length; // w8
  unsigned int v7; // w21
  struct OtherUserGameEntity_o *v8; // x8
  struct ServantLeaderInfo_array *eventUserSvtLeaderHash; // x20
  int v10; // w8
  unsigned int v11; // w21
  struct OtherUserGameEntity_o *v12; // x8
  struct ServantLeaderInfo_array *userSvtGrandHash; // x19
  int v14; // w8
  unsigned int v15; // w20

  if ( (byte_4C32607 & 1) == 0 )
  {
    sub_1C32C20(&OptionManager_TypeInfo);
    byte_4C32607 = 1;
  }
  if ( this->fields.selectFriendEntity )
  {
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    SpoilerSetting = (ServantLeaderInfo_o *)OptionManager__GetSpoilerSetting(0);
    if ( ((unsigned __int8)SpoilerSetting & 1) == 0 )
    {
      selectFriendEntity = this->fields.selectFriendEntity;
      if ( !selectFriendEntity )
        goto LABEL_30;
      userSvtLeaderHash = selectFriendEntity->fields.userSvtLeaderHash;
      if ( !userSvtLeaderHash )
        goto LABEL_30;
      max_length = userSvtLeaderHash->max_length;
      if ( max_length >= 1 )
      {
        v7 = 0;
        while ( v7 < max_length )
        {
          SpoilerSetting = userSvtLeaderHash->m_Items[v7];
          if ( !SpoilerSetting )
            goto LABEL_30;
          ServantLeaderInfo__ChangeLimitCountBySpoilerProtection(SpoilerSetting, 0);
          max_length = userSvtLeaderHash->max_length;
          if ( (int)++v7 >= max_length )
            goto LABEL_14;
        }
LABEL_29:
        sub_1C32E84(SpoilerSetting);
      }
LABEL_14:
      v8 = this->fields.selectFriendEntity;
      if ( !v8 )
        goto LABEL_30;
      eventUserSvtLeaderHash = v8->fields.eventUserSvtLeaderHash;
      if ( !eventUserSvtLeaderHash )
        goto LABEL_30;
      v10 = eventUserSvtLeaderHash->max_length;
      if ( v10 >= 1 )
      {
        v11 = 0;
        while ( v11 < v10 )
        {
          SpoilerSetting = eventUserSvtLeaderHash->m_Items[v11];
          if ( !SpoilerSetting )
            goto LABEL_30;
          ServantLeaderInfo__ChangeLimitCountBySpoilerProtection(SpoilerSetting, 0);
          v10 = eventUserSvtLeaderHash->max_length;
          if ( (int)++v11 >= v10 )
            goto LABEL_21;
        }
        goto LABEL_29;
      }
LABEL_21:
      v12 = this->fields.selectFriendEntity;
      if ( !v12 || (userSvtGrandHash = v12->fields.userSvtGrandHash) == 0 )
LABEL_30:
        sub_1C32E7C(SpoilerSetting);
      v14 = userSvtGrandHash->max_length;
      if ( v14 >= 1 )
      {
        v15 = 0;
        while ( v15 < v14 )
        {
          SpoilerSetting = userSvtGrandHash->m_Items[v15];
          if ( !SpoilerSetting )
            goto LABEL_30;
          ServantLeaderInfo__ChangeLimitCountBySpoilerProtection(SpoilerSetting, 0);
          v14 = userSvtGrandHash->max_length;
          if ( (int)++v15 >= v14 )
            return;
        }
        goto LABEL_29;
      }
    }
  }
}


void FriendRootComponent__CheckHelpUI(FriendRootComponent_o *this, const MethodInfo *method)
{
  System_String_o **v3; // x9
  System_String_o *v4; // x20
  UILabel_o *helpLabel; // x19
  System_String_o *v6; // x0

  if ( (byte_4C325D9 & 1) == 0 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_6533/*"FRIEND_LOCK_HELP_TEXT"*/);
    sub_1C32C20(&StringLiteral_6531/*"FRIEND_HELP_TEXT"*/);
    byte_4C325D9 = 1;
  }
  v3 = (System_String_o **)&StringLiteral_6531/*"FRIEND_HELP_TEXT"*/;
  if ( this->fields.isActiveModeKindButtons && this->fields.currentModeKind == 1 )
    v3 = (System_String_o **)&StringLiteral_6533/*"FRIEND_LOCK_HELP_TEXT"*/;
  v4 = *v3;
  helpLabel = this->fields.helpLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v6 = LocalizationManager__Get(v4, 0);
  if ( !helpLabel )
    sub_1C32E7C(v6);
  UILabel__set_text(helpLabel, v6, 0);
}


void FriendRootComponent__CheckModeKind(FriendRootComponent_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x20
  UserFollowMaster_o *v5; // x21
  int v6; // w21
  UICommonButton_o *modeUserDetailButton; // x20
  bool enabled; // w0
  UICommonButton_o *modeEditLockButton; // x20
  bool v10; // w0
  __int64 v11; // x8
  int32_t currentModeKind; // w20
  __int64 v13; // x21
  __int64 v14; // x22
  System_String_o **v15; // x8
  System_String_o *v16; // x1

  if ( (byte_4C3260E & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_TblFriendMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserFollowMaster___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&StringLiteral_17641/*"button_alllock_unreg"*/);
    sub_1C32C20(&StringLiteral_17647/*"button_infocheck_unreg"*/);
    sub_1C32C20(&StringLiteral_17646/*"button_infocheck_reg"*/);
    sub_1C32C20(&StringLiteral_17640/*"button_alllock_reg"*/);
    byte_4C3260E = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_TblFriendMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserFollowMaster___);
  if ( !MasterData_object )
    goto LABEL_31;
  v5 = (UserFollowMaster_o *)Instance;
  Instance = (DataManager_o *)TblFriendMaster__GetFriendSum((TblFriendMaster_o *)MasterData_object, 0);
  if ( (int)Instance > 0 )
    goto LABEL_9;
  if ( !v5 )
    goto LABEL_31;
  if ( UserFollowMaster__GetFollowSum(v5, 0) <= 0 )
  {
    v6 = 1;
    this->fields.currentModeKind = 0;
  }
  else
  {
LABEL_9:
    v6 = 0;
  }
  Instance = (DataManager_o *)this->fields.modeUserDetailButton;
  if ( !Instance )
    goto LABEL_31;
  ((void (__fastcall *)(DataManager_o *, __int64, const char *))Instance->klass[1]._1.name)(
    Instance,
    1,
    Instance->klass[1]._1.namespaze);
  Instance = (DataManager_o *)this->fields.modeEditLockButton;
  if ( !Instance )
    goto LABEL_31;
  ((void (__fastcall *)(DataManager_o *, __int64, const char *))Instance->klass[1]._1.name)(
    Instance,
    1,
    Instance->klass[1]._1.namespaze);
  Instance = (DataManager_o *)this->fields.modeUserDetailButton;
  if ( !Instance )
    goto LABEL_31;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, this->fields.currentModeKind != 0, 0);
  Instance = (DataManager_o *)this->fields.modeEditLockButton;
  if ( !Instance )
    goto LABEL_31;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, this->fields.currentModeKind != 1, 0);
  modeUserDetailButton = this->fields.modeUserDetailButton;
  if ( !modeUserDetailButton )
    goto LABEL_31;
  enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.modeUserDetailButton, 0);
  UICommonButton__SetColliderEnable(modeUserDetailButton, enabled, 1, 0);
  modeEditLockButton = this->fields.modeEditLockButton;
  if ( !modeEditLockButton )
    goto LABEL_31;
  v10 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.modeEditLockButton, 0);
  UICommonButton__SetColliderEnable(modeEditLockButton, v10, 1, 0);
  if ( v6 )
  {
    v11 = 232;
    if ( this->fields.currentModeKind )
      v11 = 224;
    Instance = *(DataManager_o **)((char *)&this->klass + v11);
    if ( Instance )
    {
      UICommonButton__SetButtonEnable((UICommonButton_o *)Instance, 0, 1, 0);
      goto LABEL_21;
    }
LABEL_31:
    sub_1C32E7C(Instance);
  }
LABEL_21:
  Instance = (DataManager_o *)this->fields.modeUserDetailSprite;
  if ( !Instance )
    goto LABEL_31;
  currentModeKind = this->fields.currentModeKind;
  v13 = StringLiteral_17640/*"button_alllock_reg"*/;
  v14 = StringLiteral_17641/*"button_alllock_unreg"*/;
  v15 = (System_String_o **)(currentModeKind ? &StringLiteral_17647/*"button_infocheck_unreg"*/ : &StringLiteral_17646/*"button_infocheck_reg"*/);
  UISprite__set_spriteName((UISprite_o *)Instance, *v15, 0);
  Instance = (DataManager_o *)this->fields.modeEditLockSprite;
  if ( !Instance )
    goto LABEL_31;
  if ( currentModeKind == 1 )
    v16 = (System_String_o *)v13;
  else
    v16 = (System_String_o *)v14;
  UISprite__set_spriteName((UISprite_o *)Instance, v16, 0);
}


bool FriendRootComponent__CheckTabKind(FriendRootComponent_o *this, const MethodInfo *method)
{
  int32_t tabKind; // w0
  PlayMakerFSM_o *myFSM; // x0
  __int64 *v5; // x8

  if ( (byte_4C325DD & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_8644/*"MENU_OPERATION_FRIEND"*/);
    sub_1C32C20(&StringLiteral_8646/*"MENU_OPERATION_OFFERED"*/);
    sub_1C32C20(&StringLiteral_8647/*"MENU_OPERATION_SEARCH"*/);
    byte_4C325DD = 1;
  }
  tabKind = FriendRootComponent__get_tabKind(this, method);
  switch ( tabKind )
  {
    case 2:
      myFSM = this->fields.myFSM;
      if ( myFSM )
      {
        v5 = &StringLiteral_8647/*"MENU_OPERATION_SEARCH"*/;
        goto LABEL_12;
      }
LABEL_14:
      sub_1C32E7C(myFSM);
    case 1:
      myFSM = this->fields.myFSM;
      if ( myFSM )
      {
        v5 = &StringLiteral_8646/*"MENU_OPERATION_OFFERED"*/;
        goto LABEL_12;
      }
      goto LABEL_14;
    case 0:
      myFSM = this->fields.myFSM;
      if ( myFSM )
      {
        v5 = &StringLiteral_8644/*"MENU_OPERATION_FRIEND"*/;
LABEL_12:
        PlayMakerFSM__SendEvent(myFSM, (System_String_o *)*v5, 0);
        return 1;
      }
      goto LABEL_14;
  }
  return 1;
}


void FriendRootComponent__EndCloseShowServant(FriendRootComponent_o *this, const MethodInfo *method)
{
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v4; // x21
  const MethodInfo *v5; // x3
  __int64 v6; // x0
  const MethodInfo *v7; // x2

  if ( (byte_4C325EE & 1) == 0 )
  {
    sub_1C32C20(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_1C32C20(&Method_FriendRootComponent_OnSelectFriendItem__);
    byte_4C325EE = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v4 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1C32E6C(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
    v5);
  if ( !operationItemListViewManager )
    sub_1C32E7C(v6);
  operationItemListViewManager->fields.callbackFunc = v4;
  sub_1C32BC4(&operationItemListViewManager->fields.callbackFunc, v4);
  FriendOperationItemListViewManager__SetMode_32678244(operationItemListViewManager, 2, v7);
}


void FriendRootComponent__EndCloseShowServantEquip(FriendRootComponent_o *this, const MethodInfo *method)
{
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v4; // x21
  const MethodInfo *v5; // x3
  __int64 v6; // x0
  const MethodInfo *v7; // x2

  if ( (byte_4C32618 & 1) == 0 )
  {
    sub_1C32C20(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_1C32C20(&Method_FriendRootComponent_OnSelectFriendItem__);
    byte_4C32618 = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v4 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1C32E6C(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
    v5);
  if ( !operationItemListViewManager )
    sub_1C32E7C(v6);
  operationItemListViewManager->fields.callbackFunc = v4;
  sub_1C32BC4(&operationItemListViewManager->fields.callbackFunc, v4);
  FriendOperationItemListViewManager__SetMode_32678244(operationItemListViewManager, 2, v7);
}


void FriendRootComponent__EndFriendRequest(
        FriendRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  FriendRootComponent_c *v4; // x0
  OtherUserGameEntity_array *Instance; // x0
  TblFriendMaster_o *v6; // x20
  const MethodInfo *v7; // x2
  int32_t v8; // w1
  OtherUserGameEntity_array *List; // x21
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1

  if ( (byte_4C325DA & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_TblFriendMaster___);
    sub_1C32C20(&FriendRootComponent_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C325DA = 1;
  }
  v4 = FriendRootComponent_TypeInfo;
  if ( !FriendRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendRootComponent_TypeInfo);
    v4 = FriendRootComponent_TypeInfo;
  }
  if ( v4->static_fields->tabKindSave == 3 && this->fields.jumpTabKind <= 1u )
  {
    EventTutorialMaster__CheckTutorial(-1, 49, 0, 0, 0, 0, 0, 0);
    v4 = FriendRootComponent_TypeInfo;
  }
  if ( !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = FriendRootComponent_TypeInfo;
  }
  if ( v4->static_fields->tabKindSave == 3 && this->fields.jumpTabKind == 3 )
  {
    Instance = (OtherUserGameEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (OtherUserGameEntity_array *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)Instance,
                                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_TblFriendMaster___);
      if ( Instance )
      {
        v6 = (TblFriendMaster_o *)Instance;
        Instance = TblFriendMaster__GetList((TblFriendMaster_o *)Instance, 2, 0);
        if ( Instance )
        {
          if ( Instance->max_length )
          {
            v8 = 1;
LABEL_22:
            FriendRootComponent__set_tabKind((FriendRootComponent_o *)Instance, v8, v7);
            EventTutorialMaster__CheckTutorial(-1, 49, 0, 0, 0, 0, 0, 0);
            goto LABEL_23;
          }
          List = TblFriendMaster__GetList(v6, 3, 0);
          Instance = TblFriendMaster__GetList(v6, 9, 0);
          if ( List )
          {
            if ( List->max_length )
            {
LABEL_21:
              v8 = 0;
              goto LABEL_22;
            }
            if ( Instance )
            {
              if ( !Instance->max_length )
              {
                FriendRootComponent__set_tabKind((FriendRootComponent_o *)Instance, 2, v7);
                goto LABEL_23;
              }
              goto LABEL_21;
            }
          }
        }
      }
    }
    sub_1C32E7C(Instance);
  }
LABEL_23:
  FriendRootComponent__InitModeKindButtons(this, (const MethodInfo *)result);
  FriendRootComponent__RefreshTab(this, v10);
  FriendRootComponent__RefreshInfo(this, v11);
  MainMenuBar__setMenuActive(1, 0, 0);
  SceneRootComponent__beginStartUp_41381708((SceneRootComponent_o *)this, 0);
}


void FriendRootComponent__EndFriendRequest2(
        FriendRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  const MethodInfo *v5; // x3
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  struct FriendOperationItemListViewManager_o *v7; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v8; // x21
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x2

  if ( (byte_4C3262E & 1) == 0 )
  {
    sub_1C32C20(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_1C32C20(&Method_FriendRootComponent_OnSelectFriendItem__);
    byte_4C3262E = 1;
  }
  FriendRootComponent__RefreshInfo(this, (const MethodInfo *)result);
  classButtonControl = this->fields.classButtonControl;
  if ( !classButtonControl
    || (operationItemListViewManager = this->fields.operationItemListViewManager) == 0
    || (FriendOperationItemListViewManager__CreateList(
          operationItemListViewManager,
          3,
          classButtonControl->fields.currentCursor,
          v5),
        v7 = this->fields.operationItemListViewManager,
        v8 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1C32E6C(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
        FriendOperationItemListViewManager_CallbackFunc___ctor(
          v8,
          (Il2CppObject *)this,
          (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
          v9),
        !v7) )
  {
    sub_1C32E7C(operationItemListViewManager);
  }
  v7->fields.callbackFunc = v8;
  sub_1C32BC4(&v7->fields.callbackFunc, v8);
  FriendOperationItemListViewManager__SetMode_32678244(v7, 2, v10);
  this->fields.state = 4;
}


void FriendRootComponent__EndLoadOutGameAtlas(FriendRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C325D6 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C325D6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C32E7C(0);
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, (SceneRootComponent_o *)this, 0);
}


void FriendRootComponent__EndMaxFollowWarningOfferConfirm(
        FriendRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_4C32626 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_8641/*"MENU_CANCEL"*/);
    byte_4C32626 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1C32E7C(0);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_8641/*"MENU_CANCEL"*/, 0);
}


void FriendRootComponent__EndMaxFriendWarning(FriendRootComponent_o *this, bool isDecide, const MethodInfo *method)
{
  FriendWarningDialog_o *friendWarningDialog; // x0
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v6; // x21
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x2

  if ( (byte_4C3261A & 1) == 0 )
  {
    sub_1C32C20(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_1C32C20(&Method_FriendRootComponent_OnSelectFriendItem__);
    byte_4C3261A = 1;
  }
  friendWarningDialog = this->fields.friendWarningDialog;
  if ( !friendWarningDialog
    || (FriendWarningDialog__Close(friendWarningDialog, 0),
        operationItemListViewManager = this->fields.operationItemListViewManager,
        v6 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1C32E6C(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
        FriendOperationItemListViewManager_CallbackFunc___ctor(
          v6,
          (Il2CppObject *)this,
          (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
          v7),
        !operationItemListViewManager) )
  {
    sub_1C32E7C(friendWarningDialog);
  }
  operationItemListViewManager->fields.callbackFunc = v6;
  sub_1C32BC4(&operationItemListViewManager->fields.callbackFunc, v6);
  FriendOperationItemListViewManager__SetMode_32678244(operationItemListViewManager, 2, v8);
}


void FriendRootComponent__EndMaxFriendWarningOfferConfirm(
        FriendRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_4C3261B & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_8641/*"MENU_CANCEL"*/);
    byte_4C3261B = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1C32E7C(0);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_8641/*"MENU_CANCEL"*/, 0);
}


void FriendRootComponent__EndNoSearchWarning(FriendRootComponent_o *this, bool isDecide, const MethodInfo *method)
{
  FriendWarningDialog_o *friendWarningDialog; // x0
  FriendSearchMenu_o *friendSearchMenu; // x20
  FriendSearchMenu_CallbackFunc_o *v6; // x21

  if ( (byte_4C32608 & 1) == 0 )
  {
    sub_1C32C20(&FriendSearchMenu_CallbackFunc_TypeInfo);
    sub_1C32C20(&Method_FriendRootComponent_OnSelectSearchFriend__);
    sub_1C32C20(&StringLiteral_11081/*"REQUEST_NG"*/);
    byte_4C32608 = 1;
  }
  friendWarningDialog = this->fields.friendWarningDialog;
  if ( !friendWarningDialog
    || (FriendWarningDialog__Close(friendWarningDialog, 0),
        this->fields.state = 23,
        friendSearchMenu = this->fields.friendSearchMenu,
        v6 = (FriendSearchMenu_CallbackFunc_o *)sub_1C32E6C(FriendSearchMenu_CallbackFunc_TypeInfo),
        FriendSearchMenu_CallbackFunc___ctor(
          v6,
          (Il2CppObject *)this,
          Method_FriendRootComponent_OnSelectSearchFriend__,
          0),
        !friendSearchMenu)
    || (FriendSearchMenu__Open(friendSearchMenu, v6, 0, 0),
        (friendWarningDialog = (FriendWarningDialog_o *)this->fields.myFSM) == 0) )
  {
    sub_1C32E7C(friendWarningDialog);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)friendWarningDialog, (System_String_o *)StringLiteral_11081/*"REQUEST_NG"*/, 0);
}


void FriendRootComponent__EndRequestFollowAssign(
        FriendRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *myFSM; // x0
  System_Collections_Generic_Dictionary_object__object__o *v6; // x20
  System_String_o *v7; // x20
  __int64 *v8; // x8
  Il2CppObject *Instance; // x21
  NotificationDialog_ClickDelegate_o *v10; // x22

  if ( (byte_4C32629 & 1) == 0 )
  {
    sub_1C32C20(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C32C20(&Method_FriendRootComponent_OnEndRequestDialog__);
    sub_1C32C20(&JsonManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&StringLiteral_11083/*"REQUEST_OK"*/);
    sub_1C32C20(&StringLiteral_11081/*"REQUEST_NG"*/);
    sub_1C32C20(&StringLiteral_22212/*"ng"*/);
    sub_1C32C20(&StringLiteral_21536/*"message"*/);
    byte_4C32629 = 1;
  }
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_22212/*"ng"*/, 0) )
  {
    myFSM = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.myFSM;
    if ( myFSM )
    {
      v8 = &StringLiteral_11081/*"REQUEST_NG"*/;
      goto LABEL_14;
    }
LABEL_17:
    sub_1C32E7C(myFSM);
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  myFSM = (System_Collections_Generic_Dictionary_object__object__o *)JsonManager__getDictionary(result, 0);
  if ( !myFSM )
    goto LABEL_17;
  v6 = myFSM;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          myFSM,
          (Il2CppObject *)StringLiteral_21536/*"message"*/,
          (const MethodInfo_3458FBC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_10;
  myFSM = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                       v6,
                                                                       (Il2CppObject *)StringLiteral_21536/*"message"*/,
                                                                       (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !myFSM )
    goto LABEL_17;
  v7 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, const MethodInfo *))myFSM->klass->vtable._3_ToString.methodPtr)(
                            myFSM,
                            myFSM->klass->vtable._3_ToString.method);
  if ( System_String__IsNullOrEmpty(v7, 0) )
  {
LABEL_10:
    myFSM = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.myFSM;
    if ( myFSM )
    {
      v8 = &StringLiteral_11083/*"REQUEST_OK"*/;
LABEL_14:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myFSM, (System_String_o *)*v8, 0);
      return;
    }
    goto LABEL_17;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (NotificationDialog_ClickDelegate_o *)sub_1C32E6C(NotificationDialog_ClickDelegate_TypeInfo);
  NotificationDialog_ClickDelegate___ctor(v10, (Il2CppObject *)this, Method_FriendRootComponent_OnEndRequestDialog__, 0);
  if ( !Instance )
    goto LABEL_17;
  CommonUI__OpenNotificationDialog_31193120(
    (CommonUI_o *)Instance,
    0,
    v7,
    v10,
    -1,
    0,
    0,
    0,
    0,
    1,
    0,
    0,
    0,
    0,
    0,
    1,
    0,
    0,
    0,
    0);
}


void FriendRootComponent__EndRequestFollowRemove(
        FriendRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *myFSM; // x0
  System_Collections_Generic_Dictionary_object__object__o *v6; // x20
  System_String_o *v7; // x20
  __int64 *v8; // x8
  Il2CppObject *Instance; // x21
  NotificationDialog_ClickDelegate_o *v10; // x22

  if ( (byte_4C32632 & 1) == 0 )
  {
    sub_1C32C20(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C32C20(&Method_FriendRootComponent_OnEndRequestDialog__);
    sub_1C32C20(&JsonManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&StringLiteral_11083/*"REQUEST_OK"*/);
    sub_1C32C20(&StringLiteral_11081/*"REQUEST_NG"*/);
    sub_1C32C20(&StringLiteral_22212/*"ng"*/);
    sub_1C32C20(&StringLiteral_21536/*"message"*/);
    byte_4C32632 = 1;
  }
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_22212/*"ng"*/, 0) )
  {
    myFSM = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.myFSM;
    if ( myFSM )
    {
      v8 = &StringLiteral_11081/*"REQUEST_NG"*/;
      goto LABEL_14;
    }
LABEL_17:
    sub_1C32E7C(myFSM);
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  myFSM = (System_Collections_Generic_Dictionary_object__object__o *)JsonManager__getDictionary(result, 0);
  if ( !myFSM )
    goto LABEL_17;
  v6 = myFSM;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          myFSM,
          (Il2CppObject *)StringLiteral_21536/*"message"*/,
          (const MethodInfo_3458FBC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_10;
  myFSM = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                       v6,
                                                                       (Il2CppObject *)StringLiteral_21536/*"message"*/,
                                                                       (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !myFSM )
    goto LABEL_17;
  v7 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, const MethodInfo *))myFSM->klass->vtable._3_ToString.methodPtr)(
                            myFSM,
                            myFSM->klass->vtable._3_ToString.method);
  if ( System_String__IsNullOrEmpty(v7, 0) )
  {
LABEL_10:
    myFSM = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.myFSM;
    if ( myFSM )
    {
      v8 = &StringLiteral_11083/*"REQUEST_OK"*/;
LABEL_14:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myFSM, (System_String_o *)*v8, 0);
      return;
    }
    goto LABEL_17;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (NotificationDialog_ClickDelegate_o *)sub_1C32E6C(NotificationDialog_ClickDelegate_TypeInfo);
  NotificationDialog_ClickDelegate___ctor(v10, (Il2CppObject *)this, Method_FriendRootComponent_OnEndRequestDialog__, 0);
  if ( !Instance )
    goto LABEL_17;
  CommonUI__OpenNotificationDialog_31193120(
    (CommonUI_o *)Instance,
    0,
    v7,
    v10,
    -1,
    0,
    0,
    0,
    0,
    1,
    0,
    0,
    0,
    0,
    0,
    1,
    0,
    0,
    0,
    0);
}


void FriendRootComponent__EndRequestFriend(
        FriendRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *myFSM; // x0
  System_Collections_Generic_Dictionary_object__object__o *v6; // x20
  System_String_o *v7; // x20
  __int64 *v8; // x8
  Il2CppObject *Instance; // x21
  NotificationDialog_ClickDelegate_o *v10; // x22

  if ( (byte_4C32603 & 1) == 0 )
  {
    sub_1C32C20(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C32C20(&Method_FriendRootComponent_OnEndRequestDialog__);
    sub_1C32C20(&JsonManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&StringLiteral_11083/*"REQUEST_OK"*/);
    sub_1C32C20(&StringLiteral_11081/*"REQUEST_NG"*/);
    sub_1C32C20(&StringLiteral_22212/*"ng"*/);
    sub_1C32C20(&StringLiteral_21536/*"message"*/);
    byte_4C32603 = 1;
  }
  MainMenuBar__UpdateNoticeNumber(0);
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_22212/*"ng"*/, 0) )
  {
    myFSM = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.myFSM;
    if ( myFSM )
    {
      v8 = &StringLiteral_11081/*"REQUEST_NG"*/;
      goto LABEL_14;
    }
LABEL_17:
    sub_1C32E7C(myFSM);
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  myFSM = (System_Collections_Generic_Dictionary_object__object__o *)JsonManager__getDictionary(result, 0);
  if ( !myFSM )
    goto LABEL_17;
  v6 = myFSM;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          myFSM,
          (Il2CppObject *)StringLiteral_21536/*"message"*/,
          (const MethodInfo_3458FBC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_10;
  myFSM = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                       v6,
                                                                       (Il2CppObject *)StringLiteral_21536/*"message"*/,
                                                                       (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !myFSM )
    goto LABEL_17;
  v7 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, const MethodInfo *))myFSM->klass->vtable._3_ToString.methodPtr)(
                            myFSM,
                            myFSM->klass->vtable._3_ToString.method);
  if ( System_String__IsNullOrEmpty(v7, 0) )
  {
LABEL_10:
    myFSM = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.myFSM;
    if ( myFSM )
    {
      v8 = &StringLiteral_11083/*"REQUEST_OK"*/;
LABEL_14:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myFSM, (System_String_o *)*v8, 0);
      return;
    }
    goto LABEL_17;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (NotificationDialog_ClickDelegate_o *)sub_1C32E6C(NotificationDialog_ClickDelegate_TypeInfo);
  NotificationDialog_ClickDelegate___ctor(v10, (Il2CppObject *)this, Method_FriendRootComponent_OnEndRequestDialog__, 0);
  if ( !Instance )
    goto LABEL_17;
  CommonUI__OpenNotificationDialog_31193120(
    (CommonUI_o *)Instance,
    0,
    v7,
    v10,
    -1,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    1,
    0,
    0,
    0,
    0);
}


void FriendRootComponent__EndRequestFriendProfile(
        FriendRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v6; // x8
  struct OtherUserGameEntity_o *v7; // x1
  const MethodInfo *v8; // x1
  __int64 *v9; // x8
  const MethodInfo *v10; // x1

  if ( (byte_4C32606 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_OtherUserGameMaster___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&StringLiteral_11083/*"REQUEST_OK"*/);
    sub_1C32C20(&StringLiteral_22379/*"ok"*/);
    sub_1C32C20(&StringLiteral_11081/*"REQUEST_NG"*/);
    byte_4C32606 = 1;
  }
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_22379/*"ok"*/, 0) )
    goto LABEL_11;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_OtherUserGameMaster___);
  if ( !Instance )
    goto LABEL_14;
  Instance = OtherUserGameMaster__GetFriendCodeList((OtherUserGameMaster_o *)Instance, this->fields.selectFriendCode, 0);
  if ( !Instance )
    goto LABEL_14;
  v6 = *((_QWORD *)Instance + 3);
  if ( !v6 )
  {
LABEL_11:
    this->fields.selectFriendEntity = 0;
    sub_1C32BC4(&this->fields.selectFriendEntity, 0);
    FriendRootComponent__StartSearchInput(this, v10);
    Instance = this->fields.myFSM;
    if ( Instance )
    {
      v9 = &StringLiteral_11081/*"REQUEST_NG"*/;
      goto LABEL_13;
    }
LABEL_14:
    sub_1C32E7C(Instance);
  }
  if ( !(_DWORD)v6 )
    sub_1C32E84(Instance);
  v7 = (struct OtherUserGameEntity_o *)*((_QWORD *)Instance + 4);
  this->fields.selectFriendEntity = v7;
  sub_1C32BC4(&this->fields.selectFriendEntity, v7);
  FriendRootComponent__ChangeLimitCountBySpoilerProtection(this, v8);
  Instance = this->fields.myFSM;
  if ( !Instance )
    goto LABEL_14;
  v9 = &StringLiteral_11083/*"REQUEST_OK"*/;
LABEL_13:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v9, 0);
}


void FriendRootComponent__EndShowServant(FriendRootComponent_o *this, bool isDecide, const MethodInfo *method)
{
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v5; // x21
  const MethodInfo *v6; // x3
  __int64 v7; // x0
  const MethodInfo *v8; // x2
  Il2CppObject *Instance; // x20
  System_Action_o *v10; // x21

  if ( (byte_4C325ED & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_1C32C20(&Method_FriendRootComponent_EndCloseShowServant__);
    sub_1C32C20(&Method_FriendRootComponent_OnSelectFriendItem__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C325ED = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v5 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1C32E6C(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
    v6);
  if ( !operationItemListViewManager
    || (operationItemListViewManager->fields.callbackFunc = v5,
        sub_1C32BC4(&operationItemListViewManager->fields.callbackFunc, v5),
        FriendOperationItemListViewManager__SetMode_32678244(operationItemListViewManager, 5, v8),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v10 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo),
        System_Action___ctor(v10, (Il2CppObject *)this, Method_FriendRootComponent_EndCloseShowServant__, 0),
        !Instance) )
  {
    sub_1C32E7C(v7);
  }
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v10, 0);
}


void FriendRootComponent__EndShowServantEquip(FriendRootComponent_o *this, bool isDecide, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0

  if ( (byte_4C32617 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_FriendRootComponent_EndCloseShowServantEquip__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C32617 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_FriendRootComponent_EndCloseShowServantEquip__, 0);
  if ( !Instance )
    sub_1C32E7C(v6);
  CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)Instance, v5, 0);
}


void FriendRootComponent__FriendLockRequst(
        FriendRootComponent_o *this,
        System_Action_string__o *onFinishedRequest,
        const MethodInfo *method)
{
  __int64 v5; // x20
  ListViewManager_o *operationItemListViewManager; // x0
  const MethodInfo *v7; // x1
  System_Collections_Generic_List_long__o *v8; // x21
  System_Collections_Generic_List_long__o *v9; // x22
  System_Collections_Generic_List_long__o *v10; // x23
  System_Collections_Generic_List_long__o *v11; // x24
  int32_t ItemSum; // w0
  const MethodInfo *v13; // x2
  int32_t v14; // w25
  int dragParentObject; // w8
  struct System_Collections_Generic_List_UIDragDropListViewSurface__o *dropList; // x8
  int64_t items; // x1
  _BOOL4 v18; // w8
  struct System_Int64_array *v19; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x8
  struct System_Collections_Generic_List_UIDragDropListViewSurface__o *v23; // x8
  _BOOL4 v24; // w8
  struct System_Int64_array *v25; // x8
  _QWORD *v26; // x9
  __int64 v27; // x10
  struct System_Int64_array *v28; // x8
  _QWORD *v29; // x9
  __int64 v30; // x10
  struct System_Int64_array *v31; // x8
  _QWORD *v32; // x9
  __int64 v33; // x10
  __int64 v34; // x8
  System_Collections_Generic_List_long__o *v35; // x0
  NetworkManager_ResultCallbackFunc_o *v36; // x19
  FirendLockSyncRequest_o *v37; // x19
  System_Int64_array *v38; // x20
  System_Int64_array *v39; // x21
  System_Int64_array *v40; // x22

  if ( (byte_4C32614 & 1) == 0 )
  {
    sub_1C32C20(&Method_ActionExtensions_Call_string___);
    sub_1C32C20(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C32C20(&Method_NetworkManager_getRequest_FirendLockSyncRequest___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C32C20(&Method_FriendRootComponent___c__DisplayClass113_0__FriendLockRequst_b__0__);
    sub_1C32C20(&FriendRootComponent___c__DisplayClass113_0_TypeInfo);
    sub_1C32C20(&StringLiteral_22379/*"ok"*/);
    byte_4C32614 = 1;
  }
  v5 = sub_1C32E6C(FriendRootComponent___c__DisplayClass113_0_TypeInfo);
  FriendRootComponent___c__DisplayClass113_0___ctor((FriendRootComponent___c__DisplayClass113_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_55;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C32BC4(v5 + 16, this);
  *(_QWORD *)(v5 + 32) = onFinishedRequest;
  sub_1C32BC4(v5 + 32, onFinishedRequest);
  operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    goto LABEL_55;
  if ( FriendOperationItemListViewManager__get_IsExistSwapLockUser(
         (FriendOperationItemListViewManager_o *)operationItemListViewManager,
         v7) )
  {
    v8 = (System_Collections_Generic_List_long__o *)sub_1C32E6C(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v8,
      (const MethodInfo_377FF9C *)Method_System_Collections_Generic_List_long___ctor__);
    v9 = (System_Collections_Generic_List_long__o *)sub_1C32E6C(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v9,
      (const MethodInfo_377FF9C *)Method_System_Collections_Generic_List_long___ctor__);
    v10 = (System_Collections_Generic_List_long__o *)sub_1C32E6C(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v10,
      (const MethodInfo_377FF9C *)Method_System_Collections_Generic_List_long___ctor__);
    v11 = (System_Collections_Generic_List_long__o *)sub_1C32E6C(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v11,
      (const MethodInfo_377FF9C *)Method_System_Collections_Generic_List_long___ctor__);
    operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
    if ( operationItemListViewManager )
    {
      ItemSum = ListViewManager__get_ItemSum(operationItemListViewManager, 0);
      *(_DWORD *)(v5 + 24) = ItemSum;
      if ( ItemSum >= 1 )
      {
        v14 = 0;
        while ( 1 )
        {
          operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
          if ( !operationItemListViewManager )
            goto LABEL_55;
          operationItemListViewManager = (ListViewManager_o *)FriendOperationItemListViewManager__GetItem(
                                                                (FriendOperationItemListViewManager_o *)operationItemListViewManager,
                                                                v14,
                                                                v13);
          if ( !operationItemListViewManager )
            goto LABEL_55;
          dragParentObject = (int)operationItemListViewManager->fields.dragParentObject;
          if ( dragParentObject == 9 )
            break;
          if ( dragParentObject == 3 )
          {
            dropList = operationItemListViewManager->fields.dropList;
            if ( !dropList )
              goto LABEL_55;
            items = (int64_t)dropList->fields._items;
            if ( BYTE5(operationItemListViewManager->fields.itemList) )
              v18 = BYTE4(operationItemListViewManager->fields.itemList) == 0;
            else
              v18 = BYTE4(operationItemListViewManager->fields.itemList) != 0;
            if ( v18 )
            {
              if ( !v8 )
                goto LABEL_55;
              v19 = v8->fields._items;
              v20 = Method_System_Collections_Generic_List_long__Add__;
              ++v8->fields._version;
              if ( !v19 )
                goto LABEL_55;
              size = v8->fields._size;
              if ( (unsigned int)size >= LODWORD(v19->max_length) )
              {
                v34 = v20[4];
                v35 = v8;
LABEL_44:
                System_Collections_Generic_List_long___AddWithResize(
                  v35,
                  items,
                  *(const MethodInfo_37807F0 **)(*(_QWORD *)(v34 + 192) + 112LL));
                goto LABEL_45;
              }
              v22 = &v19->obj.klass + size;
              v8->fields._size = size + 1;
            }
            else
            {
              if ( !v9 )
                goto LABEL_55;
              v28 = v9->fields._items;
              v29 = Method_System_Collections_Generic_List_long__Add__;
              ++v9->fields._version;
              if ( !v28 )
                goto LABEL_55;
              v30 = v9->fields._size;
              if ( (unsigned int)v30 >= LODWORD(v28->max_length) )
              {
                v34 = v29[4];
                v35 = v9;
                goto LABEL_44;
              }
              v22 = &v28->obj.klass + v30;
              v9->fields._size = v30 + 1;
            }
LABEL_39:
            v22[4] = (Il2CppClass *)items;
          }
LABEL_45:
          if ( ++v14 >= *(_DWORD *)(v5 + 24) )
            goto LABEL_46;
        }
        v23 = operationItemListViewManager->fields.dropList;
        if ( !v23 )
          goto LABEL_55;
        items = (int64_t)v23->fields._items;
        if ( BYTE5(operationItemListViewManager->fields.itemList) )
          v24 = BYTE4(operationItemListViewManager->fields.itemList) == 0;
        else
          v24 = BYTE4(operationItemListViewManager->fields.itemList) != 0;
        if ( v24 )
        {
          if ( !v10 )
            goto LABEL_55;
          v25 = v10->fields._items;
          v26 = Method_System_Collections_Generic_List_long__Add__;
          ++v10->fields._version;
          if ( !v25 )
            goto LABEL_55;
          v27 = v10->fields._size;
          if ( (unsigned int)v27 >= LODWORD(v25->max_length) )
          {
            v34 = v26[4];
            v35 = v10;
            goto LABEL_44;
          }
          v22 = &v25->obj.klass + v27;
          v10->fields._size = v27 + 1;
        }
        else
        {
          if ( !v11 )
            goto LABEL_55;
          v31 = v11->fields._items;
          v32 = Method_System_Collections_Generic_List_long__Add__;
          ++v11->fields._version;
          if ( !v31 )
            goto LABEL_55;
          v33 = v11->fields._size;
          if ( (unsigned int)v33 >= LODWORD(v31->max_length) )
          {
            v34 = v32[4];
            v35 = v11;
            goto LABEL_44;
          }
          v22 = &v31->obj.klass + v33;
          v11->fields._size = v33 + 1;
        }
        goto LABEL_39;
      }
LABEL_46:
      v36 = (NetworkManager_ResultCallbackFunc_o *)sub_1C32E6C(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v36,
        (Il2CppObject *)v5,
        Method_FriendRootComponent___c__DisplayClass113_0__FriendLockRequst_b__0__,
        0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      operationItemListViewManager = (ListViewManager_o *)NetworkManager__getRequest_object_(
                                                            v36,
                                                            (const MethodInfo_3168488 *)Method_NetworkManager_getRequest_FirendLockSyncRequest___);
      if ( v8 )
      {
        v37 = (FirendLockSyncRequest_o *)operationItemListViewManager;
        operationItemListViewManager = (ListViewManager_o *)System_Collections_Generic_List_long___ToArray(
                                                              v8,
                                                              (const MethodInfo_37822A8 *)Method_System_Collections_Generic_List_long__ToArray__);
        if ( v9 )
        {
          v38 = (System_Int64_array *)operationItemListViewManager;
          operationItemListViewManager = (ListViewManager_o *)System_Collections_Generic_List_long___ToArray(
                                                                v9,
                                                                (const MethodInfo_37822A8 *)Method_System_Collections_Generic_List_long__ToArray__);
          if ( v10 )
          {
            v39 = (System_Int64_array *)operationItemListViewManager;
            operationItemListViewManager = (ListViewManager_o *)System_Collections_Generic_List_long___ToArray(
                                                                  v10,
                                                                  (const MethodInfo_37822A8 *)Method_System_Collections_Generic_List_long__ToArray__);
            if ( v11 )
            {
              v40 = (System_Int64_array *)operationItemListViewManager;
              operationItemListViewManager = (ListViewManager_o *)System_Collections_Generic_List_long___ToArray(
                                                                    v11,
                                                                    (const MethodInfo_37822A8 *)Method_System_Collections_Generic_List_long__ToArray__);
              if ( v37 )
              {
                FirendLockSyncRequest__beginRequest(
                  v37,
                  v38,
                  v39,
                  v40,
                  (System_Int64_array *)operationItemListViewManager,
                  0);
                return;
              }
            }
          }
        }
      }
    }
LABEL_55:
    sub_1C32E7C(operationItemListViewManager);
  }
  ActionExtensions__Call_object_(
    *(System_Action_T__o **)(v5 + 32),
    (Il2CppObject *)StringLiteral_22379/*"ok"*/,
    (const MethodInfo_3029CE0 *)Method_ActionExtensions_Call_string___);
}


UnityEngine_Vector3_o FriendRootComponent__GetDisplayPositionModeKindButtons(
        FriendRootComponent_o *this,
        const MethodInfo *method)
{
  FriendRootComponent_o *v2; // x19
  struct UISprite_o *modeEditLockSprite; // x8
  int mWidth; // w20
  float y; // s8
  float z; // s9
  float v7; // s10
  float v8; // s1
  float v9; // s2
  float v10; // s0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v12; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4C3260F & 1) == 0 )
  {
    this = (FriendRootComponent_o *)sub_1C32C20(&FSUtility_TypeInfo);
    byte_4C3260F = 1;
  }
  modeEditLockSprite = v2->fields.modeEditLockSprite;
  if ( !modeEditLockSprite
    || (this = (FriendRootComponent_o *)v2->fields.modeButtonParent) == 0
    || (mWidth = modeEditLockSprite->fields.mWidth,
        (this = (FriendRootComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0)) == 0)
    || (localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0),
        (this = (FriendRootComponent_o *)v2->fields.modeButtonParent) == 0)
    || (y = localPosition.fields.y,
        (this = (FriendRootComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0)) == 0) )
  {
    sub_1C32E7C(this);
  }
  v12 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  z = v12.fields.z;
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  v7 = (float)mWidth;
  if ( !FSUtility__IsUnderVista(0) )
  {
    if ( !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    v7 = v7 - FSUtility__GetOffsetX(74.0, 1, 0);
  }
  v8 = y;
  v9 = z;
  v10 = v7;
  result.fields.z = v9;
  result.fields.y = v8;
  result.fields.x = v10;
  return result;
}


UnityEngine_Vector3_o FriendRootComponent__GetHidePositionModeKindButtons(
        FriendRootComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *modeButtonParent; // x0
  float y; // s8
  float v5; // s0
  float v6; // s1
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  modeButtonParent = this->fields.modeButtonParent;
  if ( !modeButtonParent
    || (modeButtonParent = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(modeButtonParent, 0)) == 0
    || (localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)modeButtonParent, 0),
        (modeButtonParent = this->fields.modeButtonParent) == 0)
    || (y = localPosition.fields.y,
        (modeButtonParent = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(modeButtonParent, 0)) == 0) )
  {
    sub_1C32E7C(modeButtonParent);
  }
  result = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)modeButtonParent, 0);
  v5 = -200.0;
  v6 = y;
  result.fields.y = v6;
  result.fields.x = v5;
  return result;
}


void FriendRootComponent__Init(FriendRootComponent_o *this, const MethodInfo *method)
{
  if ( !this->fields.state )
    this->fields.state = 1;
}


void FriendRootComponent__InitModeKindButtons(FriendRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *modeButtonParent; // x0
  UnityEngine_Transform_o *transform; // x19
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1
  UnityEngine_Vector3_o DisplayPositionModeKindButtons; // 0:s0.4,4:s1.4,8:s2.4

  modeButtonParent = this->fields.modeButtonParent;
  if ( !modeButtonParent
    || ((transform = UnityEngine_GameObject__get_transform(modeButtonParent, 0),
         !FriendRootComponent__get_tabKind(this, v5))
     || !this->fields.jumpTabKind
      ? (DisplayPositionModeKindButtons = FriendRootComponent__GetDisplayPositionModeKindButtons(this, v6))
      : (DisplayPositionModeKindButtons = FriendRootComponent__GetHidePositionModeKindButtons(this, v6)),
        !transform) )
  {
    sub_1C32E7C(modeButtonParent);
  }
  UnityEngine_Transform__set_localPosition(transform, DisplayPositionModeKindButtons, 0);
}


void FriendRootComponent__OnClickBack(FriendRootComponent_o *this, const MethodInfo *method)
{
  int32_t state; // w8
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  FriendRootComponent_messageRequestCallback_o *v6; // x20
  const MethodInfo *v7; // x2

  if ( (byte_4C3260A & 1) == 0 )
  {
    sub_1C32C20(&Method_FriendRootComponent_OnClickBack__);
    sub_1C32C20(&Method_FriendRootComponent__OnClickBack_b__100_0__);
    sub_1C32C20(&FriendRootComponent_messageRequestCallback_TypeInfo);
    byte_4C3260A = 1;
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
  v4 = Method_FriendRootComponent_OnClickBack__;
  if ( (*((_BYTE *)Method_FriendRootComponent_OnClickBack__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C32C38(Method_FriendRootComponent_OnClickBack__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C32C04(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0, 0);
  v6 = (FriendRootComponent_messageRequestCallback_o *)sub_1C32E6C(FriendRootComponent_messageRequestCallback_TypeInfo);
  FriendRootComponent_messageRequestCallback___ctor(
    v6,
    (Il2CppObject *)this,
    Method_FriendRootComponent__OnClickBack_b__100_0__,
    0);
  FriendRootComponent__messageDispChangeRequest(this, v6, v7);
}


void FriendRootComponent__OnClickHelp(FriendRootComponent_o *this, const MethodInfo *method)
{
  _QWORD *v2; // x0
  System_Reflection_MethodBase_o *v3; // x0

  if ( (byte_4C32633 & 1) == 0 )
  {
    sub_1C32C20(&Method_FriendRootComponent_OnClickHelp__);
    byte_4C32633 = 1;
  }
  v2 = Method_FriendRootComponent_OnClickHelp__;
  if ( (*((_BYTE *)Method_FriendRootComponent_OnClickHelp__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_1C32C38(Method_FriendRootComponent_OnClickHelp__);
  v3 = (System_Reflection_MethodBase_o *)sub_1C32C04(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 0, 0, 0);
  EventTutorialMaster__ShowTutorialWithoutCheck(-1, 49, 0, 0, 0);
}


void FriendRootComponent__OnClickModeEditLock(FriendRootComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4C3260D & 1) == 0 )
  {
    sub_1C32C20(&Method_FriendRootComponent_OnClickModeEditLock__);
    byte_4C3260D = 1;
  }
  if ( this->fields.currentModeKind != 1 )
  {
    v3 = Method_FriendRootComponent_OnClickModeEditLock__;
    if ( (*((_BYTE *)Method_FriendRootComponent_OnClickModeEditLock__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_FriendRootComponent_OnClickModeEditLock__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    this->fields.currentModeKind = 1;
    FriendRootComponent__RefreshInfo(this, v5);
  }
}


void FriendRootComponent__OnClickModeUserDetail(FriendRootComponent_o *this, const MethodInfo *method)
{
  System_Action_object__o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4C3260C & 1) == 0 )
  {
    sub_1C32C20(&System_Action_string__TypeInfo);
    sub_1C32C20(&Method_FriendRootComponent__OnClickModeUserDetail_b__102_0__);
    byte_4C3260C = 1;
  }
  if ( this->fields.currentModeKind )
  {
    v3 = (System_Action_object__o *)sub_1C32E6C(System_Action_string__TypeInfo);
    System_Action_object____ctor(
      v3,
      (Il2CppObject *)this,
      (intptr_t)Method_FriendRootComponent__OnClickModeUserDetail_b__102_0__,
      0);
    FriendRootComponent__FriendLockRequst(this, (System_Action_string__o *)v3, v4);
  }
}


void FriendRootComponent__OnClickTabFriend(FriendRootComponent_o *this, const MethodInfo *method)
{
  System_Action_object__o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4C32610 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_string__TypeInfo);
    sub_1C32C20(&Method_FriendRootComponent__OnClickTabFriend_b__109_0__);
    byte_4C32610 = 1;
  }
  v3 = (System_Action_object__o *)sub_1C32E6C(System_Action_string__TypeInfo);
  System_Action_object____ctor(
    v3,
    (Il2CppObject *)this,
    (intptr_t)Method_FriendRootComponent__OnClickTabFriend_b__109_0__,
    0);
  FriendRootComponent__FriendLockRequst(this, (System_Action_string__o *)v3, v4);
}


void FriendRootComponent__OnClickTabOffered(FriendRootComponent_o *this, const MethodInfo *method)
{
  FriendRootComponent_messageRequestCallback_o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4C32611 & 1) == 0 )
  {
    sub_1C32C20(&Method_FriendRootComponent__OnClickTabOffered_b__110_0__);
    sub_1C32C20(&FriendRootComponent_messageRequestCallback_TypeInfo);
    byte_4C32611 = 1;
  }
  v3 = (FriendRootComponent_messageRequestCallback_o *)sub_1C32E6C(FriendRootComponent_messageRequestCallback_TypeInfo);
  FriendRootComponent_messageRequestCallback___ctor(
    v3,
    (Il2CppObject *)this,
    Method_FriendRootComponent__OnClickTabOffered_b__110_0__,
    0);
  FriendRootComponent__messageDispChangeRequest(this, v3, v4);
}


void FriendRootComponent__OnClickTabSearch(FriendRootComponent_o *this, const MethodInfo *method)
{
  FriendRootComponent_messageRequestCallback_o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4C32612 & 1) == 0 )
  {
    sub_1C32C20(&Method_FriendRootComponent__OnClickTabSearch_b__111_0__);
    sub_1C32C20(&FriendRootComponent_messageRequestCallback_TypeInfo);
    byte_4C32612 = 1;
  }
  v3 = (FriendRootComponent_messageRequestCallback_o *)sub_1C32E6C(FriendRootComponent_messageRequestCallback_TypeInfo);
  FriendRootComponent_messageRequestCallback___ctor(
    v3,
    (Il2CppObject *)this,
    Method_FriendRootComponent__OnClickTabSearch_b__111_0__,
    0);
  FriendRootComponent__messageDispChangeRequest(this, v3, v4);
}


void FriendRootComponent__OnEndRequestDialog(FriendRootComponent_o *this, bool isDecide, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_4C32604 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&StringLiteral_11083/*"REQUEST_OK"*/);
    byte_4C32604 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance || (CommonUI__CloseNotificationDialog(Instance, 0), (Instance = (CommonUI_o *)this->fields.myFSM) == 0) )
    sub_1C32E7C(Instance);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_11083/*"REQUEST_OK"*/, 0);
}


void FriendRootComponent__OnMoveEnd(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  FriendRootComponent_o *v3; // x19
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  int32_t jumpTabKind; // w22
  int32_t v6; // w1
  FriendOperationItemListViewManager_o *v7; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v8; // x21
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x2
  FriendOperationItemListViewManager_o *v11; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v12; // x21
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x1
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  FriendSearchMenu_o *friendSearchMenu; // x20
  FriendSearchMenu_CallbackFunc_o *v18; // x21
  const MethodInfo *v19; // x1
  FriendOperationItemListViewManager_o *v20; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v21; // x21
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x2
  const MethodInfo *v24; // x1
  struct ClassButtonControlComponent_o *v25; // x8
  FriendSearchMenu_o *v26; // x20
  FriendSearchMenu_CallbackFunc_o *v27; // x21

  v3 = this;
  if ( (byte_4C32609 & 1) == 0 )
  {
    sub_1C32C20(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_1C32C20(&FriendSearchMenu_CallbackFunc_TypeInfo);
    sub_1C32C20(&Method_FriendRootComponent_OnSelectFriendItem__);
    sub_1C32C20(&Method_FriendRootComponent_OnSelectSearchFriend__);
    this = (FriendRootComponent_o *)sub_1C32C20(&StringLiteral_5432/*"END_ACTION"*/);
    byte_4C32609 = 1;
  }
  switch ( v3->fields.state )
  {
    case 2:
    case 3:
      jumpTabKind = v3->fields.jumpTabKind;
      v3->fields.state = 4;
      if ( jumpTabKind != 3 )
        goto LABEL_15;
      v6 = 0;
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
                                                                               0);
      if ( !operationItemListViewManager )
        goto LABEL_39;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)operationItemListViewManager, 0, 0);
      goto LABEL_27;
    case 7:
    case 8:
      v3->fields.state = 9;
      v7 = v3->fields.operationItemListViewManager;
      v8 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1C32E6C(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
      FriendOperationItemListViewManager_CallbackFunc___ctor(
        v8,
        (Il2CppObject *)v3,
        (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
        v9);
      if ( !v7 )
        goto LABEL_39;
      v7->fields.callbackFunc = v8;
      sub_1C32BC4(&v7->fields.callbackFunc, v8);
      FriendOperationItemListViewManager__SetMode_32678244(v7, 2, v10);
LABEL_27:
      FriendRootComponent__RefreshInfo(v3, method);
      goto LABEL_28;
    case 0xC:
    case 0xD:
      jumpTabKind = v3->fields.jumpTabKind;
      v3->fields.state = 14;
      if ( jumpTabKind != 3 )
        goto LABEL_15;
      v6 = 1;
LABEL_14:
      FriendRootComponent__set_tabKind(this, v6, v2);
LABEL_15:
      FriendRootComponent__RefreshTab(v3, method);
      v11 = v3->fields.operationItemListViewManager;
      v12 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1C32E6C(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
      FriendOperationItemListViewManager_CallbackFunc___ctor(
        v12,
        (Il2CppObject *)v3,
        (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
        v13);
      if ( !v11 )
        goto LABEL_39;
      v11->fields.callbackFunc = v12;
      sub_1C32BC4(&v11->fields.callbackFunc, v12);
      FriendOperationItemListViewManager__SetMode_32678244(v11, 2, v14);
      classButtonControl = v3->fields.classButtonControl;
      if ( !classButtonControl )
        goto LABEL_39;
      classButtonControl->fields.updateEnable = 1;
      FriendRootComponent__RefreshInfo(v3, v15);
      goto LABEL_18;
    case 0x11:
      v3->fields.state = 18;
      return;
    case 0x12:
      v3->fields.state = 19;
      v20 = v3->fields.operationItemListViewManager;
      v21 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1C32E6C(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
      FriendOperationItemListViewManager_CallbackFunc___ctor(
        v21,
        (Il2CppObject *)v3,
        (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
        v22);
      if ( !v20 )
        goto LABEL_39;
      v20->fields.callbackFunc = v21;
      sub_1C32BC4(&v20->fields.callbackFunc, v21);
      FriendOperationItemListViewManager__SetMode_32678244(v20, 2, v23);
      goto LABEL_28;
    case 0x14:
    case 0x15:
      v3->fields.state = 23;
      friendSearchMenu = v3->fields.friendSearchMenu;
      v18 = (FriendSearchMenu_CallbackFunc_o *)sub_1C32E6C(FriendSearchMenu_CallbackFunc_TypeInfo);
      FriendSearchMenu_CallbackFunc___ctor(
        v18,
        (Il2CppObject *)v3,
        Method_FriendRootComponent_OnSelectSearchFriend__,
        0);
      if ( !friendSearchMenu )
        goto LABEL_39;
      FriendSearchMenu__Open(friendSearchMenu, v18, 0, 0);
      operationItemListViewManager = v3->fields.operationItemListViewManager;
      if ( !operationItemListViewManager )
        goto LABEL_39;
      FriendOperationItemListViewManager__DestroyList(operationItemListViewManager, v19);
      operationItemListViewManager = v3->fields.operationItemListViewManager;
      if ( !operationItemListViewManager )
        goto LABEL_39;
      operationItemListViewManager = (FriendOperationItemListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                               (UnityEngine_Component_o *)operationItemListViewManager,
                                                                               0);
      if ( !operationItemListViewManager )
        goto LABEL_39;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)operationItemListViewManager, 0, 0);
LABEL_28:
      operationItemListViewManager = (FriendOperationItemListViewManager_o *)v3->fields.myFSM;
      if ( !operationItemListViewManager )
        goto LABEL_39;
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)operationItemListViewManager, (System_String_o *)StringLiteral_5432/*"END_ACTION"*/, 0);
      break;
    case 0x16:
      jumpTabKind = v3->fields.jumpTabKind;
      v3->fields.state = 23;
      if ( jumpTabKind == 3 )
        FriendRootComponent__set_tabKind(this, 2, v2);
      FriendRootComponent__RefreshTab(v3, method);
      FriendRootComponent__RefreshInfo(v3, v24);
      v25 = v3->fields.classButtonControl;
      if ( !v25 )
        goto LABEL_39;
      v25->fields.updateEnable = 1;
      v26 = v3->fields.friendSearchMenu;
      v27 = (FriendSearchMenu_CallbackFunc_o *)sub_1C32E6C(FriendSearchMenu_CallbackFunc_TypeInfo);
      FriendSearchMenu_CallbackFunc___ctor(
        v27,
        (Il2CppObject *)v3,
        Method_FriendRootComponent_OnSelectSearchFriend__,
        0);
      if ( !v26 )
        goto LABEL_39;
      FriendSearchMenu__Open(v26, v27, 1, 0);
LABEL_18:
      operationItemListViewManager = (FriendOperationItemListViewManager_o *)v3->fields.myFSM;
      if ( !operationItemListViewManager )
LABEL_39:
        sub_1C32E7C(operationItemListViewManager);
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)operationItemListViewManager, (System_String_o *)StringLiteral_5432/*"END_ACTION"*/, 0);
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


void FriendRootComponent__OnSelectFriendItem(
        FriendRootComponent_o *this,
        int32_t kind,
        int32_t n,
        const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x21
  DataManager_o *Instance; // x0
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x2
  Il2CppObject *MasterData_object; // x22
  const MethodInfo *v12; // x2
  __int64 v13; // x8
  __int64 v14; // x20
  SkillInfo_o *v15; // x22
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0
  System_String_o *v18; // x20
  System_String_o *v19; // x21
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  __int64 v23; // x5
  __int64 v24; // x6
  __int64 v25; // x7
  Il2CppObject *v26; // x0
  System_String_o *v27; // x0
  _QWORD *v28; // x0
  System_Reflection_MethodBase_o *v29; // x0
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v31; // x0
  const MethodInfo *v32; // x3
  void *v33; // x2
  _QWORD *v34; // x0
  System_Reflection_MethodBase_o *v35; // x0
  const MethodInfo *v36; // x2
  FriendOperationItemListViewItem_o *v37; // x22
  Il2CppObject *lockCountObj; // x8
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  const MethodInfo *v40; // x2
  ServantLeaderInfo_o *v41; // x21
  __int64 v42; // x20
  SkillInfo_o *v43; // x26
  Il2CppObject *v44; // x22
  DataManager_o *v45; // x20
  Il2CppObject *Master_object; // x0
  __int64 v47; // x23
  __int64 v48; // x24
  ServantLimitImageMaster_o *v49; // x22
  int32_t v50; // w23
  int32_t ServantImageLimitSealAfter; // w23
  Il2CppObject *v52; // x22
  int32_t v53; // w0
  int32_t limitCount; // w24
  int32_t v55; // w21
  System_String_o *v56; // x21
  System_String_o *v57; // x22
  __int64 v58; // x2
  __int64 v59; // x3
  __int64 v60; // x4
  __int64 v61; // x5
  __int64 v62; // x6
  __int64 v63; // x7
  Il2CppObject *v64; // x0
  System_String_o *v65; // x0
  __int64 v66; // x2
  __int64 v67; // x3
  __int64 v68; // x4
  __int64 v69; // x5
  __int64 v70; // x6
  __int64 v71; // x7
  System_String_o *v72; // x21
  Il2CppObject *v73; // x0
  System_String_o *v74; // x20
  _QWORD *v75; // x0
  System_Reflection_MethodBase_o *v76; // x0
  __int64 *v77; // x8
  _QWORD *v78; // x0
  System_Reflection_MethodBase_o *v79; // x0
  _QWORD *v80; // x0
  System_Reflection_MethodBase_o *v81; // x0
  _QWORD *v82; // x0
  System_Reflection_MethodBase_o *v83; // x0
  _QWORD *v84; // x0
  System_Reflection_MethodBase_o *v85; // x0
  const MethodInfo *v86; // x2
  DataManager_o *v87; // x8
  const MethodInfo *v88; // x2
  _QWORD *v89; // x0
  System_Reflection_MethodBase_o *v90; // x0
  const MethodInfo *v91; // x2
  DataManager_o *v92; // x8
  Il2CppObject *v93; // x9
  ServantLeaderInfo_o *v94; // x0
  const MethodInfo *v95; // x2
  _QWORD *v96; // x0
  System_Reflection_MethodBase_o *v97; // x0
  const MethodInfo *v98; // x2
  const MethodInfo *v99; // x2
  const MethodInfo *v100; // x1
  FriendOperationItemListViewItem_o *v101; // x20
  ServantLeaderInfo_o *ServantLeader; // x0
  const MethodInfo *v103; // x1
  EquipTargetInfo_o *EquipTargetInfo; // x0
  EquipTargetInfo_o *v105; // x21
  __int64 v106; // x22
  __int64 v107; // x23
  _QWORD *v108; // x0
  System_Reflection_MethodBase_o *v109; // x0
  const MethodInfo *v110; // x3
  int32_t v111; // w2
  FriendWarningDialog_o *friendWarningDialog; // x20
  FriendWarningDialog_CallbackFunc_o *v113; // x21
  _QWORD *v114; // x0
  System_Reflection_MethodBase_o *v115; // x0
  struct FriendOperationItemListViewManager_CallbackFunc_o *v116; // x21
  const MethodInfo *v117; // x2
  FriendOperationItemListViewItem_o *Item; // x0
  FriendOperationItemListViewItem_o *v119; // x20
  _QWORD *v120; // x0
  System_Reflection_MethodBase_o *v121; // x0
  const MethodInfo *v122; // x1
  int m_CancellationTokenSource; // [xsp+8h] [xbp-88h] BYREF
  int32_t lv; // [xsp+Ch] [xbp-84h] BYREF
  System_String_o *detail; // [xsp+10h] [xbp-80h] BYREF
  System_String_o *name; // [xsp+18h] [xbp-78h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+20h] [xbp-70h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+28h] [xbp-68h] BYREF
  System_String_o *v129; // [xsp+30h] [xbp-60h] BYREF
  System_String_o *defaultName; // [xsp+38h] [xbp-58h] BYREF
  SkillInfo_array *v131; // [xsp+48h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v132; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v133; // 0:x0.16

  if ( (byte_4C32619 & 1) == 0 )
  {
    sub_1C32C20(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_1C32C20(&FriendWarningDialog_CallbackFunc_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_TblFriendMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C32C20(&Method_FriendRootComponent_EndMaxFriendWarning__);
    sub_1C32C20(&Method_FriendRootComponent_OnSelectFriendItem__);
    sub_1C32C20(&ImageLimitCount_TypeInfo);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&StringLiteral_8655/*"MENU_SELECT_ITEM_ACCEPT"*/);
    sub_1C32C20(&StringLiteral_113/*" "*/);
    sub_1C32C20(&StringLiteral_8661/*"MENU_SELECT_ITEM_REMOVE_FOLLOW"*/);
    sub_1C32C20(&StringLiteral_8656/*"MENU_SELECT_ITEM_CANCEL"*/);
    sub_1C32C20(&StringLiteral_8549/*"MASTER_EQSKILL_LV_TXT"*/);
    sub_1C32C20(&StringLiteral_8658/*"MENU_SELECT_ITEM_OFFER"*/);
    sub_1C32C20(&StringLiteral_2872/*"BATTLE_SKILLCHARGETURN"*/);
    sub_1C32C20(&StringLiteral_8659/*"MENU_SELECT_ITEM_REJECT"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    sub_1C32C20(&StringLiteral_8660/*"MENU_SELECT_ITEM_REMOVE"*/);
    byte_4C32619 = 1;
  }
  v131 = 0;
  v129 = 0;
  defaultName = 0;
  skillInfoList = 0;
  entity = 0;
  detail = 0;
  name = 0;
  this->fields.selectItemNum = n;
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_146;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_TblFriendMaster___);
  switch ( kind )
  {
    case 1:
    case 2:
    case 3:
      v34 = Method_FriendRootComponent_OnSelectFriendItem__;
      if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
        v34 = (_QWORD *)sub_1C32C38(Method_FriendRootComponent_OnSelectFriendItem__);
      v35 = (System_Reflection_MethodBase_o *)sub_1C32C04(v34, v34[4]);
      OverwriteAssetSoundName__PlaySystemSe(v35, 0, 0, 0);
      Instance = (DataManager_o *)this->fields.operationItemListViewManager;
      if ( !Instance )
        goto LABEL_146;
      Instance = (DataManager_o *)FriendOperationItemListViewManager__GetItem(
                                    (FriendOperationItemListViewManager_o *)Instance,
                                    this->fields.selectItemNum,
                                    v36);
      if ( !Instance )
        goto LABEL_146;
      v37 = (FriendOperationItemListViewItem_o *)Instance;
      Instance = (DataManager_o *)Instance->fields.writeMasterDataThread;
      if ( !Instance )
        goto LABEL_146;
      lockCountObj = Instance->fields.lockCountObj;
      if ( !lockCountObj )
        goto LABEL_146;
      if ( !LODWORD(lockCountObj[1].monitor) )
        goto LABEL_147;
      ServantLeaderInfo = OtherUserGameEntity__getServantLeaderInfo(
                            (OtherUserGameEntity_o *)Instance,
                            v37->fields.classPos,
                            0,
                            0,
                            (int32_t)lockCountObj[2].klass,
                            0,
                            0);
      if ( !ServantLeaderInfo )
        goto LABEL_68;
      v41 = ServantLeaderInfo;
      if ( kind == 2 )
        v42 = 1;
      else
        v42 = 2LL * (kind == 3);
      Instance = (DataManager_o *)FriendOperationItemListViewItem__GetSkillInfo(v37, &v131, v40);
      if ( !v131 )
        goto LABEL_146;
      if ( (unsigned int)v42 >= LODWORD(v131->max_length) )
        goto LABEL_147;
      v43 = v131->m_Items[v42];
      if ( !v43 || v43->fields.id < 1 || v43->fields.lv < 1 )
        goto LABEL_68;
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_146;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_SkillMaster___);
      if ( !Instance )
        goto LABEL_146;
      v44 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
              v43->fields.id,
              (const MethodInfo_3396838 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_146;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_SkillLvMaster___);
      if ( !Instance )
        goto LABEL_146;
      Instance = (DataManager_o *)SkillLvMaster__GetEntity(
                                    (SkillLvMaster_o *)Instance,
                                    v43->fields.id,
                                    v43->fields.lv,
                                    0);
      if ( !v44 )
        goto LABEL_146;
      v45 = Instance;
      SkillEntity__getSkillMessageInfo((SkillEntity_o *)v44, &defaultName, &v129, v43->fields.lv, 0);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
      v48 = *(_QWORD *)&v41->fields.svtId.fields.currentCryptoKey;
      v47 = *(_QWORD *)&v41->fields.svtId.fields.fakeValue;
      v49 = (ServantLimitImageMaster_o *)Master_object;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v132.fields.currentCryptoKey = v48;
      *(_QWORD *)&v132.fields.fakeValue = v47;
      v50 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v132, 0);
      Instance = (DataManager_o *)ServantLeaderInfo__getDispLimitCount(v41, 0);
      if ( !v49 )
        goto LABEL_146;
      ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                     v49,
                                     v50,
                                     (int32_t)Instance,
                                     0);
      v52 = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
      v53 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v41->fields.svtId, 0);
      limitCount = v41->fields.limitCount;
      v55 = v53;
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      Instance = (DataManager_o *)ImageLimitCount__GetLimitCountByDispLimit(ServantImageLimitSealAfter, limitCount, 0);
      if ( !v52 )
        goto LABEL_146;
      if ( !ServantLimitAddMaster__TryGetEntity((ServantLimitAddMaster_o *)v52, &entity, v55, (int32_t)Instance, 0) )
        goto LABEL_63;
      Instance = (DataManager_o *)entity;
      if ( !entity )
        goto LABEL_146;
      if ( !ServantLimitAddEntity__HasKeyOverwriteSkillName(entity, 0) )
        goto LABEL_63;
      Instance = (DataManager_o *)entity;
      if ( !entity )
        goto LABEL_146;
      defaultName = ServantLimitAddEntity__GetOverwriteSkillName(entity, v43->fields.id, defaultName, 0);
LABEL_63:
      v56 = defaultName;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v57 = LocalizationManager__Get((System_String_o *)StringLiteral_8549/*"MASTER_EQSKILL_LV_TXT"*/, 0);
      lv = v43->fields.lv;
      v64 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv, v58, v59, v60, v61, v62, v63);
      v65 = System_String__Format(v57, v64, 0);
      defaultName = System_String__Concat_63556792(v56, (System_String_o *)StringLiteral_113/*" "*/, v65, 0);
      Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2872/*"BATTLE_SKILLCHARGETURN"*/, 0);
      if ( !v45 )
        goto LABEL_146;
      v72 = (System_String_o *)Instance;
      m_CancellationTokenSource = (int)v45->fields.m_CancellationTokenSource;
      v73 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &m_CancellationTokenSource, v66, v67, v68, v69, v70, v71);
      v74 = System_String__Format(v72, v73, 0);
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !Instance )
        goto LABEL_146;
      CommonUI__OpenDetailLongInfoDialog((CommonUI_o *)Instance, defaultName, v74, v129, 1, 0, 0);
LABEL_68:
      operationItemListViewManager = this->fields.operationItemListViewManager;
      v31 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1C32E6C(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
      v33 = Method_FriendRootComponent_OnSelectFriendItem__;
      goto LABEL_136;
    case 4:
      v75 = Method_FriendRootComponent_OnSelectFriendItem__;
      if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
        v75 = (_QWORD *)sub_1C32C38(Method_FriendRootComponent_OnSelectFriendItem__);
      v76 = (System_Reflection_MethodBase_o *)sub_1C32C04(v75, v75[4]);
      OverwriteAssetSoundName__PlaySystemSe(v76, 0, 0, 0);
      if ( !MasterData_object )
        goto LABEL_146;
      Instance = (DataManager_o *)TblFriendMaster__GetList((TblFriendMaster_o *)MasterData_object, 3, 0);
      if ( !Instance || !SelfUserGame )
        goto LABEL_146;
      if ( SelfUserGame->fields.friendKeep <= SLODWORD(Instance->fields.m_CancellationTokenSource) )
        goto LABEL_130;
      Instance = (DataManager_o *)this->fields.myFSM;
      if ( !Instance )
        goto LABEL_146;
      v77 = &StringLiteral_8658/*"MENU_SELECT_ITEM_OFFER"*/;
      goto LABEL_139;
    case 5:
      v78 = Method_FriendRootComponent_OnSelectFriendItem__;
      if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
        v78 = (_QWORD *)sub_1C32C38(Method_FriendRootComponent_OnSelectFriendItem__);
      v79 = (System_Reflection_MethodBase_o *)sub_1C32C04(v78, v78[4]);
      OverwriteAssetSoundName__PlaySystemSe(v79, 0, 0, 0);
      if ( !MasterData_object )
        goto LABEL_146;
      Instance = (DataManager_o *)TblFriendMaster__GetList((TblFriendMaster_o *)MasterData_object, 3, 0);
      if ( !Instance || !SelfUserGame )
        goto LABEL_146;
      if ( SelfUserGame->fields.friendKeep <= SLODWORD(Instance->fields.m_CancellationTokenSource) )
      {
LABEL_130:
        friendWarningDialog = this->fields.friendWarningDialog;
        v113 = (FriendWarningDialog_CallbackFunc_o *)sub_1C32E6C(FriendWarningDialog_CallbackFunc_TypeInfo);
        FriendWarningDialog_CallbackFunc___ctor(
          v113,
          (Il2CppObject *)this,
          Method_FriendRootComponent_EndMaxFriendWarning__,
          0);
        if ( friendWarningDialog )
        {
          FriendWarningDialog__Open(friendWarningDialog, 1, v113, 0);
          return;
        }
LABEL_146:
        sub_1C32E7C(Instance);
      }
      Instance = (DataManager_o *)this->fields.myFSM;
      if ( !Instance )
        goto LABEL_146;
      v77 = &StringLiteral_8655/*"MENU_SELECT_ITEM_ACCEPT"*/;
LABEL_139:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v77, 0);
      return;
    case 6:
      v80 = Method_FriendRootComponent_OnSelectFriendItem__;
      if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
        v80 = (_QWORD *)sub_1C32C38(Method_FriendRootComponent_OnSelectFriendItem__);
      v81 = (System_Reflection_MethodBase_o *)sub_1C32C04(v80, v80[4]);
      OverwriteAssetSoundName__PlaySystemSe(v81, 0, 0, 0);
      Instance = (DataManager_o *)this->fields.myFSM;
      if ( !Instance )
        goto LABEL_146;
      v77 = &StringLiteral_8659/*"MENU_SELECT_ITEM_REJECT"*/;
      goto LABEL_139;
    case 7:
      v82 = Method_FriendRootComponent_OnSelectFriendItem__;
      if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
        v82 = (_QWORD *)sub_1C32C38(Method_FriendRootComponent_OnSelectFriendItem__);
      v83 = (System_Reflection_MethodBase_o *)sub_1C32C04(v82, v82[4]);
      OverwriteAssetSoundName__PlaySystemSe(v83, 0, 0, 0);
      Instance = (DataManager_o *)this->fields.myFSM;
      if ( !Instance )
        goto LABEL_146;
      v77 = &StringLiteral_8656/*"MENU_SELECT_ITEM_CANCEL"*/;
      goto LABEL_139;
    case 8:
      v84 = Method_FriendRootComponent_OnSelectFriendItem__;
      if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
        v84 = (_QWORD *)sub_1C32C38(Method_FriendRootComponent_OnSelectFriendItem__);
      v85 = (System_Reflection_MethodBase_o *)sub_1C32C04(v84, v84[4]);
      OverwriteAssetSoundName__PlaySystemSe(v85, 0, 0, 0);
      Instance = (DataManager_o *)this->fields.operationItemListViewManager;
      if ( !Instance )
        goto LABEL_146;
      Instance = (DataManager_o *)FriendOperationItemListViewManager__GetItem(
                                    (FriendOperationItemListViewManager_o *)Instance,
                                    this->fields.selectItemNum,
                                    v86);
      if ( !Instance )
        goto LABEL_146;
      v87 = Instance;
      Instance = (DataManager_o *)this->fields.myFSM;
      if ( !Instance )
        goto LABEL_146;
      if ( LODWORD(v87->fields.context) == 9 )
        v77 = &StringLiteral_8661/*"MENU_SELECT_ITEM_REMOVE_FOLLOW"*/;
      else
        v77 = &StringLiteral_8660/*"MENU_SELECT_ITEM_REMOVE"*/;
      goto LABEL_139;
    case 11:
      v96 = Method_FriendRootComponent_OnSelectFriendItem__;
      if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
        v96 = (_QWORD *)sub_1C32C38(Method_FriendRootComponent_OnSelectFriendItem__);
      v97 = (System_Reflection_MethodBase_o *)sub_1C32C04(v96, v96[4]);
      OverwriteAssetSoundName__PlaySystemSe(v97, 0, 0, 0);
      Instance = (DataManager_o *)this->fields.operationItemListViewManager;
      if ( !Instance )
        goto LABEL_146;
      Instance = (DataManager_o *)FriendOperationItemListViewManager__GetItem(
                                    (FriendOperationItemListViewManager_o *)Instance,
                                    this->fields.selectItemNum,
                                    v98);
      if ( !Instance )
        goto LABEL_146;
      FriendOperationItemListViewItem__set_isSwapMessageDisp(
        (FriendOperationItemListViewItem_o *)Instance,
        !Instance[1].fields._DispLog,
        v99);
      goto LABEL_135;
    case 12:
      Instance = (DataManager_o *)this->fields.operationItemListViewManager;
      if ( !Instance )
        goto LABEL_146;
      Instance = (DataManager_o *)FriendOperationItemListViewManager__GetItem(
                                    (FriendOperationItemListViewManager_o *)Instance,
                                    this->fields.selectItemNum,
                                    v10);
      if ( !Instance )
        goto LABEL_146;
      v101 = (FriendOperationItemListViewItem_o *)Instance;
      ServantLeader = FriendOperationItemListViewItem__get_ServantLeader(
                        (FriendOperationItemListViewItem_o *)Instance,
                        v100);
      if ( !ServantLeader || !ServantLeaderInfo__IsHideEquip(ServantLeader, 0) )
      {
        EquipTargetInfo = FriendOperationItemListViewItem__get_EquipTargetInfo(v101, v103);
        if ( EquipTargetInfo )
        {
          v105 = EquipTargetInfo;
          v107 = *(_QWORD *)&EquipTargetInfo->fields.svtId.fields.currentCryptoKey;
          v106 = *(_QWORD *)&EquipTargetInfo->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v133.fields.currentCryptoKey = v107;
          *(_QWORD *)&v133.fields.fakeValue = v106;
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v133, 0) >= 1 )
          {
            v108 = Method_FriendRootComponent_OnSelectFriendItem__;
            if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
              v108 = (_QWORD *)sub_1C32C38(Method_FriendRootComponent_OnSelectFriendItem__);
            v109 = (System_Reflection_MethodBase_o *)sub_1C32C04(v108, v108[4]);
            OverwriteAssetSoundName__PlaySystemSe(v109, 0, 0, 0);
            if ( v101->fields.kind == 9 )
              v111 = 14;
            else
              v111 = 13;
            FriendRootComponent__SelectShowServantEquip(this, v105, v111, v110);
            return;
          }
        }
      }
      v114 = Method_FriendRootComponent_OnSelectFriendItem__;
      if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
        v114 = (_QWORD *)sub_1C32C38(Method_FriendRootComponent_OnSelectFriendItem__);
      v115 = (System_Reflection_MethodBase_o *)sub_1C32C04(v114, v114[4]);
      OverwriteAssetSoundName__PlaySystemSe(v115, 2, 0, 0);
      goto LABEL_135;
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
      Instance = (DataManager_o *)this->fields.operationItemListViewManager;
      if ( !Instance )
        goto LABEL_146;
      Instance = (DataManager_o *)FriendOperationItemListViewManager__GetItem(
                                    (FriendOperationItemListViewManager_o *)Instance,
                                    this->fields.selectItemNum,
                                    v10);
      v13 = (unsigned int)(kind - 14);
      v14 = (unsigned int)v13 < 4 ? v13 + 1 : 0LL;
      if ( !Instance )
        goto LABEL_146;
      Instance = (DataManager_o *)FriendOperationItemListViewItem__GetAppendSkillInfo(
                                    (FriendOperationItemListViewItem_o *)Instance,
                                    &skillInfoList,
                                    v12);
      if ( !skillInfoList )
        goto LABEL_146;
      if ( (unsigned int)v14 >= LODWORD(skillInfoList->max_length) )
        goto LABEL_147;
      v15 = skillInfoList->m_Items[v14];
      if ( v15 && v15->fields.id >= 1 && v15->fields.lv >= 1 )
      {
        v16 = Method_FriendRootComponent_OnSelectFriendItem__;
        if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
          v16 = (_QWORD *)sub_1C32C38(Method_FriendRootComponent_OnSelectFriendItem__);
        v17 = (System_Reflection_MethodBase_o *)sub_1C32C04(v16, v16[4]);
        OverwriteAssetSoundName__PlaySystemSe(v17, 0, 0, 0);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_SkillMaster___);
        if ( !Instance )
          goto LABEL_146;
        Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                      v15->fields.id,
                                      (const MethodInfo_3396838 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_146;
        SkillEntity__getSkillMessageInfo((SkillEntity_o *)Instance, &name, &detail, v15->fields.lv, 0);
        v18 = name;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v19 = LocalizationManager__Get((System_String_o *)StringLiteral_8549/*"MASTER_EQSKILL_LV_TXT"*/, 0);
        lv = v15->fields.lv;
        v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv, v20, v21, v22, v23, v24, v25);
        v27 = System_String__Format(v19, v26, 0);
        name = System_String__Concat_63556792(v18, (System_String_o *)StringLiteral_113/*" "*/, v27, 0);
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !Instance )
          goto LABEL_146;
        CommonUI__OpenDetailLongInfoDialog(
          (CommonUI_o *)Instance,
          name,
          (System_String_o *)StringLiteral_1/*""*/,
          detail,
          1,
          0,
          0);
      }
      else
      {
        v28 = Method_FriendRootComponent_OnSelectFriendItem__;
        if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
          v28 = (_QWORD *)sub_1C32C38(Method_FriendRootComponent_OnSelectFriendItem__);
        v29 = (System_Reflection_MethodBase_o *)sub_1C32C04(v28, v28[4]);
        OverwriteAssetSoundName__PlaySystemSe(v29, 2, 0, 0);
      }
      goto LABEL_28;
    default:
      if ( this->fields.currentModeKind == 1 && !FriendRootComponent__get_tabKind(this, v9) )
      {
        Instance = (DataManager_o *)this->fields.operationItemListViewManager;
        if ( !Instance )
          goto LABEL_146;
        Item = FriendOperationItemListViewManager__GetItem(
                 (FriendOperationItemListViewManager_o *)Instance,
                 this->fields.selectItemNum,
                 v88);
        if ( Item )
        {
          v119 = Item;
          v120 = Method_FriendRootComponent_OnSelectFriendItem__;
          if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
            v120 = (_QWORD *)sub_1C32C38(Method_FriendRootComponent_OnSelectFriendItem__);
          v121 = (System_Reflection_MethodBase_o *)sub_1C32C04(v120, v120[4]);
          OverwriteAssetSoundName__PlaySystemSe(v121, 11, 0, 0);
          FriendOperationItemListViewItem__SwapLock(v119, v122);
        }
LABEL_28:
        operationItemListViewManager = this->fields.operationItemListViewManager;
        v31 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1C32E6C(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
        v33 = Method_FriendRootComponent_OnSelectFriendItem__;
      }
      else
      {
        v89 = Method_FriendRootComponent_OnSelectFriendItem__;
        if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
          v89 = (_QWORD *)sub_1C32C38(Method_FriendRootComponent_OnSelectFriendItem__);
        v90 = (System_Reflection_MethodBase_o *)sub_1C32C04(v89, v89[4]);
        OverwriteAssetSoundName__PlaySystemSe(v90, 0, 0, 0);
        Instance = (DataManager_o *)this->fields.operationItemListViewManager;
        if ( !Instance )
          goto LABEL_146;
        Instance = (DataManager_o *)FriendOperationItemListViewManager__GetItem(
                                      (FriendOperationItemListViewManager_o *)Instance,
                                      this->fields.selectItemNum,
                                      v91);
        if ( !Instance )
          goto LABEL_146;
        v92 = Instance;
        Instance = (DataManager_o *)Instance->fields.writeMasterDataThread;
        if ( !Instance )
          goto LABEL_146;
        v93 = Instance->fields.lockCountObj;
        if ( !v93 )
          goto LABEL_146;
        if ( !LODWORD(v93[1].monitor) )
LABEL_147:
          sub_1C32E84(Instance);
        v94 = OtherUserGameEntity__getServantLeaderInfo(
                (OtherUserGameEntity_o *)Instance,
                (int32_t)v92[1].fields.m_CancellationTokenSource,
                0,
                0,
                (int32_t)v93[2].klass,
                0,
                0);
        if ( v94 )
        {
          FriendRootComponent__SelectShowServant(this, v94, v95);
          return;
        }
LABEL_135:
        operationItemListViewManager = this->fields.operationItemListViewManager;
        v31 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1C32E6C(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
        v33 = Method_FriendRootComponent_OnSelectFriendItem__;
      }
LABEL_136:
      v116 = v31;
      FriendOperationItemListViewManager_CallbackFunc___ctor(v31, (Il2CppObject *)this, (intptr_t)v33, v32);
      if ( operationItemListViewManager )
      {
        operationItemListViewManager->fields.callbackFunc = v116;
        sub_1C32BC4(&operationItemListViewManager->fields.callbackFunc, v116);
        FriendOperationItemListViewManager__SetMode_32678244(operationItemListViewManager, 2, v117);
        return;
      }
      goto LABEL_146;
  }
}


void FriendRootComponent__OnSelectOffer(
        FriendRootComponent_o *this,
        int32_t state,
        int32_t classPos,
        const MethodInfo *method)
{
  ClassButtonControlComponent_o *classButtonControl; // x0
  __int64 *v8; // x8

  if ( (byte_4C32623 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_8657/*"MENU_SELECT_ITEM_FOLLOW"*/);
    sub_1C32C20(&StringLiteral_8658/*"MENU_SELECT_ITEM_OFFER"*/);
    sub_1C32C20(&StringLiteral_8641/*"MENU_CANCEL"*/);
    byte_4C32623 = 1;
  }
  classButtonControl = this->fields.classButtonControl;
  if ( !classButtonControl )
    goto LABEL_13;
  ClassButtonControlComponent__setCursor(classButtonControl, classPos, 0);
  if ( state == 3 )
  {
    classButtonControl = (ClassButtonControlComponent_o *)this->fields.myFSM;
    if ( classButtonControl )
    {
      v8 = &StringLiteral_8657/*"MENU_SELECT_ITEM_FOLLOW"*/;
      goto LABEL_12;
    }
LABEL_13:
    sub_1C32E7C(classButtonControl);
  }
  if ( state != 2 )
  {
    classButtonControl = (ClassButtonControlComponent_o *)this->fields.myFSM;
    if ( classButtonControl )
    {
      v8 = &StringLiteral_8641/*"MENU_CANCEL"*/;
      goto LABEL_12;
    }
    goto LABEL_13;
  }
  classButtonControl = (ClassButtonControlComponent_o *)this->fields.myFSM;
  if ( !classButtonControl )
    goto LABEL_13;
  v8 = &StringLiteral_8658/*"MENU_SELECT_ITEM_OFFER"*/;
LABEL_12:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)classButtonControl, (System_String_o *)*v8, 0);
}


void FriendRootComponent__OnSelectSearchFriend(
        FriendRootComponent_o *this,
        bool isDecide,
        System_String_o *friendCode,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0
  __int64 *v8; // x8

  if ( (byte_4C32622 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_8642/*"MENU_DECIDE"*/);
    sub_1C32C20(&StringLiteral_8641/*"MENU_CANCEL"*/);
    byte_4C32622 = 1;
  }
  this->fields.selectFriendCode = friendCode;
  sub_1C32BC4(&this->fields.selectFriendCode, friendCode);
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1C32E7C(0);
  v8 = &StringLiteral_8642/*"MENU_DECIDE"*/;
  if ( !isDecide )
    v8 = &StringLiteral_8641/*"MENU_CANCEL"*/;
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)*v8, 0);
}


void FriendRootComponent__OpenHelpDialog(FriendRootComponent_o *this, const MethodInfo *method)
{
  EventTutorialMaster__ShowTutorialWithoutCheck(-1, 49, 0, 0, 0);
}


void FriendRootComponent__Quit(FriendRootComponent_o *this, const MethodInfo *method)
{
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  const MethodInfo *v4; // x1

  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager
    || (FriendOperationItemListViewManager__DestroyList(operationItemListViewManager, method),
        (operationItemListViewManager = this->fields.operationItemListViewManager) == 0)
    || (operationItemListViewManager = (FriendOperationItemListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                                 (UnityEngine_Component_o *)operationItemListViewManager,
                                                                                 0)) == 0 )
  {
    sub_1C32E7C(operationItemListViewManager);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)operationItemListViewManager, 0, 0);
  FriendRootComponent__RefreshInfo(this, v4);
  this->fields.state = 0;
}


void FriendRootComponent__RefreshInfo(FriendRootComponent_o *this, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x22
  __int64 Instance; // x0
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *v6; // x0
  UILabel_o *friendCountLabel; // x23
  UserFollowMaster_o *v8; // x21
  System_String_o *v9; // x24
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v13; // x5
  __int64 v14; // x6
  __int64 v15; // x7
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  __int64 v19; // x5
  __int64 v20; // x6
  __int64 v21; // x7
  Il2CppObject *v22; // x25
  Il2CppObject *v23; // x0
  UILabel_o *followCountLabel; // x22
  System_String_o *v25; // x23
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  __int64 v29; // x5
  __int64 v30; // x6
  __int64 v31; // x7
  __int64 v32; // x0
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  __int64 v36; // x5
  __int64 v37; // x6
  __int64 v38; // x7
  BalanceConfig_c *v39; // x8
  Il2CppObject *v40; // x21
  Il2CppObject *v41; // x0
  const MethodInfo *v42; // x1
  const MethodInfo *v43; // x1
  int32_t FollowNum; // [xsp+0h] [xbp-60h] BYREF
  int32_t FollowSum; // [xsp+4h] [xbp-5Ch] BYREF
  int32_t friendKeep; // [xsp+8h] [xbp-58h] BYREF
  int32_t FriendSum; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4C325DF & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_TblFriendMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserFollowMaster___);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&StringLiteral_6566/*"FRIEND_SHOW_INFOMATION"*/);
    byte_4C325DF = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_TblFriendMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  v6 = DataManager__GetMasterData_object_(
         (DataManager_o *)Instance,
         (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserFollowMaster___);
  friendCountLabel = this->fields.friendCountLabel;
  v8 = (UserFollowMaster_o *)v6;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_6566/*"FRIEND_SHOW_INFOMATION"*/, 0);
  if ( !MasterData_object )
    goto LABEL_16;
  v9 = (System_String_o *)Instance;
  FriendSum = TblFriendMaster__GetFriendSum((TblFriendMaster_o *)MasterData_object, 0);
  Instance = j_il2cpp_value_box_0(int_TypeInfo, &FriendSum, v10, v11, v12, v13, v14, v15);
  if ( !SelfUserGame )
    goto LABEL_16;
  v22 = (Il2CppObject *)Instance;
  friendKeep = SelfUserGame->fields.friendKeep;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &friendKeep, v16, v17, v18, v19, v20, v21);
  Instance = (__int64)System_String__Format_63559836(v9, v22, v23, 0);
  if ( !friendCountLabel )
    goto LABEL_16;
  UILabel__set_text(friendCountLabel, (System_String_o *)Instance, 0);
  followCountLabel = this->fields.followCountLabel;
  Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_6566/*"FRIEND_SHOW_INFOMATION"*/, 0);
  if ( !v8 )
    goto LABEL_16;
  v25 = (System_String_o *)Instance;
  FollowSum = UserFollowMaster__GetFollowSum(v8, 0);
  v32 = j_il2cpp_value_box_0(int_TypeInfo, &FollowSum, v26, v27, v28, v29, v30, v31);
  v39 = BalanceConfig_TypeInfo;
  v40 = (Il2CppObject *)v32;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v39 = BalanceConfig_TypeInfo;
  }
  FollowNum = v39->static_fields->FollowNum;
  v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &FollowNum, v33, v34, v35, v36, v37, v38);
  Instance = (__int64)System_String__Format_63559836(v25, v40, v41, 0);
  if ( !followCountLabel
    || (UILabel__set_text(followCountLabel, (System_String_o *)Instance, 0),
        Instance = TblFriendMaster__GetSum((TblFriendMaster_o *)MasterData_object, 2, 0),
        !this->fields.noticeNumber) )
  {
LABEL_16:
    sub_1C32E7C(Instance);
  }
  NoticeNumberComponent__SetNumber(this->fields.noticeNumber, Instance, 0);
  FriendRootComponent__CheckModeKind(this, v42);
  FriendRootComponent__CheckHelpUI(this, v43);
}


void FriendRootComponent__RefreshTab(FriendRootComponent_o *this, const MethodInfo *method)
{
  int32_t tabKind; // w0
  const MethodInfo *v4; // x1
  UnityEngine_Behaviour_o *tabFriendButton; // x0
  System_String_o *v6; // x1
  System_String_o *v7; // x1
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x1
  bool v10; // w1
  const MethodInfo *v11; // x2
  UICommonButton_o *v12; // x20
  bool enabled; // w0
  UICommonButton_o *tabOfferedButton; // x20
  bool v15; // w0
  UnityEngine_Behaviour_o *tabSearchButton; // x19
  bool v17; // w1

  if ( (byte_4C325DE & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_17569/*"btn_txt_friendsearch_on"*/);
    sub_1C32C20(&StringLiteral_17568/*"btn_txt_friendsearch_off"*/);
    sub_1C32C20(&StringLiteral_17441/*"btn_bg_09"*/);
    sub_1C32C20(&StringLiteral_17567/*"btn_txt_friendrequest_on"*/);
    sub_1C32C20(&StringLiteral_17565/*"btn_txt_friendlist_on"*/);
    sub_1C32C20(&StringLiteral_17566/*"btn_txt_friendrequest_off"*/);
    sub_1C32C20(&StringLiteral_17564/*"btn_txt_friendlist_off"*/);
    sub_1C32C20(&StringLiteral_17461/*"btn_bg_on"*/);
    byte_4C325DE = 1;
  }
  tabKind = FriendRootComponent__get_tabKind(this, method);
  switch ( tabKind )
  {
    case 2:
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabFriendButton;
      if ( !tabFriendButton )
        goto LABEL_53;
      ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, const char *))tabFriendButton->klass[1]._1.name)(
        tabFriendButton,
        1,
        tabFriendButton->klass[1]._1.namespaze);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabOfferedButton;
      if ( !tabFriendButton )
        goto LABEL_53;
      ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, const char *))tabFriendButton->klass[1]._1.name)(
        tabFriendButton,
        1,
        tabFriendButton->klass[1]._1.namespaze);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabSearchButton;
      if ( !tabFriendButton )
        goto LABEL_53;
      ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, const char *))tabFriendButton->klass[1]._1.name)(
        tabFriendButton,
        1,
        tabFriendButton->klass[1]._1.namespaze);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabFriendButton;
      if ( !tabFriendButton )
        goto LABEL_53;
      UnityEngine_Behaviour__set_enabled(tabFriendButton, 1, 0);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabOfferedButton;
      if ( !tabFriendButton )
        goto LABEL_53;
      UnityEngine_Behaviour__set_enabled(tabFriendButton, 1, 0);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabSearchButton;
      if ( !tabFriendButton )
        goto LABEL_53;
      UnityEngine_Behaviour__set_enabled(tabFriendButton, 0, 0);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabFriendTitleSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17564/*"btn_txt_friendlist_off"*/, 0);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabOfferedTitleSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17566/*"btn_txt_friendrequest_off"*/, 0);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabSearchTitleSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17569/*"btn_txt_friendsearch_on"*/, 0);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabFriendSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17441/*"btn_bg_09"*/, 0);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabOfferedSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17441/*"btn_bg_09"*/, 0);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabSearchSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      v7 = (System_String_o *)StringLiteral_17461/*"btn_bg_on"*/;
LABEL_45:
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, v7, 0);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabFriendButton;
      if ( tabFriendButton )
      {
        ((void (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, __int64, Il2CppClass **))tabFriendButton->klass[1]._1.nestedTypes)(
          tabFriendButton,
          0,
          1,
          tabFriendButton->klass[1]._1.implementedInterfaces);
        tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabOfferedButton;
        if ( tabFriendButton )
        {
          ((void (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, __int64, Il2CppClass **))tabFriendButton->klass[1]._1.nestedTypes)(
            tabFriendButton,
            0,
            1,
            tabFriendButton->klass[1]._1.implementedInterfaces);
          tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabSearchButton;
          if ( tabFriendButton )
          {
            ((void (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, __int64, Il2CppClass **))tabFriendButton->klass[1]._1.nestedTypes)(
              tabFriendButton,
              0,
              1,
              tabFriendButton->klass[1]._1.implementedInterfaces);
            break;
          }
        }
      }
LABEL_53:
      sub_1C32E7C(tabFriendButton);
    case 1:
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabFriendButton;
      if ( !tabFriendButton )
        goto LABEL_53;
      ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, const char *))tabFriendButton->klass[1]._1.name)(
        tabFriendButton,
        1,
        tabFriendButton->klass[1]._1.namespaze);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabOfferedButton;
      if ( !tabFriendButton )
        goto LABEL_53;
      ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, const char *))tabFriendButton->klass[1]._1.name)(
        tabFriendButton,
        1,
        tabFriendButton->klass[1]._1.namespaze);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabSearchButton;
      if ( !tabFriendButton )
        goto LABEL_53;
      ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, const char *))tabFriendButton->klass[1]._1.name)(
        tabFriendButton,
        1,
        tabFriendButton->klass[1]._1.namespaze);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabFriendButton;
      if ( !tabFriendButton )
        goto LABEL_53;
      UnityEngine_Behaviour__set_enabled(tabFriendButton, 1, 0);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabOfferedButton;
      if ( !tabFriendButton )
        goto LABEL_53;
      UnityEngine_Behaviour__set_enabled(tabFriendButton, 0, 0);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabSearchButton;
      if ( !tabFriendButton )
        goto LABEL_53;
      UnityEngine_Behaviour__set_enabled(tabFriendButton, 1, 0);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabFriendTitleSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17564/*"btn_txt_friendlist_off"*/, 0);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabOfferedTitleSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17567/*"btn_txt_friendrequest_on"*/, 0);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabSearchTitleSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17568/*"btn_txt_friendsearch_off"*/, 0);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabFriendSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17441/*"btn_bg_09"*/, 0);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabOfferedSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      v6 = (System_String_o *)StringLiteral_17461/*"btn_bg_on"*/;
      goto LABEL_43;
    case 0:
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabFriendButton;
      if ( !tabFriendButton )
        goto LABEL_53;
      ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, const char *))tabFriendButton->klass[1]._1.name)(
        tabFriendButton,
        1,
        tabFriendButton->klass[1]._1.namespaze);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabOfferedButton;
      if ( !tabFriendButton )
        goto LABEL_53;
      ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, const char *))tabFriendButton->klass[1]._1.name)(
        tabFriendButton,
        1,
        tabFriendButton->klass[1]._1.namespaze);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabSearchButton;
      if ( !tabFriendButton )
        goto LABEL_53;
      ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, const char *))tabFriendButton->klass[1]._1.name)(
        tabFriendButton,
        1,
        tabFriendButton->klass[1]._1.namespaze);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabFriendButton;
      if ( !tabFriendButton )
        goto LABEL_53;
      UnityEngine_Behaviour__set_enabled(tabFriendButton, 0, 0);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabOfferedButton;
      if ( !tabFriendButton )
        goto LABEL_53;
      UnityEngine_Behaviour__set_enabled(tabFriendButton, 1, 0);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabSearchButton;
      if ( !tabFriendButton )
        goto LABEL_53;
      UnityEngine_Behaviour__set_enabled(tabFriendButton, 1, 0);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabFriendTitleSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17565/*"btn_txt_friendlist_on"*/, 0);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabOfferedTitleSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17566/*"btn_txt_friendrequest_off"*/, 0);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabSearchTitleSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17568/*"btn_txt_friendsearch_off"*/, 0);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabFriendSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17461/*"btn_bg_on"*/, 0);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabOfferedSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      v6 = (System_String_o *)StringLiteral_17441/*"btn_bg_09"*/;
LABEL_43:
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, v6, 0);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabSearchSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      v7 = (System_String_o *)StringLiteral_17441/*"btn_bg_09"*/;
      goto LABEL_45;
  }
  FriendRootComponent__CheckModeKind(this, v4);
  FriendRootComponent__CheckHelpUI(this, v8);
  v10 = FriendRootComponent__get_tabKind(this, v9) == 0;
  FriendRootComponent__SetActiveModeKindButtons(this, v10, v11);
  v12 = this->fields.tabFriendButton;
  if ( !v12 )
    goto LABEL_53;
  enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.tabFriendButton, 0);
  UICommonButton__SetColliderEnable(v12, enabled, 1, 0);
  tabOfferedButton = this->fields.tabOfferedButton;
  if ( !tabOfferedButton )
    goto LABEL_53;
  v15 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.tabOfferedButton, 0);
  UICommonButton__SetColliderEnable(tabOfferedButton, v15, 1, 0);
  tabSearchButton = (UnityEngine_Behaviour_o *)this->fields.tabSearchButton;
  if ( !tabSearchButton )
    goto LABEL_53;
  v17 = UnityEngine_Behaviour__get_enabled(tabSearchButton, 0);
  UICommonButton__SetColliderEnable((UICommonButton_o *)tabSearchButton, v17, 1, 0);
}


void FriendRootComponent__RequestFollowAssign(FriendRootComponent_o *this, const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v3; // x20
  FollowAssignRequest_o *Request_object; // x0
  struct OtherUserGameEntity_o *selectFriendEntity; // x8

  if ( (byte_4C32628 & 1) == 0 )
  {
    sub_1C32C20(&Method_FriendRootComponent_EndRequestFollowAssign__);
    sub_1C32C20(&Method_NetworkManager_getRequest_FollowAssignRequest___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C32C20(&StringLiteral_11081/*"REQUEST_NG"*/);
    byte_4C32628 = 1;
  }
  if ( this->fields.selectFriendEntity )
  {
    v3 = (NetworkManager_ResultCallbackFunc_o *)sub_1C32E6C(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v3,
      (Il2CppObject *)this,
      Method_FriendRootComponent_EndRequestFollowAssign__,
      0);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = (FollowAssignRequest_o *)NetworkManager__getRequest_object_(
                                                v3,
                                                (const MethodInfo_3168488 *)Method_NetworkManager_getRequest_FollowAssignRequest___);
    selectFriendEntity = this->fields.selectFriendEntity;
    if ( selectFriendEntity && Request_object )
    {
      FollowAssignRequest__beginRequest(Request_object, selectFriendEntity->fields.userId, 0);
      return;
    }
LABEL_11:
    sub_1C32E7C(Request_object);
  }
  Request_object = (FollowAssignRequest_o *)this->fields.myFSM;
  if ( !Request_object )
    goto LABEL_11;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Request_object, (System_String_o *)StringLiteral_11081/*"REQUEST_NG"*/, 0);
}


void FriendRootComponent__RequestFollowRemove(FriendRootComponent_o *this, const MethodInfo *method)
{
  System_Action_object__o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4C32631 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_string__TypeInfo);
    sub_1C32C20(&Method_FriendRootComponent__RequestFollowRemove_b__143_0__);
    byte_4C32631 = 1;
  }
  v3 = (System_Action_object__o *)sub_1C32E6C(System_Action_string__TypeInfo);
  System_Action_object____ctor(v3, (Il2CppObject *)this, Method_FriendRootComponent__RequestFollowRemove_b__143_0__, 0);
  FriendRootComponent__FriendLockRequst(this, (System_Action_string__o *)v3, v4);
}


void FriendRootComponent__RequestFriendAccept(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  FriendOperationItemListViewItem_o *Item; // x0
  struct OtherUserGameEntity_o *otherUserGameEntity; // x21
  NetworkManager_ResultCallbackFunc_o *v7; // x20

  if ( (byte_4C325FF & 1) == 0 )
  {
    sub_1C32C20(&Method_FriendRootComponent_EndRequestFriend__);
    sub_1C32C20(&Method_NetworkManager_getRequest_FriendAcceptRequest___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C32C20(&StringLiteral_11081/*"REQUEST_NG"*/);
    byte_4C325FF = 1;
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
      v7 = (NetworkManager_ResultCallbackFunc_o *)sub_1C32E6C(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v7,
        (Il2CppObject *)this,
        Method_FriendRootComponent_EndRequestFriend__,
        0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      operationItemListViewManager = (FriendOperationItemListViewManager_o *)NetworkManager__getRequest_object_(
                                                                               v7,
                                                                               (const MethodInfo_3168488 *)Method_NetworkManager_getRequest_FriendAcceptRequest___);
      if ( operationItemListViewManager )
      {
        FriendAcceptRequest__beginRequest(
          (FriendAcceptRequest_o *)operationItemListViewManager,
          otherUserGameEntity->fields.userId,
          0);
        return;
      }
LABEL_12:
      sub_1C32E7C(operationItemListViewManager);
    }
  }
  operationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.myFSM;
  if ( !operationItemListViewManager )
    goto LABEL_12;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)operationItemListViewManager, (System_String_o *)StringLiteral_11081/*"REQUEST_NG"*/, 0);
}


void FriendRootComponent__RequestFriendCancel(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  FriendOperationItemListViewItem_o *Item; // x0
  struct OtherUserGameEntity_o *otherUserGameEntity; // x21
  NetworkManager_ResultCallbackFunc_o *v7; // x20

  if ( (byte_4C32601 & 1) == 0 )
  {
    sub_1C32C20(&Method_FriendRootComponent_EndRequestFriend__);
    sub_1C32C20(&Method_NetworkManager_getRequest_FriendCancelRequest___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C32C20(&StringLiteral_11081/*"REQUEST_NG"*/);
    byte_4C32601 = 1;
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
      v7 = (NetworkManager_ResultCallbackFunc_o *)sub_1C32E6C(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v7,
        (Il2CppObject *)this,
        Method_FriendRootComponent_EndRequestFriend__,
        0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      operationItemListViewManager = (FriendOperationItemListViewManager_o *)NetworkManager__getRequest_object_(
                                                                               v7,
                                                                               (const MethodInfo_3168488 *)Method_NetworkManager_getRequest_FriendCancelRequest___);
      if ( operationItemListViewManager )
      {
        FriendCancelRequest__beginRequest(
          (FriendCancelRequest_o *)operationItemListViewManager,
          otherUserGameEntity->fields.userId,
          0);
        return;
      }
LABEL_12:
      sub_1C32E7C(operationItemListViewManager);
    }
  }
  operationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.myFSM;
  if ( !operationItemListViewManager )
    goto LABEL_12;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)operationItemListViewManager, (System_String_o *)StringLiteral_11081/*"REQUEST_NG"*/, 0);
}


void FriendRootComponent__RequestFriendOffer(FriendRootComponent_o *this, const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v3; // x20
  FriendOfferRequest_o *Request_object; // x0
  struct OtherUserGameEntity_o *selectFriendEntity; // x8

  if ( (byte_4C325FD & 1) == 0 )
  {
    sub_1C32C20(&Method_FriendRootComponent_EndRequestFriend__);
    sub_1C32C20(&Method_NetworkManager_getRequest_FriendOfferRequest___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C32C20(&StringLiteral_11081/*"REQUEST_NG"*/);
    byte_4C325FD = 1;
  }
  if ( this->fields.selectFriendEntity )
  {
    v3 = (NetworkManager_ResultCallbackFunc_o *)sub_1C32E6C(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(v3, (Il2CppObject *)this, Method_FriendRootComponent_EndRequestFriend__, 0);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = (FriendOfferRequest_o *)NetworkManager__getRequest_object_(
                                               v3,
                                               (const MethodInfo_3168488 *)Method_NetworkManager_getRequest_FriendOfferRequest___);
    selectFriendEntity = this->fields.selectFriendEntity;
    if ( selectFriendEntity && Request_object )
    {
      FriendOfferRequest__beginRequest(Request_object, selectFriendEntity->fields.userId, 0);
      return;
    }
LABEL_11:
    sub_1C32E7C(Request_object);
  }
  Request_object = (FriendOfferRequest_o *)this->fields.myFSM;
  if ( !Request_object )
    goto LABEL_11;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Request_object, (System_String_o *)StringLiteral_11081/*"REQUEST_NG"*/, 0);
}


void FriendRootComponent__RequestFriendOffer2(FriendRootComponent_o *this, const MethodInfo *method)
{
  System_Action_object__o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4C325FE & 1) == 0 )
  {
    sub_1C32C20(&System_Action_string__TypeInfo);
    sub_1C32C20(&Method_FriendRootComponent__RequestFriendOffer2_b__88_0__);
    byte_4C325FE = 1;
  }
  v3 = (System_Action_object__o *)sub_1C32E6C(System_Action_string__TypeInfo);
  System_Action_object____ctor(v3, (Il2CppObject *)this, Method_FriendRootComponent__RequestFriendOffer2_b__88_0__, 0);
  FriendRootComponent__FriendLockRequst(this, (System_Action_string__o *)v3, v4);
}


void FriendRootComponent__RequestFriendProfile(FriendRootComponent_o *this, const MethodInfo *method)
{
  System_String_o *selectFriendCode; // x0
  System_String_o *v4; // x0
  NetworkManager_ResultCallbackFunc_o *v5; // x20
  ProfileTopRequest_o *Request_object; // x0
  FriendWarningDialog_o *friendWarningDialog; // x20
  FriendWarningDialog_CallbackFunc_o *v8; // x21

  if ( (byte_4C32605 & 1) == 0 )
  {
    sub_1C32C20(&FriendWarningDialog_CallbackFunc_TypeInfo);
    sub_1C32C20(&Method_FriendRootComponent_EndNoSearchWarning__);
    sub_1C32C20(&Method_FriendRootComponent_EndRequestFriendProfile__);
    sub_1C32C20(&Method_NetworkManager_getRequest_ProfileTopRequest___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C32C20(&StringLiteral_113/*" "*/);
    sub_1C32C20(&StringLiteral_11081/*"REQUEST_NG"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C32605 = 1;
  }
  selectFriendCode = this->fields.selectFriendCode;
  if ( selectFriendCode )
  {
    v4 = System_String__Replace_63565092(
           selectFriendCode,
           (System_String_o *)StringLiteral_113/*" "*/,
           (System_String_o *)StringLiteral_1/*""*/,
           0);
    if ( System_String__op_Inequality(v4, (System_String_o *)StringLiteral_1/*""*/, 0) )
    {
      v5 = (NetworkManager_ResultCallbackFunc_o *)sub_1C32E6C(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v5,
        (Il2CppObject *)this,
        Method_FriendRootComponent_EndRequestFriendProfile__,
        0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Request_object = (ProfileTopRequest_o *)NetworkManager__getRequest_object_(
                                                v5,
                                                (const MethodInfo_3168488 *)Method_NetworkManager_getRequest_ProfileTopRequest___);
      if ( Request_object )
      {
        ProfileTopRequest__beginRequestFriendCode(Request_object, this->fields.selectFriendCode, 0);
        return;
      }
LABEL_13:
      sub_1C32E7C(Request_object);
    }
    friendWarningDialog = this->fields.friendWarningDialog;
    v8 = (FriendWarningDialog_CallbackFunc_o *)sub_1C32E6C(FriendWarningDialog_CallbackFunc_TypeInfo);
    FriendWarningDialog_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_FriendRootComponent_EndNoSearchWarning__,
      0);
    if ( !friendWarningDialog )
      goto LABEL_13;
    FriendWarningDialog__Open(friendWarningDialog, 3, v8, 0);
  }
  this->fields.selectFriendEntity = 0;
  sub_1C32BC4(&this->fields.selectFriendEntity, 0);
  Request_object = (ProfileTopRequest_o *)this->fields.myFSM;
  if ( !Request_object )
    goto LABEL_13;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Request_object, (System_String_o *)StringLiteral_11081/*"REQUEST_NG"*/, 0);
}


void FriendRootComponent__RequestFriendReject(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  FriendOperationItemListViewItem_o *Item; // x0
  struct OtherUserGameEntity_o *otherUserGameEntity; // x21
  NetworkManager_ResultCallbackFunc_o *v7; // x20

  if ( (byte_4C32600 & 1) == 0 )
  {
    sub_1C32C20(&Method_FriendRootComponent_EndRequestFriend__);
    sub_1C32C20(&Method_NetworkManager_getRequest_FriendRejectRequest___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&StringLiteral_11081/*"REQUEST_NG"*/);
    byte_4C32600 = 1;
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
      operationItemListViewManager = (FriendOperationItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( operationItemListViewManager )
      {
        CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)operationItemListViewManager, 0, 0);
        v7 = (NetworkManager_ResultCallbackFunc_o *)sub_1C32E6C(NetworkManager_ResultCallbackFunc_TypeInfo);
        NetworkManager_ResultCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_FriendRootComponent_EndRequestFriend__,
          0);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        operationItemListViewManager = (FriendOperationItemListViewManager_o *)NetworkManager__getRequest_object_(
                                                                                 v7,
                                                                                 (const MethodInfo_3168488 *)Method_NetworkManager_getRequest_FriendRejectRequest___);
        if ( operationItemListViewManager )
        {
          FriendRejectRequest__beginRequest(
            (FriendRejectRequest_o *)operationItemListViewManager,
            otherUserGameEntity->fields.userId,
            0);
          return;
        }
      }
LABEL_13:
      sub_1C32E7C(operationItemListViewManager);
    }
  }
  operationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.myFSM;
  if ( !operationItemListViewManager )
    goto LABEL_13;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)operationItemListViewManager, (System_String_o *)StringLiteral_11081/*"REQUEST_NG"*/, 0);
}


void FriendRootComponent__RequestFriendRemove(FriendRootComponent_o *this, const MethodInfo *method)
{
  System_Action_object__o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4C32602 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_string__TypeInfo);
    sub_1C32C20(&Method_FriendRootComponent__RequestFriendRemove_b__92_0__);
    byte_4C32602 = 1;
  }
  v3 = (System_Action_object__o *)sub_1C32E6C(System_Action_string__TypeInfo);
  System_Action_object____ctor(v3, (Il2CppObject *)this, Method_FriendRootComponent__RequestFriendRemove_b__92_0__, 0);
  FriendRootComponent__FriendLockRequst(this, (System_Action_string__o *)v3, v4);
}


void FriendRootComponent__SelectFollowConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  UserFollowMaster_o *v4; // x20
  const MethodInfo *v5; // x1
  int32_t FollowSum; // w21
  BalanceConfig_c *v7; // x8
  struct OtherUserGameEntity_o *selectFriendEntity; // x8
  Il2CppObject *v9; // x20
  System_String_o *v10; // x21
  System_String_o *v11; // x22
  NotificationDialog_ClickDelegate_o *v12; // x23
  FriendWarningDialog_o *friendWarningDialog; // x20
  FriendWarningDialog_CallbackFunc_o *v14; // x21
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x20
  OtherUserGameEntity_o *v16; // x21
  FriendOperationConfirmMenu_CallbackFunc_o *v17; // x22
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x4

  if ( (byte_4C32624 & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo);
    sub_1C32C20(&FriendWarningDialog_CallbackFunc_TypeInfo);
    sub_1C32C20(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserFollowMaster___);
    sub_1C32C20(&Method_FriendRootComponent_EndMaxFollowWarningOfferConfirm__);
    sub_1C32C20(&Method_FriendRootComponent_SelectedFollowOfferConfirm__);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&StringLiteral_1946/*"ALREADY_FOLLOWED_TITLE"*/);
    sub_1C32C20(&StringLiteral_1945/*"ALREADY_FOLLOWED_MESSAGE"*/);
    byte_4C32624 = 1;
  }
  if ( this->fields.state == 23 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserFollowMaster___);
      if ( Instance )
      {
        v4 = (UserFollowMaster_o *)Instance;
        FollowSum = UserFollowMaster__GetFollowSum((UserFollowMaster_o *)Instance, 0);
        v7 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v7 = BalanceConfig_TypeInfo;
        }
        if ( FollowSum >= v7->static_fields->FollowNum )
        {
          this->fields.state = 43;
          friendWarningDialog = this->fields.friendWarningDialog;
          v14 = (FriendWarningDialog_CallbackFunc_o *)sub_1C32E6C(FriendWarningDialog_CallbackFunc_TypeInfo);
          FriendWarningDialog_CallbackFunc___ctor(
            v14,
            (Il2CppObject *)this,
            Method_FriendRootComponent_EndMaxFollowWarningOfferConfirm__,
            0);
          if ( friendWarningDialog )
          {
            FriendWarningDialog__Open(friendWarningDialog, 7, v14, 0);
            return;
          }
        }
        else
        {
          selectFriendEntity = this->fields.selectFriendEntity;
          if ( !selectFriendEntity )
          {
            FriendRootComponent__StartSearchInput(this, v5);
            return;
          }
          if ( UserFollowMaster__IsFollowUser(v4, selectFriendEntity->fields.userId, 0) )
          {
            this->fields.state = 44;
            v9 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v10 = LocalizationManager__Get((System_String_o *)StringLiteral_1946/*"ALREADY_FOLLOWED_TITLE"*/, 0);
            v11 = LocalizationManager__Get((System_String_o *)StringLiteral_1945/*"ALREADY_FOLLOWED_MESSAGE"*/, 0);
            v12 = (NotificationDialog_ClickDelegate_o *)sub_1C32E6C(NotificationDialog_ClickDelegate_TypeInfo);
            NotificationDialog_ClickDelegate___ctor(
              v12,
              (Il2CppObject *)this,
              Method_FriendRootComponent_EndMaxFollowWarningOfferConfirm__,
              0);
            if ( v9 )
            {
              CommonUI__OpenNotificationDialog_31193120(
                (CommonUI_o *)v9,
                v10,
                v11,
                v12,
                -1,
                0,
                0,
                0,
                0,
                0,
                0,
                0,
                0,
                0,
                0,
                1,
                0,
                0,
                0,
                0);
              return;
            }
          }
          else
          {
            this->fields.state = 42;
            operationConfirmMenu = this->fields.operationConfirmMenu;
            v16 = this->fields.selectFriendEntity;
            v17 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_1C32E6C(FriendOperationConfirmMenu_CallbackFunc_TypeInfo);
            FriendOperationConfirmMenu_CallbackFunc___ctor(
              v17,
              (Il2CppObject *)this,
              Method_FriendRootComponent_SelectedFollowOfferConfirm__,
              v18);
            if ( operationConfirmMenu )
            {
              FriendOperationConfirmMenu__Open(operationConfirmMenu, 6, v16, v17, v19);
              return;
            }
          }
        }
      }
    }
    sub_1C32E7C(Instance);
  }
}


void FriendRootComponent__SelectFollowRemoveConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x20
  OtherUserGameEntity_o *dropList; // x21
  FriendOperationConfirmMenu_CallbackFunc_o *v7; // x22
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x4

  if ( (byte_4C3262B & 1) == 0 )
  {
    sub_1C32C20(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo);
    sub_1C32C20(&Method_FriendRootComponent_SelectedFollowRemoveConfirm__);
    byte_4C3262B = 1;
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
          dropList = (OtherUserGameEntity_o *)operationItemListViewManager->fields.dropList,
          v7 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_1C32E6C(FriendOperationConfirmMenu_CallbackFunc_TypeInfo),
          FriendOperationConfirmMenu_CallbackFunc___ctor(
            v7,
            (Il2CppObject *)this,
            Method_FriendRootComponent_SelectedFollowRemoveConfirm__,
            v8),
          !operationConfirmMenu) )
    {
      sub_1C32E7C(operationItemListViewManager);
    }
    FriendOperationConfirmMenu__Open(operationConfirmMenu, 7, dropList, v7, v9);
  }
}


void FriendRootComponent__SelectFriendAcceptConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x20
  OtherUserGameEntity_o *dropList; // x21
  FriendOperationConfirmMenu_CallbackFunc_o *v7; // x22
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x4

  if ( (byte_4C325F1 & 1) == 0 )
  {
    sub_1C32C20(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo);
    sub_1C32C20(&Method_FriendRootComponent_SelectedFriendAcceptConfirm__);
    byte_4C325F1 = 1;
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
          dropList = (OtherUserGameEntity_o *)operationItemListViewManager->fields.dropList,
          v7 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_1C32E6C(FriendOperationConfirmMenu_CallbackFunc_TypeInfo),
          FriendOperationConfirmMenu_CallbackFunc___ctor(
            v7,
            (Il2CppObject *)this,
            Method_FriendRootComponent_SelectedFriendAcceptConfirm__,
            v8),
          !operationConfirmMenu) )
    {
      sub_1C32E7C(operationItemListViewManager);
    }
    FriendOperationConfirmMenu__Open(operationConfirmMenu, 2, dropList, v7, v9);
  }
}


void FriendRootComponent__SelectFriendCancelConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x20
  OtherUserGameEntity_o *dropList; // x21
  FriendOperationConfirmMenu_CallbackFunc_o *v7; // x22
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x4

  if ( (byte_4C325F7 & 1) == 0 )
  {
    sub_1C32C20(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo);
    sub_1C32C20(&Method_FriendRootComponent_SelectedFriendCancelConfirm__);
    byte_4C325F7 = 1;
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
          dropList = (OtherUserGameEntity_o *)operationItemListViewManager->fields.dropList,
          v7 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_1C32E6C(FriendOperationConfirmMenu_CallbackFunc_TypeInfo),
          FriendOperationConfirmMenu_CallbackFunc___ctor(
            v7,
            (Il2CppObject *)this,
            Method_FriendRootComponent_SelectedFriendCancelConfirm__,
            v8),
          !operationConfirmMenu) )
    {
      sub_1C32E7C(operationItemListViewManager);
    }
    FriendOperationConfirmMenu__Open(operationConfirmMenu, 4, dropList, v7, v9);
  }
}


void FriendRootComponent__SelectFriendOfferConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  int32_t state; // w8
  UserGameEntity_o *v4; // x20
  DataManager_o *Instance; // x0
  const MethodInfo *v6; // x1
  struct OtherUserGameEntity_o *selectFriendEntity; // x20
  struct FriendOperationConfirmMenu_o *v8; // x21
  FriendOperationConfirmMenu_CallbackFunc_o *v9; // x22
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x4
  FriendOperationConfirmMenu_o *v12; // x0
  OtherUserGameEntity_o *v13; // x2
  UserGameEntity_o *SelfUserGame; // x20
  const MethodInfo *v15; // x2
  struct FriendOperationConfirmMenu_o *operationConfirmMenu; // x20
  OtherUserGameEntity_o *writeMasterDataThread; // x21
  const MethodInfo *v18; // x3
  FriendWarningDialog_o *friendWarningDialog; // x20
  FriendWarningDialog_CallbackFunc_o *v20; // x21

  if ( (byte_4C325EF & 1) == 0 )
  {
    sub_1C32C20(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo);
    sub_1C32C20(&FriendWarningDialog_CallbackFunc_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_TblFriendMaster___);
    sub_1C32C20(&Method_FriendRootComponent_EndMaxFriendWarningOfferConfirm__);
    sub_1C32C20(&Method_FriendRootComponent_SelectedFriendOfferConfirm__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C325EF = 1;
  }
  state = this->fields.state;
  if ( state == 4 )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_27;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_TblFriendMaster___);
    if ( !Instance )
      goto LABEL_27;
    Instance = (DataManager_o *)TblFriendMaster__GetList((TblFriendMaster_o *)Instance, 3, 0);
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
                                      v15);
        this->fields.state = 27;
        if ( Instance )
        {
          operationConfirmMenu = this->fields.operationConfirmMenu;
          writeMasterDataThread = (OtherUserGameEntity_o *)Instance->fields.writeMasterDataThread;
          v9 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_1C32E6C(FriendOperationConfirmMenu_CallbackFunc_TypeInfo);
          FriendOperationConfirmMenu_CallbackFunc___ctor(
            v9,
            (Il2CppObject *)this,
            Method_FriendRootComponent_SelectedFriendOfferConfirm__,
            v18);
          if ( operationConfirmMenu )
          {
            v12 = operationConfirmMenu;
            v13 = writeMasterDataThread;
            goto LABEL_22;
          }
        }
      }
LABEL_27:
      sub_1C32E7C(Instance);
    }
LABEL_24:
    this->fields.state = 29;
    friendWarningDialog = this->fields.friendWarningDialog;
    v20 = (FriendWarningDialog_CallbackFunc_o *)sub_1C32E6C(FriendWarningDialog_CallbackFunc_TypeInfo);
    FriendWarningDialog_CallbackFunc___ctor(
      v20,
      (Il2CppObject *)this,
      Method_FriendRootComponent_EndMaxFriendWarningOfferConfirm__,
      0);
    if ( !friendWarningDialog )
      goto LABEL_27;
    FriendWarningDialog__Open(friendWarningDialog, 1, v20, 0);
    return;
  }
  if ( state != 23 )
    return;
  v4 = UserGameMaster__getSelfUserGame(0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_TblFriendMaster___);
  if ( !Instance )
    goto LABEL_27;
  Instance = (DataManager_o *)TblFriendMaster__GetList((TblFriendMaster_o *)Instance, 3, 0);
  if ( !Instance || !v4 )
    goto LABEL_27;
  if ( v4->fields.friendKeep <= SLODWORD(Instance->fields.m_CancellationTokenSource) )
    goto LABEL_24;
  selectFriendEntity = this->fields.selectFriendEntity;
  if ( selectFriendEntity )
  {
    this->fields.state = 27;
    v8 = this->fields.operationConfirmMenu;
    v9 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_1C32E6C(FriendOperationConfirmMenu_CallbackFunc_TypeInfo);
    FriendOperationConfirmMenu_CallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_FriendRootComponent_SelectedFriendOfferConfirm__,
      v10);
    if ( v8 )
    {
      v12 = v8;
      v13 = selectFriendEntity;
LABEL_22:
      FriendOperationConfirmMenu__Open(v12, 1, v13, v9, v11);
      return;
    }
    goto LABEL_27;
  }
  FriendRootComponent__StartSearchInput(this, v6);
}


void FriendRootComponent__SelectFriendRejectConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x20
  OtherUserGameEntity_o *dropList; // x21
  FriendOperationConfirmMenu_CallbackFunc_o *v7; // x22
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x4

  if ( (byte_4C325F4 & 1) == 0 )
  {
    sub_1C32C20(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo);
    sub_1C32C20(&Method_FriendRootComponent_SelectedFriendRejectConfirm__);
    byte_4C325F4 = 1;
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
          dropList = (OtherUserGameEntity_o *)operationItemListViewManager->fields.dropList,
          v7 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_1C32E6C(FriendOperationConfirmMenu_CallbackFunc_TypeInfo),
          FriendOperationConfirmMenu_CallbackFunc___ctor(
            v7,
            (Il2CppObject *)this,
            Method_FriendRootComponent_SelectedFriendRejectConfirm__,
            v8),
          !operationConfirmMenu) )
    {
      sub_1C32E7C(operationItemListViewManager);
    }
    FriendOperationConfirmMenu__Open(operationConfirmMenu, 3, dropList, v7, v9);
  }
}


void FriendRootComponent__SelectFriendRemoveConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x20
  OtherUserGameEntity_o *dropList; // x21
  FriendOperationConfirmMenu_CallbackFunc_o *v7; // x22
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x4

  if ( (byte_4C325FA & 1) == 0 )
  {
    sub_1C32C20(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo);
    sub_1C32C20(&Method_FriendRootComponent_SelectedFriendRemoveConfirm__);
    byte_4C325FA = 1;
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
          dropList = (OtherUserGameEntity_o *)operationItemListViewManager->fields.dropList,
          v7 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_1C32E6C(FriendOperationConfirmMenu_CallbackFunc_TypeInfo),
          FriendOperationConfirmMenu_CallbackFunc___ctor(
            v7,
            (Il2CppObject *)this,
            Method_FriendRootComponent_SelectedFriendRemoveConfirm__,
            v8),
          !operationConfirmMenu) )
    {
      sub_1C32E7C(operationItemListViewManager);
    }
    FriendOperationConfirmMenu__Open(operationConfirmMenu, 5, dropList, v7, v9);
  }
}


void FriendRootComponent__SelectSearchFriend(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_4C325E8 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_5432/*"END_ACTION"*/);
    byte_4C325E8 = 1;
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
      sub_1C32E7C(0);
    PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_5432/*"END_ACTION"*/, 0);
  }
}


void FriendRootComponent__SelectShowFriend(FriendRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *operationItemListViewManager; // x0
  const MethodInfo *v4; // x3
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  struct FriendOperationItemListViewManager_o *v6; // x20
  System_Action_o *v7; // x21
  const MethodInfo *v8; // x2

  if ( (byte_4C325E0 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_FriendRootComponent_OnMoveEnd__);
    sub_1C32C20(&StringLiteral_5432/*"END_ACTION"*/);
    byte_4C325E0 = 1;
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
                                                                  0);
      if ( operationItemListViewManager )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)operationItemListViewManager, 1, 0);
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
              v4);
            v6 = this->fields.operationItemListViewManager;
            v7 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
            System_Action___ctor(v7, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0);
            if ( v6 )
            {
              v6->fields.callbackFunc2 = v7;
              sub_1C32BC4(&v6->fields.callbackFunc2, v7);
              FriendOperationItemListViewManager__SetMode_32678244(v6, 1, v8);
              return;
            }
          }
        }
      }
    }
LABEL_12:
    sub_1C32E7C(operationItemListViewManager);
  }
  operationItemListViewManager = (UnityEngine_Component_o *)this->fields.myFSM;
  if ( !operationItemListViewManager )
    goto LABEL_12;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)operationItemListViewManager, (System_String_o *)StringLiteral_5432/*"END_ACTION"*/, 0);
}


void FriendRootComponent__SelectShowOffer(FriendRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *operationItemListViewManager; // x0
  const MethodInfo *v4; // x3
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  struct FriendOperationItemListViewManager_o *v6; // x20
  System_Action_o *v7; // x21
  const MethodInfo *v8; // x2

  if ( (byte_4C325E2 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_FriendRootComponent_OnMoveEnd__);
    byte_4C325E2 = 1;
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
                                                                0);
    if ( !operationItemListViewManager
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)operationItemListViewManager, 1, 0),
          (classButtonControl = this->fields.classButtonControl) == 0)
      || (operationItemListViewManager = (UnityEngine_Component_o *)this->fields.operationItemListViewManager) == 0
      || (FriendOperationItemListViewManager__CreateList(
            (FriendOperationItemListViewManager_o *)operationItemListViewManager,
            1,
            classButtonControl->fields.currentCursor,
            v4),
          v6 = this->fields.operationItemListViewManager,
          v7 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo),
          System_Action___ctor(v7, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0),
          !v6) )
    {
LABEL_11:
      sub_1C32E7C(operationItemListViewManager);
    }
    v6->fields.callbackFunc2 = v7;
    sub_1C32BC4(&v6->fields.callbackFunc2, v7);
    FriendOperationItemListViewManager__SetMode_32678244(v6, 1, v8);
  }
}


void FriendRootComponent__SelectShowOffered(FriendRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *operationItemListViewManager; // x0
  const MethodInfo *v4; // x3
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  struct FriendOperationItemListViewManager_o *v6; // x20
  System_Action_o *v7; // x21
  const MethodInfo *v8; // x2

  if ( (byte_4C325E4 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_FriendRootComponent_OnMoveEnd__);
    sub_1C32C20(&StringLiteral_5432/*"END_ACTION"*/);
    byte_4C325E4 = 1;
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
                                                                  0);
      if ( operationItemListViewManager )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)operationItemListViewManager, 1, 0);
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
              v4);
            v6 = this->fields.operationItemListViewManager;
            v7 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
            System_Action___ctor(v7, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0);
            if ( v6 )
            {
              v6->fields.callbackFunc2 = v7;
              sub_1C32BC4(&v6->fields.callbackFunc2, v7);
              FriendOperationItemListViewManager__SetMode_32678244(v6, 1, v8);
              return;
            }
          }
        }
      }
    }
LABEL_12:
    sub_1C32E7C(operationItemListViewManager);
  }
  operationItemListViewManager = (UnityEngine_Component_o *)this->fields.myFSM;
  if ( !operationItemListViewManager )
    goto LABEL_12;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)operationItemListViewManager, (System_String_o *)StringLiteral_5432/*"END_ACTION"*/, 0);
}


void FriendRootComponent__SelectShowSearch(FriendRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *operationItemListViewManager; // x0
  struct FriendOperationItemListViewManager_o *v4; // x20
  struct System_String_o *selectFriendCode; // x1
  const MethodInfo *v6; // x3
  FriendSearchMenu_o *friendSearchMenu; // x20
  System_Action_o *v8; // x21
  struct FriendOperationItemListViewManager_o *v9; // x20
  System_Action_o *v10; // x21
  const MethodInfo *v11; // x2

  if ( (byte_4C325E6 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_FriendRootComponent_OnMoveEnd__);
    byte_4C325E6 = 1;
  }
  if ( this->fields.state == 23 )
  {
    operationItemListViewManager = (UnityEngine_Component_o *)this->fields.operationItemListViewManager;
    if ( !operationItemListViewManager )
      goto LABEL_11;
    operationItemListViewManager = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                operationItemListViewManager,
                                                                0);
    if ( !operationItemListViewManager )
      goto LABEL_11;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)operationItemListViewManager, 1, 0);
    v4 = this->fields.operationItemListViewManager;
    if ( !v4 )
      goto LABEL_11;
    selectFriendCode = this->fields.selectFriendCode;
    v4->fields.friendCode = selectFriendCode;
    sub_1C32BC4(&v4->fields.friendCode, selectFriendCode);
    FriendOperationItemListViewManager__CreateList(v4, 0, 0, v6);
    this->fields.state = 17;
    friendSearchMenu = this->fields.friendSearchMenu;
    v8 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0);
    if ( !friendSearchMenu
      || (FriendSearchMenu__Close_32730480(friendSearchMenu, v8, 0),
          v9 = this->fields.operationItemListViewManager,
          v10 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo),
          System_Action___ctor(v10, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0),
          !v9) )
    {
LABEL_11:
      sub_1C32E7C(operationItemListViewManager);
    }
    v9->fields.callbackFunc2 = v10;
    sub_1C32BC4(&v9->fields.callbackFunc2, v10);
    FriendOperationItemListViewManager__SetMode_32678244(v9, 1, v11);
  }
}


void FriendRootComponent__SelectShowServant(
        FriendRootComponent_o *this,
        ServantLeaderInfo_o *servantLeaderInfo,
        const MethodInfo *method)
{
  unsigned int state; // w23
  Il2CppObject *Instance; // x21
  ServantStatusDialog_EndDelegate_o *v7; // x22
  __int64 v8; // x0
  int32_t v9; // w1

  if ( (byte_4C325EC & 1) == 0 )
  {
    sub_1C32C20(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C32C20(&Method_FriendRootComponent_EndShowServant__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C325EC = 1;
  }
  state = this->fields.state;
  if ( state <= 0x13 && ((1 << state) & 0x84210) != 0 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v7 = (ServantStatusDialog_EndDelegate_o *)sub_1C32E6C(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(v7, (Il2CppObject *)this, Method_FriendRootComponent_EndShowServant__, 0);
    if ( !Instance )
      sub_1C32E7C(v8);
    if ( state == 4 )
      v9 = 4;
    else
      v9 = 5;
    CommonUI__OpenServantStatusDialog_31203144((CommonUI_o *)Instance, v9, servantLeaderInfo, v7, 0);
  }
}


void FriendRootComponent__SelectShowServantEquip(
        FriendRootComponent_o *this,
        EquipTargetInfo_o *equipInfo,
        int32_t statusKind,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x22
  ServantStatusDialog_EndDelegate_o *v8; // x23
  __int64 v9; // x0

  if ( (byte_4C32616 & 1) == 0 )
  {
    sub_1C32C20(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C32C20(&Method_FriendRootComponent_EndShowServantEquip__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C32616 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (ServantStatusDialog_EndDelegate_o *)sub_1C32E6C(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(v8, (Il2CppObject *)this, Method_FriendRootComponent_EndShowServantEquip__, 0);
  if ( !Instance )
    sub_1C32E7C(v9);
  CommonUI__OpenServantEquipStatusDialog_31206252((CommonUI_o *)Instance, statusKind, equipInfo, v8, 0, 0);
}


void FriendRootComponent__SelectedFollowOfferConfirm(
        FriendRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0
  __int64 *v6; // x8

  if ( (byte_4C32627 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_8642/*"MENU_DECIDE"*/);
    sub_1C32C20(&StringLiteral_8641/*"MENU_CANCEL"*/);
    byte_4C32627 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1C32E7C(0);
  v6 = &StringLiteral_8642/*"MENU_DECIDE"*/;
  if ( !isDecide )
    v6 = &StringLiteral_8641/*"MENU_CANCEL"*/;
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)*v6, 0);
}


void FriendRootComponent__SelectedFollowRemoveConfirm(
        FriendRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0
  __int64 *v6; // x8

  if ( (byte_4C32621 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_8642/*"MENU_DECIDE"*/);
    sub_1C32C20(&StringLiteral_8641/*"MENU_CANCEL"*/);
    byte_4C32621 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1C32E7C(0);
  v6 = &StringLiteral_8642/*"MENU_DECIDE"*/;
  if ( !isDecide )
    v6 = &StringLiteral_8641/*"MENU_CANCEL"*/;
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)*v6, 0);
}


void FriendRootComponent__SelectedFriendAcceptConfirm(
        FriendRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0
  __int64 *v6; // x8

  if ( (byte_4C3261D & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_8642/*"MENU_DECIDE"*/);
    sub_1C32C20(&StringLiteral_8641/*"MENU_CANCEL"*/);
    byte_4C3261D = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1C32E7C(0);
  v6 = &StringLiteral_8642/*"MENU_DECIDE"*/;
  if ( !isDecide )
    v6 = &StringLiteral_8641/*"MENU_CANCEL"*/;
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)*v6, 0);
}


void FriendRootComponent__SelectedFriendCancelConfirm(
        FriendRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0
  __int64 *v6; // x8

  if ( (byte_4C3261F & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_8642/*"MENU_DECIDE"*/);
    sub_1C32C20(&StringLiteral_8641/*"MENU_CANCEL"*/);
    byte_4C3261F = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1C32E7C(0);
  v6 = &StringLiteral_8642/*"MENU_DECIDE"*/;
  if ( !isDecide )
    v6 = &StringLiteral_8641/*"MENU_CANCEL"*/;
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)*v6, 0);
}


void FriendRootComponent__SelectedFriendOfferConfirm(
        FriendRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0
  __int64 *v6; // x8

  if ( (byte_4C3261C & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_8642/*"MENU_DECIDE"*/);
    sub_1C32C20(&StringLiteral_8641/*"MENU_CANCEL"*/);
    byte_4C3261C = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1C32E7C(0);
  v6 = &StringLiteral_8642/*"MENU_DECIDE"*/;
  if ( !isDecide )
    v6 = &StringLiteral_8641/*"MENU_CANCEL"*/;
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)*v6, 0);
}


void FriendRootComponent__SelectedFriendRejectConfirm(
        FriendRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0
  __int64 *v6; // x8

  if ( (byte_4C3261E & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_8642/*"MENU_DECIDE"*/);
    sub_1C32C20(&StringLiteral_8641/*"MENU_CANCEL"*/);
    byte_4C3261E = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1C32E7C(0);
  v6 = &StringLiteral_8642/*"MENU_DECIDE"*/;
  if ( !isDecide )
    v6 = &StringLiteral_8641/*"MENU_CANCEL"*/;
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)*v6, 0);
}


void FriendRootComponent__SelectedFriendRemoveConfirm(
        FriendRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0
  __int64 *v6; // x8

  if ( (byte_4C32620 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_8642/*"MENU_DECIDE"*/);
    sub_1C32C20(&StringLiteral_8641/*"MENU_CANCEL"*/);
    byte_4C32620 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1C32E7C(0);
  v6 = &StringLiteral_8642/*"MENU_DECIDE"*/;
  if ( !isDecide )
    v6 = &StringLiteral_8641/*"MENU_CANCEL"*/;
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)*v6, 0);
}


// local variable allocation has failed, the output may be wrong!
void FriendRootComponent__SetActiveModeKindButtons(
        FriendRootComponent_o *this,
        bool isActive,
        const MethodInfo *method)
{
  bool v3; // w20
  UnityEngine_GameObject_o *modeButtonParent; // x0
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Vector3_o DisplayPositionModeKindButtons; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v11; // 0:s1.4,4:s2.4,8:s3.4

  v3 = isActive;
  if ( this->fields.isActiveModeKindButtons != isActive )
  {
    if ( isActive )
      DisplayPositionModeKindButtons = FriendRootComponent__GetDisplayPositionModeKindButtons(
                                         this,
                                         (const MethodInfo *)isActive);
    else
      DisplayPositionModeKindButtons = FriendRootComponent__GetHidePositionModeKindButtons(
                                         this,
                                         (const MethodInfo *)isActive);
    modeButtonParent = this->fields.modeButtonParent;
    x = DisplayPositionModeKindButtons.fields.x;
    y = DisplayPositionModeKindButtons.fields.y;
    z = DisplayPositionModeKindButtons.fields.z;
    if ( !modeButtonParent
      || (gameObject = UnityEngine_GameObject__get_gameObject(modeButtonParent, 0),
          v11.fields.x = x,
          v11.fields.y = y,
          v11.fields.z = z,
          (modeButtonParent = (UnityEngine_GameObject_o *)TweenPosition__Begin(gameObject, 0.2, v11, 0)) == 0) )
    {
      sub_1C32E7C(modeButtonParent);
    }
    LODWORD(modeButtonParent[1].monitor) = 3;
    this->fields.isActiveModeKindButtons = v3;
  }
}


void FriendRootComponent__ShowSearchResult(FriendRootComponent_o *this, const MethodInfo *method)
{
  FriendRootComponent_o *v2; // x19
  FriendSearchResultMenu_o *friendSearchResultMenu; // x20
  System_Action_o *v4; // x21
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  int32_t currentCursor; // w22
  FriendSearchResultMenu_o *v7; // x20
  OtherUserGameEntity_o *selectFriendEntity; // x21
  FriendSearchResultMenu_CallbackFunc_o *v9; // x23
  FriendSearchMenu_o *friendSearchMenu; // x20
  FriendSearchMenu_CallbackFunc_o *v11; // x21

  v2 = this;
  if ( (byte_4C325EA & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&FriendSearchResultMenu_CallbackFunc_TypeInfo);
    sub_1C32C20(&FriendSearchMenu_CallbackFunc_TypeInfo);
    sub_1C32C20(&Method_FriendRootComponent_OnSelectOffer__);
    sub_1C32C20(&Method_FriendRootComponent_OnSelectSearchFriend__);
    sub_1C32C20(&Method_FriendRootComponent_ShowSearchResult__);
    this = (FriendRootComponent_o *)sub_1C32C20(&StringLiteral_5432/*"END_ACTION"*/);
    byte_4C325EA = 1;
  }
  if ( v2->fields.state == 23 )
  {
    friendSearchResultMenu = v2->fields.friendSearchResultMenu;
    if ( !friendSearchResultMenu )
      goto LABEL_14;
    if ( friendSearchResultMenu->fields.isOpen )
    {
      v4 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
      System_Action___ctor(v4, (Il2CppObject *)v2, Method_FriendRootComponent_ShowSearchResult__, 0);
      FriendSearchResultMenu__Close_32734884(friendSearchResultMenu, v4, 0);
      return;
    }
    this = (FriendRootComponent_o *)UnityEngine_Component__get_gameObject(
                                      (UnityEngine_Component_o *)v2->fields.friendSearchResultMenu,
                                      0);
    if ( !this )
      goto LABEL_14;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    classButtonControl = v2->fields.classButtonControl;
    if ( !classButtonControl )
      goto LABEL_14;
    currentCursor = classButtonControl->fields.currentCursor;
    v7 = v2->fields.friendSearchResultMenu;
    selectFriendEntity = v2->fields.selectFriendEntity;
    v9 = (FriendSearchResultMenu_CallbackFunc_o *)sub_1C32E6C(FriendSearchResultMenu_CallbackFunc_TypeInfo);
    FriendSearchResultMenu_CallbackFunc___ctor(v9, (Il2CppObject *)v2, Method_FriendRootComponent_OnSelectOffer__, 0);
    if ( !v7
      || (FriendSearchResultMenu__Open(v7, selectFriendEntity, currentCursor, v9, 0),
          friendSearchMenu = v2->fields.friendSearchMenu,
          v11 = (FriendSearchMenu_CallbackFunc_o *)sub_1C32E6C(FriendSearchMenu_CallbackFunc_TypeInfo),
          FriendSearchMenu_CallbackFunc___ctor(
            v11,
            (Il2CppObject *)v2,
            Method_FriendRootComponent_OnSelectSearchFriend__,
            0),
          !friendSearchMenu)
      || (FriendSearchMenu__Open(friendSearchMenu, v11, 0, 0), (this = (FriendRootComponent_o *)v2->fields.myFSM) == 0) )
    {
LABEL_14:
      sub_1C32E7C(this);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_5432/*"END_ACTION"*/, 0);
    EventTutorialMaster__CheckTutorial(-1, 50, 0, 0, 0, 0, 0, 0);
  }
}


void FriendRootComponent__StartSearchInput(FriendRootComponent_o *this, const MethodInfo *method)
{
  FriendRootComponent_o *v2; // x19
  FriendSearchResultMenu_o *friendSearchResultMenu; // x20
  OtherUserGameEntity_o *selectFriendEntity; // x21
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  int32_t currentCursor; // w22
  FriendSearchResultMenu_CallbackFunc_o *v7; // x23
  FriendSearchMenu_o *friendSearchMenu; // x20
  FriendSearchMenu_CallbackFunc_o *v9; // x21

  v2 = this;
  if ( (byte_4C325EB & 1) == 0 )
  {
    sub_1C32C20(&FriendSearchResultMenu_CallbackFunc_TypeInfo);
    sub_1C32C20(&FriendSearchMenu_CallbackFunc_TypeInfo);
    sub_1C32C20(&Method_FriendRootComponent_OnSelectOffer__);
    this = (FriendRootComponent_o *)sub_1C32C20(&Method_FriendRootComponent_OnSelectSearchFriend__);
    byte_4C325EB = 1;
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
      v7 = (FriendSearchResultMenu_CallbackFunc_o *)sub_1C32E6C(FriendSearchResultMenu_CallbackFunc_TypeInfo);
      FriendSearchResultMenu_CallbackFunc___ctor(v7, (Il2CppObject *)v2, Method_FriendRootComponent_OnSelectOffer__, 0);
      FriendSearchResultMenu__Open(friendSearchResultMenu, selectFriendEntity, currentCursor, v7, 0);
    }
    else
    {
      FriendSearchResultMenu__Close(v2->fields.friendSearchResultMenu, 0);
    }
  }
  friendSearchMenu = v2->fields.friendSearchMenu;
  v9 = (FriendSearchMenu_CallbackFunc_o *)sub_1C32E6C(FriendSearchMenu_CallbackFunc_TypeInfo);
  FriendSearchMenu_CallbackFunc___ctor(v9, (Il2CppObject *)v2, Method_FriendRootComponent_OnSelectSearchFriend__, 0);
  if ( !friendSearchMenu )
LABEL_11:
    sub_1C32E7C(this);
  FriendSearchMenu__Open(friendSearchMenu, v9, 0, 0);
}


void FriendRootComponent___OnClickBack_b__100_0(
        FriendRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x19
  System_Action_object__o *v5; // x20
  const MethodInfo *v6; // x2

  v4 = (Il2CppObject *)this;
  if ( (byte_4C32637 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_string__TypeInfo);
    sub_1C32C20(&Method_FriendRootComponent__OnClickBack_b__100_1__);
    this = (FriendRootComponent_o *)sub_1C32C20(&StringLiteral_22379/*"ok"*/);
    byte_4C32637 = 1;
  }
  if ( !result )
    sub_1C32E7C(this);
  if ( System_String__Equals_63553848(result, (System_String_o *)StringLiteral_22379/*"ok"*/, 0) )
  {
    v5 = (System_Action_object__o *)sub_1C32E6C(System_Action_string__TypeInfo);
    System_Action_object____ctor(v5, v4, Method_FriendRootComponent__OnClickBack_b__100_1__, 0);
    FriendRootComponent__FriendLockRequst((FriendRootComponent_o *)v4, (System_Action_string__o *)v5, v6);
  }
}


void FriendRootComponent___OnClickBack_b__100_1(
        FriendRootComponent_o *this,
        System_String_o *res,
        const MethodInfo *method)
{
  FriendRootComponent_o *v4; // x19

  v4 = this;
  if ( (byte_4C32638 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_22379/*"ok"*/);
    this = (FriendRootComponent_o *)sub_1C32C20(&StringLiteral_3437/*"CLICK_BACK"*/);
    byte_4C32638 = 1;
  }
  if ( !res )
    goto LABEL_9;
  if ( System_String__Equals_63553848(res, (System_String_o *)StringLiteral_22379/*"ok"*/, 0) )
  {
    this = (FriendRootComponent_o *)v4->fields.friendSearchMenu;
    if ( this )
    {
      FriendSearchMenu__BlockInput((FriendSearchMenu_o *)this, 0);
      this = (FriendRootComponent_o *)v4->fields.myFSM;
      if ( this )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3437/*"CLICK_BACK"*/, 0);
        return;
      }
    }
LABEL_9:
    sub_1C32E7C(this);
  }
}


void FriendRootComponent___OnClickModeUserDetail_b__102_0(
        FriendRootComponent_o *this,
        System_String_o *res,
        const MethodInfo *method)
{
  FriendRootComponent_o *v4; // x19
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x1

  v4 = this;
  if ( (byte_4C3263B & 1) == 0 )
  {
    sub_1C32C20(&Method_FriendRootComponent__OnClickModeUserDetail_b__102_0__);
    this = (FriendRootComponent_o *)sub_1C32C20(&StringLiteral_22379/*"ok"*/);
    byte_4C3263B = 1;
  }
  if ( !res )
    sub_1C32E7C(this);
  if ( System_String__Equals_63553848(res, (System_String_o *)StringLiteral_22379/*"ok"*/, 0) )
  {
    v5 = Method_FriendRootComponent__OnClickModeUserDetail_b__102_0__;
    if ( (*((_BYTE *)Method_FriendRootComponent__OnClickModeUserDetail_b__102_0__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C32C38(Method_FriendRootComponent__OnClickModeUserDetail_b__102_0__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C32C04(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
    v4->fields.currentModeKind = 0;
    FriendRootComponent__RefreshInfo(v4, v7);
  }
}


void FriendRootComponent___OnClickTabFriend_b__109_0(
        FriendRootComponent_o *this,
        System_String_o *res,
        const MethodInfo *method)
{
  FriendRootComponent_o *v4; // x19
  int state; // w8
  ClassButtonControlComponent_o *v6; // x20
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  FriendRootComponent_o *v9; // x0
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x1
  struct ClassButtonControlComponent_o *classButtonControl; // x8

  v4 = this;
  if ( (byte_4C3263C & 1) == 0 )
  {
    sub_1C32C20(&Method_FriendRootComponent__OnClickTabFriend_b__109_0__);
    sub_1C32C20(&StringLiteral_22379/*"ok"*/);
    this = (FriendRootComponent_o *)sub_1C32C20(&StringLiteral_3490/*"CLICK_TAB"*/);
    byte_4C3263C = 1;
  }
  if ( !res )
    goto LABEL_22;
  if ( !System_String__Equals_63553848(res, (System_String_o *)StringLiteral_22379/*"ok"*/, 0) )
    return;
  state = v4->fields.state;
  if ( state <= 9 )
  {
    if ( state != 4 && state != 9 )
      return;
LABEL_16:
    v7 = Method_FriendRootComponent__OnClickTabFriend_b__109_0__;
    if ( (*((_BYTE *)Method_FriendRootComponent__OnClickTabFriend_b__109_0__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1C32C38(Method_FriendRootComponent__OnClickTabFriend_b__109_0__);
    v8 = (System_Reflection_MethodBase_o *)sub_1C32C04(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0);
    FriendRootComponent__set_tabKind(v9, 0, v10);
    FriendRootComponent__RefreshTab(v4, v11);
    classButtonControl = v4->fields.classButtonControl;
    if ( classButtonControl )
    {
      classButtonControl->fields.updateEnable = 0;
      this = (FriendRootComponent_o *)v4->fields.myFSM;
      if ( this )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3490/*"CLICK_TAB"*/, 0);
        return;
      }
    }
LABEL_22:
    sub_1C32E7C(this);
  }
  if ( state == 14 || state == 19 )
    goto LABEL_16;
  if ( state == 23 )
  {
    this = (FriendRootComponent_o *)v4->fields.friendSearchResultMenu;
    if ( !this )
      goto LABEL_22;
    if ( FriendSearchResultMenu__getChangeCursorPos((FriendSearchResultMenu_o *)this, 0) != -1 )
    {
      this = (FriendRootComponent_o *)v4->fields.friendSearchResultMenu;
      if ( !this )
        goto LABEL_22;
      v6 = v4->fields.classButtonControl;
      this = (FriendRootComponent_o *)FriendSearchResultMenu__get_GetCursorPos((FriendSearchResultMenu_o *)this, 0);
      if ( !v6 )
        goto LABEL_22;
      ClassButtonControlComponent__setCursor(v6, (int32_t)this, 0);
    }
    goto LABEL_16;
  }
}


void FriendRootComponent___OnClickTabOffered_b__110_0(
        FriendRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x19
  System_Action_object__o *v5; // x20
  const MethodInfo *v6; // x2

  v4 = (Il2CppObject *)this;
  if ( (byte_4C3263D & 1) == 0 )
  {
    sub_1C32C20(&System_Action_string__TypeInfo);
    sub_1C32C20(&Method_FriendRootComponent__OnClickTabOffered_b__110_1__);
    this = (FriendRootComponent_o *)sub_1C32C20(&StringLiteral_22379/*"ok"*/);
    byte_4C3263D = 1;
  }
  if ( !result )
    sub_1C32E7C(this);
  if ( System_String__Equals_63553848(result, (System_String_o *)StringLiteral_22379/*"ok"*/, 0) )
  {
    v5 = (System_Action_object__o *)sub_1C32E6C(System_Action_string__TypeInfo);
    System_Action_object____ctor(v5, v4, (intptr_t)Method_FriendRootComponent__OnClickTabOffered_b__110_1__, 0);
    FriendRootComponent__FriendLockRequst((FriendRootComponent_o *)v4, (System_Action_string__o *)v5, v6);
  }
}


void FriendRootComponent___OnClickTabOffered_b__110_1(
        FriendRootComponent_o *this,
        System_String_o *res,
        const MethodInfo *method)
{
  FriendRootComponent_o *v4; // x19
  int state; // w8
  ClassButtonControlComponent_o *v6; // x20
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  FriendRootComponent_o *v9; // x0
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x1
  struct ClassButtonControlComponent_o *classButtonControl; // x8

  v4 = this;
  if ( (byte_4C3263E & 1) == 0 )
  {
    sub_1C32C20(&Method_FriendRootComponent__OnClickTabOffered_b__110_1__);
    sub_1C32C20(&StringLiteral_22379/*"ok"*/);
    this = (FriendRootComponent_o *)sub_1C32C20(&StringLiteral_3490/*"CLICK_TAB"*/);
    byte_4C3263E = 1;
  }
  if ( !res )
    goto LABEL_22;
  if ( !System_String__Equals_63553848(res, (System_String_o *)StringLiteral_22379/*"ok"*/, 0) )
    return;
  state = v4->fields.state;
  if ( state <= 9 )
  {
    if ( state != 4 && state != 9 )
      return;
LABEL_16:
    v7 = Method_FriendRootComponent__OnClickTabOffered_b__110_1__;
    if ( (*((_BYTE *)Method_FriendRootComponent__OnClickTabOffered_b__110_1__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1C32C38(Method_FriendRootComponent__OnClickTabOffered_b__110_1__);
    v8 = (System_Reflection_MethodBase_o *)sub_1C32C04(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0);
    FriendRootComponent__set_tabKind(v9, 1, v10);
    FriendRootComponent__RefreshTab(v4, v11);
    classButtonControl = v4->fields.classButtonControl;
    if ( classButtonControl )
    {
      classButtonControl->fields.updateEnable = 0;
      this = (FriendRootComponent_o *)v4->fields.myFSM;
      if ( this )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3490/*"CLICK_TAB"*/, 0);
        return;
      }
    }
LABEL_22:
    sub_1C32E7C(this);
  }
  if ( state == 14 || state == 19 )
    goto LABEL_16;
  if ( state == 23 )
  {
    this = (FriendRootComponent_o *)v4->fields.friendSearchResultMenu;
    if ( !this )
      goto LABEL_22;
    if ( FriendSearchResultMenu__getChangeCursorPos((FriendSearchResultMenu_o *)this, 0) != -1 )
    {
      this = (FriendRootComponent_o *)v4->fields.friendSearchResultMenu;
      if ( !this )
        goto LABEL_22;
      v6 = v4->fields.classButtonControl;
      this = (FriendRootComponent_o *)FriendSearchResultMenu__get_GetCursorPos((FriendSearchResultMenu_o *)this, 0);
      if ( !v6 )
        goto LABEL_22;
      ClassButtonControlComponent__setCursor(v6, (int32_t)this, 0);
    }
    goto LABEL_16;
  }
}


void FriendRootComponent___OnClickTabSearch_b__111_0(
        FriendRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x19
  System_Action_object__o *v5; // x20
  const MethodInfo *v6; // x2

  v4 = (Il2CppObject *)this;
  if ( (byte_4C3263F & 1) == 0 )
  {
    sub_1C32C20(&System_Action_string__TypeInfo);
    sub_1C32C20(&Method_FriendRootComponent__OnClickTabSearch_b__111_1__);
    this = (FriendRootComponent_o *)sub_1C32C20(&StringLiteral_22379/*"ok"*/);
    byte_4C3263F = 1;
  }
  if ( !result )
    sub_1C32E7C(this);
  if ( System_String__Equals_63553848(result, (System_String_o *)StringLiteral_22379/*"ok"*/, 0) )
  {
    v5 = (System_Action_object__o *)sub_1C32E6C(System_Action_string__TypeInfo);
    System_Action_object____ctor(v5, v4, (intptr_t)Method_FriendRootComponent__OnClickTabSearch_b__111_1__, 0);
    FriendRootComponent__FriendLockRequst((FriendRootComponent_o *)v4, (System_Action_string__o *)v5, v6);
  }
}


void FriendRootComponent___OnClickTabSearch_b__111_1(
        FriendRootComponent_o *this,
        System_String_o *res,
        const MethodInfo *method)
{
  FriendRootComponent_o *v4; // x19
  int state; // w8
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  FriendRootComponent_o *v8; // x0
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x1
  struct ClassButtonControlComponent_o *classButtonControl; // x8

  v4 = this;
  if ( (byte_4C32640 & 1) == 0 )
  {
    sub_1C32C20(&Method_FriendRootComponent__OnClickTabSearch_b__111_1__);
    sub_1C32C20(&StringLiteral_22379/*"ok"*/);
    this = (FriendRootComponent_o *)sub_1C32C20(&StringLiteral_3490/*"CLICK_TAB"*/);
    byte_4C32640 = 1;
  }
  if ( !res )
    goto LABEL_17;
  if ( !System_String__Equals_63553848(res, (System_String_o *)StringLiteral_22379/*"ok"*/, 0) )
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
    v6 = Method_FriendRootComponent__OnClickTabSearch_b__111_1__;
    if ( (*((_BYTE *)Method_FriendRootComponent__OnClickTabSearch_b__111_1__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1C32C38(Method_FriendRootComponent__OnClickTabSearch_b__111_1__);
    v7 = (System_Reflection_MethodBase_o *)sub_1C32C04(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0);
    FriendRootComponent__set_tabKind(v8, 2, v9);
    FriendRootComponent__RefreshTab(v4, v10);
    classButtonControl = v4->fields.classButtonControl;
    if ( classButtonControl )
    {
      classButtonControl->fields.updateEnable = 0;
      this = (FriendRootComponent_o *)v4->fields.myFSM;
      if ( this )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3490/*"CLICK_TAB"*/, 0);
        return;
      }
    }
LABEL_17:
    sub_1C32E7C(this);
  }
}


void FriendRootComponent___RequestFollowRemove_b__143_0(
        FriendRootComponent_o *this,
        System_String_o *res,
        const MethodInfo *method)
{
  FriendRootComponent_o *v4; // x19
  const MethodInfo *v5; // x2
  FriendOperationItemListViewItem_o *Item; // x0
  struct OtherUserGameEntity_o *otherUserGameEntity; // x21
  NetworkManager_ResultCallbackFunc_o *v8; // x20

  v4 = this;
  if ( (byte_4C32641 & 1) == 0 )
  {
    sub_1C32C20(&Method_FriendRootComponent_EndRequestFollowRemove__);
    sub_1C32C20(&Method_NetworkManager_getRequest_FollowdRemoveRequest___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&StringLiteral_22379/*"ok"*/);
    this = (FriendRootComponent_o *)sub_1C32C20(&StringLiteral_11081/*"REQUEST_NG"*/);
    byte_4C32641 = 1;
  }
  if ( !res )
    goto LABEL_15;
  if ( System_String__Equals_63553848(res, (System_String_o *)StringLiteral_22379/*"ok"*/, 0) )
  {
    this = (FriendRootComponent_o *)v4->fields.operationItemListViewManager;
    if ( !this )
      goto LABEL_15;
    Item = FriendOperationItemListViewManager__GetItem(
             (FriendOperationItemListViewManager_o *)this,
             v4->fields.selectItemNum,
             v5);
    if ( Item )
    {
      otherUserGameEntity = Item->fields.otherUserGameEntity;
      if ( otherUserGameEntity )
      {
        this = (FriendRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( this )
        {
          CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)this, 0, 0);
          v8 = (NetworkManager_ResultCallbackFunc_o *)sub_1C32E6C(NetworkManager_ResultCallbackFunc_TypeInfo);
          NetworkManager_ResultCallbackFunc___ctor(
            v8,
            (Il2CppObject *)v4,
            Method_FriendRootComponent_EndRequestFollowRemove__,
            0);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          this = (FriendRootComponent_o *)NetworkManager__getRequest_object_(
                                            v8,
                                            (const MethodInfo_3168488 *)Method_NetworkManager_getRequest_FollowdRemoveRequest___);
          if ( this )
          {
            FollowdRemoveRequest__beginRequest((FollowdRemoveRequest_o *)this, otherUserGameEntity->fields.userId, 0);
            return;
          }
        }
LABEL_15:
        sub_1C32E7C(this);
      }
    }
  }
  this = (FriendRootComponent_o *)v4->fields.myFSM;
  if ( !this )
    goto LABEL_15;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11081/*"REQUEST_NG"*/, 0);
}


void FriendRootComponent___RequestFriendOffer2_b__88_0(
        FriendRootComponent_o *this,
        System_String_o *res,
        const MethodInfo *method)
{
  FriendRootComponent_o *v4; // x19
  const MethodInfo *v5; // x2
  FriendOperationItemListViewItem_o *Item; // x0
  struct OtherUserGameEntity_o *otherUserGameEntity; // x21
  NetworkManager_ResultCallbackFunc_o *v8; // x20

  v4 = this;
  if ( (byte_4C32635 & 1) == 0 )
  {
    sub_1C32C20(&Method_FriendRootComponent_EndRequestFriend__);
    sub_1C32C20(&Method_NetworkManager_getRequest_FriendOfferRequest___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C32C20(&StringLiteral_22379/*"ok"*/);
    this = (FriendRootComponent_o *)sub_1C32C20(&StringLiteral_11081/*"REQUEST_NG"*/);
    byte_4C32635 = 1;
  }
  if ( !res )
    goto LABEL_14;
  if ( System_String__Equals_63553848(res, (System_String_o *)StringLiteral_22379/*"ok"*/, 0) )
  {
    this = (FriendRootComponent_o *)v4->fields.operationItemListViewManager;
    if ( !this )
      goto LABEL_14;
    Item = FriendOperationItemListViewManager__GetItem(
             (FriendOperationItemListViewManager_o *)this,
             v4->fields.selectItemNum,
             v5);
    if ( Item )
    {
      otherUserGameEntity = Item->fields.otherUserGameEntity;
      if ( otherUserGameEntity )
      {
        v8 = (NetworkManager_ResultCallbackFunc_o *)sub_1C32E6C(NetworkManager_ResultCallbackFunc_TypeInfo);
        NetworkManager_ResultCallbackFunc___ctor(
          v8,
          (Il2CppObject *)v4,
          Method_FriendRootComponent_EndRequestFriend__,
          0);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        this = (FriendRootComponent_o *)NetworkManager__getRequest_object_(
                                          v8,
                                          (const MethodInfo_3168488 *)Method_NetworkManager_getRequest_FriendOfferRequest___);
        if ( this )
        {
          FriendOfferRequest__beginRequest((FriendOfferRequest_o *)this, otherUserGameEntity->fields.userId, 0);
          return;
        }
LABEL_14:
        sub_1C32E7C(this);
      }
    }
  }
  this = (FriendRootComponent_o *)v4->fields.myFSM;
  if ( !this )
    goto LABEL_14;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11081/*"REQUEST_NG"*/, 0);
}


void FriendRootComponent___RequestFriendRemove_b__92_0(
        FriendRootComponent_o *this,
        System_String_o *res,
        const MethodInfo *method)
{
  FriendRootComponent_o *v4; // x19
  const MethodInfo *v5; // x2
  FriendOperationItemListViewItem_o *Item; // x0
  struct OtherUserGameEntity_o *otherUserGameEntity; // x21
  NetworkManager_ResultCallbackFunc_o *v8; // x20

  v4 = this;
  if ( (byte_4C32636 & 1) == 0 )
  {
    sub_1C32C20(&Method_FriendRootComponent_EndRequestFriend__);
    sub_1C32C20(&Method_NetworkManager_getRequest_FriendRemoveRequest___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&StringLiteral_22379/*"ok"*/);
    this = (FriendRootComponent_o *)sub_1C32C20(&StringLiteral_11081/*"REQUEST_NG"*/);
    byte_4C32636 = 1;
  }
  if ( !res )
    goto LABEL_15;
  if ( System_String__Equals_63553848(res, (System_String_o *)StringLiteral_22379/*"ok"*/, 0) )
  {
    this = (FriendRootComponent_o *)v4->fields.operationItemListViewManager;
    if ( !this )
      goto LABEL_15;
    Item = FriendOperationItemListViewManager__GetItem(
             (FriendOperationItemListViewManager_o *)this,
             v4->fields.selectItemNum,
             v5);
    if ( Item )
    {
      otherUserGameEntity = Item->fields.otherUserGameEntity;
      if ( otherUserGameEntity )
      {
        this = (FriendRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( this )
        {
          CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)this, 0, 0);
          v8 = (NetworkManager_ResultCallbackFunc_o *)sub_1C32E6C(NetworkManager_ResultCallbackFunc_TypeInfo);
          NetworkManager_ResultCallbackFunc___ctor(
            v8,
            (Il2CppObject *)v4,
            Method_FriendRootComponent_EndRequestFriend__,
            0);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          this = (FriendRootComponent_o *)NetworkManager__getRequest_object_(
                                            v8,
                                            (const MethodInfo_3168488 *)Method_NetworkManager_getRequest_FriendRemoveRequest___);
          if ( this )
          {
            FriendRemoveRequest__beginRequest((FriendRemoveRequest_o *)this, otherUserGameEntity->fields.userId, 0);
            return;
          }
        }
LABEL_15:
        sub_1C32E7C(this);
      }
    }
  }
  this = (FriendRootComponent_o *)v4->fields.myFSM;
  if ( !this )
    goto LABEL_15;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11081/*"REQUEST_NG"*/, 0);
}


void FriendRootComponent___afterMainMenubarSelect_b__101_0(
        FriendRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  FriendRootComponent_o *v4; // x19
  System_Action_object__o *v5; // x20
  const MethodInfo *v6; // x2

  v4 = this;
  if ( (byte_4C32639 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_string__TypeInfo);
    sub_1C32C20(&Method_FriendRootComponent__afterMainMenubarSelect_b__101_1__);
    sub_1C32C20(&StringLiteral_22379/*"ok"*/);
    this = (FriendRootComponent_o *)sub_1C32C20(&StringLiteral_11081/*"REQUEST_NG"*/);
    byte_4C32639 = 1;
  }
  if ( !result )
    goto LABEL_8;
  if ( System_String__Equals_63553848(result, (System_String_o *)StringLiteral_22379/*"ok"*/, 0) )
  {
    v5 = (System_Action_object__o *)sub_1C32E6C(System_Action_string__TypeInfo);
    System_Action_object____ctor(
      v5,
      (Il2CppObject *)v4,
      Method_FriendRootComponent__afterMainMenubarSelect_b__101_1__,
      0);
    FriendRootComponent__FriendLockRequst(v4, (System_Action_string__o *)v5, v6);
    return;
  }
  this = (FriendRootComponent_o *)v4->fields.myFSM;
  if ( !this )
LABEL_8:
    sub_1C32E7C(this);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11081/*"REQUEST_NG"*/, 0);
}


void FriendRootComponent___afterMainMenubarSelect_b__101_1(
        FriendRootComponent_o *this,
        System_String_o *res,
        const MethodInfo *method)
{
  FriendRootComponent_o *v4; // x19
  PlayMakerFSM_o *myFSM; // x8
  __int64 *v6; // x9

  v4 = this;
  if ( (byte_4C3263A & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_11083/*"REQUEST_OK"*/);
    sub_1C32C20(&StringLiteral_22379/*"ok"*/);
    this = (FriendRootComponent_o *)sub_1C32C20(&StringLiteral_11081/*"REQUEST_NG"*/);
    byte_4C3263A = 1;
  }
  if ( !res
    || (this = (FriendRootComponent_o *)System_String__Equals_63553848(res, (System_String_o *)StringLiteral_22379/*"ok"*/, 0),
        (myFSM = v4->fields.myFSM) == 0) )
  {
    sub_1C32E7C(this);
  }
  v6 = &StringLiteral_11083/*"REQUEST_OK"*/;
  if ( ((unsigned __int8)this & 1) == 0 )
    v6 = &StringLiteral_11081/*"REQUEST_NG"*/;
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)*v6, 0);
}


void FriendRootComponent__afterMainMenubarSelect(FriendRootComponent_o *this, const MethodInfo *method)
{
  FriendRootComponent_messageRequestCallback_o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4C3260B & 1) == 0 )
  {
    sub_1C32C20(&Method_FriendRootComponent__afterMainMenubarSelect_b__101_0__);
    sub_1C32C20(&FriendRootComponent_messageRequestCallback_TypeInfo);
    byte_4C3260B = 1;
  }
  v3 = (FriendRootComponent_messageRequestCallback_o *)sub_1C32E6C(FriendRootComponent_messageRequestCallback_TypeInfo);
  FriendRootComponent_messageRequestCallback___ctor(
    v3,
    (Il2CppObject *)this,
    Method_FriendRootComponent__afterMainMenubarSelect_b__101_0__,
    0);
  FriendRootComponent__messageDispChangeRequest(this, v3, v4);
}


void FriendRootComponent__beginFinish(FriendRootComponent_o *this, const MethodInfo *method)
{
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4C325DB & 1) == 0 )
  {
    sub_1C32C20(&RandomLimitCountManager_TypeInfo);
    byte_4C325DB = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    goto LABEL_13;
  operationItemListViewManager->fields._isMessageApply_k__BackingField = 0;
  FriendOperationItemListViewManager__DestroyList(operationItemListViewManager, method);
  operationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.operationConfirmMenu;
  if ( !operationItemListViewManager )
    goto LABEL_13;
  FriendOperationConfirmMenu__Init((FriendOperationConfirmMenu_o *)operationItemListViewManager, v4);
  operationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.friendSearchMenu;
  if ( !operationItemListViewManager
    || (FriendSearchMenu__Init((FriendSearchMenu_o *)operationItemListViewManager, 0),
        (operationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.friendSearchResultMenu) == 0)
    || (FriendSearchResultMenu__Init((FriendSearchResultMenu_o *)operationItemListViewManager, 0),
        (operationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.friendWarningDialog) == 0)
    || (FriendWarningDialog__Init((FriendWarningDialog_o *)operationItemListViewManager, 0),
        (operationItemListViewManager = this->fields.operationItemListViewManager) == 0)
    || (operationItemListViewManager = (FriendOperationItemListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                                 (UnityEngine_Component_o *)operationItemListViewManager,
                                                                                 0)) == 0 )
  {
LABEL_13:
    sub_1C32E7C(operationItemListViewManager);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)operationItemListViewManager, 0, 0);
  this->fields.state = 0;
  this->fields.selectFriendEntity = 0;
  sub_1C32BC4(&this->fields.selectFriendEntity, 0);
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  RandomLimitCountManager__set_EnableRandomLimitCount(0, 0);
}


void FriendRootComponent__beginInitialize(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UnityEngine_Component_o *bgTxtSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  ClassButtonControlComponent_o *classButtonControl; // x20
  ClassButtonControlComponent_CallbackFunc_o *v7; // x21
  const MethodInfo *v8; // x1
  System_Action_o *v9; // x20

  if ( (byte_4C325D5 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&ClassButtonControlComponent_CallbackFunc_TypeInfo);
    sub_1C32C20(&Method_FriendRootComponent_EndLoadOutGameAtlas__);
    sub_1C32C20(&Method_FriendRootComponent_changeClass__);
    byte_4C325D5 = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0);
  SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 7, 39, 0);
  FriendRootComponent__CheckHelpUI(this, v3);
  bgTxtSprite = (UnityEngine_Component_o *)this->fields.bgTxtSprite;
  if ( !bgTxtSprite )
    goto LABEL_10;
  gameObject = UnityEngine_Component__get_gameObject(bgTxtSprite, 0);
  bgTxtSprite = (UnityEngine_Component_o *)BgTxtManager__IsActiveBgTxt(0);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)bgTxtSprite & 1, 0),
        classButtonControl = this->fields.classButtonControl,
        v7 = (ClassButtonControlComponent_CallbackFunc_o *)sub_1C32E6C(ClassButtonControlComponent_CallbackFunc_TypeInfo),
        ClassButtonControlComponent_CallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          (intptr_t)Method_FriendRootComponent_changeClass__,
          0),
        !classButtonControl)
    || (ClassButtonControlComponent__init(classButtonControl, v7, 0, 0, 0, 0),
        (bgTxtSprite = (UnityEngine_Component_o *)this->fields.operationItemListViewManager) == 0) )
  {
LABEL_10:
    sub_1C32E7C(bgTxtSprite);
  }
  FriendOperationItemListViewManager__SetupClassBoardInfo((FriendOperationItemListViewManager_o *)bgTxtSprite, v8);
  v9 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_FriendRootComponent_EndLoadOutGameAtlas__, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadOutGameAtlas(v9, 0);
}


void FriendRootComponent__beginResume(FriendRootComponent_o *this, Il2CppObject *data, const MethodInfo *method)
{
  __int64 naturalAligment; // x10
  FriendOperationItemListViewManager_o *Instance; // x0
  CommonUI_o *v7; // x20
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x2

  if ( (byte_4C325DC & 1) == 0 )
  {
    sub_1C32C20(&AvalonSceneManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&SupportInfoJump_TypeInfo);
    byte_4C325DC = 1;
  }
  if ( data
    && (naturalAligment = SupportInfoJump_TypeInfo->_2.naturalAligment,
        data->klass->_2.naturalAligment >= (unsigned int)naturalAligment)
    && (SupportInfoJump_c *)data->klass->_2.typeHierarchy[naturalAligment - 1] == SupportInfoJump_TypeInfo )
  {
    this->fields.isReturnSupport = 1;
    Instance = (FriendOperationItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v7 = (CommonUI_o *)Instance;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    if ( !v7
      || (CommonUI__maskFadein(v7, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0),
          FriendRootComponent__RefreshTab(this, v8),
          (Instance = this->fields.operationItemListViewManager) == 0) )
    {
      sub_1C32E7C(Instance);
    }
    FriendOperationItemListViewManager__SetMode_32678244(Instance, 2, v9);
    SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 7, 39, 0);
    MainMenuBar__setMenuActive(1, 0, 0);
    SceneRootComponent__sendMessageStartUp((SceneRootComponent_o *)this, 0);
  }
  else
  {
    SceneRootComponent__beginResume_41381892((SceneRootComponent_o *)this, 0);
    this->fields.isReturnSupport = 0;
  }
}


void FriendRootComponent__beginStartUp(FriendRootComponent_o *this, const MethodInfo *method)
{
  System_String_o *MainBgmName; // x20
  TitleInfoControl_o *titleInfo; // x0
  NetworkManager_ResultCallbackFunc_o *v5; // x20

  if ( (byte_4C325D7 & 1) == 0 )
  {
    sub_1C32C20(&BgmManager_TypeInfo);
    sub_1C32C20(&Method_FriendRootComponent_EndFriendRequest__);
    sub_1C32C20(&Method_NetworkManager_getRequest_FriendTopRequest___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&RandomLimitCountManager_TypeInfo);
    sub_1C32C20(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C32C20(&SoundManager_TypeInfo);
    byte_4C325D7 = 1;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  RandomLimitCountManager__set_EnableRandomLimitCount(1, 0);
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  MainBgmName = BgmManager__GetMainBgmName(0, 0);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm(MainBgmName, 0);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_15;
  TitleInfoControl__setTitleInfo(titleInfo, this->fields.myFSM, 1, 0, 42, 0);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_15;
  TitleInfoControl__setBackBtnSprite_39743540(titleInfo, 1, 0, 0, 0);
  this->fields.state = 0;
  this->fields.currentModeKind = 0;
  this->fields.selectFriendEntity = 0;
  sub_1C32BC4(&this->fields.selectFriendEntity, 0);
  v5 = (NetworkManager_ResultCallbackFunc_o *)sub_1C32E6C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v5, (Il2CppObject *)this, Method_FriendRootComponent_EndFriendRequest__, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  titleInfo = (TitleInfoControl_o *)NetworkManager__getRequest_object_(
                                      v5,
                                      (const MethodInfo_3168488 *)Method_NetworkManager_getRequest_FriendTopRequest___);
  if ( !titleInfo )
LABEL_15:
    sub_1C32E7C(titleInfo);
  RequestBase__beginRequest((RequestBase_o *)titleInfo, 0);
}


void FriendRootComponent__beginStartUp_32696292(
        FriendRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  struct SceneJumpInfo_o **p_jumpInfo; // x20
  Il2CppClass *v6; // x8
  __int64 naturalAligment; // x9
  Il2CppObject *v8; // x1

  if ( (byte_4C325D8 & 1) == 0 )
  {
    sub_1C32C20(&SceneJumpInfo_TypeInfo);
    byte_4C325D8 = 1;
  }
  p_jumpInfo = &this->fields.jumpInfo;
  this->fields.jumpInfo = 0;
  sub_1C32BC4(&this->fields.jumpInfo, 0);
  if ( data )
  {
    v6 = (Il2CppClass *)SceneJumpInfo_TypeInfo;
    naturalAligment = SceneJumpInfo_TypeInfo->_2.naturalAligment;
    if ( data->klass->_2.naturalAligment >= (unsigned int)naturalAligment
      && (SceneJumpInfo_c *)data->klass->_2.typeHierarchy[naturalAligment - 1] == SceneJumpInfo_TypeInfo )
    {
      *p_jumpInfo = (struct SceneJumpInfo_o *)data;
      if ( data->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      {
        if ( data->klass->_2.typeHierarchy[naturalAligment - 1] == v6 )
          v8 = data;
        else
          v8 = 0;
      }
      else
      {
        v8 = 0;
      }
      sub_1C32BC4(&this->fields.jumpInfo, v8);
      if ( *p_jumpInfo )
        this->fields.jumpTabKind = (*p_jumpInfo)->fields.id;
    }
  }
  ((void (__fastcall *)(FriendRootComponent_o *, const MethodInfo *))this->klass->vtable._6_beginStartUp.methodPtr)(
    this,
    this->klass->vtable._6_beginStartUp.method);
}


void FriendRootComponent__changeClass(FriendRootComponent_o *this, int32_t classPos, const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x3
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0

  if ( (byte_4C32615 & 1) == 0 )
  {
    sub_1C32C20(&Method_FriendRootComponent_changeClass__);
    byte_4C32615 = 1;
  }
  v5 = Method_FriendRootComponent_changeClass__;
  if ( (*((_BYTE *)Method_FriendRootComponent_changeClass__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C32C38(Method_FriendRootComponent_changeClass__);
  v6 = (System_Reflection_MethodBase_o *)sub_1C32C04(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    sub_1C32E7C(0);
  FriendOperationItemListViewManager__SetClassId(operationItemListViewManager, classPos, 0, v7);
}


int32_t FriendRootComponent__get_tabKind(FriendRootComponent_o *this, const MethodInfo *method)
{
  int32_t result; // w0
  FriendRootComponent_c *v4; // x0

  if ( (byte_4C325D4 & 1) == 0 )
  {
    sub_1C32C20(&FriendRootComponent_TypeInfo);
    byte_4C325D4 = 1;
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


void FriendRootComponent__messageDispChangeRequest(
        FriendRootComponent_o *this,
        FriendRootComponent_messageRequestCallback_o *callback,
        const MethodInfo *method)
{
  FriendRootComponent___c__DisplayClass112_0_o *v5; // x20
  ListViewManager_o *operationItemListViewManager; // x0
  struct FriendRootComponent_messageRequestCallback_o **p_callback; // x22
  int32_t ItemSum; // w23
  System_Collections_Generic_List_long__o *v9; // x21
  System_Collections_Generic_List_long__o *v10; // x22
  const MethodInfo *v11; // x2
  int32_t i; // w24
  struct System_Collections_Generic_List_UIDragDropListViewSurface__o *dropList; // x8
  int64_t items; // x1
  struct System_Int64_array *v15; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x8
  struct System_Int64_array *v19; // x8
  _QWORD *v20; // x9
  __int64 v21; // x10
  __int64 v22; // x8
  System_Collections_Generic_List_long__o *v23; // x0
  NetworkManager_ResultCallbackFunc_o *v24; // x19
  FriendMessageHideSyncRequest_o *v25; // x19
  System_Int64_array *v26; // x20

  if ( (byte_4C32613 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C32C20(&Method_NetworkManager_getRequest_FriendMessageHideSyncRequest___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C32C20(&Method_FriendRootComponent___c__DisplayClass112_0__messageDispChangeRequest_b__0__);
    sub_1C32C20(&FriendRootComponent___c__DisplayClass112_0_TypeInfo);
    sub_1C32C20(&StringLiteral_22379/*"ok"*/);
    byte_4C32613 = 1;
  }
  v5 = (FriendRootComponent___c__DisplayClass112_0_o *)sub_1C32E6C(FriendRootComponent___c__DisplayClass112_0_TypeInfo);
  FriendRootComponent___c__DisplayClass112_0___ctor(v5, 0);
  if ( !v5 )
    goto LABEL_35;
  v5->fields.__4__this = this;
  sub_1C32BC4(&v5->fields, this);
  v5->fields.callback = callback;
  p_callback = &v5->fields.callback;
  sub_1C32BC4(&v5->fields.callback, callback);
  operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    goto LABEL_35;
  if ( LOBYTE(operationItemListViewManager[1].fields.emptyMessageLabel) )
  {
    ItemSum = ListViewManager__get_ItemSum(operationItemListViewManager, 0);
    v9 = (System_Collections_Generic_List_long__o *)sub_1C32E6C(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v9,
      (const MethodInfo_377FF9C *)Method_System_Collections_Generic_List_long___ctor__);
    v10 = (System_Collections_Generic_List_long__o *)sub_1C32E6C(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v10,
      (const MethodInfo_377FF9C *)Method_System_Collections_Generic_List_long___ctor__);
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
                                                              v11);
        if ( !operationItemListViewManager )
          goto LABEL_35;
        if ( LODWORD(operationItemListViewManager->fields.dragParentObject) == 3 )
        {
          dropList = operationItemListViewManager->fields.dropList;
          if ( !dropList )
            goto LABEL_35;
          items = (int64_t)dropList->fields._items;
          if ( LOBYTE(operationItemListViewManager->fields.sort) )
          {
            if ( !v9 )
              goto LABEL_35;
            v15 = v9->fields._items;
            v16 = Method_System_Collections_Generic_List_long__Add__;
            ++v9->fields._version;
            if ( !v15 )
              goto LABEL_35;
            size = v9->fields._size;
            if ( (unsigned int)size >= LODWORD(v15->max_length) )
            {
              v22 = v16[4];
              v23 = v9;
LABEL_24:
              System_Collections_Generic_List_long___AddWithResize(
                v23,
                items,
                *(const MethodInfo_37807F0 **)(*(_QWORD *)(v22 + 192) + 112LL));
              continue;
            }
            v18 = &v15->obj.klass + size;
            v9->fields._size = size + 1;
          }
          else
          {
            if ( !v10 )
              goto LABEL_35;
            v19 = v10->fields._items;
            v20 = Method_System_Collections_Generic_List_long__Add__;
            ++v10->fields._version;
            if ( !v19 )
              goto LABEL_35;
            v21 = v10->fields._size;
            if ( (unsigned int)v21 >= LODWORD(v19->max_length) )
            {
              v22 = v20[4];
              v23 = v10;
              goto LABEL_24;
            }
            v18 = &v19->obj.klass + v21;
            v10->fields._size = v21 + 1;
          }
          v18[4] = (Il2CppClass *)items;
        }
      }
    }
    v24 = (NetworkManager_ResultCallbackFunc_o *)sub_1C32E6C(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v24,
      (Il2CppObject *)v5,
      Method_FriendRootComponent___c__DisplayClass112_0__messageDispChangeRequest_b__0__,
      0);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    operationItemListViewManager = (ListViewManager_o *)NetworkManager__getRequest_object_(
                                                          v24,
                                                          (const MethodInfo_3168488 *)Method_NetworkManager_getRequest_FriendMessageHideSyncRequest___);
    if ( v10 )
    {
      v25 = (FriendMessageHideSyncRequest_o *)operationItemListViewManager;
      operationItemListViewManager = (ListViewManager_o *)System_Collections_Generic_List_long___ToArray(
                                                            v10,
                                                            (const MethodInfo_37822A8 *)Method_System_Collections_Generic_List_long__ToArray__);
      if ( v9 )
      {
        v26 = (System_Int64_array *)operationItemListViewManager;
        operationItemListViewManager = (ListViewManager_o *)System_Collections_Generic_List_long___ToArray(
                                                              v9,
                                                              (const MethodInfo_37822A8 *)Method_System_Collections_Generic_List_long__ToArray__);
        if ( v25 )
        {
          FriendMessageHideSyncRequest__beginRequest(v25, v26, (System_Int64_array *)operationItemListViewManager, 0);
          return;
        }
      }
    }
LABEL_35:
    sub_1C32E7C(operationItemListViewManager);
  }
  if ( *p_callback )
    ((void (__fastcall *)(intptr_t, __int64, intptr_t))(*p_callback)->fields.invoke_impl)(
      (*p_callback)->fields.method_code,
      StringLiteral_22379/*"ok"*/,
      (*p_callback)->fields.method);
}


void FriendRootComponent__set_tabKind(FriendRootComponent_o *this, int32_t value, const MethodInfo *method)
{
  FriendRootComponent_c *v4; // x0

  if ( (byte_4C325D3 & 1) == 0 )
  {
    sub_1C32C20(&FriendRootComponent_TypeInfo);
    byte_4C325D3 = 1;
  }
  v4 = FriendRootComponent_TypeInfo;
  if ( !FriendRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendRootComponent_TypeInfo);
    v4 = FriendRootComponent_TypeInfo;
  }
  v4->static_fields->tabKindSave = value;
}


void FriendRootComponent___c__DisplayClass112_0___ctor(
        FriendRootComponent___c__DisplayClass112_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void FriendRootComponent___c__DisplayClass112_0___messageDispChangeRequest_b__0(
        FriendRootComponent___c__DisplayClass112_0_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  struct FriendRootComponent_o *_4__this; // x8
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x8
  struct FriendRootComponent_messageRequestCallback_o *callback; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (operationItemListViewManager = _4__this->fields.operationItemListViewManager) == 0 )
    sub_1C32E7C(this);
  operationItemListViewManager->fields._isMessageApply_k__BackingField = 0;
  callback = this->fields.callback;
  if ( callback )
    ((void (__fastcall *)(intptr_t, System_String_o *, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      result,
      callback->fields.method);
}


void FriendRootComponent___c__DisplayClass113_0___ctor(
        FriendRootComponent___c__DisplayClass113_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void FriendRootComponent___c__DisplayClass113_0___FriendLockRequst_b__0(
        FriendRootComponent___c__DisplayClass113_0_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  int32_t v6; // w21
  struct FriendRootComponent_o *_4__this; // x8

  if ( (byte_4C32642 & 1) == 0 )
  {
    sub_1C32C20(&Method_ActionExtensions_Call_string___);
    sub_1C32C20(&StringLiteral_22379/*"ok"*/);
    byte_4C32642 = 1;
  }
  operationItemListViewManager = (FriendOperationItemListViewManager_o *)System_String__op_Equality(
                                                                           result,
                                                                           (System_String_o *)StringLiteral_22379/*"ok"*/,
                                                                           0);
  if ( ((unsigned __int8)operationItemListViewManager & 1) != 0 && this->fields.sum >= 1 )
  {
    v6 = 0;
    do
    {
      _4__this = this->fields.__4__this;
      if ( !_4__this || (operationItemListViewManager = _4__this->fields.operationItemListViewManager) == 0 )
        sub_1C32E7C(operationItemListViewManager);
      operationItemListViewManager = (FriendOperationItemListViewManager_o *)FriendOperationItemListViewManager__GetItem(
                                                                               operationItemListViewManager,
                                                                               v6,
                                                                               0);
      if ( operationItemListViewManager )
        FriendOperationItemListViewItem__RefreshLockInfo(
          (FriendOperationItemListViewItem_o *)operationItemListViewManager,
          0);
      ++v6;
    }
    while ( v6 < this->fields.sum );
  }
  ActionExtensions__Call_object_(
    (System_Action_T__o *)this->fields.onFinishedRequest,
    (Il2CppObject *)result,
    (const MethodInfo_3029CE0 *)Method_ActionExtensions_Call_string___);
}


void FriendRootComponent_messageRequestCallback___ctor(
        FriendRootComponent_messageRequestCallback_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  __int64 (__fastcall *v9)(); // x8
  Il2CppObject *m_target; // x9
  __int64 v11; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C32BC4(&this->fields.m_target, object);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C32CE0(method) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = sub_1A6F690;
LABEL_8:
      this->fields.invoke_impl = (intptr_t)v9;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v8 )
    {
      v9 = sub_1A6F670;
      goto LABEL_8;
    }
    if ( !object )
    {
      v11 = sub_1C32E98(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C32D48(v11, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_9:
  this->fields.extra_arg = (intptr_t)sub_1A6F628;
}


System_IAsyncResult_o *FriendRootComponent_messageRequestCallback__BeginInvoke(
        FriendRootComponent_messageRequestCallback_o *this,
        System_String_o *result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  System_String_o *v6; // [xsp+0h] [xbp-20h] BYREF

  v6 = result;
  return (System_IAsyncResult_o *)sub_1C32BD4(this, &v6, callback, object);
}


void FriendRootComponent_messageRequestCallback__EndInvoke(
        FriendRootComponent_messageRequestCallback_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C32BD8(result, 0, method);
}


void FriendRootComponent_messageRequestCallback__Invoke(
        FriendRootComponent_messageRequestCallback_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, System_String_o *, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    this->fields.method);
}