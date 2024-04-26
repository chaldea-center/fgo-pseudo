void __fastcall FriendRootComponent___cctor(const MethodInfo *method)
{
  if ( (byte_4354061 & 1) == 0 )
  {
    sub_B70694(&FriendRootComponent_TypeInfo);
    byte_4354061 = 1;
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
  int32_t state; // w8
  CommonUI_o *Instance; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4354052 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4354052 = 1;
  }
  state = this->fields.state;
  switch ( state )
  {
    case ',':
      this->fields.state = 23;
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
        FriendWarningDialog__Close_29316204((FriendWarningDialog_o *)Instance, 0LL, v2);
        goto LABEL_12;
      }
LABEL_14:
      sub_B7076C(Instance, method);
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
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  __int64 v15; // x1
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  const MethodInfo *v17; // x2
  FriendSearchMenu_o *friendSearchMenu; // x20
  FriendSearchMenu_CallbackFunc_o *v19; // x21
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x1

  if ( (byte_4354057 & 1) == 0 )
  {
    sub_B70694(&FriendSearchMenu_CallbackFunc_TypeInfo);
    sub_B70694(&Method_FriendRootComponent_OnSelectSearchFriend__);
    byte_4354057 = 1;
  }
  if ( this->fields.state == 42 )
  {
    this->fields.state = 23;
    this->fields.selectFriendCode = 0LL;
    sub_B70630((BattleServantConfConponent_o *)&this->fields.selectFriendCode, 0LL, v2, v3, v4, v5, v6, v7);
    this->fields.selectFriendEntity = 0LL;
    sub_B70630((BattleServantConfConponent_o *)&this->fields.selectFriendEntity, 0LL, v9, v10, v11, v12, v13, v14);
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close(operationConfirmMenu, 0LL),
          (operationConfirmMenu = (FriendOperationConfirmMenu_o *)this->fields.friendSearchResultMenu) == 0LL)
      || (FriendSearchResultMenu__Close_29284236((FriendSearchResultMenu_o *)operationConfirmMenu, 0LL, v17),
          friendSearchMenu = this->fields.friendSearchMenu,
          v19 = (FriendSearchMenu_CallbackFunc_o *)sub_B70764(FriendSearchMenu_CallbackFunc_TypeInfo),
          FriendSearchMenu_CallbackFunc___ctor(
            v19,
            (Il2CppObject *)this,
            Method_FriendRootComponent_OnSelectSearchFriend__,
            0LL),
          !friendSearchMenu) )
    {
      sub_B7076C(operationConfirmMenu, v15);
    }
    FriendSearchMenu__Open(friendSearchMenu, v19, 1, v20);
    FriendRootComponent__RefreshInfo(this, v21);
  }
}


void __fastcall FriendRootComponent__BackFollowRemoveConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v5; // x21

  if ( (byte_4354059 & 1) == 0 )
  {
    sub_B70694(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_B70694(&Method_FriendRootComponent_OnSelectFriendItem__);
    byte_4354059 = 1;
  }
  if ( this->fields.state == 45 )
  {
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close(operationConfirmMenu, 0LL),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v5 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B70764(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v5,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            0LL),
          !operationItemListViewManager) )
    {
      sub_B7076C(operationConfirmMenu, method);
    }
    FriendOperationItemListViewManager__SetMode(operationItemListViewManager, 2, v5, 0LL);
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
      sub_B7076C(operationConfirmMenu, method);
    }
    FriendOperationItemListViewManager__DestroyList((FriendOperationItemListViewManager_o *)operationConfirmMenu, 0LL);
  }
}


void __fastcall FriendRootComponent__BackFollowRemoveConfirmRefreshShowFriend(
        FriendRootComponent_o *this,
        const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v3; // x20
  RequestBase_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v5; // x1

  if ( (byte_435405A & 1) == 0 )
  {
    sub_B70694(&Method_FriendRootComponent_EndFriendRequest2__);
    sub_B70694(&Method_NetworkManager_getRequest_FriendTopRequest___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_435405A = 1;
  }
  v3 = (NetworkManager_ResultCallbackFunc_o *)sub_B70764(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v3,
    (Il2CppObject *)this,
    Method_FriendRootComponent_EndFriendRequest2__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (RequestBase_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                         v3,
                                                         (const MethodInfo_1D57A4C *)Method_NetworkManager_getRequest_FriendTopRequest___);
  if ( !Request_WarBoardWallAttackRequest )
    sub_B7076C(0LL, v5);
  RequestBase__beginRequest(Request_WarBoardWallAttackRequest, 0LL);
}


void __fastcall FriendRootComponent__BackFriendAcceptConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v5; // x21

  if ( (byte_435401F & 1) == 0 )
  {
    sub_B70694(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_B70694(&Method_FriendRootComponent_OnSelectFriendItem__);
    byte_435401F = 1;
  }
  if ( this->fields.state == 31 )
  {
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close(operationConfirmMenu, 0LL),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v5 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B70764(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v5,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            0LL),
          !operationItemListViewManager) )
    {
      sub_B7076C(operationConfirmMenu, method);
    }
    FriendOperationItemListViewManager__SetMode(operationItemListViewManager, 2, v5, 0LL);
    this->fields.state = 14;
  }
}


void __fastcall FriendRootComponent__BackFriendAcceptConfirmRefreshShowOffered(
        FriendRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v7; // x21

  if ( (byte_4354020 & 1) == 0 )
  {
    sub_B70694(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_B70694(&Method_FriendRootComponent_OnSelectFriendItem__);
    byte_4354020 = 1;
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
          v7 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B70764(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v7,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            0LL),
          !operationItemListViewManager) )
    {
LABEL_11:
      sub_B7076C(operationConfirmMenu, v3);
    }
    FriendOperationItemListViewManager__SetMode(operationItemListViewManager, 2, v7, 0LL);
  }
}


void __fastcall FriendRootComponent__BackFriendCancelConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v5; // x21

  if ( (byte_4354025 & 1) == 0 )
  {
    sub_B70694(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_B70694(&Method_FriendRootComponent_OnSelectFriendItem__);
    byte_4354025 = 1;
  }
  if ( this->fields.state == 37 )
  {
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close(operationConfirmMenu, 0LL),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v5 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B70764(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v5,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            0LL),
          !operationItemListViewManager) )
    {
      sub_B7076C(operationConfirmMenu, method);
    }
    FriendOperationItemListViewManager__SetMode(operationItemListViewManager, 2, v5, 0LL);
    this->fields.state = 14;
  }
}


void __fastcall FriendRootComponent__BackFriendCancelConfirmRefreshShowOffer(
        FriendRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v7; // x21

  if ( (byte_4354026 & 1) == 0 )
  {
    sub_B70694(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_B70694(&Method_FriendRootComponent_OnSelectFriendItem__);
    byte_4354026 = 1;
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
          v7 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B70764(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v7,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            0LL),
          !operationItemListViewManager) )
    {
LABEL_11:
      sub_B7076C(operationConfirmMenu, v3);
    }
    FriendOperationItemListViewManager__SetMode(operationItemListViewManager, 2, v7, 0LL);
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
      FriendWarningDialog__Close_29316204(friendWarningDialog, 0LL, v2);
      goto LABEL_7;
    }
LABEL_9:
    sub_B7076C(friendWarningDialog, method);
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
  int32_t state; // w8
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v6; // x21

  if ( (byte_435405C & 1) == 0 )
  {
    sub_B70694(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_B70694(&Method_FriendRootComponent_OnSelectFriendItem__);
    byte_435405C = 1;
  }
  state = this->fields.state;
  if ( state == 29 || state == 27 )
  {
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close(operationConfirmMenu, 0LL),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v6 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B70764(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v6,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            0LL),
          !operationItemListViewManager) )
    {
      sub_B7076C(operationConfirmMenu, method);
    }
    FriendOperationItemListViewManager__SetMode(operationItemListViewManager, 2, v6, 0LL);
    this->fields.state = 4;
  }
}


void __fastcall FriendRootComponent__BackFriendOfferConfirmRefreshShowFriend(
        FriendRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v7; // x21

  if ( (byte_435405D & 1) == 0 )
  {
    sub_B70694(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_B70694(&Method_FriendRootComponent_OnSelectFriendItem__);
    byte_435405D = 1;
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
          v7 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B70764(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v7,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            0LL),
          !operationItemListViewManager) )
    {
LABEL_11:
      sub_B7076C(operationConfirmMenu, v3);
    }
    FriendOperationItemListViewManager__SetMode(operationItemListViewManager, 2, v7, 0LL);
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
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  __int64 v15; // x1
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  const MethodInfo *v17; // x2
  FriendSearchMenu_o *friendSearchMenu; // x20
  FriendSearchMenu_CallbackFunc_o *v19; // x21
  const MethodInfo *v20; // x3

  if ( (byte_435401D & 1) == 0 )
  {
    sub_B70694(&FriendSearchMenu_CallbackFunc_TypeInfo);
    sub_B70694(&Method_FriendRootComponent_OnSelectSearchFriend__);
    byte_435401D = 1;
  }
  if ( this->fields.state == 27 )
  {
    this->fields.state = 23;
    this->fields.selectFriendCode = 0LL;
    sub_B70630((BattleServantConfConponent_o *)&this->fields.selectFriendCode, 0LL, v2, v3, v4, v5, v6, v7);
    this->fields.selectFriendEntity = 0LL;
    sub_B70630((BattleServantConfConponent_o *)&this->fields.selectFriendEntity, 0LL, v9, v10, v11, v12, v13, v14);
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close(operationConfirmMenu, 0LL),
          (operationConfirmMenu = (FriendOperationConfirmMenu_o *)this->fields.friendSearchResultMenu) == 0LL)
      || (FriendSearchResultMenu__Close_29284236((FriendSearchResultMenu_o *)operationConfirmMenu, 0LL, v17),
          friendSearchMenu = this->fields.friendSearchMenu,
          v19 = (FriendSearchMenu_CallbackFunc_o *)sub_B70764(FriendSearchMenu_CallbackFunc_TypeInfo),
          FriendSearchMenu_CallbackFunc___ctor(
            v19,
            (Il2CppObject *)this,
            Method_FriendRootComponent_OnSelectSearchFriend__,
            0LL),
          !friendSearchMenu) )
    {
      sub_B7076C(operationConfirmMenu, v15);
    }
    FriendSearchMenu__Open(friendSearchMenu, v19, 1, v20);
  }
}


void __fastcall FriendRootComponent__BackFriendRejectConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v5; // x21

  if ( (byte_4354022 & 1) == 0 )
  {
    sub_B70694(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_B70694(&Method_FriendRootComponent_OnSelectFriendItem__);
    byte_4354022 = 1;
  }
  if ( this->fields.state == 34 )
  {
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close(operationConfirmMenu, 0LL),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v5 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B70764(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v5,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            0LL),
          !operationItemListViewManager) )
    {
      sub_B7076C(operationConfirmMenu, method);
    }
    FriendOperationItemListViewManager__SetMode(operationItemListViewManager, 2, v5, 0LL);
    this->fields.state = 14;
  }
}


void __fastcall FriendRootComponent__BackFriendRejectConfirmRefreshShowOffered(
        FriendRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v7; // x21

  if ( (byte_4354023 & 1) == 0 )
  {
    sub_B70694(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_B70694(&Method_FriendRootComponent_OnSelectFriendItem__);
    byte_4354023 = 1;
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
          v7 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B70764(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v7,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            0LL),
          !operationItemListViewManager) )
    {
LABEL_11:
      sub_B7076C(operationConfirmMenu, v3);
    }
    FriendOperationItemListViewManager__SetMode(operationItemListViewManager, 2, v7, 0LL);
  }
}


void __fastcall FriendRootComponent__BackFriendRemoveConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v5; // x21

  if ( (byte_4354028 & 1) == 0 )
  {
    sub_B70694(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_B70694(&Method_FriendRootComponent_OnSelectFriendItem__);
    byte_4354028 = 1;
  }
  if ( this->fields.state == 40 )
  {
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close(operationConfirmMenu, 0LL),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v5 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B70764(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v5,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            0LL),
          !operationItemListViewManager) )
    {
      sub_B7076C(operationConfirmMenu, method);
    }
    FriendOperationItemListViewManager__SetMode(operationItemListViewManager, 2, v5, 0LL);
    this->fields.state = 4;
  }
}


void __fastcall FriendRootComponent__BackFriendRemoveConfirmRefreshShowFriend(
        FriendRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v7; // x21

  if ( (byte_4354029 & 1) == 0 )
  {
    sub_B70694(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_B70694(&Method_FriendRootComponent_OnSelectFriendItem__);
    byte_4354029 = 1;
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
          v7 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B70764(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v7,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            0LL),
          !operationItemListViewManager) )
    {
LABEL_11:
      sub_B7076C(operationConfirmMenu, v3);
    }
    FriendOperationItemListViewManager__SetMode(operationItemListViewManager, 2, v7, 0LL);
  }
}


void __fastcall FriendRootComponent__BackSearchFriend(FriendRootComponent_o *this, const MethodInfo *method)
{
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  FriendSearchResultMenu_o *friendSearchResultMenu; // x0
  FriendSearchMenu_o *friendSearchMenu; // x20
  System_Action_o *v13; // x21
  const MethodInfo *v14; // x2

  if ( (byte_4354016 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_FriendRootComponent_OnMoveEnd__);
    byte_4354016 = 1;
  }
  if ( this->fields.state == 23 )
  {
    this->fields.state = 24;
    FriendRootComponent__RefreshInfo(this, method);
    this->fields.selectFriendEntity = 0LL;
    sub_B70630((BattleServantConfConponent_o *)&this->fields.selectFriendEntity, 0LL, v3, v4, v5, v6, v7, v8);
    friendSearchResultMenu = this->fields.friendSearchResultMenu;
    if ( !friendSearchResultMenu
      || (FriendSearchResultMenu__Close_29284236(friendSearchResultMenu, 0LL, v10),
          friendSearchMenu = this->fields.friendSearchMenu,
          v13 = (System_Action_o *)sub_B70764(System_Action_TypeInfo),
          System_Action___ctor(v13, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0LL),
          !friendSearchMenu) )
    {
      sub_B7076C(friendSearchResultMenu, v9);
    }
    FriendSearchMenu__Close_29282088(friendSearchMenu, v13, v14);
  }
}


void __fastcall FriendRootComponent__BackShowFriend(FriendRootComponent_o *this, const MethodInfo *method)
{
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_435400E & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_FriendRootComponent_OnMoveEnd__);
    byte_435400E = 1;
  }
  if ( this->fields.state == 4 )
  {
    this->fields.state = 5;
    FriendRootComponent__RefreshInfo(this, method);
    operationItemListViewManager = this->fields.operationItemListViewManager;
    v4 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(v4, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0LL);
    if ( !operationItemListViewManager )
      sub_B7076C(v5, v6);
    FriendOperationItemListViewManager__SetMode_31881132(operationItemListViewManager, 4, v4, 0LL);
  }
}


void __fastcall FriendRootComponent__BackShowOffer(FriendRootComponent_o *this, const MethodInfo *method)
{
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x1

  if ( (byte_4354010 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_FriendRootComponent_OnMoveEnd__);
    byte_4354010 = 1;
  }
  if ( this->fields.state == 9 )
  {
    operationItemListViewManager = this->fields.operationItemListViewManager;
    v4 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(v4, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0LL);
    if ( !operationItemListViewManager )
      sub_B7076C(v5, v6);
    FriendOperationItemListViewManager__SetMode_31881132(operationItemListViewManager, 4, v4, 0LL);
    FriendRootComponent__RefreshInfo(this, v7);
    this->fields.state = 10;
  }
}


void __fastcall FriendRootComponent__BackShowOffered(FriendRootComponent_o *this, const MethodInfo *method)
{
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4354012 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_FriendRootComponent_OnMoveEnd__);
    byte_4354012 = 1;
  }
  if ( this->fields.state == 14 )
  {
    this->fields.state = 15;
    FriendRootComponent__RefreshInfo(this, method);
    operationItemListViewManager = this->fields.operationItemListViewManager;
    v4 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(v4, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0LL);
    if ( !operationItemListViewManager )
      sub_B7076C(v5, v6);
    FriendOperationItemListViewManager__SetMode_31881132(operationItemListViewManager, 4, v4, 0LL);
  }
}


void __fastcall FriendRootComponent__BackShowSearch(FriendRootComponent_o *this, const MethodInfo *method)
{
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4354014 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_FriendRootComponent_OnMoveEnd__);
    byte_4354014 = 1;
  }
  if ( this->fields.state == 19 )
  {
    this->fields.state = 20;
    operationItemListViewManager = this->fields.operationItemListViewManager;
    v4 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(v4, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0LL);
    if ( !operationItemListViewManager )
      sub_B7076C(v5, v6);
    FriendOperationItemListViewManager__SetMode_31881132(operationItemListViewManager, 4, v4, 0LL);
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
  __int64 v13; // x0

  if ( (byte_4354034 & 1) == 0 )
  {
    sub_B70694(&OptionManager_TypeInfo);
    byte_4354034 = 1;
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
        v8 = 0;
        while ( v8 < max_length )
        {
          SpoilerSetting = userSvtLeaderHash->m_Items[v8];
          if ( !SpoilerSetting )
            goto LABEL_24;
          ServantLeaderInfo__ChangeLimitCountBySpoilerProtection(SpoilerSetting, 0LL);
          max_length = userSvtLeaderHash->max_length;
          if ( (int)++v8 >= max_length )
            goto LABEL_15;
        }
LABEL_23:
        v13 = sub_B70798(SpoilerSetting);
        sub_B70738(v13, 0LL);
      }
LABEL_15:
      v9 = this->fields.selectFriendEntity;
      if ( !v9 || (eventUserSvtLeaderHash = v9->fields.eventUserSvtLeaderHash) == 0LL )
LABEL_24:
        sub_B7076C(SpoilerSetting, v4);
      v11 = eventUserSvtLeaderHash->max_length;
      if ( v11 >= 1 )
      {
        v12 = 0;
        while ( v12 < v11 )
        {
          SpoilerSetting = eventUserSvtLeaderHash->m_Items[v12];
          if ( !SpoilerSetting )
            goto LABEL_24;
          ServantLeaderInfo__ChangeLimitCountBySpoilerProtection(SpoilerSetting, 0LL);
          v11 = eventUserSvtLeaderHash->max_length;
          if ( (int)++v12 >= v11 )
            return;
        }
        goto LABEL_23;
      }
    }
  }
}


void __fastcall FriendRootComponent__CheckHelpUI(FriendRootComponent_o *this, const MethodInfo *method)
{
  System_String_o **v3; // x8
  System_String_o *v4; // x20
  UILabel_o *helpLabel; // x19
  System_String_o *v6; // x0
  __int64 v7; // x1

  if ( (byte_4354006 & 1) == 0 )
  {
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&StringLiteral_6560/*"FRIEND_LOCK_HELP_TEXT"*/);
    sub_B70694(&StringLiteral_6558/*"FRIEND_HELP_TEXT"*/);
    byte_4354006 = 1;
  }
  v3 = (System_String_o **)&StringLiteral_6558/*"FRIEND_HELP_TEXT"*/;
  if ( this->fields.isActiveModeKindButtons && this->fields.currentModeKind == 1 )
    v3 = (System_String_o **)&StringLiteral_6560/*"FRIEND_LOCK_HELP_TEXT"*/;
  v4 = *v3;
  helpLabel = this->fields.helpLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v6 = LocalizationManager__Get(v4, 0LL);
  if ( !helpLabel )
    sub_B7076C(v6, v7);
  UILabel__set_text(helpLabel, v6, 0LL);
}


void __fastcall FriendRootComponent__CheckModeKind(FriendRootComponent_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  TblFriendMaster_o *MasterData_WarQuestSelectionMaster; // x20
  UserFollowMaster_o *v6; // x21
  int v7; // w21
  UICommonButton_o *modeUserDetailButton; // x20
  bool enabled; // w0
  UICommonButton_o *modeEditLockButton; // x20
  bool v11; // w0
  __int64 v12; // x8
  int32_t currentModeKind; // w8
  __int64 *v14; // x9
  System_String_o *v15; // x20
  System_String_o **v16; // x8

  if ( (byte_435403B & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_TblFriendMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserFollowMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&StringLiteral_17383/*"button_alllock_unreg"*/);
    sub_B70694(&StringLiteral_17389/*"button_infocheck_unreg"*/);
    sub_B70694(&StringLiteral_17388/*"button_infocheck_reg"*/);
    sub_B70694(&StringLiteral_17382/*"button_alllock_reg"*/);
    byte_435403B = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_WarQuestSelectionMaster = (TblFriendMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              Instance,
                                                              (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_TblFriendMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserFollowMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_30;
  v6 = (UserFollowMaster_o *)Instance;
  Instance = (DataManager_o *)TblFriendMaster__GetFriendSum(MasterData_WarQuestSelectionMaster, 0LL);
  if ( (int)Instance > 0 )
    goto LABEL_9;
  if ( !v6 )
    goto LABEL_30;
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
  v11 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.modeEditLockButton, 0LL);
  UICommonButton__SetColliderEnable(modeEditLockButton, v11, 1, 0LL);
  if ( !v7 )
    goto LABEL_21;
  v12 = 224LL;
  if ( this->fields.currentModeKind )
    v12 = 216LL;
  Instance = *(DataManager_o **)((char *)&this->klass + v12);
  if ( !Instance )
LABEL_30:
    sub_B7076C(Instance, v4);
  UICommonButton__SetButtonEnable((UICommonButton_o *)Instance, 0, 1, 0LL);
LABEL_21:
  currentModeKind = this->fields.currentModeKind;
  Instance = (DataManager_o *)this->fields.modeUserDetailSprite;
  v14 = &StringLiteral_17382/*"button_alllock_reg"*/;
  if ( currentModeKind != 1 )
    v14 = &StringLiteral_17383/*"button_alllock_unreg"*/;
  if ( !Instance )
    goto LABEL_30;
  v15 = (System_String_o *)*v14;
  v16 = (System_String_o **)(currentModeKind ? &StringLiteral_17389/*"button_infocheck_unreg"*/ : &StringLiteral_17388/*"button_infocheck_reg"*/);
  UISprite__set_spriteName((UISprite_o *)Instance, *v16, 0LL);
  Instance = (DataManager_o *)this->fields.modeEditLockSprite;
  if ( !Instance )
    goto LABEL_30;
  UISprite__set_spriteName((UISprite_o *)Instance, v15, 0LL);
}


bool __fastcall FriendRootComponent__CheckTabKind(FriendRootComponent_o *this, const MethodInfo *method)
{
  FriendRootComponent_c *v3; // x0
  int32_t tabKindSave; // w8
  PlayMakerFSM_o *myFSM; // x0
  __int64 *v6; // x8

  if ( (byte_435400A & 1) == 0 )
  {
    sub_B70694(&StringLiteral_8824/*"MENU_OPERATION_FRIEND"*/);
    sub_B70694(&StringLiteral_8826/*"MENU_OPERATION_OFFERED"*/);
    sub_B70694(&StringLiteral_8827/*"MENU_OPERATION_SEARCH"*/);
    byte_435400A = 1;
  }
  if ( !byte_4354108 )
  {
    sub_B70694(&FriendRootComponent_TypeInfo);
    byte_4354108 = 1;
  }
  v3 = FriendRootComponent_TypeInfo;
  if ( (BYTE3(FriendRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FriendRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendRootComponent_TypeInfo);
    v3 = FriendRootComponent_TypeInfo;
  }
  tabKindSave = v3->static_fields->tabKindSave;
  switch ( tabKindSave )
  {
    case 2:
      myFSM = this->fields.myFSM;
      if ( myFSM )
      {
        v6 = &StringLiteral_8827/*"MENU_OPERATION_SEARCH"*/;
        goto LABEL_17;
      }
      goto LABEL_19;
    case 1:
      myFSM = this->fields.myFSM;
      if ( myFSM )
      {
        v6 = &StringLiteral_8826/*"MENU_OPERATION_OFFERED"*/;
        goto LABEL_17;
      }
LABEL_19:
      sub_B7076C(myFSM, method);
    case 0:
      myFSM = this->fields.myFSM;
      if ( myFSM )
      {
        v6 = &StringLiteral_8824/*"MENU_OPERATION_FRIEND"*/;
LABEL_17:
        PlayMakerFSM__SendEvent(myFSM, (System_String_o *)*v6, 0LL);
        return 1;
      }
      goto LABEL_19;
  }
  return 1;
}


void __fastcall FriendRootComponent__EndCloseShowServant(FriendRootComponent_o *this, const MethodInfo *method)
{
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_435401B & 1) == 0 )
  {
    sub_B70694(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_B70694(&Method_FriendRootComponent_OnSelectFriendItem__);
    byte_435401B = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v4 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B70764(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
    0LL);
  if ( !operationItemListViewManager )
    sub_B7076C(v5, v6);
  FriendOperationItemListViewManager__SetMode(operationItemListViewManager, 2, v4, 0LL);
}


void __fastcall FriendRootComponent__EndCloseShowServantEquip(FriendRootComponent_o *this, const MethodInfo *method)
{
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4354045 & 1) == 0 )
  {
    sub_B70694(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_B70694(&Method_FriendRootComponent_OnSelectFriendItem__);
    byte_4354045 = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v4 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B70764(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
    0LL);
  if ( !operationItemListViewManager )
    sub_B7076C(v5, v6);
  FriendOperationItemListViewManager__SetMode(operationItemListViewManager, 2, v4, 0LL);
}


void __fastcall FriendRootComponent__EndFriendRequest(
        FriendRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  FriendRootComponent_c *v4; // x0
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  TblFriendMaster_o *v7; // x20
  const MethodInfo *v8; // x2
  int32_t v9; // w1
  OtherUserGameEntity_array *List; // x21
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x1

  if ( (byte_4354007 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_TblFriendMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4354007 = 1;
  }
  if ( !byte_4354108 )
  {
    sub_B70694(&FriendRootComponent_TypeInfo);
    byte_4354108 = 1;
  }
  v4 = FriendRootComponent_TypeInfo;
  if ( (BYTE3(FriendRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FriendRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendRootComponent_TypeInfo);
    v4 = FriendRootComponent_TypeInfo;
  }
  if ( v4->static_fields->tabKindSave == 3 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_TblFriendMaster___);
      if ( Instance )
      {
        v7 = (TblFriendMaster_o *)Instance;
        Instance = (DataManager_o *)TblFriendMaster__GetList((TblFriendMaster_o *)Instance, 2, 0LL);
        if ( Instance )
        {
          if ( Instance->fields.datalist )
          {
            v9 = 1;
LABEL_19:
            FriendRootComponent__set_tabKind((FriendRootComponent_o *)Instance, v9, v8);
            EventTutorialMaster__CheckTutorial(-1, 49, 0LL, 0, 0, 0, 0, 0LL);
            goto LABEL_20;
          }
          List = TblFriendMaster__GetList(v7, 3, 0LL);
          Instance = (DataManager_o *)TblFriendMaster__GetList(v7, 9, 0LL);
          if ( List )
          {
            if ( *(_QWORD *)&List->max_length )
            {
LABEL_18:
              v9 = 0;
              goto LABEL_19;
            }
            if ( Instance )
            {
              if ( !Instance->fields.datalist )
              {
                FriendRootComponent__set_tabKind((FriendRootComponent_o *)Instance, 2, v8);
                goto LABEL_20;
              }
              goto LABEL_18;
            }
          }
        }
      }
    }
    sub_B7076C(Instance, v6);
  }
LABEL_20:
  FriendRootComponent__InitModeKindButtons(this, (const MethodInfo *)result);
  FriendRootComponent__RefreshTab(this, v11);
  FriendRootComponent__RefreshInfo(this, v12);
  MainMenuBar__setMenuActive(1, 0LL, 0LL);
  SceneRootComponent__beginStartUp_17527796((SceneRootComponent_o *)this, 0LL);
}


void __fastcall FriendRootComponent__EndFriendRequest2(
        FriendRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  __int64 v5; // x1
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  FriendOperationItemListViewManager_o *v7; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v8; // x21

  if ( (byte_435405B & 1) == 0 )
  {
    sub_B70694(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_B70694(&Method_FriendRootComponent_OnSelectFriendItem__);
    byte_435405B = 1;
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
        v7 = this->fields.operationItemListViewManager,
        v8 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B70764(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
        FriendOperationItemListViewManager_CallbackFunc___ctor(
          v8,
          (Il2CppObject *)this,
          (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
          0LL),
        !v7) )
  {
    sub_B7076C(operationItemListViewManager, v5);
  }
  FriendOperationItemListViewManager__SetMode(v7, 2, v8, 0LL);
  this->fields.state = 4;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendRootComponent__EndMaxFollowWarningOfferConfirm(
        FriendRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_4354053 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_8821/*"MENU_CANCEL"*/);
    byte_4354053 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_B7076C(0LL, isDecide);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_8821/*"MENU_CANCEL"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendRootComponent__EndMaxFriendWarning(
        FriendRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  FriendWarningDialog_o *friendWarningDialog; // x0
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v6; // x21

  if ( (byte_4354047 & 1) == 0 )
  {
    sub_B70694(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_B70694(&Method_FriendRootComponent_OnSelectFriendItem__);
    byte_4354047 = 1;
  }
  friendWarningDialog = this->fields.friendWarningDialog;
  if ( !friendWarningDialog
    || (FriendWarningDialog__Close_29316204(friendWarningDialog, 0LL, method),
        operationItemListViewManager = this->fields.operationItemListViewManager,
        v6 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B70764(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
        FriendOperationItemListViewManager_CallbackFunc___ctor(
          v6,
          (Il2CppObject *)this,
          (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
          0LL),
        !operationItemListViewManager) )
  {
    sub_B7076C(friendWarningDialog, isDecide);
  }
  FriendOperationItemListViewManager__SetMode(operationItemListViewManager, 2, v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendRootComponent__EndMaxFriendWarningOfferConfirm(
        FriendRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_4354048 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_8821/*"MENU_CANCEL"*/);
    byte_4354048 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_B7076C(0LL, isDecide);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_8821/*"MENU_CANCEL"*/, 0LL);
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
  const MethodInfo *v7; // x3

  if ( (byte_4354035 & 1) == 0 )
  {
    sub_B70694(&FriendSearchMenu_CallbackFunc_TypeInfo);
    sub_B70694(&Method_FriendRootComponent_OnSelectSearchFriend__);
    sub_B70694(&StringLiteral_11231/*"REQUEST_NG"*/);
    byte_4354035 = 1;
  }
  friendWarningDialog = this->fields.friendWarningDialog;
  if ( !friendWarningDialog
    || (FriendWarningDialog__Close_29316204(friendWarningDialog, 0LL, method),
        this->fields.state = 23,
        friendSearchMenu = this->fields.friendSearchMenu,
        v6 = (FriendSearchMenu_CallbackFunc_o *)sub_B70764(FriendSearchMenu_CallbackFunc_TypeInfo),
        FriendSearchMenu_CallbackFunc___ctor(
          v6,
          (Il2CppObject *)this,
          Method_FriendRootComponent_OnSelectSearchFriend__,
          0LL),
        !friendSearchMenu)
    || (FriendSearchMenu__Open(friendSearchMenu, v6, 0, v7),
        (friendWarningDialog = (FriendWarningDialog_o *)this->fields.myFSM) == 0LL) )
  {
    sub_B7076C(friendWarningDialog, isDecide);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)friendWarningDialog, (System_String_o *)StringLiteral_11231/*"REQUEST_NG"*/, 0LL);
}


void __fastcall FriendRootComponent__EndRequestFollowAssign(
        FriendRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *myFSM; // x0
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *v7; // x20
  System_String_o *v8; // x20
  __int64 *v9; // x8
  CommonUI_o *Instance; // x21
  NotificationDialog_ClickDelegate_o *v11; // x22

  if ( (byte_4354056 & 1) == 0 )
  {
    sub_B70694(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B70694(&Method_FriendRootComponent_OnEndRequestDialog__);
    sub_B70694(&JsonManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&StringLiteral_11233/*"REQUEST_OK"*/);
    sub_B70694(&StringLiteral_11231/*"REQUEST_NG"*/);
    sub_B70694(&StringLiteral_21408/*"ng"*/);
    sub_B70694(&StringLiteral_20793/*"message"*/);
    byte_4354056 = 1;
  }
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_21408/*"ng"*/, 0LL) )
  {
    myFSM = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.myFSM;
    if ( myFSM )
    {
      v9 = &StringLiteral_11231/*"REQUEST_NG"*/;
      goto LABEL_15;
    }
LABEL_18:
    sub_B7076C(myFSM, v5);
  }
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  myFSM = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)JsonManager__getDictionary(
                                                                                          result,
                                                                                          0LL);
  if ( !myFSM )
    goto LABEL_18;
  v7 = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)myFSM;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          myFSM,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_20793/*"message"*/,
          (const MethodInfo_2F4FC5C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_11;
  myFSM = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                          v7,
                                                                                          (System_Type_o *)StringLiteral_20793/*"message"*/,
                                                                                          (const MethodInfo_2F4F924 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !myFSM )
    goto LABEL_18;
  v8 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *, Il2CppMethodPointer))myFSM->klass->vtable._3_ToString.method)(
                            myFSM,
                            myFSM->klass->vtable._4_unknown.methodPtr);
  if ( System_String__IsNullOrEmpty(v8, 0LL) )
  {
LABEL_11:
    myFSM = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.myFSM;
    if ( myFSM )
    {
      v9 = &StringLiteral_11233/*"REQUEST_OK"*/;
LABEL_15:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myFSM, (System_String_o *)*v9, 0LL);
      return;
    }
    goto LABEL_18;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (NotificationDialog_ClickDelegate_o *)sub_B70764(NotificationDialog_ClickDelegate_TypeInfo);
  NotificationDialog_ClickDelegate___ctor(
    v11,
    (Il2CppObject *)this,
    Method_FriendRootComponent_OnEndRequestDialog__,
    0LL);
  if ( !Instance )
    goto LABEL_18;
  CommonUI__OpenNotificationDialog_17906460(
    Instance,
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
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *myFSM; // x0
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *v7; // x20
  System_String_o *v8; // x20
  __int64 *v9; // x8
  CommonUI_o *Instance; // x21
  NotificationDialog_ClickDelegate_o *v11; // x22

  if ( (byte_435405F & 1) == 0 )
  {
    sub_B70694(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B70694(&Method_FriendRootComponent_OnEndRequestDialog__);
    sub_B70694(&JsonManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&StringLiteral_11233/*"REQUEST_OK"*/);
    sub_B70694(&StringLiteral_11231/*"REQUEST_NG"*/);
    sub_B70694(&StringLiteral_21408/*"ng"*/);
    sub_B70694(&StringLiteral_20793/*"message"*/);
    byte_435405F = 1;
  }
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_21408/*"ng"*/, 0LL) )
  {
    myFSM = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.myFSM;
    if ( myFSM )
    {
      v9 = &StringLiteral_11231/*"REQUEST_NG"*/;
      goto LABEL_15;
    }
LABEL_18:
    sub_B7076C(myFSM, v5);
  }
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  myFSM = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)JsonManager__getDictionary(
                                                                                          result,
                                                                                          0LL);
  if ( !myFSM )
    goto LABEL_18;
  v7 = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)myFSM;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          myFSM,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_20793/*"message"*/,
          (const MethodInfo_2F4FC5C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_11;
  myFSM = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                          v7,
                                                                                          (System_Type_o *)StringLiteral_20793/*"message"*/,
                                                                                          (const MethodInfo_2F4F924 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !myFSM )
    goto LABEL_18;
  v8 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *, Il2CppMethodPointer))myFSM->klass->vtable._3_ToString.method)(
                            myFSM,
                            myFSM->klass->vtable._4_unknown.methodPtr);
  if ( System_String__IsNullOrEmpty(v8, 0LL) )
  {
LABEL_11:
    myFSM = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.myFSM;
    if ( myFSM )
    {
      v9 = &StringLiteral_11233/*"REQUEST_OK"*/;
LABEL_15:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myFSM, (System_String_o *)*v9, 0LL);
      return;
    }
    goto LABEL_18;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (NotificationDialog_ClickDelegate_o *)sub_B70764(NotificationDialog_ClickDelegate_TypeInfo);
  NotificationDialog_ClickDelegate___ctor(
    v11,
    (Il2CppObject *)this,
    Method_FriendRootComponent_OnEndRequestDialog__,
    0LL);
  if ( !Instance )
    goto LABEL_18;
  CommonUI__OpenNotificationDialog_17906460(
    Instance,
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
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *myFSM; // x0
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *v7; // x20
  System_String_o *v8; // x20
  __int64 *v9; // x8
  CommonUI_o *Instance; // x21
  NotificationDialog_ClickDelegate_o *v11; // x22

  if ( (byte_4354030 & 1) == 0 )
  {
    sub_B70694(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B70694(&Method_FriendRootComponent_OnEndRequestDialog__);
    sub_B70694(&JsonManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&StringLiteral_11233/*"REQUEST_OK"*/);
    sub_B70694(&StringLiteral_11231/*"REQUEST_NG"*/);
    sub_B70694(&StringLiteral_21408/*"ng"*/);
    sub_B70694(&StringLiteral_20793/*"message"*/);
    byte_4354030 = 1;
  }
  MainMenuBar__UpdateNoticeNumber(0LL);
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_21408/*"ng"*/, 0LL) )
  {
    myFSM = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.myFSM;
    if ( myFSM )
    {
      v9 = &StringLiteral_11231/*"REQUEST_NG"*/;
      goto LABEL_15;
    }
LABEL_18:
    sub_B7076C(myFSM, v5);
  }
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  myFSM = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)JsonManager__getDictionary(
                                                                                          result,
                                                                                          0LL);
  if ( !myFSM )
    goto LABEL_18;
  v7 = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)myFSM;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          myFSM,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_20793/*"message"*/,
          (const MethodInfo_2F4FC5C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_11;
  myFSM = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                          v7,
                                                                                          (System_Type_o *)StringLiteral_20793/*"message"*/,
                                                                                          (const MethodInfo_2F4F924 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !myFSM )
    goto LABEL_18;
  v8 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *, Il2CppMethodPointer))myFSM->klass->vtable._3_ToString.method)(
                            myFSM,
                            myFSM->klass->vtable._4_unknown.methodPtr);
  if ( System_String__IsNullOrEmpty(v8, 0LL) )
  {
LABEL_11:
    myFSM = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.myFSM;
    if ( myFSM )
    {
      v9 = &StringLiteral_11233/*"REQUEST_OK"*/;
LABEL_15:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myFSM, (System_String_o *)*v9, 0LL);
      return;
    }
    goto LABEL_18;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (NotificationDialog_ClickDelegate_o *)sub_B70764(NotificationDialog_ClickDelegate_TypeInfo);
  NotificationDialog_ClickDelegate___ctor(
    v11,
    (Il2CppObject *)this,
    Method_FriendRootComponent_OnEndRequestDialog__,
    0LL);
  if ( !Instance )
    goto LABEL_18;
  CommonUI__OpenNotificationDialog_17906460(
    Instance,
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
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  struct DataMasterBase_array *datalist; // x8
  struct OtherUserGameEntity_o *lookup; // x1
  const MethodInfo *v15; // x1
  __int64 *v16; // x8
  const MethodInfo *v17; // x1
  __int64 v18; // x0

  if ( (byte_4354033 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_OtherUserGameMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&StringLiteral_11233/*"REQUEST_OK"*/);
    sub_B70694(&StringLiteral_21560/*"ok"*/);
    sub_B70694(&StringLiteral_11231/*"REQUEST_NG"*/);
    byte_4354033 = 1;
  }
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_21560/*"ok"*/, 0LL) )
    goto LABEL_11;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_OtherUserGameMaster___);
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
    sub_B70630((BattleServantConfConponent_o *)&this->fields.selectFriendEntity, 0LL, v5, v6, v7, v8, v9, v10);
    FriendRootComponent__StartSearchInput(this, v17);
    Instance = (DataManager_o *)this->fields.myFSM;
    if ( Instance )
    {
      v16 = &StringLiteral_11231/*"REQUEST_NG"*/;
      goto LABEL_13;
    }
LABEL_14:
    sub_B7076C(Instance, v12);
  }
  if ( !(_DWORD)datalist )
  {
    v18 = sub_B70798(Instance);
    sub_B70738(v18, 0LL);
  }
  lookup = (struct OtherUserGameEntity_o *)Instance->fields.lookup;
  this->fields.selectFriendEntity = lookup;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.selectFriendEntity,
    (System_Int32_array **)lookup,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  FriendRootComponent__ChangeLimitCountBySpoilerProtection(this, v15);
  Instance = (DataManager_o *)this->fields.myFSM;
  if ( !Instance )
    goto LABEL_14;
  v16 = &StringLiteral_11233/*"REQUEST_OK"*/;
LABEL_13:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v16, 0LL);
}


void __fastcall FriendRootComponent__EndShowServant(
        FriendRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  CommonUI_o *Instance; // x20
  System_Action_o *v9; // x21

  if ( (byte_435401A & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_B70694(&Method_FriendRootComponent_EndCloseShowServant__);
    sub_B70694(&Method_FriendRootComponent_OnSelectFriendItem__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_435401A = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v5 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B70764(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
    0LL);
  if ( !operationItemListViewManager
    || (FriendOperationItemListViewManager__SetMode(operationItemListViewManager, 5, v5, 0LL),
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v9 = (System_Action_o *)sub_B70764(System_Action_TypeInfo),
        System_Action___ctor(v9, (Il2CppObject *)this, Method_FriendRootComponent_EndCloseShowServant__, 0LL),
        !Instance) )
  {
    sub_B7076C(v6, v7);
  }
  CommonUI__CloseServantStatusDialog(Instance, v9, 0LL);
}


void __fastcall FriendRootComponent__EndShowServantEquip(
        FriendRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4354044 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_FriendRootComponent_EndCloseShowServantEquip__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4354044 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_FriendRootComponent_EndCloseShowServantEquip__, 0LL);
  if ( !Instance )
    sub_B7076C(v6, v7);
  CommonUI__CloseServantEquipStatusDialog(Instance, v5, 0LL);
}


void __fastcall FriendRootComponent__FriendLockRequst(
        FriendRootComponent_o *this,
        System_Action_string__o *onFinishedRequest,
        const MethodInfo *method)
{
  __int64 v5; // x20
  ListViewManager_o *operationItemListViewManager; // x0
  int64_t items; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Collections_Generic_List_long__o *v20; // x21
  System_Collections_Generic_List_long__o *v21; // x22
  System_Collections_Generic_List_long__o *v22; // x23
  System_Collections_Generic_List_long__o *v23; // x24
  int32_t ItemSum; // w0
  int32_t v25; // w25
  int dragParentObject; // w8
  ListViewManager_o *v27; // x26
  struct System_Collections_Generic_List_UIDragDropListViewSurface__o *dropList; // x8
  const MethodInfo_30BC188 *v29; // x2
  System_Collections_Generic_List_long__o *v30; // x0
  struct System_Collections_Generic_List_UIDragDropListViewSurface__o *v31; // x8
  NetworkManager_ResultCallbackFunc_o *v32; // x19
  FirendLockSyncRequest_o *v33; // x19
  System_Int64_array *v34; // x20
  System_Int64_array *v35; // x21
  System_Int64_array *v36; // x22

  if ( (byte_4354041 & 1) == 0 )
  {
    sub_B70694(&Method_ActionExtensions_Call_string___);
    sub_B70694(&Method_System_Collections_Generic_List_long__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_long___ctor__);
    sub_B70694(&System_Collections_Generic_List_long__TypeInfo);
    sub_B70694(&Method_NetworkManager_getRequest_FirendLockSyncRequest___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_B70694(&Method_FriendRootComponent___c__DisplayClass109_0__FriendLockRequst_b__0__);
    sub_B70694(&FriendRootComponent___c__DisplayClass109_0_TypeInfo);
    sub_B70694(&StringLiteral_21560/*"ok"*/);
    byte_4354041 = 1;
  }
  v5 = sub_B70764(FriendRootComponent___c__DisplayClass109_0_TypeInfo);
  FriendRootComponent___c__DisplayClass109_0___ctor((FriendRootComponent___c__DisplayClass109_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_37;
  *(_QWORD *)(v5 + 16) = this;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 32) = onFinishedRequest;
  sub_B70630(
    (BattleServantConfConponent_o *)(v5 + 32),
    (System_Int32_array **)onFinishedRequest,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    goto LABEL_37;
  if ( FriendOperationItemListViewManager__get_IsExistSwapLockUser(
         (FriendOperationItemListViewManager_o *)operationItemListViewManager,
         0LL) )
  {
    v20 = (System_Collections_Generic_List_long__o *)sub_B70764(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v20,
      (const MethodInfo_30BB42C *)Method_System_Collections_Generic_List_long___ctor__);
    v21 = (System_Collections_Generic_List_long__o *)sub_B70764(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v21,
      (const MethodInfo_30BB42C *)Method_System_Collections_Generic_List_long___ctor__);
    v22 = (System_Collections_Generic_List_long__o *)sub_B70764(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v22,
      (const MethodInfo_30BB42C *)Method_System_Collections_Generic_List_long___ctor__);
    v23 = (System_Collections_Generic_List_long__o *)sub_B70764(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v23,
      (const MethodInfo_30BB42C *)Method_System_Collections_Generic_List_long___ctor__);
    operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
    if ( operationItemListViewManager )
    {
      ItemSum = ListViewManager__get_ItemSum(operationItemListViewManager, 0LL);
      *(_DWORD *)(v5 + 24) = ItemSum;
      if ( ItemSum >= 1 )
      {
        v25 = 0;
        while ( 1 )
        {
          operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
          if ( !operationItemListViewManager )
            goto LABEL_37;
          operationItemListViewManager = (ListViewManager_o *)FriendOperationItemListViewManager__GetItem(
                                                                (FriendOperationItemListViewManager_o *)operationItemListViewManager,
                                                                v25,
                                                                0LL);
          if ( !operationItemListViewManager )
            goto LABEL_37;
          dragParentObject = (int)operationItemListViewManager->fields.dragParentObject;
          v27 = operationItemListViewManager;
          if ( dragParentObject == 9 )
            break;
          if ( dragParentObject == 3 )
          {
            operationItemListViewManager = (ListViewManager_o *)FriendOperationItemListViewItem__get_IsLockDisp(
                                                                  (FriendOperationItemListViewItem_o *)operationItemListViewManager,
                                                                  0LL);
            dropList = v27->fields.dropList;
            if ( !dropList )
              goto LABEL_37;
            items = (int64_t)dropList->fields._items;
            if ( ((unsigned __int8)operationItemListViewManager & 1) != 0 )
            {
              if ( !v20 )
                goto LABEL_37;
              v29 = (const MethodInfo_30BC188 *)Method_System_Collections_Generic_List_long__Add__;
              v30 = v20;
            }
            else
            {
              if ( !v21 )
                goto LABEL_37;
              v29 = (const MethodInfo_30BC188 *)Method_System_Collections_Generic_List_long__Add__;
              v30 = v21;
            }
LABEL_25:
            System_Collections_Generic_List_long___Add(v30, items, v29);
          }
          if ( ++v25 >= *(_DWORD *)(v5 + 24) )
            goto LABEL_27;
        }
        operationItemListViewManager = (ListViewManager_o *)FriendOperationItemListViewItem__get_IsLockDisp(
                                                              (FriendOperationItemListViewItem_o *)operationItemListViewManager,
                                                              0LL);
        v31 = v27->fields.dropList;
        if ( !v31 )
          goto LABEL_37;
        items = (int64_t)v31->fields._items;
        if ( ((unsigned __int8)operationItemListViewManager & 1) != 0 )
        {
          if ( !v22 )
            goto LABEL_37;
          v29 = (const MethodInfo_30BC188 *)Method_System_Collections_Generic_List_long__Add__;
          v30 = v22;
        }
        else
        {
          if ( !v23 )
            goto LABEL_37;
          v29 = (const MethodInfo_30BC188 *)Method_System_Collections_Generic_List_long__Add__;
          v30 = v23;
        }
        goto LABEL_25;
      }
LABEL_27:
      v32 = (NetworkManager_ResultCallbackFunc_o *)sub_B70764(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v32,
        (Il2CppObject *)v5,
        Method_FriendRootComponent___c__DisplayClass109_0__FriendLockRequst_b__0__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      operationItemListViewManager = (ListViewManager_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                            v32,
                                                            (const MethodInfo_1D57A4C *)Method_NetworkManager_getRequest_FirendLockSyncRequest___);
      if ( v20 )
      {
        v33 = (FirendLockSyncRequest_o *)operationItemListViewManager;
        operationItemListViewManager = (ListViewManager_o *)System_Collections_Generic_List_long___ToArray(
                                                              v20,
                                                              (const MethodInfo_30BE294 *)Method_System_Collections_Generic_List_long__ToArray__);
        if ( v21 )
        {
          v34 = (System_Int64_array *)operationItemListViewManager;
          operationItemListViewManager = (ListViewManager_o *)System_Collections_Generic_List_long___ToArray(
                                                                v21,
                                                                (const MethodInfo_30BE294 *)Method_System_Collections_Generic_List_long__ToArray__);
          if ( v22 )
          {
            v35 = (System_Int64_array *)operationItemListViewManager;
            operationItemListViewManager = (ListViewManager_o *)System_Collections_Generic_List_long___ToArray(
                                                                  v22,
                                                                  (const MethodInfo_30BE294 *)Method_System_Collections_Generic_List_long__ToArray__);
            if ( v23 )
            {
              v36 = (System_Int64_array *)operationItemListViewManager;
              operationItemListViewManager = (ListViewManager_o *)System_Collections_Generic_List_long___ToArray(
                                                                    v23,
                                                                    (const MethodInfo_30BE294 *)Method_System_Collections_Generic_List_long__ToArray__);
              if ( v33 )
              {
                FirendLockSyncRequest__beginRequest(
                  v33,
                  v34,
                  v35,
                  v36,
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
    sub_B7076C(operationItemListViewManager, items);
  }
  ActionExtensions__Call_BlankEarth_QAARotateEarthResponse_(
    *(System_Action_T__o **)(v5 + 32),
    (BlankEarth_QAARotateEarthResponse_o *)StringLiteral_21560/*"ok"*/,
    (const MethodInfo_2BFC288 *)Method_ActionExtensions_Call_string___);
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
  if ( (byte_435403C & 1) == 0 )
  {
    this = (FriendRootComponent_o *)sub_B70694(&FSUtility_TypeInfo);
    byte_435403C = 1;
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
    sub_B7076C(this, method);
  }
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  z = localPosition.fields.z;
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  v8 = (float)mWidth;
  if ( !FSUtility__IsUnderVista(0LL) )
  {
    if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
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
    sub_B7076C(modeButtonParent, method);
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
  UnityEngine_Transform_o *transform; // x19
  FriendRootComponent_c *v6; // x0
  int v7; // s0

  modeButtonParent = this->fields.modeButtonParent;
  if ( !modeButtonParent )
    goto LABEL_11;
  transform = UnityEngine_GameObject__get_transform(modeButtonParent, 0LL);
  if ( !byte_4354108 )
  {
    sub_B70694(&FriendRootComponent_TypeInfo);
    byte_4354108 = 1;
  }
  v6 = FriendRootComponent_TypeInfo;
  if ( (BYTE3(FriendRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FriendRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendRootComponent_TypeInfo);
    v6 = FriendRootComponent_TypeInfo;
  }
  if ( !v6->static_fields->tabKindSave )
  {
    *(UnityEngine_Vector3_o *)&v7 = FriendRootComponent__GetDisplayPositionModeKindButtons(this, v4);
    if ( transform )
      goto LABEL_9;
LABEL_11:
    sub_B7076C(modeButtonParent, method);
  }
  *(UnityEngine_Vector3_o *)&v7 = FriendRootComponent__GetHidePositionModeKindButtons(this, v4);
  if ( !transform )
    goto LABEL_11;
LABEL_9:
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v7, 0LL);
}


void __fastcall FriendRootComponent__OnClickBack(FriendRootComponent_o *this, const MethodInfo *method)
{
  int32_t state; // w8
  FriendRootComponent_messageRequestCallback_o *v4; // x20
  const MethodInfo *v5; // x2

  if ( (byte_4354037 & 1) == 0 )
  {
    sub_B70694(&Method_FriendRootComponent__OnClickBack_b__96_0__);
    sub_B70694(&SoundManager_TypeInfo);
    sub_B70694(&FriendRootComponent_messageRequestCallback_TypeInfo);
    byte_4354037 = 1;
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
  v4 = (FriendRootComponent_messageRequestCallback_o *)sub_B70764(FriendRootComponent_messageRequestCallback_TypeInfo);
  FriendRootComponent_messageRequestCallback___ctor(
    v4,
    (Il2CppObject *)this,
    Method_FriendRootComponent__OnClickBack_b__96_0__,
    0LL);
  FriendRootComponent__messageDispChangeRequest(this, v4, v5);
}


void __fastcall FriendRootComponent__OnClickHelp(FriendRootComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4354060 & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    byte_4354060 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  EventTutorialMaster__ShowTutorialWithoutCheck(-1, 49, 0LL, 0LL);
}


void __fastcall FriendRootComponent__OnClickModeEditLock(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_435403A & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    byte_435403A = 1;
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
    FriendRootComponent__RefreshInfo(this, v3);
  }
}


void __fastcall FriendRootComponent__OnClickModeUserDetail(FriendRootComponent_o *this, const MethodInfo *method)
{
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4354039 & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_string___ctor__);
    sub_B70694(&System_Action_string__TypeInfo);
    sub_B70694(&Method_FriendRootComponent__OnClickModeUserDetail_b__98_0__);
    byte_4354039 = 1;
  }
  if ( this->fields.currentModeKind )
  {
    v3 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B70764(System_Action_string__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v3,
      (Il2CppObject *)this,
      Method_FriendRootComponent__OnClickModeUserDetail_b__98_0__,
      (const MethodInfo_264C148 *)Method_System_Action_string___ctor__);
    FriendRootComponent__FriendLockRequst(this, (System_Action_string__o *)v3, v4);
  }
}


void __fastcall FriendRootComponent__OnClickTabFriend(FriendRootComponent_o *this, const MethodInfo *method)
{
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_435403D & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_string___ctor__);
    sub_B70694(&System_Action_string__TypeInfo);
    sub_B70694(&Method_FriendRootComponent__OnClickTabFriend_b__105_0__);
    byte_435403D = 1;
  }
  v3 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B70764(System_Action_string__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v3,
    (Il2CppObject *)this,
    Method_FriendRootComponent__OnClickTabFriend_b__105_0__,
    (const MethodInfo_264C148 *)Method_System_Action_string___ctor__);
  FriendRootComponent__FriendLockRequst(this, (System_Action_string__o *)v3, v4);
}


void __fastcall FriendRootComponent__OnClickTabOffered(FriendRootComponent_o *this, const MethodInfo *method)
{
  FriendRootComponent_messageRequestCallback_o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_435403E & 1) == 0 )
  {
    sub_B70694(&Method_FriendRootComponent__OnClickTabOffered_b__106_0__);
    sub_B70694(&FriendRootComponent_messageRequestCallback_TypeInfo);
    byte_435403E = 1;
  }
  v3 = (FriendRootComponent_messageRequestCallback_o *)sub_B70764(FriendRootComponent_messageRequestCallback_TypeInfo);
  FriendRootComponent_messageRequestCallback___ctor(
    v3,
    (Il2CppObject *)this,
    Method_FriendRootComponent__OnClickTabOffered_b__106_0__,
    0LL);
  FriendRootComponent__messageDispChangeRequest(this, v3, v4);
}


void __fastcall FriendRootComponent__OnClickTabSearch(FriendRootComponent_o *this, const MethodInfo *method)
{
  FriendRootComponent_messageRequestCallback_o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_435403F & 1) == 0 )
  {
    sub_B70694(&Method_FriendRootComponent__OnClickTabSearch_b__107_0__);
    sub_B70694(&FriendRootComponent_messageRequestCallback_TypeInfo);
    byte_435403F = 1;
  }
  v3 = (FriendRootComponent_messageRequestCallback_o *)sub_B70764(FriendRootComponent_messageRequestCallback_TypeInfo);
  FriendRootComponent_messageRequestCallback___ctor(
    v3,
    (Il2CppObject *)this,
    Method_FriendRootComponent__OnClickTabSearch_b__107_0__,
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

  if ( (byte_4354031 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&StringLiteral_11233/*"REQUEST_OK"*/);
    byte_4354031 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.myFSM) == 0LL) )
  {
    sub_B7076C(Instance, v5);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_11233/*"REQUEST_OK"*/, 0LL);
}


void __fastcall FriendRootComponent__OnMoveEnd(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  FriendRootComponent_o *v3; // x19
  UnityEngine_GameObject_o *operationItemListViewManager; // x0
  int32_t v5; // w1
  const MethodInfo *v6; // x1
  FriendOperationItemListViewManager_o *v7; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v8; // x21
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  FriendOperationItemListViewManager_o *v10; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v11; // x21
  FriendSearchMenu_o *friendSearchMenu; // x20
  FriendSearchMenu_CallbackFunc_o *v13; // x21
  const MethodInfo *v14; // x3
  FriendOperationItemListViewManager_o *v15; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v16; // x21
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x1
  struct ClassButtonControlComponent_o *v19; // x8
  FriendSearchMenu_o *v20; // x20
  FriendSearchMenu_CallbackFunc_o *v21; // x21
  const MethodInfo *v22; // x3

  v3 = this;
  if ( (byte_4354036 & 1) == 0 )
  {
    sub_B70694(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_B70694(&FriendSearchMenu_CallbackFunc_TypeInfo);
    sub_B70694(&Method_FriendRootComponent_OnSelectFriendItem__);
    sub_B70694(&Method_FriendRootComponent_OnSelectSearchFriend__);
    this = (FriendRootComponent_o *)sub_B70694(&StringLiteral_5564/*"END_ACTION"*/);
    byte_4354036 = 1;
  }
  switch ( v3->fields.state )
  {
    case 2:
    case 3:
      v5 = 0;
      v3->fields.state = 4;
      goto LABEL_10;
    case 5:
    case 6:
    case 0xA:
    case 0xB:
    case 0xF:
    case 0x10:
      operationItemListViewManager = (UnityEngine_GameObject_o *)v3->fields.operationItemListViewManager;
      v3->fields.state = 1;
      if ( !operationItemListViewManager )
        goto LABEL_30;
      FriendOperationItemListViewManager__DestroyList(
        (FriendOperationItemListViewManager_o *)operationItemListViewManager,
        0LL);
      operationItemListViewManager = (UnityEngine_GameObject_o *)v3->fields.operationItemListViewManager;
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
      v3->fields.state = 9;
      v10 = v3->fields.operationItemListViewManager;
      v11 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B70764(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
      FriendOperationItemListViewManager_CallbackFunc___ctor(
        v11,
        (Il2CppObject *)v3,
        (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
        0LL);
      if ( !v10 )
        goto LABEL_30;
      FriendOperationItemListViewManager__SetMode(v10, 2, v11, 0LL);
      goto LABEL_21;
    case 0xC:
    case 0xD:
      v3->fields.state = 14;
      v5 = 1;
LABEL_10:
      FriendRootComponent__set_tabKind(this, v5, v2);
      FriendRootComponent__RefreshTab(v3, v6);
      v7 = v3->fields.operationItemListViewManager;
      v8 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B70764(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
      FriendOperationItemListViewManager_CallbackFunc___ctor(
        v8,
        (Il2CppObject *)v3,
        (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
        0LL);
      if ( !v7 )
        goto LABEL_30;
      FriendOperationItemListViewManager__SetMode(v7, 2, v8, 0LL);
      classButtonControl = v3->fields.classButtonControl;
      if ( !classButtonControl )
        goto LABEL_30;
      classButtonControl->fields.updateEnable = 1;
LABEL_21:
      FriendRootComponent__RefreshInfo(v3, method);
      break;
    case 0x11:
      v3->fields.state = 18;
      return;
    case 0x12:
      v3->fields.state = 19;
      v15 = v3->fields.operationItemListViewManager;
      v16 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B70764(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
      FriendOperationItemListViewManager_CallbackFunc___ctor(
        v16,
        (Il2CppObject *)v3,
        (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
        0LL);
      if ( !v15 )
        goto LABEL_30;
      FriendOperationItemListViewManager__SetMode(v15, 2, v16, 0LL);
      break;
    case 0x14:
    case 0x15:
      v3->fields.state = 23;
      friendSearchMenu = v3->fields.friendSearchMenu;
      v13 = (FriendSearchMenu_CallbackFunc_o *)sub_B70764(FriendSearchMenu_CallbackFunc_TypeInfo);
      FriendSearchMenu_CallbackFunc___ctor(
        v13,
        (Il2CppObject *)v3,
        Method_FriendRootComponent_OnSelectSearchFriend__,
        0LL);
      if ( !friendSearchMenu )
        goto LABEL_30;
      FriendSearchMenu__Open(friendSearchMenu, v13, 0, v14);
      operationItemListViewManager = (UnityEngine_GameObject_o *)v3->fields.operationItemListViewManager;
      if ( !operationItemListViewManager )
        goto LABEL_30;
      FriendOperationItemListViewManager__DestroyList(
        (FriendOperationItemListViewManager_o *)operationItemListViewManager,
        0LL);
      operationItemListViewManager = (UnityEngine_GameObject_o *)v3->fields.operationItemListViewManager;
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
      v3->fields.state = 23;
      FriendRootComponent__set_tabKind(this, 2, v2);
      FriendRootComponent__RefreshTab(v3, v17);
      FriendRootComponent__RefreshInfo(v3, v18);
      v19 = v3->fields.classButtonControl;
      if ( !v19 )
        goto LABEL_30;
      v19->fields.updateEnable = 1;
      v20 = v3->fields.friendSearchMenu;
      v21 = (FriendSearchMenu_CallbackFunc_o *)sub_B70764(FriendSearchMenu_CallbackFunc_TypeInfo);
      FriendSearchMenu_CallbackFunc___ctor(
        v21,
        (Il2CppObject *)v3,
        Method_FriendRootComponent_OnSelectSearchFriend__,
        0LL);
      if ( !v20 )
        goto LABEL_30;
      FriendSearchMenu__Open(v20, v21, 1, v22);
      break;
    case 0x18:
    case 0x19:
      v3->fields.state = 1;
      goto LABEL_21;
    default:
      return;
  }
  operationItemListViewManager = (UnityEngine_GameObject_o *)v3->fields.myFSM;
  if ( !operationItemListViewManager )
LABEL_30:
    sub_B7076C(operationItemListViewManager, method);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)operationItemListViewManager, (System_String_o *)StringLiteral_5564/*"END_ACTION"*/, 0LL);
}


void __fastcall FriendRootComponent__OnSelectFriendItem(
        FriendRootComponent_o *this,
        int32_t kind,
        int32_t n,
        const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x21
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  TblFriendMaster_o *MasterData_WarQuestSelectionMaster; // x22
  __int64 v11; // x8
  __int64 v12; // x20
  SkillInfo_o *v13; // x22
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0
  System_String_o *v16; // x20
  System_String_o *v17; // x21
  __int64 v18; // x2
  Il2CppObject *v19; // x0
  System_String_o *v20; // x0
  System_String_o *v21; // x1
  System_String_o *v22; // x3
  System_String_o *v23; // x2
  _QWORD *v24; // x0
  System_Reflection_MethodBase_o *v25; // x0
  FriendOperationItemListViewItem_o *v26; // x21
  __int64 v27; // x8
  __int64 v28; // x20
  SkillInfo_o *v29; // x24
  SkillEntity_o *Entity; // x21
  DataManager_o *v31; // x20
  System_String_o *v32; // x21
  System_String_o *v33; // x22
  __int64 v34; // x2
  Il2CppObject *v35; // x0
  System_String_o *v36; // x0
  __int64 v37; // x2
  System_String_o *v38; // x21
  Il2CppObject *v39; // x0
  System_String_o *v40; // x20
  __int64 *v41; // x8
  DataManager_o *v42; // x8
  FriendRootComponent_c *v43; // x0
  DataManager_o *v44; // x8
  __int64 v45; // x9
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  const MethodInfo *v47; // x2
  FriendOperationItemListViewItem_o *v48; // x20
  ServantLeaderInfo_o *ServantLeader; // x0
  EquipTargetInfo_o *EquipTargetInfo; // x0
  EquipTargetInfo_o *v51; // x21
  __int64 v52; // x22
  __int64 v53; // x23
  const MethodInfo *v54; // x3
  int32_t v55; // w2
  FriendWarningDialog_o *friendWarningDialog; // x20
  FriendWarningDialog_CallbackFunc_o *v57; // x21
  const MethodInfo *v58; // x3
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v60; // x21
  FriendOperationItemListViewItem_o *Item; // x0
  FriendOperationItemListViewItem_o *v62; // x20
  __int64 v63; // x0
  int datalist; // [xsp+8h] [xbp-68h] BYREF
  int32_t lv; // [xsp+Ch] [xbp-64h] BYREF
  System_String_o *detail; // [xsp+10h] [xbp-60h] BYREF
  System_String_o *name; // [xsp+18h] [xbp-58h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+20h] [xbp-50h] BYREF
  System_String_o *v69; // [xsp+28h] [xbp-48h] BYREF
  System_String_o *v70; // [xsp+30h] [xbp-40h] BYREF
  SkillInfo_array *v71; // [xsp+38h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v72; // 0:x0.16

  if ( (byte_4354046 & 1) == 0 )
  {
    sub_B70694(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_B70694(&FriendWarningDialog_CallbackFunc_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_TblFriendMaster___);
    sub_B70694(&Method_DataManager_GetMaster_SkillMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_B70694(&Method_FriendRootComponent_EndMaxFriendWarning__);
    sub_B70694(&Method_FriendRootComponent_OnSelectFriendItem__);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&SoundManager_TypeInfo);
    sub_B70694(&StringLiteral_8835/*"MENU_SELECT_ITEM_ACCEPT"*/);
    sub_B70694(&StringLiteral_82/*" "*/);
    sub_B70694(&StringLiteral_8841/*"MENU_SELECT_ITEM_REMOVE_FOLLOW"*/);
    sub_B70694(&StringLiteral_8836/*"MENU_SELECT_ITEM_CANCEL"*/);
    sub_B70694(&StringLiteral_8734/*"MASTER_EQSKILL_LV_TXT"*/);
    sub_B70694(&StringLiteral_8838/*"MENU_SELECT_ITEM_OFFER"*/);
    sub_B70694(&StringLiteral_2579/*"BATTLE_SKILLCHARGETURN"*/);
    sub_B70694(&StringLiteral_8839/*"MENU_SELECT_ITEM_REJECT"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    sub_B70694(&StringLiteral_8840/*"MENU_SELECT_ITEM_REMOVE"*/);
    byte_4354046 = 1;
  }
  v70 = 0LL;
  v71 = 0LL;
  skillInfoList = 0LL;
  v69 = 0LL;
  detail = 0LL;
  name = 0LL;
  this->fields.selectItemNum = n;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_151;
  MasterData_WarQuestSelectionMaster = (TblFriendMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              Instance,
                                                              (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_TblFriendMaster___);
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
      v26 = (FriendOperationItemListViewItem_o *)Instance;
      Instance = *(DataManager_o **)&Instance->fields.writeMasterDataThreadEnd;
      if ( !Instance )
        goto LABEL_151;
      v27 = *(_QWORD *)&Instance->fields.nowLoadCount;
      if ( !v27 )
        goto LABEL_151;
      if ( !*(_DWORD *)(v27 + 24) )
        goto LABEL_152;
      if ( !OtherUserGameEntity__getServantLeaderInfo(
              (OtherUserGameEntity_o *)Instance,
              v26->fields.classPos,
              0,
              0,
              *(_DWORD *)(v27 + 32),
              0LL) )
        goto LABEL_140;
      if ( kind == 2 )
        v28 = 1LL;
      else
        v28 = 2LL * (kind == 3);
      Instance = (DataManager_o *)FriendOperationItemListViewItem__GetSkillInfo(v26, &v71, 0LL);
      if ( !v71 )
        goto LABEL_151;
      if ( (unsigned int)v28 >= v71->max_length )
        goto LABEL_152;
      v29 = v71->m_Items[v28];
      if ( !v29 || v29->fields.id < 1 || v29->fields.lv < 1 )
        goto LABEL_140;
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_151;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_SkillMaster___);
      if ( !Instance )
        goto LABEL_151;
      Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                  v29->fields.id,
                                  (const MethodInfo_21C0440 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_151;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_SkillLvMaster___);
      if ( !Instance )
        goto LABEL_151;
      Instance = (DataManager_o *)SkillLvMaster__GetEntity(
                                    (SkillLvMaster_o *)Instance,
                                    v29->fields.id,
                                    v29->fields.lv,
                                    0LL);
      if ( !Entity )
        goto LABEL_151;
      v31 = Instance;
      SkillEntity__getSkillMessageInfo(Entity, &v70, &v69, v29->fields.lv, 0LL);
      v32 = v70;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v33 = LocalizationManager__Get((System_String_o *)StringLiteral_8734/*"MASTER_EQSKILL_LV_TXT"*/, 0LL);
      lv = v29->fields.lv;
      v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv, v34);
      v36 = System_String__Format(v33, v35, 0LL);
      v70 = System_String__Concat_44760452(v32, (System_String_o *)StringLiteral_82/*" "*/, v36, 0LL);
      Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2579/*"BATTLE_SKILLCHARGETURN"*/, 0LL);
      if ( !v31 )
        goto LABEL_151;
      v38 = (System_String_o *)Instance;
      datalist = (int)v31->fields.datalist;
      v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &datalist, v37);
      v40 = System_String__Format(v38, v39, 0LL);
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !Instance )
        goto LABEL_151;
      v22 = v69;
      v21 = v70;
      v23 = v40;
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
      v41 = &StringLiteral_8838/*"MENU_SELECT_ITEM_OFFER"*/;
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
        v57 = (FriendWarningDialog_CallbackFunc_o *)sub_B70764(FriendWarningDialog_CallbackFunc_TypeInfo);
        FriendWarningDialog_CallbackFunc___ctor(
          v57,
          (Il2CppObject *)this,
          Method_FriendRootComponent_EndMaxFriendWarning__,
          0LL);
        if ( friendWarningDialog )
        {
          FriendWarningDialog__Open(friendWarningDialog, 1, v57, v58);
          return;
        }
LABEL_151:
        sub_B7076C(Instance, v9);
      }
      Instance = (DataManager_o *)this->fields.myFSM;
      if ( !Instance )
        goto LABEL_151;
      v41 = &StringLiteral_8835/*"MENU_SELECT_ITEM_ACCEPT"*/;
LABEL_143:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v41, 0LL);
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
      v41 = &StringLiteral_8839/*"MENU_SELECT_ITEM_REJECT"*/;
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
      v41 = &StringLiteral_8836/*"MENU_SELECT_ITEM_CANCEL"*/;
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
      v42 = Instance;
      Instance = (DataManager_o *)this->fields.myFSM;
      if ( !Instance )
        goto LABEL_151;
      if ( LODWORD(v42->fields.writeMasterDataThread) == 9 )
        v41 = &StringLiteral_8841/*"MENU_SELECT_ITEM_REMOVE_FOLLOW"*/;
      else
        v41 = &StringLiteral_8840/*"MENU_SELECT_ITEM_REMOVE"*/;
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
      v48 = (FriendOperationItemListViewItem_o *)Instance;
      ServantLeader = FriendOperationItemListViewItem__get_ServantLeader(
                        (FriendOperationItemListViewItem_o *)Instance,
                        0LL);
      if ( !ServantLeader || !ServantLeaderInfo__IsHideEquip(ServantLeader, 0LL) )
      {
        EquipTargetInfo = FriendOperationItemListViewItem__get_EquipTargetInfo(v48, 0LL);
        if ( EquipTargetInfo )
        {
          v51 = EquipTargetInfo;
          v53 = *(_QWORD *)&EquipTargetInfo->fields.svtId.fields.currentCryptoKey;
          v52 = *(_QWORD *)&EquipTargetInfo->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v72.fields.currentCryptoKey = v53;
          *(_QWORD *)&v72.fields.fakeValue = v52;
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v72, 0LL) >= 1 )
          {
            if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !SoundManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
            }
            SoundManager__playSystemSe(0, 0LL);
            if ( v48->fields.kind == 9 )
              v55 = 14;
            else
              v55 = 13;
            FriendRootComponent__SelectShowServantEquip(this, v51, v55, v54);
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
      v11 = (unsigned int)(kind - 14);
      v12 = (unsigned int)v11 < 4 ? v11 + 1 : 0LL;
      if ( !Instance )
        goto LABEL_151;
      Instance = (DataManager_o *)FriendOperationItemListViewItem__GetAppendSkillInfo(
                                    (FriendOperationItemListViewItem_o *)Instance,
                                    &skillInfoList,
                                    0LL);
      if ( !skillInfoList )
        goto LABEL_151;
      if ( (unsigned int)v12 >= skillInfoList->max_length )
        goto LABEL_152;
      v13 = skillInfoList->m_Items[v12];
      if ( v13 && v13->fields.id >= 1 && v13->fields.lv >= 1 )
      {
        v14 = Method_FriendRootComponent_OnSelectFriendItem__;
        if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 75) & 2) != 0 )
          v14 = (_QWORD *)sub_B7069C(Method_FriendRootComponent_OnSelectFriendItem__);
        v15 = (System_Reflection_MethodBase_o *)sub_B70678(v14, v14[3]);
        OverwriteAssetSoundName__PlaySystemSe(v15, 0, 0LL);
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        Instance = (DataManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_SkillMaster___);
        if ( !Instance )
          goto LABEL_151;
        Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                      v13->fields.id,
                                      (const MethodInfo_21C0440 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_151;
        SkillEntity__getSkillMessageInfo((SkillEntity_o *)Instance, &name, &detail, v13->fields.lv, 0LL);
        v16 = name;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v17 = LocalizationManager__Get((System_String_o *)StringLiteral_8734/*"MASTER_EQSKILL_LV_TXT"*/, 0LL);
        lv = v13->fields.lv;
        v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv, v18);
        v20 = System_String__Format(v17, v19, 0LL);
        name = System_String__Concat_44760452(v16, (System_String_o *)StringLiteral_82/*" "*/, v20, 0LL);
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !Instance )
          goto LABEL_151;
        v22 = detail;
        v21 = name;
        v23 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_58:
        CommonUI__OpenDetailLongInfoDialog((CommonUI_o *)Instance, v21, v23, v22, 1, 0, 0LL);
      }
      else
      {
        v24 = Method_FriendRootComponent_OnSelectFriendItem__;
        if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 75) & 2) != 0 )
          v24 = (_QWORD *)sub_B7069C(Method_FriendRootComponent_OnSelectFriendItem__);
        v25 = (System_Reflection_MethodBase_o *)sub_B70678(v24, v24[3]);
        OverwriteAssetSoundName__PlaySystemSe(v25, 2, 0LL);
      }
      goto LABEL_140;
    default:
      if ( this->fields.currentModeKind != 1 )
        goto LABEL_155;
      if ( !byte_4354108 )
      {
        sub_B70694(&FriendRootComponent_TypeInfo);
        byte_4354108 = 1;
      }
      v43 = FriendRootComponent_TypeInfo;
      if ( (BYTE3(FriendRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !FriendRootComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FriendRootComponent_TypeInfo);
        v43 = FriendRootComponent_TypeInfo;
      }
      if ( !v43->static_fields->tabKindSave )
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
          v62 = Item;
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(11, 0LL);
          FriendOperationItemListViewItem__SwapLock(v62, 0LL);
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
        v44 = Instance;
        Instance = *(DataManager_o **)&Instance->fields.writeMasterDataThreadEnd;
        if ( !Instance )
          goto LABEL_151;
        v45 = *(_QWORD *)&Instance->fields.nowLoadCount;
        if ( !v45 )
          goto LABEL_151;
        if ( !*(_DWORD *)(v45 + 24) )
        {
LABEL_152:
          v63 = sub_B70798(Instance);
          sub_B70738(v63, 0LL);
        }
        ServantLeaderInfo = OtherUserGameEntity__getServantLeaderInfo(
                              (OtherUserGameEntity_o *)Instance,
                              (int32_t)v44[1].fields.lookup,
                              0,
                              0,
                              *(_DWORD *)(v45 + 32),
                              0LL);
        if ( ServantLeaderInfo )
        {
          FriendRootComponent__SelectShowServant(this, ServantLeaderInfo, v47);
          return;
        }
      }
LABEL_140:
      operationItemListViewManager = this->fields.operationItemListViewManager;
      v60 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B70764(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
      FriendOperationItemListViewManager_CallbackFunc___ctor(
        v60,
        (Il2CppObject *)this,
        (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
        0LL);
      if ( operationItemListViewManager )
      {
        FriendOperationItemListViewManager__SetMode(operationItemListViewManager, 2, v60, 0LL);
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
  ClassButtonControlComponent_o *classButtonControl; // x0
  __int64 *v8; // x8

  if ( (byte_4354050 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_8837/*"MENU_SELECT_ITEM_FOLLOW"*/);
    sub_B70694(&StringLiteral_8838/*"MENU_SELECT_ITEM_OFFER"*/);
    sub_B70694(&StringLiteral_8821/*"MENU_CANCEL"*/);
    byte_4354050 = 1;
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
      v8 = &StringLiteral_8838/*"MENU_SELECT_ITEM_OFFER"*/;
      goto LABEL_11;
    }
LABEL_12:
    sub_B7076C(classButtonControl, *(_QWORD *)&state);
  }
  if ( !classButtonControl )
    goto LABEL_12;
  if ( state == 3 )
    v8 = &StringLiteral_8837/*"MENU_SELECT_ITEM_FOLLOW"*/;
  else
    v8 = &StringLiteral_8821/*"MENU_CANCEL"*/;
LABEL_11:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)classButtonControl, (System_String_o *)*v8, 0LL);
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
  __int64 v11; // x1
  PlayMakerFSM_o *myFSM; // x0
  __int64 *v13; // x8

  if ( (byte_435404F & 1) == 0 )
  {
    sub_B70694(&StringLiteral_8822/*"MENU_DECIDE"*/);
    sub_B70694(&StringLiteral_8821/*"MENU_CANCEL"*/);
    byte_435404F = 1;
  }
  this->fields.selectFriendCode = friendCode;
  sub_B70630(
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
    sub_B7076C(0LL, v11);
  v13 = &StringLiteral_8822/*"MENU_DECIDE"*/;
  if ( !isDecide )
    v13 = &StringLiteral_8821/*"MENU_CANCEL"*/;
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)*v13, 0LL);
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
    sub_B7076C(operationItemListViewManager, method);
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
  TblFriendMaster_o *MasterData_WarQuestSelectionMaster; // x20
  WarQuestSelectionMaster_o *v7; // x0
  UILabel_o *friendCountLabel; // x23
  UserFollowMaster_o *v9; // x21
  System_String_o *v10; // x24
  __int64 v11; // x2
  __int64 v12; // x2
  Il2CppObject *v13; // x25
  Il2CppObject *v14; // x0
  UILabel_o *followCountLabel; // x22
  System_String_o *v16; // x23
  __int64 v17; // x2
  __int64 v18; // x2
  Il2CppObject *v19; // x21
  BalanceConfig_c *v20; // x8
  Il2CppObject *v21; // x0
  const MethodInfo *v22; // x1
  const MethodInfo *v23; // x1
  int32_t FollowNum; // [xsp+8h] [xbp-58h] BYREF
  int32_t FollowSum; // [xsp+Ch] [xbp-54h] BYREF
  int32_t friendKeep; // [xsp+18h] [xbp-48h] BYREF
  int32_t FriendSum; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_435400C & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_TblFriendMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserFollowMaster___);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&StringLiteral_6593/*"FRIEND_SHOW_INFOMATION"*/);
    byte_435400C = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  MasterData_WarQuestSelectionMaster = (TblFriendMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              Instance,
                                                              (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_TblFriendMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  v7 = DataManager__GetMasterData_WarQuestSelectionMaster_(
         Instance,
         (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserFollowMaster___);
  friendCountLabel = this->fields.friendCountLabel;
  v9 = (UserFollowMaster_o *)v7;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6593/*"FRIEND_SHOW_INFOMATION"*/, 0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_18;
  v10 = (System_String_o *)Instance;
  FriendSum = TblFriendMaster__GetFriendSum(MasterData_WarQuestSelectionMaster, 0LL);
  Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &FriendSum, v11);
  if ( !SelfUserGame )
    goto LABEL_18;
  v13 = (Il2CppObject *)Instance;
  friendKeep = SelfUserGame->fields.friendKeep;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &friendKeep, v12);
  Instance = (DataManager_o *)System_String__Format_44753704(v10, v13, v14, 0LL);
  if ( !friendCountLabel )
    goto LABEL_18;
  UILabel__set_text(friendCountLabel, (System_String_o *)Instance, 0LL);
  followCountLabel = this->fields.followCountLabel;
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6593/*"FRIEND_SHOW_INFOMATION"*/, 0LL);
  if ( !v9 )
    goto LABEL_18;
  v16 = (System_String_o *)Instance;
  FollowSum = UserFollowMaster__GetFollowSum(v9, 0LL);
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &FollowSum, v17);
  v20 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v20 = BalanceConfig_TypeInfo;
  }
  FollowNum = v20->static_fields->FollowNum;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &FollowNum, v18);
  Instance = (DataManager_o *)System_String__Format_44753704(v16, v19, v21, 0LL);
  if ( !followCountLabel
    || (UILabel__set_text(followCountLabel, (System_String_o *)Instance, 0LL),
        Instance = (DataManager_o *)TblFriendMaster__GetSum(MasterData_WarQuestSelectionMaster, 2, 0LL),
        !this->fields.noticeNumber) )
  {
LABEL_18:
    sub_B7076C(Instance, v5);
  }
  NoticeNumberComponent__SetNumber(this->fields.noticeNumber, (int32_t)Instance, 0LL);
  FriendRootComponent__CheckModeKind(this, v22);
  FriendRootComponent__CheckHelpUI(this, v23);
}


void __fastcall FriendRootComponent__RefreshTab(FriendRootComponent_o *this, const MethodInfo *method)
{
  FriendRootComponent_c *v3; // x0
  int32_t tabKindSave; // w8
  UnityEngine_Behaviour_o *tabFriendButton; // x0
  System_String_o *v6; // x1
  System_String_o *v7; // x1
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x2
  FriendRootComponent_c *v10; // x0
  UICommonButton_o *v11; // x20
  bool enabled; // w0
  UICommonButton_o *tabOfferedButton; // x20
  bool v14; // w0
  UnityEngine_Behaviour_o *tabSearchButton; // x19
  bool v16; // w1

  if ( (byte_435400B & 1) == 0 )
  {
    sub_B70694(&StringLiteral_17316/*"btn_txt_friendsearch_on"*/);
    sub_B70694(&StringLiteral_17315/*"btn_txt_friendsearch_off"*/);
    sub_B70694(&StringLiteral_17217/*"btn_bg_09"*/);
    sub_B70694(&StringLiteral_17314/*"btn_txt_friendrequest_on"*/);
    sub_B70694(&StringLiteral_17312/*"btn_txt_friendlist_on"*/);
    sub_B70694(&StringLiteral_17313/*"btn_txt_friendrequest_off"*/);
    sub_B70694(&StringLiteral_17311/*"btn_txt_friendlist_off"*/);
    sub_B70694(&StringLiteral_17232/*"btn_bg_on"*/);
    byte_435400B = 1;
  }
  if ( !byte_4354108 )
  {
    sub_B70694(&FriendRootComponent_TypeInfo);
    byte_4354108 = 1;
  }
  v3 = FriendRootComponent_TypeInfo;
  if ( (BYTE3(FriendRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FriendRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendRootComponent_TypeInfo);
    v3 = FriendRootComponent_TypeInfo;
  }
  tabKindSave = v3->static_fields->tabKindSave;
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
    UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17311/*"btn_txt_friendlist_off"*/, 0LL);
    tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabOfferedTitleSprite;
    if ( !tabFriendButton )
      goto LABEL_63;
    UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17313/*"btn_txt_friendrequest_off"*/, 0LL);
    tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabSearchTitleSprite;
    if ( !tabFriendButton )
      goto LABEL_63;
    UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17316/*"btn_txt_friendsearch_on"*/, 0LL);
    tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabFriendSprite;
    if ( !tabFriendButton )
      goto LABEL_63;
    UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17217/*"btn_bg_09"*/, 0LL);
    tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabOfferedSprite;
    if ( !tabFriendButton )
      goto LABEL_63;
    UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17217/*"btn_bg_09"*/, 0LL);
    tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabSearchSprite;
    if ( !tabFriendButton )
      goto LABEL_63;
    v7 = (System_String_o *)StringLiteral_17232/*"btn_bg_on"*/;
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
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17311/*"btn_txt_friendlist_off"*/, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabOfferedTitleSprite;
      if ( !tabFriendButton )
        goto LABEL_63;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17314/*"btn_txt_friendrequest_on"*/, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabSearchTitleSprite;
      if ( !tabFriendButton )
        goto LABEL_63;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17315/*"btn_txt_friendsearch_off"*/, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabFriendSprite;
      if ( !tabFriendButton )
        goto LABEL_63;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17217/*"btn_bg_09"*/, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabOfferedSprite;
      if ( !tabFriendButton )
        goto LABEL_63;
      v6 = (System_String_o *)StringLiteral_17232/*"btn_bg_on"*/;
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
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17312/*"btn_txt_friendlist_on"*/, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabOfferedTitleSprite;
      if ( !tabFriendButton )
        goto LABEL_63;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17313/*"btn_txt_friendrequest_off"*/, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabSearchTitleSprite;
      if ( !tabFriendButton )
        goto LABEL_63;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17315/*"btn_txt_friendsearch_off"*/, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabFriendSprite;
      if ( !tabFriendButton )
        goto LABEL_63;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17232/*"btn_bg_on"*/, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabOfferedSprite;
      if ( !tabFriendButton )
        goto LABEL_63;
      v6 = (System_String_o *)StringLiteral_17217/*"btn_bg_09"*/;
    }
    UISprite__set_spriteName((UISprite_o *)tabFriendButton, v6, 0LL);
    tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabSearchSprite;
    if ( !tabFriendButton )
      goto LABEL_63;
    v7 = (System_String_o *)StringLiteral_17217/*"btn_bg_09"*/;
  }
  UISprite__set_spriteName((UISprite_o *)tabFriendButton, v7, 0LL);
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
  FriendRootComponent__CheckHelpUI(this, v8);
  if ( !byte_4354108 )
  {
    sub_B70694(&FriendRootComponent_TypeInfo);
    byte_4354108 = 1;
  }
  v10 = FriendRootComponent_TypeInfo;
  if ( (BYTE3(FriendRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FriendRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendRootComponent_TypeInfo);
    v10 = FriendRootComponent_TypeInfo;
  }
  FriendRootComponent__SetActiveModeKindButtons(this, v10->static_fields->tabKindSave == 0, v9);
  v11 = this->fields.tabFriendButton;
  if ( !v11
    || (enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.tabFriendButton, 0LL),
        UICommonButton__SetColliderEnable(v11, enabled, 1, 0LL),
        (tabOfferedButton = this->fields.tabOfferedButton) == 0LL)
    || (v14 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.tabOfferedButton, 0LL),
        UICommonButton__SetColliderEnable(tabOfferedButton, v14, 1, 0LL),
        (tabSearchButton = (UnityEngine_Behaviour_o *)this->fields.tabSearchButton) == 0LL) )
  {
LABEL_63:
    sub_B7076C(tabFriendButton, method);
  }
  v16 = UnityEngine_Behaviour__get_enabled(tabSearchButton, 0LL);
  UICommonButton__SetColliderEnable((UICommonButton_o *)tabSearchButton, v16, 1, 0LL);
}


void __fastcall FriendRootComponent__RequestFollowAssign(FriendRootComponent_o *this, const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v3; // x20
  FollowAssignRequest_o *Request_WarBoardWallAttackRequest; // x0
  struct OtherUserGameEntity_o *selectFriendEntity; // x8

  if ( (byte_4354055 & 1) == 0 )
  {
    sub_B70694(&Method_FriendRootComponent_EndRequestFollowAssign__);
    sub_B70694(&Method_NetworkManager_getRequest_FollowAssignRequest___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_B70694(&StringLiteral_11231/*"REQUEST_NG"*/);
    byte_4354055 = 1;
  }
  if ( this->fields.selectFriendEntity )
  {
    v3 = (NetworkManager_ResultCallbackFunc_o *)sub_B70764(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v3,
      (Il2CppObject *)this,
      Method_FriendRootComponent_EndRequestFollowAssign__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = (FollowAssignRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                   v3,
                                                                   (const MethodInfo_1D57A4C *)Method_NetworkManager_getRequest_FollowAssignRequest___);
    selectFriendEntity = this->fields.selectFriendEntity;
    if ( selectFriendEntity && Request_WarBoardWallAttackRequest )
    {
      FollowAssignRequest__beginRequest(Request_WarBoardWallAttackRequest, selectFriendEntity->fields.userId, 0LL);
      return;
    }
LABEL_12:
    sub_B7076C(Request_WarBoardWallAttackRequest, method);
  }
  Request_WarBoardWallAttackRequest = (FollowAssignRequest_o *)this->fields.myFSM;
  if ( !Request_WarBoardWallAttackRequest )
    goto LABEL_12;
  PlayMakerFSM__SendEvent(
    (PlayMakerFSM_o *)Request_WarBoardWallAttackRequest,
    (System_String_o *)StringLiteral_11231/*"REQUEST_NG"*/,
    0LL);
}


void __fastcall FriendRootComponent__RequestFollowRemove(FriendRootComponent_o *this, const MethodInfo *method)
{
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_435405E & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_string___ctor__);
    sub_B70694(&System_Action_string__TypeInfo);
    sub_B70694(&Method_FriendRootComponent__RequestFollowRemove_b__139_0__);
    byte_435405E = 1;
  }
  v3 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B70764(System_Action_string__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v3,
    (Il2CppObject *)this,
    Method_FriendRootComponent__RequestFollowRemove_b__139_0__,
    (const MethodInfo_264C148 *)Method_System_Action_string___ctor__);
  FriendRootComponent__FriendLockRequst(this, (System_Action_string__o *)v3, v4);
}


void __fastcall FriendRootComponent__RequestFriendAccept(FriendRootComponent_o *this, const MethodInfo *method)
{
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  FriendOperationItemListViewItem_o *Item; // x0
  struct OtherUserGameEntity_o *otherUserGameEntity; // x21
  NetworkManager_ResultCallbackFunc_o *v6; // x20

  if ( (byte_435402C & 1) == 0 )
  {
    sub_B70694(&Method_FriendRootComponent_EndRequestFriend__);
    sub_B70694(&Method_NetworkManager_getRequest_FriendAcceptRequest___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_B70694(&StringLiteral_11231/*"REQUEST_NG"*/);
    byte_435402C = 1;
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
      v6 = (NetworkManager_ResultCallbackFunc_o *)sub_B70764(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v6,
        (Il2CppObject *)this,
        Method_FriendRootComponent_EndRequestFriend__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      operationItemListViewManager = (FriendOperationItemListViewManager_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                               v6,
                                                                               (const MethodInfo_1D57A4C *)Method_NetworkManager_getRequest_FriendAcceptRequest___);
      if ( operationItemListViewManager )
      {
        FriendAcceptRequest__beginRequest(
          (FriendAcceptRequest_o *)operationItemListViewManager,
          otherUserGameEntity->fields.userId,
          0LL);
        return;
      }
LABEL_13:
      sub_B7076C(operationItemListViewManager, method);
    }
  }
  operationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.myFSM;
  if ( !operationItemListViewManager )
    goto LABEL_13;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)operationItemListViewManager, (System_String_o *)StringLiteral_11231/*"REQUEST_NG"*/, 0LL);
}


void __fastcall FriendRootComponent__RequestFriendCancel(FriendRootComponent_o *this, const MethodInfo *method)
{
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  FriendOperationItemListViewItem_o *Item; // x0
  struct OtherUserGameEntity_o *otherUserGameEntity; // x21
  NetworkManager_ResultCallbackFunc_o *v6; // x20

  if ( (byte_435402E & 1) == 0 )
  {
    sub_B70694(&Method_FriendRootComponent_EndRequestFriend__);
    sub_B70694(&Method_NetworkManager_getRequest_FriendCancelRequest___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_B70694(&StringLiteral_11231/*"REQUEST_NG"*/);
    byte_435402E = 1;
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
      v6 = (NetworkManager_ResultCallbackFunc_o *)sub_B70764(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v6,
        (Il2CppObject *)this,
        Method_FriendRootComponent_EndRequestFriend__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      operationItemListViewManager = (FriendOperationItemListViewManager_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                               v6,
                                                                               (const MethodInfo_1D57A4C *)Method_NetworkManager_getRequest_FriendCancelRequest___);
      if ( operationItemListViewManager )
      {
        FriendCancelRequest__beginRequest(
          (FriendCancelRequest_o *)operationItemListViewManager,
          otherUserGameEntity->fields.userId,
          0LL);
        return;
      }
LABEL_13:
      sub_B7076C(operationItemListViewManager, method);
    }
  }
  operationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.myFSM;
  if ( !operationItemListViewManager )
    goto LABEL_13;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)operationItemListViewManager, (System_String_o *)StringLiteral_11231/*"REQUEST_NG"*/, 0LL);
}


void __fastcall FriendRootComponent__RequestFriendOffer(FriendRootComponent_o *this, const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v3; // x20
  FriendOfferRequest_o *Request_WarBoardWallAttackRequest; // x0
  struct OtherUserGameEntity_o *selectFriendEntity; // x8

  if ( (byte_435402A & 1) == 0 )
  {
    sub_B70694(&Method_FriendRootComponent_EndRequestFriend__);
    sub_B70694(&Method_NetworkManager_getRequest_FriendOfferRequest___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_B70694(&StringLiteral_11231/*"REQUEST_NG"*/);
    byte_435402A = 1;
  }
  if ( this->fields.selectFriendEntity )
  {
    v3 = (NetworkManager_ResultCallbackFunc_o *)sub_B70764(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v3,
      (Il2CppObject *)this,
      Method_FriendRootComponent_EndRequestFriend__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = (FriendOfferRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                  v3,
                                                                  (const MethodInfo_1D57A4C *)Method_NetworkManager_getRequest_FriendOfferRequest___);
    selectFriendEntity = this->fields.selectFriendEntity;
    if ( selectFriendEntity && Request_WarBoardWallAttackRequest )
    {
      FriendOfferRequest__beginRequest(Request_WarBoardWallAttackRequest, selectFriendEntity->fields.userId, 0LL);
      return;
    }
LABEL_12:
    sub_B7076C(Request_WarBoardWallAttackRequest, method);
  }
  Request_WarBoardWallAttackRequest = (FriendOfferRequest_o *)this->fields.myFSM;
  if ( !Request_WarBoardWallAttackRequest )
    goto LABEL_12;
  PlayMakerFSM__SendEvent(
    (PlayMakerFSM_o *)Request_WarBoardWallAttackRequest,
    (System_String_o *)StringLiteral_11231/*"REQUEST_NG"*/,
    0LL);
}


void __fastcall FriendRootComponent__RequestFriendOffer2(FriendRootComponent_o *this, const MethodInfo *method)
{
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_435402B & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_string___ctor__);
    sub_B70694(&System_Action_string__TypeInfo);
    sub_B70694(&Method_FriendRootComponent__RequestFriendOffer2_b__84_0__);
    byte_435402B = 1;
  }
  v3 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B70764(System_Action_string__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v3,
    (Il2CppObject *)this,
    Method_FriendRootComponent__RequestFriendOffer2_b__84_0__,
    (const MethodInfo_264C148 *)Method_System_Action_string___ctor__);
  FriendRootComponent__FriendLockRequst(this, (System_Action_string__o *)v3, v4);
}


void __fastcall FriendRootComponent__RequestFriendProfile(FriendRootComponent_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_String_o *selectFriendCode; // x0
  System_String_o *v10; // x0
  NetworkManager_ResultCallbackFunc_o *v11; // x20
  ProfileTopRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v13; // x1
  FriendWarningDialog_o *friendWarningDialog; // x20
  FriendWarningDialog_CallbackFunc_o *v15; // x21
  const MethodInfo *v16; // x3

  if ( (byte_4354032 & 1) == 0 )
  {
    sub_B70694(&FriendWarningDialog_CallbackFunc_TypeInfo);
    sub_B70694(&Method_FriendRootComponent_EndNoSearchWarning__);
    sub_B70694(&Method_FriendRootComponent_EndRequestFriendProfile__);
    sub_B70694(&Method_NetworkManager_getRequest_ProfileTopRequest___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_B70694(&StringLiteral_82/*" "*/);
    sub_B70694(&StringLiteral_11231/*"REQUEST_NG"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4354032 = 1;
  }
  selectFriendCode = this->fields.selectFriendCode;
  if ( selectFriendCode )
  {
    v10 = System_String__Replace_44765404(
            selectFriendCode,
            (System_String_o *)StringLiteral_82/*" "*/,
            (System_String_o *)StringLiteral_1/*""*/,
            0LL);
    if ( System_String__op_Inequality(v10, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
    {
      v11 = (NetworkManager_ResultCallbackFunc_o *)sub_B70764(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v11,
        (Il2CppObject *)this,
        Method_FriendRootComponent_EndRequestFriendProfile__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Request_WarBoardWallAttackRequest = (ProfileTopRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                   v11,
                                                                   (const MethodInfo_1D57A4C *)Method_NetworkManager_getRequest_ProfileTopRequest___);
      if ( Request_WarBoardWallAttackRequest )
      {
        ProfileTopRequest__beginRequestFriendCode(Request_WarBoardWallAttackRequest, this->fields.selectFriendCode, 0LL);
        return;
      }
LABEL_14:
      sub_B7076C(Request_WarBoardWallAttackRequest, v13);
    }
    friendWarningDialog = this->fields.friendWarningDialog;
    v15 = (FriendWarningDialog_CallbackFunc_o *)sub_B70764(FriendWarningDialog_CallbackFunc_TypeInfo);
    FriendWarningDialog_CallbackFunc___ctor(
      v15,
      (Il2CppObject *)this,
      Method_FriendRootComponent_EndNoSearchWarning__,
      0LL);
    if ( !friendWarningDialog )
      goto LABEL_14;
    FriendWarningDialog__Open(friendWarningDialog, 3, v15, v16);
  }
  this->fields.selectFriendEntity = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.selectFriendEntity, 0LL, v2, v3, v4, v5, v6, v7);
  Request_WarBoardWallAttackRequest = (ProfileTopRequest_o *)this->fields.myFSM;
  if ( !Request_WarBoardWallAttackRequest )
    goto LABEL_14;
  PlayMakerFSM__SendEvent(
    (PlayMakerFSM_o *)Request_WarBoardWallAttackRequest,
    (System_String_o *)StringLiteral_11231/*"REQUEST_NG"*/,
    0LL);
}


void __fastcall FriendRootComponent__RequestFriendReject(FriendRootComponent_o *this, const MethodInfo *method)
{
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  FriendOperationItemListViewItem_o *Item; // x0
  struct OtherUserGameEntity_o *otherUserGameEntity; // x21
  NetworkManager_ResultCallbackFunc_o *v6; // x20
  const MethodInfo *v7; // x2

  if ( (byte_435402D & 1) == 0 )
  {
    sub_B70694(&Method_FriendRootComponent_EndRequestFriend__);
    sub_B70694(&Method_NetworkManager_getRequest_FriendRejectRequest___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&StringLiteral_11231/*"REQUEST_NG"*/);
    byte_435402D = 1;
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
      operationItemListViewManager = (FriendOperationItemListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( operationItemListViewManager )
      {
        CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)operationItemListViewManager, 0, 0LL);
        v6 = (NetworkManager_ResultCallbackFunc_o *)sub_B70764(NetworkManager_ResultCallbackFunc_TypeInfo);
        NetworkManager_ResultCallbackFunc___ctor(
          v6,
          (Il2CppObject *)this,
          Method_FriendRootComponent_EndRequestFriend__,
          0LL);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        operationItemListViewManager = (FriendOperationItemListViewManager_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                                 v6,
                                                                                 (const MethodInfo_1D57A4C *)Method_NetworkManager_getRequest_FriendRejectRequest___);
        if ( operationItemListViewManager )
        {
          FriendRejectRequest__beginRequest(
            (FriendRejectRequest_o *)operationItemListViewManager,
            otherUserGameEntity->fields.userId,
            v7);
          return;
        }
      }
LABEL_14:
      sub_B7076C(operationItemListViewManager, method);
    }
  }
  operationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.myFSM;
  if ( !operationItemListViewManager )
    goto LABEL_14;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)operationItemListViewManager, (System_String_o *)StringLiteral_11231/*"REQUEST_NG"*/, 0LL);
}


void __fastcall FriendRootComponent__RequestFriendRemove(FriendRootComponent_o *this, const MethodInfo *method)
{
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_435402F & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_string___ctor__);
    sub_B70694(&System_Action_string__TypeInfo);
    sub_B70694(&Method_FriendRootComponent__RequestFriendRemove_b__88_0__);
    byte_435402F = 1;
  }
  v3 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B70764(System_Action_string__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v3,
    (Il2CppObject *)this,
    Method_FriendRootComponent__RequestFriendRemove_b__88_0__,
    (const MethodInfo_264C148 *)Method_System_Action_string___ctor__);
  FriendRootComponent__FriendLockRequst(this, (System_Action_string__o *)v3, v4);
}


void __fastcall FriendRootComponent__SelectFollowConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  UserFollowMaster_o *v5; // x20
  const MethodInfo *v6; // x1
  int32_t FollowSum; // w21
  BalanceConfig_c *v8; // x8
  struct OtherUserGameEntity_o *selectFriendEntity; // x8
  CommonUI_o *v10; // x20
  System_String_o *v11; // x21
  System_String_o *v12; // x22
  NotificationDialog_ClickDelegate_o *v13; // x23
  FriendWarningDialog_o *friendWarningDialog; // x20
  FriendWarningDialog_CallbackFunc_o *v15; // x21
  const MethodInfo *v16; // x3
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x20
  OtherUserGameEntity_o *v18; // x21
  FriendOperationConfirmMenu_CallbackFunc_o *v19; // x22

  if ( (byte_4354051 & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo);
    sub_B70694(&FriendWarningDialog_CallbackFunc_TypeInfo);
    sub_B70694(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_UserFollowMaster___);
    sub_B70694(&Method_FriendRootComponent_EndMaxFollowWarningOfferConfirm__);
    sub_B70694(&Method_FriendRootComponent_SelectedFollowOfferConfirm__);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&StringLiteral_1707/*"ALREADY_FOLLOWED_TITLE"*/);
    sub_B70694(&StringLiteral_1706/*"ALREADY_FOLLOWED_MESSAGE"*/);
    byte_4354051 = 1;
  }
  if ( this->fields.state == 23 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserFollowMaster___);
      if ( Instance )
      {
        v5 = (UserFollowMaster_o *)Instance;
        FollowSum = UserFollowMaster__GetFollowSum((UserFollowMaster_o *)Instance, 0LL);
        v8 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v8 = BalanceConfig_TypeInfo;
        }
        if ( FollowSum >= v8->static_fields->FollowNum )
        {
          this->fields.state = 43;
          friendWarningDialog = this->fields.friendWarningDialog;
          v15 = (FriendWarningDialog_CallbackFunc_o *)sub_B70764(FriendWarningDialog_CallbackFunc_TypeInfo);
          FriendWarningDialog_CallbackFunc___ctor(
            v15,
            (Il2CppObject *)this,
            Method_FriendRootComponent_EndMaxFollowWarningOfferConfirm__,
            0LL);
          if ( friendWarningDialog )
          {
            FriendWarningDialog__Open(friendWarningDialog, 7, v15, v16);
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
            v10 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v11 = LocalizationManager__Get((System_String_o *)StringLiteral_1707/*"ALREADY_FOLLOWED_TITLE"*/, 0LL);
            v12 = LocalizationManager__Get((System_String_o *)StringLiteral_1706/*"ALREADY_FOLLOWED_MESSAGE"*/, 0LL);
            v13 = (NotificationDialog_ClickDelegate_o *)sub_B70764(NotificationDialog_ClickDelegate_TypeInfo);
            NotificationDialog_ClickDelegate___ctor(
              v13,
              (Il2CppObject *)this,
              Method_FriendRootComponent_EndMaxFollowWarningOfferConfirm__,
              0LL);
            if ( v10 )
            {
              CommonUI__OpenNotificationDialog_17906460(
                v10,
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
            v18 = this->fields.selectFriendEntity;
            v19 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_B70764(FriendOperationConfirmMenu_CallbackFunc_TypeInfo);
            FriendOperationConfirmMenu_CallbackFunc___ctor(
              v19,
              (Il2CppObject *)this,
              Method_FriendRootComponent_SelectedFollowOfferConfirm__,
              0LL);
            if ( operationConfirmMenu )
            {
              FriendOperationConfirmMenu__Open(operationConfirmMenu, 6, v18, v19, 0LL);
              return;
            }
          }
        }
      }
    }
    sub_B7076C(Instance, v4);
  }
}


void __fastcall FriendRootComponent__SelectFollowRemoveConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x20
  OtherUserGameEntity_o *dropList; // x21
  FriendOperationConfirmMenu_CallbackFunc_o *v6; // x22

  if ( (byte_4354058 & 1) == 0 )
  {
    sub_B70694(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo);
    sub_B70694(&Method_FriendRootComponent_SelectedFollowRemoveConfirm__);
    byte_4354058 = 1;
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
          v6 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_B70764(FriendOperationConfirmMenu_CallbackFunc_TypeInfo),
          FriendOperationConfirmMenu_CallbackFunc___ctor(
            v6,
            (Il2CppObject *)this,
            Method_FriendRootComponent_SelectedFollowRemoveConfirm__,
            0LL),
          !operationConfirmMenu) )
    {
      sub_B7076C(operationItemListViewManager, method);
    }
    FriendOperationConfirmMenu__Open(operationConfirmMenu, 7, dropList, v6, 0LL);
  }
}


void __fastcall FriendRootComponent__SelectFriendAcceptConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x20
  OtherUserGameEntity_o *dropList; // x21
  FriendOperationConfirmMenu_CallbackFunc_o *v6; // x22

  if ( (byte_435401E & 1) == 0 )
  {
    sub_B70694(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo);
    sub_B70694(&Method_FriendRootComponent_SelectedFriendAcceptConfirm__);
    byte_435401E = 1;
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
          v6 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_B70764(FriendOperationConfirmMenu_CallbackFunc_TypeInfo),
          FriendOperationConfirmMenu_CallbackFunc___ctor(
            v6,
            (Il2CppObject *)this,
            Method_FriendRootComponent_SelectedFriendAcceptConfirm__,
            0LL),
          !operationConfirmMenu) )
    {
      sub_B7076C(operationItemListViewManager, method);
    }
    FriendOperationConfirmMenu__Open(operationConfirmMenu, 2, dropList, v6, 0LL);
  }
}


void __fastcall FriendRootComponent__SelectFriendCancelConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x20
  OtherUserGameEntity_o *dropList; // x21
  FriendOperationConfirmMenu_CallbackFunc_o *v6; // x22

  if ( (byte_4354024 & 1) == 0 )
  {
    sub_B70694(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo);
    sub_B70694(&Method_FriendRootComponent_SelectedFriendCancelConfirm__);
    byte_4354024 = 1;
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
          v6 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_B70764(FriendOperationConfirmMenu_CallbackFunc_TypeInfo),
          FriendOperationConfirmMenu_CallbackFunc___ctor(
            v6,
            (Il2CppObject *)this,
            Method_FriendRootComponent_SelectedFriendCancelConfirm__,
            0LL),
          !operationConfirmMenu) )
    {
      sub_B7076C(operationItemListViewManager, method);
    }
    FriendOperationConfirmMenu__Open(operationConfirmMenu, 4, dropList, v6, 0LL);
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
  FriendOperationConfirmMenu_o *v10; // x0
  OtherUserGameEntity_o *v11; // x2
  UserGameEntity_o *SelfUserGame; // x20
  struct FriendOperationConfirmMenu_o *operationConfirmMenu; // x20
  OtherUserGameEntity_o *v14; // x21
  FriendWarningDialog_o *friendWarningDialog; // x20
  FriendWarningDialog_CallbackFunc_o *v16; // x21
  const MethodInfo *v17; // x3

  if ( (byte_435401C & 1) == 0 )
  {
    sub_B70694(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo);
    sub_B70694(&FriendWarningDialog_CallbackFunc_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_TblFriendMaster___);
    sub_B70694(&Method_FriendRootComponent_EndMaxFriendWarningOfferConfirm__);
    sub_B70694(&Method_FriendRootComponent_SelectedFriendOfferConfirm__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_435401C = 1;
  }
  state = this->fields.state;
  if ( state == 4 )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_27;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_TblFriendMaster___);
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
          v14 = *(OtherUserGameEntity_o **)&Instance->fields.writeMasterDataThreadEnd;
          v9 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_B70764(FriendOperationConfirmMenu_CallbackFunc_TypeInfo);
          FriendOperationConfirmMenu_CallbackFunc___ctor(
            v9,
            (Il2CppObject *)this,
            Method_FriendRootComponent_SelectedFriendOfferConfirm__,
            0LL);
          if ( operationConfirmMenu )
          {
            v10 = operationConfirmMenu;
            v11 = v14;
            goto LABEL_22;
          }
        }
      }
LABEL_27:
      sub_B7076C(Instance, v6);
    }
LABEL_24:
    this->fields.state = 29;
    friendWarningDialog = this->fields.friendWarningDialog;
    v16 = (FriendWarningDialog_CallbackFunc_o *)sub_B70764(FriendWarningDialog_CallbackFunc_TypeInfo);
    FriendWarningDialog_CallbackFunc___ctor(
      v16,
      (Il2CppObject *)this,
      Method_FriendRootComponent_EndMaxFriendWarningOfferConfirm__,
      0LL);
    if ( !friendWarningDialog )
      goto LABEL_27;
    FriendWarningDialog__Open(friendWarningDialog, 1, v16, v17);
    return;
  }
  if ( state != 23 )
    return;
  v4 = UserGameMaster__getSelfUserGame(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_TblFriendMaster___);
  if ( !Instance )
    goto LABEL_27;
  Instance = (DataManager_o *)TblFriendMaster__GetList((TblFriendMaster_o *)Instance, 3, 0LL);
  if ( !Instance || !v4 )
    goto LABEL_27;
  if ( v4->fields.friendKeep <= SLODWORD(Instance->fields.datalist) )
    goto LABEL_24;
  selectFriendEntity = this->fields.selectFriendEntity;
  if ( selectFriendEntity )
  {
    this->fields.state = 27;
    v8 = this->fields.operationConfirmMenu;
    v9 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_B70764(FriendOperationConfirmMenu_CallbackFunc_TypeInfo);
    FriendOperationConfirmMenu_CallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_FriendRootComponent_SelectedFriendOfferConfirm__,
      0LL);
    if ( v8 )
    {
      v10 = v8;
      v11 = selectFriendEntity;
LABEL_22:
      FriendOperationConfirmMenu__Open(v10, 1, v11, v9, 0LL);
      return;
    }
    goto LABEL_27;
  }
  FriendRootComponent__StartSearchInput(this, v6);
}


void __fastcall FriendRootComponent__SelectFriendRejectConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x20
  OtherUserGameEntity_o *dropList; // x21
  FriendOperationConfirmMenu_CallbackFunc_o *v6; // x22

  if ( (byte_4354021 & 1) == 0 )
  {
    sub_B70694(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo);
    sub_B70694(&Method_FriendRootComponent_SelectedFriendRejectConfirm__);
    byte_4354021 = 1;
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
          v6 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_B70764(FriendOperationConfirmMenu_CallbackFunc_TypeInfo),
          FriendOperationConfirmMenu_CallbackFunc___ctor(
            v6,
            (Il2CppObject *)this,
            Method_FriendRootComponent_SelectedFriendRejectConfirm__,
            0LL),
          !operationConfirmMenu) )
    {
      sub_B7076C(operationItemListViewManager, method);
    }
    FriendOperationConfirmMenu__Open(operationConfirmMenu, 3, dropList, v6, 0LL);
  }
}


void __fastcall FriendRootComponent__SelectFriendRemoveConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x20
  OtherUserGameEntity_o *dropList; // x21
  FriendOperationConfirmMenu_CallbackFunc_o *v6; // x22

  if ( (byte_4354027 & 1) == 0 )
  {
    sub_B70694(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo);
    sub_B70694(&Method_FriendRootComponent_SelectedFriendRemoveConfirm__);
    byte_4354027 = 1;
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
          v6 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_B70764(FriendOperationConfirmMenu_CallbackFunc_TypeInfo),
          FriendOperationConfirmMenu_CallbackFunc___ctor(
            v6,
            (Il2CppObject *)this,
            Method_FriendRootComponent_SelectedFriendRemoveConfirm__,
            0LL),
          !operationConfirmMenu) )
    {
      sub_B7076C(operationItemListViewManager, method);
    }
    FriendOperationConfirmMenu__Open(operationConfirmMenu, 5, dropList, v6, 0LL);
  }
}


void __fastcall FriendRootComponent__SelectSearchFriend(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_4354015 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_5564/*"END_ACTION"*/);
    byte_4354015 = 1;
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
      sub_B7076C(0LL, method);
    PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_5564/*"END_ACTION"*/, 0LL);
  }
}


void __fastcall FriendRootComponent__SelectShowFriend(FriendRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *operationItemListViewManager; // x0
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  FriendOperationItemListViewManager_o *v5; // x20
  System_Action_o *v6; // x21

  if ( (byte_435400D & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_FriendRootComponent_OnMoveEnd__);
    sub_B70694(&StringLiteral_5564/*"END_ACTION"*/);
    byte_435400D = 1;
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
            v5 = this->fields.operationItemListViewManager;
            v6 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
            System_Action___ctor(v6, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0LL);
            if ( v5 )
            {
              FriendOperationItemListViewManager__SetMode_31881132(v5, 1, v6, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_12:
    sub_B7076C(operationItemListViewManager, method);
  }
  operationItemListViewManager = (UnityEngine_Component_o *)this->fields.myFSM;
  if ( !operationItemListViewManager )
    goto LABEL_12;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)operationItemListViewManager, (System_String_o *)StringLiteral_5564/*"END_ACTION"*/, 0LL);
}


void __fastcall FriendRootComponent__SelectShowOffer(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *operationItemListViewManager; // x0
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  FriendOperationItemListViewManager_o *v6; // x20
  System_Action_o *v7; // x21

  if ( (byte_435400F & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_FriendRootComponent_OnMoveEnd__);
    byte_435400F = 1;
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
          v6 = this->fields.operationItemListViewManager,
          v7 = (System_Action_o *)sub_B70764(System_Action_TypeInfo),
          System_Action___ctor(v7, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0LL),
          !v6) )
    {
LABEL_11:
      sub_B7076C(operationItemListViewManager, v3);
    }
    FriendOperationItemListViewManager__SetMode_31881132(v6, 1, v7, 0LL);
  }
}


void __fastcall FriendRootComponent__SelectShowOffered(FriendRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *operationItemListViewManager; // x0
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  FriendOperationItemListViewManager_o *v5; // x20
  System_Action_o *v6; // x21

  if ( (byte_4354011 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_FriendRootComponent_OnMoveEnd__);
    sub_B70694(&StringLiteral_5564/*"END_ACTION"*/);
    byte_4354011 = 1;
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
            v5 = this->fields.operationItemListViewManager;
            v6 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
            System_Action___ctor(v6, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0LL);
            if ( v5 )
            {
              FriendOperationItemListViewManager__SetMode_31881132(v5, 1, v6, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_12:
    sub_B7076C(operationItemListViewManager, method);
  }
  operationItemListViewManager = (UnityEngine_Component_o *)this->fields.myFSM;
  if ( !operationItemListViewManager )
    goto LABEL_12;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)operationItemListViewManager, (System_String_o *)StringLiteral_5564/*"END_ACTION"*/, 0LL);
}


void __fastcall FriendRootComponent__SelectShowSearch(FriendRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *operationItemListViewManager; // x0
  FriendSearchMenu_o *friendSearchMenu; // x20
  System_Action_o *v5; // x21
  const MethodInfo *v6; // x2
  FriendOperationItemListViewManager_o *v7; // x20
  System_Action_o *v8; // x21

  if ( (byte_4354013 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_FriendRootComponent_OnMoveEnd__);
    byte_4354013 = 1;
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
    v5 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0LL);
    if ( !friendSearchMenu
      || (FriendSearchMenu__Close_29282088(friendSearchMenu, v5, v6),
          v7 = this->fields.operationItemListViewManager,
          v8 = (System_Action_o *)sub_B70764(System_Action_TypeInfo),
          System_Action___ctor(v8, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0LL),
          !v7) )
    {
LABEL_11:
      sub_B7076C(operationItemListViewManager, method);
    }
    FriendOperationItemListViewManager__SetMode_31881132(v7, 1, v8, 0LL);
  }
}


void __fastcall FriendRootComponent__SelectShowServant(
        FriendRootComponent_o *this,
        ServantLeaderInfo_o *servantLeaderInfo,
        const MethodInfo *method)
{
  unsigned int state; // w23
  CommonUI_o *Instance; // x21
  ServantStatusDialog_EndDelegate_o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w1

  if ( (byte_4354019 & 1) == 0 )
  {
    sub_B70694(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_B70694(&Method_FriendRootComponent_EndShowServant__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4354019 = 1;
  }
  state = this->fields.state;
  if ( state <= 0x13 && ((1 << state) & 0x84210) != 0 )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v7 = (ServantStatusDialog_EndDelegate_o *)sub_B70764(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(v7, (Il2CppObject *)this, Method_FriendRootComponent_EndShowServant__, 0LL);
    if ( !Instance )
      sub_B7076C(v8, v9);
    if ( state == 4 )
      v10 = 4;
    else
      v10 = 5;
    CommonUI__OpenServantStatusDialog_17917132(Instance, v10, servantLeaderInfo, v7, 0LL);
  }
}


void __fastcall FriendRootComponent__SelectShowServantEquip(
        FriendRootComponent_o *this,
        EquipTargetInfo_o *equipInfo,
        int32_t statusKind,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x22
  ServantStatusDialog_EndDelegate_o *v8; // x23
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4354043 & 1) == 0 )
  {
    sub_B70694(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_B70694(&Method_FriendRootComponent_EndShowServantEquip__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4354043 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (ServantStatusDialog_EndDelegate_o *)sub_B70764(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(
    v8,
    (Il2CppObject *)this,
    Method_FriendRootComponent_EndShowServantEquip__,
    0LL);
  if ( !Instance )
    sub_B7076C(v9, v10);
  CommonUI__OpenServantEquipStatusDialog_17919496(Instance, statusKind, equipInfo, v8, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendRootComponent__SelectedFollowOfferConfirm(
        FriendRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0
  __int64 *v6; // x8

  if ( (byte_4354054 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_8822/*"MENU_DECIDE"*/);
    sub_B70694(&StringLiteral_8821/*"MENU_CANCEL"*/);
    byte_4354054 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_B7076C(0LL, isDecide);
  v6 = &StringLiteral_8822/*"MENU_DECIDE"*/;
  if ( !isDecide )
    v6 = &StringLiteral_8821/*"MENU_CANCEL"*/;
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

  if ( (byte_435404E & 1) == 0 )
  {
    sub_B70694(&StringLiteral_8822/*"MENU_DECIDE"*/);
    sub_B70694(&StringLiteral_8821/*"MENU_CANCEL"*/);
    byte_435404E = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_B7076C(0LL, isDecide);
  v6 = &StringLiteral_8822/*"MENU_DECIDE"*/;
  if ( !isDecide )
    v6 = &StringLiteral_8821/*"MENU_CANCEL"*/;
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

  if ( (byte_435404A & 1) == 0 )
  {
    sub_B70694(&StringLiteral_8822/*"MENU_DECIDE"*/);
    sub_B70694(&StringLiteral_8821/*"MENU_CANCEL"*/);
    byte_435404A = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_B7076C(0LL, isDecide);
  v6 = &StringLiteral_8822/*"MENU_DECIDE"*/;
  if ( !isDecide )
    v6 = &StringLiteral_8821/*"MENU_CANCEL"*/;
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

  if ( (byte_435404C & 1) == 0 )
  {
    sub_B70694(&StringLiteral_8822/*"MENU_DECIDE"*/);
    sub_B70694(&StringLiteral_8821/*"MENU_CANCEL"*/);
    byte_435404C = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_B7076C(0LL, isDecide);
  v6 = &StringLiteral_8822/*"MENU_DECIDE"*/;
  if ( !isDecide )
    v6 = &StringLiteral_8821/*"MENU_CANCEL"*/;
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

  if ( (byte_4354049 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_8822/*"MENU_DECIDE"*/);
    sub_B70694(&StringLiteral_8821/*"MENU_CANCEL"*/);
    byte_4354049 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_B7076C(0LL, isDecide);
  v6 = &StringLiteral_8822/*"MENU_DECIDE"*/;
  if ( !isDecide )
    v6 = &StringLiteral_8821/*"MENU_CANCEL"*/;
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

  if ( (byte_435404B & 1) == 0 )
  {
    sub_B70694(&StringLiteral_8822/*"MENU_DECIDE"*/);
    sub_B70694(&StringLiteral_8821/*"MENU_CANCEL"*/);
    byte_435404B = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_B7076C(0LL, isDecide);
  v6 = &StringLiteral_8822/*"MENU_DECIDE"*/;
  if ( !isDecide )
    v6 = &StringLiteral_8821/*"MENU_CANCEL"*/;
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

  if ( (byte_435404D & 1) == 0 )
  {
    sub_B70694(&StringLiteral_8822/*"MENU_DECIDE"*/);
    sub_B70694(&StringLiteral_8821/*"MENU_CANCEL"*/);
    byte_435404D = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_B7076C(0LL, isDecide);
  v6 = &StringLiteral_8822/*"MENU_DECIDE"*/;
  if ( !isDecide )
    v6 = &StringLiteral_8821/*"MENU_CANCEL"*/;
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)*v6, 0LL);
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
      sub_B7076C(modeButtonParent, v5);
    }
    LODWORD(modeButtonParent[1].klass) = 3;
    this->fields.isActiveModeKindButtons = isActive;
  }
}


void __fastcall FriendRootComponent__ShowSearchResult(FriendRootComponent_o *this, const MethodInfo *method)
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
  const MethodInfo *v11; // x4
  FriendSearchMenu_o *friendSearchMenu; // x20
  FriendSearchMenu_CallbackFunc_o *v13; // x21
  const MethodInfo *v14; // x3

  v2 = this;
  if ( (byte_4354017 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&FriendSearchResultMenu_CallbackFunc_TypeInfo);
    sub_B70694(&FriendSearchMenu_CallbackFunc_TypeInfo);
    sub_B70694(&Method_FriendRootComponent_OnSelectOffer__);
    sub_B70694(&Method_FriendRootComponent_OnSelectSearchFriend__);
    sub_B70694(&Method_FriendRootComponent_ShowSearchResult__);
    this = (FriendRootComponent_o *)sub_B70694(&StringLiteral_5564/*"END_ACTION"*/);
    byte_4354017 = 1;
  }
  if ( v2->fields.state == 23 )
  {
    friendSearchResultMenu = v2->fields.friendSearchResultMenu;
    if ( !friendSearchResultMenu )
      goto LABEL_14;
    if ( friendSearchResultMenu->fields.isOpen )
    {
      v4 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
      System_Action___ctor(v4, (Il2CppObject *)v2, Method_FriendRootComponent_ShowSearchResult__, 0LL);
      FriendSearchResultMenu__Close_29284236(friendSearchResultMenu, v4, v5);
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
    v8 = v2->fields.friendSearchResultMenu;
    selectFriendEntity = v2->fields.selectFriendEntity;
    v10 = (FriendSearchResultMenu_CallbackFunc_o *)sub_B70764(FriendSearchResultMenu_CallbackFunc_TypeInfo);
    FriendSearchResultMenu_CallbackFunc___ctor(v10, (Il2CppObject *)v2, Method_FriendRootComponent_OnSelectOffer__, 0LL);
    if ( !v8
      || (FriendSearchResultMenu__Open(v8, selectFriendEntity, currentCursor, v10, v11),
          friendSearchMenu = v2->fields.friendSearchMenu,
          v13 = (FriendSearchMenu_CallbackFunc_o *)sub_B70764(FriendSearchMenu_CallbackFunc_TypeInfo),
          FriendSearchMenu_CallbackFunc___ctor(
            v13,
            (Il2CppObject *)v2,
            Method_FriendRootComponent_OnSelectSearchFriend__,
            0LL),
          !friendSearchMenu)
      || (FriendSearchMenu__Open(friendSearchMenu, v13, 0, v14),
          (this = (FriendRootComponent_o *)v2->fields.myFSM) == 0LL) )
    {
LABEL_14:
      sub_B7076C(this, method);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_5564/*"END_ACTION"*/, 0LL);
    EventTutorialMaster__CheckTutorial(-1, 50, 0LL, 0, 0, 0, 0, 0LL);
  }
}


void __fastcall FriendRootComponent__StartSearchInput(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  FriendRootComponent_o *v3; // x19
  FriendSearchResultMenu_o *friendSearchResultMenu; // x20
  OtherUserGameEntity_o *selectFriendEntity; // x21
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  int32_t currentCursor; // w22
  FriendSearchResultMenu_CallbackFunc_o *v8; // x23
  const MethodInfo *v9; // x4
  FriendSearchMenu_o *friendSearchMenu; // x20
  FriendSearchMenu_CallbackFunc_o *v11; // x21
  const MethodInfo *v12; // x3

  v3 = this;
  if ( (byte_4354018 & 1) == 0 )
  {
    sub_B70694(&FriendSearchResultMenu_CallbackFunc_TypeInfo);
    sub_B70694(&FriendSearchMenu_CallbackFunc_TypeInfo);
    sub_B70694(&Method_FriendRootComponent_OnSelectOffer__);
    this = (FriendRootComponent_o *)sub_B70694(&Method_FriendRootComponent_OnSelectSearchFriend__);
    byte_4354018 = 1;
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
      v8 = (FriendSearchResultMenu_CallbackFunc_o *)sub_B70764(FriendSearchResultMenu_CallbackFunc_TypeInfo);
      FriendSearchResultMenu_CallbackFunc___ctor(
        v8,
        (Il2CppObject *)v3,
        Method_FriendRootComponent_OnSelectOffer__,
        0LL);
      FriendSearchResultMenu__Open(friendSearchResultMenu, selectFriendEntity, currentCursor, v8, v9);
    }
    else
    {
      FriendSearchResultMenu__Close_29284236(v3->fields.friendSearchResultMenu, 0LL, v2);
    }
  }
  friendSearchMenu = v3->fields.friendSearchMenu;
  v11 = (FriendSearchMenu_CallbackFunc_o *)sub_B70764(FriendSearchMenu_CallbackFunc_TypeInfo);
  FriendSearchMenu_CallbackFunc___ctor(v11, (Il2CppObject *)v3, Method_FriendRootComponent_OnSelectSearchFriend__, 0LL);
  if ( !friendSearchMenu )
LABEL_11:
    sub_B7076C(this, method);
  FriendSearchMenu__Open(friendSearchMenu, v11, 0, v12);
}


void __fastcall FriendRootComponent___OnClickBack_b__96_0(
        FriendRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x19
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v5; // x20
  const MethodInfo *v6; // x2

  v4 = (Il2CppObject *)this;
  if ( (byte_4354064 & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_string___ctor__);
    sub_B70694(&System_Action_string__TypeInfo);
    sub_B70694(&Method_FriendRootComponent__OnClickBack_b__96_1__);
    this = (FriendRootComponent_o *)sub_B70694(&StringLiteral_21560/*"ok"*/);
    byte_4354064 = 1;
  }
  if ( !result )
    sub_B7076C(this, result);
  if ( System_String__Equals_44745508(result, (System_String_o *)StringLiteral_21560/*"ok"*/, 0LL) )
  {
    v5 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B70764(System_Action_string__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v5,
      v4,
      Method_FriendRootComponent__OnClickBack_b__96_1__,
      (const MethodInfo_264C148 *)Method_System_Action_string___ctor__);
    FriendRootComponent__FriendLockRequst((FriendRootComponent_o *)v4, (System_Action_string__o *)v5, v6);
  }
}


void __fastcall FriendRootComponent___OnClickBack_b__96_1(
        FriendRootComponent_o *this,
        System_String_o *res,
        const MethodInfo *method)
{
  FriendRootComponent_o *v4; // x19

  v4 = this;
  if ( (byte_4354065 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_21560/*"ok"*/);
    this = (FriendRootComponent_o *)sub_B70694(&StringLiteral_3111/*"CLICK_BACK"*/);
    byte_4354065 = 1;
  }
  if ( !res )
    goto LABEL_9;
  if ( System_String__Equals_44745508(res, (System_String_o *)StringLiteral_21560/*"ok"*/, 0LL) )
  {
    this = (FriendRootComponent_o *)v4->fields.friendSearchMenu;
    if ( this )
    {
      FriendSearchMenu__BlockInput((FriendSearchMenu_o *)this, (const MethodInfo *)res);
      this = (FriendRootComponent_o *)v4->fields.myFSM;
      if ( this )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3111/*"CLICK_BACK"*/, 0LL);
        return;
      }
    }
LABEL_9:
    sub_B7076C(this, res);
  }
}


void __fastcall FriendRootComponent___OnClickModeUserDetail_b__98_0(
        FriendRootComponent_o *this,
        System_String_o *res,
        const MethodInfo *method)
{
  FriendRootComponent_o *v4; // x19
  const MethodInfo *v5; // x1

  v4 = this;
  if ( (byte_4354068 & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    this = (FriendRootComponent_o *)sub_B70694(&StringLiteral_21560/*"ok"*/);
    byte_4354068 = 1;
  }
  if ( !res )
    sub_B7076C(this, res);
  if ( System_String__Equals_44745508(res, (System_String_o *)StringLiteral_21560/*"ok"*/, 0LL) )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v4->fields.currentModeKind = 0;
    FriendRootComponent__RefreshInfo(v4, v5);
  }
}


void __fastcall FriendRootComponent___OnClickTabFriend_b__105_0(
        FriendRootComponent_o *this,
        System_String_o *res,
        const MethodInfo *method)
{
  FriendRootComponent_o *v4; // x19
  int state; // w8
  struct FriendSearchResultMenu_o *friendSearchResultMenu; // x8
  struct FriendSearchResultMenu_o *v7; // x8
  struct ClassButtonControlComponent_o *v8; // x8
  FriendRootComponent_o *v9; // x0
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x1
  struct ClassButtonControlComponent_o *classButtonControl; // x8

  v4 = this;
  if ( (byte_4354069 & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    sub_B70694(&StringLiteral_21560/*"ok"*/);
    this = (FriendRootComponent_o *)sub_B70694(&StringLiteral_3156/*"CLICK_TAB"*/);
    byte_4354069 = 1;
  }
  if ( !res )
    goto LABEL_25;
  this = (FriendRootComponent_o *)System_String__Equals_44745508(res, (System_String_o *)StringLiteral_21560/*"ok"*/, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    return;
  state = v4->fields.state;
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
    FriendRootComponent__set_tabKind(v9, 0, v10);
    FriendRootComponent__RefreshTab(v4, v11);
    classButtonControl = v4->fields.classButtonControl;
    if ( classButtonControl )
    {
      classButtonControl->fields.updateEnable = 0;
      this = (FriendRootComponent_o *)v4->fields.myFSM;
      if ( this )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3156/*"CLICK_TAB"*/, 0LL);
        return;
      }
    }
LABEL_25:
    sub_B7076C(this, res);
  }
  if ( state == 14 || state == 19 )
    goto LABEL_18;
  if ( state == 23 )
  {
    friendSearchResultMenu = v4->fields.friendSearchResultMenu;
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
      v7 = v4->fields.friendSearchResultMenu;
      if ( !v7 )
        goto LABEL_25;
      v8 = v7->fields.classButtonControl;
      if ( !v8 )
        goto LABEL_25;
      this = (FriendRootComponent_o *)v4->fields.classButtonControl;
      if ( !this )
        goto LABEL_25;
      ClassButtonControlComponent__setCursor((ClassButtonControlComponent_o *)this, v8->fields.currentCursor, 0LL);
    }
    goto LABEL_18;
  }
}


void __fastcall FriendRootComponent___OnClickTabOffered_b__106_0(
        FriendRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x19
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v5; // x20
  const MethodInfo *v6; // x2

  v4 = (Il2CppObject *)this;
  if ( (byte_435406A & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_string___ctor__);
    sub_B70694(&System_Action_string__TypeInfo);
    sub_B70694(&Method_FriendRootComponent__OnClickTabOffered_b__106_1__);
    this = (FriendRootComponent_o *)sub_B70694(&StringLiteral_21560/*"ok"*/);
    byte_435406A = 1;
  }
  if ( !result )
    sub_B7076C(this, result);
  if ( System_String__Equals_44745508(result, (System_String_o *)StringLiteral_21560/*"ok"*/, 0LL) )
  {
    v5 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B70764(System_Action_string__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v5,
      v4,
      Method_FriendRootComponent__OnClickTabOffered_b__106_1__,
      (const MethodInfo_264C148 *)Method_System_Action_string___ctor__);
    FriendRootComponent__FriendLockRequst((FriendRootComponent_o *)v4, (System_Action_string__o *)v5, v6);
  }
}


void __fastcall FriendRootComponent___OnClickTabOffered_b__106_1(
        FriendRootComponent_o *this,
        System_String_o *res,
        const MethodInfo *method)
{
  FriendRootComponent_o *v4; // x19
  int state; // w8
  struct FriendSearchResultMenu_o *friendSearchResultMenu; // x8
  struct FriendSearchResultMenu_o *v7; // x8
  struct ClassButtonControlComponent_o *v8; // x8
  FriendRootComponent_o *v9; // x0
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x1
  struct ClassButtonControlComponent_o *classButtonControl; // x8

  v4 = this;
  if ( (byte_435406B & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    sub_B70694(&StringLiteral_21560/*"ok"*/);
    this = (FriendRootComponent_o *)sub_B70694(&StringLiteral_3156/*"CLICK_TAB"*/);
    byte_435406B = 1;
  }
  if ( !res )
    goto LABEL_25;
  this = (FriendRootComponent_o *)System_String__Equals_44745508(res, (System_String_o *)StringLiteral_21560/*"ok"*/, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    return;
  state = v4->fields.state;
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
    FriendRootComponent__set_tabKind(v9, 1, v10);
    FriendRootComponent__RefreshTab(v4, v11);
    classButtonControl = v4->fields.classButtonControl;
    if ( classButtonControl )
    {
      classButtonControl->fields.updateEnable = 0;
      this = (FriendRootComponent_o *)v4->fields.myFSM;
      if ( this )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3156/*"CLICK_TAB"*/, 0LL);
        return;
      }
    }
LABEL_25:
    sub_B7076C(this, res);
  }
  if ( state == 14 || state == 19 )
    goto LABEL_18;
  if ( state == 23 )
  {
    friendSearchResultMenu = v4->fields.friendSearchResultMenu;
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
      v7 = v4->fields.friendSearchResultMenu;
      if ( !v7 )
        goto LABEL_25;
      v8 = v7->fields.classButtonControl;
      if ( !v8 )
        goto LABEL_25;
      this = (FriendRootComponent_o *)v4->fields.classButtonControl;
      if ( !this )
        goto LABEL_25;
      ClassButtonControlComponent__setCursor((ClassButtonControlComponent_o *)this, v8->fields.currentCursor, 0LL);
    }
    goto LABEL_18;
  }
}


void __fastcall FriendRootComponent___OnClickTabSearch_b__107_0(
        FriendRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x19
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v5; // x20
  const MethodInfo *v6; // x2

  v4 = (Il2CppObject *)this;
  if ( (byte_435406C & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_string___ctor__);
    sub_B70694(&System_Action_string__TypeInfo);
    sub_B70694(&Method_FriendRootComponent__OnClickTabSearch_b__107_1__);
    this = (FriendRootComponent_o *)sub_B70694(&StringLiteral_21560/*"ok"*/);
    byte_435406C = 1;
  }
  if ( !result )
    sub_B7076C(this, result);
  if ( System_String__Equals_44745508(result, (System_String_o *)StringLiteral_21560/*"ok"*/, 0LL) )
  {
    v5 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B70764(System_Action_string__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v5,
      v4,
      Method_FriendRootComponent__OnClickTabSearch_b__107_1__,
      (const MethodInfo_264C148 *)Method_System_Action_string___ctor__);
    FriendRootComponent__FriendLockRequst((FriendRootComponent_o *)v4, (System_Action_string__o *)v5, v6);
  }
}


void __fastcall FriendRootComponent___OnClickTabSearch_b__107_1(
        FriendRootComponent_o *this,
        System_String_o *res,
        const MethodInfo *method)
{
  FriendRootComponent_o *v4; // x19
  int state; // w8
  FriendRootComponent_o *v6; // x0
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x1
  struct ClassButtonControlComponent_o *classButtonControl; // x8

  v4 = this;
  if ( (byte_435406D & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    sub_B70694(&StringLiteral_21560/*"ok"*/);
    this = (FriendRootComponent_o *)sub_B70694(&StringLiteral_3156/*"CLICK_TAB"*/);
    byte_435406D = 1;
  }
  if ( !res )
    goto LABEL_18;
  if ( !System_String__Equals_44745508(res, (System_String_o *)StringLiteral_21560/*"ok"*/, 0LL) )
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
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    FriendRootComponent__set_tabKind(v6, 2, v7);
    FriendRootComponent__RefreshTab(v4, v8);
    classButtonControl = v4->fields.classButtonControl;
    if ( classButtonControl )
    {
      classButtonControl->fields.updateEnable = 0;
      this = (FriendRootComponent_o *)v4->fields.myFSM;
      if ( this )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3156/*"CLICK_TAB"*/, 0LL);
        return;
      }
    }
LABEL_18:
    sub_B7076C(this, res);
  }
}


void __fastcall FriendRootComponent___RequestFollowRemove_b__139_0(
        FriendRootComponent_o *this,
        System_String_o *res,
        const MethodInfo *method)
{
  FriendRootComponent_o *v4; // x19
  FriendOperationItemListViewItem_o *Item; // x0
  struct OtherUserGameEntity_o *otherUserGameEntity; // x21
  NetworkManager_ResultCallbackFunc_o *v7; // x20

  v4 = this;
  if ( (byte_435406E & 1) == 0 )
  {
    sub_B70694(&Method_FriendRootComponent_EndRequestFollowRemove__);
    sub_B70694(&Method_NetworkManager_getRequest_FollowdRemoveRequest___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&StringLiteral_21560/*"ok"*/);
    this = (FriendRootComponent_o *)sub_B70694(&StringLiteral_11231/*"REQUEST_NG"*/);
    byte_435406E = 1;
  }
  if ( !res )
    goto LABEL_16;
  if ( System_String__Equals_44745508(res, (System_String_o *)StringLiteral_21560/*"ok"*/, 0LL) )
  {
    this = (FriendRootComponent_o *)v4->fields.operationItemListViewManager;
    if ( !this )
      goto LABEL_16;
    Item = FriendOperationItemListViewManager__GetItem(
             (FriendOperationItemListViewManager_o *)this,
             v4->fields.selectItemNum,
             0LL);
    if ( Item )
    {
      otherUserGameEntity = Item->fields.otherUserGameEntity;
      if ( otherUserGameEntity )
      {
        this = (FriendRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( this )
        {
          CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)this, 0, 0LL);
          v7 = (NetworkManager_ResultCallbackFunc_o *)sub_B70764(NetworkManager_ResultCallbackFunc_TypeInfo);
          NetworkManager_ResultCallbackFunc___ctor(
            v7,
            (Il2CppObject *)v4,
            Method_FriendRootComponent_EndRequestFollowRemove__,
            0LL);
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          this = (FriendRootComponent_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                            v7,
                                            (const MethodInfo_1D57A4C *)Method_NetworkManager_getRequest_FollowdRemoveRequest___);
          if ( this )
          {
            FollowdRemoveRequest__beginRequest((FollowdRemoveRequest_o *)this, otherUserGameEntity->fields.userId, 0LL);
            return;
          }
        }
LABEL_16:
        sub_B7076C(this, res);
      }
    }
  }
  this = (FriendRootComponent_o *)v4->fields.myFSM;
  if ( !this )
    goto LABEL_16;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11231/*"REQUEST_NG"*/, 0LL);
}


void __fastcall FriendRootComponent___RequestFriendOffer2_b__84_0(
        FriendRootComponent_o *this,
        System_String_o *res,
        const MethodInfo *method)
{
  FriendRootComponent_o *v4; // x19
  FriendOperationItemListViewItem_o *Item; // x0
  struct OtherUserGameEntity_o *otherUserGameEntity; // x21
  NetworkManager_ResultCallbackFunc_o *v7; // x20

  v4 = this;
  if ( (byte_4354062 & 1) == 0 )
  {
    sub_B70694(&Method_FriendRootComponent_EndRequestFriend__);
    sub_B70694(&Method_NetworkManager_getRequest_FriendOfferRequest___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_B70694(&StringLiteral_21560/*"ok"*/);
    this = (FriendRootComponent_o *)sub_B70694(&StringLiteral_11231/*"REQUEST_NG"*/);
    byte_4354062 = 1;
  }
  if ( !res )
    goto LABEL_15;
  if ( System_String__Equals_44745508(res, (System_String_o *)StringLiteral_21560/*"ok"*/, 0LL) )
  {
    this = (FriendRootComponent_o *)v4->fields.operationItemListViewManager;
    if ( !this )
      goto LABEL_15;
    Item = FriendOperationItemListViewManager__GetItem(
             (FriendOperationItemListViewManager_o *)this,
             v4->fields.selectItemNum,
             0LL);
    if ( Item )
    {
      otherUserGameEntity = Item->fields.otherUserGameEntity;
      if ( otherUserGameEntity )
      {
        v7 = (NetworkManager_ResultCallbackFunc_o *)sub_B70764(NetworkManager_ResultCallbackFunc_TypeInfo);
        NetworkManager_ResultCallbackFunc___ctor(
          v7,
          (Il2CppObject *)v4,
          Method_FriendRootComponent_EndRequestFriend__,
          0LL);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        this = (FriendRootComponent_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                          v7,
                                          (const MethodInfo_1D57A4C *)Method_NetworkManager_getRequest_FriendOfferRequest___);
        if ( this )
        {
          FriendOfferRequest__beginRequest((FriendOfferRequest_o *)this, otherUserGameEntity->fields.userId, 0LL);
          return;
        }
LABEL_15:
        sub_B7076C(this, res);
      }
    }
  }
  this = (FriendRootComponent_o *)v4->fields.myFSM;
  if ( !this )
    goto LABEL_15;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11231/*"REQUEST_NG"*/, 0LL);
}


void __fastcall FriendRootComponent___RequestFriendRemove_b__88_0(
        FriendRootComponent_o *this,
        System_String_o *res,
        const MethodInfo *method)
{
  FriendRootComponent_o *v4; // x19
  FriendOperationItemListViewItem_o *Item; // x0
  struct OtherUserGameEntity_o *otherUserGameEntity; // x21
  NetworkManager_ResultCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x2

  v4 = this;
  if ( (byte_4354063 & 1) == 0 )
  {
    sub_B70694(&Method_FriendRootComponent_EndRequestFriend__);
    sub_B70694(&Method_NetworkManager_getRequest_FriendRemoveRequest___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&StringLiteral_21560/*"ok"*/);
    this = (FriendRootComponent_o *)sub_B70694(&StringLiteral_11231/*"REQUEST_NG"*/);
    byte_4354063 = 1;
  }
  if ( !res )
    goto LABEL_16;
  if ( System_String__Equals_44745508(res, (System_String_o *)StringLiteral_21560/*"ok"*/, 0LL) )
  {
    this = (FriendRootComponent_o *)v4->fields.operationItemListViewManager;
    if ( !this )
      goto LABEL_16;
    Item = FriendOperationItemListViewManager__GetItem(
             (FriendOperationItemListViewManager_o *)this,
             v4->fields.selectItemNum,
             0LL);
    if ( Item )
    {
      otherUserGameEntity = Item->fields.otherUserGameEntity;
      if ( otherUserGameEntity )
      {
        this = (FriendRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( this )
        {
          CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)this, 0, 0LL);
          v7 = (NetworkManager_ResultCallbackFunc_o *)sub_B70764(NetworkManager_ResultCallbackFunc_TypeInfo);
          NetworkManager_ResultCallbackFunc___ctor(
            v7,
            (Il2CppObject *)v4,
            Method_FriendRootComponent_EndRequestFriend__,
            0LL);
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          this = (FriendRootComponent_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                            v7,
                                            (const MethodInfo_1D57A4C *)Method_NetworkManager_getRequest_FriendRemoveRequest___);
          if ( this )
          {
            FriendRemoveRequest__beginRequest((FriendRemoveRequest_o *)this, otherUserGameEntity->fields.userId, v8);
            return;
          }
        }
LABEL_16:
        sub_B7076C(this, res);
      }
    }
  }
  this = (FriendRootComponent_o *)v4->fields.myFSM;
  if ( !this )
    goto LABEL_16;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11231/*"REQUEST_NG"*/, 0LL);
}


void __fastcall FriendRootComponent___afterMainMenubarSelect_b__97_0(
        FriendRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  FriendRootComponent_o *v4; // x19
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v5; // x20
  const MethodInfo *v6; // x2

  v4 = this;
  if ( (byte_4354066 & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_string___ctor__);
    sub_B70694(&System_Action_string__TypeInfo);
    sub_B70694(&Method_FriendRootComponent__afterMainMenubarSelect_b__97_1__);
    sub_B70694(&StringLiteral_21560/*"ok"*/);
    this = (FriendRootComponent_o *)sub_B70694(&StringLiteral_11231/*"REQUEST_NG"*/);
    byte_4354066 = 1;
  }
  if ( !result )
    goto LABEL_8;
  if ( System_String__Equals_44745508(result, (System_String_o *)StringLiteral_21560/*"ok"*/, 0LL) )
  {
    v5 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B70764(System_Action_string__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v5,
      (Il2CppObject *)v4,
      Method_FriendRootComponent__afterMainMenubarSelect_b__97_1__,
      (const MethodInfo_264C148 *)Method_System_Action_string___ctor__);
    FriendRootComponent__FriendLockRequst(v4, (System_Action_string__o *)v5, v6);
    return;
  }
  this = (FriendRootComponent_o *)v4->fields.myFSM;
  if ( !this )
LABEL_8:
    sub_B7076C(this, result);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11231/*"REQUEST_NG"*/, 0LL);
}


void __fastcall FriendRootComponent___afterMainMenubarSelect_b__97_1(
        FriendRootComponent_o *this,
        System_String_o *res,
        const MethodInfo *method)
{
  FriendRootComponent_o *v4; // x19
  PlayMakerFSM_o *myFSM; // x8
  __int64 *v6; // x9

  v4 = this;
  if ( (byte_4354067 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_11233/*"REQUEST_OK"*/);
    sub_B70694(&StringLiteral_21560/*"ok"*/);
    this = (FriendRootComponent_o *)sub_B70694(&StringLiteral_11231/*"REQUEST_NG"*/);
    byte_4354067 = 1;
  }
  if ( !res
    || (this = (FriendRootComponent_o *)System_String__Equals_44745508(res, (System_String_o *)StringLiteral_21560/*"ok"*/, 0LL),
        (myFSM = v4->fields.myFSM) == 0LL) )
  {
    sub_B7076C(this, res);
  }
  if ( ((unsigned __int8)this & 1) != 0 )
    v6 = &StringLiteral_11233/*"REQUEST_OK"*/;
  else
    v6 = &StringLiteral_11231/*"REQUEST_NG"*/;
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)*v6, 0LL);
}


void __fastcall FriendRootComponent__afterMainMenubarSelect(FriendRootComponent_o *this, const MethodInfo *method)
{
  FriendRootComponent_messageRequestCallback_o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4354038 & 1) == 0 )
  {
    sub_B70694(&Method_FriendRootComponent__afterMainMenubarSelect_b__97_0__);
    sub_B70694(&FriendRootComponent_messageRequestCallback_TypeInfo);
    byte_4354038 = 1;
  }
  v3 = (FriendRootComponent_messageRequestCallback_o *)sub_B70764(FriendRootComponent_messageRequestCallback_TypeInfo);
  FriendRootComponent_messageRequestCallback___ctor(
    v3,
    (Il2CppObject *)this,
    Method_FriendRootComponent__afterMainMenubarSelect_b__97_0__,
    0LL);
  FriendRootComponent__messageDispChangeRequest(this, v3, v4);
}


void __fastcall FriendRootComponent__beginFinish(FriendRootComponent_o *this, const MethodInfo *method)
{
  FriendRootComponent_o *v2; // x19
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x8
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  v2 = this;
  if ( (byte_4354008 & 1) == 0 )
  {
    this = (FriendRootComponent_o *)sub_B70694(&RandomLimitCountManager_TypeInfo);
    byte_4354008 = 1;
  }
  operationItemListViewManager = v2->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    goto LABEL_15;
  operationItemListViewManager->fields._isMessageApply_k__BackingField = 0;
  this = (FriendRootComponent_o *)v2->fields.operationItemListViewManager;
  if ( !this )
    goto LABEL_15;
  FriendOperationItemListViewManager__DestroyList((FriendOperationItemListViewManager_o *)this, 0LL);
  this = (FriendRootComponent_o *)v2->fields.operationConfirmMenu;
  if ( !this )
    goto LABEL_15;
  FriendOperationConfirmMenu__Init((FriendOperationConfirmMenu_o *)this, 0LL);
  this = (FriendRootComponent_o *)v2->fields.friendSearchMenu;
  if ( !this
    || (FriendSearchMenu__Init((FriendSearchMenu_o *)this, method),
        (this = (FriendRootComponent_o *)v2->fields.friendSearchResultMenu) == 0LL)
    || (FriendSearchResultMenu__Init((FriendSearchResultMenu_o *)this, method),
        (this = (FriendRootComponent_o *)v2->fields.friendWarningDialog) == 0LL)
    || (FriendWarningDialog__Init((FriendWarningDialog_o *)this, method),
        (this = (FriendRootComponent_o *)v2->fields.operationItemListViewManager) == 0LL)
    || (this = (FriendRootComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL )
  {
LABEL_15:
    sub_B7076C(this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  v2->fields.state = 0;
  v2->fields.selectFriendEntity = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&v2->fields.selectFriendEntity, 0LL, v4, v5, v6, v7, v8, v9);
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  RandomLimitCountManager__set_EnableRandomLimitCount(0, 0LL);
}


void __fastcall FriendRootComponent__beginInitialize(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  __int64 v4; // x1
  UnityEngine_Component_o *bgTxtSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  ClassButtonControlComponent_o *classButtonControl; // x20
  ClassButtonControlComponent_CallbackFunc_o *v8; // x21

  if ( (byte_4354004 & 1) == 0 )
  {
    sub_B70694(&ClassButtonControlComponent_CallbackFunc_TypeInfo);
    sub_B70694(&Method_FriendRootComponent_changeClass__);
    sub_B70694(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4354004 = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 7, 39, 0LL);
  FriendRootComponent__CheckHelpUI(this, v3);
  bgTxtSprite = (UnityEngine_Component_o *)this->fields.bgTxtSprite;
  if ( !bgTxtSprite )
    goto LABEL_9;
  gameObject = UnityEngine_Component__get_gameObject(bgTxtSprite, 0LL);
  bgTxtSprite = (UnityEngine_Component_o *)BgTxtManager__IsActiveBgTxt(0LL);
  if ( !gameObject )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)bgTxtSprite & 1, 0LL);
  classButtonControl = this->fields.classButtonControl;
  v8 = (ClassButtonControlComponent_CallbackFunc_o *)sub_B70764(ClassButtonControlComponent_CallbackFunc_TypeInfo);
  ClassButtonControlComponent_CallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    Method_FriendRootComponent_changeClass__,
    0LL);
  if ( !classButtonControl
    || (ClassButtonControlComponent__init(classButtonControl, v8, 0, 0, 0, 0LL),
        (bgTxtSprite = (UnityEngine_Component_o *)this->fields.operationItemListViewManager) == 0LL)
    || (FriendOperationItemListViewManager__SetupClassBoardInfo(
          (FriendOperationItemListViewManager_o *)bgTxtSprite,
          0LL),
        (bgTxtSprite = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
LABEL_9:
    sub_B7076C(bgTxtSprite, v4);
  }
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)bgTxtSprite, (SceneRootComponent_o *)this, 0LL);
}


void __fastcall FriendRootComponent__beginResume(
        FriendRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  __int64 v5; // x10
  FriendOperationItemListViewManager_o *Instance; // x0
  __int64 v7; // x1
  CommonUI_o *v8; // x20
  const MethodInfo *v9; // x1

  if ( (byte_4354009 & 1) == 0 )
  {
    sub_B70694(&AvalonSceneManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&SupportInfoJump_TypeInfo);
    byte_4354009 = 1;
  }
  if ( data
    && (v5 = *(&SupportInfoJump_TypeInfo->_2.bitflags2 + 1), *(&data->klass->_2.bitflags2 + 1) >= (unsigned int)v5)
    && (SupportInfoJump_c *)data->klass->_2.typeHierarchy[v5 - 1] == SupportInfoJump_TypeInfo )
  {
    this->fields.isReturnSupport = 1;
    Instance = (FriendOperationItemListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v8 = (CommonUI_o *)Instance;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    }
    if ( !v8
      || (CommonUI__maskFadein(v8, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL),
          FriendRootComponent__RefreshTab(this, v9),
          (Instance = this->fields.operationItemListViewManager) == 0LL) )
    {
      sub_B7076C(Instance, v7);
    }
    FriendOperationItemListViewManager__SetMode_31880164(Instance, 2, 0LL);
    SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 7, 39, 0LL);
    MainMenuBar__setMenuActive(1, 0LL, 0LL);
    SceneRootComponent__sendMessageStartUp((SceneRootComponent_o *)this, 0LL);
  }
  else
  {
    SceneRootComponent__beginResume_17527992((SceneRootComponent_o *)this, 0LL);
    this->fields.isReturnSupport = 0;
  }
}


void __fastcall FriendRootComponent__beginStartUp(FriendRootComponent_o *this, const MethodInfo *method)
{
  System_String_o *MainBgmName; // x20
  __int64 v4; // x1
  TitleInfoControl_o *titleInfo; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  NetworkManager_ResultCallbackFunc_o *v12; // x20

  if ( (byte_4354005 & 1) == 0 )
  {
    sub_B70694(&BgmManager_TypeInfo);
    sub_B70694(&Method_FriendRootComponent_EndFriendRequest__);
    sub_B70694(&Method_NetworkManager_getRequest_FriendTopRequest___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&RandomLimitCountManager_TypeInfo);
    sub_B70694(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_B70694(&SoundManager_TypeInfo);
    byte_4354005 = 1;
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
  TitleInfoControl__setBackBtnSprite_18532552(titleInfo, 1, 0, 0, 0LL);
  this->fields.state = 0;
  this->fields.currentModeKind = 0;
  this->fields.selectFriendEntity = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.selectFriendEntity, 0LL, v6, v7, v8, v9, v10, v11);
  v12 = (NetworkManager_ResultCallbackFunc_o *)sub_B70764(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v12,
    (Il2CppObject *)this,
    Method_FriendRootComponent_EndFriendRequest__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  titleInfo = (TitleInfoControl_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                      v12,
                                      (const MethodInfo_1D57A4C *)Method_NetworkManager_getRequest_FriendTopRequest___);
  if ( !titleInfo )
LABEL_19:
    sub_B7076C(titleInfo, v4);
  RequestBase__beginRequest((RequestBase_o *)titleInfo, 0LL);
}


void __fastcall FriendRootComponent__changeClass(
        FriendRootComponent_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  __int64 v5; // x1
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0

  if ( (byte_4354042 & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    byte_4354042 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    sub_B7076C(0LL, v5);
  FriendOperationItemListViewManager__SetClassId(operationItemListViewManager, classPos, 0LL);
}


int32_t __fastcall FriendRootComponent__get_tabKind(FriendRootComponent_o *this, const MethodInfo *method)
{
  FriendRootComponent_c *v2; // x0

  if ( (byte_4354003 & 1) == 0 )
  {
    sub_B70694(&FriendRootComponent_TypeInfo);
    byte_4354003 = 1;
  }
  v2 = FriendRootComponent_TypeInfo;
  if ( (BYTE3(FriendRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FriendRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendRootComponent_TypeInfo);
    v2 = FriendRootComponent_TypeInfo;
  }
  return v2->static_fields->tabKindSave;
}


void __fastcall FriendRootComponent__messageDispChangeRequest(
        FriendRootComponent_o *this,
        FriendRootComponent_messageRequestCallback_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x20
  ListViewManager_o *operationItemListViewManager; // x0
  int64_t items; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  FriendRootComponent_messageRequestCallback_o **v14; // x22
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  int32_t ItemSum; // w23
  System_Collections_Generic_List_long__o *v22; // x21
  System_Collections_Generic_List_long__o *v23; // x22
  int32_t v24; // w24
  struct System_Collections_Generic_List_UIDragDropListViewSurface__o *dropList; // x8
  const MethodInfo_30BC188 *v26; // x2
  System_Collections_Generic_List_long__o *v27; // x0
  NetworkManager_ResultCallbackFunc_o *v28; // x19
  FriendMessageHideSyncRequest_o *v29; // x19
  System_Int64_array *v30; // x20

  if ( (byte_4354040 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_long__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_long___ctor__);
    sub_B70694(&System_Collections_Generic_List_long__TypeInfo);
    sub_B70694(&Method_NetworkManager_getRequest_FriendMessageHideSyncRequest___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_B70694(&Method_FriendRootComponent___c__DisplayClass108_0__messageDispChangeRequest_b__0__);
    sub_B70694(&FriendRootComponent___c__DisplayClass108_0_TypeInfo);
    sub_B70694(&StringLiteral_21560/*"ok"*/);
    byte_4354040 = 1;
  }
  v5 = sub_B70764(FriendRootComponent___c__DisplayClass108_0_TypeInfo);
  FriendRootComponent___c__DisplayClass108_0___ctor((FriendRootComponent___c__DisplayClass108_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_29;
  *(_QWORD *)(v5 + 16) = this;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = callback;
  v14 = (FriendRootComponent_messageRequestCallback_o **)(v5 + 24);
  sub_B70630((BattleServantConfConponent_o *)(v5 + 24), (System_Int32_array **)callback, v15, v16, v17, v18, v19, v20);
  operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    goto LABEL_29;
  if ( LOBYTE(operationItemListViewManager[1].fields.sortKindLabel) )
  {
    ItemSum = ListViewManager__get_ItemSum(operationItemListViewManager, 0LL);
    v22 = (System_Collections_Generic_List_long__o *)sub_B70764(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v22,
      (const MethodInfo_30BB42C *)Method_System_Collections_Generic_List_long___ctor__);
    v23 = (System_Collections_Generic_List_long__o *)sub_B70764(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v23,
      (const MethodInfo_30BB42C *)Method_System_Collections_Generic_List_long___ctor__);
    if ( ItemSum >= 1 )
    {
      v24 = 0;
      while ( 1 )
      {
        operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
        if ( !operationItemListViewManager )
          break;
        operationItemListViewManager = (ListViewManager_o *)FriendOperationItemListViewManager__GetItem(
                                                              (FriendOperationItemListViewManager_o *)operationItemListViewManager,
                                                              v24,
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
            if ( !v22 )
              break;
            v26 = (const MethodInfo_30BC188 *)Method_System_Collections_Generic_List_long__Add__;
            v27 = v22;
          }
          else
          {
            if ( !v23 )
              break;
            v26 = (const MethodInfo_30BC188 *)Method_System_Collections_Generic_List_long__Add__;
            v27 = v23;
          }
          System_Collections_Generic_List_long___Add(v27, items, v26);
        }
        if ( ++v24 >= ItemSum )
          goto LABEL_19;
      }
LABEL_29:
      sub_B7076C(operationItemListViewManager, items);
    }
LABEL_19:
    v28 = (NetworkManager_ResultCallbackFunc_o *)sub_B70764(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v28,
      (Il2CppObject *)v5,
      Method_FriendRootComponent___c__DisplayClass108_0__messageDispChangeRequest_b__0__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    operationItemListViewManager = (ListViewManager_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                          v28,
                                                          (const MethodInfo_1D57A4C *)Method_NetworkManager_getRequest_FriendMessageHideSyncRequest___);
    if ( !v23 )
      goto LABEL_29;
    v29 = (FriendMessageHideSyncRequest_o *)operationItemListViewManager;
    operationItemListViewManager = (ListViewManager_o *)System_Collections_Generic_List_long___ToArray(
                                                          v23,
                                                          (const MethodInfo_30BE294 *)Method_System_Collections_Generic_List_long__ToArray__);
    if ( !v22 )
      goto LABEL_29;
    v30 = (System_Int64_array *)operationItemListViewManager;
    operationItemListViewManager = (ListViewManager_o *)System_Collections_Generic_List_long___ToArray(
                                                          v22,
                                                          (const MethodInfo_30BE294 *)Method_System_Collections_Generic_List_long__ToArray__);
    if ( !v29 )
      goto LABEL_29;
    FriendMessageHideSyncRequest__beginRequest(v29, v30, (System_Int64_array *)operationItemListViewManager, 0LL);
  }
  else if ( *v14 )
  {
    FriendRootComponent_messageRequestCallback__Invoke(*v14, (System_String_o *)StringLiteral_21560/*"ok"*/, 0LL);
  }
}


void __fastcall FriendRootComponent__set_tabKind(FriendRootComponent_o *this, int32_t value, const MethodInfo *method)
{
  FriendRootComponent_c *v4; // x0

  if ( (byte_4354002 & 1) == 0 )
  {
    sub_B70694(&FriendRootComponent_TypeInfo);
    byte_4354002 = 1;
  }
  v4 = FriendRootComponent_TypeInfo;
  if ( (BYTE3(FriendRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FriendRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendRootComponent_TypeInfo);
    v4 = FriendRootComponent_TypeInfo;
  }
  v4->static_fields->tabKindSave = value;
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
    sub_B7076C(this, result);
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
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  __int64 v6; // x1
  int32_t v7; // w21
  struct FriendRootComponent_o *_4__this; // x8

  if ( (byte_434EACE & 1) == 0 )
  {
    sub_B70694(&Method_ActionExtensions_Call_string___);
    sub_B70694(&StringLiteral_21560/*"ok"*/);
    byte_434EACE = 1;
  }
  operationItemListViewManager = (FriendOperationItemListViewManager_o *)System_String__op_Equality(
                                                                           result,
                                                                           (System_String_o *)StringLiteral_21560/*"ok"*/,
                                                                           0LL);
  if ( ((unsigned __int8)operationItemListViewManager & 1) != 0 && this->fields.sum >= 1 )
  {
    v7 = 0;
    do
    {
      _4__this = this->fields.__4__this;
      if ( !_4__this || (operationItemListViewManager = _4__this->fields.operationItemListViewManager) == 0LL )
        sub_B7076C(operationItemListViewManager, v6);
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
  ActionExtensions__Call_BlankEarth_QAARotateEarthResponse_(
    (System_Action_T__o *)this->fields.onFinishedRequest,
    (BlankEarth_QAARotateEarthResponse_o *)result,
    (const MethodInfo_2BFC288 *)Method_ActionExtensions_Call_string___);
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
  sub_B70630(p_method);
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
  return (System_IAsyncResult_o *)sub_B70638(this, v6, callback, object);
}


void __fastcall FriendRootComponent_messageRequestCallback__EndInvoke(
        FriendRootComponent_messageRequestCallback_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7063C(result, 0LL, method);
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
  System_String_c *v11; // x8
  unsigned __int64 v12; // x10
  int32_t *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  unsigned int v16; // w23
  __int64 v17; // x0
  __int64 v18; // x8
  unsigned __int64 v19; // x10
  _DWORD *v20; // x11
  __int64 v21; // x0
  __int64 v22; // x0
  __int64 v23; // x0
  void (__fastcall **v24)(System_String_o *, _QWORD); // x0
  __int64 v25; // x0
  void (__fastcall **v26)(__int64 *, System_String_o *, _QWORD); // x0
  FriendRootComponent_messageRequestCallback_o *v27; // x8
  __int64 v28; // x21
  __int64 *v29; // x22
  void (__fastcall *v30)(System_String_o *, __int64); // x23
  char v31; // w0
  int v32; // w8
  char v33; // w23
  char v34; // w0
  __int64 v35; // x8
  __int64 v36; // x1
  __int64 v37; // x2
  unsigned __int64 v38; // x10
  _DWORD *v39; // x11
  char v40; // w22
  char v41; // w0
  System_String_c *klass; // x8
  __int64 v43; // x1
  __int64 v44; // x2
  unsigned __int64 v45; // x10
  int32_t *p_offset; // x11
  FriendRootComponent_messageRequestCallback_o *v47; // [xsp+8h] [xbp-48h] BYREF

  v47 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v47;
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
      v27 = v7[i];
      v29 = *(__int64 **)&v27->fields.method;
      v28 = *(_QWORD *)&v27->fields.extra_arg;
      v30 = *(void (__fastcall **)(System_String_o *, __int64))&v27->fields.method_ptr;
      if ( *(__int16 *)(v28 + 72) == -1 )
        sub_B70750(*(_QWORD *)&v27->fields.extra_arg, result);
      v31 = sub_B706C4(v28);
      v32 = *(unsigned __int8 *)(v28 + 74);
      if ( (v31 & 1) != 0 )
      {
        if ( v32 == 1 )
          goto LABEL_58;
      }
      else
      {
        if ( v32 != 1 )
        {
          if ( *(__int16 *)(v28 + 72) != -1 && this->fields.m_target )
          {
            v40 = sub_B706BC(v28);
            v41 = sub_B70AC0(v28);
            if ( (v40 & 1) != 0 )
            {
              if ( (v41 & 1) != 0 )
              {
                klass = result->klass;
                v43 = *(_QWORD *)(v28 + 24);
                v44 = *(unsigned __int16 *)(v28 + 72);
                if ( *(_WORD *)&result->klass->_2.bitflags1 )
                {
                  v45 = 0LL;
                  p_offset = &klass->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)p_offset - 1) != v43 )
                  {
                    ++v45;
                    p_offset += 4;
                    if ( v45 >= *(unsigned __int16 *)&result->klass->_2.bitflags1 )
                      goto LABEL_57;
                  }
                  v23 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset + 2 * (int)v44);
                }
                else
                {
LABEL_57:
                  v23 = sub_B08590(result, v43, v44);
                }
                v15 = *(_QWORD *)(v23 + 8);
              }
              else
              {
                v15 = *((_QWORD *)&result->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v28 + 72));
              }
              v24 = (void (__fastcall **)(System_String_o *, _QWORD))sub_B70744(v15, v28);
              (*v24)(result, v24);
            }
            else
            {
              v9 = *(unsigned __int16 *)(v28 + 72);
              if ( (v41 & 1) != 0 )
              {
                class_0 = j_il2cpp_method_get_class_0(v28);
                v11 = result->klass;
                if ( *(_WORD *)&result->klass->_2.bitflags1 )
                {
                  v12 = 0LL;
                  v13 = &v11->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)v13 - 1) != class_0 )
                  {
                    ++v12;
                    v13 += 4;
                    if ( v12 >= *(unsigned __int16 *)&result->klass->_2.bitflags1 )
                      goto LABEL_11;
                  }
                  v14 = (__int64)(&v11->vtable._0_Equals.method + 2 * (int)(*v13 + v9));
                }
                else
                {
LABEL_11:
                  v14 = sub_B08590(result, class_0, v9);
                }
                (*(void (__fastcall **)(System_String_o *, _QWORD))v14)(result, *(_QWORD *)(v14 + 8));
              }
              else
              {
                (*((void (__fastcall **)(System_String_o *, _QWORD))&result->klass->vtable._0_Equals.method
                 + 2 * *(unsigned __int16 *)(v28 + 72)))(
                  result,
                  *((_QWORD *)&result->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v28 + 72)));
              }
            }
            continue;
          }
LABEL_58:
          v30(result, v28);
          continue;
        }
        if ( !v29 )
          goto LABEL_58;
        if ( *(__int16 *)(v28 + 72) != -1 && (*(_BYTE *)(*v29 + 277) & 1) == 0 && this->fields.m_target )
        {
          v33 = sub_B706BC(v28);
          v34 = sub_B70AC0(v28);
          if ( (v33 & 1) != 0 )
          {
            if ( (v34 & 1) != 0 )
            {
              v35 = *v29;
              v36 = *(_QWORD *)(v28 + 24);
              v37 = *(unsigned __int16 *)(v28 + 72);
              if ( *(_WORD *)(*v29 + 298) )
              {
                v38 = 0LL;
                v39 = (_DWORD *)(*(_QWORD *)(v35 + 176) + 8LL);
                while ( *((_QWORD *)v39 - 1) != v36 )
                {
                  ++v38;
                  v39 += 4;
                  if ( v38 >= *(unsigned __int16 *)(*v29 + 298) )
                    goto LABEL_48;
                }
                v25 = v35 + 16LL * (*v39 + (int)v37) + 312;
              }
              else
              {
LABEL_48:
                v25 = sub_B08590(v29, v36, v37);
              }
              v22 = *(_QWORD *)(v25 + 8);
            }
            else
            {
              v22 = *(_QWORD *)(*v29 + 16LL * *(unsigned __int16 *)(v28 + 72) + 320);
            }
            v26 = (void (__fastcall **)(__int64 *, System_String_o *, _QWORD))sub_B70744(v22, v28);
            (*v26)(v29, result, v26);
          }
          else
          {
            v16 = *(unsigned __int16 *)(v28 + 72);
            if ( (v34 & 1) != 0 )
            {
              v17 = j_il2cpp_method_get_class_0(v28);
              v18 = *v29;
              if ( *(_WORD *)(*v29 + 298) )
              {
                v19 = 0LL;
                v20 = (_DWORD *)(*(_QWORD *)(v18 + 176) + 8LL);
                while ( *((_QWORD *)v20 - 1) != v17 )
                {
                  ++v19;
                  v20 += 4;
                  if ( v19 >= *(unsigned __int16 *)(*v29 + 298) )
                    goto LABEL_19;
                }
                v21 = v18 + 16LL * (int)(*v20 + v16) + 312;
              }
              else
              {
LABEL_19:
                v21 = sub_B08590(v29, v17, v16);
              }
              (*(void (__fastcall **)(__int64 *, System_String_o *, _QWORD))v21)(v29, result, *(_QWORD *)(v21 + 8));
            }
            else
            {
              (*(void (__fastcall **)(__int64 *, System_String_o *, _QWORD))(*v29
                                                                           + 16LL * *(unsigned __int16 *)(v28 + 72)
                                                                           + 312))(
                v29,
                result,
                *(_QWORD *)(*v29 + 16LL * *(unsigned __int16 *)(v28 + 72) + 320));
            }
          }
          continue;
        }
      }
      ((void (__fastcall *)(__int64 *, System_String_o *, __int64))v30)(v29, result, v28);
    }
  }
}