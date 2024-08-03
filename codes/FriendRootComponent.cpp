void __fastcall FriendRootComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_49F78DD & 1) == 0 )
  {
    sub_1B640C8(&FriendRootComponent_TypeInfo, v1);
    byte_49F78DD = 1;
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

  if ( (byte_49F78CE & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_49F78CE = 1;
  }
  state = this->fields.state;
  switch ( state )
  {
    case ',':
      this->fields.state = 23;
      Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        CommonUI__CloseNotificationDialog(Instance, 0LL);
        goto LABEL_12;
      }
LABEL_14:
      sub_1B64324(Instance);
    case '+':
      Instance = (CommonUI_o *)this->fields.friendWarningDialog;
      this->fields.state = 23;
      if ( Instance )
      {
        FriendWarningDialog__Close_30705444((FriendWarningDialog_o *)Instance, 0LL, v2);
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
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  const MethodInfo *v5; // x2
  FriendSearchMenu_o *friendSearchMenu; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  FriendSearchMenu_CallbackFunc_o *v9; // x21
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x1

  if ( (byte_49F78D3 & 1) == 0 )
  {
    sub_1B640C8(&FriendSearchMenu_CallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_FriendRootComponent_OnSelectSearchFriend__, v3);
    byte_49F78D3 = 1;
  }
  if ( this->fields.state == 42 )
  {
    this->fields.state = 23;
    this->fields.selectFriendCode = 0LL;
    sub_1B6406C(&this->fields.selectFriendCode);
    this->fields.selectFriendEntity = 0LL;
    sub_1B6406C(&this->fields.selectFriendEntity);
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close(operationConfirmMenu, 0LL),
          (operationConfirmMenu = (FriendOperationConfirmMenu_o *)this->fields.friendSearchResultMenu) == 0LL)
      || (FriendSearchResultMenu__Close_30673220((FriendSearchResultMenu_o *)operationConfirmMenu, 0LL, v5),
          friendSearchMenu = this->fields.friendSearchMenu,
          v9 = (FriendSearchMenu_CallbackFunc_o *)sub_1B64314(FriendSearchMenu_CallbackFunc_TypeInfo, v7, v8),
          FriendSearchMenu_CallbackFunc___ctor(
            v9,
            (Il2CppObject *)this,
            Method_FriendRootComponent_OnSelectSearchFriend__,
            v10),
          !friendSearchMenu) )
    {
      sub_1B64324(operationConfirmMenu);
    }
    FriendSearchMenu__Open(friendSearchMenu, v9, 1, v11);
    FriendRootComponent__RefreshInfo(this, v12);
  }
}


void __fastcall FriendRootComponent__BackFollowRemoveConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  FriendOperationItemListViewManager_CallbackFunc_o *v8; // x21
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x2

  if ( (byte_49F78D5 & 1) == 0 )
  {
    sub_1B640C8(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_FriendRootComponent_OnSelectFriendItem__, v3);
    byte_49F78D5 = 1;
  }
  if ( this->fields.state == 45 )
  {
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close(operationConfirmMenu, 0LL),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v8 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1B64314(
                                                                      FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                                      v6,
                                                                      v7),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v8,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v9),
          !operationItemListViewManager) )
    {
      sub_1B64324(operationConfirmMenu);
    }
    operationItemListViewManager->fields.callbackFunc = v8;
    sub_1B6406C(&operationItemListViewManager->fields.callbackFunc);
    FriendOperationItemListViewManager__SetMode_30645516(operationItemListViewManager, 2, v10);
    this->fields.state = 4;
  }
}


void __fastcall FriendRootComponent__BackFollowRemoveConfirmBeforeRefresh(
        FriendRootComponent_o *this,
        const MethodInfo *method)
{
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  const MethodInfo *v4; // x1

  if ( this->fields.state == 45 )
  {
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close(operationConfirmMenu, 0LL),
          (operationConfirmMenu = (FriendOperationConfirmMenu_o *)this->fields.operationItemListViewManager) == 0LL) )
    {
      sub_1B64324(operationConfirmMenu);
    }
    FriendOperationItemListViewManager__DestroyList((FriendOperationItemListViewManager_o *)operationConfirmMenu, v4);
  }
}


void __fastcall FriendRootComponent__BackFollowRemoveConfirmRefreshShowFriend(
        FriendRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  NetworkManager_ResultCallbackFunc_o *v7; // x20
  Il2CppObject *Request_object; // x0

  if ( (byte_49F78D6 & 1) == 0 )
  {
    sub_1B640C8(&Method_FriendRootComponent_EndFriendRequest2__, method);
    sub_1B640C8(&Method_NetworkManager_getRequest_FriendTopRequest___, v4);
    sub_1B640C8(&NetworkManager_TypeInfo, v5);
    sub_1B640C8(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    byte_49F78D6 = 1;
  }
  v7 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, method, v2);
  NetworkManager_ResultCallbackFunc___ctor(
    v7,
    (Il2CppObject *)this,
    Method_FriendRootComponent_EndFriendRequest2__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v7,
                     (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_FriendTopRequest___);
  if ( !Request_object )
    sub_1B64324(0LL);
  RequestBase__beginRequest((RequestBase_o *)Request_object, 0LL);
}


void __fastcall FriendRootComponent__BackFriendAcceptConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  FriendOperationItemListViewManager_CallbackFunc_o *v8; // x21
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x2

  if ( (byte_49F789B & 1) == 0 )
  {
    sub_1B640C8(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_FriendRootComponent_OnSelectFriendItem__, v3);
    byte_49F789B = 1;
  }
  if ( this->fields.state == 31 )
  {
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close(operationConfirmMenu, 0LL),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v8 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1B64314(
                                                                      FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                                      v6,
                                                                      v7),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v8,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v9),
          !operationItemListViewManager) )
    {
      sub_1B64324(operationConfirmMenu);
    }
    operationItemListViewManager->fields.callbackFunc = v8;
    sub_1B6406C(&operationItemListViewManager->fields.callbackFunc);
    FriendOperationItemListViewManager__SetMode_30645516(operationItemListViewManager, 2, v10);
    this->fields.state = 14;
  }
}


void __fastcall FriendRootComponent__BackFriendAcceptConfirmRefreshShowOffered(
        FriendRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x3
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  FriendOperationItemListViewManager_CallbackFunc_o *v11; // x21
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x2

  if ( (byte_49F789C & 1) == 0 )
  {
    sub_1B640C8(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_FriendRootComponent_OnSelectFriendItem__, v3);
    byte_49F789C = 1;
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
            v5),
          (classButtonControl = this->fields.classButtonControl) == 0LL)
      || (operationConfirmMenu = (FriendOperationConfirmMenu_o *)this->fields.operationItemListViewManager) == 0LL
      || (FriendOperationItemListViewManager__CreateList(
            (FriendOperationItemListViewManager_o *)operationConfirmMenu,
            2,
            classButtonControl->fields.currentCursor,
            v6),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v11 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1B64314(
                                                                       FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                                       v9,
                                                                       v10),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v11,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v12),
          !operationItemListViewManager) )
    {
LABEL_11:
      sub_1B64324(operationConfirmMenu);
    }
    operationItemListViewManager->fields.callbackFunc = v11;
    sub_1B6406C(&operationItemListViewManager->fields.callbackFunc);
    FriendOperationItemListViewManager__SetMode_30645516(operationItemListViewManager, 2, v13);
  }
}


void __fastcall FriendRootComponent__BackFriendCancelConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  FriendOperationItemListViewManager_CallbackFunc_o *v8; // x21
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x2

  if ( (byte_49F78A1 & 1) == 0 )
  {
    sub_1B640C8(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_FriendRootComponent_OnSelectFriendItem__, v3);
    byte_49F78A1 = 1;
  }
  if ( this->fields.state == 37 )
  {
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close(operationConfirmMenu, 0LL),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v8 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1B64314(
                                                                      FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                                      v6,
                                                                      v7),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v8,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v9),
          !operationItemListViewManager) )
    {
      sub_1B64324(operationConfirmMenu);
    }
    operationItemListViewManager->fields.callbackFunc = v8;
    sub_1B6406C(&operationItemListViewManager->fields.callbackFunc);
    FriendOperationItemListViewManager__SetMode_30645516(operationItemListViewManager, 2, v10);
    this->fields.state = 14;
  }
}


void __fastcall FriendRootComponent__BackFriendCancelConfirmRefreshShowOffer(
        FriendRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x3
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  FriendOperationItemListViewManager_CallbackFunc_o *v11; // x21
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x2

  if ( (byte_49F78A2 & 1) == 0 )
  {
    sub_1B640C8(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_FriendRootComponent_OnSelectFriendItem__, v3);
    byte_49F78A2 = 1;
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
            v5),
          (classButtonControl = this->fields.classButtonControl) == 0LL)
      || (operationConfirmMenu = (FriendOperationConfirmMenu_o *)this->fields.operationItemListViewManager) == 0LL
      || (FriendOperationItemListViewManager__CreateList(
            (FriendOperationItemListViewManager_o *)operationConfirmMenu,
            1,
            classButtonControl->fields.currentCursor,
            v6),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v11 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1B64314(
                                                                       FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                                       v9,
                                                                       v10),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v11,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v12),
          !operationItemListViewManager) )
    {
LABEL_11:
      sub_1B64324(operationConfirmMenu);
    }
    operationItemListViewManager->fields.callbackFunc = v11;
    sub_1B6406C(&operationItemListViewManager->fields.callbackFunc);
    FriendOperationItemListViewManager__SetMode_30645516(operationItemListViewManager, 2, v13);
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
      FriendWarningDialog__Close_30705444(friendWarningDialog, 0LL, v2);
      goto LABEL_7;
    }
LABEL_9:
    sub_1B64324(friendWarningDialog);
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
  __int64 v7; // x1
  __int64 v8; // x2
  FriendOperationItemListViewManager_CallbackFunc_o *v9; // x21
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2

  if ( (byte_49F78D8 & 1) == 0 )
  {
    sub_1B640C8(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_FriendRootComponent_OnSelectFriendItem__, v3);
    byte_49F78D8 = 1;
  }
  state = this->fields.state;
  if ( state == 29 || state == 27 )
  {
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close(operationConfirmMenu, 0LL),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v9 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1B64314(
                                                                      FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                                      v7,
                                                                      v8),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v9,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v10),
          !operationItemListViewManager) )
    {
      sub_1B64324(operationConfirmMenu);
    }
    operationItemListViewManager->fields.callbackFunc = v9;
    sub_1B6406C(&operationItemListViewManager->fields.callbackFunc);
    FriendOperationItemListViewManager__SetMode_30645516(operationItemListViewManager, 2, v11);
    this->fields.state = 4;
  }
}


void __fastcall FriendRootComponent__BackFriendOfferConfirmRefreshShowFriend(
        FriendRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x3
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  FriendOperationItemListViewManager_CallbackFunc_o *v11; // x21
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x2

  if ( (byte_49F78D9 & 1) == 0 )
  {
    sub_1B640C8(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_FriendRootComponent_OnSelectFriendItem__, v3);
    byte_49F78D9 = 1;
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
            v5),
          (classButtonControl = this->fields.classButtonControl) == 0LL)
      || (operationConfirmMenu = (FriendOperationConfirmMenu_o *)this->fields.operationItemListViewManager) == 0LL
      || (FriendOperationItemListViewManager__CreateList(
            (FriendOperationItemListViewManager_o *)operationConfirmMenu,
            3,
            classButtonControl->fields.currentCursor,
            v6),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v11 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1B64314(
                                                                       FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                                       v9,
                                                                       v10),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v11,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v12),
          !operationItemListViewManager) )
    {
LABEL_11:
      sub_1B64324(operationConfirmMenu);
    }
    operationItemListViewManager->fields.callbackFunc = v11;
    sub_1B6406C(&operationItemListViewManager->fields.callbackFunc);
    FriendOperationItemListViewManager__SetMode_30645516(operationItemListViewManager, 2, v13);
  }
}


void __fastcall FriendRootComponent__BackFriendOfferConfirmRefreshShowSearch(
        FriendRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  const MethodInfo *v5; // x2
  FriendSearchMenu_o *friendSearchMenu; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  FriendSearchMenu_CallbackFunc_o *v9; // x21
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x3

  if ( (byte_49F7899 & 1) == 0 )
  {
    sub_1B640C8(&FriendSearchMenu_CallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_FriendRootComponent_OnSelectSearchFriend__, v3);
    byte_49F7899 = 1;
  }
  if ( this->fields.state == 27 )
  {
    this->fields.state = 23;
    this->fields.selectFriendCode = 0LL;
    sub_1B6406C(&this->fields.selectFriendCode);
    this->fields.selectFriendEntity = 0LL;
    sub_1B6406C(&this->fields.selectFriendEntity);
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close(operationConfirmMenu, 0LL),
          (operationConfirmMenu = (FriendOperationConfirmMenu_o *)this->fields.friendSearchResultMenu) == 0LL)
      || (FriendSearchResultMenu__Close_30673220((FriendSearchResultMenu_o *)operationConfirmMenu, 0LL, v5),
          friendSearchMenu = this->fields.friendSearchMenu,
          v9 = (FriendSearchMenu_CallbackFunc_o *)sub_1B64314(FriendSearchMenu_CallbackFunc_TypeInfo, v7, v8),
          FriendSearchMenu_CallbackFunc___ctor(
            v9,
            (Il2CppObject *)this,
            Method_FriendRootComponent_OnSelectSearchFriend__,
            v10),
          !friendSearchMenu) )
    {
      sub_1B64324(operationConfirmMenu);
    }
    FriendSearchMenu__Open(friendSearchMenu, v9, 1, v11);
  }
}


void __fastcall FriendRootComponent__BackFriendRejectConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  FriendOperationItemListViewManager_CallbackFunc_o *v8; // x21
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x2

  if ( (byte_49F789E & 1) == 0 )
  {
    sub_1B640C8(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_FriendRootComponent_OnSelectFriendItem__, v3);
    byte_49F789E = 1;
  }
  if ( this->fields.state == 34 )
  {
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close(operationConfirmMenu, 0LL),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v8 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1B64314(
                                                                      FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                                      v6,
                                                                      v7),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v8,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v9),
          !operationItemListViewManager) )
    {
      sub_1B64324(operationConfirmMenu);
    }
    operationItemListViewManager->fields.callbackFunc = v8;
    sub_1B6406C(&operationItemListViewManager->fields.callbackFunc);
    FriendOperationItemListViewManager__SetMode_30645516(operationItemListViewManager, 2, v10);
    this->fields.state = 14;
  }
}


void __fastcall FriendRootComponent__BackFriendRejectConfirmRefreshShowOffered(
        FriendRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x3
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  FriendOperationItemListViewManager_CallbackFunc_o *v11; // x21
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x2

  if ( (byte_49F789F & 1) == 0 )
  {
    sub_1B640C8(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_FriendRootComponent_OnSelectFriendItem__, v3);
    byte_49F789F = 1;
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
            v5),
          (classButtonControl = this->fields.classButtonControl) == 0LL)
      || (operationConfirmMenu = (FriendOperationConfirmMenu_o *)this->fields.operationItemListViewManager) == 0LL
      || (FriendOperationItemListViewManager__CreateList(
            (FriendOperationItemListViewManager_o *)operationConfirmMenu,
            2,
            classButtonControl->fields.currentCursor,
            v6),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v11 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1B64314(
                                                                       FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                                       v9,
                                                                       v10),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v11,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v12),
          !operationItemListViewManager) )
    {
LABEL_11:
      sub_1B64324(operationConfirmMenu);
    }
    operationItemListViewManager->fields.callbackFunc = v11;
    sub_1B6406C(&operationItemListViewManager->fields.callbackFunc);
    FriendOperationItemListViewManager__SetMode_30645516(operationItemListViewManager, 2, v13);
  }
}


void __fastcall FriendRootComponent__BackFriendRemoveConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  FriendOperationItemListViewManager_CallbackFunc_o *v8; // x21
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x2

  if ( (byte_49F78A4 & 1) == 0 )
  {
    sub_1B640C8(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_FriendRootComponent_OnSelectFriendItem__, v3);
    byte_49F78A4 = 1;
  }
  if ( this->fields.state == 40 )
  {
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close(operationConfirmMenu, 0LL),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v8 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1B64314(
                                                                      FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                                      v6,
                                                                      v7),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v8,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v9),
          !operationItemListViewManager) )
    {
      sub_1B64324(operationConfirmMenu);
    }
    operationItemListViewManager->fields.callbackFunc = v8;
    sub_1B6406C(&operationItemListViewManager->fields.callbackFunc);
    FriendOperationItemListViewManager__SetMode_30645516(operationItemListViewManager, 2, v10);
    this->fields.state = 4;
  }
}


void __fastcall FriendRootComponent__BackFriendRemoveConfirmRefreshShowFriend(
        FriendRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x3
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  FriendOperationItemListViewManager_CallbackFunc_o *v11; // x21
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x2

  if ( (byte_49F78A5 & 1) == 0 )
  {
    sub_1B640C8(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_FriendRootComponent_OnSelectFriendItem__, v3);
    byte_49F78A5 = 1;
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
            v5),
          (classButtonControl = this->fields.classButtonControl) == 0LL)
      || (operationConfirmMenu = (FriendOperationConfirmMenu_o *)this->fields.operationItemListViewManager) == 0LL
      || (FriendOperationItemListViewManager__CreateList(
            (FriendOperationItemListViewManager_o *)operationConfirmMenu,
            3,
            classButtonControl->fields.currentCursor,
            v6),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v11 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1B64314(
                                                                       FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                                       v9,
                                                                       v10),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v11,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v12),
          !operationItemListViewManager) )
    {
LABEL_11:
      sub_1B64324(operationConfirmMenu);
    }
    operationItemListViewManager->fields.callbackFunc = v11;
    sub_1B6406C(&operationItemListViewManager->fields.callbackFunc);
    FriendOperationItemListViewManager__SetMode_30645516(operationItemListViewManager, 2, v13);
  }
}


void __fastcall FriendRootComponent__BackSearchFriend(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  const MethodInfo *v4; // x2
  FriendSearchResultMenu_o *friendSearchResultMenu; // x0
  FriendSearchMenu_o *friendSearchMenu; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  System_Action_o *v9; // x21
  const MethodInfo *v10; // x2

  if ( (byte_49F7892 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_FriendRootComponent_OnMoveEnd__, v3);
    byte_49F7892 = 1;
  }
  if ( this->fields.state == 23 )
  {
    this->fields.state = 24;
    FriendRootComponent__RefreshInfo(this, method);
    this->fields.selectFriendEntity = 0LL;
    sub_1B6406C(&this->fields.selectFriendEntity);
    friendSearchResultMenu = this->fields.friendSearchResultMenu;
    if ( !friendSearchResultMenu
      || (FriendSearchResultMenu__Close_30673220(friendSearchResultMenu, 0LL, v4),
          friendSearchMenu = this->fields.friendSearchMenu,
          v9 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v7, v8),
          System_Action___ctor(v9, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0LL),
          !friendSearchMenu) )
    {
      sub_1B64324(friendSearchResultMenu);
    }
    FriendSearchMenu__Close_30671056(friendSearchMenu, v9, v10);
  }
}


void __fastcall FriendRootComponent__BackShowFriend(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_o *v7; // x21
  __int64 v8; // x0
  const MethodInfo *v9; // x2

  if ( (byte_49F788A & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_FriendRootComponent_OnMoveEnd__, v3);
    byte_49F788A = 1;
  }
  if ( this->fields.state == 4 )
  {
    this->fields.state = 5;
    FriendRootComponent__RefreshInfo(this, method);
    operationItemListViewManager = this->fields.operationItemListViewManager;
    v7 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v5, v6);
    System_Action___ctor(v7, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0LL);
    if ( !operationItemListViewManager )
      sub_1B64324(v8);
    operationItemListViewManager->fields.callbackFunc2 = v7;
    sub_1B6406C(&operationItemListViewManager->fields.callbackFunc2);
    FriendOperationItemListViewManager__SetMode_30645516(operationItemListViewManager, 4, v9);
  }
}


void __fastcall FriendRootComponent__BackShowOffer(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  System_Action_o *v6; // x21
  __int64 v7; // x0
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x1

  if ( (byte_49F788C & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_FriendRootComponent_OnMoveEnd__, v4);
    byte_49F788C = 1;
  }
  if ( this->fields.state == 9 )
  {
    operationItemListViewManager = this->fields.operationItemListViewManager;
    v6 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, method, v2);
    System_Action___ctor(v6, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0LL);
    if ( !operationItemListViewManager )
      sub_1B64324(v7);
    operationItemListViewManager->fields.callbackFunc2 = v6;
    sub_1B6406C(&operationItemListViewManager->fields.callbackFunc2);
    FriendOperationItemListViewManager__SetMode_30645516(operationItemListViewManager, 4, v8);
    FriendRootComponent__RefreshInfo(this, v9);
    this->fields.state = 10;
  }
}


void __fastcall FriendRootComponent__BackShowOffered(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_o *v7; // x21
  __int64 v8; // x0
  const MethodInfo *v9; // x2

  if ( (byte_49F788E & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_FriendRootComponent_OnMoveEnd__, v3);
    byte_49F788E = 1;
  }
  if ( this->fields.state == 14 )
  {
    this->fields.state = 15;
    FriendRootComponent__RefreshInfo(this, method);
    operationItemListViewManager = this->fields.operationItemListViewManager;
    v7 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v5, v6);
    System_Action___ctor(v7, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0LL);
    if ( !operationItemListViewManager )
      sub_1B64324(v8);
    operationItemListViewManager->fields.callbackFunc2 = v7;
    sub_1B6406C(&operationItemListViewManager->fields.callbackFunc2);
    FriendOperationItemListViewManager__SetMode_30645516(operationItemListViewManager, 4, v9);
  }
}


void __fastcall FriendRootComponent__BackShowSearch(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  System_Action_o *v6; // x21
  __int64 v7; // x0
  const MethodInfo *v8; // x2

  if ( (byte_49F7890 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_FriendRootComponent_OnMoveEnd__, v4);
    byte_49F7890 = 1;
  }
  if ( this->fields.state == 19 )
  {
    this->fields.state = 20;
    operationItemListViewManager = this->fields.operationItemListViewManager;
    v6 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, method, v2);
    System_Action___ctor(v6, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0LL);
    if ( !operationItemListViewManager )
      sub_1B64324(v7);
    operationItemListViewManager->fields.callbackFunc2 = v6;
    sub_1B6406C(&operationItemListViewManager->fields.callbackFunc2);
    FriendOperationItemListViewManager__SetMode_30645516(operationItemListViewManager, 4, v8);
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

  if ( (byte_49F78B0 & 1) == 0 )
  {
    sub_1B640C8(&OptionManager_TypeInfo, method);
    byte_49F78B0 = 1;
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
        sub_1B6432C(SpoilerSetting, v4);
      }
LABEL_14:
      v9 = this->fields.selectFriendEntity;
      if ( !v9 || (eventUserSvtLeaderHash = v9->fields.eventUserSvtLeaderHash) == 0LL )
LABEL_23:
        sub_1B64324(SpoilerSetting);
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

  if ( (byte_49F7882 & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, method);
    sub_1B640C8(&StringLiteral_6474/*"FRIEND_LOCK_HELP_TEXT"*/, v3);
    sub_1B640C8(&StringLiteral_6472/*"FRIEND_HELP_TEXT"*/, v4);
    byte_49F7882 = 1;
  }
  v5 = (System_String_o **)&StringLiteral_6472/*"FRIEND_HELP_TEXT"*/;
  if ( this->fields.isActiveModeKindButtons && this->fields.currentModeKind == 1 )
    v5 = (System_String_o **)&StringLiteral_6474/*"FRIEND_LOCK_HELP_TEXT"*/;
  v6 = *v5;
  helpLabel = this->fields.helpLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__Get(v6, 0LL);
  if ( !helpLabel )
    sub_1B64324(v8);
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
  Il2CppObject *MasterData_object; // x20
  UserFollowMaster_o *v11; // x21
  int v12; // w21
  UICommonButton_o *modeUserDetailButton; // x20
  bool enabled; // w0
  UICommonButton_o *modeEditLockButton; // x20
  bool v16; // w0
  __int64 v17; // x8
  int32_t currentModeKind; // w20
  __int64 v19; // x21
  __int64 v20; // x22
  System_String_o **v21; // x8
  System_String_o *v22; // x1

  if ( (byte_49F78B7 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_TblFriendMaster___, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserFollowMaster___, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_1B640C8(&StringLiteral_17580/*"button_alllock_unreg"*/, v5);
    sub_1B640C8(&StringLiteral_17586/*"button_infocheck_unreg"*/, v6);
    sub_1B640C8(&StringLiteral_17585/*"button_infocheck_reg"*/, v7);
    sub_1B640C8(&StringLiteral_17579/*"button_alllock_reg"*/, v8);
    byte_49F78B7 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_TblFriendMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserFollowMaster___);
  if ( !MasterData_object )
    goto LABEL_31;
  v11 = (UserFollowMaster_o *)Instance;
  Instance = (DataManager_o *)TblFriendMaster__GetFriendSum((TblFriendMaster_o *)MasterData_object, 0LL);
  if ( (int)Instance > 0 )
    goto LABEL_9;
  if ( !v11 )
    goto LABEL_31;
  if ( UserFollowMaster__GetFollowSum(v11, 0LL) <= 0 )
  {
    v12 = 1;
    this->fields.currentModeKind = 0;
  }
  else
  {
LABEL_9:
    v12 = 0;
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
  v16 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.modeEditLockButton, 0LL);
  UICommonButton__SetColliderEnable(modeEditLockButton, v16, 1, 0LL);
  if ( v12 )
  {
    v17 = 232LL;
    if ( this->fields.currentModeKind )
      v17 = 224LL;
    Instance = *(DataManager_o **)((char *)&this->klass + v17);
    if ( Instance )
    {
      UICommonButton__SetButtonEnable((UICommonButton_o *)Instance, 0, 1, 0LL);
      goto LABEL_21;
    }
LABEL_31:
    sub_1B64324(Instance);
  }
LABEL_21:
  Instance = (DataManager_o *)this->fields.modeUserDetailSprite;
  if ( !Instance )
    goto LABEL_31;
  currentModeKind = this->fields.currentModeKind;
  v19 = StringLiteral_17579/*"button_alllock_reg"*/;
  v20 = StringLiteral_17580/*"button_alllock_unreg"*/;
  v21 = (System_String_o **)(currentModeKind ? &StringLiteral_17586/*"button_infocheck_unreg"*/ : &StringLiteral_17585/*"button_infocheck_reg"*/);
  UISprite__set_spriteName((UISprite_o *)Instance, *v21, 0LL);
  Instance = (DataManager_o *)this->fields.modeEditLockSprite;
  if ( !Instance )
    goto LABEL_31;
  if ( currentModeKind == 1 )
    v22 = (System_String_o *)v19;
  else
    v22 = (System_String_o *)v20;
  UISprite__set_spriteName((UISprite_o *)Instance, v22, 0LL);
}


bool __fastcall FriendRootComponent__CheckTabKind(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  int32_t tabKind; // w0
  PlayMakerFSM_o *myFSM; // x0
  __int64 *v7; // x8

  if ( (byte_49F7886 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_8575/*"MENU_OPERATION_FRIEND"*/, method);
    sub_1B640C8(&StringLiteral_8577/*"MENU_OPERATION_OFFERED"*/, v3);
    sub_1B640C8(&StringLiteral_8578/*"MENU_OPERATION_SEARCH"*/, v4);
    byte_49F7886 = 1;
  }
  tabKind = FriendRootComponent__get_tabKind(this, method);
  switch ( tabKind )
  {
    case 2:
      myFSM = this->fields.myFSM;
      if ( myFSM )
      {
        v7 = &StringLiteral_8578/*"MENU_OPERATION_SEARCH"*/;
        goto LABEL_12;
      }
LABEL_14:
      sub_1B64324(myFSM);
    case 1:
      myFSM = this->fields.myFSM;
      if ( myFSM )
      {
        v7 = &StringLiteral_8577/*"MENU_OPERATION_OFFERED"*/;
        goto LABEL_12;
      }
      goto LABEL_14;
    case 0:
      myFSM = this->fields.myFSM;
      if ( myFSM )
      {
        v7 = &StringLiteral_8575/*"MENU_OPERATION_FRIEND"*/;
LABEL_12:
        PlayMakerFSM__SendEvent(myFSM, (System_String_o *)*v7, 0LL);
        return 1;
      }
      goto LABEL_14;
  }
  return 1;
}


void __fastcall FriendRootComponent__EndCloseShowServant(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v6; // x21
  const MethodInfo *v7; // x3
  __int64 v8; // x0
  const MethodInfo *v9; // x2

  if ( (byte_49F7897 & 1) == 0 )
  {
    sub_1B640C8(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_FriendRootComponent_OnSelectFriendItem__, v4);
    byte_49F7897 = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v6 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1B64314(
                                                              FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                              method,
                                                              v2);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
    v7);
  if ( !operationItemListViewManager )
    sub_1B64324(v8);
  operationItemListViewManager->fields.callbackFunc = v6;
  sub_1B6406C(&operationItemListViewManager->fields.callbackFunc);
  FriendOperationItemListViewManager__SetMode_30645516(operationItemListViewManager, 2, v9);
}


void __fastcall FriendRootComponent__EndCloseShowServantEquip(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v6; // x21
  const MethodInfo *v7; // x3
  __int64 v8; // x0
  const MethodInfo *v9; // x2

  if ( (byte_49F78C1 & 1) == 0 )
  {
    sub_1B640C8(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_FriendRootComponent_OnSelectFriendItem__, v4);
    byte_49F78C1 = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v6 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1B64314(
                                                              FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                              method,
                                                              v2);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
    v7);
  if ( !operationItemListViewManager )
    sub_1B64324(v8);
  operationItemListViewManager->fields.callbackFunc = v6;
  sub_1B6406C(&operationItemListViewManager->fields.callbackFunc);
  FriendOperationItemListViewManager__SetMode_30645516(operationItemListViewManager, 2, v9);
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
  TblFriendMaster_o *v8; // x20
  const MethodInfo *v9; // x2
  int32_t v10; // w1
  OtherUserGameEntity_array *List; // x21
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x1

  if ( (byte_49F7883 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_TblFriendMaster___, result);
    sub_1B640C8(&FriendRootComponent_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49F7883 = 1;
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
    Instance = (OtherUserGameEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (OtherUserGameEntity_array *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)Instance,
                                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_TblFriendMaster___);
      if ( Instance )
      {
        v8 = (TblFriendMaster_o *)Instance;
        Instance = TblFriendMaster__GetList((TblFriendMaster_o *)Instance, 2, 0LL);
        if ( Instance )
        {
          if ( *(_QWORD *)&Instance->max_length )
          {
            v10 = 1;
LABEL_22:
            FriendRootComponent__set_tabKind((FriendRootComponent_o *)Instance, v10, v9);
            EventTutorialMaster__CheckTutorial(-1, 49, 0LL, 0, 0, 0, 0, 0LL);
            goto LABEL_23;
          }
          List = TblFriendMaster__GetList(v8, 3, 0LL);
          Instance = TblFriendMaster__GetList(v8, 9, 0LL);
          if ( List )
          {
            if ( *(_QWORD *)&List->max_length )
            {
LABEL_21:
              v10 = 0;
              goto LABEL_22;
            }
            if ( Instance )
            {
              if ( !*(_QWORD *)&Instance->max_length )
              {
                FriendRootComponent__set_tabKind((FriendRootComponent_o *)Instance, 2, v9);
                goto LABEL_23;
              }
              goto LABEL_21;
            }
          }
        }
      }
    }
    sub_1B64324(Instance);
  }
LABEL_23:
  FriendRootComponent__InitModeKindButtons(this, (const MethodInfo *)result);
  FriendRootComponent__RefreshTab(this, v12);
  FriendRootComponent__RefreshInfo(this, v13);
  MainMenuBar__setMenuActive(1, 0LL, 0LL);
  SceneRootComponent__beginStartUp_38276788((SceneRootComponent_o *)this, 0LL);
}


void __fastcall FriendRootComponent__EndFriendRequest2(
        FriendRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v4; // x1
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  const MethodInfo *v6; // x3
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  struct FriendOperationItemListViewManager_o *v8; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  FriendOperationItemListViewManager_CallbackFunc_o *v11; // x21
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x2

  if ( (byte_49F78D7 & 1) == 0 )
  {
    sub_1B640C8(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, result);
    sub_1B640C8(&Method_FriendRootComponent_OnSelectFriendItem__, v4);
    byte_49F78D7 = 1;
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
        v11 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1B64314(
                                                                     FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                                     v9,
                                                                     v10),
        FriendOperationItemListViewManager_CallbackFunc___ctor(
          v11,
          (Il2CppObject *)this,
          (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
          v12),
        !v8) )
  {
    sub_1B64324(operationItemListViewManager);
  }
  v8->fields.callbackFunc = v11;
  sub_1B6406C(&v8->fields.callbackFunc);
  FriendOperationItemListViewManager__SetMode_30645516(v8, 2, v13);
  this->fields.state = 4;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendRootComponent__EndMaxFollowWarningOfferConfirm(
        FriendRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_49F78CF & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_8572/*"MENU_CANCEL"*/, isDecide);
    byte_49F78CF = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1B64324(0LL);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_8572/*"MENU_CANCEL"*/, 0LL);
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
  __int64 v7; // x1
  __int64 v8; // x2
  FriendOperationItemListViewManager_CallbackFunc_o *v9; // x21
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2

  if ( (byte_49F78C3 & 1) == 0 )
  {
    sub_1B640C8(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, isDecide);
    sub_1B640C8(&Method_FriendRootComponent_OnSelectFriendItem__, v4);
    byte_49F78C3 = 1;
  }
  friendWarningDialog = this->fields.friendWarningDialog;
  if ( !friendWarningDialog
    || (FriendWarningDialog__Close_30705444(friendWarningDialog, 0LL, method),
        operationItemListViewManager = this->fields.operationItemListViewManager,
        v9 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1B64314(
                                                                    FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                                    v7,
                                                                    v8),
        FriendOperationItemListViewManager_CallbackFunc___ctor(
          v9,
          (Il2CppObject *)this,
          (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
          v10),
        !operationItemListViewManager) )
  {
    sub_1B64324(friendWarningDialog);
  }
  operationItemListViewManager->fields.callbackFunc = v9;
  sub_1B6406C(&operationItemListViewManager->fields.callbackFunc);
  FriendOperationItemListViewManager__SetMode_30645516(operationItemListViewManager, 2, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendRootComponent__EndMaxFriendWarningOfferConfirm(
        FriendRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_49F78C4 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_8572/*"MENU_CANCEL"*/, isDecide);
    byte_49F78C4 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1B64324(0LL);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_8572/*"MENU_CANCEL"*/, 0LL);
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
  __int64 v8; // x1
  __int64 v9; // x2
  FriendSearchMenu_CallbackFunc_o *v10; // x21
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x3

  if ( (byte_49F78B1 & 1) == 0 )
  {
    sub_1B640C8(&FriendSearchMenu_CallbackFunc_TypeInfo, isDecide);
    sub_1B640C8(&Method_FriendRootComponent_OnSelectSearchFriend__, v4);
    sub_1B640C8(&StringLiteral_11004/*"REQUEST_NG"*/, v5);
    byte_49F78B1 = 1;
  }
  friendWarningDialog = this->fields.friendWarningDialog;
  if ( !friendWarningDialog
    || (FriendWarningDialog__Close_30705444(friendWarningDialog, 0LL, method),
        this->fields.state = 23,
        friendSearchMenu = this->fields.friendSearchMenu,
        v10 = (FriendSearchMenu_CallbackFunc_o *)sub_1B64314(FriendSearchMenu_CallbackFunc_TypeInfo, v8, v9),
        FriendSearchMenu_CallbackFunc___ctor(
          v10,
          (Il2CppObject *)this,
          Method_FriendRootComponent_OnSelectSearchFriend__,
          v11),
        !friendSearchMenu)
    || (FriendSearchMenu__Open(friendSearchMenu, v10, 0, v12),
        (friendWarningDialog = (FriendWarningDialog_o *)this->fields.myFSM) == 0LL) )
  {
    sub_1B64324(friendWarningDialog);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)friendWarningDialog, (System_String_o *)StringLiteral_11004/*"REQUEST_NG"*/, 0LL);
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
  System_Collections_Generic_Dictionary_object__object__o *myFSM; // x0
  System_Collections_Generic_Dictionary_object__object__o *v15; // x20
  System_String_o *v16; // x20
  __int64 *v17; // x8
  Il2CppObject *Instance; // x21
  __int64 v19; // x1
  __int64 v20; // x2
  NotificationDialog_ClickDelegate_o *v21; // x22

  if ( (byte_49F78D2 & 1) == 0 )
  {
    sub_1B640C8(&NotificationDialog_ClickDelegate_TypeInfo, result);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v6);
    sub_1B640C8(&Method_FriendRootComponent_OnEndRequestDialog__, v7);
    sub_1B640C8(&JsonManager_TypeInfo, v8);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_1B640C8(&StringLiteral_11006/*"REQUEST_OK"*/, v10);
    sub_1B640C8(&StringLiteral_11004/*"REQUEST_NG"*/, v11);
    sub_1B640C8(&StringLiteral_21968/*"ng"*/, v12);
    sub_1B640C8(&StringLiteral_21313/*"message"*/, v13);
    byte_49F78D2 = 1;
  }
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_21968/*"ng"*/, 0LL) )
  {
    myFSM = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.myFSM;
    if ( myFSM )
    {
      v17 = &StringLiteral_11004/*"REQUEST_NG"*/;
      goto LABEL_14;
    }
LABEL_17:
    sub_1B64324(myFSM);
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  myFSM = (System_Collections_Generic_Dictionary_object__object__o *)JsonManager__getDictionary(result, 0LL);
  if ( !myFSM )
    goto LABEL_17;
  v15 = myFSM;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          myFSM,
          (Il2CppObject *)StringLiteral_21313/*"message"*/,
          (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_10;
  myFSM = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                       v15,
                                                                       (Il2CppObject *)StringLiteral_21313/*"message"*/,
                                                                       (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !myFSM )
    goto LABEL_17;
  v16 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, Il2CppMethodPointer))myFSM->klass->vtable._3_ToString.method)(
                             myFSM,
                             myFSM->klass->vtable._4_unknown.methodPtr);
  if ( System_String__IsNullOrEmpty(v16, 0LL) )
  {
LABEL_10:
    myFSM = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.myFSM;
    if ( myFSM )
    {
      v17 = &StringLiteral_11006/*"REQUEST_OK"*/;
LABEL_14:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myFSM, (System_String_o *)*v17, 0LL);
      return;
    }
    goto LABEL_17;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v21 = (NotificationDialog_ClickDelegate_o *)sub_1B64314(NotificationDialog_ClickDelegate_TypeInfo, v19, v20);
  NotificationDialog_ClickDelegate___ctor(
    v21,
    (Il2CppObject *)this,
    Method_FriendRootComponent_OnEndRequestDialog__,
    0LL);
  if ( !Instance )
    goto LABEL_17;
  CommonUI__OpenNotificationDialog_30347532(
    (CommonUI_o *)Instance,
    0LL,
    v16,
    v21,
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
  System_Collections_Generic_Dictionary_object__object__o *myFSM; // x0
  System_Collections_Generic_Dictionary_object__object__o *v15; // x20
  System_String_o *v16; // x20
  __int64 *v17; // x8
  Il2CppObject *Instance; // x21
  __int64 v19; // x1
  __int64 v20; // x2
  NotificationDialog_ClickDelegate_o *v21; // x22

  if ( (byte_49F78DB & 1) == 0 )
  {
    sub_1B640C8(&NotificationDialog_ClickDelegate_TypeInfo, result);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v6);
    sub_1B640C8(&Method_FriendRootComponent_OnEndRequestDialog__, v7);
    sub_1B640C8(&JsonManager_TypeInfo, v8);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_1B640C8(&StringLiteral_11006/*"REQUEST_OK"*/, v10);
    sub_1B640C8(&StringLiteral_11004/*"REQUEST_NG"*/, v11);
    sub_1B640C8(&StringLiteral_21968/*"ng"*/, v12);
    sub_1B640C8(&StringLiteral_21313/*"message"*/, v13);
    byte_49F78DB = 1;
  }
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_21968/*"ng"*/, 0LL) )
  {
    myFSM = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.myFSM;
    if ( myFSM )
    {
      v17 = &StringLiteral_11004/*"REQUEST_NG"*/;
      goto LABEL_14;
    }
LABEL_17:
    sub_1B64324(myFSM);
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  myFSM = (System_Collections_Generic_Dictionary_object__object__o *)JsonManager__getDictionary(result, 0LL);
  if ( !myFSM )
    goto LABEL_17;
  v15 = myFSM;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          myFSM,
          (Il2CppObject *)StringLiteral_21313/*"message"*/,
          (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_10;
  myFSM = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                       v15,
                                                                       (Il2CppObject *)StringLiteral_21313/*"message"*/,
                                                                       (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !myFSM )
    goto LABEL_17;
  v16 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, Il2CppMethodPointer))myFSM->klass->vtable._3_ToString.method)(
                             myFSM,
                             myFSM->klass->vtable._4_unknown.methodPtr);
  if ( System_String__IsNullOrEmpty(v16, 0LL) )
  {
LABEL_10:
    myFSM = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.myFSM;
    if ( myFSM )
    {
      v17 = &StringLiteral_11006/*"REQUEST_OK"*/;
LABEL_14:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myFSM, (System_String_o *)*v17, 0LL);
      return;
    }
    goto LABEL_17;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v21 = (NotificationDialog_ClickDelegate_o *)sub_1B64314(NotificationDialog_ClickDelegate_TypeInfo, v19, v20);
  NotificationDialog_ClickDelegate___ctor(
    v21,
    (Il2CppObject *)this,
    Method_FriendRootComponent_OnEndRequestDialog__,
    0LL);
  if ( !Instance )
    goto LABEL_17;
  CommonUI__OpenNotificationDialog_30347532(
    (CommonUI_o *)Instance,
    0LL,
    v16,
    v21,
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
  System_Collections_Generic_Dictionary_object__object__o *myFSM; // x0
  System_Collections_Generic_Dictionary_object__object__o *v15; // x20
  System_String_o *v16; // x20
  __int64 *v17; // x8
  Il2CppObject *Instance; // x21
  __int64 v19; // x1
  __int64 v20; // x2
  NotificationDialog_ClickDelegate_o *v21; // x22

  if ( (byte_49F78AC & 1) == 0 )
  {
    sub_1B640C8(&NotificationDialog_ClickDelegate_TypeInfo, result);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v6);
    sub_1B640C8(&Method_FriendRootComponent_OnEndRequestDialog__, v7);
    sub_1B640C8(&JsonManager_TypeInfo, v8);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_1B640C8(&StringLiteral_11006/*"REQUEST_OK"*/, v10);
    sub_1B640C8(&StringLiteral_11004/*"REQUEST_NG"*/, v11);
    sub_1B640C8(&StringLiteral_21968/*"ng"*/, v12);
    sub_1B640C8(&StringLiteral_21313/*"message"*/, v13);
    byte_49F78AC = 1;
  }
  MainMenuBar__UpdateNoticeNumber(0LL);
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_21968/*"ng"*/, 0LL) )
  {
    myFSM = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.myFSM;
    if ( myFSM )
    {
      v17 = &StringLiteral_11004/*"REQUEST_NG"*/;
      goto LABEL_14;
    }
LABEL_17:
    sub_1B64324(myFSM);
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  myFSM = (System_Collections_Generic_Dictionary_object__object__o *)JsonManager__getDictionary(result, 0LL);
  if ( !myFSM )
    goto LABEL_17;
  v15 = myFSM;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          myFSM,
          (Il2CppObject *)StringLiteral_21313/*"message"*/,
          (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_10;
  myFSM = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                       v15,
                                                                       (Il2CppObject *)StringLiteral_21313/*"message"*/,
                                                                       (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !myFSM )
    goto LABEL_17;
  v16 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, Il2CppMethodPointer))myFSM->klass->vtable._3_ToString.method)(
                             myFSM,
                             myFSM->klass->vtable._4_unknown.methodPtr);
  if ( System_String__IsNullOrEmpty(v16, 0LL) )
  {
LABEL_10:
    myFSM = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.myFSM;
    if ( myFSM )
    {
      v17 = &StringLiteral_11006/*"REQUEST_OK"*/;
LABEL_14:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myFSM, (System_String_o *)*v17, 0LL);
      return;
    }
    goto LABEL_17;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v21 = (NotificationDialog_ClickDelegate_o *)sub_1B64314(NotificationDialog_ClickDelegate_TypeInfo, v19, v20);
  NotificationDialog_ClickDelegate___ctor(
    v21,
    (Il2CppObject *)this,
    Method_FriendRootComponent_OnEndRequestDialog__,
    0LL);
  if ( !Instance )
    goto LABEL_17;
  CommonUI__OpenNotificationDialog_30347532(
    (CommonUI_o *)Instance,
    0LL,
    v16,
    v21,
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

  if ( (byte_49F78AF & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_OtherUserGameMaster___, result);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_1B640C8(&StringLiteral_11006/*"REQUEST_OK"*/, v6);
    sub_1B640C8(&StringLiteral_22137/*"ok"*/, v7);
    sub_1B640C8(&StringLiteral_11004/*"REQUEST_NG"*/, v8);
    byte_49F78AF = 1;
  }
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_22137/*"ok"*/, 0LL) )
    goto LABEL_11;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_OtherUserGameMaster___);
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
    sub_1B6406C(&this->fields.selectFriendEntity);
    FriendRootComponent__StartSearchInput(this, v14);
    Instance = this->fields.myFSM;
    if ( Instance )
    {
      v13 = &StringLiteral_11004/*"REQUEST_NG"*/;
      goto LABEL_13;
    }
LABEL_14:
    sub_1B64324(Instance);
  }
  if ( !(_DWORD)v11 )
    sub_1B6432C(Instance, v10);
  this->fields.selectFriendEntity = (struct OtherUserGameEntity_o *)*((_QWORD *)Instance + 4);
  sub_1B6406C(&this->fields.selectFriendEntity);
  FriendRootComponent__ChangeLimitCountBySpoilerProtection(this, v12);
  Instance = this->fields.myFSM;
  if ( !Instance )
    goto LABEL_14;
  v13 = &StringLiteral_11006/*"REQUEST_OK"*/;
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
  const MethodInfo *v12; // x2
  Il2CppObject *Instance; // x20
  __int64 v14; // x1
  __int64 v15; // x2
  System_Action_o *v16; // x21

  if ( (byte_49F7896 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, isDecide);
    sub_1B640C8(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, v4);
    sub_1B640C8(&Method_FriendRootComponent_EndCloseShowServant__, v5);
    sub_1B640C8(&Method_FriendRootComponent_OnSelectFriendItem__, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_49F7896 = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v9 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1B64314(
                                                              FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                              isDecide,
                                                              method);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v9,
    (Il2CppObject *)this,
    (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
    v10);
  if ( !operationItemListViewManager
    || (operationItemListViewManager->fields.callbackFunc = v9,
        sub_1B6406C(&operationItemListViewManager->fields.callbackFunc),
        FriendOperationItemListViewManager__SetMode_30645516(operationItemListViewManager, 5, v12),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v16 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v14, v15),
        System_Action___ctor(v16, (Il2CppObject *)this, Method_FriendRootComponent_EndCloseShowServant__, 0LL),
        !Instance) )
  {
    sub_1B64324(v11);
  }
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v16, 0LL);
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
  __int64 v7; // x1
  __int64 v8; // x2
  System_Action_o *v9; // x21
  __int64 v10; // x0

  if ( (byte_49F78C0 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, isDecide);
    sub_1B640C8(&Method_FriendRootComponent_EndCloseShowServantEquip__, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_49F78C0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v7, v8);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_FriendRootComponent_EndCloseShowServantEquip__, 0LL);
  if ( !Instance )
    sub_1B64324(v10);
  CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)Instance, v9, 0LL);
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
  __int64 v18; // x1
  __int64 v19; // x2
  System_Collections_Generic_List_long__o *v20; // x21
  __int64 v21; // x1
  __int64 v22; // x2
  System_Collections_Generic_List_long__o *v23; // x22
  __int64 v24; // x1
  __int64 v25; // x2
  System_Collections_Generic_List_long__o *v26; // x23
  __int64 v27; // x1
  __int64 v28; // x2
  System_Collections_Generic_List_long__o *v29; // x24
  int32_t ItemSum; // w0
  int64_t v31; // x1
  const MethodInfo *v32; // x2
  int32_t v33; // w25
  float x; // w8
  ListViewManager_o *v35; // x26
  struct UnityEngine_GameObject_o *dragParentObject; // x8
  struct System_Int64_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  Il2CppClass **v40; // x8
  struct UnityEngine_GameObject_o *v41; // x8
  struct System_Int64_array *v42; // x8
  _QWORD *v43; // x9
  __int64 v44; // x10
  struct System_Int64_array *v45; // x8
  _QWORD *v46; // x9
  __int64 v47; // x10
  struct System_Int64_array *v48; // x8
  _QWORD *v49; // x9
  __int64 v50; // x10
  __int64 v51; // x8
  System_Collections_Generic_List_long__o *v52; // x0
  NetworkManager_ResultCallbackFunc_o *v53; // x19
  FirendLockSyncRequest_o *v54; // x19
  System_Int64_array *v55; // x20
  System_Int64_array *v56; // x21
  System_Int64_array *v57; // x22

  if ( (byte_49F78BD & 1) == 0 )
  {
    sub_1B640C8(&Method_ActionExtensions_Call_string___, onFinishedRequest);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__Add__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__ToArray__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_long___ctor__, v7);
    sub_1B640C8(&System_Collections_Generic_List_long__TypeInfo, v8);
    sub_1B640C8(&Method_NetworkManager_getRequest_FirendLockSyncRequest___, v9);
    sub_1B640C8(&NetworkManager_TypeInfo, v10);
    sub_1B640C8(&NetworkManager_ResultCallbackFunc_TypeInfo, v11);
    sub_1B640C8(&Method_FriendRootComponent___c__DisplayClass112_0__FriendLockRequst_b__0__, v12);
    sub_1B640C8(&FriendRootComponent___c__DisplayClass112_0_TypeInfo, v13);
    sub_1B640C8(&StringLiteral_22137/*"ok"*/, v14);
    byte_49F78BD = 1;
  }
  v15 = sub_1B64314(FriendRootComponent___c__DisplayClass112_0_TypeInfo, onFinishedRequest, method);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15 )
    goto LABEL_49;
  *(_QWORD *)(v15 + 16) = this;
  sub_1B6406C(v15 + 16);
  *(_QWORD *)(v15 + 32) = onFinishedRequest;
  sub_1B6406C(v15 + 32);
  operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    goto LABEL_49;
  if ( FriendOperationItemListViewManager__get_IsExistSwapLockUser(
         (FriendOperationItemListViewManager_o *)operationItemListViewManager,
         v17) )
  {
    v20 = (System_Collections_Generic_List_long__o *)sub_1B64314(
                                                       System_Collections_Generic_List_long__TypeInfo,
                                                       v18,
                                                       v19);
    System_Collections_Generic_List_long____ctor(
      v20,
      (const MethodInfo_3494820 *)Method_System_Collections_Generic_List_long___ctor__);
    v23 = (System_Collections_Generic_List_long__o *)sub_1B64314(
                                                       System_Collections_Generic_List_long__TypeInfo,
                                                       v21,
                                                       v22);
    System_Collections_Generic_List_long____ctor(
      v23,
      (const MethodInfo_3494820 *)Method_System_Collections_Generic_List_long___ctor__);
    v26 = (System_Collections_Generic_List_long__o *)sub_1B64314(
                                                       System_Collections_Generic_List_long__TypeInfo,
                                                       v24,
                                                       v25);
    System_Collections_Generic_List_long____ctor(
      v26,
      (const MethodInfo_3494820 *)Method_System_Collections_Generic_List_long___ctor__);
    v29 = (System_Collections_Generic_List_long__o *)sub_1B64314(
                                                       System_Collections_Generic_List_long__TypeInfo,
                                                       v27,
                                                       v28);
    System_Collections_Generic_List_long____ctor(
      v29,
      (const MethodInfo_3494820 *)Method_System_Collections_Generic_List_long___ctor__);
    operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
    if ( operationItemListViewManager )
    {
      ItemSum = ListViewManager__get_ItemSum(operationItemListViewManager, 0LL);
      *(_DWORD *)(v15 + 24) = ItemSum;
      if ( ItemSum >= 1 )
      {
        v33 = 0;
        while ( 1 )
        {
          operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
          if ( !operationItemListViewManager )
            goto LABEL_49;
          operationItemListViewManager = (ListViewManager_o *)FriendOperationItemListViewManager__GetItem(
                                                                (FriendOperationItemListViewManager_o *)operationItemListViewManager,
                                                                v33,
                                                                v32);
          if ( !operationItemListViewManager )
            goto LABEL_49;
          x = operationItemListViewManager->fields.clipRange.fields.x;
          v35 = operationItemListViewManager;
          if ( LODWORD(x) == 9 )
            break;
          if ( LODWORD(x) == 3 )
          {
            operationItemListViewManager = (ListViewManager_o *)FriendOperationItemListViewItem__get_IsLockDisp(
                                                                  (FriendOperationItemListViewItem_o *)operationItemListViewManager,
                                                                  0LL);
            dragParentObject = v35->fields.dragParentObject;
            if ( !dragParentObject )
              goto LABEL_49;
            v31 = *(_QWORD *)&dragParentObject->fields.m_CachedPtr;
            if ( ((unsigned __int8)operationItemListViewManager & 1) != 0 )
            {
              if ( !v20 )
                goto LABEL_49;
              items = v20->fields._items;
              v38 = Method_System_Collections_Generic_List_long__Add__;
              ++v20->fields._version;
              if ( !items )
                goto LABEL_49;
              size = v20->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                v51 = v38[4];
                v52 = v20;
LABEL_38:
                System_Collections_Generic_List_long___AddWithResize(
                  v52,
                  v31,
                  *(const MethodInfo_3495074 **)(*(_QWORD *)(v51 + 192) + 112LL));
                goto LABEL_39;
              }
              v40 = &items->obj.klass + size;
              v20->fields._size = size + 1;
            }
            else
            {
              if ( !v23 )
                goto LABEL_49;
              v45 = v23->fields._items;
              v46 = Method_System_Collections_Generic_List_long__Add__;
              ++v23->fields._version;
              if ( !v45 )
                goto LABEL_49;
              v47 = v23->fields._size;
              if ( (unsigned int)v47 >= v45->max_length )
              {
                v51 = v46[4];
                v52 = v23;
                goto LABEL_38;
              }
              v40 = &v45->obj.klass + v47;
              v23->fields._size = v47 + 1;
            }
LABEL_33:
            v40[4] = (Il2CppClass *)v31;
          }
LABEL_39:
          if ( ++v33 >= *(_DWORD *)(v15 + 24) )
            goto LABEL_40;
        }
        operationItemListViewManager = (ListViewManager_o *)FriendOperationItemListViewItem__get_IsLockDisp(
                                                              (FriendOperationItemListViewItem_o *)operationItemListViewManager,
                                                              0LL);
        v41 = v35->fields.dragParentObject;
        if ( !v41 )
          goto LABEL_49;
        v31 = *(_QWORD *)&v41->fields.m_CachedPtr;
        if ( ((unsigned __int8)operationItemListViewManager & 1) != 0 )
        {
          if ( !v26 )
            goto LABEL_49;
          v42 = v26->fields._items;
          v43 = Method_System_Collections_Generic_List_long__Add__;
          ++v26->fields._version;
          if ( !v42 )
            goto LABEL_49;
          v44 = v26->fields._size;
          if ( (unsigned int)v44 >= v42->max_length )
          {
            v51 = v43[4];
            v52 = v26;
            goto LABEL_38;
          }
          v40 = &v42->obj.klass + v44;
          v26->fields._size = v44 + 1;
        }
        else
        {
          if ( !v29 )
            goto LABEL_49;
          v48 = v29->fields._items;
          v49 = Method_System_Collections_Generic_List_long__Add__;
          ++v29->fields._version;
          if ( !v48 )
            goto LABEL_49;
          v50 = v29->fields._size;
          if ( (unsigned int)v50 >= v48->max_length )
          {
            v51 = v49[4];
            v52 = v29;
            goto LABEL_38;
          }
          v40 = &v48->obj.klass + v50;
          v29->fields._size = v50 + 1;
        }
        goto LABEL_33;
      }
LABEL_40:
      v53 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, v31, v32);
      NetworkManager_ResultCallbackFunc___ctor(
        v53,
        (Il2CppObject *)v15,
        Method_FriendRootComponent___c__DisplayClass112_0__FriendLockRequst_b__0__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      operationItemListViewManager = (ListViewManager_o *)NetworkManager__getRequest_object_(
                                                            v53,
                                                            (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_FirendLockSyncRequest___);
      if ( v20 )
      {
        v54 = (FirendLockSyncRequest_o *)operationItemListViewManager;
        operationItemListViewManager = (ListViewManager_o *)System_Collections_Generic_List_long___ToArray(
                                                              v20,
                                                              (const MethodInfo_3496BCC *)Method_System_Collections_Generic_List_long__ToArray__);
        if ( v23 )
        {
          v55 = (System_Int64_array *)operationItemListViewManager;
          operationItemListViewManager = (ListViewManager_o *)System_Collections_Generic_List_long___ToArray(
                                                                v23,
                                                                (const MethodInfo_3496BCC *)Method_System_Collections_Generic_List_long__ToArray__);
          if ( v26 )
          {
            v56 = (System_Int64_array *)operationItemListViewManager;
            operationItemListViewManager = (ListViewManager_o *)System_Collections_Generic_List_long___ToArray(
                                                                  v26,
                                                                  (const MethodInfo_3496BCC *)Method_System_Collections_Generic_List_long__ToArray__);
            if ( v29 )
            {
              v57 = (System_Int64_array *)operationItemListViewManager;
              operationItemListViewManager = (ListViewManager_o *)System_Collections_Generic_List_long___ToArray(
                                                                    v29,
                                                                    (const MethodInfo_3496BCC *)Method_System_Collections_Generic_List_long__ToArray__);
              if ( v54 )
              {
                FirendLockSyncRequest__beginRequest(
                  v54,
                  v55,
                  v56,
                  v57,
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
    sub_1B64324(operationItemListViewManager);
  }
  ActionExtensions__Call_object_(
    *(System_Action_T__o **)(v15 + 32),
    (Il2CppObject *)StringLiteral_22137/*"ok"*/,
    (const MethodInfo_2D90A78 *)Method_ActionExtensions_Call_string___);
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
  if ( (byte_49F78B8 & 1) == 0 )
  {
    this = (FriendRootComponent_o *)sub_1B640C8(&FSUtility_TypeInfo, method);
    byte_49F78B8 = 1;
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
    sub_1B64324(this);
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
    sub_1B64324(modeButtonParent);
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
    sub_1B64324(modeButtonParent);
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
  __int64 v8; // x1
  __int64 v9; // x2
  FriendRootComponent_messageRequestCallback_o *v10; // x20
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2

  if ( (byte_49F78B3 & 1) == 0 )
  {
    sub_1B640C8(&Method_FriendRootComponent_OnClickBack__, method);
    sub_1B640C8(&Method_FriendRootComponent__OnClickBack_b__99_0__, v3);
    sub_1B640C8(&FriendRootComponent_messageRequestCallback_TypeInfo, v4);
    byte_49F78B3 = 1;
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
    v6 = (_QWORD *)sub_1B640E0();
  v7 = (System_Reflection_MethodBase_o *)sub_1B640AC(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 1, 0LL);
  v10 = (FriendRootComponent_messageRequestCallback_o *)sub_1B64314(
                                                          FriendRootComponent_messageRequestCallback_TypeInfo,
                                                          v8,
                                                          v9);
  FriendRootComponent_messageRequestCallback___ctor(
    v10,
    (Il2CppObject *)this,
    Method_FriendRootComponent__OnClickBack_b__99_0__,
    v11);
  FriendRootComponent__messageDispChangeRequest(this, v10, v12);
}


void __fastcall FriendRootComponent__OnClickHelp(FriendRootComponent_o *this, const MethodInfo *method)
{
  _QWORD *v2; // x0
  System_Reflection_MethodBase_o *v3; // x0

  if ( (byte_49F78DC & 1) == 0 )
  {
    sub_1B640C8(&Method_FriendRootComponent_OnClickHelp__, method);
    byte_49F78DC = 1;
  }
  v2 = Method_FriendRootComponent_OnClickHelp__;
  if ( (*((_BYTE *)Method_FriendRootComponent_OnClickHelp__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_1B640E0();
  v3 = (System_Reflection_MethodBase_o *)sub_1B640AC(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 0, 0LL);
  EventTutorialMaster__ShowTutorialWithoutCheck(-1, 49, 0LL, 0LL);
}


void __fastcall FriendRootComponent__OnClickModeEditLock(FriendRootComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_49F78B6 & 1) == 0 )
  {
    sub_1B640C8(&Method_FriendRootComponent_OnClickModeEditLock__, method);
    byte_49F78B6 = 1;
  }
  if ( this->fields.currentModeKind != 1 )
  {
    v3 = Method_FriendRootComponent_OnClickModeEditLock__;
    if ( (*((_BYTE *)Method_FriendRootComponent_OnClickModeEditLock__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B640E0();
    v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    this->fields.currentModeKind = 1;
    FriendRootComponent__RefreshInfo(this, v5);
  }
}


void __fastcall FriendRootComponent__OnClickModeUserDetail(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Action_object__o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_49F78B5 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_string__TypeInfo, method);
    sub_1B640C8(&Method_FriendRootComponent__OnClickModeUserDetail_b__101_0__, v4);
    byte_49F78B5 = 1;
  }
  if ( this->fields.currentModeKind )
  {
    v5 = (System_Action_object__o *)sub_1B64314(System_Action_string__TypeInfo, method, v2);
    System_Action_object____ctor(
      v5,
      (Il2CppObject *)this,
      (intptr_t)Method_FriendRootComponent__OnClickModeUserDetail_b__101_0__,
      0LL);
    FriendRootComponent__FriendLockRequst(this, (System_Action_string__o *)v5, v6);
  }
}


void __fastcall FriendRootComponent__OnClickTabFriend(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Action_object__o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_49F78B9 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_string__TypeInfo, method);
    sub_1B640C8(&Method_FriendRootComponent__OnClickTabFriend_b__108_0__, v4);
    byte_49F78B9 = 1;
  }
  v5 = (System_Action_object__o *)sub_1B64314(System_Action_string__TypeInfo, method, v2);
  System_Action_object____ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_FriendRootComponent__OnClickTabFriend_b__108_0__,
    0LL);
  FriendRootComponent__FriendLockRequst(this, (System_Action_string__o *)v5, v6);
}


void __fastcall FriendRootComponent__OnClickTabOffered(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  FriendRootComponent_messageRequestCallback_o *v5; // x20
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x2

  if ( (byte_49F78BA & 1) == 0 )
  {
    sub_1B640C8(&Method_FriendRootComponent__OnClickTabOffered_b__109_0__, method);
    sub_1B640C8(&FriendRootComponent_messageRequestCallback_TypeInfo, v4);
    byte_49F78BA = 1;
  }
  v5 = (FriendRootComponent_messageRequestCallback_o *)sub_1B64314(
                                                         FriendRootComponent_messageRequestCallback_TypeInfo,
                                                         method,
                                                         v2);
  FriendRootComponent_messageRequestCallback___ctor(
    v5,
    (Il2CppObject *)this,
    Method_FriendRootComponent__OnClickTabOffered_b__109_0__,
    v6);
  FriendRootComponent__messageDispChangeRequest(this, v5, v7);
}


void __fastcall FriendRootComponent__OnClickTabSearch(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  FriendRootComponent_messageRequestCallback_o *v5; // x20
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x2

  if ( (byte_49F78BB & 1) == 0 )
  {
    sub_1B640C8(&Method_FriendRootComponent__OnClickTabSearch_b__110_0__, method);
    sub_1B640C8(&FriendRootComponent_messageRequestCallback_TypeInfo, v4);
    byte_49F78BB = 1;
  }
  v5 = (FriendRootComponent_messageRequestCallback_o *)sub_1B64314(
                                                         FriendRootComponent_messageRequestCallback_TypeInfo,
                                                         method,
                                                         v2);
  FriendRootComponent_messageRequestCallback___ctor(
    v5,
    (Il2CppObject *)this,
    Method_FriendRootComponent__OnClickTabSearch_b__110_0__,
    v6);
  FriendRootComponent__messageDispChangeRequest(this, v5, v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendRootComponent__OnEndRequestDialog(
        FriendRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v4; // x1
  CommonUI_o *Instance; // x0

  if ( (byte_49F78AD & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    sub_1B640C8(&StringLiteral_11006/*"REQUEST_OK"*/, v4);
    byte_49F78AD = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.myFSM) == 0LL) )
  {
    sub_1B64324(Instance);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_11006/*"REQUEST_OK"*/, 0LL);
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
  __int64 v16; // x1
  __int64 v17; // x2
  FriendOperationItemListViewManager_CallbackFunc_o *v18; // x21
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x2
  const MethodInfo *v21; // x1
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  FriendSearchMenu_o *friendSearchMenu; // x20
  FriendSearchMenu_CallbackFunc_o *v24; // x21
  const MethodInfo *v25; // x3
  const MethodInfo *v26; // x3
  const MethodInfo *v27; // x1
  FriendOperationItemListViewManager_o *v28; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v29; // x21
  const MethodInfo *v30; // x3
  const MethodInfo *v31; // x2
  const MethodInfo *v32; // x1
  __int64 v33; // x1
  __int64 v34; // x2
  struct ClassButtonControlComponent_o *v35; // x8
  FriendSearchMenu_o *v36; // x20
  FriendSearchMenu_CallbackFunc_o *v37; // x21
  const MethodInfo *v38; // x3
  const MethodInfo *v39; // x3

  v3 = this;
  if ( (byte_49F78B2 & 1) == 0 )
  {
    sub_1B640C8(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_1B640C8(&FriendSearchMenu_CallbackFunc_TypeInfo, v4);
    sub_1B640C8(&Method_FriendRootComponent_OnSelectFriendItem__, v5);
    sub_1B640C8(&Method_FriendRootComponent_OnSelectSearchFriend__, v6);
    this = (FriendRootComponent_o *)sub_1B640C8(&StringLiteral_5442/*"END_ACTION"*/, v7);
    byte_49F78B2 = 1;
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
      v12 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1B64314(
                                                                   FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                                   method,
                                                                   v2);
      FriendOperationItemListViewManager_CallbackFunc___ctor(
        v12,
        (Il2CppObject *)v3,
        (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
        v13);
      if ( !v11 )
        goto LABEL_39;
      v11->fields.callbackFunc = v12;
      sub_1B6406C(&v11->fields.callbackFunc);
      FriendOperationItemListViewManager__SetMode_30645516(v11, 2, v14);
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
      v18 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1B64314(
                                                                   FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                                   v16,
                                                                   v17);
      FriendOperationItemListViewManager_CallbackFunc___ctor(
        v18,
        (Il2CppObject *)v3,
        (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
        v19);
      if ( !v15 )
        goto LABEL_39;
      v15->fields.callbackFunc = v18;
      sub_1B6406C(&v15->fields.callbackFunc);
      FriendOperationItemListViewManager__SetMode_30645516(v15, 2, v20);
      classButtonControl = v3->fields.classButtonControl;
      if ( !classButtonControl )
        goto LABEL_39;
      classButtonControl->fields.updateEnable = 1;
      FriendRootComponent__RefreshInfo(v3, v21);
      goto LABEL_18;
    case 0x11:
      v3->fields.state = 18;
      return;
    case 0x12:
      v3->fields.state = 19;
      v28 = v3->fields.operationItemListViewManager;
      v29 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1B64314(
                                                                   FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                                   method,
                                                                   v2);
      FriendOperationItemListViewManager_CallbackFunc___ctor(
        v29,
        (Il2CppObject *)v3,
        (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
        v30);
      if ( !v28 )
        goto LABEL_39;
      v28->fields.callbackFunc = v29;
      sub_1B6406C(&v28->fields.callbackFunc);
      FriendOperationItemListViewManager__SetMode_30645516(v28, 2, v31);
      goto LABEL_28;
    case 0x14:
    case 0x15:
      v3->fields.state = 23;
      friendSearchMenu = v3->fields.friendSearchMenu;
      v24 = (FriendSearchMenu_CallbackFunc_o *)sub_1B64314(FriendSearchMenu_CallbackFunc_TypeInfo, method, v2);
      FriendSearchMenu_CallbackFunc___ctor(
        v24,
        (Il2CppObject *)v3,
        Method_FriendRootComponent_OnSelectSearchFriend__,
        v25);
      if ( !friendSearchMenu )
        goto LABEL_39;
      FriendSearchMenu__Open(friendSearchMenu, v24, 0, v26);
      operationItemListViewManager = v3->fields.operationItemListViewManager;
      if ( !operationItemListViewManager )
        goto LABEL_39;
      FriendOperationItemListViewManager__DestroyList(operationItemListViewManager, v27);
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
        (System_String_o *)StringLiteral_5442/*"END_ACTION"*/,
        0LL);
      break;
    case 0x16:
      jumpTabKind = v3->fields.jumpTabKind;
      v3->fields.state = 23;
      if ( jumpTabKind == 3 )
        FriendRootComponent__set_tabKind(this, 2, v2);
      FriendRootComponent__RefreshTab(v3, method);
      FriendRootComponent__RefreshInfo(v3, v32);
      v35 = v3->fields.classButtonControl;
      if ( !v35 )
        goto LABEL_39;
      v35->fields.updateEnable = 1;
      v36 = v3->fields.friendSearchMenu;
      v37 = (FriendSearchMenu_CallbackFunc_o *)sub_1B64314(FriendSearchMenu_CallbackFunc_TypeInfo, v33, v34);
      FriendSearchMenu_CallbackFunc___ctor(
        v37,
        (Il2CppObject *)v3,
        Method_FriendRootComponent_OnSelectSearchFriend__,
        v38);
      if ( !v36 )
        goto LABEL_39;
      FriendSearchMenu__Open(v36, v37, 1, v39);
LABEL_18:
      operationItemListViewManager = (FriendOperationItemListViewManager_o *)v3->fields.myFSM;
      if ( !operationItemListViewManager )
LABEL_39:
        sub_1B64324(operationItemListViewManager);
      PlayMakerFSM__SendEvent(
        (PlayMakerFSM_o *)operationItemListViewManager,
        (System_String_o *)StringLiteral_5442/*"END_ACTION"*/,
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
  __int64 v38; // x1
  SkillInfo_o *v39; // x22
  _QWORD *v40; // x0
  System_Reflection_MethodBase_o *v41; // x0
  System_String_o *v42; // x20
  System_String_o *v43; // x21
  Il2CppObject *v44; // x0
  System_String_o *v45; // x0
  __int64 v46; // x1
  __int64 v47; // x2
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
  __int64 v59; // x2
  __int64 v60; // x20
  SkillInfo_o *v61; // x25
  Il2CppObject *Entity; // x21
  DataManager_o *v63; // x20
  System_String_o *v64; // x21
  System_String_o *v65; // x22
  Il2CppObject *v66; // x0
  System_String_o *v67; // x0
  System_String_o *v68; // x21
  Il2CppObject *v69; // x0
  System_String_o *v70; // x20
  _QWORD *v71; // x0
  System_Reflection_MethodBase_o *v72; // x0
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 *v75; // x8
  _QWORD *v76; // x0
  System_Reflection_MethodBase_o *v77; // x0
  _QWORD *v78; // x0
  System_Reflection_MethodBase_o *v79; // x0
  _QWORD *v80; // x0
  System_Reflection_MethodBase_o *v81; // x0
  _QWORD *v82; // x0
  System_Reflection_MethodBase_o *v83; // x0
  const MethodInfo *v84; // x2
  DataManager_o *v85; // x8
  const MethodInfo *v86; // x2
  _QWORD *v87; // x0
  System_Reflection_MethodBase_o *v88; // x0
  const MethodInfo *v89; // x2
  DataManager_o *v90; // x8
  Il2CppObject *v91; // x9
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  __int64 v93; // x1
  const MethodInfo *v94; // x2
  _QWORD *v95; // x0
  System_Reflection_MethodBase_o *v96; // x0
  const MethodInfo *v97; // x2
  FriendOperationItemListViewItem_o *v98; // x20
  ServantLeaderInfo_o *ServantLeader; // x0
  EquipTargetInfo_o *EquipTargetInfo; // x0
  EquipTargetInfo_o *v101; // x21
  __int64 v102; // x22
  __int64 v103; // x23
  _QWORD *v104; // x0
  System_Reflection_MethodBase_o *v105; // x0
  const MethodInfo *v106; // x3
  int32_t v107; // w2
  FriendWarningDialog_o *friendWarningDialog; // x20
  FriendWarningDialog_CallbackFunc_o *v109; // x21
  const MethodInfo *v110; // x3
  const MethodInfo *v111; // x3
  _QWORD *v112; // x0
  System_Reflection_MethodBase_o *v113; // x0
  struct FriendOperationItemListViewManager_CallbackFunc_o *v114; // x21
  const MethodInfo *v115; // x2
  FriendOperationItemListViewItem_o *Item; // x0
  FriendOperationItemListViewItem_o *v117; // x20
  _QWORD *v118; // x0
  System_Reflection_MethodBase_o *v119; // x0
  int m_CancellationTokenSource; // [xsp+8h] [xbp-78h] BYREF
  int32_t lv; // [xsp+Ch] [xbp-74h] BYREF
  System_String_o *detail; // [xsp+10h] [xbp-70h] BYREF
  System_String_o *name; // [xsp+18h] [xbp-68h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+20h] [xbp-60h] BYREF
  System_String_o *v125; // [xsp+28h] [xbp-58h] BYREF
  System_String_o *v126; // [xsp+30h] [xbp-50h] BYREF
  SkillInfo_array *v127; // [xsp+38h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v128; // 0:x0.16

  if ( (byte_49F78C2 & 1) == 0 )
  {
    sub_1B640C8(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&kind);
    sub_1B640C8(&FriendWarningDialog_CallbackFunc_TypeInfo, v7);
    sub_1B640C8(&Method_DataManager_GetMasterData_SkillLvMaster___, v8);
    sub_1B640C8(&Method_DataManager_GetMasterData_SkillMaster___, v9);
    sub_1B640C8(&Method_DataManager_GetMasterData_TblFriendMaster___, v10);
    sub_1B640C8(&Method_DataManager_GetMaster_SkillMaster___, v11);
    sub_1B640C8(&DataManager_TypeInfo, v12);
    sub_1B640C8(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v13);
    sub_1B640C8(&Method_FriendRootComponent_EndMaxFriendWarning__, v14);
    sub_1B640C8(&Method_FriendRootComponent_OnSelectFriendItem__, v15);
    sub_1B640C8(&int_TypeInfo, v16);
    sub_1B640C8(&LocalizationManager_TypeInfo, v17);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v19);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_1B640C8(&StringLiteral_8586/*"MENU_SELECT_ITEM_ACCEPT"*/, v21);
    sub_1B640C8(&StringLiteral_117/*" "*/, v22);
    sub_1B640C8(&StringLiteral_8592/*"MENU_SELECT_ITEM_REMOVE_FOLLOW"*/, v23);
    sub_1B640C8(&StringLiteral_8587/*"MENU_SELECT_ITEM_CANCEL"*/, v24);
    sub_1B640C8(&StringLiteral_8482/*"MASTER_EQSKILL_LV_TXT"*/, v25);
    sub_1B640C8(&StringLiteral_8589/*"MENU_SELECT_ITEM_OFFER"*/, v26);
    sub_1B640C8(&StringLiteral_2963/*"BATTLE_SKILLCHARGETURN"*/, v27);
    sub_1B640C8(&StringLiteral_8590/*"MENU_SELECT_ITEM_REJECT"*/, v28);
    sub_1B640C8(&StringLiteral_1/*""*/, v29);
    sub_1B640C8(&StringLiteral_8591/*"MENU_SELECT_ITEM_REMOVE"*/, v30);
    byte_49F78C2 = 1;
  }
  v126 = 0LL;
  v127 = 0LL;
  skillInfoList = 0LL;
  v125 = 0LL;
  detail = 0LL;
  name = 0LL;
  this->fields.selectItemNum = n;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_133;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_TblFriendMaster___);
  switch ( kind )
  {
    case 1:
    case 2:
    case 3:
      v54 = Method_FriendRootComponent_OnSelectFriendItem__;
      if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
        v54 = (_QWORD *)sub_1B640E0();
      v55 = (System_Reflection_MethodBase_o *)sub_1B640AC(v54, v54[4]);
      OverwriteAssetSoundName__PlaySystemSe(v55, 0, 0LL);
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
        v60 = 1LL;
      else
        v60 = 2LL * (kind == 3);
      Instance = (DataManager_o *)FriendOperationItemListViewItem__GetSkillInfo(v57, &v127, 0LL);
      if ( !v127 )
        goto LABEL_133;
      if ( (unsigned int)v60 >= v127->max_length )
        goto LABEL_134;
      v61 = v127->m_Items[v60];
      if ( !v61 || v61->fields.id < 1 || v61->fields.lv < 1 )
        goto LABEL_55;
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_133;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SkillMaster___);
      if ( !Instance )
        goto LABEL_133;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                 v61->fields.id,
                 (const MethodInfo_30D3EA4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_133;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SkillLvMaster___);
      if ( !Instance )
        goto LABEL_133;
      Instance = (DataManager_o *)SkillLvMaster__GetEntity(
                                    (SkillLvMaster_o *)Instance,
                                    v61->fields.id,
                                    v61->fields.lv,
                                    0LL);
      if ( !Entity )
        goto LABEL_133;
      v63 = Instance;
      SkillEntity__getSkillMessageInfo((SkillEntity_o *)Entity, &v126, &v125, v61->fields.lv, 0LL);
      v64 = v126;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v65 = LocalizationManager__Get((System_String_o *)StringLiteral_8482/*"MASTER_EQSKILL_LV_TXT"*/, 0LL);
      lv = v61->fields.lv;
      v66 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv);
      v67 = System_String__Format(v65, v66, 0LL);
      v126 = System_String__Concat_61386656(v64, (System_String_o *)StringLiteral_117/*" "*/, v67, 0LL);
      Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2963/*"BATTLE_SKILLCHARGETURN"*/, 0LL);
      if ( !v63 )
        goto LABEL_133;
      v68 = (System_String_o *)Instance;
      m_CancellationTokenSource = (int)v63->fields.m_CancellationTokenSource;
      v69 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &m_CancellationTokenSource);
      v70 = System_String__Format(v68, v69, 0LL);
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !Instance )
        goto LABEL_133;
      CommonUI__OpenDetailLongInfoDialog((CommonUI_o *)Instance, v126, v70, v125, 1, 0, 0LL);
LABEL_55:
      operationItemListViewManager = this->fields.operationItemListViewManager;
      v51 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1B64314(
                                                                   FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                                   v38,
                                                                   v59);
      v53 = (int)Method_FriendRootComponent_OnSelectFriendItem__;
      goto LABEL_123;
    case 4:
      v71 = Method_FriendRootComponent_OnSelectFriendItem__;
      if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
        v71 = (_QWORD *)sub_1B640E0();
      v72 = (System_Reflection_MethodBase_o *)sub_1B640AC(v71, v71[4]);
      OverwriteAssetSoundName__PlaySystemSe(v72, 0, 0LL);
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
      v75 = &StringLiteral_8589/*"MENU_SELECT_ITEM_OFFER"*/;
      goto LABEL_126;
    case 5:
      v76 = Method_FriendRootComponent_OnSelectFriendItem__;
      if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
        v76 = (_QWORD *)sub_1B640E0();
      v77 = (System_Reflection_MethodBase_o *)sub_1B640AC(v76, v76[4]);
      OverwriteAssetSoundName__PlaySystemSe(v77, 0, 0LL);
      if ( !MasterData_object )
        goto LABEL_133;
      Instance = (DataManager_o *)TblFriendMaster__GetList((TblFriendMaster_o *)MasterData_object, 3, 0LL);
      if ( !Instance || !SelfUserGame )
        goto LABEL_133;
      if ( SelfUserGame->fields.friendKeep <= SLODWORD(Instance->fields.m_CancellationTokenSource) )
      {
LABEL_117:
        friendWarningDialog = this->fields.friendWarningDialog;
        v109 = (FriendWarningDialog_CallbackFunc_o *)sub_1B64314(FriendWarningDialog_CallbackFunc_TypeInfo, v73, v74);
        FriendWarningDialog_CallbackFunc___ctor(
          v109,
          (Il2CppObject *)this,
          Method_FriendRootComponent_EndMaxFriendWarning__,
          v110);
        if ( friendWarningDialog )
        {
          FriendWarningDialog__Open(friendWarningDialog, 1, v109, v111);
          return;
        }
LABEL_133:
        sub_1B64324(Instance);
      }
      Instance = (DataManager_o *)this->fields.myFSM;
      if ( !Instance )
        goto LABEL_133;
      v75 = &StringLiteral_8586/*"MENU_SELECT_ITEM_ACCEPT"*/;
LABEL_126:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v75, 0LL);
      return;
    case 6:
      v78 = Method_FriendRootComponent_OnSelectFriendItem__;
      if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
        v78 = (_QWORD *)sub_1B640E0();
      v79 = (System_Reflection_MethodBase_o *)sub_1B640AC(v78, v78[4]);
      OverwriteAssetSoundName__PlaySystemSe(v79, 0, 0LL);
      Instance = (DataManager_o *)this->fields.myFSM;
      if ( !Instance )
        goto LABEL_133;
      v75 = &StringLiteral_8590/*"MENU_SELECT_ITEM_REJECT"*/;
      goto LABEL_126;
    case 7:
      v80 = Method_FriendRootComponent_OnSelectFriendItem__;
      if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
        v80 = (_QWORD *)sub_1B640E0();
      v81 = (System_Reflection_MethodBase_o *)sub_1B640AC(v80, v80[4]);
      OverwriteAssetSoundName__PlaySystemSe(v81, 0, 0LL);
      Instance = (DataManager_o *)this->fields.myFSM;
      if ( !Instance )
        goto LABEL_133;
      v75 = &StringLiteral_8587/*"MENU_SELECT_ITEM_CANCEL"*/;
      goto LABEL_126;
    case 8:
      v82 = Method_FriendRootComponent_OnSelectFriendItem__;
      if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
        v82 = (_QWORD *)sub_1B640E0();
      v83 = (System_Reflection_MethodBase_o *)sub_1B640AC(v82, v82[4]);
      OverwriteAssetSoundName__PlaySystemSe(v83, 0, 0LL);
      Instance = (DataManager_o *)this->fields.operationItemListViewManager;
      if ( !Instance )
        goto LABEL_133;
      Instance = (DataManager_o *)FriendOperationItemListViewManager__GetItem(
                                    (FriendOperationItemListViewManager_o *)Instance,
                                    this->fields.selectItemNum,
                                    v84);
      if ( !Instance )
        goto LABEL_133;
      v85 = Instance;
      Instance = (DataManager_o *)this->fields.myFSM;
      if ( !Instance )
        goto LABEL_133;
      if ( LODWORD(v85->fields.masterLoadThreads) == 9 )
        v75 = &StringLiteral_8592/*"MENU_SELECT_ITEM_REMOVE_FOLLOW"*/;
      else
        v75 = &StringLiteral_8591/*"MENU_SELECT_ITEM_REMOVE"*/;
      goto LABEL_126;
    case 11:
      v95 = Method_FriendRootComponent_OnSelectFriendItem__;
      if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
        v95 = (_QWORD *)sub_1B640E0();
      v96 = (System_Reflection_MethodBase_o *)sub_1B640AC(v95, v95[4]);
      OverwriteAssetSoundName__PlaySystemSe(v96, 0, 0LL);
      Instance = (DataManager_o *)this->fields.operationItemListViewManager;
      if ( !Instance )
        goto LABEL_133;
      Instance = (DataManager_o *)FriendOperationItemListViewManager__GetItem(
                                    (FriendOperationItemListViewManager_o *)Instance,
                                    this->fields.selectItemNum,
                                    v97);
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
      v98 = (FriendOperationItemListViewItem_o *)Instance;
      ServantLeader = FriendOperationItemListViewItem__get_ServantLeader(
                        (FriendOperationItemListViewItem_o *)Instance,
                        0LL);
      if ( !ServantLeader || !ServantLeaderInfo__IsHideEquip(ServantLeader, 0LL) )
      {
        EquipTargetInfo = FriendOperationItemListViewItem__get_EquipTargetInfo(v98, 0LL);
        if ( EquipTargetInfo )
        {
          v101 = EquipTargetInfo;
          v103 = *(_QWORD *)&EquipTargetInfo->fields.svtId.fields.currentCryptoKey;
          v102 = *(_QWORD *)&EquipTargetInfo->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v128.fields.currentCryptoKey = v103;
          *(_QWORD *)&v128.fields.fakeValue = v102;
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v128, 0LL) >= 1 )
          {
            v104 = Method_FriendRootComponent_OnSelectFriendItem__;
            if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
              v104 = (_QWORD *)sub_1B640E0();
            v105 = (System_Reflection_MethodBase_o *)sub_1B640AC(v104, v104[4]);
            OverwriteAssetSoundName__PlaySystemSe(v105, 0, 0LL);
            if ( v98->fields.kind == 9 )
              v107 = 14;
            else
              v107 = 13;
            FriendRootComponent__SelectShowServantEquip(this, v101, v107, v106);
            return;
          }
        }
      }
      v112 = Method_FriendRootComponent_OnSelectFriendItem__;
      if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
        v112 = (_QWORD *)sub_1B640E0();
      v113 = (System_Reflection_MethodBase_o *)sub_1B640AC(v112, v112[4]);
      OverwriteAssetSoundName__PlaySystemSe(v113, 2, 0LL);
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
      v39 = skillInfoList->m_Items[v37];
      if ( v39 && v39->fields.id >= 1 && v39->fields.lv >= 1 )
      {
        v40 = Method_FriendRootComponent_OnSelectFriendItem__;
        if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
          v40 = (_QWORD *)sub_1B640E0();
        v41 = (System_Reflection_MethodBase_o *)sub_1B640AC(v40, v40[4]);
        OverwriteAssetSoundName__PlaySystemSe(v41, 0, 0LL);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_SkillMaster___);
        if ( !Instance )
          goto LABEL_133;
        Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                      v39->fields.id,
                                      (const MethodInfo_30D3EA4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_133;
        SkillEntity__getSkillMessageInfo((SkillEntity_o *)Instance, &name, &detail, v39->fields.lv, 0LL);
        v42 = name;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v43 = LocalizationManager__Get((System_String_o *)StringLiteral_8482/*"MASTER_EQSKILL_LV_TXT"*/, 0LL);
        lv = v39->fields.lv;
        v44 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv);
        v45 = System_String__Format(v43, v44, 0LL);
        name = System_String__Concat_61386656(v42, (System_String_o *)StringLiteral_117/*" "*/, v45, 0LL);
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
          v48 = (_QWORD *)sub_1B640E0();
        v49 = (System_Reflection_MethodBase_o *)sub_1B640AC(v48, v48[4]);
        OverwriteAssetSoundName__PlaySystemSe(v49, 2, 0LL);
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
                 v86);
        if ( Item )
        {
          v117 = Item;
          v118 = Method_FriendRootComponent_OnSelectFriendItem__;
          if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
            v118 = (_QWORD *)sub_1B640E0();
          v119 = (System_Reflection_MethodBase_o *)sub_1B640AC(v118, v118[4]);
          OverwriteAssetSoundName__PlaySystemSe(v119, 11, 0LL);
          FriendOperationItemListViewItem__SwapLock(v117, 0LL);
        }
LABEL_28:
        operationItemListViewManager = this->fields.operationItemListViewManager;
        v51 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1B64314(
                                                                     FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                                     v46,
                                                                     v47);
        v53 = (int)Method_FriendRootComponent_OnSelectFriendItem__;
      }
      else
      {
        v87 = Method_FriendRootComponent_OnSelectFriendItem__;
        if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
          v87 = (_QWORD *)sub_1B640E0();
        v88 = (System_Reflection_MethodBase_o *)sub_1B640AC(v87, v87[4]);
        OverwriteAssetSoundName__PlaySystemSe(v88, 0, 0LL);
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
        Instance = (DataManager_o *)Instance->fields.context;
        if ( !Instance )
          goto LABEL_133;
        v91 = Instance->fields.lockCountObj;
        if ( !v91 )
          goto LABEL_133;
        if ( !LODWORD(v91[1].monitor) )
LABEL_134:
          sub_1B6432C(Instance, v38);
        ServantLeaderInfo = OtherUserGameEntity__getServantLeaderInfo(
                              (OtherUserGameEntity_o *)Instance,
                              v90[1].fields.m_CachedPtr,
                              0,
                              0,
                              (int32_t)v91[2].klass,
                              0LL);
        if ( ServantLeaderInfo )
        {
          FriendRootComponent__SelectShowServant(this, ServantLeaderInfo, v94);
          return;
        }
LABEL_122:
        operationItemListViewManager = this->fields.operationItemListViewManager;
        v51 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1B64314(
                                                                     FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                                     v93,
                                                                     v94);
        v53 = (int)Method_FriendRootComponent_OnSelectFriendItem__;
      }
LABEL_123:
      v114 = v51;
      FriendOperationItemListViewManager_CallbackFunc___ctor(v51, (Il2CppObject *)this, v53, v52);
      if ( operationItemListViewManager )
      {
        operationItemListViewManager->fields.callbackFunc = v114;
        sub_1B6406C(&operationItemListViewManager->fields.callbackFunc);
        FriendOperationItemListViewManager__SetMode_30645516(operationItemListViewManager, 2, v115);
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

  if ( (byte_49F78CC & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_8588/*"MENU_SELECT_ITEM_FOLLOW"*/, *(_QWORD *)&state);
    sub_1B640C8(&StringLiteral_8589/*"MENU_SELECT_ITEM_OFFER"*/, v7);
    sub_1B640C8(&StringLiteral_8572/*"MENU_CANCEL"*/, v8);
    byte_49F78CC = 1;
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
      v10 = &StringLiteral_8588/*"MENU_SELECT_ITEM_FOLLOW"*/;
      goto LABEL_12;
    }
LABEL_13:
    sub_1B64324(classButtonControl);
  }
  if ( state != 2 )
  {
    classButtonControl = (ClassButtonControlComponent_o *)this->fields.myFSM;
    if ( classButtonControl )
    {
      v10 = &StringLiteral_8572/*"MENU_CANCEL"*/;
      goto LABEL_12;
    }
    goto LABEL_13;
  }
  classButtonControl = (ClassButtonControlComponent_o *)this->fields.myFSM;
  if ( !classButtonControl )
    goto LABEL_13;
  v10 = &StringLiteral_8589/*"MENU_SELECT_ITEM_OFFER"*/;
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
  PlayMakerFSM_o *myFSM; // x0
  __int64 *v9; // x8

  if ( (byte_49F78CB & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_8573/*"MENU_DECIDE"*/, isDecide);
    sub_1B640C8(&StringLiteral_8572/*"MENU_CANCEL"*/, v7);
    byte_49F78CB = 1;
  }
  this->fields.selectFriendCode = friendCode;
  sub_1B6406C(&this->fields.selectFriendCode);
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1B64324(0LL);
  v9 = &StringLiteral_8573/*"MENU_DECIDE"*/;
  if ( !isDecide )
    v9 = &StringLiteral_8572/*"MENU_CANCEL"*/;
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
    sub_1B64324(operationItemListViewManager);
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
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *v12; // x0
  UILabel_o *friendCountLabel; // x23
  UserFollowMaster_o *v14; // x21
  System_String_o *v15; // x24
  Il2CppObject *v16; // x25
  Il2CppObject *v17; // x0
  UILabel_o *followCountLabel; // x22
  System_String_o *v19; // x23
  __int64 v20; // x0
  BalanceConfig_c *v21; // x8
  Il2CppObject *v22; // x21
  Il2CppObject *v23; // x0
  const MethodInfo *v24; // x1
  const MethodInfo *v25; // x1
  int32_t FollowNum; // [xsp+0h] [xbp-60h] BYREF
  int32_t FollowSum; // [xsp+4h] [xbp-5Ch] BYREF
  int32_t friendKeep; // [xsp+8h] [xbp-58h] BYREF
  int32_t FriendSum; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_49F7888 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_TblFriendMaster___, v3);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserFollowMaster___, v4);
    sub_1B640C8(&int_TypeInfo, v5);
    sub_1B640C8(&LocalizationManager_TypeInfo, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1B640C8(&StringLiteral_6507/*"FRIEND_SHOW_INFOMATION"*/, v8);
    byte_49F7888 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_TblFriendMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  v12 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserFollowMaster___);
  friendCountLabel = this->fields.friendCountLabel;
  v14 = (UserFollowMaster_o *)v12;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6507/*"FRIEND_SHOW_INFOMATION"*/, 0LL);
  if ( !MasterData_object )
    goto LABEL_16;
  v15 = (System_String_o *)Instance;
  FriendSum = TblFriendMaster__GetFriendSum((TblFriendMaster_o *)MasterData_object, 0LL);
  Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &FriendSum);
  if ( !SelfUserGame )
    goto LABEL_16;
  v16 = (Il2CppObject *)Instance;
  friendKeep = SelfUserGame->fields.friendKeep;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &friendKeep);
  Instance = (DataManager_o *)System_String__Format_61389768(v15, v16, v17, 0LL);
  if ( !friendCountLabel )
    goto LABEL_16;
  UILabel__set_text(friendCountLabel, (System_String_o *)Instance, 0LL);
  followCountLabel = this->fields.followCountLabel;
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6507/*"FRIEND_SHOW_INFOMATION"*/, 0LL);
  if ( !v14 )
    goto LABEL_16;
  v19 = (System_String_o *)Instance;
  FollowSum = UserFollowMaster__GetFollowSum(v14, 0LL);
  v20 = j_il2cpp_value_box_0(int_TypeInfo, &FollowSum);
  v21 = BalanceConfig_TypeInfo;
  v22 = (Il2CppObject *)v20;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v21 = BalanceConfig_TypeInfo;
  }
  FollowNum = v21->static_fields->FollowNum;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &FollowNum);
  Instance = (DataManager_o *)System_String__Format_61389768(v19, v22, v23, 0LL);
  if ( !followCountLabel
    || (UILabel__set_text(followCountLabel, (System_String_o *)Instance, 0LL),
        Instance = (DataManager_o *)TblFriendMaster__GetSum((TblFriendMaster_o *)MasterData_object, 2, 0LL),
        !this->fields.noticeNumber) )
  {
LABEL_16:
    sub_1B64324(Instance);
  }
  NoticeNumberComponent__SetNumber(this->fields.noticeNumber, (int32_t)Instance, 0LL);
  FriendRootComponent__CheckModeKind(this, v24);
  FriendRootComponent__CheckHelpUI(this, v25);
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

  if ( (byte_49F7887 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_17513/*"btn_txt_friendsearch_on"*/, method);
    sub_1B640C8(&StringLiteral_17512/*"btn_txt_friendsearch_off"*/, v3);
    sub_1B640C8(&StringLiteral_17405/*"btn_bg_09"*/, v4);
    sub_1B640C8(&StringLiteral_17511/*"btn_txt_friendrequest_on"*/, v5);
    sub_1B640C8(&StringLiteral_17509/*"btn_txt_friendlist_on"*/, v6);
    sub_1B640C8(&StringLiteral_17510/*"btn_txt_friendrequest_off"*/, v7);
    sub_1B640C8(&StringLiteral_17508/*"btn_txt_friendlist_off"*/, v8);
    sub_1B640C8(&StringLiteral_17424/*"btn_bg_on"*/, v9);
    byte_49F7887 = 1;
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
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17508/*"btn_txt_friendlist_off"*/, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabOfferedTitleSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17510/*"btn_txt_friendrequest_off"*/, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabSearchTitleSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17513/*"btn_txt_friendsearch_on"*/, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabFriendSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17405/*"btn_bg_09"*/, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabOfferedSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17405/*"btn_bg_09"*/, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabSearchSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      v14 = (System_String_o *)StringLiteral_17424/*"btn_bg_on"*/;
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
      sub_1B64324(tabFriendButton);
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
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17508/*"btn_txt_friendlist_off"*/, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabOfferedTitleSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17511/*"btn_txt_friendrequest_on"*/, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabSearchTitleSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17512/*"btn_txt_friendsearch_off"*/, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabFriendSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17405/*"btn_bg_09"*/, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabOfferedSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      v13 = (System_String_o *)StringLiteral_17424/*"btn_bg_on"*/;
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
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17509/*"btn_txt_friendlist_on"*/, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabOfferedTitleSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17510/*"btn_txt_friendrequest_off"*/, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabSearchTitleSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17512/*"btn_txt_friendsearch_off"*/, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabFriendSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17424/*"btn_bg_on"*/, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabOfferedSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      v13 = (System_String_o *)StringLiteral_17405/*"btn_bg_09"*/;
LABEL_43:
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, v13, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabSearchSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      v14 = (System_String_o *)StringLiteral_17405/*"btn_bg_09"*/;
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  NetworkManager_ResultCallbackFunc_o *v8; // x20
  FollowAssignRequest_o *Request_object; // x0
  struct OtherUserGameEntity_o *selectFriendEntity; // x8

  if ( (byte_49F78D1 & 1) == 0 )
  {
    sub_1B640C8(&Method_FriendRootComponent_EndRequestFollowAssign__, method);
    sub_1B640C8(&Method_NetworkManager_getRequest_FollowAssignRequest___, v4);
    sub_1B640C8(&NetworkManager_TypeInfo, v5);
    sub_1B640C8(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    sub_1B640C8(&StringLiteral_11004/*"REQUEST_NG"*/, v7);
    byte_49F78D1 = 1;
  }
  if ( this->fields.selectFriendEntity )
  {
    v8 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, method, v2);
    NetworkManager_ResultCallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_FriendRootComponent_EndRequestFollowAssign__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = (FollowAssignRequest_o *)NetworkManager__getRequest_object_(
                                                v8,
                                                (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_FollowAssignRequest___);
    selectFriendEntity = this->fields.selectFriendEntity;
    if ( selectFriendEntity && Request_object )
    {
      FollowAssignRequest__beginRequest(Request_object, selectFriendEntity->fields.userId, 0LL);
      return;
    }
LABEL_11:
    sub_1B64324(Request_object);
  }
  Request_object = (FollowAssignRequest_o *)this->fields.myFSM;
  if ( !Request_object )
    goto LABEL_11;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Request_object, (System_String_o *)StringLiteral_11004/*"REQUEST_NG"*/, 0LL);
}


void __fastcall FriendRootComponent__RequestFollowRemove(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Action_object__o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_49F78DA & 1) == 0 )
  {
    sub_1B640C8(&System_Action_string__TypeInfo, method);
    sub_1B640C8(&Method_FriendRootComponent__RequestFollowRemove_b__142_0__, v4);
    byte_49F78DA = 1;
  }
  v5 = (System_Action_object__o *)sub_1B64314(System_Action_string__TypeInfo, method, v2);
  System_Action_object____ctor(
    v5,
    (Il2CppObject *)this,
    Method_FriendRootComponent__RequestFollowRemove_b__142_0__,
    0LL);
  FriendRootComponent__FriendLockRequst(this, (System_Action_string__o *)v5, v6);
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
  __int64 v10; // x1
  __int64 v11; // x2
  struct OtherUserGameEntity_o *otherUserGameEntity; // x21
  NetworkManager_ResultCallbackFunc_o *v13; // x20

  if ( (byte_49F78A8 & 1) == 0 )
  {
    sub_1B640C8(&Method_FriendRootComponent_EndRequestFriend__, method);
    sub_1B640C8(&Method_NetworkManager_getRequest_FriendAcceptRequest___, v4);
    sub_1B640C8(&NetworkManager_TypeInfo, v5);
    sub_1B640C8(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    sub_1B640C8(&StringLiteral_11004/*"REQUEST_NG"*/, v7);
    byte_49F78A8 = 1;
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
      v13 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, v10, v11);
      NetworkManager_ResultCallbackFunc___ctor(
        v13,
        (Il2CppObject *)this,
        Method_FriendRootComponent_EndRequestFriend__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      operationItemListViewManager = (FriendOperationItemListViewManager_o *)NetworkManager__getRequest_object_(
                                                                               v13,
                                                                               (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_FriendAcceptRequest___);
      if ( operationItemListViewManager )
      {
        FriendAcceptRequest__beginRequest(
          (FriendAcceptRequest_o *)operationItemListViewManager,
          otherUserGameEntity->fields.userId,
          0LL);
        return;
      }
LABEL_12:
      sub_1B64324(operationItemListViewManager);
    }
  }
  operationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.myFSM;
  if ( !operationItemListViewManager )
    goto LABEL_12;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)operationItemListViewManager, (System_String_o *)StringLiteral_11004/*"REQUEST_NG"*/, 0LL);
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
  __int64 v10; // x1
  __int64 v11; // x2
  struct OtherUserGameEntity_o *otherUserGameEntity; // x21
  NetworkManager_ResultCallbackFunc_o *v13; // x20

  if ( (byte_49F78AA & 1) == 0 )
  {
    sub_1B640C8(&Method_FriendRootComponent_EndRequestFriend__, method);
    sub_1B640C8(&Method_NetworkManager_getRequest_FriendCancelRequest___, v4);
    sub_1B640C8(&NetworkManager_TypeInfo, v5);
    sub_1B640C8(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    sub_1B640C8(&StringLiteral_11004/*"REQUEST_NG"*/, v7);
    byte_49F78AA = 1;
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
      v13 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, v10, v11);
      NetworkManager_ResultCallbackFunc___ctor(
        v13,
        (Il2CppObject *)this,
        Method_FriendRootComponent_EndRequestFriend__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      operationItemListViewManager = (FriendOperationItemListViewManager_o *)NetworkManager__getRequest_object_(
                                                                               v13,
                                                                               (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_FriendCancelRequest___);
      if ( operationItemListViewManager )
      {
        FriendCancelRequest__beginRequest(
          (FriendCancelRequest_o *)operationItemListViewManager,
          otherUserGameEntity->fields.userId,
          0LL);
        return;
      }
LABEL_12:
      sub_1B64324(operationItemListViewManager);
    }
  }
  operationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.myFSM;
  if ( !operationItemListViewManager )
    goto LABEL_12;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)operationItemListViewManager, (System_String_o *)StringLiteral_11004/*"REQUEST_NG"*/, 0LL);
}


void __fastcall FriendRootComponent__RequestFriendOffer(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  NetworkManager_ResultCallbackFunc_o *v8; // x20
  FriendOfferRequest_o *Request_object; // x0
  struct OtherUserGameEntity_o *selectFriendEntity; // x8

  if ( (byte_49F78A6 & 1) == 0 )
  {
    sub_1B640C8(&Method_FriendRootComponent_EndRequestFriend__, method);
    sub_1B640C8(&Method_NetworkManager_getRequest_FriendOfferRequest___, v4);
    sub_1B640C8(&NetworkManager_TypeInfo, v5);
    sub_1B640C8(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    sub_1B640C8(&StringLiteral_11004/*"REQUEST_NG"*/, v7);
    byte_49F78A6 = 1;
  }
  if ( this->fields.selectFriendEntity )
  {
    v8 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, method, v2);
    NetworkManager_ResultCallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_FriendRootComponent_EndRequestFriend__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = (FriendOfferRequest_o *)NetworkManager__getRequest_object_(
                                               v8,
                                               (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_FriendOfferRequest___);
    selectFriendEntity = this->fields.selectFriendEntity;
    if ( selectFriendEntity && Request_object )
    {
      FriendOfferRequest__beginRequest(Request_object, selectFriendEntity->fields.userId, 0LL);
      return;
    }
LABEL_11:
    sub_1B64324(Request_object);
  }
  Request_object = (FriendOfferRequest_o *)this->fields.myFSM;
  if ( !Request_object )
    goto LABEL_11;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Request_object, (System_String_o *)StringLiteral_11004/*"REQUEST_NG"*/, 0LL);
}


void __fastcall FriendRootComponent__RequestFriendOffer2(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Action_object__o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_49F78A7 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_string__TypeInfo, method);
    sub_1B640C8(&Method_FriendRootComponent__RequestFriendOffer2_b__87_0__, v4);
    byte_49F78A7 = 1;
  }
  v5 = (System_Action_object__o *)sub_1B64314(System_Action_string__TypeInfo, method, v2);
  System_Action_object____ctor(v5, (Il2CppObject *)this, Method_FriendRootComponent__RequestFriendOffer2_b__87_0__, 0LL);
  FriendRootComponent__FriendLockRequst(this, (System_Action_string__o *)v5, v6);
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
  __int64 v13; // x1
  __int64 v14; // x2
  NetworkManager_ResultCallbackFunc_o *v15; // x20
  ProfileTopRequest_o *Request_object; // x0
  FriendWarningDialog_o *friendWarningDialog; // x20
  FriendWarningDialog_CallbackFunc_o *v18; // x21
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x3

  if ( (byte_49F78AE & 1) == 0 )
  {
    sub_1B640C8(&FriendWarningDialog_CallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_FriendRootComponent_EndNoSearchWarning__, v3);
    sub_1B640C8(&Method_FriendRootComponent_EndRequestFriendProfile__, v4);
    sub_1B640C8(&Method_NetworkManager_getRequest_ProfileTopRequest___, v5);
    sub_1B640C8(&NetworkManager_TypeInfo, v6);
    sub_1B640C8(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    sub_1B640C8(&StringLiteral_117/*" "*/, v8);
    sub_1B640C8(&StringLiteral_11004/*"REQUEST_NG"*/, v9);
    sub_1B640C8(&StringLiteral_1/*""*/, v10);
    byte_49F78AE = 1;
  }
  selectFriendCode = this->fields.selectFriendCode;
  if ( selectFriendCode )
  {
    v12 = System_String__Replace_61395016(
            selectFriendCode,
            (System_String_o *)StringLiteral_117/*" "*/,
            (System_String_o *)StringLiteral_1/*""*/,
            0LL);
    if ( System_String__op_Inequality(v12, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
    {
      v15 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, v13, v14);
      NetworkManager_ResultCallbackFunc___ctor(
        v15,
        (Il2CppObject *)this,
        Method_FriendRootComponent_EndRequestFriendProfile__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Request_object = (ProfileTopRequest_o *)NetworkManager__getRequest_object_(
                                                v15,
                                                (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_ProfileTopRequest___);
      if ( Request_object )
      {
        ProfileTopRequest__beginRequestFriendCode(Request_object, this->fields.selectFriendCode, 0LL);
        return;
      }
LABEL_13:
      sub_1B64324(Request_object);
    }
    friendWarningDialog = this->fields.friendWarningDialog;
    v18 = (FriendWarningDialog_CallbackFunc_o *)sub_1B64314(FriendWarningDialog_CallbackFunc_TypeInfo, v13, v14);
    FriendWarningDialog_CallbackFunc___ctor(
      v18,
      (Il2CppObject *)this,
      Method_FriendRootComponent_EndNoSearchWarning__,
      v19);
    if ( !friendWarningDialog )
      goto LABEL_13;
    FriendWarningDialog__Open(friendWarningDialog, 3, v18, v20);
  }
  this->fields.selectFriendEntity = 0LL;
  sub_1B6406C(&this->fields.selectFriendEntity);
  Request_object = (ProfileTopRequest_o *)this->fields.myFSM;
  if ( !Request_object )
    goto LABEL_13;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Request_object, (System_String_o *)StringLiteral_11004/*"REQUEST_NG"*/, 0LL);
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
  __int64 v12; // x1
  __int64 v13; // x2
  NetworkManager_ResultCallbackFunc_o *v14; // x20

  if ( (byte_49F78A9 & 1) == 0 )
  {
    sub_1B640C8(&Method_FriendRootComponent_EndRequestFriend__, method);
    sub_1B640C8(&Method_NetworkManager_getRequest_FriendRejectRequest___, v4);
    sub_1B640C8(&NetworkManager_TypeInfo, v5);
    sub_1B640C8(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1B640C8(&StringLiteral_11004/*"REQUEST_NG"*/, v8);
    byte_49F78A9 = 1;
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
      operationItemListViewManager = (FriendOperationItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( operationItemListViewManager )
      {
        CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)operationItemListViewManager, 0, 0LL);
        v14 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, v12, v13);
        NetworkManager_ResultCallbackFunc___ctor(
          v14,
          (Il2CppObject *)this,
          Method_FriendRootComponent_EndRequestFriend__,
          0LL);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        operationItemListViewManager = (FriendOperationItemListViewManager_o *)NetworkManager__getRequest_object_(
                                                                                 v14,
                                                                                 (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_FriendRejectRequest___);
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
      sub_1B64324(operationItemListViewManager);
    }
  }
  operationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.myFSM;
  if ( !operationItemListViewManager )
    goto LABEL_13;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)operationItemListViewManager, (System_String_o *)StringLiteral_11004/*"REQUEST_NG"*/, 0LL);
}


void __fastcall FriendRootComponent__RequestFriendRemove(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Action_object__o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_49F78AB & 1) == 0 )
  {
    sub_1B640C8(&System_Action_string__TypeInfo, method);
    sub_1B640C8(&Method_FriendRootComponent__RequestFriendRemove_b__91_0__, v4);
    byte_49F78AB = 1;
  }
  v5 = (System_Action_object__o *)sub_1B64314(System_Action_string__TypeInfo, method, v2);
  System_Action_object____ctor(v5, (Il2CppObject *)this, Method_FriendRootComponent__RequestFriendRemove_b__91_0__, 0LL);
  FriendRootComponent__FriendLockRequst(this, (System_Action_string__o *)v5, v6);
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
  UserFollowMaster_o *v15; // x20
  const MethodInfo *v16; // x1
  __int64 v17; // x2
  int32_t FollowSum; // w21
  BalanceConfig_c *v19; // x8
  struct OtherUserGameEntity_o *selectFriendEntity; // x8
  __int64 v21; // x1
  __int64 v22; // x2
  Il2CppObject *v23; // x20
  System_String_o *v24; // x21
  System_String_o *v25; // x22
  __int64 v26; // x1
  __int64 v27; // x2
  NotificationDialog_ClickDelegate_o *v28; // x23
  FriendWarningDialog_o *friendWarningDialog; // x20
  FriendWarningDialog_CallbackFunc_o *v30; // x21
  const MethodInfo *v31; // x3
  const MethodInfo *v32; // x3
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x20
  OtherUserGameEntity_o *v34; // x21
  FriendOperationConfirmMenu_CallbackFunc_o *v35; // x22

  if ( (byte_49F78CD & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, method);
    sub_1B640C8(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo, v3);
    sub_1B640C8(&FriendWarningDialog_CallbackFunc_TypeInfo, v4);
    sub_1B640C8(&NotificationDialog_ClickDelegate_TypeInfo, v5);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserFollowMaster___, v6);
    sub_1B640C8(&Method_FriendRootComponent_EndMaxFollowWarningOfferConfirm__, v7);
    sub_1B640C8(&Method_FriendRootComponent_SelectedFollowOfferConfirm__, v8);
    sub_1B640C8(&LocalizationManager_TypeInfo, v9);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1B640C8(&StringLiteral_2072/*"ALREADY_FOLLOWED_TITLE"*/, v12);
    sub_1B640C8(&StringLiteral_2071/*"ALREADY_FOLLOWED_MESSAGE"*/, v13);
    byte_49F78CD = 1;
  }
  if ( this->fields.state == 23 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserFollowMaster___);
      if ( Instance )
      {
        v15 = (UserFollowMaster_o *)Instance;
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
          v30 = (FriendWarningDialog_CallbackFunc_o *)sub_1B64314(FriendWarningDialog_CallbackFunc_TypeInfo, v16, v17);
          FriendWarningDialog_CallbackFunc___ctor(
            v30,
            (Il2CppObject *)this,
            Method_FriendRootComponent_EndMaxFollowWarningOfferConfirm__,
            v31);
          if ( friendWarningDialog )
          {
            FriendWarningDialog__Open(friendWarningDialog, 7, v30, v32);
            return;
          }
        }
        else
        {
          selectFriendEntity = this->fields.selectFriendEntity;
          if ( !selectFriendEntity )
          {
            FriendRootComponent__StartSearchInput(this, v16);
            return;
          }
          if ( UserFollowMaster__IsFollowUser(v15, selectFriendEntity->fields.userId, 0LL) )
          {
            this->fields.state = 44;
            v23 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v24 = LocalizationManager__Get((System_String_o *)StringLiteral_2072/*"ALREADY_FOLLOWED_TITLE"*/, 0LL);
            v25 = LocalizationManager__Get((System_String_o *)StringLiteral_2071/*"ALREADY_FOLLOWED_MESSAGE"*/, 0LL);
            v28 = (NotificationDialog_ClickDelegate_o *)sub_1B64314(NotificationDialog_ClickDelegate_TypeInfo, v26, v27);
            NotificationDialog_ClickDelegate___ctor(
              v28,
              (Il2CppObject *)this,
              Method_FriendRootComponent_EndMaxFollowWarningOfferConfirm__,
              0LL);
            if ( v23 )
            {
              CommonUI__OpenNotificationDialog_30347532(
                (CommonUI_o *)v23,
                v24,
                v25,
                v28,
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
            v34 = this->fields.selectFriendEntity;
            v35 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_1B64314(
                                                                 FriendOperationConfirmMenu_CallbackFunc_TypeInfo,
                                                                 v21,
                                                                 v22);
            FriendOperationConfirmMenu_CallbackFunc___ctor(
              v35,
              (Il2CppObject *)this,
              Method_FriendRootComponent_SelectedFollowOfferConfirm__,
              0LL);
            if ( operationConfirmMenu )
            {
              FriendOperationConfirmMenu__Open(operationConfirmMenu, 6, v34, v35, 0LL);
              return;
            }
          }
        }
      }
    }
    sub_1B64324(Instance);
  }
}


void __fastcall FriendRootComponent__SelectFollowRemoveConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x20
  OtherUserGameEntity_o *dragParentObject; // x21
  FriendOperationConfirmMenu_CallbackFunc_o *v10; // x22

  if ( (byte_49F78D4 & 1) == 0 )
  {
    sub_1B640C8(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_FriendRootComponent_SelectedFollowRemoveConfirm__, v4);
    byte_49F78D4 = 1;
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
          v10 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_1B64314(
                                                               FriendOperationConfirmMenu_CallbackFunc_TypeInfo,
                                                               v6,
                                                               v7),
          FriendOperationConfirmMenu_CallbackFunc___ctor(
            v10,
            (Il2CppObject *)this,
            Method_FriendRootComponent_SelectedFollowRemoveConfirm__,
            0LL),
          !operationConfirmMenu) )
    {
      sub_1B64324(operationItemListViewManager);
    }
    FriendOperationConfirmMenu__Open(operationConfirmMenu, 7, dragParentObject, v10, 0LL);
  }
}


void __fastcall FriendRootComponent__SelectFriendAcceptConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x20
  OtherUserGameEntity_o *dragParentObject; // x21
  FriendOperationConfirmMenu_CallbackFunc_o *v10; // x22

  if ( (byte_49F789A & 1) == 0 )
  {
    sub_1B640C8(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_FriendRootComponent_SelectedFriendAcceptConfirm__, v4);
    byte_49F789A = 1;
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
          v10 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_1B64314(
                                                               FriendOperationConfirmMenu_CallbackFunc_TypeInfo,
                                                               v6,
                                                               v7),
          FriendOperationConfirmMenu_CallbackFunc___ctor(
            v10,
            (Il2CppObject *)this,
            Method_FriendRootComponent_SelectedFriendAcceptConfirm__,
            0LL),
          !operationConfirmMenu) )
    {
      sub_1B64324(operationItemListViewManager);
    }
    FriendOperationConfirmMenu__Open(operationConfirmMenu, 2, dragParentObject, v10, 0LL);
  }
}


void __fastcall FriendRootComponent__SelectFriendCancelConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x20
  OtherUserGameEntity_o *dragParentObject; // x21
  FriendOperationConfirmMenu_CallbackFunc_o *v10; // x22

  if ( (byte_49F78A0 & 1) == 0 )
  {
    sub_1B640C8(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_FriendRootComponent_SelectedFriendCancelConfirm__, v4);
    byte_49F78A0 = 1;
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
          v10 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_1B64314(
                                                               FriendOperationConfirmMenu_CallbackFunc_TypeInfo,
                                                               v6,
                                                               v7),
          FriendOperationConfirmMenu_CallbackFunc___ctor(
            v10,
            (Il2CppObject *)this,
            Method_FriendRootComponent_SelectedFriendCancelConfirm__,
            0LL),
          !operationConfirmMenu) )
    {
      sub_1B64324(operationItemListViewManager);
    }
    FriendOperationConfirmMenu__Open(operationConfirmMenu, 4, dragParentObject, v10, 0LL);
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
  const MethodInfo *v12; // x2
  struct OtherUserGameEntity_o *selectFriendEntity; // x20
  struct FriendOperationConfirmMenu_o *v14; // x21
  FriendOperationConfirmMenu_CallbackFunc_o *v15; // x22
  FriendOperationConfirmMenu_o *v16; // x0
  OtherUserGameEntity_o *v17; // x2
  UserGameEntity_o *SelfUserGame; // x20
  __int64 v19; // x1
  __int64 v20; // x2
  struct FriendOperationConfirmMenu_o *operationConfirmMenu; // x20
  OtherUserGameEntity_o *context; // x21
  FriendWarningDialog_o *friendWarningDialog; // x20
  FriendWarningDialog_CallbackFunc_o *v24; // x21
  const MethodInfo *v25; // x3
  const MethodInfo *v26; // x3

  if ( (byte_49F7898 & 1) == 0 )
  {
    sub_1B640C8(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo, method);
    sub_1B640C8(&FriendWarningDialog_CallbackFunc_TypeInfo, v3);
    sub_1B640C8(&Method_DataManager_GetMasterData_TblFriendMaster___, v4);
    sub_1B640C8(&Method_FriendRootComponent_EndMaxFriendWarningOfferConfirm__, v5);
    sub_1B640C8(&Method_FriendRootComponent_SelectedFriendOfferConfirm__, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_49F7898 = 1;
  }
  state = this->fields.state;
  if ( state == 4 )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_27;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_TblFriendMaster___);
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
                                      v12);
        this->fields.state = 27;
        if ( Instance )
        {
          operationConfirmMenu = this->fields.operationConfirmMenu;
          context = (OtherUserGameEntity_o *)Instance->fields.context;
          v15 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_1B64314(
                                                               FriendOperationConfirmMenu_CallbackFunc_TypeInfo,
                                                               v19,
                                                               v20);
          FriendOperationConfirmMenu_CallbackFunc___ctor(
            v15,
            (Il2CppObject *)this,
            Method_FriendRootComponent_SelectedFriendOfferConfirm__,
            0LL);
          if ( operationConfirmMenu )
          {
            v16 = operationConfirmMenu;
            v17 = context;
            goto LABEL_22;
          }
        }
      }
LABEL_27:
      sub_1B64324(Instance);
    }
LABEL_24:
    this->fields.state = 29;
    friendWarningDialog = this->fields.friendWarningDialog;
    v24 = (FriendWarningDialog_CallbackFunc_o *)sub_1B64314(FriendWarningDialog_CallbackFunc_TypeInfo, v11, v12);
    FriendWarningDialog_CallbackFunc___ctor(
      v24,
      (Il2CppObject *)this,
      Method_FriendRootComponent_EndMaxFriendWarningOfferConfirm__,
      v25);
    if ( !friendWarningDialog )
      goto LABEL_27;
    FriendWarningDialog__Open(friendWarningDialog, 1, v24, v26);
    return;
  }
  if ( state != 23 )
    return;
  v9 = UserGameMaster__getSelfUserGame(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_TblFriendMaster___);
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
    v14 = this->fields.operationConfirmMenu;
    v15 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_1B64314(
                                                         FriendOperationConfirmMenu_CallbackFunc_TypeInfo,
                                                         v11,
                                                         v12);
    FriendOperationConfirmMenu_CallbackFunc___ctor(
      v15,
      (Il2CppObject *)this,
      Method_FriendRootComponent_SelectedFriendOfferConfirm__,
      0LL);
    if ( v14 )
    {
      v16 = v14;
      v17 = selectFriendEntity;
LABEL_22:
      FriendOperationConfirmMenu__Open(v16, 1, v17, v15, 0LL);
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
  __int64 v6; // x1
  __int64 v7; // x2
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x20
  OtherUserGameEntity_o *dragParentObject; // x21
  FriendOperationConfirmMenu_CallbackFunc_o *v10; // x22

  if ( (byte_49F789D & 1) == 0 )
  {
    sub_1B640C8(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_FriendRootComponent_SelectedFriendRejectConfirm__, v4);
    byte_49F789D = 1;
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
          v10 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_1B64314(
                                                               FriendOperationConfirmMenu_CallbackFunc_TypeInfo,
                                                               v6,
                                                               v7),
          FriendOperationConfirmMenu_CallbackFunc___ctor(
            v10,
            (Il2CppObject *)this,
            Method_FriendRootComponent_SelectedFriendRejectConfirm__,
            0LL),
          !operationConfirmMenu) )
    {
      sub_1B64324(operationItemListViewManager);
    }
    FriendOperationConfirmMenu__Open(operationConfirmMenu, 3, dragParentObject, v10, 0LL);
  }
}


void __fastcall FriendRootComponent__SelectFriendRemoveConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x20
  OtherUserGameEntity_o *dragParentObject; // x21
  FriendOperationConfirmMenu_CallbackFunc_o *v10; // x22

  if ( (byte_49F78A3 & 1) == 0 )
  {
    sub_1B640C8(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_FriendRootComponent_SelectedFriendRemoveConfirm__, v4);
    byte_49F78A3 = 1;
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
          v10 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_1B64314(
                                                               FriendOperationConfirmMenu_CallbackFunc_TypeInfo,
                                                               v6,
                                                               v7),
          FriendOperationConfirmMenu_CallbackFunc___ctor(
            v10,
            (Il2CppObject *)this,
            Method_FriendRootComponent_SelectedFriendRemoveConfirm__,
            0LL),
          !operationConfirmMenu) )
    {
      sub_1B64324(operationItemListViewManager);
    }
    FriendOperationConfirmMenu__Open(operationConfirmMenu, 5, dragParentObject, v10, 0LL);
  }
}


void __fastcall FriendRootComponent__SelectSearchFriend(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_49F7891 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_5442/*"END_ACTION"*/, method);
    byte_49F7891 = 1;
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
      sub_1B64324(0LL);
    PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_5442/*"END_ACTION"*/, 0LL);
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
  __int64 v9; // x1
  __int64 v10; // x2
  System_Action_o *v11; // x21
  const MethodInfo *v12; // x2

  if ( (byte_49F7889 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_FriendRootComponent_OnMoveEnd__, v3);
    sub_1B640C8(&StringLiteral_5442/*"END_ACTION"*/, v4);
    byte_49F7889 = 1;
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
            v11 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v9, v10);
            System_Action___ctor(v11, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0LL);
            if ( v8 )
            {
              v8->fields.callbackFunc2 = v11;
              sub_1B6406C(&v8->fields.callbackFunc2);
              FriendOperationItemListViewManager__SetMode_30645516(v8, 1, v12);
              return;
            }
          }
        }
      }
    }
LABEL_12:
    sub_1B64324(operationItemListViewManager);
  }
  operationItemListViewManager = (UnityEngine_Component_o *)this->fields.myFSM;
  if ( !operationItemListViewManager )
    goto LABEL_12;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)operationItemListViewManager, (System_String_o *)StringLiteral_5442/*"END_ACTION"*/, 0LL);
}


void __fastcall FriendRootComponent__SelectShowOffer(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *operationItemListViewManager; // x0
  const MethodInfo *v5; // x3
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  struct FriendOperationItemListViewManager_o *v7; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  System_Action_o *v10; // x21
  const MethodInfo *v11; // x2

  if ( (byte_49F788B & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_FriendRootComponent_OnMoveEnd__, v3);
    byte_49F788B = 1;
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
          v10 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v8, v9),
          System_Action___ctor(v10, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0LL),
          !v7) )
    {
LABEL_11:
      sub_1B64324(operationItemListViewManager);
    }
    v7->fields.callbackFunc2 = v10;
    sub_1B6406C(&v7->fields.callbackFunc2);
    FriendOperationItemListViewManager__SetMode_30645516(v7, 1, v11);
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
  __int64 v9; // x1
  __int64 v10; // x2
  System_Action_o *v11; // x21
  const MethodInfo *v12; // x2

  if ( (byte_49F788D & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_FriendRootComponent_OnMoveEnd__, v3);
    sub_1B640C8(&StringLiteral_5442/*"END_ACTION"*/, v4);
    byte_49F788D = 1;
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
            v11 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v9, v10);
            System_Action___ctor(v11, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0LL);
            if ( v8 )
            {
              v8->fields.callbackFunc2 = v11;
              sub_1B6406C(&v8->fields.callbackFunc2);
              FriendOperationItemListViewManager__SetMode_30645516(v8, 1, v12);
              return;
            }
          }
        }
      }
    }
LABEL_12:
    sub_1B64324(operationItemListViewManager);
  }
  operationItemListViewManager = (UnityEngine_Component_o *)this->fields.myFSM;
  if ( !operationItemListViewManager )
    goto LABEL_12;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)operationItemListViewManager, (System_String_o *)StringLiteral_5442/*"END_ACTION"*/, 0LL);
}


void __fastcall FriendRootComponent__SelectShowSearch(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *operationItemListViewManager; // x0
  struct FriendOperationItemListViewManager_o *v5; // x20
  const MethodInfo *v6; // x3
  FriendSearchMenu_o *friendSearchMenu; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  System_Action_o *v10; // x21
  const MethodInfo *v11; // x2
  struct FriendOperationItemListViewManager_o *v12; // x20
  __int64 v13; // x1
  __int64 v14; // x2
  System_Action_o *v15; // x21
  const MethodInfo *v16; // x2

  if ( (byte_49F788F & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_FriendRootComponent_OnMoveEnd__, v3);
    byte_49F788F = 1;
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
    sub_1B6406C(&v5->fields.friendCode);
    FriendOperationItemListViewManager__CreateList(v5, 0, 0, v6);
    this->fields.state = 17;
    friendSearchMenu = this->fields.friendSearchMenu;
    v10 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v8, v9);
    System_Action___ctor(v10, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0LL);
    if ( !friendSearchMenu
      || (FriendSearchMenu__Close_30671056(friendSearchMenu, v10, v11),
          v12 = this->fields.operationItemListViewManager,
          v15 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v13, v14),
          System_Action___ctor(v15, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0LL),
          !v12) )
    {
LABEL_11:
      sub_1B64324(operationItemListViewManager);
    }
    v12->fields.callbackFunc2 = v15;
    sub_1B6406C(&v12->fields.callbackFunc2);
    FriendOperationItemListViewManager__SetMode_30645516(v12, 1, v16);
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
  __int64 v9; // x1
  __int64 v10; // x2
  ServantStatusDialog_EndDelegate_o *v11; // x22
  __int64 v12; // x0
  int32_t v13; // w1

  if ( (byte_49F7895 & 1) == 0 )
  {
    sub_1B640C8(&ServantStatusDialog_EndDelegate_TypeInfo, servantLeaderInfo);
    sub_1B640C8(&Method_FriendRootComponent_EndShowServant__, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_49F7895 = 1;
  }
  state = this->fields.state;
  if ( state <= 0x13 && ((1 << state) & 0x84210) != 0 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v11 = (ServantStatusDialog_EndDelegate_o *)sub_1B64314(ServantStatusDialog_EndDelegate_TypeInfo, v9, v10);
    ServantStatusDialog_EndDelegate___ctor(v11, (Il2CppObject *)this, Method_FriendRootComponent_EndShowServant__, 0LL);
    if ( !Instance )
      sub_1B64324(v12);
    if ( state == 4 )
      v13 = 4;
    else
      v13 = 5;
    CommonUI__OpenServantStatusDialog_30357468((CommonUI_o *)Instance, v13, servantLeaderInfo, v11, 0LL);
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
  __int64 v10; // x1
  __int64 v11; // x2
  ServantStatusDialog_EndDelegate_o *v12; // x23
  __int64 v13; // x0

  if ( (byte_49F78BF & 1) == 0 )
  {
    sub_1B640C8(&ServantStatusDialog_EndDelegate_TypeInfo, equipInfo);
    sub_1B640C8(&Method_FriendRootComponent_EndShowServantEquip__, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    byte_49F78BF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = (ServantStatusDialog_EndDelegate_o *)sub_1B64314(ServantStatusDialog_EndDelegate_TypeInfo, v10, v11);
  ServantStatusDialog_EndDelegate___ctor(
    v12,
    (Il2CppObject *)this,
    Method_FriendRootComponent_EndShowServantEquip__,
    0LL);
  if ( !Instance )
    sub_1B64324(v13);
  CommonUI__OpenServantEquipStatusDialog_30360564((CommonUI_o *)Instance, statusKind, equipInfo, v12, 0LL, 0LL);
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

  if ( (byte_49F78D0 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_8573/*"MENU_DECIDE"*/, isDecide);
    sub_1B640C8(&StringLiteral_8572/*"MENU_CANCEL"*/, v5);
    byte_49F78D0 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1B64324(0LL);
  v7 = &StringLiteral_8573/*"MENU_DECIDE"*/;
  if ( !isDecide )
    v7 = &StringLiteral_8572/*"MENU_CANCEL"*/;
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

  if ( (byte_49F78CA & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_8573/*"MENU_DECIDE"*/, isDecide);
    sub_1B640C8(&StringLiteral_8572/*"MENU_CANCEL"*/, v5);
    byte_49F78CA = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1B64324(0LL);
  v7 = &StringLiteral_8573/*"MENU_DECIDE"*/;
  if ( !isDecide )
    v7 = &StringLiteral_8572/*"MENU_CANCEL"*/;
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

  if ( (byte_49F78C6 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_8573/*"MENU_DECIDE"*/, isDecide);
    sub_1B640C8(&StringLiteral_8572/*"MENU_CANCEL"*/, v5);
    byte_49F78C6 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1B64324(0LL);
  v7 = &StringLiteral_8573/*"MENU_DECIDE"*/;
  if ( !isDecide )
    v7 = &StringLiteral_8572/*"MENU_CANCEL"*/;
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

  if ( (byte_49F78C8 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_8573/*"MENU_DECIDE"*/, isDecide);
    sub_1B640C8(&StringLiteral_8572/*"MENU_CANCEL"*/, v5);
    byte_49F78C8 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1B64324(0LL);
  v7 = &StringLiteral_8573/*"MENU_DECIDE"*/;
  if ( !isDecide )
    v7 = &StringLiteral_8572/*"MENU_CANCEL"*/;
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

  if ( (byte_49F78C5 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_8573/*"MENU_DECIDE"*/, isDecide);
    sub_1B640C8(&StringLiteral_8572/*"MENU_CANCEL"*/, v5);
    byte_49F78C5 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1B64324(0LL);
  v7 = &StringLiteral_8573/*"MENU_DECIDE"*/;
  if ( !isDecide )
    v7 = &StringLiteral_8572/*"MENU_CANCEL"*/;
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

  if ( (byte_49F78C7 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_8573/*"MENU_DECIDE"*/, isDecide);
    sub_1B640C8(&StringLiteral_8572/*"MENU_CANCEL"*/, v5);
    byte_49F78C7 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1B64324(0LL);
  v7 = &StringLiteral_8573/*"MENU_DECIDE"*/;
  if ( !isDecide )
    v7 = &StringLiteral_8572/*"MENU_CANCEL"*/;
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

  if ( (byte_49F78C9 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_8573/*"MENU_DECIDE"*/, isDecide);
    sub_1B640C8(&StringLiteral_8572/*"MENU_CANCEL"*/, v5);
    byte_49F78C9 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1B64324(0LL);
  v7 = &StringLiteral_8573/*"MENU_DECIDE"*/;
  if ( !isDecide )
    v7 = &StringLiteral_8572/*"MENU_CANCEL"*/;
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)*v7, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendRootComponent__SetActiveModeKindButtons(
        FriendRootComponent_o *this,
        bool isActive,
        const MethodInfo *method)
{
  bool v3; // w20
  float v5; // s0
  float v6; // s1
  float v7; // s2
  UnityEngine_GameObject_o *modeButtonParent; // x0
  float v9; // s8
  float v10; // s9
  float v11; // s10
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Vector3_o v13; // 0:s1.4,4:s2.4,8:s3.4

  v3 = isActive;
  if ( this->fields.isActiveModeKindButtons != isActive )
  {
    if ( isActive )
      *(UnityEngine_Vector3_o *)&v5 = FriendRootComponent__GetDisplayPositionModeKindButtons(
                                        this,
                                        (const MethodInfo *)isActive);
    else
      *(UnityEngine_Vector3_o *)&v5 = FriendRootComponent__GetHidePositionModeKindButtons(
                                        this,
                                        (const MethodInfo *)isActive);
    modeButtonParent = this->fields.modeButtonParent;
    v9 = v5;
    v10 = v6;
    v11 = v7;
    if ( !modeButtonParent
      || (gameObject = UnityEngine_GameObject__get_gameObject(modeButtonParent, 0LL),
          v13.fields.x = v9,
          v13.fields.y = v10,
          v13.fields.z = v11,
          (modeButtonParent = (UnityEngine_GameObject_o *)TweenPosition__Begin(gameObject, 0.2, v13, 0LL)) == 0LL) )
    {
      sub_1B64324(modeButtonParent);
    }
    LODWORD(modeButtonParent[1].monitor) = 3;
    this->fields.isActiveModeKindButtons = v3;
  }
}


void __fastcall FriendRootComponent__ShowSearchResult(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  FriendRootComponent_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  FriendSearchResultMenu_o *friendSearchResultMenu; // x20
  System_Action_o *v11; // x21
  const MethodInfo *v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  int32_t currentCursor; // w22
  FriendSearchResultMenu_o *v17; // x20
  OtherUserGameEntity_o *selectFriendEntity; // x21
  FriendSearchResultMenu_CallbackFunc_o *v19; // x23
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x4
  FriendSearchMenu_o *friendSearchMenu; // x20
  __int64 v23; // x1
  __int64 v24; // x2
  FriendSearchMenu_CallbackFunc_o *v25; // x21
  const MethodInfo *v26; // x3
  const MethodInfo *v27; // x3

  v3 = this;
  if ( (byte_49F7893 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&FriendSearchResultMenu_CallbackFunc_TypeInfo, v4);
    sub_1B640C8(&FriendSearchMenu_CallbackFunc_TypeInfo, v5);
    sub_1B640C8(&Method_FriendRootComponent_OnSelectOffer__, v6);
    sub_1B640C8(&Method_FriendRootComponent_OnSelectSearchFriend__, v7);
    sub_1B640C8(&Method_FriendRootComponent_ShowSearchResult__, v8);
    this = (FriendRootComponent_o *)sub_1B640C8(&StringLiteral_5442/*"END_ACTION"*/, v9);
    byte_49F7893 = 1;
  }
  if ( v3->fields.state == 23 )
  {
    friendSearchResultMenu = v3->fields.friendSearchResultMenu;
    if ( !friendSearchResultMenu )
      goto LABEL_14;
    if ( friendSearchResultMenu->fields.isOpen )
    {
      v11 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, method, v2);
      System_Action___ctor(v11, (Il2CppObject *)v3, Method_FriendRootComponent_ShowSearchResult__, 0LL);
      FriendSearchResultMenu__Close_30673220(friendSearchResultMenu, v11, v12);
      return;
    }
    this = (FriendRootComponent_o *)UnityEngine_Component__get_gameObject(
                                      (UnityEngine_Component_o *)v3->fields.friendSearchResultMenu,
                                      0LL);
    if ( !this )
      goto LABEL_14;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    classButtonControl = v3->fields.classButtonControl;
    if ( !classButtonControl )
      goto LABEL_14;
    currentCursor = classButtonControl->fields.currentCursor;
    v17 = v3->fields.friendSearchResultMenu;
    selectFriendEntity = v3->fields.selectFriendEntity;
    v19 = (FriendSearchResultMenu_CallbackFunc_o *)sub_1B64314(FriendSearchResultMenu_CallbackFunc_TypeInfo, v13, v14);
    FriendSearchResultMenu_CallbackFunc___ctor(v19, (Il2CppObject *)v3, Method_FriendRootComponent_OnSelectOffer__, v20);
    if ( !v17
      || (FriendSearchResultMenu__Open(v17, selectFriendEntity, currentCursor, v19, v21),
          friendSearchMenu = v3->fields.friendSearchMenu,
          v25 = (FriendSearchMenu_CallbackFunc_o *)sub_1B64314(FriendSearchMenu_CallbackFunc_TypeInfo, v23, v24),
          FriendSearchMenu_CallbackFunc___ctor(
            v25,
            (Il2CppObject *)v3,
            Method_FriendRootComponent_OnSelectSearchFriend__,
            v26),
          !friendSearchMenu)
      || (FriendSearchMenu__Open(friendSearchMenu, v25, 0, v27),
          (this = (FriendRootComponent_o *)v3->fields.myFSM) == 0LL) )
    {
LABEL_14:
      sub_1B64324(this);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_5442/*"END_ACTION"*/, 0LL);
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
  if ( (byte_49F7894 & 1) == 0 )
  {
    sub_1B640C8(&FriendSearchResultMenu_CallbackFunc_TypeInfo, method);
    sub_1B640C8(&FriendSearchMenu_CallbackFunc_TypeInfo, v4);
    sub_1B640C8(&Method_FriendRootComponent_OnSelectOffer__, v5);
    this = (FriendRootComponent_o *)sub_1B640C8(&Method_FriendRootComponent_OnSelectSearchFriend__, v6);
    byte_49F7894 = 1;
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
      v11 = (FriendSearchResultMenu_CallbackFunc_o *)sub_1B64314(
                                                       FriendSearchResultMenu_CallbackFunc_TypeInfo,
                                                       method,
                                                       v2);
      FriendSearchResultMenu_CallbackFunc___ctor(
        v11,
        (Il2CppObject *)v3,
        Method_FriendRootComponent_OnSelectOffer__,
        v12);
      FriendSearchResultMenu__Open(friendSearchResultMenu, selectFriendEntity, currentCursor, v11, v13);
    }
    else
    {
      FriendSearchResultMenu__Close_30673220(v3->fields.friendSearchResultMenu, 0LL, v2);
    }
  }
  friendSearchMenu = v3->fields.friendSearchMenu;
  v15 = (FriendSearchMenu_CallbackFunc_o *)sub_1B64314(FriendSearchMenu_CallbackFunc_TypeInfo, method, v2);
  FriendSearchMenu_CallbackFunc___ctor(v15, (Il2CppObject *)v3, Method_FriendRootComponent_OnSelectSearchFriend__, v16);
  if ( !friendSearchMenu )
LABEL_11:
    sub_1B64324(this);
  FriendSearchMenu__Open(friendSearchMenu, v15, 0, v17);
}


void __fastcall FriendRootComponent___OnClickBack_b__99_0(
        FriendRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x2
  System_Action_object__o *v9; // x20
  const MethodInfo *v10; // x2

  v4 = (Il2CppObject *)this;
  if ( (byte_49F78E0 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_string__TypeInfo, result);
    sub_1B640C8(&Method_FriendRootComponent__OnClickBack_b__99_1__, v5);
    this = (FriendRootComponent_o *)sub_1B640C8(&StringLiteral_22137/*"ok"*/, v6);
    byte_49F78E0 = 1;
  }
  if ( !result )
    sub_1B64324(this);
  if ( System_String__Equals_61383712(result, (System_String_o *)StringLiteral_22137/*"ok"*/, 0LL) )
  {
    v9 = (System_Action_object__o *)sub_1B64314(System_Action_string__TypeInfo, v7, v8);
    System_Action_object____ctor(v9, v4, Method_FriendRootComponent__OnClickBack_b__99_1__, 0LL);
    FriendRootComponent__FriendLockRequst((FriendRootComponent_o *)v4, (System_Action_string__o *)v9, v10);
  }
}


void __fastcall FriendRootComponent___OnClickBack_b__99_1(
        FriendRootComponent_o *this,
        System_String_o *res,
        const MethodInfo *method)
{
  FriendRootComponent_o *v4; // x19
  __int64 v5; // x1
  const MethodInfo *v6; // x1

  v4 = this;
  if ( (byte_49F78E1 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_22137/*"ok"*/, res);
    this = (FriendRootComponent_o *)sub_1B640C8(&StringLiteral_3506/*"CLICK_BACK"*/, v5);
    byte_49F78E1 = 1;
  }
  if ( !res )
    goto LABEL_9;
  if ( System_String__Equals_61383712(res, (System_String_o *)StringLiteral_22137/*"ok"*/, 0LL) )
  {
    this = (FriendRootComponent_o *)v4->fields.friendSearchMenu;
    if ( this )
    {
      FriendSearchMenu__BlockInput((FriendSearchMenu_o *)this, v6);
      this = (FriendRootComponent_o *)v4->fields.myFSM;
      if ( this )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3506/*"CLICK_BACK"*/, 0LL);
        return;
      }
    }
LABEL_9:
    sub_1B64324(this);
  }
}


void __fastcall FriendRootComponent___OnClickModeUserDetail_b__101_0(
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
  if ( (byte_49F78E4 & 1) == 0 )
  {
    sub_1B640C8(&Method_FriendRootComponent__OnClickModeUserDetail_b__101_0__, res);
    this = (FriendRootComponent_o *)sub_1B640C8(&StringLiteral_22137/*"ok"*/, v5);
    byte_49F78E4 = 1;
  }
  if ( !res )
    sub_1B64324(this);
  if ( System_String__Equals_61383712(res, (System_String_o *)StringLiteral_22137/*"ok"*/, 0LL) )
  {
    v6 = Method_FriendRootComponent__OnClickModeUserDetail_b__101_0__;
    if ( (*((_BYTE *)Method_FriendRootComponent__OnClickModeUserDetail_b__101_0__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1B640E0();
    v7 = (System_Reflection_MethodBase_o *)sub_1B640AC(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    v4->fields.currentModeKind = 0;
    FriendRootComponent__RefreshInfo(v4, v8);
  }
}


void __fastcall FriendRootComponent___OnClickTabFriend_b__108_0(
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
  if ( (byte_49F78E5 & 1) == 0 )
  {
    sub_1B640C8(&Method_FriendRootComponent__OnClickTabFriend_b__108_0__, res);
    sub_1B640C8(&StringLiteral_22137/*"ok"*/, v5);
    this = (FriendRootComponent_o *)sub_1B640C8(&StringLiteral_3551/*"CLICK_TAB"*/, v6);
    byte_49F78E5 = 1;
  }
  if ( !res )
    goto LABEL_24;
  this = (FriendRootComponent_o *)System_String__Equals_61383712(res, (System_String_o *)StringLiteral_22137/*"ok"*/, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    return;
  state = v4->fields.state;
  if ( state <= 9 )
  {
    if ( state != 4 && state != 9 )
      return;
LABEL_18:
    v11 = Method_FriendRootComponent__OnClickTabFriend_b__108_0__;
    if ( (*((_BYTE *)Method_FriendRootComponent__OnClickTabFriend_b__108_0__ + 83) & 2) != 0 )
      v11 = (_QWORD *)sub_1B640E0();
    v12 = (System_Reflection_MethodBase_o *)sub_1B640AC(v11, v11[4]);
    OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0LL);
    FriendRootComponent__set_tabKind(v13, 0, v14);
    FriendRootComponent__RefreshTab(v4, v15);
    classButtonControl = v4->fields.classButtonControl;
    if ( classButtonControl )
    {
      classButtonControl->fields.updateEnable = 0;
      this = (FriendRootComponent_o *)v4->fields.myFSM;
      if ( this )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3551/*"CLICK_TAB"*/, 0LL);
        return;
      }
    }
LABEL_24:
    sub_1B64324(this);
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


void __fastcall FriendRootComponent___OnClickTabOffered_b__109_0(
        FriendRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x2
  System_Action_object__o *v9; // x20
  const MethodInfo *v10; // x2

  v4 = (Il2CppObject *)this;
  if ( (byte_49F78E6 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_string__TypeInfo, result);
    sub_1B640C8(&Method_FriendRootComponent__OnClickTabOffered_b__109_1__, v5);
    this = (FriendRootComponent_o *)sub_1B640C8(&StringLiteral_22137/*"ok"*/, v6);
    byte_49F78E6 = 1;
  }
  if ( !result )
    sub_1B64324(this);
  if ( System_String__Equals_61383712(result, (System_String_o *)StringLiteral_22137/*"ok"*/, 0LL) )
  {
    v9 = (System_Action_object__o *)sub_1B64314(System_Action_string__TypeInfo, v7, v8);
    System_Action_object____ctor(v9, v4, (intptr_t)Method_FriendRootComponent__OnClickTabOffered_b__109_1__, 0LL);
    FriendRootComponent__FriendLockRequst((FriendRootComponent_o *)v4, (System_Action_string__o *)v9, v10);
  }
}


void __fastcall FriendRootComponent___OnClickTabOffered_b__109_1(
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
  if ( (byte_49F78E7 & 1) == 0 )
  {
    sub_1B640C8(&Method_FriendRootComponent__OnClickTabOffered_b__109_1__, res);
    sub_1B640C8(&StringLiteral_22137/*"ok"*/, v5);
    this = (FriendRootComponent_o *)sub_1B640C8(&StringLiteral_3551/*"CLICK_TAB"*/, v6);
    byte_49F78E7 = 1;
  }
  if ( !res )
    goto LABEL_24;
  this = (FriendRootComponent_o *)System_String__Equals_61383712(res, (System_String_o *)StringLiteral_22137/*"ok"*/, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    return;
  state = v4->fields.state;
  if ( state <= 9 )
  {
    if ( state != 4 && state != 9 )
      return;
LABEL_18:
    v11 = Method_FriendRootComponent__OnClickTabOffered_b__109_1__;
    if ( (*((_BYTE *)Method_FriendRootComponent__OnClickTabOffered_b__109_1__ + 83) & 2) != 0 )
      v11 = (_QWORD *)sub_1B640E0();
    v12 = (System_Reflection_MethodBase_o *)sub_1B640AC(v11, v11[4]);
    OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0LL);
    FriendRootComponent__set_tabKind(v13, 1, v14);
    FriendRootComponent__RefreshTab(v4, v15);
    classButtonControl = v4->fields.classButtonControl;
    if ( classButtonControl )
    {
      classButtonControl->fields.updateEnable = 0;
      this = (FriendRootComponent_o *)v4->fields.myFSM;
      if ( this )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3551/*"CLICK_TAB"*/, 0LL);
        return;
      }
    }
LABEL_24:
    sub_1B64324(this);
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


void __fastcall FriendRootComponent___OnClickTabSearch_b__110_0(
        FriendRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x2
  System_Action_object__o *v9; // x20
  const MethodInfo *v10; // x2

  v4 = (Il2CppObject *)this;
  if ( (byte_49F78E8 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_string__TypeInfo, result);
    sub_1B640C8(&Method_FriendRootComponent__OnClickTabSearch_b__110_1__, v5);
    this = (FriendRootComponent_o *)sub_1B640C8(&StringLiteral_22137/*"ok"*/, v6);
    byte_49F78E8 = 1;
  }
  if ( !result )
    sub_1B64324(this);
  if ( System_String__Equals_61383712(result, (System_String_o *)StringLiteral_22137/*"ok"*/, 0LL) )
  {
    v9 = (System_Action_object__o *)sub_1B64314(System_Action_string__TypeInfo, v7, v8);
    System_Action_object____ctor(v9, v4, (intptr_t)Method_FriendRootComponent__OnClickTabSearch_b__110_1__, 0LL);
    FriendRootComponent__FriendLockRequst((FriendRootComponent_o *)v4, (System_Action_string__o *)v9, v10);
  }
}


void __fastcall FriendRootComponent___OnClickTabSearch_b__110_1(
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
  if ( (byte_49F78E9 & 1) == 0 )
  {
    sub_1B640C8(&Method_FriendRootComponent__OnClickTabSearch_b__110_1__, res);
    sub_1B640C8(&StringLiteral_22137/*"ok"*/, v5);
    this = (FriendRootComponent_o *)sub_1B640C8(&StringLiteral_3551/*"CLICK_TAB"*/, v6);
    byte_49F78E9 = 1;
  }
  if ( !res )
    goto LABEL_17;
  if ( !System_String__Equals_61383712(res, (System_String_o *)StringLiteral_22137/*"ok"*/, 0LL) )
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
    v8 = Method_FriendRootComponent__OnClickTabSearch_b__110_1__;
    if ( (*((_BYTE *)Method_FriendRootComponent__OnClickTabSearch_b__110_1__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1B640E0();
    v9 = (System_Reflection_MethodBase_o *)sub_1B640AC(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
    FriendRootComponent__set_tabKind(v10, 2, v11);
    FriendRootComponent__RefreshTab(v4, v12);
    classButtonControl = v4->fields.classButtonControl;
    if ( classButtonControl )
    {
      classButtonControl->fields.updateEnable = 0;
      this = (FriendRootComponent_o *)v4->fields.myFSM;
      if ( this )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3551/*"CLICK_TAB"*/, 0LL);
        return;
      }
    }
LABEL_17:
    sub_1B64324(this);
  }
}


void __fastcall FriendRootComponent___RequestFollowRemove_b__142_0(
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
  __int64 v14; // x1
  __int64 v15; // x2
  NetworkManager_ResultCallbackFunc_o *v16; // x20

  v4 = this;
  if ( (byte_49F78EA & 1) == 0 )
  {
    sub_1B640C8(&Method_FriendRootComponent_EndRequestFollowRemove__, res);
    sub_1B640C8(&Method_NetworkManager_getRequest_FollowdRemoveRequest___, v5);
    sub_1B640C8(&NetworkManager_TypeInfo, v6);
    sub_1B640C8(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1B640C8(&StringLiteral_22137/*"ok"*/, v9);
    this = (FriendRootComponent_o *)sub_1B640C8(&StringLiteral_11004/*"REQUEST_NG"*/, v10);
    byte_49F78EA = 1;
  }
  if ( !res )
    goto LABEL_15;
  if ( System_String__Equals_61383712(res, (System_String_o *)StringLiteral_22137/*"ok"*/, 0LL) )
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
        this = (FriendRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( this )
        {
          CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)this, 0, 0LL);
          v16 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, v14, v15);
          NetworkManager_ResultCallbackFunc___ctor(
            v16,
            (Il2CppObject *)v4,
            Method_FriendRootComponent_EndRequestFollowRemove__,
            0LL);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          this = (FriendRootComponent_o *)NetworkManager__getRequest_object_(
                                            v16,
                                            (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_FollowdRemoveRequest___);
          if ( this )
          {
            FollowdRemoveRequest__beginRequest((FollowdRemoveRequest_o *)this, otherUserGameEntity->fields.userId, 0LL);
            return;
          }
        }
LABEL_15:
        sub_1B64324(this);
      }
    }
  }
  this = (FriendRootComponent_o *)v4->fields.myFSM;
  if ( !this )
    goto LABEL_15;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11004/*"REQUEST_NG"*/, 0LL);
}


void __fastcall FriendRootComponent___RequestFriendOffer2_b__87_0(
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
  __int64 v12; // x1
  __int64 v13; // x2
  struct OtherUserGameEntity_o *otherUserGameEntity; // x21
  NetworkManager_ResultCallbackFunc_o *v15; // x20

  v4 = this;
  if ( (byte_49F78DE & 1) == 0 )
  {
    sub_1B640C8(&Method_FriendRootComponent_EndRequestFriend__, res);
    sub_1B640C8(&Method_NetworkManager_getRequest_FriendOfferRequest___, v5);
    sub_1B640C8(&NetworkManager_TypeInfo, v6);
    sub_1B640C8(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    sub_1B640C8(&StringLiteral_22137/*"ok"*/, v8);
    this = (FriendRootComponent_o *)sub_1B640C8(&StringLiteral_11004/*"REQUEST_NG"*/, v9);
    byte_49F78DE = 1;
  }
  if ( !res )
    goto LABEL_14;
  if ( System_String__Equals_61383712(res, (System_String_o *)StringLiteral_22137/*"ok"*/, 0LL) )
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
        v15 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, v12, v13);
        NetworkManager_ResultCallbackFunc___ctor(
          v15,
          (Il2CppObject *)v4,
          Method_FriendRootComponent_EndRequestFriend__,
          0LL);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        this = (FriendRootComponent_o *)NetworkManager__getRequest_object_(
                                          v15,
                                          (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_FriendOfferRequest___);
        if ( this )
        {
          FriendOfferRequest__beginRequest((FriendOfferRequest_o *)this, otherUserGameEntity->fields.userId, 0LL);
          return;
        }
LABEL_14:
        sub_1B64324(this);
      }
    }
  }
  this = (FriendRootComponent_o *)v4->fields.myFSM;
  if ( !this )
    goto LABEL_14;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11004/*"REQUEST_NG"*/, 0LL);
}


void __fastcall FriendRootComponent___RequestFriendRemove_b__91_0(
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
  __int64 v14; // x1
  __int64 v15; // x2
  NetworkManager_ResultCallbackFunc_o *v16; // x20

  v4 = this;
  if ( (byte_49F78DF & 1) == 0 )
  {
    sub_1B640C8(&Method_FriendRootComponent_EndRequestFriend__, res);
    sub_1B640C8(&Method_NetworkManager_getRequest_FriendRemoveRequest___, v5);
    sub_1B640C8(&NetworkManager_TypeInfo, v6);
    sub_1B640C8(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1B640C8(&StringLiteral_22137/*"ok"*/, v9);
    this = (FriendRootComponent_o *)sub_1B640C8(&StringLiteral_11004/*"REQUEST_NG"*/, v10);
    byte_49F78DF = 1;
  }
  if ( !res )
    goto LABEL_15;
  if ( System_String__Equals_61383712(res, (System_String_o *)StringLiteral_22137/*"ok"*/, 0LL) )
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
        this = (FriendRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( this )
        {
          CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)this, 0, 0LL);
          v16 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, v14, v15);
          NetworkManager_ResultCallbackFunc___ctor(
            v16,
            (Il2CppObject *)v4,
            Method_FriendRootComponent_EndRequestFriend__,
            0LL);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          this = (FriendRootComponent_o *)NetworkManager__getRequest_object_(
                                            v16,
                                            (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_FriendRemoveRequest___);
          if ( this )
          {
            FriendRemoveRequest__beginRequest((FriendRemoveRequest_o *)this, otherUserGameEntity->fields.userId, 0LL);
            return;
          }
        }
LABEL_15:
        sub_1B64324(this);
      }
    }
  }
  this = (FriendRootComponent_o *)v4->fields.myFSM;
  if ( !this )
    goto LABEL_15;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11004/*"REQUEST_NG"*/, 0LL);
}


void __fastcall FriendRootComponent___afterMainMenubarSelect_b__100_0(
        FriendRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  FriendRootComponent_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x2
  System_Action_object__o *v10; // x20
  const MethodInfo *v11; // x2

  v4 = this;
  if ( (byte_49F78E2 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_string__TypeInfo, result);
    sub_1B640C8(&Method_FriendRootComponent__afterMainMenubarSelect_b__100_1__, v5);
    sub_1B640C8(&StringLiteral_22137/*"ok"*/, v6);
    this = (FriendRootComponent_o *)sub_1B640C8(&StringLiteral_11004/*"REQUEST_NG"*/, v7);
    byte_49F78E2 = 1;
  }
  if ( !result )
    goto LABEL_8;
  if ( System_String__Equals_61383712(result, (System_String_o *)StringLiteral_22137/*"ok"*/, 0LL) )
  {
    v10 = (System_Action_object__o *)sub_1B64314(System_Action_string__TypeInfo, v8, v9);
    System_Action_object____ctor(
      v10,
      (Il2CppObject *)v4,
      Method_FriendRootComponent__afterMainMenubarSelect_b__100_1__,
      0LL);
    FriendRootComponent__FriendLockRequst(v4, (System_Action_string__o *)v10, v11);
    return;
  }
  this = (FriendRootComponent_o *)v4->fields.myFSM;
  if ( !this )
LABEL_8:
    sub_1B64324(this);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11004/*"REQUEST_NG"*/, 0LL);
}


void __fastcall FriendRootComponent___afterMainMenubarSelect_b__100_1(
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
  if ( (byte_49F78E3 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_11006/*"REQUEST_OK"*/, res);
    sub_1B640C8(&StringLiteral_22137/*"ok"*/, v5);
    this = (FriendRootComponent_o *)sub_1B640C8(&StringLiteral_11004/*"REQUEST_NG"*/, v6);
    byte_49F78E3 = 1;
  }
  if ( !res
    || (this = (FriendRootComponent_o *)System_String__Equals_61383712(res, (System_String_o *)StringLiteral_22137/*"ok"*/, 0LL),
        (myFSM = v4->fields.myFSM) == 0LL) )
  {
    sub_1B64324(this);
  }
  v8 = &StringLiteral_11006/*"REQUEST_OK"*/;
  if ( ((unsigned __int8)this & 1) == 0 )
    v8 = &StringLiteral_11004/*"REQUEST_NG"*/;
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)*v8, 0LL);
}


void __fastcall FriendRootComponent__afterMainMenubarSelect(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  FriendRootComponent_messageRequestCallback_o *v5; // x20
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x2

  if ( (byte_49F78B4 & 1) == 0 )
  {
    sub_1B640C8(&Method_FriendRootComponent__afterMainMenubarSelect_b__100_0__, method);
    sub_1B640C8(&FriendRootComponent_messageRequestCallback_TypeInfo, v4);
    byte_49F78B4 = 1;
  }
  v5 = (FriendRootComponent_messageRequestCallback_o *)sub_1B64314(
                                                         FriendRootComponent_messageRequestCallback_TypeInfo,
                                                         method,
                                                         v2);
  FriendRootComponent_messageRequestCallback___ctor(
    v5,
    (Il2CppObject *)this,
    Method_FriendRootComponent__afterMainMenubarSelect_b__100_0__,
    v6);
  FriendRootComponent__messageDispChangeRequest(this, v5, v7);
}


void __fastcall FriendRootComponent__beginFinish(FriendRootComponent_o *this, const MethodInfo *method)
{
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1

  if ( (byte_49F7884 & 1) == 0 )
  {
    sub_1B640C8(&RandomLimitCountManager_TypeInfo, method);
    byte_49F7884 = 1;
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
    || (FriendSearchMenu__Init((FriendSearchMenu_o *)operationItemListViewManager, v4),
        (operationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.friendSearchResultMenu) == 0LL)
    || (FriendSearchResultMenu__Init((FriendSearchResultMenu_o *)operationItemListViewManager, v5),
        (operationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.friendWarningDialog) == 0LL)
    || (FriendWarningDialog__Init((FriendWarningDialog_o *)operationItemListViewManager, v6),
        (operationItemListViewManager = this->fields.operationItemListViewManager) == 0LL)
    || (operationItemListViewManager = (FriendOperationItemListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                                 (UnityEngine_Component_o *)operationItemListViewManager,
                                                                                 0LL)) == 0LL )
  {
LABEL_13:
    sub_1B64324(operationItemListViewManager);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)operationItemListViewManager, 0, 0LL);
  this->fields.state = 0;
  this->fields.selectFriendEntity = 0LL;
  sub_1B6406C(&this->fields.selectFriendEntity);
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  RandomLimitCountManager__set_EnableRandomLimitCount(0, 0LL);
}


void __fastcall FriendRootComponent__beginInitialize(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  const MethodInfo *v5; // x1
  UnityEngine_Component_o *bgTxtSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  ClassButtonControlComponent_o *classButtonControl; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  ClassButtonControlComponent_CallbackFunc_o *v11; // x21
  const MethodInfo *v12; // x1

  if ( (byte_49F787F & 1) == 0 )
  {
    sub_1B640C8(&ClassButtonControlComponent_CallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_FriendRootComponent_changeClass__, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4);
    byte_49F787F = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 7, 39, 0LL);
  FriendRootComponent__CheckHelpUI(this, v5);
  bgTxtSprite = (UnityEngine_Component_o *)this->fields.bgTxtSprite;
  if ( !bgTxtSprite )
    goto LABEL_9;
  gameObject = UnityEngine_Component__get_gameObject(bgTxtSprite, 0LL);
  bgTxtSprite = (UnityEngine_Component_o *)BgTxtManager__IsActiveBgTxt(0LL);
  if ( !gameObject )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)bgTxtSprite & 1, 0LL);
  classButtonControl = this->fields.classButtonControl;
  v11 = (ClassButtonControlComponent_CallbackFunc_o *)sub_1B64314(
                                                        ClassButtonControlComponent_CallbackFunc_TypeInfo,
                                                        v9,
                                                        v10);
  ClassButtonControlComponent_CallbackFunc___ctor(
    v11,
    (Il2CppObject *)this,
    (intptr_t)Method_FriendRootComponent_changeClass__,
    0LL);
  if ( !classButtonControl
    || (ClassButtonControlComponent__init(classButtonControl, v11, 0, 0, 0, 0LL),
        (bgTxtSprite = (UnityEngine_Component_o *)this->fields.operationItemListViewManager) == 0LL)
    || (FriendOperationItemListViewManager__SetupClassBoardInfo(
          (FriendOperationItemListViewManager_o *)bgTxtSprite,
          v12),
        (bgTxtSprite = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
LABEL_9:
    sub_1B64324(bgTxtSprite);
  }
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)bgTxtSprite, (SceneRootComponent_o *)this, 0LL);
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
  CommonUI_o *v9; // x20
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x2

  if ( (byte_49F7885 & 1) == 0 )
  {
    sub_1B640C8(&AvalonSceneManager_TypeInfo, data);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B640C8(&SupportInfoJump_TypeInfo, v6);
    byte_49F7885 = 1;
  }
  if ( data
    && (methodPtr_low = LOBYTE(SupportInfoJump_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(data->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low)
    && (SupportInfoJump_c *)data->klass->_2.typeHierarchy[methodPtr_low - 1] == SupportInfoJump_TypeInfo )
  {
    this->fields.isReturnSupport = 1;
    Instance = (FriendOperationItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v9 = (CommonUI_o *)Instance;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      Instance = (FriendOperationItemListViewManager_o *)j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    if ( !v9
      || (CommonUI__maskFadein(v9, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL),
          FriendRootComponent__RefreshTab(this, v10),
          (Instance = this->fields.operationItemListViewManager) == 0LL) )
    {
      sub_1B64324(Instance);
    }
    FriendOperationItemListViewManager__SetMode_30645516(Instance, 2, v11);
    SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 7, 39, 0LL);
    MainMenuBar__setMenuActive(1, 0LL, 0LL);
    SceneRootComponent__sendMessageStartUp((SceneRootComponent_o *)this, 0LL);
  }
  else
  {
    SceneRootComponent__beginResume_38276972((SceneRootComponent_o *)this, 0LL);
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
  TitleInfoControl_o *titleInfo; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  NetworkManager_ResultCallbackFunc_o *v13; // x20

  if ( (byte_49F7880 & 1) == 0 )
  {
    sub_1B640C8(&BgmManager_TypeInfo, method);
    sub_1B640C8(&Method_FriendRootComponent_EndFriendRequest__, v3);
    sub_1B640C8(&Method_NetworkManager_getRequest_FriendTopRequest___, v4);
    sub_1B640C8(&NetworkManager_TypeInfo, v5);
    sub_1B640C8(&RandomLimitCountManager_TypeInfo, v6);
    sub_1B640C8(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    sub_1B640C8(&SoundManager_TypeInfo, v8);
    byte_49F7880 = 1;
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
  TitleInfoControl__setBackBtnSprite_36875508(titleInfo, 1, 0, 0, 0LL);
  this->fields.state = 0;
  this->fields.currentModeKind = 0;
  this->fields.selectFriendEntity = 0LL;
  sub_1B6406C(&this->fields.selectFriendEntity);
  v13 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, v11, v12);
  NetworkManager_ResultCallbackFunc___ctor(
    v13,
    (Il2CppObject *)this,
    Method_FriendRootComponent_EndFriendRequest__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  titleInfo = (TitleInfoControl_o *)NetworkManager__getRequest_object_(
                                      v13,
                                      (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_FriendTopRequest___);
  if ( !titleInfo )
LABEL_15:
    sub_1B64324(titleInfo);
  RequestBase__beginRequest((RequestBase_o *)titleInfo, 0LL);
}


void __fastcall FriendRootComponent__beginStartUp_30663584(
        FriendRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  struct SceneJumpInfo_o **p_jumpInfo; // x20
  __int64 methodPtr_low; // x9

  if ( (byte_49F7881 & 1) == 0 )
  {
    sub_1B640C8(&SceneJumpInfo_TypeInfo, data);
    byte_49F7881 = 1;
  }
  p_jumpInfo = &this->fields.jumpInfo;
  this->fields.jumpInfo = 0LL;
  sub_1B6406C(&this->fields.jumpInfo);
  if ( data )
  {
    methodPtr_low = LOBYTE(SceneJumpInfo_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(data->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
      && (SceneJumpInfo_c *)data->klass->_2.typeHierarchy[methodPtr_low - 1] == SceneJumpInfo_TypeInfo )
    {
      *p_jumpInfo = (struct SceneJumpInfo_o *)data;
      sub_1B6406C(&this->fields.jumpInfo);
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
  const MethodInfo *v7; // x2
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0

  if ( (byte_49F78BE & 1) == 0 )
  {
    sub_1B640C8(&Method_FriendRootComponent_changeClass__, *(_QWORD *)&classPos);
    byte_49F78BE = 1;
  }
  v5 = Method_FriendRootComponent_changeClass__;
  if ( (*((_BYTE *)Method_FriendRootComponent_changeClass__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1B640E0();
  v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    sub_1B64324(0LL);
  FriendOperationItemListViewManager__SetClassId(operationItemListViewManager, classPos, v7);
}


int32_t __fastcall FriendRootComponent__get_tabKind(FriendRootComponent_o *this, const MethodInfo *method)
{
  int32_t result; // w0
  FriendRootComponent_c *v4; // x0

  if ( (byte_49F787E & 1) == 0 )
  {
    sub_1B640C8(&FriendRootComponent_TypeInfo, method);
    byte_49F787E = 1;
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
  void **p_monitor; // x22
  int32_t ItemSum; // w23
  __int64 v18; // x1
  __int64 v19; // x2
  System_Collections_Generic_List_long__o *v20; // x21
  __int64 v21; // x1
  __int64 v22; // x2
  System_Collections_Generic_List_long__o *v23; // x22
  int64_t v24; // x1
  const MethodInfo *v25; // x2
  int32_t i; // w24
  struct UnityEngine_GameObject_o *dragParentObject; // x8
  struct System_Int64_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x8
  struct System_Int64_array *v32; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  __int64 v35; // x8
  System_Collections_Generic_List_long__o *v36; // x0
  NetworkManager_ResultCallbackFunc_o *v37; // x19
  FriendMessageHideSyncRequest_o *v38; // x19
  System_Int64_array *v39; // x20

  if ( (byte_49F78BC & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_long__Add__, callback);
    sub_1B640C8(&Method_System_Collections_Generic_List_long__ToArray__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_long___ctor__, v6);
    sub_1B640C8(&System_Collections_Generic_List_long__TypeInfo, v7);
    sub_1B640C8(&Method_NetworkManager_getRequest_FriendMessageHideSyncRequest___, v8);
    sub_1B640C8(&NetworkManager_TypeInfo, v9);
    sub_1B640C8(&NetworkManager_ResultCallbackFunc_TypeInfo, v10);
    sub_1B640C8(&Method_FriendRootComponent___c__DisplayClass111_0__messageDispChangeRequest_b__0__, v11);
    sub_1B640C8(&FriendRootComponent___c__DisplayClass111_0_TypeInfo, v12);
    sub_1B640C8(&StringLiteral_22137/*"ok"*/, v13);
    byte_49F78BC = 1;
  }
  v14 = (Il2CppObject *)sub_1B64314(FriendRootComponent___c__DisplayClass111_0_TypeInfo, callback, method);
  System_Object___ctor(v14, 0LL);
  if ( !v14 )
    goto LABEL_35;
  v14[1].klass = (Il2CppClass *)this;
  sub_1B6406C(&v14[1]);
  v14[1].monitor = callback;
  p_monitor = &v14[1].monitor;
  sub_1B6406C(&v14[1].monitor);
  operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    goto LABEL_35;
  if ( LOBYTE(operationItemListViewManager[1].fields.emptyMessageLabel) )
  {
    ItemSum = ListViewManager__get_ItemSum(operationItemListViewManager, 0LL);
    v20 = (System_Collections_Generic_List_long__o *)sub_1B64314(
                                                       System_Collections_Generic_List_long__TypeInfo,
                                                       v18,
                                                       v19);
    System_Collections_Generic_List_long____ctor(
      v20,
      (const MethodInfo_3494820 *)Method_System_Collections_Generic_List_long___ctor__);
    v23 = (System_Collections_Generic_List_long__o *)sub_1B64314(
                                                       System_Collections_Generic_List_long__TypeInfo,
                                                       v21,
                                                       v22);
    System_Collections_Generic_List_long____ctor(
      v23,
      (const MethodInfo_3494820 *)Method_System_Collections_Generic_List_long___ctor__);
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
                                                              v25);
        if ( !operationItemListViewManager )
          goto LABEL_35;
        if ( LODWORD(operationItemListViewManager->fields.clipRange.fields.x) == 3 )
        {
          dragParentObject = operationItemListViewManager->fields.dragParentObject;
          if ( !dragParentObject )
            goto LABEL_35;
          v24 = *(_QWORD *)&dragParentObject->fields.m_CachedPtr;
          if ( LOBYTE(operationItemListViewManager->fields.SortObject) )
          {
            if ( !v20 )
              goto LABEL_35;
            items = v20->fields._items;
            v29 = Method_System_Collections_Generic_List_long__Add__;
            ++v20->fields._version;
            if ( !items )
              goto LABEL_35;
            size = v20->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              v35 = v29[4];
              v36 = v20;
LABEL_24:
              System_Collections_Generic_List_long___AddWithResize(
                v36,
                v24,
                *(const MethodInfo_3495074 **)(*(_QWORD *)(v35 + 192) + 112LL));
              continue;
            }
            v31 = &items->obj.klass + size;
            v20->fields._size = size + 1;
          }
          else
          {
            if ( !v23 )
              goto LABEL_35;
            v32 = v23->fields._items;
            v33 = Method_System_Collections_Generic_List_long__Add__;
            ++v23->fields._version;
            if ( !v32 )
              goto LABEL_35;
            v34 = v23->fields._size;
            if ( (unsigned int)v34 >= v32->max_length )
            {
              v35 = v33[4];
              v36 = v23;
              goto LABEL_24;
            }
            v31 = &v32->obj.klass + v34;
            v23->fields._size = v34 + 1;
          }
          v31[4] = (Il2CppClass *)v24;
        }
      }
    }
    v37 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, v24, v25);
    NetworkManager_ResultCallbackFunc___ctor(
      v37,
      v14,
      Method_FriendRootComponent___c__DisplayClass111_0__messageDispChangeRequest_b__0__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    operationItemListViewManager = (ListViewManager_o *)NetworkManager__getRequest_object_(
                                                          v37,
                                                          (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_FriendMessageHideSyncRequest___);
    if ( v23 )
    {
      v38 = (FriendMessageHideSyncRequest_o *)operationItemListViewManager;
      operationItemListViewManager = (ListViewManager_o *)System_Collections_Generic_List_long___ToArray(
                                                            v23,
                                                            (const MethodInfo_3496BCC *)Method_System_Collections_Generic_List_long__ToArray__);
      if ( v20 )
      {
        v39 = (System_Int64_array *)operationItemListViewManager;
        operationItemListViewManager = (ListViewManager_o *)System_Collections_Generic_List_long___ToArray(
                                                              v20,
                                                              (const MethodInfo_3496BCC *)Method_System_Collections_Generic_List_long__ToArray__);
        if ( v38 )
        {
          FriendMessageHideSyncRequest__beginRequest(v38, v39, (System_Int64_array *)operationItemListViewManager, 0LL);
          return;
        }
      }
    }
LABEL_35:
    sub_1B64324(operationItemListViewManager);
  }
  if ( *p_monitor )
    (*((void (__fastcall **)(_QWORD, __int64, _QWORD))*p_monitor + 3))(
      *((_QWORD *)*p_monitor + 8),
      StringLiteral_22137/*"ok"*/,
      *((_QWORD *)*p_monitor + 5));
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendRootComponent__set_tabKind(FriendRootComponent_o *this, int32_t value, const MethodInfo *method)
{
  FriendRootComponent_c *v4; // x0

  if ( (byte_49F787D & 1) == 0 )
  {
    sub_1B640C8(&FriendRootComponent_TypeInfo, *(_QWORD *)&value);
    byte_49F787D = 1;
  }
  v4 = FriendRootComponent_TypeInfo;
  if ( !FriendRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendRootComponent_TypeInfo);
    v4 = FriendRootComponent_TypeInfo;
  }
  v4->static_fields->tabKindSave = value;
}


void __fastcall FriendRootComponent___c__DisplayClass111_0___ctor(
        FriendRootComponent___c__DisplayClass111_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall FriendRootComponent___c__DisplayClass111_0___messageDispChangeRequest_b__0(
        FriendRootComponent___c__DisplayClass111_0_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  struct FriendRootComponent_o *_4__this; // x8
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x8
  struct FriendRootComponent_messageRequestCallback_o *callback; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (operationItemListViewManager = _4__this->fields.operationItemListViewManager) == 0LL )
    sub_1B64324(this);
  operationItemListViewManager->fields._isMessageApply_k__BackingField = 0;
  callback = this->fields.callback;
  if ( callback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))callback->fields.m_target)(
      callback->fields.original_method_info,
      result,
      *(_QWORD *)&callback->fields.extra_arg);
}


void __fastcall FriendRootComponent___c__DisplayClass112_0___ctor(
        FriendRootComponent___c__DisplayClass112_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall FriendRootComponent___c__DisplayClass112_0___FriendLockRequst_b__0(
        FriendRootComponent___c__DisplayClass112_0_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  const MethodInfo *v7; // x2
  int32_t v8; // w21
  struct FriendRootComponent_o *_4__this; // x8

  if ( (byte_49F78EB & 1) == 0 )
  {
    sub_1B640C8(&Method_ActionExtensions_Call_string___, result);
    sub_1B640C8(&StringLiteral_22137/*"ok"*/, v5);
    byte_49F78EB = 1;
  }
  operationItemListViewManager = (FriendOperationItemListViewManager_o *)System_String__op_Equality(
                                                                           result,
                                                                           (System_String_o *)StringLiteral_22137/*"ok"*/,
                                                                           0LL);
  if ( ((unsigned __int8)operationItemListViewManager & 1) != 0 && this->fields.sum >= 1 )
  {
    v8 = 0;
    do
    {
      _4__this = this->fields.__4__this;
      if ( !_4__this || (operationItemListViewManager = _4__this->fields.operationItemListViewManager) == 0LL )
        sub_1B64324(operationItemListViewManager);
      operationItemListViewManager = (FriendOperationItemListViewManager_o *)FriendOperationItemListViewManager__GetItem(
                                                                               operationItemListViewManager,
                                                                               v8,
                                                                               v7);
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
    (const MethodInfo_2D90A78 *)Method_ActionExtensions_Call_string___);
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
  sub_1B6406C(&this->fields.method);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64188(v6) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = (Il2CppObject *)sub_19A4ACC;
LABEL_8:
      this->fields.m_target = v9;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v8 )
    {
      v9 = (Il2CppObject *)sub_19A4AAC;
      goto LABEL_8;
    }
    if ( !object )
    {
      v11 = sub_1B64340(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B641F0(v11, 0LL);
    }
  }
  v10 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v10;
LABEL_9:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19A4A64;
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
  return (System_IAsyncResult_o *)sub_1B6407C(this, &v6, callback, object);
}


void __fastcall FriendRootComponent_messageRequestCallback__EndInvoke(
        FriendRootComponent_messageRequestCallback_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64080(result, 0LL, method);
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