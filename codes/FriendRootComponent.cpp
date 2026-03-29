void FriendRootComponent___cctor(const MethodInfo *method)
{
  if ( (byte_4D2B48F & 1) == 0 )
  {
    sub_1C93AD4(&FriendRootComponent_TypeInfo);
    byte_4D2B48F = 1;
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

  if ( (byte_4D2B480 & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2B480 = 1;
  }
  state = this->fields.state;
  switch ( state )
  {
    case ',':
      this->fields.state = 23;
      Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        CommonUI__CloseNotificationDialog(Instance, 0);
        goto LABEL_12;
      }
LABEL_14:
      sub_1C93D2C(Instance, method);
    case '+':
      Instance = (CommonUI_o *)this->fields.friendWarningDialog;
      this->fields.state = 23;
      if ( Instance )
      {
        FriendWarningDialog__Close_33332024((FriendWarningDialog_o *)Instance, 0, v2);
        goto LABEL_12;
      }
      goto LABEL_14;
    case '*':
      Instance = (CommonUI_o *)this->fields.operationConfirmMenu;
      this->fields.state = 23;
      if ( Instance )
      {
        FriendOperationConfirmMenu__Close((FriendOperationConfirmMenu_o *)Instance, 0);
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
  __int64 v3; // x1
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  const MethodInfo *v5; // x2
  FriendSearchMenu_o *friendSearchMenu; // x20
  FriendSearchMenu_CallbackFunc_o *v7; // x21
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x1

  if ( (byte_4D2B485 & 1) == 0 )
  {
    sub_1C93AD4(&FriendSearchMenu_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_FriendRootComponent_OnSelectSearchFriend__);
    byte_4D2B485 = 1;
  }
  if ( this->fields.state == 42 )
  {
    this->fields.state = 23;
    this->fields.selectFriendCode = 0;
    sub_1C93A78(&this->fields.selectFriendCode, 0);
    this->fields.selectFriendEntity = 0;
    sub_1C93A78(&this->fields.selectFriendEntity, 0);
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close(operationConfirmMenu, 0),
          (operationConfirmMenu = (FriendOperationConfirmMenu_o *)this->fields.friendSearchResultMenu) == 0)
      || (FriendSearchResultMenu__Close_33299584((FriendSearchResultMenu_o *)operationConfirmMenu, 0, v5),
          friendSearchMenu = this->fields.friendSearchMenu,
          v7 = (FriendSearchMenu_CallbackFunc_o *)sub_1C93D20(FriendSearchMenu_CallbackFunc_TypeInfo),
          FriendSearchMenu_CallbackFunc___ctor(
            v7,
            (Il2CppObject *)this,
            Method_FriendRootComponent_OnSelectSearchFriend__,
            v8),
          !friendSearchMenu) )
    {
      sub_1C93D2C(operationConfirmMenu, v3);
    }
    FriendSearchMenu__Open(friendSearchMenu, v7, 1, v9);
    FriendRootComponent__RefreshInfo(this, v10);
  }
}


void FriendRootComponent__BackFollowRemoveConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v5; // x21
  const MethodInfo *v6; // x3

  if ( (byte_4D2B487 & 1) == 0 )
  {
    sub_1C93AD4(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_FriendRootComponent_OnSelectFriendItem__);
    byte_4D2B487 = 1;
  }
  if ( this->fields.state == 45 )
  {
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close(operationConfirmMenu, 0),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v5 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1C93D20(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v5,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v6),
          !operationItemListViewManager) )
    {
      sub_1C93D2C(operationConfirmMenu, method);
    }
    FriendOperationItemListViewManager__SetMode(operationItemListViewManager, 2, v5, 0);
    this->fields.state = 4;
  }
}


void FriendRootComponent__BackFollowRemoveConfirmBeforeRefresh(FriendRootComponent_o *this, const MethodInfo *method)
{
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0

  if ( this->fields.state == 45 )
  {
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close(operationConfirmMenu, 0),
          (operationConfirmMenu = (FriendOperationConfirmMenu_o *)this->fields.operationItemListViewManager) == 0) )
    {
      sub_1C93D2C(operationConfirmMenu, method);
    }
    FriendOperationItemListViewManager__DestroyList((FriendOperationItemListViewManager_o *)operationConfirmMenu, 0);
  }
}


void FriendRootComponent__BackFollowRemoveConfirmRefreshShowFriend(
        FriendRootComponent_o *this,
        const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v3; // x20
  Il2CppObject *Request_object; // x0
  __int64 v5; // x1

  if ( (byte_4D2B488 & 1) == 0 )
  {
    sub_1C93AD4(&Method_FriendRootComponent_EndFriendRequest2__);
    sub_1C93AD4(&Method_NetworkManager_getRequest_FriendTopRequest___);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4D2B488 = 1;
  }
  v3 = (NetworkManager_ResultCallbackFunc_o *)sub_1C93D20(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v3, (Il2CppObject *)this, Method_FriendRootComponent_EndFriendRequest2__, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v3,
                     (const MethodInfo_322FB9C *)Method_NetworkManager_getRequest_FriendTopRequest___);
  if ( !Request_object )
    sub_1C93D2C(0, v5);
  RequestBase__beginRequest((RequestBase_o *)Request_object, 0);
}


void FriendRootComponent__BackFriendAcceptConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v5; // x21
  const MethodInfo *v6; // x3

  if ( (byte_4D2B44D & 1) == 0 )
  {
    sub_1C93AD4(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_FriendRootComponent_OnSelectFriendItem__);
    byte_4D2B44D = 1;
  }
  if ( this->fields.state == 31 )
  {
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close(operationConfirmMenu, 0),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v5 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1C93D20(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v5,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v6),
          !operationItemListViewManager) )
    {
      sub_1C93D2C(operationConfirmMenu, method);
    }
    FriendOperationItemListViewManager__SetMode(operationItemListViewManager, 2, v5, 0);
    this->fields.state = 14;
  }
}


void FriendRootComponent__BackFriendAcceptConfirmRefreshShowOffered(
        FriendRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v7; // x21
  const MethodInfo *v8; // x3

  if ( (byte_4D2B44E & 1) == 0 )
  {
    sub_1C93AD4(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_FriendRootComponent_OnSelectFriendItem__);
    byte_4D2B44E = 1;
  }
  if ( this->fields.state == 31 )
  {
    this->fields.state = 14;
    FriendRootComponent__RefreshInfo(this, method);
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu )
      goto LABEL_11;
    FriendOperationConfirmMenu__Close(operationConfirmMenu, 0);
    operationConfirmMenu = (FriendOperationConfirmMenu_o *)this->fields.operationItemListViewManager;
    if ( !operationConfirmMenu
      || (FriendOperationItemListViewManager__DestroyList(
            (FriendOperationItemListViewManager_o *)operationConfirmMenu,
            0),
          (classButtonControl = this->fields.classButtonControl) == 0)
      || (operationConfirmMenu = (FriendOperationConfirmMenu_o *)this->fields.operationItemListViewManager) == 0
      || (FriendOperationItemListViewManager__CreateList(
            (FriendOperationItemListViewManager_o *)operationConfirmMenu,
            2,
            classButtonControl->fields.currentCursor,
            0),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v7 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1C93D20(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v7,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v8),
          !operationItemListViewManager) )
    {
LABEL_11:
      sub_1C93D2C(operationConfirmMenu, v3);
    }
    FriendOperationItemListViewManager__SetMode(operationItemListViewManager, 2, v7, 0);
  }
}


void FriendRootComponent__BackFriendCancelConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v5; // x21
  const MethodInfo *v6; // x3

  if ( (byte_4D2B453 & 1) == 0 )
  {
    sub_1C93AD4(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_FriendRootComponent_OnSelectFriendItem__);
    byte_4D2B453 = 1;
  }
  if ( this->fields.state == 37 )
  {
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close(operationConfirmMenu, 0),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v5 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1C93D20(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v5,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v6),
          !operationItemListViewManager) )
    {
      sub_1C93D2C(operationConfirmMenu, method);
    }
    FriendOperationItemListViewManager__SetMode(operationItemListViewManager, 2, v5, 0);
    this->fields.state = 14;
  }
}


void FriendRootComponent__BackFriendCancelConfirmRefreshShowOffer(
        FriendRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v7; // x21
  const MethodInfo *v8; // x3

  if ( (byte_4D2B454 & 1) == 0 )
  {
    sub_1C93AD4(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_FriendRootComponent_OnSelectFriendItem__);
    byte_4D2B454 = 1;
  }
  if ( this->fields.state == 37 )
  {
    this->fields.state = 9;
    FriendRootComponent__RefreshInfo(this, method);
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu )
      goto LABEL_11;
    FriendOperationConfirmMenu__Close(operationConfirmMenu, 0);
    operationConfirmMenu = (FriendOperationConfirmMenu_o *)this->fields.operationItemListViewManager;
    if ( !operationConfirmMenu
      || (FriendOperationItemListViewManager__DestroyList(
            (FriendOperationItemListViewManager_o *)operationConfirmMenu,
            0),
          (classButtonControl = this->fields.classButtonControl) == 0)
      || (operationConfirmMenu = (FriendOperationConfirmMenu_o *)this->fields.operationItemListViewManager) == 0
      || (FriendOperationItemListViewManager__CreateList(
            (FriendOperationItemListViewManager_o *)operationConfirmMenu,
            1,
            classButtonControl->fields.currentCursor,
            0),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v7 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1C93D20(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v7,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v8),
          !operationItemListViewManager) )
    {
LABEL_11:
      sub_1C93D2C(operationConfirmMenu, v3);
    }
    FriendOperationItemListViewManager__SetMode(operationItemListViewManager, 2, v7, 0);
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
      FriendWarningDialog__Close_33332024(friendWarningDialog, 0, v2);
      goto LABEL_7;
    }
LABEL_9:
    sub_1C93D2C(friendWarningDialog, method);
  }
  if ( state == 27 )
  {
    friendWarningDialog = (FriendWarningDialog_o *)this->fields.operationConfirmMenu;
    this->fields.state = 23;
    if ( friendWarningDialog )
    {
      FriendOperationConfirmMenu__Close((FriendOperationConfirmMenu_o *)friendWarningDialog, 0);
LABEL_7:
      FriendRootComponent__StartSearchInput(this, v6);
      return;
    }
    goto LABEL_9;
  }
}


void FriendRootComponent__BackFriendOfferConfirm2(FriendRootComponent_o *this, const MethodInfo *method)
{
  int32_t state; // w8
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v6; // x21
  const MethodInfo *v7; // x3

  if ( (byte_4D2B48A & 1) == 0 )
  {
    sub_1C93AD4(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_FriendRootComponent_OnSelectFriendItem__);
    byte_4D2B48A = 1;
  }
  state = this->fields.state;
  if ( state == 29 || state == 27 )
  {
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close(operationConfirmMenu, 0),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v6 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1C93D20(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v6,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v7),
          !operationItemListViewManager) )
    {
      sub_1C93D2C(operationConfirmMenu, method);
    }
    FriendOperationItemListViewManager__SetMode(operationItemListViewManager, 2, v6, 0);
    this->fields.state = 4;
  }
}


void FriendRootComponent__BackFriendOfferConfirmRefreshShowFriend(
        FriendRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v7; // x21
  const MethodInfo *v8; // x3

  if ( (byte_4D2B48B & 1) == 0 )
  {
    sub_1C93AD4(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_FriendRootComponent_OnSelectFriendItem__);
    byte_4D2B48B = 1;
  }
  if ( this->fields.state == 27 )
  {
    this->fields.state = 4;
    FriendRootComponent__RefreshInfo(this, method);
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu )
      goto LABEL_11;
    FriendOperationConfirmMenu__Close(operationConfirmMenu, 0);
    operationConfirmMenu = (FriendOperationConfirmMenu_o *)this->fields.operationItemListViewManager;
    if ( !operationConfirmMenu
      || (FriendOperationItemListViewManager__DestroyList(
            (FriendOperationItemListViewManager_o *)operationConfirmMenu,
            0),
          (classButtonControl = this->fields.classButtonControl) == 0)
      || (operationConfirmMenu = (FriendOperationConfirmMenu_o *)this->fields.operationItemListViewManager) == 0
      || (FriendOperationItemListViewManager__CreateList(
            (FriendOperationItemListViewManager_o *)operationConfirmMenu,
            3,
            classButtonControl->fields.currentCursor,
            0),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v7 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1C93D20(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v7,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v8),
          !operationItemListViewManager) )
    {
LABEL_11:
      sub_1C93D2C(operationConfirmMenu, v3);
    }
    FriendOperationItemListViewManager__SetMode(operationItemListViewManager, 2, v7, 0);
  }
}


void FriendRootComponent__BackFriendOfferConfirmRefreshShowSearch(
        FriendRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  const MethodInfo *v5; // x2
  FriendSearchMenu_o *friendSearchMenu; // x20
  FriendSearchMenu_CallbackFunc_o *v7; // x21
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x3

  if ( (byte_4D2B44B & 1) == 0 )
  {
    sub_1C93AD4(&FriendSearchMenu_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_FriendRootComponent_OnSelectSearchFriend__);
    byte_4D2B44B = 1;
  }
  if ( this->fields.state == 27 )
  {
    this->fields.state = 23;
    this->fields.selectFriendCode = 0;
    sub_1C93A78(&this->fields.selectFriendCode, 0);
    this->fields.selectFriendEntity = 0;
    sub_1C93A78(&this->fields.selectFriendEntity, 0);
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close(operationConfirmMenu, 0),
          (operationConfirmMenu = (FriendOperationConfirmMenu_o *)this->fields.friendSearchResultMenu) == 0)
      || (FriendSearchResultMenu__Close_33299584((FriendSearchResultMenu_o *)operationConfirmMenu, 0, v5),
          friendSearchMenu = this->fields.friendSearchMenu,
          v7 = (FriendSearchMenu_CallbackFunc_o *)sub_1C93D20(FriendSearchMenu_CallbackFunc_TypeInfo),
          FriendSearchMenu_CallbackFunc___ctor(
            v7,
            (Il2CppObject *)this,
            Method_FriendRootComponent_OnSelectSearchFriend__,
            v8),
          !friendSearchMenu) )
    {
      sub_1C93D2C(operationConfirmMenu, v3);
    }
    FriendSearchMenu__Open(friendSearchMenu, v7, 1, v9);
  }
}


void FriendRootComponent__BackFriendRejectConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v5; // x21
  const MethodInfo *v6; // x3

  if ( (byte_4D2B450 & 1) == 0 )
  {
    sub_1C93AD4(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_FriendRootComponent_OnSelectFriendItem__);
    byte_4D2B450 = 1;
  }
  if ( this->fields.state == 34 )
  {
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close(operationConfirmMenu, 0),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v5 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1C93D20(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v5,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v6),
          !operationItemListViewManager) )
    {
      sub_1C93D2C(operationConfirmMenu, method);
    }
    FriendOperationItemListViewManager__SetMode(operationItemListViewManager, 2, v5, 0);
    this->fields.state = 14;
  }
}


void FriendRootComponent__BackFriendRejectConfirmRefreshShowOffered(
        FriendRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v7; // x21
  const MethodInfo *v8; // x3

  if ( (byte_4D2B451 & 1) == 0 )
  {
    sub_1C93AD4(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_FriendRootComponent_OnSelectFriendItem__);
    byte_4D2B451 = 1;
  }
  if ( this->fields.state == 34 )
  {
    this->fields.state = 14;
    FriendRootComponent__RefreshInfo(this, method);
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu )
      goto LABEL_11;
    FriendOperationConfirmMenu__Close(operationConfirmMenu, 0);
    operationConfirmMenu = (FriendOperationConfirmMenu_o *)this->fields.operationItemListViewManager;
    if ( !operationConfirmMenu
      || (FriendOperationItemListViewManager__DestroyList(
            (FriendOperationItemListViewManager_o *)operationConfirmMenu,
            0),
          (classButtonControl = this->fields.classButtonControl) == 0)
      || (operationConfirmMenu = (FriendOperationConfirmMenu_o *)this->fields.operationItemListViewManager) == 0
      || (FriendOperationItemListViewManager__CreateList(
            (FriendOperationItemListViewManager_o *)operationConfirmMenu,
            2,
            classButtonControl->fields.currentCursor,
            0),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v7 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1C93D20(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v7,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v8),
          !operationItemListViewManager) )
    {
LABEL_11:
      sub_1C93D2C(operationConfirmMenu, v3);
    }
    FriendOperationItemListViewManager__SetMode(operationItemListViewManager, 2, v7, 0);
  }
}


void FriendRootComponent__BackFriendRemoveConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v5; // x21
  const MethodInfo *v6; // x3

  if ( (byte_4D2B456 & 1) == 0 )
  {
    sub_1C93AD4(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_FriendRootComponent_OnSelectFriendItem__);
    byte_4D2B456 = 1;
  }
  if ( this->fields.state == 40 )
  {
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close(operationConfirmMenu, 0),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v5 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1C93D20(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v5,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v6),
          !operationItemListViewManager) )
    {
      sub_1C93D2C(operationConfirmMenu, method);
    }
    FriendOperationItemListViewManager__SetMode(operationItemListViewManager, 2, v5, 0);
    this->fields.state = 4;
  }
}


void FriendRootComponent__BackFriendRemoveConfirmRefreshShowFriend(
        FriendRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v7; // x21
  const MethodInfo *v8; // x3

  if ( (byte_4D2B457 & 1) == 0 )
  {
    sub_1C93AD4(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_FriendRootComponent_OnSelectFriendItem__);
    byte_4D2B457 = 1;
  }
  if ( this->fields.state == 40 )
  {
    this->fields.state = 4;
    FriendRootComponent__RefreshInfo(this, method);
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu )
      goto LABEL_11;
    FriendOperationConfirmMenu__Close(operationConfirmMenu, 0);
    operationConfirmMenu = (FriendOperationConfirmMenu_o *)this->fields.operationItemListViewManager;
    if ( !operationConfirmMenu
      || (FriendOperationItemListViewManager__DestroyList(
            (FriendOperationItemListViewManager_o *)operationConfirmMenu,
            0),
          (classButtonControl = this->fields.classButtonControl) == 0)
      || (operationConfirmMenu = (FriendOperationConfirmMenu_o *)this->fields.operationItemListViewManager) == 0
      || (FriendOperationItemListViewManager__CreateList(
            (FriendOperationItemListViewManager_o *)operationConfirmMenu,
            3,
            classButtonControl->fields.currentCursor,
            0),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v7 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1C93D20(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v7,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v8),
          !operationItemListViewManager) )
    {
LABEL_11:
      sub_1C93D2C(operationConfirmMenu, v3);
    }
    FriendOperationItemListViewManager__SetMode(operationItemListViewManager, 2, v7, 0);
  }
}


void FriendRootComponent__BackSearchFriend(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  const MethodInfo *v4; // x2
  FriendSearchResultMenu_o *friendSearchResultMenu; // x0
  FriendSearchMenu_o *friendSearchMenu; // x20
  System_Action_o *v7; // x21
  const MethodInfo *v8; // x2

  if ( (byte_4D2B444 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_FriendRootComponent_OnMoveEnd__);
    byte_4D2B444 = 1;
  }
  if ( this->fields.state == 23 )
  {
    this->fields.state = 24;
    FriendRootComponent__RefreshInfo(this, method);
    this->fields.selectFriendEntity = 0;
    sub_1C93A78(&this->fields.selectFriendEntity, 0);
    friendSearchResultMenu = this->fields.friendSearchResultMenu;
    if ( !friendSearchResultMenu
      || (FriendSearchResultMenu__Close_33299584(friendSearchResultMenu, 0, v4),
          friendSearchMenu = this->fields.friendSearchMenu,
          v7 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo),
          System_Action___ctor(v7, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0),
          !friendSearchMenu) )
    {
      sub_1C93D2C(friendSearchResultMenu, v3);
    }
    FriendSearchMenu__Close_33297444(friendSearchMenu, v7, v8);
  }
}


void FriendRootComponent__BackShowFriend(FriendRootComponent_o *this, const MethodInfo *method)
{
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4D2B43C & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_FriendRootComponent_OnMoveEnd__);
    byte_4D2B43C = 1;
  }
  if ( this->fields.state == 4 )
  {
    this->fields.state = 5;
    FriendRootComponent__RefreshInfo(this, method);
    operationItemListViewManager = this->fields.operationItemListViewManager;
    v4 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(v4, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0);
    if ( !operationItemListViewManager )
      sub_1C93D2C(v5, v6);
    FriendOperationItemListViewManager__SetMode_33272528(operationItemListViewManager, 4, v4, 0);
  }
}


void FriendRootComponent__BackShowOffer(FriendRootComponent_o *this, const MethodInfo *method)
{
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x1

  if ( (byte_4D2B43E & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_FriendRootComponent_OnMoveEnd__);
    byte_4D2B43E = 1;
  }
  if ( this->fields.state == 9 )
  {
    operationItemListViewManager = this->fields.operationItemListViewManager;
    v4 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(v4, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0);
    if ( !operationItemListViewManager )
      sub_1C93D2C(v5, v6);
    FriendOperationItemListViewManager__SetMode_33272528(operationItemListViewManager, 4, v4, 0);
    FriendRootComponent__RefreshInfo(this, v7);
    this->fields.state = 10;
  }
}


void FriendRootComponent__BackShowOffered(FriendRootComponent_o *this, const MethodInfo *method)
{
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4D2B440 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_FriendRootComponent_OnMoveEnd__);
    byte_4D2B440 = 1;
  }
  if ( this->fields.state == 14 )
  {
    this->fields.state = 15;
    FriendRootComponent__RefreshInfo(this, method);
    operationItemListViewManager = this->fields.operationItemListViewManager;
    v4 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(v4, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0);
    if ( !operationItemListViewManager )
      sub_1C93D2C(v5, v6);
    FriendOperationItemListViewManager__SetMode_33272528(operationItemListViewManager, 4, v4, 0);
  }
}


void FriendRootComponent__BackShowSearch(FriendRootComponent_o *this, const MethodInfo *method)
{
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4D2B442 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_FriendRootComponent_OnMoveEnd__);
    byte_4D2B442 = 1;
  }
  if ( this->fields.state == 19 )
  {
    this->fields.state = 20;
    operationItemListViewManager = this->fields.operationItemListViewManager;
    v4 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(v4, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0);
    if ( !operationItemListViewManager )
      sub_1C93D2C(v5, v6);
    FriendOperationItemListViewManager__SetMode_33272528(operationItemListViewManager, 4, v4, 0);
  }
}


void FriendRootComponent__ChangeLimitCountBySpoilerProtection(FriendRootComponent_o *this, const MethodInfo *method)
{
  ServantLeaderInfo_o *SpoilerSetting; // x0
  __int64 v4; // x1
  struct OtherUserGameEntity_o *selectFriendEntity; // x8
  struct ServantLeaderInfo_array *userSvtLeaderHash; // x20
  int max_length; // w8
  unsigned int v8; // w21
  struct OtherUserGameEntity_o *v9; // x8
  struct ServantLeaderInfo_array *eventUserSvtLeaderHash; // x20
  int v11; // w8
  unsigned int v12; // w21
  struct OtherUserGameEntity_o *v13; // x8
  struct ServantLeaderInfo_array *userSvtGrandHash; // x19
  int v15; // w8
  unsigned int v16; // w20

  if ( (byte_4D2B462 & 1) == 0 )
  {
    sub_1C93AD4(&OptionManager_TypeInfo);
    byte_4D2B462 = 1;
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
        v8 = 0;
        while ( v8 < max_length )
        {
          SpoilerSetting = userSvtLeaderHash->m_Items[v8];
          if ( !SpoilerSetting )
            goto LABEL_30;
          ServantLeaderInfo__ChangeLimitCountBySpoilerProtection(SpoilerSetting, 0);
          max_length = userSvtLeaderHash->max_length;
          if ( (int)++v8 >= max_length )
            goto LABEL_14;
        }
LABEL_29:
        sub_1C93D34(SpoilerSetting);
      }
LABEL_14:
      v9 = this->fields.selectFriendEntity;
      if ( !v9 )
        goto LABEL_30;
      eventUserSvtLeaderHash = v9->fields.eventUserSvtLeaderHash;
      if ( !eventUserSvtLeaderHash )
        goto LABEL_30;
      v11 = eventUserSvtLeaderHash->max_length;
      if ( v11 >= 1 )
      {
        v12 = 0;
        while ( v12 < v11 )
        {
          SpoilerSetting = eventUserSvtLeaderHash->m_Items[v12];
          if ( !SpoilerSetting )
            goto LABEL_30;
          ServantLeaderInfo__ChangeLimitCountBySpoilerProtection(SpoilerSetting, 0);
          v11 = eventUserSvtLeaderHash->max_length;
          if ( (int)++v12 >= v11 )
            goto LABEL_21;
        }
        goto LABEL_29;
      }
LABEL_21:
      v13 = this->fields.selectFriendEntity;
      if ( !v13 || (userSvtGrandHash = v13->fields.userSvtGrandHash) == 0 )
LABEL_30:
        sub_1C93D2C(SpoilerSetting, v4);
      v15 = userSvtGrandHash->max_length;
      if ( v15 >= 1 )
      {
        v16 = 0;
        while ( v16 < v15 )
        {
          SpoilerSetting = userSvtGrandHash->m_Items[v16];
          if ( !SpoilerSetting )
            goto LABEL_30;
          ServantLeaderInfo__ChangeLimitCountBySpoilerProtection(SpoilerSetting, 0);
          v15 = userSvtGrandHash->max_length;
          if ( (int)++v16 >= v15 )
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
  __int64 v7; // x1

  if ( (byte_4D2B434 & 1) == 0 )
  {
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_6564/*"FRIEND_LOCK_HELP_TEXT"*/);
    sub_1C93AD4(&StringLiteral_6562/*"FRIEND_HELP_TEXT"*/);
    byte_4D2B434 = 1;
  }
  v3 = (System_String_o **)&StringLiteral_6562/*"FRIEND_HELP_TEXT"*/;
  if ( this->fields.isActiveModeKindButtons && this->fields.currentModeKind == 1 )
    v3 = (System_String_o **)&StringLiteral_6564/*"FRIEND_LOCK_HELP_TEXT"*/;
  v4 = *v3;
  helpLabel = this->fields.helpLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v6 = LocalizationManager__Get(v4, 0);
  if ( !helpLabel )
    sub_1C93D2C(v6, v7);
  UILabel__set_text(helpLabel, v6, 0);
}


void FriendRootComponent__CheckModeKind(FriendRootComponent_o *this, const MethodInfo *method)
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

  if ( (byte_4D2B469 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_TblFriendMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserFollowMaster___);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&StringLiteral_17781/*"button_alllock_unreg"*/);
    sub_1C93AD4(&StringLiteral_17787/*"button_infocheck_unreg"*/);
    sub_1C93AD4(&StringLiteral_17786/*"button_infocheck_reg"*/);
    sub_1C93AD4(&StringLiteral_17780/*"button_alllock_reg"*/);
    byte_4D2B469 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_TblFriendMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserFollowMaster___);
  if ( !MasterData_object )
    goto LABEL_31;
  v6 = (UserFollowMaster_o *)Instance;
  Instance = (DataManager_o *)TblFriendMaster__GetFriendSum((TblFriendMaster_o *)MasterData_object, 0);
  if ( (int)Instance > 0 )
    goto LABEL_9;
  if ( !v6 )
    goto LABEL_31;
  if ( UserFollowMaster__GetFollowSum(v6, 0) <= 0 )
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
  v11 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.modeEditLockButton, 0);
  UICommonButton__SetColliderEnable(modeEditLockButton, v11, 1, 0);
  if ( v7 )
  {
    v12 = 232;
    if ( this->fields.currentModeKind )
      v12 = 224;
    Instance = *(DataManager_o **)((char *)&this->klass + v12);
    if ( Instance )
    {
      UICommonButton__SetButtonEnable((UICommonButton_o *)Instance, 0, 1, 0);
      goto LABEL_21;
    }
LABEL_31:
    sub_1C93D2C(Instance, v4);
  }
LABEL_21:
  Instance = (DataManager_o *)this->fields.modeUserDetailSprite;
  if ( !Instance )
    goto LABEL_31;
  currentModeKind = this->fields.currentModeKind;
  v14 = StringLiteral_17780/*"button_alllock_reg"*/;
  v15 = StringLiteral_17781/*"button_alllock_unreg"*/;
  v16 = (System_String_o **)(currentModeKind ? &StringLiteral_17787/*"button_infocheck_unreg"*/ : &StringLiteral_17786/*"button_infocheck_reg"*/);
  UISprite__set_spriteName((UISprite_o *)Instance, *v16, 0);
  Instance = (DataManager_o *)this->fields.modeEditLockSprite;
  if ( !Instance )
    goto LABEL_31;
  if ( currentModeKind == 1 )
    v17 = (System_String_o *)v14;
  else
    v17 = (System_String_o *)v15;
  UISprite__set_spriteName((UISprite_o *)Instance, v17, 0);
}


bool FriendRootComponent__CheckTabKind(FriendRootComponent_o *this, const MethodInfo *method)
{
  int32_t tabKind; // w0
  __int64 v4; // x1
  PlayMakerFSM_o *myFSM; // x0
  __int64 *v6; // x8

  if ( (byte_4D2B438 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_8696/*"MENU_OPERATION_FRIEND"*/);
    sub_1C93AD4(&StringLiteral_8698/*"MENU_OPERATION_OFFERED"*/);
    sub_1C93AD4(&StringLiteral_8699/*"MENU_OPERATION_SEARCH"*/);
    byte_4D2B438 = 1;
  }
  tabKind = FriendRootComponent__get_tabKind(this, method);
  switch ( tabKind )
  {
    case 2:
      myFSM = this->fields.myFSM;
      if ( myFSM )
      {
        v6 = &StringLiteral_8699/*"MENU_OPERATION_SEARCH"*/;
        goto LABEL_12;
      }
LABEL_14:
      sub_1C93D2C(myFSM, v4);
    case 1:
      myFSM = this->fields.myFSM;
      if ( myFSM )
      {
        v6 = &StringLiteral_8698/*"MENU_OPERATION_OFFERED"*/;
        goto LABEL_12;
      }
      goto LABEL_14;
    case 0:
      myFSM = this->fields.myFSM;
      if ( myFSM )
      {
        v6 = &StringLiteral_8696/*"MENU_OPERATION_FRIEND"*/;
LABEL_12:
        PlayMakerFSM__SendEvent(myFSM, (System_String_o *)*v6, 0);
        return 1;
      }
      goto LABEL_14;
  }
  return 1;
}


void FriendRootComponent__EndCloseShowServant(FriendRootComponent_o *this, const MethodInfo *method)
{
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v4; // x21
  const MethodInfo *v5; // x3
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4D2B449 & 1) == 0 )
  {
    sub_1C93AD4(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_FriendRootComponent_OnSelectFriendItem__);
    byte_4D2B449 = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v4 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1C93D20(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
    v5);
  if ( !operationItemListViewManager )
    sub_1C93D2C(v6, v7);
  FriendOperationItemListViewManager__SetMode(operationItemListViewManager, 2, v4, 0);
}


void FriendRootComponent__EndCloseShowServantEquip(FriendRootComponent_o *this, const MethodInfo *method)
{
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v4; // x21
  const MethodInfo *v5; // x3
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4D2B473 & 1) == 0 )
  {
    sub_1C93AD4(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_FriendRootComponent_OnSelectFriendItem__);
    byte_4D2B473 = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v4 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1C93D20(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
    v5);
  if ( !operationItemListViewManager )
    sub_1C93D2C(v6, v7);
  FriendOperationItemListViewManager__SetMode(operationItemListViewManager, 2, v4, 0);
}


void FriendRootComponent__EndFriendRequest(
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

  if ( (byte_4D2B435 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_TblFriendMaster___);
    sub_1C93AD4(&FriendRootComponent_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2B435 = 1;
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
    Instance = (OtherUserGameEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (OtherUserGameEntity_array *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)Instance,
                                                (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_TblFriendMaster___);
      if ( Instance )
      {
        v7 = (TblFriendMaster_o *)Instance;
        Instance = TblFriendMaster__GetList((TblFriendMaster_o *)Instance, 2, 0);
        if ( Instance )
        {
          if ( Instance->max_length )
          {
            v9 = 1;
LABEL_22:
            FriendRootComponent__set_tabKind((FriendRootComponent_o *)Instance, v9, v8);
            EventTutorialMaster__CheckTutorial(-1, 49, 0, 0, 0, 0, 0, 0);
            goto LABEL_23;
          }
          List = TblFriendMaster__GetList(v7, 3, 0);
          Instance = TblFriendMaster__GetList(v7, 9, 0);
          if ( List )
          {
            if ( List->max_length )
            {
LABEL_21:
              v9 = 0;
              goto LABEL_22;
            }
            if ( Instance )
            {
              if ( !Instance->max_length )
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
    sub_1C93D2C(Instance, v6);
  }
LABEL_23:
  FriendRootComponent__InitModeKindButtons(this, (const MethodInfo *)result);
  FriendRootComponent__RefreshTab(this, v11);
  FriendRootComponent__RefreshInfo(this, v12);
  MainMenuBar__setMenuActive(1, 0, 0);
  SceneRootComponent__beginStartUp_42213664((SceneRootComponent_o *)this, 0);
}


void FriendRootComponent__EndFriendRequest2(
        FriendRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  __int64 v5; // x1
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  FriendOperationItemListViewManager_o *v7; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v8; // x21
  const MethodInfo *v9; // x3

  if ( (byte_4D2B489 & 1) == 0 )
  {
    sub_1C93AD4(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_FriendRootComponent_OnSelectFriendItem__);
    byte_4D2B489 = 1;
  }
  FriendRootComponent__RefreshInfo(this, (const MethodInfo *)result);
  classButtonControl = this->fields.classButtonControl;
  if ( !classButtonControl
    || (operationItemListViewManager = this->fields.operationItemListViewManager) == 0
    || (FriendOperationItemListViewManager__CreateList(
          operationItemListViewManager,
          3,
          classButtonControl->fields.currentCursor,
          0),
        v7 = this->fields.operationItemListViewManager,
        v8 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1C93D20(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
        FriendOperationItemListViewManager_CallbackFunc___ctor(
          v8,
          (Il2CppObject *)this,
          (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
          v9),
        !v7) )
  {
    sub_1C93D2C(operationItemListViewManager, v5);
  }
  FriendOperationItemListViewManager__SetMode(v7, 2, v8, 0);
  this->fields.state = 4;
}


void FriendRootComponent__EndLoadOutGameAtlas(FriendRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4D2B431 & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4D2B431 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C93D2C(0, v4);
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, (SceneRootComponent_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void FriendRootComponent__EndMaxFollowWarningOfferConfirm(
        FriendRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_4D2B481 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_8693/*"MENU_CANCEL"*/);
    byte_4D2B481 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1C93D2C(0, isDecide);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_8693/*"MENU_CANCEL"*/, 0);
}


// local variable allocation has failed, the output may be wrong!
void FriendRootComponent__EndMaxFriendWarning(FriendRootComponent_o *this, bool isDecide, const MethodInfo *method)
{
  FriendWarningDialog_o *friendWarningDialog; // x0
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v6; // x21
  const MethodInfo *v7; // x3

  if ( (byte_4D2B475 & 1) == 0 )
  {
    sub_1C93AD4(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_FriendRootComponent_OnSelectFriendItem__);
    byte_4D2B475 = 1;
  }
  friendWarningDialog = this->fields.friendWarningDialog;
  if ( !friendWarningDialog
    || (FriendWarningDialog__Close_33332024(friendWarningDialog, 0, method),
        operationItemListViewManager = this->fields.operationItemListViewManager,
        v6 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1C93D20(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
        FriendOperationItemListViewManager_CallbackFunc___ctor(
          v6,
          (Il2CppObject *)this,
          (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
          v7),
        !operationItemListViewManager) )
  {
    sub_1C93D2C(friendWarningDialog, isDecide);
  }
  FriendOperationItemListViewManager__SetMode(operationItemListViewManager, 2, v6, 0);
}


// local variable allocation has failed, the output may be wrong!
void FriendRootComponent__EndMaxFriendWarningOfferConfirm(
        FriendRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_4D2B476 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_8693/*"MENU_CANCEL"*/);
    byte_4D2B476 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1C93D2C(0, isDecide);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_8693/*"MENU_CANCEL"*/, 0);
}


// local variable allocation has failed, the output may be wrong!
void FriendRootComponent__EndNoSearchWarning(FriendRootComponent_o *this, bool isDecide, const MethodInfo *method)
{
  FriendWarningDialog_o *friendWarningDialog; // x0
  FriendSearchMenu_o *friendSearchMenu; // x20
  FriendSearchMenu_CallbackFunc_o *v6; // x21
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x3

  if ( (byte_4D2B463 & 1) == 0 )
  {
    sub_1C93AD4(&FriendSearchMenu_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_FriendRootComponent_OnSelectSearchFriend__);
    sub_1C93AD4(&StringLiteral_11161/*"REQUEST_NG"*/);
    byte_4D2B463 = 1;
  }
  friendWarningDialog = this->fields.friendWarningDialog;
  if ( !friendWarningDialog
    || (FriendWarningDialog__Close_33332024(friendWarningDialog, 0, method),
        this->fields.state = 23,
        friendSearchMenu = this->fields.friendSearchMenu,
        v6 = (FriendSearchMenu_CallbackFunc_o *)sub_1C93D20(FriendSearchMenu_CallbackFunc_TypeInfo),
        FriendSearchMenu_CallbackFunc___ctor(
          v6,
          (Il2CppObject *)this,
          Method_FriendRootComponent_OnSelectSearchFriend__,
          v7),
        !friendSearchMenu)
    || (FriendSearchMenu__Open(friendSearchMenu, v6, 0, v8),
        (friendWarningDialog = (FriendWarningDialog_o *)this->fields.myFSM) == 0) )
  {
    sub_1C93D2C(friendWarningDialog, isDecide);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)friendWarningDialog, (System_String_o *)StringLiteral_11161/*"REQUEST_NG"*/, 0);
}


void FriendRootComponent__EndRequestFollowAssign(
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

  if ( (byte_4D2B484 & 1) == 0 )
  {
    sub_1C93AD4(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C93AD4(&Method_FriendRootComponent_OnEndRequestDialog__);
    sub_1C93AD4(&JsonManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&StringLiteral_11163/*"REQUEST_OK"*/);
    sub_1C93AD4(&StringLiteral_11161/*"REQUEST_NG"*/);
    sub_1C93AD4(&StringLiteral_22483/*"ng"*/);
    sub_1C93AD4(&StringLiteral_21805/*"message"*/);
    byte_4D2B484 = 1;
  }
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_22483/*"ng"*/, 0) )
  {
    myFSM = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.myFSM;
    if ( myFSM )
    {
      v9 = &StringLiteral_11161/*"REQUEST_NG"*/;
      goto LABEL_14;
    }
LABEL_17:
    sub_1C93D2C(myFSM, v5);
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  myFSM = (System_Collections_Generic_Dictionary_object__object__o *)JsonManager__getDictionary(result, 0);
  if ( !myFSM )
    goto LABEL_17;
  v7 = myFSM;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          myFSM,
          (Il2CppObject *)StringLiteral_21805/*"message"*/,
          (const MethodInfo_352ED9C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_10;
  myFSM = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                       v7,
                                                                       (Il2CppObject *)StringLiteral_21805/*"message"*/,
                                                                       (const MethodInfo_352EB28 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !myFSM )
    goto LABEL_17;
  v8 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, const MethodInfo *))myFSM->klass->vtable._3_ToString.methodPtr)(
                            myFSM,
                            myFSM->klass->vtable._3_ToString.method);
  if ( System_String__IsNullOrEmpty(v8, 0) )
  {
LABEL_10:
    myFSM = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.myFSM;
    if ( myFSM )
    {
      v9 = &StringLiteral_11163/*"REQUEST_OK"*/;
LABEL_14:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myFSM, (System_String_o *)*v9, 0);
      return;
    }
    goto LABEL_17;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (NotificationDialog_ClickDelegate_o *)sub_1C93D20(NotificationDialog_ClickDelegate_TypeInfo);
  NotificationDialog_ClickDelegate___ctor(v11, (Il2CppObject *)this, Method_FriendRootComponent_OnEndRequestDialog__, 0);
  if ( !Instance )
    goto LABEL_17;
  CommonUI__OpenNotificationDialog_31583416(
    (CommonUI_o *)Instance,
    0,
    v8,
    v11,
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
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_object__object__o *myFSM; // x0
  System_Collections_Generic_Dictionary_object__object__o *v7; // x20
  System_String_o *v8; // x20
  __int64 *v9; // x8
  Il2CppObject *Instance; // x21
  NotificationDialog_ClickDelegate_o *v11; // x22

  if ( (byte_4D2B48D & 1) == 0 )
  {
    sub_1C93AD4(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C93AD4(&Method_FriendRootComponent_OnEndRequestDialog__);
    sub_1C93AD4(&JsonManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&StringLiteral_11163/*"REQUEST_OK"*/);
    sub_1C93AD4(&StringLiteral_11161/*"REQUEST_NG"*/);
    sub_1C93AD4(&StringLiteral_22483/*"ng"*/);
    sub_1C93AD4(&StringLiteral_21805/*"message"*/);
    byte_4D2B48D = 1;
  }
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_22483/*"ng"*/, 0) )
  {
    myFSM = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.myFSM;
    if ( myFSM )
    {
      v9 = &StringLiteral_11161/*"REQUEST_NG"*/;
      goto LABEL_14;
    }
LABEL_17:
    sub_1C93D2C(myFSM, v5);
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  myFSM = (System_Collections_Generic_Dictionary_object__object__o *)JsonManager__getDictionary(result, 0);
  if ( !myFSM )
    goto LABEL_17;
  v7 = myFSM;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          myFSM,
          (Il2CppObject *)StringLiteral_21805/*"message"*/,
          (const MethodInfo_352ED9C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_10;
  myFSM = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                       v7,
                                                                       (Il2CppObject *)StringLiteral_21805/*"message"*/,
                                                                       (const MethodInfo_352EB28 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !myFSM )
    goto LABEL_17;
  v8 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, const MethodInfo *))myFSM->klass->vtable._3_ToString.methodPtr)(
                            myFSM,
                            myFSM->klass->vtable._3_ToString.method);
  if ( System_String__IsNullOrEmpty(v8, 0) )
  {
LABEL_10:
    myFSM = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.myFSM;
    if ( myFSM )
    {
      v9 = &StringLiteral_11163/*"REQUEST_OK"*/;
LABEL_14:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myFSM, (System_String_o *)*v9, 0);
      return;
    }
    goto LABEL_17;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (NotificationDialog_ClickDelegate_o *)sub_1C93D20(NotificationDialog_ClickDelegate_TypeInfo);
  NotificationDialog_ClickDelegate___ctor(v11, (Il2CppObject *)this, Method_FriendRootComponent_OnEndRequestDialog__, 0);
  if ( !Instance )
    goto LABEL_17;
  CommonUI__OpenNotificationDialog_31583416(
    (CommonUI_o *)Instance,
    0,
    v8,
    v11,
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
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_object__object__o *myFSM; // x0
  System_Collections_Generic_Dictionary_object__object__o *v7; // x20
  System_String_o *v8; // x20
  __int64 *v9; // x8
  Il2CppObject *Instance; // x21
  NotificationDialog_ClickDelegate_o *v11; // x22

  if ( (byte_4D2B45E & 1) == 0 )
  {
    sub_1C93AD4(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C93AD4(&Method_FriendRootComponent_OnEndRequestDialog__);
    sub_1C93AD4(&JsonManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&StringLiteral_11163/*"REQUEST_OK"*/);
    sub_1C93AD4(&StringLiteral_11161/*"REQUEST_NG"*/);
    sub_1C93AD4(&StringLiteral_22483/*"ng"*/);
    sub_1C93AD4(&StringLiteral_21805/*"message"*/);
    byte_4D2B45E = 1;
  }
  MainMenuBar__UpdateNoticeNumber(0);
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_22483/*"ng"*/, 0) )
  {
    myFSM = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.myFSM;
    if ( myFSM )
    {
      v9 = &StringLiteral_11161/*"REQUEST_NG"*/;
      goto LABEL_14;
    }
LABEL_17:
    sub_1C93D2C(myFSM, v5);
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  myFSM = (System_Collections_Generic_Dictionary_object__object__o *)JsonManager__getDictionary(result, 0);
  if ( !myFSM )
    goto LABEL_17;
  v7 = myFSM;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          myFSM,
          (Il2CppObject *)StringLiteral_21805/*"message"*/,
          (const MethodInfo_352ED9C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_10;
  myFSM = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                       v7,
                                                                       (Il2CppObject *)StringLiteral_21805/*"message"*/,
                                                                       (const MethodInfo_352EB28 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !myFSM )
    goto LABEL_17;
  v8 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, const MethodInfo *))myFSM->klass->vtable._3_ToString.methodPtr)(
                            myFSM,
                            myFSM->klass->vtable._3_ToString.method);
  if ( System_String__IsNullOrEmpty(v8, 0) )
  {
LABEL_10:
    myFSM = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.myFSM;
    if ( myFSM )
    {
      v9 = &StringLiteral_11163/*"REQUEST_OK"*/;
LABEL_14:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myFSM, (System_String_o *)*v9, 0);
      return;
    }
    goto LABEL_17;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (NotificationDialog_ClickDelegate_o *)sub_1C93D20(NotificationDialog_ClickDelegate_TypeInfo);
  NotificationDialog_ClickDelegate___ctor(v11, (Il2CppObject *)this, Method_FriendRootComponent_OnEndRequestDialog__, 0);
  if ( !Instance )
    goto LABEL_17;
  CommonUI__OpenNotificationDialog_31583416(
    (CommonUI_o *)Instance,
    0,
    v8,
    v11,
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
  __int64 v6; // x1
  __int64 v7; // x8
  struct OtherUserGameEntity_o *v8; // x1
  const MethodInfo *v9; // x1
  __int64 *v10; // x8
  const MethodInfo *v11; // x1

  if ( (byte_4D2B461 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_OtherUserGameMaster___);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&StringLiteral_11163/*"REQUEST_OK"*/);
    sub_1C93AD4(&StringLiteral_22655/*"ok"*/);
    sub_1C93AD4(&StringLiteral_11161/*"REQUEST_NG"*/);
    byte_4D2B461 = 1;
  }
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_22655/*"ok"*/, 0) )
    goto LABEL_11;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_OtherUserGameMaster___);
  if ( !Instance )
    goto LABEL_14;
  Instance = OtherUserGameMaster__GetFriendCodeList((OtherUserGameMaster_o *)Instance, this->fields.selectFriendCode, 0);
  if ( !Instance )
    goto LABEL_14;
  v7 = *((_QWORD *)Instance + 3);
  if ( !v7 )
  {
LABEL_11:
    this->fields.selectFriendEntity = 0;
    sub_1C93A78(&this->fields.selectFriendEntity, 0);
    FriendRootComponent__StartSearchInput(this, v11);
    Instance = this->fields.myFSM;
    if ( Instance )
    {
      v10 = &StringLiteral_11161/*"REQUEST_NG"*/;
      goto LABEL_13;
    }
LABEL_14:
    sub_1C93D2C(Instance, v6);
  }
  if ( !(_DWORD)v7 )
    sub_1C93D34(Instance);
  v8 = (struct OtherUserGameEntity_o *)*((_QWORD *)Instance + 4);
  this->fields.selectFriendEntity = v8;
  sub_1C93A78(&this->fields.selectFriendEntity, v8);
  FriendRootComponent__ChangeLimitCountBySpoilerProtection(this, v9);
  Instance = this->fields.myFSM;
  if ( !Instance )
    goto LABEL_14;
  v10 = &StringLiteral_11163/*"REQUEST_OK"*/;
LABEL_13:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v10, 0);
}


void FriendRootComponent__EndShowServant(FriendRootComponent_o *this, bool isDecide, const MethodInfo *method)
{
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v5; // x21
  const MethodInfo *v6; // x3
  __int64 v7; // x0
  __int64 v8; // x1
  Il2CppObject *Instance; // x20
  System_Action_o *v10; // x21

  if ( (byte_4D2B448 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_FriendRootComponent_EndCloseShowServant__);
    sub_1C93AD4(&Method_FriendRootComponent_OnSelectFriendItem__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2B448 = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v5 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1C93D20(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
    v6);
  if ( !operationItemListViewManager
    || (FriendOperationItemListViewManager__SetMode(operationItemListViewManager, 5, v5, 0),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v10 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo),
        System_Action___ctor(v10, (Il2CppObject *)this, Method_FriendRootComponent_EndCloseShowServant__, 0),
        !Instance) )
  {
    sub_1C93D2C(v7, v8);
  }
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v10, 0);
}


void FriendRootComponent__EndShowServantEquip(FriendRootComponent_o *this, bool isDecide, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4D2B472 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_FriendRootComponent_EndCloseShowServantEquip__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2B472 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_FriendRootComponent_EndCloseShowServantEquip__, 0);
  if ( !Instance )
    sub_1C93D2C(v6, v7);
  CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)Instance, v5, 0);
}


void FriendRootComponent__FriendLockRequst(
        FriendRootComponent_o *this,
        System_Action_string__o *onFinishedRequest,
        const MethodInfo *method)
{
  __int64 v5; // x20
  ListViewManager_o *operationItemListViewManager; // x0
  int64_t items; // x1
  System_Collections_Generic_List_long__o *v8; // x21
  System_Collections_Generic_List_long__o *v9; // x22
  System_Collections_Generic_List_long__o *v10; // x23
  System_Collections_Generic_List_long__o *v11; // x24
  int32_t ItemSum; // w0
  int32_t v13; // w25
  int dragParentObject; // w8
  ListViewManager_o *v15; // x26
  struct System_Collections_Generic_List_UIDragDropListViewSurface__o *dropList; // x8
  struct System_Int64_array *v17; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x8
  struct System_Collections_Generic_List_UIDragDropListViewSurface__o *v21; // x8
  struct System_Int64_array *v22; // x8
  _QWORD *v23; // x9
  __int64 v24; // x10
  struct System_Int64_array *v25; // x8
  _QWORD *v26; // x9
  __int64 v27; // x10
  struct System_Int64_array *v28; // x8
  _QWORD *v29; // x9
  __int64 v30; // x10
  __int64 v31; // x8
  System_Collections_Generic_List_long__o *v32; // x0
  NetworkManager_ResultCallbackFunc_o *v33; // x19
  FirendLockSyncRequest_o *v34; // x19
  System_Int64_array *v35; // x20
  System_Int64_array *v36; // x21
  System_Int64_array *v37; // x22

  if ( (byte_4D2B46F & 1) == 0 )
  {
    sub_1C93AD4(&Method_ActionExtensions_Call_string___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C93AD4(&Method_NetworkManager_getRequest_FirendLockSyncRequest___);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_FriendRootComponent___c__DisplayClass113_0__FriendLockRequst_b__0__);
    sub_1C93AD4(&FriendRootComponent___c__DisplayClass113_0_TypeInfo);
    sub_1C93AD4(&StringLiteral_22655/*"ok"*/);
    byte_4D2B46F = 1;
  }
  v5 = sub_1C93D20(FriendRootComponent___c__DisplayClass113_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_49;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C93A78(v5 + 16, this);
  *(_QWORD *)(v5 + 32) = onFinishedRequest;
  sub_1C93A78(v5 + 32, onFinishedRequest);
  operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    goto LABEL_49;
  if ( FriendOperationItemListViewManager__get_IsExistSwapLockUser(
         (FriendOperationItemListViewManager_o *)operationItemListViewManager,
         0) )
  {
    v8 = (System_Collections_Generic_List_long__o *)sub_1C93D20(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v8,
      (const MethodInfo_386117C *)Method_System_Collections_Generic_List_long___ctor__);
    v9 = (System_Collections_Generic_List_long__o *)sub_1C93D20(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v9,
      (const MethodInfo_386117C *)Method_System_Collections_Generic_List_long___ctor__);
    v10 = (System_Collections_Generic_List_long__o *)sub_1C93D20(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v10,
      (const MethodInfo_386117C *)Method_System_Collections_Generic_List_long___ctor__);
    v11 = (System_Collections_Generic_List_long__o *)sub_1C93D20(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v11,
      (const MethodInfo_386117C *)Method_System_Collections_Generic_List_long___ctor__);
    operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
    if ( operationItemListViewManager )
    {
      ItemSum = ListViewManager__get_ItemSum(operationItemListViewManager, 0);
      *(_DWORD *)(v5 + 24) = ItemSum;
      if ( ItemSum >= 1 )
      {
        v13 = 0;
        while ( 1 )
        {
          operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
          if ( !operationItemListViewManager )
            goto LABEL_49;
          operationItemListViewManager = (ListViewManager_o *)FriendOperationItemListViewManager__GetItem(
                                                                (FriendOperationItemListViewManager_o *)operationItemListViewManager,
                                                                v13,
                                                                0);
          if ( !operationItemListViewManager )
            goto LABEL_49;
          dragParentObject = (int)operationItemListViewManager->fields.dragParentObject;
          v15 = operationItemListViewManager;
          if ( dragParentObject == 9 )
            break;
          if ( dragParentObject == 3 )
          {
            operationItemListViewManager = (ListViewManager_o *)FriendOperationItemListViewItem__get_IsLockDisp(
                                                                  (FriendOperationItemListViewItem_o *)operationItemListViewManager,
                                                                  0);
            dropList = v15->fields.dropList;
            if ( !dropList )
              goto LABEL_49;
            items = (int64_t)dropList->fields._items;
            if ( ((unsigned __int8)operationItemListViewManager & 1) != 0 )
            {
              if ( !v8 )
                goto LABEL_49;
              v17 = v8->fields._items;
              v18 = Method_System_Collections_Generic_List_long__Add__;
              ++v8->fields._version;
              if ( !v17 )
                goto LABEL_49;
              size = v8->fields._size;
              if ( (unsigned int)size >= LODWORD(v17->max_length) )
              {
                v31 = v18[4];
                v32 = v8;
LABEL_38:
                System_Collections_Generic_List_long___AddWithResize(
                  v32,
                  items,
                  *(const MethodInfo_38619D0 **)(*(_QWORD *)(v31 + 192) + 112LL));
                goto LABEL_39;
              }
              v20 = &v17->obj.klass + size;
              v8->fields._size = size + 1;
            }
            else
            {
              if ( !v9 )
                goto LABEL_49;
              v25 = v9->fields._items;
              v26 = Method_System_Collections_Generic_List_long__Add__;
              ++v9->fields._version;
              if ( !v25 )
                goto LABEL_49;
              v27 = v9->fields._size;
              if ( (unsigned int)v27 >= LODWORD(v25->max_length) )
              {
                v31 = v26[4];
                v32 = v9;
                goto LABEL_38;
              }
              v20 = &v25->obj.klass + v27;
              v9->fields._size = v27 + 1;
            }
LABEL_33:
            v20[4] = (Il2CppClass *)items;
          }
LABEL_39:
          if ( ++v13 >= *(_DWORD *)(v5 + 24) )
            goto LABEL_40;
        }
        operationItemListViewManager = (ListViewManager_o *)FriendOperationItemListViewItem__get_IsLockDisp(
                                                              (FriendOperationItemListViewItem_o *)operationItemListViewManager,
                                                              0);
        v21 = v15->fields.dropList;
        if ( !v21 )
          goto LABEL_49;
        items = (int64_t)v21->fields._items;
        if ( ((unsigned __int8)operationItemListViewManager & 1) != 0 )
        {
          if ( !v10 )
            goto LABEL_49;
          v22 = v10->fields._items;
          v23 = Method_System_Collections_Generic_List_long__Add__;
          ++v10->fields._version;
          if ( !v22 )
            goto LABEL_49;
          v24 = v10->fields._size;
          if ( (unsigned int)v24 >= LODWORD(v22->max_length) )
          {
            v31 = v23[4];
            v32 = v10;
            goto LABEL_38;
          }
          v20 = &v22->obj.klass + v24;
          v10->fields._size = v24 + 1;
        }
        else
        {
          if ( !v11 )
            goto LABEL_49;
          v28 = v11->fields._items;
          v29 = Method_System_Collections_Generic_List_long__Add__;
          ++v11->fields._version;
          if ( !v28 )
            goto LABEL_49;
          v30 = v11->fields._size;
          if ( (unsigned int)v30 >= LODWORD(v28->max_length) )
          {
            v31 = v29[4];
            v32 = v11;
            goto LABEL_38;
          }
          v20 = &v28->obj.klass + v30;
          v11->fields._size = v30 + 1;
        }
        goto LABEL_33;
      }
LABEL_40:
      v33 = (NetworkManager_ResultCallbackFunc_o *)sub_1C93D20(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v33,
        (Il2CppObject *)v5,
        Method_FriendRootComponent___c__DisplayClass113_0__FriendLockRequst_b__0__,
        0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      operationItemListViewManager = (ListViewManager_o *)NetworkManager__getRequest_object_(
                                                            v33,
                                                            (const MethodInfo_322FB9C *)Method_NetworkManager_getRequest_FirendLockSyncRequest___);
      if ( v8 )
      {
        v34 = (FirendLockSyncRequest_o *)operationItemListViewManager;
        operationItemListViewManager = (ListViewManager_o *)System_Collections_Generic_List_long___ToArray(
                                                              v8,
                                                              (const MethodInfo_3863488 *)Method_System_Collections_Generic_List_long__ToArray__);
        if ( v9 )
        {
          v35 = (System_Int64_array *)operationItemListViewManager;
          operationItemListViewManager = (ListViewManager_o *)System_Collections_Generic_List_long___ToArray(
                                                                v9,
                                                                (const MethodInfo_3863488 *)Method_System_Collections_Generic_List_long__ToArray__);
          if ( v10 )
          {
            v36 = (System_Int64_array *)operationItemListViewManager;
            operationItemListViewManager = (ListViewManager_o *)System_Collections_Generic_List_long___ToArray(
                                                                  v10,
                                                                  (const MethodInfo_3863488 *)Method_System_Collections_Generic_List_long__ToArray__);
            if ( v11 )
            {
              v37 = (System_Int64_array *)operationItemListViewManager;
              operationItemListViewManager = (ListViewManager_o *)System_Collections_Generic_List_long___ToArray(
                                                                    v11,
                                                                    (const MethodInfo_3863488 *)Method_System_Collections_Generic_List_long__ToArray__);
              if ( v34 )
              {
                FirendLockSyncRequest__beginRequest(
                  v34,
                  v35,
                  v36,
                  v37,
                  (System_Int64_array *)operationItemListViewManager,
                  0);
                return;
              }
            }
          }
        }
      }
    }
LABEL_49:
    sub_1C93D2C(operationItemListViewManager, items);
  }
  ActionExtensions__Call_object_(
    *(System_Action_T__o **)(v5 + 32),
    (Il2CppObject *)StringLiteral_22655/*"ok"*/,
    (const MethodInfo_30EBC54 *)Method_ActionExtensions_Call_string___);
}


UnityEngine_Vector3_o FriendRootComponent__GetDisplayPositionModeKindButtons(
        FriendRootComponent_o *this,
        const MethodInfo *method)
{
  FriendRootComponent_o *v2; // x19
  struct UISprite_o *modeEditLockSprite; // x8
  int mWidth; // w20
  float v5; // s8
  float z; // s9
  float v7; // s10
  float y; // s1
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4D2B46A & 1) == 0 )
  {
    this = (FriendRootComponent_o *)sub_1C93AD4(&FSUtility_TypeInfo);
    byte_4D2B46A = 1;
  }
  modeEditLockSprite = v2->fields.modeEditLockSprite;
  if ( !modeEditLockSprite
    || (this = (FriendRootComponent_o *)v2->fields.modeButtonParent) == 0
    || (mWidth = modeEditLockSprite->fields.mWidth,
        (this = (FriendRootComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0)) == 0)
    || (y = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0).fields.y,
        (this = (FriendRootComponent_o *)v2->fields.modeButtonParent) == 0)
    || (v5 = y,
        (this = (FriendRootComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0)) == 0) )
  {
    sub_1C93D2C(this, method);
  }
  z = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0).fields.z;
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  v7 = (float)mWidth;
  if ( !FSUtility__IsUnderVista(0) )
  {
    if ( !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    v7 = v7 - FSUtility__GetOffsetX(74.0, 1, 0);
  }
  result.fields.y = v5;
  result.fields.z = z;
  result.fields.x = v7;
  return result;
}


UnityEngine_Vector3_o FriendRootComponent__GetHidePositionModeKindButtons(
        FriendRootComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *modeButtonParent; // x0
  float v4; // s8
  float y; // s1
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  modeButtonParent = this->fields.modeButtonParent;
  if ( !modeButtonParent
    || (modeButtonParent = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(modeButtonParent, 0)) == 0
    || (y = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)modeButtonParent, 0).fields.y,
        (modeButtonParent = this->fields.modeButtonParent) == 0)
    || (v4 = y,
        (modeButtonParent = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(modeButtonParent, 0)) == 0) )
  {
    sub_1C93D2C(modeButtonParent, method);
  }
  result.fields.z = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)modeButtonParent, 0).fields.z;
  result.fields.x = -200.0;
  result.fields.y = v4;
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
    sub_1C93D2C(modeButtonParent, method);
  }
  UnityEngine_Transform__set_localPosition(transform, DisplayPositionModeKindButtons, 0);
}


void FriendRootComponent__OnClickBack(FriendRootComponent_o *this, const MethodInfo *method)
{
  int32_t state; // w8
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  FriendRootComponent_messageRequestCallback_o *v6; // x20
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x2

  if ( (byte_4D2B465 & 1) == 0 )
  {
    sub_1C93AD4(&Method_FriendRootComponent_OnClickBack__);
    sub_1C93AD4(&Method_FriendRootComponent__OnClickBack_b__100_0__);
    sub_1C93AD4(&FriendRootComponent_messageRequestCallback_TypeInfo);
    byte_4D2B465 = 1;
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
    v4 = (_QWORD *)sub_1C93AEC(Method_FriendRootComponent_OnClickBack__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0, 0);
  v6 = (FriendRootComponent_messageRequestCallback_o *)sub_1C93D20(FriendRootComponent_messageRequestCallback_TypeInfo);
  FriendRootComponent_messageRequestCallback___ctor(
    v6,
    (Il2CppObject *)this,
    Method_FriendRootComponent__OnClickBack_b__100_0__,
    v7);
  FriendRootComponent__messageDispChangeRequest(this, v6, v8);
}


void FriendRootComponent__OnClickHelp(FriendRootComponent_o *this, const MethodInfo *method)
{
  _QWORD *v2; // x0
  System_Reflection_MethodBase_o *v3; // x0

  if ( (byte_4D2B48E & 1) == 0 )
  {
    sub_1C93AD4(&Method_FriendRootComponent_OnClickHelp__);
    byte_4D2B48E = 1;
  }
  v2 = Method_FriendRootComponent_OnClickHelp__;
  if ( (*((_BYTE *)Method_FriendRootComponent_OnClickHelp__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_1C93AEC(Method_FriendRootComponent_OnClickHelp__);
  v3 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 0, 0, 0);
  EventTutorialMaster__ShowTutorialWithoutCheck(-1, 49, 0, 0, 0);
}


void FriendRootComponent__OnClickModeEditLock(FriendRootComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4D2B468 & 1) == 0 )
  {
    sub_1C93AD4(&Method_FriendRootComponent_OnClickModeEditLock__);
    byte_4D2B468 = 1;
  }
  if ( this->fields.currentModeKind != 1 )
  {
    v3 = Method_FriendRootComponent_OnClickModeEditLock__;
    if ( (*((_BYTE *)Method_FriendRootComponent_OnClickModeEditLock__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_FriendRootComponent_OnClickModeEditLock__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    this->fields.currentModeKind = 1;
    FriendRootComponent__RefreshInfo(this, v5);
  }
}


void FriendRootComponent__OnClickModeUserDetail(FriendRootComponent_o *this, const MethodInfo *method)
{
  System_Action_object__o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4D2B467 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_string__TypeInfo);
    sub_1C93AD4(&Method_FriendRootComponent__OnClickModeUserDetail_b__102_0__);
    byte_4D2B467 = 1;
  }
  if ( this->fields.currentModeKind )
  {
    v3 = (System_Action_object__o *)sub_1C93D20(System_Action_string__TypeInfo);
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

  if ( (byte_4D2B46B & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_string__TypeInfo);
    sub_1C93AD4(&Method_FriendRootComponent__OnClickTabFriend_b__109_0__);
    byte_4D2B46B = 1;
  }
  v3 = (System_Action_object__o *)sub_1C93D20(System_Action_string__TypeInfo);
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
  const MethodInfo *v4; // x3
  const MethodInfo *v5; // x2

  if ( (byte_4D2B46C & 1) == 0 )
  {
    sub_1C93AD4(&Method_FriendRootComponent__OnClickTabOffered_b__110_0__);
    sub_1C93AD4(&FriendRootComponent_messageRequestCallback_TypeInfo);
    byte_4D2B46C = 1;
  }
  v3 = (FriendRootComponent_messageRequestCallback_o *)sub_1C93D20(FriendRootComponent_messageRequestCallback_TypeInfo);
  FriendRootComponent_messageRequestCallback___ctor(
    v3,
    (Il2CppObject *)this,
    Method_FriendRootComponent__OnClickTabOffered_b__110_0__,
    v4);
  FriendRootComponent__messageDispChangeRequest(this, v3, v5);
}


void FriendRootComponent__OnClickTabSearch(FriendRootComponent_o *this, const MethodInfo *method)
{
  FriendRootComponent_messageRequestCallback_o *v3; // x20
  const MethodInfo *v4; // x3
  const MethodInfo *v5; // x2

  if ( (byte_4D2B46D & 1) == 0 )
  {
    sub_1C93AD4(&Method_FriendRootComponent__OnClickTabSearch_b__111_0__);
    sub_1C93AD4(&FriendRootComponent_messageRequestCallback_TypeInfo);
    byte_4D2B46D = 1;
  }
  v3 = (FriendRootComponent_messageRequestCallback_o *)sub_1C93D20(FriendRootComponent_messageRequestCallback_TypeInfo);
  FriendRootComponent_messageRequestCallback___ctor(
    v3,
    (Il2CppObject *)this,
    Method_FriendRootComponent__OnClickTabSearch_b__111_0__,
    v4);
  FriendRootComponent__messageDispChangeRequest(this, v3, v5);
}


void FriendRootComponent__OnEndRequestDialog(FriendRootComponent_o *this, bool isDecide, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4D2B45F & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&StringLiteral_11163/*"REQUEST_OK"*/);
    byte_4D2B45F = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance || (CommonUI__CloseNotificationDialog(Instance, 0), (Instance = (CommonUI_o *)this->fields.myFSM) == 0) )
    sub_1C93D2C(Instance, v5);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_11163/*"REQUEST_OK"*/, 0);
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
  FriendOperationItemListViewManager_o *v10; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v11; // x21
  const MethodInfo *v12; // x3
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  FriendSearchMenu_o *friendSearchMenu; // x20
  FriendSearchMenu_CallbackFunc_o *v15; // x21
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x3
  FriendOperationItemListViewManager_o *v18; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v19; // x21
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x1
  struct ClassButtonControlComponent_o *v22; // x8
  FriendSearchMenu_o *v23; // x20
  FriendSearchMenu_CallbackFunc_o *v24; // x21
  const MethodInfo *v25; // x3
  const MethodInfo *v26; // x3

  v3 = this;
  if ( (byte_4D2B464 & 1) == 0 )
  {
    sub_1C93AD4(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_1C93AD4(&FriendSearchMenu_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_FriendRootComponent_OnSelectFriendItem__);
    sub_1C93AD4(&Method_FriendRootComponent_OnSelectSearchFriend__);
    this = (FriendRootComponent_o *)sub_1C93AD4(&StringLiteral_5457/*"END_ACTION"*/);
    byte_4D2B464 = 1;
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
      FriendOperationItemListViewManager__DestroyList(operationItemListViewManager, 0);
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
      v8 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1C93D20(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
      FriendOperationItemListViewManager_CallbackFunc___ctor(
        v8,
        (Il2CppObject *)v3,
        (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
        v9);
      if ( !v7 )
        goto LABEL_39;
      FriendOperationItemListViewManager__SetMode(v7, 2, v8, 0);
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
      v10 = v3->fields.operationItemListViewManager;
      v11 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1C93D20(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
      FriendOperationItemListViewManager_CallbackFunc___ctor(
        v11,
        (Il2CppObject *)v3,
        (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
        v12);
      if ( !v10 )
        goto LABEL_39;
      FriendOperationItemListViewManager__SetMode(v10, 2, v11, 0);
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
      v19 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1C93D20(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
      FriendOperationItemListViewManager_CallbackFunc___ctor(
        v19,
        (Il2CppObject *)v3,
        (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
        v20);
      if ( !v18 )
        goto LABEL_39;
      FriendOperationItemListViewManager__SetMode(v18, 2, v19, 0);
      goto LABEL_28;
    case 0x14:
    case 0x15:
      v3->fields.state = 23;
      friendSearchMenu = v3->fields.friendSearchMenu;
      v15 = (FriendSearchMenu_CallbackFunc_o *)sub_1C93D20(FriendSearchMenu_CallbackFunc_TypeInfo);
      FriendSearchMenu_CallbackFunc___ctor(
        v15,
        (Il2CppObject *)v3,
        Method_FriendRootComponent_OnSelectSearchFriend__,
        v16);
      if ( !friendSearchMenu )
        goto LABEL_39;
      FriendSearchMenu__Open(friendSearchMenu, v15, 0, v17);
      operationItemListViewManager = v3->fields.operationItemListViewManager;
      if ( !operationItemListViewManager )
        goto LABEL_39;
      FriendOperationItemListViewManager__DestroyList(operationItemListViewManager, 0);
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
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)operationItemListViewManager, (System_String_o *)StringLiteral_5457/*"END_ACTION"*/, 0);
      break;
    case 0x16:
      jumpTabKind = v3->fields.jumpTabKind;
      v3->fields.state = 23;
      if ( jumpTabKind == 3 )
        FriendRootComponent__set_tabKind(this, 2, v2);
      FriendRootComponent__RefreshTab(v3, method);
      FriendRootComponent__RefreshInfo(v3, v21);
      v22 = v3->fields.classButtonControl;
      if ( !v22 )
        goto LABEL_39;
      v22->fields.updateEnable = 1;
      v23 = v3->fields.friendSearchMenu;
      v24 = (FriendSearchMenu_CallbackFunc_o *)sub_1C93D20(FriendSearchMenu_CallbackFunc_TypeInfo);
      FriendSearchMenu_CallbackFunc___ctor(
        v24,
        (Il2CppObject *)v3,
        Method_FriendRootComponent_OnSelectSearchFriend__,
        v25);
      if ( !v23 )
        goto LABEL_39;
      FriendSearchMenu__Open(v23, v24, 1, v26);
LABEL_18:
      operationItemListViewManager = (FriendOperationItemListViewManager_o *)v3->fields.myFSM;
      if ( !operationItemListViewManager )
LABEL_39:
        sub_1C93D2C(operationItemListViewManager, method);
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)operationItemListViewManager, (System_String_o *)StringLiteral_5457/*"END_ACTION"*/, 0);
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
  Il2CppObject *MasterData_object; // x22
  __int64 v11; // x8
  __int64 v12; // x20
  SkillInfo_o *v13; // x22
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0
  System_String_o *v16; // x20
  System_String_o *v17; // x21
  Il2CppObject *v18; // x0
  System_String_o *v19; // x0
  _QWORD *v20; // x0
  System_Reflection_MethodBase_o *v21; // x0
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v23; // x0
  const MethodInfo *v24; // x3
  void *v25; // x2
  _QWORD *v26; // x0
  System_Reflection_MethodBase_o *v27; // x0
  FriendOperationItemListViewItem_o *v28; // x22
  __int64 v29; // x8
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  ServantLeaderInfo_o *v31; // x21
  __int64 v32; // x20
  SkillInfo_o *v33; // x26
  Il2CppObject *v34; // x22
  DataManager_o *v35; // x20
  Il2CppObject *Master_object; // x0
  __int64 v37; // x23
  __int64 v38; // x24
  ServantLimitImageMaster_o *v39; // x22
  int32_t v40; // w23
  int32_t ServantImageLimitSealAfter; // w23
  Il2CppObject *v42; // x22
  int32_t v43; // w0
  int32_t limitCount; // w24
  int32_t v45; // w21
  System_String_o *v46; // x21
  System_String_o *v47; // x22
  Il2CppObject *v48; // x0
  System_String_o *v49; // x0
  System_String_o *v50; // x21
  Il2CppObject *v51; // x0
  System_String_o *v52; // x20
  _QWORD *v53; // x0
  System_Reflection_MethodBase_o *v54; // x0
  __int64 *v55; // x8
  _QWORD *v56; // x0
  System_Reflection_MethodBase_o *v57; // x0
  _QWORD *v58; // x0
  System_Reflection_MethodBase_o *v59; // x0
  _QWORD *v60; // x0
  System_Reflection_MethodBase_o *v61; // x0
  _QWORD *v62; // x0
  System_Reflection_MethodBase_o *v63; // x0
  DataManager_o *v64; // x8
  _QWORD *v65; // x0
  System_Reflection_MethodBase_o *v66; // x0
  DataManager_o *v67; // x8
  __int64 v68; // x9
  ServantLeaderInfo_o *v69; // x0
  const MethodInfo *v70; // x2
  _QWORD *v71; // x0
  System_Reflection_MethodBase_o *v72; // x0
  FriendOperationItemListViewItem_o *v73; // x20
  ServantLeaderInfo_o *ServantLeader; // x0
  EquipTargetInfo_o *EquipTargetInfo; // x0
  EquipTargetInfo_o *v76; // x21
  __int64 v77; // x22
  __int64 v78; // x23
  _QWORD *v79; // x0
  System_Reflection_MethodBase_o *v80; // x0
  const MethodInfo *v81; // x3
  int32_t v82; // w2
  FriendWarningDialog_o *friendWarningDialog; // x20
  FriendWarningDialog_CallbackFunc_o *v84; // x21
  const MethodInfo *v85; // x3
  const MethodInfo *v86; // x3
  _QWORD *v87; // x0
  System_Reflection_MethodBase_o *v88; // x0
  FriendOperationItemListViewManager_CallbackFunc_o *v89; // x21
  FriendOperationItemListViewItem_o *Item; // x0
  FriendOperationItemListViewItem_o *v91; // x20
  _QWORD *v92; // x0
  System_Reflection_MethodBase_o *v93; // x0
  int m_CancellationTokenSource; // [xsp+8h] [xbp-88h] BYREF
  int32_t lv; // [xsp+Ch] [xbp-84h] BYREF
  System_String_o *detail; // [xsp+10h] [xbp-80h] BYREF
  System_String_o *name; // [xsp+18h] [xbp-78h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+20h] [xbp-70h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+28h] [xbp-68h] BYREF
  System_String_o *v100; // [xsp+30h] [xbp-60h] BYREF
  System_String_o *defaultName; // [xsp+38h] [xbp-58h] BYREF
  SkillInfo_array *v102; // [xsp+48h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v103; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v104; // 0:x0.16

  if ( (byte_4D2B474 & 1) == 0 )
  {
    sub_1C93AD4(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_1C93AD4(&FriendWarningDialog_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_TblFriendMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C93AD4(&Method_FriendRootComponent_EndMaxFriendWarning__);
    sub_1C93AD4(&Method_FriendRootComponent_OnSelectFriendItem__);
    sub_1C93AD4(&ImageLimitCount_TypeInfo);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&StringLiteral_8707/*"MENU_SELECT_ITEM_ACCEPT"*/);
    sub_1C93AD4(&StringLiteral_113/*" "*/);
    sub_1C93AD4(&StringLiteral_8713/*"MENU_SELECT_ITEM_REMOVE_FOLLOW"*/);
    sub_1C93AD4(&StringLiteral_8708/*"MENU_SELECT_ITEM_CANCEL"*/);
    sub_1C93AD4(&StringLiteral_8599/*"MASTER_EQSKILL_LV_TXT"*/);
    sub_1C93AD4(&StringLiteral_8710/*"MENU_SELECT_ITEM_OFFER"*/);
    sub_1C93AD4(&StringLiteral_2881/*"BATTLE_SKILLCHARGETURN"*/);
    sub_1C93AD4(&StringLiteral_8711/*"MENU_SELECT_ITEM_REJECT"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    sub_1C93AD4(&StringLiteral_8712/*"MENU_SELECT_ITEM_REMOVE"*/);
    byte_4D2B474 = 1;
  }
  v102 = 0;
  v100 = 0;
  defaultName = 0;
  skillInfoList = 0;
  entity = 0;
  detail = 0;
  name = 0;
  this->fields.selectItemNum = n;
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_146;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_TblFriendMaster___);
  switch ( kind )
  {
    case 1:
    case 2:
    case 3:
      v26 = Method_FriendRootComponent_OnSelectFriendItem__;
      if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
        v26 = (_QWORD *)sub_1C93AEC(Method_FriendRootComponent_OnSelectFriendItem__);
      v27 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v26, v26[4]);
      OverwriteAssetSoundName__PlaySystemSe(v27, 0, 0, 0);
      Instance = (DataManager_o *)this->fields.operationItemListViewManager;
      if ( !Instance )
        goto LABEL_146;
      Instance = (DataManager_o *)FriendOperationItemListViewManager__GetItem(
                                    (FriendOperationItemListViewManager_o *)Instance,
                                    this->fields.selectItemNum,
                                    0);
      if ( !Instance )
        goto LABEL_146;
      v28 = (FriendOperationItemListViewItem_o *)Instance;
      Instance = (DataManager_o *)Instance->fields.writeMasterDataThread;
      if ( !Instance )
        goto LABEL_146;
      v29 = *(_QWORD *)&Instance->fields.nowLoadCount;
      if ( !v29 )
        goto LABEL_146;
      if ( !*(_DWORD *)(v29 + 24) )
        goto LABEL_147;
      ServantLeaderInfo = OtherUserGameEntity__getServantLeaderInfo(
                            (OtherUserGameEntity_o *)Instance,
                            v28->fields.classPos,
                            0,
                            0,
                            *(_DWORD *)(v29 + 32),
                            0,
                            0);
      if ( !ServantLeaderInfo )
        goto LABEL_68;
      v31 = ServantLeaderInfo;
      if ( kind == 2 )
        v32 = 1;
      else
        v32 = 2LL * (kind == 3);
      Instance = (DataManager_o *)FriendOperationItemListViewItem__GetSkillInfo(v28, &v102, 0);
      if ( !v102 )
        goto LABEL_146;
      if ( (unsigned int)v32 >= LODWORD(v102->max_length) )
        goto LABEL_147;
      v33 = v102->m_Items[v32];
      if ( !v33 || v33->fields.id < 1 || v33->fields.lv < 1 )
        goto LABEL_68;
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_146;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_SkillMaster___);
      if ( !Instance )
        goto LABEL_146;
      v34 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
              v33->fields.id,
              (const MethodInfo_3463274 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_146;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_SkillLvMaster___);
      if ( !Instance )
        goto LABEL_146;
      Instance = (DataManager_o *)SkillLvMaster__GetEntity(
                                    (SkillLvMaster_o *)Instance,
                                    v33->fields.id,
                                    v33->fields.lv,
                                    0);
      if ( !v34 )
        goto LABEL_146;
      v35 = Instance;
      SkillEntity__getSkillMessageInfo((SkillEntity_o *)v34, &defaultName, &v100, v33->fields.lv, 0);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
      v38 = *(_QWORD *)&v31->fields.svtId.fields.currentCryptoKey;
      v37 = *(_QWORD *)&v31->fields.svtId.fields.fakeValue;
      v39 = (ServantLimitImageMaster_o *)Master_object;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v103.fields.currentCryptoKey = v38;
      *(_QWORD *)&v103.fields.fakeValue = v37;
      v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v103, 0);
      Instance = (DataManager_o *)ServantLeaderInfo__getDispLimitCount(v31, 0);
      if ( !v39 )
        goto LABEL_146;
      ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                     v39,
                                     v40,
                                     (int32_t)Instance,
                                     0);
      v42 = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
      v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v31->fields.svtId, 0);
      limitCount = v31->fields.limitCount;
      v45 = v43;
      if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      Instance = (DataManager_o *)ImageLimitCount__GetLimitCountByDispLimit(ServantImageLimitSealAfter, limitCount, 0);
      if ( !v42 )
        goto LABEL_146;
      if ( !ServantLimitAddMaster__TryGetEntity((ServantLimitAddMaster_o *)v42, &entity, v45, (int32_t)Instance, 0) )
        goto LABEL_63;
      Instance = (DataManager_o *)entity;
      if ( !entity )
        goto LABEL_146;
      if ( !ServantLimitAddEntity__HasKeyOverwriteSkillName(entity, 0) )
        goto LABEL_63;
      Instance = (DataManager_o *)entity;
      if ( !entity )
        goto LABEL_146;
      defaultName = ServantLimitAddEntity__GetOverwriteSkillName(entity, v33->fields.id, defaultName, 0);
LABEL_63:
      v46 = defaultName;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v47 = LocalizationManager__Get((System_String_o *)StringLiteral_8599/*"MASTER_EQSKILL_LV_TXT"*/, 0);
      lv = v33->fields.lv;
      v48 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv);
      v49 = System_String__Format(v47, v48, 0);
      defaultName = System_String__Concat_64463988(v46, (System_String_o *)StringLiteral_113/*" "*/, v49, 0);
      Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2881/*"BATTLE_SKILLCHARGETURN"*/, 0);
      if ( !v35 )
        goto LABEL_146;
      v50 = (System_String_o *)Instance;
      m_CancellationTokenSource = (int)v35->fields.m_CancellationTokenSource;
      v51 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &m_CancellationTokenSource);
      v52 = System_String__Format(v50, v51, 0);
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !Instance )
        goto LABEL_146;
      CommonUI__OpenDetailLongInfoDialog((CommonUI_o *)Instance, defaultName, v52, v100, 1, 0, 0);
LABEL_68:
      operationItemListViewManager = this->fields.operationItemListViewManager;
      v23 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1C93D20(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
      v25 = Method_FriendRootComponent_OnSelectFriendItem__;
      goto LABEL_136;
    case 4:
      v53 = Method_FriendRootComponent_OnSelectFriendItem__;
      if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
        v53 = (_QWORD *)sub_1C93AEC(Method_FriendRootComponent_OnSelectFriendItem__);
      v54 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v53, v53[4]);
      OverwriteAssetSoundName__PlaySystemSe(v54, 0, 0, 0);
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
      v55 = &StringLiteral_8710/*"MENU_SELECT_ITEM_OFFER"*/;
      goto LABEL_139;
    case 5:
      v56 = Method_FriendRootComponent_OnSelectFriendItem__;
      if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
        v56 = (_QWORD *)sub_1C93AEC(Method_FriendRootComponent_OnSelectFriendItem__);
      v57 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v56, v56[4]);
      OverwriteAssetSoundName__PlaySystemSe(v57, 0, 0, 0);
      if ( !MasterData_object )
        goto LABEL_146;
      Instance = (DataManager_o *)TblFriendMaster__GetList((TblFriendMaster_o *)MasterData_object, 3, 0);
      if ( !Instance || !SelfUserGame )
        goto LABEL_146;
      if ( SelfUserGame->fields.friendKeep <= SLODWORD(Instance->fields.m_CancellationTokenSource) )
      {
LABEL_130:
        friendWarningDialog = this->fields.friendWarningDialog;
        v84 = (FriendWarningDialog_CallbackFunc_o *)sub_1C93D20(FriendWarningDialog_CallbackFunc_TypeInfo);
        FriendWarningDialog_CallbackFunc___ctor(
          v84,
          (Il2CppObject *)this,
          Method_FriendRootComponent_EndMaxFriendWarning__,
          v85);
        if ( friendWarningDialog )
        {
          FriendWarningDialog__Open(friendWarningDialog, 1, v84, v86);
          return;
        }
LABEL_146:
        sub_1C93D2C(Instance, v9);
      }
      Instance = (DataManager_o *)this->fields.myFSM;
      if ( !Instance )
        goto LABEL_146;
      v55 = &StringLiteral_8707/*"MENU_SELECT_ITEM_ACCEPT"*/;
LABEL_139:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v55, 0);
      return;
    case 6:
      v58 = Method_FriendRootComponent_OnSelectFriendItem__;
      if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
        v58 = (_QWORD *)sub_1C93AEC(Method_FriendRootComponent_OnSelectFriendItem__);
      v59 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v58, v58[4]);
      OverwriteAssetSoundName__PlaySystemSe(v59, 0, 0, 0);
      Instance = (DataManager_o *)this->fields.myFSM;
      if ( !Instance )
        goto LABEL_146;
      v55 = &StringLiteral_8711/*"MENU_SELECT_ITEM_REJECT"*/;
      goto LABEL_139;
    case 7:
      v60 = Method_FriendRootComponent_OnSelectFriendItem__;
      if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
        v60 = (_QWORD *)sub_1C93AEC(Method_FriendRootComponent_OnSelectFriendItem__);
      v61 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v60, v60[4]);
      OverwriteAssetSoundName__PlaySystemSe(v61, 0, 0, 0);
      Instance = (DataManager_o *)this->fields.myFSM;
      if ( !Instance )
        goto LABEL_146;
      v55 = &StringLiteral_8708/*"MENU_SELECT_ITEM_CANCEL"*/;
      goto LABEL_139;
    case 8:
      v62 = Method_FriendRootComponent_OnSelectFriendItem__;
      if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
        v62 = (_QWORD *)sub_1C93AEC(Method_FriendRootComponent_OnSelectFriendItem__);
      v63 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v62, v62[4]);
      OverwriteAssetSoundName__PlaySystemSe(v63, 0, 0, 0);
      Instance = (DataManager_o *)this->fields.operationItemListViewManager;
      if ( !Instance )
        goto LABEL_146;
      Instance = (DataManager_o *)FriendOperationItemListViewManager__GetItem(
                                    (FriendOperationItemListViewManager_o *)Instance,
                                    this->fields.selectItemNum,
                                    0);
      if ( !Instance )
        goto LABEL_146;
      v64 = Instance;
      Instance = (DataManager_o *)this->fields.myFSM;
      if ( !Instance )
        goto LABEL_146;
      if ( LODWORD(v64->fields.context) == 9 )
        v55 = &StringLiteral_8713/*"MENU_SELECT_ITEM_REMOVE_FOLLOW"*/;
      else
        v55 = &StringLiteral_8712/*"MENU_SELECT_ITEM_REMOVE"*/;
      goto LABEL_139;
    case 11:
      v71 = Method_FriendRootComponent_OnSelectFriendItem__;
      if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
        v71 = (_QWORD *)sub_1C93AEC(Method_FriendRootComponent_OnSelectFriendItem__);
      v72 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v71, v71[4]);
      OverwriteAssetSoundName__PlaySystemSe(v72, 0, 0, 0);
      Instance = (DataManager_o *)this->fields.operationItemListViewManager;
      if ( !Instance )
        goto LABEL_146;
      Instance = (DataManager_o *)FriendOperationItemListViewManager__GetItem(
                                    (FriendOperationItemListViewManager_o *)Instance,
                                    this->fields.selectItemNum,
                                    0);
      if ( !Instance )
        goto LABEL_146;
      FriendOperationItemListViewItem__set_isSwapMessageDisp(
        (FriendOperationItemListViewItem_o *)Instance,
        !Instance[1].fields._DispLog,
        0);
      goto LABEL_135;
    case 12:
      Instance = (DataManager_o *)this->fields.operationItemListViewManager;
      if ( !Instance )
        goto LABEL_146;
      Instance = (DataManager_o *)FriendOperationItemListViewManager__GetItem(
                                    (FriendOperationItemListViewManager_o *)Instance,
                                    this->fields.selectItemNum,
                                    0);
      if ( !Instance )
        goto LABEL_146;
      v73 = (FriendOperationItemListViewItem_o *)Instance;
      ServantLeader = FriendOperationItemListViewItem__get_ServantLeader(
                        (FriendOperationItemListViewItem_o *)Instance,
                        0);
      if ( !ServantLeader || !ServantLeaderInfo__IsHideEquip(ServantLeader, 0) )
      {
        EquipTargetInfo = FriendOperationItemListViewItem__get_EquipTargetInfo(v73, 0);
        if ( EquipTargetInfo )
        {
          v76 = EquipTargetInfo;
          v78 = *(_QWORD *)&EquipTargetInfo->fields.svtId.fields.currentCryptoKey;
          v77 = *(_QWORD *)&EquipTargetInfo->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v104.fields.currentCryptoKey = v78;
          *(_QWORD *)&v104.fields.fakeValue = v77;
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v104, 0) >= 1 )
          {
            v79 = Method_FriendRootComponent_OnSelectFriendItem__;
            if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
              v79 = (_QWORD *)sub_1C93AEC(Method_FriendRootComponent_OnSelectFriendItem__);
            v80 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v79, v79[4]);
            OverwriteAssetSoundName__PlaySystemSe(v80, 0, 0, 0);
            if ( v73->fields.kind == 9 )
              v82 = 14;
            else
              v82 = 13;
            FriendRootComponent__SelectShowServantEquip(this, v76, v82, v81);
            return;
          }
        }
      }
      v87 = Method_FriendRootComponent_OnSelectFriendItem__;
      if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
        v87 = (_QWORD *)sub_1C93AEC(Method_FriendRootComponent_OnSelectFriendItem__);
      v88 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v87, v87[4]);
      OverwriteAssetSoundName__PlaySystemSe(v88, 2, 0, 0);
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
                                    0);
      v11 = (unsigned int)(kind - 14);
      v12 = (unsigned int)v11 < 4 ? v11 + 1 : 0LL;
      if ( !Instance )
        goto LABEL_146;
      Instance = (DataManager_o *)FriendOperationItemListViewItem__GetAppendSkillInfo(
                                    (FriendOperationItemListViewItem_o *)Instance,
                                    &skillInfoList,
                                    0);
      if ( !skillInfoList )
        goto LABEL_146;
      if ( (unsigned int)v12 >= LODWORD(skillInfoList->max_length) )
        goto LABEL_147;
      v13 = skillInfoList->m_Items[v12];
      if ( v13 && v13->fields.id >= 1 && v13->fields.lv >= 1 )
      {
        v14 = Method_FriendRootComponent_OnSelectFriendItem__;
        if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
          v14 = (_QWORD *)sub_1C93AEC(Method_FriendRootComponent_OnSelectFriendItem__);
        v15 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v14, v14[4]);
        OverwriteAssetSoundName__PlaySystemSe(v15, 0, 0, 0);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_SkillMaster___);
        if ( !Instance )
          goto LABEL_146;
        Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                      v13->fields.id,
                                      (const MethodInfo_3463274 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_146;
        SkillEntity__getSkillMessageInfo((SkillEntity_o *)Instance, &name, &detail, v13->fields.lv, 0);
        v16 = name;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v17 = LocalizationManager__Get((System_String_o *)StringLiteral_8599/*"MASTER_EQSKILL_LV_TXT"*/, 0);
        lv = v13->fields.lv;
        v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv);
        v19 = System_String__Format(v17, v18, 0);
        name = System_String__Concat_64463988(v16, (System_String_o *)StringLiteral_113/*" "*/, v19, 0);
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
        v20 = Method_FriendRootComponent_OnSelectFriendItem__;
        if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
          v20 = (_QWORD *)sub_1C93AEC(Method_FriendRootComponent_OnSelectFriendItem__);
        v21 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v20, v20[4]);
        OverwriteAssetSoundName__PlaySystemSe(v21, 2, 0, 0);
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
                 0);
        if ( Item )
        {
          v91 = Item;
          v92 = Method_FriendRootComponent_OnSelectFriendItem__;
          if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
            v92 = (_QWORD *)sub_1C93AEC(Method_FriendRootComponent_OnSelectFriendItem__);
          v93 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v92, v92[4]);
          OverwriteAssetSoundName__PlaySystemSe(v93, 11, 0, 0);
          FriendOperationItemListViewItem__SwapLock(v91, 0);
        }
LABEL_28:
        operationItemListViewManager = this->fields.operationItemListViewManager;
        v23 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1C93D20(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
        v25 = Method_FriendRootComponent_OnSelectFriendItem__;
      }
      else
      {
        v65 = Method_FriendRootComponent_OnSelectFriendItem__;
        if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
          v65 = (_QWORD *)sub_1C93AEC(Method_FriendRootComponent_OnSelectFriendItem__);
        v66 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v65, v65[4]);
        OverwriteAssetSoundName__PlaySystemSe(v66, 0, 0, 0);
        Instance = (DataManager_o *)this->fields.operationItemListViewManager;
        if ( !Instance )
          goto LABEL_146;
        Instance = (DataManager_o *)FriendOperationItemListViewManager__GetItem(
                                      (FriendOperationItemListViewManager_o *)Instance,
                                      this->fields.selectItemNum,
                                      0);
        if ( !Instance )
          goto LABEL_146;
        v67 = Instance;
        Instance = (DataManager_o *)Instance->fields.writeMasterDataThread;
        if ( !Instance )
          goto LABEL_146;
        v68 = *(_QWORD *)&Instance->fields.nowLoadCount;
        if ( !v68 )
          goto LABEL_146;
        if ( !*(_DWORD *)(v68 + 24) )
LABEL_147:
          sub_1C93D34(Instance);
        v69 = OtherUserGameEntity__getServantLeaderInfo(
                (OtherUserGameEntity_o *)Instance,
                (int32_t)v67[1].fields.m_CancellationTokenSource,
                0,
                0,
                *(_DWORD *)(v68 + 32),
                0,
                0);
        if ( v69 )
        {
          FriendRootComponent__SelectShowServant(this, v69, v70);
          return;
        }
LABEL_135:
        operationItemListViewManager = this->fields.operationItemListViewManager;
        v23 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1C93D20(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
        v25 = Method_FriendRootComponent_OnSelectFriendItem__;
      }
LABEL_136:
      v89 = v23;
      FriendOperationItemListViewManager_CallbackFunc___ctor(v23, (Il2CppObject *)this, (intptr_t)v25, v24);
      if ( operationItemListViewManager )
      {
        FriendOperationItemListViewManager__SetMode(operationItemListViewManager, 2, v89, 0);
        return;
      }
      goto LABEL_146;
  }
}


// local variable allocation has failed, the output may be wrong!
void FriendRootComponent__OnSelectOffer(
        FriendRootComponent_o *this,
        int32_t state,
        int32_t classPos,
        const MethodInfo *method)
{
  ClassButtonControlComponent_o *classButtonControl; // x0
  __int64 *v8; // x8

  if ( (byte_4D2B47E & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_8709/*"MENU_SELECT_ITEM_FOLLOW"*/);
    sub_1C93AD4(&StringLiteral_8710/*"MENU_SELECT_ITEM_OFFER"*/);
    sub_1C93AD4(&StringLiteral_8693/*"MENU_CANCEL"*/);
    byte_4D2B47E = 1;
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
      v8 = &StringLiteral_8709/*"MENU_SELECT_ITEM_FOLLOW"*/;
      goto LABEL_12;
    }
LABEL_13:
    sub_1C93D2C(classButtonControl, *(_QWORD *)&state);
  }
  if ( state != 2 )
  {
    classButtonControl = (ClassButtonControlComponent_o *)this->fields.myFSM;
    if ( classButtonControl )
    {
      v8 = &StringLiteral_8693/*"MENU_CANCEL"*/;
      goto LABEL_12;
    }
    goto LABEL_13;
  }
  classButtonControl = (ClassButtonControlComponent_o *)this->fields.myFSM;
  if ( !classButtonControl )
    goto LABEL_13;
  v8 = &StringLiteral_8710/*"MENU_SELECT_ITEM_OFFER"*/;
LABEL_12:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)classButtonControl, (System_String_o *)*v8, 0);
}


void FriendRootComponent__OnSelectSearchFriend(
        FriendRootComponent_o *this,
        bool isDecide,
        System_String_o *friendCode,
        const MethodInfo *method)
{
  __int64 v7; // x1
  PlayMakerFSM_o *myFSM; // x0
  __int64 *v9; // x8

  if ( (byte_4D2B47D & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_8694/*"MENU_DECIDE"*/);
    sub_1C93AD4(&StringLiteral_8693/*"MENU_CANCEL"*/);
    byte_4D2B47D = 1;
  }
  this->fields.selectFriendCode = friendCode;
  sub_1C93A78(&this->fields.selectFriendCode, friendCode);
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1C93D2C(0, v7);
  v9 = &StringLiteral_8694/*"MENU_DECIDE"*/;
  if ( !isDecide )
    v9 = &StringLiteral_8693/*"MENU_CANCEL"*/;
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)*v9, 0);
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
    || (FriendOperationItemListViewManager__DestroyList(operationItemListViewManager, 0),
        (operationItemListViewManager = this->fields.operationItemListViewManager) == 0)
    || (operationItemListViewManager = (FriendOperationItemListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                                 (UnityEngine_Component_o *)operationItemListViewManager,
                                                                                 0)) == 0 )
  {
    sub_1C93D2C(operationItemListViewManager, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)operationItemListViewManager, 0, 0);
  FriendRootComponent__RefreshInfo(this, v4);
  this->fields.state = 0;
}


void FriendRootComponent__RefreshInfo(FriendRootComponent_o *this, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x22
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *v7; // x0
  UILabel_o *friendCountLabel; // x23
  UserFollowMaster_o *v9; // x21
  System_String_o *v10; // x24
  Il2CppObject *v11; // x25
  Il2CppObject *v12; // x0
  UILabel_o *followCountLabel; // x22
  System_String_o *v14; // x23
  __int64 v15; // x0
  BalanceConfig_c *v16; // x8
  Il2CppObject *v17; // x21
  Il2CppObject *v18; // x0
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x1
  int32_t FollowNum; // [xsp+0h] [xbp-60h] BYREF
  int32_t FollowSum; // [xsp+4h] [xbp-5Ch] BYREF
  int32_t friendKeep; // [xsp+8h] [xbp-58h] BYREF
  int32_t FriendSum; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4D2B43A & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_TblFriendMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserFollowMaster___);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&StringLiteral_6597/*"FRIEND_SHOW_INFOMATION"*/);
    byte_4D2B43A = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_TblFriendMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  v7 = DataManager__GetMasterData_object_(
         Instance,
         (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserFollowMaster___);
  friendCountLabel = this->fields.friendCountLabel;
  v9 = (UserFollowMaster_o *)v7;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6597/*"FRIEND_SHOW_INFOMATION"*/, 0);
  if ( !MasterData_object )
    goto LABEL_16;
  v10 = (System_String_o *)Instance;
  FriendSum = TblFriendMaster__GetFriendSum((TblFriendMaster_o *)MasterData_object, 0);
  Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &FriendSum);
  if ( !SelfUserGame )
    goto LABEL_16;
  v11 = (Il2CppObject *)Instance;
  friendKeep = SelfUserGame->fields.friendKeep;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &friendKeep);
  Instance = (DataManager_o *)System_String__Format_64467032(v10, v11, v12, 0);
  if ( !friendCountLabel )
    goto LABEL_16;
  UILabel__set_text(friendCountLabel, (System_String_o *)Instance, 0);
  followCountLabel = this->fields.followCountLabel;
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6597/*"FRIEND_SHOW_INFOMATION"*/, 0);
  if ( !v9 )
    goto LABEL_16;
  v14 = (System_String_o *)Instance;
  FollowSum = UserFollowMaster__GetFollowSum(v9, 0);
  v15 = j_il2cpp_value_box_0(int_TypeInfo, &FollowSum);
  v16 = BalanceConfig_TypeInfo;
  v17 = (Il2CppObject *)v15;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v16 = BalanceConfig_TypeInfo;
  }
  FollowNum = v16->static_fields->FollowNum;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &FollowNum);
  Instance = (DataManager_o *)System_String__Format_64467032(v14, v17, v18, 0);
  if ( !followCountLabel
    || (UILabel__set_text(followCountLabel, (System_String_o *)Instance, 0),
        Instance = (DataManager_o *)TblFriendMaster__GetSum((TblFriendMaster_o *)MasterData_object, 2, 0),
        !this->fields.noticeNumber) )
  {
LABEL_16:
    sub_1C93D2C(Instance, v5);
  }
  NoticeNumberComponent__SetNumber(this->fields.noticeNumber, (int32_t)Instance, 0);
  FriendRootComponent__CheckModeKind(this, v19);
  FriendRootComponent__CheckHelpUI(this, v20);
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

  if ( (byte_4D2B439 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_17706/*"btn_txt_friendsearch_on"*/);
    sub_1C93AD4(&StringLiteral_17705/*"btn_txt_friendsearch_off"*/);
    sub_1C93AD4(&StringLiteral_17574/*"btn_bg_09"*/);
    sub_1C93AD4(&StringLiteral_17704/*"btn_txt_friendrequest_on"*/);
    sub_1C93AD4(&StringLiteral_17702/*"btn_txt_friendlist_on"*/);
    sub_1C93AD4(&StringLiteral_17703/*"btn_txt_friendrequest_off"*/);
    sub_1C93AD4(&StringLiteral_17701/*"btn_txt_friendlist_off"*/);
    sub_1C93AD4(&StringLiteral_17594/*"btn_bg_on"*/);
    byte_4D2B439 = 1;
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
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17701/*"btn_txt_friendlist_off"*/, 0);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabOfferedTitleSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17703/*"btn_txt_friendrequest_off"*/, 0);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabSearchTitleSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17706/*"btn_txt_friendsearch_on"*/, 0);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabFriendSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17574/*"btn_bg_09"*/, 0);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabOfferedSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17574/*"btn_bg_09"*/, 0);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabSearchSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      v7 = (System_String_o *)StringLiteral_17594/*"btn_bg_on"*/;
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
      sub_1C93D2C(tabFriendButton, v4);
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
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17701/*"btn_txt_friendlist_off"*/, 0);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabOfferedTitleSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17704/*"btn_txt_friendrequest_on"*/, 0);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabSearchTitleSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17705/*"btn_txt_friendsearch_off"*/, 0);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabFriendSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17574/*"btn_bg_09"*/, 0);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabOfferedSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      v6 = (System_String_o *)StringLiteral_17594/*"btn_bg_on"*/;
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
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17702/*"btn_txt_friendlist_on"*/, 0);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabOfferedTitleSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17703/*"btn_txt_friendrequest_off"*/, 0);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabSearchTitleSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17705/*"btn_txt_friendsearch_off"*/, 0);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabFriendSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17594/*"btn_bg_on"*/, 0);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabOfferedSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      v6 = (System_String_o *)StringLiteral_17574/*"btn_bg_09"*/;
LABEL_43:
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, v6, 0);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabSearchSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      v7 = (System_String_o *)StringLiteral_17574/*"btn_bg_09"*/;
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

  if ( (byte_4D2B483 & 1) == 0 )
  {
    sub_1C93AD4(&Method_FriendRootComponent_EndRequestFollowAssign__);
    sub_1C93AD4(&Method_NetworkManager_getRequest_FollowAssignRequest___);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C93AD4(&StringLiteral_11161/*"REQUEST_NG"*/);
    byte_4D2B483 = 1;
  }
  if ( this->fields.selectFriendEntity )
  {
    v3 = (NetworkManager_ResultCallbackFunc_o *)sub_1C93D20(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v3,
      (Il2CppObject *)this,
      Method_FriendRootComponent_EndRequestFollowAssign__,
      0);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = (FollowAssignRequest_o *)NetworkManager__getRequest_object_(
                                                v3,
                                                (const MethodInfo_322FB9C *)Method_NetworkManager_getRequest_FollowAssignRequest___);
    selectFriendEntity = this->fields.selectFriendEntity;
    if ( selectFriendEntity && Request_object )
    {
      FollowAssignRequest__beginRequest(Request_object, selectFriendEntity->fields.userId, 0);
      return;
    }
LABEL_11:
    sub_1C93D2C(Request_object, method);
  }
  Request_object = (FollowAssignRequest_o *)this->fields.myFSM;
  if ( !Request_object )
    goto LABEL_11;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Request_object, (System_String_o *)StringLiteral_11161/*"REQUEST_NG"*/, 0);
}


void FriendRootComponent__RequestFollowRemove(FriendRootComponent_o *this, const MethodInfo *method)
{
  System_Action_object__o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4D2B48C & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_string__TypeInfo);
    sub_1C93AD4(&Method_FriendRootComponent__RequestFollowRemove_b__143_0__);
    byte_4D2B48C = 1;
  }
  v3 = (System_Action_object__o *)sub_1C93D20(System_Action_string__TypeInfo);
  System_Action_object____ctor(v3, (Il2CppObject *)this, Method_FriendRootComponent__RequestFollowRemove_b__143_0__, 0);
  FriendRootComponent__FriendLockRequst(this, (System_Action_string__o *)v3, v4);
}


void FriendRootComponent__RequestFriendAccept(FriendRootComponent_o *this, const MethodInfo *method)
{
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  FriendOperationItemListViewItem_o *Item; // x0
  struct OtherUserGameEntity_o *otherUserGameEntity; // x21
  NetworkManager_ResultCallbackFunc_o *v6; // x20

  if ( (byte_4D2B45A & 1) == 0 )
  {
    sub_1C93AD4(&Method_FriendRootComponent_EndRequestFriend__);
    sub_1C93AD4(&Method_NetworkManager_getRequest_FriendAcceptRequest___);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C93AD4(&StringLiteral_11161/*"REQUEST_NG"*/);
    byte_4D2B45A = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    goto LABEL_12;
  Item = FriendOperationItemListViewManager__GetItem(operationItemListViewManager, this->fields.selectItemNum, 0);
  if ( Item )
  {
    otherUserGameEntity = Item->fields.otherUserGameEntity;
    if ( otherUserGameEntity )
    {
      v6 = (NetworkManager_ResultCallbackFunc_o *)sub_1C93D20(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v6,
        (Il2CppObject *)this,
        Method_FriendRootComponent_EndRequestFriend__,
        0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      operationItemListViewManager = (FriendOperationItemListViewManager_o *)NetworkManager__getRequest_object_(
                                                                               v6,
                                                                               (const MethodInfo_322FB9C *)Method_NetworkManager_getRequest_FriendAcceptRequest___);
      if ( operationItemListViewManager )
      {
        FriendAcceptRequest__beginRequest(
          (FriendAcceptRequest_o *)operationItemListViewManager,
          otherUserGameEntity->fields.userId,
          0);
        return;
      }
LABEL_12:
      sub_1C93D2C(operationItemListViewManager, method);
    }
  }
  operationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.myFSM;
  if ( !operationItemListViewManager )
    goto LABEL_12;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)operationItemListViewManager, (System_String_o *)StringLiteral_11161/*"REQUEST_NG"*/, 0);
}


void FriendRootComponent__RequestFriendCancel(FriendRootComponent_o *this, const MethodInfo *method)
{
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  FriendOperationItemListViewItem_o *Item; // x0
  struct OtherUserGameEntity_o *otherUserGameEntity; // x21
  NetworkManager_ResultCallbackFunc_o *v6; // x20

  if ( (byte_4D2B45C & 1) == 0 )
  {
    sub_1C93AD4(&Method_FriendRootComponent_EndRequestFriend__);
    sub_1C93AD4(&Method_NetworkManager_getRequest_FriendCancelRequest___);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C93AD4(&StringLiteral_11161/*"REQUEST_NG"*/);
    byte_4D2B45C = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    goto LABEL_12;
  Item = FriendOperationItemListViewManager__GetItem(operationItemListViewManager, this->fields.selectItemNum, 0);
  if ( Item )
  {
    otherUserGameEntity = Item->fields.otherUserGameEntity;
    if ( otherUserGameEntity )
    {
      v6 = (NetworkManager_ResultCallbackFunc_o *)sub_1C93D20(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v6,
        (Il2CppObject *)this,
        Method_FriendRootComponent_EndRequestFriend__,
        0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      operationItemListViewManager = (FriendOperationItemListViewManager_o *)NetworkManager__getRequest_object_(
                                                                               v6,
                                                                               (const MethodInfo_322FB9C *)Method_NetworkManager_getRequest_FriendCancelRequest___);
      if ( operationItemListViewManager )
      {
        FriendCancelRequest__beginRequest(
          (FriendCancelRequest_o *)operationItemListViewManager,
          otherUserGameEntity->fields.userId,
          0);
        return;
      }
LABEL_12:
      sub_1C93D2C(operationItemListViewManager, method);
    }
  }
  operationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.myFSM;
  if ( !operationItemListViewManager )
    goto LABEL_12;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)operationItemListViewManager, (System_String_o *)StringLiteral_11161/*"REQUEST_NG"*/, 0);
}


void FriendRootComponent__RequestFriendOffer(FriendRootComponent_o *this, const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v3; // x20
  FriendOfferRequest_o *Request_object; // x0
  struct OtherUserGameEntity_o *selectFriendEntity; // x8

  if ( (byte_4D2B458 & 1) == 0 )
  {
    sub_1C93AD4(&Method_FriendRootComponent_EndRequestFriend__);
    sub_1C93AD4(&Method_NetworkManager_getRequest_FriendOfferRequest___);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C93AD4(&StringLiteral_11161/*"REQUEST_NG"*/);
    byte_4D2B458 = 1;
  }
  if ( this->fields.selectFriendEntity )
  {
    v3 = (NetworkManager_ResultCallbackFunc_o *)sub_1C93D20(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(v3, (Il2CppObject *)this, Method_FriendRootComponent_EndRequestFriend__, 0);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = (FriendOfferRequest_o *)NetworkManager__getRequest_object_(
                                               v3,
                                               (const MethodInfo_322FB9C *)Method_NetworkManager_getRequest_FriendOfferRequest___);
    selectFriendEntity = this->fields.selectFriendEntity;
    if ( selectFriendEntity && Request_object )
    {
      FriendOfferRequest__beginRequest(Request_object, selectFriendEntity->fields.userId, 0);
      return;
    }
LABEL_11:
    sub_1C93D2C(Request_object, method);
  }
  Request_object = (FriendOfferRequest_o *)this->fields.myFSM;
  if ( !Request_object )
    goto LABEL_11;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Request_object, (System_String_o *)StringLiteral_11161/*"REQUEST_NG"*/, 0);
}


void FriendRootComponent__RequestFriendOffer2(FriendRootComponent_o *this, const MethodInfo *method)
{
  System_Action_object__o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4D2B459 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_string__TypeInfo);
    sub_1C93AD4(&Method_FriendRootComponent__RequestFriendOffer2_b__88_0__);
    byte_4D2B459 = 1;
  }
  v3 = (System_Action_object__o *)sub_1C93D20(System_Action_string__TypeInfo);
  System_Action_object____ctor(v3, (Il2CppObject *)this, Method_FriendRootComponent__RequestFriendOffer2_b__88_0__, 0);
  FriendRootComponent__FriendLockRequst(this, (System_Action_string__o *)v3, v4);
}


void FriendRootComponent__RequestFriendProfile(FriendRootComponent_o *this, const MethodInfo *method)
{
  System_String_o *selectFriendCode; // x0
  System_String_o *v4; // x0
  NetworkManager_ResultCallbackFunc_o *v5; // x20
  ProfileTopRequest_o *Request_object; // x0
  __int64 v7; // x1
  FriendWarningDialog_o *friendWarningDialog; // x20
  FriendWarningDialog_CallbackFunc_o *v9; // x21
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x3

  if ( (byte_4D2B460 & 1) == 0 )
  {
    sub_1C93AD4(&FriendWarningDialog_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_FriendRootComponent_EndNoSearchWarning__);
    sub_1C93AD4(&Method_FriendRootComponent_EndRequestFriendProfile__);
    sub_1C93AD4(&Method_NetworkManager_getRequest_ProfileTopRequest___);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C93AD4(&StringLiteral_113/*" "*/);
    sub_1C93AD4(&StringLiteral_11161/*"REQUEST_NG"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2B460 = 1;
  }
  selectFriendCode = this->fields.selectFriendCode;
  if ( selectFriendCode )
  {
    v4 = System_String__Replace_64472288(
           selectFriendCode,
           (System_String_o *)StringLiteral_113/*" "*/,
           (System_String_o *)StringLiteral_1/*""*/,
           0);
    if ( System_String__op_Inequality(v4, (System_String_o *)StringLiteral_1/*""*/, 0) )
    {
      v5 = (NetworkManager_ResultCallbackFunc_o *)sub_1C93D20(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v5,
        (Il2CppObject *)this,
        Method_FriendRootComponent_EndRequestFriendProfile__,
        0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Request_object = (ProfileTopRequest_o *)NetworkManager__getRequest_object_(
                                                v5,
                                                (const MethodInfo_322FB9C *)Method_NetworkManager_getRequest_ProfileTopRequest___);
      if ( Request_object )
      {
        ProfileTopRequest__beginRequestFriendCode(Request_object, this->fields.selectFriendCode, 0);
        return;
      }
LABEL_13:
      sub_1C93D2C(Request_object, v7);
    }
    friendWarningDialog = this->fields.friendWarningDialog;
    v9 = (FriendWarningDialog_CallbackFunc_o *)sub_1C93D20(FriendWarningDialog_CallbackFunc_TypeInfo);
    FriendWarningDialog_CallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_FriendRootComponent_EndNoSearchWarning__,
      v10);
    if ( !friendWarningDialog )
      goto LABEL_13;
    FriendWarningDialog__Open(friendWarningDialog, 3, v9, v11);
  }
  this->fields.selectFriendEntity = 0;
  sub_1C93A78(&this->fields.selectFriendEntity, 0);
  Request_object = (ProfileTopRequest_o *)this->fields.myFSM;
  if ( !Request_object )
    goto LABEL_13;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Request_object, (System_String_o *)StringLiteral_11161/*"REQUEST_NG"*/, 0);
}


void FriendRootComponent__RequestFriendReject(FriendRootComponent_o *this, const MethodInfo *method)
{
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  FriendOperationItemListViewItem_o *Item; // x0
  struct OtherUserGameEntity_o *otherUserGameEntity; // x21
  NetworkManager_ResultCallbackFunc_o *v6; // x20

  if ( (byte_4D2B45B & 1) == 0 )
  {
    sub_1C93AD4(&Method_FriendRootComponent_EndRequestFriend__);
    sub_1C93AD4(&Method_NetworkManager_getRequest_FriendRejectRequest___);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&StringLiteral_11161/*"REQUEST_NG"*/);
    byte_4D2B45B = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    goto LABEL_13;
  Item = FriendOperationItemListViewManager__GetItem(operationItemListViewManager, this->fields.selectItemNum, 0);
  if ( Item )
  {
    otherUserGameEntity = Item->fields.otherUserGameEntity;
    if ( otherUserGameEntity )
    {
      operationItemListViewManager = (FriendOperationItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( operationItemListViewManager )
      {
        CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)operationItemListViewManager, 0, 0);
        v6 = (NetworkManager_ResultCallbackFunc_o *)sub_1C93D20(NetworkManager_ResultCallbackFunc_TypeInfo);
        NetworkManager_ResultCallbackFunc___ctor(
          v6,
          (Il2CppObject *)this,
          Method_FriendRootComponent_EndRequestFriend__,
          0);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        operationItemListViewManager = (FriendOperationItemListViewManager_o *)NetworkManager__getRequest_object_(
                                                                                 v6,
                                                                                 (const MethodInfo_322FB9C *)Method_NetworkManager_getRequest_FriendRejectRequest___);
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
      sub_1C93D2C(operationItemListViewManager, method);
    }
  }
  operationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.myFSM;
  if ( !operationItemListViewManager )
    goto LABEL_13;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)operationItemListViewManager, (System_String_o *)StringLiteral_11161/*"REQUEST_NG"*/, 0);
}


void FriendRootComponent__RequestFriendRemove(FriendRootComponent_o *this, const MethodInfo *method)
{
  System_Action_object__o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4D2B45D & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_string__TypeInfo);
    sub_1C93AD4(&Method_FriendRootComponent__RequestFriendRemove_b__92_0__);
    byte_4D2B45D = 1;
  }
  v3 = (System_Action_object__o *)sub_1C93D20(System_Action_string__TypeInfo);
  System_Action_object____ctor(v3, (Il2CppObject *)this, Method_FriendRootComponent__RequestFriendRemove_b__92_0__, 0);
  FriendRootComponent__FriendLockRequst(this, (System_Action_string__o *)v3, v4);
}


void FriendRootComponent__SelectFollowConfirm(FriendRootComponent_o *this, const MethodInfo *method)
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
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x3
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x20
  OtherUserGameEntity_o *v19; // x21
  FriendOperationConfirmMenu_CallbackFunc_o *v20; // x22

  if ( (byte_4D2B47F & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo);
    sub_1C93AD4(&FriendWarningDialog_CallbackFunc_TypeInfo);
    sub_1C93AD4(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserFollowMaster___);
    sub_1C93AD4(&Method_FriendRootComponent_EndMaxFollowWarningOfferConfirm__);
    sub_1C93AD4(&Method_FriendRootComponent_SelectedFollowOfferConfirm__);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&StringLiteral_1943/*"ALREADY_FOLLOWED_TITLE"*/);
    sub_1C93AD4(&StringLiteral_1942/*"ALREADY_FOLLOWED_MESSAGE"*/);
    byte_4D2B47F = 1;
  }
  if ( this->fields.state == 23 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserFollowMaster___);
      if ( Instance )
      {
        v5 = (UserFollowMaster_o *)Instance;
        FollowSum = UserFollowMaster__GetFollowSum((UserFollowMaster_o *)Instance, 0);
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
          v15 = (FriendWarningDialog_CallbackFunc_o *)sub_1C93D20(FriendWarningDialog_CallbackFunc_TypeInfo);
          FriendWarningDialog_CallbackFunc___ctor(
            v15,
            (Il2CppObject *)this,
            Method_FriendRootComponent_EndMaxFollowWarningOfferConfirm__,
            v16);
          if ( friendWarningDialog )
          {
            FriendWarningDialog__Open(friendWarningDialog, 7, v15, v17);
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
          if ( UserFollowMaster__IsFollowUser(v5, selectFriendEntity->fields.userId, 0) )
          {
            this->fields.state = 44;
            v10 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v11 = LocalizationManager__Get((System_String_o *)StringLiteral_1943/*"ALREADY_FOLLOWED_TITLE"*/, 0);
            v12 = LocalizationManager__Get((System_String_o *)StringLiteral_1942/*"ALREADY_FOLLOWED_MESSAGE"*/, 0);
            v13 = (NotificationDialog_ClickDelegate_o *)sub_1C93D20(NotificationDialog_ClickDelegate_TypeInfo);
            NotificationDialog_ClickDelegate___ctor(
              v13,
              (Il2CppObject *)this,
              Method_FriendRootComponent_EndMaxFollowWarningOfferConfirm__,
              0);
            if ( v10 )
            {
              CommonUI__OpenNotificationDialog_31583416(
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
            v19 = this->fields.selectFriendEntity;
            v20 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_1C93D20(FriendOperationConfirmMenu_CallbackFunc_TypeInfo);
            FriendOperationConfirmMenu_CallbackFunc___ctor(
              v20,
              (Il2CppObject *)this,
              Method_FriendRootComponent_SelectedFollowOfferConfirm__,
              0);
            if ( operationConfirmMenu )
            {
              FriendOperationConfirmMenu__Open(operationConfirmMenu, 6, v19, v20, 0);
              return;
            }
          }
        }
      }
    }
    sub_1C93D2C(Instance, v4);
  }
}


void FriendRootComponent__SelectFollowRemoveConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x20
  OtherUserGameEntity_o *dropList; // x21
  FriendOperationConfirmMenu_CallbackFunc_o *v6; // x22

  if ( (byte_4D2B486 & 1) == 0 )
  {
    sub_1C93AD4(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_FriendRootComponent_SelectedFollowRemoveConfirm__);
    byte_4D2B486 = 1;
  }
  if ( this->fields.state == 4 )
  {
    operationItemListViewManager = this->fields.operationItemListViewManager;
    if ( !operationItemListViewManager
      || (operationItemListViewManager = (FriendOperationItemListViewManager_o *)FriendOperationItemListViewManager__GetItem(
                                                                                   operationItemListViewManager,
                                                                                   this->fields.selectItemNum,
                                                                                   0),
          this->fields.state = 45,
          !operationItemListViewManager)
      || (operationConfirmMenu = this->fields.operationConfirmMenu,
          dropList = (OtherUserGameEntity_o *)operationItemListViewManager->fields.dropList,
          v6 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_1C93D20(FriendOperationConfirmMenu_CallbackFunc_TypeInfo),
          FriendOperationConfirmMenu_CallbackFunc___ctor(
            v6,
            (Il2CppObject *)this,
            Method_FriendRootComponent_SelectedFollowRemoveConfirm__,
            0),
          !operationConfirmMenu) )
    {
      sub_1C93D2C(operationItemListViewManager, method);
    }
    FriendOperationConfirmMenu__Open(operationConfirmMenu, 7, dropList, v6, 0);
  }
}


void FriendRootComponent__SelectFriendAcceptConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x20
  OtherUserGameEntity_o *dropList; // x21
  FriendOperationConfirmMenu_CallbackFunc_o *v6; // x22

  if ( (byte_4D2B44C & 1) == 0 )
  {
    sub_1C93AD4(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_FriendRootComponent_SelectedFriendAcceptConfirm__);
    byte_4D2B44C = 1;
  }
  if ( this->fields.state == 14 )
  {
    operationItemListViewManager = this->fields.operationItemListViewManager;
    if ( !operationItemListViewManager
      || (operationItemListViewManager = (FriendOperationItemListViewManager_o *)FriendOperationItemListViewManager__GetItem(
                                                                                   operationItemListViewManager,
                                                                                   this->fields.selectItemNum,
                                                                                   0),
          this->fields.state = 31,
          !operationItemListViewManager)
      || (operationConfirmMenu = this->fields.operationConfirmMenu,
          dropList = (OtherUserGameEntity_o *)operationItemListViewManager->fields.dropList,
          v6 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_1C93D20(FriendOperationConfirmMenu_CallbackFunc_TypeInfo),
          FriendOperationConfirmMenu_CallbackFunc___ctor(
            v6,
            (Il2CppObject *)this,
            Method_FriendRootComponent_SelectedFriendAcceptConfirm__,
            0),
          !operationConfirmMenu) )
    {
      sub_1C93D2C(operationItemListViewManager, method);
    }
    FriendOperationConfirmMenu__Open(operationConfirmMenu, 2, dropList, v6, 0);
  }
}


void FriendRootComponent__SelectFriendCancelConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x20
  OtherUserGameEntity_o *dropList; // x21
  FriendOperationConfirmMenu_CallbackFunc_o *v6; // x22

  if ( (byte_4D2B452 & 1) == 0 )
  {
    sub_1C93AD4(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_FriendRootComponent_SelectedFriendCancelConfirm__);
    byte_4D2B452 = 1;
  }
  if ( this->fields.state == 9 )
  {
    operationItemListViewManager = this->fields.operationItemListViewManager;
    if ( !operationItemListViewManager
      || (operationItemListViewManager = (FriendOperationItemListViewManager_o *)FriendOperationItemListViewManager__GetItem(
                                                                                   operationItemListViewManager,
                                                                                   this->fields.selectItemNum,
                                                                                   0),
          this->fields.state = 37,
          !operationItemListViewManager)
      || (operationConfirmMenu = this->fields.operationConfirmMenu,
          dropList = (OtherUserGameEntity_o *)operationItemListViewManager->fields.dropList,
          v6 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_1C93D20(FriendOperationConfirmMenu_CallbackFunc_TypeInfo),
          FriendOperationConfirmMenu_CallbackFunc___ctor(
            v6,
            (Il2CppObject *)this,
            Method_FriendRootComponent_SelectedFriendCancelConfirm__,
            0),
          !operationConfirmMenu) )
    {
      sub_1C93D2C(operationItemListViewManager, method);
    }
    FriendOperationConfirmMenu__Open(operationConfirmMenu, 4, dropList, v6, 0);
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
  FriendOperationConfirmMenu_o *v10; // x0
  OtherUserGameEntity_o *v11; // x2
  UserGameEntity_o *SelfUserGame; // x20
  struct FriendOperationConfirmMenu_o *operationConfirmMenu; // x20
  OtherUserGameEntity_o *writeMasterDataThread; // x21
  FriendWarningDialog_o *friendWarningDialog; // x20
  FriendWarningDialog_CallbackFunc_o *v16; // x21
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x3

  if ( (byte_4D2B44A & 1) == 0 )
  {
    sub_1C93AD4(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo);
    sub_1C93AD4(&FriendWarningDialog_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_TblFriendMaster___);
    sub_1C93AD4(&Method_FriendRootComponent_EndMaxFriendWarningOfferConfirm__);
    sub_1C93AD4(&Method_FriendRootComponent_SelectedFriendOfferConfirm__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2B44A = 1;
  }
  state = this->fields.state;
  if ( state == 4 )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_27;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_TblFriendMaster___);
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
                                      0);
        this->fields.state = 27;
        if ( Instance )
        {
          operationConfirmMenu = this->fields.operationConfirmMenu;
          writeMasterDataThread = (OtherUserGameEntity_o *)Instance->fields.writeMasterDataThread;
          v9 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_1C93D20(FriendOperationConfirmMenu_CallbackFunc_TypeInfo);
          FriendOperationConfirmMenu_CallbackFunc___ctor(
            v9,
            (Il2CppObject *)this,
            Method_FriendRootComponent_SelectedFriendOfferConfirm__,
            0);
          if ( operationConfirmMenu )
          {
            v10 = operationConfirmMenu;
            v11 = writeMasterDataThread;
            goto LABEL_22;
          }
        }
      }
LABEL_27:
      sub_1C93D2C(Instance, v6);
    }
LABEL_24:
    this->fields.state = 29;
    friendWarningDialog = this->fields.friendWarningDialog;
    v16 = (FriendWarningDialog_CallbackFunc_o *)sub_1C93D20(FriendWarningDialog_CallbackFunc_TypeInfo);
    FriendWarningDialog_CallbackFunc___ctor(
      v16,
      (Il2CppObject *)this,
      Method_FriendRootComponent_EndMaxFriendWarningOfferConfirm__,
      v17);
    if ( !friendWarningDialog )
      goto LABEL_27;
    FriendWarningDialog__Open(friendWarningDialog, 1, v16, v18);
    return;
  }
  if ( state != 23 )
    return;
  v4 = UserGameMaster__getSelfUserGame(0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_TblFriendMaster___);
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
    v9 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_1C93D20(FriendOperationConfirmMenu_CallbackFunc_TypeInfo);
    FriendOperationConfirmMenu_CallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_FriendRootComponent_SelectedFriendOfferConfirm__,
      0);
    if ( v8 )
    {
      v10 = v8;
      v11 = selectFriendEntity;
LABEL_22:
      FriendOperationConfirmMenu__Open(v10, 1, v11, v9, 0);
      return;
    }
    goto LABEL_27;
  }
  FriendRootComponent__StartSearchInput(this, v6);
}


void FriendRootComponent__SelectFriendRejectConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x20
  OtherUserGameEntity_o *dropList; // x21
  FriendOperationConfirmMenu_CallbackFunc_o *v6; // x22

  if ( (byte_4D2B44F & 1) == 0 )
  {
    sub_1C93AD4(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_FriendRootComponent_SelectedFriendRejectConfirm__);
    byte_4D2B44F = 1;
  }
  if ( this->fields.state == 14 )
  {
    operationItemListViewManager = this->fields.operationItemListViewManager;
    if ( !operationItemListViewManager
      || (operationItemListViewManager = (FriendOperationItemListViewManager_o *)FriendOperationItemListViewManager__GetItem(
                                                                                   operationItemListViewManager,
                                                                                   this->fields.selectItemNum,
                                                                                   0),
          this->fields.state = 34,
          !operationItemListViewManager)
      || (operationConfirmMenu = this->fields.operationConfirmMenu,
          dropList = (OtherUserGameEntity_o *)operationItemListViewManager->fields.dropList,
          v6 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_1C93D20(FriendOperationConfirmMenu_CallbackFunc_TypeInfo),
          FriendOperationConfirmMenu_CallbackFunc___ctor(
            v6,
            (Il2CppObject *)this,
            Method_FriendRootComponent_SelectedFriendRejectConfirm__,
            0),
          !operationConfirmMenu) )
    {
      sub_1C93D2C(operationItemListViewManager, method);
    }
    FriendOperationConfirmMenu__Open(operationConfirmMenu, 3, dropList, v6, 0);
  }
}


void FriendRootComponent__SelectFriendRemoveConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x20
  OtherUserGameEntity_o *dropList; // x21
  FriendOperationConfirmMenu_CallbackFunc_o *v6; // x22

  if ( (byte_4D2B455 & 1) == 0 )
  {
    sub_1C93AD4(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_FriendRootComponent_SelectedFriendRemoveConfirm__);
    byte_4D2B455 = 1;
  }
  if ( this->fields.state == 4 )
  {
    operationItemListViewManager = this->fields.operationItemListViewManager;
    if ( !operationItemListViewManager
      || (operationItemListViewManager = (FriendOperationItemListViewManager_o *)FriendOperationItemListViewManager__GetItem(
                                                                                   operationItemListViewManager,
                                                                                   this->fields.selectItemNum,
                                                                                   0),
          this->fields.state = 40,
          !operationItemListViewManager)
      || (operationConfirmMenu = this->fields.operationConfirmMenu,
          dropList = (OtherUserGameEntity_o *)operationItemListViewManager->fields.dropList,
          v6 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_1C93D20(FriendOperationConfirmMenu_CallbackFunc_TypeInfo),
          FriendOperationConfirmMenu_CallbackFunc___ctor(
            v6,
            (Il2CppObject *)this,
            Method_FriendRootComponent_SelectedFriendRemoveConfirm__,
            0),
          !operationConfirmMenu) )
    {
      sub_1C93D2C(operationItemListViewManager, method);
    }
    FriendOperationConfirmMenu__Open(operationConfirmMenu, 5, dropList, v6, 0);
  }
}


void FriendRootComponent__SelectSearchFriend(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_4D2B443 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_5457/*"END_ACTION"*/);
    byte_4D2B443 = 1;
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
      sub_1C93D2C(0, method);
    PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_5457/*"END_ACTION"*/, 0);
  }
}


void FriendRootComponent__SelectShowFriend(FriendRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *operationItemListViewManager; // x0
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  FriendOperationItemListViewManager_o *v5; // x20
  System_Action_o *v6; // x21

  if ( (byte_4D2B43B & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_FriendRootComponent_OnMoveEnd__);
    sub_1C93AD4(&StringLiteral_5457/*"END_ACTION"*/);
    byte_4D2B43B = 1;
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
              0);
            v5 = this->fields.operationItemListViewManager;
            v6 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
            System_Action___ctor(v6, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0);
            if ( v5 )
            {
              FriendOperationItemListViewManager__SetMode_33272528(v5, 1, v6, 0);
              return;
            }
          }
        }
      }
    }
LABEL_12:
    sub_1C93D2C(operationItemListViewManager, method);
  }
  operationItemListViewManager = (UnityEngine_Component_o *)this->fields.myFSM;
  if ( !operationItemListViewManager )
    goto LABEL_12;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)operationItemListViewManager, (System_String_o *)StringLiteral_5457/*"END_ACTION"*/, 0);
}


void FriendRootComponent__SelectShowOffer(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *operationItemListViewManager; // x0
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  FriendOperationItemListViewManager_o *v6; // x20
  System_Action_o *v7; // x21

  if ( (byte_4D2B43D & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_FriendRootComponent_OnMoveEnd__);
    byte_4D2B43D = 1;
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
            0),
          v6 = this->fields.operationItemListViewManager,
          v7 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo),
          System_Action___ctor(v7, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0),
          !v6) )
    {
LABEL_11:
      sub_1C93D2C(operationItemListViewManager, v3);
    }
    FriendOperationItemListViewManager__SetMode_33272528(v6, 1, v7, 0);
  }
}


void FriendRootComponent__SelectShowOffered(FriendRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *operationItemListViewManager; // x0
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  FriendOperationItemListViewManager_o *v5; // x20
  System_Action_o *v6; // x21

  if ( (byte_4D2B43F & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_FriendRootComponent_OnMoveEnd__);
    sub_1C93AD4(&StringLiteral_5457/*"END_ACTION"*/);
    byte_4D2B43F = 1;
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
              0);
            v5 = this->fields.operationItemListViewManager;
            v6 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
            System_Action___ctor(v6, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0);
            if ( v5 )
            {
              FriendOperationItemListViewManager__SetMode_33272528(v5, 1, v6, 0);
              return;
            }
          }
        }
      }
    }
LABEL_12:
    sub_1C93D2C(operationItemListViewManager, method);
  }
  operationItemListViewManager = (UnityEngine_Component_o *)this->fields.myFSM;
  if ( !operationItemListViewManager )
    goto LABEL_12;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)operationItemListViewManager, (System_String_o *)StringLiteral_5457/*"END_ACTION"*/, 0);
}


void FriendRootComponent__SelectShowSearch(FriendRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *operationItemListViewManager; // x0
  FriendSearchMenu_o *friendSearchMenu; // x20
  System_Action_o *v5; // x21
  const MethodInfo *v6; // x2
  FriendOperationItemListViewManager_o *v7; // x20
  System_Action_o *v8; // x21

  if ( (byte_4D2B441 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_FriendRootComponent_OnMoveEnd__);
    byte_4D2B441 = 1;
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
    operationItemListViewManager = (UnityEngine_Component_o *)this->fields.operationItemListViewManager;
    if ( !operationItemListViewManager )
      goto LABEL_11;
    FriendOperationItemListViewManager__CreateListFriendCode(
      (FriendOperationItemListViewManager_o *)operationItemListViewManager,
      this->fields.selectFriendCode,
      0);
    this->fields.state = 17;
    friendSearchMenu = this->fields.friendSearchMenu;
    v5 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0);
    if ( !friendSearchMenu
      || (FriendSearchMenu__Close_33297444(friendSearchMenu, v5, v6),
          v7 = this->fields.operationItemListViewManager,
          v8 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo),
          System_Action___ctor(v8, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0),
          !v7) )
    {
LABEL_11:
      sub_1C93D2C(operationItemListViewManager, method);
    }
    FriendOperationItemListViewManager__SetMode_33272528(v7, 1, v8, 0);
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
  __int64 v9; // x1
  int32_t v10; // w1

  if ( (byte_4D2B447 & 1) == 0 )
  {
    sub_1C93AD4(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C93AD4(&Method_FriendRootComponent_EndShowServant__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2B447 = 1;
  }
  state = this->fields.state;
  if ( state <= 0x13 && ((1 << state) & 0x84210) != 0 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v7 = (ServantStatusDialog_EndDelegate_o *)sub_1C93D20(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(v7, (Il2CppObject *)this, Method_FriendRootComponent_EndShowServant__, 0);
    if ( !Instance )
      sub_1C93D2C(v8, v9);
    if ( state == 4 )
      v10 = 4;
    else
      v10 = 5;
    CommonUI__OpenServantStatusDialog_31592948((CommonUI_o *)Instance, v10, servantLeaderInfo, v7, 0);
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
  __int64 v10; // x1

  if ( (byte_4D2B471 & 1) == 0 )
  {
    sub_1C93AD4(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C93AD4(&Method_FriendRootComponent_EndShowServantEquip__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2B471 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (ServantStatusDialog_EndDelegate_o *)sub_1C93D20(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(v8, (Il2CppObject *)this, Method_FriendRootComponent_EndShowServantEquip__, 0);
  if ( !Instance )
    sub_1C93D2C(v9, v10);
  CommonUI__OpenServantEquipStatusDialog_31596056((CommonUI_o *)Instance, statusKind, equipInfo, v8, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void FriendRootComponent__SelectedFollowOfferConfirm(
        FriendRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0
  __int64 *v6; // x8

  if ( (byte_4D2B482 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_8694/*"MENU_DECIDE"*/);
    sub_1C93AD4(&StringLiteral_8693/*"MENU_CANCEL"*/);
    byte_4D2B482 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1C93D2C(0, isDecide);
  v6 = &StringLiteral_8694/*"MENU_DECIDE"*/;
  if ( !isDecide )
    v6 = &StringLiteral_8693/*"MENU_CANCEL"*/;
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)*v6, 0);
}


// local variable allocation has failed, the output may be wrong!
void FriendRootComponent__SelectedFollowRemoveConfirm(
        FriendRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0
  __int64 *v6; // x8

  if ( (byte_4D2B47C & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_8694/*"MENU_DECIDE"*/);
    sub_1C93AD4(&StringLiteral_8693/*"MENU_CANCEL"*/);
    byte_4D2B47C = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1C93D2C(0, isDecide);
  v6 = &StringLiteral_8694/*"MENU_DECIDE"*/;
  if ( !isDecide )
    v6 = &StringLiteral_8693/*"MENU_CANCEL"*/;
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)*v6, 0);
}


// local variable allocation has failed, the output may be wrong!
void FriendRootComponent__SelectedFriendAcceptConfirm(
        FriendRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0
  __int64 *v6; // x8

  if ( (byte_4D2B478 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_8694/*"MENU_DECIDE"*/);
    sub_1C93AD4(&StringLiteral_8693/*"MENU_CANCEL"*/);
    byte_4D2B478 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1C93D2C(0, isDecide);
  v6 = &StringLiteral_8694/*"MENU_DECIDE"*/;
  if ( !isDecide )
    v6 = &StringLiteral_8693/*"MENU_CANCEL"*/;
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)*v6, 0);
}


// local variable allocation has failed, the output may be wrong!
void FriendRootComponent__SelectedFriendCancelConfirm(
        FriendRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0
  __int64 *v6; // x8

  if ( (byte_4D2B47A & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_8694/*"MENU_DECIDE"*/);
    sub_1C93AD4(&StringLiteral_8693/*"MENU_CANCEL"*/);
    byte_4D2B47A = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1C93D2C(0, isDecide);
  v6 = &StringLiteral_8694/*"MENU_DECIDE"*/;
  if ( !isDecide )
    v6 = &StringLiteral_8693/*"MENU_CANCEL"*/;
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)*v6, 0);
}


// local variable allocation has failed, the output may be wrong!
void FriendRootComponent__SelectedFriendOfferConfirm(
        FriendRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0
  __int64 *v6; // x8

  if ( (byte_4D2B477 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_8694/*"MENU_DECIDE"*/);
    sub_1C93AD4(&StringLiteral_8693/*"MENU_CANCEL"*/);
    byte_4D2B477 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1C93D2C(0, isDecide);
  v6 = &StringLiteral_8694/*"MENU_DECIDE"*/;
  if ( !isDecide )
    v6 = &StringLiteral_8693/*"MENU_CANCEL"*/;
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)*v6, 0);
}


// local variable allocation has failed, the output may be wrong!
void FriendRootComponent__SelectedFriendRejectConfirm(
        FriendRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0
  __int64 *v6; // x8

  if ( (byte_4D2B479 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_8694/*"MENU_DECIDE"*/);
    sub_1C93AD4(&StringLiteral_8693/*"MENU_CANCEL"*/);
    byte_4D2B479 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1C93D2C(0, isDecide);
  v6 = &StringLiteral_8694/*"MENU_DECIDE"*/;
  if ( !isDecide )
    v6 = &StringLiteral_8693/*"MENU_CANCEL"*/;
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)*v6, 0);
}


// local variable allocation has failed, the output may be wrong!
void FriendRootComponent__SelectedFriendRemoveConfirm(
        FriendRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0
  __int64 *v6; // x8

  if ( (byte_4D2B47B & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_8694/*"MENU_DECIDE"*/);
    sub_1C93AD4(&StringLiteral_8693/*"MENU_CANCEL"*/);
    byte_4D2B47B = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1C93D2C(0, isDecide);
  v6 = &StringLiteral_8694/*"MENU_DECIDE"*/;
  if ( !isDecide )
    v6 = &StringLiteral_8693/*"MENU_CANCEL"*/;
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)*v6, 0);
}


// local variable allocation has failed, the output may be wrong!
void FriendRootComponent__SetActiveModeKindButtons(
        FriendRootComponent_o *this,
        bool isActive,
        const MethodInfo *method)
{
  bool v3; // w20
  __int64 v5; // x1
  UnityEngine_GameObject_o *modeButtonParent; // x0
  float v7; // s8
  float v8; // s9
  float v9; // s10
  UnityEngine_GameObject_o *gameObject; // x0
  float x; // s0
  float y; // s1
  float z; // s2
  UnityEngine_Vector3_o DisplayPositionModeKindButtons; // 0:kr00_12.12
  UnityEngine_Vector3_o HidePositionModeKindButtons; // 0:kr14_12.12
  UnityEngine_Vector3_o v16; // 0:s1.4,4:s2.4,8:s3.4

  v3 = isActive;
  if ( this->fields.isActiveModeKindButtons != isActive )
  {
    if ( isActive )
    {
      DisplayPositionModeKindButtons = FriendRootComponent__GetDisplayPositionModeKindButtons(
                                         this,
                                         (const MethodInfo *)isActive);
      x = DisplayPositionModeKindButtons.fields.x;
      y = DisplayPositionModeKindButtons.fields.y;
      z = DisplayPositionModeKindButtons.fields.z;
    }
    else
    {
      HidePositionModeKindButtons = FriendRootComponent__GetHidePositionModeKindButtons(
                                      this,
                                      (const MethodInfo *)isActive);
      x = HidePositionModeKindButtons.fields.x;
      y = HidePositionModeKindButtons.fields.y;
      z = HidePositionModeKindButtons.fields.z;
    }
    modeButtonParent = this->fields.modeButtonParent;
    v7 = x;
    v8 = y;
    v9 = z;
    if ( !modeButtonParent
      || (gameObject = UnityEngine_GameObject__get_gameObject(modeButtonParent, 0),
          v16.fields.x = v7,
          v16.fields.y = v8,
          v16.fields.z = v9,
          (modeButtonParent = (UnityEngine_GameObject_o *)TweenPosition__Begin(gameObject, 0.2, v16, 0)) == 0) )
    {
      sub_1C93D2C(modeButtonParent, v5);
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
  const MethodInfo *v5; // x2
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  int32_t currentCursor; // w22
  FriendSearchResultMenu_o *v8; // x20
  OtherUserGameEntity_o *selectFriendEntity; // x21
  FriendSearchResultMenu_CallbackFunc_o *v10; // x23
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x4
  FriendSearchMenu_o *friendSearchMenu; // x20
  FriendSearchMenu_CallbackFunc_o *v14; // x21
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x3

  v2 = this;
  if ( (byte_4D2B445 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&FriendSearchResultMenu_CallbackFunc_TypeInfo);
    sub_1C93AD4(&FriendSearchMenu_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_FriendRootComponent_OnSelectOffer__);
    sub_1C93AD4(&Method_FriendRootComponent_OnSelectSearchFriend__);
    sub_1C93AD4(&Method_FriendRootComponent_ShowSearchResult__);
    this = (FriendRootComponent_o *)sub_1C93AD4(&StringLiteral_5457/*"END_ACTION"*/);
    byte_4D2B445 = 1;
  }
  if ( v2->fields.state == 23 )
  {
    friendSearchResultMenu = v2->fields.friendSearchResultMenu;
    if ( !friendSearchResultMenu )
      goto LABEL_14;
    if ( friendSearchResultMenu->fields.isOpen )
    {
      v4 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
      System_Action___ctor(v4, (Il2CppObject *)v2, Method_FriendRootComponent_ShowSearchResult__, 0);
      FriendSearchResultMenu__Close_33299584(friendSearchResultMenu, v4, v5);
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
    v8 = v2->fields.friendSearchResultMenu;
    selectFriendEntity = v2->fields.selectFriendEntity;
    v10 = (FriendSearchResultMenu_CallbackFunc_o *)sub_1C93D20(FriendSearchResultMenu_CallbackFunc_TypeInfo);
    FriendSearchResultMenu_CallbackFunc___ctor(v10, (Il2CppObject *)v2, Method_FriendRootComponent_OnSelectOffer__, v11);
    if ( !v8
      || (FriendSearchResultMenu__Open(v8, selectFriendEntity, currentCursor, v10, v12),
          friendSearchMenu = v2->fields.friendSearchMenu,
          v14 = (FriendSearchMenu_CallbackFunc_o *)sub_1C93D20(FriendSearchMenu_CallbackFunc_TypeInfo),
          FriendSearchMenu_CallbackFunc___ctor(
            v14,
            (Il2CppObject *)v2,
            Method_FriendRootComponent_OnSelectSearchFriend__,
            v15),
          !friendSearchMenu)
      || (FriendSearchMenu__Open(friendSearchMenu, v14, 0, v16), (this = (FriendRootComponent_o *)v2->fields.myFSM) == 0) )
    {
LABEL_14:
      sub_1C93D2C(this, method);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_5457/*"END_ACTION"*/, 0);
    EventTutorialMaster__CheckTutorial(-1, 50, 0, 0, 0, 0, 0, 0);
  }
}


void FriendRootComponent__StartSearchInput(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  FriendRootComponent_o *v3; // x19
  FriendSearchResultMenu_o *friendSearchResultMenu; // x20
  OtherUserGameEntity_o *selectFriendEntity; // x21
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  int32_t currentCursor; // w22
  FriendSearchResultMenu_CallbackFunc_o *v8; // x23
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x4
  FriendSearchMenu_o *friendSearchMenu; // x20
  FriendSearchMenu_CallbackFunc_o *v12; // x21
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x3

  v3 = this;
  if ( (byte_4D2B446 & 1) == 0 )
  {
    sub_1C93AD4(&FriendSearchResultMenu_CallbackFunc_TypeInfo);
    sub_1C93AD4(&FriendSearchMenu_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_FriendRootComponent_OnSelectOffer__);
    this = (FriendRootComponent_o *)sub_1C93AD4(&Method_FriendRootComponent_OnSelectSearchFriend__);
    byte_4D2B446 = 1;
  }
  friendSearchResultMenu = v3->fields.friendSearchResultMenu;
  if ( !friendSearchResultMenu )
    goto LABEL_11;
  if ( friendSearchResultMenu->fields.isOpen )
  {
    selectFriendEntity = v3->fields.selectFriendEntity;
    if ( selectFriendEntity )
    {
      classButtonControl = v3->fields.classButtonControl;
      if ( !classButtonControl )
        goto LABEL_11;
      currentCursor = classButtonControl->fields.currentCursor;
      v8 = (FriendSearchResultMenu_CallbackFunc_o *)sub_1C93D20(FriendSearchResultMenu_CallbackFunc_TypeInfo);
      FriendSearchResultMenu_CallbackFunc___ctor(v8, (Il2CppObject *)v3, Method_FriendRootComponent_OnSelectOffer__, v9);
      FriendSearchResultMenu__Open(friendSearchResultMenu, selectFriendEntity, currentCursor, v8, v10);
    }
    else
    {
      FriendSearchResultMenu__Close_33299584(v3->fields.friendSearchResultMenu, 0, v2);
    }
  }
  friendSearchMenu = v3->fields.friendSearchMenu;
  v12 = (FriendSearchMenu_CallbackFunc_o *)sub_1C93D20(FriendSearchMenu_CallbackFunc_TypeInfo);
  FriendSearchMenu_CallbackFunc___ctor(v12, (Il2CppObject *)v3, Method_FriendRootComponent_OnSelectSearchFriend__, v13);
  if ( !friendSearchMenu )
LABEL_11:
    sub_1C93D2C(this, method);
  FriendSearchMenu__Open(friendSearchMenu, v12, 0, v14);
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
  if ( (byte_4D2B492 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_string__TypeInfo);
    sub_1C93AD4(&Method_FriendRootComponent__OnClickBack_b__100_1__);
    this = (FriendRootComponent_o *)sub_1C93AD4(&StringLiteral_22655/*"ok"*/);
    byte_4D2B492 = 1;
  }
  if ( !result )
    sub_1C93D2C(this, result);
  if ( System_String__Equals_64461044(result, (System_String_o *)StringLiteral_22655/*"ok"*/, 0) )
  {
    v5 = (System_Action_object__o *)sub_1C93D20(System_Action_string__TypeInfo);
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
  if ( (byte_4D2B493 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_22655/*"ok"*/);
    this = (FriendRootComponent_o *)sub_1C93AD4(&StringLiteral_3457/*"CLICK_BACK"*/);
    byte_4D2B493 = 1;
  }
  if ( !res )
    goto LABEL_9;
  if ( System_String__Equals_64461044(res, (System_String_o *)StringLiteral_22655/*"ok"*/, 0) )
  {
    this = (FriendRootComponent_o *)v4->fields.friendSearchMenu;
    if ( this )
    {
      FriendSearchMenu__BlockInput((FriendSearchMenu_o *)this, (const MethodInfo *)res);
      this = (FriendRootComponent_o *)v4->fields.myFSM;
      if ( this )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3457/*"CLICK_BACK"*/, 0);
        return;
      }
    }
LABEL_9:
    sub_1C93D2C(this, res);
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
  if ( (byte_4D2B496 & 1) == 0 )
  {
    sub_1C93AD4(&Method_FriendRootComponent__OnClickModeUserDetail_b__102_0__);
    this = (FriendRootComponent_o *)sub_1C93AD4(&StringLiteral_22655/*"ok"*/);
    byte_4D2B496 = 1;
  }
  if ( !res )
    sub_1C93D2C(this, res);
  if ( System_String__Equals_64461044(res, (System_String_o *)StringLiteral_22655/*"ok"*/, 0) )
  {
    v5 = Method_FriendRootComponent__OnClickModeUserDetail_b__102_0__;
    if ( (*((_BYTE *)Method_FriendRootComponent__OnClickModeUserDetail_b__102_0__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C93AEC(Method_FriendRootComponent__OnClickModeUserDetail_b__102_0__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v5, v5[4]);
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
  struct FriendSearchResultMenu_o *friendSearchResultMenu; // x8
  struct FriendSearchResultMenu_o *v7; // x8
  struct ClassButtonControlComponent_o *v8; // x8
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  FriendRootComponent_o *v11; // x0
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x1
  struct ClassButtonControlComponent_o *classButtonControl; // x8

  v4 = this;
  if ( (byte_4D2B497 & 1) == 0 )
  {
    sub_1C93AD4(&Method_FriendRootComponent__OnClickTabFriend_b__109_0__);
    sub_1C93AD4(&StringLiteral_22655/*"ok"*/);
    this = (FriendRootComponent_o *)sub_1C93AD4(&StringLiteral_3511/*"CLICK_TAB"*/);
    byte_4D2B497 = 1;
  }
  if ( !res )
    goto LABEL_24;
  this = (FriendRootComponent_o *)System_String__Equals_64461044(res, (System_String_o *)StringLiteral_22655/*"ok"*/, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
    return;
  state = v4->fields.state;
  if ( state <= 9 )
  {
    if ( state != 4 && state != 9 )
      return;
LABEL_18:
    v9 = Method_FriendRootComponent__OnClickTabFriend_b__109_0__;
    if ( (*((_BYTE *)Method_FriendRootComponent__OnClickTabFriend_b__109_0__ + 83) & 2) != 0 )
      v9 = (_QWORD *)sub_1C93AEC(Method_FriendRootComponent__OnClickTabFriend_b__109_0__);
    v10 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v9, v9[4]);
    OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0, 0);
    FriendRootComponent__set_tabKind(v11, 0, v12);
    FriendRootComponent__RefreshTab(v4, v13);
    classButtonControl = v4->fields.classButtonControl;
    if ( classButtonControl )
    {
      classButtonControl->fields.updateEnable = 0;
      this = (FriendRootComponent_o *)v4->fields.myFSM;
      if ( this )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3511/*"CLICK_TAB"*/, 0);
        return;
      }
    }
LABEL_24:
    sub_1C93D2C(this, res);
  }
  if ( state == 14 || state == 19 )
    goto LABEL_18;
  if ( state == 23 )
  {
    friendSearchResultMenu = v4->fields.friendSearchResultMenu;
    if ( !friendSearchResultMenu )
      goto LABEL_24;
    this = (FriendRootComponent_o *)friendSearchResultMenu->fields.classButtonControl;
    if ( !this )
      goto LABEL_24;
    this = (FriendRootComponent_o *)ClassButtonControlComponent__getChangeCursorPos(
                                      (ClassButtonControlComponent_o *)this,
                                      0);
    if ( (_DWORD)this != -1 )
    {
      v7 = v4->fields.friendSearchResultMenu;
      if ( !v7 )
        goto LABEL_24;
      v8 = v7->fields.classButtonControl;
      if ( !v8 )
        goto LABEL_24;
      this = (FriendRootComponent_o *)v4->fields.classButtonControl;
      if ( !this )
        goto LABEL_24;
      ClassButtonControlComponent__setCursor((ClassButtonControlComponent_o *)this, v8->fields.currentCursor, 0);
    }
    goto LABEL_18;
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
  if ( (byte_4D2B498 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_string__TypeInfo);
    sub_1C93AD4(&Method_FriendRootComponent__OnClickTabOffered_b__110_1__);
    this = (FriendRootComponent_o *)sub_1C93AD4(&StringLiteral_22655/*"ok"*/);
    byte_4D2B498 = 1;
  }
  if ( !result )
    sub_1C93D2C(this, result);
  if ( System_String__Equals_64461044(result, (System_String_o *)StringLiteral_22655/*"ok"*/, 0) )
  {
    v5 = (System_Action_object__o *)sub_1C93D20(System_Action_string__TypeInfo);
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
  struct FriendSearchResultMenu_o *friendSearchResultMenu; // x8
  struct FriendSearchResultMenu_o *v7; // x8
  struct ClassButtonControlComponent_o *v8; // x8
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  FriendRootComponent_o *v11; // x0
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x1
  struct ClassButtonControlComponent_o *classButtonControl; // x8

  v4 = this;
  if ( (byte_4D2B499 & 1) == 0 )
  {
    sub_1C93AD4(&Method_FriendRootComponent__OnClickTabOffered_b__110_1__);
    sub_1C93AD4(&StringLiteral_22655/*"ok"*/);
    this = (FriendRootComponent_o *)sub_1C93AD4(&StringLiteral_3511/*"CLICK_TAB"*/);
    byte_4D2B499 = 1;
  }
  if ( !res )
    goto LABEL_24;
  this = (FriendRootComponent_o *)System_String__Equals_64461044(res, (System_String_o *)StringLiteral_22655/*"ok"*/, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
    return;
  state = v4->fields.state;
  if ( state <= 9 )
  {
    if ( state != 4 && state != 9 )
      return;
LABEL_18:
    v9 = Method_FriendRootComponent__OnClickTabOffered_b__110_1__;
    if ( (*((_BYTE *)Method_FriendRootComponent__OnClickTabOffered_b__110_1__ + 83) & 2) != 0 )
      v9 = (_QWORD *)sub_1C93AEC(Method_FriendRootComponent__OnClickTabOffered_b__110_1__);
    v10 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v9, v9[4]);
    OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0, 0);
    FriendRootComponent__set_tabKind(v11, 1, v12);
    FriendRootComponent__RefreshTab(v4, v13);
    classButtonControl = v4->fields.classButtonControl;
    if ( classButtonControl )
    {
      classButtonControl->fields.updateEnable = 0;
      this = (FriendRootComponent_o *)v4->fields.myFSM;
      if ( this )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3511/*"CLICK_TAB"*/, 0);
        return;
      }
    }
LABEL_24:
    sub_1C93D2C(this, res);
  }
  if ( state == 14 || state == 19 )
    goto LABEL_18;
  if ( state == 23 )
  {
    friendSearchResultMenu = v4->fields.friendSearchResultMenu;
    if ( !friendSearchResultMenu )
      goto LABEL_24;
    this = (FriendRootComponent_o *)friendSearchResultMenu->fields.classButtonControl;
    if ( !this )
      goto LABEL_24;
    this = (FriendRootComponent_o *)ClassButtonControlComponent__getChangeCursorPos(
                                      (ClassButtonControlComponent_o *)this,
                                      0);
    if ( (_DWORD)this != -1 )
    {
      v7 = v4->fields.friendSearchResultMenu;
      if ( !v7 )
        goto LABEL_24;
      v8 = v7->fields.classButtonControl;
      if ( !v8 )
        goto LABEL_24;
      this = (FriendRootComponent_o *)v4->fields.classButtonControl;
      if ( !this )
        goto LABEL_24;
      ClassButtonControlComponent__setCursor((ClassButtonControlComponent_o *)this, v8->fields.currentCursor, 0);
    }
    goto LABEL_18;
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
  if ( (byte_4D2B49A & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_string__TypeInfo);
    sub_1C93AD4(&Method_FriendRootComponent__OnClickTabSearch_b__111_1__);
    this = (FriendRootComponent_o *)sub_1C93AD4(&StringLiteral_22655/*"ok"*/);
    byte_4D2B49A = 1;
  }
  if ( !result )
    sub_1C93D2C(this, result);
  if ( System_String__Equals_64461044(result, (System_String_o *)StringLiteral_22655/*"ok"*/, 0) )
  {
    v5 = (System_Action_object__o *)sub_1C93D20(System_Action_string__TypeInfo);
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
  if ( (byte_4D2B49B & 1) == 0 )
  {
    sub_1C93AD4(&Method_FriendRootComponent__OnClickTabSearch_b__111_1__);
    sub_1C93AD4(&StringLiteral_22655/*"ok"*/);
    this = (FriendRootComponent_o *)sub_1C93AD4(&StringLiteral_3511/*"CLICK_TAB"*/);
    byte_4D2B49B = 1;
  }
  if ( !res )
    goto LABEL_17;
  if ( !System_String__Equals_64461044(res, (System_String_o *)StringLiteral_22655/*"ok"*/, 0) )
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
      v6 = (_QWORD *)sub_1C93AEC(Method_FriendRootComponent__OnClickTabSearch_b__111_1__);
    v7 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v6, v6[4]);
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
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3511/*"CLICK_TAB"*/, 0);
        return;
      }
    }
LABEL_17:
    sub_1C93D2C(this, res);
  }
}


void FriendRootComponent___RequestFollowRemove_b__143_0(
        FriendRootComponent_o *this,
        System_String_o *res,
        const MethodInfo *method)
{
  FriendRootComponent_o *v4; // x19
  FriendOperationItemListViewItem_o *Item; // x0
  struct OtherUserGameEntity_o *otherUserGameEntity; // x21
  NetworkManager_ResultCallbackFunc_o *v7; // x20

  v4 = this;
  if ( (byte_4D2B49C & 1) == 0 )
  {
    sub_1C93AD4(&Method_FriendRootComponent_EndRequestFollowRemove__);
    sub_1C93AD4(&Method_NetworkManager_getRequest_FollowdRemoveRequest___);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&StringLiteral_22655/*"ok"*/);
    this = (FriendRootComponent_o *)sub_1C93AD4(&StringLiteral_11161/*"REQUEST_NG"*/);
    byte_4D2B49C = 1;
  }
  if ( !res )
    goto LABEL_15;
  if ( System_String__Equals_64461044(res, (System_String_o *)StringLiteral_22655/*"ok"*/, 0) )
  {
    this = (FriendRootComponent_o *)v4->fields.operationItemListViewManager;
    if ( !this )
      goto LABEL_15;
    Item = FriendOperationItemListViewManager__GetItem(
             (FriendOperationItemListViewManager_o *)this,
             v4->fields.selectItemNum,
             0);
    if ( Item )
    {
      otherUserGameEntity = Item->fields.otherUserGameEntity;
      if ( otherUserGameEntity )
      {
        this = (FriendRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( this )
        {
          CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)this, 0, 0);
          v7 = (NetworkManager_ResultCallbackFunc_o *)sub_1C93D20(NetworkManager_ResultCallbackFunc_TypeInfo);
          NetworkManager_ResultCallbackFunc___ctor(
            v7,
            (Il2CppObject *)v4,
            Method_FriendRootComponent_EndRequestFollowRemove__,
            0);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          this = (FriendRootComponent_o *)NetworkManager__getRequest_object_(
                                            v7,
                                            (const MethodInfo_322FB9C *)Method_NetworkManager_getRequest_FollowdRemoveRequest___);
          if ( this )
          {
            FollowdRemoveRequest__beginRequest((FollowdRemoveRequest_o *)this, otherUserGameEntity->fields.userId, 0);
            return;
          }
        }
LABEL_15:
        sub_1C93D2C(this, res);
      }
    }
  }
  this = (FriendRootComponent_o *)v4->fields.myFSM;
  if ( !this )
    goto LABEL_15;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11161/*"REQUEST_NG"*/, 0);
}


void FriendRootComponent___RequestFriendOffer2_b__88_0(
        FriendRootComponent_o *this,
        System_String_o *res,
        const MethodInfo *method)
{
  FriendRootComponent_o *v4; // x19
  FriendOperationItemListViewItem_o *Item; // x0
  struct OtherUserGameEntity_o *otherUserGameEntity; // x21
  NetworkManager_ResultCallbackFunc_o *v7; // x20

  v4 = this;
  if ( (byte_4D2B490 & 1) == 0 )
  {
    sub_1C93AD4(&Method_FriendRootComponent_EndRequestFriend__);
    sub_1C93AD4(&Method_NetworkManager_getRequest_FriendOfferRequest___);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C93AD4(&StringLiteral_22655/*"ok"*/);
    this = (FriendRootComponent_o *)sub_1C93AD4(&StringLiteral_11161/*"REQUEST_NG"*/);
    byte_4D2B490 = 1;
  }
  if ( !res )
    goto LABEL_14;
  if ( System_String__Equals_64461044(res, (System_String_o *)StringLiteral_22655/*"ok"*/, 0) )
  {
    this = (FriendRootComponent_o *)v4->fields.operationItemListViewManager;
    if ( !this )
      goto LABEL_14;
    Item = FriendOperationItemListViewManager__GetItem(
             (FriendOperationItemListViewManager_o *)this,
             v4->fields.selectItemNum,
             0);
    if ( Item )
    {
      otherUserGameEntity = Item->fields.otherUserGameEntity;
      if ( otherUserGameEntity )
      {
        v7 = (NetworkManager_ResultCallbackFunc_o *)sub_1C93D20(NetworkManager_ResultCallbackFunc_TypeInfo);
        NetworkManager_ResultCallbackFunc___ctor(
          v7,
          (Il2CppObject *)v4,
          Method_FriendRootComponent_EndRequestFriend__,
          0);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        this = (FriendRootComponent_o *)NetworkManager__getRequest_object_(
                                          v7,
                                          (const MethodInfo_322FB9C *)Method_NetworkManager_getRequest_FriendOfferRequest___);
        if ( this )
        {
          FriendOfferRequest__beginRequest((FriendOfferRequest_o *)this, otherUserGameEntity->fields.userId, 0);
          return;
        }
LABEL_14:
        sub_1C93D2C(this, res);
      }
    }
  }
  this = (FriendRootComponent_o *)v4->fields.myFSM;
  if ( !this )
    goto LABEL_14;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11161/*"REQUEST_NG"*/, 0);
}


void FriendRootComponent___RequestFriendRemove_b__92_0(
        FriendRootComponent_o *this,
        System_String_o *res,
        const MethodInfo *method)
{
  FriendRootComponent_o *v4; // x19
  FriendOperationItemListViewItem_o *Item; // x0
  struct OtherUserGameEntity_o *otherUserGameEntity; // x21
  NetworkManager_ResultCallbackFunc_o *v7; // x20

  v4 = this;
  if ( (byte_4D2B491 & 1) == 0 )
  {
    sub_1C93AD4(&Method_FriendRootComponent_EndRequestFriend__);
    sub_1C93AD4(&Method_NetworkManager_getRequest_FriendRemoveRequest___);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&StringLiteral_22655/*"ok"*/);
    this = (FriendRootComponent_o *)sub_1C93AD4(&StringLiteral_11161/*"REQUEST_NG"*/);
    byte_4D2B491 = 1;
  }
  if ( !res )
    goto LABEL_15;
  if ( System_String__Equals_64461044(res, (System_String_o *)StringLiteral_22655/*"ok"*/, 0) )
  {
    this = (FriendRootComponent_o *)v4->fields.operationItemListViewManager;
    if ( !this )
      goto LABEL_15;
    Item = FriendOperationItemListViewManager__GetItem(
             (FriendOperationItemListViewManager_o *)this,
             v4->fields.selectItemNum,
             0);
    if ( Item )
    {
      otherUserGameEntity = Item->fields.otherUserGameEntity;
      if ( otherUserGameEntity )
      {
        this = (FriendRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( this )
        {
          CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)this, 0, 0);
          v7 = (NetworkManager_ResultCallbackFunc_o *)sub_1C93D20(NetworkManager_ResultCallbackFunc_TypeInfo);
          NetworkManager_ResultCallbackFunc___ctor(
            v7,
            (Il2CppObject *)v4,
            Method_FriendRootComponent_EndRequestFriend__,
            0);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          this = (FriendRootComponent_o *)NetworkManager__getRequest_object_(
                                            v7,
                                            (const MethodInfo_322FB9C *)Method_NetworkManager_getRequest_FriendRemoveRequest___);
          if ( this )
          {
            FriendRemoveRequest__beginRequest((FriendRemoveRequest_o *)this, otherUserGameEntity->fields.userId, 0);
            return;
          }
        }
LABEL_15:
        sub_1C93D2C(this, res);
      }
    }
  }
  this = (FriendRootComponent_o *)v4->fields.myFSM;
  if ( !this )
    goto LABEL_15;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11161/*"REQUEST_NG"*/, 0);
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
  if ( (byte_4D2B494 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_string__TypeInfo);
    sub_1C93AD4(&Method_FriendRootComponent__afterMainMenubarSelect_b__101_1__);
    sub_1C93AD4(&StringLiteral_22655/*"ok"*/);
    this = (FriendRootComponent_o *)sub_1C93AD4(&StringLiteral_11161/*"REQUEST_NG"*/);
    byte_4D2B494 = 1;
  }
  if ( !result )
    goto LABEL_8;
  if ( System_String__Equals_64461044(result, (System_String_o *)StringLiteral_22655/*"ok"*/, 0) )
  {
    v5 = (System_Action_object__o *)sub_1C93D20(System_Action_string__TypeInfo);
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
    sub_1C93D2C(this, result);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11161/*"REQUEST_NG"*/, 0);
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
  if ( (byte_4D2B495 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_11163/*"REQUEST_OK"*/);
    sub_1C93AD4(&StringLiteral_22655/*"ok"*/);
    this = (FriendRootComponent_o *)sub_1C93AD4(&StringLiteral_11161/*"REQUEST_NG"*/);
    byte_4D2B495 = 1;
  }
  if ( !res
    || (this = (FriendRootComponent_o *)System_String__Equals_64461044(res, (System_String_o *)StringLiteral_22655/*"ok"*/, 0),
        (myFSM = v4->fields.myFSM) == 0) )
  {
    sub_1C93D2C(this, res);
  }
  v6 = &StringLiteral_11163/*"REQUEST_OK"*/;
  if ( ((unsigned __int8)this & 1) == 0 )
    v6 = &StringLiteral_11161/*"REQUEST_NG"*/;
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)*v6, 0);
}


void FriendRootComponent__afterMainMenubarSelect(FriendRootComponent_o *this, const MethodInfo *method)
{
  FriendRootComponent_messageRequestCallback_o *v3; // x20
  const MethodInfo *v4; // x3
  const MethodInfo *v5; // x2

  if ( (byte_4D2B466 & 1) == 0 )
  {
    sub_1C93AD4(&Method_FriendRootComponent__afterMainMenubarSelect_b__101_0__);
    sub_1C93AD4(&FriendRootComponent_messageRequestCallback_TypeInfo);
    byte_4D2B466 = 1;
  }
  v3 = (FriendRootComponent_messageRequestCallback_o *)sub_1C93D20(FriendRootComponent_messageRequestCallback_TypeInfo);
  FriendRootComponent_messageRequestCallback___ctor(
    v3,
    (Il2CppObject *)this,
    Method_FriendRootComponent__afterMainMenubarSelect_b__101_0__,
    v4);
  FriendRootComponent__messageDispChangeRequest(this, v3, v5);
}


void FriendRootComponent__beginFinish(FriendRootComponent_o *this, const MethodInfo *method)
{
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0

  if ( (byte_4D2B436 & 1) == 0 )
  {
    sub_1C93AD4(&RandomLimitCountManager_TypeInfo);
    byte_4D2B436 = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    goto LABEL_13;
  operationItemListViewManager->fields._isMessageApply_k__BackingField = 0;
  FriendOperationItemListViewManager__DestroyList(operationItemListViewManager, 0);
  operationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.operationConfirmMenu;
  if ( !operationItemListViewManager )
    goto LABEL_13;
  FriendOperationConfirmMenu__Init((FriendOperationConfirmMenu_o *)operationItemListViewManager, 0);
  operationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.friendSearchMenu;
  if ( !operationItemListViewManager
    || (FriendSearchMenu__Init((FriendSearchMenu_o *)operationItemListViewManager, method),
        (operationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.friendSearchResultMenu) == 0)
    || (FriendSearchResultMenu__Init((FriendSearchResultMenu_o *)operationItemListViewManager, method),
        (operationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.friendWarningDialog) == 0)
    || (FriendWarningDialog__Init((FriendWarningDialog_o *)operationItemListViewManager, method),
        (operationItemListViewManager = this->fields.operationItemListViewManager) == 0)
    || (operationItemListViewManager = (FriendOperationItemListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                                 (UnityEngine_Component_o *)operationItemListViewManager,
                                                                                 0)) == 0 )
  {
LABEL_13:
    sub_1C93D2C(operationItemListViewManager, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)operationItemListViewManager, 0, 0);
  this->fields.state = 0;
  this->fields.selectFriendEntity = 0;
  sub_1C93A78(&this->fields.selectFriendEntity, 0);
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  RandomLimitCountManager__set_EnableRandomLimitCount(0, 0);
}


void FriendRootComponent__beginInitialize(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  __int64 v4; // x1
  UnityEngine_Component_o *bgTxtSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  ClassButtonControlComponent_o *classButtonControl; // x20
  ClassButtonControlComponent_CallbackFunc_o *v8; // x21
  System_Action_o *v9; // x20

  if ( (byte_4D2B430 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&AtlasManager_TypeInfo);
    sub_1C93AD4(&ClassButtonControlComponent_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_FriendRootComponent_EndLoadOutGameAtlas__);
    sub_1C93AD4(&Method_FriendRootComponent_changeClass__);
    byte_4D2B430 = 1;
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
        v8 = (ClassButtonControlComponent_CallbackFunc_o *)sub_1C93D20(ClassButtonControlComponent_CallbackFunc_TypeInfo),
        ClassButtonControlComponent_CallbackFunc___ctor(
          v8,
          (Il2CppObject *)this,
          (intptr_t)Method_FriendRootComponent_changeClass__,
          0),
        !classButtonControl)
    || (ClassButtonControlComponent__init(classButtonControl, v8, 0, 0, 0, 0, 0),
        (bgTxtSprite = (UnityEngine_Component_o *)this->fields.operationItemListViewManager) == 0) )
  {
LABEL_10:
    sub_1C93D2C(bgTxtSprite, v4);
  }
  FriendOperationItemListViewManager__SetupClassBoardInfo((FriendOperationItemListViewManager_o *)bgTxtSprite, 0);
  v9 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_FriendRootComponent_EndLoadOutGameAtlas__, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadOutGameAtlas(v9, 0);
}


void FriendRootComponent__beginResume(FriendRootComponent_o *this, Il2CppObject *data, const MethodInfo *method)
{
  __int64 naturalAligment; // x10
  FriendOperationItemListViewManager_o *Instance; // x0
  __int64 v7; // x1
  CommonUI_o *v8; // x20
  const MethodInfo *v9; // x1

  if ( (byte_4D2B437 & 1) == 0 )
  {
    sub_1C93AD4(&AvalonSceneManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&SupportInfoJump_TypeInfo);
    byte_4D2B437 = 1;
  }
  if ( data
    && (naturalAligment = SupportInfoJump_TypeInfo->_2.naturalAligment,
        data->klass->_2.naturalAligment >= (unsigned int)naturalAligment)
    && (SupportInfoJump_c *)data->klass->_2.typeHierarchy[naturalAligment - 1] == SupportInfoJump_TypeInfo )
  {
    this->fields.isReturnSupport = 1;
    Instance = (FriendOperationItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v8 = (CommonUI_o *)Instance;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    if ( !v8
      || (CommonUI__maskFadein(v8, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0),
          FriendRootComponent__RefreshTab(this, v9),
          (Instance = this->fields.operationItemListViewManager) == 0) )
    {
      sub_1C93D2C(Instance, v7);
    }
    FriendOperationItemListViewManager__SetMode_33271624(Instance, 2, 0);
    SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 7, 39, 0);
    MainMenuBar__setMenuActive(1, 0, 0);
    SceneRootComponent__sendMessageStartUp((SceneRootComponent_o *)this, 0);
  }
  else
  {
    SceneRootComponent__beginResume_42213848((SceneRootComponent_o *)this, 0);
    this->fields.isReturnSupport = 0;
  }
}


void FriendRootComponent__beginStartUp(FriendRootComponent_o *this, const MethodInfo *method)
{
  System_String_o *MainBgmName; // x20
  __int64 v4; // x1
  TitleInfoControl_o *titleInfo; // x0
  NetworkManager_ResultCallbackFunc_o *v6; // x20

  if ( (byte_4D2B432 & 1) == 0 )
  {
    sub_1C93AD4(&BgmManager_TypeInfo);
    sub_1C93AD4(&Method_FriendRootComponent_EndFriendRequest__);
    sub_1C93AD4(&Method_NetworkManager_getRequest_FriendTopRequest___);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&RandomLimitCountManager_TypeInfo);
    sub_1C93AD4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C93AD4(&SoundManager_TypeInfo);
    byte_4D2B432 = 1;
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
  TitleInfoControl__setTitleInfo(titleInfo, this->fields.myFSM, 1, 0, 43, 0);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_15;
  TitleInfoControl__setBackBtnSprite_40620696(titleInfo, 1, 0, 0, 0);
  this->fields.state = 0;
  this->fields.currentModeKind = 0;
  this->fields.selectFriendEntity = 0;
  sub_1C93A78(&this->fields.selectFriendEntity, 0);
  v6 = (NetworkManager_ResultCallbackFunc_o *)sub_1C93D20(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v6, (Il2CppObject *)this, Method_FriendRootComponent_EndFriendRequest__, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  titleInfo = (TitleInfoControl_o *)NetworkManager__getRequest_object_(
                                      v6,
                                      (const MethodInfo_322FB9C *)Method_NetworkManager_getRequest_FriendTopRequest___);
  if ( !titleInfo )
LABEL_15:
    sub_1C93D2C(titleInfo, v4);
  RequestBase__beginRequest((RequestBase_o *)titleInfo, 0);
}


void FriendRootComponent__beginStartUp_33290092(
        FriendRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  struct SceneJumpInfo_o **p_jumpInfo; // x20
  Il2CppClass *v6; // x8
  __int64 naturalAligment; // x9
  Il2CppObject *v8; // x1

  if ( (byte_4D2B433 & 1) == 0 )
  {
    sub_1C93AD4(&SceneJumpInfo_TypeInfo);
    byte_4D2B433 = 1;
  }
  p_jumpInfo = &this->fields.jumpInfo;
  this->fields.jumpInfo = 0;
  sub_1C93A78(&this->fields.jumpInfo, 0);
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
      sub_1C93A78(&this->fields.jumpInfo, v8);
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
  __int64 v7; // x1
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0

  if ( (byte_4D2B470 & 1) == 0 )
  {
    sub_1C93AD4(&Method_FriendRootComponent_changeClass__);
    byte_4D2B470 = 1;
  }
  v5 = Method_FriendRootComponent_changeClass__;
  if ( (*((_BYTE *)Method_FriendRootComponent_changeClass__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C93AEC(Method_FriendRootComponent_changeClass__);
  v6 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    sub_1C93D2C(0, v7);
  FriendOperationItemListViewManager__SetClassId(operationItemListViewManager, classPos, 0, 0);
}


int32_t FriendRootComponent__get_tabKind(FriendRootComponent_o *this, const MethodInfo *method)
{
  int32_t result; // w0
  FriendRootComponent_c *v4; // x0

  if ( (byte_4D2B42F & 1) == 0 )
  {
    sub_1C93AD4(&FriendRootComponent_TypeInfo);
    byte_4D2B42F = 1;
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
  Il2CppObject *v5; // x20
  ListViewManager_o *operationItemListViewManager; // x0
  int64_t items; // x1
  void **p_monitor; // x22
  int32_t ItemSum; // w23
  System_Collections_Generic_List_long__o *v10; // x21
  System_Collections_Generic_List_long__o *v11; // x22
  int32_t i; // w24
  struct System_Collections_Generic_List_UIDragDropListViewSurface__o *dropList; // x8
  struct System_Int64_array *v14; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x8
  struct System_Int64_array *v18; // x8
  _QWORD *v19; // x9
  __int64 v20; // x10
  __int64 v21; // x8
  System_Collections_Generic_List_long__o *v22; // x0
  NetworkManager_ResultCallbackFunc_o *v23; // x19
  FriendMessageHideSyncRequest_o *v24; // x19
  System_Int64_array *v25; // x20

  if ( (byte_4D2B46E & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C93AD4(&Method_NetworkManager_getRequest_FriendMessageHideSyncRequest___);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_FriendRootComponent___c__DisplayClass112_0__messageDispChangeRequest_b__0__);
    sub_1C93AD4(&FriendRootComponent___c__DisplayClass112_0_TypeInfo);
    sub_1C93AD4(&StringLiteral_22655/*"ok"*/);
    byte_4D2B46E = 1;
  }
  v5 = (Il2CppObject *)sub_1C93D20(FriendRootComponent___c__DisplayClass112_0_TypeInfo);
  System_Object___ctor(v5, 0);
  if ( !v5 )
    goto LABEL_35;
  v5[1].klass = (Il2CppClass *)this;
  sub_1C93A78(&v5[1], this);
  v5[1].monitor = callback;
  p_monitor = &v5[1].monitor;
  sub_1C93A78(&v5[1].monitor, callback);
  operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    goto LABEL_35;
  if ( LOBYTE(operationItemListViewManager[1].fields.emptyMessageLabel) )
  {
    ItemSum = ListViewManager__get_ItemSum(operationItemListViewManager, 0);
    v10 = (System_Collections_Generic_List_long__o *)sub_1C93D20(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v10,
      (const MethodInfo_386117C *)Method_System_Collections_Generic_List_long___ctor__);
    v11 = (System_Collections_Generic_List_long__o *)sub_1C93D20(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v11,
      (const MethodInfo_386117C *)Method_System_Collections_Generic_List_long___ctor__);
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
                                                              0);
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
            if ( !v10 )
              goto LABEL_35;
            v14 = v10->fields._items;
            v15 = Method_System_Collections_Generic_List_long__Add__;
            ++v10->fields._version;
            if ( !v14 )
              goto LABEL_35;
            size = v10->fields._size;
            if ( (unsigned int)size >= LODWORD(v14->max_length) )
            {
              v21 = v15[4];
              v22 = v10;
LABEL_24:
              System_Collections_Generic_List_long___AddWithResize(
                v22,
                items,
                *(const MethodInfo_38619D0 **)(*(_QWORD *)(v21 + 192) + 112LL));
              continue;
            }
            v17 = &v14->obj.klass + size;
            v10->fields._size = size + 1;
          }
          else
          {
            if ( !v11 )
              goto LABEL_35;
            v18 = v11->fields._items;
            v19 = Method_System_Collections_Generic_List_long__Add__;
            ++v11->fields._version;
            if ( !v18 )
              goto LABEL_35;
            v20 = v11->fields._size;
            if ( (unsigned int)v20 >= LODWORD(v18->max_length) )
            {
              v21 = v19[4];
              v22 = v11;
              goto LABEL_24;
            }
            v17 = &v18->obj.klass + v20;
            v11->fields._size = v20 + 1;
          }
          v17[4] = (Il2CppClass *)items;
        }
      }
    }
    v23 = (NetworkManager_ResultCallbackFunc_o *)sub_1C93D20(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v23,
      v5,
      Method_FriendRootComponent___c__DisplayClass112_0__messageDispChangeRequest_b__0__,
      0);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    operationItemListViewManager = (ListViewManager_o *)NetworkManager__getRequest_object_(
                                                          v23,
                                                          (const MethodInfo_322FB9C *)Method_NetworkManager_getRequest_FriendMessageHideSyncRequest___);
    if ( v11 )
    {
      v24 = (FriendMessageHideSyncRequest_o *)operationItemListViewManager;
      operationItemListViewManager = (ListViewManager_o *)System_Collections_Generic_List_long___ToArray(
                                                            v11,
                                                            (const MethodInfo_3863488 *)Method_System_Collections_Generic_List_long__ToArray__);
      if ( v10 )
      {
        v25 = (System_Int64_array *)operationItemListViewManager;
        operationItemListViewManager = (ListViewManager_o *)System_Collections_Generic_List_long___ToArray(
                                                              v10,
                                                              (const MethodInfo_3863488 *)Method_System_Collections_Generic_List_long__ToArray__);
        if ( v24 )
        {
          FriendMessageHideSyncRequest__beginRequest(v24, v25, (System_Int64_array *)operationItemListViewManager, 0);
          return;
        }
      }
    }
LABEL_35:
    sub_1C93D2C(operationItemListViewManager, items);
  }
  if ( *p_monitor )
    (*((void (__fastcall **)(_QWORD, __int64, _QWORD))*p_monitor + 3))(
      *((_QWORD *)*p_monitor + 8),
      StringLiteral_22655/*"ok"*/,
      *((_QWORD *)*p_monitor + 5));
}


void FriendRootComponent__set_tabKind(FriendRootComponent_o *this, int32_t value, const MethodInfo *method)
{
  FriendRootComponent_c *v4; // x0

  if ( (byte_4D2B42E & 1) == 0 )
  {
    sub_1C93AD4(&FriendRootComponent_TypeInfo);
    byte_4D2B42E = 1;
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
    sub_1C93D2C(this, result);
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
  __int64 v6; // x1
  int32_t v7; // w21
  struct FriendRootComponent_o *_4__this; // x8

  if ( (byte_4D2B49D & 1) == 0 )
  {
    sub_1C93AD4(&Method_ActionExtensions_Call_string___);
    sub_1C93AD4(&StringLiteral_22655/*"ok"*/);
    byte_4D2B49D = 1;
  }
  operationItemListViewManager = (FriendOperationItemListViewManager_o *)System_String__op_Equality(
                                                                           result,
                                                                           (System_String_o *)StringLiteral_22655/*"ok"*/,
                                                                           0);
  if ( ((unsigned __int8)operationItemListViewManager & 1) != 0 && this->fields.sum >= 1 )
  {
    v7 = 0;
    do
    {
      _4__this = this->fields.__4__this;
      if ( !_4__this || (operationItemListViewManager = _4__this->fields.operationItemListViewManager) == 0 )
        sub_1C93D2C(operationItemListViewManager, v6);
      operationItemListViewManager = (FriendOperationItemListViewManager_o *)FriendOperationItemListViewManager__GetItem(
                                                                               operationItemListViewManager,
                                                                               v7,
                                                                               0);
      if ( operationItemListViewManager )
        FriendOperationItemListViewItem__RefreshLockInfo(
          (FriendOperationItemListViewItem_o *)operationItemListViewManager,
          0);
      ++v7;
    }
    while ( v7 < this->fields.sum );
  }
  ActionExtensions__Call_object_(
    (System_Action_T__o *)this->fields.onFinishedRequest,
    (Il2CppObject *)result,
    (const MethodInfo_30EBC54 *)Method_ActionExtensions_Call_string___);
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
  sub_1C93A78(&this->fields.m_target, object);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C93B94(method) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = sub_1AC0728;
LABEL_8:
      this->fields.invoke_impl = (intptr_t)v9;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v8 )
    {
      v9 = sub_1AC0708;
      goto LABEL_8;
    }
    if ( !object )
    {
      v11 = sub_1C93D48(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C93BFC(v11, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_9:
  this->fields.extra_arg = (intptr_t)sub_1AC06C0;
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
  return sub_1C93A88(this, &v6, callback, object);
}


void FriendRootComponent_messageRequestCallback__EndInvoke(
        FriendRootComponent_messageRequestCallback_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C93A8C(result, 0, method);
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