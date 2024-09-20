void __fastcall FriendRootComponent___cctor(const MethodInfo *method)
{
  if ( (byte_4A5659A & 1) == 0 )
  {
    sub_1B885B0(&FriendRootComponent_TypeInfo);
    byte_4A5659A = 1;
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

  if ( (byte_4A5658B & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5658B = 1;
  }
  state = this->fields.state;
  switch ( state )
  {
    case ',':
      this->fields.state = 23;
      Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        CommonUI__CloseNotificationDialog(Instance, 0LL);
        goto LABEL_12;
      }
LABEL_14:
      sub_1B8880C(Instance, method);
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
        FriendOperationConfirmMenu__Close_30875868((FriendOperationConfirmMenu_o *)Instance, 0LL, v2);
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
  const MethodInfo *v4; // x2
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  FriendSearchMenu_o *friendSearchMenu; // x20
  FriendSearchMenu_CallbackFunc_o *v7; // x21
  const MethodInfo *v8; // x1

  if ( (byte_4A56590 & 1) == 0 )
  {
    sub_1B885B0(&FriendSearchMenu_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_FriendRootComponent_OnSelectSearchFriend__);
    byte_4A56590 = 1;
  }
  if ( this->fields.state == 42 )
  {
    this->fields.state = 23;
    this->fields.selectFriendCode = 0LL;
    sub_1B88554(&this->fields.selectFriendCode, 0LL);
    this->fields.selectFriendEntity = 0LL;
    sub_1B88554(&this->fields.selectFriendEntity, 0LL);
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close_30875868(operationConfirmMenu, 0LL, v4),
          (operationConfirmMenu = (FriendOperationConfirmMenu_o *)this->fields.friendSearchResultMenu) == 0LL)
      || (FriendSearchResultMenu__Close((FriendSearchResultMenu_o *)operationConfirmMenu, 0LL),
          friendSearchMenu = this->fields.friendSearchMenu,
          v7 = (FriendSearchMenu_CallbackFunc_o *)sub_1B887FC(FriendSearchMenu_CallbackFunc_TypeInfo),
          FriendSearchMenu_CallbackFunc___ctor(
            v7,
            (Il2CppObject *)this,
            Method_FriendRootComponent_OnSelectSearchFriend__,
            0LL),
          !friendSearchMenu) )
    {
      sub_1B8880C(operationConfirmMenu, v3);
    }
    FriendSearchMenu__Open(friendSearchMenu, v7, 1, 0LL);
    FriendRootComponent__RefreshInfo(this, v8);
  }
}


void __fastcall FriendRootComponent__BackFollowRemoveConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v6; // x21
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x2

  if ( (byte_4A56592 & 1) == 0 )
  {
    sub_1B885B0(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_FriendRootComponent_OnSelectFriendItem__);
    byte_4A56592 = 1;
  }
  if ( this->fields.state == 45 )
  {
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close_30875868(operationConfirmMenu, 0LL, v2),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v6 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1B887FC(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v6,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v7),
          !operationItemListViewManager) )
    {
      sub_1B8880C(operationConfirmMenu, method);
    }
    operationItemListViewManager->fields.callbackFunc = v6;
    sub_1B88554(&operationItemListViewManager->fields.callbackFunc, v6);
    FriendOperationItemListViewManager__SetMode_30901920(operationItemListViewManager, 2, v8);
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
      || (FriendOperationConfirmMenu__Close_30875868(operationConfirmMenu, 0LL, v2),
          (operationConfirmMenu = (FriendOperationConfirmMenu_o *)this->fields.operationItemListViewManager) == 0LL) )
    {
      sub_1B8880C(operationConfirmMenu, method);
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
  NetworkManager_ResultCallbackFunc_o *v3; // x20
  Il2CppObject *Request_object; // x0
  __int64 v5; // x1

  if ( (byte_4A56593 & 1) == 0 )
  {
    sub_1B885B0(&Method_FriendRootComponent_EndFriendRequest2__);
    sub_1B885B0(&Method_NetworkManager_getRequest_FriendTopRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4A56593 = 1;
  }
  v3 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v3,
    (Il2CppObject *)this,
    Method_FriendRootComponent_EndFriendRequest2__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v3,
                     (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_FriendTopRequest___);
  if ( !Request_object )
    sub_1B8880C(0LL, v5);
  RequestBase__beginRequest((RequestBase_o *)Request_object, 0LL);
}


void __fastcall FriendRootComponent__BackFriendAcceptConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v6; // x21
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x2

  if ( (byte_4A56558 & 1) == 0 )
  {
    sub_1B885B0(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_FriendRootComponent_OnSelectFriendItem__);
    byte_4A56558 = 1;
  }
  if ( this->fields.state == 31 )
  {
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close_30875868(operationConfirmMenu, 0LL, v2),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v6 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1B887FC(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v6,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v7),
          !operationItemListViewManager) )
    {
      sub_1B8880C(operationConfirmMenu, method);
    }
    operationItemListViewManager->fields.callbackFunc = v6;
    sub_1B88554(&operationItemListViewManager->fields.callbackFunc, v6);
    FriendOperationItemListViewManager__SetMode_30901920(operationItemListViewManager, 2, v8);
    this->fields.state = 14;
  }
}


void __fastcall FriendRootComponent__BackFriendAcceptConfirmRefreshShowOffered(
        FriendRootComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x2
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  const MethodInfo *v6; // x3
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v9; // x21
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2

  if ( (byte_4A56559 & 1) == 0 )
  {
    sub_1B885B0(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_FriendRootComponent_OnSelectFriendItem__);
    byte_4A56559 = 1;
  }
  if ( this->fields.state == 31 )
  {
    this->fields.state = 14;
    FriendRootComponent__RefreshInfo(this, method);
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu )
      goto LABEL_11;
    FriendOperationConfirmMenu__Close_30875868(operationConfirmMenu, 0LL, v4);
    operationConfirmMenu = (FriendOperationConfirmMenu_o *)this->fields.operationItemListViewManager;
    if ( !operationConfirmMenu
      || (FriendOperationItemListViewManager__DestroyList(
            (FriendOperationItemListViewManager_o *)operationConfirmMenu,
            v3),
          (classButtonControl = this->fields.classButtonControl) == 0LL)
      || (operationConfirmMenu = (FriendOperationConfirmMenu_o *)this->fields.operationItemListViewManager) == 0LL
      || (FriendOperationItemListViewManager__CreateList(
            (FriendOperationItemListViewManager_o *)operationConfirmMenu,
            2,
            classButtonControl->fields.currentCursor,
            v6),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v9 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1B887FC(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v9,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v10),
          !operationItemListViewManager) )
    {
LABEL_11:
      sub_1B8880C(operationConfirmMenu, v3);
    }
    operationItemListViewManager->fields.callbackFunc = v9;
    sub_1B88554(&operationItemListViewManager->fields.callbackFunc, v9);
    FriendOperationItemListViewManager__SetMode_30901920(operationItemListViewManager, 2, v11);
  }
}


void __fastcall FriendRootComponent__BackFriendCancelConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v6; // x21
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x2

  if ( (byte_4A5655E & 1) == 0 )
  {
    sub_1B885B0(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_FriendRootComponent_OnSelectFriendItem__);
    byte_4A5655E = 1;
  }
  if ( this->fields.state == 37 )
  {
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close_30875868(operationConfirmMenu, 0LL, v2),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v6 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1B887FC(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v6,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v7),
          !operationItemListViewManager) )
    {
      sub_1B8880C(operationConfirmMenu, method);
    }
    operationItemListViewManager->fields.callbackFunc = v6;
    sub_1B88554(&operationItemListViewManager->fields.callbackFunc, v6);
    FriendOperationItemListViewManager__SetMode_30901920(operationItemListViewManager, 2, v8);
    this->fields.state = 14;
  }
}


void __fastcall FriendRootComponent__BackFriendCancelConfirmRefreshShowOffer(
        FriendRootComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x2
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  const MethodInfo *v6; // x3
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v9; // x21
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2

  if ( (byte_4A5655F & 1) == 0 )
  {
    sub_1B885B0(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_FriendRootComponent_OnSelectFriendItem__);
    byte_4A5655F = 1;
  }
  if ( this->fields.state == 37 )
  {
    this->fields.state = 9;
    FriendRootComponent__RefreshInfo(this, method);
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu )
      goto LABEL_11;
    FriendOperationConfirmMenu__Close_30875868(operationConfirmMenu, 0LL, v4);
    operationConfirmMenu = (FriendOperationConfirmMenu_o *)this->fields.operationItemListViewManager;
    if ( !operationConfirmMenu
      || (FriendOperationItemListViewManager__DestroyList(
            (FriendOperationItemListViewManager_o *)operationConfirmMenu,
            v3),
          (classButtonControl = this->fields.classButtonControl) == 0LL)
      || (operationConfirmMenu = (FriendOperationConfirmMenu_o *)this->fields.operationItemListViewManager) == 0LL
      || (FriendOperationItemListViewManager__CreateList(
            (FriendOperationItemListViewManager_o *)operationConfirmMenu,
            1,
            classButtonControl->fields.currentCursor,
            v6),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v9 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1B887FC(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v9,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v10),
          !operationItemListViewManager) )
    {
LABEL_11:
      sub_1B8880C(operationConfirmMenu, v3);
    }
    operationItemListViewManager->fields.callbackFunc = v9;
    sub_1B88554(&operationItemListViewManager->fields.callbackFunc, v9);
    FriendOperationItemListViewManager__SetMode_30901920(operationItemListViewManager, 2, v11);
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
    sub_1B8880C(friendWarningDialog, method);
  }
  if ( state == 27 )
  {
    friendWarningDialog = (FriendWarningDialog_o *)this->fields.operationConfirmMenu;
    this->fields.state = 23;
    if ( friendWarningDialog )
    {
      FriendOperationConfirmMenu__Close_30875868((FriendOperationConfirmMenu_o *)friendWarningDialog, 0LL, v2);
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
  int32_t state; // w8
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v7; // x21
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2

  if ( (byte_4A56595 & 1) == 0 )
  {
    sub_1B885B0(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_FriendRootComponent_OnSelectFriendItem__);
    byte_4A56595 = 1;
  }
  state = this->fields.state;
  if ( state == 29 || state == 27 )
  {
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close_30875868(operationConfirmMenu, 0LL, v2),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v7 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1B887FC(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v7,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v8),
          !operationItemListViewManager) )
    {
      sub_1B8880C(operationConfirmMenu, method);
    }
    operationItemListViewManager->fields.callbackFunc = v7;
    sub_1B88554(&operationItemListViewManager->fields.callbackFunc, v7);
    FriendOperationItemListViewManager__SetMode_30901920(operationItemListViewManager, 2, v9);
    this->fields.state = 4;
  }
}


void __fastcall FriendRootComponent__BackFriendOfferConfirmRefreshShowFriend(
        FriendRootComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x2
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  const MethodInfo *v6; // x3
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v9; // x21
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2

  if ( (byte_4A56596 & 1) == 0 )
  {
    sub_1B885B0(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_FriendRootComponent_OnSelectFriendItem__);
    byte_4A56596 = 1;
  }
  if ( this->fields.state == 27 )
  {
    this->fields.state = 4;
    FriendRootComponent__RefreshInfo(this, method);
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu )
      goto LABEL_11;
    FriendOperationConfirmMenu__Close_30875868(operationConfirmMenu, 0LL, v4);
    operationConfirmMenu = (FriendOperationConfirmMenu_o *)this->fields.operationItemListViewManager;
    if ( !operationConfirmMenu
      || (FriendOperationItemListViewManager__DestroyList(
            (FriendOperationItemListViewManager_o *)operationConfirmMenu,
            v3),
          (classButtonControl = this->fields.classButtonControl) == 0LL)
      || (operationConfirmMenu = (FriendOperationConfirmMenu_o *)this->fields.operationItemListViewManager) == 0LL
      || (FriendOperationItemListViewManager__CreateList(
            (FriendOperationItemListViewManager_o *)operationConfirmMenu,
            3,
            classButtonControl->fields.currentCursor,
            v6),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v9 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1B887FC(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v9,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v10),
          !operationItemListViewManager) )
    {
LABEL_11:
      sub_1B8880C(operationConfirmMenu, v3);
    }
    operationItemListViewManager->fields.callbackFunc = v9;
    sub_1B88554(&operationItemListViewManager->fields.callbackFunc, v9);
    FriendOperationItemListViewManager__SetMode_30901920(operationItemListViewManager, 2, v11);
  }
}


void __fastcall FriendRootComponent__BackFriendOfferConfirmRefreshShowSearch(
        FriendRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  const MethodInfo *v4; // x2
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  FriendSearchMenu_o *friendSearchMenu; // x20
  FriendSearchMenu_CallbackFunc_o *v7; // x21

  if ( (byte_4A56556 & 1) == 0 )
  {
    sub_1B885B0(&FriendSearchMenu_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_FriendRootComponent_OnSelectSearchFriend__);
    byte_4A56556 = 1;
  }
  if ( this->fields.state == 27 )
  {
    this->fields.state = 23;
    this->fields.selectFriendCode = 0LL;
    sub_1B88554(&this->fields.selectFriendCode, 0LL);
    this->fields.selectFriendEntity = 0LL;
    sub_1B88554(&this->fields.selectFriendEntity, 0LL);
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close_30875868(operationConfirmMenu, 0LL, v4),
          (operationConfirmMenu = (FriendOperationConfirmMenu_o *)this->fields.friendSearchResultMenu) == 0LL)
      || (FriendSearchResultMenu__Close((FriendSearchResultMenu_o *)operationConfirmMenu, 0LL),
          friendSearchMenu = this->fields.friendSearchMenu,
          v7 = (FriendSearchMenu_CallbackFunc_o *)sub_1B887FC(FriendSearchMenu_CallbackFunc_TypeInfo),
          FriendSearchMenu_CallbackFunc___ctor(
            v7,
            (Il2CppObject *)this,
            Method_FriendRootComponent_OnSelectSearchFriend__,
            0LL),
          !friendSearchMenu) )
    {
      sub_1B8880C(operationConfirmMenu, v3);
    }
    FriendSearchMenu__Open(friendSearchMenu, v7, 1, 0LL);
  }
}


void __fastcall FriendRootComponent__BackFriendRejectConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v6; // x21
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x2

  if ( (byte_4A5655B & 1) == 0 )
  {
    sub_1B885B0(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_FriendRootComponent_OnSelectFriendItem__);
    byte_4A5655B = 1;
  }
  if ( this->fields.state == 34 )
  {
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close_30875868(operationConfirmMenu, 0LL, v2),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v6 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1B887FC(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v6,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v7),
          !operationItemListViewManager) )
    {
      sub_1B8880C(operationConfirmMenu, method);
    }
    operationItemListViewManager->fields.callbackFunc = v6;
    sub_1B88554(&operationItemListViewManager->fields.callbackFunc, v6);
    FriendOperationItemListViewManager__SetMode_30901920(operationItemListViewManager, 2, v8);
    this->fields.state = 14;
  }
}


void __fastcall FriendRootComponent__BackFriendRejectConfirmRefreshShowOffered(
        FriendRootComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x2
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  const MethodInfo *v6; // x3
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v9; // x21
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2

  if ( (byte_4A5655C & 1) == 0 )
  {
    sub_1B885B0(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_FriendRootComponent_OnSelectFriendItem__);
    byte_4A5655C = 1;
  }
  if ( this->fields.state == 34 )
  {
    this->fields.state = 14;
    FriendRootComponent__RefreshInfo(this, method);
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu )
      goto LABEL_11;
    FriendOperationConfirmMenu__Close_30875868(operationConfirmMenu, 0LL, v4);
    operationConfirmMenu = (FriendOperationConfirmMenu_o *)this->fields.operationItemListViewManager;
    if ( !operationConfirmMenu
      || (FriendOperationItemListViewManager__DestroyList(
            (FriendOperationItemListViewManager_o *)operationConfirmMenu,
            v3),
          (classButtonControl = this->fields.classButtonControl) == 0LL)
      || (operationConfirmMenu = (FriendOperationConfirmMenu_o *)this->fields.operationItemListViewManager) == 0LL
      || (FriendOperationItemListViewManager__CreateList(
            (FriendOperationItemListViewManager_o *)operationConfirmMenu,
            2,
            classButtonControl->fields.currentCursor,
            v6),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v9 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1B887FC(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v9,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v10),
          !operationItemListViewManager) )
    {
LABEL_11:
      sub_1B8880C(operationConfirmMenu, v3);
    }
    operationItemListViewManager->fields.callbackFunc = v9;
    sub_1B88554(&operationItemListViewManager->fields.callbackFunc, v9);
    FriendOperationItemListViewManager__SetMode_30901920(operationItemListViewManager, 2, v11);
  }
}


void __fastcall FriendRootComponent__BackFriendRemoveConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v6; // x21
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x2

  if ( (byte_4A56561 & 1) == 0 )
  {
    sub_1B885B0(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_FriendRootComponent_OnSelectFriendItem__);
    byte_4A56561 = 1;
  }
  if ( this->fields.state == 40 )
  {
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close_30875868(operationConfirmMenu, 0LL, v2),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v6 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1B887FC(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v6,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v7),
          !operationItemListViewManager) )
    {
      sub_1B8880C(operationConfirmMenu, method);
    }
    operationItemListViewManager->fields.callbackFunc = v6;
    sub_1B88554(&operationItemListViewManager->fields.callbackFunc, v6);
    FriendOperationItemListViewManager__SetMode_30901920(operationItemListViewManager, 2, v8);
    this->fields.state = 4;
  }
}


void __fastcall FriendRootComponent__BackFriendRemoveConfirmRefreshShowFriend(
        FriendRootComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x2
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  const MethodInfo *v6; // x3
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v9; // x21
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2

  if ( (byte_4A56562 & 1) == 0 )
  {
    sub_1B885B0(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_FriendRootComponent_OnSelectFriendItem__);
    byte_4A56562 = 1;
  }
  if ( this->fields.state == 40 )
  {
    this->fields.state = 4;
    FriendRootComponent__RefreshInfo(this, method);
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu )
      goto LABEL_11;
    FriendOperationConfirmMenu__Close_30875868(operationConfirmMenu, 0LL, v4);
    operationConfirmMenu = (FriendOperationConfirmMenu_o *)this->fields.operationItemListViewManager;
    if ( !operationConfirmMenu
      || (FriendOperationItemListViewManager__DestroyList(
            (FriendOperationItemListViewManager_o *)operationConfirmMenu,
            v3),
          (classButtonControl = this->fields.classButtonControl) == 0LL)
      || (operationConfirmMenu = (FriendOperationConfirmMenu_o *)this->fields.operationItemListViewManager) == 0LL
      || (FriendOperationItemListViewManager__CreateList(
            (FriendOperationItemListViewManager_o *)operationConfirmMenu,
            3,
            classButtonControl->fields.currentCursor,
            v6),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v9 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1B887FC(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v9,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v10),
          !operationItemListViewManager) )
    {
LABEL_11:
      sub_1B8880C(operationConfirmMenu, v3);
    }
    operationItemListViewManager->fields.callbackFunc = v9;
    sub_1B88554(&operationItemListViewManager->fields.callbackFunc, v9);
    FriendOperationItemListViewManager__SetMode_30901920(operationItemListViewManager, 2, v11);
  }
}


void __fastcall FriendRootComponent__BackSearchFriend(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  FriendSearchResultMenu_o *friendSearchResultMenu; // x0
  FriendSearchMenu_o *friendSearchMenu; // x20
  System_Action_o *v6; // x21

  if ( (byte_4A5654F & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_FriendRootComponent_OnMoveEnd__);
    byte_4A5654F = 1;
  }
  if ( this->fields.state == 23 )
  {
    this->fields.state = 24;
    FriendRootComponent__RefreshInfo(this, method);
    this->fields.selectFriendEntity = 0LL;
    sub_1B88554(&this->fields.selectFriendEntity, 0LL);
    friendSearchResultMenu = this->fields.friendSearchResultMenu;
    if ( !friendSearchResultMenu
      || (FriendSearchResultMenu__Close(friendSearchResultMenu, 0LL),
          friendSearchMenu = this->fields.friendSearchMenu,
          v6 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo),
          System_Action___ctor(v6, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0LL),
          !friendSearchMenu) )
    {
      sub_1B8880C(friendSearchResultMenu, v3);
    }
    FriendSearchMenu__Close_30953604(friendSearchMenu, v6, 0LL);
  }
}


void __fastcall FriendRootComponent__BackShowFriend(FriendRootComponent_o *this, const MethodInfo *method)
{
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4A56547 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_FriendRootComponent_OnMoveEnd__);
    byte_4A56547 = 1;
  }
  if ( this->fields.state == 4 )
  {
    this->fields.state = 5;
    FriendRootComponent__RefreshInfo(this, method);
    operationItemListViewManager = this->fields.operationItemListViewManager;
    v4 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v4, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0LL);
    if ( !operationItemListViewManager )
      sub_1B8880C(v5, v6);
    operationItemListViewManager->fields.callbackFunc2 = v4;
    sub_1B88554(&operationItemListViewManager->fields.callbackFunc2, v4);
    FriendOperationItemListViewManager__SetMode_30901920(operationItemListViewManager, 4, v7);
  }
}


void __fastcall FriendRootComponent__BackShowOffer(FriendRootComponent_o *this, const MethodInfo *method)
{
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x1

  if ( (byte_4A56549 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_FriendRootComponent_OnMoveEnd__);
    byte_4A56549 = 1;
  }
  if ( this->fields.state == 9 )
  {
    operationItemListViewManager = this->fields.operationItemListViewManager;
    v4 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v4, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0LL);
    if ( !operationItemListViewManager )
      sub_1B8880C(v5, v6);
    operationItemListViewManager->fields.callbackFunc2 = v4;
    sub_1B88554(&operationItemListViewManager->fields.callbackFunc2, v4);
    FriendOperationItemListViewManager__SetMode_30901920(operationItemListViewManager, 4, v7);
    FriendRootComponent__RefreshInfo(this, v8);
    this->fields.state = 10;
  }
}


void __fastcall FriendRootComponent__BackShowOffered(FriendRootComponent_o *this, const MethodInfo *method)
{
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4A5654B & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_FriendRootComponent_OnMoveEnd__);
    byte_4A5654B = 1;
  }
  if ( this->fields.state == 14 )
  {
    this->fields.state = 15;
    FriendRootComponent__RefreshInfo(this, method);
    operationItemListViewManager = this->fields.operationItemListViewManager;
    v4 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v4, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0LL);
    if ( !operationItemListViewManager )
      sub_1B8880C(v5, v6);
    operationItemListViewManager->fields.callbackFunc2 = v4;
    sub_1B88554(&operationItemListViewManager->fields.callbackFunc2, v4);
    FriendOperationItemListViewManager__SetMode_30901920(operationItemListViewManager, 4, v7);
  }
}


void __fastcall FriendRootComponent__BackShowSearch(FriendRootComponent_o *this, const MethodInfo *method)
{
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4A5654D & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_FriendRootComponent_OnMoveEnd__);
    byte_4A5654D = 1;
  }
  if ( this->fields.state == 19 )
  {
    this->fields.state = 20;
    operationItemListViewManager = this->fields.operationItemListViewManager;
    v4 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v4, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0LL);
    if ( !operationItemListViewManager )
      sub_1B8880C(v5, v6);
    operationItemListViewManager->fields.callbackFunc2 = v4;
    sub_1B88554(&operationItemListViewManager->fields.callbackFunc2, v4);
    FriendOperationItemListViewManager__SetMode_30901920(operationItemListViewManager, 4, v7);
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

  if ( (byte_4A5656D & 1) == 0 )
  {
    sub_1B885B0(&OptionManager_TypeInfo);
    byte_4A5656D = 1;
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
        sub_1B88814(SpoilerSetting, v4);
      }
LABEL_14:
      v9 = this->fields.selectFriendEntity;
      if ( !v9 || (eventUserSvtLeaderHash = v9->fields.eventUserSvtLeaderHash) == 0LL )
LABEL_23:
        sub_1B8880C(SpoilerSetting, v4);
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
  System_String_o **v3; // x9
  System_String_o *v4; // x20
  UILabel_o *helpLabel; // x19
  System_String_o *v6; // x0
  __int64 v7; // x1

  if ( (byte_4A5653F & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_6502/*"FRIEND_LOCK_HELP_TEXT"*/);
    sub_1B885B0(&StringLiteral_6500/*"FRIEND_HELP_TEXT"*/);
    byte_4A5653F = 1;
  }
  v3 = (System_String_o **)&StringLiteral_6500/*"FRIEND_HELP_TEXT"*/;
  if ( this->fields.isActiveModeKindButtons && this->fields.currentModeKind == 1 )
    v3 = (System_String_o **)&StringLiteral_6502/*"FRIEND_LOCK_HELP_TEXT"*/;
  v4 = *v3;
  helpLabel = this->fields.helpLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v6 = LocalizationManager__Get(v4, 0LL);
  if ( !helpLabel )
    sub_1B8880C(v6, v7);
  UILabel__set_text(helpLabel, v6, 0LL);
}


void __fastcall FriendRootComponent__CheckModeKind(FriendRootComponent_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20
  UserFollowMaster_o *v6; // x21
  int v7; // w21
  UICommonButton_o *modeUserDetailButton; // x20
  bool enabled; // w0
  UICommonButton_o *modeEditLockButton; // x20
  bool v11; // w0
  __int64 v12; // x8
  int32_t currentModeKind; // w20
  __int64 v14; // x21
  __int64 v15; // x22
  System_String_o **v16; // x8
  System_String_o *v17; // x1

  if ( (byte_4A56574 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_TblFriendMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserFollowMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_17650/*"button_alllock_unreg"*/);
    sub_1B885B0(&StringLiteral_17656/*"button_infocheck_unreg"*/);
    sub_1B885B0(&StringLiteral_17655/*"button_infocheck_reg"*/);
    sub_1B885B0(&StringLiteral_17649/*"button_alllock_reg"*/);
    byte_4A56574 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_TblFriendMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserFollowMaster___);
  if ( !MasterData_object )
    goto LABEL_31;
  v6 = (UserFollowMaster_o *)Instance;
  Instance = (DataManager_o *)TblFriendMaster__GetFriendSum((TblFriendMaster_o *)MasterData_object, 0LL);
  if ( (int)Instance > 0 )
    goto LABEL_9;
  if ( !v6 )
    goto LABEL_31;
  if ( UserFollowMaster__GetFollowSum(v6, 0LL) <= 0 )
  {
    v7 = 1;
    this->fields.currentModeKind = 0;
  }
  else
  {
LABEL_9:
    v7 = 0;
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
  v11 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.modeEditLockButton, 0LL);
  UICommonButton__SetColliderEnable(modeEditLockButton, v11, 1, 0LL);
  if ( v7 )
  {
    v12 = 232LL;
    if ( this->fields.currentModeKind )
      v12 = 224LL;
    Instance = *(DataManager_o **)((char *)&this->klass + v12);
    if ( Instance )
    {
      UICommonButton__SetButtonEnable((UICommonButton_o *)Instance, 0, 1, 0LL);
      goto LABEL_21;
    }
LABEL_31:
    sub_1B8880C(Instance, v4);
  }
LABEL_21:
  Instance = (DataManager_o *)this->fields.modeUserDetailSprite;
  if ( !Instance )
    goto LABEL_31;
  currentModeKind = this->fields.currentModeKind;
  v14 = StringLiteral_17649/*"button_alllock_reg"*/;
  v15 = StringLiteral_17650/*"button_alllock_unreg"*/;
  v16 = (System_String_o **)(currentModeKind ? &StringLiteral_17656/*"button_infocheck_unreg"*/ : &StringLiteral_17655/*"button_infocheck_reg"*/);
  UISprite__set_spriteName((UISprite_o *)Instance, *v16, 0LL);
  Instance = (DataManager_o *)this->fields.modeEditLockSprite;
  if ( !Instance )
    goto LABEL_31;
  if ( currentModeKind == 1 )
    v17 = (System_String_o *)v14;
  else
    v17 = (System_String_o *)v15;
  UISprite__set_spriteName((UISprite_o *)Instance, v17, 0LL);
}


bool __fastcall FriendRootComponent__CheckTabKind(FriendRootComponent_o *this, const MethodInfo *method)
{
  int32_t tabKind; // w0
  __int64 v4; // x1
  PlayMakerFSM_o *myFSM; // x0
  __int64 *v6; // x8

  if ( (byte_4A56543 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_8615/*"MENU_OPERATION_FRIEND"*/);
    sub_1B885B0(&StringLiteral_8617/*"MENU_OPERATION_OFFERED"*/);
    sub_1B885B0(&StringLiteral_8618/*"MENU_OPERATION_SEARCH"*/);
    byte_4A56543 = 1;
  }
  tabKind = FriendRootComponent__get_tabKind(this, method);
  switch ( tabKind )
  {
    case 2:
      myFSM = this->fields.myFSM;
      if ( myFSM )
      {
        v6 = &StringLiteral_8618/*"MENU_OPERATION_SEARCH"*/;
        goto LABEL_12;
      }
LABEL_14:
      sub_1B8880C(myFSM, v4);
    case 1:
      myFSM = this->fields.myFSM;
      if ( myFSM )
      {
        v6 = &StringLiteral_8617/*"MENU_OPERATION_OFFERED"*/;
        goto LABEL_12;
      }
      goto LABEL_14;
    case 0:
      myFSM = this->fields.myFSM;
      if ( myFSM )
      {
        v6 = &StringLiteral_8615/*"MENU_OPERATION_FRIEND"*/;
LABEL_12:
        PlayMakerFSM__SendEvent(myFSM, (System_String_o *)*v6, 0LL);
        return 1;
      }
      goto LABEL_14;
  }
  return 1;
}


void __fastcall FriendRootComponent__EndCloseShowServant(FriendRootComponent_o *this, const MethodInfo *method)
{
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v4; // x21
  const MethodInfo *v5; // x3
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_4A56554 & 1) == 0 )
  {
    sub_1B885B0(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_FriendRootComponent_OnSelectFriendItem__);
    byte_4A56554 = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v4 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1B887FC(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
    v5);
  if ( !operationItemListViewManager )
    sub_1B8880C(v6, v7);
  operationItemListViewManager->fields.callbackFunc = v4;
  sub_1B88554(&operationItemListViewManager->fields.callbackFunc, v4);
  FriendOperationItemListViewManager__SetMode_30901920(operationItemListViewManager, 2, v8);
}


void __fastcall FriendRootComponent__EndCloseShowServantEquip(FriendRootComponent_o *this, const MethodInfo *method)
{
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v4; // x21
  const MethodInfo *v5; // x3
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_4A5657E & 1) == 0 )
  {
    sub_1B885B0(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_FriendRootComponent_OnSelectFriendItem__);
    byte_4A5657E = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v4 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1B887FC(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
    v5);
  if ( !operationItemListViewManager )
    sub_1B8880C(v6, v7);
  operationItemListViewManager->fields.callbackFunc = v4;
  sub_1B88554(&operationItemListViewManager->fields.callbackFunc, v4);
  FriendOperationItemListViewManager__SetMode_30901920(operationItemListViewManager, 2, v8);
}


void __fastcall FriendRootComponent__EndFriendRequest(
        FriendRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  FriendRootComponent_c *v4; // x0
  OtherUserGameEntity_array *Instance; // x0
  __int64 v6; // x1
  TblFriendMaster_o *v7; // x20
  const MethodInfo *v8; // x2
  int32_t v9; // w1
  OtherUserGameEntity_array *List; // x21
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x1

  if ( (byte_4A56540 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_TblFriendMaster___);
    sub_1B885B0(&FriendRootComponent_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A56540 = 1;
  }
  v4 = FriendRootComponent_TypeInfo;
  if ( !FriendRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendRootComponent_TypeInfo);
    v4 = FriendRootComponent_TypeInfo;
  }
  if ( v4->static_fields->tabKindSave == 3 && this->fields.jumpTabKind <= 1u )
  {
    EventTutorialMaster__CheckTutorial(-1, 49, 0LL, 0, 0, 0, 0, 0LL);
    v4 = FriendRootComponent_TypeInfo;
  }
  if ( !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = FriendRootComponent_TypeInfo;
  }
  if ( v4->static_fields->tabKindSave == 3 && this->fields.jumpTabKind == 3 )
  {
    Instance = (OtherUserGameEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (OtherUserGameEntity_array *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)Instance,
                                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_TblFriendMaster___);
      if ( Instance )
      {
        v7 = (TblFriendMaster_o *)Instance;
        Instance = TblFriendMaster__GetList((TblFriendMaster_o *)Instance, 2, 0LL);
        if ( Instance )
        {
          if ( *(_QWORD *)&Instance->max_length )
          {
            v9 = 1;
LABEL_22:
            FriendRootComponent__set_tabKind((FriendRootComponent_o *)Instance, v9, v8);
            EventTutorialMaster__CheckTutorial(-1, 49, 0LL, 0, 0, 0, 0, 0LL);
            goto LABEL_23;
          }
          List = TblFriendMaster__GetList(v7, 3, 0LL);
          Instance = TblFriendMaster__GetList(v7, 9, 0LL);
          if ( List )
          {
            if ( *(_QWORD *)&List->max_length )
            {
LABEL_21:
              v9 = 0;
              goto LABEL_22;
            }
            if ( Instance )
            {
              if ( !*(_QWORD *)&Instance->max_length )
              {
                FriendRootComponent__set_tabKind((FriendRootComponent_o *)Instance, 2, v8);
                goto LABEL_23;
              }
              goto LABEL_21;
            }
          }
        }
      }
    }
    sub_1B8880C(Instance, v6);
  }
LABEL_23:
  FriendRootComponent__InitModeKindButtons(this, (const MethodInfo *)result);
  FriendRootComponent__RefreshTab(this, v11);
  FriendRootComponent__RefreshInfo(this, v12);
  MainMenuBar__setMenuActive(1, 0LL, 0LL);
  SceneRootComponent__beginStartUp_38666476((SceneRootComponent_o *)this, 0LL);
}


void __fastcall FriendRootComponent__EndFriendRequest2(
        FriendRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x3
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  struct FriendOperationItemListViewManager_o *v8; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v9; // x21
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2

  if ( (byte_4A56594 & 1) == 0 )
  {
    sub_1B885B0(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_FriendRootComponent_OnSelectFriendItem__);
    byte_4A56594 = 1;
  }
  FriendRootComponent__RefreshInfo(this, (const MethodInfo *)result);
  classButtonControl = this->fields.classButtonControl;
  if ( !classButtonControl
    || (operationItemListViewManager = this->fields.operationItemListViewManager) == 0LL
    || (FriendOperationItemListViewManager__CreateList(
          operationItemListViewManager,
          3,
          classButtonControl->fields.currentCursor,
          v6),
        v8 = this->fields.operationItemListViewManager,
        v9 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1B887FC(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
        FriendOperationItemListViewManager_CallbackFunc___ctor(
          v9,
          (Il2CppObject *)this,
          (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
          v10),
        !v8) )
  {
    sub_1B8880C(operationItemListViewManager, v5);
  }
  v8->fields.callbackFunc = v9;
  sub_1B88554(&v8->fields.callbackFunc, v9);
  FriendOperationItemListViewManager__SetMode_30901920(v8, 2, v11);
  this->fields.state = 4;
}


void __fastcall FriendRootComponent__EndLoadOutGameAtlas(FriendRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4A5653C & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4A5653C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v4);
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, (SceneRootComponent_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendRootComponent__EndMaxFollowWarningOfferConfirm(
        FriendRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_4A5658C & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_8612/*"MENU_CANCEL"*/);
    byte_4A5658C = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1B8880C(0LL, isDecide);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_8612/*"MENU_CANCEL"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendRootComponent__EndMaxFriendWarning(
        FriendRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  FriendWarningDialog_o *friendWarningDialog; // x0
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v6; // x21
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x2

  if ( (byte_4A56580 & 1) == 0 )
  {
    sub_1B885B0(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_FriendRootComponent_OnSelectFriendItem__);
    byte_4A56580 = 1;
  }
  friendWarningDialog = this->fields.friendWarningDialog;
  if ( !friendWarningDialog
    || (FriendWarningDialog__Close(friendWarningDialog, 0LL),
        operationItemListViewManager = this->fields.operationItemListViewManager,
        v6 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1B887FC(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
        FriendOperationItemListViewManager_CallbackFunc___ctor(
          v6,
          (Il2CppObject *)this,
          (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
          v7),
        !operationItemListViewManager) )
  {
    sub_1B8880C(friendWarningDialog, isDecide);
  }
  operationItemListViewManager->fields.callbackFunc = v6;
  sub_1B88554(&operationItemListViewManager->fields.callbackFunc, v6);
  FriendOperationItemListViewManager__SetMode_30901920(operationItemListViewManager, 2, v8);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendRootComponent__EndMaxFriendWarningOfferConfirm(
        FriendRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_4A56581 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_8612/*"MENU_CANCEL"*/);
    byte_4A56581 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1B8880C(0LL, isDecide);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_8612/*"MENU_CANCEL"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendRootComponent__EndNoSearchWarning(
        FriendRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  FriendWarningDialog_o *friendWarningDialog; // x0
  FriendSearchMenu_o *friendSearchMenu; // x20
  FriendSearchMenu_CallbackFunc_o *v6; // x21

  if ( (byte_4A5656E & 1) == 0 )
  {
    sub_1B885B0(&FriendSearchMenu_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_FriendRootComponent_OnSelectSearchFriend__);
    sub_1B885B0(&StringLiteral_11058/*"REQUEST_NG"*/);
    byte_4A5656E = 1;
  }
  friendWarningDialog = this->fields.friendWarningDialog;
  if ( !friendWarningDialog
    || (FriendWarningDialog__Close(friendWarningDialog, 0LL),
        this->fields.state = 23,
        friendSearchMenu = this->fields.friendSearchMenu,
        v6 = (FriendSearchMenu_CallbackFunc_o *)sub_1B887FC(FriendSearchMenu_CallbackFunc_TypeInfo),
        FriendSearchMenu_CallbackFunc___ctor(
          v6,
          (Il2CppObject *)this,
          Method_FriendRootComponent_OnSelectSearchFriend__,
          0LL),
        !friendSearchMenu)
    || (FriendSearchMenu__Open(friendSearchMenu, v6, 0, 0LL),
        (friendWarningDialog = (FriendWarningDialog_o *)this->fields.myFSM) == 0LL) )
  {
    sub_1B8880C(friendWarningDialog, isDecide);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)friendWarningDialog, (System_String_o *)StringLiteral_11058/*"REQUEST_NG"*/, 0LL);
}


void __fastcall FriendRootComponent__EndRequestFollowAssign(
        FriendRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_object__object__o *myFSM; // x0
  System_Collections_Generic_Dictionary_object__object__o *v7; // x20
  System_String_o *v8; // x20
  __int64 *v9; // x8
  Il2CppObject *Instance; // x21
  NotificationDialog_ClickDelegate_o *v11; // x22

  if ( (byte_4A5658F & 1) == 0 )
  {
    sub_1B885B0(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1B885B0(&Method_FriendRootComponent_OnEndRequestDialog__);
    sub_1B885B0(&JsonManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&StringLiteral_11060/*"REQUEST_OK"*/);
    sub_1B885B0(&StringLiteral_11058/*"REQUEST_NG"*/);
    sub_1B885B0(&StringLiteral_22055/*"ng"*/);
    sub_1B885B0(&StringLiteral_21395/*"message"*/);
    byte_4A5658F = 1;
  }
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_22055/*"ng"*/, 0LL) )
  {
    myFSM = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.myFSM;
    if ( myFSM )
    {
      v9 = &StringLiteral_11058/*"REQUEST_NG"*/;
      goto LABEL_14;
    }
LABEL_17:
    sub_1B8880C(myFSM, v5);
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  myFSM = (System_Collections_Generic_Dictionary_object__object__o *)JsonManager__getDictionary(result, 0LL);
  if ( !myFSM )
    goto LABEL_17;
  v7 = myFSM;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          myFSM,
          (Il2CppObject *)StringLiteral_21395/*"message"*/,
          (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_10;
  myFSM = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                       v7,
                                                                       (Il2CppObject *)StringLiteral_21395/*"message"*/,
                                                                       (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !myFSM )
    goto LABEL_17;
  v8 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, Il2CppMethodPointer))myFSM->klass->vtable._3_ToString.method)(
                            myFSM,
                            myFSM->klass->vtable._4_unknown.methodPtr);
  if ( System_String__IsNullOrEmpty(v8, 0LL) )
  {
LABEL_10:
    myFSM = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.myFSM;
    if ( myFSM )
    {
      v9 = &StringLiteral_11060/*"REQUEST_OK"*/;
LABEL_14:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myFSM, (System_String_o *)*v9, 0LL);
      return;
    }
    goto LABEL_17;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (NotificationDialog_ClickDelegate_o *)sub_1B887FC(NotificationDialog_ClickDelegate_TypeInfo);
  NotificationDialog_ClickDelegate___ctor(
    v11,
    (Il2CppObject *)this,
    Method_FriendRootComponent_OnEndRequestDialog__,
    0LL);
  if ( !Instance )
    goto LABEL_17;
  CommonUI__OpenNotificationDialog_30496496(
    (CommonUI_o *)Instance,
    0LL,
    v8,
    v11,
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
  System_Collections_Generic_Dictionary_object__object__o *myFSM; // x0
  System_Collections_Generic_Dictionary_object__object__o *v7; // x20
  System_String_o *v8; // x20
  __int64 *v9; // x8
  Il2CppObject *Instance; // x21
  NotificationDialog_ClickDelegate_o *v11; // x22

  if ( (byte_4A56598 & 1) == 0 )
  {
    sub_1B885B0(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1B885B0(&Method_FriendRootComponent_OnEndRequestDialog__);
    sub_1B885B0(&JsonManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&StringLiteral_11060/*"REQUEST_OK"*/);
    sub_1B885B0(&StringLiteral_11058/*"REQUEST_NG"*/);
    sub_1B885B0(&StringLiteral_22055/*"ng"*/);
    sub_1B885B0(&StringLiteral_21395/*"message"*/);
    byte_4A56598 = 1;
  }
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_22055/*"ng"*/, 0LL) )
  {
    myFSM = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.myFSM;
    if ( myFSM )
    {
      v9 = &StringLiteral_11058/*"REQUEST_NG"*/;
      goto LABEL_14;
    }
LABEL_17:
    sub_1B8880C(myFSM, v5);
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  myFSM = (System_Collections_Generic_Dictionary_object__object__o *)JsonManager__getDictionary(result, 0LL);
  if ( !myFSM )
    goto LABEL_17;
  v7 = myFSM;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          myFSM,
          (Il2CppObject *)StringLiteral_21395/*"message"*/,
          (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_10;
  myFSM = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                       v7,
                                                                       (Il2CppObject *)StringLiteral_21395/*"message"*/,
                                                                       (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !myFSM )
    goto LABEL_17;
  v8 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, Il2CppMethodPointer))myFSM->klass->vtable._3_ToString.method)(
                            myFSM,
                            myFSM->klass->vtable._4_unknown.methodPtr);
  if ( System_String__IsNullOrEmpty(v8, 0LL) )
  {
LABEL_10:
    myFSM = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.myFSM;
    if ( myFSM )
    {
      v9 = &StringLiteral_11060/*"REQUEST_OK"*/;
LABEL_14:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myFSM, (System_String_o *)*v9, 0LL);
      return;
    }
    goto LABEL_17;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (NotificationDialog_ClickDelegate_o *)sub_1B887FC(NotificationDialog_ClickDelegate_TypeInfo);
  NotificationDialog_ClickDelegate___ctor(
    v11,
    (Il2CppObject *)this,
    Method_FriendRootComponent_OnEndRequestDialog__,
    0LL);
  if ( !Instance )
    goto LABEL_17;
  CommonUI__OpenNotificationDialog_30496496(
    (CommonUI_o *)Instance,
    0LL,
    v8,
    v11,
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
  System_Collections_Generic_Dictionary_object__object__o *myFSM; // x0
  System_Collections_Generic_Dictionary_object__object__o *v7; // x20
  System_String_o *v8; // x20
  __int64 *v9; // x8
  Il2CppObject *Instance; // x21
  NotificationDialog_ClickDelegate_o *v11; // x22

  if ( (byte_4A56569 & 1) == 0 )
  {
    sub_1B885B0(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1B885B0(&Method_FriendRootComponent_OnEndRequestDialog__);
    sub_1B885B0(&JsonManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&StringLiteral_11060/*"REQUEST_OK"*/);
    sub_1B885B0(&StringLiteral_11058/*"REQUEST_NG"*/);
    sub_1B885B0(&StringLiteral_22055/*"ng"*/);
    sub_1B885B0(&StringLiteral_21395/*"message"*/);
    byte_4A56569 = 1;
  }
  MainMenuBar__UpdateNoticeNumber(0LL);
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_22055/*"ng"*/, 0LL) )
  {
    myFSM = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.myFSM;
    if ( myFSM )
    {
      v9 = &StringLiteral_11058/*"REQUEST_NG"*/;
      goto LABEL_14;
    }
LABEL_17:
    sub_1B8880C(myFSM, v5);
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  myFSM = (System_Collections_Generic_Dictionary_object__object__o *)JsonManager__getDictionary(result, 0LL);
  if ( !myFSM )
    goto LABEL_17;
  v7 = myFSM;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          myFSM,
          (Il2CppObject *)StringLiteral_21395/*"message"*/,
          (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_10;
  myFSM = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                       v7,
                                                                       (Il2CppObject *)StringLiteral_21395/*"message"*/,
                                                                       (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !myFSM )
    goto LABEL_17;
  v8 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, Il2CppMethodPointer))myFSM->klass->vtable._3_ToString.method)(
                            myFSM,
                            myFSM->klass->vtable._4_unknown.methodPtr);
  if ( System_String__IsNullOrEmpty(v8, 0LL) )
  {
LABEL_10:
    myFSM = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.myFSM;
    if ( myFSM )
    {
      v9 = &StringLiteral_11060/*"REQUEST_OK"*/;
LABEL_14:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myFSM, (System_String_o *)*v9, 0LL);
      return;
    }
    goto LABEL_17;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (NotificationDialog_ClickDelegate_o *)sub_1B887FC(NotificationDialog_ClickDelegate_TypeInfo);
  NotificationDialog_ClickDelegate___ctor(
    v11,
    (Il2CppObject *)this,
    Method_FriendRootComponent_OnEndRequestDialog__,
    0LL);
  if ( !Instance )
    goto LABEL_17;
  CommonUI__OpenNotificationDialog_30496496(
    (CommonUI_o *)Instance,
    0LL,
    v8,
    v11,
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
  void *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x8
  struct OtherUserGameEntity_o *v8; // x1
  const MethodInfo *v9; // x1
  __int64 *v10; // x8
  const MethodInfo *v11; // x1

  if ( (byte_4A5656C & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_OtherUserGameMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_11060/*"REQUEST_OK"*/);
    sub_1B885B0(&StringLiteral_22225/*"ok"*/);
    sub_1B885B0(&StringLiteral_11058/*"REQUEST_NG"*/);
    byte_4A5656C = 1;
  }
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_22225/*"ok"*/, 0LL) )
    goto LABEL_11;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_OtherUserGameMaster___);
  if ( !Instance )
    goto LABEL_14;
  Instance = OtherUserGameMaster__GetFriendCodeList(
               (OtherUserGameMaster_o *)Instance,
               this->fields.selectFriendCode,
               0LL);
  if ( !Instance )
    goto LABEL_14;
  v7 = *((_QWORD *)Instance + 3);
  if ( !v7 )
  {
LABEL_11:
    this->fields.selectFriendEntity = 0LL;
    sub_1B88554(&this->fields.selectFriendEntity, 0LL);
    FriendRootComponent__StartSearchInput(this, v11);
    Instance = this->fields.myFSM;
    if ( Instance )
    {
      v10 = &StringLiteral_11058/*"REQUEST_NG"*/;
      goto LABEL_13;
    }
LABEL_14:
    sub_1B8880C(Instance, v6);
  }
  if ( !(_DWORD)v7 )
    sub_1B88814(Instance, v6);
  v8 = (struct OtherUserGameEntity_o *)*((_QWORD *)Instance + 4);
  this->fields.selectFriendEntity = v8;
  sub_1B88554(&this->fields.selectFriendEntity, v8);
  FriendRootComponent__ChangeLimitCountBySpoilerProtection(this, v9);
  Instance = this->fields.myFSM;
  if ( !Instance )
    goto LABEL_14;
  v10 = &StringLiteral_11060/*"REQUEST_OK"*/;
LABEL_13:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v10, 0LL);
}


void __fastcall FriendRootComponent__EndShowServant(
        FriendRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v5; // x21
  const MethodInfo *v6; // x3
  __int64 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  Il2CppObject *Instance; // x20
  System_Action_o *v11; // x21

  if ( (byte_4A56553 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_FriendRootComponent_EndCloseShowServant__);
    sub_1B885B0(&Method_FriendRootComponent_OnSelectFriendItem__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A56553 = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v5 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1B887FC(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
    v6);
  if ( !operationItemListViewManager
    || (operationItemListViewManager->fields.callbackFunc = v5,
        sub_1B88554(&operationItemListViewManager->fields.callbackFunc, v5),
        FriendOperationItemListViewManager__SetMode_30901920(operationItemListViewManager, 5, v9),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v11 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo),
        System_Action___ctor(v11, (Il2CppObject *)this, Method_FriendRootComponent_EndCloseShowServant__, 0LL),
        !Instance) )
  {
    sub_1B8880C(v7, v8);
  }
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v11, 0LL);
}


void __fastcall FriendRootComponent__EndShowServantEquip(
        FriendRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4A5657D & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_FriendRootComponent_EndCloseShowServantEquip__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5657D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_FriendRootComponent_EndCloseShowServantEquip__, 0LL);
  if ( !Instance )
    sub_1B8880C(v6, v7);
  CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)Instance, v5, 0LL);
}


void __fastcall FriendRootComponent__FriendLockRequst(
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
  float x; // w8
  struct UnityEngine_GameObject_o *dragParentObject; // x8
  _BOOL4 v17; // w8
  struct System_Int64_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x8
  struct UnityEngine_GameObject_o *v22; // x8
  _BOOL4 v23; // w8
  struct System_Int64_array *v24; // x8
  _QWORD *v25; // x9
  __int64 v26; // x10
  struct System_Int64_array *v27; // x8
  _QWORD *v28; // x9
  __int64 v29; // x10
  struct System_Int64_array *v30; // x8
  _QWORD *v31; // x9
  __int64 v32; // x10
  __int64 v33; // x8
  System_Collections_Generic_List_long__o *v34; // x0
  NetworkManager_ResultCallbackFunc_o *v35; // x19
  FirendLockSyncRequest_o *v36; // x19
  System_Int64_array *v37; // x20
  System_Int64_array *v38; // x21
  System_Int64_array *v39; // x22

  if ( (byte_4A5657A & 1) == 0 )
  {
    sub_1B885B0(&Method_ActionExtensions_Call_string___);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_long__TypeInfo);
    sub_1B885B0(&Method_NetworkManager_getRequest_FirendLockSyncRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1B885B0(&Method_FriendRootComponent___c__DisplayClass113_0__FriendLockRequst_b__0__);
    sub_1B885B0(&FriendRootComponent___c__DisplayClass113_0_TypeInfo);
    sub_1B885B0(&StringLiteral_22225/*"ok"*/);
    byte_4A5657A = 1;
  }
  v5 = sub_1B887FC(FriendRootComponent___c__DisplayClass113_0_TypeInfo);
  FriendRootComponent___c__DisplayClass113_0___ctor((FriendRootComponent___c__DisplayClass113_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_55;
  *(_QWORD *)(v5 + 16) = this;
  sub_1B88554(v5 + 16, this);
  *(_QWORD *)(v5 + 32) = onFinishedRequest;
  sub_1B88554(v5 + 32, onFinishedRequest);
  operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    goto LABEL_55;
  if ( FriendOperationItemListViewManager__get_IsExistSwapLockUser(
         (FriendOperationItemListViewManager_o *)operationItemListViewManager,
         v7) )
  {
    v8 = (System_Collections_Generic_List_long__o *)sub_1B887FC(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v8,
      (const MethodInfo_34E5014 *)Method_System_Collections_Generic_List_long___ctor__);
    v9 = (System_Collections_Generic_List_long__o *)sub_1B887FC(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v9,
      (const MethodInfo_34E5014 *)Method_System_Collections_Generic_List_long___ctor__);
    v10 = (System_Collections_Generic_List_long__o *)sub_1B887FC(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v10,
      (const MethodInfo_34E5014 *)Method_System_Collections_Generic_List_long___ctor__);
    v11 = (System_Collections_Generic_List_long__o *)sub_1B887FC(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v11,
      (const MethodInfo_34E5014 *)Method_System_Collections_Generic_List_long___ctor__);
    operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
    if ( operationItemListViewManager )
    {
      ItemSum = ListViewManager__get_ItemSum(operationItemListViewManager, 0LL);
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
          x = operationItemListViewManager->fields.clipRange.fields.x;
          if ( LODWORD(x) == 9 )
            break;
          if ( LODWORD(x) == 3 )
          {
            dragParentObject = operationItemListViewManager->fields.dragParentObject;
            if ( !dragParentObject )
              goto LABEL_55;
            v7 = *(const MethodInfo **)&dragParentObject->fields.m_CachedPtr;
            if ( BYTE2(operationItemListViewManager->fields.SortObject) )
              v17 = BYTE1(operationItemListViewManager->fields.SortObject) == 0;
            else
              v17 = BYTE1(operationItemListViewManager->fields.SortObject) != 0;
            if ( v17 )
            {
              if ( !v8 )
                goto LABEL_55;
              items = v8->fields._items;
              v19 = Method_System_Collections_Generic_List_long__Add__;
              ++v8->fields._version;
              if ( !items )
                goto LABEL_55;
              size = v8->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                v33 = v19[4];
                v34 = v8;
LABEL_44:
                System_Collections_Generic_List_long___AddWithResize(
                  v34,
                  (int64_t)v7,
                  *(const MethodInfo_34E5868 **)(*(_QWORD *)(v33 + 192) + 112LL));
                goto LABEL_45;
              }
              v21 = &items->obj.klass + size;
              v8->fields._size = size + 1;
            }
            else
            {
              if ( !v9 )
                goto LABEL_55;
              v27 = v9->fields._items;
              v28 = Method_System_Collections_Generic_List_long__Add__;
              ++v9->fields._version;
              if ( !v27 )
                goto LABEL_55;
              v29 = v9->fields._size;
              if ( (unsigned int)v29 >= v27->max_length )
              {
                v33 = v28[4];
                v34 = v9;
                goto LABEL_44;
              }
              v21 = &v27->obj.klass + v29;
              v9->fields._size = v29 + 1;
            }
LABEL_39:
            v21[4] = (Il2CppClass *)v7;
          }
LABEL_45:
          if ( ++v14 >= *(_DWORD *)(v5 + 24) )
            goto LABEL_46;
        }
        v22 = operationItemListViewManager->fields.dragParentObject;
        if ( !v22 )
          goto LABEL_55;
        v7 = *(const MethodInfo **)&v22->fields.m_CachedPtr;
        if ( BYTE2(operationItemListViewManager->fields.SortObject) )
          v23 = BYTE1(operationItemListViewManager->fields.SortObject) == 0;
        else
          v23 = BYTE1(operationItemListViewManager->fields.SortObject) != 0;
        if ( v23 )
        {
          if ( !v10 )
            goto LABEL_55;
          v24 = v10->fields._items;
          v25 = Method_System_Collections_Generic_List_long__Add__;
          ++v10->fields._version;
          if ( !v24 )
            goto LABEL_55;
          v26 = v10->fields._size;
          if ( (unsigned int)v26 >= v24->max_length )
          {
            v33 = v25[4];
            v34 = v10;
            goto LABEL_44;
          }
          v21 = &v24->obj.klass + v26;
          v10->fields._size = v26 + 1;
        }
        else
        {
          if ( !v11 )
            goto LABEL_55;
          v30 = v11->fields._items;
          v31 = Method_System_Collections_Generic_List_long__Add__;
          ++v11->fields._version;
          if ( !v30 )
            goto LABEL_55;
          v32 = v11->fields._size;
          if ( (unsigned int)v32 >= v30->max_length )
          {
            v33 = v31[4];
            v34 = v11;
            goto LABEL_44;
          }
          v21 = &v30->obj.klass + v32;
          v11->fields._size = v32 + 1;
        }
        goto LABEL_39;
      }
LABEL_46:
      v35 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v35,
        (Il2CppObject *)v5,
        Method_FriendRootComponent___c__DisplayClass113_0__FriendLockRequst_b__0__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      operationItemListViewManager = (ListViewManager_o *)NetworkManager__getRequest_object_(
                                                            v35,
                                                            (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_FirendLockSyncRequest___);
      if ( v8 )
      {
        v36 = (FirendLockSyncRequest_o *)operationItemListViewManager;
        operationItemListViewManager = (ListViewManager_o *)System_Collections_Generic_List_long___ToArray(
                                                              v8,
                                                              (const MethodInfo_34E7320 *)Method_System_Collections_Generic_List_long__ToArray__);
        if ( v9 )
        {
          v37 = (System_Int64_array *)operationItemListViewManager;
          operationItemListViewManager = (ListViewManager_o *)System_Collections_Generic_List_long___ToArray(
                                                                v9,
                                                                (const MethodInfo_34E7320 *)Method_System_Collections_Generic_List_long__ToArray__);
          if ( v10 )
          {
            v38 = (System_Int64_array *)operationItemListViewManager;
            operationItemListViewManager = (ListViewManager_o *)System_Collections_Generic_List_long___ToArray(
                                                                  v10,
                                                                  (const MethodInfo_34E7320 *)Method_System_Collections_Generic_List_long__ToArray__);
            if ( v11 )
            {
              v39 = (System_Int64_array *)operationItemListViewManager;
              operationItemListViewManager = (ListViewManager_o *)System_Collections_Generic_List_long___ToArray(
                                                                    v11,
                                                                    (const MethodInfo_34E7320 *)Method_System_Collections_Generic_List_long__ToArray__);
              if ( v36 )
              {
                FirendLockSyncRequest__beginRequest(
                  v36,
                  v37,
                  v38,
                  v39,
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
    sub_1B8880C(operationItemListViewManager, v7);
  }
  ActionExtensions__Call_object_(
    *(System_Action_T__o **)(v5 + 32),
    (Il2CppObject *)StringLiteral_22225/*"ok"*/,
    (const MethodInfo_2DD5858 *)Method_ActionExtensions_Call_string___);
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
  if ( (byte_4A56575 & 1) == 0 )
  {
    this = (FriendRootComponent_o *)sub_1B885B0(&FSUtility_TypeInfo);
    byte_4A56575 = 1;
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
    sub_1B8880C(this, method);
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
    sub_1B8880C(modeButtonParent, method);
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
    sub_1B8880C(modeButtonParent, method);
  }
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v7, 0LL);
}


void __fastcall FriendRootComponent__OnClickBack(FriendRootComponent_o *this, const MethodInfo *method)
{
  int32_t state; // w8
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  FriendRootComponent_messageRequestCallback_o *v6; // x20
  const MethodInfo *v7; // x2

  if ( (byte_4A56570 & 1) == 0 )
  {
    sub_1B885B0(&Method_FriendRootComponent_OnClickBack__);
    sub_1B885B0(&Method_FriendRootComponent__OnClickBack_b__100_0__);
    sub_1B885B0(&FriendRootComponent_messageRequestCallback_TypeInfo);
    byte_4A56570 = 1;
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
    v4 = (_QWORD *)sub_1B885C8();
  v5 = (System_Reflection_MethodBase_o *)sub_1B88594(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
  v6 = (FriendRootComponent_messageRequestCallback_o *)sub_1B887FC(FriendRootComponent_messageRequestCallback_TypeInfo);
  FriendRootComponent_messageRequestCallback___ctor(
    v6,
    (Il2CppObject *)this,
    Method_FriendRootComponent__OnClickBack_b__100_0__,
    0LL);
  FriendRootComponent__messageDispChangeRequest(this, v6, v7);
}


void __fastcall FriendRootComponent__OnClickHelp(FriendRootComponent_o *this, const MethodInfo *method)
{
  _QWORD *v2; // x0
  System_Reflection_MethodBase_o *v3; // x0

  if ( (byte_4A56599 & 1) == 0 )
  {
    sub_1B885B0(&Method_FriendRootComponent_OnClickHelp__);
    byte_4A56599 = 1;
  }
  v2 = Method_FriendRootComponent_OnClickHelp__;
  if ( (*((_BYTE *)Method_FriendRootComponent_OnClickHelp__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_1B885C8();
  v3 = (System_Reflection_MethodBase_o *)sub_1B88594(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 0, 0LL);
  EventTutorialMaster__ShowTutorialWithoutCheck(-1, 49, 0LL, 0LL);
}


void __fastcall FriendRootComponent__OnClickModeEditLock(FriendRootComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4A56573 & 1) == 0 )
  {
    sub_1B885B0(&Method_FriendRootComponent_OnClickModeEditLock__);
    byte_4A56573 = 1;
  }
  if ( this->fields.currentModeKind != 1 )
  {
    v3 = Method_FriendRootComponent_OnClickModeEditLock__;
    if ( (*((_BYTE *)Method_FriendRootComponent_OnClickModeEditLock__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8();
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    this->fields.currentModeKind = 1;
    FriendRootComponent__RefreshInfo(this, v5);
  }
}


void __fastcall FriendRootComponent__OnClickModeUserDetail(FriendRootComponent_o *this, const MethodInfo *method)
{
  System_Action_object__o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4A56572 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_string__TypeInfo);
    sub_1B885B0(&Method_FriendRootComponent__OnClickModeUserDetail_b__102_0__);
    byte_4A56572 = 1;
  }
  if ( this->fields.currentModeKind )
  {
    v3 = (System_Action_object__o *)sub_1B887FC(System_Action_string__TypeInfo);
    System_Action_object____ctor(
      v3,
      (Il2CppObject *)this,
      (intptr_t)Method_FriendRootComponent__OnClickModeUserDetail_b__102_0__,
      0LL);
    FriendRootComponent__FriendLockRequst(this, (System_Action_string__o *)v3, v4);
  }
}


void __fastcall FriendRootComponent__OnClickTabFriend(FriendRootComponent_o *this, const MethodInfo *method)
{
  System_Action_object__o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4A56576 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_string__TypeInfo);
    sub_1B885B0(&Method_FriendRootComponent__OnClickTabFriend_b__109_0__);
    byte_4A56576 = 1;
  }
  v3 = (System_Action_object__o *)sub_1B887FC(System_Action_string__TypeInfo);
  System_Action_object____ctor(
    v3,
    (Il2CppObject *)this,
    (intptr_t)Method_FriendRootComponent__OnClickTabFriend_b__109_0__,
    0LL);
  FriendRootComponent__FriendLockRequst(this, (System_Action_string__o *)v3, v4);
}


void __fastcall FriendRootComponent__OnClickTabOffered(FriendRootComponent_o *this, const MethodInfo *method)
{
  FriendRootComponent_messageRequestCallback_o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4A56577 & 1) == 0 )
  {
    sub_1B885B0(&Method_FriendRootComponent__OnClickTabOffered_b__110_0__);
    sub_1B885B0(&FriendRootComponent_messageRequestCallback_TypeInfo);
    byte_4A56577 = 1;
  }
  v3 = (FriendRootComponent_messageRequestCallback_o *)sub_1B887FC(FriendRootComponent_messageRequestCallback_TypeInfo);
  FriendRootComponent_messageRequestCallback___ctor(
    v3,
    (Il2CppObject *)this,
    Method_FriendRootComponent__OnClickTabOffered_b__110_0__,
    0LL);
  FriendRootComponent__messageDispChangeRequest(this, v3, v4);
}


void __fastcall FriendRootComponent__OnClickTabSearch(FriendRootComponent_o *this, const MethodInfo *method)
{
  FriendRootComponent_messageRequestCallback_o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4A56578 & 1) == 0 )
  {
    sub_1B885B0(&Method_FriendRootComponent__OnClickTabSearch_b__111_0__);
    sub_1B885B0(&FriendRootComponent_messageRequestCallback_TypeInfo);
    byte_4A56578 = 1;
  }
  v3 = (FriendRootComponent_messageRequestCallback_o *)sub_1B887FC(FriendRootComponent_messageRequestCallback_TypeInfo);
  FriendRootComponent_messageRequestCallback___ctor(
    v3,
    (Il2CppObject *)this,
    Method_FriendRootComponent__OnClickTabSearch_b__111_0__,
    0LL);
  FriendRootComponent__messageDispChangeRequest(this, v3, v4);
}


void __fastcall FriendRootComponent__OnEndRequestDialog(
        FriendRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4A5656A & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&StringLiteral_11060/*"REQUEST_OK"*/);
    byte_4A5656A = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.myFSM) == 0LL) )
  {
    sub_1B8880C(Instance, v5);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_11060/*"REQUEST_OK"*/, 0LL);
}


void __fastcall FriendRootComponent__OnMoveEnd(FriendRootComponent_o *this, const MethodInfo *method)
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
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  FriendSearchMenu_o *friendSearchMenu; // x20
  FriendSearchMenu_CallbackFunc_o *v17; // x21
  FriendOperationItemListViewManager_o *v18; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v19; // x21
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x2
  const MethodInfo *v22; // x1
  struct ClassButtonControlComponent_o *v23; // x8
  FriendSearchMenu_o *v24; // x20
  FriendSearchMenu_CallbackFunc_o *v25; // x21

  v3 = this;
  if ( (byte_4A5656F & 1) == 0 )
  {
    sub_1B885B0(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&FriendSearchMenu_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_FriendRootComponent_OnSelectFriendItem__);
    sub_1B885B0(&Method_FriendRootComponent_OnSelectSearchFriend__);
    this = (FriendRootComponent_o *)sub_1B885B0(&StringLiteral_5468/*"END_ACTION"*/);
    byte_4A5656F = 1;
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
                                                                               0LL);
      if ( !operationItemListViewManager )
        goto LABEL_39;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)operationItemListViewManager, 0, 0LL);
      goto LABEL_27;
    case 7:
    case 8:
      v3->fields.state = 9;
      v7 = v3->fields.operationItemListViewManager;
      v8 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1B887FC(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
      FriendOperationItemListViewManager_CallbackFunc___ctor(
        v8,
        (Il2CppObject *)v3,
        (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
        v9);
      if ( !v7 )
        goto LABEL_39;
      v7->fields.callbackFunc = v8;
      sub_1B88554(&v7->fields.callbackFunc, v8);
      FriendOperationItemListViewManager__SetMode_30901920(v7, 2, v10);
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
      v12 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1B887FC(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
      FriendOperationItemListViewManager_CallbackFunc___ctor(
        v12,
        (Il2CppObject *)v3,
        (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
        v13);
      if ( !v11 )
        goto LABEL_39;
      v11->fields.callbackFunc = v12;
      sub_1B88554(&v11->fields.callbackFunc, v12);
      FriendOperationItemListViewManager__SetMode_30901920(v11, 2, v14);
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
      v18 = v3->fields.operationItemListViewManager;
      v19 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1B887FC(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
      FriendOperationItemListViewManager_CallbackFunc___ctor(
        v19,
        (Il2CppObject *)v3,
        (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
        v20);
      if ( !v18 )
        goto LABEL_39;
      v18->fields.callbackFunc = v19;
      sub_1B88554(&v18->fields.callbackFunc, v19);
      FriendOperationItemListViewManager__SetMode_30901920(v18, 2, v21);
      goto LABEL_28;
    case 0x14:
    case 0x15:
      v3->fields.state = 23;
      friendSearchMenu = v3->fields.friendSearchMenu;
      v17 = (FriendSearchMenu_CallbackFunc_o *)sub_1B887FC(FriendSearchMenu_CallbackFunc_TypeInfo);
      FriendSearchMenu_CallbackFunc___ctor(
        v17,
        (Il2CppObject *)v3,
        Method_FriendRootComponent_OnSelectSearchFriend__,
        0LL);
      if ( !friendSearchMenu )
        goto LABEL_39;
      FriendSearchMenu__Open(friendSearchMenu, v17, 0, 0LL);
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
        (System_String_o *)StringLiteral_5468/*"END_ACTION"*/,
        0LL);
      break;
    case 0x16:
      jumpTabKind = v3->fields.jumpTabKind;
      v3->fields.state = 23;
      if ( jumpTabKind == 3 )
        FriendRootComponent__set_tabKind(this, 2, v2);
      FriendRootComponent__RefreshTab(v3, method);
      FriendRootComponent__RefreshInfo(v3, v22);
      v23 = v3->fields.classButtonControl;
      if ( !v23 )
        goto LABEL_39;
      v23->fields.updateEnable = 1;
      v24 = v3->fields.friendSearchMenu;
      v25 = (FriendSearchMenu_CallbackFunc_o *)sub_1B887FC(FriendSearchMenu_CallbackFunc_TypeInfo);
      FriendSearchMenu_CallbackFunc___ctor(
        v25,
        (Il2CppObject *)v3,
        Method_FriendRootComponent_OnSelectSearchFriend__,
        0LL);
      if ( !v24 )
        goto LABEL_39;
      FriendSearchMenu__Open(v24, v25, 1, 0LL);
LABEL_18:
      operationItemListViewManager = (FriendOperationItemListViewManager_o *)v3->fields.myFSM;
      if ( !operationItemListViewManager )
LABEL_39:
        sub_1B8880C(operationItemListViewManager, method);
      PlayMakerFSM__SendEvent(
        (PlayMakerFSM_o *)operationItemListViewManager,
        (System_String_o *)StringLiteral_5468/*"END_ACTION"*/,
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


void __fastcall FriendRootComponent__OnSelectFriendItem(
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
  Il2CppObject *v23; // x0
  System_String_o *v24; // x0
  _QWORD *v25; // x0
  System_Reflection_MethodBase_o *v26; // x0
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v28; // x0
  const MethodInfo *v29; // x3
  intptr_t v30; // w2
  _QWORD *v31; // x0
  System_Reflection_MethodBase_o *v32; // x0
  const MethodInfo *v33; // x2
  FriendOperationItemListViewItem_o *v34; // x21
  Il2CppObject *lockCountObj; // x8
  const MethodInfo *v36; // x2
  __int64 v37; // x20
  SkillInfo_o *v38; // x25
  Il2CppObject *Entity; // x21
  DataManager_o *v40; // x20
  System_String_o *v41; // x21
  System_String_o *v42; // x22
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  Il2CppObject *v46; // x0
  System_String_o *v47; // x0
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x4
  System_String_o *v51; // x21
  Il2CppObject *v52; // x0
  System_String_o *v53; // x20
  _QWORD *v54; // x0
  System_Reflection_MethodBase_o *v55; // x0
  __int64 *v56; // x8
  _QWORD *v57; // x0
  System_Reflection_MethodBase_o *v58; // x0
  _QWORD *v59; // x0
  System_Reflection_MethodBase_o *v60; // x0
  _QWORD *v61; // x0
  System_Reflection_MethodBase_o *v62; // x0
  _QWORD *v63; // x0
  System_Reflection_MethodBase_o *v64; // x0
  const MethodInfo *v65; // x2
  DataManager_o *v66; // x8
  const MethodInfo *v67; // x2
  _QWORD *v68; // x0
  System_Reflection_MethodBase_o *v69; // x0
  const MethodInfo *v70; // x2
  DataManager_o *v71; // x8
  Il2CppObject *v72; // x9
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  const MethodInfo *v74; // x2
  _QWORD *v75; // x0
  System_Reflection_MethodBase_o *v76; // x0
  const MethodInfo *v77; // x2
  const MethodInfo *v78; // x2
  FriendOperationItemListViewItem_o *v79; // x20
  ServantLeaderInfo_o *ServantLeader; // x0
  const MethodInfo *v81; // x1
  EquipTargetInfo_o *EquipTargetInfo; // x0
  EquipTargetInfo_o *v83; // x21
  __int64 v84; // x22
  __int64 v85; // x23
  _QWORD *v86; // x0
  System_Reflection_MethodBase_o *v87; // x0
  const MethodInfo *v88; // x3
  int32_t v89; // w2
  FriendWarningDialog_o *friendWarningDialog; // x20
  FriendWarningDialog_CallbackFunc_o *v91; // x21
  _QWORD *v92; // x0
  System_Reflection_MethodBase_o *v93; // x0
  struct FriendOperationItemListViewManager_CallbackFunc_o *v94; // x21
  const MethodInfo *v95; // x2
  FriendOperationItemListViewItem_o *Item; // x0
  FriendOperationItemListViewItem_o *v97; // x20
  _QWORD *v98; // x0
  System_Reflection_MethodBase_o *v99; // x0
  const MethodInfo *v100; // x1
  int m_CancellationTokenSource; // [xsp+8h] [xbp-78h] BYREF
  int32_t lv; // [xsp+Ch] [xbp-74h] BYREF
  System_String_o *detail; // [xsp+10h] [xbp-70h] BYREF
  System_String_o *name; // [xsp+18h] [xbp-68h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+20h] [xbp-60h] BYREF
  System_String_o *v106; // [xsp+28h] [xbp-58h] BYREF
  System_String_o *v107; // [xsp+30h] [xbp-50h] BYREF
  SkillInfo_array *v108; // [xsp+38h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v109; // 0:x0.16

  if ( (byte_4A5657F & 1) == 0 )
  {
    sub_1B885B0(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&FriendWarningDialog_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_TblFriendMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1B885B0(&Method_FriendRootComponent_EndMaxFriendWarning__);
    sub_1B885B0(&Method_FriendRootComponent_OnSelectFriendItem__);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_8626/*"MENU_SELECT_ITEM_ACCEPT"*/);
    sub_1B885B0(&StringLiteral_117/*" "*/);
    sub_1B885B0(&StringLiteral_8632/*"MENU_SELECT_ITEM_REMOVE_FOLLOW"*/);
    sub_1B885B0(&StringLiteral_8627/*"MENU_SELECT_ITEM_CANCEL"*/);
    sub_1B885B0(&StringLiteral_8522/*"MASTER_EQSKILL_LV_TXT"*/);
    sub_1B885B0(&StringLiteral_8629/*"MENU_SELECT_ITEM_OFFER"*/);
    sub_1B885B0(&StringLiteral_2983/*"BATTLE_SKILLCHARGETURN"*/);
    sub_1B885B0(&StringLiteral_8630/*"MENU_SELECT_ITEM_REJECT"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_8631/*"MENU_SELECT_ITEM_REMOVE"*/);
    byte_4A5657F = 1;
  }
  v107 = 0LL;
  v108 = 0LL;
  skillInfoList = 0LL;
  v106 = 0LL;
  detail = 0LL;
  name = 0LL;
  this->fields.selectItemNum = n;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_133;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_TblFriendMaster___);
  switch ( kind )
  {
    case 1:
    case 2:
    case 3:
      v31 = Method_FriendRootComponent_OnSelectFriendItem__;
      if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
        v31 = (_QWORD *)sub_1B885C8();
      v32 = (System_Reflection_MethodBase_o *)sub_1B88594(v31, v31[4]);
      OverwriteAssetSoundName__PlaySystemSe(v32, 0, 0LL);
      Instance = (DataManager_o *)this->fields.operationItemListViewManager;
      if ( !Instance )
        goto LABEL_133;
      Instance = (DataManager_o *)FriendOperationItemListViewManager__GetItem(
                                    (FriendOperationItemListViewManager_o *)Instance,
                                    this->fields.selectItemNum,
                                    v33);
      if ( !Instance )
        goto LABEL_133;
      v34 = (FriendOperationItemListViewItem_o *)Instance;
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
              v34->fields.classPos,
              0,
              0,
              (int32_t)lockCountObj[2].klass,
              0LL) )
        goto LABEL_55;
      if ( kind == 2 )
        v37 = 1LL;
      else
        v37 = 2LL * (kind == 3);
      Instance = (DataManager_o *)FriendOperationItemListViewItem__GetSkillInfo(v34, &v108, v36);
      if ( !v108 )
        goto LABEL_133;
      if ( (unsigned int)v37 >= v108->max_length )
        goto LABEL_134;
      v38 = v108->m_Items[v37];
      if ( !v38 || v38->fields.id < 1 || v38->fields.lv < 1 )
        goto LABEL_55;
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_133;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SkillMaster___);
      if ( !Instance )
        goto LABEL_133;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                 v38->fields.id,
                 (const MethodInfo_311D934 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_133;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SkillLvMaster___);
      if ( !Instance )
        goto LABEL_133;
      Instance = (DataManager_o *)SkillLvMaster__GetEntity(
                                    (SkillLvMaster_o *)Instance,
                                    v38->fields.id,
                                    v38->fields.lv,
                                    0LL);
      if ( !Entity )
        goto LABEL_133;
      v40 = Instance;
      SkillEntity__getSkillMessageInfo((SkillEntity_o *)Entity, &v107, &v106, v38->fields.lv, 0LL);
      v41 = v107;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v42 = LocalizationManager__Get((System_String_o *)StringLiteral_8522/*"MASTER_EQSKILL_LV_TXT"*/, 0LL);
      lv = v38->fields.lv;
      v46 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv, v43, v44, v45);
      v47 = System_String__Format(v42, v46, 0LL);
      v107 = System_String__Concat_61718292(v41, (System_String_o *)StringLiteral_117/*" "*/, v47, 0LL);
      Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2983/*"BATTLE_SKILLCHARGETURN"*/, 0LL);
      if ( !v40 )
        goto LABEL_133;
      v51 = (System_String_o *)Instance;
      m_CancellationTokenSource = (int)v40->fields.m_CancellationTokenSource;
      v52 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &m_CancellationTokenSource, v48, v49, v50);
      v53 = System_String__Format(v51, v52, 0LL);
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !Instance )
        goto LABEL_133;
      CommonUI__OpenDetailLongInfoDialog((CommonUI_o *)Instance, v107, v53, v106, 1, 0, 0LL);
LABEL_55:
      operationItemListViewManager = this->fields.operationItemListViewManager;
      v28 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1B887FC(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
      v30 = (int)Method_FriendRootComponent_OnSelectFriendItem__;
      goto LABEL_123;
    case 4:
      v54 = Method_FriendRootComponent_OnSelectFriendItem__;
      if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
        v54 = (_QWORD *)sub_1B885C8();
      v55 = (System_Reflection_MethodBase_o *)sub_1B88594(v54, v54[4]);
      OverwriteAssetSoundName__PlaySystemSe(v55, 0, 0LL);
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
      v56 = &StringLiteral_8629/*"MENU_SELECT_ITEM_OFFER"*/;
      goto LABEL_126;
    case 5:
      v57 = Method_FriendRootComponent_OnSelectFriendItem__;
      if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
        v57 = (_QWORD *)sub_1B885C8();
      v58 = (System_Reflection_MethodBase_o *)sub_1B88594(v57, v57[4]);
      OverwriteAssetSoundName__PlaySystemSe(v58, 0, 0LL);
      if ( !MasterData_object )
        goto LABEL_133;
      Instance = (DataManager_o *)TblFriendMaster__GetList((TblFriendMaster_o *)MasterData_object, 3, 0LL);
      if ( !Instance || !SelfUserGame )
        goto LABEL_133;
      if ( SelfUserGame->fields.friendKeep <= SLODWORD(Instance->fields.m_CancellationTokenSource) )
      {
LABEL_117:
        friendWarningDialog = this->fields.friendWarningDialog;
        v91 = (FriendWarningDialog_CallbackFunc_o *)sub_1B887FC(FriendWarningDialog_CallbackFunc_TypeInfo);
        FriendWarningDialog_CallbackFunc___ctor(
          v91,
          (Il2CppObject *)this,
          Method_FriendRootComponent_EndMaxFriendWarning__,
          0LL);
        if ( friendWarningDialog )
        {
          FriendWarningDialog__Open(friendWarningDialog, 1, v91, 0LL);
          return;
        }
LABEL_133:
        sub_1B8880C(Instance, v9);
      }
      Instance = (DataManager_o *)this->fields.myFSM;
      if ( !Instance )
        goto LABEL_133;
      v56 = &StringLiteral_8626/*"MENU_SELECT_ITEM_ACCEPT"*/;
LABEL_126:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v56, 0LL);
      return;
    case 6:
      v59 = Method_FriendRootComponent_OnSelectFriendItem__;
      if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
        v59 = (_QWORD *)sub_1B885C8();
      v60 = (System_Reflection_MethodBase_o *)sub_1B88594(v59, v59[4]);
      OverwriteAssetSoundName__PlaySystemSe(v60, 0, 0LL);
      Instance = (DataManager_o *)this->fields.myFSM;
      if ( !Instance )
        goto LABEL_133;
      v56 = &StringLiteral_8630/*"MENU_SELECT_ITEM_REJECT"*/;
      goto LABEL_126;
    case 7:
      v61 = Method_FriendRootComponent_OnSelectFriendItem__;
      if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
        v61 = (_QWORD *)sub_1B885C8();
      v62 = (System_Reflection_MethodBase_o *)sub_1B88594(v61, v61[4]);
      OverwriteAssetSoundName__PlaySystemSe(v62, 0, 0LL);
      Instance = (DataManager_o *)this->fields.myFSM;
      if ( !Instance )
        goto LABEL_133;
      v56 = &StringLiteral_8627/*"MENU_SELECT_ITEM_CANCEL"*/;
      goto LABEL_126;
    case 8:
      v63 = Method_FriendRootComponent_OnSelectFriendItem__;
      if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
        v63 = (_QWORD *)sub_1B885C8();
      v64 = (System_Reflection_MethodBase_o *)sub_1B88594(v63, v63[4]);
      OverwriteAssetSoundName__PlaySystemSe(v64, 0, 0LL);
      Instance = (DataManager_o *)this->fields.operationItemListViewManager;
      if ( !Instance )
        goto LABEL_133;
      Instance = (DataManager_o *)FriendOperationItemListViewManager__GetItem(
                                    (FriendOperationItemListViewManager_o *)Instance,
                                    this->fields.selectItemNum,
                                    v65);
      if ( !Instance )
        goto LABEL_133;
      v66 = Instance;
      Instance = (DataManager_o *)this->fields.myFSM;
      if ( !Instance )
        goto LABEL_133;
      if ( LODWORD(v66->fields.masterLoadThreads) == 9 )
        v56 = &StringLiteral_8632/*"MENU_SELECT_ITEM_REMOVE_FOLLOW"*/;
      else
        v56 = &StringLiteral_8631/*"MENU_SELECT_ITEM_REMOVE"*/;
      goto LABEL_126;
    case 11:
      v75 = Method_FriendRootComponent_OnSelectFriendItem__;
      if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
        v75 = (_QWORD *)sub_1B885C8();
      v76 = (System_Reflection_MethodBase_o *)sub_1B88594(v75, v75[4]);
      OverwriteAssetSoundName__PlaySystemSe(v76, 0, 0LL);
      Instance = (DataManager_o *)this->fields.operationItemListViewManager;
      if ( !Instance )
        goto LABEL_133;
      Instance = (DataManager_o *)FriendOperationItemListViewManager__GetItem(
                                    (FriendOperationItemListViewManager_o *)Instance,
                                    this->fields.selectItemNum,
                                    v77);
      if ( !Instance )
        goto LABEL_133;
      FriendOperationItemListViewItem__set_isSwapMessageDisp(
        (FriendOperationItemListViewItem_o *)Instance,
        LOBYTE(Instance[1].fields.m_CancellationTokenSource) == 0,
        v78);
      goto LABEL_122;
    case 12:
      Instance = (DataManager_o *)this->fields.operationItemListViewManager;
      if ( !Instance )
        goto LABEL_133;
      Instance = (DataManager_o *)FriendOperationItemListViewManager__GetItem(
                                    (FriendOperationItemListViewManager_o *)Instance,
                                    this->fields.selectItemNum,
                                    v10);
      if ( !Instance )
        goto LABEL_133;
      v79 = (FriendOperationItemListViewItem_o *)Instance;
      ServantLeader = FriendOperationItemListViewItem__get_ServantLeader(
                        (FriendOperationItemListViewItem_o *)Instance,
                        v9);
      if ( !ServantLeader || !ServantLeaderInfo__IsHideEquip(ServantLeader, 0LL) )
      {
        EquipTargetInfo = FriendOperationItemListViewItem__get_EquipTargetInfo(v79, v81);
        if ( EquipTargetInfo )
        {
          v83 = EquipTargetInfo;
          v85 = *(_QWORD *)&EquipTargetInfo->fields.svtId.fields.currentCryptoKey;
          v84 = *(_QWORD *)&EquipTargetInfo->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v109.fields.currentCryptoKey = v85;
          *(_QWORD *)&v109.fields.fakeValue = v84;
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v109, 0LL) >= 1 )
          {
            v86 = Method_FriendRootComponent_OnSelectFriendItem__;
            if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
              v86 = (_QWORD *)sub_1B885C8();
            v87 = (System_Reflection_MethodBase_o *)sub_1B88594(v86, v86[4]);
            OverwriteAssetSoundName__PlaySystemSe(v87, 0, 0LL);
            if ( v79->fields.kind == 9 )
              v89 = 14;
            else
              v89 = 13;
            FriendRootComponent__SelectShowServantEquip(this, v83, v89, v88);
            return;
          }
        }
      }
      v92 = Method_FriendRootComponent_OnSelectFriendItem__;
      if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
        v92 = (_QWORD *)sub_1B885C8();
      v93 = (System_Reflection_MethodBase_o *)sub_1B88594(v92, v92[4]);
      OverwriteAssetSoundName__PlaySystemSe(v93, 2, 0LL);
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
                                    v10);
      v13 = (unsigned int)(kind - 14);
      v14 = (unsigned int)v13 < 4 ? v13 + 1 : 0LL;
      if ( !Instance )
        goto LABEL_133;
      Instance = (DataManager_o *)FriendOperationItemListViewItem__GetAppendSkillInfo(
                                    (FriendOperationItemListViewItem_o *)Instance,
                                    &skillInfoList,
                                    v12);
      if ( !skillInfoList )
        goto LABEL_133;
      if ( (unsigned int)v14 >= skillInfoList->max_length )
        goto LABEL_134;
      v15 = skillInfoList->m_Items[v14];
      if ( v15 && v15->fields.id >= 1 && v15->fields.lv >= 1 )
      {
        v16 = Method_FriendRootComponent_OnSelectFriendItem__;
        if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
          v16 = (_QWORD *)sub_1B885C8();
        v17 = (System_Reflection_MethodBase_o *)sub_1B88594(v16, v16[4]);
        OverwriteAssetSoundName__PlaySystemSe(v17, 0, 0LL);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_SkillMaster___);
        if ( !Instance )
          goto LABEL_133;
        Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                      v15->fields.id,
                                      (const MethodInfo_311D934 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_133;
        SkillEntity__getSkillMessageInfo((SkillEntity_o *)Instance, &name, &detail, v15->fields.lv, 0LL);
        v18 = name;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v19 = LocalizationManager__Get((System_String_o *)StringLiteral_8522/*"MASTER_EQSKILL_LV_TXT"*/, 0LL);
        lv = v15->fields.lv;
        v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv, v20, v21, v22);
        v24 = System_String__Format(v19, v23, 0LL);
        name = System_String__Concat_61718292(v18, (System_String_o *)StringLiteral_117/*" "*/, v24, 0LL);
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
        v25 = Method_FriendRootComponent_OnSelectFriendItem__;
        if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
          v25 = (_QWORD *)sub_1B885C8();
        v26 = (System_Reflection_MethodBase_o *)sub_1B88594(v25, v25[4]);
        OverwriteAssetSoundName__PlaySystemSe(v26, 2, 0LL);
      }
      goto LABEL_28;
    default:
      if ( this->fields.currentModeKind == 1 && !FriendRootComponent__get_tabKind(this, v9) )
      {
        Instance = (DataManager_o *)this->fields.operationItemListViewManager;
        if ( !Instance )
          goto LABEL_133;
        Item = FriendOperationItemListViewManager__GetItem(
                 (FriendOperationItemListViewManager_o *)Instance,
                 this->fields.selectItemNum,
                 v67);
        if ( Item )
        {
          v97 = Item;
          v98 = Method_FriendRootComponent_OnSelectFriendItem__;
          if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
            v98 = (_QWORD *)sub_1B885C8();
          v99 = (System_Reflection_MethodBase_o *)sub_1B88594(v98, v98[4]);
          OverwriteAssetSoundName__PlaySystemSe(v99, 11, 0LL);
          FriendOperationItemListViewItem__SwapLock(v97, v100);
        }
LABEL_28:
        operationItemListViewManager = this->fields.operationItemListViewManager;
        v28 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1B887FC(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
        v30 = (int)Method_FriendRootComponent_OnSelectFriendItem__;
      }
      else
      {
        v68 = Method_FriendRootComponent_OnSelectFriendItem__;
        if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
          v68 = (_QWORD *)sub_1B885C8();
        v69 = (System_Reflection_MethodBase_o *)sub_1B88594(v68, v68[4]);
        OverwriteAssetSoundName__PlaySystemSe(v69, 0, 0LL);
        Instance = (DataManager_o *)this->fields.operationItemListViewManager;
        if ( !Instance )
          goto LABEL_133;
        Instance = (DataManager_o *)FriendOperationItemListViewManager__GetItem(
                                      (FriendOperationItemListViewManager_o *)Instance,
                                      this->fields.selectItemNum,
                                      v70);
        if ( !Instance )
          goto LABEL_133;
        v71 = Instance;
        Instance = (DataManager_o *)Instance->fields.context;
        if ( !Instance )
          goto LABEL_133;
        v72 = Instance->fields.lockCountObj;
        if ( !v72 )
          goto LABEL_133;
        if ( !LODWORD(v72[1].monitor) )
LABEL_134:
          sub_1B88814(Instance, v9);
        ServantLeaderInfo = OtherUserGameEntity__getServantLeaderInfo(
                              (OtherUserGameEntity_o *)Instance,
                              v71[1].fields.m_CachedPtr,
                              0,
                              0,
                              (int32_t)v72[2].klass,
                              0LL);
        if ( ServantLeaderInfo )
        {
          FriendRootComponent__SelectShowServant(this, ServantLeaderInfo, v74);
          return;
        }
LABEL_122:
        operationItemListViewManager = this->fields.operationItemListViewManager;
        v28 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1B887FC(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
        v30 = (int)Method_FriendRootComponent_OnSelectFriendItem__;
      }
LABEL_123:
      v94 = v28;
      FriendOperationItemListViewManager_CallbackFunc___ctor(v28, (Il2CppObject *)this, v30, v29);
      if ( operationItemListViewManager )
      {
        operationItemListViewManager->fields.callbackFunc = v94;
        sub_1B88554(&operationItemListViewManager->fields.callbackFunc, v94);
        FriendOperationItemListViewManager__SetMode_30901920(operationItemListViewManager, 2, v95);
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
  ClassButtonControlComponent_o *classButtonControl; // x0
  __int64 *v8; // x8

  if ( (byte_4A56589 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_8628/*"MENU_SELECT_ITEM_FOLLOW"*/);
    sub_1B885B0(&StringLiteral_8629/*"MENU_SELECT_ITEM_OFFER"*/);
    sub_1B885B0(&StringLiteral_8612/*"MENU_CANCEL"*/);
    byte_4A56589 = 1;
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
      v8 = &StringLiteral_8628/*"MENU_SELECT_ITEM_FOLLOW"*/;
      goto LABEL_12;
    }
LABEL_13:
    sub_1B8880C(classButtonControl, *(_QWORD *)&state);
  }
  if ( state != 2 )
  {
    classButtonControl = (ClassButtonControlComponent_o *)this->fields.myFSM;
    if ( classButtonControl )
    {
      v8 = &StringLiteral_8612/*"MENU_CANCEL"*/;
      goto LABEL_12;
    }
    goto LABEL_13;
  }
  classButtonControl = (ClassButtonControlComponent_o *)this->fields.myFSM;
  if ( !classButtonControl )
    goto LABEL_13;
  v8 = &StringLiteral_8629/*"MENU_SELECT_ITEM_OFFER"*/;
LABEL_12:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)classButtonControl, (System_String_o *)*v8, 0LL);
}


void __fastcall FriendRootComponent__OnSelectSearchFriend(
        FriendRootComponent_o *this,
        bool isDecide,
        System_String_o *friendCode,
        const MethodInfo *method)
{
  __int64 v7; // x1
  PlayMakerFSM_o *myFSM; // x0
  __int64 *v9; // x8

  if ( (byte_4A56588 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_8613/*"MENU_DECIDE"*/);
    sub_1B885B0(&StringLiteral_8612/*"MENU_CANCEL"*/);
    byte_4A56588 = 1;
  }
  this->fields.selectFriendCode = friendCode;
  sub_1B88554(&this->fields.selectFriendCode, friendCode);
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1B8880C(0LL, v7);
  v9 = &StringLiteral_8613/*"MENU_DECIDE"*/;
  if ( !isDecide )
    v9 = &StringLiteral_8612/*"MENU_CANCEL"*/;
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)*v9, 0LL);
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
    sub_1B8880C(operationItemListViewManager, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)operationItemListViewManager, 0, 0LL);
  FriendRootComponent__RefreshInfo(this, v4);
  this->fields.state = 0;
}


void __fastcall FriendRootComponent__RefreshInfo(FriendRootComponent_o *this, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x22
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *v7; // x0
  UILabel_o *friendCountLabel; // x23
  UserFollowMaster_o *v9; // x21
  System_String_o *v10; // x24
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  Il2CppObject *v17; // x25
  Il2CppObject *v18; // x0
  UILabel_o *followCountLabel; // x22
  System_String_o *v20; // x23
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  __int64 v24; // x0
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  BalanceConfig_c *v28; // x8
  Il2CppObject *v29; // x21
  Il2CppObject *v30; // x0
  const MethodInfo *v31; // x1
  const MethodInfo *v32; // x1
  int32_t FollowNum; // [xsp+0h] [xbp-60h] BYREF
  int32_t FollowSum; // [xsp+4h] [xbp-5Ch] BYREF
  int32_t friendKeep; // [xsp+8h] [xbp-58h] BYREF
  int32_t FriendSum; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4A56545 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_TblFriendMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserFollowMaster___);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_6535/*"FRIEND_SHOW_INFOMATION"*/);
    byte_4A56545 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_TblFriendMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  v7 = DataManager__GetMasterData_object_(
         Instance,
         (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserFollowMaster___);
  friendCountLabel = this->fields.friendCountLabel;
  v9 = (UserFollowMaster_o *)v7;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6535/*"FRIEND_SHOW_INFOMATION"*/, 0LL);
  if ( !MasterData_object )
    goto LABEL_16;
  v10 = (System_String_o *)Instance;
  FriendSum = TblFriendMaster__GetFriendSum((TblFriendMaster_o *)MasterData_object, 0LL);
  Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &FriendSum, v11, v12, v13);
  if ( !SelfUserGame )
    goto LABEL_16;
  v17 = (Il2CppObject *)Instance;
  friendKeep = SelfUserGame->fields.friendKeep;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &friendKeep, v14, v15, v16);
  Instance = (DataManager_o *)System_String__Format_61721404(v10, v17, v18, 0LL);
  if ( !friendCountLabel )
    goto LABEL_16;
  UILabel__set_text(friendCountLabel, (System_String_o *)Instance, 0LL);
  followCountLabel = this->fields.followCountLabel;
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6535/*"FRIEND_SHOW_INFOMATION"*/, 0LL);
  if ( !v9 )
    goto LABEL_16;
  v20 = (System_String_o *)Instance;
  FollowSum = UserFollowMaster__GetFollowSum(v9, 0LL);
  v24 = j_il2cpp_value_box_0(int_TypeInfo, &FollowSum, v21, v22, v23);
  v28 = BalanceConfig_TypeInfo;
  v29 = (Il2CppObject *)v24;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v28 = BalanceConfig_TypeInfo;
  }
  FollowNum = v28->static_fields->FollowNum;
  v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &FollowNum, v25, v26, v27);
  Instance = (DataManager_o *)System_String__Format_61721404(v20, v29, v30, 0LL);
  if ( !followCountLabel
    || (UILabel__set_text(followCountLabel, (System_String_o *)Instance, 0LL),
        Instance = (DataManager_o *)TblFriendMaster__GetSum((TblFriendMaster_o *)MasterData_object, 2, 0LL),
        !this->fields.noticeNumber) )
  {
LABEL_16:
    sub_1B8880C(Instance, v5);
  }
  NoticeNumberComponent__SetNumber(this->fields.noticeNumber, (int32_t)Instance, 0LL);
  FriendRootComponent__CheckModeKind(this, v31);
  FriendRootComponent__CheckHelpUI(this, v32);
}


void __fastcall FriendRootComponent__RefreshTab(FriendRootComponent_o *this, const MethodInfo *method)
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

  if ( (byte_4A56544 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_17583/*"btn_txt_friendsearch_on"*/);
    sub_1B885B0(&StringLiteral_17582/*"btn_txt_friendsearch_off"*/);
    sub_1B885B0(&StringLiteral_17475/*"btn_bg_09"*/);
    sub_1B885B0(&StringLiteral_17581/*"btn_txt_friendrequest_on"*/);
    sub_1B885B0(&StringLiteral_17579/*"btn_txt_friendlist_on"*/);
    sub_1B885B0(&StringLiteral_17580/*"btn_txt_friendrequest_off"*/);
    sub_1B885B0(&StringLiteral_17578/*"btn_txt_friendlist_off"*/);
    sub_1B885B0(&StringLiteral_17494/*"btn_bg_on"*/);
    byte_4A56544 = 1;
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
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17578/*"btn_txt_friendlist_off"*/, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabOfferedTitleSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17580/*"btn_txt_friendrequest_off"*/, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabSearchTitleSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17583/*"btn_txt_friendsearch_on"*/, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabFriendSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17475/*"btn_bg_09"*/, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabOfferedSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17475/*"btn_bg_09"*/, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabSearchSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      v7 = (System_String_o *)StringLiteral_17494/*"btn_bg_on"*/;
LABEL_45:
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, v7, 0LL);
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
      sub_1B8880C(tabFriendButton, v4);
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
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17578/*"btn_txt_friendlist_off"*/, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabOfferedTitleSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17581/*"btn_txt_friendrequest_on"*/, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabSearchTitleSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17582/*"btn_txt_friendsearch_off"*/, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabFriendSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17475/*"btn_bg_09"*/, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabOfferedSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      v6 = (System_String_o *)StringLiteral_17494/*"btn_bg_on"*/;
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
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17579/*"btn_txt_friendlist_on"*/, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabOfferedTitleSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17580/*"btn_txt_friendrequest_off"*/, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabSearchTitleSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17582/*"btn_txt_friendsearch_off"*/, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabFriendSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17494/*"btn_bg_on"*/, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabOfferedSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      v6 = (System_String_o *)StringLiteral_17475/*"btn_bg_09"*/;
LABEL_43:
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, v6, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabSearchSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      v7 = (System_String_o *)StringLiteral_17475/*"btn_bg_09"*/;
      goto LABEL_45;
  }
  FriendRootComponent__CheckModeKind(this, v4);
  FriendRootComponent__CheckHelpUI(this, v8);
  v10 = FriendRootComponent__get_tabKind(this, v9) == 0;
  FriendRootComponent__SetActiveModeKindButtons(this, v10, v11);
  v12 = this->fields.tabFriendButton;
  if ( !v12 )
    goto LABEL_53;
  enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.tabFriendButton, 0LL);
  UICommonButton__SetColliderEnable(v12, enabled, 1, 0LL);
  tabOfferedButton = this->fields.tabOfferedButton;
  if ( !tabOfferedButton )
    goto LABEL_53;
  v15 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.tabOfferedButton, 0LL);
  UICommonButton__SetColliderEnable(tabOfferedButton, v15, 1, 0LL);
  tabSearchButton = (UnityEngine_Behaviour_o *)this->fields.tabSearchButton;
  if ( !tabSearchButton )
    goto LABEL_53;
  v17 = UnityEngine_Behaviour__get_enabled(tabSearchButton, 0LL);
  UICommonButton__SetColliderEnable((UICommonButton_o *)tabSearchButton, v17, 1, 0LL);
}


void __fastcall FriendRootComponent__RequestFollowAssign(FriendRootComponent_o *this, const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v3; // x20
  FollowAssignRequest_o *Request_object; // x0
  struct OtherUserGameEntity_o *selectFriendEntity; // x8

  if ( (byte_4A5658E & 1) == 0 )
  {
    sub_1B885B0(&Method_FriendRootComponent_EndRequestFollowAssign__);
    sub_1B885B0(&Method_NetworkManager_getRequest_FollowAssignRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1B885B0(&StringLiteral_11058/*"REQUEST_NG"*/);
    byte_4A5658E = 1;
  }
  if ( this->fields.selectFriendEntity )
  {
    v3 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v3,
      (Il2CppObject *)this,
      Method_FriendRootComponent_EndRequestFollowAssign__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = (FollowAssignRequest_o *)NetworkManager__getRequest_object_(
                                                v3,
                                                (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_FollowAssignRequest___);
    selectFriendEntity = this->fields.selectFriendEntity;
    if ( selectFriendEntity && Request_object )
    {
      FollowAssignRequest__beginRequest(Request_object, selectFriendEntity->fields.userId, 0LL);
      return;
    }
LABEL_11:
    sub_1B8880C(Request_object, method);
  }
  Request_object = (FollowAssignRequest_o *)this->fields.myFSM;
  if ( !Request_object )
    goto LABEL_11;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Request_object, (System_String_o *)StringLiteral_11058/*"REQUEST_NG"*/, 0LL);
}


void __fastcall FriendRootComponent__RequestFollowRemove(FriendRootComponent_o *this, const MethodInfo *method)
{
  System_Action_object__o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4A56597 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_string__TypeInfo);
    sub_1B885B0(&Method_FriendRootComponent__RequestFollowRemove_b__143_0__);
    byte_4A56597 = 1;
  }
  v3 = (System_Action_object__o *)sub_1B887FC(System_Action_string__TypeInfo);
  System_Action_object____ctor(
    v3,
    (Il2CppObject *)this,
    Method_FriendRootComponent__RequestFollowRemove_b__143_0__,
    0LL);
  FriendRootComponent__FriendLockRequst(this, (System_Action_string__o *)v3, v4);
}


void __fastcall FriendRootComponent__RequestFriendAccept(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  FriendOperationItemListViewItem_o *Item; // x0
  struct OtherUserGameEntity_o *otherUserGameEntity; // x21
  NetworkManager_ResultCallbackFunc_o *v7; // x20

  if ( (byte_4A56565 & 1) == 0 )
  {
    sub_1B885B0(&Method_FriendRootComponent_EndRequestFriend__);
    sub_1B885B0(&Method_NetworkManager_getRequest_FriendAcceptRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1B885B0(&StringLiteral_11058/*"REQUEST_NG"*/);
    byte_4A56565 = 1;
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
      v7 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v7,
        (Il2CppObject *)this,
        Method_FriendRootComponent_EndRequestFriend__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      operationItemListViewManager = (FriendOperationItemListViewManager_o *)NetworkManager__getRequest_object_(
                                                                               v7,
                                                                               (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_FriendAcceptRequest___);
      if ( operationItemListViewManager )
      {
        FriendAcceptRequest__beginRequest(
          (FriendAcceptRequest_o *)operationItemListViewManager,
          otherUserGameEntity->fields.userId,
          0LL);
        return;
      }
LABEL_12:
      sub_1B8880C(operationItemListViewManager, method);
    }
  }
  operationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.myFSM;
  if ( !operationItemListViewManager )
    goto LABEL_12;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)operationItemListViewManager, (System_String_o *)StringLiteral_11058/*"REQUEST_NG"*/, 0LL);
}


void __fastcall FriendRootComponent__RequestFriendCancel(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  FriendOperationItemListViewItem_o *Item; // x0
  struct OtherUserGameEntity_o *otherUserGameEntity; // x21
  NetworkManager_ResultCallbackFunc_o *v7; // x20

  if ( (byte_4A56567 & 1) == 0 )
  {
    sub_1B885B0(&Method_FriendRootComponent_EndRequestFriend__);
    sub_1B885B0(&Method_NetworkManager_getRequest_FriendCancelRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1B885B0(&StringLiteral_11058/*"REQUEST_NG"*/);
    byte_4A56567 = 1;
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
      v7 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v7,
        (Il2CppObject *)this,
        Method_FriendRootComponent_EndRequestFriend__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      operationItemListViewManager = (FriendOperationItemListViewManager_o *)NetworkManager__getRequest_object_(
                                                                               v7,
                                                                               (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_FriendCancelRequest___);
      if ( operationItemListViewManager )
      {
        FriendCancelRequest__beginRequest(
          (FriendCancelRequest_o *)operationItemListViewManager,
          otherUserGameEntity->fields.userId,
          0LL);
        return;
      }
LABEL_12:
      sub_1B8880C(operationItemListViewManager, method);
    }
  }
  operationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.myFSM;
  if ( !operationItemListViewManager )
    goto LABEL_12;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)operationItemListViewManager, (System_String_o *)StringLiteral_11058/*"REQUEST_NG"*/, 0LL);
}


void __fastcall FriendRootComponent__RequestFriendOffer(FriendRootComponent_o *this, const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v3; // x20
  FriendOfferRequest_o *Request_object; // x0
  struct OtherUserGameEntity_o *selectFriendEntity; // x8

  if ( (byte_4A56563 & 1) == 0 )
  {
    sub_1B885B0(&Method_FriendRootComponent_EndRequestFriend__);
    sub_1B885B0(&Method_NetworkManager_getRequest_FriendOfferRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1B885B0(&StringLiteral_11058/*"REQUEST_NG"*/);
    byte_4A56563 = 1;
  }
  if ( this->fields.selectFriendEntity )
  {
    v3 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v3,
      (Il2CppObject *)this,
      Method_FriendRootComponent_EndRequestFriend__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = (FriendOfferRequest_o *)NetworkManager__getRequest_object_(
                                               v3,
                                               (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_FriendOfferRequest___);
    selectFriendEntity = this->fields.selectFriendEntity;
    if ( selectFriendEntity && Request_object )
    {
      FriendOfferRequest__beginRequest(Request_object, selectFriendEntity->fields.userId, 0LL);
      return;
    }
LABEL_11:
    sub_1B8880C(Request_object, method);
  }
  Request_object = (FriendOfferRequest_o *)this->fields.myFSM;
  if ( !Request_object )
    goto LABEL_11;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Request_object, (System_String_o *)StringLiteral_11058/*"REQUEST_NG"*/, 0LL);
}


void __fastcall FriendRootComponent__RequestFriendOffer2(FriendRootComponent_o *this, const MethodInfo *method)
{
  System_Action_object__o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4A56564 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_string__TypeInfo);
    sub_1B885B0(&Method_FriendRootComponent__RequestFriendOffer2_b__88_0__);
    byte_4A56564 = 1;
  }
  v3 = (System_Action_object__o *)sub_1B887FC(System_Action_string__TypeInfo);
  System_Action_object____ctor(v3, (Il2CppObject *)this, Method_FriendRootComponent__RequestFriendOffer2_b__88_0__, 0LL);
  FriendRootComponent__FriendLockRequst(this, (System_Action_string__o *)v3, v4);
}


void __fastcall FriendRootComponent__RequestFriendProfile(FriendRootComponent_o *this, const MethodInfo *method)
{
  System_String_o *selectFriendCode; // x0
  System_String_o *v4; // x0
  NetworkManager_ResultCallbackFunc_o *v5; // x20
  ProfileTopRequest_o *Request_object; // x0
  __int64 v7; // x1
  FriendWarningDialog_o *friendWarningDialog; // x20
  FriendWarningDialog_CallbackFunc_o *v9; // x21

  if ( (byte_4A5656B & 1) == 0 )
  {
    sub_1B885B0(&FriendWarningDialog_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_FriendRootComponent_EndNoSearchWarning__);
    sub_1B885B0(&Method_FriendRootComponent_EndRequestFriendProfile__);
    sub_1B885B0(&Method_NetworkManager_getRequest_ProfileTopRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1B885B0(&StringLiteral_117/*" "*/);
    sub_1B885B0(&StringLiteral_11058/*"REQUEST_NG"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5656B = 1;
  }
  selectFriendCode = this->fields.selectFriendCode;
  if ( selectFriendCode )
  {
    v4 = System_String__Replace_61726660(
           selectFriendCode,
           (System_String_o *)StringLiteral_117/*" "*/,
           (System_String_o *)StringLiteral_1/*""*/,
           0LL);
    if ( System_String__op_Inequality(v4, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
    {
      v5 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v5,
        (Il2CppObject *)this,
        Method_FriendRootComponent_EndRequestFriendProfile__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Request_object = (ProfileTopRequest_o *)NetworkManager__getRequest_object_(
                                                v5,
                                                (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_ProfileTopRequest___);
      if ( Request_object )
      {
        ProfileTopRequest__beginRequestFriendCode(Request_object, this->fields.selectFriendCode, 0LL);
        return;
      }
LABEL_13:
      sub_1B8880C(Request_object, v7);
    }
    friendWarningDialog = this->fields.friendWarningDialog;
    v9 = (FriendWarningDialog_CallbackFunc_o *)sub_1B887FC(FriendWarningDialog_CallbackFunc_TypeInfo);
    FriendWarningDialog_CallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_FriendRootComponent_EndNoSearchWarning__,
      0LL);
    if ( !friendWarningDialog )
      goto LABEL_13;
    FriendWarningDialog__Open(friendWarningDialog, 3, v9, 0LL);
  }
  this->fields.selectFriendEntity = 0LL;
  sub_1B88554(&this->fields.selectFriendEntity, 0LL);
  Request_object = (ProfileTopRequest_o *)this->fields.myFSM;
  if ( !Request_object )
    goto LABEL_13;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Request_object, (System_String_o *)StringLiteral_11058/*"REQUEST_NG"*/, 0LL);
}


void __fastcall FriendRootComponent__RequestFriendReject(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  FriendOperationItemListViewItem_o *Item; // x0
  struct OtherUserGameEntity_o *otherUserGameEntity; // x21
  NetworkManager_ResultCallbackFunc_o *v7; // x20

  if ( (byte_4A56566 & 1) == 0 )
  {
    sub_1B885B0(&Method_FriendRootComponent_EndRequestFriend__);
    sub_1B885B0(&Method_NetworkManager_getRequest_FriendRejectRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&StringLiteral_11058/*"REQUEST_NG"*/);
    byte_4A56566 = 1;
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
      operationItemListViewManager = (FriendOperationItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( operationItemListViewManager )
      {
        CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)operationItemListViewManager, 0, 0LL);
        v7 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
        NetworkManager_ResultCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_FriendRootComponent_EndRequestFriend__,
          0LL);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        operationItemListViewManager = (FriendOperationItemListViewManager_o *)NetworkManager__getRequest_object_(
                                                                                 v7,
                                                                                 (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_FriendRejectRequest___);
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
      sub_1B8880C(operationItemListViewManager, method);
    }
  }
  operationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.myFSM;
  if ( !operationItemListViewManager )
    goto LABEL_13;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)operationItemListViewManager, (System_String_o *)StringLiteral_11058/*"REQUEST_NG"*/, 0LL);
}


void __fastcall FriendRootComponent__RequestFriendRemove(FriendRootComponent_o *this, const MethodInfo *method)
{
  System_Action_object__o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4A56568 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_string__TypeInfo);
    sub_1B885B0(&Method_FriendRootComponent__RequestFriendRemove_b__92_0__);
    byte_4A56568 = 1;
  }
  v3 = (System_Action_object__o *)sub_1B887FC(System_Action_string__TypeInfo);
  System_Action_object____ctor(v3, (Il2CppObject *)this, Method_FriendRootComponent__RequestFriendRemove_b__92_0__, 0LL);
  FriendRootComponent__FriendLockRequst(this, (System_Action_string__o *)v3, v4);
}


void __fastcall FriendRootComponent__SelectFollowConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  UserFollowMaster_o *v5; // x20
  const MethodInfo *v6; // x1
  int32_t FollowSum; // w21
  BalanceConfig_c *v8; // x8
  struct OtherUserGameEntity_o *selectFriendEntity; // x8
  Il2CppObject *v10; // x20
  System_String_o *v11; // x21
  System_String_o *v12; // x22
  NotificationDialog_ClickDelegate_o *v13; // x23
  FriendWarningDialog_o *friendWarningDialog; // x20
  FriendWarningDialog_CallbackFunc_o *v15; // x21
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x20
  OtherUserGameEntity_o *v17; // x21
  FriendOperationConfirmMenu_CallbackFunc_o *v18; // x22
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x4

  if ( (byte_4A5658A & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo);
    sub_1B885B0(&FriendWarningDialog_CallbackFunc_TypeInfo);
    sub_1B885B0(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserFollowMaster___);
    sub_1B885B0(&Method_FriendRootComponent_EndMaxFollowWarningOfferConfirm__);
    sub_1B885B0(&Method_FriendRootComponent_SelectedFollowOfferConfirm__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_2070/*"ALREADY_FOLLOWED_TITLE"*/);
    sub_1B885B0(&StringLiteral_2069/*"ALREADY_FOLLOWED_MESSAGE"*/);
    byte_4A5658A = 1;
  }
  if ( this->fields.state == 23 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserFollowMaster___);
      if ( Instance )
      {
        v5 = (UserFollowMaster_o *)Instance;
        FollowSum = UserFollowMaster__GetFollowSum((UserFollowMaster_o *)Instance, 0LL);
        v8 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v8 = BalanceConfig_TypeInfo;
        }
        if ( FollowSum >= v8->static_fields->FollowNum )
        {
          this->fields.state = 43;
          friendWarningDialog = this->fields.friendWarningDialog;
          v15 = (FriendWarningDialog_CallbackFunc_o *)sub_1B887FC(FriendWarningDialog_CallbackFunc_TypeInfo);
          FriendWarningDialog_CallbackFunc___ctor(
            v15,
            (Il2CppObject *)this,
            Method_FriendRootComponent_EndMaxFollowWarningOfferConfirm__,
            0LL);
          if ( friendWarningDialog )
          {
            FriendWarningDialog__Open(friendWarningDialog, 7, v15, 0LL);
            return;
          }
        }
        else
        {
          selectFriendEntity = this->fields.selectFriendEntity;
          if ( !selectFriendEntity )
          {
            FriendRootComponent__StartSearchInput(this, v6);
            return;
          }
          if ( UserFollowMaster__IsFollowUser(v5, selectFriendEntity->fields.userId, 0LL) )
          {
            this->fields.state = 44;
            v10 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v11 = LocalizationManager__Get((System_String_o *)StringLiteral_2070/*"ALREADY_FOLLOWED_TITLE"*/, 0LL);
            v12 = LocalizationManager__Get((System_String_o *)StringLiteral_2069/*"ALREADY_FOLLOWED_MESSAGE"*/, 0LL);
            v13 = (NotificationDialog_ClickDelegate_o *)sub_1B887FC(NotificationDialog_ClickDelegate_TypeInfo);
            NotificationDialog_ClickDelegate___ctor(
              v13,
              (Il2CppObject *)this,
              Method_FriendRootComponent_EndMaxFollowWarningOfferConfirm__,
              0LL);
            if ( v10 )
            {
              CommonUI__OpenNotificationDialog_30496496(
                (CommonUI_o *)v10,
                v11,
                v12,
                v13,
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
            v17 = this->fields.selectFriendEntity;
            v18 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_1B887FC(FriendOperationConfirmMenu_CallbackFunc_TypeInfo);
            FriendOperationConfirmMenu_CallbackFunc___ctor(
              v18,
              (Il2CppObject *)this,
              Method_FriendRootComponent_SelectedFollowOfferConfirm__,
              v19);
            if ( operationConfirmMenu )
            {
              FriendOperationConfirmMenu__Open(operationConfirmMenu, 6, v17, v18, v20);
              return;
            }
          }
        }
      }
    }
    sub_1B8880C(Instance, v4);
  }
}


void __fastcall FriendRootComponent__SelectFollowRemoveConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x20
  OtherUserGameEntity_o *dragParentObject; // x21
  FriendOperationConfirmMenu_CallbackFunc_o *v7; // x22
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x4

  if ( (byte_4A56591 & 1) == 0 )
  {
    sub_1B885B0(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_FriendRootComponent_SelectedFollowRemoveConfirm__);
    byte_4A56591 = 1;
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
          v7 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_1B887FC(FriendOperationConfirmMenu_CallbackFunc_TypeInfo),
          FriendOperationConfirmMenu_CallbackFunc___ctor(
            v7,
            (Il2CppObject *)this,
            Method_FriendRootComponent_SelectedFollowRemoveConfirm__,
            v8),
          !operationConfirmMenu) )
    {
      sub_1B8880C(operationItemListViewManager, method);
    }
    FriendOperationConfirmMenu__Open(operationConfirmMenu, 7, dragParentObject, v7, v9);
  }
}


void __fastcall FriendRootComponent__SelectFriendAcceptConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x20
  OtherUserGameEntity_o *dragParentObject; // x21
  FriendOperationConfirmMenu_CallbackFunc_o *v7; // x22
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x4

  if ( (byte_4A56557 & 1) == 0 )
  {
    sub_1B885B0(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_FriendRootComponent_SelectedFriendAcceptConfirm__);
    byte_4A56557 = 1;
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
          v7 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_1B887FC(FriendOperationConfirmMenu_CallbackFunc_TypeInfo),
          FriendOperationConfirmMenu_CallbackFunc___ctor(
            v7,
            (Il2CppObject *)this,
            Method_FriendRootComponent_SelectedFriendAcceptConfirm__,
            v8),
          !operationConfirmMenu) )
    {
      sub_1B8880C(operationItemListViewManager, method);
    }
    FriendOperationConfirmMenu__Open(operationConfirmMenu, 2, dragParentObject, v7, v9);
  }
}


void __fastcall FriendRootComponent__SelectFriendCancelConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x20
  OtherUserGameEntity_o *dragParentObject; // x21
  FriendOperationConfirmMenu_CallbackFunc_o *v7; // x22
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x4

  if ( (byte_4A5655D & 1) == 0 )
  {
    sub_1B885B0(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_FriendRootComponent_SelectedFriendCancelConfirm__);
    byte_4A5655D = 1;
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
          v7 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_1B887FC(FriendOperationConfirmMenu_CallbackFunc_TypeInfo),
          FriendOperationConfirmMenu_CallbackFunc___ctor(
            v7,
            (Il2CppObject *)this,
            Method_FriendRootComponent_SelectedFriendCancelConfirm__,
            v8),
          !operationConfirmMenu) )
    {
      sub_1B8880C(operationItemListViewManager, method);
    }
    FriendOperationConfirmMenu__Open(operationConfirmMenu, 4, dragParentObject, v7, v9);
  }
}


void __fastcall FriendRootComponent__SelectFriendOfferConfirm(FriendRootComponent_o *this, const MethodInfo *method)
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
  OtherUserGameEntity_o *context; // x21
  const MethodInfo *v18; // x3
  FriendWarningDialog_o *friendWarningDialog; // x20
  FriendWarningDialog_CallbackFunc_o *v20; // x21

  if ( (byte_4A56555 & 1) == 0 )
  {
    sub_1B885B0(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo);
    sub_1B885B0(&FriendWarningDialog_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_TblFriendMaster___);
    sub_1B885B0(&Method_FriendRootComponent_EndMaxFriendWarningOfferConfirm__);
    sub_1B885B0(&Method_FriendRootComponent_SelectedFriendOfferConfirm__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A56555 = 1;
  }
  state = this->fields.state;
  if ( state == 4 )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_27;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_TblFriendMaster___);
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
                                      v15);
        this->fields.state = 27;
        if ( Instance )
        {
          operationConfirmMenu = this->fields.operationConfirmMenu;
          context = (OtherUserGameEntity_o *)Instance->fields.context;
          v9 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_1B887FC(FriendOperationConfirmMenu_CallbackFunc_TypeInfo);
          FriendOperationConfirmMenu_CallbackFunc___ctor(
            v9,
            (Il2CppObject *)this,
            Method_FriendRootComponent_SelectedFriendOfferConfirm__,
            v18);
          if ( operationConfirmMenu )
          {
            v12 = operationConfirmMenu;
            v13 = context;
            goto LABEL_22;
          }
        }
      }
LABEL_27:
      sub_1B8880C(Instance, v6);
    }
LABEL_24:
    this->fields.state = 29;
    friendWarningDialog = this->fields.friendWarningDialog;
    v20 = (FriendWarningDialog_CallbackFunc_o *)sub_1B887FC(FriendWarningDialog_CallbackFunc_TypeInfo);
    FriendWarningDialog_CallbackFunc___ctor(
      v20,
      (Il2CppObject *)this,
      Method_FriendRootComponent_EndMaxFriendWarningOfferConfirm__,
      0LL);
    if ( !friendWarningDialog )
      goto LABEL_27;
    FriendWarningDialog__Open(friendWarningDialog, 1, v20, 0LL);
    return;
  }
  if ( state != 23 )
    return;
  v4 = UserGameMaster__getSelfUserGame(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_TblFriendMaster___);
  if ( !Instance )
    goto LABEL_27;
  Instance = (DataManager_o *)TblFriendMaster__GetList((TblFriendMaster_o *)Instance, 3, 0LL);
  if ( !Instance || !v4 )
    goto LABEL_27;
  if ( v4->fields.friendKeep <= SLODWORD(Instance->fields.m_CancellationTokenSource) )
    goto LABEL_24;
  selectFriendEntity = this->fields.selectFriendEntity;
  if ( selectFriendEntity )
  {
    this->fields.state = 27;
    v8 = this->fields.operationConfirmMenu;
    v9 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_1B887FC(FriendOperationConfirmMenu_CallbackFunc_TypeInfo);
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


void __fastcall FriendRootComponent__SelectFriendRejectConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x20
  OtherUserGameEntity_o *dragParentObject; // x21
  FriendOperationConfirmMenu_CallbackFunc_o *v7; // x22
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x4

  if ( (byte_4A5655A & 1) == 0 )
  {
    sub_1B885B0(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_FriendRootComponent_SelectedFriendRejectConfirm__);
    byte_4A5655A = 1;
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
          v7 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_1B887FC(FriendOperationConfirmMenu_CallbackFunc_TypeInfo),
          FriendOperationConfirmMenu_CallbackFunc___ctor(
            v7,
            (Il2CppObject *)this,
            Method_FriendRootComponent_SelectedFriendRejectConfirm__,
            v8),
          !operationConfirmMenu) )
    {
      sub_1B8880C(operationItemListViewManager, method);
    }
    FriendOperationConfirmMenu__Open(operationConfirmMenu, 3, dragParentObject, v7, v9);
  }
}


void __fastcall FriendRootComponent__SelectFriendRemoveConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x20
  OtherUserGameEntity_o *dragParentObject; // x21
  FriendOperationConfirmMenu_CallbackFunc_o *v7; // x22
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x4

  if ( (byte_4A56560 & 1) == 0 )
  {
    sub_1B885B0(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_FriendRootComponent_SelectedFriendRemoveConfirm__);
    byte_4A56560 = 1;
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
          v7 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_1B887FC(FriendOperationConfirmMenu_CallbackFunc_TypeInfo),
          FriendOperationConfirmMenu_CallbackFunc___ctor(
            v7,
            (Il2CppObject *)this,
            Method_FriendRootComponent_SelectedFriendRemoveConfirm__,
            v8),
          !operationConfirmMenu) )
    {
      sub_1B8880C(operationItemListViewManager, method);
    }
    FriendOperationConfirmMenu__Open(operationConfirmMenu, 5, dragParentObject, v7, v9);
  }
}


void __fastcall FriendRootComponent__SelectSearchFriend(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_4A5654E & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_5468/*"END_ACTION"*/);
    byte_4A5654E = 1;
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
      sub_1B8880C(0LL, method);
    PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_5468/*"END_ACTION"*/, 0LL);
  }
}


void __fastcall FriendRootComponent__SelectShowFriend(FriendRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *operationItemListViewManager; // x0
  const MethodInfo *v4; // x3
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  struct FriendOperationItemListViewManager_o *v6; // x20
  System_Action_o *v7; // x21
  const MethodInfo *v8; // x2

  if ( (byte_4A56546 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_FriendRootComponent_OnMoveEnd__);
    sub_1B885B0(&StringLiteral_5468/*"END_ACTION"*/);
    byte_4A56546 = 1;
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
              v4);
            v6 = this->fields.operationItemListViewManager;
            v7 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
            System_Action___ctor(v7, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0LL);
            if ( v6 )
            {
              v6->fields.callbackFunc2 = v7;
              sub_1B88554(&v6->fields.callbackFunc2, v7);
              FriendOperationItemListViewManager__SetMode_30901920(v6, 1, v8);
              return;
            }
          }
        }
      }
    }
LABEL_12:
    sub_1B8880C(operationItemListViewManager, method);
  }
  operationItemListViewManager = (UnityEngine_Component_o *)this->fields.myFSM;
  if ( !operationItemListViewManager )
    goto LABEL_12;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)operationItemListViewManager, (System_String_o *)StringLiteral_5468/*"END_ACTION"*/, 0LL);
}


void __fastcall FriendRootComponent__SelectShowOffer(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *operationItemListViewManager; // x0
  const MethodInfo *v5; // x3
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  struct FriendOperationItemListViewManager_o *v7; // x20
  System_Action_o *v8; // x21
  const MethodInfo *v9; // x2

  if ( (byte_4A56548 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_FriendRootComponent_OnMoveEnd__);
    byte_4A56548 = 1;
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
            v5),
          v7 = this->fields.operationItemListViewManager,
          v8 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo),
          System_Action___ctor(v8, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0LL),
          !v7) )
    {
LABEL_11:
      sub_1B8880C(operationItemListViewManager, v3);
    }
    v7->fields.callbackFunc2 = v8;
    sub_1B88554(&v7->fields.callbackFunc2, v8);
    FriendOperationItemListViewManager__SetMode_30901920(v7, 1, v9);
  }
}


void __fastcall FriendRootComponent__SelectShowOffered(FriendRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *operationItemListViewManager; // x0
  const MethodInfo *v4; // x3
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  struct FriendOperationItemListViewManager_o *v6; // x20
  System_Action_o *v7; // x21
  const MethodInfo *v8; // x2

  if ( (byte_4A5654A & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_FriendRootComponent_OnMoveEnd__);
    sub_1B885B0(&StringLiteral_5468/*"END_ACTION"*/);
    byte_4A5654A = 1;
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
              v4);
            v6 = this->fields.operationItemListViewManager;
            v7 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
            System_Action___ctor(v7, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0LL);
            if ( v6 )
            {
              v6->fields.callbackFunc2 = v7;
              sub_1B88554(&v6->fields.callbackFunc2, v7);
              FriendOperationItemListViewManager__SetMode_30901920(v6, 1, v8);
              return;
            }
          }
        }
      }
    }
LABEL_12:
    sub_1B8880C(operationItemListViewManager, method);
  }
  operationItemListViewManager = (UnityEngine_Component_o *)this->fields.myFSM;
  if ( !operationItemListViewManager )
    goto LABEL_12;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)operationItemListViewManager, (System_String_o *)StringLiteral_5468/*"END_ACTION"*/, 0LL);
}


void __fastcall FriendRootComponent__SelectShowSearch(FriendRootComponent_o *this, const MethodInfo *method)
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

  if ( (byte_4A5654C & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_FriendRootComponent_OnMoveEnd__);
    byte_4A5654C = 1;
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
    v4 = this->fields.operationItemListViewManager;
    if ( !v4 )
      goto LABEL_11;
    selectFriendCode = this->fields.selectFriendCode;
    v4->fields.friendCode = selectFriendCode;
    sub_1B88554(&v4->fields.friendCode, selectFriendCode);
    FriendOperationItemListViewManager__CreateList(v4, 0, 0, v6);
    this->fields.state = 17;
    friendSearchMenu = this->fields.friendSearchMenu;
    v8 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0LL);
    if ( !friendSearchMenu
      || (FriendSearchMenu__Close_30953604(friendSearchMenu, v8, 0LL),
          v9 = this->fields.operationItemListViewManager,
          v10 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo),
          System_Action___ctor(v10, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0LL),
          !v9) )
    {
LABEL_11:
      sub_1B8880C(operationItemListViewManager, method);
    }
    v9->fields.callbackFunc2 = v10;
    sub_1B88554(&v9->fields.callbackFunc2, v10);
    FriendOperationItemListViewManager__SetMode_30901920(v9, 1, v11);
  }
}


void __fastcall FriendRootComponent__SelectShowServant(
        FriendRootComponent_o *this,
        ServantLeaderInfo_o *servantLeaderInfo,
        const MethodInfo *method)
{
  unsigned int state; // w23
  Il2CppObject *Instance; // x21
  ServantStatusDialog_EndDelegate_o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w1

  if ( (byte_4A56552 & 1) == 0 )
  {
    sub_1B885B0(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1B885B0(&Method_FriendRootComponent_EndShowServant__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A56552 = 1;
  }
  state = this->fields.state;
  if ( state <= 0x13 && ((1 << state) & 0x84210) != 0 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v7 = (ServantStatusDialog_EndDelegate_o *)sub_1B887FC(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(v7, (Il2CppObject *)this, Method_FriendRootComponent_EndShowServant__, 0LL);
    if ( !Instance )
      sub_1B8880C(v8, v9);
    if ( state == 4 )
      v10 = 4;
    else
      v10 = 5;
    CommonUI__OpenServantStatusDialog_30506432((CommonUI_o *)Instance, v10, servantLeaderInfo, v7, 0LL);
  }
}


void __fastcall FriendRootComponent__SelectShowServantEquip(
        FriendRootComponent_o *this,
        EquipTargetInfo_o *equipInfo,
        int32_t statusKind,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x22
  ServantStatusDialog_EndDelegate_o *v8; // x23
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4A5657C & 1) == 0 )
  {
    sub_1B885B0(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1B885B0(&Method_FriendRootComponent_EndShowServantEquip__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5657C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (ServantStatusDialog_EndDelegate_o *)sub_1B887FC(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(
    v8,
    (Il2CppObject *)this,
    Method_FriendRootComponent_EndShowServantEquip__,
    0LL);
  if ( !Instance )
    sub_1B8880C(v9, v10);
  CommonUI__OpenServantEquipStatusDialog_30509528((CommonUI_o *)Instance, statusKind, equipInfo, v8, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendRootComponent__SelectedFollowOfferConfirm(
        FriendRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0
  __int64 *v6; // x8

  if ( (byte_4A5658D & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_8613/*"MENU_DECIDE"*/);
    sub_1B885B0(&StringLiteral_8612/*"MENU_CANCEL"*/);
    byte_4A5658D = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1B8880C(0LL, isDecide);
  v6 = &StringLiteral_8613/*"MENU_DECIDE"*/;
  if ( !isDecide )
    v6 = &StringLiteral_8612/*"MENU_CANCEL"*/;
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)*v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendRootComponent__SelectedFollowRemoveConfirm(
        FriendRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0
  __int64 *v6; // x8

  if ( (byte_4A56587 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_8613/*"MENU_DECIDE"*/);
    sub_1B885B0(&StringLiteral_8612/*"MENU_CANCEL"*/);
    byte_4A56587 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1B8880C(0LL, isDecide);
  v6 = &StringLiteral_8613/*"MENU_DECIDE"*/;
  if ( !isDecide )
    v6 = &StringLiteral_8612/*"MENU_CANCEL"*/;
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)*v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendRootComponent__SelectedFriendAcceptConfirm(
        FriendRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0
  __int64 *v6; // x8

  if ( (byte_4A56583 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_8613/*"MENU_DECIDE"*/);
    sub_1B885B0(&StringLiteral_8612/*"MENU_CANCEL"*/);
    byte_4A56583 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1B8880C(0LL, isDecide);
  v6 = &StringLiteral_8613/*"MENU_DECIDE"*/;
  if ( !isDecide )
    v6 = &StringLiteral_8612/*"MENU_CANCEL"*/;
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)*v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendRootComponent__SelectedFriendCancelConfirm(
        FriendRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0
  __int64 *v6; // x8

  if ( (byte_4A56585 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_8613/*"MENU_DECIDE"*/);
    sub_1B885B0(&StringLiteral_8612/*"MENU_CANCEL"*/);
    byte_4A56585 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1B8880C(0LL, isDecide);
  v6 = &StringLiteral_8613/*"MENU_DECIDE"*/;
  if ( !isDecide )
    v6 = &StringLiteral_8612/*"MENU_CANCEL"*/;
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)*v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendRootComponent__SelectedFriendOfferConfirm(
        FriendRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0
  __int64 *v6; // x8

  if ( (byte_4A56582 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_8613/*"MENU_DECIDE"*/);
    sub_1B885B0(&StringLiteral_8612/*"MENU_CANCEL"*/);
    byte_4A56582 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1B8880C(0LL, isDecide);
  v6 = &StringLiteral_8613/*"MENU_DECIDE"*/;
  if ( !isDecide )
    v6 = &StringLiteral_8612/*"MENU_CANCEL"*/;
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)*v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendRootComponent__SelectedFriendRejectConfirm(
        FriendRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0
  __int64 *v6; // x8

  if ( (byte_4A56584 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_8613/*"MENU_DECIDE"*/);
    sub_1B885B0(&StringLiteral_8612/*"MENU_CANCEL"*/);
    byte_4A56584 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1B8880C(0LL, isDecide);
  v6 = &StringLiteral_8613/*"MENU_DECIDE"*/;
  if ( !isDecide )
    v6 = &StringLiteral_8612/*"MENU_CANCEL"*/;
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)*v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendRootComponent__SelectedFriendRemoveConfirm(
        FriendRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0
  __int64 *v6; // x8

  if ( (byte_4A56586 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_8613/*"MENU_DECIDE"*/);
    sub_1B885B0(&StringLiteral_8612/*"MENU_CANCEL"*/);
    byte_4A56586 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1B8880C(0LL, isDecide);
  v6 = &StringLiteral_8613/*"MENU_DECIDE"*/;
  if ( !isDecide )
    v6 = &StringLiteral_8612/*"MENU_CANCEL"*/;
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)*v6, 0LL);
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
      sub_1B8880C(modeButtonParent, v5);
    }
    LODWORD(modeButtonParent[1].monitor) = 3;
    this->fields.isActiveModeKindButtons = v3;
  }
}


void __fastcall FriendRootComponent__ShowSearchResult(FriendRootComponent_o *this, const MethodInfo *method)
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
  if ( (byte_4A56550 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&FriendSearchResultMenu_CallbackFunc_TypeInfo);
    sub_1B885B0(&FriendSearchMenu_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_FriendRootComponent_OnSelectOffer__);
    sub_1B885B0(&Method_FriendRootComponent_OnSelectSearchFriend__);
    sub_1B885B0(&Method_FriendRootComponent_ShowSearchResult__);
    this = (FriendRootComponent_o *)sub_1B885B0(&StringLiteral_5468/*"END_ACTION"*/);
    byte_4A56550 = 1;
  }
  if ( v2->fields.state == 23 )
  {
    friendSearchResultMenu = v2->fields.friendSearchResultMenu;
    if ( !friendSearchResultMenu )
      goto LABEL_14;
    if ( friendSearchResultMenu->fields.isOpen )
    {
      v4 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v4, (Il2CppObject *)v2, Method_FriendRootComponent_ShowSearchResult__, 0LL);
      FriendSearchResultMenu__Close_30958336(friendSearchResultMenu, v4, 0LL);
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
    v7 = v2->fields.friendSearchResultMenu;
    selectFriendEntity = v2->fields.selectFriendEntity;
    v9 = (FriendSearchResultMenu_CallbackFunc_o *)sub_1B887FC(FriendSearchResultMenu_CallbackFunc_TypeInfo);
    FriendSearchResultMenu_CallbackFunc___ctor(v9, (Il2CppObject *)v2, Method_FriendRootComponent_OnSelectOffer__, 0LL);
    if ( !v7
      || (FriendSearchResultMenu__Open(v7, selectFriendEntity, currentCursor, v9, 0LL),
          friendSearchMenu = v2->fields.friendSearchMenu,
          v11 = (FriendSearchMenu_CallbackFunc_o *)sub_1B887FC(FriendSearchMenu_CallbackFunc_TypeInfo),
          FriendSearchMenu_CallbackFunc___ctor(
            v11,
            (Il2CppObject *)v2,
            Method_FriendRootComponent_OnSelectSearchFriend__,
            0LL),
          !friendSearchMenu)
      || (FriendSearchMenu__Open(friendSearchMenu, v11, 0, 0LL),
          (this = (FriendRootComponent_o *)v2->fields.myFSM) == 0LL) )
    {
LABEL_14:
      sub_1B8880C(this, method);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_5468/*"END_ACTION"*/, 0LL);
    EventTutorialMaster__CheckTutorial(-1, 50, 0LL, 0, 0, 0, 0, 0LL);
  }
}


void __fastcall FriendRootComponent__StartSearchInput(FriendRootComponent_o *this, const MethodInfo *method)
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
  if ( (byte_4A56551 & 1) == 0 )
  {
    sub_1B885B0(&FriendSearchResultMenu_CallbackFunc_TypeInfo);
    sub_1B885B0(&FriendSearchMenu_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_FriendRootComponent_OnSelectOffer__);
    this = (FriendRootComponent_o *)sub_1B885B0(&Method_FriendRootComponent_OnSelectSearchFriend__);
    byte_4A56551 = 1;
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
      v7 = (FriendSearchResultMenu_CallbackFunc_o *)sub_1B887FC(FriendSearchResultMenu_CallbackFunc_TypeInfo);
      FriendSearchResultMenu_CallbackFunc___ctor(
        v7,
        (Il2CppObject *)v2,
        Method_FriendRootComponent_OnSelectOffer__,
        0LL);
      FriendSearchResultMenu__Open(friendSearchResultMenu, selectFriendEntity, currentCursor, v7, 0LL);
    }
    else
    {
      FriendSearchResultMenu__Close(v2->fields.friendSearchResultMenu, 0LL);
    }
  }
  friendSearchMenu = v2->fields.friendSearchMenu;
  v9 = (FriendSearchMenu_CallbackFunc_o *)sub_1B887FC(FriendSearchMenu_CallbackFunc_TypeInfo);
  FriendSearchMenu_CallbackFunc___ctor(v9, (Il2CppObject *)v2, Method_FriendRootComponent_OnSelectSearchFriend__, 0LL);
  if ( !friendSearchMenu )
LABEL_11:
    sub_1B8880C(this, method);
  FriendSearchMenu__Open(friendSearchMenu, v9, 0, 0LL);
}


void __fastcall FriendRootComponent___OnClickBack_b__100_0(
        FriendRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x19
  System_Action_object__o *v5; // x20
  const MethodInfo *v6; // x2

  v4 = (Il2CppObject *)this;
  if ( (byte_4A5659D & 1) == 0 )
  {
    sub_1B885B0(&System_Action_string__TypeInfo);
    sub_1B885B0(&Method_FriendRootComponent__OnClickBack_b__100_1__);
    this = (FriendRootComponent_o *)sub_1B885B0(&StringLiteral_22225/*"ok"*/);
    byte_4A5659D = 1;
  }
  if ( !result )
    sub_1B8880C(this, result);
  if ( System_String__Equals_61715348(result, (System_String_o *)StringLiteral_22225/*"ok"*/, 0LL) )
  {
    v5 = (System_Action_object__o *)sub_1B887FC(System_Action_string__TypeInfo);
    System_Action_object____ctor(v5, v4, Method_FriendRootComponent__OnClickBack_b__100_1__, 0LL);
    FriendRootComponent__FriendLockRequst((FriendRootComponent_o *)v4, (System_Action_string__o *)v5, v6);
  }
}


void __fastcall FriendRootComponent___OnClickBack_b__100_1(
        FriendRootComponent_o *this,
        System_String_o *res,
        const MethodInfo *method)
{
  FriendRootComponent_o *v4; // x19

  v4 = this;
  if ( (byte_4A5659E & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_22225/*"ok"*/);
    this = (FriendRootComponent_o *)sub_1B885B0(&StringLiteral_3528/*"CLICK_BACK"*/);
    byte_4A5659E = 1;
  }
  if ( !res )
    goto LABEL_9;
  if ( System_String__Equals_61715348(res, (System_String_o *)StringLiteral_22225/*"ok"*/, 0LL) )
  {
    this = (FriendRootComponent_o *)v4->fields.friendSearchMenu;
    if ( this )
    {
      FriendSearchMenu__BlockInput((FriendSearchMenu_o *)this, 0LL);
      this = (FriendRootComponent_o *)v4->fields.myFSM;
      if ( this )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3528/*"CLICK_BACK"*/, 0LL);
        return;
      }
    }
LABEL_9:
    sub_1B8880C(this, res);
  }
}


void __fastcall FriendRootComponent___OnClickModeUserDetail_b__102_0(
        FriendRootComponent_o *this,
        System_String_o *res,
        const MethodInfo *method)
{
  FriendRootComponent_o *v4; // x19
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x1

  v4 = this;
  if ( (byte_4A565A1 & 1) == 0 )
  {
    sub_1B885B0(&Method_FriendRootComponent__OnClickModeUserDetail_b__102_0__);
    this = (FriendRootComponent_o *)sub_1B885B0(&StringLiteral_22225/*"ok"*/);
    byte_4A565A1 = 1;
  }
  if ( !res )
    sub_1B8880C(this, res);
  if ( System_String__Equals_61715348(res, (System_String_o *)StringLiteral_22225/*"ok"*/, 0LL) )
  {
    v5 = Method_FriendRootComponent__OnClickModeUserDetail_b__102_0__;
    if ( (*((_BYTE *)Method_FriendRootComponent__OnClickModeUserDetail_b__102_0__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B885C8();
    v6 = (System_Reflection_MethodBase_o *)sub_1B88594(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    v4->fields.currentModeKind = 0;
    FriendRootComponent__RefreshInfo(v4, v7);
  }
}


void __fastcall FriendRootComponent___OnClickTabFriend_b__109_0(
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
  if ( (byte_4A565A2 & 1) == 0 )
  {
    sub_1B885B0(&Method_FriendRootComponent__OnClickTabFriend_b__109_0__);
    sub_1B885B0(&StringLiteral_22225/*"ok"*/);
    this = (FriendRootComponent_o *)sub_1B885B0(&StringLiteral_3573/*"CLICK_TAB"*/);
    byte_4A565A2 = 1;
  }
  if ( !res )
    goto LABEL_22;
  if ( !System_String__Equals_61715348(res, (System_String_o *)StringLiteral_22225/*"ok"*/, 0LL) )
    return;
  state = v4->fields.state;
  if ( state <= 9 )
  {
    if ( state != 4 && state != 9 )
      return;
LABEL_16:
    v7 = Method_FriendRootComponent__OnClickTabFriend_b__109_0__;
    if ( (*((_BYTE *)Method_FriendRootComponent__OnClickTabFriend_b__109_0__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1B885C8();
    v8 = (System_Reflection_MethodBase_o *)sub_1B88594(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
    FriendRootComponent__set_tabKind(v9, 0, v10);
    FriendRootComponent__RefreshTab(v4, v11);
    classButtonControl = v4->fields.classButtonControl;
    if ( classButtonControl )
    {
      classButtonControl->fields.updateEnable = 0;
      this = (FriendRootComponent_o *)v4->fields.myFSM;
      if ( this )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3573/*"CLICK_TAB"*/, 0LL);
        return;
      }
    }
LABEL_22:
    sub_1B8880C(this, res);
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
      v6 = v4->fields.classButtonControl;
      this = (FriendRootComponent_o *)FriendSearchResultMenu__get_GetCursorPos((FriendSearchResultMenu_o *)this, 0LL);
      if ( !v6 )
        goto LABEL_22;
      ClassButtonControlComponent__setCursor(v6, (int32_t)this, 0LL);
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
  System_Action_object__o *v5; // x20
  const MethodInfo *v6; // x2

  v4 = (Il2CppObject *)this;
  if ( (byte_4A565A3 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_string__TypeInfo);
    sub_1B885B0(&Method_FriendRootComponent__OnClickTabOffered_b__110_1__);
    this = (FriendRootComponent_o *)sub_1B885B0(&StringLiteral_22225/*"ok"*/);
    byte_4A565A3 = 1;
  }
  if ( !result )
    sub_1B8880C(this, result);
  if ( System_String__Equals_61715348(result, (System_String_o *)StringLiteral_22225/*"ok"*/, 0LL) )
  {
    v5 = (System_Action_object__o *)sub_1B887FC(System_Action_string__TypeInfo);
    System_Action_object____ctor(v5, v4, (intptr_t)Method_FriendRootComponent__OnClickTabOffered_b__110_1__, 0LL);
    FriendRootComponent__FriendLockRequst((FriendRootComponent_o *)v4, (System_Action_string__o *)v5, v6);
  }
}


void __fastcall FriendRootComponent___OnClickTabOffered_b__110_1(
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
  if ( (byte_4A565A4 & 1) == 0 )
  {
    sub_1B885B0(&Method_FriendRootComponent__OnClickTabOffered_b__110_1__);
    sub_1B885B0(&StringLiteral_22225/*"ok"*/);
    this = (FriendRootComponent_o *)sub_1B885B0(&StringLiteral_3573/*"CLICK_TAB"*/);
    byte_4A565A4 = 1;
  }
  if ( !res )
    goto LABEL_22;
  if ( !System_String__Equals_61715348(res, (System_String_o *)StringLiteral_22225/*"ok"*/, 0LL) )
    return;
  state = v4->fields.state;
  if ( state <= 9 )
  {
    if ( state != 4 && state != 9 )
      return;
LABEL_16:
    v7 = Method_FriendRootComponent__OnClickTabOffered_b__110_1__;
    if ( (*((_BYTE *)Method_FriendRootComponent__OnClickTabOffered_b__110_1__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1B885C8();
    v8 = (System_Reflection_MethodBase_o *)sub_1B88594(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
    FriendRootComponent__set_tabKind(v9, 1, v10);
    FriendRootComponent__RefreshTab(v4, v11);
    classButtonControl = v4->fields.classButtonControl;
    if ( classButtonControl )
    {
      classButtonControl->fields.updateEnable = 0;
      this = (FriendRootComponent_o *)v4->fields.myFSM;
      if ( this )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3573/*"CLICK_TAB"*/, 0LL);
        return;
      }
    }
LABEL_22:
    sub_1B8880C(this, res);
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
      v6 = v4->fields.classButtonControl;
      this = (FriendRootComponent_o *)FriendSearchResultMenu__get_GetCursorPos((FriendSearchResultMenu_o *)this, 0LL);
      if ( !v6 )
        goto LABEL_22;
      ClassButtonControlComponent__setCursor(v6, (int32_t)this, 0LL);
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
  System_Action_object__o *v5; // x20
  const MethodInfo *v6; // x2

  v4 = (Il2CppObject *)this;
  if ( (byte_4A565A5 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_string__TypeInfo);
    sub_1B885B0(&Method_FriendRootComponent__OnClickTabSearch_b__111_1__);
    this = (FriendRootComponent_o *)sub_1B885B0(&StringLiteral_22225/*"ok"*/);
    byte_4A565A5 = 1;
  }
  if ( !result )
    sub_1B8880C(this, result);
  if ( System_String__Equals_61715348(result, (System_String_o *)StringLiteral_22225/*"ok"*/, 0LL) )
  {
    v5 = (System_Action_object__o *)sub_1B887FC(System_Action_string__TypeInfo);
    System_Action_object____ctor(v5, v4, (intptr_t)Method_FriendRootComponent__OnClickTabSearch_b__111_1__, 0LL);
    FriendRootComponent__FriendLockRequst((FriendRootComponent_o *)v4, (System_Action_string__o *)v5, v6);
  }
}


void __fastcall FriendRootComponent___OnClickTabSearch_b__111_1(
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
  if ( (byte_4A565A6 & 1) == 0 )
  {
    sub_1B885B0(&Method_FriendRootComponent__OnClickTabSearch_b__111_1__);
    sub_1B885B0(&StringLiteral_22225/*"ok"*/);
    this = (FriendRootComponent_o *)sub_1B885B0(&StringLiteral_3573/*"CLICK_TAB"*/);
    byte_4A565A6 = 1;
  }
  if ( !res )
    goto LABEL_17;
  if ( !System_String__Equals_61715348(res, (System_String_o *)StringLiteral_22225/*"ok"*/, 0LL) )
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
      v6 = (_QWORD *)sub_1B885C8();
    v7 = (System_Reflection_MethodBase_o *)sub_1B88594(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    FriendRootComponent__set_tabKind(v8, 2, v9);
    FriendRootComponent__RefreshTab(v4, v10);
    classButtonControl = v4->fields.classButtonControl;
    if ( classButtonControl )
    {
      classButtonControl->fields.updateEnable = 0;
      this = (FriendRootComponent_o *)v4->fields.myFSM;
      if ( this )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3573/*"CLICK_TAB"*/, 0LL);
        return;
      }
    }
LABEL_17:
    sub_1B8880C(this, res);
  }
}


void __fastcall FriendRootComponent___RequestFollowRemove_b__143_0(
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
  if ( (byte_4A565A7 & 1) == 0 )
  {
    sub_1B885B0(&Method_FriendRootComponent_EndRequestFollowRemove__);
    sub_1B885B0(&Method_NetworkManager_getRequest_FollowdRemoveRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&StringLiteral_22225/*"ok"*/);
    this = (FriendRootComponent_o *)sub_1B885B0(&StringLiteral_11058/*"REQUEST_NG"*/);
    byte_4A565A7 = 1;
  }
  if ( !res )
    goto LABEL_15;
  if ( System_String__Equals_61715348(res, (System_String_o *)StringLiteral_22225/*"ok"*/, 0LL) )
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
        this = (FriendRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( this )
        {
          CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)this, 0, 0LL);
          v8 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
          NetworkManager_ResultCallbackFunc___ctor(
            v8,
            (Il2CppObject *)v4,
            Method_FriendRootComponent_EndRequestFollowRemove__,
            0LL);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          this = (FriendRootComponent_o *)NetworkManager__getRequest_object_(
                                            v8,
                                            (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_FollowdRemoveRequest___);
          if ( this )
          {
            FollowdRemoveRequest__beginRequest((FollowdRemoveRequest_o *)this, otherUserGameEntity->fields.userId, 0LL);
            return;
          }
        }
LABEL_15:
        sub_1B8880C(this, res);
      }
    }
  }
  this = (FriendRootComponent_o *)v4->fields.myFSM;
  if ( !this )
    goto LABEL_15;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11058/*"REQUEST_NG"*/, 0LL);
}


void __fastcall FriendRootComponent___RequestFriendOffer2_b__88_0(
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
  if ( (byte_4A5659B & 1) == 0 )
  {
    sub_1B885B0(&Method_FriendRootComponent_EndRequestFriend__);
    sub_1B885B0(&Method_NetworkManager_getRequest_FriendOfferRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1B885B0(&StringLiteral_22225/*"ok"*/);
    this = (FriendRootComponent_o *)sub_1B885B0(&StringLiteral_11058/*"REQUEST_NG"*/);
    byte_4A5659B = 1;
  }
  if ( !res )
    goto LABEL_14;
  if ( System_String__Equals_61715348(res, (System_String_o *)StringLiteral_22225/*"ok"*/, 0LL) )
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
        v8 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
        NetworkManager_ResultCallbackFunc___ctor(
          v8,
          (Il2CppObject *)v4,
          Method_FriendRootComponent_EndRequestFriend__,
          0LL);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        this = (FriendRootComponent_o *)NetworkManager__getRequest_object_(
                                          v8,
                                          (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_FriendOfferRequest___);
        if ( this )
        {
          FriendOfferRequest__beginRequest((FriendOfferRequest_o *)this, otherUserGameEntity->fields.userId, 0LL);
          return;
        }
LABEL_14:
        sub_1B8880C(this, res);
      }
    }
  }
  this = (FriendRootComponent_o *)v4->fields.myFSM;
  if ( !this )
    goto LABEL_14;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11058/*"REQUEST_NG"*/, 0LL);
}


void __fastcall FriendRootComponent___RequestFriendRemove_b__92_0(
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
  if ( (byte_4A5659C & 1) == 0 )
  {
    sub_1B885B0(&Method_FriendRootComponent_EndRequestFriend__);
    sub_1B885B0(&Method_NetworkManager_getRequest_FriendRemoveRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&StringLiteral_22225/*"ok"*/);
    this = (FriendRootComponent_o *)sub_1B885B0(&StringLiteral_11058/*"REQUEST_NG"*/);
    byte_4A5659C = 1;
  }
  if ( !res )
    goto LABEL_15;
  if ( System_String__Equals_61715348(res, (System_String_o *)StringLiteral_22225/*"ok"*/, 0LL) )
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
        this = (FriendRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( this )
        {
          CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)this, 0, 0LL);
          v8 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
          NetworkManager_ResultCallbackFunc___ctor(
            v8,
            (Il2CppObject *)v4,
            Method_FriendRootComponent_EndRequestFriend__,
            0LL);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          this = (FriendRootComponent_o *)NetworkManager__getRequest_object_(
                                            v8,
                                            (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_FriendRemoveRequest___);
          if ( this )
          {
            FriendRemoveRequest__beginRequest((FriendRemoveRequest_o *)this, otherUserGameEntity->fields.userId, 0LL);
            return;
          }
        }
LABEL_15:
        sub_1B8880C(this, res);
      }
    }
  }
  this = (FriendRootComponent_o *)v4->fields.myFSM;
  if ( !this )
    goto LABEL_15;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11058/*"REQUEST_NG"*/, 0LL);
}


void __fastcall FriendRootComponent___afterMainMenubarSelect_b__101_0(
        FriendRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  FriendRootComponent_o *v4; // x19
  System_Action_object__o *v5; // x20
  const MethodInfo *v6; // x2

  v4 = this;
  if ( (byte_4A5659F & 1) == 0 )
  {
    sub_1B885B0(&System_Action_string__TypeInfo);
    sub_1B885B0(&Method_FriendRootComponent__afterMainMenubarSelect_b__101_1__);
    sub_1B885B0(&StringLiteral_22225/*"ok"*/);
    this = (FriendRootComponent_o *)sub_1B885B0(&StringLiteral_11058/*"REQUEST_NG"*/);
    byte_4A5659F = 1;
  }
  if ( !result )
    goto LABEL_8;
  if ( System_String__Equals_61715348(result, (System_String_o *)StringLiteral_22225/*"ok"*/, 0LL) )
  {
    v5 = (System_Action_object__o *)sub_1B887FC(System_Action_string__TypeInfo);
    System_Action_object____ctor(
      v5,
      (Il2CppObject *)v4,
      Method_FriendRootComponent__afterMainMenubarSelect_b__101_1__,
      0LL);
    FriendRootComponent__FriendLockRequst(v4, (System_Action_string__o *)v5, v6);
    return;
  }
  this = (FriendRootComponent_o *)v4->fields.myFSM;
  if ( !this )
LABEL_8:
    sub_1B8880C(this, result);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11058/*"REQUEST_NG"*/, 0LL);
}


void __fastcall FriendRootComponent___afterMainMenubarSelect_b__101_1(
        FriendRootComponent_o *this,
        System_String_o *res,
        const MethodInfo *method)
{
  FriendRootComponent_o *v4; // x19
  PlayMakerFSM_o *myFSM; // x8
  __int64 *v6; // x9

  v4 = this;
  if ( (byte_4A565A0 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_11060/*"REQUEST_OK"*/);
    sub_1B885B0(&StringLiteral_22225/*"ok"*/);
    this = (FriendRootComponent_o *)sub_1B885B0(&StringLiteral_11058/*"REQUEST_NG"*/);
    byte_4A565A0 = 1;
  }
  if ( !res
    || (this = (FriendRootComponent_o *)System_String__Equals_61715348(res, (System_String_o *)StringLiteral_22225/*"ok"*/, 0LL),
        (myFSM = v4->fields.myFSM) == 0LL) )
  {
    sub_1B8880C(this, res);
  }
  v6 = &StringLiteral_11060/*"REQUEST_OK"*/;
  if ( ((unsigned __int8)this & 1) == 0 )
    v6 = &StringLiteral_11058/*"REQUEST_NG"*/;
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)*v6, 0LL);
}


void __fastcall FriendRootComponent__afterMainMenubarSelect(FriendRootComponent_o *this, const MethodInfo *method)
{
  FriendRootComponent_messageRequestCallback_o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4A56571 & 1) == 0 )
  {
    sub_1B885B0(&Method_FriendRootComponent__afterMainMenubarSelect_b__101_0__);
    sub_1B885B0(&FriendRootComponent_messageRequestCallback_TypeInfo);
    byte_4A56571 = 1;
  }
  v3 = (FriendRootComponent_messageRequestCallback_o *)sub_1B887FC(FriendRootComponent_messageRequestCallback_TypeInfo);
  FriendRootComponent_messageRequestCallback___ctor(
    v3,
    (Il2CppObject *)this,
    Method_FriendRootComponent__afterMainMenubarSelect_b__101_0__,
    0LL);
  FriendRootComponent__messageDispChangeRequest(this, v3, v4);
}


void __fastcall FriendRootComponent__beginFinish(FriendRootComponent_o *this, const MethodInfo *method)
{
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0

  if ( (byte_4A56541 & 1) == 0 )
  {
    sub_1B885B0(&RandomLimitCountManager_TypeInfo);
    byte_4A56541 = 1;
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
    sub_1B8880C(operationItemListViewManager, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)operationItemListViewManager, 0, 0LL);
  this->fields.state = 0;
  this->fields.selectFriendEntity = 0LL;
  sub_1B88554(&this->fields.selectFriendEntity, 0LL);
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  RandomLimitCountManager__set_EnableRandomLimitCount(0, 0LL);
}


void __fastcall FriendRootComponent__beginInitialize(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x1
  UnityEngine_Component_o *bgTxtSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  ClassButtonControlComponent_o *classButtonControl; // x20
  ClassButtonControlComponent_CallbackFunc_o *v8; // x21
  System_Action_o *v9; // x20

  if ( (byte_4A5653B & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&ClassButtonControlComponent_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_FriendRootComponent_EndLoadOutGameAtlas__);
    sub_1B885B0(&Method_FriendRootComponent_changeClass__);
    byte_4A5653B = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 7, 39, 0LL);
  FriendRootComponent__CheckHelpUI(this, v3);
  bgTxtSprite = (UnityEngine_Component_o *)this->fields.bgTxtSprite;
  if ( !bgTxtSprite )
    goto LABEL_10;
  gameObject = UnityEngine_Component__get_gameObject(bgTxtSprite, 0LL);
  bgTxtSprite = (UnityEngine_Component_o *)BgTxtManager__IsActiveBgTxt(0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)bgTxtSprite & 1, 0LL),
        classButtonControl = this->fields.classButtonControl,
        v8 = (ClassButtonControlComponent_CallbackFunc_o *)sub_1B887FC(ClassButtonControlComponent_CallbackFunc_TypeInfo),
        ClassButtonControlComponent_CallbackFunc___ctor(
          v8,
          (Il2CppObject *)this,
          (intptr_t)Method_FriendRootComponent_changeClass__,
          0LL),
        !classButtonControl)
    || (ClassButtonControlComponent__init(classButtonControl, v8, 0, 0, 0, 0LL),
        (bgTxtSprite = (UnityEngine_Component_o *)this->fields.operationItemListViewManager) == 0LL) )
  {
LABEL_10:
    sub_1B8880C(bgTxtSprite, v4);
  }
  FriendOperationItemListViewManager__SetupClassBoardInfo((FriendOperationItemListViewManager_o *)bgTxtSprite, v4);
  v9 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_FriendRootComponent_EndLoadOutGameAtlas__, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadOutGameAtlas(v9, 0LL);
}


void __fastcall FriendRootComponent__beginResume(
        FriendRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x10
  FriendOperationItemListViewManager_o *Instance; // x0
  __int64 v7; // x1
  CommonUI_o *v8; // x20
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x2

  if ( (byte_4A56542 & 1) == 0 )
  {
    sub_1B885B0(&AvalonSceneManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&SupportInfoJump_TypeInfo);
    byte_4A56542 = 1;
  }
  if ( data
    && (methodPtr_low = LOBYTE(SupportInfoJump_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(data->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low)
    && (SupportInfoJump_c *)data->klass->_2.typeHierarchy[methodPtr_low - 1] == SupportInfoJump_TypeInfo )
  {
    this->fields.isReturnSupport = 1;
    Instance = (FriendOperationItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v8 = (CommonUI_o *)Instance;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      Instance = (FriendOperationItemListViewManager_o *)j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    if ( !v8
      || (CommonUI__maskFadein(v8, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL),
          FriendRootComponent__RefreshTab(this, v9),
          (Instance = this->fields.operationItemListViewManager) == 0LL) )
    {
      sub_1B8880C(Instance, v7);
    }
    FriendOperationItemListViewManager__SetMode_30901920(Instance, 2, v10);
    SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 7, 39, 0LL);
    MainMenuBar__setMenuActive(1, 0LL, 0LL);
    SceneRootComponent__sendMessageStartUp((SceneRootComponent_o *)this, 0LL);
  }
  else
  {
    SceneRootComponent__beginResume_38666660((SceneRootComponent_o *)this, 0LL);
    this->fields.isReturnSupport = 0;
  }
}


void __fastcall FriendRootComponent__beginStartUp(FriendRootComponent_o *this, const MethodInfo *method)
{
  System_String_o *MainBgmName; // x20
  __int64 v4; // x1
  TitleInfoControl_o *titleInfo; // x0
  NetworkManager_ResultCallbackFunc_o *v6; // x20

  if ( (byte_4A5653D & 1) == 0 )
  {
    sub_1B885B0(&BgmManager_TypeInfo);
    sub_1B885B0(&Method_FriendRootComponent_EndFriendRequest__);
    sub_1B885B0(&Method_NetworkManager_getRequest_FriendTopRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&RandomLimitCountManager_TypeInfo);
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1B885B0(&SoundManager_TypeInfo);
    byte_4A5653D = 1;
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
  TitleInfoControl__setTitleInfo(titleInfo, this->fields.myFSM, 1, 0LL, 39, 0LL);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_15;
  TitleInfoControl__setBackBtnSprite_37184884(titleInfo, 1, 0, 0, 0LL);
  this->fields.state = 0;
  this->fields.currentModeKind = 0;
  this->fields.selectFriendEntity = 0LL;
  sub_1B88554(&this->fields.selectFriendEntity, 0LL);
  v6 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v6, (Il2CppObject *)this, Method_FriendRootComponent_EndFriendRequest__, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  titleInfo = (TitleInfoControl_o *)NetworkManager__getRequest_object_(
                                      v6,
                                      (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_FriendTopRequest___);
  if ( !titleInfo )
LABEL_15:
    sub_1B8880C(titleInfo, v4);
  RequestBase__beginRequest((RequestBase_o *)titleInfo, 0LL);
}


void __fastcall FriendRootComponent__beginStartUp_30919956(
        FriendRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  struct SceneJumpInfo_o **p_jumpInfo; // x20
  Il2CppClass *v6; // x8
  __int64 methodPtr_low; // x9
  Il2CppObject *v8; // x1

  if ( (byte_4A5653E & 1) == 0 )
  {
    sub_1B885B0(&SceneJumpInfo_TypeInfo);
    byte_4A5653E = 1;
  }
  p_jumpInfo = &this->fields.jumpInfo;
  this->fields.jumpInfo = 0LL;
  sub_1B88554(&this->fields.jumpInfo, 0LL);
  if ( data )
  {
    v6 = (Il2CppClass *)SceneJumpInfo_TypeInfo;
    methodPtr_low = LOBYTE(SceneJumpInfo_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(data->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
      && (SceneJumpInfo_c *)data->klass->_2.typeHierarchy[methodPtr_low - 1] == SceneJumpInfo_TypeInfo )
    {
      *p_jumpInfo = (struct SceneJumpInfo_o *)data;
      if ( LOBYTE(data->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
      {
        if ( data->klass->_2.typeHierarchy[methodPtr_low - 1] == v6 )
          v8 = data;
        else
          v8 = 0LL;
      }
      else
      {
        v8 = 0LL;
      }
      sub_1B88554(&this->fields.jumpInfo, v8);
      if ( *p_jumpInfo )
        this->fields.jumpTabKind = (*p_jumpInfo)->fields.id;
    }
  }
  ((void (__fastcall *)(FriendRootComponent_o *, Il2CppMethodPointer))this->klass->vtable._6_beginStartUp.method)(
    this,
    this->klass->vtable._7_beginFinish.methodPtr);
}


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

  if ( (byte_4A5657B & 1) == 0 )
  {
    sub_1B885B0(&Method_FriendRootComponent_changeClass__);
    byte_4A5657B = 1;
  }
  v5 = Method_FriendRootComponent_changeClass__;
  if ( (*((_BYTE *)Method_FriendRootComponent_changeClass__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1B885C8();
  v6 = (System_Reflection_MethodBase_o *)sub_1B88594(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    sub_1B8880C(0LL, v7);
  FriendOperationItemListViewManager__SetClassId(operationItemListViewManager, classPos, v8);
}


int32_t __fastcall FriendRootComponent__get_tabKind(FriendRootComponent_o *this, const MethodInfo *method)
{
  int32_t result; // w0
  FriendRootComponent_c *v4; // x0

  if ( (byte_4A5653A & 1) == 0 )
  {
    sub_1B885B0(&FriendRootComponent_TypeInfo);
    byte_4A5653A = 1;
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
  FriendRootComponent___c__DisplayClass112_0_o *v5; // x20
  ListViewManager_o *operationItemListViewManager; // x0
  int64_t v7; // x1
  struct FriendRootComponent_messageRequestCallback_o **p_callback; // x22
  int32_t ItemSum; // w23
  System_Collections_Generic_List_long__o *v10; // x21
  System_Collections_Generic_List_long__o *v11; // x22
  const MethodInfo *v12; // x2
  int32_t i; // w24
  struct UnityEngine_GameObject_o *dragParentObject; // x8
  struct System_Int64_array *items; // x8
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

  if ( (byte_4A56579 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_long__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_long__TypeInfo);
    sub_1B885B0(&Method_NetworkManager_getRequest_FriendMessageHideSyncRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1B885B0(&Method_FriendRootComponent___c__DisplayClass112_0__messageDispChangeRequest_b__0__);
    sub_1B885B0(&FriendRootComponent___c__DisplayClass112_0_TypeInfo);
    sub_1B885B0(&StringLiteral_22225/*"ok"*/);
    byte_4A56579 = 1;
  }
  v5 = (FriendRootComponent___c__DisplayClass112_0_o *)sub_1B887FC(FriendRootComponent___c__DisplayClass112_0_TypeInfo);
  FriendRootComponent___c__DisplayClass112_0___ctor(v5, 0LL);
  if ( !v5 )
    goto LABEL_35;
  v5->fields.__4__this = this;
  sub_1B88554(&v5->fields, this);
  v5->fields.callback = callback;
  p_callback = &v5->fields.callback;
  sub_1B88554(&v5->fields.callback, callback);
  operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    goto LABEL_35;
  if ( LOBYTE(operationItemListViewManager[1].fields.emptyMessageLabel) )
  {
    ItemSum = ListViewManager__get_ItemSum(operationItemListViewManager, 0LL);
    v10 = (System_Collections_Generic_List_long__o *)sub_1B887FC(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v10,
      (const MethodInfo_34E5014 *)Method_System_Collections_Generic_List_long___ctor__);
    v11 = (System_Collections_Generic_List_long__o *)sub_1B887FC(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v11,
      (const MethodInfo_34E5014 *)Method_System_Collections_Generic_List_long___ctor__);
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
                                                              v12);
        if ( !operationItemListViewManager )
          goto LABEL_35;
        if ( LODWORD(operationItemListViewManager->fields.clipRange.fields.x) == 3 )
        {
          dragParentObject = operationItemListViewManager->fields.dragParentObject;
          if ( !dragParentObject )
            goto LABEL_35;
          v7 = *(_QWORD *)&dragParentObject->fields.m_CachedPtr;
          if ( LOBYTE(operationItemListViewManager->fields.SortObject) )
          {
            if ( !v10 )
              goto LABEL_35;
            items = v10->fields._items;
            v16 = Method_System_Collections_Generic_List_long__Add__;
            ++v10->fields._version;
            if ( !items )
              goto LABEL_35;
            size = v10->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              v22 = v16[4];
              v23 = v10;
LABEL_24:
              System_Collections_Generic_List_long___AddWithResize(
                v23,
                v7,
                *(const MethodInfo_34E5868 **)(*(_QWORD *)(v22 + 192) + 112LL));
              continue;
            }
            v18 = &items->obj.klass + size;
            v10->fields._size = size + 1;
          }
          else
          {
            if ( !v11 )
              goto LABEL_35;
            v19 = v11->fields._items;
            v20 = Method_System_Collections_Generic_List_long__Add__;
            ++v11->fields._version;
            if ( !v19 )
              goto LABEL_35;
            v21 = v11->fields._size;
            if ( (unsigned int)v21 >= v19->max_length )
            {
              v22 = v20[4];
              v23 = v11;
              goto LABEL_24;
            }
            v18 = &v19->obj.klass + v21;
            v11->fields._size = v21 + 1;
          }
          v18[4] = (Il2CppClass *)v7;
        }
      }
    }
    v24 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v24,
      (Il2CppObject *)v5,
      Method_FriendRootComponent___c__DisplayClass112_0__messageDispChangeRequest_b__0__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    operationItemListViewManager = (ListViewManager_o *)NetworkManager__getRequest_object_(
                                                          v24,
                                                          (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_FriendMessageHideSyncRequest___);
    if ( v11 )
    {
      v25 = (FriendMessageHideSyncRequest_o *)operationItemListViewManager;
      operationItemListViewManager = (ListViewManager_o *)System_Collections_Generic_List_long___ToArray(
                                                            v11,
                                                            (const MethodInfo_34E7320 *)Method_System_Collections_Generic_List_long__ToArray__);
      if ( v10 )
      {
        v26 = (System_Int64_array *)operationItemListViewManager;
        operationItemListViewManager = (ListViewManager_o *)System_Collections_Generic_List_long___ToArray(
                                                              v10,
                                                              (const MethodInfo_34E7320 *)Method_System_Collections_Generic_List_long__ToArray__);
        if ( v25 )
        {
          FriendMessageHideSyncRequest__beginRequest(v25, v26, (System_Int64_array *)operationItemListViewManager, 0LL);
          return;
        }
      }
    }
LABEL_35:
    sub_1B8880C(operationItemListViewManager, v7);
  }
  if ( *p_callback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))(*p_callback)->fields.m_target)(
      (*p_callback)->fields.original_method_info,
      StringLiteral_22225/*"ok"*/,
      *(_QWORD *)&(*p_callback)->fields.extra_arg);
}


void __fastcall FriendRootComponent__set_tabKind(FriendRootComponent_o *this, int32_t value, const MethodInfo *method)
{
  FriendRootComponent_c *v4; // x0

  if ( (byte_4A56539 & 1) == 0 )
  {
    sub_1B885B0(&FriendRootComponent_TypeInfo);
    byte_4A56539 = 1;
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
    sub_1B8880C(this, result);
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
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  __int64 v6; // x1
  int32_t v7; // w21
  struct FriendRootComponent_o *_4__this; // x8

  if ( (byte_4A565A8 & 1) == 0 )
  {
    sub_1B885B0(&Method_ActionExtensions_Call_string___);
    sub_1B885B0(&StringLiteral_22225/*"ok"*/);
    byte_4A565A8 = 1;
  }
  operationItemListViewManager = (FriendOperationItemListViewManager_o *)System_String__op_Equality(
                                                                           result,
                                                                           (System_String_o *)StringLiteral_22225/*"ok"*/,
                                                                           0LL);
  if ( ((unsigned __int8)operationItemListViewManager & 1) != 0 && this->fields.sum >= 1 )
  {
    v7 = 0;
    do
    {
      _4__this = this->fields.__4__this;
      if ( !_4__this || (operationItemListViewManager = _4__this->fields.operationItemListViewManager) == 0LL )
        sub_1B8880C(operationItemListViewManager, v6);
      operationItemListViewManager = (FriendOperationItemListViewManager_o *)FriendOperationItemListViewManager__GetItem(
                                                                               operationItemListViewManager,
                                                                               v7,
                                                                               0LL);
      if ( operationItemListViewManager )
        FriendOperationItemListViewItem__RefreshLockInfo(
          (FriendOperationItemListViewItem_o *)operationItemListViewManager,
          0LL);
      ++v7;
    }
    while ( v7 < this->fields.sum );
  }
  ActionExtensions__Call_object_(
    (System_Action_T__o *)this->fields.onFinishedRequest,
    (Il2CppObject *)result,
    (const MethodInfo_2DD5858 *)Method_ActionExtensions_Call_string___);
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
  sub_1B88554(&this->fields.method, object);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = (Il2CppObject *)sub_19C72C0;
LABEL_8:
      this->fields.m_target = v9;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v8 )
    {
      v9 = (Il2CppObject *)sub_19C72A0;
      goto LABEL_8;
    }
    if ( !object )
    {
      v11 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v11, 0LL);
    }
  }
  v10 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v10;
LABEL_9:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19C7258;
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
  return (System_IAsyncResult_o *)sub_1B88564(this, &v6, callback, object);
}


void __fastcall FriendRootComponent_messageRequestCallback__EndInvoke(
        FriendRootComponent_messageRequestCallback_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
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