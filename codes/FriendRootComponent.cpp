void __fastcall FriendRootComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4C1D057 & 1) == 0 )
  {
    sub_1C3B764(&FriendRootComponent_TypeInfo, v1);
    byte_4C1D057 = 1;
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

  if ( (byte_4C1D048 & 1) == 0 )
  {
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4C1D048 = 1;
  }
  state = this->fields.state;
  switch ( state )
  {
    case ',':
      this->fields.state = 23;
      Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        CommonUI__CloseNotificationDialog(Instance, 0LL);
        goto LABEL_12;
      }
LABEL_14:
      sub_1C3B9C0(Instance, method);
    case '+':
      Instance = (CommonUI_o *)this->fields.friendWarningDialog;
      this->fields.state = 23;
      if ( Instance )
      {
        FriendWarningDialog__Close_31997360((FriendWarningDialog_o *)Instance, 0LL, v2);
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
  __int64 v3; // x1
  __int64 v4; // x1
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  const MethodInfo *v6; // x2
  FriendSearchMenu_o *friendSearchMenu; // x20
  FriendSearchMenu_CallbackFunc_o *v8; // x21
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x1

  if ( (byte_4C1D04D & 1) == 0 )
  {
    sub_1C3B764(&FriendSearchMenu_CallbackFunc_TypeInfo, method);
    sub_1C3B764(&Method_FriendRootComponent_OnSelectSearchFriend__, v3);
    byte_4C1D04D = 1;
  }
  if ( this->fields.state == 42 )
  {
    this->fields.state = 23;
    this->fields.selectFriendCode = 0LL;
    sub_1C3B708(&this->fields.selectFriendCode);
    this->fields.selectFriendEntity = 0LL;
    sub_1C3B708(&this->fields.selectFriendEntity);
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close(operationConfirmMenu, 0LL),
          (operationConfirmMenu = (FriendOperationConfirmMenu_o *)this->fields.friendSearchResultMenu) == 0LL)
      || (FriendSearchResultMenu__Close_31965024((FriendSearchResultMenu_o *)operationConfirmMenu, 0LL, v6),
          friendSearchMenu = this->fields.friendSearchMenu,
          v8 = (FriendSearchMenu_CallbackFunc_o *)sub_1C3B9B0(FriendSearchMenu_CallbackFunc_TypeInfo),
          FriendSearchMenu_CallbackFunc___ctor(
            v8,
            (Il2CppObject *)this,
            Method_FriendRootComponent_OnSelectSearchFriend__,
            v9),
          !friendSearchMenu) )
    {
      sub_1C3B9C0(operationConfirmMenu, v4);
    }
    FriendSearchMenu__Open(friendSearchMenu, v8, 1, v10);
    FriendRootComponent__RefreshInfo(this, v11);
  }
}


void __fastcall FriendRootComponent__BackFollowRemoveConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v6; // x21
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x2

  if ( (byte_4C1D04F & 1) == 0 )
  {
    sub_1C3B764(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_1C3B764(&Method_FriendRootComponent_OnSelectFriendItem__, v3);
    byte_4C1D04F = 1;
  }
  if ( this->fields.state == 45 )
  {
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close(operationConfirmMenu, 0LL),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v6 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1C3B9B0(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v6,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v7),
          !operationItemListViewManager) )
    {
      sub_1C3B9C0(operationConfirmMenu, method);
    }
    operationItemListViewManager->fields.callbackFunc = v6;
    sub_1C3B708(&operationItemListViewManager->fields.callbackFunc);
    FriendOperationItemListViewManager__SetMode_31937280(operationItemListViewManager, 2, v8);
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
      sub_1C3B9C0(operationConfirmMenu, method);
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

  if ( (byte_4C1D050 & 1) == 0 )
  {
    sub_1C3B764(&Method_FriendRootComponent_EndFriendRequest2__, method);
    sub_1C3B764(&Method_NetworkManager_getRequest_FriendTopRequest___, v3);
    sub_1C3B764(&NetworkManager_TypeInfo, v4);
    sub_1C3B764(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    byte_4C1D050 = 1;
  }
  v6 = (NetworkManager_ResultCallbackFunc_o *)sub_1C3B9B0(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    Method_FriendRootComponent_EndFriendRequest2__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v6,
                     (const MethodInfo_3075AE8 *)Method_NetworkManager_getRequest_FriendTopRequest___);
  if ( !Request_object )
    sub_1C3B9C0(0LL, v8);
  RequestBase__beginRequest((RequestBase_o *)Request_object, 0LL);
}


void __fastcall FriendRootComponent__BackFriendAcceptConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v6; // x21
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x2

  if ( (byte_4C1D015 & 1) == 0 )
  {
    sub_1C3B764(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_1C3B764(&Method_FriendRootComponent_OnSelectFriendItem__, v3);
    byte_4C1D015 = 1;
  }
  if ( this->fields.state == 31 )
  {
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close(operationConfirmMenu, 0LL),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v6 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1C3B9B0(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v6,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v7),
          !operationItemListViewManager) )
    {
      sub_1C3B9C0(operationConfirmMenu, method);
    }
    operationItemListViewManager->fields.callbackFunc = v6;
    sub_1C3B708(&operationItemListViewManager->fields.callbackFunc);
    FriendOperationItemListViewManager__SetMode_31937280(operationItemListViewManager, 2, v8);
    this->fields.state = 14;
  }
}


void __fastcall FriendRootComponent__BackFriendAcceptConfirmRefreshShowOffered(
        FriendRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  const MethodInfo *v4; // x1
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  const MethodInfo *v6; // x3
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v9; // x21
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2

  if ( (byte_4C1D016 & 1) == 0 )
  {
    sub_1C3B764(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_1C3B764(&Method_FriendRootComponent_OnSelectFriendItem__, v3);
    byte_4C1D016 = 1;
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
            v4),
          (classButtonControl = this->fields.classButtonControl) == 0LL)
      || (operationConfirmMenu = (FriendOperationConfirmMenu_o *)this->fields.operationItemListViewManager) == 0LL
      || (FriendOperationItemListViewManager__CreateList(
            (FriendOperationItemListViewManager_o *)operationConfirmMenu,
            2,
            classButtonControl->fields.currentCursor,
            v6),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v9 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1C3B9B0(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v9,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v10),
          !operationItemListViewManager) )
    {
LABEL_11:
      sub_1C3B9C0(operationConfirmMenu, v4);
    }
    operationItemListViewManager->fields.callbackFunc = v9;
    sub_1C3B708(&operationItemListViewManager->fields.callbackFunc);
    FriendOperationItemListViewManager__SetMode_31937280(operationItemListViewManager, 2, v11);
  }
}


void __fastcall FriendRootComponent__BackFriendCancelConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v6; // x21
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x2

  if ( (byte_4C1D01B & 1) == 0 )
  {
    sub_1C3B764(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_1C3B764(&Method_FriendRootComponent_OnSelectFriendItem__, v3);
    byte_4C1D01B = 1;
  }
  if ( this->fields.state == 37 )
  {
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close(operationConfirmMenu, 0LL),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v6 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1C3B9B0(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v6,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v7),
          !operationItemListViewManager) )
    {
      sub_1C3B9C0(operationConfirmMenu, method);
    }
    operationItemListViewManager->fields.callbackFunc = v6;
    sub_1C3B708(&operationItemListViewManager->fields.callbackFunc);
    FriendOperationItemListViewManager__SetMode_31937280(operationItemListViewManager, 2, v8);
    this->fields.state = 14;
  }
}


void __fastcall FriendRootComponent__BackFriendCancelConfirmRefreshShowOffer(
        FriendRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  const MethodInfo *v4; // x1
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  const MethodInfo *v6; // x3
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v9; // x21
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2

  if ( (byte_4C1D01C & 1) == 0 )
  {
    sub_1C3B764(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_1C3B764(&Method_FriendRootComponent_OnSelectFriendItem__, v3);
    byte_4C1D01C = 1;
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
            v4),
          (classButtonControl = this->fields.classButtonControl) == 0LL)
      || (operationConfirmMenu = (FriendOperationConfirmMenu_o *)this->fields.operationItemListViewManager) == 0LL
      || (FriendOperationItemListViewManager__CreateList(
            (FriendOperationItemListViewManager_o *)operationConfirmMenu,
            1,
            classButtonControl->fields.currentCursor,
            v6),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v9 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1C3B9B0(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v9,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v10),
          !operationItemListViewManager) )
    {
LABEL_11:
      sub_1C3B9C0(operationConfirmMenu, v4);
    }
    operationItemListViewManager->fields.callbackFunc = v9;
    sub_1C3B708(&operationItemListViewManager->fields.callbackFunc);
    FriendOperationItemListViewManager__SetMode_31937280(operationItemListViewManager, 2, v11);
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
      FriendWarningDialog__Close_31997360(friendWarningDialog, 0LL, v2);
      goto LABEL_7;
    }
LABEL_9:
    sub_1C3B9C0(friendWarningDialog, method);
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
  __int64 v3; // x1
  int32_t state; // w8
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v7; // x21
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2

  if ( (byte_4C1D052 & 1) == 0 )
  {
    sub_1C3B764(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_1C3B764(&Method_FriendRootComponent_OnSelectFriendItem__, v3);
    byte_4C1D052 = 1;
  }
  state = this->fields.state;
  if ( state == 29 || state == 27 )
  {
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close(operationConfirmMenu, 0LL),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v7 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1C3B9B0(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v7,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v8),
          !operationItemListViewManager) )
    {
      sub_1C3B9C0(operationConfirmMenu, method);
    }
    operationItemListViewManager->fields.callbackFunc = v7;
    sub_1C3B708(&operationItemListViewManager->fields.callbackFunc);
    FriendOperationItemListViewManager__SetMode_31937280(operationItemListViewManager, 2, v9);
    this->fields.state = 4;
  }
}


void __fastcall FriendRootComponent__BackFriendOfferConfirmRefreshShowFriend(
        FriendRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  const MethodInfo *v4; // x1
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  const MethodInfo *v6; // x3
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v9; // x21
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2

  if ( (byte_4C1D053 & 1) == 0 )
  {
    sub_1C3B764(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_1C3B764(&Method_FriendRootComponent_OnSelectFriendItem__, v3);
    byte_4C1D053 = 1;
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
            v4),
          (classButtonControl = this->fields.classButtonControl) == 0LL)
      || (operationConfirmMenu = (FriendOperationConfirmMenu_o *)this->fields.operationItemListViewManager) == 0LL
      || (FriendOperationItemListViewManager__CreateList(
            (FriendOperationItemListViewManager_o *)operationConfirmMenu,
            3,
            classButtonControl->fields.currentCursor,
            v6),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v9 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1C3B9B0(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v9,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v10),
          !operationItemListViewManager) )
    {
LABEL_11:
      sub_1C3B9C0(operationConfirmMenu, v4);
    }
    operationItemListViewManager->fields.callbackFunc = v9;
    sub_1C3B708(&operationItemListViewManager->fields.callbackFunc);
    FriendOperationItemListViewManager__SetMode_31937280(operationItemListViewManager, 2, v11);
  }
}


void __fastcall FriendRootComponent__BackFriendOfferConfirmRefreshShowSearch(
        FriendRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  const MethodInfo *v6; // x2
  FriendSearchMenu_o *friendSearchMenu; // x20
  FriendSearchMenu_CallbackFunc_o *v8; // x21
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x3

  if ( (byte_4C1D013 & 1) == 0 )
  {
    sub_1C3B764(&FriendSearchMenu_CallbackFunc_TypeInfo, method);
    sub_1C3B764(&Method_FriendRootComponent_OnSelectSearchFriend__, v3);
    byte_4C1D013 = 1;
  }
  if ( this->fields.state == 27 )
  {
    this->fields.state = 23;
    this->fields.selectFriendCode = 0LL;
    sub_1C3B708(&this->fields.selectFriendCode);
    this->fields.selectFriendEntity = 0LL;
    sub_1C3B708(&this->fields.selectFriendEntity);
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close(operationConfirmMenu, 0LL),
          (operationConfirmMenu = (FriendOperationConfirmMenu_o *)this->fields.friendSearchResultMenu) == 0LL)
      || (FriendSearchResultMenu__Close_31965024((FriendSearchResultMenu_o *)operationConfirmMenu, 0LL, v6),
          friendSearchMenu = this->fields.friendSearchMenu,
          v8 = (FriendSearchMenu_CallbackFunc_o *)sub_1C3B9B0(FriendSearchMenu_CallbackFunc_TypeInfo),
          FriendSearchMenu_CallbackFunc___ctor(
            v8,
            (Il2CppObject *)this,
            Method_FriendRootComponent_OnSelectSearchFriend__,
            v9),
          !friendSearchMenu) )
    {
      sub_1C3B9C0(operationConfirmMenu, v4);
    }
    FriendSearchMenu__Open(friendSearchMenu, v8, 1, v10);
  }
}


void __fastcall FriendRootComponent__BackFriendRejectConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v6; // x21
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x2

  if ( (byte_4C1D018 & 1) == 0 )
  {
    sub_1C3B764(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_1C3B764(&Method_FriendRootComponent_OnSelectFriendItem__, v3);
    byte_4C1D018 = 1;
  }
  if ( this->fields.state == 34 )
  {
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close(operationConfirmMenu, 0LL),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v6 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1C3B9B0(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v6,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v7),
          !operationItemListViewManager) )
    {
      sub_1C3B9C0(operationConfirmMenu, method);
    }
    operationItemListViewManager->fields.callbackFunc = v6;
    sub_1C3B708(&operationItemListViewManager->fields.callbackFunc);
    FriendOperationItemListViewManager__SetMode_31937280(operationItemListViewManager, 2, v8);
    this->fields.state = 14;
  }
}


void __fastcall FriendRootComponent__BackFriendRejectConfirmRefreshShowOffered(
        FriendRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  const MethodInfo *v4; // x1
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  const MethodInfo *v6; // x3
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v9; // x21
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2

  if ( (byte_4C1D019 & 1) == 0 )
  {
    sub_1C3B764(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_1C3B764(&Method_FriendRootComponent_OnSelectFriendItem__, v3);
    byte_4C1D019 = 1;
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
            v4),
          (classButtonControl = this->fields.classButtonControl) == 0LL)
      || (operationConfirmMenu = (FriendOperationConfirmMenu_o *)this->fields.operationItemListViewManager) == 0LL
      || (FriendOperationItemListViewManager__CreateList(
            (FriendOperationItemListViewManager_o *)operationConfirmMenu,
            2,
            classButtonControl->fields.currentCursor,
            v6),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v9 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1C3B9B0(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v9,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v10),
          !operationItemListViewManager) )
    {
LABEL_11:
      sub_1C3B9C0(operationConfirmMenu, v4);
    }
    operationItemListViewManager->fields.callbackFunc = v9;
    sub_1C3B708(&operationItemListViewManager->fields.callbackFunc);
    FriendOperationItemListViewManager__SetMode_31937280(operationItemListViewManager, 2, v11);
  }
}


void __fastcall FriendRootComponent__BackFriendRemoveConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v6; // x21
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x2

  if ( (byte_4C1D01E & 1) == 0 )
  {
    sub_1C3B764(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_1C3B764(&Method_FriendRootComponent_OnSelectFriendItem__, v3);
    byte_4C1D01E = 1;
  }
  if ( this->fields.state == 40 )
  {
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close(operationConfirmMenu, 0LL),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v6 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1C3B9B0(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v6,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v7),
          !operationItemListViewManager) )
    {
      sub_1C3B9C0(operationConfirmMenu, method);
    }
    operationItemListViewManager->fields.callbackFunc = v6;
    sub_1C3B708(&operationItemListViewManager->fields.callbackFunc);
    FriendOperationItemListViewManager__SetMode_31937280(operationItemListViewManager, 2, v8);
    this->fields.state = 4;
  }
}


void __fastcall FriendRootComponent__BackFriendRemoveConfirmRefreshShowFriend(
        FriendRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  const MethodInfo *v4; // x1
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  const MethodInfo *v6; // x3
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v9; // x21
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2

  if ( (byte_4C1D01F & 1) == 0 )
  {
    sub_1C3B764(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_1C3B764(&Method_FriendRootComponent_OnSelectFriendItem__, v3);
    byte_4C1D01F = 1;
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
            v4),
          (classButtonControl = this->fields.classButtonControl) == 0LL)
      || (operationConfirmMenu = (FriendOperationConfirmMenu_o *)this->fields.operationItemListViewManager) == 0LL
      || (FriendOperationItemListViewManager__CreateList(
            (FriendOperationItemListViewManager_o *)operationConfirmMenu,
            3,
            classButtonControl->fields.currentCursor,
            v6),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v9 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1C3B9B0(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v9,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v10),
          !operationItemListViewManager) )
    {
LABEL_11:
      sub_1C3B9C0(operationConfirmMenu, v4);
    }
    operationItemListViewManager->fields.callbackFunc = v9;
    sub_1C3B708(&operationItemListViewManager->fields.callbackFunc);
    FriendOperationItemListViewManager__SetMode_31937280(operationItemListViewManager, 2, v11);
  }
}


void __fastcall FriendRootComponent__BackSearchFriend(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  FriendSearchResultMenu_o *friendSearchResultMenu; // x0
  FriendSearchMenu_o *friendSearchMenu; // x20
  System_Action_o *v8; // x21
  const MethodInfo *v9; // x2

  if ( (byte_4C1D00C & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&Method_FriendRootComponent_OnMoveEnd__, v3);
    byte_4C1D00C = 1;
  }
  if ( this->fields.state == 23 )
  {
    this->fields.state = 24;
    FriendRootComponent__RefreshInfo(this, method);
    this->fields.selectFriendEntity = 0LL;
    sub_1C3B708(&this->fields.selectFriendEntity);
    friendSearchResultMenu = this->fields.friendSearchResultMenu;
    if ( !friendSearchResultMenu
      || (FriendSearchResultMenu__Close_31965024(friendSearchResultMenu, 0LL, v5),
          friendSearchMenu = this->fields.friendSearchMenu,
          v8 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo),
          System_Action___ctor(v8, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0LL),
          !friendSearchMenu) )
    {
      sub_1C3B9C0(friendSearchResultMenu, v4);
    }
    FriendSearchMenu__Close_31962860(friendSearchMenu, v8, v9);
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

  if ( (qword_4C1D000 & 0x100000000LL) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&Method_FriendRootComponent_OnMoveEnd__, v3);
    BYTE4(qword_4C1D000) = 1;
  }
  if ( this->fields.state == 4 )
  {
    this->fields.state = 5;
    FriendRootComponent__RefreshInfo(this, method);
    operationItemListViewManager = this->fields.operationItemListViewManager;
    v5 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0LL);
    if ( !operationItemListViewManager )
      sub_1C3B9C0(v6, v7);
    operationItemListViewManager->fields.callbackFunc2 = v5;
    sub_1C3B708(&operationItemListViewManager->fields.callbackFunc2);
    FriendOperationItemListViewManager__SetMode_31937280(operationItemListViewManager, 4, v8);
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

  if ( (qword_4C1D000 & 0x1000000000000LL) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&Method_FriendRootComponent_OnMoveEnd__, v3);
    BYTE6(qword_4C1D000) = 1;
  }
  if ( this->fields.state == 9 )
  {
    operationItemListViewManager = this->fields.operationItemListViewManager;
    v5 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0LL);
    if ( !operationItemListViewManager )
      sub_1C3B9C0(v6, v7);
    operationItemListViewManager->fields.callbackFunc2 = v5;
    sub_1C3B708(&operationItemListViewManager->fields.callbackFunc2);
    FriendOperationItemListViewManager__SetMode_31937280(operationItemListViewManager, 4, v8);
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

  if ( (byte_4C1D008 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&Method_FriendRootComponent_OnMoveEnd__, v3);
    byte_4C1D008 = 1;
  }
  if ( this->fields.state == 14 )
  {
    this->fields.state = 15;
    FriendRootComponent__RefreshInfo(this, method);
    operationItemListViewManager = this->fields.operationItemListViewManager;
    v5 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0LL);
    if ( !operationItemListViewManager )
      sub_1C3B9C0(v6, v7);
    operationItemListViewManager->fields.callbackFunc2 = v5;
    sub_1C3B708(&operationItemListViewManager->fields.callbackFunc2);
    FriendOperationItemListViewManager__SetMode_31937280(operationItemListViewManager, 4, v8);
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

  if ( (byte_4C1D00A & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&Method_FriendRootComponent_OnMoveEnd__, v3);
    byte_4C1D00A = 1;
  }
  if ( this->fields.state == 19 )
  {
    this->fields.state = 20;
    operationItemListViewManager = this->fields.operationItemListViewManager;
    v5 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0LL);
    if ( !operationItemListViewManager )
      sub_1C3B9C0(v6, v7);
    operationItemListViewManager->fields.callbackFunc2 = v5;
    sub_1C3B708(&operationItemListViewManager->fields.callbackFunc2);
    FriendOperationItemListViewManager__SetMode_31937280(operationItemListViewManager, 4, v8);
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

  if ( (byte_4C1D02A & 1) == 0 )
  {
    sub_1C3B764(&OptionManager_TypeInfo, method);
    byte_4C1D02A = 1;
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
        sub_1C3B9C8(SpoilerSetting, v4);
      }
LABEL_14:
      v9 = this->fields.selectFriendEntity;
      if ( !v9 || (eventUserSvtLeaderHash = v9->fields.eventUserSvtLeaderHash) == 0LL )
LABEL_23:
        sub_1C3B9C0(SpoilerSetting, v4);
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

  if ( (byte_4C1CFFC & 1) == 0 )
  {
    sub_1C3B764(&LocalizationManager_TypeInfo, method);
    sub_1C3B764(&StringLiteral_6664/*"FollowerSelectEventQuest"*/, v3);
    sub_1C3B764(&StringLiteral_6662/*"FollowerSelect"*/, v4);
    byte_4C1CFFC = 1;
  }
  v5 = (System_String_o **)&StringLiteral_6662/*"FollowerSelect"*/;
  if ( this->fields.isActiveModeKindButtons && this->fields.currentModeKind == 1 )
    v5 = (System_String_o **)&StringLiteral_6664/*"FollowerSelectEventQuest"*/;
  v6 = *v5;
  helpLabel = this->fields.helpLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__Get(v6, 0LL);
  if ( !helpLabel )
    sub_1C3B9C0(v8, v9);
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

  if ( (byte_4C1D031 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_TblFriendMaster___, method);
    sub_1C3B764(&Method_DataManager_GetMasterData_UserFollowMaster___, v3);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_1C3B764(&StringLiteral_17992/*"critobj01"*/, v5);
    sub_1C3B764(&StringLiteral_17998/*"csEUCKR"*/, v6);
    sub_1C3B764(&StringLiteral_17997/*"csASCII"*/, v7);
    sub_1C3B764(&StringLiteral_17991/*"crimson"*/, v8);
    byte_4C1D031 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_TblFriendMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserFollowMaster___);
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
    sub_1C3B9C0(Instance, v10);
  }
LABEL_21:
  Instance = (DataManager_o *)this->fields.modeUserDetailSprite;
  if ( !Instance )
    goto LABEL_31;
  currentModeKind = this->fields.currentModeKind;
  v20 = StringLiteral_17991/*"crimson"*/;
  v21 = StringLiteral_17992/*"critobj01"*/;
  v22 = (System_String_o **)(currentModeKind ? &StringLiteral_17998/*"csEUCKR"*/ : &StringLiteral_17997/*"csASCII"*/);
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

  if ( (qword_4C1D000 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_8793/*"MemoryStream's internal buffer cannot be accessed."*/, method);
    sub_1C3B764(&StringLiteral_8795/*"MenuBar"*/, v3);
    sub_1C3B764(&StringLiteral_8796/*"MenuHighlight"*/, v4);
    LOBYTE(qword_4C1D000) = 1;
  }
  tabKind = FriendRootComponent__get_tabKind(this, method);
  switch ( tabKind )
  {
    case 2:
      myFSM = this->fields.myFSM;
      if ( myFSM )
      {
        v8 = &StringLiteral_8796/*"MenuHighlight"*/;
        goto LABEL_12;
      }
LABEL_14:
      sub_1C3B9C0(myFSM, v6);
    case 1:
      myFSM = this->fields.myFSM;
      if ( myFSM )
      {
        v8 = &StringLiteral_8795/*"MenuBar"*/;
        goto LABEL_12;
      }
      goto LABEL_14;
    case 0:
      myFSM = this->fields.myFSM;
      if ( myFSM )
      {
        v8 = &StringLiteral_8793/*"MemoryStream's internal buffer cannot be accessed."*/;
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

  if ( (byte_4C1D011 & 1) == 0 )
  {
    sub_1C3B764(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_1C3B764(&Method_FriendRootComponent_OnSelectFriendItem__, v3);
    byte_4C1D011 = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v5 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1C3B9B0(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
    v6);
  if ( !operationItemListViewManager )
    sub_1C3B9C0(v7, v8);
  operationItemListViewManager->fields.callbackFunc = v5;
  sub_1C3B708(&operationItemListViewManager->fields.callbackFunc);
  FriendOperationItemListViewManager__SetMode_31937280(operationItemListViewManager, 2, v9);
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

  if ( (byte_4C1D03B & 1) == 0 )
  {
    sub_1C3B764(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_1C3B764(&Method_FriendRootComponent_OnSelectFriendItem__, v3);
    byte_4C1D03B = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v5 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1C3B9B0(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
    v6);
  if ( !operationItemListViewManager )
    sub_1C3B9C0(v7, v8);
  operationItemListViewManager->fields.callbackFunc = v5;
  sub_1C3B708(&operationItemListViewManager->fields.callbackFunc);
  FriendOperationItemListViewManager__SetMode_31937280(operationItemListViewManager, 2, v9);
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

  if ( (byte_4C1CFFD & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_TblFriendMaster___, result);
    sub_1C3B764(&FriendRootComponent_TypeInfo, v4);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4C1CFFD = 1;
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
    Instance = (OtherUserGameEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (OtherUserGameEntity_array *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)Instance,
                                                (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_TblFriendMaster___);
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
    sub_1C3B9C0(Instance, v8);
  }
LABEL_23:
  FriendRootComponent__InitModeKindButtons(this, (const MethodInfo *)result);
  FriendRootComponent__RefreshTab(this, v13);
  FriendRootComponent__RefreshInfo(this, v14);
  MainMenuBar__setMenuActive(1, 0LL, 0LL);
  SceneRootComponent__beginStartUp_40100344((SceneRootComponent_o *)this, 0LL);
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

  if ( (byte_4C1D051 & 1) == 0 )
  {
    sub_1C3B764(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, result);
    sub_1C3B764(&Method_FriendRootComponent_OnSelectFriendItem__, v4);
    byte_4C1D051 = 1;
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
        v10 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1C3B9B0(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
        FriendOperationItemListViewManager_CallbackFunc___ctor(
          v10,
          (Il2CppObject *)this,
          (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
          v11),
        !v9) )
  {
    sub_1C3B9C0(operationItemListViewManager, v6);
  }
  v9->fields.callbackFunc = v10;
  sub_1C3B708(&v9->fields.callbackFunc);
  FriendOperationItemListViewManager__SetMode_31937280(v9, 2, v12);
  this->fields.state = 4;
}


void __fastcall FriendRootComponent__EndLoadOutGameAtlas(FriendRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4C1CFF9 & 1) == 0 )
  {
    sub_1C3B764(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_4C1CFF9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C3B9C0(0LL, v4);
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, (SceneRootComponent_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendRootComponent__EndMaxFollowWarningOfferConfirm(
        FriendRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_4C1D049 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_8790/*"MemberNotFieldOrProperty"*/, isDecide);
    byte_4C1D049 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1C3B9C0(0LL, isDecide);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_8790/*"MemberNotFieldOrProperty"*/, 0LL);
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

  if ( (byte_4C1D03D & 1) == 0 )
  {
    sub_1C3B764(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, isDecide);
    sub_1C3B764(&Method_FriendRootComponent_OnSelectFriendItem__, v4);
    byte_4C1D03D = 1;
  }
  friendWarningDialog = this->fields.friendWarningDialog;
  if ( !friendWarningDialog
    || (FriendWarningDialog__Close_31997360(friendWarningDialog, 0LL, method),
        operationItemListViewManager = this->fields.operationItemListViewManager,
        v7 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1C3B9B0(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
        FriendOperationItemListViewManager_CallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
          v8),
        !operationItemListViewManager) )
  {
    sub_1C3B9C0(friendWarningDialog, isDecide);
  }
  operationItemListViewManager->fields.callbackFunc = v7;
  sub_1C3B708(&operationItemListViewManager->fields.callbackFunc);
  FriendOperationItemListViewManager__SetMode_31937280(operationItemListViewManager, 2, v9);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendRootComponent__EndMaxFriendWarningOfferConfirm(
        FriendRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_4C1D03E & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_8790/*"MemberNotFieldOrProperty"*/, isDecide);
    byte_4C1D03E = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1C3B9C0(0LL, isDecide);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_8790/*"MemberNotFieldOrProperty"*/, 0LL);
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
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x3

  if ( (byte_4C1D02B & 1) == 0 )
  {
    sub_1C3B764(&FriendSearchMenu_CallbackFunc_TypeInfo, isDecide);
    sub_1C3B764(&Method_FriendRootComponent_OnSelectSearchFriend__, v4);
    sub_1C3B764(&StringLiteral_11287/*"SERVANT_CHARA_GRAPH_EX_OPEN_MANAGER_"*/, v5);
    byte_4C1D02B = 1;
  }
  friendWarningDialog = this->fields.friendWarningDialog;
  if ( !friendWarningDialog
    || (FriendWarningDialog__Close_31997360(friendWarningDialog, 0LL, method),
        this->fields.state = 23,
        friendSearchMenu = this->fields.friendSearchMenu,
        v8 = (FriendSearchMenu_CallbackFunc_o *)sub_1C3B9B0(FriendSearchMenu_CallbackFunc_TypeInfo),
        FriendSearchMenu_CallbackFunc___ctor(
          v8,
          (Il2CppObject *)this,
          Method_FriendRootComponent_OnSelectSearchFriend__,
          v9),
        !friendSearchMenu)
    || (FriendSearchMenu__Open(friendSearchMenu, v8, 0, v10),
        (friendWarningDialog = (FriendWarningDialog_o *)this->fields.myFSM) == 0LL) )
  {
    sub_1C3B9C0(friendWarningDialog, isDecide);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)friendWarningDialog, (System_String_o *)StringLiteral_11287/*"SERVANT_CHARA_GRAPH_EX_OPEN_MANAGER_"*/, 0LL);
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

  if ( (byte_4C1D04C & 1) == 0 )
  {
    sub_1C3B764(&NotificationDialog_ClickDelegate_TypeInfo, result);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v6);
    sub_1C3B764(&Method_FriendRootComponent_OnEndRequestDialog__, v7);
    sub_1C3B764(&JsonManager_TypeInfo, v8);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_1C3B764(&StringLiteral_11289/*"SERVANT_CHECK_COMBINE_DIALOG_TITLE"*/, v10);
    sub_1C3B764(&StringLiteral_11287/*"SERVANT_CHARA_GRAPH_EX_OPEN_MANAGER_"*/, v11);
    sub_1C3B764(&StringLiteral_22507/*"referrerMapId"*/, v12);
    sub_1C3B764(&StringLiteral_21827/*"notification"*/, v13);
    byte_4C1D04C = 1;
  }
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_22507/*"referrerMapId"*/, 0LL) )
  {
    myFSM = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.myFSM;
    if ( myFSM )
    {
      v18 = &StringLiteral_11287/*"SERVANT_CHARA_GRAPH_EX_OPEN_MANAGER_"*/;
      goto LABEL_14;
    }
LABEL_17:
    sub_1C3B9C0(myFSM, v14);
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  myFSM = (System_Collections_Generic_Dictionary_object__object__o *)JsonManager__getDictionary(result, 0LL);
  if ( !myFSM )
    goto LABEL_17;
  v16 = myFSM;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          myFSM,
          (Il2CppObject *)StringLiteral_21827/*"notification"*/,
          (const MethodInfo_335595C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_10;
  myFSM = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                       v16,
                                                                       (Il2CppObject *)StringLiteral_21827/*"notification"*/,
                                                                       (const MethodInfo_33556E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
      v18 = &StringLiteral_11289/*"SERVANT_CHECK_COMBINE_DIALOG_TITLE"*/;
LABEL_14:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myFSM, (System_String_o *)*v18, 0LL);
      return;
    }
    goto LABEL_17;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v20 = (NotificationDialog_ClickDelegate_o *)sub_1C3B9B0(NotificationDialog_ClickDelegate_TypeInfo);
  NotificationDialog_ClickDelegate___ctor(
    v20,
    (Il2CppObject *)this,
    Method_FriendRootComponent_OnEndRequestDialog__,
    0LL);
  if ( !Instance )
    goto LABEL_17;
  CommonUI__OpenNotificationDialog_31234368(
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

  if ( (byte_4C1D055 & 1) == 0 )
  {
    sub_1C3B764(&NotificationDialog_ClickDelegate_TypeInfo, result);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v6);
    sub_1C3B764(&Method_FriendRootComponent_OnEndRequestDialog__, v7);
    sub_1C3B764(&JsonManager_TypeInfo, v8);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_1C3B764(&StringLiteral_11289/*"SERVANT_CHECK_COMBINE_DIALOG_TITLE"*/, v10);
    sub_1C3B764(&StringLiteral_11287/*"SERVANT_CHARA_GRAPH_EX_OPEN_MANAGER_"*/, v11);
    sub_1C3B764(&StringLiteral_22507/*"referrerMapId"*/, v12);
    sub_1C3B764(&StringLiteral_21827/*"notification"*/, v13);
    byte_4C1D055 = 1;
  }
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_22507/*"referrerMapId"*/, 0LL) )
  {
    myFSM = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.myFSM;
    if ( myFSM )
    {
      v18 = &StringLiteral_11287/*"SERVANT_CHARA_GRAPH_EX_OPEN_MANAGER_"*/;
      goto LABEL_14;
    }
LABEL_17:
    sub_1C3B9C0(myFSM, v14);
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  myFSM = (System_Collections_Generic_Dictionary_object__object__o *)JsonManager__getDictionary(result, 0LL);
  if ( !myFSM )
    goto LABEL_17;
  v16 = myFSM;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          myFSM,
          (Il2CppObject *)StringLiteral_21827/*"notification"*/,
          (const MethodInfo_335595C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_10;
  myFSM = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                       v16,
                                                                       (Il2CppObject *)StringLiteral_21827/*"notification"*/,
                                                                       (const MethodInfo_33556E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
      v18 = &StringLiteral_11289/*"SERVANT_CHECK_COMBINE_DIALOG_TITLE"*/;
LABEL_14:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myFSM, (System_String_o *)*v18, 0LL);
      return;
    }
    goto LABEL_17;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v20 = (NotificationDialog_ClickDelegate_o *)sub_1C3B9B0(NotificationDialog_ClickDelegate_TypeInfo);
  NotificationDialog_ClickDelegate___ctor(
    v20,
    (Il2CppObject *)this,
    Method_FriendRootComponent_OnEndRequestDialog__,
    0LL);
  if ( !Instance )
    goto LABEL_17;
  CommonUI__OpenNotificationDialog_31234368(
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

  if ( (byte_4C1D026 & 1) == 0 )
  {
    sub_1C3B764(&NotificationDialog_ClickDelegate_TypeInfo, result);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v6);
    sub_1C3B764(&Method_FriendRootComponent_OnEndRequestDialog__, v7);
    sub_1C3B764(&JsonManager_TypeInfo, v8);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_1C3B764(&StringLiteral_11289/*"SERVANT_CHECK_COMBINE_DIALOG_TITLE"*/, v10);
    sub_1C3B764(&StringLiteral_11287/*"SERVANT_CHARA_GRAPH_EX_OPEN_MANAGER_"*/, v11);
    sub_1C3B764(&StringLiteral_22507/*"referrerMapId"*/, v12);
    sub_1C3B764(&StringLiteral_21827/*"notification"*/, v13);
    byte_4C1D026 = 1;
  }
  MainMenuBar__UpdateNoticeNumber(0LL);
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_22507/*"referrerMapId"*/, 0LL) )
  {
    myFSM = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.myFSM;
    if ( myFSM )
    {
      v18 = &StringLiteral_11287/*"SERVANT_CHARA_GRAPH_EX_OPEN_MANAGER_"*/;
      goto LABEL_14;
    }
LABEL_17:
    sub_1C3B9C0(myFSM, v14);
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  myFSM = (System_Collections_Generic_Dictionary_object__object__o *)JsonManager__getDictionary(result, 0LL);
  if ( !myFSM )
    goto LABEL_17;
  v16 = myFSM;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          myFSM,
          (Il2CppObject *)StringLiteral_21827/*"notification"*/,
          (const MethodInfo_335595C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_10;
  myFSM = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                       v16,
                                                                       (Il2CppObject *)StringLiteral_21827/*"notification"*/,
                                                                       (const MethodInfo_33556E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
      v18 = &StringLiteral_11289/*"SERVANT_CHECK_COMBINE_DIALOG_TITLE"*/;
LABEL_14:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myFSM, (System_String_o *)*v18, 0LL);
      return;
    }
    goto LABEL_17;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v20 = (NotificationDialog_ClickDelegate_o *)sub_1C3B9B0(NotificationDialog_ClickDelegate_TypeInfo);
  NotificationDialog_ClickDelegate___ctor(
    v20,
    (Il2CppObject *)this,
    Method_FriendRootComponent_OnEndRequestDialog__,
    0LL);
  if ( !Instance )
    goto LABEL_17;
  CommonUI__OpenNotificationDialog_31234368(
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

  if ( (byte_4C1D029 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_OtherUserGameMaster___, result);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_1C3B764(&StringLiteral_11289/*"SERVANT_CHECK_COMBINE_DIALOG_TITLE"*/, v6);
    sub_1C3B764(&StringLiteral_22683/*"sandboxSeurity"*/, v7);
    sub_1C3B764(&StringLiteral_11287/*"SERVANT_CHARA_GRAPH_EX_OPEN_MANAGER_"*/, v8);
    byte_4C1D029 = 1;
  }
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_22683/*"sandboxSeurity"*/, 0LL) )
    goto LABEL_11;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_OtherUserGameMaster___);
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
    sub_1C3B708(&this->fields.selectFriendEntity);
    FriendRootComponent__StartSearchInput(this, v14);
    Instance = this->fields.myFSM;
    if ( Instance )
    {
      v13 = &StringLiteral_11287/*"SERVANT_CHARA_GRAPH_EX_OPEN_MANAGER_"*/;
      goto LABEL_13;
    }
LABEL_14:
    sub_1C3B9C0(Instance, v10);
  }
  if ( !(_DWORD)v11 )
    sub_1C3B9C8(Instance, v10);
  this->fields.selectFriendEntity = (struct OtherUserGameEntity_o *)*((_QWORD *)Instance + 4);
  sub_1C3B708(&this->fields.selectFriendEntity);
  FriendRootComponent__ChangeLimitCountBySpoilerProtection(this, v12);
  Instance = this->fields.myFSM;
  if ( !Instance )
    goto LABEL_14;
  v13 = &StringLiteral_11289/*"SERVANT_CHECK_COMBINE_DIALOG_TITLE"*/;
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

  if ( (byte_4C1D010 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, isDecide);
    sub_1C3B764(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, v4);
    sub_1C3B764(&Method_FriendRootComponent_EndCloseShowServant__, v5);
    sub_1C3B764(&Method_FriendRootComponent_OnSelectFriendItem__, v6);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_4C1D010 = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v9 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1C3B9B0(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v9,
    (Il2CppObject *)this,
    (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
    v10);
  if ( !operationItemListViewManager
    || (operationItemListViewManager->fields.callbackFunc = v9,
        sub_1C3B708(&operationItemListViewManager->fields.callbackFunc),
        FriendOperationItemListViewManager__SetMode_31937280(operationItemListViewManager, 5, v13),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v15 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo),
        System_Action___ctor(v15, (Il2CppObject *)this, Method_FriendRootComponent_EndCloseShowServant__, 0LL),
        !Instance) )
  {
    sub_1C3B9C0(v11, v12);
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

  if ( (byte_4C1D03A & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, isDecide);
    sub_1C3B764(&Method_FriendRootComponent_EndCloseShowServantEquip__, v4);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4C1D03A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_FriendRootComponent_EndCloseShowServantEquip__, 0LL);
  if ( !Instance )
    sub_1C3B9C0(v8, v9);
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
  ListViewManager_o *v26; // x26
  struct UnityEngine_GameObject_o *dragParentObject; // x8
  struct System_Int64_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x8
  struct UnityEngine_GameObject_o *v32; // x8
  struct System_Int64_array *v33; // x8
  _QWORD *v34; // x9
  __int64 v35; // x10
  struct System_Int64_array *v36; // x8
  _QWORD *v37; // x9
  __int64 v38; // x10
  struct System_Int64_array *v39; // x8
  _QWORD *v40; // x9
  __int64 v41; // x10
  __int64 v42; // x8
  System_Collections_Generic_List_long__o *v43; // x0
  NetworkManager_ResultCallbackFunc_o *v44; // x19
  FirendLockSyncRequest_o *v45; // x19
  System_Int64_array *v46; // x20
  System_Int64_array *v47; // x21
  System_Int64_array *v48; // x22

  if ( (byte_4C1D037 & 1) == 0 )
  {
    sub_1C3B764(&Method_ActionExtensions_Call_string___, onFinishedRequest);
    sub_1C3B764(&Method_System_Collections_Generic_List_long__Add__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_long__ToArray__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_long___ctor__, v7);
    sub_1C3B764(&System_Collections_Generic_List_long__TypeInfo, v8);
    sub_1C3B764(&Method_NetworkManager_getRequest_FirendLockSyncRequest___, v9);
    sub_1C3B764(&NetworkManager_TypeInfo, v10);
    sub_1C3B764(&NetworkManager_ResultCallbackFunc_TypeInfo, v11);
    sub_1C3B764(&Method_FriendRootComponent___c__DisplayClass113_0__FriendLockRequst_b__0__, v12);
    sub_1C3B764(&FriendRootComponent___c__DisplayClass113_0_TypeInfo, v13);
    sub_1C3B764(&StringLiteral_22683/*"sandboxSeurity"*/, v14);
    byte_4C1D037 = 1;
  }
  v15 = sub_1C3B9B0(FriendRootComponent___c__DisplayClass113_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15 )
    goto LABEL_49;
  *(_QWORD *)(v15 + 16) = this;
  sub_1C3B708(v15 + 16);
  *(_QWORD *)(v15 + 32) = onFinishedRequest;
  sub_1C3B708(v15 + 32);
  operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    goto LABEL_49;
  if ( FriendOperationItemListViewManager__get_IsExistSwapLockUser(
         (FriendOperationItemListViewManager_o *)operationItemListViewManager,
         v17) )
  {
    v18 = (System_Collections_Generic_List_long__o *)sub_1C3B9B0(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v18,
      (const MethodInfo_367344C *)Method_System_Collections_Generic_List_long___ctor__);
    v19 = (System_Collections_Generic_List_long__o *)sub_1C3B9B0(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v19,
      (const MethodInfo_367344C *)Method_System_Collections_Generic_List_long___ctor__);
    v20 = (System_Collections_Generic_List_long__o *)sub_1C3B9B0(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v20,
      (const MethodInfo_367344C *)Method_System_Collections_Generic_List_long___ctor__);
    v21 = (System_Collections_Generic_List_long__o *)sub_1C3B9B0(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v21,
      (const MethodInfo_367344C *)Method_System_Collections_Generic_List_long___ctor__);
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
            goto LABEL_49;
          operationItemListViewManager = (ListViewManager_o *)FriendOperationItemListViewManager__GetItem(
                                                                (FriendOperationItemListViewManager_o *)operationItemListViewManager,
                                                                v24,
                                                                v23);
          if ( !operationItemListViewManager )
            goto LABEL_49;
          x = operationItemListViewManager->fields.clipRange.fields.x;
          v26 = operationItemListViewManager;
          if ( LODWORD(x) == 9 )
            break;
          if ( LODWORD(x) == 3 )
          {
            operationItemListViewManager = (ListViewManager_o *)FriendOperationItemListViewItem__get_IsLockDisp(
                                                                  (FriendOperationItemListViewItem_o *)operationItemListViewManager,
                                                                  0LL);
            dragParentObject = v26->fields.dragParentObject;
            if ( !dragParentObject )
              goto LABEL_49;
            v17 = *(const MethodInfo **)&dragParentObject->fields.m_CachedPtr;
            if ( ((unsigned __int8)operationItemListViewManager & 1) != 0 )
            {
              if ( !v18 )
                goto LABEL_49;
              items = v18->fields._items;
              v29 = Method_System_Collections_Generic_List_long__Add__;
              ++v18->fields._version;
              if ( !items )
                goto LABEL_49;
              size = v18->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                v42 = v29[4];
                v43 = v18;
LABEL_38:
                System_Collections_Generic_List_long___AddWithResize(
                  v43,
                  (int64_t)v17,
                  *(const MethodInfo_3673CA0 **)(*(_QWORD *)(v42 + 192) + 112LL));
                goto LABEL_39;
              }
              v31 = &items->obj.klass + size;
              v18->fields._size = size + 1;
            }
            else
            {
              if ( !v19 )
                goto LABEL_49;
              v36 = v19->fields._items;
              v37 = Method_System_Collections_Generic_List_long__Add__;
              ++v19->fields._version;
              if ( !v36 )
                goto LABEL_49;
              v38 = v19->fields._size;
              if ( (unsigned int)v38 >= v36->max_length )
              {
                v42 = v37[4];
                v43 = v19;
                goto LABEL_38;
              }
              v31 = &v36->obj.klass + v38;
              v19->fields._size = v38 + 1;
            }
LABEL_33:
            v31[4] = (Il2CppClass *)v17;
          }
LABEL_39:
          if ( ++v24 >= *(_DWORD *)(v15 + 24) )
            goto LABEL_40;
        }
        operationItemListViewManager = (ListViewManager_o *)FriendOperationItemListViewItem__get_IsLockDisp(
                                                              (FriendOperationItemListViewItem_o *)operationItemListViewManager,
                                                              0LL);
        v32 = v26->fields.dragParentObject;
        if ( !v32 )
          goto LABEL_49;
        v17 = *(const MethodInfo **)&v32->fields.m_CachedPtr;
        if ( ((unsigned __int8)operationItemListViewManager & 1) != 0 )
        {
          if ( !v20 )
            goto LABEL_49;
          v33 = v20->fields._items;
          v34 = Method_System_Collections_Generic_List_long__Add__;
          ++v20->fields._version;
          if ( !v33 )
            goto LABEL_49;
          v35 = v20->fields._size;
          if ( (unsigned int)v35 >= v33->max_length )
          {
            v42 = v34[4];
            v43 = v20;
            goto LABEL_38;
          }
          v31 = &v33->obj.klass + v35;
          v20->fields._size = v35 + 1;
        }
        else
        {
          if ( !v21 )
            goto LABEL_49;
          v39 = v21->fields._items;
          v40 = Method_System_Collections_Generic_List_long__Add__;
          ++v21->fields._version;
          if ( !v39 )
            goto LABEL_49;
          v41 = v21->fields._size;
          if ( (unsigned int)v41 >= v39->max_length )
          {
            v42 = v40[4];
            v43 = v21;
            goto LABEL_38;
          }
          v31 = &v39->obj.klass + v41;
          v21->fields._size = v41 + 1;
        }
        goto LABEL_33;
      }
LABEL_40:
      v44 = (NetworkManager_ResultCallbackFunc_o *)sub_1C3B9B0(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v44,
        (Il2CppObject *)v15,
        Method_FriendRootComponent___c__DisplayClass113_0__FriendLockRequst_b__0__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      operationItemListViewManager = (ListViewManager_o *)NetworkManager__getRequest_object_(
                                                            v44,
                                                            (const MethodInfo_3075AE8 *)Method_NetworkManager_getRequest_FirendLockSyncRequest___);
      if ( v18 )
      {
        v45 = (FirendLockSyncRequest_o *)operationItemListViewManager;
        operationItemListViewManager = (ListViewManager_o *)System_Collections_Generic_List_long___ToArray(
                                                              v18,
                                                              (const MethodInfo_3675758 *)Method_System_Collections_Generic_List_long__ToArray__);
        if ( v19 )
        {
          v46 = (System_Int64_array *)operationItemListViewManager;
          operationItemListViewManager = (ListViewManager_o *)System_Collections_Generic_List_long___ToArray(
                                                                v19,
                                                                (const MethodInfo_3675758 *)Method_System_Collections_Generic_List_long__ToArray__);
          if ( v20 )
          {
            v47 = (System_Int64_array *)operationItemListViewManager;
            operationItemListViewManager = (ListViewManager_o *)System_Collections_Generic_List_long___ToArray(
                                                                  v20,
                                                                  (const MethodInfo_3675758 *)Method_System_Collections_Generic_List_long__ToArray__);
            if ( v21 )
            {
              v48 = (System_Int64_array *)operationItemListViewManager;
              operationItemListViewManager = (ListViewManager_o *)System_Collections_Generic_List_long___ToArray(
                                                                    v21,
                                                                    (const MethodInfo_3675758 *)Method_System_Collections_Generic_List_long__ToArray__);
              if ( v45 )
              {
                FirendLockSyncRequest__beginRequest(
                  v45,
                  v46,
                  v47,
                  v48,
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
    sub_1C3B9C0(operationItemListViewManager, v17);
  }
  ActionExtensions__Call_object_(
    *(System_Action_T__o **)(v15 + 32),
    (Il2CppObject *)StringLiteral_22683/*"sandboxSeurity"*/,
    (const MethodInfo_2F42300 *)Method_ActionExtensions_Call_string___);
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
  if ( (byte_4C1D032 & 1) == 0 )
  {
    this = (FriendRootComponent_o *)sub_1C3B764(&FSUtility_TypeInfo, method);
    byte_4C1D032 = 1;
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
    sub_1C3B9C0(this, method);
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
    sub_1C3B9C0(modeButtonParent, method);
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
    sub_1C3B9C0(modeButtonParent, method);
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
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x2

  if ( (byte_4C1D02D & 1) == 0 )
  {
    sub_1C3B764(&Method_FriendRootComponent_OnClickBack__, method);
    sub_1C3B764(&Method_FriendRootComponent__OnClickBack_b__100_0__, v3);
    sub_1C3B764(&FriendRootComponent_messageRequestCallback_TypeInfo, v4);
    byte_4C1D02D = 1;
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
    v6 = (_QWORD *)sub_1C3B77C(Method_FriendRootComponent_OnClickBack__);
  v7 = (System_Reflection_MethodBase_o *)sub_1C3B748(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 1, 0, 0LL);
  v8 = (FriendRootComponent_messageRequestCallback_o *)sub_1C3B9B0(FriendRootComponent_messageRequestCallback_TypeInfo);
  FriendRootComponent_messageRequestCallback___ctor(
    v8,
    (Il2CppObject *)this,
    Method_FriendRootComponent__OnClickBack_b__100_0__,
    v9);
  FriendRootComponent__messageDispChangeRequest(this, v8, v10);
}


void __fastcall FriendRootComponent__OnClickHelp(FriendRootComponent_o *this, const MethodInfo *method)
{
  _QWORD *v2; // x0
  System_Reflection_MethodBase_o *v3; // x0

  if ( (byte_4C1D056 & 1) == 0 )
  {
    sub_1C3B764(&Method_FriendRootComponent_OnClickHelp__, method);
    byte_4C1D056 = 1;
  }
  v2 = Method_FriendRootComponent_OnClickHelp__;
  if ( (*((_BYTE *)Method_FriendRootComponent_OnClickHelp__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_1C3B77C(Method_FriendRootComponent_OnClickHelp__);
  v3 = (System_Reflection_MethodBase_o *)sub_1C3B748(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 0, 0, 0LL);
  EventTutorialMaster__ShowTutorialWithoutCheck(-1, 49, 0LL, 0LL);
}


void __fastcall FriendRootComponent__OnClickModeEditLock(FriendRootComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4C1D030 & 1) == 0 )
  {
    sub_1C3B764(&Method_FriendRootComponent_OnClickModeEditLock__, method);
    byte_4C1D030 = 1;
  }
  if ( this->fields.currentModeKind != 1 )
  {
    v3 = Method_FriendRootComponent_OnClickModeEditLock__;
    if ( (*((_BYTE *)Method_FriendRootComponent_OnClickModeEditLock__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C3B77C(Method_FriendRootComponent_OnClickModeEditLock__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3B748(v3, v3[4]);
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

  if ( (byte_4C1D02F & 1) == 0 )
  {
    sub_1C3B764(&System_Action_string__TypeInfo, method);
    sub_1C3B764(&Method_FriendRootComponent__OnClickModeUserDetail_b__102_0__, v3);
    byte_4C1D02F = 1;
  }
  if ( this->fields.currentModeKind )
  {
    v4 = (System_Action_object__o *)sub_1C3B9B0(System_Action_string__TypeInfo);
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

  if ( (byte_4C1D033 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_string__TypeInfo, method);
    sub_1C3B764(&Method_FriendRootComponent__OnClickTabFriend_b__109_0__, v3);
    byte_4C1D033 = 1;
  }
  v4 = (System_Action_object__o *)sub_1C3B9B0(System_Action_string__TypeInfo);
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
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x2

  if ( (byte_4C1D034 & 1) == 0 )
  {
    sub_1C3B764(&Method_FriendRootComponent__OnClickTabOffered_b__110_0__, method);
    sub_1C3B764(&FriendRootComponent_messageRequestCallback_TypeInfo, v3);
    byte_4C1D034 = 1;
  }
  v4 = (FriendRootComponent_messageRequestCallback_o *)sub_1C3B9B0(FriendRootComponent_messageRequestCallback_TypeInfo);
  FriendRootComponent_messageRequestCallback___ctor(
    v4,
    (Il2CppObject *)this,
    Method_FriendRootComponent__OnClickTabOffered_b__110_0__,
    v5);
  FriendRootComponent__messageDispChangeRequest(this, v4, v6);
}


void __fastcall FriendRootComponent__OnClickTabSearch(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  FriendRootComponent_messageRequestCallback_o *v4; // x20
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x2

  if ( (byte_4C1D035 & 1) == 0 )
  {
    sub_1C3B764(&Method_FriendRootComponent__OnClickTabSearch_b__111_0__, method);
    sub_1C3B764(&FriendRootComponent_messageRequestCallback_TypeInfo, v3);
    byte_4C1D035 = 1;
  }
  v4 = (FriendRootComponent_messageRequestCallback_o *)sub_1C3B9B0(FriendRootComponent_messageRequestCallback_TypeInfo);
  FriendRootComponent_messageRequestCallback___ctor(
    v4,
    (Il2CppObject *)this,
    Method_FriendRootComponent__OnClickTabSearch_b__111_0__,
    v5);
  FriendRootComponent__messageDispChangeRequest(this, v4, v6);
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

  if ( (byte_4C1D027 & 1) == 0 )
  {
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    sub_1C3B764(&StringLiteral_11289/*"SERVANT_CHECK_COMBINE_DIALOG_TITLE"*/, v4);
    byte_4C1D027 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.myFSM) == 0LL) )
  {
    sub_1C3B9C0(Instance, v6);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_11289/*"SERVANT_CHECK_COMBINE_DIALOG_TITLE"*/, 0LL);
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
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x3
  FriendOperationItemListViewManager_o *v24; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v25; // x21
  const MethodInfo *v26; // x3
  const MethodInfo *v27; // x2
  const MethodInfo *v28; // x1
  struct ClassButtonControlComponent_o *v29; // x8
  FriendSearchMenu_o *v30; // x20
  FriendSearchMenu_CallbackFunc_o *v31; // x21
  const MethodInfo *v32; // x3
  const MethodInfo *v33; // x3

  v3 = this;
  if ( (byte_4C1D02C & 1) == 0 )
  {
    sub_1C3B764(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_1C3B764(&FriendSearchMenu_CallbackFunc_TypeInfo, v4);
    sub_1C3B764(&Method_FriendRootComponent_OnSelectFriendItem__, v5);
    sub_1C3B764(&Method_FriendRootComponent_OnSelectSearchFriend__, v6);
    this = (FriendRootComponent_o *)sub_1C3B764(&StringLiteral_5575/*"EVENT_RAID_NEXT_TIME_2"*/, v7);
    byte_4C1D02C = 1;
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
      v12 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1C3B9B0(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
      FriendOperationItemListViewManager_CallbackFunc___ctor(
        v12,
        (Il2CppObject *)v3,
        (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
        v13);
      if ( !v11 )
        goto LABEL_39;
      v11->fields.callbackFunc = v12;
      sub_1C3B708(&v11->fields.callbackFunc);
      FriendOperationItemListViewManager__SetMode_31937280(v11, 2, v14);
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
      v16 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1C3B9B0(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
      FriendOperationItemListViewManager_CallbackFunc___ctor(
        v16,
        (Il2CppObject *)v3,
        (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
        v17);
      if ( !v15 )
        goto LABEL_39;
      v15->fields.callbackFunc = v16;
      sub_1C3B708(&v15->fields.callbackFunc);
      FriendOperationItemListViewManager__SetMode_31937280(v15, 2, v18);
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
      v24 = v3->fields.operationItemListViewManager;
      v25 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1C3B9B0(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
      FriendOperationItemListViewManager_CallbackFunc___ctor(
        v25,
        (Il2CppObject *)v3,
        (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
        v26);
      if ( !v24 )
        goto LABEL_39;
      v24->fields.callbackFunc = v25;
      sub_1C3B708(&v24->fields.callbackFunc);
      FriendOperationItemListViewManager__SetMode_31937280(v24, 2, v27);
      goto LABEL_28;
    case 0x14:
    case 0x15:
      v3->fields.state = 23;
      friendSearchMenu = v3->fields.friendSearchMenu;
      v21 = (FriendSearchMenu_CallbackFunc_o *)sub_1C3B9B0(FriendSearchMenu_CallbackFunc_TypeInfo);
      FriendSearchMenu_CallbackFunc___ctor(
        v21,
        (Il2CppObject *)v3,
        Method_FriendRootComponent_OnSelectSearchFriend__,
        v22);
      if ( !friendSearchMenu )
        goto LABEL_39;
      FriendSearchMenu__Open(friendSearchMenu, v21, 0, v23);
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
        (System_String_o *)StringLiteral_5575/*"EVENT_RAID_NEXT_TIME_2"*/,
        0LL);
      break;
    case 0x16:
      jumpTabKind = v3->fields.jumpTabKind;
      v3->fields.state = 23;
      if ( jumpTabKind == 3 )
        FriendRootComponent__set_tabKind(this, 2, v2);
      FriendRootComponent__RefreshTab(v3, method);
      FriendRootComponent__RefreshInfo(v3, v28);
      v29 = v3->fields.classButtonControl;
      if ( !v29 )
        goto LABEL_39;
      v29->fields.updateEnable = 1;
      v30 = v3->fields.friendSearchMenu;
      v31 = (FriendSearchMenu_CallbackFunc_o *)sub_1C3B9B0(FriendSearchMenu_CallbackFunc_TypeInfo);
      FriendSearchMenu_CallbackFunc___ctor(
        v31,
        (Il2CppObject *)v3,
        Method_FriendRootComponent_OnSelectSearchFriend__,
        v32);
      if ( !v30 )
        goto LABEL_39;
      FriendSearchMenu__Open(v30, v31, 1, v33);
LABEL_18:
      operationItemListViewManager = (FriendOperationItemListViewManager_o *)v3->fields.myFSM;
      if ( !operationItemListViewManager )
LABEL_39:
        sub_1C3B9C0(operationItemListViewManager, method);
      PlayMakerFSM__SendEvent(
        (PlayMakerFSM_o *)operationItemListViewManager,
        (System_String_o *)StringLiteral_5575/*"EVENT_RAID_NEXT_TIME_2"*/,
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
  __int64 v36; // x8
  __int64 v37; // x20
  SkillInfo_o *v38; // x22
  _QWORD *v39; // x0
  System_Reflection_MethodBase_o *v40; // x0
  System_String_o *v41; // x20
  System_String_o *v42; // x21
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  Il2CppObject *v46; // x0
  System_String_o *v47; // x0
  _QWORD *v48; // x0
  System_Reflection_MethodBase_o *v49; // x0
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v51; // x0
  const MethodInfo *v52; // x3
  intptr_t v53; // w2
  _QWORD *v54; // x0
  System_Reflection_MethodBase_o *v55; // x0
  const MethodInfo *v56; // x2
  FriendOperationItemListViewItem_o *v57; // x21
  Il2CppObject *lockCountObj; // x8
  __int64 v59; // x20
  SkillInfo_o *v60; // x25
  Il2CppObject *Entity; // x21
  DataManager_o *v62; // x20
  System_String_o *v63; // x21
  System_String_o *v64; // x22
  __int64 v65; // x2
  __int64 v66; // x3
  __int64 v67; // x4
  Il2CppObject *v68; // x0
  System_String_o *v69; // x0
  __int64 v70; // x2
  __int64 v71; // x3
  __int64 v72; // x4
  System_String_o *v73; // x21
  Il2CppObject *v74; // x0
  System_String_o *v75; // x20
  _QWORD *v76; // x0
  System_Reflection_MethodBase_o *v77; // x0
  __int64 *v78; // x8
  _QWORD *v79; // x0
  System_Reflection_MethodBase_o *v80; // x0
  _QWORD *v81; // x0
  System_Reflection_MethodBase_o *v82; // x0
  _QWORD *v83; // x0
  System_Reflection_MethodBase_o *v84; // x0
  _QWORD *v85; // x0
  System_Reflection_MethodBase_o *v86; // x0
  const MethodInfo *v87; // x2
  DataManager_o *v88; // x8
  const MethodInfo *v89; // x2
  _QWORD *v90; // x0
  System_Reflection_MethodBase_o *v91; // x0
  const MethodInfo *v92; // x2
  DataManager_o *v93; // x8
  Il2CppObject *v94; // x9
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  const MethodInfo *v96; // x2
  _QWORD *v97; // x0
  System_Reflection_MethodBase_o *v98; // x0
  const MethodInfo *v99; // x2
  FriendOperationItemListViewItem_o *v100; // x20
  ServantLeaderInfo_o *ServantLeader; // x0
  EquipTargetInfo_o *EquipTargetInfo; // x0
  EquipTargetInfo_o *v103; // x21
  __int64 v104; // x22
  __int64 v105; // x23
  _QWORD *v106; // x0
  System_Reflection_MethodBase_o *v107; // x0
  const MethodInfo *v108; // x3
  int32_t v109; // w2
  FriendWarningDialog_o *friendWarningDialog; // x20
  FriendWarningDialog_CallbackFunc_o *v111; // x21
  const MethodInfo *v112; // x3
  const MethodInfo *v113; // x3
  _QWORD *v114; // x0
  System_Reflection_MethodBase_o *v115; // x0
  struct FriendOperationItemListViewManager_CallbackFunc_o *v116; // x21
  const MethodInfo *v117; // x2
  FriendOperationItemListViewItem_o *Item; // x0
  FriendOperationItemListViewItem_o *v119; // x20
  _QWORD *v120; // x0
  System_Reflection_MethodBase_o *v121; // x0
  int m_CancellationTokenSource; // [xsp+8h] [xbp-78h] BYREF
  int32_t lv; // [xsp+Ch] [xbp-74h] BYREF
  System_String_o *detail; // [xsp+10h] [xbp-70h] BYREF
  System_String_o *name; // [xsp+18h] [xbp-68h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+20h] [xbp-60h] BYREF
  System_String_o *v127; // [xsp+28h] [xbp-58h] BYREF
  System_String_o *v128; // [xsp+30h] [xbp-50h] BYREF
  SkillInfo_array *v129; // [xsp+38h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v130; // 0:x0.16

  if ( (byte_4C1D03C & 1) == 0 )
  {
    sub_1C3B764(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&kind);
    sub_1C3B764(&FriendWarningDialog_CallbackFunc_TypeInfo, v7);
    sub_1C3B764(&Method_DataManager_GetMasterData_SkillLvMaster___, v8);
    sub_1C3B764(&Method_DataManager_GetMasterData_SkillMaster___, v9);
    sub_1C3B764(&Method_DataManager_GetMasterData_TblFriendMaster___, v10);
    sub_1C3B764(&Method_DataManager_GetMaster_SkillMaster___, v11);
    sub_1C3B764(&DataManager_TypeInfo, v12);
    sub_1C3B764(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v13);
    sub_1C3B764(&Method_FriendRootComponent_EndMaxFriendWarning__, v14);
    sub_1C3B764(&Method_FriendRootComponent_OnSelectFriendItem__, v15);
    sub_1C3B764(&int_TypeInfo, v16);
    sub_1C3B764(&LocalizationManager_TypeInfo, v17);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v19);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_1C3B764(&StringLiteral_8804/*"Mesh data array start is outside of array size."*/, v21);
    sub_1C3B764(&StringLiteral_117/*"   "*/, v22);
    sub_1C3B764(&StringLiteral_8810/*"Message"*/, v23);
    sub_1C3B764(&StringLiteral_8805/*"Mesh data array start+count is outside of array size."*/, v24);
    sub_1C3B764(&StringLiteral_8699/*"Mapping for neutral culture "*/, v25);
    sub_1C3B764(&StringLiteral_8807/*"Mesh indices array start can't be negative."*/, v26);
    sub_1C3B764(&StringLiteral_3012/*"BZip2InputStream Write not supported"*/, v27);
    sub_1C3B764(&StringLiteral_8808/*"Mesh indices array start is outside of array size."*/, v28);
    sub_1C3B764(&StringLiteral_1/*""*/, v29);
    sub_1C3B764(&StringLiteral_8809/*"Mesh indices array start+count is outside of array size."*/, v30);
    byte_4C1D03C = 1;
  }
  v128 = 0LL;
  v129 = 0LL;
  skillInfoList = 0LL;
  v127 = 0LL;
  detail = 0LL;
  name = 0LL;
  this->fields.selectItemNum = n;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_133;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_TblFriendMaster___);
  switch ( kind )
  {
    case 1:
    case 2:
    case 3:
      v54 = Method_FriendRootComponent_OnSelectFriendItem__;
      if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
        v54 = (_QWORD *)sub_1C3B77C(Method_FriendRootComponent_OnSelectFriendItem__);
      v55 = (System_Reflection_MethodBase_o *)sub_1C3B748(v54, v54[4]);
      OverwriteAssetSoundName__PlaySystemSe(v55, 0, 0, 0LL);
      Instance = (DataManager_o *)this->fields.operationItemListViewManager;
      if ( !Instance )
        goto LABEL_133;
      Instance = (DataManager_o *)FriendOperationItemListViewManager__GetItem(
                                    (FriendOperationItemListViewManager_o *)Instance,
                                    this->fields.selectItemNum,
                                    v56);
      if ( !Instance )
        goto LABEL_133;
      v57 = (FriendOperationItemListViewItem_o *)Instance;
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
              v57->fields.classPos,
              0,
              0,
              (int32_t)lockCountObj[2].klass,
              0LL) )
        goto LABEL_55;
      if ( kind == 2 )
        v59 = 1LL;
      else
        v59 = 2LL * (kind == 3);
      Instance = (DataManager_o *)FriendOperationItemListViewItem__GetSkillInfo(v57, &v129, 0LL);
      if ( !v129 )
        goto LABEL_133;
      if ( (unsigned int)v59 >= v129->max_length )
        goto LABEL_134;
      v60 = v129->m_Items[v59];
      if ( !v60 || v60->fields.id < 1 || v60->fields.lv < 1 )
        goto LABEL_55;
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_133;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_SkillMaster___);
      if ( !Instance )
        goto LABEL_133;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                 v60->fields.id,
                 (const MethodInfo_329AE48 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_133;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_SkillLvMaster___);
      if ( !Instance )
        goto LABEL_133;
      Instance = (DataManager_o *)SkillLvMaster__GetEntity(
                                    (SkillLvMaster_o *)Instance,
                                    v60->fields.id,
                                    v60->fields.lv,
                                    0LL);
      if ( !Entity )
        goto LABEL_133;
      v62 = Instance;
      SkillEntity__getSkillMessageInfo((SkillEntity_o *)Entity, &v128, &v127, v60->fields.lv, 0LL);
      v63 = v128;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v64 = LocalizationManager__Get((System_String_o *)StringLiteral_8699/*"Mapping for neutral culture "*/, 0LL);
      lv = v60->fields.lv;
      v68 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv, v65, v66, v67);
      v69 = System_String__Format(v64, v68, 0LL);
      v128 = System_String__Concat_63379872(v63, (System_String_o *)StringLiteral_117/*"   "*/, v69, 0LL);
      Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3012/*"BZip2InputStream Write not supported"*/, 0LL);
      if ( !v62 )
        goto LABEL_133;
      v73 = (System_String_o *)Instance;
      m_CancellationTokenSource = (int)v62->fields.m_CancellationTokenSource;
      v74 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &m_CancellationTokenSource, v70, v71, v72);
      v75 = System_String__Format(v73, v74, 0LL);
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !Instance )
        goto LABEL_133;
      CommonUI__OpenDetailLongInfoDialog((CommonUI_o *)Instance, v128, v75, v127, 1, 0, 0LL);
LABEL_55:
      operationItemListViewManager = this->fields.operationItemListViewManager;
      v51 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1C3B9B0(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
      v53 = (int)Method_FriendRootComponent_OnSelectFriendItem__;
      goto LABEL_123;
    case 4:
      v76 = Method_FriendRootComponent_OnSelectFriendItem__;
      if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
        v76 = (_QWORD *)sub_1C3B77C(Method_FriendRootComponent_OnSelectFriendItem__);
      v77 = (System_Reflection_MethodBase_o *)sub_1C3B748(v76, v76[4]);
      OverwriteAssetSoundName__PlaySystemSe(v77, 0, 0, 0LL);
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
      v78 = &StringLiteral_8807/*"Mesh indices array start can't be negative."*/;
      goto LABEL_126;
    case 5:
      v79 = Method_FriendRootComponent_OnSelectFriendItem__;
      if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
        v79 = (_QWORD *)sub_1C3B77C(Method_FriendRootComponent_OnSelectFriendItem__);
      v80 = (System_Reflection_MethodBase_o *)sub_1C3B748(v79, v79[4]);
      OverwriteAssetSoundName__PlaySystemSe(v80, 0, 0, 0LL);
      if ( !MasterData_object )
        goto LABEL_133;
      Instance = (DataManager_o *)TblFriendMaster__GetList((TblFriendMaster_o *)MasterData_object, 3, 0LL);
      if ( !Instance || !SelfUserGame )
        goto LABEL_133;
      if ( SelfUserGame->fields.friendKeep <= SLODWORD(Instance->fields.m_CancellationTokenSource) )
      {
LABEL_117:
        friendWarningDialog = this->fields.friendWarningDialog;
        v111 = (FriendWarningDialog_CallbackFunc_o *)sub_1C3B9B0(FriendWarningDialog_CallbackFunc_TypeInfo);
        FriendWarningDialog_CallbackFunc___ctor(
          v111,
          (Il2CppObject *)this,
          Method_FriendRootComponent_EndMaxFriendWarning__,
          v112);
        if ( friendWarningDialog )
        {
          FriendWarningDialog__Open(friendWarningDialog, 1, v111, v113);
          return;
        }
LABEL_133:
        sub_1C3B9C0(Instance, v33);
      }
      Instance = (DataManager_o *)this->fields.myFSM;
      if ( !Instance )
        goto LABEL_133;
      v78 = &StringLiteral_8804/*"Mesh data array start is outside of array size."*/;
LABEL_126:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v78, 0LL);
      return;
    case 6:
      v81 = Method_FriendRootComponent_OnSelectFriendItem__;
      if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
        v81 = (_QWORD *)sub_1C3B77C(Method_FriendRootComponent_OnSelectFriendItem__);
      v82 = (System_Reflection_MethodBase_o *)sub_1C3B748(v81, v81[4]);
      OverwriteAssetSoundName__PlaySystemSe(v82, 0, 0, 0LL);
      Instance = (DataManager_o *)this->fields.myFSM;
      if ( !Instance )
        goto LABEL_133;
      v78 = &StringLiteral_8808/*"Mesh indices array start is outside of array size."*/;
      goto LABEL_126;
    case 7:
      v83 = Method_FriendRootComponent_OnSelectFriendItem__;
      if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
        v83 = (_QWORD *)sub_1C3B77C(Method_FriendRootComponent_OnSelectFriendItem__);
      v84 = (System_Reflection_MethodBase_o *)sub_1C3B748(v83, v83[4]);
      OverwriteAssetSoundName__PlaySystemSe(v84, 0, 0, 0LL);
      Instance = (DataManager_o *)this->fields.myFSM;
      if ( !Instance )
        goto LABEL_133;
      v78 = &StringLiteral_8805/*"Mesh data array start+count is outside of array size."*/;
      goto LABEL_126;
    case 8:
      v85 = Method_FriendRootComponent_OnSelectFriendItem__;
      if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
        v85 = (_QWORD *)sub_1C3B77C(Method_FriendRootComponent_OnSelectFriendItem__);
      v86 = (System_Reflection_MethodBase_o *)sub_1C3B748(v85, v85[4]);
      OverwriteAssetSoundName__PlaySystemSe(v86, 0, 0, 0LL);
      Instance = (DataManager_o *)this->fields.operationItemListViewManager;
      if ( !Instance )
        goto LABEL_133;
      Instance = (DataManager_o *)FriendOperationItemListViewManager__GetItem(
                                    (FriendOperationItemListViewManager_o *)Instance,
                                    this->fields.selectItemNum,
                                    v87);
      if ( !Instance )
        goto LABEL_133;
      v88 = Instance;
      Instance = (DataManager_o *)this->fields.myFSM;
      if ( !Instance )
        goto LABEL_133;
      if ( LODWORD(v88->fields.masterLoadThreads) == 9 )
        v78 = &StringLiteral_8810/*"Message"*/;
      else
        v78 = &StringLiteral_8809/*"Mesh indices array start+count is outside of array size."*/;
      goto LABEL_126;
    case 11:
      v97 = Method_FriendRootComponent_OnSelectFriendItem__;
      if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
        v97 = (_QWORD *)sub_1C3B77C(Method_FriendRootComponent_OnSelectFriendItem__);
      v98 = (System_Reflection_MethodBase_o *)sub_1C3B748(v97, v97[4]);
      OverwriteAssetSoundName__PlaySystemSe(v98, 0, 0, 0LL);
      Instance = (DataManager_o *)this->fields.operationItemListViewManager;
      if ( !Instance )
        goto LABEL_133;
      Instance = (DataManager_o *)FriendOperationItemListViewManager__GetItem(
                                    (FriendOperationItemListViewManager_o *)Instance,
                                    this->fields.selectItemNum,
                                    v99);
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
                                    v34);
      if ( !Instance )
        goto LABEL_133;
      v100 = (FriendOperationItemListViewItem_o *)Instance;
      ServantLeader = FriendOperationItemListViewItem__get_ServantLeader(
                        (FriendOperationItemListViewItem_o *)Instance,
                        0LL);
      if ( !ServantLeader || !ServantLeaderInfo__IsHideEquip(ServantLeader, 0LL) )
      {
        EquipTargetInfo = FriendOperationItemListViewItem__get_EquipTargetInfo(v100, 0LL);
        if ( EquipTargetInfo )
        {
          v103 = EquipTargetInfo;
          v105 = *(_QWORD *)&EquipTargetInfo->fields.svtId.fields.currentCryptoKey;
          v104 = *(_QWORD *)&EquipTargetInfo->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v130.fields.currentCryptoKey = v105;
          *(_QWORD *)&v130.fields.fakeValue = v104;
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v130, 0LL) >= 1 )
          {
            v106 = Method_FriendRootComponent_OnSelectFriendItem__;
            if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
              v106 = (_QWORD *)sub_1C3B77C(Method_FriendRootComponent_OnSelectFriendItem__);
            v107 = (System_Reflection_MethodBase_o *)sub_1C3B748(v106, v106[4]);
            OverwriteAssetSoundName__PlaySystemSe(v107, 0, 0, 0LL);
            if ( v100->fields.kind == 9 )
              v109 = 14;
            else
              v109 = 13;
            FriendRootComponent__SelectShowServantEquip(this, v103, v109, v108);
            return;
          }
        }
      }
      v114 = Method_FriendRootComponent_OnSelectFriendItem__;
      if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
        v114 = (_QWORD *)sub_1C3B77C(Method_FriendRootComponent_OnSelectFriendItem__);
      v115 = (System_Reflection_MethodBase_o *)sub_1C3B748(v114, v114[4]);
      OverwriteAssetSoundName__PlaySystemSe(v115, 2, 0, 0LL);
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
      v36 = (unsigned int)(kind - 14);
      v37 = (unsigned int)v36 < 4 ? v36 + 1 : 0LL;
      if ( !Instance )
        goto LABEL_133;
      Instance = (DataManager_o *)FriendOperationItemListViewItem__GetAppendSkillInfo(
                                    (FriendOperationItemListViewItem_o *)Instance,
                                    &skillInfoList,
                                    0LL);
      if ( !skillInfoList )
        goto LABEL_133;
      if ( (unsigned int)v37 >= skillInfoList->max_length )
        goto LABEL_134;
      v38 = skillInfoList->m_Items[v37];
      if ( v38 && v38->fields.id >= 1 && v38->fields.lv >= 1 )
      {
        v39 = Method_FriendRootComponent_OnSelectFriendItem__;
        if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
          v39 = (_QWORD *)sub_1C3B77C(Method_FriendRootComponent_OnSelectFriendItem__);
        v40 = (System_Reflection_MethodBase_o *)sub_1C3B748(v39, v39[4]);
        OverwriteAssetSoundName__PlaySystemSe(v40, 0, 0, 0LL);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_SkillMaster___);
        if ( !Instance )
          goto LABEL_133;
        Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                      v38->fields.id,
                                      (const MethodInfo_329AE48 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_133;
        SkillEntity__getSkillMessageInfo((SkillEntity_o *)Instance, &name, &detail, v38->fields.lv, 0LL);
        v41 = name;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v42 = LocalizationManager__Get((System_String_o *)StringLiteral_8699/*"Mapping for neutral culture "*/, 0LL);
        lv = v38->fields.lv;
        v46 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv, v43, v44, v45);
        v47 = System_String__Format(v42, v46, 0LL);
        name = System_String__Concat_63379872(v41, (System_String_o *)StringLiteral_117/*"   "*/, v47, 0LL);
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
        v48 = Method_FriendRootComponent_OnSelectFriendItem__;
        if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
          v48 = (_QWORD *)sub_1C3B77C(Method_FriendRootComponent_OnSelectFriendItem__);
        v49 = (System_Reflection_MethodBase_o *)sub_1C3B748(v48, v48[4]);
        OverwriteAssetSoundName__PlaySystemSe(v49, 2, 0, 0LL);
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
                 v89);
        if ( Item )
        {
          v119 = Item;
          v120 = Method_FriendRootComponent_OnSelectFriendItem__;
          if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
            v120 = (_QWORD *)sub_1C3B77C(Method_FriendRootComponent_OnSelectFriendItem__);
          v121 = (System_Reflection_MethodBase_o *)sub_1C3B748(v120, v120[4]);
          OverwriteAssetSoundName__PlaySystemSe(v121, 11, 0, 0LL);
          FriendOperationItemListViewItem__SwapLock(v119, 0LL);
        }
LABEL_28:
        operationItemListViewManager = this->fields.operationItemListViewManager;
        v51 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1C3B9B0(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
        v53 = (int)Method_FriendRootComponent_OnSelectFriendItem__;
      }
      else
      {
        v90 = Method_FriendRootComponent_OnSelectFriendItem__;
        if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
          v90 = (_QWORD *)sub_1C3B77C(Method_FriendRootComponent_OnSelectFriendItem__);
        v91 = (System_Reflection_MethodBase_o *)sub_1C3B748(v90, v90[4]);
        OverwriteAssetSoundName__PlaySystemSe(v91, 0, 0, 0LL);
        Instance = (DataManager_o *)this->fields.operationItemListViewManager;
        if ( !Instance )
          goto LABEL_133;
        Instance = (DataManager_o *)FriendOperationItemListViewManager__GetItem(
                                      (FriendOperationItemListViewManager_o *)Instance,
                                      this->fields.selectItemNum,
                                      v92);
        if ( !Instance )
          goto LABEL_133;
        v93 = Instance;
        Instance = (DataManager_o *)Instance->fields.context;
        if ( !Instance )
          goto LABEL_133;
        v94 = Instance->fields.lockCountObj;
        if ( !v94 )
          goto LABEL_133;
        if ( !LODWORD(v94[1].monitor) )
LABEL_134:
          sub_1C3B9C8(Instance, v33);
        ServantLeaderInfo = OtherUserGameEntity__getServantLeaderInfo(
                              (OtherUserGameEntity_o *)Instance,
                              v93[1].fields.m_CachedPtr,
                              0,
                              0,
                              (int32_t)v94[2].klass,
                              0LL);
        if ( ServantLeaderInfo )
        {
          FriendRootComponent__SelectShowServant(this, ServantLeaderInfo, v96);
          return;
        }
LABEL_122:
        operationItemListViewManager = this->fields.operationItemListViewManager;
        v51 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1C3B9B0(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
        v53 = (int)Method_FriendRootComponent_OnSelectFriendItem__;
      }
LABEL_123:
      v116 = v51;
      FriendOperationItemListViewManager_CallbackFunc___ctor(v51, (Il2CppObject *)this, v53, v52);
      if ( operationItemListViewManager )
      {
        operationItemListViewManager->fields.callbackFunc = v116;
        sub_1C3B708(&operationItemListViewManager->fields.callbackFunc);
        FriendOperationItemListViewManager__SetMode_31937280(operationItemListViewManager, 2, v117);
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

  if ( (byte_4C1D046 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_8806/*"Mesh indices array length can't be negative."*/, *(_QWORD *)&state);
    sub_1C3B764(&StringLiteral_8807/*"Mesh indices array start can't be negative."*/, v7);
    sub_1C3B764(&StringLiteral_8790/*"MemberNotFieldOrProperty"*/, v8);
    byte_4C1D046 = 1;
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
      v10 = &StringLiteral_8806/*"Mesh indices array length can't be negative."*/;
      goto LABEL_12;
    }
LABEL_13:
    sub_1C3B9C0(classButtonControl, *(_QWORD *)&state);
  }
  if ( state != 2 )
  {
    classButtonControl = (ClassButtonControlComponent_o *)this->fields.myFSM;
    if ( classButtonControl )
    {
      v10 = &StringLiteral_8790/*"MemberNotFieldOrProperty"*/;
      goto LABEL_12;
    }
    goto LABEL_13;
  }
  classButtonControl = (ClassButtonControlComponent_o *)this->fields.myFSM;
  if ( !classButtonControl )
    goto LABEL_13;
  v10 = &StringLiteral_8807/*"Mesh indices array start can't be negative."*/;
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

  if ( (byte_4C1D045 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_8791/*"MemberType"*/, isDecide);
    sub_1C3B764(&StringLiteral_8790/*"MemberNotFieldOrProperty"*/, v7);
    byte_4C1D045 = 1;
  }
  this->fields.selectFriendCode = friendCode;
  sub_1C3B708(&this->fields.selectFriendCode);
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1C3B9C0(0LL, v8);
  v10 = &StringLiteral_8791/*"MemberType"*/;
  if ( !isDecide )
    v10 = &StringLiteral_8790/*"MemberNotFieldOrProperty"*/;
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
    sub_1C3B9C0(operationItemListViewManager, method);
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

  if ( (qword_4C1D000 & 0x10000) == 0 )
  {
    sub_1C3B764(&BalanceConfig_TypeInfo, method);
    sub_1C3B764(&Method_DataManager_GetMasterData_TblFriendMaster___, v3);
    sub_1C3B764(&Method_DataManager_GetMasterData_UserFollowMaster___, v4);
    sub_1C3B764(&int_TypeInfo, v5);
    sub_1C3B764(&LocalizationManager_TypeInfo, v6);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1C3B764(&StringLiteral_6697/*"ForcedOnlyFirstOneSpeed"*/, v8);
    BYTE2(qword_4C1D000) = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_TblFriendMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  v13 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserFollowMaster___);
  friendCountLabel = this->fields.friendCountLabel;
  v15 = (UserFollowMaster_o *)v13;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6697/*"ForcedOnlyFirstOneSpeed"*/, 0LL);
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
  Instance = (DataManager_o *)System_String__Format_63382984(v16, v23, v24, 0LL);
  if ( !friendCountLabel )
    goto LABEL_16;
  UILabel__set_text(friendCountLabel, (System_String_o *)Instance, 0LL);
  followCountLabel = this->fields.followCountLabel;
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6697/*"ForcedOnlyFirstOneSpeed"*/, 0LL);
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
  Instance = (DataManager_o *)System_String__Format_63382984(v26, v35, v36, 0LL);
  if ( !followCountLabel
    || (UILabel__set_text(followCountLabel, (System_String_o *)Instance, 0LL),
        Instance = (DataManager_o *)TblFriendMaster__GetSum((TblFriendMaster_o *)MasterData_object, 2, 0LL),
        !this->fields.noticeNumber) )
  {
LABEL_16:
    sub_1C3B9C0(Instance, v11);
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

  if ( (qword_4C1D000 & 0x100) == 0 )
  {
    sub_1C3B764(&StringLiteral_17922/*"cord_b"*/, method);
    sub_1C3B764(&StringLiteral_17921/*"cord"*/, v3);
    sub_1C3B764(&StringLiteral_17809/*"commandCode/lock"*/, v4);
    sub_1C3B764(&StringLiteral_17920/*"coral"*/, v5);
    sub_1C3B764(&StringLiteral_17918/*"cookies"*/, v6);
    sub_1C3B764(&StringLiteral_17919/*"cooltime_base"*/, v7);
    sub_1C3B764(&StringLiteral_17917/*"cookieCollection"*/, v8);
    sub_1C3B764(&StringLiteral_17828/*"common"*/, v9);
    BYTE1(qword_4C1D000) = 1;
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
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17917/*"cookieCollection"*/, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabOfferedTitleSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17919/*"cooltime_base"*/, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabSearchTitleSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17922/*"cord_b"*/, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabFriendSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17809/*"commandCode/lock"*/, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabOfferedSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17809/*"commandCode/lock"*/, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabSearchSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      v14 = (System_String_o *)StringLiteral_17828/*"common"*/;
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
      sub_1C3B9C0(tabFriendButton, v11);
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
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17917/*"cookieCollection"*/, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabOfferedTitleSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17920/*"coral"*/, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabSearchTitleSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17921/*"cord"*/, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabFriendSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17809/*"commandCode/lock"*/, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabOfferedSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      v13 = (System_String_o *)StringLiteral_17828/*"common"*/;
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
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17918/*"cookies"*/, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabOfferedTitleSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17919/*"cooltime_base"*/, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabSearchTitleSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17921/*"cord"*/, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabFriendSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17828/*"common"*/, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabOfferedSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      v13 = (System_String_o *)StringLiteral_17809/*"commandCode/lock"*/;
LABEL_43:
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, v13, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabSearchSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      v14 = (System_String_o *)StringLiteral_17809/*"commandCode/lock"*/;
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

  if ( (byte_4C1D04B & 1) == 0 )
  {
    sub_1C3B764(&Method_FriendRootComponent_EndRequestFollowAssign__, method);
    sub_1C3B764(&Method_NetworkManager_getRequest_FollowAssignRequest___, v3);
    sub_1C3B764(&NetworkManager_TypeInfo, v4);
    sub_1C3B764(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    sub_1C3B764(&StringLiteral_11287/*"SERVANT_CHARA_GRAPH_EX_OPEN_MANAGER_"*/, v6);
    byte_4C1D04B = 1;
  }
  if ( this->fields.selectFriendEntity )
  {
    v7 = (NetworkManager_ResultCallbackFunc_o *)sub_1C3B9B0(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      Method_FriendRootComponent_EndRequestFollowAssign__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = (FollowAssignRequest_o *)NetworkManager__getRequest_object_(
                                                v7,
                                                (const MethodInfo_3075AE8 *)Method_NetworkManager_getRequest_FollowAssignRequest___);
    selectFriendEntity = this->fields.selectFriendEntity;
    if ( selectFriendEntity && Request_object )
    {
      FollowAssignRequest__beginRequest(Request_object, selectFriendEntity->fields.userId, 0LL);
      return;
    }
LABEL_11:
    sub_1C3B9C0(Request_object, method);
  }
  Request_object = (FollowAssignRequest_o *)this->fields.myFSM;
  if ( !Request_object )
    goto LABEL_11;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Request_object, (System_String_o *)StringLiteral_11287/*"SERVANT_CHARA_GRAPH_EX_OPEN_MANAGER_"*/, 0LL);
}


void __fastcall FriendRootComponent__RequestFollowRemove(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_object__o *v4; // x20
  const MethodInfo *v5; // x2

  if ( (byte_4C1D054 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_string__TypeInfo, method);
    sub_1C3B764(&Method_FriendRootComponent__RequestFollowRemove_b__143_0__, v3);
    byte_4C1D054 = 1;
  }
  v4 = (System_Action_object__o *)sub_1C3B9B0(System_Action_string__TypeInfo);
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

  if ( (byte_4C1D022 & 1) == 0 )
  {
    sub_1C3B764(&Method_FriendRootComponent_EndRequestFriend__, method);
    sub_1C3B764(&Method_NetworkManager_getRequest_FriendAcceptRequest___, v4);
    sub_1C3B764(&NetworkManager_TypeInfo, v5);
    sub_1C3B764(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    sub_1C3B764(&StringLiteral_11287/*"SERVANT_CHARA_GRAPH_EX_OPEN_MANAGER_"*/, v7);
    byte_4C1D022 = 1;
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
      v11 = (NetworkManager_ResultCallbackFunc_o *)sub_1C3B9B0(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v11,
        (Il2CppObject *)this,
        Method_FriendRootComponent_EndRequestFriend__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      operationItemListViewManager = (FriendOperationItemListViewManager_o *)NetworkManager__getRequest_object_(
                                                                               v11,
                                                                               (const MethodInfo_3075AE8 *)Method_NetworkManager_getRequest_FriendAcceptRequest___);
      if ( operationItemListViewManager )
      {
        FriendAcceptRequest__beginRequest(
          (FriendAcceptRequest_o *)operationItemListViewManager,
          otherUserGameEntity->fields.userId,
          0LL);
        return;
      }
LABEL_12:
      sub_1C3B9C0(operationItemListViewManager, method);
    }
  }
  operationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.myFSM;
  if ( !operationItemListViewManager )
    goto LABEL_12;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)operationItemListViewManager, (System_String_o *)StringLiteral_11287/*"SERVANT_CHARA_GRAPH_EX_OPEN_MANAGER_"*/, 0LL);
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

  if ( (byte_4C1D024 & 1) == 0 )
  {
    sub_1C3B764(&Method_FriendRootComponent_EndRequestFriend__, method);
    sub_1C3B764(&Method_NetworkManager_getRequest_FriendCancelRequest___, v4);
    sub_1C3B764(&NetworkManager_TypeInfo, v5);
    sub_1C3B764(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    sub_1C3B764(&StringLiteral_11287/*"SERVANT_CHARA_GRAPH_EX_OPEN_MANAGER_"*/, v7);
    byte_4C1D024 = 1;
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
      v11 = (NetworkManager_ResultCallbackFunc_o *)sub_1C3B9B0(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v11,
        (Il2CppObject *)this,
        Method_FriendRootComponent_EndRequestFriend__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      operationItemListViewManager = (FriendOperationItemListViewManager_o *)NetworkManager__getRequest_object_(
                                                                               v11,
                                                                               (const MethodInfo_3075AE8 *)Method_NetworkManager_getRequest_FriendCancelRequest___);
      if ( operationItemListViewManager )
      {
        FriendCancelRequest__beginRequest(
          (FriendCancelRequest_o *)operationItemListViewManager,
          otherUserGameEntity->fields.userId,
          0LL);
        return;
      }
LABEL_12:
      sub_1C3B9C0(operationItemListViewManager, method);
    }
  }
  operationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.myFSM;
  if ( !operationItemListViewManager )
    goto LABEL_12;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)operationItemListViewManager, (System_String_o *)StringLiteral_11287/*"SERVANT_CHARA_GRAPH_EX_OPEN_MANAGER_"*/, 0LL);
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

  if ( (byte_4C1D020 & 1) == 0 )
  {
    sub_1C3B764(&Method_FriendRootComponent_EndRequestFriend__, method);
    sub_1C3B764(&Method_NetworkManager_getRequest_FriendOfferRequest___, v3);
    sub_1C3B764(&NetworkManager_TypeInfo, v4);
    sub_1C3B764(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    sub_1C3B764(&StringLiteral_11287/*"SERVANT_CHARA_GRAPH_EX_OPEN_MANAGER_"*/, v6);
    byte_4C1D020 = 1;
  }
  if ( this->fields.selectFriendEntity )
  {
    v7 = (NetworkManager_ResultCallbackFunc_o *)sub_1C3B9B0(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      Method_FriendRootComponent_EndRequestFriend__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = (FriendOfferRequest_o *)NetworkManager__getRequest_object_(
                                               v7,
                                               (const MethodInfo_3075AE8 *)Method_NetworkManager_getRequest_FriendOfferRequest___);
    selectFriendEntity = this->fields.selectFriendEntity;
    if ( selectFriendEntity && Request_object )
    {
      FriendOfferRequest__beginRequest(Request_object, selectFriendEntity->fields.userId, 0LL);
      return;
    }
LABEL_11:
    sub_1C3B9C0(Request_object, method);
  }
  Request_object = (FriendOfferRequest_o *)this->fields.myFSM;
  if ( !Request_object )
    goto LABEL_11;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Request_object, (System_String_o *)StringLiteral_11287/*"SERVANT_CHARA_GRAPH_EX_OPEN_MANAGER_"*/, 0LL);
}


void __fastcall FriendRootComponent__RequestFriendOffer2(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_object__o *v4; // x20
  const MethodInfo *v5; // x2

  if ( (byte_4C1D021 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_string__TypeInfo, method);
    sub_1C3B764(&Method_FriendRootComponent__RequestFriendOffer2_b__88_0__, v3);
    byte_4C1D021 = 1;
  }
  v4 = (System_Action_object__o *)sub_1C3B9B0(System_Action_string__TypeInfo);
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
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x3

  if ( (byte_4C1D028 & 1) == 0 )
  {
    sub_1C3B764(&FriendWarningDialog_CallbackFunc_TypeInfo, method);
    sub_1C3B764(&Method_FriendRootComponent_EndNoSearchWarning__, v3);
    sub_1C3B764(&Method_FriendRootComponent_EndRequestFriendProfile__, v4);
    sub_1C3B764(&Method_NetworkManager_getRequest_ProfileTopRequest___, v5);
    sub_1C3B764(&NetworkManager_TypeInfo, v6);
    sub_1C3B764(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    sub_1C3B764(&StringLiteral_117/*"   "*/, v8);
    sub_1C3B764(&StringLiteral_11287/*"SERVANT_CHARA_GRAPH_EX_OPEN_MANAGER_"*/, v9);
    sub_1C3B764(&StringLiteral_1/*""*/, v10);
    byte_4C1D028 = 1;
  }
  selectFriendCode = this->fields.selectFriendCode;
  if ( selectFriendCode )
  {
    v12 = System_String__Replace_63388240(
            selectFriendCode,
            (System_String_o *)StringLiteral_117/*"   "*/,
            (System_String_o *)StringLiteral_1/*""*/,
            0LL);
    if ( System_String__op_Inequality(v12, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
    {
      v13 = (NetworkManager_ResultCallbackFunc_o *)sub_1C3B9B0(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v13,
        (Il2CppObject *)this,
        Method_FriendRootComponent_EndRequestFriendProfile__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Request_object = (ProfileTopRequest_o *)NetworkManager__getRequest_object_(
                                                v13,
                                                (const MethodInfo_3075AE8 *)Method_NetworkManager_getRequest_ProfileTopRequest___);
      if ( Request_object )
      {
        ProfileTopRequest__beginRequestFriendCode(Request_object, this->fields.selectFriendCode, 0LL);
        return;
      }
LABEL_13:
      sub_1C3B9C0(Request_object, v15);
    }
    friendWarningDialog = this->fields.friendWarningDialog;
    v17 = (FriendWarningDialog_CallbackFunc_o *)sub_1C3B9B0(FriendWarningDialog_CallbackFunc_TypeInfo);
    FriendWarningDialog_CallbackFunc___ctor(
      v17,
      (Il2CppObject *)this,
      Method_FriendRootComponent_EndNoSearchWarning__,
      v18);
    if ( !friendWarningDialog )
      goto LABEL_13;
    FriendWarningDialog__Open(friendWarningDialog, 3, v17, v19);
  }
  this->fields.selectFriendEntity = 0LL;
  sub_1C3B708(&this->fields.selectFriendEntity);
  Request_object = (ProfileTopRequest_o *)this->fields.myFSM;
  if ( !Request_object )
    goto LABEL_13;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Request_object, (System_String_o *)StringLiteral_11287/*"SERVANT_CHARA_GRAPH_EX_OPEN_MANAGER_"*/, 0LL);
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

  if ( (byte_4C1D023 & 1) == 0 )
  {
    sub_1C3B764(&Method_FriendRootComponent_EndRequestFriend__, method);
    sub_1C3B764(&Method_NetworkManager_getRequest_FriendRejectRequest___, v4);
    sub_1C3B764(&NetworkManager_TypeInfo, v5);
    sub_1C3B764(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1C3B764(&StringLiteral_11287/*"SERVANT_CHARA_GRAPH_EX_OPEN_MANAGER_"*/, v8);
    byte_4C1D023 = 1;
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
      operationItemListViewManager = (FriendOperationItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( operationItemListViewManager )
      {
        CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)operationItemListViewManager, 0, 0LL);
        v12 = (NetworkManager_ResultCallbackFunc_o *)sub_1C3B9B0(NetworkManager_ResultCallbackFunc_TypeInfo);
        NetworkManager_ResultCallbackFunc___ctor(
          v12,
          (Il2CppObject *)this,
          Method_FriendRootComponent_EndRequestFriend__,
          0LL);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        operationItemListViewManager = (FriendOperationItemListViewManager_o *)NetworkManager__getRequest_object_(
                                                                                 v12,
                                                                                 (const MethodInfo_3075AE8 *)Method_NetworkManager_getRequest_FriendRejectRequest___);
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
      sub_1C3B9C0(operationItemListViewManager, method);
    }
  }
  operationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.myFSM;
  if ( !operationItemListViewManager )
    goto LABEL_13;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)operationItemListViewManager, (System_String_o *)StringLiteral_11287/*"SERVANT_CHARA_GRAPH_EX_OPEN_MANAGER_"*/, 0LL);
}


void __fastcall FriendRootComponent__RequestFriendRemove(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_object__o *v4; // x20
  const MethodInfo *v5; // x2

  if ( (byte_4C1D025 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_string__TypeInfo, method);
    sub_1C3B764(&Method_FriendRootComponent__RequestFriendRemove_b__92_0__, v3);
    byte_4C1D025 = 1;
  }
  v4 = (System_Action_object__o *)sub_1C3B9B0(System_Action_string__TypeInfo);
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
  const MethodInfo *v27; // x3
  const MethodInfo *v28; // x3
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x20
  OtherUserGameEntity_o *v30; // x21
  FriendOperationConfirmMenu_CallbackFunc_o *v31; // x22

  if ( (byte_4C1D047 & 1) == 0 )
  {
    sub_1C3B764(&BalanceConfig_TypeInfo, method);
    sub_1C3B764(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo, v3);
    sub_1C3B764(&FriendWarningDialog_CallbackFunc_TypeInfo, v4);
    sub_1C3B764(&NotificationDialog_ClickDelegate_TypeInfo, v5);
    sub_1C3B764(&Method_DataManager_GetMasterData_UserFollowMaster___, v6);
    sub_1C3B764(&Method_FriendRootComponent_EndMaxFollowWarningOfferConfirm__, v7);
    sub_1C3B764(&Method_FriendRootComponent_SelectedFollowOfferConfirm__, v8);
    sub_1C3B764(&LocalizationManager_TypeInfo, v9);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1C3B764(&StringLiteral_2051/*"ASSERT"*/, v12);
    sub_1C3B764(&StringLiteral_2050/*"ASN1 corrupted data."*/, v13);
    byte_4C1D047 = 1;
  }
  if ( this->fields.state == 23 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserFollowMaster___);
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
          v26 = (FriendWarningDialog_CallbackFunc_o *)sub_1C3B9B0(FriendWarningDialog_CallbackFunc_TypeInfo);
          FriendWarningDialog_CallbackFunc___ctor(
            v26,
            (Il2CppObject *)this,
            Method_FriendRootComponent_EndMaxFollowWarningOfferConfirm__,
            v27);
          if ( friendWarningDialog )
          {
            FriendWarningDialog__Open(friendWarningDialog, 7, v26, v28);
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
            v21 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v22 = LocalizationManager__Get((System_String_o *)StringLiteral_2051/*"ASSERT"*/, 0LL);
            v23 = LocalizationManager__Get((System_String_o *)StringLiteral_2050/*"ASN1 corrupted data."*/, 0LL);
            v24 = (NotificationDialog_ClickDelegate_o *)sub_1C3B9B0(NotificationDialog_ClickDelegate_TypeInfo);
            NotificationDialog_ClickDelegate___ctor(
              v24,
              (Il2CppObject *)this,
              Method_FriendRootComponent_EndMaxFollowWarningOfferConfirm__,
              0LL);
            if ( v21 )
            {
              CommonUI__OpenNotificationDialog_31234368(
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
            v30 = this->fields.selectFriendEntity;
            v31 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_1C3B9B0(FriendOperationConfirmMenu_CallbackFunc_TypeInfo);
            FriendOperationConfirmMenu_CallbackFunc___ctor(
              v31,
              (Il2CppObject *)this,
              Method_FriendRootComponent_SelectedFollowOfferConfirm__,
              0LL);
            if ( operationConfirmMenu )
            {
              FriendOperationConfirmMenu__Open(operationConfirmMenu, 6, v30, v31, 0LL);
              return;
            }
          }
        }
      }
    }
    sub_1C3B9C0(Instance, v15);
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

  if ( (byte_4C1D04E & 1) == 0 )
  {
    sub_1C3B764(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo, method);
    sub_1C3B764(&Method_FriendRootComponent_SelectedFollowRemoveConfirm__, v4);
    byte_4C1D04E = 1;
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
          v8 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_1C3B9B0(FriendOperationConfirmMenu_CallbackFunc_TypeInfo),
          FriendOperationConfirmMenu_CallbackFunc___ctor(
            v8,
            (Il2CppObject *)this,
            Method_FriendRootComponent_SelectedFollowRemoveConfirm__,
            0LL),
          !operationConfirmMenu) )
    {
      sub_1C3B9C0(operationItemListViewManager, method);
    }
    FriendOperationConfirmMenu__Open(operationConfirmMenu, 7, dragParentObject, v8, 0LL);
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

  if ( (byte_4C1D014 & 1) == 0 )
  {
    sub_1C3B764(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo, method);
    sub_1C3B764(&Method_FriendRootComponent_SelectedFriendAcceptConfirm__, v4);
    byte_4C1D014 = 1;
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
          v8 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_1C3B9B0(FriendOperationConfirmMenu_CallbackFunc_TypeInfo),
          FriendOperationConfirmMenu_CallbackFunc___ctor(
            v8,
            (Il2CppObject *)this,
            Method_FriendRootComponent_SelectedFriendAcceptConfirm__,
            0LL),
          !operationConfirmMenu) )
    {
      sub_1C3B9C0(operationItemListViewManager, method);
    }
    FriendOperationConfirmMenu__Open(operationConfirmMenu, 2, dragParentObject, v8, 0LL);
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

  if ( (byte_4C1D01A & 1) == 0 )
  {
    sub_1C3B764(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo, method);
    sub_1C3B764(&Method_FriendRootComponent_SelectedFriendCancelConfirm__, v4);
    byte_4C1D01A = 1;
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
          v8 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_1C3B9B0(FriendOperationConfirmMenu_CallbackFunc_TypeInfo),
          FriendOperationConfirmMenu_CallbackFunc___ctor(
            v8,
            (Il2CppObject *)this,
            Method_FriendRootComponent_SelectedFriendCancelConfirm__,
            0LL),
          !operationConfirmMenu) )
    {
      sub_1C3B9C0(operationItemListViewManager, method);
    }
    FriendOperationConfirmMenu__Open(operationConfirmMenu, 4, dragParentObject, v8, 0LL);
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
  FriendOperationConfirmMenu_o *v15; // x0
  OtherUserGameEntity_o *v16; // x2
  UserGameEntity_o *SelfUserGame; // x20
  const MethodInfo *v18; // x2
  struct FriendOperationConfirmMenu_o *operationConfirmMenu; // x20
  OtherUserGameEntity_o *context; // x21
  FriendWarningDialog_o *friendWarningDialog; // x20
  FriendWarningDialog_CallbackFunc_o *v22; // x21
  const MethodInfo *v23; // x3
  const MethodInfo *v24; // x3

  if ( (byte_4C1D012 & 1) == 0 )
  {
    sub_1C3B764(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo, method);
    sub_1C3B764(&FriendWarningDialog_CallbackFunc_TypeInfo, v3);
    sub_1C3B764(&Method_DataManager_GetMasterData_TblFriendMaster___, v4);
    sub_1C3B764(&Method_FriendRootComponent_EndMaxFriendWarningOfferConfirm__, v5);
    sub_1C3B764(&Method_FriendRootComponent_SelectedFriendOfferConfirm__, v6);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4C1D012 = 1;
  }
  state = this->fields.state;
  if ( state == 4 )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_27;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_TblFriendMaster___);
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
          v14 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_1C3B9B0(FriendOperationConfirmMenu_CallbackFunc_TypeInfo);
          FriendOperationConfirmMenu_CallbackFunc___ctor(
            v14,
            (Il2CppObject *)this,
            Method_FriendRootComponent_SelectedFriendOfferConfirm__,
            0LL);
          if ( operationConfirmMenu )
          {
            v15 = operationConfirmMenu;
            v16 = context;
            goto LABEL_22;
          }
        }
      }
LABEL_27:
      sub_1C3B9C0(Instance, v11);
    }
LABEL_24:
    this->fields.state = 29;
    friendWarningDialog = this->fields.friendWarningDialog;
    v22 = (FriendWarningDialog_CallbackFunc_o *)sub_1C3B9B0(FriendWarningDialog_CallbackFunc_TypeInfo);
    FriendWarningDialog_CallbackFunc___ctor(
      v22,
      (Il2CppObject *)this,
      Method_FriendRootComponent_EndMaxFriendWarningOfferConfirm__,
      v23);
    if ( !friendWarningDialog )
      goto LABEL_27;
    FriendWarningDialog__Open(friendWarningDialog, 1, v22, v24);
    return;
  }
  if ( state != 23 )
    return;
  v9 = UserGameMaster__getSelfUserGame(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_TblFriendMaster___);
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
    v14 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_1C3B9B0(FriendOperationConfirmMenu_CallbackFunc_TypeInfo);
    FriendOperationConfirmMenu_CallbackFunc___ctor(
      v14,
      (Il2CppObject *)this,
      Method_FriendRootComponent_SelectedFriendOfferConfirm__,
      0LL);
    if ( v13 )
    {
      v15 = v13;
      v16 = selectFriendEntity;
LABEL_22:
      FriendOperationConfirmMenu__Open(v15, 1, v16, v14, 0LL);
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

  if ( (byte_4C1D017 & 1) == 0 )
  {
    sub_1C3B764(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo, method);
    sub_1C3B764(&Method_FriendRootComponent_SelectedFriendRejectConfirm__, v4);
    byte_4C1D017 = 1;
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
          v8 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_1C3B9B0(FriendOperationConfirmMenu_CallbackFunc_TypeInfo),
          FriendOperationConfirmMenu_CallbackFunc___ctor(
            v8,
            (Il2CppObject *)this,
            Method_FriendRootComponent_SelectedFriendRejectConfirm__,
            0LL),
          !operationConfirmMenu) )
    {
      sub_1C3B9C0(operationItemListViewManager, method);
    }
    FriendOperationConfirmMenu__Open(operationConfirmMenu, 3, dragParentObject, v8, 0LL);
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

  if ( (byte_4C1D01D & 1) == 0 )
  {
    sub_1C3B764(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo, method);
    sub_1C3B764(&Method_FriendRootComponent_SelectedFriendRemoveConfirm__, v4);
    byte_4C1D01D = 1;
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
          v8 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_1C3B9B0(FriendOperationConfirmMenu_CallbackFunc_TypeInfo),
          FriendOperationConfirmMenu_CallbackFunc___ctor(
            v8,
            (Il2CppObject *)this,
            Method_FriendRootComponent_SelectedFriendRemoveConfirm__,
            0LL),
          !operationConfirmMenu) )
    {
      sub_1C3B9C0(operationItemListViewManager, method);
    }
    FriendOperationConfirmMenu__Open(operationConfirmMenu, 5, dragParentObject, v8, 0LL);
  }
}


void __fastcall FriendRootComponent__SelectSearchFriend(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_4C1D00B & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_5575/*"EVENT_RAID_NEXT_TIME_2"*/, method);
    byte_4C1D00B = 1;
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
      sub_1C3B9C0(0LL, method);
    PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_5575/*"EVENT_RAID_NEXT_TIME_2"*/, 0LL);
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

  if ( (qword_4C1D000 & 0x1000000) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&Method_FriendRootComponent_OnMoveEnd__, v3);
    sub_1C3B764(&StringLiteral_5575/*"EVENT_RAID_NEXT_TIME_2"*/, v4);
    BYTE3(qword_4C1D000) = 1;
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
            v9 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
            System_Action___ctor(v9, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0LL);
            if ( v8 )
            {
              v8->fields.callbackFunc2 = v9;
              sub_1C3B708(&v8->fields.callbackFunc2);
              FriendOperationItemListViewManager__SetMode_31937280(v8, 1, v10);
              return;
            }
          }
        }
      }
    }
LABEL_12:
    sub_1C3B9C0(operationItemListViewManager, method);
  }
  operationItemListViewManager = (UnityEngine_Component_o *)this->fields.myFSM;
  if ( !operationItemListViewManager )
    goto LABEL_12;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)operationItemListViewManager, (System_String_o *)StringLiteral_5575/*"EVENT_RAID_NEXT_TIME_2"*/, 0LL);
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

  if ( (qword_4C1D000 & 0x10000000000LL) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&Method_FriendRootComponent_OnMoveEnd__, v3);
    BYTE5(qword_4C1D000) = 1;
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
          v9 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo),
          System_Action___ctor(v9, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0LL),
          !v8) )
    {
LABEL_11:
      sub_1C3B9C0(operationItemListViewManager, v4);
    }
    v8->fields.callbackFunc2 = v9;
    sub_1C3B708(&v8->fields.callbackFunc2);
    FriendOperationItemListViewManager__SetMode_31937280(v8, 1, v10);
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

  if ( (qword_4C1D000 & 0x100000000000000LL) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&Method_FriendRootComponent_OnMoveEnd__, v3);
    sub_1C3B764(&StringLiteral_5575/*"EVENT_RAID_NEXT_TIME_2"*/, v4);
    HIBYTE(qword_4C1D000) = 1;
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
            v9 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
            System_Action___ctor(v9, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0LL);
            if ( v8 )
            {
              v8->fields.callbackFunc2 = v9;
              sub_1C3B708(&v8->fields.callbackFunc2);
              FriendOperationItemListViewManager__SetMode_31937280(v8, 1, v10);
              return;
            }
          }
        }
      }
    }
LABEL_12:
    sub_1C3B9C0(operationItemListViewManager, method);
  }
  operationItemListViewManager = (UnityEngine_Component_o *)this->fields.myFSM;
  if ( !operationItemListViewManager )
    goto LABEL_12;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)operationItemListViewManager, (System_String_o *)StringLiteral_5575/*"EVENT_RAID_NEXT_TIME_2"*/, 0LL);
}


void __fastcall FriendRootComponent__SelectShowSearch(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *operationItemListViewManager; // x0
  struct FriendOperationItemListViewManager_o *v5; // x20
  const MethodInfo *v6; // x3
  FriendSearchMenu_o *friendSearchMenu; // x20
  System_Action_o *v8; // x21
  const MethodInfo *v9; // x2
  struct FriendOperationItemListViewManager_o *v10; // x20
  System_Action_o *v11; // x21
  const MethodInfo *v12; // x2

  if ( (byte_4C1D009 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&Method_FriendRootComponent_OnMoveEnd__, v3);
    byte_4C1D009 = 1;
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
    sub_1C3B708(&v5->fields.friendCode);
    FriendOperationItemListViewManager__CreateList(v5, 0, 0, v6);
    this->fields.state = 17;
    friendSearchMenu = this->fields.friendSearchMenu;
    v8 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0LL);
    if ( !friendSearchMenu
      || (FriendSearchMenu__Close_31962860(friendSearchMenu, v8, v9),
          v10 = this->fields.operationItemListViewManager,
          v11 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo),
          System_Action___ctor(v11, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0LL),
          !v10) )
    {
LABEL_11:
      sub_1C3B9C0(operationItemListViewManager, method);
    }
    v10->fields.callbackFunc2 = v11;
    sub_1C3B708(&v10->fields.callbackFunc2);
    FriendOperationItemListViewManager__SetMode_31937280(v10, 1, v12);
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

  if ( (byte_4C1D00F & 1) == 0 )
  {
    sub_1C3B764(&ServantStatusDialog_EndDelegate_TypeInfo, servantLeaderInfo);
    sub_1C3B764(&Method_FriendRootComponent_EndShowServant__, v5);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4C1D00F = 1;
  }
  state = this->fields.state;
  if ( state <= 0x13 && ((1 << state) & 0x84210) != 0 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v9 = (ServantStatusDialog_EndDelegate_o *)sub_1C3B9B0(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(v9, (Il2CppObject *)this, Method_FriendRootComponent_EndShowServant__, 0LL);
    if ( !Instance )
      sub_1C3B9C0(v10, v11);
    if ( state == 4 )
      v12 = 4;
    else
      v12 = 5;
    CommonUI__OpenServantStatusDialog_31244276((CommonUI_o *)Instance, v12, servantLeaderInfo, v9, 0LL);
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

  if ( (byte_4C1D039 & 1) == 0 )
  {
    sub_1C3B764(&ServantStatusDialog_EndDelegate_TypeInfo, equipInfo);
    sub_1C3B764(&Method_FriendRootComponent_EndShowServantEquip__, v7);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    byte_4C1D039 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (ServantStatusDialog_EndDelegate_o *)sub_1C3B9B0(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(
    v10,
    (Il2CppObject *)this,
    Method_FriendRootComponent_EndShowServantEquip__,
    0LL);
  if ( !Instance )
    sub_1C3B9C0(v11, v12);
  CommonUI__OpenServantEquipStatusDialog_31247372((CommonUI_o *)Instance, statusKind, equipInfo, v10, 0LL, 0LL);
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

  if ( (byte_4C1D04A & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_8791/*"MemberType"*/, isDecide);
    sub_1C3B764(&StringLiteral_8790/*"MemberNotFieldOrProperty"*/, v5);
    byte_4C1D04A = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1C3B9C0(0LL, isDecide);
  v7 = &StringLiteral_8791/*"MemberType"*/;
  if ( !isDecide )
    v7 = &StringLiteral_8790/*"MemberNotFieldOrProperty"*/;
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

  if ( (byte_4C1D044 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_8791/*"MemberType"*/, isDecide);
    sub_1C3B764(&StringLiteral_8790/*"MemberNotFieldOrProperty"*/, v5);
    byte_4C1D044 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1C3B9C0(0LL, isDecide);
  v7 = &StringLiteral_8791/*"MemberType"*/;
  if ( !isDecide )
    v7 = &StringLiteral_8790/*"MemberNotFieldOrProperty"*/;
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

  if ( (byte_4C1D040 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_8791/*"MemberType"*/, isDecide);
    sub_1C3B764(&StringLiteral_8790/*"MemberNotFieldOrProperty"*/, v5);
    byte_4C1D040 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1C3B9C0(0LL, isDecide);
  v7 = &StringLiteral_8791/*"MemberType"*/;
  if ( !isDecide )
    v7 = &StringLiteral_8790/*"MemberNotFieldOrProperty"*/;
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

  if ( (byte_4C1D042 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_8791/*"MemberType"*/, isDecide);
    sub_1C3B764(&StringLiteral_8790/*"MemberNotFieldOrProperty"*/, v5);
    byte_4C1D042 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1C3B9C0(0LL, isDecide);
  v7 = &StringLiteral_8791/*"MemberType"*/;
  if ( !isDecide )
    v7 = &StringLiteral_8790/*"MemberNotFieldOrProperty"*/;
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

  if ( (byte_4C1D03F & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_8791/*"MemberType"*/, isDecide);
    sub_1C3B764(&StringLiteral_8790/*"MemberNotFieldOrProperty"*/, v5);
    byte_4C1D03F = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1C3B9C0(0LL, isDecide);
  v7 = &StringLiteral_8791/*"MemberType"*/;
  if ( !isDecide )
    v7 = &StringLiteral_8790/*"MemberNotFieldOrProperty"*/;
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

  if ( (byte_4C1D041 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_8791/*"MemberType"*/, isDecide);
    sub_1C3B764(&StringLiteral_8790/*"MemberNotFieldOrProperty"*/, v5);
    byte_4C1D041 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1C3B9C0(0LL, isDecide);
  v7 = &StringLiteral_8791/*"MemberType"*/;
  if ( !isDecide )
    v7 = &StringLiteral_8790/*"MemberNotFieldOrProperty"*/;
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

  if ( (byte_4C1D043 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_8791/*"MemberType"*/, isDecide);
    sub_1C3B764(&StringLiteral_8790/*"MemberNotFieldOrProperty"*/, v5);
    byte_4C1D043 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1C3B9C0(0LL, isDecide);
  v7 = &StringLiteral_8791/*"MemberType"*/;
  if ( !isDecide )
    v7 = &StringLiteral_8790/*"MemberNotFieldOrProperty"*/;
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
      sub_1C3B9C0(modeButtonParent, v5);
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
  const MethodInfo *v11; // x2
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  int32_t currentCursor; // w22
  FriendSearchResultMenu_o *v14; // x20
  OtherUserGameEntity_o *selectFriendEntity; // x21
  FriendSearchResultMenu_CallbackFunc_o *v16; // x23
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x4
  FriendSearchMenu_o *friendSearchMenu; // x20
  FriendSearchMenu_CallbackFunc_o *v20; // x21
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x3

  v2 = this;
  if ( (byte_4C1D00D & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&FriendSearchResultMenu_CallbackFunc_TypeInfo, v3);
    sub_1C3B764(&FriendSearchMenu_CallbackFunc_TypeInfo, v4);
    sub_1C3B764(&Method_FriendRootComponent_OnSelectOffer__, v5);
    sub_1C3B764(&Method_FriendRootComponent_OnSelectSearchFriend__, v6);
    sub_1C3B764(&Method_FriendRootComponent_ShowSearchResult__, v7);
    this = (FriendRootComponent_o *)sub_1C3B764(&StringLiteral_5575/*"EVENT_RAID_NEXT_TIME_2"*/, v8);
    byte_4C1D00D = 1;
  }
  if ( v2->fields.state == 23 )
  {
    friendSearchResultMenu = v2->fields.friendSearchResultMenu;
    if ( !friendSearchResultMenu )
      goto LABEL_14;
    if ( friendSearchResultMenu->fields.isOpen )
    {
      v10 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)v2, Method_FriendRootComponent_ShowSearchResult__, 0LL);
      FriendSearchResultMenu__Close_31965024(friendSearchResultMenu, v10, v11);
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
    v14 = v2->fields.friendSearchResultMenu;
    selectFriendEntity = v2->fields.selectFriendEntity;
    v16 = (FriendSearchResultMenu_CallbackFunc_o *)sub_1C3B9B0(FriendSearchResultMenu_CallbackFunc_TypeInfo);
    FriendSearchResultMenu_CallbackFunc___ctor(v16, (Il2CppObject *)v2, Method_FriendRootComponent_OnSelectOffer__, v17);
    if ( !v14
      || (FriendSearchResultMenu__Open(v14, selectFriendEntity, currentCursor, v16, v18),
          friendSearchMenu = v2->fields.friendSearchMenu,
          v20 = (FriendSearchMenu_CallbackFunc_o *)sub_1C3B9B0(FriendSearchMenu_CallbackFunc_TypeInfo),
          FriendSearchMenu_CallbackFunc___ctor(
            v20,
            (Il2CppObject *)v2,
            Method_FriendRootComponent_OnSelectSearchFriend__,
            v21),
          !friendSearchMenu)
      || (FriendSearchMenu__Open(friendSearchMenu, v20, 0, v22),
          (this = (FriendRootComponent_o *)v2->fields.myFSM) == 0LL) )
    {
LABEL_14:
      sub_1C3B9C0(this, method);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_5575/*"EVENT_RAID_NEXT_TIME_2"*/, 0LL);
    EventTutorialMaster__CheckTutorial(-1, 50, 0LL, 0, 0, 0, 0, 0LL);
  }
}


void __fastcall FriendRootComponent__StartSearchInput(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  FriendRootComponent_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  FriendSearchResultMenu_o *friendSearchResultMenu; // x20
  OtherUserGameEntity_o *selectFriendEntity; // x21
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  int32_t currentCursor; // w22
  FriendSearchResultMenu_CallbackFunc_o *v11; // x23
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x4
  FriendSearchMenu_o *friendSearchMenu; // x20
  FriendSearchMenu_CallbackFunc_o *v15; // x21
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x3

  v3 = this;
  if ( (byte_4C1D00E & 1) == 0 )
  {
    sub_1C3B764(&FriendSearchResultMenu_CallbackFunc_TypeInfo, method);
    sub_1C3B764(&FriendSearchMenu_CallbackFunc_TypeInfo, v4);
    sub_1C3B764(&Method_FriendRootComponent_OnSelectOffer__, v5);
    this = (FriendRootComponent_o *)sub_1C3B764(&Method_FriendRootComponent_OnSelectSearchFriend__, v6);
    byte_4C1D00E = 1;
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
      v11 = (FriendSearchResultMenu_CallbackFunc_o *)sub_1C3B9B0(FriendSearchResultMenu_CallbackFunc_TypeInfo);
      FriendSearchResultMenu_CallbackFunc___ctor(
        v11,
        (Il2CppObject *)v3,
        Method_FriendRootComponent_OnSelectOffer__,
        v12);
      FriendSearchResultMenu__Open(friendSearchResultMenu, selectFriendEntity, currentCursor, v11, v13);
    }
    else
    {
      FriendSearchResultMenu__Close_31965024(v3->fields.friendSearchResultMenu, 0LL, v2);
    }
  }
  friendSearchMenu = v3->fields.friendSearchMenu;
  v15 = (FriendSearchMenu_CallbackFunc_o *)sub_1C3B9B0(FriendSearchMenu_CallbackFunc_TypeInfo);
  FriendSearchMenu_CallbackFunc___ctor(v15, (Il2CppObject *)v3, Method_FriendRootComponent_OnSelectSearchFriend__, v16);
  if ( !friendSearchMenu )
LABEL_11:
    sub_1C3B9C0(this, method);
  FriendSearchMenu__Open(friendSearchMenu, v15, 0, v17);
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
  if ( (byte_4C1D05A & 1) == 0 )
  {
    sub_1C3B764(&System_Action_string__TypeInfo, result);
    sub_1C3B764(&Method_FriendRootComponent__OnClickBack_b__100_1__, v5);
    this = (FriendRootComponent_o *)sub_1C3B764(&StringLiteral_22683/*"sandboxSeurity"*/, v6);
    byte_4C1D05A = 1;
  }
  if ( !result )
    sub_1C3B9C0(this, result);
  if ( System_String__Equals_63376928(result, (System_String_o *)StringLiteral_22683/*"sandboxSeurity"*/, 0LL) )
  {
    v7 = (System_Action_object__o *)sub_1C3B9B0(System_Action_string__TypeInfo);
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
  if ( (byte_4C1D05B & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_22683/*"sandboxSeurity"*/, res);
    this = (FriendRootComponent_o *)sub_1C3B764(&StringLiteral_3566/*"COMBINE_HELP_COMBINE_LV_EXCEED"*/, v5);
    byte_4C1D05B = 1;
  }
  if ( !res )
    goto LABEL_9;
  if ( System_String__Equals_63376928(res, (System_String_o *)StringLiteral_22683/*"sandboxSeurity"*/, 0LL) )
  {
    this = (FriendRootComponent_o *)v4->fields.friendSearchMenu;
    if ( this )
    {
      FriendSearchMenu__BlockInput((FriendSearchMenu_o *)this, (const MethodInfo *)res);
      this = (FriendRootComponent_o *)v4->fields.myFSM;
      if ( this )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3566/*"COMBINE_HELP_COMBINE_LV_EXCEED"*/, 0LL);
        return;
      }
    }
LABEL_9:
    sub_1C3B9C0(this, res);
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
  if ( (byte_4C1D05E & 1) == 0 )
  {
    sub_1C3B764(&Method_FriendRootComponent__OnClickModeUserDetail_b__102_0__, res);
    this = (FriendRootComponent_o *)sub_1C3B764(&StringLiteral_22683/*"sandboxSeurity"*/, v5);
    byte_4C1D05E = 1;
  }
  if ( !res )
    sub_1C3B9C0(this, res);
  if ( System_String__Equals_63376928(res, (System_String_o *)StringLiteral_22683/*"sandboxSeurity"*/, 0LL) )
  {
    v6 = Method_FriendRootComponent__OnClickModeUserDetail_b__102_0__;
    if ( (*((_BYTE *)Method_FriendRootComponent__OnClickModeUserDetail_b__102_0__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1C3B77C(Method_FriendRootComponent__OnClickModeUserDetail_b__102_0__);
    v7 = (System_Reflection_MethodBase_o *)sub_1C3B748(v6, v6[4]);
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
  struct FriendSearchResultMenu_o *friendSearchResultMenu; // x8
  struct FriendSearchResultMenu_o *v9; // x8
  struct ClassButtonControlComponent_o *v10; // x8
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  FriendRootComponent_o *v13; // x0
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x1
  struct ClassButtonControlComponent_o *classButtonControl; // x8

  v4 = this;
  if ( (byte_4C1D05F & 1) == 0 )
  {
    sub_1C3B764(&Method_FriendRootComponent__OnClickTabFriend_b__109_0__, res);
    sub_1C3B764(&StringLiteral_22683/*"sandboxSeurity"*/, v5);
    this = (FriendRootComponent_o *)sub_1C3B764(&StringLiteral_3613/*"COMMAND_CODE_DETACHING_ITEM_ID"*/, v6);
    byte_4C1D05F = 1;
  }
  if ( !res )
    goto LABEL_24;
  this = (FriendRootComponent_o *)System_String__Equals_63376928(res, (System_String_o *)StringLiteral_22683/*"sandboxSeurity"*/, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    return;
  state = v4->fields.state;
  if ( state <= 9 )
  {
    if ( state != 4 && state != 9 )
      return;
LABEL_18:
    v11 = Method_FriendRootComponent__OnClickTabFriend_b__109_0__;
    if ( (*((_BYTE *)Method_FriendRootComponent__OnClickTabFriend_b__109_0__ + 83) & 2) != 0 )
      v11 = (_QWORD *)sub_1C3B77C(Method_FriendRootComponent__OnClickTabFriend_b__109_0__);
    v12 = (System_Reflection_MethodBase_o *)sub_1C3B748(v11, v11[4]);
    OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0, 0LL);
    FriendRootComponent__set_tabKind(v13, 0, v14);
    FriendRootComponent__RefreshTab(v4, v15);
    classButtonControl = v4->fields.classButtonControl;
    if ( classButtonControl )
    {
      classButtonControl->fields.updateEnable = 0;
      this = (FriendRootComponent_o *)v4->fields.myFSM;
      if ( this )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3613/*"COMMAND_CODE_DETACHING_ITEM_ID"*/, 0LL);
        return;
      }
    }
LABEL_24:
    sub_1C3B9C0(this, res);
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
      v9 = v4->fields.friendSearchResultMenu;
      if ( !v9 )
        goto LABEL_24;
      v10 = v9->fields.classButtonControl;
      if ( !v10 )
        goto LABEL_24;
      this = (FriendRootComponent_o *)v4->fields.classButtonControl;
      if ( !this )
        goto LABEL_24;
      ClassButtonControlComponent__setCursor((ClassButtonControlComponent_o *)this, v10->fields.currentCursor, 0LL);
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
  __int64 v6; // x1
  System_Action_object__o *v7; // x20
  const MethodInfo *v8; // x2

  v4 = (Il2CppObject *)this;
  if ( (byte_4C1D060 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_string__TypeInfo, result);
    sub_1C3B764(&Method_FriendRootComponent__OnClickTabOffered_b__110_1__, v5);
    this = (FriendRootComponent_o *)sub_1C3B764(&StringLiteral_22683/*"sandboxSeurity"*/, v6);
    byte_4C1D060 = 1;
  }
  if ( !result )
    sub_1C3B9C0(this, result);
  if ( System_String__Equals_63376928(result, (System_String_o *)StringLiteral_22683/*"sandboxSeurity"*/, 0LL) )
  {
    v7 = (System_Action_object__o *)sub_1C3B9B0(System_Action_string__TypeInfo);
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
  struct FriendSearchResultMenu_o *friendSearchResultMenu; // x8
  struct FriendSearchResultMenu_o *v9; // x8
  struct ClassButtonControlComponent_o *v10; // x8
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  FriendRootComponent_o *v13; // x0
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x1
  struct ClassButtonControlComponent_o *classButtonControl; // x8

  v4 = this;
  if ( (byte_4C1D061 & 1) == 0 )
  {
    sub_1C3B764(&Method_FriendRootComponent__OnClickTabOffered_b__110_1__, res);
    sub_1C3B764(&StringLiteral_22683/*"sandboxSeurity"*/, v5);
    this = (FriendRootComponent_o *)sub_1C3B764(&StringLiteral_3613/*"COMMAND_CODE_DETACHING_ITEM_ID"*/, v6);
    byte_4C1D061 = 1;
  }
  if ( !res )
    goto LABEL_24;
  this = (FriendRootComponent_o *)System_String__Equals_63376928(res, (System_String_o *)StringLiteral_22683/*"sandboxSeurity"*/, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    return;
  state = v4->fields.state;
  if ( state <= 9 )
  {
    if ( state != 4 && state != 9 )
      return;
LABEL_18:
    v11 = Method_FriendRootComponent__OnClickTabOffered_b__110_1__;
    if ( (*((_BYTE *)Method_FriendRootComponent__OnClickTabOffered_b__110_1__ + 83) & 2) != 0 )
      v11 = (_QWORD *)sub_1C3B77C(Method_FriendRootComponent__OnClickTabOffered_b__110_1__);
    v12 = (System_Reflection_MethodBase_o *)sub_1C3B748(v11, v11[4]);
    OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0, 0LL);
    FriendRootComponent__set_tabKind(v13, 1, v14);
    FriendRootComponent__RefreshTab(v4, v15);
    classButtonControl = v4->fields.classButtonControl;
    if ( classButtonControl )
    {
      classButtonControl->fields.updateEnable = 0;
      this = (FriendRootComponent_o *)v4->fields.myFSM;
      if ( this )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3613/*"COMMAND_CODE_DETACHING_ITEM_ID"*/, 0LL);
        return;
      }
    }
LABEL_24:
    sub_1C3B9C0(this, res);
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
      v9 = v4->fields.friendSearchResultMenu;
      if ( !v9 )
        goto LABEL_24;
      v10 = v9->fields.classButtonControl;
      if ( !v10 )
        goto LABEL_24;
      this = (FriendRootComponent_o *)v4->fields.classButtonControl;
      if ( !this )
        goto LABEL_24;
      ClassButtonControlComponent__setCursor((ClassButtonControlComponent_o *)this, v10->fields.currentCursor, 0LL);
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
  __int64 v6; // x1
  System_Action_object__o *v7; // x20
  const MethodInfo *v8; // x2

  v4 = (Il2CppObject *)this;
  if ( (byte_4C1D062 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_string__TypeInfo, result);
    sub_1C3B764(&Method_FriendRootComponent__OnClickTabSearch_b__111_1__, v5);
    this = (FriendRootComponent_o *)sub_1C3B764(&StringLiteral_22683/*"sandboxSeurity"*/, v6);
    byte_4C1D062 = 1;
  }
  if ( !result )
    sub_1C3B9C0(this, result);
  if ( System_String__Equals_63376928(result, (System_String_o *)StringLiteral_22683/*"sandboxSeurity"*/, 0LL) )
  {
    v7 = (System_Action_object__o *)sub_1C3B9B0(System_Action_string__TypeInfo);
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
  if ( (byte_4C1D063 & 1) == 0 )
  {
    sub_1C3B764(&Method_FriendRootComponent__OnClickTabSearch_b__111_1__, res);
    sub_1C3B764(&StringLiteral_22683/*"sandboxSeurity"*/, v5);
    this = (FriendRootComponent_o *)sub_1C3B764(&StringLiteral_3613/*"COMMAND_CODE_DETACHING_ITEM_ID"*/, v6);
    byte_4C1D063 = 1;
  }
  if ( !res )
    goto LABEL_17;
  if ( !System_String__Equals_63376928(res, (System_String_o *)StringLiteral_22683/*"sandboxSeurity"*/, 0LL) )
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
      v8 = (_QWORD *)sub_1C3B77C(Method_FriendRootComponent__OnClickTabSearch_b__111_1__);
    v9 = (System_Reflection_MethodBase_o *)sub_1C3B748(v8, v8[4]);
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
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3613/*"COMMAND_CODE_DETACHING_ITEM_ID"*/, 0LL);
        return;
      }
    }
LABEL_17:
    sub_1C3B9C0(this, res);
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
  if ( (byte_4C1D064 & 1) == 0 )
  {
    sub_1C3B764(&Method_FriendRootComponent_EndRequestFollowRemove__, res);
    sub_1C3B764(&Method_NetworkManager_getRequest_FollowdRemoveRequest___, v5);
    sub_1C3B764(&NetworkManager_TypeInfo, v6);
    sub_1C3B764(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1C3B764(&StringLiteral_22683/*"sandboxSeurity"*/, v9);
    this = (FriendRootComponent_o *)sub_1C3B764(&StringLiteral_11287/*"SERVANT_CHARA_GRAPH_EX_OPEN_MANAGER_"*/, v10);
    byte_4C1D064 = 1;
  }
  if ( !res )
    goto LABEL_15;
  if ( System_String__Equals_63376928(res, (System_String_o *)StringLiteral_22683/*"sandboxSeurity"*/, 0LL) )
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
        this = (FriendRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( this )
        {
          CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)this, 0, 0LL);
          v14 = (NetworkManager_ResultCallbackFunc_o *)sub_1C3B9B0(NetworkManager_ResultCallbackFunc_TypeInfo);
          NetworkManager_ResultCallbackFunc___ctor(
            v14,
            (Il2CppObject *)v4,
            Method_FriendRootComponent_EndRequestFollowRemove__,
            0LL);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          this = (FriendRootComponent_o *)NetworkManager__getRequest_object_(
                                            v14,
                                            (const MethodInfo_3075AE8 *)Method_NetworkManager_getRequest_FollowdRemoveRequest___);
          if ( this )
          {
            FollowdRemoveRequest__beginRequest((FollowdRemoveRequest_o *)this, otherUserGameEntity->fields.userId, 0LL);
            return;
          }
        }
LABEL_15:
        sub_1C3B9C0(this, res);
      }
    }
  }
  this = (FriendRootComponent_o *)v4->fields.myFSM;
  if ( !this )
    goto LABEL_15;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11287/*"SERVANT_CHARA_GRAPH_EX_OPEN_MANAGER_"*/, 0LL);
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
  if ( (byte_4C1D058 & 1) == 0 )
  {
    sub_1C3B764(&Method_FriendRootComponent_EndRequestFriend__, res);
    sub_1C3B764(&Method_NetworkManager_getRequest_FriendOfferRequest___, v5);
    sub_1C3B764(&NetworkManager_TypeInfo, v6);
    sub_1C3B764(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    sub_1C3B764(&StringLiteral_22683/*"sandboxSeurity"*/, v8);
    this = (FriendRootComponent_o *)sub_1C3B764(&StringLiteral_11287/*"SERVANT_CHARA_GRAPH_EX_OPEN_MANAGER_"*/, v9);
    byte_4C1D058 = 1;
  }
  if ( !res )
    goto LABEL_14;
  if ( System_String__Equals_63376928(res, (System_String_o *)StringLiteral_22683/*"sandboxSeurity"*/, 0LL) )
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
        v13 = (NetworkManager_ResultCallbackFunc_o *)sub_1C3B9B0(NetworkManager_ResultCallbackFunc_TypeInfo);
        NetworkManager_ResultCallbackFunc___ctor(
          v13,
          (Il2CppObject *)v4,
          Method_FriendRootComponent_EndRequestFriend__,
          0LL);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        this = (FriendRootComponent_o *)NetworkManager__getRequest_object_(
                                          v13,
                                          (const MethodInfo_3075AE8 *)Method_NetworkManager_getRequest_FriendOfferRequest___);
        if ( this )
        {
          FriendOfferRequest__beginRequest((FriendOfferRequest_o *)this, otherUserGameEntity->fields.userId, 0LL);
          return;
        }
LABEL_14:
        sub_1C3B9C0(this, res);
      }
    }
  }
  this = (FriendRootComponent_o *)v4->fields.myFSM;
  if ( !this )
    goto LABEL_14;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11287/*"SERVANT_CHARA_GRAPH_EX_OPEN_MANAGER_"*/, 0LL);
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
  if ( (byte_4C1D059 & 1) == 0 )
  {
    sub_1C3B764(&Method_FriendRootComponent_EndRequestFriend__, res);
    sub_1C3B764(&Method_NetworkManager_getRequest_FriendRemoveRequest___, v5);
    sub_1C3B764(&NetworkManager_TypeInfo, v6);
    sub_1C3B764(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1C3B764(&StringLiteral_22683/*"sandboxSeurity"*/, v9);
    this = (FriendRootComponent_o *)sub_1C3B764(&StringLiteral_11287/*"SERVANT_CHARA_GRAPH_EX_OPEN_MANAGER_"*/, v10);
    byte_4C1D059 = 1;
  }
  if ( !res )
    goto LABEL_15;
  if ( System_String__Equals_63376928(res, (System_String_o *)StringLiteral_22683/*"sandboxSeurity"*/, 0LL) )
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
        this = (FriendRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( this )
        {
          CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)this, 0, 0LL);
          v14 = (NetworkManager_ResultCallbackFunc_o *)sub_1C3B9B0(NetworkManager_ResultCallbackFunc_TypeInfo);
          NetworkManager_ResultCallbackFunc___ctor(
            v14,
            (Il2CppObject *)v4,
            Method_FriendRootComponent_EndRequestFriend__,
            0LL);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          this = (FriendRootComponent_o *)NetworkManager__getRequest_object_(
                                            v14,
                                            (const MethodInfo_3075AE8 *)Method_NetworkManager_getRequest_FriendRemoveRequest___);
          if ( this )
          {
            FriendRemoveRequest__beginRequest((FriendRemoveRequest_o *)this, otherUserGameEntity->fields.userId, 0LL);
            return;
          }
        }
LABEL_15:
        sub_1C3B9C0(this, res);
      }
    }
  }
  this = (FriendRootComponent_o *)v4->fields.myFSM;
  if ( !this )
    goto LABEL_15;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11287/*"SERVANT_CHARA_GRAPH_EX_OPEN_MANAGER_"*/, 0LL);
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
  if ( (byte_4C1D05C & 1) == 0 )
  {
    sub_1C3B764(&System_Action_string__TypeInfo, result);
    sub_1C3B764(&Method_FriendRootComponent__afterMainMenubarSelect_b__101_1__, v5);
    sub_1C3B764(&StringLiteral_22683/*"sandboxSeurity"*/, v6);
    this = (FriendRootComponent_o *)sub_1C3B764(&StringLiteral_11287/*"SERVANT_CHARA_GRAPH_EX_OPEN_MANAGER_"*/, v7);
    byte_4C1D05C = 1;
  }
  if ( !result )
    goto LABEL_8;
  if ( System_String__Equals_63376928(result, (System_String_o *)StringLiteral_22683/*"sandboxSeurity"*/, 0LL) )
  {
    v8 = (System_Action_object__o *)sub_1C3B9B0(System_Action_string__TypeInfo);
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
    sub_1C3B9C0(this, result);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11287/*"SERVANT_CHARA_GRAPH_EX_OPEN_MANAGER_"*/, 0LL);
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
  if ( (byte_4C1D05D & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_11289/*"SERVANT_CHECK_COMBINE_DIALOG_TITLE"*/, res);
    sub_1C3B764(&StringLiteral_22683/*"sandboxSeurity"*/, v5);
    this = (FriendRootComponent_o *)sub_1C3B764(&StringLiteral_11287/*"SERVANT_CHARA_GRAPH_EX_OPEN_MANAGER_"*/, v6);
    byte_4C1D05D = 1;
  }
  if ( !res
    || (this = (FriendRootComponent_o *)System_String__Equals_63376928(res, (System_String_o *)StringLiteral_22683/*"sandboxSeurity"*/, 0LL),
        (myFSM = v4->fields.myFSM) == 0LL) )
  {
    sub_1C3B9C0(this, res);
  }
  v8 = &StringLiteral_11289/*"SERVANT_CHECK_COMBINE_DIALOG_TITLE"*/;
  if ( ((unsigned __int8)this & 1) == 0 )
    v8 = &StringLiteral_11287/*"SERVANT_CHARA_GRAPH_EX_OPEN_MANAGER_"*/;
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)*v8, 0LL);
}


void __fastcall FriendRootComponent__afterMainMenubarSelect(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  FriendRootComponent_messageRequestCallback_o *v4; // x20
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x2

  if ( (byte_4C1D02E & 1) == 0 )
  {
    sub_1C3B764(&Method_FriendRootComponent__afterMainMenubarSelect_b__101_0__, method);
    sub_1C3B764(&FriendRootComponent_messageRequestCallback_TypeInfo, v3);
    byte_4C1D02E = 1;
  }
  v4 = (FriendRootComponent_messageRequestCallback_o *)sub_1C3B9B0(FriendRootComponent_messageRequestCallback_TypeInfo);
  FriendRootComponent_messageRequestCallback___ctor(
    v4,
    (Il2CppObject *)this,
    Method_FriendRootComponent__afterMainMenubarSelect_b__101_0__,
    v5);
  FriendRootComponent__messageDispChangeRequest(this, v4, v6);
}


void __fastcall FriendRootComponent__beginFinish(FriendRootComponent_o *this, const MethodInfo *method)
{
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0

  if ( (byte_4C1CFFE & 1) == 0 )
  {
    sub_1C3B764(&RandomLimitCountManager_TypeInfo, method);
    byte_4C1CFFE = 1;
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
    sub_1C3B9C0(operationItemListViewManager, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)operationItemListViewManager, 0, 0LL);
  this->fields.state = 0;
  this->fields.selectFriendEntity = 0LL;
  sub_1C3B708(&this->fields.selectFriendEntity);
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

  if ( (byte_4C1CFF8 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&AtlasManager_TypeInfo, v3);
    sub_1C3B764(&ClassButtonControlComponent_CallbackFunc_TypeInfo, v4);
    sub_1C3B764(&Method_FriendRootComponent_EndLoadOutGameAtlas__, v5);
    sub_1C3B764(&Method_FriendRootComponent_changeClass__, v6);
    byte_4C1CFF8 = 1;
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
        v12 = (ClassButtonControlComponent_CallbackFunc_o *)sub_1C3B9B0(ClassButtonControlComponent_CallbackFunc_TypeInfo),
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
    sub_1C3B9C0(bgTxtSprite, v8);
  }
  FriendOperationItemListViewManager__SetupClassBoardInfo((FriendOperationItemListViewManager_o *)bgTxtSprite, v8);
  v13 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
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

  if ( (byte_4C1CFFF & 1) == 0 )
  {
    sub_1C3B764(&AvalonSceneManager_TypeInfo, data);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1C3B764(&SupportInfoJump_TypeInfo, v6);
    byte_4C1CFFF = 1;
  }
  if ( data
    && (methodPtr_low = LOBYTE(SupportInfoJump_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(data->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low)
    && (SupportInfoJump_c *)data->klass->_2.typeHierarchy[methodPtr_low - 1] == SupportInfoJump_TypeInfo )
  {
    this->fields.isReturnSupport = 1;
    Instance = (FriendOperationItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v10 = (CommonUI_o *)Instance;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    if ( !v10
      || (CommonUI__maskFadein(v10, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL),
          FriendRootComponent__RefreshTab(this, v11),
          (Instance = this->fields.operationItemListViewManager) == 0LL) )
    {
      sub_1C3B9C0(Instance, v9);
    }
    FriendOperationItemListViewManager__SetMode_31937280(Instance, 2, v12);
    SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 7, 39, 0LL);
    MainMenuBar__setMenuActive(1, 0LL, 0LL);
    SceneRootComponent__sendMessageStartUp((SceneRootComponent_o *)this, 0LL);
  }
  else
  {
    SceneRootComponent__beginResume_40100528((SceneRootComponent_o *)this, 0LL);
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

  if ( (byte_4C1CFFA & 1) == 0 )
  {
    sub_1C3B764(&BgmManager_TypeInfo, method);
    sub_1C3B764(&Method_FriendRootComponent_EndFriendRequest__, v3);
    sub_1C3B764(&Method_NetworkManager_getRequest_FriendTopRequest___, v4);
    sub_1C3B764(&NetworkManager_TypeInfo, v5);
    sub_1C3B764(&RandomLimitCountManager_TypeInfo, v6);
    sub_1C3B764(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    sub_1C3B764(&SoundManager_TypeInfo, v8);
    byte_4C1CFFA = 1;
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
  TitleInfoControl__setBackBtnSprite_38560752(titleInfo, 1, 0, 0, 0LL);
  this->fields.state = 0;
  this->fields.currentModeKind = 0;
  this->fields.selectFriendEntity = 0LL;
  sub_1C3B708(&this->fields.selectFriendEntity);
  v12 = (NetworkManager_ResultCallbackFunc_o *)sub_1C3B9B0(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v12,
    (Il2CppObject *)this,
    Method_FriendRootComponent_EndFriendRequest__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  titleInfo = (TitleInfoControl_o *)NetworkManager__getRequest_object_(
                                      v12,
                                      (const MethodInfo_3075AE8 *)Method_NetworkManager_getRequest_FriendTopRequest___);
  if ( !titleInfo )
LABEL_15:
    sub_1C3B9C0(titleInfo, v10);
  RequestBase__beginRequest((RequestBase_o *)titleInfo, 0LL);
}


void __fastcall FriendRootComponent__beginStartUp_31955456(
        FriendRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  struct SceneJumpInfo_o **p_jumpInfo; // x20
  __int64 methodPtr_low; // x9

  if ( (byte_4C1CFFB & 1) == 0 )
  {
    sub_1C3B764(&SceneJumpInfo_TypeInfo, data);
    byte_4C1CFFB = 1;
  }
  p_jumpInfo = &this->fields.jumpInfo;
  this->fields.jumpInfo = 0LL;
  sub_1C3B708(&this->fields.jumpInfo);
  if ( data )
  {
    methodPtr_low = LOBYTE(SceneJumpInfo_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(data->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
      && (SceneJumpInfo_c *)data->klass->_2.typeHierarchy[methodPtr_low - 1] == SceneJumpInfo_TypeInfo )
    {
      *p_jumpInfo = (struct SceneJumpInfo_o *)data;
      sub_1C3B708(&this->fields.jumpInfo);
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

  if ( (byte_4C1D038 & 1) == 0 )
  {
    sub_1C3B764(&Method_FriendRootComponent_changeClass__, *(_QWORD *)&classPos);
    byte_4C1D038 = 1;
  }
  v5 = Method_FriendRootComponent_changeClass__;
  if ( (*((_BYTE *)Method_FriendRootComponent_changeClass__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C3B77C(Method_FriendRootComponent_changeClass__);
  v6 = (System_Reflection_MethodBase_o *)sub_1C3B748(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    sub_1C3B9C0(0LL, v7);
  FriendOperationItemListViewManager__SetClassId(operationItemListViewManager, classPos, v8);
}


int32_t __fastcall FriendRootComponent__get_tabKind(FriendRootComponent_o *this, const MethodInfo *method)
{
  int32_t result; // w0
  FriendRootComponent_c *v4; // x0

  if ( (byte_4C1CFF7 & 1) == 0 )
  {
    sub_1C3B764(&FriendRootComponent_TypeInfo, method);
    byte_4C1CFF7 = 1;
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
  Il2CppObject *v14; // x20
  ListViewManager_o *operationItemListViewManager; // x0
  int64_t v16; // x1
  void **p_monitor; // x22
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

  if ( (byte_4C1D036 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_long__Add__, callback);
    sub_1C3B764(&Method_System_Collections_Generic_List_long__ToArray__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_long___ctor__, v6);
    sub_1C3B764(&System_Collections_Generic_List_long__TypeInfo, v7);
    sub_1C3B764(&Method_NetworkManager_getRequest_FriendMessageHideSyncRequest___, v8);
    sub_1C3B764(&NetworkManager_TypeInfo, v9);
    sub_1C3B764(&NetworkManager_ResultCallbackFunc_TypeInfo, v10);
    sub_1C3B764(&Method_FriendRootComponent___c__DisplayClass112_0__messageDispChangeRequest_b__0__, v11);
    sub_1C3B764(&FriendRootComponent___c__DisplayClass112_0_TypeInfo, v12);
    sub_1C3B764(&StringLiteral_22683/*"sandboxSeurity"*/, v13);
    byte_4C1D036 = 1;
  }
  v14 = (Il2CppObject *)sub_1C3B9B0(FriendRootComponent___c__DisplayClass112_0_TypeInfo);
  System_Object___ctor(v14, 0LL);
  if ( !v14 )
    goto LABEL_35;
  v14[1].klass = (Il2CppClass *)this;
  sub_1C3B708(&v14[1]);
  v14[1].monitor = callback;
  p_monitor = &v14[1].monitor;
  sub_1C3B708(&v14[1].monitor);
  operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    goto LABEL_35;
  if ( LOBYTE(operationItemListViewManager[1].fields.emptyMessageLabel) )
  {
    ItemSum = ListViewManager__get_ItemSum(operationItemListViewManager, 0LL);
    v19 = (System_Collections_Generic_List_long__o *)sub_1C3B9B0(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v19,
      (const MethodInfo_367344C *)Method_System_Collections_Generic_List_long___ctor__);
    v20 = (System_Collections_Generic_List_long__o *)sub_1C3B9B0(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v20,
      (const MethodInfo_367344C *)Method_System_Collections_Generic_List_long___ctor__);
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
                *(const MethodInfo_3673CA0 **)(*(_QWORD *)(v31 + 192) + 112LL));
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
    v33 = (NetworkManager_ResultCallbackFunc_o *)sub_1C3B9B0(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v33,
      v14,
      Method_FriendRootComponent___c__DisplayClass112_0__messageDispChangeRequest_b__0__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    operationItemListViewManager = (ListViewManager_o *)NetworkManager__getRequest_object_(
                                                          v33,
                                                          (const MethodInfo_3075AE8 *)Method_NetworkManager_getRequest_FriendMessageHideSyncRequest___);
    if ( v20 )
    {
      v34 = (FriendMessageHideSyncRequest_o *)operationItemListViewManager;
      operationItemListViewManager = (ListViewManager_o *)System_Collections_Generic_List_long___ToArray(
                                                            v20,
                                                            (const MethodInfo_3675758 *)Method_System_Collections_Generic_List_long__ToArray__);
      if ( v19 )
      {
        v35 = (System_Int64_array *)operationItemListViewManager;
        operationItemListViewManager = (ListViewManager_o *)System_Collections_Generic_List_long___ToArray(
                                                              v19,
                                                              (const MethodInfo_3675758 *)Method_System_Collections_Generic_List_long__ToArray__);
        if ( v34 )
        {
          FriendMessageHideSyncRequest__beginRequest(v34, v35, (System_Int64_array *)operationItemListViewManager, 0LL);
          return;
        }
      }
    }
LABEL_35:
    sub_1C3B9C0(operationItemListViewManager, v16);
  }
  if ( *p_monitor )
    (*((void (__fastcall **)(_QWORD, __int64, _QWORD))*p_monitor + 3))(
      *((_QWORD *)*p_monitor + 8),
      StringLiteral_22683/*"sandboxSeurity"*/,
      *((_QWORD *)*p_monitor + 5));
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendRootComponent__set_tabKind(FriendRootComponent_o *this, int32_t value, const MethodInfo *method)
{
  FriendRootComponent_c *v4; // x0

  if ( (byte_4C1CFF6 & 1) == 0 )
  {
    sub_1C3B764(&FriendRootComponent_TypeInfo, *(_QWORD *)&value);
    byte_4C1CFF6 = 1;
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
    sub_1C3B9C0(this, result);
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
  const MethodInfo *v8; // x2
  int32_t v9; // w21
  struct FriendRootComponent_o *_4__this; // x8

  if ( (byte_4C1D065 & 1) == 0 )
  {
    sub_1C3B764(&Method_ActionExtensions_Call_string___, result);
    sub_1C3B764(&StringLiteral_22683/*"sandboxSeurity"*/, v5);
    byte_4C1D065 = 1;
  }
  operationItemListViewManager = (FriendOperationItemListViewManager_o *)System_String__op_Equality(
                                                                           result,
                                                                           (System_String_o *)StringLiteral_22683/*"sandboxSeurity"*/,
                                                                           0LL);
  if ( ((unsigned __int8)operationItemListViewManager & 1) != 0 && this->fields.sum >= 1 )
  {
    v9 = 0;
    do
    {
      _4__this = this->fields.__4__this;
      if ( !_4__this || (operationItemListViewManager = _4__this->fields.operationItemListViewManager) == 0LL )
        sub_1C3B9C0(operationItemListViewManager, v7);
      operationItemListViewManager = (FriendOperationItemListViewManager_o *)FriendOperationItemListViewManager__GetItem(
                                                                               operationItemListViewManager,
                                                                               v9,
                                                                               v8);
      if ( operationItemListViewManager )
        FriendOperationItemListViewItem__RefreshLockInfo(
          (FriendOperationItemListViewItem_o *)operationItemListViewManager,
          0LL);
      ++v9;
    }
    while ( v9 < this->fields.sum );
  }
  ActionExtensions__Call_object_(
    (System_Action_T__o *)this->fields.onFinishedRequest,
    (Il2CppObject *)result,
    (const MethodInfo_2F42300 *)Method_ActionExtensions_Call_string___);
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
  sub_1C3B708(&this->fields.method);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1C3B824(v6) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = (Il2CppObject *)sub_1A74DF4;
LABEL_8:
      this->fields.m_target = v9;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v8 )
    {
      v9 = (Il2CppObject *)sub_1A74DD4;
      goto LABEL_8;
    }
    if ( !object )
    {
      v11 = sub_1C3B9DC(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C3B88C(v11, 0LL);
    }
  }
  v10 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v10;
LABEL_9:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A74D8C;
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
  return (System_IAsyncResult_o *)sub_1C3B718(this, &v6, callback, object);
}


void __fastcall FriendRootComponent_messageRequestCallback__EndInvoke(
        FriendRootComponent_messageRequestCallback_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C3B71C(result, 0LL, method);
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