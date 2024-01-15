void __fastcall FriendRootComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40FD9AF & 1) == 0 )
  {
    sub_B16FFC(&FriendRootComponent_TypeInfo, v1);
    byte_40FD9AF = 1;
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
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  const MethodInfo *v6; // x1
  FriendWarningDialog_o *friendWarningDialog; // x0
  CommonUI_o *Instance; // x0

  if ( (byte_40FD9A0 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_40FD9A0 = 1;
  }
  state = this->fields.state;
  switch ( state )
  {
    case ',':
      this->fields.state = 23;
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        CommonUI__CloseNotificationDialog(Instance, 0LL);
        goto LABEL_12;
      }
      goto LABEL_14;
    case '+':
      friendWarningDialog = this->fields.friendWarningDialog;
      this->fields.state = 23;
      if ( friendWarningDialog )
      {
        FriendWarningDialog__Close(friendWarningDialog, 0LL);
        goto LABEL_12;
      }
LABEL_14:
      sub_B170D4();
    case '*':
      operationConfirmMenu = this->fields.operationConfirmMenu;
      this->fields.state = 23;
      if ( operationConfirmMenu )
      {
        FriendOperationConfirmMenu__Close_31822388(operationConfirmMenu, 0LL, v2);
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
  const MethodInfo *v16; // x2
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  FriendSearchResultMenu_o *friendSearchResultMenu; // x0
  FriendSearchMenu_o *friendSearchMenu; // x20
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  FriendSearchMenu_CallbackFunc_o *v24; // x21
  const MethodInfo *v25; // x1

  if ( (byte_40FD9A5 & 1) == 0 )
  {
    sub_B16FFC(&FriendSearchMenu_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_FriendRootComponent_OnSelectSearchFriend__, v9);
    byte_40FD9A5 = 1;
  }
  if ( this->fields.state == 42 )
  {
    this->fields.state = 23;
    this->fields.selectFriendCode = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.selectFriendCode, 0LL, v2, v3, v4, v5, v6, v7);
    this->fields.selectFriendEntity = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.selectFriendEntity, 0LL, v10, v11, v12, v13, v14, v15);
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close_31822388(operationConfirmMenu, 0LL, v16),
          (friendSearchResultMenu = this->fields.friendSearchResultMenu) == 0LL)
      || (FriendSearchResultMenu__Close(friendSearchResultMenu, 0LL),
          friendSearchMenu = this->fields.friendSearchMenu,
          v24 = (FriendSearchMenu_CallbackFunc_o *)sub_B170CC(
                                                     FriendSearchMenu_CallbackFunc_TypeInfo,
                                                     v20,
                                                     v21,
                                                     v22,
                                                     v23),
          FriendSearchMenu_CallbackFunc___ctor(
            v24,
            (Il2CppObject *)this,
            Method_FriendRootComponent_OnSelectSearchFriend__,
            0LL),
          !friendSearchMenu) )
    {
      sub_B170D4();
    }
    FriendSearchMenu__Open(friendSearchMenu, v24, 1, 0LL);
    FriendRootComponent__RefreshInfo(this, v25);
  }
}


void __fastcall FriendRootComponent__BackFollowRemoveConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  FriendOperationItemListViewManager_CallbackFunc_o *v11; // x21
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  const MethodInfo *v18; // x2

  if ( (byte_40FD9A7 & 1) == 0 )
  {
    sub_B16FFC(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_FriendRootComponent_OnSelectFriendItem__, v4);
    byte_40FD9A7 = 1;
  }
  if ( this->fields.state == 45 )
  {
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close_31822388(operationConfirmMenu, 0LL, v2),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v11 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B170CC(
                                                                       FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                                       v7,
                                                                       v8,
                                                                       v9,
                                                                       v10),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v11,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            0LL),
          !operationItemListViewManager) )
    {
      sub_B170D4();
    }
    operationItemListViewManager->fields.callbackFunc = v11;
    sub_B16F98(
      (BattleServantConfConponent_o *)&operationItemListViewManager->fields.callbackFunc,
      (System_Int32_array **)v11,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
    FriendOperationItemListViewManager__SetMode_31847292(operationItemListViewManager, 2, v18);
    this->fields.state = 4;
  }
}


void __fastcall FriendRootComponent__BackFollowRemoveConfirmBeforeRefresh(
        FriendRootComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  const MethodInfo *v5; // x1
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0

  if ( this->fields.state == 45 )
  {
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close_31822388(operationConfirmMenu, 0LL, v2),
          (operationItemListViewManager = this->fields.operationItemListViewManager) == 0LL) )
    {
      sub_B170D4();
    }
    FriendOperationItemListViewManager__DestroyList(operationItemListViewManager, v5);
  }
}


void __fastcall FriendRootComponent__BackFollowRemoveConfirmRefreshShowFriend(
        FriendRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  NetworkManager_ResultCallbackFunc_o *v9; // x20
  RequestBase_o *Request_WarBoardWallAttackRequest; // x0

  if ( (byte_40FD9A8 & 1) == 0 )
  {
    sub_B16FFC(&Method_FriendRootComponent_EndFriendRequest2__, method);
    sub_B16FFC(&Method_NetworkManager_getRequest_FriendTopRequest___, v6);
    sub_B16FFC(&NetworkManager_TypeInfo, v7);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v8);
    byte_40FD9A8 = 1;
  }
  v9 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(NetworkManager_ResultCallbackFunc_TypeInfo, method, v2, v3, v4);
  NetworkManager_ResultCallbackFunc___ctor(
    v9,
    (Il2CppObject *)this,
    Method_FriendRootComponent_EndFriendRequest2__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (RequestBase_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                         v9,
                                                         (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_FriendTopRequest___);
  if ( !Request_WarBoardWallAttackRequest )
    sub_B170D4();
  RequestBase__beginRequest(Request_WarBoardWallAttackRequest, 0LL);
}


void __fastcall FriendRootComponent__BackFriendAcceptConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  FriendOperationItemListViewManager_CallbackFunc_o *v11; // x21
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  const MethodInfo *v18; // x2

  if ( (byte_40FD96D & 1) == 0 )
  {
    sub_B16FFC(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_FriendRootComponent_OnSelectFriendItem__, v4);
    byte_40FD96D = 1;
  }
  if ( this->fields.state == 31 )
  {
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close_31822388(operationConfirmMenu, 0LL, v2),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v11 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B170CC(
                                                                       FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                                       v7,
                                                                       v8,
                                                                       v9,
                                                                       v10),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v11,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            0LL),
          !operationItemListViewManager) )
    {
      sub_B170D4();
    }
    operationItemListViewManager->fields.callbackFunc = v11;
    sub_B16F98(
      (BattleServantConfConponent_o *)&operationItemListViewManager->fields.callbackFunc,
      (System_Int32_array **)v11,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
    FriendOperationItemListViewManager__SetMode_31847292(operationItemListViewManager, 2, v18);
    this->fields.state = 14;
  }
}


void __fastcall FriendRootComponent__BackFriendAcceptConfirmRefreshShowOffered(
        FriendRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  const MethodInfo *v4; // x2
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  const MethodInfo *v6; // x1
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  const MethodInfo *v8; // x3
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  FriendOperationItemListViewManager_o *v10; // x0
  struct FriendOperationItemListViewManager_o *v11; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  FriendOperationItemListViewManager_CallbackFunc_o *v16; // x21
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  const MethodInfo *v23; // x2

  if ( (byte_40FD96E & 1) == 0 )
  {
    sub_B16FFC(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_FriendRootComponent_OnSelectFriendItem__, v3);
    byte_40FD96E = 1;
  }
  if ( this->fields.state == 31 )
  {
    this->fields.state = 14;
    FriendRootComponent__RefreshInfo(this, method);
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu )
      goto LABEL_11;
    FriendOperationConfirmMenu__Close_31822388(operationConfirmMenu, 0LL, v4);
    operationItemListViewManager = this->fields.operationItemListViewManager;
    if ( !operationItemListViewManager
      || (FriendOperationItemListViewManager__DestroyList(operationItemListViewManager, v6),
          (classButtonControl = this->fields.classButtonControl) == 0LL)
      || (v10 = this->fields.operationItemListViewManager) == 0LL
      || (FriendOperationItemListViewManager__CreateList(v10, 2, classButtonControl->fields.currentCursor, v8),
          v11 = this->fields.operationItemListViewManager,
          v16 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B170CC(
                                                                       FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                                       v12,
                                                                       v13,
                                                                       v14,
                                                                       v15),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v16,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            0LL),
          !v11) )
    {
LABEL_11:
      sub_B170D4();
    }
    v11->fields.callbackFunc = v16;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v11->fields.callbackFunc,
      (System_Int32_array **)v16,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
    FriendOperationItemListViewManager__SetMode_31847292(v11, 2, v23);
  }
}


void __fastcall FriendRootComponent__BackFriendCancelConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  FriendOperationItemListViewManager_CallbackFunc_o *v11; // x21
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  const MethodInfo *v18; // x2

  if ( (byte_40FD973 & 1) == 0 )
  {
    sub_B16FFC(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_FriendRootComponent_OnSelectFriendItem__, v4);
    byte_40FD973 = 1;
  }
  if ( this->fields.state == 37 )
  {
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close_31822388(operationConfirmMenu, 0LL, v2),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v11 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B170CC(
                                                                       FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                                       v7,
                                                                       v8,
                                                                       v9,
                                                                       v10),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v11,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            0LL),
          !operationItemListViewManager) )
    {
      sub_B170D4();
    }
    operationItemListViewManager->fields.callbackFunc = v11;
    sub_B16F98(
      (BattleServantConfConponent_o *)&operationItemListViewManager->fields.callbackFunc,
      (System_Int32_array **)v11,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
    FriendOperationItemListViewManager__SetMode_31847292(operationItemListViewManager, 2, v18);
    this->fields.state = 14;
  }
}


void __fastcall FriendRootComponent__BackFriendCancelConfirmRefreshShowOffer(
        FriendRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  const MethodInfo *v4; // x2
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  const MethodInfo *v6; // x1
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  const MethodInfo *v8; // x3
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  FriendOperationItemListViewManager_o *v10; // x0
  struct FriendOperationItemListViewManager_o *v11; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  FriendOperationItemListViewManager_CallbackFunc_o *v16; // x21
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  const MethodInfo *v23; // x2

  if ( (byte_40FD974 & 1) == 0 )
  {
    sub_B16FFC(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_FriendRootComponent_OnSelectFriendItem__, v3);
    byte_40FD974 = 1;
  }
  if ( this->fields.state == 37 )
  {
    this->fields.state = 9;
    FriendRootComponent__RefreshInfo(this, method);
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu )
      goto LABEL_11;
    FriendOperationConfirmMenu__Close_31822388(operationConfirmMenu, 0LL, v4);
    operationItemListViewManager = this->fields.operationItemListViewManager;
    if ( !operationItemListViewManager
      || (FriendOperationItemListViewManager__DestroyList(operationItemListViewManager, v6),
          (classButtonControl = this->fields.classButtonControl) == 0LL)
      || (v10 = this->fields.operationItemListViewManager) == 0LL
      || (FriendOperationItemListViewManager__CreateList(v10, 1, classButtonControl->fields.currentCursor, v8),
          v11 = this->fields.operationItemListViewManager,
          v16 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B170CC(
                                                                       FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                                       v12,
                                                                       v13,
                                                                       v14,
                                                                       v15),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v16,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            0LL),
          !v11) )
    {
LABEL_11:
      sub_B170D4();
    }
    v11->fields.callbackFunc = v16;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v11->fields.callbackFunc,
      (System_Int32_array **)v16,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
    FriendOperationItemListViewManager__SetMode_31847292(v11, 2, v23);
  }
}


void __fastcall FriendRootComponent__BackFriendOfferConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t state; // w8
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  const MethodInfo *v6; // x1
  FriendWarningDialog_o *friendWarningDialog; // x0

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
    sub_B170D4();
  }
  if ( state == 27 )
  {
    operationConfirmMenu = this->fields.operationConfirmMenu;
    this->fields.state = 23;
    if ( operationConfirmMenu )
    {
      FriendOperationConfirmMenu__Close_31822388(operationConfirmMenu, 0LL, v2);
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
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  FriendOperationItemListViewManager_CallbackFunc_o *v12; // x21
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  const MethodInfo *v19; // x2

  if ( (byte_40FD9AA & 1) == 0 )
  {
    sub_B16FFC(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_FriendRootComponent_OnSelectFriendItem__, v4);
    byte_40FD9AA = 1;
  }
  state = this->fields.state;
  if ( state == 29 || state == 27 )
  {
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close_31822388(operationConfirmMenu, 0LL, v2),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v12 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B170CC(
                                                                       FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                                       v8,
                                                                       v9,
                                                                       v10,
                                                                       v11),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v12,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            0LL),
          !operationItemListViewManager) )
    {
      sub_B170D4();
    }
    operationItemListViewManager->fields.callbackFunc = v12;
    sub_B16F98(
      (BattleServantConfConponent_o *)&operationItemListViewManager->fields.callbackFunc,
      (System_Int32_array **)v12,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    FriendOperationItemListViewManager__SetMode_31847292(operationItemListViewManager, 2, v19);
    this->fields.state = 4;
  }
}


void __fastcall FriendRootComponent__BackFriendOfferConfirmRefreshShowFriend(
        FriendRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  const MethodInfo *v4; // x2
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  const MethodInfo *v6; // x1
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  const MethodInfo *v8; // x3
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  FriendOperationItemListViewManager_o *v10; // x0
  struct FriendOperationItemListViewManager_o *v11; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  FriendOperationItemListViewManager_CallbackFunc_o *v16; // x21
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  const MethodInfo *v23; // x2

  if ( (byte_40FD9AB & 1) == 0 )
  {
    sub_B16FFC(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_FriendRootComponent_OnSelectFriendItem__, v3);
    byte_40FD9AB = 1;
  }
  if ( this->fields.state == 27 )
  {
    this->fields.state = 4;
    FriendRootComponent__RefreshInfo(this, method);
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu )
      goto LABEL_11;
    FriendOperationConfirmMenu__Close_31822388(operationConfirmMenu, 0LL, v4);
    operationItemListViewManager = this->fields.operationItemListViewManager;
    if ( !operationItemListViewManager
      || (FriendOperationItemListViewManager__DestroyList(operationItemListViewManager, v6),
          (classButtonControl = this->fields.classButtonControl) == 0LL)
      || (v10 = this->fields.operationItemListViewManager) == 0LL
      || (FriendOperationItemListViewManager__CreateList(v10, 3, classButtonControl->fields.currentCursor, v8),
          v11 = this->fields.operationItemListViewManager,
          v16 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B170CC(
                                                                       FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                                       v12,
                                                                       v13,
                                                                       v14,
                                                                       v15),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v16,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            0LL),
          !v11) )
    {
LABEL_11:
      sub_B170D4();
    }
    v11->fields.callbackFunc = v16;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v11->fields.callbackFunc,
      (System_Int32_array **)v16,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
    FriendOperationItemListViewManager__SetMode_31847292(v11, 2, v23);
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
  const MethodInfo *v16; // x2
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  FriendSearchResultMenu_o *friendSearchResultMenu; // x0
  FriendSearchMenu_o *friendSearchMenu; // x20
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  FriendSearchMenu_CallbackFunc_o *v24; // x21

  if ( (byte_40FD96B & 1) == 0 )
  {
    sub_B16FFC(&FriendSearchMenu_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_FriendRootComponent_OnSelectSearchFriend__, v9);
    byte_40FD96B = 1;
  }
  if ( this->fields.state == 27 )
  {
    this->fields.state = 23;
    this->fields.selectFriendCode = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.selectFriendCode, 0LL, v2, v3, v4, v5, v6, v7);
    this->fields.selectFriendEntity = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.selectFriendEntity, 0LL, v10, v11, v12, v13, v14, v15);
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close_31822388(operationConfirmMenu, 0LL, v16),
          (friendSearchResultMenu = this->fields.friendSearchResultMenu) == 0LL)
      || (FriendSearchResultMenu__Close(friendSearchResultMenu, 0LL),
          friendSearchMenu = this->fields.friendSearchMenu,
          v24 = (FriendSearchMenu_CallbackFunc_o *)sub_B170CC(
                                                     FriendSearchMenu_CallbackFunc_TypeInfo,
                                                     v20,
                                                     v21,
                                                     v22,
                                                     v23),
          FriendSearchMenu_CallbackFunc___ctor(
            v24,
            (Il2CppObject *)this,
            Method_FriendRootComponent_OnSelectSearchFriend__,
            0LL),
          !friendSearchMenu) )
    {
      sub_B170D4();
    }
    FriendSearchMenu__Open(friendSearchMenu, v24, 1, 0LL);
  }
}


void __fastcall FriendRootComponent__BackFriendRejectConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  FriendOperationItemListViewManager_CallbackFunc_o *v11; // x21
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  const MethodInfo *v18; // x2

  if ( (byte_40FD970 & 1) == 0 )
  {
    sub_B16FFC(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_FriendRootComponent_OnSelectFriendItem__, v4);
    byte_40FD970 = 1;
  }
  if ( this->fields.state == 34 )
  {
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close_31822388(operationConfirmMenu, 0LL, v2),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v11 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B170CC(
                                                                       FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                                       v7,
                                                                       v8,
                                                                       v9,
                                                                       v10),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v11,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            0LL),
          !operationItemListViewManager) )
    {
      sub_B170D4();
    }
    operationItemListViewManager->fields.callbackFunc = v11;
    sub_B16F98(
      (BattleServantConfConponent_o *)&operationItemListViewManager->fields.callbackFunc,
      (System_Int32_array **)v11,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
    FriendOperationItemListViewManager__SetMode_31847292(operationItemListViewManager, 2, v18);
    this->fields.state = 14;
  }
}


void __fastcall FriendRootComponent__BackFriendRejectConfirmRefreshShowOffered(
        FriendRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  const MethodInfo *v4; // x2
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  const MethodInfo *v6; // x1
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  const MethodInfo *v8; // x3
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  FriendOperationItemListViewManager_o *v10; // x0
  struct FriendOperationItemListViewManager_o *v11; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  FriendOperationItemListViewManager_CallbackFunc_o *v16; // x21
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  const MethodInfo *v23; // x2

  if ( (byte_40FD971 & 1) == 0 )
  {
    sub_B16FFC(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_FriendRootComponent_OnSelectFriendItem__, v3);
    byte_40FD971 = 1;
  }
  if ( this->fields.state == 34 )
  {
    this->fields.state = 14;
    FriendRootComponent__RefreshInfo(this, method);
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu )
      goto LABEL_11;
    FriendOperationConfirmMenu__Close_31822388(operationConfirmMenu, 0LL, v4);
    operationItemListViewManager = this->fields.operationItemListViewManager;
    if ( !operationItemListViewManager
      || (FriendOperationItemListViewManager__DestroyList(operationItemListViewManager, v6),
          (classButtonControl = this->fields.classButtonControl) == 0LL)
      || (v10 = this->fields.operationItemListViewManager) == 0LL
      || (FriendOperationItemListViewManager__CreateList(v10, 2, classButtonControl->fields.currentCursor, v8),
          v11 = this->fields.operationItemListViewManager,
          v16 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B170CC(
                                                                       FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                                       v12,
                                                                       v13,
                                                                       v14,
                                                                       v15),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v16,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            0LL),
          !v11) )
    {
LABEL_11:
      sub_B170D4();
    }
    v11->fields.callbackFunc = v16;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v11->fields.callbackFunc,
      (System_Int32_array **)v16,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
    FriendOperationItemListViewManager__SetMode_31847292(v11, 2, v23);
  }
}


void __fastcall FriendRootComponent__BackFriendRemoveConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  FriendOperationItemListViewManager_CallbackFunc_o *v11; // x21
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  const MethodInfo *v18; // x2

  if ( (byte_40FD976 & 1) == 0 )
  {
    sub_B16FFC(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_FriendRootComponent_OnSelectFriendItem__, v4);
    byte_40FD976 = 1;
  }
  if ( this->fields.state == 40 )
  {
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close_31822388(operationConfirmMenu, 0LL, v2),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v11 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B170CC(
                                                                       FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                                       v7,
                                                                       v8,
                                                                       v9,
                                                                       v10),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v11,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            0LL),
          !operationItemListViewManager) )
    {
      sub_B170D4();
    }
    operationItemListViewManager->fields.callbackFunc = v11;
    sub_B16F98(
      (BattleServantConfConponent_o *)&operationItemListViewManager->fields.callbackFunc,
      (System_Int32_array **)v11,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
    FriendOperationItemListViewManager__SetMode_31847292(operationItemListViewManager, 2, v18);
    this->fields.state = 4;
  }
}


void __fastcall FriendRootComponent__BackFriendRemoveConfirmRefreshShowFriend(
        FriendRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  const MethodInfo *v4; // x2
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  const MethodInfo *v6; // x1
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  const MethodInfo *v8; // x3
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  FriendOperationItemListViewManager_o *v10; // x0
  struct FriendOperationItemListViewManager_o *v11; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  FriendOperationItemListViewManager_CallbackFunc_o *v16; // x21
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  const MethodInfo *v23; // x2

  if ( (byte_40FD977 & 1) == 0 )
  {
    sub_B16FFC(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_FriendRootComponent_OnSelectFriendItem__, v3);
    byte_40FD977 = 1;
  }
  if ( this->fields.state == 40 )
  {
    this->fields.state = 4;
    FriendRootComponent__RefreshInfo(this, method);
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu )
      goto LABEL_11;
    FriendOperationConfirmMenu__Close_31822388(operationConfirmMenu, 0LL, v4);
    operationItemListViewManager = this->fields.operationItemListViewManager;
    if ( !operationItemListViewManager
      || (FriendOperationItemListViewManager__DestroyList(operationItemListViewManager, v6),
          (classButtonControl = this->fields.classButtonControl) == 0LL)
      || (v10 = this->fields.operationItemListViewManager) == 0LL
      || (FriendOperationItemListViewManager__CreateList(v10, 3, classButtonControl->fields.currentCursor, v8),
          v11 = this->fields.operationItemListViewManager,
          v16 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B170CC(
                                                                       FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                                       v12,
                                                                       v13,
                                                                       v14,
                                                                       v15),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v16,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            0LL),
          !v11) )
    {
LABEL_11:
      sub_B170D4();
    }
    v11->fields.callbackFunc = v16;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v11->fields.callbackFunc,
      (System_Int32_array **)v16,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
    FriendOperationItemListViewManager__SetMode_31847292(v11, 2, v23);
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
  FriendSearchResultMenu_o *friendSearchResultMenu; // x0
  FriendSearchMenu_o *friendSearchMenu; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  System_Action_o *v16; // x21

  if ( (byte_40FD964 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_FriendRootComponent_OnMoveEnd__, v3);
    byte_40FD964 = 1;
  }
  if ( this->fields.state == 23 )
  {
    this->fields.state = 24;
    FriendRootComponent__RefreshInfo(this, method);
    this->fields.selectFriendEntity = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.selectFriendEntity, 0LL, v4, v5, v6, v7, v8, v9);
    friendSearchResultMenu = this->fields.friendSearchResultMenu;
    if ( !friendSearchResultMenu
      || (FriendSearchResultMenu__Close(friendSearchResultMenu, 0LL),
          friendSearchMenu = this->fields.friendSearchMenu,
          v16 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v12, v13, v14, v15),
          System_Action___ctor(v16, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0LL),
          !friendSearchMenu) )
    {
      sub_B170D4();
    }
    FriendSearchMenu__Close_27329712(friendSearchMenu, v16, 0LL);
  }
}


void __fastcall FriendRootComponent__BackShowFriend(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  System_Action_o *v9; // x21
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  const MethodInfo *v16; // x2

  if ( (byte_40FD95C & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_FriendRootComponent_OnMoveEnd__, v3);
    byte_40FD95C = 1;
  }
  if ( this->fields.state == 4 )
  {
    this->fields.state = 5;
    FriendRootComponent__RefreshInfo(this, method);
    operationItemListViewManager = this->fields.operationItemListViewManager;
    v9 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v5, v6, v7, v8);
    System_Action___ctor(v9, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0LL);
    if ( !operationItemListViewManager )
      sub_B170D4();
    operationItemListViewManager->fields.callbackFunc2 = v9;
    sub_B16F98(
      (BattleServantConfConponent_o *)&operationItemListViewManager->fields.callbackFunc2,
      (System_Int32_array **)v9,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
    FriendOperationItemListViewManager__SetMode_31847292(operationItemListViewManager, 4, v16);
  }
}


void __fastcall FriendRootComponent__BackShowOffer(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  System_Action_o *v8; // x21
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x1

  if ( (byte_40FD95E & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_FriendRootComponent_OnMoveEnd__, v6);
    byte_40FD95E = 1;
  }
  if ( this->fields.state == 9 )
  {
    operationItemListViewManager = this->fields.operationItemListViewManager;
    v8 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0LL);
    if ( !operationItemListViewManager )
      sub_B170D4();
    operationItemListViewManager->fields.callbackFunc2 = v8;
    sub_B16F98(
      (BattleServantConfConponent_o *)&operationItemListViewManager->fields.callbackFunc2,
      (System_Int32_array **)v8,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
    FriendOperationItemListViewManager__SetMode_31847292(operationItemListViewManager, 4, v15);
    FriendRootComponent__RefreshInfo(this, v16);
    this->fields.state = 10;
  }
}


void __fastcall FriendRootComponent__BackShowOffered(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  System_Action_o *v9; // x21
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  const MethodInfo *v16; // x2

  if ( (byte_40FD960 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_FriendRootComponent_OnMoveEnd__, v3);
    byte_40FD960 = 1;
  }
  if ( this->fields.state == 14 )
  {
    this->fields.state = 15;
    FriendRootComponent__RefreshInfo(this, method);
    operationItemListViewManager = this->fields.operationItemListViewManager;
    v9 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v5, v6, v7, v8);
    System_Action___ctor(v9, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0LL);
    if ( !operationItemListViewManager )
      sub_B170D4();
    operationItemListViewManager->fields.callbackFunc2 = v9;
    sub_B16F98(
      (BattleServantConfConponent_o *)&operationItemListViewManager->fields.callbackFunc2,
      (System_Int32_array **)v9,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
    FriendOperationItemListViewManager__SetMode_31847292(operationItemListViewManager, 4, v16);
  }
}


void __fastcall FriendRootComponent__BackShowSearch(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  System_Action_o *v8; // x21
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  const MethodInfo *v15; // x2

  if ( (byte_40FD962 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_FriendRootComponent_OnMoveEnd__, v6);
    byte_40FD962 = 1;
  }
  if ( this->fields.state == 19 )
  {
    this->fields.state = 20;
    operationItemListViewManager = this->fields.operationItemListViewManager;
    v8 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0LL);
    if ( !operationItemListViewManager )
      sub_B170D4();
    operationItemListViewManager->fields.callbackFunc2 = v8;
    sub_B16F98(
      (BattleServantConfConponent_o *)&operationItemListViewManager->fields.callbackFunc2,
      (System_Int32_array **)v8,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
    FriendOperationItemListViewManager__SetMode_31847292(operationItemListViewManager, 4, v15);
  }
}


void __fastcall FriendRootComponent__ChangeLimitCountBySpoilerProtection(
        FriendRootComponent_o *this,
        const MethodInfo *method)
{
  _BOOL8 SpoilerSetting; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  struct OtherUserGameEntity_o *selectFriendEntity; // x8
  struct ServantLeaderInfo_array *userSvtLeaderHash; // x20
  int max_length; // w8
  unsigned int v9; // w21
  ServantLeaderInfo_o *v10; // x0
  struct OtherUserGameEntity_o *v11; // x8
  struct ServantLeaderInfo_array *eventUserSvtLeaderHash; // x19
  int v13; // w8
  unsigned int v14; // w20
  ServantLeaderInfo_o *v15; // x0

  if ( (byte_40FD982 & 1) == 0 )
  {
    sub_B16FFC(&OptionManager_TypeInfo, method);
    byte_40FD982 = 1;
  }
  if ( this->fields.selectFriendEntity )
  {
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    SpoilerSetting = OptionManager__GetSpoilerSetting(0LL);
    if ( !SpoilerSetting )
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
        v9 = 0;
        while ( v9 < max_length )
        {
          v10 = userSvtLeaderHash->m_Items[v9];
          if ( !v10 )
            goto LABEL_24;
          ServantLeaderInfo__ChangeLimitCountBySpoilerProtection(v10, 0LL);
          max_length = userSvtLeaderHash->max_length;
          if ( (int)++v9 >= max_length )
            goto LABEL_15;
        }
LABEL_23:
        sub_B17100(SpoilerSetting, v4, v5);
        sub_B170A0();
      }
LABEL_15:
      v11 = this->fields.selectFriendEntity;
      if ( !v11 || (eventUserSvtLeaderHash = v11->fields.eventUserSvtLeaderHash) == 0LL )
LABEL_24:
        sub_B170D4();
      v13 = eventUserSvtLeaderHash->max_length;
      if ( v13 >= 1 )
      {
        v14 = 0;
        while ( v14 < v13 )
        {
          v15 = eventUserSvtLeaderHash->m_Items[v14];
          if ( !v15 )
            goto LABEL_24;
          ServantLeaderInfo__ChangeLimitCountBySpoilerProtection(v15, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  System_String_o **v5; // x8
  System_String_o *v6; // x20
  UILabel_o *helpLabel; // x19
  System_String_o *v8; // x0

  if ( (byte_40FD954 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_6444/*"FRIEND_LOCK_HELP_TEXT"*/, v3);
    sub_B16FFC(&StringLiteral_6442/*"FRIEND_HELP_TEXT"*/, v4);
    byte_40FD954 = 1;
  }
  v5 = (System_String_o **)&StringLiteral_6442/*"FRIEND_HELP_TEXT"*/;
  if ( this->fields.isActiveModeKindButtons && this->fields.currentModeKind == 1 )
    v5 = (System_String_o **)&StringLiteral_6444/*"FRIEND_LOCK_HELP_TEXT"*/;
  v6 = *v5;
  helpLabel = this->fields.helpLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v8 = LocalizationManager__Get(v6, 0LL);
  if ( !helpLabel )
    sub_B170D4();
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
  WebViewManager_o *Instance; // x0
  TblFriendMaster_o *MasterData_WarQuestSelectionMaster; // x20
  WebViewManager_o *v11; // x0
  WarQuestSelectionMaster_o *v12; // x0
  UserFollowMaster_o *v13; // x21
  int v14; // w21
  struct UICommonButton_o *modeUserDetailButton; // x0
  struct UICommonButton_o *modeEditLockButton; // x0
  UnityEngine_Behaviour_o *v17; // x0
  UnityEngine_Behaviour_o *v18; // x0
  UICommonButton_o *v19; // x20
  bool enabled; // w0
  UICommonButton_o *v21; // x20
  bool v22; // w0
  __int64 v23; // x8
  UICommonButton_o *v24; // x0
  int32_t currentModeKind; // w8
  UISprite_o *modeUserDetailSprite; // x0
  System_String_o **v27; // x9
  System_String_o *v28; // x20
  System_String_o **v29; // x8
  UISprite_o *modeEditLockSprite; // x0

  if ( (byte_40FD989 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_TblFriendMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserFollowMaster___, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_B16FFC(&StringLiteral_17060/*"button_alllock_unreg"*/, v5);
    sub_B16FFC(&StringLiteral_17066/*"button_infocheck_unreg"*/, v6);
    sub_B16FFC(&StringLiteral_17065/*"button_infocheck_reg"*/, v7);
    sub_B16FFC(&StringLiteral_17059/*"button_alllock_reg"*/, v8);
    byte_40FD989 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_WarQuestSelectionMaster = (TblFriendMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)Instance,
                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_TblFriendMaster___);
  v11 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v11 )
    goto LABEL_30;
  v12 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)v11,
          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserFollowMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_30;
  v13 = (UserFollowMaster_o *)v12;
  if ( TblFriendMaster__GetFriendSum(MasterData_WarQuestSelectionMaster, 0LL) > 0 )
    goto LABEL_9;
  if ( !v13 )
    goto LABEL_30;
  if ( UserFollowMaster__GetFollowSum(v13, 0LL) <= 0 )
  {
    v14 = 1;
    this->fields.currentModeKind = 0;
  }
  else
  {
LABEL_9:
    v14 = 0;
  }
  modeUserDetailButton = this->fields.modeUserDetailButton;
  if ( !modeUserDetailButton )
    goto LABEL_30;
  ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))modeUserDetailButton->klass->vtable._5_set_isEnabled.method)(
    modeUserDetailButton,
    1LL,
    modeUserDetailButton->klass->vtable._6_OnInit.methodPtr);
  modeEditLockButton = this->fields.modeEditLockButton;
  if ( !modeEditLockButton )
    goto LABEL_30;
  ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))modeEditLockButton->klass->vtable._5_set_isEnabled.method)(
    modeEditLockButton,
    1LL,
    modeEditLockButton->klass->vtable._6_OnInit.methodPtr);
  v17 = (UnityEngine_Behaviour_o *)this->fields.modeUserDetailButton;
  if ( !v17 )
    goto LABEL_30;
  UnityEngine_Behaviour__set_enabled(v17, this->fields.currentModeKind != 0, 0LL);
  v18 = (UnityEngine_Behaviour_o *)this->fields.modeEditLockButton;
  if ( !v18 )
    goto LABEL_30;
  UnityEngine_Behaviour__set_enabled(v18, this->fields.currentModeKind != 1, 0LL);
  v19 = this->fields.modeUserDetailButton;
  if ( !v19 )
    goto LABEL_30;
  enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.modeUserDetailButton, 0LL);
  UICommonButton__SetColliderEnable(v19, enabled, 1, 0LL);
  v21 = this->fields.modeEditLockButton;
  if ( !v21 )
    goto LABEL_30;
  v22 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.modeEditLockButton, 0LL);
  UICommonButton__SetColliderEnable(v21, v22, 1, 0LL);
  if ( !v14 )
    goto LABEL_21;
  v23 = 224LL;
  if ( this->fields.currentModeKind )
    v23 = 216LL;
  v24 = *(UICommonButton_o **)((char *)&this->klass + v23);
  if ( !v24 )
LABEL_30:
    sub_B170D4();
  UICommonButton__SetButtonEnable(v24, 0, 1, 0LL);
LABEL_21:
  currentModeKind = this->fields.currentModeKind;
  modeUserDetailSprite = this->fields.modeUserDetailSprite;
  v27 = (System_String_o **)&StringLiteral_17059/*"button_alllock_reg"*/;
  if ( currentModeKind != 1 )
    v27 = (System_String_o **)&StringLiteral_17060/*"button_alllock_unreg"*/;
  if ( !modeUserDetailSprite )
    goto LABEL_30;
  v28 = *v27;
  v29 = (System_String_o **)(currentModeKind ? &StringLiteral_17066/*"button_infocheck_unreg"*/ : &StringLiteral_17065/*"button_infocheck_reg"*/);
  UISprite__set_spriteName(modeUserDetailSprite, *v29, 0LL);
  modeEditLockSprite = this->fields.modeEditLockSprite;
  if ( !modeEditLockSprite )
    goto LABEL_30;
  UISprite__set_spriteName(modeEditLockSprite, v28, 0LL);
}


bool __fastcall FriendRootComponent__CheckTabKind(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  FriendRootComponent_c *v5; // x0
  int32_t tabKindSave; // w8
  PlayMakerFSM_o *myFSM; // x0
  __int64 *v8; // x8

  if ( (byte_40FD958 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_8690/*"MENU_OPERATION_FRIEND"*/, method);
    sub_B16FFC(&StringLiteral_8692/*"MENU_OPERATION_OFFERED"*/, v3);
    sub_B16FFC(&StringLiteral_8693/*"MENU_OPERATION_SEARCH"*/, v4);
    byte_40FD958 = 1;
  }
  if ( !byte_40FD9BD )
  {
    sub_B16FFC(&FriendRootComponent_TypeInfo, method);
    byte_40FD9BD = 1;
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
        v8 = &StringLiteral_8693/*"MENU_OPERATION_SEARCH"*/;
        goto LABEL_17;
      }
      goto LABEL_19;
    case 1:
      myFSM = this->fields.myFSM;
      if ( myFSM )
      {
        v8 = &StringLiteral_8692/*"MENU_OPERATION_OFFERED"*/;
        goto LABEL_17;
      }
LABEL_19:
      sub_B170D4();
    case 0:
      myFSM = this->fields.myFSM;
      if ( myFSM )
      {
        v8 = &StringLiteral_8690/*"MENU_OPERATION_FRIEND"*/;
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x19
  FriendOperationItemListViewManager_CallbackFunc_o *v8; // x21
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  const MethodInfo *v15; // x2

  if ( (byte_40FD969 & 1) == 0 )
  {
    sub_B16FFC(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_FriendRootComponent_OnSelectFriendItem__, v6);
    byte_40FD969 = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v8 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B170CC(
                                                              FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                              method,
                                                              v2,
                                                              v3,
                                                              v4);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
    0LL);
  if ( !operationItemListViewManager )
    sub_B170D4();
  operationItemListViewManager->fields.callbackFunc = v8;
  sub_B16F98(
    (BattleServantConfConponent_o *)&operationItemListViewManager->fields.callbackFunc,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  FriendOperationItemListViewManager__SetMode_31847292(operationItemListViewManager, 2, v15);
}


void __fastcall FriendRootComponent__EndCloseShowServantEquip(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x19
  FriendOperationItemListViewManager_CallbackFunc_o *v8; // x21
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  const MethodInfo *v15; // x2

  if ( (byte_40FD993 & 1) == 0 )
  {
    sub_B16FFC(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_FriendRootComponent_OnSelectFriendItem__, v6);
    byte_40FD993 = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v8 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B170CC(
                                                              FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                              method,
                                                              v2,
                                                              v3,
                                                              v4);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
    0LL);
  if ( !operationItemListViewManager )
    sub_B170D4();
  operationItemListViewManager->fields.callbackFunc = v8;
  sub_B16F98(
    (BattleServantConfConponent_o *)&operationItemListViewManager->fields.callbackFunc,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  FriendOperationItemListViewManager__SetMode_31847292(operationItemListViewManager, 2, v15);
}


void __fastcall FriendRootComponent__EndFriendRequest(
        FriendRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v4; // x1
  FriendRootComponent_c *v5; // x0
  WebViewManager_o *Instance; // x0
  TblFriendMaster_o *MasterData_WarQuestSelectionMaster; // x0
  TblFriendMaster_o *v8; // x20
  FriendRootComponent_o *List; // x0
  const MethodInfo *v10; // x2
  int32_t v11; // w1
  OtherUserGameEntity_array *v12; // x21
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x1

  if ( (byte_40FD955 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_TblFriendMaster___, result);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_40FD955 = 1;
  }
  if ( !byte_40FD9BD )
  {
    sub_B16FFC(&FriendRootComponent_TypeInfo, result);
    byte_40FD9BD = 1;
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
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_WarQuestSelectionMaster = (TblFriendMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_TblFriendMaster___);
      if ( MasterData_WarQuestSelectionMaster )
      {
        v8 = MasterData_WarQuestSelectionMaster;
        List = (FriendRootComponent_o *)TblFriendMaster__GetList(MasterData_WarQuestSelectionMaster, 2, 0LL);
        if ( List )
        {
          if ( List->fields.myFSM )
          {
            v11 = 1;
LABEL_19:
            FriendRootComponent__set_tabKind(List, v11, v10);
            EventTutorialMaster__CheckTutorial(-1, 49, 0LL, 0, 0, 0, 0, 0LL);
            goto LABEL_20;
          }
          v12 = TblFriendMaster__GetList(v8, 3, 0LL);
          List = (FriendRootComponent_o *)TblFriendMaster__GetList(v8, 9, 0LL);
          if ( v12 )
          {
            if ( *(_QWORD *)&v12->max_length )
            {
LABEL_18:
              v11 = 0;
              goto LABEL_19;
            }
            if ( List )
            {
              if ( !List->fields.myFSM )
              {
                FriendRootComponent__set_tabKind(List, 2, v10);
                goto LABEL_20;
              }
              goto LABEL_18;
            }
          }
        }
      }
    }
    sub_B170D4();
  }
LABEL_20:
  FriendRootComponent__InitModeKindButtons(this, (const MethodInfo *)result);
  FriendRootComponent__RefreshTab(this, v13);
  FriendRootComponent__RefreshInfo(this, v14);
  MainMenuBar__setMenuActive(1, 0LL, 0LL);
  SceneRootComponent__beginStartUp_29752064((SceneRootComponent_o *)this, 0LL);
}


void __fastcall FriendRootComponent__EndFriendRequest2(
        FriendRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v4; // x1
  const MethodInfo *v5; // x3
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  struct FriendOperationItemListViewManager_o *v8; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  FriendOperationItemListViewManager_CallbackFunc_o *v13; // x21
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  const MethodInfo *v20; // x2

  if ( (byte_40FD9A9 & 1) == 0 )
  {
    sub_B16FFC(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, result);
    sub_B16FFC(&Method_FriendRootComponent_OnSelectFriendItem__, v4);
    byte_40FD9A9 = 1;
  }
  FriendRootComponent__RefreshInfo(this, (const MethodInfo *)result);
  classButtonControl = this->fields.classButtonControl;
  if ( !classButtonControl
    || (operationItemListViewManager = this->fields.operationItemListViewManager) == 0LL
    || (FriendOperationItemListViewManager__CreateList(
          operationItemListViewManager,
          3,
          classButtonControl->fields.currentCursor,
          v5),
        v8 = this->fields.operationItemListViewManager,
        v13 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B170CC(
                                                                     FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                                     v9,
                                                                     v10,
                                                                     v11,
                                                                     v12),
        FriendOperationItemListViewManager_CallbackFunc___ctor(
          v13,
          (Il2CppObject *)this,
          (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
          0LL),
        !v8) )
  {
    sub_B170D4();
  }
  v8->fields.callbackFunc = v13;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v8->fields.callbackFunc,
    (System_Int32_array **)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  FriendOperationItemListViewManager__SetMode_31847292(v8, 2, v20);
  this->fields.state = 4;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendRootComponent__EndMaxFollowWarningOfferConfirm(
        FriendRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_40FD9A1 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_8687/*"MENU_CANCEL"*/, isDecide);
    byte_40FD9A1 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_8687/*"MENU_CANCEL"*/, 0LL);
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
  __int64 v9; // x3
  __int64 v10; // x4
  FriendOperationItemListViewManager_CallbackFunc_o *v11; // x21
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  const MethodInfo *v18; // x2

  if ( (byte_40FD995 & 1) == 0 )
  {
    sub_B16FFC(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, isDecide);
    sub_B16FFC(&Method_FriendRootComponent_OnSelectFriendItem__, v4);
    byte_40FD995 = 1;
  }
  friendWarningDialog = this->fields.friendWarningDialog;
  if ( !friendWarningDialog
    || (FriendWarningDialog__Close(friendWarningDialog, 0LL),
        operationItemListViewManager = this->fields.operationItemListViewManager,
        v11 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B170CC(
                                                                     FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                                     v7,
                                                                     v8,
                                                                     v9,
                                                                     v10),
        FriendOperationItemListViewManager_CallbackFunc___ctor(
          v11,
          (Il2CppObject *)this,
          (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
          0LL),
        !operationItemListViewManager) )
  {
    sub_B170D4();
  }
  operationItemListViewManager->fields.callbackFunc = v11;
  sub_B16F98(
    (BattleServantConfConponent_o *)&operationItemListViewManager->fields.callbackFunc,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  FriendOperationItemListViewManager__SetMode_31847292(operationItemListViewManager, 2, v18);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendRootComponent__EndMaxFriendWarningOfferConfirm(
        FriendRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_40FD996 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_8687/*"MENU_CANCEL"*/, isDecide);
    byte_40FD996 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_8687/*"MENU_CANCEL"*/, 0LL);
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
  __int64 v10; // x3
  __int64 v11; // x4
  FriendSearchMenu_CallbackFunc_o *v12; // x21
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_40FD983 & 1) == 0 )
  {
    sub_B16FFC(&FriendSearchMenu_CallbackFunc_TypeInfo, isDecide);
    sub_B16FFC(&Method_FriendRootComponent_OnSelectSearchFriend__, v4);
    sub_B16FFC(&StringLiteral_11041/*"REQUEST_NG"*/, v5);
    byte_40FD983 = 1;
  }
  friendWarningDialog = this->fields.friendWarningDialog;
  if ( !friendWarningDialog
    || (FriendWarningDialog__Close(friendWarningDialog, 0LL),
        this->fields.state = 23,
        friendSearchMenu = this->fields.friendSearchMenu,
        v12 = (FriendSearchMenu_CallbackFunc_o *)sub_B170CC(FriendSearchMenu_CallbackFunc_TypeInfo, v8, v9, v10, v11),
        FriendSearchMenu_CallbackFunc___ctor(
          v12,
          (Il2CppObject *)this,
          Method_FriendRootComponent_OnSelectSearchFriend__,
          0LL),
        !friendSearchMenu)
    || (FriendSearchMenu__Open(friendSearchMenu, v12, 0, 0LL), (myFSM = this->fields.myFSM) == 0LL) )
  {
    sub_B170D4();
  }
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_11041/*"REQUEST_NG"*/, 0LL);
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
  System_Collections_Generic_Dictionary_string__object__o *Dictionary; // x0
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *v15; // x20
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  System_String_o *v17; // x20
  PlayMakerFSM_o *myFSM; // x0
  __int64 *v19; // x8
  CommonUI_o *Instance; // x21
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  NotificationDialog_ClickDelegate_o *v25; // x22

  if ( (byte_40FD9A4 & 1) == 0 )
  {
    sub_B16FFC(&NotificationDialog_ClickDelegate_TypeInfo, result);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v6);
    sub_B16FFC(&Method_FriendRootComponent_OnEndRequestDialog__, v7);
    sub_B16FFC(&JsonManager_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_B16FFC(&StringLiteral_11043/*"REQUEST_OK"*/, v10);
    sub_B16FFC(&StringLiteral_11041/*"REQUEST_NG"*/, v11);
    sub_B16FFC(&StringLiteral_20980/*"ng"*/, v12);
    sub_B16FFC(&StringLiteral_20390/*"message"*/, v13);
    byte_40FD9A4 = 1;
  }
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_20980/*"ng"*/, 0LL) )
  {
    myFSM = this->fields.myFSM;
    if ( myFSM )
    {
      v19 = &StringLiteral_11041/*"REQUEST_NG"*/;
      goto LABEL_15;
    }
LABEL_18:
    sub_B170D4();
  }
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  Dictionary = JsonManager__getDictionary(result, 0LL);
  if ( !Dictionary )
    goto LABEL_18;
  v15 = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)Dictionary;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)Dictionary,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_20390/*"message"*/,
          (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_11;
  Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
           v15,
           (System_Type_o *)StringLiteral_20390/*"message"*/,
           (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_18;
  v17 = (System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                             Item,
                             Item->klass->vtable[4].methodPtr);
  if ( System_String__IsNullOrEmpty(v17, 0LL) )
  {
LABEL_11:
    myFSM = this->fields.myFSM;
    if ( myFSM )
    {
      v19 = &StringLiteral_11043/*"REQUEST_OK"*/;
LABEL_15:
      PlayMakerFSM__SendEvent(myFSM, (System_String_o *)*v19, 0LL);
      return;
    }
    goto LABEL_18;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v25 = (NotificationDialog_ClickDelegate_o *)sub_B170CC(NotificationDialog_ClickDelegate_TypeInfo, v21, v22, v23, v24);
  NotificationDialog_ClickDelegate___ctor(
    v25,
    (Il2CppObject *)this,
    Method_FriendRootComponent_OnEndRequestDialog__,
    0LL);
  if ( !Instance )
    goto LABEL_18;
  CommonUI__OpenNotificationDialog_18239760(
    Instance,
    0LL,
    v17,
    v25,
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
  System_Collections_Generic_Dictionary_string__object__o *Dictionary; // x0
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *v15; // x20
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  System_String_o *v17; // x20
  PlayMakerFSM_o *myFSM; // x0
  __int64 *v19; // x8
  CommonUI_o *Instance; // x21
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  NotificationDialog_ClickDelegate_o *v25; // x22

  if ( (byte_40FD9AD & 1) == 0 )
  {
    sub_B16FFC(&NotificationDialog_ClickDelegate_TypeInfo, result);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v6);
    sub_B16FFC(&Method_FriendRootComponent_OnEndRequestDialog__, v7);
    sub_B16FFC(&JsonManager_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_B16FFC(&StringLiteral_11043/*"REQUEST_OK"*/, v10);
    sub_B16FFC(&StringLiteral_11041/*"REQUEST_NG"*/, v11);
    sub_B16FFC(&StringLiteral_20980/*"ng"*/, v12);
    sub_B16FFC(&StringLiteral_20390/*"message"*/, v13);
    byte_40FD9AD = 1;
  }
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_20980/*"ng"*/, 0LL) )
  {
    myFSM = this->fields.myFSM;
    if ( myFSM )
    {
      v19 = &StringLiteral_11041/*"REQUEST_NG"*/;
      goto LABEL_15;
    }
LABEL_18:
    sub_B170D4();
  }
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  Dictionary = JsonManager__getDictionary(result, 0LL);
  if ( !Dictionary )
    goto LABEL_18;
  v15 = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)Dictionary;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)Dictionary,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_20390/*"message"*/,
          (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_11;
  Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
           v15,
           (System_Type_o *)StringLiteral_20390/*"message"*/,
           (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_18;
  v17 = (System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                             Item,
                             Item->klass->vtable[4].methodPtr);
  if ( System_String__IsNullOrEmpty(v17, 0LL) )
  {
LABEL_11:
    myFSM = this->fields.myFSM;
    if ( myFSM )
    {
      v19 = &StringLiteral_11043/*"REQUEST_OK"*/;
LABEL_15:
      PlayMakerFSM__SendEvent(myFSM, (System_String_o *)*v19, 0LL);
      return;
    }
    goto LABEL_18;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v25 = (NotificationDialog_ClickDelegate_o *)sub_B170CC(NotificationDialog_ClickDelegate_TypeInfo, v21, v22, v23, v24);
  NotificationDialog_ClickDelegate___ctor(
    v25,
    (Il2CppObject *)this,
    Method_FriendRootComponent_OnEndRequestDialog__,
    0LL);
  if ( !Instance )
    goto LABEL_18;
  CommonUI__OpenNotificationDialog_18239760(
    Instance,
    0LL,
    v17,
    v25,
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
  System_Collections_Generic_Dictionary_string__object__o *Dictionary; // x0
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *v15; // x20
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  System_String_o *v17; // x20
  PlayMakerFSM_o *myFSM; // x0
  __int64 *v19; // x8
  CommonUI_o *Instance; // x21
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  NotificationDialog_ClickDelegate_o *v25; // x22

  if ( (byte_40FD97E & 1) == 0 )
  {
    sub_B16FFC(&NotificationDialog_ClickDelegate_TypeInfo, result);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v6);
    sub_B16FFC(&Method_FriendRootComponent_OnEndRequestDialog__, v7);
    sub_B16FFC(&JsonManager_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_B16FFC(&StringLiteral_11043/*"REQUEST_OK"*/, v10);
    sub_B16FFC(&StringLiteral_11041/*"REQUEST_NG"*/, v11);
    sub_B16FFC(&StringLiteral_20980/*"ng"*/, v12);
    sub_B16FFC(&StringLiteral_20390/*"message"*/, v13);
    byte_40FD97E = 1;
  }
  MainMenuBar__UpdateNoticeNumber(0LL);
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_20980/*"ng"*/, 0LL) )
  {
    myFSM = this->fields.myFSM;
    if ( myFSM )
    {
      v19 = &StringLiteral_11041/*"REQUEST_NG"*/;
      goto LABEL_15;
    }
LABEL_18:
    sub_B170D4();
  }
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  Dictionary = JsonManager__getDictionary(result, 0LL);
  if ( !Dictionary )
    goto LABEL_18;
  v15 = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)Dictionary;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)Dictionary,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_20390/*"message"*/,
          (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_11;
  Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
           v15,
           (System_Type_o *)StringLiteral_20390/*"message"*/,
           (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_18;
  v17 = (System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                             Item,
                             Item->klass->vtable[4].methodPtr);
  if ( System_String__IsNullOrEmpty(v17, 0LL) )
  {
LABEL_11:
    myFSM = this->fields.myFSM;
    if ( myFSM )
    {
      v19 = &StringLiteral_11043/*"REQUEST_OK"*/;
LABEL_15:
      PlayMakerFSM__SendEvent(myFSM, (System_String_o *)*v19, 0LL);
      return;
    }
    goto LABEL_18;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v25 = (NotificationDialog_ClickDelegate_o *)sub_B170CC(NotificationDialog_ClickDelegate_TypeInfo, v21, v22, v23, v24);
  NotificationDialog_ClickDelegate___ctor(
    v25,
    (Il2CppObject *)this,
    Method_FriendRootComponent_OnEndRequestDialog__,
    0LL);
  if ( !Instance )
    goto LABEL_18;
  CommonUI__OpenNotificationDialog_18239760(
    Instance,
    0LL,
    v17,
    v25,
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
  WebViewManager_o *Instance; // x0
  OtherUserGameMaster_o *MasterData_WarQuestSelectionMaster; // x0
  OtherUserGameEntity_array *FriendCodeList; // x0
  __int64 v18; // x1
  __int64 v19; // x8
  struct OtherUserGameEntity_o *v20; // x1
  const MethodInfo *v21; // x1
  PlayMakerFSM_o *myFSM; // x0
  __int64 *v23; // x8
  const MethodInfo *v24; // x1

  if ( (byte_40FD981 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_OtherUserGameMaster___, result);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_B16FFC(&StringLiteral_11043/*"REQUEST_OK"*/, v6);
    sub_B16FFC(&StringLiteral_21129/*"ok"*/, v7);
    sub_B16FFC(&StringLiteral_11041/*"REQUEST_NG"*/, v8);
    byte_40FD981 = 1;
  }
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_21129/*"ok"*/, 0LL) )
    goto LABEL_11;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_WarQuestSelectionMaster = (OtherUserGameMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_OtherUserGameMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_14;
  FriendCodeList = OtherUserGameMaster__GetFriendCodeList(
                     MasterData_WarQuestSelectionMaster,
                     this->fields.selectFriendCode,
                     0LL);
  if ( !FriendCodeList )
    goto LABEL_14;
  v19 = *(_QWORD *)&FriendCodeList->max_length;
  if ( !v19 )
  {
LABEL_11:
    this->fields.selectFriendEntity = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.selectFriendEntity, 0LL, v9, v10, v11, v12, v13, v14);
    FriendRootComponent__StartSearchInput(this, v24);
    myFSM = this->fields.myFSM;
    if ( myFSM )
    {
      v23 = &StringLiteral_11041/*"REQUEST_NG"*/;
      goto LABEL_13;
    }
LABEL_14:
    sub_B170D4();
  }
  if ( !(_DWORD)v19 )
  {
    sub_B17100(FriendCodeList, v18, v9);
    sub_B170A0();
  }
  v20 = FriendCodeList->m_Items[0];
  this->fields.selectFriendEntity = v20;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.selectFriendEntity,
    (System_Int32_array **)v20,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  FriendRootComponent__ChangeLimitCountBySpoilerProtection(this, v21);
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    goto LABEL_14;
  v23 = &StringLiteral_11043/*"REQUEST_OK"*/;
LABEL_13:
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)*v23, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendRootComponent__EndShowServant(
        FriendRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v11; // x21
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  const MethodInfo *v18; // x2
  CommonUI_o *Instance; // x20
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  System_Action_o *v24; // x21

  if ( (byte_40FD968 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isDecide);
    sub_B16FFC(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, v6);
    sub_B16FFC(&Method_FriendRootComponent_EndCloseShowServant__, v7);
    sub_B16FFC(&Method_FriendRootComponent_OnSelectFriendItem__, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    byte_40FD968 = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v11 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B170CC(
                                                               FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                               isDecide,
                                                               method,
                                                               v3,
                                                               v4);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v11,
    (Il2CppObject *)this,
    (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
    0LL);
  if ( !operationItemListViewManager
    || (operationItemListViewManager->fields.callbackFunc = v11,
        sub_B16F98(
          (BattleServantConfConponent_o *)&operationItemListViewManager->fields.callbackFunc,
          (System_Int32_array **)v11,
          v12,
          v13,
          v14,
          v15,
          v16,
          v17),
        FriendOperationItemListViewManager__SetMode_31847292(operationItemListViewManager, 5, v18),
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v24 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v20, v21, v22, v23),
        System_Action___ctor(v24, (Il2CppObject *)this, Method_FriendRootComponent_EndCloseShowServant__, 0LL),
        !Instance) )
  {
    sub_B170D4();
  }
  CommonUI__CloseServantStatusDialog(Instance, v24, 0LL);
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
  __int64 v9; // x3
  __int64 v10; // x4
  System_Action_o *v11; // x21

  if ( (byte_40FD992 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isDecide);
    sub_B16FFC(&Method_FriendRootComponent_EndCloseShowServantEquip__, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_40FD992 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v7, v8, v9, v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_FriendRootComponent_EndCloseShowServantEquip__, 0LL);
  if ( !Instance )
    sub_B170D4();
  CommonUI__CloseServantEquipStatusDialog(Instance, v11, 0LL);
}


void __fastcall FriendRootComponent__FriendLockRequst(
        FriendRootComponent_o *this,
        System_Action_string__o *onFinishedRequest,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v17; // x20
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  const MethodInfo *v30; // x1
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  System_Collections_Generic_List_long__o *v36; // x21
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  System_Collections_Generic_List_long__o *v41; // x22
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  System_Collections_Generic_List_long__o *v46; // x23
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x4
  System_Collections_Generic_List_long__o *v51; // x24
  ListViewManager_o *v52; // x0
  int32_t ItemSum; // w0
  __int64 v54; // x1
  const MethodInfo *v55; // x2
  __int64 v56; // x3
  __int64 v57; // x4
  int32_t v58; // w25
  FriendOperationItemListViewManager_o *v59; // x0
  FriendOperationItemListViewItem_o *Item; // x0
  int32_t kind; // w8
  struct OtherUserGameEntity_o *otherUserGameEntity; // x8
  int64_t userId; // x1
  const MethodInfo_2F164A0 *v64; // x2
  System_Collections_Generic_List_long__o *v65; // x0
  struct OtherUserGameEntity_o *v66; // x8
  NetworkManager_ResultCallbackFunc_o *v67; // x19
  WarBoardWallAttackRequest_o *Request_WarBoardWallAttackRequest; // x0
  FirendLockSyncRequest_o *v69; // x19
  System_Int64_array *v70; // x0
  System_Int64_array *v71; // x20
  System_Int64_array *v72; // x0
  System_Int64_array *v73; // x21
  System_Int64_array *v74; // x0
  System_Int64_array *v75; // x22
  System_Int64_array *v76; // x0

  if ( (byte_40FD98F & 1) == 0 )
  {
    sub_B16FFC(&Method_ActionExtensions_Call_string___, onFinishedRequest);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__Add__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__ToArray__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_long___ctor__, v9);
    sub_B16FFC(&System_Collections_Generic_List_long__TypeInfo, v10);
    sub_B16FFC(&Method_NetworkManager_getRequest_FirendLockSyncRequest___, v11);
    sub_B16FFC(&NetworkManager_TypeInfo, v12);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v13);
    sub_B16FFC(&Method_FriendRootComponent___c__DisplayClass109_0__FriendLockRequst_b__0__, v14);
    sub_B16FFC(&FriendRootComponent___c__DisplayClass109_0_TypeInfo, v15);
    sub_B16FFC(&StringLiteral_21129/*"ok"*/, v16);
    byte_40FD98F = 1;
  }
  v17 = sub_B170CC(FriendRootComponent___c__DisplayClass109_0_TypeInfo, onFinishedRequest, method, v3, v4);
  FriendRootComponent___c__DisplayClass109_0___ctor((FriendRootComponent___c__DisplayClass109_0_o *)v17, 0LL);
  if ( !v17 )
    goto LABEL_37;
  *(_QWORD *)(v17 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v17 + 16), (System_Int32_array **)this, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)(v17 + 32) = onFinishedRequest;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v17 + 32),
    (System_Int32_array **)onFinishedRequest,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    goto LABEL_37;
  if ( FriendOperationItemListViewManager__get_IsExistSwapLockUser(operationItemListViewManager, v30) )
  {
    v36 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                       System_Collections_Generic_List_long__TypeInfo,
                                                       v32,
                                                       v33,
                                                       v34,
                                                       v35);
    System_Collections_Generic_List_long____ctor(
      v36,
      (const MethodInfo_2F15744 *)Method_System_Collections_Generic_List_long___ctor__);
    v41 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                       System_Collections_Generic_List_long__TypeInfo,
                                                       v37,
                                                       v38,
                                                       v39,
                                                       v40);
    System_Collections_Generic_List_long____ctor(
      v41,
      (const MethodInfo_2F15744 *)Method_System_Collections_Generic_List_long___ctor__);
    v46 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                       System_Collections_Generic_List_long__TypeInfo,
                                                       v42,
                                                       v43,
                                                       v44,
                                                       v45);
    System_Collections_Generic_List_long____ctor(
      v46,
      (const MethodInfo_2F15744 *)Method_System_Collections_Generic_List_long___ctor__);
    v51 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                       System_Collections_Generic_List_long__TypeInfo,
                                                       v47,
                                                       v48,
                                                       v49,
                                                       v50);
    System_Collections_Generic_List_long____ctor(
      v51,
      (const MethodInfo_2F15744 *)Method_System_Collections_Generic_List_long___ctor__);
    v52 = (ListViewManager_o *)this->fields.operationItemListViewManager;
    if ( v52 )
    {
      ItemSum = ListViewManager__get_ItemSum(v52, 0LL);
      *(_DWORD *)(v17 + 24) = ItemSum;
      if ( ItemSum >= 1 )
      {
        v58 = 0;
        while ( 1 )
        {
          v59 = this->fields.operationItemListViewManager;
          if ( !v59 )
            goto LABEL_37;
          Item = FriendOperationItemListViewManager__GetItem(v59, v58, v55);
          if ( !Item )
            goto LABEL_37;
          kind = Item->fields.kind;
          if ( kind == 9 )
            break;
          if ( kind == 3 )
          {
            otherUserGameEntity = Item->fields.otherUserGameEntity;
            if ( !otherUserGameEntity )
              goto LABEL_37;
            userId = otherUserGameEntity->fields.userId;
            if ( Item->fields.isSwapLock == Item->fields.isLock )
            {
              if ( !v41 )
                goto LABEL_37;
              v64 = (const MethodInfo_2F164A0 *)Method_System_Collections_Generic_List_long__Add__;
              v65 = v41;
            }
            else
            {
              if ( !v36 )
                goto LABEL_37;
              v64 = (const MethodInfo_2F164A0 *)Method_System_Collections_Generic_List_long__Add__;
              v65 = v36;
            }
LABEL_25:
            System_Collections_Generic_List_long___Add(v65, userId, v64);
          }
          if ( ++v58 >= *(_DWORD *)(v17 + 24) )
            goto LABEL_27;
        }
        v66 = Item->fields.otherUserGameEntity;
        if ( !v66 )
          goto LABEL_37;
        userId = v66->fields.userId;
        if ( Item->fields.isSwapLock == Item->fields.isLock )
        {
          if ( !v51 )
            goto LABEL_37;
          v64 = (const MethodInfo_2F164A0 *)Method_System_Collections_Generic_List_long__Add__;
          v65 = v51;
        }
        else
        {
          if ( !v46 )
            goto LABEL_37;
          v64 = (const MethodInfo_2F164A0 *)Method_System_Collections_Generic_List_long__Add__;
          v65 = v46;
        }
        goto LABEL_25;
      }
LABEL_27:
      v67 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                     NetworkManager_ResultCallbackFunc_TypeInfo,
                                                     v54,
                                                     v55,
                                                     v56,
                                                     v57);
      NetworkManager_ResultCallbackFunc___ctor(
        v67,
        (Il2CppObject *)v17,
        Method_FriendRootComponent___c__DisplayClass109_0__FriendLockRequst_b__0__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Request_WarBoardWallAttackRequest = NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                            v67,
                                            (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_FirendLockSyncRequest___);
      if ( v36 )
      {
        v69 = (FirendLockSyncRequest_o *)Request_WarBoardWallAttackRequest;
        v70 = System_Collections_Generic_List_long___ToArray(
                v36,
                (const MethodInfo_2F185AC *)Method_System_Collections_Generic_List_long__ToArray__);
        if ( v41 )
        {
          v71 = v70;
          v72 = System_Collections_Generic_List_long___ToArray(
                  v41,
                  (const MethodInfo_2F185AC *)Method_System_Collections_Generic_List_long__ToArray__);
          if ( v46 )
          {
            v73 = v72;
            v74 = System_Collections_Generic_List_long___ToArray(
                    v46,
                    (const MethodInfo_2F185AC *)Method_System_Collections_Generic_List_long__ToArray__);
            if ( v51 )
            {
              v75 = v74;
              v76 = System_Collections_Generic_List_long___ToArray(
                      v51,
                      (const MethodInfo_2F185AC *)Method_System_Collections_Generic_List_long__ToArray__);
              if ( v69 )
              {
                FirendLockSyncRequest__beginRequest(v69, v71, v73, v75, v76, 0LL);
                return;
              }
            }
          }
        }
      }
    }
LABEL_37:
    sub_B170D4();
  }
  ActionExtensions__Call_BlankEarth_QAARotateEarthResponse_(
    *(System_Action_T__o **)(v17 + 32),
    (BlankEarth_QAARotateEarthResponse_o *)StringLiteral_21129/*"ok"*/,
    (const MethodInfo_2D39F2C *)Method_ActionExtensions_Call_string___);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall FriendRootComponent__GetDisplayPositionModeKindButtons(
        FriendRootComponent_o *this,
        const MethodInfo *method)
{
  struct UISprite_o *modeEditLockSprite; // x8
  UnityEngine_GameObject_o *modeButtonParent; // x0
  int mWidth; // w20
  UnityEngine_Transform_o *transform; // x0
  float v7; // s1
  UnityEngine_GameObject_o *v8; // x0
  float v9; // s8
  UnityEngine_Transform_o *v10; // x0
  float z; // s9
  float v12; // s10
  float v13; // s1
  float v14; // s2
  float v15; // s0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FD98A & 1) == 0 )
  {
    sub_B16FFC(&FSUtility_TypeInfo, method);
    byte_40FD98A = 1;
  }
  modeEditLockSprite = this->fields.modeEditLockSprite;
  if ( !modeEditLockSprite
    || (modeButtonParent = this->fields.modeButtonParent) == 0LL
    || (mWidth = modeEditLockSprite->fields.mWidth,
        (transform = UnityEngine_GameObject__get_transform(modeButtonParent, 0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)(&v7 - 1) = UnityEngine_Transform__get_localPosition(transform, 0LL),
        (v8 = this->fields.modeButtonParent) == 0LL)
    || (v9 = v7, (v10 = UnityEngine_GameObject__get_transform(v8, 0LL)) == 0LL) )
  {
    sub_B170D4();
  }
  localPosition = UnityEngine_Transform__get_localPosition(v10, 0LL);
  z = localPosition.fields.z;
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  v12 = (float)mWidth;
  if ( !FSUtility__IsUnderVista(0LL) )
  {
    if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    v12 = v12 - FSUtility__GetOffsetX(74.0, 1, 0LL);
  }
  v13 = v9;
  v14 = z;
  v15 = v12;
  result.fields.z = v14;
  result.fields.y = v13;
  result.fields.x = v15;
  return result;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall FriendRootComponent__GetHidePositionModeKindButtons(
        FriendRootComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *modeButtonParent; // x0
  UnityEngine_Transform_o *transform; // x0
  float v5; // s1
  UnityEngine_GameObject_o *v6; // x0
  float v7; // s8
  UnityEngine_Transform_o *v8; // x0
  float v9; // s2
  float v10; // s0
  float v11; // s1
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  modeButtonParent = this->fields.modeButtonParent;
  if ( !modeButtonParent
    || (transform = UnityEngine_GameObject__get_transform(modeButtonParent, 0LL)) == 0LL
    || (*(UnityEngine_Vector3_o *)(&v5 - 1) = UnityEngine_Transform__get_localPosition(transform, 0LL),
        (v6 = this->fields.modeButtonParent) == 0LL)
    || (v7 = v5, (v8 = UnityEngine_GameObject__get_transform(v6, 0LL)) == 0LL) )
  {
    sub_B170D4();
  }
  *(UnityEngine_Vector3_o *)(&v9 - 2) = UnityEngine_Transform__get_localPosition(v8, 0LL);
  v10 = -200.0;
  v11 = v7;
  result.fields.z = v9;
  result.fields.y = v11;
  result.fields.x = v10;
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
  if ( !byte_40FD9BD )
  {
    sub_B16FFC(&FriendRootComponent_TypeInfo, v4);
    byte_40FD9BD = 1;
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
    sub_B170D4();
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
  __int64 v8; // x3
  __int64 v9; // x4
  FriendRootComponent_messageRequestCallback_o *v10; // x20
  const MethodInfo *v11; // x2

  if ( (byte_40FD985 & 1) == 0 )
  {
    sub_B16FFC(&Method_FriendRootComponent__OnClickBack_b__96_0__, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    sub_B16FFC(&FriendRootComponent_messageRequestCallback_TypeInfo, v4);
    byte_40FD985 = 1;
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
  v10 = (FriendRootComponent_messageRequestCallback_o *)sub_B170CC(
                                                          FriendRootComponent_messageRequestCallback_TypeInfo,
                                                          v6,
                                                          v7,
                                                          v8,
                                                          v9);
  FriendRootComponent_messageRequestCallback___ctor(
    v10,
    (Il2CppObject *)this,
    Method_FriendRootComponent__OnClickBack_b__96_0__,
    0LL);
  FriendRootComponent__messageDispChangeRequest(this, v10, v11);
}


void __fastcall FriendRootComponent__OnClickHelp(FriendRootComponent_o *this, const MethodInfo *method)
{
  if ( (byte_40FD9AE & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FD9AE = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  EventTutorialMaster__ShowTutorialWithoutCheck(-1, 49, 0LL, 0LL);
}


void __fastcall FriendRootComponent__OnClickModeEditLock(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_40FD988 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FD988 = 1;
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v8; // x20
  const MethodInfo *v9; // x2

  if ( (byte_40FD987 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_string___ctor__, method);
    sub_B16FFC(&System_Action_string__TypeInfo, v6);
    sub_B16FFC(&Method_FriendRootComponent__OnClickModeUserDetail_b__98_0__, v7);
    byte_40FD987 = 1;
  }
  if ( this->fields.currentModeKind )
  {
    v8 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                System_Action_string__TypeInfo,
                                                                                method,
                                                                                v2,
                                                                                v3,
                                                                                v4);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v8,
      (Il2CppObject *)this,
      Method_FriendRootComponent__OnClickModeUserDetail_b__98_0__,
      (const MethodInfo_24B7310 *)Method_System_Action_string___ctor__);
    FriendRootComponent__FriendLockRequst(this, (System_Action_string__o *)v8, v9);
  }
}


void __fastcall FriendRootComponent__OnClickTabFriend(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v8; // x20
  const MethodInfo *v9; // x2

  if ( (byte_40FD98B & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_string___ctor__, method);
    sub_B16FFC(&System_Action_string__TypeInfo, v6);
    sub_B16FFC(&Method_FriendRootComponent__OnClickTabFriend_b__105_0__, v7);
    byte_40FD98B = 1;
  }
  v8 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                              System_Action_string__TypeInfo,
                                                                              method,
                                                                              v2,
                                                                              v3,
                                                                              v4);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v8,
    (Il2CppObject *)this,
    Method_FriendRootComponent__OnClickTabFriend_b__105_0__,
    (const MethodInfo_24B7310 *)Method_System_Action_string___ctor__);
  FriendRootComponent__FriendLockRequst(this, (System_Action_string__o *)v8, v9);
}


void __fastcall FriendRootComponent__OnClickTabOffered(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  FriendRootComponent_messageRequestCallback_o *v7; // x20
  const MethodInfo *v8; // x2

  if ( (byte_40FD98C & 1) == 0 )
  {
    sub_B16FFC(&Method_FriendRootComponent__OnClickTabOffered_b__106_0__, method);
    sub_B16FFC(&FriendRootComponent_messageRequestCallback_TypeInfo, v6);
    byte_40FD98C = 1;
  }
  v7 = (FriendRootComponent_messageRequestCallback_o *)sub_B170CC(
                                                         FriendRootComponent_messageRequestCallback_TypeInfo,
                                                         method,
                                                         v2,
                                                         v3,
                                                         v4);
  FriendRootComponent_messageRequestCallback___ctor(
    v7,
    (Il2CppObject *)this,
    Method_FriendRootComponent__OnClickTabOffered_b__106_0__,
    0LL);
  FriendRootComponent__messageDispChangeRequest(this, v7, v8);
}


void __fastcall FriendRootComponent__OnClickTabSearch(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  FriendRootComponent_messageRequestCallback_o *v7; // x20
  const MethodInfo *v8; // x2

  if ( (byte_40FD98D & 1) == 0 )
  {
    sub_B16FFC(&Method_FriendRootComponent__OnClickTabSearch_b__107_0__, method);
    sub_B16FFC(&FriendRootComponent_messageRequestCallback_TypeInfo, v6);
    byte_40FD98D = 1;
  }
  v7 = (FriendRootComponent_messageRequestCallback_o *)sub_B170CC(
                                                         FriendRootComponent_messageRequestCallback_TypeInfo,
                                                         method,
                                                         v2,
                                                         v3,
                                                         v4);
  FriendRootComponent_messageRequestCallback___ctor(
    v7,
    (Il2CppObject *)this,
    Method_FriendRootComponent__OnClickTabSearch_b__107_0__,
    0LL);
  FriendRootComponent__messageDispChangeRequest(this, v7, v8);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendRootComponent__OnEndRequestDialog(
        FriendRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v4; // x1
  CommonUI_o *Instance; // x0
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_40FD97F & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    sub_B16FFC(&StringLiteral_11043/*"REQUEST_OK"*/, v4);
    byte_40FD97F = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance || (CommonUI__CloseNotificationDialog(Instance, 0LL), (myFSM = this->fields.myFSM) == 0LL) )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_11043/*"REQUEST_OK"*/, 0LL);
}


void __fastcall FriendRootComponent__OnMoveEnd(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  FriendRootComponent_o *v5; // x19
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  UnityEngine_Component_o *v11; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v13; // w1
  const MethodInfo *v14; // x1
  struct FriendOperationItemListViewManager_o *v15; // x20
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  FriendOperationItemListViewManager_CallbackFunc_o *v20; // x21
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  const MethodInfo *v27; // x2
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  struct FriendOperationItemListViewManager_o *v29; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v30; // x21
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  const MethodInfo *v37; // x2
  FriendSearchMenu_o *friendSearchMenu; // x20
  FriendSearchMenu_CallbackFunc_o *v39; // x21
  const MethodInfo *v40; // x1
  FriendOperationItemListViewManager_o *v41; // x0
  UnityEngine_Component_o *v42; // x0
  UnityEngine_GameObject_o *v43; // x0
  PlayMakerFSM_o *myFSM; // x0
  struct FriendOperationItemListViewManager_o *v45; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v46; // x21
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  const MethodInfo *v53; // x2
  const MethodInfo *v54; // x1
  const MethodInfo *v55; // x1
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x3
  __int64 v59; // x4
  struct ClassButtonControlComponent_o *v60; // x8
  FriendSearchMenu_o *v61; // x20
  FriendSearchMenu_CallbackFunc_o *v62; // x21

  v5 = this;
  if ( (byte_40FD984 & 1) == 0 )
  {
    sub_B16FFC(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&FriendSearchMenu_CallbackFunc_TypeInfo, v6);
    sub_B16FFC(&Method_FriendRootComponent_OnSelectFriendItem__, v7);
    sub_B16FFC(&Method_FriendRootComponent_OnSelectSearchFriend__, v8);
    this = (FriendRootComponent_o *)sub_B16FFC(&StringLiteral_5461/*"END_ACTION"*/, v9);
    byte_40FD984 = 1;
  }
  switch ( v5->fields.state )
  {
    case 2:
    case 3:
      v13 = 0;
      v5->fields.state = 4;
      goto LABEL_10;
    case 5:
    case 6:
    case 0xA:
    case 0xB:
    case 0xF:
    case 0x10:
      operationItemListViewManager = v5->fields.operationItemListViewManager;
      v5->fields.state = 1;
      if ( !operationItemListViewManager )
        goto LABEL_30;
      FriendOperationItemListViewManager__DestroyList(operationItemListViewManager, method);
      v11 = (UnityEngine_Component_o *)v5->fields.operationItemListViewManager;
      if ( !v11 )
        goto LABEL_30;
      gameObject = UnityEngine_Component__get_gameObject(v11, 0LL);
      if ( !gameObject )
        goto LABEL_30;
      UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
      goto LABEL_21;
    case 7:
    case 8:
      v5->fields.state = 9;
      v29 = v5->fields.operationItemListViewManager;
      v30 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B170CC(
                                                                   FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                                   method,
                                                                   v2,
                                                                   v3,
                                                                   v4);
      FriendOperationItemListViewManager_CallbackFunc___ctor(
        v30,
        (Il2CppObject *)v5,
        (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
        0LL);
      if ( !v29 )
        goto LABEL_30;
      v29->fields.callbackFunc = v30;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v29->fields.callbackFunc,
        (System_Int32_array **)v30,
        v31,
        v32,
        v33,
        v34,
        v35,
        v36);
      FriendOperationItemListViewManager__SetMode_31847292(v29, 2, v37);
      goto LABEL_21;
    case 0xC:
    case 0xD:
      v5->fields.state = 14;
      v13 = 1;
LABEL_10:
      FriendRootComponent__set_tabKind(this, v13, v2);
      FriendRootComponent__RefreshTab(v5, v14);
      v15 = v5->fields.operationItemListViewManager;
      v20 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B170CC(
                                                                   FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                                   v16,
                                                                   v17,
                                                                   v18,
                                                                   v19);
      FriendOperationItemListViewManager_CallbackFunc___ctor(
        v20,
        (Il2CppObject *)v5,
        (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
        0LL);
      if ( !v15 )
        goto LABEL_30;
      v15->fields.callbackFunc = v20;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v15->fields.callbackFunc,
        (System_Int32_array **)v20,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26);
      FriendOperationItemListViewManager__SetMode_31847292(v15, 2, v27);
      classButtonControl = v5->fields.classButtonControl;
      if ( !classButtonControl )
        goto LABEL_30;
      classButtonControl->fields.updateEnable = 1;
LABEL_21:
      FriendRootComponent__RefreshInfo(v5, method);
      break;
    case 0x11:
      v5->fields.state = 18;
      return;
    case 0x12:
      v5->fields.state = 19;
      v45 = v5->fields.operationItemListViewManager;
      v46 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B170CC(
                                                                   FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                                   method,
                                                                   v2,
                                                                   v3,
                                                                   v4);
      FriendOperationItemListViewManager_CallbackFunc___ctor(
        v46,
        (Il2CppObject *)v5,
        (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
        0LL);
      if ( !v45 )
        goto LABEL_30;
      v45->fields.callbackFunc = v46;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v45->fields.callbackFunc,
        (System_Int32_array **)v46,
        v47,
        v48,
        v49,
        v50,
        v51,
        v52);
      FriendOperationItemListViewManager__SetMode_31847292(v45, 2, v53);
      break;
    case 0x14:
    case 0x15:
      v5->fields.state = 23;
      friendSearchMenu = v5->fields.friendSearchMenu;
      v39 = (FriendSearchMenu_CallbackFunc_o *)sub_B170CC(FriendSearchMenu_CallbackFunc_TypeInfo, method, v2, v3, v4);
      FriendSearchMenu_CallbackFunc___ctor(
        v39,
        (Il2CppObject *)v5,
        Method_FriendRootComponent_OnSelectSearchFriend__,
        0LL);
      if ( !friendSearchMenu )
        goto LABEL_30;
      FriendSearchMenu__Open(friendSearchMenu, v39, 0, 0LL);
      v41 = v5->fields.operationItemListViewManager;
      if ( !v41 )
        goto LABEL_30;
      FriendOperationItemListViewManager__DestroyList(v41, v40);
      v42 = (UnityEngine_Component_o *)v5->fields.operationItemListViewManager;
      if ( !v42 )
        goto LABEL_30;
      v43 = UnityEngine_Component__get_gameObject(v42, 0LL);
      if ( !v43 )
        goto LABEL_30;
      UnityEngine_GameObject__SetActive(v43, 0, 0LL);
      break;
    case 0x16:
      v5->fields.state = 23;
      FriendRootComponent__set_tabKind(this, 2, v2);
      FriendRootComponent__RefreshTab(v5, v54);
      FriendRootComponent__RefreshInfo(v5, v55);
      v60 = v5->fields.classButtonControl;
      if ( !v60 )
        goto LABEL_30;
      v60->fields.updateEnable = 1;
      v61 = v5->fields.friendSearchMenu;
      v62 = (FriendSearchMenu_CallbackFunc_o *)sub_B170CC(FriendSearchMenu_CallbackFunc_TypeInfo, v56, v57, v58, v59);
      FriendSearchMenu_CallbackFunc___ctor(
        v62,
        (Il2CppObject *)v5,
        Method_FriendRootComponent_OnSelectSearchFriend__,
        0LL);
      if ( !v61 )
        goto LABEL_30;
      FriendSearchMenu__Open(v61, v62, 1, 0LL);
      break;
    case 0x18:
    case 0x19:
      v5->fields.state = 1;
      goto LABEL_21;
    default:
      return;
  }
  myFSM = v5->fields.myFSM;
  if ( !myFSM )
LABEL_30:
    sub_B170D4();
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_5461/*"END_ACTION"*/, 0LL);
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
  WebViewManager_o *Instance; // x0
  __int64 v34; // x1
  const MethodInfo *v35; // x2
  TblFriendMaster_o *MasterData_WarQuestSelectionMaster; // x22
  FriendOperationItemListViewManager_o *v37; // x0
  FriendOperationItemListViewItem_o *v38; // x0
  const MethodInfo *v39; // x2
  __int64 v40; // x8
  __int64 v41; // x20
  OtherUserGameEntity_o *otherUserGameEntity; // x0
  __int64 v43; // x1
  const MethodInfo *v44; // x2
  SkillInfo_o *v45; // x22
  _QWORD *v46; // x0
  System_Reflection_MethodBase_o *v47; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  SkillEntity_o *v49; // x0
  System_String_o *v50; // x20
  System_String_o *v51; // x21
  Il2CppObject *v52; // x0
  System_String_o *v53; // x0
  CommonUI_o *v54; // x0
  System_String_o *v55; // x1
  System_String_o *v56; // x3
  System_String_o *v57; // x2
  _QWORD *v58; // x0
  System_Reflection_MethodBase_o *v59; // x0
  __int64 v60; // x3
  __int64 v61; // x4
  const MethodInfo *v62; // x2
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  FriendOperationItemListViewItem_o *Item; // x0
  FriendOperationItemListViewItem_o *v65; // x21
  struct System_Int32_array *mainSupportDeckIds; // x8
  __int64 v67; // x20
  SkillInfo_o *v68; // x24
  WebViewManager_o *v69; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v70; // x0
  SkillEntity_o *Entity; // x21
  WebViewManager_o *v72; // x0
  SkillLvMaster_o *v73; // x0
  SkillLvEntity_o *v74; // x0
  SkillLvEntity_o *v75; // x20
  System_String_o *v76; // x21
  System_String_o *v77; // x22
  Il2CppObject *v78; // x0
  System_String_o *v79; // x0
  System_String_o *v80; // x0
  System_String_o *v81; // x21
  Il2CppObject *v82; // x0
  System_String_o *v83; // x20
  PlayMakerFSM_o *myFSM; // x0
  __int64 *v85; // x8
  const MethodInfo *v86; // x2
  FriendOperationItemListViewManager_o *v87; // x0
  FriendOperationItemListViewItem_o *v88; // x0
  FriendOperationItemListViewItem_o *v89; // x8
  FriendRootComponent_c *v90; // x0
  const MethodInfo *v91; // x2
  FriendOperationItemListViewManager_o *v92; // x0
  FriendOperationItemListViewItem_o *v93; // x0
  FriendOperationItemListViewItem_o *v94; // x8
  struct System_Int32_array *v95; // x9
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  OtherUserGameEntity_array *List; // x0
  __int64 v98; // x1
  __int64 v99; // x2
  __int64 v100; // x3
  __int64 v101; // x4
  OtherUserGameEntity_array *v102; // x0
  FriendOperationItemListViewManager_o *v103; // x0
  FriendOperationItemListViewItem_o *v104; // x0
  const MethodInfo *v105; // x1
  FriendOperationItemListViewItem_o *v106; // x20
  ServantLeaderInfo_o *ServantLeader; // x0
  const MethodInfo *v108; // x1
  EquipTargetInfo_o *EquipTargetInfo; // x0
  EquipTargetInfo_o *v110; // x21
  __int64 v111; // x22
  __int64 v112; // x23
  const MethodInfo *v113; // x3
  int32_t v114; // w2
  const MethodInfo *v115; // x2
  FriendOperationItemListViewManager_o *v116; // x0
  FriendOperationItemListViewItem_o *v117; // x0
  const MethodInfo *v118; // x2
  FriendWarningDialog_o *friendWarningDialog; // x20
  FriendWarningDialog_CallbackFunc_o *v120; // x21
  struct FriendOperationItemListViewManager_o *v121; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v122; // x21
  System_String_array **v123; // x2
  System_String_array **v124; // x3
  System_Boolean_array **v125; // x4
  System_Int32_array **v126; // x5
  System_Int32_array *v127; // x6
  System_Int32_array *v128; // x7
  const MethodInfo *v129; // x2
  FriendOperationItemListViewManager_o *v130; // x0
  FriendOperationItemListViewItem_o *v131; // x0
  FriendOperationItemListViewItem_o *v132; // x20
  const MethodInfo *v133; // x1
  int32_t chargeTurn; // [xsp+8h] [xbp-68h] BYREF
  int32_t lv; // [xsp+Ch] [xbp-64h] BYREF
  System_String_o *detail; // [xsp+10h] [xbp-60h] BYREF
  System_String_o *name; // [xsp+18h] [xbp-58h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+20h] [xbp-50h] BYREF
  System_String_o *v139; // [xsp+28h] [xbp-48h] BYREF
  System_String_o *v140; // [xsp+30h] [xbp-40h] BYREF
  SkillInfo_array *v141; // [xsp+38h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v142; // 0:x0.16

  if ( (byte_40FD994 & 1) == 0 )
  {
    sub_B16FFC(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&kind);
    sub_B16FFC(&FriendWarningDialog_CallbackFunc_TypeInfo, v7);
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillLvMaster___, v8);
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillMaster___, v9);
    sub_B16FFC(&Method_DataManager_GetMasterData_TblFriendMaster___, v10);
    sub_B16FFC(&Method_DataManager_GetMaster_SkillMaster___, v11);
    sub_B16FFC(&DataManager_TypeInfo, v12);
    sub_B16FFC(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v13);
    sub_B16FFC(&Method_FriendRootComponent_EndMaxFriendWarning__, v14);
    sub_B16FFC(&Method_FriendRootComponent_OnSelectFriendItem__, v15);
    sub_B16FFC(&int_TypeInfo, v16);
    sub_B16FFC(&LocalizationManager_TypeInfo, v17);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v20);
    sub_B16FFC(&SoundManager_TypeInfo, v21);
    sub_B16FFC(&StringLiteral_8701/*"MENU_SELECT_ITEM_ACCEPT"*/, v22);
    sub_B16FFC(&StringLiteral_80/*" "*/, v23);
    sub_B16FFC(&StringLiteral_8707/*"MENU_SELECT_ITEM_REMOVE_FOLLOW"*/, v24);
    sub_B16FFC(&StringLiteral_8702/*"MENU_SELECT_ITEM_CANCEL"*/, v25);
    sub_B16FFC(&StringLiteral_8603/*"MASTER_EQSKILL_LV_TXT"*/, v26);
    sub_B16FFC(&StringLiteral_8704/*"MENU_SELECT_ITEM_OFFER"*/, v27);
    sub_B16FFC(&StringLiteral_2508/*"BATTLE_SKILLCHARGETURN"*/, v28);
    sub_B16FFC(&StringLiteral_8705/*"MENU_SELECT_ITEM_REJECT"*/, v29);
    sub_B16FFC(&StringLiteral_1/*""*/, v30);
    sub_B16FFC(&StringLiteral_8706/*"MENU_SELECT_ITEM_REMOVE"*/, v31);
    byte_40FD994 = 1;
  }
  v140 = 0LL;
  v141 = 0LL;
  skillInfoList = 0LL;
  v139 = 0LL;
  detail = 0LL;
  name = 0LL;
  this->fields.selectItemNum = n;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_151;
  MasterData_WarQuestSelectionMaster = (TblFriendMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)Instance,
                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_TblFriendMaster___);
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
      operationItemListViewManager = this->fields.operationItemListViewManager;
      if ( !operationItemListViewManager )
        goto LABEL_151;
      Item = FriendOperationItemListViewManager__GetItem(operationItemListViewManager, this->fields.selectItemNum, v62);
      if ( !Item )
        goto LABEL_151;
      v65 = Item;
      otherUserGameEntity = Item->fields.otherUserGameEntity;
      if ( !otherUserGameEntity )
        goto LABEL_151;
      mainSupportDeckIds = otherUserGameEntity->fields.mainSupportDeckIds;
      if ( !mainSupportDeckIds )
        goto LABEL_151;
      if ( !mainSupportDeckIds->max_length )
        goto LABEL_152;
      if ( !OtherUserGameEntity__getServantLeaderInfo(
              otherUserGameEntity,
              v65->fields.classPos,
              0,
              0,
              mainSupportDeckIds->m_Items[1],
              0LL) )
        goto LABEL_140;
      if ( kind == 2 )
        v67 = 1LL;
      else
        v67 = 2LL * (kind == 3);
      otherUserGameEntity = (OtherUserGameEntity_o *)FriendOperationItemListViewItem__GetSkillInfo(v65, &v141, v44);
      if ( !v141 )
        goto LABEL_151;
      if ( (unsigned int)v67 >= v141->max_length )
        goto LABEL_152;
      v68 = v141->m_Items[v67];
      if ( !v68 || v68->fields.id < 1 || v68->fields.lv < 1 )
        goto LABEL_140;
      v69 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v69 )
        goto LABEL_151;
      v70 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)v69,
                                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillMaster___);
      if ( !v70 )
        goto LABEL_151;
      Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  v70,
                                  v68->fields.id,
                                  (const MethodInfo_266F388 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      v72 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v72 )
        goto LABEL_151;
      v73 = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                 (DataManager_o *)v72,
                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillLvMaster___);
      if ( !v73 )
        goto LABEL_151;
      v74 = SkillLvMaster__GetEntity(v73, v68->fields.id, v68->fields.lv, 0LL);
      if ( !Entity )
        goto LABEL_151;
      v75 = v74;
      SkillEntity__getSkillMessageInfo(Entity, &v140, &v139, v68->fields.lv, 0LL);
      v76 = v140;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v77 = LocalizationManager__Get((System_String_o *)StringLiteral_8603/*"MASTER_EQSKILL_LV_TXT"*/, 0LL);
      lv = v68->fields.lv;
      v78 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv);
      v79 = System_String__Format(v77, v78, 0LL);
      v140 = System_String__Concat_43746016(v76, (System_String_o *)StringLiteral_80/*" "*/, v79, 0LL);
      v80 = LocalizationManager__Get((System_String_o *)StringLiteral_2508/*"BATTLE_SKILLCHARGETURN"*/, 0LL);
      if ( !v75 )
        goto LABEL_151;
      v81 = v80;
      chargeTurn = v75->fields.chargeTurn;
      v82 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &chargeTurn);
      v83 = System_String__Format(v81, v82, 0LL);
      v54 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !v54 )
        goto LABEL_151;
      v56 = v139;
      v55 = v140;
      v57 = v83;
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
      List = TblFriendMaster__GetList(MasterData_WarQuestSelectionMaster, 3, 0LL);
      if ( !List || !SelfUserGame )
        goto LABEL_151;
      if ( SelfUserGame->fields.friendKeep <= (signed int)List->max_length )
        goto LABEL_134;
      myFSM = this->fields.myFSM;
      if ( !myFSM )
        goto LABEL_151;
      v85 = &StringLiteral_8704/*"MENU_SELECT_ITEM_OFFER"*/;
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
      v102 = TblFriendMaster__GetList(MasterData_WarQuestSelectionMaster, 3, 0LL);
      if ( !v102 || !SelfUserGame )
        goto LABEL_151;
      if ( SelfUserGame->fields.friendKeep <= (signed int)v102->max_length )
      {
LABEL_134:
        friendWarningDialog = this->fields.friendWarningDialog;
        v120 = (FriendWarningDialog_CallbackFunc_o *)sub_B170CC(
                                                       FriendWarningDialog_CallbackFunc_TypeInfo,
                                                       v98,
                                                       v99,
                                                       v100,
                                                       v101);
        FriendWarningDialog_CallbackFunc___ctor(
          v120,
          (Il2CppObject *)this,
          Method_FriendRootComponent_EndMaxFriendWarning__,
          0LL);
        if ( friendWarningDialog )
        {
          FriendWarningDialog__Open(friendWarningDialog, 1, v120, 0LL);
          return;
        }
LABEL_151:
        sub_B170D4();
      }
      myFSM = this->fields.myFSM;
      if ( !myFSM )
        goto LABEL_151;
      v85 = &StringLiteral_8701/*"MENU_SELECT_ITEM_ACCEPT"*/;
LABEL_143:
      PlayMakerFSM__SendEvent(myFSM, (System_String_o *)*v85, 0LL);
      return;
    case 6:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      myFSM = this->fields.myFSM;
      if ( !myFSM )
        goto LABEL_151;
      v85 = &StringLiteral_8705/*"MENU_SELECT_ITEM_REJECT"*/;
      goto LABEL_143;
    case 7:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      myFSM = this->fields.myFSM;
      if ( !myFSM )
        goto LABEL_151;
      v85 = &StringLiteral_8702/*"MENU_SELECT_ITEM_CANCEL"*/;
      goto LABEL_143;
    case 8:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      v87 = this->fields.operationItemListViewManager;
      if ( !v87 )
        goto LABEL_151;
      v88 = FriendOperationItemListViewManager__GetItem(v87, this->fields.selectItemNum, v86);
      if ( !v88 )
        goto LABEL_151;
      v89 = v88;
      myFSM = this->fields.myFSM;
      if ( !myFSM )
        goto LABEL_151;
      if ( v89->fields.kind == 9 )
        v85 = &StringLiteral_8707/*"MENU_SELECT_ITEM_REMOVE_FOLLOW"*/;
      else
        v85 = &StringLiteral_8706/*"MENU_SELECT_ITEM_REMOVE"*/;
      goto LABEL_143;
    case 11:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      v116 = this->fields.operationItemListViewManager;
      if ( !v116 )
        goto LABEL_151;
      v117 = FriendOperationItemListViewManager__GetItem(v116, this->fields.selectItemNum, v115);
      if ( !v117 )
        goto LABEL_151;
      FriendOperationItemListViewItem__set_isSwapMessageDisp(v117, !v117->fields.swapMessageDisp, v118);
      goto LABEL_140;
    case 12:
      v103 = this->fields.operationItemListViewManager;
      if ( !v103 )
        goto LABEL_151;
      v104 = FriendOperationItemListViewManager__GetItem(v103, this->fields.selectItemNum, v35);
      if ( !v104 )
        goto LABEL_151;
      v106 = v104;
      ServantLeader = FriendOperationItemListViewItem__get_ServantLeader(v104, v105);
      if ( !ServantLeader || !ServantLeaderInfo__IsHideEquip(ServantLeader, 0LL) )
      {
        EquipTargetInfo = FriendOperationItemListViewItem__get_EquipTargetInfo(v106, v108);
        if ( EquipTargetInfo )
        {
          v110 = EquipTargetInfo;
          v112 = *(_QWORD *)&EquipTargetInfo->fields.svtId.fields.currentCryptoKey;
          v111 = *(_QWORD *)&EquipTargetInfo->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v142.fields.currentCryptoKey = v112;
          *(_QWORD *)&v142.fields.fakeValue = v111;
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v142, 0LL) >= 1 )
          {
            if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !SoundManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
            }
            SoundManager__playSystemSe(0, 0LL);
            if ( v106->fields.kind == 9 )
              v114 = 14;
            else
              v114 = 13;
            FriendRootComponent__SelectShowServantEquip(this, v110, v114, v113);
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
      v37 = this->fields.operationItemListViewManager;
      if ( !v37 )
        goto LABEL_151;
      v38 = FriendOperationItemListViewManager__GetItem(v37, this->fields.selectItemNum, v35);
      v40 = (unsigned int)(kind - 14);
      v41 = (unsigned int)v40 < 4 ? v40 + 1 : 0LL;
      if ( !v38 )
        goto LABEL_151;
      otherUserGameEntity = (OtherUserGameEntity_o *)FriendOperationItemListViewItem__GetAppendSkillInfo(
                                                       v38,
                                                       &skillInfoList,
                                                       v39);
      if ( !skillInfoList )
        goto LABEL_151;
      if ( (unsigned int)v41 >= skillInfoList->max_length )
        goto LABEL_152;
      v45 = skillInfoList->m_Items[v41];
      if ( v45 && v45->fields.id >= 1 && v45->fields.lv >= 1 )
      {
        v46 = Method_FriendRootComponent_OnSelectFriendItem__;
        if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 75) & 2) != 0 )
          v46 = (_QWORD *)sub_B17004(Method_FriendRootComponent_OnSelectFriendItem__);
        v47 = (System_Reflection_MethodBase_o *)sub_B16FE0(v46, v46[3]);
        OverwriteAssetSoundName__PlaySystemSe(v47, 0, 0LL);
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_SkillMaster___);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_151;
        v49 = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                 Master_WarQuestSelectionMaster,
                                 v45->fields.id,
                                 (const MethodInfo_266F388 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        if ( !v49 )
          goto LABEL_151;
        SkillEntity__getSkillMessageInfo(v49, &name, &detail, v45->fields.lv, 0LL);
        v50 = name;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v51 = LocalizationManager__Get((System_String_o *)StringLiteral_8603/*"MASTER_EQSKILL_LV_TXT"*/, 0LL);
        lv = v45->fields.lv;
        v52 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv);
        v53 = System_String__Format(v51, v52, 0LL);
        name = System_String__Concat_43746016(v50, (System_String_o *)StringLiteral_80/*" "*/, v53, 0LL);
        v54 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !v54 )
          goto LABEL_151;
        v56 = detail;
        v55 = name;
        v57 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_58:
        CommonUI__OpenDetailLongInfoDialog(v54, v55, v57, v56, 1, 0, 0LL);
      }
      else
      {
        v58 = Method_FriendRootComponent_OnSelectFriendItem__;
        if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 75) & 2) != 0 )
          v58 = (_QWORD *)sub_B17004(Method_FriendRootComponent_OnSelectFriendItem__);
        v59 = (System_Reflection_MethodBase_o *)sub_B16FE0(v58, v58[3]);
        OverwriteAssetSoundName__PlaySystemSe(v59, 2, 0LL);
      }
      goto LABEL_140;
    default:
      if ( this->fields.currentModeKind != 1 )
        goto LABEL_155;
      if ( !byte_40FD9BD )
      {
        sub_B16FFC(&FriendRootComponent_TypeInfo, v34);
        byte_40FD9BD = 1;
      }
      v90 = FriendRootComponent_TypeInfo;
      if ( (BYTE3(FriendRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !FriendRootComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FriendRootComponent_TypeInfo);
        v90 = FriendRootComponent_TypeInfo;
      }
      if ( !v90->static_fields->tabKindSave )
      {
        v130 = this->fields.operationItemListViewManager;
        if ( !v130 )
          goto LABEL_151;
        v131 = FriendOperationItemListViewManager__GetItem(v130, this->fields.selectItemNum, v35);
        if ( v131 )
        {
          v132 = v131;
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(11, 0LL);
          FriendOperationItemListViewItem__SwapLock(v132, v133);
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
        v92 = this->fields.operationItemListViewManager;
        if ( !v92 )
          goto LABEL_151;
        v93 = FriendOperationItemListViewManager__GetItem(v92, this->fields.selectItemNum, v91);
        if ( !v93 )
          goto LABEL_151;
        v94 = v93;
        otherUserGameEntity = v93->fields.otherUserGameEntity;
        if ( !otherUserGameEntity )
          goto LABEL_151;
        v95 = otherUserGameEntity->fields.mainSupportDeckIds;
        if ( !v95 )
          goto LABEL_151;
        if ( !v95->max_length )
        {
LABEL_152:
          sub_B17100(otherUserGameEntity, v43, v44);
          sub_B170A0();
        }
        ServantLeaderInfo = OtherUserGameEntity__getServantLeaderInfo(
                              otherUserGameEntity,
                              v94->fields.classPos,
                              0,
                              0,
                              v95->m_Items[1],
                              0LL);
        if ( ServantLeaderInfo )
        {
          FriendRootComponent__SelectShowServant(this, ServantLeaderInfo, v44);
          return;
        }
      }
LABEL_140:
      v121 = this->fields.operationItemListViewManager;
      v122 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_B170CC(
                                                                    FriendOperationItemListViewManager_CallbackFunc_TypeInfo,
                                                                    v43,
                                                                    v44,
                                                                    v60,
                                                                    v61);
      FriendOperationItemListViewManager_CallbackFunc___ctor(
        v122,
        (Il2CppObject *)this,
        (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
        0LL);
      if ( v121 )
      {
        v121->fields.callbackFunc = v122;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v121->fields.callbackFunc,
          (System_Int32_array **)v122,
          v123,
          v124,
          v125,
          v126,
          v127,
          v128);
        FriendOperationItemListViewManager__SetMode_31847292(v121, 2, v129);
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
  PlayMakerFSM_o *myFSM; // x0
  __int64 *v11; // x8

  if ( (byte_40FD99E & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_8703/*"MENU_SELECT_ITEM_FOLLOW"*/, *(_QWORD *)&state);
    sub_B16FFC(&StringLiteral_8704/*"MENU_SELECT_ITEM_OFFER"*/, v7);
    sub_B16FFC(&StringLiteral_8687/*"MENU_CANCEL"*/, v8);
    byte_40FD99E = 1;
  }
  classButtonControl = this->fields.classButtonControl;
  if ( !classButtonControl )
    goto LABEL_12;
  ClassButtonControlComponent__setCursor(classButtonControl, classPos, 0LL);
  myFSM = this->fields.myFSM;
  if ( state == 2 )
  {
    if ( myFSM )
    {
      v11 = &StringLiteral_8704/*"MENU_SELECT_ITEM_OFFER"*/;
      goto LABEL_11;
    }
LABEL_12:
    sub_B170D4();
  }
  if ( !myFSM )
    goto LABEL_12;
  if ( state == 3 )
    v11 = &StringLiteral_8703/*"MENU_SELECT_ITEM_FOLLOW"*/;
  else
    v11 = &StringLiteral_8687/*"MENU_CANCEL"*/;
LABEL_11:
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)*v11, 0LL);
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

  if ( (byte_40FD99D & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_8688/*"MENU_DECIDE"*/, isDecide);
    sub_B16FFC(&StringLiteral_8687/*"MENU_CANCEL"*/, v11);
    byte_40FD99D = 1;
  }
  this->fields.selectFriendCode = friendCode;
  sub_B16F98(
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
    sub_B170D4();
  v13 = &StringLiteral_8688/*"MENU_DECIDE"*/;
  if ( !isDecide )
    v13 = &StringLiteral_8687/*"MENU_CANCEL"*/;
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)*v13, 0LL);
}


void __fastcall FriendRootComponent__OpenHelpDialog(FriendRootComponent_o *this, const MethodInfo *method)
{
  EventTutorialMaster__ShowTutorialWithoutCheck(-1, 49, 0LL, 0LL);
}


void __fastcall FriendRootComponent__Quit(FriendRootComponent_o *this, const MethodInfo *method)
{
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  UnityEngine_Component_o *v4; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v6; // x1

  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager
    || (FriendOperationItemListViewManager__DestroyList(operationItemListViewManager, method),
        (v4 = (UnityEngine_Component_o *)this->fields.operationItemListViewManager) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject(v4, 0LL)) == 0LL )
  {
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  FriendRootComponent__RefreshInfo(this, v6);
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
  WebViewManager_o *Instance; // x0
  TblFriendMaster_o *MasterData_WarQuestSelectionMaster; // x20
  WebViewManager_o *v12; // x0
  WarQuestSelectionMaster_o *v13; // x0
  UILabel_o *friendCountLabel; // x23
  UserFollowMaster_o *v15; // x21
  System_String_o *v16; // x0
  System_String_o *v17; // x24
  __int64 v18; // x0
  Il2CppObject *v19; // x25
  Il2CppObject *v20; // x0
  System_String_o *v21; // x0
  UILabel_o *followCountLabel; // x22
  System_String_o *v23; // x0
  System_String_o *v24; // x23
  Il2CppObject *v25; // x21
  BalanceConfig_c *v26; // x8
  Il2CppObject *v27; // x0
  System_String_o *v28; // x0
  int32_t Sum; // w0
  const MethodInfo *v30; // x1
  const MethodInfo *v31; // x1
  int32_t FollowNum; // [xsp+8h] [xbp-58h] BYREF
  int32_t FollowSum; // [xsp+Ch] [xbp-54h] BYREF
  int32_t friendKeep; // [xsp+18h] [xbp-48h] BYREF
  int32_t FriendSum; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_40FD95A & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_TblFriendMaster___, v3);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserFollowMaster___, v4);
    sub_B16FFC(&int_TypeInfo, v5);
    sub_B16FFC(&LocalizationManager_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_B16FFC(&StringLiteral_6477/*"FRIEND_SHOW_INFOMATION"*/, v8);
    byte_40FD95A = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  MasterData_WarQuestSelectionMaster = (TblFriendMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)Instance,
                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_TblFriendMaster___);
  v12 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v12 )
    goto LABEL_18;
  v13 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)v12,
          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserFollowMaster___);
  friendCountLabel = this->fields.friendCountLabel;
  v15 = (UserFollowMaster_o *)v13;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_6477/*"FRIEND_SHOW_INFOMATION"*/, 0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_18;
  v17 = v16;
  FriendSum = TblFriendMaster__GetFriendSum(MasterData_WarQuestSelectionMaster, 0LL);
  v18 = j_il2cpp_value_box_0(int_TypeInfo, &FriendSum);
  if ( !SelfUserGame )
    goto LABEL_18;
  v19 = (Il2CppObject *)v18;
  friendKeep = SelfUserGame->fields.friendKeep;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &friendKeep);
  v21 = System_String__Format_43739268(v17, v19, v20, 0LL);
  if ( !friendCountLabel )
    goto LABEL_18;
  UILabel__set_text(friendCountLabel, v21, 0LL);
  followCountLabel = this->fields.followCountLabel;
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_6477/*"FRIEND_SHOW_INFOMATION"*/, 0LL);
  if ( !v15 )
    goto LABEL_18;
  v24 = v23;
  FollowSum = UserFollowMaster__GetFollowSum(v15, 0LL);
  v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &FollowSum);
  v26 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v26 = BalanceConfig_TypeInfo;
  }
  FollowNum = v26->static_fields->FollowNum;
  v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &FollowNum);
  v28 = System_String__Format_43739268(v24, v25, v27, 0LL);
  if ( !followCountLabel
    || (UILabel__set_text(followCountLabel, v28, 0LL),
        Sum = TblFriendMaster__GetSum(MasterData_WarQuestSelectionMaster, 2, 0LL),
        !this->fields.noticeNumber) )
  {
LABEL_18:
    sub_B170D4();
  }
  NoticeNumberComponent__SetNumber(this->fields.noticeNumber, Sum, 0LL);
  FriendRootComponent__CheckModeKind(this, v30);
  FriendRootComponent__CheckHelpUI(this, v31);
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
  struct UICommonButton_o *v12; // x0
  struct UICommonButton_o *v13; // x0
  struct UICommonButton_o *v14; // x0
  UnityEngine_Behaviour_o *v15; // x0
  UnityEngine_Behaviour_o *v16; // x0
  UnityEngine_Behaviour_o *v17; // x0
  UISprite_o *v18; // x0
  UISprite_o *v19; // x0
  UISprite_o *v20; // x0
  UISprite_o *v21; // x0
  UISprite_o *v22; // x0
  System_String_o *v23; // x1
  struct UICommonButton_o *tabFriendButton; // x0
  struct UICommonButton_o *tabOfferedButton; // x0
  struct UICommonButton_o *tabSearchButton; // x0
  UnityEngine_Behaviour_o *v27; // x0
  UnityEngine_Behaviour_o *v28; // x0
  UnityEngine_Behaviour_o *v29; // x0
  UISprite_o *tabFriendTitleSprite; // x0
  UISprite_o *tabOfferedTitleSprite; // x0
  UISprite_o *tabSearchTitleSprite; // x0
  UISprite_o *tabFriendSprite; // x0
  UISprite_o *tabOfferedSprite; // x0
  UISprite_o *tabSearchSprite; // x0
  System_String_o *v36; // x1
  struct UICommonButton_o *v37; // x0
  struct UICommonButton_o *v38; // x0
  struct UICommonButton_o *v39; // x0
  UnityEngine_Behaviour_o *v40; // x0
  UnityEngine_Behaviour_o *v41; // x0
  UnityEngine_Behaviour_o *v42; // x0
  UISprite_o *v43; // x0
  UISprite_o *v44; // x0
  UISprite_o *v45; // x0
  UISprite_o *v46; // x0
  struct UICommonButton_o *v47; // x0
  struct UICommonButton_o *v48; // x0
  struct UICommonButton_o *v49; // x0
  const MethodInfo *v50; // x1
  __int64 v51; // x1
  const MethodInfo *v52; // x2
  FriendRootComponent_c *v53; // x0
  UICommonButton_o *v54; // x20
  bool enabled; // w0
  UICommonButton_o *v56; // x20
  bool v57; // w0
  UnityEngine_Behaviour_o *v58; // x19
  bool v59; // w1

  if ( (byte_40FD959 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16994/*"btn_txt_friendsearch_on"*/, method);
    sub_B16FFC(&StringLiteral_16993/*"btn_txt_friendsearch_off"*/, v3);
    sub_B16FFC(&StringLiteral_16895/*"btn_bg_09"*/, v4);
    sub_B16FFC(&StringLiteral_16992/*"btn_txt_friendrequest_on"*/, v5);
    sub_B16FFC(&StringLiteral_16990/*"btn_txt_friendlist_on"*/, v6);
    sub_B16FFC(&StringLiteral_16991/*"btn_txt_friendrequest_off"*/, v7);
    sub_B16FFC(&StringLiteral_16989/*"btn_txt_friendlist_off"*/, v8);
    sub_B16FFC(&StringLiteral_16910/*"btn_bg_on"*/, v9);
    byte_40FD959 = 1;
  }
  if ( !byte_40FD9BD )
  {
    sub_B16FFC(&FriendRootComponent_TypeInfo, method);
    byte_40FD9BD = 1;
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
    tabFriendButton = this->fields.tabFriendButton;
    if ( !tabFriendButton )
      goto LABEL_63;
    ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))tabFriendButton->klass->vtable._5_set_isEnabled.method)(
      tabFriendButton,
      1LL,
      tabFriendButton->klass->vtable._6_OnInit.methodPtr);
    tabOfferedButton = this->fields.tabOfferedButton;
    if ( !tabOfferedButton )
      goto LABEL_63;
    ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))tabOfferedButton->klass->vtable._5_set_isEnabled.method)(
      tabOfferedButton,
      1LL,
      tabOfferedButton->klass->vtable._6_OnInit.methodPtr);
    tabSearchButton = this->fields.tabSearchButton;
    if ( !tabSearchButton )
      goto LABEL_63;
    ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))tabSearchButton->klass->vtable._5_set_isEnabled.method)(
      tabSearchButton,
      1LL,
      tabSearchButton->klass->vtable._6_OnInit.methodPtr);
    v27 = (UnityEngine_Behaviour_o *)this->fields.tabFriendButton;
    if ( !v27 )
      goto LABEL_63;
    UnityEngine_Behaviour__set_enabled(v27, 1, 0LL);
    v28 = (UnityEngine_Behaviour_o *)this->fields.tabOfferedButton;
    if ( !v28 )
      goto LABEL_63;
    UnityEngine_Behaviour__set_enabled(v28, 1, 0LL);
    v29 = (UnityEngine_Behaviour_o *)this->fields.tabSearchButton;
    if ( !v29 )
      goto LABEL_63;
    UnityEngine_Behaviour__set_enabled(v29, 0, 0LL);
    tabFriendTitleSprite = this->fields.tabFriendTitleSprite;
    if ( !tabFriendTitleSprite )
      goto LABEL_63;
    UISprite__set_spriteName(tabFriendTitleSprite, (System_String_o *)StringLiteral_16989/*"btn_txt_friendlist_off"*/, 0LL);
    tabOfferedTitleSprite = this->fields.tabOfferedTitleSprite;
    if ( !tabOfferedTitleSprite )
      goto LABEL_63;
    UISprite__set_spriteName(tabOfferedTitleSprite, (System_String_o *)StringLiteral_16991/*"btn_txt_friendrequest_off"*/, 0LL);
    tabSearchTitleSprite = this->fields.tabSearchTitleSprite;
    if ( !tabSearchTitleSprite )
      goto LABEL_63;
    UISprite__set_spriteName(tabSearchTitleSprite, (System_String_o *)StringLiteral_16994/*"btn_txt_friendsearch_on"*/, 0LL);
    tabFriendSprite = this->fields.tabFriendSprite;
    if ( !tabFriendSprite )
      goto LABEL_63;
    UISprite__set_spriteName(tabFriendSprite, (System_String_o *)StringLiteral_16895/*"btn_bg_09"*/, 0LL);
    tabOfferedSprite = this->fields.tabOfferedSprite;
    if ( !tabOfferedSprite )
      goto LABEL_63;
    UISprite__set_spriteName(tabOfferedSprite, (System_String_o *)StringLiteral_16895/*"btn_bg_09"*/, 0LL);
    tabSearchSprite = this->fields.tabSearchSprite;
    if ( !tabSearchSprite )
      goto LABEL_63;
    v36 = (System_String_o *)StringLiteral_16910/*"btn_bg_on"*/;
  }
  else
  {
    if ( tabKindSave == 1 )
    {
      v37 = this->fields.tabFriendButton;
      if ( !v37 )
        goto LABEL_63;
      ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))v37->klass->vtable._5_set_isEnabled.method)(
        v37,
        1LL,
        v37->klass->vtable._6_OnInit.methodPtr);
      v38 = this->fields.tabOfferedButton;
      if ( !v38 )
        goto LABEL_63;
      ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))v38->klass->vtable._5_set_isEnabled.method)(
        v38,
        1LL,
        v38->klass->vtable._6_OnInit.methodPtr);
      v39 = this->fields.tabSearchButton;
      if ( !v39 )
        goto LABEL_63;
      ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))v39->klass->vtable._5_set_isEnabled.method)(
        v39,
        1LL,
        v39->klass->vtable._6_OnInit.methodPtr);
      v40 = (UnityEngine_Behaviour_o *)this->fields.tabFriendButton;
      if ( !v40 )
        goto LABEL_63;
      UnityEngine_Behaviour__set_enabled(v40, 1, 0LL);
      v41 = (UnityEngine_Behaviour_o *)this->fields.tabOfferedButton;
      if ( !v41 )
        goto LABEL_63;
      UnityEngine_Behaviour__set_enabled(v41, 0, 0LL);
      v42 = (UnityEngine_Behaviour_o *)this->fields.tabSearchButton;
      if ( !v42 )
        goto LABEL_63;
      UnityEngine_Behaviour__set_enabled(v42, 1, 0LL);
      v43 = this->fields.tabFriendTitleSprite;
      if ( !v43 )
        goto LABEL_63;
      UISprite__set_spriteName(v43, (System_String_o *)StringLiteral_16989/*"btn_txt_friendlist_off"*/, 0LL);
      v44 = this->fields.tabOfferedTitleSprite;
      if ( !v44 )
        goto LABEL_63;
      UISprite__set_spriteName(v44, (System_String_o *)StringLiteral_16992/*"btn_txt_friendrequest_on"*/, 0LL);
      v45 = this->fields.tabSearchTitleSprite;
      if ( !v45 )
        goto LABEL_63;
      UISprite__set_spriteName(v45, (System_String_o *)StringLiteral_16993/*"btn_txt_friendsearch_off"*/, 0LL);
      v46 = this->fields.tabFriendSprite;
      if ( !v46 )
        goto LABEL_63;
      UISprite__set_spriteName(v46, (System_String_o *)StringLiteral_16895/*"btn_bg_09"*/, 0LL);
      v22 = this->fields.tabOfferedSprite;
      if ( !v22 )
        goto LABEL_63;
      v23 = (System_String_o *)StringLiteral_16910/*"btn_bg_on"*/;
    }
    else
    {
      if ( tabKindSave )
        goto LABEL_54;
      v12 = this->fields.tabFriendButton;
      if ( !v12 )
        goto LABEL_63;
      ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))v12->klass->vtable._5_set_isEnabled.method)(
        v12,
        1LL,
        v12->klass->vtable._6_OnInit.methodPtr);
      v13 = this->fields.tabOfferedButton;
      if ( !v13 )
        goto LABEL_63;
      ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))v13->klass->vtable._5_set_isEnabled.method)(
        v13,
        1LL,
        v13->klass->vtable._6_OnInit.methodPtr);
      v14 = this->fields.tabSearchButton;
      if ( !v14 )
        goto LABEL_63;
      ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))v14->klass->vtable._5_set_isEnabled.method)(
        v14,
        1LL,
        v14->klass->vtable._6_OnInit.methodPtr);
      v15 = (UnityEngine_Behaviour_o *)this->fields.tabFriendButton;
      if ( !v15 )
        goto LABEL_63;
      UnityEngine_Behaviour__set_enabled(v15, 0, 0LL);
      v16 = (UnityEngine_Behaviour_o *)this->fields.tabOfferedButton;
      if ( !v16 )
        goto LABEL_63;
      UnityEngine_Behaviour__set_enabled(v16, 1, 0LL);
      v17 = (UnityEngine_Behaviour_o *)this->fields.tabSearchButton;
      if ( !v17 )
        goto LABEL_63;
      UnityEngine_Behaviour__set_enabled(v17, 1, 0LL);
      v18 = this->fields.tabFriendTitleSprite;
      if ( !v18 )
        goto LABEL_63;
      UISprite__set_spriteName(v18, (System_String_o *)StringLiteral_16990/*"btn_txt_friendlist_on"*/, 0LL);
      v19 = this->fields.tabOfferedTitleSprite;
      if ( !v19 )
        goto LABEL_63;
      UISprite__set_spriteName(v19, (System_String_o *)StringLiteral_16991/*"btn_txt_friendrequest_off"*/, 0LL);
      v20 = this->fields.tabSearchTitleSprite;
      if ( !v20 )
        goto LABEL_63;
      UISprite__set_spriteName(v20, (System_String_o *)StringLiteral_16993/*"btn_txt_friendsearch_off"*/, 0LL);
      v21 = this->fields.tabFriendSprite;
      if ( !v21 )
        goto LABEL_63;
      UISprite__set_spriteName(v21, (System_String_o *)StringLiteral_16910/*"btn_bg_on"*/, 0LL);
      v22 = this->fields.tabOfferedSprite;
      if ( !v22 )
        goto LABEL_63;
      v23 = (System_String_o *)StringLiteral_16895/*"btn_bg_09"*/;
    }
    UISprite__set_spriteName(v22, v23, 0LL);
    tabSearchSprite = this->fields.tabSearchSprite;
    if ( !tabSearchSprite )
      goto LABEL_63;
    v36 = (System_String_o *)StringLiteral_16895/*"btn_bg_09"*/;
  }
  UISprite__set_spriteName(tabSearchSprite, v36, 0LL);
  v47 = this->fields.tabFriendButton;
  if ( !v47 )
    goto LABEL_63;
  ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v47->klass->vtable._14_SetState.method)(
    v47,
    0LL,
    1LL,
    v47->klass->vtable._15_OnPress.methodPtr);
  v48 = this->fields.tabOfferedButton;
  if ( !v48 )
    goto LABEL_63;
  ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v48->klass->vtable._14_SetState.method)(
    v48,
    0LL,
    1LL,
    v48->klass->vtable._15_OnPress.methodPtr);
  v49 = this->fields.tabSearchButton;
  if ( !v49 )
    goto LABEL_63;
  ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v49->klass->vtable._14_SetState.method)(
    v49,
    0LL,
    1LL,
    v49->klass->vtable._15_OnPress.methodPtr);
LABEL_54:
  FriendRootComponent__CheckModeKind(this, method);
  FriendRootComponent__CheckHelpUI(this, v50);
  if ( !byte_40FD9BD )
  {
    sub_B16FFC(&FriendRootComponent_TypeInfo, v51);
    byte_40FD9BD = 1;
  }
  v53 = FriendRootComponent_TypeInfo;
  if ( (BYTE3(FriendRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FriendRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendRootComponent_TypeInfo);
    v53 = FriendRootComponent_TypeInfo;
  }
  FriendRootComponent__SetActiveModeKindButtons(this, v53->static_fields->tabKindSave == 0, v52);
  v54 = this->fields.tabFriendButton;
  if ( !v54
    || (enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.tabFriendButton, 0LL),
        UICommonButton__SetColliderEnable(v54, enabled, 1, 0LL),
        (v56 = this->fields.tabOfferedButton) == 0LL)
    || (v57 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.tabOfferedButton, 0LL),
        UICommonButton__SetColliderEnable(v56, v57, 1, 0LL),
        (v58 = (UnityEngine_Behaviour_o *)this->fields.tabSearchButton) == 0LL) )
  {
LABEL_63:
    sub_B170D4();
  }
  v59 = UnityEngine_Behaviour__get_enabled(v58, 0LL);
  UICommonButton__SetColliderEnable((UICommonButton_o *)v58, v59, 1, 0LL);
}


void __fastcall FriendRootComponent__RequestFollowAssign(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  NetworkManager_ResultCallbackFunc_o *v10; // x20
  FollowAssignRequest_o *Request_WarBoardWallAttackRequest; // x0
  struct OtherUserGameEntity_o *selectFriendEntity; // x8
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_40FD9A3 & 1) == 0 )
  {
    sub_B16FFC(&Method_FriendRootComponent_EndRequestFollowAssign__, method);
    sub_B16FFC(&Method_NetworkManager_getRequest_FollowAssignRequest___, v6);
    sub_B16FFC(&NetworkManager_TypeInfo, v7);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_11041/*"REQUEST_NG"*/, v9);
    byte_40FD9A3 = 1;
  }
  if ( this->fields.selectFriendEntity )
  {
    v10 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                   NetworkManager_ResultCallbackFunc_TypeInfo,
                                                   method,
                                                   v2,
                                                   v3,
                                                   v4);
    NetworkManager_ResultCallbackFunc___ctor(
      v10,
      (Il2CppObject *)this,
      Method_FriendRootComponent_EndRequestFollowAssign__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = (FollowAssignRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                   v10,
                                                                   (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_FollowAssignRequest___);
    selectFriendEntity = this->fields.selectFriendEntity;
    if ( selectFriendEntity && Request_WarBoardWallAttackRequest )
    {
      FollowAssignRequest__beginRequest(Request_WarBoardWallAttackRequest, selectFriendEntity->fields.userId, 0LL);
      return;
    }
LABEL_12:
    sub_B170D4();
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    goto LABEL_12;
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_11041/*"REQUEST_NG"*/, 0LL);
}


void __fastcall FriendRootComponent__RequestFollowRemove(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v8; // x20
  const MethodInfo *v9; // x2

  if ( (byte_40FD9AC & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_string___ctor__, method);
    sub_B16FFC(&System_Action_string__TypeInfo, v6);
    sub_B16FFC(&Method_FriendRootComponent__RequestFollowRemove_b__139_0__, v7);
    byte_40FD9AC = 1;
  }
  v8 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                              System_Action_string__TypeInfo,
                                                                              method,
                                                                              v2,
                                                                              v3,
                                                                              v4);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v8,
    (Il2CppObject *)this,
    Method_FriendRootComponent__RequestFollowRemove_b__139_0__,
    (const MethodInfo_24B7310 *)Method_System_Action_string___ctor__);
  FriendRootComponent__FriendLockRequst(this, (System_Action_string__o *)v8, v9);
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
  __int64 v12; // x3
  __int64 v13; // x4
  struct OtherUserGameEntity_o *otherUserGameEntity; // x21
  NetworkManager_ResultCallbackFunc_o *v15; // x20
  FriendAcceptRequest_o *Request_WarBoardWallAttackRequest; // x0
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_40FD97A & 1) == 0 )
  {
    sub_B16FFC(&Method_FriendRootComponent_EndRequestFriend__, method);
    sub_B16FFC(&Method_NetworkManager_getRequest_FriendAcceptRequest___, v4);
    sub_B16FFC(&NetworkManager_TypeInfo, v5);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_11041/*"REQUEST_NG"*/, v7);
    byte_40FD97A = 1;
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
      v15 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                     NetworkManager_ResultCallbackFunc_TypeInfo,
                                                     v10,
                                                     v11,
                                                     v12,
                                                     v13);
      NetworkManager_ResultCallbackFunc___ctor(
        v15,
        (Il2CppObject *)this,
        Method_FriendRootComponent_EndRequestFriend__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Request_WarBoardWallAttackRequest = (FriendAcceptRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                     v15,
                                                                     (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_FriendAcceptRequest___);
      if ( Request_WarBoardWallAttackRequest )
      {
        FriendAcceptRequest__beginRequest(Request_WarBoardWallAttackRequest, otherUserGameEntity->fields.userId, 0LL);
        return;
      }
LABEL_13:
      sub_B170D4();
    }
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    goto LABEL_13;
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_11041/*"REQUEST_NG"*/, 0LL);
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
  __int64 v12; // x3
  __int64 v13; // x4
  struct OtherUserGameEntity_o *otherUserGameEntity; // x21
  NetworkManager_ResultCallbackFunc_o *v15; // x20
  FriendCancelRequest_o *Request_WarBoardWallAttackRequest; // x0
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_40FD97C & 1) == 0 )
  {
    sub_B16FFC(&Method_FriendRootComponent_EndRequestFriend__, method);
    sub_B16FFC(&Method_NetworkManager_getRequest_FriendCancelRequest___, v4);
    sub_B16FFC(&NetworkManager_TypeInfo, v5);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_11041/*"REQUEST_NG"*/, v7);
    byte_40FD97C = 1;
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
      v15 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                     NetworkManager_ResultCallbackFunc_TypeInfo,
                                                     v10,
                                                     v11,
                                                     v12,
                                                     v13);
      NetworkManager_ResultCallbackFunc___ctor(
        v15,
        (Il2CppObject *)this,
        Method_FriendRootComponent_EndRequestFriend__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Request_WarBoardWallAttackRequest = (FriendCancelRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                     v15,
                                                                     (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_FriendCancelRequest___);
      if ( Request_WarBoardWallAttackRequest )
      {
        FriendCancelRequest__beginRequest(Request_WarBoardWallAttackRequest, otherUserGameEntity->fields.userId, 0LL);
        return;
      }
LABEL_13:
      sub_B170D4();
    }
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    goto LABEL_13;
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_11041/*"REQUEST_NG"*/, 0LL);
}


void __fastcall FriendRootComponent__RequestFriendOffer(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  NetworkManager_ResultCallbackFunc_o *v10; // x20
  FriendOfferRequest_o *Request_WarBoardWallAttackRequest; // x0
  const MethodInfo *v12; // x2
  struct OtherUserGameEntity_o *selectFriendEntity; // x8
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_40FD978 & 1) == 0 )
  {
    sub_B16FFC(&Method_FriendRootComponent_EndRequestFriend__, method);
    sub_B16FFC(&Method_NetworkManager_getRequest_FriendOfferRequest___, v6);
    sub_B16FFC(&NetworkManager_TypeInfo, v7);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_11041/*"REQUEST_NG"*/, v9);
    byte_40FD978 = 1;
  }
  if ( this->fields.selectFriendEntity )
  {
    v10 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                   NetworkManager_ResultCallbackFunc_TypeInfo,
                                                   method,
                                                   v2,
                                                   v3,
                                                   v4);
    NetworkManager_ResultCallbackFunc___ctor(
      v10,
      (Il2CppObject *)this,
      Method_FriendRootComponent_EndRequestFriend__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = (FriendOfferRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                  v10,
                                                                  (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_FriendOfferRequest___);
    selectFriendEntity = this->fields.selectFriendEntity;
    if ( selectFriendEntity && Request_WarBoardWallAttackRequest )
    {
      FriendOfferRequest__beginRequest(Request_WarBoardWallAttackRequest, selectFriendEntity->fields.userId, v12);
      return;
    }
LABEL_12:
    sub_B170D4();
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    goto LABEL_12;
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_11041/*"REQUEST_NG"*/, 0LL);
}


void __fastcall FriendRootComponent__RequestFriendOffer2(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v8; // x20
  const MethodInfo *v9; // x2

  if ( (byte_40FD979 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_string___ctor__, method);
    sub_B16FFC(&System_Action_string__TypeInfo, v6);
    sub_B16FFC(&Method_FriendRootComponent__RequestFriendOffer2_b__84_0__, v7);
    byte_40FD979 = 1;
  }
  v8 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                              System_Action_string__TypeInfo,
                                                                              method,
                                                                              v2,
                                                                              v3,
                                                                              v4);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v8,
    (Il2CppObject *)this,
    Method_FriendRootComponent__RequestFriendOffer2_b__84_0__,
    (const MethodInfo_24B7310 *)Method_System_Action_string___ctor__);
  FriendRootComponent__FriendLockRequst(this, (System_Action_string__o *)v8, v9);
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
  __int64 v21; // x3
  __int64 v22; // x4
  NetworkManager_ResultCallbackFunc_o *v23; // x20
  ProfileTopRequest_o *Request_WarBoardWallAttackRequest; // x0
  FriendWarningDialog_o *friendWarningDialog; // x20
  FriendWarningDialog_CallbackFunc_o *v26; // x21
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_40FD980 & 1) == 0 )
  {
    sub_B16FFC(&FriendWarningDialog_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_FriendRootComponent_EndNoSearchWarning__, v9);
    sub_B16FFC(&Method_FriendRootComponent_EndRequestFriendProfile__, v10);
    sub_B16FFC(&Method_NetworkManager_getRequest_ProfileTopRequest___, v11);
    sub_B16FFC(&NetworkManager_TypeInfo, v12);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v13);
    sub_B16FFC(&StringLiteral_80/*" "*/, v14);
    sub_B16FFC(&StringLiteral_11041/*"REQUEST_NG"*/, v15);
    sub_B16FFC(&StringLiteral_1/*""*/, v16);
    byte_40FD980 = 1;
  }
  selectFriendCode = this->fields.selectFriendCode;
  if ( selectFriendCode )
  {
    v18 = System_String__Replace_43750968(
            selectFriendCode,
            (System_String_o *)StringLiteral_80/*" "*/,
            (System_String_o *)StringLiteral_1/*""*/,
            0LL);
    if ( System_String__op_Inequality(v18, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
    {
      v23 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                     NetworkManager_ResultCallbackFunc_TypeInfo,
                                                     v19,
                                                     v20,
                                                     v21,
                                                     v22);
      NetworkManager_ResultCallbackFunc___ctor(
        v23,
        (Il2CppObject *)this,
        Method_FriendRootComponent_EndRequestFriendProfile__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Request_WarBoardWallAttackRequest = (ProfileTopRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                   v23,
                                                                   (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_ProfileTopRequest___);
      if ( Request_WarBoardWallAttackRequest )
      {
        ProfileTopRequest__beginRequestFriendCode(Request_WarBoardWallAttackRequest, this->fields.selectFriendCode, 0LL);
        return;
      }
LABEL_14:
      sub_B170D4();
    }
    friendWarningDialog = this->fields.friendWarningDialog;
    v26 = (FriendWarningDialog_CallbackFunc_o *)sub_B170CC(
                                                  FriendWarningDialog_CallbackFunc_TypeInfo,
                                                  v19,
                                                  v20,
                                                  v21,
                                                  v22);
    FriendWarningDialog_CallbackFunc___ctor(
      v26,
      (Il2CppObject *)this,
      Method_FriendRootComponent_EndNoSearchWarning__,
      0LL);
    if ( !friendWarningDialog )
      goto LABEL_14;
    FriendWarningDialog__Open(friendWarningDialog, 3, v26, 0LL);
  }
  this->fields.selectFriendEntity = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.selectFriendEntity, 0LL, v2, v3, v4, v5, v6, v7);
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    goto LABEL_14;
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_11041/*"REQUEST_NG"*/, 0LL);
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
  CommonUI_o *Instance; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  NetworkManager_ResultCallbackFunc_o *v17; // x20
  FriendRejectRequest_o *Request_WarBoardWallAttackRequest; // x0
  const MethodInfo *v19; // x2
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_40FD97B & 1) == 0 )
  {
    sub_B16FFC(&Method_FriendRootComponent_EndRequestFriend__, method);
    sub_B16FFC(&Method_NetworkManager_getRequest_FriendRejectRequest___, v4);
    sub_B16FFC(&NetworkManager_TypeInfo, v5);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B16FFC(&StringLiteral_11041/*"REQUEST_NG"*/, v8);
    byte_40FD97B = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    goto LABEL_14;
  Item = FriendOperationItemListViewManager__GetItem(operationItemListViewManager, this->fields.selectItemNum, v2);
  if ( Item )
  {
    otherUserGameEntity = Item->fields.otherUserGameEntity;
    if ( otherUserGameEntity )
    {
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        CommonUI__SetConnectMarkFadeInLag(Instance, 0, 0LL);
        v17 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                       NetworkManager_ResultCallbackFunc_TypeInfo,
                                                       v13,
                                                       v14,
                                                       v15,
                                                       v16);
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
        Request_WarBoardWallAttackRequest = (FriendRejectRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                       v17,
                                                                       (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_FriendRejectRequest___);
        if ( Request_WarBoardWallAttackRequest )
        {
          FriendRejectRequest__beginRequest(Request_WarBoardWallAttackRequest, otherUserGameEntity->fields.userId, v19);
          return;
        }
      }
LABEL_14:
      sub_B170D4();
    }
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    goto LABEL_14;
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_11041/*"REQUEST_NG"*/, 0LL);
}


void __fastcall FriendRootComponent__RequestFriendRemove(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v8; // x20
  const MethodInfo *v9; // x2

  if ( (byte_40FD97D & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_string___ctor__, method);
    sub_B16FFC(&System_Action_string__TypeInfo, v6);
    sub_B16FFC(&Method_FriendRootComponent__RequestFriendRemove_b__88_0__, v7);
    byte_40FD97D = 1;
  }
  v8 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                              System_Action_string__TypeInfo,
                                                                              method,
                                                                              v2,
                                                                              v3,
                                                                              v4);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v8,
    (Il2CppObject *)this,
    Method_FriendRootComponent__RequestFriendRemove_b__88_0__,
    (const MethodInfo_24B7310 *)Method_System_Action_string___ctor__);
  FriendRootComponent__FriendLockRequst(this, (System_Action_string__o *)v8, v9);
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
  WebViewManager_o *Instance; // x0
  UserFollowMaster_o *MasterData_WarQuestSelectionMaster; // x0
  UserFollowMaster_o *v16; // x20
  const MethodInfo *v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  int32_t FollowSum; // w21
  BalanceConfig_c *v22; // x8
  struct OtherUserGameEntity_o *selectFriendEntity; // x8
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  CommonUI_o *v28; // x20
  System_String_o *v29; // x21
  System_String_o *v30; // x22
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  NotificationDialog_ClickDelegate_o *v35; // x23
  FriendWarningDialog_o *friendWarningDialog; // x20
  FriendWarningDialog_CallbackFunc_o *v37; // x21
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x20
  OtherUserGameEntity_o *v39; // x21
  FriendOperationConfirmMenu_CallbackFunc_o *v40; // x22
  const MethodInfo *v41; // x4

  if ( (byte_40FD99F & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo, v3);
    sub_B16FFC(&FriendWarningDialog_CallbackFunc_TypeInfo, v4);
    sub_B16FFC(&NotificationDialog_ClickDelegate_TypeInfo, v5);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserFollowMaster___, v6);
    sub_B16FFC(&Method_FriendRootComponent_EndMaxFollowWarningOfferConfirm__, v7);
    sub_B16FFC(&Method_FriendRootComponent_SelectedFollowOfferConfirm__, v8);
    sub_B16FFC(&LocalizationManager_TypeInfo, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    sub_B16FFC(&StringLiteral_1679/*"ALREADY_FOLLOWED_TITLE"*/, v12);
    sub_B16FFC(&StringLiteral_1678/*"ALREADY_FOLLOWED_MESSAGE"*/, v13);
    byte_40FD99F = 1;
  }
  if ( this->fields.state == 23 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_WarQuestSelectionMaster = (UserFollowMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)Instance,
                                                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserFollowMaster___);
      if ( MasterData_WarQuestSelectionMaster )
      {
        v16 = MasterData_WarQuestSelectionMaster;
        FollowSum = UserFollowMaster__GetFollowSum(MasterData_WarQuestSelectionMaster, 0LL);
        v22 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v22 = BalanceConfig_TypeInfo;
        }
        if ( FollowSum >= v22->static_fields->FollowNum )
        {
          this->fields.state = 43;
          friendWarningDialog = this->fields.friendWarningDialog;
          v37 = (FriendWarningDialog_CallbackFunc_o *)sub_B170CC(
                                                        FriendWarningDialog_CallbackFunc_TypeInfo,
                                                        v17,
                                                        v18,
                                                        v19,
                                                        v20);
          FriendWarningDialog_CallbackFunc___ctor(
            v37,
            (Il2CppObject *)this,
            Method_FriendRootComponent_EndMaxFollowWarningOfferConfirm__,
            0LL);
          if ( friendWarningDialog )
          {
            FriendWarningDialog__Open(friendWarningDialog, 7, v37, 0LL);
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
            v28 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v29 = LocalizationManager__Get((System_String_o *)StringLiteral_1679/*"ALREADY_FOLLOWED_TITLE"*/, 0LL);
            v30 = LocalizationManager__Get((System_String_o *)StringLiteral_1678/*"ALREADY_FOLLOWED_MESSAGE"*/, 0LL);
            v35 = (NotificationDialog_ClickDelegate_o *)sub_B170CC(
                                                          NotificationDialog_ClickDelegate_TypeInfo,
                                                          v31,
                                                          v32,
                                                          v33,
                                                          v34);
            NotificationDialog_ClickDelegate___ctor(
              v35,
              (Il2CppObject *)this,
              Method_FriendRootComponent_EndMaxFollowWarningOfferConfirm__,
              0LL);
            if ( v28 )
            {
              CommonUI__OpenNotificationDialog_18239760(
                v28,
                v29,
                v30,
                v35,
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
            v39 = this->fields.selectFriendEntity;
            v40 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_B170CC(
                                                                 FriendOperationConfirmMenu_CallbackFunc_TypeInfo,
                                                                 v24,
                                                                 v25,
                                                                 v26,
                                                                 v27);
            FriendOperationConfirmMenu_CallbackFunc___ctor(
              v40,
              (Il2CppObject *)this,
              Method_FriendRootComponent_SelectedFollowOfferConfirm__,
              0LL);
            if ( operationConfirmMenu )
            {
              FriendOperationConfirmMenu__Open(operationConfirmMenu, 6, v39, v40, v41);
              return;
            }
          }
        }
      }
    }
    sub_B170D4();
  }
}


void __fastcall FriendRootComponent__SelectFollowRemoveConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  FriendOperationItemListViewItem_o *Item; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x20
  OtherUserGameEntity_o *otherUserGameEntity; // x21
  FriendOperationConfirmMenu_CallbackFunc_o *v13; // x22
  const MethodInfo *v14; // x4

  if ( (byte_40FD9A6 & 1) == 0 )
  {
    sub_B16FFC(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_FriendRootComponent_SelectedFollowRemoveConfirm__, v4);
    byte_40FD9A6 = 1;
  }
  if ( this->fields.state == 4 )
  {
    operationItemListViewManager = this->fields.operationItemListViewManager;
    if ( !operationItemListViewManager
      || (Item = FriendOperationItemListViewManager__GetItem(
                   operationItemListViewManager,
                   this->fields.selectItemNum,
                   v2),
          this->fields.state = 45,
          !Item)
      || (operationConfirmMenu = this->fields.operationConfirmMenu,
          otherUserGameEntity = Item->fields.otherUserGameEntity,
          v13 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_B170CC(
                                                               FriendOperationConfirmMenu_CallbackFunc_TypeInfo,
                                                               v7,
                                                               v8,
                                                               v9,
                                                               v10),
          FriendOperationConfirmMenu_CallbackFunc___ctor(
            v13,
            (Il2CppObject *)this,
            Method_FriendRootComponent_SelectedFollowRemoveConfirm__,
            0LL),
          !operationConfirmMenu) )
    {
      sub_B170D4();
    }
    FriendOperationConfirmMenu__Open(operationConfirmMenu, 7, otherUserGameEntity, v13, v14);
  }
}


void __fastcall FriendRootComponent__SelectFriendAcceptConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  FriendOperationItemListViewItem_o *Item; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x20
  OtherUserGameEntity_o *otherUserGameEntity; // x21
  FriendOperationConfirmMenu_CallbackFunc_o *v13; // x22
  const MethodInfo *v14; // x4

  if ( (byte_40FD96C & 1) == 0 )
  {
    sub_B16FFC(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_FriendRootComponent_SelectedFriendAcceptConfirm__, v4);
    byte_40FD96C = 1;
  }
  if ( this->fields.state == 14 )
  {
    operationItemListViewManager = this->fields.operationItemListViewManager;
    if ( !operationItemListViewManager
      || (Item = FriendOperationItemListViewManager__GetItem(
                   operationItemListViewManager,
                   this->fields.selectItemNum,
                   v2),
          this->fields.state = 31,
          !Item)
      || (operationConfirmMenu = this->fields.operationConfirmMenu,
          otherUserGameEntity = Item->fields.otherUserGameEntity,
          v13 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_B170CC(
                                                               FriendOperationConfirmMenu_CallbackFunc_TypeInfo,
                                                               v7,
                                                               v8,
                                                               v9,
                                                               v10),
          FriendOperationConfirmMenu_CallbackFunc___ctor(
            v13,
            (Il2CppObject *)this,
            Method_FriendRootComponent_SelectedFriendAcceptConfirm__,
            0LL),
          !operationConfirmMenu) )
    {
      sub_B170D4();
    }
    FriendOperationConfirmMenu__Open(operationConfirmMenu, 2, otherUserGameEntity, v13, v14);
  }
}


void __fastcall FriendRootComponent__SelectFriendCancelConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  FriendOperationItemListViewItem_o *Item; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x20
  OtherUserGameEntity_o *otherUserGameEntity; // x21
  FriendOperationConfirmMenu_CallbackFunc_o *v13; // x22
  const MethodInfo *v14; // x4

  if ( (byte_40FD972 & 1) == 0 )
  {
    sub_B16FFC(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_FriendRootComponent_SelectedFriendCancelConfirm__, v4);
    byte_40FD972 = 1;
  }
  if ( this->fields.state == 9 )
  {
    operationItemListViewManager = this->fields.operationItemListViewManager;
    if ( !operationItemListViewManager
      || (Item = FriendOperationItemListViewManager__GetItem(
                   operationItemListViewManager,
                   this->fields.selectItemNum,
                   v2),
          this->fields.state = 37,
          !Item)
      || (operationConfirmMenu = this->fields.operationConfirmMenu,
          otherUserGameEntity = Item->fields.otherUserGameEntity,
          v13 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_B170CC(
                                                               FriendOperationConfirmMenu_CallbackFunc_TypeInfo,
                                                               v7,
                                                               v8,
                                                               v9,
                                                               v10),
          FriendOperationConfirmMenu_CallbackFunc___ctor(
            v13,
            (Il2CppObject *)this,
            Method_FriendRootComponent_SelectedFriendCancelConfirm__,
            0LL),
          !operationConfirmMenu) )
    {
      sub_B170D4();
    }
    FriendOperationConfirmMenu__Open(operationConfirmMenu, 4, otherUserGameEntity, v13, v14);
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
  WebViewManager_o *v10; // x0
  TblFriendMaster_o *v11; // x0
  OtherUserGameEntity_array *v12; // x0
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  struct OtherUserGameEntity_o *selectFriendEntity; // x20
  struct FriendOperationConfirmMenu_o *v18; // x21
  FriendOperationConfirmMenu_CallbackFunc_o *v19; // x22
  const MethodInfo *v20; // x4
  FriendOperationConfirmMenu_o *v21; // x0
  OtherUserGameEntity_o *v22; // x2
  UserGameEntity_o *SelfUserGame; // x20
  WebViewManager_o *Instance; // x0
  TblFriendMaster_o *MasterData_WarQuestSelectionMaster; // x0
  OtherUserGameEntity_array *List; // x0
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  FriendOperationItemListViewItem_o *Item; // x0
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  struct FriendOperationConfirmMenu_o *operationConfirmMenu; // x20
  OtherUserGameEntity_o *otherUserGameEntity; // x21
  FriendWarningDialog_o *friendWarningDialog; // x20
  FriendWarningDialog_CallbackFunc_o *v36; // x21

  if ( (byte_40FD96A & 1) == 0 )
  {
    sub_B16FFC(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&FriendWarningDialog_CallbackFunc_TypeInfo, v3);
    sub_B16FFC(&Method_DataManager_GetMasterData_TblFriendMaster___, v4);
    sub_B16FFC(&Method_FriendRootComponent_EndMaxFriendWarningOfferConfirm__, v5);
    sub_B16FFC(&Method_FriendRootComponent_SelectedFriendOfferConfirm__, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_40FD96A = 1;
  }
  state = this->fields.state;
  if ( state == 4 )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_27;
    MasterData_WarQuestSelectionMaster = (TblFriendMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)Instance,
                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_TblFriendMaster___);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_27;
    List = TblFriendMaster__GetList(MasterData_WarQuestSelectionMaster, 3, 0LL);
    if ( !List || !SelfUserGame )
      goto LABEL_27;
    if ( SelfUserGame->fields.friendKeep > (signed int)List->max_length )
    {
      operationItemListViewManager = this->fields.operationItemListViewManager;
      if ( operationItemListViewManager )
      {
        Item = FriendOperationItemListViewManager__GetItem(
                 operationItemListViewManager,
                 this->fields.selectItemNum,
                 v14);
        this->fields.state = 27;
        if ( Item )
        {
          operationConfirmMenu = this->fields.operationConfirmMenu;
          otherUserGameEntity = Item->fields.otherUserGameEntity;
          v19 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_B170CC(
                                                               FriendOperationConfirmMenu_CallbackFunc_TypeInfo,
                                                               v29,
                                                               v30,
                                                               v31,
                                                               v32);
          FriendOperationConfirmMenu_CallbackFunc___ctor(
            v19,
            (Il2CppObject *)this,
            Method_FriendRootComponent_SelectedFriendOfferConfirm__,
            0LL);
          if ( operationConfirmMenu )
          {
            v21 = operationConfirmMenu;
            v22 = otherUserGameEntity;
            goto LABEL_22;
          }
        }
      }
LABEL_27:
      sub_B170D4();
    }
LABEL_24:
    this->fields.state = 29;
    friendWarningDialog = this->fields.friendWarningDialog;
    v36 = (FriendWarningDialog_CallbackFunc_o *)sub_B170CC(
                                                  FriendWarningDialog_CallbackFunc_TypeInfo,
                                                  v13,
                                                  v14,
                                                  v15,
                                                  v16);
    FriendWarningDialog_CallbackFunc___ctor(
      v36,
      (Il2CppObject *)this,
      Method_FriendRootComponent_EndMaxFriendWarningOfferConfirm__,
      0LL);
    if ( !friendWarningDialog )
      goto LABEL_27;
    FriendWarningDialog__Open(friendWarningDialog, 1, v36, 0LL);
    return;
  }
  if ( state != 23 )
    return;
  v9 = UserGameMaster__getSelfUserGame(0LL);
  v10 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v10 )
    goto LABEL_27;
  v11 = (TblFriendMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                               (DataManager_o *)v10,
                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_TblFriendMaster___);
  if ( !v11 )
    goto LABEL_27;
  v12 = TblFriendMaster__GetList(v11, 3, 0LL);
  if ( !v12 || !v9 )
    goto LABEL_27;
  if ( v9->fields.friendKeep <= (signed int)v12->max_length )
    goto LABEL_24;
  selectFriendEntity = this->fields.selectFriendEntity;
  if ( selectFriendEntity )
  {
    this->fields.state = 27;
    v18 = this->fields.operationConfirmMenu;
    v19 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_B170CC(
                                                         FriendOperationConfirmMenu_CallbackFunc_TypeInfo,
                                                         v13,
                                                         v14,
                                                         v15,
                                                         v16);
    FriendOperationConfirmMenu_CallbackFunc___ctor(
      v19,
      (Il2CppObject *)this,
      Method_FriendRootComponent_SelectedFriendOfferConfirm__,
      0LL);
    if ( v18 )
    {
      v21 = v18;
      v22 = selectFriendEntity;
LABEL_22:
      FriendOperationConfirmMenu__Open(v21, 1, v22, v19, v20);
      return;
    }
    goto LABEL_27;
  }
  FriendRootComponent__StartSearchInput(this, v13);
}


void __fastcall FriendRootComponent__SelectFriendRejectConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  FriendOperationItemListViewItem_o *Item; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x20
  OtherUserGameEntity_o *otherUserGameEntity; // x21
  FriendOperationConfirmMenu_CallbackFunc_o *v13; // x22
  const MethodInfo *v14; // x4

  if ( (byte_40FD96F & 1) == 0 )
  {
    sub_B16FFC(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_FriendRootComponent_SelectedFriendRejectConfirm__, v4);
    byte_40FD96F = 1;
  }
  if ( this->fields.state == 14 )
  {
    operationItemListViewManager = this->fields.operationItemListViewManager;
    if ( !operationItemListViewManager
      || (Item = FriendOperationItemListViewManager__GetItem(
                   operationItemListViewManager,
                   this->fields.selectItemNum,
                   v2),
          this->fields.state = 34,
          !Item)
      || (operationConfirmMenu = this->fields.operationConfirmMenu,
          otherUserGameEntity = Item->fields.otherUserGameEntity,
          v13 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_B170CC(
                                                               FriendOperationConfirmMenu_CallbackFunc_TypeInfo,
                                                               v7,
                                                               v8,
                                                               v9,
                                                               v10),
          FriendOperationConfirmMenu_CallbackFunc___ctor(
            v13,
            (Il2CppObject *)this,
            Method_FriendRootComponent_SelectedFriendRejectConfirm__,
            0LL),
          !operationConfirmMenu) )
    {
      sub_B170D4();
    }
    FriendOperationConfirmMenu__Open(operationConfirmMenu, 3, otherUserGameEntity, v13, v14);
  }
}


void __fastcall FriendRootComponent__SelectFriendRemoveConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  FriendOperationItemListViewItem_o *Item; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x20
  OtherUserGameEntity_o *otherUserGameEntity; // x21
  FriendOperationConfirmMenu_CallbackFunc_o *v13; // x22
  const MethodInfo *v14; // x4

  if ( (byte_40FD975 & 1) == 0 )
  {
    sub_B16FFC(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_FriendRootComponent_SelectedFriendRemoveConfirm__, v4);
    byte_40FD975 = 1;
  }
  if ( this->fields.state == 4 )
  {
    operationItemListViewManager = this->fields.operationItemListViewManager;
    if ( !operationItemListViewManager
      || (Item = FriendOperationItemListViewManager__GetItem(
                   operationItemListViewManager,
                   this->fields.selectItemNum,
                   v2),
          this->fields.state = 40,
          !Item)
      || (operationConfirmMenu = this->fields.operationConfirmMenu,
          otherUserGameEntity = Item->fields.otherUserGameEntity,
          v13 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_B170CC(
                                                               FriendOperationConfirmMenu_CallbackFunc_TypeInfo,
                                                               v7,
                                                               v8,
                                                               v9,
                                                               v10),
          FriendOperationConfirmMenu_CallbackFunc___ctor(
            v13,
            (Il2CppObject *)this,
            Method_FriendRootComponent_SelectedFriendRemoveConfirm__,
            0LL),
          !operationConfirmMenu) )
    {
      sub_B170D4();
    }
    FriendOperationConfirmMenu__Open(operationConfirmMenu, 5, otherUserGameEntity, v13, v14);
  }
}


void __fastcall FriendRootComponent__SelectSearchFriend(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_40FD963 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_5461/*"END_ACTION"*/, method);
    byte_40FD963 = 1;
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
      sub_B170D4();
    PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_5461/*"END_ACTION"*/, 0LL);
  }
}


void __fastcall FriendRootComponent__SelectShowFriend(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Component_o *operationItemListViewManager; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v7; // x3
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  FriendOperationItemListViewManager_o *v9; // x0
  struct FriendOperationItemListViewManager_o *v10; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  System_Action_o *v15; // x21
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  const MethodInfo *v22; // x2
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_40FD95B & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_FriendRootComponent_OnMoveEnd__, v3);
    sub_B16FFC(&StringLiteral_5461/*"END_ACTION"*/, v4);
    byte_40FD95B = 1;
  }
  if ( this->fields.state == 1 )
  {
    this->fields.state = 2;
    FriendRootComponent__RefreshInfo(this, method);
    operationItemListViewManager = (UnityEngine_Component_o *)this->fields.operationItemListViewManager;
    if ( operationItemListViewManager )
    {
      gameObject = UnityEngine_Component__get_gameObject(operationItemListViewManager, 0LL);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
        classButtonControl = this->fields.classButtonControl;
        if ( classButtonControl )
        {
          v9 = this->fields.operationItemListViewManager;
          if ( v9 )
          {
            FriendOperationItemListViewManager__CreateList(v9, 3, classButtonControl->fields.currentCursor, v7);
            v10 = this->fields.operationItemListViewManager;
            v15 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v11, v12, v13, v14);
            System_Action___ctor(v15, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0LL);
            if ( v10 )
            {
              v10->fields.callbackFunc2 = v15;
              sub_B16F98(
                (BattleServantConfConponent_o *)&v10->fields.callbackFunc2,
                (System_Int32_array **)v15,
                v16,
                v17,
                v18,
                v19,
                v20,
                v21);
              FriendOperationItemListViewManager__SetMode_31847292(v10, 1, v22);
              return;
            }
          }
        }
      }
    }
LABEL_12:
    sub_B170D4();
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    goto LABEL_12;
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_5461/*"END_ACTION"*/, 0LL);
}


void __fastcall FriendRootComponent__SelectShowOffer(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *operationItemListViewManager; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v6; // x3
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  FriendOperationItemListViewManager_o *v8; // x0
  struct FriendOperationItemListViewManager_o *v9; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  System_Action_o *v14; // x21
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  const MethodInfo *v21; // x2

  if ( (byte_40FD95D & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_FriendRootComponent_OnMoveEnd__, v3);
    byte_40FD95D = 1;
  }
  if ( this->fields.state == 1 )
  {
    this->fields.state = 7;
    FriendRootComponent__RefreshInfo(this, method);
    operationItemListViewManager = (UnityEngine_Component_o *)this->fields.operationItemListViewManager;
    if ( !operationItemListViewManager )
      goto LABEL_11;
    gameObject = UnityEngine_Component__get_gameObject(operationItemListViewManager, 0LL);
    if ( !gameObject
      || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
          (classButtonControl = this->fields.classButtonControl) == 0LL)
      || (v8 = this->fields.operationItemListViewManager) == 0LL
      || (FriendOperationItemListViewManager__CreateList(v8, 1, classButtonControl->fields.currentCursor, v6),
          v9 = this->fields.operationItemListViewManager,
          v14 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v10, v11, v12, v13),
          System_Action___ctor(v14, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0LL),
          !v9) )
    {
LABEL_11:
      sub_B170D4();
    }
    v9->fields.callbackFunc2 = v14;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v9->fields.callbackFunc2,
      (System_Int32_array **)v14,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    FriendOperationItemListViewManager__SetMode_31847292(v9, 1, v21);
  }
}


void __fastcall FriendRootComponent__SelectShowOffered(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Component_o *operationItemListViewManager; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v7; // x3
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  FriendOperationItemListViewManager_o *v9; // x0
  struct FriendOperationItemListViewManager_o *v10; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  System_Action_o *v15; // x21
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  const MethodInfo *v22; // x2
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_40FD95F & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_FriendRootComponent_OnMoveEnd__, v3);
    sub_B16FFC(&StringLiteral_5461/*"END_ACTION"*/, v4);
    byte_40FD95F = 1;
  }
  if ( this->fields.state == 1 )
  {
    this->fields.state = 12;
    FriendRootComponent__RefreshInfo(this, method);
    operationItemListViewManager = (UnityEngine_Component_o *)this->fields.operationItemListViewManager;
    if ( operationItemListViewManager )
    {
      gameObject = UnityEngine_Component__get_gameObject(operationItemListViewManager, 0LL);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
        classButtonControl = this->fields.classButtonControl;
        if ( classButtonControl )
        {
          v9 = this->fields.operationItemListViewManager;
          if ( v9 )
          {
            FriendOperationItemListViewManager__CreateList(v9, 2, classButtonControl->fields.currentCursor, v7);
            v10 = this->fields.operationItemListViewManager;
            v15 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v11, v12, v13, v14);
            System_Action___ctor(v15, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0LL);
            if ( v10 )
            {
              v10->fields.callbackFunc2 = v15;
              sub_B16F98(
                (BattleServantConfConponent_o *)&v10->fields.callbackFunc2,
                (System_Int32_array **)v15,
                v16,
                v17,
                v18,
                v19,
                v20,
                v21);
              FriendOperationItemListViewManager__SetMode_31847292(v10, 1, v22);
              return;
            }
          }
        }
      }
    }
LABEL_12:
    sub_B170D4();
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    goto LABEL_12;
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_5461/*"END_ACTION"*/, 0LL);
}


void __fastcall FriendRootComponent__SelectShowSearch(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *operationItemListViewManager; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  struct FriendOperationItemListViewManager_o *v12; // x20
  System_Int32_array **selectFriendCode; // x1
  const MethodInfo *v14; // x3
  FriendSearchMenu_o *friendSearchMenu; // x20
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  System_Action_o *v20; // x21
  struct FriendOperationItemListViewManager_o *v21; // x20
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  System_Action_o *v26; // x21
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  const MethodInfo *v33; // x2

  if ( (byte_40FD961 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_FriendRootComponent_OnMoveEnd__, v3);
    byte_40FD961 = 1;
  }
  if ( this->fields.state == 23 )
  {
    operationItemListViewManager = (UnityEngine_Component_o *)this->fields.operationItemListViewManager;
    if ( !operationItemListViewManager )
      goto LABEL_11;
    gameObject = UnityEngine_Component__get_gameObject(operationItemListViewManager, 0LL);
    if ( !gameObject )
      goto LABEL_11;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    v12 = this->fields.operationItemListViewManager;
    if ( !v12 )
      goto LABEL_11;
    selectFriendCode = (System_Int32_array **)this->fields.selectFriendCode;
    v12->fields.friendCode = (struct System_String_o *)selectFriendCode;
    sub_B16F98((BattleServantConfConponent_o *)&v12->fields.friendCode, selectFriendCode, v6, v7, v8, v9, v10, v11);
    FriendOperationItemListViewManager__CreateList(v12, 0, 0, v14);
    this->fields.state = 17;
    friendSearchMenu = this->fields.friendSearchMenu;
    v20 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v16, v17, v18, v19);
    System_Action___ctor(v20, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0LL);
    if ( !friendSearchMenu
      || (FriendSearchMenu__Close_27329712(friendSearchMenu, v20, 0LL),
          v21 = this->fields.operationItemListViewManager,
          v26 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v22, v23, v24, v25),
          System_Action___ctor(v26, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0LL),
          !v21) )
    {
LABEL_11:
      sub_B170D4();
    }
    v21->fields.callbackFunc2 = v26;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v21->fields.callbackFunc2,
      (System_Int32_array **)v26,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
    FriendOperationItemListViewManager__SetMode_31847292(v21, 1, v33);
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
  __int64 v11; // x3
  __int64 v12; // x4
  ServantStatusDialog_EndDelegate_o *v13; // x22
  int32_t v14; // w1

  if ( (byte_40FD967 & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusDialog_EndDelegate_TypeInfo, servantLeaderInfo);
    sub_B16FFC(&Method_FriendRootComponent_EndShowServant__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_40FD967 = 1;
  }
  state = this->fields.state;
  if ( state <= 0x13 && ((1 << state) & 0x84210) != 0 )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v13 = (ServantStatusDialog_EndDelegate_o *)sub_B170CC(ServantStatusDialog_EndDelegate_TypeInfo, v9, v10, v11, v12);
    ServantStatusDialog_EndDelegate___ctor(v13, (Il2CppObject *)this, Method_FriendRootComponent_EndShowServant__, 0LL);
    if ( !Instance )
      sub_B170D4();
    if ( state == 4 )
      v14 = 4;
    else
      v14 = 5;
    CommonUI__OpenServantStatusDialog_18250312(Instance, v14, servantLeaderInfo, v13, 0LL);
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
  __int64 v12; // x3
  __int64 v13; // x4
  ServantStatusDialog_EndDelegate_o *v14; // x23

  if ( (byte_40FD991 & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusDialog_EndDelegate_TypeInfo, equipInfo);
    sub_B16FFC(&Method_FriendRootComponent_EndShowServantEquip__, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    byte_40FD991 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = (ServantStatusDialog_EndDelegate_o *)sub_B170CC(ServantStatusDialog_EndDelegate_TypeInfo, v10, v11, v12, v13);
  ServantStatusDialog_EndDelegate___ctor(
    v14,
    (Il2CppObject *)this,
    Method_FriendRootComponent_EndShowServantEquip__,
    0LL);
  if ( !Instance )
    sub_B170D4();
  CommonUI__OpenServantEquipStatusDialog_18252676(Instance, statusKind, equipInfo, v14, 0LL, 0LL);
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

  if ( (byte_40FD9A2 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_8688/*"MENU_DECIDE"*/, isDecide);
    sub_B16FFC(&StringLiteral_8687/*"MENU_CANCEL"*/, v5);
    byte_40FD9A2 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_B170D4();
  v7 = &StringLiteral_8688/*"MENU_DECIDE"*/;
  if ( !isDecide )
    v7 = &StringLiteral_8687/*"MENU_CANCEL"*/;
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

  if ( (byte_40FD99C & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_8688/*"MENU_DECIDE"*/, isDecide);
    sub_B16FFC(&StringLiteral_8687/*"MENU_CANCEL"*/, v5);
    byte_40FD99C = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_B170D4();
  v7 = &StringLiteral_8688/*"MENU_DECIDE"*/;
  if ( !isDecide )
    v7 = &StringLiteral_8687/*"MENU_CANCEL"*/;
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

  if ( (byte_40FD998 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_8688/*"MENU_DECIDE"*/, isDecide);
    sub_B16FFC(&StringLiteral_8687/*"MENU_CANCEL"*/, v5);
    byte_40FD998 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_B170D4();
  v7 = &StringLiteral_8688/*"MENU_DECIDE"*/;
  if ( !isDecide )
    v7 = &StringLiteral_8687/*"MENU_CANCEL"*/;
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

  if ( (byte_40FD99A & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_8688/*"MENU_DECIDE"*/, isDecide);
    sub_B16FFC(&StringLiteral_8687/*"MENU_CANCEL"*/, v5);
    byte_40FD99A = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_B170D4();
  v7 = &StringLiteral_8688/*"MENU_DECIDE"*/;
  if ( !isDecide )
    v7 = &StringLiteral_8687/*"MENU_CANCEL"*/;
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

  if ( (byte_40FD997 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_8688/*"MENU_DECIDE"*/, isDecide);
    sub_B16FFC(&StringLiteral_8687/*"MENU_CANCEL"*/, v5);
    byte_40FD997 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_B170D4();
  v7 = &StringLiteral_8688/*"MENU_DECIDE"*/;
  if ( !isDecide )
    v7 = &StringLiteral_8687/*"MENU_CANCEL"*/;
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

  if ( (byte_40FD999 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_8688/*"MENU_DECIDE"*/, isDecide);
    sub_B16FFC(&StringLiteral_8687/*"MENU_CANCEL"*/, v5);
    byte_40FD999 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_B170D4();
  v7 = &StringLiteral_8688/*"MENU_DECIDE"*/;
  if ( !isDecide )
    v7 = &StringLiteral_8687/*"MENU_CANCEL"*/;
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

  if ( (byte_40FD99B & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_8688/*"MENU_DECIDE"*/, isDecide);
    sub_B16FFC(&StringLiteral_8687/*"MENU_CANCEL"*/, v5);
    byte_40FD99B = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_B170D4();
  v7 = &StringLiteral_8688/*"MENU_DECIDE"*/;
  if ( !isDecide )
    v7 = &StringLiteral_8687/*"MENU_CANCEL"*/;
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
  TweenPosition_o *v13; // x0
  UnityEngine_Vector3_o v14; // 0:s1.4,4:s2.4,8:s3.4

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
          v14.fields.x = v9,
          v14.fields.y = v10,
          v14.fields.z = v11,
          (v13 = TweenPosition__Begin(gameObject, 0.2, v14, 0LL)) == 0LL) )
    {
      sub_B170D4();
    }
    v13->fields.style = 3;
    this->fields.isActiveModeKindButtons = isActive;
  }
}


void __fastcall FriendRootComponent__ShowSearchResult(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct FriendSearchResultMenu_o *friendSearchResultMenu; // x20
  System_Action_o *v13; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  int32_t currentCursor; // w22
  FriendSearchResultMenu_o *v21; // x20
  OtherUserGameEntity_o *selectFriendEntity; // x21
  FriendSearchResultMenu_CallbackFunc_o *v23; // x23
  FriendSearchMenu_o *friendSearchMenu; // x20
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  FriendSearchMenu_CallbackFunc_o *v29; // x21
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_40FD965 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&FriendSearchResultMenu_CallbackFunc_TypeInfo, v6);
    sub_B16FFC(&FriendSearchMenu_CallbackFunc_TypeInfo, v7);
    sub_B16FFC(&Method_FriendRootComponent_OnSelectOffer__, v8);
    sub_B16FFC(&Method_FriendRootComponent_OnSelectSearchFriend__, v9);
    sub_B16FFC(&Method_FriendRootComponent_ShowSearchResult__, v10);
    sub_B16FFC(&StringLiteral_5461/*"END_ACTION"*/, v11);
    byte_40FD965 = 1;
  }
  if ( this->fields.state == 23 )
  {
    friendSearchResultMenu = this->fields.friendSearchResultMenu;
    if ( !friendSearchResultMenu )
      goto LABEL_14;
    if ( friendSearchResultMenu->fields.isOpen )
    {
      v13 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
      System_Action___ctor(v13, (Il2CppObject *)this, Method_FriendRootComponent_ShowSearchResult__, 0LL);
      FriendSearchResultMenu__Close_27333740(friendSearchResultMenu, v13, 0LL);
      return;
    }
    gameObject = UnityEngine_Component__get_gameObject(
                   (UnityEngine_Component_o *)this->fields.friendSearchResultMenu,
                   0LL);
    if ( !gameObject )
      goto LABEL_14;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    classButtonControl = this->fields.classButtonControl;
    if ( !classButtonControl )
      goto LABEL_14;
    currentCursor = classButtonControl->fields.currentCursor;
    v21 = this->fields.friendSearchResultMenu;
    selectFriendEntity = this->fields.selectFriendEntity;
    v23 = (FriendSearchResultMenu_CallbackFunc_o *)sub_B170CC(
                                                     FriendSearchResultMenu_CallbackFunc_TypeInfo,
                                                     v15,
                                                     v16,
                                                     v17,
                                                     v18);
    FriendSearchResultMenu_CallbackFunc___ctor(
      v23,
      (Il2CppObject *)this,
      Method_FriendRootComponent_OnSelectOffer__,
      0LL);
    if ( !v21
      || (FriendSearchResultMenu__Open(v21, selectFriendEntity, currentCursor, v23, 0LL),
          friendSearchMenu = this->fields.friendSearchMenu,
          v29 = (FriendSearchMenu_CallbackFunc_o *)sub_B170CC(
                                                     FriendSearchMenu_CallbackFunc_TypeInfo,
                                                     v25,
                                                     v26,
                                                     v27,
                                                     v28),
          FriendSearchMenu_CallbackFunc___ctor(
            v29,
            (Il2CppObject *)this,
            Method_FriendRootComponent_OnSelectSearchFriend__,
            0LL),
          !friendSearchMenu)
      || (FriendSearchMenu__Open(friendSearchMenu, v29, 0, 0LL), (myFSM = this->fields.myFSM) == 0LL) )
    {
LABEL_14:
      sub_B170D4();
    }
    PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_5461/*"END_ACTION"*/, 0LL);
    EventTutorialMaster__CheckTutorial(-1, 50, 0LL, 0, 0, 0, 0, 0LL);
  }
}


void __fastcall FriendRootComponent__StartSearchInput(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct FriendSearchResultMenu_o *friendSearchResultMenu; // x20
  OtherUserGameEntity_o *selectFriendEntity; // x21
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  int32_t currentCursor; // w22
  FriendSearchResultMenu_CallbackFunc_o *v13; // x23
  FriendSearchMenu_o *friendSearchMenu; // x20
  FriendSearchMenu_CallbackFunc_o *v15; // x21

  if ( (byte_40FD966 & 1) == 0 )
  {
    sub_B16FFC(&FriendSearchResultMenu_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&FriendSearchMenu_CallbackFunc_TypeInfo, v6);
    sub_B16FFC(&Method_FriendRootComponent_OnSelectOffer__, v7);
    sub_B16FFC(&Method_FriendRootComponent_OnSelectSearchFriend__, v8);
    byte_40FD966 = 1;
  }
  friendSearchResultMenu = this->fields.friendSearchResultMenu;
  if ( !friendSearchResultMenu )
    goto LABEL_11;
  if ( friendSearchResultMenu->fields.isOpen )
  {
    selectFriendEntity = this->fields.selectFriendEntity;
    if ( selectFriendEntity )
    {
      classButtonControl = this->fields.classButtonControl;
      if ( !classButtonControl )
        goto LABEL_11;
      currentCursor = classButtonControl->fields.currentCursor;
      v13 = (FriendSearchResultMenu_CallbackFunc_o *)sub_B170CC(
                                                       FriendSearchResultMenu_CallbackFunc_TypeInfo,
                                                       method,
                                                       v2,
                                                       v3,
                                                       v4);
      FriendSearchResultMenu_CallbackFunc___ctor(
        v13,
        (Il2CppObject *)this,
        Method_FriendRootComponent_OnSelectOffer__,
        0LL);
      FriendSearchResultMenu__Open(friendSearchResultMenu, selectFriendEntity, currentCursor, v13, 0LL);
    }
    else
    {
      FriendSearchResultMenu__Close(this->fields.friendSearchResultMenu, 0LL);
    }
  }
  friendSearchMenu = this->fields.friendSearchMenu;
  v15 = (FriendSearchMenu_CallbackFunc_o *)sub_B170CC(FriendSearchMenu_CallbackFunc_TypeInfo, method, v2, v3, v4);
  FriendSearchMenu_CallbackFunc___ctor(
    v15,
    (Il2CppObject *)this,
    Method_FriendRootComponent_OnSelectSearchFriend__,
    0LL);
  if ( !friendSearchMenu )
LABEL_11:
    sub_B170D4();
  FriendSearchMenu__Open(friendSearchMenu, v15, 0, 0LL);
}


void __fastcall FriendRootComponent___OnClickBack_b__96_0(
        FriendRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v12; // x20
  const MethodInfo *v13; // x2

  if ( (byte_40FD9B2 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_string___ctor__, result);
    sub_B16FFC(&System_Action_string__TypeInfo, v5);
    sub_B16FFC(&Method_FriendRootComponent__OnClickBack_b__96_1__, v6);
    sub_B16FFC(&StringLiteral_21129/*"ok"*/, v7);
    byte_40FD9B2 = 1;
  }
  if ( !result )
    sub_B170D4();
  if ( System_String__Equals_43731072(result, (System_String_o *)StringLiteral_21129/*"ok"*/, 0LL) )
  {
    v12 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                 System_Action_string__TypeInfo,
                                                                                 v8,
                                                                                 v9,
                                                                                 v10,
                                                                                 v11);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v12,
      (Il2CppObject *)this,
      Method_FriendRootComponent__OnClickBack_b__96_1__,
      (const MethodInfo_24B7310 *)Method_System_Action_string___ctor__);
    FriendRootComponent__FriendLockRequst(this, (System_Action_string__o *)v12, v13);
  }
}


void __fastcall FriendRootComponent___OnClickBack_b__96_1(
        FriendRootComponent_o *this,
        System_String_o *res,
        const MethodInfo *method)
{
  __int64 v5; // x1
  FriendSearchMenu_o *friendSearchMenu; // x0
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_40FD9B3 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_21129/*"ok"*/, res);
    sub_B16FFC(&StringLiteral_3034/*"CLICK_BACK"*/, v5);
    byte_40FD9B3 = 1;
  }
  if ( !res )
    goto LABEL_9;
  if ( System_String__Equals_43731072(res, (System_String_o *)StringLiteral_21129/*"ok"*/, 0LL) )
  {
    friendSearchMenu = this->fields.friendSearchMenu;
    if ( friendSearchMenu )
    {
      FriendSearchMenu__BlockInput(friendSearchMenu, 0LL);
      myFSM = this->fields.myFSM;
      if ( myFSM )
      {
        PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_3034/*"CLICK_BACK"*/, 0LL);
        return;
      }
    }
LABEL_9:
    sub_B170D4();
  }
}


void __fastcall FriendRootComponent___OnClickModeUserDetail_b__98_0(
        FriendRootComponent_o *this,
        System_String_o *res,
        const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x1

  if ( (byte_40FD9B6 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, res);
    sub_B16FFC(&StringLiteral_21129/*"ok"*/, v5);
    byte_40FD9B6 = 1;
  }
  if ( !res )
    sub_B170D4();
  if ( System_String__Equals_43731072(res, (System_String_o *)StringLiteral_21129/*"ok"*/, 0LL) )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    this->fields.currentModeKind = 0;
    FriendRootComponent__RefreshInfo(this, v6);
  }
}


void __fastcall FriendRootComponent___OnClickTabFriend_b__105_0(
        FriendRootComponent_o *this,
        System_String_o *res,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t state; // w8
  FriendSearchResultMenu_o *friendSearchResultMenu; // x0
  FriendSearchResultMenu_o *v9; // x0
  ClassButtonControlComponent_o *v10; // x20
  int32_t CursorPos; // w0
  FriendRootComponent_o *v12; // x0
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x1
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_40FD9B7 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, res);
    sub_B16FFC(&StringLiteral_21129/*"ok"*/, v5);
    sub_B16FFC(&StringLiteral_3074/*"CLICK_TAB"*/, v6);
    byte_40FD9B7 = 1;
  }
  if ( !res )
    goto LABEL_23;
  if ( !System_String__Equals_43731072(res, (System_String_o *)StringLiteral_21129/*"ok"*/, 0LL) )
    return;
  state = this->fields.state;
  if ( state <= 9 )
  {
    if ( state != 4 && state != 9 )
      return;
LABEL_16:
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    FriendRootComponent__set_tabKind(v12, 0, v13);
    FriendRootComponent__RefreshTab(this, v14);
    classButtonControl = this->fields.classButtonControl;
    if ( classButtonControl )
    {
      classButtonControl->fields.updateEnable = 0;
      myFSM = this->fields.myFSM;
      if ( myFSM )
      {
        PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_3074/*"CLICK_TAB"*/, 0LL);
        return;
      }
    }
LABEL_23:
    sub_B170D4();
  }
  if ( state == 14 || state == 19 )
    goto LABEL_16;
  if ( state == 23 )
  {
    friendSearchResultMenu = this->fields.friendSearchResultMenu;
    if ( !friendSearchResultMenu )
      goto LABEL_23;
    if ( FriendSearchResultMenu__getChangeCursorPos(friendSearchResultMenu, 0LL) != -1 )
    {
      v9 = this->fields.friendSearchResultMenu;
      if ( !v9 )
        goto LABEL_23;
      v10 = this->fields.classButtonControl;
      CursorPos = FriendSearchResultMenu__get_GetCursorPos(v9, 0LL);
      if ( !v10 )
        goto LABEL_23;
      ClassButtonControlComponent__setCursor(v10, CursorPos, 0LL);
    }
    goto LABEL_16;
  }
}


void __fastcall FriendRootComponent___OnClickTabOffered_b__106_0(
        FriendRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v12; // x20
  const MethodInfo *v13; // x2

  if ( (byte_40FD9B8 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_string___ctor__, result);
    sub_B16FFC(&System_Action_string__TypeInfo, v5);
    sub_B16FFC(&Method_FriendRootComponent__OnClickTabOffered_b__106_1__, v6);
    sub_B16FFC(&StringLiteral_21129/*"ok"*/, v7);
    byte_40FD9B8 = 1;
  }
  if ( !result )
    sub_B170D4();
  if ( System_String__Equals_43731072(result, (System_String_o *)StringLiteral_21129/*"ok"*/, 0LL) )
  {
    v12 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                 System_Action_string__TypeInfo,
                                                                                 v8,
                                                                                 v9,
                                                                                 v10,
                                                                                 v11);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v12,
      (Il2CppObject *)this,
      Method_FriendRootComponent__OnClickTabOffered_b__106_1__,
      (const MethodInfo_24B7310 *)Method_System_Action_string___ctor__);
    FriendRootComponent__FriendLockRequst(this, (System_Action_string__o *)v12, v13);
  }
}


void __fastcall FriendRootComponent___OnClickTabOffered_b__106_1(
        FriendRootComponent_o *this,
        System_String_o *res,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t state; // w8
  FriendSearchResultMenu_o *friendSearchResultMenu; // x0
  FriendSearchResultMenu_o *v9; // x0
  ClassButtonControlComponent_o *v10; // x20
  int32_t CursorPos; // w0
  FriendRootComponent_o *v12; // x0
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x1
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_40FD9B9 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, res);
    sub_B16FFC(&StringLiteral_21129/*"ok"*/, v5);
    sub_B16FFC(&StringLiteral_3074/*"CLICK_TAB"*/, v6);
    byte_40FD9B9 = 1;
  }
  if ( !res )
    goto LABEL_23;
  if ( !System_String__Equals_43731072(res, (System_String_o *)StringLiteral_21129/*"ok"*/, 0LL) )
    return;
  state = this->fields.state;
  if ( state <= 9 )
  {
    if ( state != 4 && state != 9 )
      return;
LABEL_16:
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    FriendRootComponent__set_tabKind(v12, 1, v13);
    FriendRootComponent__RefreshTab(this, v14);
    classButtonControl = this->fields.classButtonControl;
    if ( classButtonControl )
    {
      classButtonControl->fields.updateEnable = 0;
      myFSM = this->fields.myFSM;
      if ( myFSM )
      {
        PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_3074/*"CLICK_TAB"*/, 0LL);
        return;
      }
    }
LABEL_23:
    sub_B170D4();
  }
  if ( state == 14 || state == 19 )
    goto LABEL_16;
  if ( state == 23 )
  {
    friendSearchResultMenu = this->fields.friendSearchResultMenu;
    if ( !friendSearchResultMenu )
      goto LABEL_23;
    if ( FriendSearchResultMenu__getChangeCursorPos(friendSearchResultMenu, 0LL) != -1 )
    {
      v9 = this->fields.friendSearchResultMenu;
      if ( !v9 )
        goto LABEL_23;
      v10 = this->fields.classButtonControl;
      CursorPos = FriendSearchResultMenu__get_GetCursorPos(v9, 0LL);
      if ( !v10 )
        goto LABEL_23;
      ClassButtonControlComponent__setCursor(v10, CursorPos, 0LL);
    }
    goto LABEL_16;
  }
}


void __fastcall FriendRootComponent___OnClickTabSearch_b__107_0(
        FriendRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v12; // x20
  const MethodInfo *v13; // x2

  if ( (byte_40FD9BA & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_string___ctor__, result);
    sub_B16FFC(&System_Action_string__TypeInfo, v5);
    sub_B16FFC(&Method_FriendRootComponent__OnClickTabSearch_b__107_1__, v6);
    sub_B16FFC(&StringLiteral_21129/*"ok"*/, v7);
    byte_40FD9BA = 1;
  }
  if ( !result )
    sub_B170D4();
  if ( System_String__Equals_43731072(result, (System_String_o *)StringLiteral_21129/*"ok"*/, 0LL) )
  {
    v12 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                 System_Action_string__TypeInfo,
                                                                                 v8,
                                                                                 v9,
                                                                                 v10,
                                                                                 v11);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v12,
      (Il2CppObject *)this,
      Method_FriendRootComponent__OnClickTabSearch_b__107_1__,
      (const MethodInfo_24B7310 *)Method_System_Action_string___ctor__);
    FriendRootComponent__FriendLockRequst(this, (System_Action_string__o *)v12, v13);
  }
}


void __fastcall FriendRootComponent___OnClickTabSearch_b__107_1(
        FriendRootComponent_o *this,
        System_String_o *res,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t state; // w8
  FriendRootComponent_o *v8; // x0
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x1
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_40FD9BB & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, res);
    sub_B16FFC(&StringLiteral_21129/*"ok"*/, v5);
    sub_B16FFC(&StringLiteral_3074/*"CLICK_TAB"*/, v6);
    byte_40FD9BB = 1;
  }
  if ( !res )
    goto LABEL_18;
  if ( !System_String__Equals_43731072(res, (System_String_o *)StringLiteral_21129/*"ok"*/, 0LL) )
    return;
  state = this->fields.state;
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
    FriendRootComponent__RefreshTab(this, v10);
    classButtonControl = this->fields.classButtonControl;
    if ( classButtonControl )
    {
      classButtonControl->fields.updateEnable = 0;
      myFSM = this->fields.myFSM;
      if ( myFSM )
      {
        PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_3074/*"CLICK_TAB"*/, 0LL);
        return;
      }
    }
LABEL_18:
    sub_B170D4();
  }
}


void __fastcall FriendRootComponent___RequestFollowRemove_b__139_0(
        FriendRootComponent_o *this,
        System_String_o *res,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  FriendOperationItemListViewItem_o *Item; // x0
  struct OtherUserGameEntity_o *otherUserGameEntity; // x21
  CommonUI_o *Instance; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  NetworkManager_ResultCallbackFunc_o *v20; // x20
  FollowdRemoveRequest_o *Request_WarBoardWallAttackRequest; // x0
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_40FD9BC & 1) == 0 )
  {
    sub_B16FFC(&Method_FriendRootComponent_EndRequestFollowRemove__, res);
    sub_B16FFC(&Method_NetworkManager_getRequest_FollowdRemoveRequest___, v5);
    sub_B16FFC(&NetworkManager_TypeInfo, v6);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_B16FFC(&StringLiteral_21129/*"ok"*/, v9);
    sub_B16FFC(&StringLiteral_11041/*"REQUEST_NG"*/, v10);
    byte_40FD9BC = 1;
  }
  if ( !res )
    goto LABEL_16;
  if ( System_String__Equals_43731072(res, (System_String_o *)StringLiteral_21129/*"ok"*/, 0LL) )
  {
    operationItemListViewManager = this->fields.operationItemListViewManager;
    if ( !operationItemListViewManager )
      goto LABEL_16;
    Item = FriendOperationItemListViewManager__GetItem(operationItemListViewManager, this->fields.selectItemNum, v11);
    if ( Item )
    {
      otherUserGameEntity = Item->fields.otherUserGameEntity;
      if ( otherUserGameEntity )
      {
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( Instance )
        {
          CommonUI__SetConnectMarkFadeInLag(Instance, 0, 0LL);
          v20 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                         NetworkManager_ResultCallbackFunc_TypeInfo,
                                                         v16,
                                                         v17,
                                                         v18,
                                                         v19);
          NetworkManager_ResultCallbackFunc___ctor(
            v20,
            (Il2CppObject *)this,
            Method_FriendRootComponent_EndRequestFollowRemove__,
            0LL);
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          Request_WarBoardWallAttackRequest = (FollowdRemoveRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                          v20,
                                                                          (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_FollowdRemoveRequest___);
          if ( Request_WarBoardWallAttackRequest )
          {
            FollowdRemoveRequest__beginRequest(
              Request_WarBoardWallAttackRequest,
              otherUserGameEntity->fields.userId,
              0LL);
            return;
          }
        }
LABEL_16:
        sub_B170D4();
      }
    }
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    goto LABEL_16;
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_11041/*"REQUEST_NG"*/, 0LL);
}


void __fastcall FriendRootComponent___RequestFriendOffer2_b__84_0(
        FriendRootComponent_o *this,
        System_String_o *res,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  FriendOperationItemListViewItem_o *Item; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  struct OtherUserGameEntity_o *otherUserGameEntity; // x21
  NetworkManager_ResultCallbackFunc_o *v18; // x20
  FriendOfferRequest_o *Request_WarBoardWallAttackRequest; // x0
  const MethodInfo *v20; // x2
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_40FD9B0 & 1) == 0 )
  {
    sub_B16FFC(&Method_FriendRootComponent_EndRequestFriend__, res);
    sub_B16FFC(&Method_NetworkManager_getRequest_FriendOfferRequest___, v5);
    sub_B16FFC(&NetworkManager_TypeInfo, v6);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_21129/*"ok"*/, v8);
    sub_B16FFC(&StringLiteral_11041/*"REQUEST_NG"*/, v9);
    byte_40FD9B0 = 1;
  }
  if ( !res )
    goto LABEL_15;
  if ( System_String__Equals_43731072(res, (System_String_o *)StringLiteral_21129/*"ok"*/, 0LL) )
  {
    operationItemListViewManager = this->fields.operationItemListViewManager;
    if ( !operationItemListViewManager )
      goto LABEL_15;
    Item = FriendOperationItemListViewManager__GetItem(operationItemListViewManager, this->fields.selectItemNum, v10);
    if ( Item )
    {
      otherUserGameEntity = Item->fields.otherUserGameEntity;
      if ( otherUserGameEntity )
      {
        v18 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                       NetworkManager_ResultCallbackFunc_TypeInfo,
                                                       v13,
                                                       v14,
                                                       v15,
                                                       v16);
        NetworkManager_ResultCallbackFunc___ctor(
          v18,
          (Il2CppObject *)this,
          Method_FriendRootComponent_EndRequestFriend__,
          0LL);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        Request_WarBoardWallAttackRequest = (FriendOfferRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                      v18,
                                                                      (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_FriendOfferRequest___);
        if ( Request_WarBoardWallAttackRequest )
        {
          FriendOfferRequest__beginRequest(Request_WarBoardWallAttackRequest, otherUserGameEntity->fields.userId, v20);
          return;
        }
LABEL_15:
        sub_B170D4();
      }
    }
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    goto LABEL_15;
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_11041/*"REQUEST_NG"*/, 0LL);
}


void __fastcall FriendRootComponent___RequestFriendRemove_b__88_0(
        FriendRootComponent_o *this,
        System_String_o *res,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  FriendOperationItemListViewItem_o *Item; // x0
  struct OtherUserGameEntity_o *otherUserGameEntity; // x21
  CommonUI_o *Instance; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  NetworkManager_ResultCallbackFunc_o *v20; // x20
  FriendRemoveRequest_o *Request_WarBoardWallAttackRequest; // x0
  const MethodInfo *v22; // x2
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_40FD9B1 & 1) == 0 )
  {
    sub_B16FFC(&Method_FriendRootComponent_EndRequestFriend__, res);
    sub_B16FFC(&Method_NetworkManager_getRequest_FriendRemoveRequest___, v5);
    sub_B16FFC(&NetworkManager_TypeInfo, v6);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_B16FFC(&StringLiteral_21129/*"ok"*/, v9);
    sub_B16FFC(&StringLiteral_11041/*"REQUEST_NG"*/, v10);
    byte_40FD9B1 = 1;
  }
  if ( !res )
    goto LABEL_16;
  if ( System_String__Equals_43731072(res, (System_String_o *)StringLiteral_21129/*"ok"*/, 0LL) )
  {
    operationItemListViewManager = this->fields.operationItemListViewManager;
    if ( !operationItemListViewManager )
      goto LABEL_16;
    Item = FriendOperationItemListViewManager__GetItem(operationItemListViewManager, this->fields.selectItemNum, v11);
    if ( Item )
    {
      otherUserGameEntity = Item->fields.otherUserGameEntity;
      if ( otherUserGameEntity )
      {
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( Instance )
        {
          CommonUI__SetConnectMarkFadeInLag(Instance, 0, 0LL);
          v20 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                         NetworkManager_ResultCallbackFunc_TypeInfo,
                                                         v16,
                                                         v17,
                                                         v18,
                                                         v19);
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
          Request_WarBoardWallAttackRequest = (FriendRemoveRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                         v20,
                                                                         (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_FriendRemoveRequest___);
          if ( Request_WarBoardWallAttackRequest )
          {
            FriendRemoveRequest__beginRequest(
              Request_WarBoardWallAttackRequest,
              otherUserGameEntity->fields.userId,
              v22);
            return;
          }
        }
LABEL_16:
        sub_B170D4();
      }
    }
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    goto LABEL_16;
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_11041/*"REQUEST_NG"*/, 0LL);
}


void __fastcall FriendRootComponent___afterMainMenubarSelect_b__97_0(
        FriendRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v13; // x20
  const MethodInfo *v14; // x2
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_40FD9B4 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_string___ctor__, result);
    sub_B16FFC(&System_Action_string__TypeInfo, v5);
    sub_B16FFC(&Method_FriendRootComponent__afterMainMenubarSelect_b__97_1__, v6);
    sub_B16FFC(&StringLiteral_21129/*"ok"*/, v7);
    sub_B16FFC(&StringLiteral_11041/*"REQUEST_NG"*/, v8);
    byte_40FD9B4 = 1;
  }
  if ( !result )
    goto LABEL_8;
  if ( System_String__Equals_43731072(result, (System_String_o *)StringLiteral_21129/*"ok"*/, 0LL) )
  {
    v13 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                 System_Action_string__TypeInfo,
                                                                                 v9,
                                                                                 v10,
                                                                                 v11,
                                                                                 v12);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v13,
      (Il2CppObject *)this,
      Method_FriendRootComponent__afterMainMenubarSelect_b__97_1__,
      (const MethodInfo_24B7310 *)Method_System_Action_string___ctor__);
    FriendRootComponent__FriendLockRequst(this, (System_Action_string__o *)v13, v14);
    return;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
LABEL_8:
    sub_B170D4();
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_11041/*"REQUEST_NG"*/, 0LL);
}


void __fastcall FriendRootComponent___afterMainMenubarSelect_b__97_1(
        FriendRootComponent_o *this,
        System_String_o *res,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  bool v7; // w0
  PlayMakerFSM_o *myFSM; // x8
  __int64 *v9; // x9

  if ( (byte_40FD9B5 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_11043/*"REQUEST_OK"*/, res);
    sub_B16FFC(&StringLiteral_21129/*"ok"*/, v5);
    sub_B16FFC(&StringLiteral_11041/*"REQUEST_NG"*/, v6);
    byte_40FD9B5 = 1;
  }
  if ( !res
    || (v7 = System_String__Equals_43731072(res, (System_String_o *)StringLiteral_21129/*"ok"*/, 0LL),
        (myFSM = this->fields.myFSM) == 0LL) )
  {
    sub_B170D4();
  }
  if ( v7 )
    v9 = &StringLiteral_11043/*"REQUEST_OK"*/;
  else
    v9 = &StringLiteral_11041/*"REQUEST_NG"*/;
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)*v9, 0LL);
}


void __fastcall FriendRootComponent__afterMainMenubarSelect(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  FriendRootComponent_messageRequestCallback_o *v7; // x20
  const MethodInfo *v8; // x2

  if ( (byte_40FD986 & 1) == 0 )
  {
    sub_B16FFC(&Method_FriendRootComponent__afterMainMenubarSelect_b__97_0__, method);
    sub_B16FFC(&FriendRootComponent_messageRequestCallback_TypeInfo, v6);
    byte_40FD986 = 1;
  }
  v7 = (FriendRootComponent_messageRequestCallback_o *)sub_B170CC(
                                                         FriendRootComponent_messageRequestCallback_TypeInfo,
                                                         method,
                                                         v2,
                                                         v3,
                                                         v4);
  FriendRootComponent_messageRequestCallback___ctor(
    v7,
    (Il2CppObject *)this,
    Method_FriendRootComponent__afterMainMenubarSelect_b__97_0__,
    0LL);
  FriendRootComponent__messageDispChangeRequest(this, v7, v8);
}


void __fastcall FriendRootComponent__beginFinish(FriendRootComponent_o *this, const MethodInfo *method)
{
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x8
  FriendOperationItemListViewManager_o *v4; // x0
  const MethodInfo *v5; // x1
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  FriendSearchMenu_o *friendSearchMenu; // x0
  FriendSearchResultMenu_o *friendSearchResultMenu; // x0
  FriendWarningDialog_o *friendWarningDialog; // x0
  UnityEngine_Component_o *v10; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_40FD956 & 1) == 0 )
  {
    sub_B16FFC(&RandomLimitCountManager_TypeInfo, method);
    byte_40FD956 = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    goto LABEL_15;
  operationItemListViewManager->fields._isMessageApply_k__BackingField = 0;
  v4 = this->fields.operationItemListViewManager;
  if ( !v4 )
    goto LABEL_15;
  FriendOperationItemListViewManager__DestroyList(v4, method);
  operationConfirmMenu = this->fields.operationConfirmMenu;
  if ( !operationConfirmMenu )
    goto LABEL_15;
  FriendOperationConfirmMenu__Init(operationConfirmMenu, v5);
  friendSearchMenu = this->fields.friendSearchMenu;
  if ( !friendSearchMenu
    || (FriendSearchMenu__Init(friendSearchMenu, 0LL),
        (friendSearchResultMenu = this->fields.friendSearchResultMenu) == 0LL)
    || (FriendSearchResultMenu__Init(friendSearchResultMenu, 0LL),
        (friendWarningDialog = this->fields.friendWarningDialog) == 0LL)
    || (FriendWarningDialog__Init(friendWarningDialog, 0LL),
        (v10 = (UnityEngine_Component_o *)this->fields.operationItemListViewManager) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject(v10, 0LL)) == 0LL )
  {
LABEL_15:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.state = 0;
  this->fields.selectFriendEntity = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.selectFriendEntity, 0LL, v12, v13, v14, v15, v16, v17);
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
  bool IsActiveBgTxt; // w0
  ClassButtonControlComponent_o *classButtonControl; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  ClassButtonControlComponent_CallbackFunc_o *v14; // x21
  const MethodInfo *v15; // x1
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  AvalonSceneManager_o *Instance; // x0

  if ( (byte_40FD952 & 1) == 0 )
  {
    sub_B16FFC(&ClassButtonControlComponent_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_FriendRootComponent_changeClass__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4);
    byte_40FD952 = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 7, 39, 0LL);
  FriendRootComponent__CheckHelpUI(this, v5);
  bgTxtSprite = (UnityEngine_Component_o *)this->fields.bgTxtSprite;
  if ( !bgTxtSprite )
    goto LABEL_9;
  gameObject = UnityEngine_Component__get_gameObject(bgTxtSprite, 0LL);
  IsActiveBgTxt = BgTxtManager__IsActiveBgTxt(0LL);
  if ( !gameObject )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(gameObject, IsActiveBgTxt, 0LL);
  classButtonControl = this->fields.classButtonControl;
  v14 = (ClassButtonControlComponent_CallbackFunc_o *)sub_B170CC(
                                                        ClassButtonControlComponent_CallbackFunc_TypeInfo,
                                                        v10,
                                                        v11,
                                                        v12,
                                                        v13);
  ClassButtonControlComponent_CallbackFunc___ctor(
    v14,
    (Il2CppObject *)this,
    Method_FriendRootComponent_changeClass__,
    0LL);
  if ( !classButtonControl
    || (ClassButtonControlComponent__init(classButtonControl, v14, 0, 0, 0, 0LL),
        (operationItemListViewManager = this->fields.operationItemListViewManager) == 0LL)
    || (FriendOperationItemListViewManager__SetupClassBoardInfo(operationItemListViewManager, v15),
        (Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
LABEL_9:
    sub_B170D4();
  }
  AvalonSceneManager__endInitialize(Instance, (SceneRootComponent_o *)this, 0LL);
}


void __fastcall FriendRootComponent__beginResume(
        FriendRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x10
  CommonUI_o *Instance; // x20
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x2
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0

  if ( (byte_40FD957 & 1) == 0 )
  {
    sub_B16FFC(&AvalonSceneManager_TypeInfo, data);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B16FFC(&SupportInfoJump_TypeInfo, v6);
    byte_40FD957 = 1;
  }
  if ( data
    && (v7 = *(&SupportInfoJump_TypeInfo->_2.bitflags2 + 1), *(&data->klass->_2.bitflags2 + 1) >= (unsigned int)v7)
    && (SupportInfoJump_c *)data->klass->_2.typeHierarchy[v7 - 1] == SupportInfoJump_TypeInfo )
  {
    this->fields.isReturnSupport = 1;
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    }
    if ( !Instance
      || (CommonUI__maskFadein(Instance, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL),
          FriendRootComponent__RefreshTab(this, v9),
          (operationItemListViewManager = this->fields.operationItemListViewManager) == 0LL) )
    {
      sub_B170D4();
    }
    FriendOperationItemListViewManager__SetMode_31847292(operationItemListViewManager, 2, v10);
    SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 7, 39, 0LL);
    MainMenuBar__setMenuActive(1, 0LL, 0LL);
    SceneRootComponent__sendMessageStartUp((SceneRootComponent_o *)this, 0LL);
  }
  else
  {
    SceneRootComponent__beginResume_29752260((SceneRootComponent_o *)this, 0LL);
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
  TitleInfoControl_o *v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  NetworkManager_ResultCallbackFunc_o *v22; // x20
  RequestBase_o *Request_WarBoardWallAttackRequest; // x0

  if ( (byte_40FD953 & 1) == 0 )
  {
    sub_B16FFC(&BgmManager_TypeInfo, method);
    sub_B16FFC(&Method_FriendRootComponent_EndFriendRequest__, v3);
    sub_B16FFC(&Method_NetworkManager_getRequest_FriendTopRequest___, v4);
    sub_B16FFC(&NetworkManager_TypeInfo, v5);
    sub_B16FFC(&RandomLimitCountManager_TypeInfo, v6);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    sub_B16FFC(&SoundManager_TypeInfo, v8);
    byte_40FD953 = 1;
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
  v11 = this->fields.titleInfo;
  if ( !v11 )
    goto LABEL_19;
  TitleInfoControl__setBackBtnSprite_19608808(v11, 1, 0, 0, 0LL);
  this->fields.state = 0;
  this->fields.currentModeKind = 0;
  this->fields.selectFriendEntity = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.selectFriendEntity, 0LL, v12, v13, v14, v15, v16, v17);
  v22 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                 NetworkManager_ResultCallbackFunc_TypeInfo,
                                                 v18,
                                                 v19,
                                                 v20,
                                                 v21);
  NetworkManager_ResultCallbackFunc___ctor(
    v22,
    (Il2CppObject *)this,
    Method_FriendRootComponent_EndFriendRequest__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (RequestBase_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                         v22,
                                                         (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_FriendTopRequest___);
  if ( !Request_WarBoardWallAttackRequest )
LABEL_19:
    sub_B170D4();
  RequestBase__beginRequest(Request_WarBoardWallAttackRequest, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendRootComponent__changeClass(
        FriendRootComponent_o *this,
        int32_t classPos,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0

  if ( (byte_40FD990 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, *(_QWORD *)&classPos);
    byte_40FD990 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    sub_B170D4();
  FriendOperationItemListViewManager__SetClassId(operationItemListViewManager, classPos, v5);
}


int32_t __fastcall FriendRootComponent__get_tabKind(FriendRootComponent_o *this, const MethodInfo *method)
{
  FriendRootComponent_c *v2; // x0

  if ( (byte_40FD951 & 1) == 0 )
  {
    sub_B16FFC(&FriendRootComponent_TypeInfo, method);
    byte_40FD951 = 1;
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x20
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  FriendRootComponent_messageRequestCallback_o **v23; // x22
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  int32_t ItemSum; // w23
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  System_Collections_Generic_List_long__o *v36; // x21
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  System_Collections_Generic_List_long__o *v41; // x22
  __int64 v42; // x1
  const MethodInfo *v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  int32_t v46; // w24
  FriendOperationItemListViewManager_o *v47; // x0
  FriendOperationItemListViewItem_o *Item; // x0
  struct OtherUserGameEntity_o *otherUserGameEntity; // x8
  const MethodInfo_2F164A0 *v50; // x2
  System_Collections_Generic_List_long__o *v51; // x0
  NetworkManager_ResultCallbackFunc_o *v52; // x19
  WarBoardWallAttackRequest_o *Request_WarBoardWallAttackRequest; // x0
  FriendMessageHideSyncRequest_o *v54; // x19
  System_Int64_array *v55; // x0
  System_Int64_array *v56; // x20
  System_Int64_array *v57; // x0
  const MethodInfo *v58; // x3

  if ( (byte_40FD98E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_long__Add__, callback);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__ToArray__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_long___ctor__, v8);
    sub_B16FFC(&System_Collections_Generic_List_long__TypeInfo, v9);
    sub_B16FFC(&Method_NetworkManager_getRequest_FriendMessageHideSyncRequest___, v10);
    sub_B16FFC(&NetworkManager_TypeInfo, v11);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v12);
    sub_B16FFC(&Method_FriendRootComponent___c__DisplayClass108_0__messageDispChangeRequest_b__0__, v13);
    sub_B16FFC(&FriendRootComponent___c__DisplayClass108_0_TypeInfo, v14);
    sub_B16FFC(&StringLiteral_21129/*"ok"*/, v15);
    byte_40FD98E = 1;
  }
  v16 = sub_B170CC(FriendRootComponent___c__DisplayClass108_0_TypeInfo, callback, method, v3, v4);
  FriendRootComponent___c__DisplayClass108_0___ctor((FriendRootComponent___c__DisplayClass108_0_o *)v16, 0LL);
  if ( !v16 )
    goto LABEL_29;
  *(_QWORD *)(v16 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v16 + 16), (System_Int32_array **)this, v17, v18, v19, v20, v21, v22);
  *(_QWORD *)(v16 + 24) = callback;
  v23 = (FriendRootComponent_messageRequestCallback_o **)(v16 + 24);
  sub_B16F98((BattleServantConfConponent_o *)(v16 + 24), (System_Int32_array **)callback, v24, v25, v26, v27, v28, v29);
  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    goto LABEL_29;
  if ( operationItemListViewManager->fields._isMessageApply_k__BackingField )
  {
    ItemSum = ListViewManager__get_ItemSum((ListViewManager_o *)operationItemListViewManager, 0LL);
    v36 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                       System_Collections_Generic_List_long__TypeInfo,
                                                       v32,
                                                       v33,
                                                       v34,
                                                       v35);
    System_Collections_Generic_List_long____ctor(
      v36,
      (const MethodInfo_2F15744 *)Method_System_Collections_Generic_List_long___ctor__);
    v41 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                       System_Collections_Generic_List_long__TypeInfo,
                                                       v37,
                                                       v38,
                                                       v39,
                                                       v40);
    System_Collections_Generic_List_long____ctor(
      v41,
      (const MethodInfo_2F15744 *)Method_System_Collections_Generic_List_long___ctor__);
    if ( ItemSum >= 1 )
    {
      v46 = 0;
      while ( 1 )
      {
        v47 = this->fields.operationItemListViewManager;
        if ( !v47 )
          break;
        Item = FriendOperationItemListViewManager__GetItem(v47, v46, v43);
        if ( !Item )
          break;
        if ( Item->fields.kind == 3 )
        {
          otherUserGameEntity = Item->fields.otherUserGameEntity;
          if ( !otherUserGameEntity )
            break;
          if ( Item->fields.swapMessageDisp )
          {
            if ( !v36 )
              break;
            v50 = (const MethodInfo_2F164A0 *)Method_System_Collections_Generic_List_long__Add__;
            v51 = v36;
          }
          else
          {
            if ( !v41 )
              break;
            v50 = (const MethodInfo_2F164A0 *)Method_System_Collections_Generic_List_long__Add__;
            v51 = v41;
          }
          System_Collections_Generic_List_long___Add(v51, otherUserGameEntity->fields.userId, v50);
        }
        if ( ++v46 >= ItemSum )
          goto LABEL_19;
      }
LABEL_29:
      sub_B170D4();
    }
LABEL_19:
    v52 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                   NetworkManager_ResultCallbackFunc_TypeInfo,
                                                   v42,
                                                   v43,
                                                   v44,
                                                   v45);
    NetworkManager_ResultCallbackFunc___ctor(
      v52,
      (Il2CppObject *)v16,
      Method_FriendRootComponent___c__DisplayClass108_0__messageDispChangeRequest_b__0__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                          v52,
                                          (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_FriendMessageHideSyncRequest___);
    if ( !v41 )
      goto LABEL_29;
    v54 = (FriendMessageHideSyncRequest_o *)Request_WarBoardWallAttackRequest;
    v55 = System_Collections_Generic_List_long___ToArray(
            v41,
            (const MethodInfo_2F185AC *)Method_System_Collections_Generic_List_long__ToArray__);
    if ( !v36 )
      goto LABEL_29;
    v56 = v55;
    v57 = System_Collections_Generic_List_long___ToArray(
            v36,
            (const MethodInfo_2F185AC *)Method_System_Collections_Generic_List_long__ToArray__);
    if ( !v54 )
      goto LABEL_29;
    FriendMessageHideSyncRequest__beginRequest(v54, v56, v57, v58);
  }
  else if ( *v23 )
  {
    FriendRootComponent_messageRequestCallback__Invoke(*v23, (System_String_o *)StringLiteral_21129/*"ok"*/, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendRootComponent__set_tabKind(FriendRootComponent_o *this, int32_t value, const MethodInfo *method)
{
  FriendRootComponent_c *v4; // x0

  if ( (byte_40FD950 & 1) == 0 )
  {
    sub_B16FFC(&FriendRootComponent_TypeInfo, *(_QWORD *)&value);
    byte_40FD950 = 1;
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
    sub_B170D4();
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
  int32_t v6; // w21
  struct FriendRootComponent_o *_4__this; // x8
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  FriendOperationItemListViewItem_o *Item; // x0

  if ( (byte_40F68CD & 1) == 0 )
  {
    sub_B16FFC(&Method_ActionExtensions_Call_string___, result);
    sub_B16FFC(&StringLiteral_21129/*"ok"*/, v5);
    byte_40F68CD = 1;
  }
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_21129/*"ok"*/, 0LL) && this->fields.sum >= 1 )
  {
    v6 = 0;
    do
    {
      _4__this = this->fields.__4__this;
      if ( !_4__this || (operationItemListViewManager = _4__this->fields.operationItemListViewManager) == 0LL )
        sub_B170D4();
      Item = FriendOperationItemListViewManager__GetItem(operationItemListViewManager, v6, 0LL);
      if ( Item )
        FriendOperationItemListViewItem__RefreshLockInfo(Item, 0LL);
      ++v6;
    }
    while ( v6 < this->fields.sum );
  }
  ActionExtensions__Call_BlankEarth_QAARotateEarthResponse_(
    (System_Action_T__o *)this->fields.onFinishedRequest,
    (BlankEarth_QAARotateEarthResponse_o *)result,
    (const MethodInfo_2D39F2C *)Method_ActionExtensions_Call_string___);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendRootComponent_messageRequestCallback___ctor(
        FriendRootComponent_messageRequestCallback_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
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
  return (System_IAsyncResult_o *)sub_B16FA0(this, v6, callback, object);
}


void __fastcall FriendRootComponent_messageRequestCallback__EndInvoke(
        FriendRootComponent_messageRequestCallback_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
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
        sub_B170B8(*(_QWORD *)&v27->fields.extra_arg, result, method);
      v31 = sub_B1702C(v28);
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
            v40 = sub_B17024(v28);
            v41 = sub_B17428(v28);
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
                  v23 = sub_AAFEF8(result, v43, v44);
                }
                v15 = *(_QWORD *)(v23 + 8);
              }
              else
              {
                v15 = *((_QWORD *)&result->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v28 + 72));
              }
              v24 = (void (__fastcall **)(System_String_o *, _QWORD))sub_B170AC(v15, v28);
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
                  v14 = sub_AAFEF8(result, class_0, v9);
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
          v33 = sub_B17024(v28);
          v34 = sub_B17428(v28);
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
                v25 = sub_AAFEF8(v29, v36, v37);
              }
              v22 = *(_QWORD *)(v25 + 8);
            }
            else
            {
              v22 = *(_QWORD *)(*v29 + 16LL * *(unsigned __int16 *)(v28 + 72) + 320);
            }
            v26 = (void (__fastcall **)(__int64 *, System_String_o *, _QWORD))sub_B170AC(v22, v28);
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
                v21 = sub_AAFEF8(v29, v17, v16);
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