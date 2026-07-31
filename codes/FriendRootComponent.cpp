void FriendRootComponent___cctor(const MethodInfo *method)
{
  if ( (byte_59330AC & 1) == 0 )
  {
    sub_21FFC50(&FriendRootComponent_TypeInfo);
    byte_59330AC = 1;
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

  if ( (byte_593309D & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_593309D = 1;
  }
  state = this->fields.state;
  switch ( state )
  {
    case ',':
      this->fields.state = 23;
      Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        CommonUI__CloseNotificationDialog(Instance, 0);
        goto LABEL_12;
      }
      goto LABEL_14;
    case '+':
      Instance = (CommonUI_o *)this->fields.friendWarningDialog;
      this->fields.state = 23;
      if ( Instance )
      {
        FriendWarningDialog__Close_39525768((FriendWarningDialog_o *)Instance, 0, v2);
        goto LABEL_12;
      }
LABEL_14:
      sub_21FFECC(Instance, method);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  __int64 v15; // x1
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  const MethodInfo *v17; // x2
  FriendSearchMenu_o *friendSearchMenu; // x20
  FriendSearchMenu_CallbackFunc_o *v19; // x21
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x1

  if ( (byte_59330A2 & 1) == 0 )
  {
    sub_21FFC50(&FriendSearchMenu_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_FriendRootComponent_OnSelectSearchFriend__);
    byte_59330A2 = 1;
  }
  if ( this->fields.state == 42 )
  {
    this->fields.state = 23;
    this->fields.selectFriendCode = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.selectFriendCode, 0, v2, v3, v4, v5, v6, v7);
    this->fields.selectFriendEntity = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.selectFriendEntity, 0, v9, v10, v11, v12, v13, v14);
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close(operationConfirmMenu, 0),
          (operationConfirmMenu = (FriendOperationConfirmMenu_o *)this->fields.friendSearchResultMenu) == 0)
      || (FriendSearchResultMenu__Close_39493796((FriendSearchResultMenu_o *)operationConfirmMenu, 0, v17),
          friendSearchMenu = this->fields.friendSearchMenu,
          v19 = (FriendSearchMenu_CallbackFunc_o *)sub_21FFEBC(FriendSearchMenu_CallbackFunc_TypeInfo),
          FriendSearchMenu_CallbackFunc___ctor(
            v19,
            (Il2CppObject *)this,
            Method_FriendRootComponent_OnSelectSearchFriend__,
            v20),
          !friendSearchMenu) )
    {
      sub_21FFECC(operationConfirmMenu, v15);
    }
    FriendSearchMenu__Open(friendSearchMenu, v19, 1, v21);
    FriendRootComponent__RefreshInfo(this, v22);
  }
}


void FriendRootComponent__BackFollowRemoveConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v5; // x21
  const MethodInfo *v6; // x3

  if ( (byte_59330A4 & 1) == 0 )
  {
    sub_21FFC50(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_FriendRootComponent_OnSelectFriendItem__);
    byte_59330A4 = 1;
  }
  if ( this->fields.state == 45 )
  {
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close(operationConfirmMenu, 0),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v5 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_21FFEBC(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v5,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v6),
          !operationItemListViewManager) )
    {
      sub_21FFECC(operationConfirmMenu, method);
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
      sub_21FFECC(operationConfirmMenu, method);
    }
    FriendOperationItemListViewManager__DestroyList((FriendOperationItemListViewManager_o *)operationConfirmMenu, 0);
  }
}


void FriendRootComponent__BackFollowRemoveConfirmRefreshShowFriend(
        FriendRootComponent_o *this,
        const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v3; // x20
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Request_object; // x0
  __int64 v7; // x1

  if ( (byte_59330A5 & 1) == 0 )
  {
    sub_21FFC50(&Method_FriendRootComponent_EndFriendRequest2__);
    sub_21FFC50(&Method_NetworkManager_getRequest_FriendTopRequest___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_59330A5 = 1;
  }
  v3 = (NetworkManager_ResultCallbackFunc_o *)sub_21FFEBC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v3, (Il2CppObject *)this, Method_FriendRootComponent_EndFriendRequest2__, 0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4, v5);
  Request_object = NetworkManager__getRequest_object_(
                     v3,
                     (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_FriendTopRequest___);
  if ( !Request_object )
    sub_21FFECC(0, v7);
  RequestBase__beginRequest((RequestBase_o *)Request_object, 0);
}


void FriendRootComponent__BackFriendAcceptConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v5; // x21
  const MethodInfo *v6; // x3

  if ( (byte_593306B & 1) == 0 )
  {
    sub_21FFC50(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_FriendRootComponent_OnSelectFriendItem__);
    byte_593306B = 1;
  }
  if ( this->fields.state == 31 )
  {
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close(operationConfirmMenu, 0),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v5 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_21FFEBC(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v5,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v6),
          !operationItemListViewManager) )
    {
      sub_21FFECC(operationConfirmMenu, method);
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

  if ( (byte_593306C & 1) == 0 )
  {
    sub_21FFC50(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_FriendRootComponent_OnSelectFriendItem__);
    byte_593306C = 1;
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
          v7 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_21FFEBC(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v7,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v8),
          !operationItemListViewManager) )
    {
LABEL_11:
      sub_21FFECC(operationConfirmMenu, v3);
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

  if ( (byte_5933071 & 1) == 0 )
  {
    sub_21FFC50(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_FriendRootComponent_OnSelectFriendItem__);
    byte_5933071 = 1;
  }
  if ( this->fields.state == 37 )
  {
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close(operationConfirmMenu, 0),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v5 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_21FFEBC(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v5,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v6),
          !operationItemListViewManager) )
    {
      sub_21FFECC(operationConfirmMenu, method);
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

  if ( (byte_5933072 & 1) == 0 )
  {
    sub_21FFC50(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_FriendRootComponent_OnSelectFriendItem__);
    byte_5933072 = 1;
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
          v7 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_21FFEBC(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v7,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v8),
          !operationItemListViewManager) )
    {
LABEL_11:
      sub_21FFECC(operationConfirmMenu, v3);
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
      FriendWarningDialog__Close_39525768(friendWarningDialog, 0, v2);
      goto LABEL_7;
    }
LABEL_9:
    sub_21FFECC(friendWarningDialog, method);
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

  if ( (byte_59330A7 & 1) == 0 )
  {
    sub_21FFC50(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_FriendRootComponent_OnSelectFriendItem__);
    byte_59330A7 = 1;
  }
  state = this->fields.state;
  if ( state == 29 || state == 27 )
  {
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close(operationConfirmMenu, 0),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v6 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_21FFEBC(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v6,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v7),
          !operationItemListViewManager) )
    {
      sub_21FFECC(operationConfirmMenu, method);
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

  if ( (byte_59330A8 & 1) == 0 )
  {
    sub_21FFC50(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_FriendRootComponent_OnSelectFriendItem__);
    byte_59330A8 = 1;
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
          v7 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_21FFEBC(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v7,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v8),
          !operationItemListViewManager) )
    {
LABEL_11:
      sub_21FFECC(operationConfirmMenu, v3);
    }
    FriendOperationItemListViewManager__SetMode(operationItemListViewManager, 2, v7, 0);
  }
}


void FriendRootComponent__BackFriendOfferConfirmRefreshShowSearch(
        FriendRootComponent_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  __int64 v15; // x1
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  const MethodInfo *v17; // x2
  FriendSearchMenu_o *friendSearchMenu; // x20
  FriendSearchMenu_CallbackFunc_o *v19; // x21
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x3

  if ( (byte_5933069 & 1) == 0 )
  {
    sub_21FFC50(&FriendSearchMenu_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_FriendRootComponent_OnSelectSearchFriend__);
    byte_5933069 = 1;
  }
  if ( this->fields.state == 27 )
  {
    this->fields.state = 23;
    this->fields.selectFriendCode = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.selectFriendCode, 0, v2, v3, v4, v5, v6, v7);
    this->fields.selectFriendEntity = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.selectFriendEntity, 0, v9, v10, v11, v12, v13, v14);
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close(operationConfirmMenu, 0),
          (operationConfirmMenu = (FriendOperationConfirmMenu_o *)this->fields.friendSearchResultMenu) == 0)
      || (FriendSearchResultMenu__Close_39493796((FriendSearchResultMenu_o *)operationConfirmMenu, 0, v17),
          friendSearchMenu = this->fields.friendSearchMenu,
          v19 = (FriendSearchMenu_CallbackFunc_o *)sub_21FFEBC(FriendSearchMenu_CallbackFunc_TypeInfo),
          FriendSearchMenu_CallbackFunc___ctor(
            v19,
            (Il2CppObject *)this,
            Method_FriendRootComponent_OnSelectSearchFriend__,
            v20),
          !friendSearchMenu) )
    {
      sub_21FFECC(operationConfirmMenu, v15);
    }
    FriendSearchMenu__Open(friendSearchMenu, v19, 1, v21);
  }
}


void FriendRootComponent__BackFriendRejectConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v5; // x21
  const MethodInfo *v6; // x3

  if ( (byte_593306E & 1) == 0 )
  {
    sub_21FFC50(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_FriendRootComponent_OnSelectFriendItem__);
    byte_593306E = 1;
  }
  if ( this->fields.state == 34 )
  {
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close(operationConfirmMenu, 0),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v5 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_21FFEBC(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v5,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v6),
          !operationItemListViewManager) )
    {
      sub_21FFECC(operationConfirmMenu, method);
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

  if ( (byte_593306F & 1) == 0 )
  {
    sub_21FFC50(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_FriendRootComponent_OnSelectFriendItem__);
    byte_593306F = 1;
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
          v7 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_21FFEBC(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v7,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v8),
          !operationItemListViewManager) )
    {
LABEL_11:
      sub_21FFECC(operationConfirmMenu, v3);
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

  if ( (byte_5933074 & 1) == 0 )
  {
    sub_21FFC50(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_FriendRootComponent_OnSelectFriendItem__);
    byte_5933074 = 1;
  }
  if ( this->fields.state == 40 )
  {
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close(operationConfirmMenu, 0),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v5 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_21FFEBC(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v5,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v6),
          !operationItemListViewManager) )
    {
      sub_21FFECC(operationConfirmMenu, method);
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

  if ( (byte_5933075 & 1) == 0 )
  {
    sub_21FFC50(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_FriendRootComponent_OnSelectFriendItem__);
    byte_5933075 = 1;
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
          v7 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_21FFEBC(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v7,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v8),
          !operationItemListViewManager) )
    {
LABEL_11:
      sub_21FFECC(operationConfirmMenu, v3);
    }
    FriendOperationItemListViewManager__SetMode(operationItemListViewManager, 2, v7, 0);
  }
}


void FriendRootComponent__BackSearchFriend(FriendRootComponent_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  FriendSearchResultMenu_o *friendSearchResultMenu; // x0
  FriendSearchMenu_o *friendSearchMenu; // x20
  System_Action_o *v13; // x21
  const MethodInfo *v14; // x2

  if ( (byte_5933062 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_FriendRootComponent_OnMoveEnd__);
    byte_5933062 = 1;
  }
  if ( this->fields.state == 23 )
  {
    this->fields.state = 24;
    FriendRootComponent__RefreshInfo(this, method);
    this->fields.selectFriendEntity = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.selectFriendEntity, 0, v3, v4, v5, v6, v7, v8);
    friendSearchResultMenu = this->fields.friendSearchResultMenu;
    if ( !friendSearchResultMenu
      || (FriendSearchResultMenu__Close_39493796(friendSearchResultMenu, 0, v10),
          friendSearchMenu = this->fields.friendSearchMenu,
          v13 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo),
          System_Action___ctor(v13, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0),
          !friendSearchMenu) )
    {
      sub_21FFECC(friendSearchResultMenu, v9);
    }
    FriendSearchMenu__Close_39491548(friendSearchMenu, v13, v14);
  }
}


void FriendRootComponent__BackShowFriend(FriendRootComponent_o *this, const MethodInfo *method)
{
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_593305A & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_FriendRootComponent_OnMoveEnd__);
    byte_593305A = 1;
  }
  if ( this->fields.state == 4 )
  {
    this->fields.state = 5;
    FriendRootComponent__RefreshInfo(this, method);
    operationItemListViewManager = this->fields.operationItemListViewManager;
    v4 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(v4, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0);
    if ( !operationItemListViewManager )
      sub_21FFECC(v5, v6);
    FriendOperationItemListViewManager__SetMode_39344272(operationItemListViewManager, 4, v4, 0);
  }
}


void FriendRootComponent__BackShowOffer(FriendRootComponent_o *this, const MethodInfo *method)
{
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x1

  if ( (byte_593305C & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_FriendRootComponent_OnMoveEnd__);
    byte_593305C = 1;
  }
  if ( this->fields.state == 9 )
  {
    operationItemListViewManager = this->fields.operationItemListViewManager;
    v4 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(v4, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0);
    if ( !operationItemListViewManager )
      sub_21FFECC(v5, v6);
    FriendOperationItemListViewManager__SetMode_39344272(operationItemListViewManager, 4, v4, 0);
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

  if ( (byte_593305E & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_FriendRootComponent_OnMoveEnd__);
    byte_593305E = 1;
  }
  if ( this->fields.state == 14 )
  {
    this->fields.state = 15;
    FriendRootComponent__RefreshInfo(this, method);
    operationItemListViewManager = this->fields.operationItemListViewManager;
    v4 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(v4, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0);
    if ( !operationItemListViewManager )
      sub_21FFECC(v5, v6);
    FriendOperationItemListViewManager__SetMode_39344272(operationItemListViewManager, 4, v4, 0);
  }
}


void FriendRootComponent__BackShowSearch(FriendRootComponent_o *this, const MethodInfo *method)
{
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_5933060 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_FriendRootComponent_OnMoveEnd__);
    byte_5933060 = 1;
  }
  if ( this->fields.state == 19 )
  {
    operationItemListViewManager = this->fields.operationItemListViewManager;
    this->fields.state = 20;
    v4 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(v4, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0);
    if ( !operationItemListViewManager )
      sub_21FFECC(v5, v6);
    FriendOperationItemListViewManager__SetMode_39344272(operationItemListViewManager, 4, v4, 0);
  }
}


void FriendRootComponent__CheckHelpUI(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  System_String_o **v4; // x9
  System_String_o *v5; // x20
  UILabel_o *helpLabel; // x19
  System_String_o *v7; // x0
  __int64 v8; // x1

  if ( (byte_5933052 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_6807/*"FRIEND_LOCK_HELP_TEXT"*/);
    sub_21FFC50(&StringLiteral_6805/*"FRIEND_HELP_TEXT"*/);
    byte_5933052 = 1;
  }
  v4 = (System_String_o **)&StringLiteral_6805/*"FRIEND_HELP_TEXT"*/;
  if ( this->fields.isActiveModeKindButtons && this->fields.currentModeKind == 1 )
    v4 = (System_String_o **)&StringLiteral_6807/*"FRIEND_LOCK_HELP_TEXT"*/;
  v5 = *v4;
  helpLabel = this->fields.helpLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v2);
  v7 = LocalizationManager__Get(v5, 0);
  if ( !helpLabel )
    sub_21FFECC(v7, v8);
  UILabel__set_text(helpLabel, v7, 0);
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
  System_String_o **v13; // x9
  int32_t currentModeKind; // w20
  __int64 v15; // x21
  __int64 v16; // x22
  System_String_o *v17; // x1

  if ( (byte_5933086 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_TblFriendMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserFollowMaster___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&StringLiteral_18382/*"button_alllock_unreg"*/);
    sub_21FFC50(&StringLiteral_18388/*"button_infocheck_unreg"*/);
    sub_21FFC50(&StringLiteral_18387/*"button_infocheck_reg"*/);
    sub_21FFC50(&StringLiteral_18381/*"button_alllock_reg"*/);
    byte_5933086 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_TblFriendMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserFollowMaster___);
  if ( !MasterData_object )
    goto LABEL_30;
  v6 = (UserFollowMaster_o *)Instance;
  Instance = (DataManager_o *)TblFriendMaster__GetFriendSum((TblFriendMaster_o *)MasterData_object, 0);
  if ( (int)Instance > 0 )
    goto LABEL_9;
  if ( !v6 )
    goto LABEL_30;
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
    goto LABEL_30;
  ((void (__fastcall *)(DataManager_o *, __int64, const char *))Instance->klass[1]._1.name)(
    Instance,
    1,
    Instance->klass[1]._1.namespaze);
  Instance = (DataManager_o *)this->fields.modeEditLockButton;
  if ( !Instance )
    goto LABEL_30;
  ((void (__fastcall *)(DataManager_o *, __int64, const char *))Instance->klass[1]._1.name)(
    Instance,
    1,
    Instance->klass[1]._1.namespaze);
  Instance = (DataManager_o *)this->fields.modeUserDetailButton;
  if ( !Instance )
    goto LABEL_30;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, this->fields.currentModeKind != 0, 0);
  Instance = (DataManager_o *)this->fields.modeEditLockButton;
  if ( !Instance )
    goto LABEL_30;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, this->fields.currentModeKind != 1, 0);
  modeUserDetailButton = this->fields.modeUserDetailButton;
  if ( !modeUserDetailButton )
    goto LABEL_30;
  enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.modeUserDetailButton, 0);
  UICommonButton__SetColliderEnable(modeUserDetailButton, enabled, 1, 0);
  modeEditLockButton = this->fields.modeEditLockButton;
  if ( !modeEditLockButton )
    goto LABEL_30;
  v11 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.modeEditLockButton, 0);
  UICommonButton__SetColliderEnable(modeEditLockButton, v11, 1, 0);
  if ( v7 )
  {
    v12 = 224;
    if ( !this->fields.currentModeKind )
      v12 = 232;
    Instance = *(DataManager_o **)((char *)&this->klass + v12);
    if ( Instance )
    {
      UICommonButton__SetButtonEnable((UICommonButton_o *)Instance, 0, 1, 0);
      goto LABEL_21;
    }
LABEL_30:
    sub_21FFECC(Instance, v4);
  }
LABEL_21:
  Instance = (DataManager_o *)this->fields.modeUserDetailSprite;
  if ( !Instance )
    goto LABEL_30;
  v13 = (System_String_o **)&StringLiteral_18387/*"button_infocheck_reg"*/;
  currentModeKind = this->fields.currentModeKind;
  v15 = StringLiteral_18381/*"button_alllock_reg"*/;
  if ( currentModeKind )
    v13 = (System_String_o **)&StringLiteral_18388/*"button_infocheck_unreg"*/;
  v16 = StringLiteral_18382/*"button_alllock_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, *v13, 0);
  Instance = (DataManager_o *)this->fields.modeEditLockSprite;
  if ( !Instance )
    goto LABEL_30;
  if ( currentModeKind == 1 )
    v17 = (System_String_o *)v15;
  else
    v17 = (System_String_o *)v16;
  UISprite__set_spriteName((UISprite_o *)Instance, v17, 0);
}


bool FriendRootComponent__CheckTabKind(FriendRootComponent_o *this, const MethodInfo *method)
{
  int32_t tabKind; // w0
  __int64 v4; // x1
  PlayMakerFSM_o *myFSM; // x0
  __int64 *v6; // x8

  if ( (byte_5933056 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_8995/*"MENU_OPERATION_FRIEND"*/);
    sub_21FFC50(&StringLiteral_8997/*"MENU_OPERATION_OFFERED"*/);
    sub_21FFC50(&StringLiteral_8998/*"MENU_OPERATION_SEARCH"*/);
    byte_5933056 = 1;
  }
  tabKind = FriendRootComponent__get_tabKind(this, method);
  switch ( tabKind )
  {
    case 2:
      myFSM = this->fields.myFSM;
      if ( myFSM )
      {
        v6 = &StringLiteral_8998/*"MENU_OPERATION_SEARCH"*/;
        goto LABEL_12;
      }
      goto LABEL_14;
    case 1:
      myFSM = this->fields.myFSM;
      if ( myFSM )
      {
        v6 = &StringLiteral_8997/*"MENU_OPERATION_OFFERED"*/;
        goto LABEL_12;
      }
LABEL_14:
      sub_21FFECC(myFSM, v4);
    case 0:
      myFSM = this->fields.myFSM;
      if ( myFSM )
      {
        v6 = &StringLiteral_8995/*"MENU_OPERATION_FRIEND"*/;
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

  if ( (byte_5933067 & 1) == 0 )
  {
    sub_21FFC50(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_FriendRootComponent_OnSelectFriendItem__);
    byte_5933067 = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v4 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_21FFEBC(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
    v5);
  if ( !operationItemListViewManager )
    sub_21FFECC(v6, v7);
  FriendOperationItemListViewManager__SetMode(operationItemListViewManager, 2, v4, 0);
}


void FriendRootComponent__EndCloseShowServantEquip(FriendRootComponent_o *this, const MethodInfo *method)
{
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v4; // x21
  const MethodInfo *v5; // x3
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_5933090 & 1) == 0 )
  {
    sub_21FFC50(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_FriendRootComponent_OnSelectFriendItem__);
    byte_5933090 = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v4 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_21FFEBC(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
    v5);
  if ( !operationItemListViewManager )
    sub_21FFECC(v6, v7);
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

  if ( (byte_5933053 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_TblFriendMaster___);
    sub_21FFC50(&FriendRootComponent_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5933053 = 1;
  }
  v4 = FriendRootComponent_TypeInfo;
  if ( !*(&FriendRootComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FriendRootComponent_TypeInfo, result, method);
    v4 = FriendRootComponent_TypeInfo;
  }
  if ( v4->static_fields->tabKindSave == 3 && this->fields.jumpTabKind <= 1u )
  {
    EventTutorialMaster__CheckTutorial(-1, 49, 0, 0, 0, 0, 0, 0);
    v4 = FriendRootComponent_TypeInfo;
  }
  if ( !*(&v4->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v4, result, method);
    v4 = FriendRootComponent_TypeInfo;
  }
  if ( v4->static_fields->tabKindSave == 3 && this->fields.jumpTabKind == 3 )
  {
    Instance = (OtherUserGameEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (OtherUserGameEntity_array *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)Instance,
                                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_TblFriendMaster___);
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
    sub_21FFECC(Instance, v6);
  }
LABEL_23:
  FriendRootComponent__InitModeKindButtons(this, (const MethodInfo *)result);
  FriendRootComponent__RefreshTab(this, v11);
  FriendRootComponent__RefreshInfo(this, v12);
  MainMenuBar__setMenuActive(1, 0, 0);
  SceneRootComponent__beginStartUp_48429240((SceneRootComponent_o *)this, 0);
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

  if ( (byte_59330A6 & 1) == 0 )
  {
    sub_21FFC50(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_FriendRootComponent_OnSelectFriendItem__);
    byte_59330A6 = 1;
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
        v8 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_21FFEBC(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
        FriendOperationItemListViewManager_CallbackFunc___ctor(
          v8,
          (Il2CppObject *)this,
          (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
          v9),
        !v7) )
  {
    sub_21FFECC(operationItemListViewManager, v5);
  }
  FriendOperationItemListViewManager__SetMode(v7, 2, v8, 0);
  this->fields.state = 4;
}


void FriendRootComponent__EndLoadOutGameAtlas(FriendRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_593304F & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_593304F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v4);
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, (SceneRootComponent_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void FriendRootComponent__EndMaxFollowWarningOfferConfirm(
        FriendRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_593309E & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_8992/*"MENU_CANCEL"*/);
    byte_593309E = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_21FFECC(0, isDecide);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_8992/*"MENU_CANCEL"*/, 0);
}


// local variable allocation has failed, the output may be wrong!
void FriendRootComponent__EndMaxFriendWarning(FriendRootComponent_o *this, bool isDecide, const MethodInfo *method)
{
  FriendWarningDialog_o *friendWarningDialog; // x0
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v6; // x21
  const MethodInfo *v7; // x3

  if ( (byte_5933092 & 1) == 0 )
  {
    sub_21FFC50(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_FriendRootComponent_OnSelectFriendItem__);
    byte_5933092 = 1;
  }
  friendWarningDialog = this->fields.friendWarningDialog;
  if ( !friendWarningDialog
    || (FriendWarningDialog__Close_39525768(friendWarningDialog, 0, method),
        operationItemListViewManager = this->fields.operationItemListViewManager,
        v6 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_21FFEBC(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
        FriendOperationItemListViewManager_CallbackFunc___ctor(
          v6,
          (Il2CppObject *)this,
          (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
          v7),
        !operationItemListViewManager) )
  {
    sub_21FFECC(friendWarningDialog, isDecide);
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

  if ( (byte_5933093 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_8992/*"MENU_CANCEL"*/);
    byte_5933093 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_21FFECC(0, isDecide);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_8992/*"MENU_CANCEL"*/, 0);
}


// local variable allocation has failed, the output may be wrong!
void FriendRootComponent__EndNoSearchWarning(FriendRootComponent_o *this, bool isDecide, const MethodInfo *method)
{
  FriendWarningDialog_o *friendWarningDialog; // x0
  FriendSearchMenu_CallbackFunc_c *v5; // x0
  FriendSearchMenu_o *friendSearchMenu; // x20
  FriendSearchMenu_CallbackFunc_o *v7; // x21
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x3

  if ( (byte_5933080 & 1) == 0 )
  {
    sub_21FFC50(&FriendSearchMenu_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_FriendRootComponent_OnSelectSearchFriend__);
    sub_21FFC50(&StringLiteral_11543/*"REQUEST_NG"*/);
    byte_5933080 = 1;
  }
  friendWarningDialog = this->fields.friendWarningDialog;
  if ( !friendWarningDialog )
    goto LABEL_7;
  FriendWarningDialog__Close_39525768(friendWarningDialog, 0, method);
  v5 = FriendSearchMenu_CallbackFunc_TypeInfo;
  friendSearchMenu = this->fields.friendSearchMenu;
  this->fields.state = 23;
  v7 = (FriendSearchMenu_CallbackFunc_o *)sub_21FFEBC(v5);
  FriendSearchMenu_CallbackFunc___ctor(v7, (Il2CppObject *)this, Method_FriendRootComponent_OnSelectSearchFriend__, v8);
  if ( !friendSearchMenu
    || (FriendSearchMenu__Open(friendSearchMenu, v7, 0, v9),
        (friendWarningDialog = (FriendWarningDialog_o *)this->fields.myFSM) == 0) )
  {
LABEL_7:
    sub_21FFECC(friendWarningDialog, isDecide);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)friendWarningDialog, (System_String_o *)StringLiteral_11543/*"REQUEST_NG"*/, 0);
}


void FriendRootComponent__EndRequestFollowAssign(
        FriendRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_Dictionary_object__object__o *myFSM; // x0
  System_Collections_Generic_Dictionary_object__object__o *v8; // x20
  System_String_o *v9; // x20
  __int64 *v10; // x8
  Il2CppObject *Instance; // x21
  NotificationDialog_ClickDelegate_o *v12; // x22

  if ( (byte_59330A1 & 1) == 0 )
  {
    sub_21FFC50(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_21FFC50(&Method_FriendRootComponent_OnEndRequestDialog__);
    sub_21FFC50(&JsonManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&StringLiteral_11545/*"REQUEST_OK"*/);
    sub_21FFC50(&StringLiteral_11543/*"REQUEST_NG"*/);
    sub_21FFC50(&StringLiteral_23290/*"ng"*/);
    sub_21FFC50(&StringLiteral_22593/*"message"*/);
    byte_59330A1 = 1;
  }
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_23290/*"ng"*/, 0) )
  {
    myFSM = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.myFSM;
    if ( myFSM )
    {
      v10 = &StringLiteral_11543/*"REQUEST_NG"*/;
      goto LABEL_14;
    }
LABEL_17:
    sub_21FFECC(myFSM, v5);
  }
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v5, v6);
  myFSM = (System_Collections_Generic_Dictionary_object__object__o *)JsonManager__getDictionary(result, 0);
  if ( !myFSM )
    goto LABEL_17;
  v8 = myFSM;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          myFSM,
          (Il2CppObject *)StringLiteral_22593/*"message"*/,
          (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_10;
  myFSM = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                       v8,
                                                                       (Il2CppObject *)StringLiteral_22593/*"message"*/,
                                                                       (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !myFSM )
    goto LABEL_17;
  v9 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, const MethodInfo *))myFSM->klass->vtable._3_ToString.methodPtr)(
                            myFSM,
                            myFSM->klass->vtable._3_ToString.method);
  if ( System_String__IsNullOrEmpty(v9, 0) )
  {
LABEL_10:
    myFSM = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.myFSM;
    if ( myFSM )
    {
      v10 = &StringLiteral_11545/*"REQUEST_OK"*/;
LABEL_14:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myFSM, (System_String_o *)*v10, 0);
      return;
    }
    goto LABEL_17;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = (NotificationDialog_ClickDelegate_o *)sub_21FFEBC(NotificationDialog_ClickDelegate_TypeInfo);
  NotificationDialog_ClickDelegate___ctor(v12, (Il2CppObject *)this, Method_FriendRootComponent_OnEndRequestDialog__, 0);
  if ( !Instance )
    goto LABEL_17;
  CommonUI__OpenNotificationDialog_37294692(
    (CommonUI_o *)Instance,
    0,
    v9,
    v12,
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
  __int64 v6; // x2
  System_Collections_Generic_Dictionary_object__object__o *myFSM; // x0
  System_Collections_Generic_Dictionary_object__object__o *v8; // x20
  System_String_o *v9; // x20
  __int64 *v10; // x8
  Il2CppObject *Instance; // x21
  NotificationDialog_ClickDelegate_o *v12; // x22

  if ( (byte_59330AA & 1) == 0 )
  {
    sub_21FFC50(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_21FFC50(&Method_FriendRootComponent_OnEndRequestDialog__);
    sub_21FFC50(&JsonManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&StringLiteral_11545/*"REQUEST_OK"*/);
    sub_21FFC50(&StringLiteral_11543/*"REQUEST_NG"*/);
    sub_21FFC50(&StringLiteral_23290/*"ng"*/);
    sub_21FFC50(&StringLiteral_22593/*"message"*/);
    byte_59330AA = 1;
  }
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_23290/*"ng"*/, 0) )
  {
    myFSM = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.myFSM;
    if ( myFSM )
    {
      v10 = &StringLiteral_11543/*"REQUEST_NG"*/;
      goto LABEL_14;
    }
LABEL_17:
    sub_21FFECC(myFSM, v5);
  }
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v5, v6);
  myFSM = (System_Collections_Generic_Dictionary_object__object__o *)JsonManager__getDictionary(result, 0);
  if ( !myFSM )
    goto LABEL_17;
  v8 = myFSM;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          myFSM,
          (Il2CppObject *)StringLiteral_22593/*"message"*/,
          (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_10;
  myFSM = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                       v8,
                                                                       (Il2CppObject *)StringLiteral_22593/*"message"*/,
                                                                       (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !myFSM )
    goto LABEL_17;
  v9 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, const MethodInfo *))myFSM->klass->vtable._3_ToString.methodPtr)(
                            myFSM,
                            myFSM->klass->vtable._3_ToString.method);
  if ( System_String__IsNullOrEmpty(v9, 0) )
  {
LABEL_10:
    myFSM = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.myFSM;
    if ( myFSM )
    {
      v10 = &StringLiteral_11545/*"REQUEST_OK"*/;
LABEL_14:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myFSM, (System_String_o *)*v10, 0);
      return;
    }
    goto LABEL_17;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = (NotificationDialog_ClickDelegate_o *)sub_21FFEBC(NotificationDialog_ClickDelegate_TypeInfo);
  NotificationDialog_ClickDelegate___ctor(v12, (Il2CppObject *)this, Method_FriendRootComponent_OnEndRequestDialog__, 0);
  if ( !Instance )
    goto LABEL_17;
  CommonUI__OpenNotificationDialog_37294692(
    (CommonUI_o *)Instance,
    0,
    v9,
    v12,
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
  __int64 v6; // x2
  System_Collections_Generic_Dictionary_object__object__o *myFSM; // x0
  System_Collections_Generic_Dictionary_object__object__o *v8; // x20
  System_String_o *v9; // x20
  __int64 *v10; // x8
  Il2CppObject *Instance; // x21
  NotificationDialog_ClickDelegate_o *v12; // x22

  if ( (byte_593307C & 1) == 0 )
  {
    sub_21FFC50(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_21FFC50(&Method_FriendRootComponent_OnEndRequestDialog__);
    sub_21FFC50(&JsonManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&StringLiteral_11545/*"REQUEST_OK"*/);
    sub_21FFC50(&StringLiteral_11543/*"REQUEST_NG"*/);
    sub_21FFC50(&StringLiteral_23290/*"ng"*/);
    sub_21FFC50(&StringLiteral_22593/*"message"*/);
    byte_593307C = 1;
  }
  MainMenuBar__UpdateNoticeNumber(0);
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_23290/*"ng"*/, 0) )
  {
    myFSM = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.myFSM;
    if ( myFSM )
    {
      v10 = &StringLiteral_11543/*"REQUEST_NG"*/;
      goto LABEL_14;
    }
LABEL_17:
    sub_21FFECC(myFSM, v5);
  }
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v5, v6);
  myFSM = (System_Collections_Generic_Dictionary_object__object__o *)JsonManager__getDictionary(result, 0);
  if ( !myFSM )
    goto LABEL_17;
  v8 = myFSM;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          myFSM,
          (Il2CppObject *)StringLiteral_22593/*"message"*/,
          (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_10;
  myFSM = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                       v8,
                                                                       (Il2CppObject *)StringLiteral_22593/*"message"*/,
                                                                       (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !myFSM )
    goto LABEL_17;
  v9 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, const MethodInfo *))myFSM->klass->vtable._3_ToString.methodPtr)(
                            myFSM,
                            myFSM->klass->vtable._3_ToString.method);
  if ( System_String__IsNullOrEmpty(v9, 0) )
  {
LABEL_10:
    myFSM = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.myFSM;
    if ( myFSM )
    {
      v10 = &StringLiteral_11545/*"REQUEST_OK"*/;
LABEL_14:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myFSM, (System_String_o *)*v10, 0);
      return;
    }
    goto LABEL_17;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = (NotificationDialog_ClickDelegate_o *)sub_21FFEBC(NotificationDialog_ClickDelegate_TypeInfo);
  NotificationDialog_ClickDelegate___ctor(v12, (Il2CppObject *)this, Method_FriendRootComponent_OnEndRequestDialog__, 0);
  if ( !Instance )
    goto LABEL_17;
  CommonUI__OpenNotificationDialog_37294692(
    (CommonUI_o *)Instance,
    0,
    v9,
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
}


void FriendRootComponent__EndRequestFriendProfile(
        FriendRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  void *Instance; // x0
  __int64 v12; // x1
  __int64 v13; // x8
  struct OtherUserGameEntity_o *v14; // x1
  __int64 *v15; // x8
  const MethodInfo *v16; // x1

  if ( (byte_593307F & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_OtherUserGameMaster___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&StringLiteral_11545/*"REQUEST_OK"*/);
    sub_21FFC50(&StringLiteral_23468/*"ok"*/);
    sub_21FFC50(&StringLiteral_11543/*"REQUEST_NG"*/);
    byte_593307F = 1;
  }
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_23468/*"ok"*/, 0) )
    goto LABEL_11;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_OtherUserGameMaster___);
  if ( !Instance )
    goto LABEL_14;
  Instance = OtherUserGameMaster__GetFriendCodeList((OtherUserGameMaster_o *)Instance, this->fields.selectFriendCode, 0);
  if ( !Instance )
    goto LABEL_14;
  v13 = *((_QWORD *)Instance + 3);
  if ( !v13 )
  {
LABEL_11:
    this->fields.selectFriendEntity = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.selectFriendEntity, 0, v5, v6, v7, v8, v9, v10);
    FriendRootComponent__StartSearchInput(this, v16);
    Instance = this->fields.myFSM;
    if ( Instance )
    {
      v15 = &StringLiteral_11543/*"REQUEST_NG"*/;
      goto LABEL_13;
    }
LABEL_14:
    sub_21FFECC(Instance, v12);
  }
  if ( !(_DWORD)v13 )
    sub_21FFED4(Instance);
  v14 = (struct OtherUserGameEntity_o *)*((_QWORD *)Instance + 4);
  this->fields.selectFriendEntity = v14;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.selectFriendEntity,
    (int32_t)v14,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  Instance = this->fields.myFSM;
  if ( !Instance )
    goto LABEL_14;
  v15 = &StringLiteral_11545/*"REQUEST_OK"*/;
LABEL_13:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v15, 0);
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

  if ( (byte_5933066 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_FriendRootComponent_EndCloseShowServant__);
    sub_21FFC50(&Method_FriendRootComponent_OnSelectFriendItem__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5933066 = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v5 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_21FFEBC(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
    v6);
  if ( !operationItemListViewManager
    || (FriendOperationItemListViewManager__SetMode(operationItemListViewManager, 5, v5, 0),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v10 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo),
        System_Action___ctor(v10, (Il2CppObject *)this, Method_FriendRootComponent_EndCloseShowServant__, 0),
        !Instance) )
  {
    sub_21FFECC(v7, v8);
  }
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v10, 0);
}


void FriendRootComponent__EndShowServantEquip(FriendRootComponent_o *this, bool isDecide, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_593308F & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_FriendRootComponent_EndCloseShowServantEquip__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_593308F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_FriendRootComponent_EndCloseShowServantEquip__, 0);
  if ( !Instance )
    sub_21FFECC(v6, v7);
  CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)Instance, v5, 0);
}


void FriendRootComponent__FriendLockRequst(
        FriendRootComponent_o *this,
        System_Action_string__o *onFinishedRequest,
        const MethodInfo *method)
{
  __int64 v5; // x20
  ListViewManager_o *operationItemListViewManager; // x0
  int64_t v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_Collections_Generic_List_long__o *v20; // x21
  System_Collections_Generic_List_long__o *v21; // x22
  System_Collections_Generic_List_long__o *v22; // x23
  System_Collections_Generic_List_long__o *v23; // x24
  int32_t ItemSum; // w0
  int32_t v25; // w25
  int dragParentObject; // w8
  ListViewManager_o *v27; // x26
  struct System_Collections_Generic_List_UIDragDropListViewSurface__o *dropList; // x8
  struct System_Int64_array *items; // x9
  _QWORD *v30; // x8
  __int64 size; // x10
  Il2CppClass **v32; // x9
  struct System_Collections_Generic_List_UIDragDropListViewSurface__o *v33; // x8
  struct System_Int64_array *v34; // x9
  _QWORD *v35; // x8
  __int64 v36; // x10
  struct System_Int64_array *v37; // x9
  _QWORD *v38; // x8
  __int64 v39; // x10
  struct System_Int64_array *v40; // x9
  _QWORD *v41; // x8
  __int64 v42; // x10
  __int64 v43; // x8
  System_Collections_Generic_List_long__o *v44; // x0
  NetworkManager_ResultCallbackFunc_o *v45; // x19
  __int64 v46; // x1
  __int64 v47; // x2
  FirendLockSyncRequest_o *v48; // x19
  System_Int64_array *v49; // x20
  System_Int64_array *v50; // x21
  System_Int64_array *v51; // x22

  if ( (byte_593308C & 1) == 0 )
  {
    sub_21FFC50(&Method_ActionExtensions_Call_string___);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_long__TypeInfo);
    sub_21FFC50(&Method_NetworkManager_getRequest_FirendLockSyncRequest___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_21FFC50(&Method_FriendRootComponent___c__DisplayClass112_0__FriendLockRequst_b__0__);
    sub_21FFC50(&FriendRootComponent___c__DisplayClass112_0_TypeInfo);
    sub_21FFC50(&StringLiteral_23468/*"ok"*/);
    byte_593308C = 1;
  }
  v5 = sub_21FFEBC(FriendRootComponent___c__DisplayClass112_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_51;
  *(_QWORD *)(v5 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 32) = onFinishedRequest;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)onFinishedRequest, v14, v15, v16, v17, v18, v19);
  operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    goto LABEL_51;
  if ( FriendOperationItemListViewManager__get_IsExistSwapLockUser(
         (FriendOperationItemListViewManager_o *)operationItemListViewManager,
         0) )
  {
    v20 = (System_Collections_Generic_List_long__o *)sub_21FFEBC(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v20,
      (const MethodInfo_44378D8 *)Method_System_Collections_Generic_List_long___ctor__);
    v21 = (System_Collections_Generic_List_long__o *)sub_21FFEBC(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v21,
      (const MethodInfo_44378D8 *)Method_System_Collections_Generic_List_long___ctor__);
    v22 = (System_Collections_Generic_List_long__o *)sub_21FFEBC(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v22,
      (const MethodInfo_44378D8 *)Method_System_Collections_Generic_List_long___ctor__);
    v23 = (System_Collections_Generic_List_long__o *)sub_21FFEBC(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v23,
      (const MethodInfo_44378D8 *)Method_System_Collections_Generic_List_long___ctor__);
    operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
    if ( operationItemListViewManager )
    {
      ItemSum = ListViewManager__get_ItemSum(operationItemListViewManager, 0);
      *(_DWORD *)(v5 + 24) = ItemSum;
      if ( ItemSum >= 1 )
      {
        v25 = 0;
        while ( 1 )
        {
          operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
          if ( !operationItemListViewManager )
            goto LABEL_51;
          operationItemListViewManager = (ListViewManager_o *)FriendOperationItemListViewManager__GetItem(
                                                                (FriendOperationItemListViewManager_o *)operationItemListViewManager,
                                                                v25,
                                                                0);
          if ( !operationItemListViewManager )
            goto LABEL_51;
          dragParentObject = (int)operationItemListViewManager->fields.dragParentObject;
          v27 = operationItemListViewManager;
          if ( dragParentObject == 9 )
            break;
          if ( dragParentObject == 3 )
          {
            operationItemListViewManager = (ListViewManager_o *)FriendOperationItemListViewItem__get_IsLockDisp(
                                                                  (FriendOperationItemListViewItem_o *)operationItemListViewManager,
                                                                  0);
            dropList = v27->fields.dropList;
            if ( ((unsigned __int8)operationItemListViewManager & 1) != 0 )
            {
              if ( !dropList )
                goto LABEL_51;
              if ( !v20 )
                goto LABEL_51;
              items = v20->fields._items;
              v7 = (int64_t)dropList->fields._items;
              v30 = Method_System_Collections_Generic_List_long__Add__;
              ++v20->fields._version;
              if ( !items )
                goto LABEL_51;
              size = v20->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                v43 = v30[4];
                v44 = v20;
LABEL_40:
                System_Collections_Generic_List_long___AddWithResize(
                  v44,
                  v7,
                  *(const MethodInfo_4438164 **)(*(_QWORD *)(v43 + 192) + 112LL));
                goto LABEL_41;
              }
              v32 = &items->obj.klass + size;
              v20->fields._size = size + 1;
            }
            else
            {
              if ( !dropList )
                goto LABEL_51;
              if ( !v21 )
                goto LABEL_51;
              v37 = v21->fields._items;
              v7 = (int64_t)dropList->fields._items;
              v38 = Method_System_Collections_Generic_List_long__Add__;
              ++v21->fields._version;
              if ( !v37 )
                goto LABEL_51;
              v39 = v21->fields._size;
              if ( (unsigned int)v39 >= LODWORD(v37->max_length) )
              {
                v43 = v38[4];
                v44 = v21;
                goto LABEL_40;
              }
              v32 = &v37->obj.klass + v39;
              v21->fields._size = v39 + 1;
            }
            goto LABEL_35;
          }
LABEL_41:
          if ( ++v25 >= *(_DWORD *)(v5 + 24) )
            goto LABEL_42;
        }
        operationItemListViewManager = (ListViewManager_o *)FriendOperationItemListViewItem__get_IsLockDisp(
                                                              (FriendOperationItemListViewItem_o *)operationItemListViewManager,
                                                              0);
        v33 = v27->fields.dropList;
        if ( ((unsigned __int8)operationItemListViewManager & 1) != 0 )
        {
          if ( !v33 )
            goto LABEL_51;
          if ( !v22 )
            goto LABEL_51;
          v34 = v22->fields._items;
          v7 = (int64_t)v33->fields._items;
          v35 = Method_System_Collections_Generic_List_long__Add__;
          ++v22->fields._version;
          if ( !v34 )
            goto LABEL_51;
          v36 = v22->fields._size;
          if ( (unsigned int)v36 >= LODWORD(v34->max_length) )
          {
            v43 = v35[4];
            v44 = v22;
            goto LABEL_40;
          }
          v32 = &v34->obj.klass + v36;
          v22->fields._size = v36 + 1;
        }
        else
        {
          if ( !v33 )
            goto LABEL_51;
          if ( !v23 )
            goto LABEL_51;
          v40 = v23->fields._items;
          v7 = (int64_t)v33->fields._items;
          v41 = Method_System_Collections_Generic_List_long__Add__;
          ++v23->fields._version;
          if ( !v40 )
            goto LABEL_51;
          v42 = v23->fields._size;
          if ( (unsigned int)v42 >= LODWORD(v40->max_length) )
          {
            v43 = v41[4];
            v44 = v23;
            goto LABEL_40;
          }
          v32 = &v40->obj.klass + v42;
          v23->fields._size = v42 + 1;
        }
LABEL_35:
        v32[4] = (Il2CppClass *)v7;
        goto LABEL_41;
      }
LABEL_42:
      v45 = (NetworkManager_ResultCallbackFunc_o *)sub_21FFEBC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v45,
        (Il2CppObject *)v5,
        Method_FriendRootComponent___c__DisplayClass112_0__FriendLockRequst_b__0__,
        0);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v46, v47);
      operationItemListViewManager = (ListViewManager_o *)NetworkManager__getRequest_object_(
                                                            v45,
                                                            (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_FirendLockSyncRequest___);
      if ( v20 )
      {
        v48 = (FirendLockSyncRequest_o *)operationItemListViewManager;
        operationItemListViewManager = (ListViewManager_o *)System_Collections_Generic_List_long___ToArray(
                                                              v20,
                                                              (const MethodInfo_4439BE4 *)Method_System_Collections_Generic_List_long__ToArray__);
        if ( v21 )
        {
          v49 = (System_Int64_array *)operationItemListViewManager;
          operationItemListViewManager = (ListViewManager_o *)System_Collections_Generic_List_long___ToArray(
                                                                v21,
                                                                (const MethodInfo_4439BE4 *)Method_System_Collections_Generic_List_long__ToArray__);
          if ( v22 )
          {
            v50 = (System_Int64_array *)operationItemListViewManager;
            operationItemListViewManager = (ListViewManager_o *)System_Collections_Generic_List_long___ToArray(
                                                                  v22,
                                                                  (const MethodInfo_4439BE4 *)Method_System_Collections_Generic_List_long__ToArray__);
            if ( v23 )
            {
              v51 = (System_Int64_array *)operationItemListViewManager;
              operationItemListViewManager = (ListViewManager_o *)System_Collections_Generic_List_long___ToArray(
                                                                    v23,
                                                                    (const MethodInfo_4439BE4 *)Method_System_Collections_Generic_List_long__ToArray__);
              if ( v48 )
              {
                FirendLockSyncRequest__beginRequest(
                  v48,
                  v49,
                  v50,
                  v51,
                  (System_Int64_array *)operationItemListViewManager,
                  0);
                return;
              }
            }
          }
        }
      }
    }
LABEL_51:
    sub_21FFECC(operationItemListViewManager, v7);
  }
  ActionExtensions__Call_object_(
    *(System_Action_T__o **)(v5 + 32),
    (Il2CppObject *)StringLiteral_23468/*"ok"*/,
    (const MethodInfo_36CDF5C *)Method_ActionExtensions_Call_string___);
}


UnityEngine_Vector3_o FriendRootComponent__GetDisplayPositionModeKindButtons(
        FriendRootComponent_o *this,
        const MethodInfo *method)
{
  FriendRootComponent_o *v2; // x19
  struct UISprite_o *modeEditLockSprite; // x8
  int mWidth; // w20
  float y; // s8
  __int64 v6; // x1
  __int64 v7; // x2
  float z; // s9
  float v9; // s10
  __int64 v10; // x1
  __int64 v11; // x2
  float v12; // s1
  float v13; // s2
  float v14; // s0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_5933087 & 1) == 0 )
  {
    this = (FriendRootComponent_o *)sub_21FFC50(&FSUtility_TypeInfo);
    byte_5933087 = 1;
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
    sub_21FFECC(this, method);
  }
  v16 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  z = v16.fields.z;
  if ( !*(&FSUtility_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, v6, v7);
  v9 = (float)mWidth;
  if ( !FSUtility__IsUnderVista(0) )
  {
    if ( !*(&FSUtility_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, v10, v11);
    v9 = v9 - FSUtility__GetOffsetX(74.0, 1, 0);
  }
  v12 = y;
  v13 = z;
  v14 = v9;
  result.fields.z = v13;
  result.fields.y = v12;
  result.fields.x = v14;
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
    sub_21FFECC(modeButtonParent, method);
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
    sub_21FFECC(modeButtonParent, method);
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

  if ( (byte_5933082 & 1) == 0 )
  {
    sub_21FFC50(&Method_FriendRootComponent_OnClickBack__);
    sub_21FFC50(&Method_FriendRootComponent__OnClickBack_b__99_0__);
    sub_21FFC50(&FriendRootComponent_messageRequestCallback_TypeInfo);
    byte_5933082 = 1;
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
    v4 = (_QWORD *)sub_21FFC68(Method_FriendRootComponent_OnClickBack__);
  v5 = (System_Reflection_MethodBase_o *)sub_21FFC34(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0, 0);
  v6 = (FriendRootComponent_messageRequestCallback_o *)sub_21FFEBC(FriendRootComponent_messageRequestCallback_TypeInfo);
  FriendRootComponent_messageRequestCallback___ctor(
    v6,
    (Il2CppObject *)this,
    Method_FriendRootComponent__OnClickBack_b__99_0__,
    v7);
  FriendRootComponent__messageDispChangeRequest(this, v6, v8);
}


void FriendRootComponent__OnClickHelp(FriendRootComponent_o *this, const MethodInfo *method)
{
  _QWORD *v2; // x0
  System_Reflection_MethodBase_o *v3; // x0

  if ( (byte_59330AB & 1) == 0 )
  {
    sub_21FFC50(&Method_FriendRootComponent_OnClickHelp__);
    byte_59330AB = 1;
  }
  v2 = Method_FriendRootComponent_OnClickHelp__;
  if ( (*((_BYTE *)Method_FriendRootComponent_OnClickHelp__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_21FFC68(Method_FriendRootComponent_OnClickHelp__);
  v3 = (System_Reflection_MethodBase_o *)sub_21FFC34(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 0, 0, 0);
  EventTutorialMaster__ShowTutorialWithoutCheck(-1, 49, 0, 0, 0);
}


void FriendRootComponent__OnClickModeEditLock(FriendRootComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_5933085 & 1) == 0 )
  {
    sub_21FFC50(&Method_FriendRootComponent_OnClickModeEditLock__);
    byte_5933085 = 1;
  }
  if ( this->fields.currentModeKind != 1 )
  {
    v3 = Method_FriendRootComponent_OnClickModeEditLock__;
    if ( (*((_BYTE *)Method_FriendRootComponent_OnClickModeEditLock__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_FriendRootComponent_OnClickModeEditLock__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    this->fields.currentModeKind = 1;
    FriendRootComponent__RefreshInfo(this, v5);
  }
}


void FriendRootComponent__OnClickModeUserDetail(FriendRootComponent_o *this, const MethodInfo *method)
{
  System_Action_object__o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_5933084 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_string__TypeInfo);
    sub_21FFC50(&Method_FriendRootComponent__OnClickModeUserDetail_b__101_0__);
    byte_5933084 = 1;
  }
  if ( this->fields.currentModeKind )
  {
    v3 = (System_Action_object__o *)sub_21FFEBC(System_Action_string__TypeInfo);
    System_Action_object____ctor(
      v3,
      (Il2CppObject *)this,
      (intptr_t)Method_FriendRootComponent__OnClickModeUserDetail_b__101_0__,
      0);
    FriendRootComponent__FriendLockRequst(this, (System_Action_string__o *)v3, v4);
  }
}


void FriendRootComponent__OnClickTabFriend(FriendRootComponent_o *this, const MethodInfo *method)
{
  System_Action_object__o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_5933088 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_string__TypeInfo);
    sub_21FFC50(&Method_FriendRootComponent__OnClickTabFriend_b__108_0__);
    byte_5933088 = 1;
  }
  v3 = (System_Action_object__o *)sub_21FFEBC(System_Action_string__TypeInfo);
  System_Action_object____ctor(
    v3,
    (Il2CppObject *)this,
    (intptr_t)Method_FriendRootComponent__OnClickTabFriend_b__108_0__,
    0);
  FriendRootComponent__FriendLockRequst(this, (System_Action_string__o *)v3, v4);
}


void FriendRootComponent__OnClickTabOffered(FriendRootComponent_o *this, const MethodInfo *method)
{
  FriendRootComponent_messageRequestCallback_o *v3; // x20
  const MethodInfo *v4; // x3
  const MethodInfo *v5; // x2

  if ( (byte_5933089 & 1) == 0 )
  {
    sub_21FFC50(&Method_FriendRootComponent__OnClickTabOffered_b__109_0__);
    sub_21FFC50(&FriendRootComponent_messageRequestCallback_TypeInfo);
    byte_5933089 = 1;
  }
  v3 = (FriendRootComponent_messageRequestCallback_o *)sub_21FFEBC(FriendRootComponent_messageRequestCallback_TypeInfo);
  FriendRootComponent_messageRequestCallback___ctor(
    v3,
    (Il2CppObject *)this,
    Method_FriendRootComponent__OnClickTabOffered_b__109_0__,
    v4);
  FriendRootComponent__messageDispChangeRequest(this, v3, v5);
}


void FriendRootComponent__OnClickTabSearch(FriendRootComponent_o *this, const MethodInfo *method)
{
  FriendRootComponent_messageRequestCallback_o *v3; // x20
  const MethodInfo *v4; // x3
  const MethodInfo *v5; // x2

  if ( (byte_593308A & 1) == 0 )
  {
    sub_21FFC50(&Method_FriendRootComponent__OnClickTabSearch_b__110_0__);
    sub_21FFC50(&FriendRootComponent_messageRequestCallback_TypeInfo);
    byte_593308A = 1;
  }
  v3 = (FriendRootComponent_messageRequestCallback_o *)sub_21FFEBC(FriendRootComponent_messageRequestCallback_TypeInfo);
  FriendRootComponent_messageRequestCallback___ctor(
    v3,
    (Il2CppObject *)this,
    Method_FriendRootComponent__OnClickTabSearch_b__110_0__,
    v4);
  FriendRootComponent__messageDispChangeRequest(this, v3, v5);
}


void FriendRootComponent__OnEndRequestDialog(FriendRootComponent_o *this, bool isDecide, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_593307D & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&StringLiteral_11545/*"REQUEST_OK"*/);
    byte_593307D = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance || (CommonUI__CloseNotificationDialog(Instance, 0), (Instance = (CommonUI_o *)this->fields.myFSM) == 0) )
    sub_21FFECC(Instance, v5);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_11545/*"REQUEST_OK"*/, 0);
}


void FriendRootComponent__OnMoveEnd(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  FriendRootComponent_o *v3; // x19
  int state; // w8
  int32_t jumpTabKind; // w22
  int32_t v6; // w1
  FriendOperationItemListViewManager_o *v7; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v8; // x21
  const MethodInfo *v9; // x3
  FriendOperationItemListViewManager_o *gameObject; // x0
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v12; // x21
  const MethodInfo *v13; // x3
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  FriendOperationItemListViewManager_o *v15; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v16; // x21
  const MethodInfo *v17; // x3
  FriendSearchMenu_o *friendSearchMenu; // x20
  FriendSearchMenu_CallbackFunc_o *v19; // x21
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x1
  struct ClassButtonControlComponent_o *v23; // x8
  FriendSearchMenu_o *v24; // x20
  FriendSearchMenu_CallbackFunc_o *v25; // x21
  const MethodInfo *v26; // x3
  const MethodInfo *v27; // x3

  v3 = this;
  if ( (byte_5933081 & 1) == 0 )
  {
    sub_21FFC50(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_21FFC50(&FriendSearchMenu_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_FriendRootComponent_OnSelectFriendItem__);
    sub_21FFC50(&Method_FriendRootComponent_OnSelectSearchFriend__);
    this = (FriendRootComponent_o *)sub_21FFC50(&StringLiteral_5622/*"END_ACTION"*/);
    byte_5933081 = 1;
  }
  state = v3->fields.state;
  if ( state <= 14 )
  {
    if ( state <= 6 )
    {
      if ( (unsigned int)(state - 2) < 2 )
      {
        jumpTabKind = v3->fields.jumpTabKind;
        v3->fields.state = 4;
        if ( jumpTabKind == 3 )
        {
          v6 = 0;
          goto LABEL_27;
        }
LABEL_28:
        FriendRootComponent__RefreshTab(v3, method);
        operationItemListViewManager = v3->fields.operationItemListViewManager;
        v12 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_21FFEBC(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
        FriendOperationItemListViewManager_CallbackFunc___ctor(
          v12,
          (Il2CppObject *)v3,
          (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
          v13);
        if ( operationItemListViewManager )
        {
          FriendOperationItemListViewManager__SetMode(operationItemListViewManager, 2, v12, 0);
          classButtonControl = v3->fields.classButtonControl;
          if ( classButtonControl )
          {
            classButtonControl->fields.updateEnable = 1;
            FriendRootComponent__RefreshInfo(v3, method);
            goto LABEL_31;
          }
        }
LABEL_52:
        sub_21FFECC(gameObject, method);
      }
      if ( (unsigned int)(state - 5) >= 2 )
        return;
      goto LABEL_21;
    }
    if ( (unsigned int)(state - 7) >= 2 )
    {
      if ( (unsigned int)(state - 10) >= 2 )
      {
        if ( (unsigned int)(state - 12) >= 2 )
          return;
        jumpTabKind = v3->fields.jumpTabKind;
        v3->fields.state = 14;
        if ( jumpTabKind == 3 )
        {
          v6 = 1;
LABEL_27:
          FriendRootComponent__set_tabKind(this, v6, v2);
          goto LABEL_28;
        }
        goto LABEL_28;
      }
LABEL_21:
      gameObject = v3->fields.operationItemListViewManager;
      v3->fields.state = 1;
      if ( !gameObject )
        goto LABEL_52;
      FriendOperationItemListViewManager__DestroyList(gameObject, 0);
      gameObject = v3->fields.operationItemListViewManager;
      if ( !gameObject )
        goto LABEL_52;
      gameObject = (FriendOperationItemListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)gameObject,
                                                             0);
      if ( !gameObject )
        goto LABEL_52;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
      goto LABEL_36;
    }
    v15 = v3->fields.operationItemListViewManager;
    v3->fields.state = 9;
    v16 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_21FFEBC(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    FriendOperationItemListViewManager_CallbackFunc___ctor(
      v16,
      (Il2CppObject *)v3,
      (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
      v17);
    if ( !v15 )
      goto LABEL_52;
    FriendOperationItemListViewManager__SetMode(v15, 2, v16, 0);
LABEL_36:
    FriendRootComponent__RefreshInfo(v3, method);
    goto LABEL_37;
  }
  if ( state <= 19 )
  {
    if ( (unsigned int)(state - 15) >= 2 )
    {
      if ( state == 17 )
      {
        v3->fields.state = 18;
        return;
      }
      if ( state != 18 )
        return;
      v7 = v3->fields.operationItemListViewManager;
      v3->fields.state = 19;
      v8 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_21FFEBC(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
      FriendOperationItemListViewManager_CallbackFunc___ctor(
        v8,
        (Il2CppObject *)v3,
        (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
        v9);
      if ( !v7 )
        goto LABEL_52;
      FriendOperationItemListViewManager__SetMode(v7, 2, v8, 0);
LABEL_37:
      gameObject = (FriendOperationItemListViewManager_o *)v3->fields.myFSM;
      if ( gameObject )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_5622/*"END_ACTION"*/, 0);
        return;
      }
      goto LABEL_52;
    }
    goto LABEL_21;
  }
  if ( (unsigned int)(state - 20) < 2 )
  {
    friendSearchMenu = v3->fields.friendSearchMenu;
    v3->fields.state = 23;
    v19 = (FriendSearchMenu_CallbackFunc_o *)sub_21FFEBC(FriendSearchMenu_CallbackFunc_TypeInfo);
    FriendSearchMenu_CallbackFunc___ctor(
      v19,
      (Il2CppObject *)v3,
      Method_FriendRootComponent_OnSelectSearchFriend__,
      v20);
    if ( !friendSearchMenu )
      goto LABEL_52;
    FriendSearchMenu__Open(friendSearchMenu, v19, 0, v21);
    gameObject = v3->fields.operationItemListViewManager;
    if ( !gameObject )
      goto LABEL_52;
    FriendOperationItemListViewManager__DestroyList(gameObject, 0);
    gameObject = v3->fields.operationItemListViewManager;
    if ( !gameObject )
      goto LABEL_52;
    gameObject = (FriendOperationItemListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)gameObject,
                                                           0);
    if ( !gameObject )
      goto LABEL_52;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    goto LABEL_37;
  }
  if ( (unsigned int)(state - 24) < 2 )
  {
    v3->fields.state = 1;
    goto LABEL_36;
  }
  if ( state != 22 )
    return;
  jumpTabKind = v3->fields.jumpTabKind;
  v3->fields.state = 23;
  if ( jumpTabKind == 3 )
    FriendRootComponent__set_tabKind(this, 2, v2);
  FriendRootComponent__RefreshTab(v3, method);
  FriendRootComponent__RefreshInfo(v3, v22);
  v23 = v3->fields.classButtonControl;
  if ( !v23 )
    goto LABEL_52;
  v24 = v3->fields.friendSearchMenu;
  v23->fields.updateEnable = 1;
  v25 = (FriendSearchMenu_CallbackFunc_o *)sub_21FFEBC(FriendSearchMenu_CallbackFunc_TypeInfo);
  FriendSearchMenu_CallbackFunc___ctor(v25, (Il2CppObject *)v3, Method_FriendRootComponent_OnSelectSearchFriend__, v26);
  if ( !v24 )
    goto LABEL_52;
  FriendSearchMenu__Open(v24, v25, 1, v27);
LABEL_31:
  gameObject = (FriendOperationItemListViewManager_o *)v3->fields.myFSM;
  if ( !gameObject )
    goto LABEL_52;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_5622/*"END_ACTION"*/, 0);
  if ( jumpTabKind != 3 )
    v3->fields.jumpTabKind = 3;
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
  Il2CppObject *MasterData_object; // x0
  __int64 v11; // x8
  __int64 v12; // x20
  SkillInfo_o *v13; // x22
  System_Reflection_MethodBase_o *v14; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  System_String_o *v19; // x20
  System_String_o *v20; // x21
  Il2CppObject *v21; // x0
  System_String_o *v22; // x0
  TblFriendMaster_o *v23; // x22
  _QWORD *v24; // x0
  System_Reflection_MethodBase_o *v25; // x0
  __int64 *v26; // x8
  _QWORD *v27; // x0
  System_Reflection_MethodBase_o *v28; // x0
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v30; // x0
  const MethodInfo *v31; // x3
  void *v32; // x2
  FriendOperationItemListViewItem_o *v33; // x20
  ServantLeaderInfo_o *ServantLeader; // x0
  EquipTargetInfo_o *EquipTargetInfo; // x0
  __int64 v36; // x1
  __int64 v37; // x2
  EquipTargetInfo_o *v38; // x21
  __int64 v39; // x22
  __int64 v40; // x23
  _QWORD *v41; // x0
  System_Reflection_MethodBase_o *v42; // x0
  const MethodInfo *v43; // x3
  int32_t v44; // w2
  _QWORD *v45; // x0
  System_Reflection_MethodBase_o *v46; // x0
  FriendOperationItemListViewItem_o *v47; // x22
  __int64 v48; // x8
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  ServantLeaderInfo_o *v50; // x21
  __int64 v51; // x20
  SkillInfo_o *v52; // x25
  Il2CppObject *v53; // x22
  DataManager_o *v54; // x20
  int32_t ServantId; // w22
  __int64 v56; // x1
  __int64 v57; // x2
  int32_t DispLimitCountStageSealAfterAtStageLimitCount; // w21
  __int64 v59; // x2
  System_String_o *v60; // x21
  System_String_o *v61; // x22
  Il2CppObject *v62; // x0
  System_String_o *v63; // x0
  System_String_o *v64; // x21
  Il2CppObject *v65; // x0
  System_String_o *v66; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v67; // x21
  _QWORD *v68; // x0
  System_Reflection_MethodBase_o *v69; // x0
  _QWORD *v70; // x0
  System_Reflection_MethodBase_o *v71; // x0
  _QWORD *v72; // x0
  System_Reflection_MethodBase_o *v73; // x0
  _QWORD *v74; // x0
  System_Reflection_MethodBase_o *v75; // x0
  _QWORD *v76; // x0
  System_Reflection_MethodBase_o *v77; // x0
  DataManager_o *v78; // x8
  __int64 v79; // x9
  ServantLeaderInfo_o *v80; // x0
  const MethodInfo *v81; // x2
  _QWORD *v82; // x0
  System_Reflection_MethodBase_o *v83; // x0
  int context; // w8
  FriendWarningDialog_o *friendWarningDialog; // x20
  FriendWarningDialog_CallbackFunc_o *v86; // x21
  const MethodInfo *v87; // x3
  const MethodInfo *v88; // x3
  _QWORD *v89; // x0
  System_Reflection_MethodBase_o *v90; // x0
  FriendOperationItemListViewManager_o *v91; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v92; // x21
  const MethodInfo *v93; // x3
  FriendOperationItemListViewItem_o *Item; // x0
  FriendOperationItemListViewItem_o *v95; // x20
  System_Reflection_MethodBase_o *v96; // x0
  int m_CancellationTokenSource; // [xsp+0h] [xbp-80h] BYREF
  int32_t lv; // [xsp+4h] [xbp-7Ch] BYREF
  System_String_o *detail; // [xsp+8h] [xbp-78h] BYREF
  System_String_o *name; // [xsp+10h] [xbp-70h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+18h] [xbp-68h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+20h] [xbp-60h] BYREF
  System_String_o *v103; // [xsp+28h] [xbp-58h] BYREF
  System_String_o *defaultName; // [xsp+30h] [xbp-50h] BYREF
  SkillInfo_array *v105; // [xsp+38h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v106; // 0:x0.16

  if ( (byte_5933091 & 1) == 0 )
  {
    sub_21FFC50(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_21FFC50(&FriendWarningDialog_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_TblFriendMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_SkillMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_21FFC50(&Method_FriendRootComponent_EndMaxFriendWarning__);
    sub_21FFC50(&Method_FriendRootComponent_OnSelectFriendItem__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&StringLiteral_9006/*"MENU_SELECT_ITEM_ACCEPT"*/);
    sub_21FFC50(&StringLiteral_113/*" "*/);
    sub_21FFC50(&StringLiteral_9012/*"MENU_SELECT_ITEM_REMOVE_FOLLOW"*/);
    sub_21FFC50(&StringLiteral_9007/*"MENU_SELECT_ITEM_CANCEL"*/);
    sub_21FFC50(&StringLiteral_8900/*"MASTER_EQSKILL_LV_TXT"*/);
    sub_21FFC50(&StringLiteral_9009/*"MENU_SELECT_ITEM_OFFER"*/);
    sub_21FFC50(&StringLiteral_2984/*"BATTLE_SKILLCHARGETURN"*/);
    sub_21FFC50(&StringLiteral_9010/*"MENU_SELECT_ITEM_REJECT"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    sub_21FFC50(&StringLiteral_9011/*"MENU_SELECT_ITEM_REMOVE"*/);
    byte_5933091 = 1;
  }
  defaultName = 0;
  v105 = 0;
  entity = 0;
  v103 = 0;
  name = 0;
  skillInfoList = 0;
  detail = 0;
  this->fields.selectItemNum = n;
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_149;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_TblFriendMaster___);
  if ( kind <= 7 )
  {
    if ( kind <= 3 )
    {
      if ( (unsigned int)(kind - 1) < 3 )
      {
        v45 = Method_FriendRootComponent_OnSelectFriendItem__;
        if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
          v45 = (_QWORD *)sub_21FFC68(Method_FriendRootComponent_OnSelectFriendItem__);
        v46 = (System_Reflection_MethodBase_o *)sub_21FFC34(v45, v45[4]);
        OverwriteAssetSoundName__PlaySystemSe(v46, 0, 0, 0);
        Instance = (DataManager_o *)this->fields.operationItemListViewManager;
        if ( !Instance )
          goto LABEL_149;
        Instance = (DataManager_o *)FriendOperationItemListViewManager__GetItem(
                                      (FriendOperationItemListViewManager_o *)Instance,
                                      this->fields.selectItemNum,
                                      0);
        if ( !Instance )
          goto LABEL_149;
        v47 = (FriendOperationItemListViewItem_o *)Instance;
        Instance = (DataManager_o *)Instance->fields.writeMasterDataThread;
        if ( !Instance )
          goto LABEL_149;
        v48 = *(_QWORD *)&Instance->fields.nowLoadCount;
        if ( !v48 )
          goto LABEL_149;
        if ( *(_DWORD *)(v48 + 24) )
        {
          ServantLeaderInfo = OtherUserGameEntity__getServantLeaderInfo(
                                (OtherUserGameEntity_o *)Instance,
                                v47->fields.classPos,
                                0,
                                0,
                                *(_DWORD *)(v48 + 32),
                                0,
                                0);
          if ( ServantLeaderInfo )
          {
            v50 = ServantLeaderInfo;
            if ( kind == 2 )
              v51 = 1;
            else
              v51 = 2LL * (kind == 3);
            Instance = (DataManager_o *)FriendOperationItemListViewItem__GetSkillInfo(v47, &v105, 0);
            if ( !v105 )
              goto LABEL_149;
            if ( (unsigned int)v51 >= LODWORD(v105->max_length) )
              goto LABEL_150;
            v52 = v105->m_Items[v51];
            if ( v52 && v52->fields.id >= 1 && v52->fields.lv >= 1 )
            {
              Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                goto LABEL_149;
              Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                            Instance,
                                            (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_SkillMaster___);
              if ( !Instance )
                goto LABEL_149;
              v53 = DataMasterBase_object__object__int___GetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                      v52->fields.id,
                      (const MethodInfo_3EDD388 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
              Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                goto LABEL_149;
              Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                            Instance,
                                            (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_SkillLvMaster___);
              if ( !Instance )
                goto LABEL_149;
              Instance = (DataManager_o *)SkillLvMaster__GetEntity(
                                            (SkillLvMaster_o *)Instance,
                                            v52->fields.id,
                                            v52->fields.lv,
                                            0);
              if ( !v53 )
                goto LABEL_149;
              v54 = Instance;
              SkillEntity__getSkillMessageInfo((SkillEntity_o *)v53, &defaultName, &v103, v52->fields.lv, 0);
              ServantId = ServantLeaderInfo__GetServantId(v50, -1, 0);
              DispLimitCountStageSealAfterAtStageLimitCount = ServantLeaderInfo__GetDispLimitCountStageSealAfterAtStageLimitCount(
                                                                v50,
                                                                0);
              if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v56, v57);
              Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
              if ( !Instance )
                goto LABEL_149;
              if ( ServantLimitAddMaster__TryGetEntity(
                     (ServantLimitAddMaster_o *)Instance,
                     &entity,
                     ServantId,
                     DispLimitCountStageSealAfterAtStageLimitCount,
                     0) )
              {
                Instance = (DataManager_o *)entity;
                if ( !entity )
                  goto LABEL_149;
                if ( ServantLimitAddEntity__HasKeyOverwriteSkillName(entity, 0) )
                {
                  Instance = (DataManager_o *)entity;
                  if ( !entity )
                    goto LABEL_149;
                  defaultName = ServantLimitAddEntity__GetOverwriteSkillName(entity, v52->fields.id, defaultName, 0);
                }
              }
              v60 = defaultName;
              if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9, v59);
              v61 = LocalizationManager__Get((System_String_o *)StringLiteral_8900/*"MASTER_EQSKILL_LV_TXT"*/, 0);
              lv = v52->fields.lv;
              v62 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &lv);
              v63 = System_String__Format(v61, v62, 0);
              defaultName = System_String__Concat_75481624(v60, (System_String_o *)StringLiteral_113/*" "*/, v63, 0);
              Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2984/*"BATTLE_SKILLCHARGETURN"*/, 0);
              if ( !v54
                || (v64 = (System_String_o *)Instance,
                    m_CancellationTokenSource = (int)v54->fields.m_CancellationTokenSource,
                    v65 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &m_CancellationTokenSource),
                    v66 = System_String__Format(v64, v65, 0),
                    (Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0) )
              {
LABEL_149:
                sub_21FFECC(Instance, v9);
              }
              CommonUI__OpenDetailLongInfoDialog((CommonUI_o *)Instance, defaultName, v66, v103, 1, 0, 0);
            }
          }
          operationItemListViewManager = this->fields.operationItemListViewManager;
          v30 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_21FFEBC(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
          v32 = Method_FriendRootComponent_OnSelectFriendItem__;
LABEL_93:
          v67 = v30;
          FriendOperationItemListViewManager_CallbackFunc___ctor(v30, (Il2CppObject *)this, (intptr_t)v32, v31);
          if ( operationItemListViewManager )
          {
            FriendOperationItemListViewManager__SetMode(operationItemListViewManager, 2, v67, 0);
            return;
          }
          goto LABEL_149;
        }
LABEL_150:
        sub_21FFED4(Instance);
      }
LABEL_117:
      if ( this->fields.currentModeKind == 1 && !FriendRootComponent__get_tabKind(this, v9) )
      {
        Instance = (DataManager_o *)this->fields.operationItemListViewManager;
        if ( !Instance )
          goto LABEL_149;
        Item = FriendOperationItemListViewManager__GetItem(
                 (FriendOperationItemListViewManager_o *)Instance,
                 this->fields.selectItemNum,
                 0);
        if ( Item )
        {
          v95 = Item;
          v96 = (System_Reflection_MethodBase_o *)sub_1FEBA28(Method_FriendRootComponent_OnSelectFriendItem__);
          OverwriteAssetSoundName__PlaySystemSe(v96, 11, 0, 0);
          FriendOperationItemListViewItem__SwapLock(v95, 0);
        }
      }
      else
      {
        v76 = Method_FriendRootComponent_OnSelectFriendItem__;
        if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
          v76 = (_QWORD *)sub_21FFC68(Method_FriendRootComponent_OnSelectFriendItem__);
        v77 = (System_Reflection_MethodBase_o *)sub_21FFC34(v76, v76[4]);
        OverwriteAssetSoundName__PlaySystemSe(v77, 0, 0, 0);
        Instance = (DataManager_o *)this->fields.operationItemListViewManager;
        if ( !Instance )
          goto LABEL_149;
        Instance = (DataManager_o *)FriendOperationItemListViewManager__GetItem(
                                      (FriendOperationItemListViewManager_o *)Instance,
                                      this->fields.selectItemNum,
                                      0);
        if ( !Instance )
          goto LABEL_149;
        v78 = Instance;
        Instance = (DataManager_o *)Instance->fields.writeMasterDataThread;
        if ( !Instance )
          goto LABEL_149;
        v79 = *(_QWORD *)&Instance->fields.nowLoadCount;
        if ( !v79 )
          goto LABEL_149;
        if ( !*(_DWORD *)(v79 + 24) )
          goto LABEL_150;
        v80 = OtherUserGameEntity__getServantLeaderInfo(
                (OtherUserGameEntity_o *)Instance,
                (int32_t)v78[1].fields.m_CancellationTokenSource,
                0,
                0,
                *(_DWORD *)(v79 + 32),
                0,
                0);
        if ( v80 )
        {
          FriendRootComponent__SelectShowServant(this, v80, v81);
          return;
        }
      }
      goto LABEL_140;
    }
    if ( kind > 5 )
    {
      if ( kind == 6 )
      {
        v74 = Method_FriendRootComponent_OnSelectFriendItem__;
        if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
          v74 = (_QWORD *)sub_21FFC68(Method_FriendRootComponent_OnSelectFriendItem__);
        v75 = (System_Reflection_MethodBase_o *)sub_21FFC34(v74, v74[4]);
        OverwriteAssetSoundName__PlaySystemSe(v75, 0, 0, 0);
        Instance = (DataManager_o *)this->fields.myFSM;
        if ( !Instance )
          goto LABEL_149;
        v26 = &StringLiteral_9010/*"MENU_SELECT_ITEM_REJECT"*/;
      }
      else
      {
        v68 = Method_FriendRootComponent_OnSelectFriendItem__;
        if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
          v68 = (_QWORD *)sub_21FFC68(Method_FriendRootComponent_OnSelectFriendItem__);
        v69 = (System_Reflection_MethodBase_o *)sub_21FFC34(v68, v68[4]);
        OverwriteAssetSoundName__PlaySystemSe(v69, 0, 0, 0);
        Instance = (DataManager_o *)this->fields.myFSM;
        if ( !Instance )
          goto LABEL_149;
        v26 = &StringLiteral_9007/*"MENU_SELECT_ITEM_CANCEL"*/;
      }
      goto LABEL_144;
    }
    v23 = (TblFriendMaster_o *)MasterData_object;
    if ( kind == 4 )
    {
      v72 = Method_FriendRootComponent_OnSelectFriendItem__;
      if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
        v72 = (_QWORD *)sub_21FFC68(Method_FriendRootComponent_OnSelectFriendItem__);
      v73 = (System_Reflection_MethodBase_o *)sub_21FFC34(v72, v72[4]);
      OverwriteAssetSoundName__PlaySystemSe(v73, 0, 0, 0);
      if ( !v23 )
        goto LABEL_149;
      Instance = (DataManager_o *)TblFriendMaster__GetList(v23, 3, 0);
      if ( !Instance || !SelfUserGame )
        goto LABEL_149;
      if ( SelfUserGame->fields.friendKeep > SLODWORD(Instance->fields.m_CancellationTokenSource) )
      {
        Instance = (DataManager_o *)this->fields.myFSM;
        if ( !Instance )
          goto LABEL_149;
        v26 = &StringLiteral_9009/*"MENU_SELECT_ITEM_OFFER"*/;
        goto LABEL_144;
      }
    }
    else
    {
      v24 = Method_FriendRootComponent_OnSelectFriendItem__;
      if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
        v24 = (_QWORD *)sub_21FFC68(Method_FriendRootComponent_OnSelectFriendItem__);
      v25 = (System_Reflection_MethodBase_o *)sub_21FFC34(v24, v24[4]);
      OverwriteAssetSoundName__PlaySystemSe(v25, 0, 0, 0);
      if ( !v23 )
        goto LABEL_149;
      Instance = (DataManager_o *)TblFriendMaster__GetList(v23, 3, 0);
      if ( !Instance || !SelfUserGame )
        goto LABEL_149;
      if ( SelfUserGame->fields.friendKeep > SLODWORD(Instance->fields.m_CancellationTokenSource) )
      {
        Instance = (DataManager_o *)this->fields.myFSM;
        if ( !Instance )
          goto LABEL_149;
        v26 = &StringLiteral_9006/*"MENU_SELECT_ITEM_ACCEPT"*/;
LABEL_144:
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v26, 0);
        return;
      }
    }
    friendWarningDialog = this->fields.friendWarningDialog;
    v86 = (FriendWarningDialog_CallbackFunc_o *)sub_21FFEBC(FriendWarningDialog_CallbackFunc_TypeInfo);
    FriendWarningDialog_CallbackFunc___ctor(
      v86,
      (Il2CppObject *)this,
      Method_FriendRootComponent_EndMaxFriendWarning__,
      v87);
    if ( !friendWarningDialog )
      goto LABEL_149;
    FriendWarningDialog__Open(friendWarningDialog, 1, v86, v88);
    return;
  }
  if ( kind > 12 )
  {
    if ( (unsigned int)(kind - 13) < 5 )
    {
      Instance = (DataManager_o *)this->fields.operationItemListViewManager;
      if ( !Instance )
        goto LABEL_149;
      Instance = (DataManager_o *)FriendOperationItemListViewManager__GetItem(
                                    (FriendOperationItemListViewManager_o *)Instance,
                                    this->fields.selectItemNum,
                                    0);
      v11 = (unsigned int)(kind - 14);
      v12 = (unsigned int)v11 < 4 ? v11 + 1 : 0LL;
      if ( !Instance )
        goto LABEL_149;
      Instance = (DataManager_o *)FriendOperationItemListViewItem__GetAppendSkillInfo(
                                    (FriendOperationItemListViewItem_o *)Instance,
                                    &skillInfoList,
                                    0);
      if ( !skillInfoList )
        goto LABEL_149;
      if ( (unsigned int)v12 < LODWORD(skillInfoList->max_length) )
      {
        v13 = skillInfoList->m_Items[v12];
        if ( v13 && v13->fields.id >= 1 && v13->fields.lv >= 1 )
        {
          v14 = (System_Reflection_MethodBase_o *)sub_1FEBA28(Method_FriendRootComponent_OnSelectFriendItem__);
          OverwriteAssetSoundName__PlaySystemSe(v14, 0, 0, 0);
          if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v15, v16);
          Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_SkillMaster___);
          if ( !Instance )
            goto LABEL_149;
          Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                        v13->fields.id,
                                        (const MethodInfo_3EDD388 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
          if ( !Instance )
            goto LABEL_149;
          SkillEntity__getSkillMessageInfo((SkillEntity_o *)Instance, &name, &detail, v13->fields.lv, 0);
          v19 = name;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v17, v18);
          v20 = LocalizationManager__Get((System_String_o *)StringLiteral_8900/*"MASTER_EQSKILL_LV_TXT"*/, 0);
          lv = v13->fields.lv;
          v21 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &lv);
          v22 = System_String__Format(v20, v21, 0);
          name = System_String__Concat_75481624(v19, (System_String_o *)StringLiteral_113/*" "*/, v22, 0);
          Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !Instance )
            goto LABEL_149;
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
          v27 = Method_FriendRootComponent_OnSelectFriendItem__;
          if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
            v27 = (_QWORD *)sub_21FFC68(Method_FriendRootComponent_OnSelectFriendItem__);
          v28 = (System_Reflection_MethodBase_o *)sub_21FFC34(v27, v27[4]);
          OverwriteAssetSoundName__PlaySystemSe(v28, 2, 0, 0);
        }
        operationItemListViewManager = this->fields.operationItemListViewManager;
        v30 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_21FFEBC(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
        v32 = Method_FriendRootComponent_OnSelectFriendItem__;
        goto LABEL_93;
      }
      goto LABEL_150;
    }
    goto LABEL_117;
  }
  if ( kind == 8 )
  {
    v82 = Method_FriendRootComponent_OnSelectFriendItem__;
    if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
      v82 = (_QWORD *)sub_21FFC68(Method_FriendRootComponent_OnSelectFriendItem__);
    v83 = (System_Reflection_MethodBase_o *)sub_21FFC34(v82, v82[4]);
    OverwriteAssetSoundName__PlaySystemSe(v83, 0, 0, 0);
    Instance = (DataManager_o *)this->fields.operationItemListViewManager;
    if ( !Instance )
      goto LABEL_149;
    Instance = (DataManager_o *)FriendOperationItemListViewManager__GetItem(
                                  (FriendOperationItemListViewManager_o *)Instance,
                                  this->fields.selectItemNum,
                                  0);
    if ( !Instance )
      goto LABEL_149;
    context = (int)Instance->fields.context;
    Instance = (DataManager_o *)this->fields.myFSM;
    if ( context == 9 )
    {
      if ( !Instance )
        goto LABEL_149;
      v26 = &StringLiteral_9012/*"MENU_SELECT_ITEM_REMOVE_FOLLOW"*/;
    }
    else
    {
      if ( !Instance )
        goto LABEL_149;
      v26 = &StringLiteral_9011/*"MENU_SELECT_ITEM_REMOVE"*/;
    }
    goto LABEL_144;
  }
  if ( kind != 11 )
  {
    if ( kind == 12 )
    {
      Instance = (DataManager_o *)this->fields.operationItemListViewManager;
      if ( !Instance )
        goto LABEL_149;
      Instance = (DataManager_o *)FriendOperationItemListViewManager__GetItem(
                                    (FriendOperationItemListViewManager_o *)Instance,
                                    this->fields.selectItemNum,
                                    0);
      if ( !Instance )
        goto LABEL_149;
      v33 = (FriendOperationItemListViewItem_o *)Instance;
      ServantLeader = FriendOperationItemListViewItem__get_ServantLeader(
                        (FriendOperationItemListViewItem_o *)Instance,
                        0);
      if ( !ServantLeader || !ServantLeaderInfo__IsHideEquip(ServantLeader, 0) )
      {
        EquipTargetInfo = FriendOperationItemListViewItem__get_EquipTargetInfo(v33, 0);
        if ( EquipTargetInfo )
        {
          v38 = EquipTargetInfo;
          v39 = *(_QWORD *)&EquipTargetInfo->fields.svtId.fields.currentCryptoKey;
          v40 = *(_QWORD *)&EquipTargetInfo->fields.svtId.fields.fakeValue;
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v36, v37);
          *(_QWORD *)&v106.fields.currentCryptoKey = v39;
          *(_QWORD *)&v106.fields.fakeValue = v40;
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v106, 0) >= 1 )
          {
            v41 = Method_FriendRootComponent_OnSelectFriendItem__;
            if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
              v41 = (_QWORD *)sub_21FFC68(Method_FriendRootComponent_OnSelectFriendItem__);
            v42 = (System_Reflection_MethodBase_o *)sub_21FFC34(v41, v41[4]);
            OverwriteAssetSoundName__PlaySystemSe(v42, 0, 0, 0);
            if ( v33->fields.kind == 9 )
              v44 = 14;
            else
              v44 = 13;
            FriendRootComponent__SelectShowServantEquip(this, v38, v44, v43);
            return;
          }
        }
      }
      v89 = Method_FriendRootComponent_OnSelectFriendItem__;
      if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
        v89 = (_QWORD *)sub_21FFC68(Method_FriendRootComponent_OnSelectFriendItem__);
      v90 = (System_Reflection_MethodBase_o *)sub_21FFC34(v89, v89[4]);
      OverwriteAssetSoundName__PlaySystemSe(v90, 2, 0, 0);
      goto LABEL_140;
    }
    goto LABEL_117;
  }
  v70 = Method_FriendRootComponent_OnSelectFriendItem__;
  if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
    v70 = (_QWORD *)sub_21FFC68(Method_FriendRootComponent_OnSelectFriendItem__);
  v71 = (System_Reflection_MethodBase_o *)sub_21FFC34(v70, v70[4]);
  OverwriteAssetSoundName__PlaySystemSe(v71, 0, 0, 0);
  Instance = (DataManager_o *)this->fields.operationItemListViewManager;
  if ( !Instance )
    goto LABEL_149;
  Instance = (DataManager_o *)FriendOperationItemListViewManager__GetItem(
                                (FriendOperationItemListViewManager_o *)Instance,
                                this->fields.selectItemNum,
                                0);
  if ( !Instance )
    goto LABEL_149;
  FriendOperationItemListViewItem__set_isSwapMessageDisp(
    (FriendOperationItemListViewItem_o *)Instance,
    !Instance[1].fields._DispLog,
    0);
LABEL_140:
  v91 = this->fields.operationItemListViewManager;
  v92 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_21FFEBC(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v92,
    (Il2CppObject *)this,
    (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
    v93);
  if ( !v91 )
    goto LABEL_149;
  FriendOperationItemListViewManager__SetMode(v91, 2, v92, 0);
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

  if ( (byte_593309B & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_9008/*"MENU_SELECT_ITEM_FOLLOW"*/);
    sub_21FFC50(&StringLiteral_9009/*"MENU_SELECT_ITEM_OFFER"*/);
    sub_21FFC50(&StringLiteral_8992/*"MENU_CANCEL"*/);
    byte_593309B = 1;
  }
  classButtonControl = this->fields.classButtonControl;
  if ( !classButtonControl )
    goto LABEL_13;
  ClassButtonControlComponent__setCursor(classButtonControl, classPos, 0);
  classButtonControl = (ClassButtonControlComponent_o *)this->fields.myFSM;
  if ( state == 3 )
  {
    if ( classButtonControl )
    {
      v8 = &StringLiteral_9008/*"MENU_SELECT_ITEM_FOLLOW"*/;
      goto LABEL_12;
    }
LABEL_13:
    sub_21FFECC(classButtonControl, *(_QWORD *)&state);
  }
  if ( state != 2 )
  {
    if ( classButtonControl )
    {
      v8 = &StringLiteral_8992/*"MENU_CANCEL"*/;
      goto LABEL_12;
    }
    goto LABEL_13;
  }
  if ( !classButtonControl )
    goto LABEL_13;
  v8 = &StringLiteral_9009/*"MENU_SELECT_ITEM_OFFER"*/;
LABEL_12:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)classButtonControl, (System_String_o *)*v8, 0);
}


void FriendRootComponent__OnSelectSearchFriend(
        FriendRootComponent_o *this,
        bool isDecide,
        System_String_o *friendCode,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v11; // x1
  PlayMakerFSM_o *myFSM; // x0
  __int64 *v13; // x8

  if ( (byte_593309A & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_8993/*"MENU_DECIDE"*/);
    sub_21FFC50(&StringLiteral_8992/*"MENU_CANCEL"*/);
    byte_593309A = 1;
  }
  this->fields.selectFriendCode = friendCode;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.selectFriendCode,
    (int32_t)friendCode,
    friendCode,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_21FFECC(0, v11);
  v13 = &StringLiteral_8993/*"MENU_DECIDE"*/;
  if ( !isDecide )
    v13 = &StringLiteral_8992/*"MENU_CANCEL"*/;
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)*v13, 0);
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
    sub_21FFECC(operationItemListViewManager, method);
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
  __int64 v8; // x1
  __int64 v9; // x2
  UILabel_o *friendCountLabel; // x23
  UserFollowMaster_o *v11; // x21
  System_String_o *v12; // x24
  Il2CppObject *v13; // x25
  Il2CppObject *v14; // x0
  UILabel_o *followCountLabel; // x22
  System_String_o *v16; // x23
  __int64 v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  BalanceConfig_c *v20; // x8
  Il2CppObject *v21; // x21
  Il2CppObject *v22; // x0
  const MethodInfo *v23; // x1
  const MethodInfo *v24; // x1
  int32_t FollowNum; // [xsp+0h] [xbp-60h] BYREF
  int32_t FollowSum; // [xsp+4h] [xbp-5Ch] BYREF
  int32_t friendKeep; // [xsp+8h] [xbp-58h] BYREF
  int32_t FriendSum; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_5933058 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_TblFriendMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserFollowMaster___);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&StringLiteral_6840/*"FRIEND_SHOW_INFOMATION"*/);
    byte_5933058 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_TblFriendMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  v7 = DataManager__GetMasterData_object_(
         Instance,
         (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserFollowMaster___);
  friendCountLabel = this->fields.friendCountLabel;
  v11 = (UserFollowMaster_o *)v7;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v8, v9);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6840/*"FRIEND_SHOW_INFOMATION"*/, 0);
  if ( !MasterData_object )
    goto LABEL_16;
  v12 = (System_String_o *)Instance;
  FriendSum = TblFriendMaster__GetFriendSum((TblFriendMaster_o *)MasterData_object, 0);
  Instance = (DataManager_o *)j_il2cpp_value_box_0(qword_594C070, &FriendSum);
  if ( !SelfUserGame )
    goto LABEL_16;
  v13 = (Il2CppObject *)Instance;
  friendKeep = SelfUserGame->fields.friendKeep;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &friendKeep);
  Instance = (DataManager_o *)System_String__Format_75484576(v12, v13, v14, 0);
  if ( !friendCountLabel )
    goto LABEL_16;
  UILabel__set_text(friendCountLabel, (System_String_o *)Instance, 0);
  followCountLabel = this->fields.followCountLabel;
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6840/*"FRIEND_SHOW_INFOMATION"*/, 0);
  if ( !v11 )
    goto LABEL_16;
  v16 = (System_String_o *)Instance;
  FollowSum = UserFollowMaster__GetFollowSum(v11, 0);
  v17 = j_il2cpp_value_box_0(qword_594C070, &FollowSum);
  v20 = BalanceConfig_TypeInfo;
  v21 = (Il2CppObject *)v17;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v18, v19);
    v20 = BalanceConfig_TypeInfo;
  }
  FollowNum = v20->static_fields->FollowNum;
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &FollowNum);
  Instance = (DataManager_o *)System_String__Format_75484576(v16, v21, v22, 0);
  if ( !followCountLabel
    || (UILabel__set_text(followCountLabel, (System_String_o *)Instance, 0),
        Instance = (DataManager_o *)TblFriendMaster__GetSum((TblFriendMaster_o *)MasterData_object, 2, 0),
        !this->fields.noticeNumber) )
  {
LABEL_16:
    sub_21FFECC(Instance, v5);
  }
  NoticeNumberComponent__SetNumber(this->fields.noticeNumber, (int32_t)Instance, 0);
  FriendRootComponent__CheckModeKind(this, v23);
  FriendRootComponent__CheckHelpUI(this, v24);
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
  bool v17; // w8

  if ( (byte_5933057 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_18305/*"btn_txt_friendsearch_on"*/);
    sub_21FFC50(&StringLiteral_18304/*"btn_txt_friendsearch_off"*/);
    sub_21FFC50(&StringLiteral_18167/*"btn_bg_09"*/);
    sub_21FFC50(&StringLiteral_18303/*"btn_txt_friendrequest_on"*/);
    sub_21FFC50(&StringLiteral_18301/*"btn_txt_friendlist_on"*/);
    sub_21FFC50(&StringLiteral_18302/*"btn_txt_friendrequest_off"*/);
    sub_21FFC50(&StringLiteral_18300/*"btn_txt_friendlist_off"*/);
    sub_21FFC50(&StringLiteral_18189/*"btn_bg_on"*/);
    byte_5933057 = 1;
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
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_18300/*"btn_txt_friendlist_off"*/, 0);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabOfferedTitleSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_18302/*"btn_txt_friendrequest_off"*/, 0);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabSearchTitleSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_18305/*"btn_txt_friendsearch_on"*/, 0);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabFriendSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_18167/*"btn_bg_09"*/, 0);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabOfferedSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_18167/*"btn_bg_09"*/, 0);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabSearchSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      v7 = (System_String_o *)StringLiteral_18189/*"btn_bg_on"*/;
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
      sub_21FFECC(tabFriendButton, v4);
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
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_18300/*"btn_txt_friendlist_off"*/, 0);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabOfferedTitleSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_18303/*"btn_txt_friendrequest_on"*/, 0);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabSearchTitleSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_18304/*"btn_txt_friendsearch_off"*/, 0);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabFriendSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_18167/*"btn_bg_09"*/, 0);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabOfferedSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      v6 = (System_String_o *)StringLiteral_18189/*"btn_bg_on"*/;
      goto LABEL_30;
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
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_18301/*"btn_txt_friendlist_on"*/, 0);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabOfferedTitleSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_18302/*"btn_txt_friendrequest_off"*/, 0);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabSearchTitleSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_18304/*"btn_txt_friendsearch_off"*/, 0);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabFriendSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_18189/*"btn_bg_on"*/, 0);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabOfferedSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      v6 = (System_String_o *)StringLiteral_18167/*"btn_bg_09"*/;
LABEL_30:
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, v6, 0);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabSearchSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      v7 = (System_String_o *)StringLiteral_18167/*"btn_bg_09"*/;
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
  __int64 v4; // x1
  __int64 v5; // x2
  FollowAssignRequest_o *Request_object; // x0
  struct OtherUserGameEntity_o *selectFriendEntity; // x8

  if ( (byte_59330A0 & 1) == 0 )
  {
    sub_21FFC50(&Method_FriendRootComponent_EndRequestFollowAssign__);
    sub_21FFC50(&Method_NetworkManager_getRequest_FollowAssignRequest___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_21FFC50(&StringLiteral_11543/*"REQUEST_NG"*/);
    byte_59330A0 = 1;
  }
  if ( this->fields.selectFriendEntity )
  {
    v3 = (NetworkManager_ResultCallbackFunc_o *)sub_21FFEBC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v3,
      (Il2CppObject *)this,
      Method_FriendRootComponent_EndRequestFollowAssign__,
      0);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4, v5);
    Request_object = (FollowAssignRequest_o *)NetworkManager__getRequest_object_(
                                                v3,
                                                (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_FollowAssignRequest___);
    selectFriendEntity = this->fields.selectFriendEntity;
    if ( selectFriendEntity && Request_object )
    {
      FollowAssignRequest__beginRequest(Request_object, selectFriendEntity->fields.userId, 0);
      return;
    }
LABEL_11:
    sub_21FFECC(Request_object, method);
  }
  Request_object = (FollowAssignRequest_o *)this->fields.myFSM;
  if ( !Request_object )
    goto LABEL_11;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Request_object, (System_String_o *)StringLiteral_11543/*"REQUEST_NG"*/, 0);
}


void FriendRootComponent__RequestFollowRemove(FriendRootComponent_o *this, const MethodInfo *method)
{
  System_Action_object__o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_59330A9 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_string__TypeInfo);
    sub_21FFC50(&Method_FriendRootComponent__RequestFollowRemove_b__142_0__);
    byte_59330A9 = 1;
  }
  v3 = (System_Action_object__o *)sub_21FFEBC(System_Action_string__TypeInfo);
  System_Action_object____ctor(v3, (Il2CppObject *)this, Method_FriendRootComponent__RequestFollowRemove_b__142_0__, 0);
  FriendRootComponent__FriendLockRequst(this, (System_Action_string__o *)v3, v4);
}


void FriendRootComponent__RequestFriendAccept(FriendRootComponent_o *this, const MethodInfo *method)
{
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  FriendOperationItemListViewItem_o *Item; // x0
  struct OtherUserGameEntity_o *otherUserGameEntity; // x21
  NetworkManager_ResultCallbackFunc_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x2

  if ( (byte_5933078 & 1) == 0 )
  {
    sub_21FFC50(&Method_FriendRootComponent_EndRequestFriend__);
    sub_21FFC50(&Method_NetworkManager_getRequest_FriendAcceptRequest___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_21FFC50(&StringLiteral_11543/*"REQUEST_NG"*/);
    byte_5933078 = 1;
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
      v6 = (NetworkManager_ResultCallbackFunc_o *)sub_21FFEBC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v6,
        (Il2CppObject *)this,
        Method_FriendRootComponent_EndRequestFriend__,
        0);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v7, v8);
      operationItemListViewManager = (FriendOperationItemListViewManager_o *)NetworkManager__getRequest_object_(
                                                                               v6,
                                                                               (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_FriendAcceptRequest___);
      if ( operationItemListViewManager )
      {
        FriendAcceptRequest__beginRequest(
          (FriendAcceptRequest_o *)operationItemListViewManager,
          otherUserGameEntity->fields.userId,
          0);
        return;
      }
LABEL_12:
      sub_21FFECC(operationItemListViewManager, method);
    }
  }
  operationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.myFSM;
  if ( !operationItemListViewManager )
    goto LABEL_12;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)operationItemListViewManager, (System_String_o *)StringLiteral_11543/*"REQUEST_NG"*/, 0);
}


void FriendRootComponent__RequestFriendCancel(FriendRootComponent_o *this, const MethodInfo *method)
{
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  FriendOperationItemListViewItem_o *Item; // x0
  struct OtherUserGameEntity_o *otherUserGameEntity; // x21
  NetworkManager_ResultCallbackFunc_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x2

  if ( (byte_593307A & 1) == 0 )
  {
    sub_21FFC50(&Method_FriendRootComponent_EndRequestFriend__);
    sub_21FFC50(&Method_NetworkManager_getRequest_FriendCancelRequest___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_21FFC50(&StringLiteral_11543/*"REQUEST_NG"*/);
    byte_593307A = 1;
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
      v6 = (NetworkManager_ResultCallbackFunc_o *)sub_21FFEBC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v6,
        (Il2CppObject *)this,
        Method_FriendRootComponent_EndRequestFriend__,
        0);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v7, v8);
      operationItemListViewManager = (FriendOperationItemListViewManager_o *)NetworkManager__getRequest_object_(
                                                                               v6,
                                                                               (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_FriendCancelRequest___);
      if ( operationItemListViewManager )
      {
        FriendCancelRequest__beginRequest(
          (FriendCancelRequest_o *)operationItemListViewManager,
          otherUserGameEntity->fields.userId,
          0);
        return;
      }
LABEL_12:
      sub_21FFECC(operationItemListViewManager, method);
    }
  }
  operationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.myFSM;
  if ( !operationItemListViewManager )
    goto LABEL_12;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)operationItemListViewManager, (System_String_o *)StringLiteral_11543/*"REQUEST_NG"*/, 0);
}


void FriendRootComponent__RequestFriendOffer(FriendRootComponent_o *this, const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v3; // x20
  __int64 v4; // x1
  __int64 v5; // x2
  FriendOfferRequest_o *Request_object; // x0
  struct OtherUserGameEntity_o *selectFriendEntity; // x8

  if ( (byte_5933076 & 1) == 0 )
  {
    sub_21FFC50(&Method_FriendRootComponent_EndRequestFriend__);
    sub_21FFC50(&Method_NetworkManager_getRequest_FriendOfferRequest___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_21FFC50(&StringLiteral_11543/*"REQUEST_NG"*/);
    byte_5933076 = 1;
  }
  if ( this->fields.selectFriendEntity )
  {
    v3 = (NetworkManager_ResultCallbackFunc_o *)sub_21FFEBC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(v3, (Il2CppObject *)this, Method_FriendRootComponent_EndRequestFriend__, 0);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4, v5);
    Request_object = (FriendOfferRequest_o *)NetworkManager__getRequest_object_(
                                               v3,
                                               (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_FriendOfferRequest___);
    selectFriendEntity = this->fields.selectFriendEntity;
    if ( selectFriendEntity && Request_object )
    {
      FriendOfferRequest__beginRequest(Request_object, selectFriendEntity->fields.userId, 0);
      return;
    }
LABEL_11:
    sub_21FFECC(Request_object, method);
  }
  Request_object = (FriendOfferRequest_o *)this->fields.myFSM;
  if ( !Request_object )
    goto LABEL_11;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Request_object, (System_String_o *)StringLiteral_11543/*"REQUEST_NG"*/, 0);
}


void FriendRootComponent__RequestFriendOffer2(FriendRootComponent_o *this, const MethodInfo *method)
{
  System_Action_object__o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_5933077 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_string__TypeInfo);
    sub_21FFC50(&Method_FriendRootComponent__RequestFriendOffer2_b__88_0__);
    byte_5933077 = 1;
  }
  v3 = (System_Action_object__o *)sub_21FFEBC(System_Action_string__TypeInfo);
  System_Action_object____ctor(v3, (Il2CppObject *)this, Method_FriendRootComponent__RequestFriendOffer2_b__88_0__, 0);
  FriendRootComponent__FriendLockRequst(this, (System_Action_string__o *)v3, v4);
}


void FriendRootComponent__RequestFriendProfile(FriendRootComponent_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *selectFriendCode; // x0
  System_String_o *v10; // x0
  NetworkManager_ResultCallbackFunc_o *v11; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  ProfileTopRequest_o *Request_object; // x0
  __int64 v15; // x1
  FriendWarningDialog_o *friendWarningDialog; // x20
  FriendWarningDialog_CallbackFunc_o *v17; // x21
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x3

  if ( (byte_593307E & 1) == 0 )
  {
    sub_21FFC50(&FriendWarningDialog_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_FriendRootComponent_EndNoSearchWarning__);
    sub_21FFC50(&Method_FriendRootComponent_EndRequestFriendProfile__);
    sub_21FFC50(&Method_NetworkManager_getRequest_ProfileTopRequest___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_21FFC50(&StringLiteral_113/*" "*/);
    sub_21FFC50(&StringLiteral_11543/*"REQUEST_NG"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593307E = 1;
  }
  selectFriendCode = this->fields.selectFriendCode;
  if ( selectFriendCode )
  {
    v10 = System_String__Replace_75490096(
            selectFriendCode,
            (System_String_o *)StringLiteral_113/*" "*/,
            (System_String_o *)StringLiteral_1/*""*/,
            0);
    if ( System_String__op_Inequality(v10, (System_String_o *)StringLiteral_1/*""*/, 0) )
    {
      v11 = (NetworkManager_ResultCallbackFunc_o *)sub_21FFEBC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v11,
        (Il2CppObject *)this,
        Method_FriendRootComponent_EndRequestFriendProfile__,
        0);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v12, v13);
      Request_object = (ProfileTopRequest_o *)NetworkManager__getRequest_object_(
                                                v11,
                                                (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_ProfileTopRequest___);
      if ( Request_object )
      {
        ProfileTopRequest__beginRequestFriendCode(Request_object, this->fields.selectFriendCode, 0);
        return;
      }
LABEL_13:
      sub_21FFECC(Request_object, v15);
    }
    friendWarningDialog = this->fields.friendWarningDialog;
    v17 = (FriendWarningDialog_CallbackFunc_o *)sub_21FFEBC(FriendWarningDialog_CallbackFunc_TypeInfo);
    FriendWarningDialog_CallbackFunc___ctor(
      v17,
      (Il2CppObject *)this,
      Method_FriendRootComponent_EndNoSearchWarning__,
      v18);
    if ( !friendWarningDialog )
      goto LABEL_13;
    FriendWarningDialog__Open(friendWarningDialog, 3, v17, v19);
  }
  this->fields.selectFriendEntity = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.selectFriendEntity, 0, v2, v3, v4, v5, v6, v7);
  Request_object = (ProfileTopRequest_o *)this->fields.myFSM;
  if ( !Request_object )
    goto LABEL_13;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Request_object, (System_String_o *)StringLiteral_11543/*"REQUEST_NG"*/, 0);
}


void FriendRootComponent__RequestFriendReject(FriendRootComponent_o *this, const MethodInfo *method)
{
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  FriendOperationItemListViewItem_o *Item; // x0
  struct OtherUserGameEntity_o *otherUserGameEntity; // x21
  NetworkManager_ResultCallbackFunc_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x2

  if ( (byte_5933079 & 1) == 0 )
  {
    sub_21FFC50(&Method_FriendRootComponent_EndRequestFriend__);
    sub_21FFC50(&Method_NetworkManager_getRequest_FriendRejectRequest___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&StringLiteral_11543/*"REQUEST_NG"*/);
    byte_5933079 = 1;
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
      operationItemListViewManager = (FriendOperationItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( operationItemListViewManager )
      {
        CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)operationItemListViewManager, 0, 0);
        v6 = (NetworkManager_ResultCallbackFunc_o *)sub_21FFEBC(NetworkManager_ResultCallbackFunc_TypeInfo);
        NetworkManager_ResultCallbackFunc___ctor(
          v6,
          (Il2CppObject *)this,
          Method_FriendRootComponent_EndRequestFriend__,
          0);
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v7, v8);
        operationItemListViewManager = (FriendOperationItemListViewManager_o *)NetworkManager__getRequest_object_(
                                                                                 v6,
                                                                                 (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_FriendRejectRequest___);
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
      sub_21FFECC(operationItemListViewManager, method);
    }
  }
  operationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.myFSM;
  if ( !operationItemListViewManager )
    goto LABEL_13;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)operationItemListViewManager, (System_String_o *)StringLiteral_11543/*"REQUEST_NG"*/, 0);
}


void FriendRootComponent__RequestFriendRemove(FriendRootComponent_o *this, const MethodInfo *method)
{
  System_Action_object__o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_593307B & 1) == 0 )
  {
    sub_21FFC50(&System_Action_string__TypeInfo);
    sub_21FFC50(&Method_FriendRootComponent__RequestFriendRemove_b__92_0__);
    byte_593307B = 1;
  }
  v3 = (System_Action_object__o *)sub_21FFEBC(System_Action_string__TypeInfo);
  System_Action_object____ctor(v3, (Il2CppObject *)this, Method_FriendRootComponent__RequestFriendRemove_b__92_0__, 0);
  FriendRootComponent__FriendLockRequst(this, (System_Action_string__o *)v3, v4);
}


void FriendRootComponent__SelectFollowConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  UserFollowMaster_o *v5; // x20
  const MethodInfo *v6; // x1
  __int64 v7; // x2
  int32_t FollowSum; // w21
  BalanceConfig_c *v9; // x8
  struct OtherUserGameEntity_o *selectFriendEntity; // x8
  __int64 v11; // x1
  __int64 v12; // x2
  Il2CppObject *v13; // x20
  System_String_o *v14; // x21
  System_String_o *v15; // x22
  NotificationDialog_ClickDelegate_o *v16; // x23
  FriendWarningDialog_o *friendWarningDialog; // x20
  FriendWarningDialog_CallbackFunc_o *v18; // x21
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x3
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x21
  OtherUserGameEntity_o *v22; // x20
  FriendOperationConfirmMenu_CallbackFunc_o *v23; // x22

  if ( (byte_593309C & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo);
    sub_21FFC50(&FriendWarningDialog_CallbackFunc_TypeInfo);
    sub_21FFC50(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserFollowMaster___);
    sub_21FFC50(&Method_FriendRootComponent_EndMaxFollowWarningOfferConfirm__);
    sub_21FFC50(&Method_FriendRootComponent_SelectedFollowOfferConfirm__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&StringLiteral_2028/*"ALREADY_FOLLOWED_TITLE"*/);
    sub_21FFC50(&StringLiteral_2027/*"ALREADY_FOLLOWED_MESSAGE"*/);
    byte_593309C = 1;
  }
  if ( this->fields.state == 23 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserFollowMaster___);
      if ( Instance )
      {
        v5 = (UserFollowMaster_o *)Instance;
        FollowSum = UserFollowMaster__GetFollowSum((UserFollowMaster_o *)Instance, 0);
        v9 = BalanceConfig_TypeInfo;
        if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v6, v7);
          v9 = BalanceConfig_TypeInfo;
        }
        if ( FollowSum >= v9->static_fields->FollowNum )
        {
          friendWarningDialog = this->fields.friendWarningDialog;
          this->fields.state = 43;
          v18 = (FriendWarningDialog_CallbackFunc_o *)sub_21FFEBC(FriendWarningDialog_CallbackFunc_TypeInfo);
          FriendWarningDialog_CallbackFunc___ctor(
            v18,
            (Il2CppObject *)this,
            Method_FriendRootComponent_EndMaxFollowWarningOfferConfirm__,
            v19);
          if ( friendWarningDialog )
          {
            FriendWarningDialog__Open(friendWarningDialog, 7, v18, v20);
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
            v13 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v11, v12);
            v14 = LocalizationManager__Get((System_String_o *)StringLiteral_2028/*"ALREADY_FOLLOWED_TITLE"*/, 0);
            v15 = LocalizationManager__Get((System_String_o *)StringLiteral_2027/*"ALREADY_FOLLOWED_MESSAGE"*/, 0);
            v16 = (NotificationDialog_ClickDelegate_o *)sub_21FFEBC(NotificationDialog_ClickDelegate_TypeInfo);
            NotificationDialog_ClickDelegate___ctor(
              v16,
              (Il2CppObject *)this,
              Method_FriendRootComponent_EndMaxFollowWarningOfferConfirm__,
              0);
            if ( v13 )
            {
              CommonUI__OpenNotificationDialog_37294692(
                (CommonUI_o *)v13,
                v14,
                v15,
                v16,
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
            operationConfirmMenu = this->fields.operationConfirmMenu;
            v22 = this->fields.selectFriendEntity;
            this->fields.state = 42;
            v23 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_21FFEBC(FriendOperationConfirmMenu_CallbackFunc_TypeInfo);
            FriendOperationConfirmMenu_CallbackFunc___ctor(
              v23,
              (Il2CppObject *)this,
              Method_FriendRootComponent_SelectedFollowOfferConfirm__,
              0);
            if ( operationConfirmMenu )
            {
              FriendOperationConfirmMenu__Open(operationConfirmMenu, 6, v22, v23, 0);
              return;
            }
          }
        }
      }
    }
    sub_21FFECC(Instance, v4);
  }
}


void FriendRootComponent__SelectFollowRemoveConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  OtherUserGameEntity_o *dropList; // x20
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x21
  FriendOperationConfirmMenu_CallbackFunc_o *v6; // x22

  if ( (byte_59330A3 & 1) == 0 )
  {
    sub_21FFC50(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_FriendRootComponent_SelectedFollowRemoveConfirm__);
    byte_59330A3 = 1;
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
      || (dropList = (OtherUserGameEntity_o *)operationItemListViewManager->fields.dropList,
          operationConfirmMenu = this->fields.operationConfirmMenu,
          v6 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_21FFEBC(FriendOperationConfirmMenu_CallbackFunc_TypeInfo),
          FriendOperationConfirmMenu_CallbackFunc___ctor(
            v6,
            (Il2CppObject *)this,
            Method_FriendRootComponent_SelectedFollowRemoveConfirm__,
            0),
          !operationConfirmMenu) )
    {
      sub_21FFECC(operationItemListViewManager, method);
    }
    FriendOperationConfirmMenu__Open(operationConfirmMenu, 7, dropList, v6, 0);
  }
}


void FriendRootComponent__SelectFriendAcceptConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  OtherUserGameEntity_o *dropList; // x20
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x21
  FriendOperationConfirmMenu_CallbackFunc_o *v6; // x22

  if ( (byte_593306A & 1) == 0 )
  {
    sub_21FFC50(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_FriendRootComponent_SelectedFriendAcceptConfirm__);
    byte_593306A = 1;
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
      || (dropList = (OtherUserGameEntity_o *)operationItemListViewManager->fields.dropList,
          operationConfirmMenu = this->fields.operationConfirmMenu,
          v6 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_21FFEBC(FriendOperationConfirmMenu_CallbackFunc_TypeInfo),
          FriendOperationConfirmMenu_CallbackFunc___ctor(
            v6,
            (Il2CppObject *)this,
            Method_FriendRootComponent_SelectedFriendAcceptConfirm__,
            0),
          !operationConfirmMenu) )
    {
      sub_21FFECC(operationItemListViewManager, method);
    }
    FriendOperationConfirmMenu__Open(operationConfirmMenu, 2, dropList, v6, 0);
  }
}


void FriendRootComponent__SelectFriendCancelConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  OtherUserGameEntity_o *dropList; // x20
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x21
  FriendOperationConfirmMenu_CallbackFunc_o *v6; // x22

  if ( (byte_5933070 & 1) == 0 )
  {
    sub_21FFC50(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_FriendRootComponent_SelectedFriendCancelConfirm__);
    byte_5933070 = 1;
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
      || (dropList = (OtherUserGameEntity_o *)operationItemListViewManager->fields.dropList,
          operationConfirmMenu = this->fields.operationConfirmMenu,
          v6 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_21FFEBC(FriendOperationConfirmMenu_CallbackFunc_TypeInfo),
          FriendOperationConfirmMenu_CallbackFunc___ctor(
            v6,
            (Il2CppObject *)this,
            Method_FriendRootComponent_SelectedFriendCancelConfirm__,
            0),
          !operationConfirmMenu) )
    {
      sub_21FFECC(operationItemListViewManager, method);
    }
    FriendOperationConfirmMenu__Open(operationConfirmMenu, 4, dropList, v6, 0);
  }
}


void FriendRootComponent__SelectFriendOfferConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  int32_t state; // w8
  UserGameEntity_o *v4; // x20
  void *Instance; // x0
  const MethodInfo *v6; // x1
  OtherUserGameEntity_o *selectFriendEntity; // x20
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x21
  UserGameEntity_o *SelfUserGame; // x20
  FriendOperationConfirmMenu_CallbackFunc_o *v10; // x22
  FriendWarningDialog_o *friendWarningDialog; // x20
  FriendWarningDialog_CallbackFunc_o *v12; // x21
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x3

  if ( (byte_5933068 & 1) == 0 )
  {
    sub_21FFC50(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo);
    sub_21FFC50(&FriendWarningDialog_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_TblFriendMaster___);
    sub_21FFC50(&Method_FriendRootComponent_EndMaxFriendWarningOfferConfirm__);
    sub_21FFC50(&Method_FriendRootComponent_SelectedFriendOfferConfirm__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5933068 = 1;
  }
  state = this->fields.state;
  if ( state == 4 )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_26;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_TblFriendMaster___);
    if ( !Instance )
      goto LABEL_26;
    Instance = TblFriendMaster__GetList((TblFriendMaster_o *)Instance, 3, 0);
    if ( !Instance || !SelfUserGame )
      goto LABEL_26;
    if ( SelfUserGame->fields.friendKeep > *((_DWORD *)Instance + 6) )
    {
      Instance = this->fields.operationItemListViewManager;
      if ( !Instance )
        goto LABEL_26;
      Instance = FriendOperationItemListViewManager__GetItem(
                   (FriendOperationItemListViewManager_o *)Instance,
                   this->fields.selectItemNum,
                   0);
      this->fields.state = 27;
      if ( !Instance )
        goto LABEL_26;
      operationConfirmMenu = this->fields.operationConfirmMenu;
      selectFriendEntity = (OtherUserGameEntity_o *)*((_QWORD *)Instance + 16);
      goto LABEL_20;
    }
LABEL_23:
    friendWarningDialog = this->fields.friendWarningDialog;
    this->fields.state = 29;
    v12 = (FriendWarningDialog_CallbackFunc_o *)sub_21FFEBC(FriendWarningDialog_CallbackFunc_TypeInfo);
    FriendWarningDialog_CallbackFunc___ctor(
      v12,
      (Il2CppObject *)this,
      Method_FriendRootComponent_EndMaxFriendWarningOfferConfirm__,
      v13);
    if ( !friendWarningDialog )
      goto LABEL_26;
    FriendWarningDialog__Open(friendWarningDialog, 1, v12, v14);
    return;
  }
  if ( state != 23 )
    return;
  v4 = UserGameMaster__getSelfUserGame(0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_TblFriendMaster___);
  if ( !Instance )
    goto LABEL_26;
  Instance = TblFriendMaster__GetList((TblFriendMaster_o *)Instance, 3, 0);
  if ( !Instance || !v4 )
    goto LABEL_26;
  if ( v4->fields.friendKeep <= *((_DWORD *)Instance + 6) )
    goto LABEL_23;
  selectFriendEntity = this->fields.selectFriendEntity;
  if ( selectFriendEntity )
  {
    operationConfirmMenu = this->fields.operationConfirmMenu;
    this->fields.state = 27;
LABEL_20:
    v10 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_21FFEBC(FriendOperationConfirmMenu_CallbackFunc_TypeInfo);
    FriendOperationConfirmMenu_CallbackFunc___ctor(
      v10,
      (Il2CppObject *)this,
      Method_FriendRootComponent_SelectedFriendOfferConfirm__,
      0);
    if ( operationConfirmMenu )
    {
      FriendOperationConfirmMenu__Open(operationConfirmMenu, 1, selectFriendEntity, v10, 0);
      return;
    }
LABEL_26:
    sub_21FFECC(Instance, v6);
  }
  FriendRootComponent__StartSearchInput(this, v6);
}


void FriendRootComponent__SelectFriendRejectConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  OtherUserGameEntity_o *dropList; // x20
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x21
  FriendOperationConfirmMenu_CallbackFunc_o *v6; // x22

  if ( (byte_593306D & 1) == 0 )
  {
    sub_21FFC50(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_FriendRootComponent_SelectedFriendRejectConfirm__);
    byte_593306D = 1;
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
      || (dropList = (OtherUserGameEntity_o *)operationItemListViewManager->fields.dropList,
          operationConfirmMenu = this->fields.operationConfirmMenu,
          v6 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_21FFEBC(FriendOperationConfirmMenu_CallbackFunc_TypeInfo),
          FriendOperationConfirmMenu_CallbackFunc___ctor(
            v6,
            (Il2CppObject *)this,
            Method_FriendRootComponent_SelectedFriendRejectConfirm__,
            0),
          !operationConfirmMenu) )
    {
      sub_21FFECC(operationItemListViewManager, method);
    }
    FriendOperationConfirmMenu__Open(operationConfirmMenu, 3, dropList, v6, 0);
  }
}


void FriendRootComponent__SelectFriendRemoveConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  OtherUserGameEntity_o *dropList; // x20
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x21
  FriendOperationConfirmMenu_CallbackFunc_o *v6; // x22

  if ( (byte_5933073 & 1) == 0 )
  {
    sub_21FFC50(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_FriendRootComponent_SelectedFriendRemoveConfirm__);
    byte_5933073 = 1;
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
      || (dropList = (OtherUserGameEntity_o *)operationItemListViewManager->fields.dropList,
          operationConfirmMenu = this->fields.operationConfirmMenu,
          v6 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_21FFEBC(FriendOperationConfirmMenu_CallbackFunc_TypeInfo),
          FriendOperationConfirmMenu_CallbackFunc___ctor(
            v6,
            (Il2CppObject *)this,
            Method_FriendRootComponent_SelectedFriendRemoveConfirm__,
            0),
          !operationConfirmMenu) )
    {
      sub_21FFECC(operationItemListViewManager, method);
    }
    FriendOperationConfirmMenu__Open(operationConfirmMenu, 5, dropList, v6, 0);
  }
}


void FriendRootComponent__SelectSearchFriend(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_5933061 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_5622/*"END_ACTION"*/);
    byte_5933061 = 1;
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
      sub_21FFECC(0, method);
    PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_5622/*"END_ACTION"*/, 0);
  }
}


void FriendRootComponent__SelectShowFriend(FriendRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *operationItemListViewManager; // x0
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  FriendOperationItemListViewManager_o *v5; // x20
  System_Action_o *v6; // x21

  if ( (byte_5933059 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_FriendRootComponent_OnMoveEnd__);
    sub_21FFC50(&StringLiteral_5622/*"END_ACTION"*/);
    byte_5933059 = 1;
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
            v6 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
            System_Action___ctor(v6, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0);
            if ( v5 )
            {
              FriendOperationItemListViewManager__SetMode_39344272(v5, 1, v6, 0);
              return;
            }
          }
        }
      }
    }
LABEL_12:
    sub_21FFECC(operationItemListViewManager, method);
  }
  operationItemListViewManager = (UnityEngine_Component_o *)this->fields.myFSM;
  if ( !operationItemListViewManager )
    goto LABEL_12;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)operationItemListViewManager, (System_String_o *)StringLiteral_5622/*"END_ACTION"*/, 0);
}


void FriendRootComponent__SelectShowOffer(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *operationItemListViewManager; // x0
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  FriendOperationItemListViewManager_o *v6; // x20
  System_Action_o *v7; // x21

  if ( (byte_593305B & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_FriendRootComponent_OnMoveEnd__);
    byte_593305B = 1;
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
          v7 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo),
          System_Action___ctor(v7, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0),
          !v6) )
    {
LABEL_11:
      sub_21FFECC(operationItemListViewManager, v3);
    }
    FriendOperationItemListViewManager__SetMode_39344272(v6, 1, v7, 0);
  }
}


void FriendRootComponent__SelectShowOffered(FriendRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *operationItemListViewManager; // x0
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  FriendOperationItemListViewManager_o *v5; // x20
  System_Action_o *v6; // x21

  if ( (byte_593305D & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_FriendRootComponent_OnMoveEnd__);
    sub_21FFC50(&StringLiteral_5622/*"END_ACTION"*/);
    byte_593305D = 1;
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
            v6 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
            System_Action___ctor(v6, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0);
            if ( v5 )
            {
              FriendOperationItemListViewManager__SetMode_39344272(v5, 1, v6, 0);
              return;
            }
          }
        }
      }
    }
LABEL_12:
    sub_21FFECC(operationItemListViewManager, method);
  }
  operationItemListViewManager = (UnityEngine_Component_o *)this->fields.myFSM;
  if ( !operationItemListViewManager )
    goto LABEL_12;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)operationItemListViewManager, (System_String_o *)StringLiteral_5622/*"END_ACTION"*/, 0);
}


void FriendRootComponent__SelectShowSearch(FriendRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *operationItemListViewManager; // x0
  FriendSearchMenu_o *friendSearchMenu; // x20
  System_Action_o *v5; // x21
  const MethodInfo *v6; // x2
  FriendOperationItemListViewManager_o *v7; // x20
  System_Action_o *v8; // x21

  if ( (byte_593305F & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_FriendRootComponent_OnMoveEnd__);
    byte_593305F = 1;
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
    friendSearchMenu = this->fields.friendSearchMenu;
    this->fields.state = 17;
    v5 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0);
    if ( !friendSearchMenu
      || (FriendSearchMenu__Close_39491548(friendSearchMenu, v5, v6),
          v7 = this->fields.operationItemListViewManager,
          v8 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo),
          System_Action___ctor(v8, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0),
          !v7) )
    {
LABEL_11:
      sub_21FFECC(operationItemListViewManager, method);
    }
    FriendOperationItemListViewManager__SetMode_39344272(v7, 1, v8, 0);
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

  if ( (byte_5933065 & 1) == 0 )
  {
    sub_21FFC50(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_21FFC50(&Method_FriendRootComponent_EndShowServant__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5933065 = 1;
  }
  state = this->fields.state;
  if ( state <= 0x13 && ((1 << state) & 0x84210) != 0 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v7 = (ServantStatusDialog_EndDelegate_o *)sub_21FFEBC(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(v7, (Il2CppObject *)this, Method_FriendRootComponent_EndShowServant__, 0);
    if ( !Instance )
      sub_21FFECC(v8, v9);
    if ( state == 4 )
      v10 = 4;
    else
      v10 = 5;
    CommonUI__OpenServantStatusDialog_37304188((CommonUI_o *)Instance, v10, servantLeaderInfo, v7, 0);
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

  if ( (byte_593308E & 1) == 0 )
  {
    sub_21FFC50(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_21FFC50(&Method_FriendRootComponent_EndShowServantEquip__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_593308E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (ServantStatusDialog_EndDelegate_o *)sub_21FFEBC(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(v8, (Il2CppObject *)this, Method_FriendRootComponent_EndShowServantEquip__, 0);
  if ( !Instance )
    sub_21FFECC(v9, v10);
  CommonUI__OpenServantEquipStatusDialog_37307296((CommonUI_o *)Instance, statusKind, equipInfo, v8, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void FriendRootComponent__SelectedFollowOfferConfirm(
        FriendRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0
  __int64 *v6; // x8

  if ( (byte_593309F & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_8993/*"MENU_DECIDE"*/);
    sub_21FFC50(&StringLiteral_8992/*"MENU_CANCEL"*/);
    byte_593309F = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_21FFECC(0, isDecide);
  v6 = &StringLiteral_8993/*"MENU_DECIDE"*/;
  if ( !isDecide )
    v6 = &StringLiteral_8992/*"MENU_CANCEL"*/;
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

  if ( (byte_5933099 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_8993/*"MENU_DECIDE"*/);
    sub_21FFC50(&StringLiteral_8992/*"MENU_CANCEL"*/);
    byte_5933099 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_21FFECC(0, isDecide);
  v6 = &StringLiteral_8993/*"MENU_DECIDE"*/;
  if ( !isDecide )
    v6 = &StringLiteral_8992/*"MENU_CANCEL"*/;
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

  if ( (byte_5933095 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_8993/*"MENU_DECIDE"*/);
    sub_21FFC50(&StringLiteral_8992/*"MENU_CANCEL"*/);
    byte_5933095 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_21FFECC(0, isDecide);
  v6 = &StringLiteral_8993/*"MENU_DECIDE"*/;
  if ( !isDecide )
    v6 = &StringLiteral_8992/*"MENU_CANCEL"*/;
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

  if ( (byte_5933097 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_8993/*"MENU_DECIDE"*/);
    sub_21FFC50(&StringLiteral_8992/*"MENU_CANCEL"*/);
    byte_5933097 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_21FFECC(0, isDecide);
  v6 = &StringLiteral_8993/*"MENU_DECIDE"*/;
  if ( !isDecide )
    v6 = &StringLiteral_8992/*"MENU_CANCEL"*/;
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

  if ( (byte_5933094 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_8993/*"MENU_DECIDE"*/);
    sub_21FFC50(&StringLiteral_8992/*"MENU_CANCEL"*/);
    byte_5933094 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_21FFECC(0, isDecide);
  v6 = &StringLiteral_8993/*"MENU_DECIDE"*/;
  if ( !isDecide )
    v6 = &StringLiteral_8992/*"MENU_CANCEL"*/;
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

  if ( (byte_5933096 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_8993/*"MENU_DECIDE"*/);
    sub_21FFC50(&StringLiteral_8992/*"MENU_CANCEL"*/);
    byte_5933096 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_21FFECC(0, isDecide);
  v6 = &StringLiteral_8993/*"MENU_DECIDE"*/;
  if ( !isDecide )
    v6 = &StringLiteral_8992/*"MENU_CANCEL"*/;
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

  if ( (byte_5933098 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_8993/*"MENU_DECIDE"*/);
    sub_21FFC50(&StringLiteral_8992/*"MENU_CANCEL"*/);
    byte_5933098 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_21FFECC(0, isDecide);
  v6 = &StringLiteral_8993/*"MENU_DECIDE"*/;
  if ( !isDecide )
    v6 = &StringLiteral_8992/*"MENU_CANCEL"*/;
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
  float x; // s8
  float y; // s9
  UnityEngine_GameObject_o *modeButtonParent; // x0
  float z; // s10
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Vector3_o DisplayPositionModeKindButtons; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v12; // 0:s1.4,4:s2.4,8:s3.4

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
    x = DisplayPositionModeKindButtons.fields.x;
    y = DisplayPositionModeKindButtons.fields.y;
    modeButtonParent = this->fields.modeButtonParent;
    z = DisplayPositionModeKindButtons.fields.z;
    if ( !modeButtonParent
      || (gameObject = UnityEngine_GameObject__get_gameObject(modeButtonParent, 0),
          v12.fields.x = x,
          v12.fields.y = y,
          v12.fields.z = z,
          (modeButtonParent = (UnityEngine_GameObject_o *)TweenPosition__Begin(gameObject, 0.2, v12, 0)) == 0) )
    {
      sub_21FFECC(modeButtonParent, v5);
    }
    this->fields.isActiveModeKindButtons = v3;
    LODWORD(modeButtonParent[1].monitor) = 3;
  }
}


void FriendRootComponent__ShowSearchResult(FriendRootComponent_o *this, const MethodInfo *method)
{
  FriendRootComponent_o *v2; // x19
  FriendSearchResultMenu_o *friendSearchResultMenu; // x20
  System_Action_o *v4; // x21
  const MethodInfo *v5; // x2
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  FriendSearchResultMenu_o *v7; // x20
  OtherUserGameEntity_o *selectFriendEntity; // x21
  int32_t currentCursor; // w22
  FriendSearchResultMenu_CallbackFunc_o *v10; // x23
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x4
  FriendSearchMenu_o *friendSearchMenu; // x20
  FriendSearchMenu_CallbackFunc_o *v14; // x21
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x3

  v2 = this;
  if ( (byte_5933063 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&FriendSearchResultMenu_CallbackFunc_TypeInfo);
    sub_21FFC50(&FriendSearchMenu_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_FriendRootComponent_OnSelectOffer__);
    sub_21FFC50(&Method_FriendRootComponent_OnSelectSearchFriend__);
    sub_21FFC50(&Method_FriendRootComponent_ShowSearchResult__);
    this = (FriendRootComponent_o *)sub_21FFC50(&StringLiteral_5622/*"END_ACTION"*/);
    byte_5933063 = 1;
  }
  if ( v2->fields.state == 23 )
  {
    friendSearchResultMenu = v2->fields.friendSearchResultMenu;
    if ( !friendSearchResultMenu )
      goto LABEL_14;
    if ( friendSearchResultMenu->fields.isOpen )
    {
      v4 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(v4, (Il2CppObject *)v2, Method_FriendRootComponent_ShowSearchResult__, 0);
      FriendSearchResultMenu__Close_39493796(friendSearchResultMenu, v4, v5);
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
    v7 = v2->fields.friendSearchResultMenu;
    selectFriendEntity = v2->fields.selectFriendEntity;
    currentCursor = classButtonControl->fields.currentCursor;
    v10 = (FriendSearchResultMenu_CallbackFunc_o *)sub_21FFEBC(FriendSearchResultMenu_CallbackFunc_TypeInfo);
    FriendSearchResultMenu_CallbackFunc___ctor(v10, (Il2CppObject *)v2, Method_FriendRootComponent_OnSelectOffer__, v11);
    if ( !v7
      || (FriendSearchResultMenu__Open(v7, selectFriendEntity, currentCursor, v10, v12),
          friendSearchMenu = v2->fields.friendSearchMenu,
          v14 = (FriendSearchMenu_CallbackFunc_o *)sub_21FFEBC(FriendSearchMenu_CallbackFunc_TypeInfo),
          FriendSearchMenu_CallbackFunc___ctor(
            v14,
            (Il2CppObject *)v2,
            Method_FriendRootComponent_OnSelectSearchFriend__,
            v15),
          !friendSearchMenu)
      || (FriendSearchMenu__Open(friendSearchMenu, v14, 0, v16), (this = (FriendRootComponent_o *)v2->fields.myFSM) == 0) )
    {
LABEL_14:
      sub_21FFECC(this, method);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_5622/*"END_ACTION"*/, 0);
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
  if ( (byte_5933064 & 1) == 0 )
  {
    sub_21FFC50(&FriendSearchResultMenu_CallbackFunc_TypeInfo);
    sub_21FFC50(&FriendSearchMenu_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_FriendRootComponent_OnSelectOffer__);
    this = (FriendRootComponent_o *)sub_21FFC50(&Method_FriendRootComponent_OnSelectSearchFriend__);
    byte_5933064 = 1;
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
      v8 = (FriendSearchResultMenu_CallbackFunc_o *)sub_21FFEBC(FriendSearchResultMenu_CallbackFunc_TypeInfo);
      FriendSearchResultMenu_CallbackFunc___ctor(v8, (Il2CppObject *)v3, Method_FriendRootComponent_OnSelectOffer__, v9);
      FriendSearchResultMenu__Open(friendSearchResultMenu, selectFriendEntity, currentCursor, v8, v10);
    }
    else
    {
      FriendSearchResultMenu__Close_39493796(v3->fields.friendSearchResultMenu, 0, v2);
    }
  }
  friendSearchMenu = v3->fields.friendSearchMenu;
  v12 = (FriendSearchMenu_CallbackFunc_o *)sub_21FFEBC(FriendSearchMenu_CallbackFunc_TypeInfo);
  FriendSearchMenu_CallbackFunc___ctor(v12, (Il2CppObject *)v3, Method_FriendRootComponent_OnSelectSearchFriend__, v13);
  if ( !friendSearchMenu )
LABEL_11:
    sub_21FFECC(this, method);
  FriendSearchMenu__Open(friendSearchMenu, v12, 0, v14);
}


void FriendRootComponent___OnClickBack_b__99_0(
        FriendRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x19
  System_Action_object__o *v5; // x20
  const MethodInfo *v6; // x2

  v4 = (Il2CppObject *)this;
  if ( (byte_59330AF & 1) == 0 )
  {
    sub_21FFC50(&System_Action_string__TypeInfo);
    sub_21FFC50(&Method_FriendRootComponent__OnClickBack_b__99_1__);
    this = (FriendRootComponent_o *)sub_21FFC50(&StringLiteral_23468/*"ok"*/);
    byte_59330AF = 1;
  }
  if ( !result )
    sub_21FFECC(this, result);
  if ( System_String__Equals_75473208(result, (System_String_o *)StringLiteral_23468/*"ok"*/, 0) )
  {
    v5 = (System_Action_object__o *)sub_21FFEBC(System_Action_string__TypeInfo);
    System_Action_object____ctor(v5, v4, Method_FriendRootComponent__OnClickBack_b__99_1__, 0);
    FriendRootComponent__FriendLockRequst((FriendRootComponent_o *)v4, (System_Action_string__o *)v5, v6);
  }
}


void FriendRootComponent___OnClickBack_b__99_1(
        FriendRootComponent_o *this,
        System_String_o *res,
        const MethodInfo *method)
{
  FriendRootComponent_o *v4; // x19

  v4 = this;
  if ( (byte_59330B0 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23468/*"ok"*/);
    this = (FriendRootComponent_o *)sub_21FFC50(&StringLiteral_3571/*"CLICK_BACK"*/);
    byte_59330B0 = 1;
  }
  if ( !res )
    goto LABEL_9;
  if ( System_String__Equals_75473208(res, (System_String_o *)StringLiteral_23468/*"ok"*/, 0) )
  {
    this = (FriendRootComponent_o *)v4->fields.friendSearchMenu;
    if ( this )
    {
      FriendSearchMenu__BlockInput((FriendSearchMenu_o *)this, (const MethodInfo *)res);
      this = (FriendRootComponent_o *)v4->fields.myFSM;
      if ( this )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3571/*"CLICK_BACK"*/, 0);
        return;
      }
    }
LABEL_9:
    sub_21FFECC(this, res);
  }
}


void FriendRootComponent___OnClickModeUserDetail_b__101_0(
        FriendRootComponent_o *this,
        System_String_o *res,
        const MethodInfo *method)
{
  FriendRootComponent_o *v4; // x19
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x1

  v4 = this;
  if ( (byte_59330B3 & 1) == 0 )
  {
    sub_21FFC50(&Method_FriendRootComponent__OnClickModeUserDetail_b__101_0__);
    this = (FriendRootComponent_o *)sub_21FFC50(&StringLiteral_23468/*"ok"*/);
    byte_59330B3 = 1;
  }
  if ( !res )
    sub_21FFECC(this, res);
  if ( System_String__Equals_75473208(res, (System_String_o *)StringLiteral_23468/*"ok"*/, 0) )
  {
    v5 = Method_FriendRootComponent__OnClickModeUserDetail_b__101_0__;
    if ( (*((_BYTE *)Method_FriendRootComponent__OnClickModeUserDetail_b__101_0__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_21FFC68(Method_FriendRootComponent__OnClickModeUserDetail_b__101_0__);
    v6 = (System_Reflection_MethodBase_o *)sub_21FFC34(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
    v4->fields.currentModeKind = 0;
    FriendRootComponent__RefreshInfo(v4, v7);
  }
}


void FriendRootComponent___OnClickTabFriend_b__108_0(
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
  if ( (byte_59330B4 & 1) == 0 )
  {
    sub_21FFC50(&Method_FriendRootComponent__OnClickTabFriend_b__108_0__);
    sub_21FFC50(&StringLiteral_23468/*"ok"*/);
    this = (FriendRootComponent_o *)sub_21FFC50(&StringLiteral_3627/*"CLICK_TAB"*/);
    byte_59330B4 = 1;
  }
  if ( !res )
    goto LABEL_24;
  this = (FriendRootComponent_o *)System_String__Equals_75473208(res, (System_String_o *)StringLiteral_23468/*"ok"*/, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
    return;
  state = v4->fields.state;
  if ( state <= 9 )
  {
    if ( state != 4 && state != 9 )
      return;
LABEL_18:
    v9 = Method_FriendRootComponent__OnClickTabFriend_b__108_0__;
    if ( (*((_BYTE *)Method_FriendRootComponent__OnClickTabFriend_b__108_0__ + 83) & 2) != 0 )
      v9 = (_QWORD *)sub_21FFC68(Method_FriendRootComponent__OnClickTabFriend_b__108_0__);
    v10 = (System_Reflection_MethodBase_o *)sub_21FFC34(v9, v9[4]);
    OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0, 0);
    FriendRootComponent__set_tabKind(v11, 0, v12);
    FriendRootComponent__RefreshTab(v4, v13);
    classButtonControl = v4->fields.classButtonControl;
    if ( classButtonControl )
    {
      this = (FriendRootComponent_o *)v4->fields.myFSM;
      classButtonControl->fields.updateEnable = 0;
      if ( this )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3627/*"CLICK_TAB"*/, 0);
        return;
      }
    }
LABEL_24:
    sub_21FFECC(this, res);
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


void FriendRootComponent___OnClickTabOffered_b__109_0(
        FriendRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x19
  System_Action_object__o *v5; // x20
  const MethodInfo *v6; // x2

  v4 = (Il2CppObject *)this;
  if ( (byte_59330B5 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_string__TypeInfo);
    sub_21FFC50(&Method_FriendRootComponent__OnClickTabOffered_b__109_1__);
    this = (FriendRootComponent_o *)sub_21FFC50(&StringLiteral_23468/*"ok"*/);
    byte_59330B5 = 1;
  }
  if ( !result )
    sub_21FFECC(this, result);
  if ( System_String__Equals_75473208(result, (System_String_o *)StringLiteral_23468/*"ok"*/, 0) )
  {
    v5 = (System_Action_object__o *)sub_21FFEBC(System_Action_string__TypeInfo);
    System_Action_object____ctor(v5, v4, (intptr_t)Method_FriendRootComponent__OnClickTabOffered_b__109_1__, 0);
    FriendRootComponent__FriendLockRequst((FriendRootComponent_o *)v4, (System_Action_string__o *)v5, v6);
  }
}


void FriendRootComponent___OnClickTabOffered_b__109_1(
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
  if ( (byte_59330B6 & 1) == 0 )
  {
    sub_21FFC50(&Method_FriendRootComponent__OnClickTabOffered_b__109_1__);
    sub_21FFC50(&StringLiteral_23468/*"ok"*/);
    this = (FriendRootComponent_o *)sub_21FFC50(&StringLiteral_3627/*"CLICK_TAB"*/);
    byte_59330B6 = 1;
  }
  if ( !res )
    goto LABEL_24;
  this = (FriendRootComponent_o *)System_String__Equals_75473208(res, (System_String_o *)StringLiteral_23468/*"ok"*/, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
    return;
  state = v4->fields.state;
  if ( state <= 9 )
  {
    if ( state != 4 && state != 9 )
      return;
LABEL_18:
    v9 = Method_FriendRootComponent__OnClickTabOffered_b__109_1__;
    if ( (*((_BYTE *)Method_FriendRootComponent__OnClickTabOffered_b__109_1__ + 83) & 2) != 0 )
      v9 = (_QWORD *)sub_21FFC68(Method_FriendRootComponent__OnClickTabOffered_b__109_1__);
    v10 = (System_Reflection_MethodBase_o *)sub_21FFC34(v9, v9[4]);
    OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0, 0);
    FriendRootComponent__set_tabKind(v11, 1, v12);
    FriendRootComponent__RefreshTab(v4, v13);
    classButtonControl = v4->fields.classButtonControl;
    if ( classButtonControl )
    {
      this = (FriendRootComponent_o *)v4->fields.myFSM;
      classButtonControl->fields.updateEnable = 0;
      if ( this )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3627/*"CLICK_TAB"*/, 0);
        return;
      }
    }
LABEL_24:
    sub_21FFECC(this, res);
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


void FriendRootComponent___OnClickTabSearch_b__110_0(
        FriendRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x19
  System_Action_object__o *v5; // x20
  const MethodInfo *v6; // x2

  v4 = (Il2CppObject *)this;
  if ( (byte_59330B7 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_string__TypeInfo);
    sub_21FFC50(&Method_FriendRootComponent__OnClickTabSearch_b__110_1__);
    this = (FriendRootComponent_o *)sub_21FFC50(&StringLiteral_23468/*"ok"*/);
    byte_59330B7 = 1;
  }
  if ( !result )
    sub_21FFECC(this, result);
  if ( System_String__Equals_75473208(result, (System_String_o *)StringLiteral_23468/*"ok"*/, 0) )
  {
    v5 = (System_Action_object__o *)sub_21FFEBC(System_Action_string__TypeInfo);
    System_Action_object____ctor(v5, v4, (intptr_t)Method_FriendRootComponent__OnClickTabSearch_b__110_1__, 0);
    FriendRootComponent__FriendLockRequst((FriendRootComponent_o *)v4, (System_Action_string__o *)v5, v6);
  }
}


void FriendRootComponent___OnClickTabSearch_b__110_1(
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
  if ( (byte_59330B8 & 1) == 0 )
  {
    sub_21FFC50(&Method_FriendRootComponent__OnClickTabSearch_b__110_1__);
    sub_21FFC50(&StringLiteral_23468/*"ok"*/);
    this = (FriendRootComponent_o *)sub_21FFC50(&StringLiteral_3627/*"CLICK_TAB"*/);
    byte_59330B8 = 1;
  }
  if ( !res )
    goto LABEL_17;
  if ( !System_String__Equals_75473208(res, (System_String_o *)StringLiteral_23468/*"ok"*/, 0) )
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
    v6 = Method_FriendRootComponent__OnClickTabSearch_b__110_1__;
    if ( (*((_BYTE *)Method_FriendRootComponent__OnClickTabSearch_b__110_1__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_21FFC68(Method_FriendRootComponent__OnClickTabSearch_b__110_1__);
    v7 = (System_Reflection_MethodBase_o *)sub_21FFC34(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0);
    FriendRootComponent__set_tabKind(v8, 2, v9);
    FriendRootComponent__RefreshTab(v4, v10);
    classButtonControl = v4->fields.classButtonControl;
    if ( classButtonControl )
    {
      this = (FriendRootComponent_o *)v4->fields.myFSM;
      classButtonControl->fields.updateEnable = 0;
      if ( this )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3627/*"CLICK_TAB"*/, 0);
        return;
      }
    }
LABEL_17:
    sub_21FFECC(this, res);
  }
}


void FriendRootComponent___RequestFollowRemove_b__142_0(
        FriendRootComponent_o *this,
        System_String_o *res,
        const MethodInfo *method)
{
  FriendRootComponent_o *v4; // x19
  FriendOperationItemListViewItem_o *Item; // x0
  struct OtherUserGameEntity_o *otherUserGameEntity; // x21
  NetworkManager_ResultCallbackFunc_o *v7; // x20
  __int64 v8; // x1
  __int64 v9; // x2

  v4 = this;
  if ( (byte_59330B9 & 1) == 0 )
  {
    sub_21FFC50(&Method_FriendRootComponent_EndRequestFollowRemove__);
    sub_21FFC50(&Method_NetworkManager_getRequest_FollowdRemoveRequest___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&StringLiteral_23468/*"ok"*/);
    this = (FriendRootComponent_o *)sub_21FFC50(&StringLiteral_11543/*"REQUEST_NG"*/);
    byte_59330B9 = 1;
  }
  if ( !res )
    goto LABEL_15;
  if ( System_String__Equals_75473208(res, (System_String_o *)StringLiteral_23468/*"ok"*/, 0) )
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
        this = (FriendRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( this )
        {
          CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)this, 0, 0);
          v7 = (NetworkManager_ResultCallbackFunc_o *)sub_21FFEBC(NetworkManager_ResultCallbackFunc_TypeInfo);
          NetworkManager_ResultCallbackFunc___ctor(
            v7,
            (Il2CppObject *)v4,
            Method_FriendRootComponent_EndRequestFollowRemove__,
            0);
          if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v8, v9);
          this = (FriendRootComponent_o *)NetworkManager__getRequest_object_(
                                            v7,
                                            (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_FollowdRemoveRequest___);
          if ( this )
          {
            FollowdRemoveRequest__beginRequest((FollowdRemoveRequest_o *)this, otherUserGameEntity->fields.userId, 0);
            return;
          }
        }
LABEL_15:
        sub_21FFECC(this, res);
      }
    }
  }
  this = (FriendRootComponent_o *)v4->fields.myFSM;
  if ( !this )
    goto LABEL_15;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11543/*"REQUEST_NG"*/, 0);
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
  __int64 v8; // x1
  __int64 v9; // x2

  v4 = this;
  if ( (byte_59330AD & 1) == 0 )
  {
    sub_21FFC50(&Method_FriendRootComponent_EndRequestFriend__);
    sub_21FFC50(&Method_NetworkManager_getRequest_FriendOfferRequest___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_21FFC50(&StringLiteral_23468/*"ok"*/);
    this = (FriendRootComponent_o *)sub_21FFC50(&StringLiteral_11543/*"REQUEST_NG"*/);
    byte_59330AD = 1;
  }
  if ( !res )
    goto LABEL_14;
  if ( System_String__Equals_75473208(res, (System_String_o *)StringLiteral_23468/*"ok"*/, 0) )
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
        v7 = (NetworkManager_ResultCallbackFunc_o *)sub_21FFEBC(NetworkManager_ResultCallbackFunc_TypeInfo);
        NetworkManager_ResultCallbackFunc___ctor(
          v7,
          (Il2CppObject *)v4,
          Method_FriendRootComponent_EndRequestFriend__,
          0);
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v8, v9);
        this = (FriendRootComponent_o *)NetworkManager__getRequest_object_(
                                          v7,
                                          (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_FriendOfferRequest___);
        if ( this )
        {
          FriendOfferRequest__beginRequest((FriendOfferRequest_o *)this, otherUserGameEntity->fields.userId, 0);
          return;
        }
LABEL_14:
        sub_21FFECC(this, res);
      }
    }
  }
  this = (FriendRootComponent_o *)v4->fields.myFSM;
  if ( !this )
    goto LABEL_14;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11543/*"REQUEST_NG"*/, 0);
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
  __int64 v8; // x1
  __int64 v9; // x2

  v4 = this;
  if ( (byte_59330AE & 1) == 0 )
  {
    sub_21FFC50(&Method_FriendRootComponent_EndRequestFriend__);
    sub_21FFC50(&Method_NetworkManager_getRequest_FriendRemoveRequest___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&StringLiteral_23468/*"ok"*/);
    this = (FriendRootComponent_o *)sub_21FFC50(&StringLiteral_11543/*"REQUEST_NG"*/);
    byte_59330AE = 1;
  }
  if ( !res )
    goto LABEL_15;
  if ( System_String__Equals_75473208(res, (System_String_o *)StringLiteral_23468/*"ok"*/, 0) )
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
        this = (FriendRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( this )
        {
          CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)this, 0, 0);
          v7 = (NetworkManager_ResultCallbackFunc_o *)sub_21FFEBC(NetworkManager_ResultCallbackFunc_TypeInfo);
          NetworkManager_ResultCallbackFunc___ctor(
            v7,
            (Il2CppObject *)v4,
            Method_FriendRootComponent_EndRequestFriend__,
            0);
          if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v8, v9);
          this = (FriendRootComponent_o *)NetworkManager__getRequest_object_(
                                            v7,
                                            (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_FriendRemoveRequest___);
          if ( this )
          {
            FriendRemoveRequest__beginRequest((FriendRemoveRequest_o *)this, otherUserGameEntity->fields.userId, 0);
            return;
          }
        }
LABEL_15:
        sub_21FFECC(this, res);
      }
    }
  }
  this = (FriendRootComponent_o *)v4->fields.myFSM;
  if ( !this )
    goto LABEL_15;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11543/*"REQUEST_NG"*/, 0);
}


void FriendRootComponent___afterMainMenubarSelect_b__100_0(
        FriendRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  FriendRootComponent_o *v4; // x19
  System_Action_object__o *v5; // x20
  const MethodInfo *v6; // x2

  v4 = this;
  if ( (byte_59330B1 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_string__TypeInfo);
    sub_21FFC50(&Method_FriendRootComponent__afterMainMenubarSelect_b__100_1__);
    sub_21FFC50(&StringLiteral_23468/*"ok"*/);
    this = (FriendRootComponent_o *)sub_21FFC50(&StringLiteral_11543/*"REQUEST_NG"*/);
    byte_59330B1 = 1;
  }
  if ( !result )
    goto LABEL_8;
  if ( System_String__Equals_75473208(result, (System_String_o *)StringLiteral_23468/*"ok"*/, 0) )
  {
    v5 = (System_Action_object__o *)sub_21FFEBC(System_Action_string__TypeInfo);
    System_Action_object____ctor(
      v5,
      (Il2CppObject *)v4,
      Method_FriendRootComponent__afterMainMenubarSelect_b__100_1__,
      0);
    FriendRootComponent__FriendLockRequst(v4, (System_Action_string__o *)v5, v6);
    return;
  }
  this = (FriendRootComponent_o *)v4->fields.myFSM;
  if ( !this )
LABEL_8:
    sub_21FFECC(this, result);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11543/*"REQUEST_NG"*/, 0);
}


void FriendRootComponent___afterMainMenubarSelect_b__100_1(
        FriendRootComponent_o *this,
        System_String_o *res,
        const MethodInfo *method)
{
  FriendRootComponent_o *v4; // x19
  bool v5; // w8
  __int64 *v6; // x8

  v4 = this;
  if ( (byte_59330B2 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_11545/*"REQUEST_OK"*/);
    sub_21FFC50(&StringLiteral_23468/*"ok"*/);
    this = (FriendRootComponent_o *)sub_21FFC50(&StringLiteral_11543/*"REQUEST_NG"*/);
    byte_59330B2 = 1;
  }
  if ( !res )
    goto LABEL_10;
  v5 = System_String__Equals_75473208(res, (System_String_o *)StringLiteral_23468/*"ok"*/, 0);
  this = (FriendRootComponent_o *)v4->fields.myFSM;
  if ( !v5 )
  {
    if ( this )
    {
      v6 = &StringLiteral_11543/*"REQUEST_NG"*/;
      goto LABEL_9;
    }
LABEL_10:
    sub_21FFECC(this, res);
  }
  if ( !this )
    goto LABEL_10;
  v6 = &StringLiteral_11545/*"REQUEST_OK"*/;
LABEL_9:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v6, 0);
}


void FriendRootComponent__afterMainMenubarSelect(FriendRootComponent_o *this, const MethodInfo *method)
{
  FriendRootComponent_messageRequestCallback_o *v3; // x20
  const MethodInfo *v4; // x3
  const MethodInfo *v5; // x2

  if ( (byte_5933083 & 1) == 0 )
  {
    sub_21FFC50(&Method_FriendRootComponent__afterMainMenubarSelect_b__100_0__);
    sub_21FFC50(&FriendRootComponent_messageRequestCallback_TypeInfo);
    byte_5933083 = 1;
  }
  v3 = (FriendRootComponent_messageRequestCallback_o *)sub_21FFEBC(FriendRootComponent_messageRequestCallback_TypeInfo);
  FriendRootComponent_messageRequestCallback___ctor(
    v3,
    (Il2CppObject *)this,
    Method_FriendRootComponent__afterMainMenubarSelect_b__100_0__,
    v4);
  FriendRootComponent__messageDispChangeRequest(this, v3, v5);
}


void FriendRootComponent__beginFinish(FriendRootComponent_o *this, const MethodInfo *method)
{
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  OtherUserServantLimitCountManager_c *v14; // x0

  if ( (byte_5933054 & 1) == 0 )
  {
    sub_21FFC50(&OtherUserServantLimitCountManager_TypeInfo);
    sub_21FFC50(&RandomLimitCountManager_TypeInfo);
    byte_5933054 = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    goto LABEL_19;
  operationItemListViewManager->fields._isMessageApply_k__BackingField = 0;
  FriendOperationItemListViewManager__DestroyList(operationItemListViewManager, 0);
  operationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.operationConfirmMenu;
  if ( !operationItemListViewManager )
    goto LABEL_19;
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
LABEL_19:
    sub_21FFECC(operationItemListViewManager, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)operationItemListViewManager, 0, 0);
  this->fields.state = 0;
  this->fields.selectFriendEntity = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.selectFriendEntity, 0, v4, v5, v6, v7, v8, v9);
  if ( !*(&RandomLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, v10, v11);
  RandomLimitCountManager__set_EnableRandomLimitCount(0, 0);
  if ( !*(&OtherUserServantLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(OtherUserServantLimitCountManager_TypeInfo, v12, v13);
  if ( !byte_5932E91 )
  {
    sub_21FFC50(&OtherUserServantLimitCountManager_TypeInfo);
    byte_5932E91 = 1;
  }
  v14 = OtherUserServantLimitCountManager_TypeInfo;
  if ( !*(&OtherUserServantLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(OtherUserServantLimitCountManager_TypeInfo, v12, v13);
    v14 = OtherUserServantLimitCountManager_TypeInfo;
  }
  v14->static_fields->_IsEnableAdjustSupportLimitCount_k__BackingField = 0;
  OtherUserServantLimitCountManager__Clear(0);
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
  __int64 v10; // x1
  __int64 v11; // x2

  if ( (byte_593304E & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&ClassButtonControlComponent_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_FriendRootComponent_EndLoadOutGameAtlas__);
    sub_21FFC50(&Method_FriendRootComponent_changeClass__);
    byte_593304E = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0);
  SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 8, 39, 0);
  FriendRootComponent__CheckHelpUI(this, v3);
  bgTxtSprite = (UnityEngine_Component_o *)this->fields.bgTxtSprite;
  if ( !bgTxtSprite )
    goto LABEL_10;
  gameObject = UnityEngine_Component__get_gameObject(bgTxtSprite, 0);
  bgTxtSprite = (UnityEngine_Component_o *)BgTxtManager__IsActiveBgTxt(0);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)bgTxtSprite & 1, 0),
        classButtonControl = this->fields.classButtonControl,
        v8 = (ClassButtonControlComponent_CallbackFunc_o *)sub_21FFEBC(ClassButtonControlComponent_CallbackFunc_TypeInfo),
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
    sub_21FFECC(bgTxtSprite, v4);
  }
  FriendOperationItemListViewManager__SetupClassBoardInfo((FriendOperationItemListViewManager_o *)bgTxtSprite, 0);
  v9 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_FriendRootComponent_EndLoadOutGameAtlas__, 0);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v10, v11);
  AtlasManager__LoadOutGameAtlas(v9, 0);
}


void FriendRootComponent__beginResume(FriendRootComponent_o *this, Il2CppObject *data, const MethodInfo *method)
{
  __int64 naturalAligment; // x10
  FriendOperationItemListViewManager_o *Instance; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  CommonUI_o *v9; // x20
  const MethodInfo *v10; // x1

  if ( (byte_5933055 & 1) == 0 )
  {
    sub_21FFC50(&AvalonSceneManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&SupportInfoJump_TypeInfo);
    byte_5933055 = 1;
  }
  if ( data
    && (naturalAligment = SupportInfoJump_TypeInfo->_2.naturalAligment,
        data->klass->_2.naturalAligment >= (unsigned int)naturalAligment)
    && (SupportInfoJump_c *)data->klass->_2.typeHierarchy[naturalAligment - 1] == SupportInfoJump_TypeInfo )
  {
    this->fields.isReturnSupport = 1;
    Instance = (FriendOperationItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v9 = (CommonUI_o *)Instance;
    if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v7, v8);
    if ( !v9
      || (CommonUI__maskFadein(v9, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0),
          FriendRootComponent__RefreshTab(this, v10),
          (Instance = this->fields.operationItemListViewManager) == 0) )
    {
      sub_21FFECC(Instance, v7);
    }
    FriendOperationItemListViewManager__SetMode_39343356(Instance, 2, 0);
    SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 8, 39, 0);
    MainMenuBar__setMenuActive(1, 0, 0);
    SceneRootComponent__sendMessageStartUp((SceneRootComponent_o *)this, 0);
  }
  else
  {
    SceneRootComponent__beginResume_48429424((SceneRootComponent_o *)this, 0);
    this->fields.isReturnSupport = 0;
  }
}


void FriendRootComponent__beginStartUp(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  OtherUserServantLimitCountManager_c *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_String_o *MainBgmName; // x20
  __int64 v12; // x1
  TitleInfoControl_o *titleInfo; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  NetworkManager_ResultCallbackFunc_o *v20; // x20
  __int64 v21; // x1
  __int64 v22; // x2

  if ( (byte_5933050 & 1) == 0 )
  {
    sub_21FFC50(&BgmManager_TypeInfo);
    sub_21FFC50(&Method_FriendRootComponent_EndFriendRequest__);
    sub_21FFC50(&Method_NetworkManager_getRequest_FriendTopRequest___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&OtherUserServantLimitCountManager_TypeInfo);
    sub_21FFC50(&RandomLimitCountManager_TypeInfo);
    sub_21FFC50(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_21FFC50(&SoundManager_TypeInfo);
    byte_5933050 = 1;
  }
  if ( !*(&RandomLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, method, v2);
  RandomLimitCountManager__set_EnableRandomLimitCount(1, 0);
  if ( !*(&OtherUserServantLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(OtherUserServantLimitCountManager_TypeInfo, v4, v5);
  if ( !byte_5932E91 )
  {
    sub_21FFC50(&OtherUserServantLimitCountManager_TypeInfo);
    byte_5932E91 = 1;
  }
  v6 = OtherUserServantLimitCountManager_TypeInfo;
  if ( !*(&OtherUserServantLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(OtherUserServantLimitCountManager_TypeInfo, v4, v5);
    v6 = OtherUserServantLimitCountManager_TypeInfo;
  }
  v6->static_fields->_IsEnableAdjustSupportLimitCount_k__BackingField = 0;
  OtherUserServantLimitCountManager__Clear(0);
  if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v7, v8);
  MainBgmName = BgmManager__GetMainBgmName(0, 0);
  if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v9, v10);
  SoundManager__playBgm(MainBgmName, 0);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_21;
  TitleInfoControl__setTitleInfo(titleInfo, this->fields.myFSM, 1, 0, 43, 0);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_21;
  TitleInfoControl__setBackBtnSprite_46820572(titleInfo, 1, 0, 0, 0);
  this->fields.state = 0;
  this->fields.currentModeKind = 0;
  this->fields.selectFriendEntity = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.selectFriendEntity, 0, v14, v15, v16, v17, v18, v19);
  v20 = (NetworkManager_ResultCallbackFunc_o *)sub_21FFEBC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v20, (Il2CppObject *)this, Method_FriendRootComponent_EndFriendRequest__, 0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v21, v22);
  titleInfo = (TitleInfoControl_o *)NetworkManager__getRequest_object_(
                                      v20,
                                      (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_FriendTopRequest___);
  if ( !titleInfo )
LABEL_21:
    sub_21FFECC(titleInfo, v12);
  RequestBase__beginRequest((RequestBase_o *)titleInfo, 0);
}


void FriendRootComponent__beginStartUp_39484120(
        FriendRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  Il2CppClass *v16; // x8
  __int64 naturalAligment; // x9
  int32_t v18; // w1
  struct SceneJumpInfo_o *jumpInfo; // x8

  if ( (byte_5933051 & 1) == 0 )
  {
    sub_21FFC50(&SceneJumpInfo_TypeInfo);
    byte_5933051 = 1;
  }
  this->fields.jumpInfo = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.jumpInfo,
    0,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( data )
  {
    v16 = (Il2CppClass *)SceneJumpInfo_TypeInfo;
    naturalAligment = SceneJumpInfo_TypeInfo->_2.naturalAligment;
    if ( data->klass->_2.naturalAligment >= (unsigned int)naturalAligment
      && (SceneJumpInfo_c *)data->klass->_2.typeHierarchy[naturalAligment - 1] == SceneJumpInfo_TypeInfo )
    {
      this->fields.jumpInfo = (struct SceneJumpInfo_o *)data;
      if ( data->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      {
        if ( data->klass->_2.typeHierarchy[naturalAligment - 1] == v16 )
          v18 = (int)data;
        else
          v18 = 0;
      }
      else
      {
        v18 = 0;
      }
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.jumpInfo, v18, v10, v11, v12, v13, v14, v15);
      jumpInfo = this->fields.jumpInfo;
      if ( jumpInfo )
        this->fields.jumpTabKind = jumpInfo->fields.id;
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

  if ( (byte_593308D & 1) == 0 )
  {
    sub_21FFC50(&Method_FriendRootComponent_changeClass__);
    byte_593308D = 1;
  }
  v5 = Method_FriendRootComponent_changeClass__;
  if ( (*((_BYTE *)Method_FriendRootComponent_changeClass__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_21FFC68(Method_FriendRootComponent_changeClass__);
  v6 = (System_Reflection_MethodBase_o *)sub_21FFC34(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    sub_21FFECC(0, v7);
  FriendOperationItemListViewManager__SetClassId(operationItemListViewManager, classPos, 0, 0);
}


int32_t FriendRootComponent__get_tabKind(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t result; // w0
  FriendRootComponent_c *v5; // x0

  if ( (byte_593304D & 1) == 0 )
  {
    sub_21FFC50(&FriendRootComponent_TypeInfo);
    byte_593304D = 1;
  }
  result = this->fields.jumpTabKind;
  if ( result == 3 )
  {
    v5 = FriendRootComponent_TypeInfo;
    if ( !*(&FriendRootComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(FriendRootComponent_TypeInfo, method, v2);
      v5 = FriendRootComponent_TypeInfo;
    }
    return v5->static_fields->tabKindSave;
  }
  return result;
}


void FriendRootComponent__messageDispChangeRequest(
        FriendRootComponent_o *this,
        FriendRootComponent_messageRequestCallback_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x20
  ListViewManager_o *operationItemListViewManager; // x0
  int64_t v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int64 v14; // x22
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  int32_t ItemSum; // w23
  System_Collections_Generic_List_long__o *v22; // x21
  System_Collections_Generic_List_long__o *v23; // x22
  int32_t i; // w24
  struct System_Collections_Generic_List_UIDragDropListViewSurface__o *dropList; // x8
  struct System_Int64_array *items; // x9
  _QWORD *v27; // x8
  __int64 size; // x10
  Il2CppClass **v29; // x9
  struct System_Int64_array *v30; // x9
  _QWORD *v31; // x8
  __int64 v32; // x10
  __int64 v33; // x8
  System_Collections_Generic_List_long__o *v34; // x0
  NetworkManager_ResultCallbackFunc_o *v35; // x19
  __int64 v36; // x1
  __int64 v37; // x2
  FriendMessageHideSyncRequest_o *v38; // x19
  System_Int64_array *v39; // x20

  if ( (byte_593308B & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_long__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_long__TypeInfo);
    sub_21FFC50(&Method_NetworkManager_getRequest_FriendMessageHideSyncRequest___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_21FFC50(&Method_FriendRootComponent___c__DisplayClass111_0__messageDispChangeRequest_b__0__);
    sub_21FFC50(&FriendRootComponent___c__DisplayClass111_0_TypeInfo);
    sub_21FFC50(&StringLiteral_23468/*"ok"*/);
    byte_593308B = 1;
  }
  v5 = sub_21FFEBC(FriendRootComponent___c__DisplayClass111_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_36;
  *(_QWORD *)(v5 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = callback;
  v14 = v5 + 24;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)callback, v15, v16, v17, v18, v19, v20);
  operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    goto LABEL_36;
  if ( LOBYTE(operationItemListViewManager[1].fields.emptyMessageLabel) )
  {
    ItemSum = ListViewManager__get_ItemSum(operationItemListViewManager, 0);
    v22 = (System_Collections_Generic_List_long__o *)sub_21FFEBC(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v22,
      (const MethodInfo_44378D8 *)Method_System_Collections_Generic_List_long___ctor__);
    v23 = (System_Collections_Generic_List_long__o *)sub_21FFEBC(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v23,
      (const MethodInfo_44378D8 *)Method_System_Collections_Generic_List_long___ctor__);
    if ( ItemSum >= 1 )
    {
      for ( i = 0; ItemSum != i; ++i )
      {
        operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
        if ( !operationItemListViewManager )
          goto LABEL_36;
        operationItemListViewManager = (ListViewManager_o *)FriendOperationItemListViewManager__GetItem(
                                                              (FriendOperationItemListViewManager_o *)operationItemListViewManager,
                                                              i,
                                                              0);
        if ( !operationItemListViewManager )
          goto LABEL_36;
        if ( LODWORD(operationItemListViewManager->fields.dragParentObject) == 3 )
        {
          dropList = operationItemListViewManager->fields.dropList;
          if ( LOBYTE(operationItemListViewManager->fields.sort) )
          {
            if ( !dropList )
              goto LABEL_36;
            if ( !v22 )
              goto LABEL_36;
            items = v22->fields._items;
            v7 = (int64_t)dropList->fields._items;
            v27 = Method_System_Collections_Generic_List_long__Add__;
            ++v22->fields._version;
            if ( !items )
              goto LABEL_36;
            size = v22->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              v33 = v27[4];
              v34 = v22;
LABEL_25:
              System_Collections_Generic_List_long___AddWithResize(
                v34,
                v7,
                *(const MethodInfo_4438164 **)(*(_QWORD *)(v33 + 192) + 112LL));
              continue;
            }
            v29 = &items->obj.klass + size;
            v22->fields._size = size + 1;
          }
          else
          {
            if ( !dropList )
              goto LABEL_36;
            if ( !v23 )
              goto LABEL_36;
            v30 = v23->fields._items;
            v7 = (int64_t)dropList->fields._items;
            v31 = Method_System_Collections_Generic_List_long__Add__;
            ++v23->fields._version;
            if ( !v30 )
              goto LABEL_36;
            v32 = v23->fields._size;
            if ( (unsigned int)v32 >= LODWORD(v30->max_length) )
            {
              v33 = v31[4];
              v34 = v23;
              goto LABEL_25;
            }
            v29 = &v30->obj.klass + v32;
            v23->fields._size = v32 + 1;
          }
          v29[4] = (Il2CppClass *)v7;
        }
      }
    }
    v35 = (NetworkManager_ResultCallbackFunc_o *)sub_21FFEBC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v35,
      (Il2CppObject *)v5,
      Method_FriendRootComponent___c__DisplayClass111_0__messageDispChangeRequest_b__0__,
      0);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v36, v37);
    operationItemListViewManager = (ListViewManager_o *)NetworkManager__getRequest_object_(
                                                          v35,
                                                          (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_FriendMessageHideSyncRequest___);
    if ( v23 )
    {
      v38 = (FriendMessageHideSyncRequest_o *)operationItemListViewManager;
      operationItemListViewManager = (ListViewManager_o *)System_Collections_Generic_List_long___ToArray(
                                                            v23,
                                                            (const MethodInfo_4439BE4 *)Method_System_Collections_Generic_List_long__ToArray__);
      if ( v22 )
      {
        v39 = (System_Int64_array *)operationItemListViewManager;
        operationItemListViewManager = (ListViewManager_o *)System_Collections_Generic_List_long___ToArray(
                                                              v22,
                                                              (const MethodInfo_4439BE4 *)Method_System_Collections_Generic_List_long__ToArray__);
        if ( v38 )
        {
          FriendMessageHideSyncRequest__beginRequest(v38, v39, (System_Int64_array *)operationItemListViewManager, 0);
          return;
        }
      }
    }
LABEL_36:
    sub_21FFECC(operationItemListViewManager, v7);
  }
  if ( *(_QWORD *)v14 )
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(*(_QWORD *)v14 + 24LL))(
      *(_QWORD *)(*(_QWORD *)v14 + 64LL),
      StringLiteral_23468/*"ok"*/,
      *(_QWORD *)(*(_QWORD *)v14 + 40LL));
}


// local variable allocation has failed, the output may be wrong!
void FriendRootComponent__set_tabKind(FriendRootComponent_o *this, int32_t value, const MethodInfo *method)
{
  FriendRootComponent_c *v4; // x0

  if ( (byte_593304C & 1) == 0 )
  {
    sub_21FFC50(&FriendRootComponent_TypeInfo);
    byte_593304C = 1;
  }
  v4 = FriendRootComponent_TypeInfo;
  if ( !*(&FriendRootComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FriendRootComponent_TypeInfo, *(_QWORD *)&value, method);
    v4 = FriendRootComponent_TypeInfo;
  }
  v4->static_fields->tabKindSave = value;
}


void FriendRootComponent___c__DisplayClass111_0___ctor(
        FriendRootComponent___c__DisplayClass111_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void FriendRootComponent___c__DisplayClass111_0___messageDispChangeRequest_b__0(
        FriendRootComponent___c__DisplayClass111_0_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  struct FriendRootComponent_o *_4__this; // x8
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x9
  struct FriendRootComponent_messageRequestCallback_o *callback; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (operationItemListViewManager = _4__this->fields.operationItemListViewManager) == 0 )
    sub_21FFECC(this, result);
  callback = this->fields.callback;
  operationItemListViewManager->fields._isMessageApply_k__BackingField = 0;
  if ( callback )
    ((void (__fastcall *)(intptr_t, System_String_o *, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      result,
      callback->fields.method);
}


void FriendRootComponent___c__DisplayClass112_0___ctor(
        FriendRootComponent___c__DisplayClass112_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void FriendRootComponent___c__DisplayClass112_0___FriendLockRequst_b__0(
        FriendRootComponent___c__DisplayClass112_0_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  __int64 v6; // x1
  int32_t v7; // w21
  struct FriendRootComponent_o *_4__this; // x8

  if ( (byte_59330BA & 1) == 0 )
  {
    sub_21FFC50(&Method_ActionExtensions_Call_string___);
    sub_21FFC50(&StringLiteral_23468/*"ok"*/);
    byte_59330BA = 1;
  }
  operationItemListViewManager = (FriendOperationItemListViewManager_o *)System_String__op_Equality(
                                                                           result,
                                                                           (System_String_o *)StringLiteral_23468/*"ok"*/,
                                                                           0);
  if ( ((unsigned __int8)operationItemListViewManager & 1) != 0 && this->fields.sum >= 1 )
  {
    v7 = 0;
    do
    {
      _4__this = this->fields.__4__this;
      if ( !_4__this || (operationItemListViewManager = _4__this->fields.operationItemListViewManager) == 0 )
        sub_21FFECC(operationItemListViewManager, v6);
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
    (const MethodInfo_36CDF5C *)Method_ActionExtensions_Call_string___);
}


void FriendRootComponent_messageRequestCallback___ctor(
        FriendRootComponent_messageRequestCallback_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  __int64 (__fastcall *v13)(); // x8
  Il2CppObject *m_target; // x9
  __int64 v15; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_21FFD28(method) & 1) != 0 )
  {
    if ( v12 == 1 )
    {
      v13 = sub_1FEE5D8;
LABEL_8:
      this->fields.invoke_impl = (intptr_t)v13;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v12 )
    {
      v13 = sub_1FEE5BC;
      goto LABEL_8;
    }
    if ( !object )
    {
      v15 = sub_21FFEE8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_21FFD90(v15, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_9:
  this->fields.extra_arg = (intptr_t)sub_1FEE574;
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
  return (System_IAsyncResult_o *)sub_21FFC04(this, &v6, callback, object);
}


void FriendRootComponent_messageRequestCallback__EndInvoke(
        FriendRootComponent_messageRequestCallback_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_21FFC08(result, 0, method);
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