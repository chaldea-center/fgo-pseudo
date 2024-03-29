void __fastcall FriendRootComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4217193 & 1) == 0 )
  {
    sub_B0D8A4(&FriendRootComponent_TypeInfo, v1);
    byte_4217193 = 1;
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

  if ( (byte_4217184 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4217184 = 1;
  }
  state = this->fields.state;
  switch ( state )
  {
    case ',':
      this->fields.state = 23;
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
        FriendWarningDialog__Close_29194836((FriendWarningDialog_o *)Instance, 0LL, v2);
        goto LABEL_12;
      }
LABEL_14:
      sub_B0D97C(Instance);
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
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  const MethodInfo *v17; // x2
  FriendSearchMenu_o *friendSearchMenu; // x20
  __int64 v19; // x1
  __int64 v20; // x2
  FriendSearchMenu_CallbackFunc_o *v21; // x21
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x1

  if ( (byte_4217189 & 1) == 0 )
  {
    sub_B0D8A4(&FriendSearchMenu_CallbackFunc_TypeInfo, method);
    sub_B0D8A4(&Method_FriendRootComponent_OnSelectSearchFriend__, v9);
    byte_4217189 = 1;
  }
  if ( this->fields.state == 42 )
  {
    this->fields.state = 23;
    this->fields.selectFriendCode = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.selectFriendCode, 0LL, v2, v3, v4, v5, v6, v7);
    this->fields.selectFriendEntity = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.selectFriendEntity, 0LL, v10, v11, v12, v13, v14, v15);
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close(operationConfirmMenu, 0LL),
          (operationConfirmMenu = (FriendOperationConfirmMenu_o *)this->fields.friendSearchResultMenu) == 0LL)
      || (FriendSearchResultMenu__Close_29162868((FriendSearchResultMenu_o *)operationConfirmMenu, 0LL, v17),
          friendSearchMenu = this->fields.friendSearchMenu,
          v21 = (FriendSearchMenu_CallbackFunc_o *)sub_B0D974(FriendSearchMenu_CallbackFunc_TypeInfo, v19, v20),
          FriendSearchMenu_CallbackFunc___ctor(
            v21,
            (Il2CppObject *)this,
            Method_FriendRootComponent_OnSelectSearchFriend__,
            0LL),
          !friendSearchMenu) )
    {
      sub_B0D97C(operationConfirmMenu);
    }
    FriendSearchMenu__Open(friendSearchMenu, v21, 1, v22);
    FriendRootComponent__RefreshInfo(this, v23);
  }
}


void __fastcall FriendRootComponent__BackFollowRemoveConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  FriendOperationItemListViewManager_CallbackFunc_o *v8; // x21

  if ( (byte_421718B & 1) == 0 )
  {
    sub_B0D8A4(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_B0D8A4(&Method_FriendRootComponent_OnSelectFriendItem__, v3);
    byte_421718B = 1;
  }
  if ( this->fields.state == 45 )
  {
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close(operationConfirmMenu, 0LL),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v8 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B0D974(
                                                                      FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                                      v6,
                                                                      v7),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v8,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            0LL),
          !operationItemListViewManager) )
    {
      sub_B0D97C(operationConfirmMenu);
    }
    FriendOperationItemListViewManager__SetMode(operationItemListViewManager, 2, v8, 0LL);
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
      sub_B0D97C(operationConfirmMenu);
    }
    FriendOperationItemListViewManager__DestroyList((FriendOperationItemListViewManager_o *)operationConfirmMenu, 0LL);
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
  RequestBase_o *Request_WarBoardWallAttackRequest; // x0

  if ( (byte_421718C & 1) == 0 )
  {
    sub_B0D8A4(&Method_FriendRootComponent_EndFriendRequest2__, method);
    sub_B0D8A4(&Method_NetworkManager_getRequest_FriendTopRequest___, v4);
    sub_B0D8A4(&NetworkManager_TypeInfo, v5);
    sub_B0D8A4(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    byte_421718C = 1;
  }
  v7 = (NetworkManager_ResultCallbackFunc_o *)sub_B0D974(NetworkManager_ResultCallbackFunc_TypeInfo, method, v2);
  NetworkManager_ResultCallbackFunc___ctor(
    v7,
    (Il2CppObject *)this,
    Method_FriendRootComponent_EndFriendRequest2__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (RequestBase_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                         v7,
                                                         (const MethodInfo_2049D98 *)Method_NetworkManager_getRequest_FriendTopRequest___);
  if ( !Request_WarBoardWallAttackRequest )
    sub_B0D97C(0LL);
  RequestBase__beginRequest(Request_WarBoardWallAttackRequest, 0LL);
}


void __fastcall FriendRootComponent__BackFriendAcceptConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  FriendOperationItemListViewManager_CallbackFunc_o *v8; // x21

  if ( (byte_4217151 & 1) == 0 )
  {
    sub_B0D8A4(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_B0D8A4(&Method_FriendRootComponent_OnSelectFriendItem__, v3);
    byte_4217151 = 1;
  }
  if ( this->fields.state == 31 )
  {
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close(operationConfirmMenu, 0LL),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v8 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B0D974(
                                                                      FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                                      v6,
                                                                      v7),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v8,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            0LL),
          !operationItemListViewManager) )
    {
      sub_B0D97C(operationConfirmMenu);
    }
    FriendOperationItemListViewManager__SetMode(operationItemListViewManager, 2, v8, 0LL);
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
  __int64 v7; // x1
  __int64 v8; // x2
  FriendOperationItemListViewManager_CallbackFunc_o *v9; // x21

  if ( (byte_4217152 & 1) == 0 )
  {
    sub_B0D8A4(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_B0D8A4(&Method_FriendRootComponent_OnSelectFriendItem__, v3);
    byte_4217152 = 1;
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
          v9 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B0D974(
                                                                      FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                                      v7,
                                                                      v8),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v9,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            0LL),
          !operationItemListViewManager) )
    {
LABEL_11:
      sub_B0D97C(operationConfirmMenu);
    }
    FriendOperationItemListViewManager__SetMode(operationItemListViewManager, 2, v9, 0LL);
  }
}


void __fastcall FriendRootComponent__BackFriendCancelConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  FriendOperationItemListViewManager_CallbackFunc_o *v8; // x21

  if ( (byte_4217157 & 1) == 0 )
  {
    sub_B0D8A4(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_B0D8A4(&Method_FriendRootComponent_OnSelectFriendItem__, v3);
    byte_4217157 = 1;
  }
  if ( this->fields.state == 37 )
  {
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close(operationConfirmMenu, 0LL),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v8 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B0D974(
                                                                      FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                                      v6,
                                                                      v7),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v8,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            0LL),
          !operationItemListViewManager) )
    {
      sub_B0D97C(operationConfirmMenu);
    }
    FriendOperationItemListViewManager__SetMode(operationItemListViewManager, 2, v8, 0LL);
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
  __int64 v7; // x1
  __int64 v8; // x2
  FriendOperationItemListViewManager_CallbackFunc_o *v9; // x21

  if ( (byte_4217158 & 1) == 0 )
  {
    sub_B0D8A4(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_B0D8A4(&Method_FriendRootComponent_OnSelectFriendItem__, v3);
    byte_4217158 = 1;
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
          v9 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B0D974(
                                                                      FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                                      v7,
                                                                      v8),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v9,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            0LL),
          !operationItemListViewManager) )
    {
LABEL_11:
      sub_B0D97C(operationConfirmMenu);
    }
    FriendOperationItemListViewManager__SetMode(operationItemListViewManager, 2, v9, 0LL);
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
      FriendWarningDialog__Close_29194836(friendWarningDialog, 0LL, v2);
      goto LABEL_7;
    }
LABEL_9:
    sub_B0D97C(friendWarningDialog);
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
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  FriendOperationItemListViewManager_CallbackFunc_o *v9; // x21

  if ( (byte_421718E & 1) == 0 )
  {
    sub_B0D8A4(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_B0D8A4(&Method_FriendRootComponent_OnSelectFriendItem__, v3);
    byte_421718E = 1;
  }
  state = this->fields.state;
  if ( state == 29 || state == 27 )
  {
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close(operationConfirmMenu, 0LL),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v9 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B0D974(
                                                                      FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                                      v7,
                                                                      v8),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v9,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            0LL),
          !operationItemListViewManager) )
    {
      sub_B0D97C(operationConfirmMenu);
    }
    FriendOperationItemListViewManager__SetMode(operationItemListViewManager, 2, v9, 0LL);
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
  __int64 v7; // x1
  __int64 v8; // x2
  FriendOperationItemListViewManager_CallbackFunc_o *v9; // x21

  if ( (byte_421718F & 1) == 0 )
  {
    sub_B0D8A4(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_B0D8A4(&Method_FriendRootComponent_OnSelectFriendItem__, v3);
    byte_421718F = 1;
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
          v9 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B0D974(
                                                                      FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                                      v7,
                                                                      v8),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v9,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            0LL),
          !operationItemListViewManager) )
    {
LABEL_11:
      sub_B0D97C(operationConfirmMenu);
    }
    FriendOperationItemListViewManager__SetMode(operationItemListViewManager, 2, v9, 0LL);
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
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  const MethodInfo *v17; // x2
  FriendSearchMenu_o *friendSearchMenu; // x20
  __int64 v19; // x1
  __int64 v20; // x2
  FriendSearchMenu_CallbackFunc_o *v21; // x21
  const MethodInfo *v22; // x3

  if ( (byte_421714F & 1) == 0 )
  {
    sub_B0D8A4(&FriendSearchMenu_CallbackFunc_TypeInfo, method);
    sub_B0D8A4(&Method_FriendRootComponent_OnSelectSearchFriend__, v9);
    byte_421714F = 1;
  }
  if ( this->fields.state == 27 )
  {
    this->fields.state = 23;
    this->fields.selectFriendCode = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.selectFriendCode, 0LL, v2, v3, v4, v5, v6, v7);
    this->fields.selectFriendEntity = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.selectFriendEntity, 0LL, v10, v11, v12, v13, v14, v15);
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close(operationConfirmMenu, 0LL),
          (operationConfirmMenu = (FriendOperationConfirmMenu_o *)this->fields.friendSearchResultMenu) == 0LL)
      || (FriendSearchResultMenu__Close_29162868((FriendSearchResultMenu_o *)operationConfirmMenu, 0LL, v17),
          friendSearchMenu = this->fields.friendSearchMenu,
          v21 = (FriendSearchMenu_CallbackFunc_o *)sub_B0D974(FriendSearchMenu_CallbackFunc_TypeInfo, v19, v20),
          FriendSearchMenu_CallbackFunc___ctor(
            v21,
            (Il2CppObject *)this,
            Method_FriendRootComponent_OnSelectSearchFriend__,
            0LL),
          !friendSearchMenu) )
    {
      sub_B0D97C(operationConfirmMenu);
    }
    FriendSearchMenu__Open(friendSearchMenu, v21, 1, v22);
  }
}


void __fastcall FriendRootComponent__BackFriendRejectConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  FriendOperationItemListViewManager_CallbackFunc_o *v8; // x21

  if ( (byte_4217154 & 1) == 0 )
  {
    sub_B0D8A4(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_B0D8A4(&Method_FriendRootComponent_OnSelectFriendItem__, v3);
    byte_4217154 = 1;
  }
  if ( this->fields.state == 34 )
  {
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close(operationConfirmMenu, 0LL),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v8 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B0D974(
                                                                      FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                                      v6,
                                                                      v7),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v8,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            0LL),
          !operationItemListViewManager) )
    {
      sub_B0D97C(operationConfirmMenu);
    }
    FriendOperationItemListViewManager__SetMode(operationItemListViewManager, 2, v8, 0LL);
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
  __int64 v7; // x1
  __int64 v8; // x2
  FriendOperationItemListViewManager_CallbackFunc_o *v9; // x21

  if ( (byte_4217155 & 1) == 0 )
  {
    sub_B0D8A4(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_B0D8A4(&Method_FriendRootComponent_OnSelectFriendItem__, v3);
    byte_4217155 = 1;
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
          v9 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B0D974(
                                                                      FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                                      v7,
                                                                      v8),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v9,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            0LL),
          !operationItemListViewManager) )
    {
LABEL_11:
      sub_B0D97C(operationConfirmMenu);
    }
    FriendOperationItemListViewManager__SetMode(operationItemListViewManager, 2, v9, 0LL);
  }
}


void __fastcall FriendRootComponent__BackFriendRemoveConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  FriendOperationItemListViewManager_CallbackFunc_o *v8; // x21

  if ( (byte_421715A & 1) == 0 )
  {
    sub_B0D8A4(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_B0D8A4(&Method_FriendRootComponent_OnSelectFriendItem__, v3);
    byte_421715A = 1;
  }
  if ( this->fields.state == 40 )
  {
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close(operationConfirmMenu, 0LL),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v8 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B0D974(
                                                                      FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                                      v6,
                                                                      v7),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v8,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            0LL),
          !operationItemListViewManager) )
    {
      sub_B0D97C(operationConfirmMenu);
    }
    FriendOperationItemListViewManager__SetMode(operationItemListViewManager, 2, v8, 0LL);
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
  __int64 v7; // x1
  __int64 v8; // x2
  FriendOperationItemListViewManager_CallbackFunc_o *v9; // x21

  if ( (byte_421715B & 1) == 0 )
  {
    sub_B0D8A4(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_B0D8A4(&Method_FriendRootComponent_OnSelectFriendItem__, v3);
    byte_421715B = 1;
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
          v9 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B0D974(
                                                                      FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                                      v7,
                                                                      v8),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v9,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            0LL),
          !operationItemListViewManager) )
    {
LABEL_11:
      sub_B0D97C(operationConfirmMenu);
    }
    FriendOperationItemListViewManager__SetMode(operationItemListViewManager, 2, v9, 0LL);
  }
}


void __fastcall FriendRootComponent__BackSearchFriend(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  const MethodInfo *v10; // x2
  FriendSearchResultMenu_o *friendSearchResultMenu; // x0
  FriendSearchMenu_o *friendSearchMenu; // x20
  __int64 v13; // x1
  __int64 v14; // x2
  System_Action_o *v15; // x21
  const MethodInfo *v16; // x2

  if ( (byte_4217148 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_FriendRootComponent_OnMoveEnd__, v3);
    byte_4217148 = 1;
  }
  if ( this->fields.state == 23 )
  {
    this->fields.state = 24;
    FriendRootComponent__RefreshInfo(this, method);
    this->fields.selectFriendEntity = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.selectFriendEntity, 0LL, v4, v5, v6, v7, v8, v9);
    friendSearchResultMenu = this->fields.friendSearchResultMenu;
    if ( !friendSearchResultMenu
      || (FriendSearchResultMenu__Close_29162868(friendSearchResultMenu, 0LL, v10),
          friendSearchMenu = this->fields.friendSearchMenu,
          v15 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v13, v14),
          System_Action___ctor(v15, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0LL),
          !friendSearchMenu) )
    {
      sub_B0D97C(friendSearchResultMenu);
    }
    FriendSearchMenu__Close_29160720(friendSearchMenu, v15, v16);
  }
}


void __fastcall FriendRootComponent__BackShowFriend(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_o *v7; // x21
  __int64 v8; // x0

  if ( (byte_4217140 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_FriendRootComponent_OnMoveEnd__, v3);
    byte_4217140 = 1;
  }
  if ( this->fields.state == 4 )
  {
    this->fields.state = 5;
    FriendRootComponent__RefreshInfo(this, method);
    operationItemListViewManager = this->fields.operationItemListViewManager;
    v7 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v5, v6);
    System_Action___ctor(v7, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0LL);
    if ( !operationItemListViewManager )
      sub_B0D97C(v8);
    FriendOperationItemListViewManager__SetMode_29792744(operationItemListViewManager, 4, v7, 0LL);
  }
}


void __fastcall FriendRootComponent__BackShowOffer(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  System_Action_o *v6; // x21
  __int64 v7; // x0
  const MethodInfo *v8; // x1

  if ( (byte_4217142 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_FriendRootComponent_OnMoveEnd__, v4);
    byte_4217142 = 1;
  }
  if ( this->fields.state == 9 )
  {
    operationItemListViewManager = this->fields.operationItemListViewManager;
    v6 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, method, v2);
    System_Action___ctor(v6, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0LL);
    if ( !operationItemListViewManager )
      sub_B0D97C(v7);
    FriendOperationItemListViewManager__SetMode_29792744(operationItemListViewManager, 4, v6, 0LL);
    FriendRootComponent__RefreshInfo(this, v8);
    this->fields.state = 10;
  }
}


void __fastcall FriendRootComponent__BackShowOffered(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_o *v7; // x21
  __int64 v8; // x0

  if ( (byte_4217144 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_FriendRootComponent_OnMoveEnd__, v3);
    byte_4217144 = 1;
  }
  if ( this->fields.state == 14 )
  {
    this->fields.state = 15;
    FriendRootComponent__RefreshInfo(this, method);
    operationItemListViewManager = this->fields.operationItemListViewManager;
    v7 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v5, v6);
    System_Action___ctor(v7, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0LL);
    if ( !operationItemListViewManager )
      sub_B0D97C(v8);
    FriendOperationItemListViewManager__SetMode_29792744(operationItemListViewManager, 4, v7, 0LL);
  }
}


void __fastcall FriendRootComponent__BackShowSearch(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  System_Action_o *v6; // x21
  __int64 v7; // x0

  if ( (byte_4217146 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_FriendRootComponent_OnMoveEnd__, v4);
    byte_4217146 = 1;
  }
  if ( this->fields.state == 19 )
  {
    this->fields.state = 20;
    operationItemListViewManager = this->fields.operationItemListViewManager;
    v6 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, method, v2);
    System_Action___ctor(v6, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0LL);
    if ( !operationItemListViewManager )
      sub_B0D97C(v7);
    FriendOperationItemListViewManager__SetMode_29792744(operationItemListViewManager, 4, v6, 0LL);
  }
}


void __fastcall FriendRootComponent__ChangeLimitCountBySpoilerProtection(
        FriendRootComponent_o *this,
        const MethodInfo *method)
{
  ServantLeaderInfo_o *SpoilerSetting; // x0
  struct OtherUserGameEntity_o *selectFriendEntity; // x8
  struct ServantLeaderInfo_array *userSvtLeaderHash; // x20
  int max_length; // w8
  unsigned int v7; // w21
  struct OtherUserGameEntity_o *v8; // x8
  struct ServantLeaderInfo_array *eventUserSvtLeaderHash; // x19
  int v10; // w8
  unsigned int v11; // w20
  __int64 v12; // x0

  if ( (byte_4217166 & 1) == 0 )
  {
    sub_B0D8A4(&OptionManager_TypeInfo, method);
    byte_4217166 = 1;
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
        v7 = 0;
        while ( v7 < max_length )
        {
          SpoilerSetting = userSvtLeaderHash->m_Items[v7];
          if ( !SpoilerSetting )
            goto LABEL_24;
          ServantLeaderInfo__ChangeLimitCountBySpoilerProtection(SpoilerSetting, 0LL);
          max_length = userSvtLeaderHash->max_length;
          if ( (int)++v7 >= max_length )
            goto LABEL_15;
        }
LABEL_23:
        v12 = sub_B0D9A8(SpoilerSetting);
        sub_B0D948(v12, 0LL);
      }
LABEL_15:
      v8 = this->fields.selectFriendEntity;
      if ( !v8 || (eventUserSvtLeaderHash = v8->fields.eventUserSvtLeaderHash) == 0LL )
LABEL_24:
        sub_B0D97C(SpoilerSetting);
      v10 = eventUserSvtLeaderHash->max_length;
      if ( v10 >= 1 )
      {
        v11 = 0;
        while ( v11 < v10 )
        {
          SpoilerSetting = eventUserSvtLeaderHash->m_Items[v11];
          if ( !SpoilerSetting )
            goto LABEL_24;
          ServantLeaderInfo__ChangeLimitCountBySpoilerProtection(SpoilerSetting, 0LL);
          v10 = eventUserSvtLeaderHash->max_length;
          if ( (int)++v11 >= v10 )
            return;
        }
        goto LABEL_23;
      }
    }
  }
}


void __fastcall FriendRootComponent__CheckHelpUI(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_String_o **v5; // x8
  System_String_o *v6; // x20
  UILabel_o *helpLabel; // x19
  System_String_o *v8; // x0

  if ( (byte_4217138 & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_6485/*"FRIEND_LOCK_HELP_TEXT"*/, v3);
    sub_B0D8A4(&StringLiteral_6483/*"FRIEND_HELP_TEXT"*/, v4);
    byte_4217138 = 1;
  }
  v5 = (System_String_o **)&StringLiteral_6483/*"FRIEND_HELP_TEXT"*/;
  if ( this->fields.isActiveModeKindButtons && this->fields.currentModeKind == 1 )
    v5 = (System_String_o **)&StringLiteral_6485/*"FRIEND_LOCK_HELP_TEXT"*/;
  v6 = *v5;
  helpLabel = this->fields.helpLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v8 = LocalizationManager__Get(v6, 0LL);
  if ( !helpLabel )
    sub_B0D97C(v8);
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
  TblFriendMaster_o *MasterData_WarQuestSelectionMaster; // x20
  UserFollowMaster_o *v11; // x21
  int v12; // w21
  UICommonButton_o *modeUserDetailButton; // x20
  bool enabled; // w0
  UICommonButton_o *modeEditLockButton; // x20
  bool v16; // w0
  __int64 v17; // x8
  int32_t currentModeKind; // w8
  __int64 *v19; // x9
  System_String_o *v20; // x20
  System_String_o **v21; // x8

  if ( (byte_421716D & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_TblFriendMaster___, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserFollowMaster___, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_B0D8A4(&StringLiteral_17178/*"button_alllock_unreg"*/, v5);
    sub_B0D8A4(&StringLiteral_17184/*"button_infocheck_unreg"*/, v6);
    sub_B0D8A4(&StringLiteral_17183/*"button_infocheck_reg"*/, v7);
    sub_B0D8A4(&StringLiteral_17177/*"button_alllock_reg"*/, v8);
    byte_421716D = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_WarQuestSelectionMaster = (TblFriendMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              Instance,
                                                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_TblFriendMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserFollowMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_30;
  v11 = (UserFollowMaster_o *)Instance;
  Instance = (DataManager_o *)TblFriendMaster__GetFriendSum(MasterData_WarQuestSelectionMaster, 0LL);
  if ( (int)Instance > 0 )
    goto LABEL_9;
  if ( !v11 )
    goto LABEL_30;
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
  v16 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.modeEditLockButton, 0LL);
  UICommonButton__SetColliderEnable(modeEditLockButton, v16, 1, 0LL);
  if ( !v12 )
    goto LABEL_21;
  v17 = 224LL;
  if ( this->fields.currentModeKind )
    v17 = 216LL;
  Instance = *(DataManager_o **)((char *)&this->klass + v17);
  if ( !Instance )
LABEL_30:
    sub_B0D97C(Instance);
  UICommonButton__SetButtonEnable((UICommonButton_o *)Instance, 0, 1, 0LL);
LABEL_21:
  currentModeKind = this->fields.currentModeKind;
  Instance = (DataManager_o *)this->fields.modeUserDetailSprite;
  v19 = &StringLiteral_17177/*"button_alllock_reg"*/;
  if ( currentModeKind != 1 )
    v19 = &StringLiteral_17178/*"button_alllock_unreg"*/;
  if ( !Instance )
    goto LABEL_30;
  v20 = (System_String_o *)*v19;
  v21 = (System_String_o **)(currentModeKind ? &StringLiteral_17184/*"button_infocheck_unreg"*/ : &StringLiteral_17183/*"button_infocheck_reg"*/);
  UISprite__set_spriteName((UISprite_o *)Instance, *v21, 0LL);
  Instance = (DataManager_o *)this->fields.modeEditLockSprite;
  if ( !Instance )
    goto LABEL_30;
  UISprite__set_spriteName((UISprite_o *)Instance, v20, 0LL);
}


bool __fastcall FriendRootComponent__CheckTabKind(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  FriendRootComponent_c *v5; // x0
  int32_t tabKindSave; // w8
  PlayMakerFSM_o *myFSM; // x0
  __int64 *v8; // x8

  if ( (byte_421713C & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_8741/*"MENU_OPERATION_FRIEND"*/, method);
    sub_B0D8A4(&StringLiteral_8743/*"MENU_OPERATION_OFFERED"*/, v3);
    sub_B0D8A4(&StringLiteral_8744/*"MENU_OPERATION_SEARCH"*/, v4);
    byte_421713C = 1;
  }
  if ( !byte_4217235 )
  {
    sub_B0D8A4(&FriendRootComponent_TypeInfo, method);
    byte_4217235 = 1;
  }
  v5 = FriendRootComponent_TypeInfo;
  if ( (BYTE3(FriendRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FriendRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendRootComponent_TypeInfo);
    v5 = FriendRootComponent_TypeInfo;
  }
  tabKindSave = v5->static_fields->tabKindSave;
  switch ( tabKindSave )
  {
    case 2:
      myFSM = this->fields.myFSM;
      if ( myFSM )
      {
        v8 = &StringLiteral_8744/*"MENU_OPERATION_SEARCH"*/;
        goto LABEL_17;
      }
      goto LABEL_19;
    case 1:
      myFSM = this->fields.myFSM;
      if ( myFSM )
      {
        v8 = &StringLiteral_8743/*"MENU_OPERATION_OFFERED"*/;
        goto LABEL_17;
      }
LABEL_19:
      sub_B0D97C(myFSM);
    case 0:
      myFSM = this->fields.myFSM;
      if ( myFSM )
      {
        v8 = &StringLiteral_8741/*"MENU_OPERATION_FRIEND"*/;
LABEL_17:
        PlayMakerFSM__SendEvent(myFSM, (System_String_o *)*v8, 0LL);
        return 1;
      }
      goto LABEL_19;
  }
  return 1;
}


void __fastcall FriendRootComponent__EndCloseShowServant(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v6; // x21
  __int64 v7; // x0

  if ( (byte_421714D & 1) == 0 )
  {
    sub_B0D8A4(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_B0D8A4(&Method_FriendRootComponent_OnSelectFriendItem__, v4);
    byte_421714D = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v6 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B0D974(
                                                              FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                              method,
                                                              v2);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
    0LL);
  if ( !operationItemListViewManager )
    sub_B0D97C(v7);
  FriendOperationItemListViewManager__SetMode(operationItemListViewManager, 2, v6, 0LL);
}


void __fastcall FriendRootComponent__EndCloseShowServantEquip(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v6; // x21
  __int64 v7; // x0

  if ( (byte_4217177 & 1) == 0 )
  {
    sub_B0D8A4(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_B0D8A4(&Method_FriendRootComponent_OnSelectFriendItem__, v4);
    byte_4217177 = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v6 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B0D974(
                                                              FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                              method,
                                                              v2);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
    0LL);
  if ( !operationItemListViewManager )
    sub_B0D97C(v7);
  FriendOperationItemListViewManager__SetMode(operationItemListViewManager, 2, v6, 0LL);
}


void __fastcall FriendRootComponent__EndFriendRequest(
        FriendRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v4; // x1
  FriendRootComponent_c *v5; // x0
  DataManager_o *Instance; // x0
  TblFriendMaster_o *v7; // x20
  const MethodInfo *v8; // x2
  int32_t v9; // w1
  OtherUserGameEntity_array *List; // x21
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x1

  if ( (byte_4217139 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_TblFriendMaster___, result);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4217139 = 1;
  }
  if ( !byte_4217235 )
  {
    sub_B0D8A4(&FriendRootComponent_TypeInfo, result);
    byte_4217235 = 1;
  }
  v5 = FriendRootComponent_TypeInfo;
  if ( (BYTE3(FriendRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FriendRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendRootComponent_TypeInfo);
    v5 = FriendRootComponent_TypeInfo;
  }
  if ( v5->static_fields->tabKindSave == 3 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_TblFriendMaster___);
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
    sub_B0D97C(Instance);
  }
LABEL_20:
  FriendRootComponent__InitModeKindButtons(this, (const MethodInfo *)result);
  FriendRootComponent__RefreshTab(this, v11);
  FriendRootComponent__RefreshInfo(this, v12);
  MainMenuBar__setMenuActive(1, 0LL, 0LL);
  SceneRootComponent__beginStartUp_16655688((SceneRootComponent_o *)this, 0LL);
}


void __fastcall FriendRootComponent__EndFriendRequest2(
        FriendRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v4; // x1
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  FriendOperationItemListViewManager_o *v7; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  FriendOperationItemListViewManager_CallbackFunc_o *v10; // x21

  if ( (byte_421718D & 1) == 0 )
  {
    sub_B0D8A4(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, result);
    sub_B0D8A4(&Method_FriendRootComponent_OnSelectFriendItem__, v4);
    byte_421718D = 1;
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
        v10 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B0D974(
                                                                     FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                                     v8,
                                                                     v9),
        FriendOperationItemListViewManager_CallbackFunc___ctor(
          v10,
          (Il2CppObject *)this,
          (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
          0LL),
        !v7) )
  {
    sub_B0D97C(operationItemListViewManager);
  }
  FriendOperationItemListViewManager__SetMode(v7, 2, v10, 0LL);
  this->fields.state = 4;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendRootComponent__EndMaxFollowWarningOfferConfirm(
        FriendRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_4217185 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_8738/*"MENU_CANCEL"*/, isDecide);
    byte_4217185 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_B0D97C(0LL);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_8738/*"MENU_CANCEL"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendRootComponent__EndMaxFriendWarning(
        FriendRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v4; // x1
  FriendWarningDialog_o *friendWarningDialog; // x0
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  FriendOperationItemListViewManager_CallbackFunc_o *v9; // x21

  if ( (byte_4217179 & 1) == 0 )
  {
    sub_B0D8A4(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, isDecide);
    sub_B0D8A4(&Method_FriendRootComponent_OnSelectFriendItem__, v4);
    byte_4217179 = 1;
  }
  friendWarningDialog = this->fields.friendWarningDialog;
  if ( !friendWarningDialog
    || (FriendWarningDialog__Close_29194836(friendWarningDialog, 0LL, method),
        operationItemListViewManager = this->fields.operationItemListViewManager,
        v9 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B0D974(
                                                                    FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                                    v7,
                                                                    v8),
        FriendOperationItemListViewManager_CallbackFunc___ctor(
          v9,
          (Il2CppObject *)this,
          (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
          0LL),
        !operationItemListViewManager) )
  {
    sub_B0D97C(friendWarningDialog);
  }
  FriendOperationItemListViewManager__SetMode(operationItemListViewManager, 2, v9, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendRootComponent__EndMaxFriendWarningOfferConfirm(
        FriendRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_421717A & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_8738/*"MENU_CANCEL"*/, isDecide);
    byte_421717A = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_B0D97C(0LL);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_8738/*"MENU_CANCEL"*/, 0LL);
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

  if ( (byte_4217167 & 1) == 0 )
  {
    sub_B0D8A4(&FriendSearchMenu_CallbackFunc_TypeInfo, isDecide);
    sub_B0D8A4(&Method_FriendRootComponent_OnSelectSearchFriend__, v4);
    sub_B0D8A4(&StringLiteral_11104/*"REQUEST_NG"*/, v5);
    byte_4217167 = 1;
  }
  friendWarningDialog = this->fields.friendWarningDialog;
  if ( !friendWarningDialog
    || (FriendWarningDialog__Close_29194836(friendWarningDialog, 0LL, method),
        this->fields.state = 23,
        friendSearchMenu = this->fields.friendSearchMenu,
        v10 = (FriendSearchMenu_CallbackFunc_o *)sub_B0D974(FriendSearchMenu_CallbackFunc_TypeInfo, v8, v9),
        FriendSearchMenu_CallbackFunc___ctor(
          v10,
          (Il2CppObject *)this,
          Method_FriendRootComponent_OnSelectSearchFriend__,
          0LL),
        !friendSearchMenu)
    || (FriendSearchMenu__Open(friendSearchMenu, v10, 0, v11),
        (friendWarningDialog = (FriendWarningDialog_o *)this->fields.myFSM) == 0LL) )
  {
    sub_B0D97C(friendWarningDialog);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)friendWarningDialog, (System_String_o *)StringLiteral_11104/*"REQUEST_NG"*/, 0LL);
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
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *myFSM; // x0
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *v15; // x20
  System_String_o *v16; // x20
  __int64 *v17; // x8
  CommonUI_o *Instance; // x21
  __int64 v19; // x1
  __int64 v20; // x2
  NotificationDialog_ClickDelegate_o *v21; // x22

  if ( (byte_4217188 & 1) == 0 )
  {
    sub_B0D8A4(&NotificationDialog_ClickDelegate_TypeInfo, result);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v6);
    sub_B0D8A4(&Method_FriendRootComponent_OnEndRequestDialog__, v7);
    sub_B0D8A4(&JsonManager_TypeInfo, v8);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_B0D8A4(&StringLiteral_11106/*"REQUEST_OK"*/, v10);
    sub_B0D8A4(&StringLiteral_11104/*"REQUEST_NG"*/, v11);
    sub_B0D8A4(&StringLiteral_21137/*"ng"*/, v12);
    sub_B0D8A4(&StringLiteral_20536/*"message"*/, v13);
    byte_4217188 = 1;
  }
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_21137/*"ng"*/, 0LL) )
  {
    myFSM = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.myFSM;
    if ( myFSM )
    {
      v17 = &StringLiteral_11104/*"REQUEST_NG"*/;
      goto LABEL_15;
    }
LABEL_18:
    sub_B0D97C(myFSM);
  }
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  myFSM = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)JsonManager__getDictionary(
                                                                                          result,
                                                                                          0LL);
  if ( !myFSM )
    goto LABEL_18;
  v15 = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)myFSM;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          myFSM,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_20536/*"message"*/,
          (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_11;
  myFSM = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                          v15,
                                                                                          (System_Type_o *)StringLiteral_20536/*"message"*/,
                                                                                          (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !myFSM )
    goto LABEL_18;
  v16 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *, Il2CppMethodPointer))myFSM->klass->vtable._3_ToString.method)(
                             myFSM,
                             myFSM->klass->vtable._4_unknown.methodPtr);
  if ( System_String__IsNullOrEmpty(v16, 0LL) )
  {
LABEL_11:
    myFSM = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.myFSM;
    if ( myFSM )
    {
      v17 = &StringLiteral_11106/*"REQUEST_OK"*/;
LABEL_15:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myFSM, (System_String_o *)*v17, 0LL);
      return;
    }
    goto LABEL_18;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v21 = (NotificationDialog_ClickDelegate_o *)sub_B0D974(NotificationDialog_ClickDelegate_TypeInfo, v19, v20);
  NotificationDialog_ClickDelegate___ctor(
    v21,
    (Il2CppObject *)this,
    Method_FriendRootComponent_OnEndRequestDialog__,
    0LL);
  if ( !Instance )
    goto LABEL_18;
  CommonUI__OpenNotificationDialog_17019096(
    Instance,
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
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *myFSM; // x0
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *v15; // x20
  System_String_o *v16; // x20
  __int64 *v17; // x8
  CommonUI_o *Instance; // x21
  __int64 v19; // x1
  __int64 v20; // x2
  NotificationDialog_ClickDelegate_o *v21; // x22

  if ( (byte_4217191 & 1) == 0 )
  {
    sub_B0D8A4(&NotificationDialog_ClickDelegate_TypeInfo, result);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v6);
    sub_B0D8A4(&Method_FriendRootComponent_OnEndRequestDialog__, v7);
    sub_B0D8A4(&JsonManager_TypeInfo, v8);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_B0D8A4(&StringLiteral_11106/*"REQUEST_OK"*/, v10);
    sub_B0D8A4(&StringLiteral_11104/*"REQUEST_NG"*/, v11);
    sub_B0D8A4(&StringLiteral_21137/*"ng"*/, v12);
    sub_B0D8A4(&StringLiteral_20536/*"message"*/, v13);
    byte_4217191 = 1;
  }
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_21137/*"ng"*/, 0LL) )
  {
    myFSM = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.myFSM;
    if ( myFSM )
    {
      v17 = &StringLiteral_11104/*"REQUEST_NG"*/;
      goto LABEL_15;
    }
LABEL_18:
    sub_B0D97C(myFSM);
  }
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  myFSM = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)JsonManager__getDictionary(
                                                                                          result,
                                                                                          0LL);
  if ( !myFSM )
    goto LABEL_18;
  v15 = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)myFSM;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          myFSM,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_20536/*"message"*/,
          (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_11;
  myFSM = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                          v15,
                                                                                          (System_Type_o *)StringLiteral_20536/*"message"*/,
                                                                                          (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !myFSM )
    goto LABEL_18;
  v16 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *, Il2CppMethodPointer))myFSM->klass->vtable._3_ToString.method)(
                             myFSM,
                             myFSM->klass->vtable._4_unknown.methodPtr);
  if ( System_String__IsNullOrEmpty(v16, 0LL) )
  {
LABEL_11:
    myFSM = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.myFSM;
    if ( myFSM )
    {
      v17 = &StringLiteral_11106/*"REQUEST_OK"*/;
LABEL_15:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myFSM, (System_String_o *)*v17, 0LL);
      return;
    }
    goto LABEL_18;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v21 = (NotificationDialog_ClickDelegate_o *)sub_B0D974(NotificationDialog_ClickDelegate_TypeInfo, v19, v20);
  NotificationDialog_ClickDelegate___ctor(
    v21,
    (Il2CppObject *)this,
    Method_FriendRootComponent_OnEndRequestDialog__,
    0LL);
  if ( !Instance )
    goto LABEL_18;
  CommonUI__OpenNotificationDialog_17019096(
    Instance,
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
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *myFSM; // x0
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *v15; // x20
  System_String_o *v16; // x20
  __int64 *v17; // x8
  CommonUI_o *Instance; // x21
  __int64 v19; // x1
  __int64 v20; // x2
  NotificationDialog_ClickDelegate_o *v21; // x22

  if ( (byte_4217162 & 1) == 0 )
  {
    sub_B0D8A4(&NotificationDialog_ClickDelegate_TypeInfo, result);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v6);
    sub_B0D8A4(&Method_FriendRootComponent_OnEndRequestDialog__, v7);
    sub_B0D8A4(&JsonManager_TypeInfo, v8);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_B0D8A4(&StringLiteral_11106/*"REQUEST_OK"*/, v10);
    sub_B0D8A4(&StringLiteral_11104/*"REQUEST_NG"*/, v11);
    sub_B0D8A4(&StringLiteral_21137/*"ng"*/, v12);
    sub_B0D8A4(&StringLiteral_20536/*"message"*/, v13);
    byte_4217162 = 1;
  }
  MainMenuBar__UpdateNoticeNumber(0LL);
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_21137/*"ng"*/, 0LL) )
  {
    myFSM = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.myFSM;
    if ( myFSM )
    {
      v17 = &StringLiteral_11104/*"REQUEST_NG"*/;
      goto LABEL_15;
    }
LABEL_18:
    sub_B0D97C(myFSM);
  }
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  myFSM = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)JsonManager__getDictionary(
                                                                                          result,
                                                                                          0LL);
  if ( !myFSM )
    goto LABEL_18;
  v15 = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)myFSM;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          myFSM,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_20536/*"message"*/,
          (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_11;
  myFSM = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                          v15,
                                                                                          (System_Type_o *)StringLiteral_20536/*"message"*/,
                                                                                          (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !myFSM )
    goto LABEL_18;
  v16 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *, Il2CppMethodPointer))myFSM->klass->vtable._3_ToString.method)(
                             myFSM,
                             myFSM->klass->vtable._4_unknown.methodPtr);
  if ( System_String__IsNullOrEmpty(v16, 0LL) )
  {
LABEL_11:
    myFSM = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.myFSM;
    if ( myFSM )
    {
      v17 = &StringLiteral_11106/*"REQUEST_OK"*/;
LABEL_15:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myFSM, (System_String_o *)*v17, 0LL);
      return;
    }
    goto LABEL_18;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v21 = (NotificationDialog_ClickDelegate_o *)sub_B0D974(NotificationDialog_ClickDelegate_TypeInfo, v19, v20);
  NotificationDialog_ClickDelegate___ctor(
    v21,
    (Il2CppObject *)this,
    Method_FriendRootComponent_OnEndRequestDialog__,
    0LL);
  if ( !Instance )
    goto LABEL_18;
  CommonUI__OpenNotificationDialog_17019096(
    Instance,
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
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  DataManager_o *Instance; // x0
  struct DataMasterBase_array *datalist; // x8
  struct OtherUserGameEntity_o *lookup; // x1
  const MethodInfo *v18; // x1
  __int64 *v19; // x8
  const MethodInfo *v20; // x1
  __int64 v21; // x0

  if ( (byte_4217165 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_OtherUserGameMaster___, result);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_B0D8A4(&StringLiteral_11106/*"REQUEST_OK"*/, v6);
    sub_B0D8A4(&StringLiteral_21287/*"ok"*/, v7);
    sub_B0D8A4(&StringLiteral_11104/*"REQUEST_NG"*/, v8);
    byte_4217165 = 1;
  }
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_21287/*"ok"*/, 0LL) )
    goto LABEL_11;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_OtherUserGameMaster___);
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
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.selectFriendEntity, 0LL, v9, v10, v11, v12, v13, v14);
    FriendRootComponent__StartSearchInput(this, v20);
    Instance = (DataManager_o *)this->fields.myFSM;
    if ( Instance )
    {
      v19 = &StringLiteral_11104/*"REQUEST_NG"*/;
      goto LABEL_13;
    }
LABEL_14:
    sub_B0D97C(Instance);
  }
  if ( !(_DWORD)datalist )
  {
    v21 = sub_B0D9A8(Instance);
    sub_B0D948(v21, 0LL);
  }
  lookup = (struct OtherUserGameEntity_o *)Instance->fields.lookup;
  this->fields.selectFriendEntity = lookup;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.selectFriendEntity,
    (System_Int32_array **)lookup,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  FriendRootComponent__ChangeLimitCountBySpoilerProtection(this, v18);
  Instance = (DataManager_o *)this->fields.myFSM;
  if ( !Instance )
    goto LABEL_14;
  v19 = &StringLiteral_11106/*"REQUEST_OK"*/;
LABEL_13:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v19, 0LL);
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
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v9; // x21
  __int64 v10; // x0
  CommonUI_o *Instance; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  System_Action_o *v14; // x21

  if ( (byte_421714C & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, isDecide);
    sub_B0D8A4(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, v4);
    sub_B0D8A4(&Method_FriendRootComponent_EndCloseShowServant__, v5);
    sub_B0D8A4(&Method_FriendRootComponent_OnSelectFriendItem__, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_421714C = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v9 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B0D974(
                                                              FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                              isDecide,
                                                              method);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v9,
    (Il2CppObject *)this,
    (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
    0LL);
  if ( !operationItemListViewManager
    || (FriendOperationItemListViewManager__SetMode(operationItemListViewManager, 5, v9, 0LL),
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v14 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v12, v13),
        System_Action___ctor(v14, (Il2CppObject *)this, Method_FriendRootComponent_EndCloseShowServant__, 0LL),
        !Instance) )
  {
    sub_B0D97C(v10);
  }
  CommonUI__CloseServantStatusDialog(Instance, v14, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendRootComponent__EndShowServantEquip(
        FriendRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  CommonUI_o *Instance; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  System_Action_o *v9; // x21
  __int64 v10; // x0

  if ( (byte_4217176 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, isDecide);
    sub_B0D8A4(&Method_FriendRootComponent_EndCloseShowServantEquip__, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4217176 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v7, v8);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_FriendRootComponent_EndCloseShowServantEquip__, 0LL);
  if ( !Instance )
    sub_B0D97C(v10);
  CommonUI__CloseServantEquipStatusDialog(Instance, v9, 0LL);
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
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  __int64 v29; // x1
  __int64 v30; // x2
  System_Collections_Generic_List_long__o *v31; // x21
  __int64 v32; // x1
  __int64 v33; // x2
  System_Collections_Generic_List_long__o *v34; // x22
  __int64 v35; // x1
  __int64 v36; // x2
  System_Collections_Generic_List_long__o *v37; // x23
  __int64 v38; // x1
  __int64 v39; // x2
  System_Collections_Generic_List_long__o *v40; // x24
  int32_t ItemSum; // w0
  __int64 v42; // x1
  __int64 v43; // x2
  int32_t v44; // w25
  int dragParentObject; // w8
  ListViewManager_o *v46; // x26
  struct System_Collections_Generic_List_UIDragDropListViewSurface__o *dropList; // x8
  int64_t items; // x1
  const MethodInfo_2FB5EB0 *v49; // x2
  System_Collections_Generic_List_long__o *v50; // x0
  struct System_Collections_Generic_List_UIDragDropListViewSurface__o *v51; // x8
  NetworkManager_ResultCallbackFunc_o *v52; // x19
  FirendLockSyncRequest_o *v53; // x19
  System_Int64_array *v54; // x20
  System_Int64_array *v55; // x21
  System_Int64_array *v56; // x22

  if ( (byte_4217173 & 1) == 0 )
  {
    sub_B0D8A4(&Method_ActionExtensions_Call_string___, onFinishedRequest);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__Add__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__ToArray__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long___ctor__, v7);
    sub_B0D8A4(&System_Collections_Generic_List_long__TypeInfo, v8);
    sub_B0D8A4(&Method_NetworkManager_getRequest_FirendLockSyncRequest___, v9);
    sub_B0D8A4(&NetworkManager_TypeInfo, v10);
    sub_B0D8A4(&NetworkManager_ResultCallbackFunc_TypeInfo, v11);
    sub_B0D8A4(&Method_FriendRootComponent___c__DisplayClass109_0__FriendLockRequst_b__0__, v12);
    sub_B0D8A4(&FriendRootComponent___c__DisplayClass109_0_TypeInfo, v13);
    sub_B0D8A4(&StringLiteral_21287/*"ok"*/, v14);
    byte_4217173 = 1;
  }
  v15 = sub_B0D974(FriendRootComponent___c__DisplayClass109_0_TypeInfo, onFinishedRequest, method);
  FriendRootComponent___c__DisplayClass109_0___ctor((FriendRootComponent___c__DisplayClass109_0_o *)v15, 0LL);
  if ( !v15 )
    goto LABEL_37;
  *(_QWORD *)(v15 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v15 + 16), (System_Int32_array **)this, v17, v18, v19, v20, v21, v22);
  *(_QWORD *)(v15 + 32) = onFinishedRequest;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v15 + 32),
    (System_Int32_array **)onFinishedRequest,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    goto LABEL_37;
  if ( FriendOperationItemListViewManager__get_IsExistSwapLockUser(
         (FriendOperationItemListViewManager_o *)operationItemListViewManager,
         0LL) )
  {
    v31 = (System_Collections_Generic_List_long__o *)sub_B0D974(
                                                       System_Collections_Generic_List_long__TypeInfo,
                                                       v29,
                                                       v30);
    System_Collections_Generic_List_long____ctor(
      v31,
      (const MethodInfo_2FB5154 *)Method_System_Collections_Generic_List_long___ctor__);
    v34 = (System_Collections_Generic_List_long__o *)sub_B0D974(
                                                       System_Collections_Generic_List_long__TypeInfo,
                                                       v32,
                                                       v33);
    System_Collections_Generic_List_long____ctor(
      v34,
      (const MethodInfo_2FB5154 *)Method_System_Collections_Generic_List_long___ctor__);
    v37 = (System_Collections_Generic_List_long__o *)sub_B0D974(
                                                       System_Collections_Generic_List_long__TypeInfo,
                                                       v35,
                                                       v36);
    System_Collections_Generic_List_long____ctor(
      v37,
      (const MethodInfo_2FB5154 *)Method_System_Collections_Generic_List_long___ctor__);
    v40 = (System_Collections_Generic_List_long__o *)sub_B0D974(
                                                       System_Collections_Generic_List_long__TypeInfo,
                                                       v38,
                                                       v39);
    System_Collections_Generic_List_long____ctor(
      v40,
      (const MethodInfo_2FB5154 *)Method_System_Collections_Generic_List_long___ctor__);
    operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
    if ( operationItemListViewManager )
    {
      ItemSum = ListViewManager__get_ItemSum(operationItemListViewManager, 0LL);
      *(_DWORD *)(v15 + 24) = ItemSum;
      if ( ItemSum >= 1 )
      {
        v44 = 0;
        while ( 1 )
        {
          operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
          if ( !operationItemListViewManager )
            goto LABEL_37;
          operationItemListViewManager = (ListViewManager_o *)FriendOperationItemListViewManager__GetItem(
                                                                (FriendOperationItemListViewManager_o *)operationItemListViewManager,
                                                                v44,
                                                                0LL);
          if ( !operationItemListViewManager )
            goto LABEL_37;
          dragParentObject = (int)operationItemListViewManager->fields.dragParentObject;
          v46 = operationItemListViewManager;
          if ( dragParentObject == 9 )
            break;
          if ( dragParentObject == 3 )
          {
            operationItemListViewManager = (ListViewManager_o *)FriendOperationItemListViewItem__get_IsLockDisp(
                                                                  (FriendOperationItemListViewItem_o *)operationItemListViewManager,
                                                                  0LL);
            dropList = v46->fields.dropList;
            if ( !dropList )
              goto LABEL_37;
            items = (int64_t)dropList->fields._items;
            if ( ((unsigned __int8)operationItemListViewManager & 1) != 0 )
            {
              if ( !v31 )
                goto LABEL_37;
              v49 = (const MethodInfo_2FB5EB0 *)Method_System_Collections_Generic_List_long__Add__;
              v50 = v31;
            }
            else
            {
              if ( !v34 )
                goto LABEL_37;
              v49 = (const MethodInfo_2FB5EB0 *)Method_System_Collections_Generic_List_long__Add__;
              v50 = v34;
            }
LABEL_25:
            System_Collections_Generic_List_long___Add(v50, items, v49);
          }
          if ( ++v44 >= *(_DWORD *)(v15 + 24) )
            goto LABEL_27;
        }
        operationItemListViewManager = (ListViewManager_o *)FriendOperationItemListViewItem__get_IsLockDisp(
                                                              (FriendOperationItemListViewItem_o *)operationItemListViewManager,
                                                              0LL);
        v51 = v46->fields.dropList;
        if ( !v51 )
          goto LABEL_37;
        items = (int64_t)v51->fields._items;
        if ( ((unsigned __int8)operationItemListViewManager & 1) != 0 )
        {
          if ( !v37 )
            goto LABEL_37;
          v49 = (const MethodInfo_2FB5EB0 *)Method_System_Collections_Generic_List_long__Add__;
          v50 = v37;
        }
        else
        {
          if ( !v40 )
            goto LABEL_37;
          v49 = (const MethodInfo_2FB5EB0 *)Method_System_Collections_Generic_List_long__Add__;
          v50 = v40;
        }
        goto LABEL_25;
      }
LABEL_27:
      v52 = (NetworkManager_ResultCallbackFunc_o *)sub_B0D974(NetworkManager_ResultCallbackFunc_TypeInfo, v42, v43);
      NetworkManager_ResultCallbackFunc___ctor(
        v52,
        (Il2CppObject *)v15,
        Method_FriendRootComponent___c__DisplayClass109_0__FriendLockRequst_b__0__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      operationItemListViewManager = (ListViewManager_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                            v52,
                                                            (const MethodInfo_2049D98 *)Method_NetworkManager_getRequest_FirendLockSyncRequest___);
      if ( v31 )
      {
        v53 = (FirendLockSyncRequest_o *)operationItemListViewManager;
        operationItemListViewManager = (ListViewManager_o *)System_Collections_Generic_List_long___ToArray(
                                                              v31,
                                                              (const MethodInfo_2FB7FBC *)Method_System_Collections_Generic_List_long__ToArray__);
        if ( v34 )
        {
          v54 = (System_Int64_array *)operationItemListViewManager;
          operationItemListViewManager = (ListViewManager_o *)System_Collections_Generic_List_long___ToArray(
                                                                v34,
                                                                (const MethodInfo_2FB7FBC *)Method_System_Collections_Generic_List_long__ToArray__);
          if ( v37 )
          {
            v55 = (System_Int64_array *)operationItemListViewManager;
            operationItemListViewManager = (ListViewManager_o *)System_Collections_Generic_List_long___ToArray(
                                                                  v37,
                                                                  (const MethodInfo_2FB7FBC *)Method_System_Collections_Generic_List_long__ToArray__);
            if ( v40 )
            {
              v56 = (System_Int64_array *)operationItemListViewManager;
              operationItemListViewManager = (ListViewManager_o *)System_Collections_Generic_List_long___ToArray(
                                                                    v40,
                                                                    (const MethodInfo_2FB7FBC *)Method_System_Collections_Generic_List_long__ToArray__);
              if ( v53 )
              {
                FirendLockSyncRequest__beginRequest(
                  v53,
                  v54,
                  v55,
                  v56,
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
    sub_B0D97C(operationItemListViewManager);
  }
  ActionExtensions__Call_BlankEarth_QAARotateEarthResponse_(
    *(System_Action_T__o **)(v15 + 32),
    (BlankEarth_QAARotateEarthResponse_o *)StringLiteral_21287/*"ok"*/,
    (const MethodInfo_2D96698 *)Method_ActionExtensions_Call_string___);
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
  if ( (byte_421716E & 1) == 0 )
  {
    this = (FriendRootComponent_o *)sub_B0D8A4(&FSUtility_TypeInfo, method);
    byte_421716E = 1;
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
    sub_B0D97C(this);
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
    sub_B0D97C(modeButtonParent);
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
  if ( !byte_4217235 )
  {
    sub_B0D8A4(&FriendRootComponent_TypeInfo, v4);
    byte_4217235 = 1;
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
    sub_B0D97C(modeButtonParent);
  }
  *(UnityEngine_Vector3_o *)&v7 = FriendRootComponent__GetHidePositionModeKindButtons(this, v4);
  if ( !transform )
    goto LABEL_11;
LABEL_9:
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v7, 0LL);
}


void __fastcall FriendRootComponent__OnClickBack(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  int32_t state; // w8
  __int64 v6; // x1
  __int64 v7; // x2
  FriendRootComponent_messageRequestCallback_o *v8; // x20
  const MethodInfo *v9; // x2

  if ( (byte_4217169 & 1) == 0 )
  {
    sub_B0D8A4(&Method_FriendRootComponent__OnClickBack_b__96_0__, method);
    sub_B0D8A4(&SoundManager_TypeInfo, v3);
    sub_B0D8A4(&FriendRootComponent_messageRequestCallback_TypeInfo, v4);
    byte_4217169 = 1;
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
  v8 = (FriendRootComponent_messageRequestCallback_o *)sub_B0D974(
                                                         FriendRootComponent_messageRequestCallback_TypeInfo,
                                                         v6,
                                                         v7);
  FriendRootComponent_messageRequestCallback___ctor(
    v8,
    (Il2CppObject *)this,
    Method_FriendRootComponent__OnClickBack_b__96_0__,
    0LL);
  FriendRootComponent__messageDispChangeRequest(this, v8, v9);
}


void __fastcall FriendRootComponent__OnClickHelp(FriendRootComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4217192 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_4217192 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  EventTutorialMaster__ShowTutorialWithoutCheck(-1, 49, 0LL, 0LL);
}


void __fastcall FriendRootComponent__OnClickModeEditLock(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_421716C & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_421716C = 1;
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v6; // x20
  const MethodInfo *v7; // x2

  if ( (byte_421716B & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_string___ctor__, method);
    sub_B0D8A4(&System_Action_string__TypeInfo, v4);
    sub_B0D8A4(&Method_FriendRootComponent__OnClickModeUserDetail_b__98_0__, v5);
    byte_421716B = 1;
  }
  if ( this->fields.currentModeKind )
  {
    v6 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                                System_Action_string__TypeInfo,
                                                                                method,
                                                                                v2);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v6,
      (Il2CppObject *)this,
      Method_FriendRootComponent__OnClickModeUserDetail_b__98_0__,
      (const MethodInfo_246EA3C *)Method_System_Action_string___ctor__);
    FriendRootComponent__FriendLockRequst(this, (System_Action_string__o *)v6, v7);
  }
}


void __fastcall FriendRootComponent__OnClickTabFriend(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v6; // x20
  const MethodInfo *v7; // x2

  if ( (byte_421716F & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_string___ctor__, method);
    sub_B0D8A4(&System_Action_string__TypeInfo, v4);
    sub_B0D8A4(&Method_FriendRootComponent__OnClickTabFriend_b__105_0__, v5);
    byte_421716F = 1;
  }
  v6 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                              System_Action_string__TypeInfo,
                                                                              method,
                                                                              v2);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v6,
    (Il2CppObject *)this,
    Method_FriendRootComponent__OnClickTabFriend_b__105_0__,
    (const MethodInfo_246EA3C *)Method_System_Action_string___ctor__);
  FriendRootComponent__FriendLockRequst(this, (System_Action_string__o *)v6, v7);
}


void __fastcall FriendRootComponent__OnClickTabOffered(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  FriendRootComponent_messageRequestCallback_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_4217170 & 1) == 0 )
  {
    sub_B0D8A4(&Method_FriendRootComponent__OnClickTabOffered_b__106_0__, method);
    sub_B0D8A4(&FriendRootComponent_messageRequestCallback_TypeInfo, v4);
    byte_4217170 = 1;
  }
  v5 = (FriendRootComponent_messageRequestCallback_o *)sub_B0D974(
                                                         FriendRootComponent_messageRequestCallback_TypeInfo,
                                                         method,
                                                         v2);
  FriendRootComponent_messageRequestCallback___ctor(
    v5,
    (Il2CppObject *)this,
    Method_FriendRootComponent__OnClickTabOffered_b__106_0__,
    0LL);
  FriendRootComponent__messageDispChangeRequest(this, v5, v6);
}


void __fastcall FriendRootComponent__OnClickTabSearch(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  FriendRootComponent_messageRequestCallback_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_4217171 & 1) == 0 )
  {
    sub_B0D8A4(&Method_FriendRootComponent__OnClickTabSearch_b__107_0__, method);
    sub_B0D8A4(&FriendRootComponent_messageRequestCallback_TypeInfo, v4);
    byte_4217171 = 1;
  }
  v5 = (FriendRootComponent_messageRequestCallback_o *)sub_B0D974(
                                                         FriendRootComponent_messageRequestCallback_TypeInfo,
                                                         method,
                                                         v2);
  FriendRootComponent_messageRequestCallback___ctor(
    v5,
    (Il2CppObject *)this,
    Method_FriendRootComponent__OnClickTabSearch_b__107_0__,
    0LL);
  FriendRootComponent__messageDispChangeRequest(this, v5, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendRootComponent__OnEndRequestDialog(
        FriendRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v4; // x1
  CommonUI_o *Instance; // x0

  if ( (byte_4217163 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    sub_B0D8A4(&StringLiteral_11106/*"REQUEST_OK"*/, v4);
    byte_4217163 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.myFSM) == 0LL) )
  {
    sub_B0D97C(Instance);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_11106/*"REQUEST_OK"*/, 0LL);
}


void __fastcall FriendRootComponent__OnMoveEnd(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  FriendRootComponent_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_GameObject_o *operationItemListViewManager; // x0
  int32_t v9; // w1
  const MethodInfo *v10; // x1
  FriendOperationItemListViewManager_o *v11; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  FriendOperationItemListViewManager_CallbackFunc_o *v14; // x21
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  FriendOperationItemListViewManager_o *v16; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v17; // x21
  FriendSearchMenu_o *friendSearchMenu; // x20
  FriendSearchMenu_CallbackFunc_o *v19; // x21
  const MethodInfo *v20; // x3
  FriendOperationItemListViewManager_o *v21; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v22; // x21
  const MethodInfo *v23; // x1
  const MethodInfo *v24; // x1
  __int64 v25; // x1
  __int64 v26; // x2
  struct ClassButtonControlComponent_o *v27; // x8
  FriendSearchMenu_o *v28; // x20
  FriendSearchMenu_CallbackFunc_o *v29; // x21
  const MethodInfo *v30; // x3

  v3 = this;
  if ( (byte_4217168 & 1) == 0 )
  {
    sub_B0D8A4(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_B0D8A4(&FriendSearchMenu_CallbackFunc_TypeInfo, v4);
    sub_B0D8A4(&Method_FriendRootComponent_OnSelectFriendItem__, v5);
    sub_B0D8A4(&Method_FriendRootComponent_OnSelectSearchFriend__, v6);
    this = (FriendRootComponent_o *)sub_B0D8A4(&StringLiteral_5492/*"END_ACTION"*/, v7);
    byte_4217168 = 1;
  }
  switch ( v3->fields.state )
  {
    case 2:
    case 3:
      v9 = 0;
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
      v16 = v3->fields.operationItemListViewManager;
      v17 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B0D974(
                                                                   FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                                   method,
                                                                   v2);
      FriendOperationItemListViewManager_CallbackFunc___ctor(
        v17,
        (Il2CppObject *)v3,
        (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
        0LL);
      if ( !v16 )
        goto LABEL_30;
      FriendOperationItemListViewManager__SetMode(v16, 2, v17, 0LL);
      goto LABEL_21;
    case 0xC:
    case 0xD:
      v3->fields.state = 14;
      v9 = 1;
LABEL_10:
      FriendRootComponent__set_tabKind(this, v9, v2);
      FriendRootComponent__RefreshTab(v3, v10);
      v11 = v3->fields.operationItemListViewManager;
      v14 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B0D974(
                                                                   FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                                   v12,
                                                                   v13);
      FriendOperationItemListViewManager_CallbackFunc___ctor(
        v14,
        (Il2CppObject *)v3,
        (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
        0LL);
      if ( !v11 )
        goto LABEL_30;
      FriendOperationItemListViewManager__SetMode(v11, 2, v14, 0LL);
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
      v21 = v3->fields.operationItemListViewManager;
      v22 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B0D974(
                                                                   FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                                   method,
                                                                   v2);
      FriendOperationItemListViewManager_CallbackFunc___ctor(
        v22,
        (Il2CppObject *)v3,
        (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
        0LL);
      if ( !v21 )
        goto LABEL_30;
      FriendOperationItemListViewManager__SetMode(v21, 2, v22, 0LL);
      break;
    case 0x14:
    case 0x15:
      v3->fields.state = 23;
      friendSearchMenu = v3->fields.friendSearchMenu;
      v19 = (FriendSearchMenu_CallbackFunc_o *)sub_B0D974(FriendSearchMenu_CallbackFunc_TypeInfo, method, v2);
      FriendSearchMenu_CallbackFunc___ctor(
        v19,
        (Il2CppObject *)v3,
        Method_FriendRootComponent_OnSelectSearchFriend__,
        0LL);
      if ( !friendSearchMenu )
        goto LABEL_30;
      FriendSearchMenu__Open(friendSearchMenu, v19, 0, v20);
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
      FriendRootComponent__RefreshTab(v3, v23);
      FriendRootComponent__RefreshInfo(v3, v24);
      v27 = v3->fields.classButtonControl;
      if ( !v27 )
        goto LABEL_30;
      v27->fields.updateEnable = 1;
      v28 = v3->fields.friendSearchMenu;
      v29 = (FriendSearchMenu_CallbackFunc_o *)sub_B0D974(FriendSearchMenu_CallbackFunc_TypeInfo, v25, v26);
      FriendSearchMenu_CallbackFunc___ctor(
        v29,
        (Il2CppObject *)v3,
        Method_FriendRootComponent_OnSelectSearchFriend__,
        0LL);
      if ( !v28 )
        goto LABEL_30;
      FriendSearchMenu__Open(v28, v29, 1, v30);
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
    sub_B0D97C(operationItemListViewManager);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)operationItemListViewManager, (System_String_o *)StringLiteral_5492/*"END_ACTION"*/, 0LL);
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
  __int64 v31; // x1
  UserGameEntity_o *SelfUserGame; // x21
  DataManager_o *Instance; // x0
  __int64 v34; // x1
  TblFriendMaster_o *MasterData_WarQuestSelectionMaster; // x22
  __int64 v36; // x8
  __int64 v37; // x20
  SkillInfo_o *v38; // x22
  _QWORD *v39; // x0
  System_Reflection_MethodBase_o *v40; // x0
  System_String_o *v41; // x20
  System_String_o *v42; // x21
  Il2CppObject *v43; // x0
  System_String_o *v44; // x0
  System_String_o *v45; // x1
  System_String_o *v46; // x3
  System_String_o *v47; // x2
  _QWORD *v48; // x0
  System_Reflection_MethodBase_o *v49; // x0
  __int64 v50; // x1
  const MethodInfo *v51; // x2
  FriendOperationItemListViewItem_o *v52; // x21
  __int64 v53; // x8
  __int64 v54; // x20
  SkillInfo_o *v55; // x24
  SkillEntity_o *Entity; // x21
  DataManager_o *v57; // x20
  System_String_o *v58; // x21
  System_String_o *v59; // x22
  Il2CppObject *v60; // x0
  System_String_o *v61; // x0
  System_String_o *v62; // x21
  Il2CppObject *v63; // x0
  System_String_o *v64; // x20
  __int64 *v65; // x8
  DataManager_o *v66; // x8
  FriendRootComponent_c *v67; // x0
  DataManager_o *v68; // x8
  __int64 v69; // x9
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  __int64 v71; // x1
  __int64 v72; // x2
  FriendOperationItemListViewItem_o *v73; // x20
  ServantLeaderInfo_o *ServantLeader; // x0
  EquipTargetInfo_o *EquipTargetInfo; // x0
  EquipTargetInfo_o *v76; // x21
  __int64 v77; // x22
  __int64 v78; // x23
  const MethodInfo *v79; // x3
  int32_t v80; // w2
  FriendWarningDialog_o *friendWarningDialog; // x20
  FriendWarningDialog_CallbackFunc_o *v82; // x21
  const MethodInfo *v83; // x3
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v85; // x21
  FriendOperationItemListViewItem_o *Item; // x0
  FriendOperationItemListViewItem_o *v87; // x20
  __int64 v88; // x0
  int datalist; // [xsp+8h] [xbp-68h] BYREF
  int32_t lv; // [xsp+Ch] [xbp-64h] BYREF
  System_String_o *detail; // [xsp+10h] [xbp-60h] BYREF
  System_String_o *name; // [xsp+18h] [xbp-58h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+20h] [xbp-50h] BYREF
  System_String_o *v94; // [xsp+28h] [xbp-48h] BYREF
  System_String_o *v95; // [xsp+30h] [xbp-40h] BYREF
  SkillInfo_array *v96; // [xsp+38h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v97; // 0:x0.16

  if ( (byte_4217178 & 1) == 0 )
  {
    sub_B0D8A4(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&kind);
    sub_B0D8A4(&FriendWarningDialog_CallbackFunc_TypeInfo, v7);
    sub_B0D8A4(&Method_DataManager_GetMasterData_SkillLvMaster___, v8);
    sub_B0D8A4(&Method_DataManager_GetMasterData_SkillMaster___, v9);
    sub_B0D8A4(&Method_DataManager_GetMasterData_TblFriendMaster___, v10);
    sub_B0D8A4(&Method_DataManager_GetMaster_SkillMaster___, v11);
    sub_B0D8A4(&DataManager_TypeInfo, v12);
    sub_B0D8A4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v13);
    sub_B0D8A4(&Method_FriendRootComponent_EndMaxFriendWarning__, v14);
    sub_B0D8A4(&Method_FriendRootComponent_OnSelectFriendItem__, v15);
    sub_B0D8A4(&int_TypeInfo, v16);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v17);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v20);
    sub_B0D8A4(&SoundManager_TypeInfo, v21);
    sub_B0D8A4(&StringLiteral_8752/*"MENU_SELECT_ITEM_ACCEPT"*/, v22);
    sub_B0D8A4(&StringLiteral_80/*" "*/, v23);
    sub_B0D8A4(&StringLiteral_8758/*"MENU_SELECT_ITEM_REMOVE_FOLLOW"*/, v24);
    sub_B0D8A4(&StringLiteral_8753/*"MENU_SELECT_ITEM_CANCEL"*/, v25);
    sub_B0D8A4(&StringLiteral_8654/*"MASTER_EQSKILL_LV_TXT"*/, v26);
    sub_B0D8A4(&StringLiteral_8755/*"MENU_SELECT_ITEM_OFFER"*/, v27);
    sub_B0D8A4(&StringLiteral_2529/*"BATTLE_SKILLCHARGETURN"*/, v28);
    sub_B0D8A4(&StringLiteral_8756/*"MENU_SELECT_ITEM_REJECT"*/, v29);
    sub_B0D8A4(&StringLiteral_1/*""*/, v30);
    sub_B0D8A4(&StringLiteral_8757/*"MENU_SELECT_ITEM_REMOVE"*/, v31);
    byte_4217178 = 1;
  }
  v95 = 0LL;
  v96 = 0LL;
  skillInfoList = 0LL;
  v94 = 0LL;
  detail = 0LL;
  name = 0LL;
  this->fields.selectItemNum = n;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_151;
  MasterData_WarQuestSelectionMaster = (TblFriendMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              Instance,
                                                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_TblFriendMaster___);
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
      v52 = (FriendOperationItemListViewItem_o *)Instance;
      Instance = *(DataManager_o **)&Instance->fields.writeMasterDataThreadEnd;
      if ( !Instance )
        goto LABEL_151;
      v53 = *(_QWORD *)&Instance->fields.nowLoadCount;
      if ( !v53 )
        goto LABEL_151;
      if ( !*(_DWORD *)(v53 + 24) )
        goto LABEL_152;
      if ( !OtherUserGameEntity__getServantLeaderInfo(
              (OtherUserGameEntity_o *)Instance,
              v52->fields.classPos,
              0,
              0,
              *(_DWORD *)(v53 + 32),
              0LL) )
        goto LABEL_140;
      if ( kind == 2 )
        v54 = 1LL;
      else
        v54 = 2LL * (kind == 3);
      Instance = (DataManager_o *)FriendOperationItemListViewItem__GetSkillInfo(v52, &v96, 0LL);
      if ( !v96 )
        goto LABEL_151;
      if ( (unsigned int)v54 >= v96->max_length )
        goto LABEL_152;
      v55 = v96->m_Items[v54];
      if ( !v55 || v55->fields.id < 1 || v55->fields.lv < 1 )
        goto LABEL_140;
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_151;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SkillMaster___);
      if ( !Instance )
        goto LABEL_151;
      Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                  v55->fields.id,
                                  (const MethodInfo_2669BD4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_151;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SkillLvMaster___);
      if ( !Instance )
        goto LABEL_151;
      Instance = (DataManager_o *)SkillLvMaster__GetEntity(
                                    (SkillLvMaster_o *)Instance,
                                    v55->fields.id,
                                    v55->fields.lv,
                                    0LL);
      if ( !Entity )
        goto LABEL_151;
      v57 = Instance;
      SkillEntity__getSkillMessageInfo(Entity, &v95, &v94, v55->fields.lv, 0LL);
      v58 = v95;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v59 = LocalizationManager__Get((System_String_o *)StringLiteral_8654/*"MASTER_EQSKILL_LV_TXT"*/, 0LL);
      lv = v55->fields.lv;
      v60 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv);
      v61 = System_String__Format(v59, v60, 0LL);
      v95 = System_String__Concat_43852188(v58, (System_String_o *)StringLiteral_80/*" "*/, v61, 0LL);
      Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2529/*"BATTLE_SKILLCHARGETURN"*/, 0LL);
      if ( !v57 )
        goto LABEL_151;
      v62 = (System_String_o *)Instance;
      datalist = (int)v57->fields.datalist;
      v63 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &datalist);
      v64 = System_String__Format(v62, v63, 0LL);
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !Instance )
        goto LABEL_151;
      v46 = v94;
      v45 = v95;
      v47 = v64;
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
      v65 = &StringLiteral_8755/*"MENU_SELECT_ITEM_OFFER"*/;
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
        v82 = (FriendWarningDialog_CallbackFunc_o *)sub_B0D974(FriendWarningDialog_CallbackFunc_TypeInfo, v71, v72);
        FriendWarningDialog_CallbackFunc___ctor(
          v82,
          (Il2CppObject *)this,
          Method_FriendRootComponent_EndMaxFriendWarning__,
          0LL);
        if ( friendWarningDialog )
        {
          FriendWarningDialog__Open(friendWarningDialog, 1, v82, v83);
          return;
        }
LABEL_151:
        sub_B0D97C(Instance);
      }
      Instance = (DataManager_o *)this->fields.myFSM;
      if ( !Instance )
        goto LABEL_151;
      v65 = &StringLiteral_8752/*"MENU_SELECT_ITEM_ACCEPT"*/;
LABEL_143:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v65, 0LL);
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
      v65 = &StringLiteral_8756/*"MENU_SELECT_ITEM_REJECT"*/;
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
      v65 = &StringLiteral_8753/*"MENU_SELECT_ITEM_CANCEL"*/;
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
      v66 = Instance;
      Instance = (DataManager_o *)this->fields.myFSM;
      if ( !Instance )
        goto LABEL_151;
      if ( LODWORD(v66->fields.writeMasterDataThread) == 9 )
        v65 = &StringLiteral_8758/*"MENU_SELECT_ITEM_REMOVE_FOLLOW"*/;
      else
        v65 = &StringLiteral_8757/*"MENU_SELECT_ITEM_REMOVE"*/;
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
      v73 = (FriendOperationItemListViewItem_o *)Instance;
      ServantLeader = FriendOperationItemListViewItem__get_ServantLeader(
                        (FriendOperationItemListViewItem_o *)Instance,
                        0LL);
      if ( !ServantLeader || !ServantLeaderInfo__IsHideEquip(ServantLeader, 0LL) )
      {
        EquipTargetInfo = FriendOperationItemListViewItem__get_EquipTargetInfo(v73, 0LL);
        if ( EquipTargetInfo )
        {
          v76 = EquipTargetInfo;
          v78 = *(_QWORD *)&EquipTargetInfo->fields.svtId.fields.currentCryptoKey;
          v77 = *(_QWORD *)&EquipTargetInfo->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v97.fields.currentCryptoKey = v78;
          *(_QWORD *)&v97.fields.fakeValue = v77;
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v97, 0LL) >= 1 )
          {
            if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !SoundManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
            }
            SoundManager__playSystemSe(0, 0LL);
            if ( v73->fields.kind == 9 )
              v80 = 14;
            else
              v80 = 13;
            FriendRootComponent__SelectShowServantEquip(this, v76, v80, v79);
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
      v36 = (unsigned int)(kind - 14);
      v37 = (unsigned int)v36 < 4 ? v36 + 1 : 0LL;
      if ( !Instance )
        goto LABEL_151;
      Instance = (DataManager_o *)FriendOperationItemListViewItem__GetAppendSkillInfo(
                                    (FriendOperationItemListViewItem_o *)Instance,
                                    &skillInfoList,
                                    0LL);
      if ( !skillInfoList )
        goto LABEL_151;
      if ( (unsigned int)v37 >= skillInfoList->max_length )
        goto LABEL_152;
      v38 = skillInfoList->m_Items[v37];
      if ( v38 && v38->fields.id >= 1 && v38->fields.lv >= 1 )
      {
        v39 = Method_FriendRootComponent_OnSelectFriendItem__;
        if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 75) & 2) != 0 )
          v39 = (_QWORD *)sub_B0D8AC(Method_FriendRootComponent_OnSelectFriendItem__);
        v40 = (System_Reflection_MethodBase_o *)sub_B0D888(v39, v39[3]);
        OverwriteAssetSoundName__PlaySystemSe(v40, 0, 0LL);
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        Instance = (DataManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_SkillMaster___);
        if ( !Instance )
          goto LABEL_151;
        Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                      v38->fields.id,
                                      (const MethodInfo_2669BD4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_151;
        SkillEntity__getSkillMessageInfo((SkillEntity_o *)Instance, &name, &detail, v38->fields.lv, 0LL);
        v41 = name;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v42 = LocalizationManager__Get((System_String_o *)StringLiteral_8654/*"MASTER_EQSKILL_LV_TXT"*/, 0LL);
        lv = v38->fields.lv;
        v43 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv);
        v44 = System_String__Format(v42, v43, 0LL);
        name = System_String__Concat_43852188(v41, (System_String_o *)StringLiteral_80/*" "*/, v44, 0LL);
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !Instance )
          goto LABEL_151;
        v46 = detail;
        v45 = name;
        v47 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_58:
        CommonUI__OpenDetailLongInfoDialog((CommonUI_o *)Instance, v45, v47, v46, 1, 0, 0LL);
      }
      else
      {
        v48 = Method_FriendRootComponent_OnSelectFriendItem__;
        if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 75) & 2) != 0 )
          v48 = (_QWORD *)sub_B0D8AC(Method_FriendRootComponent_OnSelectFriendItem__);
        v49 = (System_Reflection_MethodBase_o *)sub_B0D888(v48, v48[3]);
        OverwriteAssetSoundName__PlaySystemSe(v49, 2, 0LL);
      }
      goto LABEL_140;
    default:
      if ( this->fields.currentModeKind != 1 )
        goto LABEL_155;
      if ( !byte_4217235 )
      {
        sub_B0D8A4(&FriendRootComponent_TypeInfo, v34);
        byte_4217235 = 1;
      }
      v67 = FriendRootComponent_TypeInfo;
      if ( (BYTE3(FriendRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !FriendRootComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FriendRootComponent_TypeInfo);
        v67 = FriendRootComponent_TypeInfo;
      }
      if ( !v67->static_fields->tabKindSave )
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
          v87 = Item;
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(11, 0LL);
          FriendOperationItemListViewItem__SwapLock(v87, 0LL);
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
        v68 = Instance;
        Instance = *(DataManager_o **)&Instance->fields.writeMasterDataThreadEnd;
        if ( !Instance )
          goto LABEL_151;
        v69 = *(_QWORD *)&Instance->fields.nowLoadCount;
        if ( !v69 )
          goto LABEL_151;
        if ( !*(_DWORD *)(v69 + 24) )
        {
LABEL_152:
          v88 = sub_B0D9A8(Instance);
          sub_B0D948(v88, 0LL);
        }
        ServantLeaderInfo = OtherUserGameEntity__getServantLeaderInfo(
                              (OtherUserGameEntity_o *)Instance,
                              (int32_t)v68[1].fields.lookup,
                              0,
                              0,
                              *(_DWORD *)(v69 + 32),
                              0LL);
        if ( ServantLeaderInfo )
        {
          FriendRootComponent__SelectShowServant(this, ServantLeaderInfo, v51);
          return;
        }
      }
LABEL_140:
      operationItemListViewManager = this->fields.operationItemListViewManager;
      v85 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B0D974(
                                                                   FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                                   v50,
                                                                   v51);
      FriendOperationItemListViewManager_CallbackFunc___ctor(
        v85,
        (Il2CppObject *)this,
        (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
        0LL);
      if ( operationItemListViewManager )
      {
        FriendOperationItemListViewManager__SetMode(operationItemListViewManager, 2, v85, 0LL);
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
  __int64 v7; // x1
  __int64 v8; // x1
  ClassButtonControlComponent_o *classButtonControl; // x0
  __int64 *v10; // x8

  if ( (byte_4217182 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_8754/*"MENU_SELECT_ITEM_FOLLOW"*/, *(_QWORD *)&state);
    sub_B0D8A4(&StringLiteral_8755/*"MENU_SELECT_ITEM_OFFER"*/, v7);
    sub_B0D8A4(&StringLiteral_8738/*"MENU_CANCEL"*/, v8);
    byte_4217182 = 1;
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
      v10 = &StringLiteral_8755/*"MENU_SELECT_ITEM_OFFER"*/;
      goto LABEL_11;
    }
LABEL_12:
    sub_B0D97C(classButtonControl);
  }
  if ( !classButtonControl )
    goto LABEL_12;
  if ( state == 3 )
    v10 = &StringLiteral_8754/*"MENU_SELECT_ITEM_FOLLOW"*/;
  else
    v10 = &StringLiteral_8738/*"MENU_CANCEL"*/;
LABEL_11:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)classButtonControl, (System_String_o *)*v10, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_4217181 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_8739/*"MENU_DECIDE"*/, isDecide);
    sub_B0D8A4(&StringLiteral_8738/*"MENU_CANCEL"*/, v11);
    byte_4217181 = 1;
  }
  this->fields.selectFriendCode = friendCode;
  sub_B0D840(
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
    sub_B0D97C(0LL);
  v13 = &StringLiteral_8739/*"MENU_DECIDE"*/;
  if ( !isDecide )
    v13 = &StringLiteral_8738/*"MENU_CANCEL"*/;
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
    sub_B0D97C(operationItemListViewManager);
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
  TblFriendMaster_o *MasterData_WarQuestSelectionMaster; // x20
  WarQuestSelectionMaster_o *v12; // x0
  UILabel_o *friendCountLabel; // x23
  UserFollowMaster_o *v14; // x21
  System_String_o *v15; // x24
  Il2CppObject *v16; // x25
  Il2CppObject *v17; // x0
  UILabel_o *followCountLabel; // x22
  System_String_o *v19; // x23
  Il2CppObject *v20; // x21
  BalanceConfig_c *v21; // x8
  Il2CppObject *v22; // x0
  const MethodInfo *v23; // x1
  const MethodInfo *v24; // x1
  int32_t FollowNum; // [xsp+8h] [xbp-58h] BYREF
  int32_t FollowSum; // [xsp+Ch] [xbp-54h] BYREF
  int32_t friendKeep; // [xsp+18h] [xbp-48h] BYREF
  int32_t FriendSum; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_421713E & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_TblFriendMaster___, v3);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserFollowMaster___, v4);
    sub_B0D8A4(&int_TypeInfo, v5);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_B0D8A4(&StringLiteral_6518/*"FRIEND_SHOW_INFOMATION"*/, v8);
    byte_421713E = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  MasterData_WarQuestSelectionMaster = (TblFriendMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              Instance,
                                                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_TblFriendMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  v12 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          Instance,
          (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserFollowMaster___);
  friendCountLabel = this->fields.friendCountLabel;
  v14 = (UserFollowMaster_o *)v12;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6518/*"FRIEND_SHOW_INFOMATION"*/, 0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_18;
  v15 = (System_String_o *)Instance;
  FriendSum = TblFriendMaster__GetFriendSum(MasterData_WarQuestSelectionMaster, 0LL);
  Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &FriendSum);
  if ( !SelfUserGame )
    goto LABEL_18;
  v16 = (Il2CppObject *)Instance;
  friendKeep = SelfUserGame->fields.friendKeep;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &friendKeep);
  Instance = (DataManager_o *)System_String__Format_43845440(v15, v16, v17, 0LL);
  if ( !friendCountLabel )
    goto LABEL_18;
  UILabel__set_text(friendCountLabel, (System_String_o *)Instance, 0LL);
  followCountLabel = this->fields.followCountLabel;
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6518/*"FRIEND_SHOW_INFOMATION"*/, 0LL);
  if ( !v14 )
    goto LABEL_18;
  v19 = (System_String_o *)Instance;
  FollowSum = UserFollowMaster__GetFollowSum(v14, 0LL);
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &FollowSum);
  v21 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v21 = BalanceConfig_TypeInfo;
  }
  FollowNum = v21->static_fields->FollowNum;
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &FollowNum);
  Instance = (DataManager_o *)System_String__Format_43845440(v19, v20, v22, 0LL);
  if ( !followCountLabel
    || (UILabel__set_text(followCountLabel, (System_String_o *)Instance, 0LL),
        Instance = (DataManager_o *)TblFriendMaster__GetSum(MasterData_WarQuestSelectionMaster, 2, 0LL),
        !this->fields.noticeNumber) )
  {
LABEL_18:
    sub_B0D97C(Instance);
  }
  NoticeNumberComponent__SetNumber(this->fields.noticeNumber, (int32_t)Instance, 0LL);
  FriendRootComponent__CheckModeKind(this, v23);
  FriendRootComponent__CheckHelpUI(this, v24);
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
  FriendRootComponent_c *v10; // x0
  int32_t tabKindSave; // w8
  UnityEngine_Behaviour_o *tabFriendButton; // x0
  System_String_o *v13; // x1
  System_String_o *v14; // x1
  const MethodInfo *v15; // x1
  __int64 v16; // x1
  const MethodInfo *v17; // x2
  FriendRootComponent_c *v18; // x0
  UICommonButton_o *v19; // x20
  bool enabled; // w0
  UICommonButton_o *tabOfferedButton; // x20
  bool v22; // w0
  UnityEngine_Behaviour_o *tabSearchButton; // x19
  bool v24; // w1

  if ( (byte_421713D & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_17111/*"btn_txt_friendsearch_on"*/, method);
    sub_B0D8A4(&StringLiteral_17110/*"btn_txt_friendsearch_off"*/, v3);
    sub_B0D8A4(&StringLiteral_17012/*"btn_bg_09"*/, v4);
    sub_B0D8A4(&StringLiteral_17109/*"btn_txt_friendrequest_on"*/, v5);
    sub_B0D8A4(&StringLiteral_17107/*"btn_txt_friendlist_on"*/, v6);
    sub_B0D8A4(&StringLiteral_17108/*"btn_txt_friendrequest_off"*/, v7);
    sub_B0D8A4(&StringLiteral_17106/*"btn_txt_friendlist_off"*/, v8);
    sub_B0D8A4(&StringLiteral_17027/*"btn_bg_on"*/, v9);
    byte_421713D = 1;
  }
  if ( !byte_4217235 )
  {
    sub_B0D8A4(&FriendRootComponent_TypeInfo, method);
    byte_4217235 = 1;
  }
  v10 = FriendRootComponent_TypeInfo;
  if ( (BYTE3(FriendRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FriendRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendRootComponent_TypeInfo);
    v10 = FriendRootComponent_TypeInfo;
  }
  tabKindSave = v10->static_fields->tabKindSave;
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
    UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17106/*"btn_txt_friendlist_off"*/, 0LL);
    tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabOfferedTitleSprite;
    if ( !tabFriendButton )
      goto LABEL_63;
    UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17108/*"btn_txt_friendrequest_off"*/, 0LL);
    tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabSearchTitleSprite;
    if ( !tabFriendButton )
      goto LABEL_63;
    UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17111/*"btn_txt_friendsearch_on"*/, 0LL);
    tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabFriendSprite;
    if ( !tabFriendButton )
      goto LABEL_63;
    UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17012/*"btn_bg_09"*/, 0LL);
    tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabOfferedSprite;
    if ( !tabFriendButton )
      goto LABEL_63;
    UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17012/*"btn_bg_09"*/, 0LL);
    tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabSearchSprite;
    if ( !tabFriendButton )
      goto LABEL_63;
    v14 = (System_String_o *)StringLiteral_17027/*"btn_bg_on"*/;
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
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17106/*"btn_txt_friendlist_off"*/, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabOfferedTitleSprite;
      if ( !tabFriendButton )
        goto LABEL_63;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17109/*"btn_txt_friendrequest_on"*/, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabSearchTitleSprite;
      if ( !tabFriendButton )
        goto LABEL_63;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17110/*"btn_txt_friendsearch_off"*/, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabFriendSprite;
      if ( !tabFriendButton )
        goto LABEL_63;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17012/*"btn_bg_09"*/, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabOfferedSprite;
      if ( !tabFriendButton )
        goto LABEL_63;
      v13 = (System_String_o *)StringLiteral_17027/*"btn_bg_on"*/;
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
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17107/*"btn_txt_friendlist_on"*/, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabOfferedTitleSprite;
      if ( !tabFriendButton )
        goto LABEL_63;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17108/*"btn_txt_friendrequest_off"*/, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabSearchTitleSprite;
      if ( !tabFriendButton )
        goto LABEL_63;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17110/*"btn_txt_friendsearch_off"*/, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabFriendSprite;
      if ( !tabFriendButton )
        goto LABEL_63;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17027/*"btn_bg_on"*/, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabOfferedSprite;
      if ( !tabFriendButton )
        goto LABEL_63;
      v13 = (System_String_o *)StringLiteral_17012/*"btn_bg_09"*/;
    }
    UISprite__set_spriteName((UISprite_o *)tabFriendButton, v13, 0LL);
    tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabSearchSprite;
    if ( !tabFriendButton )
      goto LABEL_63;
    v14 = (System_String_o *)StringLiteral_17012/*"btn_bg_09"*/;
  }
  UISprite__set_spriteName((UISprite_o *)tabFriendButton, v14, 0LL);
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
  FriendRootComponent__CheckHelpUI(this, v15);
  if ( !byte_4217235 )
  {
    sub_B0D8A4(&FriendRootComponent_TypeInfo, v16);
    byte_4217235 = 1;
  }
  v18 = FriendRootComponent_TypeInfo;
  if ( (BYTE3(FriendRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FriendRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendRootComponent_TypeInfo);
    v18 = FriendRootComponent_TypeInfo;
  }
  FriendRootComponent__SetActiveModeKindButtons(this, v18->static_fields->tabKindSave == 0, v17);
  v19 = this->fields.tabFriendButton;
  if ( !v19
    || (enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.tabFriendButton, 0LL),
        UICommonButton__SetColliderEnable(v19, enabled, 1, 0LL),
        (tabOfferedButton = this->fields.tabOfferedButton) == 0LL)
    || (v22 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.tabOfferedButton, 0LL),
        UICommonButton__SetColliderEnable(tabOfferedButton, v22, 1, 0LL),
        (tabSearchButton = (UnityEngine_Behaviour_o *)this->fields.tabSearchButton) == 0LL) )
  {
LABEL_63:
    sub_B0D97C(tabFriendButton);
  }
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
  FollowAssignRequest_o *Request_WarBoardWallAttackRequest; // x0
  struct OtherUserGameEntity_o *selectFriendEntity; // x8

  if ( (byte_4217187 & 1) == 0 )
  {
    sub_B0D8A4(&Method_FriendRootComponent_EndRequestFollowAssign__, method);
    sub_B0D8A4(&Method_NetworkManager_getRequest_FollowAssignRequest___, v4);
    sub_B0D8A4(&NetworkManager_TypeInfo, v5);
    sub_B0D8A4(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_11104/*"REQUEST_NG"*/, v7);
    byte_4217187 = 1;
  }
  if ( this->fields.selectFriendEntity )
  {
    v8 = (NetworkManager_ResultCallbackFunc_o *)sub_B0D974(NetworkManager_ResultCallbackFunc_TypeInfo, method, v2);
    NetworkManager_ResultCallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_FriendRootComponent_EndRequestFollowAssign__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = (FollowAssignRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                   v8,
                                                                   (const MethodInfo_2049D98 *)Method_NetworkManager_getRequest_FollowAssignRequest___);
    selectFriendEntity = this->fields.selectFriendEntity;
    if ( selectFriendEntity && Request_WarBoardWallAttackRequest )
    {
      FollowAssignRequest__beginRequest(Request_WarBoardWallAttackRequest, selectFriendEntity->fields.userId, 0LL);
      return;
    }
LABEL_12:
    sub_B0D97C(Request_WarBoardWallAttackRequest);
  }
  Request_WarBoardWallAttackRequest = (FollowAssignRequest_o *)this->fields.myFSM;
  if ( !Request_WarBoardWallAttackRequest )
    goto LABEL_12;
  PlayMakerFSM__SendEvent(
    (PlayMakerFSM_o *)Request_WarBoardWallAttackRequest,
    (System_String_o *)StringLiteral_11104/*"REQUEST_NG"*/,
    0LL);
}


void __fastcall FriendRootComponent__RequestFollowRemove(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v6; // x20
  const MethodInfo *v7; // x2

  if ( (byte_4217190 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_string___ctor__, method);
    sub_B0D8A4(&System_Action_string__TypeInfo, v4);
    sub_B0D8A4(&Method_FriendRootComponent__RequestFollowRemove_b__139_0__, v5);
    byte_4217190 = 1;
  }
  v6 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                              System_Action_string__TypeInfo,
                                                                              method,
                                                                              v2);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v6,
    (Il2CppObject *)this,
    Method_FriendRootComponent__RequestFollowRemove_b__139_0__,
    (const MethodInfo_246EA3C *)Method_System_Action_string___ctor__);
  FriendRootComponent__FriendLockRequst(this, (System_Action_string__o *)v6, v7);
}


void __fastcall FriendRootComponent__RequestFriendAccept(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  FriendOperationItemListViewItem_o *Item; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  struct OtherUserGameEntity_o *otherUserGameEntity; // x21
  NetworkManager_ResultCallbackFunc_o *v12; // x20

  if ( (byte_421715E & 1) == 0 )
  {
    sub_B0D8A4(&Method_FriendRootComponent_EndRequestFriend__, method);
    sub_B0D8A4(&Method_NetworkManager_getRequest_FriendAcceptRequest___, v3);
    sub_B0D8A4(&NetworkManager_TypeInfo, v4);
    sub_B0D8A4(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_11104/*"REQUEST_NG"*/, v6);
    byte_421715E = 1;
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
      v12 = (NetworkManager_ResultCallbackFunc_o *)sub_B0D974(NetworkManager_ResultCallbackFunc_TypeInfo, v9, v10);
      NetworkManager_ResultCallbackFunc___ctor(
        v12,
        (Il2CppObject *)this,
        Method_FriendRootComponent_EndRequestFriend__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      operationItemListViewManager = (FriendOperationItemListViewManager_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                               v12,
                                                                               (const MethodInfo_2049D98 *)Method_NetworkManager_getRequest_FriendAcceptRequest___);
      if ( operationItemListViewManager )
      {
        FriendAcceptRequest__beginRequest(
          (FriendAcceptRequest_o *)operationItemListViewManager,
          otherUserGameEntity->fields.userId,
          0LL);
        return;
      }
LABEL_13:
      sub_B0D97C(operationItemListViewManager);
    }
  }
  operationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.myFSM;
  if ( !operationItemListViewManager )
    goto LABEL_13;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)operationItemListViewManager, (System_String_o *)StringLiteral_11104/*"REQUEST_NG"*/, 0LL);
}


void __fastcall FriendRootComponent__RequestFriendCancel(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  FriendOperationItemListViewItem_o *Item; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  struct OtherUserGameEntity_o *otherUserGameEntity; // x21
  NetworkManager_ResultCallbackFunc_o *v12; // x20

  if ( (byte_4217160 & 1) == 0 )
  {
    sub_B0D8A4(&Method_FriendRootComponent_EndRequestFriend__, method);
    sub_B0D8A4(&Method_NetworkManager_getRequest_FriendCancelRequest___, v3);
    sub_B0D8A4(&NetworkManager_TypeInfo, v4);
    sub_B0D8A4(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_11104/*"REQUEST_NG"*/, v6);
    byte_4217160 = 1;
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
      v12 = (NetworkManager_ResultCallbackFunc_o *)sub_B0D974(NetworkManager_ResultCallbackFunc_TypeInfo, v9, v10);
      NetworkManager_ResultCallbackFunc___ctor(
        v12,
        (Il2CppObject *)this,
        Method_FriendRootComponent_EndRequestFriend__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      operationItemListViewManager = (FriendOperationItemListViewManager_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                               v12,
                                                                               (const MethodInfo_2049D98 *)Method_NetworkManager_getRequest_FriendCancelRequest___);
      if ( operationItemListViewManager )
      {
        FriendCancelRequest__beginRequest(
          (FriendCancelRequest_o *)operationItemListViewManager,
          otherUserGameEntity->fields.userId,
          0LL);
        return;
      }
LABEL_13:
      sub_B0D97C(operationItemListViewManager);
    }
  }
  operationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.myFSM;
  if ( !operationItemListViewManager )
    goto LABEL_13;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)operationItemListViewManager, (System_String_o *)StringLiteral_11104/*"REQUEST_NG"*/, 0LL);
}


void __fastcall FriendRootComponent__RequestFriendOffer(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  NetworkManager_ResultCallbackFunc_o *v8; // x20
  FriendOfferRequest_o *Request_WarBoardWallAttackRequest; // x0
  struct OtherUserGameEntity_o *selectFriendEntity; // x8

  if ( (byte_421715C & 1) == 0 )
  {
    sub_B0D8A4(&Method_FriendRootComponent_EndRequestFriend__, method);
    sub_B0D8A4(&Method_NetworkManager_getRequest_FriendOfferRequest___, v4);
    sub_B0D8A4(&NetworkManager_TypeInfo, v5);
    sub_B0D8A4(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_11104/*"REQUEST_NG"*/, v7);
    byte_421715C = 1;
  }
  if ( this->fields.selectFriendEntity )
  {
    v8 = (NetworkManager_ResultCallbackFunc_o *)sub_B0D974(NetworkManager_ResultCallbackFunc_TypeInfo, method, v2);
    NetworkManager_ResultCallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_FriendRootComponent_EndRequestFriend__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = (FriendOfferRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                  v8,
                                                                  (const MethodInfo_2049D98 *)Method_NetworkManager_getRequest_FriendOfferRequest___);
    selectFriendEntity = this->fields.selectFriendEntity;
    if ( selectFriendEntity && Request_WarBoardWallAttackRequest )
    {
      FriendOfferRequest__beginRequest(Request_WarBoardWallAttackRequest, selectFriendEntity->fields.userId, 0LL);
      return;
    }
LABEL_12:
    sub_B0D97C(Request_WarBoardWallAttackRequest);
  }
  Request_WarBoardWallAttackRequest = (FriendOfferRequest_o *)this->fields.myFSM;
  if ( !Request_WarBoardWallAttackRequest )
    goto LABEL_12;
  PlayMakerFSM__SendEvent(
    (PlayMakerFSM_o *)Request_WarBoardWallAttackRequest,
    (System_String_o *)StringLiteral_11104/*"REQUEST_NG"*/,
    0LL);
}


void __fastcall FriendRootComponent__RequestFriendOffer2(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v6; // x20
  const MethodInfo *v7; // x2

  if ( (byte_421715D & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_string___ctor__, method);
    sub_B0D8A4(&System_Action_string__TypeInfo, v4);
    sub_B0D8A4(&Method_FriendRootComponent__RequestFriendOffer2_b__84_0__, v5);
    byte_421715D = 1;
  }
  v6 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                              System_Action_string__TypeInfo,
                                                                              method,
                                                                              v2);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v6,
    (Il2CppObject *)this,
    Method_FriendRootComponent__RequestFriendOffer2_b__84_0__,
    (const MethodInfo_246EA3C *)Method_System_Action_string___ctor__);
  FriendRootComponent__FriendLockRequst(this, (System_Action_string__o *)v6, v7);
}


void __fastcall FriendRootComponent__RequestFriendProfile(FriendRootComponent_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  System_String_o *selectFriendCode; // x0
  System_String_o *v18; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  NetworkManager_ResultCallbackFunc_o *v21; // x20
  ProfileTopRequest_o *Request_WarBoardWallAttackRequest; // x0
  FriendWarningDialog_o *friendWarningDialog; // x20
  FriendWarningDialog_CallbackFunc_o *v24; // x21
  const MethodInfo *v25; // x3

  if ( (byte_4217164 & 1) == 0 )
  {
    sub_B0D8A4(&FriendWarningDialog_CallbackFunc_TypeInfo, method);
    sub_B0D8A4(&Method_FriendRootComponent_EndNoSearchWarning__, v9);
    sub_B0D8A4(&Method_FriendRootComponent_EndRequestFriendProfile__, v10);
    sub_B0D8A4(&Method_NetworkManager_getRequest_ProfileTopRequest___, v11);
    sub_B0D8A4(&NetworkManager_TypeInfo, v12);
    sub_B0D8A4(&NetworkManager_ResultCallbackFunc_TypeInfo, v13);
    sub_B0D8A4(&StringLiteral_80/*" "*/, v14);
    sub_B0D8A4(&StringLiteral_11104/*"REQUEST_NG"*/, v15);
    sub_B0D8A4(&StringLiteral_1/*""*/, v16);
    byte_4217164 = 1;
  }
  selectFriendCode = this->fields.selectFriendCode;
  if ( selectFriendCode )
  {
    v18 = System_String__Replace_43857140(
            selectFriendCode,
            (System_String_o *)StringLiteral_80/*" "*/,
            (System_String_o *)StringLiteral_1/*""*/,
            0LL);
    if ( System_String__op_Inequality(v18, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
    {
      v21 = (NetworkManager_ResultCallbackFunc_o *)sub_B0D974(NetworkManager_ResultCallbackFunc_TypeInfo, v19, v20);
      NetworkManager_ResultCallbackFunc___ctor(
        v21,
        (Il2CppObject *)this,
        Method_FriendRootComponent_EndRequestFriendProfile__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Request_WarBoardWallAttackRequest = (ProfileTopRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                   v21,
                                                                   (const MethodInfo_2049D98 *)Method_NetworkManager_getRequest_ProfileTopRequest___);
      if ( Request_WarBoardWallAttackRequest )
      {
        ProfileTopRequest__beginRequestFriendCode(Request_WarBoardWallAttackRequest, this->fields.selectFriendCode, 0LL);
        return;
      }
LABEL_14:
      sub_B0D97C(Request_WarBoardWallAttackRequest);
    }
    friendWarningDialog = this->fields.friendWarningDialog;
    v24 = (FriendWarningDialog_CallbackFunc_o *)sub_B0D974(FriendWarningDialog_CallbackFunc_TypeInfo, v19, v20);
    FriendWarningDialog_CallbackFunc___ctor(
      v24,
      (Il2CppObject *)this,
      Method_FriendRootComponent_EndNoSearchWarning__,
      0LL);
    if ( !friendWarningDialog )
      goto LABEL_14;
    FriendWarningDialog__Open(friendWarningDialog, 3, v24, v25);
  }
  this->fields.selectFriendEntity = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.selectFriendEntity, 0LL, v2, v3, v4, v5, v6, v7);
  Request_WarBoardWallAttackRequest = (ProfileTopRequest_o *)this->fields.myFSM;
  if ( !Request_WarBoardWallAttackRequest )
    goto LABEL_14;
  PlayMakerFSM__SendEvent(
    (PlayMakerFSM_o *)Request_WarBoardWallAttackRequest,
    (System_String_o *)StringLiteral_11104/*"REQUEST_NG"*/,
    0LL);
}


void __fastcall FriendRootComponent__RequestFriendReject(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  FriendOperationItemListViewItem_o *Item; // x0
  struct OtherUserGameEntity_o *otherUserGameEntity; // x21
  __int64 v11; // x1
  __int64 v12; // x2
  NetworkManager_ResultCallbackFunc_o *v13; // x20
  const MethodInfo *v14; // x2

  if ( (byte_421715F & 1) == 0 )
  {
    sub_B0D8A4(&Method_FriendRootComponent_EndRequestFriend__, method);
    sub_B0D8A4(&Method_NetworkManager_getRequest_FriendRejectRequest___, v3);
    sub_B0D8A4(&NetworkManager_TypeInfo, v4);
    sub_B0D8A4(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B0D8A4(&StringLiteral_11104/*"REQUEST_NG"*/, v7);
    byte_421715F = 1;
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
      operationItemListViewManager = (FriendOperationItemListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( operationItemListViewManager )
      {
        CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)operationItemListViewManager, 0, 0LL);
        v13 = (NetworkManager_ResultCallbackFunc_o *)sub_B0D974(NetworkManager_ResultCallbackFunc_TypeInfo, v11, v12);
        NetworkManager_ResultCallbackFunc___ctor(
          v13,
          (Il2CppObject *)this,
          Method_FriendRootComponent_EndRequestFriend__,
          0LL);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        operationItemListViewManager = (FriendOperationItemListViewManager_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                                 v13,
                                                                                 (const MethodInfo_2049D98 *)Method_NetworkManager_getRequest_FriendRejectRequest___);
        if ( operationItemListViewManager )
        {
          FriendRejectRequest__beginRequest(
            (FriendRejectRequest_o *)operationItemListViewManager,
            otherUserGameEntity->fields.userId,
            v14);
          return;
        }
      }
LABEL_14:
      sub_B0D97C(operationItemListViewManager);
    }
  }
  operationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.myFSM;
  if ( !operationItemListViewManager )
    goto LABEL_14;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)operationItemListViewManager, (System_String_o *)StringLiteral_11104/*"REQUEST_NG"*/, 0LL);
}


void __fastcall FriendRootComponent__RequestFriendRemove(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v6; // x20
  const MethodInfo *v7; // x2

  if ( (byte_4217161 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_string___ctor__, method);
    sub_B0D8A4(&System_Action_string__TypeInfo, v4);
    sub_B0D8A4(&Method_FriendRootComponent__RequestFriendRemove_b__88_0__, v5);
    byte_4217161 = 1;
  }
  v6 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                              System_Action_string__TypeInfo,
                                                                              method,
                                                                              v2);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v6,
    (Il2CppObject *)this,
    Method_FriendRootComponent__RequestFriendRemove_b__88_0__,
    (const MethodInfo_246EA3C *)Method_System_Action_string___ctor__);
  FriendRootComponent__FriendLockRequst(this, (System_Action_string__o *)v6, v7);
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
  DataManager_o *Instance; // x0
  UserFollowMaster_o *v15; // x20
  const MethodInfo *v16; // x1
  __int64 v17; // x2
  int32_t FollowSum; // w21
  BalanceConfig_c *v19; // x8
  struct OtherUserGameEntity_o *selectFriendEntity; // x8
  __int64 v21; // x1
  __int64 v22; // x2
  CommonUI_o *v23; // x20
  System_String_o *v24; // x21
  System_String_o *v25; // x22
  __int64 v26; // x1
  __int64 v27; // x2
  NotificationDialog_ClickDelegate_o *v28; // x23
  FriendWarningDialog_o *friendWarningDialog; // x20
  FriendWarningDialog_CallbackFunc_o *v30; // x21
  const MethodInfo *v31; // x3
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x20
  OtherUserGameEntity_o *v33; // x21
  FriendOperationConfirmMenu_CallbackFunc_o *v34; // x22

  if ( (byte_4217183 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    sub_B0D8A4(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo, v3);
    sub_B0D8A4(&FriendWarningDialog_CallbackFunc_TypeInfo, v4);
    sub_B0D8A4(&NotificationDialog_ClickDelegate_TypeInfo, v5);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserFollowMaster___, v6);
    sub_B0D8A4(&Method_FriendRootComponent_EndMaxFollowWarningOfferConfirm__, v7);
    sub_B0D8A4(&Method_FriendRootComponent_SelectedFollowOfferConfirm__, v8);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v9);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    sub_B0D8A4(&StringLiteral_1685/*"ALREADY_FOLLOWED_TITLE"*/, v12);
    sub_B0D8A4(&StringLiteral_1684/*"ALREADY_FOLLOWED_MESSAGE"*/, v13);
    byte_4217183 = 1;
  }
  if ( this->fields.state == 23 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserFollowMaster___);
      if ( Instance )
      {
        v15 = (UserFollowMaster_o *)Instance;
        FollowSum = UserFollowMaster__GetFollowSum((UserFollowMaster_o *)Instance, 0LL);
        v19 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v19 = BalanceConfig_TypeInfo;
        }
        if ( FollowSum >= v19->static_fields->FollowNum )
        {
          this->fields.state = 43;
          friendWarningDialog = this->fields.friendWarningDialog;
          v30 = (FriendWarningDialog_CallbackFunc_o *)sub_B0D974(FriendWarningDialog_CallbackFunc_TypeInfo, v16, v17);
          FriendWarningDialog_CallbackFunc___ctor(
            v30,
            (Il2CppObject *)this,
            Method_FriendRootComponent_EndMaxFollowWarningOfferConfirm__,
            0LL);
          if ( friendWarningDialog )
          {
            FriendWarningDialog__Open(friendWarningDialog, 7, v30, v31);
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
            v23 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v24 = LocalizationManager__Get((System_String_o *)StringLiteral_1685/*"ALREADY_FOLLOWED_TITLE"*/, 0LL);
            v25 = LocalizationManager__Get((System_String_o *)StringLiteral_1684/*"ALREADY_FOLLOWED_MESSAGE"*/, 0LL);
            v28 = (NotificationDialog_ClickDelegate_o *)sub_B0D974(NotificationDialog_ClickDelegate_TypeInfo, v26, v27);
            NotificationDialog_ClickDelegate___ctor(
              v28,
              (Il2CppObject *)this,
              Method_FriendRootComponent_EndMaxFollowWarningOfferConfirm__,
              0LL);
            if ( v23 )
            {
              CommonUI__OpenNotificationDialog_17019096(
                v23,
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
            v33 = this->fields.selectFriendEntity;
            v34 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_B0D974(
                                                                 FriendOperationConfirmMenu_CallbackFunc_TypeInfo,
                                                                 v21,
                                                                 v22);
            FriendOperationConfirmMenu_CallbackFunc___ctor(
              v34,
              (Il2CppObject *)this,
              Method_FriendRootComponent_SelectedFollowOfferConfirm__,
              0LL);
            if ( operationConfirmMenu )
            {
              FriendOperationConfirmMenu__Open(operationConfirmMenu, 6, v33, v34, 0LL);
              return;
            }
          }
        }
      }
    }
    sub_B0D97C(Instance);
  }
}


void __fastcall FriendRootComponent__SelectFollowRemoveConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x20
  OtherUserGameEntity_o *dropList; // x21
  FriendOperationConfirmMenu_CallbackFunc_o *v9; // x22

  if ( (byte_421718A & 1) == 0 )
  {
    sub_B0D8A4(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo, method);
    sub_B0D8A4(&Method_FriendRootComponent_SelectedFollowRemoveConfirm__, v3);
    byte_421718A = 1;
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
          v9 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_B0D974(
                                                              FriendOperationConfirmMenu_CallbackFunc_TypeInfo,
                                                              v5,
                                                              v6),
          FriendOperationConfirmMenu_CallbackFunc___ctor(
            v9,
            (Il2CppObject *)this,
            Method_FriendRootComponent_SelectedFollowRemoveConfirm__,
            0LL),
          !operationConfirmMenu) )
    {
      sub_B0D97C(operationItemListViewManager);
    }
    FriendOperationConfirmMenu__Open(operationConfirmMenu, 7, dropList, v9, 0LL);
  }
}


void __fastcall FriendRootComponent__SelectFriendAcceptConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x20
  OtherUserGameEntity_o *dropList; // x21
  FriendOperationConfirmMenu_CallbackFunc_o *v9; // x22

  if ( (byte_4217150 & 1) == 0 )
  {
    sub_B0D8A4(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo, method);
    sub_B0D8A4(&Method_FriendRootComponent_SelectedFriendAcceptConfirm__, v3);
    byte_4217150 = 1;
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
          v9 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_B0D974(
                                                              FriendOperationConfirmMenu_CallbackFunc_TypeInfo,
                                                              v5,
                                                              v6),
          FriendOperationConfirmMenu_CallbackFunc___ctor(
            v9,
            (Il2CppObject *)this,
            Method_FriendRootComponent_SelectedFriendAcceptConfirm__,
            0LL),
          !operationConfirmMenu) )
    {
      sub_B0D97C(operationItemListViewManager);
    }
    FriendOperationConfirmMenu__Open(operationConfirmMenu, 2, dropList, v9, 0LL);
  }
}


void __fastcall FriendRootComponent__SelectFriendCancelConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x20
  OtherUserGameEntity_o *dropList; // x21
  FriendOperationConfirmMenu_CallbackFunc_o *v9; // x22

  if ( (byte_4217156 & 1) == 0 )
  {
    sub_B0D8A4(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo, method);
    sub_B0D8A4(&Method_FriendRootComponent_SelectedFriendCancelConfirm__, v3);
    byte_4217156 = 1;
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
          v9 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_B0D974(
                                                              FriendOperationConfirmMenu_CallbackFunc_TypeInfo,
                                                              v5,
                                                              v6),
          FriendOperationConfirmMenu_CallbackFunc___ctor(
            v9,
            (Il2CppObject *)this,
            Method_FriendRootComponent_SelectedFriendCancelConfirm__,
            0LL),
          !operationConfirmMenu) )
    {
      sub_B0D97C(operationItemListViewManager);
    }
    FriendOperationConfirmMenu__Open(operationConfirmMenu, 4, dropList, v9, 0LL);
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
  __int64 v12; // x2
  struct OtherUserGameEntity_o *selectFriendEntity; // x20
  struct FriendOperationConfirmMenu_o *v14; // x21
  FriendOperationConfirmMenu_CallbackFunc_o *v15; // x22
  FriendOperationConfirmMenu_o *v16; // x0
  OtherUserGameEntity_o *v17; // x2
  UserGameEntity_o *SelfUserGame; // x20
  __int64 v19; // x1
  __int64 v20; // x2
  struct FriendOperationConfirmMenu_o *operationConfirmMenu; // x20
  OtherUserGameEntity_o *v22; // x21
  FriendWarningDialog_o *friendWarningDialog; // x20
  FriendWarningDialog_CallbackFunc_o *v24; // x21
  const MethodInfo *v25; // x3

  if ( (byte_421714E & 1) == 0 )
  {
    sub_B0D8A4(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo, method);
    sub_B0D8A4(&FriendWarningDialog_CallbackFunc_TypeInfo, v3);
    sub_B0D8A4(&Method_DataManager_GetMasterData_TblFriendMaster___, v4);
    sub_B0D8A4(&Method_FriendRootComponent_EndMaxFriendWarningOfferConfirm__, v5);
    sub_B0D8A4(&Method_FriendRootComponent_SelectedFriendOfferConfirm__, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_421714E = 1;
  }
  state = this->fields.state;
  if ( state == 4 )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_27;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_TblFriendMaster___);
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
          v22 = *(OtherUserGameEntity_o **)&Instance->fields.writeMasterDataThreadEnd;
          v15 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_B0D974(
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
            v17 = v22;
            goto LABEL_22;
          }
        }
      }
LABEL_27:
      sub_B0D97C(Instance);
    }
LABEL_24:
    this->fields.state = 29;
    friendWarningDialog = this->fields.friendWarningDialog;
    v24 = (FriendWarningDialog_CallbackFunc_o *)sub_B0D974(FriendWarningDialog_CallbackFunc_TypeInfo, v11, v12);
    FriendWarningDialog_CallbackFunc___ctor(
      v24,
      (Il2CppObject *)this,
      Method_FriendRootComponent_EndMaxFriendWarningOfferConfirm__,
      0LL);
    if ( !friendWarningDialog )
      goto LABEL_27;
    FriendWarningDialog__Open(friendWarningDialog, 1, v24, v25);
    return;
  }
  if ( state != 23 )
    return;
  v9 = UserGameMaster__getSelfUserGame(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_TblFriendMaster___);
  if ( !Instance )
    goto LABEL_27;
  Instance = (DataManager_o *)TblFriendMaster__GetList((TblFriendMaster_o *)Instance, 3, 0LL);
  if ( !Instance || !v9 )
    goto LABEL_27;
  if ( v9->fields.friendKeep <= SLODWORD(Instance->fields.datalist) )
    goto LABEL_24;
  selectFriendEntity = this->fields.selectFriendEntity;
  if ( selectFriendEntity )
  {
    this->fields.state = 27;
    v14 = this->fields.operationConfirmMenu;
    v15 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_B0D974(
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
  __int64 v3; // x1
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x20
  OtherUserGameEntity_o *dropList; // x21
  FriendOperationConfirmMenu_CallbackFunc_o *v9; // x22

  if ( (byte_4217153 & 1) == 0 )
  {
    sub_B0D8A4(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo, method);
    sub_B0D8A4(&Method_FriendRootComponent_SelectedFriendRejectConfirm__, v3);
    byte_4217153 = 1;
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
          v9 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_B0D974(
                                                              FriendOperationConfirmMenu_CallbackFunc_TypeInfo,
                                                              v5,
                                                              v6),
          FriendOperationConfirmMenu_CallbackFunc___ctor(
            v9,
            (Il2CppObject *)this,
            Method_FriendRootComponent_SelectedFriendRejectConfirm__,
            0LL),
          !operationConfirmMenu) )
    {
      sub_B0D97C(operationItemListViewManager);
    }
    FriendOperationConfirmMenu__Open(operationConfirmMenu, 3, dropList, v9, 0LL);
  }
}


void __fastcall FriendRootComponent__SelectFriendRemoveConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x20
  OtherUserGameEntity_o *dropList; // x21
  FriendOperationConfirmMenu_CallbackFunc_o *v9; // x22

  if ( (byte_4217159 & 1) == 0 )
  {
    sub_B0D8A4(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo, method);
    sub_B0D8A4(&Method_FriendRootComponent_SelectedFriendRemoveConfirm__, v3);
    byte_4217159 = 1;
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
          v9 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_B0D974(
                                                              FriendOperationConfirmMenu_CallbackFunc_TypeInfo,
                                                              v5,
                                                              v6),
          FriendOperationConfirmMenu_CallbackFunc___ctor(
            v9,
            (Il2CppObject *)this,
            Method_FriendRootComponent_SelectedFriendRemoveConfirm__,
            0LL),
          !operationConfirmMenu) )
    {
      sub_B0D97C(operationItemListViewManager);
    }
    FriendOperationConfirmMenu__Open(operationConfirmMenu, 5, dropList, v9, 0LL);
  }
}


void __fastcall FriendRootComponent__SelectSearchFriend(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_4217147 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_5492/*"END_ACTION"*/, method);
    byte_4217147 = 1;
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
      sub_B0D97C(0LL);
    PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_5492/*"END_ACTION"*/, 0LL);
  }
}


void __fastcall FriendRootComponent__SelectShowFriend(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Component_o *operationItemListViewManager; // x0
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  FriendOperationItemListViewManager_o *v7; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  System_Action_o *v10; // x21

  if ( (byte_421713F & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_FriendRootComponent_OnMoveEnd__, v3);
    sub_B0D8A4(&StringLiteral_5492/*"END_ACTION"*/, v4);
    byte_421713F = 1;
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
            v7 = this->fields.operationItemListViewManager;
            v10 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v8, v9);
            System_Action___ctor(v10, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0LL);
            if ( v7 )
            {
              FriendOperationItemListViewManager__SetMode_29792744(v7, 1, v10, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_12:
    sub_B0D97C(operationItemListViewManager);
  }
  operationItemListViewManager = (UnityEngine_Component_o *)this->fields.myFSM;
  if ( !operationItemListViewManager )
    goto LABEL_12;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)operationItemListViewManager, (System_String_o *)StringLiteral_5492/*"END_ACTION"*/, 0LL);
}


void __fastcall FriendRootComponent__SelectShowOffer(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *operationItemListViewManager; // x0
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  FriendOperationItemListViewManager_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  System_Action_o *v9; // x21

  if ( (byte_4217141 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_FriendRootComponent_OnMoveEnd__, v3);
    byte_4217141 = 1;
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
          v9 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v7, v8),
          System_Action___ctor(v9, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0LL),
          !v6) )
    {
LABEL_11:
      sub_B0D97C(operationItemListViewManager);
    }
    FriendOperationItemListViewManager__SetMode_29792744(v6, 1, v9, 0LL);
  }
}


void __fastcall FriendRootComponent__SelectShowOffered(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Component_o *operationItemListViewManager; // x0
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  FriendOperationItemListViewManager_o *v7; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  System_Action_o *v10; // x21

  if ( (byte_4217143 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_FriendRootComponent_OnMoveEnd__, v3);
    sub_B0D8A4(&StringLiteral_5492/*"END_ACTION"*/, v4);
    byte_4217143 = 1;
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
            v7 = this->fields.operationItemListViewManager;
            v10 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v8, v9);
            System_Action___ctor(v10, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0LL);
            if ( v7 )
            {
              FriendOperationItemListViewManager__SetMode_29792744(v7, 1, v10, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_12:
    sub_B0D97C(operationItemListViewManager);
  }
  operationItemListViewManager = (UnityEngine_Component_o *)this->fields.myFSM;
  if ( !operationItemListViewManager )
    goto LABEL_12;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)operationItemListViewManager, (System_String_o *)StringLiteral_5492/*"END_ACTION"*/, 0LL);
}


void __fastcall FriendRootComponent__SelectShowSearch(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *operationItemListViewManager; // x0
  FriendSearchMenu_o *friendSearchMenu; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  System_Action_o *v8; // x21
  const MethodInfo *v9; // x2
  FriendOperationItemListViewManager_o *v10; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  System_Action_o *v13; // x21

  if ( (byte_4217145 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_FriendRootComponent_OnMoveEnd__, v3);
    byte_4217145 = 1;
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
    v8 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v6, v7);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0LL);
    if ( !friendSearchMenu
      || (FriendSearchMenu__Close_29160720(friendSearchMenu, v8, v9),
          v10 = this->fields.operationItemListViewManager,
          v13 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v11, v12),
          System_Action___ctor(v13, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0LL),
          !v10) )
    {
LABEL_11:
      sub_B0D97C(operationItemListViewManager);
    }
    FriendOperationItemListViewManager__SetMode_29792744(v10, 1, v13, 0LL);
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
  CommonUI_o *Instance; // x21
  __int64 v9; // x1
  __int64 v10; // x2
  ServantStatusDialog_EndDelegate_o *v11; // x22
  __int64 v12; // x0
  int32_t v13; // w1

  if ( (byte_421714B & 1) == 0 )
  {
    sub_B0D8A4(&ServantStatusDialog_EndDelegate_TypeInfo, servantLeaderInfo);
    sub_B0D8A4(&Method_FriendRootComponent_EndShowServant__, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_421714B = 1;
  }
  state = this->fields.state;
  if ( state <= 0x13 && ((1 << state) & 0x84210) != 0 )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v11 = (ServantStatusDialog_EndDelegate_o *)sub_B0D974(ServantStatusDialog_EndDelegate_TypeInfo, v9, v10);
    ServantStatusDialog_EndDelegate___ctor(v11, (Il2CppObject *)this, Method_FriendRootComponent_EndShowServant__, 0LL);
    if ( !Instance )
      sub_B0D97C(v12);
    if ( state == 4 )
      v13 = 4;
    else
      v13 = 5;
    CommonUI__OpenServantStatusDialog_17029768(Instance, v13, servantLeaderInfo, v11, 0LL);
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
  CommonUI_o *Instance; // x22
  __int64 v10; // x1
  __int64 v11; // x2
  ServantStatusDialog_EndDelegate_o *v12; // x23
  __int64 v13; // x0

  if ( (byte_4217175 & 1) == 0 )
  {
    sub_B0D8A4(&ServantStatusDialog_EndDelegate_TypeInfo, equipInfo);
    sub_B0D8A4(&Method_FriendRootComponent_EndShowServantEquip__, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    byte_4217175 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = (ServantStatusDialog_EndDelegate_o *)sub_B0D974(ServantStatusDialog_EndDelegate_TypeInfo, v10, v11);
  ServantStatusDialog_EndDelegate___ctor(
    v12,
    (Il2CppObject *)this,
    Method_FriendRootComponent_EndShowServantEquip__,
    0LL);
  if ( !Instance )
    sub_B0D97C(v13);
  CommonUI__OpenServantEquipStatusDialog_17032132(Instance, statusKind, equipInfo, v12, 0LL, 0LL);
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

  if ( (byte_4217186 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_8739/*"MENU_DECIDE"*/, isDecide);
    sub_B0D8A4(&StringLiteral_8738/*"MENU_CANCEL"*/, v5);
    byte_4217186 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_B0D97C(0LL);
  v7 = &StringLiteral_8739/*"MENU_DECIDE"*/;
  if ( !isDecide )
    v7 = &StringLiteral_8738/*"MENU_CANCEL"*/;
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

  if ( (byte_4217180 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_8739/*"MENU_DECIDE"*/, isDecide);
    sub_B0D8A4(&StringLiteral_8738/*"MENU_CANCEL"*/, v5);
    byte_4217180 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_B0D97C(0LL);
  v7 = &StringLiteral_8739/*"MENU_DECIDE"*/;
  if ( !isDecide )
    v7 = &StringLiteral_8738/*"MENU_CANCEL"*/;
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

  if ( (byte_421717C & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_8739/*"MENU_DECIDE"*/, isDecide);
    sub_B0D8A4(&StringLiteral_8738/*"MENU_CANCEL"*/, v5);
    byte_421717C = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_B0D97C(0LL);
  v7 = &StringLiteral_8739/*"MENU_DECIDE"*/;
  if ( !isDecide )
    v7 = &StringLiteral_8738/*"MENU_CANCEL"*/;
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

  if ( (byte_421717E & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_8739/*"MENU_DECIDE"*/, isDecide);
    sub_B0D8A4(&StringLiteral_8738/*"MENU_CANCEL"*/, v5);
    byte_421717E = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_B0D97C(0LL);
  v7 = &StringLiteral_8739/*"MENU_DECIDE"*/;
  if ( !isDecide )
    v7 = &StringLiteral_8738/*"MENU_CANCEL"*/;
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

  if ( (byte_421717B & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_8739/*"MENU_DECIDE"*/, isDecide);
    sub_B0D8A4(&StringLiteral_8738/*"MENU_CANCEL"*/, v5);
    byte_421717B = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_B0D97C(0LL);
  v7 = &StringLiteral_8739/*"MENU_DECIDE"*/;
  if ( !isDecide )
    v7 = &StringLiteral_8738/*"MENU_CANCEL"*/;
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

  if ( (byte_421717D & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_8739/*"MENU_DECIDE"*/, isDecide);
    sub_B0D8A4(&StringLiteral_8738/*"MENU_CANCEL"*/, v5);
    byte_421717D = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_B0D97C(0LL);
  v7 = &StringLiteral_8739/*"MENU_DECIDE"*/;
  if ( !isDecide )
    v7 = &StringLiteral_8738/*"MENU_CANCEL"*/;
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

  if ( (byte_421717F & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_8739/*"MENU_DECIDE"*/, isDecide);
    sub_B0D8A4(&StringLiteral_8738/*"MENU_CANCEL"*/, v5);
    byte_421717F = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_B0D97C(0LL);
  v7 = &StringLiteral_8739/*"MENU_DECIDE"*/;
  if ( !isDecide )
    v7 = &StringLiteral_8738/*"MENU_CANCEL"*/;
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)*v7, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendRootComponent__SetActiveModeKindButtons(
        FriendRootComponent_o *this,
        bool isActive,
        const MethodInfo *method)
{
  float v5; // s0
  float v6; // s1
  float v7; // s2
  UnityEngine_GameObject_o *modeButtonParent; // x0
  float v9; // s8
  float v10; // s9
  float v11; // s10
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Vector3_o v13; // 0:s1.4,4:s2.4,8:s3.4

  if ( ((this->fields.isActiveModeKindButtons ^ isActive) & 1) != 0 )
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
      sub_B0D97C(modeButtonParent);
    }
    LODWORD(modeButtonParent[1].klass) = 3;
    this->fields.isActiveModeKindButtons = isActive;
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
  const MethodInfo *v20; // x4
  FriendSearchMenu_o *friendSearchMenu; // x20
  __int64 v22; // x1
  __int64 v23; // x2
  FriendSearchMenu_CallbackFunc_o *v24; // x21
  const MethodInfo *v25; // x3

  v3 = this;
  if ( (byte_4217149 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&FriendSearchResultMenu_CallbackFunc_TypeInfo, v4);
    sub_B0D8A4(&FriendSearchMenu_CallbackFunc_TypeInfo, v5);
    sub_B0D8A4(&Method_FriendRootComponent_OnSelectOffer__, v6);
    sub_B0D8A4(&Method_FriendRootComponent_OnSelectSearchFriend__, v7);
    sub_B0D8A4(&Method_FriendRootComponent_ShowSearchResult__, v8);
    this = (FriendRootComponent_o *)sub_B0D8A4(&StringLiteral_5492/*"END_ACTION"*/, v9);
    byte_4217149 = 1;
  }
  if ( v3->fields.state == 23 )
  {
    friendSearchResultMenu = v3->fields.friendSearchResultMenu;
    if ( !friendSearchResultMenu )
      goto LABEL_14;
    if ( friendSearchResultMenu->fields.isOpen )
    {
      v11 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, method, v2);
      System_Action___ctor(v11, (Il2CppObject *)v3, Method_FriendRootComponent_ShowSearchResult__, 0LL);
      FriendSearchResultMenu__Close_29162868(friendSearchResultMenu, v11, v12);
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
    v19 = (FriendSearchResultMenu_CallbackFunc_o *)sub_B0D974(FriendSearchResultMenu_CallbackFunc_TypeInfo, v13, v14);
    FriendSearchResultMenu_CallbackFunc___ctor(v19, (Il2CppObject *)v3, Method_FriendRootComponent_OnSelectOffer__, 0LL);
    if ( !v17
      || (FriendSearchResultMenu__Open(v17, selectFriendEntity, currentCursor, v19, v20),
          friendSearchMenu = v3->fields.friendSearchMenu,
          v24 = (FriendSearchMenu_CallbackFunc_o *)sub_B0D974(FriendSearchMenu_CallbackFunc_TypeInfo, v22, v23),
          FriendSearchMenu_CallbackFunc___ctor(
            v24,
            (Il2CppObject *)v3,
            Method_FriendRootComponent_OnSelectSearchFriend__,
            0LL),
          !friendSearchMenu)
      || (FriendSearchMenu__Open(friendSearchMenu, v24, 0, v25),
          (this = (FriendRootComponent_o *)v3->fields.myFSM) == 0LL) )
    {
LABEL_14:
      sub_B0D97C(this);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_5492/*"END_ACTION"*/, 0LL);
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
  const MethodInfo *v12; // x4
  FriendSearchMenu_o *friendSearchMenu; // x20
  FriendSearchMenu_CallbackFunc_o *v14; // x21
  const MethodInfo *v15; // x3

  v3 = this;
  if ( (byte_421714A & 1) == 0 )
  {
    sub_B0D8A4(&FriendSearchResultMenu_CallbackFunc_TypeInfo, method);
    sub_B0D8A4(&FriendSearchMenu_CallbackFunc_TypeInfo, v4);
    sub_B0D8A4(&Method_FriendRootComponent_OnSelectOffer__, v5);
    this = (FriendRootComponent_o *)sub_B0D8A4(&Method_FriendRootComponent_OnSelectSearchFriend__, v6);
    byte_421714A = 1;
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
      v11 = (FriendSearchResultMenu_CallbackFunc_o *)sub_B0D974(
                                                       FriendSearchResultMenu_CallbackFunc_TypeInfo,
                                                       method,
                                                       v2);
      FriendSearchResultMenu_CallbackFunc___ctor(
        v11,
        (Il2CppObject *)v3,
        Method_FriendRootComponent_OnSelectOffer__,
        0LL);
      FriendSearchResultMenu__Open(friendSearchResultMenu, selectFriendEntity, currentCursor, v11, v12);
    }
    else
    {
      FriendSearchResultMenu__Close_29162868(v3->fields.friendSearchResultMenu, 0LL, v2);
    }
  }
  friendSearchMenu = v3->fields.friendSearchMenu;
  v14 = (FriendSearchMenu_CallbackFunc_o *)sub_B0D974(FriendSearchMenu_CallbackFunc_TypeInfo, method, v2);
  FriendSearchMenu_CallbackFunc___ctor(v14, (Il2CppObject *)v3, Method_FriendRootComponent_OnSelectSearchFriend__, 0LL);
  if ( !friendSearchMenu )
LABEL_11:
    sub_B0D97C(this);
  FriendSearchMenu__Open(friendSearchMenu, v14, 0, v15);
}


void __fastcall FriendRootComponent___OnClickBack_b__96_0(
        FriendRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x2
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v10; // x20
  const MethodInfo *v11; // x2

  v4 = (Il2CppObject *)this;
  if ( (byte_4217196 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_string___ctor__, result);
    sub_B0D8A4(&System_Action_string__TypeInfo, v5);
    sub_B0D8A4(&Method_FriendRootComponent__OnClickBack_b__96_1__, v6);
    this = (FriendRootComponent_o *)sub_B0D8A4(&StringLiteral_21287/*"ok"*/, v7);
    byte_4217196 = 1;
  }
  if ( !result )
    sub_B0D97C(this);
  if ( System_String__Equals_43837244(result, (System_String_o *)StringLiteral_21287/*"ok"*/, 0LL) )
  {
    v10 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                                 System_Action_string__TypeInfo,
                                                                                 v8,
                                                                                 v9);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v10,
      v4,
      Method_FriendRootComponent__OnClickBack_b__96_1__,
      (const MethodInfo_246EA3C *)Method_System_Action_string___ctor__);
    FriendRootComponent__FriendLockRequst((FriendRootComponent_o *)v4, (System_Action_string__o *)v10, v11);
  }
}


void __fastcall FriendRootComponent___OnClickBack_b__96_1(
        FriendRootComponent_o *this,
        System_String_o *res,
        const MethodInfo *method)
{
  FriendRootComponent_o *v4; // x19
  __int64 v5; // x1
  const MethodInfo *v6; // x1

  v4 = this;
  if ( (byte_4217197 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_21287/*"ok"*/, res);
    this = (FriendRootComponent_o *)sub_B0D8A4(&StringLiteral_3055/*"CLICK_BACK"*/, v5);
    byte_4217197 = 1;
  }
  if ( !res )
    goto LABEL_9;
  if ( System_String__Equals_43837244(res, (System_String_o *)StringLiteral_21287/*"ok"*/, 0LL) )
  {
    this = (FriendRootComponent_o *)v4->fields.friendSearchMenu;
    if ( this )
    {
      FriendSearchMenu__BlockInput((FriendSearchMenu_o *)this, v6);
      this = (FriendRootComponent_o *)v4->fields.myFSM;
      if ( this )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3055/*"CLICK_BACK"*/, 0LL);
        return;
      }
    }
LABEL_9:
    sub_B0D97C(this);
  }
}


void __fastcall FriendRootComponent___OnClickModeUserDetail_b__98_0(
        FriendRootComponent_o *this,
        System_String_o *res,
        const MethodInfo *method)
{
  FriendRootComponent_o *v4; // x19
  __int64 v5; // x1
  const MethodInfo *v6; // x1

  v4 = this;
  if ( (byte_421719A & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, res);
    this = (FriendRootComponent_o *)sub_B0D8A4(&StringLiteral_21287/*"ok"*/, v5);
    byte_421719A = 1;
  }
  if ( !res )
    sub_B0D97C(this);
  if ( System_String__Equals_43837244(res, (System_String_o *)StringLiteral_21287/*"ok"*/, 0LL) )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v4->fields.currentModeKind = 0;
    FriendRootComponent__RefreshInfo(v4, v6);
  }
}


void __fastcall FriendRootComponent___OnClickTabFriend_b__105_0(
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
  FriendRootComponent_o *v11; // x0
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x1
  struct ClassButtonControlComponent_o *classButtonControl; // x8

  v4 = this;
  if ( (byte_421719B & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, res);
    sub_B0D8A4(&StringLiteral_21287/*"ok"*/, v5);
    this = (FriendRootComponent_o *)sub_B0D8A4(&StringLiteral_3095/*"CLICK_TAB"*/, v6);
    byte_421719B = 1;
  }
  if ( !res )
    goto LABEL_25;
  this = (FriendRootComponent_o *)System_String__Equals_43837244(res, (System_String_o *)StringLiteral_21287/*"ok"*/, 0LL);
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
    FriendRootComponent__set_tabKind(v11, 0, v12);
    FriendRootComponent__RefreshTab(v4, v13);
    classButtonControl = v4->fields.classButtonControl;
    if ( classButtonControl )
    {
      classButtonControl->fields.updateEnable = 0;
      this = (FriendRootComponent_o *)v4->fields.myFSM;
      if ( this )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3095/*"CLICK_TAB"*/, 0LL);
        return;
      }
    }
LABEL_25:
    sub_B0D97C(this);
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
      v9 = v4->fields.friendSearchResultMenu;
      if ( !v9 )
        goto LABEL_25;
      v10 = v9->fields.classButtonControl;
      if ( !v10 )
        goto LABEL_25;
      this = (FriendRootComponent_o *)v4->fields.classButtonControl;
      if ( !this )
        goto LABEL_25;
      ClassButtonControlComponent__setCursor((ClassButtonControlComponent_o *)this, v10->fields.currentCursor, 0LL);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x2
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v10; // x20
  const MethodInfo *v11; // x2

  v4 = (Il2CppObject *)this;
  if ( (byte_421719C & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_string___ctor__, result);
    sub_B0D8A4(&System_Action_string__TypeInfo, v5);
    sub_B0D8A4(&Method_FriendRootComponent__OnClickTabOffered_b__106_1__, v6);
    this = (FriendRootComponent_o *)sub_B0D8A4(&StringLiteral_21287/*"ok"*/, v7);
    byte_421719C = 1;
  }
  if ( !result )
    sub_B0D97C(this);
  if ( System_String__Equals_43837244(result, (System_String_o *)StringLiteral_21287/*"ok"*/, 0LL) )
  {
    v10 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                                 System_Action_string__TypeInfo,
                                                                                 v8,
                                                                                 v9);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v10,
      v4,
      Method_FriendRootComponent__OnClickTabOffered_b__106_1__,
      (const MethodInfo_246EA3C *)Method_System_Action_string___ctor__);
    FriendRootComponent__FriendLockRequst((FriendRootComponent_o *)v4, (System_Action_string__o *)v10, v11);
  }
}


void __fastcall FriendRootComponent___OnClickTabOffered_b__106_1(
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
  FriendRootComponent_o *v11; // x0
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x1
  struct ClassButtonControlComponent_o *classButtonControl; // x8

  v4 = this;
  if ( (byte_421719D & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, res);
    sub_B0D8A4(&StringLiteral_21287/*"ok"*/, v5);
    this = (FriendRootComponent_o *)sub_B0D8A4(&StringLiteral_3095/*"CLICK_TAB"*/, v6);
    byte_421719D = 1;
  }
  if ( !res )
    goto LABEL_25;
  this = (FriendRootComponent_o *)System_String__Equals_43837244(res, (System_String_o *)StringLiteral_21287/*"ok"*/, 0LL);
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
    FriendRootComponent__set_tabKind(v11, 1, v12);
    FriendRootComponent__RefreshTab(v4, v13);
    classButtonControl = v4->fields.classButtonControl;
    if ( classButtonControl )
    {
      classButtonControl->fields.updateEnable = 0;
      this = (FriendRootComponent_o *)v4->fields.myFSM;
      if ( this )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3095/*"CLICK_TAB"*/, 0LL);
        return;
      }
    }
LABEL_25:
    sub_B0D97C(this);
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
      v9 = v4->fields.friendSearchResultMenu;
      if ( !v9 )
        goto LABEL_25;
      v10 = v9->fields.classButtonControl;
      if ( !v10 )
        goto LABEL_25;
      this = (FriendRootComponent_o *)v4->fields.classButtonControl;
      if ( !this )
        goto LABEL_25;
      ClassButtonControlComponent__setCursor((ClassButtonControlComponent_o *)this, v10->fields.currentCursor, 0LL);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x2
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v10; // x20
  const MethodInfo *v11; // x2

  v4 = (Il2CppObject *)this;
  if ( (byte_421719E & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_string___ctor__, result);
    sub_B0D8A4(&System_Action_string__TypeInfo, v5);
    sub_B0D8A4(&Method_FriendRootComponent__OnClickTabSearch_b__107_1__, v6);
    this = (FriendRootComponent_o *)sub_B0D8A4(&StringLiteral_21287/*"ok"*/, v7);
    byte_421719E = 1;
  }
  if ( !result )
    sub_B0D97C(this);
  if ( System_String__Equals_43837244(result, (System_String_o *)StringLiteral_21287/*"ok"*/, 0LL) )
  {
    v10 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                                 System_Action_string__TypeInfo,
                                                                                 v8,
                                                                                 v9);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v10,
      v4,
      Method_FriendRootComponent__OnClickTabSearch_b__107_1__,
      (const MethodInfo_246EA3C *)Method_System_Action_string___ctor__);
    FriendRootComponent__FriendLockRequst((FriendRootComponent_o *)v4, (System_Action_string__o *)v10, v11);
  }
}


void __fastcall FriendRootComponent___OnClickTabSearch_b__107_1(
        FriendRootComponent_o *this,
        System_String_o *res,
        const MethodInfo *method)
{
  FriendRootComponent_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  int state; // w8
  FriendRootComponent_o *v8; // x0
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x1
  struct ClassButtonControlComponent_o *classButtonControl; // x8

  v4 = this;
  if ( (byte_421719F & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, res);
    sub_B0D8A4(&StringLiteral_21287/*"ok"*/, v5);
    this = (FriendRootComponent_o *)sub_B0D8A4(&StringLiteral_3095/*"CLICK_TAB"*/, v6);
    byte_421719F = 1;
  }
  if ( !res )
    goto LABEL_18;
  if ( !System_String__Equals_43837244(res, (System_String_o *)StringLiteral_21287/*"ok"*/, 0LL) )
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
    FriendRootComponent__set_tabKind(v8, 2, v9);
    FriendRootComponent__RefreshTab(v4, v10);
    classButtonControl = v4->fields.classButtonControl;
    if ( classButtonControl )
    {
      classButtonControl->fields.updateEnable = 0;
      this = (FriendRootComponent_o *)v4->fields.myFSM;
      if ( this )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3095/*"CLICK_TAB"*/, 0LL);
        return;
      }
    }
LABEL_18:
    sub_B0D97C(this);
  }
}


void __fastcall FriendRootComponent___RequestFollowRemove_b__139_0(
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
  FriendOperationItemListViewItem_o *Item; // x0
  struct OtherUserGameEntity_o *otherUserGameEntity; // x21
  __int64 v13; // x1
  __int64 v14; // x2
  NetworkManager_ResultCallbackFunc_o *v15; // x20

  v4 = this;
  if ( (byte_42171A0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_FriendRootComponent_EndRequestFollowRemove__, res);
    sub_B0D8A4(&Method_NetworkManager_getRequest_FollowdRemoveRequest___, v5);
    sub_B0D8A4(&NetworkManager_TypeInfo, v6);
    sub_B0D8A4(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_B0D8A4(&StringLiteral_21287/*"ok"*/, v9);
    this = (FriendRootComponent_o *)sub_B0D8A4(&StringLiteral_11104/*"REQUEST_NG"*/, v10);
    byte_42171A0 = 1;
  }
  if ( !res )
    goto LABEL_16;
  if ( System_String__Equals_43837244(res, (System_String_o *)StringLiteral_21287/*"ok"*/, 0LL) )
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
        this = (FriendRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( this )
        {
          CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)this, 0, 0LL);
          v15 = (NetworkManager_ResultCallbackFunc_o *)sub_B0D974(NetworkManager_ResultCallbackFunc_TypeInfo, v13, v14);
          NetworkManager_ResultCallbackFunc___ctor(
            v15,
            (Il2CppObject *)v4,
            Method_FriendRootComponent_EndRequestFollowRemove__,
            0LL);
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          this = (FriendRootComponent_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                            v15,
                                            (const MethodInfo_2049D98 *)Method_NetworkManager_getRequest_FollowdRemoveRequest___);
          if ( this )
          {
            FollowdRemoveRequest__beginRequest((FollowdRemoveRequest_o *)this, otherUserGameEntity->fields.userId, 0LL);
            return;
          }
        }
LABEL_16:
        sub_B0D97C(this);
      }
    }
  }
  this = (FriendRootComponent_o *)v4->fields.myFSM;
  if ( !this )
    goto LABEL_16;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11104/*"REQUEST_NG"*/, 0LL);
}


void __fastcall FriendRootComponent___RequestFriendOffer2_b__84_0(
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
  FriendOperationItemListViewItem_o *Item; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  struct OtherUserGameEntity_o *otherUserGameEntity; // x21
  NetworkManager_ResultCallbackFunc_o *v14; // x20

  v4 = this;
  if ( (byte_4217194 & 1) == 0 )
  {
    sub_B0D8A4(&Method_FriendRootComponent_EndRequestFriend__, res);
    sub_B0D8A4(&Method_NetworkManager_getRequest_FriendOfferRequest___, v5);
    sub_B0D8A4(&NetworkManager_TypeInfo, v6);
    sub_B0D8A4(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    sub_B0D8A4(&StringLiteral_21287/*"ok"*/, v8);
    this = (FriendRootComponent_o *)sub_B0D8A4(&StringLiteral_11104/*"REQUEST_NG"*/, v9);
    byte_4217194 = 1;
  }
  if ( !res )
    goto LABEL_15;
  if ( System_String__Equals_43837244(res, (System_String_o *)StringLiteral_21287/*"ok"*/, 0LL) )
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
        v14 = (NetworkManager_ResultCallbackFunc_o *)sub_B0D974(NetworkManager_ResultCallbackFunc_TypeInfo, v11, v12);
        NetworkManager_ResultCallbackFunc___ctor(
          v14,
          (Il2CppObject *)v4,
          Method_FriendRootComponent_EndRequestFriend__,
          0LL);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        this = (FriendRootComponent_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                          v14,
                                          (const MethodInfo_2049D98 *)Method_NetworkManager_getRequest_FriendOfferRequest___);
        if ( this )
        {
          FriendOfferRequest__beginRequest((FriendOfferRequest_o *)this, otherUserGameEntity->fields.userId, 0LL);
          return;
        }
LABEL_15:
        sub_B0D97C(this);
      }
    }
  }
  this = (FriendRootComponent_o *)v4->fields.myFSM;
  if ( !this )
    goto LABEL_15;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11104/*"REQUEST_NG"*/, 0LL);
}


void __fastcall FriendRootComponent___RequestFriendRemove_b__88_0(
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
  FriendOperationItemListViewItem_o *Item; // x0
  struct OtherUserGameEntity_o *otherUserGameEntity; // x21
  __int64 v13; // x1
  __int64 v14; // x2
  NetworkManager_ResultCallbackFunc_o *v15; // x20
  const MethodInfo *v16; // x2

  v4 = this;
  if ( (byte_4217195 & 1) == 0 )
  {
    sub_B0D8A4(&Method_FriendRootComponent_EndRequestFriend__, res);
    sub_B0D8A4(&Method_NetworkManager_getRequest_FriendRemoveRequest___, v5);
    sub_B0D8A4(&NetworkManager_TypeInfo, v6);
    sub_B0D8A4(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_B0D8A4(&StringLiteral_21287/*"ok"*/, v9);
    this = (FriendRootComponent_o *)sub_B0D8A4(&StringLiteral_11104/*"REQUEST_NG"*/, v10);
    byte_4217195 = 1;
  }
  if ( !res )
    goto LABEL_16;
  if ( System_String__Equals_43837244(res, (System_String_o *)StringLiteral_21287/*"ok"*/, 0LL) )
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
        this = (FriendRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( this )
        {
          CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)this, 0, 0LL);
          v15 = (NetworkManager_ResultCallbackFunc_o *)sub_B0D974(NetworkManager_ResultCallbackFunc_TypeInfo, v13, v14);
          NetworkManager_ResultCallbackFunc___ctor(
            v15,
            (Il2CppObject *)v4,
            Method_FriendRootComponent_EndRequestFriend__,
            0LL);
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          this = (FriendRootComponent_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                            v15,
                                            (const MethodInfo_2049D98 *)Method_NetworkManager_getRequest_FriendRemoveRequest___);
          if ( this )
          {
            FriendRemoveRequest__beginRequest((FriendRemoveRequest_o *)this, otherUserGameEntity->fields.userId, v16);
            return;
          }
        }
LABEL_16:
        sub_B0D97C(this);
      }
    }
  }
  this = (FriendRootComponent_o *)v4->fields.myFSM;
  if ( !this )
    goto LABEL_16;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11104/*"REQUEST_NG"*/, 0LL);
}


void __fastcall FriendRootComponent___afterMainMenubarSelect_b__97_0(
        FriendRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  FriendRootComponent_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x2
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v11; // x20
  const MethodInfo *v12; // x2

  v4 = this;
  if ( (byte_4217198 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_string___ctor__, result);
    sub_B0D8A4(&System_Action_string__TypeInfo, v5);
    sub_B0D8A4(&Method_FriendRootComponent__afterMainMenubarSelect_b__97_1__, v6);
    sub_B0D8A4(&StringLiteral_21287/*"ok"*/, v7);
    this = (FriendRootComponent_o *)sub_B0D8A4(&StringLiteral_11104/*"REQUEST_NG"*/, v8);
    byte_4217198 = 1;
  }
  if ( !result )
    goto LABEL_8;
  if ( System_String__Equals_43837244(result, (System_String_o *)StringLiteral_21287/*"ok"*/, 0LL) )
  {
    v11 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                                 System_Action_string__TypeInfo,
                                                                                 v9,
                                                                                 v10);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v11,
      (Il2CppObject *)v4,
      Method_FriendRootComponent__afterMainMenubarSelect_b__97_1__,
      (const MethodInfo_246EA3C *)Method_System_Action_string___ctor__);
    FriendRootComponent__FriendLockRequst(v4, (System_Action_string__o *)v11, v12);
    return;
  }
  this = (FriendRootComponent_o *)v4->fields.myFSM;
  if ( !this )
LABEL_8:
    sub_B0D97C(this);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11104/*"REQUEST_NG"*/, 0LL);
}


void __fastcall FriendRootComponent___afterMainMenubarSelect_b__97_1(
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
  if ( (byte_4217199 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_11106/*"REQUEST_OK"*/, res);
    sub_B0D8A4(&StringLiteral_21287/*"ok"*/, v5);
    this = (FriendRootComponent_o *)sub_B0D8A4(&StringLiteral_11104/*"REQUEST_NG"*/, v6);
    byte_4217199 = 1;
  }
  if ( !res
    || (this = (FriendRootComponent_o *)System_String__Equals_43837244(res, (System_String_o *)StringLiteral_21287/*"ok"*/, 0LL),
        (myFSM = v4->fields.myFSM) == 0LL) )
  {
    sub_B0D97C(this);
  }
  if ( ((unsigned __int8)this & 1) != 0 )
    v8 = &StringLiteral_11106/*"REQUEST_OK"*/;
  else
    v8 = &StringLiteral_11104/*"REQUEST_NG"*/;
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)*v8, 0LL);
}


void __fastcall FriendRootComponent__afterMainMenubarSelect(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  FriendRootComponent_messageRequestCallback_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_421716A & 1) == 0 )
  {
    sub_B0D8A4(&Method_FriendRootComponent__afterMainMenubarSelect_b__97_0__, method);
    sub_B0D8A4(&FriendRootComponent_messageRequestCallback_TypeInfo, v4);
    byte_421716A = 1;
  }
  v5 = (FriendRootComponent_messageRequestCallback_o *)sub_B0D974(
                                                         FriendRootComponent_messageRequestCallback_TypeInfo,
                                                         method,
                                                         v2);
  FriendRootComponent_messageRequestCallback___ctor(
    v5,
    (Il2CppObject *)this,
    Method_FriendRootComponent__afterMainMenubarSelect_b__97_0__,
    0LL);
  FriendRootComponent__messageDispChangeRequest(this, v5, v6);
}


void __fastcall FriendRootComponent__beginFinish(FriendRootComponent_o *this, const MethodInfo *method)
{
  FriendRootComponent_o *v2; // x19
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x8
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  v2 = this;
  if ( (byte_421713A & 1) == 0 )
  {
    this = (FriendRootComponent_o *)sub_B0D8A4(&RandomLimitCountManager_TypeInfo, method);
    byte_421713A = 1;
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
    || (FriendSearchMenu__Init((FriendSearchMenu_o *)this, v4),
        (this = (FriendRootComponent_o *)v2->fields.friendSearchResultMenu) == 0LL)
    || (FriendSearchResultMenu__Init((FriendSearchResultMenu_o *)this, v5),
        (this = (FriendRootComponent_o *)v2->fields.friendWarningDialog) == 0LL)
    || (FriendWarningDialog__Init((FriendWarningDialog_o *)this, v6),
        (this = (FriendRootComponent_o *)v2->fields.operationItemListViewManager) == 0LL)
    || (this = (FriendRootComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL )
  {
LABEL_15:
    sub_B0D97C(this);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  v2->fields.state = 0;
  v2->fields.selectFriendEntity = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&v2->fields.selectFriendEntity, 0LL, v7, v8, v9, v10, v11, v12);
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
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

  if ( (byte_4217136 & 1) == 0 )
  {
    sub_B0D8A4(&ClassButtonControlComponent_CallbackFunc_TypeInfo, method);
    sub_B0D8A4(&Method_FriendRootComponent_changeClass__, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4);
    byte_4217136 = 1;
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
  v11 = (ClassButtonControlComponent_CallbackFunc_o *)sub_B0D974(
                                                        ClassButtonControlComponent_CallbackFunc_TypeInfo,
                                                        v9,
                                                        v10);
  ClassButtonControlComponent_CallbackFunc___ctor(
    v11,
    (Il2CppObject *)this,
    Method_FriendRootComponent_changeClass__,
    0LL);
  if ( !classButtonControl
    || (ClassButtonControlComponent__init(classButtonControl, v11, 0, 0, 0, 0LL),
        (bgTxtSprite = (UnityEngine_Component_o *)this->fields.operationItemListViewManager) == 0LL)
    || (FriendOperationItemListViewManager__SetupClassBoardInfo(
          (FriendOperationItemListViewManager_o *)bgTxtSprite,
          0LL),
        (bgTxtSprite = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
LABEL_9:
    sub_B0D97C(bgTxtSprite);
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
  __int64 v7; // x10
  FriendOperationItemListViewManager_o *Instance; // x0
  CommonUI_o *v9; // x20
  const MethodInfo *v10; // x1

  if ( (byte_421713B & 1) == 0 )
  {
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, data);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B0D8A4(&SupportInfoJump_TypeInfo, v6);
    byte_421713B = 1;
  }
  if ( data
    && (v7 = *(&SupportInfoJump_TypeInfo->_2.bitflags2 + 1), *(&data->klass->_2.bitflags2 + 1) >= (unsigned int)v7)
    && (SupportInfoJump_c *)data->klass->_2.typeHierarchy[v7 - 1] == SupportInfoJump_TypeInfo )
  {
    this->fields.isReturnSupport = 1;
    Instance = (FriendOperationItemListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v9 = (CommonUI_o *)Instance;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    }
    if ( !v9
      || (CommonUI__maskFadein(v9, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL),
          FriendRootComponent__RefreshTab(this, v10),
          (Instance = this->fields.operationItemListViewManager) == 0LL) )
    {
      sub_B0D97C(Instance);
    }
    FriendOperationItemListViewManager__SetMode_29791776(Instance, 2, 0LL);
    SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 7, 39, 0LL);
    MainMenuBar__setMenuActive(1, 0LL, 0LL);
    SceneRootComponent__sendMessageStartUp((SceneRootComponent_o *)this, 0LL);
  }
  else
  {
    SceneRootComponent__beginResume_16655884((SceneRootComponent_o *)this, 0LL);
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
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  __int64 v17; // x1
  __int64 v18; // x2
  NetworkManager_ResultCallbackFunc_o *v19; // x20

  if ( (byte_4217137 & 1) == 0 )
  {
    sub_B0D8A4(&BgmManager_TypeInfo, method);
    sub_B0D8A4(&Method_FriendRootComponent_EndFriendRequest__, v3);
    sub_B0D8A4(&Method_NetworkManager_getRequest_FriendTopRequest___, v4);
    sub_B0D8A4(&NetworkManager_TypeInfo, v5);
    sub_B0D8A4(&RandomLimitCountManager_TypeInfo, v6);
    sub_B0D8A4(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    sub_B0D8A4(&SoundManager_TypeInfo, v8);
    byte_4217137 = 1;
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
  TitleInfoControl__setBackBtnSprite_17439696(titleInfo, 1, 0, 0, 0LL);
  this->fields.state = 0;
  this->fields.currentModeKind = 0;
  this->fields.selectFriendEntity = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.selectFriendEntity, 0LL, v11, v12, v13, v14, v15, v16);
  v19 = (NetworkManager_ResultCallbackFunc_o *)sub_B0D974(NetworkManager_ResultCallbackFunc_TypeInfo, v17, v18);
  NetworkManager_ResultCallbackFunc___ctor(
    v19,
    (Il2CppObject *)this,
    Method_FriendRootComponent_EndFriendRequest__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  titleInfo = (TitleInfoControl_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                      v19,
                                      (const MethodInfo_2049D98 *)Method_NetworkManager_getRequest_FriendTopRequest___);
  if ( !titleInfo )
LABEL_19:
    sub_B0D97C(titleInfo);
  RequestBase__beginRequest((RequestBase_o *)titleInfo, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendRootComponent__changeClass(
        FriendRootComponent_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0

  if ( (byte_4217174 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, *(_QWORD *)&classPos);
    byte_4217174 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    sub_B0D97C(0LL);
  FriendOperationItemListViewManager__SetClassId(operationItemListViewManager, classPos, 0LL);
}


int32_t __fastcall FriendRootComponent__get_tabKind(FriendRootComponent_o *this, const MethodInfo *method)
{
  FriendRootComponent_c *v2; // x0

  if ( (byte_4217135 & 1) == 0 )
  {
    sub_B0D8A4(&FriendRootComponent_TypeInfo, method);
    byte_4217135 = 1;
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x20
  ListViewManager_o *operationItemListViewManager; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  FriendRootComponent_messageRequestCallback_o **v22; // x22
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  int32_t ItemSum; // w23
  __int64 v30; // x1
  __int64 v31; // x2
  System_Collections_Generic_List_long__o *v32; // x21
  __int64 v33; // x1
  __int64 v34; // x2
  System_Collections_Generic_List_long__o *v35; // x22
  __int64 v36; // x1
  __int64 v37; // x2
  int32_t v38; // w24
  struct System_Collections_Generic_List_UIDragDropListViewSurface__o *dropList; // x8
  const MethodInfo_2FB5EB0 *v40; // x2
  System_Collections_Generic_List_long__o *v41; // x0
  NetworkManager_ResultCallbackFunc_o *v42; // x19
  FriendMessageHideSyncRequest_o *v43; // x19
  System_Int64_array *v44; // x20

  if ( (byte_4217172 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__Add__, callback);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__ToArray__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long___ctor__, v6);
    sub_B0D8A4(&System_Collections_Generic_List_long__TypeInfo, v7);
    sub_B0D8A4(&Method_NetworkManager_getRequest_FriendMessageHideSyncRequest___, v8);
    sub_B0D8A4(&NetworkManager_TypeInfo, v9);
    sub_B0D8A4(&NetworkManager_ResultCallbackFunc_TypeInfo, v10);
    sub_B0D8A4(&Method_FriendRootComponent___c__DisplayClass108_0__messageDispChangeRequest_b__0__, v11);
    sub_B0D8A4(&FriendRootComponent___c__DisplayClass108_0_TypeInfo, v12);
    sub_B0D8A4(&StringLiteral_21287/*"ok"*/, v13);
    byte_4217172 = 1;
  }
  v14 = sub_B0D974(FriendRootComponent___c__DisplayClass108_0_TypeInfo, callback, method);
  FriendRootComponent___c__DisplayClass108_0___ctor((FriendRootComponent___c__DisplayClass108_0_o *)v14, 0LL);
  if ( !v14 )
    goto LABEL_29;
  *(_QWORD *)(v14 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v14 + 16), (System_Int32_array **)this, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v14 + 24) = callback;
  v22 = (FriendRootComponent_messageRequestCallback_o **)(v14 + 24);
  sub_B0D840((BattleServantConfConponent_o *)(v14 + 24), (System_Int32_array **)callback, v23, v24, v25, v26, v27, v28);
  operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    goto LABEL_29;
  if ( LOBYTE(operationItemListViewManager[1].fields.sortKindLabel) )
  {
    ItemSum = ListViewManager__get_ItemSum(operationItemListViewManager, 0LL);
    v32 = (System_Collections_Generic_List_long__o *)sub_B0D974(
                                                       System_Collections_Generic_List_long__TypeInfo,
                                                       v30,
                                                       v31);
    System_Collections_Generic_List_long____ctor(
      v32,
      (const MethodInfo_2FB5154 *)Method_System_Collections_Generic_List_long___ctor__);
    v35 = (System_Collections_Generic_List_long__o *)sub_B0D974(
                                                       System_Collections_Generic_List_long__TypeInfo,
                                                       v33,
                                                       v34);
    System_Collections_Generic_List_long____ctor(
      v35,
      (const MethodInfo_2FB5154 *)Method_System_Collections_Generic_List_long___ctor__);
    if ( ItemSum >= 1 )
    {
      v38 = 0;
      while ( 1 )
      {
        operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
        if ( !operationItemListViewManager )
          break;
        operationItemListViewManager = (ListViewManager_o *)FriendOperationItemListViewManager__GetItem(
                                                              (FriendOperationItemListViewManager_o *)operationItemListViewManager,
                                                              v38,
                                                              0LL);
        if ( !operationItemListViewManager )
          break;
        if ( LODWORD(operationItemListViewManager->fields.dragParentObject) == 3 )
        {
          dropList = operationItemListViewManager->fields.dropList;
          if ( !dropList )
            break;
          if ( LOBYTE(operationItemListViewManager->fields.sort) )
          {
            if ( !v32 )
              break;
            v40 = (const MethodInfo_2FB5EB0 *)Method_System_Collections_Generic_List_long__Add__;
            v41 = v32;
          }
          else
          {
            if ( !v35 )
              break;
            v40 = (const MethodInfo_2FB5EB0 *)Method_System_Collections_Generic_List_long__Add__;
            v41 = v35;
          }
          System_Collections_Generic_List_long___Add(v41, (int64_t)dropList->fields._items, v40);
        }
        if ( ++v38 >= ItemSum )
          goto LABEL_19;
      }
LABEL_29:
      sub_B0D97C(operationItemListViewManager);
    }
LABEL_19:
    v42 = (NetworkManager_ResultCallbackFunc_o *)sub_B0D974(NetworkManager_ResultCallbackFunc_TypeInfo, v36, v37);
    NetworkManager_ResultCallbackFunc___ctor(
      v42,
      (Il2CppObject *)v14,
      Method_FriendRootComponent___c__DisplayClass108_0__messageDispChangeRequest_b__0__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    operationItemListViewManager = (ListViewManager_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                          v42,
                                                          (const MethodInfo_2049D98 *)Method_NetworkManager_getRequest_FriendMessageHideSyncRequest___);
    if ( !v35 )
      goto LABEL_29;
    v43 = (FriendMessageHideSyncRequest_o *)operationItemListViewManager;
    operationItemListViewManager = (ListViewManager_o *)System_Collections_Generic_List_long___ToArray(
                                                          v35,
                                                          (const MethodInfo_2FB7FBC *)Method_System_Collections_Generic_List_long__ToArray__);
    if ( !v32 )
      goto LABEL_29;
    v44 = (System_Int64_array *)operationItemListViewManager;
    operationItemListViewManager = (ListViewManager_o *)System_Collections_Generic_List_long___ToArray(
                                                          v32,
                                                          (const MethodInfo_2FB7FBC *)Method_System_Collections_Generic_List_long__ToArray__);
    if ( !v43 )
      goto LABEL_29;
    FriendMessageHideSyncRequest__beginRequest(v43, v44, (System_Int64_array *)operationItemListViewManager, 0LL);
  }
  else if ( *v22 )
  {
    FriendRootComponent_messageRequestCallback__Invoke(*v22, (System_String_o *)StringLiteral_21287/*"ok"*/, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendRootComponent__set_tabKind(FriendRootComponent_o *this, int32_t value, const MethodInfo *method)
{
  FriendRootComponent_c *v4; // x0

  if ( (byte_4217134 & 1) == 0 )
  {
    sub_B0D8A4(&FriendRootComponent_TypeInfo, *(_QWORD *)&value);
    byte_4217134 = 1;
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
    sub_B0D97C(this);
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
  __int64 v5; // x1
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  int32_t v7; // w21
  struct FriendRootComponent_o *_4__this; // x8

  if ( (byte_4210F62 & 1) == 0 )
  {
    sub_B0D8A4(&Method_ActionExtensions_Call_string___, result);
    sub_B0D8A4(&StringLiteral_21287/*"ok"*/, v5);
    byte_4210F62 = 1;
  }
  operationItemListViewManager = (FriendOperationItemListViewManager_o *)System_String__op_Equality(
                                                                           result,
                                                                           (System_String_o *)StringLiteral_21287/*"ok"*/,
                                                                           0LL);
  if ( ((unsigned __int8)operationItemListViewManager & 1) != 0 && this->fields.sum >= 1 )
  {
    v7 = 0;
    do
    {
      _4__this = this->fields.__4__this;
      if ( !_4__this || (operationItemListViewManager = _4__this->fields.operationItemListViewManager) == 0LL )
        sub_B0D97C(operationItemListViewManager);
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
    (const MethodInfo_2D96698 *)Method_ActionExtensions_Call_string___);
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
  sub_B0D840(p_method, object);
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
  return (System_IAsyncResult_o *)sub_B0D848(this, v6, callback, object);
}


void __fastcall FriendRootComponent_messageRequestCallback__EndInvoke(
        FriendRootComponent_messageRequestCallback_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B0D84C(result, 0LL, method);
}


void __fastcall FriendRootComponent_messageRequestCallback__Invoke(
        FriendRootComponent_messageRequestCallback_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  FriendRootComponent_messageRequestCallback_o **v8; // x25
  __int64 i; // x26
  unsigned int v10; // w22
  __int64 class_0; // x0
  System_String_c *v12; // x8
  unsigned __int64 v13; // x10
  int32_t *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  unsigned int v17; // w23
  __int64 v18; // x0
  __int64 v19; // x8
  unsigned __int64 v20; // x10
  _DWORD *v21; // x11
  __int64 v22; // x0
  __int64 v23; // x0
  __int64 v24; // x0
  void (__fastcall **v25)(System_String_o *, _QWORD); // x0
  __int64 v26; // x0
  void (__fastcall **v27)(__int64 *, System_String_o *, _QWORD); // x0
  FriendRootComponent_messageRequestCallback_o *v28; // x8
  __int64 v29; // x21
  __int64 *v30; // x22
  void (__fastcall *v31)(System_String_o *, __int64); // x23
  char v32; // w0
  int v33; // w8
  char v34; // w23
  char v35; // w0
  __int64 v36; // x8
  __int64 v37; // x1
  __int64 v38; // x2
  unsigned __int64 v39; // x10
  _DWORD *v40; // x11
  char v41; // w22
  char v42; // w0
  System_String_c *klass; // x8
  __int64 v44; // x1
  __int64 v45; // x2
  unsigned __int64 v46; // x10
  int32_t *p_offset; // x11
  FriendRootComponent_messageRequestCallback_o *v48; // [xsp+8h] [xbp-48h] BYREF

  v48 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v48;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (FriendRootComponent_messageRequestCallback_o **)(v4 + 32);
LABEL_5:
    for ( i = 0LL; i != v7; ++i )
    {
      v28 = v8[i];
      v30 = *(__int64 **)&v28->fields.method;
      v29 = *(_QWORD *)&v28->fields.extra_arg;
      v31 = *(void (__fastcall **)(System_String_o *, __int64))&v28->fields.method_ptr;
      if ( *(__int16 *)(v29 + 72) == -1 )
        sub_B0D960(*(_QWORD *)&v28->fields.extra_arg, result, method, v3);
      v32 = sub_B0D8D4(v29);
      v33 = *(unsigned __int8 *)(v29 + 74);
      if ( (v32 & 1) != 0 )
      {
        if ( v33 == 1 )
          goto LABEL_58;
      }
      else
      {
        if ( v33 != 1 )
        {
          if ( *(__int16 *)(v29 + 72) != -1 && this->fields.m_target )
          {
            v41 = sub_B0D8CC(v29);
            v42 = sub_B0DCD0(v29);
            if ( (v41 & 1) != 0 )
            {
              if ( (v42 & 1) != 0 )
              {
                klass = result->klass;
                v44 = *(_QWORD *)(v29 + 24);
                v45 = *(unsigned __int16 *)(v29 + 72);
                if ( *(_WORD *)&result->klass->_2.bitflags1 )
                {
                  v46 = 0LL;
                  p_offset = &klass->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)p_offset - 1) != v44 )
                  {
                    ++v46;
                    p_offset += 4;
                    if ( v46 >= *(unsigned __int16 *)&result->klass->_2.bitflags1 )
                      goto LABEL_57;
                  }
                  v24 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset + 2 * (int)v45);
                }
                else
                {
LABEL_57:
                  v24 = sub_AA67A0(result, v44, v45);
                }
                v16 = *(_QWORD *)(v24 + 8);
              }
              else
              {
                v16 = *((_QWORD *)&result->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v29 + 72));
              }
              v25 = (void (__fastcall **)(System_String_o *, _QWORD))sub_B0D954(v16, v29);
              (*v25)(result, v25);
            }
            else
            {
              v10 = *(unsigned __int16 *)(v29 + 72);
              if ( (v42 & 1) != 0 )
              {
                class_0 = j_il2cpp_method_get_class_0(v29);
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
                  v15 = (__int64)(&v12->vtable._0_Equals.method + 2 * (int)(*v14 + v10));
                }
                else
                {
LABEL_11:
                  v15 = sub_AA67A0(result, class_0, v10);
                }
                (*(void (__fastcall **)(System_String_o *, _QWORD))v15)(result, *(_QWORD *)(v15 + 8));
              }
              else
              {
                (*((void (__fastcall **)(System_String_o *, _QWORD))&result->klass->vtable._0_Equals.method
                 + 2 * *(unsigned __int16 *)(v29 + 72)))(
                  result,
                  *((_QWORD *)&result->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v29 + 72)));
              }
            }
            continue;
          }
LABEL_58:
          v31(result, v29);
          continue;
        }
        if ( !v30 )
          goto LABEL_58;
        if ( *(__int16 *)(v29 + 72) != -1 && (*(_BYTE *)(*v30 + 277) & 1) == 0 && this->fields.m_target )
        {
          v34 = sub_B0D8CC(v29);
          v35 = sub_B0DCD0(v29);
          if ( (v34 & 1) != 0 )
          {
            if ( (v35 & 1) != 0 )
            {
              v36 = *v30;
              v37 = *(_QWORD *)(v29 + 24);
              v38 = *(unsigned __int16 *)(v29 + 72);
              if ( *(_WORD *)(*v30 + 298) )
              {
                v39 = 0LL;
                v40 = (_DWORD *)(*(_QWORD *)(v36 + 176) + 8LL);
                while ( *((_QWORD *)v40 - 1) != v37 )
                {
                  ++v39;
                  v40 += 4;
                  if ( v39 >= *(unsigned __int16 *)(*v30 + 298) )
                    goto LABEL_48;
                }
                v26 = v36 + 16LL * (*v40 + (int)v38) + 312;
              }
              else
              {
LABEL_48:
                v26 = sub_AA67A0(v30, v37, v38);
              }
              v23 = *(_QWORD *)(v26 + 8);
            }
            else
            {
              v23 = *(_QWORD *)(*v30 + 16LL * *(unsigned __int16 *)(v29 + 72) + 320);
            }
            v27 = (void (__fastcall **)(__int64 *, System_String_o *, _QWORD))sub_B0D954(v23, v29);
            (*v27)(v30, result, v27);
          }
          else
          {
            v17 = *(unsigned __int16 *)(v29 + 72);
            if ( (v35 & 1) != 0 )
            {
              v18 = j_il2cpp_method_get_class_0(v29);
              v19 = *v30;
              if ( *(_WORD *)(*v30 + 298) )
              {
                v20 = 0LL;
                v21 = (_DWORD *)(*(_QWORD *)(v19 + 176) + 8LL);
                while ( *((_QWORD *)v21 - 1) != v18 )
                {
                  ++v20;
                  v21 += 4;
                  if ( v20 >= *(unsigned __int16 *)(*v30 + 298) )
                    goto LABEL_19;
                }
                v22 = v19 + 16LL * (int)(*v21 + v17) + 312;
              }
              else
              {
LABEL_19:
                v22 = sub_AA67A0(v30, v18, v17);
              }
              (*(void (__fastcall **)(__int64 *, System_String_o *, _QWORD))v22)(v30, result, *(_QWORD *)(v22 + 8));
            }
            else
            {
              (*(void (__fastcall **)(__int64 *, System_String_o *, _QWORD))(*v30
                                                                           + 16LL * *(unsigned __int16 *)(v29 + 72)
                                                                           + 312))(
                v30,
                result,
                *(_QWORD *)(*v30 + 16LL * *(unsigned __int16 *)(v29 + 72) + 320));
            }
          }
          continue;
        }
      }
      ((void (__fastcall *)(__int64 *, System_String_o *, __int64))v31)(v30, result, v29);
    }
  }
}