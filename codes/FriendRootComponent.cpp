void __fastcall FriendRootComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B114BC & 1) == 0 )
  {
    sub_1BCA7E0(&FriendRootComponent_TypeInfo, v1, v2);
    byte_4B114BC = 1;
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

  if ( (byte_4B114AD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    byte_4B114AD = 1;
  }
  state = this->fields.state;
  switch ( state )
  {
    case ',':
      this->fields.state = 23;
      Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        CommonUI__CloseNotificationDialog(Instance, 0LL);
        goto LABEL_12;
      }
LABEL_14:
      sub_1BCAA3C(Instance, method);
    case '+':
      Instance = (CommonUI_o *)this->fields.friendWarningDialog;
      this->fields.state = 23;
      if ( Instance )
      {
        FriendWarningDialog__Close_31535996((FriendWarningDialog_o *)Instance, 0LL, v2);
        goto LABEL_12;
      }
      goto LABEL_14;
    case '*':
      Instance = (CommonUI_o *)this->fields.operationConfirmMenu;
      this->fields.state = 23;
      if ( Instance )
      {
        FriendOperationConfirmMenu__Close((FriendOperationConfirmMenu_o *)Instance, 0LL);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  const MethodInfo *v8; // x2
  FriendSearchMenu_o *friendSearchMenu; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  FriendSearchMenu_CallbackFunc_o *v13; // x21
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x1

  if ( (byte_4B114B2 & 1) == 0 )
  {
    sub_1BCA7E0(&FriendSearchMenu_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_FriendRootComponent_OnSelectSearchFriend__, v4, v5);
    byte_4B114B2 = 1;
  }
  if ( this->fields.state == 42 )
  {
    this->fields.state = 23;
    this->fields.selectFriendCode = 0LL;
    sub_1BCA784(&this->fields.selectFriendCode, 0LL);
    this->fields.selectFriendEntity = 0LL;
    sub_1BCA784(&this->fields.selectFriendEntity, 0LL);
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close(operationConfirmMenu, 0LL),
          (operationConfirmMenu = (FriendOperationConfirmMenu_o *)this->fields.friendSearchResultMenu) == 0LL)
      || (FriendSearchResultMenu__Close_31503772((FriendSearchResultMenu_o *)operationConfirmMenu, 0LL, v8),
          friendSearchMenu = this->fields.friendSearchMenu,
          v13 = (FriendSearchMenu_CallbackFunc_o *)sub_1BCAA2C(FriendSearchMenu_CallbackFunc_TypeInfo, v10, v11, v12),
          FriendSearchMenu_CallbackFunc___ctor(
            v13,
            (Il2CppObject *)this,
            Method_FriendRootComponent_OnSelectSearchFriend__,
            v14),
          !friendSearchMenu) )
    {
      sub_1BCAA3C(operationConfirmMenu, v6);
    }
    FriendSearchMenu__Open(friendSearchMenu, v13, 1, v15);
    FriendRootComponent__RefreshInfo(this, v16);
  }
}


void __fastcall FriendRootComponent__BackFollowRemoveConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  FriendOperationItemListViewManager_CallbackFunc_o *v11; // x21
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x2

  if ( (byte_4B114B4 & 1) == 0 )
  {
    sub_1BCA7E0(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_FriendRootComponent_OnSelectFriendItem__, v4, v5);
    byte_4B114B4 = 1;
  }
  if ( this->fields.state == 45 )
  {
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close(operationConfirmMenu, 0LL),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v11 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                                       FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                                       v8,
                                                                       v9,
                                                                       v10),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v11,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v12),
          !operationItemListViewManager) )
    {
      sub_1BCAA3C(operationConfirmMenu, method);
    }
    operationItemListViewManager->fields.callbackFunc = v11;
    sub_1BCA784(&operationItemListViewManager->fields.callbackFunc, v11);
    FriendOperationItemListViewManager__SetMode_31475908(operationItemListViewManager, 2, v13);
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
      sub_1BCAA3C(operationConfirmMenu, method);
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
  __int64 v2; // x2
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

  if ( (byte_4B114B5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_FriendRootComponent_EndFriendRequest2__, method, v2);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_FriendTopRequest___, v5, v6);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v9, v10);
    byte_4B114B5 = 1;
  }
  v11 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(NetworkManager_ResultCallbackFunc_TypeInfo, method, v2, v3);
  NetworkManager_ResultCallbackFunc___ctor(
    v11,
    (Il2CppObject *)this,
    Method_FriendRootComponent_EndFriendRequest2__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v12);
  Request_object = NetworkManager__getRequest_object_(
                     v11,
                     (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_FriendTopRequest___);
  if ( !Request_object )
    sub_1BCAA3C(0LL, v14);
  RequestBase__beginRequest((RequestBase_o *)Request_object, 0LL);
}


void __fastcall FriendRootComponent__BackFriendAcceptConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  FriendOperationItemListViewManager_CallbackFunc_o *v11; // x21
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x2

  if ( (byte_4B1147A & 1) == 0 )
  {
    sub_1BCA7E0(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_FriendRootComponent_OnSelectFriendItem__, v4, v5);
    byte_4B1147A = 1;
  }
  if ( this->fields.state == 31 )
  {
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close(operationConfirmMenu, 0LL),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v11 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                                       FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                                       v8,
                                                                       v9,
                                                                       v10),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v11,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v12),
          !operationItemListViewManager) )
    {
      sub_1BCAA3C(operationConfirmMenu, method);
    }
    operationItemListViewManager->fields.callbackFunc = v11;
    sub_1BCA784(&operationItemListViewManager->fields.callbackFunc, v11);
    FriendOperationItemListViewManager__SetMode_31475908(operationItemListViewManager, 2, v13);
    this->fields.state = 14;
  }
}


void __fastcall FriendRootComponent__BackFriendAcceptConfirmRefreshShowOffered(
        FriendRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  const MethodInfo *v6; // x1
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  const MethodInfo *v8; // x3
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  FriendOperationItemListViewManager_CallbackFunc_o *v14; // x21
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x2

  if ( (byte_4B1147B & 1) == 0 )
  {
    sub_1BCA7E0(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_FriendRootComponent_OnSelectFriendItem__, v4, v5);
    byte_4B1147B = 1;
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
            v6),
          (classButtonControl = this->fields.classButtonControl) == 0LL)
      || (operationConfirmMenu = (FriendOperationConfirmMenu_o *)this->fields.operationItemListViewManager) == 0LL
      || (FriendOperationItemListViewManager__CreateList(
            (FriendOperationItemListViewManager_o *)operationConfirmMenu,
            2,
            classButtonControl->fields.currentCursor,
            v8),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v14 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                                       FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                                       v11,
                                                                       v12,
                                                                       v13),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v14,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v15),
          !operationItemListViewManager) )
    {
LABEL_11:
      sub_1BCAA3C(operationConfirmMenu, v6);
    }
    operationItemListViewManager->fields.callbackFunc = v14;
    sub_1BCA784(&operationItemListViewManager->fields.callbackFunc, v14);
    FriendOperationItemListViewManager__SetMode_31475908(operationItemListViewManager, 2, v16);
  }
}


void __fastcall FriendRootComponent__BackFriendCancelConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  FriendOperationItemListViewManager_CallbackFunc_o *v11; // x21
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x2

  if ( (byte_4B11480 & 1) == 0 )
  {
    sub_1BCA7E0(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_FriendRootComponent_OnSelectFriendItem__, v4, v5);
    byte_4B11480 = 1;
  }
  if ( this->fields.state == 37 )
  {
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close(operationConfirmMenu, 0LL),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v11 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                                       FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                                       v8,
                                                                       v9,
                                                                       v10),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v11,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v12),
          !operationItemListViewManager) )
    {
      sub_1BCAA3C(operationConfirmMenu, method);
    }
    operationItemListViewManager->fields.callbackFunc = v11;
    sub_1BCA784(&operationItemListViewManager->fields.callbackFunc, v11);
    FriendOperationItemListViewManager__SetMode_31475908(operationItemListViewManager, 2, v13);
    this->fields.state = 14;
  }
}


void __fastcall FriendRootComponent__BackFriendCancelConfirmRefreshShowOffer(
        FriendRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  const MethodInfo *v6; // x1
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  const MethodInfo *v8; // x3
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  FriendOperationItemListViewManager_CallbackFunc_o *v14; // x21
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x2

  if ( (byte_4B11481 & 1) == 0 )
  {
    sub_1BCA7E0(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_FriendRootComponent_OnSelectFriendItem__, v4, v5);
    byte_4B11481 = 1;
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
            v6),
          (classButtonControl = this->fields.classButtonControl) == 0LL)
      || (operationConfirmMenu = (FriendOperationConfirmMenu_o *)this->fields.operationItemListViewManager) == 0LL
      || (FriendOperationItemListViewManager__CreateList(
            (FriendOperationItemListViewManager_o *)operationConfirmMenu,
            1,
            classButtonControl->fields.currentCursor,
            v8),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v14 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                                       FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                                       v11,
                                                                       v12,
                                                                       v13),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v14,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v15),
          !operationItemListViewManager) )
    {
LABEL_11:
      sub_1BCAA3C(operationConfirmMenu, v6);
    }
    operationItemListViewManager->fields.callbackFunc = v14;
    sub_1BCA784(&operationItemListViewManager->fields.callbackFunc, v14);
    FriendOperationItemListViewManager__SetMode_31475908(operationItemListViewManager, 2, v16);
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
      FriendWarningDialog__Close_31535996(friendWarningDialog, 0LL, v2);
      goto LABEL_7;
    }
LABEL_9:
    sub_1BCAA3C(friendWarningDialog, method);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  int32_t state; // w8
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  FriendOperationItemListViewManager_CallbackFunc_o *v12; // x21
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x2

  if ( (byte_4B114B7 & 1) == 0 )
  {
    sub_1BCA7E0(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_FriendRootComponent_OnSelectFriendItem__, v4, v5);
    byte_4B114B7 = 1;
  }
  state = this->fields.state;
  if ( state == 29 || state == 27 )
  {
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close(operationConfirmMenu, 0LL),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v12 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                                       FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                                       v9,
                                                                       v10,
                                                                       v11),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v12,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v13),
          !operationItemListViewManager) )
    {
      sub_1BCAA3C(operationConfirmMenu, method);
    }
    operationItemListViewManager->fields.callbackFunc = v12;
    sub_1BCA784(&operationItemListViewManager->fields.callbackFunc, v12);
    FriendOperationItemListViewManager__SetMode_31475908(operationItemListViewManager, 2, v14);
    this->fields.state = 4;
  }
}


void __fastcall FriendRootComponent__BackFriendOfferConfirmRefreshShowFriend(
        FriendRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  const MethodInfo *v6; // x1
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  const MethodInfo *v8; // x3
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  FriendOperationItemListViewManager_CallbackFunc_o *v14; // x21
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x2

  if ( (byte_4B114B8 & 1) == 0 )
  {
    sub_1BCA7E0(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_FriendRootComponent_OnSelectFriendItem__, v4, v5);
    byte_4B114B8 = 1;
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
            v6),
          (classButtonControl = this->fields.classButtonControl) == 0LL)
      || (operationConfirmMenu = (FriendOperationConfirmMenu_o *)this->fields.operationItemListViewManager) == 0LL
      || (FriendOperationItemListViewManager__CreateList(
            (FriendOperationItemListViewManager_o *)operationConfirmMenu,
            3,
            classButtonControl->fields.currentCursor,
            v8),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v14 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                                       FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                                       v11,
                                                                       v12,
                                                                       v13),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v14,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v15),
          !operationItemListViewManager) )
    {
LABEL_11:
      sub_1BCAA3C(operationConfirmMenu, v6);
    }
    operationItemListViewManager->fields.callbackFunc = v14;
    sub_1BCA784(&operationItemListViewManager->fields.callbackFunc, v14);
    FriendOperationItemListViewManager__SetMode_31475908(operationItemListViewManager, 2, v16);
  }
}


void __fastcall FriendRootComponent__BackFriendOfferConfirmRefreshShowSearch(
        FriendRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  const MethodInfo *v8; // x2
  FriendSearchMenu_o *friendSearchMenu; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  FriendSearchMenu_CallbackFunc_o *v13; // x21
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x3

  if ( (byte_4B11478 & 1) == 0 )
  {
    sub_1BCA7E0(&FriendSearchMenu_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_FriendRootComponent_OnSelectSearchFriend__, v4, v5);
    byte_4B11478 = 1;
  }
  if ( this->fields.state == 27 )
  {
    this->fields.state = 23;
    this->fields.selectFriendCode = 0LL;
    sub_1BCA784(&this->fields.selectFriendCode, 0LL);
    this->fields.selectFriendEntity = 0LL;
    sub_1BCA784(&this->fields.selectFriendEntity, 0LL);
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close(operationConfirmMenu, 0LL),
          (operationConfirmMenu = (FriendOperationConfirmMenu_o *)this->fields.friendSearchResultMenu) == 0LL)
      || (FriendSearchResultMenu__Close_31503772((FriendSearchResultMenu_o *)operationConfirmMenu, 0LL, v8),
          friendSearchMenu = this->fields.friendSearchMenu,
          v13 = (FriendSearchMenu_CallbackFunc_o *)sub_1BCAA2C(FriendSearchMenu_CallbackFunc_TypeInfo, v10, v11, v12),
          FriendSearchMenu_CallbackFunc___ctor(
            v13,
            (Il2CppObject *)this,
            Method_FriendRootComponent_OnSelectSearchFriend__,
            v14),
          !friendSearchMenu) )
    {
      sub_1BCAA3C(operationConfirmMenu, v6);
    }
    FriendSearchMenu__Open(friendSearchMenu, v13, 1, v15);
  }
}


void __fastcall FriendRootComponent__BackFriendRejectConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  FriendOperationItemListViewManager_CallbackFunc_o *v11; // x21
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x2

  if ( (byte_4B1147D & 1) == 0 )
  {
    sub_1BCA7E0(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_FriendRootComponent_OnSelectFriendItem__, v4, v5);
    byte_4B1147D = 1;
  }
  if ( this->fields.state == 34 )
  {
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close(operationConfirmMenu, 0LL),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v11 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                                       FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                                       v8,
                                                                       v9,
                                                                       v10),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v11,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v12),
          !operationItemListViewManager) )
    {
      sub_1BCAA3C(operationConfirmMenu, method);
    }
    operationItemListViewManager->fields.callbackFunc = v11;
    sub_1BCA784(&operationItemListViewManager->fields.callbackFunc, v11);
    FriendOperationItemListViewManager__SetMode_31475908(operationItemListViewManager, 2, v13);
    this->fields.state = 14;
  }
}


void __fastcall FriendRootComponent__BackFriendRejectConfirmRefreshShowOffered(
        FriendRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  const MethodInfo *v6; // x1
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  const MethodInfo *v8; // x3
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  FriendOperationItemListViewManager_CallbackFunc_o *v14; // x21
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x2

  if ( (byte_4B1147E & 1) == 0 )
  {
    sub_1BCA7E0(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_FriendRootComponent_OnSelectFriendItem__, v4, v5);
    byte_4B1147E = 1;
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
            v6),
          (classButtonControl = this->fields.classButtonControl) == 0LL)
      || (operationConfirmMenu = (FriendOperationConfirmMenu_o *)this->fields.operationItemListViewManager) == 0LL
      || (FriendOperationItemListViewManager__CreateList(
            (FriendOperationItemListViewManager_o *)operationConfirmMenu,
            2,
            classButtonControl->fields.currentCursor,
            v8),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v14 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                                       FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                                       v11,
                                                                       v12,
                                                                       v13),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v14,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v15),
          !operationItemListViewManager) )
    {
LABEL_11:
      sub_1BCAA3C(operationConfirmMenu, v6);
    }
    operationItemListViewManager->fields.callbackFunc = v14;
    sub_1BCA784(&operationItemListViewManager->fields.callbackFunc, v14);
    FriendOperationItemListViewManager__SetMode_31475908(operationItemListViewManager, 2, v16);
  }
}


void __fastcall FriendRootComponent__BackFriendRemoveConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  FriendOperationItemListViewManager_CallbackFunc_o *v11; // x21
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x2

  if ( (byte_4B11483 & 1) == 0 )
  {
    sub_1BCA7E0(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_FriendRootComponent_OnSelectFriendItem__, v4, v5);
    byte_4B11483 = 1;
  }
  if ( this->fields.state == 40 )
  {
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close(operationConfirmMenu, 0LL),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v11 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                                       FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                                       v8,
                                                                       v9,
                                                                       v10),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v11,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v12),
          !operationItemListViewManager) )
    {
      sub_1BCAA3C(operationConfirmMenu, method);
    }
    operationItemListViewManager->fields.callbackFunc = v11;
    sub_1BCA784(&operationItemListViewManager->fields.callbackFunc, v11);
    FriendOperationItemListViewManager__SetMode_31475908(operationItemListViewManager, 2, v13);
    this->fields.state = 4;
  }
}


void __fastcall FriendRootComponent__BackFriendRemoveConfirmRefreshShowFriend(
        FriendRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  const MethodInfo *v6; // x1
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  const MethodInfo *v8; // x3
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  FriendOperationItemListViewManager_CallbackFunc_o *v14; // x21
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x2

  if ( (byte_4B11484 & 1) == 0 )
  {
    sub_1BCA7E0(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_FriendRootComponent_OnSelectFriendItem__, v4, v5);
    byte_4B11484 = 1;
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
            v6),
          (classButtonControl = this->fields.classButtonControl) == 0LL)
      || (operationConfirmMenu = (FriendOperationConfirmMenu_o *)this->fields.operationItemListViewManager) == 0LL
      || (FriendOperationItemListViewManager__CreateList(
            (FriendOperationItemListViewManager_o *)operationConfirmMenu,
            3,
            classButtonControl->fields.currentCursor,
            v8),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v14 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                                       FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                                       v11,
                                                                       v12,
                                                                       v13),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v14,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v15),
          !operationItemListViewManager) )
    {
LABEL_11:
      sub_1BCAA3C(operationConfirmMenu, v6);
    }
    operationItemListViewManager->fields.callbackFunc = v14;
    sub_1BCA784(&operationItemListViewManager->fields.callbackFunc, v14);
    FriendOperationItemListViewManager__SetMode_31475908(operationItemListViewManager, 2, v16);
  }
}


void __fastcall FriendRootComponent__BackSearchFriend(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  FriendSearchResultMenu_o *friendSearchResultMenu; // x0
  FriendSearchMenu_o *friendSearchMenu; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  System_Action_o *v13; // x21
  const MethodInfo *v14; // x2

  if ( (byte_4B11471 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_FriendRootComponent_OnMoveEnd__, v4, v5);
    byte_4B11471 = 1;
  }
  if ( this->fields.state == 23 )
  {
    this->fields.state = 24;
    FriendRootComponent__RefreshInfo(this, method);
    this->fields.selectFriendEntity = 0LL;
    sub_1BCA784(&this->fields.selectFriendEntity, 0LL);
    friendSearchResultMenu = this->fields.friendSearchResultMenu;
    if ( !friendSearchResultMenu
      || (FriendSearchResultMenu__Close_31503772(friendSearchResultMenu, 0LL, v7),
          friendSearchMenu = this->fields.friendSearchMenu,
          v13 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v10, v11, v12),
          System_Action___ctor(v13, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0LL),
          !friendSearchMenu) )
    {
      sub_1BCAA3C(friendSearchResultMenu, v6);
    }
    FriendSearchMenu__Close_31501608(friendSearchMenu, v13, v14);
  }
}


void __fastcall FriendRootComponent__BackShowFriend(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  System_Action_o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4B11469 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_FriendRootComponent_OnMoveEnd__, v4, v5);
    byte_4B11469 = 1;
  }
  if ( this->fields.state == 4 )
  {
    this->fields.state = 5;
    FriendRootComponent__RefreshInfo(this, method);
    operationItemListViewManager = this->fields.operationItemListViewManager;
    v10 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v7, v8, v9);
    System_Action___ctor(v10, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0LL);
    if ( !operationItemListViewManager )
      sub_1BCAA3C(v11, v12);
    operationItemListViewManager->fields.callbackFunc2 = v10;
    sub_1BCA784(&operationItemListViewManager->fields.callbackFunc2, v10);
    FriendOperationItemListViewManager__SetMode_31475908(operationItemListViewManager, 4, v13);
  }
}


void __fastcall FriendRootComponent__BackShowOffer(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  System_Action_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x1

  if ( (byte_4B1146B & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_FriendRootComponent_OnMoveEnd__, v5, v6);
    byte_4B1146B = 1;
  }
  if ( this->fields.state == 9 )
  {
    operationItemListViewManager = this->fields.operationItemListViewManager;
    v8 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0LL);
    if ( !operationItemListViewManager )
      sub_1BCAA3C(v9, v10);
    operationItemListViewManager->fields.callbackFunc2 = v8;
    sub_1BCA784(&operationItemListViewManager->fields.callbackFunc2, v8);
    FriendOperationItemListViewManager__SetMode_31475908(operationItemListViewManager, 4, v11);
    FriendRootComponent__RefreshInfo(this, v12);
    this->fields.state = 10;
  }
}


void __fastcall FriendRootComponent__BackShowOffered(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  System_Action_o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4B1146D & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_FriendRootComponent_OnMoveEnd__, v4, v5);
    byte_4B1146D = 1;
  }
  if ( this->fields.state == 14 )
  {
    this->fields.state = 15;
    FriendRootComponent__RefreshInfo(this, method);
    operationItemListViewManager = this->fields.operationItemListViewManager;
    v10 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v7, v8, v9);
    System_Action___ctor(v10, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0LL);
    if ( !operationItemListViewManager )
      sub_1BCAA3C(v11, v12);
    operationItemListViewManager->fields.callbackFunc2 = v10;
    sub_1BCA784(&operationItemListViewManager->fields.callbackFunc2, v10);
    FriendOperationItemListViewManager__SetMode_31475908(operationItemListViewManager, 4, v13);
  }
}


void __fastcall FriendRootComponent__BackShowSearch(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  System_Action_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2

  if ( (byte_4B1146F & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_FriendRootComponent_OnMoveEnd__, v5, v6);
    byte_4B1146F = 1;
  }
  if ( this->fields.state == 19 )
  {
    this->fields.state = 20;
    operationItemListViewManager = this->fields.operationItemListViewManager;
    v8 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0LL);
    if ( !operationItemListViewManager )
      sub_1BCAA3C(v9, v10);
    operationItemListViewManager->fields.callbackFunc2 = v8;
    sub_1BCA784(&operationItemListViewManager->fields.callbackFunc2, v8);
    FriendOperationItemListViewManager__SetMode_31475908(operationItemListViewManager, 4, v11);
  }
}


void __fastcall FriendRootComponent__ChangeLimitCountBySpoilerProtection(
        FriendRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  ServantLeaderInfo_o *SpoilerSetting; // x0
  __int64 v5; // x1
  struct OtherUserGameEntity_o *selectFriendEntity; // x8
  struct ServantLeaderInfo_array *userSvtLeaderHash; // x20
  int max_length; // w8
  unsigned int v9; // w21
  struct OtherUserGameEntity_o *v10; // x8
  struct ServantLeaderInfo_array *eventUserSvtLeaderHash; // x19
  int v12; // w8
  unsigned int v13; // w20

  if ( (byte_4B1148F & 1) == 0 )
  {
    sub_1BCA7E0(&OptionManager_TypeInfo, method, v2);
    byte_4B1148F = 1;
  }
  if ( this->fields.selectFriendEntity )
  {
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, method);
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
        v9 = 0;
        while ( v9 < max_length )
        {
          SpoilerSetting = userSvtLeaderHash->m_Items[v9];
          if ( !SpoilerSetting )
            goto LABEL_23;
          ServantLeaderInfo__ChangeLimitCountBySpoilerProtection(SpoilerSetting, 0LL);
          max_length = userSvtLeaderHash->max_length;
          if ( (int)++v9 >= max_length )
            goto LABEL_14;
        }
LABEL_22:
        sub_1BCAA44(SpoilerSetting, v5);
      }
LABEL_14:
      v10 = this->fields.selectFriendEntity;
      if ( !v10 || (eventUserSvtLeaderHash = v10->fields.eventUserSvtLeaderHash) == 0LL )
LABEL_23:
        sub_1BCAA3C(SpoilerSetting, v5);
      v12 = eventUserSvtLeaderHash->max_length;
      if ( v12 >= 1 )
      {
        v13 = 0;
        while ( v13 < v12 )
        {
          SpoilerSetting = eventUserSvtLeaderHash->m_Items[v13];
          if ( !SpoilerSetting )
            goto LABEL_23;
          ServantLeaderInfo__ChangeLimitCountBySpoilerProtection(SpoilerSetting, 0LL);
          v12 = eventUserSvtLeaderHash->max_length;
          if ( (int)++v13 >= v12 )
            return;
        }
        goto LABEL_22;
      }
    }
  }
}


void __fastcall FriendRootComponent__CheckHelpUI(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  System_String_o **v8; // x9
  System_String_o *v9; // x20
  UILabel_o *helpLabel; // x19
  System_String_o *v11; // x0
  __int64 v12; // x1

  if ( (byte_4B11461 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_6621/*"FRIEND_LOCK_HELP_TEXT"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_6619/*"FRIEND_HELP_TEXT"*/, v6, v7);
    byte_4B11461 = 1;
  }
  v8 = (System_String_o **)&StringLiteral_6619/*"FRIEND_HELP_TEXT"*/;
  if ( this->fields.isActiveModeKindButtons && this->fields.currentModeKind == 1 )
    v8 = (System_String_o **)&StringLiteral_6621/*"FRIEND_LOCK_HELP_TEXT"*/;
  v9 = *v8;
  helpLabel = this->fields.helpLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v11 = LocalizationManager__Get(v9, 0LL);
  if ( !helpLabel )
    sub_1BCAA3C(v11, v12);
  UILabel__set_text(helpLabel, v11, 0LL);
}


void __fastcall FriendRootComponent__CheckModeKind(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  DataManager_o *Instance; // x0
  __int64 v17; // x1
  Il2CppObject *MasterData_object; // x20
  UserFollowMaster_o *v19; // x21
  int v20; // w21
  UICommonButton_o *modeUserDetailButton; // x20
  bool enabled; // w0
  UICommonButton_o *modeEditLockButton; // x20
  bool v24; // w0
  __int64 v25; // x8
  int32_t currentModeKind; // w20
  __int64 v27; // x21
  __int64 v28; // x22
  System_String_o **v29; // x8
  System_String_o *v30; // x1

  if ( (byte_4B11496 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_TblFriendMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserFollowMaster___, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    sub_1BCA7E0(&StringLiteral_17828/*"button_alllock_unreg"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_17834/*"button_infocheck_unreg"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_17833/*"button_infocheck_reg"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_17827/*"button_alllock_reg"*/, v14, v15);
    byte_4B11496 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_TblFriendMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserFollowMaster___);
  if ( !MasterData_object )
    goto LABEL_31;
  v19 = (UserFollowMaster_o *)Instance;
  Instance = (DataManager_o *)TblFriendMaster__GetFriendSum((TblFriendMaster_o *)MasterData_object, 0LL);
  if ( (int)Instance > 0 )
    goto LABEL_9;
  if ( !v19 )
    goto LABEL_31;
  if ( UserFollowMaster__GetFollowSum(v19, 0LL) <= 0 )
  {
    v20 = 1;
    this->fields.currentModeKind = 0;
  }
  else
  {
LABEL_9:
    v20 = 0;
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
  v24 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.modeEditLockButton, 0LL);
  UICommonButton__SetColliderEnable(modeEditLockButton, v24, 1, 0LL);
  if ( v20 )
  {
    v25 = 232LL;
    if ( this->fields.currentModeKind )
      v25 = 224LL;
    Instance = *(DataManager_o **)((char *)&this->klass + v25);
    if ( Instance )
    {
      UICommonButton__SetButtonEnable((UICommonButton_o *)Instance, 0, 1, 0LL);
      goto LABEL_21;
    }
LABEL_31:
    sub_1BCAA3C(Instance, v17);
  }
LABEL_21:
  Instance = (DataManager_o *)this->fields.modeUserDetailSprite;
  if ( !Instance )
    goto LABEL_31;
  currentModeKind = this->fields.currentModeKind;
  v27 = StringLiteral_17827/*"button_alllock_reg"*/;
  v28 = StringLiteral_17828/*"button_alllock_unreg"*/;
  v29 = (System_String_o **)(currentModeKind ? &StringLiteral_17834/*"button_infocheck_unreg"*/ : &StringLiteral_17833/*"button_infocheck_reg"*/);
  UISprite__set_spriteName((UISprite_o *)Instance, *v29, 0LL);
  Instance = (DataManager_o *)this->fields.modeEditLockSprite;
  if ( !Instance )
    goto LABEL_31;
  if ( currentModeKind == 1 )
    v30 = (System_String_o *)v27;
  else
    v30 = (System_String_o *)v28;
  UISprite__set_spriteName((UISprite_o *)Instance, v30, 0LL);
}


bool __fastcall FriendRootComponent__CheckTabKind(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  int32_t tabKind; // w0
  __int64 v9; // x1
  PlayMakerFSM_o *myFSM; // x0
  __int64 *v11; // x8

  if ( (byte_4B11465 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_8741/*"MENU_OPERATION_FRIEND"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_8743/*"MENU_OPERATION_OFFERED"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_8744/*"MENU_OPERATION_SEARCH"*/, v6, v7);
    byte_4B11465 = 1;
  }
  tabKind = FriendRootComponent__get_tabKind(this, method);
  switch ( tabKind )
  {
    case 2:
      myFSM = this->fields.myFSM;
      if ( myFSM )
      {
        v11 = &StringLiteral_8744/*"MENU_OPERATION_SEARCH"*/;
        goto LABEL_12;
      }
LABEL_14:
      sub_1BCAA3C(myFSM, v9);
    case 1:
      myFSM = this->fields.myFSM;
      if ( myFSM )
      {
        v11 = &StringLiteral_8743/*"MENU_OPERATION_OFFERED"*/;
        goto LABEL_12;
      }
      goto LABEL_14;
    case 0:
      myFSM = this->fields.myFSM;
      if ( myFSM )
      {
        v11 = &StringLiteral_8741/*"MENU_OPERATION_FRIEND"*/;
LABEL_12:
        PlayMakerFSM__SendEvent(myFSM, (System_String_o *)*v11, 0LL);
        return 1;
      }
      goto LABEL_14;
  }
  return 1;
}


void __fastcall FriendRootComponent__EndCloseShowServant(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v8; // x21
  const MethodInfo *v9; // x3
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4B11476 & 1) == 0 )
  {
    sub_1BCA7E0(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_FriendRootComponent_OnSelectFriendItem__, v5, v6);
    byte_4B11476 = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v8 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                              FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                              method,
                                                              v2,
                                                              v3);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
    v9);
  if ( !operationItemListViewManager )
    sub_1BCAA3C(v10, v11);
  operationItemListViewManager->fields.callbackFunc = v8;
  sub_1BCA784(&operationItemListViewManager->fields.callbackFunc, v8);
  FriendOperationItemListViewManager__SetMode_31475908(operationItemListViewManager, 2, v12);
}


void __fastcall FriendRootComponent__EndCloseShowServantEquip(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v8; // x21
  const MethodInfo *v9; // x3
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4B114A0 & 1) == 0 )
  {
    sub_1BCA7E0(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_FriendRootComponent_OnSelectFriendItem__, v5, v6);
    byte_4B114A0 = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v8 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                              FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                              method,
                                                              v2,
                                                              v3);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
    v9);
  if ( !operationItemListViewManager )
    sub_1BCAA3C(v10, v11);
  operationItemListViewManager->fields.callbackFunc = v8;
  sub_1BCA784(&operationItemListViewManager->fields.callbackFunc, v8);
  FriendOperationItemListViewManager__SetMode_31475908(operationItemListViewManager, 2, v12);
}


void __fastcall FriendRootComponent__EndFriendRequest(
        FriendRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  FriendRootComponent_c *v8; // x0
  OtherUserGameEntity_array *Instance; // x0
  __int64 v10; // x1
  TblFriendMaster_o *v11; // x20
  const MethodInfo *v12; // x2
  int32_t v13; // w1
  OtherUserGameEntity_array *List; // x21
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x1

  if ( (byte_4B11462 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_TblFriendMaster___, result, method);
    sub_1BCA7E0(&FriendRootComponent_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B11462 = 1;
  }
  v8 = FriendRootComponent_TypeInfo;
  if ( !FriendRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendRootComponent_TypeInfo, result);
    v8 = FriendRootComponent_TypeInfo;
  }
  if ( v8->static_fields->tabKindSave == 3 && this->fields.jumpTabKind <= 1u )
  {
    EventTutorialMaster__CheckTutorial(-1, 49, 0LL, 0, 0, 0, 0, 0LL);
    v8 = FriendRootComponent_TypeInfo;
  }
  if ( !v8->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v8, result);
    v8 = FriendRootComponent_TypeInfo;
  }
  if ( v8->static_fields->tabKindSave == 3 && this->fields.jumpTabKind == 3 )
  {
    Instance = (OtherUserGameEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (OtherUserGameEntity_array *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)Instance,
                                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_TblFriendMaster___);
      if ( Instance )
      {
        v11 = (TblFriendMaster_o *)Instance;
        Instance = TblFriendMaster__GetList((TblFriendMaster_o *)Instance, 2, 0LL);
        if ( Instance )
        {
          if ( *(_QWORD *)&Instance->max_length )
          {
            v13 = 1;
LABEL_22:
            FriendRootComponent__set_tabKind((FriendRootComponent_o *)Instance, v13, v12);
            EventTutorialMaster__CheckTutorial(-1, 49, 0LL, 0, 0, 0, 0, 0LL);
            goto LABEL_23;
          }
          List = TblFriendMaster__GetList(v11, 3, 0LL);
          Instance = TblFriendMaster__GetList(v11, 9, 0LL);
          if ( List )
          {
            if ( *(_QWORD *)&List->max_length )
            {
LABEL_21:
              v13 = 0;
              goto LABEL_22;
            }
            if ( Instance )
            {
              if ( !*(_QWORD *)&Instance->max_length )
              {
                FriendRootComponent__set_tabKind((FriendRootComponent_o *)Instance, 2, v12);
                goto LABEL_23;
              }
              goto LABEL_21;
            }
          }
        }
      }
    }
    sub_1BCAA3C(Instance, v10);
  }
LABEL_23:
  FriendRootComponent__InitModeKindButtons(this, (const MethodInfo *)result);
  FriendRootComponent__RefreshTab(this, v15);
  FriendRootComponent__RefreshInfo(this, v16);
  MainMenuBar__setMenuActive(1, 0LL, 0LL);
  SceneRootComponent__beginStartUp_39382928((SceneRootComponent_o *)this, 0LL);
}


void __fastcall FriendRootComponent__EndFriendRequest2(
        FriendRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  struct FriendOperationItemListViewManager_o *v10; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  FriendOperationItemListViewManager_CallbackFunc_o *v14; // x21
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x2

  if ( (byte_4B114B6 & 1) == 0 )
  {
    sub_1BCA7E0(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, result, method);
    sub_1BCA7E0(&Method_FriendRootComponent_OnSelectFriendItem__, v4, v5);
    byte_4B114B6 = 1;
  }
  FriendRootComponent__RefreshInfo(this, (const MethodInfo *)result);
  classButtonControl = this->fields.classButtonControl;
  if ( !classButtonControl
    || (operationItemListViewManager = this->fields.operationItemListViewManager) == 0LL
    || (FriendOperationItemListViewManager__CreateList(
          operationItemListViewManager,
          3,
          classButtonControl->fields.currentCursor,
          v8),
        v10 = this->fields.operationItemListViewManager,
        v14 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                                     FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                                     v11,
                                                                     v12,
                                                                     v13),
        FriendOperationItemListViewManager_CallbackFunc___ctor(
          v14,
          (Il2CppObject *)this,
          (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
          v15),
        !v10) )
  {
    sub_1BCAA3C(operationItemListViewManager, v7);
  }
  v10->fields.callbackFunc = v14;
  sub_1BCA784(&v10->fields.callbackFunc, v14);
  FriendOperationItemListViewManager__SetMode_31475908(v10, 2, v16);
  this->fields.state = 4;
}


void __fastcall FriendRootComponent__EndLoadOutGameAtlas(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4B1145E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method, v2);
    byte_4B1145E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v5);
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, (SceneRootComponent_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendRootComponent__EndMaxFollowWarningOfferConfirm(
        FriendRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_4B114AE & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_8738/*"MENU_CANCEL"*/, isDecide, method);
    byte_4B114AE = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1BCAA3C(0LL, isDecide);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_8738/*"MENU_CANCEL"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendRootComponent__EndMaxFriendWarning(
        FriendRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  FriendWarningDialog_o *friendWarningDialog; // x0
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  FriendOperationItemListViewManager_CallbackFunc_o *v11; // x21
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x2

  if ( (byte_4B114A2 & 1) == 0 )
  {
    sub_1BCA7E0(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, isDecide, method);
    sub_1BCA7E0(&Method_FriendRootComponent_OnSelectFriendItem__, v4, v5);
    byte_4B114A2 = 1;
  }
  friendWarningDialog = this->fields.friendWarningDialog;
  if ( !friendWarningDialog
    || (FriendWarningDialog__Close_31535996(friendWarningDialog, 0LL, method),
        operationItemListViewManager = this->fields.operationItemListViewManager,
        v11 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                                     FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                                     v8,
                                                                     v9,
                                                                     v10),
        FriendOperationItemListViewManager_CallbackFunc___ctor(
          v11,
          (Il2CppObject *)this,
          (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
          v12),
        !operationItemListViewManager) )
  {
    sub_1BCAA3C(friendWarningDialog, isDecide);
  }
  operationItemListViewManager->fields.callbackFunc = v11;
  sub_1BCA784(&operationItemListViewManager->fields.callbackFunc, v11);
  FriendOperationItemListViewManager__SetMode_31475908(operationItemListViewManager, 2, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendRootComponent__EndMaxFriendWarningOfferConfirm(
        FriendRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_4B114A3 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_8738/*"MENU_CANCEL"*/, isDecide, method);
    byte_4B114A3 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1BCAA3C(0LL, isDecide);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_8738/*"MENU_CANCEL"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendRootComponent__EndNoSearchWarning(
        FriendRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  FriendWarningDialog_o *friendWarningDialog; // x0
  FriendSearchMenu_o *friendSearchMenu; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  FriendSearchMenu_CallbackFunc_o *v13; // x21
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x3

  if ( (byte_4B11490 & 1) == 0 )
  {
    sub_1BCA7E0(&FriendSearchMenu_CallbackFunc_TypeInfo, isDecide, method);
    sub_1BCA7E0(&Method_FriendRootComponent_OnSelectSearchFriend__, v4, v5);
    sub_1BCA7E0(&StringLiteral_11195/*"REQUEST_NG"*/, v6, v7);
    byte_4B11490 = 1;
  }
  friendWarningDialog = this->fields.friendWarningDialog;
  if ( !friendWarningDialog
    || (FriendWarningDialog__Close_31535996(friendWarningDialog, 0LL, method),
        this->fields.state = 23,
        friendSearchMenu = this->fields.friendSearchMenu,
        v13 = (FriendSearchMenu_CallbackFunc_o *)sub_1BCAA2C(FriendSearchMenu_CallbackFunc_TypeInfo, v10, v11, v12),
        FriendSearchMenu_CallbackFunc___ctor(
          v13,
          (Il2CppObject *)this,
          Method_FriendRootComponent_OnSelectSearchFriend__,
          v14),
        !friendSearchMenu)
    || (FriendSearchMenu__Open(friendSearchMenu, v13, 0, v15),
        (friendWarningDialog = (FriendWarningDialog_o *)this->fields.myFSM) == 0LL) )
  {
    sub_1BCAA3C(friendWarningDialog, isDecide);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)friendWarningDialog, (System_String_o *)StringLiteral_11195/*"REQUEST_NG"*/, 0LL);
}


void __fastcall FriendRootComponent__EndRequestFollowAssign(
        FriendRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
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
  System_Collections_Generic_Dictionary_object__object__o *myFSM; // x0
  System_Collections_Generic_Dictionary_object__object__o *v25; // x20
  System_String_o *v26; // x20
  __int64 *v27; // x8
  Il2CppObject *Instance; // x21
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  NotificationDialog_ClickDelegate_o *v32; // x22

  if ( (byte_4B114B1 & 1) == 0 )
  {
    sub_1BCA7E0(&NotificationDialog_ClickDelegate_TypeInfo, result, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7, v8);
    sub_1BCA7E0(&Method_FriendRootComponent_OnEndRequestDialog__, v9, v10);
    sub_1BCA7E0(&JsonManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13, v14);
    sub_1BCA7E0(&StringLiteral_11197/*"REQUEST_OK"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_11195/*"REQUEST_NG"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_21627/*"message"*/, v21, v22);
    byte_4B114B1 = 1;
  }
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_22292/*"ng"*/, 0LL) )
  {
    myFSM = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.myFSM;
    if ( myFSM )
    {
      v27 = &StringLiteral_11195/*"REQUEST_NG"*/;
      goto LABEL_14;
    }
LABEL_17:
    sub_1BCAA3C(myFSM, v23);
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v23);
  myFSM = (System_Collections_Generic_Dictionary_object__object__o *)JsonManager__getDictionary(result, 0LL);
  if ( !myFSM )
    goto LABEL_17;
  v25 = myFSM;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          myFSM,
          (Il2CppObject *)StringLiteral_21627/*"message"*/,
          (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_10;
  myFSM = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                       v25,
                                                                       (Il2CppObject *)StringLiteral_21627/*"message"*/,
                                                                       (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !myFSM )
    goto LABEL_17;
  v26 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, Il2CppMethodPointer))myFSM->klass->vtable._3_ToString.method)(
                             myFSM,
                             myFSM->klass->vtable._4_unknown.methodPtr);
  if ( System_String__IsNullOrEmpty(v26, 0LL) )
  {
LABEL_10:
    myFSM = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.myFSM;
    if ( myFSM )
    {
      v27 = &StringLiteral_11197/*"REQUEST_OK"*/;
LABEL_14:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myFSM, (System_String_o *)*v27, 0LL);
      return;
    }
    goto LABEL_17;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v32 = (NotificationDialog_ClickDelegate_o *)sub_1BCAA2C(NotificationDialog_ClickDelegate_TypeInfo, v29, v30, v31);
  NotificationDialog_ClickDelegate___ctor(
    v32,
    (Il2CppObject *)this,
    Method_FriendRootComponent_OnEndRequestDialog__,
    0LL);
  if ( !Instance )
    goto LABEL_17;
  CommonUI__OpenNotificationDialog_30768824(
    (CommonUI_o *)Instance,
    0LL,
    v26,
    v32,
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
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
  System_Collections_Generic_Dictionary_object__object__o *myFSM; // x0
  System_Collections_Generic_Dictionary_object__object__o *v25; // x20
  System_String_o *v26; // x20
  __int64 *v27; // x8
  Il2CppObject *Instance; // x21
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  NotificationDialog_ClickDelegate_o *v32; // x22

  if ( (byte_4B114BA & 1) == 0 )
  {
    sub_1BCA7E0(&NotificationDialog_ClickDelegate_TypeInfo, result, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7, v8);
    sub_1BCA7E0(&Method_FriendRootComponent_OnEndRequestDialog__, v9, v10);
    sub_1BCA7E0(&JsonManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13, v14);
    sub_1BCA7E0(&StringLiteral_11197/*"REQUEST_OK"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_11195/*"REQUEST_NG"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_21627/*"message"*/, v21, v22);
    byte_4B114BA = 1;
  }
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_22292/*"ng"*/, 0LL) )
  {
    myFSM = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.myFSM;
    if ( myFSM )
    {
      v27 = &StringLiteral_11195/*"REQUEST_NG"*/;
      goto LABEL_14;
    }
LABEL_17:
    sub_1BCAA3C(myFSM, v23);
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v23);
  myFSM = (System_Collections_Generic_Dictionary_object__object__o *)JsonManager__getDictionary(result, 0LL);
  if ( !myFSM )
    goto LABEL_17;
  v25 = myFSM;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          myFSM,
          (Il2CppObject *)StringLiteral_21627/*"message"*/,
          (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_10;
  myFSM = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                       v25,
                                                                       (Il2CppObject *)StringLiteral_21627/*"message"*/,
                                                                       (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !myFSM )
    goto LABEL_17;
  v26 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, Il2CppMethodPointer))myFSM->klass->vtable._3_ToString.method)(
                             myFSM,
                             myFSM->klass->vtable._4_unknown.methodPtr);
  if ( System_String__IsNullOrEmpty(v26, 0LL) )
  {
LABEL_10:
    myFSM = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.myFSM;
    if ( myFSM )
    {
      v27 = &StringLiteral_11197/*"REQUEST_OK"*/;
LABEL_14:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myFSM, (System_String_o *)*v27, 0LL);
      return;
    }
    goto LABEL_17;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v32 = (NotificationDialog_ClickDelegate_o *)sub_1BCAA2C(NotificationDialog_ClickDelegate_TypeInfo, v29, v30, v31);
  NotificationDialog_ClickDelegate___ctor(
    v32,
    (Il2CppObject *)this,
    Method_FriendRootComponent_OnEndRequestDialog__,
    0LL);
  if ( !Instance )
    goto LABEL_17;
  CommonUI__OpenNotificationDialog_30768824(
    (CommonUI_o *)Instance,
    0LL,
    v26,
    v32,
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
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
  System_Collections_Generic_Dictionary_object__object__o *myFSM; // x0
  System_Collections_Generic_Dictionary_object__object__o *v25; // x20
  System_String_o *v26; // x20
  __int64 *v27; // x8
  Il2CppObject *Instance; // x21
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  NotificationDialog_ClickDelegate_o *v32; // x22

  if ( (byte_4B1148B & 1) == 0 )
  {
    sub_1BCA7E0(&NotificationDialog_ClickDelegate_TypeInfo, result, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7, v8);
    sub_1BCA7E0(&Method_FriendRootComponent_OnEndRequestDialog__, v9, v10);
    sub_1BCA7E0(&JsonManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13, v14);
    sub_1BCA7E0(&StringLiteral_11197/*"REQUEST_OK"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_11195/*"REQUEST_NG"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_21627/*"message"*/, v21, v22);
    byte_4B1148B = 1;
  }
  MainMenuBar__UpdateNoticeNumber(0LL);
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_22292/*"ng"*/, 0LL) )
  {
    myFSM = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.myFSM;
    if ( myFSM )
    {
      v27 = &StringLiteral_11195/*"REQUEST_NG"*/;
      goto LABEL_14;
    }
LABEL_17:
    sub_1BCAA3C(myFSM, v23);
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v23);
  myFSM = (System_Collections_Generic_Dictionary_object__object__o *)JsonManager__getDictionary(result, 0LL);
  if ( !myFSM )
    goto LABEL_17;
  v25 = myFSM;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          myFSM,
          (Il2CppObject *)StringLiteral_21627/*"message"*/,
          (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_10;
  myFSM = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                       v25,
                                                                       (Il2CppObject *)StringLiteral_21627/*"message"*/,
                                                                       (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !myFSM )
    goto LABEL_17;
  v26 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, Il2CppMethodPointer))myFSM->klass->vtable._3_ToString.method)(
                             myFSM,
                             myFSM->klass->vtable._4_unknown.methodPtr);
  if ( System_String__IsNullOrEmpty(v26, 0LL) )
  {
LABEL_10:
    myFSM = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.myFSM;
    if ( myFSM )
    {
      v27 = &StringLiteral_11197/*"REQUEST_OK"*/;
LABEL_14:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myFSM, (System_String_o *)*v27, 0LL);
      return;
    }
    goto LABEL_17;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v32 = (NotificationDialog_ClickDelegate_o *)sub_1BCAA2C(NotificationDialog_ClickDelegate_TypeInfo, v29, v30, v31);
  NotificationDialog_ClickDelegate___ctor(
    v32,
    (Il2CppObject *)this,
    Method_FriendRootComponent_OnEndRequestDialog__,
    0LL);
  if ( !Instance )
    goto LABEL_17;
  CommonUI__OpenNotificationDialog_30768824(
    (CommonUI_o *)Instance,
    0LL,
    v26,
    v32,
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  void *Instance; // x0
  __int64 v14; // x1
  __int64 v15; // x8
  struct OtherUserGameEntity_o *v16; // x1
  const MethodInfo *v17; // x1
  __int64 *v18; // x8
  const MethodInfo *v19; // x1

  if ( (byte_4B1148E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_OtherUserGameMaster___, result, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6);
    sub_1BCA7E0(&StringLiteral_11197/*"REQUEST_OK"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_22465/*"ok"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_11195/*"REQUEST_NG"*/, v11, v12);
    byte_4B1148E = 1;
  }
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_22465/*"ok"*/, 0LL) )
    goto LABEL_11;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_OtherUserGameMaster___);
  if ( !Instance )
    goto LABEL_14;
  Instance = OtherUserGameMaster__GetFriendCodeList(
               (OtherUserGameMaster_o *)Instance,
               this->fields.selectFriendCode,
               0LL);
  if ( !Instance )
    goto LABEL_14;
  v15 = *((_QWORD *)Instance + 3);
  if ( !v15 )
  {
LABEL_11:
    this->fields.selectFriendEntity = 0LL;
    sub_1BCA784(&this->fields.selectFriendEntity, 0LL);
    FriendRootComponent__StartSearchInput(this, v19);
    Instance = this->fields.myFSM;
    if ( Instance )
    {
      v18 = &StringLiteral_11195/*"REQUEST_NG"*/;
      goto LABEL_13;
    }
LABEL_14:
    sub_1BCAA3C(Instance, v14);
  }
  if ( !(_DWORD)v15 )
    sub_1BCAA44(Instance, v14);
  v16 = (struct OtherUserGameEntity_o *)*((_QWORD *)Instance + 4);
  this->fields.selectFriendEntity = v16;
  sub_1BCA784(&this->fields.selectFriendEntity, v16);
  FriendRootComponent__ChangeLimitCountBySpoilerProtection(this, v17);
  Instance = this->fields.myFSM;
  if ( !Instance )
    goto LABEL_14;
  v18 = &StringLiteral_11197/*"REQUEST_OK"*/;
LABEL_13:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v18, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendRootComponent__EndShowServant(
        FriendRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v14; // x21
  const MethodInfo *v15; // x3
  __int64 v16; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x2
  Il2CppObject *Instance; // x20
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  System_Action_o *v23; // x21

  if ( (byte_4B11475 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, method);
    sub_1BCA7E0(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_FriendRootComponent_EndCloseShowServant__, v7, v8);
    sub_1BCA7E0(&Method_FriendRootComponent_OnSelectFriendItem__, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11, v12);
    byte_4B11475 = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v14 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                               FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                               isDecide,
                                                               method,
                                                               v3);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v14,
    (Il2CppObject *)this,
    (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
    v15);
  if ( !operationItemListViewManager
    || (operationItemListViewManager->fields.callbackFunc = v14,
        sub_1BCA784(&operationItemListViewManager->fields.callbackFunc, v14),
        FriendOperationItemListViewManager__SetMode_31475908(operationItemListViewManager, 5, v18),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v23 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v20, v21, v22),
        System_Action___ctor(v23, (Il2CppObject *)this, Method_FriendRootComponent_EndCloseShowServant__, 0LL),
        !Instance) )
  {
    sub_1BCAA3C(v16, v17);
  }
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v23, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendRootComponent__EndShowServantEquip(
        FriendRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  System_Action_o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1

  if ( (byte_4B1149F & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, method);
    sub_1BCA7E0(&Method_FriendRootComponent_EndCloseShowServantEquip__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    byte_4B1149F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v9, v10, v11);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_FriendRootComponent_EndCloseShowServantEquip__, 0LL);
  if ( !Instance )
    sub_1BCAA3C(v13, v14);
  CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)Instance, v12, 0LL);
}


void __fastcall FriendRootComponent__FriendLockRequst(
        FriendRootComponent_o *this,
        System_Action_string__o *onFinishedRequest,
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
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x20
  ListViewManager_o *operationItemListViewManager; // x0
  const MethodInfo *v28; // x1
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  System_Collections_Generic_List_long__o *v32; // x21
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  System_Collections_Generic_List_long__o *v36; // x22
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  System_Collections_Generic_List_long__o *v40; // x23
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  System_Collections_Generic_List_long__o *v44; // x24
  int32_t ItemSum; // w0
  const MethodInfo *v46; // x2
  __int64 v47; // x3
  int32_t v48; // w25
  float x; // w8
  ListViewManager_o *v50; // x26
  struct UnityEngine_GameObject_o *dragParentObject; // x8
  struct System_Int64_array *items; // x8
  _QWORD *v53; // x9
  __int64 size; // x10
  Il2CppClass **v55; // x8
  struct UnityEngine_GameObject_o *v56; // x8
  struct System_Int64_array *v57; // x8
  _QWORD *v58; // x9
  __int64 v59; // x10
  struct System_Int64_array *v60; // x8
  _QWORD *v61; // x9
  __int64 v62; // x10
  struct System_Int64_array *v63; // x8
  _QWORD *v64; // x9
  __int64 v65; // x10
  __int64 v66; // x8
  System_Collections_Generic_List_long__o *v67; // x0
  NetworkManager_ResultCallbackFunc_o *v68; // x19
  __int64 v69; // x1
  FirendLockSyncRequest_o *v70; // x19
  System_Int64_array *v71; // x20
  System_Int64_array *v72; // x21
  System_Int64_array *v73; // x22

  if ( (byte_4B1149C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ActionExtensions_Call_string___, onFinishedRequest, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__Add__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__ToArray__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long___ctor__, v10, v11);
    sub_1BCA7E0(&System_Collections_Generic_List_long__TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_FirendLockSyncRequest___, v14, v15);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v16, v17);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v18, v19);
    sub_1BCA7E0(&Method_FriendRootComponent___c__DisplayClass113_0__FriendLockRequst_b__0__, v20, v21);
    sub_1BCA7E0(&FriendRootComponent___c__DisplayClass113_0_TypeInfo, v22, v23);
    sub_1BCA7E0(&StringLiteral_22465/*"ok"*/, v24, v25);
    byte_4B1149C = 1;
  }
  v26 = sub_1BCAA2C(FriendRootComponent___c__DisplayClass113_0_TypeInfo, onFinishedRequest, method, v3);
  System_Object___ctor((Il2CppObject *)v26, 0LL);
  if ( !v26 )
    goto LABEL_49;
  *(_QWORD *)(v26 + 16) = this;
  sub_1BCA784(v26 + 16, this);
  *(_QWORD *)(v26 + 32) = onFinishedRequest;
  sub_1BCA784(v26 + 32, onFinishedRequest);
  operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    goto LABEL_49;
  if ( FriendOperationItemListViewManager__get_IsExistSwapLockUser(
         (FriendOperationItemListViewManager_o *)operationItemListViewManager,
         v28) )
  {
    v32 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_long__TypeInfo,
                                                       v29,
                                                       v30,
                                                       v31);
    System_Collections_Generic_List_long____ctor(
      v32,
      (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
    v36 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_long__TypeInfo,
                                                       v33,
                                                       v34,
                                                       v35);
    System_Collections_Generic_List_long____ctor(
      v36,
      (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
    v40 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_long__TypeInfo,
                                                       v37,
                                                       v38,
                                                       v39);
    System_Collections_Generic_List_long____ctor(
      v40,
      (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
    v44 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_long__TypeInfo,
                                                       v41,
                                                       v42,
                                                       v43);
    System_Collections_Generic_List_long____ctor(
      v44,
      (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
    operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
    if ( operationItemListViewManager )
    {
      ItemSum = ListViewManager__get_ItemSum(operationItemListViewManager, 0LL);
      *(_DWORD *)(v26 + 24) = ItemSum;
      if ( ItemSum >= 1 )
      {
        v48 = 0;
        while ( 1 )
        {
          operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
          if ( !operationItemListViewManager )
            goto LABEL_49;
          operationItemListViewManager = (ListViewManager_o *)FriendOperationItemListViewManager__GetItem(
                                                                (FriendOperationItemListViewManager_o *)operationItemListViewManager,
                                                                v48,
                                                                v46);
          if ( !operationItemListViewManager )
            goto LABEL_49;
          x = operationItemListViewManager->fields.clipRange.fields.x;
          v50 = operationItemListViewManager;
          if ( LODWORD(x) == 9 )
            break;
          if ( LODWORD(x) == 3 )
          {
            operationItemListViewManager = (ListViewManager_o *)FriendOperationItemListViewItem__get_IsLockDisp(
                                                                  (FriendOperationItemListViewItem_o *)operationItemListViewManager,
                                                                  0LL);
            dragParentObject = v50->fields.dragParentObject;
            if ( !dragParentObject )
              goto LABEL_49;
            v28 = *(const MethodInfo **)&dragParentObject->fields.m_CachedPtr;
            if ( ((unsigned __int8)operationItemListViewManager & 1) != 0 )
            {
              if ( !v32 )
                goto LABEL_49;
              items = v32->fields._items;
              v53 = Method_System_Collections_Generic_List_long__Add__;
              ++v32->fields._version;
              if ( !items )
                goto LABEL_49;
              size = v32->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                v66 = v53[4];
                v67 = v32;
LABEL_38:
                System_Collections_Generic_List_long___AddWithResize(
                  v67,
                  (int64_t)v28,
                  *(const MethodInfo_3589C90 **)(*(_QWORD *)(v66 + 192) + 112LL));
                goto LABEL_39;
              }
              v55 = &items->obj.klass + size;
              v32->fields._size = size + 1;
            }
            else
            {
              if ( !v36 )
                goto LABEL_49;
              v60 = v36->fields._items;
              v61 = Method_System_Collections_Generic_List_long__Add__;
              ++v36->fields._version;
              if ( !v60 )
                goto LABEL_49;
              v62 = v36->fields._size;
              if ( (unsigned int)v62 >= v60->max_length )
              {
                v66 = v61[4];
                v67 = v36;
                goto LABEL_38;
              }
              v55 = &v60->obj.klass + v62;
              v36->fields._size = v62 + 1;
            }
LABEL_33:
            v55[4] = (Il2CppClass *)v28;
          }
LABEL_39:
          if ( ++v48 >= *(_DWORD *)(v26 + 24) )
            goto LABEL_40;
        }
        operationItemListViewManager = (ListViewManager_o *)FriendOperationItemListViewItem__get_IsLockDisp(
                                                              (FriendOperationItemListViewItem_o *)operationItemListViewManager,
                                                              0LL);
        v56 = v50->fields.dragParentObject;
        if ( !v56 )
          goto LABEL_49;
        v28 = *(const MethodInfo **)&v56->fields.m_CachedPtr;
        if ( ((unsigned __int8)operationItemListViewManager & 1) != 0 )
        {
          if ( !v40 )
            goto LABEL_49;
          v57 = v40->fields._items;
          v58 = Method_System_Collections_Generic_List_long__Add__;
          ++v40->fields._version;
          if ( !v57 )
            goto LABEL_49;
          v59 = v40->fields._size;
          if ( (unsigned int)v59 >= v57->max_length )
          {
            v66 = v58[4];
            v67 = v40;
            goto LABEL_38;
          }
          v55 = &v57->obj.klass + v59;
          v40->fields._size = v59 + 1;
        }
        else
        {
          if ( !v44 )
            goto LABEL_49;
          v63 = v44->fields._items;
          v64 = Method_System_Collections_Generic_List_long__Add__;
          ++v44->fields._version;
          if ( !v63 )
            goto LABEL_49;
          v65 = v44->fields._size;
          if ( (unsigned int)v65 >= v63->max_length )
          {
            v66 = v64[4];
            v67 = v44;
            goto LABEL_38;
          }
          v55 = &v63->obj.klass + v65;
          v44->fields._size = v65 + 1;
        }
        goto LABEL_33;
      }
LABEL_40:
      v68 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(
                                                     NetworkManager_ResultCallbackFunc_TypeInfo,
                                                     v28,
                                                     v46,
                                                     v47);
      NetworkManager_ResultCallbackFunc___ctor(
        v68,
        (Il2CppObject *)v26,
        Method_FriendRootComponent___c__DisplayClass113_0__FriendLockRequst_b__0__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v69);
      operationItemListViewManager = (ListViewManager_o *)NetworkManager__getRequest_object_(
                                                            v68,
                                                            (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_FirendLockSyncRequest___);
      if ( v32 )
      {
        v70 = (FirendLockSyncRequest_o *)operationItemListViewManager;
        operationItemListViewManager = (ListViewManager_o *)System_Collections_Generic_List_long___ToArray(
                                                              v32,
                                                              (const MethodInfo_358B748 *)Method_System_Collections_Generic_List_long__ToArray__);
        if ( v36 )
        {
          v71 = (System_Int64_array *)operationItemListViewManager;
          operationItemListViewManager = (ListViewManager_o *)System_Collections_Generic_List_long___ToArray(
                                                                v36,
                                                                (const MethodInfo_358B748 *)Method_System_Collections_Generic_List_long__ToArray__);
          if ( v40 )
          {
            v72 = (System_Int64_array *)operationItemListViewManager;
            operationItemListViewManager = (ListViewManager_o *)System_Collections_Generic_List_long___ToArray(
                                                                  v40,
                                                                  (const MethodInfo_358B748 *)Method_System_Collections_Generic_List_long__ToArray__);
            if ( v44 )
            {
              v73 = (System_Int64_array *)operationItemListViewManager;
              operationItemListViewManager = (ListViewManager_o *)System_Collections_Generic_List_long___ToArray(
                                                                    v44,
                                                                    (const MethodInfo_358B748 *)Method_System_Collections_Generic_List_long__ToArray__);
              if ( v70 )
              {
                FirendLockSyncRequest__beginRequest(
                  v70,
                  v71,
                  v72,
                  v73,
                  (System_Int64_array *)operationItemListViewManager,
                  0LL);
                return;
              }
            }
          }
        }
      }
    }
LABEL_49:
    sub_1BCAA3C(operationItemListViewManager, v28);
  }
  ActionExtensions__Call_object_(
    *(System_Action_T__o **)(v26 + 32),
    (Il2CppObject *)StringLiteral_22465/*"ok"*/,
    (const MethodInfo_2E65588 *)Method_ActionExtensions_Call_string___);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall FriendRootComponent__GetDisplayPositionModeKindButtons(
        FriendRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  FriendRootComponent_o *v3; // x19
  struct UISprite_o *modeEditLockSprite; // x8
  int mWidth; // w20
  float v6; // s1
  float v7; // s8
  __int64 v8; // x1
  float z; // s9
  float v10; // s10
  __int64 v11; // x1
  float v12; // s1
  float v13; // s2
  float v14; // s0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  v3 = this;
  if ( (byte_4B11497 & 1) == 0 )
  {
    this = (FriendRootComponent_o *)sub_1BCA7E0(&FSUtility_TypeInfo, method, v2);
    byte_4B11497 = 1;
  }
  modeEditLockSprite = v3->fields.modeEditLockSprite;
  if ( !modeEditLockSprite
    || (this = (FriendRootComponent_o *)v3->fields.modeButtonParent) == 0LL
    || (mWidth = modeEditLockSprite->fields.mWidth,
        (this = (FriendRootComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)(&v6 - 1) = UnityEngine_Transform__get_localPosition(
                                                (UnityEngine_Transform_o *)this,
                                                0LL),
        (this = (FriendRootComponent_o *)v3->fields.modeButtonParent) == 0LL)
    || (v7 = v6,
        (this = (FriendRootComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL)) == 0LL) )
  {
    sub_1BCAA3C(this, method);
  }
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  z = localPosition.fields.z;
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, v8);
  v10 = (float)mWidth;
  if ( !FSUtility__IsUnderVista(0LL) )
  {
    if ( !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, v11);
    v10 = v10 - FSUtility__GetOffsetX(74.0, 1, 0LL);
  }
  v12 = v7;
  v13 = z;
  v14 = v10;
  result.fields.z = v13;
  result.fields.y = v12;
  result.fields.x = v14;
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
    sub_1BCAA3C(modeButtonParent, method);
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
    sub_1BCAA3C(modeButtonParent, method);
  }
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v7, 0LL);
}


void __fastcall FriendRootComponent__OnClickBack(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  int32_t state; // w8
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  FriendRootComponent_messageRequestCallback_o *v14; // x20
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x2

  if ( (byte_4B11492 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_FriendRootComponent_OnClickBack__, method, v2);
    sub_1BCA7E0(&Method_FriendRootComponent__OnClickBack_b__100_0__, v4, v5);
    sub_1BCA7E0(&FriendRootComponent_messageRequestCallback_TypeInfo, v6, v7);
    byte_4B11492 = 1;
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
  v9 = Method_FriendRootComponent_OnClickBack__;
  if ( (*((_BYTE *)Method_FriendRootComponent_OnClickBack__ + 83) & 2) != 0 )
    v9 = (_QWORD *)sub_1BCA7F8(Method_FriendRootComponent_OnClickBack__);
  v10 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v9, v9[4]);
  OverwriteAssetSoundName__PlaySystemSe(v10, 1, 0LL);
  v14 = (FriendRootComponent_messageRequestCallback_o *)sub_1BCAA2C(
                                                          FriendRootComponent_messageRequestCallback_TypeInfo,
                                                          v11,
                                                          v12,
                                                          v13);
  FriendRootComponent_messageRequestCallback___ctor(
    v14,
    (Il2CppObject *)this,
    Method_FriendRootComponent__OnClickBack_b__100_0__,
    v15);
  FriendRootComponent__messageDispChangeRequest(this, v14, v16);
}


void __fastcall FriendRootComponent__OnClickHelp(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0

  if ( (byte_4B114BB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_FriendRootComponent_OnClickHelp__, method, v2);
    byte_4B114BB = 1;
  }
  v3 = Method_FriendRootComponent_OnClickHelp__;
  if ( (*((_BYTE *)Method_FriendRootComponent_OnClickHelp__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1BCA7F8(Method_FriendRootComponent_OnClickHelp__);
  v4 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  EventTutorialMaster__ShowTutorialWithoutCheck(-1, 49, 0LL, 0LL);
}


void __fastcall FriendRootComponent__OnClickModeEditLock(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4B11495 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_FriendRootComponent_OnClickModeEditLock__, method, v2);
    byte_4B11495 = 1;
  }
  if ( this->fields.currentModeKind != 1 )
  {
    v4 = Method_FriendRootComponent_OnClickModeEditLock__;
    if ( (*((_BYTE *)Method_FriendRootComponent_OnClickModeEditLock__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_FriendRootComponent_OnClickModeEditLock__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    this->fields.currentModeKind = 1;
    FriendRootComponent__RefreshInfo(this, v6);
  }
}


void __fastcall FriendRootComponent__OnClickModeUserDetail(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_object__o *v7; // x20
  const MethodInfo *v8; // x2

  if ( (byte_4B11494 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_string__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_FriendRootComponent__OnClickModeUserDetail_b__102_0__, v5, v6);
    byte_4B11494 = 1;
  }
  if ( this->fields.currentModeKind )
  {
    v7 = (System_Action_object__o *)sub_1BCAA2C(System_Action_string__TypeInfo, method, v2, v3);
    System_Action_object____ctor(
      v7,
      (Il2CppObject *)this,
      (intptr_t)Method_FriendRootComponent__OnClickModeUserDetail_b__102_0__,
      0LL);
    FriendRootComponent__FriendLockRequst(this, (System_Action_string__o *)v7, v8);
  }
}


void __fastcall FriendRootComponent__OnClickTabFriend(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_object__o *v7; // x20
  const MethodInfo *v8; // x2

  if ( (byte_4B11498 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_string__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_FriendRootComponent__OnClickTabFriend_b__109_0__, v5, v6);
    byte_4B11498 = 1;
  }
  v7 = (System_Action_object__o *)sub_1BCAA2C(System_Action_string__TypeInfo, method, v2, v3);
  System_Action_object____ctor(
    v7,
    (Il2CppObject *)this,
    (intptr_t)Method_FriendRootComponent__OnClickTabFriend_b__109_0__,
    0LL);
  FriendRootComponent__FriendLockRequst(this, (System_Action_string__o *)v7, v8);
}


void __fastcall FriendRootComponent__OnClickTabOffered(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  FriendRootComponent_messageRequestCallback_o *v7; // x20
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2

  if ( (byte_4B11499 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_FriendRootComponent__OnClickTabOffered_b__110_0__, method, v2);
    sub_1BCA7E0(&FriendRootComponent_messageRequestCallback_TypeInfo, v5, v6);
    byte_4B11499 = 1;
  }
  v7 = (FriendRootComponent_messageRequestCallback_o *)sub_1BCAA2C(
                                                         FriendRootComponent_messageRequestCallback_TypeInfo,
                                                         method,
                                                         v2,
                                                         v3);
  FriendRootComponent_messageRequestCallback___ctor(
    v7,
    (Il2CppObject *)this,
    Method_FriendRootComponent__OnClickTabOffered_b__110_0__,
    v8);
  FriendRootComponent__messageDispChangeRequest(this, v7, v9);
}


void __fastcall FriendRootComponent__OnClickTabSearch(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  FriendRootComponent_messageRequestCallback_o *v7; // x20
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2

  if ( (byte_4B1149A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_FriendRootComponent__OnClickTabSearch_b__111_0__, method, v2);
    sub_1BCA7E0(&FriendRootComponent_messageRequestCallback_TypeInfo, v5, v6);
    byte_4B1149A = 1;
  }
  v7 = (FriendRootComponent_messageRequestCallback_o *)sub_1BCAA2C(
                                                         FriendRootComponent_messageRequestCallback_TypeInfo,
                                                         method,
                                                         v2,
                                                         v3);
  FriendRootComponent_messageRequestCallback___ctor(
    v7,
    (Il2CppObject *)this,
    Method_FriendRootComponent__OnClickTabSearch_b__111_0__,
    v8);
  FriendRootComponent__messageDispChangeRequest(this, v7, v9);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendRootComponent__OnEndRequestDialog(
        FriendRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  CommonUI_o *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4B1148C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, method);
    sub_1BCA7E0(&StringLiteral_11197/*"REQUEST_OK"*/, v4, v5);
    byte_4B1148C = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.myFSM) == 0LL) )
  {
    sub_1BCAA3C(Instance, v7);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_11197/*"REQUEST_OK"*/, 0LL);
}


void __fastcall FriendRootComponent__OnMoveEnd(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  FriendRootComponent_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  int32_t jumpTabKind; // w22
  int32_t v15; // w1
  FriendOperationItemListViewManager_o *v16; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v17; // x21
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x2
  FriendOperationItemListViewManager_o *v20; // x20
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  FriendOperationItemListViewManager_CallbackFunc_o *v24; // x21
  const MethodInfo *v25; // x3
  const MethodInfo *v26; // x2
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  FriendSearchMenu_o *friendSearchMenu; // x20
  FriendSearchMenu_CallbackFunc_o *v29; // x21
  const MethodInfo *v30; // x3
  const MethodInfo *v31; // x3
  FriendOperationItemListViewManager_o *v32; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v33; // x21
  const MethodInfo *v34; // x3
  const MethodInfo *v35; // x2
  const MethodInfo *v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  struct ClassButtonControlComponent_o *v39; // x8
  FriendSearchMenu_o *v40; // x20
  FriendSearchMenu_CallbackFunc_o *v41; // x21
  const MethodInfo *v42; // x3
  const MethodInfo *v43; // x3

  v4 = this;
  if ( (byte_4B11491 & 1) == 0 )
  {
    sub_1BCA7E0(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&FriendSearchMenu_CallbackFunc_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_FriendRootComponent_OnSelectFriendItem__, v7, v8);
    sub_1BCA7E0(&Method_FriendRootComponent_OnSelectSearchFriend__, v9, v10);
    this = (FriendRootComponent_o *)sub_1BCA7E0(&StringLiteral_5544/*"END_ACTION"*/, v11, v12);
    byte_4B11491 = 1;
  }
  switch ( v4->fields.state )
  {
    case 2:
    case 3:
      jumpTabKind = v4->fields.jumpTabKind;
      v4->fields.state = 4;
      if ( jumpTabKind != 3 )
        goto LABEL_15;
      v15 = 0;
      goto LABEL_14;
    case 5:
    case 6:
    case 0xA:
    case 0xB:
    case 0xF:
    case 0x10:
      operationItemListViewManager = v4->fields.operationItemListViewManager;
      v4->fields.state = 1;
      if ( !operationItemListViewManager )
        goto LABEL_39;
      FriendOperationItemListViewManager__DestroyList(operationItemListViewManager, method);
      operationItemListViewManager = v4->fields.operationItemListViewManager;
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
      v4->fields.state = 9;
      v16 = v4->fields.operationItemListViewManager;
      v17 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                                   FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                                   method,
                                                                   v2,
                                                                   v3);
      FriendOperationItemListViewManager_CallbackFunc___ctor(
        v17,
        (Il2CppObject *)v4,
        (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
        v18);
      if ( !v16 )
        goto LABEL_39;
      v16->fields.callbackFunc = v17;
      sub_1BCA784(&v16->fields.callbackFunc, v17);
      FriendOperationItemListViewManager__SetMode_31475908(v16, 2, v19);
LABEL_27:
      FriendRootComponent__RefreshInfo(v4, method);
      goto LABEL_28;
    case 0xC:
    case 0xD:
      jumpTabKind = v4->fields.jumpTabKind;
      v4->fields.state = 14;
      if ( jumpTabKind != 3 )
        goto LABEL_15;
      v15 = 1;
LABEL_14:
      FriendRootComponent__set_tabKind(this, v15, v2);
LABEL_15:
      FriendRootComponent__RefreshTab(v4, method);
      v20 = v4->fields.operationItemListViewManager;
      v24 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                                   FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                                   v21,
                                                                   v22,
                                                                   v23);
      FriendOperationItemListViewManager_CallbackFunc___ctor(
        v24,
        (Il2CppObject *)v4,
        (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
        v25);
      if ( !v20 )
        goto LABEL_39;
      v20->fields.callbackFunc = v24;
      sub_1BCA784(&v20->fields.callbackFunc, v24);
      FriendOperationItemListViewManager__SetMode_31475908(v20, 2, v26);
      classButtonControl = v4->fields.classButtonControl;
      if ( !classButtonControl )
        goto LABEL_39;
      classButtonControl->fields.updateEnable = 1;
      FriendRootComponent__RefreshInfo(v4, method);
      goto LABEL_18;
    case 0x11:
      v4->fields.state = 18;
      return;
    case 0x12:
      v4->fields.state = 19;
      v32 = v4->fields.operationItemListViewManager;
      v33 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                                   FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                                   method,
                                                                   v2,
                                                                   v3);
      FriendOperationItemListViewManager_CallbackFunc___ctor(
        v33,
        (Il2CppObject *)v4,
        (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
        v34);
      if ( !v32 )
        goto LABEL_39;
      v32->fields.callbackFunc = v33;
      sub_1BCA784(&v32->fields.callbackFunc, v33);
      FriendOperationItemListViewManager__SetMode_31475908(v32, 2, v35);
      goto LABEL_28;
    case 0x14:
    case 0x15:
      v4->fields.state = 23;
      friendSearchMenu = v4->fields.friendSearchMenu;
      v29 = (FriendSearchMenu_CallbackFunc_o *)sub_1BCAA2C(FriendSearchMenu_CallbackFunc_TypeInfo, method, v2, v3);
      FriendSearchMenu_CallbackFunc___ctor(
        v29,
        (Il2CppObject *)v4,
        Method_FriendRootComponent_OnSelectSearchFriend__,
        v30);
      if ( !friendSearchMenu )
        goto LABEL_39;
      FriendSearchMenu__Open(friendSearchMenu, v29, 0, v31);
      operationItemListViewManager = v4->fields.operationItemListViewManager;
      if ( !operationItemListViewManager )
        goto LABEL_39;
      FriendOperationItemListViewManager__DestroyList(operationItemListViewManager, method);
      operationItemListViewManager = v4->fields.operationItemListViewManager;
      if ( !operationItemListViewManager )
        goto LABEL_39;
      operationItemListViewManager = (FriendOperationItemListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                               (UnityEngine_Component_o *)operationItemListViewManager,
                                                                               0LL);
      if ( !operationItemListViewManager )
        goto LABEL_39;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)operationItemListViewManager, 0, 0LL);
LABEL_28:
      operationItemListViewManager = (FriendOperationItemListViewManager_o *)v4->fields.myFSM;
      if ( !operationItemListViewManager )
        goto LABEL_39;
      PlayMakerFSM__SendEvent(
        (PlayMakerFSM_o *)operationItemListViewManager,
        (System_String_o *)StringLiteral_5544/*"END_ACTION"*/,
        0LL);
      break;
    case 0x16:
      jumpTabKind = v4->fields.jumpTabKind;
      v4->fields.state = 23;
      if ( jumpTabKind == 3 )
        FriendRootComponent__set_tabKind(this, 2, v2);
      FriendRootComponent__RefreshTab(v4, method);
      FriendRootComponent__RefreshInfo(v4, v36);
      v39 = v4->fields.classButtonControl;
      if ( !v39 )
        goto LABEL_39;
      v39->fields.updateEnable = 1;
      v40 = v4->fields.friendSearchMenu;
      v41 = (FriendSearchMenu_CallbackFunc_o *)sub_1BCAA2C(FriendSearchMenu_CallbackFunc_TypeInfo, method, v37, v38);
      FriendSearchMenu_CallbackFunc___ctor(
        v41,
        (Il2CppObject *)v4,
        Method_FriendRootComponent_OnSelectSearchFriend__,
        v42);
      if ( !v40 )
        goto LABEL_39;
      FriendSearchMenu__Open(v40, v41, 1, v43);
LABEL_18:
      operationItemListViewManager = (FriendOperationItemListViewManager_o *)v4->fields.myFSM;
      if ( !operationItemListViewManager )
LABEL_39:
        sub_1BCAA3C(operationItemListViewManager, method);
      PlayMakerFSM__SendEvent(
        (PlayMakerFSM_o *)operationItemListViewManager,
        (System_String_o *)StringLiteral_5544/*"END_ACTION"*/,
        0LL);
      if ( jumpTabKind != 3 )
        v4->fields.jumpTabKind = 3;
      break;
    case 0x18:
    case 0x19:
      v4->fields.state = 1;
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
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
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  UserGameEntity_o *SelfUserGame; // x21
  DataManager_o *Instance; // x0
  const MethodInfo *v57; // x1
  const MethodInfo *v58; // x2
  Il2CppObject *MasterData_object; // x22
  __int64 v60; // x8
  __int64 v61; // x20
  SkillInfo_o *v62; // x22
  _QWORD *v63; // x0
  System_Reflection_MethodBase_o *v64; // x0
  __int64 v65; // x1
  __int64 v66; // x1
  System_String_o *v67; // x20
  System_String_o *v68; // x21
  Il2CppObject *v69; // x0
  System_String_o *v70; // x0
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x3
  _QWORD *v74; // x0
  System_Reflection_MethodBase_o *v75; // x0
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v77; // x0
  const MethodInfo *v78; // x3
  intptr_t v79; // w2
  _QWORD *v80; // x0
  System_Reflection_MethodBase_o *v81; // x0
  const MethodInfo *v82; // x2
  FriendOperationItemListViewItem_o *v83; // x21
  Il2CppObject *lockCountObj; // x8
  __int64 v85; // x2
  __int64 v86; // x3
  __int64 v87; // x20
  SkillInfo_o *v88; // x25
  Il2CppObject *Entity; // x21
  DataManager_o *v90; // x20
  __int64 v91; // x1
  System_String_o *v92; // x21
  System_String_o *v93; // x22
  Il2CppObject *v94; // x0
  System_String_o *v95; // x0
  System_String_o *v96; // x21
  Il2CppObject *v97; // x0
  System_String_o *v98; // x20
  _QWORD *v99; // x0
  System_Reflection_MethodBase_o *v100; // x0
  __int64 v101; // x2
  __int64 v102; // x3
  __int64 *v103; // x8
  _QWORD *v104; // x0
  System_Reflection_MethodBase_o *v105; // x0
  _QWORD *v106; // x0
  System_Reflection_MethodBase_o *v107; // x0
  _QWORD *v108; // x0
  System_Reflection_MethodBase_o *v109; // x0
  _QWORD *v110; // x0
  System_Reflection_MethodBase_o *v111; // x0
  const MethodInfo *v112; // x2
  DataManager_o *v113; // x8
  const MethodInfo *v114; // x2
  _QWORD *v115; // x0
  System_Reflection_MethodBase_o *v116; // x0
  const MethodInfo *v117; // x2
  DataManager_o *v118; // x8
  Il2CppObject *v119; // x9
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  __int64 v121; // x1
  const MethodInfo *v122; // x2
  __int64 v123; // x3
  _QWORD *v124; // x0
  System_Reflection_MethodBase_o *v125; // x0
  const MethodInfo *v126; // x2
  FriendOperationItemListViewItem_o *v127; // x20
  ServantLeaderInfo_o *ServantLeader; // x0
  EquipTargetInfo_o *EquipTargetInfo; // x0
  __int64 v130; // x1
  EquipTargetInfo_o *v131; // x21
  __int64 v132; // x22
  __int64 v133; // x23
  _QWORD *v134; // x0
  System_Reflection_MethodBase_o *v135; // x0
  const MethodInfo *v136; // x3
  int32_t v137; // w2
  FriendWarningDialog_o *friendWarningDialog; // x20
  FriendWarningDialog_CallbackFunc_o *v139; // x21
  const MethodInfo *v140; // x3
  const MethodInfo *v141; // x3
  _QWORD *v142; // x0
  System_Reflection_MethodBase_o *v143; // x0
  struct FriendOperationItemListViewManager_CallbackFunc_o *v144; // x21
  const MethodInfo *v145; // x2
  FriendOperationItemListViewItem_o *Item; // x0
  FriendOperationItemListViewItem_o *v147; // x20
  _QWORD *v148; // x0
  System_Reflection_MethodBase_o *v149; // x0
  int m_CancellationTokenSource; // [xsp+8h] [xbp-78h] BYREF
  int32_t lv; // [xsp+Ch] [xbp-74h] BYREF
  System_String_o *detail; // [xsp+10h] [xbp-70h] BYREF
  System_String_o *name; // [xsp+18h] [xbp-68h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+20h] [xbp-60h] BYREF
  System_String_o *v155; // [xsp+28h] [xbp-58h] BYREF
  System_String_o *v156; // [xsp+30h] [xbp-50h] BYREF
  SkillInfo_array *v157; // [xsp+38h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v158; // 0:x0.16

  if ( (byte_4B114A1 & 1) == 0 )
  {
    sub_1BCA7E0(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&kind, *(_QWORD *)&n);
    sub_1BCA7E0(&FriendWarningDialog_CallbackFunc_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SkillLvMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SkillMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_TblFriendMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataManager_GetMaster_SkillMaster___, v15, v16);
    sub_1BCA7E0(&DataManager_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v19, v20);
    sub_1BCA7E0(&Method_FriendRootComponent_EndMaxFriendWarning__, v21, v22);
    sub_1BCA7E0(&Method_FriendRootComponent_OnSelectFriendItem__, v23, v24);
    sub_1BCA7E0(&int_TypeInfo, v25, v26);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v27, v28);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v29, v30);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v31, v32);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v33, v34);
    sub_1BCA7E0(&StringLiteral_8752/*"MENU_SELECT_ITEM_ACCEPT"*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_116/*" "*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_8758/*"MENU_SELECT_ITEM_REMOVE_FOLLOW"*/, v39, v40);
    sub_1BCA7E0(&StringLiteral_8753/*"MENU_SELECT_ITEM_CANCEL"*/, v41, v42);
    sub_1BCA7E0(&StringLiteral_8648/*"MASTER_EQSKILL_LV_TXT"*/, v43, v44);
    sub_1BCA7E0(&StringLiteral_8755/*"MENU_SELECT_ITEM_OFFER"*/, v45, v46);
    sub_1BCA7E0(&StringLiteral_3004/*"BATTLE_SKILLCHARGETURN"*/, v47, v48);
    sub_1BCA7E0(&StringLiteral_8756/*"MENU_SELECT_ITEM_REJECT"*/, v49, v50);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v51, v52);
    sub_1BCA7E0(&StringLiteral_8757/*"MENU_SELECT_ITEM_REMOVE"*/, v53, v54);
    byte_4B114A1 = 1;
  }
  v156 = 0LL;
  v157 = 0LL;
  skillInfoList = 0LL;
  v155 = 0LL;
  detail = 0LL;
  name = 0LL;
  this->fields.selectItemNum = n;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_133;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_TblFriendMaster___);
  switch ( kind )
  {
    case 1:
    case 2:
    case 3:
      v80 = Method_FriendRootComponent_OnSelectFriendItem__;
      if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
        v80 = (_QWORD *)sub_1BCA7F8(Method_FriendRootComponent_OnSelectFriendItem__);
      v81 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v80, v80[4]);
      OverwriteAssetSoundName__PlaySystemSe(v81, 0, 0LL);
      Instance = (DataManager_o *)this->fields.operationItemListViewManager;
      if ( !Instance )
        goto LABEL_133;
      Instance = (DataManager_o *)FriendOperationItemListViewManager__GetItem(
                                    (FriendOperationItemListViewManager_o *)Instance,
                                    this->fields.selectItemNum,
                                    v82);
      if ( !Instance )
        goto LABEL_133;
      v83 = (FriendOperationItemListViewItem_o *)Instance;
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
              v83->fields.classPos,
              0,
              0,
              (int32_t)lockCountObj[2].klass,
              0LL) )
        goto LABEL_55;
      if ( kind == 2 )
        v87 = 1LL;
      else
        v87 = 2LL * (kind == 3);
      Instance = (DataManager_o *)FriendOperationItemListViewItem__GetSkillInfo(v83, &v157, 0LL);
      if ( !v157 )
        goto LABEL_133;
      if ( (unsigned int)v87 >= v157->max_length )
        goto LABEL_134;
      v88 = v157->m_Items[v87];
      if ( !v88 || v88->fields.id < 1 || v88->fields.lv < 1 )
        goto LABEL_55;
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_133;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SkillMaster___);
      if ( !Instance )
        goto LABEL_133;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                 v88->fields.id,
                 (const MethodInfo_31B2E40 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_133;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SkillLvMaster___);
      if ( !Instance )
        goto LABEL_133;
      Instance = (DataManager_o *)SkillLvMaster__GetEntity(
                                    (SkillLvMaster_o *)Instance,
                                    v88->fields.id,
                                    v88->fields.lv,
                                    0LL);
      if ( !Entity )
        goto LABEL_133;
      v90 = Instance;
      SkillEntity__getSkillMessageInfo((SkillEntity_o *)Entity, &v156, &v155, v88->fields.lv, 0LL);
      v92 = v156;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v91);
      v93 = LocalizationManager__Get((System_String_o *)StringLiteral_8648/*"MASTER_EQSKILL_LV_TXT"*/, 0LL);
      lv = v88->fields.lv;
      v94 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv);
      v95 = System_String__Format(v93, v94, 0LL);
      v156 = System_String__Concat_62412480(v92, (System_String_o *)StringLiteral_116/*" "*/, v95, 0LL);
      Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3004/*"BATTLE_SKILLCHARGETURN"*/, 0LL);
      if ( !v90 )
        goto LABEL_133;
      v96 = (System_String_o *)Instance;
      m_CancellationTokenSource = (int)v90->fields.m_CancellationTokenSource;
      v97 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &m_CancellationTokenSource);
      v98 = System_String__Format(v96, v97, 0LL);
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !Instance )
        goto LABEL_133;
      CommonUI__OpenDetailLongInfoDialog((CommonUI_o *)Instance, v156, v98, v155, 1, 0, 0LL);
LABEL_55:
      operationItemListViewManager = this->fields.operationItemListViewManager;
      v77 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                                   FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                                   v57,
                                                                   v85,
                                                                   v86);
      v79 = (int)Method_FriendRootComponent_OnSelectFriendItem__;
      goto LABEL_123;
    case 4:
      v99 = Method_FriendRootComponent_OnSelectFriendItem__;
      if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
        v99 = (_QWORD *)sub_1BCA7F8(Method_FriendRootComponent_OnSelectFriendItem__);
      v100 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v99, v99[4]);
      OverwriteAssetSoundName__PlaySystemSe(v100, 0, 0LL);
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
      v103 = &StringLiteral_8755/*"MENU_SELECT_ITEM_OFFER"*/;
      goto LABEL_126;
    case 5:
      v104 = Method_FriendRootComponent_OnSelectFriendItem__;
      if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
        v104 = (_QWORD *)sub_1BCA7F8(Method_FriendRootComponent_OnSelectFriendItem__);
      v105 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v104, v104[4]);
      OverwriteAssetSoundName__PlaySystemSe(v105, 0, 0LL);
      if ( !MasterData_object )
        goto LABEL_133;
      Instance = (DataManager_o *)TblFriendMaster__GetList((TblFriendMaster_o *)MasterData_object, 3, 0LL);
      if ( !Instance || !SelfUserGame )
        goto LABEL_133;
      if ( SelfUserGame->fields.friendKeep <= SLODWORD(Instance->fields.m_CancellationTokenSource) )
      {
LABEL_117:
        friendWarningDialog = this->fields.friendWarningDialog;
        v139 = (FriendWarningDialog_CallbackFunc_o *)sub_1BCAA2C(
                                                       FriendWarningDialog_CallbackFunc_TypeInfo,
                                                       v57,
                                                       v101,
                                                       v102);
        FriendWarningDialog_CallbackFunc___ctor(
          v139,
          (Il2CppObject *)this,
          Method_FriendRootComponent_EndMaxFriendWarning__,
          v140);
        if ( friendWarningDialog )
        {
          FriendWarningDialog__Open(friendWarningDialog, 1, v139, v141);
          return;
        }
LABEL_133:
        sub_1BCAA3C(Instance, v57);
      }
      Instance = (DataManager_o *)this->fields.myFSM;
      if ( !Instance )
        goto LABEL_133;
      v103 = &StringLiteral_8752/*"MENU_SELECT_ITEM_ACCEPT"*/;
LABEL_126:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v103, 0LL);
      return;
    case 6:
      v106 = Method_FriendRootComponent_OnSelectFriendItem__;
      if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
        v106 = (_QWORD *)sub_1BCA7F8(Method_FriendRootComponent_OnSelectFriendItem__);
      v107 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v106, v106[4]);
      OverwriteAssetSoundName__PlaySystemSe(v107, 0, 0LL);
      Instance = (DataManager_o *)this->fields.myFSM;
      if ( !Instance )
        goto LABEL_133;
      v103 = &StringLiteral_8756/*"MENU_SELECT_ITEM_REJECT"*/;
      goto LABEL_126;
    case 7:
      v108 = Method_FriendRootComponent_OnSelectFriendItem__;
      if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
        v108 = (_QWORD *)sub_1BCA7F8(Method_FriendRootComponent_OnSelectFriendItem__);
      v109 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v108, v108[4]);
      OverwriteAssetSoundName__PlaySystemSe(v109, 0, 0LL);
      Instance = (DataManager_o *)this->fields.myFSM;
      if ( !Instance )
        goto LABEL_133;
      v103 = &StringLiteral_8753/*"MENU_SELECT_ITEM_CANCEL"*/;
      goto LABEL_126;
    case 8:
      v110 = Method_FriendRootComponent_OnSelectFriendItem__;
      if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
        v110 = (_QWORD *)sub_1BCA7F8(Method_FriendRootComponent_OnSelectFriendItem__);
      v111 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v110, v110[4]);
      OverwriteAssetSoundName__PlaySystemSe(v111, 0, 0LL);
      Instance = (DataManager_o *)this->fields.operationItemListViewManager;
      if ( !Instance )
        goto LABEL_133;
      Instance = (DataManager_o *)FriendOperationItemListViewManager__GetItem(
                                    (FriendOperationItemListViewManager_o *)Instance,
                                    this->fields.selectItemNum,
                                    v112);
      if ( !Instance )
        goto LABEL_133;
      v113 = Instance;
      Instance = (DataManager_o *)this->fields.myFSM;
      if ( !Instance )
        goto LABEL_133;
      if ( LODWORD(v113->fields.masterLoadThreads) == 9 )
        v103 = &StringLiteral_8758/*"MENU_SELECT_ITEM_REMOVE_FOLLOW"*/;
      else
        v103 = &StringLiteral_8757/*"MENU_SELECT_ITEM_REMOVE"*/;
      goto LABEL_126;
    case 11:
      v124 = Method_FriendRootComponent_OnSelectFriendItem__;
      if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
        v124 = (_QWORD *)sub_1BCA7F8(Method_FriendRootComponent_OnSelectFriendItem__);
      v125 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v124, v124[4]);
      OverwriteAssetSoundName__PlaySystemSe(v125, 0, 0LL);
      Instance = (DataManager_o *)this->fields.operationItemListViewManager;
      if ( !Instance )
        goto LABEL_133;
      Instance = (DataManager_o *)FriendOperationItemListViewManager__GetItem(
                                    (FriendOperationItemListViewManager_o *)Instance,
                                    this->fields.selectItemNum,
                                    v126);
      if ( !Instance )
        goto LABEL_133;
      FriendOperationItemListViewItem__set_isSwapMessageDisp(
        (FriendOperationItemListViewItem_o *)Instance,
        LOBYTE(Instance[1].fields.m_CancellationTokenSource) == 0,
        0LL);
      goto LABEL_122;
    case 12:
      Instance = (DataManager_o *)this->fields.operationItemListViewManager;
      if ( !Instance )
        goto LABEL_133;
      Instance = (DataManager_o *)FriendOperationItemListViewManager__GetItem(
                                    (FriendOperationItemListViewManager_o *)Instance,
                                    this->fields.selectItemNum,
                                    v58);
      if ( !Instance )
        goto LABEL_133;
      v127 = (FriendOperationItemListViewItem_o *)Instance;
      ServantLeader = FriendOperationItemListViewItem__get_ServantLeader(
                        (FriendOperationItemListViewItem_o *)Instance,
                        0LL);
      if ( !ServantLeader || !ServantLeaderInfo__IsHideEquip(ServantLeader, 0LL) )
      {
        EquipTargetInfo = FriendOperationItemListViewItem__get_EquipTargetInfo(v127, 0LL);
        if ( EquipTargetInfo )
        {
          v131 = EquipTargetInfo;
          v133 = *(_QWORD *)&EquipTargetInfo->fields.svtId.fields.currentCryptoKey;
          v132 = *(_QWORD *)&EquipTargetInfo->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v130);
          *(_QWORD *)&v158.fields.currentCryptoKey = v133;
          *(_QWORD *)&v158.fields.fakeValue = v132;
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v158, 0LL) >= 1 )
          {
            v134 = Method_FriendRootComponent_OnSelectFriendItem__;
            if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
              v134 = (_QWORD *)sub_1BCA7F8(Method_FriendRootComponent_OnSelectFriendItem__);
            v135 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v134, v134[4]);
            OverwriteAssetSoundName__PlaySystemSe(v135, 0, 0LL);
            if ( v127->fields.kind == 9 )
              v137 = 14;
            else
              v137 = 13;
            FriendRootComponent__SelectShowServantEquip(this, v131, v137, v136);
            return;
          }
        }
      }
      v142 = Method_FriendRootComponent_OnSelectFriendItem__;
      if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
        v142 = (_QWORD *)sub_1BCA7F8(Method_FriendRootComponent_OnSelectFriendItem__);
      v143 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v142, v142[4]);
      OverwriteAssetSoundName__PlaySystemSe(v143, 2, 0LL);
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
                                    v58);
      v60 = (unsigned int)(kind - 14);
      v61 = (unsigned int)v60 < 4 ? v60 + 1 : 0LL;
      if ( !Instance )
        goto LABEL_133;
      Instance = (DataManager_o *)FriendOperationItemListViewItem__GetAppendSkillInfo(
                                    (FriendOperationItemListViewItem_o *)Instance,
                                    &skillInfoList,
                                    0LL);
      if ( !skillInfoList )
        goto LABEL_133;
      if ( (unsigned int)v61 >= skillInfoList->max_length )
        goto LABEL_134;
      v62 = skillInfoList->m_Items[v61];
      if ( v62 && v62->fields.id >= 1 && v62->fields.lv >= 1 )
      {
        v63 = Method_FriendRootComponent_OnSelectFriendItem__;
        if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
          v63 = (_QWORD *)sub_1BCA7F8(Method_FriendRootComponent_OnSelectFriendItem__);
        v64 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v63, v63[4]);
        OverwriteAssetSoundName__PlaySystemSe(v64, 0, 0LL);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v65);
        Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_SkillMaster___);
        if ( !Instance )
          goto LABEL_133;
        Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                      v62->fields.id,
                                      (const MethodInfo_31B2E40 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_133;
        SkillEntity__getSkillMessageInfo((SkillEntity_o *)Instance, &name, &detail, v62->fields.lv, 0LL);
        v67 = name;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v66);
        v68 = LocalizationManager__Get((System_String_o *)StringLiteral_8648/*"MASTER_EQSKILL_LV_TXT"*/, 0LL);
        lv = v62->fields.lv;
        v69 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv);
        v70 = System_String__Format(v68, v69, 0LL);
        name = System_String__Concat_62412480(v67, (System_String_o *)StringLiteral_116/*" "*/, v70, 0LL);
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
        v74 = Method_FriendRootComponent_OnSelectFriendItem__;
        if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
          v74 = (_QWORD *)sub_1BCA7F8(Method_FriendRootComponent_OnSelectFriendItem__);
        v75 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v74, v74[4]);
        OverwriteAssetSoundName__PlaySystemSe(v75, 2, 0LL);
      }
      goto LABEL_28;
    default:
      if ( this->fields.currentModeKind == 1 && !FriendRootComponent__get_tabKind(this, v57) )
      {
        Instance = (DataManager_o *)this->fields.operationItemListViewManager;
        if ( !Instance )
          goto LABEL_133;
        Item = FriendOperationItemListViewManager__GetItem(
                 (FriendOperationItemListViewManager_o *)Instance,
                 this->fields.selectItemNum,
                 v114);
        if ( Item )
        {
          v147 = Item;
          v148 = Method_FriendRootComponent_OnSelectFriendItem__;
          if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
            v148 = (_QWORD *)sub_1BCA7F8(Method_FriendRootComponent_OnSelectFriendItem__);
          v149 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v148, v148[4]);
          OverwriteAssetSoundName__PlaySystemSe(v149, 11, 0LL);
          FriendOperationItemListViewItem__SwapLock(v147, 0LL);
        }
LABEL_28:
        operationItemListViewManager = this->fields.operationItemListViewManager;
        v77 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                                     FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                                     v71,
                                                                     v72,
                                                                     v73);
        v79 = (int)Method_FriendRootComponent_OnSelectFriendItem__;
      }
      else
      {
        v115 = Method_FriendRootComponent_OnSelectFriendItem__;
        if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
          v115 = (_QWORD *)sub_1BCA7F8(Method_FriendRootComponent_OnSelectFriendItem__);
        v116 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v115, v115[4]);
        OverwriteAssetSoundName__PlaySystemSe(v116, 0, 0LL);
        Instance = (DataManager_o *)this->fields.operationItemListViewManager;
        if ( !Instance )
          goto LABEL_133;
        Instance = (DataManager_o *)FriendOperationItemListViewManager__GetItem(
                                      (FriendOperationItemListViewManager_o *)Instance,
                                      this->fields.selectItemNum,
                                      v117);
        if ( !Instance )
          goto LABEL_133;
        v118 = Instance;
        Instance = (DataManager_o *)Instance->fields.context;
        if ( !Instance )
          goto LABEL_133;
        v119 = Instance->fields.lockCountObj;
        if ( !v119 )
          goto LABEL_133;
        if ( !LODWORD(v119[1].monitor) )
LABEL_134:
          sub_1BCAA44(Instance, v57);
        ServantLeaderInfo = OtherUserGameEntity__getServantLeaderInfo(
                              (OtherUserGameEntity_o *)Instance,
                              v118[1].fields.m_CachedPtr,
                              0,
                              0,
                              (int32_t)v119[2].klass,
                              0LL);
        if ( ServantLeaderInfo )
        {
          FriendRootComponent__SelectShowServant(this, ServantLeaderInfo, v122);
          return;
        }
LABEL_122:
        operationItemListViewManager = this->fields.operationItemListViewManager;
        v77 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                                     FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                                     v121,
                                                                     v122,
                                                                     v123);
        v79 = (int)Method_FriendRootComponent_OnSelectFriendItem__;
      }
LABEL_123:
      v144 = v77;
      FriendOperationItemListViewManager_CallbackFunc___ctor(v77, (Il2CppObject *)this, v79, v78);
      if ( operationItemListViewManager )
      {
        operationItemListViewManager->fields.callbackFunc = v144;
        sub_1BCA784(&operationItemListViewManager->fields.callbackFunc, v144);
        FriendOperationItemListViewManager__SetMode_31475908(operationItemListViewManager, 2, v145);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  ClassButtonControlComponent_o *classButtonControl; // x0
  __int64 *v12; // x8

  if ( (byte_4B114AB & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_8754/*"MENU_SELECT_ITEM_FOLLOW"*/, *(_QWORD *)&state, *(_QWORD *)&classPos);
    sub_1BCA7E0(&StringLiteral_8755/*"MENU_SELECT_ITEM_OFFER"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_8738/*"MENU_CANCEL"*/, v9, v10);
    byte_4B114AB = 1;
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
      v12 = &StringLiteral_8754/*"MENU_SELECT_ITEM_FOLLOW"*/;
      goto LABEL_12;
    }
LABEL_13:
    sub_1BCAA3C(classButtonControl, *(_QWORD *)&state);
  }
  if ( state != 2 )
  {
    classButtonControl = (ClassButtonControlComponent_o *)this->fields.myFSM;
    if ( classButtonControl )
    {
      v12 = &StringLiteral_8738/*"MENU_CANCEL"*/;
      goto LABEL_12;
    }
    goto LABEL_13;
  }
  classButtonControl = (ClassButtonControlComponent_o *)this->fields.myFSM;
  if ( !classButtonControl )
    goto LABEL_13;
  v12 = &StringLiteral_8755/*"MENU_SELECT_ITEM_OFFER"*/;
LABEL_12:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)classButtonControl, (System_String_o *)*v12, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendRootComponent__OnSelectSearchFriend(
        FriendRootComponent_o *this,
        bool isDecide,
        System_String_o *friendCode,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  PlayMakerFSM_o *myFSM; // x0
  __int64 *v11; // x8

  if ( (byte_4B114AA & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_8739/*"MENU_DECIDE"*/, isDecide, friendCode);
    sub_1BCA7E0(&StringLiteral_8738/*"MENU_CANCEL"*/, v7, v8);
    byte_4B114AA = 1;
  }
  this->fields.selectFriendCode = friendCode;
  sub_1BCA784(&this->fields.selectFriendCode, friendCode);
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1BCAA3C(0LL, v9);
  v11 = &StringLiteral_8739/*"MENU_DECIDE"*/;
  if ( !isDecide )
    v11 = &StringLiteral_8738/*"MENU_CANCEL"*/;
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)*v11, 0LL);
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
    sub_1BCAA3C(operationItemListViewManager, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)operationItemListViewManager, 0, 0LL);
  FriendRootComponent__RefreshInfo(this, v4);
  this->fields.state = 0;
}


void __fastcall FriendRootComponent__RefreshInfo(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  UserGameEntity_o *SelfUserGame; // x22
  DataManager_o *Instance; // x0
  __int64 v18; // x1
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *v20; // x0
  __int64 v21; // x1
  UILabel_o *friendCountLabel; // x23
  UserFollowMaster_o *v23; // x21
  System_String_o *v24; // x24
  Il2CppObject *v25; // x25
  Il2CppObject *v26; // x0
  UILabel_o *followCountLabel; // x22
  System_String_o *v28; // x23
  __int64 v29; // x0
  __int64 v30; // x1
  BalanceConfig_c *v31; // x8
  Il2CppObject *v32; // x21
  Il2CppObject *v33; // x0
  const MethodInfo *v34; // x1
  const MethodInfo *v35; // x1
  int32_t FollowNum; // [xsp+0h] [xbp-60h] BYREF
  int32_t FollowSum; // [xsp+4h] [xbp-5Ch] BYREF
  int32_t friendKeep; // [xsp+8h] [xbp-58h] BYREF
  int32_t FriendSum; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4B11467 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_TblFriendMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserFollowMaster___, v6, v7);
    sub_1BCA7E0(&int_TypeInfo, v8, v9);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13);
    sub_1BCA7E0(&StringLiteral_6654/*"FRIEND_SHOW_INFOMATION"*/, v14, v15);
    byte_4B11467 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_TblFriendMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  v20 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserFollowMaster___);
  friendCountLabel = this->fields.friendCountLabel;
  v23 = (UserFollowMaster_o *)v20;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v21);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6654/*"FRIEND_SHOW_INFOMATION"*/, 0LL);
  if ( !MasterData_object )
    goto LABEL_16;
  v24 = (System_String_o *)Instance;
  FriendSum = TblFriendMaster__GetFriendSum((TblFriendMaster_o *)MasterData_object, 0LL);
  Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &FriendSum);
  if ( !SelfUserGame )
    goto LABEL_16;
  v25 = (Il2CppObject *)Instance;
  friendKeep = SelfUserGame->fields.friendKeep;
  v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &friendKeep);
  Instance = (DataManager_o *)System_String__Format_62415592(v24, v25, v26, 0LL);
  if ( !friendCountLabel )
    goto LABEL_16;
  UILabel__set_text(friendCountLabel, (System_String_o *)Instance, 0LL);
  followCountLabel = this->fields.followCountLabel;
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6654/*"FRIEND_SHOW_INFOMATION"*/, 0LL);
  if ( !v23 )
    goto LABEL_16;
  v28 = (System_String_o *)Instance;
  FollowSum = UserFollowMaster__GetFollowSum(v23, 0LL);
  v29 = j_il2cpp_value_box_0(int_TypeInfo, &FollowSum);
  v31 = BalanceConfig_TypeInfo;
  v32 = (Il2CppObject *)v29;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v30);
    v31 = BalanceConfig_TypeInfo;
  }
  FollowNum = v31->static_fields->FollowNum;
  v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &FollowNum);
  Instance = (DataManager_o *)System_String__Format_62415592(v28, v32, v33, 0LL);
  if ( !followCountLabel
    || (UILabel__set_text(followCountLabel, (System_String_o *)Instance, 0LL),
        Instance = (DataManager_o *)TblFriendMaster__GetSum((TblFriendMaster_o *)MasterData_object, 2, 0LL),
        !this->fields.noticeNumber) )
  {
LABEL_16:
    sub_1BCAA3C(Instance, v18);
  }
  NoticeNumberComponent__SetNumber(this->fields.noticeNumber, (int32_t)Instance, 0LL);
  FriendRootComponent__CheckModeKind(this, v34);
  FriendRootComponent__CheckHelpUI(this, v35);
}


void __fastcall FriendRootComponent__RefreshTab(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  int32_t tabKind; // w0
  const MethodInfo *v19; // x1
  UnityEngine_Behaviour_o *tabFriendButton; // x0
  System_String_o *v21; // x1
  System_String_o *v22; // x1
  const MethodInfo *v23; // x1
  const MethodInfo *v24; // x1
  bool v25; // w1
  const MethodInfo *v26; // x2
  UICommonButton_o *v27; // x20
  bool enabled; // w0
  UICommonButton_o *tabOfferedButton; // x20
  bool v30; // w0
  UnityEngine_Behaviour_o *tabSearchButton; // x19
  bool v32; // w1

  if ( (byte_4B11466 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17760/*"btn_txt_friendsearch_on"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_17759/*"btn_txt_friendsearch_off"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_17648/*"btn_bg_09"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_17758/*"btn_txt_friendrequest_on"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_17756/*"btn_txt_friendlist_on"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_17757/*"btn_txt_friendrequest_off"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_17755/*"btn_txt_friendlist_off"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_17667/*"btn_bg_on"*/, v16, v17);
    byte_4B11466 = 1;
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
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17755/*"btn_txt_friendlist_off"*/, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabOfferedTitleSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17757/*"btn_txt_friendrequest_off"*/, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabSearchTitleSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17760/*"btn_txt_friendsearch_on"*/, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabFriendSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17648/*"btn_bg_09"*/, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabOfferedSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17648/*"btn_bg_09"*/, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabSearchSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      v22 = (System_String_o *)StringLiteral_17667/*"btn_bg_on"*/;
LABEL_45:
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, v22, 0LL);
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
      sub_1BCAA3C(tabFriendButton, v19);
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
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17755/*"btn_txt_friendlist_off"*/, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabOfferedTitleSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17758/*"btn_txt_friendrequest_on"*/, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabSearchTitleSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17759/*"btn_txt_friendsearch_off"*/, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabFriendSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17648/*"btn_bg_09"*/, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabOfferedSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      v21 = (System_String_o *)StringLiteral_17667/*"btn_bg_on"*/;
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
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17756/*"btn_txt_friendlist_on"*/, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabOfferedTitleSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17757/*"btn_txt_friendrequest_off"*/, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabSearchTitleSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17759/*"btn_txt_friendsearch_off"*/, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabFriendSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17667/*"btn_bg_on"*/, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabOfferedSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      v21 = (System_String_o *)StringLiteral_17648/*"btn_bg_09"*/;
LABEL_43:
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, v21, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabSearchSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      v22 = (System_String_o *)StringLiteral_17648/*"btn_bg_09"*/;
      goto LABEL_45;
  }
  FriendRootComponent__CheckModeKind(this, v19);
  FriendRootComponent__CheckHelpUI(this, v23);
  v25 = FriendRootComponent__get_tabKind(this, v24) == 0;
  FriendRootComponent__SetActiveModeKindButtons(this, v25, v26);
  v27 = this->fields.tabFriendButton;
  if ( !v27 )
    goto LABEL_53;
  enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.tabFriendButton, 0LL);
  UICommonButton__SetColliderEnable(v27, enabled, 1, 0LL);
  tabOfferedButton = this->fields.tabOfferedButton;
  if ( !tabOfferedButton )
    goto LABEL_53;
  v30 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.tabOfferedButton, 0LL);
  UICommonButton__SetColliderEnable(tabOfferedButton, v30, 1, 0LL);
  tabSearchButton = (UnityEngine_Behaviour_o *)this->fields.tabSearchButton;
  if ( !tabSearchButton )
    goto LABEL_53;
  v32 = UnityEngine_Behaviour__get_enabled(tabSearchButton, 0LL);
  UICommonButton__SetColliderEnable((UICommonButton_o *)tabSearchButton, v32, 1, 0LL);
}


void __fastcall FriendRootComponent__RequestFollowAssign(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  NetworkManager_ResultCallbackFunc_o *v13; // x20
  __int64 v14; // x1
  FollowAssignRequest_o *Request_object; // x0
  struct OtherUserGameEntity_o *selectFriendEntity; // x8

  if ( (byte_4B114B0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_FriendRootComponent_EndRequestFollowAssign__, method, v2);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_FollowAssignRequest___, v5, v6);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_11195/*"REQUEST_NG"*/, v11, v12);
    byte_4B114B0 = 1;
  }
  if ( this->fields.selectFriendEntity )
  {
    v13 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(NetworkManager_ResultCallbackFunc_TypeInfo, method, v2, v3);
    NetworkManager_ResultCallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      Method_FriendRootComponent_EndRequestFollowAssign__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v14);
    Request_object = (FollowAssignRequest_o *)NetworkManager__getRequest_object_(
                                                v13,
                                                (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_FollowAssignRequest___);
    selectFriendEntity = this->fields.selectFriendEntity;
    if ( selectFriendEntity && Request_object )
    {
      FollowAssignRequest__beginRequest(Request_object, selectFriendEntity->fields.userId, 0LL);
      return;
    }
LABEL_11:
    sub_1BCAA3C(Request_object, method);
  }
  Request_object = (FollowAssignRequest_o *)this->fields.myFSM;
  if ( !Request_object )
    goto LABEL_11;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Request_object, (System_String_o *)StringLiteral_11195/*"REQUEST_NG"*/, 0LL);
}


void __fastcall FriendRootComponent__RequestFollowRemove(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_object__o *v7; // x20
  const MethodInfo *v8; // x2

  if ( (byte_4B114B9 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_string__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_FriendRootComponent__RequestFollowRemove_b__143_0__, v5, v6);
    byte_4B114B9 = 1;
  }
  v7 = (System_Action_object__o *)sub_1BCAA2C(System_Action_string__TypeInfo, method, v2, v3);
  System_Action_object____ctor(
    v7,
    (Il2CppObject *)this,
    Method_FriendRootComponent__RequestFollowRemove_b__143_0__,
    0LL);
  FriendRootComponent__FriendLockRequst(this, (System_Action_string__o *)v7, v8);
}


void __fastcall FriendRootComponent__RequestFriendAccept(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  FriendOperationItemListViewItem_o *Item; // x0
  __int64 v14; // x2
  __int64 v15; // x3
  struct OtherUserGameEntity_o *otherUserGameEntity; // x21
  NetworkManager_ResultCallbackFunc_o *v17; // x20
  __int64 v18; // x1

  if ( (byte_4B11487 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_FriendRootComponent_EndRequestFriend__, method, v2);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_FriendAcceptRequest___, v4, v5);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v8, v9);
    sub_1BCA7E0(&StringLiteral_11195/*"REQUEST_NG"*/, v10, v11);
    byte_4B11487 = 1;
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
      v17 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(
                                                     NetworkManager_ResultCallbackFunc_TypeInfo,
                                                     method,
                                                     v14,
                                                     v15);
      NetworkManager_ResultCallbackFunc___ctor(
        v17,
        (Il2CppObject *)this,
        Method_FriendRootComponent_EndRequestFriend__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v18);
      operationItemListViewManager = (FriendOperationItemListViewManager_o *)NetworkManager__getRequest_object_(
                                                                               v17,
                                                                               (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_FriendAcceptRequest___);
      if ( operationItemListViewManager )
      {
        FriendAcceptRequest__beginRequest(
          (FriendAcceptRequest_o *)operationItemListViewManager,
          otherUserGameEntity->fields.userId,
          0LL);
        return;
      }
LABEL_12:
      sub_1BCAA3C(operationItemListViewManager, method);
    }
  }
  operationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.myFSM;
  if ( !operationItemListViewManager )
    goto LABEL_12;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)operationItemListViewManager, (System_String_o *)StringLiteral_11195/*"REQUEST_NG"*/, 0LL);
}


void __fastcall FriendRootComponent__RequestFriendCancel(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  FriendOperationItemListViewItem_o *Item; // x0
  __int64 v14; // x2
  __int64 v15; // x3
  struct OtherUserGameEntity_o *otherUserGameEntity; // x21
  NetworkManager_ResultCallbackFunc_o *v17; // x20
  __int64 v18; // x1

  if ( (byte_4B11489 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_FriendRootComponent_EndRequestFriend__, method, v2);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_FriendCancelRequest___, v4, v5);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v8, v9);
    sub_1BCA7E0(&StringLiteral_11195/*"REQUEST_NG"*/, v10, v11);
    byte_4B11489 = 1;
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
      v17 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(
                                                     NetworkManager_ResultCallbackFunc_TypeInfo,
                                                     method,
                                                     v14,
                                                     v15);
      NetworkManager_ResultCallbackFunc___ctor(
        v17,
        (Il2CppObject *)this,
        Method_FriendRootComponent_EndRequestFriend__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v18);
      operationItemListViewManager = (FriendOperationItemListViewManager_o *)NetworkManager__getRequest_object_(
                                                                               v17,
                                                                               (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_FriendCancelRequest___);
      if ( operationItemListViewManager )
      {
        FriendCancelRequest__beginRequest(
          (FriendCancelRequest_o *)operationItemListViewManager,
          otherUserGameEntity->fields.userId,
          0LL);
        return;
      }
LABEL_12:
      sub_1BCAA3C(operationItemListViewManager, method);
    }
  }
  operationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.myFSM;
  if ( !operationItemListViewManager )
    goto LABEL_12;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)operationItemListViewManager, (System_String_o *)StringLiteral_11195/*"REQUEST_NG"*/, 0LL);
}


void __fastcall FriendRootComponent__RequestFriendOffer(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  NetworkManager_ResultCallbackFunc_o *v13; // x20
  __int64 v14; // x1
  FriendOfferRequest_o *Request_object; // x0
  struct OtherUserGameEntity_o *selectFriendEntity; // x8

  if ( (byte_4B11485 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_FriendRootComponent_EndRequestFriend__, method, v2);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_FriendOfferRequest___, v5, v6);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_11195/*"REQUEST_NG"*/, v11, v12);
    byte_4B11485 = 1;
  }
  if ( this->fields.selectFriendEntity )
  {
    v13 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(NetworkManager_ResultCallbackFunc_TypeInfo, method, v2, v3);
    NetworkManager_ResultCallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      Method_FriendRootComponent_EndRequestFriend__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v14);
    Request_object = (FriendOfferRequest_o *)NetworkManager__getRequest_object_(
                                               v13,
                                               (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_FriendOfferRequest___);
    selectFriendEntity = this->fields.selectFriendEntity;
    if ( selectFriendEntity && Request_object )
    {
      FriendOfferRequest__beginRequest(Request_object, selectFriendEntity->fields.userId, 0LL);
      return;
    }
LABEL_11:
    sub_1BCAA3C(Request_object, method);
  }
  Request_object = (FriendOfferRequest_o *)this->fields.myFSM;
  if ( !Request_object )
    goto LABEL_11;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Request_object, (System_String_o *)StringLiteral_11195/*"REQUEST_NG"*/, 0LL);
}


void __fastcall FriendRootComponent__RequestFriendOffer2(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_object__o *v7; // x20
  const MethodInfo *v8; // x2

  if ( (byte_4B11486 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_string__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_FriendRootComponent__RequestFriendOffer2_b__88_0__, v5, v6);
    byte_4B11486 = 1;
  }
  v7 = (System_Action_object__o *)sub_1BCAA2C(System_Action_string__TypeInfo, method, v2, v3);
  System_Action_object____ctor(v7, (Il2CppObject *)this, Method_FriendRootComponent__RequestFriendOffer2_b__88_0__, 0LL);
  FriendRootComponent__FriendLockRequst(this, (System_Action_string__o *)v7, v8);
}


void __fastcall FriendRootComponent__RequestFriendProfile(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  System_String_o *selectFriendCode; // x0
  System_String_o *v21; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  NetworkManager_ResultCallbackFunc_o *v25; // x20
  __int64 v26; // x1
  ProfileTopRequest_o *Request_object; // x0
  __int64 v28; // x1
  FriendWarningDialog_o *friendWarningDialog; // x20
  FriendWarningDialog_CallbackFunc_o *v30; // x21
  const MethodInfo *v31; // x3
  const MethodInfo *v32; // x3

  if ( (byte_4B1148D & 1) == 0 )
  {
    sub_1BCA7E0(&FriendWarningDialog_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_FriendRootComponent_EndNoSearchWarning__, v4, v5);
    sub_1BCA7E0(&Method_FriendRootComponent_EndRequestFriendProfile__, v6, v7);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_ProfileTopRequest___, v8, v9);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v12, v13);
    sub_1BCA7E0(&StringLiteral_116/*" "*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_11195/*"REQUEST_NG"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v18, v19);
    byte_4B1148D = 1;
  }
  selectFriendCode = this->fields.selectFriendCode;
  if ( selectFriendCode )
  {
    v21 = System_String__Replace_62420848(
            selectFriendCode,
            (System_String_o *)StringLiteral_116/*" "*/,
            (System_String_o *)StringLiteral_1/*""*/,
            0LL);
    if ( System_String__op_Inequality(v21, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
    {
      v25 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(
                                                     NetworkManager_ResultCallbackFunc_TypeInfo,
                                                     v22,
                                                     v23,
                                                     v24);
      NetworkManager_ResultCallbackFunc___ctor(
        v25,
        (Il2CppObject *)this,
        Method_FriendRootComponent_EndRequestFriendProfile__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v26);
      Request_object = (ProfileTopRequest_o *)NetworkManager__getRequest_object_(
                                                v25,
                                                (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_ProfileTopRequest___);
      if ( Request_object )
      {
        ProfileTopRequest__beginRequestFriendCode(Request_object, this->fields.selectFriendCode, 0LL);
        return;
      }
LABEL_13:
      sub_1BCAA3C(Request_object, v28);
    }
    friendWarningDialog = this->fields.friendWarningDialog;
    v30 = (FriendWarningDialog_CallbackFunc_o *)sub_1BCAA2C(FriendWarningDialog_CallbackFunc_TypeInfo, v22, v23, v24);
    FriendWarningDialog_CallbackFunc___ctor(
      v30,
      (Il2CppObject *)this,
      Method_FriendRootComponent_EndNoSearchWarning__,
      v31);
    if ( !friendWarningDialog )
      goto LABEL_13;
    FriendWarningDialog__Open(friendWarningDialog, 3, v30, v32);
  }
  this->fields.selectFriendEntity = 0LL;
  sub_1BCA784(&this->fields.selectFriendEntity, 0LL);
  Request_object = (ProfileTopRequest_o *)this->fields.myFSM;
  if ( !Request_object )
    goto LABEL_13;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Request_object, (System_String_o *)StringLiteral_11195/*"REQUEST_NG"*/, 0LL);
}


void __fastcall FriendRootComponent__RequestFriendReject(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  FriendOperationItemListViewItem_o *Item; // x0
  struct OtherUserGameEntity_o *otherUserGameEntity; // x21
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  NetworkManager_ResultCallbackFunc_o *v20; // x20
  __int64 v21; // x1

  if ( (byte_4B11488 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_FriendRootComponent_EndRequestFriend__, method, v2);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_FriendRejectRequest___, v4, v5);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10, v11);
    sub_1BCA7E0(&StringLiteral_11195/*"REQUEST_NG"*/, v12, v13);
    byte_4B11488 = 1;
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
      operationItemListViewManager = (FriendOperationItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( operationItemListViewManager )
      {
        CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)operationItemListViewManager, 0, 0LL);
        v20 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(
                                                       NetworkManager_ResultCallbackFunc_TypeInfo,
                                                       v17,
                                                       v18,
                                                       v19);
        NetworkManager_ResultCallbackFunc___ctor(
          v20,
          (Il2CppObject *)this,
          Method_FriendRootComponent_EndRequestFriend__,
          0LL);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v21);
        operationItemListViewManager = (FriendOperationItemListViewManager_o *)NetworkManager__getRequest_object_(
                                                                                 v20,
                                                                                 (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_FriendRejectRequest___);
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
      sub_1BCAA3C(operationItemListViewManager, method);
    }
  }
  operationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.myFSM;
  if ( !operationItemListViewManager )
    goto LABEL_13;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)operationItemListViewManager, (System_String_o *)StringLiteral_11195/*"REQUEST_NG"*/, 0LL);
}


void __fastcall FriendRootComponent__RequestFriendRemove(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_object__o *v7; // x20
  const MethodInfo *v8; // x2

  if ( (byte_4B1148A & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_string__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_FriendRootComponent__RequestFriendRemove_b__92_0__, v5, v6);
    byte_4B1148A = 1;
  }
  v7 = (System_Action_object__o *)sub_1BCAA2C(System_Action_string__TypeInfo, method, v2, v3);
  System_Action_object____ctor(v7, (Il2CppObject *)this, Method_FriendRootComponent__RequestFriendRemove_b__92_0__, 0LL);
  FriendRootComponent__FriendLockRequst(this, (System_Action_string__o *)v7, v8);
}


void __fastcall FriendRootComponent__SelectFollowConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  Il2CppObject *Instance; // x0
  __int64 v27; // x1
  UserFollowMaster_o *v28; // x20
  const MethodInfo *v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  int32_t FollowSum; // w21
  BalanceConfig_c *v33; // x8
  struct OtherUserGameEntity_o *selectFriendEntity; // x8
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x1
  Il2CppObject *v39; // x20
  System_String_o *v40; // x21
  System_String_o *v41; // x22
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  NotificationDialog_ClickDelegate_o *v45; // x23
  FriendWarningDialog_o *friendWarningDialog; // x20
  FriendWarningDialog_CallbackFunc_o *v47; // x21
  const MethodInfo *v48; // x3
  const MethodInfo *v49; // x3
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x20
  OtherUserGameEntity_o *v51; // x21
  FriendOperationConfirmMenu_CallbackFunc_o *v52; // x22

  if ( (byte_4B114AC & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo, v4, v5);
    sub_1BCA7E0(&FriendWarningDialog_CallbackFunc_TypeInfo, v6, v7);
    sub_1BCA7E0(&NotificationDialog_ClickDelegate_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserFollowMaster___, v10, v11);
    sub_1BCA7E0(&Method_FriendRootComponent_EndMaxFollowWarningOfferConfirm__, v12, v13);
    sub_1BCA7E0(&Method_FriendRootComponent_SelectedFollowOfferConfirm__, v14, v15);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v18, v19);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20, v21);
    sub_1BCA7E0(&StringLiteral_2067/*"ALREADY_FOLLOWED_TITLE"*/, v22, v23);
    sub_1BCA7E0(&StringLiteral_2066/*"ALREADY_FOLLOWED_MESSAGE"*/, v24, v25);
    byte_4B114AC = 1;
  }
  if ( this->fields.state == 23 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserFollowMaster___);
      if ( Instance )
      {
        v28 = (UserFollowMaster_o *)Instance;
        FollowSum = UserFollowMaster__GetFollowSum((UserFollowMaster_o *)Instance, 0LL);
        v33 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v29);
          v33 = BalanceConfig_TypeInfo;
        }
        if ( FollowSum >= v33->static_fields->FollowNum )
        {
          this->fields.state = 43;
          friendWarningDialog = this->fields.friendWarningDialog;
          v47 = (FriendWarningDialog_CallbackFunc_o *)sub_1BCAA2C(
                                                        FriendWarningDialog_CallbackFunc_TypeInfo,
                                                        v29,
                                                        v30,
                                                        v31);
          FriendWarningDialog_CallbackFunc___ctor(
            v47,
            (Il2CppObject *)this,
            Method_FriendRootComponent_EndMaxFollowWarningOfferConfirm__,
            v48);
          if ( friendWarningDialog )
          {
            FriendWarningDialog__Open(friendWarningDialog, 7, v47, v49);
            return;
          }
        }
        else
        {
          selectFriendEntity = this->fields.selectFriendEntity;
          if ( !selectFriendEntity )
          {
            FriendRootComponent__StartSearchInput(this, v29);
            return;
          }
          if ( UserFollowMaster__IsFollowUser(v28, selectFriendEntity->fields.userId, 0LL) )
          {
            this->fields.state = 44;
            v39 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v38);
            v40 = LocalizationManager__Get((System_String_o *)StringLiteral_2067/*"ALREADY_FOLLOWED_TITLE"*/, 0LL);
            v41 = LocalizationManager__Get((System_String_o *)StringLiteral_2066/*"ALREADY_FOLLOWED_MESSAGE"*/, 0LL);
            v45 = (NotificationDialog_ClickDelegate_o *)sub_1BCAA2C(
                                                          NotificationDialog_ClickDelegate_TypeInfo,
                                                          v42,
                                                          v43,
                                                          v44);
            NotificationDialog_ClickDelegate___ctor(
              v45,
              (Il2CppObject *)this,
              Method_FriendRootComponent_EndMaxFollowWarningOfferConfirm__,
              0LL);
            if ( v39 )
            {
              CommonUI__OpenNotificationDialog_30768824(
                (CommonUI_o *)v39,
                v40,
                v41,
                v45,
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
            v51 = this->fields.selectFriendEntity;
            v52 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_1BCAA2C(
                                                                 FriendOperationConfirmMenu_CallbackFunc_TypeInfo,
                                                                 v35,
                                                                 v36,
                                                                 v37);
            FriendOperationConfirmMenu_CallbackFunc___ctor(
              v52,
              (Il2CppObject *)this,
              Method_FriendRootComponent_SelectedFollowOfferConfirm__,
              0LL);
            if ( operationConfirmMenu )
            {
              FriendOperationConfirmMenu__Open(operationConfirmMenu, 6, v51, v52, 0LL);
              return;
            }
          }
        }
      }
    }
    sub_1BCAA3C(Instance, v27);
  }
}


void __fastcall FriendRootComponent__SelectFollowRemoveConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x20
  OtherUserGameEntity_o *dragParentObject; // x21
  FriendOperationConfirmMenu_CallbackFunc_o *v11; // x22

  if ( (byte_4B114B3 & 1) == 0 )
  {
    sub_1BCA7E0(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_FriendRootComponent_SelectedFollowRemoveConfirm__, v4, v5);
    byte_4B114B3 = 1;
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
          v11 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_1BCAA2C(
                                                               FriendOperationConfirmMenu_CallbackFunc_TypeInfo,
                                                               method,
                                                               v7,
                                                               v8),
          FriendOperationConfirmMenu_CallbackFunc___ctor(
            v11,
            (Il2CppObject *)this,
            Method_FriendRootComponent_SelectedFollowRemoveConfirm__,
            0LL),
          !operationConfirmMenu) )
    {
      sub_1BCAA3C(operationItemListViewManager, method);
    }
    FriendOperationConfirmMenu__Open(operationConfirmMenu, 7, dragParentObject, v11, 0LL);
  }
}


void __fastcall FriendRootComponent__SelectFriendAcceptConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x20
  OtherUserGameEntity_o *dragParentObject; // x21
  FriendOperationConfirmMenu_CallbackFunc_o *v11; // x22

  if ( (byte_4B11479 & 1) == 0 )
  {
    sub_1BCA7E0(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_FriendRootComponent_SelectedFriendAcceptConfirm__, v4, v5);
    byte_4B11479 = 1;
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
          v11 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_1BCAA2C(
                                                               FriendOperationConfirmMenu_CallbackFunc_TypeInfo,
                                                               method,
                                                               v7,
                                                               v8),
          FriendOperationConfirmMenu_CallbackFunc___ctor(
            v11,
            (Il2CppObject *)this,
            Method_FriendRootComponent_SelectedFriendAcceptConfirm__,
            0LL),
          !operationConfirmMenu) )
    {
      sub_1BCAA3C(operationItemListViewManager, method);
    }
    FriendOperationConfirmMenu__Open(operationConfirmMenu, 2, dragParentObject, v11, 0LL);
  }
}


void __fastcall FriendRootComponent__SelectFriendCancelConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x20
  OtherUserGameEntity_o *dragParentObject; // x21
  FriendOperationConfirmMenu_CallbackFunc_o *v11; // x22

  if ( (byte_4B1147F & 1) == 0 )
  {
    sub_1BCA7E0(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_FriendRootComponent_SelectedFriendCancelConfirm__, v4, v5);
    byte_4B1147F = 1;
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
          v11 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_1BCAA2C(
                                                               FriendOperationConfirmMenu_CallbackFunc_TypeInfo,
                                                               method,
                                                               v7,
                                                               v8),
          FriendOperationConfirmMenu_CallbackFunc___ctor(
            v11,
            (Il2CppObject *)this,
            Method_FriendRootComponent_SelectedFriendCancelConfirm__,
            0LL),
          !operationConfirmMenu) )
    {
      sub_1BCAA3C(operationItemListViewManager, method);
    }
    FriendOperationConfirmMenu__Open(operationConfirmMenu, 4, dragParentObject, v11, 0LL);
  }
}


void __fastcall FriendRootComponent__SelectFriendOfferConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  int32_t state; // w8
  UserGameEntity_o *v15; // x20
  DataManager_o *Instance; // x0
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x2
  __int64 v19; // x3
  struct OtherUserGameEntity_o *selectFriendEntity; // x20
  struct FriendOperationConfirmMenu_o *v21; // x21
  FriendOperationConfirmMenu_CallbackFunc_o *v22; // x22
  FriendOperationConfirmMenu_o *v23; // x0
  OtherUserGameEntity_o *v24; // x2
  UserGameEntity_o *SelfUserGame; // x20
  __int64 v26; // x2
  __int64 v27; // x3
  struct FriendOperationConfirmMenu_o *operationConfirmMenu; // x20
  OtherUserGameEntity_o *context; // x21
  FriendWarningDialog_o *friendWarningDialog; // x20
  FriendWarningDialog_CallbackFunc_o *v31; // x21
  const MethodInfo *v32; // x3
  const MethodInfo *v33; // x3

  if ( (byte_4B11477 & 1) == 0 )
  {
    sub_1BCA7E0(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&FriendWarningDialog_CallbackFunc_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_TblFriendMaster___, v6, v7);
    sub_1BCA7E0(&Method_FriendRootComponent_EndMaxFriendWarningOfferConfirm__, v8, v9);
    sub_1BCA7E0(&Method_FriendRootComponent_SelectedFriendOfferConfirm__, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13);
    byte_4B11477 = 1;
  }
  state = this->fields.state;
  if ( state == 4 )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_27;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_TblFriendMaster___);
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
                                      v18);
        this->fields.state = 27;
        if ( Instance )
        {
          operationConfirmMenu = this->fields.operationConfirmMenu;
          context = (OtherUserGameEntity_o *)Instance->fields.context;
          v22 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_1BCAA2C(
                                                               FriendOperationConfirmMenu_CallbackFunc_TypeInfo,
                                                               v17,
                                                               v26,
                                                               v27);
          FriendOperationConfirmMenu_CallbackFunc___ctor(
            v22,
            (Il2CppObject *)this,
            Method_FriendRootComponent_SelectedFriendOfferConfirm__,
            0LL);
          if ( operationConfirmMenu )
          {
            v23 = operationConfirmMenu;
            v24 = context;
            goto LABEL_22;
          }
        }
      }
LABEL_27:
      sub_1BCAA3C(Instance, v17);
    }
LABEL_24:
    this->fields.state = 29;
    friendWarningDialog = this->fields.friendWarningDialog;
    v31 = (FriendWarningDialog_CallbackFunc_o *)sub_1BCAA2C(FriendWarningDialog_CallbackFunc_TypeInfo, v17, v18, v19);
    FriendWarningDialog_CallbackFunc___ctor(
      v31,
      (Il2CppObject *)this,
      Method_FriendRootComponent_EndMaxFriendWarningOfferConfirm__,
      v32);
    if ( !friendWarningDialog )
      goto LABEL_27;
    FriendWarningDialog__Open(friendWarningDialog, 1, v31, v33);
    return;
  }
  if ( state != 23 )
    return;
  v15 = UserGameMaster__getSelfUserGame(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_TblFriendMaster___);
  if ( !Instance )
    goto LABEL_27;
  Instance = (DataManager_o *)TblFriendMaster__GetList((TblFriendMaster_o *)Instance, 3, 0LL);
  if ( !Instance || !v15 )
    goto LABEL_27;
  if ( v15->fields.friendKeep <= SLODWORD(Instance->fields.m_CancellationTokenSource) )
    goto LABEL_24;
  selectFriendEntity = this->fields.selectFriendEntity;
  if ( selectFriendEntity )
  {
    this->fields.state = 27;
    v21 = this->fields.operationConfirmMenu;
    v22 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_1BCAA2C(
                                                         FriendOperationConfirmMenu_CallbackFunc_TypeInfo,
                                                         v17,
                                                         v18,
                                                         v19);
    FriendOperationConfirmMenu_CallbackFunc___ctor(
      v22,
      (Il2CppObject *)this,
      Method_FriendRootComponent_SelectedFriendOfferConfirm__,
      0LL);
    if ( v21 )
    {
      v23 = v21;
      v24 = selectFriendEntity;
LABEL_22:
      FriendOperationConfirmMenu__Open(v23, 1, v24, v22, 0LL);
      return;
    }
    goto LABEL_27;
  }
  FriendRootComponent__StartSearchInput(this, v17);
}


void __fastcall FriendRootComponent__SelectFriendRejectConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x20
  OtherUserGameEntity_o *dragParentObject; // x21
  FriendOperationConfirmMenu_CallbackFunc_o *v11; // x22

  if ( (byte_4B1147C & 1) == 0 )
  {
    sub_1BCA7E0(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_FriendRootComponent_SelectedFriendRejectConfirm__, v4, v5);
    byte_4B1147C = 1;
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
          v11 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_1BCAA2C(
                                                               FriendOperationConfirmMenu_CallbackFunc_TypeInfo,
                                                               method,
                                                               v7,
                                                               v8),
          FriendOperationConfirmMenu_CallbackFunc___ctor(
            v11,
            (Il2CppObject *)this,
            Method_FriendRootComponent_SelectedFriendRejectConfirm__,
            0LL),
          !operationConfirmMenu) )
    {
      sub_1BCAA3C(operationItemListViewManager, method);
    }
    FriendOperationConfirmMenu__Open(operationConfirmMenu, 3, dragParentObject, v11, 0LL);
  }
}


void __fastcall FriendRootComponent__SelectFriendRemoveConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x20
  OtherUserGameEntity_o *dragParentObject; // x21
  FriendOperationConfirmMenu_CallbackFunc_o *v11; // x22

  if ( (byte_4B11482 & 1) == 0 )
  {
    sub_1BCA7E0(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_FriendRootComponent_SelectedFriendRemoveConfirm__, v4, v5);
    byte_4B11482 = 1;
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
          v11 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_1BCAA2C(
                                                               FriendOperationConfirmMenu_CallbackFunc_TypeInfo,
                                                               method,
                                                               v7,
                                                               v8),
          FriendOperationConfirmMenu_CallbackFunc___ctor(
            v11,
            (Il2CppObject *)this,
            Method_FriendRootComponent_SelectedFriendRemoveConfirm__,
            0LL),
          !operationConfirmMenu) )
    {
      sub_1BCAA3C(operationItemListViewManager, method);
    }
    FriendOperationConfirmMenu__Open(operationConfirmMenu, 5, dragParentObject, v11, 0LL);
  }
}


void __fastcall FriendRootComponent__SelectSearchFriend(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v4; // x1
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_4B11470 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_5544/*"END_ACTION"*/, method, v2);
    byte_4B11470 = 1;
  }
  if ( this->fields.state == 1 )
  {
    this->fields.state = 22;
    FriendRootComponent__RefreshInfo(this, method);
    FriendRootComponent__OnMoveEnd(this, v4);
  }
  else
  {
    myFSM = this->fields.myFSM;
    if ( !myFSM )
      sub_1BCAA3C(0LL, method);
    PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_5544/*"END_ACTION"*/, 0LL);
  }
}


void __fastcall FriendRootComponent__SelectShowFriend(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Component_o *operationItemListViewManager; // x0
  const MethodInfo *v9; // x3
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  struct FriendOperationItemListViewManager_o *v11; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  System_Action_o *v15; // x21
  const MethodInfo *v16; // x2

  if ( (byte_4B11468 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_FriendRootComponent_OnMoveEnd__, v4, v5);
    sub_1BCA7E0(&StringLiteral_5544/*"END_ACTION"*/, v6, v7);
    byte_4B11468 = 1;
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
              v9);
            v11 = this->fields.operationItemListViewManager;
            v15 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v12, v13, v14);
            System_Action___ctor(v15, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0LL);
            if ( v11 )
            {
              v11->fields.callbackFunc2 = v15;
              sub_1BCA784(&v11->fields.callbackFunc2, v15);
              FriendOperationItemListViewManager__SetMode_31475908(v11, 1, v16);
              return;
            }
          }
        }
      }
    }
LABEL_12:
    sub_1BCAA3C(operationItemListViewManager, method);
  }
  operationItemListViewManager = (UnityEngine_Component_o *)this->fields.myFSM;
  if ( !operationItemListViewManager )
    goto LABEL_12;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)operationItemListViewManager, (System_String_o *)StringLiteral_5544/*"END_ACTION"*/, 0LL);
}


void __fastcall FriendRootComponent__SelectShowOffer(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  UnityEngine_Component_o *operationItemListViewManager; // x0
  const MethodInfo *v8; // x3
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  struct FriendOperationItemListViewManager_o *v10; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  System_Action_o *v14; // x21
  const MethodInfo *v15; // x2

  if ( (byte_4B1146A & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_FriendRootComponent_OnMoveEnd__, v4, v5);
    byte_4B1146A = 1;
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
            v8),
          v10 = this->fields.operationItemListViewManager,
          v14 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v11, v12, v13),
          System_Action___ctor(v14, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0LL),
          !v10) )
    {
LABEL_11:
      sub_1BCAA3C(operationItemListViewManager, v6);
    }
    v10->fields.callbackFunc2 = v14;
    sub_1BCA784(&v10->fields.callbackFunc2, v14);
    FriendOperationItemListViewManager__SetMode_31475908(v10, 1, v15);
  }
}


void __fastcall FriendRootComponent__SelectShowOffered(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Component_o *operationItemListViewManager; // x0
  const MethodInfo *v9; // x3
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  struct FriendOperationItemListViewManager_o *v11; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  System_Action_o *v15; // x21
  const MethodInfo *v16; // x2

  if ( (byte_4B1146C & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_FriendRootComponent_OnMoveEnd__, v4, v5);
    sub_1BCA7E0(&StringLiteral_5544/*"END_ACTION"*/, v6, v7);
    byte_4B1146C = 1;
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
              v9);
            v11 = this->fields.operationItemListViewManager;
            v15 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v12, v13, v14);
            System_Action___ctor(v15, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0LL);
            if ( v11 )
            {
              v11->fields.callbackFunc2 = v15;
              sub_1BCA784(&v11->fields.callbackFunc2, v15);
              FriendOperationItemListViewManager__SetMode_31475908(v11, 1, v16);
              return;
            }
          }
        }
      }
    }
LABEL_12:
    sub_1BCAA3C(operationItemListViewManager, method);
  }
  operationItemListViewManager = (UnityEngine_Component_o *)this->fields.myFSM;
  if ( !operationItemListViewManager )
    goto LABEL_12;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)operationItemListViewManager, (System_String_o *)StringLiteral_5544/*"END_ACTION"*/, 0LL);
}


void __fastcall FriendRootComponent__SelectShowSearch(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Component_o *operationItemListViewManager; // x0
  struct FriendOperationItemListViewManager_o *v7; // x20
  struct System_String_o *selectFriendCode; // x1
  const MethodInfo *v9; // x3
  FriendSearchMenu_o *friendSearchMenu; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  System_Action_o *v14; // x21
  const MethodInfo *v15; // x2
  struct FriendOperationItemListViewManager_o *v16; // x20
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  System_Action_o *v20; // x21
  const MethodInfo *v21; // x2

  if ( (byte_4B1146E & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_FriendRootComponent_OnMoveEnd__, v4, v5);
    byte_4B1146E = 1;
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
    v7 = this->fields.operationItemListViewManager;
    if ( !v7 )
      goto LABEL_11;
    selectFriendCode = this->fields.selectFriendCode;
    v7->fields.friendCode = selectFriendCode;
    sub_1BCA784(&v7->fields.friendCode, selectFriendCode);
    FriendOperationItemListViewManager__CreateList(v7, 0, 0, v9);
    this->fields.state = 17;
    friendSearchMenu = this->fields.friendSearchMenu;
    v14 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v11, v12, v13);
    System_Action___ctor(v14, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0LL);
    if ( !friendSearchMenu
      || (FriendSearchMenu__Close_31501608(friendSearchMenu, v14, v15),
          v16 = this->fields.operationItemListViewManager,
          v20 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v17, v18, v19),
          System_Action___ctor(v20, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0LL),
          !v16) )
    {
LABEL_11:
      sub_1BCAA3C(operationItemListViewManager, method);
    }
    v16->fields.callbackFunc2 = v20;
    sub_1BCA784(&v16->fields.callbackFunc2, v20);
    FriendOperationItemListViewManager__SetMode_31475908(v16, 1, v21);
  }
}


void __fastcall FriendRootComponent__SelectShowServant(
        FriendRootComponent_o *this,
        ServantLeaderInfo_o *servantLeaderInfo,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  unsigned int state; // w23
  Il2CppObject *Instance; // x21
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  ServantStatusDialog_EndDelegate_o *v14; // x22
  __int64 v15; // x0
  __int64 v16; // x1
  int32_t v17; // w1

  if ( (byte_4B11474 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusDialog_EndDelegate_TypeInfo, servantLeaderInfo, method);
    sub_1BCA7E0(&Method_FriendRootComponent_EndShowServant__, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7, v8);
    byte_4B11474 = 1;
  }
  state = this->fields.state;
  if ( state <= 0x13 && ((1 << state) & 0x84210) != 0 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v14 = (ServantStatusDialog_EndDelegate_o *)sub_1BCAA2C(ServantStatusDialog_EndDelegate_TypeInfo, v11, v12, v13);
    ServantStatusDialog_EndDelegate___ctor(v14, (Il2CppObject *)this, Method_FriendRootComponent_EndShowServant__, 0LL);
    if ( !Instance )
      sub_1BCAA3C(v15, v16);
    if ( state == 4 )
      v17 = 4;
    else
      v17 = 5;
    CommonUI__OpenServantStatusDialog_30778732((CommonUI_o *)Instance, v17, servantLeaderInfo, v14, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendRootComponent__SelectShowServantEquip(
        FriendRootComponent_o *this,
        EquipTargetInfo_o *equipInfo,
        int32_t statusKind,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *Instance; // x22
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  ServantStatusDialog_EndDelegate_o *v15; // x23
  __int64 v16; // x0
  __int64 v17; // x1

  if ( (byte_4B1149E & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusDialog_EndDelegate_TypeInfo, equipInfo, *(_QWORD *)&statusKind);
    sub_1BCA7E0(&Method_FriendRootComponent_EndShowServantEquip__, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10);
    byte_4B1149E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v15 = (ServantStatusDialog_EndDelegate_o *)sub_1BCAA2C(ServantStatusDialog_EndDelegate_TypeInfo, v12, v13, v14);
  ServantStatusDialog_EndDelegate___ctor(
    v15,
    (Il2CppObject *)this,
    Method_FriendRootComponent_EndShowServantEquip__,
    0LL);
  if ( !Instance )
    sub_1BCAA3C(v16, v17);
  CommonUI__OpenServantEquipStatusDialog_30781828((CommonUI_o *)Instance, statusKind, equipInfo, v15, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendRootComponent__SelectedFollowOfferConfirm(
        FriendRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  PlayMakerFSM_o *myFSM; // x0
  __int64 *v8; // x8

  if ( (byte_4B114AF & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_8739/*"MENU_DECIDE"*/, isDecide, method);
    sub_1BCA7E0(&StringLiteral_8738/*"MENU_CANCEL"*/, v5, v6);
    byte_4B114AF = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1BCAA3C(0LL, isDecide);
  v8 = &StringLiteral_8739/*"MENU_DECIDE"*/;
  if ( !isDecide )
    v8 = &StringLiteral_8738/*"MENU_CANCEL"*/;
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)*v8, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendRootComponent__SelectedFollowRemoveConfirm(
        FriendRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  PlayMakerFSM_o *myFSM; // x0
  __int64 *v8; // x8

  if ( (byte_4B114A9 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_8739/*"MENU_DECIDE"*/, isDecide, method);
    sub_1BCA7E0(&StringLiteral_8738/*"MENU_CANCEL"*/, v5, v6);
    byte_4B114A9 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1BCAA3C(0LL, isDecide);
  v8 = &StringLiteral_8739/*"MENU_DECIDE"*/;
  if ( !isDecide )
    v8 = &StringLiteral_8738/*"MENU_CANCEL"*/;
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)*v8, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendRootComponent__SelectedFriendAcceptConfirm(
        FriendRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  PlayMakerFSM_o *myFSM; // x0
  __int64 *v8; // x8

  if ( (byte_4B114A5 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_8739/*"MENU_DECIDE"*/, isDecide, method);
    sub_1BCA7E0(&StringLiteral_8738/*"MENU_CANCEL"*/, v5, v6);
    byte_4B114A5 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1BCAA3C(0LL, isDecide);
  v8 = &StringLiteral_8739/*"MENU_DECIDE"*/;
  if ( !isDecide )
    v8 = &StringLiteral_8738/*"MENU_CANCEL"*/;
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)*v8, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendRootComponent__SelectedFriendCancelConfirm(
        FriendRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  PlayMakerFSM_o *myFSM; // x0
  __int64 *v8; // x8

  if ( (byte_4B114A7 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_8739/*"MENU_DECIDE"*/, isDecide, method);
    sub_1BCA7E0(&StringLiteral_8738/*"MENU_CANCEL"*/, v5, v6);
    byte_4B114A7 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1BCAA3C(0LL, isDecide);
  v8 = &StringLiteral_8739/*"MENU_DECIDE"*/;
  if ( !isDecide )
    v8 = &StringLiteral_8738/*"MENU_CANCEL"*/;
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)*v8, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendRootComponent__SelectedFriendOfferConfirm(
        FriendRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  PlayMakerFSM_o *myFSM; // x0
  __int64 *v8; // x8

  if ( (byte_4B114A4 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_8739/*"MENU_DECIDE"*/, isDecide, method);
    sub_1BCA7E0(&StringLiteral_8738/*"MENU_CANCEL"*/, v5, v6);
    byte_4B114A4 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1BCAA3C(0LL, isDecide);
  v8 = &StringLiteral_8739/*"MENU_DECIDE"*/;
  if ( !isDecide )
    v8 = &StringLiteral_8738/*"MENU_CANCEL"*/;
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)*v8, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendRootComponent__SelectedFriendRejectConfirm(
        FriendRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  PlayMakerFSM_o *myFSM; // x0
  __int64 *v8; // x8

  if ( (byte_4B114A6 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_8739/*"MENU_DECIDE"*/, isDecide, method);
    sub_1BCA7E0(&StringLiteral_8738/*"MENU_CANCEL"*/, v5, v6);
    byte_4B114A6 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1BCAA3C(0LL, isDecide);
  v8 = &StringLiteral_8739/*"MENU_DECIDE"*/;
  if ( !isDecide )
    v8 = &StringLiteral_8738/*"MENU_CANCEL"*/;
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)*v8, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendRootComponent__SelectedFriendRemoveConfirm(
        FriendRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  PlayMakerFSM_o *myFSM; // x0
  __int64 *v8; // x8

  if ( (byte_4B114A8 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_8739/*"MENU_DECIDE"*/, isDecide, method);
    sub_1BCA7E0(&StringLiteral_8738/*"MENU_CANCEL"*/, v5, v6);
    byte_4B114A8 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1BCAA3C(0LL, isDecide);
  v8 = &StringLiteral_8739/*"MENU_DECIDE"*/;
  if ( !isDecide )
    v8 = &StringLiteral_8738/*"MENU_CANCEL"*/;
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)*v8, 0LL);
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
      sub_1BCAA3C(modeButtonParent, v5);
    }
    LODWORD(modeButtonParent[1].monitor) = 3;
    this->fields.isActiveModeKindButtons = v3;
  }
}


void __fastcall FriendRootComponent__ShowSearchResult(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  FriendRootComponent_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  FriendSearchResultMenu_o *friendSearchResultMenu; // x20
  System_Action_o *v18; // x21
  const MethodInfo *v19; // x2
  __int64 v20; // x2
  __int64 v21; // x3
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  int32_t currentCursor; // w22
  FriendSearchResultMenu_o *v24; // x20
  OtherUserGameEntity_o *selectFriendEntity; // x21
  FriendSearchResultMenu_CallbackFunc_o *v26; // x23
  const MethodInfo *v27; // x3
  const MethodInfo *v28; // x4
  FriendSearchMenu_o *friendSearchMenu; // x20
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  FriendSearchMenu_CallbackFunc_o *v33; // x21
  const MethodInfo *v34; // x3
  const MethodInfo *v35; // x3

  v4 = this;
  if ( (byte_4B11472 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&FriendSearchResultMenu_CallbackFunc_TypeInfo, v5, v6);
    sub_1BCA7E0(&FriendSearchMenu_CallbackFunc_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_FriendRootComponent_OnSelectOffer__, v9, v10);
    sub_1BCA7E0(&Method_FriendRootComponent_OnSelectSearchFriend__, v11, v12);
    sub_1BCA7E0(&Method_FriendRootComponent_ShowSearchResult__, v13, v14);
    this = (FriendRootComponent_o *)sub_1BCA7E0(&StringLiteral_5544/*"END_ACTION"*/, v15, v16);
    byte_4B11472 = 1;
  }
  if ( v4->fields.state == 23 )
  {
    friendSearchResultMenu = v4->fields.friendSearchResultMenu;
    if ( !friendSearchResultMenu )
      goto LABEL_14;
    if ( friendSearchResultMenu->fields.isOpen )
    {
      v18 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
      System_Action___ctor(v18, (Il2CppObject *)v4, Method_FriendRootComponent_ShowSearchResult__, 0LL);
      FriendSearchResultMenu__Close_31503772(friendSearchResultMenu, v18, v19);
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
    v24 = v4->fields.friendSearchResultMenu;
    selectFriendEntity = v4->fields.selectFriendEntity;
    v26 = (FriendSearchResultMenu_CallbackFunc_o *)sub_1BCAA2C(
                                                     FriendSearchResultMenu_CallbackFunc_TypeInfo,
                                                     method,
                                                     v20,
                                                     v21);
    FriendSearchResultMenu_CallbackFunc___ctor(v26, (Il2CppObject *)v4, Method_FriendRootComponent_OnSelectOffer__, v27);
    if ( !v24
      || (FriendSearchResultMenu__Open(v24, selectFriendEntity, currentCursor, v26, v28),
          friendSearchMenu = v4->fields.friendSearchMenu,
          v33 = (FriendSearchMenu_CallbackFunc_o *)sub_1BCAA2C(FriendSearchMenu_CallbackFunc_TypeInfo, v30, v31, v32),
          FriendSearchMenu_CallbackFunc___ctor(
            v33,
            (Il2CppObject *)v4,
            Method_FriendRootComponent_OnSelectSearchFriend__,
            v34),
          !friendSearchMenu)
      || (FriendSearchMenu__Open(friendSearchMenu, v33, 0, v35),
          (this = (FriendRootComponent_o *)v4->fields.myFSM) == 0LL) )
    {
LABEL_14:
      sub_1BCAA3C(this, method);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_5544/*"END_ACTION"*/, 0LL);
    EventTutorialMaster__CheckTutorial(-1, 50, 0LL, 0, 0, 0, 0, 0LL);
  }
}


void __fastcall FriendRootComponent__StartSearchInput(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  FriendRootComponent_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  FriendSearchResultMenu_o *friendSearchResultMenu; // x20
  OtherUserGameEntity_o *selectFriendEntity; // x21
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  int32_t currentCursor; // w22
  FriendSearchResultMenu_CallbackFunc_o *v15; // x23
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x4
  FriendSearchMenu_o *friendSearchMenu; // x20
  FriendSearchMenu_CallbackFunc_o *v19; // x21
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x3

  v4 = this;
  if ( (byte_4B11473 & 1) == 0 )
  {
    sub_1BCA7E0(&FriendSearchResultMenu_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&FriendSearchMenu_CallbackFunc_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_FriendRootComponent_OnSelectOffer__, v7, v8);
    this = (FriendRootComponent_o *)sub_1BCA7E0(&Method_FriendRootComponent_OnSelectSearchFriend__, v9, v10);
    byte_4B11473 = 1;
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
      v15 = (FriendSearchResultMenu_CallbackFunc_o *)sub_1BCAA2C(
                                                       FriendSearchResultMenu_CallbackFunc_TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
      FriendSearchResultMenu_CallbackFunc___ctor(
        v15,
        (Il2CppObject *)v4,
        Method_FriendRootComponent_OnSelectOffer__,
        v16);
      FriendSearchResultMenu__Open(friendSearchResultMenu, selectFriendEntity, currentCursor, v15, v17);
    }
    else
    {
      FriendSearchResultMenu__Close_31503772(v4->fields.friendSearchResultMenu, 0LL, v2);
    }
  }
  friendSearchMenu = v4->fields.friendSearchMenu;
  v19 = (FriendSearchMenu_CallbackFunc_o *)sub_1BCAA2C(FriendSearchMenu_CallbackFunc_TypeInfo, method, v2, v3);
  FriendSearchMenu_CallbackFunc___ctor(v19, (Il2CppObject *)v4, Method_FriendRootComponent_OnSelectSearchFriend__, v20);
  if ( !friendSearchMenu )
LABEL_11:
    sub_1BCAA3C(this, method);
  FriendSearchMenu__Open(friendSearchMenu, v19, 0, v21);
}


void __fastcall FriendRootComponent___OnClickBack_b__100_0(
        FriendRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  System_Action_object__o *v12; // x20
  const MethodInfo *v13; // x2

  v4 = (Il2CppObject *)this;
  if ( (byte_4B114BF & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_string__TypeInfo, result, method);
    sub_1BCA7E0(&Method_FriendRootComponent__OnClickBack_b__100_1__, v5, v6);
    this = (FriendRootComponent_o *)sub_1BCA7E0(&StringLiteral_22465/*"ok"*/, v7, v8);
    byte_4B114BF = 1;
  }
  if ( !result )
    sub_1BCAA3C(this, result);
  if ( System_String__Equals_62409536(result, (System_String_o *)StringLiteral_22465/*"ok"*/, 0LL) )
  {
    v12 = (System_Action_object__o *)sub_1BCAA2C(System_Action_string__TypeInfo, v9, v10, v11);
    System_Action_object____ctor(v12, v4, Method_FriendRootComponent__OnClickBack_b__100_1__, 0LL);
    FriendRootComponent__FriendLockRequst((FriendRootComponent_o *)v4, (System_Action_string__o *)v12, v13);
  }
}


void __fastcall FriendRootComponent___OnClickBack_b__100_1(
        FriendRootComponent_o *this,
        System_String_o *res,
        const MethodInfo *method)
{
  FriendRootComponent_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2

  v4 = this;
  if ( (byte_4B114C0 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_22465/*"ok"*/, res, method);
    this = (FriendRootComponent_o *)sub_1BCA7E0(&StringLiteral_3554/*"CLICK_BACK"*/, v5, v6);
    byte_4B114C0 = 1;
  }
  if ( !res )
    goto LABEL_9;
  if ( System_String__Equals_62409536(res, (System_String_o *)StringLiteral_22465/*"ok"*/, 0LL) )
  {
    this = (FriendRootComponent_o *)v4->fields.friendSearchMenu;
    if ( this )
    {
      FriendSearchMenu__BlockInput((FriendSearchMenu_o *)this, (const MethodInfo *)res);
      this = (FriendRootComponent_o *)v4->fields.myFSM;
      if ( this )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3554/*"CLICK_BACK"*/, 0LL);
        return;
      }
    }
LABEL_9:
    sub_1BCAA3C(this, res);
  }
}


void __fastcall FriendRootComponent___OnClickModeUserDetail_b__102_0(
        FriendRootComponent_o *this,
        System_String_o *res,
        const MethodInfo *method)
{
  FriendRootComponent_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  const MethodInfo *v9; // x1

  v4 = this;
  if ( (byte_4B114C3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_FriendRootComponent__OnClickModeUserDetail_b__102_0__, res, method);
    this = (FriendRootComponent_o *)sub_1BCA7E0(&StringLiteral_22465/*"ok"*/, v5, v6);
    byte_4B114C3 = 1;
  }
  if ( !res )
    sub_1BCAA3C(this, res);
  if ( System_String__Equals_62409536(res, (System_String_o *)StringLiteral_22465/*"ok"*/, 0LL) )
  {
    v7 = Method_FriendRootComponent__OnClickModeUserDetail_b__102_0__;
    if ( (*((_BYTE *)Method_FriendRootComponent__OnClickModeUserDetail_b__102_0__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1BCA7F8(Method_FriendRootComponent__OnClickModeUserDetail_b__102_0__);
    v8 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
    v4->fields.currentModeKind = 0;
    FriendRootComponent__RefreshInfo(v4, v9);
  }
}


void __fastcall FriendRootComponent___OnClickTabFriend_b__109_0(
        FriendRootComponent_o *this,
        System_String_o *res,
        const MethodInfo *method)
{
  FriendRootComponent_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  int state; // w8
  struct FriendSearchResultMenu_o *friendSearchResultMenu; // x8
  struct FriendSearchResultMenu_o *v11; // x8
  struct ClassButtonControlComponent_o *v12; // x8
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0
  FriendRootComponent_o *v15; // x0
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x1
  struct ClassButtonControlComponent_o *classButtonControl; // x8

  v4 = this;
  if ( (byte_4B114C4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_FriendRootComponent__OnClickTabFriend_b__109_0__, res, method);
    sub_1BCA7E0(&StringLiteral_22465/*"ok"*/, v5, v6);
    this = (FriendRootComponent_o *)sub_1BCA7E0(&StringLiteral_3601/*"CLICK_TAB"*/, v7, v8);
    byte_4B114C4 = 1;
  }
  if ( !res )
    goto LABEL_24;
  this = (FriendRootComponent_o *)System_String__Equals_62409536(res, (System_String_o *)StringLiteral_22465/*"ok"*/, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    return;
  state = v4->fields.state;
  if ( state <= 9 )
  {
    if ( state != 4 && state != 9 )
      return;
LABEL_18:
    v13 = Method_FriendRootComponent__OnClickTabFriend_b__109_0__;
    if ( (*((_BYTE *)Method_FriendRootComponent__OnClickTabFriend_b__109_0__ + 83) & 2) != 0 )
      v13 = (_QWORD *)sub_1BCA7F8(Method_FriendRootComponent__OnClickTabFriend_b__109_0__);
    v14 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v13, v13[4]);
    OverwriteAssetSoundName__PlaySystemSe(v14, 0, 0LL);
    FriendRootComponent__set_tabKind(v15, 0, v16);
    FriendRootComponent__RefreshTab(v4, v17);
    classButtonControl = v4->fields.classButtonControl;
    if ( classButtonControl )
    {
      classButtonControl->fields.updateEnable = 0;
      this = (FriendRootComponent_o *)v4->fields.myFSM;
      if ( this )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3601/*"CLICK_TAB"*/, 0LL);
        return;
      }
    }
LABEL_24:
    sub_1BCAA3C(this, res);
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
                                      0LL);
    if ( (_DWORD)this != -1 )
    {
      v11 = v4->fields.friendSearchResultMenu;
      if ( !v11 )
        goto LABEL_24;
      v12 = v11->fields.classButtonControl;
      if ( !v12 )
        goto LABEL_24;
      this = (FriendRootComponent_o *)v4->fields.classButtonControl;
      if ( !this )
        goto LABEL_24;
      ClassButtonControlComponent__setCursor((ClassButtonControlComponent_o *)this, v12->fields.currentCursor, 0LL);
    }
    goto LABEL_18;
  }
}


void __fastcall FriendRootComponent___OnClickTabOffered_b__110_0(
        FriendRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  System_Action_object__o *v12; // x20
  const MethodInfo *v13; // x2

  v4 = (Il2CppObject *)this;
  if ( (byte_4B114C5 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_string__TypeInfo, result, method);
    sub_1BCA7E0(&Method_FriendRootComponent__OnClickTabOffered_b__110_1__, v5, v6);
    this = (FriendRootComponent_o *)sub_1BCA7E0(&StringLiteral_22465/*"ok"*/, v7, v8);
    byte_4B114C5 = 1;
  }
  if ( !result )
    sub_1BCAA3C(this, result);
  if ( System_String__Equals_62409536(result, (System_String_o *)StringLiteral_22465/*"ok"*/, 0LL) )
  {
    v12 = (System_Action_object__o *)sub_1BCAA2C(System_Action_string__TypeInfo, v9, v10, v11);
    System_Action_object____ctor(v12, v4, (intptr_t)Method_FriendRootComponent__OnClickTabOffered_b__110_1__, 0LL);
    FriendRootComponent__FriendLockRequst((FriendRootComponent_o *)v4, (System_Action_string__o *)v12, v13);
  }
}


void __fastcall FriendRootComponent___OnClickTabOffered_b__110_1(
        FriendRootComponent_o *this,
        System_String_o *res,
        const MethodInfo *method)
{
  FriendRootComponent_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  int state; // w8
  struct FriendSearchResultMenu_o *friendSearchResultMenu; // x8
  struct FriendSearchResultMenu_o *v11; // x8
  struct ClassButtonControlComponent_o *v12; // x8
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0
  FriendRootComponent_o *v15; // x0
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x1
  struct ClassButtonControlComponent_o *classButtonControl; // x8

  v4 = this;
  if ( (byte_4B114C6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_FriendRootComponent__OnClickTabOffered_b__110_1__, res, method);
    sub_1BCA7E0(&StringLiteral_22465/*"ok"*/, v5, v6);
    this = (FriendRootComponent_o *)sub_1BCA7E0(&StringLiteral_3601/*"CLICK_TAB"*/, v7, v8);
    byte_4B114C6 = 1;
  }
  if ( !res )
    goto LABEL_24;
  this = (FriendRootComponent_o *)System_String__Equals_62409536(res, (System_String_o *)StringLiteral_22465/*"ok"*/, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    return;
  state = v4->fields.state;
  if ( state <= 9 )
  {
    if ( state != 4 && state != 9 )
      return;
LABEL_18:
    v13 = Method_FriendRootComponent__OnClickTabOffered_b__110_1__;
    if ( (*((_BYTE *)Method_FriendRootComponent__OnClickTabOffered_b__110_1__ + 83) & 2) != 0 )
      v13 = (_QWORD *)sub_1BCA7F8(Method_FriendRootComponent__OnClickTabOffered_b__110_1__);
    v14 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v13, v13[4]);
    OverwriteAssetSoundName__PlaySystemSe(v14, 0, 0LL);
    FriendRootComponent__set_tabKind(v15, 1, v16);
    FriendRootComponent__RefreshTab(v4, v17);
    classButtonControl = v4->fields.classButtonControl;
    if ( classButtonControl )
    {
      classButtonControl->fields.updateEnable = 0;
      this = (FriendRootComponent_o *)v4->fields.myFSM;
      if ( this )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3601/*"CLICK_TAB"*/, 0LL);
        return;
      }
    }
LABEL_24:
    sub_1BCAA3C(this, res);
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
                                      0LL);
    if ( (_DWORD)this != -1 )
    {
      v11 = v4->fields.friendSearchResultMenu;
      if ( !v11 )
        goto LABEL_24;
      v12 = v11->fields.classButtonControl;
      if ( !v12 )
        goto LABEL_24;
      this = (FriendRootComponent_o *)v4->fields.classButtonControl;
      if ( !this )
        goto LABEL_24;
      ClassButtonControlComponent__setCursor((ClassButtonControlComponent_o *)this, v12->fields.currentCursor, 0LL);
    }
    goto LABEL_18;
  }
}


void __fastcall FriendRootComponent___OnClickTabSearch_b__111_0(
        FriendRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  System_Action_object__o *v12; // x20
  const MethodInfo *v13; // x2

  v4 = (Il2CppObject *)this;
  if ( (byte_4B114C7 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_string__TypeInfo, result, method);
    sub_1BCA7E0(&Method_FriendRootComponent__OnClickTabSearch_b__111_1__, v5, v6);
    this = (FriendRootComponent_o *)sub_1BCA7E0(&StringLiteral_22465/*"ok"*/, v7, v8);
    byte_4B114C7 = 1;
  }
  if ( !result )
    sub_1BCAA3C(this, result);
  if ( System_String__Equals_62409536(result, (System_String_o *)StringLiteral_22465/*"ok"*/, 0LL) )
  {
    v12 = (System_Action_object__o *)sub_1BCAA2C(System_Action_string__TypeInfo, v9, v10, v11);
    System_Action_object____ctor(v12, v4, (intptr_t)Method_FriendRootComponent__OnClickTabSearch_b__111_1__, 0LL);
    FriendRootComponent__FriendLockRequst((FriendRootComponent_o *)v4, (System_Action_string__o *)v12, v13);
  }
}


void __fastcall FriendRootComponent___OnClickTabSearch_b__111_1(
        FriendRootComponent_o *this,
        System_String_o *res,
        const MethodInfo *method)
{
  FriendRootComponent_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  int state; // w8
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  FriendRootComponent_o *v12; // x0
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x1
  struct ClassButtonControlComponent_o *classButtonControl; // x8

  v4 = this;
  if ( (byte_4B114C8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_FriendRootComponent__OnClickTabSearch_b__111_1__, res, method);
    sub_1BCA7E0(&StringLiteral_22465/*"ok"*/, v5, v6);
    this = (FriendRootComponent_o *)sub_1BCA7E0(&StringLiteral_3601/*"CLICK_TAB"*/, v7, v8);
    byte_4B114C8 = 1;
  }
  if ( !res )
    goto LABEL_17;
  if ( !System_String__Equals_62409536(res, (System_String_o *)StringLiteral_22465/*"ok"*/, 0LL) )
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
    v10 = Method_FriendRootComponent__OnClickTabSearch_b__111_1__;
    if ( (*((_BYTE *)Method_FriendRootComponent__OnClickTabSearch_b__111_1__ + 83) & 2) != 0 )
      v10 = (_QWORD *)sub_1BCA7F8(Method_FriendRootComponent__OnClickTabSearch_b__111_1__);
    v11 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v10, v10[4]);
    OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
    FriendRootComponent__set_tabKind(v12, 2, v13);
    FriendRootComponent__RefreshTab(v4, v14);
    classButtonControl = v4->fields.classButtonControl;
    if ( classButtonControl )
    {
      classButtonControl->fields.updateEnable = 0;
      this = (FriendRootComponent_o *)v4->fields.myFSM;
      if ( this )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3601/*"CLICK_TAB"*/, 0LL);
        return;
      }
    }
LABEL_17:
    sub_1BCAA3C(this, res);
  }
}


void __fastcall FriendRootComponent___RequestFollowRemove_b__143_0(
        FriendRootComponent_o *this,
        System_String_o *res,
        const MethodInfo *method)
{
  FriendRootComponent_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  const MethodInfo *v17; // x2
  FriendOperationItemListViewItem_o *Item; // x0
  struct OtherUserGameEntity_o *otherUserGameEntity; // x21
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  NetworkManager_ResultCallbackFunc_o *v23; // x20
  __int64 v24; // x1

  v4 = this;
  if ( (byte_4B114C9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_FriendRootComponent_EndRequestFollowRemove__, res, method);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_FollowdRemoveRequest___, v5, v6);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11, v12);
    sub_1BCA7E0(&StringLiteral_22465/*"ok"*/, v13, v14);
    this = (FriendRootComponent_o *)sub_1BCA7E0(&StringLiteral_11195/*"REQUEST_NG"*/, v15, v16);
    byte_4B114C9 = 1;
  }
  if ( !res )
    goto LABEL_15;
  if ( System_String__Equals_62409536(res, (System_String_o *)StringLiteral_22465/*"ok"*/, 0LL) )
  {
    this = (FriendRootComponent_o *)v4->fields.operationItemListViewManager;
    if ( !this )
      goto LABEL_15;
    Item = FriendOperationItemListViewManager__GetItem(
             (FriendOperationItemListViewManager_o *)this,
             v4->fields.selectItemNum,
             v17);
    if ( Item )
    {
      otherUserGameEntity = Item->fields.otherUserGameEntity;
      if ( otherUserGameEntity )
      {
        this = (FriendRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( this )
        {
          CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)this, 0, 0LL);
          v23 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(
                                                         NetworkManager_ResultCallbackFunc_TypeInfo,
                                                         v20,
                                                         v21,
                                                         v22);
          NetworkManager_ResultCallbackFunc___ctor(
            v23,
            (Il2CppObject *)v4,
            Method_FriendRootComponent_EndRequestFollowRemove__,
            0LL);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v24);
          this = (FriendRootComponent_o *)NetworkManager__getRequest_object_(
                                            v23,
                                            (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_FollowdRemoveRequest___);
          if ( this )
          {
            FollowdRemoveRequest__beginRequest((FollowdRemoveRequest_o *)this, otherUserGameEntity->fields.userId, 0LL);
            return;
          }
        }
LABEL_15:
        sub_1BCAA3C(this, res);
      }
    }
  }
  this = (FriendRootComponent_o *)v4->fields.myFSM;
  if ( !this )
    goto LABEL_15;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11195/*"REQUEST_NG"*/, 0LL);
}


void __fastcall FriendRootComponent___RequestFriendOffer2_b__88_0(
        FriendRootComponent_o *this,
        System_String_o *res,
        const MethodInfo *method)
{
  FriendRootComponent_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  const MethodInfo *v15; // x2
  FriendOperationItemListViewItem_o *Item; // x0
  __int64 v17; // x2
  __int64 v18; // x3
  struct OtherUserGameEntity_o *otherUserGameEntity; // x21
  NetworkManager_ResultCallbackFunc_o *v20; // x20
  __int64 v21; // x1

  v4 = this;
  if ( (byte_4B114BD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_FriendRootComponent_EndRequestFriend__, res, method);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_FriendOfferRequest___, v5, v6);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_22465/*"ok"*/, v11, v12);
    this = (FriendRootComponent_o *)sub_1BCA7E0(&StringLiteral_11195/*"REQUEST_NG"*/, v13, v14);
    byte_4B114BD = 1;
  }
  if ( !res )
    goto LABEL_14;
  if ( System_String__Equals_62409536(res, (System_String_o *)StringLiteral_22465/*"ok"*/, 0LL) )
  {
    this = (FriendRootComponent_o *)v4->fields.operationItemListViewManager;
    if ( !this )
      goto LABEL_14;
    Item = FriendOperationItemListViewManager__GetItem(
             (FriendOperationItemListViewManager_o *)this,
             v4->fields.selectItemNum,
             v15);
    if ( Item )
    {
      otherUserGameEntity = Item->fields.otherUserGameEntity;
      if ( otherUserGameEntity )
      {
        v20 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(
                                                       NetworkManager_ResultCallbackFunc_TypeInfo,
                                                       res,
                                                       v17,
                                                       v18);
        NetworkManager_ResultCallbackFunc___ctor(
          v20,
          (Il2CppObject *)v4,
          Method_FriendRootComponent_EndRequestFriend__,
          0LL);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v21);
        this = (FriendRootComponent_o *)NetworkManager__getRequest_object_(
                                          v20,
                                          (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_FriendOfferRequest___);
        if ( this )
        {
          FriendOfferRequest__beginRequest((FriendOfferRequest_o *)this, otherUserGameEntity->fields.userId, 0LL);
          return;
        }
LABEL_14:
        sub_1BCAA3C(this, res);
      }
    }
  }
  this = (FriendRootComponent_o *)v4->fields.myFSM;
  if ( !this )
    goto LABEL_14;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11195/*"REQUEST_NG"*/, 0LL);
}


void __fastcall FriendRootComponent___RequestFriendRemove_b__92_0(
        FriendRootComponent_o *this,
        System_String_o *res,
        const MethodInfo *method)
{
  FriendRootComponent_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  const MethodInfo *v17; // x2
  FriendOperationItemListViewItem_o *Item; // x0
  struct OtherUserGameEntity_o *otherUserGameEntity; // x21
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  NetworkManager_ResultCallbackFunc_o *v23; // x20
  __int64 v24; // x1

  v4 = this;
  if ( (byte_4B114BE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_FriendRootComponent_EndRequestFriend__, res, method);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_FriendRemoveRequest___, v5, v6);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11, v12);
    sub_1BCA7E0(&StringLiteral_22465/*"ok"*/, v13, v14);
    this = (FriendRootComponent_o *)sub_1BCA7E0(&StringLiteral_11195/*"REQUEST_NG"*/, v15, v16);
    byte_4B114BE = 1;
  }
  if ( !res )
    goto LABEL_15;
  if ( System_String__Equals_62409536(res, (System_String_o *)StringLiteral_22465/*"ok"*/, 0LL) )
  {
    this = (FriendRootComponent_o *)v4->fields.operationItemListViewManager;
    if ( !this )
      goto LABEL_15;
    Item = FriendOperationItemListViewManager__GetItem(
             (FriendOperationItemListViewManager_o *)this,
             v4->fields.selectItemNum,
             v17);
    if ( Item )
    {
      otherUserGameEntity = Item->fields.otherUserGameEntity;
      if ( otherUserGameEntity )
      {
        this = (FriendRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( this )
        {
          CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)this, 0, 0LL);
          v23 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(
                                                         NetworkManager_ResultCallbackFunc_TypeInfo,
                                                         v20,
                                                         v21,
                                                         v22);
          NetworkManager_ResultCallbackFunc___ctor(
            v23,
            (Il2CppObject *)v4,
            Method_FriendRootComponent_EndRequestFriend__,
            0LL);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v24);
          this = (FriendRootComponent_o *)NetworkManager__getRequest_object_(
                                            v23,
                                            (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_FriendRemoveRequest___);
          if ( this )
          {
            FriendRemoveRequest__beginRequest((FriendRemoveRequest_o *)this, otherUserGameEntity->fields.userId, 0LL);
            return;
          }
        }
LABEL_15:
        sub_1BCAA3C(this, res);
      }
    }
  }
  this = (FriendRootComponent_o *)v4->fields.myFSM;
  if ( !this )
    goto LABEL_15;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11195/*"REQUEST_NG"*/, 0LL);
}


void __fastcall FriendRootComponent___afterMainMenubarSelect_b__101_0(
        FriendRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  FriendRootComponent_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x2
  __int64 v12; // x3
  System_Action_object__o *v13; // x20
  const MethodInfo *v14; // x2

  v4 = this;
  if ( (byte_4B114C1 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_string__TypeInfo, result, method);
    sub_1BCA7E0(&Method_FriendRootComponent__afterMainMenubarSelect_b__101_1__, v5, v6);
    sub_1BCA7E0(&StringLiteral_22465/*"ok"*/, v7, v8);
    this = (FriendRootComponent_o *)sub_1BCA7E0(&StringLiteral_11195/*"REQUEST_NG"*/, v9, v10);
    byte_4B114C1 = 1;
  }
  if ( !result )
    goto LABEL_8;
  if ( System_String__Equals_62409536(result, (System_String_o *)StringLiteral_22465/*"ok"*/, 0LL) )
  {
    v13 = (System_Action_object__o *)sub_1BCAA2C(System_Action_string__TypeInfo, result, v11, v12);
    System_Action_object____ctor(
      v13,
      (Il2CppObject *)v4,
      Method_FriendRootComponent__afterMainMenubarSelect_b__101_1__,
      0LL);
    FriendRootComponent__FriendLockRequst(v4, (System_Action_string__o *)v13, v14);
    return;
  }
  this = (FriendRootComponent_o *)v4->fields.myFSM;
  if ( !this )
LABEL_8:
    sub_1BCAA3C(this, result);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11195/*"REQUEST_NG"*/, 0LL);
}


void __fastcall FriendRootComponent___afterMainMenubarSelect_b__101_1(
        FriendRootComponent_o *this,
        System_String_o *res,
        const MethodInfo *method)
{
  FriendRootComponent_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  PlayMakerFSM_o *myFSM; // x8
  __int64 *v10; // x9

  v4 = this;
  if ( (byte_4B114C2 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_11197/*"REQUEST_OK"*/, res, method);
    sub_1BCA7E0(&StringLiteral_22465/*"ok"*/, v5, v6);
    this = (FriendRootComponent_o *)sub_1BCA7E0(&StringLiteral_11195/*"REQUEST_NG"*/, v7, v8);
    byte_4B114C2 = 1;
  }
  if ( !res
    || (this = (FriendRootComponent_o *)System_String__Equals_62409536(res, (System_String_o *)StringLiteral_22465/*"ok"*/, 0LL),
        (myFSM = v4->fields.myFSM) == 0LL) )
  {
    sub_1BCAA3C(this, res);
  }
  v10 = &StringLiteral_11197/*"REQUEST_OK"*/;
  if ( ((unsigned __int8)this & 1) == 0 )
    v10 = &StringLiteral_11195/*"REQUEST_NG"*/;
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)*v10, 0LL);
}


void __fastcall FriendRootComponent__afterMainMenubarSelect(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  FriendRootComponent_messageRequestCallback_o *v7; // x20
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2

  if ( (byte_4B11493 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_FriendRootComponent__afterMainMenubarSelect_b__101_0__, method, v2);
    sub_1BCA7E0(&FriendRootComponent_messageRequestCallback_TypeInfo, v5, v6);
    byte_4B11493 = 1;
  }
  v7 = (FriendRootComponent_messageRequestCallback_o *)sub_1BCAA2C(
                                                         FriendRootComponent_messageRequestCallback_TypeInfo,
                                                         method,
                                                         v2,
                                                         v3);
  FriendRootComponent_messageRequestCallback___ctor(
    v7,
    (Il2CppObject *)this,
    Method_FriendRootComponent__afterMainMenubarSelect_b__101_0__,
    v8);
  FriendRootComponent__messageDispChangeRequest(this, v7, v9);
}


void __fastcall FriendRootComponent__beginFinish(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  __int64 v5; // x1

  if ( (byte_4B11463 & 1) == 0 )
  {
    sub_1BCA7E0(&RandomLimitCountManager_TypeInfo, method, v2);
    byte_4B11463 = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    goto LABEL_13;
  operationItemListViewManager->fields._isMessageApply_k__BackingField = 0;
  FriendOperationItemListViewManager__DestroyList(operationItemListViewManager, method);
  operationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.operationConfirmMenu;
  if ( !operationItemListViewManager )
    goto LABEL_13;
  FriendOperationConfirmMenu__Init((FriendOperationConfirmMenu_o *)operationItemListViewManager, 0LL);
  operationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.friendSearchMenu;
  if ( !operationItemListViewManager
    || (FriendSearchMenu__Init((FriendSearchMenu_o *)operationItemListViewManager, method),
        (operationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.friendSearchResultMenu) == 0LL)
    || (FriendSearchResultMenu__Init((FriendSearchResultMenu_o *)operationItemListViewManager, method),
        (operationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.friendWarningDialog) == 0LL)
    || (FriendWarningDialog__Init((FriendWarningDialog_o *)operationItemListViewManager, method),
        (operationItemListViewManager = this->fields.operationItemListViewManager) == 0LL)
    || (operationItemListViewManager = (FriendOperationItemListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                                 (UnityEngine_Component_o *)operationItemListViewManager,
                                                                                 0LL)) == 0LL )
  {
LABEL_13:
    sub_1BCAA3C(operationItemListViewManager, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)operationItemListViewManager, 0, 0LL);
  this->fields.state = 0;
  this->fields.selectFriendEntity = 0LL;
  sub_1BCA784(&this->fields.selectFriendEntity, 0LL);
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, v5);
  RandomLimitCountManager__set_EnableRandomLimitCount(0, 0LL);
}


void __fastcall FriendRootComponent__beginInitialize(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x1
  UnityEngine_Component_o *bgTxtSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  ClassButtonControlComponent_o *classButtonControl; // x20
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  ClassButtonControlComponent_CallbackFunc_o *v20; // x21
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  System_Action_o *v24; // x20
  __int64 v25; // x1

  if ( (byte_4B1145D & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&AtlasManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&ClassButtonControlComponent_CallbackFunc_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_FriendRootComponent_EndLoadOutGameAtlas__, v8, v9);
    sub_1BCA7E0(&Method_FriendRootComponent_changeClass__, v10, v11);
    byte_4B1145D = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 7, 39, 0LL);
  FriendRootComponent__CheckHelpUI(this, v12);
  bgTxtSprite = (UnityEngine_Component_o *)this->fields.bgTxtSprite;
  if ( !bgTxtSprite )
    goto LABEL_10;
  gameObject = UnityEngine_Component__get_gameObject(bgTxtSprite, 0LL);
  bgTxtSprite = (UnityEngine_Component_o *)BgTxtManager__IsActiveBgTxt(0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)bgTxtSprite & 1, 0LL),
        classButtonControl = this->fields.classButtonControl,
        v20 = (ClassButtonControlComponent_CallbackFunc_o *)sub_1BCAA2C(
                                                              ClassButtonControlComponent_CallbackFunc_TypeInfo,
                                                              v17,
                                                              v18,
                                                              v19),
        ClassButtonControlComponent_CallbackFunc___ctor(
          v20,
          (Il2CppObject *)this,
          (intptr_t)Method_FriendRootComponent_changeClass__,
          0LL),
        !classButtonControl)
    || (ClassButtonControlComponent__init(classButtonControl, v20, 0, 0, 0, 0LL),
        (bgTxtSprite = (UnityEngine_Component_o *)this->fields.operationItemListViewManager) == 0LL) )
  {
LABEL_10:
    sub_1BCAA3C(bgTxtSprite, v13);
  }
  FriendOperationItemListViewManager__SetupClassBoardInfo((FriendOperationItemListViewManager_o *)bgTxtSprite, v13);
  v24 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v21, v22, v23);
  System_Action___ctor(v24, (Il2CppObject *)this, Method_FriendRootComponent_EndLoadOutGameAtlas__, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v25);
  AtlasManager__LoadOutGameAtlas(v24, 0LL);
}


void __fastcall FriendRootComponent__beginResume(
        FriendRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 methodPtr_low; // x10
  FriendOperationItemListViewManager_o *Instance; // x0
  __int64 v11; // x1
  CommonUI_o *v12; // x20
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_4B11464 & 1) == 0 )
  {
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, data, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6);
    sub_1BCA7E0(&SupportInfoJump_TypeInfo, v7, v8);
    byte_4B11464 = 1;
  }
  if ( data
    && (methodPtr_low = LOBYTE(SupportInfoJump_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(data->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low)
    && (SupportInfoJump_c *)data->klass->_2.typeHierarchy[methodPtr_low - 1] == SupportInfoJump_TypeInfo )
  {
    this->fields.isReturnSupport = 1;
    Instance = (FriendOperationItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v12 = (CommonUI_o *)Instance;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v11);
    if ( !v12
      || (CommonUI__maskFadein(v12, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL),
          FriendRootComponent__RefreshTab(this, v13),
          (Instance = this->fields.operationItemListViewManager) == 0LL) )
    {
      sub_1BCAA3C(Instance, v11);
    }
    FriendOperationItemListViewManager__SetMode_31475908(Instance, 2, v14);
    SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 7, 39, 0LL);
    MainMenuBar__setMenuActive(1, 0LL, 0LL);
    SceneRootComponent__sendMessageStartUp((SceneRootComponent_o *)this, 0LL);
  }
  else
  {
    SceneRootComponent__beginResume_39383112((SceneRootComponent_o *)this, 0LL);
    this->fields.isReturnSupport = 0;
  }
}


void __fastcall FriendRootComponent__beginStartUp(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x1
  System_String_o *MainBgmName; // x20
  __int64 v19; // x1
  TitleInfoControl_o *titleInfo; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  NetworkManager_ResultCallbackFunc_o *v24; // x20
  __int64 v25; // x1

  if ( (byte_4B1145F & 1) == 0 )
  {
    sub_1BCA7E0(&BgmManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_FriendRootComponent_EndFriendRequest__, v4, v5);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_FriendTopRequest___, v6, v7);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&RandomLimitCountManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v12, v13);
    sub_1BCA7E0(&SoundManager_TypeInfo, v14, v15);
    byte_4B1145F = 1;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, method);
  RandomLimitCountManager__set_EnableRandomLimitCount(1, 0LL);
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v16);
  MainBgmName = BgmManager__GetMainBgmName(0LL);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v17);
  SoundManager__playBgm(MainBgmName, 0LL);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_15;
  TitleInfoControl__setTitleInfo(titleInfo, this->fields.myFSM, 1, 0LL, 40, 0LL);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_15;
  TitleInfoControl__setBackBtnSprite_37887988(titleInfo, 1, 0, 0, 0LL);
  this->fields.state = 0;
  this->fields.currentModeKind = 0;
  this->fields.selectFriendEntity = 0LL;
  sub_1BCA784(&this->fields.selectFriendEntity, 0LL);
  v24 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(NetworkManager_ResultCallbackFunc_TypeInfo, v21, v22, v23);
  NetworkManager_ResultCallbackFunc___ctor(
    v24,
    (Il2CppObject *)this,
    Method_FriendRootComponent_EndFriendRequest__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v25);
  titleInfo = (TitleInfoControl_o *)NetworkManager__getRequest_object_(
                                      v24,
                                      (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_FriendTopRequest___);
  if ( !titleInfo )
LABEL_15:
    sub_1BCAA3C(titleInfo, v19);
  RequestBase__beginRequest((RequestBase_o *)titleInfo, 0LL);
}


void __fastcall FriendRootComponent__beginStartUp_31494136(
        FriendRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  struct SceneJumpInfo_o **p_jumpInfo; // x20
  Il2CppClass *v6; // x8
  __int64 methodPtr_low; // x9
  Il2CppObject *v8; // x1

  if ( (byte_4B11460 & 1) == 0 )
  {
    sub_1BCA7E0(&SceneJumpInfo_TypeInfo, data, method);
    byte_4B11460 = 1;
  }
  p_jumpInfo = &this->fields.jumpInfo;
  this->fields.jumpInfo = 0LL;
  sub_1BCA784(&this->fields.jumpInfo, 0LL);
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
      sub_1BCA784(&this->fields.jumpInfo, v8);
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

  if ( (byte_4B1149D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_FriendRootComponent_changeClass__, *(_QWORD *)&classPos, method);
    byte_4B1149D = 1;
  }
  v5 = Method_FriendRootComponent_changeClass__;
  if ( (*((_BYTE *)Method_FriendRootComponent_changeClass__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1BCA7F8(Method_FriendRootComponent_changeClass__);
  v6 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    sub_1BCAA3C(0LL, v7);
  FriendOperationItemListViewManager__SetClassId(operationItemListViewManager, classPos, v8);
}


int32_t __fastcall FriendRootComponent__get_tabKind(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t result; // w0
  FriendRootComponent_c *v5; // x0

  if ( (byte_4B1145C & 1) == 0 )
  {
    sub_1BCA7E0(&FriendRootComponent_TypeInfo, method, v2);
    byte_4B1145C = 1;
  }
  result = this->fields.jumpTabKind;
  if ( result == 3 )
  {
    v5 = FriendRootComponent_TypeInfo;
    if ( !FriendRootComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FriendRootComponent_TypeInfo, method);
      v5 = FriendRootComponent_TypeInfo;
    }
    return v5->static_fields->tabKindSave;
  }
  return result;
}


void __fastcall FriendRootComponent__messageDispChangeRequest(
        FriendRootComponent_o *this,
        FriendRootComponent_messageRequestCallback_o *callback,
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
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  Il2CppObject *v24; // x20
  ListViewManager_o *operationItemListViewManager; // x0
  int64_t v26; // x1
  void **p_monitor; // x22
  int32_t ItemSum; // w23
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  System_Collections_Generic_List_long__o *v32; // x21
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  System_Collections_Generic_List_long__o *v36; // x22
  const MethodInfo *v37; // x2
  __int64 v38; // x3
  int32_t i; // w24
  struct UnityEngine_GameObject_o *dragParentObject; // x8
  struct System_Int64_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x8
  struct System_Int64_array *v45; // x8
  _QWORD *v46; // x9
  __int64 v47; // x10
  __int64 v48; // x8
  System_Collections_Generic_List_long__o *v49; // x0
  NetworkManager_ResultCallbackFunc_o *v50; // x19
  __int64 v51; // x1
  FriendMessageHideSyncRequest_o *v52; // x19
  System_Int64_array *v53; // x20

  if ( (byte_4B1149B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__Add__, callback, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__ToArray__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long___ctor__, v8, v9);
    sub_1BCA7E0(&System_Collections_Generic_List_long__TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_FriendMessageHideSyncRequest___, v12, v13);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v14, v15);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_FriendRootComponent___c__DisplayClass112_0__messageDispChangeRequest_b__0__, v18, v19);
    sub_1BCA7E0(&FriendRootComponent___c__DisplayClass112_0_TypeInfo, v20, v21);
    sub_1BCA7E0(&StringLiteral_22465/*"ok"*/, v22, v23);
    byte_4B1149B = 1;
  }
  v24 = (Il2CppObject *)sub_1BCAA2C(FriendRootComponent___c__DisplayClass112_0_TypeInfo, callback, method, v3);
  System_Object___ctor(v24, 0LL);
  if ( !v24 )
    goto LABEL_35;
  v24[1].klass = (Il2CppClass *)this;
  sub_1BCA784(&v24[1], this);
  v24[1].monitor = callback;
  p_monitor = &v24[1].monitor;
  sub_1BCA784(&v24[1].monitor, callback);
  operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    goto LABEL_35;
  if ( LOBYTE(operationItemListViewManager[1].fields.emptyMessageLabel) )
  {
    ItemSum = ListViewManager__get_ItemSum(operationItemListViewManager, 0LL);
    v32 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_long__TypeInfo,
                                                       v29,
                                                       v30,
                                                       v31);
    System_Collections_Generic_List_long____ctor(
      v32,
      (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
    v36 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_long__TypeInfo,
                                                       v33,
                                                       v34,
                                                       v35);
    System_Collections_Generic_List_long____ctor(
      v36,
      (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
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
                                                              v37);
        if ( !operationItemListViewManager )
          goto LABEL_35;
        if ( LODWORD(operationItemListViewManager->fields.clipRange.fields.x) == 3 )
        {
          dragParentObject = operationItemListViewManager->fields.dragParentObject;
          if ( !dragParentObject )
            goto LABEL_35;
          v26 = *(_QWORD *)&dragParentObject->fields.m_CachedPtr;
          if ( LOBYTE(operationItemListViewManager->fields.SortObject) )
          {
            if ( !v32 )
              goto LABEL_35;
            items = v32->fields._items;
            v42 = Method_System_Collections_Generic_List_long__Add__;
            ++v32->fields._version;
            if ( !items )
              goto LABEL_35;
            size = v32->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              v48 = v42[4];
              v49 = v32;
LABEL_24:
              System_Collections_Generic_List_long___AddWithResize(
                v49,
                v26,
                *(const MethodInfo_3589C90 **)(*(_QWORD *)(v48 + 192) + 112LL));
              continue;
            }
            v44 = &items->obj.klass + size;
            v32->fields._size = size + 1;
          }
          else
          {
            if ( !v36 )
              goto LABEL_35;
            v45 = v36->fields._items;
            v46 = Method_System_Collections_Generic_List_long__Add__;
            ++v36->fields._version;
            if ( !v45 )
              goto LABEL_35;
            v47 = v36->fields._size;
            if ( (unsigned int)v47 >= v45->max_length )
            {
              v48 = v46[4];
              v49 = v36;
              goto LABEL_24;
            }
            v44 = &v45->obj.klass + v47;
            v36->fields._size = v47 + 1;
          }
          v44[4] = (Il2CppClass *)v26;
        }
      }
    }
    v50 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(NetworkManager_ResultCallbackFunc_TypeInfo, v26, v37, v38);
    NetworkManager_ResultCallbackFunc___ctor(
      v50,
      v24,
      Method_FriendRootComponent___c__DisplayClass112_0__messageDispChangeRequest_b__0__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v51);
    operationItemListViewManager = (ListViewManager_o *)NetworkManager__getRequest_object_(
                                                          v50,
                                                          (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_FriendMessageHideSyncRequest___);
    if ( v36 )
    {
      v52 = (FriendMessageHideSyncRequest_o *)operationItemListViewManager;
      operationItemListViewManager = (ListViewManager_o *)System_Collections_Generic_List_long___ToArray(
                                                            v36,
                                                            (const MethodInfo_358B748 *)Method_System_Collections_Generic_List_long__ToArray__);
      if ( v32 )
      {
        v53 = (System_Int64_array *)operationItemListViewManager;
        operationItemListViewManager = (ListViewManager_o *)System_Collections_Generic_List_long___ToArray(
                                                              v32,
                                                              (const MethodInfo_358B748 *)Method_System_Collections_Generic_List_long__ToArray__);
        if ( v52 )
        {
          FriendMessageHideSyncRequest__beginRequest(v52, v53, (System_Int64_array *)operationItemListViewManager, 0LL);
          return;
        }
      }
    }
LABEL_35:
    sub_1BCAA3C(operationItemListViewManager, v26);
  }
  if ( *p_monitor )
    (*((void (__fastcall **)(_QWORD, __int64, _QWORD))*p_monitor + 3))(
      *((_QWORD *)*p_monitor + 8),
      StringLiteral_22465/*"ok"*/,
      *((_QWORD *)*p_monitor + 5));
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendRootComponent__set_tabKind(FriendRootComponent_o *this, int32_t value, const MethodInfo *method)
{
  FriendRootComponent_c *v4; // x0

  if ( (byte_4B1145B & 1) == 0 )
  {
    sub_1BCA7E0(&FriendRootComponent_TypeInfo, *(_QWORD *)&value, method);
    byte_4B1145B = 1;
  }
  v4 = FriendRootComponent_TypeInfo;
  if ( !FriendRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendRootComponent_TypeInfo, *(_QWORD *)&value);
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
    sub_1BCAA3C(this, result);
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
  __int64 v6; // x2
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  int32_t v10; // w21
  struct FriendRootComponent_o *_4__this; // x8

  if ( (byte_4B114CA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ActionExtensions_Call_string___, result, method);
    sub_1BCA7E0(&StringLiteral_22465/*"ok"*/, v5, v6);
    byte_4B114CA = 1;
  }
  operationItemListViewManager = (FriendOperationItemListViewManager_o *)System_String__op_Equality(
                                                                           result,
                                                                           (System_String_o *)StringLiteral_22465/*"ok"*/,
                                                                           0LL);
  if ( ((unsigned __int8)operationItemListViewManager & 1) != 0 && this->fields.sum >= 1 )
  {
    v10 = 0;
    do
    {
      _4__this = this->fields.__4__this;
      if ( !_4__this || (operationItemListViewManager = _4__this->fields.operationItemListViewManager) == 0LL )
        sub_1BCAA3C(operationItemListViewManager, v8);
      operationItemListViewManager = (FriendOperationItemListViewManager_o *)FriendOperationItemListViewManager__GetItem(
                                                                               operationItemListViewManager,
                                                                               v10,
                                                                               v9);
      if ( operationItemListViewManager )
        FriendOperationItemListViewItem__RefreshLockInfo(
          (FriendOperationItemListViewItem_o *)operationItemListViewManager,
          0LL);
      ++v10;
    }
    while ( v10 < this->fields.sum );
  }
  ActionExtensions__Call_object_(
    (System_Action_T__o *)this->fields.onFinishedRequest,
    (Il2CppObject *)result,
    (const MethodInfo_2E65588 *)Method_ActionExtensions_Call_string___);
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
  sub_1BCA784(&this->fields.method, object);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v6) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = (Il2CppObject *)sub_1A056FC;
LABEL_8:
      this->fields.m_target = v9;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v8 )
    {
      v9 = (Il2CppObject *)sub_1A056DC;
      goto LABEL_8;
    }
    if ( !object )
    {
      v11 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v11, 0LL);
    }
  }
  v10 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v10;
LABEL_9:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A05694;
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
  return (System_IAsyncResult_o *)sub_1BCA794(this, &v6, callback, object);
}


void __fastcall FriendRootComponent_messageRequestCallback__EndInvoke(
        FriendRootComponent_messageRequestCallback_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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