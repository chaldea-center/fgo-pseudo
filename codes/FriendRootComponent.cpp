void __fastcall FriendRootComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_48E6BBD & 1) == 0 )
  {
    sub_1B00CCC(&FriendRootComponent_TypeInfo, v1);
    byte_48E6BBD = 1;
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

  if ( (byte_48E6BAE & 1) == 0 )
  {
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_48E6BAE = 1;
  }
  state = this->fields.state;
  switch ( state )
  {
    case ',':
      this->fields.state = 23;
      Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        CommonUI__CloseNotificationDialog(Instance, 0LL);
        goto LABEL_12;
      }
LABEL_14:
      sub_1B00F28(Instance, method);
    case '+':
      Instance = (CommonUI_o *)this->fields.friendWarningDialog;
      this->fields.state = 23;
      if ( Instance )
      {
        FriendWarningDialog__Close_45109904((FriendWarningDialog_o *)Instance, 0LL, v2);
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
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  __int64 v8; // x1
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  const MethodInfo *v10; // x2
  FriendSearchMenu_o *friendSearchMenu; // x20
  FriendSearchMenu_CallbackFunc_o *v12; // x21
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x1

  if ( (byte_48E6BB3 & 1) == 0 )
  {
    sub_1B00CCC(&FriendSearchMenu_CallbackFunc_TypeInfo, method);
    sub_1B00CCC(&Method_FriendRootComponent_OnSelectSearchFriend__, v5);
    byte_48E6BB3 = 1;
  }
  if ( this->fields.state == 42 )
  {
    this->fields.state = 23;
    this->fields.selectFriendCode = 0LL;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.selectFriendCode, 0, v2, v3);
    this->fields.selectFriendEntity = 0LL;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.selectFriendEntity, 0, v6, v7);
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close(operationConfirmMenu, 0LL),
          (operationConfirmMenu = (FriendOperationConfirmMenu_o *)this->fields.friendSearchResultMenu) == 0LL)
      || (FriendSearchResultMenu__Close_45078120((FriendSearchResultMenu_o *)operationConfirmMenu, 0LL, v10),
          friendSearchMenu = this->fields.friendSearchMenu,
          v12 = (FriendSearchMenu_CallbackFunc_o *)sub_1B00F18(FriendSearchMenu_CallbackFunc_TypeInfo),
          FriendSearchMenu_CallbackFunc___ctor(
            v12,
            (Il2CppObject *)this,
            Method_FriendRootComponent_OnSelectSearchFriend__,
            v13),
          !friendSearchMenu) )
    {
      sub_1B00F28(operationConfirmMenu, v8);
    }
    FriendSearchMenu__Open(friendSearchMenu, v12, 1, v14);
    FriendRootComponent__RefreshInfo(this, v15);
  }
}


void __fastcall FriendRootComponent__BackFollowRemoveConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v6; // x21
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  int32_t v9; // w3
  const MethodInfo *v10; // x2

  if ( (byte_48E6BB5 & 1) == 0 )
  {
    sub_1B00CCC(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_1B00CCC(&Method_FriendRootComponent_OnSelectFriendItem__, v3);
    byte_48E6BB5 = 1;
  }
  if ( this->fields.state == 45 )
  {
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close(operationConfirmMenu, 0LL),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v6 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1B00F18(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v6,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v7),
          !operationItemListViewManager) )
    {
      sub_1B00F28(operationConfirmMenu, method);
    }
    operationItemListViewManager->fields.callbackFunc = v6;
    sub_1B00C70(
      (ServantStatusBattleListViewItem_o *)&operationItemListViewManager->fields.callbackFunc,
      (int32_t)v6,
      v8,
      v9);
    FriendOperationItemListViewManager__SetMode_45050616(operationItemListViewManager, 2, v10);
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
      sub_1B00F28(operationConfirmMenu, method);
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

  if ( (byte_48E6BB6 & 1) == 0 )
  {
    sub_1B00CCC(&Method_FriendRootComponent_EndFriendRequest2__, method);
    sub_1B00CCC(&Method_NetworkManager_getRequest_FriendTopRequest___, v3);
    sub_1B00CCC(&NetworkManager_TypeInfo, v4);
    sub_1B00CCC(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    byte_48E6BB6 = 1;
  }
  v6 = (NetworkManager_ResultCallbackFunc_o *)sub_1B00F18(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    Method_FriendRootComponent_EndFriendRequest2__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v6,
                     (const MethodInfo_2DD4818 *)Method_NetworkManager_getRequest_FriendTopRequest___);
  if ( !Request_object )
    sub_1B00F28(0LL, v8);
  RequestBase__beginRequest((RequestBase_o *)Request_object, 0LL);
}


void __fastcall FriendRootComponent__BackFriendAcceptConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v6; // x21
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  int32_t v9; // w3
  const MethodInfo *v10; // x2

  if ( (byte_48E6B7B & 1) == 0 )
  {
    sub_1B00CCC(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_1B00CCC(&Method_FriendRootComponent_OnSelectFriendItem__, v3);
    byte_48E6B7B = 1;
  }
  if ( this->fields.state == 31 )
  {
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close(operationConfirmMenu, 0LL),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v6 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1B00F18(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v6,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v7),
          !operationItemListViewManager) )
    {
      sub_1B00F28(operationConfirmMenu, method);
    }
    operationItemListViewManager->fields.callbackFunc = v6;
    sub_1B00C70(
      (ServantStatusBattleListViewItem_o *)&operationItemListViewManager->fields.callbackFunc,
      (int32_t)v6,
      v8,
      v9);
    FriendOperationItemListViewManager__SetMode_45050616(operationItemListViewManager, 2, v10);
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
  int32_t v11; // w2
  int32_t v12; // w3
  const MethodInfo *v13; // x2

  if ( (byte_48E6B7C & 1) == 0 )
  {
    sub_1B00CCC(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_1B00CCC(&Method_FriendRootComponent_OnSelectFriendItem__, v3);
    byte_48E6B7C = 1;
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
          v9 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1B00F18(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v9,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v10),
          !operationItemListViewManager) )
    {
LABEL_11:
      sub_1B00F28(operationConfirmMenu, v4);
    }
    operationItemListViewManager->fields.callbackFunc = v9;
    sub_1B00C70(
      (ServantStatusBattleListViewItem_o *)&operationItemListViewManager->fields.callbackFunc,
      (int32_t)v9,
      v11,
      v12);
    FriendOperationItemListViewManager__SetMode_45050616(operationItemListViewManager, 2, v13);
  }
}


void __fastcall FriendRootComponent__BackFriendCancelConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v6; // x21
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  int32_t v9; // w3
  const MethodInfo *v10; // x2

  if ( (byte_48E6B81 & 1) == 0 )
  {
    sub_1B00CCC(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_1B00CCC(&Method_FriendRootComponent_OnSelectFriendItem__, v3);
    byte_48E6B81 = 1;
  }
  if ( this->fields.state == 37 )
  {
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close(operationConfirmMenu, 0LL),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v6 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1B00F18(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v6,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v7),
          !operationItemListViewManager) )
    {
      sub_1B00F28(operationConfirmMenu, method);
    }
    operationItemListViewManager->fields.callbackFunc = v6;
    sub_1B00C70(
      (ServantStatusBattleListViewItem_o *)&operationItemListViewManager->fields.callbackFunc,
      (int32_t)v6,
      v8,
      v9);
    FriendOperationItemListViewManager__SetMode_45050616(operationItemListViewManager, 2, v10);
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
  int32_t v11; // w2
  int32_t v12; // w3
  const MethodInfo *v13; // x2

  if ( (byte_48E6B82 & 1) == 0 )
  {
    sub_1B00CCC(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_1B00CCC(&Method_FriendRootComponent_OnSelectFriendItem__, v3);
    byte_48E6B82 = 1;
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
          v9 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1B00F18(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v9,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v10),
          !operationItemListViewManager) )
    {
LABEL_11:
      sub_1B00F28(operationConfirmMenu, v4);
    }
    operationItemListViewManager->fields.callbackFunc = v9;
    sub_1B00C70(
      (ServantStatusBattleListViewItem_o *)&operationItemListViewManager->fields.callbackFunc,
      (int32_t)v9,
      v11,
      v12);
    FriendOperationItemListViewManager__SetMode_45050616(operationItemListViewManager, 2, v13);
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
      FriendWarningDialog__Close_45109904(friendWarningDialog, 0LL, v2);
      goto LABEL_7;
    }
LABEL_9:
    sub_1B00F28(friendWarningDialog, method);
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
  int32_t v9; // w2
  int32_t v10; // w3
  const MethodInfo *v11; // x2

  if ( (byte_48E6BB8 & 1) == 0 )
  {
    sub_1B00CCC(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_1B00CCC(&Method_FriendRootComponent_OnSelectFriendItem__, v3);
    byte_48E6BB8 = 1;
  }
  state = this->fields.state;
  if ( state == 29 || state == 27 )
  {
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close(operationConfirmMenu, 0LL),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v7 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1B00F18(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v7,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v8),
          !operationItemListViewManager) )
    {
      sub_1B00F28(operationConfirmMenu, method);
    }
    operationItemListViewManager->fields.callbackFunc = v7;
    sub_1B00C70(
      (ServantStatusBattleListViewItem_o *)&operationItemListViewManager->fields.callbackFunc,
      (int32_t)v7,
      v9,
      v10);
    FriendOperationItemListViewManager__SetMode_45050616(operationItemListViewManager, 2, v11);
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
  int32_t v11; // w2
  int32_t v12; // w3
  const MethodInfo *v13; // x2

  if ( (byte_48E6BB9 & 1) == 0 )
  {
    sub_1B00CCC(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_1B00CCC(&Method_FriendRootComponent_OnSelectFriendItem__, v3);
    byte_48E6BB9 = 1;
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
          v9 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1B00F18(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v9,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v10),
          !operationItemListViewManager) )
    {
LABEL_11:
      sub_1B00F28(operationConfirmMenu, v4);
    }
    operationItemListViewManager->fields.callbackFunc = v9;
    sub_1B00C70(
      (ServantStatusBattleListViewItem_o *)&operationItemListViewManager->fields.callbackFunc,
      (int32_t)v9,
      v11,
      v12);
    FriendOperationItemListViewManager__SetMode_45050616(operationItemListViewManager, 2, v13);
  }
}


void __fastcall FriendRootComponent__BackFriendOfferConfirmRefreshShowSearch(
        FriendRootComponent_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  __int64 v8; // x1
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  const MethodInfo *v10; // x2
  FriendSearchMenu_o *friendSearchMenu; // x20
  FriendSearchMenu_CallbackFunc_o *v12; // x21
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x3

  if ( (byte_48E6B79 & 1) == 0 )
  {
    sub_1B00CCC(&FriendSearchMenu_CallbackFunc_TypeInfo, method);
    sub_1B00CCC(&Method_FriendRootComponent_OnSelectSearchFriend__, v5);
    byte_48E6B79 = 1;
  }
  if ( this->fields.state == 27 )
  {
    this->fields.state = 23;
    this->fields.selectFriendCode = 0LL;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.selectFriendCode, 0, v2, v3);
    this->fields.selectFriendEntity = 0LL;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.selectFriendEntity, 0, v6, v7);
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close(operationConfirmMenu, 0LL),
          (operationConfirmMenu = (FriendOperationConfirmMenu_o *)this->fields.friendSearchResultMenu) == 0LL)
      || (FriendSearchResultMenu__Close_45078120((FriendSearchResultMenu_o *)operationConfirmMenu, 0LL, v10),
          friendSearchMenu = this->fields.friendSearchMenu,
          v12 = (FriendSearchMenu_CallbackFunc_o *)sub_1B00F18(FriendSearchMenu_CallbackFunc_TypeInfo),
          FriendSearchMenu_CallbackFunc___ctor(
            v12,
            (Il2CppObject *)this,
            Method_FriendRootComponent_OnSelectSearchFriend__,
            v13),
          !friendSearchMenu) )
    {
      sub_1B00F28(operationConfirmMenu, v8);
    }
    FriendSearchMenu__Open(friendSearchMenu, v12, 1, v14);
  }
}


void __fastcall FriendRootComponent__BackFriendRejectConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v6; // x21
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  int32_t v9; // w3
  const MethodInfo *v10; // x2

  if ( (byte_48E6B7E & 1) == 0 )
  {
    sub_1B00CCC(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_1B00CCC(&Method_FriendRootComponent_OnSelectFriendItem__, v3);
    byte_48E6B7E = 1;
  }
  if ( this->fields.state == 34 )
  {
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close(operationConfirmMenu, 0LL),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v6 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1B00F18(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v6,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v7),
          !operationItemListViewManager) )
    {
      sub_1B00F28(operationConfirmMenu, method);
    }
    operationItemListViewManager->fields.callbackFunc = v6;
    sub_1B00C70(
      (ServantStatusBattleListViewItem_o *)&operationItemListViewManager->fields.callbackFunc,
      (int32_t)v6,
      v8,
      v9);
    FriendOperationItemListViewManager__SetMode_45050616(operationItemListViewManager, 2, v10);
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
  int32_t v11; // w2
  int32_t v12; // w3
  const MethodInfo *v13; // x2

  if ( (byte_48E6B7F & 1) == 0 )
  {
    sub_1B00CCC(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_1B00CCC(&Method_FriendRootComponent_OnSelectFriendItem__, v3);
    byte_48E6B7F = 1;
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
          v9 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1B00F18(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v9,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v10),
          !operationItemListViewManager) )
    {
LABEL_11:
      sub_1B00F28(operationConfirmMenu, v4);
    }
    operationItemListViewManager->fields.callbackFunc = v9;
    sub_1B00C70(
      (ServantStatusBattleListViewItem_o *)&operationItemListViewManager->fields.callbackFunc,
      (int32_t)v9,
      v11,
      v12);
    FriendOperationItemListViewManager__SetMode_45050616(operationItemListViewManager, 2, v13);
  }
}


void __fastcall FriendRootComponent__BackFriendRemoveConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v6; // x21
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  int32_t v9; // w3
  const MethodInfo *v10; // x2

  if ( (byte_48E6B84 & 1) == 0 )
  {
    sub_1B00CCC(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_1B00CCC(&Method_FriendRootComponent_OnSelectFriendItem__, v3);
    byte_48E6B84 = 1;
  }
  if ( this->fields.state == 40 )
  {
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close(operationConfirmMenu, 0LL),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v6 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1B00F18(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v6,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v7),
          !operationItemListViewManager) )
    {
      sub_1B00F28(operationConfirmMenu, method);
    }
    operationItemListViewManager->fields.callbackFunc = v6;
    sub_1B00C70(
      (ServantStatusBattleListViewItem_o *)&operationItemListViewManager->fields.callbackFunc,
      (int32_t)v6,
      v8,
      v9);
    FriendOperationItemListViewManager__SetMode_45050616(operationItemListViewManager, 2, v10);
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
  int32_t v11; // w2
  int32_t v12; // w3
  const MethodInfo *v13; // x2

  if ( (byte_48E6B85 & 1) == 0 )
  {
    sub_1B00CCC(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_1B00CCC(&Method_FriendRootComponent_OnSelectFriendItem__, v3);
    byte_48E6B85 = 1;
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
          v9 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1B00F18(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v9,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v10),
          !operationItemListViewManager) )
    {
LABEL_11:
      sub_1B00F28(operationConfirmMenu, v4);
    }
    operationItemListViewManager->fields.callbackFunc = v9;
    sub_1B00C70(
      (ServantStatusBattleListViewItem_o *)&operationItemListViewManager->fields.callbackFunc,
      (int32_t)v9,
      v11,
      v12);
    FriendOperationItemListViewManager__SetMode_45050616(operationItemListViewManager, 2, v13);
  }
}


void __fastcall FriendRootComponent__BackSearchFriend(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  int32_t v4; // w2
  int32_t v5; // w3
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  FriendSearchResultMenu_o *friendSearchResultMenu; // x0
  FriendSearchMenu_o *friendSearchMenu; // x20
  System_Action_o *v10; // x21
  const MethodInfo *v11; // x2

  if ( (byte_48E6B72 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, method);
    sub_1B00CCC(&Method_FriendRootComponent_OnMoveEnd__, v3);
    byte_48E6B72 = 1;
  }
  if ( this->fields.state == 23 )
  {
    this->fields.state = 24;
    FriendRootComponent__RefreshInfo(this, method);
    this->fields.selectFriendEntity = 0LL;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.selectFriendEntity, 0, v4, v5);
    friendSearchResultMenu = this->fields.friendSearchResultMenu;
    if ( !friendSearchResultMenu
      || (FriendSearchResultMenu__Close_45078120(friendSearchResultMenu, 0LL, v7),
          friendSearchMenu = this->fields.friendSearchMenu,
          v10 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo),
          System_Action___ctor(v10, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0LL),
          !friendSearchMenu) )
    {
      sub_1B00F28(friendSearchResultMenu, v6);
    }
    FriendSearchMenu__Close_45076056(friendSearchMenu, v10, v11);
  }
}


void __fastcall FriendRootComponent__BackShowFriend(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  const MethodInfo *v10; // x2

  if ( (byte_48E6B6A & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, method);
    sub_1B00CCC(&Method_FriendRootComponent_OnMoveEnd__, v3);
    byte_48E6B6A = 1;
  }
  if ( this->fields.state == 4 )
  {
    this->fields.state = 5;
    FriendRootComponent__RefreshInfo(this, method);
    operationItemListViewManager = this->fields.operationItemListViewManager;
    v5 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0LL);
    if ( !operationItemListViewManager )
      sub_1B00F28(v6, v7);
    operationItemListViewManager->fields.callbackFunc2 = v5;
    sub_1B00C70(
      (ServantStatusBattleListViewItem_o *)&operationItemListViewManager->fields.callbackFunc2,
      (int32_t)v5,
      v8,
      v9);
    FriendOperationItemListViewManager__SetMode_45050616(operationItemListViewManager, 4, v10);
  }
}


void __fastcall FriendRootComponent__BackShowOffer(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x1

  if ( (byte_48E6B6C & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, method);
    sub_1B00CCC(&Method_FriendRootComponent_OnMoveEnd__, v3);
    byte_48E6B6C = 1;
  }
  if ( this->fields.state == 9 )
  {
    operationItemListViewManager = this->fields.operationItemListViewManager;
    v5 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0LL);
    if ( !operationItemListViewManager )
      sub_1B00F28(v6, v7);
    operationItemListViewManager->fields.callbackFunc2 = v5;
    sub_1B00C70(
      (ServantStatusBattleListViewItem_o *)&operationItemListViewManager->fields.callbackFunc2,
      (int32_t)v5,
      v8,
      v9);
    FriendOperationItemListViewManager__SetMode_45050616(operationItemListViewManager, 4, v10);
    FriendRootComponent__RefreshInfo(this, v11);
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
  int32_t v8; // w2
  int32_t v9; // w3
  const MethodInfo *v10; // x2

  if ( (byte_48E6B6E & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, method);
    sub_1B00CCC(&Method_FriendRootComponent_OnMoveEnd__, v3);
    byte_48E6B6E = 1;
  }
  if ( this->fields.state == 14 )
  {
    this->fields.state = 15;
    FriendRootComponent__RefreshInfo(this, method);
    operationItemListViewManager = this->fields.operationItemListViewManager;
    v5 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0LL);
    if ( !operationItemListViewManager )
      sub_1B00F28(v6, v7);
    operationItemListViewManager->fields.callbackFunc2 = v5;
    sub_1B00C70(
      (ServantStatusBattleListViewItem_o *)&operationItemListViewManager->fields.callbackFunc2,
      (int32_t)v5,
      v8,
      v9);
    FriendOperationItemListViewManager__SetMode_45050616(operationItemListViewManager, 4, v10);
  }
}


void __fastcall FriendRootComponent__BackShowSearch(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  const MethodInfo *v10; // x2

  if ( (byte_48E6B70 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, method);
    sub_1B00CCC(&Method_FriendRootComponent_OnMoveEnd__, v3);
    byte_48E6B70 = 1;
  }
  if ( this->fields.state == 19 )
  {
    this->fields.state = 20;
    operationItemListViewManager = this->fields.operationItemListViewManager;
    v5 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0LL);
    if ( !operationItemListViewManager )
      sub_1B00F28(v6, v7);
    operationItemListViewManager->fields.callbackFunc2 = v5;
    sub_1B00C70(
      (ServantStatusBattleListViewItem_o *)&operationItemListViewManager->fields.callbackFunc2,
      (int32_t)v5,
      v8,
      v9);
    FriendOperationItemListViewManager__SetMode_45050616(operationItemListViewManager, 4, v10);
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

  if ( (byte_48E6B90 & 1) == 0 )
  {
    sub_1B00CCC(&OptionManager_TypeInfo, method);
    byte_48E6B90 = 1;
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
        sub_1B00F30(SpoilerSetting, v4);
      }
LABEL_14:
      v9 = this->fields.selectFriendEntity;
      if ( !v9 || (eventUserSvtLeaderHash = v9->fields.eventUserSvtLeaderHash) == 0LL )
LABEL_23:
        sub_1B00F28(SpoilerSetting, v4);
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

  if ( (byte_48E6B62 & 1) == 0 )
  {
    sub_1B00CCC(&LocalizationManager_TypeInfo, method);
    sub_1B00CCC(&StringLiteral_6437/*"FRIEND_LOCK_HELP_TEXT"*/, v3);
    sub_1B00CCC(&StringLiteral_6435/*"FRIEND_HELP_TEXT"*/, v4);
    byte_48E6B62 = 1;
  }
  v5 = (System_String_o **)&StringLiteral_6435/*"FRIEND_HELP_TEXT"*/;
  if ( this->fields.isActiveModeKindButtons && this->fields.currentModeKind == 1 )
    v5 = (System_String_o **)&StringLiteral_6437/*"FRIEND_LOCK_HELP_TEXT"*/;
  v6 = *v5;
  helpLabel = this->fields.helpLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__Get(v6, 0LL);
  if ( !helpLabel )
    sub_1B00F28(v8, v9);
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

  if ( (byte_48E6B97 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMasterData_TblFriendMaster___, method);
    sub_1B00CCC(&Method_DataManager_GetMasterData_UserFollowMaster___, v3);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_1B00CCC(&StringLiteral_17408/*"button_alllock_unreg"*/, v5);
    sub_1B00CCC(&StringLiteral_17414/*"button_infocheck_unreg"*/, v6);
    sub_1B00CCC(&StringLiteral_17413/*"button_infocheck_reg"*/, v7);
    sub_1B00CCC(&StringLiteral_17407/*"button_alllock_reg"*/, v8);
    byte_48E6B97 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_TblFriendMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_UserFollowMaster___);
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
    sub_1B00F28(Instance, v10);
  }
LABEL_21:
  Instance = (DataManager_o *)this->fields.modeUserDetailSprite;
  if ( !Instance )
    goto LABEL_31;
  currentModeKind = this->fields.currentModeKind;
  v20 = StringLiteral_17407/*"button_alllock_reg"*/;
  v21 = StringLiteral_17408/*"button_alllock_unreg"*/;
  v22 = (System_String_o **)(currentModeKind ? &StringLiteral_17414/*"button_infocheck_unreg"*/ : &StringLiteral_17413/*"button_infocheck_reg"*/);
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
  FriendRootComponent_c *v5; // x0
  int32_t tabKindSave; // w8
  PlayMakerFSM_o *myFSM; // x0
  __int64 *v8; // x8

  if ( (byte_48E6B66 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_8518/*"MENU_OPERATION_FRIEND"*/, method);
    sub_1B00CCC(&StringLiteral_8520/*"MENU_OPERATION_OFFERED"*/, v3);
    sub_1B00CCC(&StringLiteral_8521/*"MENU_OPERATION_SEARCH"*/, v4);
    byte_48E6B66 = 1;
  }
  if ( !byte_48E6BF6 )
  {
    sub_1B00CCC(&FriendRootComponent_TypeInfo, method);
    byte_48E6BF6 = 1;
  }
  v5 = FriendRootComponent_TypeInfo;
  if ( !FriendRootComponent_TypeInfo->_2.cctor_finished )
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
        v8 = &StringLiteral_8521/*"MENU_OPERATION_SEARCH"*/;
        goto LABEL_16;
      }
LABEL_18:
      sub_1B00F28(myFSM, method);
    case 1:
      myFSM = this->fields.myFSM;
      if ( myFSM )
      {
        v8 = &StringLiteral_8520/*"MENU_OPERATION_OFFERED"*/;
        goto LABEL_16;
      }
      goto LABEL_18;
    case 0:
      myFSM = this->fields.myFSM;
      if ( myFSM )
      {
        v8 = &StringLiteral_8518/*"MENU_OPERATION_FRIEND"*/;
LABEL_16:
        PlayMakerFSM__SendEvent(myFSM, (System_String_o *)*v8, 0LL);
        return 1;
      }
      goto LABEL_18;
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
  int32_t v9; // w2
  int32_t v10; // w3
  const MethodInfo *v11; // x2

  if ( (byte_48E6B77 & 1) == 0 )
  {
    sub_1B00CCC(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_1B00CCC(&Method_FriendRootComponent_OnSelectFriendItem__, v3);
    byte_48E6B77 = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v5 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1B00F18(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
    v6);
  if ( !operationItemListViewManager )
    sub_1B00F28(v7, v8);
  operationItemListViewManager->fields.callbackFunc = v5;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&operationItemListViewManager->fields.callbackFunc,
    (int32_t)v5,
    v9,
    v10);
  FriendOperationItemListViewManager__SetMode_45050616(operationItemListViewManager, 2, v11);
}


void __fastcall FriendRootComponent__EndCloseShowServantEquip(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v5; // x21
  const MethodInfo *v6; // x3
  __int64 v7; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  const MethodInfo *v11; // x2

  if ( (byte_48E6BA1 & 1) == 0 )
  {
    sub_1B00CCC(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_1B00CCC(&Method_FriendRootComponent_OnSelectFriendItem__, v3);
    byte_48E6BA1 = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v5 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1B00F18(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
    v6);
  if ( !operationItemListViewManager )
    sub_1B00F28(v7, v8);
  operationItemListViewManager->fields.callbackFunc = v5;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&operationItemListViewManager->fields.callbackFunc,
    (int32_t)v5,
    v9,
    v10);
  FriendOperationItemListViewManager__SetMode_45050616(operationItemListViewManager, 2, v11);
}


void __fastcall FriendRootComponent__EndFriendRequest(
        FriendRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v4; // x1
  FriendRootComponent_c *v5; // x0
  OtherUserGameEntity_array *Instance; // x0
  __int64 v7; // x1
  TblFriendMaster_o *v8; // x20
  const MethodInfo *v9; // x2
  int32_t v10; // w1
  OtherUserGameEntity_array *List; // x21
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x1

  if ( (byte_48E6B63 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMasterData_TblFriendMaster___, result);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_48E6B63 = 1;
  }
  if ( !byte_48E6BF6 )
  {
    sub_1B00CCC(&FriendRootComponent_TypeInfo, result);
    byte_48E6BF6 = 1;
  }
  v5 = FriendRootComponent_TypeInfo;
  if ( !FriendRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendRootComponent_TypeInfo);
    v5 = FriendRootComponent_TypeInfo;
  }
  if ( v5->static_fields->tabKindSave == 3 )
  {
    Instance = (OtherUserGameEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (OtherUserGameEntity_array *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)Instance,
                                                (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_TblFriendMaster___);
      if ( Instance )
      {
        v8 = (TblFriendMaster_o *)Instance;
        Instance = TblFriendMaster__GetList((TblFriendMaster_o *)Instance, 2, 0LL);
        if ( Instance )
        {
          if ( *(_QWORD *)&Instance->max_length )
          {
            v10 = 1;
LABEL_18:
            FriendRootComponent__set_tabKind((FriendRootComponent_o *)Instance, v10, v9);
            EventTutorialMaster__CheckTutorial(-1, 49, 0LL, 0, 0, 0, 0, 0LL);
            goto LABEL_19;
          }
          List = TblFriendMaster__GetList(v8, 3, 0LL);
          Instance = TblFriendMaster__GetList(v8, 9, 0LL);
          if ( List )
          {
            if ( *(_QWORD *)&List->max_length )
            {
LABEL_17:
              v10 = 0;
              goto LABEL_18;
            }
            if ( Instance )
            {
              if ( !*(_QWORD *)&Instance->max_length )
              {
                FriendRootComponent__set_tabKind((FriendRootComponent_o *)Instance, 2, v9);
                goto LABEL_19;
              }
              goto LABEL_17;
            }
          }
        }
      }
    }
    sub_1B00F28(Instance, v7);
  }
LABEL_19:
  FriendRootComponent__InitModeKindButtons(this, (const MethodInfo *)result);
  FriendRootComponent__RefreshTab(this, v12);
  FriendRootComponent__RefreshInfo(this, v13);
  MainMenuBar__setMenuActive(1, 0LL, 0LL);
  SceneRootComponent__beginStartUp_37369760((SceneRootComponent_o *)this, 0LL);
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
  int32_t v12; // w2
  int32_t v13; // w3
  const MethodInfo *v14; // x2

  if ( (byte_48E6BB7 & 1) == 0 )
  {
    sub_1B00CCC(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, result);
    sub_1B00CCC(&Method_FriendRootComponent_OnSelectFriendItem__, v4);
    byte_48E6BB7 = 1;
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
        v10 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1B00F18(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
        FriendOperationItemListViewManager_CallbackFunc___ctor(
          v10,
          (Il2CppObject *)this,
          (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
          v11),
        !v9) )
  {
    sub_1B00F28(operationItemListViewManager, v6);
  }
  v9->fields.callbackFunc = v10;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v9->fields.callbackFunc, (int32_t)v10, v12, v13);
  FriendOperationItemListViewManager__SetMode_45050616(v9, 2, v14);
  this->fields.state = 4;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendRootComponent__EndMaxFollowWarningOfferConfirm(
        FriendRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_48E6BAF & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_8515/*"MENU_CANCEL"*/, isDecide);
    byte_48E6BAF = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1B00F28(0LL, isDecide);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_8515/*"MENU_CANCEL"*/, 0LL);
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
  int32_t v9; // w2
  int32_t v10; // w3
  const MethodInfo *v11; // x2

  if ( (byte_48E6BA3 & 1) == 0 )
  {
    sub_1B00CCC(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, isDecide);
    sub_1B00CCC(&Method_FriendRootComponent_OnSelectFriendItem__, v4);
    byte_48E6BA3 = 1;
  }
  friendWarningDialog = this->fields.friendWarningDialog;
  if ( !friendWarningDialog
    || (FriendWarningDialog__Close_45109904(friendWarningDialog, 0LL, method),
        operationItemListViewManager = this->fields.operationItemListViewManager,
        v7 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1B00F18(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
        FriendOperationItemListViewManager_CallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
          v8),
        !operationItemListViewManager) )
  {
    sub_1B00F28(friendWarningDialog, isDecide);
  }
  operationItemListViewManager->fields.callbackFunc = v7;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&operationItemListViewManager->fields.callbackFunc,
    (int32_t)v7,
    v9,
    v10);
  FriendOperationItemListViewManager__SetMode_45050616(operationItemListViewManager, 2, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendRootComponent__EndMaxFriendWarningOfferConfirm(
        FriendRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_48E6BA4 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_8515/*"MENU_CANCEL"*/, isDecide);
    byte_48E6BA4 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1B00F28(0LL, isDecide);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_8515/*"MENU_CANCEL"*/, 0LL);
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

  if ( (byte_48E6B91 & 1) == 0 )
  {
    sub_1B00CCC(&FriendSearchMenu_CallbackFunc_TypeInfo, isDecide);
    sub_1B00CCC(&Method_FriendRootComponent_OnSelectSearchFriend__, v4);
    sub_1B00CCC(&StringLiteral_10883/*"REQUEST_NG"*/, v5);
    byte_48E6B91 = 1;
  }
  friendWarningDialog = this->fields.friendWarningDialog;
  if ( !friendWarningDialog
    || (FriendWarningDialog__Close_45109904(friendWarningDialog, 0LL, method),
        this->fields.state = 23,
        friendSearchMenu = this->fields.friendSearchMenu,
        v8 = (FriendSearchMenu_CallbackFunc_o *)sub_1B00F18(FriendSearchMenu_CallbackFunc_TypeInfo),
        FriendSearchMenu_CallbackFunc___ctor(
          v8,
          (Il2CppObject *)this,
          Method_FriendRootComponent_OnSelectSearchFriend__,
          v9),
        !friendSearchMenu)
    || (FriendSearchMenu__Open(friendSearchMenu, v8, 0, v10),
        (friendWarningDialog = (FriendWarningDialog_o *)this->fields.myFSM) == 0LL) )
  {
    sub_1B00F28(friendWarningDialog, isDecide);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)friendWarningDialog, (System_String_o *)StringLiteral_10883/*"REQUEST_NG"*/, 0LL);
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

  if ( (byte_48E6BB2 & 1) == 0 )
  {
    sub_1B00CCC(&NotificationDialog_ClickDelegate_TypeInfo, result);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v6);
    sub_1B00CCC(&Method_FriendRootComponent_OnEndRequestDialog__, v7);
    sub_1B00CCC(&JsonManager_TypeInfo, v8);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_1B00CCC(&StringLiteral_10885/*"REQUEST_OK"*/, v10);
    sub_1B00CCC(&StringLiteral_10883/*"REQUEST_NG"*/, v11);
    sub_1B00CCC(&StringLiteral_21754/*"ng"*/, v12);
    sub_1B00CCC(&StringLiteral_21112/*"message"*/, v13);
    byte_48E6BB2 = 1;
  }
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_21754/*"ng"*/, 0LL) )
  {
    myFSM = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.myFSM;
    if ( myFSM )
    {
      v18 = &StringLiteral_10883/*"REQUEST_NG"*/;
      goto LABEL_14;
    }
LABEL_17:
    sub_1B00F28(myFSM, v14);
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  myFSM = (System_Collections_Generic_Dictionary_object__object__o *)JsonManager__getDictionary(result, 0LL);
  if ( !myFSM )
    goto LABEL_17;
  v16 = myFSM;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          myFSM,
          (Il2CppObject *)StringLiteral_21112/*"message"*/,
          (const MethodInfo_308DC3C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_10;
  myFSM = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                       v16,
                                                                       (Il2CppObject *)StringLiteral_21112/*"message"*/,
                                                                       (const MethodInfo_308D9C8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
      v18 = &StringLiteral_10885/*"REQUEST_OK"*/;
LABEL_14:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myFSM, (System_String_o *)*v18, 0LL);
      return;
    }
    goto LABEL_17;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v20 = (NotificationDialog_ClickDelegate_o *)sub_1B00F18(NotificationDialog_ClickDelegate_TypeInfo);
  NotificationDialog_ClickDelegate___ctor(
    v20,
    (Il2CppObject *)this,
    Method_FriendRootComponent_OnEndRequestDialog__,
    0LL);
  if ( !Instance )
    goto LABEL_17;
  CommonUI__OpenNotificationDialog_29939268(
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

  if ( (byte_48E6BBB & 1) == 0 )
  {
    sub_1B00CCC(&NotificationDialog_ClickDelegate_TypeInfo, result);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v6);
    sub_1B00CCC(&Method_FriendRootComponent_OnEndRequestDialog__, v7);
    sub_1B00CCC(&JsonManager_TypeInfo, v8);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_1B00CCC(&StringLiteral_10885/*"REQUEST_OK"*/, v10);
    sub_1B00CCC(&StringLiteral_10883/*"REQUEST_NG"*/, v11);
    sub_1B00CCC(&StringLiteral_21754/*"ng"*/, v12);
    sub_1B00CCC(&StringLiteral_21112/*"message"*/, v13);
    byte_48E6BBB = 1;
  }
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_21754/*"ng"*/, 0LL) )
  {
    myFSM = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.myFSM;
    if ( myFSM )
    {
      v18 = &StringLiteral_10883/*"REQUEST_NG"*/;
      goto LABEL_14;
    }
LABEL_17:
    sub_1B00F28(myFSM, v14);
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  myFSM = (System_Collections_Generic_Dictionary_object__object__o *)JsonManager__getDictionary(result, 0LL);
  if ( !myFSM )
    goto LABEL_17;
  v16 = myFSM;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          myFSM,
          (Il2CppObject *)StringLiteral_21112/*"message"*/,
          (const MethodInfo_308DC3C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_10;
  myFSM = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                       v16,
                                                                       (Il2CppObject *)StringLiteral_21112/*"message"*/,
                                                                       (const MethodInfo_308D9C8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
      v18 = &StringLiteral_10885/*"REQUEST_OK"*/;
LABEL_14:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myFSM, (System_String_o *)*v18, 0LL);
      return;
    }
    goto LABEL_17;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v20 = (NotificationDialog_ClickDelegate_o *)sub_1B00F18(NotificationDialog_ClickDelegate_TypeInfo);
  NotificationDialog_ClickDelegate___ctor(
    v20,
    (Il2CppObject *)this,
    Method_FriendRootComponent_OnEndRequestDialog__,
    0LL);
  if ( !Instance )
    goto LABEL_17;
  CommonUI__OpenNotificationDialog_29939268(
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

  if ( (byte_48E6B8C & 1) == 0 )
  {
    sub_1B00CCC(&NotificationDialog_ClickDelegate_TypeInfo, result);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v6);
    sub_1B00CCC(&Method_FriendRootComponent_OnEndRequestDialog__, v7);
    sub_1B00CCC(&JsonManager_TypeInfo, v8);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_1B00CCC(&StringLiteral_10885/*"REQUEST_OK"*/, v10);
    sub_1B00CCC(&StringLiteral_10883/*"REQUEST_NG"*/, v11);
    sub_1B00CCC(&StringLiteral_21754/*"ng"*/, v12);
    sub_1B00CCC(&StringLiteral_21112/*"message"*/, v13);
    byte_48E6B8C = 1;
  }
  MainMenuBar__UpdateNoticeNumber(0LL);
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_21754/*"ng"*/, 0LL) )
  {
    myFSM = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.myFSM;
    if ( myFSM )
    {
      v18 = &StringLiteral_10883/*"REQUEST_NG"*/;
      goto LABEL_14;
    }
LABEL_17:
    sub_1B00F28(myFSM, v14);
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  myFSM = (System_Collections_Generic_Dictionary_object__object__o *)JsonManager__getDictionary(result, 0LL);
  if ( !myFSM )
    goto LABEL_17;
  v16 = myFSM;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          myFSM,
          (Il2CppObject *)StringLiteral_21112/*"message"*/,
          (const MethodInfo_308DC3C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_10;
  myFSM = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                       v16,
                                                                       (Il2CppObject *)StringLiteral_21112/*"message"*/,
                                                                       (const MethodInfo_308D9C8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
      v18 = &StringLiteral_10885/*"REQUEST_OK"*/;
LABEL_14:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myFSM, (System_String_o *)*v18, 0LL);
      return;
    }
    goto LABEL_17;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v20 = (NotificationDialog_ClickDelegate_o *)sub_1B00F18(NotificationDialog_ClickDelegate_TypeInfo);
  NotificationDialog_ClickDelegate___ctor(
    v20,
    (Il2CppObject *)this,
    Method_FriendRootComponent_OnEndRequestDialog__,
    0LL);
  if ( !Instance )
    goto LABEL_17;
  CommonUI__OpenNotificationDialog_29939268(
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
  int32_t v9; // w2
  int32_t v10; // w3
  void *Instance; // x0
  __int64 v12; // x1
  __int64 v13; // x8
  struct OtherUserGameEntity_o *v14; // x1
  const MethodInfo *v15; // x1
  __int64 *v16; // x8
  const MethodInfo *v17; // x1

  if ( (byte_48E6B8F & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMasterData_OtherUserGameMaster___, result);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_1B00CCC(&StringLiteral_10885/*"REQUEST_OK"*/, v6);
    sub_1B00CCC(&StringLiteral_21923/*"ok"*/, v7);
    sub_1B00CCC(&StringLiteral_10883/*"REQUEST_NG"*/, v8);
    byte_48E6B8F = 1;
  }
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_21923/*"ok"*/, 0LL) )
    goto LABEL_11;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_OtherUserGameMaster___);
  if ( !Instance )
    goto LABEL_14;
  Instance = OtherUserGameMaster__GetFriendCodeList(
               (OtherUserGameMaster_o *)Instance,
               this->fields.selectFriendCode,
               0LL);
  if ( !Instance )
    goto LABEL_14;
  v13 = *((_QWORD *)Instance + 3);
  if ( !v13 )
  {
LABEL_11:
    this->fields.selectFriendEntity = 0LL;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.selectFriendEntity, 0, v9, v10);
    FriendRootComponent__StartSearchInput(this, v17);
    Instance = this->fields.myFSM;
    if ( Instance )
    {
      v16 = &StringLiteral_10883/*"REQUEST_NG"*/;
      goto LABEL_13;
    }
LABEL_14:
    sub_1B00F28(Instance, v12);
  }
  if ( !(_DWORD)v13 )
    sub_1B00F30(Instance, v12);
  v14 = (struct OtherUserGameEntity_o *)*((_QWORD *)Instance + 4);
  this->fields.selectFriendEntity = v14;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.selectFriendEntity, (int32_t)v14, v9, v10);
  FriendRootComponent__ChangeLimitCountBySpoilerProtection(this, v15);
  Instance = this->fields.myFSM;
  if ( !Instance )
    goto LABEL_14;
  v16 = &StringLiteral_10885/*"REQUEST_OK"*/;
LABEL_13:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v16, 0LL);
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
  int32_t v13; // w2
  int32_t v14; // w3
  const MethodInfo *v15; // x2
  Il2CppObject *Instance; // x20
  System_Action_o *v17; // x21

  if ( (byte_48E6B76 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, isDecide);
    sub_1B00CCC(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, v4);
    sub_1B00CCC(&Method_FriendRootComponent_EndCloseShowServant__, v5);
    sub_1B00CCC(&Method_FriendRootComponent_OnSelectFriendItem__, v6);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_48E6B76 = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v9 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1B00F18(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v9,
    (Il2CppObject *)this,
    (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
    v10);
  if ( !operationItemListViewManager
    || (operationItemListViewManager->fields.callbackFunc = v9,
        sub_1B00C70(
          (ServantStatusBattleListViewItem_o *)&operationItemListViewManager->fields.callbackFunc,
          (int32_t)v9,
          v13,
          v14),
        FriendOperationItemListViewManager__SetMode_45050616(operationItemListViewManager, 5, v15),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v17 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo),
        System_Action___ctor(v17, (Il2CppObject *)this, Method_FriendRootComponent_EndCloseShowServant__, 0LL),
        !Instance) )
  {
    sub_1B00F28(v11, v12);
  }
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v17, 0LL);
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

  if ( (byte_48E6BA0 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, isDecide);
    sub_1B00CCC(&Method_FriendRootComponent_EndCloseShowServantEquip__, v4);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_48E6BA0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_FriendRootComponent_EndCloseShowServantEquip__, 0LL);
  if ( !Instance )
    sub_1B00F28(v8, v9);
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
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v20; // w2
  int32_t v21; // w3
  System_Collections_Generic_List_long__o *v22; // x21
  System_Collections_Generic_List_long__o *v23; // x22
  System_Collections_Generic_List_long__o *v24; // x23
  System_Collections_Generic_List_long__o *v25; // x24
  int32_t ItemSum; // w0
  const MethodInfo *v27; // x2
  int32_t v28; // w25
  float x; // w8
  ListViewManager_o *v30; // x26
  struct UnityEngine_GameObject_o *dragParentObject; // x8
  struct System_Int64_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x8
  struct UnityEngine_GameObject_o *v36; // x8
  struct System_Int64_array *v37; // x8
  _QWORD *v38; // x9
  __int64 v39; // x10
  struct System_Int64_array *v40; // x8
  _QWORD *v41; // x9
  __int64 v42; // x10
  struct System_Int64_array *v43; // x8
  _QWORD *v44; // x9
  __int64 v45; // x10
  __int64 v46; // x8
  System_Collections_Generic_List_long__o *v47; // x0
  NetworkManager_ResultCallbackFunc_o *v48; // x19
  FirendLockSyncRequest_o *v49; // x19
  System_Int64_array *v50; // x20
  System_Int64_array *v51; // x21
  System_Int64_array *v52; // x22

  if ( (byte_48E6B9D & 1) == 0 )
  {
    sub_1B00CCC(&Method_ActionExtensions_Call_string___, onFinishedRequest);
    sub_1B00CCC(&Method_System_Collections_Generic_List_long__Add__, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_long__ToArray__, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_long___ctor__, v7);
    sub_1B00CCC(&System_Collections_Generic_List_long__TypeInfo, v8);
    sub_1B00CCC(&Method_NetworkManager_getRequest_FirendLockSyncRequest___, v9);
    sub_1B00CCC(&NetworkManager_TypeInfo, v10);
    sub_1B00CCC(&NetworkManager_ResultCallbackFunc_TypeInfo, v11);
    sub_1B00CCC(&Method_FriendRootComponent___c__DisplayClass109_0__FriendLockRequst_b__0__, v12);
    sub_1B00CCC(&FriendRootComponent___c__DisplayClass109_0_TypeInfo, v13);
    sub_1B00CCC(&StringLiteral_21923/*"ok"*/, v14);
    byte_48E6B9D = 1;
  }
  v15 = sub_1B00F18(FriendRootComponent___c__DisplayClass109_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15 )
    goto LABEL_49;
  *(_QWORD *)(v15 + 16) = this;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v15 + 16), (int32_t)this, v18, v19);
  *(_QWORD *)(v15 + 32) = onFinishedRequest;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v15 + 32), (int32_t)onFinishedRequest, v20, v21);
  operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    goto LABEL_49;
  if ( FriendOperationItemListViewManager__get_IsExistSwapLockUser(
         (FriendOperationItemListViewManager_o *)operationItemListViewManager,
         v17) )
  {
    v22 = (System_Collections_Generic_List_long__o *)sub_1B00F18(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v22,
      (const MethodInfo_33A91B0 *)Method_System_Collections_Generic_List_long___ctor__);
    v23 = (System_Collections_Generic_List_long__o *)sub_1B00F18(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v23,
      (const MethodInfo_33A91B0 *)Method_System_Collections_Generic_List_long___ctor__);
    v24 = (System_Collections_Generic_List_long__o *)sub_1B00F18(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v24,
      (const MethodInfo_33A91B0 *)Method_System_Collections_Generic_List_long___ctor__);
    v25 = (System_Collections_Generic_List_long__o *)sub_1B00F18(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v25,
      (const MethodInfo_33A91B0 *)Method_System_Collections_Generic_List_long___ctor__);
    operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
    if ( operationItemListViewManager )
    {
      ItemSum = ListViewManager__get_ItemSum(operationItemListViewManager, 0LL);
      *(_DWORD *)(v15 + 24) = ItemSum;
      if ( ItemSum >= 1 )
      {
        v28 = 0;
        while ( 1 )
        {
          operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
          if ( !operationItemListViewManager )
            goto LABEL_49;
          operationItemListViewManager = (ListViewManager_o *)FriendOperationItemListViewManager__GetItem(
                                                                (FriendOperationItemListViewManager_o *)operationItemListViewManager,
                                                                v28,
                                                                v27);
          if ( !operationItemListViewManager )
            goto LABEL_49;
          x = operationItemListViewManager->fields.clipRange.fields.x;
          v30 = operationItemListViewManager;
          if ( LODWORD(x) == 9 )
            break;
          if ( LODWORD(x) == 3 )
          {
            operationItemListViewManager = (ListViewManager_o *)FriendOperationItemListViewItem__get_IsLockDisp(
                                                                  (FriendOperationItemListViewItem_o *)operationItemListViewManager,
                                                                  0LL);
            dragParentObject = v30->fields.dragParentObject;
            if ( !dragParentObject )
              goto LABEL_49;
            v17 = *(const MethodInfo **)&dragParentObject->fields.m_CachedPtr;
            if ( ((unsigned __int8)operationItemListViewManager & 1) != 0 )
            {
              if ( !v22 )
                goto LABEL_49;
              items = v22->fields._items;
              v33 = Method_System_Collections_Generic_List_long__Add__;
              ++v22->fields._version;
              if ( !items )
                goto LABEL_49;
              size = v22->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                v46 = v33[4];
                v47 = v22;
LABEL_38:
                System_Collections_Generic_List_long___AddWithResize(
                  v47,
                  (int64_t)v17,
                  *(const MethodInfo_33A9A04 **)(*(_QWORD *)(v46 + 192) + 112LL));
                goto LABEL_39;
              }
              v35 = &items->obj.klass + size;
              v22->fields._size = size + 1;
            }
            else
            {
              if ( !v23 )
                goto LABEL_49;
              v40 = v23->fields._items;
              v41 = Method_System_Collections_Generic_List_long__Add__;
              ++v23->fields._version;
              if ( !v40 )
                goto LABEL_49;
              v42 = v23->fields._size;
              if ( (unsigned int)v42 >= v40->max_length )
              {
                v46 = v41[4];
                v47 = v23;
                goto LABEL_38;
              }
              v35 = &v40->obj.klass + v42;
              v23->fields._size = v42 + 1;
            }
LABEL_33:
            v35[4] = (Il2CppClass *)v17;
          }
LABEL_39:
          if ( ++v28 >= *(_DWORD *)(v15 + 24) )
            goto LABEL_40;
        }
        operationItemListViewManager = (ListViewManager_o *)FriendOperationItemListViewItem__get_IsLockDisp(
                                                              (FriendOperationItemListViewItem_o *)operationItemListViewManager,
                                                              0LL);
        v36 = v30->fields.dragParentObject;
        if ( !v36 )
          goto LABEL_49;
        v17 = *(const MethodInfo **)&v36->fields.m_CachedPtr;
        if ( ((unsigned __int8)operationItemListViewManager & 1) != 0 )
        {
          if ( !v24 )
            goto LABEL_49;
          v37 = v24->fields._items;
          v38 = Method_System_Collections_Generic_List_long__Add__;
          ++v24->fields._version;
          if ( !v37 )
            goto LABEL_49;
          v39 = v24->fields._size;
          if ( (unsigned int)v39 >= v37->max_length )
          {
            v46 = v38[4];
            v47 = v24;
            goto LABEL_38;
          }
          v35 = &v37->obj.klass + v39;
          v24->fields._size = v39 + 1;
        }
        else
        {
          if ( !v25 )
            goto LABEL_49;
          v43 = v25->fields._items;
          v44 = Method_System_Collections_Generic_List_long__Add__;
          ++v25->fields._version;
          if ( !v43 )
            goto LABEL_49;
          v45 = v25->fields._size;
          if ( (unsigned int)v45 >= v43->max_length )
          {
            v46 = v44[4];
            v47 = v25;
            goto LABEL_38;
          }
          v35 = &v43->obj.klass + v45;
          v25->fields._size = v45 + 1;
        }
        goto LABEL_33;
      }
LABEL_40:
      v48 = (NetworkManager_ResultCallbackFunc_o *)sub_1B00F18(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v48,
        (Il2CppObject *)v15,
        Method_FriendRootComponent___c__DisplayClass109_0__FriendLockRequst_b__0__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      operationItemListViewManager = (ListViewManager_o *)NetworkManager__getRequest_object_(
                                                            v48,
                                                            (const MethodInfo_2DD4818 *)Method_NetworkManager_getRequest_FirendLockSyncRequest___);
      if ( v22 )
      {
        v49 = (FirendLockSyncRequest_o *)operationItemListViewManager;
        operationItemListViewManager = (ListViewManager_o *)System_Collections_Generic_List_long___ToArray(
                                                              v22,
                                                              (const MethodInfo_33AB4BC *)Method_System_Collections_Generic_List_long__ToArray__);
        if ( v23 )
        {
          v50 = (System_Int64_array *)operationItemListViewManager;
          operationItemListViewManager = (ListViewManager_o *)System_Collections_Generic_List_long___ToArray(
                                                                v23,
                                                                (const MethodInfo_33AB4BC *)Method_System_Collections_Generic_List_long__ToArray__);
          if ( v24 )
          {
            v51 = (System_Int64_array *)operationItemListViewManager;
            operationItemListViewManager = (ListViewManager_o *)System_Collections_Generic_List_long___ToArray(
                                                                  v24,
                                                                  (const MethodInfo_33AB4BC *)Method_System_Collections_Generic_List_long__ToArray__);
            if ( v25 )
            {
              v52 = (System_Int64_array *)operationItemListViewManager;
              operationItemListViewManager = (ListViewManager_o *)System_Collections_Generic_List_long___ToArray(
                                                                    v25,
                                                                    (const MethodInfo_33AB4BC *)Method_System_Collections_Generic_List_long__ToArray__);
              if ( v49 )
              {
                FirendLockSyncRequest__beginRequest(
                  v49,
                  v50,
                  v51,
                  v52,
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
    sub_1B00F28(operationItemListViewManager, v17);
  }
  ActionExtensions__Call_object_(
    *(System_Action_T__o **)(v15 + 32),
    (Il2CppObject *)StringLiteral_21923/*"ok"*/,
    (const MethodInfo_2CBB45C *)Method_ActionExtensions_Call_string___);
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
  if ( (byte_48E6B98 & 1) == 0 )
  {
    this = (FriendRootComponent_o *)sub_1B00CCC(&FSUtility_TypeInfo, method);
    byte_48E6B98 = 1;
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
    sub_1B00F28(this, method);
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
    sub_1B00F28(modeButtonParent, method);
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
    goto LABEL_10;
  transform = UnityEngine_GameObject__get_transform(modeButtonParent, 0LL);
  if ( !byte_48E6BF6 )
  {
    sub_1B00CCC(&FriendRootComponent_TypeInfo, v4);
    byte_48E6BF6 = 1;
  }
  v6 = FriendRootComponent_TypeInfo;
  if ( !FriendRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendRootComponent_TypeInfo);
    v6 = FriendRootComponent_TypeInfo;
  }
  if ( !v6->static_fields->tabKindSave )
  {
    *(UnityEngine_Vector3_o *)&v7 = FriendRootComponent__GetDisplayPositionModeKindButtons(this, v4);
    if ( transform )
      goto LABEL_8;
LABEL_10:
    sub_1B00F28(modeButtonParent, method);
  }
  *(UnityEngine_Vector3_o *)&v7 = FriendRootComponent__GetHidePositionModeKindButtons(this, v4);
  if ( !transform )
    goto LABEL_10;
LABEL_8:
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

  if ( (byte_48E6B93 & 1) == 0 )
  {
    sub_1B00CCC(&Method_FriendRootComponent_OnClickBack__, method);
    sub_1B00CCC(&Method_FriendRootComponent__OnClickBack_b__96_0__, v3);
    sub_1B00CCC(&FriendRootComponent_messageRequestCallback_TypeInfo, v4);
    byte_48E6B93 = 1;
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
    v6 = (_QWORD *)sub_1B00CE4(Method_FriendRootComponent_OnClickBack__);
  v7 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 1, 0LL);
  v8 = (FriendRootComponent_messageRequestCallback_o *)sub_1B00F18(FriendRootComponent_messageRequestCallback_TypeInfo);
  FriendRootComponent_messageRequestCallback___ctor(
    v8,
    (Il2CppObject *)this,
    Method_FriendRootComponent__OnClickBack_b__96_0__,
    v9);
  FriendRootComponent__messageDispChangeRequest(this, v8, v10);
}


void __fastcall FriendRootComponent__OnClickHelp(FriendRootComponent_o *this, const MethodInfo *method)
{
  _QWORD *v2; // x0
  System_Reflection_MethodBase_o *v3; // x0

  if ( (byte_48E6BBC & 1) == 0 )
  {
    sub_1B00CCC(&Method_FriendRootComponent_OnClickHelp__, method);
    byte_48E6BBC = 1;
  }
  v2 = Method_FriendRootComponent_OnClickHelp__;
  if ( (*((_BYTE *)Method_FriendRootComponent_OnClickHelp__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_1B00CE4(Method_FriendRootComponent_OnClickHelp__);
  v3 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 0, 0LL);
  EventTutorialMaster__ShowTutorialWithoutCheck(-1, 49, 0LL, 0LL);
}


void __fastcall FriendRootComponent__OnClickModeEditLock(FriendRootComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_48E6B96 & 1) == 0 )
  {
    sub_1B00CCC(&Method_FriendRootComponent_OnClickModeEditLock__, method);
    byte_48E6B96 = 1;
  }
  if ( this->fields.currentModeKind != 1 )
  {
    v3 = Method_FriendRootComponent_OnClickModeEditLock__;
    if ( (*((_BYTE *)Method_FriendRootComponent_OnClickModeEditLock__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B00CE4(Method_FriendRootComponent_OnClickModeEditLock__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    this->fields.currentModeKind = 1;
    FriendRootComponent__RefreshInfo(this, v5);
  }
}


void __fastcall FriendRootComponent__OnClickModeUserDetail(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_object__o *v4; // x20
  const MethodInfo *v5; // x2

  if ( (byte_48E6B95 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_string__TypeInfo, method);
    sub_1B00CCC(&Method_FriendRootComponent__OnClickModeUserDetail_b__98_0__, v3);
    byte_48E6B95 = 1;
  }
  if ( this->fields.currentModeKind )
  {
    v4 = (System_Action_object__o *)sub_1B00F18(System_Action_string__TypeInfo);
    System_Action_object____ctor(
      v4,
      (Il2CppObject *)this,
      (intptr_t)Method_FriendRootComponent__OnClickModeUserDetail_b__98_0__,
      0LL);
    FriendRootComponent__FriendLockRequst(this, (System_Action_string__o *)v4, v5);
  }
}


void __fastcall FriendRootComponent__OnClickTabFriend(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_object__o *v4; // x20
  const MethodInfo *v5; // x2

  if ( (byte_48E6B99 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_string__TypeInfo, method);
    sub_1B00CCC(&Method_FriendRootComponent__OnClickTabFriend_b__105_0__, v3);
    byte_48E6B99 = 1;
  }
  v4 = (System_Action_object__o *)sub_1B00F18(System_Action_string__TypeInfo);
  System_Action_object____ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_FriendRootComponent__OnClickTabFriend_b__105_0__,
    0LL);
  FriendRootComponent__FriendLockRequst(this, (System_Action_string__o *)v4, v5);
}


void __fastcall FriendRootComponent__OnClickTabOffered(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  FriendRootComponent_messageRequestCallback_o *v4; // x20
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x2

  if ( (byte_48E6B9A & 1) == 0 )
  {
    sub_1B00CCC(&Method_FriendRootComponent__OnClickTabOffered_b__106_0__, method);
    sub_1B00CCC(&FriendRootComponent_messageRequestCallback_TypeInfo, v3);
    byte_48E6B9A = 1;
  }
  v4 = (FriendRootComponent_messageRequestCallback_o *)sub_1B00F18(FriendRootComponent_messageRequestCallback_TypeInfo);
  FriendRootComponent_messageRequestCallback___ctor(
    v4,
    (Il2CppObject *)this,
    Method_FriendRootComponent__OnClickTabOffered_b__106_0__,
    v5);
  FriendRootComponent__messageDispChangeRequest(this, v4, v6);
}


void __fastcall FriendRootComponent__OnClickTabSearch(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  FriendRootComponent_messageRequestCallback_o *v4; // x20
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x2

  if ( (byte_48E6B9B & 1) == 0 )
  {
    sub_1B00CCC(&Method_FriendRootComponent__OnClickTabSearch_b__107_0__, method);
    sub_1B00CCC(&FriendRootComponent_messageRequestCallback_TypeInfo, v3);
    byte_48E6B9B = 1;
  }
  v4 = (FriendRootComponent_messageRequestCallback_o *)sub_1B00F18(FriendRootComponent_messageRequestCallback_TypeInfo);
  FriendRootComponent_messageRequestCallback___ctor(
    v4,
    (Il2CppObject *)this,
    Method_FriendRootComponent__OnClickTabSearch_b__107_0__,
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

  if ( (byte_48E6B8D & 1) == 0 )
  {
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    sub_1B00CCC(&StringLiteral_10885/*"REQUEST_OK"*/, v4);
    byte_48E6B8D = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.myFSM) == 0LL) )
  {
    sub_1B00F28(Instance, v6);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_10885/*"REQUEST_OK"*/, 0LL);
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
  int32_t v9; // w1
  struct FriendOperationItemListViewManager_o *v10; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v11; // x21
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  int32_t v14; // w3
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x1
  struct FriendOperationItemListViewManager_o *v17; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v18; // x21
  const MethodInfo *v19; // x3
  int32_t v20; // w2
  int32_t v21; // w3
  const MethodInfo *v22; // x2
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  FriendSearchMenu_o *friendSearchMenu; // x20
  FriendSearchMenu_CallbackFunc_o *v25; // x21
  const MethodInfo *v26; // x3
  const MethodInfo *v27; // x3
  struct FriendOperationItemListViewManager_o *v28; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v29; // x21
  const MethodInfo *v30; // x3
  int32_t v31; // w2
  int32_t v32; // w3
  const MethodInfo *v33; // x2
  const MethodInfo *v34; // x1
  const MethodInfo *v35; // x1
  struct ClassButtonControlComponent_o *v36; // x8
  FriendSearchMenu_o *v37; // x20
  FriendSearchMenu_CallbackFunc_o *v38; // x21
  const MethodInfo *v39; // x3
  const MethodInfo *v40; // x3

  v3 = this;
  if ( (byte_48E6B92 & 1) == 0 )
  {
    sub_1B00CCC(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_1B00CCC(&FriendSearchMenu_CallbackFunc_TypeInfo, v4);
    sub_1B00CCC(&Method_FriendRootComponent_OnSelectFriendItem__, v5);
    sub_1B00CCC(&Method_FriendRootComponent_OnSelectSearchFriend__, v6);
    this = (FriendRootComponent_o *)sub_1B00CCC(&StringLiteral_5409/*"END_ACTION"*/, v7);
    byte_48E6B92 = 1;
  }
  switch ( v3->fields.state )
  {
    case 2:
    case 3:
      v9 = 0;
      v3->fields.state = 4;
      goto LABEL_12;
    case 5:
    case 6:
    case 0xA:
    case 0xB:
    case 0xF:
    case 0x10:
      operationItemListViewManager = v3->fields.operationItemListViewManager;
      v3->fields.state = 1;
      if ( !operationItemListViewManager )
        goto LABEL_30;
      FriendOperationItemListViewManager__DestroyList(operationItemListViewManager, method);
      operationItemListViewManager = v3->fields.operationItemListViewManager;
      if ( !operationItemListViewManager )
        goto LABEL_30;
      operationItemListViewManager = (FriendOperationItemListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                               (UnityEngine_Component_o *)operationItemListViewManager,
                                                                               0LL);
      if ( !operationItemListViewManager )
        goto LABEL_30;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)operationItemListViewManager, 0, 0LL);
      goto LABEL_21;
    case 7:
    case 8:
      v3->fields.state = 9;
      v10 = v3->fields.operationItemListViewManager;
      v11 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1B00F18(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
      FriendOperationItemListViewManager_CallbackFunc___ctor(
        v11,
        (Il2CppObject *)v3,
        (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
        v12);
      if ( !v10 )
        goto LABEL_30;
      v10->fields.callbackFunc = v11;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&v10->fields.callbackFunc, (int32_t)v11, v13, v14);
      FriendOperationItemListViewManager__SetMode_45050616(v10, 2, v15);
      goto LABEL_21;
    case 0xC:
    case 0xD:
      v3->fields.state = 14;
      v9 = 1;
LABEL_12:
      FriendRootComponent__set_tabKind(this, v9, v2);
      FriendRootComponent__RefreshTab(v3, v16);
      v17 = v3->fields.operationItemListViewManager;
      v18 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1B00F18(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
      FriendOperationItemListViewManager_CallbackFunc___ctor(
        v18,
        (Il2CppObject *)v3,
        (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
        v19);
      if ( !v17 )
        goto LABEL_30;
      v17->fields.callbackFunc = v18;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&v17->fields.callbackFunc, (int32_t)v18, v20, v21);
      FriendOperationItemListViewManager__SetMode_45050616(v17, 2, v22);
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
      v28 = v3->fields.operationItemListViewManager;
      v29 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1B00F18(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
      FriendOperationItemListViewManager_CallbackFunc___ctor(
        v29,
        (Il2CppObject *)v3,
        (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
        v30);
      if ( !v28 )
        goto LABEL_30;
      v28->fields.callbackFunc = v29;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&v28->fields.callbackFunc, (int32_t)v29, v31, v32);
      FriendOperationItemListViewManager__SetMode_45050616(v28, 2, v33);
      break;
    case 0x14:
    case 0x15:
      v3->fields.state = 23;
      friendSearchMenu = v3->fields.friendSearchMenu;
      v25 = (FriendSearchMenu_CallbackFunc_o *)sub_1B00F18(FriendSearchMenu_CallbackFunc_TypeInfo);
      FriendSearchMenu_CallbackFunc___ctor(
        v25,
        (Il2CppObject *)v3,
        Method_FriendRootComponent_OnSelectSearchFriend__,
        v26);
      if ( !friendSearchMenu )
        goto LABEL_30;
      FriendSearchMenu__Open(friendSearchMenu, v25, 0, v27);
      operationItemListViewManager = v3->fields.operationItemListViewManager;
      if ( !operationItemListViewManager )
        goto LABEL_30;
      FriendOperationItemListViewManager__DestroyList(operationItemListViewManager, method);
      operationItemListViewManager = v3->fields.operationItemListViewManager;
      if ( !operationItemListViewManager )
        goto LABEL_30;
      operationItemListViewManager = (FriendOperationItemListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                               (UnityEngine_Component_o *)operationItemListViewManager,
                                                                               0LL);
      if ( !operationItemListViewManager )
        goto LABEL_30;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)operationItemListViewManager, 0, 0LL);
      break;
    case 0x16:
      v3->fields.state = 23;
      FriendRootComponent__set_tabKind(this, 2, v2);
      FriendRootComponent__RefreshTab(v3, v34);
      FriendRootComponent__RefreshInfo(v3, v35);
      v36 = v3->fields.classButtonControl;
      if ( !v36 )
        goto LABEL_30;
      v36->fields.updateEnable = 1;
      v37 = v3->fields.friendSearchMenu;
      v38 = (FriendSearchMenu_CallbackFunc_o *)sub_1B00F18(FriendSearchMenu_CallbackFunc_TypeInfo);
      FriendSearchMenu_CallbackFunc___ctor(
        v38,
        (Il2CppObject *)v3,
        Method_FriendRootComponent_OnSelectSearchFriend__,
        v39);
      if ( !v37 )
        goto LABEL_30;
      FriendSearchMenu__Open(v37, v38, 1, v40);
      break;
    case 0x18:
    case 0x19:
      v3->fields.state = 1;
      goto LABEL_21;
    default:
      return;
  }
  operationItemListViewManager = (FriendOperationItemListViewManager_o *)v3->fields.myFSM;
  if ( !operationItemListViewManager )
LABEL_30:
    sub_1B00F28(operationItemListViewManager, method);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)operationItemListViewManager, (System_String_o *)StringLiteral_5409/*"END_ACTION"*/, 0LL);
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
  __int64 v33; // x1
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
  struct System_Collections_Generic_List_string__o *masterCheckName; // x8
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
  FriendRootComponent_c *v89; // x0
  _QWORD *v90; // x0
  System_Reflection_MethodBase_o *v91; // x0
  const MethodInfo *v92; // x2
  DataManager_o *v93; // x8
  struct System_Collections_Generic_List_string__o *v94; // x9
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
  int32_t v117; // w2
  int32_t v118; // w3
  const MethodInfo *v119; // x2
  FriendOperationItemListViewItem_o *Item; // x0
  FriendOperationItemListViewItem_o *v121; // x20
  _QWORD *v122; // x0
  System_Reflection_MethodBase_o *v123; // x0
  int m_CancellationTokenSource; // [xsp+8h] [xbp-78h] BYREF
  int32_t lv; // [xsp+Ch] [xbp-74h] BYREF
  System_String_o *detail; // [xsp+10h] [xbp-70h] BYREF
  System_String_o *name; // [xsp+18h] [xbp-68h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+20h] [xbp-60h] BYREF
  System_String_o *v129; // [xsp+28h] [xbp-58h] BYREF
  System_String_o *v130; // [xsp+30h] [xbp-50h] BYREF
  SkillInfo_array *v131; // [xsp+38h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v132; // 0:x0.16

  if ( (byte_48E6BA2 & 1) == 0 )
  {
    sub_1B00CCC(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&kind);
    sub_1B00CCC(&FriendWarningDialog_CallbackFunc_TypeInfo, v7);
    sub_1B00CCC(&Method_DataManager_GetMasterData_SkillLvMaster___, v8);
    sub_1B00CCC(&Method_DataManager_GetMasterData_SkillMaster___, v9);
    sub_1B00CCC(&Method_DataManager_GetMasterData_TblFriendMaster___, v10);
    sub_1B00CCC(&Method_DataManager_GetMaster_SkillMaster___, v11);
    sub_1B00CCC(&DataManager_TypeInfo, v12);
    sub_1B00CCC(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v13);
    sub_1B00CCC(&Method_FriendRootComponent_EndMaxFriendWarning__, v14);
    sub_1B00CCC(&Method_FriendRootComponent_OnSelectFriendItem__, v15);
    sub_1B00CCC(&int_TypeInfo, v16);
    sub_1B00CCC(&LocalizationManager_TypeInfo, v17);
    sub_1B00CCC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v19);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_1B00CCC(&StringLiteral_8529/*"MENU_SELECT_ITEM_ACCEPT"*/, v21);
    sub_1B00CCC(&StringLiteral_115/*" "*/, v22);
    sub_1B00CCC(&StringLiteral_8535/*"MENU_SELECT_ITEM_REMOVE_FOLLOW"*/, v23);
    sub_1B00CCC(&StringLiteral_8530/*"MENU_SELECT_ITEM_CANCEL"*/, v24);
    sub_1B00CCC(&StringLiteral_8428/*"MASTER_EQSKILL_LV_TXT"*/, v25);
    sub_1B00CCC(&StringLiteral_8532/*"MENU_SELECT_ITEM_OFFER"*/, v26);
    sub_1B00CCC(&StringLiteral_2957/*"BATTLE_SKILLCHARGETURN"*/, v27);
    sub_1B00CCC(&StringLiteral_8533/*"MENU_SELECT_ITEM_REJECT"*/, v28);
    sub_1B00CCC(&StringLiteral_1/*""*/, v29);
    sub_1B00CCC(&StringLiteral_8534/*"MENU_SELECT_ITEM_REMOVE"*/, v30);
    byte_48E6BA2 = 1;
  }
  v130 = 0LL;
  v131 = 0LL;
  skillInfoList = 0LL;
  v129 = 0LL;
  detail = 0LL;
  name = 0LL;
  this->fields.selectItemNum = n;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_137;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_TblFriendMaster___);
  switch ( kind )
  {
    case 1:
    case 2:
    case 3:
      v54 = Method_FriendRootComponent_OnSelectFriendItem__;
      if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
        v54 = (_QWORD *)sub_1B00CE4(Method_FriendRootComponent_OnSelectFriendItem__);
      v55 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v54, v54[4]);
      OverwriteAssetSoundName__PlaySystemSe(v55, 0, 0LL);
      Instance = (DataManager_o *)this->fields.operationItemListViewManager;
      if ( !Instance )
        goto LABEL_137;
      Instance = (DataManager_o *)FriendOperationItemListViewManager__GetItem(
                                    (FriendOperationItemListViewManager_o *)Instance,
                                    this->fields.selectItemNum,
                                    v56);
      if ( !Instance )
        goto LABEL_137;
      v57 = (FriendOperationItemListViewItem_o *)Instance;
      Instance = (DataManager_o *)Instance->fields.context;
      if ( !Instance )
        goto LABEL_137;
      masterCheckName = Instance->fields.masterCheckName;
      if ( !masterCheckName )
        goto LABEL_137;
      if ( !masterCheckName->fields._size )
        goto LABEL_138;
      if ( !OtherUserGameEntity__getServantLeaderInfo(
              (OtherUserGameEntity_o *)Instance,
              v57->fields.classPos,
              0,
              0,
              (int32_t)masterCheckName->fields._syncRoot,
              0LL) )
        goto LABEL_55;
      if ( kind == 2 )
        v59 = 1LL;
      else
        v59 = 2LL * (kind == 3);
      Instance = (DataManager_o *)FriendOperationItemListViewItem__GetSkillInfo(v57, &v131, 0LL);
      if ( !v131 )
        goto LABEL_137;
      if ( (unsigned int)v59 >= v131->max_length )
        goto LABEL_138;
      v60 = v131->m_Items[v59];
      if ( !v60 || v60->fields.id < 1 || v60->fields.lv < 1 )
        goto LABEL_55;
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_137;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_SkillMaster___);
      if ( !Instance )
        goto LABEL_137;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                 v60->fields.id,
                 (const MethodInfo_2FE6A4C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_137;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_SkillLvMaster___);
      if ( !Instance )
        goto LABEL_137;
      Instance = (DataManager_o *)SkillLvMaster__GetEntity(
                                    (SkillLvMaster_o *)Instance,
                                    v60->fields.id,
                                    v60->fields.lv,
                                    0LL);
      if ( !Entity )
        goto LABEL_137;
      v62 = Instance;
      SkillEntity__getSkillMessageInfo((SkillEntity_o *)Entity, &v130, &v129, v60->fields.lv, 0LL);
      v63 = v130;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v64 = LocalizationManager__Get((System_String_o *)StringLiteral_8428/*"MASTER_EQSKILL_LV_TXT"*/, 0LL);
      lv = v60->fields.lv;
      v68 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv, v65, v66, v67);
      v69 = System_String__Format(v64, v68, 0LL);
      v130 = System_String__Concat_60337008(v63, (System_String_o *)StringLiteral_115/*" "*/, v69, 0LL);
      Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2957/*"BATTLE_SKILLCHARGETURN"*/, 0LL);
      if ( !v62 )
        goto LABEL_137;
      v73 = (System_String_o *)Instance;
      m_CancellationTokenSource = (int)v62->fields.m_CancellationTokenSource;
      v74 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &m_CancellationTokenSource, v70, v71, v72);
      v75 = System_String__Format(v73, v74, 0LL);
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !Instance )
        goto LABEL_137;
      CommonUI__OpenDetailLongInfoDialog((CommonUI_o *)Instance, v130, v75, v129, 1, 0, 0LL);
LABEL_55:
      operationItemListViewManager = this->fields.operationItemListViewManager;
      v51 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1B00F18(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
      v53 = (int)Method_FriendRootComponent_OnSelectFriendItem__;
      goto LABEL_127;
    case 4:
      v76 = Method_FriendRootComponent_OnSelectFriendItem__;
      if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
        v76 = (_QWORD *)sub_1B00CE4(Method_FriendRootComponent_OnSelectFriendItem__);
      v77 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v76, v76[4]);
      OverwriteAssetSoundName__PlaySystemSe(v77, 0, 0LL);
      if ( !MasterData_object )
        goto LABEL_137;
      Instance = (DataManager_o *)TblFriendMaster__GetList((TblFriendMaster_o *)MasterData_object, 3, 0LL);
      if ( !Instance || !SelfUserGame )
        goto LABEL_137;
      if ( SelfUserGame->fields.friendKeep <= SLODWORD(Instance->fields.m_CancellationTokenSource) )
        goto LABEL_121;
      Instance = (DataManager_o *)this->fields.myFSM;
      if ( !Instance )
        goto LABEL_137;
      v78 = &StringLiteral_8532/*"MENU_SELECT_ITEM_OFFER"*/;
      goto LABEL_130;
    case 5:
      v79 = Method_FriendRootComponent_OnSelectFriendItem__;
      if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
        v79 = (_QWORD *)sub_1B00CE4(Method_FriendRootComponent_OnSelectFriendItem__);
      v80 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v79, v79[4]);
      OverwriteAssetSoundName__PlaySystemSe(v80, 0, 0LL);
      if ( !MasterData_object )
        goto LABEL_137;
      Instance = (DataManager_o *)TblFriendMaster__GetList((TblFriendMaster_o *)MasterData_object, 3, 0LL);
      if ( !Instance || !SelfUserGame )
        goto LABEL_137;
      if ( SelfUserGame->fields.friendKeep <= SLODWORD(Instance->fields.m_CancellationTokenSource) )
      {
LABEL_121:
        friendWarningDialog = this->fields.friendWarningDialog;
        v111 = (FriendWarningDialog_CallbackFunc_o *)sub_1B00F18(FriendWarningDialog_CallbackFunc_TypeInfo);
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
LABEL_137:
        sub_1B00F28(Instance, v33);
      }
      Instance = (DataManager_o *)this->fields.myFSM;
      if ( !Instance )
        goto LABEL_137;
      v78 = &StringLiteral_8529/*"MENU_SELECT_ITEM_ACCEPT"*/;
LABEL_130:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v78, 0LL);
      return;
    case 6:
      v81 = Method_FriendRootComponent_OnSelectFriendItem__;
      if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
        v81 = (_QWORD *)sub_1B00CE4(Method_FriendRootComponent_OnSelectFriendItem__);
      v82 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v81, v81[4]);
      OverwriteAssetSoundName__PlaySystemSe(v82, 0, 0LL);
      Instance = (DataManager_o *)this->fields.myFSM;
      if ( !Instance )
        goto LABEL_137;
      v78 = &StringLiteral_8533/*"MENU_SELECT_ITEM_REJECT"*/;
      goto LABEL_130;
    case 7:
      v83 = Method_FriendRootComponent_OnSelectFriendItem__;
      if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
        v83 = (_QWORD *)sub_1B00CE4(Method_FriendRootComponent_OnSelectFriendItem__);
      v84 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v83, v83[4]);
      OverwriteAssetSoundName__PlaySystemSe(v84, 0, 0LL);
      Instance = (DataManager_o *)this->fields.myFSM;
      if ( !Instance )
        goto LABEL_137;
      v78 = &StringLiteral_8530/*"MENU_SELECT_ITEM_CANCEL"*/;
      goto LABEL_130;
    case 8:
      v85 = Method_FriendRootComponent_OnSelectFriendItem__;
      if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
        v85 = (_QWORD *)sub_1B00CE4(Method_FriendRootComponent_OnSelectFriendItem__);
      v86 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v85, v85[4]);
      OverwriteAssetSoundName__PlaySystemSe(v86, 0, 0LL);
      Instance = (DataManager_o *)this->fields.operationItemListViewManager;
      if ( !Instance )
        goto LABEL_137;
      Instance = (DataManager_o *)FriendOperationItemListViewManager__GetItem(
                                    (FriendOperationItemListViewManager_o *)Instance,
                                    this->fields.selectItemNum,
                                    v87);
      if ( !Instance )
        goto LABEL_137;
      v88 = Instance;
      Instance = (DataManager_o *)this->fields.myFSM;
      if ( !Instance )
        goto LABEL_137;
      if ( LODWORD(v88->fields.masterLoadThreads) == 9 )
        v78 = &StringLiteral_8535/*"MENU_SELECT_ITEM_REMOVE_FOLLOW"*/;
      else
        v78 = &StringLiteral_8534/*"MENU_SELECT_ITEM_REMOVE"*/;
      goto LABEL_130;
    case 11:
      v97 = Method_FriendRootComponent_OnSelectFriendItem__;
      if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
        v97 = (_QWORD *)sub_1B00CE4(Method_FriendRootComponent_OnSelectFriendItem__);
      v98 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v97, v97[4]);
      OverwriteAssetSoundName__PlaySystemSe(v98, 0, 0LL);
      Instance = (DataManager_o *)this->fields.operationItemListViewManager;
      if ( !Instance )
        goto LABEL_137;
      Instance = (DataManager_o *)FriendOperationItemListViewManager__GetItem(
                                    (FriendOperationItemListViewManager_o *)Instance,
                                    this->fields.selectItemNum,
                                    v99);
      if ( !Instance )
        goto LABEL_137;
      FriendOperationItemListViewItem__set_isSwapMessageDisp(
        (FriendOperationItemListViewItem_o *)Instance,
        LOBYTE(Instance[1].fields.m_CancellationTokenSource) == 0,
        0LL);
      goto LABEL_126;
    case 12:
      Instance = (DataManager_o *)this->fields.operationItemListViewManager;
      if ( !Instance )
        goto LABEL_137;
      Instance = (DataManager_o *)FriendOperationItemListViewManager__GetItem(
                                    (FriendOperationItemListViewManager_o *)Instance,
                                    this->fields.selectItemNum,
                                    v34);
      if ( !Instance )
        goto LABEL_137;
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
          *(_QWORD *)&v132.fields.currentCryptoKey = v105;
          *(_QWORD *)&v132.fields.fakeValue = v104;
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(v132, 0LL) >= 1 )
          {
            v106 = Method_FriendRootComponent_OnSelectFriendItem__;
            if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
              v106 = (_QWORD *)sub_1B00CE4(Method_FriendRootComponent_OnSelectFriendItem__);
            v107 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v106, v106[4]);
            OverwriteAssetSoundName__PlaySystemSe(v107, 0, 0LL);
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
        v114 = (_QWORD *)sub_1B00CE4(Method_FriendRootComponent_OnSelectFriendItem__);
      v115 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v114, v114[4]);
      OverwriteAssetSoundName__PlaySystemSe(v115, 2, 0LL);
      goto LABEL_126;
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
      Instance = (DataManager_o *)this->fields.operationItemListViewManager;
      if ( !Instance )
        goto LABEL_137;
      Instance = (DataManager_o *)FriendOperationItemListViewManager__GetItem(
                                    (FriendOperationItemListViewManager_o *)Instance,
                                    this->fields.selectItemNum,
                                    v34);
      v36 = (unsigned int)(kind - 14);
      v37 = (unsigned int)v36 < 4 ? v36 + 1 : 0LL;
      if ( !Instance )
        goto LABEL_137;
      Instance = (DataManager_o *)FriendOperationItemListViewItem__GetAppendSkillInfo(
                                    (FriendOperationItemListViewItem_o *)Instance,
                                    &skillInfoList,
                                    0LL);
      if ( !skillInfoList )
        goto LABEL_137;
      if ( (unsigned int)v37 >= skillInfoList->max_length )
        goto LABEL_138;
      v38 = skillInfoList->m_Items[v37];
      if ( v38 && v38->fields.id >= 1 && v38->fields.lv >= 1 )
      {
        v39 = Method_FriendRootComponent_OnSelectFriendItem__;
        if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
          v39 = (_QWORD *)sub_1B00CE4(Method_FriendRootComponent_OnSelectFriendItem__);
        v40 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v39, v39[4]);
        OverwriteAssetSoundName__PlaySystemSe(v40, 0, 0LL);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_SkillMaster___);
        if ( !Instance )
          goto LABEL_137;
        Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                      v38->fields.id,
                                      (const MethodInfo_2FE6A4C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_137;
        SkillEntity__getSkillMessageInfo((SkillEntity_o *)Instance, &name, &detail, v38->fields.lv, 0LL);
        v41 = name;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v42 = LocalizationManager__Get((System_String_o *)StringLiteral_8428/*"MASTER_EQSKILL_LV_TXT"*/, 0LL);
        lv = v38->fields.lv;
        v46 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv, v43, v44, v45);
        v47 = System_String__Format(v42, v46, 0LL);
        name = System_String__Concat_60337008(v41, (System_String_o *)StringLiteral_115/*" "*/, v47, 0LL);
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !Instance )
          goto LABEL_137;
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
          v48 = (_QWORD *)sub_1B00CE4(Method_FriendRootComponent_OnSelectFriendItem__);
        v49 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v48, v48[4]);
        OverwriteAssetSoundName__PlaySystemSe(v49, 2, 0LL);
      }
      goto LABEL_28;
    default:
      if ( this->fields.currentModeKind != 1 )
        goto LABEL_93;
      if ( !byte_48E6BF6 )
      {
        sub_1B00CCC(&FriendRootComponent_TypeInfo, v33);
        byte_48E6BF6 = 1;
      }
      v89 = FriendRootComponent_TypeInfo;
      if ( !FriendRootComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FriendRootComponent_TypeInfo);
        v89 = FriendRootComponent_TypeInfo;
      }
      if ( !v89->static_fields->tabKindSave )
      {
        Instance = (DataManager_o *)this->fields.operationItemListViewManager;
        if ( !Instance )
          goto LABEL_137;
        Item = FriendOperationItemListViewManager__GetItem(
                 (FriendOperationItemListViewManager_o *)Instance,
                 this->fields.selectItemNum,
                 v34);
        if ( Item )
        {
          v121 = Item;
          v122 = Method_FriendRootComponent_OnSelectFriendItem__;
          if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
            v122 = (_QWORD *)sub_1B00CE4(Method_FriendRootComponent_OnSelectFriendItem__);
          v123 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v122, v122[4]);
          OverwriteAssetSoundName__PlaySystemSe(v123, 11, 0LL);
          FriendOperationItemListViewItem__SwapLock(v121, 0LL);
        }
LABEL_28:
        operationItemListViewManager = this->fields.operationItemListViewManager;
        v51 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1B00F18(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
        v53 = (int)Method_FriendRootComponent_OnSelectFriendItem__;
      }
      else
      {
LABEL_93:
        v90 = Method_FriendRootComponent_OnSelectFriendItem__;
        if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
          v90 = (_QWORD *)sub_1B00CE4(Method_FriendRootComponent_OnSelectFriendItem__);
        v91 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v90, v90[4]);
        OverwriteAssetSoundName__PlaySystemSe(v91, 0, 0LL);
        Instance = (DataManager_o *)this->fields.operationItemListViewManager;
        if ( !Instance )
          goto LABEL_137;
        Instance = (DataManager_o *)FriendOperationItemListViewManager__GetItem(
                                      (FriendOperationItemListViewManager_o *)Instance,
                                      this->fields.selectItemNum,
                                      v92);
        if ( !Instance )
          goto LABEL_137;
        v93 = Instance;
        Instance = (DataManager_o *)Instance->fields.context;
        if ( !Instance )
          goto LABEL_137;
        v94 = Instance->fields.masterCheckName;
        if ( !v94 )
          goto LABEL_137;
        if ( !v94->fields._size )
LABEL_138:
          sub_1B00F30(Instance, v33);
        ServantLeaderInfo = OtherUserGameEntity__getServantLeaderInfo(
                              (OtherUserGameEntity_o *)Instance,
                              v93[1].fields.m_CachedPtr,
                              0,
                              0,
                              (int32_t)v94->fields._syncRoot,
                              0LL);
        if ( ServantLeaderInfo )
        {
          FriendRootComponent__SelectShowServant(this, ServantLeaderInfo, v96);
          return;
        }
LABEL_126:
        operationItemListViewManager = this->fields.operationItemListViewManager;
        v51 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1B00F18(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
        v53 = (int)Method_FriendRootComponent_OnSelectFriendItem__;
      }
LABEL_127:
      v116 = v51;
      FriendOperationItemListViewManager_CallbackFunc___ctor(v51, (Il2CppObject *)this, v53, v52);
      if ( operationItemListViewManager )
      {
        operationItemListViewManager->fields.callbackFunc = v116;
        sub_1B00C70(
          (ServantStatusBattleListViewItem_o *)&operationItemListViewManager->fields.callbackFunc,
          (int32_t)v116,
          v117,
          v118);
        FriendOperationItemListViewManager__SetMode_45050616(operationItemListViewManager, 2, v119);
        return;
      }
      goto LABEL_137;
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

  if ( (byte_48E6BAC & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_8531/*"MENU_SELECT_ITEM_FOLLOW"*/, *(_QWORD *)&state);
    sub_1B00CCC(&StringLiteral_8532/*"MENU_SELECT_ITEM_OFFER"*/, v7);
    sub_1B00CCC(&StringLiteral_8515/*"MENU_CANCEL"*/, v8);
    byte_48E6BAC = 1;
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
      v10 = &StringLiteral_8531/*"MENU_SELECT_ITEM_FOLLOW"*/;
      goto LABEL_12;
    }
LABEL_13:
    sub_1B00F28(classButtonControl, *(_QWORD *)&state);
  }
  if ( state != 2 )
  {
    classButtonControl = (ClassButtonControlComponent_o *)this->fields.myFSM;
    if ( classButtonControl )
    {
      v10 = &StringLiteral_8515/*"MENU_CANCEL"*/;
      goto LABEL_12;
    }
    goto LABEL_13;
  }
  classButtonControl = (ClassButtonControlComponent_o *)this->fields.myFSM;
  if ( !classButtonControl )
    goto LABEL_13;
  v10 = &StringLiteral_8532/*"MENU_SELECT_ITEM_OFFER"*/;
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

  if ( (byte_48E6BAB & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_8516/*"MENU_DECIDE"*/, isDecide);
    sub_1B00CCC(&StringLiteral_8515/*"MENU_CANCEL"*/, v7);
    byte_48E6BAB = 1;
  }
  this->fields.selectFriendCode = friendCode;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields.selectFriendCode,
    (int32_t)friendCode,
    (int32_t)friendCode,
    (int32_t)method);
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1B00F28(0LL, v8);
  v10 = &StringLiteral_8516/*"MENU_DECIDE"*/;
  if ( !isDecide )
    v10 = &StringLiteral_8515/*"MENU_CANCEL"*/;
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
    sub_1B00F28(operationItemListViewManager, method);
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

  if ( (byte_48E6B68 & 1) == 0 )
  {
    sub_1B00CCC(&BalanceConfig_TypeInfo, method);
    sub_1B00CCC(&Method_DataManager_GetMasterData_TblFriendMaster___, v3);
    sub_1B00CCC(&Method_DataManager_GetMasterData_UserFollowMaster___, v4);
    sub_1B00CCC(&int_TypeInfo, v5);
    sub_1B00CCC(&LocalizationManager_TypeInfo, v6);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1B00CCC(&StringLiteral_6470/*"FRIEND_SHOW_INFOMATION"*/, v8);
    byte_48E6B68 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_TblFriendMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  v13 = DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_UserFollowMaster___);
  friendCountLabel = this->fields.friendCountLabel;
  v15 = (UserFollowMaster_o *)v13;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6470/*"FRIEND_SHOW_INFOMATION"*/, 0LL);
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
  Instance = (DataManager_o *)System_String__Format_60340120(v16, v23, v24, 0LL);
  if ( !friendCountLabel )
    goto LABEL_16;
  UILabel__set_text(friendCountLabel, (System_String_o *)Instance, 0LL);
  followCountLabel = this->fields.followCountLabel;
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6470/*"FRIEND_SHOW_INFOMATION"*/, 0LL);
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
  Instance = (DataManager_o *)System_String__Format_60340120(v26, v35, v36, 0LL);
  if ( !followCountLabel
    || (UILabel__set_text(followCountLabel, (System_String_o *)Instance, 0LL),
        Instance = (DataManager_o *)TblFriendMaster__GetSum((TblFriendMaster_o *)MasterData_object, 2, 0LL),
        !this->fields.noticeNumber) )
  {
LABEL_16:
    sub_1B00F28(Instance, v11);
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

  if ( (byte_48E6B67 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_17341/*"btn_txt_friendsearch_on"*/, method);
    sub_1B00CCC(&StringLiteral_17340/*"btn_txt_friendsearch_off"*/, v3);
    sub_1B00CCC(&StringLiteral_17237/*"btn_bg_09"*/, v4);
    sub_1B00CCC(&StringLiteral_17339/*"btn_txt_friendrequest_on"*/, v5);
    sub_1B00CCC(&StringLiteral_17337/*"btn_txt_friendlist_on"*/, v6);
    sub_1B00CCC(&StringLiteral_17338/*"btn_txt_friendrequest_off"*/, v7);
    sub_1B00CCC(&StringLiteral_17336/*"btn_txt_friendlist_off"*/, v8);
    sub_1B00CCC(&StringLiteral_17253/*"btn_bg_on"*/, v9);
    byte_48E6B67 = 1;
  }
  if ( !byte_48E6BF6 )
  {
    sub_1B00CCC(&FriendRootComponent_TypeInfo, method);
    byte_48E6BF6 = 1;
  }
  v10 = FriendRootComponent_TypeInfo;
  if ( !FriendRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendRootComponent_TypeInfo);
    v10 = FriendRootComponent_TypeInfo;
  }
  tabKindSave = v10->static_fields->tabKindSave;
  if ( tabKindSave == 2 )
  {
    tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabFriendButton;
    if ( !tabFriendButton )
      goto LABEL_61;
    ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, void *))tabFriendButton->klass[1]._1.namespaze)(
      tabFriendButton,
      1LL,
      tabFriendButton->klass[1]._1.byval_arg.data);
    tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabOfferedButton;
    if ( !tabFriendButton )
      goto LABEL_61;
    ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, void *))tabFriendButton->klass[1]._1.namespaze)(
      tabFriendButton,
      1LL,
      tabFriendButton->klass[1]._1.byval_arg.data);
    tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabSearchButton;
    if ( !tabFriendButton )
      goto LABEL_61;
    ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, void *))tabFriendButton->klass[1]._1.namespaze)(
      tabFriendButton,
      1LL,
      tabFriendButton->klass[1]._1.byval_arg.data);
    tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabFriendButton;
    if ( !tabFriendButton )
      goto LABEL_61;
    UnityEngine_Behaviour__set_enabled(tabFriendButton, 1, 0LL);
    tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabOfferedButton;
    if ( !tabFriendButton )
      goto LABEL_61;
    UnityEngine_Behaviour__set_enabled(tabFriendButton, 1, 0LL);
    tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabSearchButton;
    if ( !tabFriendButton )
      goto LABEL_61;
    UnityEngine_Behaviour__set_enabled(tabFriendButton, 0, 0LL);
    tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabFriendTitleSprite;
    if ( !tabFriendButton )
      goto LABEL_61;
    UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17336/*"btn_txt_friendlist_off"*/, 0LL);
    tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabOfferedTitleSprite;
    if ( !tabFriendButton )
      goto LABEL_61;
    UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17338/*"btn_txt_friendrequest_off"*/, 0LL);
    tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabSearchTitleSprite;
    if ( !tabFriendButton )
      goto LABEL_61;
    UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17341/*"btn_txt_friendsearch_on"*/, 0LL);
    tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabFriendSprite;
    if ( !tabFriendButton )
      goto LABEL_61;
    UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17237/*"btn_bg_09"*/, 0LL);
    tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabOfferedSprite;
    if ( !tabFriendButton )
      goto LABEL_61;
    UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17237/*"btn_bg_09"*/, 0LL);
    tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabSearchSprite;
    if ( !tabFriendButton )
      goto LABEL_61;
    v14 = (System_String_o *)StringLiteral_17253/*"btn_bg_on"*/;
  }
  else
  {
    if ( tabKindSave == 1 )
    {
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabFriendButton;
      if ( !tabFriendButton )
        goto LABEL_61;
      ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, void *))tabFriendButton->klass[1]._1.namespaze)(
        tabFriendButton,
        1LL,
        tabFriendButton->klass[1]._1.byval_arg.data);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabOfferedButton;
      if ( !tabFriendButton )
        goto LABEL_61;
      ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, void *))tabFriendButton->klass[1]._1.namespaze)(
        tabFriendButton,
        1LL,
        tabFriendButton->klass[1]._1.byval_arg.data);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabSearchButton;
      if ( !tabFriendButton )
        goto LABEL_61;
      ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, void *))tabFriendButton->klass[1]._1.namespaze)(
        tabFriendButton,
        1LL,
        tabFriendButton->klass[1]._1.byval_arg.data);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabFriendButton;
      if ( !tabFriendButton )
        goto LABEL_61;
      UnityEngine_Behaviour__set_enabled(tabFriendButton, 1, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabOfferedButton;
      if ( !tabFriendButton )
        goto LABEL_61;
      UnityEngine_Behaviour__set_enabled(tabFriendButton, 0, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabSearchButton;
      if ( !tabFriendButton )
        goto LABEL_61;
      UnityEngine_Behaviour__set_enabled(tabFriendButton, 1, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabFriendTitleSprite;
      if ( !tabFriendButton )
        goto LABEL_61;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17336/*"btn_txt_friendlist_off"*/, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabOfferedTitleSprite;
      if ( !tabFriendButton )
        goto LABEL_61;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17339/*"btn_txt_friendrequest_on"*/, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabSearchTitleSprite;
      if ( !tabFriendButton )
        goto LABEL_61;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17340/*"btn_txt_friendsearch_off"*/, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabFriendSprite;
      if ( !tabFriendButton )
        goto LABEL_61;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17237/*"btn_bg_09"*/, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabOfferedSprite;
      if ( !tabFriendButton )
        goto LABEL_61;
      v13 = (System_String_o *)StringLiteral_17253/*"btn_bg_on"*/;
    }
    else
    {
      if ( tabKindSave )
        goto LABEL_53;
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabFriendButton;
      if ( !tabFriendButton )
        goto LABEL_61;
      ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, void *))tabFriendButton->klass[1]._1.namespaze)(
        tabFriendButton,
        1LL,
        tabFriendButton->klass[1]._1.byval_arg.data);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabOfferedButton;
      if ( !tabFriendButton )
        goto LABEL_61;
      ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, void *))tabFriendButton->klass[1]._1.namespaze)(
        tabFriendButton,
        1LL,
        tabFriendButton->klass[1]._1.byval_arg.data);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabSearchButton;
      if ( !tabFriendButton )
        goto LABEL_61;
      ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, void *))tabFriendButton->klass[1]._1.namespaze)(
        tabFriendButton,
        1LL,
        tabFriendButton->klass[1]._1.byval_arg.data);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabFriendButton;
      if ( !tabFriendButton )
        goto LABEL_61;
      UnityEngine_Behaviour__set_enabled(tabFriendButton, 0, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabOfferedButton;
      if ( !tabFriendButton )
        goto LABEL_61;
      UnityEngine_Behaviour__set_enabled(tabFriendButton, 1, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabSearchButton;
      if ( !tabFriendButton )
        goto LABEL_61;
      UnityEngine_Behaviour__set_enabled(tabFriendButton, 1, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabFriendTitleSprite;
      if ( !tabFriendButton )
        goto LABEL_61;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17337/*"btn_txt_friendlist_on"*/, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabOfferedTitleSprite;
      if ( !tabFriendButton )
        goto LABEL_61;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17338/*"btn_txt_friendrequest_off"*/, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabSearchTitleSprite;
      if ( !tabFriendButton )
        goto LABEL_61;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17340/*"btn_txt_friendsearch_off"*/, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabFriendSprite;
      if ( !tabFriendButton )
        goto LABEL_61;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17253/*"btn_bg_on"*/, 0LL);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabOfferedSprite;
      if ( !tabFriendButton )
        goto LABEL_61;
      v13 = (System_String_o *)StringLiteral_17237/*"btn_bg_09"*/;
    }
    UISprite__set_spriteName((UISprite_o *)tabFriendButton, v13, 0LL);
    tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabSearchSprite;
    if ( !tabFriendButton )
      goto LABEL_61;
    v14 = (System_String_o *)StringLiteral_17237/*"btn_bg_09"*/;
  }
  UISprite__set_spriteName((UISprite_o *)tabFriendButton, v14, 0LL);
  tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabFriendButton;
  if ( !tabFriendButton )
    goto LABEL_61;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))tabFriendButton->klass[1]._1.implementedInterfaces)(
    tabFriendButton,
    0LL,
    1LL,
    tabFriendButton->klass[1]._1.interfaceOffsets);
  tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabOfferedButton;
  if ( !tabFriendButton )
    goto LABEL_61;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))tabFriendButton->klass[1]._1.implementedInterfaces)(
    tabFriendButton,
    0LL,
    1LL,
    tabFriendButton->klass[1]._1.interfaceOffsets);
  tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabSearchButton;
  if ( !tabFriendButton )
    goto LABEL_61;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))tabFriendButton->klass[1]._1.implementedInterfaces)(
    tabFriendButton,
    0LL,
    1LL,
    tabFriendButton->klass[1]._1.interfaceOffsets);
LABEL_53:
  FriendRootComponent__CheckModeKind(this, method);
  FriendRootComponent__CheckHelpUI(this, v15);
  if ( !byte_48E6BF6 )
  {
    sub_1B00CCC(&FriendRootComponent_TypeInfo, v16);
    byte_48E6BF6 = 1;
  }
  v18 = FriendRootComponent_TypeInfo;
  if ( !FriendRootComponent_TypeInfo->_2.cctor_finished )
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
LABEL_61:
    sub_1B00F28(tabFriendButton, method);
  }
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

  if ( (byte_48E6BB1 & 1) == 0 )
  {
    sub_1B00CCC(&Method_FriendRootComponent_EndRequestFollowAssign__, method);
    sub_1B00CCC(&Method_NetworkManager_getRequest_FollowAssignRequest___, v3);
    sub_1B00CCC(&NetworkManager_TypeInfo, v4);
    sub_1B00CCC(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    sub_1B00CCC(&StringLiteral_10883/*"REQUEST_NG"*/, v6);
    byte_48E6BB1 = 1;
  }
  if ( this->fields.selectFriendEntity )
  {
    v7 = (NetworkManager_ResultCallbackFunc_o *)sub_1B00F18(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      Method_FriendRootComponent_EndRequestFollowAssign__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = (FollowAssignRequest_o *)NetworkManager__getRequest_object_(
                                                v7,
                                                (const MethodInfo_2DD4818 *)Method_NetworkManager_getRequest_FollowAssignRequest___);
    selectFriendEntity = this->fields.selectFriendEntity;
    if ( selectFriendEntity && Request_object )
    {
      FollowAssignRequest__beginRequest(Request_object, selectFriendEntity->fields.userId, 0LL);
      return;
    }
LABEL_11:
    sub_1B00F28(Request_object, method);
  }
  Request_object = (FollowAssignRequest_o *)this->fields.myFSM;
  if ( !Request_object )
    goto LABEL_11;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Request_object, (System_String_o *)StringLiteral_10883/*"REQUEST_NG"*/, 0LL);
}


void __fastcall FriendRootComponent__RequestFollowRemove(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_object__o *v4; // x20
  const MethodInfo *v5; // x2

  if ( (byte_48E6BBA & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_string__TypeInfo, method);
    sub_1B00CCC(&Method_FriendRootComponent__RequestFollowRemove_b__139_0__, v3);
    byte_48E6BBA = 1;
  }
  v4 = (System_Action_object__o *)sub_1B00F18(System_Action_string__TypeInfo);
  System_Action_object____ctor(
    v4,
    (Il2CppObject *)this,
    Method_FriendRootComponent__RequestFollowRemove_b__139_0__,
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

  if ( (byte_48E6B88 & 1) == 0 )
  {
    sub_1B00CCC(&Method_FriendRootComponent_EndRequestFriend__, method);
    sub_1B00CCC(&Method_NetworkManager_getRequest_FriendAcceptRequest___, v4);
    sub_1B00CCC(&NetworkManager_TypeInfo, v5);
    sub_1B00CCC(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    sub_1B00CCC(&StringLiteral_10883/*"REQUEST_NG"*/, v7);
    byte_48E6B88 = 1;
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
      v11 = (NetworkManager_ResultCallbackFunc_o *)sub_1B00F18(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v11,
        (Il2CppObject *)this,
        Method_FriendRootComponent_EndRequestFriend__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      operationItemListViewManager = (FriendOperationItemListViewManager_o *)NetworkManager__getRequest_object_(
                                                                               v11,
                                                                               (const MethodInfo_2DD4818 *)Method_NetworkManager_getRequest_FriendAcceptRequest___);
      if ( operationItemListViewManager )
      {
        FriendAcceptRequest__beginRequest(
          (FriendAcceptRequest_o *)operationItemListViewManager,
          otherUserGameEntity->fields.userId,
          0LL);
        return;
      }
LABEL_12:
      sub_1B00F28(operationItemListViewManager, method);
    }
  }
  operationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.myFSM;
  if ( !operationItemListViewManager )
    goto LABEL_12;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)operationItemListViewManager, (System_String_o *)StringLiteral_10883/*"REQUEST_NG"*/, 0LL);
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

  if ( (byte_48E6B8A & 1) == 0 )
  {
    sub_1B00CCC(&Method_FriendRootComponent_EndRequestFriend__, method);
    sub_1B00CCC(&Method_NetworkManager_getRequest_FriendCancelRequest___, v4);
    sub_1B00CCC(&NetworkManager_TypeInfo, v5);
    sub_1B00CCC(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    sub_1B00CCC(&StringLiteral_10883/*"REQUEST_NG"*/, v7);
    byte_48E6B8A = 1;
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
      v11 = (NetworkManager_ResultCallbackFunc_o *)sub_1B00F18(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v11,
        (Il2CppObject *)this,
        Method_FriendRootComponent_EndRequestFriend__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      operationItemListViewManager = (FriendOperationItemListViewManager_o *)NetworkManager__getRequest_object_(
                                                                               v11,
                                                                               (const MethodInfo_2DD4818 *)Method_NetworkManager_getRequest_FriendCancelRequest___);
      if ( operationItemListViewManager )
      {
        FriendCancelRequest__beginRequest(
          (FriendCancelRequest_o *)operationItemListViewManager,
          otherUserGameEntity->fields.userId,
          0LL);
        return;
      }
LABEL_12:
      sub_1B00F28(operationItemListViewManager, method);
    }
  }
  operationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.myFSM;
  if ( !operationItemListViewManager )
    goto LABEL_12;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)operationItemListViewManager, (System_String_o *)StringLiteral_10883/*"REQUEST_NG"*/, 0LL);
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

  if ( (byte_48E6B86 & 1) == 0 )
  {
    sub_1B00CCC(&Method_FriendRootComponent_EndRequestFriend__, method);
    sub_1B00CCC(&Method_NetworkManager_getRequest_FriendOfferRequest___, v3);
    sub_1B00CCC(&NetworkManager_TypeInfo, v4);
    sub_1B00CCC(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    sub_1B00CCC(&StringLiteral_10883/*"REQUEST_NG"*/, v6);
    byte_48E6B86 = 1;
  }
  if ( this->fields.selectFriendEntity )
  {
    v7 = (NetworkManager_ResultCallbackFunc_o *)sub_1B00F18(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      Method_FriendRootComponent_EndRequestFriend__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = (FriendOfferRequest_o *)NetworkManager__getRequest_object_(
                                               v7,
                                               (const MethodInfo_2DD4818 *)Method_NetworkManager_getRequest_FriendOfferRequest___);
    selectFriendEntity = this->fields.selectFriendEntity;
    if ( selectFriendEntity && Request_object )
    {
      FriendOfferRequest__beginRequest(Request_object, selectFriendEntity->fields.userId, 0LL);
      return;
    }
LABEL_11:
    sub_1B00F28(Request_object, method);
  }
  Request_object = (FriendOfferRequest_o *)this->fields.myFSM;
  if ( !Request_object )
    goto LABEL_11;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Request_object, (System_String_o *)StringLiteral_10883/*"REQUEST_NG"*/, 0LL);
}


void __fastcall FriendRootComponent__RequestFriendOffer2(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_object__o *v4; // x20
  const MethodInfo *v5; // x2

  if ( (byte_48E6B87 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_string__TypeInfo, method);
    sub_1B00CCC(&Method_FriendRootComponent__RequestFriendOffer2_b__84_0__, v3);
    byte_48E6B87 = 1;
  }
  v4 = (System_Action_object__o *)sub_1B00F18(System_Action_string__TypeInfo);
  System_Action_object____ctor(v4, (Il2CppObject *)this, Method_FriendRootComponent__RequestFriendOffer2_b__84_0__, 0LL);
  FriendRootComponent__FriendLockRequst(this, (System_Action_string__o *)v4, v5);
}


void __fastcall FriendRootComponent__RequestFriendProfile(FriendRootComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_String_o *selectFriendCode; // x0
  System_String_o *v14; // x0
  NetworkManager_ResultCallbackFunc_o *v15; // x20
  ProfileTopRequest_o *Request_object; // x0
  __int64 v17; // x1
  FriendWarningDialog_o *friendWarningDialog; // x20
  FriendWarningDialog_CallbackFunc_o *v19; // x21
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x3

  if ( (byte_48E6B8E & 1) == 0 )
  {
    sub_1B00CCC(&FriendWarningDialog_CallbackFunc_TypeInfo, method);
    sub_1B00CCC(&Method_FriendRootComponent_EndNoSearchWarning__, v5);
    sub_1B00CCC(&Method_FriendRootComponent_EndRequestFriendProfile__, v6);
    sub_1B00CCC(&Method_NetworkManager_getRequest_ProfileTopRequest___, v7);
    sub_1B00CCC(&NetworkManager_TypeInfo, v8);
    sub_1B00CCC(&NetworkManager_ResultCallbackFunc_TypeInfo, v9);
    sub_1B00CCC(&StringLiteral_115/*" "*/, v10);
    sub_1B00CCC(&StringLiteral_10883/*"REQUEST_NG"*/, v11);
    sub_1B00CCC(&StringLiteral_1/*""*/, v12);
    byte_48E6B8E = 1;
  }
  selectFriendCode = this->fields.selectFriendCode;
  if ( selectFriendCode )
  {
    v14 = System_String__Replace_60345368(
            selectFriendCode,
            (System_String_o *)StringLiteral_115/*" "*/,
            (System_String_o *)StringLiteral_1/*""*/,
            0LL);
    if ( System_String__op_Inequality(v14, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
    {
      v15 = (NetworkManager_ResultCallbackFunc_o *)sub_1B00F18(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v15,
        (Il2CppObject *)this,
        Method_FriendRootComponent_EndRequestFriendProfile__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Request_object = (ProfileTopRequest_o *)NetworkManager__getRequest_object_(
                                                v15,
                                                (const MethodInfo_2DD4818 *)Method_NetworkManager_getRequest_ProfileTopRequest___);
      if ( Request_object )
      {
        ProfileTopRequest__beginRequestFriendCode(Request_object, this->fields.selectFriendCode, 0LL);
        return;
      }
LABEL_13:
      sub_1B00F28(Request_object, v17);
    }
    friendWarningDialog = this->fields.friendWarningDialog;
    v19 = (FriendWarningDialog_CallbackFunc_o *)sub_1B00F18(FriendWarningDialog_CallbackFunc_TypeInfo);
    FriendWarningDialog_CallbackFunc___ctor(
      v19,
      (Il2CppObject *)this,
      Method_FriendRootComponent_EndNoSearchWarning__,
      v20);
    if ( !friendWarningDialog )
      goto LABEL_13;
    FriendWarningDialog__Open(friendWarningDialog, 3, v19, v21);
  }
  this->fields.selectFriendEntity = 0LL;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.selectFriendEntity, 0, v2, v3);
  Request_object = (ProfileTopRequest_o *)this->fields.myFSM;
  if ( !Request_object )
    goto LABEL_13;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Request_object, (System_String_o *)StringLiteral_10883/*"REQUEST_NG"*/, 0LL);
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

  if ( (byte_48E6B89 & 1) == 0 )
  {
    sub_1B00CCC(&Method_FriendRootComponent_EndRequestFriend__, method);
    sub_1B00CCC(&Method_NetworkManager_getRequest_FriendRejectRequest___, v4);
    sub_1B00CCC(&NetworkManager_TypeInfo, v5);
    sub_1B00CCC(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1B00CCC(&StringLiteral_10883/*"REQUEST_NG"*/, v8);
    byte_48E6B89 = 1;
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
      operationItemListViewManager = (FriendOperationItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( operationItemListViewManager )
      {
        CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)operationItemListViewManager, 0, 0LL);
        v12 = (NetworkManager_ResultCallbackFunc_o *)sub_1B00F18(NetworkManager_ResultCallbackFunc_TypeInfo);
        NetworkManager_ResultCallbackFunc___ctor(
          v12,
          (Il2CppObject *)this,
          Method_FriendRootComponent_EndRequestFriend__,
          0LL);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        operationItemListViewManager = (FriendOperationItemListViewManager_o *)NetworkManager__getRequest_object_(
                                                                                 v12,
                                                                                 (const MethodInfo_2DD4818 *)Method_NetworkManager_getRequest_FriendRejectRequest___);
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
      sub_1B00F28(operationItemListViewManager, method);
    }
  }
  operationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.myFSM;
  if ( !operationItemListViewManager )
    goto LABEL_13;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)operationItemListViewManager, (System_String_o *)StringLiteral_10883/*"REQUEST_NG"*/, 0LL);
}


void __fastcall FriendRootComponent__RequestFriendRemove(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_object__o *v4; // x20
  const MethodInfo *v5; // x2

  if ( (byte_48E6B8B & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_string__TypeInfo, method);
    sub_1B00CCC(&Method_FriendRootComponent__RequestFriendRemove_b__88_0__, v3);
    byte_48E6B8B = 1;
  }
  v4 = (System_Action_object__o *)sub_1B00F18(System_Action_string__TypeInfo);
  System_Action_object____ctor(v4, (Il2CppObject *)this, Method_FriendRootComponent__RequestFriendRemove_b__88_0__, 0LL);
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

  if ( (byte_48E6BAD & 1) == 0 )
  {
    sub_1B00CCC(&BalanceConfig_TypeInfo, method);
    sub_1B00CCC(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo, v3);
    sub_1B00CCC(&FriendWarningDialog_CallbackFunc_TypeInfo, v4);
    sub_1B00CCC(&NotificationDialog_ClickDelegate_TypeInfo, v5);
    sub_1B00CCC(&Method_DataManager_GetMasterData_UserFollowMaster___, v6);
    sub_1B00CCC(&Method_FriendRootComponent_EndMaxFollowWarningOfferConfirm__, v7);
    sub_1B00CCC(&Method_FriendRootComponent_SelectedFollowOfferConfirm__, v8);
    sub_1B00CCC(&LocalizationManager_TypeInfo, v9);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1B00CCC(&StringLiteral_2066/*"ALREADY_FOLLOWED_TITLE"*/, v12);
    sub_1B00CCC(&StringLiteral_2065/*"ALREADY_FOLLOWED_MESSAGE"*/, v13);
    byte_48E6BAD = 1;
  }
  if ( this->fields.state == 23 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_UserFollowMaster___);
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
          v26 = (FriendWarningDialog_CallbackFunc_o *)sub_1B00F18(FriendWarningDialog_CallbackFunc_TypeInfo);
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
            v21 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v22 = LocalizationManager__Get((System_String_o *)StringLiteral_2066/*"ALREADY_FOLLOWED_TITLE"*/, 0LL);
            v23 = LocalizationManager__Get((System_String_o *)StringLiteral_2065/*"ALREADY_FOLLOWED_MESSAGE"*/, 0LL);
            v24 = (NotificationDialog_ClickDelegate_o *)sub_1B00F18(NotificationDialog_ClickDelegate_TypeInfo);
            NotificationDialog_ClickDelegate___ctor(
              v24,
              (Il2CppObject *)this,
              Method_FriendRootComponent_EndMaxFollowWarningOfferConfirm__,
              0LL);
            if ( v21 )
            {
              CommonUI__OpenNotificationDialog_29939268(
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
            v31 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_1B00F18(FriendOperationConfirmMenu_CallbackFunc_TypeInfo);
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
    sub_1B00F28(Instance, v15);
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

  if ( (byte_48E6BB4 & 1) == 0 )
  {
    sub_1B00CCC(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo, method);
    sub_1B00CCC(&Method_FriendRootComponent_SelectedFollowRemoveConfirm__, v4);
    byte_48E6BB4 = 1;
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
          v8 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_1B00F18(FriendOperationConfirmMenu_CallbackFunc_TypeInfo),
          FriendOperationConfirmMenu_CallbackFunc___ctor(
            v8,
            (Il2CppObject *)this,
            Method_FriendRootComponent_SelectedFollowRemoveConfirm__,
            0LL),
          !operationConfirmMenu) )
    {
      sub_1B00F28(operationItemListViewManager, method);
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

  if ( (byte_48E6B7A & 1) == 0 )
  {
    sub_1B00CCC(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo, method);
    sub_1B00CCC(&Method_FriendRootComponent_SelectedFriendAcceptConfirm__, v4);
    byte_48E6B7A = 1;
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
          v8 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_1B00F18(FriendOperationConfirmMenu_CallbackFunc_TypeInfo),
          FriendOperationConfirmMenu_CallbackFunc___ctor(
            v8,
            (Il2CppObject *)this,
            Method_FriendRootComponent_SelectedFriendAcceptConfirm__,
            0LL),
          !operationConfirmMenu) )
    {
      sub_1B00F28(operationItemListViewManager, method);
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

  if ( (byte_48E6B80 & 1) == 0 )
  {
    sub_1B00CCC(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo, method);
    sub_1B00CCC(&Method_FriendRootComponent_SelectedFriendCancelConfirm__, v4);
    byte_48E6B80 = 1;
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
          v8 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_1B00F18(FriendOperationConfirmMenu_CallbackFunc_TypeInfo),
          FriendOperationConfirmMenu_CallbackFunc___ctor(
            v8,
            (Il2CppObject *)this,
            Method_FriendRootComponent_SelectedFriendCancelConfirm__,
            0LL),
          !operationConfirmMenu) )
    {
      sub_1B00F28(operationItemListViewManager, method);
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

  if ( (byte_48E6B78 & 1) == 0 )
  {
    sub_1B00CCC(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo, method);
    sub_1B00CCC(&FriendWarningDialog_CallbackFunc_TypeInfo, v3);
    sub_1B00CCC(&Method_DataManager_GetMasterData_TblFriendMaster___, v4);
    sub_1B00CCC(&Method_FriendRootComponent_EndMaxFriendWarningOfferConfirm__, v5);
    sub_1B00CCC(&Method_FriendRootComponent_SelectedFriendOfferConfirm__, v6);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_48E6B78 = 1;
  }
  state = this->fields.state;
  if ( state == 4 )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_27;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_TblFriendMaster___);
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
          v14 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_1B00F18(FriendOperationConfirmMenu_CallbackFunc_TypeInfo);
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
      sub_1B00F28(Instance, v11);
    }
LABEL_24:
    this->fields.state = 29;
    friendWarningDialog = this->fields.friendWarningDialog;
    v22 = (FriendWarningDialog_CallbackFunc_o *)sub_1B00F18(FriendWarningDialog_CallbackFunc_TypeInfo);
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_TblFriendMaster___);
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
    v14 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_1B00F18(FriendOperationConfirmMenu_CallbackFunc_TypeInfo);
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

  if ( (byte_48E6B7D & 1) == 0 )
  {
    sub_1B00CCC(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo, method);
    sub_1B00CCC(&Method_FriendRootComponent_SelectedFriendRejectConfirm__, v4);
    byte_48E6B7D = 1;
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
          v8 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_1B00F18(FriendOperationConfirmMenu_CallbackFunc_TypeInfo),
          FriendOperationConfirmMenu_CallbackFunc___ctor(
            v8,
            (Il2CppObject *)this,
            Method_FriendRootComponent_SelectedFriendRejectConfirm__,
            0LL),
          !operationConfirmMenu) )
    {
      sub_1B00F28(operationItemListViewManager, method);
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

  if ( (byte_48E6B83 & 1) == 0 )
  {
    sub_1B00CCC(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo, method);
    sub_1B00CCC(&Method_FriendRootComponent_SelectedFriendRemoveConfirm__, v4);
    byte_48E6B83 = 1;
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
          v8 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_1B00F18(FriendOperationConfirmMenu_CallbackFunc_TypeInfo),
          FriendOperationConfirmMenu_CallbackFunc___ctor(
            v8,
            (Il2CppObject *)this,
            Method_FriendRootComponent_SelectedFriendRemoveConfirm__,
            0LL),
          !operationConfirmMenu) )
    {
      sub_1B00F28(operationItemListViewManager, method);
    }
    FriendOperationConfirmMenu__Open(operationConfirmMenu, 5, dragParentObject, v8, 0LL);
  }
}


void __fastcall FriendRootComponent__SelectSearchFriend(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_48E6B71 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_5409/*"END_ACTION"*/, method);
    byte_48E6B71 = 1;
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
      sub_1B00F28(0LL, method);
    PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_5409/*"END_ACTION"*/, 0LL);
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
  int32_t v10; // w2
  int32_t v11; // w3
  const MethodInfo *v12; // x2

  if ( (byte_48E6B69 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, method);
    sub_1B00CCC(&Method_FriendRootComponent_OnMoveEnd__, v3);
    sub_1B00CCC(&StringLiteral_5409/*"END_ACTION"*/, v4);
    byte_48E6B69 = 1;
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
            v9 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
            System_Action___ctor(v9, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0LL);
            if ( v8 )
            {
              v8->fields.callbackFunc2 = v9;
              sub_1B00C70((ServantStatusBattleListViewItem_o *)&v8->fields.callbackFunc2, (int32_t)v9, v10, v11);
              FriendOperationItemListViewManager__SetMode_45050616(v8, 1, v12);
              return;
            }
          }
        }
      }
    }
LABEL_12:
    sub_1B00F28(operationItemListViewManager, method);
  }
  operationItemListViewManager = (UnityEngine_Component_o *)this->fields.myFSM;
  if ( !operationItemListViewManager )
    goto LABEL_12;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)operationItemListViewManager, (System_String_o *)StringLiteral_5409/*"END_ACTION"*/, 0LL);
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
  int32_t v10; // w2
  int32_t v11; // w3
  const MethodInfo *v12; // x2

  if ( (byte_48E6B6B & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, method);
    sub_1B00CCC(&Method_FriendRootComponent_OnMoveEnd__, v3);
    byte_48E6B6B = 1;
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
          v9 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo),
          System_Action___ctor(v9, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0LL),
          !v8) )
    {
LABEL_11:
      sub_1B00F28(operationItemListViewManager, v4);
    }
    v8->fields.callbackFunc2 = v9;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&v8->fields.callbackFunc2, (int32_t)v9, v10, v11);
    FriendOperationItemListViewManager__SetMode_45050616(v8, 1, v12);
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
  int32_t v10; // w2
  int32_t v11; // w3
  const MethodInfo *v12; // x2

  if ( (byte_48E6B6D & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, method);
    sub_1B00CCC(&Method_FriendRootComponent_OnMoveEnd__, v3);
    sub_1B00CCC(&StringLiteral_5409/*"END_ACTION"*/, v4);
    byte_48E6B6D = 1;
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
            v9 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
            System_Action___ctor(v9, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0LL);
            if ( v8 )
            {
              v8->fields.callbackFunc2 = v9;
              sub_1B00C70((ServantStatusBattleListViewItem_o *)&v8->fields.callbackFunc2, (int32_t)v9, v10, v11);
              FriendOperationItemListViewManager__SetMode_45050616(v8, 1, v12);
              return;
            }
          }
        }
      }
    }
LABEL_12:
    sub_1B00F28(operationItemListViewManager, method);
  }
  operationItemListViewManager = (UnityEngine_Component_o *)this->fields.myFSM;
  if ( !operationItemListViewManager )
    goto LABEL_12;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)operationItemListViewManager, (System_String_o *)StringLiteral_5409/*"END_ACTION"*/, 0LL);
}


void __fastcall FriendRootComponent__SelectShowSearch(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *operationItemListViewManager; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  struct FriendOperationItemListViewManager_o *v7; // x20
  struct System_String_o *selectFriendCode; // x1
  const MethodInfo *v9; // x3
  FriendSearchMenu_o *friendSearchMenu; // x20
  System_Action_o *v11; // x21
  const MethodInfo *v12; // x2
  struct FriendOperationItemListViewManager_o *v13; // x20
  System_Action_o *v14; // x21
  int32_t v15; // w2
  int32_t v16; // w3
  const MethodInfo *v17; // x2

  if ( (byte_48E6B6F & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, method);
    sub_1B00CCC(&Method_FriendRootComponent_OnMoveEnd__, v3);
    byte_48E6B6F = 1;
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
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&v7->fields.friendCode, (int32_t)selectFriendCode, v5, v6);
    FriendOperationItemListViewManager__CreateList(v7, 0, 0, v9);
    this->fields.state = 17;
    friendSearchMenu = this->fields.friendSearchMenu;
    v11 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
    System_Action___ctor(v11, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0LL);
    if ( !friendSearchMenu
      || (FriendSearchMenu__Close_45076056(friendSearchMenu, v11, v12),
          v13 = this->fields.operationItemListViewManager,
          v14 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo),
          System_Action___ctor(v14, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0LL),
          !v13) )
    {
LABEL_11:
      sub_1B00F28(operationItemListViewManager, method);
    }
    v13->fields.callbackFunc2 = v14;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&v13->fields.callbackFunc2, (int32_t)v14, v15, v16);
    FriendOperationItemListViewManager__SetMode_45050616(v13, 1, v17);
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

  if ( (byte_48E6B75 & 1) == 0 )
  {
    sub_1B00CCC(&ServantStatusDialog_EndDelegate_TypeInfo, servantLeaderInfo);
    sub_1B00CCC(&Method_FriendRootComponent_EndShowServant__, v5);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_48E6B75 = 1;
  }
  state = this->fields.state;
  if ( state <= 0x13 && ((1 << state) & 0x84210) != 0 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v9 = (ServantStatusDialog_EndDelegate_o *)sub_1B00F18(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(v9, (Il2CppObject *)this, Method_FriendRootComponent_EndShowServant__, 0LL);
    if ( !Instance )
      sub_1B00F28(v10, v11);
    if ( state == 4 )
      v12 = 4;
    else
      v12 = 5;
    CommonUI__OpenServantStatusDialog_29949204((CommonUI_o *)Instance, v12, servantLeaderInfo, v9, 0LL);
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

  if ( (byte_48E6B9F & 1) == 0 )
  {
    sub_1B00CCC(&ServantStatusDialog_EndDelegate_TypeInfo, equipInfo);
    sub_1B00CCC(&Method_FriendRootComponent_EndShowServantEquip__, v7);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    byte_48E6B9F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (ServantStatusDialog_EndDelegate_o *)sub_1B00F18(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(
    v10,
    (Il2CppObject *)this,
    Method_FriendRootComponent_EndShowServantEquip__,
    0LL);
  if ( !Instance )
    sub_1B00F28(v11, v12);
  CommonUI__OpenServantEquipStatusDialog_29952300((CommonUI_o *)Instance, statusKind, equipInfo, v10, 0LL, 0LL);
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

  if ( (byte_48E6BB0 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_8516/*"MENU_DECIDE"*/, isDecide);
    sub_1B00CCC(&StringLiteral_8515/*"MENU_CANCEL"*/, v5);
    byte_48E6BB0 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1B00F28(0LL, isDecide);
  v7 = &StringLiteral_8516/*"MENU_DECIDE"*/;
  if ( !isDecide )
    v7 = &StringLiteral_8515/*"MENU_CANCEL"*/;
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

  if ( (byte_48E6BAA & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_8516/*"MENU_DECIDE"*/, isDecide);
    sub_1B00CCC(&StringLiteral_8515/*"MENU_CANCEL"*/, v5);
    byte_48E6BAA = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1B00F28(0LL, isDecide);
  v7 = &StringLiteral_8516/*"MENU_DECIDE"*/;
  if ( !isDecide )
    v7 = &StringLiteral_8515/*"MENU_CANCEL"*/;
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

  if ( (byte_48E6BA6 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_8516/*"MENU_DECIDE"*/, isDecide);
    sub_1B00CCC(&StringLiteral_8515/*"MENU_CANCEL"*/, v5);
    byte_48E6BA6 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1B00F28(0LL, isDecide);
  v7 = &StringLiteral_8516/*"MENU_DECIDE"*/;
  if ( !isDecide )
    v7 = &StringLiteral_8515/*"MENU_CANCEL"*/;
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

  if ( (byte_48E6BA8 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_8516/*"MENU_DECIDE"*/, isDecide);
    sub_1B00CCC(&StringLiteral_8515/*"MENU_CANCEL"*/, v5);
    byte_48E6BA8 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1B00F28(0LL, isDecide);
  v7 = &StringLiteral_8516/*"MENU_DECIDE"*/;
  if ( !isDecide )
    v7 = &StringLiteral_8515/*"MENU_CANCEL"*/;
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

  if ( (byte_48E6BA5 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_8516/*"MENU_DECIDE"*/, isDecide);
    sub_1B00CCC(&StringLiteral_8515/*"MENU_CANCEL"*/, v5);
    byte_48E6BA5 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1B00F28(0LL, isDecide);
  v7 = &StringLiteral_8516/*"MENU_DECIDE"*/;
  if ( !isDecide )
    v7 = &StringLiteral_8515/*"MENU_CANCEL"*/;
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

  if ( (byte_48E6BA7 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_8516/*"MENU_DECIDE"*/, isDecide);
    sub_1B00CCC(&StringLiteral_8515/*"MENU_CANCEL"*/, v5);
    byte_48E6BA7 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1B00F28(0LL, isDecide);
  v7 = &StringLiteral_8516/*"MENU_DECIDE"*/;
  if ( !isDecide )
    v7 = &StringLiteral_8515/*"MENU_CANCEL"*/;
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

  if ( (byte_48E6BA9 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_8516/*"MENU_DECIDE"*/, isDecide);
    sub_1B00CCC(&StringLiteral_8515/*"MENU_CANCEL"*/, v5);
    byte_48E6BA9 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1B00F28(0LL, isDecide);
  v7 = &StringLiteral_8516/*"MENU_DECIDE"*/;
  if ( !isDecide )
    v7 = &StringLiteral_8515/*"MENU_CANCEL"*/;
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
      sub_1B00F28(modeButtonParent, v5);
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
  if ( (byte_48E6B73 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, method);
    sub_1B00CCC(&FriendSearchResultMenu_CallbackFunc_TypeInfo, v3);
    sub_1B00CCC(&FriendSearchMenu_CallbackFunc_TypeInfo, v4);
    sub_1B00CCC(&Method_FriendRootComponent_OnSelectOffer__, v5);
    sub_1B00CCC(&Method_FriendRootComponent_OnSelectSearchFriend__, v6);
    sub_1B00CCC(&Method_FriendRootComponent_ShowSearchResult__, v7);
    this = (FriendRootComponent_o *)sub_1B00CCC(&StringLiteral_5409/*"END_ACTION"*/, v8);
    byte_48E6B73 = 1;
  }
  if ( v2->fields.state == 23 )
  {
    friendSearchResultMenu = v2->fields.friendSearchResultMenu;
    if ( !friendSearchResultMenu )
      goto LABEL_14;
    if ( friendSearchResultMenu->fields.isOpen )
    {
      v10 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)v2, Method_FriendRootComponent_ShowSearchResult__, 0LL);
      FriendSearchResultMenu__Close_45078120(friendSearchResultMenu, v10, v11);
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
    v16 = (FriendSearchResultMenu_CallbackFunc_o *)sub_1B00F18(FriendSearchResultMenu_CallbackFunc_TypeInfo);
    FriendSearchResultMenu_CallbackFunc___ctor(v16, (Il2CppObject *)v2, Method_FriendRootComponent_OnSelectOffer__, v17);
    if ( !v14
      || (FriendSearchResultMenu__Open(v14, selectFriendEntity, currentCursor, v16, v18),
          friendSearchMenu = v2->fields.friendSearchMenu,
          v20 = (FriendSearchMenu_CallbackFunc_o *)sub_1B00F18(FriendSearchMenu_CallbackFunc_TypeInfo),
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
      sub_1B00F28(this, method);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_5409/*"END_ACTION"*/, 0LL);
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
  if ( (byte_48E6B74 & 1) == 0 )
  {
    sub_1B00CCC(&FriendSearchResultMenu_CallbackFunc_TypeInfo, method);
    sub_1B00CCC(&FriendSearchMenu_CallbackFunc_TypeInfo, v4);
    sub_1B00CCC(&Method_FriendRootComponent_OnSelectOffer__, v5);
    this = (FriendRootComponent_o *)sub_1B00CCC(&Method_FriendRootComponent_OnSelectSearchFriend__, v6);
    byte_48E6B74 = 1;
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
      v11 = (FriendSearchResultMenu_CallbackFunc_o *)sub_1B00F18(FriendSearchResultMenu_CallbackFunc_TypeInfo);
      FriendSearchResultMenu_CallbackFunc___ctor(
        v11,
        (Il2CppObject *)v3,
        Method_FriendRootComponent_OnSelectOffer__,
        v12);
      FriendSearchResultMenu__Open(friendSearchResultMenu, selectFriendEntity, currentCursor, v11, v13);
    }
    else
    {
      FriendSearchResultMenu__Close_45078120(v3->fields.friendSearchResultMenu, 0LL, v2);
    }
  }
  friendSearchMenu = v3->fields.friendSearchMenu;
  v15 = (FriendSearchMenu_CallbackFunc_o *)sub_1B00F18(FriendSearchMenu_CallbackFunc_TypeInfo);
  FriendSearchMenu_CallbackFunc___ctor(v15, (Il2CppObject *)v3, Method_FriendRootComponent_OnSelectSearchFriend__, v16);
  if ( !friendSearchMenu )
LABEL_11:
    sub_1B00F28(this, method);
  FriendSearchMenu__Open(friendSearchMenu, v15, 0, v17);
}


void __fastcall FriendRootComponent___OnClickBack_b__96_0(
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
  if ( (byte_48E6BC0 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_string__TypeInfo, result);
    sub_1B00CCC(&Method_FriendRootComponent__OnClickBack_b__96_1__, v5);
    this = (FriendRootComponent_o *)sub_1B00CCC(&StringLiteral_21923/*"ok"*/, v6);
    byte_48E6BC0 = 1;
  }
  if ( !result )
    sub_1B00F28(this, result);
  if ( System_String__Equals_60334064(result, (System_String_o *)StringLiteral_21923/*"ok"*/, 0LL) )
  {
    v7 = (System_Action_object__o *)sub_1B00F18(System_Action_string__TypeInfo);
    System_Action_object____ctor(v7, v4, Method_FriendRootComponent__OnClickBack_b__96_1__, 0LL);
    FriendRootComponent__FriendLockRequst((FriendRootComponent_o *)v4, (System_Action_string__o *)v7, v8);
  }
}


void __fastcall FriendRootComponent___OnClickBack_b__96_1(
        FriendRootComponent_o *this,
        System_String_o *res,
        const MethodInfo *method)
{
  FriendRootComponent_o *v4; // x19
  __int64 v5; // x1

  v4 = this;
  if ( (byte_48E6BC1 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_21923/*"ok"*/, res);
    this = (FriendRootComponent_o *)sub_1B00CCC(&StringLiteral_3488/*"CLICK_BACK"*/, v5);
    byte_48E6BC1 = 1;
  }
  if ( !res )
    goto LABEL_9;
  if ( System_String__Equals_60334064(res, (System_String_o *)StringLiteral_21923/*"ok"*/, 0LL) )
  {
    this = (FriendRootComponent_o *)v4->fields.friendSearchMenu;
    if ( this )
    {
      FriendSearchMenu__BlockInput((FriendSearchMenu_o *)this, (const MethodInfo *)res);
      this = (FriendRootComponent_o *)v4->fields.myFSM;
      if ( this )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3488/*"CLICK_BACK"*/, 0LL);
        return;
      }
    }
LABEL_9:
    sub_1B00F28(this, res);
  }
}


void __fastcall FriendRootComponent___OnClickModeUserDetail_b__98_0(
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
  if ( (byte_48E6BC4 & 1) == 0 )
  {
    sub_1B00CCC(&Method_FriendRootComponent__OnClickModeUserDetail_b__98_0__, res);
    this = (FriendRootComponent_o *)sub_1B00CCC(&StringLiteral_21923/*"ok"*/, v5);
    byte_48E6BC4 = 1;
  }
  if ( !res )
    sub_1B00F28(this, res);
  if ( System_String__Equals_60334064(res, (System_String_o *)StringLiteral_21923/*"ok"*/, 0LL) )
  {
    v6 = Method_FriendRootComponent__OnClickModeUserDetail_b__98_0__;
    if ( (*((_BYTE *)Method_FriendRootComponent__OnClickModeUserDetail_b__98_0__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1B00CE4(Method_FriendRootComponent__OnClickModeUserDetail_b__98_0__);
    v7 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    v4->fields.currentModeKind = 0;
    FriendRootComponent__RefreshInfo(v4, v8);
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
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  FriendRootComponent_o *v13; // x0
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x1
  struct ClassButtonControlComponent_o *classButtonControl; // x8

  v4 = this;
  if ( (byte_48E6BC5 & 1) == 0 )
  {
    sub_1B00CCC(&Method_FriendRootComponent__OnClickTabFriend_b__105_0__, res);
    sub_1B00CCC(&StringLiteral_21923/*"ok"*/, v5);
    this = (FriendRootComponent_o *)sub_1B00CCC(&StringLiteral_3533/*"CLICK_TAB"*/, v6);
    byte_48E6BC5 = 1;
  }
  if ( !res )
    goto LABEL_24;
  this = (FriendRootComponent_o *)System_String__Equals_60334064(res, (System_String_o *)StringLiteral_21923/*"ok"*/, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    return;
  state = v4->fields.state;
  if ( state <= 9 )
  {
    if ( state != 4 && state != 9 )
      return;
LABEL_18:
    v11 = Method_FriendRootComponent__OnClickTabFriend_b__105_0__;
    if ( (*((_BYTE *)Method_FriendRootComponent__OnClickTabFriend_b__105_0__ + 83) & 2) != 0 )
      v11 = (_QWORD *)sub_1B00CE4(Method_FriendRootComponent__OnClickTabFriend_b__105_0__);
    v12 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v11, v11[4]);
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
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3533/*"CLICK_TAB"*/, 0LL);
        return;
      }
    }
LABEL_24:
    sub_1B00F28(this, res);
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


void __fastcall FriendRootComponent___OnClickTabOffered_b__106_0(
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
  if ( (byte_48E6BC6 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_string__TypeInfo, result);
    sub_1B00CCC(&Method_FriendRootComponent__OnClickTabOffered_b__106_1__, v5);
    this = (FriendRootComponent_o *)sub_1B00CCC(&StringLiteral_21923/*"ok"*/, v6);
    byte_48E6BC6 = 1;
  }
  if ( !result )
    sub_1B00F28(this, result);
  if ( System_String__Equals_60334064(result, (System_String_o *)StringLiteral_21923/*"ok"*/, 0LL) )
  {
    v7 = (System_Action_object__o *)sub_1B00F18(System_Action_string__TypeInfo);
    System_Action_object____ctor(v7, v4, (intptr_t)Method_FriendRootComponent__OnClickTabOffered_b__106_1__, 0LL);
    FriendRootComponent__FriendLockRequst((FriendRootComponent_o *)v4, (System_Action_string__o *)v7, v8);
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
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  FriendRootComponent_o *v13; // x0
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x1
  struct ClassButtonControlComponent_o *classButtonControl; // x8

  v4 = this;
  if ( (byte_48E6BC7 & 1) == 0 )
  {
    sub_1B00CCC(&Method_FriendRootComponent__OnClickTabOffered_b__106_1__, res);
    sub_1B00CCC(&StringLiteral_21923/*"ok"*/, v5);
    this = (FriendRootComponent_o *)sub_1B00CCC(&StringLiteral_3533/*"CLICK_TAB"*/, v6);
    byte_48E6BC7 = 1;
  }
  if ( !res )
    goto LABEL_24;
  this = (FriendRootComponent_o *)System_String__Equals_60334064(res, (System_String_o *)StringLiteral_21923/*"ok"*/, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    return;
  state = v4->fields.state;
  if ( state <= 9 )
  {
    if ( state != 4 && state != 9 )
      return;
LABEL_18:
    v11 = Method_FriendRootComponent__OnClickTabOffered_b__106_1__;
    if ( (*((_BYTE *)Method_FriendRootComponent__OnClickTabOffered_b__106_1__ + 83) & 2) != 0 )
      v11 = (_QWORD *)sub_1B00CE4(Method_FriendRootComponent__OnClickTabOffered_b__106_1__);
    v12 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v11, v11[4]);
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
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3533/*"CLICK_TAB"*/, 0LL);
        return;
      }
    }
LABEL_24:
    sub_1B00F28(this, res);
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


void __fastcall FriendRootComponent___OnClickTabSearch_b__107_0(
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
  if ( (byte_48E6BC8 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_string__TypeInfo, result);
    sub_1B00CCC(&Method_FriendRootComponent__OnClickTabSearch_b__107_1__, v5);
    this = (FriendRootComponent_o *)sub_1B00CCC(&StringLiteral_21923/*"ok"*/, v6);
    byte_48E6BC8 = 1;
  }
  if ( !result )
    sub_1B00F28(this, result);
  if ( System_String__Equals_60334064(result, (System_String_o *)StringLiteral_21923/*"ok"*/, 0LL) )
  {
    v7 = (System_Action_object__o *)sub_1B00F18(System_Action_string__TypeInfo);
    System_Action_object____ctor(v7, v4, (intptr_t)Method_FriendRootComponent__OnClickTabSearch_b__107_1__, 0LL);
    FriendRootComponent__FriendLockRequst((FriendRootComponent_o *)v4, (System_Action_string__o *)v7, v8);
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
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  FriendRootComponent_o *v10; // x0
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x1
  struct ClassButtonControlComponent_o *classButtonControl; // x8

  v4 = this;
  if ( (byte_48E6BC9 & 1) == 0 )
  {
    sub_1B00CCC(&Method_FriendRootComponent__OnClickTabSearch_b__107_1__, res);
    sub_1B00CCC(&StringLiteral_21923/*"ok"*/, v5);
    this = (FriendRootComponent_o *)sub_1B00CCC(&StringLiteral_3533/*"CLICK_TAB"*/, v6);
    byte_48E6BC9 = 1;
  }
  if ( !res )
    goto LABEL_17;
  if ( !System_String__Equals_60334064(res, (System_String_o *)StringLiteral_21923/*"ok"*/, 0LL) )
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
    v8 = Method_FriendRootComponent__OnClickTabSearch_b__107_1__;
    if ( (*((_BYTE *)Method_FriendRootComponent__OnClickTabSearch_b__107_1__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1B00CE4(Method_FriendRootComponent__OnClickTabSearch_b__107_1__);
    v9 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v8, v8[4]);
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
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3533/*"CLICK_TAB"*/, 0LL);
        return;
      }
    }
LABEL_17:
    sub_1B00F28(this, res);
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
  const MethodInfo *v11; // x2
  FriendOperationItemListViewItem_o *Item; // x0
  struct OtherUserGameEntity_o *otherUserGameEntity; // x21
  NetworkManager_ResultCallbackFunc_o *v14; // x20

  v4 = this;
  if ( (byte_48E6BCA & 1) == 0 )
  {
    sub_1B00CCC(&Method_FriendRootComponent_EndRequestFollowRemove__, res);
    sub_1B00CCC(&Method_NetworkManager_getRequest_FollowdRemoveRequest___, v5);
    sub_1B00CCC(&NetworkManager_TypeInfo, v6);
    sub_1B00CCC(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1B00CCC(&StringLiteral_21923/*"ok"*/, v9);
    this = (FriendRootComponent_o *)sub_1B00CCC(&StringLiteral_10883/*"REQUEST_NG"*/, v10);
    byte_48E6BCA = 1;
  }
  if ( !res )
    goto LABEL_15;
  if ( System_String__Equals_60334064(res, (System_String_o *)StringLiteral_21923/*"ok"*/, 0LL) )
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
        this = (FriendRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( this )
        {
          CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)this, 0, 0LL);
          v14 = (NetworkManager_ResultCallbackFunc_o *)sub_1B00F18(NetworkManager_ResultCallbackFunc_TypeInfo);
          NetworkManager_ResultCallbackFunc___ctor(
            v14,
            (Il2CppObject *)v4,
            Method_FriendRootComponent_EndRequestFollowRemove__,
            0LL);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          this = (FriendRootComponent_o *)NetworkManager__getRequest_object_(
                                            v14,
                                            (const MethodInfo_2DD4818 *)Method_NetworkManager_getRequest_FollowdRemoveRequest___);
          if ( this )
          {
            FollowdRemoveRequest__beginRequest((FollowdRemoveRequest_o *)this, otherUserGameEntity->fields.userId, 0LL);
            return;
          }
        }
LABEL_15:
        sub_1B00F28(this, res);
      }
    }
  }
  this = (FriendRootComponent_o *)v4->fields.myFSM;
  if ( !this )
    goto LABEL_15;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_10883/*"REQUEST_NG"*/, 0LL);
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
  const MethodInfo *v10; // x2
  FriendOperationItemListViewItem_o *Item; // x0
  struct OtherUserGameEntity_o *otherUserGameEntity; // x21
  NetworkManager_ResultCallbackFunc_o *v13; // x20

  v4 = this;
  if ( (byte_48E6BBE & 1) == 0 )
  {
    sub_1B00CCC(&Method_FriendRootComponent_EndRequestFriend__, res);
    sub_1B00CCC(&Method_NetworkManager_getRequest_FriendOfferRequest___, v5);
    sub_1B00CCC(&NetworkManager_TypeInfo, v6);
    sub_1B00CCC(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    sub_1B00CCC(&StringLiteral_21923/*"ok"*/, v8);
    this = (FriendRootComponent_o *)sub_1B00CCC(&StringLiteral_10883/*"REQUEST_NG"*/, v9);
    byte_48E6BBE = 1;
  }
  if ( !res )
    goto LABEL_14;
  if ( System_String__Equals_60334064(res, (System_String_o *)StringLiteral_21923/*"ok"*/, 0LL) )
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
        v13 = (NetworkManager_ResultCallbackFunc_o *)sub_1B00F18(NetworkManager_ResultCallbackFunc_TypeInfo);
        NetworkManager_ResultCallbackFunc___ctor(
          v13,
          (Il2CppObject *)v4,
          Method_FriendRootComponent_EndRequestFriend__,
          0LL);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        this = (FriendRootComponent_o *)NetworkManager__getRequest_object_(
                                          v13,
                                          (const MethodInfo_2DD4818 *)Method_NetworkManager_getRequest_FriendOfferRequest___);
        if ( this )
        {
          FriendOfferRequest__beginRequest((FriendOfferRequest_o *)this, otherUserGameEntity->fields.userId, 0LL);
          return;
        }
LABEL_14:
        sub_1B00F28(this, res);
      }
    }
  }
  this = (FriendRootComponent_o *)v4->fields.myFSM;
  if ( !this )
    goto LABEL_14;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_10883/*"REQUEST_NG"*/, 0LL);
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
  const MethodInfo *v11; // x2
  FriendOperationItemListViewItem_o *Item; // x0
  struct OtherUserGameEntity_o *otherUserGameEntity; // x21
  NetworkManager_ResultCallbackFunc_o *v14; // x20

  v4 = this;
  if ( (byte_48E6BBF & 1) == 0 )
  {
    sub_1B00CCC(&Method_FriendRootComponent_EndRequestFriend__, res);
    sub_1B00CCC(&Method_NetworkManager_getRequest_FriendRemoveRequest___, v5);
    sub_1B00CCC(&NetworkManager_TypeInfo, v6);
    sub_1B00CCC(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1B00CCC(&StringLiteral_21923/*"ok"*/, v9);
    this = (FriendRootComponent_o *)sub_1B00CCC(&StringLiteral_10883/*"REQUEST_NG"*/, v10);
    byte_48E6BBF = 1;
  }
  if ( !res )
    goto LABEL_15;
  if ( System_String__Equals_60334064(res, (System_String_o *)StringLiteral_21923/*"ok"*/, 0LL) )
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
        this = (FriendRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( this )
        {
          CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)this, 0, 0LL);
          v14 = (NetworkManager_ResultCallbackFunc_o *)sub_1B00F18(NetworkManager_ResultCallbackFunc_TypeInfo);
          NetworkManager_ResultCallbackFunc___ctor(
            v14,
            (Il2CppObject *)v4,
            Method_FriendRootComponent_EndRequestFriend__,
            0LL);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          this = (FriendRootComponent_o *)NetworkManager__getRequest_object_(
                                            v14,
                                            (const MethodInfo_2DD4818 *)Method_NetworkManager_getRequest_FriendRemoveRequest___);
          if ( this )
          {
            FriendRemoveRequest__beginRequest((FriendRemoveRequest_o *)this, otherUserGameEntity->fields.userId, 0LL);
            return;
          }
        }
LABEL_15:
        sub_1B00F28(this, res);
      }
    }
  }
  this = (FriendRootComponent_o *)v4->fields.myFSM;
  if ( !this )
    goto LABEL_15;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_10883/*"REQUEST_NG"*/, 0LL);
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
  System_Action_object__o *v8; // x20
  const MethodInfo *v9; // x2

  v4 = this;
  if ( (byte_48E6BC2 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_string__TypeInfo, result);
    sub_1B00CCC(&Method_FriendRootComponent__afterMainMenubarSelect_b__97_1__, v5);
    sub_1B00CCC(&StringLiteral_21923/*"ok"*/, v6);
    this = (FriendRootComponent_o *)sub_1B00CCC(&StringLiteral_10883/*"REQUEST_NG"*/, v7);
    byte_48E6BC2 = 1;
  }
  if ( !result )
    goto LABEL_8;
  if ( System_String__Equals_60334064(result, (System_String_o *)StringLiteral_21923/*"ok"*/, 0LL) )
  {
    v8 = (System_Action_object__o *)sub_1B00F18(System_Action_string__TypeInfo);
    System_Action_object____ctor(
      v8,
      (Il2CppObject *)v4,
      Method_FriendRootComponent__afterMainMenubarSelect_b__97_1__,
      0LL);
    FriendRootComponent__FriendLockRequst(v4, (System_Action_string__o *)v8, v9);
    return;
  }
  this = (FriendRootComponent_o *)v4->fields.myFSM;
  if ( !this )
LABEL_8:
    sub_1B00F28(this, result);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_10883/*"REQUEST_NG"*/, 0LL);
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
  if ( (byte_48E6BC3 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_10885/*"REQUEST_OK"*/, res);
    sub_1B00CCC(&StringLiteral_21923/*"ok"*/, v5);
    this = (FriendRootComponent_o *)sub_1B00CCC(&StringLiteral_10883/*"REQUEST_NG"*/, v6);
    byte_48E6BC3 = 1;
  }
  if ( !res
    || (this = (FriendRootComponent_o *)System_String__Equals_60334064(res, (System_String_o *)StringLiteral_21923/*"ok"*/, 0LL),
        (myFSM = v4->fields.myFSM) == 0LL) )
  {
    sub_1B00F28(this, res);
  }
  v8 = &StringLiteral_10885/*"REQUEST_OK"*/;
  if ( ((unsigned __int8)this & 1) == 0 )
    v8 = &StringLiteral_10883/*"REQUEST_NG"*/;
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)*v8, 0LL);
}


void __fastcall FriendRootComponent__afterMainMenubarSelect(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  FriendRootComponent_messageRequestCallback_o *v4; // x20
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x2

  if ( (byte_48E6B94 & 1) == 0 )
  {
    sub_1B00CCC(&Method_FriendRootComponent__afterMainMenubarSelect_b__97_0__, method);
    sub_1B00CCC(&FriendRootComponent_messageRequestCallback_TypeInfo, v3);
    byte_48E6B94 = 1;
  }
  v4 = (FriendRootComponent_messageRequestCallback_o *)sub_1B00F18(FriendRootComponent_messageRequestCallback_TypeInfo);
  FriendRootComponent_messageRequestCallback___ctor(
    v4,
    (Il2CppObject *)this,
    Method_FriendRootComponent__afterMainMenubarSelect_b__97_0__,
    v5);
  FriendRootComponent__messageDispChangeRequest(this, v4, v6);
}


void __fastcall FriendRootComponent__beginFinish(FriendRootComponent_o *this, const MethodInfo *method)
{
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_48E6B64 & 1) == 0 )
  {
    sub_1B00CCC(&RandomLimitCountManager_TypeInfo, method);
    byte_48E6B64 = 1;
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
    sub_1B00F28(operationItemListViewManager, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)operationItemListViewManager, 0, 0LL);
  this->fields.state = 0;
  this->fields.selectFriendEntity = 0LL;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.selectFriendEntity, 0, v4, v5);
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  RandomLimitCountManager__set_EnableRandomLimitCount(0, 0LL);
}


void __fastcall FriendRootComponent__beginInitialize(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1
  UnityEngine_Component_o *bgTxtSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  ClassButtonControlComponent_o *classButtonControl; // x20
  ClassButtonControlComponent_CallbackFunc_o *v10; // x21

  if ( (byte_48E6B60 & 1) == 0 )
  {
    sub_1B00CCC(&ClassButtonControlComponent_CallbackFunc_TypeInfo, method);
    sub_1B00CCC(&Method_FriendRootComponent_changeClass__, v3);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4);
    byte_48E6B60 = 1;
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
  v10 = (ClassButtonControlComponent_CallbackFunc_o *)sub_1B00F18(ClassButtonControlComponent_CallbackFunc_TypeInfo);
  ClassButtonControlComponent_CallbackFunc___ctor(
    v10,
    (Il2CppObject *)this,
    (intptr_t)Method_FriendRootComponent_changeClass__,
    0LL);
  if ( !classButtonControl
    || (ClassButtonControlComponent__init(classButtonControl, v10, 0, 0, 0, 0LL),
        (bgTxtSprite = (UnityEngine_Component_o *)this->fields.operationItemListViewManager) == 0LL)
    || (FriendOperationItemListViewManager__SetupClassBoardInfo((FriendOperationItemListViewManager_o *)bgTxtSprite, v6),
        (bgTxtSprite = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
LABEL_9:
    sub_1B00F28(bgTxtSprite, v6);
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
  __int64 v9; // x1
  CommonUI_o *v10; // x20
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_48E6B65 & 1) == 0 )
  {
    sub_1B00CCC(&AvalonSceneManager_TypeInfo, data);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B00CCC(&SupportInfoJump_TypeInfo, v6);
    byte_48E6B65 = 1;
  }
  if ( data
    && (methodPtr_low = LOBYTE(SupportInfoJump_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(data->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low)
    && (SupportInfoJump_c *)data->klass->_2.typeHierarchy[methodPtr_low - 1] == SupportInfoJump_TypeInfo )
  {
    this->fields.isReturnSupport = 1;
    Instance = (FriendOperationItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v10 = (CommonUI_o *)Instance;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    if ( !v10
      || (CommonUI__maskFadein(v10, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL),
          FriendRootComponent__RefreshTab(this, v11),
          (Instance = this->fields.operationItemListViewManager) == 0LL) )
    {
      sub_1B00F28(Instance, v9);
    }
    FriendOperationItemListViewManager__SetMode_45050616(Instance, 2, v12);
    SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 7, 39, 0LL);
    MainMenuBar__setMenuActive(1, 0LL, 0LL);
    SceneRootComponent__sendMessageStartUp((SceneRootComponent_o *)this, 0LL);
  }
  else
  {
    SceneRootComponent__beginResume_37369944((SceneRootComponent_o *)this, 0LL);
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
  int32_t v12; // w2
  int32_t v13; // w3
  NetworkManager_ResultCallbackFunc_o *v14; // x20

  if ( (byte_48E6B61 & 1) == 0 )
  {
    sub_1B00CCC(&BgmManager_TypeInfo, method);
    sub_1B00CCC(&Method_FriendRootComponent_EndFriendRequest__, v3);
    sub_1B00CCC(&Method_NetworkManager_getRequest_FriendTopRequest___, v4);
    sub_1B00CCC(&NetworkManager_TypeInfo, v5);
    sub_1B00CCC(&RandomLimitCountManager_TypeInfo, v6);
    sub_1B00CCC(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    sub_1B00CCC(&SoundManager_TypeInfo, v8);
    byte_48E6B61 = 1;
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
  TitleInfoControl__setBackBtnSprite_35990020(titleInfo, 1, 0, 0, 0LL);
  this->fields.state = 0;
  this->fields.currentModeKind = 0;
  this->fields.selectFriendEntity = 0LL;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.selectFriendEntity, 0, v12, v13);
  v14 = (NetworkManager_ResultCallbackFunc_o *)sub_1B00F18(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v14,
    (Il2CppObject *)this,
    Method_FriendRootComponent_EndFriendRequest__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  titleInfo = (TitleInfoControl_o *)NetworkManager__getRequest_object_(
                                      v14,
                                      (const MethodInfo_2DD4818 *)Method_NetworkManager_getRequest_FriendTopRequest___);
  if ( !titleInfo )
LABEL_15:
    sub_1B00F28(titleInfo, v10);
  RequestBase__beginRequest((RequestBase_o *)titleInfo, 0LL);
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

  if ( (byte_48E6B9E & 1) == 0 )
  {
    sub_1B00CCC(&Method_FriendRootComponent_changeClass__, *(_QWORD *)&classPos);
    byte_48E6B9E = 1;
  }
  v5 = Method_FriendRootComponent_changeClass__;
  if ( (*((_BYTE *)Method_FriendRootComponent_changeClass__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1B00CE4(Method_FriendRootComponent_changeClass__);
  v6 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    sub_1B00F28(0LL, v7);
  FriendOperationItemListViewManager__SetClassId(operationItemListViewManager, classPos, v8);
}


int32_t __fastcall FriendRootComponent__get_tabKind(FriendRootComponent_o *this, const MethodInfo *method)
{
  FriendRootComponent_c *v2; // x0

  if ( (byte_48E6B5F & 1) == 0 )
  {
    sub_1B00CCC(&FriendRootComponent_TypeInfo, method);
    byte_48E6B5F = 1;
  }
  v2 = FriendRootComponent_TypeInfo;
  if ( !FriendRootComponent_TypeInfo->_2.cctor_finished )
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
  int64_t v16; // x1
  int32_t v17; // w2
  int32_t v18; // w3
  __int64 v19; // x22
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t ItemSum; // w23
  System_Collections_Generic_List_long__o *v23; // x21
  System_Collections_Generic_List_long__o *v24; // x22
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

  if ( (byte_48E6B9C & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_long__Add__, callback);
    sub_1B00CCC(&Method_System_Collections_Generic_List_long__ToArray__, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_long___ctor__, v6);
    sub_1B00CCC(&System_Collections_Generic_List_long__TypeInfo, v7);
    sub_1B00CCC(&Method_NetworkManager_getRequest_FriendMessageHideSyncRequest___, v8);
    sub_1B00CCC(&NetworkManager_TypeInfo, v9);
    sub_1B00CCC(&NetworkManager_ResultCallbackFunc_TypeInfo, v10);
    sub_1B00CCC(&Method_FriendRootComponent___c__DisplayClass108_0__messageDispChangeRequest_b__0__, v11);
    sub_1B00CCC(&FriendRootComponent___c__DisplayClass108_0_TypeInfo, v12);
    sub_1B00CCC(&StringLiteral_21923/*"ok"*/, v13);
    byte_48E6B9C = 1;
  }
  v14 = sub_1B00F18(FriendRootComponent___c__DisplayClass108_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_35;
  *(_QWORD *)(v14 + 16) = this;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v14 + 16), (int32_t)this, v17, v18);
  *(_QWORD *)(v14 + 24) = callback;
  v19 = v14 + 24;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v14 + 24), (int32_t)callback, v20, v21);
  operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    goto LABEL_35;
  if ( LOBYTE(operationItemListViewManager[1].fields.emptyMessageLabel) )
  {
    ItemSum = ListViewManager__get_ItemSum(operationItemListViewManager, 0LL);
    v23 = (System_Collections_Generic_List_long__o *)sub_1B00F18(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v23,
      (const MethodInfo_33A91B0 *)Method_System_Collections_Generic_List_long___ctor__);
    v24 = (System_Collections_Generic_List_long__o *)sub_1B00F18(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v24,
      (const MethodInfo_33A91B0 *)Method_System_Collections_Generic_List_long___ctor__);
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
          v16 = *(_QWORD *)&dragParentObject->fields.m_CachedPtr;
          if ( LOBYTE(operationItemListViewManager->fields.SortObject) )
          {
            if ( !v23 )
              goto LABEL_35;
            items = v23->fields._items;
            v29 = Method_System_Collections_Generic_List_long__Add__;
            ++v23->fields._version;
            if ( !items )
              goto LABEL_35;
            size = v23->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              v35 = v29[4];
              v36 = v23;
LABEL_24:
              System_Collections_Generic_List_long___AddWithResize(
                v36,
                v16,
                *(const MethodInfo_33A9A04 **)(*(_QWORD *)(v35 + 192) + 112LL));
              continue;
            }
            v31 = &items->obj.klass + size;
            v23->fields._size = size + 1;
          }
          else
          {
            if ( !v24 )
              goto LABEL_35;
            v32 = v24->fields._items;
            v33 = Method_System_Collections_Generic_List_long__Add__;
            ++v24->fields._version;
            if ( !v32 )
              goto LABEL_35;
            v34 = v24->fields._size;
            if ( (unsigned int)v34 >= v32->max_length )
            {
              v35 = v33[4];
              v36 = v24;
              goto LABEL_24;
            }
            v31 = &v32->obj.klass + v34;
            v24->fields._size = v34 + 1;
          }
          v31[4] = (Il2CppClass *)v16;
        }
      }
    }
    v37 = (NetworkManager_ResultCallbackFunc_o *)sub_1B00F18(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v37,
      (Il2CppObject *)v14,
      Method_FriendRootComponent___c__DisplayClass108_0__messageDispChangeRequest_b__0__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    operationItemListViewManager = (ListViewManager_o *)NetworkManager__getRequest_object_(
                                                          v37,
                                                          (const MethodInfo_2DD4818 *)Method_NetworkManager_getRequest_FriendMessageHideSyncRequest___);
    if ( v24 )
    {
      v38 = (FriendMessageHideSyncRequest_o *)operationItemListViewManager;
      operationItemListViewManager = (ListViewManager_o *)System_Collections_Generic_List_long___ToArray(
                                                            v24,
                                                            (const MethodInfo_33AB4BC *)Method_System_Collections_Generic_List_long__ToArray__);
      if ( v23 )
      {
        v39 = (System_Int64_array *)operationItemListViewManager;
        operationItemListViewManager = (ListViewManager_o *)System_Collections_Generic_List_long___ToArray(
                                                              v23,
                                                              (const MethodInfo_33AB4BC *)Method_System_Collections_Generic_List_long__ToArray__);
        if ( v38 )
        {
          FriendMessageHideSyncRequest__beginRequest(v38, v39, (System_Int64_array *)operationItemListViewManager, 0LL);
          return;
        }
      }
    }
LABEL_35:
    sub_1B00F28(operationItemListViewManager, v16);
  }
  if ( *(_QWORD *)v19 )
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(*(_QWORD *)v19 + 24LL))(
      *(_QWORD *)(*(_QWORD *)v19 + 64LL),
      StringLiteral_21923/*"ok"*/,
      *(_QWORD *)(*(_QWORD *)v19 + 40LL));
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendRootComponent__set_tabKind(FriendRootComponent_o *this, int32_t value, const MethodInfo *method)
{
  FriendRootComponent_c *v4; // x0

  if ( (byte_48E6B5E & 1) == 0 )
  {
    sub_1B00CCC(&FriendRootComponent_TypeInfo, *(_QWORD *)&value);
    byte_48E6B5E = 1;
  }
  v4 = FriendRootComponent_TypeInfo;
  if ( !FriendRootComponent_TypeInfo->_2.cctor_finished )
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
  struct FriendRootComponent_messageRequestCallback_o *callback; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (operationItemListViewManager = _4__this->fields.operationItemListViewManager) == 0LL )
    sub_1B00F28(this, result);
  operationItemListViewManager->fields._isMessageApply_k__BackingField = 0;
  callback = this->fields.callback;
  if ( callback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))callback->fields.m_target)(
      callback->fields.original_method_info,
      result,
      *(_QWORD *)&callback->fields.extra_arg);
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
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  int32_t v9; // w21
  struct FriendRootComponent_o *_4__this; // x8

  if ( (byte_48E6BCB & 1) == 0 )
  {
    sub_1B00CCC(&Method_ActionExtensions_Call_string___, result);
    sub_1B00CCC(&StringLiteral_21923/*"ok"*/, v5);
    byte_48E6BCB = 1;
  }
  operationItemListViewManager = (FriendOperationItemListViewManager_o *)System_String__op_Equality(
                                                                           result,
                                                                           (System_String_o *)StringLiteral_21923/*"ok"*/,
                                                                           0LL);
  if ( ((unsigned __int8)operationItemListViewManager & 1) != 0 && this->fields.sum >= 1 )
  {
    v9 = 0;
    do
    {
      _4__this = this->fields.__4__this;
      if ( !_4__this || (operationItemListViewManager = _4__this->fields.operationItemListViewManager) == 0LL )
        sub_1B00F28(operationItemListViewManager, v7);
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
    (const MethodInfo_2CBB45C *)Method_ActionExtensions_Call_string___);
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
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B00D8C(v6) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = (Il2CppObject *)sub_19508C4;
LABEL_8:
      this->fields.m_target = v9;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v8 )
    {
      v9 = (Il2CppObject *)sub_19508A4;
      goto LABEL_8;
    }
    if ( !object )
    {
      v11 = sub_1B00F44(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B00DF4(v11, 0LL);
    }
  }
  v10 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v10;
LABEL_9:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_195085C;
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
  return (System_IAsyncResult_o *)sub_1B00C80(this, &v6, callback, object);
}


void __fastcall FriendRootComponent_messageRequestCallback__EndInvoke(
        FriendRootComponent_messageRequestCallback_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B00C84(result, 0LL, method);
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